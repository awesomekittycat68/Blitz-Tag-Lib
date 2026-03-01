#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CustomMapsGalleryView : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapsGalleryView");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::CustomMapsModTile*>* GetModTiles() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CustomMapsModTile*>*> _field = GetClass().GetField(O("modTiles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetModTiles(::BNM::Structures::Mono::List<::GlobalNamespace::CustomMapsModTile*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CustomMapsModTile*>*> _field = GetClass().GetField(O("modTiles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool DisplayGallery(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* mods, bool useMapName, ::BNM::Structures::Mono::String*& error) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DisplayGallery"), {"mods", "useMapName", "error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(mods, useMapName, &error);
        }
        void HighlightTileAtIndex(int tileIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HighlightTileAtIndex"), {"tileIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tileIndex);
        }
        void ResetGallery() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetGallery"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ShowDetailsForEntry(int entryIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowDetailsForEntry"), {"entryIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entryIndex);
        }
        void ShowTileText(bool show, bool useMapName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowTileText"), {"show", "useMapName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(show, useMapName);
        }
    };
}
