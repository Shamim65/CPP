#include<iostream>
using namespace std;
int main()
{
    int v;
    cin>>v;
    switch(v)
    {
        case 1:  //means if v==1, and so on for other value.
        cout<<"One"<<endl;
        break;
        case 2:
        cout<<"two"<<endl;
        break;
        case 3:
        cout<<"three"<<endl;
        break;
        case 4:
        cout<<"four"<<endl;
        break;
        case 5:
        cout<<"five"<<endl;
        break;

        default:
        cout<<"Didn't match"<<endl;
    }
    return 0;
}