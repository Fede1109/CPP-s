#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base *generate(void)
{
	srand(time(NULL));
	int random = rand() % 3;
	switch (random)
	{
	case 0:
		return new A();
		break;
	case 1:
		return new B();
		break;
	case 2:
		return new C();
		break;
	}
	return NULL;
}

void identify(Base *p)
{
    if (A *a = dynamic_cast<A *>(p))
        std::cout << "Class A" << std::endl;
    else if (B *b =dynamic_cast<B*>(p))
        std::cout << "Class B" << std::endl;
    else if (C *c = dynamic_cast<C*>(p))
        std::cout << "Class C" << std::endl;
    else
        std::cerr << "Unknown type" << std::endl;
}

void identify(Base &p){
	try{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Class A" << std::endl;
		return;
	}catch(std::exception &e){};
	try{
		B b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "Class B" << std::endl;
		return;
	}catch(std::exception &e){};
	try{
		C c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "Class C" << std::endl;
		return;
	}catch(std::exception &e){};
	std::cerr << "unknown reference" << std::endl;
}