#include<iostream>
using namespace std ;
int main ()
{
	int arr[14] ={ 34,56,12,45,9,5,22} ;
	  cout<<"Unorted array ::" ;
	  for( int i=0 ;i<7 ;i++)
      cout<<"\t"<<arr[i] ;
	for(int i=0 ;i<7; i++) 
	{
	for(int j=0 ;j<6-i; j++) 
	  {
	  	if(arr[j+1]<arr[j])
	  	{
	  		int t=arr[j+1] ;
	  		arr[j+1] =arr[j] ;
	  		arr[j] =t ;
		  }
      }
   }
   cout<<"\nSorted array ::  " ;
      for( int i=0 ;i<7 ;i++)
      cout<<"\t"<<arr[i] ;
      return 0 ;
}
