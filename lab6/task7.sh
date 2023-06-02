gcc task7.c -o task7
./task7 &> /dev/null &
ps -axjf | grep task7
kill -9 $(ps aux | grep task7 | awk '{ print $2 }')
