type intervalId;

external setInterval : (unit => unit) => int => intervalId = "setInterval" [@@bs.val];

external clearInterval : intervalId => unit = "clearInterval" [@@bs.val];

type timeoutId;

external setTimeout : (unit => unit) => int => timeoutId = "setTimeout" [@@bs.val];

external clearTimeout : timeoutId => unit = "clearTimeout" [@@bs.val];

external requestAnimationFrame : (unit => unit) => unit = "requestAnimationFrame" [@@bs.val];

module Window = {
  type t;
  external window : t = "window" [@@bs.val];
  external innerWidth : t => int = "innerWidth" [@@bs.get];
  external innerHeight : t => int = "innerHeight" [@@bs.get];
  external addEventListener : t => string => (unit => unit) => unit =
    "addEventListener" [@@bs.send];
  external onLoad : t => (unit => unit) => unit = "onload" [@@bs.set];
  module Location = {
    external href : string = "window.location.href" [@@bs.val];
  };
};

module JSON = {
  external stringify : 'a => string = "JSON.stringify" [@@bs.val];
  external parse : string => 'a = "JSON.parse" [@@bs.val];
};

module Date = {
  type t;

  external make : unit => t = "Date" [@@bs.new];
  external makeWithValue : float => t = "Date" [@@bs.new];
  external makeWithYearMonth : float => float => t = "Date" [@@bs.new];
  external makeWithYearMonthDate : float => float => float => t = "Date" [@@bs.new];
  external makeWithYearMonthDateHours : float => float => float => float => t = "Date" [@@bs.new];
  external makeWithYearMonthDateHoursMinutes : float => float => float => float => float => t = "Date" [@@bs.new];
  external makeWithYearMonthDateHoursMinutesSeconds : float => float => float => float => float => float => t = "Date" [@@bs.new];
  external utc : unit => float = "" [@@bs.val "Date.utc"];
  external utcWithYearMonth : float => float => t = "" [@@bs.val "Date.utc"];
  external utcWithYearMonthDate : float => float => float => t = "" [@@bs.val "Date.utc"];
  external utcWithYearMonthDateHours : float => float => float => float => t = "" [@@bs.val "Date.utc"];
  external utcWithYearMonthDateHoursMinutes : float => float => float => float => float => t = "" [@@bs.val "Date.utc"];
  external utcWithYearMonthDateHoursMinutesSeconds : float => float => float => float => float => float => t = "" [@@bs.val "Date.utc"];
  external now : unit => float = "" [@@bs.val "Date.now"];
  external parse : string => t = "Date" [@@bs.new];

  external getDate : t => float = "" [@@bs.send "getDate"];
  external getDay : t => float = "" [@@bs.send "getDay"];
  external getFullYear : t => float = "" [@@bs.send "getFullYear"];
  external getHours : t => float = "" [@@bs.send "getHours"];
  external getMilliseconds : t => float = "" [@@bs.send "getMilliseconds"];
  external getMinutes : t => float = "" [@@bs.send "getMinutes"];
  external getMonth : t => float = "" [@@bs.send "getMonth"];
  external getSeconds : t => float = "" [@@bs.send "getSeconds"];
  external getTime : t => float = "" [@@bs.send "getTime"];
  external getTimezoneOffset : t => float = "" [@@bs.send "getTimezoneOffset"];
  external getUTCDate : t => float = "" [@@bs.send "getUTCDate"];
  external getUTCDay : t => float = "" [@@bs.send "getUTCDay"];
  external getUTCFullYear : t => float = "" [@@bs.send "getUTCFullYear"];
  external getUTCHours : t => float = "" [@@bs.send "getUTCHours"];
  external getUTCMilliseconds : t => float = "" [@@bs.send "getUTCMilliseconds"];
  external getUTCMinutes : t => float = "" [@@bs.send "getUTCMinutes"];
  external getUTCMonth : t => float = "" [@@bs.send "getUTCMonth"];
  external getUTCSeconds : t => float = "" [@@bs.send "getUTCSeconds"];
  external getYear : t => float = "" [@@bs.send "getYear"]; /* deprecated */

  external setDate : t => float => float = "" [@@bs.send "setDate"];
  external setFullYear : t => float => float = "" [@@bs.send "setFullYear"];
  external setFullYearMonth : t => float => float => float = "" [@@bs.send "setFullYear"];
  external setFullYearMonthDay : t => float => float => float => float = "" [@@bs.send "setFullYear"];
  external setHours : t => float => float = "" [@@bs.send "setHours"];
  external setHoursMinutes : t => float => float => float = "" [@@bs.send "setHours"];
  external setHoursMinutesSeconds : t => float => float => float => float = "" [@@bs.send "setHours"];
  external setHoursMinutesSecondsMilliseconds : t => float => float => float => float => float = "" [@@bs.send "setHours"];
  external setMilliseconds : t => float => float = "" [@@bs.send "setMilliseconds"];
  external setMinutes : t => float => float = "" [@@bs.send "setMinutes"];
  external setMinutesSeconds : t => float => float => float = "" [@@bs.send "setMinutes"];
  external setMinutesSecondsMilliseconds : t => float => float => float => float = "" [@@bs.send "setMinutes"];
  external setMonth : t => float => float = "" [@@bs.send "setMonth"];
  external setMonthDay : t => float => float => float = "" [@@bs.send "setMonth"];
  external setSeconds : t => float => float = "" [@@bs.send "setSeconds"];
  external setSecondsMilliseconds : t => float => float => float = "" [@@bs.send "setSeconds"];
  external setTime : t => float => float = "" [@@bs.send "setTime"];
  external setUTCDate : t => float => float = "" [@@bs.send "setUTCDate"];
  external setUTCFullYear : t => float => float = "" [@@bs.send "setUTCFullYear"];
  external setUTCFullYearMonth : t => float => float => float = "" [@@bs.send "setUTCFullYear"];
  external setUTCFullYearMonthDay : t => float => float => float => float = "" [@@bs.send "setUTCFullYear"];
  external setUTCHours : t => float => float = "" [@@bs.send "setUTCHours"];
  external setUTCHoursMinutes : t => float => float => float = "" [@@bs.send "setUTCHours"];
  external setUTCHoursMinutesSeconds : t => float => float => float => float = "" [@@bs.send "setUTCHours"];
  external setUTCHoursMinutesSecondsMilliseconds : t => float => float => float => float => float = "" [@@bs.send "setUTCHours"];
  external setUTCMilliseconds : t => float => float = "" [@@bs.send "setUTCMilliseconds"];
  external setUTCMinutes : t => float => float = "" [@@bs.send "setUTCMinutes"];
  external setUTCMinutesSeconds : t => float => float => float = "" [@@bs.send "setUTCMinutes"];
  external setUTCMinutesSecondsMilliseconds : t => float => float => float => float = "" [@@bs.send "setUTCMinutes"];
  external setUTCMonth : t => float => float = "" [@@bs.send "setUTCMonth"];
  external setUTCMonthDay : t => float => float => float = "" [@@bs.send "setUTCMonth"];
  external setUTCSeconds : t => float => float = "" [@@bs.send "setUTCSeconds"];
  external setUTCSecondsMilliseconds : t => float => float => float = "" [@@bs.send "setUTCSeconds"];
  external setUTCTime : t => float => float = "" [@@bs.send "setUTCTime"];
  external setYear : t => float => float = "" [@@bs.send "setYear"]; /* deprecated */

  external toDateString : t => string = "" [@@bs.send "toDateString"];
  external toGMTString : t => string = "" [@@bs.send "toGMTString"]; /* deprecated */
  external toISOString : t => string = "" [@@bs.send "toISOString"];
  external toJSON : t => string = "" [@@bs.send "toJSON"];
  external toLocaleDateString : t => string = "" [@@bs.send "toLocaleDateString"]; /* TODO: has overloads with somewhat poor browser support */
  external toLocaleString: t => string = "" [@@bs.send "toLocaleString"]; /* TODO: has overloads with somewhat poor browser support */
  external toLocaleTimeString: t => string = "" [@@bs.send "toLocaleTimeString"]; /* TODO: has overloads with somewhat poor browser support */
  external toString : t => string = "" [@@bs.send "toString"];
  external toTimeString : t => string = "" [@@bs.send "toTimeString"];
  external toUTCString : t => string = "" [@@bs.send "toUTCString"];

  external valueOf : t => float = "" [@@bs.send "valueOf"];
};

module Object = {
  external assign : Js.t {..} => Js.t {..} => Js.t {..} => Js.t {..} = "Object.assign" [@@bs.val];
};

module Float32Array = {
  type t;
  external make : array float => t = "Float32Array" [@@bs.new];
};

module Uint16Array = {
  type t;
  external make : array int => t = "Uint16Array" [@@bs.new];
};

module GL = {
  type glT;
  type programT;
  type shaderT;
  type bufferT;
  /* ClearBufferMask */
  let _DEPTH_BUFFER_BIT: int = 256;
  let _STENCIL_BUFFER_BIT: int = 1024;
  let _COLOR_BUFFER_BIT: int = 16384;
  /* BeginMode */
  let _POINTS: int = 0;
  let _LINES: int = 1;
  let _LINE_LOOP: int = 2;
  let _LINE_STRIP: int = 3;
  let _TRIANGLES: int = 4;
  let _TRIANGLE_STRIP: int = 5;
  let _TRIANGLE_FAN: int = 6;
  /* TEXTURE_2D */
  let _CULL_FACE: int = 2884;
  let _BLEND: int = 3042;
  let _DITHER: int = 3024;
  let _STENCIL_TEST: int = 2960;
  let _DEPTH_TEST: int = 2929;
  let _SCISSOR_TEST: int = 3089;
  let _POLYGON_OFFSET_FILL: int = 32823;
  let _SAMPLE_ALPHA_TO_COVERAGE: int = 32926;
  let _SAMPLE_COVERAGE: int = 32928;
  /* BlendingFactorDest */
  let _ZERO: int = 0;
  let _ONE: int = 1;
  let _SRC_COLOR: int = 768;
  let _ONE_MINUS_SRC_COLOR: int = 769;
  let _SRC_ALPHA: int = 770;
  let _ONE_MINUS_SRC_ALPHA: int = 771;
  let _DST_ALPHA: int = 772;
  let _ONE_MINUS_DST_ALPHA: int = 773;
  /* DataType */
  let _BYTE: int = 5120;
  let _UNSIGNED_BYTE: int = 5121;
  let _SHORT: int = 5122;
  let _UNSIGNED_SHORT: int = 5123;
  let _INT: int = 5124;
  let _UNSIGNED_INT: int = 5125;
  let _FLOAT: int = 5126;
  /* CullFaceMode */
  let _FRONT: int = 1028;
  let _BACK: int = 1029;
  let _FRONT_AND_BACK: int = 1032;
  /* Shaders */
  let _FRAGMENT_SHADER: int = 35632;
  let _VERTEX_SHADER: int = 35633;
  /* Buffer Objects */
  let _ARRAY_BUFFER: int = 34962;
  let _ELEMENT_ARRAY_BUFFER: int = 34963;
  let _ARRAY_BUFFER_BINDING: int = 34964;
  let _ELEMENT_ARRAY_BUFFER_BINDING: int = 34965;
  let _STREAM_DRAW: int = 35040;
  let _STATIC_DRAW: int = 35044;
  let _DYNAMIC_DRAW: int = 35048;
  /* void clear(GLbitfield mask); */
  external clear : glT => int => unit = "clear" [@@bs.send];
  /* void clearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha); */
  external clearColor : glT => float => float => float => float => unit = "clearColor" [@@bs.send];
  /* void enable(GLenum cap); */
  external enable : glT => int => unit = "enable" [@@bs.send];
  /* void disable(GLenum cap); */
  external disable : glT => int => unit = "disable" [@@bs.send];
  /* void blendFunc(GLenum sfactor, GLenum dfactor); */
  external blendFunc : glT => int => int => unit = "blendFunc" [@@bs.send];
  /* void cullFace(GLenum mode); */
  external cullFace : glT => int => unit = "cullFace" [@@bs.send];
  external createBuffer : glT => bufferT = "createBuffer" [@@bs.send];
  external deleteBuffer : glT => bufferT => unit = "createBuffer" [@@bs.send];
  external bindBuffer : glT => int => bufferT => unit = "bindBuffer" [@@bs.send];
  external bufferData : glT => int => Uint16Array.t => int => unit = "bufferData" [@@bs.send];
  external bufferFloatData : glT => int => Float32Array.t => int => unit =
    "bufferData" [@@bs.send];
  external createProgram : glT => programT = "createProgram" [@@bs.send];
  external linkProgram : glT => programT => unit = "linkProgram" [@@bs.send];
  external useProgram : glT => programT => unit = "useProgram" [@@bs.send];
  external getProgramInfoLog : glT => programT => string = "getProgramInfoLog" [@@bs.send];
  external bindAttribLocation : glT => programT => int => string => unit =
    "bindAttribLocation" [@@bs.send];
  external createShader : glT => int => shaderT = "createShader" [@@bs.send];
  external shaderSource : glT => shaderT => string => unit = "shaderSource" [@@bs.send];
  external compileShader : glT => shaderT => unit = "compileShader" [@@bs.send];
  external attachShader : glT => programT => shaderT => unit = "attachShader" [@@bs.send];
  external getShaderInfoLog : glT => shaderT => string = "getShaderInfoLog" [@@bs.send];
  /* void drawElements(GLenum mode, GLsizei count, GLenum type, GLintptr offset); */
  external drawElements : glT => int => int => int => int => unit = "drawElements" [@@bs.send];
  /* void enableVertexAttribArray(GLuint index); */
  external enableVertexAttribArray : glT => int => unit = "enableVertexAttribArray" [@@bs.send];
  /* void vertexAttribPointer(GLuint indx, GLint size, GLenum type,
     GLboolean normalized, GLsizei stride, GLintptr offset); */
  external vertexAttribPointer : glT => int => int => int => Js.boolean => int => int => unit =
    "vertexAttribPointer" [@@bs.send];
};

module Document = {
  type element;
  external getElementById : string => element = "document.getElementById" [@@bs.val];
  /* not really an array */
  external getElementsByClassName : string => array element =
    "document.getElementsByClassName" [@@bs.val];
  external appendChild : element => element => unit = "appendChild" [@@bs.send];
  /* Should be on CanvasElement */
  external getContext : element => string => GL.glT = "getContext" [@@bs.send];
  external contains : element => element => Js.boolean = "contains" [@@bs.send];
  external value : element => string = "value" [@@bs.get];
  external checked : element => Js.boolean = "checked" [@@bs.get];
};

module LocalStorage = {
  external getItem : string => Js.null string = "localStorage.getItem" [@@bs.val];
  external setItem : string => string => unit = "localStorage.setItem" [@@bs.val];
  external removeItem : string => unit = "localStorage.removeItem" [@@bs.val];
  external clear : unit => unit = "localStorage.clear" [@@bs.val];
  external key : int => 'a = "localStorage.key" [@@bs.val];
  let length () :int => [%bs.raw {|localStorage.length|}];
};

module SessionStorage = {
  external getItem : string => Js.null string = "sessionStorage.getItem" [@@bs.val];
  external setItem : string => string => unit = "sessionStorage.setItem" [@@bs.val];
  external removeItem : string => unit = "sessionStorage.removeItem" [@@bs.val];
  external clear : unit => unit = "sessionStorage.clear" [@@bs.val];
  external key : int => 'a = "sessionStorage.key" [@@bs.val];
  let length () :int => [%bs.raw {|sessionStorage.length|}];
};

module Promise = {
  type promiseT 'a;
  type errorT;
  external thenDo : promiseT 'a => ('a => 'b) => promiseT 'b = "then" [@@bs.send];
  external catchError : promiseT 'a => (errorT => unit) => promiseT 'a = "catch" [@@bs.send];
};

module Response = {
  type responseT;
  /* TODO: type Headers */
  external ok : responseT => Js.boolean = "ok" [@@bs.get];
  external redirected : responseT => Js.boolean = "redirected" [@@bs.get];
  external status : responseT => int = "status" [@@bs.get];
  external statusText : responseT => string = "statusText" [@@bs.get];
  external type_ : responseT => string = "type" [@@bs.get];
  external url : responseT => string = "url" [@@bs.get];

  /** body getters **/
  external json : responseT => Js.t 'a = "json" [@@bs.send];
  external text : responseT => string = "text" [@@bs.send];
};

external fetch : string => Promise.promiseT Response.responseT = "fetch" [@@bs.val];
