#pragma once

#include <std/stdcxx.hpp>

namespace system::media::entity
{
    union color_t
    {
        uint32_t u32;
        struct
        {
            uint8_t b;
            uint8_t g;
            uint8_t r;
        } rgb;
    };

    class Color
    {
    public:
        Color(const uint32_t &color);
        Color(const uint8_t &r, const uint8_t &g, const uint8_t &b);

        void setColor(const uint32_t &color);
        void setColor(const uint8_t &r, const uint8_t &g, const uint8_t &b);

        color_t getColor() const;

    private:
        color_t color;
    }; // class Color

} // namespace system::media::entity