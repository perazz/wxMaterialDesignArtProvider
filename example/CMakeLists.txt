cmake_minimum_required(VERSION 3.23)
project(wxMDArtProvider_Example VERSION 1.0)

# C++ Standard
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_CXX_EXTENSIONS OFF)
# if(NOT CMAKE_CXX_STANDARD OR CMAKE_CXX_STANDARD LESS 20)
# 	set(CMAKE_CXX_STANDARD 20)
# endif()

add_executable(wxMDArt_Example MACOSX_BUNDLE
    wxMaterialDesignIconsApp.cpp
    wxMaterialDesignIconsMain.cpp
)
target_link_libraries(wxMDArt_Example ${wxWidgets_LIBRARIES} wxMDArtProvider)