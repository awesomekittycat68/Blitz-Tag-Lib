#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SITechTreePageId.hpp"
#include "SIUpgradeType.hpp"

namespace GlobalNamespace {
    struct SIUpgradeSet : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIUpgradeSet");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetBackingBits() {
            static BNM::Field<int> _field = GetClass().GetField(O("backingBits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBackingBits(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("backingBits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Add(::GlobalNamespace::SIUpgradeType upgrade) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"upgrade"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(upgrade);
        }
        void Add(int nodeId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"nodeId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nodeId);
        }
        void Clear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Clear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool Contains(::GlobalNamespace::SIUpgradeType upgrade) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Contains"), {"upgrade"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(upgrade);
        }
        bool ContainsAny(::BNM::Structures::Mono::Array<::GlobalNamespace::SIUpgradeType>* upgrades) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ContainsAny"), {"upgrades"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(upgrades);
        }
        int GetBits() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetBits"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t GetCreateData(::GlobalNamespace::SIPlayer* player) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("GetCreateData"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        ::BNM::Structures::Mono::String* GetString(::GlobalNamespace::SITechTreePageId pageId) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetString"), {"pageId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pageId);
        }
        void Remove(::GlobalNamespace::SIUpgradeType upgrade) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Remove"), {"upgrade"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(upgrade);
        }
        void SetBits(int bits) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBits"), {"bits"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bits);
        }
    };
}
