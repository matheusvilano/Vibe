//
// Created by matheusvilano on 2023-03-28.
//

#ifndef VIBE_RANGEDNUMBER_H
#define VIBE_RANGEDNUMBER_H

#include <cstdint>
#include "../../Utilities/vconcepts.h"
#include "../../Utilities/vmath.h"

namespace Vibe
{
	/// Template type
	/// \tparam Type The type of number.
	/// \tparam Min The minimum allowed value.
	/// \tparam Max The maximum allowed value.
	template<typename Type, int64_t Min, int64_t Max>
	requires VConcepts::IsNumeric<Type> && VConcepts::IntegerLessThan<Min, Max>
	class RangedNumber
	{
		public:
			/// Constructs a new RangedNumber object. Used as an implicit conversion, as well.
			/// \param In_Value The number's initial value. This defaults to the specified minimum.
			RangedNumber(const Type& In_Value = Min);

			/// Intentional implicit conversion. Converts the RangedNumber object by returning its current Value.
			/// \return The current Value.
			explicit operator Type() const;

			/// Implicit conversion to number type.
			/// \param In_Value The value to use.
			/// \return The specified value, but as a RangedNumber object.
			RangedNumber<Type, Min, Max>& operator=(const Type& In_Value);

			/// Sygar syntax for getting the current value.
			/// \return The current value.
			Type operator*() const;

			/// Gets the RangedNumber's current value.
			/// \return The RangedNumber with its new value.
			Type Get() const;

			/// Sets the RangedNumber's current value.
			/// \param In_Value
			void Set(const Type& In_Value);

			/// The minimum allowed value.
			static constexpr Type MinValue = Min;

			/// The maximum allowed value.
			static constexpr Type MaxValue = Max;

		private:
			Type Value;
	};

	template<typename Type, int64_t Min, int64_t Max>
	requires VConcepts::IsNumeric<Type> && VConcepts::IntegerLessThan<Min, Max>
	RangedNumber<Type, Min, Max>& RangedNumber<Type, Min, Max>::operator=(const Type& In_Value)
	{
		Value = In_Value;
		return *this;
	}

	template<typename Type, int64_t Min, int64_t Max>
	requires VConcepts::IsNumeric<Type> && VConcepts::IntegerLessThan<Min, Max>
	RangedNumber<Type, Min, Max>::RangedNumber(const Type& In_Value)
	{
		Set(In_Value);
	}

	template<typename Type, int64_t Min, int64_t Max>
	requires VConcepts::IsNumeric<Type> && VConcepts::IntegerLessThan<Min, Max>Type
	RangedNumber<Type, Min, Max>::operator*() const
	{
		return Get();
	}

	template<typename Type, int64_t Min, int64_t Max>
	requires VConcepts::IsNumeric<Type> && VConcepts::IntegerLessThan<Min, Max>
	Type RangedNumber<Type, Min, Max>::Get() const
	{
		return Value;
	}

	template<typename Type, int64_t Min, int64_t Max>
	requires VConcepts::IsNumeric<Type> && VConcepts::IntegerLessThan<Min, Max>
	void RangedNumber<Type, Min, Max>::Set(const Type& In_Value)
	{
		Value = VMath::Clamp(In_Value, MinValue, MaxValue);
	}

	template<typename Type, int64_t Min, int64_t Max>
	requires VConcepts::IsNumeric<Type> && VConcepts::IntegerLessThan<Min, Max>
	RangedNumber<Type, Min, Max>::operator Type() const
	{
		return Get();
	}
} // Vibe

#endif //VIBE_RANGEDNUMBER_H
