/*

Copyright 2017 Ethan Jett




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

string didWin(char player) {
    char computer = pickComputer();
    if (player == computer) {
        return "Tie";
    }

}

int main() {

    return 0;
}
