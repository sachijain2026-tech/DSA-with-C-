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

/*
// MERGE SORT
#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &vec, int s, int e) // conquer
{
int mid = s + (e - s) / 2;
int i = 0, j = 0;
vector<int> ans;
vector<int> n1;
vector<int> n2;
for (int i = s; i <= mid; i++)
{
    n1.push_back(vec[i]);
}
for (int i = mid + 1; i <= e; i++)
{
    n2.push_back(vec[i]);
}
while (i < n1.size() && j < n2.size())
{
    if (n1[i] > n2[j])
    {
        ans.push_back(n2[j]);
        j++;
    }
    else if (n1[i] < n2[j])
    {
        ans.push_back(n1[i]);
        i++;
    }
    else if (n1[i] == n2[j])
    {
        ans.push_back(n1[i]);
        ans.push_back(n2[j]);
        i++, j++;
    }
}
while (i < n1.size())
{
    ans.push_back(n1[i++]);
}
while (j < n2.size())
{
    ans.push_back(n2[j++]);
}
cout << "After Sorting: ";
for (int k = s; k <= e; k++)
{
    vec[k] = ans[k - s];
}
}
void mergeSort(vector<int> &vec, int s, int e) // divide
{
int mid = s + (e - s) / 2;
if (s >= e)
{
    return;
}
mergeSort(vec, s, mid);
mergeSort(vec, mid + 1, e);
vector<int> ans = merge(vec, s, e);
// for(auto i:ans){
//     cout<<i<<" ";
// }
}
int main()
{
vector<int> vec = {2, 5, 1, 6, 9};
int s = 0, e = vec.size() - 1;
cout << "Before sorting: ";
for (auto i : vec)
{
    cout << i << " ";
}
cout << endl;
mergeSort(vec, s, e);
}
*/

// QUICK SORT
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int partition(vector<int>& vec,int s,int e)
{
    int pivot = vec[0];
    int count = 0;
    for (int i = 1; i < vec.size(); i++){
        if (vec[i] < pivot){
            count++;
        }
    }
    swap(vec[count+s], vec[s]);
    int i=0,j=vec.size()-1;
    while(i<j || i!=pivot || j!=pivot){
        if(vec[i]>pivot && vec[j]<pivot){
            swap(vec[i],vec[j]);
            i++,j--;
        }
        else if(vec[i]>pivot && vec[j]>pivot){
            j--;
        }
        else if(vec[i]<pivot && vec[j]<pivot){
            i++;
        }
        else{
            i++,j--;
        }
    }
    return i;
}
void quickSort(vector<int>& vec,int s, int e)
{
    if (vec.size() == 1)
    {
        return;
    }
    int p = partition(vec,0,vec.size()-1);
    quickSort(vec,s, p - 1);
    quickSort(vec,p + 1, e);
    
}
int main()
{
    vector<int>vec={3, 5, 1, 8, 2, 4};
    quickSort(vec, 6, 0);
    for(auto i:vec){
        cout<<i<<" ";
    }
    return 0;
}