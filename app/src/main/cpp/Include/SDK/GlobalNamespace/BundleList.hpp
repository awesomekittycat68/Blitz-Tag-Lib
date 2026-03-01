#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BundleData.hpp"

namespace GlobalNamespace {
    struct BundleList : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BundleList");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetActiveBundleIdx() {
            static BNM::Field<int> _field = GetClass().GetField(O("activeBundleIdx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::BundleData>* GetData() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::BundleData>*> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActiveBundleIdx(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("activeBundleIdx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetData(::BNM::Structures::Mono::Array<::GlobalNamespace::BundleData>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::BundleData>*> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::BundleData ActiveBundle() {
            static BNM::Method<::GlobalNamespace::BundleData> _m = GetClass().GetMethod(O("ActiveBundle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void FromJson(::BNM::Structures::Mono::String* jsonString) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FromJson"), {"jsonString"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(jsonString);
        }
        bool HasSku(::BNM::Structures::Mono::String* skuName, int& idx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasSku"), {"skuName", "idx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(skuName, &idx);
        }
    };
}
