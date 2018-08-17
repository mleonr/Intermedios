#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,m,aux,cont=0;

	vector<int>num;
	vector<int>quer;

	while(cin>>n>>m){
		if(n==0 && m ==0)return 0;

		for(int i=0;i<(n+m);i++){
			cin>>aux;
			if(i<=(n-1))num.push_back(aux);
			else quer.push_back(aux);
		}

		sort(num.begin(),num.end());
		
		cout<<"CASE# "<<++cont<<":"<<endl;
		for(int i=0;i<quer.size();i++){
			int ini=0,fin=num.size()-1,mid,res=-1;
			while(ini<=fin){
				mid=((ini+fin)/2);

				if(num[mid]<quer[i])ini=mid+1;
				else{
					fin=mid-1;
					if(num[mid]==quer[i])res=mid;
				}
			}

			if(res==-1)cout<<quer[i]<<" not found"<<endl;
			else cout<<quer[i]<<" found at "<<res+1<<endl;
		}


		num.clear();
		quer.clear();
	}
	return 0;
}
