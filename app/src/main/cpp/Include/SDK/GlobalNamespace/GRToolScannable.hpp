#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRScannable.hpp"

namespace GlobalNamespace {
    struct GRToolScannable : ::GlobalNamespace::GRScannable {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRToolScannable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData* GetMetadata() {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*> _field = GetClass().GetField(O("metadata"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRTool* GetTool() {
            static BNM::Field<::GlobalNamespace::GRTool*> _field = GetClass().GetField(O("tool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolUpgradePiece* GetUpgradePiece() {
            static BNM::Field<::GlobalNamespace::GRToolUpgradePiece*> _field = GetClass().GetField(O("upgradePiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMetadata(::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData* value) {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*> _field = GetClass().GetField(O("metadata"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTool(::GlobalNamespace::GRTool* value) {
            static BNM::Field<::GlobalNamespace::GRTool*> _field = GetClass().GetField(O("tool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgradePiece(::GlobalNamespace::GRToolUpgradePiece* value) {
            static BNM::Field<::GlobalNamespace::GRToolUpgradePiece*> _field = GetClass().GetField(O("upgradePiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void FetchMetadata(::GlobalNamespace::GhostReactor* reactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FetchMetadata"), {"reactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reactor);
        }
        ::BNM::Structures::Mono::String* GetAnnotationText(::GlobalNamespace::GhostReactor* reactor) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetAnnotationText"), {"reactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(reactor);
        }
        ::BNM::Structures::Mono::String* GetBodyText(::GlobalNamespace::GhostReactor* reactor) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetBodyText"), {"reactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(reactor);
        }
        ::BNM::Structures::Mono::String* GetTitleText(::GlobalNamespace::GhostReactor* reactor) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetTitleText"), {"reactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(reactor);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
