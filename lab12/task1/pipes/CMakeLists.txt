# Задание: Создать библиотеку pipes из read_pipe.c write_pipe.c
set(SOURCE_LIB_PIP read_pipe.c write_pipe.c)	
add_library(MY_LIB_PIP SHARED ${SOURCE_LIB_PIP})
