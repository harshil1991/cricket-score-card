/*
 * Match.cpp
 *
 *  Created on: 03-Aug-2021
 *      Author: hashmak
 */

#include "Match.h"

Match::Match(Team t1, Team t2) {
	this->t1 =t1;
	this->t2 = t2;
}

string Match::getWinner()
{
	if (t1.getTotal() > t2.getTotal())
		return t1.getName();
	return t2.getName();
}


Match::~Match() {
	// TODO Auto-generated destructor stub
}

