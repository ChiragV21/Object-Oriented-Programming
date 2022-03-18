#include<bits/stdc++.h>
using namespace std;
class Cars{
    public:
        void Price(string s){
            cout<<"Audi - "<<s<<endl;
        }

        void Price(int s){
            cout<<"Price:"<<s<<endl;
        }
};
int main(){
    Cars obj1;
    obj1.Price("A-12");
    obj1.Price(10000000);
    return 0;
}