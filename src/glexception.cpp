#include "glexception.h"

GLException::GLException(std::string what) :
    whatCouse(what)
{
}

GLException::~GLException() throw()
{
    std::exception::~exception();
}

const char *GLException::what()
{
    return whatCouse.c_str();
}
