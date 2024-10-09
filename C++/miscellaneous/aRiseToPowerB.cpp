#include<iostream>
using namespace std;
int main(){
    int a,b;
    float pow=1;
    cout<<"Enter base power: ";
    cin>>a>>b;
    bool flag = true;
    if(b<0){
        flag = false;
        b = -b;
    }
    for(int i = 1;i<=b;i++){
        pow *=a;
    }
    if(flag==false){
        pow = 1/pow;
        b = -b;
    }
    if(a==0&&b==0) cout<<"Not Defined";
    else cout<<a<<"^"<<b<<" = "<<pow;
}
