# Download Great Start data for ec_state_ratings table.

EC_WORKBOOK_BASE='https://docs.google.com/spreadsheets/d/1smYR13Ge7YSMgPBoLrfQn3nG2wNA8kKeT5m-x8ITVoA/export?format=csv&gid=';

WGET=`which wget`

DEST_DIR=/tmp/ec_state_ratings

ORIG_DATA=$DEST_DIR/ec-state-ratings.csv

NEW_DATA=$DEST_DIR/ec-state-ratings-esdified.csv

TIMESTAMP=`date +%s`

SOURCE="google sheet" # this should be dynamically set via ???

mkdir -p $DEST_DIR

$WGET -O $ORIG_DATA "${EC_WORKBOOK_BASE}878101549"

# change id column title and add our additional fields to header in new file
head -1 $ORIG_DATA | sed 's/id,/esd_ec_id,/' | sed 's/$/,source,timestamp,rating_id/' > $NEW_DATA

# change to machine names
sed -i 's/Published Rating/PublishedRating/' $NEW_DATA
sed -i 's/Total Points (out of 50)/ptsTotal/' $NEW_DATA
sed -i 's/Staff Qualifications and Professional Development Points (out of 16)/ptsStaff/' $NEW_DATA
sed -i 's/Family and Community Partnership Points (out of 8)/ptsFamily/' $NEW_DATA
sed -i 's/Administration and Management Points (out of 6)/ptsAdmin/' $NEW_DATA
sed -i 's/Environment Points (out of 8)/ptsEnv/' $NEW_DATA
sed -i 's/Curriculum and Instruction Points (out of 12)/ptsCurr/' $NEW_DATA

# add empty fields to end of data rows
tail -n +2 $ORIG_DATA | sed "s/\$/,$SOURCE,$TIMESTAMP,NULL/" >> $NEW_DATA

# change blanks to NULL
sed -i -r 's/^,|,$/NULL,/g
:l
s/,,/,NULL,/g
t l' $NEW_DATA

# select certain columns & reorder
csvcut -c rating_id,esd_ec_id,source,timestamp,PublishedRating,ptsTotal,ptsStaff,ptsFamily,ptsAdmin,ptsEnv,ptsCurr $NEW_DATA > $NEW_DATA.tmp
mv $NEW_DATA.tmp $NEW_DATA

drush sqlq "LOAD DATA INFILE \"$NEW_DATA\" INTO TABLE ec_state_ratings COLUMNS TERMINATED BY ',' OPTIONALLY ENCLOSED BY '\"' ESCAPED BY '\"' LINES TERMINATED BY '\n' IGNORE 1 LINES;"
