//
// Created by matheusvilano on 2023-03-25.
//

#include "../../../Utilities/vmath.h"
#include "SquareWave.h"

namespace Vibe
{
	TSharedPtr(ALshort) SquareWave::Get() const
	{
		const int NumSamples = Engine::GetSampleRate();
		const double AngularVelocity = VMath::Angular(*Frequency);
		TSharedPtr(ALshort) Samples(new ALshort[NumSamples]);

		for (int SampleIndex = 0; SampleIndex < NumSamples; SampleIndex++)
		{
			const double Alpha = *Phase + ((double) SampleIndex / (double) NumSamples);
			const double Sample = VMath::Sin(AngularVelocity * Alpha);
			const double Pulse = (Sample > *PulseWidth ? 1 : -1) * *Volume;
			Samples.get()[SampleIndex] = StaticCast(ALshort, Pulse * SHRT_MAX);
		}

		return Samples;
	}
} // Vibe