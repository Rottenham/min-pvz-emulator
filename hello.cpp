/* WINDOWS POWERSHELL
 * g++ -O3 -o hello hello.cpp -I. -Ilib -Lbuild -lpvzemu; ./hello > hello.json
 */

#include "world.h"
#include <iostream>

using namespace pvz_emulator;

int main(void)
{
    world w(object::scene_type::pool);

    // The first wave of zombies will spawn after 6 seconds.
    for (int i = 0; i < 600; i++) {
        w.update();
    }

    std::string s;
    w.to_json(s);
    std::cout << s << std::endl;

    return 0;
}