/* Copyright 2014, Your Name <youremail@domain.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

/** \brief Short description of this file
 **
 ** Long description of this file
 **
 **/

/** \addtogroup project
 ** @{ */
/** \addtogroup module
 ** @{ */

/*==================[inclusions]=============================================*/
#include "operaciones.h"

/*==================[macros and definitions]=================================*/

/*==================[internal functions declaration]=========================*/

/*==================[internal data definition]===============================*/

/*==================[external data definition]===============================*/

/*==================[internal functions definition]==========================*/

/*==================[external functions definition]==========================*/
extern int32_t funcion(uint8_t a, uint32_t b)
{
    return 0;
}

extern int16_t sumaint16 (int16_t numA, int16_t numB){
	int32_t suma;
	suma = (int32_t) numA + (int32_t) numB;
	if (suma > INT16_MAX)
		return INT16_MAX;
	else if (suma < INT16_MIN)
		return INT16_MIN;
	else
		return (int16_t) suma;

}

extern int16_t restaint16 (int16_t numA, int16_t numB){
	int32_t resta;
	resta = (int32_t) numA + (int32_t) numB;
	if (resta > INT16_MAX)
		return INT16_MAX;
	else if (resta < INT16_MIN)
		return INT16_MIN;
	else
		return (int16_t) resta;
}
/** @} doxygen end group definition */
/** @} doxygen end group definition */
/*==================[end of file]============================================*/
