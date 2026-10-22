#include<iostream>
using namespace std;

class calculator {

public:
    void add(int a,int b){
        cout<< "Sum : "<<a+b<<'\n';
    }

    void sub(int a,int b){
        cout<< "Sub : "<<a-b<<'\n';
    }
    void mul(int a,int b){
        cout<< "Mul : "<<a*b<<'\n';
    }
    void div(int a,int b){
        cout<< "Div : "<<a/b<<'\n';
    }

    void mergeExample(string a){
        cout<<"Here i Learn how to merge "<<a<<'\n';
    }

    void rebaseExample(){
        cout<<"here i learn rebase in git\n";
    }
};

class Animal{
    public:
    void Dog(){
        cout<<"Dog is a faithful Animal ";
    }
}

int main(){
    
    calculator cal;
    cal.add(10,5);
    cal.sub(10,5);
    cal.mul(10,5);
    cal.div(10,5);
    cal.mergeExample("in Git");
    cal.rebaseExample();

    return 0;
}