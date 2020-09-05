#include <iostream>

using namespace std;

int main()
{
    typedef long long ll;
    typedef vector<int> vi;
    typedef pair<int,int> pi;

    int n,h;
    int roadWidth = 0;
    int width;

    cin >> n>> h;


    int height;

    for(int i=0; i<n; i++){
        cin >> height;
        width = height > h ? 2 : 1;
        roadWidth += width;

    }
    cout << roadWidth;


    return 0;
}



