#ifndef LVL2_GL_ES_VERSION_3_2_BASE_HPP
#define LVL2_GL_ES_VERSION_3_2_BASE_HPP

#include "../../lvl1/gles2/3.2.base.hpp"
#include "../../math.hpp"
#include "../../utility.hpp"

namespace glue::lvl2
{
	inline namespace base_3_2 
	{
		struct api: glue::lvl1::base_3_2::api
		{
			api(const api&) = default;
			api& operator = (const api&) = default;
			api() = default;
		public:
		};
	}
}

#endif