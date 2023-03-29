//
// Created by matheusvilano on 2023-03-25.
//

#include "Waveform.h"
#include "../../Utilities/vmath.h"

namespace Vibe
{
	TSharedPtr(ALshort) Waveform::operator()() const
	{
		return Get();
	}
} // Vibe