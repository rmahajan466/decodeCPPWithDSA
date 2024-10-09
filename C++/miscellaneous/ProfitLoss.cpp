#include<iostream>
using namespace std;
int main(){
    float SP, CP, Profit, Loss;
    cout<<"Enter the Selling Price: ";
    cin>>SP;
    cout<<"Enter the Cost Price: ";
    cin>>CP;
    if(SP>CP){
        Profit=SP-CP;
        cout<<"Profit is: "<<Profit;
    }
    else if(SP<CP){
        Loss=CP-SP;
        cout<<"Loss is: "<<Loss;
    }
    else{
        cout<<"No Profit or Loss";
    }
}