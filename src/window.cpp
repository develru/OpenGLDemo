#include <IL/il.h>
#include "window.h"
#include "glexception.h"

GLint Window::instanceCount = 0;

Window::Window(GLint width, GLint height, std::string title)
{
    if(instanceCount == 0) {
        ilInit();
        ilOriginFunc(IL_ORIGIN_LOWER_LEFT);
        ilEnable(IL_ORIGIN_SET);

        if(!glfwInit())
            throw GLException("Failed to initialize GLFW!");

        glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    }

    instanceCount++;

    window = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);
    if (!window) {
        glfwTerminate();
        throw GLException("Failed to create the window");
    }
}
