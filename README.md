# ESC Control with STM32

This project demonstrates how to generate PWM signals using STM32 microcontrollers to control Electronic Speed Controllers (ESCs) for brushless DC motors.

## 🎯 Purpose

- Control motor speed using PWM output
- Simulate real-time ESC commands
- Practice using STM32 timers and HAL drivers

## 🔧 Hardware Used

- STM32F103C8T6 "Blue Pill"
- BLDC Motor
- ESC (e.g., BLHeli)
- Power Supply (e.g., 3S/4S LiPo)
- Optional: Oscilloscope for pulse monitoring

## 📐 Working Principle

The STM32 microcontroller generates a 50Hz PWM signal using Timer2.
The duty cycle is adjusted between 1000μs (min throttle) and 2000μs (max throttle),
which are standard for most ESCs.

## 💾 File Structure

