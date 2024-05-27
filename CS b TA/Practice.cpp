#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream myFile;
    myFile.open("input.txt", ios::out);
    string var1, var2;
    
    if (myFile.good())
    {
        myFile << "cat dog\n";
        myFile << "it is raining cat and dog\n";
        myFile.close();
    }
    myFile.open("input.txt", ios::app);
    if (myFile.good())
    {
        myFile << ":)";
        myFile.close();
    }

    myFile.open("input.txt", ios::in);
    myFile >> var1;
    myFile >> var2;

    cout << var1 << " " << var2;
}
