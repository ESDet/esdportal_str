# Download Great Start data for ec_state_ratings table.

EC_WORKBOOK_BASE='https://docs.google.com/spreadsheets/d/1smYR13Ge7YSMgPBoLrfQn3nG2wNA8kKeT5m-x8ITVoA/export?format=csv&gid=';

WGET=`which wget`

DESTDIR=/tmp/ec_state_ratings

mkdir -p $DESTDIR

$WGET -O $DESTDIR/ec-state-ratings.csv "${EC_WORKBOOK_BASE}878101549"
