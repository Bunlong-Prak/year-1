#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main()
{
   /* string mystr;
    cout << "waht is your favorite course? "<< endl;
    getline(cin,mystr);
    cout << "I love " << mystr << " too";

    return 0;*/
char str1 [10] = {'h','e','l','l','o'};
char str2 [10] = " world";
char str3 [15];
int len;

strcpy(str3,str1);
cout << "str3: " << str3 << endl;
strcat(str1,str2);
cout << "str1 and str2: " << str1 << endl;

len = strlen(str1);
cout << "the length of str1 is: " << len << endl;

}