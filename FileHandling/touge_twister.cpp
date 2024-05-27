#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>
#include <iomanip>
using namespace std;
#define maxx 1000
string keep_char_space(string phrase)
{
    string Words;
    string myLine;
    string temp;
    int length = phrase.length();
    for (int i = 0; i < length; i++)
    {
        if (isalpha(phrase[i]) || phrase[i] == ' ')
        {
            Words += phrase[i];
        }
    }
    length = Words.length();
    temp = Words;
    for (int i = temp.length(); i > 0; i--)
    {
        if (isalpha(temp[i]))
        {
            break;
        }
        else
        {
            for (int j = 0; j < temp.length(); j++)
            {
                myLine += temp[j];
            }
            temp = myLine;
            myLine = "";
        }
    }
    return temp;
}
int word_count(string phrase)
{
    int countword = 1;
    for (int i = 0; i < phrase.length(); i++)
    {
        if (isspace(phrase[i]))
        {
            countword++;
        }
    }
    return countword;
}
int main()
{
    fstream file, newfile;
    string phrase;
    string word[maxx];
    string wordoccured[maxx];
    string tempword;
    string temp;
    string strconcat;
    int occurence = 0;
    int wordcount = 0;
    file.open("tougueTwisters.txt", ios::in);
    if (file.is_open())
    {
        while (getline(file, phrase))
        {
            continue;
        }
        file.close();
    }
    phrase = keep_char_space(phrase);
    wordcount = word_count(phrase);
    newfile.open("TheTougeTwisterNEW.txt", ios::out);
    if (newfile.is_open())
    {
        newfile << phrase;
        newfile.close();
    }
    newfile.open("TheTougeTwisterNEW.txt", ios::in);
    if (newfile.is_open())
    {
        for (int j = 0; j < wordcount; j++)
        {
            newfile >> word[j];
            tempword = word[j];
            for (int i = 0; i < tempword.size(); i++)
            {
                if ((tempword[i] >= 'a' && tempword[i] <= 'z') || (tempword[i] >= 'A' && tempword[i] <= 'Z'))
                {
                    temp = temp + tempword[i];
                }
            }
            word[j] = temp;
            if (j < wordcount)
            {
                strconcat += word[j] + " ";
            }
            temp = "";
        }
        newfile.close();
    }
    newfile.open("TheTougeTwisterNEW.txt", ios::out);
    if (newfile.is_open())
    {
        newfile << strconcat;
        newfile << endl;
        newfile.close();
    }
    wordcount = word_count(strconcat) - 1;
    string tempcompare;
    string tempwordcompare;
    int checkwordcount = 0;
    int totaloccurences = 0;
    int totalword = 0;
    for (int i = 0; i < wordcount; i++)
    {
        tempcompare = word[i];
        transform(tempcompare.begin(), tempcompare.end(), tempcompare.begin(), ::tolower);
        word[i] = tempcompare;
        tempcompare = "";
    }
    system("cls");
    for (int i = 0; i < wordcount; i++)
    {
        bool flag = false;
        int occuredcount = 0;

        for (int j = 0; j < checkwordcount; j++)
        {
            if (word[i] == wordoccured[j])
            {
                flag = true;
            }
        }
        if (flag)
            continue;
        wordoccured[checkwordcount] = word[i];
        checkwordcount++;
        for (int j = 0; j < wordcount; j++)
        {
            if (word[i] == word[j])
            {
                occuredcount++;
            }
        }
        cout << left << setw(10) << word[i] << " occurs " << occuredcount << " times.\n";
        totalword += 1;
        totaloccurences += occuredcount;

        newfile.open("TheTougeTwisterNEW.txt", ios::app);
        if (newfile.is_open())
        {
            newfile << endl;
            newfile << left << setw(10) << word[i] << " occurs " << occuredcount << " times.";
            newfile.close();
        }
    }
    cout << "Amount of vocabs: " << totalword << endl;
    cout << "Grand total: " << wordcount << endl;

    newfile.open("TheTougeTwisterNEW.txt", ios::app);
    if (newfile.is_open())
    {
        newfile << endl
                << endl;
        newfile << "Total words: " << totalword << endl;
        newfile << "Number of words: " << wordcount << endl;
        newfile << "Number of words: " << totalword << endl;
        newfile << "Total words: " << wordcount << endl;
        newfile.close();
    }
    return 0;
}