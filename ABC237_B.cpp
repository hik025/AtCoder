
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int h, w;
	cin >> h >> w;
	int iIn[h][w];
	for (int i = 0; i < h; ++i){
		for (int j = 0; j < w; ++j){
			cin >> iIn[i][j];
		}
	}

	for (int j = 0; j < w; ++j){
		for (int i = 0; i < h; ++i){
			cout << iIn[i][j];
			if (i == h - 1){
				cout << endl;
			}
			else{
				cout << " ";
			}
		}
	}
}
