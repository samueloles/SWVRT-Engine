// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_text__Glyph_Glyph_Impl_
#include <lime/text/_Glyph/Glyph_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_183e32c5f5bc8a9f_5__new,"lime.text._Glyph.Glyph_Impl_","_new",0x786a5adc,"lime.text._Glyph.Glyph_Impl_._new","lime/text/Glyph.hx",5,0x27d291da)
namespace lime{
namespace text{
namespace _Glyph{

void Glyph_Impl__obj::__construct() { }

Dynamic Glyph_Impl__obj::__CreateEmpty() { return new Glyph_Impl__obj; }

void *Glyph_Impl__obj::_hx_vtable = 0;

Dynamic Glyph_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Glyph_Impl__obj > _hx_result = new Glyph_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Glyph_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0e0d6eed;
}

int Glyph_Impl__obj::_new(int i){
            	HX_STACKFRAME(&_hx_pos_183e32c5f5bc8a9f_5__new)
HXDLIN(   5)		return i;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Glyph_Impl__obj,_new,return )


Glyph_Impl__obj::Glyph_Impl__obj()
{
}

bool Glyph_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Glyph_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Glyph_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class Glyph_Impl__obj::__mClass;

static ::String Glyph_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	::String(null())
};

void Glyph_Impl__obj::__register()
{
	Glyph_Impl__obj _hx_dummy;
	Glyph_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.text._Glyph.Glyph_Impl_",d3,0c,a5,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Glyph_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Glyph_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Glyph_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Glyph_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Glyph_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
} // end namespace _Glyph
