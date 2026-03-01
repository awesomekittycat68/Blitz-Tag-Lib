#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Ionic_Zlib {
    struct StaticTree : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Ionic.Zlib", "StaticTree");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Ionic_Zlib::StaticTree* GetBitLengths() {
            static BNM::Field<::Ionic_Zlib::StaticTree*> _field = GetClass().GetField(O("BitLengths"));
            return _field.Get();
        }
        static ::Ionic_Zlib::StaticTree* GetDistances() {
            static BNM::Field<::Ionic_Zlib::StaticTree*> _field = GetClass().GetField(O("Distances"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int16_t>* GetDistTreeCodes() {
            static BNM::Field<::BNM::Structures::Mono::Array<int16_t>*> _field = GetClass().GetField(O("distTreeCodes"));
            return _field.Get();
        }
        int GetElems() {
            static BNM::Field<int> _field = GetClass().GetField(O("elems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetExtraBase() {
            static BNM::Field<int> _field = GetClass().GetField(O("extraBase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetExtraBits() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("extraBits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int16_t>* GetLengthAndLiteralsTreeCodes() {
            static BNM::Field<::BNM::Structures::Mono::Array<int16_t>*> _field = GetClass().GetField(O("lengthAndLiteralsTreeCodes"));
            return _field.Get();
        }
        static ::Ionic_Zlib::StaticTree* GetLiterals() {
            static BNM::Field<::Ionic_Zlib::StaticTree*> _field = GetClass().GetField(O("Literals"));
            return _field.Get();
        }
        int GetMaxLength() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int16_t>* GetTreeCodes() {
            static BNM::Field<::BNM::Structures::Mono::Array<int16_t>*> _field = GetClass().GetField(O("treeCodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetElems(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("elems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtraBase(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("extraBase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtraBits(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("extraBits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxLength(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTreeCodes(::BNM::Structures::Mono::Array<int16_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int16_t>*> _field = GetClass().GetField(O("treeCodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
