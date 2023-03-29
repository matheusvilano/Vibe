//
// Created by matheusvilano on 2023-03-25.
//

#include <cmath>
#include <algorithm>
#include "vconcepts.h"

#ifndef VIBE_VMATH_H
#define VIBE_VMATH_H

namespace VMath
{
	/// Convertz a number in Hertz to Angular Velocity (radians/second).
	/// \param In_Hertz The number in In_Hertz.
	/// \return The number in Angular Velocity (radians/second).
	template<typename T>
	requires VConcepts::IsNumeric<T>
	inline T Angular(const T& In_Hertz)
	{
		return In_Hertz * 2 * M_PI;
	}

	/// Calculates the SineWave of a number.
	/// \param In_Number Angular Velocity (radians/second).
	/// \return The SineWave of the specified number.
	template<typename T>
	requires VConcepts::IsNumeric<T>
	inline T Sin(const T& In_Number)
	{
		return std::sin(In_Number);
	}

	/// Calculates the Arcsine of a number.
	/// \param In_Number Angular Velocity (radians/second).
	/// \return The Arcsine of the specified number.
	template<typename T>
	requires VConcepts::IsNumeric<T>
	inline T Asin(const T& In_Number)
	{
		return std::asin(In_Number);
	}

	/// Runs a Modulus operation.
	/// \tparam T The numeric type.
	/// \param In_Dividend The dividend.
	/// \param In_Divisor The divisor.
	/// \return The result of the Modulus operation.
	template<typename T>
	requires VConcepts::IsNumeric<T>
	inline T Fmod(const T& In_Dividend, const T& In_Divisor)
	{
		return std::fmod(In_Dividend, In_Divisor);
	}

	/// Clamps the specified value to a value in between the specified minimum and maximum values.
	/// \tparam T The numeric type.
	/// \param In_Value The value to clamp.
	/// \param In_Min The minimum value.
	/// \param In_Max The maximum value.
	/// \return The clamped value.
	template<typename T>
	requires VConcepts::IsNumeric<T>
	inline T Clamp(const T& In_Value, const T& In_Min, const T& In_Max)
	{
		return std::clamp(In_Value, In_Min, In_Max);
	}

	/// Returns the highest number.
	/// \tparam T The numeric type.
	/// \param In_X A number.
	/// \param In_Y A number.
	/// \return The highest number.
	template<typename T>
	requires VConcepts::IsNumeric<T>
	inline T Max(const T& In_X, const T& In_Y)
	{
		return std::max(In_X, In_Y);
	}

	/// Returns the lowest number.
	/// \tparam T The numeric type.
	/// \param In_X A number.
	/// \param In_Y A number.
	/// \return The lowest number.
	template<typename T>
	requires VConcepts::IsNumeric<T>
	inline T Min(const T& In_X, const T& In_Y)
	{
		return std::max(In_X, In_Y);
	}
}

#endif //VIBE_VMATH_H
