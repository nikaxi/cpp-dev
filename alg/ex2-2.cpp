#include <iostream>
#include <algorithm>

using namespace std;
const int M=1000005;

struct three {
	double w;  //重量
	double v;  //价值
	double p;  //性价比
} s[M];

bool cmp(three a, three b) {
	return a.p > b.p;
}

int main() {
	int n; //宝物数量
	double m; //毛驴称重
	cout << "输入每个宝物的数量n以及毛驴的承载m\n";
	cin >>n >>m;
	cout << "每个宝物的重量和价值\n";
	for(int i=0; i<n; i++){
		cin >> s[i].w >>s[i].v;
		s[i].p = s[i].v/s[i].w;
	}
	// 快速排序
	sort(s, s+n, cmp);
	double sum = 0.0;
	for(int i=0; i<n; i++){
		if (m >s[i].w) {
			m -= s[i].w;
			sum += s[i].v;
		}	
		else {
			sum += m * s[i].p;
			break;
		}
	}
	cout << "装入宝物的最大价值Maximum value =" << sum << endl;
	return 0;
}


