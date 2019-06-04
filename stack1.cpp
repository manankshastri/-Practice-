#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    
    stack<string> strString;
    string word;
    
    cout<<"Enter a line with six words: "<<endl;
    for(int i=0;i<6;i++){
        cin>>word;
        strString.push(word);
    }
    
    cout<<"Top element: "<<strString.top()<<endl
        <<"Size of the stack: "<<strString.size()<<endl;
    
    cout<<"Stack elements: "<<endl;
    while(!strString.empty()){
        cout<<strString.top()<<endl;
        strString.pop();
    }
    
    return 0;
}