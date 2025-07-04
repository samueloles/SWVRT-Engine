// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_errors_Error
#define INCLUDED_openfl_errors_Error

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
HX_DECLARE_CLASS1(haxe,Exception)
HX_DECLARE_CLASS2(openfl,errors,Error)

namespace openfl{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES Error_obj : public  ::haxe::Exception_obj
{
	public:
		typedef  ::haxe::Exception_obj super;
		typedef Error_obj OBJ_;
		Error_obj();

	public:
		enum { _hx_ClassId = 0x3495c9c5 };

		void __construct(::String __o_message,::hx::Null< int >  __o_id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.errors.Error")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.errors.Error"); }
		static ::hx::ObjectPtr< Error_obj > __new(::String __o_message,::hx::Null< int >  __o_id);
		static ::hx::ObjectPtr< Error_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_message,::hx::Null< int >  __o_id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Error_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Error",a8,3b,57,06); }

		static void __boot();
		static ::String DEFAULT_TO_STRING;
		int errorID;
		::String name;
		::String getStackTrace();
		::Dynamic getStackTrace_dyn();

		virtual ::String toString();

};

} // end namespace openfl
} // end namespace errors

#endif /* INCLUDED_openfl_errors_Error */ 
