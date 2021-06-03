////////////////////////////////////////////////////////////////////////////////
//	Q. Write a program which accept number from user and
//		print that number of $ and * on the screen.
//		
//	Input:  5					 |     3			|  -3
//	Output: $ * $ * $ * $ * $ * 			 | $ * $ * $  * 		|  $ * $ * $ *
//	
//	
//	Technology: C++
//	Input: Int
//	Output: Char
//	
//	Author: Sanket Kolhe
//	Date : 03/06/2021
//
///////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;


class Pattern
{
	public: 
		void printPattern(int);
};


void Pattern :: printPattern(int no)
{
	int i=0;
	
	if(no<0)//Updater
	{
		no= -no;
	}
	
	
	for(i=1;i<=no;i++)
	{
		cout<<"$  *";
		cout<<" ";
	}
}



int main()
{
	int no=0;
	
	cout<<"Enter the number ";
	cin>>no;
	
	Pattern obj;
	obj.printPattern(no);
	
	
	return 0;
}
