#include<bits/stdc++.h>
using namespace std;
class Base{
    public:
        virtual void show(){
            cout<<"Base Class"<<endl;
        }
};

class Derived:public Base{
    public:
        void show(){
            cout<<"Derived Class"<<endl;
        }
};
int main(){
    Base* bptr;
    Derived d;
    bptr=&d;
    bptr->show();
    return 0;
}