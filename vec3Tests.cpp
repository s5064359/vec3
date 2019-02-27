
#include "vec3.h"
#include <gtest/gtest.h>
using namespace ::testing;
// for more details on gtest see here https://github.com/google/googletest/blob/master/googletest/docs/primer.md
// my lecture https://nccastaff.bournemouth.ac.uk/jmacey/PP/slides/testing/slides.html#/
TEST(vec3, testDefaultConstructor)
{
    vec3 a;
    ASSERT_FLOAT_EQ(a.m_x,0.0f);
    ASSERT_FLOAT_EQ(a.m_y,0.0f);
    ASSERT_FLOAT_EQ(a.m_z,0.0f);
}
