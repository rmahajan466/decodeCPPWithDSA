#include<iostream>
using namespace std;
int main(){
    int n, r=0, rem=0;
    cout<<"Enter a num: ";
    cin>>n;
    while(n>0){
        r *= 10;
        rem = n % 10;
        r += rem;
        n /= 10;
    }
    cout<<r;
}