define { %TupleHeader, i64, { %TupleHeader, i2, i64 }* }* @Microsoft__Quantum__Testing__QIR__TestUdtArgument__body() #0 {
entry:
  %0 = call %Callable* @__quantum__rt__callable_create([4 x void (%TupleHeader*, %TupleHeader*, %TupleHeader*)*]* @Microsoft__Quantum__Testing__QIR__TestType1, %TupleHeader* null)
  %udt1 = call i64 @Microsoft__Quantum__Testing__QIR__Build1__body(%Callable* %0)
  %1 = load i2, i2* @PauliX
  %2 = call %TupleHeader* @__quantum__rt__tuple_create(i64 ptrtoint ({ %TupleHeader, %Callable*, i2 }* getelementptr ({ %TupleHeader, %Callable*, i2 }, { %TupleHeader, %Callable*, i2 }* null, i32 1) to i64))
  %3 = bitcast %TupleHeader* %2 to { %TupleHeader, %Callable*, i2 }*
  %4 = getelementptr { %TupleHeader, %Callable*, i2 }, { %TupleHeader, %Callable*, i2 }* %3, i64 0, i32 1
  %5 = call %Callable* @__quantum__rt__callable_create([4 x void (%TupleHeader*, %TupleHeader*, %TupleHeader*)*]* @Microsoft__Quantum__Testing__QIR__TestType2, %TupleHeader* null)
  store %Callable* %5, %Callable** %4
  %6 = getelementptr { %TupleHeader, %Callable*, i2 }, { %TupleHeader, %Callable*, i2 }* %3, i64 0, i32 2
  store i2 %1, i2* %6
  %7 = call %Callable* @__quantum__rt__callable_create([4 x void (%TupleHeader*, %TupleHeader*, %TupleHeader*)*]* @PartialApplication__1, %TupleHeader* %2)
  %udt2 = call { %TupleHeader, i2, i64 }* @Microsoft__Quantum__Testing__QIR__Build2__body(%Callable* %7)
  %8 = call %TupleHeader* @__quantum__rt__tuple_create(i64 ptrtoint ({ %TupleHeader, i64, { %TupleHeader, i2, i64 }* }* getelementptr ({ %TupleHeader, i64, { %TupleHeader, i2, i64 }* }, { %TupleHeader, i64, { %TupleHeader, i2, i64 }* }* null, i32 1) to i64))
  %9 = bitcast %TupleHeader* %8 to { %TupleHeader, i64, { %TupleHeader, i2, i64 }* }*
  %10 = bitcast i64 %udt1 to { %TupleHeader, i64 }*
  %11 = getelementptr { %TupleHeader, i64 }, { %TupleHeader, i64 }* %10, i64 0, i32 1
  %12 = load i64, i64* %11
  %13 = getelementptr { %TupleHeader, i64, { %TupleHeader, i2, i64 }* }, { %TupleHeader, i64, { %TupleHeader, i2, i64 }* }* %9, i64 0, i32 1
  store i64 %12, i64* %13
  %14 = getelementptr { %TupleHeader, i64, { %TupleHeader, i2, i64 }* }, { %TupleHeader, i64, { %TupleHeader, i2, i64 }* }* %9, i64 0, i32 2
  store { %TupleHeader, i2, i64 }* %udt2, { %TupleHeader, i2, i64 }** %14
  call void @__quantum__rt__callable_unreference(%Callable* %0)
  call void @__quantum__rt__callable_unreference(%Callable* %7)
  ret { %TupleHeader, i64, { %TupleHeader, i2, i64 }* }* %9
}