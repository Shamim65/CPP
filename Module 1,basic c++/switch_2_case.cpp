#include<iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    switch(a)
    {
        case 'a':  //means if v==1, and so on for other value.
        cout<<"Vowel"<<endl;
        break;
        case 'e':
        cout<<"Vowel"<<endl;
        break;
        case 'I':
        cout<<"Vowel"<<endl;
        break;
        case 'o':
        cout<<"Vowel"<<endl;
        break;
        case 'u':
        cout<<"Vowel"<<endl;
        break;

        default:
        cout<<"Consonant"<<endl;
    }
    return 0;
}