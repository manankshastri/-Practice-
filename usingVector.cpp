#include<iostream>
#include<vector>

using namespace std;

void printVector(vector<float> vIn){
    vector<float>::iterator it;
    for(it = vIn.begin(); it!= vIn.end(); ++it){
        cout<<*it<<" ";
    }
}


int main(){
    
    vector<float> vFloat;
    cout<<"vFloat has "<<vFloat.size()<<" elements\n";

    cout<<"\n\nAdding 10 elements to the vector\n";

    vFloat.assign(10, 8.8); 
    cout<<"vFloat has "<<vFloat.size()<<" elements\n"; 

    printVector(vFloat);

    return 0;
}