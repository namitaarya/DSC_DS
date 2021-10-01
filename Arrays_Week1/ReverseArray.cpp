#include <iostream>
using namespace std;

int main() {
    int tc;
    cin>>tc;
    
    while(tc--){
    int n;
    cin>>n; 
    
    int arr[n];
    for(int i=0;i<n;i++)
    cin>> arr[i];
    
	for(int i=0, j=n-1; i<j; i++,j-- )
	{
	    swap(arr[i],arr[j]);
	}
	for(int i=0;i<n;i++)
	{
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
    }
    
    return 0;
}