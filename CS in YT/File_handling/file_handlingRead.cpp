#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream myFile;
    myFile.open("L.txt", ios::in); // read
    if (myFile.is_open())
    {
        string line;
        while (getline(myFile, line))
        {
            cout << line << endl;
        }
        myFile.close();
    }
}