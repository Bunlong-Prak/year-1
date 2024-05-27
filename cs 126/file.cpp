#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int main()
{
    fstream myFile("files\\poem_thoreau.txt", ios::out | ios::in);
    char ch;
    int string_ctr = 0;
    int comma_ctr, uctr, lctr;
    comma_ctr = uctr = lctr = 0;

    myFile.seekg(ios::beg);
    while (!myFile.eof())
    {
        myFile.get(ch);
        if (isupper(ch))
        {
            uctr++;
            ch = tolower(ch);
        }
        else if (islower(ch))
        {
            lctr++;
            ch = toupper(ch);
        }
        if (ch == ',')
            comma_ctr++;

        cout << ch;
        string_ctr++;
    }
    cout << "\nThe number of commas are: " << comma_ctr;
    cout << "\nThe number of uppercase characters are: " << uctr;
    cout << "\nThe number of lowercase characters are: " << lctr;
    cout << "\nThe length of the sting is: " << string_ctr;
    myFile.close();
    return 0;
}