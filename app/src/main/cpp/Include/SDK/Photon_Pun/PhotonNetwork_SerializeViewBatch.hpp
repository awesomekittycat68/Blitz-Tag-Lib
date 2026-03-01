#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonNetwork_RaiseEventBatch.hpp"

namespace Photon_Pun {
    struct PhotonNetwork_SerializeViewBatch : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun", "PhotonNetwork").GetInnerClass("SerializeViewBatch");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Pun::PhotonNetwork_RaiseEventBatch GetBatch() {
            static BNM::Field<::Photon_Pun::PhotonNetwork_RaiseEventBatch> _field = GetClass().GetField(O("Batch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDefaultSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("defaultSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetObjectUpdates() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("ObjectUpdates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("offset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDefaultSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("defaultSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjectUpdates(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("ObjectUpdates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffset(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("offset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Add(::BNM::Structures::Mono::List<void*>* viewData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Add"), {"viewData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(viewData);
        }
        void Clear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Clear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool Equals_1(::Photon_Pun::PhotonNetwork_SerializeViewBatch* other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        bool Equals_1(::Photon_Pun::PhotonNetwork_RaiseEventBatch other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        template <typename TP0 = void*>
        bool Equals_1(TP0 obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
