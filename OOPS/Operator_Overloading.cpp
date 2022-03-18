#include<bits/stdc++.h>
using namespace std;
class Complex{
    int real,img;
    public:
        Complex(int r=0,int i=0){
            real=r;
            img=i;
        }

        Complex operator+(Complex const &obj){
            Complex res;
            res.real=real+obj.real;
            res.img=img+obj.img;
            return res;
        }

        void Print(){
            cout<<real<<"+i"<<img<<endl;
        }
};
int main(){
    Complex c1(10,20),c2(20,30);
    Complex c3=c1+c2;
    c3.Print();
    return 0;
}