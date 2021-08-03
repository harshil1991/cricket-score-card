/*
 * Player.h
 *
 *  Created on: 03-Aug-2021
 *      Author: hashmak
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include "bits/stdc++.h"

using namespace std;
class Player {
	string name = "";
	int score = 0;
	int fours = 0;
	int sixes = 0;
	int balls = 0;
	bool isPlay = false;
public:
	Player(string);
	int getSixes();
	void incSixes();

	string getName();

	int getFours();
	void incFours();

	int getBalls();
	void incBalls();

	int getScore();
	void incScore(int runs);

	void setPlaying(bool isplay);
	bool playing();
	~Player();
};
#endif /* PLAYER_H_ */
