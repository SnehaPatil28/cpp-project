#include<iostream>

class Arith_oper{
 public:
 	 int a,b;
 	 
 	void getNum()
 	{
 		std::cout<<"Enter First Number: ";
 		std::cin>>a;
 		std::cout<<"Enter Second Number: ";
 		std::cin>>b;
	 }
	 
	 int sum()
	 {
	 	return a+b;
	 }
	 int sub()
	 {
	 	return a-b;
	 }
	 int multi()
	 {
	 	return a*b;
	 }
	 float div()
	 {
	 	return (float)a/b;
	 }
	 
	 void Show()
	 {
	 	std::cout<<"Addition is "<<sum();
	 	std::cout<<"\nSubtraction is "<<sub();
	 	std::cout<<"\nMultiplication is "<<multi();
	 	std::cout<<"\nDivision is "<<div();
	 }
};

int main()
{
	Arith_oper n;
	n.getNum();
	n.Show();
	
}
