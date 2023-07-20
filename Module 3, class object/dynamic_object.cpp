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
{   char name[100]="Rahim Ullah";
    //new Studnt if there is no constructor
    Student* rahim = new Student(55,'A',11,name);
    (*rahim).roll=55;

    //cout<<*rahim.roll<<endl;means *(rahim.roll)
    cout<<(*rahim).roll<<endl;
    cout<<rahim->name<<endl;
    
    delete rahim;
    //cout<<(*rahim).roll<<endl;
    //cout<<rahim->name<<endl;

    return 0;
}