//This is a khicdi program that includes the quetion (2,3,4) functions. It asks user to input 2 variables and asks the user what operation does he/she (being feminist) want to perform. Based on his/her input, call the required function and display the output. 

//including library
#include<iostream>
using namespace std;

//first define the add function
int add (int a,int b){
	int sum;
	sum = (a + b);
	}

//define the maximum function
int max (int a, int b){
	if(a>b) {
		return a;
	}
	else {
		return b;
	}
	}

//define minimum function
int min (int a, int b){

	if(a<b){
		return a;
	}
	else{
		return b;
	}
	}

//writing the main function
int main(){
	char i;
	cout << "'2' for addition\n" << "'3' for maximum\n" << "'4' for minimum\n";
	cout << "Enter the number to perform its corresponding function: ";
	cin >> i;
	double x,y;
	cout << "Enter two numbers: \n";
	cin >> x >> y;
	
//the following is the structure of our function
	if(i=='2'){				 	
		cout << "the addition is: " << add(x,y) <<endl;	
	}
	else if(i=='B'){
		cout << "Maximum is: " << max(x,y) <<endl;
	}
	else{
		cout << "Minimum is: " << min(x,y) <<endl;
	}
	return 0;
	}

