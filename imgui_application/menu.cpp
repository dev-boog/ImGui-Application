#include "ImGui/ImGui.h"
#include "ImGui/imgui_impl_dx9.h"
#include "ImGui/imgui_impl_win32.h"

#include "menu.h"

#include <iostream>
#include <windows.h>

extern bool menu::active = true;
bool styles_loaded = false;

class initWindow
{
public:
    const char* window_title = "title";

    DWORD window_flags = ImGuiWindowFlags_NoSavedSettings | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_AlwaysAutoResize;
} iw;

void load_styles()
{
    styles_loaded = true;

    ImVec4* colors = ImGui::GetStyle().Colors;
    {
        
    }

    ImGuiStyle* style = &ImGui::GetStyle();
    {
        
    }
}

void menu::render()
{
    ImGuiIO& io = ImGui::GetIO(); (void)io;

    if (!styles_loaded)
        load_styles();

    if (menu::active)
    {
        ImGui::SetNextWindowBgAlpha(1.0f);
        ImGui::Begin(iw.window_title, &menu::active, iw.window_flags);
        {
            
        }
        ImGui::End();
    }
    else
    {
        exit(0);
    }
}