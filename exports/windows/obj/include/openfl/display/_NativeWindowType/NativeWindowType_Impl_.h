// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_display__NativeWindowType_NativeWindowType_Impl_
#define INCLUDED_openfl_display__NativeWindowType_NativeWindowType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_NativeWindowType,NativeWindowType_Impl_)

namespace openfl{
namespace display{
namespace _NativeWindowType{


class HXCPP_CLASS_ATTRIBUTES NativeWindowType_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NativeWindowType_Impl__obj OBJ_;
		NativeWindowType_Impl__obj();

	public:
		enum { _hx_ClassId = 0x660e2f57 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._NativeWindowType.NativeWindowType_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._NativeWindowType.NativeWindowType_Impl_"); }

		inline static ::hx::ObjectPtr< NativeWindowType_Impl__obj > __new() {
			::hx::ObjectPtr< NativeWindowType_Impl__obj > __this = new NativeWindowType_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NativeWindowType_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			NativeWindowType_Impl__obj *__this = (NativeWindowType_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NativeWindowType_Impl__obj), false, "openfl.display._NativeWindowType.NativeWindowType_Impl_"));
			*(void **)__this = NativeWindowType_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NativeWindowType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NativeWindowType_Impl_",c1,12,c5,e0); }

		static void __boot();
		static  ::Dynamic LIGHTWEIGHT;
		static  ::Dynamic NORMAL;
		static  ::Dynamic UTILITY;
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
} // end namespace _NativeWindowType

#endif /* INCLUDED_openfl_display__NativeWindowType_NativeWindowType_Impl_ */ 
