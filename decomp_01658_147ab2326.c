// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147ab2326 FUN_147ab2326 body=341 status=ok
// SIG undefined FUN_147ab2326(void)

void FUN_147ab2326(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = 0;
  uStack_3c = 0x3ff00000;
  local_38 = 0x3ff0000000000000;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar2 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x648))(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab247c FUN_147ab247c body=250 status=ok
// SIG undefined FUN_147ab247c(void)

void FUN_147ab247c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x650))(param_1,local_28,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab25b6 FUN_147ab25b6 body=121 status=ok
// SIG undefined FUN_147ab25b6(void)

int FUN_147ab25b6(undefined8 param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar2 = FUN_1447210f0();
  if (*(int *)(lVar2 + 0x238) < 1) {
    iVar4 = 0;
  }
  else {
    iVar5 = 0;
    lVar6 = 0;
    iVar4 = 0;
    do {
      lVar3 = FUN_14479d2ce(*(longlong *)(lVar2 + 0x230) + lVar6);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x398) != 0)) {
        bVar1 = FUN_1414077a0(param_1,lVar3);
        iVar4 = iVar4 + (uint)(bVar1 ^ 1);
      }
      lVar6 = lVar6 + 8;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(lVar2 + 0x238));
  }
  return iVar4;
}



// FUNCTION 147ab2630 FUN_147ab2630 body=119 status=ok
// SIG undefined FUN_147ab2630(void)

int FUN_147ab2630(undefined8 param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar2 = FUN_1447210f0();
  if (*(int *)(lVar2 + 0x238) < 1) {
    iVar4 = 0;
  }
  else {
    iVar5 = 0;
    lVar6 = 0;
    iVar4 = 0;
    do {
      lVar3 = FUN_14479d2ce(*(longlong *)(lVar2 + 0x230) + lVar6);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x398) != 0)) {
        bVar1 = FUN_1414077a0(param_1,lVar3);
        iVar4 = iVar4 + (uint)bVar1;
      }
      lVar6 = lVar6 + 8;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(lVar2 + 0x238));
  }
  return iVar4;
}



// FUNCTION 147ab26ee FUN_147ab26ee body=82 status=ok
// SIG undefined FUN_147ab26ee(void)

void FUN_147ab26ee(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + *param_1);
  FUN_1449db362(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar1) << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_147ad0f24(param_1);
  return;
}



// FUNCTION 147ab274c FUN_147ab274c body=31 status=ok
// SIG undefined FUN_147ab274c(void)

void FUN_147ab274c(longlong *param_1)

{
  FUN_1478b8668();
                    /* WARNING: Could not recover jumptable at 0x000147ab2764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6a0))(param_1);
  return;
}



// FUNCTION 147ab2788 FUN_147ab2788 body=349 status=ok
// SIG undefined FUN_147ab2788(void)

void FUN_147ab2788(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong *)param_1[0x7d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x7d] + 0x6c0))();
  }
  local_58 = 0;
  uStack_50 = 0;
  lVar5 = FUN_1447210f0(param_1);
  if (0 < *(int *)(lVar5 + 0x228)) {
    iVar8 = 0;
    lVar9 = 0;
    do {
      uVar6 = FUN_14479d2ce(*(longlong *)(lVar5 + 0x220) + lVar9);
      uVar2 = uStack_50;
      lVar10 = (longlong)(int)uStack_50;
      uVar4 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
      if (uStack_50._4_4_ < uVar4) {
        FUN_14095e928(&local_58,uVar2 & 0xffffffff);
      }
      lVar1 = local_58;
      *(undefined8 *)(local_58 + lVar10 * 8) = uVar6;
      lVar9 = lVar9 + 8;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(lVar5 + 0x228));
    lVar5 = (longlong)(int)uStack_50;
    if (lVar5 != 0) {
      lVar9 = 0;
      do {
        lVar10 = *(longlong *)(lVar1 + lVar9);
        local_60 = lVar10;
        if (*(longlong *)(lVar10 + 0x398) != 0) {
          if (lVar10 != 0) {
            lVar7 = FUN_144a75eb4();
            if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                  (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
               (cVar3 = FUN_140496a74(lVar10), cVar3 == '\0')) goto LAB_147ab2894;
          }
          (**(code **)(*param_1 + 0x730))(param_1,&local_60);
        }
LAB_147ab2894:
        lVar9 = lVar9 + 8;
      } while (lVar5 * 8 != lVar9);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ab28ea FUN_147ab28ea body=132 status=ok
// SIG undefined FUN_147ab28ea(void)

void FUN_147ab28ea(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_1[0x7b];
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_38 = &local_30;
  (**(code **)(*param_1 + 0x830))(param_1,param_2,param_3,param_4);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab2970 FUN_147ab2970 body=77 status=ok
// SIG undefined FUN_147ab2970(void)

void FUN_147ab2970(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x82) & 2) == 0) {
    cVar1 = FUN_1414077a0();
    if (cVar1 == '\0') {
      cVar1 = FUN_14603e1e4(param_1,param_2);
      if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147ab29ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x7a0))(param_1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147ab29d0 FUN_147ab29d0 body=19 status=ok
// SIG undefined FUN_147ab29d0(void)

bool FUN_147ab29d0(void)

{
  int iVar1;
  
  iVar1 = FUN_14487fd02();
  return iVar1 == 0;
}



// FUNCTION 147ab2a0a FUN_147ab2a0a body=95 status=ok
// SIG undefined FUN_147ab2a0a(void)

int FUN_147ab2a0a(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_1447210f0();
  if (*(longlong **)(lVar3 + 0x170) == (longlong *)0x0) {
    iVar2 = 1;
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(lVar3 + 0x170) + 0x6b0))();
    iVar2 = 1;
    if (1 < iVar1) {
      iVar2 = iVar1;
    }
  }
  iVar2 = *(int *)(param_1 + 0x3a8) / iVar2;
  if (*(int *)(param_1 + 0x3b0) <= iVar2) {
    iVar2 = *(int *)(param_1 + 0x3b0);
  }
  if (iVar2 < *(int *)(param_1 + 0x3ac)) {
    iVar2 = *(int *)(param_1 + 0x3ac);
  }
  return iVar2;
}



// FUNCTION 147ab2a6c FUN_147ab2a6c body=130 status=ok
// SIG undefined FUN_147ab2a6c(void)

undefined8 FUN_147ab2a6c(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  plVar4 = *(longlong **)(param_1 + 0x10);
  lVar5 = plVar4[0x22];
  if (lVar5 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar5 = plVar4[0x22];
  }
  return CONCAT71((int7)((ulonglong)lVar5 >> 8),
                  dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2 < (double)*(float *)(lVar5 + 0x3d8))
  ;
}



// FUNCTION 147ab2aee FUN_147ab2aee body=540 status=ok
// SIG undefined FUN_147ab2aee(void)

void FUN_147ab2aee(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_144a64e42();
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_34;
  local_48 = local_30;
  FUN_147ab2d0c(local_18,local_20,local_28,local_2c);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab2d0c FUN_147ab2d0c body=231 status=ok
// SIG undefined FUN_147ab2d0c(void)

void FUN_147ab2d0c(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48 [8];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb0d2b0 != (longlong *)0x0 && param_2 != 0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar1 != '\0') {
      lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x156) & 2) != 0)) {
        FUN_14051bf56(lVar2,local_48);
        if (local_40 != 0) {
          local_50 = param_6;
          local_58 = param_5;
          FUN_147961608(local_40,param_2,param_3,param_4);
        }
        FUN_14051bf10(local_48);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab2df4 FUN_147ab2df4 body=163 status=ok
// SIG undefined FUN_147ab2df4(void)

void FUN_147ab2df4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ab2e98(local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab2e98 FUN_147ab2e98 body=106 status=ok
// SIG undefined FUN_147ab2e98(void)

void FUN_147ab2e98(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (1 < *(int *)(param_1 + 8)) {
    plVar2 = *(longlong **)(DAT_14c98e618 + 200);
    plVar3 = *(longlong **)(DAT_14c98e618 + 0xd0);
    if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ab2eff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
      return;
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    (**(code **)(*plVar2 + 0x28))();
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
                    /* WARNING: Could not recover jumptable at 0x000147ab2eef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147ab2f02 FUN_147ab2f02 body=495 status=ok
// SIG undefined FUN_147ab2f02(void)

void FUN_147ab2f02(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_40;
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_58 = &local_48;
  uVar1 = FUN_147ab30f2(local_20,local_24,local_30,local_38);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab30f2 FUN_147ab30f2 body=344 status=ok
// SIG undefined FUN_147ab30f2(void)

void FUN_147ab30f2(longlong *param_1,float param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = 0;
  if ((param_1 == (longlong *)0x0) || ((param_2 == 0.0 && (!NAN(param_2))))) goto LAB_147ab31d9;
  lVar2 = *param_5;
  if (lVar2 == 0) {
LAB_147ab316d:
    lVar2 = FUN_1411311bc(uVar3);
    if (lVar2 != 0 && DAT_14c950c29 == 1) {
LAB_147ab321b:
      FUN_1456cec3c(lVar2);
    }
  }
  else {
    lVar1 = FUN_1411311bc(0);
    uVar3 = extraout_XMM0_Da;
    if ((((lVar1 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
         lVar1 + 0x30)) || (lVar2 = *param_5, lVar2 == 0)) goto LAB_147ab316d;
    if (DAT_14c950c29 != 0) goto LAB_147ab321b;
  }
  if (lVar2 != 0 && (~DAT_14c950c29 & 1) == 0) {
    FUN_1456cec3c(lVar2);
  }
  local_50 = &PTR_FUN_14a819ae0;
  local_48 = lVar2;
  if ((lVar2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar2);
  }
  local_58 = param_4;
  (**(code **)(*param_1 + 0x540))(param_1,param_2,&local_50,param_3);
LAB_147ab31d9:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab324c FUN_147ab324c body=767 status=ok
// SIG undefined FUN_147ab324c(void)

void FUN_147ab324c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 local_190;
  longlong *local_188;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_b4;
  undefined4 local_88;
  undefined1 local_58 [28];
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  memset(local_158,0,0x100);
  local_88 = 0xffffffff;
  local_154 = 0x3f800000;
  local_b4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_158);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_158);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_160 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_160);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_160);
  }
  local_168 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_168);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_168);
  }
  local_170 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_170);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_170);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_178 = local_170;
  if ((local_170 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  puVar2 = local_158;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = local_58;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  local_188 = &local_178;
  local_190 = local_168;
  local_198 = local_160;
  uVar4 = FUN_147ab354c(local_38,local_3c,puVar3,puVar2);
  *param_3 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab354c FUN_147ab354c body=340 status=ok
// SIG undefined FUN_147ab354c(void)

void FUN_147ab354c(longlong *param_1,float param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong *param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  longlong local_188;
  undefined1 local_180 [304];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar3 = 0;
  if ((param_1 == (longlong *)0x0) || ((param_2 == 0.0 && (!NAN(param_2))))) goto LAB_147ab358b;
  lVar1 = *param_7;
  if ((lVar1 == 0) ||
     ((((lVar2 = FUN_1411311bc(0), uVar3 = extraout_XMM0_Da, lVar2 == 0 ||
        (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) || (local_188 = *param_7, local_188 == 0)))) {
    local_188 = FUN_1411311bc(uVar3);
    if (local_188 != 0 && DAT_14c950c29 == 1) goto LAB_147ab3622;
  }
  else if (DAT_14c950c29 != 0) {
LAB_147ab3622:
    FUN_1456cec3c(local_188);
  }
  if ((local_188 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(local_188);
  }
  local_198 = &local_188;
  FUN_1479a8f00(local_180,param_2,param_4,param_3);
  local_198 = (longlong *)param_6;
  (**(code **)(*param_1 + 0x540))(param_1,param_2,local_180,param_5);
LAB_147ab358b:
  if ((local_50 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ab36ae FUN_147ab36ae body=1015 status=ok
// SIG undefined FUN_147ab36ae(void)

void FUN_147ab36ae(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  uint local_b0;
  longlong local_a8;
  byte local_9d;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88 [3];
  undefined4 local_6c;
  undefined1 local_68 [28];
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar6 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  local_6c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_88[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 2);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  plVar7 = local_88;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  local_90 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_98 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  iVar2 = local_9c;
  local_9d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9d);
  }
  uVar4 = local_90;
  uVar3 = local_98;
  bVar1 = local_9d;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_88[2];
  if ((local_88[2] != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_b8 = iVar2 != 0;
  local_b0 = (uint)bVar1;
  local_c0 = uVar3;
  local_c8 = uVar4;
  local_d8 = &local_a8;
  local_d0 = plVar7;
  uVar5 = FUN_147ab3aa6(local_48,local_4c,puVar6,local_6c);
  *param_3 = uVar5;
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab3aa6 FUN_147ab3aa6 body=263 status=ok
// SIG undefined FUN_147ab3aa6(void)

void FUN_147ab3aa6(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  longlong *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  char param_9,undefined4 param_10)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = *param_5;
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_78 = 0;
  if (param_9 == '\0') {
    local_78 = 0x3f800000;
  }
  local_50 = param_10;
  local_58 = param_8;
  local_60 = param_7;
  local_68 = param_6;
  local_70 = &local_48;
  local_88 = 0;
  local_80 = param_4;
  FUN_1434f354c(param_1,param_2,0,param_3);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab3bb4 FUN_147ab3bb4 body=1320 status=ok
// SIG undefined FUN_147ab3bb4(void)

void FUN_147ab3bb4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_b0;
  longlong local_a8;
  byte local_99;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88 [3];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [24];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar5 = local_60;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_64 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_68 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_88[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 2);
  }
  local_88[0] = 0;
  local_88[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  plVar6 = local_88;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_90 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_98 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_99 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_99);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  uVar3 = local_90;
  uVar2 = local_98;
  bVar1 = local_99;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_88[2];
  if ((local_88[2] != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_b0 = (uint)bVar1;
  local_b8 = uVar2;
  local_c0 = uVar3;
  local_d0 = &local_a8;
  local_d8 = local_6c;
  local_e0 = local_68;
  local_e8 = local_64;
  local_c8 = plVar6;
  uVar4 = FUN_1434f354c(local_40,local_44,local_48,puVar5);
  *param_3 = uVar4;
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab40e4 FUN_147ab40e4 body=313 status=ok
// SIG undefined FUN_147ab40e4(void)

void FUN_147ab40e4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined1 local_40 [24];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar3 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147ab421e(local_28,puVar3,local_44);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab421e FUN_147ab421e body=191 status=ok
// SIG undefined FUN_147ab421e(void)

ulonglong FUN_147ab421e(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  byte unaff_BL;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((DAT_14cb0d2b0 == (longlong *)0x0) ||
      (cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x400))(), cVar1 == '\0')) ||
     (lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1), lVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    FUN_14051bf56(lVar2,local_48);
    if (local_40 != 0) {
      unaff_BL = FUN_1479627d2(local_40,param_2,param_3);
    }
    FUN_14051bf10(local_48);
    uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),local_40 != 0 & unaff_BL);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 147ab430e FUN_147ab430e body=734 status=ok
// SIG undefined FUN_147ab430e(void)

void FUN_147ab430e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined1 local_a9;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_a9 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a9);
  }
  local_b8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_b9 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b9);
  }
  uVar3 = local_b8;
  uVar2 = local_b9;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_a9);
  local_c8 = local_40;
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  puVar5 = &local_a8;
  if (puVar1 != (undefined8 *)0x0) {
    puVar5 = puVar1;
  }
  local_d0 = uVar2;
  local_d8 = uVar3;
  uVar3 = FUN_1434f4326(local_38,&local_c8,puVar5,uVar4 & 0xffffffff);
  *param_3 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab45f4 FUN_147ab45f4 body=515 status=ok
// SIG undefined FUN_147ab45f4(void)

void FUN_147ab45f4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_c8 [44];
  int local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  puVar3 = &local_98;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1434f466c(local_28,local_30,puVar3,local_9c != 0);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab4800 FUN_147ab4800 body=677 status=ok
// SIG undefined FUN_147ab4800(void)

void FUN_147ab4800(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined1 auStack_238 [32];
  longlong local_218 [8];
  undefined4 local_1d8;
  undefined1 local_1d0 [4];
  undefined4 local_1cc;
  undefined4 local_12c;
  undefined4 local_100;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_94;
  undefined2 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_a0 = DAT_14c8462e8;
  local_b0 = DAT_14c8462d8;
  uStack_a8 = DAT_14c8462e0;
  local_b8 = DAT_14c8464f0;
  local_c8 = (undefined4)DAT_14c8464e0;
  uStack_c4 = DAT_14c8464e0._4_4_;
  uStack_c0 = (undefined4)DAT_14c8464e8;
  uStack_bc = DAT_14c8464e8._4_4_;
  local_98 = 0;
  local_94 = 0x3f80000000000000;
  local_68 = 0x41a00000;
  local_5c = 0x3f800000;
  local_8c = 1;
  local_60 = 0;
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  puVar2 = &local_c8;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  local_218[6] = 0;
  local_218[7] = 0;
  local_218[4] = 0;
  local_218[5] = 0;
  local_218[2] = 0;
  local_218[3] = 0;
  local_218[0] = 0;
  local_218[1] = 0;
  local_1d8 = 0;
  memset(local_1d0,0,0x100);
  local_100 = 0xffffffff;
  local_1cc = 0x3f800000;
  local_12c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_218);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_218);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_218;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1434f78f6(local_48,puVar2,plVar3);
  *param_3 = uVar1;
  if (local_218[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab4abe FUN_147ab4abe body=1755 status=ok
// SIG undefined FUN_147ab4abe(void)

void FUN_147ab4abe(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined1 auStack_2c8 [32];
  undefined8 *local_2a8;
  undefined8 *local_2a0;
  undefined1 local_298;
  undefined4 local_290;
  longlong *local_288;
  undefined1 local_280;
  longlong *local_278;
  uint local_270;
  undefined4 local_268;
  undefined4 local_260;
  undefined4 local_258;
  undefined4 local_250;
  undefined1 *local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  byte local_1e9;
  longlong local_1e8 [3];
  int local_1cc;
  longlong local_1c8 [2];
  undefined4 local_1b8;
  int local_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined1 local_180 [24];
  longlong local_168 [3];
  undefined1 local_150 [4];
  undefined4 local_14c;
  undefined4 local_ac;
  undefined4 local_80;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_50 = 0;
  local_240 = param_3;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  memset(local_150,0,0x100);
  local_80 = 0xffffffff;
  local_14c = 0x3f800000;
  local_ac = 0xffffffff;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_150);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_150);
  }
  puVar5 = local_150;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_168[0] = 0;
  local_168[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_168);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_168);
  }
  plVar8 = local_168;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_180);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_180);
  }
  puVar9 = local_180;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar9 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_198);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_198);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b0);
  }
  local_1b4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b4);
  }
  iVar3 = local_1b4;
  local_1b8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b8);
  }
  local_1c8[0] = 0;
  local_1c8[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1c8);
  }
  plVar7 = local_1c8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  local_1cc = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1cc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1cc);
  }
  iVar2 = local_1cc;
  local_1e8[0] = 0;
  local_1e8[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1e8);
  }
  plVar6 = local_1e8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_1e9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1e9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1e9);
  }
  local_1f0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1f0);
  }
  local_1f4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1f4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1f4);
  }
  local_1f8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1f8);
  }
  local_1fc = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1fc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1fc);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_2a0 = &local_218;
  local_218 = local_1b0;
  uStack_210 = uStack_1a8;
  local_208 = local_1a0;
  local_2a8 = &local_238;
  local_238 = local_198;
  uStack_230 = uStack_190;
  local_228 = local_188;
  local_280 = iVar2 != 0;
  local_298 = iVar3 != 0;
  local_250 = local_1fc;
  local_258 = local_1f8;
  local_260 = local_1f4;
  local_268 = local_1f0;
  local_270 = (uint)local_1e9;
  local_290 = local_1b8;
  local_288 = plVar7;
  local_278 = plVar6;
  uVar4 = FUN_147ab519a(local_50,puVar5,plVar8,puVar9);
  *local_240 = uVar4;
  if (local_1e8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1c8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_168[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab519a FUN_147ab519a body=738 status=ok
// SIG undefined FUN_147ab519a(void)

undefined4
FUN_147ab519a(undefined8 param_1,void *param_2,longlong *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined8 *param_6,undefined1 param_7,undefined4 param_8,
             undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_278 [32];
  longlong local_258;
  ulonglong uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined1 local_210 [4];
  undefined4 local_20c;
  undefined4 local_16c;
  undefined4 local_140;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  ushort local_cc;
  longlong local_c8 [4];
  undefined8 local_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_e0 = param_6[2];
  local_f0 = *param_6;
  uStack_e8 = param_6[1];
  local_108 = *param_5;
  uStack_104 = param_5[1];
  uStack_100 = param_5[2];
  uStack_fc = param_5[3];
  local_f8 = *(undefined8 *)(param_5 + 4);
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c8[2] = 0;
  local_c8[3] = 0;
  local_d4 = param_8;
  local_d0 = param_15;
  local_a8 = 0x41a00000;
  local_9c = 0x3f800000;
  local_cc = 1;
  local_a0 = 0;
  local_d8 = param_7;
  local_98 = param_10;
  FUN_147ac84c0(local_c8 + 2,param_11);
  local_a0 = param_12;
  local_9c = param_13;
  local_a8 = CONCAT44(param_16,param_14);
  FUN_14786d4e6(local_c8);
  local_cc = local_cc & 0xff00;
  local_228 = 0;
  uStack_220 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_218 = 0;
  memset(local_210,0,0x100);
  local_140 = 0xffffffff;
  local_20c = 0x3f800000;
  local_16c = 0xffffffff;
  uVar9 = FUN_1434f78f6(param_1,&local_108,&local_258);
  memcpy(param_2,local_210,0x100);
  *(undefined8 *)(param_4 + 4) = local_238;
  *param_4 = (undefined4)local_248;
  param_4[1] = local_248._4_4_;
  param_4[2] = (undefined4)uStack_240;
  param_4[3] = uStack_240._4_4_;
  if ((int)uStack_250 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_250 & 0xffffffff);
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != (int)uStack_250) {
    FUN_1447a8aa0(param_3);
  }
  lVar8 = local_258;
  if ((int)uStack_250 != 0) {
    lVar10 = (longlong)(int)uStack_250;
    lVar11 = 0;
    do {
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
        FUN_1403e3958(param_3,iVar3);
      }
      puVar1 = (undefined4 *)(lVar8 + lVar11);
      lVar4 = *param_3;
      *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = *(undefined8 *)(puVar1 + 4);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      lVar11 = lVar11 + 0x38;
    } while (lVar10 * 0x38 - lVar11 != 0);
  }
  if (local_258 != 0) {
    FUN_1400020a8(local_258);
  }
  if (local_c8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 147ab5496 FUN_147ab5496 body=1711 status=ok
// SIG undefined FUN_147ab5496(void)

void FUN_147ab5496(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined1 auStack_2a8 [32];
  undefined8 *local_288;
  undefined8 *local_280;
  undefined1 local_278;
  undefined4 local_270;
  undefined1 local_268;
  undefined1 local_260;
  longlong *local_258;
  uint local_250;
  undefined4 local_248;
  undefined4 local_240;
  undefined4 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  byte local_1d9;
  longlong local_1d8 [3];
  int local_1c0;
  undefined1 local_1b9;
  undefined4 local_1b8;
  int local_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined1 local_180 [24];
  longlong local_168 [3];
  undefined1 local_150 [4];
  undefined4 local_14c;
  undefined4 local_ac;
  undefined4 local_80;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_50 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  memset(local_150,0,0x100);
  local_80 = 0xffffffff;
  local_14c = 0x3f800000;
  local_ac = 0xffffffff;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_150);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_150);
  }
  puVar5 = local_150;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_168[0] = 0;
  local_168[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_168);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_168);
  }
  plVar7 = local_168;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_180);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_180);
  }
  puVar8 = local_180;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar8 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_198);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_198);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b0);
  }
  local_1b4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b4);
  }
  iVar3 = local_1b4;
  local_1b8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b8);
  }
  local_1b9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1b9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1b9);
  }
  local_1c0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c0);
  }
  iVar2 = local_1c0;
  local_1d8[0] = 0;
  local_1d8[1] = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1d8);
  }
  plVar6 = local_1d8;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar6 = *(longlong **)(param_2 + 0x38);
  }
  local_1d9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1d9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1d9);
  }
  local_1e0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1e0);
  }
  local_1e4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1e4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1e4);
  }
  local_1e8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1e8);
  }
  local_1ec = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1ec);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1ec);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_280 = &local_208;
  local_208 = local_1b0;
  uStack_200 = uStack_1a8;
  local_1f8 = local_1a0;
  local_288 = &local_228;
  local_228 = local_198;
  uStack_220 = uStack_190;
  local_218 = local_188;
  local_260 = iVar2 != 0;
  local_278 = iVar3 != 0;
  local_230 = local_1ec;
  local_238 = local_1e8;
  local_240 = local_1e4;
  local_248 = local_1e0;
  local_250 = (uint)local_1d9;
  local_268 = local_1b9;
  local_270 = local_1b8;
  local_258 = plVar6;
  uVar4 = FUN_147ab5b46(local_50,puVar5,plVar7,puVar8);
  *param_3 = uVar4;
  if (local_1d8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_168[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab5b46 FUN_147ab5b46 body=717 status=ok
// SIG undefined FUN_147ab5b46(void)

undefined4
FUN_147ab5b46(undefined8 param_1,void *param_2,longlong *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined8 *param_6,undefined1 param_7,undefined4 param_8,
             undefined1 param_9,undefined1 param_10,undefined8 param_11,undefined1 param_12,
             undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_278 [32];
  longlong local_258;
  ulonglong uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined1 local_210 [4];
  undefined4 local_20c;
  undefined4 local_16c;
  undefined4 local_140;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined2 local_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8 [2];
  undefined8 local_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_e0 = param_6[2];
  local_f0 = *param_6;
  uStack_e8 = param_6[1];
  local_108 = *param_5;
  uStack_104 = param_5[1];
  uStack_100 = param_5[2];
  uStack_fc = param_5[3];
  local_f8 = *(undefined8 *)(param_5 + 4);
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_d4 = param_8;
  local_d0 = param_15;
  local_a8 = 0x41a00000;
  local_9c = 0x3f800000;
  local_cc = 1;
  local_a0 = 0;
  local_d8 = param_7;
  local_98 = param_10;
  FUN_147ac84c0(local_b8);
  local_a0 = param_12;
  local_9c = param_13;
  local_a8 = CONCAT44(param_16,param_14);
  local_cc = CONCAT11(param_9,(undefined1)local_cc);
  local_228 = 0;
  uStack_220 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_218 = 0;
  memset(local_210,0,0x100);
  local_140 = 0xffffffff;
  local_20c = 0x3f800000;
  local_16c = 0xffffffff;
  uVar9 = FUN_1434f78f6(param_1,&local_108,&local_258);
  memcpy(param_2,local_210,0x100);
  *(undefined8 *)(param_4 + 4) = local_238;
  *param_4 = (undefined4)local_248;
  param_4[1] = local_248._4_4_;
  param_4[2] = (undefined4)uStack_240;
  param_4[3] = uStack_240._4_4_;
  if ((int)uStack_250 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_250 & 0xffffffff);
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != (int)uStack_250) {
    FUN_1447a8aa0(param_3);
  }
  lVar8 = local_258;
  if ((int)uStack_250 != 0) {
    lVar10 = (longlong)(int)uStack_250;
    lVar11 = 0;
    do {
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
        FUN_1403e3958(param_3,iVar3);
      }
      puVar1 = (undefined4 *)(lVar8 + lVar11);
      lVar4 = *param_3;
      *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = *(undefined8 *)(puVar1 + 4);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      lVar11 = lVar11 + 0x38;
    } while (lVar10 * 0x38 - lVar11 != 0);
  }
  if (local_258 != 0) {
    FUN_1400020a8(local_258);
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 147ab5e2e FUN_147ab5e2e body=1015 status=ok
// SIG undefined FUN_147ab5e2e(void)

void FUN_147ab5e2e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_138 [44];
  int local_10c;
  int local_108;
  int local_104;
  undefined4 local_100;
  byte local_f9;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined1 local_37;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_a8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c0);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f0);
  }
  local_f4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f4);
  }
  local_f8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  local_f9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f9);
  }
  local_100 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  local_104 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_104);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_104);
  }
  iVar3 = local_104;
  local_108 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  iVar2 = local_108;
  local_10c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_10c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_10c);
  }
  puVar5 = local_c0;
  if (puVar1 != (undefined1 *)0x0) {
    puVar5 = puVar1;
  }
  local_37 = local_10c != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_64 = iVar3 != 0;
  local_38 = iVar2 != 0;
  local_80 = local_f0;
  uStack_78 = uStack_e8;
  local_70 = local_e0;
  local_88 = local_c8;
  local_98 = local_d8;
  uStack_94 = uStack_d4;
  uStack_90 = uStack_d0;
  uStack_8c = uStack_cc;
  local_a0 = local_a8;
  local_68 = local_f4;
  local_50 = &DAT_14cad0f10;
  local_48 = 0;
  uStack_40 = 0;
  local_60 = local_100;
  local_5c = local_f8;
  local_58 = (uint)local_f9;
  uVar4 = FUN_147ac7cfc(&local_a0,puVar5);
  *param_3 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab624c FUN_147ab624c body=376 status=ok
// SIG undefined FUN_147ab624c(void)

void FUN_147ab624c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ab63c6(local_18,local_20,local_28,local_2c);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab63c6 FUN_147ab63c6 body=197 status=ok
// SIG undefined FUN_147ab63c6(void)

void FUN_147ab63c6(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb0d2b0 != (longlong *)0x0 && param_2 != 0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar1 != '\0') {
      lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x156) & 2) != 0)) {
        FUN_14051bf56(lVar2,local_48);
        if (local_40 != 0) {
          FUN_143402bae(local_40,param_2,param_3,param_4);
        }
        FUN_14051bf10(local_48);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab648c FUN_147ab648c body=148 status=ok
// SIG undefined FUN_147ab648c(void)

void FUN_147ab648c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ab6522(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab6522 FUN_147ab6522 body=151 status=ok
// SIG undefined FUN_147ab6522(void)

void FUN_147ab6522(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar1 != '\0') {
      lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x156) & 2) != 0)) {
        FUN_14051bf56(lVar2,local_28);
        if (local_20 != 0) {
          FUN_143402f9e();
        }
        FUN_14051bf10(local_28);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab65c0 FUN_147ab65c0 body=357 status=ok
// SIG undefined FUN_147ab65c0(void)

void FUN_147ab65c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  bool bVar2;
  undefined1 auStack_68 [40];
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  uVar1 = local_38;
  bVar2 = local_40 != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140adf126(&local_2c,local_3c);
  uVar1 = FUN_1434f49b4(uVar1,local_2c,
                        CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar2) & 0xffffffff);
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab672c FUN_147ab672c body=330 status=ok
// SIG undefined FUN_147ab672c(void)

void FUN_147ab672c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  int local_28;
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1434f49b4(local_20,local_24,local_28 != 0);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab6878 FUN_147ab6878 body=185 status=ok
// SIG undefined FUN_147ab6878(void)

void FUN_147ab6878(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_1461a89fa(&local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab693e FUN_147ab693e body=699 status=ok
// SIG undefined FUN_147ab693e(void)

void FUN_147ab693e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar1 = local_4c;
  local_50 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_50 != 0;
  local_60 = iVar1 != 0;
  local_68 = local_48;
  uVar2 = FUN_147ab6bfa(local_28,local_30,local_34,local_38);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab6bfa FUN_147ab6bfa body=450 status=ok
// SIG undefined FUN_147ab6bfa(void)

longlong FUN_147ab6bfa(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                      longlong param_5,char param_6,byte param_7)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_118 [36];
  undefined1 local_f4 [4];
  undefined1 local_f0 [16];
  undefined1 local_e0 [64];
  longlong local_a0;
  undefined4 local_98;
  ulonglong local_50;
  
  lVar5 = param_5;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (DAT_14cb0d2b0 != (longlong *)0x0 && param_2 != (longlong *)0x0) {
    cVar2 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar2 != '\0') {
      lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      cVar2 = param_6;
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x156) & 2) != 0)) {
        uVar4 = FUN_147ac6914(param_1);
        if (cVar2 == '\0') {
          FUN_147963094(local_f0,lVar3,uVar4);
        }
        else {
          uVar4 = FUN_144a7b302(lVar3);
          FUN_1479631aa(local_f0,uVar4);
        }
        if (lVar5 != 0) {
          FUN_147ad1896(local_e0,local_f4,&param_5);
        }
        lVar5 = FUN_143406a2c(param_2,local_f0);
        bVar1 = param_7;
        if (lVar5 != 0) {
          FUN_14342e4a4(lVar5,param_3);
          FUN_14342df16(lVar5,param_4);
          *(byte *)(lVar5 + 0x490) = *(byte *)(lVar5 + 0x490) & 0xb6 | bVar1 | 0x40;
          *(byte *)(lVar5 + 0x491) = *(byte *)(lVar5 + 0x491) & 0xbf | cVar2 << 6;
          uVar6 = (**(code **)(*param_2 + 0x2e8))(param_2);
          *(undefined4 *)(lVar5 + 0x4c0) = uVar6;
          *(byte *)(lVar5 + 0x490) = *(byte *)(lVar5 + 0x490) & 0xfd;
        }
        local_98 = 0;
        if (local_a0 != 0) {
          FUN_1400020a8();
        }
        FUN_14766440c(local_e0);
        goto LAB_147ab6c8c;
      }
    }
  }
  lVar5 = 0;
LAB_147ab6c8c:
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab6dbe FUN_147ab6dbe body=224 status=ok
// SIG undefined FUN_147ab6dbe(void)

void FUN_147ab6dbe(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ab6ea0(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab6ea0 FUN_147ab6ea0 body=159 status=ok
// SIG undefined FUN_147ab6ea0(void)

void FUN_147ab6ea0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar1 != '\0') {
      lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x156) & 2) != 0)) {
        FUN_14051bf56(lVar2,local_30);
        if (local_28 != 0) {
          FUN_1479616f8(local_28,param_2);
        }
        FUN_14051bf10(local_30);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab6f46 FUN_147ab6f46 body=302 status=ok
// SIG undefined FUN_147ab6f46(void)

void FUN_147ab6f46(undefined8 param_1,longlong param_2,byte *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  uVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar3 = (longlong *)FUN_146036e40();
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3);
  if (plVar3 == (longlong *)0x0) {
    bVar2 = 0;
  }
  else {
    puVar4 = local_38;
    if ((int)uStack_30 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    bVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,0,puVar4,uVar1);
  }
  *param_3 = plVar3 != (longlong *)0x0 & bVar2;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ab707c FUN_147ab707c body=409 status=ok
// SIG undefined FUN_147ab707c(void)

void FUN_147ab707c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [16];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar3 = local_60;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = local_48;
  if (puVar4 != (undefined1 *)0x0) {
    puVar2 = puVar4;
  }
  puVar4 = local_78;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ab7216(local_38,puVar2,puVar3,puVar4);
  *param_3 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab7216 FUN_147ab7216 body=1106 status=ok
// SIG undefined FUN_147ab7216(void)

undefined8 FUN_147ab7216(longlong *param_1,double *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined1 auStack_da8 [32];
  undefined8 *local_d88;
  undefined4 *local_d80;
  double local_d78;
  double local_d70;
  double local_d68;
  undefined8 local_d60;
  double local_d58;
  double local_d50;
  double local_d48;
  undefined8 local_d40;
  double local_d38;
  double local_d30;
  double local_d28;
  undefined8 local_d20;
  undefined8 local_d18;
  undefined4 local_d10;
  undefined4 uStack_d0c;
  undefined4 uStack_d08;
  undefined4 uStack_d04;
  undefined8 local_d00;
  undefined8 local_cf8;
  undefined8 local_cf0;
  undefined8 local_ce8;
  undefined8 uStack_ce0;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined8 local_cc0;
  undefined8 local_cb8;
  undefined8 local_cb0;
  undefined8 uStack_ca8;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined8 local_c90;
  undefined8 uStack_c88;
  undefined8 local_c80;
  undefined1 local_c78 [128];
  longlong local_bf8 [16];
  undefined1 local_b78 [128];
  undefined8 local_af8;
  undefined4 local_af0;
  undefined4 uStack_aec;
  undefined4 uStack_ae8;
  undefined4 uStack_ae4;
  double local_ae0;
  double dStack_ad8;
  double local_ad0;
  longlong local_220;
  longlong local_198;
  char local_108;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_da8;
  if ((param_1 == (longlong *)0x0) || (param_1[0x75] == 0)) {
    param_3[2] = DAT_14c8464f0;
    uVar11 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    *param_3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    param_3[1] = uVar11;
    *(undefined8 *)(param_4 + 4) = DAT_14c8464f0;
    uVar10 = DAT_14c8464e8._4_4_;
    uVar9 = (undefined4)DAT_14c8464e8;
    uVar8 = DAT_14c8464e0._4_4_;
    *param_4 = (undefined4)DAT_14c8464e0;
    param_4[1] = uVar8;
    param_4[2] = uVar9;
    param_4[3] = uVar10;
    uVar11 = 0;
  }
  else {
    FUN_1400e6e60(&local_af8);
    (**(code **)(*param_1 + 0x5f8))(param_1,0,&local_af8);
    if (*(char *)((longlong)param_1 + 0xc8c) == '\x01') {
      plVar12 = param_1 + 0x192;
    }
    else {
      plVar12 = local_bf8;
      FUN_1403f8f3e(&local_af8,plVar12,0);
    }
    FUN_144a87de4(local_b78,plVar12);
    FUN_14494412e(local_b78,local_bf8);
    local_cf8 = 0;
    local_cf0 = 0x3ff0000000000000;
    local_ce8 = 0;
    uStack_ce0 = 0;
    local_cd8 = 0;
    uStack_cd0 = 0;
    local_cc8 = 0x3ff0000000000000;
    local_cc0 = 0;
    local_cb8 = 0x3ff0000000000000;
    local_cb0 = 0;
    uStack_ca8 = 0;
    local_ca0 = 0;
    uStack_c98 = 0;
    local_c90 = 0;
    uStack_c88 = 0;
    local_c80 = 0x3ff0000000000000;
    dVar2 = sin(local_ae0 * 0.01745329238474369);
    dVar3 = sin(dStack_ad8 * 0.01745329238474369);
    dVar4 = sin(local_ad0 * 0.01745329238474369);
    sin(0.0);
    dVar5 = cos(local_ae0 * 0.01745329238474369);
    dVar6 = cos(dStack_ad8 * 0.01745329238474369);
    dVar7 = cos(local_ad0 * 0.01745329238474369);
    cos(0.0);
    local_d78 = dVar5 * dVar6;
    local_d70 = dVar3 * dVar5;
    local_d60 = 0;
    local_d58 = dVar2 * dVar4 * dVar6 - dVar3 * dVar7;
    local_d50 = dVar2 * dVar4 * dVar3 + dVar6 * dVar7;
    local_d48 = -dVar4 * dVar5;
    local_d40 = 0;
    local_d38 = -(dVar2 * dVar7 * dVar6 + dVar3 * dVar4);
    local_d30 = dVar6 * dVar4 - dVar3 * dVar2 * dVar7;
    local_d28 = dVar5 * dVar7;
    local_d20 = 0;
    local_d18 = local_af8;
    local_d10 = local_af0;
    uStack_d0c = uStack_aec;
    uStack_d08 = uStack_ae8;
    uStack_d04 = uStack_ae4;
    local_d00 = 0x3ff0000000000000;
    local_d68 = dVar2;
    FUN_1447fea8d(local_c78,&local_cf8,&local_d78);
    piVar1 = (int *)(param_1[0x75] + 0x140);
    local_cf0 = *(undefined8 *)piVar1;
    local_cf8 = 0;
    local_d70 = (double)*(int *)(param_1[0x75] + 0x144) * param_2[1];
    local_d78 = (double)*piVar1 * *param_2;
    local_d88 = param_3;
    local_d80 = param_4;
    FUN_147cf0946(&local_d78,&local_cf8,local_c78,local_bf8);
    if (local_108 == '\x01') {
      local_108 = '\0';
    }
    if (local_198 != 0) {
      FUN_1400020a8();
    }
    if (local_220 != 0) {
      FUN_1400020a8();
    }
    uVar11 = 1;
  }
  if ((local_c0 ^ (ulonglong)auStack_da8) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab7670 FUN_147ab7670 body=510 status=ok
// SIG undefined FUN_147ab7670(void)

void FUN_147ab7670(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78 [6];
  undefined8 local_60 [3];
  undefined1 local_48 [16];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  puVar2 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar4 = local_60;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar3 = local_78;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_38 == 0) {
    puVar4[2] = DAT_14c8464f0;
    *puVar4 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    puVar4[1] = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    *(undefined8 *)(puVar3 + 4) = DAT_14c8464f0;
    *puVar3 = (undefined4)DAT_14c8464e0;
    puVar3[1] = DAT_14c8464e0._4_4_;
    puVar3[2] = (undefined4)DAT_14c8464e8;
    puVar3[3] = DAT_14c8464e8._4_4_;
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_147ab7216(*(undefined8 *)(local_38 + 0x3a0),puVar2,puVar4);
  }
  *param_3 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab7876 FUN_147ab7876 body=409 status=ok
// SIG undefined FUN_147ab7876(void)

void FUN_147ab7876(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [16];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar3 = local_60;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = local_48;
  if (puVar4 != (undefined1 *)0x0) {
    puVar2 = puVar4;
  }
  puVar4 = local_78;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ab7a10(local_38,puVar2,puVar3,puVar4);
  *param_3 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab7a10 FUN_147ab7a10 body=419 status=ok
// SIG undefined FUN_147ab7a10(void)

undefined8
FUN_147ab7a10(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_408 [32];
  undefined4 *local_3e8;
  undefined1 local_3d8 [128];
  undefined1 local_358 [128];
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 local_2b8 [16];
  undefined8 local_238 [16];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_190;
  undefined1 local_108;
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_408;
  if (param_1 != 0) {
    plVar6 = (longlong *)FUN_144a7ba4c();
    if ((plVar6 != (longlong *)0x0) && (lVar1 = plVar6[0xf], lVar1 != 0)) {
      local_2c8 = DAT_14c8464f0;
      local_2d8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_2d0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      puVar9 = &DAT_14c846400;
      puVar10 = local_2b8;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      puVar9 = &DAT_14c846400;
      puVar10 = local_238;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      local_190 = 0;
      local_108 = 0;
      local_78 = 0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_68 = (undefined4)DAT_14c8464e0;
      uStack_64 = DAT_14c8464e0._4_4_;
      uStack_60 = (undefined4)DAT_14c8464e8;
      uStack_5c = DAT_14c8464e8._4_4_;
      local_58 = DAT_14c8464f0;
      local_50 = 0;
      uStack_48 = 0;
      cVar5 = (**(code **)(*plVar6 + 0x358))
                        (plVar6,*(undefined8 *)(lVar1 + 0xf8),&local_2d8,0xffffffff);
      if (cVar5 != '\0') {
        FUN_14012d55c(&local_2d8,local_3d8);
        FUN_14007522e(local_358,local_3d8);
        local_3e8 = param_4;
        FUN_147cf0692(param_2,&local_50,local_358,param_3);
        uVar7 = 1;
        goto LAB_147ab7b89;
      }
    }
  }
  param_3[2] = DAT_14c8464f0;
  uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *param_3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_3[1] = uVar7;
  *(undefined8 *)(param_4 + 4) = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *param_4 = (undefined4)DAT_14c8464e0;
  param_4[1] = uVar2;
  param_4[2] = uVar3;
  param_4[3] = uVar4;
  uVar7 = 0;
LAB_147ab7b89:
  if ((local_38 ^ (ulonglong)auStack_408) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab7bba FUN_147ab7bba body=300 status=ok
// SIG undefined FUN_147ab7bba(void)

void FUN_147ab7bba(undefined8 param_1,longlong param_2,byte *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  uVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar3 = (longlong *)FUN_146036e40();
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3);
  if (plVar3 == (longlong *)0x0) {
    bVar2 = 0;
  }
  else {
    puVar4 = local_38;
    if ((int)uStack_30 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    bVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,puVar4,uVar1);
  }
  *param_3 = plVar3 != (longlong *)0x0 & bVar2;
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ab7cec FUN_147ab7cec body=177 status=ok
// SIG undefined FUN_147ab7cec(void)

void FUN_147ab7cec(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  iVar1 = local_1c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar2 = (longlong *)FUN_146036e40();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x48))(plVar2);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,iVar1 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab7da6 FUN_147ab7da6 body=382 status=ok
// SIG undefined FUN_147ab7da6(void)

void FUN_147ab7da6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_168 [32];
  undefined1 local_148 [20];
  undefined4 local_134;
  undefined1 local_130 [4];
  undefined4 local_12c;
  undefined4 local_8c;
  undefined4 local_60;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  memset(local_130,0,0x100);
  local_60 = 0xffffffff;
  local_12c = 0x3f800000;
  local_8c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_130);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_130);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_134 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_134);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_134);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_148);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_148);
  }
  puVar2 = local_130;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = local_148;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ab7f26(puVar2,local_134,puVar3);
  *param_3 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab7f26 FUN_147ab7f26 body=874 status=ok
// SIG undefined FUN_147ab7f26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147ab7f26(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  undefined1 local_e0 [8];
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined1 local_a0 [8];
  longlong *local_98;
  wchar_t *local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar8 = (longlong *)FUN_144800528();
  lVar9 = plVar8[0x22];
  if (lVar9 == 0) {
    (**(code **)(*plVar8 + 1000))(plVar8);
    lVar9 = plVar8[0x22];
  }
  if (*(char *)(lVar9 + 0x14f) == '\0') {
    FUN_1446ddc76(local_e0,&DAT_14a492018,1);
    FUN_14276766e(&local_d8,local_e0);
    local_90 = L"CollisionUVNoSupport";
    local_88 = 0x14;
    FUN_1446e940c(local_e4,&local_90);
    local_90 = L"GameplayStatics";
    local_88 = 0xf;
    FUN_1446e940c(local_e8,&local_90);
    FUN_140208bae(&local_90,local_e8,local_e4,
                  L"Calling FindCollisionUV but \'Support UV From Hit Results\' is not enabled in project settings. This is required for finding UV for collision results."
                 );
    FUN_1427679d4(&local_d8,local_a0,&local_90);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_98 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_98 + 0x10))(local_98);
        }
      }
    }
    if (local_90 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_90 + 0x10))();
    }
    FUN_1427678c0(&local_d8);
  }
  else {
    plVar8 = (longlong *)FUN_14479d2ce(param_1 + 0x36);
    if (plVar8 != (longlong *)0x0) {
      lVar9 = (**(code **)(*plVar8 + 0x7a0))(plVar8);
      if (lVar9 != 0) {
        dVar3 = *(double *)(param_1 + 4) - (double)plVar8[0x4c];
        dVar4 = *(double *)(param_1 + 6) - (double)plVar8[0x4d];
        dVar11 = *(double *)(param_1 + 8) - (double)plVar8[0x4e];
        auVar2 = *(undefined1 (*) [16])(plVar8 + 0x50);
        dVar5 = -(double)plVar8[0x48];
        dVar6 = -(double)plVar8[0x49];
        dVar13 = (double)plVar8[0x4a] * -1.0;
        dVar14 = (double)plVar8[0x4b] * 1.0;
        dVar16 = dVar3 * dVar13 - dVar5 * dVar11;
        dVar15 = dVar4 * dVar5 - dVar3 * dVar6;
        dVar7 = dVar11 * dVar6 - dVar4 * dVar13;
        dVar7 = dVar7 + dVar7;
        dVar16 = dVar16 + dVar16;
        dVar15 = dVar15 + dVar15;
        auVar12 = divpd(_DAT_149934d80,auVar2);
        local_d8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar12._0_8_)
                   * ((dVar15 * dVar6 - dVar16 * dVar13) + dVar14 * dVar7 + dVar3);
        dStack_d0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar12._8_8_)
                    * ((double)plVar8[0x48] * dVar15 + dVar13 * dVar7 + dVar14 * dVar16 + dVar4);
        local_c8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)plVar8[0x52])) &
                           (ulonglong)(1.0 / (double)plVar8[0x52])) *
                   (dVar14 * dVar15 + dVar11 + (dVar16 * dVar5 - dVar7 * dVar6));
        local_f8 = param_3;
        uVar10 = FUN_147c4904a(lVar9,&local_d8,*param_1,param_2);
        goto LAB_147ab823f;
      }
    }
  }
  uVar10 = 0;
LAB_147ab823f:
  if ((local_80 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab8292 FUN_147ab8292 body=365 status=ok
// SIG undefined FUN_147ab8292(void)

void FUN_147ab8292(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  longlong local_58 [3];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar2 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_5c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  puVar3 = &local_5c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_30;
  local_78 = local_40;
  uStack_74 = uStack_3c;
  uStack_70 = uStack_38;
  uStack_6c = uStack_34;
  uVar1 = FUN_147ab8400(&local_78,plVar2,puVar3);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab8400 FUN_147ab8400 body=235 status=ok
// SIG undefined FUN_147ab8400(void)

longlong FUN_147ab8400(double *param_1,longlong *param_2,float *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  
  *param_3 = 3.4028235e+38;
  if ((longlong)(int)param_2[1] != 0) {
    fVar6 = 3.4028235e+38;
    lVar4 = 0;
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*param_2 + lVar4);
      if (lVar1 != 0) {
        lVar2 = *(longlong *)(lVar1 + 0x1c8);
        pdVar5 = (double *)&DAT_14c8464e0;
        dVar8 = DAT_14c8464f0;
        if (lVar2 != 0) {
          dVar8 = *(double *)(lVar2 + 0x270);
          pdVar5 = (double *)(lVar2 + 0x260);
        }
        fVar7 = (float)((param_1[2] - dVar8) * (param_1[2] - dVar8) +
                       (*param_1 - *pdVar5) * (*param_1 - *pdVar5) +
                       (param_1[1] - pdVar5[1]) * (param_1[1] - pdVar5[1]));
        if (fVar7 < fVar6) {
          lVar3 = lVar1;
          fVar6 = fVar7;
        }
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)param_2[1] * 8 != lVar4);
    if (lVar3 != 0) {
      if (fVar6 < 0.0) {
        fVar6 = sqrtf(fVar6);
      }
      else {
        fVar6 = SQRT(fVar6);
      }
      *param_3 = fVar6;
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 147ab84ec FUN_147ab84ec body=176 status=ok
// SIG undefined FUN_147ab84ec(void)

void FUN_147ab84ec(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,local_18,1);
  if (lVar1 != 0) {
    FUN_143786ce4(lVar1,1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab859e FUN_147ab859e body=339 status=ok
// SIG undefined FUN_147ab859e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ab859e(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  double dVar2;
  int *piVar3;
  double *pdVar4;
  undefined1 in_XMM1 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_58 [32];
  double local_38;
  int local_2c;
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  piVar1 = *(int **)(param_2 + 0x38);
  local_38 = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  piVar3 = &local_2c;
  if (piVar1 != (int *)0x0) {
    piVar3 = piVar1;
  }
  pdVar4 = &local_38;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar4 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  QueryPerformanceCounter(&local_28);
  dVar2 = ((double)local_28.QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14c86a9d8;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar2;
  auVar5 = roundsd(in_XMM1,auVar5,9);
  *piVar3 = (int)auVar5._0_8_;
  *pdVar4 = dVar2 - (double)(int)auVar5._0_8_;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab86f2 FUN_147ab86f2 body=167 status=ok
// SIG undefined FUN_147ab86f2(void)

void FUN_147ab86f2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ab879a(&local_28,local_20);
  *param_3 = local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab879a FUN_147ab879a body=190 status=ok
// SIG undefined FUN_147ab879a(void)

undefined8 * FUN_147ab879a(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50 [2];
  longlong *local_40;
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_2,1);
  if (lVar3 != 0) {
    FUN_14051bf56(lVar3,local_30);
    if (local_28 != 0) {
      FUN_14795f152(local_28,local_50);
      *param_1 = local_50[0];
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar2 = (int *)((longlong)local_40 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
          }
        }
      }
      FUN_14051bf10(local_30);
      goto LAB_147ab8838;
    }
    FUN_14051bf10(local_30);
  }
  *param_1 = 0;
LAB_147ab8838:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab885a FUN_147ab885a body=199 status=ok
// SIG undefined FUN_147ab885a(void)

void FUN_147ab885a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  FUN_147ab8922(&local_50,plVar1);
  *(undefined8 *)(param_3 + 4) = local_40;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab8922 FUN_147ab8922 body=188 status=ok
// SIG undefined FUN_147ab8922(void)

void FUN_147ab8922(double *param_1,longlong *param_2)

{
  longlong lVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (0 < (longlong)(int)param_2[1]) {
    dVar2 = 0.0;
    lVar4 = 0;
    iVar3 = 0;
    dVar5 = 0.0;
    dVar6 = 0.0;
    do {
      lVar1 = *(longlong *)(*param_2 + lVar4 * 8);
      if (((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
         (lVar1 = *(longlong *)(lVar1 + 0x1c8), lVar1 != 0)) {
        dVar6 = dVar6 + *(double *)(lVar1 + 0x260);
        dVar5 = dVar5 + *(double *)(lVar1 + 0x268);
        dVar2 = dVar2 + *(double *)(lVar1 + 0x270);
        iVar3 = iVar3 + 1;
      }
      lVar4 = lVar4 + 1;
    } while ((int)param_2[1] != lVar4);
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    if (0 < iVar3) {
      dVar7 = 1.0 / (double)iVar3;
      *param_1 = dVar6 * dVar7;
      param_1[1] = dVar5 * dVar7;
      param_1[2] = dVar2 * dVar7;
    }
    return;
  }
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  return;
}



// FUNCTION 147ab89e4 FUN_147ab89e4 body=437 status=ok
// SIG undefined FUN_147ab89e4(void)

void FUN_147ab89e4(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [24];
  undefined1 local_68 [28];
  int local_4c;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
  plVar3 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar1 = local_4c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar2 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  puVar4 = local_80;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ab8b9a(plVar3,iVar1 != 0,puVar2,puVar4);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab8b9a FUN_147ab8b9a body=621 status=ok
// SIG undefined FUN_147ab8b9a(void)

void FUN_147ab8b9a(longlong *param_1,uint param_2,double *param_3,double *param_4)

{
  longlong *plVar1;
  double dVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_f8 [32];
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  char local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar3 = (int)param_1[1];
  if (iVar3 < 1) {
    param_4[2] = DAT_14c8464f0;
    dVar2 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    *param_4 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    param_4[1] = dVar2;
    uVar10 = DAT_14c8464e8._4_4_;
    uVar9 = (undefined4)DAT_14c8464e8;
    uVar7 = DAT_14c8464e0._4_4_;
    uVar6 = (undefined4)DAT_14c8464e0;
    param_3[2] = DAT_14c8464f0;
    *(undefined4 *)param_3 = uVar6;
    *(undefined4 *)((longlong)param_3 + 4) = uVar7;
    *(undefined4 *)(param_3 + 1) = uVar9;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar10;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_f8);
  }
  uVar6 = 0;
  uVar7 = 0;
  cVar4 = '\0';
  lVar5 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar18 = 0;
  uVar19 = 0;
  uVar15 = 0;
  uVar16 = 0;
  do {
    plVar1 = *(longlong **)(*param_1 + lVar5 * 8);
    if ((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) {
      (**(code **)(*plVar1 + 0x520))(plVar1,&local_d8,param_2 ^ 1,0);
      uVar17 = (undefined4)((ulonglong)local_d8 >> 0x20);
      uVar20 = (undefined4)((ulonglong)local_d0 >> 0x20);
      uVar23 = (undefined4)((ulonglong)local_c8 >> 0x20);
      uVar14 = (undefined4)((ulonglong)local_c0 >> 0x20);
      uVar11 = (undefined4)((ulonglong)local_b8 >> 0x20);
      uVar8 = (undefined4)((ulonglong)local_b0 >> 0x20);
      if (local_a8 == '\0' || cVar4 == '\0') {
        if (local_a8 != '\0') {
          uVar6 = SUB84(local_b0,0);
          uVar7 = uVar8;
          uVar9 = SUB84(local_b8,0);
          uVar10 = uVar11;
          uVar12 = SUB84(local_c0,0);
          uVar13 = uVar14;
          uVar15 = SUB84(local_d8,0);
          uVar16 = uVar17;
          uVar18 = SUB84(local_d0,0);
          uVar19 = uVar20;
          uVar21 = SUB84(local_c8,0);
          uVar22 = uVar23;
          cVar4 = local_a8;
        }
      }
      else {
        if (local_d8 <= (double)CONCAT44(uVar16,uVar15)) {
          uVar15 = SUB84(local_d8,0);
          uVar16 = uVar17;
        }
        if (local_d0 <= (double)CONCAT44(uVar19,uVar18)) {
          uVar18 = SUB84(local_d0,0);
          uVar19 = uVar20;
        }
        if (local_c8 <= (double)CONCAT44(uVar22,uVar21)) {
          uVar21 = SUB84(local_c8,0);
          uVar22 = uVar23;
        }
        if ((double)CONCAT44(uVar13,uVar12) <= local_c0) {
          uVar12 = SUB84(local_c0,0);
          uVar13 = uVar14;
        }
        if ((double)CONCAT44(uVar10,uVar9) <= local_b8) {
          uVar9 = SUB84(local_b8,0);
          uVar10 = uVar11;
        }
        if ((double)CONCAT44(uVar7,uVar6) <= local_b0) {
          uVar6 = SUB84(local_b0,0);
          uVar7 = uVar8;
        }
      }
      iVar3 = (int)param_1[1];
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 < iVar3);
  param_4[2] = DAT_14c8464f0;
  dVar2 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *param_4 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_4[1] = dVar2;
  uVar17 = DAT_14c8464e8._4_4_;
  uVar14 = (undefined4)DAT_14c8464e8;
  uVar11 = DAT_14c8464e0._4_4_;
  uVar8 = (undefined4)DAT_14c8464e0;
  param_3[2] = DAT_14c8464f0;
  *(undefined4 *)param_3 = uVar8;
  *(undefined4 *)((longlong)param_3 + 4) = uVar11;
  *(undefined4 *)(param_3 + 1) = uVar14;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar17;
  if (cVar4 != '\0') {
    *param_3 = ((double)CONCAT44(uVar16,uVar15) + (double)CONCAT44(uVar13,uVar12)) * 0.5;
    param_3[1] = ((double)CONCAT44(uVar19,uVar18) + (double)CONCAT44(uVar10,uVar9)) * 0.5;
    param_3[2] = ((double)CONCAT44(uVar22,uVar21) + (double)CONCAT44(uVar7,uVar6)) * 0.5;
    *param_4 = ((double)CONCAT44(uVar13,uVar12) - (double)CONCAT44(uVar16,uVar15)) * 0.5;
    param_4[1] = ((double)CONCAT44(uVar10,uVar9) - (double)CONCAT44(uVar19,uVar18)) * 0.5;
    param_4[2] = ((double)CONCAT44(uVar7,uVar6) - (double)CONCAT44(uVar22,uVar21)) * 0.5;
  }
  if ((local_a0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ab8e08 FUN_147ab8e08 body=277 status=ok
// SIG undefined FUN_147ab8e08(void)

void FUN_147ab8e08(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_1434f5240(local_20,&local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab8f1e FUN_147ab8f1e body=388 status=ok
// SIG undefined FUN_147ab8f1e(void)

void FUN_147ab8f1e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
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
  FUN_1446f4b16();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_38[2];
  if ((local_38[2] != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_1434f53e8(local_38[3],&local_40,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab90a4 FUN_147ab90a4 body=474 status=ok
// SIG undefined FUN_147ab90a4(void)

void FUN_147ab90a4(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48 [3];
  undefined8 local_30;
  longlong local_28;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
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
  uVar1 = local_30;
  plVar2 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_1434f55f8(local_20,&local_50,uVar1,plVar2);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab9280 FUN_147ab9280 body=388 status=ok
// SIG undefined FUN_147ab9280(void)

void FUN_147ab9280(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
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
  FUN_1446f4b16();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_38[2];
  if ((local_38[2] != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_1434f584c(local_38[3],&local_40,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab9406 FUN_147ab9406 body=345 status=ok
// SIG undefined FUN_147ab9406(void)

void FUN_147ab9406(undefined8 param_1,longlong param_2)

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
  FUN_1434f5b90(local_38[3],local_38[2],plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab9560 FUN_147ab9560 body=188 status=ok
// SIG undefined FUN_147ab9560(void)

void FUN_147ab9560(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,local_20,1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x6e8);
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab961e FUN_147ab961e body=218 status=ok
// SIG undefined FUN_147ab961e(void)

void FUN_147ab961e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ab96fa(&local_30,local_20);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab96fa FUN_147ab96fa body=140 status=ok
// SIG undefined FUN_147ab96fa(void)

undefined8 * FUN_147ab96fa(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_2,1);
  if (lVar1 != 0) {
    FUN_14051bf56(lVar1,local_30);
    if (local_28 != 0) {
      FUN_14795f0e8(local_28,param_1);
      FUN_14051bf10(local_30);
      goto LAB_147ab9766;
    }
    FUN_14051bf10(local_30);
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_147ab9766:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab9794 FUN_147ab9794 body=488 status=ok
// SIG undefined FUN_147ab9794(void)

void FUN_147ab9794(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 local_70 [24];
  int local_58;
  undefined4 local_54;
  undefined1 local_50 [24];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  iVar2 = local_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar4 = local_50;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  local_78 = local_70;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_78 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_147ab997e(local_38,puVar4,local_54,iVar2 != 0);
  *param_3 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab997e FUN_147ab997e body=231 status=ok
// SIG undefined FUN_147ab997e(void)

undefined4
FUN_147ab997e(undefined8 param_1,undefined8 param_2,float param_3,undefined4 param_4,
             undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [44];
  float local_4c;
  undefined1 local_48 [8];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar1 != '\0') {
      lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      if (lVar4 != 0) {
        FUN_14051bf56(lVar4,local_48);
        if (local_40 == 0) {
LAB_147ab9a15:
          uVar3 = 0;
        }
        else {
          iVar2 = FUN_1479629ac(local_40,param_2,&local_4c,param_4);
          if ((iVar2 == -1) || (param_3 * param_3 < local_4c)) goto LAB_147ab9a15;
          uVar3 = FUN_14795ba42(local_40,iVar2,param_5,param_4);
        }
        FUN_14051bf10(local_48);
        goto LAB_147ab9a25;
      }
    }
  }
  uVar3 = 0;
LAB_147ab9a25:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab9a6c FUN_147ab9a6c body=315 status=ok
// SIG undefined FUN_147ab9a6c(void)

void FUN_147ab9a6c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141090858(&local_38,local_20,local_24 != 0);
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



// FUNCTION 147ab9ba8 FUN_147ab9ba8 body=156 status=ok
// SIG undefined FUN_147ab9ba8(void)

void FUN_147ab9ba8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ab9c46(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab9c46 FUN_147ab9c46 body=164 status=ok
// SIG undefined FUN_147ab9c46(void)

undefined8 FUN_147ab9c46(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar1 != '\0') {
      lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x156) & 2) != 0)) {
        FUN_14051bf56(lVar2,local_28);
        if (local_20 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined8 *)(local_20 + 0x490);
        }
        FUN_14051bf10(local_28);
        goto LAB_147ab9c9b;
      }
    }
  }
  uVar3 = 0;
LAB_147ab9c9b:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab9cf2 FUN_147ab9cf2 body=155 status=ok
// SIG undefined FUN_147ab9cf2(void)

void FUN_147ab9cf2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ab9d8e(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab9d8e FUN_147ab9d8e body=59 status=ok
// SIG undefined FUN_147ab9d8e(void)

bool FUN_147ab9d8e(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar1 != 0) && (lVar1 = FUN_1449baec6(lVar1), lVar1 != 0)) {
    return (*(byte *)(lVar1 + 0x6c) & 2) == 0;
  }
  return false;
}



// FUNCTION 147ab9dca FUN_147ab9dca body=185 status=ok
// SIG undefined FUN_147ab9dca(void)

void FUN_147ab9dca(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,local_20,1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x1f0);
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab9e84 FUN_147ab9e84 body=185 status=ok
// SIG undefined FUN_147ab9e84(void)

void FUN_147ab9e84(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,local_20,1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x170);
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab9f3e FUN_147ab9f3e body=185 status=ok
// SIG undefined FUN_147ab9f3e(void)

void FUN_147ab9f3e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,local_20,1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x178);
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ab9ff8 FUN_147ab9ff8 body=157 status=ok
// SIG undefined FUN_147ab9ff8(void)

void FUN_147ab9ff8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147aba096(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aba096 FUN_147aba096 body=73 status=ok
// SIG undefined FUN_147aba096(void)

undefined4 FUN_147aba096(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar1 == 0) {
    uVar2 = 0x3f800000;
  }
  else {
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x2b0);
    }
    uVar2 = *(undefined4 *)(lVar1 + 0x4c8);
  }
  return uVar2;
}



// FUNCTION 147aba0e0 FUN_147aba0e0 body=335 status=ok
// SIG undefined FUN_147aba0e0(void)

void FUN_147aba0e0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14586686c(local_38 + 2,local_38,local_3c);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aba230 FUN_147aba230 body=391 status=ok
// SIG undefined FUN_147aba230(void)

void FUN_147aba230(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[4] = 0;
  local_58[5] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 4);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar1 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14126d676(local_58 + 4,plVar1,plVar2);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (local_58[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aba3b8 FUN_147aba3b8 body=155 status=ok
// SIG undefined FUN_147aba3b8(void)

void FUN_147aba3b8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147aba454(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aba454 FUN_147aba454 body=163 status=ok
// SIG undefined FUN_147aba454(void)

undefined4 FUN_147aba454(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = 0;
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar1 != '\0') {
      lVar3 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      if ((lVar3 != 0) && (uVar2 = 0, (*(byte *)(lVar3 + 0x156) & 2) != 0)) {
        FUN_14051bf56(lVar3,local_30);
        if (local_28 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_14795f26e();
        }
        FUN_14051bf10(local_30);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aba4f8 FUN_147aba4f8 body=155 status=ok
// SIG undefined FUN_147aba4f8(void)

void FUN_147aba4f8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1463ccf40(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aba594 FUN_147aba594 body=185 status=ok
// SIG undefined FUN_147aba594(void)

void FUN_147aba594(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,local_20,1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144b2c470(lVar2);
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aba64e FUN_147aba64e body=196 status=ok
// SIG undefined FUN_147aba64e(void)

void FUN_147aba64e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,local_20,1);
  uVar2 = 0;
  if ((lVar1 != 0) && (uVar2 = 0, *(longlong *)(lVar1 + 0x178) != 0)) {
    uVar2 = *(undefined4 *)(*(longlong *)(lVar1 + 0x178) + 0x3b0);
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aba714 FUN_147aba714 body=164 status=ok
// SIG undefined FUN_147aba714(void)

void FUN_147aba714(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(local_20 + 0x10);
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aba7ba FUN_147aba7ba body=146 status=ok
// SIG undefined FUN_147aba7ba(void)

void FUN_147aba7ba(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1400b22c2(&local_28,"Windows");
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aba84e FUN_147aba84e body=29 status=ok
// SIG undefined FUN_147aba84e(void)

undefined8 FUN_147aba84e(undefined8 param_1)

{
  FUN_1400b22c2(param_1,"Windows");
  return param_1;
}



// FUNCTION 147aba86c FUN_147aba86c body=274 status=ok
// SIG undefined FUN_147aba86c(void)

void FUN_147aba86c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1414fb874(local_20,local_24);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x448);
    if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
      FUN_1456cec3c(lVar1);
    }
  }
  *param_3 = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147aba980 FUN_147aba980 body=230 status=ok
// SIG undefined FUN_147aba980(void)

void FUN_147aba980(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147abaa68(local_20,local_24);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abaa68 FUN_147abaa68 body=70 status=ok
// SIG undefined FUN_147abaa68(void)

longlong FUN_147abaa68(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1414fb874();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x3d0), lVar1 != 0)) {
    lVar2 = FUN_144a7cacc();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147abaaae FUN_147abaaae body=236 status=ok
// SIG undefined FUN_147abaaae(void)

void FUN_147abaaae(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1414fb874(local_20,local_24);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abab9c FUN_147abab9c body=250 status=ok
// SIG undefined FUN_147abab9c(void)

void FUN_147abab9c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  uVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140adf126(&local_24,local_34);
  uVar1 = FUN_147abadce(uVar1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abac98 FUN_147abac98 body=76 status=ok
// SIG undefined FUN_147abac98(void)

void FUN_147abac98(undefined8 param_1)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140adf126(&local_1c);
  FUN_147abadce(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abace6 FUN_147abace6 body=230 status=ok
// SIG undefined FUN_147abace6(void)

void FUN_147abace6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147abadce(local_20,local_24);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abadce FUN_147abadce body=200 status=ok
// SIG undefined FUN_147abadce(void)

undefined8 FUN_147abadce(undefined8 param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x238) < 1)) {
    uVar2 = 0;
  }
  else {
    lVar3 = 0;
    lVar4 = 0;
    do {
      uVar2 = FUN_14479d2ce(*(longlong *)(lVar1 + 0x230) + lVar3);
      FUN_147c9996e(uVar2,&local_44);
      if (local_44 == param_2 && local_44 != -1) break;
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 8;
      uVar2 = 0;
    } while (lVar4 < *(int *)(lVar1 + 0x238));
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147abae98 FUN_147abae98 body=177 status=ok
// SIG undefined FUN_147abae98(void)

void FUN_147abae98(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 == 0) {
    local_1c = 0xffffffff;
  }
  else {
    FUN_147c9996e(local_28,&local_1c);
  }
  *param_3 = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abaf4a FUN_147abaf4a body=261 status=ok
// SIG undefined FUN_147abaf4a(void)

void FUN_147abaf4a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1414fb874(local_20,local_24);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_14364b714(lVar1);
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abb050 FUN_147abb050 body=301 status=ok
// SIG undefined FUN_147abb050(void)

void FUN_147abb050(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [36];
  uint local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  uVar1 = local_24;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = (ulonglong)local_24;
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,local_20,1);
  if ((((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x178), lVar2 == 0)) || ((int)uVar1 < 0)) ||
     (*(int *)(lVar2 + 0x3b0) <= (int)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x3a8) + uVar4 * 8);
  }
  *param_3 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abb17e FUN_147abb17e body=339 status=ok
// SIG undefined FUN_147abb17e(void)

void FUN_147abb17e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_60 = &PTR_FUN_14a5af930;
  local_40 = 0;
  uStack_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  pppuVar2 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar2 = &local_60;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14151ed84(local_68,pppuVar2);
  *param_3 = uVar1;
  local_60 = &PTR_FUN_14a5af930;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  local_60 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])(&local_58);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abb2d2 FUN_147abb2d2 body=188 status=ok
// SIG undefined FUN_147abb2d2(void)

void FUN_147abb2d2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,local_20,1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x6e0);
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abb390 FUN_147abb390 body=232 status=ok
// SIG undefined FUN_147abb390(void)

void FUN_147abb390(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_147abb47a(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abb47a FUN_147abb47a body=369 status=ok
// SIG undefined FUN_147abb47a(void)

longlong FUN_147abb47a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = param_2;
  if (param_2 != 0) {
    lVar5 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar5 != 0) {
      FUN_147b987b0(&local_60,&local_50,lVar5);
      cVar4 = FUN_14622a6c4(&local_60);
      if (cVar4 != '\0') {
        FUN_140b1283a(&local_70,&DAT_149e065c6,&local_60);
        if (CONCAT44(uStack_5c,local_60) != 0) {
          FUN_1400020a8();
        }
        local_60 = local_70;
        uStack_5c = uStack_6c;
        iStack_58 = iStack_68;
        uStack_54 = uStack_64;
      }
      iVar1 = *(int *)(lVar5 + 0x90);
      bVar3 = true;
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(lVar5 + 0x88);
        lVar7 = 0;
        do {
          lVar5 = *(longlong *)(lVar2 + lVar7);
          if (lVar5 != 0) {
            FUN_147b98996(lVar5,&local_70);
            iVar8 = iStack_58 + -1;
            if (iStack_58 == 0) {
              iVar8 = 0;
            }
            puVar6 = &DAT_149dfb77a;
            if (iStack_58 != 0) {
              puVar6 = (undefined2 *)CONCAT44(uStack_5c,local_60);
            }
            cVar4 = FUN_144a38768(&local_70,puVar6,iVar8,1);
            if (CONCAT44(uStack_6c,local_70) != 0) {
              FUN_1400020a8();
            }
            if (cVar4 != '\0') {
              bVar3 = false;
              goto LAB_147abb5a7;
            }
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)iVar1 * 8 != lVar7);
        bVar3 = true;
      }
LAB_147abb5a7:
      if (CONCAT44(uStack_5c,local_60) != 0) {
        FUN_1400020a8();
      }
      if (!bVar3) goto LAB_147abb5bd;
    }
  }
  lVar5 = 0;
LAB_147abb5bd:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abb5ec FUN_147abb5ec body=231 status=ok
// SIG undefined FUN_147abb5ec(void)

void FUN_147abb5ec(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined4 local_11c;
  undefined4 local_7c;
  undefined4 local_50;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  memset(local_120,0,0x100);
  local_50 = 0xffffffff;
  local_11c = 0x3f800000;
  local_7c = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_120);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_120);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_120;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  uVar2 = FUN_14479d2ce(puVar3 + 0xb0);
  uVar1 = FUN_142a2f8ea(uVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abb6d4 FUN_147abb6d4 body=188 status=ok
// SIG undefined FUN_147abb6d4(void)

void FUN_147abb6d4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,local_20,1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x6d0);
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abb792 FUN_147abb792 body=188 status=ok
// SIG undefined FUN_147abb792(void)

void FUN_147abb792(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,local_20,1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x6d8);
  }
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abb850 FUN_147abb850 body=155 status=ok
// SIG undefined FUN_147abb850(void)

void FUN_147abb850(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147abb8ec(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abb8ec FUN_147abb8ec body=72 status=ok
// SIG undefined FUN_147abb8ec(void)

undefined8 FUN_147abb8ec(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar1 != 0) {
    lVar1 = FUN_1449baec6(lVar1);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147abb926. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x188))(lVar1 + 0x28);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 147abb934 FUN_147abb934 body=832 status=ok
// SIG undefined FUN_147abb934(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_147abb934(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_16d8 [32];
  undefined1 *local_16b8;
  undefined1 local_16a8 [152];
  undefined4 local_1610;
  char local_160c;
  undefined8 local_1608;
  undefined4 local_1600;
  undefined1 local_15f8 [2088];
  longlong local_dd0;
  longlong lStack_d48;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined8 local_d28;
  undefined8 uStack_d20;
  undefined8 auStack_d18 [12];
  char local_cb8;
  undefined4 local_ca8;
  undefined4 uStack_ca4;
  undefined4 uStack_ca0;
  undefined4 uStack_c9c;
  undefined4 local_c98;
  undefined4 uStack_c94;
  undefined4 uStack_c90;
  undefined4 uStack_c8c;
  undefined8 local_c88;
  undefined1 local_c78 [128];
  undefined1 local_bf8 [128];
  undefined1 local_b78 [128];
  undefined1 local_af8 [152];
  undefined4 local_a60;
  char local_a5c;
  undefined8 local_a58;
  undefined4 local_a50;
  undefined1 auStack_a48 [2088];
  longlong local_220;
  longlong local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 auStack_168 [12];
  char local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_c8 [128];
  undefined1 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_16d8;
  FUN_1400e6e60(local_af8);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_af8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_af8);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b78);
  }
  puVar2 = local_b78;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_bf8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_bf8);
  }
  puVar5 = local_bf8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c78);
  }
  puVar6 = local_c78;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  memcpy(local_16a8,local_af8,0x98);
  local_160c = local_a5c;
  if (local_a5c == '\x01') {
    local_1610 = local_a60;
  }
  local_1600 = local_a50;
  local_1608 = local_a58;
  FUN_144903306(local_15f8,auStack_a48);
  local_d38 = local_188;
  uStack_d30 = uStack_180;
  local_d28 = local_178;
  uStack_d20 = uStack_170;
  local_cb8 = local_108;
  if (local_108 == '\x01') {
    puVar3 = auStack_168;
    puVar4 = auStack_d18;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  local_c88 = local_d8;
  local_c98 = local_e8;
  uStack_c94 = uStack_e4;
  uStack_c90 = uStack_e0;
  uStack_c8c = uStack_dc;
  local_ca8 = local_f8;
  uStack_ca4 = uStack_f4;
  uStack_ca0 = uStack_f0;
  uStack_c9c = uStack_ec;
  local_48 = 0;
  local_16b8 = puVar6;
  FUN_145aab3bc(local_16a8,local_c8,puVar2,puVar5);
  if (local_cb8 == '\x01') {
    local_cb8 = '\0';
  }
  if (lStack_d48 != 0) {
    FUN_1400020a8();
  }
  if (local_dd0 != 0) {
    FUN_1400020a8();
  }
  if (local_160c == '\x01') {
    local_160c = '\0';
  }
  if (local_108 == '\x01') {
    local_108 = '\0';
  }
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  if (local_220 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_16d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abbc76 FUN_147abbc76 body=188 status=ok
// SIG undefined FUN_147abbc76(void)

void FUN_147abbc76(undefined8 param_1,longlong param_2,double *param_3)

{
  longlong lVar1;
  double dVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,local_20,1);
  if (lVar1 == 0) {
    dVar2 = 0.0;
  }
  else {
    dVar2 = (double)*(float *)(lVar1 + 0x6f4);
  }
  *param_3 = dVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abbd34 FUN_147abbd34 body=202 status=ok
// SIG undefined FUN_147abbd34(void)

void FUN_147abbd34(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,local_20,1);
  puVar3 = &DAT_14c9a5298;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(lVar2 + 0x710);
  }
  uVar1 = *(undefined4 *)(puVar3 + 1);
  *param_3 = *puVar3;
  *(undefined4 *)(param_3 + 1) = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abbe00 FUN_147abbe00 body=392 status=ok
// SIG undefined FUN_147abbe00(void)

void FUN_147abbe00(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_40;
  uStack_64 = uStack_3c;
  uStack_60 = uStack_38;
  uStack_5c = uStack_34;
  local_58 = local_30;
  uVar1 = FUN_147abbf8a(local_20,local_28,&local_68,local_44);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abbf8a FUN_147abbf8a body=399 status=ok
// SIG undefined FUN_147abbf8a(void)

int FUN_147abbf8a(undefined8 param_1,longlong param_2,undefined4 *param_3,float param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_118 [40];
  longlong local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  double local_d0;
  undefined1 local_c0 [8];
  undefined1 local_b8 [28];
  char local_9c;
  longlong local_90;
  char local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  iVar7 = 0;
  if (lVar5 != 0) {
    local_d0 = (double)param_4;
    local_d8 = *(undefined8 *)(param_3 + 4);
    local_e8 = *param_3;
    uStack_e4 = param_3[1];
    uStack_e0 = param_3[2];
    uStack_dc = param_3[3];
    local_f0 = FUN_144a7ce84();
    if ((local_f0 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_f0);
    }
    FUN_147ac850a(local_c0,lVar5,&local_f0,5);
    iVar7 = 0;
    if (local_9c == '\0') {
      iVar7 = 0;
      do {
        if ((local_90 != 0) && (iVar1 = *(int *)(local_90 + 0x5b8), (longlong)iVar1 != 0)) {
          lVar5 = *(longlong *)(local_90 + 0x5b0);
          lVar6 = 0;
          do {
            lVar2 = *(longlong *)(lVar5 + lVar6);
            if (lVar2 != 0) {
              lVar3 = *(longlong *)(lVar2 + 0x660);
              if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
                FUN_1456cec3c(lVar3);
              }
              if (lVar3 == param_2) {
                iVar4 = FUN_147ae86e6(lVar2,&local_e8);
                iVar7 = iVar7 + iVar4;
              }
            }
            lVar6 = lVar6 + 8;
          } while ((longlong)iVar1 * 8 != lVar6);
        }
        FUN_1456ea0d4(local_c0);
      } while (local_9c == '\0');
    }
    if (local_68 == '\x01') {
      FUN_14024445c(local_b8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 147abc120 FUN_147abc120 body=233 status=ok
// SIG undefined FUN_147abc120(void)

void FUN_147abc120(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = local_28;
  if ((int)uStack_20 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  uVar1 = FUN_14054d46e(&DAT_14c846b20,puVar2);
  *param_3 = uVar1;
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147abc210 FUN_147abc210 body=360 status=ok
// SIG undefined FUN_147abc210(void)

void FUN_147abc210(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void *_Src;
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48 [2];
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_30;
  local_50 = (int)uStack_30;
  if (lVar2 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,uStack_30 & 0xffffffff,0);
    memcpy(local_58,_Src,lVar2 * 2);
  }
  uVar1 = FUN_1415db91c(&local_58,local_48);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abc380 FUN_147abc380 body=313 status=ok
// SIG undefined FUN_147abc380(void)

void FUN_147abc380(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined1 local_40 [24];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar3 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147abc4ba(local_28,puVar3,local_44);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abc4ba FUN_147abc4ba body=301 status=ok
// SIG undefined FUN_147abc4ba(void)

ulonglong FUN_147abc4ba(undefined8 param_1,double *param_2,float param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb0d2b0 != 0) {
    lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar2 != 0) {
      uVar5 = 0;
      if (*(int *)(lVar2 + 0x238) < 1) goto LAB_147abc5b7;
      lVar6 = 0;
      do {
        plVar3 = (longlong *)FUN_14479d2ce(*(longlong *)(lVar2 + 0x230) + lVar6);
        if (plVar3 != (longlong *)0x0) {
          cVar1 = (**(code **)(*plVar3 + 0x6c8))(plVar3);
          if ((cVar1 != '\0') && (plVar3 = (longlong *)plVar3[0x89], plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 0x730))(plVar3,&local_68);
            if ((param_2[2] - local_58) * (param_2[2] - local_58) +
                (param_2[1] - local_60) * (param_2[1] - local_60) +
                (*param_2 - local_68) * (*param_2 - local_68) <= (double)(param_3 * param_3)) {
              uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
              goto LAB_147abc5b7;
            }
          }
        }
        lVar6 = lVar6 + 8;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while ((int)uVar4 < *(int *)(lVar2 + 0x238));
    }
  }
  uVar5 = 0;
LAB_147abc5b7:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abc5ee FUN_147abc5ee body=185 status=ok
// SIG undefined FUN_147abc5ee(void)

void FUN_147abc5ee(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,local_20,1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144ae5576(lVar2);
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abc6ae FUN_147abc6ae body=155 status=ok
// SIG undefined FUN_147abc6ae(void)

void FUN_147abc6ae(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147abc74a(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abc74a FUN_147abc74a body=58 status=ok
// SIG undefined FUN_147abc74a(void)

undefined1 FUN_147abc74a(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar1 != 0) && (lVar1 = FUN_1449baec6(lVar1), lVar1 != 0)) {
    return *(undefined1 *)(lVar1 + 0x3c8);
  }
  return 0;
}



// FUNCTION 147abc784 FUN_147abc784 body=245 status=ok
// SIG undefined FUN_147abc784(void)

void FUN_147abc784(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
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
  uVar1 = FUN_147abc87a(local_28,local_2c);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abc87a FUN_147abc87a body=109 status=ok
// SIG undefined FUN_147abc87a(void)

undefined8 FUN_147abc87a(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  cVar1 = FUN_147ac7b42(local_28,param_1,param_2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_147ac795e(local_28);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abc8f4 FUN_147abc8f4 body=524 status=ok
// SIG undefined FUN_147abc8f4(void)

void FUN_147abc8f4(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong lStack_40;
  int local_38;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
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
  iVar2 = local_34;
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  iVar1 = local_38;
  local_50 = 0xffffffffffffffff;
  uStack_48 = 0;
  lStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (undefined4)local_50;
  uStack_64 = local_50._4_4_;
  uStack_60 = (undefined4)uStack_48;
  uStack_5c = uStack_48._4_4_;
  local_58 = lStack_40;
  if ((lStack_40 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_78 = &local_68;
  FUN_147abcb02(local_28,local_30,iVar2 != 0,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abcb02 FUN_147abcb02 body=226 status=ok
// SIG undefined FUN_147abcb02(void)

void FUN_147abcb02(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  longlong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = param_2;
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar1 != 0) {
    uVar2 = FUN_14119d0a4(lVar1);
    lVar3 = FUN_147ad17da(uVar2,*(undefined8 *)(param_5 + 0x10),*(undefined4 *)(param_5 + 4));
    if (lVar3 == 0) {
      uVar4 = FUN_14001cc68(0x38,0x10);
      local_50 = param_5;
      local_58 = param_4;
      local_48 = lVar1;
      FUN_147b98518(uVar4,1,&local_40,param_3);
      FUN_140b1330e(uVar2,*(undefined8 *)(param_5 + 0x10),*(undefined4 *)(param_5 + 4),uVar4);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abcbf2 FUN_147abcbf2 body=731 status=ok
// SIG undefined FUN_147abcbf2(void)

void FUN_147abcbf2(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong lStack_78;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  void *pvStack_50;
  ulonglong local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_58 = 0;
  pvStack_50 = (void *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  FUN_1446ef9c4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  iVar2 = local_6c;
  local_70 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  iVar1 = local_70;
  local_88 = 0xffffffffffffffff;
  uStack_80 = 0;
  lStack_78 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = (undefined4)local_88;
  uStack_a4 = local_88._4_4_;
  uStack_a0 = (undefined4)uStack_80;
  uStack_9c = uStack_80._4_4_;
  local_98 = lStack_78;
  if ((lStack_78 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  _Src = pvStack_50;
  local_d0 = local_68;
  local_c8 = (undefined4)uStack_60;
  uStack_c4 = uStack_60._4_4_;
  uStack_c0 = (undefined4)local_58;
  uStack_bc = local_58._4_4_;
  local_b8 = (void *)0x0;
  lVar3 = (longlong)(int)local_48;
  local_b0 = (int)local_48;
  if (lVar3 == 0) {
    local_ac = 0;
  }
  else {
    FUN_1446dd670(&local_b8,local_48 & 0xffffffff,0);
    memcpy(local_b8,_Src,lVar3 * 2);
  }
  local_d8 = &local_a8;
  FUN_147abcece(local_38,&local_d0,iVar2 != 0,iVar1 != 0);
  if (pvStack_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abcece FUN_147abcece body=267 status=ok
// SIG undefined FUN_147abcece(void)

void FUN_147abcece(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5)

{
  undefined2 *puVar1;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_60 [2];
  undefined2 *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14475cc44(param_2 + 8,local_60);
  FUN_14064b666(&local_50,local_60);
  puVar1 = local_50;
  if (local_48 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_40,puVar1,1);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  local_78 = *param_5;
  uStack_74 = param_5[1];
  uStack_70 = param_5[2];
  uStack_6c = param_5[3];
  local_68 = *(longlong *)(param_5 + 4);
  if ((local_68 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_88 = &local_78;
  FUN_147abcb02(param_1,local_40,param_3,param_4);
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147abcfea FUN_147abcfea body=260 status=ok
// SIG undefined FUN_147abcfea(void)

void FUN_147abcfea(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_147abd0f0(local_20,&local_30);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abd0f0 FUN_147abd0f0 body=167 status=ok
// SIG undefined FUN_147abd0f0(void)

undefined8 FUN_147abd0f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((((param_1 != 0) && (lVar1 = *param_2, lVar1 != 0)) && (lVar2 = FUN_1446f8646(), lVar2 != 0))
      && ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
           lVar2 + 0x30)))) && (lVar1 = *param_2, lVar1 != 0)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
    }
    lVar2 = FUN_1446f8646();
    if ((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        lVar3 = lVar1;
      }
    }
    if (*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30);
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),
                      *(longlong *)(lVar1 + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30);
    }
  }
  return 0;
}



// FUNCTION 147abd19e FUN_147abd19e body=508 status=ok
// SIG undefined FUN_147abd19e(void)

void FUN_147abd19e(undefined8 param_1,longlong param_2)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  ulonglong uStack_50;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  iVar1 = local_3c;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  _Src = local_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_50;
  local_60 = (int)uStack_50;
  if (lVar2 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,uStack_50 & 0xffffffff,0);
    memcpy(local_68,_Src,lVar2 * 2);
  }
  FUN_1434f5cb4(local_30,local_38,iVar1 != 0,&local_68);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abd3a2 FUN_147abd3a2 body=656 status=ok
// SIG undefined FUN_147abd3a2(void)

void FUN_147abd3a2(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  ulonglong uStack_80;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  void *pvStack_50;
  ulonglong local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_58 = 0;
  pvStack_50 = (void *)0x0;
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  FUN_1446ef9c4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  iVar2 = local_6c;
  local_88 = (void *)0x0;
  uStack_80 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  pvVar1 = local_88;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_80;
  local_90 = (int)uStack_80;
  if (lVar3 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,uStack_80 & 0xffffffff,0);
    memcpy(local_98,pvVar1,lVar3 * 2);
  }
  pvVar1 = pvStack_50;
  local_c0 = local_68;
  local_b8 = (undefined4)uStack_60;
  uStack_b4 = uStack_60._4_4_;
  uStack_b0 = (undefined4)local_58;
  uStack_ac = local_58._4_4_;
  local_a8 = (void *)0x0;
  lVar3 = (longlong)(int)local_48;
  local_a0 = (int)local_48;
  if (lVar3 == 0) {
    local_9c = 0;
  }
  else {
    FUN_1446dd670(&local_a8,local_48 & 0xffffffff,0);
    memcpy(local_a8,pvVar1,lVar3 * 2);
  }
  FUN_147abd634(local_38,&local_c0,iVar2 != 0,&local_98);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (pvStack_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abd634 FUN_147abd634 body=302 status=ok
// SIG undefined FUN_147abd634(void)

void FUN_147abd634(undefined8 param_1,longlong param_2,undefined4 param_3,longlong *param_4)

{
  void *_Src;
  undefined2 *puVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68 [2];
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14475cc44(param_2 + 8,local_68);
  FUN_14064b666(&local_58,local_68);
  puVar1 = local_58;
  if (local_50 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_48,puVar1,1);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  local_78 = (void *)0x0;
  local_70 = (int)param_4[1];
  lVar2 = (longlong)local_70;
  _Src = (void *)*param_4;
  if (lVar2 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,_Src,lVar2 * 2);
  }
  FUN_1434f5cb4(param_1,local_48,param_3,&local_78);
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147abd764 FUN_147abd764 body=442 status=ok
// SIG undefined FUN_147abd764(void)

void FUN_147abd764(undefined8 param_1,longlong param_2,longlong *param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [32];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48 [2];
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  _Src = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_60 = (int)uStack_30;
  if (lVar1 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,uStack_30 & 0xffffffff,0);
    memcpy(local_68,_Src,lVar1 * 2);
  }
  FUN_14126d510(&local_58,&local_68,local_48);
  if (&local_58 == param_3) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_58;
    local_58 = 0;
    *(undefined4 *)(param_3 + 1) = local_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_4c;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abd920 FUN_147abd920 body=710 status=ok
// SIG undefined FUN_147abd920(void)

void FUN_147abd920(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [8];
  longlong local_70;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  FUN_147a64148(local_78);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar6 = local_78;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_80 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  uVar4 = local_58;
  uVar3 = local_7c;
  uVar2 = local_80;
  uVar1 = local_84;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_60 != 0) {
    uVar5 = FUN_1434d067a(local_60,puVar6);
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = uVar1;
    local_90 = 1;
    FUN_147abe38e(uVar4,uVar5,uVar3,uVar2);
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abdbe8 FUN_147abdbe8 body=954 status=ok
// SIG undefined FUN_147abdbe8(void)

void FUN_147abdbe8(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_40 [8];
  longlong local_38;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_147a64148(local_40);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = local_40;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_78 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_88 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = &local_a8;
  local_a8 = local_70;
  uStack_a0 = uStack_68;
  local_98 = local_60;
  local_c8 = local_58;
  uStack_c4 = uStack_54;
  uStack_c0 = uStack_50;
  uStack_bc = uStack_4c;
  local_b8 = local_48;
  local_d8 = local_88;
  local_e0 = local_7c;
  local_e8 = local_78;
  local_f0 = local_74;
  FUN_147abdfa4(local_20,local_28,puVar1);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abdfa4 FUN_147abdfa4 body=286 status=ok
// SIG undefined FUN_147abdfa4(void)

void FUN_147abdfa4(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 != 0) {
    local_68 = param_5[2];
    local_78 = *param_5;
    uStack_70 = param_5[1];
    local_98 = *param_4;
    uStack_94 = param_4[1];
    uStack_90 = param_4[2];
    uStack_8c = param_4[3];
    local_88 = *(undefined8 *)(param_4 + 4);
    uVar1 = FUN_1434d067a(param_2,param_3);
    local_b8 = 0;
    uStack_b0 = 0;
    local_c0 = param_9;
    local_c8 = param_8;
    local_d0 = param_7;
    local_d8 = param_6;
    local_a8 = 0;
    FUN_147abea3c(param_1,uVar1,&local_98,&local_78);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abe0ca FUN_147abe0ca body=707 status=ok
// SIG undefined FUN_147abe0ca(void)

void FUN_147abe0ca(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
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
  local_50 = local_44 != 0;
  local_58 = local_40;
  local_60 = local_38;
  local_68 = local_2c;
  FUN_147abe38e(local_18,local_20,local_24,local_28);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abe38e FUN_147abe38e body=596 status=ok
// SIG undefined FUN_147abe38e(void)

void FUN_147abe38e(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                  float param_5,longlong param_6,longlong param_7,char param_8)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_a28 [32];
  longlong local_a08;
  ulonglong uStack_a00;
  undefined1 local_9f4 [4];
  undefined1 local_9f0 [8];
  longlong local_9e8;
  undefined1 local_9d8 [176];
  undefined1 local_928 [232];
  byte local_840;
  byte local_83f;
  float local_824;
  undefined4 local_7c0;
  undefined4 local_7bc;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a28;
  if (DAT_14cb0d2b0 != (longlong *)0x0 && param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar1 != '\0') {
      lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x156) & 2) != 0)) {
        FUN_14051bf56(lVar2,local_9f0);
        if (local_9e8 != 0) {
          FUN_1478b27ac(local_9d8);
          FUN_1478b3c62(local_9d8,param_2);
          FUN_1478b3c36(local_9d8,lVar2);
          FUN_1478b3c22(local_9d8,param_4);
          FUN_1478b3c2c(local_9d8,param_3);
          local_824 = 0.0;
          if (0.0 <= param_5) {
            local_824 = param_5;
          }
          local_83f = local_83f & 0x7f | param_8 << 7;
          local_840 = local_840 & 0xfd;
          if (param_6 != 0) {
            local_a08 = param_6;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(param_6);
            }
            FUN_1479718da(local_928,local_9f4,&local_a08,0);
          }
          local_7bc = *(undefined4 *)((longlong)param_2 + 0x10c);
          local_7c0 = (**(code **)(*param_2 + 0x2e8))(param_2);
          if (param_7 == 0) {
            param_7 = FUN_147ac695f(param_1);
          }
          FUN_1478b3f36(local_9d8,param_7);
          local_a08 = 0;
          uStack_a00 = 0;
          FUN_147979cbe(param_7,&local_a08);
          FUN_147961ab6(local_9e8,local_9d8,&local_a08);
          FUN_145aa5488(local_a08,uStack_a00 & 0xffffffff);
          if (local_a08 != 0) {
            FUN_1400020a8();
          }
          FUN_1478b3298(local_9d8);
        }
        FUN_14051bf10(local_9f0);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_a28) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abe5e4 FUN_147abe5e4 body=1111 status=ok
// SIG undefined FUN_147abe5e4(void)

void FUN_147abe5e4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_78 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_80 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_50;
  uStack_90 = uStack_48;
  local_88 = local_40;
  local_b8 = local_38;
  uStack_b4 = uStack_34;
  uStack_b0 = uStack_30;
  uStack_ac = uStack_2c;
  local_a8 = local_28;
  local_c8 = local_80;
  local_d0 = local_78;
  local_d8 = local_70;
  local_e0 = local_68;
  local_e8 = local_5c;
  local_f0 = local_58;
  local_f8 = local_54;
  FUN_147abea3c(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abea3c FUN_147abea3c body=470 status=ok
// SIG undefined FUN_147abea3c(void)

void FUN_147abea3c(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,longlong param_10,longlong param_11)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  undefined1 local_98 [8];
  longlong local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (DAT_14cb0d2b0 != (longlong *)0x0 && param_2 != 0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar1 != '\0') {
      lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x156) & 2) != 0)) {
        FUN_14051bf56(lVar2,local_98);
        if (local_90 != 0) {
          local_a8 = 0;
          uStack_a0 = 0;
          if (param_11 != 0) {
            FUN_147961b4c(&local_a8,param_11 + 0x28);
          }
          if (param_10 == 0) {
            param_10 = FUN_147ac695f(param_1);
          }
          FUN_147979cbe(param_10,&local_a8);
          local_c0 = param_9;
          local_c8 = param_8;
          local_e0 = param_7;
          local_e8 = param_6;
          local_d8 = param_3;
          local_d0 = param_4;
          local_b8 = &local_a8;
          local_b0 = param_10;
          FUN_143406d6c(local_90,param_2,lVar2,param_5);
          FUN_145aa5488(local_a8,uStack_a0 & 0xffffffff);
          if (local_a8 != 0) {
            FUN_1400020a8();
          }
        }
        FUN_14051bf10(local_98);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abec1a FUN_147abec1a body=757 status=ok
// SIG undefined FUN_147abec1a(void)

void FUN_147abec1a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_80 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  local_88 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  uVar4 = local_7c;
  uVar3 = local_80;
  uVar2 = local_84;
  iVar1 = local_88;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_78;
  uStack_a4 = uStack_74;
  uStack_a0 = uStack_70;
  uStack_9c = uStack_6c;
  local_98 = local_68;
  local_b0 = local_60;
  if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_b8 = iVar1 != 0;
  local_c0 = uVar2;
  local_c8 = uVar3;
  FUN_147abef10(local_58,&local_b0,&local_a8,uVar4);
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abef10 FUN_147abef10 body=250 status=ok
// SIG undefined FUN_147abef10(void)

void FUN_147abef10(undefined8 param_1,longlong *param_2,undefined4 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined1 local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar1 != 0) {
    local_68 = *(undefined8 *)(param_3 + 4);
    local_78 = *param_3;
    uStack_74 = param_3[1];
    uStack_70 = param_3[2];
    uStack_6c = param_3[3];
    local_80 = *param_2;
    if ((local_80 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_88 = param_7;
    local_90 = param_6;
    local_98 = param_5;
    FUN_147c934c6(lVar1,&local_80,&local_78,param_4);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abf00c FUN_147abf00c body=224 status=ok
// SIG undefined FUN_147abf00c(void)

void FUN_147abf00c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147abf0ee(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abf0ee FUN_147abf0ee body=173 status=ok
// SIG undefined FUN_147abf0ee(void)

void FUN_147abf0ee(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb0d2b0 != (longlong *)0x0 && param_2 != 0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar1 != '\0') {
      lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x156) & 2) != 0)) {
        FUN_14051bf56(lVar2,local_30);
        if (local_28 != 0) {
          FUN_143401baa(local_28,param_2,0);
        }
        FUN_14051bf10(local_30);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abf19c FUN_147abf19c body=148 status=ok
// SIG undefined FUN_147abf19c(void)

void FUN_147abf19c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147abf232(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abf232 FUN_147abf232 body=445 status=ok
// SIG undefined FUN_147abf232(void)

void FUN_147abf232(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  uint local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14795f1f0(&local_58,0x10,1,0);
  uVar6 = (ulonglong)local_48;
  if ((-1 < (int)local_48) && ((int)local_48 < local_50)) {
    do {
      lVar5 = (**(code **)(**(longlong **)(local_58 + (uVar6 & 0xffffffff) * 8) + 0x318))();
      if (lVar5 != 0) {
        local_78 = *(longlong *)(lVar5 + 0x18);
        FUN_1400021e4(&local_78,&local_68);
        local_40 = *(undefined8 *)(param_1 + 0x18);
        FUN_1400021e4(&local_40,&local_78);
        if (local_60 == local_70) {
          bVar9 = true;
          if (1 < local_60) {
            lVar5 = 0;
            while( true ) {
              uVar1 = *(ushort *)(local_68 + lVar5);
              uVar3 = (uint)uVar1;
              uVar2 = *(ushort *)(local_78 + lVar5);
              uVar8 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147abf30f;
                }
                iVar4 = uVar3 - uVar8;
                goto LAB_147abf3a5;
              }
              if (uVar1 == 0) break;
LAB_147abf30f:
              lVar5 = lVar5 + 2;
            }
            iVar4 = 0;
LAB_147abf3a5:
            bVar9 = iVar4 == 0;
          }
        }
        else {
          bVar9 = local_70 + local_60 == 1;
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (bVar9) {
          FUN_147abf486(*(undefined8 *)(local_58 + (longlong)(int)local_48 * 8));
        }
      }
      uVar6 = (longlong)(int)local_48;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
        local_48 = (uint)uVar6;
        if ((longlong)local_50 <= (longlong)uVar6) break;
      } while (*(longlong *)(local_58 + uVar6 * 8) == 0);
    } while ((-2 < (longlong)uVar7) && ((int)local_48 < local_50));
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147abf3f0 FUN_147abf3f0 body=148 status=ok
// SIG undefined FUN_147abf3f0(void)

void FUN_147abf3f0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147abf486(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abf486 FUN_147abf486 body=384 status=ok
// SIG undefined FUN_147abf486(void)

void FUN_147abf486(longlong param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 *local_68 [2];
  undefined8 local_58;
  undefined **local_48;
  undefined *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cb0d2b0 != (longlong *)0x0 && param_1 != 0) {
    cVar2 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar2 != '\0') {
      lVar4 = FUN_145992be8();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
      lVar4 = FUN_1410ed3ca();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
        cVar2 = FUN_147d407c2(param_1);
        if (cVar2 != '\0') {
          uVar3 = FUN_1436fb382(param_1);
          if (1 < uVar3) {
            uVar5 = FUN_140083894();
            plVar6 = (longlong *)FUN_147a355e6(uVar5);
            local_58 = 0;
            local_48 = &PTR_LAB_14a7fed80;
            local_40 = &DAT_143505064;
            local_68[0] = &LAB_1479879bc;
            FUN_1436fb532(param_1,local_78);
            local_80 = 0;
            local_88 = 0xff;
            (**(code **)(*plVar6 + 0xa8))(plVar6,local_78,1,local_68);
            if (local_70 != (longlong *)0x0) {
              LOCK();
              plVar6 = local_70 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)*local_70)(local_70);
                LOCK();
                piVar1 = (int *)((longlong)local_70 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_70 + 0x10))(local_70);
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abf628 FUN_147abf628 body=432 status=ok
// SIG undefined FUN_147abf628(void)

void FUN_147abf628(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  puVar4 = local_58;
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = local_48;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1401c9e06(local_30,puVar3,puVar4,local_5c != 0);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abf7da FUN_147abf7da body=224 status=ok
// SIG undefined FUN_147abf7da(void)

void FUN_147abf7da(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147abf8bc(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abf8bc FUN_147abf8bc body=179 status=ok
// SIG undefined FUN_147abf8bc(void)

void FUN_147abf8bc(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb0d2b0 != (longlong *)0x0 && param_2 != 0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar1 != '\0') {
      lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x156) & 2) != 0)) {
        FUN_14051bf56(lVar2,local_30);
        if (local_28 != 0) {
          FUN_1434019ac(local_28,param_2,0,0);
        }
        FUN_14051bf10(local_30);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abf970 FUN_147abf970 body=347 status=ok
// SIG undefined FUN_147abf970(void)

void FUN_147abf970(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_50;
  uStack_84 = uStack_4c;
  uStack_80 = uStack_48;
  uStack_7c = uStack_44;
  local_78 = local_40;
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,local_38,1);
  puVar2 = &DAT_14c9a5298;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x710);
  }
  local_30 = *puVar2;
  local_28 = *(undefined4 *)(puVar2 + 1);
  FUN_147a92d32(&local_68,&local_88);
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abfacc FUN_147abfacc body=347 status=ok
// SIG undefined FUN_147abfacc(void)

void FUN_147abfacc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_50;
  uStack_84 = uStack_4c;
  uStack_80 = uStack_48;
  uStack_7c = uStack_44;
  local_78 = local_40;
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,local_38,1);
  puVar2 = &DAT_14c9a5298;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)(lVar1 + 0x710);
  }
  local_30 = *puVar2;
  local_28 = *(undefined4 *)(puVar2 + 1);
  FUN_1434e162a(&local_68,&local_88);
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abfc2e FUN_147abfc2e body=226 status=ok
// SIG undefined FUN_147abfc2e(void)

void FUN_147abfc2e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147abfd12(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abfd12 FUN_147abfd12 body=116 status=ok
// SIG undefined FUN_147abfd12(void)

void FUN_147abfd12(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      lVar3 = FUN_144a7ba4c(param_1);
      if (lVar3 != 0) {
        if (param_2 == '\0') {
          lVar4 = 0;
        }
        else {
          lVar4 = *(longlong *)(param_1 + 0x3d0);
        }
        cVar1 = (**(code **)(**(longlong **)(lVar2 + 0x1f0) + 0x338))
                          (*(longlong **)(lVar2 + 0x1f0),lVar3);
        if ((lVar4 != 0) && (cVar1 != '\0')) {
          FUN_140aeefbc(lVar4,0,1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 147abfd8c FUN_147abfd8c body=321 status=ok
// SIG undefined FUN_147abfd8c(void)

void FUN_147abfd8c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  longlong local_38 [3];
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
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147abfece(local_20,local_38,local_3c);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abfece FUN_147abfece body=115 status=ok
// SIG undefined FUN_147abfece(void)

undefined4 FUN_147abfece(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  cVar1 = FUN_147ac7578();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_147ac770a(local_28,param_2,param_3);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147abff48 FUN_147abff48 body=231 status=ok
// SIG undefined FUN_147abff48(void)

void FUN_147abff48(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  uVar1 = FUN_147ac0030(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac0030 FUN_147ac0030 body=147 status=ok
// SIG undefined FUN_147ac0030(void)

ulonglong FUN_147ac0030(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  byte unaff_BL;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_14051bf56(lVar1,local_38);
    if (local_30 != 0) {
      unaff_BL = FUN_14795f026(local_30,param_2);
    }
    FUN_14051bf10(local_38);
    uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),local_30 != 0 & unaff_BL);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 147ac00c4 FUN_147ac00c4 body=224 status=ok
// SIG undefined FUN_147ac00c4(void)

void FUN_147ac00c4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ac01a6(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac01a6 FUN_147ac01a6 body=173 status=ok
// SIG undefined FUN_147ac01a6(void)

void FUN_147ac01a6(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb0d2b0 != (longlong *)0x0 && param_2 != 0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar1 != '\0') {
      lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x156) & 2) != 0)) {
        FUN_14051bf56(lVar2,local_30);
        if (local_28 != 0) {
          FUN_143400306(local_28,param_2);
        }
        FUN_14051bf10(local_30);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac025a FUN_147ac025a body=226 status=ok
// SIG undefined FUN_147ac025a(void)

void FUN_147ac025a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ac033e(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac033e FUN_147ac033e body=70 status=ok
// SIG undefined FUN_147ac033e(void)

void FUN_147ac033e(undefined8 param_1,byte param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar1 != 0) {
    lVar1 = FUN_1449baec6(lVar1);
    if (lVar1 != 0) {
      *(uint *)(lVar1 + 0x6c) = (*(uint *)(lVar1 + 0x6c) & 0xfffffffd) + (uint)(param_2 ^ 1) * 2;
    }
  }
  return;
}



// FUNCTION 147ac038a FUN_147ac038a body=226 status=ok
// SIG undefined FUN_147ac038a(void)

void FUN_147ac038a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ac046e(local_18,local_1c != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac046e FUN_147ac046e body=77 status=ok
// SIG undefined FUN_147ac046e(void)

void FUN_147ac046e(undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1449baec6(lVar1);
    if (plVar2 != (longlong *)0x0) {
      *(undefined1 *)(plVar2 + 0x79) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000147ac04ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x350))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147ac04c8 FUN_147ac04c8 body=233 status=ok
// SIG undefined FUN_147ac04c8(void)

void FUN_147ac04c8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1463cd9b8(local_20,local_24 != 0);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac05b2 FUN_147ac05b2 body=824 status=ok
// SIG undefined FUN_147ac05b2(void)

void FUN_147ac05b2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_58;
  local_70 = local_54;
  local_78 = local_50;
  local_80 = local_4c;
  local_88 = local_48;
  FUN_147ac08ec(local_38,local_3c,local_40,local_44);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac08ec FUN_147ac08ec body=351 status=ok
// SIG undefined FUN_147ac08ec(void)

void FUN_147ac08ec(undefined8 param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,float param_9)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined1 local_58 [8];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar1 != '\0') {
      lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x156) & 2) != 0)) {
        FUN_14051bf56(lVar2,local_58);
        if (local_50 != 0) {
          if (param_2 <= 0.0) {
            param_2 = 0.0;
          }
          if (param_3 <= 0.0) {
            param_3 = 0.0;
          }
          if (param_4 <= 0.0) {
            param_4 = 0.0;
          }
          if (param_5 <= 0.0) {
            param_5 = 0.0;
          }
          if (param_6 <= 0.0) {
            param_6 = 0.0;
          }
          if (param_7 <= 0.0) {
            param_7 = 0.0;
          }
          if (param_8 <= 0.0) {
            param_8 = 0.0;
          }
          if (param_9 <= 0.0) {
            param_9 = 0.0;
          }
          local_78 = param_2;
          local_74 = param_3;
          local_70 = param_4;
          local_6c = param_5;
          local_68 = param_6;
          local_64 = param_7;
          local_60 = param_8;
          local_5c = param_9;
          FUN_143408134();
        }
        FUN_14051bf10(local_58);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac0a4c FUN_147ac0a4c body=300 status=ok
// SIG undefined FUN_147ac0a4c(void)

void FUN_147ac0a4c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ac0b7a(local_18,local_1c,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac0b7a FUN_147ac0b7a body=183 status=ok
// SIG undefined FUN_147ac0b7a(void)

void FUN_147ac0b7a(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar1 != '\0') {
      lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x156) & 2) != 0)) {
        FUN_14051bf56(lVar2,local_48);
        if (local_40 != 0) {
          FUN_1434081f6(local_40,param_2,param_3);
        }
        FUN_14051bf10(local_48);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac0c32 FUN_147ac0c32 body=230 status=ok
// SIG undefined FUN_147ac0c32(void)

void FUN_147ac0c32(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1434f5fbe(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac0d1a FUN_147ac0d1a body=224 status=ok
// SIG undefined FUN_147ac0d1a(void)

void FUN_147ac0d1a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ac0dfc(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac0dfc FUN_147ac0dfc body=167 status=ok
// SIG undefined FUN_147ac0dfc(void)

void FUN_147ac0dfc(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar1 != '\0') {
      lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x156) & 2) != 0)) {
        FUN_14051bf56(lVar2,local_38);
        if (local_30 != 0) {
          FUN_1433ff806(local_30,param_2);
        }
        FUN_14051bf10(local_38);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac0ea4 FUN_147ac0ea4 body=222 status=ok
// SIG undefined FUN_147ac0ea4(void)

void FUN_147ac0ea4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ac0f84(local_18,local_1c);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac0f84 FUN_147ac0f84 body=100 status=ok
// SIG undefined FUN_147ac0f84(void)

void FUN_147ac0f84(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140adf126(&local_1c);
  if (param_1 != 0) {
    plVar1 = (longlong *)FUN_144a7ba4c(param_1);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x318))(plVar1,local_1c);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac0fea FUN_147ac0fea body=261 status=ok
// SIG undefined FUN_147ac0fea(void)

void FUN_147ac0fea(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  uVar1 = local_1c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_18 != 0) {
    plVar2 = (longlong *)FUN_144a7ba4c();
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x318))(plVar2,uVar1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac10f0 FUN_147ac10f0 body=376 status=ok
// SIG undefined FUN_147ac10f0(void)

void FUN_147ac10f0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ac126a(local_18,local_20,local_24,local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac126a FUN_147ac126a body=191 status=ok
// SIG undefined FUN_147ac126a(void)

void FUN_147ac126a(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar1 != '\0') {
      lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x156) & 2) != 0)) {
        FUN_14051bf56(lVar2,local_58);
        if (local_50 != 0) {
          FUN_1434082c6(local_50,param_2,param_3,param_4);
        }
        FUN_14051bf10(local_58);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac1330 FUN_147ac1330 body=623 status=ok
// SIG undefined FUN_147ac1330(void)

void FUN_147ac1330(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a64e42();
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38 != 0;
  local_50 = local_34;
  local_58 = local_30;
  FUN_147ac15a0(local_18,local_20,local_28,local_2c);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac15a0 FUN_147ac15a0 body=242 status=ok
// SIG undefined FUN_147ac15a0(void)

void FUN_147ac15a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_48 [8];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb0d2b0 != (longlong *)0x0 && param_2 != 0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar1 != '\0') {
      lVar2 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x156) & 2) != 0)) {
        FUN_14051bf56(lVar2,local_48);
        if (local_40 != 0) {
          local_58 = param_7;
          local_60 = param_6;
          local_68 = param_5;
          FUN_1434028c8(local_40,param_2,param_3,param_4);
        }
        FUN_14051bf10(local_48);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac1698 FUN_147ac1698 body=177 status=ok
// SIG undefined FUN_147ac1698(void)

void FUN_147ac1698(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (DAT_14cb0d2b0 != 0) {
    *(uint *)(DAT_14cb0d2b0 + 0xc3c) =
         *(uint *)(DAT_14cb0d2b0 + 0xc3c) & 0xfffffffe | (uint)(local_14 != 0);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac174a FUN_147ac174a body=219 status=ok
// SIG undefined FUN_147ac174a(void)

void FUN_147ac174a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1434f601c(local_18,local_19);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac1826 FUN_147ac1826 body=288 status=ok
// SIG undefined FUN_147ac1826(void)

void FUN_147ac1826(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_2c;
  local_40 = local_34;
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,local_28,1);
  if (lVar1 != 0) {
    local_18 = local_38;
    local_20 = local_40;
    FUN_147dab1a0(lVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac1948 FUN_147ac1948 body=657 status=ok
// SIG undefined FUN_147ac1948(void)

void FUN_147ac1948(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_e8 = &local_98;
  local_98 = local_70;
  uStack_90 = uStack_68;
  local_88 = local_60;
  local_b8 = local_58;
  uStack_b0 = uStack_50;
  local_a8 = local_48;
  local_d8 = local_40;
  uStack_d4 = uStack_3c;
  uStack_d0 = uStack_38;
  uStack_cc = uStack_34;
  local_c8 = local_30;
  local_e0 = local_74;
  uVar1 = FUN_147ac1bda(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac1bda FUN_147ac1bda body=264 status=ok
// SIG undefined FUN_147ac1bda(void)

longlong FUN_147ac1bda(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4,
                      undefined8 *param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x30) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x2b0);
      }
      local_28 = *(undefined8 *)(param_3 + 4);
      local_38 = *param_3;
      uStack_34 = param_3[1];
      uStack_30 = param_3[2];
      uStack_2c = param_3[3];
      local_88 = CONCAT44(local_88._4_4_,param_6);
      lVar1 = FUN_147ac7365(param_2,&local_38,lVar1,uVar2);
      if (lVar1 != 0) {
        local_48 = param_5[2];
        local_58 = *param_5;
        uStack_50 = param_5[1];
        local_78 = *param_4;
        uStack_74 = param_4[1];
        uStack_70 = param_4[2];
        uStack_6c = param_4[3];
        local_68 = *(undefined8 *)(param_4 + 4);
        local_80 = 0;
        local_88 = 0;
        FUN_14084af84(lVar1,&local_78,&local_58,0);
        goto LAB_147ac1c20;
      }
    }
  }
  lVar1 = 0;
LAB_147ac1c20:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac1ce4 FUN_147ac1ce4 body=897 status=ok
// SIG undefined FUN_147ac1ce4(void)

void FUN_147ac1ce4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  uint local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_79;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_79 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_79);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_79);
  }
  local_80 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f0 = &local_98;
  local_98 = local_78;
  uStack_90 = uStack_70;
  local_88 = local_68;
  local_f8 = &local_b8;
  local_b8 = local_60;
  uStack_b0 = uStack_58;
  local_a8 = local_50;
  local_d8 = local_38;
  uStack_d4 = uStack_34;
  uStack_d0 = uStack_30;
  uStack_cc = uStack_2c;
  local_c8 = local_28;
  local_e0 = local_80;
  local_e8 = (uint)local_79;
  uVar1 = FUN_1434f605e(local_20,&local_d8,local_40,local_48);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac206c FUN_147ac206c body=667 status=ok
// SIG undefined FUN_147ac206c(void)

void FUN_147ac206c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [8];
  longlong local_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_147a64148(local_48);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_58 != 0;
  local_70 = local_54;
  local_78 = local_50;
  uVar1 = FUN_147ac2308(local_28,local_30,puVar2,local_4c);
  *param_3 = uVar1;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac2308 FUN_147ac2308 body=142 status=ok
// SIG undefined FUN_147ac2308(void)

longlong *
FUN_147ac2308(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    uVar1 = FUN_1434d067a(param_2,param_3);
    plVar2 = (longlong *)FUN_147ab6bfa(param_1,uVar1,param_4,param_5,0,0,param_7);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x5e8))(plVar2,param_6);
      return plVar2;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 147ac239c FUN_147ac239c body=1165 status=ok
// SIG undefined FUN_147ac239c(void)

void FUN_147ac239c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130;
  int local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  longlong local_c8;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  FUN_147a64148(local_d0);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d0);
  }
  puVar8 = local_d0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar8 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  local_104 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_104);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_104);
  }
  local_108 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_108);
  }
  local_10c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_10c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_10c);
  }
  local_118 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  local_11c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11c);
  }
  uVar5 = local_b0;
  uVar4 = local_104;
  uVar3 = local_108;
  uVar2 = local_10c;
  uVar7 = local_118;
  iVar1 = local_11c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_b8 == 0) {
    uVar7 = 0;
  }
  else {
    local_78 = local_f0;
    local_88 = local_100;
    uStack_80 = uStack_f8;
    local_a8 = local_e8;
    uStack_a4 = uStack_e4;
    uStack_a0 = uStack_e0;
    uStack_9c = uStack_dc;
    local_98 = local_d8;
    uVar6 = FUN_1434d067a(local_b8,puVar8);
    local_130 = iVar1 != 0;
    local_140 = uVar7;
    local_148 = uVar2;
    local_150 = uVar3;
    local_158 = uVar4;
    local_138 = 0;
    uVar7 = FUN_147ac4a28(uVar5,uVar6,&local_a8,&local_88);
  }
  *param_3 = uVar7;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac2836 FUN_147ac2836 body=1535 status=ok
// SIG undefined FUN_147ac2836(void)

void FUN_147ac2836(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  uint local_190;
  undefined1 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_148;
  int local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  int local_120;
  byte local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [8];
  longlong local_d0;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_c0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  FUN_147a64148(local_d8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  puVar10 = local_d8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar10 = *(undefined1 **)(param_2 + 0x38);
  }
  local_e0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  local_e8 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  local_119 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_119);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_119);
  }
  local_120 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_120);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_120);
  }
  iVar5 = local_120;
  local_124 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_124);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_124);
  }
  local_128 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_128);
  }
  local_12c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_12c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_12c);
  }
  local_138 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_138);
  }
  local_13c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_13c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_13c);
  }
  uVar7 = local_e0;
  bVar6 = local_119;
  uVar4 = local_124;
  uVar3 = local_128;
  uVar2 = local_12c;
  uVar9 = local_138;
  iVar1 = local_13c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_c0 == 0) {
    uVar9 = 0;
  }
  else {
    local_148 = local_e8;
    local_88 = local_108;
    local_98 = local_118;
    uStack_90 = uStack_110;
    local_b8 = local_100;
    uStack_b4 = uStack_fc;
    uStack_b0 = uStack_f8;
    uStack_ac = uStack_f4;
    local_a8 = local_f0;
    uVar8 = FUN_1434d067a(local_c0,puVar10);
    local_158 = iVar1 != 0;
    local_188 = iVar5 != 0;
    local_168 = uVar9;
    local_170 = uVar2;
    local_178 = uVar3;
    local_180 = uVar4;
    local_190 = (uint)bVar6;
    local_160 = 0;
    local_198 = &local_98;
    uVar9 = FUN_1434f6e2c(uVar8,uVar7,local_148,&local_b8);
  }
  *param_3 = uVar9;
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac2e42 FUN_147ac2e42 body=844 status=ok
// SIG undefined FUN_147ac2e42(void)

void FUN_147ac2e42(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  int local_84;
  undefined1 local_7d;
  int local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  iVar1 = local_7c;
  local_7d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7d);
  }
  local_84 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_108 = &local_a8;
  local_a8 = local_78;
  uStack_a0 = uStack_70;
  local_98 = local_68;
  local_c8 = local_60;
  uStack_c0 = uStack_58;
  local_b8 = local_50;
  local_e8 = local_48;
  uStack_e4 = uStack_44;
  uStack_e0 = uStack_40;
  uStack_dc = uStack_3c;
  local_d8 = local_38;
  local_f0 = local_84 != 0;
  local_100 = iVar1 != 0;
  local_f8 = local_7d;
  uVar2 = FUN_147ac3190(local_28,local_30);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac3190 FUN_147ac3190 body=234 status=ok
// SIG undefined FUN_147ac3190(void)

undefined8
FUN_147ac3190(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar1 != 0) {
      local_28 = param_5[2];
      local_98 = &local_38;
      local_38 = *param_5;
      uStack_30 = param_5[1];
      local_58 = *param_4;
      uStack_50 = param_4[1];
      local_48 = param_4[2];
      local_78 = *param_3;
      uStack_74 = param_3[1];
      uStack_70 = param_3[2];
      uStack_6c = param_3[3];
      local_68 = *(undefined8 *)(param_3 + 4);
      local_80 = param_8;
      local_88 = param_7;
      local_90 = param_6;
      uVar2 = FUN_147ac703a(lVar1,param_2);
      goto LAB_147ac31d6;
    }
  }
  uVar2 = 0;
LAB_147ac31d6:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac3288 FUN_147ac3288 body=1100 status=ok
// SIG undefined FUN_147ac3288(void)

void FUN_147ac3288(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined8 *local_120;
  uint local_118;
  undefined1 local_110;
  undefined1 local_108;
  undefined1 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  int local_98;
  undefined1 local_91;
  int local_90;
  byte local_89;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_89 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  local_90 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  iVar1 = local_90;
  local_91 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_91);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_91);
  }
  local_98 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_120 = &local_b8;
  local_b8 = local_88;
  uStack_b0 = uStack_80;
  local_a8 = local_78;
  local_128 = &local_d8;
  local_d8 = local_70;
  uStack_d0 = uStack_68;
  local_c8 = local_60;
  local_f8 = local_58;
  uStack_f4 = uStack_54;
  uStack_f0 = uStack_50;
  uStack_ec = uStack_4c;
  local_e8 = local_48;
  local_100 = local_98 != 0;
  local_110 = iVar1 != 0;
  local_108 = local_91;
  local_118 = (uint)local_89;
  uVar2 = FUN_1434f638e(local_30,local_38,local_40);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac36e2 FUN_147ac36e2 body=931 status=ok
// SIG undefined FUN_147ac36e2(void)

void FUN_147ac36e2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  iVar1 = local_64;
  local_68 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  local_78 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_60;
  uStack_90 = uStack_58;
  local_88 = local_50;
  local_b8 = local_48;
  uStack_b4 = uStack_44;
  uStack_b0 = uStack_40;
  uStack_ac = uStack_3c;
  local_a8 = local_38;
  local_c8 = local_7c != 0;
  local_e8 = iVar1 != 0;
  local_d0 = local_78;
  local_d8 = local_6c;
  local_e0 = local_68;
  uVar2 = FUN_147ac3a86(local_28,local_30);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac3a86 FUN_147ac3a86 body=280 status=ok
// SIG undefined FUN_147ac3a86(void)

longlong *
FUN_147ac3a86(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4,
             undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             undefined1 param_9)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x30) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x2b0);
      }
      local_70 = param_9;
      local_78 = param_8;
      plVar2 = (longlong *)FUN_147ac7417(param_2,uVar3,param_5,param_6);
      local_48 = *param_4;
      uStack_40 = param_4[1];
      local_38 = param_4[2];
      local_68 = *param_3;
      uStack_64 = param_3[1];
      uStack_60 = param_3[2];
      uStack_5c = param_3[3];
      local_58 = *(undefined8 *)(param_3 + 4);
      local_70 = 0;
      local_78 = 0;
      FUN_14084af84(plVar2,&local_68,&local_48,0);
      (**(code **)(*plVar2 + 0x5d8))(plVar2,param_7);
      goto LAB_147ac3ace;
    }
  }
  plVar2 = (longlong *)0x0;
LAB_147ac3ace:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac3bb2 FUN_147ac3bb2 body=1211 status=ok
// SIG undefined FUN_147ac3bb2(void)

void FUN_147ac3bb2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  uint local_110;
  undefined1 local_108;
  undefined1 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  int local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  int local_78;
  byte local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_71 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_71);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_71);
  }
  local_78 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  iVar2 = local_78;
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  iVar1 = local_7c;
  local_80 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  local_90 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_94 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_118 = &local_b8;
  local_b8 = local_70;
  uStack_b0 = uStack_68;
  local_a8 = local_60;
  local_d8 = local_58;
  uStack_d4 = uStack_54;
  uStack_d0 = uStack_50;
  uStack_cc = uStack_4c;
  local_c8 = local_48;
  local_e0 = local_94 != 0;
  local_100 = iVar1 != 0;
  local_108 = iVar2 != 0;
  local_e8 = local_90;
  local_f0 = local_84;
  local_f8 = local_80;
  local_110 = (uint)local_71;
  uVar3 = FUN_147ac406e(local_30,local_38,local_40);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac406e FUN_147ac406e body=417 status=ok
// SIG undefined FUN_147ac406e(void)

longlong *
FUN_147ac406e(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 *param_5,int param_6,char param_7,undefined1 param_8,undefined4 param_9,
             undefined4 param_10,undefined8 param_11,undefined1 param_12)

{
  longlong *plVar1;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0 || param_1 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    local_d0 = param_12;
    local_d8 = param_11;
    plVar1 = (longlong *)FUN_147ac7417(param_1,*(undefined8 *)(param_2 + 0xa8),param_8,param_9);
    *(byte *)(plVar1 + 0x56) = *(byte *)(plVar1 + 0x56) & 0xfd | param_7 * '\x02';
    (**(code **)(*plVar1 + 0x490))(plVar1,param_2,&DAT_14cadad98,param_3);
    if (param_6 == 1) {
      local_58 = param_5[2];
      local_68 = *param_5;
      uStack_60 = param_5[1];
      local_88 = *param_4;
      uStack_84 = param_4[1];
      uStack_80 = param_4[2];
      uStack_7c = param_4[3];
      local_78 = *(undefined8 *)(param_4 + 4);
      local_d0 = 0;
      local_d8 = 0;
      FUN_14084af84(plVar1,&local_88,&local_68,0);
    }
    else {
      local_98 = param_5[2];
      local_a8 = *param_5;
      uStack_a0 = param_5[1];
      local_c8 = *param_4;
      uStack_c4 = param_4[1];
      uStack_c0 = param_4[2];
      uStack_bc = param_4[3];
      local_b8 = *(undefined8 *)(param_4 + 4);
      local_d0 = 0;
      local_d8 = 0;
      FUN_1401ca0e6(plVar1,&local_c8,&local_a8,0);
    }
    (**(code **)(*plVar1 + 0x5d8))(plVar1,param_10);
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac4210 FUN_147ac4210 body=280 status=ok
// SIG undefined FUN_147ac4210(void)

void FUN_147ac4210(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = local_20;
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_1434f6b6e(&local_30,uVar1);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac4336 FUN_147ac4336 body=746 status=ok
// SIG undefined FUN_147ac4336(void)

void FUN_147ac4336(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_58 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  iVar1 = local_5c;
  local_60 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  uVar2 = local_4c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_60 != 0;
  local_70 = iVar1 != 0;
  local_78 = local_58;
  plVar3 = (longlong *)FUN_147ab6bfa(local_38,local_40,local_44,local_48);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x5e8))(plVar3,uVar2);
  }
  *param_3 = plVar3;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac4628 FUN_147ac4628 body=1023 status=ok
// SIG undefined FUN_147ac4628(void)

void FUN_147ac4628(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_108;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_60 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_78 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_58;
  uStack_90 = uStack_50;
  local_88 = local_48;
  local_b8 = local_40;
  uStack_b4 = uStack_3c;
  uStack_b0 = uStack_38;
  uStack_ac = uStack_34;
  local_a8 = local_30;
  local_c0 = local_7c != 0;
  local_c8 = local_78;
  local_d0 = local_70;
  local_d8 = local_64;
  local_e0 = local_60;
  local_e8 = local_5c;
  uVar1 = FUN_147ac4a28(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac4a28 FUN_147ac4a28 body=716 status=ok
// SIG undefined FUN_147ac4a28(void)

longlong *
FUN_147ac4a28(undefined8 param_1,longlong *param_2,undefined4 *param_3,undefined8 *param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             longlong param_9,byte param_10)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  byte bVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined1 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 local_124 [4];
  undefined8 local_120 [2];
  undefined1 local_110 [64];
  longlong local_d0;
  undefined4 local_c8;
  longlong local_b8;
  longlong local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ulonglong local_80;
  
  lVar1 = param_9;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (DAT_14cb0d2b0 != (longlong *)0x0 && param_2 != (longlong *)0x0) {
    cVar3 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar3 != '\0') {
      lVar5 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
      if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x156) & 2) != 0)) {
        bVar9 = 0x40;
        if (*(byte *)(lVar5 + 0x152) < 7) {
          bVar9 = (byte)(0x4000400040 >> ((*(byte *)(lVar5 + 0x152) & 7) << 3));
        }
        uVar6 = FUN_147ac6914(param_1);
        FUN_147963094(local_120,lVar5,uVar6);
        if (local_b8 != 0) {
          local_a0 = 1;
          local_98 = *param_3;
          uStack_94 = param_3[1];
          uStack_90 = param_3[2];
          uStack_8c = param_3[3];
          local_88 = *(undefined8 *)(param_3 + 4);
        }
        local_120[0] = param_8;
        if (lVar1 != 0) {
          FUN_147ad1896(local_110,local_124,&param_9);
        }
        plVar7 = (longlong *)FUN_143406a2c(param_2,local_120);
        bVar2 = param_10;
        if (plVar7 != (longlong *)0x0) {
          local_138 = param_4[2];
          local_148 = *param_4;
          uStack_140 = param_4[1];
          local_168 = *param_3;
          uStack_164 = param_3[1];
          uStack_160 = param_3[2];
          uStack_15c = param_3[3];
          local_158 = *(undefined8 *)(param_3 + 4);
          local_170 = 0;
          local_178 = 0;
          FUN_14084af84(plVar7,&local_168,&local_148,0);
          FUN_14342e4a4(plVar7,param_5);
          FUN_14342df16(plVar7,param_6);
          bVar4 = 8;
          if (((local_a8 != 0) && (local_b8 != 0)) &&
             ((bVar8 = *(char *)(local_b8 + 0x152) - 1, 5 < bVar8 ||
              ((0x35U >> (bVar8 & 0x1f) & 1) == 0)))) {
            bVar4 = *(char *)(local_a8 + 0x5b0) * '\x02' & 8;
          }
          *(byte *)(plVar7 + 0x92) = bVar9 | bVar2 | *(byte *)(plVar7 + 0x92) & 0xb6 | bVar4;
          uVar10 = (**(code **)(*param_2 + 0x2e8))(param_2);
          *(undefined4 *)(plVar7 + 0x98) = uVar10;
          *(byte *)(plVar7 + 0x92) = *(byte *)(plVar7 + 0x92) & 0xfd;
          (**(code **)(*plVar7 + 0x5e8))(plVar7,param_7);
        }
        local_c8 = 0;
        if (local_d0 != 0) {
          FUN_1400020a8();
        }
        FUN_14766440c(local_110);
        goto LAB_147ac4ac9;
      }
    }
  }
  plVar7 = (longlong *)0x0;
LAB_147ac4ac9:
  if ((local_80 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return plVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac4d02 FUN_147ac4d02 body=1397 status=ok
// SIG undefined FUN_147ac4d02(void)

void FUN_147ac4d02(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  uint local_120;
  undefined1 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  byte local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_71 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_71);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_71);
  }
  local_78 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  iVar1 = local_78;
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_80 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  local_90 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_98 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_128 = &local_b8;
  local_b8 = local_70;
  uStack_b0 = uStack_68;
  local_a8 = local_60;
  local_d8 = local_58;
  uStack_d4 = uStack_54;
  uStack_d0 = uStack_50;
  uStack_cc = uStack_4c;
  local_c8 = local_48;
  local_e8 = local_9c != 0;
  local_118 = iVar1 != 0;
  local_f0 = local_98;
  local_f8 = local_90;
  local_100 = local_84;
  local_108 = local_80;
  local_110 = local_7c;
  local_120 = (uint)local_71;
  uVar2 = FUN_1434f6e2c(local_30,local_38,local_40);
  *param_3 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac527e FUN_147ac527e body=619 status=ok
// SIG undefined FUN_147ac527e(void)

void FUN_147ac527e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_40 [24];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_78 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar3 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_70;
  uStack_90 = uStack_68;
  local_88 = local_60;
  local_b8 = local_58;
  uStack_b4 = uStack_54;
  uStack_b0 = uStack_50;
  uStack_ac = uStack_4c;
  local_a8 = local_48;
  local_c0 = local_78;
  local_c8 = local_74;
  uVar2 = FUN_147ac54ea(local_28,puVar3);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac54ea FUN_147ac54ea body=842 status=ok
// SIG undefined FUN_147ac54ea(void)

undefined8
FUN_147ac54ea(undefined8 param_1,double *param_2,double *param_3,double *param_4,float param_5,
             float param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_e8 [40];
  double local_c0 [3];
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar1 = param_4[2] - param_3[2];
  dVar11 = param_4[1] - param_3[1];
  dVar3 = *param_4 - *param_3;
  lVar7 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar7 != 0) {
    dVar2 = dVar3 * dVar3 + dVar11 * dVar11;
    fVar14 = (float)SQRT(dVar1 * dVar1 + dVar2);
    if (0.0001 < fVar14) {
      if (ABS(param_5) <= 1e-08) {
        param_5 = (float)FUN_144a7c670(lVar7);
      }
      dVar10 = 1.0 / (double)fVar14;
      dVar12 = (double)param_6;
      local_98 = (dVar1 * dVar10 - DAT_14c8462d0) * dVar12 + DAT_14c8462d0;
      uStack_a0 = (dVar11 * dVar10 - DAT_14c8462c8) * dVar12 + DAT_14c8462c8;
      local_a8 = (dVar3 * dVar10 - DAT_14c8462c0) * dVar12 + DAT_14c8462c0;
      dVar11 = local_98 * local_98 + local_a8 * local_a8 + uStack_a0 * uStack_a0;
      if ((dVar11 != 1.0) || (NAN(dVar11))) {
        if (9.99999993922529e-09 <= dVar11) {
          dVar11 = 1.0 / SQRT(dVar11);
          local_98 = local_98 * dVar11;
          uStack_a0 = uStack_a0 * dVar11;
          local_a8 = local_a8 * dVar11;
        }
        else {
          local_98 = DAT_14c8464f0;
          local_a8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_a0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
      }
      FUN_144a79a9c(&local_a8,local_c0);
      fVar13 = (float)SQRT(dVar2);
      fVar14 = tanf((float)(local_c0[0] * 0.017453292519943295));
      fVar9 = cosf((float)(local_c0[0] * 0.017453292519943295));
      fVar14 = (fVar13 * fVar13 * param_5 * 0.5) /
               (fVar9 * fVar9 * ((float)dVar1 - fVar14 * fVar13));
      if (fVar14 >= 0.0) {
        if (fVar14 < 0.0) {
          fVar14 = sqrtf(fVar14);
        }
        else {
          fVar14 = SQRT(fVar14);
        }
        dVar1 = (double)fVar14;
        *param_2 = dVar1 * local_a8;
        param_2[1] = uStack_a0 * dVar1;
        param_2[2] = local_98 * dVar1;
        uVar8 = 1;
        goto LAB_147ac574e;
      }
    }
  }
  param_2[2] = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar4;
  *(undefined4 *)(param_2 + 1) = uVar5;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
  uVar8 = 0;
LAB_147ac574e:
  if ((local_90 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 147ac583e FUN_147ac583e body=963 status=ok
// SIG undefined FUN_147ac583e(void)

void FUN_147ac583e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined4 local_90;
  undefined1 local_89;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_40 [24];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_60 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_80 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_88 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_89 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_89);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_89);
  }
  local_90 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a0);
  }
  puVar3 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = &local_b8;
  local_b8 = local_78;
  uStack_b0 = uStack_70;
  local_a8 = local_68;
  local_d8 = local_58;
  uStack_d4 = uStack_54;
  uStack_d0 = uStack_50;
  uStack_cc = uStack_4c;
  local_c8 = local_48;
  local_e8 = local_88;
  local_f0 = local_80;
  uVar2 = FUN_147ac5c02(local_28,puVar3,&local_d8,local_60);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac5c02 FUN_147ac5c02 body=760 status=ok
// SIG undefined FUN_147ac5c02(void)

undefined8
FUN_147ac5c02(undefined8 param_1,double *param_2,double *param_3,longlong *param_4,double *param_5,
             double param_6,double param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  double *pdVar10;
  ulonglong uVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cb0d2b0 != 0) {
    lVar7 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
    if (param_4 != (longlong *)0x0 && lVar7 != 0) {
      (**(code **)(*param_4 + 0x328))(param_4,&local_88);
      lVar8 = FUN_144a7cacc();
      if (((*(int *)(lVar8 + 0x38) <= *(int *)(param_4[2] + 0x38)) &&
          (*(longlong *)(*(longlong *)(param_4[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
           lVar8 + 0x30)) && (lVar8 = param_4[0x86], lVar8 != 0)) {
        uVar5 = *(uint *)(lVar8 + 0x498);
        dVar1 = *(double *)(lVar8 + 0x500);
        dVar2 = *(double *)(lVar8 + 0x508);
        dVar3 = *(double *)(lVar8 + 0x510);
        cVar6 = (**(code **)(*(longlong *)(lVar8 + 0x178) + 0xe0))(lVar8 + 0x178);
        if ((cVar6 != '\0') || ((uVar5 & 3) == 3)) {
          dVar14 = dVar3;
          if (1.0 <= dVar3) {
            dVar14 = 1.0;
          }
          dVar14 = acos((double)(~-(ulonglong)(dVar3 < -1.0) & (ulonglong)dVar14 |
                                -(ulonglong)(dVar3 < -1.0) & 0xbff0000000000000));
          dVar17 = local_80 * local_80;
          dVar15 = local_88 * local_88;
          dVar14 = tan(dVar14);
          dVar14 = dVar14 * SQRT(dVar15 + dVar17);
          uVar11 = -(ulonglong)(dVar3 * local_78 + dVar1 * local_88 + dVar2 * local_80 < 0.0);
          local_78 = (double)(~uVar11 & (ulonglong)-dVar14 | (ulonglong)dVar14 & uVar11);
        }
      }
      lVar8 = param_4[0x39];
      if (lVar8 == 0) {
        pdVar10 = (double *)&DAT_14c8464e0;
        uVar18 = (undefined4)DAT_14c8464f0;
        uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar18 = (undefined4)*(undefined8 *)(lVar8 + 0x270);
        uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x270) >> 0x20);
        pdVar10 = (double *)(lVar8 + 0x260);
      }
      if (param_7 <= 0.1) {
        param_7 = 0.1;
      }
      dVar1 = param_5[2];
      dVar2 = pdVar10[1];
      dVar3 = param_5[1];
      dVar14 = *pdVar10;
      dVar15 = *param_5;
      if (ABS(param_6) <= 1e-08) {
        fVar12 = (float)FUN_144a7c670(lVar7);
        param_6 = (double)fVar12;
      }
      dVar17 = param_3[2];
      dVar4 = param_3[1];
      dVar16 = param_7 * param_7 * 0.0;
      dVar13 = 1.0 / param_7;
      *param_2 = dVar13 * (((dVar14 + dVar15 + local_88 * param_7) - *param_3) - dVar16);
      param_2[1] = (((dVar2 + dVar3 + local_80 * param_7) - dVar4) - dVar16) * dVar13;
      param_2[2] = (param_6 * -0.5 * param_7 * param_7 +
                   (((double)CONCAT44(uVar19,uVar18) + dVar1 + local_78 * param_7) - dVar17)) *
                   dVar13;
      uVar9 = 1;
      goto LAB_147ac5c70;
    }
  }
  uVar9 = 0;
LAB_147ac5c70:
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac5f04 FUN_147ac5f04 body=449 status=ok
// SIG undefined FUN_147ac5f04(void)

void FUN_147ac5f04(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_ab8 [40];
  undefined4 local_a90;
  undefined4 uStack_a8c;
  undefined4 uStack_a88;
  undefined4 uStack_a84;
  undefined8 local_a80;
  int local_a74;
  undefined1 local_a70 [24];
  undefined1 local_a58 [2264];
  longlong local_180;
  longlong local_f8;
  char local_68;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_ab8;
  FUN_1400e6e60(local_a58);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a58);
  }
  puVar1 = local_a58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a70);
  }
  puVar2 = local_a70;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_a74 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a74);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147992e48(puVar1,&local_a90,puVar2,local_a74 != 0);
  *(undefined8 *)(param_3 + 4) = local_a80;
  *param_3 = local_a90;
  param_3[1] = uStack_a8c;
  param_3[2] = uStack_a88;
  param_3[3] = uStack_a84;
  if (local_68 == '\x01') {
    local_68 = '\0';
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_180 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_ab8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac60cc FUN_147ac60cc body=431 status=ok
// SIG undefined FUN_147ac60cc(void)

void FUN_147ac60cc(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  int local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong lStack_30;
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
  local_40 = 0xffffffffffffffff;
  uStack_38 = 0;
  lStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  iVar1 = local_44;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = (undefined4)local_40;
  uStack_64 = local_40._4_4_;
  uStack_60 = (undefined4)uStack_38;
  uStack_5c = uStack_38._4_4_;
  local_58 = lStack_30;
  if ((lStack_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147ac627c(local_20,local_28,&local_68,iVar1 != 0);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac627c FUN_147ac627c body=209 status=ok
// SIG undefined FUN_147ac627c(void)

void FUN_147ac627c(undefined8 param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = param_2;
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar1 != 0) {
    uVar2 = FUN_14119d0a4(lVar1);
    lVar3 = FUN_147ad17da(uVar2,*(undefined8 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 4));
    if (lVar3 == 0) {
      uVar4 = FUN_14001cc68(0x38,0x10);
      local_58 = param_4;
      local_50 = param_3;
      local_48 = lVar1;
      FUN_147b98518(uVar4,0,&local_38,0);
      FUN_140b1330e(uVar2,*(undefined8 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 4),uVar4);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac6354 FUN_147ac6354 body=619 status=ok
// SIG undefined FUN_147ac6354(void)

void FUN_147ac6354(undefined8 param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  void *pvStack_40;
  ulonglong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = 0;
  FUN_1446ef9c4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_70 = 0xffffffffffffffff;
  uStack_68 = 0;
  lStack_60 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  iVar1 = local_74;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = (undefined4)local_70;
  uStack_94 = local_70._4_4_;
  uStack_90 = (undefined4)uStack_68;
  uStack_8c = uStack_68._4_4_;
  local_88 = lStack_60;
  if ((lStack_60 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  _Src = pvStack_40;
  local_c0 = local_58;
  local_b8 = (undefined4)uStack_50;
  uStack_b4 = uStack_50._4_4_;
  uStack_b0 = (undefined4)local_48;
  uStack_ac = local_48._4_4_;
  local_a8 = (void *)0x0;
  lVar2 = (longlong)(int)local_38;
  local_a0 = (int)local_38;
  if (lVar2 == 0) {
    local_9c = 0;
  }
  else {
    FUN_1446dd670(&local_a8,local_38 & 0xffffffff,0);
    memcpy(local_a8,_Src,lVar2 * 2);
  }
  FUN_147ac65c0(local_30,&local_c0,&local_98,iVar1 != 0);
  if (pvStack_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac65c0 FUN_147ac65c0 body=251 status=ok
// SIG undefined FUN_147ac65c0(void)

void FUN_147ac65c0(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_60 [2];
  undefined2 *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14475cc44(param_2 + 8,local_60);
  FUN_14064b666(&local_50,local_60);
  puVar1 = local_50;
  if (local_48 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_40,puVar1,1);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  local_68 = *(longlong *)(param_3 + 4);
  if ((local_68 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147ac627c(param_1,local_40,&local_78,param_4);
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ac66bc FUN_147ac66bc body=148 status=ok
// SIG undefined FUN_147ac66bc(void)

void FUN_147ac66bc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ac6752(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac6752 FUN_147ac6752 body=446 status=ok
// SIG undefined FUN_147ac6752(void)

void FUN_147ac6752(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  uint local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14795f1f0(&local_58,0x10,1,0);
  uVar6 = (ulonglong)local_48;
  if ((-1 < (int)local_48) && ((int)local_48 < local_50)) {
    do {
      lVar5 = (**(code **)(**(longlong **)(local_58 + (uVar6 & 0xffffffff) * 8) + 0x318))();
      if (lVar5 != 0) {
        local_78 = *(longlong *)(lVar5 + 0x18);
        FUN_1400021e4(&local_78,&local_68);
        local_40 = *(undefined8 *)(param_1 + 0x18);
        FUN_1400021e4(&local_40,&local_78);
        if (local_60 == local_70) {
          bVar9 = true;
          if (1 < local_60) {
            lVar5 = 0;
            while( true ) {
              uVar1 = *(ushort *)(local_68 + lVar5);
              uVar3 = (uint)uVar1;
              uVar2 = *(ushort *)(local_78 + lVar5);
              uVar8 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147ac682f;
                }
                iVar4 = uVar3 - uVar8;
                goto LAB_147ac68db;
              }
              if (uVar1 == 0) break;
LAB_147ac682f:
              lVar5 = lVar5 + 2;
            }
            iVar4 = 0;
LAB_147ac68db:
            bVar9 = iVar4 == 0;
          }
        }
        else {
          bVar9 = local_70 + local_60 == 1;
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (bVar9) {
          FUN_147d361a4(*(undefined8 *)(local_58 + (longlong)(int)local_48 * 8));
        }
      }
      uVar6 = (longlong)(int)local_48;
      do {
        uVar7 = uVar6;
        uVar6 = uVar7 + 1;
        local_48 = (uint)uVar6;
        if ((longlong)local_50 <= (longlong)uVar6) break;
      } while (*(longlong *)(local_58 + uVar6 * 8) == 0);
    } while ((-2 < (longlong)uVar7) && ((int)local_48 < local_50));
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ac6914 FUN_147ac6914 body=75 status=ok
// SIG undefined FUN_147ac6914(void)

longlong FUN_147ac6914(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a6c4d8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return param_1;
    }
  }
  uVar2 = FUN_144a6c4d8();
  lVar1 = FUN_144a78ede(param_1,uVar2);
  return lVar1;
}



// FUNCTION 147ac695f FUN_147ac695f body=75 status=ok
// SIG undefined FUN_147ac695f(void)

longlong FUN_147ac695f(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a6c4d8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return param_1;
    }
  }
  uVar2 = FUN_144a6c4d8();
  lVar1 = FUN_144a78ede(param_1,uVar2);
  return lVar1;
}



// FUNCTION 147ac69aa FUN_147ac69aa body=217 status=ok
// SIG undefined FUN_147ac69aa(void)

undefined8 * FUN_147ac69aa(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = 0x353415647;
  param_1[1] = DAT_14c89603c;
  puVar2 = (undefined8 *)FUN_144a8b586();
  param_1[2] = *puVar2;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(puVar2 + 1);
  param_1[4] = 0;
  iVar1 = *(int *)(puVar2 + 3);
  _Src = (void *)puVar2[2];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 6) = 3;
  FUN_1401252ea(param_1 + 7);
  lVar4 = *param_2;
  if (lVar4 != 0) {
    lVar3 = FUN_1411b2b2a();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      lVar4 = *param_2;
      goto LAB_147ac6a5a;
    }
  }
  lVar4 = 0;
LAB_147ac6a5a:
  FUN_14010318a(lVar4,param_1 + 9,0);
  return param_1;
}



// FUNCTION 147ac6a84 FUN_147ac6a84 body=609 status=ok
// SIG undefined FUN_147ac6a84(void)

void FUN_147ac6a84(int *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  ulonglong *puVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  piVar5 = param_1 + 4;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_14680ff7c(piVar5);
  param_1[0xc] = 0;
  piVar1 = param_1 + 0xe;
  FUN_1468217ec(piVar1);
  FUN_144a7e010(param_1 + 0x12);
  piVar6 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar6 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *piVar6;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar6 = param_1 + 1;
  if (*param_1 == 0x53415647) {
    piVar3 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,piVar6,4);
      }
      else {
        thunk_FUN_14572512c(param_2,piVar6);
      }
    }
    else {
      *piVar6 = *piVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar3 = param_1 + 2;
    if (*piVar6 < 3) {
      puVar4 = (ulonglong *)param_2[1];
      puVar2 = (undefined4 *)*puVar4 + 1;
      if ((undefined4 *)puVar4[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_4c);
        }
      }
      else {
        local_4c = *(undefined4 *)*puVar4;
        *puVar4 = (ulonglong)puVar2;
      }
      FUN_14682bca6(&local_58,local_4c);
      *(undefined8 *)piVar3 = local_58;
    }
    else {
      FUN_142791dd5(param_2,piVar3);
    }
    FUN_146810015(param_2,piVar5);
    (**(code **)(*param_2 + 0xf8))(param_2,*(undefined8 *)piVar3);
    (**(code **)(*param_2 + 0x108))(param_2,piVar5);
    if (1 < *piVar6) {
      piVar6 = param_1 + 0xc;
      piVar5 = *(int **)param_2[1];
      if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,piVar6,4);
        }
        else {
          thunk_FUN_14572512c(param_2,piVar6);
        }
      }
      else {
        *piVar6 = *piVar5;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      FUN_14682562a(piVar1,param_2,*piVar6);
      (**(code **)(*param_2 + 0x60))(param_2,piVar1);
    }
  }
  else {
    param_2[0x12] = 0;
    *piVar6 = 1;
  }
  FUN_14021219d(param_2,param_1 + 0x12);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac6ce6 FUN_147ac6ce6 body=296 status=ok
// SIG undefined FUN_147ac6ce6(void)

void FUN_147ac6ce6(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_142791dd5(param_2,param_1 + 2);
  FUN_146810015(param_2,param_1 + 4);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0xc,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    param_1[0xc] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14682562a(param_1 + 0xe,param_2,param_1[0xc]);
  FUN_14021219d(param_2,param_1 + 0x12);
  return;
}



// FUNCTION 147ac6e0e FUN_147ac6e0e body=207 status=ok
// SIG undefined FUN_147ac6e0e(void)

undefined8
FUN_147ac6e0e(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined2 local_66;
  undefined4 local_64;
  longlong local_58;
  longlong *local_48;
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  uStack_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_64 = 8;
  uVar1 = 0;
  local_58 = 0;
  local_48 = (longlong *)0x0;
  local_68 = param_6;
  local_67 = param_7;
  uStack_80 = param_5;
  local_66 = 4;
  local_88 = param_4;
  if (param_2 != 0) {
    uVar1 = FUN_141037e38();
    if (local_58 != 0) {
      plVar2 = local_48;
      if (local_48 == (longlong *)0x0) {
        plVar2 = local_38;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac6ede FUN_147ac6ede body=348 status=ok
// SIG undefined FUN_147ac6ede(void)

longlong FUN_147ac6ede(undefined8 param_1,longlong param_2,longlong param_3,byte param_4,
                      char param_5)

{
  longlong lVar1;
  undefined8 unaff_RBP;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8442bc) {
    FUN_144b3d300(&DAT_14c8442bc);
    if (DAT_14c8442bc == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
  }
  if ((DAT_14c872bf0 == '\x01') && (DAT_14c872bf1 != '\x01')) {
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    if ((param_2 != 0) && (DAT_14c8442b8 == '\0')) {
      if (param_5 != '\0') {
        lVar1 = FUN_1436029a4(param_2 + 0x818,param_1,param_2,
                              CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
        return lVar1;
      }
      if (param_3 != 0) {
        param_2 = param_3;
      }
      lVar1 = FUN_147922815(param_2);
      *(byte *)(lVar1 + 0x693) = *(byte *)(lVar1 + 0x693) & 0xfe | param_4;
      *(undefined4 *)(lVar1 + 0x734) = 0;
      *(byte *)(lVar1 + 0x9e) = *(byte *)(lVar1 + 0x9e) & 0xf3 | 4;
      FUN_1435c4c78(lVar1,param_1);
      *(byte *)(lVar1 + 0x692) = *(byte *)(lVar1 + 0x692) & 0xf7;
    }
  }
  return lVar1;
}



// FUNCTION 147ac703a FUN_147ac703a body=336 status=ok
// SIG undefined FUN_147ac703a(void)

longlong *
FUN_147ac703a(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5,undefined1 param_6,undefined1 param_7,char param_8)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x2b0);
  }
  local_a8 = param_7;
  plVar1 = (longlong *)FUN_147ac6ede(param_2,param_1,uVar3,param_6);
  if (plVar1 != (longlong *)0x0) {
    FUN_140583f8c(plVar1,1);
    FUN_140583ed2(plVar1,1);
    FUN_140583e18(plVar1,1);
    local_48 = *(undefined8 *)(param_3 + 4);
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    FUN_144a48320(plVar1);
    local_68 = *(undefined8 *)(param_4 + 4);
    local_78 = *param_4;
    uStack_74 = param_4[1];
    uStack_70 = param_4[2];
    uStack_6c = param_4[3];
    FUN_144b21d44(plVar1);
    local_88 = *(undefined8 *)(param_5 + 4);
    local_98 = *param_5;
    uStack_94 = param_5[1];
    uStack_90 = param_5[2];
    uStack_8c = param_5[3];
    FUN_14084f00a(plVar1);
    FUN_140b506dc(plVar1,param_1,0);
    if (param_8 != '\0') {
      (**(code **)(*plVar1 + 0xa60))(plVar1,1);
    }
    plVar2 = (longlong *)FUN_140083894();
    (**(code **)(*plVar2 + 0x70))(plVar2,plVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac718c FUN_147ac718c body=259 status=ok
// SIG undefined FUN_147ac718c(void)

undefined8
FUN_147ac718c(longlong param_1,longlong param_2,undefined8 *param_3,undefined1 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 == 0 || param_1 == 0) {
    uVar1 = 0;
  }
  else {
    local_68 = param_3[8];
    uStack_60 = param_3[9];
    local_58 = param_3[10];
    local_a8 = *param_3;
    uStack_a0 = param_3[1];
    local_98 = *(undefined4 *)(param_3 + 2);
    uStack_94 = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_90 = *(undefined4 *)(param_3 + 3);
    uStack_8c = *(undefined4 *)((longlong)param_3 + 0x1c);
    FUN_1448052ee(&local_a8,local_80);
    local_c8 = param_3[4];
    uStack_c0 = param_3[5];
    local_b8 = param_3[6];
    local_d0 = param_6;
    local_d8 = param_5;
    local_e8 = &local_68;
    local_e0 = param_4;
    uVar1 = FUN_147ac703a(param_1,param_2,&local_c8,local_80);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac7290 FUN_147ac7290 body=212 status=ok
// SIG undefined FUN_147ac7290(void)

void FUN_147ac7290(void)

{
  undefined4 *in_R9;
  undefined8 *in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined1 in_stack_00000038;
  undefined1 in_stack_00000040;
  undefined1 in_stack_00000048;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = &local_40;
  local_40 = 0x3ff0000000000000;
  local_38 = 0x3ff0000000000000;
  local_30 = 0x3ff0000000000000;
  local_58 = *in_stack_00000028;
  uStack_50 = in_stack_00000028[1];
  local_a8 = &local_58;
  local_48 = in_stack_00000028[2];
  local_78 = *in_R9;
  uStack_74 = in_R9[1];
  uStack_70 = in_R9[2];
  uStack_6c = in_R9[3];
  local_68 = *(undefined8 *)(in_R9 + 4);
  local_80 = in_stack_00000048;
  local_88 = in_stack_00000040;
  local_90 = in_stack_00000038;
  local_98 = in_stack_00000030;
  FUN_1434f638e();
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac7365 FUN_147ac7365 body=178 status=ok
// SIG undefined FUN_147ac7365(void)

longlong FUN_147ac7365(undefined8 param_1,undefined4 *param_2,longlong param_3,longlong param_4,
                      float param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_3 == 0) || (iVar4 = FUN_14490d72a(param_3), iVar4 == 1)) {
    return 0;
  }
  if (param_4 == 0) {
    param_4 = param_3;
  }
  lVar5 = FUN_140995ab9(param_4);
  *(byte *)(lVar5 + 0x9e) = *(byte *)(lVar5 + 0x9e) | 4;
  FUN_14084ef06(lVar5,param_1);
  *(undefined8 *)(lVar5 + 0x2e0) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(lVar5 + 0x2d0) = *param_2;
  *(undefined4 *)(lVar5 + 0x2d4) = uVar1;
  *(undefined4 *)(lVar5 + 0x2d8) = uVar2;
  *(undefined4 *)(lVar5 + 0x2dc) = uVar3;
  FUN_140583e18(lVar5,1);
  FUN_140b506dc(lVar5,param_3,0);
  if (param_5 <= 0.0) {
    return lVar5;
  }
  FUN_14084ac3e(lVar5,param_5);
  return lVar5;
}



// FUNCTION 147ac7417 FUN_147ac7417 body=177 status=ok
// SIG undefined FUN_147ac7417(void)

longlong FUN_147ac7417(undefined8 param_1,undefined8 param_2,char param_3,undefined4 param_4,
                      longlong param_5,byte param_6)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_147ac74c8(param_2);
  *(byte *)(lVar2 + 0x9e) = *(byte *)(lVar2 + 0x9e) & 0xf7;
  *(byte *)(lVar2 + 0x2b0) = param_3 << 2 | param_6 | *(byte *)(lVar2 + 0x2b0) & 0xfa;
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_1);
  }
  bVar1 = DAT_14c950c29;
  *(undefined8 *)(lVar2 + 0x2a8) = param_1;
  *(undefined4 *)(lVar2 + 0x2b4) = param_4;
  if ((param_5 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_5);
  }
  *(longlong *)(lVar2 + 0x2b8) = param_5;
  FUN_140b506a4(lVar2);
  return lVar2;
}



// FUNCTION 147ac74c8 FUN_147ac74c8 body=175 status=ok
// SIG undefined FUN_147ac74c8(void)

undefined8 FUN_147ac74c8(undefined8 param_1)

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
  local_b8 = FUN_1458d4994();
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



// FUNCTION 147ac7578 FUN_147ac7578 body=339 status=ok
// SIG undefined FUN_147ac7578(void)

bool FUN_147ac7578(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_1f8 [40];
  undefined **local_1d0 [19];
  undefined2 local_138;
  longlong local_130;
  undefined1 local_128 [88];
  undefined **local_d0 [18];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (param_1 != (longlong *)0x0) {
    memset(local_d0,0,0x90);
    FUN_144869430(local_d0);
    local_40 = 0;
    local_d0[0] = &PTR_FUN_149e1e590;
    local_30 = 0;
    local_38 = param_2;
    FUN_144a69558(local_d0,1);
    (*(code *)local_d0[0][0x1e])(local_d0,1);
    local_d0[0] = &PTR_FUN_149e1e330;
    local_130 = param_1[2];
    if ((local_130 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_147ac69aa(local_128,&local_130);
    FUN_147ac6ce6(local_128,local_d0);
    FUN_140713482(local_1d0,local_d0);
    local_1d0[0] = &PTR_FUN_149eae6c0;
    local_138 = 0;
    (**(code **)(*param_1 + 0xd8))(param_1,local_1d0);
    FUN_14041e0ea(local_1d0);
    FUN_147ac76cc(local_128);
    FUN_144a7fc42(local_d0);
  }
  if ((local_28 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return param_1 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac76cc FUN_147ac76cc body=62 status=ok
// SIG undefined FUN_147ac76cc(void)

void FUN_147ac76cc(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147ac770a FUN_147ac770a body=90 status=ok
// SIG undefined FUN_147ac770a(void)

undefined8 FUN_147ac770a(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_146036e40();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1);
  if (((plVar1 == (longlong *)0x0) || (*(int *)(param_1 + 8) < 1)) ||
     (0x7ffffffe < *(int *)(param_2 + 1) - 2U)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,0,*param_2,param_3,param_1);
  }
  return uVar2;
}



// FUNCTION 147ac7764 FUN_147ac7764 body=505 status=ok
// SIG undefined FUN_147ac7764(void)

void FUN_147ac7764(undefined8 param_1,undefined8 *param_2,undefined4 param_3,longlong *param_4)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined1 auStack_e8 [32];
  undefined8 **local_c8;
  undefined1 **local_c0;
  undefined8 *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_8c;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar3 = (longlong *)FUN_146036e40();
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3);
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a9099d0;
  plVar5[2] = (longlong)puVar4;
  if ((plVar3 != (longlong *)0x0) && (*(int *)(param_2 + 1) - 2U < 0x7fffffff)) {
    cVar2 = FUN_147ac7578(param_1,puVar4);
    if ((cVar2 != '\0') && (0 < *(int *)(puVar4 + 1))) {
      FUN_140adf126(&local_8c,param_3);
      local_a8 = 0;
      local_a0 = 0;
      FUN_147aafa62(&local_a8,param_4);
      local_78 = 0;
      local_68 = &PTR_FUN_14a9099f0;
      local_60 = local_a8;
      local_a8 = 0;
      local_58 = local_a0;
      local_a0 = 0;
      local_88[0] = &LAB_143505066;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (*(int *)(param_2 + 1) == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*param_2;
      }
      local_c0 = local_88;
      local_c8 = &local_b8;
      local_b8 = puVar4;
      local_b0 = plVar5;
      local_98 = param_3;
      local_50 = param_3;
      (**(code **)(*plVar3 + 0x48))(plVar3,0,puVar6,local_8c);
      FUN_1449db362(&local_a8);
      goto LAB_147ac781b;
    }
  }
  if (((int)param_4[1] != 0) && (plVar3 = (longlong *)*param_4, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x60))(plVar3,param_2,param_3,0);
  }
LAB_147ac781b:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_1449db362(param_4);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac795e FUN_147ac795e body=482 status=ok
// SIG undefined FUN_147ac795e(void)

longlong * FUN_147ac795e(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  ulonglong local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined **local_1d8 [19];
  undefined2 local_140;
  undefined8 local_138;
  undefined6 uStack_130;
  undefined2 uStack_12a;
  undefined6 uStack_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined2 *local_f0;
  undefined8 uStack_e8;
  undefined **local_d8 [18];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_218;
  plVar3 = (longlong *)0x0;
  if (*(int *)(param_1 + 8) == 0) goto LAB_147ac798a;
  memset(local_d8,0,0x90);
  FUN_144869430(local_d8);
  local_48 = 0;
  local_d8[0] = &PTR_FUN_149e1e050;
  local_38 = 0x7fffffffffffffff;
  local_40 = param_1;
  FUN_140996f94(local_d8,1);
  (*(code *)local_d8[0][0x1e])(local_d8,1);
  local_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  uStack_12a = 0;
  uStack_128 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = (undefined2 *)0x0;
  uStack_e8 = 0;
  FUN_147ac6a84(&local_138,local_d8);
  uVar1 = FUN_144a797b2();
  lVar2 = FUN_1427dcdfa(uVar1,&local_f0,0);
  if (lVar2 == 0) {
    puVar4 = local_f0;
    if ((int)uStack_e8 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    uVar1 = FUN_144a797b2();
    plVar3 = (longlong *)0x0;
    uStack_1e0 = 0;
    local_1f0 = 0;
    local_1e8 = CONCAT71(local_1e8._1_7_,1);
    local_1f8 = (ulonglong)local_1f8._4_4_ << 0x20;
    lVar2 = FUN_1412ecd05(uVar1,0,puVar4,0);
    if (lVar2 != 0) goto LAB_147ac7ab8;
  }
  else {
LAB_147ac7ab8:
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1f0 = local_1f0 & 0xffffffffffffff00;
    local_1f8 = 0;
    plVar3 = (longlong *)FUN_1461a8ae2(DAT_14c951640,lVar2,0,0);
    FUN_140713482(local_1d8,local_d8);
    local_1d8[0] = &PTR_FUN_149eae6c0;
    local_140 = 1;
    (**(code **)(*plVar3 + 0xd8))(plVar3,local_1d8);
    FUN_14041e0ea(local_1d8);
  }
  FUN_147ac76cc(&local_138);
  FUN_144a7fc42(local_d8);
LAB_147ac798a:
  if ((local_30 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 147ac7b42 FUN_147ac7b42 body=118 status=ok
// SIG undefined FUN_147ac7b42(void)

undefined8 FUN_147ac7b42(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_146036e40();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2);
  if ((plVar2 != (longlong *)0x0) && (*(int *)(param_2 + 1) - 2U < 0x7fffffff)) {
    cVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,0,*param_2,param_3 & 0xffffffff,param_1);
    if (cVar1 != '\0') {
      return CONCAT71((uint7)(param_3 >> 8) & 0xffffff,1);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_144893a1c(param_1,0);
  }
  return 0;
}



// FUNCTION 147ac7bb8 FUN_147ac7bb8 body=323 status=ok
// SIG undefined FUN_147ac7bb8(void)

void FUN_147ac7bb8(undefined8 *param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined2 *puVar2;
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_8c;
  code *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)FUN_146036e40();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1);
  if ((plVar1 == (longlong *)0x0) || (0x7ffffffe < *(int *)(param_1 + 1) - 2U)) {
    if (((int)param_3[1] != 0) && (plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,0);
    }
  }
  else {
    FUN_140adf126(&local_8c,param_2);
    local_a8 = 0;
    local_a0 = 0;
    FUN_147aaf716(&local_a8,param_3);
    local_78 = 0;
    local_68 = &PTR_FUN_14a909a10;
    local_60 = local_a8;
    local_a8 = 0;
    local_58 = local_a0;
    local_a0 = 0;
    local_88[0] = FUN_14350515c;
    if (*(int *)(param_1 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_1;
    }
    local_b8 = local_88;
    local_98 = param_2;
    local_50 = param_2;
    (**(code **)(*plVar1 + 0x50))(plVar1,0,puVar2,local_8c);
    FUN_1449db362(&local_a8);
  }
  FUN_1449db362(param_3);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac7cfc FUN_147ac7cfc body=1815 status=ok
// SIG undefined FUN_147ac7cfc(void)

undefined8 FUN_147ac7cfc(undefined8 *param_1,undefined4 *param_2)

{
  double dVar1;
  float fVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  double *pdVar9;
  undefined8 *puVar10;
  double *pdVar11;
  bool bVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_1f8 [32];
  float local_1d8;
  undefined4 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 *local_1b8;
  undefined1 local_1b0;
  undefined4 *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  uint local_178;
  undefined4 uStack_174;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double local_110 [4];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  dVar25 = (double)param_1[6] - (double)param_1[3];
  dVar1 = (double)param_1[5] - (double)param_1[2];
  dVar26 = (double)param_1[4] - (double)param_1[1];
  dVar22 = dVar26 * dVar26 + dVar1 * dVar1;
  if ((dVar22 != 1.0) || (NAN(dVar22))) {
    if (9.99999993922529e-09 <= dVar22) {
      uStack_140 = dVar1 * (1.0 / SQRT(dVar22));
      local_148 = (1.0 / SQRT(dVar22)) * dVar26;
      goto LAB_147ac7e59;
    }
    local_138 = DAT_14c8464f0;
    local_148 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_140 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    local_148 = dVar26;
    uStack_140 = dVar1;
    if ((dVar25 != 0.0) || (local_138 = dVar25, NAN(dVar25))) {
LAB_147ac7e59:
      local_138 = 0.0;
    }
  }
  fVar29 = *(float *)(param_1 + 7);
  lVar5 = FUN_1402ad3be(DAT_14cb0d2b0,*param_1,1);
  if (lVar5 != 0) {
    fVar24 = (float)SQRT(dVar22);
    fVar29 = fVar29 * fVar29;
    fVar14 = *(float *)((longlong)param_1 + 0x44);
    if (ABS(fVar14) <= 1e-08) {
      fVar14 = (float)FUN_144a7c670(lVar5);
    }
    dVar3 = local_138;
    dVar27 = uStack_140;
    dVar21 = local_148;
    fVar28 = (((float)dVar25 + (float)dVar25) * fVar29 - fVar24 * fVar24 * fVar14) * fVar14 +
             fVar29 * fVar29;
    if (0.0 <= fVar28) {
      if (fVar28 < 0.0) {
        fVar28 = sqrtf(fVar28);
      }
      else {
        fVar28 = SQRT(fVar28);
      }
      dVar1 = local_138;
      dVar26 = uStack_140;
      dVar22 = local_148;
      fVar24 = fVar24 * -fVar14;
      fVar23 = (fVar29 + fVar28) / fVar24;
      fVar24 = (fVar29 - fVar28) / fVar24;
      fVar15 = fVar29 / (fVar23 * fVar23 + 1.0);
      fVar28 = fVar29 / (fVar24 * fVar24 + 1.0);
      fVar16 = fVar15;
      if (*(char *)((longlong)param_1 + 0x3c) == '\x01') {
        if (fVar28 <= fVar15) {
          fVar16 = fVar28;
        }
        bVar12 = fVar15 < fVar28;
        bVar7 = fVar15 < fVar28;
      }
      else {
        if (fVar15 <= fVar28) {
          fVar16 = fVar28;
        }
        bVar12 = fVar28 < fVar15;
        bVar7 = fVar28 < fVar15;
      }
      fVar2 = (float)(~-(uint)bVar7 & (uint)fVar24 | -(uint)bVar7 & (uint)fVar23);
      uVar13 = -(uint)(0.0 < fVar2);
      local_160 = (double)CONCAT44(local_160._4_4_,
                                   uVar13 & 0x3f800000 | ~uVar13 & -(uint)(fVar2 < 0.0) & 0xbf800000
                                  );
      if (!bVar12 && fVar15 != fVar28) {
        fVar28 = fVar15;
        fVar24 = fVar23;
      }
      local_178 = -(uint)(0.0 < fVar24) & 0x3f800000 |
                  ~-(uint)(0.0 < fVar24) & -(uint)(fVar24 < 0.0) & 0xbf800000;
      pdVar9 = (double *)&local_128;
      pdVar11 = &local_160;
      bVar12 = true;
      local_1a0 = param_2;
      do {
        bVar7 = bVar12;
        if (fVar16 < 0.0) {
          fVar24 = sqrtf(fVar16);
        }
        else {
          fVar24 = SQRT(fVar16);
        }
        fVar16 = fVar29 - fVar16;
        if (fVar16 < 0.0) {
          fVar16 = sqrtf(fVar16);
        }
        else {
          fVar16 = SQRT(fVar16);
        }
        dVar21 = (double)fVar24;
        dVar25 = (double)fVar16;
        dVar27 = (double)*(float *)pdVar11;
        *pdVar9 = dVar25 * DAT_14c8462c0 * dVar27 + dVar21 * dVar22;
        pdVar9[1] = DAT_14c8462c8 * dVar25 * dVar27 + dVar26 * dVar21;
        pdVar9[2] = DAT_14c8462d0 * dVar25 * dVar27 + dVar1 * dVar21;
        pdVar9 = local_110;
        pdVar11 = (double *)&local_178;
        bVar12 = false;
        fVar16 = fVar28;
      } while (bVar7);
      lVar8 = 2;
      param_2 = local_1a0;
    }
    else {
      if (*(char *)((longlong)param_1 + 0x69) != '\x01') goto LAB_147ac830f;
      dVar22 = dVar25 * dVar25 + dVar22;
      if ((dVar22 != 1.0) || (NAN(dVar22))) {
        if (9.99999993922529e-09 <= dVar22) {
          dVar22 = 1.0 / SQRT(dVar22);
          dVar25 = dVar25 * dVar22;
          dVar1 = dVar1 * dVar22;
          dVar26 = dVar26 * dVar22;
        }
        else {
          dVar26 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          dVar1 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          dVar25 = DAT_14c8464f0;
        }
      }
      dVar26 = dVar25 * local_138 + dVar26 * local_148 + dVar1 * uStack_140;
      dVar22 = dVar26;
      if (1.0 <= dVar26) {
        dVar22 = 1.0;
      }
      dVar22 = acos((double)(-(ulonglong)(dVar26 < -1.0) & 0xbff0000000000000 |
                            ~-(ulonglong)(dVar26 < -1.0) & (ulonglong)dVar22));
      local_150 = dVar21 * 0.0 + dVar27 * -0.0;
      local_160 = dVar27 - dVar3 * 0.0;
      local_158 = dVar3 * 0.0 - dVar21;
      FUN_140ccff96(&local_148,&local_178,
                    SUB84((double)((float)dVar22 * -0.5 + 0.7853982 + (float)dVar22),0));
      local_128 = (double)*(float *)(param_1 + 7);
      local_118 = local_168 * local_128;
      uStack_120 = local_170 * local_128;
      local_128 = local_128 * (double)CONCAT44(uStack_174,local_178);
      lVar8 = 1;
    }
    if (*(int *)(param_1 + 9) == 0) {
      *(double *)(param_2 + 4) = local_118;
      dVar22 = local_118;
      uVar17 = (undefined4)local_128;
      uVar18 = local_128._4_4_;
      uVar19 = (undefined4)uStack_120;
      uVar20 = uStack_120._4_4_;
LAB_147ac83ab:
      *param_2 = uVar17;
      param_2[1] = uVar18;
      param_2[2] = uVar19;
      param_2[3] = uVar20;
      uVar6 = CONCAT71((int7)((ulonglong)dVar22 >> 8),1);
      goto LAB_147ac8311;
    }
    puVar10 = &local_128;
    do {
      local_1b0 = *(undefined1 *)(param_1 + 0xd);
      local_1c0 = param_1[10];
      local_1c8 = *(undefined4 *)(param_1 + 9);
      local_1d0 = *(undefined4 *)(param_1 + 8);
      local_188 = param_1[3];
      local_198 = param_1[1];
      uStack_190 = param_1[2];
      local_1d8 = -fVar14;
      local_1b8 = param_1 + 0xb;
      cVar4 = FUN_1434f7466(lVar5,&local_198,puVar10);
      if (cVar4 == '\0') {
        dVar22 = (double)puVar10[2];
        *(double *)(param_2 + 4) = dVar22;
        uVar17 = *(undefined4 *)puVar10;
        uVar18 = *(undefined4 *)((longlong)puVar10 + 4);
        uVar19 = *(undefined4 *)(puVar10 + 1);
        uVar20 = *(undefined4 *)((longlong)puVar10 + 0xc);
        goto LAB_147ac83ab;
      }
      puVar10 = puVar10 + 3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
LAB_147ac830f:
  uVar6 = 0;
LAB_147ac8311:
  if ((local_f0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 147ac8414 FUN_147ac8414 body=170 status=ok
// SIG undefined FUN_147ac8414(void)

void FUN_147ac8414(longlong *param_1,undefined4 *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_40 = param_3[2];
  uStack_50 = *param_3;
  uStack_48 = param_3[1];
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_58 = *(undefined8 *)(param_2 + 4);
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_147ad0aca(param_1,iVar2);
  }
  lVar3 = *param_1;
  lVar4 = (longlong)iVar2 * 0x38;
  puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar4);
  *puVar1 = (undefined4)uStack_48;
  puVar1[1] = uStack_48._4_4_;
  puVar1[2] = (undefined4)uStack_40;
  puVar1[3] = uStack_40._4_4_;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = (undefined4)local_58;
  puVar1[1] = local_58._4_4_;
  puVar1[2] = (undefined4)uStack_50;
  puVar1[3] = uStack_50._4_4_;
  puVar1 = (undefined4 *)(lVar3 + lVar4);
  *puVar1 = local_68;
  puVar1[1] = uStack_64;
  puVar1[2] = uStack_60;
  puVar1[3] = uStack_5c;
  *(undefined4 *)(lVar3 + 0x30 + lVar4) = param_4;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac84c0 FUN_147ac84c0 body=74 status=ok
// SIG undefined FUN_147ac84c0(void)

undefined8 * FUN_147ac84c0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1407f2096(param_1,iVar1);
    FUN_147ad1dcf(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 147ac850a FUN_147ac850a body=129 status=ok
// SIG undefined FUN_147ac850a(void)

undefined4 *
FUN_147ac850a(undefined4 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *param_1 = param_4;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_28 = param_2;
  FUN_140244552(param_1 + 2,&local_28,&local_30);
  FUN_1456ea0d4(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac85a8 FUN_147ac85a8 body=72 status=ok
// SIG undefined FUN_147ac85a8(void)

void FUN_147ac85a8(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_144a792c0(param_1,0x30);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x3ac) == '\x01') {
      *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_1 + 0x3a8);
    }
    if (*(char *)(param_1 + 0x3b4) == '\x01') {
      *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_1 + 0x3b0);
    }
  }
  return;
}



// FUNCTION 147ac85f4 FUN_147ac85f4 body=257 status=ok
// SIG undefined FUN_147ac85f4(void)

undefined4 FUN_147ac85f4(undefined8 param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = FUN_1447210f0();
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a909b10;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar6;
  *local_30 = &PTR_FUN_14a909aa0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_1);
  puVar1[4] = &LAB_147ac86f6;
  plVar5 = (longlong *)FUN_140489acc();
  uVar3 = (**(code **)(*plVar5 + 0x308))(plVar5,uVar4,0,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac8704 FUN_147ac8704 body=70 status=ok
// SIG undefined FUN_147ac8704(void)

void FUN_147ac8704(longlong *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = FUN_1447210f0();
  plVar3 = (longlong *)FUN_140489acc();
  bVar1 = (**(code **)(*plVar3 + 0x310))(plVar3,uVar2,param_2);
                    /* WARNING: Could not recover jumptable at 0x000147ac8742. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6d0 + (ulonglong)(bVar1 ^ 1) * 8))(param_1);
  return;
}



// FUNCTION 147ac874c FUN_147ac874c body=346 status=ok
// SIG undefined FUN_147ac874c(void)

void FUN_147ac874c(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar9 = FUN_1447210f0();
  iVar7 = FUN_14487fd02(param_1);
  if ((iVar7 != 0) && (0 < (int)param_3[1])) {
    plVar10 = (longlong *)FUN_140489acc();
    cVar6 = (**(code **)(*plVar10 + 0x328))(plVar10,uVar9,param_2);
    if (cVar6 != '\0') {
      local_58 = 0;
      uStack_50 = 0;
      lVar4 = param_3[1];
      local_68 = uVar9;
      local_60 = param_2;
      if ((longlong)(int)lVar4 != 0) {
        lVar3 = *param_3;
        lVar11 = 0;
        do {
          uVar5 = uStack_50;
          lVar12 = (longlong)(int)uStack_50;
          uVar8 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
          if (uStack_50._4_4_ < uVar8) {
            FUN_140b721da(&local_58,uVar5 & 0xffffffff);
          }
          puVar1 = (undefined8 *)(local_58 + lVar12 * 0x20);
          *puVar1 = &PTR_FUN_14a184370;
          bVar2 = *(byte *)(lVar3 + 0x18 + lVar11);
          *(byte *)(puVar1 + 3) = bVar2;
          (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[bVar2])
                    (puVar1 + 1,lVar3 + 8 + lVar11);
          lVar11 = lVar11 + 0x30;
        } while ((longlong)(int)lVar4 * 0x30 != lVar11);
      }
      plVar10 = (longlong *)FUN_140489acc();
      (**(code **)(*plVar10 + 0x350))(plVar10,local_68,local_60,&local_58);
      FUN_14127bbf3(local_58,uStack_50 & 0xffffffff);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac88ba FUN_147ac88ba body=146 status=ok
// SIG undefined FUN_147ac88ba(void)

undefined8 FUN_147ac88ba(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x430) != 0)) {
    lVar2 = FUN_140496b24();
    if (*(longlong *)(param_2 + 0x430) != 0) {
      if (lVar2 == 0) {
        return 0;
      }
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x430) + 0x10);
      if (lVar1 == 0) {
        return 0;
      }
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) {
        if (*(longlong *)(param_2 + 0x3d0) != 0) {
          FUN_140aeefbc(*(longlong *)(param_2 + 0x3d0),0,1);
        }
        FUN_147c9742a(param_2,param_3);
        FUN_140aeefbc(param_2,0,1);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 147ac895a FUN_147ac895a body=467 status=ok
// SIG undefined FUN_147ac895a(void)

void FUN_147ac895a(undefined8 param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined4 local_58;
  undefined1 local_4c [4];
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = L"HostHasLeft";
  local_40 = 0xb;
  FUN_1446e940c(&local_60,&local_48);
  local_48 = L"NetworkErrors";
  local_40 = 0xd;
  FUN_1446e940c(local_4c,&local_48);
  FUN_140208bae(&local_48,local_4c,&local_60,L"Host has left the game.");
  plVar2 = (longlong *)FUN_140e82300();
  plVar4 = (longlong *)*plVar2;
  local_60 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
  }
  local_58 = (undefined4)plVar2[1];
  lVar3 = FUN_1447210f0(param_1);
  if (0 < *(int *)(lVar3 + 0x238)) {
    iVar6 = 0;
    lVar5 = 0;
    do {
      plVar2 = (longlong *)FUN_14479d2ce(*(longlong *)(lVar3 + 0x230) + lVar5);
      if (plVar2 != (longlong *)0x0) {
        if ((*(byte *)(plVar2 + 0x84) & 2) != 0) {
          cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
          if (cVar1 != '\0') goto LAB_147ac8a6a;
        }
        cVar1 = FUN_141107632(plVar2);
        if (cVar1 != '\0') {
          (**(code **)(*plVar2 + 0xb10))(plVar2,&local_48);
        }
      }
LAB_147ac8a6a:
      lVar5 = lVar5 + 8;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(lVar3 + 0x238));
    if (0 < *(int *)(lVar3 + 0x238)) {
      iVar6 = 0;
      lVar5 = 0;
      do {
        plVar2 = (longlong *)FUN_14479d2ce(*(longlong *)(lVar3 + 0x230) + lVar5);
        if ((plVar2 != (longlong *)0x0) && ((*(byte *)(plVar2 + 0x84) & 2) != 0)) {
          cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
          if (cVar1 != '\0') {
            cVar1 = FUN_141107632(plVar2);
            if (cVar1 != '\0') {
              (**(code **)(*plVar2 + 0xb10))(plVar2,&local_60);
              plVar4 = local_60;
              break;
            }
          }
        }
        lVar5 = lVar5 + 8;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(lVar3 + 0x238));
    }
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (local_48 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_48 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ac8b34 FUN_147ac8b34 body=83 status=ok
// SIG undefined FUN_147ac8b34(void)

void FUN_147ac8b34(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_1447210f0();
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0x394);
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 0x398);
  plVar2 = (longlong *)FUN_140489acc();
                    /* WARNING: Could not recover jumptable at 0x000147ac8b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x330))(plVar2,uVar1,param_2,param_3);
  return;
}



// FUNCTION 147ac8b88 FUN_147ac8b88 body=120 status=ok
// SIG undefined FUN_147ac8b88(void)

void FUN_147ac8b88(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = FUN_14487fd02();
  if (iVar3 != 0) {
    plVar1 = (longlong *)FUN_140489acc();
    uVar2 = FUN_1447210f0(param_1);
    (**(code **)(*plVar1 + 0x338))(plVar1,uVar2,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}


