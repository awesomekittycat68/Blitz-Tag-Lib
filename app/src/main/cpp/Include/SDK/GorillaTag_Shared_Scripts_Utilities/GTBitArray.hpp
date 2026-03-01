#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Shared_Scripts_Utilities {
    struct GTBitArray : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Shared.Scripts.Utilities", "GTBitArray");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetItem() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Item"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetItem(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Item"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<uint32_t>* GetData() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint32_t>*> _field = GetClass().GetField(O("_data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLength() {
            static BNM::Field<int> _field = GetClass().GetField(O("Length"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void Clear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Clear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyFrom(::GorillaTag_Shared_Scripts_Utilities::GTBitArray* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyFrom"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        bool get_Item(int idx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Item"), {"idx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(idx);
        }
        void set_Item(int idx, bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Item"), {"idx", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(idx, value);
        }
    };
}
