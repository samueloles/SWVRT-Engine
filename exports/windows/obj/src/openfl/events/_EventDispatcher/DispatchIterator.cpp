// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events__EventDispatcher_DispatchIterator
#include <openfl/events/_EventDispatcher/DispatchIterator.h>
#endif
#ifndef INCLUDED_openfl_events__EventDispatcher_Listener
#include <openfl/events/_EventDispatcher/Listener.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eed9e911a94343be_542_new,"openfl.events._EventDispatcher.DispatchIterator","new",0x76c2678f,"openfl.events._EventDispatcher.DispatchIterator.new","openfl/events/EventDispatcher.hx",542,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_eed9e911a94343be_549_copy,"openfl.events._EventDispatcher.DispatchIterator","copy",0x6c1a6da6,"openfl.events._EventDispatcher.DispatchIterator.copy","openfl/events/EventDispatcher.hx",549,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_eed9e911a94343be_558_hasNext,"openfl.events._EventDispatcher.DispatchIterator","hasNext",0xef22001c,"openfl.events._EventDispatcher.DispatchIterator.hasNext","openfl/events/EventDispatcher.hx",558,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_eed9e911a94343be_563_next,"openfl.events._EventDispatcher.DispatchIterator","next",0x735836e4,"openfl.events._EventDispatcher.DispatchIterator.next","openfl/events/EventDispatcher.hx",563,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_eed9e911a94343be_568_remove,"openfl.events._EventDispatcher.DispatchIterator","remove",0xb5236c75,"openfl.events._EventDispatcher.DispatchIterator.remove","openfl/events/EventDispatcher.hx",568,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_eed9e911a94343be_592_reset,"openfl.events._EventDispatcher.DispatchIterator","reset",0xc76e4abe,"openfl.events._EventDispatcher.DispatchIterator.reset","openfl/events/EventDispatcher.hx",592,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_eed9e911a94343be_601_start,"openfl.events._EventDispatcher.DispatchIterator","start",0x64b17551,"openfl.events._EventDispatcher.DispatchIterator.start","openfl/events/EventDispatcher.hx",601,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_eed9e911a94343be_606_stop,"openfl.events._EventDispatcher.DispatchIterator","stop",0x76b1a1f3,"openfl.events._EventDispatcher.DispatchIterator.stop","openfl/events/EventDispatcher.hx",606,0xe2270714)
HX_LOCAL_STACK_FRAME(_hx_pos_eed9e911a94343be_533_boot,"openfl.events._EventDispatcher.DispatchIterator","boot",0x6b713623,"openfl.events._EventDispatcher.DispatchIterator.boot","openfl/events/EventDispatcher.hx",533,0xe2270714)
namespace openfl{
namespace events{
namespace _EventDispatcher{

void DispatchIterator_obj::__construct(::Array< ::Dynamic> list){
            	HX_STACKFRAME(&_hx_pos_eed9e911a94343be_542_new)
HXLINE( 543)		this->active = false;
HXLINE( 544)		this->reset(list);
            	}

Dynamic DispatchIterator_obj::__CreateEmpty() { return new DispatchIterator_obj; }

void *DispatchIterator_obj::_hx_vtable = 0;

Dynamic DispatchIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DispatchIterator_obj > _hx_result = new DispatchIterator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DispatchIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x35df4253;
}

void DispatchIterator_obj::copy(){
            	HX_STACKFRAME(&_hx_pos_eed9e911a94343be_549_copy)
HXDLIN( 549)		if (!(this->isCopy)) {
HXLINE( 551)			this->list = this->list->copy();
HXLINE( 552)			this->isCopy = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DispatchIterator_obj,copy,(void))

bool DispatchIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_eed9e911a94343be_558_hasNext)
HXDLIN( 558)		return (this->index < this->list->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DispatchIterator_obj,hasNext,return )

 ::openfl::events::_EventDispatcher::Listener DispatchIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_eed9e911a94343be_563_next)
HXDLIN( 563)		return this->list->__get(this->index++).StaticCast<  ::openfl::events::_EventDispatcher::Listener >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(DispatchIterator_obj,next,return )

void DispatchIterator_obj::remove( ::openfl::events::_EventDispatcher::Listener listener,int listIndex){
            	HX_STACKFRAME(&_hx_pos_eed9e911a94343be_568_remove)
HXDLIN( 568)		if (this->active) {
HXLINE( 570)			if (!(this->isCopy)) {
HXLINE( 572)				if ((listIndex < this->index)) {
HXLINE( 574)					this->index--;
            				}
            			}
            			else {
HXLINE( 579)				int _g = this->index;
HXDLIN( 579)				int _g1 = this->list->length;
HXDLIN( 579)				while((_g < _g1)){
HXLINE( 579)					_g = (_g + 1);
HXDLIN( 579)					int i = (_g - 1);
HXLINE( 581)					if (::hx::IsInstanceEq( this->list->__get(i).StaticCast<  ::openfl::events::_EventDispatcher::Listener >(),listener )) {
HXLINE( 583)						this->list->removeRange(i,1);
HXLINE( 584)						goto _hx_goto_4;
            					}
            				}
            				_hx_goto_4:;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(DispatchIterator_obj,remove,(void))

void DispatchIterator_obj::reset(::Array< ::Dynamic> list){
            	HX_STACKFRAME(&_hx_pos_eed9e911a94343be_592_reset)
HXLINE( 593)		this->list = list;
HXLINE( 595)		this->isCopy = false;
HXLINE( 596)		this->index = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DispatchIterator_obj,reset,(void))

void DispatchIterator_obj::start(){
            	HX_STACKFRAME(&_hx_pos_eed9e911a94343be_601_start)
HXDLIN( 601)		this->active = true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DispatchIterator_obj,start,(void))

void DispatchIterator_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_eed9e911a94343be_606_stop)
HXDLIN( 606)		this->active = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DispatchIterator_obj,stop,(void))


::hx::ObjectPtr< DispatchIterator_obj > DispatchIterator_obj::__new(::Array< ::Dynamic> list) {
	::hx::ObjectPtr< DispatchIterator_obj > __this = new DispatchIterator_obj();
	__this->__construct(list);
	return __this;
}

::hx::ObjectPtr< DispatchIterator_obj > DispatchIterator_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> list) {
	DispatchIterator_obj *__this = (DispatchIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DispatchIterator_obj), true, "openfl.events._EventDispatcher.DispatchIterator"));
	*(void **)__this = DispatchIterator_obj::_hx_vtable;
	__this->__construct(list);
	return __this;
}

DispatchIterator_obj::DispatchIterator_obj()
{
}

void DispatchIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DispatchIterator);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(isCopy,"isCopy");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_END_CLASS();
}

void DispatchIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(isCopy,"isCopy");
	HX_VISIT_MEMBER_NAME(list,"list");
}

::hx::Val DispatchIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list ); }
		if (HX_FIELD_EQ(inName,"copy") ) { return ::hx::Val( copy_dyn() ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"isCopy") ) { return ::hx::Val( isCopy ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DispatchIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isCopy") ) { isCopy=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DispatchIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("isCopy",bf,80,2b,5f));
	outFields->push(HX_("list",5e,1c,b3,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DispatchIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(DispatchIterator_obj,active),HX_("active",c6,41,46,16)},
	{::hx::fsInt,(int)offsetof(DispatchIterator_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsBool,(int)offsetof(DispatchIterator_obj,isCopy),HX_("isCopy",bf,80,2b,5f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DispatchIterator_obj,list),HX_("list",5e,1c,b3,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DispatchIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String DispatchIterator_obj_sMemberFields[] = {
	HX_("active",c6,41,46,16),
	HX_("index",12,9b,14,be),
	HX_("isCopy",bf,80,2b,5f),
	HX_("list",5e,1c,b3,47),
	HX_("copy",b5,bb,c4,41),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	HX_("remove",44,9c,88,04),
	HX_("reset",cf,49,c8,e6),
	HX_("start",62,74,0b,84),
	HX_("stop",02,f0,5b,4c),
	::String(null()) };

::hx::Class DispatchIterator_obj::__mClass;

void DispatchIterator_obj::__register()
{
	DispatchIterator_obj _hx_dummy;
	DispatchIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events._EventDispatcher.DispatchIterator",1d,f4,5d,6d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DispatchIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DispatchIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DispatchIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DispatchIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DispatchIterator_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_eed9e911a94343be_533_boot)
HXDLIN( 533)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace events
} // end namespace _EventDispatcher
