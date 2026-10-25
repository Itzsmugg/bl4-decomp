// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1481151cc FUN_1481151cc body=279 status=ok
// SIG undefined FUN_1481151cc(void)

longlong FUN_1481151cc(longlong param_1,undefined8 param_2,longlong *param_3,int param_4,
                      undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  longlong local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  undefined4 uStack_47;
  undefined4 uStack_43;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((param_1 != 0) &&
       (lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1), 0 < param_4 && lVar2 != 0)) &&
      (lVar2 = FUN_1400bd118(lVar2), lVar2 != 0)) &&
     ((lVar2 = FUN_1481153e0(*(undefined8 *)(lVar2 + 0x1c78),param_2), lVar2 != 0 &&
      (lVar2 = FUN_1481154b4(lVar2), lVar2 != 0)))) {
    local_60 = *param_3;
    if ((local_60 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    uStack_58 = (undefined4)param_3[1];
    uStack_54 = *(undefined4 *)((longlong)param_3 + 0xc);
    uStack_50 = (undefined4)param_3[2];
    uStack_4c = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_47 = *(undefined4 *)((longlong)param_3 + 0x19);
    uStack_43 = *(undefined4 *)((longlong)param_3 + 0x1d);
    uStack_48 = (undefined1)((uint)*(undefined4 *)((longlong)param_3 + 0x15) >> 0x18);
    local_70 = param_7;
    local_78 = param_6;
    cVar1 = FUN_143a071f6(lVar2,&local_60,param_4,
                          CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
    if (cVar1 != '\0') goto LAB_148115228;
  }
  lVar2 = 0;
LAB_148115228:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1481152e4 FUN_1481152e4 body=220 status=ok
// SIG undefined FUN_1481152e4(void)

longlong FUN_1481152e4(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined4 uStack_2f;
  undefined4 uStack_2b;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((param_1 != 0) && (lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1), lVar2 != 0)) &&
      (lVar2 = FUN_1400bd118(lVar2), lVar2 != 0)) &&
     ((lVar2 = FUN_1481153e0(*(undefined8 *)(lVar2 + 0x1c78),param_2), lVar2 != 0 &&
      (lVar2 = FUN_148115522(lVar2), lVar2 != 0)))) {
    local_48 = *param_3;
    if ((local_48 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    uStack_40 = (undefined4)param_3[1];
    uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
    uStack_38 = (undefined4)param_3[2];
    uStack_34 = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_2f = *(undefined4 *)((longlong)param_3 + 0x19);
    uStack_2b = *(undefined4 *)((longlong)param_3 + 0x1d);
    uStack_30 = (undefined1)((uint)*(undefined4 *)((longlong)param_3 + 0x15) >> 0x18);
    cVar1 = FUN_148115590(lVar2,&local_48,param_4);
    if (cVar1 != '\0') goto LAB_148115331;
  }
  lVar2 = 0;
LAB_148115331:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1481153c2 FUN_1481153c2 body=30 status=ok
// SIG undefined FUN_1481153c2(void)

undefined4 FUN_1481153c2(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
  if (*(char *)(param_1 + 0x38) == '\x01') {
    return *(undefined4 *)(lVar1 + 0x24);
  }
  return *(undefined4 *)(lVar1 + 0x20);
}



// FUNCTION 1481153e0 FUN_1481153e0 body=189 status=ok
// SIG undefined FUN_1481153e0(void)

undefined8 FUN_1481153e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (DAT_14c762850 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    local_30 = 0;
    FUN_14485c47a(&local_30,param_2);
    local_28 = local_30;
    iVar2 = FUN_1481250e8((longlong *)(param_1 + 8),
                          (uint)((ulonglong)local_30 >> 0x20) ^ (uint)local_30);
    if ((iVar2 != -1) &&
       (lVar1 = *(longlong *)(param_1 + 8) + (longlong)iVar2 * 0x18,
       puVar4 = (undefined8 *)(lVar1 + 8), puVar4 != (undefined8 *)0x0 && lVar1 != 0)) {
      uVar3 = *puVar4;
      goto LAB_1481153fd;
    }
  }
  uVar3 = 0;
LAB_1481153fd:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481154b4 FUN_1481154b4 body=110 status=ok
// SIG undefined FUN_1481154b4(void)

longlong FUN_1481154b4(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 == 0) {
    lVar2 = FUN_148116df7(DAT_14c951640);
    if (lVar2 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar2);
    }
    bVar1 = DAT_14c950c29;
    *(longlong *)(param_1 + 0x30) = lVar2;
    if ((param_1 != 0) && ((bVar1 & 1) != 0)) {
      FUN_1456cec3c(param_1);
    }
    *(longlong *)(lVar2 + 0x38) = param_1;
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  return lVar2;
}



// FUNCTION 148115522 FUN_148115522 body=110 status=ok
// SIG undefined FUN_148115522(void)

longlong FUN_148115522(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (lVar2 == 0) {
    lVar2 = FUN_148116ea7(DAT_14c951640);
    if (lVar2 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar2);
    }
    bVar1 = DAT_14c950c29;
    *(longlong *)(param_1 + 0x38) = lVar2;
    if ((param_1 != 0) && ((bVar1 & 1) != 0)) {
      FUN_1456cec3c(param_1);
    }
    *(longlong *)(lVar2 + 0x40) = param_1;
    lVar2 = *(longlong *)(param_1 + 0x38);
  }
  return lVar2;
}



// FUNCTION 148115590 FUN_148115590 body=346 status=ok
// SIG undefined FUN_148115590(void)

bool FUN_148115590(longlong param_1,longlong *param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  undefined4 uStack_47;
  undefined4 uStack_43;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_1 + 0x28) = 0;
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (plVar2 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x38) = param_3;
  plVar2 = *(longlong **)(param_1 + 0x40);
  local_60 = *param_2;
  if ((local_60 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uStack_58 = (undefined4)param_2[1];
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_50 = (undefined4)param_2[2];
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_47 = *(undefined4 *)((longlong)param_2 + 0x19);
  uStack_43 = *(undefined4 *)((longlong)param_2 + 0x1d);
  uStack_48 = (undefined1)((uint)*(undefined4 *)((longlong)param_2 + 0x15) >> 0x18);
  (**(code **)(*plVar2 + 0x2c8))(plVar2,&local_38,&local_60,0);
  plVar2 = local_30;
  if ((longlong *)(param_1 + 0x28) != &local_38) {
    *(longlong *)(param_1 + 0x28) = local_38;
    local_38 = 0;
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (local_30 != plVar3) {
      local_30 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x30) = plVar2;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
  }
  plVar2 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return *(longlong *)(param_1 + 0x28) != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481156ec FUN_1481156ec body=120 status=ok
// SIG undefined FUN_1481156ec(void)

undefined4 FUN_1481156ec(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [20];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14483f2ae();
  if (((char)uVar1 != '\0') && ((*(byte *)(param_2 + 0x28) & 1) != 0)) {
    uVar3 = FUN_144741050(param_1 + 8);
    FUN_148115766(local_38,uVar3);
    uVar2 = FUN_144830b78(local_24,local_38);
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148115766 FUN_148115766 body=542 status=ok
// SIG undefined FUN_148115766(void)

longlong * FUN_148115766(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = DAT_14cb42140;
  if ((DAT_14cb42140 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(DAT_14cb42140);
  }
  lVar1 = DAT_14cb420f0;
  lVar3 = *param_2;
  if (((lVar3 == lVar2) && ((short)param_2[1] == (short)DAT_14cb42148)) &&
     (*(char *)((longlong)param_2 + 10) == DAT_14cb42148._2_1_)) {
    FUN_1408c4b2a(param_1);
  }
  else {
    if ((DAT_14cb420f0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb420f0);
      lVar3 = *param_2;
    }
    lVar2 = DAT_14cb42190;
    if (((lVar3 == lVar1) && ((short)param_2[1] == (short)DAT_14cb420f8)) &&
       (*(char *)((longlong)param_2 + 10) == DAT_14cb420f8._2_1_)) {
      FUN_1481f9c60(param_1);
    }
    else {
      if ((DAT_14cb42190 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(DAT_14cb42190);
        lVar3 = *param_2;
      }
      lVar1 = DAT_14cb42110;
      if (((lVar3 == lVar2) && ((short)param_2[1] == DAT_14cb42198)) &&
         (*(char *)((longlong)param_2 + 10) == DAT_14cb4219a)) {
        FUN_1481f9734(param_1);
      }
      else {
        if ((DAT_14cb42110 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(DAT_14cb42110);
          lVar3 = *param_2;
        }
        lVar2 = DAT_14cb42160;
        if (((lVar3 == lVar1) && ((short)param_2[1] == (short)DAT_14cb42118)) &&
           (*(char *)((longlong)param_2 + 10) == DAT_14cb42118._2_1_)) {
          FUN_1481f96b0(param_1);
        }
        else {
          if ((DAT_14cb42160 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(DAT_14cb42160);
            lVar3 = *param_2;
          }
          if (((lVar3 == lVar2) && ((short)param_2[1] == (short)DAT_14cb42168)) &&
             (*(char *)((longlong)param_2 + 10) == DAT_14cb42168._2_1_)) {
            FUN_1481f96f2(param_1);
          }
          else {
            *param_1 = lVar3;
            if ((lVar3 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c();
            }
            param_1[1] = param_2[1];
          }
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 148115984 FUN_148115984 body=155 status=ok
// SIG undefined FUN_148115984(void)

void FUN_148115984(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50 [2];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  FUN_1481f9c60(local_68);
  local_58 = param_2;
  local_50[0] = FUN_144830b78(local_50,local_68);
  uVar1 = FUN_148115a20(param_1,&local_58,param_3,&local_48);
  *param_4 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48);
}



// FUNCTION 148115a20 FUN_148115a20 body=114 status=ok
// SIG undefined FUN_148115a20(void)

ulonglong FUN_148115a20(longlong param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar3 = FUN_1481131a2(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10)), lVar3 != 0)) {
    lVar2 = (longlong)*(int *)(lVar3 + 8 + (ulonglong)*(byte *)(param_1 + 0x38) * 0x10) /
            (longlong)*(int *)(lVar3 + 0x20);
    bVar1 = (int)param_3 < (int)lVar2;
    uVar4 = 0;
    if (bVar1 && -1 < (int)param_3) {
      uVar4 = *(undefined8 *)
               (*(longlong *)(lVar3 + (ulonglong)*(byte *)(param_1 + 0x38) * 0x10) +
               (ulonglong)param_3 * 8);
    }
    *param_4 = uVar4;
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar1 && -1 < (int)param_3) & 0xffffffff;
  }
  return 0;
}



// FUNCTION 148115a92 FUN_148115a92 body=162 status=ok
// SIG undefined FUN_148115a92(void)

undefined4 *
FUN_148115a92(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined4 local_48 [2];
  ulonglong local_40;
  
  uVar3 = DAT_14c8463f8._4_4_;
  uVar2 = (undefined4)DAT_14c8463f8;
  uVar1 = DAT_14c8463f0._4_4_;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = (undefined4)DAT_14c8463f0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  FUN_1481f96b0(local_60);
  local_50 = param_3;
  local_48[0] = FUN_144830b78(local_48,local_60);
  uVar4 = FUN_148115b36(param_1,&local_50,param_4,param_2);
  *param_5 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148115b36 FUN_148115b36 body=115 status=ok
// SIG undefined FUN_148115b36(void)

undefined8 FUN_148115b36(longlong param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar3 = FUN_1481131a2(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10)), lVar3 != 0)) {
    if ((-1 < (int)param_3) &&
       ((int)param_3 <
        *(int *)(lVar3 + 8 + (ulonglong)*(byte *)(param_1 + 0x38) * 0x10) / *(int *)(lVar3 + 0x20)))
    {
      lVar3 = *(longlong *)(lVar3 + (ulonglong)*(byte *)(param_1 + 0x38) * 0x10);
      puVar1 = (undefined8 *)(lVar3 + (ulonglong)param_3 * 0x10);
      uVar2 = puVar1[1];
      *param_4 = *puVar1;
      param_4[1] = uVar2;
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
    *param_4 = 0;
    param_4[1] = 0;
  }
  return 0;
}



// FUNCTION 148115baa FUN_148115baa body=173 status=ok
// SIG undefined FUN_148115baa(void)

undefined4 *
FUN_148115baa(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined4 local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  FUN_1408c4b2a(local_60);
  local_50 = param_3;
  local_48[0] = FUN_144830b78(local_48,local_60);
  uVar4 = FUN_148115c58(param_1,&local_50,param_4,param_2);
  *param_5 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148115c58 FUN_148115c58 body=132 status=ok
// SIG undefined FUN_148115c58(void)

undefined8 FUN_148115c58(longlong param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar3 = FUN_1481131a2(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10)), lVar3 != 0)) {
    if ((-1 < (int)param_3) &&
       ((int)param_3 <
        *(int *)(lVar3 + 8 + (ulonglong)*(byte *)(param_1 + 0x38) * 0x10) / *(int *)(lVar3 + 0x20)))
    {
      lVar3 = *(longlong *)(lVar3 + (ulonglong)*(byte *)(param_1 + 0x38) * 0x10);
      param_4[2] = *(undefined8 *)(lVar3 + 0x10 + (ulonglong)param_3 * 0x18);
      puVar1 = (undefined8 *)(lVar3 + (ulonglong)param_3 * 0x18);
      uVar2 = puVar1[1];
      *param_4 = *puVar1;
      param_4[1] = uVar2;
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
  }
  return 0;
}



// FUNCTION 148115cdc FUN_148115cdc body=180 status=ok
// SIG undefined FUN_148115cdc(void)

undefined8 *
FUN_148115cdc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined4 local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x3ff0000000000000;
  FUN_1481f96f2(local_60);
  local_50 = param_3;
  local_48[0] = FUN_144830b78(local_48,local_60);
  uVar1 = FUN_148115d92(param_1,&local_50,param_4,param_2);
  *param_5 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148115d92 FUN_148115d92 body=149 status=ok
// SIG undefined FUN_148115d92(void)

undefined8 FUN_148115d92(longlong param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar5 = FUN_1481131a2(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10)), lVar5 != 0)) {
    if ((-1 < (int)param_3) &&
       ((int)param_3 <
        *(int *)(lVar5 + 8 + (ulonglong)*(byte *)(param_1 + 0x38) * 0x10) / *(int *)(lVar5 + 0x20)))
    {
      lVar5 = *(longlong *)(lVar5 + (ulonglong)*(byte *)(param_1 + 0x38) * 0x10);
      puVar1 = (undefined8 *)(lVar5 + (ulonglong)param_3 * 0x20);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      puVar1 = (undefined8 *)(lVar5 + 0x10 + (ulonglong)param_3 * 0x20);
      uVar4 = puVar1[1];
      param_4[2] = *puVar1;
      param_4[3] = uVar4;
      *param_4 = uVar2;
      param_4[1] = uVar3;
      return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
    }
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0x3ff0000000000000;
  }
  return 0;
}



// FUNCTION 148115e28 FUN_148115e28 body=173 status=ok
// SIG undefined FUN_148115e28(void)

undefined4 *
FUN_148115e28(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined4 local_48 [2];
  ulonglong local_40;
  
  uVar4 = DAT_14c8463e8;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 4) = DAT_14c8463e0;
  *(undefined8 *)(param_2 + 6) = uVar4;
  uVar3 = DAT_14c8463d8._4_4_;
  uVar2 = (undefined4)DAT_14c8463d8;
  uVar1 = DAT_14c8463d0._4_4_;
  *param_2 = (undefined4)DAT_14c8463d0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  FUN_1481f9734(local_60);
  local_50 = param_3;
  local_48[0] = FUN_144830b78(local_48,local_60);
  uVar5 = FUN_148115ed6(param_1,&local_50,param_4,param_2);
  *param_5 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148115ed6 FUN_148115ed6 body=128 status=ok
// SIG undefined FUN_148115ed6(void)

undefined8 FUN_148115ed6(longlong param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar5 = FUN_1481131a2(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10)), lVar5 != 0)) {
    if ((-1 < (int)param_3) &&
       ((int)param_3 <
        *(int *)(lVar5 + 8 + (ulonglong)*(byte *)(param_1 + 0x38) * 0x10) / *(int *)(lVar5 + 0x20)))
    {
      lVar5 = *(longlong *)(lVar5 + (ulonglong)*(byte *)(param_1 + 0x38) * 0x10);
      puVar1 = (undefined8 *)(lVar5 + (ulonglong)param_3 * 0x20);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      puVar1 = (undefined8 *)(lVar5 + 0x10 + (ulonglong)param_3 * 0x20);
      uVar4 = puVar1[1];
      param_4[2] = *puVar1;
      param_4[3] = uVar4;
      *param_4 = uVar2;
      param_4[1] = uVar3;
      return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
    }
    param_4[2] = 0;
    param_4[3] = 0;
    *param_4 = 0;
    param_4[1] = 0;
  }
  return 0;
}



// FUNCTION 148115f56 FUN_148115f56 body=139 status=ok
// SIG undefined FUN_148115f56(void)

undefined4 *
FUN_148115f56(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0x3f800000;
  param_2[1] = 0x3f800000;
  param_2[2] = 0x3f800000;
  param_2[3] = 0x3f800000;
  local_40 = param_3;
  local_38[0] = FUN_144830b78(local_38,&DAT_14cb42180);
  uVar1 = FUN_148115fe2(param_1,&local_40,param_4,param_2);
  *param_5 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148115fe2 FUN_148115fe2 body=115 status=ok
// SIG undefined FUN_148115fe2(void)

undefined8 FUN_148115fe2(longlong param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar3 = FUN_1481131a2(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10)), lVar3 != 0)) {
    if ((-1 < (int)param_3) &&
       ((int)param_3 <
        *(int *)(lVar3 + 8 + (ulonglong)*(byte *)(param_1 + 0x38) * 0x10) / *(int *)(lVar3 + 0x20)))
    {
      lVar3 = *(longlong *)(lVar3 + (ulonglong)*(byte *)(param_1 + 0x38) * 0x10);
      puVar1 = (undefined8 *)(lVar3 + (ulonglong)param_3 * 0x10);
      uVar2 = puVar1[1];
      *param_4 = *puVar1;
      param_4[1] = uVar2;
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
    *param_4 = 0;
    param_4[1] = 0;
  }
  return 0;
}



// FUNCTION 148116056 FUN_148116056 body=132 status=ok
// SIG undefined FUN_148116056(void)

undefined4
FUN_148116056(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = 0;
  local_40 = param_2;
  local_38 = FUN_144830b78(&local_38,&DAT_14cb420d0);
  uVar1 = FUN_1481160dc(param_1,&local_40,param_3,&local_34);
  *param_4 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_34;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481160dc FUN_1481160dc body=112 status=ok
// SIG undefined FUN_1481160dc(void)

ulonglong FUN_1481160dc(longlong param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar3 = FUN_1481131a2(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10));
    uVar4 = 0;
    if (lVar3 != 0) {
      lVar2 = (longlong)*(int *)(lVar3 + 8 + (ulonglong)*(byte *)(param_1 + 0x38) * 0x10) /
              (longlong)*(int *)(lVar3 + 0x20);
      bVar1 = (int)param_3 < (int)lVar2;
      if (bVar1 && -1 < (int)param_3) {
        uVar4 = *(undefined4 *)
                 (*(longlong *)(lVar3 + (ulonglong)*(byte *)(param_1 + 0x38) * 0x10) +
                 (ulonglong)param_3 * 4);
      }
      *param_4 = uVar4;
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar1 && -1 < (int)param_3) & 0xffffffff;
    }
  }
  return 0;
}



// FUNCTION 14811614c FUN_14811614c body=132 status=ok
// SIG undefined FUN_14811614c(void)

undefined1
FUN_14811614c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = 0;
  local_40 = param_2;
  local_38 = FUN_144830b78(&local_38,&DAT_14cb420d0);
  uVar1 = FUN_1481160dc(param_1,&local_40,param_3,&local_34);
  *param_4 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (undefined1)local_34;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481161d2 FUN_1481161d2 body=136 status=ok
// SIG undefined FUN_1481161d2(void)

bool FUN_1481161d2(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = 0;
  local_40 = param_2;
  local_38 = FUN_144830b78(&local_38,&DAT_14cb420e0);
  uVar1 = FUN_14811625c(param_1,&local_40,param_3,&local_34);
  *param_4 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_34 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811625c FUN_14811625c body=112 status=ok
// SIG undefined FUN_14811625c(void)

ulonglong FUN_14811625c(longlong param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar3 = FUN_1481131a2(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10));
    uVar4 = 0;
    if (lVar3 != 0) {
      lVar2 = (longlong)*(int *)(lVar3 + 8 + (ulonglong)*(byte *)(param_1 + 0x38) * 0x10) /
              (longlong)*(int *)(lVar3 + 0x20);
      bVar1 = (int)param_3 < (int)lVar2;
      if (bVar1 && -1 < (int)param_3) {
        uVar4 = *(undefined4 *)
                 (*(longlong *)(lVar3 + (ulonglong)*(byte *)(param_1 + 0x38) * 0x10) +
                 (ulonglong)param_3 * 4);
      }
      *param_4 = uVar4;
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar1 && -1 < (int)param_3) & 0xffffffff;
    }
  }
  return 0;
}



// FUNCTION 1481162cc FUN_1481162cc body=150 status=ok
// SIG undefined FUN_1481162cc(void)

undefined4 *
FUN_1481162cc(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  local_40 = param_3;
  local_38[0] = FUN_144830b78(local_38,&DAT_14cb42130);
  uVar4 = FUN_148115c58(param_1,&local_40,param_4,param_2);
  *param_5 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148116364 FUN_148116364 body=136 status=ok
// SIG undefined FUN_148116364(void)

undefined8 *
FUN_148116364(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0xffffffffffffffff;
  local_40 = param_3;
  local_38[0] = FUN_144830b78(local_38,&DAT_14cb421a0);
  uVar1 = FUN_1481163ee(param_1,&local_40,param_4,param_2);
  *param_5 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481163ee FUN_1481163ee body=116 status=ok
// SIG undefined FUN_1481163ee(void)

ulonglong FUN_1481163ee(longlong param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar3 = FUN_1481131a2(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10)), lVar3 != 0)) {
    lVar2 = (longlong)*(int *)(lVar3 + 8 + (ulonglong)*(byte *)(param_1 + 0x38) * 0x10) /
            (longlong)*(int *)(lVar3 + 0x20);
    bVar1 = (int)param_3 < (int)lVar2;
    uVar4 = 0xffffffffffffffff;
    if (bVar1 && -1 < (int)param_3) {
      uVar4 = *(undefined8 *)
               (*(longlong *)(lVar3 + (ulonglong)*(byte *)(param_1 + 0x38) * 0x10) +
               (ulonglong)param_3 * 8);
    }
    *param_4 = uVar4;
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar1 && -1 < (int)param_3) & 0xffffffff;
  }
  return 0;
}



// FUNCTION 148116462 FUN_148116462 body=220 status=ok
// SIG undefined FUN_148116462(void)

undefined4 *
FUN_148116462(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0x3f800000;
  param_2[3] = 0;
  lVar2 = FUN_14183ad48();
  local_60 = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  local_58 = 2;
  local_56 = 0;
  local_54 = 0xffffffff;
  FUN_140c6c26c(lVar2,0);
  local_50 = param_3;
  local_48[0] = FUN_144830b78(local_48,&local_60);
  uVar1 = FUN_148116540(param_1,&local_50,param_4,param_2);
  *param_5 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148116540 FUN_148116540 body=119 status=ok
// SIG undefined FUN_148116540(void)

undefined8 FUN_148116540(longlong param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar3 = FUN_1481131a2(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10)), lVar3 != 0)) {
    if ((-1 < (int)param_3) &&
       ((int)param_3 <
        *(int *)(lVar3 + 8 + (ulonglong)*(byte *)(param_1 + 0x38) * 0x10) / *(int *)(lVar3 + 0x20)))
    {
      lVar3 = *(longlong *)(lVar3 + (ulonglong)*(byte *)(param_1 + 0x38) * 0x10);
      puVar1 = (undefined8 *)(lVar3 + (ulonglong)param_3 * 0x10);
      uVar2 = puVar1[1];
      *param_4 = *puVar1;
      param_4[1] = uVar2;
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    }
    *param_4 = 0;
    param_4[1] = 0x3f800000;
  }
  return 0;
}



// FUNCTION 1481165b8 FUN_1481165b8 body=16 status=ok
// SIG undefined FUN_1481165b8(void)

undefined4 FUN_1481165b8(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x20);
  }
  return 0;
}



// FUNCTION 1481165c8 FUN_1481165c8 body=178 status=ok
// SIG undefined FUN_1481165c8(void)

void FUN_1481165c8(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined4 local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1481f9c60(local_60);
  local_50 = param_2;
  local_48[0] = FUN_144830b78(local_48,local_60);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar1 = (longlong *)FUN_1481131a2(*(longlong *)(param_1 + 0x28),&local_50);
    if ((-1 < (int)param_3 && plVar1 != (longlong *)0x0) &&
       ((int)param_3 < (int)plVar1[1] / (int)plVar1[4])) {
      *(undefined8 *)(*plVar1 + (ulonglong)param_3 * 8) = param_4;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811667c FUN_14811667c body=180 status=ok
// SIG undefined FUN_14811667c(void)

void FUN_14811667c(longlong param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1481f96b0(local_58);
  local_48 = param_2;
  local_40[0] = FUN_144830b78(local_40,local_58);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar5 = (longlong *)FUN_1481131a2(*(longlong *)(param_1 + 0x28),&local_48);
    if ((-1 < (int)param_3 && plVar5 != (longlong *)0x0) &&
       ((int)param_3 < (int)plVar5[1] / (int)plVar5[4])) {
      uVar2 = param_4[1];
      uVar3 = param_4[2];
      uVar4 = param_4[3];
      puVar1 = (undefined4 *)(*plVar5 + (ulonglong)param_3 * 0x10);
      *puVar1 = *param_4;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148116732 FUN_148116732 body=189 status=ok
// SIG undefined FUN_148116732(void)

void FUN_148116732(longlong param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1408c4b2a(local_58);
  local_48 = param_2;
  local_40[0] = FUN_144830b78(local_40,local_58);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar6 = (longlong *)FUN_1481131a2(*(longlong *)(param_1 + 0x28),&local_48);
    if ((-1 < (int)param_3 && plVar6 != (longlong *)0x0) &&
       ((int)param_3 < (int)plVar6[1] / (int)plVar6[4])) {
      lVar2 = *plVar6;
      *(undefined8 *)(lVar2 + 0x10 + (ulonglong)param_3 * 0x18) = *(undefined8 *)(param_4 + 4);
      uVar3 = param_4[1];
      uVar4 = param_4[2];
      uVar5 = param_4[3];
      puVar1 = (undefined4 *)(lVar2 + (ulonglong)param_3 * 0x18);
      *puVar1 = *param_4;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481167f0 FUN_1481167f0 body=189 status=ok
// SIG undefined FUN_1481167f0(void)

void FUN_1481167f0(longlong param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1481f96f2(local_58);
  local_48 = param_2;
  local_40[0] = FUN_144830b78(local_40,local_58);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar9 = (longlong *)FUN_1481131a2(*(longlong *)(param_1 + 0x28),&local_48);
    if ((-1 < (int)param_3 && plVar9 != (longlong *)0x0) &&
       ((int)param_3 < (int)plVar9[1] / (int)plVar9[4])) {
      lVar3 = *plVar9;
      uVar4 = *param_4;
      uVar5 = param_4[1];
      uVar6 = param_4[2];
      uVar7 = param_4[3];
      uVar8 = *(undefined8 *)(param_4 + 6);
      puVar2 = (undefined8 *)(lVar3 + 0x10 + (ulonglong)param_3 * 0x20);
      *puVar2 = *(undefined8 *)(param_4 + 4);
      puVar2[1] = uVar8;
      puVar1 = (undefined4 *)(lVar3 + (ulonglong)param_3 * 0x20);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481168ae FUN_1481168ae body=189 status=ok
// SIG undefined FUN_1481168ae(void)

void FUN_1481168ae(longlong param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1481f9734(local_58);
  local_48 = param_2;
  local_40[0] = FUN_144830b78(local_40,local_58);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar9 = (longlong *)FUN_1481131a2(*(longlong *)(param_1 + 0x28),&local_48);
    if ((-1 < (int)param_3 && plVar9 != (longlong *)0x0) &&
       ((int)param_3 < (int)plVar9[1] / (int)plVar9[4])) {
      lVar3 = *plVar9;
      uVar4 = *param_4;
      uVar5 = param_4[1];
      uVar6 = param_4[2];
      uVar7 = param_4[3];
      uVar8 = *(undefined8 *)(param_4 + 6);
      puVar2 = (undefined8 *)(lVar3 + 0x10 + (ulonglong)param_3 * 0x20);
      *puVar2 = *(undefined8 *)(param_4 + 4);
      puVar2[1] = uVar8;
      puVar1 = (undefined4 *)(lVar3 + (ulonglong)param_3 * 0x20);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811696c FUN_14811696c body=158 status=ok
// SIG undefined FUN_14811696c(void)

void FUN_14811696c(longlong param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  local_30[0] = FUN_144830b78(local_30,&DAT_14cb42180);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar5 = (longlong *)FUN_1481131a2(*(longlong *)(param_1 + 0x28),&local_38);
    if ((-1 < (int)param_3 && plVar5 != (longlong *)0x0) &&
       ((int)param_3 < (int)plVar5[1] / (int)plVar5[4])) {
      uVar2 = param_4[1];
      uVar3 = param_4[2];
      uVar4 = param_4[3];
      puVar1 = (undefined4 *)(*plVar5 + (ulonglong)param_3 * 0x10);
      *puVar1 = *param_4;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148116a0c FUN_148116a0c body=150 status=ok
// SIG undefined FUN_148116a0c(void)

void FUN_148116a0c(longlong param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  local_30[0] = FUN_144830b78(local_30,&DAT_14cb420d0);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar1 = (longlong *)FUN_1481131a2(*(longlong *)(param_1 + 0x28),&local_38);
    if ((-1 < (int)param_3 && plVar1 != (longlong *)0x0) &&
       ((int)param_3 < (int)plVar1[1] / (int)plVar1[4])) {
      *(undefined4 *)(*plVar1 + (ulonglong)param_3 * 4) = param_4;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148116aa4 FUN_148116aa4 body=9 status=ok
// SIG undefined FUN_148116aa4(void)

void FUN_148116aa4(void)

{
  FUN_148116a0c();
  return;
}



// FUNCTION 148116aae FUN_148116aae body=155 status=ok
// SIG undefined FUN_148116aae(void)

void FUN_148116aae(longlong param_1,undefined8 param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  local_30[0] = FUN_144830b78(local_30,&DAT_14cb420e0);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar1 = (longlong *)FUN_1481131a2(*(longlong *)(param_1 + 0x28),&local_38);
    if ((-1 < (int)param_3 && plVar1 != (longlong *)0x0) &&
       ((int)param_3 < (int)plVar1[1] / (int)plVar1[4])) {
      *(uint *)(*plVar1 + (ulonglong)param_3 * 4) = -(param_4 & 0xff);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148116b4a FUN_148116b4a body=240 status=ok
// SIG undefined FUN_148116b4a(void)

void FUN_148116b4a(longlong param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = FUN_14183ad48();
  local_58 = lVar5;
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  local_50 = 2;
  local_4e = 0;
  local_4c = 0xffffffff;
  FUN_140c6c26c(lVar5,0);
  local_48 = param_2;
  local_40[0] = FUN_144830b78(local_40,&local_58);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar6 = (longlong *)FUN_1481131a2(*(longlong *)(param_1 + 0x28),&local_48);
    if ((-1 < (int)param_3 && plVar6 != (longlong *)0x0) &&
       ((int)param_3 < (int)plVar6[1] / (int)plVar6[4])) {
      uVar2 = param_4[1];
      uVar3 = param_4[2];
      uVar4 = param_4[3];
      puVar1 = (undefined4 *)(*plVar6 + (ulonglong)param_3 * 0x10);
      *puVar1 = *param_4;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148116c3c FUN_148116c3c body=167 status=ok
// SIG undefined FUN_148116c3c(void)

void FUN_148116c3c(longlong param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  local_30[0] = FUN_144830b78(local_30,&DAT_14cb42130);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar6 = (longlong *)FUN_1481131a2(*(longlong *)(param_1 + 0x28),&local_38);
    if ((-1 < (int)param_3 && plVar6 != (longlong *)0x0) &&
       ((int)param_3 < (int)plVar6[1] / (int)plVar6[4])) {
      lVar2 = *plVar6;
      *(undefined8 *)(lVar2 + 0x10 + (ulonglong)param_3 * 0x18) = *(undefined8 *)(param_4 + 4);
      uVar3 = param_4[1];
      uVar4 = param_4[2];
      uVar5 = param_4[3];
      puVar1 = (undefined4 *)(lVar2 + (ulonglong)param_3 * 0x18);
      *puVar1 = *param_4;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148116ce4 FUN_148116ce4 body=151 status=ok
// SIG undefined FUN_148116ce4(void)

void FUN_148116ce4(longlong param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  local_30[0] = FUN_144830b78(local_30,&DAT_14cb421a0);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    plVar1 = (longlong *)FUN_1481131a2(*(longlong *)(param_1 + 0x28),&local_38);
    if ((-1 < (int)param_3 && plVar1 != (longlong *)0x0) &&
       ((int)param_3 < (int)plVar1[1] / (int)plVar1[4])) {
      *(undefined8 *)(*plVar1 + (ulonglong)param_3 * 8) = param_4;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148116d86 FUN_148116d86 body=105 status=ok
// SIG undefined FUN_148116d86(void)

void FUN_148116d86(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar3 = *(int *)(param_1 + 0x50);
  if (0 < iVar3) {
    plVar1 = (longlong *)(param_1 + 0x48);
    uVar5 = 0;
    do {
      iVar4 = (int)uVar5;
      if (((*(longlong *)(*plVar1 + uVar5 * 0x10) == 0) ||
          (lVar2 = *(longlong *)(*plVar1 + uVar5 * 0x10 + 8), lVar2 == 0)) ||
         (*(int *)(lVar2 + 8) < 1)) {
        FUN_148124c08(plVar1,uVar5);
        FUN_148124c7a(plVar1);
        iVar4 = iVar4 + -1;
        iVar3 = *(int *)(param_1 + 0x50);
      }
      uVar5 = (ulonglong)(iVar4 + 1U);
    } while ((int)(iVar4 + 1U) < iVar3);
  }
  return;
}



// FUNCTION 148116df7 FUN_148116df7 body=175 status=ok
// SIG undefined FUN_148116df7(void)

undefined8 FUN_148116df7(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1458cc04c();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148116ea7 FUN_148116ea7 body=175 status=ok
// SIG undefined FUN_148116ea7(void)

undefined8 FUN_148116ea7(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1458cbf68();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148116f58 FUN_148116f58 body=284 status=ok
// SIG undefined FUN_148116f58(void)

longlong * FUN_148116f58(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar5 = (longlong *)FUN_14001cc68(0xe0,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14adbc1f0;
  plVar6 = plVar5 + 2;
  FUN_14811486e(plVar6);
  local_40 = plVar6;
  local_38 = plVar5;
  FUN_148124d3e(&local_40,plVar6);
  plVar4 = local_38;
  *param_2 = (longlong)plVar6;
  param_2[1] = (longlong)plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_38 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    lVar7 = param_2[1];
    plVar6 = (longlong *)*param_2;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
      UNLOCK();
      goto LAB_148116fd1;
    }
  }
  lVar7 = 0;
LAB_148116fd1:
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_148124de2(param_1 + 0x48,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  *(longlong **)(lVar3 + (longlong)iVar2 * 0x10) = plVar6;
  *(longlong *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = lVar7;
  FUN_1481148f4(*param_2,param_1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148117076 FUN_148117076 body=169 status=ok
// SIG undefined FUN_148117076(void)

void FUN_148117076(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x48);
    plVar8 = plVar9 + (longlong)*(int *)(param_1 + 0x50) * 2;
    do {
      plVar3 = (longlong *)plVar9[1];
      if (plVar3 != (longlong *)0x0) {
        iVar7 = (int)plVar3[1];
        do {
          if (iVar7 == 0) goto LAB_14811710c;
          LOCK();
          iVar6 = (int)plVar3[1];
          bVar10 = iVar7 == iVar6;
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar10);
        lVar4 = *plVar9;
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x48) = 0;
          plVar5 = *(longlong **)(lVar4 + 0x50);
          if (plVar5 != (longlong *)0x0) {
            *(undefined8 *)(lVar4 + 0x50) = 0;
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
        }
        LOCK();
        plVar5 = plVar3 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
LAB_14811710c:
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar8);
  }
  return;
}



// FUNCTION 148117120 FUN_148117120 body=264 status=ok
// SIG undefined FUN_148117120(void)

longlong * FUN_148117120(undefined8 *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_144b39016(*param_1);
  plVar5 = (longlong *)0x0;
  if ((lVar2 != 0) && (DAT_14c76292d != '\0')) {
    lVar2 = param_2[8];
    if ((lVar2 == 0) ||
       (((iVar1 = (int)param_2[6], iVar1 < 1 || (*(int *)(lVar2 + 0x18) != iVar1)) ||
        (*(int *)(lVar2 + 0x60) != iVar1)))) {
      plVar5 = (longlong *)0x0;
    }
    else {
      local_38 = 0;
      FUN_14485c47a(&local_38,param_2);
      plVar3 = (longlong *)
               FUN_1481251d4(param_1 + 1,(uint)((ulonglong)local_38 >> 0x20) ^ (uint)local_38,
                             &local_38);
      plVar5 = (longlong *)*plVar3;
      if ((param_3 != '\0') || (plVar5 == (longlong *)0x0)) {
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x2a8))(plVar5);
        }
        uVar4 = FUN_144b39016(*param_1);
        plVar5 = (longlong *)(**(code **)(*param_2 + 0x2a0))(param_2,uVar4);
        if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(plVar5);
        }
        *plVar3 = (longlong)plVar5;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811722a FUN_14811722a body=45 status=ok
// SIG undefined FUN_14811722a(void)

longlong * FUN_14811722a(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_148117257(param_2);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 148117257 FUN_148117257 body=175 status=ok
// SIG undefined FUN_148117257(void)

undefined8 FUN_148117257(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145b69d6e();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148117308 FUN_148117308 body=200 status=ok
// SIG undefined FUN_148117308(void)

void FUN_148117308(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14485c47a(param_1 + 0x28);
  FUN_148116f58(param_1,&local_30);
  plVar1 = local_28;
  *(undefined8 *)(param_1 + 0x60) = local_30;
  local_30 = 0;
  plVar3 = *(longlong **)(param_1 + 0x68);
  if (local_28 != plVar3) {
    local_28 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x68) = plVar1;
    if (plVar3 == (longlong *)0x0) goto LAB_1481173c3;
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
LAB_1481173c3:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481173e2 FUN_1481173e2 body=30 status=ok
// SIG undefined FUN_1481173e2(void)

void FUN_1481173e2(longlong param_1)

{
  FUN_148116d86();
  FUN_148114c46(*(undefined8 *)(param_1 + 0x60),param_1);
  return;
}



// FUNCTION 14811740c FUN_14811740c body=234 status=ok
// SIG undefined FUN_14811740c(void)

longlong * FUN_14811740c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0x60);
  if (lVar4 != 0) goto LAB_148117433;
  FUN_148116f58(param_1,&local_38);
  plVar1 = local_30;
  *(undefined8 *)(param_1 + 0x60) = local_38;
  local_38 = 0;
  plVar3 = *(longlong **)(param_1 + 0x68);
  if (local_30 == plVar3) {
LAB_1481174cc:
    plVar3 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  else {
    local_30 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x68) = plVar1;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      goto LAB_1481174cc;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x60);
LAB_148117433:
  *param_2 = lVar4;
  lVar4 = *(longlong *)(param_1 + 0x68);
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1481174f8 FUN_1481174f8 body=26 status=ok
// SIG undefined FUN_1481174f8(void)

void FUN_1481174f8(undefined8 param_1)

{
  FUN_148115102();
  FUN_148117512(param_1);
  return;
}



// FUNCTION 148117512 FUN_148117512 body=900 status=ok
// SIG undefined FUN_148117512(void)

void FUN_148117512(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  void *_Src;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c76292d != '\x01') goto LAB_148117539;
  local_58 = 0;
  uStack_50 = 0;
  if ((longlong)*(int *)(param_1 + 0xb0) == 0) {
LAB_148117577:
    FUN_1481178f8(param_1);
  }
  else {
    lVar14 = *(longlong *)(param_1 + 0xa8);
    lVar15 = (longlong)*(int *)(param_1 + 0xb0) * 0x28;
    do {
      lVar12 = FUN_14479d2ce(lVar14);
      if ((lVar12 == 0) && (*(longlong *)(lVar14 + 8) != 0)) {
        lVar12 = FUN_140007850();
        cVar10 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar12 == 0) || (cVar10 == '\0')) {
          FUN_14485c47a(lVar14,lVar12);
          if (lVar12 != 0) goto LAB_148117642;
        }
        else {
          uVar11 = *(uint *)(lVar12 + 0xc);
          if ((int)uVar11 < DAT_14c9647dc) {
            lVar13 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
          }
          else {
            lVar13 = 0;
          }
          if ((*(uint *)(lVar13 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(lVar14,lVar12);
          }
LAB_148117642:
          if ((*(uint *)(lVar12 + 8) >> 0x1e & 1) == 0) goto LAB_1481175bf;
        }
        uVar9 = uStack_50;
        if (*(longlong *)(lVar14 + 8) != 0) {
          lVar12 = (longlong)(int)uStack_50;
          uVar11 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar11);
          if (uStack_50._4_4_ < uVar11) {
            FUN_1406f071e(&local_58,uVar9 & 0xffffffff);
          }
          lVar12 = lVar12 * 0x20;
          uVar6 = *(undefined4 *)(lVar14 + 0xc);
          uVar7 = *(undefined4 *)(lVar14 + 0x10);
          uVar8 = *(undefined4 *)(lVar14 + 0x14);
          puVar3 = (undefined4 *)(local_58 + lVar12);
          *puVar3 = *(undefined4 *)(lVar14 + 8);
          puVar3[1] = uVar6;
          puVar3[2] = uVar7;
          puVar3[3] = uVar8;
          *(undefined8 *)(local_58 + 0x10 + lVar12) = 0;
          iVar4 = *(int *)(lVar14 + 0x20);
          _Src = *(void **)(lVar14 + 0x18);
          *(int *)(local_58 + 0x18 + lVar12) = iVar4;
          if ((longlong)iVar4 == 0) {
            *(undefined4 *)(local_58 + lVar12 + 0x1c) = 0;
          }
          else {
            puVar16 = (undefined8 *)(lVar12 + local_58 + 0x10);
            FUN_1446dd670(puVar16,iVar4,0);
            memcpy((void *)*puVar16,_Src,(longlong)iVar4 * 2);
          }
        }
      }
LAB_1481175bf:
      lVar14 = lVar14 + 0x28;
      lVar15 = lVar15 + -0x28;
    } while (lVar15 != 0);
    lVar14 = (longlong)(int)uStack_50;
    if (lVar14 < 1) goto LAB_148117577;
    if (DAT_14c762854 == 0) {
LAB_1481176f6:
      lVar15 = lVar14 * 0x20 + local_58;
      lVar14 = local_58;
      do {
        FUN_140081d40(lVar14,0);
        lVar14 = lVar14 + 0x20;
      } while (lVar14 != lVar15);
      goto LAB_148117577;
    }
    cVar10 = FUN_1403afb62();
    if (cVar10 == '\0') {
      lVar14 = (longlong)(int)uStack_50;
      if (lVar14 == 0) goto LAB_148117577;
      goto LAB_1481176f6;
    }
    lVar15 = FUN_14050fd64();
    local_78 = (undefined8 *)0x0;
    local_70 = 0;
    FUN_1446efa72(&local_78,0,3,0x10);
    puVar16 = local_78;
    local_70 = 3;
    *local_78 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar14 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar14 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar14;
    local_78[2] = lVar12;
    *local_78 = &PTR_FUN_14adbc210;
    local_78[3] = 0;
    FUN_14485c47a(local_78 + 3,param_1);
    puVar16[4] = FUN_1481178f8;
    FUN_148117a0a(lVar15 + 0x1e8,&local_68,&local_58,&local_78);
    plVar1 = local_60;
    if ((undefined8 *)(param_1 + 0xd0) != &local_68) {
      *(undefined8 *)(param_1 + 0xd0) = local_68;
      local_68 = 0;
      plVar5 = *(longlong **)(param_1 + 0xd8);
      if (local_60 != plVar5) {
        local_60 = (longlong *)0x0;
        *(longlong **)(param_1 + 0xd8) = plVar1;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
    }
    plVar1 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_60 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    FUN_1449db362(&local_78);
  }
  FUN_140861e20(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_148117539:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148117898 FUN_148117898 body=95 status=ok
// SIG undefined FUN_148117898(void)

undefined8 * FUN_148117898(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  if ((((DAT_14c762858 != 0) && (lVar1 = *(longlong *)(param_1 + 0xd0), lVar1 != 0)) &&
      (*(char *)(lVar1 + 0x12) == '\0')) && (*(char *)(lVar1 + 0x11) == '\0')) {
    FUN_140bd4428(lVar1,0,1);
    FUN_1481178f8(param_1);
  }
  *param_2 = *(undefined8 *)(param_1 + 0xc0);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 200);
  return param_2;
}



// FUNCTION 1481178f8 FUN_1481178f8 body=274 status=ok
// SIG undefined FUN_1481178f8(void)

void FUN_1481178f8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar3 = (longlong *)(param_1 + 0xc0);
  FUN_148117b58(plVar3,*(undefined4 *)(param_1 + 0xb0));
  if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
    lVar6 = *(longlong *)(param_1 + 0xa8);
    lVar7 = (longlong)*(int *)(param_1 + 0xb0) * 0x28;
    do {
      lVar5 = FUN_1412fe774(lVar6);
      if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar5);
      }
      iVar4 = *(int *)(param_1 + 200);
      *(uint *)(param_1 + 200) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0xcc) < iVar4 + 1U) {
        FUN_14080de04(plVar3,iVar4);
      }
      *(longlong *)(*plVar3 + (longlong)iVar4 * 8) = lVar5;
      if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar5);
      }
      lVar6 = lVar6 + 0x28;
      lVar7 = lVar7 + -0x28;
    } while (lVar7 != 0);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  plVar3 = *(longlong **)(param_1 + 0xd8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xd8) = 0;
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001481179f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148117a0a FUN_148117a0a body=333 status=ok
// SIG undefined FUN_148117a0a(void)

undefined8
FUN_148117a0a(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80;
  undefined1 local_78;
  longlong *local_70;
  longlong local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  local_40 = 0;
  local_58 = *param_4;
  *param_4 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,(int)param_4[1]);
  *(undefined4 *)(param_4 + 1) = 0;
  FUN_144a450dc(&local_48,&local_58);
  FUN_1449db362(&local_58);
  cVar3 = FUN_140d01986();
  if (cVar3 == '\0') {
    FUN_140056680(&local_58,L"NiagaraDataChannelIsland_HandlerSystems");
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
  }
  local_68 = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  local_60 = iVar1;
  if (iVar1 == 0) {
    local_5c = 0;
  }
  else {
    FUN_140a1e386(&local_68,iVar1,0);
    FUN_140a1e307(local_68,uVar2,iVar1);
  }
  local_78 = 0;
  local_80 = 0;
  local_88 = 100;
  local_70 = &local_58;
  FUN_140421d62(param_1,param_2,&local_68,&local_48);
  FUN_140861e20(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148117b58 FUN_148117b58 body=42 status=ok
// SIG undefined FUN_148117b58(void)

void FUN_148117b58(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_14080a748();
    return;
  }
  return;
}



// FUNCTION 148117b84 FUN_148117b84 body=45 status=ok
// SIG undefined FUN_148117b84(void)

longlong * FUN_148117b84(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_148117bb1(param_2);
  (**(code **)(*plVar1 + 0x2a0))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 148117bb1 FUN_148117bb1 body=175 status=ok
// SIG undefined FUN_148117bb1(void)

undefined8 FUN_148117bb1(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1459ec8ba();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148117c62 FUN_148117c62 body=206 status=ok
// SIG undefined FUN_148117c62(void)

void FUN_148117c62(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  FUN_14485c47a(param_1 + 0x28);
  if (param_2 != 0) {
    FUN_148117512(param_2);
    uVar2 = *(uint *)(param_2 + 0xb8);
    uVar4 = (ulonglong)uVar2;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar4);
    }
    if (*(int *)(param_1 + 0x6c) < (int)uVar2) {
      FUN_14481578e(param_1 + 0x60,uVar2);
    }
    plVar1 = (longlong *)(param_1 + 0x70);
    if (*(int *)(param_1 + 0x7c) < (int)uVar2) {
      FUN_14481578e(plVar1,uVar2);
    }
    FUN_148117d32(param_1 + 0x80,uVar2);
    if (uVar4 != 0) {
      lVar6 = 0;
      uVar5 = 0;
      do {
        FUN_148117d9e(*(longlong *)(param_1 + 0x80) + lVar6,param_1);
        iVar3 = *(int *)(param_1 + 0x78);
        *(uint *)(param_1 + 0x78) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x7c) < iVar3 + 1U) {
          FUN_1446f48e2(plVar1,iVar3);
        }
        *(int *)(*plVar1 + (longlong)iVar3 * 4) = (int)uVar5;
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x70;
      } while (uVar4 != uVar5);
    }
  }
  return;
}



// FUNCTION 148117d32 FUN_148117d32 body=107 status=ok
// SIG undefined FUN_148117d32(void)

void FUN_148117d32(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148125768(param_1,iVar1);
    }
    FUN_148125755((longlong)iVar1 * 0x70 + *param_1,param_2 - iVar1);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_1481257f8(param_1,param_2,iVar1 - param_2);
  FUN_148125852(param_1);
  return;
}



// FUNCTION 148117d9e FUN_148117d9e body=262 status=ok
// SIG undefined FUN_148117d9e(void)

void FUN_148117d9e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *param_1 = param_2;
  FUN_148116f58(param_2,&local_30);
  plVar1 = local_28;
  param_1[10] = local_30;
  local_30 = 0;
  plVar3 = (longlong *)param_1[0xb];
  if (local_28 != plVar3) {
    local_28 = (longlong *)0x0;
    param_1[0xb] = (longlong)plVar1;
    if (plVar3 == (longlong *)0x0) goto LAB_148117e54;
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_148117e54:
  lVar9 = FUN_14479d2ce(*param_1 + 0x28);
  lVar8 = DAT_14c8464e8;
  param_1[1] = DAT_14c8464e0;
  param_1[2] = lVar8;
  param_1[3] = DAT_14c8464f0;
  uVar4 = *(undefined4 *)(lVar9 + 0x60);
  uVar5 = *(undefined4 *)(lVar9 + 100);
  uVar6 = *(undefined4 *)(lVar9 + 0x68);
  uVar7 = *(undefined4 *)(lVar9 + 0x6c);
  param_1[6] = *(longlong *)(lVar9 + 0x70);
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  *(undefined4 *)(param_1 + 5) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar7;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148117ea6 FUN_148117ea6 body=70 status=ok
// SIG undefined FUN_148117ea6(void)

void FUN_148117ea6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_148116d86();
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar2 = 0;
    do {
      lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 0x60) + lVar2 * 4) * 0x70;
      FUN_148114c46(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x50 + lVar1),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x80) + lVar1));
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < *(int *)(param_1 + 0x68));
  }
  return;
}



// FUNCTION 148117eec FUN_148117eec body=391 status=ok
// SIG undefined FUN_148117eec(void)

void FUN_148117eec(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  longlong *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar9 = FUN_148118074();
  local_58 = (longlong *)(param_1 + 0x60);
  local_50 = 0;
  do {
    if ((int)local_58[1] <= (int)local_50) break;
    lVar6 = *(longlong *)(param_1 + 0x80);
    lVar10 = (longlong)*(int *)(*local_58 + (ulonglong)local_50 * 4) * 0x70;
    puVar2 = (undefined8 *)(lVar6 + lVar10);
    FUN_143a060a6(*(undefined8 *)(lVar6 + 0x50 + lVar10),*(undefined8 *)(lVar6 + lVar10));
    if ((~*(uint *)(lVar9 + 0xbc) & 3) == 0) {
      (**(code **)(*(longlong *)*puVar2 + 0x180))();
    }
    plVar7 = (longlong *)puVar2[0xb];
    if ((plVar7 != (longlong *)0x0) && ((int)plVar7[1] == 1)) {
      lVar6 = puVar2[10];
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      bVar8 = true;
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x20) < 1) &&
         ((*(longlong *)(lVar6 + 0x20) == 0 ||
          (*(int *)(*(longlong *)(*(longlong *)(lVar6 + 0x20) + 0x78) + 0x120) == 0)))) {
        bVar8 = 0 < *(int *)(lVar6 + 0x40);
      }
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar4 = (int *)((longlong)plVar7 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      if (!bVar8) {
        lVar10 = (longlong)(int)local_50;
        lVar6 = *local_58;
        iVar5 = *(int *)(param_1 + 0x78);
        *(uint *)(param_1 + 0x78) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x7c) < iVar5 + 1U) {
          FUN_1446f48e2((longlong *)(param_1 + 0x70),iVar5);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar5 * 4) =
             *(undefined4 *)(lVar6 + lVar10 * 4);
        FUN_1481180b6(puVar2);
        FUN_148118150(&local_58);
      }
    }
    uVar1 = local_50 + 1;
    bVar8 = -2 < (int)local_50;
    local_50 = uVar1;
  } while (bVar8);
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148118074 FUN_148118074 body=65 status=ok
// SIG undefined FUN_148118074(void)

longlong FUN_148118074(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar2 = FUN_145b69e58();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1481180b6 FUN_1481180b6 body=154 status=ok
// SIG undefined FUN_1481180b6(void)

void FUN_1481180b6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  *(undefined8 *)(param_1 + 0x50) = 0;
  plVar4 = *(longlong **)(param_1 + 0x58);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x40);
    lVar6 = 0;
    do {
      (**(code **)(**(longlong **)(lVar5 + lVar6) + 0xa48))();
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar3 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (-1 < *(int *)(param_1 + 0x4c)) {
    return;
  }
  FUN_14574ac34(param_1 + 0x40,0);
  return;
}



// FUNCTION 148118150 FUN_148118150 body=93 status=ok
// SIG undefined FUN_148118150(void)

void FUN_148118150(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  plVar1 = (longlong *)*param_1;
  iVar2 = (int)plVar1[1];
  iVar3 = ~*(uint *)(param_1 + 1) + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*plVar1 + (longlong)(int)*(uint *)(param_1 + 1) * 4),
            (void *)(*plVar1 + (longlong)(iVar2 - iVar4) * 4),(longlong)iVar4 << 2);
    iVar2 = (int)plVar1[1];
  }
  *(int *)(plVar1 + 1) = iVar2 + -1;
  FUN_14479f406(plVar1);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  return;
}



// FUNCTION 1481181ae FUN_1481181ae body=65 status=ok
// SIG undefined FUN_1481181ae(void)

void FUN_1481181ae(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x40) = param_3;
  FUN_148118074();
  if (0 < *(int *)(param_1 + 0x68)) {
    lVar1 = 0;
    do {
      FUN_1481181f0((longlong)*(int *)(*(longlong *)(param_1 + 0x60) + lVar1 * 4) * 0x70 +
                    *(longlong *)(param_1 + 0x80));
      lVar1 = lVar1 + 1;
    } while ((int)lVar1 < *(int *)(param_1 + 0x68));
  }
  return;
}



// FUNCTION 1481181f0 FUN_1481181f0 body=133 status=ok
// SIG undefined FUN_1481181f0(void)

void FUN_1481181f0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  iVar3 = FUN_143a068ac(param_1[10],*param_1);
  if (param_1[0xb] == 0) {
    bVar5 = true;
  }
  else {
    bVar5 = *(int *)(param_1[0xb] + 8) != 1;
  }
  if (((0 < iVar3) && (bVar5)) && (iVar3 = *(int *)(param_1 + 9), (longlong)iVar3 != 0)) {
    lVar1 = param_1[8];
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar4);
      if ((plVar2[0xec] == 0) || (*(int *)(*(longlong *)(plVar2[0xec] + 0x30) + 0x86c) - 3U < 2)) {
        (**(code **)(*plVar2 + 0x2a8))(plVar2,0);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar3 * 8 != lVar4);
  }
  return;
}



// FUNCTION 148118276 FUN_148118276 body=65 status=ok
// SIG undefined FUN_148118276(void)

undefined8 *
FUN_148118276(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1481182b8(param_1,param_3,param_4);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = *(undefined8 *)(lVar1 + 0x50);
    lVar1 = *(longlong *)(lVar1 + 0x58);
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 1481182b8 FUN_1481182b8 body=728 status=ok
// SIG undefined FUN_1481182b8(void)

longlong FUN_1481182b8(longlong *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_178 [32];
  longlong local_158;
  longlong lStack_150;
  undefined8 local_148;
  longlong local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar7 = FUN_14479d2ce(param_1 + 5);
  lVar2 = *param_2;
  if ((lVar2 == 0) || ((*(byte *)(param_2 + 4) & 1) != 0)) {
    uVar15 = (undefined4)param_2[3];
    uVar16 = (undefined4)((ulonglong)param_2[3] >> 0x20);
    param_2 = param_2 + 1;
  }
  else {
    param_2 = (longlong *)(lVar2 + 0x260);
    uVar15 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
    uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
  }
  lVar3 = *param_2;
  lVar4 = param_2[1];
  if ((param_3 == '\0' && lVar2 != 0) && ((longlong)(int)param_1[0xd] != 0)) {
    piVar8 = (int *)param_1[0xc];
    piVar1 = piVar8 + (int)param_1[0xd];
    lVar9 = param_1[0x10];
    do {
      lVar11 = (longlong)*piVar8 * 0x70;
      lVar13 = (longlong)*(int *)(lVar9 + 0x48 + lVar11);
      if (lVar13 != 0) {
        lVar10 = lVar9 + lVar11;
        lVar12 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar9 + 0x40 + lVar11) + lVar12) == lVar2)
          goto LAB_148118530;
          lVar12 = lVar12 + 8;
        } while (lVar13 * 8 != lVar12);
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != piVar1);
  }
  (**(code **)(*param_1 + 0x180))(param_1);
  local_a8 = *(undefined8 *)(lVar7 + 0x88);
  local_b8 = *(undefined8 *)(lVar7 + 0x78);
  uStack_b0 = *(undefined8 *)(lVar7 + 0x80);
  local_c8 = *(undefined8 *)(lVar7 + 0xa0);
  local_d8 = *(undefined4 *)(lVar7 + 0x90);
  uStack_d4 = *(undefined4 *)(lVar7 + 0x94);
  uStack_d0 = *(undefined4 *)(lVar7 + 0x98);
  uStack_cc = *(undefined4 *)(lVar7 + 0x9c);
  if (*(char *)(lVar7 + 0x58) == '\x01') {
    lVar2 = param_1[0xd];
    if ((longlong)(int)lVar2 != 0) {
      lVar7 = param_1[0xc];
      lVar9 = 0;
      do {
        lVar10 = (longlong)*(int *)(lVar7 + lVar9) * 0x70 + param_1[0x10];
        local_e8 = local_a8;
        local_f8 = local_b8;
        uStack_f0 = uStack_b0;
        local_118 = local_d8;
        uStack_114 = uStack_d4;
        uStack_110 = uStack_d0;
        uStack_10c = uStack_cc;
        local_108 = local_c8;
        local_128 = CONCAT44(uVar16,uVar15);
        local_138 = lVar3;
        lStack_130 = lVar4;
        cVar5 = FUN_148118592(lVar10,&local_138,&local_118,&local_f8);
        if (cVar5 != '\0') goto LAB_148118530;
        lVar9 = lVar9 + 4;
      } while ((longlong)(int)lVar2 * 4 != lVar9);
    }
  }
  else if ((*(char *)(lVar7 + 0x58) == '\0') && (lVar2 = param_1[0xd], (longlong)(int)lVar2 != 0)) {
    lVar7 = param_1[0xc];
    lVar9 = param_1[0x10];
    lVar13 = 0;
    do {
      lVar10 = (longlong)*(int *)(lVar7 + lVar13) * 0x70 + lVar9;
      local_88 = CONCAT44(uVar16,uVar15);
      local_98 = lVar3;
      lStack_90 = lVar4;
      dVar14 = (double)FUN_148119062(lVar10,&local_98);
      if (dVar14 <= 0.0) goto LAB_148118530;
      lVar13 = lVar13 + 4;
    } while ((longlong)(int)lVar2 * 4 != lVar13);
  }
  iVar6 = FUN_143a07852(param_1);
  if ((iVar6 == -1) || (lVar10 = (longlong)iVar6 * 0x70 + param_1[0x10], lVar10 == 0)) {
    lVar10 = 0;
  }
  else {
    local_148 = CONCAT44(uVar16,uVar15);
    local_158 = lVar3;
    lStack_150 = lVar4;
    FUN_148118a26(lVar10);
  }
LAB_148118530:
  if ((local_80 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 148118592 FUN_148118592 body=1170 status=ok
// SIG undefined FUN_148118592(void)

ulonglong FUN_148118592(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  byte bVar10;
  undefined8 unaff_RBX;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong *local_e8;
  uint local_e0;
  undefined4 local_d7;
  undefined3 uStack_d3;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_120 = *(double *)(param_1 + 0x18);
  dVar12 = local_120 + *(double *)(param_1 + 0x30);
  local_130 = *(double *)(param_1 + 8);
  local_128 = *(double *)(param_1 + 0x10);
  local_110 = local_128 + *(double *)(param_1 + 0x28);
  local_118 = local_130 + *(double *)(param_1 + 0x20);
  dVar6 = local_120 - *(double *)(param_1 + 0x30);
  dVar11 = local_128 - *(double *)(param_1 + 0x28);
  dVar9 = local_130 - *(double *)(param_1 + 0x20);
  dVar13 = param_3[2];
  dVar8 = param_2[2] + dVar13;
  if (dVar8 <= dVar12) {
    dVar8 = dVar12;
  }
  dVar12 = *param_3;
  dVar14 = param_3[1];
  dVar5 = param_2[2] - dVar13;
  if (dVar6 <= dVar5) {
    dVar5 = dVar6;
  }
  dVar6 = param_2[1] - dVar14;
  if (dVar11 <= dVar6) {
    dVar6 = dVar11;
  }
  dVar11 = *param_2 - dVar12;
  if (dVar9 <= dVar11) {
    dVar11 = dVar9;
  }
  dVar9 = param_2[1] + dVar14;
  dVar7 = *param_2 + dVar12;
  if (dVar9 <= local_110) {
    dVar9 = local_110;
  }
  if (dVar7 <= local_118) {
    dVar7 = local_118;
  }
  bVar10 = (local_120 - param_4[2]) - dVar13 <= dVar5 &
           ((local_128 - param_4[1]) - dVar14 <= dVar6 &&
           ((local_130 - *param_4) - dVar12 <= dVar11 && dVar8 <= local_120 + param_4[2] + dVar13))
           & -(dVar7 <= local_130 + *param_4 + dVar12 && dVar9 <= local_128 + param_4[1] + dVar14);
  if (bVar10 == 1) {
    dVar8 = dVar8 - local_120;
    dVar9 = dVar9 - local_128;
    dVar7 = dVar7 - local_130;
    dVar5 = dVar5 - local_120;
    dVar6 = dVar6 - local_128;
    dVar11 = dVar11 - local_130;
    dVar14 = (dVar8 - dVar5) * 0.5;
    dVar13 = (dVar9 - dVar6) * 0.5;
    dVar12 = (dVar7 - dVar11) * 0.5;
    *(double *)(param_1 + 0x20) = dVar12;
    *(double *)(param_1 + 0x28) = dVar13;
    *(double *)(param_1 + 0x30) = dVar14;
    *(double *)(param_1 + 0x38) = SQRT(dVar14 * dVar14 + dVar12 * dVar12 + dVar13 * dVar13);
    *(double *)(param_1 + 8) = dVar11 + dVar12 + local_130;
    *(double *)(param_1 + 0x10) = dVar6 + dVar13 + local_128;
    *(double *)(param_1 + 0x18) = dVar5 + dVar14 + local_120;
    local_e8 = (longlong *)(param_1 + 0x40);
    local_e0 = 0;
    do {
      if ((int)local_e8[1] <= (int)local_e0) break;
      lVar2 = *(longlong *)(*local_e8 + (ulonglong)local_e0 * 8);
      if ((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) {
        FUN_14811913c(&local_e8);
      }
      else {
        *(double *)(lVar2 + 0x868) = dVar11;
        *(double *)(lVar2 + 0x870) = dVar6;
        *(double *)(lVar2 + 0x878) = dVar5;
        *(double *)(lVar2 + 0x880) = dVar7;
        *(double *)(lVar2 + 0x888) = dVar9;
        *(double *)(lVar2 + 0x890) = dVar8;
        *(undefined1 *)(lVar2 + 0x898) = 1;
        *(undefined4 *)(lVar2 + 0x899) = local_d7;
        *(uint *)(lVar2 + 0x89c) = CONCAT31(uStack_d3,local_d7._3_1_);
        if (*(longlong *)(lVar2 + 0x760) != 0) {
          lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x760) + 0x30);
          *(double *)(lVar3 + 0x7c0) = dVar11;
          *(double *)(lVar3 + 0x7c8) = dVar6;
          *(double *)(lVar3 + 2000) = dVar5;
          *(double *)(lVar3 + 0x7d8) = dVar7;
          *(double *)(lVar3 + 0x7e0) = dVar9;
          *(double *)(lVar3 + 0x7e8) = dVar8;
          *(undefined1 *)(lVar3 + 0x7f0) = 1;
          *(undefined4 *)(lVar3 + 0x7f1) = local_d7;
          *(uint *)(lVar3 + 0x7f4) = CONCAT31(uStack_d3,local_d7._3_1_);
        }
        local_f8 = *(undefined8 *)(param_1 + 0x18);
        local_108 = *(undefined8 *)(param_1 + 8);
        uStack_100 = *(undefined8 *)(param_1 + 0x10);
        local_138 = 0;
        FUN_140d93b16(lVar2,&local_108,0,0);
      }
      uVar1 = local_e0 + 1;
      bVar4 = -2 < (int)local_e0;
      local_e0 = uVar1;
    } while (bVar4);
  }
  if ((local_d0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar10) & 0xffffffff;
}



// FUNCTION 148118a26 FUN_148118a26 body=1302 status=ok
// SIG undefined FUN_148118a26(void)

void FUN_148118a26(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_218 [40];
  longlong *local_1f0;
  double *local_1e8;
  longlong local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  double local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  longlong local_178;
  longlong lStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined2 local_110;
  undefined1 local_10e;
  undefined2 local_10d;
  undefined1 local_10b;
  longlong local_108;
  int local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined8 local_bc;
  undefined4 local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1e0 = FUN_14479d2ce(*param_1 + 0x28);
  if (*(char *)(local_1e0 + 0x58) == '\0') {
    dVar1 = *(double *)(local_1e0 + 0x78);
    dVar2 = *(double *)(local_1e0 + 0x80);
    dVar3 = *(double *)(local_1e0 + 0x88);
    dVar4 = *(double *)(local_1e0 + 0xa0);
    dVar5 = *(double *)(local_1e0 + 0x98);
    dVar6 = *(double *)(local_1e0 + 0x90);
    auVar14._0_8_ = param_2[2] / (dVar3 + dVar3);
    auVar16._0_8_ = param_2[1] / (dVar2 + dVar2);
    auVar15._0_8_ = *param_2 / (dVar1 + dVar1);
    auVar15._8_8_ = 0;
    auVar15 = roundpd(auVar15,auVar15,1);
    auVar16._8_8_ = 0;
    auVar16 = roundpd(auVar16,auVar16,1);
    auVar14._8_8_ = 0;
    auVar14 = roundpd(auVar14,auVar14,1);
    param_1[1] = (longlong)(auVar15._0_8_ * (dVar1 + dVar1) + dVar1);
    param_1[2] = (longlong)(auVar16._0_8_ * (dVar2 + dVar2) + dVar2);
    param_1[3] = (longlong)(auVar14._0_8_ * (dVar3 + dVar3) + dVar3);
    param_1[4] = (longlong)(dVar6 + dVar1);
    param_1[5] = (longlong)(dVar5 + dVar2);
    param_1[6] = (longlong)(dVar4 + dVar3);
  }
  else {
    param_1[3] = (longlong)param_2[2];
    dVar1 = param_2[1];
    param_1[1] = (longlong)*param_2;
    param_1[2] = (longlong)dVar1;
    lVar13 = *(longlong *)(local_1e0 + 0x60);
    lVar11 = *(longlong *)(local_1e0 + 0x68);
    param_1[6] = *(longlong *)(local_1e0 + 0x70);
    param_1[4] = lVar13;
    param_1[5] = lVar11;
  }
  lVar13 = param_1[10];
  local_c8 = param_1[3];
  local_d8 = (undefined4)param_1[1];
  uStack_d4 = *(undefined4 *)((longlong)param_1 + 0xc);
  uStack_d0 = (undefined4)param_1[2];
  uStack_cc = *(undefined4 *)((longlong)param_1 + 0x14);
  local_1e8 = param_2;
  FUN_144afee78(&local_bc);
  *(undefined4 *)(lVar13 + 0x88) = local_b4;
  *(undefined8 *)(lVar13 + 0x80) = local_bc;
  uVar7 = param_1[6];
  uVar8 = param_1[4];
  uVar9 = param_1[5];
  local_f8 = (undefined4)param_1[4];
  uStack_f4 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_f0 = (undefined4)param_1[5];
  uStack_ec = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_e8 = param_1[6];
  FUN_148117898(local_1e0,&local_108);
  if ((longlong)local_100 != 0) {
    local_1f0 = param_1 + 8;
    lVar13 = 0;
    do {
      lVar11 = *(longlong *)(local_108 + lVar13);
      if (lVar11 != 0) {
        local_178 = 0;
        lStack_170 = 0;
        local_140 = DAT_14c846508;
        local_150 = DAT_14c8464f8;
        uStack_148 = DAT_14c846500;
        local_138 = 0x3ff0000000000000;
        local_130 = 0x3ff0000000000000;
        local_128 = 0x3ff0000000000000;
        local_120 = 0;
        uStack_118 = 0;
        local_110 = 1;
        local_10b = 0;
        local_10e = 0;
        local_158 = param_1[3];
        local_168 = (undefined4)param_1[1];
        uStack_164 = *(undefined4 *)((longlong)param_1 + 0xc);
        uStack_160 = (undefined4)param_1[2];
        uStack_15c = *(undefined4 *)((longlong)param_1 + 0x14);
        local_10d = 2;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c();
          lVar11 = *(longlong *)(local_108 + lVar13);
        }
        lStack_170 = lVar11;
        lVar11 = (**(code **)(*(longlong *)*param_1 + 0x180))();
        if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar11);
        }
        local_178 = lVar11;
        plVar12 = (longlong *)FUN_140416fe4(&local_178);
        if (plVar12 != (longlong *)0x0) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(plVar12);
          }
          iVar10 = (int)param_1[9];
          *(uint *)(param_1 + 9) = iVar10 + 1U;
          if (*(uint *)((longlong)param_1 + 0x4c) < iVar10 + 1U) {
            FUN_14043878c(local_1f0,iVar10);
          }
          *(longlong **)(*local_1f0 + (longlong)iVar10 * 8) = plVar12;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(plVar12);
          }
          plVar12[0x10d] = uVar8 ^ 0x8000000000000000;
          plVar12[0x10e] = uVar9 ^ 0x8000000000000000;
          plVar12[0x10f] = uVar7 ^ 0x8000000000000000;
          *(undefined4 *)(plVar12 + 0x110) = local_f8;
          *(undefined4 *)((longlong)plVar12 + 0x884) = uStack_f4;
          *(undefined4 *)(plVar12 + 0x111) = uStack_f0;
          *(undefined4 *)((longlong)plVar12 + 0x88c) = uStack_ec;
          plVar12[0x112] = local_e8;
          *(undefined1 *)(plVar12 + 0x113) = 1;
          if (plVar12[0xec] != 0) {
            lVar11 = *(longlong *)(plVar12[0xec] + 0x30);
            *(ulonglong *)(lVar11 + 0x7c0) = uVar8 ^ 0x8000000000000000;
            *(ulonglong *)(lVar11 + 0x7c8) = uVar9 ^ 0x8000000000000000;
            *(ulonglong *)(lVar11 + 2000) = uVar7 ^ 0x8000000000000000;
            *(undefined4 *)(lVar11 + 0x7d8) = local_f8;
            *(undefined4 *)(lVar11 + 0x7dc) = uStack_f4;
            *(undefined4 *)(lVar11 + 0x7e0) = uStack_f0;
            *(undefined4 *)(lVar11 + 0x7e4) = uStack_ec;
            *(longlong *)(lVar11 + 0x7e8) = local_e8;
            *(undefined1 *)(lVar11 + 0x7f0) = 1;
          }
          (**(code **)(*plVar12 + 0x2a8))(plVar12,0);
        }
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)local_100 * 8 != lVar13);
  }
  if (*(char *)(local_1e0 + 0x58) == '\x01') {
    local_188 = *(undefined8 *)(local_1e0 + 0x88);
    local_198 = *(undefined8 *)(local_1e0 + 0x78);
    uStack_190 = *(undefined8 *)(local_1e0 + 0x80);
    local_1b8 = *(undefined8 *)(local_1e0 + 0x90);
    uStack_1b0 = *(undefined8 *)(local_1e0 + 0x98);
    local_1a8 = *(undefined8 *)(local_1e0 + 0xa0);
    local_1d8 = *(undefined4 *)local_1e8;
    uStack_1d4 = *(undefined4 *)((longlong)local_1e8 + 4);
    uStack_1d0 = *(undefined4 *)(local_1e8 + 1);
    uStack_1cc = *(undefined4 *)((longlong)local_1e8 + 0xc);
    local_1c8 = local_1e8[2];
    FUN_148118592(param_1);
  }
  if ((local_b0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148118f3e FUN_148118f3e body=64 status=ok
// SIG undefined FUN_148118f3e(void)

longlong FUN_148118f3e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148125768(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x70 + *param_1;
  FUN_148125755(lVar2,1);
  return lVar2;
}



// FUNCTION 148118fa0 FUN_148118fa0 body=194 status=ok
// SIG undefined FUN_148118fa0(void)

void FUN_148118fa0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x40);
    lVar6 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar6);
      if ((plVar5 != (longlong *)0x0) && ((*(uint *)(plVar5 + 1) >> 0x1e & 1) == 0)) {
        (**(code **)(*plVar5 + 0xa48))();
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar3 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_14574ac34((longlong *)(param_1 + 0x40),0);
  }
  FUN_143a0c402(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  plVar5 = *(longlong **)(param_1 + 0x58);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148119062 FUN_148119062 body=217 status=ok
// SIG undefined FUN_148119062(void)

double FUN_148119062(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = *(double *)(param_1 + 0x10) - *(double *)(param_1 + 0x28);
  dVar3 = *(double *)(param_1 + 8) - *(double *)(param_1 + 0x20);
  dVar1 = *param_2;
  if (dVar3 <= dVar1) {
    dVar3 = *(double *)(param_1 + 8) + *(double *)(param_1 + 0x20);
    dVar2 = 0.0;
    if (dVar1 <= dVar3) goto LAB_1481190bd;
  }
  dVar2 = (dVar1 - dVar3) * (dVar1 - dVar3);
LAB_1481190bd:
  dVar3 = *(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x30);
  dVar1 = param_2[1];
  if ((dVar1 < dVar4) ||
     (dVar4 = *(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x28), dVar4 < dVar1)) {
    dVar2 = dVar2 + (dVar1 - dVar4) * (dVar1 - dVar4);
  }
  dVar1 = param_2[2];
  if ((dVar1 < dVar3) ||
     (dVar3 = *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x30), dVar3 < dVar1)) {
    dVar2 = dVar2 + (dVar1 - dVar3) * (dVar1 - dVar3);
  }
  return dVar2;
}



// FUNCTION 14811913c FUN_14811913c body=93 status=ok
// SIG undefined FUN_14811913c(void)

void FUN_14811913c(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  plVar1 = (longlong *)*param_1;
  iVar2 = (int)plVar1[1];
  iVar3 = ~*(uint *)(param_1 + 1) + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*plVar1 + (longlong)(int)*(uint *)(param_1 + 1) * 8),
            (void *)(*plVar1 + (longlong)(iVar2 - iVar4) * 8),(longlong)iVar4 << 3);
    iVar2 = (int)plVar1[1];
  }
  *(int *)(plVar1 + 1) = iVar2 + -1;
  FUN_1403ed018(plVar1);
  *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  return;
}



// FUNCTION 14811919e FUN_14811919e body=325 status=ok
// SIG undefined FUN_14811919e(void)

void FUN_14811919e(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined2 *local_48;
  int local_40;
  undefined1 *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) goto LAB_148119220;
  if ((longlong)(int)param_4[1] == 0) {
LAB_148119213:
    if ((param_2 == 0) || ((*(uint *)(param_2 + 8) & 0x10) == 0)) goto LAB_148119220;
    iVar3 = 0;
  }
  else {
    lVar5 = 0;
    iVar3 = 0;
    do {
      if (*(longlong *)(*param_4 + lVar5) != 0) {
        lVar2 = *(longlong *)(*(longlong *)(*param_4 + lVar5) + 0x10);
        if (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38)) {
          bVar6 = false;
        }
        else {
          bVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
                  == lVar1 + 0x30;
        }
        iVar3 = iVar3 + (uint)bVar6;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)param_4[1] * 8 != lVar5);
    if (iVar3 == 0) goto LAB_148119213;
  }
  local_38 = *(undefined1 **)(lVar1 + 0x18);
  FUN_1400021e4(&local_38,&local_48);
  FUN_1448097c4(&local_48,L"NiagaraDataInterface",&DAT_149dfb77a,1);
  puVar4 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar4 = local_48;
  }
  FUN_1446f470e(local_50,puVar4,1);
  local_38 = local_50;
  FUN_148125928(param_5,&local_2c,&local_38,0);
  *(int *)(*param_5 + 8 + (longlong)local_2c * 0x14) = iVar3;
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_148119220:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481192e4 FUN_1481192e4 body=20 status=ok
// SIG undefined FUN_1481192e4(void)

undefined8 FUN_1481192e4(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x10) >> 8),
                    *(longlong *)(param_2 + 0x10) == *(longlong *)(param_1 + 0x10));
  }
  return 0;
}



// FUNCTION 1481192f8 FUN_1481192f8 body=10 status=ok
// SIG undefined FUN_1481192f8(void)

longlong FUN_1481192f8(longlong param_1)

{
  return *(longlong *)(param_1 + 8) + 600;
}



// FUNCTION 148119302 FUN_148119302 body=25 status=ok
// SIG undefined FUN_148119302(void)

void FUN_148119302(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x1c);
  *param_2 = *(undefined8 *)(lVar1 + 0x14);
  return;
}



// FUNCTION 14811931c FUN_14811931c body=9 status=ok
// SIG undefined FUN_14811931c(void)

longlong FUN_14811931c(longlong param_1)

{
  return *(longlong *)(param_1 + 8) + 0x38;
}



// FUNCTION 148119326 FUN_148119326 body=9 status=ok
// SIG undefined FUN_148119326(void)

longlong FUN_148119326(longlong param_1)

{
  return *(longlong *)(param_1 + 8) + 0x38;
}



// FUNCTION 148119330 FUN_148119330 body=316 status=ok
// SIG undefined FUN_148119330(void)

undefined8 FUN_148119330(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  size_t sVar2;
  wchar_t *_Str;
  undefined1 auStack_168 [40];
  undefined2 *local_140;
  undefined2 *local_138;
  ulonglong *local_130;
  char local_128;
  undefined2 local_120 [128];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_140 = local_120;
  local_128 = '\0';
  local_130 = &local_20;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 200);
  local_138 = local_140;
  if (lVar1 == 0) {
    _Str = L"Unknown";
  }
  else if (*(int *)(lVar1 + 0x28) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)(lVar1 + 0x20);
    if (_Str == (wchar_t *)0x0) {
      _Str = (wchar_t *)0x0;
      sVar2 = 0;
      goto LAB_1481193ac;
    }
  }
  sVar2 = wcslen(_Str);
LAB_1481193ac:
  FUN_1449668a2(&local_140,_Str,sVar2);
  if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x90) != 0) {
    if (local_130 <= local_138 + 1) {
      FUN_140213274(&local_140,1);
    }
    *local_138 = 0x2c;
    local_138 = local_138 + 1;
    FUN_14005eb5c(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x90));
  }
  *local_138 = 0;
  FUN_140056680(param_2,local_140);
  if (local_128 == '\x01') {
    FUN_1400020a8(local_140);
  }
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148119472 FUN_148119472 body=108 status=ok
// SIG undefined FUN_148119472(void)

undefined8 FUN_148119472(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10))) {
    uVar1 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x38);
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_1 + 0x38);
      }
    }
    *(longlong *)(param_2 + 0x38) = lVar2;
    *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    FUN_1447a122a(param_2 + 0x50,param_1 + 0x50);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1481194de FUN_1481194de body=95 status=ok
// SIG undefined FUN_1481194de(void)

undefined4 FUN_1481194de(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x10) == *(longlong *)(param_1 + 0x10))) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if ((*(longlong *)(param_2 + 0x38) == lVar1) &&
       (*(longlong *)(param_1 + 0x40) == *(longlong *)(param_2 + 0x40))) {
      return CONCAT31((int3)((uint)*(int *)(param_1 + 0x48) >> 8),
                      *(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48));
    }
  }
  return 0;
}



// FUNCTION 14811953e FUN_14811953e body=245 status=ok
// SIG undefined FUN_14811953e(void)

void FUN_14811953e(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 == DAT_14cb3a7e0) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,3,0x10);
    puVar1 = local_30;
    local_28 = 3;
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar2 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar2 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar2;
    local_30[2] = lVar3;
    *local_30 = &PTR_FUN_14adbc2d0;
    local_30[3] = 0;
    FUN_14485c47a(local_30 + 3,param_1);
    puVar1[4] = FUN_148119634;
    FUN_144a450dc(param_4,&local_30);
    FUN_1449db362(&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148119634 FUN_148119634 body=242 status=ok
// SIG undefined FUN_148119634(void)

void FUN_148119634(undefined8 param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined1 auStack_78 [40];
  float *local_50;
  int local_48;
  float *local_40;
  int local_38;
  float *local_30;
  int local_28;
  undefined1 local_20 [8];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1481197c0(local_20);
  FUN_144a76c20(&local_50,param_2);
  FUN_144a76c20(&local_40,param_2);
  FUN_144a76c20(&local_30,param_2);
  piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar8 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar8) {
    iVar4 = *(int *)(local_18 + 0x10);
    iVar5 = *(int *)(local_18 + 0xc);
    iVar6 = *(int *)(local_18 + 8);
    iVar7 = 0;
    do {
      pfVar1 = local_50 + local_48;
      *local_50 = (float)iVar6;
      pfVar2 = local_40 + local_38;
      *local_40 = (float)iVar5;
      pfVar3 = local_30 + local_28;
      *local_30 = (float)iVar4;
      iVar7 = iVar7 + 1;
      piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar8 = (int *)(param_2 + 0x3c);
      }
      local_50 = pfVar1;
      local_40 = pfVar2;
      local_30 = pfVar3;
    } while (iVar7 < *piVar8);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811972e FUN_14811972e body=145 status=ok
// SIG undefined FUN_14811972e(void)

undefined8 FUN_14811972e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[1] = DAT_14c9a5298;
  *(undefined4 *)(param_2 + 2) = DAT_14c9a52a0;
  *(undefined4 *)(param_2 + 3) = 0xffffffff;
  param_2[4] = 0;
  param_2[5] = 0;
  uVar1 = FUN_144830b78(param_2 + 6,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 6) = uVar1;
  param_2[7] = 0;
  param_2[8] = 0;
  FUN_1404e5848(param_2 + 3,param_3 + 0x1e8,param_1 + 0x40);
  return 1;
}



// FUNCTION 1481197c0 FUN_1481197c0 body=148 status=ok
// SIG undefined FUN_1481197c0(void)

void FUN_1481197c0(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 1481198c6 FUN_1481198c6 body=175 status=ok
// SIG undefined FUN_1481198c6(void)

undefined8 FUN_1481198c6(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_145b10894();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811999e FUN_14811999e body=324 status=ok
// SIG undefined FUN_14811999e(void)

undefined8
FUN_14811999e(longlong param_1,longlong param_2,longlong param_3,uint param_4,undefined4 *param_5,
             undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  uint *local_58;
  longlong *local_50;
  undefined8 *local_48;
  undefined4 *local_40;
  undefined4 local_34;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  uint local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = param_3;
  local_20 = param_2;
  local_14 = param_4;
  if (((((int)param_4 < 0) || (*(int *)(param_2 + 0x30) <= (int)param_4)) ||
      (*(int *)(param_3 + 0x30) <= (int)param_4)) ||
     ((*(int *)(param_2 + 0x40) <= (int)param_4 || (*(int *)(param_3 + 0x40) <= (int)param_4)))) {
    FUN_14020fad6(param_6,L"FrameIndex was not valid");
  }
  else {
    local_30 = *(undefined8 *)(param_1 + -0x10);
    if (*(char *)(param_5 + 1) == '\x01') {
      local_34 = *param_5;
    }
    else {
      local_34 = 0x322bcc77;
    }
    local_40 = &local_34;
    local_68 = param_6;
    local_60 = &local_20;
    local_58 = &local_14;
    local_50 = &local_28;
    local_48 = &local_30;
    cVar1 = FUN_143a089a6(&local_68,(ulonglong)param_4 * 8 + *(longlong *)(param_2 + 0x28),
                          *(longlong *)(param_3 + 0x28) + (ulonglong)param_4 * 8,&DAT_14a819e16);
    if (cVar1 != '\0') {
      uVar2 = FUN_143a089a6(&local_68,(longlong)(int)local_14 * 8 + *(longlong *)(local_20 + 0x38),
                            *(longlong *)(local_28 + 0x38) + (longlong)(int)local_14 * 8,
                            &DAT_14a915eb6);
      goto LAB_148119a17;
    }
  }
  uVar2 = 0;
LAB_148119a17:
  if (*(char *)(param_5 + 1) == '\x01') {
    *(undefined1 *)(param_5 + 1) = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148119ae4 FUN_148119ae4 body=172 status=ok
// SIG undefined FUN_148119ae4(void)

ulonglong FUN_148119ae4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  void *_Buf2;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  plVar1 = (longlong *)(param_1 + 0x48);
  uVar2 = *(uint *)(param_1 + 0x50);
  uVar3 = *(uint *)(param_2 + 1);
  if ((int)uVar3 <= (int)uVar2) {
    _Buf2 = (void *)*param_2;
    lVar4 = *plVar1;
    uVar6 = 0;
    do {
      iVar5 = memcmp((void *)(uVar6 + lVar4),_Buf2,(longlong)(int)uVar3);
      if (iVar5 == 0) {
        return uVar6 & 0xffffffff;
      }
      uVar6 = uVar6 + 1;
    } while ((uVar2 - uVar3) + 1 != uVar6);
  }
  *(uint *)(param_1 + 0x50) = uVar3 + uVar2;
  if (*(int *)(param_1 + 0x54) - uVar2 < uVar3) {
    FUN_1447403be(plVar1,uVar2);
  }
  memcpy((void *)((longlong)(int)uVar2 + *plVar1),(void *)*param_2,(longlong)*(int *)(param_2 + 1));
  return (ulonglong)uVar2;
}



// FUNCTION 148119bb0 FUN_148119bb0 body=294 status=ok
// SIG undefined FUN_148119bb0(void)

void FUN_148119bb0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14811e804(&local_38,local_20,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148119cde FUN_148119cde body=306 status=ok
// SIG undefined FUN_148119cde(void)

void FUN_148119cde(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14811ef70(local_20,local_28,local_2c);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148119e12 FUN_148119e12 body=294 status=ok
// SIG undefined FUN_148119e12(void)

void FUN_148119e12(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14811e6a1(&local_38,local_20,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148119f3a FUN_148119f3a body=318 status=ok
// SIG undefined FUN_148119f3a(void)

void FUN_148119f3a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14811edd5(&local_3c,local_20,local_28,local_2c);
  *param_3 = local_3c;
  param_3[1] = uStack_38;
  param_3[2] = uStack_34;
  param_3[3] = uStack_30;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811a07a FUN_14811a07a body=294 status=ok
// SIG undefined FUN_14811a07a(void)

void FUN_14811a07a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14811e53e(&local_38,local_20,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811a1a2 FUN_14811a1a2 body=308 status=ok
// SIG undefined FUN_14811a1a2(void)

void FUN_14811a1a2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14811ec34(local_20,local_28,local_2c);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811a2d8 FUN_14811a2d8 body=294 status=ok
// SIG undefined FUN_14811a2d8(void)

void FUN_14811a2d8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14811e776(&local_38,local_20,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811a400 FUN_14811a400 body=306 status=ok
// SIG undefined FUN_14811a400(void)

void FUN_14811a400(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14811eee8(local_20,local_28,local_2c);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811a53a FUN_14811a53a body=373 status=ok
// SIG undefined FUN_14811a53a(void)

void FUN_14811a53a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14811a6b0(&local_40,local_20,local_28,local_2c != 0);
  if (&local_40 == param_3) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_40;
    *(undefined4 *)(param_3 + 1) = local_38;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811a6b0 FUN_14811a6b0 body=181 status=ok
// SIG undefined FUN_14811a6b0(void)

undefined8 * FUN_14811a6b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [24];
  undefined8 local_c8 [17];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14811e72f();
  if (param_4 != '\0') {
    FUN_14811df94(local_e0,param_2);
    if ((longlong)*(int *)(param_1 + 1) != 0) {
      puVar5 = (undefined8 *)*param_1;
      lVar4 = (longlong)*(int *)(param_1 + 1) << 7;
      do {
        FUN_1481f8c70(local_e0,local_c8,puVar5);
        puVar2 = local_c8;
        puVar3 = puVar5;
        for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
        puVar5 = puVar5 + 0x10;
        lVar4 = lVar4 + -0x80;
      } while (lVar4 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14811a76c FUN_14811a76c body=413 status=ok
// SIG undefined FUN_14811a76c(void)

void FUN_14811a76c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a8 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_ac = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  local_b0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = local_b0 != 0;
  FUN_14811a90a(local_98,local_a0,local_a8,local_ac);
  puVar2 = local_98;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811a90a FUN_14811a90a body=139 status=ok
// SIG undefined FUN_14811a90a(void)

undefined8 *
FUN_14811a90a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             char param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [24];
  undefined8 local_a8 [17];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14811ee7b();
  if (param_5 != '\0') {
    FUN_14811df94(local_c0,param_2);
    FUN_1481f8c70(local_c0,local_a8,param_1);
    puVar2 = local_a8;
    puVar3 = param_1;
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14811a996 FUN_14811a996 body=294 status=ok
// SIG undefined FUN_14811a996(void)

void FUN_14811a996(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14811aabe(&local_38,local_20,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811aabe FUN_14811aabe body=238 status=ok
// SIG undefined FUN_14811aabe(void)

longlong * FUN_14811aabe(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_60 [24];
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14811e613(&local_48);
  FUN_14811df94(local_60,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_140b463b8(param_1,local_40,1);
  if (0 < local_40) {
    lVar4 = 0;
    lVar3 = 0;
    do {
      local_88 = *(undefined8 *)(local_48 + lVar4);
      local_80 = *(undefined4 *)(local_48 + 8 + lVar4);
      FUN_144b38fb2(local_60,&local_78,&local_88);
      lVar2 = *param_1;
      *(undefined8 *)(lVar2 + 0x10 + lVar4 * 2) = local_68;
      puVar1 = (undefined4 *)(lVar2 + lVar4 * 2);
      *puVar1 = local_78;
      puVar1[1] = uStack_74;
      puVar1[2] = uStack_70;
      puVar1[3] = uStack_6c;
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0xc;
    } while (lVar3 < local_40);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811abae FUN_14811abae body=400 status=ok
// SIG undefined FUN_14811abae(void)

void FUN_14811abae(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [28];
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  uVar1 = local_68;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14811ed23(&local_34,local_68,local_70,local_74);
  FUN_14811df94(local_50,uVar1);
  local_58 = local_2c;
  local_60 = local_34;
  FUN_144b38fb2(local_50,&local_90);
  *(undefined8 *)(param_3 + 4) = local_80;
  *param_3 = local_90;
  param_3[1] = uStack_8c;
  param_3[2] = uStack_88;
  param_3[3] = uStack_84;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811ad40 FUN_14811ad40 body=294 status=ok
// SIG undefined FUN_14811ad40(void)

void FUN_14811ad40(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14811e6e8(&local_38,local_20,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811ae68 FUN_14811ae68 body=326 status=ok
// SIG undefined FUN_14811ae68(void)

void FUN_14811ae68(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14811ee26(&local_58,local_20,local_28,local_2c);
  param_3[4] = local_48;
  param_3[5] = uStack_44;
  param_3[6] = uStack_40;
  param_3[7] = uStack_3c;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811afb0 FUN_14811afb0 body=294 status=ok
// SIG undefined FUN_14811afb0(void)

void FUN_14811afb0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14811e7bd(&local_38,local_20,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811b0d8 FUN_14811b0d8 body=306 status=ok
// SIG undefined FUN_14811b0d8(void)

void FUN_14811b0d8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14811ef2c(local_20,local_28,local_2c);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811b20c FUN_14811b20c body=294 status=ok
// SIG undefined FUN_14811b20c(void)

void FUN_14811b20c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14811e5cc(&local_38,local_20,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811b334 FUN_14811b334 body=294 status=ok
// SIG undefined FUN_14811b334(void)

void FUN_14811b334(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14811e585(&local_38,local_20,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811b45c FUN_14811b45c body=318 status=ok
// SIG undefined FUN_14811b45c(void)

void FUN_14811b45c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14811ec79(&local_40,local_20,local_28,local_2c);
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811b59c FUN_14811b59c body=294 status=ok
// SIG undefined FUN_14811b59c(void)

void FUN_14811b59c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14811e65a(&local_38,local_20,local_28);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811b6c4 FUN_14811b6c4 body=326 status=ok
// SIG undefined FUN_14811b6c4(void)

void FUN_14811b6c4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14811ed6e(&local_58,local_20,local_28,local_2c);
  param_3[4] = local_48;
  param_3[5] = uStack_44;
  param_3[6] = uStack_40;
  param_3[7] = uStack_3c;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811b80c FUN_14811b80c body=326 status=ok
// SIG undefined FUN_14811b80c(void)

void FUN_14811b80c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14811ecca(&local_48,local_20,local_28,local_2c);
  *(undefined8 *)(param_3 + 4) = local_38;
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811b954 FUN_14811b954 body=342 status=ok
// SIG undefined FUN_14811b954(void)

void FUN_14811b954(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[3] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 3);
  }
  local_48[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48[4] = *plVar1;
  local_20 = (undefined4)plVar1[1];
  FUN_14811e4d2(local_48[3],local_48[2]);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811bab8 FUN_14811bab8 body=467 status=ok
// SIG undefined FUN_14811bab8(void)

void FUN_14811bab8(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_34;
  undefined1 local_2d;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_2d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2d);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_34 != 0;
  puVar2 = &local_2d;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_14811ebd9(local_20,local_28,local_2c,puVar2);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811bc8c FUN_14811bc8c body=342 status=ok
// SIG undefined FUN_14811bc8c(void)

void FUN_14811bc8c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[3] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 3);
  }
  local_48[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48[4] = *plVar1;
  local_20 = (undefined4)plVar1[1];
  FUN_14811e2b6(local_48[3],local_48[2]);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811bdea FUN_14811bdea body=462 status=ok
// SIG undefined FUN_14811bdea(void)

void FUN_14811bdea(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_40;
  undefined1 local_3c [16];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_3c);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_40 != 0;
  puVar2 = local_3c;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_14811ea12(local_20,local_28,local_2c,puVar2);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811bfba FUN_14811bfba body=342 status=ok
// SIG undefined FUN_14811bfba(void)

void FUN_14811bfba(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[3] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 3);
  }
  local_48[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48[4] = *plVar1;
  local_20 = (undefined4)plVar1[1];
  FUN_14811e051(local_48[3],local_48[2]);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811c118 FUN_14811c118 body=468 status=ok
// SIG undefined FUN_14811c118(void)

void FUN_14811c118(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_14 = local_30;
  local_48 = local_34 != 0;
  FUN_14811e84b(local_20,local_28,local_2c);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811c2ee FUN_14811c2ee body=342 status=ok
// SIG undefined FUN_14811c2ee(void)

void FUN_14811c2ee(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[3] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 3);
  }
  local_48[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48[4] = *plVar1;
  local_20 = (undefined4)plVar1[1];
  FUN_14811e3fa(local_48[3],local_48[2]);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811c44c FUN_14811c44c body=464 status=ok
// SIG undefined FUN_14811c44c(void)

void FUN_14811c44c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_14 = local_30;
  local_48 = local_34 != 0;
  FUN_14811eb23(local_20,local_28,local_2c);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811c624 FUN_14811c624 body=408 status=ok
// SIG undefined FUN_14811c624(void)

void FUN_14811c624(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [44];
  int local_3c;
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[3] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 3);
  }
  local_38[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14811c7be(local_38[3],local_38[2],plVar1,local_3c != 0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811c7be FUN_14811c7be body=295 status=ok
// SIG undefined FUN_14811c7be(void)

void FUN_14811c7be(undefined8 param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  longlong local_118;
  undefined4 local_110;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0 [24];
  undefined8 local_c8 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_4 == '\0') {
    local_118 = *param_3;
    local_110 = (undefined4)param_3[1];
    FUN_14811e38e(param_1);
  }
  else {
    local_120 = param_2;
    FUN_14811df94(local_e0,param_1);
    local_f8 = 0;
    uStack_f0 = 0;
    FUN_1405181c4(&local_f8,(int)param_3[1],1);
    if (0 < (int)param_3[1]) {
      lVar3 = 0;
      lVar2 = 0;
      do {
        FUN_1481f8c08(local_e0,local_c8,*param_3 + lVar3);
        puVar4 = local_c8;
        puVar5 = (undefined8 *)(local_f8 + lVar3);
        for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        lVar2 = lVar2 + 1;
        lVar3 = lVar3 + 0x80;
      } while (lVar2 < (int)param_3[1]);
    }
    local_108 = local_f8;
    local_100 = (undefined4)uStack_f0;
    FUN_14811e38e(param_1,local_120);
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14811c8f6 FUN_14811c8f6 body=557 status=ok
// SIG undefined FUN_14811c8f6(void)

void FUN_14811c8f6(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0;
  int local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b8 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_bc = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_bc);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_c0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  iVar2 = local_c0;
  local_c4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c4);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_d0 = local_c4 != 0;
  puVar3 = local_a8;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  local_d8 = iVar2 != 0;
  FUN_14811cb24(local_b0,local_b8,local_bc,puVar3);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811cb24 FUN_14811cb24 body=198 status=ok
// SIG undefined FUN_14811cb24(void)

void FUN_14811cb24(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5,char param_6)

{
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e0 [24];
  undefined1 local_c8 [136];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_6 != '\0') {
    FUN_14811df94(local_e0,param_1);
    FUN_1481f8c08(local_e0,local_c8,param_4);
    local_e8 = param_5;
    FUN_14811eac8(param_1,param_2,param_3,local_c8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    FUN_14811eac8(param_1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811cbfe FUN_14811cbfe body=324 status=ok
// SIG undefined FUN_14811cbfe(void)

void FUN_14811cbfe(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[3] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 3);
  }
  local_38[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_148110e4c(local_38[3],local_38[2],plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811cd4a FUN_14811cd4a body=578 status=ok
// SIG undefined FUN_14811cd4a(void)

void FUN_14811cd4a(undefined8 param_1,longlong param_2)

{
  double *pdVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double *pdVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  int local_94;
  double local_90 [3];
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  float local_5c;
  float local_58;
  float local_54;
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_90);
  }
  pdVar1 = *(double **)(param_2 + 0x38);
  local_94 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  uVar5 = local_68;
  uVar4 = local_70;
  uVar3 = local_74;
  iVar2 = local_94;
  pdVar6 = local_90;
  if (pdVar1 != (double *)0x0) {
    pdVar6 = pdVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14811df94(&local_50,local_68);
  local_54 = (float)(pdVar6[2] - local_40);
  local_58 = (float)(pdVar6[1] - local_48);
  local_5c = (float)(*pdVar6 - local_50);
  local_a8 = iVar2 != 0;
  FUN_14811e95c(uVar5,uVar4,uVar3);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811cf8e FUN_14811cf8e body=342 status=ok
// SIG undefined FUN_14811cf8e(void)

void FUN_14811cf8e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[3] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 3);
  }
  local_48[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48[4] = *plVar1;
  local_20 = (undefined4)plVar1[1];
  FUN_14811e322(local_48[3],local_48[2]);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811d0ec FUN_14811d0ec body=462 status=ok
// SIG undefined FUN_14811d0ec(void)

void FUN_14811d0ec(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  int local_5c;
  undefined1 local_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_5c != 0;
  puVar2 = local_58;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_14811ea6d(local_20,local_28,local_2c,puVar2);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811d2bc FUN_14811d2bc body=342 status=ok
// SIG undefined FUN_14811d2bc(void)

void FUN_14811d2bc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[3] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 3);
  }
  local_48[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48[4] = *plVar1;
  local_20 = (undefined4)plVar1[1];
  FUN_14811e466(local_48[3],local_48[2]);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811d41a FUN_14811d41a body=464 status=ok
// SIG undefined FUN_14811d41a(void)

void FUN_14811d41a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_14 = local_30;
  local_48 = local_34 != 0;
  FUN_14811eb7e(local_20,local_28,local_2c);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811d5ec FUN_14811d5ec body=342 status=ok
// SIG undefined FUN_14811d5ec(void)

void FUN_14811d5ec(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[3] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 3);
  }
  local_48[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48[4] = *plVar1;
  local_20 = (undefined4)plVar1[1];
  FUN_14811e129(local_48[3],local_48[2]);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811d744 FUN_14811d744 body=342 status=ok
// SIG undefined FUN_14811d744(void)

void FUN_14811d744(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[3] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 3);
  }
  local_48[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48[4] = *plVar1;
  local_20 = (undefined4)plVar1[1];
  FUN_14811e0bd(local_48[3],local_48[2]);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811d8a2 FUN_14811d8a2 body=462 status=ok
// SIG undefined FUN_14811d8a2(void)

void FUN_14811d8a2(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_44;
  undefined1 local_40 [20];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_44 != 0;
  puVar2 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_14811e8a6(local_20,local_28,local_2c,puVar2);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811da72 FUN_14811da72 body=342 status=ok
// SIG undefined FUN_14811da72(void)

void FUN_14811da72(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [5];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[3] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 3);
  }
  local_48[2] = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48[4] = *plVar1;
  local_20 = (undefined4)plVar1[1];
  FUN_14811e24a(local_48[3],local_48[2]);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811dbd0 FUN_14811dbd0 body=491 status=ok
// SIG undefined FUN_14811dbd0(void)

void FUN_14811dbd0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_5c != 0;
  puVar2 = &local_58;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_14811e9b7(local_20,local_28,local_2c,puVar2);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811ddc2 FUN_14811ddc2 body=462 status=ok
// SIG undefined FUN_14811ddc2(void)

void FUN_14811ddc2(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_4c;
  undefined1 local_48 [28];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_4c != 0;
  puVar2 = local_48;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_14811e901(local_20,local_28,local_2c,puVar2);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811df94 FUN_14811df94 body=189 status=ok
// SIG undefined FUN_14811df94(void)

double * FUN_14811df94(double *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong *plVar6;
  double dVar7;
  
  if (param_2 == 0) {
    param_1[2] = DAT_14c8464f0;
    dVar7 = DAT_14c8464e8;
    *param_1 = DAT_14c8464e0;
    param_1[1] = dVar7;
  }
  else {
    lVar5 = *(longlong *)(param_2 + 0x760);
    plVar6 = *(longlong **)(param_2 + 0x768);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    if (lVar5 == 0) {
      param_1[2] = DAT_14c8464f0;
      dVar7 = DAT_14c8464e8;
      *param_1 = DAT_14c8464e0;
      param_1[1] = dVar7;
    }
    else {
      lVar5 = *(longlong *)(lVar5 + 0x30);
      fVar3 = *(float *)(lVar5 + 0x14);
      fVar4 = *(float *)(lVar5 + 0x10);
      *param_1 = (double)*(float *)(lVar5 + 0xc) * 65536.0;
      param_1[1] = (double)fVar4 * 65536.0;
      param_1[2] = (double)fVar3 * 65536.0;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 14811e051 FUN_14811e051 body=107 status=ok
// SIG undefined FUN_14811e051(void)

void FUN_14811e051(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_145b6ca38();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 != 0) {
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    FUN_14815384e(*(undefined8 *)(lVar2 + 0x28));
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811e0bd FUN_14811e0bd body=107 status=ok
// SIG undefined FUN_14811e0bd(void)

void FUN_14811e0bd(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_145b6cb22();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 != 0) {
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    FUN_148153a1a(*(undefined8 *)(lVar2 + 0x28));
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811e129 FUN_14811e129 body=107 status=ok
// SIG undefined FUN_14811e129(void)

void FUN_14811e129(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_145b6cc0c();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 != 0) {
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    FUN_148153c1e(*(undefined8 *)(lVar2 + 0x28));
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811e196 FUN_14811e196 body=71 status=ok
// SIG undefined FUN_14811e196(void)

void FUN_14811e196(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14812fa6a();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_148131660();
      return;
    }
  }
  return;
}



// FUNCTION 14811e1de FUN_14811e1de body=107 status=ok
// SIG undefined FUN_14811e1de(void)

void FUN_14811e1de(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_145b6ccf6();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 != 0) {
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    FUN_148153e50(*(undefined8 *)(lVar2 + 0x28));
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811e24a FUN_14811e24a body=107 status=ok
// SIG undefined FUN_14811e24a(void)

void FUN_14811e24a(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_145b6cde0();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 != 0) {
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    FUN_14815408c(*(undefined8 *)(lVar2 + 0x28));
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811e2b6 FUN_14811e2b6 body=107 status=ok
// SIG undefined FUN_14811e2b6(void)

void FUN_14811e2b6(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_145b6ceca();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 != 0) {
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    FUN_1481542dc(*(undefined8 *)(lVar2 + 0x28));
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811e322 FUN_14811e322 body=107 status=ok
// SIG undefined FUN_14811e322(void)

void FUN_14811e322(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_145b6cfb4();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 != 0) {
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    FUN_1481544ac(*(undefined8 *)(lVar2 + 0x28));
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811e38e FUN_14811e38e body=107 status=ok
// SIG undefined FUN_14811e38e(void)

void FUN_14811e38e(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_145b6d09e();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 != 0) {
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    FUN_148154704(*(undefined8 *)(lVar2 + 0x28));
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811e3fa FUN_14811e3fa body=107 status=ok
// SIG undefined FUN_14811e3fa(void)

void FUN_14811e3fa(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_145b6d188();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 != 0) {
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    FUN_1481549ce(*(undefined8 *)(lVar2 + 0x28));
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811e466 FUN_14811e466 body=107 status=ok
// SIG undefined FUN_14811e466(void)

void FUN_14811e466(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_145b6d272();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 != 0) {
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    FUN_148154b9a(*(undefined8 *)(lVar2 + 0x28));
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811e4d2 FUN_14811e4d2 body=107 status=ok
// SIG undefined FUN_14811e4d2(void)

void FUN_14811e4d2(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_145b6d35c();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 != 0) {
    local_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
    uStack_2c = param_3[3];
    FUN_148154d68(*(undefined8 *)(lVar2 + 0x28));
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811e53e FUN_14811e53e body=71 status=ok
// SIG undefined FUN_14811e53e(void)

undefined8 * FUN_14811e53e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6ca38();
  lVar2 = FUN_140584a5e(uVar1,param_2,param_3);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_148154f2c(*(undefined8 *)(lVar2 + 0x28),param_1);
  }
  return param_1;
}



// FUNCTION 14811e585 FUN_14811e585 body=71 status=ok
// SIG undefined FUN_14811e585(void)

undefined8 * FUN_14811e585(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6cb22();
  lVar2 = FUN_140584a5e(uVar1,param_2,param_3);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_148155040(*(undefined8 *)(lVar2 + 0x28),param_1);
  }
  return param_1;
}



// FUNCTION 14811e5cc FUN_14811e5cc body=71 status=ok
// SIG undefined FUN_14811e5cc(void)

undefined8 * FUN_14811e5cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6cc0c();
  lVar2 = FUN_140584a5e(uVar1,param_2,param_3);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_148155184(*(undefined8 *)(lVar2 + 0x28),param_1);
  }
  return param_1;
}



// FUNCTION 14811e613 FUN_14811e613 body=71 status=ok
// SIG undefined FUN_14811e613(void)

undefined8 * FUN_14811e613(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6ccf6();
  lVar2 = FUN_140584a5e(uVar1,param_2,param_3);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_1481552de(*(undefined8 *)(lVar2 + 0x28),param_1);
  }
  return param_1;
}



// FUNCTION 14811e65a FUN_14811e65a body=71 status=ok
// SIG undefined FUN_14811e65a(void)

undefined8 * FUN_14811e65a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6cde0();
  lVar2 = FUN_140584a5e(uVar1,param_2,param_3);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_14815540e(*(undefined8 *)(lVar2 + 0x28),param_1);
  }
  return param_1;
}



// FUNCTION 14811e6a1 FUN_14811e6a1 body=71 status=ok
// SIG undefined FUN_14811e6a1(void)

undefined8 * FUN_14811e6a1(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6ceca();
  lVar2 = FUN_140584a5e(uVar1,param_2,param_3);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_1481556a2(*(undefined8 *)(lVar2 + 0x28),param_1);
  }
  return param_1;
}



// FUNCTION 14811e6e8 FUN_14811e6e8 body=71 status=ok
// SIG undefined FUN_14811e6e8(void)

undefined8 * FUN_14811e6e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6cfb4();
  lVar2 = FUN_140584a5e(uVar1,param_2,param_3);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_1481557b6(*(undefined8 *)(lVar2 + 0x28),param_1);
  }
  return param_1;
}



// FUNCTION 14811e72f FUN_14811e72f body=71 status=ok
// SIG undefined FUN_14811e72f(void)

undefined8 * FUN_14811e72f(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6d09e();
  lVar2 = FUN_140584a5e(uVar1,param_2,param_3);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_148155986(*(undefined8 *)(lVar2 + 0x28),param_1);
  }
  return param_1;
}



// FUNCTION 14811e776 FUN_14811e776 body=71 status=ok
// SIG undefined FUN_14811e776(void)

undefined8 * FUN_14811e776(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6d188();
  lVar2 = FUN_140584a5e(uVar1,param_2,param_3);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_148155af2(*(undefined8 *)(lVar2 + 0x28),param_1);
  }
  return param_1;
}



// FUNCTION 14811e7bd FUN_14811e7bd body=71 status=ok
// SIG undefined FUN_14811e7bd(void)

undefined8 * FUN_14811e7bd(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6d272();
  lVar2 = FUN_140584a5e(uVar1,param_2,param_3);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_148155c06(*(undefined8 *)(lVar2 + 0x28),param_1);
  }
  return param_1;
}



// FUNCTION 14811e804 FUN_14811e804 body=71 status=ok
// SIG undefined FUN_14811e804(void)

undefined8 * FUN_14811e804(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6d35c();
  lVar2 = FUN_140584a5e(uVar1,param_2,param_3);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_148155d2a(*(undefined8 *)(lVar2 + 0x28),param_1);
  }
  return param_1;
}



// FUNCTION 14811e84b FUN_14811e84b body=91 status=ok
// SIG undefined FUN_14811e84b(void)

void FUN_14811e84b(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  
  uVar1 = FUN_145b6ca38();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 == 0) {
    return;
  }
  FUN_148155e3a(*(undefined8 *)(lVar2 + 0x28),param_3,param_4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  return;
}



// FUNCTION 14811e8a6 FUN_14811e8a6 body=91 status=ok
// SIG undefined FUN_14811e8a6(void)

void FUN_14811e8a6(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  
  uVar1 = FUN_145b6cb22();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 == 0) {
    return;
  }
  FUN_148155f7c(*(undefined8 *)(lVar2 + 0x28),param_3,param_4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  return;
}



// FUNCTION 14811e901 FUN_14811e901 body=91 status=ok
// SIG undefined FUN_14811e901(void)

void FUN_14811e901(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  
  uVar1 = FUN_145b6cc0c();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 == 0) {
    return;
  }
  FUN_148156096(*(undefined8 *)(lVar2 + 0x28),param_3,param_4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  return;
}



// FUNCTION 14811e95c FUN_14811e95c body=91 status=ok
// SIG undefined FUN_14811e95c(void)

void FUN_14811e95c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  
  uVar1 = FUN_145b6ccf6();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 == 0) {
    return;
  }
  FUN_1481561c2(*(undefined8 *)(lVar2 + 0x28),param_3,param_4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  return;
}



// FUNCTION 14811e9b7 FUN_14811e9b7 body=91 status=ok
// SIG undefined FUN_14811e9b7(void)

void FUN_14811e9b7(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  
  uVar1 = FUN_145b6cde0();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 == 0) {
    return;
  }
  FUN_1481562e8(*(undefined8 *)(lVar2 + 0x28),param_3,param_4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  return;
}



// FUNCTION 14811ea12 FUN_14811ea12 body=91 status=ok
// SIG undefined FUN_14811ea12(void)

void FUN_14811ea12(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  
  uVar1 = FUN_145b6ceca();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 == 0) {
    return;
  }
  FUN_14815641e(*(undefined8 *)(lVar2 + 0x28),param_3,param_4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  return;
}



// FUNCTION 14811ea6d FUN_14811ea6d body=91 status=ok
// SIG undefined FUN_14811ea6d(void)

void FUN_14811ea6d(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  
  uVar1 = FUN_145b6cfb4();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 == 0) {
    return;
  }
  FUN_14815652e(*(undefined8 *)(lVar2 + 0x28),param_3,param_4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  return;
}



// FUNCTION 14811eac8 FUN_14811eac8 body=91 status=ok
// SIG undefined FUN_14811eac8(void)

void FUN_14811eac8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  
  uVar1 = FUN_145b6d09e();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 == 0) {
    return;
  }
  FUN_148156664(*(undefined8 *)(lVar2 + 0x28),param_3,param_4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  return;
}



// FUNCTION 14811eb23 FUN_14811eb23 body=91 status=ok
// SIG undefined FUN_14811eb23(void)

void FUN_14811eb23(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  
  uVar1 = FUN_145b6d188();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 == 0) {
    return;
  }
  FUN_1481567f0(*(undefined8 *)(lVar2 + 0x28),param_3,param_4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  return;
}



// FUNCTION 14811eb7e FUN_14811eb7e body=91 status=ok
// SIG undefined FUN_14811eb7e(void)

void FUN_14811eb7e(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  
  uVar1 = FUN_145b6d272();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 == 0) {
    return;
  }
  FUN_148156932(*(undefined8 *)(lVar2 + 0x28),param_3,param_4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  return;
}



// FUNCTION 14811ebd9 FUN_14811ebd9 body=91 status=ok
// SIG undefined FUN_14811ebd9(void)

void FUN_14811ebd9(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  
  uVar1 = FUN_145b6d35c();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 == 0) {
    return;
  }
  FUN_148156a6c(*(undefined8 *)(lVar2 + 0x28),param_3,param_4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
  return;
}



// FUNCTION 14811ec34 FUN_14811ec34 body=69 status=ok
// SIG undefined FUN_14811ec34(void)

undefined8 FUN_14811ec34(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6ca38();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_148156ba6(*(undefined8 *)(lVar2 + 0x28),param_3);
  return uVar1;
}



// FUNCTION 14811ec79 FUN_14811ec79 body=81 status=ok
// SIG undefined FUN_14811ec79(void)

undefined8 *
FUN_14811ec79(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6cb22();
  lVar2 = FUN_140584a5e(uVar1,param_2,param_3);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_148156cb4(*(undefined8 *)(lVar2 + 0x28),param_1,param_4);
  }
  return param_1;
}



// FUNCTION 14811ecca FUN_14811ecca body=89 status=ok
// SIG undefined FUN_14811ecca(void)

undefined8 *
FUN_14811ecca(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6cc0c();
  lVar2 = FUN_140584a5e(uVar1,param_2,param_3);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_148156df8(*(undefined8 *)(lVar2 + 0x28),param_1,param_4);
  }
  return param_1;
}



// FUNCTION 14811ed23 FUN_14811ed23 body=75 status=ok
// SIG undefined FUN_14811ed23(void)

undefined8
FUN_14811ed23(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6ccf6();
  lVar2 = FUN_140584a5e(uVar1,param_2,param_3);
  if (lVar2 != 0) {
    FUN_148156f70(*(undefined8 *)(lVar2 + 0x28),param_1,param_4);
  }
  return param_1;
}



// FUNCTION 14811ed6e FUN_14811ed6e body=103 status=ok
// SIG undefined FUN_14811ed6e(void)

undefined8 *
FUN_14811ed6e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6cde0();
  lVar2 = FUN_140584a5e(uVar1,param_2,param_3);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0x3ff0000000000000;
  }
  else {
    FUN_1481570ae(*(undefined8 *)(lVar2 + 0x28),param_1,param_4);
  }
  return param_1;
}



// FUNCTION 14811edd5 FUN_14811edd5 body=81 status=ok
// SIG undefined FUN_14811edd5(void)

undefined8 *
FUN_14811edd5(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6ceca();
  lVar2 = FUN_140584a5e(uVar1,param_2,param_3);
  if (lVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_1481571fc(*(undefined8 *)(lVar2 + 0x28),param_1,param_4);
  }
  return param_1;
}



// FUNCTION 14811ee26 FUN_14811ee26 body=85 status=ok
// SIG undefined FUN_14811ee26(void)

undefined8 *
FUN_14811ee26(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6cfb4();
  lVar2 = FUN_140584a5e(uVar1,param_2,param_3);
  if (lVar2 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_148157322(*(undefined8 *)(lVar2 + 0x28),param_1,param_4);
  }
  return param_1;
}



// FUNCTION 14811ee7b FUN_14811ee7b body=109 status=ok
// SIG undefined FUN_14811ee7b(void)

undefined8 *
FUN_14811ee7b(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6d09e();
  lVar2 = FUN_140584a5e(uVar1,param_2,param_3);
  if (lVar2 == 0) {
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_1481574c6(*(undefined8 *)(lVar2 + 0x28),param_1,param_4);
  }
  return param_1;
}



// FUNCTION 14811eee8 FUN_14811eee8 body=68 status=ok
// SIG undefined FUN_14811eee8(void)

undefined8 FUN_14811eee8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6d188();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_148157642(*(undefined8 *)(lVar2 + 0x28),param_3);
  return uVar1;
}



// FUNCTION 14811ef2c FUN_14811ef2c body=68 status=ok
// SIG undefined FUN_14811ef2c(void)

undefined8 FUN_14811ef2c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_145b6d272();
  lVar2 = FUN_140584a5e(uVar1,param_1,param_2);
  if (lVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_148157742(*(undefined8 *)(lVar2 + 0x28),param_3);
  return uVar1;
}



// FUNCTION 14811ef70 FUN_14811ef70 body=74 status=ok
// SIG undefined FUN_14811ef70(void)

ulonglong FUN_14811ef70(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_145b6d35c();
  lVar3 = FUN_140584a5e(uVar2,param_1,param_2);
  bVar1 = 0;
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    bVar1 = FUN_148157842(uVar2,param_3);
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),lVar3 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 14811efce FUN_14811efce body=215 status=ok
// SIG undefined FUN_14811efce(void)

void FUN_14811efce(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = FUN_145ef8526();
  plVar4 = (longlong *)FUN_147973140(uVar3,*(undefined4 *)(param_1 + 0x38));
  if (plVar4 != (longlong *)0x0) {
    *(undefined1 *)(param_1 + 0x48) = 1;
    lVar5 = *(longlong *)(param_1 + 0x40);
    if (lVar5 == 0) {
      lVar5 = (**(code **)(*plVar4 + 0x88))(plVar4);
    }
    local_20 = *(longlong *)(param_1 + 0x10);
    if (local_20 == 0) {
      local_20 = 0;
      local_28 = 0;
    }
    else {
      iVar2 = *(int *)(local_20 + 8);
      local_28 = 0;
      do {
        if (iVar2 == 0) {
          local_20 = 0;
          goto LAB_14811f046;
        }
        LOCK();
        iVar1 = *(int *)(local_20 + 8);
        bVar6 = iVar2 == iVar1;
        if (bVar6) {
          *(int *)(local_20 + 8) = iVar2 + 1;
          iVar1 = iVar2;
        }
        iVar2 = iVar1;
        UNLOCK();
      } while (!bVar6);
      local_28 = *(undefined8 *)(param_1 + 8);
    }
LAB_14811f046:
    (**(code **)(*plVar4 + 0x90))(plVar4,&local_28,lVar5);
    local_30 = 0;
    FUN_14340dba2(&local_30);
    FUN_14340da64(&local_30,0);
    FUN_14340cba6(&local_30);
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14811f0a6 FUN_14811f0a6 body=8 status=ok
// SIG undefined FUN_14811f0a6(void)

float FUN_14811f0a6(longlong param_1)

{
  return (float)*(int *)(param_1 + 0x1c);
}



// FUNCTION 14811f0ae FUN_14811f0ae body=4 status=ok
// SIG undefined FUN_14811f0ae(void)

undefined4 FUN_14811f0ae(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



// FUNCTION 14811f0b2 FUN_14811f0b2 body=115 status=ok
// SIG undefined FUN_14811f0b2(void)

undefined8 * FUN_14811f0b2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3aba8) {
    FUN_144b3d300(&DAT_14cb3aba8);
    if (DAT_14cb3aba8 == -1) {
      FUN_140056680(&DAT_14cb3ab98,L"NiagaraSubmixListener");
      atexit((_func_5014 *)&LAB_143a08c70);
      _Init_thread_footer(&DAT_14cb3aba8);
    }
  }
  return &DAT_14cb3ab98;
}



// FUNCTION 14811f144 FUN_14811f144 body=150 status=ok
// SIG undefined FUN_14811f144(void)

undefined8 * FUN_14811f144(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14adbb060;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  memset(param_1 + 0xc,0,0xa8);
  FUN_145afe678(param_1 + 0xc);
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = param_2;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  return param_1;
}



// FUNCTION 14811f1da FUN_14811f1da body=107 status=ok
// SIG undefined FUN_14811f1da(void)

void FUN_14811f1da(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_145ef8526();
  if (lVar1 != 0) {
    local_48 = 0;
    local_38 = &PTR_LAB_14adc1310;
    local_58 = &LAB_143a2a4ac;
    local_30 = param_1;
    FUN_14797347e(lVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811f246 FUN_14811f246 body=250 status=ok
// SIG undefined FUN_14811f246(void)

void FUN_14811f246(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x118) == 0) {
    FUN_148157c74(local_60,param_1,&LAB_14811f342);
    FUN_145ca0b8c(&DAT_14caced90,&local_68,local_60);
    FUN_1401cb1ee(local_60);
    *(undefined8 *)(param_1 + 0x118) = local_68;
  }
  if (*(longlong *)(param_1 + 0x120) == 0) {
    FUN_148157c74(local_60,param_1,&LAB_14811f350);
    FUN_145ca0b8c(&DAT_14cacedd0,&local_68,local_60);
    FUN_1401cb1ee(local_60);
    *(undefined8 *)(param_1 + 0x120) = local_68;
  }
  if (*(char *)(param_1 + 0x110) == '\x01') {
    FUN_148157944(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x108) = param_2;
  FUN_14811f1da(param_1);
  *(undefined1 *)(param_1 + 0x110) = 1;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811f35e FUN_14811f35e body=383 status=ok
// SIG undefined FUN_14811f35e(void)

void FUN_14811f35e(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  uint local_64;
  uint *local_60;
  longlong **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_64 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14adc1ac0;
  lVar6 = *(longlong *)(param_1 + 0x108);
  uVar3 = *(undefined4 *)(param_1 + 0x114);
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14adc1ae0;
  *(undefined4 *)(plVar4 + 5) = 0;
  *(undefined4 *)((longlong)plVar4 + 0x2c) = 0;
  FUN_14703854a(param_1 + 0x60,plVar4 + 6,uVar3,0x3f800000);
  *(uint *)(plVar4 + 9) = param_2;
  plVar4[10] = lVar6;
  *(undefined1 *)(plVar4 + 0xb) = 0;
  local_78 = plVar4 + 2;
  local_70 = plVar4;
  FUN_148157f32(&local_78,plVar4 + 2);
  local_60 = &local_64;
  local_58 = &local_78;
  FUN_148157fda((longlong *)(param_1 + 0x10),local_4c);
  plVar4 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)();
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
  }
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar6 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x50);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & local_64) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x10);
      do {
        lVar7 = lVar6 + (longlong)iVar5 * 0x20;
        if (*(uint *)(lVar6 + (longlong)iVar5 * 0x20) == local_64) goto LAB_14811f48f;
        iVar5 = *(int *)(lVar7 + 0x18);
      } while (iVar5 != -1);
    }
  }
  lVar7 = 0;
LAB_14811f48f:
  FUN_14811efce(*(undefined8 *)(lVar7 + 8));
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14811f530 FUN_14811f530 body=228 status=ok
// SIG undefined FUN_14811f530(void)

int FUN_14811f530(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  uint *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (uint *)0x0;
  uStack_30 = 0;
  FUN_14811f616((longlong *)(param_1 + 0x10),&local_38);
  if ((longlong)(int)uStack_30 == 0) {
    iVar2 = 0;
  }
  else {
    puVar1 = local_38;
    do {
      if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
        lVar3 = *(longlong *)(param_1 + 0x50);
        if (*(longlong *)(param_1 + 0x50) == 0) {
          lVar3 = param_1 + 0x48;
        }
        iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & *puVar1) * 4);
        if (iVar2 != -1) {
          lVar3 = *(longlong *)(param_1 + 0x10);
          do {
            lVar4 = lVar3 + (longlong)iVar2 * 0x20;
            if (*(uint *)(lVar3 + (longlong)iVar2 * 0x20) == *puVar1) goto LAB_14811f588;
            iVar2 = *(int *)(lVar4 + 0x18);
          } while (iVar2 != -1);
        }
      }
      lVar4 = 0;
LAB_14811f588:
      iVar2 = *(int *)(*(longlong *)(lVar4 + 8) + 0x18);
    } while ((iVar2 == 0) && (puVar1 = puVar1 + 1, puVar1 != local_38 + (int)uStack_30));
  }
  if (local_38 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 14811f616 FUN_14811f616 body=704 status=ok
// SIG undefined FUN_14811f616(void)

void FUN_14811f616(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_14480809c(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_146b7f620(&local_98,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar3)) {
      local_50 = iVar3;
      FUN_1449809d4();
    }
  }
  iVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
    FUN_14480809c(param_2);
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = param_1;
  if (iStack_a4 < (int)local_b0[3]) {
    do {
      lVar1 = *local_e0;
      lVar5 = (longlong)iStack_c4;
      if ((int)uStack_90 != local_64) {
        uVar4 = *(uint *)(lVar1 + lVar5 * 0x20);
        puVar2 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar2 = local_60;
        }
        for (iVar3 = *(int *)(puVar2 + (ulonglong)(local_50 - 1U & uVar4) * 4); iVar3 != -1;
            iVar3 = *(int *)(local_98 + (longlong)iVar3 * 0xc + 4)) {
          if (*(uint *)(local_98 + (longlong)iVar3 * 0xc) == uVar4) goto LAB_14811f7b8;
        }
      }
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447808da(param_2,iVar3);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar3 * 4) = *(undefined4 *)(lVar1 + lVar5 * 0x20);
      FUN_144980568(&local_98,&local_b8,(longlong)iStack_c4 * 0x20 + *local_e0,0);
LAB_14811f7b8:
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (iStack_c4 < (int)local_d0[3]);
  }
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(&local_98);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811f8d8 FUN_14811f8d8 body=250 status=ok
// SIG undefined FUN_14811f8d8(void)

float FUN_14811f8d8(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_68 [32];
  uint *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (uint *)0x0;
  uStack_40 = 0;
  FUN_14811f616((longlong *)(param_1 + 0x10),&local_48);
  if ((longlong)(int)uStack_40 == 0) {
    fVar5 = 0.0;
  }
  else {
    puVar1 = local_48;
    do {
      if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
        lVar2 = *(longlong *)(param_1 + 0x50);
        if (*(longlong *)(param_1 + 0x50) == 0) {
          lVar2 = param_1 + 0x48;
        }
        iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & *puVar1) * 4);
        if (iVar3 != -1) {
          lVar2 = *(longlong *)(param_1 + 0x10);
          do {
            lVar4 = lVar2 + (longlong)iVar3 * 0x20;
            if (*(uint *)(lVar2 + (longlong)iVar3 * 0x20) == *puVar1) goto LAB_14811f931;
            iVar3 = *(int *)(lVar4 + 0x18);
          } while (iVar3 != -1);
        }
      }
      lVar4 = 0;
LAB_14811f931:
      iVar3 = *(int *)(*(longlong *)(lVar4 + 8) + 0x1c);
      if (0 < iVar3) {
        fVar5 = (float)iVar3;
        goto LAB_14811f9a2;
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != local_48 + (int)uStack_40);
    fVar5 = 0.0;
  }
LAB_14811f9a2:
  if (local_48 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar5;
}



// FUNCTION 14811f9d4 FUN_14811f9d4 body=9 status=ok
// SIG undefined FUN_14811f9d4(void)

void FUN_14811f9d4(longlong param_1)

{
  FUN_1470386d8(param_1 + 0x60);
  return;
}



// FUNCTION 14811f9de FUN_14811f9de body=9 status=ok
// SIG undefined FUN_14811f9de(void)

void FUN_14811f9de(longlong param_1)

{
  FUN_147038998(param_1 + 0x60);
  return;
}



// FUNCTION 14811f9ec FUN_14811f9ec body=81 status=ok
// SIG undefined FUN_14811f9ec(void)

ulonglong FUN_14811f9ec(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 unaff_RDI;
  undefined7 uVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    bVar3 = false;
    uVar2 = 0;
  }
  else {
    bVar3 = *(longlong *)(param_2 + 0x10) == *(longlong *)(param_1 + 0x10);
    uVar2 = (undefined7)((ulonglong)unaff_RDI >> 8);
  }
  lVar1 = *(longlong *)(param_1 + 0x38);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  return CONCAT71(uVar2,bVar3 & *(longlong *)(param_2 + 0x38) == lVar1) & 0xffffffff;
}



// FUNCTION 14811fa3e FUN_14811fa3e body=49 status=ok
// SIG undefined FUN_14811fa3e(void)

void FUN_14811fa3e(longlong param_1)

{
  FUN_1446e0b6e();
  FUN_144757f48(param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00014811fa6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x70))
            (*(longlong **)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38));
  return;
}



// FUNCTION 14811fa70 FUN_14811fa70 body=109 status=ok
// SIG undefined FUN_14811fa70(void)

undefined8 FUN_14811fa70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145a79268();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = *(longlong *)(param_1 + 0x38);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar1 = *(longlong *)(param_1 + 0x38);
        }
      }
      *(longlong *)(param_2 + 0x38) = lVar1;
      (**(code **)(**(longlong **)(param_2 + 0x28) + 0x70))
                (*(longlong **)(param_2 + 0x28),*(undefined8 *)(param_1 + 0x38));
    }
  }
  return 1;
}



// FUNCTION 14811faf4 FUN_14811faf4 body=45 status=ok
// SIG undefined FUN_14811faf4(void)

longlong FUN_14811faf4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1403aec46(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14811fb22 FUN_14811fb22 body=48 status=ok
// SIG undefined FUN_14811fb22(void)

longlong FUN_14811fb22(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_1403aec46(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14811fb52 FUN_14811fb52 body=48 status=ok
// SIG undefined FUN_14811fb52(void)

longlong FUN_14811fb52(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_1403aec46(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14811fb82 FUN_14811fb82 body=48 status=ok
// SIG undefined FUN_14811fb82(void)

longlong FUN_14811fb82(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_1403aec46(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14811fbc4 FUN_14811fbc4 body=45 status=ok
// SIG undefined FUN_14811fbc4(void)

longlong FUN_14811fbc4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d49c12(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14811fbf2 FUN_14811fbf2 body=48 status=ok
// SIG undefined FUN_14811fbf2(void)

longlong FUN_14811fbf2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145d49c12(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14811fc22 FUN_14811fc22 body=48 status=ok
// SIG undefined FUN_14811fc22(void)

longlong FUN_14811fc22(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145d49c12(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14811fc52 FUN_14811fc52 body=48 status=ok
// SIG undefined FUN_14811fc52(void)

longlong FUN_14811fc52(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145d49c12(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14811fc82 FUN_14811fc82 body=42 status=ok
// SIG undefined FUN_14811fc82(void)

undefined8 FUN_14811fc82(void)

{
  FUN_140033559("..\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannel.h",0xb4,
                L"Pure virtual not implemented (%s)",L"UNiagaraDataChannel::CreateHandler");
  return 0;
}



// FUNCTION 14811fcc2 FUN_14811fcc2 body=63 status=ok
// SIG undefined FUN_14811fcc2(void)

undefined8 * FUN_14811fcc2(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  param_1[-7] = &PTR_FUN_14adb0b80;
  *param_1 = &PTR_FUN_14adb0fc0;
  FUN_1403159fa(puVar1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(puVar1);
  }
  return puVar1;
}



// FUNCTION 14811fd80 FUN_14811fd80 body=73 status=ok
// SIG undefined FUN_14811fd80(void)

undefined8 * FUN_14811fd80(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14adc1ae0;
  FUN_145be9032(param_1 + 4);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14811fdca FUN_14811fdca body=38 status=ok
// SIG undefined FUN_14811fdca(void)

undefined8 FUN_14811fdca(undefined8 param_1,int param_2)

{
  FUN_1403aed04();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14811fe08 FUN_14811fe08 body=63 status=ok
// SIG undefined FUN_14811fe08(void)

undefined1 FUN_14811fe08(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14811ff30(param_2,param_3);
    param_3 = param_3 + 0x2d0;
    param_2 = param_2 + 0x2d0;
  }
  return 1;
}



// FUNCTION 14811fe70 FUN_14811fe70 body=59 status=ok
// SIG undefined FUN_14811fe70(void)

undefined8 FUN_14811fe70(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14811febc FUN_14811febc body=38 status=ok
// SIG undefined FUN_14811febc(void)

void FUN_14811febc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x2d0) == '\x01') {
    FUN_14078dd92(param_2);
    *(undefined1 *)(param_2 + 0x2d0) = 0;
  }
  return;
}



// FUNCTION 14811ff30 FUN_14811ff30 body=98 status=ok
// SIG undefined FUN_14811ff30(void)

longlong FUN_14811ff30(longlong param_1,longlong param_2)

{
  FUN_1478990ac();
  FUN_1402ae190(param_1 + 0x1d0,param_2 + 0x1d0);
  FUN_14043b6da(param_1 + 600,param_2 + 600);
  FUN_14054c6c4(param_1 + 0x2a8,param_2 + 0x2a8);
  FUN_14054c6c4(param_1 + 0x2b8,param_2 + 0x2b8);
  return param_1;
}



// FUNCTION 14811ffbc FUN_14811ffbc body=104 status=ok
// SIG undefined FUN_14811ffbc(void)

undefined1 FUN_14811ffbc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14812004c FUN_14812004c body=59 status=ok
// SIG undefined FUN_14812004c(void)

undefined8 FUN_14812004c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148120122 FUN_148120122 body=54 status=ok
// SIG undefined FUN_148120122(void)

undefined1 FUN_148120122(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14812023a(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 148120180 FUN_148120180 body=59 status=ok
// SIG undefined FUN_148120180(void)

undefined8 FUN_148120180(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481201c6 FUN_1481201c6 body=37 status=ok
// SIG undefined FUN_1481201c6(void)

void FUN_1481201c6(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14812023a FUN_14812023a body=79 status=ok
// SIG undefined FUN_14812023a(void)

undefined8 * FUN_14812023a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14812028a(param_1,iVar1);
      FUN_1481202ec(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14812028a FUN_14812028a body=98 status=ok
// SIG undefined FUN_14812028a(void)

void FUN_14812028a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1481202ec FUN_1481202ec body=100 status=ok
// SIG undefined FUN_1481202ec(void)

void FUN_1481202ec(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3);
      *(longlong *)(param_1 + lVar3) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(undefined8 *)(param_1 + 8 + lVar3) = *(undefined8 *)(param_2 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148120352 FUN_148120352 body=95 status=ok
// SIG undefined FUN_148120352(void)

void FUN_148120352(undefined8 param_1,longlong param_2)

{
  FUN_140120f5c(param_2);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x47) = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xffffffff;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)(param_2 + 0x8c) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined4 *)(param_2 + 0xa0) = 0;
  return;
}



// FUNCTION 1481203d0 FUN_1481203d0 body=63 status=ok
// SIG undefined FUN_1481203d0(void)

undefined1 FUN_1481203d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1481204fa(param_2,param_3);
    param_3 = param_3 + 0xa8;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 148120438 FUN_148120438 body=59 status=ok
// SIG undefined FUN_148120438(void)

undefined8 FUN_148120438(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148120484 FUN_148120484 body=40 status=ok
// SIG undefined FUN_148120484(void)

void FUN_148120484(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_1459ac210(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 1481204fa FUN_1481204fa body=138 status=ok
// SIG undefined FUN_1481204fa(void)

undefined8 * FUN_1481204fa(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_1447a122a(param_1 + 2,param_2 + 2);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 5);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x2e) = *(undefined8 *)((longlong)param_2 + 0x2e);
  param_1[7] = param_2[7];
  lVar4 = param_2[8];
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[8];
    }
  }
  param_1[8] = lVar4;
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  FUN_14058acb2(param_1 + 0xb,param_2 + 0xb);
  return param_1;
}



// FUNCTION 148120586 FUN_148120586 body=42 status=ok
// SIG undefined FUN_148120586(void)

undefined8 FUN_148120586(void)

{
  FUN_140033559("..\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h",
                0x132,L"Pure virtual not implemented (%s)",
                L"UNiagaraRendererProperties::CreateEmitterRenderer");
  return 0;
}



// FUNCTION 1481205b0 FUN_1481205b0 body=42 status=ok
// SIG undefined FUN_1481205b0(void)

undefined8 FUN_1481205b0(void)

{
  FUN_140033559("..\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h",
                0x133,L"Pure virtual not implemented (%s)",
                L"UNiagaraRendererProperties::CreateBoundsCalculator");
  return 0;
}



// FUNCTION 1481205da FUN_1481205da body=41 status=ok
// SIG undefined FUN_1481205da(void)

void FUN_1481205da(void)

{
  FUN_140033559("..\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h",
                0x134,L"Pure virtual not implemented (%s)",
                L"UNiagaraRendererProperties::GetUsedMaterials");
  return;
}



// FUNCTION 14812060a FUN_14812060a body=242 status=ok
// SIG undefined FUN_14812060a(void)

undefined8 * FUN_14812060a(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  local_48 = (undefined4)*param_2;
  uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_40 = (undefined4)param_2[1];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  iVar1 = FUN_144aff2e5(&local_48,0x3a,0);
  if (iVar1 != -1) {
    uVar2 = *(uint *)(param_2 + 1);
    uVar7 = iVar1 + 1;
    if ((int)uVar7 < (int)uVar2) {
      uVar4 = (int)uVar2 >> 0x1f & uVar2;
      iVar5 = uVar2 - uVar4;
      if (iVar1 < iVar5) {
        iVar5 = iVar1;
      }
      if (iVar5 < 1) {
        iVar5 = 0;
      }
      FUN_1446f82e2(&local_48,iVar5,(longlong)(int)uVar4 * 2 + *param_2,1);
      *param_1 = CONCAT44(uStack_44,local_48);
      iVar1 = (int)param_2[1];
      uVar2 = (int)uVar7 >> 0x1f & uVar7;
      iVar5 = uVar7 - uVar2;
      iVar3 = uVar2 + 0x7fffffff;
      if (iVar1 <= iVar5) {
        iVar5 = iVar1;
      }
      iVar6 = iVar1 - iVar5;
      if (iVar3 < iVar1 - iVar5) {
        iVar6 = iVar3;
      }
      if (iVar6 < 1) {
        iVar6 = 0;
      }
      FUN_1446f82e2(&local_48,iVar6,(longlong)iVar5 * 2 + *param_2,1);
      param_1[1] = CONCAT44(uStack_44,local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481206fe FUN_1481206fe body=386 status=ok
// SIG undefined FUN_1481206fe(void)

undefined4 * FUN_1481206fe(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148120af8(param_1,local_48);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)local_40 = *param_3;
  *(undefined4 *)((longlong)local_40 + 4) = uVar3;
  *(undefined4 *)(local_40 + 1) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar5;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar2 = local_40[1];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar13 = (uint)uVar2 & 0xffff;
  uVar9 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  uVar8 = FUN_144a78877(((uint)uVar1 << 0x10 | uVar7) + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar7 >> 4),
                        ((uint)uVar2 << 0x10 | uVar13) + (int)((ulonglong)uVar2 >> 0x20) +
                        (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar13 >> 4));
  cVar6 = FUN_148120bde(param_1,uVar8,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_148120cd8(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148120882 FUN_148120882 body=627 status=ok
// SIG undefined FUN_148120882(void)

undefined8 * FUN_148120882(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar8 != 0) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar8);
    }
    FUN_148120efc(param_2,uVar8);
    iVar5 = 1;
    if (3 < uVar8) {
      uVar8 = (uVar8 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar5)) {
      *(int *)(param_2 + 9) = iVar5;
      FUN_148120cd8(param_2);
    }
  }
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_68);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = param_1;
  if (iStack_54 < (int)local_60[3]) {
    do {
      lVar1 = *local_90;
      lVar6 = (longlong)iStack_74;
      uVar2 = *(undefined8 *)(lVar1 + lVar6 * 0x18);
      uVar3 = *(undefined8 *)(lVar1 + 8 + lVar6 * 0x18);
      uVar8 = (uint)((ulonglong)uVar3 >> 0x10);
      uVar9 = (uint)uVar3 & 0xffff;
      uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar10 = (uint)uVar2 & 0xffff;
      uVar8 = FUN_144a78877(((uint)uVar2 << 0x10 | uVar10) + (int)((ulonglong)uVar2 >> 0x20) +
                            (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar10 >> 4),
                            ((uint)uVar3 << 0x10 | uVar9) + (int)((ulonglong)uVar3 >> 0x20) +
                            (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar9 >> 4));
      if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
        plVar7 = (longlong *)param_3[8];
        if ((longlong *)param_3[8] == (longlong *)0x0) {
          plVar7 = param_3 + 7;
        }
        iVar5 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_3[9] - 1U & uVar8) * 4);
        if (iVar5 != -1) {
          plVar7 = (longlong *)(lVar1 + lVar6 * 0x18);
          lVar1 = *param_3;
          do {
            lVar6 = (longlong)iVar5;
            if ((*(longlong *)(lVar1 + lVar6 * 0x18) == *plVar7) &&
               (*(longlong *)(lVar1 + 8 + lVar6 * 0x18) == plVar7[1])) goto LAB_148120a5f;
            iVar5 = *(int *)(lVar1 + lVar6 * 0x18 + 0x10);
          } while (iVar5 != -1);
        }
      }
      FUN_148121098(param_2,&local_68,(longlong)iStack_74 * 0x18 + *local_90);
LAB_148120a5f:
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < (int)local_80[3]);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148120af8 FUN_148120af8 body=230 status=ok
// SIG undefined FUN_148120af8(void)

int * FUN_148120af8(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1403951a8(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 148120bde FUN_148120bde body=136 status=ok
// SIG undefined FUN_148120bde(void)

undefined8 FUN_148120bde(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if ((*plVar5 == *param_3) &&
           (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x18) == param_3[1])) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_148120c66((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 148120c66 FUN_148120c66 body=114 status=ok
// SIG undefined FUN_148120c66(void)

void FUN_148120c66(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 148120cd8 FUN_148120cd8 body=547 status=ok
// SIG undefined FUN_148120cd8(void)

void FUN_148120cd8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar13 = (longlong)iVar6;
        uVar4 = *(undefined8 *)(lVar3 + lVar13 * 0x18);
        uVar5 = *(undefined8 *)(lVar3 + 8 + lVar13 * 0x18);
        uVar2 = (uint)((ulonglong)uVar5 >> 0x10);
        uVar11 = (uint)uVar5 & 0xffff;
        uVar10 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar12 = (uint)uVar4 & 0xffff;
        iVar7 = FUN_144a78877(((uint)uVar4 << 0x10 | uVar12) + (int)((ulonglong)uVar4 >> 0x20) +
                              (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar12 >> 4),
                              ((uint)uVar5 << 0x10 | uVar11) + (int)((ulonglong)uVar5 >> 0x20) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar11 >> 4));
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar3 + 0x14 + lVar13 * 0x18) = iVar7;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar13 * 0x18) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148120efc FUN_148120efc body=411 status=ok
// SIG undefined FUN_148120efc(void)

void FUN_148120efc(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1405357e8(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1403951a8(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -6;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 148121098 FUN_148121098 body=386 status=ok
// SIG undefined FUN_148121098(void)

undefined4 * FUN_148121098(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148120af8(param_1,local_48);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)local_40 = *param_3;
  *(undefined4 *)((longlong)local_40 + 4) = uVar3;
  *(undefined4 *)(local_40 + 1) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar5;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar2 = local_40[1];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar13 = (uint)uVar2 & 0xffff;
  uVar9 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  uVar8 = FUN_144a78877(((uint)uVar1 << 0x10 | uVar7) + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar7 >> 4),
                        ((uint)uVar2 << 0x10 | uVar13) + (int)((ulonglong)uVar2 >> 0x20) +
                        (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar13 >> 4));
  cVar6 = FUN_148120bde(param_1,uVar8,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar10 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_148120cd8(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14812121c FUN_14812121c body=105 status=ok
// SIG undefined FUN_14812121c(void)

LPCRITICAL_SECTION FUN_14812121c(LPCRITICAL_SECTION param_1)

{
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].SpinCount = 0;
  *(undefined4 *)&param_1[2].DebugInfo = 0;
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  param_1[1].RecursionCount = 0;
  *(undefined8 *)((longlong)&param_1[2].DebugInfo + 4) = 0xffffffff00000080;
  param_1[2].RecursionCount = 0;
  param_1[2].LockSemaphore = (HANDLE)0x0;
  *(undefined4 *)&param_1[2].SpinCount = 0;
  param_1[3].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[3].LockCount = 0;
  param_1[3].RecursionCount = 0;
  param_1[3].OwningThread = (HANDLE)0x0;
  param_1[3].LockSemaphore = (HANDLE)0x0;
  FUN_14020fad6(&param_1[3].OwningThread,&DAT_149e2b65a);
  return param_1;
}


