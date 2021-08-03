/*
 * Team.cpp
 *
 *  Created on: 03-Aug-2021
 *      Author: hashmak
 */

#include "Team.h"

Team::Team(int overs, int players)
{
	this->overs = overs;
	this->numeberOfPlayers = players;
}

bool Team::isInteger(string &str)
{
        return str.find_first_not_of("0123456789") == std::string::npos;
}

void Team::getInfoAndPlay()
{
	getBattingOrder();
	startMatch();
}



void Team::startMatch()
{
	int index = 0;
			bool inc = true;
			int  nextP = 2;
			int oneP = 0, secP = 1;
			for (int over = 1; over <= overs; over++)
			{
				cout << "Over: " << over << "\n";
				for (int ball = 0; ball < 6;)
				{
					string run;
					cin >> run;
					if (isInteger(run))
					{
						ball++;
						int runs = stoi(run);
						total += runs;
						playerStat[index]->incBalls();
						playerStat[index]->incScore(runs);
						if (runs % 2 != 0)
						{
							if (inc)
								index = secP;
							else
								index = oneP;
							inc = !inc;
						}
						if (runs == 4)
						{
							playerStat[index]->incFours();
						}
						else if (runs == 6)
						{
							playerStat[index]->incSixes();
						}
					}
					else if (run == "W")
					{
						playerStat[index]->incBalls();
						ball++;
						wicket++;
						if (wicket == numeberOfPlayers-1)
						{
							// ALL OUT
							break;
						}
						if (oneP == index)
						{
							oneP = nextP;
						}
						else
							secP = nextP;
						index=nextP;
						nextP++;
						continue;
					}
					else if (run == "Wd")
					{
						total++;
					}
					else if (run == "Nb")
					{
						playerStat[index]->incBalls();
						total++;
					}
				}

				printDashboard(playerStat);
				cout << "Total: " << total << "/" << wicket << endl;
				cout << "Overs:" << over <<endl;
				if (inc)
					index = secP;
				else
					index = oneP;
				inc = !inc;
			}
}

void Team::setName(string n)
{
	teamName = n;
}

string Team::getName()
{
	return teamName;
}

int Team::getTotal()
{
	return total;
}

void Team::getOvers()
{
	cout << "No of overs:";
	cin >> this->overs;
}

void Team::getBattingOrder()
{
	cout << "Batting Order for " << teamName <<  endl;
	for (int i = 0; i < numeberOfPlayers; i++)
	{
		string playername;
		cin >> playername;
		playerStat.push_back(new Player(playername));
	}
}

void Team::getNumberOfplayers()
{
	cout << "No. of players for each team:";
	cin >> this->numeberOfPlayers;

}


