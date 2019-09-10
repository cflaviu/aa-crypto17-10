#pragma once
#ifndef PCH

#endif

namespace ara
{
	namespace sec
	{
		namespace crypto
		{
			class Key;

			class KeyedPrimitive
			{
			public:
				virtual ~KeyedPrimitive() = default;

				virtual const Key& GetKey() const = 0;
			};
		}
	}
}
