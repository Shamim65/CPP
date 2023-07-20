#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string ticket;
        cin>>ticket;
        int sum1=0,sum2=0;
        for(int i=0;i<3;i++)
        {
            sum1+=ticket[i]-'0';//convert character to integer
            sum2+=ticket[i+3]-'0';
        }
        if(sum1==sum2)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}