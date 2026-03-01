#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct NetworkSystemConfig : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "NetworkSystemConfig");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetAppVersion() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_AppVersion"));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetAppVersionStripped() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_AppVersionStripped"));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetBundleVersion() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_BundleVersion"));
            return _method.Call();
        }
        int GetGameMajorVersion() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_GameMajorVersion"));
            return _method.Call();
        }
        int GetGameMinorVersion() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_GameMinorVersion"));
            return _method.Call();
        }
        int GetGameMinorVersion2() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_GameMinorVersion2"));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetGameVersionType() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_GameVersionType"));
            return _method.Call();
        }
        static ::BNM::Structures::Mono::String* GetGameVersionType_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("gameVersionType"));
            return _field.Get();
        }
        static int GetMajorVersion() {
            static BNM::Field<int> _field = GetClass().GetField(O("majorVersion"));
            return _field.Get();
        }
        int GetMaxPlayerCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxPlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetMinorVersion() {
            static BNM::Field<int> _field = GetClass().GetField(O("minorVersion"));
            return _field.Get();
        }
        static int GetMinorVersion2() {
            static BNM::Field<int> _field = GetClass().GetField(O("minorVersion2"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetPrependCode() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("prependCode"));
            return _field.Get();
        }
        static void SetGameVersionType(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("gameVersionType"));
            _field.Set(value);
        }
        static void SetMajorVersion(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("majorVersion"));
            _field.Set(value);
        }
        void SetMaxPlayerCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxPlayerCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetMinorVersion(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("minorVersion"));
            _field.Set(value);
        }
        static void SetMinorVersion2(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("minorVersion2"));
            _field.Set(value);
        }
        static void SetPrependCode(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("prependCode"));
            _field.Set(value);
        }
        static ::BNM::Structures::Mono::String* get_AppVersion() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_AppVersion"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_AppVersionStripped() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_AppVersionStripped"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_BundleVersion() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_BundleVersion"));
            return _m.Call();
        }
        static int get_GameMajorVersion() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_GameMajorVersion"));
            return _m.Call();
        }
        static int get_GameMinorVersion() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_GameMinorVersion"));
            return _m.Call();
        }
        static int get_GameMinorVersion2() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_GameMinorVersion2"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_GameVersionType() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_GameVersionType"));
            return _m.Call();
        }
    };
}
