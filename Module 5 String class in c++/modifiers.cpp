#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="Hello";
    string b="A";
    //a+=b;
    // a.append(b);
    // cout<<a<<endl;
    // cout<<b<<endl;
    //a="HelloA";->works
    //a=a+b;->works
    //a[5]='A';->didn't
    // a.push_back('A');//-entry a character at the end.
    // a.pop_back();//delete a character from the end.
    // a.pop_back();

    //a="Gelo";
    //a.assign("gelo");
    string s="Helloworld";
    // s.erase(4,3);//(koto tomo index theke, koyta character);
    //s.replace(4,0,"replace"); //erase+replace
    s.insert(5,"SHamim");
    
    cout<<s<<endl;
    return 0;
}