#include<iostream>
#include<queue>

int main(){
    
    std::queue<int> queueInt;
    int num;
    
    std::cout<<"Enter 10 numbers: "<<std::endl;
    for(int i=1; i<=10; i++){
        std::cin>>num;
        queueInt.push(num);
    }
    
    std::cout<<"Front element: "<<queueInt.front()<<std::endl
             <<"Back element: "<<queueInt.back()<<std::endl
             <<"Queue Size: "<<queueInt.size()<<std::endl;
    
    std::cout<<"Queue Elements: "<<std::endl;
    while(!queueInt.empty()){
        std::cout<<queueInt.front()<<std::endl;
        queueInt.pop();
    }
    
    return 0;
}