#ifndef LVL2_GL_VERSION_4_5_BASE_HPP
#define LVL2_GL_VERSION_4_5_BASE_HPP

#include "../../lvl1/gl/4.5.base.hpp"
#include "../../math.hpp"
#include "../../utility.hpp"

namespace glue::lvl2
{
	inline namespace base_4_5 
	{
		struct api: glue::lvl1::base_4_5::api
		{
			api(const api&) = default;
			api& operator = (const api&) = default;
			api() = default;
		public:
		};
	}
}

#endif