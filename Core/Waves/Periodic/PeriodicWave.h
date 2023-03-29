//
// Created by matheusvilano on 2023-03-28.
//

#ifndef VIBE_PERIODICWAVE_H
#define VIBE_PERIODICWAVE_H

#include "../../Data/RangedNumber.h"
#include "../Waveform.h"

namespace Vibe
{
	/// The base class for periodic waves.
	class PeriodicWave : public Waveform
	{
		public:

			/// Default constructor.
			PeriodicWave();

			/// The default `A` note, in hertz.
			RangedNumber<double, 20, 20000> Frequency = 440.0;

			/// The waveform's phase.
			RangedNumber<double, 0, 1> Phase = 0.0;
	};

} // Vibe

#endif //VIBE_PERIODICWAVE_H
