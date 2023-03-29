//
// Created by matheusvilano on 2023-03-25.
//

#ifndef VIBE_WAVEFORM_H
#define VIBE_WAVEFORM_H

#include "../Object.h"
#include "../../Engine/Engine.h"
#include "../Data/RangedNumber.h"

namespace Vibe
{
	/// The base class for all Waves.
	class Waveform : public Object
	{
		public:
			/// Default constructor.
			Waveform() = default;

			/// Sugar syntax for accessing the waveform representation.
			/// \return A container with the samples representing the waveform.
			[[nodiscard]] virtual TSharedPtr(ALshort) operator()() const;

			/// Generates the waveform representation.
			/// \param In_Phase The initial phase of the waveform.
			/// \return A container with the samples representing the waveform.
			[[nodiscard]] virtual TSharedPtr(ALshort) Get() const = 0;

			/// The gain, as a scalar.
			RangedNumber<double, 0, 1> Volume = 1.0;
	};
} // Vibe

#endif //VIBE_WAVEFORM_H
