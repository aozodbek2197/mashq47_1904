// 1-mashq
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v={1,2,2};
    int x=0;
    for(int i:v) x^=i;
    cout<<x;
}
// 2-mashq
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    bitset<8> b(n);
    string s=b.to_string();
    reverse(s.begin(),s.end());
    cout<<stoi(s,0,2);
}
