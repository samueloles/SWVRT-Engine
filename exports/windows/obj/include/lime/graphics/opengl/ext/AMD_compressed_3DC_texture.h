// Generated by Haxe 4.3.7
#ifndef INCLUDED_lime_graphics_opengl_ext_AMD_compressed_3DC_texture
#define INCLUDED_lime_graphics_opengl_ext_AMD_compressed_3DC_texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d2a7e04602cd59d8_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,AMD_compressed_3DC_texture)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES AMD_compressed_3DC_texture_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AMD_compressed_3DC_texture_obj OBJ_;
		AMD_compressed_3DC_texture_obj();

	public:
		enum { _hx_ClassId = 0x0ff1fa41 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.AMD_compressed_3DC_texture")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.AMD_compressed_3DC_texture"); }

		inline static ::hx::ObjectPtr< AMD_compressed_3DC_texture_obj > __new() {
			::hx::ObjectPtr< AMD_compressed_3DC_texture_obj > __this = new AMD_compressed_3DC_texture_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< AMD_compressed_3DC_texture_obj > __alloc(::hx::Ctx *_hx_ctx) {
			AMD_compressed_3DC_texture_obj *__this = (AMD_compressed_3DC_texture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AMD_compressed_3DC_texture_obj), false, "lime.graphics.opengl.ext.AMD_compressed_3DC_texture"));
			*(void **)__this = AMD_compressed_3DC_texture_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d2a7e04602cd59d8_4_new)
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::AMD_compressed_3DC_texture)(__this) )->_3DC_XY_AMD = 34810;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::AMD_compressed_3DC_texture)(__this) )->_3DC_X_AMD = 34809;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AMD_compressed_3DC_texture_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AMD_compressed_3DC_texture",97,af,9a,80); }

		int _3DC_X_AMD;
		int _3DC_XY_AMD;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_AMD_compressed_3DC_texture */ 
