#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TransferrableObject_ItemStates.hpp"
#include "TransferrableObject_PositionState.hpp"

namespace GlobalNamespace {
    struct WorldShareableItem_CachedData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "WorldShareableItem").GetInnerClass("CachedData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::TransferrableObject_ItemStates GetCachedTransferableObjectItemState() {
            static BNM::Field<::GlobalNamespace::TransferrableObject_ItemStates> _field = GetClass().GetField(O("cachedTransferableObjectItemState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TransferrableObject_PositionState GetCachedTransferableObjectState() {
            static BNM::Field<::GlobalNamespace::TransferrableObject_PositionState> _field = GetClass().GetField(O("cachedTransferableObjectState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCachedTransferableObjectItemState(::GlobalNamespace::TransferrableObject_ItemStates value) {
            static BNM::Field<::GlobalNamespace::TransferrableObject_ItemStates> _field = GetClass().GetField(O("cachedTransferableObjectItemState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedTransferableObjectState(::GlobalNamespace::TransferrableObject_PositionState value) {
            static BNM::Field<::GlobalNamespace::TransferrableObject_PositionState> _field = GetClass().GetField(O("cachedTransferableObjectState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
