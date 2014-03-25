#define GLFW_INCLUDE_GLCOREARB

#include <iostream>
#include <GLFW/glfw3.h>


int main()
{
    std::cout << "Hello" << std::endl;

    if (!glfwInit()) {
        return -1;
    }

    std::cout << glGetString(GL_VERSION) << std::endl;

    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);

    GLFWwindow *window = glfwCreateWindow(800, 600, "OpenGL", nullptr, nullptr);

    if (!window) {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();

    }

    glfwTerminate();
    return 0;
}
