////////////////////////////////////////////////////////////////////////////////
//	
//		Q.Write a program which accepts a character from
//			user and check wether it is vowel or not.
//		
//		Input :	 A		|	d		|   e
//		Output:	TRUE 	| FALSE		|  TRUE
//	
//		Technology: C++
//		Input : char
//		Output: char
//	
//		Author: Sanket Kolhe
//		Date : 02/06/2021
//	
/////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

#define TRUE  1
#define FALSE 0
#define ERROR -1 

typedef int BOOL;

class Vowels
{
	public:
		BOOL chkVowel(char);
};

BOOL Vowels :: chkVowel(char ch)
{
	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
	{
		if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||\
		(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
	
	else
	{
		cout<<"Not a Alphabet to check Vowel";
		return ERROR;
	}

}




int main()
{
	char ch='\0';
	BOOL ans=FALSE;
	
	cout<<"Enter a character ";
	cin>>ch;
	
	Vowels obj;
	ans=obj.chkVowel(ch);
	
	if(ans==TRUE)
	{
		cout<<"It is a vowel";
	}
	
	else if(ans==FALSE)
	{
		cout<<"It is not a vowel";
	}
	
	else
	{
		return -1;
	}	
	
	return 0;
}
