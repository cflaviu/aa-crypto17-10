#pragma once
#ifndef PCH
	#include <memory>
	#include <string>
#endif

namespace ara
{
	namespace sec
	{
		namespace crypto
		{
			class Hash;

			class HashFactory
			{
			public:
				using HashPtr = std::unique_ptr<Hash>;

				HashPtr CreateHash(const std::string& hashId);
			};
		}
	}
}
