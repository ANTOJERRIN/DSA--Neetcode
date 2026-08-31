#include <bits/stdc++.h>
using namespace std;
void pairs()
{
    pair<int,int>v;// create a pair 
    v={1,2};
    cout<<v.first<<endl<<v.second<<endl;
    pair<int,pair<int,int>>g;
    g={1,{2,3}};
    cout<<g.first<<endl<<g.second.first<<endl<<g.second.second<<endl;
    pair<int,int>a[3] = {{1,2},{1,3},{4,5}};
    cout<<a[0].first<<endl<<a[0].second<<endl;
    cout<<a[1].first<<endl;

}
void vectors()
{
    vector<int>v;
    v.push_back(1);//p
    v.emplace_back(2);
    for(auto it:v) cout<<it<<" ";
    vector<int>d(5,100);
    for(auto i:d) cout<<i<<" ";
    vector<int>f(5);
    for(auto j:f) cout<<j<<" ";
    vector<int> r(f);
    for(auto l:r) cout<<l<<" ";
    d.push_back(1);
    d.emplace_back(2);
    for(auto i:d) cout<<i<<" ";
    cout<<endl<<"d[3] = "<<d[3]<<endl;
    
    // using iterators on vector d
    vector<int>::iterator it = d.begin();
    it++;
    cout<<"d[1] = "<<*(it)<<" ";
    it = it + 2;
    cout<<"d[3] = "<<*(it)<<" "<<endl;
    
    // using iterators on vector v
    for(vector<int>::iterator a = v.begin(); a != v.end(); a++)
    {
        cout<<*(a)<<" ";
    }
    cout<<endl;
    
    // using range-based for loop with values
    for(auto s : v)
    {
        cout<<s<<" ";
    }
    cout<<endl;
    
    d.erase(d.begin(),d.end());
    for(auto x:d) cout<<x<<" ";
    cout<<"is empty: "<<d.empty()<<endl;
    
    d.clear();
    for(auto q:d) cout<<q<<" ";
    cout<<"size: "<<d.size()<<endl;
    
    v.swap(d);
    for(auto w:v) cout<<w<<" ";
    cout<<endl;
    
    vector<int> v2(3,100);
    v2.insert(v2.begin(),300);
    for(auto z:v2) cout<<z<<" ";
    cout<<endl;
    v2.erase(v2.begin(),v2.begin()+1);
    for(auto z:v2) cout<<z<<""<<"this is the erasing part";

    
}

int  main()
{
    cout<<"i raj"<<endl;
    pairs();
    vectors();
    
    return 0;
}
    
    
