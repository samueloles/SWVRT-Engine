// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_GenericCell_hscript_Token
#include <haxe/ds/GenericCell_hscript_Token.h>
#endif
#ifndef INCLUDED_hscript_Token
#include <hscript/Token.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f38ff5a24044d6b7_37_new,"haxe.ds.GenericCell_hscript_Token","new",0x1c0e2ea2,"haxe.ds.GenericCell_hscript_Token.new","C:\\HaxeToolkit\\haxe\\std/haxe/ds/GenericStack.hx",37,0x6d04e29d)
namespace haxe{
namespace ds{

void GenericCell_hscript_Token_obj::__construct( ::hscript::Token elt, ::haxe::ds::GenericCell_hscript_Token next){
            	HX_STACKFRAME(&_hx_pos_f38ff5a24044d6b7_37_new)
HXLINE(  38)		this->elt = elt;
HXLINE(  39)		this->next = next;
            	}

Dynamic GenericCell_hscript_Token_obj::__CreateEmpty() { return new GenericCell_hscript_Token_obj; }

void *GenericCell_hscript_Token_obj::_hx_vtable = 0;

Dynamic GenericCell_hscript_Token_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GenericCell_hscript_Token_obj > _hx_result = new GenericCell_hscript_Token_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GenericCell_hscript_Token_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x61269132;
}


::hx::ObjectPtr< GenericCell_hscript_Token_obj > GenericCell_hscript_Token_obj::__new( ::hscript::Token elt, ::haxe::ds::GenericCell_hscript_Token next) {
	::hx::ObjectPtr< GenericCell_hscript_Token_obj > __this = new GenericCell_hscript_Token_obj();
	__this->__construct(elt,next);
	return __this;
}

::hx::ObjectPtr< GenericCell_hscript_Token_obj > GenericCell_hscript_Token_obj::__alloc(::hx::Ctx *_hx_ctx, ::hscript::Token elt, ::haxe::ds::GenericCell_hscript_Token next) {
	GenericCell_hscript_Token_obj *__this = (GenericCell_hscript_Token_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GenericCell_hscript_Token_obj), true, "haxe.ds.GenericCell_hscript_Token"));
	*(void **)__this = GenericCell_hscript_Token_obj::_hx_vtable;
	__this->__construct(elt,next);
	return __this;
}

GenericCell_hscript_Token_obj::GenericCell_hscript_Token_obj()
{
}

void GenericCell_hscript_Token_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GenericCell_hscript_Token);
	HX_MARK_MEMBER_NAME(elt,"elt");
	HX_MARK_MEMBER_NAME(next,"next");
	HX_MARK_END_CLASS();
}

void GenericCell_hscript_Token_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(elt,"elt");
	HX_VISIT_MEMBER_NAME(next,"next");
}

::hx::Val GenericCell_hscript_Token_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { return ::hx::Val( elt ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GenericCell_hscript_Token_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"elt") ) { elt=inValue.Cast<  ::hscript::Token >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { next=inValue.Cast<  ::haxe::ds::GenericCell_hscript_Token >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GenericCell_hscript_Token_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("elt",2d,02,4d,00));
	outFields->push(HX_("next",f3,84,02,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GenericCell_hscript_Token_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hscript::Token */ ,(int)offsetof(GenericCell_hscript_Token_obj,elt),HX_("elt",2d,02,4d,00)},
	{::hx::fsObject /*  ::haxe::ds::GenericCell_hscript_Token */ ,(int)offsetof(GenericCell_hscript_Token_obj,next),HX_("next",f3,84,02,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GenericCell_hscript_Token_obj_sStaticStorageInfo = 0;
#endif

static ::String GenericCell_hscript_Token_obj_sMemberFields[] = {
	HX_("elt",2d,02,4d,00),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class GenericCell_hscript_Token_obj::__mClass;

void GenericCell_hscript_Token_obj::__register()
{
	GenericCell_hscript_Token_obj _hx_dummy;
	GenericCell_hscript_Token_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ds.GenericCell_hscript_Token",b0,f5,2d,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GenericCell_hscript_Token_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GenericCell_hscript_Token_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GenericCell_hscript_Token_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GenericCell_hscript_Token_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
