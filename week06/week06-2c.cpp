#include<iostream>
#include<vector>
#include<algorithm>//05
using namespace std;
int main()
{
	vector<int> a;//03
	int now;
	while(cin>>now){///step 01
		a.push_back(now); //Step03 vector array
		sort(a.begin(),a.end());//05
		int N=a.size();
		if(N%2==1)cout<<a[N/2]<<"\n";
		else cout<<(a[N/2-1]+a[N/2])/2<<"\n"; //step06
		//for(int b:a) cout<<b<<' ';
		//cout << "\n";//04 print array
		//cout<<now<<"\n"; ///step2 output
	}
}