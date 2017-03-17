#include <iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main()
{
long long i,o=0;
char a[10];
int l,flag=0;
for(int m=100;m<1000;m++)
{
    for(int n=100;n<1000;n++)
    {
        i=m*n;
        ltoa(i,a,10);
        l=strlen(a);
        for(int s=0 , t=(l-1) ; s<(l/2) , t>=(l/2) ; s++ , t--)
        {
            if(a[s]!=a[t])
            {
                flag=0;
                break;
            }
            else
                flag=1;
        }
        if (flag==1 && i>o)
        {
            o=i;
        }
        flag=0;
    }
}
cout<<o;
}
