#include <iostream>
int main(int argc, char* argv[]){
	int a;
        std::cin>>a;
	signed int k;
	std::cin>>k;
	signed int h=1;
	signed int b;
	b=h<<k;
	signed int s;
	s=a|b;
	signed int f;
	f=~s;
	signed int t;
	t=~f;
	std::cout<<t<<std::endl;
	return 0;
}

