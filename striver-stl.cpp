#include <bits/stdc++.h> //this inlcudes all the libraries 
using namespace std;
void print()
{
    cout << "raj";
}
int main()
{
    print();
    // int a;
    // std::cin  >> a; //if not namespace is used
    // cout << a;
    explainpair();
    return 0;
    
} 
// algorohtms
// containers
// functions
// iterators
void explainpair()
{
    pair<int, int>p={1,3};
    cout << p.first<<" "<<p.second;
    pair<int ,pair<int,int>>q={1,{3,4}}
    cout<< q.first<< " "<<q.second.second<< " "<<q.second.first;
    pair<int ,int>arr[]={{1,2},{2,5},{5,1}};
    cout << arr[1].second;
}