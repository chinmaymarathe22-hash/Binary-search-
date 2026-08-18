#include<iostream>
using namespace std;
int main()
{
   
    int arr[5] ={1,6,96,32,8} ;
    int num ;
    cout<<"\nEnter a Number to Search: ";
    cin>>num;
    for(int i=0; i<5; i++)
    {
        if(arr[i]==num)
        {
           cout<<"\nFound at Index No."<<i;
            break;
        }
    }
    
    return 0;
}
