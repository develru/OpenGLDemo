#define GLFW_INCLUDE_GLCOREARB

#include <iostream>
#include <memory>
#include <GLFW/glfw3.h>
#include "src/glexception.h"
#include "src/window.h"

int main()
{
    try {
        std::unique_ptr<Window> window(new Window(800, 600, "OpenGL"));
        window->makeContextCurrent();

//        std::cout << glGetString(GL_VERSION) << std::endl;

        glClearColor(0.0, 0.0, 0.0, 1.0);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

        while (!window->shouldClose()) {
            glClear(GL_COLOR_BUFFER_BIT);

            glfwPollEvents();
            window->swapBuffers();
        }

        glfwTerminate();
    } catch (GLException &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
