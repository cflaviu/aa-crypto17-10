#pragma once
#ifndef PCH
	#include "ara/sec/span.h"
	#include <cstdint>
#endif

namespace ara
{
	namespace sec
	{
		namespace crypto
		{
			enum AlgorithmFlags;

			class Hash
			{
			public:
				virtual ~Hash() = default;

				virtual AlgorithmFlags GetFlags() const = 0;

				virtual void Start() = 0;

				virtual void Update(Span<const uint8_t> input) = 0;

				virtual void Finish(Span<uint8_t> digest) = 0;

				virtual void Process(Span<const uint8_t> input, Span<uint8_t> digest) = 0;
			};
		}
	}
}
