// Generated by Haxe 4.3.7
#ifndef INCLUDED_hscript_Error
#define INCLUDED_hscript_Error

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(hscript,Error)
namespace hscript{


class Error_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Error_obj OBJ_;

	public:
		Error_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hscript.Error",6d,b9,ef,23); }
		::String __ToString() const { return HX_("Error.",86,f7,fc,85) + _hx_tag; }

		static ::hscript::Error ECustom(::String msg);
		static ::Dynamic ECustom_dyn();
		static ::hscript::Error EInvalidAccess(::String f);
		static ::Dynamic EInvalidAccess_dyn();
		static ::hscript::Error EInvalidChar(int c);
		static ::Dynamic EInvalidChar_dyn();
		static ::hscript::Error EInvalidIterator(::String v);
		static ::Dynamic EInvalidIterator_dyn();
		static ::hscript::Error EInvalidOp(::String op);
		static ::Dynamic EInvalidOp_dyn();
		static ::hscript::Error EInvalidPreprocessor(::String msg);
		static ::Dynamic EInvalidPreprocessor_dyn();
		static ::hscript::Error EUnexpected(::String s);
		static ::Dynamic EUnexpected_dyn();
		static ::hscript::Error EUnknownVariable(::String v);
		static ::Dynamic EUnknownVariable_dyn();
		static ::hscript::Error EUnterminatedComment;
		static inline ::hscript::Error EUnterminatedComment_dyn() { return EUnterminatedComment; }
		static ::hscript::Error EUnterminatedString;
		static inline ::hscript::Error EUnterminatedString_dyn() { return EUnterminatedString; }
};

} // end namespace hscript

#endif /* INCLUDED_hscript_Error */ 
