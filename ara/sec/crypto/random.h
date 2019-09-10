#pragma once
#ifndef PCH
	#include "ara/sec/span.h"
#endif

namespace ara
{
	namespace sec
	{
		namespace crypto
		{
			class Random
			{
			public:
				virtual ~Random() = default;

				virtual void Seed(Span<uint8_t> const& input) = 0;

				virtual void Generate(Span<uint8_t> output) = 0;
			};
		}
	}
}
