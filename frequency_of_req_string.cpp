//find the frequency of a character(given by user) in a string
#include<iostream>
#include<string>
using namespace std;
int frequency(string s,char target)
{
	int count=0;
	
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==target)
		{
			count++;
		}
		
		
	}
	return count;
}
int main()
{
	string str;
	char target;
	cout<<"Enter the string : ";
	cin>>str;
	cout<<endl<<"Enter the target value: ";
	cin>>target;
	int ans=frequency(str,target);
cout<<endl<<"Frequency of given target is : "<<ans;
return 0;
}
