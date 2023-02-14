#include <iostream>
int main(int argc, char* argv[]){
	int a;
        std::cin>>a;
	signed int k;
	std::cin>>k;
	unsigned int b;
	unsigned int h=1;
	b=h<<k;
	unsigned int g;
	g=a^b;

	std::cout<<g<<std::endl;
	return 0;
}

