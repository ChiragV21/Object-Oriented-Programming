#include<bits/stdc++.h>
using namespace std;
class DefaultConstructor{
    public:
        int a;
        int b;

        DefaultConstructor(){
            a=10;
            b=20;
            int sum=a+b;
            cout<<sum<<endl;
        }
};
int main(){
    DefaultConstructor c;
    // int sum=c.a+c.b;
    // cout<<sum<<endl;
    return 0;
}