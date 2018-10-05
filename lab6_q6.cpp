/*Just copying the question
(a) Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value
(b) Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value
(c) Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value. 
(d) Write a function that outputs the sum of the square of the even numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value. 
Write a main program. */

#include<iostream>
#include<cmath>
using namespace std;

//define a function for summing even numbers
int sumEvenNumbers(int q, int w)
{
	int e,r=0;
//looping structure and condition 
	for (e = q ; e <= w ; e++)
	{
		if(e%2==0)
		{
		r = r + e;
		}
	}
return r;
}	

//define a function for summing odd numbers
int sumOddNumbers(int q, int w)
{
	int e,s=0;
	//using loop
	for (e=q; e<=w; e++)
	{
		if(e%2 != 0)
		{
		 r = r + e;
		}
	}
return r;
}	

//define sumSquareOddNumbers function
int sumSqureOddNumbers(int q, int w)
{
	int e = q,s=0;
	//using while loop
	while(e <= w)
	{
		if(e%2 != 0)
		{
			r = r + pow(e,2);  
		}
		e++;
	}
return s;
}	

//define sumSquareEvenNumbers function
int sumSqureEvenNumbers(int q, int w)
{
	int e = q, r = 0;
	//using while loop
	while(e<=w)
	{
		if(e%2 == 0)
		{
			r = r + pow(e,2);  
		}
		e++;
	}
return s;
}	


//Write main function
int main(){
	int p,q,sumEven,sumOdd,sumSqureOdd,sumSqureEven;

	//asking for input
	cout << "Enter First number: ";
	cin >> p;
	cout << "Enter Secound number: ";
	cin >> q;

	//call function
	sumEven = sumEvenNumbers(p,q);	
	sumOdd = sumOddNumbers(p,q);
	sumSqureOdd = sumSqureOddNumbers(p,q);
	sumSqureEven = sumSqureEvenNumbers(p,q);

	//printing function value
	cout << "The sum of all even numbers between firstNum and secondNum: " << sumEven  <<endl;
	cout << "The sum of all odd numbers between firstNum and secondNum: " << sumOdd <<endl;
	cout << "the sum of the square of the odd numbers between firstNum and secondNum: " << sumSqureOdd <<endl;
	cout << "the sum of the square of the even numbers between firstNum and secondNum: " << sumSqureEven <<endl;

return 0;
}
