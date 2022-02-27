
#pragma once
#include "JuceHeader.h"

class MyNoiseSource : public juce::AudioSource
{
public:
    MyNoiseSource() = default;
    void prepareToPlay(int samplesPerBlock, double sampleRate) override
    {

    }
    void releaseResources() override
    {

    }
    void getNextAudioBlock(const juce::AudioSourceChannelInfo& bufferToFill) override
    {
        for (auto channel = 0; channel < bufferToFill.buffer->getNumChannels(); ++channel)
        {
            // Get a pointer to the start sample in the buffer for this audio output channel
            auto* buffer = bufferToFill.buffer->getWritePointer (channel, bufferToFill.startSample);

            // Fill the required number of samples with noise between -0.125 and +0.125
            for (auto a = 0 ; a < bufferToFill.numSamples ; a++)
			{
				buffer[a] = random.nextFloat() * 0.25f - 0.125f;
			}
        }
    }
private:
    juce::Random random;
};
