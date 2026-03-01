#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GorillaPaintbrawlManager_PaintbrawlStatus.hpp"

namespace Fusion_CodeGen {
    struct ReaderWriter$GorillaPaintbrawlManager__PaintbrawlStatus : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Fusion.CodeGen", "ReaderWriter@GorillaPaintbrawlManager__PaintbrawlStatus");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void* GetInstance() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        static void SetInstance(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        int GetElementHashCode(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus val) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetElementHashCode"), {"val"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(val);
        }
        int GetElementWordCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetElementWordCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void* GetInstance_1() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetInstance"));
            return _m.Call();
        }
        ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus Read(uint8_t* data, int index) {
            static BNM::Method<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> _m = GetClass().GetMethod(O("Read"), {"data", "index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, index);
        }
        ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus& ReadRef(uint8_t* data, int index) {
            static BNM::Method<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus&> _m = GetClass().GetMethod(O("ReadRef"), {"data", "index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, index);
        }
        void Write(uint8_t* data, int index, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus val) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"data", "index", "val"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data, index, val);
        }
    };
}
