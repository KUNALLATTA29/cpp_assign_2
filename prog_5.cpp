#include<iostream>
using namespace std;

int main(){
    
    int a;
    
    cout<<"enter number: ";
    cin>>a;
    
    
    
    if(a>0){
        cout<<"positive";
    }else if(a<0){
        cout<<"negative";
    }else{
        cout<<"zero";
    }
    
    return 0;
}