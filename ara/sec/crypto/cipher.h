#pragma once
#ifndef PCH
	#include "ara/sec/crypto/keyed_primitive.h"
	#include "ara/sec/span.h"
	#include <cstdint>
#endif

namespace ara
{
	namespace sec
	{
		namespace crypto
		{
			class CipherParameters;

			class Cipher : public KeyedPrimitive
			{
			public:
				virtual void Start(CipherParameters* parameters) = 0;
				
				virtual void Update(Span<const uint8_t> input, Span<uint8_t> output) = 0;
				
				virtual void Finish(Span<uint8_t> output) = 0;

				virtual void Process(CipherParameters* parameters, Span<const uint8_t> input, Span<uint8_t> output) = 0;
			};
		}
	}
}
