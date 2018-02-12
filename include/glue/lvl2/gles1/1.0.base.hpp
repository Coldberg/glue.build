#ifndef LVL2_GL_VERSION_ES_CM_1_0_BASE_HPP
#define LVL2_GL_VERSION_ES_CM_1_0_BASE_HPP

#include "../../lvl1/gles1/1.0.base.hpp"
#include "../../math.hpp"

namespace glue::lvl2
{
	inline namespace base_1_0 
	{
		struct api: glue::lvl1::base_1_0::api
		{
			api(const api&) = default;
			api& operator = (const api&) = default;
			api() = default;
		public:
		};
	}
}

#endif