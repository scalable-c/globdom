cmake_minimum_required (VERSION 2.8)

project (gdomjni CXX)
enable_language (C)

find_package (JNI REQUIRED)
find_library (ZMQ_LIBRARY NAMES zmq libzmq REQUIRED)
find_library (GDOM_LIBRARY NAMES gdom REQUIRED)

include_directories (${JAVA_INCLUDE_PATH} ${JAVA_INCLUDE_PATH2} ../../include src/native/include)

set (gdomjni_sources
    src/main/c/org_zeromq_gdom_GdomClient.c
)

add_library (gdomjni SHARED ${gdomjni_sources})
add_definitions (-DGDOM_BUILD_DRAFT_API)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -pedantic -O2")
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)

target_link_libraries (gdomjni ${ZMQ_LIBRARY} ${GDOM_LIBRARY})
