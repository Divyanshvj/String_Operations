#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string str ="ABCDE";
/*	for(int i=0;i<str.size();i++)
	{
		if(str[i]>='A' && str[i]<='Z'){
			str[i] +=32;
		}
	}
	cout<<str;*/
	
	
	//using function
	transform(str.begin(),str.end(),str.begin(),::tolower);
	cout<<str;
	
	
	return 0;
}
