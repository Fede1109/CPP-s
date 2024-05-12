
#include "Sed.hpp"

Sed::Sed(std::string filename) : infile(filename){
    this->outfile = this->infile + ".replace";
}

Sed::~Sed (){}