#ifndef LVL2_GL_VERSION_3_2_BASE_HPP
#define LVL2_GL_VERSION_3_2_BASE_HPP

#include "../../lvl1/gl/3.2.base.hpp"
#include "../../math.hpp"

namespace glue::lvl2
{
	inline namespace base_3_2 
	{
		struct api: glue::lvl1::base_3_2::api
		{
			api(const api&) = default;
			api& operator = (const api&) = default;
			api() = default;
			void uniform(uniform_location_t, float32_t) const;
			void uniform(uniform_location_t, std::int32_t) const;
			void uniform(uniform_location_t, std::uint32_t) const;
			void uniform(uniform_location_t, const vec2&) const;
			void uniform(uniform_location_t, const ivec2&) const;
			void uniform(uniform_location_t, const uvec2&) const;
			void uniform(uniform_location_t, const vec3&) const;
			void uniform(uniform_location_t, const ivec3&) const;
			void uniform(uniform_location_t, const uvec3&) const;
			void uniform(uniform_location_t, const vec4&) const;
			void uniform(uniform_location_t, const ivec4&) const;
			void uniform(uniform_location_t, const uvec4&) const;
			void uniform(uniform_location_t, std::int32_t, const float32_t*) const;
			void uniform(uniform_location_t, std::int32_t, const std::int32_t*) const;
			void uniform(uniform_location_t, std::int32_t, const std::uint32_t*) const;
			void uniform(uniform_location_t, std::int32_t, const vec2*) const;
			void uniform(uniform_location_t, std::int32_t, const vec3*) const;
			void uniform(uniform_location_t, std::int32_t, const vec4*) const;
			void uniform(uniform_location_t, std::int32_t, const ivec2*) const;
			void uniform(uniform_location_t, std::int32_t, const ivec3*) const;
			void uniform(uniform_location_t, std::int32_t, const ivec4*) const;
			void uniform(uniform_location_t, std::int32_t, const uvec2*) const;
			void uniform(uniform_location_t, std::int32_t, const uvec3*) const;
			void uniform(uniform_location_t, std::int32_t, const uvec4*) const;
		public:
		};
	}
}

#endif