#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout<<"輸入字串不能有空格";
    cin >> s;
    cout<<"字串s:"<<s<<"的長度是:"<<s.length()<<"\n";
    for (int i=0;i<s.length();i++){
        cout << s[i]<<"\n";
    }
}
