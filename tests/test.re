{
  open ReasonJs;

  let _ = Date.make ();
  let _ = Date.makeWithValue 0.;
  let _ = Date.makeWithYearMonth 0. 1.;
  let _ = Date.makeWithYearMonthDate 0. 1. 2.;
  let _ = Date.makeWithYearMonthDateHours 0. 1. 2. 3.;
  let _ = Date.makeWithYearMonthDateHoursMinutes 0. 1. 2. 3. 4.;
  let _ = Date.makeWithYearMonthDateHoursMinutesSeconds 0. 1. 2. 3. 4. 5.;
  let _ = Date.utc ();
  let _ = Date.utcWithYearMonth 0. 1.;
  let _ = Date.utcWithYearMonthDate 0. 1. 2.;
  let _ = Date.utcWithYearMonthDateHours 0. 1. 2. 3.;
  let _ = Date.utcWithYearMonthDateHoursMinutes 0. 1. 2. 3. 4.;
  let _ = Date.utcWithYearMonthDateHoursMinutesSeconds 0. 1. 2. 3. 4. 5.;
  let _ = Date.now ();
  let date = Date.parse "Dec 25, 1995";

  let _ = Date.getDate date;
  let _ = Date.getDay date;
  let _ = Date.getFullYear date;
  let _ = Date.getHours date;
  let _ = Date.getMilliseconds date;
  let _ = Date.getMinutes date;
  let _ = Date.getMonth date;
  let _ = Date.getSeconds date;
  let _ = Date.getTime date;
  let _ = Date.getTimezoneOffset date;
  let _ = Date.getUTCDate date;
  let _ = Date.getUTCDay date;
  let _ = Date.getUTCFullYear date;
  let _ = Date.getUTCHours date;
  let _ = Date.getUTCMilliseconds date;
  let _ = Date.getUTCMinutes date;
  let _ = Date.getUTCMonth date;
  let _ = Date.getUTCSeconds date;
  let _ = Date.getYear date;

  let _ = Date.setDate date 0.;
  let _ = Date.setFullYear date 0.;
  let _ = Date.setFullYearMonth date 0. 1.;
  let _ = Date.setFullYearMonthDay date 0. 1. 2.;
  let _ = Date.setHours date 0.;
  let _ = Date.setHoursMinutes date 0. 1.;
  let _ = Date.setHoursMinutesSeconds date 0. 1. 2.;
  let _ = Date.setHoursMinutesSecondsMilliseconds date 0. 1. 2. 3.;
  let _ = Date.setMilliseconds date 0.;
  let _ = Date.setMinutes date 0.;
  let _ = Date.setMinutesSeconds date 0. 1.;
  let _ = Date.setMinutesSecondsMilliseconds date 0. 1. 2.;
  let _ = Date.setMonth date 0.;
  let _ = Date.setMonthDay date 0. 1.;
  let _ = Date.setSeconds date 0.;
  let _ = Date.setSecondsMilliseconds date 0. 1.;
  let _ = Date.setTime date 0.;
  let _ = Date.setUTCDate date 0.;
  let _ = Date.setUTCFullYear date 0.;
  let _ = Date.setUTCFullYearMonth date 0. 1.;
  let _ = Date.setUTCFullYearMonthDay date 0. 1. 2.;
  let _ = Date.setUTCHours date 0.;
  let _ = Date.setUTCHoursMinutes date 0. 1.;
  let _ = Date.setUTCHoursMinutesSeconds date 0. 1. 2.;
  let _ = Date.setUTCHoursMinutesSecondsMilliseconds date 0. 1. 2. 3.;
  let _ = Date.setUTCMilliseconds date 0.;
  let _ = Date.setUTCMinutes date 0.;
  let _ = Date.setUTCMinutesSeconds date 0. 1.;
  let _ = Date.setUTCMinutesSecondsMilliseconds date 0. 1. 2.;
  let _ = Date.setUTCMonth date 0.;
  let _ = Date.setUTCMonthDay date 0. 1.;
  let _ = Date.setUTCSeconds date 0.;
  let _ = Date.setUTCSecondsMilliseconds date 0. 1.;
  let _ = Date.setUTCTime date 0.;

  let _ = Date.toDateString date;
  let _ = Date.toGMTString date;
  let _ = Date.toISOString date;
  let _ = Date.toJSON date;
  let _ = Date.toLocaleDateString date;
  let _ = Date.toLocaleString date;
  let _ = Date.toLocaleTimeString date;
  let _ = Date.toString date;
  let _ = Date.toTimeString date;
  let _ = Date.toUTCString date;

  let _ = Date.valueOf date;


  let _ = setInterval (fun () => Js.log "hello!") 1000;

  let _ = Window.(innerWidth window);

  let _ = Window.(innerHeight window);

  let _ = Document.getElementById "foo" |> Document.value;

  Window.(addEventListener window "click" (fun () => print_endline "asd"));

  Window.(onLoad window (fun () => print_endline "load"));
  let p = fetch "/greatings";

  let p2 =
    Promise.(thenDo (thenDo p (fun res => Response.text res)) (fun text => print_endline text));

  let _ = Promise.catchError p2 (fun err => Js.log err);

  let _ = Promise.(thenDo (thenDo p (fun res => Response.json res)) (fun json => Js.log json));
}
