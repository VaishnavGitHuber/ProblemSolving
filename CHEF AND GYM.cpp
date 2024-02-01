// Question: https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CGYM
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x,y,z;
	    cin >> x >> y >> z;
	    if(z >= x){
	        if(z >= (x+y)){
	            cout << 2 << endl;
	        }else{
	            cout << 1 << endl;
	        }
	    }else {
	        cout << 0 << endl;
	    }
	}

}

