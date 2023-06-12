#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, cnt=1;
	vector<pair<int,int>> v;
	cin >> n;
	for(int i=0; i<n; i++){
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(b,a));
	}
	sort(v.begin(), v.end());
	int start = v[0].first;
	for(int i=1; i<v.size(); i++){
		if(v[i].second >= start){
			cnt++;
			start = v[i].first;
		}
	}
	cout << cnt;
	return 0;
}