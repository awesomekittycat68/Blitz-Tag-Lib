#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Ionic_Zlib {
    struct ZlibConstants : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Ionic.Zlib", "ZlibConstants");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int WindowBitsMax = 15;
        static constexpr int WindowBitsDefault = 15;
        static constexpr int Z_OK = 0;
        static constexpr int Z_STREAM_END = 1;
        static constexpr int Z_NEED_DICT = 2;
        static constexpr int Z_STREAM_ERROR = -2;
        static constexpr int Z_DATA_ERROR = -3;
        static constexpr int Z_BUF_ERROR = -5;
        static constexpr int WorkingBufferSizeDefault = 16384;
        static constexpr int WorkingBufferSizeMin = 1024;
    };
}
