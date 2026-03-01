#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PhotonUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PhotonUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int ARG_ARRAYS = 16;
        int GetLocalActorNumber() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LocalActorNumber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::NetPlayer* GetLocalNetPlayer() {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _method = GetClass().GetMethod(O("get_LocalNetPlayer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Array<void*>*>* GetGLengthToArgsArray() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Array<void*>*>*> _field = GetClass().GetField(O("gLengthToArgsArray"));
            return _field.Get();
        }
        static ::GlobalNamespace::NetPlayer* GetGLocalNetPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("gLocalNetPlayer"));
            return _field.Get();
        }
        static ::GlobalNamespace::NetworkSystem* GetGNetSystem() {
            static BNM::Field<::GlobalNamespace::NetworkSystem*> _field = GetClass().GetField(O("gNetSystem"));
            return _field.Get();
        }
        static void SetGLocalNetPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("gLocalNetPlayer"));
            _field.Set(value);
        }
        static void SetGNetSystem(::GlobalNamespace::NetworkSystem* value) {
            static BNM::Field<::GlobalNamespace::NetworkSystem*> _field = GetClass().GetField(O("gNetSystem"));
            _field.Set(value);
        }
        template <typename T>
        static T& FetchDelegatesNonAlloc(T delegate) {
            static BNM::Method<T&> _m = GetClass().GetMethod(O("FetchDelegatesNonAlloc"), {"delegate"});
            return _m.Call(delegate);
        }
        static ::BNM::Structures::Mono::Array<void*>* FetchScratchArray(int size) {
            static BNM::Method<::BNM::Structures::Mono::Array<void*>*> _m = GetClass().GetMethod(O("FetchScratchArray"), {"size"});
            return _m.Call(size);
        }
        static int get_LocalActorNumber() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LocalActorNumber"));
            return _m.Call();
        }
        static ::GlobalNamespace::NetPlayer* get_LocalNetPlayer() {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("get_LocalNetPlayer"));
            return _m.Call();
        }
        static ::GlobalNamespace::NetPlayer* GetNetPlayer(int actorNumber) {
            static BNM::Method<::GlobalNamespace::NetPlayer*> _m = GetClass().GetMethod(O("GetNetPlayer"), {"actorNumber"});
            return _m.Call(actorNumber);
        }
        template <typename T1>
        static void ParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ParseArgs"), {"args", "startIndex", "arg1"});
            _m.Call(args, startIndex, &arg1);
        }
        template <typename T1, typename T2>
        static void ParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ParseArgs"), {"args", "startIndex", "arg1", "arg2"});
            _m.Call(args, startIndex, &arg1, &arg2);
        }
        template <typename T1, typename T2, typename T3>
        static void ParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2, T3& arg3) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ParseArgs"), {"args", "startIndex", "arg1", "arg2", "arg3"});
            _m.Call(args, startIndex, &arg1, &arg2, &arg3);
        }
        template <typename T1, typename T2, typename T3, typename T4>
        static void ParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2, T3& arg3, T4& arg4) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ParseArgs"), {"args", "startIndex", "arg1", "arg2", "arg3", "arg4"});
            _m.Call(args, startIndex, &arg1, &arg2, &arg3, &arg4);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5>
        static void ParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2, T3& arg3, T4& arg4, T5& arg5) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ParseArgs"), {"args", "startIndex", "arg1", "arg2", "arg3", "arg4", "arg5"});
            _m.Call(args, startIndex, &arg1, &arg2, &arg3, &arg4, &arg5);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
        static void ParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2, T3& arg3, T4& arg4, T5& arg5, T6& arg6) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ParseArgs"), {"args", "startIndex", "arg1", "arg2", "arg3", "arg4", "arg5", "arg6"});
            _m.Call(args, startIndex, &arg1, &arg2, &arg3, &arg4, &arg5, &arg6);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
        static void ParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2, T3& arg3, T4& arg4, T5& arg5, T6& arg6, T7& arg7) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ParseArgs"), {"args", "startIndex", "arg1", "arg2", "arg3", "arg4", "arg5", "arg6", "arg7"});
            _m.Call(args, startIndex, &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
        static void ParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2, T3& arg3, T4& arg4, T5& arg5, T6& arg6, T7& arg7, T8& arg8) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ParseArgs"), {"args", "startIndex", "arg1", "arg2", "arg3", "arg4", "arg5", "arg6", "arg7", "arg8"});
            _m.Call(args, startIndex, &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7, &arg8);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
        static void ParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2, T3& arg3, T4& arg4, T5& arg5, T6& arg6, T7& arg7, T8& arg8, T9& arg9) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ParseArgs"), {"args", "startIndex", "arg1", "arg2", "arg3", "arg4", "arg5", "arg6", "arg7", "arg8", "arg9"});
            _m.Call(args, startIndex, &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7, &arg8, &arg9);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
        static void ParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2, T3& arg3, T4& arg4, T5& arg5, T6& arg6, T7& arg7, T8& arg8, T9& arg9, T10& arg10) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ParseArgs"), {"args", "startIndex", "arg1", "arg2", "arg3", "arg4", "arg5", "arg6", "arg7", "arg8", "arg9", "arg10"});
            _m.Call(args, startIndex, &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7, &arg8, &arg9, &arg10);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
        static void ParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2, T3& arg3, T4& arg4, T5& arg5, T6& arg6, T7& arg7, T8& arg8, T9& arg9, T10& arg10, T11& arg11) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ParseArgs"), {"args", "startIndex", "arg1", "arg2", "arg3", "arg4", "arg5", "arg6", "arg7", "arg8", "arg9", "arg10", "arg11"});
            _m.Call(args, startIndex, &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7, &arg8, &arg9, &arg10, &arg11);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
        static void ParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2, T3& arg3, T4& arg4, T5& arg5, T6& arg6, T7& arg7, T8& arg8, T9& arg9, T10& arg10, T11& arg11, T12& arg12) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ParseArgs"), {"args", "startIndex", "arg1", "arg2", "arg3", "arg4", "arg5", "arg6", "arg7", "arg8", "arg9", "arg10", "arg11", "arg12"});
            _m.Call(args, startIndex, &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7, &arg8, &arg9, &arg10, &arg11, &arg12);
        }
        static bool TryGetNetSystem(::GlobalNamespace::NetworkSystem*& ns) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetNetSystem"), {"ns"});
            return _m.Call(&ns);
        }
        template <typename T1>
        static bool TryParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryParseArgs"), {"args", "startIndex", "arg1"});
            return _m.Call(args, startIndex, &arg1);
        }
        template <typename T1, typename T2>
        static bool TryParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryParseArgs"), {"args", "startIndex", "arg1", "arg2"});
            return _m.Call(args, startIndex, &arg1, &arg2);
        }
        template <typename T1, typename T2, typename T3>
        static bool TryParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2, T3& arg3) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryParseArgs"), {"args", "startIndex", "arg1", "arg2", "arg3"});
            return _m.Call(args, startIndex, &arg1, &arg2, &arg3);
        }
        template <typename T1, typename T2, typename T3, typename T4>
        static bool TryParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2, T3& arg3, T4& arg4) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryParseArgs"), {"args", "startIndex", "arg1", "arg2", "arg3", "arg4"});
            return _m.Call(args, startIndex, &arg1, &arg2, &arg3, &arg4);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5>
        static bool TryParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2, T3& arg3, T4& arg4, T5& arg5) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryParseArgs"), {"args", "startIndex", "arg1", "arg2", "arg3", "arg4", "arg5"});
            return _m.Call(args, startIndex, &arg1, &arg2, &arg3, &arg4, &arg5);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
        static bool TryParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2, T3& arg3, T4& arg4, T5& arg5, T6& arg6) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryParseArgs"), {"args", "startIndex", "arg1", "arg2", "arg3", "arg4", "arg5", "arg6"});
            return _m.Call(args, startIndex, &arg1, &arg2, &arg3, &arg4, &arg5, &arg6);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
        static bool TryParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2, T3& arg3, T4& arg4, T5& arg5, T6& arg6, T7& arg7) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryParseArgs"), {"args", "startIndex", "arg1", "arg2", "arg3", "arg4", "arg5", "arg6", "arg7"});
            return _m.Call(args, startIndex, &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
        static bool TryParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2, T3& arg3, T4& arg4, T5& arg5, T6& arg6, T7& arg7, T8& arg8) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryParseArgs"), {"args", "startIndex", "arg1", "arg2", "arg3", "arg4", "arg5", "arg6", "arg7", "arg8"});
            return _m.Call(args, startIndex, &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7, &arg8);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
        static bool TryParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2, T3& arg3, T4& arg4, T5& arg5, T6& arg6, T7& arg7, T8& arg8, T9& arg9) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryParseArgs"), {"args", "startIndex", "arg1", "arg2", "arg3", "arg4", "arg5", "arg6", "arg7", "arg8", "arg9"});
            return _m.Call(args, startIndex, &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7, &arg8, &arg9);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
        static bool TryParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2, T3& arg3, T4& arg4, T5& arg5, T6& arg6, T7& arg7, T8& arg8, T9& arg9, T10& arg10) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryParseArgs"), {"args", "startIndex", "arg1", "arg2", "arg3", "arg4", "arg5", "arg6", "arg7", "arg8", "arg9", "arg10"});
            return _m.Call(args, startIndex, &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7, &arg8, &arg9, &arg10);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
        static bool TryParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2, T3& arg3, T4& arg4, T5& arg5, T6& arg6, T7& arg7, T8& arg8, T9& arg9, T10& arg10, T11& arg11) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryParseArgs"), {"args", "startIndex", "arg1", "arg2", "arg3", "arg4", "arg5", "arg6", "arg7", "arg8", "arg9", "arg10", "arg11"});
            return _m.Call(args, startIndex, &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7, &arg8, &arg9, &arg10, &arg11);
        }
        template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
        static bool TryParseArgs(::BNM::Structures::Mono::Array<void*>* args, int startIndex, T1& arg1, T2& arg2, T3& arg3, T4& arg4, T5& arg5, T6& arg6, T7& arg7, T8& arg8, T9& arg9, T10& arg10, T11& arg11, T12& arg12) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryParseArgs"), {"args", "startIndex", "arg1", "arg2", "arg3", "arg4", "arg5", "arg6", "arg7", "arg8", "arg9", "arg10", "arg11", "arg12"});
            return _m.Call(args, startIndex, &arg1, &arg2, &arg3, &arg4, &arg5, &arg6, &arg7, &arg8, &arg9, &arg10, &arg11, &arg12);
        }
    };
}
