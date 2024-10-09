#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a = 1;
    int b = 1;
    int sum = 0;
    cout<<0<<" ";
    for(int i = 0; i < (n-3); i++){
        sum = a + b;
        a = b;
        b = sum;
        cout<<a<<" "<<b<<" ";
    }
}