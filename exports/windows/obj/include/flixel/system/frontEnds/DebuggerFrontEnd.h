// Generated by Haxe 4.3.7
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#define INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_hx_system,debug,FlxDebuggerLayout)
HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,TrackerProfile)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,DebugToolsFrontEnd)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,DebugWindowsFrontEnd)
HX_DECLARE_CLASS3(flixel,_hx_system,frontEnds,DebuggerFrontEnd)
HX_DECLARE_CLASS3(flixel,_hx_system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(flixel,util,FlxHorizontalAlign)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxBaseSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal0)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace flixel{
namespace _hx_system{
namespace frontEnds{


class HXCPP_CLASS_ATTRIBUTES DebuggerFrontEnd_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DebuggerFrontEnd_obj OBJ_;
		DebuggerFrontEnd_obj();

	public:
		enum { _hx_ClassId = 0x76a44a29 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.frontEnds.DebuggerFrontEnd")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.frontEnds.DebuggerFrontEnd"); }
		static ::hx::ObjectPtr< DebuggerFrontEnd_obj > __new();
		static ::hx::ObjectPtr< DebuggerFrontEnd_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DebuggerFrontEnd_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DebuggerFrontEnd",13,f8,b4,5e); }

		int precision;
		::Array< int > toggleKeys;
		bool drawDebug;
		 ::flixel::util::_FlxSignal::FlxSignal0 drawDebugChanged;
		 ::flixel::util::_FlxSignal::FlxSignal0 visibilityChanged;
		bool visible;
		 ::flixel::_hx_system::frontEnds::DebugToolsFrontEnd tools;
		 ::flixel::_hx_system::frontEnds::DebugWindowsFrontEnd windows;
		void setLayout( ::flixel::_hx_system::debug::FlxDebuggerLayout Layout);
		::Dynamic setLayout_dyn();

		void resetLayout();
		::Dynamic resetLayout_dyn();

		 ::flixel::_hx_system::ui::FlxSystemButton addButton( ::flixel::util::FlxHorizontalAlign Alignment, ::openfl::display::BitmapData Icon, ::Dynamic UpHandler,::hx::Null< bool >  ToggleMode,::hx::Null< bool >  UpdateLayout);
		::Dynamic addButton_dyn();

		 ::flixel::_hx_system::debug::Window track( ::Dynamic ObjectOrClass,::String WindowTitle);
		::Dynamic track_dyn();

		void addTrackerProfile( ::flixel::_hx_system::debug::watch::TrackerProfile Profile);
		::Dynamic addTrackerProfile_dyn();

		void removeButton( ::flixel::_hx_system::ui::FlxSystemButton Button,::hx::Null< bool >  UpdateLayout);
		::Dynamic removeButton_dyn();

		bool set_drawDebug(bool Value);
		::Dynamic set_drawDebug_dyn();

		bool set_visible(bool Value);
		::Dynamic set_visible_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds

#endif /* INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd */ 
