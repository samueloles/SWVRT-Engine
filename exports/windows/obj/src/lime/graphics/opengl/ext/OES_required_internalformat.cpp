// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_required_internalformat
#include <lime/graphics/opengl/ext/OES_required_internalformat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ecc8bf145862a1ac_4_new,"lime.graphics.opengl.ext.OES_required_internalformat","new",0x0eacc2e2,"lime.graphics.opengl.ext.OES_required_internalformat.new","lime/graphics/opengl/ext/OES_required_internalformat.hx",4,0x280512f0)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_required_internalformat_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_ecc8bf145862a1ac_4_new)
HXLINE(  20)		this->RGB10_A2_EXT = 32857;
HXLINE(  19)		this->RGB10_EXT = 32850;
HXLINE(  18)		this->RGBA8_OES = 32856;
HXLINE(  17)		this->RGB8_OES = 32849;
HXLINE(  16)		this->RGB565_OES = 36194;
HXLINE(  15)		this->RGB5_A1_OES = 32855;
HXLINE(  14)		this->RGBA4_OES = 32854;
HXLINE(  13)		this->LUMINANCE8_OES = 32832;
HXLINE(  12)		this->LUMINANCE8_ALPHA8_OES = 32837;
HXLINE(  11)		this->LUMINANCE4_ALPHA4_OES = 32835;
HXLINE(  10)		this->DEPTH_COMPONENT32_OES = 33191;
HXLINE(   9)		this->DEPTH24_STENCIL8_OES = 35056;
HXLINE(   8)		this->DEPTH_COMPONENT24_OES = 33190;
HXLINE(   7)		this->DEPTH_COMPONENT16_OES = 33189;
HXLINE(   6)		this->ALPHA8_OES = 32828;
            	}

Dynamic OES_required_internalformat_obj::__CreateEmpty() { return new OES_required_internalformat_obj; }

void *OES_required_internalformat_obj::_hx_vtable = 0;

Dynamic OES_required_internalformat_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OES_required_internalformat_obj > _hx_result = new OES_required_internalformat_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_required_internalformat_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x489cd4a0;
}


OES_required_internalformat_obj::OES_required_internalformat_obj()
{
}

::hx::Val OES_required_internalformat_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"RGB8_OES") ) { return ::hx::Val( RGB8_OES ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RGBA4_OES") ) { return ::hx::Val( RGBA4_OES ); }
		if (HX_FIELD_EQ(inName,"RGBA8_OES") ) { return ::hx::Val( RGBA8_OES ); }
		if (HX_FIELD_EQ(inName,"RGB10_EXT") ) { return ::hx::Val( RGB10_EXT ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ALPHA8_OES") ) { return ::hx::Val( ALPHA8_OES ); }
		if (HX_FIELD_EQ(inName,"RGB565_OES") ) { return ::hx::Val( RGB565_OES ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RGB5_A1_OES") ) { return ::hx::Val( RGB5_A1_OES ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"RGB10_A2_EXT") ) { return ::hx::Val( RGB10_A2_EXT ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"LUMINANCE8_OES") ) { return ::hx::Val( LUMINANCE8_OES ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DEPTH24_STENCIL8_OES") ) { return ::hx::Val( DEPTH24_STENCIL8_OES ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT16_OES") ) { return ::hx::Val( DEPTH_COMPONENT16_OES ); }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT24_OES") ) { return ::hx::Val( DEPTH_COMPONENT24_OES ); }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT32_OES") ) { return ::hx::Val( DEPTH_COMPONENT32_OES ); }
		if (HX_FIELD_EQ(inName,"LUMINANCE4_ALPHA4_OES") ) { return ::hx::Val( LUMINANCE4_ALPHA4_OES ); }
		if (HX_FIELD_EQ(inName,"LUMINANCE8_ALPHA8_OES") ) { return ::hx::Val( LUMINANCE8_ALPHA8_OES ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OES_required_internalformat_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"RGB8_OES") ) { RGB8_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RGBA4_OES") ) { RGBA4_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA8_OES") ) { RGBA8_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB10_EXT") ) { RGB10_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"ALPHA8_OES") ) { ALPHA8_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB565_OES") ) { RGB565_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"RGB5_A1_OES") ) { RGB5_A1_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"RGB10_A2_EXT") ) { RGB10_A2_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"LUMINANCE8_OES") ) { LUMINANCE8_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"DEPTH24_STENCIL8_OES") ) { DEPTH24_STENCIL8_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT16_OES") ) { DEPTH_COMPONENT16_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT24_OES") ) { DEPTH_COMPONENT24_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT32_OES") ) { DEPTH_COMPONENT32_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMINANCE4_ALPHA4_OES") ) { LUMINANCE4_ALPHA4_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMINANCE8_ALPHA8_OES") ) { LUMINANCE8_ALPHA8_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_required_internalformat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ALPHA8_OES",b8,0f,0b,7f));
	outFields->push(HX_("DEPTH_COMPONENT16_OES",a4,4a,00,f6));
	outFields->push(HX_("DEPTH_COMPONENT24_OES",01,7e,8e,35));
	outFields->push(HX_("DEPTH24_STENCIL8_OES",b4,24,e8,3a));
	outFields->push(HX_("DEPTH_COMPONENT32_OES",5e,b1,1c,75));
	outFields->push(HX_("LUMINANCE4_ALPHA4_OES",f7,da,05,7f));
	outFields->push(HX_("LUMINANCE8_ALPHA8_OES",77,e3,9d,d3));
	outFields->push(HX_("LUMINANCE8_OES",de,d8,ef,03));
	outFields->push(HX_("RGBA4_OES",7e,f8,e9,53));
	outFields->push(HX_("RGB5_A1_OES",45,b2,e7,b6));
	outFields->push(HX_("RGB565_OES",e5,34,4b,ce));
	outFields->push(HX_("RGB8_OES",a9,3d,a2,bb));
	outFields->push(HX_("RGBA8_OES",82,4a,84,a1));
	outFields->push(HX_("RGB10_EXT",8e,5a,92,a0));
	outFields->push(HX_("RGB10_A2_EXT",e6,b6,90,ee));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OES_required_internalformat_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(OES_required_internalformat_obj,ALPHA8_OES),HX_("ALPHA8_OES",b8,0f,0b,7f)},
	{::hx::fsInt,(int)offsetof(OES_required_internalformat_obj,DEPTH_COMPONENT16_OES),HX_("DEPTH_COMPONENT16_OES",a4,4a,00,f6)},
	{::hx::fsInt,(int)offsetof(OES_required_internalformat_obj,DEPTH_COMPONENT24_OES),HX_("DEPTH_COMPONENT24_OES",01,7e,8e,35)},
	{::hx::fsInt,(int)offsetof(OES_required_internalformat_obj,DEPTH24_STENCIL8_OES),HX_("DEPTH24_STENCIL8_OES",b4,24,e8,3a)},
	{::hx::fsInt,(int)offsetof(OES_required_internalformat_obj,DEPTH_COMPONENT32_OES),HX_("DEPTH_COMPONENT32_OES",5e,b1,1c,75)},
	{::hx::fsInt,(int)offsetof(OES_required_internalformat_obj,LUMINANCE4_ALPHA4_OES),HX_("LUMINANCE4_ALPHA4_OES",f7,da,05,7f)},
	{::hx::fsInt,(int)offsetof(OES_required_internalformat_obj,LUMINANCE8_ALPHA8_OES),HX_("LUMINANCE8_ALPHA8_OES",77,e3,9d,d3)},
	{::hx::fsInt,(int)offsetof(OES_required_internalformat_obj,LUMINANCE8_OES),HX_("LUMINANCE8_OES",de,d8,ef,03)},
	{::hx::fsInt,(int)offsetof(OES_required_internalformat_obj,RGBA4_OES),HX_("RGBA4_OES",7e,f8,e9,53)},
	{::hx::fsInt,(int)offsetof(OES_required_internalformat_obj,RGB5_A1_OES),HX_("RGB5_A1_OES",45,b2,e7,b6)},
	{::hx::fsInt,(int)offsetof(OES_required_internalformat_obj,RGB565_OES),HX_("RGB565_OES",e5,34,4b,ce)},
	{::hx::fsInt,(int)offsetof(OES_required_internalformat_obj,RGB8_OES),HX_("RGB8_OES",a9,3d,a2,bb)},
	{::hx::fsInt,(int)offsetof(OES_required_internalformat_obj,RGBA8_OES),HX_("RGBA8_OES",82,4a,84,a1)},
	{::hx::fsInt,(int)offsetof(OES_required_internalformat_obj,RGB10_EXT),HX_("RGB10_EXT",8e,5a,92,a0)},
	{::hx::fsInt,(int)offsetof(OES_required_internalformat_obj,RGB10_A2_EXT),HX_("RGB10_A2_EXT",e6,b6,90,ee)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OES_required_internalformat_obj_sStaticStorageInfo = 0;
#endif

static ::String OES_required_internalformat_obj_sMemberFields[] = {
	HX_("ALPHA8_OES",b8,0f,0b,7f),
	HX_("DEPTH_COMPONENT16_OES",a4,4a,00,f6),
	HX_("DEPTH_COMPONENT24_OES",01,7e,8e,35),
	HX_("DEPTH24_STENCIL8_OES",b4,24,e8,3a),
	HX_("DEPTH_COMPONENT32_OES",5e,b1,1c,75),
	HX_("LUMINANCE4_ALPHA4_OES",f7,da,05,7f),
	HX_("LUMINANCE8_ALPHA8_OES",77,e3,9d,d3),
	HX_("LUMINANCE8_OES",de,d8,ef,03),
	HX_("RGBA4_OES",7e,f8,e9,53),
	HX_("RGB5_A1_OES",45,b2,e7,b6),
	HX_("RGB565_OES",e5,34,4b,ce),
	HX_("RGB8_OES",a9,3d,a2,bb),
	HX_("RGBA8_OES",82,4a,84,a1),
	HX_("RGB10_EXT",8e,5a,92,a0),
	HX_("RGB10_A2_EXT",e6,b6,90,ee),
	::String(null()) };

::hx::Class OES_required_internalformat_obj::__mClass;

void OES_required_internalformat_obj::__register()
{
	OES_required_internalformat_obj _hx_dummy;
	OES_required_internalformat_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.OES_required_internalformat",f0,69,5d,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OES_required_internalformat_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OES_required_internalformat_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_required_internalformat_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_required_internalformat_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
