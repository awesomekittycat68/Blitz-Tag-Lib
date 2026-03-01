#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    struct Extensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "Extensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::List<void*>* GetKeysWithNullValue() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("keysWithNullValue"));
            return _field.Get();
        }
        static bool Contains(::BNM::Structures::Mono::Array<int>* target, int nr) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Contains"), {"target", "nr"});
            return _m.Call(target, nr);
        }
        static void Merge(::BNM::IL2CPP::Il2CppObject* target, ::BNM::IL2CPP::Il2CppObject* addHash) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Merge"), {"target", "addHash"});
            _m.Call(target, addHash);
        }
        static void MergeStringKeys(::BNM::IL2CPP::Il2CppObject* target, ::BNM::IL2CPP::Il2CppObject* addHash) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MergeStringKeys"), {"target", "addHash"});
            _m.Call(target, addHash);
        }
        static void StripKeysWithNullValues(::BNM::IL2CPP::Il2CppObject* original) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StripKeysWithNullValues"), {"original"});
            _m.Call(original);
        }
        static void StripKeysWithNullValues(::ExitGames_Client_Photon::Hashtable* original) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StripKeysWithNullValues"), {"original"});
            _m.Call(original);
        }
        static ::ExitGames_Client_Photon::Hashtable* StripToStringKeys(::BNM::IL2CPP::Il2CppObject* original) {
            static BNM::Method<::ExitGames_Client_Photon::Hashtable*> _m = GetClass().GetMethod(O("StripToStringKeys"), {"original"});
            return _m.Call(original);
        }
        static ::ExitGames_Client_Photon::Hashtable* StripToStringKeys(::ExitGames_Client_Photon::Hashtable* original) {
            static BNM::Method<::ExitGames_Client_Photon::Hashtable*> _m = GetClass().GetMethod(O("StripToStringKeys"), {"original"});
            return _m.Call(original);
        }
        static ::BNM::Structures::Mono::String* ToStringFull(::BNM::IL2CPP::Il2CppObject* origin) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToStringFull"), {"origin"});
            return _m.Call(origin);
        }
        template <typename T>
        static ::BNM::Structures::Mono::String* ToStringFull(::BNM::Structures::Mono::List<T>* data) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToStringFull"), {"data"});
            return _m.Call(data);
        }
        static ::BNM::Structures::Mono::String* ToStringFull(::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToStringFull"), {"data"});
            return _m.Call(data);
        }
    };
}
