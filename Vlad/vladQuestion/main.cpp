#include <bits/stdc++.h> // automatically includes alot of libarys eg <math> <iostream> <fstream> <string>

using namespace std;


int main()
{
    string baseString;

    cin >> baseString;

    unsigned short current;


    for(int i=0; i<baseString.size(); i++){
        //cout << "String before: " << baseString[i] << endl;
        current = (unsigned short) baseString[i]; // cast character data type to unsigned short

        //cout << "byte before: " << current << endl;

        //cout << "String: " << baseString[i] << " short: " << current << endl;
        //Verify conversions using: https://www.w3schools.com/charsets/ref_utf_basic_latin.asp


        // a string is 97 unsigned short
        // z string is 122 unsignged short

        // A string is 65 unsigned short
        // Z string is 90 unsigned short


        // Assume upper and lowercase letters
        if((current > 96 && current < 123) || (current > 64 && current < 91)){
            //is letter
            current = ~current; // sets all 1 to 0 and 0 to 1
            current |= 32; // 00100000 (sets third but to 1)
            current = ~current;


        }else{
            //is other
            current |= 64; //01000000 (sets seccond bit to 1
        }

        //Check bitwise operations using https://www.binaryhexconverter.com/binary-to-decimal-converter


        //cout << "byte after: " << current << endl;

        baseString[i] = (char) current; // cast unsigned short to character
        //Verify this conversion using same method as before

        //cout << "String after: " << baseString[i] << endl << endl;

    }

    cout << "Converted string: " << baseString << endl;


    return 0;
}

