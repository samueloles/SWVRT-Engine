// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_text__FontStyle_FontStyle_Impl_
#define INCLUDED_openfl_text__FontStyle_FontStyle_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,text,_FontStyle,FontStyle_Impl_)

namespace openfl{
namespace text{
namespace _FontStyle{


class HXCPP_CLASS_ATTRIBUTES FontStyle_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FontStyle_Impl__obj OBJ_;
		FontStyle_Impl__obj();

	public:
		enum { _hx_ClassId = 0x778d69be };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.text._FontStyle.FontStyle_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.text._FontStyle.FontStyle_Impl_"); }

		inline static ::hx::ObjectPtr< FontStyle_Impl__obj > __new() {
			::hx::ObjectPtr< FontStyle_Impl__obj > __this = new FontStyle_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FontStyle_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			FontStyle_Impl__obj *__this = (FontStyle_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FontStyle_Impl__obj), false, "openfl.text._FontStyle.FontStyle_Impl_"));
			*(void **)__this = FontStyle_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FontStyle_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FontStyle_Impl_",e2,62,27,5d); }

		static void __boot();
		static  ::Dynamic BOLD;
		static  ::Dynamic BOLD_ITALIC;
		static  ::Dynamic ITALIC;
		static  ::Dynamic REGULAR;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace text
} // end namespace _FontStyle

#endif /* INCLUDED_openfl_text__FontStyle_FontStyle_Impl_ */ 
