cmake_minimum_required(VERSION 3.16)

project (optee_example_gmssl C)

set (SRC host/main.c)

include_directories(${TEEC_EXPORT}/include)
link_directories(${TEEC_EXPORT}/lib)

add_executable (${PROJECT_NAME} ${SRC})

target_include_directories(${PROJECT_NAME}
			   PRIVATE ta/include
			   PRIVATE include)

target_link_libraries (${PROJECT_NAME} PRIVATE teec)

install (TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_BINDIR})
