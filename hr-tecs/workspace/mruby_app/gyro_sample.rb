include EV3RT_TECS

begin
    LCD.font=:medium

    gyro_port = :port_4
    $gyro_sensor = GyroSensor.new(gyro_port)
    
    LCD.draw("gyro sample", 0, 0)
    LCD.draw("port #{gyro_port}", 0,2)
    
    LCD.draw("gyro reset #{$gyro_sensor.reset}", 0,3)
    
    loop{
        gyro = $gyro_sensor.angle
        LCD.draw("gyro = #{gyro}  ", 0, 4)
        RTOS.delay(10)
    }
rescue => e
    LCD.error_puts e
end

    