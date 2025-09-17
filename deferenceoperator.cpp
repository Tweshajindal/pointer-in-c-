#include<iostream>
using namespace std;
int main(){
    int x = 2;
    int* p=&x;
    cout<<x<<endl;
    *p = 22;
    cout<<x<<endl;
}