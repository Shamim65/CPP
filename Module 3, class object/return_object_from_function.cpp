#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r,int s,int c,char* n)
        {
            
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }
};
Student fun()
{
    char name[100]="Rahim Ullah";
    Student r(29,'c',7,name);
    return r;
}

int main()
{
    Student rahim = fun();

    cout<<rahim.name<<endl;
    cout<<rahim.roll<<endl;
    cout<<rahim.cls<<endl;
    cout<<rahim.section<<endl;

    
    return 0;
}