<<<<<<< HEAD
#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x) ((x) < (0) ? -(x) : (x))
=======
#ifndef _FUNCTION_LIKE_MACRO_
#define _FUNCTION_LIKE_MACRO_

#define ABS(x) ((x) < (0) ? ((x) * (-1)) : (x))
>>>>>>> 8ff92e5207b80fcc87e26e2ccfe02d1b45b515a5

#endif
