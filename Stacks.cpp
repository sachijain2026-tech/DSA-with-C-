#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    s.push(10);
    cout<<s.top()<<endl;

    return 0;
}