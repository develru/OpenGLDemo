#ifndef GLEXCEPTION_H
#define GLEXCEPTION_H

#include <exception>
#include <string>

class GLException : public std::exception
{
public:
    GLException();
};

#endif // GLEXCEPTION_H
