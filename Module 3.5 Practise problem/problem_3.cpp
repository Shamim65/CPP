#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(int arr[],int size)
{
    int start=0;
    int end =size-1;
    while(start < end)
    {
        if(arr[start]!=arr[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
   int N;
   cin>>N;
   int arr[N];
   for(int i=0;i<N;i++)
   {
    cin>>arr[i];
   }
   if(ispalindrome(arr,N))
   {
    cout<<"YES"<<endl;
   }
   else
   cout<<"NO"<<endl;
   
    return 0;
}