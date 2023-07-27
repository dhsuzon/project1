#include<bits/stdc++.h>
using namespace std;
int main()
{    
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string sentense;
        getline(cin,sentense);
        string word;
        int max = 0;
        map<string,int> mp;
        stringstream s(sentense);
        while(s>>word)
        {
             mp[word]++;
            
             
        }
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
        
    }
    return 0;
}