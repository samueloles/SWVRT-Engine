// Generated by Haxe 4.3.7
#ifndef INCLUDED_lime_graphics__CairoRenderContext_CairoRenderContext_Impl_
#define INCLUDED_lime_graphics__CairoRenderContext_CairoRenderContext_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS3(lime,graphics,_CairoRenderContext,CairoRenderContext_Impl_)
HX_DECLARE_CLASS3(lime,graphics,cairo,Cairo)

namespace lime{
namespace graphics{
namespace _CairoRenderContext{


class HXCPP_CLASS_ATTRIBUTES CairoRenderContext_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CairoRenderContext_Impl__obj OBJ_;
		CairoRenderContext_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7ffd6205 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics._CairoRenderContext.CairoRenderContext_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics._CairoRenderContext.CairoRenderContext_Impl_"); }

		inline static ::hx::ObjectPtr< CairoRenderContext_Impl__obj > __new() {
			::hx::ObjectPtr< CairoRenderContext_Impl__obj > __this = new CairoRenderContext_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CairoRenderContext_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			CairoRenderContext_Impl__obj *__this = (CairoRenderContext_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CairoRenderContext_Impl__obj), false, "lime.graphics._CairoRenderContext.CairoRenderContext_Impl_"));
			*(void **)__this = CairoRenderContext_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CairoRenderContext_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CairoRenderContext_Impl_",11,2f,c0,0c); }

		static  ::lime::graphics::cairo::Cairo fromRenderContext( ::lime::graphics::RenderContext context);
		static ::Dynamic fromRenderContext_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace _CairoRenderContext

#endif /* INCLUDED_lime_graphics__CairoRenderContext_CairoRenderContext_Impl_ */ 
