#include<bits/stdc++.h>
using namespace std;
class Result
{
    int marks_ob;char result[10];
    static int  pass_marks,max_marks;

    public:
    void get()
    {
        cout<<"Enter the marks ";
        cin>>marks_ob;
    }

    void display()
    {
        cout<<"Marks = "<<marks_ob<<endl;
        cout<<"result = "<<result<<endl;
    }

    static Result calcu(Result);
};

int Result ::max_marks = 100;
int Result ::pass_marks = 50;
Result Result :: calcu(Result r1)
{
    if(r1.marks_ob > pass_marks)
    strcpy(r1.result,"passed");
    else 
    strcpy(r1.result,"failed");
    return r1;

}


int main()
{
Result r2[20];int n;
cout<<"Enter the number of students "<<endl;
cin >>n;
for(int i = 0 ;i<n ; i++)
{
    cout<<"enter the details of student "<<i+1;
    r2[i].get();

}

Result r3[20];
for(int i = 0 ;i<n ; i++)
{
  
r3[i] = r2[i].calcu(r2[i]);

}

for(int i = 0 ;i<n ; i++)
{
  cout<<"details of student "<<i+1<<endl;
  r3[i].display();


}

return 0;
}