#include<bits/stdc++.h>
using namespace std;
class Employee{
    int salary;
    public:
        void SetSalary(int s){
            salary=s;
        }

        int getSalary(){
            return salary;
        }
};
int main(){
    Employee obj1;
    obj1.SetSalary(100000);
    cout<<obj1.getSalary()<<endl;
    return 0;
}