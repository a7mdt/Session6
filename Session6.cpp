#include <iostream>
using namespace std;

int main()
{
    // -------------------{RANDOMS}-------------------

    /*
    // Output: 0 1 2 3 4 5 6 7
    for (int i = 0; i <= 10; i++) {
        if (i == 8)
            break;
        else
            cout << i << " ";
    }

    cout << endl;

    // Output: 0 1 2 3 4 5 6 7 9 10
    for (int i = 0; i <= 10; i++) {
        if (i == 8)
            continue;
        else
            cout << i << " ";
    }
    */

    // -----------------------------------------------

    // --------------------{APPS}---------------------

    /* 
        1- Create a Multiplication Table with Nested Loop 
            note => Take The range from the user 
            (Starting & Ending point for the outer loop) & (for the inner loop make its range from 1 to 5)
    */

    /* 
    int startPoint, endPoint;
    cout << "Enter ur Start Point: ";
    cin >> startPoint;
    cout << "Enter ur End Point: ";
    cin >> endPoint;

    for (int i = startPoint; i <= endPoint; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << i << " x " << j << " = " << i * j << "\t";
        }
        cout << endl; // Newline after each row
    }
    */

    // -------------------------

    /*
        2- Write a program that prints the Fibonacci Series with For loop & While loop
            note => Take the number of numbers of the user.
    */

    /*
    // 1- With While Loop:
    int n;
    cout << "How many number u want to print from the series? \n";
    cout << "=> ";
    cin >> n;

    int a = 0, b = 1, next;

    cout << "-Fibonacci series:\n";
    while (n-- > 0) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }

    cout << endl << endl;

    // 2- With For Loop:
    int m;
    cout << "How many number u want to print from the series? \n";
    cout << "=> ";
    cin >> m;

    int c = 0, d = 1, nextItem;

    cout << "-Fibonacci series:\n";
    for (int i = 0; i < m; i++) {
        cout << c << " ";
        nextItem = c + d;
        c = d;
        d = nextItem;
    }
    */

    // -------------------------

    /*
        3- Write a program to print the Prime numbers from 2 => End Point
            note => Take the end point from the user.
    */

    // => We Will Solve next session
}
