#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../ExitGames_Client_Photon/SendOptions.hpp"
#include "GTSignal_EmitMode.hpp"

namespace GlobalNamespace {
    struct GTSignal : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTSignal");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t PHOTON_CODE = 186;
        static ::Photon_Realtime::RaiseEventOptions* GetGCustomTargetOptions() {
            static BNM::Field<::Photon_Realtime::RaiseEventOptions*> _field = GetClass().GetField(O("gCustomTargetOptions"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Array<void*>*>* GetGLengthToContentArray() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Array<void*>*>*> _field = GetClass().GetField(O("gLengthToContentArray"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Array<int>*>* GetGLengthToTargetsArray() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Array<int>*>*> _field = GetClass().GetField(O("gLengthToTargetsArray"));
            return _field.Get();
        }
        static ::ExitGames_Client_Photon::SendOptions GetGSendOptions() {
            static BNM::Field<::ExitGames_Client_Photon::SendOptions> _field = GetClass().GetField(O("gSendOptions"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTSignal_EmitMode, ::Photon_Realtime::RaiseEventOptions*>* GetGTargetsToOptions() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTSignal_EmitMode, ::Photon_Realtime::RaiseEventOptions*>*> _field = GetClass().GetField(O("gTargetsToOptions"));
            return _field.Get();
        }
        static void SetGCustomTargetOptions(::Photon_Realtime::RaiseEventOptions* value) {
            static BNM::Field<::Photon_Realtime::RaiseEventOptions*> _field = GetClass().GetField(O("gCustomTargetOptions"));
            _field.Set(value);
        }
        static void SetGLengthToContentArray(::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Array<void*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Array<void*>*>*> _field = GetClass().GetField(O("gLengthToContentArray"));
            _field.Set(value);
        }
        static void SetGLengthToTargetsArray(::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Array<int>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Structures::Mono::Array<int>*>*> _field = GetClass().GetField(O("gLengthToTargetsArray"));
            _field.Set(value);
        }
        static void SetGSendOptions(::ExitGames_Client_Photon::SendOptions value) {
            static BNM::Field<::ExitGames_Client_Photon::SendOptions> _field = GetClass().GetField(O("gSendOptions"));
            _field.Set(value);
        }
        static void SetGTargetsToOptions(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTSignal_EmitMode, ::Photon_Realtime::RaiseEventOptions*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTSignal_EmitMode, ::Photon_Realtime::RaiseEventOptions*>*> _field = GetClass().GetField(O("gTargetsToOptions"));
            _field.Set(value);
        }
        static void _Emit(::GlobalNamespace::GTSignal_EmitMode mode, int signalID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_Emit"), {"mode", "signalID", "data"});
            _m.Call(mode, signalID, data);
        }
        static void _Emit(::BNM::Structures::Mono::Array<int>* targetActors, int signalID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_Emit"), {"targetActors", "signalID", "data"});
            _m.Call(targetActors, signalID, data);
        }
        static ::BNM::Structures::Mono::Array<void*>* _ToEventContent(int signalID, double time, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<::BNM::Structures::Mono::Array<void*>*> _m = GetClass().GetMethod(O("_ToEventContent"), {"signalID", "time", "data"});
            return _m.Call(signalID, time, data);
        }
        static int ComputeID(::BNM::Structures::Mono::String* s) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ComputeID"), {"s"});
            return _m.Call(s);
        }
        static void Emit(::BNM::Structures::Mono::String* signal, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Emit"), {"signal", "data"});
            _m.Call(signal, data);
        }
        static void Emit(int signalID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Emit"), {"signalID", "data"});
            _m.Call(signalID, data);
        }
        static void Emit(::GlobalNamespace::GTSignal_EmitMode mode, ::BNM::Structures::Mono::String* signal, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Emit"), {"mode", "signal", "data"});
            _m.Call(mode, signal, data);
        }
        static void Emit(::GlobalNamespace::GTSignal_EmitMode mode, int signalID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Emit"), {"mode", "signalID", "data"});
            _m.Call(mode, signalID, data);
        }
        static void Emit(int target, int signalID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Emit"), {"target", "signalID", "data"});
            _m.Call(target, signalID, data);
        }
        static void Emit(int target1, int target2, int signalID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Emit"), {"target1", "target2", "signalID", "data"});
            _m.Call(target1, target2, signalID, data);
        }
        static void Emit(int target1, int target2, int target3, int signalID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Emit"), {"target1", "target2", "target3", "signalID", "data"});
            _m.Call(target1, target2, target3, signalID, data);
        }
        static void Emit(int target1, int target2, int target3, int target4, int signalID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Emit"), {"target1", "target2", "target3", "target4", "signalID", "data"});
            _m.Call(target1, target2, target3, target4, signalID, data);
        }
        static void Emit(int target1, int target2, int target3, int target4, int target5, int signalID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Emit"), {"target1", "target2", "target3", "target4", "target5", "signalID", "data"});
            _m.Call(target1, target2, target3, target4, target5, signalID, data);
        }
        static void Emit(int target1, int target2, int target3, int target4, int target5, int target6, int signalID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Emit"), {"target1", "target2", "target3", "target4", "target5", "target6", "signalID", "data"});
            _m.Call(target1, target2, target3, target4, target5, target6, signalID, data);
        }
        static void Emit(int target1, int target2, int target3, int target4, int target5, int target6, int target7, int signalID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Emit"), {"target1", "target2", "target3", "target4", "target5", "target6", "target7", "signalID", "data"});
            _m.Call(target1, target2, target3, target4, target5, target6, target7, signalID, data);
        }
        static void Emit(int target1, int target2, int target3, int target4, int target5, int target6, int target7, int target8, int signalID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Emit"), {"target1", "target2", "target3", "target4", "target5", "target6", "target7", "target8", "signalID", "data"});
            _m.Call(target1, target2, target3, target4, target5, target6, target7, target8, signalID, data);
        }
        static void Emit(int target1, int target2, int target3, int target4, int target5, int target6, int target7, int target8, int target9, int signalID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Emit"), {"target1", "target2", "target3", "target4", "target5", "target6", "target7", "target8", "target9", "signalID", "data"});
            _m.Call(target1, target2, target3, target4, target5, target6, target7, target8, target9, signalID, data);
        }
        static void Emit(int target1, int target2, int target3, int target4, int target5, int target6, int target7, int target8, int target9, int target10, int signalID, ::BNM::Structures::Mono::Array<void*>* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Emit"), {"target1", "target2", "target3", "target4", "target5", "target6", "target7", "target8", "target9", "target10", "signalID", "data"});
            _m.Call(target1, target2, target3, target4, target5, target6, target7, target8, target9, target10, signalID, data);
        }
        static void InitializeOnLoad() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeOnLoad"));
            _m.Call();
        }
    };
}
