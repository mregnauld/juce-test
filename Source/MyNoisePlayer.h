
#pragma once
#include "JuceHeader.h"
#include "MyNoiseSource.h"

class MyNoisePlayer
{
public:
    MyNoisePlayer()
    {
        source = std::make_unique<MyNoiseSource>();
        player = std::make_unique<juce::AudioSourcePlayer>();
        player->setSource(source.get());
        deviceManager.addAudioCallback(player.get());
    }

    void play()
    {
        deviceManager.initialise(
                0,
                2,
                nullptr,
                false);
    }

private:
    std::unique_ptr<juce::AudioSource> source;
    std::unique_ptr<juce::AudioSourcePlayer> player;
    juce::AudioDeviceManager deviceManager;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(MyNoisePlayer)
};