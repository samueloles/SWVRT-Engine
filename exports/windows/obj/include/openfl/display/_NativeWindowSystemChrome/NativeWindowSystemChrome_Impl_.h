// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_display__NativeWindowSystemChrome_NativeWindowSystemChrome_Impl_
#define INCLUDED_openfl_display__NativeWindowSystemChrome_NativeWindowSystemChrome_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_NativeWindowSystemChrome,NativeWindowSystemChrome_Impl_)

namespace openfl{
namespace display{
namespace _NativeWindowSystemChrome{


class HXCPP_CLASS_ATTRIBUTES NativeWindowSystemChrome_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NativeWindowSystemChrome_Impl__obj OBJ_;
		NativeWindowSystemChrome_Impl__obj();

	public:
		enum { _hx_ClassId = 0x58cb52ed };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._NativeWindowSystemChrome.NativeWindowSystemChrome_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._NativeWindowSystemChrome.NativeWindowSystemChrome_Impl_"); }

		inline static ::hx::ObjectPtr< NativeWindowSystemChrome_Impl__obj > __new() {
			::hx::ObjectPtr< NativeWindowSystemChrome_Impl__obj > __this = new NativeWindowSystemChrome_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NativeWindowSystemChrome_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			NativeWindowSystemChrome_Impl__obj *__this = (NativeWindowSystemChrome_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NativeWindowSystemChrome_Impl__obj), false, "openfl.display._NativeWindowSystemChrome.NativeWindowSystemChrome_Impl_"));
			*(void **)__this = NativeWindowSystemChrome_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NativeWindowSystemChrome_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NativeWindowSystemChrome_Impl_",10,76,a9,fb); }

		static void __boot();
		static  ::Dynamic ALTERNATE;
		static  ::Dynamic NONE;
		static  ::Dynamic STANDARD;
		static  ::Dynamic fromInt( ::Dynamic value);
		static ::Dynamic fromInt_dyn();

		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static  ::Dynamic toInt( ::Dynamic this1);
		static ::Dynamic toInt_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _NativeWindowSystemChrome

#endif /* INCLUDED_openfl_display__NativeWindowSystemChrome_NativeWindowSystemChrome_Impl_ */ 
