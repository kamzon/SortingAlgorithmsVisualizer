add_library(display display.cpp)

add_library(rectangel rectangle.cpp)


find_package(SFML 2.5 
    COMPONENTS 
  system window graphics network audio REQUIRED)


add_executable(main main.cpp)

target_include_directories(main 
  PRIVATE "${PROJECT_BINARY_DIR}")


target_link_libraries(main sfml-graphics 
                            display 
                            rectangel)


