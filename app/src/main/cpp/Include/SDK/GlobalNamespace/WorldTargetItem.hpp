#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct WorldTargetItem : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "WorldTargetItem");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetItemIdx() {
            static BNM::Field<int> _field = GetClass().GetField(O("itemIdx"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetOwner() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("owner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTargetObject() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("targetObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TransferrableObject* GetTransferrableObject() {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("transferrableObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::WorldTargetItem* GenerateTargetFromPlayerAndID(::GlobalNamespace::NetPlayer* owner, int itemIdx) {
            static BNM::Method<::GlobalNamespace::WorldTargetItem*> _m = GetClass().GetMethod(O("GenerateTargetFromPlayerAndID"), {"owner", "itemIdx"});
            return _m.Call(owner, itemIdx);
        }
        static ::GlobalNamespace::WorldTargetItem* GenerateTargetFromWorldSharableItem(::GlobalNamespace::NetPlayer* owner, int itemIdx, ::Transform* transform) {
            static BNM::Method<::GlobalNamespace::WorldTargetItem*> _m = GetClass().GetMethod(O("GenerateTargetFromWorldSharableItem"), {"owner", "itemIdx", "transform"});
            return _m.Call(owner, itemIdx, transform);
        }
        bool IsValid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
