#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct TextTyperAnimatorMono : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TextTyperAnimatorMono");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCharCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_charCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetEntryIndexes() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("_entryIndexes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasBeginEntrySoundBank() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_has_beginEntrySoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasTypingSoundBank() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_has_typingSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRandom() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_random"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeOfLastTypedChar() {
            static BNM::Field<float> _field = GetClass().GetField(O("_timeOfLastTypedChar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWaitTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("_waitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetMBeginEntrySoundBank() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("m_beginEntrySoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetMTextMesh() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("m_textMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetMTypingSoundBank() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("m_typingSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetMTypingSpeedMinMax() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("m_typingSpeedMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCharCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_charCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasBeginEntrySoundBank(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_has_beginEntrySoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasTypingSoundBank(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_has_typingSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandom(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_random"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeOfLastTypedChar(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_timeOfLastTypedChar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_waitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMBeginEntrySoundBank(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("m_beginEntrySoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMTextMesh(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("m_textMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMTypingSoundBank(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("m_typingSoundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMTypingSpeedMinMax(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("m_typingSpeedMinMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        void _SetEntryIndexes(TP0 entryIndexes) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_SetEntryIndexes"), {"entryIndexes"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entryIndexes);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EdRestartAnimation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EdRestartAnimation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetText(::BNM::Structures::Mono::String* text) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetText"), {"text"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(text);
        }
        template <typename TP0 = void*>
        void SetText(TP0 zStringBuilder) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetText"), {"zStringBuilder"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zStringBuilder);
        }
        template <typename TP1 = void*>
        void SetText(::BNM::Structures::Mono::String* text, TP1 entryIndexes) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetText"), {"text", "entryIndexes"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(text, entryIndexes);
        }
        template <typename TP1 = void*>
        void SetText(::BNM::Structures::Mono::String* text, TP1 entryIndexes, int nonRichTextTagsCharCount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetText"), {"text", "entryIndexes", "nonRichTextTagsCharCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(text, entryIndexes, nonRichTextTagsCharCount);
        }
        template <typename TP0 = void*, typename TP1 = void*>
        void SetText(TP0 zStringBuilder, TP1 entryIndexes, int nonRichTextTagsCharCount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetText"), {"zStringBuilder", "entryIndexes", "nonRichTextTagsCharCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zStringBuilder, entryIndexes, nonRichTextTagsCharCount);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void UpdateText(TP0 zStringBuilder, int nonRichTextTagsCharCount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateText"), {"zStringBuilder", "nonRichTextTagsCharCount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(zStringBuilder, nonRichTextTagsCharCount);
        }
    };
}
