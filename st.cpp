#include <iostream>
int main(int argc, char* argv[]){
	int k;
        std::cin>>k;
	int n;
	std::cin>>n;
	unsigned int a;
	a=1;
	unsigned int b;
	b=a<<k;
	unsigned int c;
	c=1;
	unsigned int s;
	s=c<<n;
	unsigned int d;
	d=b+s;
	std::cout<<d<<std::endl;
	return 0;
}

