#ifndef LVL1_GL_ES_VERSION_2_0_BASE_HPP
#define LVL1_GL_ES_VERSION_2_0_BASE_HPP
#include "../../function.hpp"
#include "../../types.hpp"
#include <functional>

namespace glue::lvl1
{
	inline namespace base_2_0 
	{
		struct api
		{
			/* 	=============
					constants
					============= */
		public:
			static constexpr auto GL_DEPTH_BUFFER_BIT = 0x00000100;
			static constexpr auto GL_STENCIL_BUFFER_BIT = 0x00000400;
			static constexpr auto GL_COLOR_BUFFER_BIT = 0x00004000;
			static constexpr auto GL_FALSE = 0;
			static constexpr auto GL_TRUE = 1;
			static constexpr auto GL_POINTS = 0x0000;
			static constexpr auto GL_LINES = 0x0001;
			static constexpr auto GL_LINE_LOOP = 0x0002;
			static constexpr auto GL_LINE_STRIP = 0x0003;
			static constexpr auto GL_TRIANGLES = 0x0004;
			static constexpr auto GL_TRIANGLE_STRIP = 0x0005;
			static constexpr auto GL_TRIANGLE_FAN = 0x0006;
			static constexpr auto GL_ZERO = 0;
			static constexpr auto GL_ONE = 1;
			static constexpr auto GL_SRC_COLOR = 0x0300;
			static constexpr auto GL_ONE_MINUS_SRC_COLOR = 0x0301;
			static constexpr auto GL_SRC_ALPHA = 0x0302;
			static constexpr auto GL_ONE_MINUS_SRC_ALPHA = 0x0303;
			static constexpr auto GL_DST_ALPHA = 0x0304;
			static constexpr auto GL_ONE_MINUS_DST_ALPHA = 0x0305;
			static constexpr auto GL_DST_COLOR = 0x0306;
			static constexpr auto GL_ONE_MINUS_DST_COLOR = 0x0307;
			static constexpr auto GL_SRC_ALPHA_SATURATE = 0x0308;
			static constexpr auto GL_FUNC_ADD = 0x8006;
			static constexpr auto GL_BLEND_EQUATION = 0x8009;
			static constexpr auto GL_BLEND_EQUATION_RGB = 0x8009;
			static constexpr auto GL_BLEND_EQUATION_ALPHA = 0x883D;
			static constexpr auto GL_FUNC_SUBTRACT = 0x800A;
			static constexpr auto GL_FUNC_REVERSE_SUBTRACT = 0x800B;
			static constexpr auto GL_BLEND_DST_RGB = 0x80C8;
			static constexpr auto GL_BLEND_SRC_RGB = 0x80C9;
			static constexpr auto GL_BLEND_DST_ALPHA = 0x80CA;
			static constexpr auto GL_BLEND_SRC_ALPHA = 0x80CB;
			static constexpr auto GL_CONSTANT_COLOR = 0x8001;
			static constexpr auto GL_ONE_MINUS_CONSTANT_COLOR = 0x8002;
			static constexpr auto GL_CONSTANT_ALPHA = 0x8003;
			static constexpr auto GL_ONE_MINUS_CONSTANT_ALPHA = 0x8004;
			static constexpr auto GL_BLEND_COLOR = 0x8005;
			static constexpr auto GL_ARRAY_BUFFER = 0x8892;
			static constexpr auto GL_ELEMENT_ARRAY_BUFFER = 0x8893;
			static constexpr auto GL_ARRAY_BUFFER_BINDING = 0x8894;
			static constexpr auto GL_ELEMENT_ARRAY_BUFFER_BINDING = 0x8895;
			static constexpr auto GL_STREAM_DRAW = 0x88E0;
			static constexpr auto GL_STATIC_DRAW = 0x88E4;
			static constexpr auto GL_DYNAMIC_DRAW = 0x88E8;
			static constexpr auto GL_BUFFER_SIZE = 0x8764;
			static constexpr auto GL_BUFFER_USAGE = 0x8765;
			static constexpr auto GL_CURRENT_VERTEX_ATTRIB = 0x8626;
			static constexpr auto GL_FRONT = 0x0404;
			static constexpr auto GL_BACK = 0x0405;
			static constexpr auto GL_FRONT_AND_BACK = 0x0408;
			static constexpr auto GL_TEXTURE_2D = 0x0DE1;
			static constexpr auto GL_CULL_FACE = 0x0B44;
			static constexpr auto GL_BLEND = 0x0BE2;
			static constexpr auto GL_DITHER = 0x0BD0;
			static constexpr auto GL_STENCIL_TEST = 0x0B90;
			static constexpr auto GL_DEPTH_TEST = 0x0B71;
			static constexpr auto GL_SCISSOR_TEST = 0x0C11;
			static constexpr auto GL_POLYGON_OFFSET_FILL = 0x8037;
			static constexpr auto GL_SAMPLE_ALPHA_TO_COVERAGE = 0x809E;
			static constexpr auto GL_SAMPLE_COVERAGE = 0x80A0;
			static constexpr auto GL_NO_ERROR = 0;
			static constexpr auto GL_INVALID_ENUM = 0x0500;
			static constexpr auto GL_INVALID_VALUE = 0x0501;
			static constexpr auto GL_INVALID_OPERATION = 0x0502;
			static constexpr auto GL_OUT_OF_MEMORY = 0x0505;
			static constexpr auto GL_CW = 0x0900;
			static constexpr auto GL_CCW = 0x0901;
			static constexpr auto GL_LINE_WIDTH = 0x0B21;
			static constexpr auto GL_ALIASED_POINT_SIZE_RANGE = 0x846D;
			static constexpr auto GL_ALIASED_LINE_WIDTH_RANGE = 0x846E;
			static constexpr auto GL_CULL_FACE_MODE = 0x0B45;
			static constexpr auto GL_FRONT_FACE = 0x0B46;
			static constexpr auto GL_DEPTH_RANGE = 0x0B70;
			static constexpr auto GL_DEPTH_WRITEMASK = 0x0B72;
			static constexpr auto GL_DEPTH_CLEAR_VALUE = 0x0B73;
			static constexpr auto GL_DEPTH_FUNC = 0x0B74;
			static constexpr auto GL_STENCIL_CLEAR_VALUE = 0x0B91;
			static constexpr auto GL_STENCIL_FUNC = 0x0B92;
			static constexpr auto GL_STENCIL_FAIL = 0x0B94;
			static constexpr auto GL_STENCIL_PASS_DEPTH_FAIL = 0x0B95;
			static constexpr auto GL_STENCIL_PASS_DEPTH_PASS = 0x0B96;
			static constexpr auto GL_STENCIL_REF = 0x0B97;
			static constexpr auto GL_STENCIL_VALUE_MASK = 0x0B93;
			static constexpr auto GL_STENCIL_WRITEMASK = 0x0B98;
			static constexpr auto GL_STENCIL_BACK_FUNC = 0x8800;
			static constexpr auto GL_STENCIL_BACK_FAIL = 0x8801;
			static constexpr auto GL_STENCIL_BACK_PASS_DEPTH_FAIL = 0x8802;
			static constexpr auto GL_STENCIL_BACK_PASS_DEPTH_PASS = 0x8803;
			static constexpr auto GL_STENCIL_BACK_REF = 0x8CA3;
			static constexpr auto GL_STENCIL_BACK_VALUE_MASK = 0x8CA4;
			static constexpr auto GL_STENCIL_BACK_WRITEMASK = 0x8CA5;
			static constexpr auto GL_VIEWPORT = 0x0BA2;
			static constexpr auto GL_SCISSOR_BOX = 0x0C10;
			static constexpr auto GL_COLOR_CLEAR_VALUE = 0x0C22;
			static constexpr auto GL_COLOR_WRITEMASK = 0x0C23;
			static constexpr auto GL_UNPACK_ALIGNMENT = 0x0CF5;
			static constexpr auto GL_PACK_ALIGNMENT = 0x0D05;
			static constexpr auto GL_MAX_TEXTURE_SIZE = 0x0D33;
			static constexpr auto GL_MAX_VIEWPORT_DIMS = 0x0D3A;
			static constexpr auto GL_SUBPIXEL_BITS = 0x0D50;
			static constexpr auto GL_RED_BITS = 0x0D52;
			static constexpr auto GL_GREEN_BITS = 0x0D53;
			static constexpr auto GL_BLUE_BITS = 0x0D54;
			static constexpr auto GL_ALPHA_BITS = 0x0D55;
			static constexpr auto GL_DEPTH_BITS = 0x0D56;
			static constexpr auto GL_STENCIL_BITS = 0x0D57;
			static constexpr auto GL_POLYGON_OFFSET_UNITS = 0x2A00;
			static constexpr auto GL_POLYGON_OFFSET_FACTOR = 0x8038;
			static constexpr auto GL_TEXTURE_BINDING_2D = 0x8069;
			static constexpr auto GL_SAMPLE_BUFFERS = 0x80A8;
			static constexpr auto GL_SAMPLES = 0x80A9;
			static constexpr auto GL_SAMPLE_COVERAGE_VALUE = 0x80AA;
			static constexpr auto GL_SAMPLE_COVERAGE_INVERT = 0x80AB;
			static constexpr auto GL_NUM_COMPRESSED_TEXTURE_FORMATS = 0x86A2;
			static constexpr auto GL_COMPRESSED_TEXTURE_FORMATS = 0x86A3;
			static constexpr auto GL_DONT_CARE = 0x1100;
			static constexpr auto GL_FASTEST = 0x1101;
			static constexpr auto GL_NICEST = 0x1102;
			static constexpr auto GL_GENERATE_MIPMAP_HINT = 0x8192;
			static constexpr auto GL_BYTE = 0x1400;
			static constexpr auto GL_UNSIGNED_BYTE = 0x1401;
			static constexpr auto GL_SHORT = 0x1402;
			static constexpr auto GL_UNSIGNED_SHORT = 0x1403;
			static constexpr auto GL_INT = 0x1404;
			static constexpr auto GL_UNSIGNED_INT = 0x1405;
			static constexpr auto GL_FLOAT = 0x1406;
			static constexpr auto GL_FIXED = 0x140C;
			static constexpr auto GL_DEPTH_COMPONENT = 0x1902;
			static constexpr auto GL_ALPHA = 0x1906;
			static constexpr auto GL_RGB = 0x1907;
			static constexpr auto GL_RGBA = 0x1908;
			static constexpr auto GL_LUMINANCE = 0x1909;
			static constexpr auto GL_LUMINANCE_ALPHA = 0x190A;
			static constexpr auto GL_UNSIGNED_SHORT_4_4_4_4 = 0x8033;
			static constexpr auto GL_UNSIGNED_SHORT_5_5_5_1 = 0x8034;
			static constexpr auto GL_UNSIGNED_SHORT_5_6_5 = 0x8363;
			static constexpr auto GL_FRAGMENT_SHADER = 0x8B30;
			static constexpr auto GL_VERTEX_SHADER = 0x8B31;
			static constexpr auto GL_MAX_VERTEX_ATTRIBS = 0x8869;
			static constexpr auto GL_MAX_VERTEX_UNIFORM_VECTORS = 0x8DFB;
			static constexpr auto GL_MAX_VARYING_VECTORS = 0x8DFC;
			static constexpr auto GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS = 0x8B4D;
			static constexpr auto GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS = 0x8B4C;
			static constexpr auto GL_MAX_TEXTURE_IMAGE_UNITS = 0x8872;
			static constexpr auto GL_MAX_FRAGMENT_UNIFORM_VECTORS = 0x8DFD;
			static constexpr auto GL_SHADER_TYPE = 0x8B4F;
			static constexpr auto GL_DELETE_STATUS = 0x8B80;
			static constexpr auto GL_LINK_STATUS = 0x8B82;
			static constexpr auto GL_VALIDATE_STATUS = 0x8B83;
			static constexpr auto GL_ATTACHED_SHADERS = 0x8B85;
			static constexpr auto GL_ACTIVE_UNIFORMS = 0x8B86;
			static constexpr auto GL_ACTIVE_UNIFORM_MAX_LENGTH = 0x8B87;
			static constexpr auto GL_ACTIVE_ATTRIBUTES = 0x8B89;
			static constexpr auto GL_ACTIVE_ATTRIBUTE_MAX_LENGTH = 0x8B8A;
			static constexpr auto GL_SHADING_LANGUAGE_VERSION = 0x8B8C;
			static constexpr auto GL_CURRENT_PROGRAM = 0x8B8D;
			static constexpr auto GL_NEVER = 0x0200;
			static constexpr auto GL_LESS = 0x0201;
			static constexpr auto GL_EQUAL = 0x0202;
			static constexpr auto GL_LEQUAL = 0x0203;
			static constexpr auto GL_GREATER = 0x0204;
			static constexpr auto GL_NOTEQUAL = 0x0205;
			static constexpr auto GL_GEQUAL = 0x0206;
			static constexpr auto GL_ALWAYS = 0x0207;
			static constexpr auto GL_KEEP = 0x1E00;
			static constexpr auto GL_REPLACE = 0x1E01;
			static constexpr auto GL_INCR = 0x1E02;
			static constexpr auto GL_DECR = 0x1E03;
			static constexpr auto GL_INVERT = 0x150A;
			static constexpr auto GL_INCR_WRAP = 0x8507;
			static constexpr auto GL_DECR_WRAP = 0x8508;
			static constexpr auto GL_VENDOR = 0x1F00;
			static constexpr auto GL_RENDERER = 0x1F01;
			static constexpr auto GL_VERSION = 0x1F02;
			static constexpr auto GL_EXTENSIONS = 0x1F03;
			static constexpr auto GL_NEAREST = 0x2600;
			static constexpr auto GL_LINEAR = 0x2601;
			static constexpr auto GL_NEAREST_MIPMAP_NEAREST = 0x2700;
			static constexpr auto GL_LINEAR_MIPMAP_NEAREST = 0x2701;
			static constexpr auto GL_NEAREST_MIPMAP_LINEAR = 0x2702;
			static constexpr auto GL_LINEAR_MIPMAP_LINEAR = 0x2703;
			static constexpr auto GL_TEXTURE_MAG_FILTER = 0x2800;
			static constexpr auto GL_TEXTURE_MIN_FILTER = 0x2801;
			static constexpr auto GL_TEXTURE_WRAP_S = 0x2802;
			static constexpr auto GL_TEXTURE_WRAP_T = 0x2803;
			static constexpr auto GL_TEXTURE = 0x1702;
			static constexpr auto GL_TEXTURE_CUBE_MAP = 0x8513;
			static constexpr auto GL_TEXTURE_BINDING_CUBE_MAP = 0x8514;
			static constexpr auto GL_TEXTURE_CUBE_MAP_POSITIVE_X = 0x8515;
			static constexpr auto GL_TEXTURE_CUBE_MAP_NEGATIVE_X = 0x8516;
			static constexpr auto GL_TEXTURE_CUBE_MAP_POSITIVE_Y = 0x8517;
			static constexpr auto GL_TEXTURE_CUBE_MAP_NEGATIVE_Y = 0x8518;
			static constexpr auto GL_TEXTURE_CUBE_MAP_POSITIVE_Z = 0x8519;
			static constexpr auto GL_TEXTURE_CUBE_MAP_NEGATIVE_Z = 0x851A;
			static constexpr auto GL_MAX_CUBE_MAP_TEXTURE_SIZE = 0x851C;
			static constexpr auto GL_TEXTURE0 = 0x84C0;
			static constexpr auto GL_TEXTURE1 = 0x84C1;
			static constexpr auto GL_TEXTURE2 = 0x84C2;
			static constexpr auto GL_TEXTURE3 = 0x84C3;
			static constexpr auto GL_TEXTURE4 = 0x84C4;
			static constexpr auto GL_TEXTURE5 = 0x84C5;
			static constexpr auto GL_TEXTURE6 = 0x84C6;
			static constexpr auto GL_TEXTURE7 = 0x84C7;
			static constexpr auto GL_TEXTURE8 = 0x84C8;
			static constexpr auto GL_TEXTURE9 = 0x84C9;
			static constexpr auto GL_TEXTURE10 = 0x84CA;
			static constexpr auto GL_TEXTURE11 = 0x84CB;
			static constexpr auto GL_TEXTURE12 = 0x84CC;
			static constexpr auto GL_TEXTURE13 = 0x84CD;
			static constexpr auto GL_TEXTURE14 = 0x84CE;
			static constexpr auto GL_TEXTURE15 = 0x84CF;
			static constexpr auto GL_TEXTURE16 = 0x84D0;
			static constexpr auto GL_TEXTURE17 = 0x84D1;
			static constexpr auto GL_TEXTURE18 = 0x84D2;
			static constexpr auto GL_TEXTURE19 = 0x84D3;
			static constexpr auto GL_TEXTURE20 = 0x84D4;
			static constexpr auto GL_TEXTURE21 = 0x84D5;
			static constexpr auto GL_TEXTURE22 = 0x84D6;
			static constexpr auto GL_TEXTURE23 = 0x84D7;
			static constexpr auto GL_TEXTURE24 = 0x84D8;
			static constexpr auto GL_TEXTURE25 = 0x84D9;
			static constexpr auto GL_TEXTURE26 = 0x84DA;
			static constexpr auto GL_TEXTURE27 = 0x84DB;
			static constexpr auto GL_TEXTURE28 = 0x84DC;
			static constexpr auto GL_TEXTURE29 = 0x84DD;
			static constexpr auto GL_TEXTURE30 = 0x84DE;
			static constexpr auto GL_TEXTURE31 = 0x84DF;
			static constexpr auto GL_ACTIVE_TEXTURE = 0x84E0;
			static constexpr auto GL_REPEAT = 0x2901;
			static constexpr auto GL_CLAMP_TO_EDGE = 0x812F;
			static constexpr auto GL_MIRRORED_REPEAT = 0x8370;
			static constexpr auto GL_FLOAT_VEC2 = 0x8B50;
			static constexpr auto GL_FLOAT_VEC3 = 0x8B51;
			static constexpr auto GL_FLOAT_VEC4 = 0x8B52;
			static constexpr auto GL_INT_VEC2 = 0x8B53;
			static constexpr auto GL_INT_VEC3 = 0x8B54;
			static constexpr auto GL_INT_VEC4 = 0x8B55;
			static constexpr auto GL_BOOL = 0x8B56;
			static constexpr auto GL_BOOL_VEC2 = 0x8B57;
			static constexpr auto GL_BOOL_VEC3 = 0x8B58;
			static constexpr auto GL_BOOL_VEC4 = 0x8B59;
			static constexpr auto GL_FLOAT_MAT2 = 0x8B5A;
			static constexpr auto GL_FLOAT_MAT3 = 0x8B5B;
			static constexpr auto GL_FLOAT_MAT4 = 0x8B5C;
			static constexpr auto GL_SAMPLER_2D = 0x8B5E;
			static constexpr auto GL_SAMPLER_CUBE = 0x8B60;
			static constexpr auto GL_VERTEX_ATTRIB_ARRAY_ENABLED = 0x8622;
			static constexpr auto GL_VERTEX_ATTRIB_ARRAY_SIZE = 0x8623;
			static constexpr auto GL_VERTEX_ATTRIB_ARRAY_STRIDE = 0x8624;
			static constexpr auto GL_VERTEX_ATTRIB_ARRAY_TYPE = 0x8625;
			static constexpr auto GL_VERTEX_ATTRIB_ARRAY_NORMALIZED = 0x886A;
			static constexpr auto GL_VERTEX_ATTRIB_ARRAY_POINTER = 0x8645;
			static constexpr auto GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = 0x889F;
			static constexpr auto GL_IMPLEMENTATION_COLOR_READ_TYPE = 0x8B9A;
			static constexpr auto GL_IMPLEMENTATION_COLOR_READ_FORMAT = 0x8B9B;
			static constexpr auto GL_COMPILE_STATUS = 0x8B81;
			static constexpr auto GL_INFO_LOG_LENGTH = 0x8B84;
			static constexpr auto GL_SHADER_SOURCE_LENGTH = 0x8B88;
			static constexpr auto GL_SHADER_COMPILER = 0x8DFA;
			static constexpr auto GL_SHADER_BINARY_FORMATS = 0x8DF8;
			static constexpr auto GL_NUM_SHADER_BINARY_FORMATS = 0x8DF9;
			static constexpr auto GL_LOW_FLOAT = 0x8DF0;
			static constexpr auto GL_MEDIUM_FLOAT = 0x8DF1;
			static constexpr auto GL_HIGH_FLOAT = 0x8DF2;
			static constexpr auto GL_LOW_INT = 0x8DF3;
			static constexpr auto GL_MEDIUM_INT = 0x8DF4;
			static constexpr auto GL_HIGH_INT = 0x8DF5;
			static constexpr auto GL_FRAMEBUFFER = 0x8D40;
			static constexpr auto GL_RENDERBUFFER = 0x8D41;
			static constexpr auto GL_RGBA4 = 0x8056;
			static constexpr auto GL_RGB5_A1 = 0x8057;
			static constexpr auto GL_RGB565 = 0x8D62;
			static constexpr auto GL_DEPTH_COMPONENT16 = 0x81A5;
			static constexpr auto GL_STENCIL_INDEX8 = 0x8D48;
			static constexpr auto GL_RENDERBUFFER_WIDTH = 0x8D42;
			static constexpr auto GL_RENDERBUFFER_HEIGHT = 0x8D43;
			static constexpr auto GL_RENDERBUFFER_INTERNAL_FORMAT = 0x8D44;
			static constexpr auto GL_RENDERBUFFER_RED_SIZE = 0x8D50;
			static constexpr auto GL_RENDERBUFFER_GREEN_SIZE = 0x8D51;
			static constexpr auto GL_RENDERBUFFER_BLUE_SIZE = 0x8D52;
			static constexpr auto GL_RENDERBUFFER_ALPHA_SIZE = 0x8D53;
			static constexpr auto GL_RENDERBUFFER_DEPTH_SIZE = 0x8D54;
			static constexpr auto GL_RENDERBUFFER_STENCIL_SIZE = 0x8D55;
			static constexpr auto GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = 0x8CD0;
			static constexpr auto GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = 0x8CD1;
			static constexpr auto GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = 0x8CD2;
			static constexpr auto GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = 0x8CD3;
			static constexpr auto GL_COLOR_ATTACHMENT0 = 0x8CE0;
			static constexpr auto GL_DEPTH_ATTACHMENT = 0x8D00;
			static constexpr auto GL_STENCIL_ATTACHMENT = 0x8D20;
			static constexpr auto GL_NONE = 0;
			static constexpr auto GL_FRAMEBUFFER_COMPLETE = 0x8CD5;
			static constexpr auto GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT = 0x8CD6;
			static constexpr auto GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = 0x8CD7;
			static constexpr auto GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS = 0x8CD9;
			static constexpr auto GL_FRAMEBUFFER_UNSUPPORTED = 0x8CDD;
			static constexpr auto GL_FRAMEBUFFER_BINDING = 0x8CA6;
			static constexpr auto GL_RENDERBUFFER_BINDING = 0x8CA7;
			static constexpr auto GL_MAX_RENDERBUFFER_SIZE = 0x84E8;
			static constexpr auto GL_INVALID_FRAMEBUFFER_OPERATION = 0x0506;
			/*	=============
					functions
					============= */
		public:
			function<void(enum_t)> ActiveTexture = nullptr;
			function<void(std::uint32_t, std::uint32_t)> AttachShader = nullptr;
			function<void(std::uint32_t, std::uint32_t, const char *)> BindAttribLocation = nullptr;
			function<void(enum_t, std::uint32_t)> BindBuffer = nullptr;
			function<void(enum_t, std::uint32_t)> BindFramebuffer = nullptr;
			function<void(enum_t, std::uint32_t)> BindRenderbuffer = nullptr;
			function<void(enum_t, std::uint32_t)> BindTexture = nullptr;
			function<void(float32_t, float32_t, float32_t, float32_t)> BlendColor = nullptr;
			function<void(enum_t)> BlendEquation = nullptr;
			function<void(enum_t, enum_t)> BlendEquationSeparate = nullptr;
			function<void(enum_t, enum_t)> BlendFunc = nullptr;
			function<void(enum_t, enum_t, enum_t, enum_t)> BlendFuncSeparate = nullptr;
			function<void(enum_t, std::ptrdiff_t, const void *, enum_t)> BufferData = nullptr;
			function<void(enum_t, std::ptrdiff_t, std::ptrdiff_t, const void *)> BufferSubData = nullptr;
			function<enum_t(enum_t)> CheckFramebufferStatus = nullptr;
			function<void(bitfield_t)> Clear = nullptr;
			function<void(float32_t, float32_t, float32_t, float32_t)> ClearColor = nullptr;
			function<void(float32_t)> ClearDepthf = nullptr;
			function<void(std::int32_t)> ClearStencil = nullptr;
			function<void(boolean_t, boolean_t, boolean_t, boolean_t)> ColorMask = nullptr;
			function<void(std::uint32_t)> CompileShader = nullptr;
			function<void(enum_t, std::int32_t, enum_t, std::int32_t, std::int32_t, std::int32_t, std::int32_t, const void *)> CompressedTexImage2D = nullptr;
			function<void(enum_t, std::int32_t, std::int32_t, std::int32_t, std::int32_t, std::int32_t, enum_t, std::int32_t, const void *)> CompressedTexSubImage2D = nullptr;
			function<void(enum_t, std::int32_t, enum_t, std::int32_t, std::int32_t, std::int32_t, std::int32_t, std::int32_t)> CopyTexImage2D = nullptr;
			function<void(enum_t, std::int32_t, std::int32_t, std::int32_t, std::int32_t, std::int32_t, std::int32_t, std::int32_t)> CopyTexSubImage2D = nullptr;
			function<std::uint32_t()> CreateProgram = nullptr;
			function<std::uint32_t(enum_t)> CreateShader = nullptr;
			function<void(enum_t)> CullFace = nullptr;
			function<void(std::int32_t, const std::uint32_t *)> DeleteBuffers = nullptr;
			function<void(std::int32_t, const std::uint32_t *)> DeleteFramebuffers = nullptr;
			function<void(std::uint32_t)> DeleteProgram = nullptr;
			function<void(std::int32_t, const std::uint32_t *)> DeleteRenderbuffers = nullptr;
			function<void(std::uint32_t)> DeleteShader = nullptr;
			function<void(std::int32_t, const std::uint32_t *)> DeleteTextures = nullptr;
			function<void(enum_t)> DepthFunc = nullptr;
			function<void(boolean_t)> DepthMask = nullptr;
			function<void(float32_t, float32_t)> DepthRangef = nullptr;
			function<void(std::uint32_t, std::uint32_t)> DetachShader = nullptr;
			function<void(enum_t)> Disable = nullptr;
			function<void(std::uint32_t)> DisableVertexAttribArray = nullptr;
			function<void(enum_t, std::int32_t, std::int32_t)> DrawArrays = nullptr;
			function<void(enum_t, std::int32_t, enum_t, const void *)> DrawElements = nullptr;
			function<void(enum_t)> Enable = nullptr;
			function<void(std::uint32_t)> EnableVertexAttribArray = nullptr;
			function<void()> Finish = nullptr;
			function<void()> Flush = nullptr;
			function<void(enum_t, enum_t, enum_t, std::uint32_t)> FramebufferRenderbuffer = nullptr;
			function<void(enum_t, enum_t, enum_t, std::uint32_t, std::int32_t)> FramebufferTexture2D = nullptr;
			function<void(enum_t)> FrontFace = nullptr;
			function<void(std::int32_t, std::uint32_t *)> GenBuffers = nullptr;
			function<void(enum_t)> GenerateMipmap = nullptr;
			function<void(std::int32_t, std::uint32_t *)> GenFramebuffers = nullptr;
			function<void(std::int32_t, std::uint32_t *)> GenRenderbuffers = nullptr;
			function<void(std::int32_t, std::uint32_t *)> GenTextures = nullptr;
			function<void(std::uint32_t, std::uint32_t, std::int32_t, std::int32_t *, std::int32_t *, enum_t *, char *)> GetActiveAttrib = nullptr;
			function<void(std::uint32_t, std::uint32_t, std::int32_t, std::int32_t *, std::int32_t *, enum_t *, char *)> GetActiveUniform = nullptr;
			function<void(std::uint32_t, std::int32_t, std::int32_t *, std::uint32_t *)> GetAttachedShaders = nullptr;
			function<std::int32_t(std::uint32_t, const char *)> GetAttribLocation = nullptr;
			function<void(enum_t, boolean_t *)> GetBooleanv = nullptr;
			function<void(enum_t, enum_t, std::int32_t *)> GetBufferParameteriv = nullptr;
			function<enum_t()> GetError = nullptr;
			function<void(enum_t, float32_t *)> GetFloatv = nullptr;
			function<void(enum_t, enum_t, enum_t, std::int32_t *)> GetFramebufferAttachmentParameteriv = nullptr;
			function<void(enum_t, std::int32_t *)> GetIntegerv = nullptr;
			function<void(std::uint32_t, enum_t, std::int32_t *)> GetProgramiv = nullptr;
			function<void(std::uint32_t, std::int32_t, std::int32_t *, char *)> GetProgramInfoLog = nullptr;
			function<void(enum_t, enum_t, std::int32_t *)> GetRenderbufferParameteriv = nullptr;
			function<void(std::uint32_t, enum_t, std::int32_t *)> GetShaderiv = nullptr;
			function<void(std::uint32_t, std::int32_t, std::int32_t *, char *)> GetShaderInfoLog = nullptr;
			function<void(enum_t, enum_t, std::int32_t *, std::int32_t *)> GetShaderPrecisionFormat = nullptr;
			function<void(std::uint32_t, std::int32_t, std::int32_t *, char *)> GetShaderSource = nullptr;
			function<const std::uint8_t *(enum_t)> GetString = nullptr;
			function<void(enum_t, enum_t, float32_t *)> GetTexParameterfv = nullptr;
			function<void(enum_t, enum_t, std::int32_t *)> GetTexParameteriv = nullptr;
			function<void(std::uint32_t, std::int32_t, float32_t *)> GetUniformfv = nullptr;
			function<void(std::uint32_t, std::int32_t, std::int32_t *)> GetUniformiv = nullptr;
			function<std::int32_t(std::uint32_t, const char *)> GetUniformLocation = nullptr;
			function<void(std::uint32_t, enum_t, float32_t *)> GetVertexAttribfv = nullptr;
			function<void(std::uint32_t, enum_t, std::int32_t *)> GetVertexAttribiv = nullptr;
			function<void(std::uint32_t, enum_t, void **)> GetVertexAttribPointerv = nullptr;
			function<void(enum_t, enum_t)> Hint = nullptr;
			function<boolean_t(std::uint32_t)> IsBuffer = nullptr;
			function<boolean_t(enum_t)> IsEnabled = nullptr;
			function<boolean_t(std::uint32_t)> IsFramebuffer = nullptr;
			function<boolean_t(std::uint32_t)> IsProgram = nullptr;
			function<boolean_t(std::uint32_t)> IsRenderbuffer = nullptr;
			function<boolean_t(std::uint32_t)> IsShader = nullptr;
			function<boolean_t(std::uint32_t)> IsTexture = nullptr;
			function<void(float32_t)> LineWidth = nullptr;
			function<void(std::uint32_t)> LinkProgram = nullptr;
			function<void(enum_t, std::int32_t)> PixelStorei = nullptr;
			function<void(float32_t, float32_t)> PolygonOffset = nullptr;
			function<void(std::int32_t, std::int32_t, std::int32_t, std::int32_t, enum_t, enum_t, void *)> ReadPixels = nullptr;
			function<void()> ReleaseShaderCompiler = nullptr;
			function<void(enum_t, enum_t, std::int32_t, std::int32_t)> RenderbufferStorage = nullptr;
			function<void(float32_t, boolean_t)> SampleCoverage = nullptr;
			function<void(std::int32_t, std::int32_t, std::int32_t, std::int32_t)> Scissor = nullptr;
			function<void(std::int32_t, const std::uint32_t *, enum_t, const void *, std::int32_t)> ShaderBinary = nullptr;
			function<void(std::uint32_t, std::int32_t, const char *const*, const std::int32_t *)> ShaderSource = nullptr;
			function<void(enum_t, std::int32_t, std::uint32_t)> StencilFunc = nullptr;
			function<void(enum_t, enum_t, std::int32_t, std::uint32_t)> StencilFuncSeparate = nullptr;
			function<void(std::uint32_t)> StencilMask = nullptr;
			function<void(enum_t, std::uint32_t)> StencilMaskSeparate = nullptr;
			function<void(enum_t, enum_t, enum_t)> StencilOp = nullptr;
			function<void(enum_t, enum_t, enum_t, enum_t)> StencilOpSeparate = nullptr;
			function<void(enum_t, std::int32_t, std::int32_t, std::int32_t, std::int32_t, std::int32_t, enum_t, enum_t, const void *)> TexImage2D = nullptr;
			function<void(enum_t, enum_t, float32_t)> TexParameterf = nullptr;
			function<void(enum_t, enum_t, const float32_t *)> TexParameterfv = nullptr;
			function<void(enum_t, enum_t, std::int32_t)> TexParameteri = nullptr;
			function<void(enum_t, enum_t, const std::int32_t *)> TexParameteriv = nullptr;
			function<void(enum_t, std::int32_t, std::int32_t, std::int32_t, std::int32_t, std::int32_t, enum_t, enum_t, const void *)> TexSubImage2D = nullptr;
			function<void(std::int32_t, float32_t)> Uniform1f = nullptr;
			function<void(std::int32_t, std::int32_t, const float32_t *)> Uniform1fv = nullptr;
			function<void(std::int32_t, std::int32_t)> Uniform1i = nullptr;
			function<void(std::int32_t, std::int32_t, const std::int32_t *)> Uniform1iv = nullptr;
			function<void(std::int32_t, float32_t, float32_t)> Uniform2f = nullptr;
			function<void(std::int32_t, std::int32_t, const float32_t *)> Uniform2fv = nullptr;
			function<void(std::int32_t, std::int32_t, std::int32_t)> Uniform2i = nullptr;
			function<void(std::int32_t, std::int32_t, const std::int32_t *)> Uniform2iv = nullptr;
			function<void(std::int32_t, float32_t, float32_t, float32_t)> Uniform3f = nullptr;
			function<void(std::int32_t, std::int32_t, const float32_t *)> Uniform3fv = nullptr;
			function<void(std::int32_t, std::int32_t, std::int32_t, std::int32_t)> Uniform3i = nullptr;
			function<void(std::int32_t, std::int32_t, const std::int32_t *)> Uniform3iv = nullptr;
			function<void(std::int32_t, float32_t, float32_t, float32_t, float32_t)> Uniform4f = nullptr;
			function<void(std::int32_t, std::int32_t, const float32_t *)> Uniform4fv = nullptr;
			function<void(std::int32_t, std::int32_t, std::int32_t, std::int32_t, std::int32_t)> Uniform4i = nullptr;
			function<void(std::int32_t, std::int32_t, const std::int32_t *)> Uniform4iv = nullptr;
			function<void(std::int32_t, std::int32_t, boolean_t, const float32_t *)> UniformMatrix2fv = nullptr;
			function<void(std::int32_t, std::int32_t, boolean_t, const float32_t *)> UniformMatrix3fv = nullptr;
			function<void(std::int32_t, std::int32_t, boolean_t, const float32_t *)> UniformMatrix4fv = nullptr;
			function<void(std::uint32_t)> UseProgram = nullptr;
			function<void(std::uint32_t)> ValidateProgram = nullptr;
			function<void(std::uint32_t, float32_t)> VertexAttrib1f = nullptr;
			function<void(std::uint32_t, const float32_t *)> VertexAttrib1fv = nullptr;
			function<void(std::uint32_t, float32_t, float32_t)> VertexAttrib2f = nullptr;
			function<void(std::uint32_t, const float32_t *)> VertexAttrib2fv = nullptr;
			function<void(std::uint32_t, float32_t, float32_t, float32_t)> VertexAttrib3f = nullptr;
			function<void(std::uint32_t, const float32_t *)> VertexAttrib3fv = nullptr;
			function<void(std::uint32_t, float32_t, float32_t, float32_t, float32_t)> VertexAttrib4f = nullptr;
			function<void(std::uint32_t, const float32_t *)> VertexAttrib4fv = nullptr;
			function<void(std::uint32_t, std::int32_t, enum_t, boolean_t, std::int32_t, const void *)> VertexAttribPointer = nullptr;
			function<void(std::int32_t, std::int32_t, std::int32_t, std::int32_t)> Viewport = nullptr;
		public:
			api(const api&) = default;
			api& operator = (const api&) = default;
			api() = default;
		public:
		};
		void load(api&, std::function<void*(const char*)>);
	}
}

#endif