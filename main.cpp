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
    total = 0;
    cout<<"enter the name:";
    cin>>stud_name;
    cout<<"enter the roll number";
    cin>>roll_num;
    cout<<"enter the marks of the subject"<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<"enter the marks of subject"<<i+1<<endl;
        cin>>marks[i];
        total = total + marks[i];
    }

    cout<<"your total marks is:"<<total<<endl;

    average = (total*100)/500;
    cout<<"your avarage is:"<<average;
}

void student :: updata_data()
{
    
}

int main()
{   
    int n;
    //user enter the lenght/total number of the student
    cout<<"enter the total student"<<endl;
    cin>>n;

    //creating object for student
    student std[n];

    //for loop to enter the data for student 
    for(int i=0;i<n;i++)
    {
        std[i].getdata();
    }
    return 0;
}
