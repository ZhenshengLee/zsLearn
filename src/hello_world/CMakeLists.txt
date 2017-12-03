# add executable
add_executable(hello_world hello_world.cpp)
target_link_libraries(hello_world
    zs
    )

# CTest
enable_testing()

add_executable(hello_world_test hello_world_test.cpp)
target_link_libraries(hello_world_test
    gtest
    gtest_main
    zs
    )

add_test(
    NAME zs
    COMMAND $<TARGET_FILE:hello_world_test>
    )

