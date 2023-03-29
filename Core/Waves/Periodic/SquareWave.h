//
// Created by matheusvilano on 2023-03-25.
//

#ifndef VIBE_SQUAREWAVE_H
#define VIBE_SQUAREWAVE_H

#include "PeriodicWave.h"

namespace Vibe
{
	/// A class capable of generating Square waves.
	class SquareWave : public PeriodicWave
	{
		public:
			/// Default constructor.
			SquareWave() = default;

			/// Gets the waveform representation.
			/// \return A container with the samples representing the waveform.
			[[nodiscard]] TSharedPtr(ALshort) Get() const override;

			/// WUsed for Pulse Width Modulation. This ranges from -1 (valley; min energy) to 1 (peak; max energy).
			RangedNumber<double, -1, 1> PulseWidth = 0.0;
	};
} // Vibe

#endif //VIBE_SQUAREWAVE_H
