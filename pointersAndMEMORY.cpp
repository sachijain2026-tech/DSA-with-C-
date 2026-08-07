// #include <iostream>
// using namespace std;
// int main()
// {
//     int num = 5;
//     int *ptr = &num;
//     cout << "Value at address:" << *ptr << endl;
//     cout << "Size of variable(int):" << sizeof(num) << endl;
//     cout << "Size of pointer(int):" << sizeof(ptr) << endl;
//     cout << "--------------------------------" << endl;
//     bool b = true;
//     bool *p1 = &b;
//     cout << "Value at address:" << *p1 << endl;
//     cout << "Size of variable(bool):" << sizeof(b) << endl;
//     cout << "Size of pointer(bool):" << sizeof(p1) << endl;
//     cout << "--------------------------------" << endl;
//     double d = 4.34567;
//     double *p2 = &d;
//     cout << "Value at address:" << *p2 << endl;
//     cout << "Size of variable(double):" << sizeof(d) << endl;
//     cout << "Size of pointer(double):" << sizeof(p2) << endl;
//     cout << "--------------------------------" << endl;
//     float f = 10.2F;
//     float *p3 = &f;
//     cout << "Value at address:" << *p3 << endl;
//     cout << "Size of variable(float):" << sizeof(f) << endl;
//     cout << "Size of pointer(float):" << sizeof(p3) << endl;
//     cout << "--------------------------------" << endl;
//     char ch = 'A';
//     char *p4 = &ch;
//     cout << "Value at address:" << *p4 << endl;
//     cout << "Size of variable(char):" << sizeof(ch) << endl;
//     cout << "Size of pointer(char):" << sizeof(p4) << endl;
//     cout << "--------------------------------" << endl;

//     int i=100;
//     int *t=&i;
//     cout<<"Value at t: "<<t<<endl;
//     cout<<"Value at address: "<<*t<<endl;
//     (*t)++;
//     cout<<"Value at t: "<<t<<endl;
//     cout<<"Value at address: "<<*t<<endl;
//     t++;
//     cout<<"Value at t: "<<t<<endl;
//     cout<<"Value at address: "<<*t<<endl;

// }
/*
#include <iostream>
using namespace std;

int main() {
    // int arr[10]={1,2};
    // cout<<arr<<endl;
    // cout<<*arr<<endl;
    // cout<<"Sizeof:"<<sizeof(arr)<<endl;
    // int *p=arr;;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<"Sizeof:"<<sizeof(p);
    // char ch[10]="SachiJain";
    // cout<<"1st: "<<&ch[0]<<endl;
    // cout<<"2nd: "<<ch[0]<<endl;
    // char *c=&ch[0];
    // cout<<"3rd: "<<c<<endl;
    // c=c+1;
    // cout<<"4th: "<<*c<<endl;
    // char cap='a';
    // char *p=&cap;
    // cout<<"5th: "<<*p<<endl;
    int num=5;
    int *p=&num;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<"-----------"<<endl;
    int *q=p;
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<"-----------"<<endl;
    int **r= &p;
    cout<<r<<endl;
    cout<<*r<<endl;
    cout<<**r<<endl;
    cout<<"-----------"<<endl;

    //updating q
    *q=*q+1;
    cout<<*q<<endl;
    cout<<*p<<endl;


}
*/
/*
#include <iostream>
using namespace std;
int update(int &a){
    int &ans=a;
    cout<<"func: "<<&a<<endl;
    ans++;
    return ans;

}
int main(){
    int i=5;
    int *p=&i;
    int c=update(i);
    cout<<"main: "<<&i<<endl;
    cout<<c<<endl;
    cout<<"i: "<<i;

}
    */

#include <iostream>
using namespace std;
int main()
{
}
