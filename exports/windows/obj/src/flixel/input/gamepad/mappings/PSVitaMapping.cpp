// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadMappedInput
#include <flixel/input/gamepad/FlxGamepadMappedInput.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxTypedGamepadAnalogStick
#include <flixel/input/gamepad/FlxTypedGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id__PSVitaID_PSVitaID_Impl_
#include <flixel/input/gamepad/id/_PSVitaID/PSVitaID_Impl_.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxTypedGamepadMapping
#include <flixel/input/gamepad/mappings/FlxTypedGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_PSVitaMapping
#include <flixel/input/gamepad/mappings/PSVitaMapping.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cea460118c4fe0d4_7_new,"flixel.input.gamepad.mappings.PSVitaMapping","new",0x4af00697,"flixel.input.gamepad.mappings.PSVitaMapping.new","flixel/input/gamepad/mappings/PSVitaMapping.hx",7,0xe1b17b97)
HX_LOCAL_STACK_FRAME(_hx_pos_cea460118c4fe0d4_10_initValues,"flixel.input.gamepad.mappings.PSVitaMapping","initValues",0xc2c96dbb,"flixel.input.gamepad.mappings.PSVitaMapping.initValues","flixel/input/gamepad/mappings/PSVitaMapping.hx",10,0xe1b17b97)
HX_LOCAL_STACK_FRAME(_hx_pos_cea460118c4fe0d4_17_getID,"flixel.input.gamepad.mappings.PSVitaMapping","getID",0xe42003e8,"flixel.input.gamepad.mappings.PSVitaMapping.getID","flixel/input/gamepad/mappings/PSVitaMapping.hx",17,0xe1b17b97)
HX_LOCAL_STACK_FRAME(_hx_pos_cea460118c4fe0d4_45_getRawID,"flixel.input.gamepad.mappings.PSVitaMapping","getRawID",0x46fe51b6,"flixel.input.gamepad.mappings.PSVitaMapping.getRawID","flixel/input/gamepad/mappings/PSVitaMapping.hx",45,0xe1b17b97)
HX_LOCAL_STACK_FRAME(_hx_pos_cea460118c4fe0d4_73_getInputLabel,"flixel.input.gamepad.mappings.PSVitaMapping","getInputLabel",0x0a60f2b7,"flixel.input.gamepad.mappings.PSVitaMapping.getInputLabel","flixel/input/gamepad/mappings/PSVitaMapping.hx",73,0xe1b17b97)
HX_LOCAL_STACK_FRAME(_hx_pos_cea460118c4fe0d4_90_getMappedInput,"flixel.input.gamepad.mappings.PSVitaMapping","getMappedInput",0x8b50818a,"flixel.input.gamepad.mappings.PSVitaMapping.getMappedInput","flixel/input/gamepad/mappings/PSVitaMapping.hx",90,0xe1b17b97)
HX_LOCAL_STACK_FRAME(_hx_pos_cea460118c4fe0d4_95_isAxisFlipped,"flixel.input.gamepad.mappings.PSVitaMapping","isAxisFlipped",0x43decece,"flixel.input.gamepad.mappings.PSVitaMapping.isAxisFlipped","flixel/input/gamepad/mappings/PSVitaMapping.hx",95,0xe1b17b97)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void PSVitaMapping_obj::__construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
            	HX_STACKFRAME(&_hx_pos_cea460118c4fe0d4_7_new)
HXDLIN(   7)		super::__construct(attachment);
            	}

Dynamic PSVitaMapping_obj::__CreateEmpty() { return new PSVitaMapping_obj; }

void *PSVitaMapping_obj::_hx_vtable = 0;

Dynamic PSVitaMapping_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PSVitaMapping_obj > _hx_result = new PSVitaMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PSVitaMapping_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x425bf69d) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x425bf69d;
	} else {
		return inClassId==(int)0x6e5567f3;
	}
}

void PSVitaMapping_obj::initValues(){
            	HX_STACKFRAME(&_hx_pos_cea460118c4fe0d4_10_initValues)
HXLINE(  11)		this->leftStick = ::flixel::input::gamepad::id::_PSVitaID::PSVitaID_Impl__obj::LEFT_ANALOG_STICK;
HXLINE(  12)		this->rightStick = ::flixel::input::gamepad::id::_PSVitaID::PSVitaID_Impl__obj::RIGHT_ANALOG_STICK;
            	}


int PSVitaMapping_obj::getID( ::Dynamic _tmp_rawID){
            	HX_STACKFRAME(&_hx_pos_cea460118c4fe0d4_17_getID)
HXDLIN(  17)		int rawID = ( (int)(_tmp_rawID) );
HXDLIN(  17)		switch((int)(rawID)){
            			case (int)6: {
HXLINE(  19)				return 0;
            			}
            			break;
            			case (int)7: {
HXLINE(  20)				return 1;
            			}
            			break;
            			case (int)8: {
HXLINE(  21)				return 2;
            			}
            			break;
            			case (int)9: {
HXLINE(  22)				return 3;
            			}
            			break;
            			case (int)10: {
HXLINE(  23)				return 6;
            			}
            			break;
            			case (int)12: {
HXLINE(  24)				return 7;
            			}
            			break;
            			case (int)15: {
HXLINE(  25)				return 4;
            			}
            			break;
            			case (int)16: {
HXLINE(  26)				return 5;
            			}
            			break;
            			case (int)17: {
HXLINE(  28)				return 11;
            			}
            			break;
            			case (int)18: {
HXLINE(  27)				return 12;
            			}
            			break;
            			case (int)19: {
HXLINE(  29)				return 13;
            			}
            			break;
            			case (int)20: {
HXLINE(  30)				return 14;
            			}
            			break;
            			default:{
HXLINE(  31)				int id = rawID;
HXDLIN(  31)				if (::hx::IsEq( id,this->leftStick->rawUp )) {
HXLINE(  31)					return 34;
            				}
            				else {
HXLINE(  32)					int id1 = rawID;
HXDLIN(  32)					if (::hx::IsEq( id1,this->leftStick->rawDown )) {
HXLINE(  32)						return 34;
            					}
            					else {
HXLINE(  33)						int id2 = rawID;
HXDLIN(  33)						if (::hx::IsEq( id2,this->leftStick->rawLeft )) {
HXLINE(  33)							return 37;
            						}
            						else {
HXLINE(  34)							int id3 = rawID;
HXDLIN(  34)							if (::hx::IsEq( id3,this->leftStick->rawRight )) {
HXLINE(  34)								return 35;
            							}
            							else {
HXLINE(  35)								int id4 = rawID;
HXDLIN(  35)								if (::hx::IsEq( id4,this->rightStick->rawUp )) {
HXLINE(  35)									return 38;
            								}
            								else {
HXLINE(  36)									int id5 = rawID;
HXDLIN(  36)									if (::hx::IsEq( id5,this->rightStick->rawDown )) {
HXLINE(  36)										return 40;
            									}
            									else {
HXLINE(  37)										int id6 = rawID;
HXDLIN(  37)										if (::hx::IsEq( id6,this->rightStick->rawLeft )) {
HXLINE(  37)											return 41;
            										}
            										else {
HXLINE(  38)											int id7 = rawID;
HXDLIN(  38)											if (::hx::IsEq( id7,this->rightStick->rawRight )) {
HXLINE(  38)												return 39;
            											}
            											else {
HXLINE(  39)												return -1;
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  17)		return null();
            	}


 ::Dynamic PSVitaMapping_obj::getRawID(int ID){
            	HX_STACKFRAME(&_hx_pos_cea460118c4fe0d4_45_getRawID)
HXDLIN(  45)		switch((int)(ID)){
            			case (int)0: {
HXLINE(  47)				return 6;
            			}
            			break;
            			case (int)1: {
HXLINE(  48)				return 7;
            			}
            			break;
            			case (int)2: {
HXLINE(  49)				return 8;
            			}
            			break;
            			case (int)3: {
HXLINE(  50)				return 9;
            			}
            			break;
            			case (int)4: {
HXLINE(  53)				return 15;
            			}
            			break;
            			case (int)5: {
HXLINE(  54)				return 16;
            			}
            			break;
            			case (int)6: {
HXLINE(  51)				return 10;
            			}
            			break;
            			case (int)7: {
HXLINE(  52)				return 12;
            			}
            			break;
            			case (int)11: {
HXLINE(  55)				return 17;
            			}
            			break;
            			case (int)12: {
HXLINE(  56)				return 18;
            			}
            			break;
            			case (int)13: {
HXLINE(  57)				return 19;
            			}
            			break;
            			case (int)14: {
HXLINE(  58)				return 20;
            			}
            			break;
            			case (int)34: {
HXLINE(  59)				return ::flixel::input::gamepad::id::_PSVitaID::PSVitaID_Impl__obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE(  62)				return ::flixel::input::gamepad::id::_PSVitaID::PSVitaID_Impl__obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE(  60)				return ::flixel::input::gamepad::id::_PSVitaID::PSVitaID_Impl__obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE(  61)				return ::flixel::input::gamepad::id::_PSVitaID::PSVitaID_Impl__obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			case (int)38: {
HXLINE(  63)				return ::flixel::input::gamepad::id::_PSVitaID::PSVitaID_Impl__obj::RIGHT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)39: {
HXLINE(  66)				return ::flixel::input::gamepad::id::_PSVitaID::PSVitaID_Impl__obj::RIGHT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)40: {
HXLINE(  64)				return ::flixel::input::gamepad::id::_PSVitaID::PSVitaID_Impl__obj::RIGHT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)41: {
HXLINE(  65)				return ::flixel::input::gamepad::id::_PSVitaID::PSVitaID_Impl__obj::RIGHT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE(  67)				return this->super::getRawID(ID);
            			}
            		}
HXLINE(  45)		return null();
            	}


::String PSVitaMapping_obj::getInputLabel(int id){
            	HX_STACKFRAME(&_hx_pos_cea460118c4fe0d4_73_getInputLabel)
HXDLIN(  73)		switch((int)(id)){
            			case (int)0: {
HXLINE(  75)				return HX_("x",78,00,00,00);
            			}
            			break;
            			case (int)1: {
HXLINE(  76)				return HX_("circle",10,72,0d,56);
            			}
            			break;
            			case (int)2: {
HXLINE(  77)				return HX_("square",9d,00,f2,58);
            			}
            			break;
            			case (int)3: {
HXLINE(  78)				return HX_("triangle",c8,be,c5,8d);
            			}
            			break;
            			case (int)4: {
HXLINE(  80)				return HX_("l1",45,5e,00,00);
            			}
            			break;
            			case (int)5: {
HXLINE(  81)				return HX_("r1",7f,63,00,00);
            			}
            			break;
            			case (int)6: {
HXLINE(  79)				return HX_("select",fc,1a,33,6a);
            			}
            			break;
            			case (int)17: {
HXLINE(  82)				return HX_("l2",46,5e,00,00);
            			}
            			break;
            			case (int)18: {
HXLINE(  83)				return HX_("r2",80,63,00,00);
            			}
            			break;
            			default:{
HXLINE(  84)				return this->super::getInputLabel(id);
            			}
            		}
HXLINE(  73)		return null();
            	}


 ::flixel::input::gamepad::FlxGamepadMappedInput PSVitaMapping_obj::getMappedInput(int id){
            	HX_STACKFRAME(&_hx_pos_cea460118c4fe0d4_90_getMappedInput)
HXDLIN(  90)		return ::flixel::input::gamepad::FlxGamepadMappedInput_obj::PS_VITA(this->getRawID(id));
            	}


bool PSVitaMapping_obj::isAxisFlipped( ::Dynamic _tmp_axisID){
            	HX_STACKFRAME(&_hx_pos_cea460118c4fe0d4_95_isAxisFlipped)
HXDLIN(  95)		int axisID = ( (int)(_tmp_axisID) );
HXDLIN(  95)		if ((axisID != ::flixel::input::gamepad::id::_PSVitaID::PSVitaID_Impl__obj::LEFT_ANALOG_STICK->y)) {
HXDLIN(  95)			return (axisID == ::flixel::input::gamepad::id::_PSVitaID::PSVitaID_Impl__obj::RIGHT_ANALOG_STICK->y);
            		}
            		else {
HXDLIN(  95)			return true;
            		}
HXDLIN(  95)		return false;
            	}



::hx::ObjectPtr< PSVitaMapping_obj > PSVitaMapping_obj::__new( ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	::hx::ObjectPtr< PSVitaMapping_obj > __this = new PSVitaMapping_obj();
	__this->__construct(attachment);
	return __this;
}

::hx::ObjectPtr< PSVitaMapping_obj > PSVitaMapping_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	PSVitaMapping_obj *__this = (PSVitaMapping_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PSVitaMapping_obj), true, "flixel.input.gamepad.mappings.PSVitaMapping"));
	*(void **)__this = PSVitaMapping_obj::_hx_vtable;
	__this->__construct(attachment);
	return __this;
}

PSVitaMapping_obj::PSVitaMapping_obj()
{
}

::hx::Val PSVitaMapping_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return ::hx::Val( getID_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return ::hx::Val( getRawID_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return ::hx::Val( initValues_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getInputLabel") ) { return ::hx::Val( getInputLabel_dyn() ); }
		if (HX_FIELD_EQ(inName,"isAxisFlipped") ) { return ::hx::Val( isAxisFlipped_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getMappedInput") ) { return ::hx::Val( getMappedInput_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PSVitaMapping_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PSVitaMapping_obj_sStaticStorageInfo = 0;
#endif

static ::String PSVitaMapping_obj_sMemberFields[] = {
	HX_("initValues",12,5f,fc,53),
	HX_("getID",f1,91,60,91),
	HX_("getRawID",4d,6f,fd,43),
	HX_("getInputLabel",c0,31,5c,4a),
	HX_("getMappedInput",61,6a,2c,47),
	HX_("isAxisFlipped",d7,0d,da,83),
	::String(null()) };

::hx::Class PSVitaMapping_obj::__mClass;

void PSVitaMapping_obj::__register()
{
	PSVitaMapping_obj _hx_dummy;
	PSVitaMapping_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.mappings.PSVitaMapping",25,6f,7d,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PSVitaMapping_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PSVitaMapping_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PSVitaMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PSVitaMapping_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
