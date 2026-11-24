#include <bits/stdc++.h>

using namespace std;

const int N = 1000;

vector <int> G[N];

int tin[N] , tout[N];

int timer = -1;

void dfs(int node , int par) {
    timer++;
    tin[node] = timer;
    for (int x : G[node]) {
        if (x != par) {
	   dfs(x , node);
	}
    }
    tout[node] = timer;
}

int main() {
    int n , e;
    cin >> n >> e;
    while (e--) {
        int x , y;
	cin >> x >> y;
	G[x].push_back(y);
	G[y].push_back(x);
    }
    dfs(1 , 0);
    for (int i = 1; i <= n; i++) {
        cout <<i << " " << tin[i] << " " << tout[i] << "\n";
    }
    return 0;
}
