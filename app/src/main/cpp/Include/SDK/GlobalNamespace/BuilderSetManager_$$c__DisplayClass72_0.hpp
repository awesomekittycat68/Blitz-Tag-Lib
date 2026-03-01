#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderSetManager_BuilderSetStoreItem.hpp"

namespace GlobalNamespace {
    struct BuilderSetManager_$$c__DisplayClass72_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderSetManager").GetInnerClass("<>c__DisplayClass72_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<bool>* GetResultCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("resultCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSetID() {
            static BNM::Field<int> _field = GetClass().GetField(O("setID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem GetStoreItem() {
            static BNM::Field<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem> _field = GetClass().GetField(O("storeItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetResultCallback(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("resultCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("setID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStoreItem(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem value) {
            static BNM::Field<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem> _field = GetClass().GetField(O("storeItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
