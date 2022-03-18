#include<bits/stdc++.h>
using namespace std;
class Interview{
    public:
        Interview(){
            cout<<"Interview process must contain DSA"<<endl;
        }
};

class DSA:public Interview{
    public:
        DSA(){
            cout<<"I have topic of Linked List, Stack,etc."<<endl;
        }
};
int main(){
    DSA d1;
    return 0;
}