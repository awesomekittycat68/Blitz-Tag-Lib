#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EAssetReleaseTier.hpp"
#include "ESuperGameModes.hpp"
#include "SITechTreePageId.hpp"

namespace GlobalNamespace {
    struct TechTreeGadgetGraph : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TechTreeGadgetGraph");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float XLayoutStep = 300.0f;
        static constexpr float YLayoutStep = 250.0f;
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GadgetNode*>* GetGadgetNodes() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::GadgetNode*>*> _method = GetClass().GetMethod(O("get_GadgetNodes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsValid() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsValid"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetCostMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("costMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ESuperGameModes GetExcludedGameModes() {
            static BNM::Field<::GlobalNamespace::ESuperGameModes> _field = GetClass().GetField(O("excludedGameModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Sprite* GetIcon() {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("icon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetNickName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("nickName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITechTreePageId GetPageId() {
            static BNM::Field<::GlobalNamespace::SITechTreePageId> _field = GetClass().GetField(O("pageId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::EAssetReleaseTier GetReleaseTier() {
            static BNM::Field<::GlobalNamespace::EAssetReleaseTier> _field = GetClass().GetField(O("releaseTier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCostMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("costMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExcludedGameModes(::GlobalNamespace::ESuperGameModes value) {
            static BNM::Field<::GlobalNamespace::ESuperGameModes> _field = GetClass().GetField(O("excludedGameModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIcon(::Sprite* value) {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("icon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNickName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("nickName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageId(::GlobalNamespace::SITechTreePageId value) {
            static BNM::Field<::GlobalNamespace::SITechTreePageId> _field = GetClass().GetField(O("pageId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReleaseTier(::GlobalNamespace::EAssetReleaseTier value) {
            static BNM::Field<::GlobalNamespace::EAssetReleaseTier> _field = GetClass().GetField(O("releaseTier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GadgetNode*>* get_GadgetNodes() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::GadgetNode*>*> _m = GetClass().GetMethod(O("get_GadgetNodes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsValid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
