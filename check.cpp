#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
    
    int n, q, a, b, k;
    cin>>n>>q;
    int* arr[n];
    
    for(int i=0;i<n;i++){
        
        cin>>k;
        arr[i] = new int[k];
        
        for(int j=0;j<k;j++)
            cin>>arr[i][j];
    }
    
    while(q--){
        cin>>a>>b;
        cout<<arr[a][b]<<endl;
    }
    
    
    return 0;
    
}
