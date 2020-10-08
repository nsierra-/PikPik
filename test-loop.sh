#/bin/sh
#Use this script to automatically launch PikPik on the application host when ".test-loop-trigger" file is present
echo "PikPik test loop...";

while :
do
	if test -f ".test-loop-trigger"; then
		rm .test-loop-trigger;
		./pikpik ;
		clear ;
		echo "PikPik test loop...";
	fi
	sleep 1
done