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

			class Verifier : public KeyedPrimitive
			{
			public:
				virtual void Start(CipherParameters* parameters) = 0;

				virtual void Update(Span<const uint8_t> input) = 0;

				virtual bool Finish(Span<const uint8_t> authenticator, size_t length = 0) = 0;

				virtual bool Process(CipherParameters* parameters, Span<const uint8_t> input, Span<const uint8_t> authenticator, size_t length = 0) = 0;
			};
		}
	}
}
