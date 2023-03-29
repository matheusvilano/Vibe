//
// Created by matheusvilano on 2023-03-25.
//

#ifndef VIBE_VCONCEPTS_H
#define VIBE_VCONCEPTS_H

#include <concepts>

#define Numeric std::floating_point

namespace VConcepts
{
	/// Checks if the specified type is numeric.
	/// \tparam T The type to check.
	template<typename T>
	concept IsNumeric = std::is_arithmetic_v<T>;

	template<int64_t Min, int64_t Max>
	concept IntegerLessThan = Min < Max;
}

#endif //VIBE_VCONCEPTS_H
