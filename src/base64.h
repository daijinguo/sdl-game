#ifndef _BASE_64_H_
#define _BASE_64_H_

#include <string>

std::string base64_encode( unsigned char const *, unsigned int len );
std::string base64_decode( std::string const & );

#endif //_BASE_64_H_