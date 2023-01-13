
#include <iostream>
#include "BasicEncrypt.h"

int main()
{

	BasicEncrypt test;
	test.setPlain("7");
	test.setCypher("42");
	test.encode();
	
	std::cout << test.getPlain() << std::endl;
	

}

