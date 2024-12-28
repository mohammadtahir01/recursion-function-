#include<iostream>
using namespace std;
int fibona( int number){
    if(number<=1){
        return number;
    }
    
    return fibona(number-1)+fibona(number-2);
}

int main(){
    int n;
    cout<<"enter the nubner:";
    cin>>n;
    cout<<fibona(n);
}