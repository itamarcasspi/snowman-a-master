/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <itamar>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
#include <cmath>
using namespace ariel;

#include <string>
using namespace std;
//HNLRXYTB

TEST_CASE("Good snowman code") {
    CHECK(snowman(11114411) == string(" _===_\n (.,.)\n ( : )\n ( : )"));
    CHECK(snowman(21211412) == string(" ___ \n .....\n \n (o,.)\n<( : )\n (\" \")"));
    CHECK(snowman(11111111) == string(" _===_\n (.,.)\n<( : )>\n ( : )"));
    CHECK(snowman(22222222) == string("  ___\n .....\n (o.o)\n/(] ])\\\n (\" \")"));
    CHECK(snowman(33333333) == string("   _\n  /_\\\n\\(O_O)/\n (> <)\n (___)"));
    CHECK(snowman(44444444) == string("  ___\n (_*_)\n (- -)\n (   )\n (   )"));
    CHECK(snowman(12341234) == string(" _===_\n (o.O)\n<(> <)/\n (   )"));
    CHECK(snowman(43214321) == string(" _===_\n (o.O)\n<(> <)/\n (   )"));
}
//a function that returns a snowman code, and the input is the amount of digits you want. eg: randomSnowman(2) = xy where x and y are allways in
//the 1 to 4 range. when digits = 8 you will get a "good snowman code".
int randomSnowman(int digits)
{
     int badsnowman = 0;
    for (; 0 < digits; digits--)
    {
        badsnowman = badsnowman + (rand()%4+1)*pow(10,digits-1);
    }
    return badsnowman;
    
}


TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(randomSnowman(7)));
    CHECK_THROWS(snowman(randomSnowman(6)));
    CHECK_THROWS(snowman(randomSnowman(5)));
    CHECK_THROWS(snowman(randomSnowman(4)));
    CHECK_THROWS(snowman(randomSnowman(3)));
    CHECK_THROWS(snowman(randomSnowman(2)));
    CHECK_THROWS(snowman(randomSnowman(1)));
    CHECK_THROWS(snowman(randomSnowman(9)));
    CHECK_THROWS(snowman((-1)*randomSnowman(8)));
    CHECK_THROWS(snowman(11111110));
    CHECK_THROWS(snowman(11111101));
    CHECK_THROWS(snowman(11111011));
    CHECK_THROWS(snowman(11110111));
    CHECK_THROWS(snowman(11101111));
    CHECK_THROWS(snowman(11011111));
    CHECK_THROWS(snowman(10111111));
    CHECK_THROWS(snowman(01111111));
    CHECK_THROWS(snowman(11111110));
    CHECK_THROWS(snowman(11111151));
    CHECK_THROWS(snowman(11111611));
    CHECK_THROWS(snowman(11117111));
    CHECK_THROWS(snowman(11161111));
    CHECK_THROWS(snowman(11511111));
    CHECK_THROWS(snowman(17111111));
    CHECK_THROWS(snowman(91111111));
    CHECK_THROWS(snowman(11111110));
    CHECK_THROWS(snowman(11111101));
    CHECK_THROWS(snowman(11111011));
    CHECK_THROWS(snowman(11110111));
    CHECK_THROWS(snowman(11101111));
    CHECK_THROWS(snowman(11011111));
    CHECK_THROWS(snowman(10111111));
    CHECK_THROWS(snowman(00000000));
   
    /* Add more checks here */
}


/* Add more test cases here */
