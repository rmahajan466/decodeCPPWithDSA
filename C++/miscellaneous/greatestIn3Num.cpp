#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(c<a && a>b){
        cout<<a;
    }
    else if (a<b && b>c){
        cout<<b;
    }
    else{
        cout<<c;
    }


}