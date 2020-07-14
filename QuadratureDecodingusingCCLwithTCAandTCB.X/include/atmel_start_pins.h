/*
 * Code generated from START.
 *
 * This file will be overwritten when reconfiguring your START project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <port.h>

/**
 * \brief Set Edge_on_B_from_TCB1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void Edge_on_B_from_TCB1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set Edge_on_B_from_TCB1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void Edge_on_B_from_TCB1_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(3, dir);
}

/**
 * \brief Set Edge_on_B_from_TCB1 input/sense configuration
 *
 * Enable/disable Edge_on_B_from_TCB1 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void Edge_on_B_from_TCB1_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(3, isc);
}

/**
 * \brief Set Edge_on_B_from_TCB1 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on Edge_on_B_from_TCB1 is inverted
 *                     false = I/O on Edge_on_B_from_TCB1 is not inverted
 */
static inline void Edge_on_B_from_TCB1_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(3, inverted);
}

/**
 * \brief Set Edge_on_B_from_TCB1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void Edge_on_B_from_TCB1_set_level(const bool level)
{
	PORTA_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on Edge_on_B_from_TCB1
 *
 * Toggle the pin level
 */
static inline void Edge_on_B_from_TCB1_toggle_level()
{
	PORTA_toggle_pin_level(3);
}

/**
 * \brief Get level on Edge_on_B_from_TCB1
 *
 * Reads the level on a pin
 */
static inline bool Edge_on_B_from_TCB1_get_level()
{
	return PORTA_get_pin_level(3);
}

/**
 * \brief Set Direction pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void Direction_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set Direction data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void Direction_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(4, dir);
}

/**
 * \brief Set Direction input/sense configuration
 *
 * Enable/disable Direction digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void Direction_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(4, isc);
}

/**
 * \brief Set Direction inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on Direction is inverted
 *                     false = I/O on Direction is not inverted
 */
static inline void Direction_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(4, inverted);
}

/**
 * \brief Set Direction level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void Direction_set_level(const bool level)
{
	PORTA_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on Direction
 *
 * Toggle the pin level
 */
static inline void Direction_toggle_level()
{
	PORTA_toggle_pin_level(4);
}

/**
 * \brief Get level on Direction
 *
 * Reads the level on a pin
 */
static inline bool Direction_get_level()
{
	return PORTA_get_pin_level(4);
}

/**
 * \brief Set Edge_on_A_from_TCB0 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void Edge_on_A_from_TCB0_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set Edge_on_A_from_TCB0 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void Edge_on_A_from_TCB0_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(5, dir);
}

/**
 * \brief Set Edge_on_A_from_TCB0 input/sense configuration
 *
 * Enable/disable Edge_on_A_from_TCB0 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void Edge_on_A_from_TCB0_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(5, isc);
}

/**
 * \brief Set Edge_on_A_from_TCB0 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on Edge_on_A_from_TCB0 is inverted
 *                     false = I/O on Edge_on_A_from_TCB0 is not inverted
 */
static inline void Edge_on_A_from_TCB0_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(5, inverted);
}

/**
 * \brief Set Edge_on_A_from_TCB0 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void Edge_on_A_from_TCB0_set_level(const bool level)
{
	PORTA_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on Edge_on_A_from_TCB0
 *
 * Toggle the pin level
 */
static inline void Edge_on_A_from_TCB0_toggle_level()
{
	PORTA_toggle_pin_level(5);
}

/**
 * \brief Get level on Edge_on_A_from_TCB0
 *
 * Reads the level on a pin
 */
static inline bool Edge_on_A_from_TCB0_get_level()
{
	return PORTA_get_pin_level(5);
}

/**
 * \brief Set Quad_input_A pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void Quad_input_A_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set Quad_input_A data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void Quad_input_A_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(6, dir);
}

/**
 * \brief Set Quad_input_A input/sense configuration
 *
 * Enable/disable Quad_input_A digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void Quad_input_A_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(6, isc);
}

/**
 * \brief Set Quad_input_A inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on Quad_input_A is inverted
 *                     false = I/O on Quad_input_A is not inverted
 */
static inline void Quad_input_A_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(6, inverted);
}

/**
 * \brief Set Quad_input_A level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void Quad_input_A_set_level(const bool level)
{
	PORTA_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on Quad_input_A
 *
 * Toggle the pin level
 */
static inline void Quad_input_A_toggle_level()
{
	PORTA_toggle_pin_level(6);
}

/**
 * \brief Get level on Quad_input_A
 *
 * Reads the level on a pin
 */
static inline bool Quad_input_A_get_level()
{
	return PORTA_get_pin_level(6);
}

/**
 * \brief Set Count pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void Count_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(7, pull_mode);
}

/**
 * \brief Set Count data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void Count_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(7, dir);
}

/**
 * \brief Set Count input/sense configuration
 *
 * Enable/disable Count digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void Count_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(7, isc);
}

/**
 * \brief Set Count inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on Count is inverted
 *                     false = I/O on Count is not inverted
 */
static inline void Count_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(7, inverted);
}

/**
 * \brief Set Count level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void Count_set_level(const bool level)
{
	PORTA_set_pin_level(7, level);
}

/**
 * \brief Toggle output level on Count
 *
 * Toggle the pin level
 */
static inline void Count_toggle_level()
{
	PORTA_toggle_pin_level(7);
}

/**
 * \brief Get level on Count
 *
 * Reads the level on a pin
 */
static inline bool Count_get_level()
{
	return PORTA_get_pin_level(7);
}

/**
 * \brief Set Quad_input_B pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void Quad_input_B_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set Quad_input_B data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void Quad_input_B_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(6, dir);
}

/**
 * \brief Set Quad_input_B input/sense configuration
 *
 * Enable/disable Quad_input_B digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void Quad_input_B_set_isc(const PORT_ISC_t isc)
{
	PORTB_pin_set_isc(6, isc);
}

/**
 * \brief Set Quad_input_B inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on Quad_input_B is inverted
 *                     false = I/O on Quad_input_B is not inverted
 */
static inline void Quad_input_B_set_inverted(const bool inverted)
{
	PORTB_pin_set_inverted(6, inverted);
}

/**
 * \brief Set Quad_input_B level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void Quad_input_B_set_level(const bool level)
{
	PORTB_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on Quad_input_B
 *
 * Toggle the pin level
 */
static inline void Quad_input_B_toggle_level()
{
	PORTB_toggle_pin_level(6);
}

/**
 * \brief Get level on Quad_input_B
 *
 * Reads the level on a pin
 */
static inline bool Quad_input_B_get_level()
{
	return PORTB_get_pin_level(6);
}

/**
 * \brief Set Edge_on_B_to_CCL pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void Edge_on_B_to_CCL_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set Edge_on_B_to_CCL data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void Edge_on_B_to_CCL_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(4, dir);
}

/**
 * \brief Set Edge_on_B_to_CCL input/sense configuration
 *
 * Enable/disable Edge_on_B_to_CCL digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void Edge_on_B_to_CCL_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(4, isc);
}

/**
 * \brief Set Edge_on_B_to_CCL inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on Edge_on_B_to_CCL is inverted
 *                     false = I/O on Edge_on_B_to_CCL is not inverted
 */
static inline void Edge_on_B_to_CCL_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(4, inverted);
}

/**
 * \brief Set Edge_on_B_to_CCL level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void Edge_on_B_to_CCL_set_level(const bool level)
{
	PORTC_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on Edge_on_B_to_CCL
 *
 * Toggle the pin level
 */
static inline void Edge_on_B_to_CCL_toggle_level()
{
	PORTC_toggle_pin_level(4);
}

/**
 * \brief Get level on Edge_on_B_to_CCL
 *
 * Reads the level on a pin
 */
static inline bool Edge_on_B_to_CCL_get_level()
{
	return PORTC_get_pin_level(4);
}

/**
 * \brief Set Edge_on_A_to_CCL pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void Edge_on_A_to_CCL_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set Edge_on_A_to_CCL data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void Edge_on_A_to_CCL_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(5, dir);
}

/**
 * \brief Set Edge_on_A_to_CCL input/sense configuration
 *
 * Enable/disable Edge_on_A_to_CCL digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void Edge_on_A_to_CCL_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(5, isc);
}

/**
 * \brief Set Edge_on_A_to_CCL inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on Edge_on_A_to_CCL is inverted
 *                     false = I/O on Edge_on_A_to_CCL is not inverted
 */
static inline void Edge_on_A_to_CCL_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(5, inverted);
}

/**
 * \brief Set Edge_on_A_to_CCL level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void Edge_on_A_to_CCL_set_level(const bool level)
{
	PORTC_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on Edge_on_A_to_CCL
 *
 * Toggle the pin level
 */
static inline void Edge_on_A_to_CCL_toggle_level()
{
	PORTC_toggle_pin_level(5);
}

/**
 * \brief Get level on Edge_on_A_to_CCL
 *
 * Reads the level on a pin
 */
static inline bool Edge_on_A_to_CCL_get_level()
{
	return PORTC_get_pin_level(5);
}

#endif /* ATMEL_START_PINS_H_INCLUDED */
