// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144ba6500 FUN_144ba6500 body=504 status=ok
// SIG undefined FUN_144ba6500(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ba6500(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,int param_6)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_res8 [2];
  undefined8 uVar6;
  
  uVar6 = 0x144ba651b;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar5 = FUN_144ed1530(param_5,param_4);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
  }
  if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
    return 0;
  }
  if (((*(byte *)(**(longlong **)(param_1 + 0x20) + 4) & 4) == 0) && (param_3 == 0)) {
    iVar4 = FUN_144ba7180(param_5,local_res8);
    if (iVar4 < 1) {
LAB_144ba6585:
      FUN_144ba24f0(6,0xa1,0x9e,"crypto\\evp\\m_sigver.c",0x2a,uVar6);
      return 0;
    }
    uVar5 = FUN_144ea8ee0(local_res8[0]);
    param_3 = FUN_144baab30(uVar5);
    if (param_3 == 0) goto LAB_144ba6585;
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  lVar2 = *plVar1;
  if (param_6 == 0) {
    if (*(code **)(lVar2 + 0x70) != (code *)0x0) {
      iVar4 = (**(code **)(lVar2 + 0x70))(plVar1,param_1);
      if (iVar4 < 1) {
        return 0;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x20) = 0x40;
      goto LAB_144ba6603;
    }
    if (*(longlong *)(lVar2 + 0xd0) == 0) {
      iVar4 = FUN_144ed1ee0();
      if (iVar4 < 1) {
        return 0;
      }
      goto LAB_144ba6603;
    }
    *(undefined4 *)(plVar1 + 4) = 8;
  }
  else {
    if (*(code **)(lVar2 + 0x80) != (code *)0x0) {
      iVar4 = (**(code **)(lVar2 + 0x80))(plVar1,param_1);
      if (iVar4 < 1) {
        return 0;
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x20) = 0x80;
      goto LAB_144ba6603;
    }
    if (*(longlong *)(lVar2 + 0xd8) == 0) {
      iVar4 = FUN_144ed20b0();
      if (iVar4 < 1) {
        return 0;
      }
      goto LAB_144ba6603;
    }
    *(undefined4 *)(plVar1 + 4) = 0x10;
  }
  *(code **)(param_1 + 0x28) = FUN_144ba64c0;
LAB_144ba6603:
  iVar4 = FUN_144ed1710(*(undefined8 *)(param_1 + 0x20),0xffffffff,0xf8,1,0,param_3);
  if (iVar4 < 1) {
    return 0;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x20);
  }
  if ((*(byte *)(**(longlong **)(param_1 + 0x20) + 4) & 4) == 0) {
    iVar4 = FUN_144ba5a20(param_1,param_3,param_4);
    if (iVar4 == 0) {
      return 0;
    }
    pcVar3 = *(code **)(**(longlong **)(param_1 + 0x20) + 0xf8);
    if (pcVar3 != (code *)0x0) {
      uVar6 = (*pcVar3)(*(longlong **)(param_1 + 0x20),param_1);
      return uVar6;
    }
  }
  return 1;
}



// FUNCTION 144ba6700 FUN_144ba6700 body=72 status=ok
// SIG undefined FUN_144ba6700(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ba6700(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 local_res10 [3];
  
  puVar2 = (undefined4 *)FUN_144ed2a20(local_res10,param_1);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *puVar2;
    FUN_144ec6930(local_res10[0]);
    return uVar1;
  }
  FUN_144ec6930(local_res10[0]);
  return 0;
}



// FUNCTION 144ba6750 FUN_144ba6750 body=3 status=ok
// SIG undefined FUN_144ba6750(void)

undefined4 FUN_144ba6750(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 144ba6760 FUN_144ba6760 body=72 status=ok
// SIG undefined FUN_144ba6760(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ba6760(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 local_res8 [4];
  
  puVar2 = (undefined4 *)FUN_144ed2a20(local_res8,*param_1);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *puVar2;
    FUN_144ec6930(local_res8[0]);
    return uVar1;
  }
  FUN_144ec6930(local_res8[0]);
  return 0;
}



// FUNCTION 144ba67b0 FUN_144ba67b0 body=50 status=ok
// SIG undefined FUN_144ba67b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba67b0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x10) + 0x60),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144ba67d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 144ba67f0 FUN_144ba67f0 body=60 status=ok
// SIG undefined FUN_144ba67f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba67f0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x10) + 0x68),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144ba681f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xfffffffe;
}



// FUNCTION 144ba6830 FUN_144ba6830 body=50 status=ok
// SIG undefined FUN_144ba6830(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba6830(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x10) + 0x58),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144ba6858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 144ba6870 FUN_144ba6870 body=248 status=ok
// SIG undefined FUN_144ba6870(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba6870(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 local_res8;
  undefined8 uVar2;
  
  uVar2 = 0x144ba6880;
  local_res8 = 0;
  if (param_1 != (undefined4 *)0x0) {
    if (*(longlong *)(param_1 + 10) != 0) {
      FUN_144ba7380();
    }
    if ((param_2 == param_1[1]) && (*(longlong *)(param_1 + 4) != 0)) {
      return 1;
    }
    FUN_144ec6930(*(undefined8 *)(param_1 + 6));
    *(undefined8 *)(param_1 + 6) = 0;
    FUN_144ec6930(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  puVar1 = (undefined4 *)FUN_144ed2a20(&local_res8,param_2);
  if (param_1 == (undefined4 *)0x0) {
    FUN_144ec6930(local_res8);
  }
  if (puVar1 == (undefined4 *)0x0) {
    FUN_144ba24f0(6,0x9e,0x9c,"crypto\\evp\\p_lib.c",0xd2,uVar2);
    return 0;
  }
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 4) = puVar1;
    *param_1 = *puVar1;
    *(undefined8 *)(param_1 + 6) = local_res8;
    param_1[1] = param_2;
  }
  return 1;
}



// FUNCTION 144ba6970 FUN_144ba6970 body=36 status=ok
// SIG undefined FUN_144ba6970(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba6970(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_144ba73e0(param_1,0,0,param_2,param_3);
  return;
}



// FUNCTION 144ba69a0 FUN_144ba69a0 body=75 status=ok
// SIG undefined FUN_144ba69a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ba69a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_144ba6870();
    if (iVar1 != 0) {
      *(longlong *)(param_1 + 0x28) = param_3;
      return param_3 != 0;
    }
  }
  return false;
}



// FUNCTION 144ba69f0 FUN_144ba69f0 body=5 status=ok
// SIG undefined FUN_144ba69f0(void)

undefined8 FUN_144ba69f0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



// FUNCTION 144ba6a00 FUN_144ba6a00 body=79 status=ok
// SIG undefined FUN_144ba6a00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba6a00(int *param_1,longlong *param_2)

{
  int *piVar1;
  
  if (*param_1 != 0x425) {
    FUN_144ba24f0(6,0xb8,0xa4,"crypto\\evp\\p_lib.c",0x1b6);
    return 0;
  }
  piVar1 = *(int **)(param_1 + 10);
  *param_2 = (longlong)*piVar1;
  return *(undefined8 *)(piVar1 + 2);
}



// FUNCTION 144ba6a50 FUN_144ba6a50 body=77 status=ok
// SIG undefined FUN_144ba6a50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba6a50(int *param_1,longlong *param_2)

{
  int *piVar1;
  
  if (*param_1 != 0x426) {
    FUN_144ba24f0(6,0xac,0xaf,"crypto\\evp\\p_lib.c",0x1c5);
    return 0;
  }
  piVar1 = *(int **)(param_1 + 10);
  *param_2 = (longlong)*piVar1;
  return *(undefined8 *)(piVar1 + 2);
}



// FUNCTION 144ba6aa0 FUN_144ba6aa0 body=75 status=ok
// SIG undefined FUN_144ba6aa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba6aa0(int *param_1)

{
  if ((*param_1 != 6) && (*param_1 != 0x390)) {
    FUN_144ba24f0(6,0x79,0x7f,"crypto\\evp\\p_lib.c",0x1da);
    return 0;
  }
  return *(undefined8 *)(param_1 + 10);
}



// FUNCTION 144ba6af0 FUN_144ba6af0 body=101 status=ok
// SIG undefined FUN_144ba6af0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ba6af0(int *param_1)

{
  longlong lVar1;
  
  if ((*param_1 != 6) && (*param_1 != 0x390)) {
    FUN_144ba24f0(6,0x79,0x7f,"crypto\\evp\\p_lib.c",0x1da);
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 10);
  if (lVar1 != 0) {
    FUN_144bad9e0(lVar1);
  }
  return lVar1;
}



// FUNCTION 144ba6b60 FUN_144ba6b60 body=64 status=ok
// SIG undefined FUN_144ba6b60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba6b60(int *param_1)

{
  if (*param_1 != 0x74) {
    FUN_144ba24f0(6,0x78,0x81,"crypto\\evp\\p_lib.c",0x1f5);
    return 0;
  }
  return *(undefined8 *)(param_1 + 10);
}



// FUNCTION 144ba6ba0 FUN_144ba6ba0 body=118 status=ok
// SIG undefined FUN_144ba6ba0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 FUN_144ba6ba0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_144ed4030(param_2);
  uVar3 = 0x398;
  if (lVar2 == 0) {
    uVar3 = 0x1c;
  }
  if (((param_1 != 0) && (iVar1 = FUN_144ba6870(param_1,uVar3), iVar1 != 0)) &&
     (*(longlong *)(param_1 + 0x28) = param_2, param_2 != 0)) {
    FUN_144ed3e30(param_2);
    return 1;
  }
  return 0;
}



// FUNCTION 144ba6c20 FUN_144ba6c20 body=75 status=ok
// SIG undefined FUN_144ba6c20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba6c20(int *param_1)

{
  if ((*param_1 != 0x1c) && (*param_1 != 0x398)) {
    FUN_144ba24f0(6,0x77,0x80,"crypto\\evp\\p_lib.c",0x22f);
    return 0;
  }
  return *(undefined8 *)(param_1 + 10);
}



// FUNCTION 144ba6c70 FUN_144ba6c70 body=96 status=ok
// SIG undefined FUN_144ba6c70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1 FUN_144ba6c70(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (((param_1 != 0) && (iVar1 = FUN_144ba6870(param_1,0x198), iVar1 != 0)) &&
     (*(longlong *)(param_1 + 0x28) = param_2, param_2 != 0)) {
    FUN_144ed3180(param_2);
    return 1;
  }
  return 0;
}



// FUNCTION 144ba6cd0 FUN_144ba6cd0 body=123 status=ok
// SIG undefined FUN_144ba6cd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba6cd0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 local_res8;
  undefined8 uVar3;
  
  uVar3 = 0x144ba6ce0;
  piVar1 = (int *)FUN_144ed2a20(&local_res8,*param_1);
  if (piVar1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar1;
  }
  FUN_144ec6930(local_res8);
  if (iVar2 != 0x198) {
    FUN_144ba24f0(6,0x83,0x8e,"crypto\\evp\\p_lib.c",0x211,uVar3);
    return 0;
  }
  return *(undefined8 *)(param_1 + 10);
}



// FUNCTION 144ba6d50 FUN_144ba6d50 body=45 status=ok
// SIG undefined FUN_144ba6d50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ba6d50(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba6cd0();
  if (lVar1 != 0) {
    FUN_144ed3180(lVar1);
  }
  return lVar1;
}



// FUNCTION 144ba6d80 FUN_144ba6d80 body=181 status=ok
// SIG undefined FUN_144ba6d80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_144ba6d80(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144ba6d8c;
  puVar1 = (undefined8 *)FUN_144ea6670(0x48,"crypto\\evp\\p_lib.c",0x8e);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_144ba24f0(6,0x6a,0x41,"crypto\\evp\\p_lib.c",0x91,uVar3);
    return (undefined8 *)0x0;
  }
  *(undefined4 *)(puVar1 + 6) = 1;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 1;
  lVar2 = FUN_144e985a0();
  puVar1[8] = lVar2;
  if (lVar2 == 0) {
    FUN_144ba24f0(6,0x6a,0x41,"crypto\\evp\\p_lib.c",0x9a,uVar3);
    FUN_144ea6530(puVar1,"crypto\\evp\\p_lib.c",0x9b);
    return (undefined8 *)0x0;
  }
  return puVar1;
}



// FUNCTION 144ba6e40 FUN_144ba6e40 body=21 status=ok
// SIG undefined FUN_144ba6e40(void)

bool FUN_144ba6e40(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



// FUNCTION 144ba6e60 FUN_144ba6e60 body=92 status=ok
// SIG undefined FUN_144ba6e60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba6e60(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      FUN_144ba7380();
      FUN_144e98660(*(undefined8 *)(param_1 + 0x40));
      FUN_144babe00(*(undefined8 *)(param_1 + 0x38),FUN_144ed4710);
      FUN_144ea6530(param_1,"crypto\\evp\\p_lib.c",0x267);
    }
  }
  return;
}



// FUNCTION 144ba6ec0 FUN_144ba6ec0 body=291 status=ok
// SIG undefined FUN_144ba6ec0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba6ec0(int *param_1,int *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ba6ed0;
  if (*param_1 == 0) {
    iVar1 = FUN_144ba6870(param_1,*param_2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else if (*param_1 != *param_2) {
    uVar3 = 0x51;
    uVar2 = 0x65;
    goto LAB_144ba6fc5;
  }
  if (((*(longlong *)(param_2 + 4) == 0) ||
      (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 4) + 0x80),
      UNRECOVERED_JUMPTABLE == (code *)0x0)) ||
     (iVar1 = (*UNRECOVERED_JUMPTABLE)(param_2), iVar1 == 0)) {
    if (((*(longlong *)(param_1 + 4) != 0) &&
        (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 4) + 0x80),
        UNRECOVERED_JUMPTABLE != (code *)0x0)) &&
       (iVar1 = (*UNRECOVERED_JUMPTABLE)(param_1), iVar1 != 0)) {
      if (*(longlong *)(param_2 + 4) == 0) {
        return 0;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 4) + 0x88);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000144ba6f7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return uVar4;
    }
    if (((*param_1 == *param_2) && (*(longlong *)(param_1 + 4) != 0)) &&
       ((UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 4) + 0x90),
        UNRECOVERED_JUMPTABLE != (code *)0x0 &&
        (uVar2 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2), (int)uVar2 == 1)))) {
      return uVar2;
    }
    uVar3 = 0x5d;
    uVar2 = 0x99;
  }
  else {
    uVar3 = 0x56;
    uVar2 = 0x67;
  }
LAB_144ba6fc5:
  FUN_144ba24f0(6,0x67,uVar2,"crypto\\evp\\p_lib.c",uVar3,uVar4);
  return 0;
}



// FUNCTION 144ba6ff0 FUN_144ba6ff0 body=53 status=ok
// SIG undefined FUN_144ba6ff0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba6ff0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x10) + 0x80),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144ba701b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 144ba7030 FUN_144ba7030 body=65 status=ok
// SIG undefined FUN_144ba7030(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba7030(int *param_1,int *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*param_1 != *param_2) {
    return 0xffffffff;
  }
  if ((*(longlong *)(param_1 + 4) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 4) + 0x90),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144ba7064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0xfffffffe;
}



// FUNCTION 144ba7080 FUN_144ba7080 body=121 status=ok
// SIG undefined FUN_144ba7080(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba7080(int *param_1,int *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (*param_1 != *param_2) {
    return 0xffffffff;
  }
  if (*(longlong *)(param_1 + 4) != 0) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 4) + 0x90);
    if ((pcVar1 != (code *)0x0) && (uVar2 = (*pcVar1)(), (int)uVar2 < 1)) {
      return uVar2;
    }
    if (*(code **)(*(longlong *)(param_1 + 4) + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144ba70e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(longlong *)(param_1 + 4) + 0x30))(param_1,param_2);
      return uVar2;
    }
  }
  return 0xfffffffe;
}



// FUNCTION 144ba7100 FUN_144ba7100 body=121 status=ok
// SIG undefined FUN_144ba7100(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba7100(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*(longlong *)(param_2 + 4) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 4) + 0x38),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144ba7138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  FUN_144b9edb0(param_1,param_3,0x80);
  uVar1 = FUN_144ea8e20(*param_2);
  FUN_144ec7640(param_1,"%s algorithm \"%s\" unsupported\n","Public Key",uVar1);
  return 1;
}



// FUNCTION 144ba7180 FUN_144ba7180 body=61 status=ok
// SIG undefined FUN_144ba7180(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba7180(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x10) + 0xb0),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144ba71b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1,3,0,param_2);
    return uVar1;
  }
  return 0xfffffffe;
}



// FUNCTION 144ba71c0 FUN_144ba71c0 body=75 status=ok
// SIG undefined FUN_144ba71c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba71c0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  int iVar2;
  
  if (((param_3 < 0x80000000) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x10) + 0xb0), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(param_1,9,param_3,param_2,0x144ba71ca);
    if (0 < iVar2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ba7210 FUN_144ba7210 body=65 status=ok
// SIG undefined FUN_144ba7210(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ba7210(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x10) + 0xb0), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(param_1,10,0,param_2,0x144ba721a);
    if (0 < iVar2) {
      return (longlong)iVar2;
    }
  }
  return 0;
}



// FUNCTION 144ba7260 FUN_144ba7260 body=281 status=ok
// SIG undefined FUN_144ba7260(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144ba7260(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x144ba727e;
  lVar4 = FUN_144ba6d80();
  if (lVar4 != 0) {
    iVar3 = FUN_144ba73e0(lVar4,param_2,param_1,0,0xffffffff,uVar7);
    if (iVar3 != 0) {
      pcVar2 = *(code **)(*(longlong *)(lVar4 + 0x10) + 0xf8);
      if (pcVar2 == (code *)0x0) {
        uVar6 = 0xf2;
        uVar5 = 0x96;
      }
      else {
        iVar3 = (*pcVar2)(lVar4,param_3,param_4);
        if (iVar3 != 0) {
          return lVar4;
        }
        uVar6 = 0xf7;
        uVar5 = 0xb4;
      }
      FUN_144ba24f0(6,0xbf,uVar5,"crypto\\evp\\p_lib.c",uVar6);
    }
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 < 2) {
      FUN_144ba7380(lVar4);
      FUN_144e98660(*(undefined8 *)(lVar4 + 0x40));
      FUN_144babe00(*(undefined8 *)(lVar4 + 0x38),FUN_144ed4710);
      FUN_144ea6530(lVar4,"crypto\\evp\\p_lib.c",0x267);
    }
  }
  return 0;
}



// FUNCTION 144ba7380 FUN_144ba7380 body=89 status=ok
// SIG undefined FUN_144ba7380(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba7380(longlong param_1)

{
  code *pcVar1;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) &&
     (pcVar1 = *(code **)(*(longlong *)(param_1 + 0x10) + 0xa8), pcVar1 != (code *)0x0)) {
    (*pcVar1)();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_144ec6930(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_144ec6930(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 144ba73e0 FUN_144ba73e0 body=319 status=ok
// SIG undefined FUN_144ba73e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ba73e0(undefined4 *param_1,longlong param_2,int param_3,longlong param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong local_res10;
  undefined8 uVar4;
  
  uVar4 = 0x144ba73fd;
  plVar3 = &local_res10;
  if (param_2 != 0) {
    plVar3 = (longlong *)0x0;
  }
  local_res10 = param_2;
  if (param_1 != (undefined4 *)0x0) {
    if (*(longlong *)(param_1 + 10) != 0) {
      FUN_144ba7380();
    }
    if ((param_3 == param_1[1]) && (*(longlong *)(param_1 + 4) != 0)) {
      return 1;
    }
    FUN_144ec6930(*(undefined8 *)(param_1 + 6));
    *(undefined8 *)(param_1 + 6) = 0;
    FUN_144ec6930(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  if (param_4 == 0) {
    puVar2 = (undefined4 *)FUN_144ed2a20(plVar3,param_3);
  }
  else {
    puVar2 = (undefined4 *)FUN_144ed2b20(plVar3,param_4,param_5);
  }
  if ((param_1 == (undefined4 *)0x0) && (plVar3 != (longlong *)0x0)) {
    FUN_144ec6930(local_res10);
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (param_1 != (undefined4 *)0x0) {
      *(undefined4 **)(param_1 + 4) = puVar2;
      *param_1 = *puVar2;
      param_1[1] = param_3;
      if (((plVar3 == (longlong *)0x0) && (local_res10 != 0)) &&
         (iVar1 = FUN_144ec6850(local_res10), iVar1 == 0)) {
        FUN_144ba24f0(6,0x9e,0x86,"crypto\\evp\\p_lib.c",0xdb);
        return 0;
      }
      *(longlong *)(param_1 + 6) = local_res10;
    }
    return 1;
  }
  FUN_144ba24f0(6,0x9e,0x9c,"crypto\\evp\\p_lib.c",0xd2,uVar4);
  return 0;
}



// FUNCTION 144ba7520 FUN_144ba7520 body=239 status=ok
// SIG undefined FUN_144ba7520(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba7520(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  lVar4 = FUN_144ba3e90();
  plVar1 = (longlong *)(lVar4 + 0x1f0);
  if ((((*plVar1 != 0) && (*(longlong *)(lVar4 + 0x1f8) != 0)) && (param_2 != 0)) &&
     ((param_3 != 0 && (0xf < param_4)))) {
    if (*(longlong *)(lVar4 + 0x210) != 0) {
      uVar5 = FUN_144ba3e50();
      (**(code **)(lVar4 + 0x210))
                (param_3,param_2,param_4,*plVar1,*(undefined8 *)(lVar4 + 0x1f8),uVar5);
      return 1;
    }
    uVar2 = FUN_144ba3dc0(param_1);
    uVar5 = FUN_144ba3e50(param_1);
    iVar3 = FUN_144ed94e0(plVar1,uVar5,param_3,param_2,param_4,CONCAT44(uVar6,uVar2));
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144ba7610 FUN_144ba7610 body=260 status=ok
// SIG undefined FUN_144ba7610(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba7610(undefined8 param_1,longlong param_2,void *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  void *_Dst;
  undefined8 uVar4;
  
  uVar4 = 0x144ba7630;
  lVar2 = FUN_144ba3e90();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_144ba76c1;
  iVar1 = FUN_144ba3de0(param_1);
  FUN_1425a46a0(param_2,iVar1 << 3,lVar2);
  FUN_144ed88c0(lVar2 + 0x118,*(undefined4 *)(lVar2 + 0x10c),*(undefined4 *)(lVar2 + 0x108),lVar2,
                &LAB_1425a0340,uVar4);
  *(undefined4 *)(lVar2 + 0xf8) = 1;
  puVar3 = &DAT_1425a11a0;
  if (param_4 != 0) {
    puVar3 = &DAT_1425a1050;
  }
  *(undefined **)(lVar2 + 0x150) = puVar3;
LAB_144ba76c1:
  if (param_3 != (void *)0x0) {
    iVar1 = *(int *)(lVar2 + 0x108);
    _Dst = (void *)FUN_144ba3e50(param_1);
    memcpy(_Dst,param_3,(longlong)(0xf - iVar1));
    *(undefined4 *)(lVar2 + 0xfc) = 1;
  }
  return 1;
}



// FUNCTION 144ba7720 FUN_144ba7720 body=579 status=ok
// SIG undefined FUN_144ba7720(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144ba7720(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_144ba3e90();
  lVar5 = lVar3 + 0x118;
  if (*(int *)(lVar3 + 0xf8) == 0) goto LAB_144ba7956;
  if (-1 < *(int *)(lVar3 + 0x110)) {
    FUN_144baa7f0(param_1,param_2,param_3,param_4);
    goto LAB_144ba7956;
  }
  if (((param_3 == 0) && (param_2 != 0)) || (*(int *)(lVar3 + 0xfc) == 0)) goto LAB_144ba7956;
  if (param_2 == 0) {
    if (param_3 == 0) {
      iVar2 = *(int *)(lVar3 + 0x108);
      uVar4 = FUN_144ba3e50(param_1);
      iVar2 = FUN_144ed8900(lVar5,uVar4,(longlong)(0xf - iVar2),param_4);
      if (iVar2 == 0) {
        *(undefined4 *)(lVar3 + 0x104) = 1;
      }
    }
    else if ((*(int *)(lVar3 + 0x104) != 0) || (param_4 == 0)) {
      FUN_144ed89b0(lVar5,param_3,param_4);
    }
    goto LAB_144ba7956;
  }
  iVar2 = FUN_144ba3dc0(param_1);
  if ((iVar2 == 0) && (*(int *)(lVar3 + 0x100) == 0)) goto LAB_144ba7956;
  if (*(int *)(lVar3 + 0x104) == 0) {
    iVar2 = *(int *)(lVar3 + 0x108);
    uVar4 = FUN_144ba3e50(param_1);
    iVar2 = FUN_144ed8900(lVar5,uVar4,(longlong)(0xf - iVar2),param_4);
    if (iVar2 != 0) goto LAB_144ba7956;
    *(undefined4 *)(lVar3 + 0x104) = 1;
  }
  iVar2 = FUN_144ba3dc0(param_1);
  lVar1 = *(longlong *)(lVar3 + 0x150);
  if (iVar2 != 0) {
    if (lVar1 == 0) {
      iVar2 = FUN_144ed8b10();
    }
    else {
      local_78 = lVar1;
      iVar2 = FUN_144ed8fb0();
    }
    if (iVar2 == 0) {
      *(undefined4 *)(lVar3 + 0x100) = 1;
    }
    goto LAB_144ba7956;
  }
  if (lVar1 == 0) {
    iVar2 = FUN_144ed8dd0(lVar5,param_3,param_2,param_4);
  }
  else {
    local_78 = lVar1;
    iVar2 = FUN_144ed9280();
  }
  if ((iVar2 == 0) &&
     (lVar5 = FUN_144ed9490(lVar5,local_68,(longlong)*(int *)(lVar3 + 0x10c)), lVar5 != 0)) {
    iVar2 = *(int *)(lVar3 + 0x10c);
    uVar4 = FUN_144ba3e60(param_1);
    iVar2 = FUN_14259f120(local_68,uVar4,(longlong)iVar2);
    if ((iVar2 != 0) || ((int)param_4 == -1)) goto LAB_144ba7932;
  }
  else {
LAB_144ba7932:
    FUN_14259f0c0(param_2,param_4);
  }
  *(undefined8 *)(lVar3 + 0xfc) = 0;
  *(undefined4 *)(lVar3 + 0x104) = 0;
LAB_144ba7956:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_98);
}



// FUNCTION 144ba7980 FUN_144ba7980 body=210 status=ok
// SIG undefined FUN_144ba7980(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba7980(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  undefined8 uVar3;
  
  lVar2 = FUN_144ba3e90();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_144ba7a08;
  iVar1 = FUN_144ba3dc0(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_144ba3de0(param_1);
    FUN_144ed5680(param_2,iVar1 << 3,lVar2);
  }
  else {
    iVar1 = FUN_144ba3de0(param_1);
    FUN_144ed50a0(param_2,iVar1 << 3,lVar2);
  }
  if (param_3 == (void *)0x0) {
    *(undefined8 *)(lVar2 + 0xf8) = 0;
    return 1;
  }
LAB_144ba7a08:
  iVar1 = FUN_144ba3df0(param_1);
  _Dst = (void *)FUN_144ba3e50(param_1);
  memcpy(_Dst,param_3,(longlong)iVar1);
  uVar3 = FUN_144ba3e50(param_1);
  *(undefined8 *)(lVar2 + 0xf8) = uVar3;
  return 1;
}



// FUNCTION 144ba7a60 FUN_144ba7a60 body=376 status=ok
// SIG undefined FUN_144ba7a60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba7a60(undefined8 param_1,longlong param_2,void *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  
  lVar2 = FUN_144ba3e90();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(lVar2 + 0x1f0) == 0) {
      memcpy(*(void **)(lVar2 + 0x2a8),param_3,(longlong)*(int *)(lVar2 + 0x2e8));
    }
    else {
      FUN_144eda030(lVar2 + 0x1f8,param_3,(longlong)*(int *)(lVar2 + 0x2e8),
                    (longlong)*(int *)(lVar2 + 0x2ec));
    }
    *(undefined4 *)(lVar2 + 500) = 1;
    return 1;
  }
  iVar1 = FUN_144ba3de0(param_1);
  FUN_1425a46a0(param_2,iVar1 << 3,lVar2);
  iVar1 = FUN_144ba3de0(param_1);
  FUN_1425a4630(param_2,iVar1 << 3,lVar2 + 0xf8);
  puVar3 = &DAT_1425a3500;
  if (param_4 != 0) {
    puVar3 = &DAT_1425a2e60;
  }
  iVar1 = FUN_144ed9d60(lVar2 + 0x1f8,lVar2,lVar2 + 0xf8,&LAB_1425a0340,&LAB_1425a0390,puVar3);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_3 != (void *)0x0) ||
     ((*(int *)(lVar2 + 500) != 0 && (param_3 = *(void **)(lVar2 + 0x2a8), param_3 != (void *)0x0)))
     ) {
    iVar1 = FUN_144eda030(lVar2 + 0x1f8,param_3,(longlong)*(int *)(lVar2 + 0x2e8),
                          (longlong)*(int *)(lVar2 + 0x2ec));
    if (iVar1 != 1) {
      return 0;
    }
    *(undefined4 *)(lVar2 + 500) = 1;
  }
  *(undefined4 *)(lVar2 + 0x1f0) = 1;
  return 1;
}



// FUNCTION 144ba7be0 FUN_144ba7be0 body=389 status=ok
// SIG undefined FUN_144ba7be0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ba7be0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 0x144ba7bfe;
  lVar2 = FUN_144ba3e90();
  iVar1 = FUN_144ba3df0(param_1);
  bVar4 = iVar1 == 4;
  if (param_3 != 0) {
    if (((param_4 == 0) ||
        ((iVar1 = FUN_144ba3dc0(param_1), iVar1 == 0 && ((param_4 < 0x10 || ((param_4 & 7) != 0)))))
        ) || ((!bVar4 && ((param_4 & 7) != 0)))) {
      return 0xffffffff;
    }
    iVar1 = FUN_144ba53b0(param_2,param_3,param_4);
    if (iVar1 == 0) {
      iVar1 = FUN_144ba3dc0(param_1);
      if (param_2 == 0) {
        if (iVar1 == 0) {
          return param_4 - 8;
        }
        if (bVar4) {
          param_4 = param_4 + 7 & 0xfffffffffffffff8;
        }
        return param_4 + 8;
      }
      if (bVar4) {
        if (iVar1 == 0) {
          uVar3 = FUN_144ed9a80();
        }
        else {
          uVar3 = FUN_144ed9950();
        }
      }
      else if (iVar1 == 0) {
        uVar3 = FUN_144ed98b0(lVar2,*(undefined8 *)(lVar2 + 0xf8),param_2,param_3,param_4,
                              FUN_144ed5ed0);
      }
      else {
        uVar3 = FUN_144ed9740();
      }
      if (uVar3 != 0) {
        return uVar3 & 0xffffffff;
      }
      return 0xffffffff;
    }
    FUN_144ba24f0(6,0xaa,0xa2,"crypto\\evp\\e_aes.c",CONCAT44(uVar5,0xef3),uVar6);
  }
  return 0;
}



// FUNCTION 144ba7d70 FUN_144ba7d70 body=772 status=ok
// SIG undefined FUN_144ba7d70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144ba7d70(undefined8 param_1,longlong param_2,void *param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  void *_Dst;
  undefined8 uVar7;
  
  uVar7 = 0x144ba7d91;
  iVar1 = 0;
  lVar3 = FUN_144ba3e90();
  if ((*(int *)(lVar3 + 500) == 0) || (*(int *)(lVar3 + 0x1f0) == 0)) {
    return -1;
  }
  if (param_3 == (void *)0x0) {
    if (0 < *(int *)(lVar3 + 0x2e0)) {
      iVar1 = FUN_144ba3dc0(param_1);
      if (iVar1 == 0) {
        iVar1 = FUN_144eda5b0(lVar3 + 0x1f8,lVar3 + 0x2c0,param_2,(longlong)*(int *)(lVar3 + 0x2e0))
        ;
        if (iVar1 == 0) {
          return -1;
        }
      }
      else {
        iVar1 = FUN_144eda390();
        if (iVar1 == 0) {
          return -1;
        }
      }
      iVar1 = *(int *)(lVar3 + 0x2e0);
      *(undefined4 *)(lVar3 + 0x2e0) = 0;
    }
    if (0 < *(int *)(lVar3 + 0x2e4)) {
      iVar2 = FUN_144eda200(lVar3 + 0x1f8,lVar3 + 0x2d0,(longlong)*(int *)(lVar3 + 0x2e4));
      if (iVar2 == 0) {
        return -1;
      }
      *(undefined4 *)(lVar3 + 0x2e4) = 0;
    }
    iVar2 = FUN_144ba3dc0(param_1);
    if (iVar2 == 0) {
      if (*(int *)(lVar3 + 0x2ec) < 0) {
        return -1;
      }
      iVar2 = FUN_144eda7d0(lVar3 + 0x1f8,lVar3 + 0x2b0,(longlong)*(int *)(lVar3 + 0x2ec));
      if (iVar2 != 0) {
        return -1;
      }
    }
    else {
      iVar2 = FUN_144eda890(lVar3 + 0x1f8,lVar3 + 0x2b0,0x10);
      if (iVar2 != 1) {
        return -1;
      }
    }
    *(undefined4 *)(lVar3 + 500) = 0;
    return iVar1;
  }
  if (param_2 == 0) {
    _Dst = (void *)(lVar3 + 0x2d0);
    puVar6 = (uint *)(lVar3 + 0x2e4);
  }
  else {
    puVar6 = (uint *)(lVar3 + 0x2e0);
    _Dst = (void *)(lVar3 + 0x2c0);
    iVar2 = FUN_144ba53b0((int)*puVar6 + param_2,param_3,param_4);
    if (iVar2 != 0) {
      FUN_144ba24f0(6,0xa9,0xa2,"crypto\\evp\\e_aes.c",0x103a,uVar7);
      return 0;
    }
  }
  uVar4 = *puVar6;
  if ((int)uVar4 < 1) {
LAB_144ba7edf:
    uVar4 = (uint)param_4 & 0xf;
    uVar5 = (ulonglong)uVar4;
    if (param_4 != uVar5) {
      if (param_2 == 0) {
        iVar2 = FUN_144eda200(lVar3 + 0x1f8,param_3,param_4 - uVar5);
      }
      else {
        iVar2 = FUN_144ba3dc0(param_1);
        if (iVar2 == 0) {
          iVar2 = FUN_144eda5b0(lVar3 + 0x1f8,param_3,param_2,param_4 - uVar5);
        }
        else {
          iVar2 = FUN_144eda390();
        }
      }
      if (iVar2 == 0) goto LAB_144ba7f08;
      iVar1 = iVar1 + ((uint)param_4 - uVar4);
      param_3 = (void *)((longlong)param_3 + (param_4 - uVar5));
    }
    if (uVar5 != 0) {
      memcpy(_Dst,param_3,uVar5);
      *puVar6 = uVar4;
    }
  }
  else {
    uVar5 = (ulonglong)(0x10 - uVar4);
    if (param_4 < uVar5) {
      memcpy((void *)((longlong)(int)uVar4 + (longlong)_Dst),param_3,param_4);
      *puVar6 = *puVar6 + (int)param_4;
      return 0;
    }
    memcpy((void *)((longlong)(int)uVar4 + (longlong)_Dst),param_3,uVar5);
    param_4 = param_4 - uVar5;
    param_3 = (void *)((longlong)param_3 + uVar5);
    if (param_2 == 0) {
      iVar1 = FUN_144eda200(lVar3 + 0x1f8,_Dst,0x10);
    }
    else {
      iVar1 = FUN_144ba3dc0(param_1);
      if (iVar1 == 0) {
        iVar1 = FUN_144eda5b0(lVar3 + 0x1f8,_Dst,param_2,0x10);
      }
      else {
        iVar1 = FUN_144eda390();
      }
    }
    if (iVar1 != 0) {
      *puVar6 = 0;
      iVar1 = 0x10;
      if (param_2 != 0) {
        param_2 = param_2 + 0x10;
      }
      goto LAB_144ba7edf;
    }
LAB_144ba7f08:
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 144ba8080 FUN_144ba8080 body=354 status=ok
// SIG undefined FUN_144ba8080(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ba8080(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  
  lVar3 = FUN_144ba3e90();
  uVar4 = FUN_144ba3db0(param_1);
  uVar1 = FUN_144ba3da0(uVar4);
  if (((uVar1 & 0xf0007) - 1 < 2) && (param_4 == 0)) {
    if ((DAT_14c7973a0._4_4_ & 0x200) != 0) {
      iVar2 = FUN_144ba3de0(param_1);
      iVar2 = FUN_14259fa90(param_2,iVar2 << 3,lVar3);
      pcVar5 = (code *)&DAT_14259fc50;
      pcVar6 = (code *)&DAT_14259fd20;
      goto LAB_144ba8183;
    }
    iVar2 = FUN_144ba3de0(param_1);
    iVar2 = FUN_144ed5680(param_2,iVar2 << 3,lVar3);
    pcVar5 = FUN_144ed5ed0;
  }
  else {
    if ((DAT_14c7973a0._4_4_ & 0x200) != 0) {
      iVar2 = FUN_144ba3de0(param_1);
      iVar2 = FUN_14259f9b0(param_2,iVar2 << 3,lVar3);
      pcVar5 = (code *)&DAT_14259fb80;
      pcVar6 = (code *)&DAT_14259fd20;
      goto LAB_144ba8183;
    }
    iVar2 = FUN_144ba3de0(param_1);
    iVar2 = FUN_144ed50a0(param_2,iVar2 << 3,lVar3);
    pcVar5 = FUN_144ed58d0;
  }
  pcVar6 = FUN_144ed64a0;
LAB_144ba8183:
  *(code **)(lVar3 + 0xf8) = pcVar5;
  pcVar5 = (code *)0x0;
  if ((uVar1 & 0xf0007) == 2) {
    pcVar5 = pcVar6;
  }
  *(code **)(lVar3 + 0x100) = pcVar5;
  if (-1 >= iVar2) {
    FUN_144ba24f0(6,0x85,0x8f,"crypto\\evp\\e_aes.c",0xa87);
  }
  return -1 < iVar2;
}



// FUNCTION 144ba81f0 FUN_144ba81f0 body=232 status=ok
// SIG undefined FUN_144ba81f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ba81f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  lVar3 = FUN_144ba3e90();
  if (*(longlong *)(lVar3 + 0x100) == 0) {
    iVar2 = FUN_144ba3dc0(param_1);
    if (iVar2 == 0) {
      uVar4 = FUN_144ba3e50(param_1);
      FUN_144ed66b0(param_3,param_2,param_4,lVar3,uVar4,*(undefined8 *)(lVar3 + 0xf8));
    }
    else {
      uVar4 = FUN_144ba3e50(param_1);
      FUN_144ed64e0(param_3,param_2,param_4,lVar3,uVar4,*(undefined8 *)(lVar3 + 0xf8));
    }
  }
  else {
    uVar1 = FUN_144ba3dc0(param_1);
    uVar4 = FUN_144ba3e50(param_1);
    (**(code **)(lVar3 + 0x100))(param_3,param_2,param_4,lVar3,uVar4,CONCAT44(uVar5,uVar1));
  }
  return 1;
}



// FUNCTION 144ba82e0 FUN_144ba82e0 body=137 status=ok
// SIG undefined FUN_144ba82e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba82e0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  iVar1 = FUN_144ba3dd0();
  uVar4 = (ulonglong)iVar1;
  lVar2 = FUN_144ba3e90(param_1);
  if (uVar4 <= param_4) {
    lVar3 = param_3;
    do {
      (**(code **)(lVar2 + 0xf8))(lVar3,(param_2 - param_3) + lVar3,lVar2);
      lVar3 = lVar3 + uVar4;
    } while ((ulonglong)(lVar3 - param_3) <= param_4 - uVar4);
  }
  return 1;
}



// FUNCTION 144ba8370 FUN_144ba8370 body=388 status=ok
// SIG undefined FUN_144ba8370(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba8370(undefined8 *param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = FUN_144ba3e90();
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar3 + 0x1f0) = 0;
    uVar1 = FUN_144ba3d90(*param_1);
    *(undefined4 *)(lVar3 + 0x2e8) = uVar1;
    uVar4 = FUN_144ba3e50(param_1);
    *(undefined8 *)(lVar3 + 0x2a8) = uVar4;
    uVar4 = 1;
    *(undefined4 *)(lVar3 + 0x2ec) = 0x10;
    *(undefined8 *)(lVar3 + 0x2e0) = 0;
    break;
  default:
    uVar4 = 0xffffffff;
    break;
  case 8:
    lVar5 = FUN_144ba3e90(param_4);
    uVar4 = FUN_144ed9f20(lVar5 + 0x1f8,lVar3 + 0x1f8,lVar5,lVar5 + 0xf8);
    break;
  case 9:
    if (param_3 - 1 < 0xf) {
      *(uint *)(lVar3 + 0x2e8) = param_3;
      return 1;
    }
    goto LAB_144ba8436;
  case 0x10:
    if ((param_3 == *(uint *)(lVar3 + 0x2ec)) && (iVar2 = FUN_144ba3dc0(param_1), iVar2 != 0)) {
      memcpy(param_4,(void *)(lVar3 + 0x2b0),(longlong)(int)param_3);
      return 1;
    }
    goto LAB_144ba8436;
  case 0x11:
    if (param_4 == (undefined4 *)0x0) {
      if (param_3 < 0x11) {
        *(uint *)(lVar3 + 0x2ec) = param_3;
        return 1;
      }
    }
    else if ((param_3 == *(uint *)(lVar3 + 0x2ec)) && (iVar2 = FUN_144ba3dc0(param_1), iVar2 == 0))
    {
      memcpy((void *)(lVar3 + 0x2b0),param_4,(longlong)(int)param_3);
      return 1;
    }
LAB_144ba8436:
    uVar4 = 0;
    break;
  case 0x25:
    *param_4 = *(undefined4 *)(lVar3 + 0x2e8);
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 144ba8540 FUN_144ba8540 body=485 status=ok
// SIG undefined FUN_144ba8540(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba8540(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_144ba3e90();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(lVar2 + 0x1f0) == 0) {
      memcpy(*(void **)(lVar2 + 0x2a8),param_3,(longlong)*(int *)(lVar2 + 0x2e8));
    }
    else {
      FUN_144eda030(lVar2 + 0x1f8,param_3,(longlong)*(int *)(lVar2 + 0x2e8),
                    (longlong)*(int *)(lVar2 + 0x2ec));
    }
    *(undefined4 *)(lVar2 + 500) = 1;
    return 1;
  }
  if ((DAT_14c7973a0._4_4_ & 0x200) == 0) {
    iVar1 = FUN_144ba3de0(param_1);
    FUN_144ed50a0(param_2,iVar1 << 3,lVar2);
    iVar1 = FUN_144ba3de0(param_1);
    FUN_144ed5680(param_2,iVar1 << 3,lVar2 + 0xf8);
    uVar3 = FUN_144ed9d60(lVar2 + 0x1f8,lVar2,lVar2 + 0xf8,FUN_144ed58d0,FUN_144ed5ed0,0);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
  }
  else {
    iVar1 = FUN_144ba3de0(param_1);
    FUN_14259f9b0(param_2,iVar1 << 3,lVar2);
    iVar1 = FUN_144ba3de0(param_1);
    FUN_14259fa90(param_2,iVar1 << 3,lVar2 + 0xf8);
    iVar1 = FUN_144ed9d60(lVar2 + 0x1f8,lVar2,lVar2 + 0xf8,&DAT_14259fb80,&DAT_14259fc50,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  if ((param_3 != (void *)0x0) ||
     ((*(int *)(lVar2 + 500) != 0 && (param_3 = *(void **)(lVar2 + 0x2a8), param_3 != (void *)0x0)))
     ) {
    iVar1 = FUN_144eda030(lVar2 + 0x1f8,param_3,(longlong)*(int *)(lVar2 + 0x2e8),
                          (longlong)*(int *)(lVar2 + 0x2ec));
    if (iVar1 != 1) {
      return 0;
    }
    *(undefined4 *)(lVar2 + 500) = 1;
  }
  *(undefined4 *)(lVar2 + 0x1f0) = 1;
  return 1;
}



// FUNCTION 144ba8730 FUN_144ba8730 body=40 status=ok
// SIG undefined FUN_144ba8730(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba8730(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ba3e90();
  FUN_144eda8b0(lVar1 + 0x1f8);
  return 1;
}



// FUNCTION 144ba8760 FUN_144ba8760 body=120 status=ok
// SIG undefined FUN_144ba8760(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba8760(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144ba3e90();
  if (lVar1 == 0) {
    return 0;
  }
  FUN_14259f0c0(lVar1 + 0x100,0x1b8);
  lVar1 = *(longlong *)(lVar1 + 0x2b8);
  lVar2 = FUN_144ba3e50(param_1);
  if (lVar1 != lVar2) {
    FUN_144ea6530(lVar1,"crypto\\evp\\e_aes.c",0xb19);
  }
  return 1;
}



// FUNCTION 144ba87e0 FUN_144ba87e0 body=1120 status=ok
// SIG undefined FUN_144ba87e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ba87e0(undefined8 *param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Dst;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  size_t _Size;
  undefined4 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x144ba87f8;
  _Size = (size_t)param_3;
  lVar3 = FUN_144ba3e90();
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar3 + 0xf8) = 0;
    uVar8 = FUN_144ba3d90(*param_1);
    *(undefined4 *)(lVar3 + 0x2c0) = uVar8;
    *(undefined8 **)(lVar3 + 0x2b8) = param_1 + 5;
    *(undefined4 *)(lVar3 + 0x2c4) = 0xffffffff;
    *(undefined4 *)(lVar3 + 0x2c8) = 0;
    *(undefined4 *)(lVar3 + 0x2cc) = 0xffffffff;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    lVar4 = FUN_144ba3e90(param_4);
    if (*(longlong *)(lVar3 + 0x280) != 0) {
      if (*(longlong *)(lVar3 + 0x280) != lVar3) {
        return 0;
      }
      *(longlong *)(lVar4 + 0x280) = lVar4;
    }
    if (*(undefined8 **)(lVar3 + 0x2b8) == param_1 + 5) {
      *(undefined8 **)(lVar4 + 0x2b8) = param_4 + 5;
      return 1;
    }
    _Dst = (void *)FUN_144ea64e0((longlong)*(int *)(lVar3 + 0x2c0),"crypto\\evp\\e_aes.c",0xb9b);
    *(void **)(lVar4 + 0x2b8) = _Dst;
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,*(void **)(lVar3 + 0x2b8),(longlong)*(int *)(lVar3 + 0x2c0));
      return 1;
    }
    uVar8 = 0xb9c;
    goto LAB_144ba88e8;
  case 9:
    if (param_3 < 1) {
      return 0;
    }
    if ((param_3 < 0x11) || (param_3 <= *(int *)(lVar3 + 0x2c0))) {
LAB_144ba8909:
      *(int *)(lVar3 + 0x2c0) = param_3;
      return 1;
    }
    if (*(undefined8 **)(lVar3 + 0x2b8) != param_1 + 5) {
      FUN_144ea6530(*(undefined8 **)(lVar3 + 0x2b8),"crypto\\evp\\e_aes.c",0xb35);
    }
    lVar4 = FUN_144ea64e0(_Size,"crypto\\evp\\e_aes.c",0xb36);
    *(longlong *)(lVar3 + 0x2b8) = lVar4;
    if (lVar4 != 0) goto LAB_144ba8909;
    uVar8 = 0xb37;
LAB_144ba88e8:
    FUN_144ba24f0(6,0xc4,0x41,"crypto\\evp\\e_aes.c",uVar8,uVar9);
    break;
  case 0x10:
    if (((param_3 - 1U < 0x10) && (*(int *)(param_1 + 2) != 0)) && (-1 < *(int *)(lVar3 + 0x2c4))) {
      memcpy(param_4,param_1 + 7,_Size);
      return 1;
    }
    break;
  case 0x11:
    if ((param_3 - 1U < 0x10) && (*(int *)(param_1 + 2) == 0)) {
      memcpy(param_1 + 7,param_4,_Size);
      *(int *)(lVar3 + 0x2c4) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == -1) {
      memcpy(*(void **)(lVar3 + 0x2b8),param_4,(longlong)*(int *)(lVar3 + 0x2c0));
      *(undefined4 *)(lVar3 + 0x2c8) = 1;
      return 1;
    }
    if ((3 < param_3) && (7 < *(int *)(lVar3 + 0x2c0) - param_3)) {
      memcpy(*(void **)(lVar3 + 0x2b8),param_4,_Size);
      if ((*(int *)(param_1 + 2) != 0) &&
         (iVar2 = FUN_144bac850(*(longlong *)(lVar3 + 0x2b8) + _Size,
                                *(int *)(lVar3 + 0x2c0) - param_3), iVar2 < 1)) {
        return 0;
      }
      *(undefined4 *)(lVar3 + 0x2c8) = 1;
      return 1;
    }
    break;
  case 0x13:
    if ((*(int *)(lVar3 + 0x2c8) != 0) && (*(int *)(lVar3 + 0xf8) != 0)) {
      FUN_144ed7560(lVar3 + 0x100,*(undefined8 *)(lVar3 + 0x2b8),(longlong)*(int *)(lVar3 + 0x2c0));
      if ((param_3 < 1) || (iVar2 = *(int *)(lVar3 + 0x2c0), iVar2 < param_3)) {
        iVar2 = *(int *)(lVar3 + 0x2c0);
        param_3 = iVar2;
      }
      memcpy(param_4,(void *)(((longlong)iVar2 - (longlong)param_3) + *(longlong *)(lVar3 + 0x2b8)),
             (longlong)param_3);
      lVar7 = *(longlong *)(lVar3 + 0x2b8) + (longlong)*(int *)(lVar3 + 0x2c0) + -8;
      lVar4 = lVar7 + 8;
      do {
        pcVar1 = (char *)(lVar4 + -1);
        *pcVar1 = *pcVar1 + '\x01';
        lVar4 = lVar4 + -1;
        if (*pcVar1 != '\0') break;
      } while (lVar4 != lVar7);
      *(undefined4 *)(lVar3 + 0xfc) = 1;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      param_1[7] = *param_4;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_4 + 1);
      *(undefined1 *)((longlong)param_1 + 0x44) = *(undefined1 *)((longlong)param_4 + 0xc);
      *(undefined4 *)(lVar3 + 0x2cc) = 0xd;
      uVar5 = (uint)CONCAT11(*(undefined1 *)((longlong)param_1 + 0x43),
                             *(undefined1 *)((longlong)param_1 + 0x44));
      if (7 < uVar5) {
        uVar6 = uVar5 - 8;
        if (*(int *)(param_1 + 2) == 0) {
          if (uVar6 < 0x10) {
            return 0;
          }
          uVar6 = uVar5 - 0x18;
        }
        *(char *)((longlong)param_1 + 0x44) = (char)uVar6;
        *(char *)((longlong)param_1 + 0x43) = (char)(uVar6 >> 8);
        return 0x10;
      }
    }
    break;
  case 0x18:
    if (((*(int *)(lVar3 + 0x2c8) != 0) && (*(int *)(lVar3 + 0xf8) != 0)) &&
       (*(int *)(param_1 + 2) == 0)) {
      memcpy((void *)(((longlong)*(int *)(lVar3 + 0x2c0) - _Size) + *(longlong *)(lVar3 + 0x2b8)),
             param_4,_Size);
      FUN_144ed7560(lVar3 + 0x100,*(undefined8 *)(lVar3 + 0x2b8),(longlong)*(int *)(lVar3 + 0x2c0));
      *(undefined4 *)(lVar3 + 0xfc) = 1;
      return 1;
    }
    break;
  case 0x25:
    *(undefined4 *)param_4 = *(undefined4 *)(lVar3 + 0x2c0);
    return 1;
  }
  return 0;
}



// FUNCTION 144ba8ca0 FUN_144ba8ca0 body=305 status=ok
// SIG undefined FUN_144ba8ca0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba8ca0(longlong param_1,longlong param_2,void *param_3)

{
  longlong lVar1;
  code *pcVar2;
  
  lVar1 = FUN_144ba3e90();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(lVar1 + 0xf8) == 0) {
      memcpy(*(void **)(lVar1 + 0x2b8),param_3,(longlong)*(int *)(lVar1 + 0x2c0));
    }
    else {
      FUN_144ed7560(lVar1 + 0x100);
    }
    *(undefined4 *)(lVar1 + 0xfc) = 1;
    *(undefined4 *)(lVar1 + 0x2c8) = 0;
    return 1;
  }
  if ((DAT_14c7973a0._4_4_ & 0x200) == 0) {
    FUN_144ed50a0(param_2,*(int *)(param_1 + 0x68) << 3,lVar1);
    pcVar2 = FUN_144ed58d0;
  }
  else {
    FUN_14259f9b0();
    pcVar2 = (code *)&DAT_14259fb80;
  }
  FUN_144ed7460(lVar1 + 0x100,lVar1,pcVar2);
  *(undefined8 *)(lVar1 + 0x2d0) = 0;
  if ((param_3 != (void *)0x0) ||
     ((*(int *)(lVar1 + 0xfc) != 0 && (param_3 = *(void **)(lVar1 + 0x2b8), param_3 != (void *)0x0))
     )) {
    FUN_144ed7560(lVar1 + 0x100,param_3,(longlong)*(int *)(lVar1 + 0x2c0));
    *(undefined4 *)(lVar1 + 0xfc) = 1;
  }
  *(undefined4 *)(lVar1 + 0xf8) = 1;
  return 1;
}



// FUNCTION 144ba8de0 FUN_144ba8de0 body=195 status=ok
// SIG undefined FUN_144ba8de0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba8de0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144ba3e90();
  if (param_2 == 8) {
    lVar2 = FUN_144ba3e90(param_4);
    if (*(longlong *)(lVar1 + 0x1f0) != 0) {
      if (*(longlong *)(lVar1 + 0x1f0) != lVar1) {
        return 0;
      }
      *(longlong *)(lVar2 + 0x1f0) = lVar2;
    }
    if (*(longlong *)(lVar1 + 0x1f8) != 0) {
      if (*(longlong *)(lVar1 + 0x1f8) != lVar1 + 0xf8) {
        return 0;
      }
      *(longlong *)(lVar2 + 0x1f8) = lVar2 + 0xf8;
    }
  }
  else {
    if (param_2 != 0) {
      return 0xffffffff;
    }
    *(undefined8 *)(lVar1 + 0x1f0) = 0;
    *(undefined8 *)(lVar1 + 0x1f8) = 0;
  }
  return 1;
}



// FUNCTION 144ba8eb0 FUN_144ba8eb0 body=480 status=ok
// SIG undefined FUN_144ba8eb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba8eb0(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144ba8ec9;
  lVar3 = FUN_144ba3e90();
  if (param_3 == (undefined8 *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_144ba9055;
  iVar1 = FUN_144ba3de0(param_1);
  if ((param_4 != 0) && (iVar1 = FUN_14259f120(param_2,iVar1 / 2 + param_2), iVar1 == 0)) {
    FUN_144ba24f0(6,0xd1,0xb7,"crypto\\evp\\e_aes.c",0xd32,uVar6);
    return 0;
  }
  *(undefined8 *)(lVar3 + 0x210) = 0;
  if ((DAT_14c7973a0._4_4_ & 0x200) == 0) {
    pcVar5 = FUN_144ed58d0;
    iVar1 = FUN_144ba3de0(param_1);
    if (param_4 == 0) {
      FUN_144ed5680(param_2,iVar1 << 2,lVar3);
      *(code **)(lVar3 + 0x200) = FUN_144ed5ed0;
    }
    else {
      FUN_144ed50a0();
      *(code **)(lVar3 + 0x200) = FUN_144ed58d0;
    }
    iVar1 = FUN_144ba3de0(param_1);
    iVar2 = FUN_144ba3de0(param_1);
    FUN_144ed50a0(iVar2 / 2 + param_2,iVar1 << 2,lVar3 + 0xf8);
  }
  else {
    pcVar5 = (code *)&DAT_14259fb80;
    iVar1 = FUN_144ba3de0(param_1);
    if (param_4 == 0) {
      FUN_14259fa90(param_2,iVar1 << 2,lVar3);
      *(undefined **)(lVar3 + 0x200) = &DAT_14259fc50;
    }
    else {
      FUN_14259f9b0();
      *(undefined **)(lVar3 + 0x200) = &DAT_14259fb80;
    }
    iVar1 = FUN_144ba3de0(param_1);
    iVar2 = FUN_144ba3de0(param_1);
    FUN_14259f9b0(iVar2 / 2 + param_2,iVar1 << 2,lVar3 + 0xf8);
  }
  *(code **)(lVar3 + 0x208) = pcVar5;
  *(longlong *)(lVar3 + 0x1f0) = lVar3;
LAB_144ba9055:
  if (param_3 != (undefined8 *)0x0) {
    *(longlong *)(lVar3 + 0x1f8) = lVar3 + 0xf8;
    puVar4 = (undefined8 *)FUN_144ba3e50(param_1);
    uVar6 = param_3[1];
    *puVar4 = *param_3;
    puVar4[1] = uVar6;
  }
  return 1;
}



// FUNCTION 144ba9090 FUN_144ba9090 body=298 status=ok
// SIG undefined FUN_144ba9090(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_144ba9090(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  bool bVar7;
  
  lVar3 = FUN_144ba3e90();
  uVar4 = FUN_144ba3db0(param_1);
  uVar1 = FUN_144ba3da0(uVar4);
  uVar1 = uVar1 & 0xf0007;
  if ((uVar1 - 1 < 2) && (param_4 == 0)) {
    iVar2 = FUN_144ba3de0(param_1);
    iVar2 = FUN_1425a4630(param_2,iVar2 << 3,lVar3);
    *(undefined1 **)(lVar3 + 0xf8) = &LAB_1425a0390;
    pcVar6 = FUN_1425a3bf0;
    bVar7 = uVar1 == 2;
  }
  else {
    iVar2 = FUN_144ba3de0(param_1);
    iVar2 = FUN_1425a46a0(param_2,iVar2 << 3,lVar3);
    *(undefined1 **)(lVar3 + 0xf8) = &LAB_1425a0340;
    if (uVar1 == 2) {
      *(code **)(lVar3 + 0x100) = FUN_1425a3bf0;
      goto LAB_144ba9170;
    }
    pcVar6 = (code *)&DAT_1425a1380;
    bVar7 = uVar1 == 5;
  }
  pcVar5 = (code *)0x0;
  if (bVar7) {
    pcVar5 = pcVar6;
  }
  *(code **)(lVar3 + 0x100) = pcVar5;
LAB_144ba9170:
  if (-1 >= iVar2) {
    FUN_144ba24f0(6,0xa5,0x8f,"crypto\\evp\\e_aes.c",0x126);
  }
  return -1 < iVar2;
}



// FUNCTION 144ba91c0 FUN_144ba91c0 body=127 status=ok
// SIG undefined FUN_144ba91c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ba91c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  uVar1 = FUN_144ba3dc0();
  uVar2 = FUN_144ba3e50(param_1);
  uVar3 = FUN_144ba3e90(param_1);
  FUN_1425a3bf0(param_3,param_2,param_4,uVar3,uVar2,CONCAT44(uVar4,uVar1));
  return 1;
}



// FUNCTION 144ba9240 FUN_144ba9240 body=630 status=ok
// SIG undefined FUN_144ba9240(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_144ba9240(undefined8 param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int *piVar6;
  void *_Dst;
  ushort uVar7;
  ulonglong _Size;
  
  _Size = (ulonglong)param_3;
  lVar3 = FUN_144ba3e90();
  switch(param_2) {
  case 0:
    *(undefined4 *)(lVar3 + 0x108) = 8;
    *(undefined8 *)(lVar3 + 0xf8) = 0;
    *(undefined8 *)(lVar3 + 0x100) = 0;
    *(undefined4 *)(lVar3 + 0x10c) = 0xc;
    *(undefined4 *)(lVar3 + 0x110) = 0xffffffff;
    return 1;
  default:
    return 0xffffffff;
  case 8:
    lVar5 = FUN_144ba3e90(param_4);
    if (*(longlong *)(lVar3 + 0x148) != 0) {
      if (*(longlong *)(lVar3 + 0x148) != lVar3) {
        return 0;
      }
      *(longlong *)(lVar5 + 0x148) = lVar5;
    }
    return 1;
  case 9:
    param_3 = 0xf - param_3;
  case 0x14:
    if (param_3 - 2U < 7) {
      *(int *)(lVar3 + 0x108) = param_3;
      return 1;
    }
    break;
  case 0x10:
    iVar2 = FUN_144ba3dc0(param_1);
    if (((iVar2 != 0) && (*(int *)(lVar3 + 0x100) != 0)) &&
       (lVar5 = FUN_144ed9490(lVar3 + 0x118,param_4,_Size), lVar5 != 0)) {
      *(undefined8 *)(lVar3 + 0xfc) = 0;
      *(undefined4 *)(lVar3 + 0x104) = 0;
      return 1;
    }
    break;
  case 0x11:
    if (((_Size & 1) == 0) && (param_3 - 4U < 0xd)) {
      iVar2 = FUN_144ba3dc0(param_1);
      if (iVar2 == 0) {
        if (param_4 != (int *)0x0) {
          *(undefined4 *)(lVar3 + 0x100) = 1;
          _Dst = (void *)FUN_144ba3e60(param_1);
          memcpy(_Dst,param_4,_Size);
        }
      }
      else if (param_4 != (int *)0x0) {
        return 0;
      }
      *(int *)(lVar3 + 0x10c) = param_3;
      return 1;
    }
    break;
  case 0x12:
    if (param_3 == 4) {
      piVar6 = (int *)FUN_144ba3e50(param_1);
      *piVar6 = *param_4;
      return 1;
    }
    break;
  case 0x16:
    if (param_3 == 0xd) {
      puVar4 = (undefined8 *)FUN_144ba3e60(param_1);
      *puVar4 = *(undefined8 *)param_4;
      *(int *)(puVar4 + 1) = param_4[2];
      *(char *)((longlong)puVar4 + 0xc) = (char)param_4[3];
      *(undefined4 *)(lVar3 + 0x110) = 0xd;
      lVar5 = FUN_144ba3e60(param_1);
      uVar1 = *(undefined1 *)(lVar5 + 0xb);
      lVar5 = FUN_144ba3e60(param_1);
      uVar7 = CONCAT11(uVar1,*(undefined1 *)(lVar5 + 0xc));
      if (7 < uVar7) {
        uVar7 = uVar7 - 8;
        iVar2 = FUN_144ba3dc0(param_1);
        if (iVar2 == 0) {
          if ((int)(uint)uVar7 < *(int *)(lVar3 + 0x10c)) {
            return 0;
          }
          uVar7 = uVar7 - *(short *)(lVar3 + 0x10c);
        }
        lVar5 = FUN_144ba3e60(param_1);
        *(char *)(lVar5 + 0xb) = (char)(uVar7 >> 8);
        lVar5 = FUN_144ba3e60(param_1);
        *(char *)(lVar5 + 0xc) = (char)uVar7;
        return *(undefined4 *)(lVar3 + 0x10c);
      }
    }
    break;
  case 0x25:
    *param_4 = 0xf - *(int *)(lVar3 + 0x108);
    return 1;
  }
  return 0;
}



// FUNCTION 144ba9510 FUN_144ba9510 body=131 status=ok
// SIG undefined FUN_144ba9510(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba9510(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0x144ba952b;
  iVar1 = FUN_144ba3dd0();
  if ((ulonglong)(longlong)iVar1 <= param_4) {
    uVar2 = FUN_144ba3dc0(param_1);
    uVar3 = FUN_144ba3e90(param_1);
    FUN_1425a0a80(param_3,param_2,param_4,uVar3,uVar2,uVar4);
  }
  return 1;
}



// FUNCTION 144ba95a0 FUN_144ba95a0 body=163 status=ok
// SIG undefined FUN_144ba95a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ba95a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x144ba95c0;
  lVar1 = FUN_144ba3e90();
  local_18[0] = FUN_144ba3e70(param_1);
  uVar2 = FUN_144ba3e50(param_1);
  FUN_144ed6db0(param_3,param_2,param_4,lVar1,uVar2,local_18,*(undefined8 *)(lVar1 + 0xf8));
  FUN_144ba3e80(param_1,local_18[0]);
  return 1;
}



// FUNCTION 144ba9650 FUN_144ba9650 body=176 status=ok
// SIG undefined FUN_144ba9650(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ba9650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x144ba966e;
  lVar2 = FUN_144ba3e90();
  local_28[0] = FUN_144ba3e70(param_1);
  uVar1 = FUN_144ba3dc0(param_1);
  uVar3 = FUN_144ba3e50(param_1);
  FUN_144ed6f20(param_3,param_2,param_4,lVar2,uVar3,local_28,uVar1,*(undefined8 *)(lVar2 + 0xf8));
  FUN_144ba3e80(param_1,local_28[0]);
  return 1;
}



// FUNCTION 144ba9700 FUN_144ba9700 body=176 status=ok
// SIG undefined FUN_144ba9700(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ba9700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x144ba971e;
  lVar2 = FUN_144ba3e90();
  local_28[0] = FUN_144ba3e70(param_1);
  uVar1 = FUN_144ba3dc0(param_1);
  uVar3 = FUN_144ba3e50(param_1);
  FUN_144ed71b0(param_3,param_2,param_4,lVar2,uVar3,local_28,uVar1,*(undefined8 *)(lVar2 + 0xf8));
  FUN_144ba3e80(param_1,local_28[0]);
  return 1;
}



// FUNCTION 144ba97b0 FUN_144ba97b0 body=414 status=ok
// SIG undefined FUN_144ba97b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba97b0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 local_38 [2];
  undefined8 uStack_30;
  
  uStack_30 = 0x144ba97c7;
  lVar3 = FUN_144ba3e90();
  iVar1 = FUN_144ba3f00(param_1,0x2000);
  if (iVar1 == 0) {
    if (0xfffffffffffffff < param_4) {
      uVar5 = param_4 >> 0x3c;
      param_4 = param_4 + uVar5 * -0x1000000000000000;
      do {
        local_38[0] = FUN_144ba3e70(param_1);
        uVar2 = FUN_144ba3dc0(param_1);
        uVar4 = FUN_144ba3e50(param_1);
        FUN_144ed7280(param_3,param_2,0x8000000000000000,lVar3,uVar4,local_38,uVar2,
                      *(undefined8 *)(lVar3 + 0xf8));
        FUN_144ba3e80(param_1,local_38[0]);
        param_2 = param_2 + 0x1000000000000000;
        param_3 = param_3 + 0x1000000000000000;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (param_4 == 0) {
      return 1;
    }
    local_38[0] = FUN_144ba3e70(param_1);
    uVar2 = FUN_144ba3dc0(param_1);
    uVar4 = FUN_144ba3e50(param_1);
    param_4 = param_4 * 8;
  }
  else {
    local_38[0] = FUN_144ba3e70(param_1);
    uVar2 = FUN_144ba3dc0(param_1);
    uVar4 = FUN_144ba3e50(param_1);
  }
  FUN_144ed7280(param_3,param_2,param_4,lVar3,uVar4,local_38,uVar2,*(undefined8 *)(lVar3 + 0xf8));
  FUN_144ba3e80(param_1,local_38[0]);
  return 1;
}



// FUNCTION 144ba9950 FUN_144ba9950 body=270 status=ok
// SIG undefined FUN_144ba9950(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba9950(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  void *_Dst;
  undefined8 uVar4;
  
  uVar4 = 0x144ba996a;
  lVar2 = FUN_144ba3e90();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_144ba9a11;
  if ((DAT_14c7973a0._4_4_ & 0x200) == 0) {
    iVar1 = FUN_144ba3de0(param_1);
    FUN_144ed50a0(param_2,iVar1 << 3,lVar2);
    pcVar3 = FUN_144ed58d0;
  }
  else {
    iVar1 = FUN_144ba3de0(param_1);
    FUN_14259f9b0(param_2,iVar1 << 3,lVar2);
    pcVar3 = (code *)&DAT_14259fb80;
  }
  FUN_144ed88c0(lVar2 + 0x118,*(undefined4 *)(lVar2 + 0x10c),*(undefined4 *)(lVar2 + 0x108),lVar2,
                pcVar3,uVar4);
  *(undefined4 *)(lVar2 + 0xf8) = 1;
  *(undefined8 *)(lVar2 + 0x150) = 0;
LAB_144ba9a11:
  if (param_3 != (void *)0x0) {
    iVar1 = *(int *)(lVar2 + 0x108);
    _Dst = (void *)FUN_144ba3e50(param_1);
    memcpy(_Dst,param_3,(longlong)(0xf - iVar1));
    *(undefined4 *)(lVar2 + 0xfc) = 1;
  }
  return 1;
}



// FUNCTION 144ba9a60 FUN_144ba9a60 body=234 status=ok
// SIG undefined FUN_144ba9a60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144ba9a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_28 [2];
  undefined8 uStack_20;
  
  uStack_20 = 0x144ba9a84;
  local_28[0] = FUN_144ba3e70();
  lVar2 = FUN_144ba3e90(param_1);
  lVar1 = *(longlong *)(lVar2 + 0x100);
  uVar3 = FUN_144ba3e60(param_1);
  uVar4 = FUN_144ba3e50(param_1);
  if (lVar1 == 0) {
    FUN_144ed69a0(param_3,param_2,param_4,lVar2,uVar4,uVar3,local_28,*(undefined8 *)(lVar2 + 0xf8));
  }
  else {
    FUN_144ed6ba0(param_3);
  }
  FUN_144ba3e80(param_1,local_28[0]);
  return 1;
}



// FUNCTION 144ba9b50 FUN_144ba9b50 body=290 status=ok
// SIG undefined FUN_144ba9b50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba9b50(undefined8 param_1,longlong param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144ba3e90();
  if (param_3 == (void *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) {
    if (*(int *)(lVar2 + 0xf8) == 0) {
      memcpy(*(void **)(lVar2 + 0x2b8),param_3,(longlong)*(int *)(lVar2 + 0x2c0));
    }
    else {
      FUN_144ed7560(lVar2 + 0x100);
    }
    *(undefined4 *)(lVar2 + 0xfc) = 1;
    *(undefined4 *)(lVar2 + 0x2c8) = 0;
    return 1;
  }
  iVar1 = FUN_144ba3de0(param_1);
  FUN_1425a46a0(param_2,iVar1 << 3,lVar2);
  FUN_144ed7460(lVar2 + 0x100,lVar2,&LAB_1425a0340);
  *(undefined **)(lVar2 + 0x2d0) = &DAT_1425a1380;
  if ((param_3 != (void *)0x0) ||
     ((*(int *)(lVar2 + 0xfc) != 0 && (param_3 = *(void **)(lVar2 + 0x2b8), param_3 != (void *)0x0))
     )) {
    FUN_144ed7560(lVar2 + 0x100,param_3,(longlong)*(int *)(lVar2 + 0x2c0));
    *(undefined4 *)(lVar2 + 0xfc) = 1;
  }
  *(undefined4 *)(lVar2 + 0xf8) = 1;
  return 1;
}



// FUNCTION 144ba9c80 FUN_144ba9c80 body=717 status=ok
// SIG undefined FUN_144ba9c80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144ba9c80(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0x144ba9c98;
  lVar3 = FUN_144ba3e90();
  if (*(int *)(lVar3 + 0xf8) == 0) {
    return 0xffffffff;
  }
  if (-1 < *(int *)(lVar3 + 0x2cc)) {
    uVar4 = FUN_144baa540(param_1,param_2,param_3,param_4);
    return uVar4;
  }
  if (*(int *)(lVar3 + 0xfc) == 0) {
    return 0xffffffff;
  }
  if (param_3 != 0) {
    if (param_2 == 0) {
      iVar2 = FUN_144ed76f0(lVar3 + 0x100,param_3,param_4);
    }
    else {
      puVar1 = *(undefined **)(lVar3 + 0x2d0);
      if (*(int *)(param_1 + 0x10) == 0) {
        if (puVar1 == (undefined *)0x0) {
          iVar2 = FUN_144ed7ba0(lVar3 + 0x100,param_3,param_2,param_4);
        }
        else {
          lVar5 = 0;
          if (((0xf < param_4) && (puVar1 == &DAT_1425a1380)) &&
             (*(undefined **)(lVar3 + 0x268) == &DAT_1425a7560)) {
            uVar4 = (ulonglong)(-*(int *)(lVar3 + 0x270) & 0xf);
            iVar2 = FUN_144ed7ba0(lVar3 + 0x100,param_3,param_2,uVar4);
            if (iVar2 != 0) {
              return 0xffffffff;
            }
            lVar6 = lVar3 + 0x140;
            lVar5 = FUN_1425a5580(uVar4 + param_3,uVar4 + param_2,param_4 - uVar4,
                                  *(undefined8 *)(lVar3 + 0x280),lVar3 + 0x100,lVar6);
            *(longlong *)(lVar3 + 0x138) = *(longlong *)(lVar3 + 0x138) + lVar5;
            lVar5 = lVar5 + uVar4;
          }
          iVar2 = FUN_144ed8200(lVar3 + 0x100,lVar5 + param_3,lVar5 + param_2,param_4 - lVar5,
                                *(undefined8 *)(lVar3 + 0x2d0),lVar6);
        }
      }
      else if (puVar1 == (undefined *)0x0) {
        iVar2 = FUN_144ed7820(lVar3 + 0x100,param_3,param_2,param_4);
      }
      else {
        lVar6 = 0;
        if (((0x1f < param_4) && (puVar1 == &DAT_1425a1380)) &&
           (*(undefined **)(lVar3 + 0x268) == &DAT_1425a7560)) {
          uVar4 = (ulonglong)(-*(int *)(lVar3 + 0x270) & 0xf);
          iVar2 = FUN_144ed7820(lVar3 + 0x100,param_3,param_2,uVar4);
          if (iVar2 != 0) {
            return 0xffffffff;
          }
          lVar6 = FUN_1425a5900(uVar4 + param_3,uVar4 + param_2,param_4 - uVar4,
                                *(undefined8 *)(lVar3 + 0x280),lVar3 + 0x100,lVar3 + 0x140);
          *(longlong *)(lVar3 + 0x138) = *(longlong *)(lVar3 + 0x138) + lVar6;
          lVar6 = lVar6 + uVar4;
        }
        iVar2 = FUN_144ed7f00(lVar3 + 0x100,lVar6 + param_3,lVar6 + param_2,param_4 - lVar6,
                              *(undefined8 *)(lVar3 + 0x2d0));
      }
    }
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    return param_4 & 0xffffffff;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int *)(lVar3 + 0x2c4) < 0) {
      return 0xffffffff;
    }
    iVar2 = FUN_144ed84f0(lVar3 + 0x100,param_1 + 0x38,(longlong)*(int *)(lVar3 + 0x2c4));
    if (iVar2 != 0) {
      return 0xffffffff;
    }
  }
  else {
    FUN_144ed8620(lVar3 + 0x100,param_1 + 0x38,0x10);
    *(undefined4 *)(lVar3 + 0x2c4) = 0x10;
  }
  *(undefined4 *)(lVar3 + 0xfc) = 0;
  return 0;
}



// FUNCTION 144ba9f50 FUN_144ba9f50 body=387 status=ok
// SIG undefined FUN_144ba9f50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144ba9f50(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144ba9f6f;
  lVar3 = FUN_144ba3e90();
  if (param_3 == (undefined8 *)0x0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 == 0) goto LAB_144baa092;
  iVar1 = FUN_144ba3de0(param_1);
  if (param_4 == 0) {
    iVar1 = FUN_144ba3de0(param_1);
    FUN_1425a4630(param_2,iVar1 << 2,lVar3);
    *(undefined1 **)(lVar3 + 0x200) = &LAB_1425a0390;
    puVar4 = &DAT_1425a25b0;
  }
  else {
    iVar1 = FUN_14259f120(param_2,iVar1 / 2 + param_2);
    if (iVar1 == 0) {
      FUN_144ba24f0(6,0xcf,0xb7,"crypto\\evp\\e_aes.c",0x191,uVar6);
      return 0;
    }
    iVar1 = FUN_144ba3de0(param_1);
    FUN_1425a46a0(param_2,iVar1 << 2,lVar3);
    puVar4 = &DAT_1425a1d80;
    *(undefined1 **)(lVar3 + 0x200) = &LAB_1425a0340;
  }
  *(undefined **)(lVar3 + 0x210) = puVar4;
  iVar1 = FUN_144ba3de0(param_1);
  iVar2 = FUN_144ba3de0(param_1);
  FUN_1425a46a0(iVar2 / 2 + param_2,iVar1 << 2,lVar3 + 0xf8);
  *(undefined1 **)(lVar3 + 0x208) = &LAB_1425a0340;
  *(longlong *)(lVar3 + 0x1f0) = lVar3;
LAB_144baa092:
  if (param_3 != (undefined8 *)0x0) {
    *(longlong *)(lVar3 + 0x1f8) = lVar3 + 0xf8;
    puVar5 = (undefined8 *)FUN_144ba3e50(param_1);
    uVar6 = param_3[1];
    *puVar5 = *param_3;
    puVar5[1] = uVar6;
  }
  return 1;
}



// FUNCTION 144baa0e0 FUN_144baa0e0 body=29 status=ok
// SIG undefined FUN_144baa0e0(void)

undefined * FUN_144baa0e0(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_149979f20;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_149979ec0;
  }
  return puVar1;
}



// FUNCTION 144baa100 FUN_144baa100 body=29 status=ok
// SIG undefined FUN_144baa100(void)

undefined * FUN_144baa100(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_149979e60;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_149979e00;
  }
  return puVar1;
}



// FUNCTION 144baa120 FUN_144baa120 body=29 status=ok
// SIG undefined FUN_144baa120(void)

undefined * FUN_144baa120(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997a2e0;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997a1c0;
  }
  return puVar1;
}



// FUNCTION 144baa140 FUN_144baa140 body=29 status=ok
// SIG undefined FUN_144baa140(void)

undefined * FUN_144baa140(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997a460;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997a3a0;
  }
  return puVar1;
}



// FUNCTION 144baa160 FUN_144baa160 body=29 status=ok
// SIG undefined FUN_144baa160(void)

undefined * FUN_144baa160(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997a100;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997a040;
  }
  return puVar1;
}



// FUNCTION 144baa180 FUN_144baa180 body=29 status=ok
// SIG undefined FUN_144baa180(void)

undefined * FUN_144baa180(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_149979fe0;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_149979f80;
  }
  return puVar1;
}



// FUNCTION 144baa1a0 FUN_144baa1a0 body=29 status=ok
// SIG undefined FUN_144baa1a0(void)

undefined * FUN_144baa1a0(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997a520;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997a4c0;
  }
  return puVar1;
}



// FUNCTION 144baa1c0 FUN_144baa1c0 body=29 status=ok
// SIG undefined FUN_144baa1c0(void)

undefined * FUN_144baa1c0(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_1499799e0;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_149979980;
  }
  return puVar1;
}



// FUNCTION 144baa1e0 FUN_144baa1e0 body=29 status=ok
// SIG undefined FUN_144baa1e0(void)

undefined * FUN_144baa1e0(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997b060;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997b000;
  }
  return puVar1;
}



// FUNCTION 144baa200 FUN_144baa200 body=29 status=ok
// SIG undefined FUN_144baa200(void)

undefined * FUN_144baa200(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997b2a0;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997b240;
  }
  return puVar1;
}



// FUNCTION 144baa220 FUN_144baa220 body=8 status=ok
// SIG undefined FUN_144baa220(void)

undefined * FUN_144baa220(void)

{
  return &DAT_149979bc0;
}



// FUNCTION 144baa230 FUN_144baa230 body=8 status=ok
// SIG undefined FUN_144baa230(void)

undefined * FUN_144baa230(void)

{
  return &DAT_149979ce0;
}



// FUNCTION 144baa240 FUN_144baa240 body=29 status=ok
// SIG undefined FUN_144baa240(void)

undefined * FUN_144baa240(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997a160;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997a0a0;
  }
  return puVar1;
}



// FUNCTION 144baa260 FUN_144baa260 body=29 status=ok
// SIG undefined FUN_144baa260(void)

undefined * FUN_144baa260(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997a6a0;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997a640;
  }
  return puVar1;
}



// FUNCTION 144baa280 FUN_144baa280 body=29 status=ok
// SIG undefined FUN_144baa280(void)

undefined * FUN_144baa280(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997a5e0;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997a580;
  }
  return puVar1;
}



// FUNCTION 144baa2a0 FUN_144baa2a0 body=29 status=ok
// SIG undefined FUN_144baa2a0(void)

undefined * FUN_144baa2a0(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997a8e0;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997a880;
  }
  return puVar1;
}



// FUNCTION 144baa2c0 FUN_144baa2c0 body=29 status=ok
// SIG undefined FUN_144baa2c0(void)

undefined * FUN_144baa2c0(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997a9a0;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997a940;
  }
  return puVar1;
}



// FUNCTION 144baa2e0 FUN_144baa2e0 body=29 status=ok
// SIG undefined FUN_144baa2e0(void)

undefined * FUN_144baa2e0(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997a820;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997a7c0;
  }
  return puVar1;
}



// FUNCTION 144baa300 FUN_144baa300 body=29 status=ok
// SIG undefined FUN_144baa300(void)

undefined * FUN_144baa300(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997a760;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997a700;
  }
  return puVar1;
}



// FUNCTION 144baa320 FUN_144baa320 body=29 status=ok
// SIG undefined FUN_144baa320(void)

undefined * FUN_144baa320(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997aa60;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997aa00;
  }
  return puVar1;
}



// FUNCTION 144baa340 FUN_144baa340 body=29 status=ok
// SIG undefined FUN_144baa340(void)

undefined * FUN_144baa340(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_149979aa0;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_149979a40;
  }
  return puVar1;
}



// FUNCTION 144baa360 FUN_144baa360 body=29 status=ok
// SIG undefined FUN_144baa360(void)

undefined * FUN_144baa360(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997b120;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997b0c0;
  }
  return puVar1;
}



// FUNCTION 144baa380 FUN_144baa380 body=8 status=ok
// SIG undefined FUN_144baa380(void)

undefined * FUN_144baa380(void)

{
  return &DAT_149979c20;
}



// FUNCTION 144baa390 FUN_144baa390 body=8 status=ok
// SIG undefined FUN_144baa390(void)

undefined * FUN_144baa390(void)

{
  return &DAT_149979d40;
}



// FUNCTION 144baa3a0 FUN_144baa3a0 body=29 status=ok
// SIG undefined FUN_144baa3a0(void)

undefined * FUN_144baa3a0(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997a280;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997a220;
  }
  return puVar1;
}



// FUNCTION 144baa3c0 FUN_144baa3c0 body=29 status=ok
// SIG undefined FUN_144baa3c0(void)

undefined * FUN_144baa3c0(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997abe0;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997ab80;
  }
  return puVar1;
}



// FUNCTION 144baa3e0 FUN_144baa3e0 body=29 status=ok
// SIG undefined FUN_144baa3e0(void)

undefined * FUN_144baa3e0(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997ab20;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997aac0;
  }
  return puVar1;
}



// FUNCTION 144baa400 FUN_144baa400 body=29 status=ok
// SIG undefined FUN_144baa400(void)

undefined * FUN_144baa400(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997ae20;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997adc0;
  }
  return puVar1;
}



// FUNCTION 144baa420 FUN_144baa420 body=29 status=ok
// SIG undefined FUN_144baa420(void)

undefined * FUN_144baa420(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997aee0;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997ae80;
  }
  return puVar1;
}



// FUNCTION 144baa440 FUN_144baa440 body=29 status=ok
// SIG undefined FUN_144baa440(void)

undefined * FUN_144baa440(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997ad60;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997ad00;
  }
  return puVar1;
}



// FUNCTION 144baa460 FUN_144baa460 body=29 status=ok
// SIG undefined FUN_144baa460(void)

undefined * FUN_144baa460(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997aca0;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997ac40;
  }
  return puVar1;
}



// FUNCTION 144baa480 FUN_144baa480 body=29 status=ok
// SIG undefined FUN_144baa480(void)

undefined * FUN_144baa480(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997afa0;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997af40;
  }
  return puVar1;
}



// FUNCTION 144baa4a0 FUN_144baa4a0 body=29 status=ok
// SIG undefined FUN_144baa4a0(void)

undefined * FUN_144baa4a0(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_149979b60;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_149979b00;
  }
  return puVar1;
}



// FUNCTION 144baa4c0 FUN_144baa4c0 body=29 status=ok
// SIG undefined FUN_144baa4c0(void)

undefined * FUN_144baa4c0(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997b1e0;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997b180;
  }
  return puVar1;
}



// FUNCTION 144baa4e0 FUN_144baa4e0 body=29 status=ok
// SIG undefined FUN_144baa4e0(void)

undefined * FUN_144baa4e0(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997b360;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997b300;
  }
  return puVar1;
}



// FUNCTION 144baa500 FUN_144baa500 body=8 status=ok
// SIG undefined FUN_144baa500(void)

undefined * FUN_144baa500(void)

{
  return &DAT_149979c80;
}



// FUNCTION 144baa510 FUN_144baa510 body=8 status=ok
// SIG undefined FUN_144baa510(void)

undefined * FUN_144baa510(void)

{
  return &DAT_149979da0;
}



// FUNCTION 144baa520 FUN_144baa520 body=29 status=ok
// SIG undefined FUN_144baa520(void)

undefined * FUN_144baa520(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_14997a400;
  if ((DAT_14c7973a0._4_4_ & 0x2000000) != 0) {
    puVar1 = &DAT_14997a340;
  }
  return puVar1;
}



// FUNCTION 144baa540 FUN_144baa540 body=684 status=ok
// SIG undefined FUN_144baa540(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144baa540(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  longlong lVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar9 = 0x144baa557;
  lVar5 = FUN_144ba3e90();
  iVar4 = -1;
  if ((param_2 == param_3) && (0x17 < param_4)) {
    uVar7 = 0x18;
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar7 = 0x13;
    }
    iVar3 = FUN_144ba5290(param_1,uVar7,8,param_2);
    iVar8 = -1;
    if (0 < iVar3) {
      lVar1 = lVar5 + 0x100;
      iVar3 = FUN_144ed76f0(lVar1,param_1 + 0x38,(longlong)*(int *)(lVar5 + 0x2cc));
      iVar8 = iVar4;
      if (iVar3 == 0) {
        puVar2 = *(undefined **)(lVar5 + 0x2d0);
        param_3 = param_3 + 8;
        param_2 = param_2 + 8;
        param_4 = param_4 - 0x18;
        if (*(int *)(param_1 + 0x10) == 0) {
          if (puVar2 == (undefined *)0x0) {
            iVar3 = FUN_144ed7ba0(lVar1,param_3,param_2,param_4);
          }
          else {
            lVar6 = 0;
            if (((0xf < param_4) && (puVar2 == &DAT_1425a1380)) &&
               (*(undefined **)(lVar5 + 0x268) == &DAT_1425a7560)) {
              iVar3 = FUN_144ed7ba0(lVar1,0,0,0);
              if (iVar3 != 0) {
                return -1;
              }
              lVar9 = lVar5 + 0x140;
              lVar6 = FUN_1425a5580(param_3,param_2,param_4,*(undefined8 *)(lVar5 + 0x280),lVar1,
                                    lVar9);
              *(longlong *)(lVar5 + 0x138) = *(longlong *)(lVar5 + 0x138) + lVar6;
            }
            iVar3 = FUN_144ed8200(lVar1,lVar6 + param_3,lVar6 + param_2,param_4 - lVar6,
                                  *(undefined8 *)(lVar5 + 0x2d0),lVar9);
          }
          if (iVar3 == 0) {
            FUN_144ed8620(lVar1,param_1 + 0x38,0x10);
            iVar3 = FUN_14259f120(param_1 + 0x38,param_3 + param_4,0x10);
            iVar8 = (int)param_4;
            if (iVar3 != 0) {
              FUN_14259f0c0(param_2,param_4);
              iVar8 = iVar4;
            }
          }
        }
        else {
          if (puVar2 == (undefined *)0x0) {
            iVar4 = FUN_144ed7820(lVar1,param_3,param_2,param_4);
          }
          else {
            lVar9 = 0;
            if (((0x1f < param_4) && (puVar2 == &DAT_1425a1380)) &&
               (*(undefined **)(lVar5 + 0x268) == &DAT_1425a7560)) {
              iVar4 = FUN_144ed7820(lVar1,0,0,0);
              if (iVar4 != 0) {
                return -1;
              }
              lVar9 = FUN_1425a5900(param_3,param_2,param_4,*(undefined8 *)(lVar5 + 0x280),lVar1,
                                    lVar5 + 0x140);
              *(longlong *)(lVar5 + 0x138) = *(longlong *)(lVar5 + 0x138) + lVar9;
            }
            iVar4 = FUN_144ed7f00(lVar1,lVar9 + param_3,lVar9 + param_2,param_4 - lVar9,
                                  *(undefined8 *)(lVar5 + 0x2d0));
          }
          if (iVar4 == 0) {
            FUN_144ed8620(lVar1,param_2 + param_4,0x10);
            iVar8 = (int)param_4 + 0x18;
          }
        }
      }
    }
    *(undefined4 *)(lVar5 + 0xfc) = 0;
    *(undefined4 *)(lVar5 + 0x2cc) = 0xffffffff;
    return iVar8;
  }
  return -1;
}



// FUNCTION 144baa7f0 FUN_144baa7f0 body=475 status=ok
// SIG undefined FUN_144baa7f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baa7f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_144ba3e90();
  lVar7 = lVar3 + 0x118;
  if ((param_2 == param_3) && ((longlong)*(int *)(lVar3 + 0x10c) + 8U <= param_4)) {
    iVar2 = FUN_144ba3dc0(param_1);
    if (iVar2 != 0) {
      puVar4 = (undefined8 *)FUN_144ba3e60(param_1);
      *param_2 = *puVar4;
    }
    lVar5 = FUN_144ba3e50(param_1);
    *(undefined8 *)(lVar5 + 4) = *param_3;
    lVar5 = param_4 - (longlong)(*(int *)(lVar3 + 0x10c) + 8);
    iVar2 = *(int *)(lVar3 + 0x108);
    uVar6 = FUN_144ba3e50(param_1);
    iVar2 = FUN_144ed8900(lVar7,uVar6,(longlong)(0xf - iVar2),lVar5);
    if (iVar2 == 0) {
      iVar2 = *(int *)(lVar3 + 0x110);
      uVar6 = FUN_144ba3e60(param_1);
      FUN_144ed89b0(lVar7,uVar6,(longlong)iVar2);
      param_2 = param_2 + 1;
      iVar2 = FUN_144ba3dc0(param_1);
      lVar1 = *(longlong *)(lVar3 + 0x150);
      if (iVar2 == 0) {
        if (lVar1 == 0) {
          iVar2 = FUN_144ed8dd0(lVar7,param_3 + 1,param_2,lVar5);
        }
        else {
          local_68 = lVar1;
          iVar2 = FUN_144ed9280();
        }
        if (((iVar2 != 0) ||
            (lVar7 = FUN_144ed9490(lVar7,local_58,(longlong)*(int *)(lVar3 + 0x10c)), lVar7 == 0))
           || (iVar2 = FUN_14259f120(local_58,lVar5 + (longlong)(param_3 + 1),
                                     (longlong)*(int *)(lVar3 + 0x10c)), iVar2 != 0)) {
          FUN_14259f0c0(param_2,lVar5);
        }
      }
      else {
        if (lVar1 == 0) {
          iVar2 = FUN_144ed8b10();
        }
        else {
          local_68 = lVar1;
          iVar2 = FUN_144ed8fb0();
        }
        if (iVar2 == 0) {
          FUN_144ed9490(lVar7,lVar5 + (longlong)param_2,(longlong)*(int *)(lVar3 + 0x10c));
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 144baa9e0 FUN_144baa9e0 body=86 status=ok
// SIG undefined FUN_144baa9e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144baa9e0(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = FUN_144ea8ee0(*param_1);
    iVar1 = FUN_144e98940(uVar2,2,param_1);
    if (iVar1 != 0) {
      uVar2 = FUN_144ea8e20(*param_1);
      uVar2 = FUN_144e98940(uVar2,2,param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 144baaa40 FUN_144baaa40 body=163 status=ok
// SIG undefined FUN_144baaa40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144baaa40(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_144ea8ee0(*param_1);
  iVar1 = FUN_144e98940(uVar2,1,param_1);
  if (iVar1 != 0) {
    uVar3 = FUN_144ea8e20(*param_1);
    uVar3 = FUN_144e98940(uVar3,1,param_1);
    if ((int)uVar3 != 0) {
      if ((param_1[1] != 0) && (*param_1 != param_1[1])) {
        uVar3 = FUN_144ea8ee0();
        iVar1 = FUN_144e98940(uVar3,0x8001,uVar2);
        if (iVar1 == 0) {
          return 0;
        }
        uVar3 = FUN_144ea8e20(param_1[1]);
        uVar3 = FUN_144e98940(uVar3,0x8001,uVar2);
      }
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 144baaaf0 FUN_144baaaf0 body=58 status=ok
// SIG undefined FUN_144baaaf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144baaaf0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_144bab1c0(4,0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_144e98850(param_1,2);
  return uVar2;
}



// FUNCTION 144baab30 FUN_144baab30 body=58 status=ok
// SIG undefined FUN_144baab30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144baab30(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_144bab1c0(8,0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_144e98850(param_1,1);
  return uVar2;
}



// FUNCTION 144baab70 FUN_144baab70 body=58 status=ok
// SIG undefined FUN_144baab70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baab70(void)

{
  FUN_144e98b90(2);
  FUN_144e98b90(1);
  FUN_144e98b90(0xffffffff);
  FUN_144edb210();
  FUN_144edae30();
  FUN_144ed19f0();
  return;
}



// FUNCTION 144baabb0 FUN_144baabb0 body=30 status=ok
// SIG undefined FUN_144baabb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baabb0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_144baedb0(uVar1);
  return;
}



// FUNCTION 144baabd0 FUN_144baabd0 body=54 status=ok
// SIG undefined FUN_144baabd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baabd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_144baee20(uVar1,param_2,param_3);
  return;
}



// FUNCTION 144baac10 FUN_144baac10 body=39 status=ok
// SIG undefined FUN_144baac10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baac10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_144baee40(param_2,uVar1);
  return;
}



// FUNCTION 144baac40 FUN_144baac40 body=30 status=ok
// SIG undefined FUN_144baac40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baac40(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_144baee60(uVar1);
  return;
}



// FUNCTION 144baac60 FUN_144baac60 body=54 status=ok
// SIG undefined FUN_144baac60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baac60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_144baeed0(uVar1,param_2,param_3);
  return;
}



// FUNCTION 144baaca0 FUN_144baaca0 body=39 status=ok
// SIG undefined FUN_144baaca0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baaca0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_144baf000(param_2,uVar1);
  return;
}



// FUNCTION 144baacd0 FUN_144baacd0 body=30 status=ok
// SIG undefined FUN_144baacd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baacd0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_144edc140(uVar1);
  return;
}



// FUNCTION 144baacf0 FUN_144baacf0 body=30 status=ok
// SIG undefined FUN_144baacf0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baacf0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_144edc1d0(uVar1);
  return;
}



// FUNCTION 144baad10 FUN_144baad10 body=30 status=ok
// SIG undefined FUN_144baad10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baad10(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_144edb5b0(uVar1);
  return;
}



// FUNCTION 144baad30 FUN_144baad30 body=54 status=ok
// SIG undefined FUN_144baad30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baad30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_144edb640(uVar1,param_2,param_3);
  return;
}



// FUNCTION 144baad70 FUN_144baad70 body=39 status=ok
// SIG undefined FUN_144baad70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baad70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_144edb660(param_2,uVar1);
  return;
}



// FUNCTION 144baada0 FUN_144baada0 body=30 status=ok
// SIG undefined FUN_144baada0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baada0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_144edb680(uVar1);
  return;
}



// FUNCTION 144baadc0 FUN_144baadc0 body=54 status=ok
// SIG undefined FUN_144baadc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baadc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_144edb710(uVar1,param_2,param_3);
  return;
}



// FUNCTION 144baae00 FUN_144baae00 body=39 status=ok
// SIG undefined FUN_144baae00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baae00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_144edb820(param_2,uVar1);
  return;
}



// FUNCTION 144baae30 FUN_144baae30 body=30 status=ok
// SIG undefined FUN_144baae30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baae30(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_144edb280(uVar1);
  return;
}



// FUNCTION 144baae50 FUN_144baae50 body=54 status=ok
// SIG undefined FUN_144baae50(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baae50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_144edb2d0(uVar1,param_2,param_3);
  return;
}



// FUNCTION 144baae90 FUN_144baae90 body=39 status=ok
// SIG undefined FUN_144baae90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baae90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144ba3d50();
  FUN_144edb400(param_2,uVar1);
  return;
}



// FUNCTION 144baaec0 FUN_144baaec0 body=330 status=ok
// SIG undefined FUN_144baaec0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baaec0(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((param_2 == 0x1d) && (param_1 != 0)) && (uVar2 = FUN_144ba3d50(), param_3 == 0x30)) &&
     (iVar1 = FUN_144edb2d0(uVar2,param_4,0x30), 0 < iVar1)) {
    local_68 = 0x3636363636363636;
    local_60 = 0x3636363636363636;
    local_58 = 0x3636363636363636;
    local_50 = 0x3636363636363636;
    local_48 = 0x3636363636363636;
    iVar1 = FUN_144edb2d0(uVar2,&local_68,0x28);
    if (((iVar1 != 0) && (iVar1 = FUN_144edb400(local_40,uVar2), iVar1 != 0)) &&
       ((iVar1 = FUN_144edb280(uVar2), iVar1 != 0 &&
        (iVar1 = FUN_144edb2d0(uVar2,param_4,0x30), 0 < iVar1)))) {
      local_68 = 0x5c5c5c5c5c5c5c5c;
      local_60 = 0x5c5c5c5c5c5c5c5c;
      local_58 = 0x5c5c5c5c5c5c5c5c;
      local_50 = 0x5c5c5c5c5c5c5c5c;
      local_48 = 0x5c5c5c5c5c5c5c5c;
      iVar1 = FUN_144edb2d0(uVar2,&local_68,0x28);
      if ((iVar1 != 0) && (iVar1 = FUN_144edb2d0(uVar2,local_40,0x14), iVar1 != 0)) {
        FUN_14259f0c0(local_40,0x14);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
}



// FUNCTION 144bab020 FUN_144bab020 body=8 status=ok
// SIG undefined FUN_144bab020(void)

undefined * FUN_144bab020(void)

{
  return &DAT_14997b5b0;
}



// FUNCTION 144bab030 FUN_144bab030 body=8 status=ok
// SIG undefined FUN_144bab030(void)

undefined * FUN_144bab030(void)

{
  return &DAT_14997b3d0;
}



// FUNCTION 144bab040 FUN_144bab040 body=8 status=ok
// SIG undefined FUN_144bab040(void)

undefined * FUN_144bab040(void)

{
  return &DAT_14997b420;
}



// FUNCTION 144bab050 FUN_144bab050 body=8 status=ok
// SIG undefined FUN_144bab050(void)

undefined * FUN_144bab050(void)

{
  return &DAT_14997b510;
}



// FUNCTION 144bab060 FUN_144bab060 body=8 status=ok
// SIG undefined FUN_144bab060(void)

undefined * FUN_144bab060(void)

{
  return &DAT_14997b560;
}



// FUNCTION 144bab070 FUN_144bab070 body=8 status=ok
// SIG undefined FUN_144bab070(void)

undefined * FUN_144bab070(void)

{
  return &DAT_14997b470;
}



// FUNCTION 144bab080 FUN_144bab080 body=8 status=ok
// SIG undefined FUN_144bab080(void)

undefined * FUN_144bab080(void)

{
  return &DAT_14997b4c0;
}



// FUNCTION 144bab090 FUN_144bab090 body=290 status=ok
// SIG undefined FUN_144bab090(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bab090(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_res8 [8];
  
  if ((DAT_14c7819b8 != 0) && (DAT_14c7819a0 == 0)) {
    DAT_14c7819a0 = 1;
    uVar3 = FUN_144e98760(&DAT_14c6d9f18);
    FUN_144e987a0(&DAT_14c6d9f18,0);
    FUN_144bab790(uVar3);
    puVar2 = DAT_14c7819a8;
    while (puVar2 != (undefined8 *)0x0) {
      (*(code *)*puVar2)();
      puVar1 = (undefined8 *)puVar2[1];
      FUN_144ea6530(puVar2,"crypto\\init.c",0x209);
      puVar2 = puVar1;
    }
    DAT_14c7819a8 = (undefined8 *)0x0;
    FUN_144e98660(DAT_14c7819b0);
    DAT_14c7819b0 = 0;
    if (DAT_14c781a34 != 0) {
      FUN_144ee3f90();
    }
    if (DAT_14c781a00 != 0) {
      FUN_144eacc00();
    }
    local_res8[0] = DAT_14c6d9f18;
    DAT_14c6d9f18 = 0xffffffff;
    FUN_144e987d0(local_res8);
    FUN_144bac980();
    FUN_144edd490();
    FUN_144ba1f00();
    FUN_144ee3c50();
    FUN_144ee4110();
    FUN_144ea6350();
    FUN_144b9f4e0();
    FUN_144baab70();
    FUN_144ea9c00();
    FUN_144ba3300();
    FUN_144ea6ef0();
    DAT_14c7819b8 = 0;
  }
  return;
}



// FUNCTION 144bab1c0 FUN_144bab1c0 body=1009 status=ok
// SIG undefined FUN_144bab1c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bab1c0(ulonglong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_14c7819a0 != 0) {
    if ((param_1 >> 0x12 & 1) == 0) {
      FUN_144ba24f0(0xf,0x74,0x46,"crypto\\init.c",0x267,0x144bab1d0);
    }
    return 0;
  }
  iVar1 = FUN_144e986c0(&DAT_14c7819a4,FUN_144bab8d0);
  iVar4 = 0;
  iVar3 = 0;
  iVar2 = iVar3;
  if (iVar1 != 0) {
    iVar2 = DAT_14c7819bc;
  }
  if (iVar2 != 0) {
    if ((param_1 >> 0x12 & 1) != 0) {
      return 1;
    }
    if ((param_1 >> 0x13 & 1) == 0) {
      iVar2 = FUN_144e986c0(&DAT_14c7819c0,FUN_144bab910);
      if (iVar2 != 0) {
        iVar3 = DAT_14c7819c4;
      }
    }
    else {
      iVar2 = FUN_144e986c0(&DAT_14c7819c0,&LAB_144bab940);
      if (iVar2 != 0) {
        iVar3 = DAT_14c7819c4;
      }
    }
    if (iVar3 != 0) {
      iVar3 = FUN_144e986c0(&DAT_14c7819c8,&LAB_144bab950);
      iVar2 = iVar4;
      if (iVar3 != 0) {
        iVar2 = DAT_14c7819cc;
      }
      if (iVar2 != 0) {
        if ((param_1 & 1) != 0) {
          iVar3 = FUN_144e986c0(&DAT_14c7819d0,&LAB_144bab980);
          iVar2 = iVar4;
          if (iVar3 != 0) {
            iVar2 = DAT_14c7819d4;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 & 2) != 0) {
          iVar3 = FUN_144e986c0(&DAT_14c7819d0,FUN_144bab960);
          iVar2 = iVar4;
          if (iVar3 != 0) {
            iVar2 = DAT_14c7819d4;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 & 0x10) != 0) {
          iVar3 = FUN_144e986c0(&DAT_14c7819d8,&LAB_144bab9c0);
          iVar2 = iVar4;
          if (iVar3 != 0) {
            iVar2 = DAT_14c7819dc;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 & 4) != 0) {
          iVar3 = FUN_144e986c0(&DAT_14c7819d8,FUN_144bab990);
          iVar2 = iVar4;
          if (iVar3 != 0) {
            iVar2 = DAT_14c7819dc;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 & 0x20) != 0) {
          iVar3 = FUN_144e986c0(&DAT_14c7819e0,&LAB_144baba00);
          iVar2 = iVar4;
          if (iVar3 != 0) {
            iVar2 = DAT_14c7819e4;
          }
          if (iVar2 == 0) {
            return 0;
          }
        }
        if ((param_1 & 8) != 0) {
          iVar2 = FUN_144e986c0(&DAT_14c7819e0,FUN_144bab9d0);
          if (iVar2 != 0) {
            iVar4 = DAT_14c7819e4;
          }
          if (iVar4 == 0) {
            return 0;
          }
        }
        if (((param_1 >> 0x11 & 1) == 0) || (iVar2 = FUN_144e98830(), iVar2 != 0)) {
          iVar2 = 0;
          if ((char)param_1 < '\0') {
            iVar3 = FUN_144e986c0(&DAT_14c7819e8,FUN_144baba40);
            iVar4 = iVar2;
            if (iVar3 != 0) {
              iVar4 = DAT_14c7819f8;
            }
            if (iVar4 == 0) {
              return 0;
            }
          }
          if ((param_1 & 0x40) != 0) {
            FUN_144e98620(DAT_14c7819b0);
            DAT_14c7819f0 = param_2;
            iVar3 = FUN_144e986c0(&DAT_14c7819e8,FUN_144baba10);
            DAT_14c7819f0 = 0;
            iVar4 = iVar2;
            if (iVar3 != 0) {
              iVar4 = DAT_14c7819f8;
            }
            FUN_144e98640(DAT_14c7819b0);
            if (iVar4 < 1) {
              return 0;
            }
          }
          if ((param_1 >> 8 & 1) != 0) {
            iVar3 = FUN_144e986c0(&DAT_14c7819fc,FUN_144baba70);
            iVar4 = iVar2;
            if (iVar3 != 0) {
              iVar4 = DAT_14c781a04;
            }
            if (iVar4 == 0) {
              return 0;
            }
          }
          if ((param_1 >> 0xb & 1) != 0) {
            iVar3 = FUN_144e986c0(&DAT_14c781a08,FUN_144babab0);
            iVar4 = iVar2;
            if (iVar3 != 0) {
              iVar4 = DAT_14c781a0c;
            }
            if (iVar4 == 0) {
              return 0;
            }
          }
          if ((param_1 >> 9 & 1) != 0) {
            iVar3 = FUN_144e986c0(&DAT_14c781a10,FUN_144babae0);
            iVar4 = iVar2;
            if (iVar3 != 0) {
              iVar4 = DAT_14c781a14;
            }
            if (iVar4 == 0) {
              return 0;
            }
          }
          if ((param_1 >> 10 & 1) != 0) {
            iVar3 = FUN_144e986c0(&DAT_14c781a18,FUN_144babb10);
            iVar4 = iVar2;
            if (iVar3 != 0) {
              iVar4 = DAT_14c781a1c;
            }
            if (iVar4 == 0) {
              return 0;
            }
          }
          if ((param_1 >> 0xe & 1) != 0) {
            iVar3 = FUN_144e986c0(&DAT_14c781a20,FUN_144babb40);
            iVar4 = iVar2;
            if (iVar3 != 0) {
              iVar4 = DAT_14c781a24;
            }
            if (iVar4 == 0) {
              return 0;
            }
          }
          if ((param_1 >> 0xd & 1) != 0) {
            iVar3 = FUN_144e986c0(&DAT_14c781a28,FUN_144babb70);
            iVar4 = iVar2;
            if (iVar3 != 0) {
              iVar4 = DAT_14c781a2c;
            }
            if (iVar4 == 0) {
              return 0;
            }
          }
          if ((param_1 & 0xfe00) != 0) {
            FUN_144ede650();
          }
          if ((param_1 >> 0x10 & 1) != 0) {
            iVar4 = FUN_144e986c0(&DAT_14c781a30,&LAB_144babba0);
            if (iVar4 != 0) {
              iVar2 = DAT_14c781a38;
            }
            if (iVar2 == 0) {
              return 0;
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 144bab5c0 FUN_144bab5c0 body=117 status=ok
// SIG undefined FUN_144bab5c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bab5c0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144bab5cc;
  puVar1 = (undefined8 *)FUN_144ea64e0(0x10,"crypto\\init.c",0x327);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_144ba24f0(0xf,0x72,0x41,"crypto\\init.c",0x328,uVar2);
    return 0;
  }
  *puVar1 = param_1;
  puVar1[1] = DAT_14c7819a8;
  DAT_14c7819a8 = puVar1;
  return 1;
}



// FUNCTION 144bab640 FUN_144bab640 body=332 status=ok
// SIG undefined FUN_144bab640(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bab640(ulonglong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_14c7819a0 == 0) {
    iVar1 = FUN_144e986c0(&DAT_14c7819a4,FUN_144bab8d0);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = DAT_14c7819bc;
    }
    if (iVar2 != 0) {
      iVar1 = FUN_144e986c0(&DAT_14c7819c0,FUN_144bab910);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = DAT_14c7819c4;
      }
      if (iVar2 != 0) {
        iVar1 = FUN_144e986c0(&DAT_14c7819c8,&LAB_144bab950);
        iVar2 = 0;
        if (iVar1 != 0) {
          iVar2 = DAT_14c7819cc;
        }
        if (iVar2 != 0) {
          puVar3 = (undefined4 *)FUN_144e98760(&DAT_14c6d9f18);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)FUN_144ea6670(0xc,"crypto\\init.c",0x42);
            if (puVar3 == (undefined4 *)0x0) {
              return 0;
            }
            iVar2 = FUN_144e987a0(&DAT_14c6d9f18,puVar3);
            if (iVar2 == 0) {
              FUN_144ea6530(puVar3,"crypto\\init.c",0x44);
              return 0;
            }
          }
          if ((param_1 & 1) != 0) {
            *puVar3 = 1;
          }
          if ((param_1 & 2) != 0) {
            puVar3[1] = 1;
          }
          if ((param_1 & 4) != 0) {
            puVar3[2] = 1;
          }
          return 1;
        }
      }
    }
  }
  else {
    FUN_144ba24f0(0xf,0x74,0x46,"crypto\\init.c",0x267,0x144bab650);
  }
  return 0;
}



// FUNCTION 144bab790 FUN_144bab790 body=81 status=ok
// SIG undefined FUN_144bab790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bab790(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_144eacc30();
    }
    if (param_1[1] != 0) {
      FUN_144ba3360();
    }
    if (param_1[2] != 0) {
      FUN_144edd4e0();
    }
    FUN_144ea6530(param_1,"crypto\\init.c",0x1c0);
  }
  return;
}



// FUNCTION 144bab7f0 FUN_144bab7f0 body=81 status=ok
// SIG undefined FUN_144bab7f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bab7f0(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_144eacc30();
    }
    if (param_1[1] != 0) {
      FUN_144ba3360();
    }
    if (param_1[2] != 0) {
      FUN_144edd4e0();
    }
    FUN_144ea6530(param_1,"crypto\\init.c",0x1c0);
  }
  return;
}



// FUNCTION 144bab850 FUN_144bab850 body=121 status=ok
// SIG undefined FUN_144bab850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144bab850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 local_res8 [8];
  
  iVar1 = FUN_144e98730(local_res8,FUN_144bab7f0,param_3,param_4,0x144bab85a);
  if (iVar1 != 0) {
    DAT_14c7819b0 = FUN_144e985a0();
    if (DAT_14c7819b0 != 0) {
      FUN_144ed0020();
      DAT_14c6d9f18 = local_res8[0];
      DAT_14c7819b8 = 1;
      return 1;
    }
    FUN_144e98660(0);
    DAT_14c7819b0 = 0;
    FUN_144e987d0(local_res8);
  }
  return 0;
}



// FUNCTION 144bab8d0 FUN_144bab8d0 body=29 status=ok
// SIG undefined FUN_144bab8d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bab8d0(void)

{
  DAT_14c7819bc = FUN_144bab850();
  return;
}



// FUNCTION 144bab8f0 FUN_144bab8f0 body=25 status=ok
// SIG undefined FUN_144bab8f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bab8f0(void)

{
  FUN_144bab090();
  return 0;
}



// FUNCTION 144bab910 FUN_144bab910 body=44 status=ok
// SIG undefined FUN_144bab910(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bab910(void)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit(FUN_144bab8f0);
  DAT_14c7819c4 = (uint)(p_Var1 != (_onexit_t)0x0);
  return;
}



// FUNCTION 144bab960 FUN_144bab960 body=29 status=ok
// SIG undefined FUN_144bab960(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bab960(void)

{
  DAT_14c7819d4 = FUN_144ee3fa0();
  return;
}



// FUNCTION 144bab990 FUN_144bab990 body=33 status=ok
// SIG undefined FUN_144bab990(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bab990(void)

{
  FUN_144edd820();
  DAT_14c7819dc = 1;
  return;
}



// FUNCTION 144bab9d0 FUN_144bab9d0 body=33 status=ok
// SIG undefined FUN_144bab9d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bab9d0(void)

{
  FUN_144ede400();
  DAT_14c7819e4 = 1;
  return;
}



// FUNCTION 144baba10 FUN_144baba10 body=46 status=ok
// SIG undefined FUN_144baba10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144baba10(void)

{
  DAT_14c7819f8 = FUN_144ede5b0(DAT_14c7819f0);
  _DAT_14c7819ec = 1;
  return;
}



// FUNCTION 144baba40 FUN_144baba40 body=43 status=ok
// SIG undefined FUN_144baba40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144baba40(void)

{
  FUN_144ede640();
  _DAT_14c7819ec = 1;
  DAT_14c7819f8 = 1;
  return;
}



// FUNCTION 144baba70 FUN_144baba70 body=58 status=ok
// SIG undefined FUN_144baba70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baba70(void)

{
  DAT_14c781a04 = FUN_144eacbb0();
  if (DAT_14c781a04 == 0) {
    return;
  }
  DAT_14c781a00 = 1;
  DAT_14c781a04 = 1;
  return;
}



// FUNCTION 144babab0 FUN_144babab0 body=33 status=ok
// SIG undefined FUN_144babab0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144babab0(void)

{
  FUN_144edeac0();
  DAT_14c781a0c = 1;
  return;
}



// FUNCTION 144babae0 FUN_144babae0 body=33 status=ok
// SIG undefined FUN_144babae0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144babae0(void)

{
  FUN_144edf310();
  DAT_14c781a14 = 1;
  return;
}



// FUNCTION 144babb10 FUN_144babb10 body=33 status=ok
// SIG undefined FUN_144babb10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144babb10(void)

{
  FUN_144edf410();
  DAT_14c781a1c = 1;
  return;
}



// FUNCTION 144babb40 FUN_144babb40 body=33 status=ok
// SIG undefined FUN_144babb40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144babb40(void)

{
  FUN_144edff90();
  DAT_14c781a24 = 1;
  return;
}



// FUNCTION 144babb70 FUN_144babb70 body=33 status=ok
// SIG undefined FUN_144babb70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144babb70(void)

{
  FUN_144ee1a30();
  DAT_14c781a2c = 1;
  return;
}



// FUNCTION 144babbc0 FUN_144babbc0 body=42 status=ok
// SIG undefined FUN_144babbc0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144babbc0(void)

{
  FUN_144ee4130();
  FUN_144ee43c0();
  FUN_144ee49a0();
  FUN_144ee47e0();
  FUN_144ee4ff0();
  return;
}



// FUNCTION 144babbf0 FUN_144babbf0 body=12 status=ok
// SIG undefined FUN_144babbf0(void)

undefined4 FUN_144babbf0(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  return *param_1;
}



// FUNCTION 144babc00 FUN_144babc00 body=28 status=ok
// SIG undefined FUN_144babc00(void)

undefined8 FUN_144babc00(int *param_1,int param_2)

{
  if (((param_1 != (int *)0x0) && (-1 < param_2)) && (param_2 < *param_1)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 144babc20 FUN_144babc20 body=51 status=ok
// SIG undefined FUN_144babc20(void)

undefined8 FUN_144babc20(int *param_1,int param_2,undefined8 param_3)

{
  if (((param_1 != (int *)0x0) && (-1 < param_2)) && (param_2 < *param_1)) {
    *(undefined8 *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 2)) = param_3;
    param_1[4] = 0;
    return *(undefined8 *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 2));
  }
  return 0;
}



// FUNCTION 144babc60 FUN_144babc60 body=59 status=ok
// SIG undefined FUN_144babc60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144babc60(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144ea6670(0x20,"crypto\\stack\\stack.c",0xd1);
  if (lVar1 == 0) {
    return;
  }
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  return;
}



// FUNCTION 144babca0 FUN_144babca0 body=57 status=ok
// SIG undefined FUN_144babca0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144babca0(void)

{
  longlong lVar1;
  undefined8 in_R9;
  
  lVar1 = FUN_144ea6670(0x20,"crypto\\stack\\stack.c",0xd1,in_R9,0x144babcaa);
  if (lVar1 == 0) {
    return;
  }
  *(undefined8 *)(lVar1 + 0x18) = 0;
  return;
}



// FUNCTION 144babce0 FUN_144babce0 body=130 status=ok
// SIG undefined FUN_144babce0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144babce0(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_144ea6670(0x20,"crypto\\stack\\stack.c",0xd1);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x18) = param_1;
    if ((param_2 < 1) || (iVar1 = FUN_144bac3f0(lVar2,param_2,1), iVar1 != 0)) {
      return lVar2;
    }
    FUN_144babdb0(lVar2);
  }
  return 0;
}



// FUNCTION 144babd70 FUN_144babd70 body=54 status=ok
// SIG undefined FUN_144babd70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144babd70(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 < 0) {
    return 1;
  }
  uVar1 = FUN_144bac3f0(param_1,param_2,1);
  return uVar1;
}



// FUNCTION 144babdb0 FUN_144babdb0 body=71 status=ok
// SIG undefined FUN_144babdb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144babdb0(longlong param_1)

{
  if (param_1 != 0) {
    FUN_144ea6530(*(undefined8 *)(param_1 + 8),"crypto\\stack\\stack.c",0x178);
    FUN_144ea6530(param_1,"crypto\\stack\\stack.c",0x179);
  }
  return;
}



// FUNCTION 144babe00 FUN_144babe00 body=153 status=ok
// SIG undefined FUN_144babe00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144babe00(int *param_1,code *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = 0;
    if (0 < *param_1) {
      lVar2 = 0;
      do {
        if (*(longlong *)(lVar2 + *(longlong *)(param_1 + 2)) != 0) {
          (*param_2)();
        }
        iVar1 = iVar1 + 1;
        lVar2 = lVar2 + 8;
      } while (iVar1 < *param_1);
    }
    FUN_144ea6530(*(undefined8 *)(param_1 + 2),"crypto\\stack\\stack.c",0x178);
    FUN_144ea6530(param_1,"crypto\\stack\\stack.c",0x179);
  }
  return;
}



// FUNCTION 144babea0 FUN_144babea0 body=353 status=ok
// SIG undefined FUN_144babea0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_144babea0(int *param_1,code *param_2,code *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = 0x144babeb4;
  piVar3 = (int *)FUN_144ea64e0(0x20,"crypto\\stack\\stack.c",0x50);
  if (piVar3 == (int *)0x0) {
    FUN_144ba24f0(0xf,0x7f,0x41,"crypto\\stack\\stack.c",0x51,uVar7);
    return (int *)0x0;
  }
  iVar6 = param_1[1];
  iVar2 = param_1[2];
  iVar1 = param_1[3];
  *piVar3 = *param_1;
  piVar3[1] = iVar6;
  piVar3[2] = iVar2;
  piVar3[3] = iVar1;
  iVar6 = param_1[5];
  iVar2 = param_1[6];
  iVar1 = param_1[7];
  piVar3[4] = param_1[4];
  piVar3[5] = iVar6;
  piVar3[6] = iVar2;
  piVar3[7] = iVar1;
  iVar6 = *param_1;
  if (iVar6 == 0) {
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[5] = 0;
  }
  else {
    iVar2 = 4;
    if (4 < iVar6) {
      iVar2 = iVar6;
    }
    piVar3[5] = iVar2;
    lVar4 = FUN_144ea6670((longlong)iVar2 << 3,"crypto\\stack\\stack.c",0x60);
    *(longlong *)(piVar3 + 2) = lVar4;
    if (lVar4 == 0) {
      FUN_144ea6530(piVar3,"crypto\\stack\\stack.c",0x62);
      piVar3 = (int *)0x0;
    }
    else {
      iVar6 = 0;
      if (0 < *piVar3) {
        lVar4 = 0;
        do {
          if (*(longlong *)(lVar4 + *(longlong *)(param_1 + 2)) != 0) {
            lVar5 = (*param_2)();
            *(longlong *)(lVar4 + *(longlong *)(piVar3 + 2)) = lVar5;
            if (lVar5 == 0) {
              lVar4 = (longlong)(iVar6 + -1);
              if (-1 < iVar6 + -1) {
                do {
                  if (*(longlong *)(*(longlong *)(piVar3 + 2) + lVar4 * 8) != 0) {
                    (*param_3)();
                  }
                  lVar4 = lVar4 + -1;
                } while (-1 < lVar4);
              }
              FUN_144babdb0(piVar3);
              return (int *)0x0;
            }
          }
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 8;
        } while (iVar6 < *piVar3);
      }
    }
  }
  return piVar3;
}



// FUNCTION 144bac010 FUN_144bac010 body=223 status=ok
// SIG undefined FUN_144bac010(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144bac010(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0x7fffffff)) {
    iVar1 = FUN_144bac3f0(param_1,1,0);
    if (iVar1 != 0) {
      iVar1 = *param_1;
      if ((param_3 < iVar1) && (-1 < param_3)) {
        memmove((void *)(*(longlong *)(param_1 + 2) + (longlong)(param_3 + 1) * 8),
                (void *)((longlong)param_3 * 8 + *(longlong *)(param_1 + 2)),
                (longlong)(iVar1 - param_3) << 3);
        *(undefined8 *)((longlong)param_3 * 8 + *(longlong *)(param_1 + 2)) = param_2;
        *param_1 = *param_1 + 1;
        param_1[4] = 0;
        return *param_1;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = param_2;
      *param_1 = *param_1 + 1;
      param_1[4] = 0;
      return *param_1;
    }
  }
  return 0;
}



// FUNCTION 144bac0f0 FUN_144bac0f0 body=42 status=ok
// SIG undefined FUN_144bac0f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bac0f0(int *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (((param_1 != (int *)0x0) && (-1 < param_2)) && (param_2 < *param_1)) {
    uVar1 = FUN_144bac510();
    return uVar1;
  }
  return 0;
}



// FUNCTION 144bac120 FUN_144bac120 body=126 status=ok
// SIG undefined FUN_144bac120(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144bac120(int *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  
  iVar1 = *param_1;
  iVar4 = 0;
  if (0 < iVar1) {
    plVar2 = *(longlong **)(param_1 + 2);
    plVar5 = plVar2;
    do {
      if (*plVar5 == param_2) {
        lVar3 = plVar2[iVar4];
        if (iVar4 != iVar1 + -1) {
          memmove(plVar2 + iVar4,plVar2 + (iVar4 + 1),(longlong)((iVar1 - iVar4) + -1) << 3);
        }
        *param_1 = *param_1 + -1;
        return lVar3;
      }
      iVar4 = iVar4 + 1;
      plVar5 = plVar5 + 1;
    } while (iVar4 < iVar1);
  }
  return 0;
}



// FUNCTION 144bac1a0 FUN_144bac1a0 body=26 status=ok
// SIG undefined FUN_144bac1a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bac1a0(undefined8 param_1,undefined8 param_2)

{
  FUN_144bac570(param_1,param_2,2);
  return;
}



// FUNCTION 144bac1c0 FUN_144bac1c0 body=38 status=ok
// SIG undefined FUN_144bac1c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bac1c0(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  uVar1 = FUN_144bac010(param_1,param_2,*param_1);
  return uVar1;
}



// FUNCTION 144bac1f0 FUN_144bac1f0 body=87 status=ok
// SIG undefined FUN_144bac1f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bac1f0(int *param_1)

{
  undefined8 *_Dst;
  undefined8 uVar1;
  int iVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    _Dst = *(undefined8 **)(param_1 + 2);
    uVar1 = *_Dst;
    iVar2 = *param_1 + -1;
    if (iVar2 != 0) {
      memmove(_Dst,_Dst + 1,(longlong)iVar2 << 3);
    }
    *param_1 = *param_1 + -1;
    return uVar1;
  }
  return 0;
}



// FUNCTION 144bac250 FUN_144bac250 body=42 status=ok
// SIG undefined FUN_144bac250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bac250(int *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar1 = FUN_144bac510(param_1,*param_1 + -1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 144bac280 FUN_144bac280 body=21 status=ok
// SIG undefined FUN_144bac280(void)

void FUN_144bac280(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = param_2;
  if (lVar1 != param_2) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 144bac2a0 FUN_144bac2a0 body=225 status=ok
// SIG undefined FUN_144bac2a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_144bac2a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *_Dst;
  undefined8 uVar5;
  
  uVar5 = 0x144bac2b0;
  piVar4 = (int *)FUN_144ea64e0(0x20,"crypto\\stack\\stack.c",0x31);
  if (piVar4 == (int *)0x0) {
    FUN_144ba24f0(0xf,0x80,0x41,"crypto\\stack\\stack.c",0x32,uVar5);
    return (int *)0x0;
  }
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  iVar3 = param_1[3];
  *piVar4 = *param_1;
  piVar4[1] = iVar1;
  piVar4[2] = iVar2;
  piVar4[3] = iVar3;
  iVar1 = param_1[5];
  iVar2 = param_1[6];
  iVar3 = param_1[7];
  piVar4[4] = param_1[4];
  piVar4[5] = iVar1;
  piVar4[6] = iVar2;
  piVar4[7] = iVar3;
  if (*param_1 == 0) {
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[5] = 0;
    return piVar4;
  }
  _Dst = (void *)FUN_144ea64e0((longlong)param_1[5] << 3,"crypto\\stack\\stack.c",0x40);
  *(void **)(piVar4 + 2) = _Dst;
  if (_Dst == (void *)0x0) {
    FUN_144babdb0(piVar4);
    return (int *)0x0;
  }
  memcpy(_Dst,*(void **)(param_1 + 2),(longlong)*param_1 << 3);
  return piVar4;
}



// FUNCTION 144bac390 FUN_144bac390 body=77 status=ok
// SIG undefined FUN_144bac390(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bac390(int *param_1)

{
  if (((param_1 != (int *)0x0) && (param_1[4] == 0)) &&
     (*(_PtFuncCompare **)(param_1 + 6) != (_PtFuncCompare *)0x0)) {
    if (1 < *param_1) {
      qsort(*(void **)(param_1 + 2),(longlong)*param_1,8,*(_PtFuncCompare **)(param_1 + 6));
    }
    param_1[4] = 1;
  }
  return;
}



// FUNCTION 144bac3e0 FUN_144bac3e0 body=14 status=ok
// SIG undefined FUN_144bac3e0(void)

undefined4 FUN_144bac3e0(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar1;
}



// FUNCTION 144bac3f0 FUN_144bac3f0 body=277 status=ok
// SIG undefined FUN_144bac3f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bac3f0(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x144bac3fc;
  if (0x7fffffff - *param_1 < param_2) {
    return 0;
  }
  param_2 = *param_1 + param_2;
  if (param_2 < 4) {
    param_2 = 4;
  }
  if (*(longlong *)(param_1 + 2) == 0) {
    lVar1 = FUN_144ea6670((longlong)param_2 << 3,"crypto\\stack\\stack.c",0xb4);
    *(longlong *)(param_1 + 2) = lVar1;
    if (lVar1 == 0) {
      FUN_144ba24f0(0xf,0x81,0x41,"crypto\\stack\\stack.c",0xb5,uVar3);
      return 0;
    }
  }
  else {
    if (param_3 == 0) {
      iVar2 = param_1[5];
      if (param_2 <= iVar2) {
        return 1;
      }
      do {
        if (0x7ffffffe < iVar2) {
          return 0;
        }
        if (iVar2 < 0x55555555) {
          iVar2 = iVar2 + iVar2 / 2;
        }
        else {
          iVar2 = 0x7fffffff;
        }
      } while (iVar2 < param_2);
      param_2 = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
    }
    else if (param_2 == param_1[5]) {
      return 1;
    }
    lVar1 = FUN_144ea6570(*(longlong *)(param_1 + 2),(longlong)param_2 << 3,"crypto\\stack\\stack.c"
                          ,0xc6);
    if (lVar1 == 0) {
      return 0;
    }
    *(longlong *)(param_1 + 2) = lVar1;
  }
  param_1[5] = param_2;
  return 1;
}



// FUNCTION 144bac510 FUN_144bac510 body=92 status=ok
// SIG undefined FUN_144bac510(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bac510(int *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 2);
  uVar2 = *(undefined8 *)(lVar1 + (longlong)param_2 * 8);
  if (param_2 != *param_1 + -1) {
    memmove((void *)(lVar1 + (longlong)param_2 * 8),(void *)(lVar1 + (longlong)(param_2 + 1) * 8),
            (longlong)((*param_1 - param_2) + -1) << 3);
  }
  *param_1 = *param_1 + -1;
  return uVar2;
}



// FUNCTION 144bac570 FUN_144bac570 body=205 status=ok
// SIG undefined FUN_144bac570(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144bac570(int *param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar4;
  longlong *plVar5;
  longlong local_res10 [3];
  ulonglong uVar3;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      if (*(_PtFuncCompare **)(param_1 + 6) == (_PtFuncCompare *)0x0) {
        if (0 < iVar1) {
          plVar5 = *(longlong **)(param_1 + 2);
          uVar3 = 0;
          do {
            if (*plVar5 == param_2) {
              return uVar3;
            }
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
            plVar5 = plVar5 + 1;
          } while ((int)uVar2 < iVar1);
        }
      }
      else {
        local_res10[0] = param_2;
        if (param_1[4] == 0) {
          if (1 < iVar1) {
            qsort(*(void **)(param_1 + 2),(longlong)iVar1,8,*(_PtFuncCompare **)(param_1 + 6));
          }
          param_1[4] = 1;
        }
        if ((local_res10[0] != 0) &&
           (lVar4 = FUN_144ea97f0(local_res10,*(undefined8 *)(param_1 + 2),*param_1,8,
                                  *(undefined8 *)(param_1 + 6),param_3), lVar4 != 0)) {
          return lVar4 - *(longlong *)(param_1 + 2) >> 3;
        }
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 144bac640 FUN_144bac640 body=53 status=ok
// SIG undefined FUN_144bac640(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bac640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_144ee8690(FUN_144ee8230,"X509 CRL",param_1,param_2,param_3,param_4,0x144bac64a);
  return;
}



// FUNCTION 144bac680 FUN_144bac680 body=53 status=ok
// SIG undefined FUN_144bac680(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bac680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_144ee8690(FUN_144bb5d50,"CERTIFICATE",param_1,param_2,param_3,param_4,0x144bac68a);
  return;
}



// FUNCTION 144bac6c0 FUN_144bac6c0 body=69 status=ok
// SIG undefined FUN_144bac6c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bac6c0(undefined8 param_1,undefined8 param_2)

{
  FUN_144ee9280(FUN_144bb5d70,"CERTIFICATE",param_1,param_2,0,0,0,0,0);
  return;
}



// FUNCTION 144bac710 FUN_144bac710 body=125 status=ok
// SIG undefined FUN_144bac710(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bac710(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_144e986c0(&DAT_14c781a40);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = DAT_14c781a48;
  }
  if (iVar2 == 0) {
    return 0;
  }
  FUN_144e98620(DAT_14c781a60);
  FUN_144ec6930(DAT_14c781a50);
  DAT_14c781a50 = 0;
  DAT_14c781a68 = param_1;
  FUN_144e98640(DAT_14c781a60);
  return 1;
}



// FUNCTION 144bac790 FUN_144bac790 body=185 status=ok
// SIG undefined FUN_144bac790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined **
FUN_144bac790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined **ppuVar3;
  int iVar4;
  
  iVar1 = FUN_144e986c0(&DAT_14c781a40,FUN_144bad430,param_3,param_4,0x144bac79a);
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar4 = DAT_14c781a48;
  }
  if (iVar4 != 0) {
    FUN_144e98620(DAT_14c781a60);
    lVar2 = DAT_14c781a50;
    ppuVar3 = DAT_14c781a68;
    if ((DAT_14c781a68 == (undefined **)0x0) &&
       ((lVar2 = FUN_144eeab50(), lVar2 == 0 ||
        (ppuVar3 = (undefined **)FUN_144eeab40(lVar2), ppuVar3 == (undefined **)0x0)))) {
      FUN_144ec6930(lVar2);
      DAT_14c781a68 = &PTR_FUN_14c70e990;
      lVar2 = DAT_14c781a50;
      ppuVar3 = DAT_14c781a68;
    }
    DAT_14c781a68 = ppuVar3;
    DAT_14c781a50 = lVar2;
    ppuVar3 = DAT_14c781a68;
    FUN_144e98640(DAT_14c781a60);
    return ppuVar3;
  }
  return (undefined **)0x0;
}



// FUNCTION 144bac850 FUN_144bac850 body=107 status=ok
// SIG undefined FUN_144bac850(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bac850(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144bac860;
  lVar1 = FUN_144bac790();
  if ((lVar1 != 0) && (*(code **)(lVar1 + 8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144bac88a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 8))(param_1,param_2);
    return uVar2;
  }
  FUN_144ba24f0(0x24,100,0x65,"crypto\\rand\\rand_lib.c",0x3b2,uVar2);
  return 0xffffffff;
}



// FUNCTION 144bac8c0 FUN_144bac8c0 body=133 status=ok
// SIG undefined FUN_144bac8c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bac8c0(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144bac790();
  if (lVar1 != 0) {
    lVar2 = FUN_144edc4e0();
    if (lVar1 != lVar2) {
      FUN_144bac850(param_1,param_2);
      return;
    }
  }
  lVar1 = FUN_144edd0e0();
  if (lVar1 != 0) {
    FUN_144edcd80(lVar1,param_1,(longlong)param_2);
    return;
  }
  return;
}



// FUNCTION 144bac950 FUN_144bac950 body=46 status=ok
// SIG undefined FUN_144bac950(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bac950(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_144bac790();
  if ((lVar1 != 0) && (*(code **)(lVar1 + 0x28) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144bac974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(lVar1 + 0x28))();
    return uVar2;
  }
  return 0;
}



// FUNCTION 144bac980 FUN_144bac980 body=137 status=ok
// SIG undefined FUN_144bac980(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bac980(void)

{
  if (DAT_14c781a44 != 0) {
    if ((DAT_14c781a68 != 0) && (*(code **)(DAT_14c781a68 + 0x10) != (code *)0x0)) {
      (**(code **)(DAT_14c781a68 + 0x10))();
    }
    FUN_144bac710(0);
    FUN_144eeaad0();
    FUN_144e98660(DAT_14c781a58);
    DAT_14c781a58 = 0;
    FUN_144e98660(DAT_14c781a60);
    DAT_14c781a60 = 0;
    FUN_144e98660(DAT_14c781a70);
    DAT_14c781a70 = 0;
    DAT_14c781a44 = 0;
  }
  return;
}



// FUNCTION 144baca10 FUN_144baca10 body=516 status=ok
// SIG undefined FUN_144baca10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144baca10(longlong param_1,undefined8 *param_2,int param_3,undefined8 param_4,undefined8 param_5
             ,int param_6)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong local_res8;
  
  uVar7 = 0;
  local_res8 = param_1;
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (*(int *)(*(longlong *)(param_1 + 8) + 0x30) < *(int *)(param_1 + 0x30))) {
    FUN_144ba24f0(0x24,0x78,0x83,"crypto\\rand\\rand_lib.c",0x8f);
    return 0;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x20);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_144bace10(param_3,*(undefined4 *)(param_1 + 0x10),param_4,param_5);
    if (puVar5 == (undefined8 *)0x0) {
      return 0;
    }
  }
  else {
    puVar5[7] = (longlong)param_3;
  }
  if (*(longlong *)(local_res8 + 8) == 0) {
    if (param_6 != 0) {
      FUN_144ba24f0(0x24,0x78,0x85,"crypto\\rand\\rand_lib.c",0xc3);
      uVar7 = 0;
      goto LAB_144bacbe6;
    }
    uVar6 = FUN_144eea940(puVar5);
  }
  else {
    lVar3 = FUN_144bad0b0(puVar5,1);
    lVar4 = FUN_144bad290(puVar5,lVar3);
    if (lVar4 == 0) goto LAB_144bacbe6;
    FUN_144edd370(*(undefined8 *)(local_res8 + 8));
    iVar2 = FUN_144edcb20(*(undefined8 *)(local_res8 + 8),lVar4,lVar3,param_6,&local_res8,8);
    lVar4 = 0;
    if ((iVar2 != 0) && (lVar4 = lVar3, *(int *)(local_res8 + 0x88) != 0)) {
      *(undefined4 *)(local_res8 + 0x8c) = *(undefined4 *)(*(longlong *)(local_res8 + 8) + 0x8c);
    }
    FUN_144edd3a0(*(undefined8 *)(local_res8 + 8));
    FUN_144bad320(puVar5,lVar4,lVar4 * 8);
    uVar6 = puVar5[6];
    if ((uVar6 < (ulonglong)puVar5[7]) || ((ulonglong)puVar5[1] < (ulonglong)puVar5[3]))
    goto LAB_144bacbe6;
  }
  uVar7 = 0;
  if (uVar6 != 0) {
    uVar1 = *puVar5;
    uVar7 = puVar5[1];
    *puVar5 = 0;
    puVar5[6] = 0;
    *param_2 = uVar1;
  }
LAB_144bacbe6:
  if (*(longlong *)(local_res8 + 0x20) == 0) {
    FUN_144bad010(puVar5);
  }
  return uVar7;
}



// FUNCTION 144bacc20 FUN_144bacc20 body=80 status=ok
// SIG undefined FUN_144bacc20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bacc20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_144ea6f60();
    return;
  }
  FUN_144ea66f0(param_2,param_3,"crypto\\rand\\rand_lib.c",0xe1);
  return;
}



// FUNCTION 144bacc70 FUN_144bacc70 body=199 status=ok
// SIG undefined FUN_144bacc70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144bacc70(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  puVar3 = (undefined8 *)FUN_144bace10(0,0,param_4,param_5);
  uVar4 = 0;
  if (puVar3 != (undefined8 *)0x0) {
    iVar2 = FUN_144eea9d0(puVar3);
    uVar4 = 0;
    if (iVar2 != 0) {
      local_18 = param_1;
      FUN_144e986a0(&DAT_14c781a4c,1,&local_10,DAT_14c781a70);
      iVar2 = FUN_144bad1a0(puVar3,&local_18,0x10);
      if (iVar2 != 0) {
        uVar1 = *puVar3;
        uVar4 = puVar3[1];
        *puVar3 = 0;
        puVar3[6] = 0;
        *param_2 = uVar1;
      }
    }
    FUN_144bad010(puVar3);
  }
  return uVar4;
}



// FUNCTION 144bacd40 FUN_144bacd40 body=44 status=ok
// SIG undefined FUN_144bacd40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bacd40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144ea66f0(param_2,param_3,"crypto\\rand\\rand_lib.c",0x114);
  return;
}



// FUNCTION 144bacd70 FUN_144bacd70 body=83 status=ok
// SIG undefined FUN_144bacd70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bacd70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = FUN_144eeaa50();
  if (iVar3 != 0) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    *param_1 = 0;
    param_1[6] = 0;
    *param_2 = uVar1;
    return uVar2;
  }
  return 0;
}



// FUNCTION 144bacdd0 FUN_144bacdd0 body=50 status=ok
// SIG undefined FUN_144bacdd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bacdd0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  FUN_14259f0c0(param_2,param_1[1]);
  param_1[1] = 0;
  return;
}



// FUNCTION 144bace10 FUN_144bace10 body=347 status=ok
// SIG undefined FUN_144bace10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * FUN_144bace10(int param_1,int param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x144bace29;
  uVar5 = 0x30;
  if (param_2 != 0) {
    uVar5 = 0x10;
  }
  iVar1 = FUN_144e986c0(&DAT_14c781a40,FUN_144bad430);
  iVar4 = 0;
  if (iVar1 != 0) {
    iVar4 = DAT_14c781a48;
  }
  if (iVar4 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)FUN_144ea6670(0x40,"crypto\\rand\\rand_lib.c",0x1bd);
    if (plVar2 == (longlong *)0x0) {
      FUN_144ba24f0(0x24,0x74,0x41,"crypto\\rand\\rand_lib.c",0x1bf,uVar6);
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2[3] = param_3;
      if (0x3000 < param_4) {
        param_4 = 0x3000;
      }
      plVar2[4] = param_4;
      if (param_3 < uVar5) {
        param_3 = uVar5;
      }
      if (param_4 < param_3) {
        param_3 = param_4;
      }
      plVar2[5] = param_3;
      if (param_2 == 0) {
        lVar3 = FUN_144ea6670(param_3,"crypto\\rand\\rand_lib.c",0x1cd);
      }
      else {
        lVar3 = FUN_144ea6f20(param_3,"crypto\\rand\\rand_lib.c",0x1cb);
      }
      *plVar2 = lVar3;
      if (lVar3 == 0) {
        FUN_144ba24f0(0x24,0x74,0x41,"crypto\\rand\\rand_lib.c",0x1d0,uVar6);
        FUN_144ea6530(plVar2,"crypto\\rand\\rand_lib.c",0x1da);
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2[7] = (longlong)param_1;
        *(int *)((longlong)plVar2 + 0x14) = param_2;
      }
    }
  }
  return plVar2;
}



// FUNCTION 144bacf70 FUN_144bacf70 body=153 status=ok
// SIG undefined FUN_144bacf70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_144bacf70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x144bacf85;
  puVar1 = (undefined8 *)FUN_144ea6670(0x40,"crypto\\rand\\rand_lib.c",0x1e7);
  if (puVar1 == (undefined8 *)0x0) {
    FUN_144ba24f0(0x24,0x7c,0x41,"crypto\\rand\\rand_lib.c",0x1ea,uVar2);
    return (undefined8 *)0x0;
  }
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[5] = param_2;
  puVar1[4] = param_2;
  puVar1[3] = param_2;
  *(undefined4 *)(puVar1 + 2) = 1;
  puVar1[6] = param_3;
  return puVar1;
}



// FUNCTION 144bad010 FUN_144bad010 body=99 status=ok
// SIG undefined FUN_144bad010(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bad010(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    if (*(int *)(param_1 + 2) == 0) {
      if (*(int *)((longlong)param_1 + 0x14) == 0) {
        FUN_144ea66f0(*param_1,param_1[5],"crypto\\rand\\rand_lib.c",0x210);
      }
      else {
        FUN_144ea6f60();
      }
    }
    FUN_144ea6530(param_1,"crypto\\rand\\rand_lib.c",0x213);
  }
  return;
}



// FUNCTION 144bad080 FUN_144bad080 body=35 status=ok
// SIG undefined FUN_144bad080(void)

ulonglong FUN_144bad080(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(ulonglong *)(param_1 + 0x30) < *(ulonglong *)(param_1 + 0x38)) {
    return 0;
  }
  uVar1 = *(ulonglong *)(param_1 + 0x30);
  if (*(ulonglong *)(param_1 + 8) < *(ulonglong *)(param_1 + 0x18)) {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 144bad0b0 FUN_144bad0b0 body=240 status=ok
// SIG undefined FUN_144bad0b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_144bad0b0(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(ulonglong *)(param_1 + 0x30) < *(ulonglong *)(param_1 + 0x38)) {
    lVar2 = *(ulonglong *)(param_1 + 0x38) - *(ulonglong *)(param_1 + 0x30);
  }
  else {
    lVar2 = 0;
  }
  if (param_2 == 0) {
    FUN_144ba24f0(0x24,0x73,0x69,"crypto\\rand\\rand_lib.c",0x29f,0x144bad0bc);
    return 0;
  }
  uVar3 = *(ulonglong *)(param_1 + 8);
  uVar4 = (ulonglong)param_2 * lVar2 + 7 >> 3;
  if (*(longlong *)(param_1 + 0x20) - uVar3 < uVar4) {
    FUN_144ba24f0(0x24,0x73,0x7d,"crypto\\rand\\rand_lib.c",0x2a7,0x144bad0bc);
    return 0;
  }
  if ((uVar3 < *(ulonglong *)(param_1 + 0x18)) &&
     (uVar3 = *(ulonglong *)(param_1 + 0x18) - uVar3, uVar4 < uVar3)) {
    uVar4 = uVar3;
  }
  iVar1 = FUN_144bad450(param_1,uVar4);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    return 0;
  }
  return uVar4;
}



// FUNCTION 144bad1a0 FUN_144bad1a0 body=233 status=ok
// SIG undefined FUN_144bad1a0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bad1a0(longlong *param_1,void *param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar1 = param_1[1];
  if (param_1[4] - uVar1 < param_3) {
    FUN_144ba24f0(0x24,0x67,0x6a,"crypto\\rand\\rand_lib.c",0x2d8,0x144bad1ba);
    return 0;
  }
  if (*param_1 == 0) {
    uVar4 = 0x2dd;
LAB_144bad20d:
    FUN_144ba24f0(0x24,0x67,0x44,"crypto\\rand\\rand_lib.c",uVar4,0x144bad1ba);
    uVar3 = 0;
  }
  else {
    if (param_3 != 0) {
      if ((uVar1 < (ulonglong)param_1[5]) && ((void *)(*param_1 + uVar1) == param_2)) {
        uVar4 = 0x2eb;
        goto LAB_144bad20d;
      }
      iVar2 = FUN_144bad450(param_1,param_3);
      if (iVar2 == 0) {
        return 0;
      }
      memcpy((void *)(*param_1 + param_1[1]),param_2,param_3);
      param_1[1] = param_1[1] + param_3;
      param_1[6] = param_1[6] + param_4;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 144bad290 FUN_144bad290 body=144 status=ok
// SIG undefined FUN_144bad290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144bad290(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if ((ulonglong)(param_1[4] - param_1[1]) < param_2) {
      FUN_144ba24f0(0x24,0x71,0x7d,"crypto\\rand\\rand_lib.c",0x311,0x144bad29c);
    }
    else {
      if (*param_1 == 0) {
        FUN_144ba24f0(0x24,0x71,0x44,"crypto\\rand\\rand_lib.c",0x316,0x144bad29c);
        return 0;
      }
      iVar1 = FUN_144bad450();
      if (iVar1 != 0) {
        return param_1[1] + *param_1;
      }
    }
  }
  return 0;
}



// FUNCTION 144bad320 FUN_144bad320 body=95 status=ok
// SIG undefined FUN_144bad320(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bad320(longlong param_1,ulonglong param_2,longlong param_3)

{
  if ((ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 8)) < param_2) {
    FUN_144ba24f0(0x24,0x72,0x7d,"crypto\\rand\\rand_lib.c",0x335);
    return 0;
  }
  if (param_2 != 0) {
    *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + param_3;
    *(ulonglong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + param_2;
  }
  return 1;
}



// FUNCTION 144bad380 FUN_144bad380 body=169 status=ok
// SIG undefined FUN_144bad380(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bad380(void)

{
  int iVar1;
  
  DAT_14c781a58 = FUN_144e985a0();
  if (DAT_14c781a58 != 0) {
    DAT_14c781a60 = FUN_144e985a0();
    if (DAT_14c781a60 != 0) {
      DAT_14c781a70 = FUN_144e985a0();
      if (DAT_14c781a70 != 0) {
        iVar1 = FUN_144eeaac0();
        if (iVar1 != 0) {
          DAT_14c781a44 = 1;
          return 1;
        }
        FUN_144e98660(DAT_14c781a70);
        DAT_14c781a70 = 0;
      }
      FUN_144e98660(DAT_14c781a60);
      DAT_14c781a60 = 0;
    }
    FUN_144e98660(DAT_14c781a58);
    DAT_14c781a58 = 0;
  }
  return 0;
}



// FUNCTION 144bad430 FUN_144bad430 body=29 status=ok
// SIG undefined FUN_144bad430(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bad430(void)

{
  DAT_14c781a48 = FUN_144bad380();
  return;
}



// FUNCTION 144bad450 FUN_144bad450 body=342 status=ok
// SIG undefined FUN_144bad450(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bad450(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x144bad465;
  lVar1 = param_1[1];
  if ((ulonglong)(param_1[5] - lVar1) < param_2) {
    uVar2 = param_1[4];
    if ((*(int *)(param_1 + 2) != 0) || (uVar3 = param_1[5], uVar2 - lVar1 < param_2)) {
      FUN_144ba24f0(0x24,0x7d,0x44,"crypto\\rand\\rand_lib.c",0x278,0x144bad465);
      return 0;
    }
    do {
      uVar4 = uVar2;
      if (uVar3 < uVar2 >> 1) {
        uVar4 = uVar3 * 2;
      }
      uVar3 = uVar4;
    } while (uVar4 - lVar1 < param_2);
    if (*(int *)((longlong)param_1 + 0x14) == 0) {
      _Dst = (void *)FUN_144ea6670(uVar4,"crypto\\rand\\rand_lib.c",0x283);
    }
    else {
      _Dst = (void *)FUN_144ea6f20(uVar4,"crypto\\rand\\rand_lib.c",0x281);
    }
    if (_Dst == (void *)0x0) {
      FUN_144ba24f0(0x24,0x7d,0x41,"crypto\\rand\\rand_lib.c",0x285,uVar5);
      return 0;
    }
    memcpy(_Dst,(void *)*param_1,param_1[1]);
    if (*(int *)((longlong)param_1 + 0x14) == 0) {
      FUN_144ea66f0(*param_1,param_1[5],"crypto\\rand\\rand_lib.c",0x28c);
    }
    else {
      FUN_144ea6f60();
    }
    *param_1 = _Dst;
    param_1[5] = uVar4;
  }
  return 1;
}



// FUNCTION 144bad5b0 FUN_144bad5b0 body=24 status=ok
// SIG undefined FUN_144bad5b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bad5b0(void)

{
  FUN_144bad5d0(0);
  return;
}



// FUNCTION 144bad5d0 FUN_144bad5d0 body=408 status=ok
// SIG undefined FUN_144bad5d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144bad5d0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x144bad5e0;
  lVar3 = FUN_144ea6670(0xb0,"crypto\\rsa\\rsa_lib.c");
  if (lVar3 == 0) {
    FUN_144ba24f0(4,0x6a,0x41,"crypto\\rsa\\rsa_lib.c",0x37,uVar7);
    return 0;
  }
  *(undefined4 *)(lVar3 + 0x70) = 1;
  lVar4 = FUN_144e985a0();
  *(longlong *)(lVar3 + 0xa8) = lVar4;
  if (lVar4 == 0) {
    FUN_144ba24f0(4,0x6a,0x41,"crypto\\rsa\\rsa_lib.c",0x3e,uVar7);
    FUN_144ea6530(lVar3,"crypto\\rsa\\rsa_lib.c",0x3f);
    return 0;
  }
  lVar4 = FUN_144eecb70();
  *(longlong *)(lVar3 + 8) = lVar4;
  *(uint *)(lVar3 + 0x74) = *(uint *)(lVar4 + 0x48) & 0xfffffbff;
  if (param_1 == 0) {
    uVar7 = FUN_144eecd40();
    *(undefined8 *)(lVar3 + 0x10) = uVar7;
LAB_144bad6ef:
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      lVar4 = FUN_144eecd30();
      *(longlong *)(lVar3 + 8) = lVar4;
      if (lVar4 == 0) {
        uVar6 = 0x52;
        goto LAB_144bad6b1;
      }
    }
    *(uint *)(lVar3 + 0x74) = *(uint *)(*(longlong *)(lVar3 + 8) + 0x48) & 0xfffffbff;
    iVar2 = FUN_144ea5c20(9,lVar3,lVar3 + 0x68);
    if (iVar2 == 0) goto LAB_144bad6cb;
    pcVar1 = *(code **)(*(longlong *)(lVar3 + 8) + 0x38);
    if (pcVar1 == (code *)0x0) {
      return lVar3;
    }
    iVar2 = (*pcVar1)(lVar3);
    if (iVar2 != 0) {
      return lVar3;
    }
    uVar6 = 0x5e;
    uVar5 = 0x46;
  }
  else {
    iVar2 = FUN_144ec6850(param_1);
    if (iVar2 != 0) {
      *(longlong *)(lVar3 + 0x10) = param_1;
      goto LAB_144bad6ef;
    }
    uVar6 = 0x48;
LAB_144bad6b1:
    uVar5 = 0x26;
  }
  FUN_144ba24f0(4,0x6a,uVar5,"crypto\\rsa\\rsa_lib.c",uVar6);
LAB_144bad6cb:
  FUN_144bad8c0(lVar3);
  return 0;
}



// FUNCTION 144bad770 FUN_144bad770 body=101 status=ok
// SIG undefined FUN_144bad770(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bad770(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_144ba03d0(*(undefined8 *)(param_1 + 0x18));
  if (*(int *)(param_1 + 4) == 1) {
    iVar2 = FUN_144babbf0(*(undefined8 *)(param_1 + 0x58));
    if (0 < iVar2) {
      iVar3 = FUN_144eecff0(uVar1);
      if (iVar2 + 2 <= iVar3) goto LAB_144bad7c1;
    }
    return 0;
  }
LAB_144bad7c1:
  uVar4 = FUN_144ba0500(uVar1,0xffffffff);
  return uVar4;
}



// FUNCTION 144bad7e0 FUN_144bad7e0 body=160 status=ok
// SIG undefined FUN_144bad7e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bad7e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) && (param_2 == 0)) ||
     ((*(longlong *)(param_1 + 0x20) == 0 && (param_3 == 0)))) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      FUN_144ba0cd0();
      *(longlong *)(param_1 + 0x18) = param_2;
    }
    if (param_3 != 0) {
      FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x20));
      *(longlong *)(param_1 + 0x20) = param_3;
    }
    if (param_4 != 0) {
      FUN_144ba0630(*(undefined8 *)(param_1 + 0x28));
      *(longlong *)(param_1 + 0x28) = param_4;
      FUN_144ba0220(param_4,4);
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 144bad880 FUN_144bad880 body=37 status=ok
// SIG undefined FUN_144bad880(void)

void FUN_144bad880(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x18);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x20);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 144bad8b0 FUN_144bad8b0 body=5 status=ok
// SIG undefined FUN_144bad8b0(void)

undefined8 FUN_144bad8b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 144bad8c0 FUN_144bad8c0 body=274 status=ok
// SIG undefined FUN_144bad8c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bad8c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x70);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      if ((*(longlong *)(param_1 + 8) != 0) &&
         (pcVar3 = *(code **)(*(longlong *)(param_1 + 8) + 0x40), pcVar3 != (code *)0x0)) {
        (*pcVar3)();
      }
      FUN_144ec6930(*(undefined8 *)(param_1 + 0x10));
      FUN_144ea6040(9,param_1,param_1 + 0x68);
      FUN_144e98660(*(undefined8 *)(param_1 + 0xa8));
      FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x18));
      FUN_144ba0cd0(*(undefined8 *)(param_1 + 0x20));
      FUN_144ba0630(*(undefined8 *)(param_1 + 0x28));
      FUN_144ba0630(*(undefined8 *)(param_1 + 0x30));
      FUN_144ba0630(*(undefined8 *)(param_1 + 0x38));
      FUN_144ba0630(*(undefined8 *)(param_1 + 0x40));
      FUN_144ba0630(*(undefined8 *)(param_1 + 0x48));
      FUN_144ba0630(*(undefined8 *)(param_1 + 0x50));
      FUN_144bb6370(*(undefined8 *)(param_1 + 0x60));
      FUN_144babe00(*(undefined8 *)(param_1 + 0x58),FUN_144eecdd0);
      FUN_144eead20(*(undefined8 *)(param_1 + 0x98));
      FUN_144eead20(*(undefined8 *)(param_1 + 0xa0));
      FUN_144ea6530(*(undefined8 *)(param_1 + 0x90),"crypto\\rsa\\rsa_lib.c",0x8c);
      FUN_144ea6530(param_1,"crypto\\rsa\\rsa_lib.c",0x8d);
    }
  }
  return;
}



// FUNCTION 144bad9e0 FUN_144bad9e0 body=21 status=ok
// SIG undefined FUN_144bad9e0(void)

bool FUN_144bad9e0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x70);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



// FUNCTION 144bada00 FUN_144bada00 body=86 status=ok
// SIG undefined FUN_144bada00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144bada00(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((((param_1 != (undefined8 *)0x0) && ((int *)*param_1 != (int *)0x0)) &&
      (iVar1 = *(int *)*param_1, iVar1 != 6)) && (iVar1 != 0x390)) {
    return 0xffffffff;
  }
  uVar2 = FUN_144ed1710(param_1,0xffffffff,param_2,param_3,param_4,param_5,0x144bada0a);
  return uVar2;
}



// FUNCTION 144bada60 FUN_144bada60 body=26 status=ok
// SIG undefined FUN_144bada60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bada60(longlong param_1)

{
  FUN_144ea6220(param_1 + 0x68);
  return;
}



// FUNCTION 144bada80 FUN_144bada80 body=26 status=ok
// SIG undefined FUN_144bada80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bada80(longlong param_1)

{
  FUN_144ea6300(param_1 + 0x68);
  return;
}



// FUNCTION 144badaa0 FUN_144badaa0 body=82 status=ok
// SIG undefined FUN_144badaa0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144badaa0(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(longlong *)(param_1 + 8) + 0x70);
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144badac1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE_00)();
    return uVar1;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(longlong *)(param_1 + 8) + 0x68);
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
    if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x000144badadf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_4,param_5);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_144badb00();
  return uVar1;
}



// FUNCTION 144badb00 FUN_144badb00 body=2237 status=ok
// SIG undefined FUN_144badb00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144badb00(longlong param_1,int param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 (*pauVar17) [16];
  int iVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  uint local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  int local_a8;
  longlong local_a0;
  undefined8 *local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  int local_78 [6];
  ulonglong uStack_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x144badb17;
  uStack_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar19 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_98 = (undefined8 *)0x0;
  uVar14 = 0;
  local_c0 = param_3;
  if (param_2 < 0x200) {
    local_d8 = CONCAT44(local_d8._4_4_,0x4e);
    uVar16 = 0x78;
    uVar14 = uVar19;
  }
  else if (((int)param_3 < 2) || (iVar1 = FUN_144eecff0(param_2), iVar1 < (int)param_3)) {
    local_d8 = CONCAT44(local_d8._4_4_,0x54);
    uVar16 = 0xa5;
  }
  else {
    uVar14 = FUN_144eedd20();
    local_c8 = uVar14;
    if (uVar14 != 0) {
      FUN_144eede20(uVar14);
      local_80 = FUN_144eede90(uVar14);
      local_b0 = FUN_144eede90(uVar14);
      lVar6 = FUN_144eede90(uVar14);
      uVar5 = local_c0;
      local_88 = lVar6;
      if (lVar6 != 0) {
        uVar12 = 0;
        local_90 = (longlong)(int)local_c0;
        iVar1 = param_2 / (int)local_c0;
        param_2 = param_2 % (int)local_c0;
        auVar22._4_4_ = iVar1;
        auVar22._0_4_ = iVar1;
        auVar22._8_4_ = iVar1;
        auVar22._12_4_ = iVar1;
        if (7 < local_c0) {
          uVar2 = local_c0 & 0x80000007;
          if ((int)uVar2 < 0) {
            uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
          }
          auVar23._0_4_ = iVar1 + 1;
          auVar23._4_4_ = iVar1 + 1;
          auVar23._8_4_ = iVar1 + 1;
          auVar23._12_4_ = iVar1 + 1;
          uVar7 = uVar19;
          pauVar17 = (undefined1 (*) [16])local_78;
          do {
            iVar18 = (int)uVar7;
            auVar20._0_4_ = -(uint)(iVar18 < param_2);
            auVar20._4_4_ = -(uint)(iVar18 + 1 < param_2);
            auVar20._8_4_ = -(uint)(iVar18 + 2 < param_2);
            auVar20._12_4_ = -(uint)(iVar18 + 3 < param_2);
            uVar12 = iVar18 + 8;
            uVar7 = (ulonglong)uVar12;
            *pauVar17 = ~auVar20 & _DAT_149931c80 & auVar22 | ~(~auVar20 & _DAT_149931c80) & auVar23
            ;
            auVar21._0_4_ = -(uint)(iVar18 + 4 < param_2);
            auVar21._4_4_ = -(uint)(iVar18 + 5 < param_2);
            auVar21._8_4_ = -(uint)(iVar18 + 6 < param_2);
            auVar21._12_4_ = -(uint)(iVar18 + 7 < param_2);
            pauVar17[1] = ~auVar21 & _DAT_149931c80 & auVar22 |
                          ~(~auVar21 & _DAT_149931c80) & auVar23;
            pauVar17 = pauVar17 + 2;
          } while ((int)uVar12 < (int)(local_c0 - uVar2));
        }
        for (lVar13 = (longlong)(int)uVar12; lVar13 < local_90; lVar13 = lVar13 + 1) {
          iVar18 = iVar1 + 1;
          if (param_2 <= lVar13) {
            iVar18 = iVar1;
          }
          local_78[lVar13] = iVar18;
        }
        if (*(longlong *)(param_1 + 0x18) == 0) {
          lVar13 = FUN_144ba0570();
          *(longlong *)(param_1 + 0x18) = lVar13;
          if (lVar13 == 0) goto LAB_144bae070;
        }
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar13 = FUN_144ba05d0();
          *(longlong *)(param_1 + 0x28) = lVar13;
          if (lVar13 == 0) goto LAB_144bae070;
        }
        if (*(longlong *)(param_1 + 0x20) == 0) {
          lVar13 = FUN_144ba0570();
          *(longlong *)(param_1 + 0x20) = lVar13;
          if (lVar13 == 0) goto LAB_144bae070;
        }
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar13 = FUN_144ba05d0();
          *(longlong *)(param_1 + 0x30) = lVar13;
          if (lVar13 == 0) goto LAB_144bae070;
        }
        if (*(longlong *)(param_1 + 0x38) == 0) {
          lVar13 = FUN_144ba05d0();
          *(longlong *)(param_1 + 0x38) = lVar13;
          if (lVar13 == 0) goto LAB_144bae070;
        }
        if (*(longlong *)(param_1 + 0x40) == 0) {
          lVar13 = FUN_144ba05d0();
          *(longlong *)(param_1 + 0x40) = lVar13;
          if (lVar13 == 0) goto LAB_144bae070;
        }
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar13 = FUN_144ba05d0();
          *(longlong *)(param_1 + 0x48) = lVar13;
          if (lVar13 == 0) goto LAB_144bae070;
        }
        if (*(longlong *)(param_1 + 0x50) == 0) {
          lVar13 = FUN_144ba05d0();
          *(longlong *)(param_1 + 0x50) = lVar13;
          if (lVar13 == 0) goto LAB_144bae070;
        }
        uVar7 = uVar19;
        if (2 < (int)uVar5) {
          *(undefined4 *)(param_1 + 4) = 1;
          uVar7 = FUN_144babce0(0,uVar5 - 2);
          if (uVar7 == 0) goto LAB_144bae070;
          if (*(longlong *)(param_1 + 0x58) != 0) {
            FUN_144babe00(*(longlong *)(param_1 + 0x58),FUN_144eecdd0);
          }
          iVar1 = 2;
          *(ulonglong *)(param_1 + 0x58) = uVar7;
          if (2 < (int)local_c0) {
            do {
              local_98 = (undefined8 *)FUN_144eece20();
              if (local_98 == (undefined8 *)0x0) goto LAB_144bae070;
              FUN_144bac1c0(uVar7,local_98);
              iVar1 = iVar1 + 1;
            } while (iVar1 < (int)local_c0);
          }
        }
        lVar13 = FUN_144ba06b0(*(undefined8 *)(param_1 + 0x20),param_4);
        if (lVar13 != 0) {
          local_a0 = 0;
          uVar14 = uVar19;
          if (0 < local_90) {
            do {
              lVar6 = local_a0;
              local_b4 = 0;
              iVar1 = (int)uVar14;
              if (iVar1 == 0) {
                uVar16 = *(undefined8 *)(param_1 + 0x30);
              }
              else if (iVar1 == 1) {
                uVar16 = *(undefined8 *)(param_1 + 0x38);
              }
              else {
                local_98 = (undefined8 *)FUN_144babc00(uVar7,iVar1 + -2);
                uVar16 = *local_98;
              }
              FUN_144ba0220(uVar16,4);
              iVar18 = local_78[lVar6];
              local_a8 = iVar18;
LAB_144bade90:
              local_d0 = param_5;
              local_d8 = 0;
              iVar3 = FUN_144eed080(uVar16,iVar18,0,0);
              uVar10 = uVar19;
              uVar14 = local_c8;
              if (iVar3 == 0) goto LAB_144bae070;
              while (iVar3 = (int)uVar10, iVar3 < iVar1) {
                if (iVar3 == 0) {
                  uVar9 = *(undefined8 *)(param_1 + 0x30);
                }
                else if (iVar3 == 1) {
                  uVar9 = *(undefined8 *)(param_1 + 0x38);
                }
                else {
                  puVar8 = (undefined8 *)FUN_144babc00(uVar7,iVar3 + -2);
                  uVar9 = *puVar8;
                }
                iVar4 = FUN_144ba0c40(uVar16,uVar9);
                if (iVar4 == 0) goto LAB_144bade90;
                uVar10 = (ulonglong)(iVar3 + 1);
              }
              uVar9 = FUN_144ba03c0();
              lVar6 = local_88;
              iVar3 = FUN_144eee270(local_88,uVar16,uVar9);
              uVar14 = local_c8;
              if (iVar3 == 0) goto LAB_144bae070;
              FUN_144ba3130();
              FUN_144ba0220(lVar6,4);
              lVar6 = FUN_144ef05b0(local_b0,lVar6,*(undefined8 *)(param_1 + 0x20));
              if (lVar6 == 0) {
                uVar5 = FUN_144ba26c0();
                uVar14 = local_c8;
                if (((uVar5 & 0xff000000) != 0x3000000) || ((uVar5 & 0xfff) != 0x6c))
                goto LAB_144bae070;
                FUN_144ba3170();
                iVar3 = local_bc;
                iVar4 = FUN_144eed020(param_5,2);
                local_bc = iVar3 + 1;
                uVar14 = local_c8;
                if (iVar4 == 0) goto LAB_144bae070;
                goto LAB_144bade90;
              }
              iVar3 = local_b8 + local_a8;
              local_b8 = iVar3;
              if (local_a0 != 1) {
                if (local_a0 != 0) {
                  uVar9 = *(undefined8 *)(param_1 + 0x18);
                  uVar15 = uVar16;
                  goto LAB_144badf6f;
                }
LAB_144bae0c0:
                iVar18 = FUN_144eed020(param_5,3);
                uVar14 = local_c8;
                if (iVar18 != 0) goto LAB_144bae0d9;
                goto LAB_144bae070;
              }
              uVar9 = *(undefined8 *)(param_1 + 0x30);
              uVar15 = *(undefined8 *)(param_1 + 0x38);
LAB_144badf6f:
              iVar4 = FUN_144eee590(local_b0,uVar9,uVar15);
              lVar6 = local_88;
              uVar14 = local_c8;
              if ((iVar4 == 0) ||
                 (iVar3 = FUN_144eefec0(local_88,local_b0,iVar3 + -4), uVar14 = local_c8, iVar3 == 0
                 )) goto LAB_144bae070;
              uVar10 = FUN_144ba0c20(lVar6);
              if (uVar10 - 9 < 7) {
                if (((1 < iVar1) &&
                    (lVar6 = FUN_144ba06b0(local_98[3],*(undefined8 *)(param_1 + 0x18)),
                    uVar14 = local_c8, lVar6 == 0)) ||
                   (lVar6 = FUN_144ba06b0(*(undefined8 *)(param_1 + 0x18),local_b0),
                   uVar14 = local_c8, lVar6 == 0)) goto LAB_144bae070;
                goto LAB_144bae0c0;
              }
              local_b8 = local_b8 - local_a8;
              iVar3 = FUN_144eed020(param_5,2);
              local_bc = local_bc + 1;
              uVar14 = local_c8;
              if (iVar3 == 0) goto LAB_144bae070;
              if (4 < local_90) {
                if (uVar10 < 9) {
                  iVar18 = iVar18 + 1;
                  local_b4 = local_b4 + 1;
                }
                else {
                  iVar18 = iVar18 + -1;
                  local_b4 = local_b4 + 1;
                }
                goto LAB_144bade90;
              }
              if (local_b4 != 4) {
                local_b4 = local_b4 + 1;
                goto LAB_144bade90;
              }
              iVar1 = -1;
              local_b8 = 0;
              local_a0 = -1;
LAB_144bae0d9:
              local_a0 = local_a0 + 1;
              uVar14 = (ulonglong)(iVar1 + 1);
              lVar6 = local_88;
            } while (local_a0 < local_90);
          }
          iVar1 = FUN_144ba0c40(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
          if (iVar1 < 0) {
            uVar16 = *(undefined8 *)(param_1 + 0x30);
            *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x38);
            *(undefined8 *)(param_1 + 0x38) = uVar16;
          }
          uVar9 = FUN_144ba03c0();
          uVar16 = local_b0;
          iVar1 = FUN_144eee270(local_b0,*(undefined8 *)(param_1 + 0x30),uVar9);
          uVar14 = local_c8;
          if (iVar1 != 0) {
            uVar9 = FUN_144ba03c0();
            iVar1 = FUN_144eee270(lVar6,*(undefined8 *)(param_1 + 0x38),uVar9);
            uVar9 = local_80;
            uVar14 = local_c8;
            if ((iVar1 != 0) && (iVar1 = FUN_144eee590(local_80,uVar16,lVar6,local_c8), iVar1 != 0))
            {
              iVar1 = 2;
              if (2 < (int)local_c0) {
                do {
                  puVar8 = (undefined8 *)FUN_144babc00(uVar7,iVar1 + -2);
                  uVar9 = FUN_144ba03c0();
                  iVar18 = FUN_144eee270(puVar8[1],*puVar8,uVar9);
                  uVar9 = local_80;
                  if ((iVar18 == 0) ||
                     (iVar18 = FUN_144eee590(local_80,local_80,puVar8[1],uVar14), iVar18 == 0))
                  goto LAB_144bae070;
                  iVar1 = iVar1 + 1;
                } while (iVar1 < (int)local_c0);
              }
              lVar13 = FUN_144ba0570();
              if (lVar13 != 0) {
                FUN_144ba0240(lVar13,uVar9,4);
                lVar11 = FUN_144ef05b0(*(undefined8 *)(param_1 + 0x28),
                                       *(undefined8 *)(param_1 + 0x20),lVar13,uVar14);
                if (lVar11 != 0) {
                  FUN_144ba0cd0(lVar13);
                  lVar13 = FUN_144ba0570();
                  if (lVar13 == 0) goto LAB_144bae070;
                  FUN_144ba0240(lVar13,*(undefined8 *)(param_1 + 0x28),4);
                  local_d8 = uVar14;
                  iVar1 = FUN_144eef830(0,*(undefined8 *)(param_1 + 0x40),lVar13,uVar16);
                  if (iVar1 != 0) {
                    local_d8 = uVar14;
                    iVar1 = FUN_144eef830(0,*(undefined8 *)(param_1 + 0x48),lVar13,lVar6);
                    uVar5 = local_c0;
                    if (iVar1 != 0) {
                      iVar18 = 2;
                      iVar1 = 2;
                      if (2 < (int)local_c0) {
                        do {
                          lVar6 = FUN_144babc00(uVar7,iVar1 + -2);
                          local_d8 = uVar14;
                          iVar3 = FUN_144eef830(0,*(undefined8 *)(lVar6 + 8),lVar13,
                                                *(undefined8 *)(lVar6 + 8));
                          if (iVar3 == 0) goto LAB_144bae363;
                          iVar1 = iVar1 + 1;
                        } while (iVar1 < (int)uVar5);
                      }
                      FUN_144ba0cd0(lVar13);
                      lVar13 = FUN_144ba0570();
                      if (lVar13 == 0) goto LAB_144bae070;
                      FUN_144ba0240(lVar13,*(undefined8 *)(param_1 + 0x30),4);
                      lVar6 = FUN_144ef05b0(*(undefined8 *)(param_1 + 0x50),
                                            *(undefined8 *)(param_1 + 0x38),lVar13,uVar14);
                      if (lVar6 != 0) {
                        if (2 < (int)uVar5) {
                          do {
                            puVar8 = (undefined8 *)FUN_144babc00(uVar7,iVar18 + -2);
                            FUN_144ba0240(lVar13,*puVar8,4);
                            lVar6 = FUN_144ef05b0(puVar8[2],puVar8[3],lVar13,uVar14);
                            if (lVar6 == 0) goto LAB_144bae363;
                            iVar18 = iVar18 + 1;
                          } while (iVar18 < (int)uVar5);
                        }
                        FUN_144ba0cd0(lVar13);
                        goto LAB_144bae39a;
                      }
                    }
                  }
                }
LAB_144bae363:
                FUN_144ba0cd0(lVar13);
                uVar16 = 3;
                local_d8 = CONCAT44(local_d8._4_4_,0x183);
                goto LAB_144bae386;
              }
            }
          }
        }
      }
    }
LAB_144bae070:
    local_d8 = CONCAT44(local_d8._4_4_,0x183);
    uVar16 = 3;
  }
LAB_144bae386:
  FUN_144ba24f0(4,0x81,uVar16,"crypto\\rsa\\rsa_gen.c");
LAB_144bae39a:
  FUN_144eedf20(uVar14);
  FUN_144eeddc0(uVar14);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_60 ^ (ulonglong)auStack_f8);
}



// FUNCTION 144bae3e0 FUN_144bae3e0 body=26 status=ok
// SIG undefined FUN_144bae3e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bae3e0(longlong param_1)

{
  FUN_144ba03d0(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144bae400 FUN_144bae400 body=39 status=ok
// SIG undefined FUN_144bae400(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_144bae400(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_144ba03d0(*(undefined8 *)(param_1 + 0x18));
  return (int)(iVar1 + 7 + (iVar1 + 7 >> 0x1f & 7U)) >> 3;
}



// FUNCTION 144bae430 FUN_144bae430 body=25 status=ok
// SIG undefined FUN_144bae430(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bae430(void)

{
  longlong in_R9;
  
                    /* WARNING: Could not recover jumptable at 0x000144bae445. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(in_R9 + 8) + 8))();
  return;
}



// FUNCTION 144bae450 FUN_144bae450 body=25 status=ok
// SIG undefined FUN_144bae450(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bae450(void)

{
  longlong in_R9;
  
                    /* WARNING: Could not recover jumptable at 0x000144bae465. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(in_R9 + 8) + 0x18))();
  return;
}



// FUNCTION 144bae470 FUN_144bae470 body=25 status=ok
// SIG undefined FUN_144bae470(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bae470(void)

{
  longlong in_R9;
  
                    /* WARNING: Could not recover jumptable at 0x000144bae485. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(in_R9 + 8) + 0x10))();
  return;
}



// FUNCTION 144bae490 FUN_144bae490 body=25 status=ok
// SIG undefined FUN_144bae490(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bae490(void)

{
  longlong in_R9;
  
                    /* WARNING: Could not recover jumptable at 0x000144bae4a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(in_R9 + 8) + 0x20))();
  return;
}



// FUNCTION 144bae4b0 FUN_144bae4b0 body=16 status=ok
// SIG undefined FUN_144bae4b0(void)

undefined4 FUN_144bae4b0(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x48);
}



// FUNCTION 144bae4c0 FUN_144bae4c0 body=435 status=ok
// SIG undefined FUN_144bae4c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144bae4c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar6 = 0x144bae4d3;
  lVar4 = 0;
  lVar1 = param_2;
  if ((param_2 == 0) && (lVar1 = FUN_144eedd20(), lVar1 == 0)) {
    return 0;
  }
  FUN_144eede20(lVar1);
  lVar2 = FUN_144eede90(lVar1);
  if (lVar2 == 0) {
    FUN_144ba24f0(4,0x88,0x41,"crypto\\rsa\\rsa_crpt.c",CONCAT44(uVar5,0x7e),uVar6);
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    if ((lVar2 == 0) &&
       (lVar2 = FUN_144bae680(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                              *(undefined8 *)(param_1 + 0x38),lVar1), lVar2 == 0)) {
      FUN_144ba24f0(4,0x88,0x8c,"crypto\\rsa\\rsa_crpt.c",CONCAT44(uVar5,0x85),uVar6);
    }
    else {
      lVar3 = FUN_144ba0570();
      if (lVar3 == 0) {
        FUN_144ba24f0(4,0x88,0x41,"crypto\\rsa\\rsa_crpt.c",CONCAT44(uVar5,0x90));
      }
      else {
        FUN_144ba0240(lVar3,*(undefined8 *)(param_1 + 0x18),4);
        uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x30);
        lVar4 = FUN_144eeb1d0(0,lVar2,lVar3,lVar1,uVar6,*(undefined8 *)(param_1 + 0x78));
        uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
        FUN_144ba0cd0(lVar3);
        if (lVar4 == 0) {
          FUN_144ba24f0(4,0x88,3,"crypto\\rsa\\rsa_crpt.c",CONCAT44(uVar5,0x9b));
        }
        else {
          FUN_144eeb170(lVar4);
        }
      }
    }
  }
  FUN_144eedf20(lVar1);
  if (lVar1 != param_2) {
    FUN_144eeddc0(lVar1);
  }
  if (lVar2 != *(longlong *)(param_1 + 0x20)) {
    FUN_144ba0cd0(lVar2);
  }
  return lVar4;
}



// FUNCTION 144bae680 FUN_144bae680 body=258 status=ok
// SIG undefined FUN_144bae680(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144bae680(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    FUN_144eede20(param_4);
    uVar2 = FUN_144eede90(param_4);
    uVar3 = FUN_144eede90(param_4);
    lVar4 = FUN_144eede90(param_4);
    if (lVar4 != 0) {
      uVar5 = FUN_144ba03c0();
      iVar1 = FUN_144eee270(uVar3,param_2,uVar5);
      if (iVar1 != 0) {
        uVar5 = FUN_144ba03c0();
        iVar1 = FUN_144eee270(lVar4,param_3,uVar5);
        if (iVar1 != 0) {
          iVar1 = FUN_144eee590(uVar2,uVar3,lVar4,param_4);
          uVar6 = 0;
          if (iVar1 != 0) {
            uVar6 = FUN_144ef05b0(0,param_1,uVar2,param_4);
          }
        }
      }
    }
    FUN_144eedf20(param_4);
    return uVar6;
  }
  return 0;
}



// FUNCTION 144bae790 FUN_144bae790 body=339 status=ok
// SIG undefined FUN_144bae790(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144bae790(int param_1,undefined8 param_2,int param_3,undefined8 param_4,int *param_5,
             longlong param_6)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar6;
  int local_28 [2];
  undefined8 local_20;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar3 = 0;
  local_28[0] = 0;
  local_20 = 0;
  pcVar1 = *(code **)(*(longlong *)(param_6 + 8) + 0x58);
  if (pcVar1 != (code *)0x0) {
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (param_1 == 0x72) {
    if (param_3 != 0x24) {
      FUN_144ba24f0(4,0x75,0x83,"crypto\\rsa\\rsa_sign.c",CONCAT44(uVar6,0x58));
      return 0;
    }
    iVar4 = 0x24;
  }
  else {
    uVar5 = CONCAT44(uVar6,param_3);
    iVar2 = FUN_144baec90(&local_20,local_28,param_1,param_2,uVar5);
    uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
    param_2 = local_20;
    uVar5 = local_20;
    iVar4 = local_28[0];
    if (iVar2 == 0) goto LAB_144bae8b0;
  }
  uVar5 = local_20;
  iVar2 = FUN_144bae400(param_6);
  if (iVar2 + -0xb < iVar4) {
    FUN_144ba24f0(4,0x75,0x70,"crypto\\rsa\\rsa_sign.c",CONCAT44(uVar6,100));
  }
  else {
    iVar2 = FUN_144bae450(iVar4,param_2,param_4,param_6,CONCAT44(uVar6,1));
    if (0 < iVar2) {
      uVar3 = 1;
      *param_5 = iVar2;
    }
  }
LAB_144bae8b0:
  FUN_144ea66f0(uVar5,(longlong)iVar4,"crypto\\rsa\\rsa_sign.c",0x70);
  return uVar3;
}



// FUNCTION 144bae8f0 FUN_144bae8f0 body=79 status=ok
// SIG undefined FUN_144bae8f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bae8f0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong in_stack_00000030;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(in_stack_00000030 + 8) + 0x60);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144bae913. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_144bae940();
  return;
}



// FUNCTION 144bae940 FUN_144bae940 body=846 status=ok
// SIG undefined FUN_144bae940(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_144bae940(int param_1,longlong *param_2,uint param_3,undefined8 *param_4,size_t *param_5,
             undefined8 param_6,longlong param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  char *_Buf2;
  undefined8 uVar6;
  longlong lVar7;
  size_t _Size;
  undefined4 uVar8;
  int iVar9;
  void *pvVar10;
  undefined4 uVar11;
  int local_38 [2];
  void *local_30;
  
  pvVar5 = (void *)0x0;
  _Size = (size_t)param_3;
  local_38[0] = 0;
  local_30 = (void *)0x0;
  iVar4 = 0;
  iVar2 = 0;
  iVar9 = 0;
  pvVar10 = (void *)0x0;
  iVar1 = FUN_144bae400(param_8);
  if (param_7 != iVar1) {
    FUN_144ba24f0(4,0x91,0x77,"crypto\\rsa\\rsa_sign.c",0x84);
    return 0;
  }
  _Buf2 = (char *)FUN_144ea64e0(param_7,"crypto\\rsa\\rsa_sign.c",0x89);
  if (_Buf2 == (char *)0x0) {
    FUN_144ba24f0(4,0x91,0x41,"crypto\\rsa\\rsa_sign.c",0x8b);
    pvVar10 = pvVar5;
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144bae470((undefined4)param_7,param_6,_Buf2,param_8,1);
    if (0 < iVar1) {
      if (param_1 == 0x72) {
        if (iVar1 == 0x24) {
          if (param_4 != (undefined8 *)0x0) {
            uVar6 = *(undefined8 *)(_Buf2 + 8);
            uVar11 = 1;
            *param_4 = *(undefined8 *)_Buf2;
            param_4[1] = uVar6;
            uVar6 = *(undefined8 *)(_Buf2 + 0x18);
            param_4[2] = *(undefined8 *)(_Buf2 + 0x10);
            param_4[3] = uVar6;
            *(undefined4 *)(param_4 + 4) = *(undefined4 *)(_Buf2 + 0x20);
            *param_5 = 0x24;
            pvVar10 = pvVar5;
            goto LAB_144baec37;
          }
          if (param_3 != 0x24) {
            FUN_144ba24f0(4,0x91,0x83,"crypto\\rsa\\rsa_sign.c",0xa4);
            goto LAB_144baec35;
          }
          iVar2 = memcmp(_Buf2,param_2,0x24);
          iVar9 = 0;
          if (iVar2 != 0) {
            uVar11 = 0xa9;
            pvVar5 = pvVar10;
            iVar9 = 0;
            goto LAB_144baea50;
          }
LAB_144baec1c:
          uVar11 = 1;
          pvVar10 = pvVar5;
          goto LAB_144baec37;
        }
        uVar11 = 0x9b;
        iVar9 = 0;
LAB_144baea50:
        uVar8 = 0x68;
        pvVar10 = pvVar5;
        iVar4 = iVar9;
      }
      else if ((((param_1 == 0x5f) && (iVar1 == 0x12)) && (*_Buf2 == '\x04')) &&
              (_Buf2[1] == '\x10')) {
        if (param_4 != (undefined8 *)0x0) {
          uVar6 = *(undefined8 *)(_Buf2 + 10);
          uVar11 = 1;
          *param_4 = *(undefined8 *)(_Buf2 + 2);
          param_4[1] = uVar6;
          *param_5 = 0x10;
          goto LAB_144baec37;
        }
        if (param_3 == 0x10) {
          if ((*param_2 == *(longlong *)(_Buf2 + 2)) &&
             (pvVar5 = pvVar10, iVar9 = iVar2, param_2[1] == *(longlong *)(_Buf2 + 10)))
          goto LAB_144baec1c;
          uVar11 = 0xbd;
          pvVar5 = pvVar10;
          iVar9 = 0;
          goto LAB_144baea50;
        }
        uVar11 = 0xb8;
        uVar8 = 0x83;
        pvVar10 = pvVar5;
        iVar4 = 0;
      }
      else {
        if (param_4 == (undefined8 *)0x0) {
LAB_144baebc0:
          iVar4 = FUN_144baec90(&local_30,local_38,param_1,param_2,(int)_Size);
          pvVar5 = local_30;
          iVar9 = local_38[0];
          pvVar10 = local_30;
          iVar2 = local_38[0];
          if (iVar4 != 0) {
            if ((local_38[0] != iVar1) ||
               (iVar2 = memcmp(local_30,_Buf2,(longlong)local_38[0]), iVar2 != 0)) {
              uVar11 = 0xdc;
              goto LAB_144baea50;
            }
            if (param_4 != (undefined8 *)0x0) {
              memcpy(param_4,param_2,_Size);
              *param_5 = _Size;
            }
            goto LAB_144baec1c;
          }
          goto LAB_144baec35;
        }
        uVar6 = FUN_144ea8ee0(param_1);
        lVar7 = FUN_144baab30(uVar6);
        if (lVar7 == 0) {
          uVar11 = 0xca;
          uVar8 = 0x75;
        }
        else {
          uVar3 = FUN_144ba3cd0(lVar7);
          _Size = (size_t)uVar3;
          if (_Size <= (ulonglong)(longlong)iVar1) {
            param_2 = (longlong *)(_Buf2 + ((longlong)iVar1 - _Size));
            goto LAB_144baebc0;
          }
          uVar11 = 0xd0;
          uVar8 = 0x8f;
        }
      }
      FUN_144ba24f0(4,0x91,uVar8,"crypto\\rsa\\rsa_sign.c",uVar11);
      iVar2 = iVar4;
    }
  }
LAB_144baec35:
  iVar9 = iVar2;
  uVar11 = 0;
LAB_144baec37:
  FUN_144ea66f0(pvVar10,(longlong)iVar9,"crypto\\rsa\\rsa_sign.c",0xea);
  FUN_144ea66f0(_Buf2,param_7,"crypto\\rsa\\rsa_sign.c",0xeb);
  return uVar11;
}



// FUNCTION 144baec90 FUN_144baec90 body=286 status=ok
// SIG undefined FUN_144baec90(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_144baec90(undefined8 *param_1,int *param_2,undefined4 param_3,undefined8 param_4,
             undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_58;
  longlong *local_50;
  undefined4 *local_48;
  undefined4 local_40 [2];
  undefined8 local_38;
  longlong local_30 [2];
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x144baeca5;
  local_58 = 0;
  local_50 = local_30;
  lVar2 = FUN_144ea8d60(param_3);
  *local_50 = lVar2;
  if (*local_50 == 0) {
    FUN_144ba24f0(4,0x92,0x75,"crypto\\rsa\\rsa_sign.c",0x2c);
  }
  else {
    lVar2 = FUN_144ea9be0();
    if (lVar2 == 0) {
      FUN_144ba24f0(4,0x92,0x74,"crypto\\rsa\\rsa_sign.c",0x31);
      return 0;
    }
    local_40[0] = 5;
    local_38 = 0;
    local_50[1] = (longlong)local_40;
    local_48 = local_20;
    local_20[0] = param_5;
    local_18 = param_4;
    iVar1 = FUN_144ef1050(&local_50,&local_58);
    if (-1 < iVar1) {
      *param_1 = local_58;
      *param_2 = iVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144baedb0 FUN_144baedb0 body=102 status=ok
// SIG undefined FUN_144baedb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144baedb0(undefined4 *param_1)

{
  memset(param_1,0,0x70);
  *param_1 = 0xc1059ed8;
  param_1[1] = 0x367cd507;
  param_1[2] = 0x3070dd17;
  param_1[3] = 0xf70e5939;
  param_1[4] = 0xffc00b31;
  param_1[5] = 0x68581511;
  param_1[6] = 0x64f98fa7;
  param_1[7] = 0xbefa4fa4;
  param_1[0x1b] = 0x1c;
  return 1;
}



// FUNCTION 144baee20 FUN_144baee20 body=22 status=ok
// SIG undefined FUN_144baee20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baee20(void)

{
  FUN_144baeed0();
  return;
}



// FUNCTION 144baee40 FUN_144baee40 body=22 status=ok
// SIG undefined FUN_144baee40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baee40(void)

{
  FUN_144baf000();
  return;
}



// FUNCTION 144baee60 FUN_144baee60 body=102 status=ok
// SIG undefined FUN_144baee60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144baee60(undefined4 *param_1)

{
  memset(param_1,0,0x70);
  *param_1 = 0x6a09e667;
  param_1[1] = 0xbb67ae85;
  param_1[2] = 0x3c6ef372;
  param_1[3] = 0xa54ff53a;
  param_1[4] = 0x510e527f;
  param_1[5] = 0x9b05688c;
  param_1[6] = 0x1f83d9ab;
  param_1[7] = 0x5be0cd19;
  param_1[0x1b] = 0x20;
  return 1;
}



// FUNCTION 144baeed0 FUN_144baeed0 body=295 status=ok
// SIG undefined FUN_144baeed0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144baeed0(longlong param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  size_t _Size;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    uVar2 = *(uint *)(param_1 + 0x20) + (int)param_3 * 8;
    if (uVar2 < *(uint *)(param_1 + 0x20)) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
    *(uint *)(param_1 + 0x20) = uVar2;
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x68);
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (int)(param_3 >> 0x1d);
    if (uVar3 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x28);
      if ((param_3 < 0x40) && (uVar3 + param_3 < 0x40)) {
        memcpy((void *)(uVar3 + (longlong)puVar1),param_2,param_3);
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (int)param_3;
        return 1;
      }
      _Size = 0x40 - uVar3;
      memcpy((void *)(uVar3 + (longlong)puVar1),param_2,_Size);
      FUN_1425a8100(param_1,puVar1,1);
      *(undefined4 *)(param_1 + 0x68) = 0;
      param_2 = (void *)((longlong)param_2 + _Size);
      param_3 = param_3 - _Size;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    uVar3 = param_3 >> 6;
    if (uVar3 != 0) {
      FUN_1425a8100(param_1,param_2,uVar3);
      param_2 = (void *)((longlong)param_2 + uVar3 * 0x40);
      param_3 = param_3 + uVar3 * -0x40;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x68) = (int)param_3;
      memcpy((void *)(param_1 + 0x28),param_2,param_3);
    }
  }
  return 1;
}



// FUNCTION 144baf000 FUN_144baf000 body=793 status=ok
// SIG undefined FUN_144baf000(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144baf000(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar2 = param_2[0x1a];
  puVar1 = param_2 + 10;
  uVar4 = 0;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar5 = (ulonglong)uVar2 + 1;
  if (0x38 < uVar5) {
    memset((void *)(uVar5 + (longlong)puVar1),0,0x40 - uVar5);
    uVar5 = 0;
    FUN_1425a8100(param_2,puVar1,1);
  }
  memset((void *)(uVar5 + (longlong)puVar1),0,0x38 - uVar5);
  *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x27);
  *(undefined1 *)((longlong)param_2 + 0x61) = *(undefined1 *)((longlong)param_2 + 0x26);
  *(undefined1 *)((longlong)param_2 + 0x62) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined1 *)((longlong)param_2 + 99) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)((longlong)param_2 + 0x65) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_2 + 0x66) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_2 + 0x67) = *(undefined1 *)(param_2 + 8);
  FUN_1425a8100(param_2,puVar1,1);
  param_2[0x1a] = 0;
  FUN_14259f0c0(puVar1,0x40);
  uVar2 = param_2[0x1b];
  if (uVar2 == 0x1c) {
    uVar3 = *param_2;
    *param_1 = (char)((uint)uVar3 >> 0x18);
    param_1[1] = (char)((uint)uVar3 >> 0x10);
    param_1[2] = (char)((uint)uVar3 >> 8);
    param_1[3] = (char)uVar3;
    uVar3 = param_2[1];
    param_1[4] = (char)((uint)uVar3 >> 0x18);
    param_1[5] = (char)((uint)uVar3 >> 0x10);
    param_1[6] = (char)((uint)uVar3 >> 8);
    param_1[7] = (char)uVar3;
    uVar3 = param_2[2];
    param_1[8] = (char)((uint)uVar3 >> 0x18);
    param_1[9] = (char)((uint)uVar3 >> 0x10);
    param_1[10] = (char)((uint)uVar3 >> 8);
    param_1[0xb] = (char)uVar3;
    uVar3 = param_2[3];
    param_1[0xc] = (char)((uint)uVar3 >> 0x18);
    param_1[0xd] = (char)((uint)uVar3 >> 0x10);
    param_1[0xe] = (char)((uint)uVar3 >> 8);
    param_1[0xf] = (char)uVar3;
    uVar3 = param_2[4];
    param_1[0x10] = (char)((uint)uVar3 >> 0x18);
    param_1[0x11] = (char)((uint)uVar3 >> 0x10);
    param_1[0x12] = (char)((uint)uVar3 >> 8);
    param_1[0x13] = (char)uVar3;
    uVar3 = param_2[5];
    param_1[0x14] = (char)((uint)uVar3 >> 0x18);
    param_1[0x15] = (char)((uint)uVar3 >> 0x10);
    param_1[0x16] = (char)((uint)uVar3 >> 8);
    param_1[0x17] = (char)uVar3;
    uVar3 = param_2[6];
    param_1[0x18] = (char)((uint)uVar3 >> 0x18);
    param_1[0x19] = (char)((uint)uVar3 >> 0x10);
    param_1[0x1a] = (char)((uint)uVar3 >> 8);
    param_1[0x1b] = (char)uVar3;
  }
  else if (uVar2 == 0x20) {
    uVar3 = *param_2;
    *param_1 = (char)((uint)uVar3 >> 0x18);
    param_1[1] = (char)((uint)uVar3 >> 0x10);
    param_1[2] = (char)((uint)uVar3 >> 8);
    param_1[3] = (char)uVar3;
    uVar3 = param_2[1];
    param_1[4] = (char)((uint)uVar3 >> 0x18);
    param_1[5] = (char)((uint)uVar3 >> 0x10);
    param_1[6] = (char)((uint)uVar3 >> 8);
    param_1[7] = (char)uVar3;
    uVar3 = param_2[2];
    param_1[8] = (char)((uint)uVar3 >> 0x18);
    param_1[9] = (char)((uint)uVar3 >> 0x10);
    param_1[10] = (char)((uint)uVar3 >> 8);
    param_1[0xb] = (char)uVar3;
    uVar3 = param_2[3];
    param_1[0xc] = (char)((uint)uVar3 >> 0x18);
    param_1[0xd] = (char)((uint)uVar3 >> 0x10);
    param_1[0xe] = (char)((uint)uVar3 >> 8);
    param_1[0xf] = (char)uVar3;
    uVar3 = param_2[4];
    param_1[0x10] = (char)((uint)uVar3 >> 0x18);
    param_1[0x11] = (char)((uint)uVar3 >> 0x10);
    param_1[0x12] = (char)((uint)uVar3 >> 8);
    param_1[0x13] = (char)uVar3;
    uVar3 = param_2[5];
    param_1[0x14] = (char)((uint)uVar3 >> 0x18);
    param_1[0x15] = (char)((uint)uVar3 >> 0x10);
    param_1[0x16] = (char)((uint)uVar3 >> 8);
    param_1[0x17] = (char)uVar3;
    uVar3 = param_2[6];
    param_1[0x18] = (char)((uint)uVar3 >> 0x18);
    param_1[0x19] = (char)((uint)uVar3 >> 0x10);
    param_1[0x1a] = (char)((uint)uVar3 >> 8);
    param_1[0x1b] = (char)uVar3;
    uVar3 = param_2[7];
    param_1[0x1c] = (char)((uint)uVar3 >> 0x18);
    param_1[0x1d] = (char)((uint)uVar3 >> 0x10);
    param_1[0x1e] = (char)((uint)uVar3 >> 8);
    param_1[0x1f] = (char)uVar3;
  }
  else {
    if (0x20 < uVar2) {
      return 0;
    }
    if ((uVar2 & 0xfffffffc) != 0) {
      do {
        uVar5 = (ulonglong)uVar4;
        uVar4 = uVar4 + 1;
        uVar3 = param_2[uVar5];
        *param_1 = (char)((uint)uVar3 >> 0x18);
        param_1[1] = (char)((uint)uVar3 >> 0x10);
        param_1[2] = (char)((uint)uVar3 >> 8);
        param_1[3] = (char)uVar3;
        param_1 = param_1 + 4;
      } while (uVar4 < (uint)param_2[0x1b] >> 2);
    }
  }
  return 1;
}



// FUNCTION 144baf320 FUN_144baf320 body=26 status=ok
// SIG undefined FUN_144baf320(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baf320(undefined8 param_1,undefined8 param_2)

{
  FUN_1425a8100(param_1,param_2,1);
  return;
}



// FUNCTION 144baf340 FUN_144baf340 body=958 status=ok
// SIG undefined FUN_144baf340(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baf340(undefined8 *param_1,char *param_2,int param_3)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 *_Src;
  longlong lVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  undefined8 uVar18;
  char *pcVar19;
  ulonglong uVar20;
  int iVar21;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  int local_c8;
  ulonglong local_c0;
  char *local_b8;
  undefined8 *local_b0;
  int local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined1 local_98 [80];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x144baf35a;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar5 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  if (param_2 == (char *)0x0) {
    lVar5 = FUN_144ea6fc0();
    if (lVar5 != 0) {
      param_3 = 200;
      lVar6 = FUN_144ea70e0(lVar5,200);
      if (lVar6 != 0) {
        **(undefined1 **)(lVar5 + 8) = 0;
        goto LAB_144baf3c4;
      }
    }
LAB_144baf6d1:
    local_d8 = 0xb1;
    uVar18 = 0x41;
LAB_144baf6f9:
    FUN_144ba24f0(0xb,0x74,uVar18,"crypto\\x509\\x509_obj.c");
    FUN_144ea7070(lVar5);
  }
  else {
    if (param_3 == 0) goto LAB_144baf6a6;
LAB_144baf3c4:
    if (param_1 == (undefined8 *)0x0) {
      if (lVar5 != 0) {
        param_2 = *(char **)(lVar5 + 8);
        FUN_144ea6530(lVar5,"crypto\\x509\\x509_obj.c",0x35);
      }
      strncpy(param_2,"NO X509_NAME",(longlong)param_3);
      param_2[param_3 + -1] = '\0';
    }
    else {
      local_c0 = (ulonglong)(param_3 - 1);
      iVar21 = 0;
      iVar13 = 0;
      local_c8 = 0;
      iVar3 = FUN_144babbf0(*param_1);
      if (0 < iVar3) {
        do {
          puVar7 = (undefined8 *)FUN_144babc00(*param_1,iVar13);
          iVar3 = FUN_144ea8fa0(*puVar7);
          if ((iVar3 == 0) || (_Src = (undefined1 *)FUN_144ea8ee0(iVar3), _Src == (undefined1 *)0x0)
             ) {
            FUN_144ed0b30(local_98,0x50,*puVar7);
            _Src = local_98;
          }
          uVar15 = 0xffffffffffffffff;
          do {
            uVar15 = uVar15 + 1;
          } while (_Src[uVar15] != '\0');
          puVar2 = (uint *)puVar7[1];
          uVar12 = *puVar2;
          uVar20 = (ulonglong)uVar12;
          if (0x100000 < (int)uVar12) {
            local_d8 = 0x4a;
LAB_144baf6f3:
            uVar18 = 0x86;
            goto LAB_144baf6f9;
          }
          pcVar19 = *(char **)(puVar2 + 2);
          if (puVar2[1] == 0x1b) {
            uVar4 = uVar12 & 0x80000003;
            if ((int)uVar4 < 0) {
              uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
            }
            if (uVar4 != 0) goto LAB_144baf515;
            uVar4 = 0;
            local_a4._0_4_ = 0;
            local_a4 = (undefined1 *)0x0;
            local_a8 = 0;
            pcVar10 = pcVar19;
            uVar16 = uVar20;
            iVar3 = (int)local_a4;
            local_a4._4_4_ = (int)local_a4;
            if (0 < (int)uVar12) {
              do {
                if (*pcVar10 != '\0') {
                  (&local_a8)[uVar4 & 3] = 1;
                }
                uVar4 = uVar4 + 1;
                uVar16 = uVar16 - 1;
                pcVar10 = pcVar10 + 1;
              } while (uVar16 != 0);
              iVar3 = local_a8;
            }
            local_9c = 1;
            if ((iVar3 != 0 || (int)local_a4 != 0) || local_a4._4_4_ != 0) goto LAB_144baf520;
            local_a4 = (undefined1 *)0x0;
            local_a8 = 0;
          }
          else {
LAB_144baf515:
            local_9c = 1;
LAB_144baf520:
            local_a8 = 1;
            local_a4 = &DAT_100000001;
          }
          local_9c = 1;
          uVar11 = 0;
          uVar9 = 0;
          uVar16 = uVar20;
          uVar4 = uVar11;
          if (0 < (int)uVar12) {
            do {
              uVar9 = uVar4;
              if (((&local_a8)[uVar11 & 3] != 0) &&
                 (uVar9 = uVar4 + 1, 0x5e < (byte)(*pcVar19 - 0x20U))) {
                uVar9 = uVar4 + 4;
              }
              uVar11 = uVar11 + 1;
              pcVar19 = pcVar19 + 1;
              uVar16 = uVar16 - 1;
              uVar4 = uVar9;
            } while (uVar16 != 0);
          }
          lVar6 = (longlong)iVar21;
          iVar21 = iVar21 + 2 + uVar9 + (int)uVar15;
          if (0x100000 < iVar21) {
            local_d8 = 0x7b;
            goto LAB_144baf6f3;
          }
          if (lVar5 == 0) {
            pcVar19 = param_2;
            if ((int)local_c0 < iVar21) goto LAB_144baf697;
          }
          else {
            lVar8 = FUN_144ea70e0(lVar5,(longlong)(iVar21 + 1));
            if (lVar8 == 0) goto LAB_144baf6d1;
            pcVar19 = *(char **)(lVar5 + 8);
          }
          pcVar19 = pcVar19 + lVar6;
          *pcVar19 = '/';
          pcVar19 = pcVar19 + 1;
          memcpy(pcVar19,_Src,uVar15 & 0xffffffff);
          param_1 = local_b0;
          pcVar19[(int)uVar15] = '=';
          pbVar14 = (byte *)(pcVar19 + (int)uVar15 + 1);
          pbVar17 = *(byte **)(puVar7[1] + 8);
          if (0 < (int)uVar12) {
            uVar12 = 0;
            do {
              if ((&local_a8)[uVar12 & 3] != 0) {
                bVar1 = *pbVar17;
                if (bVar1 - 0x20 < 0x5f) {
                  *pbVar14 = bVar1;
                  pbVar14 = pbVar14 + 1;
                }
                else {
                  pbVar14[0] = 0x5c;
                  pbVar14[1] = 0x78;
                  pbVar14[2] = "0123456789ABCDEF"[(longlong)(ulonglong)bVar1 >> 4];
                  pbVar14[3] = "0123456789ABCDEF"[bVar1 & 0xf];
                  pbVar14 = pbVar14 + 4;
                }
              }
              uVar12 = uVar12 + 1;
              pbVar17 = pbVar17 + 1;
              uVar20 = uVar20 - 1;
              param_2 = local_b8;
            } while (uVar20 != 0);
          }
          *pbVar14 = 0;
          iVar13 = local_c8 + 1;
          local_c8 = iVar13;
          iVar3 = FUN_144babbf0(*local_b0);
        } while (iVar13 < iVar3);
      }
      if (lVar5 != 0) {
        param_2 = *(char **)(lVar5 + 8);
        FUN_144ea6530(lVar5,"crypto\\x509\\x509_obj.c",0xaa);
      }
LAB_144baf697:
      if (local_c8 == 0) {
        *param_2 = '\0';
      }
    }
  }
LAB_144baf6a6:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
}



// FUNCTION 144baf720 FUN_144baf720 body=80 status=ok
// SIG undefined FUN_144baf720(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_144baf720(void)

{
  longlong lVar1;
  
  lVar1 = FUN_144ea6670(0xf8,"crypto\\x509\\x509_vfy.c",0x8cb);
  if (lVar1 == 0) {
    FUN_144ba24f0(0xb,0x8e,0x41,"crypto\\x509\\x509_vfy.c",0x8ce);
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 144baf770 FUN_144baf770 body=54 status=ok
// SIG undefined FUN_144baf770(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144baf770(longlong param_1)

{
  if (param_1 != 0) {
    FUN_144bafa60();
    FUN_144ea6530(param_1,"crypto\\x509\\x509_vfy.c",0x8da);
  }
  return;
}



// FUNCTION 144baf7b0 FUN_144baf7b0 body=681 status=ok
// SIG undefined FUN_144baf7b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_144baf7b0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  code *pcVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x144baf7c5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  param_1[0x12] = 0;
  param_1[5] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x14] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = 0;
  if (param_2 == 0) {
    param_1[0x11] = 0;
LAB_144baf860:
    pcVar2 = FUN_144bb0f20;
  }
  else {
    param_1[0x11] = *(longlong *)(param_2 + 0x78);
    pcVar2 = *(code **)(param_2 + 0x38);
    if (pcVar2 == (code *)0x0) goto LAB_144baf860;
  }
  param_1[9] = (longlong)pcVar2;
  if ((param_2 == 0) || (pcVar2 = *(code **)(param_2 + 0x30), pcVar2 == (code *)0x0)) {
    pcVar2 = FUN_144bb4630;
  }
  param_1[8] = (longlong)pcVar2;
  if ((param_2 == 0) || (puVar3 = *(undefined1 **)(param_2 + 0x28), puVar3 == (undefined1 *)0x0)) {
    puVar3 = &LAB_144bb0f10;
  }
  param_1[7] = (longlong)puVar3;
  if ((param_2 == 0) || (pcVar2 = *(code **)(param_2 + 0x20), pcVar2 == (code *)0x0)) {
    pcVar2 = FUN_144bb2790;
  }
  param_1[6] = (longlong)pcVar2;
  if ((param_2 == 0) || (pcVar2 = *(code **)(param_2 + 0x40), pcVar2 == (code *)0x0)) {
    pcVar2 = FUN_144bb19a0;
  }
  param_1[10] = (longlong)pcVar2;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x48) == 0)) {
    param_1[0xb] = 0;
  }
  else {
    param_1[0xb] = *(longlong *)(param_2 + 0x48);
  }
  if ((param_2 == 0) || (pcVar2 = *(code **)(param_2 + 0x50), pcVar2 == (code *)0x0)) {
    pcVar2 = FUN_144bb3500;
  }
  param_1[0xc] = (longlong)pcVar2;
  if ((param_2 == 0) || (pcVar2 = *(code **)(param_2 + 0x58), pcVar2 == (code *)0x0)) {
    pcVar2 = FUN_144bb37c0;
  }
  param_1[0xd] = (longlong)pcVar2;
  if ((param_2 == 0) || (pcVar2 = *(code **)(param_2 + 0x60), pcVar2 == (code *)0x0)) {
    pcVar2 = FUN_144bb1bc0;
  }
  param_1[0xe] = (longlong)pcVar2;
  if ((param_2 == 0) || (pcVar2 = *(code **)(param_2 + 0x68), pcVar2 == (code *)0x0)) {
    pcVar2 = FUN_144bb4290;
  }
  param_1[0xf] = (longlong)pcVar2;
  if ((param_2 == 0) || (pcVar2 = *(code **)(param_2 + 0x70), pcVar2 == (code *)0x0)) {
    pcVar2 = FUN_144bb4420;
  }
  param_1[0x10] = (longlong)pcVar2;
  lVar4 = FUN_144eaaef0();
  param_1[4] = lVar4;
  if (lVar4 == 0) {
    uVar6 = 0x938;
    goto LAB_144bafa25;
  }
  if (param_2 == 0) {
    *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 0x11;
LAB_144baf99d:
    uVar5 = FUN_144eab440("default");
    iVar1 = FUN_144eaaff0(param_1[4],uVar5);
    if (iVar1 != 0) {
      if (*(int *)(param_1[4] + 0x1c) == 0) {
        uVar6 = FUN_144ec5780(*(undefined4 *)(param_1[4] + 0x18));
        lVar4 = FUN_144ec5730(uVar6);
        if (lVar4 != 0) {
          uVar6 = FUN_144ec57d0(lVar4);
          *(undefined4 *)(param_1[4] + 0x1c) = uVar6;
        }
      }
      iVar1 = FUN_144ea5c20(5,param_1,param_1 + 0x1c);
      if (iVar1 != 0) {
        return 1;
      }
      uVar6 = 0x95c;
      goto LAB_144bafa25;
    }
  }
  else {
    iVar1 = FUN_144eaaff0(lVar4,*(undefined8 *)(param_2 + 0x18));
    if (iVar1 != 0) goto LAB_144baf99d;
  }
  uVar6 = 0x949;
LAB_144bafa25:
  FUN_144ba24f0(0xb,0x8f,0x41,"crypto\\x509\\x509_vfy.c",uVar6,uVar7);
  FUN_144bafa60(param_1);
  return 0;
}



// FUNCTION 144bafa60 FUN_144bafa60 body=157 status=ok
// SIG undefined FUN_144bafa60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bafa60(longlong param_1)

{
  if (*(code **)(param_1 + 0x88) != (code *)0x0) {
    (**(code **)(param_1 + 0x88))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (*(longlong *)(param_1 + 0xd8) == 0) {
      FUN_144eaaf50();
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  FUN_144ef2db0(*(undefined8 *)(param_1 + 0xa0));
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_144babe00(*(undefined8 *)(param_1 + 0x98),FUN_144b47250);
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_144ea6040(5,param_1,param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}



// FUNCTION 144bafb00 FUN_144bafb00 body=5 status=ok
// SIG undefined FUN_144bafb00(void)

void FUN_144bafb00(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}



// FUNCTION 144bafb10 FUN_144bafb10 body=29 status=ok
// SIG undefined FUN_144bafb10(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bafb10(longlong param_1)

{
  FUN_144ea6220(param_1 + 0xe0);
  return;
}



// FUNCTION 144bafb30 FUN_144bafb30 body=29 status=ok
// SIG undefined FUN_144bafb30(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144bafb30(longlong param_1)

{
  FUN_144ea6300(param_1 + 0xe0);
  return;
}



// FUNCTION 144bafb50 FUN_144bafb50 body=7 status=ok
// SIG undefined FUN_144bafb50(void)

undefined4 FUN_144bafb50(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}


