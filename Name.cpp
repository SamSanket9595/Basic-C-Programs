////////////////////////////////////////////////////////////////////////////////
//	
//		Q.Write a program which accepts a name from user
//		   and print that name. 
//		
//		Input :	 sam	|	saggy	|   Rahul
//		Output:	 sam 	| saggy		|    Rahul
//	
//		Technology: C++
//		Input : char 
//		Output: char
//	
//		Author: Sanket Kolhe
//		Date : 03/06/2021
//	
/////////////////////////////////////////////////////////////////////////////////



#include<iostream>
using namespace std;

class Name
{
	public:
		void dispName(char name[]);

};

void Name :: dispName(char name[])
{
	cout<<"Hello "<<name;
}


int main()
{
	char name[20];
	
	cout<<"Enter the name ";
	cin>>name;
	
	Name obj;
	obj.dispName(name);
	
	return 0;
}
