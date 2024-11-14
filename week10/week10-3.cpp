///«Øºc¨ç¦¡
#include<iostream>
#include<string>
using namespace std;
class Cat{
public:
     Cat(string _name){
        name= _name;
    }
    string name;
    void print(){
    cout<<"Iam a cat.My name is "<< name <<"\n";
    }
};

int main()
{
    Cat cat1("xiao huwa"),cat2("xiao bai");
    cat1.print();
    cat2.print();
}
