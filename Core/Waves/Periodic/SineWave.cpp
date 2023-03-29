//
// Created by matheusvilano on 2023-03-25.
//

#include "../../../Utilities/vmath.h"
#include "SineWave.h"

namespace Vibe
{
	TSharedPtr(ALshort) SineWave::Get() const
	{
		const int NumSamples = Engine::GetSampleRate();
		TSharedPtr(ALshort) Samples(new ALshort[NumSamples]);

		for (int SampleIndex = 0; SampleIndex < NumSamples; SampleIndex++)
		{
			double Alpha = Phase.Get() + ((double) SampleIndex / (double) NumSamples);
			double Sample = VMath::Sin(VMath::Angular(Frequency.Get()) * Alpha) * Volume.Get();
			Samples.get()[SampleIndex] = StaticCast(ALshort, Sample * SHRT_MAX);
		}

		return Samples;
	}
} // Vibe