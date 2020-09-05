#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile("sitin.txt");
    ofstream outputFile("sitout.txt");

    int row, seats, people, sitting, standing;

    inputFile >> row >> seats >> people;

    sitting = row * seats;
    standing = people - sitting;
    standing = standing < 0 ? 0 : standing;

    if (people > row*seats) {
        sitting = row*seats;
        standing = people - sitting;
    } else {
        sitting = people;
        standing = 0;
    }


    outputFile << sitting << " " << standing;

    return 0;
}
