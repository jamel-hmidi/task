/**
  ****************************************************************************
  * @file    main.c
  * @author  Jamel Hmidi
  * @brief   Task
  * @version V1.0.0
  * @date    27-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
#define INTEL 1

#define A 1
#define B 3

//Calculate the sum or multiplication
#define CALCUL(x,y) (INTEL)?(x+y):(x*y) //if INTEL True ==> x+y
                                        // if INTEL False ==> x*y

//Compare two numbers
#define COMP(x,y) (INTEL)?((x<y)? x: y):((x>y)? x: y) // if INTEL TRUE: MIN
                                                      // if INTEL FALSE: MAX



#define OTHERS

/* Private function prototypes -----------------------------------------------*/

/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
  int calcul = CALCUL(A,B);
  int comp =COMP(A,B);

  while(1)
  {
  }
}

/**************************************END OF FILE**************************************/