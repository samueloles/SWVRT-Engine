// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_net_URLRequest
#define INCLUDED_openfl_net_URLRequest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,net,URLRequest)
HX_DECLARE_CLASS2(openfl,net,URLRequestHeader)

namespace openfl{
namespace net{


class HXCPP_CLASS_ATTRIBUTES URLRequest_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef URLRequest_obj OBJ_;
		URLRequest_obj();

	public:
		enum { _hx_ClassId = 0x21495269 };

		void __construct(::String url);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.net.URLRequest")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.net.URLRequest"); }
		static ::hx::ObjectPtr< URLRequest_obj > __new(::String url);
		static ::hx::ObjectPtr< URLRequest_obj > __alloc(::hx::Ctx *_hx_ctx,::String url);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~URLRequest_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("URLRequest",c0,57,dd,76); }

		::String contentType;
		 ::Dynamic data;
		bool followRedirects;
		Float idleTimeout;
		bool manageCookies;
		bool withCredentials;
		::String method;
		::Array< ::Dynamic> requestHeaders;
		::String url;
		::String userAgent;
};

} // end namespace openfl
} // end namespace net

#endif /* INCLUDED_openfl_net_URLRequest */ 
