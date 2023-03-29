#include <AL/al.h>
#include <AL/alc.h>
#include "Core/Waves/Periodic/SquareWave.h"
#include "Core/Waves/Periodic/SineWave.h"
#include "Core/Waves/Periodic/TriangleWave.h"
#include "Core/Waves/Periodic/SawtoothWave.h"
#include "Core/Waves/Random/WhiteNoise.h"

int main()
{
	// Initialize OpenAL
	ALCdevice* Device = alcOpenDevice(nullptr);
	ALCcontext* Context = alcCreateContext(Device, nullptr);
	alcMakeContextCurrent(Context);

	// Generate sound data
	Vibe::TriangleWave Osc1;
	Osc1.Frequency = 300;
	Osc1.Volume = 1;
	Osc1.Phase = 0;
	auto Wave1 = Osc1();

	// Generate sound data
	Vibe::TriangleWave Osc2;
	Osc2.Frequency = 400;
	Osc2.Volume = 1;
	Osc2.Phase = 0;
	auto Wave2 = Osc2();

	// Create OpenAL Buffer1 and Source1
	ALuint Buffer1, Source1;
	alGenBuffers(1, &Buffer1);
	alBufferData(Buffer1, AL_FORMAT_MONO16, Wave1.get(),
				 Vibe::Engine::GetSampleRate() * sizeof(short), Vibe::Engine::GetSampleRate());
	alGenSources(1, &Source1);
	alSourcei(Source1, AL_BUFFER, Buffer1);
	alSourcei(Source1, AL_LOOPING, AL_TRUE);

	// Create OpenAL Buffer1 and Source1
	ALuint Buffer2, Source2;
	alGenBuffers(1, &Buffer2);
	alBufferData(Buffer2, AL_FORMAT_MONO16, Wave2.get(),
				 Vibe::Engine::GetSampleRate() * sizeof(short), Vibe::Engine::GetSampleRate());
	alGenSources(1, &Source2);
	alSourcei(Source2, AL_BUFFER, Buffer2);
	alSourcei(Source2, AL_LOOPING, AL_TRUE);

	// Play sound and wait for it to finish
	alSourcePlay(Source1);
	alSourcePlay(Source2);
	ALint State;
	do
	{
		alGetSourcei(Source1, AL_SOURCE_STATE, &State);
	} while (State == AL_PLAYING);

	// Clean up resources
	alDeleteSources(1, &Source1);
	alDeleteBuffers(1, &Buffer1);
	alcMakeContextCurrent(nullptr);
	alcDestroyContext(Context);
	alcCloseDevice(Device);

	return EXIT_SUCCESS;
}
