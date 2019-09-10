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
			class Key;

			class KeyDerivation
			{
			public:
				virtual ~KeyDerivation() = default;

				virtual void Derive(Key const& baseKey, Key const& targetKey, Span& label, Span* context = nullptr) = 0;
			};
		}
	}
}
