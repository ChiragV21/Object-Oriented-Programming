#include<bits/stdc++.h>
using namespace std;
class Parent{
    public:
        int id_p;
};
class Child:public Parent{
    public:
        int id_c;
};
int main(){
    Child c; 
    c.id_p=23;
    c.id_c=7;
    cout<<c.id_p<<endl;
    cout<<c.id_c<<endl;
    return 0;
}