#include <iostream>
using namespace std;
void main(){
    int n;cin>>n;
    int8_t sum=0;
    for(int i=0;i<n;++i){
        sum+=i;
    }
    cout<<sum<<endl;
	return 0;
}