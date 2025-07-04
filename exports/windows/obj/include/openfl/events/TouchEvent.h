// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_events_TouchEvent
#define INCLUDED_openfl_events_TouchEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,TouchEvent)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES TouchEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef TouchEvent_obj OBJ_;
		TouchEvent_obj();

	public:
		enum { _hx_ClassId = 0x5ca4f464 };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< int >  __o_touchPointID,::hx::Null< bool >  __o_isPrimaryTouchPoint,::hx::Null< Float >  __o_localX,::hx::Null< Float >  __o_localY,::hx::Null< Float >  __o_sizeX,::hx::Null< Float >  __o_sizeY,::hx::Null< Float >  __o_pressure, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_ctrlKey,::hx::Null< bool >  __o_altKey,::hx::Null< bool >  __o_shiftKey,::hx::Null< bool >  __o_commandKey,::hx::Null< bool >  __o_controlKey,::hx::Null< Float >  __o_timestamp,::String touchIntent, ::openfl::utils::ByteArrayData samples,::hx::Null< bool >  __o_isTouchPointCanceled);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.TouchEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.events.TouchEvent"); }
		static ::hx::ObjectPtr< TouchEvent_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< int >  __o_touchPointID,::hx::Null< bool >  __o_isPrimaryTouchPoint,::hx::Null< Float >  __o_localX,::hx::Null< Float >  __o_localY,::hx::Null< Float >  __o_sizeX,::hx::Null< Float >  __o_sizeY,::hx::Null< Float >  __o_pressure, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_ctrlKey,::hx::Null< bool >  __o_altKey,::hx::Null< bool >  __o_shiftKey,::hx::Null< bool >  __o_commandKey,::hx::Null< bool >  __o_controlKey,::hx::Null< Float >  __o_timestamp,::String touchIntent, ::openfl::utils::ByteArrayData samples,::hx::Null< bool >  __o_isTouchPointCanceled);
		static ::hx::ObjectPtr< TouchEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< int >  __o_touchPointID,::hx::Null< bool >  __o_isPrimaryTouchPoint,::hx::Null< Float >  __o_localX,::hx::Null< Float >  __o_localY,::hx::Null< Float >  __o_sizeX,::hx::Null< Float >  __o_sizeY,::hx::Null< Float >  __o_pressure, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_ctrlKey,::hx::Null< bool >  __o_altKey,::hx::Null< bool >  __o_shiftKey,::hx::Null< bool >  __o_commandKey,::hx::Null< bool >  __o_controlKey,::hx::Null< Float >  __o_timestamp,::String touchIntent, ::openfl::utils::ByteArrayData samples,::hx::Null< bool >  __o_isTouchPointCanceled);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TouchEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TouchEvent",fb,af,06,66); }

		static void __boot();
		static  ::Dynamic __meta__;
		static ::String TOUCH_BEGIN;
		static ::String TOUCH_END;
		static ::String TOUCH_MOVE;
		static ::String TOUCH_OUT;
		static ::String TOUCH_OVER;
		static ::String TOUCH_ROLL_OUT;
		static ::String TOUCH_ROLL_OVER;
		static ::String TOUCH_TAP;
		static  ::openfl::events::TouchEvent _hx___create(::String type, ::Dynamic touch,Float stageX,Float stageY, ::openfl::geom::Point local, ::openfl::display::InteractiveObject target);
		static ::Dynamic _hx___create_dyn();

		bool altKey;
		bool commandKey;
		bool controlKey;
		bool ctrlKey;
		int delta;
		bool isPrimaryTouchPoint;
		Float localX;
		Float localY;
		Float pressure;
		 ::openfl::display::InteractiveObject relatedObject;
		bool shiftKey;
		Float sizeX;
		Float sizeY;
		Float stageX;
		Float stageY;
		int touchPointID;
		bool _hx___updateAfterEventFlag;
		 ::openfl::events::Event clone();

		virtual ::String toString();

		void updateAfterEvent();
		::Dynamic updateAfterEvent_dyn();

		void _hx___init();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_TouchEvent */ 
