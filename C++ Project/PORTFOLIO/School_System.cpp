//Created by Seakmeng Hor and Bunlong Prak
//CS 101 Portfolio (Grading System)
#include <iostream>
#include <fstream>
using namespace std;

//function to clear the terminal
void clear() {
    system("cls");
}
//function for validation
void validation()
{
    cin.clear();
    cin.ignore(1000, '\n');
    system("puase");
}
//Global variables
//annotations
float resultannotation = 0;
int annotation = 0, annotationpercentage = 0;
//Quizzes variables
float resultquiz = 0, sumquiz = 0;
int i, quiz = 0, quizpercentage;
//Assignments variables
float resultassignment = 0, sumassignment = 0;
int assignment = 0, assignmentpercentage;
//Midterms variables
float resultmidterm = 0;
int midterm = 0, midtermpercentage;
//Finals variables
float resultfinal;
int final, finalpercentage;
//Participations variables
float resultparticipationcs = 0, resultparticipationeng = 0;
int participation = 0, participationpercentage;
//Presentations variables
float resultpresentation = 0;
int presentation = 0, presentationpercentage;
//Lessons variables
float resultlesson = 0;
int lesson = 0, lessonpercentage;
//Portfolios variables
float resultportfolio = 0;
int portfolio = 0, portfoliopercentage;
//Result variables
float result = 0, resultcs = 0, resulteng = 0, resultmis = 0, resultkh = 0, resultecon = 0, resultmath = 0;
//Input variables
char input;
string inputconverter;
int cs, english, econ, khmer, math, mis;
char input2, input3, input4, input5, input6, input7, input8, input9;
string input2converter, input2converter2, input2converter3, input2converter4, input2converter5, input2converter6, input2converter7, input2converter8;
//menu2 v variables
int menu2percentage = 0, menu2score = 0, menu2scorecount = 0;
float summenu2 = 0, resultmenu2 = 0;
//End of varaibles declaration

int resultper(int percentages)
{
    return percentages;
}
//Ask how many time a user has had done the quizzes but it can't be <= 0
//If <= 0 ask again
void quizzes(void)
{
quiz = 0;
while (true)
{

    cout << "How many quizzes did your professor have u to do?" << endl;
    cout << "Enter number of quizzes: ";
    cin >> quiz;
    cout << endl;
    if (quiz <= 0)
    {
        cout << "Invalid Input\n" << endl;
        system("pause");
        clear();
    } else 
    {
        break;
    }
}
//Get user score base on how many time they had done the quiz
//For example if they had done 5 quizzes, ask 5 of their quiz score;
resultquiz = 0;
float quizscore;
quizscore = 0;
sumquiz = 0;
    for (i = 1; i <= quiz; i++)
    {
        cout << "Enter your [" << i << "] quiz scores: ";
        cin >> quizscore;
        sumquiz += quizscore;

        if (quizscore < 0 || quizscore > 100 || !quizscore)
        {
            cout << "Invalid input" << endl;
            sumquiz -= quizscore;
            i--;
            validation();
            clear();
        }
    }
    resultquiz = ((sumquiz / quiz) * quizpercentage) / 100;
}
//Ask how many time a user has had done the assignments but it can't be <= 0
//If <= 0 ask again
void assignments(void)
{
    assignment = 0;
while (true)
{
    cout << "How many assignments did your professor have u to do?" << endl;
    cout << "Enter number of assignments: ";
    cin >> assignment;
    cout << endl;
    if (assignment <= 0)
    {
        cout << "Invalid Input\n" << endl;
        system("pause");
        clear();
    } else 
    {
        break;
    }
}
//Get user score base on how many time they had done the assignments
//For example if they had done 5 assignments, ask 5 of their assignment scores;
resultassignment = 0;
float assignmentscore;
sumassignment = 0;
    for (i = 1; i <= assignment; i++)
    {
        cout << "Enter your [" << i << "] assignment scores: ";
        cin >> assignmentscore;
        sumassignment += assignmentscore;

        if (assignmentscore < 0 || assignmentscore > 100)
        {
            cout << "Invalid input" << endl;
            sumassignment -= assignmentscore;
            i--;
            validation();
            clear();
        }
    }
    resultassignment = ((sumassignment / assignment) * assignmentpercentage) / 100;
}
//Ask Midterm exam score
void midterms(void)
{
midterm = 0;
while (true)
{
    cout << "How much do u get in your midterm? " << endl;
    cout << "Enter midterm score: ";
    cin >> midterm;
    cout << endl;
    if (midterm < 0 || midterm > 100 || !midterm)
    {
        cout << "Invalid Input\n" << endl;
        validation();
        clear();
    } else 
    {
        break;
    }
}
    resultmidterm = (midterm * midtermpercentage) / 100;
}
//Ask Final exam score
void finals(void)
{
final = 0;
while (true)
{
    cout << "How much do u get in your final exam? " << endl;
	cout << "Enter final exam score: ";
	cin >> final;
	cout << endl;
    if (final < 0 || final > 100 || !final)
    {
        cout << "Invalid Input\n" << endl;
        validation();
        clear();
    } else 
    {
        break;
    }
}
resultfinal = (final * finalpercentage) / 100;
}
//Ask for participation
void participationcs(void)
{
    participation = 0;
    while (true)
    {
    cout << "How much do u get in your class participation? (Max 5)" << endl;
    cout << "Enter participation percentage: ";
    cin >> resultparticipationcs;
    cout << endl;
    if (resultparticipationcs < 0 || resultparticipationcs > 5 || !resultparticipationcs)
    {
        cout << "Invalid Input\n" << endl;
        validation();
        clear();
    } else 
    {
        break;
    }
    }
    //resultparticipation = (participation * participationpercentage) / 100;
}
void participationeng(void)
{
    participation = 0;
    while (true)
    {
    cout << "How much do u get in your class participation? (Max 10)" << endl;
    cout << "Enter participation percentage: ";
    cin >> resultparticipationeng;
    cout << endl;
    if (resultparticipationeng < 0 || resultparticipationeng > 10 || !resultparticipationeng)
    {
        cout << "Invalid Input\n" << endl;
        validation();
        clear();
    } else 
    {
        break;
    }
    }
    //resultparticipation = (participation * participationpercentage) / 100;
}
//Ask for presentation score
void presentations(void)
{
    presentation = 0;
while (true)
{
    cout << "How much do u get in your presentation? " << endl;
    cout << "Enter presentation score: ";
    cin >> presentation;
    cout << endl;
    if (presentation < 0 || presentation > 100 || !presentation)
    {
        cout << "Invalid Input\n" << endl;
        validation();
        clear();
    } else 
    {
        break;
    }
}
    resultpresentation = (presentation * presentationpercentage) / 100;
}
//Ask for lesson note (Econ)
void lessons(void)
{
    lesson = 0;
while (true)
{
    cout << "How much do u get in your lesson? " << endl;
    cout << "Enter lesson score: ";
    cin >> lesson;
    cout << endl;
    if (lesson < 0 || lesson > 100 || !lesson)
    {
        cout << "Invalid Input\n" << endl;
        validation();
        clear();
    } else 
    {
        break;
    }
}
    resultlesson = (lesson * lessonpercentage) / 100;
}
//Ask for portfolio score
void portfolios(void)
{
    portfolio = 0;
while (true)
{
    cout << "How much do u get in your portfolio? " << endl;
    cout << "Enter portfolio score: ";
    cin >> portfolio;
    cout << endl;
    if (portfolio < 0 || portfolio > 100 || !portfolio)
    {
        cout << "Invalid Input\n" << endl;
        validation();
        clear();
    } else 
    {
        break;
    }
}
    resultportfolio = (portfolio * portfoliopercentage) / 100;
}
//Annotations
void annotations()
{
    annotation = 0;
while (true)
{
    cout << "How much do u get in your annotation? " << endl;
    cout << "Enter annotation score: ";
    cin >> annotation;
    cout << endl;
    if (annotation < 0 || annotation > 100 || !annotation)
    {
        cout << "Invalid Input\n" << endl;
        validation();
        clear();
    } else 
    {
        break;
    }
}
    resultannotation = (annotation * annotationpercentage) / 100;
}
//Result
float results(float resultparticipation,float resultassignment, float resultmidterm, float resultportfolio, float resultfinal )
{
    result = resultparticipation + resultassignment + resultmidterm + resultportfolio + resultfinal;
    return result;
}
//This is the main function that will be used to display the program
int main()
{
//While loop for the program to run until user want to stop.

menu:
    clear();
    cout << "This is a program to calculate the grading system\n" << endl;
    cout << "--------------------------------------------------------------\n" << endl;
    cout << "   \t\t\tMAIN-MENU\n" << endl;
    cout << "   [1] Calculate your course score with pre-built percentages.\n" << endl;
    cout << "   [2] Calculate your course score with custom percentages.\n" << endl;
    cout << "   [X] Exit the program.\n" << endl;
    cout << "--------------------------------------------------------------\n" << endl;
    cout << "   Your Choice: ";
    getline(cin, inputconverter);
    cout << endl;
    if (inputconverter.size() > 0 && inputconverter.size() < 2)
    {
        input = inputconverter[0] ;
        switch (input)
        {
            case '1':
            {   
submenu:
                clear();
                    cout << "This is a grading system calculator with pre-built percentages.\n" << endl;
                    cout << "--------------------------------------------------------------------------\n" << endl;
                    cout << "\t\t\tSUB-MENU [1]\n" << endl;
                    cout << "   [1] Computer Science            [2] English\n" << endl;
                    cout << "   [3] Econnomics                  [4] Khmer\n" << endl;
                    cout << "   [5] Mathematics                 [6] Management Information System\n" << endl;
                    cout << "   [B] Go back to the MAIN-MENU    [C] Check finalized score by subjects\n" << endl;
                    cout << "-------------------------------------------------------------------------\n" << endl;
                    cout << "   Your Choice: ";
                    getline (cin, input2converter);
                    if (input2converter.size() > 0 && input2converter.size() < 2)
                    {
                        input2 = input2converter[0];
                        switch (input2)
                        {
cs:
                            case '1':
                                resultcs = 0;
                                clear();
                                cout << "You Entered [1] Computer Science \n" << endl;
                                cout << "---------------------------------------------------------------\n" << endl;
                                cout << "\t\t\tAssesment \n" << endl;
                                cout << "   [1] Attendance / Participation      [2] Assignment / Quizes\n" << endl;
                                cout << "   [3] Midterm Exam                    [4] Portfolio\n" << endl;
                                cout << "   [5] Final Exam           \n" << endl;
                                cout << "   [Y] To start calculating your score [B] Go back to the Sub-MENU\n" << endl;
                                cout << "---------------------------------------------------------------\n" << endl;
                                cout << "   Your Choice: ";
                                getline (cin, input2converter2);
                                if (input2converter2.size() > 0 && input2converter2.size() < 2)
                                {
                                    input3 = input2converter2[0];
                                    switch (input3)
                                    {
                                        case 'y':
                                        case 'Y':
                                            clear();     
                                            participationcs();
                                            assignmentpercentage = resultper(20);
                                            clear();                 
                                            assignments();
                                            cout << endl;
                                            midtermpercentage = resultper(20);
                                            clear();
                                            midterms();
                                            portfoliopercentage = resultper(15);
                                            clear();
                                            portfolios();
                                            finalpercentage = resultper(40);
                                            clear();
                                            finals();
                                            resultcs = resultparticipationcs + resultassignment + resultmidterm + resultportfolio + resultfinal;
                                            clear();
                                            cout << "---------------------------------------------------------------\n" << endl;
                                            cout << "\t\t\t Finalized Score\n" << endl;
                                            cout << "   [1] Attendance / Participation: "<< resultparticipationcs << "\n\n";
                                            cout << "   [2] Assignment / Quizes       : "<< resultassignment << "\n\n";
                                            cout << "   [3] Midterm Exam              : "<< resultmidterm << "\n\n";
                                            cout << "   [4] Portfolio                 : "<< resultportfolio << "\n\n";
                                            cout << "   [5] Final Exam                : "<< resultfinal << "\n\n";
                                            cout << "   [6] Finalized Scores          : "<< resultcs << "\n\n";
                                            cout << "---------------------------------------------------------------\n" << endl;
                                            cin.ignore(1000, '\n');
                                            system("pause");
                                        case 'b':
                                            clear();
                                            goto submenu;
                                        case 'B':
                                            clear();
                                            goto submenu;
                                        default:
                                            clear();
                                            cout << "Invalid input" << std::endl;
                                            system("pause");
                                            clear();
                                            goto cs; 
                                    }
                                } else 
                                    {   
                                        clear();
                                        std::cout << "Invalid input, Please enter again! \n(Pro tip: u only need to enter 1 digit to choose the program :o) \n" << std::endl;
                                        system("pause");
                                        clear();
                                        goto cs;
                                    }
eng:
                            case '2':
                                resulteng = 0;
                                clear();
                                cout << "You Entered [2] English \n" << endl;
                                cout << "------------------------------------------------------------------------\n" << endl;
                                cout << "\t\t\t     Assesment \n" << endl;
                                cout << "   [1] In-Class-Reading / Participation      [2] Classwork / Quizes\n" << endl;
                                cout << "   [3] Midterm Exam                          [4] Annotations\n" << endl;
                                cout << "   [5] Final Exam           \n" << endl;
                                cout << "   [Y] To start calculating your score       [B] Go back to the Sub-MENU\n" << endl;
                                cout << "------------------------------------------------------------------------\n" << endl;
                                cout << "   Your Choice: ";
                                getline (cin, input2converter3);
                                if (input2converter3.size() > 0 && input2converter3.size() < 2)
                                {
                                    input4 = input2converter3[0];
                                    switch (input4)
                                    {
                                        case 'y':
                                        case 'Y':
                                            clear();     
                                            participationeng();
                                            quizpercentage = resultper(10);  
                                            clear();               
                                            quizzes();
                                            cout << endl;
                                            midtermpercentage = resultper(20);
                                            clear();
                                            midterms();
                                            annotationpercentage = resultper(20);
                                            clear();
                                            annotations();
                                            finalpercentage = resultper(40);
                                            clear();
                                            finals();
                                            resulteng = resultparticipationeng + resultquiz + resultmidterm + resultannotation + resultfinal;
                                            clear();
                                            cout << "---------------------------------------------------------------\n" << endl;
                                            cout << "\t\t\t Finalized Score\n" << endl;
                                            cout << "   [1] In-Class-Reading / Participation: "<< resultparticipationeng << "\n\n";
                                            cout << "   [2] Classwork / Quizes              : "<< resultquiz << "\n\n";
                                            cout << "   [3] Midterm Exam                    : "<< resultmidterm << "\n\n";
                                            cout << "   [4] Annotations                     : "<< resultannotation << "\n\n";
                                            cout << "   [5] Final Exam                      : "<< resultfinal << "\n\n";
                                            cout << "   [6] Finalized Scores                : "<< resulteng<< "\n\n";
                                            cout << "---------------------------------------------------------------\n" << endl;
                                            cin.ignore(1000, '\n');
                                            system("pause");
                                        case 'b':
                                            clear();
                                            goto submenu;
                                        case 'B':
                                            clear();
                                            goto submenu;
                                        default:
                                            clear();
                                            cout << "Invalid input" << std::endl;
                                            system("pause");
                                            clear();
                                            goto eng; 
                                    }
                                } else 
                                    {   
                                        clear();
                                        std::cout << "Invalid input, Please enter again! \n(Pro tip: u only need to enter 1 digit to choose the program :o) \n" << std::endl;
                                        system("pause");
                                        clear();
                                        goto eng;
                                    }
                            case '3':
econ:
                                resultecon = 0;
                                clear();
                                cout << "You Entered [3] Economics \n" << endl;
                                cout << "------------------------------------------------------------------------\n" << endl;
                                cout << "\t\t\t     Assesment \n" << endl;
                                cout << "   [1] Lesson Notes                          [2] Quizzes\n" << endl;
                                cout << "   [3] Midterm Exam                          [4] Group Presentations\n" << endl;
                                cout << "   [5] Final Exam           \n" << endl;
                                cout << "   [Y] To start calculating your score       [B] Go back to the Sub-MENU\n" << endl;
                                cout << "------------------------------------------------------------------------\n" << endl;
                                cout << "   Your Choice: ";
                                getline (cin, input2converter4);
                                if (input2converter4.size() > 0 && input2converter4.size() < 2)
                                {
                                    input5 = input2converter4[0];
                                    switch (input5)
                                    {
                                        case 'y':
                                        case 'Y':
                                            clear();     
                                            lessonpercentage = resultper(10);
                                            lessons();
                                            quizpercentage = resultper(30);  
                                            clear();               
                                            quizzes();
                                            cout << endl;
                                            midtermpercentage = resultper(20);
                                            clear();
                                            midterms();
                                            presentationpercentage = resultper(10);
                                            clear();
                                            presentations();
                                            finalpercentage = resultper(30);
                                            clear();
                                            finals();
                                            resultecon = resultlesson + resultquiz + resultmidterm + resultpresentation + resultfinal;
                                            clear();
                                            cout << "---------------------------------------------------------------\n" << endl;
                                            cout << "\t\t\t Finalized Score\n" << endl;
                                            cout << "   [1] Lesson Notes        : "<< resultlesson << "\n\n";
                                            cout << "   [2] Classwork / Quizes  : "<< resultquiz << "\n\n";
                                            cout << "   [3] Midterm Exam        : "<< resultmidterm << "\n\n";
                                            cout << "   [4] Group Presentations : "<< resultpresentation << "\n\n";
                                            cout << "   [5] Final Exam          : "<< resultfinal << "\n\n";
                                            cout << "   [6] Finalized Scores    : "<< resultecon<< "\n\n";
                                            cout << "---------------------------------------------------------------\n" << endl;
                                            cin.ignore(1000, '\n');
                                            system("pause");
                                        case 'b':
                                            clear();
                                            goto submenu;
                                        case 'B':
                                            clear();
                                            goto submenu;
                                        default:
                                            clear();
                                            cout << "Invalid input" << std::endl;
                                            system("pause");
                                            clear();
                                            goto econ; 
                                    }
                                } else 
                                    {   
                                        clear();
                                        std::cout << "Invalid input, Please enter again! \n(Pro tip: u only need to enter 1 digit to choose the program :o) \n" << std::endl;
                                        system("pause");
                                        clear();
                                        goto econ;
                                    }
                            case '4':
kh:
                                resultkh = 0;
                                clear();
                                cout << "You Entered [4] KHMER \n" << endl;
                                cout << "------------------------------------------------------------------------\n" << endl;
                                cout << "\t\t\t     Assesment \n" << endl;
                                cout << "   [1] Quizzes                               [2] Group Presentations\n" << endl;
                                cout << "   [3] Midterm Exam                          [4] Final Exam\n" << endl;
                                cout << "   [Y] To start calculating your score       [B] Go back to the Sub-MENU\n" << endl;
                                cout << "------------------------------------------------------------------------\n" << endl;
                                cout << "   Your Choice: ";
                                getline (cin, input2converter5);
                                if (input2converter5.size() > 0 && input2converter5.size() < 2)
                                {
                                    input6 = input2converter5[0];
                                    switch (input6)
                                    {
                                        case 'y':
                                        case 'Y':
                                            clear();     
                                            quizpercentage = resultper(15);            
                                            quizzes();
                                            cout << endl;
                                            presentationpercentage = resultper(15);
                                            clear();
                                            presentations();
                                            midtermpercentage = resultper(30);
                                            midterms();
                                            finalpercentage = resultper(40);
                                            clear();
                                            finals();
                                            resultkh = resultquiz + resultmidterm + resultpresentation + resultfinal;
                                            clear();
                                            cout << "---------------------------------------------------------------\n" << endl;
                                            cout << "\t\t\t Finalized Score\n" << endl;
                                            cout << "   [1] Classwork / Quizes  : "<< resultquiz << "\n\n";
                                            cout << "   [2] Group Presentations : "<< resultpresentation << "\n\n";
                                            cout << "   [3] Midterm Exam        : "<< resultmidterm << "\n\n";
                                            cout << "   [4] Final Exam          : "<< resultfinal << "\n\n";
                                            cout << "   [5] Finalized Scores    : "<< resultkh<< "\n\n";
                                            cout << "---------------------------------------------------------------\n" << endl;
                                            cin.ignore(1000, '\n');
                                            system("pause");
                                        case 'b':
                                            clear();
                                            goto submenu;
                                        case 'B':
                                            clear();
                                            goto submenu;
                                        default:
                                            clear();
                                            cout << "Invalid input" << std::endl;
                                            system("pause");
                                            clear();
                                            goto kh; 
                                    }
                                } else 
                                    {   
                                        clear();
                                        std::cout << "Invalid input, Please enter again! \n(Pro tip: u only need to enter 1 digit to choose the program :o) \n" << std::endl;
                                        system("pause");
                                        clear();
                                        goto kh;
                                    }
                            case '5':
math:
                                resultmath = 0;
                                clear();
                                cout << "You Entered [4] KHMER \n" << endl;
                                cout << "------------------------------------------------------------------------\n" << endl;
                                cout << "\t\t\t     Assesment \n" << endl;
                                cout << "   [1] Quizzes                               [2] Assignment\n" << endl;
                                cout << "   [3] Midterm Exam                          [4] Final Exam\n" << endl;
                                cout << "   [Y] To start calculating your score       [B] Go back to the Sub-MENU\n" << endl;
                                cout << "------------------------------------------------------------------------\n" << endl;
                                cout << "   Your Choice: ";
                                getline (cin, input2converter6);
                                if (input2converter6.size() > 0 && input2converter6.size() < 2)
                                {
                                    input7 = input2converter6[0];
                                    switch (input7)
                                    {
                                        case 'y':
                                        case 'Y':
                                            clear();     
                                            quizpercentage = resultper(28);            
                                            quizzes();
                                            cout << endl;
                                            assignmentpercentage = resultper(12);
                                            clear();
                                            assignments();
                                            cout << endl;
                                            midtermpercentage = resultper(20);
                                            clear();
                                            midterms();
                                            finalpercentage = resultper(40);
                                            clear();
                                            finals();
                                            resultmath = resultquiz + resultmidterm + resultassignment + resultfinal;
                                            clear();
                                            cout << "---------------------------------------------------------------\n" << endl;
                                            cout << "\t\t\t Finalized Score\n" << endl;
                                            cout << "   [1] Classwork / Quizes  : "<< resultquiz << "\n\n";
                                            cout << "   [2] Assignments         : "<< resultassignment << "\n\n";
                                            cout << "   [3] Midterm Exam        : "<< resultmidterm << "\n\n";
                                            cout << "   [4] Final Exam          : "<< resultfinal << "\n\n";
                                            cout << "   [5] Finalized Scores    : "<< resultmath<< "\n\n";
                                            cout << "---------------------------------------------------------------\n" << endl;
                                            cin.ignore(1000, '\n');
                                            system("pause");
                                        case 'b':
                                            clear();
                                            goto submenu;
                                        case 'B':
                                            clear();
                                            goto submenu;
                                        default:
                                            clear();
                                            cout << "Invalid input" << std::endl;
                                            system("pause");
                                            clear();
                                            goto math; 
                                    }
                                } else 
                                    {   
                                        clear();
                                        std::cout << "Invalid input, Please enter again! \n(Pro tip: u only need to enter 1 digit to choose the program :o) \n" << std::endl;
                                        system("pause");
                                        clear();
                                        goto math;
                                    }
                            case '6':
mis:
                                resultmis = 0;
                                clear();
                                cout << "Unknown Percentage, Cannot access MIS grading system!\n" << std::endl;
                                system("pause");
                                clear();
                                goto submenu;
                            case 'b':
                                clear();
                                goto menu;
                            case 'B':
                                clear();
                                goto menu;
                            case 'c':
                            case 'C':
                                clear();
                                cout << "---------------------------------------------------------------\n" << endl;
                                cout << "\t\t\t Finalized Score\n" << endl;
                                cout << "   [1] Computer Science  : "<< resultcs << "\n\n";
                                cout << "   [2] English           : "<< resulteng << "\n\n";
                                cout << "   [3] Economics         : "<< resultecon << "\n\n";
                                cout << "   [4] Khmer             : "<< resultkh << "\n\n";
                                cout << "   [5] Mathmathics       : "<< resultmath<< "\n\n";
                                cout << "   [6] MIS               : "<< resultmis<< "\n\n";
                                cout << "---------------------------------------------------------------\n" << endl;
                                system("pause");
                                goto submenu;
                            default:
                                clear();
                                cout << "Invalid input" << std::endl;
                                system("pause");
                                clear(); 
                                goto submenu;
                        }
                    } else 
                    {   
                        clear();
                        cout << "Invalid input, Please enter again! \n(Pro tip: u only need to enter 1 digit to choose the program :o) \n" << endl;
                        system("pause");
                        clear();
                        goto submenu;
                    }
            }
menu2:
            case '2':
                clear();
                cout << "This is a grading system calculator with custom percentage.\n" << endl;
                cout << "------------------------------------------------------------------\n" << endl;
                cout << "\t\t\tSUB-MENU [2]\n" << endl;
                cout << "   [Y] Enter custom percentage\n" << endl;
                cout << "   [B] Go back to MAIN-MENU\n" << endl;
                cout << "   [X] Exit the program\n" << endl;
                cout << "------------------------------------------------------------------\n" << endl;
                cout << "   Your Choice: ";
                getline (cin, input2converter8);
                if (input2converter8.size() > 0 && input2converter8.size() < 2)
                {
                    input9 = input2converter8[0];
                    switch (input9)
                    {

                        case 'y':
                        case 'Y':    
                            clear();
                            cout << "Enter percentage: ";
                            cin >> menu2percentage;
                            cout << "\nHow many times do u want to enter the score?" <<endl;
                            cout << "(You may enter more than one if u have multiple scores such as Quizzes or Assignments)" << endl;
                            cout << "Enter score times: ";
                            cin >> menu2scorecount;
                            cout << endl;
                            summenu2 = 0;
                            for (i = 1; i <= menu2scorecount; i++)
                            {
                            cout << "Enter your [" << i << "] scores: ";
                            cin >> menu2score;
                            summenu2 += menu2score;
                                if (menu2score < 0 || menu2score > 100)
                                {
                                cout << "Invalid input" << endl;
                                summenu2 -= menu2score;
                                i--;
                                }
                            } 
                            resultmenu2 = ((summenu2 / menu2scorecount) * menu2percentage) / 100;
                            clear();
                            cout << "---------------------------------------------------------------\n" << endl;
                            cout << "\t\t\t Finalized Score\n" << endl;
                            cout << "    Your finalized score is: "<< resultmenu2 << "\n\n";
                            cout << "---------------------------------------------------------------\n" << endl;
                            cin.ignore(1000, '\n');
                            system("pause");
                            goto menu2;
                        case 'b':
                            clear();
                            goto menu;
                        case 'B':
                            clear();
                            goto menu;
                        case 'x':
                        case 'X':
                            clear();
                            cout << "\nThank you for using our program, see u next time!";
                            validation();
                            break;
                        default:
                        clear();
                        cout << "Invalid input\n" << std::endl;
                        system("pause");
                        clear(); 
                        goto menu2;
                        }
                } else 
                {
                    clear();
                    cout << "Invalid input, Please enter again! \n(Pro tip: u only need to enter 1 digit to choose the program :o) \n" << endl;
                    system("pause");
                    clear();
                    goto menu;
                }  
            case 'x':
            case 'X':
                clear();
                cout << "\nThank you for using our program, see u next time!";
                validation();
                break;
            default:
                clear();
                cout << "Invalid input\n" << std::endl;
                system("pause");
                clear(); 
                goto menu;
        }
    } else 
        {
            clear();
            cout << "Invalid input, Please enter again! \n(Pro tip: u only need to enter 1 digit to choose the program :o) \n" << endl;
            system("pause");
            clear();
            goto menu;
        }   
    return 0;
}