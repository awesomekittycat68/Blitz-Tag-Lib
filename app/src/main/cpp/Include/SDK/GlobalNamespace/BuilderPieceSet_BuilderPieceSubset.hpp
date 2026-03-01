#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderPieceSet_BuilderPieceCategory.hpp"
#include "BuilderPieceSet_PieceInfo.hpp"

namespace GlobalNamespace {
    struct BuilderPieceSet_BuilderPieceSubset : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderPieceSet").GetInnerClass("BuilderPieceSubset");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::IL2CPP::Il2CppObject* GetLocalizedShelfButtonName() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("localizedShelfButtonName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory GetPieceCategory() {
            static BNM::Field<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory> _field = GetClass().GetField(O("pieceCategory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_PieceInfo>* GetPieceInfos() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_PieceInfo>*> _field = GetClass().GetField(O("pieceInfos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetShelfButtonName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("shelfButtonName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLocalizedShelfButtonName(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("localizedShelfButtonName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPieceCategory(::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory value) {
            static BNM::Field<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory> _field = GetClass().GetField(O("pieceCategory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPieceInfos(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_PieceInfo>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_PieceInfo>*> _field = GetClass().GetField(O("pieceInfos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShelfButtonName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("shelfButtonName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Mono::String* GetShelfButtonName_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetShelfButtonName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
