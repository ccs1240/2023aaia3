
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    unordered_map<string,int>m;

    m["蔡育倫"] = 12750300;
    m["G"] = 12750236;
    cout<<"G的學號是:" << m["G"] <<endl;
}
