//////////////////////////////////////////////////////////////////////////////////
//
//	Q.	Write a program which accept one number from
//		user and print multiplication of factors of
//		 that number on the screen.
//		
//		Input:  10		   |	 13		|	12
//		Otput: 10 (1*2*5)  |  1		    |   144 (1*2*3*4*6)
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

class FactorsMultiplication
{
	public:
		int multFactors(int);
};

int FactorsMultiplication :: multFactors(int no)
{
	int i=0,mult=1;			//mult variable initialized to 1
	
	for(i=1;i<=(no/2);i++)
	{
		if(no%i==0)		//Check if a no is a factor or not
		{
			mult=mult*i;	//Multiplication of Factors
		}
		
	}
	
	return mult;		//return the answer
}



int main()
{
	int no=0,ans=0;
	
	cout<<"Enter the no ";
	cin>>no;
	
	FactorsMultiplication obj;
	ans=obj.multFactors(no);			//call the multFactors Function 
	
	cout<<"The multipliction of factors of "<<no<<" is  "<<ans;
	
	return 0;
}
