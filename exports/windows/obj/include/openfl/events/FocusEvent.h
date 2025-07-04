// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_events_FocusEvent
#define INCLUDED_openfl_events_FocusEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,FocusEvent)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES FocusEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef FocusEvent_obj OBJ_;
		FocusEvent_obj();

	public:
		enum { _hx_ClassId = 0x2575b1ab };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_shiftKey,::hx::Null< int >  __o_keyCode);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.FocusEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.events.FocusEvent"); }
		static ::hx::ObjectPtr< FocusEvent_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_shiftKey,::hx::Null< int >  __o_keyCode);
		static ::hx::ObjectPtr< FocusEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::display::InteractiveObject relatedObject,::hx::Null< bool >  __o_shiftKey,::hx::Null< int >  __o_keyCode);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FocusEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FocusEvent",42,6d,d7,2e); }

		static void __boot();
		static ::String FOCUS_IN;
		static ::String FOCUS_OUT;
		static ::String KEY_FOCUS_CHANGE;
		static ::String MOUSE_FOCUS_CHANGE;
		int keyCode;
		 ::openfl::display::InteractiveObject relatedObject;
		bool shiftKey;
		 ::openfl::events::Event clone();

		virtual ::String toString();

		void _hx___init();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_FocusEvent */ 
