#include<iostream>
using namespace std;

template <typename T>
T sumTwo(T a, T b){
    return a+b;
}

int main(){
    
    int a = 90;
    int b = 1;
    cout<<a<<" + "<<b<<" = " <<sumTwo(a, b);
    
    return 0;
}