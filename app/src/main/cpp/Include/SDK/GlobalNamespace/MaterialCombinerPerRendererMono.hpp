#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MaterialCombinerPerRendererInfo.hpp"

namespace GlobalNamespace {
    struct MaterialCombinerPerRendererMono : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MaterialCombinerPerRendererMono");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::MaterialCombinerPerRendererInfo>* GetSlotData() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MaterialCombinerPerRendererInfo>*> _field = GetClass().GetField(O("slotData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSlotData(::BNM::Structures::Mono::List<::GlobalNamespace::MaterialCombinerPerRendererInfo>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::MaterialCombinerPerRendererInfo>*> _field = GetClass().GetField(O("slotData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddEntry(::Renderer* r, int slot, int sliceIndex, ::BNM::Structures::Unity::Color baseColor, ::Material* oldMat) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddEntry"), {"r", "slot", "sliceIndex", "baseColor", "oldMat"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(r, slot, sliceIndex, baseColor, oldMat);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool TryGetData(::Renderer* r, int slot, ::GlobalNamespace::MaterialCombinerPerRendererInfo& data) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetData"), {"r", "slot", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(r, slot, &data);
        }
    };
}
