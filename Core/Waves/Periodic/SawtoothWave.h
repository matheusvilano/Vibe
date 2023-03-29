//
// Created by matheusvilano on 2023-03-25.
//

#ifndef VIBE_SAWTOOTHWAVE_H
#define VIBE_SAWTOOTHWAVE_H

#include "PeriodicWave.h"

namespace Vibe
{
	/// A class capable of generating Sawtooth waves.
	class SawtoothWave : public PeriodicWave
	{
		public:
			/// Default constructor.
			SawtoothWave();

			/// Gets the waveform representation.
			/// \return A container with the samples representing the waveform.
			[[nodiscard]] TSharedPtr(ALshort) Get() const override;
	};
} // Vibe

#endif //VIBE_SAWTOOTHWAVE_H
