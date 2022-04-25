
#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	bool bOK = true;
	bool bBig = false;
	bool bSmall = false;
	for (int i = 0; i<s.size() && bOK; ++i){
		char c = s.at(i);
		for (int j = i + 1; j<s.size(); ++j){
			if (c == s.at(j)){
				bOK = false;
				break;
			}
			else{
				// DO NOTHING
			}
		}
		if (c >= 'A' && c <= 'Z') bBig = true;
		else if (c >= 'a' && c <= 'z') bSmall = true;
	}
	cout << (bOK && bBig && bSmall ? "Yes" : "No") << endl;
}
