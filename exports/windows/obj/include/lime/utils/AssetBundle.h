// Generated by Haxe 4.3.7
#ifndef INCLUDED_lime_utils_AssetBundle
#define INCLUDED_lime_utils_AssetBundle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,utils,AssetBundle)

namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES AssetBundle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AssetBundle_obj OBJ_;
		AssetBundle_obj();

	public:
		enum { _hx_ClassId = 0x348722f6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.utils.AssetBundle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.utils.AssetBundle"); }
		static ::hx::ObjectPtr< AssetBundle_obj > __new();
		static ::hx::ObjectPtr< AssetBundle_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AssetBundle_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AssetBundle",72,7d,71,4f); }

		static  ::lime::utils::AssetBundle fromBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic fromBytes_dyn();

		static  ::lime::utils::AssetBundle fromFile(::String path);
		static ::Dynamic fromFile_dyn();

		static  ::lime::app::Future loadFromBytes( ::haxe::io::Bytes bytes);
		static ::Dynamic loadFromBytes_dyn();

		static  ::lime::app::Future loadFromFile(::String path);
		static ::Dynamic loadFromFile_dyn();

		static  ::lime::utils::AssetBundle _hx___extractBundle( ::haxe::io::Input input);
		static ::Dynamic _hx___extractBundle_dyn();

		 ::haxe::ds::StringMap data;
		::Array< ::String > paths;
};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_AssetBundle */ 
