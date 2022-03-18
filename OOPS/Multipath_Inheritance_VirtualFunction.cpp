#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        int a;
};

class B:virtual public A{
    public:
        int b;
};

class C:virtual public A{
    public:
        int c;
};

class D:public B,public C{
    public:
        int d;
};

int main(){
    D obj1;
    obj1.a=10;
    obj1.a=100;
    obj1.b=12;
    obj1.c=14;
    obj1.d=13;
    cout<<obj1.a<<" "<<obj1.b<<" "<<obj1.c<<" "<<obj1.d<<endl;
    return 0;
}