//
// Created by matheusvilano on 2023-03-25.
//


#ifndef VIBE_SINEWAVE_H
#define VIBE_SINEWAVE_H

#include "PeriodicWave.h"

namespace Vibe
{
	/// A class capable of generating Sine waves.
	class SineWave : public PeriodicWave
	{
		public:
			/// Default constructor.
			SineWave() = default;

			/// Gets the waveform representation.
			/// \return A container with the samples representing the waveform.
			[[nodiscard]] TSharedPtr(ALshort) Get() const override;
	};
} // Vibe

#endif //VIBE_SINEWAVE_H
