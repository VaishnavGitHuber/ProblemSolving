#include <bits/stdc++.h>
using namespace std;

// Question: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CHEAPFOOD
int main() {
	int t;
	cin >> t;
	while(t--){
	    int x,min_discount;
	    cin >> x;
	    if(0.1 * x > 100){
	        min_discount = 0.1 * x;
	    }else {
	        min_discount = 100;
	    }
	    cout << min_discount << endl;
	}
}
