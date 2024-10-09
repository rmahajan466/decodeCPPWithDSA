#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout<<"Enter n: ";
    cin>>n;
    // for(int i = 1; i<=n; i++){
    //     if(i%2==0){
    //         sum += i;
    //     }
    //     else{
    //         sum -= i;
    //     }
    // }
    // If n is even -> sum is -1 * n/2
    // If n is odd -> sum is -1 * (n-1)/2
    if(n%2==0) sum = (-n/2);
    else sum = (-n/2)+n;
    cout<<sum;
}
