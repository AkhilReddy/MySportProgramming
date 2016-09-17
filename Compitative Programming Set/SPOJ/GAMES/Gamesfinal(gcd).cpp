/*
To find the answer,we just need to multiply the decimal places by the 10^ (number of decimal places)

Then we just need to divide this value by the :-

gcd ( dec ,pow(10,number of decimal places))

to get the minimum number of games.

The trick was to recognize that we just need to multiply the decimal part by apt power of 10 and act on that part

*/

/*
you have a precision error here because you are working on floats ,

here is the correct approach :-

write the average score x as a reduced fraction x=p/q. This means that p and q are integers, that q is positive and that q is minimal (or, equivalently, that p and q have no nontrivial common factor). Then the player can have played any multiple of q games hence the minimum number of games the player should have played is q.

When x=−30.25, note that −30.25=−121/4 and −121 and 4 have no common factors except +1 and −1, hence the minimum number of games is indeed 4 .

Basically we have to convert the avg into fraction part p/q then calculate the gcd(p,q) answer will be q/gcd(p,q)

here is the implementation of idea :-

ideone link

*/

#include <stdio.h>
#include <cmath>
#include <string>
#include <iostream>
using namespace std;
long gcd(long a,long b)
{
 return b==0?a:gcd(b,a%b);
}
int main()
{
 int t,count,i,flage;
 scanf("%d",&t);
 while(t--)
 {
  string s;
  cin>>s;
  long number=1,frac;
  count=0;
  flage=0;
  for(i=s.size()-1;i>=0;i--)
  {
   if(s[i]=='.')
   {
    flage=1;
    break;
   }
   else
    count++;
  }
  for(i=0;i<s.size();i++)
  {
   if(s[i]!='.')
   {
    number=number*10 + (s[i]-48);
   }
  }
  frac=1;
  if(flage)
   frac=pow(10,count);
  printf("%ld\n",frac/gcd(number,frac));
 }
 return 0;
}
