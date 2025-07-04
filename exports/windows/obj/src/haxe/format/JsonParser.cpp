// Generated by Haxe 4.3.7
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_951af697d279505e_51_new,"haxe.format.JsonParser","new",0xa017eec8,"haxe.format.JsonParser.new","C:\\HaxeToolkit\\haxe\\std/haxe/format/JsonParser.hx",51,0x53425a8f)
HX_LOCAL_STACK_FRAME(_hx_pos_951af697d279505e_56_doParse,"haxe.format.JsonParser","doParse",0xa959e310,"haxe.format.JsonParser.doParse","C:\\HaxeToolkit\\haxe\\std/haxe/format/JsonParser.hx",56,0x53425a8f)
HX_LOCAL_STACK_FRAME(_hx_pos_951af697d279505e_71_parseRec,"haxe.format.JsonParser","parseRec",0xda258b75,"haxe.format.JsonParser.parseRec","C:\\HaxeToolkit\\haxe\\std/haxe/format/JsonParser.hx",71,0x53425a8f)
HX_LOCAL_STACK_FRAME(_hx_pos_951af697d279505e_152_parseString,"haxe.format.JsonParser","parseString",0x8c919bcc,"haxe.format.JsonParser.parseString","C:\\HaxeToolkit\\haxe\\std/haxe/format/JsonParser.hx",152,0x53425a8f)
HX_LOCAL_STACK_FRAME(_hx_pos_951af697d279505e_316_invalidChar,"haxe.format.JsonParser","invalidChar",0xa9f373d5,"haxe.format.JsonParser.invalidChar","C:\\HaxeToolkit\\haxe\\std/haxe/format/JsonParser.hx",316,0x53425a8f)
HX_LOCAL_STACK_FRAME(_hx_pos_951af697d279505e_322_invalidNumber,"haxe.format.JsonParser","invalidNumber",0x8e9d1988,"haxe.format.JsonParser.invalidNumber","C:\\HaxeToolkit\\haxe\\std/haxe/format/JsonParser.hx",322,0x53425a8f)
namespace haxe{
namespace format{

void JsonParser_obj::__construct(::String str){
            	HX_STACKFRAME(&_hx_pos_951af697d279505e_51_new)
HXLINE(  52)		this->str = str;
HXLINE(  53)		this->pos = 0;
            	}

Dynamic JsonParser_obj::__CreateEmpty() { return new JsonParser_obj; }

void *JsonParser_obj::_hx_vtable = 0;

Dynamic JsonParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< JsonParser_obj > _hx_result = new JsonParser_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool JsonParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0ae51690;
}

 ::Dynamic JsonParser_obj::doParse(){
            	HX_STACKFRAME(&_hx_pos_951af697d279505e_56_doParse)
HXLINE(  57)		 ::Dynamic result = this->parseRec();
HXLINE(  58)		int c;
HXLINE(  59)		while(true){
HXLINE(  59)			c = this->str.cca(this->pos++);
HXDLIN(  59)			if (!((c != 0))) {
HXLINE(  59)				goto _hx_goto_1;
            			}
HXLINE(  60)			switch((int)(c)){
            				case (int)9: case (int)10: case (int)13: case (int)32: {
            				}
            				break;
            				default:{
HXLINE(  64)					this->invalidChar();
            				}
            			}
            		}
            		_hx_goto_1:;
HXLINE(  67)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(JsonParser_obj,doParse,return )

 ::Dynamic JsonParser_obj::parseRec(){
            	HX_STACKFRAME(&_hx_pos_951af697d279505e_71_parseRec)
HXDLIN(  71)		while(true){
HXLINE(  72)			int c = this->str.cca(this->pos++);
HXLINE(  73)			switch((int)(c)){
            				case (int)9: case (int)10: case (int)13: case (int)32: {
            				}
            				break;
            				case (int)34: {
HXLINE( 143)					return this->parseString();
            				}
            				break;
            				case (int)45: case (int)48: case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE( 145)					int c1 = c;
HXDLIN( 145)					int start = (this->pos - 1);
HXDLIN( 145)					bool minus = (c1 == 45);
HXDLIN( 145)					bool digit = !(minus);
HXDLIN( 145)					bool zero = (c1 == 48);
HXDLIN( 145)					bool point = false;
HXDLIN( 145)					bool e = false;
HXDLIN( 145)					bool pm = false;
HXDLIN( 145)					bool end = false;
HXDLIN( 145)					do {
HXLINE( 145)						c1 = this->str.cca(this->pos++);
HXDLIN( 145)						switch((int)(c1)){
            							case (int)43: case (int)45: {
HXLINE( 145)								bool _hx_tmp;
HXDLIN( 145)								if (e) {
HXLINE( 145)									_hx_tmp = pm;
            								}
            								else {
HXLINE( 145)									_hx_tmp = true;
            								}
HXDLIN( 145)								if (_hx_tmp) {
HXLINE( 145)									this->invalidNumber(start);
            								}
HXDLIN( 145)								digit = false;
HXDLIN( 145)								pm = true;
            							}
            							break;
            							case (int)46: {
HXLINE( 145)								bool _hx_tmp1;
HXDLIN( 145)								bool _hx_tmp2;
HXDLIN( 145)								if (!(minus)) {
HXLINE( 145)									_hx_tmp2 = point;
            								}
            								else {
HXLINE( 145)									_hx_tmp2 = true;
            								}
HXDLIN( 145)								if (!(_hx_tmp2)) {
HXLINE( 145)									_hx_tmp1 = e;
            								}
            								else {
HXLINE( 145)									_hx_tmp1 = true;
            								}
HXDLIN( 145)								if (_hx_tmp1) {
HXLINE( 145)									this->invalidNumber(start);
            								}
HXDLIN( 145)								digit = false;
HXDLIN( 145)								point = true;
            							}
            							break;
            							case (int)48: {
HXLINE( 145)								bool _hx_tmp3;
HXDLIN( 145)								if (zero) {
HXLINE( 145)									_hx_tmp3 = !(point);
            								}
            								else {
HXLINE( 145)									_hx_tmp3 = false;
            								}
HXDLIN( 145)								if (_hx_tmp3) {
HXLINE( 145)									this->invalidNumber(start);
            								}
HXDLIN( 145)								if (minus) {
HXLINE( 145)									minus = false;
HXDLIN( 145)									zero = true;
            								}
HXDLIN( 145)								digit = true;
            							}
            							break;
            							case (int)49: case (int)50: case (int)51: case (int)52: case (int)53: case (int)54: case (int)55: case (int)56: case (int)57: {
HXLINE( 145)								bool _hx_tmp4;
HXDLIN( 145)								if (zero) {
HXLINE( 145)									_hx_tmp4 = !(point);
            								}
            								else {
HXLINE( 145)									_hx_tmp4 = false;
            								}
HXDLIN( 145)								if (_hx_tmp4) {
HXLINE( 145)									this->invalidNumber(start);
            								}
HXDLIN( 145)								if (minus) {
HXLINE( 145)									minus = false;
            								}
HXDLIN( 145)								digit = true;
HXDLIN( 145)								zero = false;
            							}
            							break;
            							case (int)69: case (int)101: {
HXLINE( 145)								bool _hx_tmp5;
HXDLIN( 145)								bool _hx_tmp6;
HXDLIN( 145)								if (!(minus)) {
HXLINE( 145)									_hx_tmp6 = zero;
            								}
            								else {
HXLINE( 145)									_hx_tmp6 = true;
            								}
HXDLIN( 145)								if (!(_hx_tmp6)) {
HXLINE( 145)									_hx_tmp5 = e;
            								}
            								else {
HXLINE( 145)									_hx_tmp5 = true;
            								}
HXDLIN( 145)								if (_hx_tmp5) {
HXLINE( 145)									this->invalidNumber(start);
            								}
HXDLIN( 145)								digit = false;
HXDLIN( 145)								e = true;
            							}
            							break;
            							default:{
HXLINE( 145)								if (!(digit)) {
HXLINE( 145)									this->invalidNumber(start);
            								}
HXDLIN( 145)								this->pos--;
HXDLIN( 145)								end = true;
            							}
            						}
            					} while(!(end));
;
HXDLIN( 145)					Float f = ::Std_obj::parseFloat(this->str.substr(start,(this->pos - start)));
HXDLIN( 145)					if (point) {
HXLINE( 145)						return f;
            					}
            					else {
HXLINE( 145)						int i = ::Std_obj::_hx_int(f);
HXDLIN( 145)						if ((i == f)) {
HXLINE( 145)							return i;
            						}
            						else {
HXLINE( 145)							return f;
            						}
            					}
            				}
            				break;
            				case (int)91: {
HXLINE( 103)					::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 103)					 ::Dynamic comma = null();
HXLINE( 104)					while(true){
HXLINE( 105)						int c2 = this->str.cca(this->pos++);
HXLINE( 106)						switch((int)(c2)){
            							case (int)9: case (int)10: case (int)13: case (int)32: {
            							}
            							break;
            							case (int)44: {
HXLINE( 113)								if (( (bool)(comma) )) {
HXLINE( 113)									comma = false;
            								}
            								else {
HXLINE( 113)									this->invalidChar();
            								}
            							}
            							break;
            							case (int)93: {
HXLINE( 110)								if (::hx::IsEq( comma,false )) {
HXLINE( 110)									this->invalidChar();
            								}
HXLINE( 111)								return arr;
            							}
            							break;
            							default:{
HXLINE( 115)								if (( (bool)(comma) )) {
HXLINE( 115)									this->invalidChar();
            								}
HXLINE( 116)								this->pos--;
HXLINE( 117)								arr->push(this->parseRec());
HXLINE( 118)								comma = true;
            							}
            						}
            					}
            				}
            				break;
            				case (int)102: {
HXLINE( 129)					int save = this->pos;
HXLINE( 130)					bool _hx_tmp7;
HXDLIN( 130)					bool _hx_tmp8;
HXDLIN( 130)					bool _hx_tmp9;
HXDLIN( 130)					if ((this->str.cca(this->pos++) == 97)) {
HXLINE( 130)						_hx_tmp9 = (this->str.cca(this->pos++) != 108);
            					}
            					else {
HXLINE( 130)						_hx_tmp9 = true;
            					}
HXDLIN( 130)					if (!(_hx_tmp9)) {
HXLINE( 130)						_hx_tmp8 = (this->str.cca(this->pos++) != 115);
            					}
            					else {
HXLINE( 130)						_hx_tmp8 = true;
            					}
HXDLIN( 130)					if (!(_hx_tmp8)) {
HXLINE( 130)						_hx_tmp7 = (this->str.cca(this->pos++) != 101);
            					}
            					else {
HXLINE( 130)						_hx_tmp7 = true;
            					}
HXDLIN( 130)					if (_hx_tmp7) {
HXLINE( 131)						this->pos = save;
HXLINE( 132)						this->invalidChar();
            					}
HXLINE( 134)					return false;
            				}
            				break;
            				case (int)110: {
HXLINE( 136)					int save1 = this->pos;
HXLINE( 137)					bool _hx_tmp10;
HXDLIN( 137)					bool _hx_tmp11;
HXDLIN( 137)					if ((this->str.cca(this->pos++) == 117)) {
HXLINE( 137)						_hx_tmp11 = (this->str.cca(this->pos++) != 108);
            					}
            					else {
HXLINE( 137)						_hx_tmp11 = true;
            					}
HXDLIN( 137)					if (!(_hx_tmp11)) {
HXLINE( 137)						_hx_tmp10 = (this->str.cca(this->pos++) != 108);
            					}
            					else {
HXLINE( 137)						_hx_tmp10 = true;
            					}
HXDLIN( 137)					if (_hx_tmp10) {
HXLINE( 138)						this->pos = save1;
HXLINE( 139)						this->invalidChar();
            					}
HXLINE( 141)					return null();
            				}
            				break;
            				case (int)116: {
HXLINE( 122)					int save2 = this->pos;
HXLINE( 123)					bool _hx_tmp12;
HXDLIN( 123)					bool _hx_tmp13;
HXDLIN( 123)					if ((this->str.cca(this->pos++) == 114)) {
HXLINE( 123)						_hx_tmp13 = (this->str.cca(this->pos++) != 117);
            					}
            					else {
HXLINE( 123)						_hx_tmp13 = true;
            					}
HXDLIN( 123)					if (!(_hx_tmp13)) {
HXLINE( 123)						_hx_tmp12 = (this->str.cca(this->pos++) != 101);
            					}
            					else {
HXLINE( 123)						_hx_tmp12 = true;
            					}
HXDLIN( 123)					if (_hx_tmp12) {
HXLINE( 124)						this->pos = save2;
HXLINE( 125)						this->invalidChar();
            					}
HXLINE( 127)					return true;
            				}
            				break;
            				case (int)123: {
HXLINE(  77)					 ::Dynamic obj =  ::Dynamic(::hx::Anon_obj::Create(0));
HXDLIN(  77)					::String field = null();
HXDLIN(  77)					 ::Dynamic comma1 = null();
HXLINE(  78)					while(true){
HXLINE(  79)						int c3 = this->str.cca(this->pos++);
HXLINE(  80)						switch((int)(c3)){
            							case (int)9: case (int)10: case (int)13: case (int)32: {
            							}
            							break;
            							case (int)34: {
HXLINE(  96)								bool _hx_tmp14;
HXDLIN(  96)								if (::hx::IsNull( field )) {
HXLINE(  96)									_hx_tmp14 = ( (bool)(comma1) );
            								}
            								else {
HXLINE(  96)									_hx_tmp14 = true;
            								}
HXDLIN(  96)								if (_hx_tmp14) {
HXLINE(  96)									this->invalidChar();
            								}
HXLINE(  97)								field = this->parseString();
            							}
            							break;
            							case (int)44: {
HXLINE(  94)								if (( (bool)(comma1) )) {
HXLINE(  94)									comma1 = false;
            								}
            								else {
HXLINE(  94)									this->invalidChar();
            								}
            							}
            							break;
            							case (int)58: {
HXLINE(  88)								if (::hx::IsNull( field )) {
HXLINE(  89)									this->invalidChar();
            								}
HXLINE(  90)								::Reflect_obj::setField(obj,field,this->parseRec());
HXLINE(  91)								field = null();
HXLINE(  92)								comma1 = true;
            							}
            							break;
            							case (int)125: {
HXLINE(  84)								bool _hx_tmp15;
HXDLIN(  84)								if (::hx::IsNull( field )) {
HXLINE(  84)									_hx_tmp15 = ::hx::IsEq( comma1,false );
            								}
            								else {
HXLINE(  84)									_hx_tmp15 = true;
            								}
HXDLIN(  84)								if (_hx_tmp15) {
HXLINE(  85)									this->invalidChar();
            								}
HXLINE(  86)								return obj;
            							}
            							break;
            							default:{
HXLINE(  99)								this->invalidChar();
            							}
            						}
            					}
            				}
            				break;
            				default:{
HXLINE( 147)					this->invalidChar();
            				}
            			}
            		}
HXLINE(  71)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(JsonParser_obj,parseRec,return )

::String JsonParser_obj::parseString(){
            	HX_GC_STACKFRAME(&_hx_pos_951af697d279505e_152_parseString)
HXLINE( 153)		int start = this->pos;
HXLINE( 154)		 ::StringBuf buf = null();
HXLINE( 156)		int prev = -1;
HXLINE( 163)		while(true){
HXLINE( 164)			int c = this->str.cca(this->pos++);
HXLINE( 165)			if ((c == 34)) {
HXLINE( 166)				goto _hx_goto_8;
            			}
HXLINE( 167)			if ((c == 92)) {
HXLINE( 168)				if (::hx::IsNull( buf )) {
HXLINE( 169)					buf =  ::StringBuf_obj::__alloc( HX_CTX );
            				}
HXLINE( 171)				{
HXLINE( 171)					::String s = this->str;
HXDLIN( 171)					 ::Dynamic len = ((this->pos - start) - 1);
HXDLIN( 171)					if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 171)						buf->flush();
            					}
HXDLIN( 171)					if (::hx::IsNull( buf->b )) {
HXLINE( 171)						buf->b = ::Array_obj< ::String >::__new(1)->init(0,s.substr(start,len));
            					}
            					else {
HXLINE( 171)						::Array< ::String > buf1 = buf->b;
HXDLIN( 171)						buf1->push(s.substr(start,len));
            					}
            				}
HXLINE( 172)				c = this->str.cca(this->pos++);
HXLINE( 174)				bool _hx_tmp;
HXDLIN( 174)				if ((c != 117)) {
HXLINE( 174)					_hx_tmp = (prev != -1);
            				}
            				else {
HXLINE( 174)					_hx_tmp = false;
            				}
HXDLIN( 174)				if (_hx_tmp) {
HXLINE( 175)					{
HXLINE( 175)						::String x = ::String::fromCharCode(65533);
HXDLIN( 175)						if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 175)							buf->flush();
            						}
HXDLIN( 175)						if (::hx::IsNull( buf->b )) {
HXLINE( 175)							buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 175)							::Array< ::String > buf2 = buf->b;
HXDLIN( 175)							buf2->push(::Std_obj::string(x));
            						}
            					}
HXDLIN( 175)					prev = -1;
            				}
HXLINE( 177)				switch((int)(c)){
            					case (int)34: case (int)47: case (int)92: {
HXLINE( 189)						if ((c >= 127)) {
HXLINE( 189)							::String x1 = ::String::fromCharCode(c);
HXDLIN( 189)							if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 189)								buf->flush();
            							}
HXDLIN( 189)							if (::hx::IsNull( buf->b )) {
HXLINE( 189)								buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            							}
            							else {
HXLINE( 189)								::Array< ::String > buf3 = buf->b;
HXDLIN( 189)								buf3->push(::Std_obj::string(x1));
            							}
            						}
            						else {
HXLINE( 189)							if (::hx::IsNull( buf->charBuf )) {
HXLINE( 189)								buf->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN( 189)							buf->charBuf->push(c);
            						}
            					}
            					break;
            					case (int)98: {
HXLINE( 185)						if (::hx::IsNull( buf->charBuf )) {
HXLINE( 185)							buf->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 185)						buf->charBuf->push(8);
            					}
            					break;
            					case (int)102: {
HXLINE( 187)						if (::hx::IsNull( buf->charBuf )) {
HXLINE( 187)							buf->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 187)						buf->charBuf->push(12);
            					}
            					break;
            					case (int)110: {
HXLINE( 181)						if (::hx::IsNull( buf->charBuf )) {
HXLINE( 181)							buf->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 181)						buf->charBuf->push(10);
            					}
            					break;
            					case (int)114: {
HXLINE( 179)						if (::hx::IsNull( buf->charBuf )) {
HXLINE( 179)							buf->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 179)						buf->charBuf->push(13);
            					}
            					break;
            					case (int)116: {
HXLINE( 183)						if (::hx::IsNull( buf->charBuf )) {
HXLINE( 183)							buf->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 183)						buf->charBuf->push(9);
            					}
            					break;
            					case (int)117: {
HXLINE( 191)						int uc = ( (int)(::Std_obj::parseInt((HX_("0x",48,2a,00,00) + this->str.substr(this->pos,4)))) );
HXLINE( 192)						 ::haxe::format::JsonParser _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 192)						_hx_tmp1->pos = (_hx_tmp1->pos + 4);
HXLINE( 210)						if ((prev != -1)) {
HXLINE( 211)							bool _hx_tmp2;
HXDLIN( 211)							if ((uc >= 56320)) {
HXLINE( 211)								_hx_tmp2 = (uc > 57343);
            							}
            							else {
HXLINE( 211)								_hx_tmp2 = true;
            							}
HXDLIN( 211)							if (_hx_tmp2) {
HXLINE( 212)								{
HXLINE( 212)									::String x2 = ::String::fromCharCode(65533);
HXDLIN( 212)									if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 212)										buf->flush();
            									}
HXDLIN( 212)									if (::hx::IsNull( buf->b )) {
HXLINE( 212)										buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x2));
            									}
            									else {
HXLINE( 212)										::Array< ::String > buf4 = buf->b;
HXDLIN( 212)										buf4->push(::Std_obj::string(x2));
            									}
            								}
HXDLIN( 212)								prev = -1;
            							}
            							else {
HXLINE( 214)								{
HXLINE( 214)									int c1 = ((((prev - 55296) << 10) + (uc - 56320)) + 65536);
HXDLIN( 214)									if ((c1 >= 127)) {
HXLINE( 214)										::String x3 = ::String::fromCharCode(c1);
HXDLIN( 214)										if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 214)											buf->flush();
            										}
HXDLIN( 214)										if (::hx::IsNull( buf->b )) {
HXLINE( 214)											buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x3));
            										}
            										else {
HXLINE( 214)											::Array< ::String > buf5 = buf->b;
HXDLIN( 214)											buf5->push(::Std_obj::string(x3));
            										}
            									}
            									else {
HXLINE( 214)										if (::hx::IsNull( buf->charBuf )) {
HXLINE( 214)											buf->charBuf = ::Array_obj< char >::__new();
            										}
HXDLIN( 214)										buf->charBuf->push(c1);
            									}
            								}
HXLINE( 215)								prev = -1;
            							}
            						}
            						else {
HXLINE( 217)							bool _hx_tmp3;
HXDLIN( 217)							if ((uc >= 55296)) {
HXLINE( 217)								_hx_tmp3 = (uc <= 56319);
            							}
            							else {
HXLINE( 217)								_hx_tmp3 = false;
            							}
HXDLIN( 217)							if (_hx_tmp3) {
HXLINE( 218)								prev = uc;
            							}
            							else {
HXLINE( 220)								if ((uc >= 127)) {
HXLINE( 220)									::String x4 = ::String::fromCharCode(uc);
HXDLIN( 220)									if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 220)										buf->flush();
            									}
HXDLIN( 220)									if (::hx::IsNull( buf->b )) {
HXLINE( 220)										buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x4));
            									}
            									else {
HXLINE( 220)										::Array< ::String > buf6 = buf->b;
HXDLIN( 220)										buf6->push(::Std_obj::string(x4));
            									}
            								}
            								else {
HXLINE( 220)									if (::hx::IsNull( buf->charBuf )) {
HXLINE( 220)										buf->charBuf = ::Array_obj< char >::__new();
            									}
HXDLIN( 220)									buf->charBuf->push(uc);
            								}
            							}
            						}
            					}
            					break;
            					default:{
HXLINE( 223)						HX_STACK_DO_THROW((((HX_("Invalid escape sequence \\",73,af,f7,b2) + ::String::fromCharCode(c)) + HX_(" at position ",0a,c2,01,e0)) + (this->pos - 1)));
            					}
            				}
HXLINE( 225)				start = this->pos;
            			}
            			else {
HXLINE( 241)				if ((c == 0)) {
HXLINE( 242)					HX_STACK_DO_THROW(HX_("Unclosed string",ac,02,ef,ea));
            				}
            			}
            		}
            		_hx_goto_8:;
HXLINE( 245)		if ((prev != -1)) {
HXLINE( 246)			{
HXLINE( 246)				::String x5 = ::String::fromCharCode(65533);
HXDLIN( 246)				if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 246)					buf->flush();
            				}
HXDLIN( 246)				if (::hx::IsNull( buf->b )) {
HXLINE( 246)					buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x5));
            				}
            				else {
HXLINE( 246)					::Array< ::String > buf7 = buf->b;
HXDLIN( 246)					buf7->push(::Std_obj::string(x5));
            				}
            			}
HXDLIN( 246)			prev = -1;
            		}
HXLINE( 248)		if (::hx::IsNull( buf )) {
HXLINE( 249)			return this->str.substr(start,((this->pos - start) - 1));
            		}
            		else {
HXLINE( 251)			{
HXLINE( 251)				::String s1 = this->str;
HXDLIN( 251)				 ::Dynamic len1 = ((this->pos - start) - 1);
HXDLIN( 251)				if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 251)					buf->flush();
            				}
HXDLIN( 251)				if (::hx::IsNull( buf->b )) {
HXLINE( 251)					buf->b = ::Array_obj< ::String >::__new(1)->init(0,s1.substr(start,len1));
            				}
            				else {
HXLINE( 251)					::Array< ::String > buf8 = buf->b;
HXDLIN( 251)					buf8->push(s1.substr(start,len1));
            				}
            			}
HXLINE( 252)			return buf->toString();
            		}
HXLINE( 248)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(JsonParser_obj,parseString,return )

void JsonParser_obj::invalidChar(){
            	HX_STACKFRAME(&_hx_pos_951af697d279505e_316_invalidChar)
HXLINE( 317)		this->pos--;
HXLINE( 318)		::String _hx_tmp = ((HX_("Invalid char ",81,66,ec,29) + this->str.cca(this->pos)) + HX_(" at position ",0a,c2,01,e0));
HXDLIN( 318)		HX_STACK_DO_THROW((_hx_tmp + this->pos));
            	}


HX_DEFINE_DYNAMIC_FUNC0(JsonParser_obj,invalidChar,(void))

void JsonParser_obj::invalidNumber(int start){
            	HX_STACKFRAME(&_hx_pos_951af697d279505e_322_invalidNumber)
HXDLIN( 322)		HX_STACK_DO_THROW((((HX_("Invalid number at position ",d8,9d,6f,13) + start) + HX_(": ",a6,32,00,00)) + this->str.substr(start,(this->pos - start))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(JsonParser_obj,invalidNumber,(void))


::hx::ObjectPtr< JsonParser_obj > JsonParser_obj::__new(::String str) {
	::hx::ObjectPtr< JsonParser_obj > __this = new JsonParser_obj();
	__this->__construct(str);
	return __this;
}

::hx::ObjectPtr< JsonParser_obj > JsonParser_obj::__alloc(::hx::Ctx *_hx_ctx,::String str) {
	JsonParser_obj *__this = (JsonParser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(JsonParser_obj), true, "haxe.format.JsonParser"));
	*(void **)__this = JsonParser_obj::_hx_vtable;
	__this->__construct(str);
	return __this;
}

JsonParser_obj::JsonParser_obj()
{
}

void JsonParser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JsonParser);
	HX_MARK_MEMBER_NAME(str,"str");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_END_CLASS();
}

void JsonParser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(str,"str");
	HX_VISIT_MEMBER_NAME(pos,"pos");
}

::hx::Val JsonParser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"str") ) { return ::hx::Val( str ); }
		if (HX_FIELD_EQ(inName,"pos") ) { return ::hx::Val( pos ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"doParse") ) { return ::hx::Val( doParse_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"parseRec") ) { return ::hx::Val( parseRec_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"parseString") ) { return ::hx::Val( parseString_dyn() ); }
		if (HX_FIELD_EQ(inName,"invalidChar") ) { return ::hx::Val( invalidChar_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"invalidNumber") ) { return ::hx::Val( invalidNumber_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val JsonParser_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"str") ) { str=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JsonParser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("str",b1,a8,57,00));
	outFields->push(HX_("pos",94,5d,55,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo JsonParser_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(JsonParser_obj,str),HX_("str",b1,a8,57,00)},
	{::hx::fsInt,(int)offsetof(JsonParser_obj,pos),HX_("pos",94,5d,55,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *JsonParser_obj_sStaticStorageInfo = 0;
#endif

static ::String JsonParser_obj_sMemberFields[] = {
	HX_("str",b1,a8,57,00),
	HX_("pos",94,5d,55,00),
	HX_("doParse",a8,70,82,f0),
	HX_("parseRec",dd,e2,78,d6),
	HX_("parseString",64,d5,6c,8c),
	HX_("invalidChar",6d,ad,ce,a9),
	HX_("invalidNumber",20,e9,eb,a6),
	::String(null()) };

::hx::Class JsonParser_obj::__mClass;

void JsonParser_obj::__register()
{
	JsonParser_obj _hx_dummy;
	JsonParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.format.JsonParser",d6,2a,bf,29);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(JsonParser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< JsonParser_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JsonParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JsonParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace format
