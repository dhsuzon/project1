#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
       string Name;
       int Marks;
       int Roll;

    Student(string Name, int Roll, int Marks)
    {
        this->Name = Name;
        this->Marks = Marks;
        this->Roll = Roll;
    }   
};

class cmp
{
    public:
         bool operator()(Student a, Student b)
         {
            if(a.Marks < b.Marks) {
                return true;
            }
            else if(a.Marks > b.Marks)
            {
                return false;
            }
            else
            {
               if(a.Roll < b.Roll) return false;
               else return true;
            }
         }

};

int main()
{    
    int  n;
    cin>>n;
    priority_queue<Student,vector<Student>,cmp>pq;
    for(int i = 0; i<n; i++)
    {
        string Name;
        int Roll, Marks;
        cin>>Name>>Roll>>Marks;
        // cout<<"test "<<Name<<" "<<Roll<<" "<<Marks<<endl;
        Student obj(Name, Roll, Marks);
        pq.push(obj);
    }

    int q;
    cin>>q;

    while(q--)
    {
        int a;
        cin>>a;

        if(a == 0)
        {
            string Name;
            int Roll,Marks;
            cin>>Name>>Roll>>Marks;
            Student obj(Name,Roll,Marks);
            pq.push(obj);

            cout<< pq.top().Name<<" "<<pq.top().Roll<<" "<<pq.top().Marks<<endl;
        } 
        else if(a == 1)
        {
            if(pq.size() == 0)
            {
                cout<<"Empty"<<endl;
            } else {
                auto aa = pq.top();
                cout<< aa.Name<<" "<<aa.Roll<<" "<<aa.Marks<<endl;
            }
        }
        else if(a == 2)
        {
            if(!pq.empty())
            {
                pq.pop();
                if(!pq.empty()){
                    auto aab = pq.top();
                    cout << aab.Name<<" "<<aab.Roll<<" "<<aab.Marks<<endl; 
                } else {
                    cout<<"Empty"<<endl; 
                }
            } else {
                cout<<"Empty"<<endl;
            }
        }
    }

    return 0;
}