// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_texture_3D
#include <lime/graphics/opengl/ext/OES_texture_3D.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_973c90bb42c6d3fb_4_new,"lime.graphics.opengl.ext.OES_texture_3D","new",0x31a9ba2b,"lime.graphics.opengl.ext.OES_texture_3D.new","lime/graphics/opengl/ext/OES_texture_3D.hx",4,0x0ea6b4c3)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_texture_3D_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_973c90bb42c6d3fb_4_new)
HXLINE(  11)		this->FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES = 36052;
HXLINE(  10)		this->SAMPLER_3D_OES = 35679;
HXLINE(   9)		this->MAX_3D_TEXTURE_SIZE_OES = 32883;
HXLINE(   8)		this->TEXTURE_BINDING_3D_OES = 32874;
HXLINE(   7)		this->TEXTURE_3D_OES = 32879;
HXLINE(   6)		this->TEXTURE_WRAP_R_OES = 32882;
            	}

Dynamic OES_texture_3D_obj::__CreateEmpty() { return new OES_texture_3D_obj; }

void *OES_texture_3D_obj::_hx_vtable = 0;

Dynamic OES_texture_3D_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OES_texture_3D_obj > _hx_result = new OES_texture_3D_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_texture_3D_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x31140d25;
}


OES_texture_3D_obj::OES_texture_3D_obj()
{
}

::hx::Val OES_texture_3D_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"TEXTURE_3D_OES") ) { return ::hx::Val( TEXTURE_3D_OES ); }
		if (HX_FIELD_EQ(inName,"SAMPLER_3D_OES") ) { return ::hx::Val( SAMPLER_3D_OES ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_R_OES") ) { return ::hx::Val( TEXTURE_WRAP_R_OES ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_3D_OES") ) { return ::hx::Val( TEXTURE_BINDING_3D_OES ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"MAX_3D_TEXTURE_SIZE_OES") ) { return ::hx::Val( MAX_3D_TEXTURE_SIZE_OES ); }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES") ) { return ::hx::Val( FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OES_texture_3D_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"TEXTURE_3D_OES") ) { TEXTURE_3D_OES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER_3D_OES") ) { SAMPLER_3D_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_R_OES") ) { TEXTURE_WRAP_R_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_3D_OES") ) { TEXTURE_BINDING_3D_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"MAX_3D_TEXTURE_SIZE_OES") ) { MAX_3D_TEXTURE_SIZE_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES") ) { FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_texture_3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("TEXTURE_WRAP_R_OES",9f,85,e8,16));
	outFields->push(HX_("TEXTURE_3D_OES",f3,9e,21,9e));
	outFields->push(HX_("TEXTURE_BINDING_3D_OES",0d,94,1d,37));
	outFields->push(HX_("MAX_3D_TEXTURE_SIZE_OES",16,3e,a6,5c));
	outFields->push(HX_("SAMPLER_3D_OES",66,32,6e,5c));
	outFields->push(HX_("FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES",cb,20,e8,2f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OES_texture_3D_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(OES_texture_3D_obj,TEXTURE_WRAP_R_OES),HX_("TEXTURE_WRAP_R_OES",9f,85,e8,16)},
	{::hx::fsInt,(int)offsetof(OES_texture_3D_obj,TEXTURE_3D_OES),HX_("TEXTURE_3D_OES",f3,9e,21,9e)},
	{::hx::fsInt,(int)offsetof(OES_texture_3D_obj,TEXTURE_BINDING_3D_OES),HX_("TEXTURE_BINDING_3D_OES",0d,94,1d,37)},
	{::hx::fsInt,(int)offsetof(OES_texture_3D_obj,MAX_3D_TEXTURE_SIZE_OES),HX_("MAX_3D_TEXTURE_SIZE_OES",16,3e,a6,5c)},
	{::hx::fsInt,(int)offsetof(OES_texture_3D_obj,SAMPLER_3D_OES),HX_("SAMPLER_3D_OES",66,32,6e,5c)},
	{::hx::fsInt,(int)offsetof(OES_texture_3D_obj,FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES),HX_("FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES",cb,20,e8,2f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OES_texture_3D_obj_sStaticStorageInfo = 0;
#endif

static ::String OES_texture_3D_obj_sMemberFields[] = {
	HX_("TEXTURE_WRAP_R_OES",9f,85,e8,16),
	HX_("TEXTURE_3D_OES",f3,9e,21,9e),
	HX_("TEXTURE_BINDING_3D_OES",0d,94,1d,37),
	HX_("MAX_3D_TEXTURE_SIZE_OES",16,3e,a6,5c),
	HX_("SAMPLER_3D_OES",66,32,6e,5c),
	HX_("FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES",cb,20,e8,2f),
	::String(null()) };

::hx::Class OES_texture_3D_obj::__mClass;

void OES_texture_3D_obj::__register()
{
	OES_texture_3D_obj _hx_dummy;
	OES_texture_3D_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.OES_texture_3D",b9,c8,c8,e5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OES_texture_3D_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OES_texture_3D_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_texture_3D_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_texture_3D_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
