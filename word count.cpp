#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string filename;
	string word;
	int count=0;
	cout<<"Enter a filename:"<<endl;
	cin>>filename;
	ifstream inputFile(filename);
	if(!inputFile)
	{
		cout<<"Error in File opening"<<endl;
	}
while(inputFile>>word)
	{
		count++;
	}
		cout<<"Total word is:"<<count<<endl;
	return 0;
}