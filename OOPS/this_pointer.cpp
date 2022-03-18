#include<bits/stdc++.h>
using namespace std;
class car{
    public:
        string name;
        int price;

        void set_details(string name,int price){
            this->name=name;
            this->price=price;
        }

        void showDetails(){
            cout<<this->name<<" "<<this->price<<endl;
        }
};
int main(){
    car c1;
    c1.set_details("Audi",12000000);
    c1.showDetails();
    return 0;
}