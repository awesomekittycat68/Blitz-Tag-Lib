#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CustomMapLoader_$$c__DisplayClass99_1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapLoader").GetInnerClass("<>c__DisplayClass99_1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetInitialLoadAborted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialLoadAborted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLastScene() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLastScene"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStopLoading() {
            static BNM::Field<bool> _field = GetClass().GetField(O("stopLoading"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetInitialLoadAborted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialLoadAborted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLastScene(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLastScene"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStopLoading(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("stopLoading"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
