#include <iostream>
int main(int argc, char* argv[]){
	int k;
        std::cin>>k;
	unsigned int a;
	std::cin>>a;
	unsigned int b;
	b=a>>k;
	unsigned int c;
	c=b<<k;
	std::cout<<c<<std::endl;
	return 0;
}

