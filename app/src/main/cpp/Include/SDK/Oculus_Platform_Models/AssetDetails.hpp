#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform_Models {
    struct AssetDetails : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "AssetDetails");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        uint64_t GetAssetId() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("AssetId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetAssetType() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AssetType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDownloadStatus() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DownloadStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFilepath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Filepath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetIapStatus() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("IapStatus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform_Models::LanguagePackInfo* GetLanguage() {
            static BNM::Field<::Oculus_Platform_Models::LanguagePackInfo*> _field = GetClass().GetField(O("Language"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform_Models::LanguagePackInfo* GetLanguageOptional() {
            static BNM::Field<::Oculus_Platform_Models::LanguagePackInfo*> _field = GetClass().GetField(O("LanguageOptional"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMetadata() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Metadata"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
