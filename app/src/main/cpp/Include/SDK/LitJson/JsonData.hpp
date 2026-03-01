#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "JsonType.hpp"

namespace LitJson {
    struct JsonData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("LitJson", "JsonData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Count"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsArray() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsArray"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsBoolean() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsBoolean"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsDouble() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsDouble"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsInt() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsInt"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsLong() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsLong"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsObject() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsObject"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsString() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsString"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::LitJson::JsonData* GetItem() {
            static BNM::Method<::LitJson::JsonData*> _method = GetClass().GetMethod(O("get_Item"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetItem(::LitJson::JsonData* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Item"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::LitJson::JsonData* GetItem_pg() {
            static BNM::Method<::LitJson::JsonData*> _method = GetClass().GetMethod(O("get_Item"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetItem_ps(::LitJson::JsonData* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Item"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void* GetInstArray() {
            static BNM::Field<void*> _field = GetClass().GetField(O("inst_array"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInstBoolean() {
            static BNM::Field<bool> _field = GetClass().GetField(O("inst_boolean"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetInstDouble() {
            static BNM::Field<double> _field = GetClass().GetField(O("inst_double"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInstInt() {
            static BNM::Field<int> _field = GetClass().GetField(O("inst_int"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetInstLong() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("inst_long"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetInstObject() {
            static BNM::Field<void*> _field = GetClass().GetField(O("inst_object"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetInstString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("inst_string"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetJson() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("json"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetObjectList() {
            static BNM::Field<void*> _field = GetClass().GetField(O("object_list"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LitJson::JsonType GetType_f() {
            static BNM::Field<::LitJson::JsonType> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetInstArray(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("inst_array"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstBoolean(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("inst_boolean"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstDouble(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("inst_double"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstInt(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("inst_int"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstLong(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("inst_long"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstObject(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("inst_object"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("inst_string"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJson(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("json"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjectList(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("object_list"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetType(::LitJson::JsonType value) {
            static BNM::Field<::LitJson::JsonType> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        int Add(TP0 value) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Add"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value);
        }
        void Clear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Clear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* EnsureCollection() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("EnsureCollection"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* EnsureDictionary() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("EnsureDictionary"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* EnsureList() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("EnsureList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool Equals_1(::LitJson::JsonData* x) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"x"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(x);
        }
        int get_Count() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Count"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsArray() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsBoolean() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsBoolean"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsDouble() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsDouble"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsInt() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsInt"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsLong() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsLong"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsObject() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsObject"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsString() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::LitJson::JsonData* get_Item(::BNM::Structures::Mono::String* prop_name) {
            static BNM::Method<::LitJson::JsonData*> _m = GetClass().GetMethod(O("get_Item"), {"prop_name"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(prop_name);
        }
        ::LitJson::JsonData* get_Item(int index) {
            static BNM::Method<::LitJson::JsonData*> _m = GetClass().GetMethod(O("get_Item"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        ::LitJson::JsonType GetJsonType() {
            static BNM::Method<::LitJson::JsonType> _m = GetClass().GetMethod(O("GetJsonType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_Item(::BNM::Structures::Mono::String* prop_name, ::LitJson::JsonData* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Item"), {"prop_name", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prop_name, value);
        }
        void set_Item(int index, ::LitJson::JsonData* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Item"), {"index", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, value);
        }
        void SetJsonType(::LitJson::JsonType type) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetJsonType"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(type);
        }
        ::BNM::Structures::Mono::String* ToJson() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToJson"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ToJson(::LitJson::JsonWriter* writer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToJson"), {"writer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(writer);
        }
        template <typename TP0 = void*>
        ::LitJson::JsonData* ToJsonData(TP0 obj) {
            static BNM::Method<::LitJson::JsonData*> _m = GetClass().GetMethod(O("ToJsonData"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        static void WriteJson(TP0 obj, ::LitJson::JsonWriter* writer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteJson"), {"obj", "writer"});
            _m.Call(obj, writer);
        }
    };
}
