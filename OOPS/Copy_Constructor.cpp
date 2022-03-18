#include<bits/stdc++.h>
using namespace std;
class Constructor{
    public:
        int a;
        int b;

        Constructor(int x,int y){
            a=x;
            b=y;
        }

        Constructor(const Constructor &c){
            a=c.a;
            b=c.b;
        }

        int getA(){
            return a;
        }

        int getB(){
            return b;
        }
};
int main(){
    Constructor c(10,15);
    Constructor c1=c;
    cout<<c.getA()<<" "<<c.getB()<<endl;
    cout<<c1.getA()<<" "<<c1.getB()<<endl;
    return 0;
}