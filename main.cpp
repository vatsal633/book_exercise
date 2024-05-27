#include<iostream>
using namespace std;

class student
{
    int roll_num;
    char stud_name[20];
    int marks[5];
    int total;
    float average;
    char grade[1];

    public:
    void getdata();
    void delete_data();
    void updata_data();
    void find_student();
};

void student :: getdata()
{
    cout<<"enter the name:";
    cin>>stud_name;
    cout<<"enter the roll number";
    cin>>roll_num;
    cout<<"enter the marks of the subject"<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<"enter the marks of subject"<<i+1<<endl;
        cin>>marks[i];
    }
}

int main()
{   
    student s1,s2;
    s1.getdata();
    s2.getdata();
    return 0;
}
