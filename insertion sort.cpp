#include<iostream>
using namespace std ;

int main()
{
	int arr [6] ={87,53,90,45,-9,34} ;
	cout<<"Unsorted array ::" ;
	for(int i=0 ;i<6 ;i++)
	cout<<"\n "<<arr[i] ;
	
	for(int i=0 ;i<6 ;i++)
	{
				int t=arr[i] ;

		int j=i-1;
		while(j>=0 && arr[j]>t)
		{
			arr[j+1] =arr[j] ;
			j-- ;
		
		}
		arr[j+1] =t ;
	}
	cout<<"\nSorted array ::  ";
	for(int i=0 ;i<6 ;i++)
	cout<<"\n "<<arr[i] ;
	return 0 ;
}
