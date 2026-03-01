#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    struct SupportClass : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "SupportClass");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Array<uint32_t>* GetCrcLookupTable() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint32_t>*> _field = GetClass().GetField(O("crcLookupTable"));
            return _field.Get();
        }
        static ::ExitGames_Client_Photon::SupportClass_IntegerMillisecondsDelegate* GetIntegerMilliseconds() {
            static BNM::Field<::ExitGames_Client_Photon::SupportClass_IntegerMillisecondsDelegate*> _field = GetClass().GetField(O("IntegerMilliseconds"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetThreadList() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("threadList"));
            return _field.Get();
        }
        static void* GetThreadListLock() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ThreadListLock"));
            return _field.Get();
        }
        static void SetCrcLookupTable(::BNM::Structures::Mono::Array<uint32_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint32_t>*> _field = GetClass().GetField(O("crcLookupTable"));
            _field.Set(value);
        }
        static void SetIntegerMilliseconds(::ExitGames_Client_Photon::SupportClass_IntegerMillisecondsDelegate* value) {
            static BNM::Field<::ExitGames_Client_Photon::SupportClass_IntegerMillisecondsDelegate*> _field = GetClass().GetField(O("IntegerMilliseconds"));
            _field.Set(value);
        }
        static void SetThreadList(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("threadList"));
            _field.Set(value);
        }
        static ::BNM::Structures::Mono::String* ByteArrayToString(::BNM::Structures::Mono::Array<uint8_t>* list, int length) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ByteArrayToString"), {"list", "length"});
            return _m.Call(list, length);
        }
        static uint32_t CalculateCrc(::BNM::Structures::Mono::Array<uint8_t>* buffer, int length) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("CalculateCrc"), {"buffer", "length"});
            return _m.Call(buffer, length);
        }
        static ::BNM::Structures::Mono::String* DictionaryToString(::BNM::IL2CPP::Il2CppObject* dictionary, bool includeTypes) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("DictionaryToString"), {"dictionary", "includeTypes"});
            return _m.Call(dictionary, includeTypes);
        }
        static ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetMethods(::BNM::MonoType* type, ::BNM::MonoType* attribute) {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("GetMethods"), {"type", "attribute"});
            return _m.Call(type, attribute);
        }
        static int GetTickCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetTickCount"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* HashtableToString(::ExitGames_Client_Photon::Hashtable* hash) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("HashtableToString"), {"hash"});
            return _m.Call(hash);
        }
        static ::BNM::Structures::Mono::Array<uint32_t>* InitializeTable(uint32_t polynomial) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint32_t>*> _m = GetClass().GetMethod(O("InitializeTable"), {"polynomial"});
            return _m.Call(polynomial);
        }
        static uint8_t StartBackgroundCalls(::BNM::Structures::Mono::Func<bool>* myThread, int millisecondsInterval, ::BNM::Structures::Mono::String* taskName) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("StartBackgroundCalls"), {"myThread", "millisecondsInterval", "taskName"});
            return _m.Call(myThread, millisecondsInterval, taskName);
        }
        static bool StopAllBackgroundCalls() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("StopAllBackgroundCalls"));
            return _m.Call();
        }
        static bool StopBackgroundCalls(uint8_t id) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("StopBackgroundCalls"), {"id"});
            return _m.Call(id);
        }
        static void WriteStackTrace(::BNM::IL2CPP::Il2CppObject* throwable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteStackTrace"), {"throwable"});
            _m.Call(throwable);
        }
        static void WriteStackTrace(::BNM::IL2CPP::Il2CppObject* throwable, ::BNM::IL2CPP::Il2CppObject* stream) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteStackTrace"), {"throwable", "stream"});
            _m.Call(throwable, stream);
        }
    };
}
