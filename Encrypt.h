#pragma once
#include <iostream>

class Encrypt
{
public:

	std::string getPlain();
	std::string getCypher();
	std::string encode();
	std::string decode();

protected:

	std::string _plain();
	std::string _cypher();
};

