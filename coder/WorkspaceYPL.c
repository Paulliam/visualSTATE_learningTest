/*****************************************************************************
* IAR Visual State Coder Generated Source File
* Generated by IAR Visual State 9.1.1.3863
* IAR Visual State Project File: <E:\work_ypl\1_WirelessSwitchboard\3sourcecode\visualSTATE\WorkspaceYPL.vsp>
* IAR Visual State Signature Generator: "81"
* Project Signature: "856e2777e7f468f0c6e8f5d52a473f69"
*****************************************************************************/


/** @file
    Project source file.
    Contains function definitions for the project functions.
*/



/* *** include directives *** */


#include "WorkspaceYPL.h"


/* *** variable declarations *** */

extern VSActionExprFunctionType const vsactionExpr[4];

extern VSSystemObject vsso;

extern VSSystemClass const vssc;


/* *** function declarations *** */

static void VSDeduct_Ols0 (void);

static void VSDeduct_Ols1 (void);

static void VSDeduct_Ols2 (void);

static void VSDeduct_Ols3 (void);


/* *** internal function declarations *** */

static void VSActExprAndSignals (void);

static void VSInitializeSV (void);


/* *** function definitions *** */


static void VSDeduct_Ols0 (void)
{
  vsso.machine = vssc.stateParentMachines[vsso.state];
}


static void VSDeduct_Ols1 (void)
{
  vsso.state = vssc.machineParentStates[vsso.machine];
}


static void VSDeduct_Ols2 (void)
{
  vsso.state = vssc.trans[vsso.transIndex];
}


static void VSDeduct_Ols3 (void)
{
  vsso.workingState[vsso.machine] = vssc.machineInitDestState[vsso.machine];
}


VSRC VSInitAll (void)
{
  VSRC functionResult;
  /*  Initialize 'stack' variables.  */
  VSInitializeSV ();
  /*  Reinitialize.  */
  functionResult = VSReinitialize ();
  return functionResult;
}


VSRC VSReinitialize (void)
{
  VSRC functionResult;
  /*  Loop for all machines.  */
  vsso.machine = 0x008U;
  do
  {
    --vsso.machine;
    /*  Initialize current state.  */
    vsso.currentState[vsso.machine] = 0x0ffU;
    /*  Initialize active machine.  */
    vsso.activeMachineBits[(vsso.machine) >> 0x003U] &= (VS_UINT8)~((VS_UINT8)(0x001U << ((vsso.machine) & 0x007U)));
  }
  while (vsso.machine != 0x000U);
  /*  Set current state in the top machine to the initial state.  */
  vsso.currentState[0x007U] = 0x013U;
  /*  Set top machine active.  */
  vsso.activeMachineBits[(0x007U) >> 0x003U] |= (VS_UINT8)(0x001U << ((0x007U) & 0x007U));
  functionResult = VSDeduct (0x000U);
  return functionResult;
}


VSRC VSDeduct (VSTriggerType eventNoArg)
{
  /*  The eventNo parameter must be of type trigger since it is also used for storing signals.  */
  VSTriggerType eventNo = eventNoArg;
  /*  Initialize 'stack' variables (first machine is used for storing previous last machine).  */
  vsso.firstMachine = 0x0ffU;
  vsso.firstLastMachine = 0x0ffU;
  /*  Determine the first index into the index table for transreaction data, and loop for all transreactions for this trigger.  */
  vsso.transIndexIndex = vssc.transIndexIndex[eventNo];
  /*  Determine the last index into the index table for transreaction data  */
  vsso.lastTransIndexIndex = vssc.transIndexIndex[eventNo + 1U];
  do
  {
    /*  Determine the index for the header part of the next transreaction.  */
    vsso.headerTransIndex = vssc.transIndex[vsso.transIndexIndex];
    /*  Determine the index for the data part of the next transreaction.  */
    vsso.transIndex = (VS_UINT8)(vsso.headerTransIndex + 0x001U);
    /*  Determine the main source state for the transreaction.  */
    VSDeduct_Ols2 ();
    ++vsso.transIndex;
    /*  Determine last machine of the transreaction.  */
    vsso.lastMachine = vssc.stateParentMachines[vsso.state];
    /*  Last machine number must be <= previous last machine number (stored in first machine) otherwise some already fired transreaction had higher priority, ignore check for internal reactions).  */
    if ((vsso.lastMachine <= vsso.firstMachine) || ((vssc.trans[vsso.headerTransIndex] & 0x004U) == 0U))
    {
      /*  Loop for main source state and all positive state conditions.  */
      vsso.counter = (VS_UINT8) ((vssc.trans[vsso.headerTransIndex] & 0x001U)?1U:0U) + 1;
      do
      {
        --vsso.counter;
        VSDeduct_Ols0 ();
        /*  If the state is not current or its machine is not active, jump to next transreaction.  */
        if ((vsso.state != vsso.currentState[vsso.machine]) || (((vsso.activeMachineBits[(vsso.machine) >> 0x003U] & ((VS_UINT8)(0x001U << ((vsso.machine) & 0x007U))))) == 0U))
        {
          /*  no more processing to be done for current transreaction.  */
          goto NextTransreaction;
        }
        else
        {
          /*  Determine next state to synchronize with (if any).  */
          if (vsso.counter)
          {
            VSDeduct_Ols2 ();
            ++vsso.transIndex;
          }
        }
      }
      while (vsso.counter != 0x000U);
      /*  Internal reactions cannot conflict with already fired transreactions, since such transreactions all will higher priority.  */
      if ((vssc.trans[vsso.headerTransIndex] & 0x004U) != 0U)
      {
        /*  All conditions are satisfied, check for conflicts.  */
        /*  If last machine == previous last machine (stored in first machine), there is a conflict.  */
        if (vsso.lastMachine == vsso.firstMachine)
        {
          /*  If last fired transreaction was not internal reaction...  */
          if (vsso.wasLastFiredTransreactionAnInternalReaction == 0x000)
          {
            /*  Initialize 'stack' variables.  */
            VSInitializeSV ();
            /*  Return error code.  */
            return VSRC_Conflict;
          }
          /*  no more processing to be done for current transreaction.  */
          goto NextTransreaction;
        }
        else
        {
          /*  Determine first machine of the transition, which is first machine of last machine.  */
          vsso.firstMachine = vssc.firstMachine[vsso.lastMachine];
        }
      }
      /*  Set type of last fired transreaction.  */
      vsso.wasLastFiredTransreactionAnInternalReaction = (VS_BOOL)((vssc.trans[vsso.headerTransIndex] & 0x004U) == 0x000U);
      /*  Execute action expression (if any) and add signals (if any).  */
      vsso.transitionHeaderWordIndex = vsso.headerTransIndex;
      vsso.transitionDataIndex = vsso.transIndex;
      VSActExprAndSignals ();
      vsso.transIndex = vsso.transitionDataIndex;
      /*  Do not perform entry for internal reactions.  */
      if ((vssc.trans[vsso.headerTransIndex] & 0x004U) != 0U)
      {
        /*  Loop for destination state and all parent states up to and including the last machine.  */
        VSDeduct_Ols2 ();
        ++vsso.transIndex;
        do
        {
          /*  Determine the parent machine of the destination state (explicit or implicit).  */
          VSDeduct_Ols0 ();
          /*  If state is a history and current state is set and non-final...  */
          if ((vsso.state >= 0x014U) && (vsso.currentState[vsso.machine] < 0x014U))
          {
            /*  ... set working state to current state.  */
            vsso.workingState[vsso.machine] = vsso.currentState[vsso.machine];
          }
          else
          {
            /*  Set the working state for this machine to the determined destination state (explicit or implicit).  */
            vsso.workingState[vsso.machine] = vsso.state;
          }
          /*  Determine the next implicit destination state (if any).  */
          VSDeduct_Ols1 ();
        }
        while (vsso.machine != vsso.lastMachine);
        /*  Loop for machines and perform entry.  */
        do
        {
          /*  If the working state has not been set for this machine...  */
          if (vsso.workingState[vsso.machine] == 0x0ffU)
          {
            /*  The working state has not been set for this machine.  */
            /*  Determine the parent state.  */
            VSDeduct_Ols1 ();
            if (vsso.workingState[vssc.stateParentMachines[vsso.state]] != vsso.state)
            {
              /*  The parent state is not becoming active, since in that case it would have been set as a working state by now.  */
              if (((vsso.activeMachineBits[(vsso.machine) >> 0x003U] & ((VS_UINT8)(0x001U << ((vsso.machine) & 0x007U))))) != 0U)
              {
                /*  The machine is active now, it should become inactive.  */
                vsso.workingState[vsso.machine] = 0x0feU;
              }
            }
            else
            {
              /*  The parent state is becoming active, so should this machine.  */
              /*  Set the working state to the initial state of the machine.  */
              VSDeduct_Ols3 ();
              /*  Determine initial transition index.  */
              vsso.transitionHeaderWordIndex = vssc.machineInitTrans[vsso.machine];
              /*  Perform transreaction (if any).  */
              if (vsso.transitionHeaderWordIndex != 0x000U)
              {
                /*  Determine the index for the data part of the entry reaction.  */
                vsso.transitionDataIndex = (VS_UINT8)(vsso.transitionHeaderWordIndex + 0x001U);
                VSActExprAndSignals ();
              }
            }
          }
          else
          {
            /*  If state is a history and current state is set...  */
            if (vsso.workingState[vsso.machine] >= 0x014U)
            {
              /*  Set working state to history default state (always matches the initial state).  */
              VSDeduct_Ols3 ();
            }
          }
          if (vsso.machine == 0x000U)
          {
            break;
          }
          else
          {
            --vsso.machine;
          }
          /*  Continue as long as first machine <= the decremented value of machine. It is crucial that machine is tested for a zero value before decrementation.  */
        }
        while (vsso.firstMachine <= vsso.machine);
      }
      /*  Set previous last machine (stored in first machine) to last machine.  */
      vsso.firstMachine = vsso.lastMachine;
      /*  Set last machine for first fired transreaction.  */
      if (vsso.firstLastMachine == 0x0ffU)
      {
        vsso.firstLastMachine = vsso.firstMachine;
      }
    }
    /*  Continue to next transition  */
NextTransreaction:
    ++vsso.transIndexIndex;
  }
  while (vsso.transIndexIndex < vsso.lastTransIndexIndex);
  /*  Loop for all affected machines and update current states.  */
  if (vsso.firstMachine != 0x0ffU)
  {
    vsso.machine = vssc.firstMachine[vsso.firstMachine];
    do
    {
      vsso.state = vsso.workingState[vsso.machine];
      if (vsso.state != 0x0ffU)
      {
        if (vsso.state != 0x0feU)
        {
          /*  Set machine active.  */
          vsso.activeMachineBits[(vsso.machine) >> 0x003U] |= (VS_UINT8)(0x001U << ((vsso.machine) & 0x007U));
          /*  ... change the current state for this machine to the working state.  */
          vsso.currentState[vsso.machine] = vsso.state;
        }
        else
        {
          /*  Set machine inactive.  */
          vsso.activeMachineBits[(vsso.machine) >> 0x003U] &= (VS_UINT8)~((VS_UINT8)(0x001U << ((vsso.machine) & 0x007U)));
        }
        /*  Set the working state to the undefined state.  */
        vsso.workingState[vsso.machine] = 0x0ffU;
      }
      ++vsso.machine;
    }
    while (vsso.machine <= vsso.firstLastMachine);
  }
  return VSRC_OK;
}


static void VSActExprAndSignals (void)
{
  /*  Execute action expression (if any).  */
  if ((vssc.trans[vsso.transitionHeaderWordIndex] & 0x002U) != 0x000U)
  {
    vsactionExpr[vssc.trans[vsso.transitionDataIndex]]();
    ++vsso.transitionDataIndex;
  }
}


static void VSInitializeSV (void)
{
  /*  Initialize working states.  */
  vsso.machine = 0x008U;
  while (vsso.machine)
  {
    --vsso.machine;
    vsso.workingState[vsso.machine] = 0x0ffU;
  }
}

