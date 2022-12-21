// #include <stdio.h>

// void update(int *a,int *b)
//  {
//     int c=*a;
//     int d=*b;
//     (*a)=c+d;
//     if(c>d)
//     {
//             (*b)=c-d;
//     }
//     else
//     {
//         (*b)=d-c;
//     }


    
// }

// int main() {
//     int a, b;
//     int *pa = &a, *pb = &b;
    
//     scanf("%d %d", &a, &b);
//     update(pa, pb);
//     printf("%d\n%d", a, b);

//     return 0;
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int p=0;
    p=n-1;
    for(int j=p;j>=0;j--)
    {
        cout<<a[j];
    }
    return 0;
}
