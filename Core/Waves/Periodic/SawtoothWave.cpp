//
// Created by matheusvilano on 2023-03-25.
//

#include "../../../Utilities/vmath.h"
#include "SawtoothWave.h"

namespace Vibe
{
	SawtoothWave::SawtoothWave() : PeriodicWave()
	{
		// Empty body.
	}

	TSharedPtr(ALshort) SawtoothWave::Get() const
	{
		const int NumSamples = Engine::GetSampleRate();
		const double Period = 1 / Frequency.Get();
		TSharedPtr(ALshort) Samples(new ALshort[NumSamples]);

		for (int SampleIndex = 0; SampleIndex < NumSamples; ++SampleIndex)
		{
			const double Alpha = Phase.Get() + ((double) SampleIndex / (double) NumSamples);
			const double Sample = ((VMath::Fmod(Alpha, Period) / Period * 2.0 - 1.0)) * Volume.Get();
			Samples.get()[SampleIndex] = StaticCast(ALshort, Sample * SHRT_MAX);
		}
		return Samples;
	}
} // Vibe