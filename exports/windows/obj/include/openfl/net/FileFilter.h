// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_net_FileFilter
#define INCLUDED_openfl_net_FileFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_0860c5b2df24b64b_102_new)
HX_DECLARE_CLASS2(openfl,net,FileFilter)

namespace openfl{
namespace net{


class HXCPP_CLASS_ATTRIBUTES FileFilter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FileFilter_obj OBJ_;
		FileFilter_obj();

	public:
		enum { _hx_ClassId = 0x06d6661d };

		void __construct(::String description,::String extension,::String macType);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.net.FileFilter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.net.FileFilter"); }

		inline static ::hx::ObjectPtr< FileFilter_obj > __new(::String description,::String extension,::String macType) {
			::hx::ObjectPtr< FileFilter_obj > __this = new FileFilter_obj();
			__this->__construct(description,extension,macType);
			return __this;
		}

		inline static ::hx::ObjectPtr< FileFilter_obj > __alloc(::hx::Ctx *_hx_ctx,::String description,::String extension,::String macType) {
			FileFilter_obj *__this = (FileFilter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FileFilter_obj), true, "openfl.net.FileFilter"));
			*(void **)__this = FileFilter_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_0860c5b2df24b64b_102_new)
HXLINE( 103)		( ( ::openfl::net::FileFilter)(__this) )->description = description;
HXLINE( 104)		( ( ::openfl::net::FileFilter)(__this) )->extension = extension;
HXLINE( 105)		( ( ::openfl::net::FileFilter)(__this) )->macType = macType;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FileFilter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FileFilter",74,6b,6a,5c); }

		::String description;
		::String extension;
		::String macType;
};

} // end namespace openfl
} // end namespace net

#endif /* INCLUDED_openfl_net_FileFilter */ 
