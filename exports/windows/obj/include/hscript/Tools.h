// Generated by Haxe 4.3.7
#ifndef INCLUDED_hscript_Tools
#define INCLUDED_hscript_Tools

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscript,Expr)
HX_DECLARE_CLASS1(hscript,Tools)

namespace hscript{


class HXCPP_CLASS_ATTRIBUTES Tools_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Tools_obj OBJ_;
		Tools_obj();

	public:
		enum { _hx_ClassId = 0x74d191e8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="hscript.Tools")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"hscript.Tools"); }

		inline static ::hx::ObjectPtr< Tools_obj > __new() {
			::hx::ObjectPtr< Tools_obj > __this = new Tools_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Tools_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Tools_obj *__this = (Tools_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Tools_obj), false, "hscript.Tools"));
			*(void **)__this = Tools_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tools_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tools",fb,01,5c,a7); }

		static void iter( ::hscript::Expr e, ::Dynamic f);
		static ::Dynamic iter_dyn();

		static  ::hscript::Expr map( ::hscript::Expr e, ::Dynamic f);
		static ::Dynamic map_dyn();

		static  ::hscript::Expr expr( ::hscript::Expr e);
		static ::Dynamic expr_dyn();

		static  ::hscript::Expr mk( ::hscript::Expr e, ::hscript::Expr p);
		static ::Dynamic mk_dyn();

};

} // end namespace hscript

#endif /* INCLUDED_hscript_Tools */ 
