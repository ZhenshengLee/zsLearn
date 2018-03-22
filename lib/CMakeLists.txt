file(GLOB_RECURSE SRC_FILES "*.cpp")

# 学完正则表达式之后优化此项
foreach(FILE_PATH ${SRC_FILES})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" FILE_NAME ${FILE_PATH})
    add_library(${FILE_NAME} SHARED ${FILE_NAME}.cpp)
endforeach(FILE_PATH)
