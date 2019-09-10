#pragma once
#ifndef PCH
	#include <cstdint>
#endif
#define CKI_BIT(n) (1 << (n))

namespace ara
{
	namespace sec
	{
		namespace crypto
		{
			enum class KeyUsage : uint32_t
			{
				Encrypt		= CKI_BIT(1),
				Decrypt		= CKI_BIT(2),
				Sign		= CKI_BIT(3),
				Verify		= CKI_BIT(4),
				Exchange	= CKI_BIT(5),
				Derive		= CKI_BIT(6),
				Provision	= CKI_BIT(7),
				Migration	= CKI_BIT(8)
			};

			enum class KeyProtection : uint8_t
			{
				External    = CKI_BIT(1),
				Exportable  = CKI_BIT(2),
				Importable  = CKI_BIT(3),
				Unprotected = CKI_BIT(4)
			};

			// See https://safecurves.cr.yp.to/
			enum class KeyType : uint8_t
			{
				Symmetric,
				RSA,
				DH,
				Ecc_NISTp256, // NOT SAFE!
				Ecc_NISTp384, // NOT SAFE!
				Ecc_NISTp521,
				Ecc_Ed25519, // Safe (EdDSA signature scheme using SHA-512 and Curve25519) 
				Ecc_X25519, // Safe (DH function for Curve25519)
				Ecc_Ed448, // Safe (Ed448-Goldilocks)
				Ecc_X448 // Safe (DH function for Ed448-Goldilocks)
			};

			class Key
			{
			public:
				virtual ~Key() = default;

				virtual uint32_t GetId() const = 0;

				virtual KeyUsage GetUsage() const = 0;

				virtual KeyProtection GetProtection() const = 0;

				virtual size_t GetSize() const = 0;

				virtual KeyType GetType() const = 0;
			};
		}
	}
}
