#include<iostream>
using namespace std;

long sum(int a[],int beg,int end)
{
	long sum=0;

	while(beg<=end)
	{

    if(beg==end)
          sum+= a[beg];

     else
	      sum+= a[beg] + a[end];

	 beg++;
	 end--;
	}

	return sum;


}

int main()
{
    int t;
    cin>>t;
	long n;
	int mid,count;
	bool flag;

    int dir , predir;

 while(t--)
 {

	cin>>n;
	int a[n];

	for(int i=0;i<n;i++)
	   cin>>a[i];

	 if(n==0 || n==1)
	   cout<<"YES"<<endl;
	   else
	   {

/*    d1 = 0 ;
    d2 = 0;*/
	 mid = n/2;
	 flag =0;
	 count=0;

	while(mid!=0 || mid!=n-1)
	{
		if(sum(a,0,mid-1)==sum(a,mid+1,n-1))
		{
		  cout<<"YES"<<endl;
		  flag=1;
		  break;
		}

		else if(sum(a,0,mid-1)<sum(a,mid+1,n-1))
		  {
		       mid++;
//d1=1;
              dir = -1;

		  }


	    else
        {
            mid--;

            dir = 1;
          //  d1 = 0;
        }

      if(count++==1 && (predir + dir )== 0)
           break;

      predir = dir;

		 if(count==n/4)
		    break;



	}
	if(flag==0)
	   cout<<"NO"<<endl;
}
}
	return 0;
}


/*

int main()
{
   int a[6]={1,2,3,4,5,6};
   cout<<sum(a,0,3);
   return 0;

}
*/









