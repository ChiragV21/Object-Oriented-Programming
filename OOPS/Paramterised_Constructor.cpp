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

        int getA(){
            return a;
        }

        int getB(){
            return b;
        }
};
int main(){
    Constructor c(10,15);
    cout<<c.getA()<<" "<<c.getB()<<endl;
    return 0;
}