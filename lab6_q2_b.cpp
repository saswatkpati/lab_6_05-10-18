//This is a program with a function that takes two int parameters, adds them together, then returns the sum, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.

//including the library
#include<iostream>
using namespace std;

//first define the void function
void addition(int a, int b, int &sum){
	sum = a+b;
	}

//asking for input and writing the function
int main(){
	int x, y, z;
	cout << " Enter two numbers: " << endl;	
	cin >> x >> y;				
	addition (x,y,z);				
	cout << "the sum is: " << z <<endl;
return 0;
}
