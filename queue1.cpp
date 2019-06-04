#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main(){
    
    queue<string> strQueue;
    string word;
    
    cout<<"Enter a line with six words: "<<endl;
    for(int i=0;i<6;i++){
        cin>>word;
        strQueue.push(word);
    }
    
    cout<<"Front element: "<<strQueue.front()<<endl
        <<"Back element: "<<strQueue.back()<<endl
        <<"Size of the stack: "<<strQueue.size()<<endl;
    
    cout<<"Stack elements: "<<endl;
    while(!strQueue.empty()){
        cout<<strQueue.front()<<endl;
        strQueue.pop();
    }
    
    return 0;
}