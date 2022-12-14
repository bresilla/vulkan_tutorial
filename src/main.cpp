#include <fmt/core.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

auto main() -> int {
    if(glfwInit() == GLFW_FALSE) {
        fmt::print("Couldn't initialize GLFW");
        return 1;
    };

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    auto* window = glfwCreateWindow(800, 600, "Vulkan", nullptr, nullptr);

    if(window == nullptr){ fmt::print("Coudn't create window"); }

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}