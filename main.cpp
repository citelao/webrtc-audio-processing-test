#include <modules/audio_processing/include/audio_processing.h>

int main() {
    auto apm = webrtc::AudioProcessingBuilder().Create();
    const auto result = apm ? 0 : 1;
    return result;
}