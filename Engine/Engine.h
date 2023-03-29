//
// Created by matheusvilano on 2023-03-26.
//

#ifndef VIBE_ENGINE_H
#define VIBE_ENGINE_H

#include "../Utilities/vtypes.h"
#include "../Utilities/vdefaults.h"

namespace Vibe
{
	class Engine
	{
		public:
			/// Gets the current Sample Rate.
			/// \return The current Sample Rate.
			static uint16_t GetSampleRate();

		private:
			/// The current Sample Rate.
			static uint16_t SampleRate;

	};
} // Vibe

#endif //VIBE_ENGINE_H
