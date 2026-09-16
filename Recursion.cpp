/*
// Power of 2
#include <iostream>
using namespace std;
int power(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int smallProb = power(n - 1);
    int bigProb = 2 * smallProb;
    return bigProb;
}
int main()
{
    int n;
    cin >> n;
    int ans = power(n);
    cout << ans << endl;
}
*/
/*
// Print Counting
#include <iostream>
using namespace std;
void printCounting(int n)
{
    if(n==0){
        return;
    }
    cout << n << endl;
    printCounting(n - 1);
    return;
}
int main()
{
    int n;
    cin>>n;
    printCounting(n);
}
    */
/*
// Fibbonacci Series
#include <iostream>
#include <set>
using namespace std;
int fibonacci(int n)
{
    if (n == 1){
        return 0;
    }
    if (n == 2){
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    cin >> n;
    // int ans = fibonacci(n);
    // cout << ans << endl;
    for(int i=1;i<=n;i++){
        cout<<fibonacci(i)<<" ";
    }
}
    */
/*
// Say Digits-e.g. 412= Four One Two
#include <iostream>
using namespace std;
void sayDigit(int n)
{
    // vector<string>vec;
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    if (n == 0)
    {
        return;
    }
    int a = n % 10;
    n = n / 10;
    sayDigit(n);
    cout << arr[a] << " ";
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    sayDigit(n);
}
*/

/*
//CREATE A FUNCTION TO TELL IF ARRAY IS SORTED
#include <iostream>
using namespace std;
bool isSorted(int arr[],int n){
    if(n==1 || n==0){
        return true;
    }
    if(arr[0]>arr[1]) return false;
    return isSorted(arr+1,n-1);
}
int main(){
    int arr[5]={7,3,4,5,6};
    bool ans=isSorted(arr,5);
    cout<<ans<<endl;
}
*/

// RETURN SUM OF ELEMENTS OF ARRAY
/*
#include <iostream>
using namespace std;
int sumElements(int arr[], int size)
{
    if(size==1){
        return arr[0];
    }
    int sum=arr[0];
    int ans=sumElements(arr+1,size-1);
    sum+=ans;
    return sum;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout<< sumElements(arr, 5);
}
*/

/*
// LINEAR SEARCH
#include <iostream>
using namespace std;
bool linearSearch(int arr[], int k, int size)
{
    // if (size > 0 && arr[0] == k){
    //     return true;
    // }
    // else if (size > 0 && arr[0] != k){
    //     bool ans = linearSearch(arr + 1, k, size - 1);
    //     return ans;
    // }
    // else if (size < 0){
    //     return false;
    // }
    if(size<=0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    return linearSearch(arr+1,k,size-1);
}
int main()
{
    int arr[10] = {2, 4, 43, 87, 100, 98, 29, 1, 0, 65};
    int elt;
    cout << "Enter the elt u wanna search for: ";
    cin >> elt;
    int ans = linearSearch(arr, elt, 10);
    if (ans == 1)
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
}
*/

/*
// BINARY SEARCH
#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &nums, int target, int s, int e)
{
    if (s > e){
        return -1;
    }
    int mid = s + (e - s) / 2;
    if (nums[mid] == target){
        return mid;
    }
    else if (target > nums[mid]){
        s = mid + 1;
        return binarySearch(nums, target, s, e);
    }
    else{
        e = mid - 1;
        return binarySearch(nums, target, s, e);
    }
    mid = s + (e - s) / 2;
}
int main()
{
    vector<int>vec={1,2,3,4,5};
    int k;
    cout<<"Enter the element: ";
    cin>>k;
    int s=0,e=vec.size()-1;
    cout<<binarySearch(vec,k,s,e);
}
    */

    /*
// REVERSE A STRING
#include <iostream>
#include <string>
using namespace std;
string reverseString(string s,int l,int r)
{
    if(l>r){
        return s;
    }
    char s1=s[l];
    s[l]=s[r];
    s[r]=s1;
    return reverseString(s,l+1,r-1);
}
int main()
{
    string s = "SachiJain";
    cout<<reverseString(s,0,s.length()-1);
}
*/
/*
//CHECK PALINDROME
#include <iostream>
#include <string>
using namespace std;
bool checkPalindrome(string& s,int l,int r){
    if(l>r){
        return true;
    }
    if(s[l]!=s[r]){
        return false;
    }
    return checkPalindrome(s,l+1,r-1);
}
int main(){
    string s="abbccbba";
    bool ans=checkPalindrome(s,0,s.length()-1);
    if(ans==1){
        cout<<"Yeah!";
    }
    else{
        cout<<"Nope";
    }
}
*/

//POWER OF X
#include <iostream>
using namespace std;
int myPow(int x,int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return x;
    }
    int b=myPow(x,n/2);
    if(n%2==0){
        return b*b;
    }else{
        return x * b* b;
    }
}
int main(){
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    int n;
    cout<<"Enter the power: ";
    cin>>n;
    cout<<myPow(x,n);
}