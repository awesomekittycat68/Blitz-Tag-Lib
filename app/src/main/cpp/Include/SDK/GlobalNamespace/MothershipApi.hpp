#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MothershipApi : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipApi");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetBASEPATHINVENTORY() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_BASE_PATH_INVENTORY"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetBASEPATHLINK() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_BASE_PATH_LINK"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetBASEPATHMODERATION() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_BASE_PATH_MODERATION"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetBASEPATHPROGRESSION() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_BASE_PATH_PROGRESSION"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetBASEPATHPROGRESSIONTREE() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_BASE_PATH_PROGRESSION_TREE"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetBASEPATHPURCHASE() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_BASE_PATH_PURCHASE"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetBASEPATHSHAREDGROUP() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_BASE_PATH_SHAREDGROUP"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetBASEPATHTITLEDATA() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_BASE_PATH_TITLEDATA"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetBASEPATHUSERDATA() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_BASE_PATH_USERDATA"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetFORMATWRITEEVENTS() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_FORMAT_WRITE_EVENTS"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetMOTHERSHIPACCEPTLANGUAGEHEADER() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_MOTHERSHIP_ACCEPT_LANGUAGE_HEADER"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetMOTHERSHIPAUTOMATIONKEYHEADER() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_MOTHERSHIP_AUTOMATION_KEY_HEADER"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetMOTHERSHIPCLIENTTOKENHEADER() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_MOTHERSHIP_CLIENT_TOKEN_HEADER"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetMOTHERSHIPDEPLOYMENTIDHEADER() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_MOTHERSHIP_DEPLOYMENT_ID_HEADER"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetMOTHERSHIPENTITLEMENTTYPECONSUMABLE() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_MOTHERSHIP_ENTITLEMENT_TYPE_CONSUMABLE"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetMOTHERSHIPENTITLEMENTTYPECONSUMABLELOWSCRUTINY() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_MOTHERSHIP_ENTITLEMENT_TYPE_CONSUMABLE_LOW_SCRUTINY"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetMOTHERSHIPENTITLEMENTTYPECURRENCY() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_MOTHERSHIP_ENTITLEMENT_TYPE_CURRENCY"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetMOTHERSHIPENTITLEMENTTYPECURRENCYLOWSCRUTINY() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_MOTHERSHIP_ENTITLEMENT_TYPE_CURRENCY_LOW_SCRUTINY"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetMOTHERSHIPENTITLEMENTTYPEDURABLE() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_MOTHERSHIP_ENTITLEMENT_TYPE_DURABLE"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetMOTHERSHIPENTITLEMENTTYPEDURABLELOWSCRUTINY() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_MOTHERSHIP_ENTITLEMENT_TYPE_DURABLE_LOW_SCRUTINY"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetMOTHERSHIPENVIDHEADER() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_MOTHERSHIP_ENV_ID_HEADER"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetMOTHERSHIPORGIDHEADER() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_MOTHERSHIP_ORG_ID_HEADER"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetMOTHERSHIPSDKVERSION() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_MOTHERSHIP_SDK_VERSION"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetMOTHERSHIPSDKVERSIONHEADER() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_MOTHERSHIP_SDK_VERSION_HEADER"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetMOTHERSHIPSERVERAPIKEYHEADER() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_MOTHERSHIP_SERVER_API_KEY_HEADER"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetMOTHERSHIPSESSIONIDHEADER() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_MOTHERSHIP_SESSION_ID_HEADER"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetMOTHERSHIPTITLEIDHEADER() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_MOTHERSHIP_TITLE_ID_HEADER"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static int GetRAPIDJSONHASSTDSTRING() {
            static BNM::Field<int> _field = GetClass().GetField(O("RAPIDJSON_HAS_STDSTRING"));
            return _field.Get();
        }
        static float CalculateNextRetryTime(float currentTime, int numRetries) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("CalculateNextRetryTime"), {"currentTime", "numRetries"});
            return _m.Call(currentTime, numRetries);
        }
        static ::BNM::Structures::Mono::String* get_BASE_PATH_INVENTORY() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_BASE_PATH_INVENTORY"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_BASE_PATH_LINK() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_BASE_PATH_LINK"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_BASE_PATH_MODERATION() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_BASE_PATH_MODERATION"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_BASE_PATH_PROGRESSION() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_BASE_PATH_PROGRESSION"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_BASE_PATH_PROGRESSION_TREE() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_BASE_PATH_PROGRESSION_TREE"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_BASE_PATH_PURCHASE() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_BASE_PATH_PURCHASE"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_BASE_PATH_SHAREDGROUP() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_BASE_PATH_SHAREDGROUP"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_BASE_PATH_TITLEDATA() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_BASE_PATH_TITLEDATA"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_BASE_PATH_USERDATA() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_BASE_PATH_USERDATA"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_FORMAT_WRITE_EVENTS() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_FORMAT_WRITE_EVENTS"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_MOTHERSHIP_ACCEPT_LANGUAGE_HEADER() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_MOTHERSHIP_ACCEPT_LANGUAGE_HEADER"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_MOTHERSHIP_AUTOMATION_KEY_HEADER() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_MOTHERSHIP_AUTOMATION_KEY_HEADER"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_MOTHERSHIP_CLIENT_TOKEN_HEADER() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_MOTHERSHIP_CLIENT_TOKEN_HEADER"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_MOTHERSHIP_DEPLOYMENT_ID_HEADER() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_MOTHERSHIP_DEPLOYMENT_ID_HEADER"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_MOTHERSHIP_ENTITLEMENT_TYPE_CONSUMABLE() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_MOTHERSHIP_ENTITLEMENT_TYPE_CONSUMABLE"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_MOTHERSHIP_ENTITLEMENT_TYPE_CONSUMABLE_LOW_SCRUTINY() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_MOTHERSHIP_ENTITLEMENT_TYPE_CONSUMABLE_LOW_SCRUTINY"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_MOTHERSHIP_ENTITLEMENT_TYPE_CURRENCY() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_MOTHERSHIP_ENTITLEMENT_TYPE_CURRENCY"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_MOTHERSHIP_ENTITLEMENT_TYPE_CURRENCY_LOW_SCRUTINY() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_MOTHERSHIP_ENTITLEMENT_TYPE_CURRENCY_LOW_SCRUTINY"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_MOTHERSHIP_ENTITLEMENT_TYPE_DURABLE() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_MOTHERSHIP_ENTITLEMENT_TYPE_DURABLE"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_MOTHERSHIP_ENTITLEMENT_TYPE_DURABLE_LOW_SCRUTINY() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_MOTHERSHIP_ENTITLEMENT_TYPE_DURABLE_LOW_SCRUTINY"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_MOTHERSHIP_ENV_ID_HEADER() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_MOTHERSHIP_ENV_ID_HEADER"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_MOTHERSHIP_ORG_ID_HEADER() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_MOTHERSHIP_ORG_ID_HEADER"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_MOTHERSHIP_SDK_VERSION() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_MOTHERSHIP_SDK_VERSION"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_MOTHERSHIP_SDK_VERSION_HEADER() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_MOTHERSHIP_SDK_VERSION_HEADER"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_MOTHERSHIP_SERVER_API_KEY_HEADER() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_MOTHERSHIP_SERVER_API_KEY_HEADER"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_MOTHERSHIP_SESSION_ID_HEADER() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_MOTHERSHIP_SESSION_ID_HEADER"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_MOTHERSHIP_TITLE_ID_HEADER() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_MOTHERSHIP_TITLE_ID_HEADER"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetCurrentTimeISO8601() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetCurrentTimeISO8601"));
            return _m.Call();
        }
        static bool IsHttpSuccessCode(int status, bool AllowRedirects) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHttpSuccessCode"), {"status", "AllowRedirects"});
            return _m.Call(status, AllowRedirects);
        }
        static bool IsRetryableHttpStatusCode(int status) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsRetryableHttpStatusCode"), {"status"});
            return _m.Call(status);
        }
        static bool ParseForErrorDetails(int status, ::BNM::Structures::Mono::String* errorBody, ::GlobalNamespace::SWIGTYPE_p_std__string* outDetails, ::GlobalNamespace::SWIGTYPE_p_std__string* outMothershipCode, ::GlobalNamespace::SWIGTYPE_p_std__string* outTraceId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ParseForErrorDetails"), {"status", "errorBody", "outDetails", "outMothershipCode", "outTraceId"});
            return _m.Call(status, errorBody, outDetails, outMothershipCode, outTraceId);
        }
        static ::BNM::Structures::Mono::String* ParseForErrorMessage(::BNM::Structures::Mono::String* body) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ParseForErrorMessage"), {"body"});
            return _m.Call(body);
        }
        static bool ParseTags(::GlobalNamespace::SWIGTYPE_p_rapidjson__Value* tagsElement, ::GlobalNamespace::StringVector* tagsVector) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ParseTags"), {"tagsElement", "tagsVector"});
            return _m.Call(tagsElement, tagsVector);
        }
        static bool TryGetComplexPrerequisiteNodeFromVariant(::GlobalNamespace::SWIGTYPE_p_std__variantT_MothershipApiShared__NodeReference_MothershipApiShared__ComplexPrerequisiteNodes_t* variant, ::GlobalNamespace::ComplexPrerequisiteNodes* value) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetComplexPrerequisiteNodeFromVariant"), {"variant", "value"});
            return _m.Call(variant, value);
        }
        static bool TryGetNodeReferenceFromVariant(::GlobalNamespace::SWIGTYPE_p_std__variantT_MothershipApiShared__NodeReference_MothershipApiShared__ComplexPrerequisiteNodes_t* variant, ::GlobalNamespace::NodeReference* value) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetNodeReferenceFromVariant"), {"variant", "value"});
            return _m.Call(variant, value);
        }
    };
}
