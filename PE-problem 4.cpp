#include <iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main()
{
 unsigned long long i=20;
 bool flag=0;
 while(flag ==0)
 {

     for(int j=1;j<=20;j++)
     {

         if(i%j==0)
            flag=1;
         else
         {
             flag=0;
             break;
         }
     }
 i++;
 }
 cout<<i-1;
}
