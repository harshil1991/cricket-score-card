/*
 * Player.cpp
 *
 *  Created on: 03-Aug-2021
 *      Author: hashmak
 */

#include "Player.h"

Player::Player(string playerName) {
	// TODO Auto-generated constructor stub
	name = playerName;
}
string Player::getName()
{
	return name;
}
int Player::getSixes()
{
	return this->sixes;
}
void Player::incSixes()
{
	this->sixes++;
}

int Player::getFours()
{
	return this->fours;
}
void Player::incFours()
{
	this->fours++;
}

int Player::getBalls()
{
	return this->balls;
}
void Player::incBalls()
{
	this->balls++;
}

int Player::getScore()
{
	return this->score;
}
void Player::incScore(int runs)
{
	score += runs;
}

void Player::setPlaying(bool isplaying)
{
	this->isPlay  = isplaying;
}

bool Player::playing()
{
	return this->isPlay;
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

