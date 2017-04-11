/*
Copyright 2017 Ethan Jett and SamwiseFilmore

 This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/ /*
This is a game of Rock Paper Scisors lizard spock it is made for fun purposes only.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

char pickComputer() {
    int rngval = rand() % 5 + 1;
    switch (rngval) {
    case 1:
        return 'R';
        break;
    case 2:
        return 'P';
        break;
    case 3:
        return 'C';
        break;
    case 4:
        return 'L';
        break;
    case 5:
        return 'S';
        break;
    default:
        return 'N';
        break;
    }
}

string dtrmnWin(char player, char computer) {
    //Make sure it's not a tie before we go and do a whole bunch of comparisons
    if (player == computer) {
        return "Tie";
    }
    //Winning Scenarios
    if ((player == 'C') && (computer == 'P')) {
		return "Player";
	} if ((player == 'P') && (computer == 'R')) {
		return "Player";
	} if ((player == 'R') && (computer == 'L')) {
		return "Player";
	} if ((player == 'L') && (computer == 'S')) {
		return "Player";
	} if ((player == 'S') && (computer == 'C')) {
		return "Player";
	} if ((player == 'C') && (computer == 'L')) {
		return "Player";
	} if ((player == 'L') && (computer == 'P')) {
		return "Player";
	} if ((player == 'P') && (computer == 'S')) {
		return "Player";
	} if ((player == 'S') && (computer == 'R')) {
		return "Player";
	} if ((player == 'R') && (computer == 'C')) {
		return "Player";
	}
    //Losing Senarios
	if ((computer == 'C') && (player == 'P')) {
		return "Computer";
	} if ((computer == 'P') && (player == 'R')) {
		return "Computer";
	} if ((computer == 'R') && (player == 'L')) {
		return "Computer";
	} if ((computer == 'L') && (player == 'S')) {
		return "Computer";
	} if ((computer == 'S') && (player == 'C')) {
		return "Computer";
	} if ((computer == 'C') && (player == 'L')) {
		return "Computer";
	} if ((computer == 'L') && (player == 'P')) {
		return "Computer";
	} if ((computer == 'P') && (player == 'S')) {
		return "Computer";
	} if ((computer == 'S') && (player == 'R')) {
		return "Computer";
	} if ((computer == 'R') && (player == 'C')) {
		return "Computer";
	}
	return "None";
}

char promptUser() {
    char choice;
    cout << endl << "Please input the corresponding Char for your choice (Or \"N\" to get out): " << endl;
    cout << "Rock: R" << endl
        << "Paper: P" << endl
        << "Scissors: C" << endl
        << "Lizard: L" << endl
        << "Spock: S" << endl << endl;
    cin >> choice;
    return choice;
}

int main() {
    char choice, computer;
    do {
        choice = promptUser();
        computer = pickComputer();
        cout << "Computer Picked: " << computer << endl;
        cout << "Winner is: " << dtrmnWin(choice, computer) << endl;
    } while (choice != 'N');
    return 0;
}
