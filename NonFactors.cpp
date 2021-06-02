//////////////////////////////////////////////////////////////////////////////////
//
//	Q.	Write a program which accept one number from
//		user and print non-factors of
//		 that number on the screen.
//		
//		Input:  10		    |	 5		|	12
//		Otput: 3 4 6 7 8 9  | 2 3 4     | 5 7 8 9 10 11
//	
//		Technology: C++
//		Input: Int
//		Output: Int
//	
//		Author: Sanket Kolhe
//		Date : 01/06/2021
//	
//////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class PrintNonFactors
{
	public:
		void nonFactors(int);	
};

void PrintNonFactors :: nonFactors(int no)
{
	int i=0;
	
	for(i=1;i<no;i++)
	{
		if((no%i)!=0)	//check if 'i' is non-factor or not
		{
			cout<<i<<' ';		//print the non-factors
		}
	}
}


int main()
{
	int no=0;
	
	cout<<"Enter the number ";
	cin>>no; 
	
	PrintNonFactors obj;	//Create the Object to call the method
	obj.nonFactors(no);		//Call the nonFactors Function
	
	return 0;
}
