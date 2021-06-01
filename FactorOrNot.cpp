/////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Q.	Write a program which accepts two no's from the  user
//		and check wether 2nd number is factor of 1st number
//		or not.
//		
//		
//		Input: -15  -5		|	-15  4		|   21  5		| 12  3 
//		Output: TRUE		|   FALSE		|   FALSE       | TRUE
//
//
//		Technology:C++
//		Input: Int,Int
//		Output: BOOL
//
//		Author :Sanket Kolhe
//		Date:  01/06/2021
//	
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

#define TRUE  1
#define FALSE 0


typedef int BOOL;


class Factor
{
	public:
		BOOL chkFactor(int ,int);
};



BOOL Factor :: chkFactor(int num1,int num2)	//Function definition
{
	if((num1==0) || (num2==0))
	{
		cout<<"0 cannot be a valid input ";
		return -1;
	}
	
	if((num1%num2)==0)		//Condition to check if the no is factor or not
	{
		return TRUE;		
	}
	
	else
	{
		return FALSE;
	}
		
}



int main()
{
	int no1=0,no2=0;
	BOOL ans=FALSE;
	
	cout<<"Enter the first number ";
	cin>>no1;
	
	cout<<"Enter the second number ";
	cin>>no2;
	
	Factor obj;			//Object of Factor class.
	
	ans=obj.chkFactor(no1,no2);		//Calling the chkFactor function.
	
	if(ans==TRUE)
	{
		cout<<no2<<" is a factor of "<<no1;
	}
	
	else if(ans==FALSE)
	{
		cout<<no2<<" is not a factor of "<<no1;
	}
	
	else
	{
		return -1;
	}
	
	return 0;
 } 
