#include <iostream>
#include <iomanip>
using namespace std;
#define maxx 3
string major[3];
typedef struct student
{
    string firstname;
    string lastname;
    string name;
    string id;
    string birthmonth_string[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int student_grade;
    int student_birthday;
    int birthmonth;
    int birthyear;
    string day;
    string month;
    string year;
    string result_birthday;
    string courses[3] = {"CS", "MIS", "BUS"};
    string monthstring;
} info;
void input()
{
    int n = 0;
    int monthinput;
    info studentinfo[maxx];
    for (int i = 0; i < maxx; i++)
    {
        cout << "Enter first name: ";
        getline(cin, studentinfo[i].firstname);
        cout << "Enter last name: ";
        getline(cin, studentinfo[i].lastname);
        studentinfo[i].name = studentinfo[i].firstname + " " + studentinfo[i].lastname;
        cout << "Enter student's birthmonth: ";
        cin >> monthinput;
        studentinfo[i].monthstring = studentinfo[i].birthmonth_string[monthinput - 1];
        studentinfo[i].birthmonth = monthinput;
        studentinfo[i].month = to_string(studentinfo[i].birthmonth);
        cout << "Enter student's birthday: ";
        cin >> studentinfo[i].student_birthday;
        studentinfo[i].day = to_string(studentinfo[i].student_birthday);
        cout << "Enter student's birthyear: ";
        cin >> studentinfo[i].birthyear;
        studentinfo[i].year = to_string(studentinfo[i].birthyear);
        studentinfo[i].result_birthday = studentinfo[i].monthstring + "/" + studentinfo[i].day + "/" + studentinfo[i].year;
        cout << "Enter student id: ";
        cin >> studentinfo[i].id;
        cout << "Enter Major [1]CS [2]MIS [3]BUS" << endl;
        cin >> n;
        major[i] = studentinfo[i].courses[n - 1];
        cin.ignore();
    }
}
int convert_age(int month, int day, int year)
{
    struct tm date = {0};
    date.tm_year = year - 1900;
    date.tm_mon = month - 1;
    date.tm_mday = day;
    time_t normal = mktime(&date);
    time_t current;
    time(&current);
    int age = (difftime(current, normal) + 86400L / 2) / 86400L;
    return age / 365;
}
void output(int i)
{
    info studentinfo[maxx];
    cout << "|" << left << setw(5) << i << "|"
         << left << setw(20) << studentinfo[i].name << "|"
         << left << setw(15) << studentinfo[i].result_birthday << "|"
         << left << setw(7) << convert_age(studentinfo[i].birthmonth, studentinfo[i].student_birthday, studentinfo[i].birthyear) << "|"
         << left << setw(15) << studentinfo[i].id << "|"
         << left << setw(5) << major[i] << "|" << endl;
    cout << setfill('-') << setw(74) << "" << endl;
    cout << setfill(' ');
}
int main()
{
    int n = 0;
    int monthinput;
    info studentinfo[maxx];
    for (int i = 0; i < maxx; i++)
    {
        cout << "Enter first name: ";
        getline(cin, studentinfo[i].firstname);
        cout << "Enter last name: ";
        getline(cin, studentinfo[i].lastname);
        studentinfo[i].name = studentinfo[i].firstname + " " + studentinfo[i].lastname;
        cout << "Enter student's birthmonth: ";
        cin >> monthinput;
        studentinfo[i].monthstring = studentinfo[i].birthmonth_string[monthinput - 1];
        studentinfo[i].birthmonth = monthinput;
        studentinfo[i].month = to_string(studentinfo[i].birthmonth);
        cout << "Enter student's birthday: ";
        cin >> studentinfo[i].student_birthday;
        studentinfo[i].day = to_string(studentinfo[i].student_birthday);
        cout << "Enter student's birthyear: ";
        cin >> studentinfo[i].birthyear;
        studentinfo[i].year = to_string(studentinfo[i].birthyear);
        studentinfo[i].result_birthday = studentinfo[i].monthstring + "/" + studentinfo[i].day + "/" + studentinfo[i].year;
        cout << "Enter student id: ";
        cin >> studentinfo[i].id;
        cout << "Enter Major [1]CS [2]MIS [3]BUS" << endl;
        cin >> n;
        major[i] = studentinfo[i].courses[n - 1];
        cin.ignore();
    }
    cout << setfill('-') << setw(74) << "" << endl;
    cout << setfill(' ');
    cout << left << setw(5) << "|N.O" << left << setw(20) << " |NAME" << left << setw(15) << "  |birthdate" << left << setw(7) << "   |AGE" << left << setw(15) << "    |STUDENT ID" << left << setw(5) << "     |MAJOR|" << endl;
    cout << setfill('-') << setw(74) << "" << endl;
    cout << setfill(' ');
    for (int i = 0; i < maxx; i++)
    {
        cout << "|" << left << setw(5) << i << "|"
             << left << setw(20) << studentinfo[i].name << "|"
             << left << setw(15) << studentinfo[i].result_birthday << "|"
             << left << setw(7) << convert_age(studentinfo[i].birthmonth, studentinfo[i].student_birthday, studentinfo[i].birthyear) << "|"
             << left << setw(15) << studentinfo[i].id << "|"
             << left << setw(5) << major[i] << "|" << endl;
        cout << setfill('-') << setw(74) << "" << endl;
        cout << setfill(' ');
    }

    return 0;
}