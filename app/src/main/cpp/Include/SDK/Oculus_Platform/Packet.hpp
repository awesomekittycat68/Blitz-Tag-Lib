#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    struct Packet : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "Packet");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        uint64_t GetSenderID() {
            static BNM::Method<uint64_t> _method = GetClass().GetMethod(O("get_SenderID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        uint64_t GetSize() {
            static BNM::Method<uint64_t> _method = GetClass().GetMethod(O("get_Size"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Types::nint GetPacketHandle() {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("packetHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint64_t GetSize_f() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Finalize_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Finalize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        uint64_t get_SenderID() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("get_SenderID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint64_t get_Size() {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("get_Size"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint64_t ReadBytes(::BNM::Structures::Mono::Array<uint8_t>* destination) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ReadBytes"), {"destination"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(destination);
        }
    };
}
