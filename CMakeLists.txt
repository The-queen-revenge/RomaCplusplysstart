cmake_minimum_required(VERSION 3.23)
project(RomaCplusplysstart)

set(CMAKE_CXX_STANDARD 14)

add_executable(RomaCplusplysstart main.cpp "HoweWork/dz s blok shemoy.cpp" "HoweWork/dz_c_ sin and cos.cpp" stepic.cpp IDZ/idz.cpp IDZ/idz2.cpp IDZ/idz3.cpp "IDZ/idz_s_ while1.cpp" IDZ/idz_s_while2.cpp IDZ/my_lib.h IDZ/idz_s_massiv.cpp IDZ/idz_s_massiv_2.cpp HoweWork/dz_s_for_3.cpp IDZ/idz_so_strokani.cpp IDZ/idz_so_strokami_2.cpp IDZ/idz_so_strokami_3.cpp HoweWork/dz_c_for_1.cpp HoweWork/dz_c_for_2.cpp HoweWork/dz_c_algoritm.cpp IDZ/idz_s_struct.cpp IDZ/idz_s_file_1.cpp IDZ/idz_dinamPamayt_1.cpp IDZ/idz_dinamPamayt_2.cpp IDZ/idz_klass_1.cpp IDZ/idz_klass_3.cpp IDZ/idz_s_file_2.cpp)


add_executable(dz_c_for_1 HoweWork/dz_c_for_1.cpp IDZ/idz_klass_1.cpp)
add_executable(idz_s_struct IDZ/idz_s_struct.cpp)
add_executable(idz_dinamPamayt_1 IDZ/idz_dinamPamayt_1.cpp)
add_executable(idz_dinamPamayt_2 IDZ/idz_dinamPamayt_2.cpp)