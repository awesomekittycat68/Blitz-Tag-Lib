#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FusionGameModeData.hpp"
#include "PaintbrawlData.hpp"

namespace GlobalNamespace {
    struct BattleGameModeData : ::GlobalNamespace::FusionGameModeData {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BattleGameModeData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::PaintbrawlData GetPaintbrawlData() {
            static BNM::Method<::GlobalNamespace::PaintbrawlData> _method = GetClass().GetMethod(O("get_PaintbrawlData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPaintbrawlData(::GlobalNamespace::PaintbrawlData value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PaintbrawlData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::PaintbrawlData GetPaintbrawlData_f() {
            static BNM::Field<::GlobalNamespace::PaintbrawlData> _field = GetClass().GetField(O("_PaintbrawlData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPaintbrawlManager* GetBattleTarget() {
            static BNM::Field<::GlobalNamespace::GorillaPaintbrawlManager*> _field = GetClass().GetField(O("battleTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameModeSerializer* GetSerializer() {
            static BNM::Field<::GlobalNamespace::GameModeSerializer*> _field = GetClass().GetField(O("serializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPaintbrawlData_fs(::GlobalNamespace::PaintbrawlData value) {
            static BNM::Field<::GlobalNamespace::PaintbrawlData> _field = GetClass().GetField(O("_PaintbrawlData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBattleTarget(::GlobalNamespace::GorillaPaintbrawlManager* value) {
            static BNM::Field<::GlobalNamespace::GorillaPaintbrawlManager*> _field = GetClass().GetField(O("battleTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializer(::GlobalNamespace::GameModeSerializer* value) {
            static BNM::Field<::GlobalNamespace::GameModeSerializer*> _field = GetClass().GetField(O("serializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CopyBackingFieldsToState(bool ) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyBackingFieldsToState"), {""});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyStateToBackingFields() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyStateToBackingFields"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void* get_Data() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Data"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::PaintbrawlData get_PaintbrawlData() {
            static BNM::Method<::GlobalNamespace::PaintbrawlData> _m = GetClass().GetMethod(O("get_PaintbrawlData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP3 = void*>
        void RPC_ReportSlinshotHit(int taggedPlayerID, ::BNM::Structures::Unity::Vector3 hitLocation, int projectileCount, TP3 rpcInfo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_ReportSlinshotHit"), {"taggedPlayerID", "hitLocation", "projectileCount", "rpcInfo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayerID, hitLocation, projectileCount, rpcInfo);
        }
        static void RPC_ReportSlinshotHit$Invoker(::BNM::IL2CPP::Il2CppObject* behaviour, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_ReportSlinshotHit@Invoker"), {"behaviour", "message"});
            _m.Call(behaviour, message);
        }
        template <typename TP0 = void*>
        void set_Data(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Data"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PaintbrawlData(::GlobalNamespace::PaintbrawlData value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PaintbrawlData"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Spawned() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Spawned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
