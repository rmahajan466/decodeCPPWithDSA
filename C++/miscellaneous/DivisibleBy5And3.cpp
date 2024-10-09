#include <iostream>
using namespace std;
int main(){
    int n; // Method-01
    if(n%3==0 && n%5==0){ //Method-02 n%15==0
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}