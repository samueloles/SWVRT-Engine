// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_77_new,"openfl.geom.Point","new",0xa6fb3c0e,"openfl.geom.Point.new","openfl/geom/Point.hx",77,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_91_add,"openfl.geom.Point","add",0xa6f15dcf,"openfl.geom.Point.add","openfl/geom/Point.hx",91,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_103_addToOutput,"openfl.geom.Point","addToOutput",0xd1bbb7cb,"openfl.geom.Point.addToOutput","openfl/geom/Point.hx",103,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_119_clone,"openfl.geom.Point","clone",0x787f468b,"openfl.geom.Point.clone","openfl/geom/Point.hx",119,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_129_copyFrom,"openfl.geom.Point","copyFrom",0x660e8951,"openfl.geom.Point.copyFrom","openfl/geom/Point.hx",129,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_158_equals,"openfl.geom.Point","equals",0xa8838351,"openfl.geom.Point.equals","openfl/geom/Point.hx",158,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_227_normalize,"openfl.geom.Point","normalize",0x05c199bb,"openfl.geom.Point.normalize","openfl/geom/Point.hx",227,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_250_offset,"openfl.geom.Point","offset",0x48d02ca5,"openfl.geom.Point.offset","openfl/geom/Point.hx",250,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_294_setTo,"openfl.geom.Point","setTo",0xaa4bc4eb,"openfl.geom.Point.setTo","openfl/geom/Point.hx",294,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_308_subtract,"openfl.geom.Point","subtract",0x95bef2a6,"openfl.geom.Point.subtract","openfl/geom/Point.hx",308,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_321_subtractToOutput,"openfl.geom.Point","subtractToOutput",0x8efc7ba2,"openfl.geom.Point.subtractToOutput","openfl/geom/Point.hx",321,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_340_toString,"openfl.geom.Point","toString",0xd61c4e3e,"openfl.geom.Point.toString","openfl/geom/Point.hx",340,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_345___toLimeVector2,"openfl.geom.Point","__toLimeVector2",0x318eb74d,"openfl.geom.Point.__toLimeVector2","openfl/geom/Point.hx",345,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_359_get_length,"openfl.geom.Point","get_length",0x11c48ac1,"openfl.geom.Point.get_length","openfl/geom/Point.hx",359,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_142_distance,"openfl.geom.Point","distance",0x09a710c7,"openfl.geom.Point.distance","openfl/geom/Point.hx",142,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_182_interpolate,"openfl.geom.Point","interpolate",0x8bd29e6f,"openfl.geom.Point.interpolate","openfl/geom/Point.hx",182,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_207_interpolateToOutput,"openfl.geom.Point","interpolateToOutput",0x30be986b,"openfl.geom.Point.interpolateToOutput","openfl/geom/Point.hx",207,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_264_polar,"openfl.geom.Point","polar",0xf6ae22ec,"openfl.geom.Point.polar","openfl/geom/Point.hx",264,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_278_polarToOutput,"openfl.geom.Point","polarToOutput",0xe89e61e8,"openfl.geom.Point.polarToOutput","openfl/geom/Point.hx",278,0x18173b82)
HX_LOCAL_STACK_FRAME(_hx_pos_35745b0e94bdaa0e_40_boot,"openfl.geom.Point","boot",0x6cf250c4,"openfl.geom.Point.boot","openfl/geom/Point.hx",40,0x18173b82)
namespace openfl{
namespace geom{

void Point_obj::__construct(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_77_new)
HXLINE(  78)		this->x = x;
HXLINE(  79)		this->y = y;
            	}

Dynamic Point_obj::__CreateEmpty() { return new Point_obj; }

void *Point_obj::_hx_vtable = 0;

Dynamic Point_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Point_obj > _hx_result = new Point_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Point_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4e2e0440;
}

 ::openfl::geom::Point Point_obj::add( ::openfl::geom::Point v){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_91_add)
HXDLIN(  91)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,(v->x + this->x),(v->y + this->y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,add,return )

 ::openfl::geom::Point Point_obj::addToOutput( ::openfl::geom::Point v, ::openfl::geom::Point output){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_103_addToOutput)
HXLINE( 104)		if (::hx::IsNotNull( output )) {
HXLINE( 106)			output->setTo((v->x + this->x),(v->y + this->y));
HXLINE( 107)			return output;
            		}
HXLINE( 109)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,(v->x + this->x),(v->y + this->y));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,addToOutput,return )

 ::openfl::geom::Point Point_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_119_clone)
HXDLIN( 119)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,clone,return )

void Point_obj::copyFrom( ::openfl::geom::Point sourcePoint){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_129_copyFrom)
HXLINE( 130)		this->x = sourcePoint->x;
HXLINE( 131)		this->y = sourcePoint->y;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,copyFrom,(void))

bool Point_obj::equals( ::openfl::geom::Point toCompare){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_158_equals)
HXDLIN( 158)		bool _hx_tmp;
HXDLIN( 158)		if (::hx::IsNotNull( toCompare )) {
HXDLIN( 158)			_hx_tmp = (toCompare->x == this->x);
            		}
            		else {
HXDLIN( 158)			_hx_tmp = false;
            		}
HXDLIN( 158)		if (_hx_tmp) {
HXDLIN( 158)			return (toCompare->y == this->y);
            		}
            		else {
HXDLIN( 158)			return false;
            		}
HXDLIN( 158)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,equals,return )

void Point_obj::normalize(Float thickness){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_227_normalize)
HXDLIN( 227)		bool _hx_tmp;
HXDLIN( 227)		if ((this->x == 0)) {
HXDLIN( 227)			_hx_tmp = (this->y == 0);
            		}
            		else {
HXDLIN( 227)			_hx_tmp = false;
            		}
HXDLIN( 227)		if (_hx_tmp) {
HXLINE( 229)			return;
            		}
            		else {
HXLINE( 233)			Float norm = (thickness / ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y))));
HXLINE( 234)			 ::openfl::geom::Point _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 234)			_hx_tmp1->x = (_hx_tmp1->x * norm);
HXLINE( 235)			 ::openfl::geom::Point _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 235)			_hx_tmp2->y = (_hx_tmp2->y * norm);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,normalize,(void))

void Point_obj::offset(Float dx,Float dy){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_250_offset)
HXLINE( 251)		 ::openfl::geom::Point _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 251)		_hx_tmp->x = (_hx_tmp->x + dx);
HXLINE( 252)		 ::openfl::geom::Point _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 252)		_hx_tmp1->y = (_hx_tmp1->y + dy);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,offset,(void))

void Point_obj::setTo(Float xa,Float ya){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_294_setTo)
HXLINE( 295)		this->x = xa;
HXLINE( 296)		this->y = ya;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,setTo,(void))

 ::openfl::geom::Point Point_obj::subtract( ::openfl::geom::Point v){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_308_subtract)
HXDLIN( 308)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,(this->x - v->x),(this->y - v->y));
            	}


HX_DEFINE_DYNAMIC_FUNC1(Point_obj,subtract,return )

 ::openfl::geom::Point Point_obj::subtractToOutput( ::openfl::geom::Point v, ::openfl::geom::Point output){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_321_subtractToOutput)
HXLINE( 322)		if (::hx::IsNotNull( output )) {
HXLINE( 324)			output->setTo((this->x - v->x),(this->y - v->y));
HXLINE( 325)			return output;
            		}
HXLINE( 327)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,(this->x - v->x),(this->y - v->y));
            	}


HX_DEFINE_DYNAMIC_FUNC2(Point_obj,subtractToOutput,return )

::String Point_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_340_toString)
HXDLIN( 340)		return ((((HX_("(x=",ed,c2,1e,00) + this->x) + HX_(", y=",18,15,2e,1d)) + this->y) + HX_(")",29,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,toString,return )

 ::lime::math::Vector2 Point_obj::_hx___toLimeVector2(){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_345___toLimeVector2)
HXLINE( 346)		if (::hx::IsNull( ::openfl::geom::Point_obj::_hx___limeVector2 )) {
HXLINE( 348)			::openfl::geom::Point_obj::_hx___limeVector2 =  ::lime::math::Vector2_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 351)		{
HXLINE( 351)			 ::lime::math::Vector2 _this = ::openfl::geom::Point_obj::_hx___limeVector2;
HXDLIN( 351)			_this->x = this->x;
HXDLIN( 351)			_this->y = this->y;
            		}
HXLINE( 352)		return ::openfl::geom::Point_obj::_hx___limeVector2;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,_hx___toLimeVector2,return )

Float Point_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_359_get_length)
HXDLIN( 359)		return ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Point_obj,get_length,return )

 ::lime::utils::ObjectPool Point_obj::_hx___pool;

 ::lime::math::Vector2 Point_obj::_hx___limeVector2;

Float Point_obj::distance( ::openfl::geom::Point pt1, ::openfl::geom::Point pt2){
            	HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_142_distance)
HXLINE( 143)		Float dx = (pt1->x - pt2->x);
HXLINE( 144)		Float dy = (pt1->y - pt2->y);
HXLINE( 145)		return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Point_obj,distance,return )

 ::openfl::geom::Point Point_obj::interpolate( ::openfl::geom::Point pt1, ::openfl::geom::Point pt2,Float f){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_182_interpolate)
HXDLIN( 182)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,(pt2->x + (f * (pt1->x - pt2->x))),(pt2->y + (f * (pt1->y - pt2->y))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Point_obj,interpolate,return )

 ::openfl::geom::Point Point_obj::interpolateToOutput( ::openfl::geom::Point pt1, ::openfl::geom::Point pt2,Float f, ::openfl::geom::Point output){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_207_interpolateToOutput)
HXLINE( 208)		if (::hx::IsNotNull( output )) {
HXLINE( 210)			output->setTo((pt2->x + (f * (pt1->x - pt2->x))),(pt2->y + (f * (pt1->y - pt2->y))));
HXLINE( 211)			return output;
            		}
HXLINE( 213)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,(pt2->x + (f * (pt1->x - pt2->x))),(pt2->y + (f * (pt1->y - pt2->y))));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Point_obj,interpolateToOutput,return )

 ::openfl::geom::Point Point_obj::polar(Float len,Float angle){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_264_polar)
HXDLIN( 264)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,(len * ::Math_obj::cos(angle)),(len * ::Math_obj::sin(angle)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Point_obj,polar,return )

 ::openfl::geom::Point Point_obj::polarToOutput(Float len,Float angle, ::openfl::geom::Point output){
            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_278_polarToOutput)
HXLINE( 279)		if (::hx::IsNotNull( output )) {
HXLINE( 281)			output->setTo((len * ::Math_obj::cos(angle)),(len * ::Math_obj::sin(angle)));
HXLINE( 282)			return output;
            		}
HXLINE( 284)		return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,(len * ::Math_obj::cos(angle)),(len * ::Math_obj::sin(angle)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Point_obj,polarToOutput,return )


::hx::ObjectPtr< Point_obj > Point_obj::__new(::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	::hx::ObjectPtr< Point_obj > __this = new Point_obj();
	__this->__construct(__o_x,__o_y);
	return __this;
}

::hx::ObjectPtr< Point_obj > Point_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y) {
	Point_obj *__this = (Point_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Point_obj), false, "openfl.geom.Point"));
	*(void **)__this = Point_obj::_hx_vtable;
	__this->__construct(__o_x,__o_y);
	return __this;
}

Point_obj::Point_obj()
{
}

::hx::Val Point_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return ::hx::Val( setTo_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_length() ); }
		if (HX_FIELD_EQ(inName,"equals") ) { return ::hx::Val( equals_dyn() ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return ::hx::Val( copyFrom_dyn() ); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return ::hx::Val( subtract_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return ::hx::Val( normalize_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_length") ) { return ::hx::Val( get_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addToOutput") ) { return ::hx::Val( addToOutput_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__toLimeVector2") ) { return ::hx::Val( _hx___toLimeVector2_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"subtractToOutput") ) { return ::hx::Val( subtractToOutput_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Point_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"polar") ) { outValue = polar_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { outValue = ( _hx___pool ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { outValue = interpolate_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__limeVector2") ) { outValue = ( _hx___limeVector2 ); return true; }
		if (HX_FIELD_EQ(inName,"polarToOutput") ) { outValue = polarToOutput_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"interpolateToOutput") ) { outValue = interpolateToOutput_dyn(); return true; }
	}
	return false;
}

::hx::Val Point_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Point_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"__pool") ) { _hx___pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__limeVector2") ) { _hx___limeVector2=ioValue.Cast<  ::lime::math::Vector2 >(); return true; }
	}
	return false;
}

void Point_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Point_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Point_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(Point_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Point_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &Point_obj::_hx___pool,HX_("__pool",fc,e3,54,f9)},
	{::hx::fsObject /*  ::lime::math::Vector2 */ ,(void *) &Point_obj::_hx___limeVector2,HX_("__limeVector2",5a,88,77,8e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Point_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("add",21,f2,49,00),
	HX_("addToOutput",1d,ee,1b,65),
	HX_("clone",5d,13,63,48),
	HX_("copyFrom",bf,0b,61,c8),
	HX_("equals",3f,ee,f2,bf),
	HX_("normalize",8d,37,a1,ab),
	HX_("offset",93,97,3f,60),
	HX_("setTo",bd,91,2f,7a),
	HX_("subtract",14,75,11,f8),
	HX_("subtractToOutput",10,1c,5c,ce),
	HX_("toString",ac,d0,6e,38),
	HX_("__toLimeVector2",9f,7e,1d,cf),
	HX_("get_length",af,04,8f,8f),
	::String(null()) };

static void Point_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Point_obj::_hx___pool,"__pool");
	HX_MARK_MEMBER_NAME(Point_obj::_hx___limeVector2,"__limeVector2");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Point_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Point_obj::_hx___pool,"__pool");
	HX_VISIT_MEMBER_NAME(Point_obj::_hx___limeVector2,"__limeVector2");
};

#endif

::hx::Class Point_obj::__mClass;

static ::String Point_obj_sStaticFields[] = {
	HX_("__pool",fc,e3,54,f9),
	HX_("__limeVector2",5a,88,77,8e),
	HX_("distance",35,93,f9,6b),
	HX_("interpolate",c1,d4,32,1f),
	HX_("interpolateToOutput",bd,70,98,a1),
	HX_("polar",be,ef,91,c6),
	HX_("polarToOutput",ba,50,36,3d),
	::String(null())
};

void Point_obj::__register()
{
	Point_obj _hx_dummy;
	Point_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.geom.Point",1c,dd,d4,e0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Point_obj::__GetStatic;
	__mClass->mSetStaticField = &Point_obj::__SetStatic;
	__mClass->mMarkFunc = Point_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Point_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Point_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Point_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Point_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Point_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Point_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Point_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::openfl::geom::Point _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_40_boot)
HXDLIN(  40)			return  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::openfl::geom::Point p){
            			HX_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_40_boot)
HXDLIN(  40)			p->setTo(( (Float)(0) ),( (Float)(0) ));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_35745b0e94bdaa0e_40_boot)
HXDLIN(  40)		_hx___pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
}

} // end namespace openfl
} // end namespace geom
