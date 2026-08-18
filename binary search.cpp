#include<iostream>
using namespace std ;

int main()
{
	int arr[6] ={10,20,35,45,50,85} ;
	int x;
	int l=0 ,h=6 ,m ;
	cout<<"Enter the number to be search :" ;
	cin>> x ;
	
	while(l<=h)
	{
		m=(l+h)/2;
		if(arr[m]==x)
		{
			cout<<"Element found at positio "<<m ;
			return 0 ;
		}
		else if(arr[m]>l)
		{
			h=m-1 ;
		}
		else
		l=m+1 ;
	}
	cout<<"Element  not found " ;
	
	return 0 ;
}
