#pragma once
#include <cmath>

float turnInRad = 0.0f;
float objx = 1.0f;
float objy = 0.0f;
float objz = 1.0f;

float incrementation = 0.4f;
float k = 1000.0f;
glm::vec3 cameraPos = glm::vec3(1.0f, 0.0f, 1.0f);
glm::vec3 cameraLook = glm::vec3(0.0f,0.0f, 0.0f);

float color = 1.0f;

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (key == GLFW_KEY_PAGE_UP && action == GLFW_PRESS) {
        //glfwSetWindowShouldClose(window, true);
        turnInRad = turnInRad + 10.0f;
    }
    else if (key == GLFW_KEY_PAGE_DOWN && action == GLFW_PRESS) {
        turnInRad = turnInRad - 10.0f;
    }
    else if (key == GLFW_KEY_UP && action == GLFW_PRESS) {
        cameraLook = cameraLook - glm::vec3(incrementation, 0.0f, 0.0f);
        std::cout << cameraLook.x << " " << cameraLook.y << " " << cameraLook.z << std::endl;
    }
    else if (key == GLFW_KEY_DOWN && action == GLFW_PRESS) {
        cameraLook = cameraLook + glm::vec3(incrementation, 0.0f, 0.0f);
        std::cout << cameraLook.x << " " << cameraLook.y << " " << cameraLook.z << std::endl;
    }
    else if (key == GLFW_KEY_LEFT && action == GLFW_PRESS) {
        cameraLook = cameraLook - glm::vec3(0.0f, incrementation, 0.0f);
        std::cout << cameraLook.x << " " << cameraLook.y << " " << cameraLook.z << std::endl;
    }
    else if (key == GLFW_KEY_RIGHT && action == GLFW_PRESS) {
        cameraLook = cameraLook + glm::vec3(0.0f, incrementation, 0.0f);
        std::cout << cameraLook.x << " " << cameraLook.y << " " << cameraLook.z << std::endl;
    }
    else if (key == GLFW_KEY_SPACE && action == GLFW_PRESS) {
        cameraPos = cameraPos + glm::vec3(0.0f, 0.0f, incrementation);
        cameraLook = cameraLook + glm::vec3(0.0f, 0.0f, incrementation);
    }
    else if (key == GLFW_KEY_LEFT_CONTROL && action == GLFW_PRESS) {
        cameraPos = cameraPos - glm::vec3(0.0f, 0.0f, incrementation);
        cameraLook = cameraLook - glm::vec3(0.0f, 0.0f, incrementation);
    }
    else if (key == GLFW_KEY_W && action == GLFW_PRESS) {
        cameraPos = cameraPos - glm::vec3(incrementation, 0.0f, 0.0f);
        cameraLook = cameraLook - glm::vec3(incrementation, 0.0f, 0.0f);
    }
    else if (key == GLFW_KEY_A && action == GLFW_PRESS) {
        cameraPos = cameraPos - glm::vec3(0.0f, incrementation, 0.0f);
        cameraLook = cameraLook - glm::vec3(0.0f, incrementation, 0.0f);
    }
    else if (key == GLFW_KEY_S && action == GLFW_PRESS) {
        cameraPos = cameraPos + glm::vec3(incrementation, 0.0f, 0.0f);
        cameraLook = cameraLook + glm::vec3(incrementation, 0.0f, 0.0f);
    }
    else if (key == GLFW_KEY_D && action == GLFW_PRESS) {
        cameraPos = cameraPos + glm::vec3(0.0f, incrementation, 0.0f);
        cameraLook = cameraLook + glm::vec3(0.0f, incrementation, 0.0f);
    }
}