#include<iostream>
using namespace std;
int main(){
    cout<<"enter 1st character:";
    char ch1;
    cin>>ch1;
    int x ;
    x = (int)ch1;
    cout<<"enter 2nd character:";
    char ch2;
    cin>>ch2;
    int y;
    y = (int)ch2;
    int diff = x -y;
    cout<<"difference between two ASCII is :"<<diff;


    
}