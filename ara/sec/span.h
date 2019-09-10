#pragma once
#ifndef PCH
	#include <cstdint>
#endif

namespace ara
{
	namespace sec
	{
		template <typename T>
		class span
		{
		public:
			~span() = default;

			using pointer = element_type*;
			using reference = element_type&;

			constexpr span<element_type, dynamic_extent> first(index_type count) const;

			constexpr span<element_type, dynamic_extent> subspan(index_type offset, index_type count = dynamic_extent) const;

			constexpr index_type length() const;

			constexpr index_type size() const;

			constexpr index_type length_bytes() const;

			constexpr index_type size_bytes() const;

			constexpr bool empty() const;

			constexpr reference at(index_type idx) const;

			constexpr reference operator[](index_type idx) const;

			constexpr pointer data() const;

			iterator begin() const;

			iterator end() const;

			const_iterator cbegin() const;

			const_iterator cend() const;

			reverse_iterator rbegin() const;

			reverse_iterator rend() const;

			const_reverse_iterator crbegin() const;

			const_reverse_iterator crend() const;
		};

		template <typename T = uint8_t>
		using Span = span<T>;
	}
}
