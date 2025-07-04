// Generated by Haxe 4.3.7
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#define INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS4(lime,_internal,backend,native,NativeHTTPRequest)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,net,HTTPRequestHeader)
HX_DECLARE_CLASS3(lime,net,_HTTPRequest,AbstractHTTPRequest)
HX_DECLARE_CLASS2(lime,net,_IHTTPRequest)

namespace lime{
namespace net{
namespace _HTTPRequest{


class HXCPP_CLASS_ATTRIBUTES AbstractHTTPRequest_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AbstractHTTPRequest_obj OBJ_;
		AbstractHTTPRequest_obj();

	public:
		enum { _hx_ClassId = 0x09b24b15 };

		void __construct(::String uri);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.net._HTTPRequest.AbstractHTTPRequest")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.net._HTTPRequest.AbstractHTTPRequest"); }
		static ::hx::ObjectPtr< AbstractHTTPRequest_obj > __new(::String uri);
		static ::hx::ObjectPtr< AbstractHTTPRequest_obj > __alloc(::hx::Ctx *_hx_ctx,::String uri);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AbstractHTTPRequest_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("AbstractHTTPRequest",e5,22,a3,c7); }

		::String contentType;
		 ::haxe::io::Bytes data;
		bool enableResponseHeaders;
		bool followRedirects;
		 ::haxe::ds::StringMap formData;
		::Array< ::Dynamic> headers;
		::String method;
		 ::Dynamic responseData;
		::Array< ::Dynamic> responseHeaders;
		int responseStatus;
		int timeout;
		::String uri;
		::String userAgent;
		bool withCredentials;
		bool manageCookies;
		 ::lime::_internal::backend::native::NativeHTTPRequest _hx___backend;
		void cancel();
		::Dynamic cancel_dyn();

		virtual  ::lime::app::Future load(::String uri);
		::Dynamic load_dyn();

};

} // end namespace lime
} // end namespace net
} // end namespace _HTTPRequest

#endif /* INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest */ 
