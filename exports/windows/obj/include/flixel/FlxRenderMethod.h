// Generated by Haxe 4.3.7
#ifndef INCLUDED_flixel_FlxRenderMethod
#define INCLUDED_flixel_FlxRenderMethod

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxRenderMethod)
namespace flixel{


class FlxRenderMethod_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxRenderMethod_obj OBJ_;

	public:
		FlxRenderMethod_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.FlxRenderMethod",37,14,c6,a4); }
		::String __ToString() const { return HX_("FlxRenderMethod.",c5,89,ac,fc) + _hx_tag; }

		static ::flixel::FlxRenderMethod BLITTING;
		static inline ::flixel::FlxRenderMethod BLITTING_dyn() { return BLITTING; }
		static ::flixel::FlxRenderMethod DRAW_TILES;
		static inline ::flixel::FlxRenderMethod DRAW_TILES_dyn() { return DRAW_TILES; }
};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxRenderMethod */ 
