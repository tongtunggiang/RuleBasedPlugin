   /*******************************************************/
   /*      "C" Language Integrated Production System      */
   /*                                                     */
   /*               CLIPS Version 6.30  08/16/14          */
   /*                                                     */
   /*                                                     */
   /*******************************************************/

/*************************************************************/
/* Purpose:                                                  */
/*                                                           */
/* Principal Programmer(s):                                  */
/*      Brian L. Dantes                                      */
/*                                                           */
/* Contributing Programmer(s):                               */
/*                                                           */
/* Revision History:                                         */
/*                                                           */
/*      6.23: Corrected compilation errors for files         */
/*            generated by constructs-to-c. DR0861           */
/*                                                           */                                      
/*      6.24: The DescribeClass macros were incorrectly      */
/*            defined. DR0862                                */
/*                                                           */
/*            Added allowed-classes slot facet.              */
/*                                                           */
/*            Renamed BOOLEAN macro type to intBool.         */
/*                                                           */
/*      6.30: Added EnvSlotDefaultP function.                */
/*                                                           */
/*            Borland C (IBM_TBC) and Metrowerks CodeWarrior */
/*            (MAC_MCW, IBM_MCW) are no longer supported.    */
/*                                                           */
/*            Used gensprintf and genstrcat instead of       */
/*            sprintf and strcat.                            */
/*                                                           */
/*            Added const qualifiers to remove C++           */
/*            deprecation warnings.                          */
/*                                                           */
/*            Converted API macros to function calls.        */
/*                                                           */
/*************************************************************/

#ifndef _H_classexm
#define _H_classexm

#ifdef LOCALE
#undef LOCALE
#endif

#ifdef _CLASSEXM_SOURCE_
#define LOCALE
#else
#define LOCALE extern
#endif

#if DEBUGGING_FUNCTIONS

   LOCALE void                           BrowseClassesCommand(void *);
   LOCALE void                           EnvBrowseClasses(void *,const char *,void *);
   LOCALE void                           DescribeClassCommand(void *);
   LOCALE void                           EnvDescribeClass(void *,const char *,void *);

#endif /* DEBUGGING_FUNCTIONS */

   LOCALE const char                    *GetCreateAccessorString(void *);
   LOCALE void                          *GetDefclassModuleCommand(void *);
   LOCALE intBool                        SuperclassPCommand(void *);
   LOCALE intBool                        EnvSuperclassP(void *,void *,void *);
   LOCALE intBool                        SubclassPCommand(void *);
   LOCALE intBool                        EnvSubclassP(void *,void *,void *);
   LOCALE int                            SlotExistPCommand(void *);
   LOCALE intBool                        EnvSlotExistP(void *,void *,const char *,intBool);
   LOCALE int                            MessageHandlerExistPCommand(void *);
   LOCALE intBool                        SlotWritablePCommand(void *);
   LOCALE intBool                        EnvSlotWritableP(void *,void *,const char *);
   LOCALE intBool                        SlotInitablePCommand(void *);
   LOCALE intBool                        EnvSlotInitableP(void *,void *,const char *);
   LOCALE intBool                        SlotPublicPCommand(void *);
   LOCALE intBool                        EnvSlotPublicP(void *,void *,const char *);
   LOCALE intBool                        SlotDirectAccessPCommand(void *);
   LOCALE intBool                        EnvSlotDirectAccessP(void *,void *,const char *);
   LOCALE void                           SlotDefaultValueCommand(void *,DATA_OBJECT_PTR);
   LOCALE intBool                        EnvSlotDefaultValue(void *,void *,const char *,DATA_OBJECT_PTR);
   LOCALE int                            ClassExistPCommand(void *);
   LOCALE int                            EnvSlotDefaultP(void *,void *,const char *);
  
#if ALLOW_ENVIRONMENT_GLOBALS

#if DEBUGGING_FUNCTIONS
   LOCALE void                           BrowseClasses(const char *,void *);
   LOCALE void                           DescribeClass(const char *,void *);
#endif
   LOCALE intBool                        SlotDirectAccessP(void *,const char *);
   LOCALE intBool                        SlotExistP(void *,const char *,intBool);
   LOCALE intBool                        SlotInitableP(void *,const char *);
   LOCALE intBool                        SlotPublicP(void *,const char *);
   LOCALE int                            SlotDefaultP(void *,const char *);
   LOCALE intBool                        SlotWritableP(void *,const char *);
   LOCALE intBool                        SubclassP(void *,void *);
   LOCALE intBool                        SuperclassP(void *,void *);
   LOCALE intBool                        SlotDefaultValue(void *,const char *,DATA_OBJECT_PTR);

#endif /* ALLOW_ENVIRONMENT_GLOBALS */

#endif /* _H_classexm */
