#include <bits/stdc++.h>
using namespace std;
int main(){
	int r;
	cin>>r;
	while(r--){
		int n;
		cin>>n;
		int arr[n];
		int brr[n];
		for(int i = 0; i<n;i++){
			cin>>arr[i]
			brr[i]=arr[i];
		}
		sort(brr, brr+ n);
		for(int i =0; i<n;i++){
			if(arr[i]!= brr[i]){
				cout<<arr<<[i]-brr[n-1]<<" ";

			}
			else{
				cout<<arr[i]-brr-[n-2]<<" ";
			}

		}
		cout<<endl;

	}

}