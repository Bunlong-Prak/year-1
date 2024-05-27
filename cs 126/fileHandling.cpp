#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream myFile("files\\test_file.txt", ios::out | ios::in);
    char ch;
    ch = 'a';
    myFile.seekp(0, ios::end);//pointer to the end of the file
    myFile.put(ch);//put the content of ch to the file
    myFile.seekg(ios::beg);//pointer to the beginning of the file
    myFile.get(ch);//read character being pointed to
    cout << ch;//display ch
    myFile.close();
    /*ofstream writeHere; //declare object "writeHere" for class "ofstream"
    //open file to append string
    writeHere.open ("files\\test_file.txt",ios::app);
    writeHere<<"Appending string at the end of the file...";
    writeHere.close(); */
    return 0;
}