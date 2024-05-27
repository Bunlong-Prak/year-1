// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     return 0;
// }

// CONCEPT:  https://www.youtube.com/watch?v=Dv4qLJcxus8
// The video illustrates how bubble sort works

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// implement bubble sort algorithm using vectors
// tweak the code; add an element using push_back()
void bubble_sort(vector<int> numbers)
{
    sort(numbers.begin(), numbers.end());
    cout << "Numbers in ascending order: " << endl;
    // declare iterator and point it to the beginning of the vector
    vector<int>::iterator vec_iterator = numbers.begin();
    for (vec_iterator = numbers.begin(); vec_iterator != numbers.end(); ++vec_iterator)
        cout << *vec_iterator << endl;
}

int main(void)
{
    // to implement bubble sort algorithm using vectors,
    // comment out lines 29-40.
    // vector <int> numbers_to_sort {35, 20, 8, 1, 22};
    // bubble_sort(numbers_to_sort);

    int numbers_to_sort[] = {35, 20, 8, 1, 22};

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (numbers_to_sort[j] < numbers_to_sort[j + 1])
            {
                int temp = numbers_to_sort[j];
                numbers_to_sort[j] = numbers_to_sort[j + 1];
                numbers_to_sort[j + 1] = temp;
            }
    cout << "Sorted Values: " << endl;
    for (int i = 0; i < 5; i++)
        cout << numbers_to_sort[i] << endl;

    return 0;
}