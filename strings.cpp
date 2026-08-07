/*
//LENGTH OF STRING
#include<iostream>
using namespace std;
void lenString(char name[]){
    int count=0;
    // for(int i=0;name[i]!='\0';i++){
    //     count+=1;
    // }
    for(int i=0;i<20;i++){
        if(name[i]=='\0'){
            break;
        }
        else{
            count++;
        }
    }
    cout<<"Length of String is "<<count;
}

int main(){
    char name[20];
    cout<<"Enter your name:";
    cin>>name;
    for(auto i:name){
        cout<<i;
    }
    cout<<endl;
    lenString(name);
}
    */

/*


//REVERSE THE STRING
#include <iostream>
using namespace std;
void swap_str(char str[],int l, int r){
    if(l==r){
        return;
    }
    while(l<r){
        char p=str[l];
        str[l]=str[r];
        str[r]=p;
        l++;
        r--;
    }

}
int main(){
    char str[5]={'a','b','c','d','e'};
    int l=0;
    int r=sizeof(str)/sizeof(char);
    swap_str(str,l,r-1);
    for(auto i:str){
        cout<<i<<" ";
    }
}
*/

/*


//STRING IS PALINDROME OR NOT
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    string s="A man, a plan, a canal: Panama";
    vector<char>vec;
    int j=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=' ' && s[i]!=',' && s[i]!=':'){
            vec.push_back(s[i]);
        }
    }
    for(auto i:vec){
        cout<<i<<' ';
    }
    cout<<endl;
    char ch='A';
    for(int i=0;i<vec.size();i++){
        if(vec[i]>='A' && vec[i]<='Z'){
            vec[i]+=32;
        }
    }
    for(auto i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    int l=0, r=vec.size()-1;
        while(l<r){
            if(vec[l]!=vec[r]){
                cout<<"not palindrome";
                return 0;
            }
            l++;
            r--;
        }
        cout<<"Palindrome";
    return 0;
}
    */

//

/*
//MAXIMUM OCCURRENCE CHARACTER
#include <iostream>
#include <string>
#include <unordered_map>
#include<vector>
using namespace std;
int main(){
    string s="testsample";
    unordered_map<char,int>m;
    for(auto i:s){
        m[i]++;
    }
    char ch;
    int largest=0;
    int count=0;
    for(auto i:m){
        if(i.second>largest){
            largest=i.second;
            ch=i.first;
        }
        else if(i.second==largest && i.first<ch){
            ch=i.first;
        }

    }

    cout<<"Largest Occurrence is "<<largest<<" of "<<ch<<endl;

}
*/

/*
//IMPLEMENTATION OF BUILT-IN FUNCTIONS IN STRING
#include <iostream>
#include <string>
using namespace std;
int main(){
    string haystack = "sadbutsad";
    string needle = "but";
    string f="g";
    if(haystack.find(needle)>haystack.length()){
        cout<<"-1";
    }
    else{
        cout<<haystack.find(needle);
    }
    return 0;

}
*/

/*
//REPLACE SPACE WITH @40
#include <iostream>
using namespace std;
int main(){
    string s="My name is Sachi Jain.";
    // for(auto i:s){
    //     cout<<i<<"";
    // }
    cout<<endl;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            s.replace(i,1,"@40");
        }
    }
}
*/
