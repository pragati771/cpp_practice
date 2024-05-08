#include<iostream>
using namespace std;
int main(){
	int num1=19;
	int num2=98;
	int num3=6;
	if(num1>num2 && num1>num3){
		cout<<num1<<"is greatest";
	}
	else{
		if(num2>num3 && num2>num3){
			cout<<num2<<"is greates";
		}
		else{
			cout<<num3<<"is greatest";
		}
	}
}
