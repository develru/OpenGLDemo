#ifndef GLEXCEPTION_H
#define GLEXCEPTION_H

#include <exception>
#include <string>

class GLException : public std::exception
{
    std::string whatCouse;
public:
    GLException(std::string what);
    ~GLException() throw();
    const char* what();
};

#endif // GLEXCEPTION_H
