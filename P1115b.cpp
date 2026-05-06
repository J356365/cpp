#include<bits/stdc++.h>
using namespace std;

typedef long long ll; 

int main()
{
	//加速输入输出
	ios::sync_with_stdio(false);
	cin.tie(0); 
	
	//输入数据 
	int n;
	vector<int> a;
	cin>>n;
	for(int i=0; i<n; i++){
		int b;
		cin>>b;
		a.push_back(b);
	}
	
	//遍历数组，找出最大字段和 
	ll max_sum = a[0];
	ll now_sum = a[0];
	
	for(int i=1; i<n ;i++){
		now_sum =max((ll)a[i],a[i]+now_sum);  //强转！ 
		max_sum =max(max_sum,now_sum);
	}
	
	//输出
	cout<<max_sum; 
	
 	return 0;
}


