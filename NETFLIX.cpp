// Question: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/NETFLIX
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a,b,c,x;
	    cin >> a >> b >> c >> x;
	    if(a+b >= x || a+c >= x || b+c >= x){
	        cout << "YES" << endl;
	    }else {
	        cout << "NO" << endl;
	    }
	}

}
