#include<bits/stdc++.h>
using namespace std;
class Destructor{
    public:
        Destructor(){
            cout<<"Constructor called"<<endl;
        }

        ~Destructor(){
            cout<<"Destructor called"<<endl;
        }
};
int main(){
    Destructor c1,c2;
    return 0;
}