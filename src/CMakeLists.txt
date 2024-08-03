add_executable(rolled rolled.cpp)
target_include_directories(rolled PUBLIC ../include)

add_executable(crolled rolled_constsiz.cpp)
target_include_directories(crolled PUBLIC ../include)

add_executable(unrolled unrolled.cpp)
target_include_directories(unrolled PUBLIC ../include)
