#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s="638577";
	sort(s.begin(),s.end(),less<int>());
	cout<<s;
	return 0;
}
