#include <iostream>
using namespace std;

int main() {

	// your code here
	int t;
	cin>>t;
	while(t--){
		long long a;
		cin>>a;

		if (a%2==1) cout<<0<<endl;
		else if (a==2) cout<<"33"<<endl;
		else {
			cout<<7*a*a+4*a+1<<endl;
		}

	}

	return 0;
}
