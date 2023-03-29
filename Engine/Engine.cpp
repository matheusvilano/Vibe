//
// Created by matheusvilano on 2023-03-26.
//

#include "Engine.h"

namespace Vibe
{
	uint16_t Engine::SampleRate = VIBE_DEFAULT_SAMPLE_RATE;

	uint16_t Engine::GetSampleRate()
	{
		return SampleRate;
	}
} // Vibe