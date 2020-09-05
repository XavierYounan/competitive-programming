#include <iostream>

using namespace std;

int main()
{
    int n, aWins;
    string wins;
    char win;
    int score;
    cin >> n;
    cin >> wins;

    for(int i=0; i<n; i++){
        win = wins[i];
        cout << win << " ";
        //score = win == "A" ? 1 : -1;
        //aWins += score;
    }

    if(score==0){
        cout << "Friendship";
    }else{
        if (score>1){
            cout << "Anton";
        }else{
            if(score<1){
                cout << "Danik";
            }
        }
    }


    return 0;
}
