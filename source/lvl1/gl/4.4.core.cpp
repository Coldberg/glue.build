#include <glue/lvl1/gl/4.4.core.hpp>
#include "../../common/strings.hpp"
#include <cassert>

namespace glue::lvl1
{
	namespace 
	{
		template <typename T, typename P, typename L>
		void assign(T& target, P&& fptr, L name)
		{
			target = (T)fptr(name);
			//assert(target != nullptr);
		}
	}
	inline namespace core_4_4 
 	{
		void load(api& target, std::function<void*(const char*)> lfn)
		{
			assign(target.CullFace, lfn, impl::str_by_index(6209));
			assign(target.FrontFace, lfn, impl::str_by_index(6556));
			assign(target.Hint, lfn, impl::str_by_index(7112));
			assign(target.LineWidth, lfn, impl::str_by_index(7239));
			assign(target.PointSize, lfn, impl::str_by_index(7689));
			assign(target.PolygonMode, lfn, impl::str_by_index(7695));
			assign(target.Scissor, lfn, impl::str_by_index(8050));
			assign(target.TexParameterf, lfn, impl::str_by_index(8302));
			assign(target.TexParameterfv, lfn, impl::str_by_index(8303));
			assign(target.TexParameteri, lfn, impl::str_by_index(8304));
			assign(target.TexParameteriv, lfn, impl::str_by_index(8305));
			assign(target.TexImage1D, lfn, impl::str_by_index(8284));
			assign(target.TexImage2D, lfn, impl::str_by_index(8285));
			assign(target.DrawBuffer, lfn, impl::str_by_index(6324));
			assign(target.Clear, lfn, impl::str_by_index(5955));
			assign(target.ClearColor, lfn, impl::str_by_index(5964));
			assign(target.ClearStencil, lfn, impl::str_by_index(5985));
			assign(target.ClearDepth, lfn, impl::str_by_index(5969));
			assign(target.StencilMask, lfn, impl::str_by_index(8136));
			assign(target.ColorMask, lfn, impl::str_by_index(6058));
			assign(target.DepthMask, lfn, impl::str_by_index(6277));
			assign(target.Disable, lfn, impl::str_by_index(6293));
			assign(target.Enable, lfn, impl::str_by_index(6389));
			assign(target.Finish, lfn, impl::str_by_index(6462));
			assign(target.Flush, lfn, impl::str_by_index(6468));
			assign(target.BlendFunc, lfn, impl::str_by_index(5913));
			assign(target.LogicOp, lfn, impl::str_by_index(7265));
			assign(target.StencilFunc, lfn, impl::str_by_index(8133));
			assign(target.StencilOp, lfn, impl::str_by_index(8138));
			assign(target.DepthFunc, lfn, impl::str_by_index(6276));
			assign(target.PixelStoref, lfn, impl::str_by_index(7655));
			assign(target.PixelStorei, lfn, impl::str_by_index(7656));
			assign(target.ReadBuffer, lfn, impl::str_by_index(7954));
			assign(target.ReadPixels, lfn, impl::str_by_index(7958));
			assign(target.GetBooleanv, lfn, impl::str_by_index(6625));
			assign(target.GetDoublev, lfn, impl::str_by_index(6677));
			assign(target.GetError, lfn, impl::str_by_index(6680));
			assign(target.GetFloatv, lfn, impl::str_by_index(6692));
			assign(target.GetIntegerv, lfn, impl::str_by_index(6735));
			assign(target.GetString, lfn, impl::str_by_index(6933));
			assign(target.GetTexImage, lfn, impl::str_by_index(6952));
			assign(target.GetTexParameterfv, lfn, impl::str_by_index(6963));
			assign(target.GetTexParameteriv, lfn, impl::str_by_index(6964));
			assign(target.GetTexLevelParameterfv, lfn, impl::str_by_index(6953));
			assign(target.GetTexLevelParameteriv, lfn, impl::str_by_index(6954));
			assign(target.IsEnabled, lfn, impl::str_by_index(7166));
			assign(target.DepthRange, lfn, impl::str_by_index(6278));
			assign(target.Viewport, lfn, impl::str_by_index(8923));
			assign(target.DrawArrays, lfn, impl::str_by_index(6314));
			assign(target.DrawElements, lfn, impl::str_by_index(6337));
			assign(target.PolygonOffset, lfn, impl::str_by_index(7697));
			assign(target.CopyTexImage1D, lfn, impl::str_by_index(6160));
			assign(target.CopyTexImage2D, lfn, impl::str_by_index(6162));
			assign(target.CopyTexSubImage1D, lfn, impl::str_by_index(6164));
			assign(target.CopyTexSubImage2D, lfn, impl::str_by_index(6166));
			assign(target.TexSubImage1D, lfn, impl::str_by_index(8326));
			assign(target.TexSubImage2D, lfn, impl::str_by_index(8328));
			assign(target.BindTexture, lfn, impl::str_by_index(5863));
			assign(target.DeleteTextures, lfn, impl::str_by_index(6266));
			assign(target.GenTextures, lfn, impl::str_by_index(6590));
			assign(target.IsTexture, lfn, impl::str_by_index(7206));
			assign(target.DrawRangeElements, lfn, impl::str_by_index(6358));
			assign(target.TexImage3D, lfn, impl::str_by_index(8288));
			assign(target.TexSubImage3D, lfn, impl::str_by_index(8330));
			assign(target.CopyTexSubImage3D, lfn, impl::str_by_index(6168));
			assign(target.ActiveTexture, lfn, impl::str_by_index(5784));
			assign(target.SampleCoverage, lfn, impl::str_by_index(8025));
			assign(target.CompressedTexImage3D, lfn, impl::str_by_index(6103));
			assign(target.CompressedTexImage2D, lfn, impl::str_by_index(6101));
			assign(target.CompressedTexImage1D, lfn, impl::str_by_index(6099));
			assign(target.CompressedTexSubImage3D, lfn, impl::str_by_index(6110));
			assign(target.CompressedTexSubImage2D, lfn, impl::str_by_index(6108));
			assign(target.CompressedTexSubImage1D, lfn, impl::str_by_index(6106));
			assign(target.GetCompressedTexImage, lfn, impl::str_by_index(6656));
			assign(target.BlendFuncSeparate, lfn, impl::str_by_index(5915));
			assign(target.MultiDrawArrays, lfn, impl::str_by_index(7367));
			assign(target.MultiDrawElements, lfn, impl::str_by_index(7377));
			assign(target.PointParameterf, lfn, impl::str_by_index(7673));
			assign(target.PointParameterfv, lfn, impl::str_by_index(7677));
			assign(target.PointParameteri, lfn, impl::str_by_index(7681));
			assign(target.PointParameteriv, lfn, impl::str_by_index(7683));
			assign(target.BlendColor, lfn, impl::str_by_index(5894));
			assign(target.BlendEquation, lfn, impl::str_by_index(5897));
			assign(target.GenQueries, lfn, impl::str_by_index(6580));
			assign(target.DeleteQueries, lfn, impl::str_by_index(6253));
			assign(target.IsQuery, lfn, impl::str_by_index(7194));
			assign(target.BeginQuery, lfn, impl::str_by_index(5815));
			assign(target.EndQuery, lfn, impl::str_by_index(6415));
			assign(target.GetQueryiv, lfn, impl::str_by_index(6909));
			assign(target.GetQueryObjectiv, lfn, impl::str_by_index(6901));
			assign(target.GetQueryObjectuiv, lfn, impl::str_by_index(6906));
			assign(target.BindBuffer, lfn, impl::str_by_index(5826));
			assign(target.DeleteBuffers, lfn, impl::str_by_index(6230));
			assign(target.GenBuffers, lfn, impl::str_by_index(6563));
			assign(target.IsBuffer, lfn, impl::str_by_index(7162));
			assign(target.BufferData, lfn, impl::str_by_index(5935));
			assign(target.BufferSubData, lfn, impl::str_by_index(5943));
			assign(target.GetBufferSubData, lfn, impl::str_by_index(6633));
			assign(target.MapBuffer, lfn, impl::str_by_index(7284));
			assign(target.UnmapBuffer, lfn, impl::str_by_index(8532));
			assign(target.GetBufferParameteriv, lfn, impl::str_by_index(6627));
			assign(target.GetBufferPointerv, lfn, impl::str_by_index(6630));
			assign(target.BlendEquationSeparate, lfn, impl::str_by_index(5901));
			assign(target.DrawBuffers, lfn, impl::str_by_index(6325));
			assign(target.StencilOpSeparate, lfn, impl::str_by_index(8139));
			assign(target.StencilFuncSeparate, lfn, impl::str_by_index(8134));
			assign(target.StencilMaskSeparate, lfn, impl::str_by_index(8137));
			assign(target.AttachShader, lfn, impl::str_by_index(5806));
			assign(target.BindAttribLocation, lfn, impl::str_by_index(5824));
			assign(target.CompileShader, lfn, impl::str_by_index(6090));
			assign(target.CreateProgram, lfn, impl::str_by_index(6193));
			assign(target.CreateShader, lfn, impl::str_by_index(6199));
			assign(target.DeleteProgram, lfn, impl::str_by_index(6248));
			assign(target.DeleteShader, lfn, impl::str_by_index(6262));
			assign(target.DetachShader, lfn, impl::str_by_index(6291));
			assign(target.DisableVertexAttribArray, lfn, impl::str_by_index(6304));
			assign(target.EnableVertexAttribArray, lfn, impl::str_by_index(6400));
			assign(target.GetActiveAttrib, lfn, impl::str_by_index(6605));
			assign(target.GetActiveUniform, lfn, impl::str_by_index(6610));
			assign(target.GetAttachedShaders, lfn, impl::str_by_index(6620));
			assign(target.GetAttribLocation, lfn, impl::str_by_index(6621));
			assign(target.GetProgramiv, lfn, impl::str_by_index(6891));
			assign(target.GetProgramInfoLog, lfn, impl::str_by_index(6866));
			assign(target.GetShaderiv, lfn, impl::str_by_index(6930));
			assign(target.GetShaderInfoLog, lfn, impl::str_by_index(6926));
			assign(target.GetShaderSource, lfn, impl::str_by_index(6928));
			assign(target.GetUniformLocation, lfn, impl::str_by_index(6999));
			assign(target.GetUniformfv, lfn, impl::str_by_index(7004));
			assign(target.GetUniformiv, lfn, impl::str_by_index(7008));
			assign(target.GetVertexAttribdv, lfn, impl::str_by_index(7044));
			assign(target.GetVertexAttribfv, lfn, impl::str_by_index(7047));
			assign(target.GetVertexAttribiv, lfn, impl::str_by_index(7050));
			assign(target.GetVertexAttribPointerv, lfn, impl::str_by_index(7041));
			assign(target.IsProgram, lfn, impl::str_by_index(7189));
			assign(target.IsShader, lfn, impl::str_by_index(7202));
			assign(target.LinkProgram, lfn, impl::str_by_index(7242));
			assign(target.ShaderSource, lfn, impl::str_by_index(8116));
			assign(target.UseProgram, lfn, impl::str_by_index(8540));
			assign(target.Uniform1f, lfn, impl::str_by_index(8407));
			assign(target.Uniform2f, lfn, impl::str_by_index(8429));
			assign(target.Uniform3f, lfn, impl::str_by_index(8451));
			assign(target.Uniform4f, lfn, impl::str_by_index(8473));
			assign(target.Uniform1i, lfn, impl::str_by_index(8411));
			assign(target.Uniform2i, lfn, impl::str_by_index(8433));
			assign(target.Uniform3i, lfn, impl::str_by_index(8455));
			assign(target.Uniform4i, lfn, impl::str_by_index(8477));
			assign(target.Uniform1fv, lfn, impl::str_by_index(8409));
			assign(target.Uniform2fv, lfn, impl::str_by_index(8431));
			assign(target.Uniform3fv, lfn, impl::str_by_index(8453));
			assign(target.Uniform4fv, lfn, impl::str_by_index(8475));
			assign(target.Uniform1iv, lfn, impl::str_by_index(8417));
			assign(target.Uniform2iv, lfn, impl::str_by_index(8439));
			assign(target.Uniform3iv, lfn, impl::str_by_index(8461));
			assign(target.Uniform4iv, lfn, impl::str_by_index(8483));
			assign(target.UniformMatrix2fv, lfn, impl::str_by_index(8502));
			assign(target.UniformMatrix3fv, lfn, impl::str_by_index(8511));
			assign(target.UniformMatrix4fv, lfn, impl::str_by_index(8520));
			assign(target.ValidateProgram, lfn, impl::str_by_index(8555));
			assign(target.VertexAttrib1d, lfn, impl::str_by_index(8641));
			assign(target.VertexAttrib1dv, lfn, impl::str_by_index(8644));
			assign(target.VertexAttrib1f, lfn, impl::str_by_index(8647));
			assign(target.VertexAttrib1fv, lfn, impl::str_by_index(8650));
			assign(target.VertexAttrib1s, lfn, impl::str_by_index(8655));
			assign(target.VertexAttrib1sv, lfn, impl::str_by_index(8658));
			assign(target.VertexAttrib2d, lfn, impl::str_by_index(8661));
			assign(target.VertexAttrib2dv, lfn, impl::str_by_index(8664));
			assign(target.VertexAttrib2f, lfn, impl::str_by_index(8667));
			assign(target.VertexAttrib2fv, lfn, impl::str_by_index(8670));
			assign(target.VertexAttrib2s, lfn, impl::str_by_index(8675));
			assign(target.VertexAttrib2sv, lfn, impl::str_by_index(8678));
			assign(target.VertexAttrib3d, lfn, impl::str_by_index(8681));
			assign(target.VertexAttrib3dv, lfn, impl::str_by_index(8684));
			assign(target.VertexAttrib3f, lfn, impl::str_by_index(8687));
			assign(target.VertexAttrib3fv, lfn, impl::str_by_index(8690));
			assign(target.VertexAttrib3s, lfn, impl::str_by_index(8695));
			assign(target.VertexAttrib3sv, lfn, impl::str_by_index(8698));
			assign(target.VertexAttrib4Nbv, lfn, impl::str_by_index(8701));
			assign(target.VertexAttrib4Niv, lfn, impl::str_by_index(8703));
			assign(target.VertexAttrib4Nsv, lfn, impl::str_by_index(8705));
			assign(target.VertexAttrib4Nub, lfn, impl::str_by_index(8707));
			assign(target.VertexAttrib4Nubv, lfn, impl::str_by_index(8709));
			assign(target.VertexAttrib4Nuiv, lfn, impl::str_by_index(8711));
			assign(target.VertexAttrib4Nusv, lfn, impl::str_by_index(8713));
			assign(target.VertexAttrib4bv, lfn, impl::str_by_index(8715));
			assign(target.VertexAttrib4d, lfn, impl::str_by_index(8717));
			assign(target.VertexAttrib4dv, lfn, impl::str_by_index(8720));
			assign(target.VertexAttrib4f, lfn, impl::str_by_index(8723));
			assign(target.VertexAttrib4fv, lfn, impl::str_by_index(8726));
			assign(target.VertexAttrib4iv, lfn, impl::str_by_index(8731));
			assign(target.VertexAttrib4s, lfn, impl::str_by_index(8733));
			assign(target.VertexAttrib4sv, lfn, impl::str_by_index(8736));
			assign(target.VertexAttrib4ubv, lfn, impl::str_by_index(8740));
			assign(target.VertexAttrib4uiv, lfn, impl::str_by_index(8743));
			assign(target.VertexAttrib4usv, lfn, impl::str_by_index(8745));
			assign(target.VertexAttribPointer, lfn, impl::str_by_index(8847));
			assign(target.UniformMatrix2x3fv, lfn, impl::str_by_index(8505));
			assign(target.UniformMatrix3x2fv, lfn, impl::str_by_index(8514));
			assign(target.UniformMatrix2x4fv, lfn, impl::str_by_index(8508));
			assign(target.UniformMatrix4x2fv, lfn, impl::str_by_index(8523));
			assign(target.UniformMatrix3x4fv, lfn, impl::str_by_index(8517));
			assign(target.UniformMatrix4x3fv, lfn, impl::str_by_index(8526));
			assign(target.ColorMaski, lfn, impl::str_by_index(6060));
			assign(target.GetBooleani_v, lfn, impl::str_by_index(6624));
			assign(target.GetIntegeri_v, lfn, impl::str_by_index(6731));
			assign(target.Enablei, lfn, impl::str_by_index(6402));
			assign(target.Disablei, lfn, impl::str_by_index(6306));
			assign(target.IsEnabledi, lfn, impl::str_by_index(7168));
			assign(target.BeginTransformFeedback, lfn, impl::str_by_index(5819));
			assign(target.EndTransformFeedback, lfn, impl::str_by_index(6420));
			assign(target.BindBufferRange, lfn, impl::str_by_index(5833));
			assign(target.BindBufferBase, lfn, impl::str_by_index(5828));
			assign(target.TransformFeedbackVaryings, lfn, impl::str_by_index(8397));
			assign(target.GetTransformFeedbackVarying, lfn, impl::str_by_index(6989));
			assign(target.ClampColor, lfn, impl::str_by_index(5953));
			assign(target.BeginConditionalRender, lfn, impl::str_by_index(5808));
			assign(target.EndConditionalRender, lfn, impl::str_by_index(6407));
			assign(target.VertexAttribIPointer, lfn, impl::str_by_index(8798));
			assign(target.GetVertexAttribIiv, lfn, impl::str_by_index(7032));
			assign(target.GetVertexAttribIuiv, lfn, impl::str_by_index(7034));
			assign(target.VertexAttribI1i, lfn, impl::str_by_index(8756));
			assign(target.VertexAttribI2i, lfn, impl::str_by_index(8764));
			assign(target.VertexAttribI3i, lfn, impl::str_by_index(8772));
			assign(target.VertexAttribI4i, lfn, impl::str_by_index(8782));
			assign(target.VertexAttribI1ui, lfn, impl::str_by_index(8760));
			assign(target.VertexAttribI2ui, lfn, impl::str_by_index(8768));
			assign(target.VertexAttribI3ui, lfn, impl::str_by_index(8776));
			assign(target.VertexAttribI4ui, lfn, impl::str_by_index(8790));
			assign(target.VertexAttribI1iv, lfn, impl::str_by_index(8758));
			assign(target.VertexAttribI2iv, lfn, impl::str_by_index(8766));
			assign(target.VertexAttribI3iv, lfn, impl::str_by_index(8774));
			assign(target.VertexAttribI4iv, lfn, impl::str_by_index(8784));
			assign(target.VertexAttribI1uiv, lfn, impl::str_by_index(8762));
			assign(target.VertexAttribI2uiv, lfn, impl::str_by_index(8770));
			assign(target.VertexAttribI3uiv, lfn, impl::str_by_index(8778));
			assign(target.VertexAttribI4uiv, lfn, impl::str_by_index(8792));
			assign(target.VertexAttribI4bv, lfn, impl::str_by_index(8780));
			assign(target.VertexAttribI4sv, lfn, impl::str_by_index(8786));
			assign(target.VertexAttribI4ubv, lfn, impl::str_by_index(8788));
			assign(target.VertexAttribI4usv, lfn, impl::str_by_index(8794));
			assign(target.GetUniformuiv, lfn, impl::str_by_index(7012));
			assign(target.BindFragDataLocation, lfn, impl::str_by_index(5838));
			assign(target.GetFragDataLocation, lfn, impl::str_by_index(6696));
			assign(target.Uniform1ui, lfn, impl::str_by_index(8419));
			assign(target.Uniform2ui, lfn, impl::str_by_index(8441));
			assign(target.Uniform3ui, lfn, impl::str_by_index(8463));
			assign(target.Uniform4ui, lfn, impl::str_by_index(8485));
			assign(target.Uniform1uiv, lfn, impl::str_by_index(8425));
			assign(target.Uniform2uiv, lfn, impl::str_by_index(8447));
			assign(target.Uniform3uiv, lfn, impl::str_by_index(8469));
			assign(target.Uniform4uiv, lfn, impl::str_by_index(8491));
			assign(target.TexParameterIiv, lfn, impl::str_by_index(8296));
			assign(target.TexParameterIuiv, lfn, impl::str_by_index(8299));
			assign(target.GetTexParameterIiv, lfn, impl::str_by_index(6956));
			assign(target.GetTexParameterIuiv, lfn, impl::str_by_index(6959));
			assign(target.ClearBufferiv, lfn, impl::str_by_index(5962));
			assign(target.ClearBufferuiv, lfn, impl::str_by_index(5963));
			assign(target.ClearBufferfv, lfn, impl::str_by_index(5961));
			assign(target.ClearBufferfi, lfn, impl::str_by_index(5960));
			assign(target.GetStringi, lfn, impl::str_by_index(6934));
			assign(target.IsRenderbuffer, lfn, impl::str_by_index(7197));
			assign(target.BindRenderbuffer, lfn, impl::str_by_index(5857));
			assign(target.DeleteRenderbuffers, lfn, impl::str_by_index(6257));
			assign(target.GenRenderbuffers, lfn, impl::str_by_index(6584));
			assign(target.RenderbufferStorage, lfn, impl::str_by_index(7978));
			assign(target.GetRenderbufferParameteriv, lfn, impl::str_by_index(6912));
			assign(target.IsFramebuffer, lfn, impl::str_by_index(7174));
			assign(target.BindFramebuffer, lfn, impl::str_by_index(5843));
			assign(target.DeleteFramebuffers, lfn, impl::str_by_index(6236));
			assign(target.GenFramebuffers, lfn, impl::str_by_index(6568));
			assign(target.CheckFramebufferStatus, lfn, impl::str_by_index(5948));
			assign(target.FramebufferTexture1D, lfn, impl::str_by_index(6533));
			assign(target.FramebufferTexture2D, lfn, impl::str_by_index(6535));
			assign(target.FramebufferTexture3D, lfn, impl::str_by_index(6541));
			assign(target.FramebufferRenderbuffer, lfn, impl::str_by_index(6526));
			assign(target.GetFramebufferAttachmentParameteriv, lfn, impl::str_by_index(6702));
			assign(target.GenerateMipmap, lfn, impl::str_by_index(6598));
			assign(target.BlitFramebuffer, lfn, impl::str_by_index(5929));
			assign(target.RenderbufferStorageMultisample, lfn, impl::str_by_index(7980));
			assign(target.FramebufferTextureLayer, lfn, impl::str_by_index(6548));
			assign(target.MapBufferRange, lfn, impl::str_by_index(7287));
			assign(target.FlushMappedBufferRange, lfn, impl::str_by_index(6469));
			assign(target.BindVertexArray, lfn, impl::str_by_index(5870));
			assign(target.DeleteVertexArrays, lfn, impl::str_by_index(6270));
			assign(target.GenVertexArrays, lfn, impl::str_by_index(6594));
			assign(target.IsVertexArray, lfn, impl::str_by_index(7213));
			assign(target.DrawArraysInstanced, lfn, impl::str_by_index(6317));
			assign(target.DrawElementsInstanced, lfn, impl::str_by_index(6342));
			assign(target.TexBuffer, lfn, impl::str_by_index(8171));
			assign(target.PrimitiveRestartIndex, lfn, impl::str_by_index(7717));
			assign(target.CopyBufferSubData, lfn, impl::str_by_index(6138));
			assign(target.GetUniformIndices, lfn, impl::str_by_index(6998));
			assign(target.GetActiveUniformsiv, lfn, impl::str_by_index(6615));
			assign(target.GetActiveUniformName, lfn, impl::str_by_index(6614));
			assign(target.GetUniformBlockIndex, lfn, impl::str_by_index(6996));
			assign(target.GetActiveUniformBlockiv, lfn, impl::str_by_index(6613));
			assign(target.GetActiveUniformBlockName, lfn, impl::str_by_index(6612));
			assign(target.UniformBlockBinding, lfn, impl::str_by_index(8493));
			assign(target.DrawElementsBaseVertex, lfn, impl::str_by_index(6338));
			assign(target.DrawRangeElementsBaseVertex, lfn, impl::str_by_index(6359));
			assign(target.DrawElementsInstancedBaseVertex, lfn, impl::str_by_index(6347));
			assign(target.MultiDrawElementsBaseVertex, lfn, impl::str_by_index(7378));
			assign(target.ProvokingVertex, lfn, impl::str_by_index(7907));
			assign(target.FenceSync, lfn, impl::str_by_index(6459));
			assign(target.IsSync, lfn, impl::str_by_index(7204));
			assign(target.DeleteSync, lfn, impl::str_by_index(6264));
			assign(target.ClientWaitSync, lfn, impl::str_by_index(5994));
			assign(target.WaitSync, lfn, impl::str_by_index(8936));
			assign(target.GetInteger64v, lfn, impl::str_by_index(6728));
			assign(target.GetSynciv, lfn, impl::str_by_index(6937));
			assign(target.GetInteger64i_v, lfn, impl::str_by_index(6727));
			assign(target.GetBufferParameteri64v, lfn, impl::str_by_index(6626));
			assign(target.FramebufferTexture, lfn, impl::str_by_index(6532));
			assign(target.TexImage2DMultisample, lfn, impl::str_by_index(8286));
			assign(target.TexImage3DMultisample, lfn, impl::str_by_index(8290));
			assign(target.GetMultisamplefv, lfn, impl::str_by_index(6785));
			assign(target.SampleMaski, lfn, impl::str_by_index(8033));
			assign(target.BindFragDataLocationIndexed, lfn, impl::str_by_index(5840));
			assign(target.GetFragDataIndex, lfn, impl::str_by_index(6694));
			assign(target.GenSamplers, lfn, impl::str_by_index(6587));
			assign(target.DeleteSamplers, lfn, impl::str_by_index(6260));
			assign(target.IsSampler, lfn, impl::str_by_index(7201));
			assign(target.BindSampler, lfn, impl::str_by_index(5860));
			assign(target.SamplerParameteri, lfn, impl::str_by_index(8044));
			assign(target.SamplerParameteriv, lfn, impl::str_by_index(8045));
			assign(target.SamplerParameterf, lfn, impl::str_by_index(8042));
			assign(target.SamplerParameterfv, lfn, impl::str_by_index(8043));
			assign(target.SamplerParameterIiv, lfn, impl::str_by_index(8036));
			assign(target.SamplerParameterIuiv, lfn, impl::str_by_index(8039));
			assign(target.GetSamplerParameteriv, lfn, impl::str_by_index(6922));
			assign(target.GetSamplerParameterIiv, lfn, impl::str_by_index(6915));
			assign(target.GetSamplerParameterfv, lfn, impl::str_by_index(6921));
			assign(target.GetSamplerParameterIuiv, lfn, impl::str_by_index(6918));
			assign(target.QueryCounter, lfn, impl::str_by_index(7917));
			assign(target.GetQueryObjecti64v, lfn, impl::str_by_index(6899));
			assign(target.GetQueryObjectui64v, lfn, impl::str_by_index(6904));
			assign(target.VertexAttribDivisor, lfn, impl::str_by_index(8749));
			assign(target.VertexAttribP1ui, lfn, impl::str_by_index(8838));
			assign(target.VertexAttribP1uiv, lfn, impl::str_by_index(8839));
			assign(target.VertexAttribP2ui, lfn, impl::str_by_index(8840));
			assign(target.VertexAttribP2uiv, lfn, impl::str_by_index(8841));
			assign(target.VertexAttribP3ui, lfn, impl::str_by_index(8842));
			assign(target.VertexAttribP3uiv, lfn, impl::str_by_index(8843));
			assign(target.VertexAttribP4ui, lfn, impl::str_by_index(8844));
			assign(target.VertexAttribP4uiv, lfn, impl::str_by_index(8845));
			assign(target.MinSampleShading, lfn, impl::str_by_index(7353));
			assign(target.BlendEquationi, lfn, impl::str_by_index(5909));
			assign(target.BlendEquationSeparatei, lfn, impl::str_by_index(5905));
			assign(target.BlendFunci, lfn, impl::str_by_index(5924));
			assign(target.BlendFuncSeparatei, lfn, impl::str_by_index(5920));
			assign(target.DrawArraysIndirect, lfn, impl::str_by_index(6316));
			assign(target.DrawElementsIndirect, lfn, impl::str_by_index(6341));
			assign(target.Uniform1d, lfn, impl::str_by_index(8405));
			assign(target.Uniform2d, lfn, impl::str_by_index(8427));
			assign(target.Uniform3d, lfn, impl::str_by_index(8449));
			assign(target.Uniform4d, lfn, impl::str_by_index(8471));
			assign(target.Uniform1dv, lfn, impl::str_by_index(8406));
			assign(target.Uniform2dv, lfn, impl::str_by_index(8428));
			assign(target.Uniform3dv, lfn, impl::str_by_index(8450));
			assign(target.Uniform4dv, lfn, impl::str_by_index(8472));
			assign(target.UniformMatrix2dv, lfn, impl::str_by_index(8501));
			assign(target.UniformMatrix3dv, lfn, impl::str_by_index(8510));
			assign(target.UniformMatrix4dv, lfn, impl::str_by_index(8519));
			assign(target.UniformMatrix2x3dv, lfn, impl::str_by_index(8504));
			assign(target.UniformMatrix2x4dv, lfn, impl::str_by_index(8507));
			assign(target.UniformMatrix3x2dv, lfn, impl::str_by_index(8513));
			assign(target.UniformMatrix3x4dv, lfn, impl::str_by_index(8516));
			assign(target.UniformMatrix4x2dv, lfn, impl::str_by_index(8522));
			assign(target.UniformMatrix4x3dv, lfn, impl::str_by_index(8525));
			assign(target.GetUniformdv, lfn, impl::str_by_index(7003));
			assign(target.GetSubroutineUniformLocation, lfn, impl::str_by_index(6936));
			assign(target.GetSubroutineIndex, lfn, impl::str_by_index(6935));
			assign(target.GetActiveSubroutineUniformiv, lfn, impl::str_by_index(6609));
			assign(target.GetActiveSubroutineUniformName, lfn, impl::str_by_index(6608));
			assign(target.GetActiveSubroutineName, lfn, impl::str_by_index(6607));
			assign(target.UniformSubroutinesuiv, lfn, impl::str_by_index(8528));
			assign(target.GetUniformSubroutineuiv, lfn, impl::str_by_index(7002));
			assign(target.GetProgramStageiv, lfn, impl::str_by_index(6887));
			assign(target.PatchParameteri, lfn, impl::str_by_index(7624));
			assign(target.PatchParameterfv, lfn, impl::str_by_index(7623));
			assign(target.BindTransformFeedback, lfn, impl::str_by_index(5868));
			assign(target.DeleteTransformFeedbacks, lfn, impl::str_by_index(6268));
			assign(target.GenTransformFeedbacks, lfn, impl::str_by_index(6592));
			assign(target.IsTransformFeedback, lfn, impl::str_by_index(7210));
			assign(target.PauseTransformFeedback, lfn, impl::str_by_index(7648));
			assign(target.ResumeTransformFeedback, lfn, impl::str_by_index(8019));
			assign(target.DrawTransformFeedback, lfn, impl::str_by_index(6372));
			assign(target.DrawTransformFeedbackStream, lfn, impl::str_by_index(6377));
			assign(target.BeginQueryIndexed, lfn, impl::str_by_index(5818));
			assign(target.EndQueryIndexed, lfn, impl::str_by_index(6418));
			assign(target.GetQueryIndexediv, lfn, impl::str_by_index(6898));
			assign(target.ReleaseShaderCompiler, lfn, impl::str_by_index(7975));
			assign(target.ShaderBinary, lfn, impl::str_by_index(8112));
			assign(target.GetShaderPrecisionFormat, lfn, impl::str_by_index(6927));
			assign(target.DepthRangef, lfn, impl::str_by_index(6286));
			assign(target.ClearDepthf, lfn, impl::str_by_index(5971));
			assign(target.GetProgramBinary, lfn, impl::str_by_index(6860));
			assign(target.ProgramBinary, lfn, impl::str_by_index(7723));
			assign(target.ProgramParameteri, lfn, impl::str_by_index(7758));
			assign(target.UseProgramStages, lfn, impl::str_by_index(8542));
			assign(target.ActiveShaderProgram, lfn, impl::str_by_index(5781));
			assign(target.CreateShaderProgramv, lfn, impl::str_by_index(6202));
			assign(target.BindProgramPipeline, lfn, impl::str_by_index(5855));
			assign(target.DeleteProgramPipelines, lfn, impl::str_by_index(6249));
			assign(target.GenProgramPipelines, lfn, impl::str_by_index(6576));
			assign(target.IsProgramPipeline, lfn, impl::str_by_index(7192));
			assign(target.GetProgramPipelineiv, lfn, impl::str_by_index(6878));
			assign(target.ProgramUniform1i, lfn, impl::str_by_index(7774));
			assign(target.ProgramUniform1iv, lfn, impl::str_by_index(7780));
			assign(target.ProgramUniform1f, lfn, impl::str_by_index(7770));
			assign(target.ProgramUniform1fv, lfn, impl::str_by_index(7772));
			assign(target.ProgramUniform1d, lfn, impl::str_by_index(7766));
			assign(target.ProgramUniform1dv, lfn, impl::str_by_index(7768));
			assign(target.ProgramUniform1ui, lfn, impl::str_by_index(7782));
			assign(target.ProgramUniform1uiv, lfn, impl::str_by_index(7788));
			assign(target.ProgramUniform2i, lfn, impl::str_by_index(7798));
			assign(target.ProgramUniform2iv, lfn, impl::str_by_index(7804));
			assign(target.ProgramUniform2f, lfn, impl::str_by_index(7794));
			assign(target.ProgramUniform2fv, lfn, impl::str_by_index(7796));
			assign(target.ProgramUniform2d, lfn, impl::str_by_index(7790));
			assign(target.ProgramUniform2dv, lfn, impl::str_by_index(7792));
			assign(target.ProgramUniform2ui, lfn, impl::str_by_index(7806));
			assign(target.ProgramUniform2uiv, lfn, impl::str_by_index(7812));
			assign(target.ProgramUniform3i, lfn, impl::str_by_index(7822));
			assign(target.ProgramUniform3iv, lfn, impl::str_by_index(7828));
			assign(target.ProgramUniform3f, lfn, impl::str_by_index(7818));
			assign(target.ProgramUniform3fv, lfn, impl::str_by_index(7820));
			assign(target.ProgramUniform3d, lfn, impl::str_by_index(7814));
			assign(target.ProgramUniform3dv, lfn, impl::str_by_index(7816));
			assign(target.ProgramUniform3ui, lfn, impl::str_by_index(7830));
			assign(target.ProgramUniform3uiv, lfn, impl::str_by_index(7836));
			assign(target.ProgramUniform4i, lfn, impl::str_by_index(7846));
			assign(target.ProgramUniform4iv, lfn, impl::str_by_index(7852));
			assign(target.ProgramUniform4f, lfn, impl::str_by_index(7842));
			assign(target.ProgramUniform4fv, lfn, impl::str_by_index(7844));
			assign(target.ProgramUniform4d, lfn, impl::str_by_index(7838));
			assign(target.ProgramUniform4dv, lfn, impl::str_by_index(7840));
			assign(target.ProgramUniform4ui, lfn, impl::str_by_index(7854));
			assign(target.ProgramUniform4uiv, lfn, impl::str_by_index(7860));
			assign(target.ProgramUniformMatrix2fv, lfn, impl::str_by_index(7870));
			assign(target.ProgramUniformMatrix3fv, lfn, impl::str_by_index(7882));
			assign(target.ProgramUniformMatrix4fv, lfn, impl::str_by_index(7894));
			assign(target.ProgramUniformMatrix2dv, lfn, impl::str_by_index(7868));
			assign(target.ProgramUniformMatrix3dv, lfn, impl::str_by_index(7880));
			assign(target.ProgramUniformMatrix4dv, lfn, impl::str_by_index(7892));
			assign(target.ProgramUniformMatrix2x3fv, lfn, impl::str_by_index(7874));
			assign(target.ProgramUniformMatrix3x2fv, lfn, impl::str_by_index(7886));
			assign(target.ProgramUniformMatrix2x4fv, lfn, impl::str_by_index(7878));
			assign(target.ProgramUniformMatrix4x2fv, lfn, impl::str_by_index(7898));
			assign(target.ProgramUniformMatrix3x4fv, lfn, impl::str_by_index(7890));
			assign(target.ProgramUniformMatrix4x3fv, lfn, impl::str_by_index(7902));
			assign(target.ProgramUniformMatrix2x3dv, lfn, impl::str_by_index(7872));
			assign(target.ProgramUniformMatrix3x2dv, lfn, impl::str_by_index(7884));
			assign(target.ProgramUniformMatrix2x4dv, lfn, impl::str_by_index(7876));
			assign(target.ProgramUniformMatrix4x2dv, lfn, impl::str_by_index(7896));
			assign(target.ProgramUniformMatrix3x4dv, lfn, impl::str_by_index(7888));
			assign(target.ProgramUniformMatrix4x3dv, lfn, impl::str_by_index(7900));
			assign(target.ValidateProgramPipeline, lfn, impl::str_by_index(8557));
			assign(target.GetProgramPipelineInfoLog, lfn, impl::str_by_index(6876));
			assign(target.VertexAttribL1d, lfn, impl::str_by_index(8800));
			assign(target.VertexAttribL2d, lfn, impl::str_by_index(8810));
			assign(target.VertexAttribL3d, lfn, impl::str_by_index(8818));
			assign(target.VertexAttribL4d, lfn, impl::str_by_index(8826));
			assign(target.VertexAttribL1dv, lfn, impl::str_by_index(8802));
			assign(target.VertexAttribL2dv, lfn, impl::str_by_index(8812));
			assign(target.VertexAttribL3dv, lfn, impl::str_by_index(8820));
			assign(target.VertexAttribL4dv, lfn, impl::str_by_index(8828));
			assign(target.VertexAttribLPointer, lfn, impl::str_by_index(8836));
			assign(target.GetVertexAttribLdv, lfn, impl::str_by_index(7036));
			assign(target.ViewportArrayv, lfn, impl::str_by_index(8924));
			assign(target.ViewportIndexedf, lfn, impl::str_by_index(8927));
			assign(target.ViewportIndexedfv, lfn, impl::str_by_index(8930));
			assign(target.ScissorArrayv, lfn, impl::str_by_index(8051));
			assign(target.ScissorIndexed, lfn, impl::str_by_index(8054));
			assign(target.ScissorIndexedv, lfn, impl::str_by_index(8057));
			assign(target.DepthRangeArrayv, lfn, impl::str_by_index(6281));
			assign(target.DepthRangeIndexed, lfn, impl::str_by_index(6282));
			assign(target.GetFloati_v, lfn, impl::str_by_index(6688));
			assign(target.GetDoublei_v, lfn, impl::str_by_index(6675));
			assign(target.DrawArraysInstancedBaseInstance, lfn, impl::str_by_index(6320));
			assign(target.DrawElementsInstancedBaseInstance, lfn, impl::str_by_index(6345));
			assign(target.DrawElementsInstancedBaseVertexBaseInstance, lfn, impl::str_by_index(6348));
			assign(target.GetInternalformativ, lfn, impl::str_by_index(6738));
			assign(target.GetActiveAtomicCounterBufferiv, lfn, impl::str_by_index(6604));
			assign(target.BindImageTexture, lfn, impl::str_by_index(5846));
			assign(target.MemoryBarrier, lfn, impl::str_by_index(7349));
			assign(target.TexStorage1D, lfn, impl::str_by_index(8311));
			assign(target.TexStorage2D, lfn, impl::str_by_index(8313));
			assign(target.TexStorage3D, lfn, impl::str_by_index(8316));
			assign(target.DrawTransformFeedbackInstanced, lfn, impl::str_by_index(6374));
			assign(target.DrawTransformFeedbackStreamInstanced, lfn, impl::str_by_index(6378));
			assign(target.ClearBufferData, lfn, impl::str_by_index(5958));
			assign(target.ClearBufferSubData, lfn, impl::str_by_index(5959));
			assign(target.DispatchCompute, lfn, impl::str_by_index(6311));
			assign(target.DispatchComputeIndirect, lfn, impl::str_by_index(6313));
			assign(target.CopyImageSubData, lfn, impl::str_by_index(6148));
			assign(target.FramebufferParameteri, lfn, impl::str_by_index(6523));
			assign(target.GetFramebufferParameteriv, lfn, impl::str_by_index(6706));
			assign(target.GetInternalformati64v, lfn, impl::str_by_index(6737));
			assign(target.InvalidateTexSubImage, lfn, impl::str_by_index(7160));
			assign(target.InvalidateTexImage, lfn, impl::str_by_index(7159));
			assign(target.InvalidateBufferSubData, lfn, impl::str_by_index(7154));
			assign(target.InvalidateBufferData, lfn, impl::str_by_index(7153));
			assign(target.InvalidateFramebuffer, lfn, impl::str_by_index(7155));
			assign(target.InvalidateSubFramebuffer, lfn, impl::str_by_index(7158));
			assign(target.MultiDrawArraysIndirect, lfn, impl::str_by_index(7369));
			assign(target.MultiDrawElementsIndirect, lfn, impl::str_by_index(7381));
			assign(target.GetProgramInterfaceiv, lfn, impl::str_by_index(6867));
			assign(target.GetProgramResourceIndex, lfn, impl::str_by_index(6880));
			assign(target.GetProgramResourceName, lfn, impl::str_by_index(6884));
			assign(target.GetProgramResourceiv, lfn, impl::str_by_index(6886));
			assign(target.GetProgramResourceLocation, lfn, impl::str_by_index(6881));
			assign(target.GetProgramResourceLocationIndex, lfn, impl::str_by_index(6882));
			assign(target.ShaderStorageBlockBinding, lfn, impl::str_by_index(8118));
			assign(target.TexBufferRange, lfn, impl::str_by_index(8175));
			assign(target.TexStorage2DMultisample, lfn, impl::str_by_index(8315));
			assign(target.TexStorage3DMultisample, lfn, impl::str_by_index(8318));
			assign(target.TextureView, lfn, impl::str_by_index(8389));
			assign(target.BindVertexBuffer, lfn, impl::str_by_index(5873));
			assign(target.VertexAttribFormat, lfn, impl::str_by_index(8754));
			assign(target.VertexAttribIFormat, lfn, impl::str_by_index(8796));
			assign(target.VertexAttribLFormat, lfn, impl::str_by_index(8834));
			assign(target.VertexAttribBinding, lfn, impl::str_by_index(8748));
			assign(target.VertexBindingDivisor, lfn, impl::str_by_index(8867));
			assign(target.DebugMessageControl, lfn, impl::str_by_index(6218));
			assign(target.DebugMessageInsert, lfn, impl::str_by_index(6222));
			assign(target.DebugMessageCallback, lfn, impl::str_by_index(6214));
			assign(target.GetDebugMessageLog, lfn, impl::str_by_index(6669));
			assign(target.PushDebugGroup, lfn, impl::str_by_index(7912));
			assign(target.PopDebugGroup, lfn, impl::str_by_index(7706));
			assign(target.ObjectLabel, lfn, impl::str_by_index(7607));
			assign(target.GetObjectLabel, lfn, impl::str_by_index(6813));
			assign(target.ObjectPtrLabel, lfn, impl::str_by_index(7609));
			assign(target.GetObjectPtrLabel, lfn, impl::str_by_index(6819));
			assign(target.GetPointerv, lfn, impl::str_by_index(6856));
			assign(target.BufferStorage, lfn, impl::str_by_index(5939));
			assign(target.ClearTexImage, lfn, impl::str_by_index(5986));
			assign(target.ClearTexSubImage, lfn, impl::str_by_index(5988));
			assign(target.BindBuffersBase, lfn, impl::str_by_index(5836));
			assign(target.BindBuffersRange, lfn, impl::str_by_index(5837));
			assign(target.BindTextures, lfn, impl::str_by_index(5867));
			assign(target.BindSamplers, lfn, impl::str_by_index(5861));
			assign(target.BindImageTextures, lfn, impl::str_by_index(5848));
			assign(target.BindVertexBuffers, lfn, impl::str_by_index(5874));
		}
 	}
}