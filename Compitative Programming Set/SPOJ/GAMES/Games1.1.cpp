#include<iostream>
using namespace std;
#include<cmath>
#define EPS 0.0000001
bool isInt(double a)
{
     return    abs((int)a - a ) < EPS;
}


int main()
{
    int  n;
    double temp;
    cin>>n;

	//double * a= new double[n];
	int *b = new int [n];
 int j;
	for(int i=0;i<n;i++)
	{
	   j = 1;
	/*   cin>>a[i];
       temp =a[i];*/
       cin>>temp;
	   while(!isInt(temp*j))
 	     j++;

		b[i] = j;
    }

for(int i=0;i<n;i++)
  cout<<b[i]<<endl;

  return 0;
  }
