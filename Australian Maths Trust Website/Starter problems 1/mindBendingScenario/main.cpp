#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

class Rectangle{
    public:
        int x1, y1, x2, y2, area;
        Rectangle(int x1, int y1, int x2, int y2){
            x1 = x1;
            y1 = y1;
            x2 = x2;
            y2 = y2;
            area = abs((x1 - x2) * (y1 - y2));
            cout << "area is: " << area << endl;
        }
};

int main()
{
    ifstream inputFile("bendin.txt");
    ofstream outputFile("bendout.txt");


    int x1, y1, x2, y2;
    int x3, y3, x4, y4;

    inputFile >> x1 >> y1 >> x2 >> y2;
    inputFile >> x3 >> y3 >> x4 >> y4;

    Rectangle r1 = Rectangle(x1,y1,x2,y2);
    Rectangle r2 = Rectangle(x3,y3,x4,y4);

    int leftInter, rightInter, topInter,  bottomInter, interArea;

    leftInter = max(x1,x3);
    rightInter = min(x2,x4);

    topInter = min(y2,y4);
    bottomInter = max(y1,y3);

    if (leftInter < rightInter && bottomInter < topInter) {
        Rectangle col = Rectangle(leftInter,topInter,rightInter,bottomInter);
        interArea = col.area;
    }else{
        interArea = 0;
    }

    int area = r1.area + r2.area - interArea;




    outputFile << area ;
    outputFile.close();
    return 0;
}

