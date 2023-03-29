//
// Created by matheusvilano on 2023-03-25.
//

#include "../../../Utilities/vmath.h"
#include "TriangleWave.h"

namespace Vibe
{
	TSharedPtr(ALshort) TriangleWave::Get() const
	{
		const int NumSamples = Engine::GetSampleRate();
		const double AngularVelocity = VMath::Angular(*Frequency);
		TSharedPtr(ALshort) Samples(new ALshort[NumSamples]);

		for (int SampleIndex = 0; SampleIndex < NumSamples; SampleIndex++)
		{
			double Alpha = *Phase + ((double) SampleIndex / (double) NumSamples);
			double Sample = (VMath::Asin(VMath::Sin(Alpha * AngularVelocity)) / (0.5 * M_PI)) * SHRT_MAX;
			Samples.get()[SampleIndex] = (ALshort) Sample;
		}

		return Samples;
	}
} // Vibe