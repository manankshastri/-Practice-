#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    
    string line;
    
    fstream myfile1("input.txt");
    
    if (myfile1.is_open()){
        myfile1<<"\ncheck..";
        myfile1<<"\n123...";
        myfile1.close();
    }
    else{
        cout<<"unable to open file for writing";
    }
    
    ifstream myfile2("input.txt");
    
    if (myfile2.is_open()){
        while(getline(myfile2, line)){
            cout<<line<<"\n";
        }
        myfile2.close();
    }
    else{
        cout<<"unable to open file for reading";
    }
    
    return 0;
    
}