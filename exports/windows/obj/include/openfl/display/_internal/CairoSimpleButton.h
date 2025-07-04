// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_display__internal_CairoSimpleButton
#define INCLUDED_openfl_display__internal_CairoSimpleButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,CairoRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,SimpleButton)
HX_DECLARE_CLASS3(openfl,display,_internal,CairoSimpleButton)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES CairoSimpleButton_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CairoSimpleButton_obj OBJ_;
		CairoSimpleButton_obj();

	public:
		enum { _hx_ClassId = 0x074905e2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.CairoSimpleButton")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.CairoSimpleButton"); }

		inline static ::hx::ObjectPtr< CairoSimpleButton_obj > __new() {
			::hx::ObjectPtr< CairoSimpleButton_obj > __this = new CairoSimpleButton_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CairoSimpleButton_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CairoSimpleButton_obj *__this = (CairoSimpleButton_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CairoSimpleButton_obj), false, "openfl.display._internal.CairoSimpleButton"));
			*(void **)__this = CairoSimpleButton_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CairoSimpleButton_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CairoSimpleButton",4c,f4,3b,b7); }

		static void renderDrawable( ::openfl::display::SimpleButton simpleButton, ::openfl::display::CairoRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableMask( ::openfl::display::SimpleButton simpleButton, ::openfl::display::CairoRenderer renderer);
		static ::Dynamic renderDrawableMask_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_CairoSimpleButton */ 
