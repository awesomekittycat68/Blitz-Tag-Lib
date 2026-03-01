#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GTVertexDataStreams_Descriptors : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTVertexDataStreams_Descriptors");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void* GetColor() {
            static BNM::Field<void*> _field = GetClass().GetField(O("color"));
            return _field.Get();
        }
        static void* GetLightmapUv() {
            static BNM::Field<void*> _field = GetClass().GetField(O("lightmapUv"));
            return _field.Get();
        }
        static void* GetNormal() {
            static BNM::Field<void*> _field = GetClass().GetField(O("normal"));
            return _field.Get();
        }
        static void* GetPosition() {
            static BNM::Field<void*> _field = GetClass().GetField(O("position"));
            return _field.Get();
        }
        static void* GetTangent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("tangent"));
            return _field.Get();
        }
        static void* GetUv1() {
            static BNM::Field<void*> _field = GetClass().GetField(O("uv1"));
            return _field.Get();
        }
        static void DoSetVertexBufferParams(void*& writeData, int totalVertexCount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DoSetVertexBufferParams"), {"writeData", "totalVertexCount"});
            _m.Call(&writeData, totalVertexCount);
        }
    };
}
