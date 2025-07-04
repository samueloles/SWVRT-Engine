// Generated by Haxe 4.3.7
#ifndef INCLUDED_flixel_util_helpers_FlxBounds
#define INCLUDED_flixel_util_helpers_FlxBounds

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,util,helpers,FlxBounds)

namespace flixel{
namespace util{
namespace helpers{


class HXCPP_CLASS_ATTRIBUTES FlxBounds_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxBounds_obj OBJ_;
		FlxBounds_obj();

	public:
		enum { _hx_ClassId = 0x71239120 };

		void __construct( ::Dynamic min, ::Dynamic max);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.util.helpers.FlxBounds")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.util.helpers.FlxBounds"); }
		static ::hx::ObjectPtr< FlxBounds_obj > __new( ::Dynamic min, ::Dynamic max);
		static ::hx::ObjectPtr< FlxBounds_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic min, ::Dynamic max);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxBounds_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxBounds",67,80,0c,e8); }

		 ::Dynamic min;
		 ::Dynamic max;
		bool active;
		 ::flixel::util::helpers::FlxBounds set( ::Dynamic min, ::Dynamic max);
		::Dynamic set_dyn();

		bool equals( ::flixel::util::helpers::FlxBounds otherBounds);
		::Dynamic equals_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace helpers

#endif /* INCLUDED_flixel_util_helpers_FlxBounds */ 
