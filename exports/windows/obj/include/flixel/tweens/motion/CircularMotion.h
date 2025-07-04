// Generated by Haxe 4.3.7
#ifndef INCLUDED_flixel_tweens_motion_CircularMotion
#define INCLUDED_flixel_tweens_motion_CircularMotion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_tweens_motion_Motion
#include <flixel/tweens/motion/Motion.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,tweens,FlxTweenManager)
HX_DECLARE_CLASS3(flixel,tweens,motion,CircularMotion)
HX_DECLARE_CLASS3(flixel,tweens,motion,Motion)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace tweens{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES CircularMotion_obj : public  ::flixel::tweens::motion::Motion_obj
{
	public:
		typedef  ::flixel::tweens::motion::Motion_obj super;
		typedef CircularMotion_obj OBJ_;
		CircularMotion_obj();

	public:
		enum { _hx_ClassId = 0x197095b3 };

		void __construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tweens.motion.CircularMotion")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.tweens.motion.CircularMotion"); }
		static ::hx::ObjectPtr< CircularMotion_obj > __new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		static ::hx::ObjectPtr< CircularMotion_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CircularMotion_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CircularMotion",15,c6,11,bd); }

		Float angle;
		Float _centerX;
		Float _centerY;
		Float _radius;
		Float _angleStart;
		Float _angleFinish;
		 ::flixel::tweens::motion::CircularMotion setMotion(Float CenterX,Float CenterY,Float Radius,Float Angle,bool Clockwise,Float DurationOrSpeed,::hx::Null< bool >  UseDuration);
		::Dynamic setMotion_dyn();

		void update(Float elapsed);

		Float get_circumference();
		::Dynamic get_circumference_dyn();

};

} // end namespace flixel
} // end namespace tweens
} // end namespace motion

#endif /* INCLUDED_flixel_tweens_motion_CircularMotion */ 
