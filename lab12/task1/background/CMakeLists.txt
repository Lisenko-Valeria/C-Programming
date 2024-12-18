# Задание: Создать библиотеку из background.c и слинковать ее с библиотекой pipes
set(SOURCE_LIB background.c)	
add_library(MY_LIB_BG SHARED ${SOURCE_LIB})
target_link_libraries(MY_LIB_BG MY_LIB_PIP)