

/////////////////////////////////////////////////////////////
//	Q.Accept number from user and check wether number 
//		is even or odd.
//
//	Input: 	 21	 	|     14	 		
//	Output:	 Odd	|    Even	
//
//	Author: Sanket Kolhe
//	Date :  31/05/2021
//	Technology: C++
//
/////////////////////////////////////////////////////////////



#include<iostream>
using namespace std;



class EvenOrOdd
{
	public:
		void chkEvenOrOdd(int);	
};


void chkEvenOrOdd(int no)
{
	if((no%2)==0)
	{
		cout<<"Even";
	}
	
	else
	{
		cout<<"Odd";
	}
}


int main()
{
	int no=0;
	
	cout<<"Enter a number ";
	cin>>no;
	
	EvenOrOdd obj;
	
	obj.chkEvenOrOdd(no);
	
	
	return 0;
}


