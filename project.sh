#!/bin/bash

echo "Content-type: text/html"
echo ""

echo "<html><head><title>Sound Kitchen</title></head>"

echo "<body><p>Query a digit for a different song</p>"

[[ $QUERY_STRING =~ ([0-9])*([0-9]) ]]

echo "<p>You Entered: ${BASH_REMATCH[0]}</p>

case ${BASH_REMATCH[0]} in
[0]
Message="Song 0"
;;
[1]
Message="Song 1"
;;
[2]
Message="Song 0"
;;
[3]
Message="Song 1"
;;
[4]
Message="Song 0"
;;
[5]
Message="Song 1"
;;
[6]
Message="Song 0"
;;
[7]
Message="Song 1"
;;
[8]
Message="Song 0"
;;
[9]
Message="Song 1"
;;
esac

echo "<p>You Ordered: $Message</p></body></html>"
