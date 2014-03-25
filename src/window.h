#ifndef WINDOW_H
#define WINDOW_H

#define GLFW_INCLUDE_GLCOREARB

#include <string>
#include <GLFW/glfw3.h>

class Window
{
    static GLint instanceCount;
    GLFWwindow *window;
    GLdouble lastBufferSwapTime;
    GLdouble deltaTime;
public:
    Window(GLint width, GLint height, std::string title);
    ~Window();

    void makeContextCurrent();
    bool shouldClose();
};

#endif // WINDOW_H
