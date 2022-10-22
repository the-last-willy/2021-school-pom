#pragma once

#include "sin.hpp"

#include "pom/terrain/function/tag/value.hpp"
#include "pom/terrain/import/all.hpp"

#include <cmath>

namespace pom::terrain {

template<typename DeclContext> constexpr
float recipe(DeclContext, value, sin, vec2f xy) {
	return std::sin(x(xy));
}

}
