#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream myFile;
    myFile.open("file1.txt", ios::out);
    if (myFile.is_open())
    {
        myFile << "Hello\n";
        myFile << "my name is Near\n";
        myFile.close();
    }
    myFile.open("file1.txt", ios::app); // append
    if (myFile.is_open())
    {
        myFile << "hello2";
        myFile.close();
    }
}
