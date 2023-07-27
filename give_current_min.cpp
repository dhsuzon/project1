#include<bits/stdc++.h>
using namespace std;
int main()
{    
    int n;
    int x;
    cin>>n;
    list<int> l;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i = 0; i<n; i++)
    {
       
        cin>>x;
        l.push_back(x);
    }
    for(auto it = l.begin(); it != l.end(); it++)
    {
        pq.push(*it);
    }
    
    int q;
    cin>>q;

    while(q--)
    {
         int a;
         cin>>a;

         if(a == 0)
         {
            int input;
            cin>>input;
            pq.push(input);
            cout<<pq.top()<<endl;
         }
         else if(a == 1)
         {
            if(pq.size() == 0)
            {
                cout<<"Empty"<<endl;
            } else {
                cout<<pq.top()<<endl;
            }
         }
         else if( a == 2)
         {
            if(!pq.empty())
            {
                pq.pop();

                if(pq.size() == 0)
                {
                    cout<<"Empty"<<endl;
                } else {
                    cout<<pq.top()<<endl;
                }
            } else {
                cout<<"Empty"<<endl;
            }
         }
    }
    return 0;
}