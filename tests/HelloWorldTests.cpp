//TODO: Change to your own tests

#include <gtest/gtest.h>

#include <HelloWorld.hpp>

#include "CheckOutput.hpp"

TEST(HelloWorld, HelloWorld)
{
    checkOutput([]() {
        printHelloWorld();
    }, "Hello world\n");
}
