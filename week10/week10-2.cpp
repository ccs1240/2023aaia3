
///jin j de class lee man yo zi liaw¡Byo feng fa
#include<iostream>
#include<string>
using namespace std;
class Cat{
public:
     string name;
     void print(){
     cout<<"Iam a cat.My name is "<< name <<"\n";
     }
};

int main()
{
    Cat cat1,cat2;
    cat1.name="xiao bai";
    cat2.name="xiao huwa";
    cat1.print();
    cat2.print();
}
