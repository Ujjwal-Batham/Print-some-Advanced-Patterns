// write a C++ program to print the patterns

#include<iostream>

using namespace std;

int main()
{
   int row, column;
   cout<<"Enter the no of rows: ";
   cin>>row;
   cout<<"Enter the no of columns: ";
   cin>>column;
   
   for(int i =1; i<=row; i++)
   {
   	for(int j=1; j<=column; j++)
   	{
   		cout<<"* ";
	   }
	   cout<<endl;
   }
 return 0;
}

