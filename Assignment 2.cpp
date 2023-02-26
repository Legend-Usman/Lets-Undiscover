// C++ program to print all Even
// and Odd numbers from 1 to N
 
#include <bits/stdc++.h>
using namespace std;
 
// Function to print even numbers
void printEvenNumbers(int N)
{
 
    cout << "Even: ";
    for (int i = 1; i <= 2 * N; i++) {
 
        //checking even or not
        if (!(i & 1))
            cout << i << " ";
    }
}
 
// Function to print odd numbers
void printOddNumbers(int N)
{ 
    cout << "\nOdd: ";
    for (int i = 1; i <= 2 * N; i++) {
 
        // checking odd or not
        if (i & 1 != 0)
            cout << i << " ";
    }
}
 
// Driver code
int main()
{
 
    int N = 5;
 
    printEvenNumbers(N);
    printOddNumbers(N);
 
    return 0;
}
