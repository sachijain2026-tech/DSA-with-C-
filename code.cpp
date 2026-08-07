/*
#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
    int a=5, b=10.9;
    float PI=3.14F;
    float s=100.02;
    double sa=100.02F;
    double sachi=100.02;
    cout<<PI<<endl;
    cout<<"Data type of PI:"<<typeid(PI).name()<<endl;
    cout<<"Data type of s:"<<typeid(s).name()<<endl;
    cout<<"Data type of sa:"<<typeid(sa).name()<<endl;
    cout<<"Data type of sachi:"<<typeid(sachi).name()<<endl;
    cout<<"Data type of a:"<<typeid(a).name()<<endl;
    cout<<(a*b)<<endl;
    cout<< (a<b)<<endl;
    return 0;
}
*/

/// CALCULATOR
/*
#include <iostream>
using namespace std;
void Sum(){
    int n;
    cout<<"How many numbers you want to add?";
    cin>>n;
    double sum=0;
    double c;
    cout<<"Enter the number(s): "<<endl;
    for(int i=0; i<n;i++){
        cin>>c;
        sum+=c;
    }
    cout<<"Sum of number is: "<<sum<<endl;
    cout<<"----------------------------------------"<<endl;
}
void Diff(){
    double a, b;
    cout<<"Enter the number(s): "<<endl;
    cin>>a;
    cin>>b;
    double diff=a-b;
    cout<<"Difference of numbers is: "<<diff<<endl;
    cout<<"----------------------------------------"<<endl;
}
void Pro(){
    int n;
    cout<<"How many numbers you want to multiply?";
    cin>>n;
    double m=1;
    double c;
    cout<<"Enter the number(s): "<<endl;
    for(int i=0; i<n;i++){
        cin>>c;
        m=m*c;
    }
    cout<<"Product of numbers is: "<<m<<endl;
    cout<<"----------------------------------------"<<endl;
}
void Div(){
    double a, b;
    cout<<"Enter the number(s): "<<endl;
    cin>>a;
    cin>>b;
    if(b==0){
        cout<<"Pls enter correct value!"<<endl;
        cout<<"----------------------------------------"<<endl;
        return;
    }
    double div=a/b;
    cout<<"Division of numbers is: "<<div<<endl;
    cout<<"----------------------------------------"<<endl;
}
int main(){
    while(true){
        cout<<"MENU DRIVEN PROGRAM- CALCULATOR"<<endl;
        cout<<"1) Sum\n2) Subtract\n3) Multiply\n4) Divide\n5) Exit"<<endl;
        int ch;
        cout<<"Enter what to perform: ";
        cin>>ch;
        if(ch==1){
            Sum();
        }
        else if(ch==2){
            Diff();
        }
        else if(ch==3){
            Pro();
        }
        else if(ch==4){
            Div();
        }
        else if(ch == 5){
            cout << "Thanks for visiting!!" << endl;
            break;
        }
        else{
            cout << "Invalid choice! Please try again." << endl;
            cout<<"----------------------------------------"<<endl;
        }
    }

}
*/
/*
//TO CHECK UPPERCASE AND LOWERCASE
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Welcome!"<<endl;
    cout<<"Enter the character to be checked: ";
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"Dear!, it's lowercase!"<<endl;
    }
    else if (ch>='A' && ch<='Z'){
        cout<<"Dear!, it's uppercase!"<<endl;
    }
    else{
        cout<<"Error:: Please enter a vaild character!!"<<endl;
    }
}
*/
/*
//TO CHECK FOR PRIME NUMBER
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if (n == 0 || n == 1) {
        cout << "Neither prime nor composite";
        return 0;
    }
    cout<<"Checking whether the number is prime or composite ??..."<<endl;
    int i=2,rem=0,isPrime=0;
    while (i<n){
        rem=n%i;
        i++;
        if (rem==0){
            isPrime=1;
            break;
        }
    }
    if (isPrime==0){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"composite!"<<endl;
    }

}
*/
/*
//SUM OF ALL NUMBERS WHICH ARE DIVISIBLE BY 3
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the upper limit:";
    cin>>n;
    int i=0,sum=0;
    while(i<=n){
        if (i%3==0){
            sum+=i;
        }
        i++;
    }
    cout<<"Sum of numbers divisible by 3 is "<<sum<<endl;
}
*/
/*
//PATTERNS
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int a=1;
    for (int i=0; i<n;i++){
        int c=a;
        for (int j=0; j<i+1;j++){
            cout<<c<<" ";
            c++;
        }
        cout<<endl;
        a++;
    }
}
*/
/*
//PATTERN
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    char ch='A';
    for(int i=0; i<n;i++){
        for(int j=0; j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }

}
*/
/*
//PATTERN
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows:";
    cin>>n;
    for (int i=0; i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=i+1;j++){
            cout<<j;
        }
        for(int j=i;j>=1;j--){
            cout<<j<<"";
        }
        cout<<endl;
    }
}
*/
/*
//CALCULATE FACTORIAL
#include <iostream>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int main(){
    cout<<"Factorial is:"<<fact(5)<<endl;
}
*/
/*
//SUM OF DIGITS OF NUMBER
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int sum=0;
    int r=0;
    while(n/10!=0){
        r=n%10;
        n=n/10;
        sum+=r;
    }
    sum+=n;
    cout<<"sum of digits is:"<<sum<<endl;
    return 0;
}
*/
/*
//BINOMIAL COEFFICIENT CALC
#include <iostream>
using namespace std;
double fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
void binomial(double a,double b,double c){
    cout<<"Binomial Coefficient is:"<<a/(b*c)<<endl;
}
int main(){
    int n,r;
    cout<<"Let's calculate the binomial coefficient of given n and r for nCr.."<<endl;
    cout<<"Please enter value of n:";
    cin>>n;
    cout<<"Please enter value of r:";
    cin>>r;
    if(n==0 || r==0){
        cout<<"ERROR:: PLEASE ENTER VALID INPUT!!"<<endl;
        return;
    }
    double a=fact(n);
    double b=fact(n-r);
    double c=fact(r);
    binomial(a,b,c);

}
*/
/*
//SMALLEST NUMBER IN AN ARRAY
#include <iostream>
using namespace std;
void inputArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
void change(int x){
    cout<<"in change:";
    cout<<2*x;
}
int main(){
    int arr[5];
    inputArray(arr,5);
    int x=10;
    change(x);
    cout<<"in main:";
    cout<<x;

}
*/
/*
//PALINDROME NUMBER
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int ans=0;
    int num=n;
    while(n>0){
        int r=n%10;
        n/=10;

        ans=(ans*10)+r;
    }
    if(ans==num){
        cout<<"Yes";
    }
    else{
        cout<<"no";
    }
}
    */
/*
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    cout<<"before deletion:"<<vec.size()<<endl;
    for(int i: vec){
        cout<<i<<endl;
    }
    // for(int i=0;i<vec.size();i++){
    //     cout<<vec[i]<<endl;
    // }
    cout<<"capacity:"<<vec.capacity()<<endl;
    cout<<"first:"<<*vec.end();
}
*/
/*
//IMPLEMENTATION OF C++ STL
#include <iostream>
#include <deque>
#include <utility>
#include <stack>
#include <vector>
#include <algorithm>
#include <list>
#include <queue>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    vector<int>vec={10,11,12,13,14,15,16,17};
    list<int>l={100,200,300,400};
    queue<int>q;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    q.push(11);
    cout<<q.empty()<<endl;
}
*/

// RECURSION
/*
#include <iostream>
#include <algorithm>
using namespace std;
// void name(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n<<" ";
//     n--;
//     name(n);
// }
// int main(){
//     int n;
//     cout<<"how many times u want to print??:";
//     cin>>n;
//     name(n);
// }
//REVERSE AN ARRAY USING RECURSION
void reverse_arr(int arr[],int n,int l, int r){
    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    reverse_arr(arr,5,l+1,r-1);
}
int main(){
    int arr[5]={1,2,3,4,5};
    // cout<<*(arr+(sizeof(arr)/sizeof(int))-1)<<endl;
    int r=(sizeof(arr)/sizeof(int))-1;
    cout<<"Before reversing: ";
    for(auto i: arr){
        cout<<i<<" ";
    }
    reverse_arr(arr,5,0,r);
    cout<<endl;
    cout<<"After reversing: ";
    for(auto i: arr){
        cout<<i<<" ";
    }
}
*/
/*
//CHECK FOR PALINDROME
#include <iostream>
#include <string>
using namespace std;
bool ispalindrome(string s, int l){
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[l-i]){
            cout<<"Not a palindrome!"<<endl;
            return false;
        }
    }
    cout<<"It is a palindrome"<<endl;
    return true;
}
int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    ispalindrome(s,s.length()-1);
}
*/
/*
//FIBONACCI NUMBER
#include <iostream>
using namespace std;
int fib(int n){
    int s=0, l=1;
    if(n==0){
        return s;
    }
    if(n==1){
        return l;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cin>>n;
    int a=fib(n);
    cout<<a<<endl;
}
*/
/*
//CHARACTER HASHING
#include <iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // cout<<"Entering the elements in array:"<<endl;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    string s;
    cout<<"Enter the string:";
    cin>>s;
    int hash[300]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    int q;
    cout<<"how many queries:";
    cin>>q;
    while(q>0){
        char ch;
        cout<<"ENter the character:";
        cin>>ch;
        cout<<hash[ch]<<endl;
        q--;
    }

}
*/
/*
#include <iostream>
#include <map>
using namespace std;
int main(){
    map<string,int>m;
    m.emplace("television",50);
    m.emplace("laptop",100);
    m.emplace("tablet",120);
    cout<<"Before:"<<endl;
    for(auto p:m){
        cout<<p.first<<"-"<<p.second<<endl;
    }
    m["television"]=1000;
    cout<<endl;
    cout<<"After:"<<endl;
    for(auto p:m){
        cout<<p.first<<"-"<<p.second<<endl;
    }
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=4;
    }
    for(auto i:arr){
        cout<<i<<endl;
    }
}
    */

/*
//COUNT PRIMES---BRUTE FORCE APPROACH
#include <iostream>
#include <vector>
using namespace std;
int isPrime(int n){
    int i=2,rem=0;
    while(i<n){
        rem=n%i;
        if(rem==0){
            return 0;
        }
        i++;
    }
    return 1;
}
int main(){
    int num;
    vector<int>vec;

    cout<<"Enter:";
    cin>>num;
    int i=2,count=0;
    while(i<num){
        int a=isPrime(i);
        if(a==1){
            vec.push_back(i);
            count++;
        }
        i++;
    }

    cout<<"Ans: "<<count<<endl;

}
*/

/*
//COUNT PRIMES-SIEVE OF ERATHOSTHENES
#include <iostream>
#include <vector>
using namespace std;
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a==b){
        return a;
    }
    while(a!=b){
        if(a>b){
            a-=b;
        }
        else{
            b-=a;
        }
    }
}
int lcm(int g,int a ,int b){
    int lcm=(a*b)/g;
    return lcm;
}
int main(){
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    int ans=gcd(a,b);
    cout<<"GCD: "<<ans<<endl;
    cout<<"LCM: "<<lcm(ans,a,b);

}
*/
/*
// C++ program to illustrate the predefined macros
#include <iostream>
using namespace std;
#define macro(n,a,i,m) m##a##i##n
#define MAIN macro(n,a,i,m)
int MAIN(){
    cout<<"GeeksQuiz";
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
int pro = 1, count = 1;
int powerOfTwo(int pow)
{
    int p = pow;
    if (p < 1)
    {
        return pro;
    }
    pro *= 2;

    powerOfTwo(p - 1);
}
int main()
{
    int n;
    cout << "Enter power of two: ";
    cin >> n;
    cout << powerOfTwo(n) << endl;
}
    */
#include <iostream>
using namespace std;
#include <set>
#include <vector>
#include<algorithm>
int main(){
    vector<int>vec;
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(4);
    for(auto i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(vec.begin(),vec.end());
    for(auto i:vec){
        cout<<i<<" ";
    }
    
}