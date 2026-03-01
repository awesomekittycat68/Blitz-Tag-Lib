#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SaveTextureFileFormat.hpp"

namespace GlobalNamespace {
    struct TextureUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TextureUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void* CalcAverageColor(::Texture2D* tex) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("CalcAverageColor"), {"tex"});
            return _m.Call(tex);
        }
        static ::Texture2D* CreateCopy(::Texture2D* tex) {
            static BNM::Method<::Texture2D*> _m = GetClass().GetMethod(O("CreateCopy"), {"tex"});
            return _m.Call(tex);
        }
        static ::BNM::Structures::Unity::Vector4 GetTexelSize(::BNM::IL2CPP::Il2CppObject* tex) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("GetTexelSize"), {"tex"});
            return _m.Call(tex);
        }
        static void SaveToFile(::BNM::IL2CPP::Il2CppObject* source, ::BNM::Structures::Mono::String* filePath, int width, int height, ::GlobalNamespace::SaveTextureFileFormat fileFormat, int jpgQuality, bool asynchronous, ::BNM::Structures::Mono::Action<bool>* done) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveToFile"), {"source", "filePath", "width", "height", "fileFormat", "jpgQuality", "asynchronous", "done"});
            _m.Call(source, filePath, width, height, fileFormat, jpgQuality, asynchronous, done);
        }
    };
}
