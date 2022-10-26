#include <string>
#include <iostream>

using namespace std;

int main()
{
	int maxMemberParticipants = 5;
	int teamMemberParticipants = 3; 
	int validMemberParticipants = 0;

	int numberOfMembers, maxParticipants;
	cin >> numberOfMembers >> maxParticipants;
	int timesParticipants[numberOfMembers];

	for (int i = 0; i < numberOfMembers; i++)
	{
		cin >> timesParticipants[i];
		bool isValidParticipant = timesParticipants[i] + maxParticipants <= 5;
		if (isValidParticipant)
		{
			validMemberParticipants++;
		}
	}

	int numberOfTeams = validMemberParticipants / teamMemberParticipants;
	cout << numberOfTeams << endl;
}
