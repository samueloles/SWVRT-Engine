// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_stats_StatsGraph
#include <flixel/system/debug/stats/StatsGraph.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Shape
#include <openfl/display/Shape.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_33514f197bd465e7_16_new,"flixel.system.debug.stats.StatsGraph","new",0x328f8738,"flixel.system.debug.stats.StatsGraph.new","flixel/system/debug/stats/StatsGraph.hx",16,0xbadd4916)
HX_LOCAL_STACK_FRAME(_hx_pos_33514f197bd465e7_78_drawAxes,"flixel.system.debug.stats.StatsGraph","drawAxes",0x7d893d71,"flixel.system.debug.stats.StatsGraph.drawAxes","flixel/system/debug/stats/StatsGraph.hx",78,0xbadd4916)
HX_LOCAL_STACK_FRAME(_hx_pos_33514f197bd465e7_96_drawGraph,"flixel.system.debug.stats.StatsGraph","drawGraph",0xcaf9ad82,"flixel.system.debug.stats.StatsGraph.drawGraph","flixel/system/debug/stats/StatsGraph.hx",96,0xbadd4916)
HX_LOCAL_STACK_FRAME(_hx_pos_33514f197bd465e7_117_update,"flixel.system.debug.stats.StatsGraph","update",0x0745a631,"flixel.system.debug.stats.StatsGraph.update","flixel/system/debug/stats/StatsGraph.hx",117,0xbadd4916)
HX_LOCAL_STACK_FRAME(_hx_pos_33514f197bd465e7_137_formatValue,"flixel.system.debug.stats.StatsGraph","formatValue",0xec642792,"flixel.system.debug.stats.StatsGraph.formatValue","flixel/system/debug/stats/StatsGraph.hx",137,0xbadd4916)
HX_LOCAL_STACK_FRAME(_hx_pos_33514f197bd465e7_141_average,"flixel.system.debug.stats.StatsGraph","average",0x1ab77435,"flixel.system.debug.stats.StatsGraph.average","flixel/system/debug/stats/StatsGraph.hx",141,0xbadd4916)
HX_LOCAL_STACK_FRAME(_hx_pos_33514f197bd465e7_149_destroy,"flixel.system.debug.stats.StatsGraph","destroy",0xdc622fd2,"flixel.system.debug.stats.StatsGraph.destroy","flixel/system/debug/stats/StatsGraph.hx",149,0xbadd4916)
HX_LOCAL_STACK_FRAME(_hx_pos_33514f197bd465e7_18_boot,"flixel.system.debug.stats.StatsGraph","boot",0x031fca5a,"flixel.system.debug.stats.StatsGraph.boot","flixel/system/debug/stats/StatsGraph.hx",18,0xbadd4916)
HX_LOCAL_STACK_FRAME(_hx_pos_33514f197bd465e7_19_boot,"flixel.system.debug.stats.StatsGraph","boot",0x031fca5a,"flixel.system.debug.stats.StatsGraph.boot","flixel/system/debug/stats/StatsGraph.hx",19,0xbadd4916)
HX_LOCAL_STACK_FRAME(_hx_pos_33514f197bd465e7_20_boot,"flixel.system.debug.stats.StatsGraph","boot",0x031fca5a,"flixel.system.debug.stats.StatsGraph.boot","flixel/system/debug/stats/StatsGraph.hx",20,0xbadd4916)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace stats{

void StatsGraph_obj::__construct(int X,int Y,int Width,int Height,int GraphColor,::String Unit,::hx::Null< int >  __o_LabelWidth,::String Label){
            		int LabelWidth = __o_LabelWidth.Default(45);
            	HX_GC_STACKFRAME(&_hx_pos_33514f197bd465e7_16_new)
HXLINE(  32)		this->history = ::Array_obj< Float >::__new(0);
HXLINE(  28)		this->maxValue = ((Float)5e-324);
HXLINE(  27)		this->minValue = ((Float)1.79e+308);
HXLINE(  43)		super::__construct();
HXLINE(  44)		this->set_x(( (Float)(X) ));
HXLINE(  45)		this->set_y(( (Float)(Y) ));
HXLINE(  46)		this->_width = (Width - LabelWidth);
HXLINE(  47)		this->_height = Height;
HXLINE(  48)		this->graphColor = GraphColor;
HXLINE(  49)		this->_unit = Unit;
HXLINE(  50)		this->_labelWidth = LabelWidth;
HXLINE(  51)		::String _hx_tmp;
HXDLIN(  51)		if (::hx::IsNull( Label )) {
HXLINE(  51)			_hx_tmp = HX_("",00,00,00,00);
            		}
            		else {
HXLINE(  51)			_hx_tmp = Label;
            		}
HXDLIN(  51)		this->_label = _hx_tmp;
HXLINE(  53)		this->_axis =  ::openfl::display::Shape_obj::__alloc( HX_CTX );
HXLINE(  54)		this->_axis->set_x(( (Float)((this->_labelWidth + 10)) ));
HXLINE(  56)		this->maxLabel = ::flixel::_hx_system::debug::DebuggerUtil_obj::createTextField(0,0,(int)-1426063361,11);
HXLINE(  57)		this->curLabel = ::flixel::_hx_system::debug::DebuggerUtil_obj::createTextField(0,((( (Float)(this->_height) ) / ( (Float)(2) )) - ((Float)5.5)),this->graphColor,11);
HXLINE(  58)		this->minLabel = ::flixel::_hx_system::debug::DebuggerUtil_obj::createTextField(0,(this->_height - 11),(int)-1426063361,11);
HXLINE(  60)		this->avgLabel = ::flixel::_hx_system::debug::DebuggerUtil_obj::createTextField((this->_labelWidth + 20),(((( (Float)(this->_height) ) / ( (Float)(2) )) - ((Float)5.5)) - ( (Float)(10) )),(int)-1426063361,11);
HXLINE(  61)		this->avgLabel->set_width(( (Float)(this->_width) ));
HXLINE(  62)		this->avgLabel->get_defaultTextFormat()->align = 0;
HXLINE(  63)		this->avgLabel->set_alpha(((Float)0.5));
HXLINE(  65)		this->addChild(this->_axis);
HXLINE(  66)		this->addChild(this->maxLabel);
HXLINE(  67)		this->addChild(this->curLabel);
HXLINE(  68)		this->addChild(this->minLabel);
HXLINE(  69)		this->addChild(this->avgLabel);
HXLINE(  71)		this->drawAxes();
            	}

Dynamic StatsGraph_obj::__CreateEmpty() { return new StatsGraph_obj; }

void *StatsGraph_obj::_hx_vtable = 0;

Dynamic StatsGraph_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StatsGraph_obj > _hx_result = new StatsGraph_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool StatsGraph_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x2be41faa || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void StatsGraph_obj::drawAxes(){
            	HX_STACKFRAME(&_hx_pos_33514f197bd465e7_78_drawAxes)
HXLINE(  79)		 ::openfl::display::Graphics gfx = this->_axis->get_graphics();
HXLINE(  80)		gfx->clear();
HXLINE(  81)		gfx->lineStyle(1,16777215,((Float)0.5),null(),null(),null(),null(),null());
HXLINE(  84)		gfx->moveTo(( (Float)(0) ),( (Float)(0) ));
HXLINE(  85)		gfx->lineTo(( (Float)(0) ),( (Float)(this->_height) ));
HXLINE(  88)		gfx->moveTo(( (Float)(0) ),( (Float)(this->_height) ));
HXLINE(  89)		gfx->lineTo(( (Float)(this->_width) ),( (Float)(this->_height) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StatsGraph_obj,drawAxes,(void))

void StatsGraph_obj::drawGraph(){
            	HX_STACKFRAME(&_hx_pos_33514f197bd465e7_96_drawGraph)
HXLINE(  97)		 ::openfl::display::Graphics gfx = this->get_graphics();
HXLINE(  98)		gfx->clear();
HXLINE(  99)		gfx->lineStyle(1,this->graphColor,1,null(),null(),null(),null(),null());
HXLINE( 101)		Float inc = (( (Float)(this->_width) ) / ( (Float)(29) ));
HXLINE( 102)		Float range = ::Math_obj::max((this->maxValue - this->minValue),(this->maxValue * ((Float)0.1)));
HXLINE( 103)		Float graphX = (this->_axis->get_x() + 1);
HXLINE( 105)		{
HXLINE( 105)			int _g = 0;
HXDLIN( 105)			int _g1 = this->history->length;
HXDLIN( 105)			while((_g < _g1)){
HXLINE( 105)				_g = (_g + 1);
HXDLIN( 105)				int i = (_g - 1);
HXLINE( 107)				Float value = ((this->history->__get(i) - this->minValue) / range);
HXLINE( 109)				Float pointY = (((-(value) * ( (Float)(this->_height) )) - ( (Float)(1) )) + this->_height);
HXLINE( 110)				if ((i == 0)) {
HXLINE( 111)					gfx->moveTo(graphX,(this->_axis->get_y() + pointY));
            				}
HXLINE( 112)				gfx->lineTo((graphX + (( (Float)(i) ) * inc)),pointY);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(StatsGraph_obj,drawGraph,(void))

void StatsGraph_obj::update(Float Value){
            	HX_STACKFRAME(&_hx_pos_33514f197bd465e7_117_update)
HXLINE( 118)		this->history->unshift(Value);
HXLINE( 119)		if ((this->history->length > 30)) {
HXLINE( 120)			this->history->pop();
            		}
HXLINE( 123)		this->maxValue = ::Math_obj::max(this->maxValue,Value);
HXLINE( 124)		this->minValue = ::Math_obj::min(this->minValue,Value);
HXLINE( 126)		 ::openfl::text::TextField _hx_tmp = this->minLabel;
HXDLIN( 126)		_hx_tmp->set_text(this->formatValue(this->minValue));
HXLINE( 127)		 ::openfl::text::TextField _hx_tmp1 = this->curLabel;
HXDLIN( 127)		_hx_tmp1->set_text(this->formatValue(Value));
HXLINE( 128)		 ::openfl::text::TextField _hx_tmp2 = this->maxLabel;
HXDLIN( 128)		_hx_tmp2->set_text(this->formatValue(this->maxValue));
HXLINE( 130)		 ::openfl::text::TextField _hx_tmp3 = this->avgLabel;
HXDLIN( 130)		::String _hx_tmp4 = (this->_label + HX_("\nAvg: ",8e,d8,ea,ba));
HXDLIN( 130)		_hx_tmp3->set_text((_hx_tmp4 + this->formatValue(this->average())));
HXLINE( 132)		this->drawGraph();
            	}


HX_DEFINE_DYNAMIC_FUNC1(StatsGraph_obj,update,(void))

::String StatsGraph_obj::formatValue(Float value){
            	HX_STACKFRAME(&_hx_pos_33514f197bd465e7_137_formatValue)
HXDLIN( 137)		::String _hx_tmp = (::flixel::math::FlxMath_obj::roundDecimal(value,1) + HX_(" ",20,00,00,00));
HXDLIN( 137)		return (_hx_tmp + this->_unit);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StatsGraph_obj,formatValue,return )

Float StatsGraph_obj::average(){
            	HX_STACKFRAME(&_hx_pos_33514f197bd465e7_141_average)
HXLINE( 142)		Float sum = ( (Float)(0) );
HXLINE( 143)		{
HXLINE( 143)			int _g = 0;
HXDLIN( 143)			::Array< Float > _g1 = this->history;
HXDLIN( 143)			while((_g < _g1->length)){
HXLINE( 143)				Float value = _g1->__get(_g);
HXDLIN( 143)				_g = (_g + 1);
HXLINE( 144)				sum = (sum + value);
            			}
            		}
HXLINE( 145)		return (sum / ( (Float)(this->history->length) ));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StatsGraph_obj,average,return )

void StatsGraph_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_33514f197bd465e7_149_destroy)
HXLINE( 150)		this->_axis = ( ( ::openfl::display::Shape)(::flixel::util::FlxDestroyUtil_obj::removeChild(::hx::ObjectPtr<OBJ_>(this),this->_axis)) );
HXLINE( 151)		this->minLabel = ( ( ::openfl::text::TextField)(::flixel::util::FlxDestroyUtil_obj::removeChild(::hx::ObjectPtr<OBJ_>(this),this->minLabel)) );
HXLINE( 152)		this->curLabel = ( ( ::openfl::text::TextField)(::flixel::util::FlxDestroyUtil_obj::removeChild(::hx::ObjectPtr<OBJ_>(this),this->curLabel)) );
HXLINE( 153)		this->maxLabel = ( ( ::openfl::text::TextField)(::flixel::util::FlxDestroyUtil_obj::removeChild(::hx::ObjectPtr<OBJ_>(this),this->maxLabel)) );
HXLINE( 154)		this->avgLabel = ( ( ::openfl::text::TextField)(::flixel::util::FlxDestroyUtil_obj::removeChild(::hx::ObjectPtr<OBJ_>(this),this->avgLabel)) );
HXLINE( 155)		this->history = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(StatsGraph_obj,destroy,(void))

int StatsGraph_obj::AXIS_COLOR;

Float StatsGraph_obj::AXIS_ALPHA;

int StatsGraph_obj::HISTORY_MAX;


::hx::ObjectPtr< StatsGraph_obj > StatsGraph_obj::__new(int X,int Y,int Width,int Height,int GraphColor,::String Unit,::hx::Null< int >  __o_LabelWidth,::String Label) {
	::hx::ObjectPtr< StatsGraph_obj > __this = new StatsGraph_obj();
	__this->__construct(X,Y,Width,Height,GraphColor,Unit,__o_LabelWidth,Label);
	return __this;
}

::hx::ObjectPtr< StatsGraph_obj > StatsGraph_obj::__alloc(::hx::Ctx *_hx_ctx,int X,int Y,int Width,int Height,int GraphColor,::String Unit,::hx::Null< int >  __o_LabelWidth,::String Label) {
	StatsGraph_obj *__this = (StatsGraph_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StatsGraph_obj), true, "flixel.system.debug.stats.StatsGraph"));
	*(void **)__this = StatsGraph_obj::_hx_vtable;
	__this->__construct(X,Y,Width,Height,GraphColor,Unit,__o_LabelWidth,Label);
	return __this;
}

StatsGraph_obj::StatsGraph_obj()
{
}

void StatsGraph_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StatsGraph);
	HX_MARK_MEMBER_NAME(minLabel,"minLabel");
	HX_MARK_MEMBER_NAME(curLabel,"curLabel");
	HX_MARK_MEMBER_NAME(maxLabel,"maxLabel");
	HX_MARK_MEMBER_NAME(avgLabel,"avgLabel");
	HX_MARK_MEMBER_NAME(minValue,"minValue");
	HX_MARK_MEMBER_NAME(maxValue,"maxValue");
	HX_MARK_MEMBER_NAME(graphColor,"graphColor");
	HX_MARK_MEMBER_NAME(history,"history");
	HX_MARK_MEMBER_NAME(_axis,"_axis");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_unit,"_unit");
	HX_MARK_MEMBER_NAME(_labelWidth,"_labelWidth");
	HX_MARK_MEMBER_NAME(_label,"_label");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StatsGraph_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(minLabel,"minLabel");
	HX_VISIT_MEMBER_NAME(curLabel,"curLabel");
	HX_VISIT_MEMBER_NAME(maxLabel,"maxLabel");
	HX_VISIT_MEMBER_NAME(avgLabel,"avgLabel");
	HX_VISIT_MEMBER_NAME(minValue,"minValue");
	HX_VISIT_MEMBER_NAME(maxValue,"maxValue");
	HX_VISIT_MEMBER_NAME(graphColor,"graphColor");
	HX_VISIT_MEMBER_NAME(history,"history");
	HX_VISIT_MEMBER_NAME(_axis,"_axis");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_unit,"_unit");
	HX_VISIT_MEMBER_NAME(_labelWidth,"_labelWidth");
	HX_VISIT_MEMBER_NAME(_label,"_label");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StatsGraph_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_axis") ) { return ::hx::Val( _axis ); }
		if (HX_FIELD_EQ(inName,"_unit") ) { return ::hx::Val( _unit ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		if (HX_FIELD_EQ(inName,"_label") ) { return ::hx::Val( _label ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"history") ) { return ::hx::Val( history ); }
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		if (HX_FIELD_EQ(inName,"average") ) { return ::hx::Val( average_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minLabel") ) { return ::hx::Val( minLabel ); }
		if (HX_FIELD_EQ(inName,"curLabel") ) { return ::hx::Val( curLabel ); }
		if (HX_FIELD_EQ(inName,"maxLabel") ) { return ::hx::Val( maxLabel ); }
		if (HX_FIELD_EQ(inName,"avgLabel") ) { return ::hx::Val( avgLabel ); }
		if (HX_FIELD_EQ(inName,"minValue") ) { return ::hx::Val( minValue ); }
		if (HX_FIELD_EQ(inName,"maxValue") ) { return ::hx::Val( maxValue ); }
		if (HX_FIELD_EQ(inName,"drawAxes") ) { return ::hx::Val( drawAxes_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"drawGraph") ) { return ::hx::Val( drawGraph_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"graphColor") ) { return ::hx::Val( graphColor ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_labelWidth") ) { return ::hx::Val( _labelWidth ); }
		if (HX_FIELD_EQ(inName,"formatValue") ) { return ::hx::Val( formatValue_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StatsGraph_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_axis") ) { _axis=inValue.Cast<  ::openfl::display::Shape >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_unit") ) { _unit=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"history") ) { history=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minLabel") ) { minLabel=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curLabel") ) { curLabel=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxLabel") ) { maxLabel=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"avgLabel") ) { avgLabel=inValue.Cast<  ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minValue") ) { minValue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxValue") ) { maxValue=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"graphColor") ) { graphColor=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_labelWidth") ) { _labelWidth=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StatsGraph_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("minLabel",02,7b,e6,66));
	outFields->push(HX_("curLabel",54,08,5d,b7));
	outFields->push(HX_("maxLabel",b0,60,cc,19));
	outFields->push(HX_("avgLabel",c2,a2,a0,08));
	outFields->push(HX_("minValue",7f,ec,ef,28));
	outFields->push(HX_("maxValue",2d,d2,d5,db));
	outFields->push(HX_("graphColor",35,97,9f,9d));
	outFields->push(HX_("history",54,35,47,64));
	outFields->push(HX_("_axis",80,38,8a,f3));
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_height",86,19,c3,70));
	outFields->push(HX_("_unit",63,e6,ba,00));
	outFields->push(HX_("_labelWidth",91,d0,cf,b8));
	outFields->push(HX_("_label",35,55,96,6b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StatsGraph_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(StatsGraph_obj,minLabel),HX_("minLabel",02,7b,e6,66)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(StatsGraph_obj,curLabel),HX_("curLabel",54,08,5d,b7)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(StatsGraph_obj,maxLabel),HX_("maxLabel",b0,60,cc,19)},
	{::hx::fsObject /*  ::openfl::text::TextField */ ,(int)offsetof(StatsGraph_obj,avgLabel),HX_("avgLabel",c2,a2,a0,08)},
	{::hx::fsFloat,(int)offsetof(StatsGraph_obj,minValue),HX_("minValue",7f,ec,ef,28)},
	{::hx::fsFloat,(int)offsetof(StatsGraph_obj,maxValue),HX_("maxValue",2d,d2,d5,db)},
	{::hx::fsInt,(int)offsetof(StatsGraph_obj,graphColor),HX_("graphColor",35,97,9f,9d)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(StatsGraph_obj,history),HX_("history",54,35,47,64)},
	{::hx::fsObject /*  ::openfl::display::Shape */ ,(int)offsetof(StatsGraph_obj,_axis),HX_("_axis",80,38,8a,f3)},
	{::hx::fsInt,(int)offsetof(StatsGraph_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsInt,(int)offsetof(StatsGraph_obj,_height),HX_("_height",86,19,c3,70)},
	{::hx::fsString,(int)offsetof(StatsGraph_obj,_unit),HX_("_unit",63,e6,ba,00)},
	{::hx::fsInt,(int)offsetof(StatsGraph_obj,_labelWidth),HX_("_labelWidth",91,d0,cf,b8)},
	{::hx::fsString,(int)offsetof(StatsGraph_obj,_label),HX_("_label",35,55,96,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo StatsGraph_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &StatsGraph_obj::AXIS_COLOR,HX_("AXIS_COLOR",e5,83,ee,e4)},
	{::hx::fsFloat,(void *) &StatsGraph_obj::AXIS_ALPHA,HX_("AXIS_ALPHA",e0,b9,28,bc)},
	{::hx::fsInt,(void *) &StatsGraph_obj::HISTORY_MAX,HX_("HISTORY_MAX",b9,9e,af,58)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String StatsGraph_obj_sMemberFields[] = {
	HX_("minLabel",02,7b,e6,66),
	HX_("curLabel",54,08,5d,b7),
	HX_("maxLabel",b0,60,cc,19),
	HX_("avgLabel",c2,a2,a0,08),
	HX_("minValue",7f,ec,ef,28),
	HX_("maxValue",2d,d2,d5,db),
	HX_("graphColor",35,97,9f,9d),
	HX_("history",54,35,47,64),
	HX_("_axis",80,38,8a,f3),
	HX_("_width",47,fd,49,c6),
	HX_("_height",86,19,c3,70),
	HX_("_unit",63,e6,ba,00),
	HX_("_labelWidth",91,d0,cf,b8),
	HX_("_label",35,55,96,6b),
	HX_("drawAxes",49,c3,e2,54),
	HX_("drawGraph",aa,44,f5,61),
	HX_("update",09,86,05,87),
	HX_("formatValue",ba,d8,d1,ea),
	HX_("average",5d,71,db,62),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void StatsGraph_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StatsGraph_obj::AXIS_COLOR,"AXIS_COLOR");
	HX_MARK_MEMBER_NAME(StatsGraph_obj::AXIS_ALPHA,"AXIS_ALPHA");
	HX_MARK_MEMBER_NAME(StatsGraph_obj::HISTORY_MAX,"HISTORY_MAX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void StatsGraph_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StatsGraph_obj::AXIS_COLOR,"AXIS_COLOR");
	HX_VISIT_MEMBER_NAME(StatsGraph_obj::AXIS_ALPHA,"AXIS_ALPHA");
	HX_VISIT_MEMBER_NAME(StatsGraph_obj::HISTORY_MAX,"HISTORY_MAX");
};

#endif

::hx::Class StatsGraph_obj::__mClass;

static ::String StatsGraph_obj_sStaticFields[] = {
	HX_("AXIS_COLOR",e5,83,ee,e4),
	HX_("AXIS_ALPHA",e0,b9,28,bc),
	HX_("HISTORY_MAX",b9,9e,af,58),
	::String(null())
};

void StatsGraph_obj::__register()
{
	StatsGraph_obj _hx_dummy;
	StatsGraph_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.stats.StatsGraph",46,cb,85,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = StatsGraph_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(StatsGraph_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StatsGraph_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StatsGraph_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = StatsGraph_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StatsGraph_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StatsGraph_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void StatsGraph_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_33514f197bd465e7_18_boot)
HXDLIN(  18)		AXIS_COLOR = 16777215;
            	}
{
            	HX_STACKFRAME(&_hx_pos_33514f197bd465e7_19_boot)
HXDLIN(  19)		AXIS_ALPHA = ((Float)0.5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_33514f197bd465e7_20_boot)
HXDLIN(  20)		HISTORY_MAX = 30;
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace stats
