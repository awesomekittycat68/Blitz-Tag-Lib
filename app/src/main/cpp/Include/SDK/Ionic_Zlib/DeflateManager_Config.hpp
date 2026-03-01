#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CompressionLevel.hpp"
#include "DeflateFlavor.hpp"

namespace Ionic_Zlib {
    struct DeflateManager_Config : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Ionic.Zlib", "DeflateManager").GetInnerClass("Config");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Ionic_Zlib::DeflateFlavor GetFlavor() {
            static BNM::Field<::Ionic_Zlib::DeflateFlavor> _field = GetClass().GetField(O("Flavor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGoodLength() {
            static BNM::Field<int> _field = GetClass().GetField(O("GoodLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxChainLength() {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxChainLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxLazy() {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxLazy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNiceLength() {
            static BNM::Field<int> _field = GetClass().GetField(O("NiceLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::Ionic_Zlib::DeflateManager_Config*>* GetTable() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Ionic_Zlib::DeflateManager_Config*>*> _field = GetClass().GetField(O("Table"));
            return _field.Get();
        }
        void SetFlavor(::Ionic_Zlib::DeflateFlavor value) {
            static BNM::Field<::Ionic_Zlib::DeflateFlavor> _field = GetClass().GetField(O("Flavor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGoodLength(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("GoodLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxChainLength(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxChainLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxLazy(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxLazy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNiceLength(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("NiceLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::Ionic_Zlib::DeflateManager_Config* Lookup(::Ionic_Zlib::CompressionLevel level) {
            static BNM::Method<::Ionic_Zlib::DeflateManager_Config*> _m = GetClass().GetMethod(O("Lookup"), {"level"});
            return _m.Call(level);
        }
    };
}
