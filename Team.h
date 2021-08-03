/*
 * Team.h
 *
 *  Created on: 03-Aug-2021
 *      Author: hashmak
 */

#ifndef TEAM_H_
#define TEAM_H_
#include "Player.h"
using namespace std;
class Team {
	int overs = 0;
	int total = 0;
	int wicket = 0;
	int numeberOfPlayers = 0;
	string teamName = "";
	vector<Player*> playerStat;
	bool isInteger(string &str);
	#define SPACES "     "
	void printDashboard(vector<Player*> &playerStat)
	{
	        cout << "player name" << SPACES << "Score" << SPACES << "4s" << SPACES << "6s" << SPACES << "Balls\n";
	        for (int i = 0; i < playerStat.size(); i++)
	        {

	                cout << playerStat[i]->getName() << SPACES;
	                cout << playerStat[i]->getScore() << SPACES;
	                cout << playerStat[i]->getFours() << SPACES;
	                cout << playerStat[i]->getSixes() << SPACES;
	                cout << playerStat[i]->getBalls() << SPACES;
	                cout << "\n";
	        }
	}

public:
	Team(int, int);
	int getTotal();
	void getOvers();
	void getNumberOfplayers();
	void getBattingOrder();
	void setName(string);
	void getInfoAndPlay();
	string getName();
	void startMatch();
};

#endif /* TEAM_H_ */
