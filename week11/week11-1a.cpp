#include <iostream>
using namespace std;
int f(int n){
	int ans=0;
	while(n>0){/////step:bopifa
		ans+=n%10;
		n=n/10;
	}
	return ans;
}
int main()
{
	int n;
	while (cin >> n) {///////step01:inpu
		if(n==0) break;
		n=f(f(f(n)));
		cout<< n<<endl;
	}
}