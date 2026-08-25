#include <bits/stdc++.h>
using namespace std;
void p(int n)

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
    // for (int i = 0; i < n; i++)
    // {
    //   for (int j = 1;j<=i; j++)
    //   {
    //     cout << j;
    //     /* code */
    //   }
    //   for (int j = 1; j<=(2*i*(n-1)); j++)
    //   {
    //     cout << " ";
    //     /* code */
    //   }
    //   for (int j = i; j>=1; j--)
    //   {
    //     cout << j;
    //     /* code */
    //   }
    //   cout << endl;
      
    // }
//      int num=1;
//    for (int i=i;i<=n; i++)
//    {
   
//     for (int j = 1; j <=i; j++)
//     {
//         cout <<num<<" ";
//         num=num+1;
//         /* code */
//     }
//     cout << endl;
    
//     /* code */
//    }
   
    // for (int i = 0; i < n; i++)
    // {
    //     for (char j = 'A'; j < 'A'+i; j++)
    //     {
    //         cout << j;
    //         /* code */
    //     }
    //     cout << endl;
        
    //     /* code */
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (char j = 'A'; j <='A'+(n-i-1); j++)
    //     {
    //         cout << j;
    //         /* code */
    //     }
    //     cout << endl;
        
    //     /* code */
    // }
    //  for (int i = 0; i < n; i++)
    // {
    //     char s='A'+i;
    //     for (int j=0;j<i;j++)
    //     {
    //         cout << s<<" ";
          
    //         /* code */
    //     }
    //     cout << endl;
        
    //     /* code */
    // }
    
    //  for (int i = 0; i < n; i++)
    // {
    //    for (int j = 0; j< n-i-1; j++)
    //    {
    //     cout << " ";

    //     /* code */
    //    }
    //    char s='A';
    //    int breakpint=(2*i+1)/2;
    //    for (int j = 1; j <=(2*i+1); j++)
    //    {
    //     cout << s;
    //     if (j<=breakpint)
    //     {
    //         s++;
    //         /* c
    //         ode */
    //     }
    //     else
    //     {
    //         s--;
    //     }
        

    //     /* code */
    //    }
    //    for (int j = 0; j < n-i-1; j++)
    //    {
    //     cout << " ";
    //     /* code */
    //    }
    //    cout << endl;
       
       
       
    // }void p(int n)
{
    
    for (int i = 1; i <= 2*n-1; i++)
    {
        int s=i;
        if (i>n)
        {
            s=2*n-1;
            for (int j = 1; j <=stars; j++)
            {
                cout << "*";
                /* code */
            }
            
            
            /* code */
        }
        
    }

    int k = 8;   // moved OUT of the first loop
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int j = 1; j <= k; j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";
        cout << endl;
        k -= 2;
    }
}
    
 // namespace std;

int  main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        p(n);
        /* code */
    }
    
    // p(n);
    // p1(n);
    // // p2(n);
    // p3(n);
    // p4(n);
    /* code */
}
    