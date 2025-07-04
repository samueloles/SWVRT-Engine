// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxBaseTilemap
#include <flixel/tile/FlxBaseTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#include <flixel/tile/FlxTilemapBuffer.h>
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
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ea53adae7ad7e842_19_new,"flixel.tile.FlxTilemapBuffer","new",0x92818fbc,"flixel.tile.FlxTilemapBuffer.new","flixel/tile/FlxTilemapBuffer.hx",19,0x56d29ad4)
HX_LOCAL_STACK_FRAME(_hx_pos_ea53adae7ad7e842_116_resize,"flixel.tile.FlxTilemapBuffer","resize",0xccfe9c18,"flixel.tile.FlxTilemapBuffer.resize","flixel/tile/FlxTilemapBuffer.hx",116,0x56d29ad4)
HX_LOCAL_STACK_FRAME(_hx_pos_ea53adae7ad7e842_147_destroy,"flixel.tile.FlxTilemapBuffer","destroy",0x52dcca56,"flixel.tile.FlxTilemapBuffer.destroy","flixel/tile/FlxTilemapBuffer.hx",147,0x56d29ad4)
HX_LOCAL_STACK_FRAME(_hx_pos_ea53adae7ad7e842_164_fill,"flixel.tile.FlxTilemapBuffer","fill",0x99957fa7,"flixel.tile.FlxTilemapBuffer.fill","flixel/tile/FlxTilemapBuffer.hx",164,0x56d29ad4)
HX_LOCAL_STACK_FRAME(_hx_pos_ea53adae7ad7e842_177_draw,"flixel.tile.FlxTilemapBuffer","draw",0x9849dd28,"flixel.tile.FlxTilemapBuffer.draw","flixel/tile/FlxTilemapBuffer.hx",177,0x56d29ad4)
HX_LOCAL_STACK_FRAME(_hx_pos_ea53adae7ad7e842_199_colorTransform,"flixel.tile.FlxTilemapBuffer","colorTransform",0x13c7ddad,"flixel.tile.FlxTilemapBuffer.colorTransform","flixel/tile/FlxTilemapBuffer.hx",199,0x56d29ad4)
HX_LOCAL_STACK_FRAME(_hx_pos_ea53adae7ad7e842_204_updateColumns,"flixel.tile.FlxTilemapBuffer","updateColumns",0xed291c30,"flixel.tile.FlxTilemapBuffer.updateColumns","flixel/tile/FlxTilemapBuffer.hx",204,0x56d29ad4)
HX_LOCAL_STACK_FRAME(_hx_pos_ea53adae7ad7e842_223_updateRows,"flixel.tile.FlxTilemapBuffer","updateRows",0xf31d03e6,"flixel.tile.FlxTilemapBuffer.updateRows","flixel/tile/FlxTilemapBuffer.hx",223,0x56d29ad4)
HX_LOCAL_STACK_FRAME(_hx_pos_ea53adae7ad7e842_244_isPixelPerfectRender,"flixel.tile.FlxTilemapBuffer","isPixelPerfectRender",0x7d4e558b,"flixel.tile.FlxTilemapBuffer.isPixelPerfectRender","flixel/tile/FlxTilemapBuffer.hx",244,0x56d29ad4)
HX_LOCAL_STACK_FRAME(_hx_pos_ea53adae7ad7e842_259_isDirty,"flixel.tile.FlxTilemapBuffer","isDirty",0xa4ac9124,"flixel.tile.FlxTilemapBuffer.isDirty","flixel/tile/FlxTilemapBuffer.hx",259,0x56d29ad4)
namespace flixel{
namespace tile{

void FlxTilemapBuffer_obj::__construct(int tileWidth,int tileHeight,int widthInTiles,int heightInTiles, ::flixel::FlxCamera camera,::hx::Null< Float >  __o_scaleX,::hx::Null< Float >  __o_scaleY){
            		Float scaleX = __o_scaleX.Default(((Float)1.0));
            		Float scaleY = __o_scaleY.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_ea53adae7ad7e842_19_new)
HXLINE(  69)		this->antialiasing = false;
HXLINE(  54)		this->columns = 0;
HXLINE(  49)		this->rows = 0;
HXLINE(  44)		this->dirty = false;
HXLINE(  39)		this->height = ((Float)0);
HXLINE(  34)		this->width = ((Float)0);
HXLINE(  29)		this->y = ((Float)0);
HXLINE(  24)		this->x = ((Float)0);
HXLINE( 102)		this->resize(tileWidth,tileHeight,widthInTiles,heightInTiles,camera,scaleX,scaleY);
            	}

Dynamic FlxTilemapBuffer_obj::__CreateEmpty() { return new FlxTilemapBuffer_obj; }

void *FlxTilemapBuffer_obj::_hx_vtable = 0;

Dynamic FlxTilemapBuffer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTilemapBuffer_obj > _hx_result = new FlxTilemapBuffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _hx_result;
}

bool FlxTilemapBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x68352dca;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_tile_FlxTilemapBuffer__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::tile::FlxTilemapBuffer_obj::destroy,
};

void *FlxTilemapBuffer_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_tile_FlxTilemapBuffer__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxTilemapBuffer_obj::resize(int tileWidth,int tileHeight,int widthInTiles,int heightInTiles, ::flixel::FlxCamera camera,::hx::Null< Float >  __o_scaleX,::hx::Null< Float >  __o_scaleY){
            		Float scaleX = __o_scaleX.Default(((Float)1.0));
            		Float scaleY = __o_scaleY.Default(((Float)1.0));
            	HX_GC_STACKFRAME(&_hx_pos_ea53adae7ad7e842_116_resize)
HXLINE( 117)		this->updateColumns(tileWidth,widthInTiles,scaleX,camera);
HXLINE( 118)		this->updateRows(tileHeight,heightInTiles,scaleY,camera);
HXLINE( 120)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 122)			int newWidth = ::Std_obj::_hx_int(( (Float)((this->columns * tileWidth)) ));
HXLINE( 123)			int newHeight = ::Std_obj::_hx_int(( (Float)((this->rows * tileHeight)) ));
HXLINE( 125)			if (::hx::IsNull( this->pixels )) {
HXLINE( 127)				this->pixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,newWidth,newHeight,true,0);
HXLINE( 128)				this->_flashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,newWidth,newHeight);
HXLINE( 129)				this->_matrix =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 130)				this->dirty = true;
            			}
            			else {
HXLINE( 132)				bool _hx_tmp;
HXDLIN( 132)				if ((this->pixels->width == newWidth)) {
HXLINE( 132)					_hx_tmp = (this->pixels->height != newHeight);
            				}
            				else {
HXLINE( 132)					_hx_tmp = true;
            				}
HXDLIN( 132)				if (_hx_tmp) {
HXLINE( 134)					::flixel::util::FlxDestroyUtil_obj::dispose(this->pixels);
HXLINE( 135)					this->pixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,newWidth,newHeight,true,0);
HXLINE( 136)					this->_flashRect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(newWidth) ),( (Float)(newHeight) ));
HXLINE( 137)					this->dirty = true;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxTilemapBuffer_obj,resize,(void))

void FlxTilemapBuffer_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_ea53adae7ad7e842_147_destroy)
HXDLIN( 147)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 149)			this->pixels = ::flixel::util::FlxDestroyUtil_obj::dispose(this->pixels);
HXLINE( 150)			this->blend = null();
HXLINE( 151)			this->_matrix = null();
HXLINE( 152)			this->_flashRect = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemapBuffer_obj,destroy,(void))

void FlxTilemapBuffer_obj::fill(::hx::Null< int >  __o_color){
            		int color = __o_color.Default(0);
            	HX_STACKFRAME(&_hx_pos_ea53adae7ad7e842_164_fill)
HXDLIN( 164)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 166)			this->pixels->fillRect(this->_flashRect,color);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapBuffer_obj,fill,(void))

void FlxTilemapBuffer_obj::draw( ::flixel::FlxCamera camera, ::openfl::geom::Point flashPoint,::hx::Null< Float >  __o_scaleX,::hx::Null< Float >  __o_scaleY){
            		Float scaleX = __o_scaleX.Default(((Float)1.0));
            		Float scaleY = __o_scaleY.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_ea53adae7ad7e842_177_draw)
HXLINE( 178)		if (this->isPixelPerfectRender(camera)) {
HXLINE( 180)			flashPoint->x = ( (Float)(::Math_obj::floor(flashPoint->x)) );
HXLINE( 181)			flashPoint->y = ( (Float)(::Math_obj::floor(flashPoint->y)) );
            		}
HXLINE( 184)		bool _hx_tmp;
HXDLIN( 184)		bool _hx_tmp1;
HXDLIN( 184)		if (this->isPixelPerfectRender(camera)) {
HXLINE( 184)			if ((scaleX == ((Float)1.0))) {
HXLINE( 184)				_hx_tmp1 = (scaleY == ((Float)1.0));
            			}
            			else {
HXLINE( 184)				_hx_tmp1 = false;
            			}
            		}
            		else {
HXLINE( 184)			_hx_tmp1 = false;
            		}
HXDLIN( 184)		if (_hx_tmp1) {
HXLINE( 184)			_hx_tmp = ::hx::IsNull( this->blend );
            		}
            		else {
HXLINE( 184)			_hx_tmp = false;
            		}
HXDLIN( 184)		if (_hx_tmp) {
HXLINE( 186)			camera->copyPixels(null(),this->pixels,this->_flashRect,flashPoint,null(),null(),true,null());
            		}
            		else {
HXLINE( 190)			this->_matrix->identity();
HXLINE( 191)			this->_matrix->scale(scaleX,scaleY);
HXLINE( 192)			this->_matrix->translate(flashPoint->x,flashPoint->y);
HXLINE( 193)			camera->drawPixels(null(),this->pixels,this->_matrix,null(),this->blend,this->antialiasing,null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,draw,(void))

void FlxTilemapBuffer_obj::colorTransform( ::openfl::geom::ColorTransform transform){
            	HX_STACKFRAME(&_hx_pos_ea53adae7ad7e842_199_colorTransform)
HXDLIN( 199)		this->pixels->colorTransform(this->_flashRect,transform);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapBuffer_obj,colorTransform,(void))

void FlxTilemapBuffer_obj::updateColumns(int tileWidth,int widthInTiles,::hx::Null< Float >  __o_scaleX, ::flixel::FlxCamera camera){
            		Float scaleX = __o_scaleX.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_ea53adae7ad7e842_204_updateColumns)
HXLINE( 205)		if ((widthInTiles < 0)) {
HXLINE( 206)			widthInTiles = 0;
            		}
HXLINE( 208)		if (::hx::IsNull( camera )) {
HXLINE( 209)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 211)		this->columns = (::Math_obj::ceil(((( (Float)(camera->width) ) - (camera->viewMarginX * ( (Float)(2) ))) / (( (Float)(tileWidth) ) * scaleX))) + 1);
HXLINE( 213)		if ((this->columns > widthInTiles)) {
HXLINE( 214)			this->columns = widthInTiles;
            		}
HXLINE( 216)		this->width = ( (Float)(::Std_obj::_hx_int((( (Float)((this->columns * tileWidth)) ) * scaleX))) );
HXLINE( 218)		this->dirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,updateColumns,(void))

void FlxTilemapBuffer_obj::updateRows(int tileHeight,int heightInTiles,::hx::Null< Float >  __o_scaleY, ::flixel::FlxCamera camera){
            		Float scaleY = __o_scaleY.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_ea53adae7ad7e842_223_updateRows)
HXLINE( 224)		if ((heightInTiles < 0)) {
HXLINE( 225)			heightInTiles = 0;
            		}
HXLINE( 227)		if (::hx::IsNull( camera )) {
HXLINE( 228)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 230)		this->rows = (::Math_obj::ceil(((( (Float)(camera->height) ) - (camera->viewMarginY * ( (Float)(2) ))) / (( (Float)(tileHeight) ) * scaleY))) + 1);
HXLINE( 232)		if ((this->rows > heightInTiles)) {
HXLINE( 233)			this->rows = heightInTiles;
            		}
HXLINE( 235)		this->height = ( (Float)(::Std_obj::_hx_int((( (Float)((this->rows * tileHeight)) ) * scaleY))) );
HXLINE( 237)		this->dirty = true;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemapBuffer_obj,updateRows,(void))

bool FlxTilemapBuffer_obj::isPixelPerfectRender( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_ea53adae7ad7e842_244_isPixelPerfectRender)
HXLINE( 245)		if (::hx::IsNull( camera )) {
HXLINE( 246)			camera = ::flixel::FlxG_obj::camera;
            		}
HXLINE( 248)		if (::hx::IsNull( this->pixelPerfectRender )) {
HXLINE( 248)			return camera->pixelPerfectRender;
            		}
            		else {
HXLINE( 248)			return ( (bool)(this->pixelPerfectRender) );
            		}
HXDLIN( 248)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemapBuffer_obj,isPixelPerfectRender,return )

bool FlxTilemapBuffer_obj::isDirty( ::flixel::tile::FlxTypedTilemap tilemap, ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_ea53adae7ad7e842_259_isDirty)
HXLINE( 260)		bool _hx_tmp;
HXDLIN( 260)		bool _hx_tmp1;
HXDLIN( 260)		bool _hx_tmp2;
HXDLIN( 260)		bool _hx_tmp3;
HXDLIN( 260)		bool _hx_tmp4;
HXDLIN( 260)		bool _hx_tmp5;
HXDLIN( 260)		bool _hx_tmp6;
HXDLIN( 260)		bool _hx_tmp7;
HXDLIN( 260)		bool _hx_tmp8;
HXDLIN( 260)		bool _hx_tmp9;
HXDLIN( 260)		bool _hx_tmp10;
HXDLIN( 260)		bool _hx_tmp11;
HXDLIN( 260)		if (!(this->dirty)) {
HXLINE( 260)			_hx_tmp11 = (tilemap->x != this->_prevTilemapX);
            		}
            		else {
HXLINE( 260)			_hx_tmp11 = true;
            		}
HXDLIN( 260)		if (!(_hx_tmp11)) {
HXLINE( 260)			_hx_tmp10 = (tilemap->y != this->_prevTilemapY);
            		}
            		else {
HXLINE( 260)			_hx_tmp10 = true;
            		}
HXDLIN( 260)		if (!(_hx_tmp10)) {
HXLINE( 260)			_hx_tmp9 = (tilemap->scale->x != this->_prevTilemapScaleX);
            		}
            		else {
HXLINE( 260)			_hx_tmp9 = true;
            		}
HXDLIN( 260)		if (!(_hx_tmp9)) {
HXLINE( 260)			_hx_tmp8 = (tilemap->scale->y != this->_prevTilemapScaleY);
            		}
            		else {
HXLINE( 260)			_hx_tmp8 = true;
            		}
HXDLIN( 260)		if (!(_hx_tmp8)) {
HXLINE( 260)			_hx_tmp7 = (tilemap->scrollFactor->x != this->_prevTilemapScrollX);
            		}
            		else {
HXLINE( 260)			_hx_tmp7 = true;
            		}
HXDLIN( 260)		if (!(_hx_tmp7)) {
HXLINE( 260)			_hx_tmp6 = (tilemap->scrollFactor->y != this->_prevTilemapScrollY);
            		}
            		else {
HXLINE( 260)			_hx_tmp6 = true;
            		}
HXDLIN( 260)		if (!(_hx_tmp6)) {
HXLINE( 260)			_hx_tmp5 = (camera->scroll->x != this->_prevCameraScrollX);
            		}
            		else {
HXLINE( 260)			_hx_tmp5 = true;
            		}
HXDLIN( 260)		if (!(_hx_tmp5)) {
HXLINE( 260)			_hx_tmp4 = (camera->scroll->y != this->_prevCameraScrollY);
            		}
            		else {
HXLINE( 260)			_hx_tmp4 = true;
            		}
HXDLIN( 260)		if (!(_hx_tmp4)) {
HXLINE( 260)			_hx_tmp3 = (camera->scaleX != this->_prevCameraScaleX);
            		}
            		else {
HXLINE( 260)			_hx_tmp3 = true;
            		}
HXDLIN( 260)		if (!(_hx_tmp3)) {
HXLINE( 260)			_hx_tmp2 = (camera->scaleY != this->_prevCameraScaleY);
            		}
            		else {
HXLINE( 260)			_hx_tmp2 = true;
            		}
HXDLIN( 260)		if (!(_hx_tmp2)) {
HXLINE( 260)			_hx_tmp1 = (camera->width != this->_prevCameraWidth);
            		}
            		else {
HXLINE( 260)			_hx_tmp1 = true;
            		}
HXDLIN( 260)		if (!(_hx_tmp1)) {
HXLINE( 260)			_hx_tmp = (camera->height != this->_prevCameraHeight);
            		}
            		else {
HXLINE( 260)			_hx_tmp = true;
            		}
HXDLIN( 260)		this->dirty = _hx_tmp;
HXLINE( 274)		if (this->dirty) {
HXLINE( 276)			this->_prevTilemapX = tilemap->x;
HXLINE( 277)			this->_prevTilemapY = tilemap->y;
HXLINE( 278)			this->_prevTilemapScaleX = tilemap->scale->x;
HXLINE( 279)			this->_prevTilemapScaleY = tilemap->scale->y;
HXLINE( 280)			this->_prevTilemapScrollX = tilemap->scrollFactor->x;
HXLINE( 281)			this->_prevTilemapScrollY = tilemap->scrollFactor->y;
HXLINE( 282)			this->_prevCameraScrollX = camera->scroll->x;
HXLINE( 283)			this->_prevCameraScrollY = camera->scroll->y;
HXLINE( 284)			this->_prevCameraScaleX = camera->scaleX;
HXLINE( 285)			this->_prevCameraScaleY = camera->scaleY;
HXLINE( 286)			this->_prevCameraWidth = camera->width;
HXLINE( 287)			this->_prevCameraHeight = camera->height;
            		}
HXLINE( 290)		return this->dirty;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemapBuffer_obj,isDirty,return )


::hx::ObjectPtr< FlxTilemapBuffer_obj > FlxTilemapBuffer_obj::__new(int tileWidth,int tileHeight,int widthInTiles,int heightInTiles, ::flixel::FlxCamera camera,::hx::Null< Float >  __o_scaleX,::hx::Null< Float >  __o_scaleY) {
	::hx::ObjectPtr< FlxTilemapBuffer_obj > __this = new FlxTilemapBuffer_obj();
	__this->__construct(tileWidth,tileHeight,widthInTiles,heightInTiles,camera,__o_scaleX,__o_scaleY);
	return __this;
}

::hx::ObjectPtr< FlxTilemapBuffer_obj > FlxTilemapBuffer_obj::__alloc(::hx::Ctx *_hx_ctx,int tileWidth,int tileHeight,int widthInTiles,int heightInTiles, ::flixel::FlxCamera camera,::hx::Null< Float >  __o_scaleX,::hx::Null< Float >  __o_scaleY) {
	FlxTilemapBuffer_obj *__this = (FlxTilemapBuffer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTilemapBuffer_obj), true, "flixel.tile.FlxTilemapBuffer"));
	*(void **)__this = FlxTilemapBuffer_obj::_hx_vtable;
	__this->__construct(tileWidth,tileHeight,widthInTiles,heightInTiles,camera,__o_scaleX,__o_scaleY);
	return __this;
}

FlxTilemapBuffer_obj::FlxTilemapBuffer_obj()
{
}

void FlxTilemapBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemapBuffer);
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_MARK_MEMBER_NAME(pixels,"pixels");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(antialiasing,"antialiasing");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_prevTilemapX,"_prevTilemapX");
	HX_MARK_MEMBER_NAME(_prevTilemapY,"_prevTilemapY");
	HX_MARK_MEMBER_NAME(_prevTilemapScaleX,"_prevTilemapScaleX");
	HX_MARK_MEMBER_NAME(_prevTilemapScaleY,"_prevTilemapScaleY");
	HX_MARK_MEMBER_NAME(_prevTilemapScrollX,"_prevTilemapScrollX");
	HX_MARK_MEMBER_NAME(_prevTilemapScrollY,"_prevTilemapScrollY");
	HX_MARK_MEMBER_NAME(_prevCameraScrollX,"_prevCameraScrollX");
	HX_MARK_MEMBER_NAME(_prevCameraScrollY,"_prevCameraScrollY");
	HX_MARK_MEMBER_NAME(_prevCameraScaleX,"_prevCameraScaleX");
	HX_MARK_MEMBER_NAME(_prevCameraScaleY,"_prevCameraScaleY");
	HX_MARK_MEMBER_NAME(_prevCameraWidth,"_prevCameraWidth");
	HX_MARK_MEMBER_NAME(_prevCameraHeight,"_prevCameraHeight");
	HX_MARK_END_CLASS();
}

void FlxTilemapBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(pixelPerfectRender,"pixelPerfectRender");
	HX_VISIT_MEMBER_NAME(pixels,"pixels");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(antialiasing,"antialiasing");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_prevTilemapX,"_prevTilemapX");
	HX_VISIT_MEMBER_NAME(_prevTilemapY,"_prevTilemapY");
	HX_VISIT_MEMBER_NAME(_prevTilemapScaleX,"_prevTilemapScaleX");
	HX_VISIT_MEMBER_NAME(_prevTilemapScaleY,"_prevTilemapScaleY");
	HX_VISIT_MEMBER_NAME(_prevTilemapScrollX,"_prevTilemapScrollX");
	HX_VISIT_MEMBER_NAME(_prevTilemapScrollY,"_prevTilemapScrollY");
	HX_VISIT_MEMBER_NAME(_prevCameraScrollX,"_prevCameraScrollX");
	HX_VISIT_MEMBER_NAME(_prevCameraScrollY,"_prevCameraScrollY");
	HX_VISIT_MEMBER_NAME(_prevCameraScaleX,"_prevCameraScaleX");
	HX_VISIT_MEMBER_NAME(_prevCameraScaleY,"_prevCameraScaleY");
	HX_VISIT_MEMBER_NAME(_prevCameraWidth,"_prevCameraWidth");
	HX_VISIT_MEMBER_NAME(_prevCameraHeight,"_prevCameraHeight");
}

::hx::Val FlxTilemapBuffer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return ::hx::Val( rows ); }
		if (HX_FIELD_EQ(inName,"fill") ) { return ::hx::Val( fill_dyn() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"dirty") ) { return ::hx::Val( dirty ); }
		if (HX_FIELD_EQ(inName,"blend") ) { return ::hx::Val( blend ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"pixels") ) { return ::hx::Val( pixels ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { return ::hx::Val( columns ); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return ::hx::Val( _matrix ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"isDirty") ) { return ::hx::Val( isDirty_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return ::hx::Val( _flashRect ); }
		if (HX_FIELD_EQ(inName,"updateRows") ) { return ::hx::Val( updateRows_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { return ::hx::Val( antialiasing ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_prevTilemapX") ) { return ::hx::Val( _prevTilemapX ); }
		if (HX_FIELD_EQ(inName,"_prevTilemapY") ) { return ::hx::Val( _prevTilemapY ); }
		if (HX_FIELD_EQ(inName,"updateColumns") ) { return ::hx::Val( updateColumns_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return ::hx::Val( colorTransform_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_prevCameraWidth") ) { return ::hx::Val( _prevCameraWidth ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_prevCameraScaleX") ) { return ::hx::Val( _prevCameraScaleX ); }
		if (HX_FIELD_EQ(inName,"_prevCameraScaleY") ) { return ::hx::Val( _prevCameraScaleY ); }
		if (HX_FIELD_EQ(inName,"_prevCameraHeight") ) { return ::hx::Val( _prevCameraHeight ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { return ::hx::Val( pixelPerfectRender ); }
		if (HX_FIELD_EQ(inName,"_prevTilemapScaleX") ) { return ::hx::Val( _prevTilemapScaleX ); }
		if (HX_FIELD_EQ(inName,"_prevTilemapScaleY") ) { return ::hx::Val( _prevTilemapScaleY ); }
		if (HX_FIELD_EQ(inName,"_prevCameraScrollX") ) { return ::hx::Val( _prevCameraScrollX ); }
		if (HX_FIELD_EQ(inName,"_prevCameraScrollY") ) { return ::hx::Val( _prevCameraScrollY ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_prevTilemapScrollX") ) { return ::hx::Val( _prevTilemapScrollX ); }
		if (HX_FIELD_EQ(inName,"_prevTilemapScrollY") ) { return ::hx::Val( _prevTilemapScrollY ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"isPixelPerfectRender") ) { return ::hx::Val( isPixelPerfectRender_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTilemapBuffer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixels") ) { pixels=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast<  ::flixel::math::FlxMatrix >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"antialiasing") ) { antialiasing=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_prevTilemapX") ) { _prevTilemapX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevTilemapY") ) { _prevTilemapY=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_prevCameraWidth") ) { _prevCameraWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_prevCameraScaleX") ) { _prevCameraScaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevCameraScaleY") ) { _prevCameraScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevCameraHeight") ) { _prevCameraHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"pixelPerfectRender") ) { pixelPerfectRender=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevTilemapScaleX") ) { _prevTilemapScaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevTilemapScaleY") ) { _prevTilemapScaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevCameraScrollX") ) { _prevCameraScrollX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevCameraScrollY") ) { _prevCameraScrollY=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_prevTilemapScrollX") ) { _prevTilemapScrollX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_prevTilemapScrollY") ) { _prevTilemapScrollY=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemapBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("dirty",12,50,d0,d9));
	outFields->push(HX_("rows",19,f5,ae,4b));
	outFields->push(HX_("columns",dd,ac,59,f3));
	outFields->push(HX_("pixelPerfectRender",dd,59,4f,2f));
	outFields->push(HX_("pixels",2d,ef,a9,8c));
	outFields->push(HX_("blend",51,e8,f4,b4));
	outFields->push(HX_("antialiasing",f4,16,b3,48));
	outFields->push(HX_("_flashRect",b5,c2,f3,5d));
	outFields->push(HX_("_matrix",e0,47,3f,2a));
	outFields->push(HX_("_prevTilemapX",5c,f1,16,93));
	outFields->push(HX_("_prevTilemapY",5d,f1,16,93));
	outFields->push(HX_("_prevTilemapScaleX",2a,3f,47,89));
	outFields->push(HX_("_prevTilemapScaleY",2b,3f,47,89));
	outFields->push(HX_("_prevTilemapScrollX",8f,e7,e0,60));
	outFields->push(HX_("_prevTilemapScrollY",90,e7,e0,60));
	outFields->push(HX_("_prevCameraScrollX",54,fd,23,d5));
	outFields->push(HX_("_prevCameraScrollY",55,fd,23,d5));
	outFields->push(HX_("_prevCameraScaleX",05,c9,dc,d7));
	outFields->push(HX_("_prevCameraScaleY",06,c9,dc,d7));
	outFields->push(HX_("_prevCameraWidth",6f,93,2d,40));
	outFields->push(HX_("_prevCameraHeight",5e,e6,02,9e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTilemapBuffer_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsBool,(int)offsetof(FlxTilemapBuffer_obj,dirty),HX_("dirty",12,50,d0,d9)},
	{::hx::fsInt,(int)offsetof(FlxTilemapBuffer_obj,rows),HX_("rows",19,f5,ae,4b)},
	{::hx::fsInt,(int)offsetof(FlxTilemapBuffer_obj,columns),HX_("columns",dd,ac,59,f3)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTilemapBuffer_obj,pixelPerfectRender),HX_("pixelPerfectRender",dd,59,4f,2f)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxTilemapBuffer_obj,pixels),HX_("pixels",2d,ef,a9,8c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxTilemapBuffer_obj,blend),HX_("blend",51,e8,f4,b4)},
	{::hx::fsBool,(int)offsetof(FlxTilemapBuffer_obj,antialiasing),HX_("antialiasing",f4,16,b3,48)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(FlxTilemapBuffer_obj,_flashRect),HX_("_flashRect",b5,c2,f3,5d)},
	{::hx::fsObject /*  ::flixel::math::FlxMatrix */ ,(int)offsetof(FlxTilemapBuffer_obj,_matrix),HX_("_matrix",e0,47,3f,2a)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevTilemapX),HX_("_prevTilemapX",5c,f1,16,93)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevTilemapY),HX_("_prevTilemapY",5d,f1,16,93)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevTilemapScaleX),HX_("_prevTilemapScaleX",2a,3f,47,89)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevTilemapScaleY),HX_("_prevTilemapScaleY",2b,3f,47,89)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevTilemapScrollX),HX_("_prevTilemapScrollX",8f,e7,e0,60)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevTilemapScrollY),HX_("_prevTilemapScrollY",90,e7,e0,60)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevCameraScrollX),HX_("_prevCameraScrollX",54,fd,23,d5)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevCameraScrollY),HX_("_prevCameraScrollY",55,fd,23,d5)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevCameraScaleX),HX_("_prevCameraScaleX",05,c9,dc,d7)},
	{::hx::fsFloat,(int)offsetof(FlxTilemapBuffer_obj,_prevCameraScaleY),HX_("_prevCameraScaleY",06,c9,dc,d7)},
	{::hx::fsInt,(int)offsetof(FlxTilemapBuffer_obj,_prevCameraWidth),HX_("_prevCameraWidth",6f,93,2d,40)},
	{::hx::fsInt,(int)offsetof(FlxTilemapBuffer_obj,_prevCameraHeight),HX_("_prevCameraHeight",5e,e6,02,9e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTilemapBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTilemapBuffer_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("dirty",12,50,d0,d9),
	HX_("rows",19,f5,ae,4b),
	HX_("columns",dd,ac,59,f3),
	HX_("pixelPerfectRender",dd,59,4f,2f),
	HX_("pixels",2d,ef,a9,8c),
	HX_("blend",51,e8,f4,b4),
	HX_("antialiasing",f4,16,b3,48),
	HX_("_flashRect",b5,c2,f3,5d),
	HX_("_matrix",e0,47,3f,2a),
	HX_("_prevTilemapX",5c,f1,16,93),
	HX_("_prevTilemapY",5d,f1,16,93),
	HX_("_prevTilemapScaleX",2a,3f,47,89),
	HX_("_prevTilemapScaleY",2b,3f,47,89),
	HX_("_prevTilemapScrollX",8f,e7,e0,60),
	HX_("_prevTilemapScrollY",90,e7,e0,60),
	HX_("_prevCameraScrollX",54,fd,23,d5),
	HX_("_prevCameraScrollY",55,fd,23,d5),
	HX_("_prevCameraScaleX",05,c9,dc,d7),
	HX_("_prevCameraScaleY",06,c9,dc,d7),
	HX_("_prevCameraWidth",6f,93,2d,40),
	HX_("_prevCameraHeight",5e,e6,02,9e),
	HX_("resize",f4,59,7b,08),
	HX_("destroy",fa,2c,86,24),
	HX_("fill",83,ce,bb,43),
	HX_("draw",04,2c,70,42),
	HX_("colorTransform",89,d7,3f,ad),
	HX_("updateColumns",d4,11,c8,be),
	HX_("updateRows",c2,df,63,04),
	HX_("isPixelPerfectRender",67,1c,f9,26),
	HX_("isDirty",c8,f3,55,76),
	::String(null()) };

::hx::Class FlxTilemapBuffer_obj::__mClass;

void FlxTilemapBuffer_obj::__register()
{
	FlxTilemapBuffer_obj _hx_dummy;
	FlxTilemapBuffer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.tile.FlxTilemapBuffer",ca,41,20,09);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTilemapBuffer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTilemapBuffer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTilemapBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTilemapBuffer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace tile
