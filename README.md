# ESC Control with STM32

This project demonstrates how to generate PWM signals using STM32 microcontrollers to control Electronic Speed Controllers (ESCs) for brushless DC motors.

## 🎯 Purpose

- Control motor speed via PWM signal
- Simulate real-time motor command output for embedded systems
- Learn how timers and GPIOs work on STM32

## 🧰 Hardware Used

- STM32F103C8T6 "Blue Pill" Board
- ESC (e.g., BLHeli)
- Brushless DC motor
- 12V power supply
- Oscilloscope (optional, for PWM testing)

## 📐 How It Works

The STM32 uses one of its hardware timers (e.g., TIM2) in PWM mode to generate 50 Hz pulses with pulse widths between 1000 µs – 2000 µs (standard for most ESCs).

## 💾 Files

- `main.c` – Main firmware logic
- `pwm_driver.c/h` – PWM initialization and pulse width setting
- `README.md` – Documentation

## 📄 License

This project is licensed under the MIT License. See LICENSE for details.
