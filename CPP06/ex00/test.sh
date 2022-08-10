#!/bin/bash
​
echo -e "\033[1;33m ####CHAR 0#### \033[0m"
./convert 0
echo -e "\033[1;33m ####CHAR 42#### \033[0m"
./convert 42
echo -e "\033[1;33m ####CHAR NON-PRINTABLE MIN#### \033[0m"
./convert 20
echo -e "\033[1;33m ####CHAR NON-PRINTABLE MAX#### \033[0m"
./convert 127
echo -e "\033[1;33m ####INT MIN#### \033[0m"
./convert -2147483648
echo -e "\033[1;33m ####INT MAX#### \033[0m"
./convert +2147483647
echo -e "\033[1;33m ####FLOAT MIN#### \033[0m"
./convert -340282346638528859811704183484516925440.0000000000000000f
echo -e "\033[1;33m ####FLOAT MAX#### \033[0m"
./convert +340282346638528859811704183484516925440.0000000000000000f
echo -e "\033[1;33m ####DOUBLE MIN#### \033[0m"
./convert -179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000
echo -e "\033[1;33m ####DOUBLE MAX#### \033[0m"
./convert 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0000000000000000
echo -e "\033[1;33m ####+inf#### \033[0m"
./convert +inf
echo -e "\033[1;33m ####-inf#### \033[0m"
./convert -inf
echo -e "\033[1;33m ####+inff#### \033[0m"
./convert +inff
echo -e "\033[1;33m ####-inff#### \033[0m"
./convert -inff
echo -e "\033[1;33m ####nan#### \033[0m"
./convert nan
echo -e "\033[1;33m ####nanf#### \033[0m"
./convert nanf
echo -e "\033[1;33m #### BIGGER THAN MAX DOUBLE#### \033[0m"
./convert 1797693134862315708145274237317043567980705675258449965989174768031572607800285387605895586327668781715404589535143824642343213268894641827684675467035375169860499105765512820762454900903893289440758685084551339423045832369032229481658085593321233482747978262041447231687381771809192998812504040261841248583689.0000000000000000
echo -e "\033[1;33m ####> Wrong Arguments#### \033[0m"
./convert 123 ab