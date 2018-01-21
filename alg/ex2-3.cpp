#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int M = 10;
struct Meet
{
	int beg;
	int end;
	int num;
} meet[1000];


class setMeet {
	public:
	void init();
	void solve();
	private:
	int n, ans;
};

void setMeet::init(){
	int s, e;
	cout << "输入会议总数" << endl;
	cin >> n;
	int i ;
	cout << "输入会议开始时间和结束时间，空格分开\n";
	for(int i=0; i<n; i++) {
		cin >> s >> e;
		meet[i].beg = s;
		meet[i].end = e;
		meet[i].num = i+1;
	}
}


bool  cmp(Meet x, Meet y) {
	if (x.end == y.end) 
		return x.beg > y.beg;
	return x.end < y.end;
}

void setMeet::solve() {
	sort(meet, meet+n, cmp);
	cout << "排序完的会议时间如下:" << endl;
	int i;
	cout << "会议编号" << "开始时间" << "结束时间" << endl;
	for(i = 0; i < n; i++) {
		cout << "  " << meet[i].num << "\t" << meet[i].beg << "\t\t" << meet[i].end << endl;
	}

	cout << "----------------------------------\n";
	cout << "选择会议的过程\n";
	cout << "  选择第" << meet[0].num << "个会议" << endl;
	ans = 1;
	int last = meet[0].end;
	for(i = 1; i < n; i++) {
		if (meet[i].beg >= last) {
			ans++;
			last = meet[i].end;
			cout << " 选择第" << meet[i].num << "个会议\n";
		}
	}
	cout << "最多可以安排" << ans << "个会议" << endl;
}
int main() {
	setMeet sm;
	sm.init();
	sm.solve();
	return 0;
}
