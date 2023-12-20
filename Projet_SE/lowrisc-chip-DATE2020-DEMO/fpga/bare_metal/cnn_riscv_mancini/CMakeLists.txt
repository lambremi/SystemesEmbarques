# cmake_minimum_required(VERSION 2.8)

# project(3A-SEI-SoC-POO-LAB1)
# #set(CMAKE_BUILD_TYPE Release)
# set(CMAKE_BUILD_TYPE Debug)

# #set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Wconversion -std=gnu99")
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -Wconversion -std=c++11")
# #set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -Wconversion -std=gnu++11")
# file(GLOB SOURCES "computer/*.cpp")
# list(APPEND SOURCES "computer/*.hpp") 


cmake_minimum_required(VERSION 3.0)

# nom du projet
project(CNN)

# Spécifier le répertoire de sortie de l'exécutable (facultatif)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)
message(STATUS "message : CMAKE_BINARY_DIR: ${CMAKE_BINARY_DIR}")

# Configuration du répertoire source
set(SOURCE_DIR ".")

# Inclure les répertoires d'en-tête
# target_include_directories(CNN PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Récupérer la liste des fichiers source
file(GLOB SOURCE_FILES "src/*.c")

# Ajouter les fichiers d'en-tête du dossier "include"
file(GLOB HEADER_FILES "include/*.h")

# Créer l'exécutable en utilisant les fichiers source
add_executable(CNN ${SOURCE_FILES} ${HEADER_FILES})

# Si vous avez des dépendances externes, vous pouvez les ajouter ici
# target_link_libraries(MonProgramme LibrairieExterne)



