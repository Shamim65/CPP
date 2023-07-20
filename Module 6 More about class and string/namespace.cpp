#include<bits/stdc++.h>
using namespace std;
namespace shamim
{
    int age=27;
    void hello()
    {
        cout<<"SHmaim namespace"<<endl;
    }
}
namespace shimul
{
    int age2=30;
    void hello2()
    {
        cout<<"SHimul namespace"<<endl;
    }
}
using namespace shamim;
using namespace shimul;
int main()
{
    cout<<age<<endl;
    hello();
    cout<<age2<<endl;
    hello2();
    return 0;
}