
#ifndef SED_HPP
#define SED_HPP
#include <iostream>
class Sed
{
	private:
		std::string outfile;
		std::string infile;
	public:
		Sed( std::string filename );
		~Sed();
		void	replace( std::string s1, std::string s2);
};
#endif