#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"No of rows: ";
    cin>>n;
    int a;
    for(int i=1;i<=n;i++){
        if(i%2!=0) a=1; // odd row
        else a = 0; //even row
        for(int j=1;j<=i;j++){
            cout<<a;
            //flipping
            if(a==1) a=0;
            else a=1;
        }
        cout<<endl;
    }
}