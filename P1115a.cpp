#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	//加速输入输出,不会写 
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	//输入长度和序列
	int n;
	vector<int> xul; 
	
	cin>>n;
	for(int i=0; i<n ;i++){
		int a;
		cin>>a;
		xul.push_back(a);
	} 
	
	//历遍序列，用Kadane算法找出最大值
	ll max_sum =xul[0];
	ll now_sum =xul[0];
	
	for(int i=1; i<n ;i++){
		now_sum = max((ll)xul[i] ,now_sum+xul[i]);   
		//max需要两个数类型一致，没有强转，豆包还没发现 
		max_sum = max(now_sum , max_sum);
		
	}
	
	//输出 
	cout<<max_sum;
	
 	return 0; 
}


