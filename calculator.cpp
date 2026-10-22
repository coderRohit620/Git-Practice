#include<iostream>
using namespace std;

class calculator {

public:
    int add(int a,int b){
        cout<< "Sum : "<<a+b;
    }

    int sub(int a,int b){
        cout<< "Sub : "<<a-b;
    }
    int mul(int a,int b){
        cout<< "Mul : "<<a*b;
    }
    int div(int a,int b){
        cout<< "Div : "<<a/b;
    }

    void mergeExample(string a){
        cout<<"Here i Learn how to merge ";
    }

};



int main(){
    calculator cal;
    
    return 0;
}