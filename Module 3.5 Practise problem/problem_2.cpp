#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C;
    char S,Q;
    cin>>A>>S>>B>>Q>>C;
    int result;
    bool iscorrect = false;

    if(S=='+')
    {
        result=A+B;
        iscorrect = (result==C);
    }
    else if(S=='-')
    {
        result=A-B;
        iscorrect = (result==C);
    }
    if(S=='*')
    {
        result=A*B;
        iscorrect = (result==C);
    }

    

    if(iscorrect)
    {
        cout<<"Yes"<<endl;
    }
    else
        cout<<result<<endl;
        

    return 0;
}