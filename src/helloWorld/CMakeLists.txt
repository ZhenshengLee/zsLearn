# add executable
add_executable(helloWorldMain helloWorldMain.cpp)
target_link_libraries(helloWorldMain
    helloWorld
    )

# CTest
enable_testing()

if(BUILDWITHTEST)
    add_executable(helloWorldTest helloWorldTest.cpp)
    target_link_libraries(helloWorldTest
        gtest
        gtest_main
        gmock
        gmock_main
        helloWorld
        )

    add_test(
        NAME helloWorldTest
        COMMAND $<TARGET_FILE:helloWorldTest>
        )
endif()
