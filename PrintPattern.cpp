////////////////////////////////////////////////////////////////////////
//
//	Q. Accept one character from user and one number from user 
//     and print that specific character in specific no of times.
//
// 	Input  : 'M'  5			|   '$'   -4     |    'X'   2   
//  	Output :  M M M M M		|	$ $ $ $      |     X  X 
//
//
//	Input:  		Char,Int
//      Output:		 	Char
//	Technology: 	        C++ 
//
// 	Author: 		Sanket Kolhe
// 	Date:   		31/05/2021
//	
//////////////////////////////////////////////////////////////////////////   




#include<iostream>
using namespace std;


class PrintPattern
{
	public:
	  void Pattern(char,int);
};

void PrintPattern :: Pattern(char ch,int n)
{
	int i=0;
	
	if(n<0)   //Updater
	{
		n=-n;
	}
	
	for(i=1;i<=n;i++)
	{
		cout<<ch<<'\t';		//Print The actual output
	}
}

int main()
{
	char ch='\0';
	int n=0;
	
	cout<<"Enter the character to print  ";
	cin>>ch;
	
	cout<<"\nEnter no of times to print the character  ";
	cin>>n;
	
	PrintPattern obj;
	
	obj.Pattern(ch,n);		//Call the Function
	
	
	return 0;
}
