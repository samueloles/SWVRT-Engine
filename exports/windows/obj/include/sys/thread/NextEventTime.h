// Generated by Haxe 4.3.7
#ifndef INCLUDED_sys_thread_NextEventTime
#define INCLUDED_sys_thread_NextEventTime

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sys,thread,NextEventTime)
namespace sys{
namespace thread{


class NextEventTime_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef NextEventTime_obj OBJ_;

	public:
		NextEventTime_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("sys.thread.NextEventTime",11,32,a7,e0); }
		::String __ToString() const { return HX_("NextEventTime.",fa,b3,86,8f) + _hx_tag; }

		static ::sys::thread::NextEventTime AnyTime( ::Dynamic time);
		static ::Dynamic AnyTime_dyn();
		static ::sys::thread::NextEventTime At(Float time);
		static ::Dynamic At_dyn();
		static ::sys::thread::NextEventTime Never;
		static inline ::sys::thread::NextEventTime Never_dyn() { return Never; }
		static ::sys::thread::NextEventTime Now;
		static inline ::sys::thread::NextEventTime Now_dyn() { return Now; }
};

} // end namespace sys
} // end namespace thread

#endif /* INCLUDED_sys_thread_NextEventTime */ 
