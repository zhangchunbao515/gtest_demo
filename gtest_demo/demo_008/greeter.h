/**********************************************************************/
/** @file   greeter.h
 ** @brief  Greeter API -a very cheerful greeting module
 ** @author itayg
 *************************************************************************/

#ifndef _GREETER_H_
#define _GREETER_H_

#ifdef __cplusplus
extern "C" {
#endif


typedef enum
{
    GREETER_SUCCESS,
    GREETER_MALLOC_FAILED,
    GREETER_FAILURE,
} greeter_retval;

typedef struct
{
    const char * greet_string;
} greeter_t;


greeter_retval init_greeter(const char * greet_string, greeter_t ** result_greeter);
void destroy_greeter(greeter_t * greeter);
greeter_retval greet(greeter_t * greeter);


#ifdef __cplusplus
}
#endif

#endif /* _GREETER_H_ */
