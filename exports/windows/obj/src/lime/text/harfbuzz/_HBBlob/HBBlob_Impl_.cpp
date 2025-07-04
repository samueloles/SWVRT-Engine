// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_text_harfbuzz__HBBlob_HBBlob_Impl_
#include <lime/text/harfbuzz/_HBBlob/HBBlob_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ff40ab3a17d4a451_18__new,"lime.text.harfbuzz._HBBlob.HBBlob_Impl_","_new",0xbb44321a,"lime.text.harfbuzz._HBBlob.HBBlob_Impl_._new","lime/text/harfbuzz/HBBlob.hx",18,0xf04c0f80)
HX_LOCAL_STACK_FRAME(_hx_pos_ff40ab3a17d4a451_30_createSubBlob,"lime.text.harfbuzz._HBBlob.HBBlob_Impl_","createSubBlob",0x6987af88,"lime.text.harfbuzz._HBBlob.HBBlob_Impl_.createSubBlob","lime/text/harfbuzz/HBBlob.hx",30,0xf04c0f80)
HX_LOCAL_STACK_FRAME(_hx_pos_ff40ab3a17d4a451_39_makeImmutable,"lime.text.harfbuzz._HBBlob.HBBlob_Impl_","makeImmutable",0xd198249b,"lime.text.harfbuzz._HBBlob.HBBlob_Impl_.makeImmutable","lime/text/harfbuzz/HBBlob.hx",39,0xf04c0f80)
HX_LOCAL_STACK_FRAME(_hx_pos_ff40ab3a17d4a451_47_get_data,"lime.text.harfbuzz._HBBlob.HBBlob_Impl_","get_data",0x72227eec,"lime.text.harfbuzz._HBBlob.HBBlob_Impl_.get_data","lime/text/harfbuzz/HBBlob.hx",47,0xf04c0f80)
HX_LOCAL_STACK_FRAME(_hx_pos_ff40ab3a17d4a451_56_get_dataWritable,"lime.text.harfbuzz._HBBlob.HBBlob_Impl_","get_dataWritable",0xa76d906c,"lime.text.harfbuzz._HBBlob.HBBlob_Impl_.get_dataWritable","lime/text/harfbuzz/HBBlob.hx",56,0xf04c0f80)
HX_LOCAL_STACK_FRAME(_hx_pos_ff40ab3a17d4a451_65_get_empty,"lime.text.harfbuzz._HBBlob.HBBlob_Impl_","get_empty",0x075ebb8b,"lime.text.harfbuzz._HBBlob.HBBlob_Impl_.get_empty","lime/text/harfbuzz/HBBlob.hx",65,0xf04c0f80)
HX_LOCAL_STACK_FRAME(_hx_pos_ff40ab3a17d4a451_74_get_immutable,"lime.text.harfbuzz._HBBlob.HBBlob_Impl_","get_immutable",0x9a530040,"lime.text.harfbuzz._HBBlob.HBBlob_Impl_.get_immutable","lime/text/harfbuzz/HBBlob.hx",74,0xf04c0f80)
HX_LOCAL_STACK_FRAME(_hx_pos_ff40ab3a17d4a451_83_get_length,"lime.text.harfbuzz._HBBlob.HBBlob_Impl_","get_length",0x9b73f228,"lime.text.harfbuzz._HBBlob.HBBlob_Impl_.get_length","lime/text/harfbuzz/HBBlob.hx",83,0xf04c0f80)
namespace lime{
namespace text{
namespace harfbuzz{
namespace _HBBlob{

void HBBlob_Impl__obj::__construct() { }

Dynamic HBBlob_Impl__obj::__CreateEmpty() { return new HBBlob_Impl__obj; }

void *HBBlob_Impl__obj::_hx_vtable = 0;

Dynamic HBBlob_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HBBlob_Impl__obj > _hx_result = new HBBlob_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HBBlob_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x243fba2b;
}

 ::Dynamic HBBlob_Impl__obj::_new(Float data,int length,int memoryMode){
            	HX_STACKFRAME(&_hx_pos_ff40ab3a17d4a451_18__new)
HXDLIN(  18)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_blob_create(data,length,memoryMode)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HBBlob_Impl__obj,_new,return )

 ::Dynamic HBBlob_Impl__obj::createSubBlob( ::Dynamic this1,int offset,int length){
            	HX_STACKFRAME(&_hx_pos_ff40ab3a17d4a451_30_createSubBlob)
HXDLIN(  30)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_blob_create_sub_blob(::hx::DynamicPtr(this1),offset,length)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HBBlob_Impl__obj,createSubBlob,return )

void HBBlob_Impl__obj::makeImmutable( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_ff40ab3a17d4a451_39_makeImmutable)
HXDLIN(  39)		::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_blob_make_immutable(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBlob_Impl__obj,makeImmutable,(void))

Float HBBlob_Impl__obj::get_data( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_ff40ab3a17d4a451_47_get_data)
HXDLIN(  47)		return ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromCFFIPointer(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_blob_get_data(::hx::DynamicPtr(this1)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBlob_Impl__obj,get_data,return )

Float HBBlob_Impl__obj::get_dataWritable( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_ff40ab3a17d4a451_56_get_dataWritable)
HXDLIN(  56)		return ::lime::utils::_DataPointer::DataPointer_Impl__obj::fromCFFIPointer(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_blob_get_data_writable(::hx::DynamicPtr(this1)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBlob_Impl__obj,get_dataWritable,return )

 ::Dynamic HBBlob_Impl__obj::get_empty(){
            	HX_STACKFRAME(&_hx_pos_ff40ab3a17d4a451_65_get_empty)
HXDLIN(  65)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_blob_get_empty()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HBBlob_Impl__obj,get_empty,return )

bool HBBlob_Impl__obj::get_immutable( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_ff40ab3a17d4a451_74_get_immutable)
HXDLIN(  74)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_blob_is_immutable(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBlob_Impl__obj,get_immutable,return )

int HBBlob_Impl__obj::get_length( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_ff40ab3a17d4a451_83_get_length)
HXDLIN(  83)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_hb_blob_get_length(::hx::DynamicPtr(this1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HBBlob_Impl__obj,get_length,return )


HBBlob_Impl__obj::HBBlob_Impl__obj()
{
}

bool HBBlob_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_data") ) { outValue = get_data_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_empty") ) { outValue = get_empty_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { outValue = get_length_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createSubBlob") ) { outValue = createSubBlob_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"makeImmutable") ) { outValue = makeImmutable_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_immutable") ) { outValue = get_immutable_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_dataWritable") ) { outValue = get_dataWritable_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HBBlob_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HBBlob_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class HBBlob_Impl__obj::__mClass;

static ::String HBBlob_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("createSubBlob",61,ab,5f,f7),
	HX_("makeImmutable",74,20,70,5f),
	HX_("get_data",b3,11,1e,c2),
	HX_("get_dataWritable",33,c2,f3,91),
	HX_("get_empty",e4,96,83,b3),
	HX_("get_immutable",19,fc,2a,28),
	HX_("get_length",af,04,8f,8f),
	::String(null())
};

void HBBlob_Impl__obj::__register()
{
	HBBlob_Impl__obj _hx_dummy;
	HBBlob_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.text.harfbuzz._HBBlob.HBBlob_Impl_",55,7e,56,7c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HBBlob_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HBBlob_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HBBlob_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HBBlob_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HBBlob_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz
} // end namespace _HBBlob
