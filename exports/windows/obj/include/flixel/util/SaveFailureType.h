// Generated by Haxe 4.3.7
#ifndef INCLUDED_flixel_util_SaveFailureType
#define INCLUDED_flixel_util_SaveFailureType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,SaveFailureType)
HX_DECLARE_CLASS1(haxe,Exception)
namespace flixel{
namespace util{


class SaveFailureType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef SaveFailureType_obj OBJ_;

	public:
		SaveFailureType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.util.SaveFailureType",ad,92,48,5c); }
		::String __ToString() const { return HX_("SaveFailureType.",87,3e,6e,ac) + _hx_tag; }

		static ::flixel::util::SaveFailureType ENCODING( ::haxe::Exception e);
		static ::Dynamic ENCODING_dyn();
		static ::flixel::util::SaveFailureType STORAGE;
		static inline ::flixel::util::SaveFailureType STORAGE_dyn() { return STORAGE; }
};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_SaveFailureType */ 
