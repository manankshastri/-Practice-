#include<iostream>

using namespace std;

int main(){
    
    int beta;
    int* intPtr = &beta;
    
    *intPtr = 28;
    
    cout<<intPtr<<endl;
    cout<<*intPtr<<endl;
    
    return 0;
}