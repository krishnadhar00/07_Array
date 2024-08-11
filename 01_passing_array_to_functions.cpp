// by default array is a call by refernecfe in nature.
// If we will change the value inside the array then it will change the value. bcoz it is call by reference.
#include<iostream>
using namespace std;
void change(int arr[])
{
    arr[0]=9;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    change(arr);
    cout<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}