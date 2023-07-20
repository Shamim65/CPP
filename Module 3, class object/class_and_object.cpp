#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};

int main()
{
    Student Rahim;
    char nm[100]="Rahim uddin pathan";
    strcpy(Rahim.name,nm);
    Rahim.cls=13;
    Rahim.roll=45;
    Rahim.section='B';

    Student Karim;
    char nm2[100]="Karim Mia uddin pathan";
    strcpy(Karim.name,nm2);
    Karim.cls=10;
    Karim.roll=45;
    Karim.section='A';


    cout<<Karim.cls<<endl;
    cout<<Karim.roll<<endl;
    cout<<Karim.section<<endl;
    cout<<Karim.name<<endl;
    
    return 0;
}