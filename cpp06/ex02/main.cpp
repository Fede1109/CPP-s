#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

int main(void)
{
	Base *randomClass = generate();
	identify(randomClass);
	identify(*randomClass);
	return 0;
}