#include <iostream>
#include <algorithm>

const int N =  1000005;
using namespace std;

double w[N];

int main()
{
	double c;
	int n;
	cout << "请输入重量与古董个数\n";
	cin >> c >> n;
	cout << "请输入古董的重量\n";
	for(int i=0; i <n; i++)
		cin >> w[i];

	sort(w, w+n); // nlogn 复杂度
	double temp = 0.0;
	int ans = 0;
	for(int i=0; i<n; i++){ // n 复杂度
		temp += w[i];
		if (temp <= c)
			ans++;
		else
			break;
	}
	cout << "能装入的古董最大量ans=";
	cout << ans << endl;
	return 0;
}

//整体 n+nlogn
