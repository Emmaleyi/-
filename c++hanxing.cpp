#include<iostream>
#include<cstring>
class Hanxin{
private:
	int lin3[100],lin5[100],lin7[100];
	int cout1,cout2,cout3;
public:
	Hanxin();
	void line3(int num1);
	void line5(int num2);
	void line7(int num3);
	void showMany();
};
HanXin::Hanxin(){
	meset(lin3,0,sizeof(lin3));
	meset(lin5,0,sizeof(lin5));
	meset(lin7,0,sizeof(lin7));
}
void Hanxin::line3(int num1){
	int i=0;
	while(i*3+num1<=100){
		lin3[i++]=i*3+num1;
	}
	cout1=i-1;
}
void Hanxin::line5(int num2){
	int i=0;
	while(i*5+num2<=100){
		lin5[i++]=i*5+num2;
	}
	cout2=i-1;
}
void Hanxin::line7(int num3){
	int i=0;
	while(i*7+num3<=100){
		lin7[i++]=i*7+num3;
	}
	cout3=i-1;
} 
void Hanxin::showMany()
{
	int n=0;
	for(int i=1;i<cout3;i++)
	{
		for(int j=1;j<=cout2;j++)
		{
			if(lin7[i]==lin5[j])
			{
				for(int k=j;k<=cout1;k++)
				{
					if(lin3[k]==lin5[j])
					   n=lin3[k];
				}
			}
		}
	}
	if(n!=0){
		std::cout << n <<std::endl;
		else std:: << "Impossible" <<std::endl;
	}
}
int main(){
	int n,n1,n2,n3;
	std::cin >> n;
	for(int i=0;i<n;++i)
	{
		std::cin >> n1 >> n2 >> n3;
		Hanxin hx;
		hx.line3(n1);
		hx.line5(n2);
		hx.line7(n3);
		hx.showMany();
	}
}
