###### Add boost unit test framework ######
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/../dist/lib/${CMAKE_SYSTEM_NAME}/${CMAKE_SYSTEM_PROCESSOR}/tests/boost")

find_package(Boost COMPONENTS REQUIRED system filesystem log thread unit_test_framework)

add_subdirectory(common_math_tests)