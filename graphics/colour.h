#pragma once

#include <cstdint>

namespace Graphics {

  namespace Colour {
    
    struct Colour {
      std::uint8_t r, g, b, a;
      constexpr Colour(std::uint8_t r_ = 0x00, std::uint8_t g_ = 0x00, std::uint8_t b_ = 0x00, std::uint8_t a_ = 0x00) : r(r_), g(g_), b(b_), a(a_) {};
    };

    inline constexpr Colour Red = { 0xFF, 0x00, 0x00, 0xFF };
    inline constexpr Colour Green = { 0x00, 0xFF, 0x00, 0xFF };
    inline constexpr Colour Blue = { 0x00, 0x00, 0xFF, 0xFF };
    inline constexpr Colour Grey = { 0x64, 0x64, 0x64, 0xFF };
    inline constexpr Colour White = { 0xFF, 0XFF, 0xFF, 0xFF };
    inline constexpr Colour Black = { 0x00, 0x00, 0x00, 0xFF };
  }

}