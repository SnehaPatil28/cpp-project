#include<iostream>

class Compare
{
public:
	int a,b,c;
	
	void getNum()
	{
     	std::cout<<"Enter First Number: ";
 		std::cin>>a;
 		std::cout<<"Enter Second Number: ";
 		std::cin>>b;
 		std::cout<<"Enter Third Number: ";
 		std::cin>>c;
	}
	
	void LargeNum()
	{
		if(a>b && a>c)
		  std::cout<<"Larger Number is "<<a;
		else if(b>c)
		  std::cout<<"Larger Number is "<<b;
		else 
		  std::cout<<"Larger Number is "<<c;
	}
};

int main()
{
	Compare n;
	n.getNum();
	n.LargeNum();
}
