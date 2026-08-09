#ifndef BIT_MANIP_HPP
#define BIT_MANIP_HPP

#include <cstdint>

// Bit manipulation utilities for common operations.
// Each function operates on integer values using bitwise operators.
// Examples are given in comments for clarity.

// Check whether the bit at position pos is set in value.
// Example: isBitSet(5, 0) => true because 5 = 0b0101 and bit 0 is 1.
constexpr bool isBitSet(std::uint32_t value, unsigned pos) noexcept {
    return (value & (static_cast<std::uint32_t>(1) << pos)) != 0u;
}

// Set the bit at position pos.
// Example: setBit(5, 1) => 7 because 5 = 0b0101 and setting bit 1 gives 0b0111.
constexpr std::uint32_t setBit(std::uint32_t value, unsigned pos) noexcept {
    return value | (static_cast<std::uint32_t>(1) << pos);
}

// Clear the bit at position pos.
// Example: clearBit(5, 2) => 1 because 5 = 0b0101 and clearing bit 2 gives 0b0001.
constexpr std::uint32_t clearBit(std::uint32_t value, unsigned pos) noexcept {
    return value & ~(static_cast<std::uint32_t>(1) << pos);
}

// Toggle the bit at position pos.
// Example: toggleBit(5, 0) => 4 because 5 = 0b0101 and toggling bit 0 gives 0b0100.
constexpr std::uint32_t toggleBit(std::uint32_t value, unsigned pos) noexcept {
    return value ^ (static_cast<std::uint32_t>(1) << pos);
}

// Count the number of set bits using builtin popcount.
// Example: countBits(13) => 3 because 13 = 0b1101 has three 1 bits.
constexpr unsigned countBits(std::uint32_t value) noexcept {
    return static_cast<unsigned>(__builtin_popcount(value));
}

// Isolate the lowest set bit.
// Example: lowestSetBit(12) => 4 because 12 = 0b1100 and the lowest set bit is 0b0100.
constexpr std::uint32_t lowestSetBit(std::uint32_t value) noexcept {
    return value & static_cast<std::uint32_t>(-static_cast<std::int32_t>(value));
}

// Clear the lowest set bit.
// Example: clearLowestSetBit(12) => 8 because 12 = 0b1100 and clearing the lowest 1 gives 0b1000.
constexpr std::uint32_t clearLowestSetBit(std::uint32_t value) noexcept {
    return value & (value - 1u);
}

#endif // BIT_MANIP_HPP
