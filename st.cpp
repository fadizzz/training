#include <iostream>
int main(int argc, char* argv[]){
	int a;
        std::cin>>a;
	signed int k;
	std::cin>>k;
	signed int b;
	b=a>>k;
	unsigned int s;
	s=b;
	unsigned int j;
	j=s>>1;
	unsigned int f;
	f=j<<1;
	unsigned int r;
	r=b^f;
	std::cout<<r<<std::endl;
	return 0;
}

