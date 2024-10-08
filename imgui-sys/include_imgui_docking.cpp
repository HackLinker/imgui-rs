// This improves build speed by only compiling a single file, and performance by
// allowing the optimizer to inline across separate object files (note that even
// when rust is built with LTO, unless the steps are taken to allow cross-lang
// LTO (tricky), the C/C++ code won't be LTOed).
#include "./third-party/imgui-docking/imgui/imgui.cpp"
#include "./third-party/imgui-docking/imgui/imgui_demo.cpp"
#include "./third-party/imgui-docking/imgui/imgui_draw.cpp"
#include "./third-party/imgui-docking/imgui/imgui_widgets.cpp"
#include "./third-party/imgui-docking/imgui/imgui_tables.cpp"
#include "./third-party/imgui-docking/imgui/imgui_impl_dx11.cpp"
#include "./third-party/imgui-docking/imgui/imgui_impl_win32.cpp"

#include "./third-party/imgui-docking/cimgui.cpp"

