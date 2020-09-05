#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

bool findCanEat(int meal[]){

    bool eat = false;

    if(meal[0] > 0 && meal[1] > 0){
    eat = true;
    }

    if(meal[1] > 0 && meal[2] > 0){
    eat = true;
    }

    if(meal[2] > 0 && meal[0] > 0){
    eat = true;
    }

    return eat;
}


int findId(int meal[], int mag){
    for(int i=0; i<3; i++){
        if(meal[i] == mag){
            return i;
        }
    }
    return -1;
}


int main()
{
    ifstream inputFile("curryin.txt");
    ofstream outputFile("curryout.txt");


    int c,r,v;
    int x,y,z;

    x = 0;
    y = 0;
    z = 0;

    inputFile >> c >> r >> v;

    int meal[] = {c,r,v};


    bool canEat = findCanEat(meal);

    int big, small;

    int bigId, smallId, secId;

    //cout << "counter: ";
    //cout << x << " " << y << " " << z;

    while(canEat){
        big = *max_element(meal, meal+3);
        bigId = findId(meal,big);
        small = *min_element(meal, meal+3);
        smallId = findId(meal,small);





        secId = 0+1+2 - smallId - bigId;

        if(bigId == smallId){
            meal[0]--;
            meal[1]--;
            z++;
        }


        if(bigId == 0 && secId ==1){
            meal[0]--;
            meal[1]--;
            z++;
        }

        if(bigId == 0 && secId == 2){
            meal[0]--;
            meal[2]--;
            y++;

        }

        if(bigId == 1 && secId ==0){
            meal[0]--;
            meal[1]--;
            z++;
        }

        if(bigId == 1 && secId ==2){
            meal[1]--;
            meal[2]--;
            x++;
        }

        if(bigId == 2 && secId ==0){
            meal[0]--;
            meal[2]--;
            y++;
        }

        if(bigId == 2 && secId ==1){
            meal[1]--;
            meal[2]--;
            x++;
        }


        //cout << "Meal: ";
        //cout << meal[0] << meal[1] << meal[2] << endl;
        //cout << "counter: ";
        //cout << x << " " << y << " " << z;

        canEat = findCanEat(meal);

    }

    //cout << meal[0] << " " << meal[1] << " " << meal[2];

    outputFile << x << " " << y << " " << z;

    outputFile.close();
    return 0;
}

