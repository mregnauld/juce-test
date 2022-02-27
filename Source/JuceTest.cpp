
#include "JuceTest.h"
//#include "juce_audio_formats/codecs/oggvorbis/codec.h"
//#include "juce_audio_formats/codecs/oggvorbis/vorbisfile.h"

namespace jucetest
{
    JuceTest::JuceTest() = default;
    JuceTest::~JuceTest() = default;

    std::string JuceTest::getTexte()
    {
        myNoisePlayer.play();
        return "This is a test message ABCDE";
    }

}
