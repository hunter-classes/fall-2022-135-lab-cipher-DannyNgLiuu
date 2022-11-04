#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Solve Encrypted Caesar Shift"){
    CHECK(solve("Cduvtcevkqp ku qhvgp qpg hnqqt cdqxg aqw.") == "Abstraction is often one floor above you.");
    CHECK(solve("Nutkyzre, O jojt'z igxk sain lux znk loxyz ykgyut, yu O jojt'z huznkx cozn znk ykiutj.") == "Honestly, I didn't care much for the first season, so I didn't bother with the second.");
    CHECK(solve("Wkbdrk mkwo dy dro myxmvecsyx drkd crkuo gosqrdc kbo k qbokd qspd pyb kxi ymmkcsyx.") == "Martha came to the conclusion that shake weights are a great gift for any occasion.");
    CHECK(solve("Iwt hitcrw ugdb iwt uttsadi etgbtpits iwt rpg sthexit wpkxcv iwt pxg rdcsxixdcxcv dc gtrnrats pxg.") == "The stench from the feedlot permeated the car despite having the air conditioning on recycled air.");
    CHECK(solve("Lkeokj eru cnas pdnkqcd pda bajya pdau owez swo eilajapnwxha.") == "Poison ivy grew through the fence they said was impenetrable.");
    CHECK(solve("byffi, qilfx. nby nbcha ypyls jlialuggyl wixym qbyh nbys uly fyulhcha u hyq fuhaouay") == "hello, world. the thing every programmer codes when they are learning a new language");
}