// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl_utils__AGALMiniAssembler_Register
#include <openfl/utils/_AGALMiniAssembler/Register.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6ccc15e272cca89a_831_new,"openfl.utils._AGALMiniAssembler.Register","new",0x1846d8af,"openfl.utils._AGALMiniAssembler.Register.new","openfl/utils/AGALMiniAssembler.hx",831,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_6ccc15e272cca89a_841_toString,"openfl.utils._AGALMiniAssembler.Register","toString",0xe0b049fd,"openfl.utils._AGALMiniAssembler.Register.toString","openfl/utils/AGALMiniAssembler.hx",841,0x125eff83)
HX_LOCAL_STACK_FRAME(_hx_pos_6ccc15e272cca89a_822_boot,"openfl.utils._AGALMiniAssembler.Register","boot",0x1dcfc103,"openfl.utils._AGALMiniAssembler.Register.boot","openfl/utils/AGALMiniAssembler.hx",822,0x125eff83)
namespace openfl{
namespace utils{
namespace _AGALMiniAssembler{

void Register_obj::__construct(::String name,::String longName,int emitCode,int range,int flags){
            	HX_STACKFRAME(&_hx_pos_6ccc15e272cca89a_831_new)
HXLINE( 832)		this->name = name;
HXLINE( 833)		this->longName = longName;
HXLINE( 834)		this->emitCode = emitCode;
HXLINE( 835)		this->range = range;
HXLINE( 836)		this->flags = flags;
            	}

Dynamic Register_obj::__CreateEmpty() { return new Register_obj; }

void *Register_obj::_hx_vtable = 0;

Dynamic Register_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Register_obj > _hx_result = new Register_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Register_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4aa50495;
}

::String Register_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_6ccc15e272cca89a_841_toString)
HXDLIN( 841)		::String _hx_tmp = ((((HX_("[Register name=\"",52,ca,95,64) + this->name) + HX_("\", longName=\"",82,59,39,e3)) + this->longName) + HX_("\", emitCode=",47,55,e6,cb));
HXLINE( 846)		int _hx_int = this->emitCode;
HXDLIN( 846)		Float _hx_tmp1;
HXDLIN( 846)		if ((_hx_int < 0)) {
HXLINE( 846)			_hx_tmp1 = (((Float)4294967296.0) + _hx_int);
            		}
            		else {
HXLINE( 846)			_hx_tmp1 = (_hx_int + ((Float)0.0));
            		}
HXLINE( 841)		::String _hx_tmp2 = ((_hx_tmp + ::Std_obj::string(_hx_tmp1)) + HX_(", range=",54,d5,eb,be));
HXLINE( 848)		int int1 = this->range;
HXDLIN( 848)		Float _hx_tmp3;
HXDLIN( 848)		if ((int1 < 0)) {
HXLINE( 848)			_hx_tmp3 = (((Float)4294967296.0) + int1);
            		}
            		else {
HXLINE( 848)			_hx_tmp3 = (int1 + ((Float)0.0));
            		}
HXLINE( 841)		::String _hx_tmp4 = ((_hx_tmp2 + ::Std_obj::string(_hx_tmp3)) + HX_(", flags=",8a,28,74,3f));
HXLINE( 850)		int int2 = this->flags;
HXDLIN( 850)		Float _hx_tmp5;
HXDLIN( 850)		if ((int2 < 0)) {
HXLINE( 850)			_hx_tmp5 = (((Float)4294967296.0) + int2);
            		}
            		else {
HXLINE( 850)			_hx_tmp5 = (int2 + ((Float)0.0));
            		}
HXLINE( 841)		return ((_hx_tmp4 + ::Std_obj::string(_hx_tmp5)) + HX_("]",5d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Register_obj,toString,return )


::hx::ObjectPtr< Register_obj > Register_obj::__new(::String name,::String longName,int emitCode,int range,int flags) {
	::hx::ObjectPtr< Register_obj > __this = new Register_obj();
	__this->__construct(name,longName,emitCode,range,flags);
	return __this;
}

::hx::ObjectPtr< Register_obj > Register_obj::__alloc(::hx::Ctx *_hx_ctx,::String name,::String longName,int emitCode,int range,int flags) {
	Register_obj *__this = (Register_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Register_obj), true, "openfl.utils._AGALMiniAssembler.Register"));
	*(void **)__this = Register_obj::_hx_vtable;
	__this->__construct(name,longName,emitCode,range,flags);
	return __this;
}

Register_obj::Register_obj()
{
}

void Register_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Register);
	HX_MARK_MEMBER_NAME(emitCode,"emitCode");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(longName,"longName");
	HX_MARK_MEMBER_NAME(flags,"flags");
	HX_MARK_MEMBER_NAME(range,"range");
	HX_MARK_END_CLASS();
}

void Register_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(emitCode,"emitCode");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(longName,"longName");
	HX_VISIT_MEMBER_NAME(flags,"flags");
	HX_VISIT_MEMBER_NAME(range,"range");
}

::hx::Val Register_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flags") ) { return ::hx::Val( flags ); }
		if (HX_FIELD_EQ(inName,"range") ) { return ::hx::Val( range ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"emitCode") ) { return ::hx::Val( emitCode ); }
		if (HX_FIELD_EQ(inName,"longName") ) { return ::hx::Val( longName ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Register_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"flags") ) { flags=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"range") ) { range=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"emitCode") ) { emitCode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"longName") ) { longName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Register_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("emitCode",20,a1,1c,38));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("longName",e7,b1,76,a6));
	outFields->push(HX_("flags",47,2b,8c,02));
	outFields->push(HX_("range",bd,a5,1f,e4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Register_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Register_obj,emitCode),HX_("emitCode",20,a1,1c,38)},
	{::hx::fsString,(int)offsetof(Register_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsString,(int)offsetof(Register_obj,longName),HX_("longName",e7,b1,76,a6)},
	{::hx::fsInt,(int)offsetof(Register_obj,flags),HX_("flags",47,2b,8c,02)},
	{::hx::fsInt,(int)offsetof(Register_obj,range),HX_("range",bd,a5,1f,e4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Register_obj_sStaticStorageInfo = 0;
#endif

static ::String Register_obj_sMemberFields[] = {
	HX_("emitCode",20,a1,1c,38),
	HX_("name",4b,72,ff,48),
	HX_("longName",e7,b1,76,a6),
	HX_("flags",47,2b,8c,02),
	HX_("range",bd,a5,1f,e4),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class Register_obj::__mClass;

void Register_obj::__register()
{
	Register_obj _hx_dummy;
	Register_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._AGALMiniAssembler.Register",3d,55,4b,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Register_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Register_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Register_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Register_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Register_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6ccc15e272cca89a_822_boot)
HXDLIN( 822)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace utils
} // end namespace _AGALMiniAssembler
