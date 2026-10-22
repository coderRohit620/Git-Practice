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

    void mainFunction(){
        cout<<"this is the main function";
    }
};

class Animal{
<<<<<<< HEAD
public:
<<<<<<< HEAD
    void Dog(){
        cout<<"Dog is a faithful Animal ";
=======
=======
    public:
>>>>>>> 47a928c (update animal class)
    void dog(){
        cout<<"Dog is a faithfull animal";
>>>>>>> 0f6d7a3 (update animal class)
    }
};

int main(){
    calculator cal;
    Animal ani;
    cal.add(10,5);
    cal.sub(10,5);
    cal.mul(10,5);
    cal.div(10,5);
    cal.mergeExample("in Git");
    cal.rebaseExample();
<<<<<<< HEAD
    cal.mainFunction();
<<<<<<< HEAD
    ani.Dog();
=======
    ani.dog();
=======
    ani.dog();

>>>>>>> 47a928c (update animal class)
>>>>>>> 0f6d7a3 (update animal class)
    return 0;
}