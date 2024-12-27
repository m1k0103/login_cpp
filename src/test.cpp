#include <iostream>
#include "imgui.h"
#include "imgui_impl_glfw.h"
#include "imgui_impl_opengl3.h"
using namespace std;


int main()
{
    bool show_demo_window;
    bool show_another_window;

    ImGui::CreateContext();
    ImGui::StyleColorsDark();
    
    ImGui::Begin("Hello, world!");                          // Create a window called "Hello, world!" and append into it.

    ImGui::Text("This is some useful text.");               // Display some text (you can use a format strings too)


    //ImGui::ColorEdit3("clear color", (float*)&clear_color); // Edit 3 floats representing a color
    ImGui::End();
}