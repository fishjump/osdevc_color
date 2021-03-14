#include <color/color.hpp>

namespace system::media
{
    entity::Color::Color(const uint32_t &color)
    {
        setColor(color);
    }

    entity::Color::Color(const uint8_t &r, const uint8_t &g, const uint8_t &b)
    {
        setColor(r, g, b);
    }

    void entity::Color::setColor(const uint32_t &color)
    {
        this->color.u32 = color;
    }

    void entity::Color::setColor(const uint8_t &r, const uint8_t &g, const uint8_t &b)
    {
        this->color.rgb.r = r;
        this->color.rgb.g = g;
        this->color.rgb.b = b;
    }

    entity::color_t entity::Color::getColor() const { return color; }
} // namespace system::media
