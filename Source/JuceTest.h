
#pragma once

#ifndef JuceTest_h
#define JuceTest_h

#include <sstream>
#include "MyNoisePlayer.h"

namespace jucetest
{
    class JuceTest
    {
    public:
        JuceTest();
        ~JuceTest();
        std::string getTexte();

    private:
        MyNoisePlayer myNoisePlayer;
    };
}

#endif /* JuceTest_h */
