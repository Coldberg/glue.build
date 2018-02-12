#include <glue/lvl1/gl/1.0.base.hpp>
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
	inline namespace base_1_0 
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
			assign(target.NewList, lfn, impl::str_by_index(7571));
			assign(target.EndList, lfn, impl::str_by_index(6411));
			assign(target.CallList, lfn, impl::str_by_index(5946));
			assign(target.CallLists, lfn, impl::str_by_index(5947));
			assign(target.DeleteLists, lfn, impl::str_by_index(6239));
			assign(target.GenLists, lfn, impl::str_by_index(6571));
			assign(target.ListBase, lfn, impl::str_by_index(7244));
			assign(target.Begin, lfn, impl::str_by_index(5807));
			assign(target.Bitmap, lfn, impl::str_by_index(5889));
			assign(target.Color3b, lfn, impl::str_by_index(6005));
			assign(target.Color3bv, lfn, impl::str_by_index(6006));
			assign(target.Color3d, lfn, impl::str_by_index(6007));
			assign(target.Color3dv, lfn, impl::str_by_index(6008));
			assign(target.Color3f, lfn, impl::str_by_index(6009));
			assign(target.Color3fv, lfn, impl::str_by_index(6012));
			assign(target.Color3i, lfn, impl::str_by_index(6015));
			assign(target.Color3iv, lfn, impl::str_by_index(6016));
			assign(target.Color3s, lfn, impl::str_by_index(6017));
			assign(target.Color3sv, lfn, impl::str_by_index(6018));
			assign(target.Color3ub, lfn, impl::str_by_index(6019));
			assign(target.Color3ubv, lfn, impl::str_by_index(6020));
			assign(target.Color3ui, lfn, impl::str_by_index(6021));
			assign(target.Color3uiv, lfn, impl::str_by_index(6022));
			assign(target.Color3us, lfn, impl::str_by_index(6023));
			assign(target.Color3usv, lfn, impl::str_by_index(6024));
			assign(target.Color4b, lfn, impl::str_by_index(6027));
			assign(target.Color4bv, lfn, impl::str_by_index(6028));
			assign(target.Color4d, lfn, impl::str_by_index(6029));
			assign(target.Color4dv, lfn, impl::str_by_index(6030));
			assign(target.Color4f, lfn, impl::str_by_index(6031));
			assign(target.Color4fv, lfn, impl::str_by_index(6034));
			assign(target.Color4i, lfn, impl::str_by_index(6037));
			assign(target.Color4iv, lfn, impl::str_by_index(6038));
			assign(target.Color4s, lfn, impl::str_by_index(6039));
			assign(target.Color4sv, lfn, impl::str_by_index(6040));
			assign(target.Color4ub, lfn, impl::str_by_index(6041));
			assign(target.Color4ubv, lfn, impl::str_by_index(6046));
			assign(target.Color4ui, lfn, impl::str_by_index(6047));
			assign(target.Color4uiv, lfn, impl::str_by_index(6048));
			assign(target.Color4us, lfn, impl::str_by_index(6049));
			assign(target.Color4usv, lfn, impl::str_by_index(6050));
			assign(target.EdgeFlag, lfn, impl::str_by_index(6381));
			assign(target.EdgeFlagv, lfn, impl::str_by_index(6386));
			assign(target.End, lfn, impl::str_by_index(6406));
			assign(target.Indexd, lfn, impl::str_by_index(7135));
			assign(target.Indexdv, lfn, impl::str_by_index(7136));
			assign(target.Indexf, lfn, impl::str_by_index(7137));
			assign(target.Indexfv, lfn, impl::str_by_index(7138));
			assign(target.Indexi, lfn, impl::str_by_index(7139));
			assign(target.Indexiv, lfn, impl::str_by_index(7140));
			assign(target.Indexs, lfn, impl::str_by_index(7141));
			assign(target.Indexsv, lfn, impl::str_by_index(7142));
			assign(target.Normal3b, lfn, impl::str_by_index(7573));
			assign(target.Normal3bv, lfn, impl::str_by_index(7574));
			assign(target.Normal3d, lfn, impl::str_by_index(7575));
			assign(target.Normal3dv, lfn, impl::str_by_index(7576));
			assign(target.Normal3f, lfn, impl::str_by_index(7577));
			assign(target.Normal3fv, lfn, impl::str_by_index(7580));
			assign(target.Normal3i, lfn, impl::str_by_index(7583));
			assign(target.Normal3iv, lfn, impl::str_by_index(7584));
			assign(target.Normal3s, lfn, impl::str_by_index(7585));
			assign(target.Normal3sv, lfn, impl::str_by_index(7586));
			assign(target.RasterPos2d, lfn, impl::str_by_index(7923));
			assign(target.RasterPos2dv, lfn, impl::str_by_index(7924));
			assign(target.RasterPos2f, lfn, impl::str_by_index(7925));
			assign(target.RasterPos2fv, lfn, impl::str_by_index(7926));
			assign(target.RasterPos2i, lfn, impl::str_by_index(7927));
			assign(target.RasterPos2iv, lfn, impl::str_by_index(7928));
			assign(target.RasterPos2s, lfn, impl::str_by_index(7929));
			assign(target.RasterPos2sv, lfn, impl::str_by_index(7930));
			assign(target.RasterPos3d, lfn, impl::str_by_index(7933));
			assign(target.RasterPos3dv, lfn, impl::str_by_index(7934));
			assign(target.RasterPos3f, lfn, impl::str_by_index(7935));
			assign(target.RasterPos3fv, lfn, impl::str_by_index(7936));
			assign(target.RasterPos3i, lfn, impl::str_by_index(7937));
			assign(target.RasterPos3iv, lfn, impl::str_by_index(7938));
			assign(target.RasterPos3s, lfn, impl::str_by_index(7939));
			assign(target.RasterPos3sv, lfn, impl::str_by_index(7940));
			assign(target.RasterPos4d, lfn, impl::str_by_index(7943));
			assign(target.RasterPos4dv, lfn, impl::str_by_index(7944));
			assign(target.RasterPos4f, lfn, impl::str_by_index(7945));
			assign(target.RasterPos4fv, lfn, impl::str_by_index(7946));
			assign(target.RasterPos4i, lfn, impl::str_by_index(7947));
			assign(target.RasterPos4iv, lfn, impl::str_by_index(7948));
			assign(target.RasterPos4s, lfn, impl::str_by_index(7949));
			assign(target.RasterPos4sv, lfn, impl::str_by_index(7950));
			assign(target.Rectd, lfn, impl::str_by_index(7964));
			assign(target.Rectdv, lfn, impl::str_by_index(7965));
			assign(target.Rectf, lfn, impl::str_by_index(7966));
			assign(target.Rectfv, lfn, impl::str_by_index(7967));
			assign(target.Recti, lfn, impl::str_by_index(7968));
			assign(target.Rectiv, lfn, impl::str_by_index(7969));
			assign(target.Rects, lfn, impl::str_by_index(7970));
			assign(target.Rectsv, lfn, impl::str_by_index(7971));
			assign(target.TexCoord1d, lfn, impl::str_by_index(8182));
			assign(target.TexCoord1dv, lfn, impl::str_by_index(8183));
			assign(target.TexCoord1f, lfn, impl::str_by_index(8184));
			assign(target.TexCoord1fv, lfn, impl::str_by_index(8185));
			assign(target.TexCoord1i, lfn, impl::str_by_index(8188));
			assign(target.TexCoord1iv, lfn, impl::str_by_index(8189));
			assign(target.TexCoord1s, lfn, impl::str_by_index(8190));
			assign(target.TexCoord1sv, lfn, impl::str_by_index(8191));
			assign(target.TexCoord2d, lfn, impl::str_by_index(8196));
			assign(target.TexCoord2dv, lfn, impl::str_by_index(8197));
			assign(target.TexCoord2f, lfn, impl::str_by_index(8198));
			assign(target.TexCoord2fv, lfn, impl::str_by_index(8209));
			assign(target.TexCoord2i, lfn, impl::str_by_index(8212));
			assign(target.TexCoord2iv, lfn, impl::str_by_index(8213));
			assign(target.TexCoord2s, lfn, impl::str_by_index(8214));
			assign(target.TexCoord2sv, lfn, impl::str_by_index(8215));
			assign(target.TexCoord3d, lfn, impl::str_by_index(8220));
			assign(target.TexCoord3dv, lfn, impl::str_by_index(8221));
			assign(target.TexCoord3f, lfn, impl::str_by_index(8222));
			assign(target.TexCoord3fv, lfn, impl::str_by_index(8223));
			assign(target.TexCoord3i, lfn, impl::str_by_index(8226));
			assign(target.TexCoord3iv, lfn, impl::str_by_index(8227));
			assign(target.TexCoord3s, lfn, impl::str_by_index(8228));
			assign(target.TexCoord3sv, lfn, impl::str_by_index(8229));
			assign(target.TexCoord4d, lfn, impl::str_by_index(8234));
			assign(target.TexCoord4dv, lfn, impl::str_by_index(8235));
			assign(target.TexCoord4f, lfn, impl::str_by_index(8236));
			assign(target.TexCoord4fv, lfn, impl::str_by_index(8241));
			assign(target.TexCoord4i, lfn, impl::str_by_index(8244));
			assign(target.TexCoord4iv, lfn, impl::str_by_index(8245));
			assign(target.TexCoord4s, lfn, impl::str_by_index(8246));
			assign(target.TexCoord4sv, lfn, impl::str_by_index(8247));
			assign(target.Vertex2d, lfn, impl::str_by_index(8571));
			assign(target.Vertex2dv, lfn, impl::str_by_index(8572));
			assign(target.Vertex2f, lfn, impl::str_by_index(8573));
			assign(target.Vertex2fv, lfn, impl::str_by_index(8574));
			assign(target.Vertex2i, lfn, impl::str_by_index(8577));
			assign(target.Vertex2iv, lfn, impl::str_by_index(8578));
			assign(target.Vertex2s, lfn, impl::str_by_index(8579));
			assign(target.Vertex2sv, lfn, impl::str_by_index(8580));
			assign(target.Vertex3d, lfn, impl::str_by_index(8585));
			assign(target.Vertex3dv, lfn, impl::str_by_index(8586));
			assign(target.Vertex3f, lfn, impl::str_by_index(8587));
			assign(target.Vertex3fv, lfn, impl::str_by_index(8588));
			assign(target.Vertex3i, lfn, impl::str_by_index(8591));
			assign(target.Vertex3iv, lfn, impl::str_by_index(8592));
			assign(target.Vertex3s, lfn, impl::str_by_index(8593));
			assign(target.Vertex3sv, lfn, impl::str_by_index(8594));
			assign(target.Vertex4d, lfn, impl::str_by_index(8599));
			assign(target.Vertex4dv, lfn, impl::str_by_index(8600));
			assign(target.Vertex4f, lfn, impl::str_by_index(8601));
			assign(target.Vertex4fv, lfn, impl::str_by_index(8602));
			assign(target.Vertex4i, lfn, impl::str_by_index(8605));
			assign(target.Vertex4iv, lfn, impl::str_by_index(8606));
			assign(target.Vertex4s, lfn, impl::str_by_index(8607));
			assign(target.Vertex4sv, lfn, impl::str_by_index(8608));
			assign(target.ClipPlane, lfn, impl::str_by_index(5998));
			assign(target.ColorMaterial, lfn, impl::str_by_index(6063));
			assign(target.Fogf, lfn, impl::str_by_index(6494));
			assign(target.Fogfv, lfn, impl::str_by_index(6495));
			assign(target.Fogi, lfn, impl::str_by_index(6496));
			assign(target.Fogiv, lfn, impl::str_by_index(6497));
			assign(target.Lightf, lfn, impl::str_by_index(7230));
			assign(target.Lightfv, lfn, impl::str_by_index(7231));
			assign(target.Lighti, lfn, impl::str_by_index(7232));
			assign(target.Lightiv, lfn, impl::str_by_index(7233));
			assign(target.LightModelf, lfn, impl::str_by_index(7222));
			assign(target.LightModelfv, lfn, impl::str_by_index(7223));
			assign(target.LightModeli, lfn, impl::str_by_index(7224));
			assign(target.LightModeliv, lfn, impl::str_by_index(7225));
			assign(target.LineStipple, lfn, impl::str_by_index(7238));
			assign(target.Materialf, lfn, impl::str_by_index(7308));
			assign(target.Materialfv, lfn, impl::str_by_index(7309));
			assign(target.Materiali, lfn, impl::str_by_index(7310));
			assign(target.Materialiv, lfn, impl::str_by_index(7311));
			assign(target.PolygonStipple, lfn, impl::str_by_index(7703));
			assign(target.ShadeModel, lfn, impl::str_by_index(8111));
			assign(target.TexEnvf, lfn, impl::str_by_index(8263));
			assign(target.TexEnvfv, lfn, impl::str_by_index(8264));
			assign(target.TexEnvi, lfn, impl::str_by_index(8265));
			assign(target.TexEnviv, lfn, impl::str_by_index(8266));
			assign(target.TexGend, lfn, impl::str_by_index(8272));
			assign(target.TexGendv, lfn, impl::str_by_index(8273));
			assign(target.TexGenf, lfn, impl::str_by_index(8274));
			assign(target.TexGenfv, lfn, impl::str_by_index(8276));
			assign(target.TexGeni, lfn, impl::str_by_index(8278));
			assign(target.TexGeniv, lfn, impl::str_by_index(8280));
			assign(target.FeedbackBuffer, lfn, impl::str_by_index(6457));
			assign(target.SelectBuffer, lfn, impl::str_by_index(8100));
			assign(target.RenderMode, lfn, impl::str_by_index(7977));
			assign(target.InitNames, lfn, impl::str_by_index(7147));
			assign(target.LoadName, lfn, impl::str_by_index(7256));
			assign(target.PassThrough, lfn, impl::str_by_index(7621));
			assign(target.PopName, lfn, impl::str_by_index(7710));
			assign(target.PushName, lfn, impl::str_by_index(7916));
			assign(target.ClearAccum, lfn, impl::str_by_index(5956));
			assign(target.ClearIndex, lfn, impl::str_by_index(5975));
			assign(target.IndexMask, lfn, impl::str_by_index(7130));
			assign(target.Accum, lfn, impl::str_by_index(5778));
			assign(target.PopAttrib, lfn, impl::str_by_index(7704));
			assign(target.PushAttrib, lfn, impl::str_by_index(7909));
			assign(target.Map1d, lfn, impl::str_by_index(7278));
			assign(target.Map1f, lfn, impl::str_by_index(7279));
			assign(target.Map2d, lfn, impl::str_by_index(7281));
			assign(target.Map2f, lfn, impl::str_by_index(7282));
			assign(target.MapGrid1d, lfn, impl::str_by_index(7290));
			assign(target.MapGrid1f, lfn, impl::str_by_index(7291));
			assign(target.MapGrid2d, lfn, impl::str_by_index(7293));
			assign(target.MapGrid2f, lfn, impl::str_by_index(7294));
			assign(target.EvalCoord1d, lfn, impl::str_by_index(6425));
			assign(target.EvalCoord1dv, lfn, impl::str_by_index(6426));
			assign(target.EvalCoord1f, lfn, impl::str_by_index(6427));
			assign(target.EvalCoord1fv, lfn, impl::str_by_index(6428));
			assign(target.EvalCoord2d, lfn, impl::str_by_index(6431));
			assign(target.EvalCoord2dv, lfn, impl::str_by_index(6432));
			assign(target.EvalCoord2f, lfn, impl::str_by_index(6433));
			assign(target.EvalCoord2fv, lfn, impl::str_by_index(6434));
			assign(target.EvalMesh1, lfn, impl::str_by_index(6438));
			assign(target.EvalPoint1, lfn, impl::str_by_index(6440));
			assign(target.EvalMesh2, lfn, impl::str_by_index(6439));
			assign(target.EvalPoint2, lfn, impl::str_by_index(6441));
			assign(target.AlphaFunc, lfn, impl::str_by_index(5790));
			assign(target.PixelZoom, lfn, impl::str_by_index(7670));
			assign(target.PixelTransferf, lfn, impl::str_by_index(7663));
			assign(target.PixelTransferi, lfn, impl::str_by_index(7664));
			assign(target.PixelMapfv, lfn, impl::str_by_index(7651));
			assign(target.PixelMapuiv, lfn, impl::str_by_index(7652));
			assign(target.PixelMapusv, lfn, impl::str_by_index(7653));
			assign(target.CopyPixels, lfn, impl::str_by_index(6159));
			assign(target.DrawPixels, lfn, impl::str_by_index(6355));
			assign(target.GetClipPlane, lfn, impl::str_by_index(6635));
			assign(target.GetLightfv, lfn, impl::str_by_index(6742));
			assign(target.GetLightiv, lfn, impl::str_by_index(6743));
			assign(target.GetMapdv, lfn, impl::str_by_index(6757));
			assign(target.GetMapfv, lfn, impl::str_by_index(6758));
			assign(target.GetMapiv, lfn, impl::str_by_index(6759));
			assign(target.GetMaterialfv, lfn, impl::str_by_index(6761));
			assign(target.GetMaterialiv, lfn, impl::str_by_index(6762));
			assign(target.GetPixelMapfv, lfn, impl::str_by_index(6846));
			assign(target.GetPixelMapuiv, lfn, impl::str_by_index(6847));
			assign(target.GetPixelMapusv, lfn, impl::str_by_index(6848));
			assign(target.GetPolygonStipple, lfn, impl::str_by_index(6859));
			assign(target.GetTexEnvfv, lfn, impl::str_by_index(6941));
			assign(target.GetTexEnviv, lfn, impl::str_by_index(6942));
			assign(target.GetTexGendv, lfn, impl::str_by_index(6946));
			assign(target.GetTexGenfv, lfn, impl::str_by_index(6947));
			assign(target.GetTexGeniv, lfn, impl::str_by_index(6949));
			assign(target.IsList, lfn, impl::str_by_index(7179));
			assign(target.Frustum, lfn, impl::str_by_index(6557));
			assign(target.LoadIdentity, lfn, impl::str_by_index(7250));
			assign(target.LoadMatrixf, lfn, impl::str_by_index(7253));
			assign(target.LoadMatrixd, lfn, impl::str_by_index(7252));
			assign(target.MatrixMode, lfn, impl::str_by_index(7330));
			assign(target.MultMatrixf, lfn, impl::str_by_index(7359));
			assign(target.MultMatrixd, lfn, impl::str_by_index(7358));
			assign(target.Ortho, lfn, impl::str_by_index(7613));
			assign(target.PopMatrix, lfn, impl::str_by_index(7709));
			assign(target.PushMatrix, lfn, impl::str_by_index(7915));
			assign(target.Rotated, lfn, impl::str_by_index(8021));
			assign(target.Rotatef, lfn, impl::str_by_index(8022));
			assign(target.Scaled, lfn, impl::str_by_index(8046));
			assign(target.Scalef, lfn, impl::str_by_index(8047));
			assign(target.Translated, lfn, impl::str_by_index(8401));
			assign(target.Translatef, lfn, impl::str_by_index(8402));
		}
 	}
}