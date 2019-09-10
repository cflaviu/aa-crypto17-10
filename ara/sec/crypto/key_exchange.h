#pragma once
#ifndef PCH
	#include "ara/sec/crypto/keyed_primitive.h"
	#include "ara/sec/span.h"
#endif

namespace ara
{
	namespace sec
	{
		namespace crypto
		{
			class KeyExchange : public KeyedPrimitive
			{
			public:
				virtual void GetPublicValue(Span<uint8_t> pubValue) = 0;

				virtual void Exchange(Span const& ourPubVal, Span const& theirPubVal, Key const& sharedKey) = 0;
			};
		}
	}
}
