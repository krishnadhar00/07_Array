// This question based on the important basis.
// This question can be solved by two pointer here we are not are using the two pointer but we are using the two variable let say i and j and we aree initializing and i and j and just swpapping the both two variable. lets see the code.
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
    int i=0;
    int j=n-1;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    while(i<j)
    {
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}