#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> a;//03
	int now;
	while(cin>>now){///step 01
		a.push_back(now); //Step03 vector array
		for(int b:a) cout<<b<<' ';
		cout << "\n";//04 print array
		//cout<<now<<"\n"; ///step2 output
	}
}