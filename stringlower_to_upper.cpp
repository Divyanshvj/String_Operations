#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string str = "abcde";
	//convert into upper case
	/*for(int i=0;i<str.size();i++)
	{
		if(str[i]>='a'&& str[i]<='z'){
			str[i]-=32;
		}
	}
	cout<<str;*/
	//using function
	
	transform(str.begin(),str.end(),str.begin(), ::toupper);
	cout<<str;
	
	return 0;
}
