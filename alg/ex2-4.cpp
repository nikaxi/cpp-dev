// 最短路径求解
#include <cstdio>
#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

const int N = 100;
const int INF = 1e7;

int map[N][N] , dist[N], p[N], n, m;
bool flag[N]; // 顶点i是否加入了S集合

void Dijkstra(int u)
{
	for(int i =1; i<=n; i++) {
		dist[i] = map[u][i];
		flag[i] = false;
		if (dist[i] == INF) 
			p[i] = -1;
		else
			p[i] = u; //设置前驱
		}
		dist[u] = 0;
		flag[u] = true;
		for (int i=1; i<=n; i++) {  //从源出发寻找到各个节点的最近路线，并记录距离
			int temp = INF, t = u;
			for(int j=1; j<=n; j++) 
				if (!flag[j] && dist[j] < temp) {
					t = j;
					temp = dist[j];
				}
			if (t==u) return;
			flag[t] = true;
			for(int j=1; j<=n; j++) 
				if (!flag[j] && map[t][j]<INF)
					if(dist[j] > (dist[t]+map[t][j])) {
							dist[j] = dist[t]+map[t][j];
							p[j] = t;
					}
		}
}

int main() {
	int u, v, w, st;
	cout << "请输入城市个数\n";
	cin >> n;
	cout << "请输入城市之间线路的个数\n";
	cin >> m;
	cout << "请输入城市间线路和距离\n";
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n;j++) {
			map[i][j] = INF;
		}
		while (m--) {
			cin >>u >>v >> w;
			map[u][v] = min(map[u][v], w); // 临接矩阵存储，保持最小的距离
		}
		cout << "请输入小明位置" << endl;
		cin >> st;
		Dijkstra(st);
		cout << "小明所在的位置" << st << endl;
		for(int i=1; i <=n; i++) {
			cout << "小明: " << st << " - " << "要去的位置: " << i << endl;
			if (dist[i] == INF)
				cout << "sorry, 无路可达" << endl;
			else
				cout << "最短距离为:" << dist[i] << endl;
		}
	}
	return 0;
}
