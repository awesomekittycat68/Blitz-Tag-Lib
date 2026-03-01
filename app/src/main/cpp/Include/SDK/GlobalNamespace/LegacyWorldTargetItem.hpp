#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LegacyWorldTargetItem : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LegacyWorldTargetItem");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetItemIdx() {
            static BNM::Field<int> _field = GetClass().GetField(O("itemIdx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::Player* GetOwner() {
            static BNM::Field<::Photon_Realtime::Player*> _field = GetClass().GetField(O("owner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetItemIdx(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("itemIdx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOwner(::Photon_Realtime::Player* value) {
            static BNM::Field<::Photon_Realtime::Player*> _field = GetClass().GetField(O("owner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Invalidate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invalidate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsValid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
