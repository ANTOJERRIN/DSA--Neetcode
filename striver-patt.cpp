#include <bits/stdc++.h>
using namespace std;
// first pattern
// void print(int n)
// {
//     for (int  i = 0; i < n; i++)
//     {
//         for (int j = 0; i < n; j++)
//         {
//             cout << "* ";
//             /* code */
//         }
//         cout << endl;
        
//         /* code */
//     }
// }
// second pattern
void p(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
            /* code */
        }
        cout<<endl;
        /* code */
    }
    
}
void p1(int n)
{
    for (int l = 0; l < n; l++)
    {
        for (int m= 1; m<=l; m++)
        {
            cout <<m<<" ";
            /* code */
        }
        cout<<endl;
        /* code */
    }

}
// void p2(int n)
// {
//     for (int l = 1; l <= n; l++)
//     {
//         for (int m= 1; m<=l; m++)
//         {
//             cout <<l<<" ";
//             /* code */
//         }
//         cout<<endl;
//         /* code */
//     }

// }
void p3(int n)
{
    for (int y = 1; y <= n; y++)
    {
        for (int o= 0; o<n-y+1; o++)
        {
            cout <<"*"<<" ";
            /* code */
        }
        cout<<endl;
        /* code */
    }

}
void p4(int n)
{
    for (int l = 1; l <= n; l++)
    {
        for (int m= 1; m<=n-l+1; m++)
        {
            cout <<m<<" ";
            /* code */
        }
        cout<<endl;
        /* code */
    }

}
void p5(int n)
{
    for (int r= 1; r <= n; r++)
    {
        for (int h= 1; h<=r; h++)
        {
            cout <<l<<" ";
            /* code */
        }
        cout<<endl;
        /* code */
    }

}

int  main()
{
    int n;
    cin>>n;
    p(n);
    p1(n);
    // p2(n);
    p3(n);
    p4(n);
    /* code */
    
}


