#include<iostream>
using namespace std;
namespace maths{
	class variable{
		protected:int v1;
		int v2;
		public:
			void accept(int var1,int var2);
	};
	class add:public variable{
		int sum=0;
		public:void addi(){
			sum=v1+v2;
			cout<<"addition is:"<<sum;
		}
	};
	class sub:public variable{
		int subs=0;
		public:void subs(){
			sub=abs(v1-v2)
			cout<<"substractio is:"<<sub;
		}
	};
}
