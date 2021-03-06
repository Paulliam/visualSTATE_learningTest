/*****************************************************************************
* IAR Visual State Coder Generated Source File
* Generated by IAR Visual State 9.1.1.3863
* IAR Visual State Project File: <E:\work_ypl\1_WirelessSwitchboard\3sourcecode\visualSTATE\WorkspaceYPL.vsp>
* IAR Visual State Signature Generator: "81"
* Project Signature: "530ebf83d602e055941637a4b7ff4aa8"
*****************************************************************************/


/** @file
    System source file.
    Contains variable and function definitions for a system, including the 
    variable definition of the system class.
*/



/* *** include directives *** */


#include "SystemYPL.h"


/* *** type definitions *** */


/* Internal variable struct */

typedef struct vsIntVarType
{
  VS_UCHAR   i;
  VS_INT     nSet;
}
vsIntVarType;

/* Buffered internal variable struct */

typedef struct vsBufferedIntVarType
{
  VS_UCHAR   i;
}
vsBufferedIntVarType;


/* *** function declarations *** */


/* Trigger variable buffer wrapper functions */

static void vstriggerVB_0 (void);

/* Guard expression wrapper functions */

static VS_BOOL vsguardExpr_0 (void);

static VS_BOOL vsguardExpr_1 (void);

static VS_BOOL vsguardExpr_2 (void);

static VS_BOOL vsguardExpr_3 (void);

static VS_BOOL vsguardExpr_4 (void);

static VS_BOOL vsguardExpr_5 (void);

static VS_BOOL vsguardExpr_6 (void);

static VS_BOOL vsguardExpr_7 (void);

static VS_BOOL vsguardExpr_8 (void);

/* Action expression wrapper functions */

static void vsactionExpr_0 (void);

static void vsactionExpr_4 (void);

static void vsactionExpr_5 (void);

static void vsactionExpr_6 (void);


/* *** variable definitions *** */


VSDBExprFunctionType const vstriggerVB[1] = 
{
  &vstriggerVB_0
};

VSGuardExprFunctionType const vsguardExpr[9] = 
{
  &vsguardExpr_0, 
  &vsguardExpr_1, 
  &vsguardExpr_2, 
  &vsguardExpr_3, 
  &vsguardExpr_4, 
  &vsguardExpr_5, 
  &vsguardExpr_6, 
  &vsguardExpr_7, 
  &vsguardExpr_8
};

VSActionExprFunctionType const vsactionExpr[8] = 
{
  &vsactionExpr_0, 
  &RED_ON,         
  &BLUE_ON,        
  &Light,          
  &vsactionExpr_4, 
  &vsactionExpr_5, 
  &vsactionExpr_6, 
  &LED_OFF       
};

/* Internal variable definitions */

static vsIntVarType vsintVar;

/* External variable definitions */

VSExtVarType_SystemYPL vsextVar_SystemYPL = 
{
  1
};

/* System object variables */

VSSystemObject vsso;

/* System class variables */

VSSystemClass const vssc = 
{
  {
    0x000U, 0x001U, 0x006U, 0x00aU, 0x00fU, 0x012U, 0x014U, 0x015U, 0x019U, 
    0x01aU, 0x01bU, 0x020U, 0x025U, 0x02fU, 0x035U, 0x037U, 0x039U, 0x03bU, 
    0x03dU, 0x03eU, 0x040U, 0x041U, 0x042U, 0x044U, 0x045U, 0x045U, 0x045U, 
    0x049U
  },
  {
    0x000U, 0x000U, 0x001U, 0x038U, 0x000U, 0x010U, 0x001U, 0x037U, 0x001U, 
    0x036U, 0x000U, 0x001U, 0x037U, 0x036U, 0x090U, 0x001U, 0x037U, 0x002U, 
    0x018U, 0x019U, 0x035U, 0x050U, 0x001U, 0x036U, 0x002U, 0x017U, 0x035U, 
    0x010U, 0x001U, 0x035U, 0x001U, 0x036U, 0x010U, 0x001U, 0x035U, 0x007U, 
    0x037U, 0x004U, 0x001U, 0x034U, 0x036U, 0x012U, 0x000U, 0x001U, 0x034U, 
    0x033U, 0x000U, 0x001U, 0x033U, 0x032U, 0x000U, 0x001U, 0x032U, 0x031U, 
    0x000U, 0x001U, 0x031U, 0x032U, 0x000U, 0x001U, 0x012U, 0x034U, 0x010U, 
    0x001U, 0x030U, 0x003U, 0x02fU, 0x000U, 0x001U, 0x02fU, 0x030U, 0x010U, 
    0x001U, 0x02fU, 0x003U, 0x010U, 0x000U, 0x001U, 0x02eU, 0x02cU, 0x000U, 
    0x001U, 0x02dU, 0x02eU, 0x000U, 0x001U, 0x02cU, 0x02bU, 0x000U, 0x001U, 
    0x02bU, 0x02dU, 0x000U, 0x001U, 0x010U, 0x030U, 0x001U, 0x001U, 0x010U, 
    0x02dU, 0x02fU, 0x000U, 0x001U, 0x02aU, 0x039U, 0x000U, 0x001U, 0x029U, 
    0x028U, 0x000U, 0x001U, 0x028U, 0x029U, 0x000U, 0x001U, 0x00dU, 0x00cU, 
    0x000U, 0x001U, 0x027U, 0x026U, 0x000U, 0x001U, 0x026U, 0x027U, 0x000U, 
    0x001U, 0x00cU, 0x00dU, 0x000U, 0x001U, 0x00eU, 0x02aU, 0x000U, 0x001U, 
    0x025U, 0x03aU, 0x000U, 0x001U, 0x024U, 0x023U, 0x000U, 0x001U, 0x023U, 
    0x024U, 0x000U, 0x001U, 0x009U, 0x008U, 0x000U, 0x001U, 0x022U, 0x021U, 
    0x000U, 0x001U, 0x021U, 0x022U, 0x000U, 0x001U, 0x008U, 0x009U, 0x000U, 
    0x001U, 0x00aU, 0x025U, 0x000U, 0x001U, 0x020U, 0x01dU, 0x004U, 0x001U, 
    0x020U, 0x01bU, 0x01fU, 0x000U, 0x001U, 0x01fU, 0x01dU, 0x004U, 0x001U, 
    0x01fU, 0x01bU, 0x01eU, 0x000U, 0x001U, 0x01eU, 0x01dU, 0x000U, 0x001U, 
    0x01eU, 0x020U, 0x000U, 0x001U, 0x01dU, 0x020U, 0x000U, 0x001U, 0x01cU, 
    0x019U, 0x004U, 0x001U, 0x01cU, 0x01fU, 0x01bU, 0x000U, 0x001U, 0x01bU, 
    0x019U, 0x004U, 0x001U, 0x01bU, 0x01fU, 0x01aU, 0x000U, 0x001U, 0x01aU, 
    0x019U, 0x000U, 0x001U, 0x01aU, 0x01cU, 0x000U, 0x001U, 0x019U, 0x01cU, 
    0x000U, 0x001U, 0x018U, 0x017U, 0x000U, 0x001U, 0x016U, 0x015U, 0x002U, 
    0x001U, 0x002U, 0x017U, 0x015U, 0x014U, 0x000U, 0x001U, 0x014U, 0x013U, 
    0x000U, 0x002U, 0x013U, 0x016U, 0x018U, 0x010U, 0x001U, 0x011U, 0x000U, 
    0x00fU, 0x010U, 0x001U, 0x011U, 0x004U, 0x00bU, 0x008U, 0x001U, 0x00fU, 
    0x000U, 0x007U, 0x008U, 0x001U, 0x00fU, 0x001U, 0x006U, 0x008U, 0x001U, 
    0x00bU, 0x002U, 0x007U, 0x008U, 0x001U, 0x00bU, 0x003U, 0x006U, 0x000U, 
    0x001U, 0x007U, 0x004U, 0x000U, 0x001U, 0x006U, 0x004U, 0x008U, 0x001U, 
    0x004U, 0x006U, 0x011U, 0x008U, 0x001U, 0x004U, 0x007U, 0x00fU, 0x008U, 
    0x001U, 0x004U, 0x008U, 0x00bU, 0x000U, 0x001U, 0x003U, 0x001U, 0x018U, 
    0x000U, 0x001U, 0x004U, 0x005U, 0x018U, 0x000U, 0x001U, 0x005U, 0x006U, 
    0x000U, 0x001U, 0x001U, 0x003U, 0x010U, 0x000U, 0x007U
  },
  {
    0x0ffU, 0x000U, 0x0ffU, 0x0ffU, 0x0ffU, 0x0ffU, 0x0ffU, 0x0ffU, 0x0ffU, 
    0x0ffU, 0x0ffU, 0x0ffU, 0x0ffU, 0x0ffU, 0x0ffU, 0x0ffU, 0x0ffU, 0x0ffU, 
    0x0ffU, 0x0ffU, 0x0ffU, 0x0ffU, 0x0ffU, 0x0ffU, 0x0ffU, 0x0ffU, 0x0ffU
  },
  {
    0x003U, 0x011U, 0x016U, 0x018U, 0x013U, 0x01cU, 0x020U, 0x005U, 0x022U, 
    0x024U, 0x009U, 0x025U, 0x027U, 0x029U, 0x00dU, 0x02aU, 0x02eU, 0x030U, 
    0x032U, 0x034U, 0x037U, 0x038U
  },
  {
    0x000U, 0x001U, 0x002U, 0x003U, 0x002U, 0x005U, 0x006U, 0x005U, 0x008U, 
    0x009U, 0x008U, 0x008U, 0x00cU, 0x00dU, 0x00cU, 0x00cU, 0x010U, 0x010U, 
    0x012U, 0x012U, 0x014U, 0x000U
  },
  {
    0x000U, 0x000U, 0x002U, 0x002U, 0x000U, 0x005U, 0x005U, 0x000U, 0x008U, 
    0x009U, 0x00aU, 0x000U, 0x00cU, 0x00dU, 0x00eU, 0x000U, 0x010U, 0x000U, 
    0x012U, 0x000U, 0x000U, 0x000U
  },
  {
    0x015U, 0x000U, 0x004U, 0x000U, 0x001U, 0x007U, 0x001U, 0x001U, 0x00aU, 
    0x00aU, 0x00bU, 0x001U, 0x00eU, 0x00eU, 0x00fU, 0x001U, 0x011U, 0x001U, 
    0x013U, 0x004U, 0x004U, 0x002U, 0x002U, 0x003U, 0x003U, 0x005U, 0x005U, 
    0x005U, 0x005U, 0x006U, 0x006U, 0x006U, 0x006U, 0x008U, 0x008U, 0x009U, 
    0x009U, 0x00bU, 0x00cU, 0x00cU, 0x00dU, 0x00dU, 0x00fU, 0x010U, 0x010U, 
    0x010U, 0x010U, 0x011U, 0x011U, 0x012U, 0x012U, 0x012U, 0x013U, 0x014U, 
    0x014U, 0x014U, 0x015U, 0x00eU, 0x00aU
  },
  {
    0x00001U, 0x000f8U, 0x00102U, 0x00107U, 0x00116U, 0x0011aU, 0x00005U, 
    0x0000aU, 0x0001bU, 0x0003aU, 0x0000eU, 0x00015U, 0x00025U, 0x00032U, 
    0x00036U, 0x0000aU, 0x0002aU, 0x0002eU, 0x00043U, 0x0005cU, 0x0003eU, 
    0x0004cU, 0x00050U, 0x00054U, 0x00058U, 0x00060U, 0x00047U, 0x00065U, 
    0x00081U, 0x00085U, 0x000a1U, 0x000e1U, 0x00071U, 0x0007dU, 0x00091U, 
    0x0009dU, 0x000e5U, 0x00069U, 0x0006dU, 0x00075U, 0x00079U, 0x00089U, 
    0x0008dU, 0x00095U, 0x00099U, 0x000e9U, 0x000efU, 0x000a5U, 0x000aeU, 
    0x000b7U, 0x000c3U, 0x000ccU, 0x000d5U, 0x000bfU, 0x000ddU, 0x000b2U, 
    0x000c7U, 0x000a9U, 0x000d0U, 0x000bbU, 0x000d9U, 0x000fdU, 0x0010cU, 
    0x00111U, 0x00131U, 0x00136U, 0x0012dU, 0x0013bU, 0x00020U, 0x000f3U, 
    0x0011eU, 0x00123U, 0x00128U
  },
  {
    0x00000U, 0x00000U, 0x00000U, 0x00000U, 0x00000U, 0x00000U, 0x00000U, 
    0x00000U, 0x00000U, 0x00000U, 0x00000U, 0x00000U, 0x00000U, 0x00000U, 
    0x00000U, 0x00000U, 0x00000U, 0x00000U, 0x00000U, 0x00000U, 0x0013fU, 
    0x00000U
  }
};

/* Buffered internal variable definitions */

static vsBufferedIntVarType vsintVarBuffer;


/* *** function definitions *** */


/* Trigger variable buffer wrapper functions */

static void vstriggerVB_0 (void)
{
  vsintVarBuffer.i = vsintVar.i;
}

/* Guard expression wrapper functions */

static VS_BOOL vsguardExpr_0 (void)
{
  return (VS_BOOL) ((vsintVarBuffer.i >= 0)
    && (vsintVarBuffer.i == val_0));
}

static VS_BOOL vsguardExpr_1 (void)
{
  return (VS_BOOL) ((vsintVarBuffer.i >= 0)
    && (!(vsintVarBuffer.i == val_0)));
}

static VS_BOOL vsguardExpr_2 (void)
{
  return (VS_BOOL) ((vsintVar.i >= 0)
    && (vsintVar.i == val_0));
}

static VS_BOOL vsguardExpr_3 (void)
{
  return (VS_BOOL) ((vsintVar.i >= 0)
    && (!(vsintVar.i == val_0)));
}

static VS_BOOL vsguardExpr_4 (void)
{
  return (VS_BOOL) (vsintVar.nSet > MIN);
}

static VS_BOOL vsguardExpr_5 (void)
{
  return (VS_BOOL) (vsintVar.nSet < MAX);
}

static VS_BOOL vsguardExpr_6 (void)
{
  return (VS_BOOL) (vsintVar.i > 0 && vsintVar.i < 5);
}

static VS_BOOL vsguardExpr_7 (void)
{
  return (VS_BOOL) ((!(vsintVar.i >= 5)) && (!(vsintVar.i > 0 && vsintVar.i < 5)));
}

static VS_BOOL vsguardExpr_8 (void)
{
  return (VS_BOOL) (vsintVar.i >= 5);
}

/* Action expression wrapper functions */

static void vsactionExpr_0 (void)
{
  vsintVar.i = x;
}

static void vsactionExpr_4 (void)
{
  vsintVar.i = AcReturnX();
}

static void vsactionExpr_5 (void)
{
  vsintVar.nSet --;
}

static void vsactionExpr_6 (void)
{
  vsintVar.nSet ++;
}


/* *** function definitions *** */


void vsIntVarInitFunc (void)
{
  vsintVar.i = 10;
  vsintVar.nSet = 1;
}

