#include <iostream>
#include <conio.h>
using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection
{
    STOP = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN
};
eDirection dir;

void Setup()
{
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}
void print_rectangle(int width, int height)
{
    int i, j;
    system("cls");
    for (i = 1; i <= width; i++)
    {
        for (j = 1; j <= height; j++)
        {
            if (i == y && j == x)
                cout << "O";
            else if (i == fruitY && j == fruitX)
                cout << "F";
            if (i == 1 || i == width ||
                j == 1 || j == height)
                cout << "*";
            // if (i == y && j == x)
            //     cout << "O";
            // else if (i == fruitY && j == fruitX)
            //     cout << "F";
            else
                cout << " ";
        }
        cout << endl;
    }
}
void Input()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'w':
            dir = UP;
            break;
        case 'x':
            gameOver = true;
            break;
        }
    }
}
void Logic()
{
    switch (dir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    }
}
int main()
{
    Setup();
    while (gameOver)
    {
        print_rectangle(width, height);
        Input();
        Logic();
        // Sleep(10); sleep(10);
    }
    return 0;
}