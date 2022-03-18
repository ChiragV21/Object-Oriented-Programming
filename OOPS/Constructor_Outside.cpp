#include<bits/stdc++.h>
using namespace std;
class Constructor{
    public:
        int a;
        int b;

        Constructor(int x,int y);
};
Constructor::Constructor(int x,int y){
    a=x;
    b=y;
}

int main(){
    Constructor c(10,15);
    cout<<c.a<<" "<<c.b<<endl;
    return 0;
}