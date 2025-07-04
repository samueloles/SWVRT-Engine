// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTile
#include <flixel/tile/FlxTile.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTypedTilemap
#include <flixel/tile/FlxTypedTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalHandler
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b6cd3463ece44f41_14_new,"flixel.tile.FlxTile","new",0xe45c12a4,"flixel.tile.FlxTile.new","flixel/tile/FlxTile.hx",14,0x7142a1ac)
HX_LOCAL_STACK_FRAME(_hx_pos_b6cd3463ece44f41_88_destroy,"flixel.tile.FlxTile","destroy",0x4616e13e,"flixel.tile.FlxTile.destroy","flixel/tile/FlxTile.hx",88,0x7142a1ac)
HX_LOCAL_STACK_FRAME(_hx_pos_b6cd3463ece44f41_106___default_overlapsObject,"flixel.tile.FlxTile","__default_overlapsObject",0xddbef245,"flixel.tile.FlxTile.__default_overlapsObject","flixel/tile/FlxTile.hx",106,0x7142a1ac)
HX_LOCAL_STACK_FRAME(_hx_pos_b6cd3463ece44f41_126___default_orientAt,"flixel.tile.FlxTile","__default_orientAt",0xca1689f2,"flixel.tile.FlxTile.__default_orientAt","flixel/tile/FlxTile.hx",126,0x7142a1ac)
HX_LOCAL_STACK_FRAME(_hx_pos_b6cd3463ece44f41_148_orient,"flixel.tile.FlxTile","orient",0x68ff1a01,"flixel.tile.FlxTile.orient","flixel/tile/FlxTile.hx",148,0x7142a1ac)
HX_LOCAL_STACK_FRAME(_hx_pos_b6cd3463ece44f41_164_orientByIndex,"flixel.tile.FlxTile","orientByIndex",0x08a3e9ba,"flixel.tile.FlxTile.orientByIndex","flixel/tile/FlxTile.hx",164,0x7142a1ac)
HX_LOCAL_STACK_FRAME(_hx_pos_b6cd3463ece44f41_180_orientAtByIndex,"flixel.tile.FlxTile","orientAtByIndex",0x34b8cec7,"flixel.tile.FlxTile.orientAtByIndex","flixel/tile/FlxTile.hx",180,0x7142a1ac)
namespace flixel{
namespace tile{

void FlxTile_obj::__construct( ::flixel::tile::FlxTypedTilemap tilemap,int index,Float width,Float height,bool visible,int allowCollisions){
            	HX_GC_STACKFRAME(&_hx_pos_b6cd3463ece44f41_14_new)
HXLINE(  54)		this->mapIndex = 0;
HXLINE(  27)		this->onCollide =  ::flixel::util::_FlxSignal::FlxSignal2_obj::__alloc( HX_CTX );
HXLINE(  21)		this->callbackFunction = null();
HXLINE(  73)		super::__construct(0,0,width,height);
HXLINE(  75)		this->set_immovable(true);
HXLINE(  76)		this->set_moves(false);
HXLINE(  78)		this->tilemap = tilemap;
HXLINE(  79)		this->index = index;
HXLINE(  80)		this->set_visible(visible);
HXLINE(  81)		this->set_allowCollisions(allowCollisions);
            	}

Dynamic FlxTile_obj::__CreateEmpty() { return new FlxTile_obj; }

void *FlxTile_obj::_hx_vtable = 0;

Dynamic FlxTile_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTile_obj > _hx_result = new FlxTile_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FlxTile_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2d663896) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2d663896;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655;
	}
}

void FlxTile_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_b6cd3463ece44f41_88_destroy)
HXLINE(  89)		this->super::destroy();
HXLINE(  91)		this->callbackFunction = null();
HXLINE(  92)		this->tilemap = null();
HXLINE(  93)		this->frame = null();
HXLINE(  94)		::flixel::util::FlxDestroyUtil_obj::destroyArray(this->onCollide->handlers);
            	}


HX_BEGIN_DEFAULT_FUNC(__default_overlapsObject,FlxTile_obj)
bool _hx_run( ::flixel::FlxObject object){
            	HX_STACKFRAME(&_hx_pos_b6cd3463ece44f41_106___default_overlapsObject)
HXDLIN( 106)		bool _hx_tmp;
HXDLIN( 106)		bool _hx_tmp1;
HXDLIN( 106)		bool _hx_tmp2;
HXDLIN( 106)		Float object1 = object->x;
HXDLIN( 106)		Float _hx_tmp3 = (object1 + object->get_width());
HXDLIN( 106)		if ((_hx_tmp3 > ( ( ::flixel::FlxObject)(__this) )->x)) {
HXLINE( 107)			Float object2 = object->x;
HXDLIN( 107)			Float _hx_tmp4 = ( ( ::flixel::FlxObject)(__this) )->x;
HXLINE( 106)			_hx_tmp2 = (object2 < (_hx_tmp4 + ( ( ::flixel::FlxObject)(__this) )->get_width()));
            		}
            		else {
HXDLIN( 106)			_hx_tmp2 = false;
            		}
HXDLIN( 106)		if (_hx_tmp2) {
HXLINE( 108)			Float object3 = object->y;
HXDLIN( 108)			Float _hx_tmp5 = (object3 + object->get_height());
HXLINE( 106)			_hx_tmp1 = (_hx_tmp5 > ( ( ::flixel::FlxObject)(__this) )->y);
            		}
            		else {
HXDLIN( 106)			_hx_tmp1 = false;
            		}
HXDLIN( 106)		if (_hx_tmp1) {
HXLINE( 109)			Float object4 = object->y;
HXDLIN( 109)			Float _hx_tmp6 = ( ( ::flixel::FlxObject)(__this) )->y;
HXLINE( 106)			_hx_tmp = (object4 < (_hx_tmp6 + ( ( ::flixel::FlxObject)(__this) )->get_height()));
            		}
            		else {
HXDLIN( 106)			_hx_tmp = false;
            		}
HXDLIN( 106)		if (_hx_tmp) {
HXLINE( 110)			if (::hx::IsNotNull( ( ( ::flixel::tile::FlxTile)(__this) )->filter )) {
HXLINE( 110)				return ::Std_obj::isOfType(object,( ( ::flixel::tile::FlxTile)(__this) )->filter);
            			}
            			else {
HXLINE( 110)				return true;
            			}
            		}
            		else {
HXDLIN( 106)			return false;
            		}
HXDLIN( 106)		return false;
            	}
HX_END_LOCAL_FUNC1(return )
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_orientAt,FlxTile_obj)
void _hx_run(Float xPos,Float yPos,int col,int row){
            	HX_STACKFRAME(&_hx_pos_b6cd3463ece44f41_126___default_orientAt)
HXLINE( 127)		 ::flixel::tile::FlxTypedTilemap _this = ( ( ::flixel::tile::FlxTile)(__this) )->tilemap;
HXDLIN( 127)		int _hx_tmp;
HXDLIN( 127)		bool _hx_tmp1;
HXDLIN( 127)		bool _hx_tmp2;
HXDLIN( 127)		if ((col >= 0)) {
HXLINE( 127)			_hx_tmp2 = (col < _this->widthInTiles);
            		}
            		else {
HXLINE( 127)			_hx_tmp2 = false;
            		}
HXDLIN( 127)		if (_hx_tmp2) {
HXLINE( 127)			if ((row >= 0)) {
HXLINE( 127)				_hx_tmp1 = (row < _this->heightInTiles);
            			}
            			else {
HXLINE( 127)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE( 127)			_hx_tmp1 = false;
            		}
HXDLIN( 127)		if (_hx_tmp1) {
HXLINE( 127)			_hx_tmp = ((row * _this->widthInTiles) + col);
            		}
            		else {
HXLINE( 127)			_hx_tmp = -1;
            		}
HXDLIN( 127)		( ( ::flixel::tile::FlxTile)(__this) )->mapIndex = _hx_tmp;
HXLINE( 128)		( ( ::flixel::FlxObject)(__this) )->set_width(( ( ::flixel::tile::FlxTile)(__this) )->tilemap->scaledTileWidth);
HXLINE( 129)		( ( ::flixel::FlxObject)(__this) )->set_height(( ( ::flixel::tile::FlxTile)(__this) )->tilemap->scaledTileHeight);
HXLINE( 130)		( ( ::flixel::FlxObject)(__this) )->set_x((xPos + (( (Float)(col) ) * ( ( ::flixel::FlxObject)(__this) )->get_width())));
HXLINE( 131)		( ( ::flixel::FlxObject)(__this) )->set_y((yPos + (( (Float)(row) ) * ( ( ::flixel::FlxObject)(__this) )->get_height())));
HXLINE( 132)		( ( ::flixel::FlxObject)(__this) )->last->set_x((( ( ::flixel::FlxObject)(__this) )->x - (xPos - ( ( ::flixel::tile::FlxTile)(__this) )->tilemap->last->x)));
HXLINE( 133)		( ( ::flixel::FlxObject)(__this) )->last->set_y((( ( ::flixel::FlxObject)(__this) )->y - (yPos - ( ( ::flixel::tile::FlxTile)(__this) )->tilemap->last->y)));
            	}
HX_END_LOCAL_FUNC4((void))
HX_END_DEFAULT_FUNC

void FlxTile_obj::orient(int col,int row){
            	HX_STACKFRAME(&_hx_pos_b6cd3463ece44f41_148_orient)
HXDLIN( 148)		this->orientAt(this->tilemap->x,this->tilemap->y,col,row);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTile_obj,orient,(void))

void FlxTile_obj::orientByIndex(int mapIndex){
            	HX_STACKFRAME(&_hx_pos_b6cd3463ece44f41_164_orientByIndex)
HXDLIN( 164)		Float xPos = this->tilemap->x;
HXDLIN( 164)		Float yPos = this->tilemap->y;
HXDLIN( 164)		 ::Dynamic _hx_tmp = this->orientAt;
HXDLIN( 164)		int _hx_tmp1 = ::hx::Mod(mapIndex,this->tilemap->widthInTiles);
HXDLIN( 164)		_hx_tmp(xPos,yPos,_hx_tmp1,::Std_obj::_hx_int((( (Float)(mapIndex) ) / ( (Float)(this->tilemap->widthInTiles) ))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTile_obj,orientByIndex,(void))

void FlxTile_obj::orientAtByIndex(Float xPos,Float yPos,int mapIndex){
            	HX_STACKFRAME(&_hx_pos_b6cd3463ece44f41_180_orientAtByIndex)
HXDLIN( 180)		 ::Dynamic _hx_tmp = this->orientAt;
HXDLIN( 180)		int _hx_tmp1 = ::hx::Mod(mapIndex,this->tilemap->widthInTiles);
HXDLIN( 180)		_hx_tmp(xPos,yPos,_hx_tmp1,::Std_obj::_hx_int((( (Float)(mapIndex) ) / ( (Float)(this->tilemap->widthInTiles) ))));
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTile_obj,orientAtByIndex,(void))


void FlxTile_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,FlxTile_obj *_hx_obj) {
	if (!_hx_obj->orientAt.mPtr) _hx_obj->orientAt = new __default_orientAt(_hx_obj);
	if (!_hx_obj->overlapsObject.mPtr) _hx_obj->overlapsObject = new __default_overlapsObject(_hx_obj);
}
::hx::ObjectPtr< FlxTile_obj > FlxTile_obj::__new( ::flixel::tile::FlxTypedTilemap tilemap,int index,Float width,Float height,bool visible,int allowCollisions) {
	::hx::ObjectPtr< FlxTile_obj > __this = new FlxTile_obj();
	__this->__construct(tilemap,index,width,height,visible,allowCollisions);
	return __this;
}

::hx::ObjectPtr< FlxTile_obj > FlxTile_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::tile::FlxTypedTilemap tilemap,int index,Float width,Float height,bool visible,int allowCollisions) {
	FlxTile_obj *__this = (FlxTile_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTile_obj), true, "flixel.tile.FlxTile"));
	*(void **)__this = FlxTile_obj::_hx_vtable;
	flixel::tile::FlxTile_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(tilemap,index,width,height,visible,allowCollisions);
	return __this;
}

FlxTile_obj::FlxTile_obj()
{
	orientAt = new __default_orientAt(this);
	overlapsObject = new __default_overlapsObject(this);
}

void FlxTile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTile);
	HX_MARK_MEMBER_NAME(callbackFunction,"callbackFunction");
	HX_MARK_MEMBER_NAME(onCollide,"onCollide");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(tilemap,"tilemap");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(mapIndex,"mapIndex");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(overlapsObject,"overlapsObject");
	HX_MARK_MEMBER_NAME(orientAt,"orientAt");
	 ::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(callbackFunction,"callbackFunction");
	HX_VISIT_MEMBER_NAME(onCollide,"onCollide");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(tilemap,"tilemap");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(mapIndex,"mapIndex");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(overlapsObject,"overlapsObject");
	HX_VISIT_MEMBER_NAME(orientAt,"orientAt");
	 ::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTile_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		if (HX_FIELD_EQ(inName,"frame") ) { return ::hx::Val( frame ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter ); }
		if (HX_FIELD_EQ(inName,"orient") ) { return ::hx::Val( orient_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tilemap") ) { return ::hx::Val( tilemap ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mapIndex") ) { return ::hx::Val( mapIndex ); }
		if (HX_FIELD_EQ(inName,"orientAt") ) { return ::hx::Val( orientAt ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onCollide") ) { return ::hx::Val( onCollide ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"orientByIndex") ) { return ::hx::Val( orientByIndex_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"overlapsObject") ) { return ::hx::Val( overlapsObject ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"orientAtByIndex") ) { return ::hx::Val( orientAtByIndex_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"callbackFunction") ) { return ::hx::Val( callbackFunction ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTile_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast<  ::flixel::graphics::frames::FlxFrame >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< ::hx::Class >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tilemap") ) { tilemap=inValue.Cast<  ::flixel::tile::FlxTypedTilemap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mapIndex") ) { mapIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"orientAt") ) { orientAt=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onCollide") ) { onCollide=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal2 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"overlapsObject") ) { overlapsObject=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"callbackFunction") ) { callbackFunction=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("onCollide",1f,68,0e,c5));
	outFields->push(HX_("filter",b8,1f,35,85));
	outFields->push(HX_("tilemap",2e,f0,8e,45));
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("mapIndex",d6,0a,57,35));
	outFields->push(HX_("frame",2d,78,83,06));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTile_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTile_obj,callbackFunction),HX_("callbackFunction",fd,cd,91,7e)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal2 */ ,(int)offsetof(FlxTile_obj,onCollide),HX_("onCollide",1f,68,0e,c5)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(FlxTile_obj,filter),HX_("filter",b8,1f,35,85)},
	{::hx::fsObject /*  ::flixel::tile::FlxTypedTilemap */ ,(int)offsetof(FlxTile_obj,tilemap),HX_("tilemap",2e,f0,8e,45)},
	{::hx::fsInt,(int)offsetof(FlxTile_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsInt,(int)offsetof(FlxTile_obj,mapIndex),HX_("mapIndex",d6,0a,57,35)},
	{::hx::fsObject /*  ::flixel::graphics::frames::FlxFrame */ ,(int)offsetof(FlxTile_obj,frame),HX_("frame",2d,78,83,06)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTile_obj,overlapsObject),HX_("overlapsObject",eb,96,60,ee)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTile_obj,orientAt),HX_("orientAt",18,8e,6d,bd)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTile_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTile_obj_sMemberFields[] = {
	HX_("callbackFunction",fd,cd,91,7e),
	HX_("onCollide",1f,68,0e,c5),
	HX_("filter",b8,1f,35,85),
	HX_("tilemap",2e,f0,8e,45),
	HX_("index",12,9b,14,be),
	HX_("mapIndex",d6,0a,57,35),
	HX_("frame",2d,78,83,06),
	HX_("destroy",fa,2c,86,24),
	HX_("overlapsObject",eb,96,60,ee),
	HX_("orientAt",18,8e,6d,bd),
	HX_("orient",c5,99,ff,4a),
	HX_("orientByIndex",76,aa,e0,37),
	HX_("orientAtByIndex",83,36,34,3d),
	::String(null()) };

::hx::Class FlxTile_obj::__mClass;

void FlxTile_obj::__register()
{
	FlxTile_obj _hx_dummy;
	FlxTile_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tile.FlxTile",b2,30,f5,6d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTile_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTile_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTile_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTile_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tile
