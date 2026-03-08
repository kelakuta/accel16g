accel16g.enable16g()

input.setAccelerometerRange(AcceleratorRange.EightG)

basic.forever(function () {
    serial.writeValue("x", input.acceleration(Dimension.X))
    basic.pause(20)
})