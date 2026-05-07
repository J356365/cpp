#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	//加速输入输出
	ios::sync_with_stdio(false);
	cin.tie(0); 
	
	//输入数据 
	int n;
	vector<int> a;
	cin>>n;
	for(int i=0;i<n;i++){
		int b;
		cin>>b;
		a.push_back(b);
	}
	
	//找出最大序列
	ll max_sum = a[0];
	ll now_sum = a[0];
	int max_idx = 0;
	for(int i=1;i<n;i++){
		now_sum = max((ll)a[i],a[i]+now_sum);
		if(now_sum>max_sum){
			max_sum = now_sum;
			max_idx = i;
		}
	}
	
	//输出 
	cout<<max_sum<<" "<<max_idx;
	
	return 0;
}
