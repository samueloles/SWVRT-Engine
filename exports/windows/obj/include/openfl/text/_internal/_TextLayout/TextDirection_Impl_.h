// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_text__internal__TextLayout_TextDirection_Impl_
#define INCLUDED_openfl_text__internal__TextLayout_TextDirection_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(openfl,text,_internal,_TextLayout,TextDirection_Impl_)

namespace openfl{
namespace text{
namespace _internal{
namespace _TextLayout{


class HXCPP_CLASS_ATTRIBUTES TextDirection_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TextDirection_Impl__obj OBJ_;
		TextDirection_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0547e90b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.text._internal._TextLayout.TextDirection_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.text._internal._TextLayout.TextDirection_Impl_"); }

		inline static ::hx::ObjectPtr< TextDirection_Impl__obj > __new() {
			::hx::ObjectPtr< TextDirection_Impl__obj > __this = new TextDirection_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TextDirection_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			TextDirection_Impl__obj *__this = (TextDirection_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TextDirection_Impl__obj), false, "openfl.text._internal._TextLayout.TextDirection_Impl_"));
			*(void **)__this = TextDirection_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TextDirection_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TextDirection_Impl_",d2,55,68,6e); }

		static void __boot();
		static int INVALID;
		static int LEFT_TO_RIGHT;
		static int RIGHT_TO_LEFT;
		static int TOP_TO_BOTTOM;
		static int BOTTOM_TO_TOP;
		static void reverse(int this1);
		static ::Dynamic reverse_dyn();

		static ::String toString(int this1);
		static ::Dynamic toString_dyn();

		static int toHBDirection(int this1);
		static ::Dynamic toHBDirection_dyn();

		static bool get_backward(int this1);
		static ::Dynamic get_backward_dyn();

		static bool get_forward(int this1);
		static ::Dynamic get_forward_dyn();

		static bool get_horizontal(int this1);
		static ::Dynamic get_horizontal_dyn();

		static bool get_vertical(int this1);
		static ::Dynamic get_vertical_dyn();

};

} // end namespace openfl
} // end namespace text
} // end namespace _internal
} // end namespace _TextLayout

#endif /* INCLUDED_openfl_text__internal__TextLayout_TextDirection_Impl_ */ 
