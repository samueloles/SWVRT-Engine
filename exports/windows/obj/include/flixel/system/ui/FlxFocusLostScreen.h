// Generated by Haxe 4.3.7
#ifndef INCLUDED_flixel_system_ui_FlxFocusLostScreen
#define INCLUDED_flixel_system_ui_FlxFocusLostScreen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS3(flixel,_hx_system,ui,FlxFocusLostScreen)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace flixel{
namespace _hx_system{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxFocusLostScreen_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef FlxFocusLostScreen_obj OBJ_;
		FlxFocusLostScreen_obj();

	public:
		enum { _hx_ClassId = 0x3b2887d5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.ui.FlxFocusLostScreen")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.ui.FlxFocusLostScreen"); }
		static ::hx::ObjectPtr< FlxFocusLostScreen_obj > __new();
		static ::hx::ObjectPtr< FlxFocusLostScreen_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxFocusLostScreen_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxFocusLostScreen",36,b6,ac,46); }

		void draw();
		::Dynamic draw_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace ui

#endif /* INCLUDED_flixel_system_ui_FlxFocusLostScreen */ 
