// Generated by Haxe 4.3.7
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_vertex_array_object
#define INCLUDED_lime_graphics_opengl_ext_OES_vertex_array_object

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_ff26fc69b0514c16_7_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_vertex_array_object)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES OES_vertex_array_object_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OES_vertex_array_object_obj OBJ_;
		OES_vertex_array_object_obj();

	public:
		enum { _hx_ClassId = 0x44b1832c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_vertex_array_object")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.OES_vertex_array_object"); }

		inline static ::hx::ObjectPtr< OES_vertex_array_object_obj > __new() {
			::hx::ObjectPtr< OES_vertex_array_object_obj > __this = new OES_vertex_array_object_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OES_vertex_array_object_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OES_vertex_array_object_obj *__this = (OES_vertex_array_object_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OES_vertex_array_object_obj), false, "lime.graphics.opengl.ext.OES_vertex_array_object"));
			*(void **)__this = OES_vertex_array_object_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_ff26fc69b0514c16_7_new)
HXDLIN(   7)		( ( ::lime::graphics::opengl::ext::OES_vertex_array_object)(__this) )->VERTEX_ARRAY_BINDING_OES = 34229;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OES_vertex_array_object_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OES_vertex_array_object",de,b2,44,8d); }

		int VERTEX_ARRAY_BINDING_OES;
		 ::Dynamic createVertexArrayOES();
		::Dynamic createVertexArrayOES_dyn();

		void deleteVertexArrayOES( ::Dynamic arrayObject);
		::Dynamic deleteVertexArrayOES_dyn();

		bool isVertexArrayOES( ::Dynamic arrayObject);
		::Dynamic isVertexArrayOES_dyn();

		void bindVertexArrayOES( ::Dynamic arrayObject);
		::Dynamic bindVertexArrayOES_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_vertex_array_object */ 
