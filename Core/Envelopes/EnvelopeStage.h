//
// Created by matheusvilano on 2023-03-25.
//

#ifndef VIBE_ENVELOPESTAGE_H
#define VIBE_ENVELOPESTAGE_H

#include "../../Utilities/vconcepts.h"
#include "InterpolationType.h"
#include "CalculationType.h"

namespace Vibe
{

	template<typename Number>
	requires VConcepts::IsNumeric<Number>
	struct EnvelopeStage
	{
		/// Length, in seconds (e.g. 1).
		Number Length = 1;
		/// The target value (e.g. 0).
		Number Value = 0;
		/// The interpolation type (e.g. linear).
		EInterpolationType InterpolationType = EInterpolationType::LINEAR;
		/// The calculation type (e.g. relative).
		ECalculationType CalculationType = ECalculationType::RELATIVE;
	};

} // Vibe

#endif //VIBE_ENVELOPESTAGE_H
