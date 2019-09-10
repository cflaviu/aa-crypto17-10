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
			enum class AlgorithmFlags
			{
				None,
				Latency,
				Background
			};

			class CipherParameters
			{
			public:
				virtual ~CipherParameters() = default;

				virtual AlgorithmFlags GetFlags() const = 0;

				virtual const Span<uint8_t>& GetNonceIV() const = 0;
			};
		}
	}
}
