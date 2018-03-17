# add executable
add_executable(helloWorldMain helloWorldMain.cpp)
target_link_libraries(helloWorldMain
    helloWorld
    )

# CTest
enable_testing()

add_executable(helloWorldTest helloWorldTest.cpp)
target_link_libraries(helloWorldTest
    gtest
    gtest_main
    helloWorld
    )

add_test(
    NAME helloWorld
    COMMAND $<TARGET_FILE:helloWorldTest>
    )

