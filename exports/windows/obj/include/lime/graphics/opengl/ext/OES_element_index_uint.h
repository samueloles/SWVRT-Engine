// Generated by Haxe 4.3.7
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_element_index_uint
#define INCLUDED_lime_graphics_opengl_ext_OES_element_index_uint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_c9ab2221efeb0596_7_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_element_index_uint)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES OES_element_index_uint_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OES_element_index_uint_obj OBJ_;
		OES_element_index_uint_obj();

	public:
		enum { _hx_ClassId = 0x48902b5a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_element_index_uint")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.OES_element_index_uint"); }

		inline static ::hx::ObjectPtr< OES_element_index_uint_obj > __new() {
			::hx::ObjectPtr< OES_element_index_uint_obj > __this = new OES_element_index_uint_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OES_element_index_uint_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OES_element_index_uint_obj *__this = (OES_element_index_uint_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OES_element_index_uint_obj), false, "lime.graphics.opengl.ext.OES_element_index_uint"));
			*(void **)__this = OES_element_index_uint_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_c9ab2221efeb0596_7_new)
HXDLIN(   7)		( ( ::lime::graphics::opengl::ext::OES_element_index_uint)(__this) )->UNSIGNED_INT = 5125;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OES_element_index_uint_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OES_element_index_uint",cc,fa,20,b1); }

		int UNSIGNED_INT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_element_index_uint */ 
