project(common_math_boost_test_unit)

include_directories(../../../libs/common_math/include ${Boost_INCLUDE_DIRS})

file(GLOB_RECURSE UNIT_TEST_SRC LIST_DIRECTORIES true *.cpp *.cxx)

add_executable(${PROJECT_NAME} ${UNIT_TEST_SRC} )

target_link_libraries(${PROJECT_NAME} common_math ${Boost_LIBRARIES})

set(TEST_SUITE_NAME CommonMathBoostTests)
add_test(NAME ${TEST_SUITE_NAME} COMMAND ${PROJECT_NAME})
