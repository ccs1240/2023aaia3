//////////////c++
#include <iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    vector <int> a;
    unordered_map<int,int> m;
    m[999]=13;
    m[137]=7;
    cout<<"m[999]'s value  is"<<m[999]<<endl;
    cout<<"m[137]'s value  is"<<m[137]<<endl;
    return 0;
}
