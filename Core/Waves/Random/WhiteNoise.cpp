//
// Created by matheusvilano on 2023-03-25.
//

#include "WhiteNoise.h"
#include <random>

namespace Vibe
{
	TSharedPtr(ALshort) WhiteNoise::Get() const
	{
		const int NumSamples = Engine::GetSampleRate();
		RandomDevice RandDevice;
		MT19937 RandGenerator(RandDevice());
		UniformDistributionInt16 UniDist(SHRT_MIN, SHRT_MAX);
		TSharedPtr(ALshort) Samples(new ALshort[NumSamples]);

		for (int SampleIndex = 0; SampleIndex < NumSamples; ++SampleIndex)
		{
			Samples.get()[SampleIndex] = UniDist(RandGenerator);
		}

		return Samples;
	}
} // Vibe