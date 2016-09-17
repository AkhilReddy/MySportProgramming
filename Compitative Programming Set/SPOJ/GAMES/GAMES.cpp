#include<cmath>
#include<iostream>
#include<conio.h>
using namespace std;


int main()
{

    //cout<<abs(2.3 - 2);
    int a;
    cin>>a;
    double arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }

int n;

    for(int j=0;j<a;j++)
    {

        cout<<"okkkkkkkkk";
         n =1;
        while(1)
       {

           cout<<"asdfg";

        if(abs(((n+1)*arr[j])-((n+1)*arr[j]))<0.0000001)
        {
            cout<<"qwertu";
            cout<<n;
            getch();
            break;
        }

        n = n+1;
        cout<<n;
        getch();


        }
    }



    return 0;


}
