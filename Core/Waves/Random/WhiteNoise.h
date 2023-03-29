//
// Created by matheusvilano on 2023-03-25.
//

#ifndef VIBE_WHITENOISE_H
#define VIBE_WHITENOISE_H

#include "RandomWave.h"

namespace Vibe
{
	/// A class capable of generating White Noise.
	class WhiteNoise : public RandomWave
	{
		public:
			/// Default constructor.
			WhiteNoise() = default;

			/// Gets the waveform representation.
			/// \return A container with the samples representing the waveform.
			[[nodiscard]] TSharedPtr(ALshort) Get() const override;
	};
} // Vibe

#endif //VIBE_WHITENOISE_H
