#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GTDev : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTDev");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* kFormatF = "{{ X: {0:##0.0000}, Y: {1:##0.0000}, Z: {2:##0.0000} }}";
        static constexpr float kDuration = 8.0f;
        int GetDevID() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_DevID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::BNM::Structures::Unity::Color GetGDefaultColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("gDefaultColor"));
            return _field.Get();
        }
        static int GetGDevID() {
            static BNM::Field<int> _field = GetClass().GetField(O("gDevID"));
            return _field.Get();
        }
        static bool GetGHasDevID() {
            static BNM::Field<bool> _field = GetClass().GetField(O("gHasDevID"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetGSphereMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("gSphereMesh"));
            return _field.Get();
        }
        static void SetGDevID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("gDevID"));
            _field.Set(value);
        }
        static void SetGHasDevID(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("gHasDevID"));
            _field.Set(value);
        }
        static void SetGSphereMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("gSphereMesh"));
            _field.Set(value);
        }
        template <typename T>
        static void _Log(::BNM::Structures::Mono::Action<void*, ::BNM::IL2CPP::Il2CppObject*>* log, ::BNM::Structures::Mono::Action<void*>* logNoCtx, T msg, ::BNM::IL2CPP::Il2CppObject* ctx, ::BNM::Structures::Mono::String* channel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_Log"), {"log", "logNoCtx", "msg", "ctx", "channel"});
            _m.Call(log, logNoCtx, msg, ctx, channel);
        }
        static void CallEditorOnly(::BNM::Structures::Mono::Action<>* call) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CallEditorOnly"), {"call"});
            _m.Call(call);
        }
        static int FetchDevID() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("FetchDevID"));
            return _m.Call();
        }
        static int get_DevID() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_DevID"));
            return _m.Call();
        }
        static void InitializeOnLoad() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeOnLoad"));
            _m.Call();
        }
        template <typename T>
        static void Log(T msg, ::BNM::Structures::Mono::String* channel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Log"), {"msg", "channel"});
            _m.Call(msg, channel);
        }
        template <typename T>
        static void Log(T msg, ::BNM::IL2CPP::Il2CppObject* context, ::BNM::Structures::Mono::String* channel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Log"), {"msg", "context", "channel"});
            _m.Call(msg, context, channel);
        }
        template <typename T>
        static void LogBetaOnly(T msg, ::BNM::Structures::Mono::String* channel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogBetaOnly"), {"msg", "channel"});
            _m.Call(msg, channel);
        }
        template <typename T>
        static void LogBetaOnly(T msg, ::BNM::IL2CPP::Il2CppObject* context, ::BNM::Structures::Mono::String* channel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogBetaOnly"), {"msg", "context", "channel"});
            _m.Call(msg, context, channel);
        }
        template <typename T>
        static void LogEditorOnly(T msg, ::BNM::Structures::Mono::String* channel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogEditorOnly"), {"msg", "channel"});
            _m.Call(msg, channel);
        }
        template <typename T>
        static void LogEditorOnly(T msg, ::BNM::IL2CPP::Il2CppObject* context, ::BNM::Structures::Mono::String* channel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogEditorOnly"), {"msg", "context", "channel"});
            _m.Call(msg, context, channel);
        }
        template <typename T>
        static void LogError(T msg, ::BNM::Structures::Mono::String* channel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogError"), {"msg", "channel"});
            _m.Call(msg, channel);
        }
        template <typename T>
        static void LogError(T msg, ::BNM::IL2CPP::Il2CppObject* context, ::BNM::Structures::Mono::String* channel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogError"), {"msg", "context", "channel"});
            _m.Call(msg, context, channel);
        }
        template <typename T>
        static void LogErrorBeta(T msg, ::BNM::Structures::Mono::String* channel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogErrorBeta"), {"msg", "channel"});
            _m.Call(msg, channel);
        }
        template <typename T>
        static void LogErrorBeta(T msg, ::BNM::IL2CPP::Il2CppObject* context, ::BNM::Structures::Mono::String* channel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogErrorBeta"), {"msg", "context", "channel"});
            _m.Call(msg, context, channel);
        }
        template <typename T>
        static void LogErrorEd(T msg, ::BNM::Structures::Mono::String* channel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogErrorEd"), {"msg", "channel"});
            _m.Call(msg, channel);
        }
        template <typename T>
        static void LogErrorEd(T msg, ::BNM::IL2CPP::Il2CppObject* context, ::BNM::Structures::Mono::String* channel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogErrorEd"), {"msg", "context", "channel"});
            _m.Call(msg, context, channel);
        }
        template <typename T>
        static void LogSilent(T msg, ::BNM::Structures::Mono::String* channel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogSilent"), {"msg", "channel"});
            _m.Call(msg, channel);
        }
        template <typename T>
        static void LogSilent(T msg, ::BNM::IL2CPP::Il2CppObject* context, ::BNM::Structures::Mono::String* channel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogSilent"), {"msg", "context", "channel"});
            _m.Call(msg, context, channel);
        }
        template <typename T>
        static void LogWarning(T msg, ::BNM::Structures::Mono::String* channel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogWarning"), {"msg", "channel"});
            _m.Call(msg, channel);
        }
        template <typename T>
        static void LogWarning(T msg, ::BNM::IL2CPP::Il2CppObject* context, ::BNM::Structures::Mono::String* channel) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogWarning"), {"msg", "context", "channel"});
            _m.Call(msg, context, channel);
        }
        static void Ping3D(::Collider* col, ::BNM::Structures::Unity::Color color, float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Ping3D"), {"col", "color", "duration"});
            _m.Call(col, color, duration);
        }
        static void Ping3D(::BNM::Structures::Unity::Vector3 vec, ::BNM::Structures::Unity::Color color, float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Ping3D"), {"vec", "color", "duration"});
            _m.Call(vec, color, duration);
        }
        template <typename T>
        static void Ping3D(T value, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Color color, float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Ping3D"), {"value", "position", "color", "duration"});
            _m.Call(value, position, color, duration);
        }
        static ::BNM::IL2CPP::Il2CppObject* SphereMesh() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("SphereMesh"));
            return _m.Call();
        }
    };
}
