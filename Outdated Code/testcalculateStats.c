//TESTED AND WORKS, currently being used

#ifndef TEST_CALCULATE_STATS
#define TEST_CALCULATE_STATS

#include "PC_FileIO.c"

void calculateStats(int runTime, int ammoRemaining, int totalTargets, bool isAttacked, int targetsShot, int outOfRange)
	{
		TFileHandle fout;
		bool fileOkay = openWritePC(fout, "stats.txt");

		runTime = time1[T1] / 1000;
		writeLongPC(fout,runTime);
		writeTextPC(fout, "seconds");
		writeEndlPC(fout);
		numGeeseShot = targetsShot;
		writeLongPC(fout,numGeeseShot);
		writeTextPC(fout, "geese shot");
		writeEndlPC(fout);
		if (ammoRemaining < 8)
			needReload = true;
			writeTextPC(fout, "Robot needs reloading");
			writeEndlPC(fout);
		if (ammoRemaining == 8)
			needReload = false;
			writeTextPC(fout, "Robot does not need reloading");
			writeEndlPC(fout);

		if(totalTargets - targetsShot == 0)
			missionStatus = "Mission was a Success!";
			writeTextPC(fout, "Mission was a Success!");
			writeEndlPC(fout);
		if (totalTargets - targetsShot != 0)
			missionStatus = "Mission was a Failure";
			writeTextPC(fout, "Mission was a Failure");
			writeEndlPC(fout);

			closeFilePC(fout);
	}

/*
task main()
{
	int runTime = 0;
	int numGeeseShot = 0;
	bool needReload = true;
	string missionStatus = "";
	calculateStats(runTime,numGeeseShot,needReload,missionStatus);

}
*/

#endif
