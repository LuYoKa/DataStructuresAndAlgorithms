message(STATUS "-----src")
add_compile_options(-std=c++11)

include_directories(
 2_array
)

# add_library(dsas
#  2_array/k_array.cpp
# )


add_executable(main_test
    2_array/k_array.cpp
    ./main_test.cpp
)
