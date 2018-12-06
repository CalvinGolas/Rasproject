#!/bin/bash

echo "Content-type: text/html"
echo ""

echo "<html><head><title>Sound Kitchen</title></head>"

echo "<body><p>Query a digit to order a different song</p>"

[[ $QUERY_STRING =~ ([0-9])*([0-9]) ]]

case ${BASH_REMATCH[0]} in
[0])
Message="Song 0"
;;
[1])
Message="Song 1"
;;
[2])
Message="Song 2"
;;
[3])
Message="Song 3"
;;
[4])
Message="Song 4"
;;
[5])
Message="Song 5"
;;
[6])
Message="Song 6"
;;
[7])
Message="Song 7"
;;
[8])
Message="Song 8"
;;
[9])
Message="Song 9"
;;
[1][2][1][0][1][8][1][5])
Message="From the secret menu, the house special: ODE TO ADA"
;;
*)
Message="You failed to order a song on the menu, so here is GARBAGE SONG on the house!"
;;
esac

echo "<p>You Ordered: $Message</p></body></html>"
