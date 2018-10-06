#include<iostream>
#include<vector>
using namespace std;
int main(){
	int x=0
	int n=0;
	int arr[10];
	int y = 1000000;

	cin>>x;
	int cx = x;

	while(cx>0){
		arr[n]=cx%10;
		cx/=10;
		n++;
	}

	sort(arr,arr+n);
	
	while(next_permutation(arr,arr+n)){
		int py=0,pDiez=1;
		
		for(int i=n-1;i>=0;i--){
	 		py+=arr[i]*pDiez;
	 		pDiez*=10;
	 	}
	 	if(pY>x)y=min(y,py);
	}
	cout<<(y==1000000?0:y)<<endl;
	
return 0;
}