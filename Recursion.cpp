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

// BINARY SEARCH USING RECURSION
/*
//1.Create Func to tell if sorted
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

// 2.Return sum of elements of array
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

//3.
