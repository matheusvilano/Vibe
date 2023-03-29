//
// Created by matheusvilano on 2023-03-25.
//

#ifndef VIBE_TRIANGLEWAVE_H
#define VIBE_TRIANGLEWAVE_H

#include "PeriodicWave.h"

namespace Vibe
{
	/// A class capable of generating Triangle waves.
	class TriangleWave : public PeriodicWave
	{
		public:
			/// Default constructor.
			TriangleWave() = default;

			/// Gets the waveform representation.
			/// \return A container with the samples representing the waveform.
			[[nodiscard]] TSharedPtr(ALshort) Get() const override;
	};
} // Vibe

#endif //VIBE_TRIANGLEWAVE_H
