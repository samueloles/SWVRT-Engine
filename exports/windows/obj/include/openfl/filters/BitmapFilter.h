// Generated by Haxe 4.3.7
#ifndef INCLUDED_openfl_filters_BitmapFilter
#define INCLUDED_openfl_filters_BitmapFilter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,filters,BitmapFilter)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace filters{


class HXCPP_CLASS_ATTRIBUTES BitmapFilter_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BitmapFilter_obj OBJ_;
		BitmapFilter_obj();

	public:
		enum { _hx_ClassId = 0x26de6bd2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.filters.BitmapFilter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.filters.BitmapFilter"); }
		static ::hx::ObjectPtr< BitmapFilter_obj > __new();
		static ::hx::ObjectPtr< BitmapFilter_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BitmapFilter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BitmapFilter",27,0d,67,58); }

		int _hx___bottomExtension;
		int _hx___leftExtension;
		bool _hx___needSecondBitmapData;
		int _hx___numShaderPasses;
		bool _hx___preserveObject;
		bool _hx___renderDirty;
		int _hx___rightExtension;
		 ::Dynamic _hx___shaderBlendMode;
		bool _hx___smooth;
		int _hx___topExtension;
		 ::openfl::filters::BitmapFilter clone();
		::Dynamic clone_dyn();

		 ::openfl::display::BitmapData _hx___applyFilter( ::openfl::display::BitmapData bitmapData, ::openfl::display::BitmapData sourceBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint);
		::Dynamic _hx___applyFilter_dyn();

		 ::openfl::display::Shader _hx___initShader( ::openfl::display::DisplayObjectRenderer renderer,int pass, ::openfl::display::BitmapData sourceBitmapData);
		::Dynamic _hx___initShader_dyn();

};

} // end namespace openfl
} // end namespace filters

#endif /* INCLUDED_openfl_filters_BitmapFilter */ 
