#include<iostream>
using namespace std;

long sum(int a[],int beg,int end)
{
	long sum=0;
	for(int i=beg;i<=end;i++)
	  sum+=a[i];
	  
	return sum;  
	
	
}

int main()
{   
    int t;
    cin>>t;
	long n;
	int mid,count;
	bool flag;
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
	   
	 mid = n/2;
	 flag =0;
	 count=0;
	
	while(mid!=0 || mid!=n-1)
	{
		if(sum(a,0,mid-1)==sum(a,mid+1,n-1))
		{ 
		  cout<<"YES";
		  flag=1;
		  break;
		}
		
		else if(sum(a,0,mid-1)<sum(a,mid+1,n-1))
		   mid++;
		 
	    else 
		   mid--;
		 
		 if(++count==n)
		    break;
		 	   
		
		
		
	}     
	if(flag==0)
	cout<<"NO"<<endl;
}
}
	return 0;
}
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  

