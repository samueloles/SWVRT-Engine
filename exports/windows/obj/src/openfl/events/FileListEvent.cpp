// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FileListEvent
#include <openfl/events/FileListEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filesystem_File
#include <openfl/filesystem/File.h>
#endif
#ifndef INCLUDED_openfl_net_FileReference
#include <openfl/net/FileReference.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c1adc8cb0b85740e_49_new,"openfl.events.FileListEvent","new",0xf906c39b,"openfl.events.FileListEvent.new","openfl/events/FileListEvent.hx",49,0x25f99a55)
HX_LOCAL_STACK_FRAME(_hx_pos_c1adc8cb0b85740e_56_clone,"openfl.events.FileListEvent","clone",0x0a258b58,"openfl.events.FileListEvent.clone","openfl/events/FileListEvent.hx",56,0x25f99a55)
HX_LOCAL_STACK_FRAME(_hx_pos_c1adc8cb0b85740e_22_boot,"openfl.events.FileListEvent","boot",0xe4fd6497,"openfl.events.FileListEvent.boot","openfl/events/FileListEvent.hx",22,0x25f99a55)
HX_LOCAL_STACK_FRAME(_hx_pos_c1adc8cb0b85740e_28_boot,"openfl.events.FileListEvent","boot",0xe4fd6497,"openfl.events.FileListEvent.boot","openfl/events/FileListEvent.hx",28,0x25f99a55)
namespace openfl{
namespace events{

void FileListEvent_obj::__construct(::String type,::Array< ::Dynamic> files,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_c1adc8cb0b85740e_49_new)
HXLINE(  50)		super::__construct(type,bubbles,cancelable);
HXLINE(  51)		this->files = files;
            	}

Dynamic FileListEvent_obj::__CreateEmpty() { return new FileListEvent_obj; }

void *FileListEvent_obj::_hx_vtable = 0;

Dynamic FileListEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FileListEvent_obj > _hx_result = new FileListEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FileListEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x2b40dbd7;
	}
}

 ::openfl::events::Event FileListEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_c1adc8cb0b85740e_56_clone)
HXDLIN(  56)		return  ::openfl::events::FileListEvent_obj::__alloc( HX_CTX ,this->type,this->files,this->bubbles,this->cancelable);
            	}


::String FileListEvent_obj::DIRECTORY_LISTING;

::String FileListEvent_obj::SELECT_MULTIPLE;


::hx::ObjectPtr< FileListEvent_obj > FileListEvent_obj::__new(::String type,::Array< ::Dynamic> files,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	::hx::ObjectPtr< FileListEvent_obj > __this = new FileListEvent_obj();
	__this->__construct(type,files,__o_bubbles,__o_cancelable);
	return __this;
}

::hx::ObjectPtr< FileListEvent_obj > FileListEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::Array< ::Dynamic> files,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	FileListEvent_obj *__this = (FileListEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FileListEvent_obj), true, "openfl.events.FileListEvent"));
	*(void **)__this = FileListEvent_obj::_hx_vtable;
	__this->__construct(type,files,__o_bubbles,__o_cancelable);
	return __this;
}

FileListEvent_obj::FileListEvent_obj()
{
}

void FileListEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FileListEvent);
	HX_MARK_MEMBER_NAME(files,"files");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FileListEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(files,"files");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FileListEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"files") ) { return ::hx::Val( files ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FileListEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"files") ) { files=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FileListEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("files",77,de,98,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FileListEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FileListEvent_obj,files),HX_("files",77,de,98,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FileListEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &FileListEvent_obj::DIRECTORY_LISTING,HX_("DIRECTORY_LISTING",f2,a3,90,11)},
	{::hx::fsString,(void *) &FileListEvent_obj::SELECT_MULTIPLE,HX_("SELECT_MULTIPLE",f3,e2,57,42)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FileListEvent_obj_sMemberFields[] = {
	HX_("files",77,de,98,00),
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void FileListEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FileListEvent_obj::DIRECTORY_LISTING,"DIRECTORY_LISTING");
	HX_MARK_MEMBER_NAME(FileListEvent_obj::SELECT_MULTIPLE,"SELECT_MULTIPLE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FileListEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FileListEvent_obj::DIRECTORY_LISTING,"DIRECTORY_LISTING");
	HX_VISIT_MEMBER_NAME(FileListEvent_obj::SELECT_MULTIPLE,"SELECT_MULTIPLE");
};

#endif

::hx::Class FileListEvent_obj::__mClass;

static ::String FileListEvent_obj_sStaticFields[] = {
	HX_("DIRECTORY_LISTING",f2,a3,90,11),
	HX_("SELECT_MULTIPLE",f3,e2,57,42),
	::String(null())
};

void FileListEvent_obj::__register()
{
	FileListEvent_obj _hx_dummy;
	FileListEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.FileListEvent",29,5a,a8,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FileListEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FileListEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FileListEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FileListEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FileListEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FileListEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FileListEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FileListEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c1adc8cb0b85740e_22_boot)
HXDLIN(  22)		DIRECTORY_LISTING = HX_("directoryListing",57,8c,81,22);
            	}
{
            	HX_STACKFRAME(&_hx_pos_c1adc8cb0b85740e_28_boot)
HXDLIN(  28)		SELECT_MULTIPLE = HX_("selectMultiple",2c,15,bf,f3);
            	}
}

} // end namespace openfl
} // end namespace events
