///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Q.	Write a program which accept one number from
//		user and print that number of even number
//		on the screen.
//		
//		Input: 		 4		|	6		|	7
//		Otput:	      2 4 6 8		| 2 4 6 8 10 12		| 2 4 6 8 10 12 14
//	
//		Technology: C++
//		Input: Int
//		Output: Int
//	
//		Author: Sanket Kolhe
//		Date : 01/06/2021
//	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include<iostream>
using namespace std;


class PrintEven
{
	public:
		void evenNumbers(int);
};


void PrintEven :: evenNumbers(int n)
{
	int i=0;
	
	for(i=1;i<=n;i++)			//Print the even numbers
	{
		cout<<i*2<<' ';
	}
	
}


int main()
{
	int n=0;
	
	cout<<"Enter how many even numbers ";
	cin>>n;
	
	PrintEven obj;		//PrintEven class object
	
	obj.evenNumbers(n);	//Call the evenNumbers function
	
	return 0;
}
