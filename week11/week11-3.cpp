
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    unordered_map<string,int>m;

    m["���|��"] = 12750300;
    m["G"] = 12750236;
    cout<<"G���Ǹ��O:" << m["G"] <<endl;
}
