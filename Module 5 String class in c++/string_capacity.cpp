#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s="Hello world";
    // cout<<s.size()<<endl;
    // cout<<s.max_size()<<endl;
    // string a="aashhahsgahsasagsasghasasghajjagsgjasggajsha";
    // cout<<a.capacity()<<endl;
    // a="assahhshahshahsggahshagsahhsahhhhhhhhhhhhhhhhhhhhhhgsgsgggggggggggggggggggggggaggagsggsga";
    // cout<<a.capacity()<<endl;
    // cout<<a.size()<<endl;
    // a.clear();
    // cout<<a<<endl;
    // cout<<a.size()<<endl;
    // string s="Hello world";
    // s.clear();
    // if(s.empty()==true)
    // cout<<"Empty"<<endl;
    // else
    // cout<<"Not empty"<<endl;
    string s="Hello world";
    s.resize(5);
    s.resize(11,'x');
    cout<<s.size()<<endl;
    cout<<s<<endl;

    return 0;
}