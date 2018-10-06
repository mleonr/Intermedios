#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

	int n,a;
	char c;
	string s_aux1,s_aux2,fin="";

	vector<int>vec1,vec2;
	
	cin>>n;
	c=getchar();
	getline(cin,s_aux1);
	getline(cin,s_aux2);

	for(int i=0;i<s_aux1.size();i++){
		if(s_aux1[i]!=' '){
			fin+=s_aux1[i];
		}else{
			a=stoi(fin);
			vec1.push_back(a);
			fin="";
		}
	}
	a=stoi(fin);
	vec1.push_back(a);
	fin="";

	for(int i=0;i<s_aux2.size();i++){
		if(s_aux2[i]!=' '){
			fin+=s_aux2[i];
		}else{
			a=stoi(fin);
			vec2.push_back(a);
			fin="";
		}
	}
	a=stoi(fin);
	vec2.push_back(a);


	sort (vec1.begin(),vec1.end());
	
	int result=0,comp,sentinela=10000000;

	do{
		for(int i=0;i<n;i++)
			result+=vec1[i]*vec2[i];
	
		if(result<sentinela){
			sentinela=result;
		}
		result=0; 

	}while(next_permutation(vec1.begin(),vec1.end()));

	cout<<sentinela<<endl;


	return 0;
}