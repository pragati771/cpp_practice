#include<iostream>
using namespace std;
int main(){
	int num;
	cin>>num;
	int revnum=0;
	while(num!=0){
		int rem=num%10;
		revnum=revnum*10+rem;
		num/=10;
	}
	cout<<"revserse no. is:"<<revnum;
}
