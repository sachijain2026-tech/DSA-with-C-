/*
//SELECTION SORT
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[5]={6,4,8,2,10};
    int n=5;
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
    for(auto i: arr){
        cout<<i<<" ";
    }
}
*/

/*
//BUBBLE SORT
#include <iostream>
using namespace std;
int main(){
    int arr[6]={10,1,7,6,14,9};
    int n=6;
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }

    }
    for(auto i: arr){
        cout<<i<<" ";
    }
}
*/

/*
// INSERTION SORT
#include <iostream>
using namespace std;
int main()
{
    int arr[8] = {9, 8, 7, 6, 5, 4, 3, 2};
    for (int i = 1; i < 8; i++)
    {
        int current = arr[i];
        int prev = i - 1;
        // for(int j=i-1;j>=0;j--){
        //     if(arr[j]>current){
        //         arr[j+1]=arr[j];
        //         arr[j]=current;
        //     }
        // }
        while (prev >= 0)
        {
            if (arr[prev] > current){
                arr[prev + 1] = arr[prev];
                arr[prev] = current;
                prev--;
            }
        }
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }
}
    */

// MERGE SORT
#include <iostream>
#include <vector>
using namespace std;
void mergeSort(vector<int> &vec, int s, int e)
{
    
}
int main()
{
    vector<int> vec = {2, 5, 1, 6, 9};
    int s = 0, e = vec.size() - 1;
    mergeSort(vec, s, e);
}