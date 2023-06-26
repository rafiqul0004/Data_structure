#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<string>r;
    while (true)
    {
       string v;
       cin>>v;
       if(v=="end") break;
       r.push_back(v);
    }
    int q;
    cin>>q;
    auto crr=r.begin();
    while(q--)
    {
        string command;
        cin>>command;
        if(command=="visit")
        {
            string val;
            cin>>val;
            auto it=find(r.begin(),r.end(),val);
            if(it!=r.end())
            {
                crr=it;
                cout<<val<<endl;
            }
            else cout<<"Not Available"<<endl;
        }
        else if(command=="next")
        {
            if(next(crr)!=r.end())
            {
                crr=next(crr);
                cout<<*crr<<endl;
            }
            else cout<<"Not Available"<<endl;
        }
        else if(command=="prev")
        {
            if(crr!=r.begin())
            {
                crr=prev(crr);
                cout<<*crr<<endl;
            }
            else cout<<"Not Available"<<endl;;
        }
    }
    return 0;
}