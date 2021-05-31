//////////////////////////////////////////////////////////////////////////
//	Q. Accept two numbers and display first number 
//	   in second number of times.
//
//	Input:	12	5	|	-2  0      | 2   -3   
//  	Output: 12 12 12 12 12  |   		   | 2  2  2
//
//	
//	Input: 		Int,Int
// 	Output: 	Int
//	Technology:	 C++
//
// 	Author: 	Sanket Kolhe
//	Date :  	31/05/2021
//
////////////////////////////////////////////////////////////////////////////



#include<iostream>
using namespace std;



class PrintPattern1
{
	public:
		void dispPattern(int,int);	
};


void PrintPattern1 :: dispPattern(int num1,int num2)
{
	int i=0;
	
	
	if(num2 < 0)		//Updater
	{
		num2= -num2;
	}
	for(i=1;i<=num2;i++)
	{
		cout<<num1<<'\t';
	}
}


int main()
{
	int no1=0,no2=0;
	
	cout<<"Enter the First no ";
	cin>>no1;
	
	cout<<"Enter the second no  ";
	cin>>no2;
	
	PrintPattern1 obj;
	
	obj.dispPattern(no1,no2);		//Call The Display Function
	
	
	return 0;
}





  
