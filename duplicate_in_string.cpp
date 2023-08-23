//find the duplicate characters in a string.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void duplicate(string s){
	int len=s.length();
	sort(s.begin(),s.end());
	
	for(int i=0;i<len;i++)
	{
		int count=1;
		while(i<len-1&&s[i]==s[i+1])
		{
			count++;
			i++;
		}
		if(count>1)
		{
			cout<<s[i]<<" , count = "<<count<<endl;
		}
		
	}
	
}

int main()
{
	string str;
	cin>>str;
	duplicate(str);
	return 0;
}
