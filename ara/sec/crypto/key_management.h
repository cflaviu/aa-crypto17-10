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
			class Key;
			class Random;

			class KeyManagement
			{
			public:
				virtual ~KeyManagement() = default;

				virtual Key const& GetKey(uint32_t id) = 0;

				virtual void Generate(Key const& targetKey, Random* random = nullptr) = 0;

				virtual bool Verify(Key const& key, Span const& data) const = 0;

				virtual void Import(Key const& targetKey, Key const& provisioningKey, Span const& data);

				virtual void Export(Key const& sourceKey, Key const& migrationKey, Span& data);
			};
		}
	}
}
