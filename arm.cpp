#include<iostream>
#include<math.h>
using namespace std;
void checkarm(int n){
	int a=n;
	int count=0;
	int result;
	
	while(a!=0){
		a/=10;
		count++;
	}
	a=n;
	while(a!=0){
		int rem=a%10;
		result+=pow(rem,count);
		a/=10;
	}
    if(n==result){
    	cout<<"yesss";
	}
	else{
		cout<<"noooo";
	}
}

int main(){
	int num;
	cin>>num;
	checkarm(num);
}
