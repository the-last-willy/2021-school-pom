#pragma once

#include "vec.hpp"

namespace pom::terrain {

// One component.

template<typename Ty, std::size_t N> requires (N >= 1)
decltype(auto) x(const vec<Ty, N>& v) noexcept {
	return at(v, 0);
}

template<typename Ty, std::size_t N> requires (N >= 1)
decltype(auto) x(vec<Ty, N>& v) noexcept {
	return at(v, 0);
}

template<typename Ty, std::size_t N> requires (N >= 2)
decltype(auto) y(const vec<Ty, N>& v) noexcept {
	return at(v, 1);
}

template<typename Ty, std::size_t N> requires (N >= 2)
decltype(auto) y(vec<Ty, N>& v) noexcept {
	return at(v, 1);
}

template<typename Ty, std::size_t N> requires (N >= 3)
decltype(auto) z(const vec<Ty, N>& v) noexcept {
	return at(v, 2);
}

template<typename Ty, std::size_t N> requires (N >= 3)
decltype(auto) z(vec<Ty, N>& v) noexcept {
	return at(v, 2);
}

// Two components.

template<typename Ty, std::size_t N> requires (N >= 2)
auto xy(const vec<Ty, N>& v) noexcept {
	return vec<float, 2>{x(v), y(v)};
}

}
