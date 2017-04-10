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
