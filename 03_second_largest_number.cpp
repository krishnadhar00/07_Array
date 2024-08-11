#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mx = INT32_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mx)
        {
            mx=arr[i];
        }
    }
    cout<<mx<<endl;
    int smx = INT32_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==mx)
        {
            continue;
        }
        else if(arr[i]>smx)
        {
            smx=arr[i];
        }
    }
    cout<<smx<<endl;

}