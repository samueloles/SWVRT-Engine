// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_display_CairoRenderer
#define INCLUDED_openfl_display_CairoRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
HX_DECLARE_CLASS3(lime,graphics,cairo,Cairo)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,display,CairoRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES CairoRenderer_obj : public  ::openfl::display::DisplayObjectRenderer_obj
{
	public:
		typedef  ::openfl::display::DisplayObjectRenderer_obj super;
		typedef CairoRenderer_obj OBJ_;
		CairoRenderer_obj();

	public:
		enum { _hx_ClassId = 0x2e1d6819 };

		void __construct( ::lime::graphics::cairo::Cairo cairo);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.CairoRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.CairoRenderer"); }
		static ::hx::ObjectPtr< CairoRenderer_obj > __new( ::lime::graphics::cairo::Cairo cairo);
		static ::hx::ObjectPtr< CairoRenderer_obj > __alloc(::hx::Ctx *_hx_ctx, ::lime::graphics::cairo::Cairo cairo);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CairoRenderer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CairoRenderer",cb,c9,86,aa); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::lime::graphics::cairo::Cairo cairo;
		 ::openfl::geom::Matrix _hx___matrix;
		 ::lime::utils::ArrayBufferView _hx___matrix3;
		void applyMatrix( ::openfl::geom::Matrix transform, ::lime::graphics::cairo::Cairo cairo);
		::Dynamic applyMatrix_dyn();

		void _hx___clear();

		void _hx___popMask();

		void _hx___popMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  handleScrollRect);

		void _hx___popMaskRect();

		void _hx___pushMask( ::openfl::display::DisplayObject mask);

		void _hx___pushMaskObject( ::openfl::display::DisplayObject object,::hx::Null< bool >  handleScrollRect);

		void _hx___pushMaskRect( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix transform);

		void _hx___render(::Dynamic object);

		void _hx___renderDrawable(::Dynamic object);
		::Dynamic _hx___renderDrawable_dyn();

		void _hx___renderDrawableMask(::Dynamic object);
		::Dynamic _hx___renderDrawableMask_dyn();

		void _hx___setBlendMode( ::Dynamic value);

		void _hx___setBlendModeCairo( ::lime::graphics::cairo::Cairo cairo, ::Dynamic value);
		::Dynamic _hx___setBlendModeCairo_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_CairoRenderer */ 
