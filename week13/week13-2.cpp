#include <iostream>
using namespace std;
int h(int a,int b){
	int ans=0,carry=0;
	while(a>0||b>0)
	{
		int now=a%10+b%10+carry;
		a/=10;
		b/=10;
		carry=now/10;
		ans+=carry;
	}
	return ans;
}
int main()
{
	int a,b;
	while(cin >>a >>b){
		if(a==0 && b==0) break;
		int ans =h(a,b);
		if(ans==0) cout << "No carry operation.\n";
		else if(ans==1) cout<<"1 carry operation.\n";
		else cout << ans<<" carry operations.\n";
	}//step02 out
}