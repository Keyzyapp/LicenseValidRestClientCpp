CMAKE_MINIMUM_REQUIRED(VERSION 3.7)

SET(PROJECT_NAME "LicenseValidRestClientCpp")

PROJECT(${PROJECT_NAME})

SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_CXX_FLAGS "--sysroot ${CMAKE_OSX_SYSROOT} ${CMAKE_CXX_FLAGS}")

SET(ROOT_DIR CACHE PATH "") 

SET(SRCS
    src/main.cpp
)

INCLUDE_DIRECTORIES(
    /usr/local/include
)

LINK_DIRECTORIES(
    /usr/local/lib
)

ADD_EXECUTABLE(${PROJECT_NAME} 
    ${SRCS}
)

TARGET_LINK_LIBRARIES(${PROJECT_NAME}
    restclient-cpp
)
