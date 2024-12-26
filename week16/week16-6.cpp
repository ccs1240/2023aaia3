#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int ans=0,a=0,b=0,c=0,d=0;
	if(s[0]=='1') a=8;
	if(s[1]=='1') b=4;
	if(s[2]=='1') c=2;
	if(s[3]=='1') d=1;
	ans=a+b+c+d;
	cout<<ans<<endl;
}