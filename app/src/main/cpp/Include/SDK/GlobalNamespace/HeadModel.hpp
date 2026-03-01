#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "HeadModel__CosmeticPartLoadInfo.hpp"

namespace GlobalNamespace {
    struct HeadModel : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HeadModel");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::HeadModel__CosmeticPartLoadInfo>* GetCurrentPartLoadInfos() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::HeadModel__CosmeticPartLoadInfo>*> _field = GetClass().GetField(O("_currentPartLoadInfos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<void*, int>* GetLoadOpToPartInfoIndex() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<void*, int>*> _field = GetClass().GetField(O("_loadOp_to_partInfoIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetMannequinRenderer() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("_mannequinRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetCosmetics() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("cosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMannequinRenderer(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("_mannequinRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCosmetics(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("cosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void _AddPreviewCosmetic(::BNM::Structures::Mono::String* playFabId, bool forRightSide) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_AddPreviewCosmetic"), {"playFabId", "forRightSide"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playFabId, forRightSide);
        }
        void _ClearCurrent() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_ClearCurrent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename T>
        void _EnsureCapacityAndClear(::BNM::Structures::Mono::List<T>* list) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_EnsureCapacityAndClear"), {"list"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(list);
        }
        template <typename T1, typename T2>
        void _EnsureCapacityAndClear(::BNM::Structures::Mono::Dictionary<T1, T2>* dict) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_EnsureCapacityAndClear"), {"dict"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dict);
        }
        template <typename TP0 = void*>
        void _HandleLoadOpOnCompleted(TP0 loadOp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_HandleLoadOpOnCompleted"), {"loadOp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(loadOp);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshRenderer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshRenderer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetCosmeticActive(::BNM::Structures::Mono::String* playFabId, bool forRightSide) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCosmeticActive"), {"playFabId", "forRightSide"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playFabId, forRightSide);
        }
        void SetCosmeticActiveArray(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* playFabIds, ::BNM::Structures::Mono::Array<bool>* forRightSideArray) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCosmeticActiveArray"), {"playFabIds", "forRightSideArray"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playFabIds, forRightSideArray);
        }
    };
}
