#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"enter a first number:"<<endl;
	cin>>x;
	cout<<"enter a second number:"<<endl;
	cin>>y;
	char op;
	cout<<"enter a operator:"<<endl;
	cin>>op;
	if(op=='+')
	{
		cout<<x+y<<endl;
	}
	else if(op=='-')
	{
		cout<<x-y<<endl;
	}
	else if(op=='*')
	{
		cout<<x*y<<endl;
	}
	else if(op=='/')
	{
		cout<<x/y<<endl;
	}
	else if(op=='%')
	{
		cout<<x%y<<endl;
	}
	else
	{
		cout<<"invalid operation:"<<endl;
	}
	return 0;
}
	
	
	
