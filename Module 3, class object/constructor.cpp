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

int main()
{
    Student Rahim(29,'A',7,"Rahim uddin mia");
    Student Karim(55,'D',7,"Karimullah market");
    
    cout<<Rahim.name<<endl;
    cout<<Rahim.cls<<endl;
    cout<<Rahim.roll<<endl;
    cout<<Rahim.section<<endl;

    cout<<Karim.name<<endl;
    cout<<Karim.cls<<endl;
    cout<<Karim.roll<<endl;
    cout<<Karim.section<<endl;
    
    return 0;
}