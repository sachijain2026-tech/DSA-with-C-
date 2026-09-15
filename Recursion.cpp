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

// Say Digits-e.g. 412= Four One Two
#include <iostream>
using namespace std;
void sayDigit(int n)
{
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    if (n == 0)
    {
        return;
    }
    int a = n % 10;
    n = n / 10;
    cout << arr[a] << " ";
    sayDigit(n);
    
}
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    sayDigit(n);
}