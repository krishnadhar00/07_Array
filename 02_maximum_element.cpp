// maximum element inside the array using the inbuilt function.
#include<iostream>
using namespace std;
 int main()
 {
    int arr[5]={10,5,2,80,9};
    int mx=arr[0];
    int mn = arr[0];
    for(int i=1;i<5;i++)
    {
        mx = max(mx,arr[i]);
        mn = min(mn,arr[i]);
    }
    cout<<mx<<endl;
    cout<<mn<<endl;
 }