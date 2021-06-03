////////////////////////////////////////////////////////////////////////////////
//	Q. Write a program which accept number from user and
//		print first five multiples of that number on screen.
//		
//	Input:  5				  |     3			    |  -4
//	Output: 5 10 15 20 25     | 3  6  9  12 15   	| 4  8 12 16 20
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


class Multiples
{
	public:
		void dispMultiples(int);
};

void Multiples :: dispMultiples(int no)
{
	int i=0;
	
	if(no<0)
	{
		no=-no;
	}
	
	for(i=1;i<=5;i++)
	{
		cout<<i*no<<' ';
	}
}

int main()
{
	int no=0;
	
	cout<<"Enter the number ";
	cin>>no;
	
	Multiples obj;
	obj.dispMultiples(no);
	
	
	return 0;
}

