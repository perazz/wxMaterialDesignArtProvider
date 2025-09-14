cmake_minimum_required(VERSION 3.23)
project(wxMDArtProvider VERSION 1.0)

# Dependencies
find_package(wxWidgets REQUIRED COMPONENTS core base adv)
include(${wxWidgets_USE_FILE})

# C++ Standard
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_CXX_EXTENSIONS OFF)
# if(NOT CMAKE_CXX_STANDARD OR CMAKE_CXX_STANDARD LESS 20)
# 	set(CMAKE_CXX_STANDARD 20)
# endif()

# Set source files to compile
if(ADD_AWESOME_ART)
    file(GLOB AWSOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "src/wxAwesome*.cpp")
    set(SOURCE ${SOURCE} ${AWSOURCES})
endif()

if(ADD_MDESIGN_ART)
    file(GLOB MDSOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "src/wxMaterial*.cpp")
    set(SOURCE ${SOURCE} ${MDSOURCES})
endif()

if(ADD_FLUENTUI_ART)
    file(GLOB FLSOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "src/wxFluentui*.cpp")
    set(SOURCE ${SOURCE} ${FLSOURCES})
endif()

if(ADD_SIMPLE_ART)
set(SOURCE ${SOURCE} src/wxSimpleIconsArt.cpp)
endif()

# Declare library
add_library(wxMDArtProvider SHARED ${SOURCE} src/wxMaterialDesignArtProvider.cpp)

if(ADD_AWESOME_ART)
    target_compile_definitions(wxMDArtProvider PUBLIC HAS_AWESOME_ART)
endif()

if(ADD_MDESIGN_ART)
    target_compile_definitions(wxMDArtProvider PUBLIC HAS_MDESIGN_ART)
endif()

if(ADD_FLUENTUI_ART)
    target_compile_definitions(wxMDArtProvider PUBLIC HAS_FLUENTUI_ART)
endif()

if(ADD_SIMPLE_ART)
    target_compile_definitions(wxMDArtProvider PUBLIC HAS_SIMPLE_ART)
endif()

target_include_directories(wxMDArtProvider
    PRIVATE
        # where the library itself will look for its internal headers
        ${CMAKE_CURRENT_SOURCE_DIR}/include
    PUBLIC
        # where top-level project will look for the library's public headers
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        # where external projects will look for the library's public headers
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)
target_link_libraries(wxMDArtProvider ${wxWidgets_LIBRARIES})

# Add example to build
if(WITH_EXAMPLE)
    add_subdirectory(example)
endif()
