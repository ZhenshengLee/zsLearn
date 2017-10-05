# add executable
add_executable(hello_world hello_world.cpp)
target_link_libraries(hello_world
    apue
    ${Log4CXX_LIBRARY}
    )

# CTest
enable_testing()

add_executable(hello_world_test hello_world_test.cpp)
target_link_libraries(hello_world_test
    gtest
    gtest_main
    pthread
    apue
    )

add_test(
    NAME apue
    COMMAND $<TARGET_FILE:hello_world_test>
    )

