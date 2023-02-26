// Write a program that takes two integers as input from the user. Using conditional statements, determine which integer is greater and display a message to the user indicating which integer is greater.
#include <iostream>
using namespace std;
int main ()
{
// local variable declaration:
	int a,b;
	cout<<"Enter a Number ";
	cin>>a;
	cout<<"Enter another Number ";
	cin>>b;
// check the boolean condition
if( a > b )
{
// if condition is true then print the following
	cout << "The Number is\t" << a;
}
// if condition is false then print the following
else{
	cout << "The Number is\t" << b;
}
}
