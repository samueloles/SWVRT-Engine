// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_ui_GameInput
#define INCLUDED_openfl_ui_GameInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,ui,GameInput)
HX_DECLARE_CLASS2(openfl,ui,GameInputDevice)

namespace openfl{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES GameInput_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef GameInput_obj OBJ_;
		GameInput_obj();

	public:
		enum { _hx_ClassId = 0x023be2f4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.ui.GameInput")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.ui.GameInput"); }
		static ::hx::ObjectPtr< GameInput_obj > __new();
		static ::hx::ObjectPtr< GameInput_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GameInput_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GameInput",98,92,0b,95); }

		static void __boot();
		static  ::Dynamic __meta__;
		static bool isSupported;
		static int numDevices;
		static ::Array< ::Dynamic> _hx___deviceList;
		static ::Array< ::Dynamic> _hx___instances;
		static  ::haxe::ds::ObjectMap _hx___devices;
		static  ::openfl::ui::GameInputDevice getDeviceAt(int index);
		static ::Dynamic getDeviceAt_dyn();

		static  ::openfl::ui::GameInputDevice _hx___getDevice( ::lime::ui::Gamepad gamepad);
		static ::Dynamic _hx___getDevice_dyn();

		static void _hx___onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value);
		static ::Dynamic _hx___onGamepadAxisMove_dyn();

		static void _hx___onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button);
		static ::Dynamic _hx___onGamepadButtonDown_dyn();

		static void _hx___onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button);
		static ::Dynamic _hx___onGamepadButtonUp_dyn();

		static void _hx___onGamepadConnect( ::lime::ui::Gamepad gamepad);
		static ::Dynamic _hx___onGamepadConnect_dyn();

		static void _hx___onGamepadDisconnect( ::lime::ui::Gamepad gamepad);
		static ::Dynamic _hx___onGamepadDisconnect_dyn();

		void addEventListener(::String type, ::Dynamic listener,::hx::Null< bool >  useCapture,::hx::Null< int >  priority,::hx::Null< bool >  useWeakReference);

};

} // end namespace openfl
} // end namespace ui

#endif /* INCLUDED_openfl_ui_GameInput */ 
