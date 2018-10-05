/* This is a function to calculate tax rate using functions.
Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module. Choose an appropriate name for this function.
Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue. Choose an appropriate name for this function.
Write a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. Choose an appropriate name for this function.
Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue. Your program should call the functions listed above.
*/

#include<iostream>
using namespace std;

//introducing returnvalue as a function
int returnvalue(int &units, int &unitCst,int &taxrt){				

		cout<< "enter your units = "<<endl;
		cin>>units;
		cout<< "enter your unitCst = "<<endl;
		cin>>unitCst;
		cout<< "enter the tax Rate = "<<endl;
		cin>>taxrt;
		}

void salesTx(int& units, int& unitCst, int& taxrt){
 	 	
		int salesTx = units*unitCst*taxrt;
	 	cout<< "sales Tax = "<< salesTx <<endl;
		}
void totaldue(int& units, int& unitCst, int& taxrt){
 	 	
		int totaldue = (units*unitCst*taxrt) + (units*unitCst);
		cout<< "total Due = "<< totaldue <<endl;
		}
//This is a function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format. 	 	
int read(int& units, int& unitCst, int& taxrt){
	 	  
		cout<<" The unit cost over the object is " << unitCst << ". "<<endl;
		cout<<" The number of units are "<< units <<". "<<endl;
		cout<<" The tax rate is "<< taxrt <<". "<<endl;
		cout<<" The sales tax is "<<(unitCst*units*taxrt)<<". "<<endl;
		cout<<" The total is "<<(taxrt*unitCst*units)+ (unitCst*units)<<endl; 
		}

//Writing a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue by reference.
					
int main(){

	 	  	int a,b,c;
			rv(a,b,c);
	 	  	sat(a,b,c);
	 	  	tot(a,b,c);
	 	  	read(a,b,c);

return 0;
}

