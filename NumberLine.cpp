////////////////////////////////////////////////////////////////////////////////
//	Q. Write a program which accept number from user and
//		print that number its number line.
//		
//	Input:  4					    |     3			
//	Output: -4 -3 -2 -1 0 1 2 3 4   | -3 -2 -1 0 1 2 3 
//	
//	
//	Technology: C++
//	Input: Int
//	Output: Int
//	
//	Author: Sanket Kolhe
//	Date : 03/06/2021
//
///////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;


class NumberLine
{
	public:
		void dispNLine(int);
};


void NumberLine :: dispNLine(int no)
{
	int i=0;
	
	for(i=(-no);i<=no;i++)
	{
		cout<<i<<" ";
		
	}	
}


int main()
{
	int no=0;
	
	cout<<"Enter the number ";
	cin>>no;
	
	NumberLine obj;
	obj.dispNLine(no);
	
	
	return 0;
}
