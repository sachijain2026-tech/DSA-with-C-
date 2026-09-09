// ARRAYS AND IMPLEMENTATION
/*
#include <iostream>
using namespace std;
void in_array(int arr[],int n){
    cout<<"Inside function:"<<endl;
    for(int i=2;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
}

int main(){
    int arr[5]={10,20};
    in_array(arr,5);
    cout<<"Printing elements of array:"<<endl;
    for(auto i:arr){
        cout<<i<<endl;
    }
}
*/
/*

//POWER OF TWO
#include <iostream>
using namespace std;
int main(){
    // int size;
    // cout<<"Enter the size:";
    // cin>>size;
    int n;
    cin>>n;
    if(n<0){
        cout<<"Invalid input"<<endl;
        return 0;
    }
    if(__builtin_popcount(n)==1){
        cout<<"yes it is!"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
    */
/*


//SUM OF ALL ELEMENTS OF ARRAY
#include <iostream>
using namespace std;
void input_arr(int arr[],int n){
 cout<<"Enter elements in array:"<<endl;
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
}
int main(){
 int size;
 cout<<"Enter the size:";
 cin>>size;
 int arr[100]={0};
 input_arr(arr,size);
 int sum=0;
 for(auto i:arr){
     sum+=i;
 }
 cout<<"Sum of elements is:"<<sum<<endl;
}
*/
/*


//REVERSE AN ARRAY
#include <iostream>
using namespace std;
void swap_arr(int arr[],int size,int l,int r){
    if(l==r){
        return;
    }
    while(l<r){
        int n=arr[l];
        arr[l]=arr[r];
        arr[r]=n;
        l++;
        r--;
    }

}
int main(){
    int arr[5]={2,4,6,8,10};
    int s=sizeof(arr)/sizeof(int);
    cout<<"Before reversing:";
    for(auto i:arr){
        cout<<i<<" ";
    }
    int l=0;
    int r=s-1;
    swap_arr(arr,s,l,r);
    cout<<endl;
    cout<<"After reversing:";
    for(auto i:arr){
        cout<<i<<" ";
    }
}
    */
/*


// SWAP ALTERNATE ELEMENTS
#include <iostream>
using namespace std;
void swap_alt(int arr[],int n,int l){
    if(l==n-1){
        return;
    }
    while(l<n-1){

        int p=arr[l];
        arr[l]=arr[l+1];
        arr[l+1]=p;
        l+=2;
    }

}
int main(){
    int arr[6]={1,2,3,4,5,6};
    swap_alt(arr,6,0);
    for(auto i: arr){
        cout<<i<<" ";
    }

}
*/
/*


//TO FIND UNIQUE ELT IN ARRAY

#include <iostream>
using namespace std;
int main(){
    int arr[6]={1,1,2,3,3,4};
    int hash[50]={0};
    for(int i=0;i<6;i++){
        hash[arr[i]]+=1;
    }
    int sum=0;
    for(int i=0;i<50;i++){
        if(hash[i]==1){
            cout<<"Unique element is: "<<i<<endl;
            sum+=i;
        }
    }
    cout<<"Sum of unique elements is:"<<sum<<endl;
}
*/
/*


//TO FIND DUPLICATES
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int arr[5]={1,3,3,4,4};
    unordered_map<int,int>m;
    for(auto p:arr){
        m[p]++;
    }
    for(auto p:m){
        if(p.second>1){
            cout<<p.first<<" ";
        }
    }
}
*/
/*


//SORTING THE ARRAY
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    // int arr[5];
    // cout<<"Entering elements:"<<endl;
    // for(int i=0;i<5;i++){
    //     cin>>arr[i];
    // }
    // cout<<"Array before sorting:";
    // for(auto i:arr){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // set<int>s;
    // for(auto i:arr){
    //     s.insert(i);
    // }
    // vector<int>vec;
    // for(auto i:s){
    //     vec.push_back(i);
    // }
    // cout<<"Array after sorting:";
    // for(auto i:vec){
    //     cout<<i<<" ";
    // }
    int sum=9;
    int nums[4]={2,7,11,15};
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(nums[i]+nums[j]==sum){
                cout<<i<<" "<<j;
            }
        }
    }


}
*/
/*


//FIRT AND LAST OCCURENCE OF ELEMENT
#include <iostream>
#include <vector>;
#include <set>;
using namespace std;
int main(){
    int arr[6]={5,7,7,8,8,10};
    int size=sizeof(arr)/sizeof(int);
    int target=8,found=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            cout<<"First occurence is at index: "<<i<<endl;
            found=0;
            for(int j=size-1;j>=i;j--){
                if(arr[j]==target){
                     cout<<"Last occurence is at index: "<<j<<endl;
                     return 0;
                }

            }
        }
    }
    if(found==-1){
        cout<<"Not found"<<endl;
    }

}
    */
/*


//PEAK INDEX IN MOUNTAIN ARRAY
#include <iostream>
using namespace std;
int main(){
    int arr[5]={3,5,3,2,0};
    int s=0,e=4;
    int l=0,r=0;
    while(s<=e){
            int mid=s+(e-s)/2;
            l=mid-1;
            r=mid+1;
            if(arr[mid]>arr[l] && arr[mid]>arr[r]){
                cout<<"Peak index:"<<mid<<endl;
                return 0;
            }
            else if(arr[mid]>arr[l] && arr[mid]<arr[r]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }

        }
}
*/
/*
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    vector<int>nums={0,0,1,1,1,2,2,3,3,4};
    set<int>s;
    for(auto i: nums){
        s.insert(i);
    }
    nums.clear();
    for(auto i: s){
        nums.push_back(i);
    }
    cout<<"Elements of array:";
    for(auto i: s){
        cout<<i<<" ";
    }
    int count=0;
    for(auto i:nums){
        count++;
    }
    cout<<endl;
    cout<<"No. of Elts:"<<count<<endl;

}
*/
/*



//MEDIAN OF TWO SORTED ARRAY
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>nums1={1,3};
    vector<int>nums2={2};
    vector<int>merged_array;
    for(auto i:nums1){
        merged_array.push_back(i);
    }
    for(auto i:nums2){
        merged_array.push_back(i);
    }
    sort(merged_array.begin(),merged_array.end());
    int s=0,e=merged_array.size()-1;
    int mid=s+(e-s)/2;
    double median=0;
    if(e%2!=0){
        median=(merged_array[mid]+merged_array[mid+1])/(double)2;
        cout<<median;
    }
    else if(e%2==0){
        median=merged_array[mid];
        cout<<median;

    }
    return 0;


}
    */

/*

//SORT IN ORDER OF FREQUENCY
#include <iostream>
#include <unordered_map>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int main(){
string s="tree";
string ans="";
unordered_map<char,int>m;
for(auto i:s){
    m[i]++;
}
vector<pair<int,char>>vec;
sort(vec.begin(),vec.end(),greater<pair<int,char>>());
    for(auto i:vec){
        ans+=i.first;
    }
for(auto i:ans){
    cout<<i<<"";
}
}
*/

/*
//ROW-WISE SUM IN 2-D ARRAY AND LARGEST ROW SUM
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int arr[3][3];
    vector<int>vec;
    //input in array
    cout<<"Enter Elements in Array:";
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }
    //row wise col;

    //printing elements of array
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col];
        }
        cout<<endl;
    }
    cout<<endl;


    for(int i=0;i<3;i++){
        int ans=0;
        for(int j=0;j<3;j++){
            ans+=arr[i][j];
        }
        vec.push_back(ans);
    }
    int largest=0;
    for(auto i:vec){
        largest=max(i,largest);
    }
    cout<<largest;
    //cout<<*max_element(vec.begin(),vec.end()); //returns an iterator pointing to max_elt

}
    */

/*
//PRINT LIKE A WAVE IN 2D ARRAY
#include <iostream>
using namespace std;
int main(){
int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
for(int i=0;i<4;i++){
    if(i%2==0){
        for(int j=0;j<3;j++){
            cout<<arr[j][i]<<" ";
        }
    }
    else{
        for(int j=2;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
    }

}
}

*/

/*
//SPIRAL ROW PRINT---V.V.V. IMP!!
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int startingRow=0,startingCol=0,endRow=2,endCol=3;
    int count=0;
    int totalElts=12;
    while(count<totalElts){
        for(int j=startingCol;j<=endCol;j++){
            cout<<arr[startingRow][j]<<" ";
            count+=1;
        }
        for(int i=startingRow+1;i<=endRow;i++){
            cout<<arr[i][endCol]<<" ";
            count+=1;

        }
        for(int j=endCol-1;j>=startingCol;j--){
            if(startingRow==endRow){
                break;
            }
            cout<<arr[endRow][j]<<" ";
            count+=1;
        }
        for(int i=endRow-1;i>=startingRow+1;i--){
            if(startingCol==endCol){
                break;
            }
            cout<<arr[i][startingCol]<<" ";
            count+=1;
        }
        startingRow++;
        startingCol++;
        endRow--;
        endCol--;

    }
}
*/

/*
// SEARCH IN 2D MATRIX-II
#include <iostream>
using namespace std;
int main()
{
    int matrix[5][5] = {{1, 4, 7, 11, 15}, {2, 5, 8, 12, 19}, {3, 6, 9, 16, 22}, {10, 13, 14, 17, 24}, {18, 21, 23, 26, 30}};

    int found = 0, target, row = 0, col = 4;
    int s = matrix[row][col];
    cout << "Enter Target element:";
    cin >> target;
    while (true)
    {
        if (target == s)
        {
            cout << "found";
            return 1;
        }
        else if (target < s)
        {
            col--;
        }
        else
        {
            row++;
        }
        s = matrix[row][col];
    }
    if (found == 0)
    {
        cout << "not found" << endl;
    }
}
    */

//Majority Element
#include <iostream>
using namespace std;
#include <vector>
int majorityElement(){
    
}