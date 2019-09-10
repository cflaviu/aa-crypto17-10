#ifndef PCH
	#include <vector>
#endif

namespace ara 
{
	namespace sec
	{
		namespace crypto
		{
			class ClientServerOperation;
			class ApplicationError;

			using ClientServerOperationArray = std::vector<ClientServerOperation>;
			using ApplicationErrorArray = std::vector<ApplicationError>;

			class ClientServerInterface
			{
			public:
				ClientServerOperationArray& operation();
				ApplicationErrorArray possibleError();
			};

			class CryptoKeySlot;
			class CryptoPrimitive;

			class CryptoJob
			{
			public:
				CryptoKeySlot* cryptoKey();
				CryptoPrimitive primitive();
			};

			using String = std::string;

			class CryptoNeed
			{
			public:
				String primitiveFamily();
			};


			class PortInterface;
			class ClientServerAnnotation;
			class DelegatedPortAnnotation;
			class IoHwAbstractionServerAnnotation;
			class ModePortAnnotation;
			class NvDataPortAnnotation;
			class ParameterPortAnnotation;
			class PortPrototypeProps;
			class SenderReceiverAnnotation;
			class TriggerPortAnnotation;

			using ClientServerAnnotationArray = std::vector<ClientServerAnnotation>;
			using IoHwAbstractionServerAnnotationArray = std::vector<IoHwAbstractionServerAnnotation>;
			using ModePortAnnotationArray = std::vector<ModePortAnnotation>;
			using NvDataPortAnnotationArray = std::vector<NvDataPortAnnotation>;
			using ParameterPortAnnotationArray = std::vector<ParameterPortAnnotation>;
			using SenderReceiverAnnotationArray = std::vector<SenderReceiverAnnotation>;
			using TriggerPortAnnotationArray = std::vector<TriggerPortAnnotation>;

			// abstract
			class PortPrototype
			{
			public:
				PortInterface& requiredInterface();

				ClientServerAnnotationArray& clientServerAnnotation();

				DelegatedPortAnnotation* delegatedPortAnnotation();

				IoHwAbstractionServerAnnotationArray& ioHwAbstractionServerAnnotation();

				ModePortAnnotationArray& modePortAnnotation();

				NvDataPortAnnotationArray& nvDataPortAnnotation();

				PortPrototypeProps* portPrototypeProps();

				SenderReceiverAnnotationArray& senderReceiverAnnotation();

				TriggerPortAnnotationArray& triggerPortAnnotation();
			};

			class PortInterface;

			// abstract
			class RPortPrototype
			{
			public:
				PortInterface requiredInterface();
			};

			class Identifier;
			class ShortNameFragment;

			// abstract
			class Referrable
			{
			public:
				Identifier& shortName();
				ShortNameFragment* shortNameFragment();
			};
		}
	}
}
