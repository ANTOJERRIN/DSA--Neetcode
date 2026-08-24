#include <bits/stdc++.h>
using namespace std;
void p(int n)
{
    // for (int i = 1; i <=2*n-1; i++)
    // {
    //     int s=i;
    //     if(i>n){
    //         s=2*n-i;
    //     }
    //     for(int j=1;j<=s;j++)
    //     {
    //         cout <<"*";
    //     }
    //     cout <<endl;

        
    //     /* code */
    // }
    for (int i = 0; i < n; i++)
    {
        int s=1;
        if(i%2==0)
        {
            s=1;
        }
        else{
            s=0;
        }
        for (int j = 0; j <= i; j++)
        {
            cout << s;
            s=1-s;
            /* code */
        }
        cout << endl;
        /* code */
    }
    

    
    
} // namespace std;

int  main()
{
    int n;
    cin>>n;
    p(n);
    // p1(n);
    // // p2(n);
    // p3(n);
    // p4(n);
    /* code */
}
    