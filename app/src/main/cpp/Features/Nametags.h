#pragma once

namespace BlitzTag
{
    class Nametags
    {
    public:
        static void Update();
        static void Disable();
        static void SetEnabled(bool enabled);
        static void SetAnchorMode(bool anchor);
        static void SetChamsMode(bool chams);
        static bool IsEnabled();
        static bool IsAnchorMode();
        static bool IsChamsMode();
    };
}
