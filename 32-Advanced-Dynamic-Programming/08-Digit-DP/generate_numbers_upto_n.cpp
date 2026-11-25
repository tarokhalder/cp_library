#include <bits/stdc++.h>

using namespace std;

string a;

void dp(int index , bool last , string ans) {
     if (index == a.size()) {
         cout << ans << "\n";
	       return;
     }
     int till = last ? (a[index] - '0') : 9;
     for (int i = 0; i <= till; i++) {
         dp(index + 1 , (last && (i == till)) , ans + to_string(i));
     }
}

int main() {
    int n;
    cin >> n;
    a = to_string(n);
    dp(0 , true , "");
}
