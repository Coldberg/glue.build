#ifndef LVL2_GL_VERSION_1_1_BASE_HPP
#define LVL2_GL_VERSION_1_1_BASE_HPP

#include "../../lvl1/gl/1.1.base.hpp"
#include "../../math.hpp"
#include "../../utility.hpp"

namespace glue::lvl2
{
	inline namespace base_1_1 
	{
		struct api: glue::lvl1::base_1_1::api
		{
			api(const api&) = default;
			api& operator = (const api&) = default;
			api() = default;
		public:
		};
	}
}

#endif