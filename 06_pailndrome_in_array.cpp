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
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[n-1-i])
        {
            count=1;
        }
        else
        {
            count=0;
            break;
        }
    }
    if(count==1)
    {
        cout<<"Palindrome Number";
    }
    else
    {
        cout<<"Not Palindrome number";
    }

}
