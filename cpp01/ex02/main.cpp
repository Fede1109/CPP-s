
#include <iostream>

int main (void)
{
    std::string str = "HI THSI IS BRAIN";
    std::string *strPtr = &str;
    std::string &strRef = str;

    std::cout << &str << ": " << str << std::endl;
    std::cout << strPtr << ": " << *strPtr << std::endl;
    std::cout << &strRef << ": " << strRef << std::endl;
}