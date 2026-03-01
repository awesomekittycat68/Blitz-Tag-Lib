#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    struct ByteArraySlicePool : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "ByteArraySlicePool");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetAllocationCounter() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_AllocationCounter"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetMinStackIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_MinStackIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMinStackIndex(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MinStackIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetAllocationCounter_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("allocationCounter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMinStackIndex_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("minStackIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetPoolTiers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("poolTiers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllocationCounter(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("allocationCounter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinStackIndex_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("minStackIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::ExitGames_Client_Photon::ByteArraySlice* Acquire(int minByteCount) {
            static BNM::Method<::ExitGames_Client_Photon::ByteArraySlice*> _m = GetClass().GetMethod(O("Acquire"), {"minByteCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(minByteCount);
        }
        ::ExitGames_Client_Photon::ByteArraySlice* Acquire(::BNM::Structures::Mono::Array<uint8_t>* buffer, int offset, int count) {
            static BNM::Method<::ExitGames_Client_Photon::ByteArraySlice*> _m = GetClass().GetMethod(O("Acquire"), {"buffer", "offset", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buffer, offset, count);
        }
        void ClearPools(int lower, int upper) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearPools"), {"lower", "upper"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(lower, upper);
        }
        int get_AllocationCounter() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_AllocationCounter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_MinStackIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_MinStackIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        ::ExitGames_Client_Photon::ByteArraySlice* PopOrCreate(TP0 stack, int stackIndex) {
            static BNM::Method<::ExitGames_Client_Photon::ByteArraySlice*> _m = GetClass().GetMethod(O("PopOrCreate"), {"stack", "stackIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stack, stackIndex);
        }
        bool Release(::ExitGames_Client_Photon::ByteArraySlice* slice, int stackIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Release"), {"slice", "stackIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(slice, stackIndex);
        }
        void set_MinStackIndex(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MinStackIndex"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
