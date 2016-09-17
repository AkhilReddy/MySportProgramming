#include<cmath>
#include<iostream>
#include<conio.h>
using namespace std;


int main()
{

    //cout<<abs(2.3 - 2);
    int a;
    cin>>a;
    float arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }

int n;

    for(int j=0;j<a;j++)
    {
         n =0;
        while(1)
       {
  //cout<<abs((((100)*arr[j]))-(int)((100)*arr[j]))<<endl;

        if(abs((n+1)*arr[j])-(int)((n+1)*arr[j])<0.00001)
        {

            //cout<<"qwertu";
            cout<<n+1;

            //getch();
            break;
        }

                 else
                 n = n+1;
        //cout<<n;
        //getch();


        }
    }



    return 0;


}
