#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    unsigned long long s=2,i,l=3;
    int m=0;
    while(l<=2000000)
    {
        for(i=1; i<=sqrt(l); i++)
        {
            if(l%i==0)
                m++;
            if (m==2)
                break;
        }
        if(m==1)
            {
                s+=l;
                //cout<<l<<"\t";
            }
        l+=2;
        m=0;
    }
    cout<<endl<<s;
}
