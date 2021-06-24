cmake_minimum_required(VERSION 3.0.0)
project(template_tut VERSION 0.1.0)


add_executable(template_tut main.cpp)
target_compile_features(template_tut PRIVATE cxx_std_20)