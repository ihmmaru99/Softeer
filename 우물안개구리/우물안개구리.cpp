#include<iostream>


using namespace std;

int user[100001];
int check[100001] = {0, };
int main()
{
	int n, m;
	cin >> n >> m;
	cout << '\n';
	for(int i=1; i<=n; i++){
		cin >> user[i];
	}
	for(int i=0; i<m; i++){
		int a, b;
		cin >> a >> b;
		if(user[a] > user[b])
			check[b] = 1;
		else if(user[a] < user[b])
			check[a] = 1;
		else{
			check[a] = 1;
			check[b] = 1;
		}
	}
	int cnt = 0;
	for(int i=1; i<=n; i++){
		if(check[i] == 0)
			cnt++;
	}
	cout << cnt;
	return 0;
}