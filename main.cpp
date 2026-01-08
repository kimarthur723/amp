#include "audio_engine.h"
#include <iostream>
#include <stdexcept>

int main()
{
    try
    {
        AudioEngine engine;
        engine.start();

        std::cout << "Passthrough active" << std::endl;
        std::cin.get();

        engine.stop();
    }
    catch (const std::exception& e)
    {
        std::cerr << "error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}
