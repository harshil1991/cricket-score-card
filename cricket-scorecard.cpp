#include "Team.h"
#include "Match.h"

#include <iostream>
using namespace std;

int getNumberOfplayers()
{
	int numeberOfPlayers;
	cout << "No. of players for each team:";
	cin >> numeberOfPlayers;
	return numeberOfPlayers;

}

int getOvers()
{
	int overs;
	cout << "No of overs:";
	cin >> overs;
	return overs;
}

int main(int argc, char **argv) {
	int players = getNumberOfplayers();
	int overs = getOvers();

	Team t1(overs, players);
	t1.setName("Team 1");
	t1.getInfoAndPlay();

	Team t2(overs, players);
	t2.setName("Team 2");
	t2.getInfoAndPlay();

	Match m(t1, t2);
	cout << m.getWinner() << " won by " << abs(t1.getTotal() - t2.getTotal()) << " runs!!!" << "\n";
	return 0;
}
