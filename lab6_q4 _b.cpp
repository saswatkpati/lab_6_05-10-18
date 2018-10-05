//Write a program with a function that takes two int parameters, finds the min, then returns the minimum. (By Reference) Goal is the same as above, but this time, the function that finds the minimum  of the numbers should be void, and takes a third, pass by reference parameter; then puts the minimum  in that.

#include<iostream>
using namespace std;

//Define void function
void min (int a, int b, int &c){
	if(a < b)
	{
		c = a ;
	}
	else
	{
		c = b ;
	}
}

//asking the user for input
int main(){
	
	int p,q,r;
	cout << "Enter two numbers: "<<endl;	
	cin >> p >> q;
	min (p,q,r);
	cout << "Minimum is: " << r <<endl;	

return 0;
}
