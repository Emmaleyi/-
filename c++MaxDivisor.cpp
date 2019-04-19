#include<iostream>
class Number{
private:
	int num;
public:
	Number(int n1);
	~Number();
	Number(const Number&obj);
	Number maxDivisor(Number n);
	void show();	
};
Number::Number(int n1){
	num=n1;
}
Number::~Number(){	
}
Number::Number(const Number&obj){
	num=obj.num;
}
Number Number::maxDivisor(Number n){
	int n2=n.num;
	if(num<n2){
		int temp=num;
		num=n2;
		n2=temp;
	}
	while(n2!=0){
		int temp1=num;
		num=n2;
		n2=temp1%num;
	}
	return num;
}
void Number::show(){
	std::cout << num << std::endl;
}
int main(){
	int n,n1,n2;
	std::cin >> n;
	for(int i=0;i<n;++i){
		std::cin >> n1 >> n2;
		Number no1(n1),no2(n2);
		Number no3=no1.maxDivisor(no2);
		no3.show();
	}
}

