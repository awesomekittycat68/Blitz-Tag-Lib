#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ArrayMetadata.hpp"
#include "ObjectMetadata.hpp"
#include "PropertyMetadata.hpp"

namespace LitJson {
    struct JsonMapper : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("LitJson", "JsonMapper");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void* GetArrayMetadata() {
            static BNM::Field<void*> _field = GetClass().GetField(O("array_metadata"));
            return _field.Get();
        }
        static void* GetArrayMetadataLock() {
            static BNM::Field<void*> _field = GetClass().GetField(O("array_metadata_lock"));
            return _field.Get();
        }
        static void* GetBaseExportersTable() {
            static BNM::Field<void*> _field = GetClass().GetField(O("base_exporters_table"));
            return _field.Get();
        }
        static void* GetBaseImportersTable() {
            static BNM::Field<void*> _field = GetClass().GetField(O("base_importers_table"));
            return _field.Get();
        }
        static void* GetConvOps() {
            static BNM::Field<void*> _field = GetClass().GetField(O("conv_ops"));
            return _field.Get();
        }
        static void* GetConvOpsLock() {
            static BNM::Field<void*> _field = GetClass().GetField(O("conv_ops_lock"));
            return _field.Get();
        }
        static void* GetCustomExportersTable() {
            static BNM::Field<void*> _field = GetClass().GetField(O("custom_exporters_table"));
            return _field.Get();
        }
        static void* GetCustomImportersTable() {
            static BNM::Field<void*> _field = GetClass().GetField(O("custom_importers_table"));
            return _field.Get();
        }
        static void* GetDatetimeFormat() {
            static BNM::Field<void*> _field = GetClass().GetField(O("datetime_format"));
            return _field.Get();
        }
        static int GetMaxNestingDepth() {
            static BNM::Field<int> _field = GetClass().GetField(O("max_nesting_depth"));
            return _field.Get();
        }
        static void* GetObjectMetadata() {
            static BNM::Field<void*> _field = GetClass().GetField(O("object_metadata"));
            return _field.Get();
        }
        static void* GetObjectMetadataLock() {
            static BNM::Field<void*> _field = GetClass().GetField(O("object_metadata_lock"));
            return _field.Get();
        }
        static ::LitJson::JsonWriter* GetStaticWriter() {
            static BNM::Field<::LitJson::JsonWriter*> _field = GetClass().GetField(O("static_writer"));
            return _field.Get();
        }
        static void* GetStaticWriterLock() {
            static BNM::Field<void*> _field = GetClass().GetField(O("static_writer_lock"));
            return _field.Get();
        }
        static void* GetTypeProperties() {
            static BNM::Field<void*> _field = GetClass().GetField(O("type_properties"));
            return _field.Get();
        }
        static void* GetTypePropertiesLock() {
            static BNM::Field<void*> _field = GetClass().GetField(O("type_properties_lock"));
            return _field.Get();
        }
        static void SetArrayMetadata(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("array_metadata"));
            _field.Set(value);
        }
        static void SetBaseExportersTable(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("base_exporters_table"));
            _field.Set(value);
        }
        static void SetBaseImportersTable(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("base_importers_table"));
            _field.Set(value);
        }
        static void SetConvOps(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("conv_ops"));
            _field.Set(value);
        }
        static void SetCustomExportersTable(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("custom_exporters_table"));
            _field.Set(value);
        }
        static void SetCustomImportersTable(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("custom_importers_table"));
            _field.Set(value);
        }
        static void SetDatetimeFormat(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("datetime_format"));
            _field.Set(value);
        }
        static void SetMaxNestingDepth(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("max_nesting_depth"));
            _field.Set(value);
        }
        static void SetObjectMetadata(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("object_metadata"));
            _field.Set(value);
        }
        static void SetStaticWriter(::LitJson::JsonWriter* value) {
            static BNM::Field<::LitJson::JsonWriter*> _field = GetClass().GetField(O("static_writer"));
            _field.Set(value);
        }
        static void SetTypeProperties(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("type_properties"));
            _field.Set(value);
        }
        static void AddArrayMetadata(::BNM::MonoType* type) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddArrayMetadata"), {"type"});
            _m.Call(type);
        }
        static void AddObjectMetadata(::BNM::MonoType* type) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddObjectMetadata"), {"type"});
            _m.Call(type);
        }
        static void AddTypeProperties(::BNM::MonoType* type) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddTypeProperties"), {"type"});
            _m.Call(type);
        }
        static ::BNM::IL2CPP::Il2CppObject* GetConvOp(::BNM::MonoType* t1, ::BNM::MonoType* t2) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetConvOp"), {"t1", "t2"});
            return _m.Call(t1, t2);
        }
        static void* ReadValue(::BNM::MonoType* inst_type, ::LitJson::JsonReader* reader) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ReadValue"), {"inst_type", "reader"});
            return _m.Call(inst_type, reader);
        }
        static void* ReadValue(::LitJson::WrapperFactory* factory, ::LitJson::JsonReader* reader) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ReadValue"), {"factory", "reader"});
            return _m.Call(factory, reader);
        }
        static void RegisterBaseExporters() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterBaseExporters"));
            _m.Call();
        }
        static void RegisterBaseImporters() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterBaseImporters"));
            _m.Call();
        }
        template <typename TP0 = void*>
        static void RegisterImporter(TP0 table, ::BNM::MonoType* json_type, ::BNM::MonoType* value_type, ::LitJson::ImporterFunc* importer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterImporter"), {"table", "json_type", "value_type", "importer"});
            _m.Call(table, json_type, value_type, importer);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::String* ToJson(TP0 obj) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToJson"), {"obj"});
            return _m.Call(obj);
        }
        template <typename TP0 = void*>
        static void ToJson(TP0 obj, ::LitJson::JsonWriter* writer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToJson"), {"obj", "writer"});
            _m.Call(obj, writer);
        }
        static ::LitJson::JsonData* ToObject(::LitJson::JsonReader* reader) {
            static BNM::Method<::LitJson::JsonData*> _m = GetClass().GetMethod(O("ToObject"), {"reader"});
            return _m.Call(reader);
        }
        static ::LitJson::JsonData* ToObject(::BNM::IL2CPP::Il2CppObject* reader) {
            static BNM::Method<::LitJson::JsonData*> _m = GetClass().GetMethod(O("ToObject"), {"reader"});
            return _m.Call(reader);
        }
        static ::LitJson::JsonData* ToObject(::BNM::Structures::Mono::String* json) {
            static BNM::Method<::LitJson::JsonData*> _m = GetClass().GetMethod(O("ToObject"), {"json"});
            return _m.Call(json);
        }
        template <typename T>
        static T ToObject_1(::LitJson::JsonReader* reader) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("ToObject"), {"reader"});
            return _m.Call(reader);
        }
        template <typename T>
        static T ToObject_1(::BNM::IL2CPP::Il2CppObject* reader) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("ToObject"), {"reader"});
            return _m.Call(reader);
        }
        template <typename T>
        static T ToObject_1(::BNM::Structures::Mono::String* json) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("ToObject"), {"json"});
            return _m.Call(json);
        }
        static void* ToWrapper(::LitJson::WrapperFactory* factory, ::LitJson::JsonReader* reader) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ToWrapper"), {"factory", "reader"});
            return _m.Call(factory, reader);
        }
        static void* ToWrapper(::LitJson::WrapperFactory* factory, ::BNM::Structures::Mono::String* json) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ToWrapper"), {"factory", "json"});
            return _m.Call(factory, json);
        }
        static void UnregisterExporters() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterExporters"));
            _m.Call();
        }
        static void UnregisterImporters() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterImporters"));
            _m.Call();
        }
        template <typename TP0 = void*>
        static void WriteValue(TP0 obj, ::LitJson::JsonWriter* writer, bool writer_is_private, int depth) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteValue"), {"obj", "writer", "writer_is_private", "depth"});
            _m.Call(obj, writer, writer_is_private, depth);
        }
    };
}
