#include<bits/stdc++.h>
using namespace std;
class Area{
    int l,b;
    public:
        Area(int x,int y);

        friend int PrintArea(Area);
};
Area::Area(int x,int y){
    l=x;
    b=y;
}
int PrintArea(Area s){
    int area=0;
    area=s.l*s.b;
    return area;
}

int main(){
    Area obj1(10,20);
    int res=PrintArea(obj1);
    cout<<res<<endl;
    return 0;
}