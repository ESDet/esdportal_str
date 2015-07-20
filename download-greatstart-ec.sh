# Dependencies:
#  * csvkit
#  * csvsed

NOW=`date +%s`

XLSX_EXPORT_FILE="export-$NOW.xlsx"

CSV_EXPORT_FILE="export-$NOW.csv"

CSV_IMPORT_FILE="import-$NOW.csv"

IDS_FILE="ids-$NOW.csv"

ESD_EL_2015_FILE="esd_el_2015-$NOW.csv"

JOINED_WORKING_DATA="joined-$NOW.csv"

curl -o/dev/null -s 'http://stage.worklifesystems.com/Login/LoginGuest?AgencyID=4' -H 'Pragma: no-cache' -H 'DNT: 1' -H 'Accept-Encoding: gzip, deflate, sdch' -H 'Accept-Language: en-US,en;q=0.8,fr;q=0.6' -H 'User-Agent: Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/45.0.2454.6 Safari/537.36' -H 'HTTPS: 1' -H 'Accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8' -H 'Cache-Control: no-cache' -H 'Referer: http://stage.worklifesystems.com/parent/4' -H 'Connection: keep-alive' --compressed --cookie-jar cookies.txt --location

curl -o/dev/null -s 'http://stage.worklifesystems.com/Staff_ProviderSearch/GetReferralExportSearchOptions?dataType=County&_=1437004650942' -H 'Pragma: no-cache' -H 'DNT: 1' -H 'Accept-Encoding: gzip, deflate, sdch' -H 'Accept-Language: en-US,en;q=0.8,fr;q=0.6' -H 'User-Agent: Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/45.0.2454.6 Safari/537.36' -H 'Accept: */*' -H 'Cache-Control: no-cache' -H 'X-Requested-With: XMLHttpRequest' -H 'Connection: keep-alive' -H 'Referer: http://stage.worklifesystems.com/ReferralUpdate' --compressed --cookie cookies.txt --cookie-jar cookies.txt

curl -s 'http://stage.worklifesystems.com/Staff_ProviderSearch/GetExportData' -H 'Accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8' -H 'Referer: http://stage.worklifesystems.com/ReferralUpdate' -H 'Origin: http://stage.worklifesystems.com' -H 'User-Agent: Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/45.0.2454.6 Safari/537.36' -H 'HTTPS: 1' -H 'Content-Type: application/x-www-form-urlencoded' --data 'TopLevelSearch=County&PrimarySearchSelections=Macomb&PrimarySearchSelections=Oakland&PrimarySearchSelections=Wayne' --compressed --cookie cookies.txt --location > $XLSX_EXPORT_FILE

# convert to CSV
in2csv -f xlsx $XLSX_EXPORT_FILE > $CSV_EXPORT_FILE

# generate ESD EC IDs
csvcut -c 2 $CSV_EXPORT_FILE > $IDS_FILE
sed -i 's/License Number/esd_ec_id/' $IDS_FILE
sed -i 's/D[A-Z]//' $IDS_FILE

# integrate esd_ec_id into beginning of import file
paste -d, $IDS_FILE $CSV_EXPORT_FILE > $CSV_IMPORT_FILE

# change to machine names
sed -i 's/Published Rating/PublishedRating/' $CSV_IMPORT_FILE
sed -i 's/Total Points (out of 50)/ptsTotal/' $CSV_IMPORT_FILE
sed -i 's/Staff Qualifications and Professional Development Points (out of 16)/ptsStaff/' $CSV_IMPORT_FILE
sed -i 's/Family and Community Partnership Points (out of 8)/ptsFamily/' $CSV_IMPORT_FILE
sed -i 's/Administration and Management Points (out of 6)/ptsAdmin/' $CSV_IMPORT_FILE
sed -i 's/Environment Points (out of 8)/ptsEnv/' $CSV_IMPORT_FILE
sed -i 's/Curriculum and Instruction Points (out of 12)/ptsCurr/' $CSV_IMPORT_FILE

# download esd el 2015 data & convert to csv
curl -s https://portal.excellentschoolsdetroit.org/api/1.0/views/esd_el_2015.json | in2csv -f json > $ESD_EL_2015_FILE

# join data
csvjoin -c esd_ec_id,program_id $CSV_IMPORT_FILE $ESD_EL_2015_FILE > $JOINED_WORKING_DATA

# add new cols to end of new file
sed -i '1!b;s/$/state_points,total_points,overall_rating/' $JOINED_WORKING_DATA
