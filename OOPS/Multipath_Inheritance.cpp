#include<bits/stdc++.h>
using namespace std;
class A{
    public:
        int a;
};

class B:public A{
    public:
        int b;
};

class C:public A{
    public:
        int c;
};

class D:public B,public C{
    public:
        int d;
};

int main(){
    D obj1;
    obj1.B::a=10;
    obj1.C::a=100;
    obj1.b=12;
    obj1.c=14;
    obj1.d=13;
    cout<<obj1.B::a<<" "<<obj1.C::a<<endl;
    cout<<obj1.b<<" "<<obj1.c<<" "<<obj1.d<<endl;
    return 0;
}