# Задание: задать имя проекта и версию cmake, добавить subdirectory для background и pipes, в которых 
# тоже есть свои CMakeLists.txt (внутри них тоже нужно добавить одну-две строки для сборки, задание описано в них же)
# Решить проблему с заголовочными файлами, включив директории в корневом CMakeLists.txt (include_directories)
# Слинковать исполняемый файл из src/main.c с библиотекой background
# Все это дело собрать, используя cmake и make
# Для установки cmake нужно установить его: sudo apt install build-essential cmake -y
cmake_minimum_required(VERSION 3.10) 
project(task1)  

set(SOURCE_EXE src/main.c)		# Установка переменной со списком исходников для исполняемого файла, чтобы разыменовать и
                        # вытащить значение переменной используется ${имя_переменной}
# set(SOURCE_LIB background/background.c pipes/read_pipe.c pipes/write_pipe.c)			# Тоже самое, но для библиотеки

# add_library(MY_LIB STATIC ${SOURCE_LIB})	# Создание статической библиотеки с именем MY_LIB

include_directories("./background" "./pipes")			# Расположение заголовочных файлов

add_executable(main ${SOURCE_EXE})		# Создает исполняемый файл с именем main

add_subdirectory("./background")			# Добавление подпроекта, указывается имя дирректории
add_subdirectory( "./pipes")
# add_definitions("-DTEST_DEF=5")

target_link_libraries(main MY_LIB_BG MY_LIB_PIP)