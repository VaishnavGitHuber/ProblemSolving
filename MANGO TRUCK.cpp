// Question: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MANGOES
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    
	    int no_mango = 0;
	    while(z >= (y + no_mango * x)){
	        no_mango += 1;
	    }
	    
	    // Execution statement
	    cout << no_mango-1 << endl;
	}
}
