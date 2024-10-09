#include <iostream>
using namespace std;
int main(){
    int n, rem, sum = 0;
    cout << "Enter a number: ";
    cin>>n;
    while(true){
        if (n!=0){
            rem = n%10;
            sum +=rem;
            n /= 10;
        }
        else{
            break;
        }
    }
    cout<<sum;
}