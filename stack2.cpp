#include<iostream>
#include<stack>

int main(){
    
    std::stack<int> stackInt;
    int num;
    
    std::cout<<"Enter 10 numbers: "<<std::endl;
    for(int i=1;i<=10;i++){
        std::cin>>num;
        stackInt.push(num);
    }
    
    std::cout<<"\nTop element: "<<stackInt.top()<<std::endl;
    std::cout<<"\nStack size: "<<stackInt.size()<<std::endl;
    
    std::cout<<"\nStack contains: "<<std::endl;
    while(!stackInt.empty()){
        std::cout<<stackInt.top()<<std::endl;
        stackInt.pop();
    }
    
    return 0;
}