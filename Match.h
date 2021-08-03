/*
 * Match.h
 *
 *  Created on: 03-Aug-2021
 *      Author: hashmak
 */

#ifndef MATCH_H_
#define MATCH_H_
#include "bits/stdc++.h"
#include "Team.h"

using namespace std;
class Match {
	Team t1, t2;
public:
	Match(Team t1, Team t2);
	~Match();
	string getWinner();
};

#endif /* MATCH_H_ */
