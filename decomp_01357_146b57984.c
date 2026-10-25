// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146b57984 FUN_146b57984 body=210 status=ok
// SIG undefined FUN_146b57984(void)

undefined8 * FUN_146b57984(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_146173bac(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140549c28(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_146b57a56(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(puVar4 + 8);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 10;
        puVar6 = puVar6 + 10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 146b57a56 FUN_146b57a56 body=114 status=ok
// SIG undefined FUN_146b57a56(void)

undefined8 * FUN_146b57a56(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = param_2[2];
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 146b57ac8 FUN_146b57ac8 body=167 status=ok
// SIG undefined FUN_146b57ac8(void)

void FUN_146b57ac8(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_2 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x18) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x10) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x10) = param_2;
    if (*(longlong **)(param_2 + 0x18) == plVar2) goto LAB_146b57b43;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x18) = plVar2;
      goto LAB_146b57b43;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x18) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_146b57b43:
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
                    /* WARNING: Could not recover jumptable at 0x000146b57b63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 146b57b88 FUN_146b57b88 body=29 status=ok
// SIG undefined FUN_146b57b88(void)

undefined8 FUN_146b57b88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b57bbe FUN_146b57bbe body=29 status=ok
// SIG undefined FUN_146b57bbe(void)

undefined8 FUN_146b57bbe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b57bdc FUN_146b57bdc body=118 status=ok
// SIG undefined FUN_146b57bdc(void)

void FUN_146b57bdc(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
  if (plVar4 != (longlong *)0x0) {
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 146b57c52 FUN_146b57c52 body=62 status=ok
// SIG undefined FUN_146b57c52(void)

void FUN_146b57c52(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146b57c90(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146b57c90 FUN_146b57c90 body=93 status=ok
// SIG undefined FUN_146b57c90(void)

ulonglong FUN_146b57c90(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146b57cee FUN_146b57cee body=95 status=ok
// SIG undefined FUN_146b57cee(void)

void FUN_146b57cee(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146b57d4e FUN_146b57d4e body=95 status=ok
// SIG undefined FUN_146b57d4e(void)

void FUN_146b57d4e(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 8 + (longlong)(int)param_2 * 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  iVar4 = (int)param_1[1];
  if (~param_2 + iVar4 != 0) {
    _Dst = (void *)(lVar2 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar4) << 4);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 146b57dae FUN_146b57dae body=62 status=ok
// SIG undefined FUN_146b57dae(void)

void FUN_146b57dae(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146b57dec(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146b57dec FUN_146b57dec body=93 status=ok
// SIG undefined FUN_146b57dec(void)

ulonglong FUN_146b57dec(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146b57e4a FUN_146b57e4a body=321 status=ok
// SIG undefined FUN_146b57e4a(void)

undefined4 * FUN_146b57e4a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146b52c40(param_1,local_38);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_30 = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_30 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_30 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_30[2] = *puVar2;
  lVar8 = puVar2[1];
  local_30[3] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_30 + 4) = 0xffffffff;
  iVar9 = *(int *)(local_30 + 1);
  if (iVar9 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*local_30;
  }
  iVar3 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar3 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar3,puVar7);
  uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar9 = 1;
  if (3 < uVar6) {
    uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
    lVar8 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar9 = 1 << ((byte)lVar8 & 0x1f);
  }
  if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
    uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
    *(uint *)((longlong)local_30 + 0x24) = uVar4;
    lVar8 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar8 = param_1 + 0x38;
    }
    *(undefined4 *)(local_30 + 4) =
         *(undefined4 *)
          (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
    lVar8 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar8 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4) =
         local_38[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar9;
    FUN_146b52d26(param_1);
  }
  *param_2 = local_38[0];
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b57f8c FUN_146b57f8c body=268 status=ok
// SIG undefined FUN_146b57f8c(void)

int FUN_146b57f8c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  int iVar7;
  ushort uVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  
  iVar7 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    iVar7 = 0;
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = iVar7;
    }
    iVar2 = FUN_144a49b4a(iVar4,puVar6);
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar3 = (longlong)iVar2 & (longlong)(int)param_1[9] - 1U;
    iVar2 = *(int *)((longlong)plVar5 + uVar3 * 4);
    if (iVar2 != -1) {
      plVar5 = (longlong *)((longlong)plVar5 + uVar3 * 4);
      iVar7 = 0;
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x28);
        iVar2 = (int)plVar1[1];
        if (iVar2 == (int)param_2[1]) {
          if (1 < iVar2) {
            lVar9 = 0;
            while( true ) {
              uVar8 = *(ushort *)(*plVar1 + lVar9);
              uVar3 = (ulonglong)uVar8;
              uVar10 = *(ushort *)(*param_2 + lVar9);
              if (uVar8 != uVar10) break;
              if (uVar8 == 0) goto LAB_146b5806f;
LAB_146b58044:
              lVar9 = lVar9 + 2;
            }
            if ((uVar10 | uVar8) < 0x80) {
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
              uVar11 = (ulonglong)uVar10;
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar11]) goto LAB_146b58044;
            }
            if (uVar8 != uVar10) goto LAB_146b5808f;
          }
LAB_146b5806f:
          FUN_146b58098(param_1);
          iVar7 = iVar7 + 1;
        }
        else {
          if ((int)param_2[1] + iVar2 == 1) goto LAB_146b5806f;
LAB_146b5808f:
          plVar5 = plVar1 + 4;
        }
        iVar2 = (int)*plVar5;
      } while (iVar2 != -1);
    }
  }
  return iVar7;
}



// FUNCTION 146b58098 FUN_146b58098 body=231 status=ok
// SIG undefined FUN_146b58098(void)

void FUN_146b58098(longlong *param_1,int param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  
  lVar3 = *param_1;
  plVar6 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[8];
  }
  lVar1 = lVar3 + (longlong)param_2 * 0x28;
  lVar9 = (longlong)*(int *)(lVar1 + 0x24);
  iVar8 = *(int *)((longlong)plVar6 + lVar9 * 4);
  if (iVar8 == param_2) {
    puVar5 = (undefined4 *)((longlong)plVar6 + lVar9 * 4);
  }
  else {
    do {
      lVar9 = (longlong)iVar8;
      iVar8 = *(int *)(lVar3 + 0x20 + lVar9 * 0x28);
    } while (iVar8 != param_2);
    puVar5 = (undefined4 *)(lVar3 + lVar9 * 0x28 + 0x20);
  }
  *puVar5 = *(undefined4 *)(lVar1 + 0x20);
  FUN_146b48c26((longlong)param_2 * 0x28 + *param_1);
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar5 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar5 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (undefined4)param_1[6];
  }
  puVar5[1] = uVar7;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar8 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar8 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar6 + (longlong)(iVar8 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 146b58180 FUN_146b58180 body=48 status=ok
// SIG undefined FUN_146b58180(void)

void FUN_146b58180(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 146b581b0 FUN_146b581b0 body=73 status=ok
// SIG undefined FUN_146b581b0(void)

void FUN_146b581b0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      }
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146b581f9 FUN_146b581f9 body=170 status=ok
// SIG undefined FUN_146b581f9(void)

void FUN_146b581f9(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar1 = (code *)*param_2;
  plVar4 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_2[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_48,uVar3);
  lVar2 = *param_1;
  *(longlong *)(lVar2 + 0x80) = local_48;
  local_48 = 0;
  *(undefined4 *)(lVar2 + 0x88) = (undefined4)local_40;
  *(undefined4 *)(lVar2 + 0x8c) = local_40._4_4_;
  local_40 = 0;
  *(undefined1 *)(lVar2 + 0x90) = local_38;
  *(undefined4 *)(lVar2 + 0x94) = local_34;
  *(undefined4 *)(lVar2 + 0x98) = uStack_30;
  *(undefined4 *)(lVar2 + 0x9c) = uStack_2c;
  *(undefined4 *)(lVar2 + 0xa0) = uStack_28;
  FUN_140b576f0();
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b582a4 FUN_146b582a4 body=130 status=ok
// SIG undefined FUN_146b582a4(void)

longlong * FUN_146b582a4(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xc0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f2f440;
  FUN_1405d89e4(plVar3 + 2,param_2);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_1;
}



// FUNCTION 146b58326 FUN_146b58326 body=52 status=ok
// SIG undefined FUN_146b58326(void)

void FUN_146b58326(longlong param_1)

{
  if (((*(byte *)(param_1 + 0x88) & 1) != 0) && (*(longlong *)(param_1 + 0x90) != 0)) {
    FUN_1400020a8();
  }
  FUN_140788a7e(param_1 + 0x10);
  return;
}



// FUNCTION 146b5835a FUN_146b5835a body=29 status=ok
// SIG undefined FUN_146b5835a(void)

undefined8 FUN_146b5835a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b58378 FUN_146b58378 body=56 status=ok
// SIG undefined FUN_146b58378(void)

void FUN_146b58378(longlong *param_1)

{
  FUN_146b581f9(param_1 + 10,param_1 + 2);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b583a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 146b583b2 FUN_146b583b2 body=38 status=ok
// SIG undefined FUN_146b583b2(void)

undefined8 FUN_146b583b2(undefined8 param_1,int param_2)

{
  FUN_146b583d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b583d8 FUN_146b583d8 body=138 status=ok
// SIG undefined FUN_146b583d8(void)

void FUN_146b583d8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_149f2f460;
  plVar4 = (longlong *)param_1[0xb];
  if (plVar4 != (longlong *)0x0) {
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
  if (param_1[2] != 0) {
    plVar4 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *param_1 = IQueuedWork::vftable;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146b58457. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 146b58462 FUN_146b58462 body=132 status=ok
// SIG undefined FUN_146b58462(void)

void FUN_146b58462(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b584e7 FUN_146b584e7 body=73 status=ok
// SIG undefined FUN_146b584e7(void)

void FUN_146b584e7(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      }
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146b58530 FUN_146b58530 body=174 status=ok
// SIG undefined FUN_146b58530(void)

void FUN_146b58530(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar1 = (code *)*param_2;
  plVar4 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_2[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_48,uVar3);
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0x80) = local_48;
  *(undefined8 *)(lVar2 + 0x88) = uStack_40;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(lVar2 + 0x90) = local_38;
  local_38 = 0;
  *(undefined4 *)(lVar2 + 0x98) = (undefined4)local_30;
  *(undefined4 *)(lVar2 + 0x9c) = local_30._4_4_;
  local_30 = 0;
  FUN_140b576f0();
  FUN_146b44bac(&local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b585e0 FUN_146b585e0 body=130 status=ok
// SIG undefined FUN_146b585e0(void)

longlong * FUN_146b585e0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xb0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f2f4b0;
  FUN_1405d89e4(plVar3 + 2,param_2);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_1;
}



// FUNCTION 146b58662 FUN_146b58662 body=49 status=ok
// SIG undefined FUN_146b58662(void)

void FUN_146b58662(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
    FUN_146b44bac(param_1 + 0x90);
  }
  FUN_140788a7e(param_1 + 0x10);
  return;
}



// FUNCTION 146b58694 FUN_146b58694 body=29 status=ok
// SIG undefined FUN_146b58694(void)

undefined8 FUN_146b58694(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b586b2 FUN_146b586b2 body=56 status=ok
// SIG undefined FUN_146b586b2(void)

void FUN_146b586b2(longlong *param_1)

{
  FUN_146b58530(param_1 + 10,param_1 + 2);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b586e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 146b586ec FUN_146b586ec body=38 status=ok
// SIG undefined FUN_146b586ec(void)

undefined8 FUN_146b586ec(undefined8 param_1,int param_2)

{
  FUN_146b58712();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b58712 FUN_146b58712 body=138 status=ok
// SIG undefined FUN_146b58712(void)

void FUN_146b58712(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_149f2f4d0;
  plVar4 = (longlong *)param_1[0xb];
  if (plVar4 != (longlong *)0x0) {
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
  if (param_1[2] != 0) {
    plVar4 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *param_1 = IQueuedWork::vftable;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146b58791. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 146b5879c FUN_146b5879c body=132 status=ok
// SIG undefined FUN_146b5879c(void)

void FUN_146b5879c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b58822 FUN_146b58822 body=147 status=ok
// SIG undefined FUN_146b58822(void)

void FUN_146b58822(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b588b6 FUN_146b588b6 body=794 status=ok
// SIG undefined FUN_146b588b6(void)

void FUN_146b588b6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  int iVar6;
  ulonglong *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  bool bVar20;
  float fVar21;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0x18 + -0x18;
    local_358 = param_1;
    fVar21 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar21 + fVar21);
    plVar13 = &local_358;
    do {
      puVar5 = (ulonglong *)*plVar13;
      puVar14 = (ulonglong *)plVar13[1];
      iVar16 = (int)plVar13[2];
      iVar6 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar5) >> 3);
      puVar11 = puVar14;
      puVar18 = puVar5;
      if (iVar16 != 0) {
LAB_146b58983:
        uVar8 = iVar6 * -0x55555555 + 1;
        if (8 < (int)uVar8) {
          uVar9 = (ulonglong)(uVar8 >> 1);
          uVar17 = puVar5[uVar9 * 3 + 2];
          uVar1 = puVar5[uVar9 * 3];
          uVar2 = (puVar5 + uVar9 * 3)[1];
          puVar5[uVar9 * 3 + 2] = puVar5[2];
          uVar3 = puVar5[1];
          puVar5[uVar9 * 3] = *puVar5;
          (puVar5 + uVar9 * 3)[1] = uVar3;
          puVar5[2] = uVar17;
          *puVar5 = uVar1;
          puVar5[1] = uVar2;
          puVar10 = puVar14 + 3;
          puVar7 = puVar5;
          do {
            puVar4 = puVar7 + 3;
            puVar15 = puVar7 + 3;
            do {
              puVar7 = puVar15;
              puVar12 = puVar4;
              if (puVar14 < puVar7) break;
              puVar4 = puVar12 + 3;
              puVar15 = puVar7 + 3;
            } while (*puVar7 <= *puVar5);
            puVar4 = puVar10 + -6;
            do {
              puVar15 = puVar10;
              puVar19 = puVar4;
              puVar10 = puVar15 + -3;
              if (puVar10 <= puVar5) break;
              puVar4 = puVar19 + -3;
            } while (*puVar5 <= *puVar10);
            if (puVar10 < puVar7) goto LAB_146b58a6a;
            uVar17 = puVar7[2];
            uVar1 = *puVar7;
            uVar2 = puVar7[1];
            puVar7[2] = puVar15[-1];
            uVar3 = puVar15[-2];
            *puVar7 = *puVar10;
            puVar7[1] = uVar3;
            puVar15[-1] = uVar17;
            *puVar10 = uVar1;
            puVar15[-2] = uVar2;
          } while( true );
        }
        if (puVar5 < puVar14) {
          do {
            puVar11 = puVar5;
            if (puVar5 + 3 <= puVar14) {
              uVar17 = *puVar5;
              puVar18 = puVar5 + 3;
              do {
                uVar1 = *puVar18;
                bVar20 = uVar17 < uVar1;
                if (uVar17 <= uVar1) {
                  uVar17 = uVar1;
                }
                if (bVar20) {
                  puVar11 = puVar18;
                }
                puVar18 = puVar18 + 3;
              } while (puVar18 <= puVar14);
            }
            local_48 = puVar11[2];
            local_58 = *puVar11;
            uStack_50 = puVar11[1];
            uVar1 = local_58;
            uVar2 = uStack_50;
            puVar11[2] = puVar14[2];
            uVar17 = puVar14[1];
            *puVar11 = *puVar14;
            puVar11[1] = uVar17;
            puVar14[2] = local_48;
            local_58._4_4_ = (undefined4)(local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)(uStack_50 >> 0x20);
            *(undefined4 *)puVar14 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar14 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_50._4_4_;
            puVar14 = puVar14 + -3;
            local_58 = uVar1;
            uStack_50 = uVar2;
          } while (puVar5 < puVar14);
        }
        goto LAB_146b58baf;
      }
LAB_146b58bc4:
      FUN_146b58bd1(puVar5);
LAB_146b58baf:
      plVar13 = plVar13 + -3;
    } while (&local_358 <= plVar13);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146b58a6a:
  local_48 = puVar5[2];
  local_58 = *puVar5;
  uStack_50 = puVar5[1];
  uVar1 = local_58;
  uVar2 = uStack_50;
  puVar5[2] = puVar15[-1];
  uVar17 = puVar15[-2];
  *puVar5 = *puVar10;
  puVar5[1] = uVar17;
  puVar15[-1] = local_48;
  local_58._4_4_ = (undefined4)(local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)(uStack_50 >> 0x20);
  *(undefined4 *)puVar10 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar15 + -0x14) = local_58._4_4_;
  *(undefined4 *)(puVar15 + -2) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar15 + -0xc) = uStack_50._4_4_;
  iVar16 = iVar16 + -1;
  puVar15 = puVar15 + -6;
  local_58 = uVar1;
  uStack_50 = uVar2;
  if ((longlong)puVar19 - (longlong)puVar18 < (longlong)puVar11 - (longlong)puVar12) {
    if (puVar7 < puVar14) {
      *plVar13 = (longlong)puVar7;
      plVar13[1] = (longlong)puVar14;
      *(int *)(plVar13 + 2) = iVar16;
      plVar13 = plVar13 + 3;
    }
    puVar12 = puVar5;
    if (puVar10 <= puVar5 + 3) goto LAB_146b58baf;
  }
  else {
    if (puVar5 + 3 < puVar10) {
      *plVar13 = (longlong)puVar5;
      plVar13[1] = (longlong)puVar15;
      *(int *)(plVar13 + 2) = iVar16;
      plVar13 = plVar13 + 3;
    }
    puVar5 = puVar7;
    puVar15 = puVar14;
    puVar19 = puVar14;
    if (puVar14 <= puVar7) goto LAB_146b58baf;
  }
  iVar6 = (int)((ulonglong)((longlong)puVar19 - (longlong)puVar12) >> 3);
  puVar14 = puVar15;
  puVar11 = puVar19;
  puVar18 = puVar12;
  if (iVar16 == 0) goto LAB_146b58bc4;
  goto LAB_146b58983;
}



// FUNCTION 146b58bd1 FUN_146b58bd1 body=567 status=ok
// SIG undefined FUN_146b58bd1(void)

void FUN_146b58bd1(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar8;
joined_r0x000146b58c05:
    do {
      iVar10 = iVar8 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar11 = iVar8 * 2 + 2;
        if ((iVar11 < (int)param_2) &&
           ((ulonglong)param_1[(longlong)iVar10 * 3] <= (ulonglong)param_1[(longlong)iVar11 * 3])) {
          iVar10 = iVar11;
        }
        if ((ulonglong)param_1[(longlong)iVar8 * 3] < (ulonglong)param_1[(longlong)iVar10 * 3]) {
          puVar2 = param_1 + (longlong)iVar8 * 3;
          puVar3 = param_1 + (longlong)iVar10 * 3;
          local_18 = puVar2[2];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2[2] = puVar3[2];
          uVar6 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          puVar3[2] = local_18;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar3 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar3 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_20._4_4_;
          iVar8 = iVar10;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x000146b58c05;
        }
      }
      bVar13 = iVar12 != 0;
      iVar8 = iVar12 + -1;
      iVar12 = iVar8;
    } while (bVar13);
    if (1 < (int)param_2) {
      uVar9 = (ulonglong)param_2 - 1;
      local_18 = param_1[2];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      param_1[2] = param_1[uVar9 * 3 + 2];
      uVar6 = (param_1 + uVar9 * 3)[1];
      *param_1 = param_1[uVar9 * 3];
      param_1[1] = uVar6;
      param_1[uVar9 * 3 + 2] = local_18;
      local_28._0_4_ = (undefined4)uVar4;
      local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar5;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar2 = param_1 + uVar9 * 3;
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      local_28 = uVar4;
      uStack_20 = uVar5;
      if (param_2 != 2) {
        do {
          iVar8 = 0;
          iVar10 = 1;
          iVar12 = 0;
          do {
            iVar8 = iVar8 + 2;
            iVar11 = iVar10;
            if (((longlong)iVar8 < (longlong)uVar9) &&
               ((ulonglong)param_1[(longlong)iVar10 * 3] <= (ulonglong)param_1[(longlong)iVar8 * 3])
               ) {
              iVar11 = iVar8;
            }
            if ((ulonglong)param_1[(longlong)iVar11 * 3] <= (ulonglong)param_1[(longlong)iVar12 * 3]
               ) break;
            puVar2 = param_1 + (longlong)iVar12 * 3;
            puVar3 = param_1 + (longlong)iVar11 * 3;
            uVar4 = puVar2[2];
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar7 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar7;
            puVar3[2] = uVar4;
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            iVar8 = iVar11 * 2;
            iVar10 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar10 < (longlong)uVar9);
          uVar1 = uVar9 - 1;
          local_18 = param_1[2];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          param_1[2] = param_1[uVar1 * 3 + 2];
          uVar6 = (param_1 + uVar1 * 3)[1];
          *param_1 = param_1[uVar1 * 3];
          param_1[1] = uVar6;
          param_1[uVar1 * 3 + 2] = local_18;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar2 = param_1 + uVar1 * 3;
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          bVar13 = 2 < uVar9;
          uVar9 = uVar1;
          local_28 = uVar4;
          uStack_20 = uVar5;
        } while (bVar13);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b58e0a FUN_146b58e0a body=48 status=ok
// SIG undefined FUN_146b58e0a(void)

void FUN_146b58e0a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 146b58e3a FUN_146b58e3a body=63 status=ok
// SIG undefined FUN_146b58e3a(void)

void FUN_146b58e3a(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_146b4ce62(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146b58fbe(param_1);
    return;
  }
  FUN_146b58e7a(param_1);
  FUN_146b4ce62(param_1);
  return;
}



// FUNCTION 146b58e7a FUN_146b58e7a body=322 status=ok
// SIG undefined FUN_146b58e7a(void)

void FUN_146b58e7a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b58fbe FUN_146b58fbe body=476 status=ok
// SIG undefined FUN_146b58fbe(void)

void FUN_146b58fbe(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b5919c FUN_146b5919c body=63 status=ok
// SIG undefined FUN_146b5919c(void)

void FUN_146b5919c(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_146b4ccf4(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146b59320(param_1);
    return;
  }
  FUN_146b591dc(param_1);
  FUN_146b4ccf4(param_1);
  return;
}



// FUNCTION 146b591dc FUN_146b591dc body=322 status=ok
// SIG undefined FUN_146b591dc(void)

void FUN_146b591dc(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b59320 FUN_146b59320 body=477 status=ok
// SIG undefined FUN_146b59320(void)

void FUN_146b59320(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b594fe FUN_146b594fe body=63 status=ok
// SIG undefined FUN_146b594fe(void)

void FUN_146b594fe(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_146b4cc66(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_146b59682(param_1);
    return;
  }
  FUN_146b5953e(param_1);
  FUN_146b4cc66(param_1);
  return;
}



// FUNCTION 146b5953e FUN_146b5953e body=322 status=ok
// SIG undefined FUN_146b5953e(void)

void FUN_146b5953e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b59682 FUN_146b59682 body=474 status=ok
// SIG undefined FUN_146b59682(void)

void FUN_146b59682(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b5985e FUN_146b5985e body=203 status=ok
// SIG undefined FUN_146b5985e(void)

int FUN_146b5985e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_146b598a8:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_146b5991e;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_146b5991e;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_146b5990f;
    }
  }
  return -1;
LAB_146b5991e:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_146b5990f:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_146b598a8;
}



// FUNCTION 146b5992a FUN_146b5992a body=315 status=ok
// SIG undefined FUN_146b5992a(void)

undefined4 * FUN_146b5992a(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b59a66(param_1,local_48);
  FUN_146b59bbe(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_146b59b4c(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146b58fbe(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b59a66 FUN_146b59a66 body=229 status=ok
// SIG undefined FUN_146b59a66(void)

int * FUN_146b59a66(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 146b59b4c FUN_146b59b4c body=114 status=ok
// SIG undefined FUN_146b59b4c(void)

undefined8 FUN_146b59b4c(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_146b5985e(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_146b59c22(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 146b59bbe FUN_146b59bbe body=100 status=ok
// SIG undefined FUN_146b59bbe(void)

undefined8 * FUN_146b59bbe(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = *puVar3;
  return param_2;
}



// FUNCTION 146b59c22 FUN_146b59c22 body=114 status=ok
// SIG undefined FUN_146b59c22(void)

void FUN_146b59c22(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 146b59c94 FUN_146b59c94 body=350 status=ok
// SIG undefined FUN_146b59c94(void)

undefined4 * FUN_146b59c94(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b59df4(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  *local_40 = *(ulonglong *)*param_3;
  local_40[1] = *puVar1;
  *puVar1 = 0;
  *(int *)(local_40 + 2) = (int)puVar1[1];
  *(undefined4 *)((longlong)local_40 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_146b59eda(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146b59320(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b59df4 FUN_146b59df4 body=229 status=ok
// SIG undefined FUN_146b59df4(void)

int * FUN_146b59df4(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 146b59eda FUN_146b59eda body=161 status=ok
// SIG undefined FUN_146b59eda(void)

undefined8 FUN_146b59eda(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_146b59f7c(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 146b59f7c FUN_146b59f7c body=114 status=ok
// SIG undefined FUN_146b59f7c(void)

void FUN_146b59f7c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 146b59fee FUN_146b59fee body=324 status=ok
// SIG undefined FUN_146b59fee(void)

undefined4 * FUN_146b59fee(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146b5a134(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_146b5a21a(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146b59682(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b5a134 FUN_146b5a134 body=230 status=ok
// SIG undefined FUN_146b5a134(void)

int * FUN_146b5a134(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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



// FUNCTION 146b5a21a FUN_146b5a21a body=128 status=ok
// SIG undefined FUN_146b5a21a(void)

undefined8 FUN_146b5a21a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_146b5a29a((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 146b5a29a FUN_146b5a29a body=114 status=ok
// SIG undefined FUN_146b5a29a(void)

void FUN_146b5a29a(longlong *param_1,int param_2)

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



// FUNCTION 146b5a30c FUN_146b5a30c body=73 status=ok
// SIG undefined FUN_146b5a30c(void)

void FUN_146b5a30c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      }
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146b5a355 FUN_146b5a355 body=174 status=ok
// SIG undefined FUN_146b5a355(void)

void FUN_146b5a355(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70 [64];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pcVar1 = (code *)*param_2;
  plVar4 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_2[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_80,uVar3);
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 0x80) = local_80;
  *(undefined4 *)(lVar2 + 0x84) = uStack_7c;
  *(undefined4 *)(lVar2 + 0x88) = uStack_78;
  *(undefined4 *)(lVar2 + 0x8c) = uStack_74;
  FUN_145aeb3d6(lVar2 + 0x90,local_70);
  FUN_140b576f0(lVar2);
  local_28 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(local_70);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b5a404 FUN_146b5a404 body=130 status=ok
// SIG undefined FUN_146b5a404(void)

longlong * FUN_146b5a404(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xf0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f2f520;
  FUN_1405d89e4(plVar3 + 2,param_2);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_1;
}



// FUNCTION 146b5a486 FUN_146b5a486 body=9 status=ok
// SIG undefined FUN_146b5a486(void)

void FUN_146b5a486(longlong param_1)

{
  FUN_146b5a4ae(param_1 + 0x10);
  return;
}



// FUNCTION 146b5a490 FUN_146b5a490 body=29 status=ok
// SIG undefined FUN_146b5a490(void)

undefined8 FUN_146b5a490(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b5a4ae FUN_146b5a4ae body=67 status=ok
// SIG undefined FUN_146b5a4ae(void)

void FUN_146b5a4ae(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    if (*(longlong *)(param_1 + 0xd0) != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(param_1 + 0x90);
  }
  FUN_140788a7e(param_1);
  return;
}



// FUNCTION 146b5a4f2 FUN_146b5a4f2 body=56 status=ok
// SIG undefined FUN_146b5a4f2(void)

void FUN_146b5a4f2(longlong *param_1)

{
  FUN_146b5a355(param_1 + 10,param_1 + 2);
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146b5a520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 146b5a52c FUN_146b5a52c body=38 status=ok
// SIG undefined FUN_146b5a52c(void)

undefined8 FUN_146b5a52c(undefined8 param_1,int param_2)

{
  FUN_146b5a552();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b5a552 FUN_146b5a552 body=138 status=ok
// SIG undefined FUN_146b5a552(void)

void FUN_146b5a552(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_149f2f540;
  plVar4 = (longlong *)param_1[0xb];
  if (plVar4 != (longlong *)0x0) {
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
  if (param_1[2] != 0) {
    plVar4 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *param_1 = IQueuedWork::vftable;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146b5a5d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 146b5a5dc FUN_146b5a5dc body=132 status=ok
// SIG undefined FUN_146b5a5dc(void)

void FUN_146b5a5dc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b5a661 FUN_146b5a661 body=73 status=ok
// SIG undefined FUN_146b5a661(void)

void FUN_146b5a661(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      }
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146b5a6aa FUN_146b5a6aa body=130 status=ok
// SIG undefined FUN_146b5a6aa(void)

longlong * FUN_146b5a6aa(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xa0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f2f590;
  FUN_1405d89e4(plVar3 + 2,param_2);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_1;
}



// FUNCTION 146b5a72c FUN_146b5a72c body=15 status=ok
// SIG undefined FUN_146b5a72c(void)

void FUN_146b5a72c(longlong param_1)

{
  FUN_140788a7e(param_1 + 0x10);
  return;
}



// FUNCTION 146b5a73c FUN_146b5a73c body=29 status=ok
// SIG undefined FUN_146b5a73c(void)

undefined8 FUN_146b5a73c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b5a75a FUN_146b5a75a body=131 status=ok
// SIG undefined FUN_146b5a75a(void)

void FUN_146b5a75a(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = (code *)param_1[2];
  plVar4 = param_1 + 6;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(&local_30,uVar3);
  lVar2 = param_1[10];
  *(undefined4 *)(lVar2 + 0x80) = local_30;
  *(undefined4 *)(lVar2 + 0x84) = uStack_2c;
  *(undefined4 *)(lVar2 + 0x88) = uStack_28;
  *(undefined4 *)(lVar2 + 0x8c) = uStack_24;
  FUN_140b576f0();
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x28))(param_1,1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b5a7e0 FUN_146b5a7e0 body=38 status=ok
// SIG undefined FUN_146b5a7e0(void)

undefined8 FUN_146b5a7e0(undefined8 param_1,int param_2)

{
  FUN_146b5a806();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146b5a806 FUN_146b5a806 body=138 status=ok
// SIG undefined FUN_146b5a806(void)

void FUN_146b5a806(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_149f2f5b0;
  plVar4 = (longlong *)param_1[0xb];
  if (plVar4 != (longlong *)0x0) {
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
  if (param_1[2] != 0) {
    plVar4 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *param_1 = IQueuedWork::vftable;
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146b5a885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 146b5a890 FUN_146b5a890 body=132 status=ok
// SIG undefined FUN_146b5a890(void)

void FUN_146b5a890(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b5a916 FUN_146b5a916 body=48 status=ok
// SIG undefined FUN_146b5a916(void)

void FUN_146b5a916(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 146b5a946 FUN_146b5a946 body=132 status=ok
// SIG undefined FUN_146b5a946(void)

void FUN_146b5a946(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146b5a9cc FUN_146b5a9cc body=62 status=ok
// SIG undefined FUN_146b5a9cc(void)

void FUN_146b5a9cc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146b5aa0a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 146b5aa0a FUN_146b5aa0a body=93 status=ok
// SIG undefined FUN_146b5aa0a(void)

ulonglong FUN_146b5aa0a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 146b5aa67 FUN_146b5aa67 body=50 status=ok
// SIG undefined FUN_146b5aa67(void)

wchar_t * FUN_146b5aa67(uint param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar1 = L"ChunksV4";
  if ((int)param_1 < 0xf) {
    pwVar1 = L"ChunksV3";
  }
  pwVar2 = L"ChunksV2";
  if (5 < param_1) {
    pwVar2 = pwVar1;
  }
  pwVar1 = L"Chunks";
  if (2 < (int)param_1) {
    pwVar1 = pwVar2;
  }
  return pwVar1;
}



// FUNCTION 146b5aa99 FUN_146b5aa99 body=36 status=ok
// SIG undefined FUN_146b5aa99(void)

wchar_t * FUN_146b5aa99(uint param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  
  pwVar2 = L"FilesV3";
  if (param_1 < 0xc) {
    pwVar2 = L"FilesV2";
  }
  pwVar1 = L"Files";
  if (2 < (int)param_1) {
    pwVar1 = pwVar2;
  }
  return pwVar1;
}



// FUNCTION 146b5aabd FUN_146b5aabd body=169 status=ok
// SIG undefined FUN_146b5aabd(void)

undefined8 * FUN_146b5aabd(undefined8 *param_1,char param_2,undefined8 param_3)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xa8);
  memset(_Dst,0,0x90);
  FUN_144869430(_Dst);
  _Dst[0x12] = 0;
  if (param_2 == '\0') {
    _Dst[0x13] = param_3;
    _Dst[0x14] = 0;
    *(byte *)(_Dst + 5) = *(byte *)(_Dst + 5) | 4;
    *(byte *)((longlong)_Dst + 0x29) = *(byte *)((longlong)_Dst + 0x29) & 0xfe;
    *_Dst = &PTR_FUN_149e1e330;
  }
  else {
    *_Dst = &PTR_FUN_149e1e050;
    _Dst[0x13] = param_3;
    _Dst[0x14] = 0x7fffffffffffffff;
    *(byte *)(_Dst + 5) = *(byte *)(_Dst + 5) | 1;
    *(byte *)((longlong)_Dst + 0x29) = *(byte *)((longlong)_Dst + 0x29) & 0xfe;
  }
  *param_1 = _Dst;
  return param_1;
}



// FUNCTION 146b5ab66 FUN_146b5ab66 body=779 status=ok
// SIG undefined FUN_146b5ab66(void)

longlong * FUN_146b5ab66(longlong *param_1,int *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  ulonglong *puVar3;
  uint *puVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [44];
  int local_3c;
  undefined1 local_35;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0) goto LAB_146b5ae18;
  lVar6 = (**(code **)(*param_1 + 0x28))(param_1);
  lVar7 = (**(code **)(*param_1 + 0x30))(param_1);
  if (((*(byte *)(param_1 + 5) & 4) != 0) || (0x24 < lVar7 - lVar6)) {
    local_34 = 0x44bec00c;
    local_35 = (undefined1)param_2[4];
    param_2[1] = *(int *)(&DAT_149f2fc40 + (longlong)*param_2 * 4);
    puVar3 = (ulonglong *)param_1[1];
    piVar5 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar5) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_34);
      }
    }
    else {
      local_34 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar5;
    }
    puVar1 = (uint *)(param_2 + 1);
    puVar4 = *(uint **)param_1[1];
    if ((uint *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,puVar1,4);
      }
      else {
        thunk_FUN_14572512c(param_1,puVar1);
      }
    }
    else {
      *puVar1 = *puVar4;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    piVar5 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar5 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 3,4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      param_2[3] = *piVar5;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    piVar5 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar5 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      param_2[2] = *piVar5;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    (**(code **)(*param_1 + 0x170))(param_1,param_2 + 5,0x14);
    puVar3 = (ulonglong *)param_1[1];
    puVar2 = (undefined1 *)*puVar3 + 1;
    if ((undefined1 *)puVar3[1] < puVar2) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_35,1);
    }
    else {
      local_35 = *(undefined1 *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
    *(undefined1 *)(param_2 + 4) = local_35;
    bVar9 = (*(byte *)((longlong)param_1 + 0x29) & 2) != 0;
    if ((bVar9 || local_34 != 0x44bec00c) || ((uint)param_2[1] < 0x26)) {
      if (!bVar9 && local_34 == 0x44bec00c) {
        if ((*(byte *)(param_1 + 5) & 1) != 0) {
          *param_2 = 9;
        }
        lVar7 = 0x25;
        goto LAB_146b5adf2;
      }
    }
    else {
      local_3c = *param_2;
      puVar3 = (ulonglong *)param_1[1];
      piVar5 = (int *)*puVar3 + 1;
      if ((int *)puVar3[1] < piVar5) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_3c);
        }
      }
      else {
        local_3c = *(int *)*puVar3;
        *puVar3 = (ulonglong)piVar5;
      }
      *param_2 = local_3c;
      lVar7 = 0x29;
      if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
LAB_146b5adf2:
        lVar8 = (**(code **)(*param_1 + 0x28))(param_1);
        if (lVar8 - lVar6 == lVar7) {
          (**(code **)(*param_1 + 0x1a0))(param_1,lVar6 + (ulonglong)*puVar1);
          goto LAB_146b5ae18;
        }
      }
    }
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[0] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
  }
  FUN_14572541c(param_1);
LAB_146b5ae18:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b5ae72 FUN_146b5ae72 body=129 status=ok
// SIG undefined FUN_146b5ae72(void)

undefined4 * FUN_146b5ae72(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1f) = 0xffffffff00000080;
  param_1[0x21] = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  FUN_146b4417e(param_1 + 0x34);
  return param_1;
}



// FUNCTION 146b5aef3 FUN_146b5aef3 body=955 status=ok
// SIG undefined FUN_146b5aef3(void)

longlong * FUN_146b5aef3(longlong *param_1,uint *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  uint *puVar4;
  undefined1 uVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 uVar8;
  char cVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  uint local_40;
  uint local_3c;
  char local_35;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
    lVar7 = (**(code **)(*param_1 + 0x28))(param_1);
    local_34 = 0;
    uVar5 = 1;
    if (((*(byte *)(param_1 + 5) & 4) != 0) && ((ulonglong)*param_2 < 0x13)) {
      uVar5 = (&DAT_149f34108)[*param_2];
    }
    local_48 = CONCAT71(local_48._1_7_,uVar5);
    puVar3 = (ulonglong *)param_1[1];
    puVar4 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar4) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_34);
      }
    }
    else {
      local_34 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar4;
    }
    puVar3 = (ulonglong *)param_1[1];
    pcVar1 = (char *)*puVar3 + 1;
    if ((char *)puVar3[1] < pcVar1) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_48,1);
      cVar9 = (char)local_48;
    }
    else {
      cVar9 = *(char *)*puVar3;
      *puVar3 = (ulonglong)pcVar1;
    }
    bVar6 = *(byte *)((longlong)param_1 + 0x29);
    if ((bVar6 & 2) == 0) {
      local_48 = CONCAT44(local_48._4_4_,*param_2);
      local_35 = (char)param_2[1];
      puVar3 = (ulonglong *)param_1[1];
      puVar2 = (undefined4 *)*puVar3 + 1;
      if ((undefined4 *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_48,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_48);
        }
      }
      else {
        local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)*puVar3);
        *puVar3 = (ulonglong)puVar2;
      }
      puVar3 = (ulonglong *)param_1[1];
      pcVar1 = (char *)*puVar3 + 1;
      if ((char *)puVar3[1] < pcVar1) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_35,1);
      }
      else {
        local_35 = *(char *)*puVar3;
        *puVar3 = (ulonglong)pcVar1;
      }
      puVar4 = *(uint **)param_1[1];
      if ((uint *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
        }
        else {
          thunk_FUN_14572512c(param_1);
        }
      }
      else {
        param_2[2] = *puVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      FUN_14021219d(param_1,param_2 + 4);
      FUN_14021219d(param_1,param_2 + 8);
      FUN_14021219d(param_1,param_2 + 0xc);
      FUN_14021219d(param_1,param_2 + 0x10);
      FUN_146b7ba06(param_1,param_2 + 0x14);
      FUN_14021219d(param_1,param_2 + 0x28);
      FUN_14021219d(param_1,param_2 + 0x2c);
      FUN_14021219d(param_1,param_2 + 0x30);
      *param_2 = (uint)local_48;
      *(bool *)(param_2 + 1) = local_35 == '\x01';
      bVar6 = *(byte *)((longlong)param_1 + 0x29);
    }
    if (((bVar6 & 2) == 0) && (cVar9 != '\0')) {
      FUN_14021219d(param_1,param_2 + 0x34);
    }
    else if (((bVar6 & 2) == 0) && ((*(byte *)(param_1 + 5) & 1) != 0)) {
      FUN_146b3d180(&local_48,param_2);
      if (param_2 + 0x34 == (uint *)&local_48) {
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_2 + 0x34) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_2 + 0x34) = local_48;
        local_48 = 0;
        param_2[0x36] = local_40;
        param_2[0x37] = local_3c;
      }
    }
    if (((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) && ((*(byte *)(param_1 + 5) & 4) != 0)) {
      uVar8 = (**(code **)(*param_1 + 0x28))(param_1);
      local_34 = (int)uVar8 - (int)lVar7;
      (**(code **)(*param_1 + 0x1a0))(param_1,lVar7);
      puVar3 = (ulonglong *)param_1[1];
      puVar4 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar4) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_34);
        }
      }
      else {
        local_34 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar4;
      }
      (**(code **)(*param_1 + 0x1a0))(param_1,uVar8);
    }
    (**(code **)(*param_1 + 0x1a0))(param_1,lVar7 + (ulonglong)local_34);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b5b2b0 FUN_146b5b2b0 body=10 status=ok
// SIG undefined FUN_146b5b2b0(void)

undefined8 * FUN_146b5b2b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 146b5b2ba FUN_146b5b2ba body=930 status=ok
// SIG undefined FUN_146b5b2ba(void)

longlong * FUN_146b5b2ba(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  int local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
    lVar7 = (**(code **)(*param_1 + 0x28))(param_1);
    local_34 = 0;
    local_38 = (int)param_2[1];
    local_39 = 0;
    puVar3 = (ulonglong *)param_1[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_34);
      }
    }
    else {
      local_34 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    puVar3 = (ulonglong *)param_1[1];
    puVar11 = (undefined1 *)*puVar3 + 1;
    if ((undefined1 *)puVar3[1] < puVar11) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_39,1);
    }
    else {
      local_39 = *(undefined1 *)*puVar3;
      *puVar3 = (ulonglong)puVar11;
    }
    puVar3 = (ulonglong *)param_1[1];
    piVar2 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_38,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_38);
      }
    }
    else {
      local_38 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar2;
    }
    FUN_146b5b65e(param_2,local_38 - (int)param_2[1]);
    if (((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) && ((longlong)(int)param_2[1] != 0)) {
      lVar9 = *param_2;
      lVar13 = (longlong)(int)param_2[1] << 6;
      do {
        FUN_1402ac1b3(param_1,lVar9);
        lVar9 = lVar9 + 0x40;
        lVar13 = lVar13 + -0x40;
      } while (lVar13 != 0);
      if ((longlong)(int)param_2[1] != 0) {
        lVar9 = (longlong)(int)param_2[1] << 6;
        puVar10 = (undefined8 *)(*param_2 + 0x10);
        do {
          puVar4 = *(undefined8 **)param_1[1];
          if ((undefined8 *)((longlong *)param_1[1])[1] < puVar4 + 1) {
            if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
              (**(code **)(*param_1 + 0x170))(param_1,puVar10,8);
            }
            else {
              thunk_FUN_146821949(param_1,puVar10);
            }
          }
          else {
            *puVar10 = *puVar4;
            *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
          }
          puVar10 = puVar10 + 8;
          lVar9 = lVar9 + -0x40;
        } while (lVar9 != 0);
        if ((longlong)(int)param_2[1] != 0) {
          lVar13 = (longlong)(int)param_2[1] << 6;
          lVar9 = *param_2 + 0x18;
          do {
            FUN_144aa0c38(param_1,lVar9);
            lVar9 = lVar9 + 0x40;
            lVar13 = lVar13 + -0x40;
          } while (lVar13 != 0);
          if ((longlong)(int)param_2[1] != 0) {
            lVar9 = (longlong)(int)param_2[1] << 6;
            puVar11 = (undefined1 *)(*param_2 + 0x2c);
            do {
              puVar5 = *(undefined1 **)param_1[1];
              if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
                (**(code **)(*param_1 + 0x170))(param_1,puVar11,1);
              }
              else {
                *puVar11 = *puVar5;
                *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
              }
              puVar11 = puVar11 + 0x40;
              lVar9 = lVar9 + -0x40;
            } while (lVar9 != 0);
            if ((longlong)(int)param_2[1] != 0) {
              lVar9 = (longlong)(int)param_2[1] << 6;
              puVar12 = (undefined4 *)(*param_2 + 0x30);
              do {
                puVar6 = *(undefined4 **)param_1[1];
                if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar6 + 1) {
                  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
                    (**(code **)(*param_1 + 0x170))(param_1,puVar12,4);
                  }
                  else {
                    thunk_FUN_14572512c(param_1,puVar12);
                  }
                }
                else {
                  *puVar12 = *puVar6;
                  *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
                }
                puVar12 = puVar12 + 0x10;
                lVar9 = lVar9 + -0x40;
              } while (lVar9 != 0);
              if ((longlong)(int)param_2[1] != 0) {
                lVar13 = (longlong)(int)param_2[1] << 6;
                lVar9 = *param_2 + 0x38;
                do {
                  FUN_1408383eb(param_1,lVar9);
                  lVar9 = lVar9 + 0x40;
                  lVar13 = lVar13 + -0x40;
                } while (lVar13 != 0);
              }
            }
          }
        }
      }
    }
    if (((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) && ((*(byte *)(param_1 + 5) & 4) != 0)) {
      uVar8 = (**(code **)(*param_1 + 0x28))(param_1);
      local_34 = (int)uVar8 - (int)lVar7;
      (**(code **)(*param_1 + 0x1a0))(param_1,lVar7);
      puVar3 = (ulonglong *)param_1[1];
      puVar1 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_34);
        }
      }
      else {
        local_34 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar1;
      }
      (**(code **)(*param_1 + 0x1a0))(param_1,uVar8);
    }
    (**(code **)(*param_1 + 0x1a0))(param_1,lVar7 + (ulonglong)local_34);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b5b65e FUN_146b5b65e body=65 status=ok
// SIG undefined FUN_146b5b65e(void)

void FUN_146b5b65e(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_146b55398(param_1,iVar1);
  }
  FUN_146b7bce8((longlong)iVar1 * 0x40 + *param_1,param_2);
  return;
}



// FUNCTION 146b5b6a0 FUN_146b5b6a0 body=36 status=ok
// SIG undefined FUN_146b5b6a0(void)

void FUN_146b5b6a0(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}



// FUNCTION 146b5b6c4 FUN_146b5b6c4 body=10 status=ok
// SIG undefined FUN_146b5b6c4(void)

undefined8 * FUN_146b5b6c4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 146b5b6ce FUN_146b5b6ce body=2034 status=ok
// SIG undefined FUN_146b5b6ce(void)

void FUN_146b5b6ce(longlong *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  longlong *plVar20;
  int iVar21;
  ulonglong uVar22;
  undefined2 *puVar23;
  longlong lVar24;
  int iVar25;
  uint uVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_3e8 [40];
  longlong *local_3c0;
  int local_3b4;
  longlong *local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  undefined4 local_398 [188];
  longlong local_a8 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  iVar25 = (int)param_1[1];
  if (1 < (longlong)iVar25) {
    lVar4 = *param_1;
    local_3b0 = param_1;
    memset(local_398,0,0x2f0);
    local_3a0 = (longlong)iVar25 * 0x60 + lVar4 + -0x60;
    local_3a8 = lVar4;
    fVar28 = logf((float)iVar25);
    local_398[0] = (int)(longlong)(fVar28 + fVar28);
    plVar20 = &local_3a8;
    do {
      plVar8 = (longlong *)*plVar20;
      plVar16 = (longlong *)plVar20[1];
      iVar3 = (int)((ulonglong)((longlong)plVar16 - (longlong)plVar8) >> 5) * -0x55555555;
      uVar22 = (ulonglong)(iVar3 + 1);
      iVar25 = (int)plVar20[2];
      local_3c0 = plVar20;
      if ((int)plVar20[2] != 0) {
LAB_146b5b798:
        iVar3 = iVar25;
        plVar20 = local_3c0;
        if (8 < (int)(uint)uVar22) {
          plVar9 = plVar8 + (ulonglong)((uint)uVar22 >> 1) * 0xc;
          plVar7 = local_a8;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *plVar7 = *plVar9;
            plVar9 = plVar9 + 1;
            plVar7 = plVar7 + 1;
          }
          plVar9 = plVar8;
          plVar7 = plVar8 + (ulonglong)((uint)uVar22 >> 1) * 0xc;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *plVar7 = *plVar9;
            plVar9 = plVar9 + 1;
            plVar7 = plVar7 + 1;
          }
          plVar9 = local_a8;
          plVar7 = plVar8;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *plVar7 = *plVar9;
            plVar9 = plVar9 + 1;
            plVar7 = plVar7 + 1;
          }
          plVar9 = plVar16 + 0xc;
          plVar7 = plVar8;
LAB_146b5b7e6:
          do {
            plVar17 = plVar7 + 0xc;
            if (plVar16 < plVar17) break;
            puVar5 = &DAT_149dfb77a;
            if ((int)plVar7[0xd] != 0) {
              puVar5 = (undefined2 *)plVar7[0xc];
            }
            puVar23 = &DAT_149dfb77a;
            if ((int)plVar8[1] != 0) {
              puVar23 = (undefined2 *)*plVar8;
            }
            lVar4 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar23 + lVar4);
              uVar13 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)puVar5 + lVar4);
              uVar26 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar26 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_146b5b823;
                }
                iVar25 = uVar13 - uVar26;
                goto LAB_146b5b84e;
              }
              if (uVar1 == 0) break;
LAB_146b5b823:
              lVar4 = lVar4 + 2;
            }
            iVar25 = 0;
LAB_146b5b84e:
            plVar7 = plVar17;
          } while (-1 < iVar25);
LAB_146b5b852:
          plVar7 = plVar9;
          plVar9 = plVar7 + -0xc;
          if (plVar8 < plVar9) {
            puVar5 = &DAT_149dfb77a;
            if ((int)plVar8[1] != 0) {
              puVar5 = (undefined2 *)*plVar8;
            }
            puVar23 = &DAT_149dfb77a;
            if ((int)plVar7[-0xb] != 0) {
              puVar23 = (undefined2 *)plVar7[-0xc];
            }
            lVar4 = 0;
            do {
              uVar1 = *(ushort *)((longlong)puVar23 + lVar4);
              uVar2 = *(ushort *)((longlong)puVar5 + lVar4);
              if (uVar1 == uVar2) {
                if (uVar1 == 0) goto LAB_146b5b8bc;
              }
              else {
                if (0x7f < (uVar2 | uVar1)) {
                  iVar25 = (uint)uVar1 - (uint)uVar2;
                  goto LAB_146b5b8be;
                }
                if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) {
                  iVar25 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
                  goto LAB_146b5b8be;
                }
              }
              lVar4 = lVar4 + 2;
            } while( true );
          }
          goto LAB_146b5b8c2;
        }
        while (plVar9 = plVar8, plVar7 = plVar8, plVar8 < plVar16) {
joined_r0x000146b5bd6a:
          plVar17 = plVar7 + 0xc;
          if (plVar17 <= plVar16) {
            puVar5 = &DAT_149dfb77a;
            if ((int)plVar7[0xd] != 0) {
              puVar5 = (undefined2 *)plVar7[0xc];
            }
            puVar23 = &DAT_149dfb77a;
            if ((int)plVar9[1] != 0) {
              puVar23 = (undefined2 *)*plVar9;
            }
            lVar4 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar23 + lVar4);
              uVar13 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)puVar5 + lVar4);
              uVar26 = (uint)uVar2;
              plVar7 = plVar17;
              if (uVar1 != uVar2) break;
              if (uVar1 == 0) goto joined_r0x000146b5bd6a;
LAB_146b5bda9:
              lVar4 = lVar4 + 2;
            }
            if ((uVar2 | uVar1) < 0x80) {
              uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar26 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_146b5bda9;
            }
            if ((int)(uVar13 - uVar26) < 0) {
              plVar9 = plVar17;
            }
            goto joined_r0x000146b5bd6a;
          }
          plVar7 = plVar16 + -0xc;
          plVar17 = plVar9;
          plVar15 = local_a8;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *plVar15 = *plVar17;
            plVar17 = plVar17 + 1;
            plVar15 = plVar15 + 1;
          }
          plVar17 = plVar16;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *plVar9 = *plVar17;
            plVar17 = plVar17 + 1;
            plVar9 = plVar9 + 1;
          }
          plVar9 = local_a8;
          plVar17 = plVar16;
          for (lVar4 = 0xc; plVar16 = plVar7, lVar4 != 0; lVar4 = lVar4 + -1) {
            *plVar17 = *plVar9;
            plVar9 = plVar9 + 1;
            plVar17 = plVar17 + 1;
          }
        }
        goto LAB_146b5be1f;
      }
LAB_146b5b9c3:
      iVar25 = (int)uVar22;
      plVar20 = local_3c0;
      if (iVar25 != 0) {
        iVar3 = (iVar3 - (iVar3 + -1 >> 0x1f)) + -1 >> 1;
        do {
          iVar19 = iVar3 * 2 + 1;
          iVar21 = iVar3;
          if (iVar19 < iVar25) {
LAB_146b5b9fc:
            iVar11 = iVar21 * 2 + 2;
            iVar12 = iVar19;
            if (iVar11 < iVar25) {
              puVar5 = &DAT_149dfb77a;
              if ((int)plVar8[(longlong)iVar19 * 0xc + 1] != 0) {
                puVar5 = (undefined2 *)plVar8[(longlong)iVar19 * 0xc];
              }
              puVar23 = &DAT_149dfb77a;
              if ((int)plVar8[(longlong)iVar11 * 0xc + 1] != 0) {
                puVar23 = (undefined2 *)plVar8[(longlong)iVar11 * 0xc];
              }
              lVar4 = 0;
              while( true ) {
                uVar1 = *(ushort *)((longlong)puVar23 + lVar4);
                uVar13 = (uint)uVar1;
                uVar2 = *(ushort *)((longlong)puVar5 + lVar4);
                uVar26 = (uint)uVar2;
                iVar12 = iVar11;
                if (uVar1 != uVar2) break;
                if (uVar1 == 0) goto LAB_146b5ba80;
LAB_146b5ba50:
                lVar4 = lVar4 + 2;
              }
              if ((uVar2 | uVar1) < 0x80) {
                uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar26 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_146b5ba50;
              }
              if ((int)(uVar13 - uVar26) < 0) {
                iVar12 = iVar19;
              }
            }
LAB_146b5ba80:
            lVar4 = (longlong)iVar12;
            puVar5 = &DAT_149dfb77a;
            if ((int)plVar8[lVar4 * 0xc + 1] != 0) {
              puVar5 = (undefined2 *)plVar8[lVar4 * 0xc];
            }
            lVar6 = (longlong)iVar21;
            puVar23 = &DAT_149dfb77a;
            if ((int)plVar8[lVar6 * 0xc + 1] != 0) {
              puVar23 = (undefined2 *)plVar8[lVar6 * 0xc];
            }
            lVar10 = 0;
            do {
              uVar1 = *(ushort *)((longlong)puVar23 + lVar10);
              uVar13 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)puVar5 + lVar10);
              uVar26 = (uint)uVar2;
              if (uVar1 == uVar2) {
                if (uVar1 == 0) break;
              }
              else {
                if (0x7f < (uVar2 | uVar1)) goto LAB_146b5baf3;
                uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar26 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_146b5baf3;
              }
              lVar10 = lVar10 + 2;
            } while( true );
          }
LAB_146b5bb3f:
          bVar27 = iVar3 != 0;
          iVar3 = iVar3 + -1;
        } while (bVar27);
        if (1 < iVar25) {
          plVar16 = plVar8;
          plVar9 = local_a8;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *plVar9 = *plVar16;
            plVar16 = plVar16 + 1;
            plVar9 = plVar9 + 1;
          }
          plVar16 = plVar8 + (uVar22 - 1) * 0xc;
          plVar9 = plVar8;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *plVar9 = *plVar16;
            plVar16 = plVar16 + 1;
            plVar9 = plVar9 + 1;
          }
          plVar16 = local_a8;
          plVar9 = plVar8 + (uVar22 - 1) * 0xc;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *plVar9 = *plVar16;
            plVar16 = plVar16 + 1;
            plVar9 = plVar9 + 1;
          }
          uVar22 = uVar22 - 1;
          if (iVar25 != 2) {
LAB_146b5bbb4:
            iVar25 = 0;
            iVar19 = 1;
            iVar3 = 0;
LAB_146b5bbbf:
            iVar25 = iVar25 + 2;
            lVar4 = (longlong)iVar25;
            iVar21 = iVar19;
            if (lVar4 < (longlong)uVar22) {
              puVar5 = &DAT_149dfb77a;
              if ((int)plVar8[(longlong)iVar19 * 0xc + 1] != 0) {
                puVar5 = (undefined2 *)plVar8[(longlong)iVar19 * 0xc];
              }
              puVar23 = &DAT_149dfb77a;
              if ((int)plVar8[lVar4 * 0xc + 1] != 0) {
                puVar23 = (undefined2 *)plVar8[lVar4 * 0xc];
              }
              lVar4 = 0;
              while( true ) {
                uVar1 = *(ushort *)((longlong)puVar23 + lVar4);
                uVar13 = (uint)uVar1;
                uVar2 = *(ushort *)((longlong)puVar5 + lVar4);
                uVar26 = (uint)uVar2;
                iVar21 = iVar25;
                if (uVar1 != uVar2) break;
                if (uVar1 == 0) goto LAB_146b5bc41;
LAB_146b5bc13:
                lVar4 = lVar4 + 2;
              }
              if ((uVar2 | uVar1) < 0x80) {
                uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar26 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_146b5bc13;
              }
              if ((int)(uVar13 - uVar26) < 0) {
                iVar21 = iVar19;
              }
            }
LAB_146b5bc41:
            lVar4 = (longlong)iVar21;
            puVar5 = &DAT_149dfb77a;
            if ((int)plVar8[lVar4 * 0xc + 1] != 0) {
              puVar5 = (undefined2 *)plVar8[lVar4 * 0xc];
            }
            lVar6 = (longlong)iVar3;
            puVar23 = &DAT_149dfb77a;
            if ((int)plVar8[lVar6 * 0xc + 1] != 0) {
              puVar23 = (undefined2 *)plVar8[lVar6 * 0xc];
            }
            lVar10 = 0;
            do {
              uVar1 = *(ushort *)((longlong)puVar23 + lVar10);
              uVar13 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)puVar5 + lVar10);
              uVar26 = (uint)uVar2;
              if (uVar1 == uVar2) {
                if (uVar1 == 0) goto LAB_146b5bcfe;
              }
              else {
                if (0x7f < (uVar2 | uVar1)) goto LAB_146b5bcb2;
                uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar26 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_146b5bcb2;
              }
              lVar10 = lVar10 + 2;
            } while( true );
          }
        }
      }
LAB_146b5be1f:
      plVar20 = plVar20 + -3;
    } while (&local_3a8 <= plVar20);
    iVar25 = (int)local_3b0[1];
    param_1 = local_3b0;
  }
  if (iVar25 != 0) {
    lVar4 = *param_1;
    lVar6 = (longlong)iVar25 * 0x60 + lVar4;
    do {
      if ((longlong)*(int *)(lVar4 + 0x50) == 0) {
        lVar10 = 0;
      }
      else {
        lVar24 = 0;
        lVar10 = 0;
        do {
          lVar10 = lVar10 + (ulonglong)*(uint *)(*(longlong *)(lVar4 + 0x48) + 0x14 + lVar24);
          lVar24 = lVar24 + 0x18;
        } while ((longlong)*(int *)(lVar4 + 0x50) * 0x18 != lVar24);
      }
      *(longlong *)(lVar4 + 0x58) = lVar10;
      lVar4 = lVar4 + 0x60;
    } while (lVar4 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146b5b8bc:
  iVar25 = 0;
LAB_146b5b8be:
  if (iVar25 < 0) goto LAB_146b5b8c2;
  goto LAB_146b5b852;
LAB_146b5b8c2:
  lVar4 = 0xc;
  plVar15 = plVar8;
  plVar14 = plVar17;
  plVar18 = local_a8;
  if (plVar17 <= plVar9) {
    for (; lVar4 != 0; lVar4 = lVar4 + -1) {
      *plVar18 = *plVar14;
      plVar14 = plVar14 + 1;
      plVar18 = plVar18 + 1;
    }
    plVar7 = plVar9;
    plVar15 = plVar17;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *plVar15 = *plVar7;
      plVar7 = plVar7 + 1;
      plVar15 = plVar15 + 1;
    }
    plVar15 = local_a8;
    plVar14 = plVar9;
    for (lVar4 = 0xc; plVar7 = plVar17, lVar4 != 0; lVar4 = lVar4 + -1) {
      *plVar14 = *plVar15;
      plVar15 = plVar15 + 1;
      plVar14 = plVar14 + 1;
    }
    goto LAB_146b5b7e6;
  }
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar18 = *plVar15;
    plVar15 = plVar15 + 1;
    plVar18 = plVar18 + 1;
  }
  plVar15 = plVar9;
  plVar14 = plVar8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar14 = *plVar15;
    plVar15 = plVar15 + 1;
    plVar14 = plVar14 + 1;
  }
  plVar15 = local_a8;
  plVar14 = plVar9;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar14 = *plVar15;
    plVar15 = plVar15 + 1;
    plVar14 = plVar14 + 1;
  }
  iVar25 = iVar3 + -1;
  plVar7 = plVar7 + -0x18;
  local_3b4 = iVar3;
  if ((longlong)plVar7 - (longlong)plVar8 < (longlong)plVar16 - (longlong)plVar17) {
    if (plVar17 < plVar16) {
      *local_3c0 = (longlong)plVar17;
      local_3c0[1] = (longlong)plVar16;
      *(int *)(local_3c0 + 2) = iVar25;
      local_3c0 = local_3c0 + 3;
    }
    plVar20 = local_3c0;
    if (plVar9 <= plVar8 + 0xc) goto LAB_146b5be1f;
  }
  else {
    if (plVar8 + 0xc < plVar9) {
      *local_3c0 = (longlong)plVar8;
      local_3c0[1] = (longlong)plVar7;
      *(int *)(local_3c0 + 2) = iVar25;
      plVar20 = local_3c0 + 3;
    }
    plVar7 = plVar16;
    plVar8 = plVar17;
    if (plVar16 <= plVar17) goto LAB_146b5be1f;
  }
  local_3c0 = plVar20;
  iVar3 = (int)((ulonglong)((longlong)plVar7 - (longlong)plVar8) >> 5) * -0x55555555;
  uVar22 = (ulonglong)(iVar3 + 1);
  plVar16 = plVar7;
  if (iVar25 == 0) goto LAB_146b5b9c3;
  goto LAB_146b5b798;
LAB_146b5baf3:
  if (-1 < (int)(uVar13 - uVar26)) goto LAB_146b5bb3f;
  plVar16 = plVar8 + lVar6 * 0xc;
  plVar9 = local_a8;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *plVar9 = *plVar16;
    plVar16 = plVar16 + 1;
    plVar9 = plVar9 + 1;
  }
  plVar16 = plVar8 + lVar4 * 0xc;
  plVar9 = plVar8 + lVar6 * 0xc;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *plVar9 = *plVar16;
    plVar16 = plVar16 + 1;
    plVar9 = plVar9 + 1;
  }
  plVar16 = local_a8;
  plVar9 = plVar8 + lVar4 * 0xc;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *plVar9 = *plVar16;
    plVar16 = plVar16 + 1;
    plVar9 = plVar9 + 1;
  }
  iVar19 = iVar12 * 2 + 1;
  iVar21 = iVar12;
  if (iVar25 <= iVar19) goto LAB_146b5bb3f;
  goto LAB_146b5b9fc;
LAB_146b5bcb2:
  if (-1 < (int)(uVar13 - uVar26)) goto LAB_146b5bcfe;
  plVar16 = plVar8 + lVar6 * 0xc;
  plVar9 = local_a8;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *plVar9 = *plVar16;
    plVar16 = plVar16 + 1;
    plVar9 = plVar9 + 1;
  }
  plVar16 = plVar8 + lVar4 * 0xc;
  plVar9 = plVar8 + lVar6 * 0xc;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *plVar9 = *plVar16;
    plVar16 = plVar16 + 1;
    plVar9 = plVar9 + 1;
  }
  plVar16 = local_a8;
  plVar9 = plVar8 + lVar4 * 0xc;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *plVar9 = *plVar16;
    plVar16 = plVar16 + 1;
    plVar9 = plVar9 + 1;
  }
  iVar25 = iVar21 * 2;
  iVar19 = iVar21 * 2 + 1;
  iVar3 = iVar21;
  if ((longlong)uVar22 <= (longlong)iVar19) goto LAB_146b5bcfe;
  goto LAB_146b5bbbf;
LAB_146b5bcfe:
  plVar16 = plVar8;
  plVar9 = local_a8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar9 = *plVar16;
    plVar16 = plVar16 + 1;
    plVar9 = plVar9 + 1;
  }
  plVar16 = plVar8 + (uVar22 - 1) * 0xc;
  plVar9 = plVar8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar9 = *plVar16;
    plVar16 = plVar16 + 1;
    plVar9 = plVar9 + 1;
  }
  plVar16 = local_a8;
  plVar9 = plVar8 + (uVar22 - 1) * 0xc;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *plVar9 = *plVar16;
    plVar16 = plVar16 + 1;
    plVar9 = plVar9 + 1;
  }
  bVar27 = uVar22 < 3;
  uVar22 = uVar22 - 1;
  if (bVar27) goto LAB_146b5be1f;
  goto LAB_146b5bbb4;
}



// FUNCTION 146b5bec1 FUN_146b5bec1 body=877 status=ok
// SIG undefined FUN_146b5bec1(void)

longlong * FUN_146b5bec1(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  ulonglong *puVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  int local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
    lVar6 = (**(code **)(*param_1 + 0x28))(param_1);
    local_44 = 0;
    local_48 = (int)param_2[1];
    local_49 = 0;
    puVar4 = (ulonglong *)param_1[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_44);
      }
    }
    else {
      local_44 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined1 *)*puVar4 + 1;
    if ((undefined1 *)puVar4[1] < puVar2) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_49,1);
    }
    else {
      local_49 = *(undefined1 *)*puVar4;
      *puVar4 = (ulonglong)puVar2;
    }
    puVar4 = (ulonglong *)param_1[1];
    piVar3 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar3) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_48,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_48);
      }
    }
    else {
      local_48 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar3;
    }
    FUN_146b5c230(param_2,local_48 - (int)param_2[1]);
    if (((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) && ((longlong)(int)param_2[1] != 0)) {
      lVar10 = *param_2;
      lVar11 = (longlong)(int)param_2[1] * 0x60;
      do {
        FUN_14021219d(param_1,lVar10);
        lVar10 = lVar10 + 0x60;
        lVar11 = lVar11 + -0x60;
      } while (lVar11 != 0);
      if ((longlong)(int)param_2[1] != 0) {
        lVar10 = (longlong)(int)param_2[1] * 0x60;
        lVar11 = *param_2 + 0x10;
        do {
          FUN_14021219d(param_1,lVar11);
          lVar11 = lVar11 + 0x60;
          lVar10 = lVar10 + -0x60;
        } while (lVar10 != 0);
        if ((longlong)(int)param_2[1] != 0) {
          lVar10 = (longlong)(int)param_2[1] * 0x60;
          lVar11 = *param_2 + 0x20;
          do {
            FUN_144aa0c38(param_1,lVar11);
            lVar11 = lVar11 + 0x60;
            lVar10 = lVar10 + -0x60;
          } while (lVar10 != 0);
          lVar10 = param_2[1];
          if ((longlong)(int)lVar10 != 0) {
            lVar11 = *param_2;
            lVar9 = 0;
            do {
              local_49 = *(undefined1 *)(lVar11 + 0x34 + lVar9);
              puVar4 = (ulonglong *)param_1[1];
              puVar2 = (undefined1 *)*puVar4 + 1;
              if ((undefined1 *)puVar4[1] < puVar2) {
                (**(code **)(*param_1 + 0x170))(param_1,&local_49,1);
                uVar8 = local_49;
              }
              else {
                uVar8 = *(undefined1 *)*puVar4;
                *puVar4 = (ulonglong)puVar2;
              }
              *(undefined1 *)(lVar11 + 0x34 + lVar9) = uVar8;
              lVar9 = lVar9 + 0x60;
            } while ((longlong)(int)lVar10 * 0x60 != lVar9);
            if ((longlong)(int)param_2[1] != 0) {
              lVar10 = (longlong)(int)param_2[1] * 0x60;
              lVar11 = *param_2 + 0x38;
              do {
                FUN_1405d0c38(param_1,lVar11);
                lVar11 = lVar11 + 0x60;
                lVar10 = lVar10 + -0x60;
              } while (lVar10 != 0);
              if ((longlong)(int)param_2[1] != 0) {
                lVar10 = (longlong)(int)param_2[1] * 0x60;
                lVar11 = *param_2 + 0x48;
                do {
                  FUN_146b7bd3c(param_1,lVar11);
                  lVar11 = lVar11 + 0x60;
                  lVar10 = lVar10 + -0x60;
                } while (lVar10 != 0);
              }
            }
          }
        }
      }
    }
    bVar5 = *(byte *)((longlong)param_1 + 0x29);
    if (((bVar5 & 2) == 0) && ((*(byte *)(param_1 + 5) & 4) != 0)) {
      uVar7 = (**(code **)(*param_1 + 0x28))(param_1);
      local_44 = (int)uVar7 - (int)lVar6;
      (**(code **)(*param_1 + 0x1a0))(param_1,lVar6);
      puVar4 = (ulonglong *)param_1[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_44);
        }
      }
      else {
        local_44 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      (**(code **)(*param_1 + 0x1a0))(param_1,uVar7);
      bVar5 = *(byte *)((longlong)param_1 + 0x29);
    }
    if (((bVar5 & 2) == 0) && ((*(byte *)(param_1 + 5) & 1) != 0)) {
      FUN_146b5b6ce(param_2);
    }
    (**(code **)(*param_1 + 0x1a0))(param_1,lVar6 + (ulonglong)local_44);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b5c230 FUN_146b5c230 body=66 status=ok
// SIG undefined FUN_146b5c230(void)

void FUN_146b5c230(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_146b55270(param_1,iVar1);
  }
  FUN_146b7bd0e((longlong)iVar1 * 0x60 + *param_1,param_2);
  return;
}



// FUNCTION 146b5c272 FUN_146b5c272 body=43 status=ok
// SIG undefined FUN_146b5c272(void)

void FUN_146b5c272(undefined8 *param_1)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  return;
}



// FUNCTION 146b5c29d FUN_146b5c29d body=1198 status=ok
// SIG undefined FUN_146b5c29d(void)

longlong * FUN_146b5c29d(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  ulonglong *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  int local_a8;
  uint local_a4;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  longlong *local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    iVar8 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    if (iVar8 != 0) {
      FUN_1468b337c(&local_78);
    }
    plVar12 = param_2 + 2;
    local_68 = (longlong *)0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar8 = 0;
    local_60 = plVar12;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_68);
      iVar8 = (int)param_2[5];
    }
    local_88 = local_58;
    uVar7 = local_88;
    local_80 = local_50;
    local_7c = local_4c;
    local_98 = local_68;
    local_90 = local_60;
    local_88._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar5 = local_88._4_4_;
    local_a0 = param_2;
    if ((local_88._4_4_ != iVar8) || (local_88 = uVar7, local_60 != plVar12)) {
      do {
        local_88 = uVar7;
        uVar9 = uStack_70;
        plVar10 = (longlong *)((longlong)iVar5 * 0x28 + *local_a0);
        lVar11 = (longlong)(int)uStack_70;
        uVar6 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
        if (uStack_70._4_4_ < uVar6) {
          FUN_146272134(&local_78,uVar9 & 0xffffffff);
        }
        local_78[lVar11 * 4] = 0;
        local_78[lVar11 * 4] = *plVar10;
        *plVar10 = 0;
        *(int *)(local_78 + lVar11 * 4 + 1) = (int)plVar10[1];
        *(undefined4 *)((longlong)local_78 + lVar11 * 0x20 + 0xc) =
             *(undefined4 *)((longlong)plVar10 + 0xc);
        plVar10[1] = 0;
        local_78[lVar11 * 4 + 2] = 0;
        local_78[lVar11 * 4 + 2] = plVar10[2];
        plVar10[2] = 0;
        *(int *)(local_78 + lVar11 * 4 + 3) = (int)plVar10[3];
        *(undefined4 *)((longlong)local_78 + lVar11 * 0x20 + 0x1c) =
             *(undefined4 *)((longlong)plVar10 + 0x1c);
        plVar10[3] = 0;
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar5 = local_88._4_4_;
        uVar7 = local_88;
      } while (local_a0 != param_2 || (local_90 != plVar12 || local_88._4_4_ != iVar8));
    }
    FUN_14587c83e(param_2,0);
    lVar11 = (**(code **)(*param_1 + 0x28))(param_1);
    local_a4 = 0;
    local_a8 = (int)uStack_70;
    local_a0 = (longlong *)((ulonglong)local_a0 & 0xffffffffffffff00);
    puVar4 = (ulonglong *)param_1[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_a4,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_a4);
      }
    }
    else {
      local_a4 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined1 *)*puVar4 + 1;
    if ((undefined1 *)puVar4[1] < puVar2) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_a0,1);
    }
    else {
      local_a0 = (longlong *)CONCAT71(local_a0._1_7_,*(undefined1 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    puVar4 = (ulonglong *)param_1[1];
    piVar3 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar3) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_a8,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_a8);
      }
    }
    else {
      local_a8 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar3;
    }
    FUN_146b5c74e(&local_78,local_a8 - (int)uStack_70);
    if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
      if ((longlong)(int)uStack_70 != 0) {
        lVar13 = (longlong)(int)uStack_70 << 5;
        plVar12 = local_78;
        do {
          FUN_14021219d(param_1,plVar12);
          plVar12 = plVar12 + 4;
          lVar13 = lVar13 + -0x20;
        } while (lVar13 != 0);
        if ((longlong)(int)uStack_70 != 0) {
          lVar13 = (longlong)(int)uStack_70 << 5;
          plVar12 = local_78 + 2;
          do {
            FUN_14021219d(param_1,plVar12);
            plVar12 = plVar12 + 4;
            lVar13 = lVar13 + -0x20;
          } while (lVar13 != 0);
        }
      }
    }
    if (((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) && ((*(byte *)(param_1 + 5) & 4) != 0)) {
      uVar7 = (**(code **)(*param_1 + 0x28))(param_1);
      local_a4 = (int)uVar7 - (int)lVar11;
      (**(code **)(*param_1 + 0x1a0))(param_1,lVar11);
      puVar4 = (ulonglong *)param_1[1];
      puVar1 = (uint *)*puVar4 + 1;
      if ((uint *)puVar4[1] < puVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_a4,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_a4);
        }
      }
      else {
        local_a4 = *(uint *)*puVar4;
        *puVar4 = (ulonglong)puVar1;
      }
      (**(code **)(*param_1 + 0x1a0))(param_1,uVar7);
    }
    FUN_14587c83e(param_2,uStack_70 & 0xffffffff);
    if ((longlong)(int)uStack_70 == 0) {
      uVar9 = 0;
    }
    else {
      plVar10 = local_78 + (longlong)(int)uStack_70 * 4;
      plVar12 = local_78;
      do {
        local_98 = plVar12 + 2;
        local_a0 = plVar12;
        FUN_1411f1c38(param_2,&local_68,&local_a0,0);
        plVar12 = plVar12 + 4;
      } while (plVar12 != plVar10);
      uVar9 = uStack_70 & 0xffffffff;
    }
    FUN_141535be2(local_78,uVar9);
    uVar9 = uStack_70 >> 0x20;
    uStack_70 = uStack_70 & 0xffffffff00000000;
    if ((int)uVar9 != 0) {
      FUN_1468b337c(&local_78,0);
    }
    (**(code **)(*param_1 + 0x1a0))(param_1,lVar11 + (ulonglong)local_a4);
    FUN_141535be2(local_78,uStack_70 & 0xffffffff);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b5c74e FUN_146b5c74e body=65 status=ok
// SIG undefined FUN_146b5c74e(void)

void FUN_146b5c74e(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_146272134(param_1,iVar1);
  }
  FUN_146b7beaf((longlong)iVar1 * 0x20 + *param_1,param_2);
  return;
}



// FUNCTION 146b5c790 FUN_146b5c790 body=21 status=ok
// SIG undefined FUN_146b5c790(void)

void FUN_146b5c790(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1409ffe1d();
  FUN_146b5d59f(uVar1);
  return;
}



// FUNCTION 146b5c7a6 FUN_146b5c7a6 body=1418 status=ok
// SIG undefined FUN_146b5c7a6(void)

undefined8 FUN_146b5c7a6(longlong *param_1,longlong param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  byte bVar12;
  longlong lVar13;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 local_d0;
  ulonglong local_c8;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [16];
  int local_98;
  int local_88;
  uint local_84;
  uint auStack_80 [2];
  byte local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
    if ((param_3 < 0xe) && ((*(byte *)(param_1 + 5) & 4) != 0)) {
      cVar5 = FUN_146b5cd32(param_1,param_2);
    }
    else {
      lVar9 = (**(code **)(*param_1 + 0x28))(param_1);
      local_74 = 0;
      uStack_6c = 0;
      local_64 = 0;
      local_84 = 0;
      auStack_80[0] = 0;
      auStack_80[1] = 0;
      local_78 = 0;
      bVar12 = 1;
      local_88 = param_3;
      if ((*(byte *)(param_1 + 5) & 1) == 0) {
LAB_146b5c836:
        lVar11 = 0x101;
        FUN_1401a700c(local_a8,0x101);
        uVar4 = local_a8._0_4_;
        local_b8 = 0;
        uStack_b0 = 0;
        if (((bVar12 & 1) != 0) && ((*(byte *)(param_1 + 5) & 1) != 0)) {
          uStack_b0 = (ulonglong)auStack_80[0];
          if (auStack_80[0] == 0) {
            uVar6 = 0;
          }
          else {
            FUN_1447403be(&local_b8,0);
            uVar6 = auStack_80[0];
          }
          lVar11 = local_b8;
          (**(code **)(*param_1 + 0x170))(param_1,local_b8,uVar6);
          bVar12 = *(byte *)((longlong)param_1 + 0x29) >> 1 ^ 1;
        }
        lVar3 = local_b8;
        if ((((bVar12 & 1) != 0) && ((*(byte *)(param_1 + 5) & 1) != 0)) && ((local_78 & 1) != 0)) {
          local_b8 = 0;
          lVar13 = (longlong)(int)(uint)uStack_b0;
          uStack_b0 = (ulonglong)auStack_80[1];
          if (auStack_80[1] == 0) {
            iVar7 = 0;
          }
          else {
            FUN_1447403be(&local_b8,0);
            iVar7 = (uint)uStack_b0;
          }
          local_c8 = 0;
          local_d0 = 0x10;
          lVar11 = local_b8;
          local_d8 = lVar13;
          bVar12 = FUN_140aa9920(uVar4,local_b8,(longlong)iVar7,lVar3);
          if (lVar3 != 0) {
            FUN_1400020a8(lVar3);
          }
        }
        if (((bVar12 & 1) != 0) && ((*(byte *)(param_1 + 5) & 1) != 0)) {
          local_a8 = ZEXT816(0);
          local_98 = 0;
          lVar11 = (longlong)(int)(uint)uStack_b0;
          FUN_140f0be04(local_b8,lVar11,local_a8);
          auVar1._8_8_ = uStack_6c;
          auVar1._0_8_ = local_74;
          bVar12 = auVar1 == local_a8 && local_64 == local_98;
        }
        if ((bVar12 & 1) != 0) {
          FUN_146b5aabd(local_a8,CONCAT71((int7)((ulonglong)lVar11 >> 8),(char)param_1[5]) &
                                 0xffffffffffffff01,&local_b8);
          uVar10 = local_a8._0_8_;
          FUN_146b5aef3(local_a8._0_8_,param_2 + 8);
          FUN_146b5b2ba(uVar10,param_2 + 0xe8);
          FUN_146b5bec1(uVar10,param_2 + 0xf8);
          FUN_146b5c29d(uVar10,param_2 + 0x108);
          bVar12 = *(byte *)(uVar10 + 0x29);
          if ((undefined8 *)uVar10 != (undefined8 *)0x0) {
            (*(code *)**(undefined8 **)uVar10)(uVar10,1);
          }
          bVar12 = bVar12 >> 1 ^ 1;
        }
        if (((bVar12 & 1) != 0) && ((*(byte *)(param_1 + 5) & 4) != 0)) {
          local_a8 = ZEXT816(0);
          local_98 = 0;
          FUN_140f0be04(local_b8,(longlong)(int)(uint)uStack_b0,local_a8);
          local_64 = local_98;
          local_74 = local_a8._0_8_;
          uStack_6c = local_a8._8_8_;
          if ((*(byte *)(param_1 + 5) & 4) != 0) {
            auStack_80[1] = (uint)uStack_b0;
            auStack_80[0] = (uint)uStack_b0;
            local_a8 = ZEXT416((uint)uStack_b0) << 0x40;
            if ((uint)uStack_b0 == 0) {
              uVar10 = 0;
              uVar8 = 0;
            }
            else {
              FUN_1447403be(local_a8,0);
              uVar10 = local_a8._0_8_;
              uVar8 = (uint)uStack_b0;
            }
            local_d8 = CONCAT44(local_d8._4_4_,uVar8);
            local_c8 = local_c8 & 0xffffffff00000000;
            local_d0 = 0x10;
            cVar5 = FUN_1427731c2(uVar4,uVar10,auStack_80,local_b8);
            if (cVar5 == '\0') {
              auStack_80[0] = (uint)uStack_b0;
              local_78 = 0;
              if (local_a8._0_8_ != 0) {
                FUN_1400020a8();
              }
            }
            else {
              FUN_144a5eaa2(local_a8,auStack_80[0],0);
              if (local_b8 != 0) {
                FUN_1400020a8();
              }
              local_b8 = local_a8._0_8_;
              uStack_b0 = local_a8._8_8_;
              auVar2._8_8_ = 0;
              auVar2._0_8_ = local_a8._8_8_;
              local_a8 = auVar2 << 0x40;
              local_78 = 1;
            }
            if ((*(byte *)(param_1 + 5) & 4) != 0) {
              (**(code **)(*param_1 + 0x1a0))(param_1,lVar9);
              FUN_146b5ab66(param_1,&local_88);
              (**(code **)(*param_1 + 0x170))(param_1,local_b8,(longlong)(int)(uint)uStack_b0);
              (**(code **)(*param_1 + 0x1f0))(param_1);
              bVar12 = *(byte *)((longlong)param_1 + 0x29) >> 1 ^ 1;
            }
          }
        }
        if (((bVar12 & 1) != 0) && ((*(byte *)(param_1 + 5) & 1) != 0)) {
          FUN_146b5b6ce(param_2 + 0xf8);
          FUN_146b377ca(param_2);
        }
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        bVar12 = bVar12 & 1;
      }
      else {
        FUN_146b5ab66(param_1,&local_88);
        bVar12 = *(byte *)((longlong)param_1 + 0x29) >> 1 ^ 1;
        if (((*(byte *)(param_1 + 5) & 1) == 0) || (0xd < local_88)) goto LAB_146b5c836;
        uVar6 = auStack_80[(local_78 & 1) == 0] + local_84;
        local_a8 = ZEXT416(uVar6) << 0x40;
        if (uVar6 != 0) {
          FUN_1447403be(local_a8,0);
        }
        (**(code **)(*param_1 + 0x1a0))(param_1,lVar9);
        (**(code **)(*param_1 + 0x170))(param_1,local_a8._0_8_,uVar6);
        bVar12 = FUN_146b5cf1c(local_a8,param_2);
        *(undefined1 *)(param_2 + 0x2b0) = 1;
        if (local_a8._0_8_ != 0) {
          FUN_1400020a8();
        }
      }
      if (bVar12 == 0) {
        cVar5 = '\0';
      }
      else {
        lVar9 = lVar9 + (ulonglong)auStack_80[0] + (ulonglong)local_84;
        lVar11 = (**(code **)(*param_1 + 0x28))(param_1);
        cVar5 = '\x01';
        if (lVar11 != lVar9) {
          (**(code **)(*param_1 + 0x1a0))(param_1,lVar9);
        }
      }
    }
    if ((cVar5 != '\0') && (uVar10 = 1, (*(byte *)((longlong)param_1 + 0x29) & 2) == 0))
    goto LAB_146b5cc5a;
    FUN_14572541c(param_1);
  }
  uVar10 = 0;
LAB_146b5cc5a:
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b5cd32 FUN_146b5cd32 body=488 status=ok
// SIG undefined FUN_146b5cd32(void)

ulonglong FUN_146b5cd32(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  bool bVar6;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  uint local_19c;
  longlong local_198;
  ulonglong auStack_190 [2];
  undefined4 local_180;
  undefined4 local_17c;
  uint local_178;
  uint local_174;
  char local_170;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined4 local_15c;
  undefined1 local_158 [41];
  byte local_12f;
  longlong local_c0;
  uint local_b8 [22];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    FUN_14572541c(param_1);
    uVar4 = 0;
  }
  else {
    FUN_146b5dfee(local_158);
    cVar2 = FUN_146b5e074(local_158,param_2);
    FUN_146b5e7ca(local_158);
    if ((cVar2 == '\0') || ((local_12f & 2) != 0)) {
      FUN_14572541c(param_1);
    }
    else {
      local_198 = 0;
      auStack_190[0] = (ulonglong)local_b8[0];
      if (local_b8[0] != 0) {
        FUN_1447403be(&local_198,0);
      }
      lVar1 = local_198;
      local_19c = local_b8[0];
      FUN_1401a700c(&local_180,0x101);
      local_1a8 = 0;
      local_1b8 = local_b8[0];
      local_1b0 = 0x10;
      cVar2 = FUN_1427731c2(local_180,lVar1,&local_19c,local_c0);
      FUN_144a5eaa2(&local_198,local_19c,1);
      bVar6 = cVar2 != '\0';
      plVar3 = &local_c0;
      if (bVar6) {
        plVar3 = &local_198;
      }
      local_15c = 0;
      local_16c = 0;
      uStack_164 = 0;
      local_17c = 0;
      local_180 = *(undefined4 *)(param_2 + 8);
      local_170 = cVar2;
      local_174 = local_b8[0];
      if (bVar6) {
        local_b8[0] = local_19c;
      }
      local_178 = local_b8[0];
      puVar5 = (ulonglong *)local_b8;
      if (bVar6) {
        puVar5 = auStack_190;
      }
      FUN_140f0be04(*plVar3,(longlong)(int)(uint)*puVar5);
      FUN_146b5ab66(param_1,&local_180);
      (**(code **)(*param_1 + 0x170))(param_1,*plVar3,(longlong)(int)(uint)*puVar5);
      if (local_198 != 0) {
        FUN_1400020a8();
      }
    }
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),(*(byte *)((longlong)param_1 + 0x29) & 2) == 0)
    ;
    FUN_146b5eaf0(local_158);
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 146b5cf1c FUN_146b5cf1c body=656 status=ok
// SIG undefined FUN_146b5cf1c(void)

undefined4 FUN_146b5cf1c(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  void *pvVar3;
  char cVar4;
  undefined4 uVar5;
  size_t _Size;
  uint uVar6;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_288 [32];
  ulonglong local_268;
  undefined4 local_260;
  undefined8 local_258;
  void *local_248;
  ulonglong uStack_240;
  undefined **local_230 [5];
  byte local_208;
  byte local_207;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  undefined4 local_188 [60];
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  undefined4 local_78;
  int local_74;
  int iStack_70;
  uint local_6c;
  byte local_68;
  undefined1 local_64 [16];
  int local_54;
  ulonglong local_50;
  int iVar7;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_288;
  uVar5 = 0;
  memset(local_230,0,0x90);
  FUN_144869430(local_230);
  local_1a0 = 0;
  local_230[0] = &PTR_FUN_149e1e050;
  local_190 = 0x7fffffffffffffff;
  local_208 = local_208 | 1;
  local_207 = local_207 & 0xfe;
  local_78 = 0x12;
  local_64 = (undefined1  [16])0x0;
  local_54 = 0;
  local_74 = 0;
  iStack_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_198 = param_1;
  FUN_146b5ab66(local_230);
  if ((local_207 & 2) != 0) goto LAB_146b5d030;
  if (local_74 < (int)param_1[1]) {
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    FUN_140f0be04((longlong)local_74 + *param_1,(int)param_1[1] - local_74,&local_98);
    auVar2._8_8_ = uStack_90;
    auVar2._0_8_ = local_98;
    if (local_64 == auVar2 && local_54 == local_88) {
      local_248 = (void *)0x0;
      uStack_240 = 0;
      iVar7 = (int)param_1[1];
      if (((local_68 & 1) == 0) || (iStack_70 + local_74 != iVar7)) {
        if (local_6c + local_74 == iVar7) {
          lVar1 = *param_1;
          uStack_240 = (ulonglong)local_6c;
          if (local_6c != 0) {
            lVar9 = (longlong)local_74;
            _Size = (size_t)(int)local_6c;
            FUN_1447403be(&local_248,0);
            memcpy(local_248,(void *)(lVar1 + lVar9),_Size);
          }
          goto LAB_146b5d181;
        }
LAB_146b5d130:
        uVar5 = 0;
      }
      else {
        uStack_240 = (ulonglong)local_6c;
        if (local_6c == 0) {
          uVar8 = 0;
        }
        else {
          FUN_1447403be(&local_248,0);
          iVar7 = (int)param_1[1];
          uVar8 = local_6c;
        }
        pvVar3 = local_248;
        uVar6 = iVar7 - local_74;
        lVar9 = (longlong)local_74;
        lVar1 = *param_1;
        FUN_1401a700c(local_188,0x101);
        local_258 = 0;
        local_260 = 0x10;
        local_268 = (ulonglong)uVar6;
        cVar4 = FUN_140aa9920(local_188[0],pvVar3,uVar8,lVar9 + lVar1);
        if (cVar4 == '\0') goto LAB_146b5d130;
LAB_146b5d181:
        FUN_146b5d634(local_188,&local_248);
        uVar5 = FUN_146b5d88e(local_188,param_2);
        FUN_146b5dfa8(local_188);
      }
      if (local_248 != (void *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_146b5d030;
    }
  }
  uVar5 = 0;
LAB_146b5d030:
  FUN_144a7fc42(local_230);
  if ((local_50 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146b5d1c9 FUN_146b5d1c9 body=377 status=ok
// SIG undefined FUN_146b5d1c9(void)

undefined8 * FUN_146b5d1c9(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)((longlong)param_1 + 0x2d) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  FUN_144a787a6();
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 5) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
  iVar7 = *(int *)(param_2 + 0x30);
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  plVar1 = param_1 + 9;
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0x54) != iVar7) {
    FUN_146b7bec2(plVar1);
    iVar7 = *(int *)(param_2 + 0x30);
  }
  if (iVar7 != 0) {
    puVar9 = *(undefined4 **)(param_2 + 0x28);
    puVar8 = puVar9 + (longlong)iVar7 * 6;
    do {
      FUN_146b3d14c(&local_68);
      local_68 = *puVar9;
      uStack_64 = puVar9[1];
      uStack_60 = puVar9[2];
      uStack_5c = puVar9[3];
      local_58 = puVar9[4];
      uStack_54 = puVar9[5];
      iVar7 = *(int *)(param_1 + 10);
      *(uint *)(param_1 + 10) = iVar7 + 1U;
      if (*(uint *)((longlong)param_1 + 0x54) < iVar7 + 1U) {
        FUN_146b55304(plVar1,iVar7);
      }
      lVar3 = *plVar1;
      *(ulonglong *)(lVar3 + 0x10 + (longlong)iVar7 * 0x18) = CONCAT44(uStack_54,local_58);
      puVar2 = (undefined4 *)(lVar3 + (longlong)iVar7 * 0x18);
      *puVar2 = local_68;
      puVar2[1] = uStack_64;
      puVar2[2] = uStack_60;
      puVar2[3] = uStack_5c;
      puVar9 = puVar9 + 6;
    } while (puVar9 != puVar8);
  }
  FUN_140bee9ec(param_1 + 7,param_2 + 0x38);
  FUN_144a787a6(param_1 + 2,param_2 + 0x50);
  *(byte *)((longlong)param_1 + 0x34) =
       *(char *)(param_2 + 0x48) << 2 |
       *(char *)(param_2 + 0x61) * '\x02' |
       *(byte *)((longlong)param_1 + 0x34) | *(byte *)(param_2 + 0x60);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b5d344 FUN_146b5d344 body=431 status=ok
// SIG undefined FUN_146b5d344(void)

longlong FUN_146b5d344(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  undefined4 *puVar11;
  longlong lVar12;
  
  FUN_140056680(param_1,&DAT_149dfb77a);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x48) = 0;
  FUN_140056680(param_1 + 0x50,&DAT_149dfb77a);
  *(undefined2 *)(param_1 + 0x60) = 0;
  FUN_144a787a6(param_1,param_2);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x30);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = uVar5;
  iVar10 = *(int *)(param_2 + 0x50);
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != iVar10) {
    FUN_146b7bf32();
    iVar10 = *(int *)(param_2 + 0x50);
  }
  if (iVar10 != 0) {
    puVar11 = *(undefined4 **)(param_2 + 0x48);
    puVar1 = puVar11 + (longlong)iVar10 * 6;
    do {
      uVar3 = *puVar11;
      uVar4 = puVar11[1];
      uVar5 = puVar11[2];
      uVar6 = puVar11[3];
      uVar7 = puVar11[4];
      uVar8 = puVar11[5];
      iVar10 = *(int *)(param_1 + 0x30);
      lVar12 = (longlong)iVar10;
      *(uint *)(param_1 + 0x30) = iVar10 + 1U;
      if (*(uint *)(param_1 + 0x34) < iVar10 + 1U) {
        FUN_146b7bfa2((longlong *)(param_1 + 0x28),iVar10);
      }
      lVar9 = *(longlong *)(param_1 + 0x28);
      *(undefined4 *)(lVar9 + lVar12 * 0x18) = uVar3;
      *(undefined4 *)(lVar9 + 4 + lVar12 * 0x18) = uVar4;
      *(undefined4 *)(lVar9 + 8 + lVar12 * 0x18) = uVar5;
      *(undefined4 *)(lVar9 + 0xc + lVar12 * 0x18) = uVar6;
      *(undefined4 *)(lVar9 + 0x10 + lVar12 * 0x18) = uVar7;
      *(undefined4 *)(lVar9 + 0x14 + lVar12 * 0x18) = uVar8;
      puVar11 = puVar11 + 6;
    } while (puVar11 != puVar1);
  }
  FUN_140bee9ec(param_1 + 0x38,param_2 + 0x38);
  *(byte *)(param_1 + 0x48) = *(byte *)(param_2 + 0x34) >> 2 & 1;
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x10);
  bVar2 = *(byte *)(param_2 + 0x34);
  *(byte *)(param_1 + 0x60) = bVar2 & 1;
  *(byte *)(param_1 + 0x61) = bVar2 >> 1 & 1;
  return param_1;
}



// FUNCTION 146b5d4f4 FUN_146b5d4f4 body=87 status=ok
// SIG undefined FUN_146b5d4f4(void)

void FUN_146b5d4f4(longlong *param_1)

{
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[7],(int)param_1[8]);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b5d54b FUN_146b5d54b body=84 status=ok
// SIG undefined FUN_146b5d54b(void)

longlong FUN_146b5d54b(longlong param_1,longlong param_2)

{
  FUN_140056680(param_1,&DAT_149dfb77a);
  FUN_140056680(param_1 + 0x10,&DAT_149dfb77a);
  FUN_144a787a6(param_1,param_2);
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  return param_1;
}



// FUNCTION 146b5d59f FUN_146b5d59f body=148 status=ok
// SIG undefined FUN_146b5d59f(void)

undefined8 FUN_146b5d59f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b09f7c();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b5d634 FUN_146b5d634 body=600 status=ok
// SIG undefined FUN_146b5d634(void)

undefined8 * FUN_146b5d634(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined1 auStack_138 [40];
  undefined4 local_110;
  undefined8 local_10c;
  int local_104;
  undefined **local_100;
  ulonglong *local_f8;
  byte local_d8;
  byte local_d7;
  byte local_d6;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  *param_1 = &PTR_FUN_149f32bb0;
  param_1[0x12] = 0;
  param_1[0x13] = param_2;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xfe;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 1;
  memset(&local_100,0,0x90);
  FUN_144869430(&local_100);
  local_70 = 0;
  local_100 = &PTR_FUN_149e1e050;
  local_60 = 0x7fffffffffffffff;
  local_d8 = local_d8 | 1;
  local_d7 = local_d7 & 0xfe;
  piVar2 = (int *)*local_f8 + 1;
  local_68 = param_2;
  if ((int *)local_f8[1] < piVar2) {
    if ((local_d6 & 2) == 0) {
      FUN_14004e24c(&local_100,&local_104,4);
    }
    else {
      thunk_FUN_14572512c(&local_100,&local_104);
    }
  }
  else {
    local_104 = *(int *)*local_f8;
    *local_f8 = (ulonglong)piVar2;
  }
  if (local_104 < 0x32) {
    FUN_146b74c48(param_1 + 0x14);
    if (0 < local_104) {
      do {
        local_10c = 0;
        FUN_140bb5ffe(&local_100,&local_10c);
        puVar3 = (undefined4 *)*local_f8 + 1;
        if ((undefined4 *)local_f8[1] < puVar3) {
          if ((local_d6 & 2) == 0) {
            (*(code *)local_100[0x2e])(&local_100,&local_110,4);
          }
          else {
            thunk_FUN_14572512c(&local_100,&local_110);
          }
        }
        else {
          local_110 = *(undefined4 *)*local_f8;
          *local_f8 = (ulonglong)puVar3;
        }
        local_58 = &local_110;
        local_50 = &local_10c;
        FUN_146b74dfa(param_1 + 0x14,local_44,&local_58);
        iVar1 = local_104 + -1;
        bVar4 = 1 < local_104;
        local_104 = iVar1;
      } while (bVar4);
    }
  }
  else {
    FUN_14572541c(param_1);
  }
  param_1[0x12] = local_70;
  FUN_144a7fc42();
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b5d88e FUN_146b5d88e body=1816 status=ok
// SIG undefined FUN_146b5d88e(void)

bool FUN_146b5d88e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined1 local_ac [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined5 uStack_78;
  undefined3 uStack_73;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar8 = FUN_1409ffe1d();
  plVar9 = (longlong *)FUN_146b5d59f(uVar8);
  uVar5 = *(uint *)((longlong)plVar9 + 0xc);
  if ((int)uVar5 < DAT_14c9647dc) {
    lVar10 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
  }
  else {
    lVar10 = 0;
  }
  FUN_1447f71cc(lVar10,0x40000000);
  FUN_14682bca6(&local_b8,0x1b8);
  (**(code **)(*param_1 + 0xf8))(param_1,local_b8);
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    FUN_14572541c(param_1);
  }
  else {
    (**(code **)(*plVar9 + 0xd8))(plVar9,param_1);
    FUN_146b37c04(param_2);
    *(uint *)(param_2 + 8) = (uint)*(byte *)(plVar9 + 5);
    *(undefined1 *)(param_2 + 0xc) = *(undefined1 *)((longlong)plVar9 + 0x29);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)((longlong)plVar9 + 0x2c);
    if ((longlong *)(param_2 + 0x18) != plVar9 + 6) {
      if (*(longlong *)(param_2 + 0x18) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 0x18) = plVar9[6];
      plVar9[6] = 0;
      *(int *)(param_2 + 0x20) = (int)plVar9[7];
      *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)((longlong)plVar9 + 0x3c);
      plVar9[7] = 0;
    }
    if ((longlong *)(param_2 + 0x28) != plVar9 + 8) {
      if (*(longlong *)(param_2 + 0x28) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 0x28) = plVar9[8];
      plVar9[8] = 0;
      *(int *)(param_2 + 0x30) = (int)plVar9[9];
      *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)((longlong)plVar9 + 0x4c);
      plVar9[9] = 0;
    }
    if ((longlong *)(param_2 + 0x38) != plVar9 + 10) {
      if (*(longlong *)(param_2 + 0x38) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 0x38) = plVar9[10];
      plVar9[10] = 0;
      *(int *)(param_2 + 0x40) = (int)plVar9[0xb];
      *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)((longlong)plVar9 + 0x5c);
      plVar9[0xb] = 0;
    }
    if ((longlong *)(param_2 + 0x48) != plVar9 + 0xc) {
      if (*(longlong *)(param_2 + 0x48) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 0x48) = plVar9[0xc];
      plVar9[0xc] = 0;
      *(int *)(param_2 + 0x50) = (int)plVar9[0xd];
      *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)((longlong)plVar9 + 0x6c);
      plVar9[0xd] = 0;
    }
    FUN_146b3e088(param_2 + 0x58,plVar9 + 0xe);
    if ((longlong *)(param_2 + 0xa8) != plVar9 + 0x18) {
      if (*(longlong *)(param_2 + 0xa8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 0xa8) = plVar9[0x18];
      plVar9[0x18] = 0;
      *(int *)(param_2 + 0xb0) = (int)plVar9[0x19];
      *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)((longlong)plVar9 + 0xcc);
      plVar9[0x19] = 0;
    }
    if ((longlong *)(param_2 + 0xb8) != plVar9 + 0x1a) {
      if (*(longlong *)(param_2 + 0xb8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 0xb8) = plVar9[0x1a];
      plVar9[0x1a] = 0;
      *(int *)(param_2 + 0xc0) = (int)plVar9[0x1b];
      *(undefined4 *)(param_2 + 0xc4) = *(undefined4 *)((longlong)plVar9 + 0xdc);
      plVar9[0x1b] = 0;
    }
    if ((longlong *)(param_2 + 200) != plVar9 + 0x1c) {
      if (*(longlong *)(param_2 + 200) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 200) = plVar9[0x1c];
      plVar9[0x1c] = 0;
      *(int *)(param_2 + 0xd0) = (int)plVar9[0x1d];
      *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)((longlong)plVar9 + 0xec);
      plVar9[0x1d] = 0;
    }
    local_c8 = (longlong *)(param_2 + 0xf8);
    local_c0 = param_1;
    FUN_146b5eb4c(local_c8,(int)plVar9[0x1f]);
    if ((longlong)(int)plVar9[0x1f] != 0) {
      lVar10 = plVar9[0x1e];
      lVar12 = (longlong)(int)plVar9[0x1f] * 0x68;
      do {
        FUN_146b5d1c9(&local_a8,lVar10);
        iVar6 = *(int *)(param_2 + 0x100);
        *(uint *)(param_2 + 0x100) = iVar6 + 1U;
        if (*(uint *)(param_2 + 0x104) < iVar6 + 1U) {
          FUN_146b55270(local_c8,iVar6);
        }
        lVar7 = *local_c8;
        lVar11 = (longlong)iVar6 * 0x60;
        *(undefined8 *)(lVar7 + lVar11) = 0;
        *(longlong *)(lVar7 + lVar11) = local_a8;
        local_a8 = 0;
        *(undefined4 *)(lVar7 + 8 + lVar11) = (undefined4)uStack_a0;
        *(undefined4 *)(lVar7 + 0xc + lVar11) = uStack_a0._4_4_;
        uStack_a0 = 0;
        *(undefined8 *)(lVar7 + 0x10 + lVar11) = 0;
        *(longlong *)(lVar7 + 0x10 + lVar11) = local_98;
        local_98 = 0;
        *(undefined4 *)(lVar7 + 0x18 + lVar11) = (undefined4)uStack_90;
        *(undefined4 *)(lVar7 + 0x1c + lVar11) = uStack_90._4_4_;
        uStack_90 = 0;
        *(ulonglong *)(lVar7 + 0x2d + lVar11) = CONCAT53(uStack_78,uStack_7c._1_3_);
        puVar2 = (undefined4 *)(lVar7 + 0x20 + lVar11);
        *puVar2 = uStack_88;
        puVar2[1] = uStack_84;
        puVar2[2] = uStack_80;
        puVar2[3] = uStack_7c;
        *(undefined8 *)(lVar7 + 0x38 + lVar11) = 0;
        *(longlong *)(lVar7 + 0x38 + lVar11) = lStack_70;
        lStack_70 = 0;
        *(undefined4 *)(lVar7 + 0x40 + lVar11) = (undefined4)local_68;
        *(undefined4 *)(lVar7 + 0x44 + lVar11) = local_68._4_4_;
        local_68 = 0;
        *(undefined8 *)(lVar7 + 0x48 + lVar11) = 0;
        *(undefined8 *)(lVar7 + 0x48 + lVar11) = local_60;
        local_60 = 0;
        *(undefined4 *)(lVar7 + 0x50 + lVar11) = (undefined4)local_58;
        *(undefined4 *)(lVar7 + 0x54 + lVar11) = local_58._4_4_;
        local_58 = 0;
        *(undefined8 *)(lVar7 + 0x58 + lVar11) = local_50;
        FUN_146b3d0f4(&local_a8);
        lVar10 = lVar10 + 0x68;
        lVar12 = lVar12 + -0x68;
      } while (lVar12 != 0);
    }
    iVar6 = (int)plVar9[0x21];
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    plVar1 = (longlong *)(param_2 + 0xe8);
    *(undefined4 *)(param_2 + 0xf0) = 0;
    if (*(int *)(param_2 + 0xf4) != iVar6) {
      FUN_146b52578(plVar1);
    }
    if ((longlong)(int)plVar9[0x21] != 0) {
      plVar14 = (longlong *)plVar9[0x20];
      plVar13 = plVar14 + (longlong)(int)plVar9[0x21] * 8;
      do {
        FUN_146b3d15e(&local_a8);
        local_a8 = *plVar14;
        uStack_a0 = plVar14[1];
        local_98 = plVar14[2];
        uStack_80 = (undefined4)plVar14[5];
        uStack_90 = plVar14[3];
        uStack_88 = (undefined4)plVar14[4];
        uStack_84 = *(undefined4 *)((longlong)plVar14 + 0x24);
        lStack_70 = plVar14[6];
        uStack_7c = CONCAT31(uStack_7c._1_3_,(char)plVar14[7]);
        iVar6 = *(int *)(param_2 + 0xf0);
        *(uint *)(param_2 + 0xf0) = iVar6 + 1U;
        if (*(uint *)(param_2 + 0xf4) < iVar6 + 1U) {
          FUN_146b55398(plVar1,iVar6);
        }
        lVar10 = *plVar1;
        lVar12 = (longlong)iVar6 * 0x40;
        puVar3 = (undefined8 *)(lVar10 + 0x30 + lVar12);
        *puVar3 = CONCAT35(uStack_73,uStack_78);
        puVar3[1] = lStack_70;
        puVar3 = (undefined8 *)(lVar10 + 0x20 + lVar12);
        *puVar3 = CONCAT44(uStack_84,uStack_88);
        puVar3[1] = CONCAT44(uStack_7c,uStack_80);
        plVar4 = (longlong *)(lVar10 + 0x10 + lVar12);
        *plVar4 = local_98;
        plVar4[1] = uStack_90;
        puVar2 = (undefined4 *)(lVar10 + lVar12);
        *puVar2 = (undefined4)local_a8;
        puVar2[1] = local_a8._4_4_;
        puVar2[2] = (undefined4)uStack_a0;
        puVar2[3] = uStack_a0._4_4_;
        plVar14 = plVar14 + 8;
      } while (plVar14 != plVar13);
    }
    FUN_14587c83e(param_2 + 0x108,(int)plVar9[0x23]);
    if ((longlong)(int)plVar9[0x23] != 0) {
      lVar10 = plVar9[0x22];
      lVar12 = (longlong)(int)plVar9[0x23] * 0x20 + lVar10;
      do {
        uStack_a0 = lVar10 + 0x10;
        local_a8 = lVar10;
        FUN_140ac5c08(param_2 + 0x108,local_ac,&local_a8,0);
        lVar10 = lVar10 + 0x20;
      } while (lVar10 != lVar12);
    }
    if (*(int *)(param_2 + 8) == -1) {
      *(undefined4 *)(param_2 + 8) = 9;
    }
    FUN_146b5b6ce(local_c8);
    FUN_146b377ca(param_2);
    param_1 = local_c0;
  }
  FUN_144a7e010(plVar9 + 6);
  FUN_144a7e010(plVar9 + 8);
  FUN_144a7e010(plVar9 + 10);
  FUN_144a7e010(plVar9 + 0xc);
  FUN_145d323a0(plVar9 + 0xe,0);
  FUN_144a7e010(plVar9 + 0x18);
  FUN_144a7e010(plVar9 + 0x1a);
  FUN_144a7e010(plVar9 + 0x1c);
  FUN_145d60ffa(plVar9[0x1e],(int)plVar9[0x1f]);
  *(undefined4 *)(plVar9 + 0x1f) = 0;
  if (*(int *)((longlong)plVar9 + 0xfc) != 0) {
    FUN_146b7c036(plVar9 + 0x1e,0);
  }
  *(undefined4 *)(plVar9 + 0x21) = 0;
  if (*(int *)((longlong)plVar9 + 0x10c) != 0) {
    FUN_146b7c0a2(plVar9 + 0x20,0);
  }
  FUN_145d61022(plVar9[0x22],(int)plVar9[0x23]);
  *(undefined4 *)(plVar9 + 0x23) = 0;
  if (*(int *)((longlong)plVar9 + 0x11c) != 0) {
    FUN_146b7c102(plVar9 + 0x22,0);
  }
  uVar5 = *(uint *)((longlong)plVar9 + 0xc);
  if ((int)uVar5 < DAT_14c9647dc) {
    lVar10 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
  }
  else {
    lVar10 = 0;
  }
  FUN_14482b126(lVar10,0x40000000);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (*(byte *)((longlong)param_1 + 0x29) & 2) == 0;
}



// FUNCTION 146b5dfa8 FUN_146b5dfa8 body=70 status=ok
// SIG undefined FUN_146b5dfa8(void)

void FUN_146b5dfa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f32bb0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_1403dd50a(param_1 + 0x14);
  FUN_144a7fc42(param_1);
  return;
}



// FUNCTION 146b5dfee FUN_146b5dfee body=133 status=ok
// SIG undefined FUN_146b5dfee(void)

undefined8 * FUN_146b5dfee(undefined8 *param_1)

{
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  *param_1 = &PTR_FUN_149f32e30;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xfe;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 4;
  return param_1;
}



// FUNCTION 146b5e074 FUN_146b5e074 body=1875 status=ok
// SIG undefined FUN_146b5e074(void)

/* WARNING: Removing unreachable block (ram,0x000146b5e508) */
/* WARNING: Removing unreachable block (ram,0x000146b5e517) */

bool FUN_146b5e074(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  undefined1 uVar18;
  longlong lVar19;
  undefined1 auStack_138 [47];
  undefined1 local_109;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  longlong *local_f0;
  undefined4 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar9 = FUN_1409ffe1d();
  local_108 = (longlong *)FUN_146b5d59f(uVar9);
  uVar2 = *(uint *)((longlong)local_108 + 0xc);
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar10 = 0;
  }
  FUN_1447f71cc(lVar10,0x40000000);
  FUN_14682bca6(&local_e0,0x1b8);
  (**(code **)(*param_1 + 0xf8))(param_1,local_e0);
  plVar16 = local_108;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(undefined1 *)(local_108 + 5) = *(undefined1 *)(param_2 + 8);
    *(undefined1 *)((longlong)local_108 + 0x29) = *(undefined1 *)(param_2 + 0xc);
    *(undefined4 *)((longlong)local_108 + 0x2c) = *(undefined4 *)(param_2 + 0x10);
    FUN_144a787a6(local_108 + 6,param_2 + 0x18);
    FUN_144a787a6(plVar16 + 8,param_2 + 0x28);
    FUN_144a787a6(plVar16 + 10,param_2 + 0x38);
    FUN_144a787a6(plVar16 + 0xc,param_2 + 0x48);
    FUN_1410b2022(plVar16 + 0xe,param_2 + 0x58);
    FUN_144a787a6(plVar16 + 0x18,param_2 + 0xa8);
    FUN_144a787a6(plVar16 + 0x1a,param_2 + 0xb8);
    FUN_144a787a6(plVar16 + 0x1c,param_2 + 200);
    plVar16 = plVar16 + 0x1e;
    FUN_146b5eb92(plVar16,*(undefined4 *)(param_2 + 0x100));
    local_100 = param_2;
    if ((longlong)*(int *)(param_2 + 0x100) != 0) {
      lVar10 = *(longlong *)(param_2 + 0xf8);
      lVar15 = (longlong)*(int *)(param_2 + 0x100) * 0x60;
      do {
        FUN_146b5d344(&local_b8,lVar10);
        iVar14 = (int)local_108[0x1f];
        *(uint *)(local_108 + 0x1f) = iVar14 + 1U;
        if (*(uint *)((longlong)local_108 + 0xfc) < iVar14 + 1U) {
          FUN_146b7c162(plVar16,iVar14);
        }
        lVar19 = *plVar16;
        lVar11 = (longlong)iVar14 * 0x68;
        *(undefined8 *)(lVar19 + lVar11) = 0;
        *(longlong **)(lVar19 + lVar11) = local_b8;
        local_b8 = (longlong *)0x0;
        *(undefined4 *)(lVar19 + 8 + lVar11) = (undefined4)uStack_b0;
        *(uint *)(lVar19 + 0xc + lVar11) = uStack_b0._4_4_;
        uStack_b0 = 0;
        *(undefined4 *)(lVar19 + 0x20 + lVar11) = local_98;
        puVar13 = (undefined4 *)(lVar19 + 0x10 + lVar11);
        *puVar13 = (undefined4)local_a8;
        puVar13[1] = local_a8._4_4_;
        puVar13[2] = (uint)uStack_a0;
        puVar13[3] = uStack_a0._4_4_;
        *(undefined8 *)(lVar19 + 0x28 + lVar11) = 0;
        *(undefined8 *)(lVar19 + 0x28 + lVar11) = local_90;
        local_90 = 0;
        *(undefined4 *)(lVar19 + 0x30 + lVar11) = (undefined4)local_88;
        *(undefined4 *)(lVar19 + 0x34 + lVar11) = local_88._4_4_;
        local_88 = 0;
        *(undefined8 *)(lVar19 + 0x38 + lVar11) = 0;
        *(undefined8 *)(lVar19 + 0x38 + lVar11) = local_80;
        local_80 = 0;
        *(undefined4 *)(lVar19 + 0x40 + lVar11) = (undefined4)local_78;
        *(undefined4 *)(lVar19 + 0x44 + lVar11) = local_78._4_4_;
        local_78 = 0;
        *(undefined1 *)(lVar19 + 0x48 + lVar11) = local_70;
        *(undefined8 *)(lVar19 + 0x50 + lVar11) = 0;
        *(undefined8 *)(lVar19 + 0x50 + lVar11) = local_68;
        local_68 = 0;
        *(undefined4 *)(lVar19 + 0x58 + lVar11) = (undefined4)local_60;
        *(undefined4 *)(lVar19 + 0x5c + lVar11) = local_60._4_4_;
        local_60 = 0;
        *(undefined2 *)(lVar19 + 0x60 + lVar11) = local_58;
        FUN_146b5d4f4(&local_b8);
        lVar10 = lVar10 + 0x60;
        lVar15 = lVar15 + -0x60;
      } while (lVar15 != 0);
    }
    lVar10 = local_100;
    iVar14 = *(int *)(local_100 + 0xf0);
    if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar14);
    }
    local_f8 = local_108 + 0x20;
    *(undefined4 *)(local_108 + 0x21) = 0;
    local_f0 = param_1;
    if (*(int *)((longlong)local_108 + 0x10c) != iVar14) {
      FUN_146b7c0a2();
    }
    plVar16 = local_108;
    if ((longlong)*(int *)(lVar10 + 0xf0) != 0) {
      puVar13 = *(undefined4 **)(local_100 + 0xe8);
      puVar17 = puVar13 + (longlong)*(int *)(lVar10 + 0xf0) * 0x10;
      plVar12 = local_f8;
      local_e8 = puVar17;
      do {
        uVar3 = *puVar13;
        uVar4 = puVar13[1];
        uVar5 = puVar13[2];
        uVar6 = puVar13[3];
        uVar9 = *(undefined8 *)(puVar13 + 4);
        local_a8 = CONCAT44(local_a8._4_4_,puVar13[10]);
        lVar10 = *(longlong *)(puVar13 + 6);
        local_b8 = *(longlong **)(puVar13 + 6);
        uStack_b0 = *(undefined8 *)(puVar13 + 8);
        uVar7 = *(undefined8 *)(puVar13 + 0xe);
        uVar18 = *(undefined1 *)(puVar13 + 0xb);
        iVar14 = (int)plVar16[0x21];
        *(uint *)(plVar16 + 0x21) = iVar14 + 1U;
        if (*(uint *)((longlong)plVar16 + 0x10c) < iVar14 + 1U) {
          local_109 = uVar18;
          FUN_146b7c1f2((int)lVar10,iVar14);
          plVar12 = local_f8;
          plVar16 = local_108;
          puVar17 = local_e8;
          uVar18 = local_109;
        }
        lVar10 = *plVar12;
        lVar15 = (longlong)iVar14 * 0x40;
        *(undefined4 *)(lVar10 + lVar15) = uVar3;
        *(undefined4 *)(lVar10 + 4 + lVar15) = uVar4;
        *(undefined4 *)(lVar10 + 8 + lVar15) = uVar5;
        *(undefined4 *)(lVar10 + 0xc + lVar15) = uVar6;
        *(undefined8 *)(lVar10 + 0x10 + lVar15) = uVar9;
        puVar1 = (undefined4 *)(lVar10 + 0x18 + lVar15);
        *puVar1 = (undefined4)local_b8;
        puVar1[1] = local_b8._4_4_;
        puVar1[2] = (undefined4)uStack_b0;
        puVar1[3] = uStack_b0._4_4_;
        *(undefined4 *)(lVar10 + 0x28 + lVar15) = (undefined4)local_a8;
        *(undefined8 *)(lVar10 + 0x30 + lVar15) = uVar7;
        *(undefined1 *)(lVar10 + 0x38 + lVar15) = uVar18;
        puVar13 = puVar13 + 0x10;
      } while (puVar13 != puVar17);
    }
    lVar15 = local_100;
    plVar16 = plVar16 + 0x22;
    plVar12 = (longlong *)(local_100 + 0x108);
    FUN_146b5ebd8(plVar16,*(int *)(local_100 + 0x110) - *(int *)(local_100 + 0x13c));
    lVar10 = lVar15 + 0x118;
    local_d8 = 0x100000000;
    local_c8 = 0xffffffff;
    local_c0 = (ulonglong)local_c0._4_4_ << 0x20;
    iVar14 = 0;
    local_d0 = lVar10;
    if (*(int *)(lVar15 + 0x130) != 0) {
      FUN_1449c0562(&local_d8);
      iVar14 = *(int *)(lVar15 + 0x130);
    }
    param_1 = local_f0;
    uStack_a0 = local_c8;
    uVar9 = uStack_a0;
    local_98 = (undefined4)local_c0;
    local_94 = local_c0._4_4_;
    uStack_b0 = local_d8;
    local_a8 = local_d0;
    uStack_a0._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
    iVar8 = uStack_a0._4_4_;
    local_b8 = plVar12;
    if ((uStack_a0._4_4_ != iVar14) || (uStack_a0 = uVar9, local_d0 != lVar10)) {
      do {
        uStack_a0 = uVar9;
        FUN_146b5d54b(&local_d8,(longlong)iVar8 * 0x28 + *local_b8);
        iVar8 = (int)local_108[0x23];
        *(uint *)(local_108 + 0x23) = iVar8 + 1U;
        if (*(uint *)((longlong)local_108 + 0x11c) < iVar8 + 1U) {
          FUN_146b7c278(plVar16,iVar8);
        }
        lVar15 = *plVar16;
        lVar19 = (longlong)iVar8 * 0x20;
        *(undefined8 *)(lVar15 + lVar19) = 0;
        *(undefined8 *)(lVar15 + lVar19) = local_d8;
        *(undefined4 *)(lVar15 + 8 + lVar19) = (undefined4)local_d0;
        *(undefined4 *)(lVar15 + 0xc + lVar19) = local_d0._4_4_;
        *(undefined8 *)(lVar15 + 0x10 + lVar19) = 0;
        *(undefined8 *)(lVar15 + 0x10 + lVar19) = local_c8;
        *(undefined4 *)(lVar15 + 0x18 + lVar19) = (undefined4)local_c0;
        *(uint *)(lVar15 + 0x1c + lVar19) = local_c0._4_4_;
        local_c0 = 0;
        local_c8 = 0;
        local_d0 = 0;
        local_d8 = 0;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
        FUN_1449c0562(&uStack_b0);
        iVar8 = uStack_a0._4_4_;
        uVar9 = uStack_a0;
      } while (local_b8 != plVar12 || (local_a8 != lVar10 || uStack_a0._4_4_ != iVar14));
    }
    plVar16 = local_108;
    (**(code **)(*local_108 + 0xd8))(local_108,param_1);
  }
  else {
    FUN_14572541c(param_1);
    plVar16 = local_108;
  }
  FUN_144a7e010(plVar16 + 6);
  FUN_144a7e010(plVar16 + 8);
  FUN_144a7e010(plVar16 + 10);
  FUN_144a7e010(plVar16 + 0xc);
  FUN_145d323a0(plVar16 + 0xe,0);
  FUN_144a7e010(plVar16 + 0x18);
  FUN_144a7e010(plVar16 + 0x1a);
  FUN_144a7e010(plVar16 + 0x1c);
  FUN_145d60ffa(plVar16[0x1e],(int)plVar16[0x1f]);
  *(undefined4 *)(plVar16 + 0x1f) = 0;
  if (*(int *)((longlong)plVar16 + 0xfc) != 0) {
    FUN_146b7c036(plVar16 + 0x1e,0);
    plVar16 = local_108;
  }
  *(undefined4 *)(plVar16 + 0x21) = 0;
  if (*(int *)((longlong)plVar16 + 0x10c) != 0) {
    FUN_146b7c0a2(plVar16 + 0x20,0);
    plVar16 = local_108;
  }
  FUN_145d61022(plVar16[0x22],(int)plVar16[0x23]);
  *(undefined4 *)(local_108 + 0x23) = 0;
  if (*(int *)((longlong)local_108 + 0x11c) != 0) {
    FUN_146b7c102(local_108 + 0x22,0);
  }
  uVar2 = *(uint *)((longlong)local_108 + 0xc);
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar10 = 0;
  }
  FUN_14482b126(lVar10,0x40000000);
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (*(byte *)((longlong)param_1 + 0x29) & 2) == 0;
}



// FUNCTION 146b5e7ca FUN_146b5e7ca body=796 status=ok
// SIG undefined FUN_146b5e7ca(void)

void FUN_146b5e7ca(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_178 [40];
  longlong *local_150;
  undefined4 local_148;
  uint uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  uint local_138;
  int iStack_134;
  undefined8 uStack_130;
  int local_124;
  undefined **local_120;
  ulonglong *local_118;
  byte local_f8;
  byte local_f7;
  byte local_f6;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_78 = 0;
  uStack_70 = 0;
  memset(&local_120,0,0x90);
  FUN_144869430(&local_120);
  local_90 = 0;
  local_80 = 0;
  local_f8 = local_f8 | 4;
  local_f7 = local_f7 & 0xfe;
  local_120 = &PTR_FUN_149e1e330;
  local_124 = *(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xdc);
  piVar1 = (int *)*local_118 + 1;
  local_88 = &local_78;
  if ((int *)local_118[1] < piVar1) {
    if ((local_f6 & 2) == 0) {
      FUN_144a2420a(&local_120,&local_124,4);
    }
    else {
      thunk_FUN_14572512c(&local_120,&local_124);
    }
  }
  else {
    local_124 = *(int *)*local_118;
    *local_118 = (ulonglong)piVar1;
  }
  plVar2 = (longlong *)(param_1 + 0xa8);
  lVar6 = param_1 + 0xb8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar6;
  if (*(int *)(param_1 + 0xd0) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_1 + 0xd0);
  }
  uStack_130 = CONCAT44(uStack_4c,uStack_50);
  local_138 = local_58;
  iStack_134 = iStack_54;
  local_148 = (undefined4)local_68;
  uStack_144 = local_68._4_4_;
  uStack_140 = (undefined4)uStack_60;
  uStack_13c = uStack_60._4_4_;
  local_150 = plVar2;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar6)) {
    do {
      puVar5 = (undefined4 *)(*local_150 + (longlong)iStack_134 * 0x14 + 8);
      FUN_140bb5ffe(&local_120,*local_150 + (longlong)iStack_134 * 0x14);
      if ((undefined4 *)local_118[1] < (undefined4 *)*local_118 + 1) {
        if ((local_f6 & 2) == 0) {
          (*(code *)local_120[0x2e])(&local_120,puVar5,4);
        }
        else {
          thunk_FUN_14572512c(&local_120,puVar5);
        }
      }
      else {
        *puVar5 = *(undefined4 *)*local_118;
        *local_118 = *local_118 + 4;
      }
      local_138 = local_138 & ~uStack_144;
      FUN_1449c0562(&local_148);
    } while (local_150 != plVar2 ||
             (CONCAT44(uStack_13c,uStack_140) != lVar6 || iStack_134 != iVar7));
  }
  uVar4 = uStack_70;
  uVar3 = *(uint *)(param_1 + 0xa0);
  if ((longlong)(int)uVar3 != 0) {
    iVar7 = (int)uStack_70;
    lVar6 = (longlong)(int)uStack_70;
    uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 + uVar3);
    if ((uint)(uStack_70._4_4_ - iVar7) < uVar3) {
      FUN_1447403be(&local_78,uVar4 & 0xffffffff);
    }
    memcpy((void *)(lVar6 + local_78),*(void **)(param_1 + 0x98),(longlong)(int)uVar3);
  }
  if ((longlong *)(param_1 + 0x98) != &local_78) {
    if (*(longlong *)(param_1 + 0x98) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x98) = local_78;
    local_78 = 0;
    *(int *)(param_1 + 0xa0) = (int)uStack_70;
    *(int *)(param_1 + 0xa4) = uStack_70._4_4_;
    uStack_70 = 0;
  }
  FUN_144a7fc42(&local_120);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b5eaf0 FUN_146b5eaf0 body=92 status=ok
// SIG undefined FUN_146b5eaf0(void)

void FUN_146b5eaf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f32e30;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x15);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_144a7fc42(param_1);
  return;
}



// FUNCTION 146b5eb4c FUN_146b5eb4c body=68 status=ok
// SIG undefined FUN_146b5eb4c(void)

void FUN_146b5eb4c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_146b498c7(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146b76c86(param_1,param_2);
  return;
}



// FUNCTION 146b5eb92 FUN_146b5eb92 body=68 status=ok
// SIG undefined FUN_146b5eb92(void)

void FUN_146b5eb92(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145d60ffa(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146b7c036(param_1,param_2);
  return;
}



// FUNCTION 146b5ebd8 FUN_146b5ebd8 body=68 status=ok
// SIG undefined FUN_146b5ebd8(void)

void FUN_146b5ebd8(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145d61022(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_146b7c102(param_1,param_2);
  return;
}



// FUNCTION 146b5ec1d FUN_146b5ec1d body=5336 status=ok
// SIG undefined FUN_146b5ec1d(void)

longlong *
FUN_146b5ec1d(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,longlong *param_6)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code ***pppcVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong *plVar15;
  int *piVar16;
  ulonglong uVar17;
  undefined ***pppuVar18;
  code *****pppppcVar19;
  longlong ***ppplVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong lVar24;
  code ******ppppppcVar25;
  double *pdVar26;
  undefined8 *puVar27;
  code *pcVar28;
  int iVar29;
  longlong lVar30;
  undefined8 *puVar31;
  undefined4 uVar32;
  undefined1 auStack_418 [32];
  undefined8 *local_3f8;
  undefined8 *local_3f0;
  longlong *local_3e8;
  int local_3dc;
  longlong local_3d8;
  undefined8 *local_3d0;
  longlong *local_3c8;
  code ***local_3c0;
  longlong local_3b8;
  code ****local_3b0;
  undefined8 local_3a8;
  undefined1 *puStack_3a0;
  uint local_398;
  int iStack_394;
  ulonglong uStack_390;
  undefined8 *local_388;
  undefined8 uStack_380;
  void *local_378;
  int local_370;
  undefined4 local_36c;
  undefined1 local_368 [16];
  undefined8 *local_358;
  int local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_31c;
  undefined4 local_314;
  longlong local_308;
  undefined4 local_300;
  longlong ****local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [16];
  undefined8 local_2d8;
  int local_2d0;
  undefined8 local_2cc;
  undefined4 local_2c4;
  longlong local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  undefined4 local_274;
  longlong local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_22c;
  undefined4 local_224;
  longlong local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  int local_1d4;
  longlong local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_18c;
  int local_184;
  longlong local_178;
  undefined4 local_170;
  code *local_168;
  undefined8 *local_160;
  undefined ***local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined **local_148;
  longlong ******local_140;
  undefined8 *local_138;
  longlong ******local_128;
  undefined8 uStack_120;
  longlong *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 *local_100;
  longlong ******local_f8;
  longlong local_e8;
  undefined4 local_e0;
  code ******local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  int local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_418;
  local_198 = 0;
  local_190 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_18c = 0xffffffff00000080;
  local_184 = 0;
  local_178 = 0;
  local_170 = 0;
  local_3f8 = param_4;
  local_3f0 = param_2;
  FUN_1410b2022(&local_1b8,param_3);
  local_1e8 = 0;
  local_1e0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1dc = 0xffffffff00000080;
  local_1d4 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  FUN_1410b2022(&local_208,param_5);
  if ((int)uStack_1b0 == local_184) {
    (**(code **)(*(longlong *)*local_3f0 + 0xc0))((longlong *)*local_3f0,&local_1b8);
  }
  if ((int)uStack_200 == local_1d4) {
    (**(code **)(*(longlong *)*local_3f8 + 0xc0))((longlong *)*local_3f8,&local_208);
  }
  local_3c8 = param_1;
  FUN_140056680(&local_d8,&DAT_149dfb77a);
  FUN_140e830ae(&local_1b8,&local_128,&local_d8,0);
  if (local_d8 != (code ******)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_d8,&DAT_149dfb77a);
  FUN_140e830ae(&local_208,&local_128,&local_d8,0);
  if (local_d8 != (code ******)0x0) {
    FUN_1400020a8();
  }
  puVar23 = local_3f0;
  local_238 = 0;
  local_230 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_22c = 0xffffffff00000080;
  local_224 = 0;
  local_218 = 0;
  local_210 = 0;
  local_288 = 0;
  local_280 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_27c = 0xffffffff00000080;
  local_274 = 0;
  local_268 = 0;
  local_260 = 0;
  (**(code **)(*(longlong *)*local_3f0 + 0x1d0))((longlong *)*local_3f0,&local_1b8,&local_258);
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = (code ******)0x0;
  uStack_d0 = (longlong ******)0x0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  plVar15 = (longlong *)*puVar23;
  (**(code **)(*plVar15 + 0x188))(plVar15,&local_258,&local_d8);
  plVar15 = (longlong *)*puVar23;
  (**(code **)(*plVar15 + 0x228))(plVar15,&local_1b8,&local_d8);
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_d8);
  local_2d8 = 0;
  local_2d0 = 0;
  local_2f8 = (longlong ****)0x0;
  uStack_2f0 = 0;
  local_2cc = 0xffffffff00000080;
  local_2c4 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_328 = 0;
  local_320 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_31c = 0xffffffff00000080;
  local_314 = 0;
  local_308 = 0;
  local_300 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = (code ******)0x0;
  uStack_d0 = (longlong ******)0x0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  (**(code **)(*(longlong *)*local_3f8 + 0x1d0))((longlong *)*local_3f8,&local_208,&local_d8);
  local_168 = (code *)0x100000000;
  local_160 = &local_c8;
  local_158 = (undefined ***)&DAT_ffffffff;
  local_150 = 0;
  iVar29 = 0;
  if (local_b0 != 0) {
    FUN_1449c0562(&local_168);
    iVar29 = local_b0;
  }
  local_110 = local_158;
  pppuVar18 = local_110;
  local_108 = (undefined **)CONCAT44(local_14c,local_150);
  uStack_120 = local_168;
  local_118 = local_160;
  local_128 = (longlong ******)&local_d8;
  local_110._4_4_ = (int)((ulonglong)local_158 >> 0x20);
  if ((local_110._4_4_ != iVar29) || (local_160 != &local_c8)) {
    iVar12 = local_110._4_4_;
    local_110 = pppuVar18;
    do {
      ppppppcVar25 = (code ******)(*local_128 + (longlong)iVar12 * 3);
      lVar14 = (**(code **)(*(longlong *)*local_3f0 + 0x1f8))((longlong *)*local_3f0,ppppppcVar25);
      lVar24 = (**(code **)(*(longlong *)*local_3f8 + 0x1f8))((longlong *)*local_3f8,ppppppcVar25);
      if ((lVar14 == 0) ||
         (*(int *)(lVar24 + 0x30) != *(int *)(lVar14 + 0x30) ||
          *(undefined1 (*) [16])(lVar24 + 0x20) != *(undefined1 (*) [16])(lVar14 + 0x20))) {
LAB_146b5f2fb:
        FUN_140e830ae(&local_2f8,&local_168,ppppppcVar25);
      }
      else {
        iVar12 = *(int *)(ppppppcVar25 + 1);
        pppppcVar19 = (code *****)&DAT_149dfb77a;
        if (iVar12 != 0) {
          pppppcVar19 = *ppppppcVar25;
        }
        iVar5 = iVar12 + -1;
        if (iVar12 == 0) {
          iVar5 = 0;
        }
        uVar13 = FUN_144a49b4a(iVar5,pppppcVar19);
        iVar12 = FUN_1456cf568(&local_258,uVar13,ppppppcVar25);
        if (iVar12 == -1) goto LAB_146b5f2fb;
      }
      local_110 = (undefined ***)CONCAT44(local_110._4_4_,(uint)local_110 & ~uStack_120._4_4_);
      FUN_1449c0562(&uStack_120);
      iVar12 = local_110._4_4_;
      pppuVar18 = local_110;
    } while ((code *******)local_128 != &local_d8 ||
             (local_118 != &local_c8 || local_110._4_4_ != iVar29));
  }
  local_110 = pppuVar18;
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_d8);
  local_d8 = (code ******)&local_128;
  FUN_146b4d79c(&local_2f8,&local_d8);
  FUN_14482b9e8(&local_2f8);
  (**(code **)(*(longlong *)*local_3f0 + 0x188))((longlong *)*local_3f0,&local_2f8);
  local_368 = (undefined1  [16])0x0;
  local_128 = (longlong ******)0x100000000;
  uStack_120 = (code *)local_2e8;
  local_118 = (longlong *)&DAT_ffffffff;
  local_110 = (undefined ***)((ulonglong)local_110 & 0xffffffff00000000);
  iVar29 = 0;
  if (local_2d0 != 0) {
    FUN_1449c0562(&local_128);
    iVar29 = local_2d0;
  }
  uStack_c0 = local_118;
  plVar15 = uStack_c0;
  local_b8 = (ulonglong)local_110;
  uStack_d0 = local_128;
  local_c8 = uStack_120;
  local_d8 = (code ******)&local_2f8;
  uStack_c0._4_4_ = (int)((ulonglong)local_118 >> 0x20);
  if ((uStack_c0._4_4_ != iVar29) || (uStack_120 != (code *)local_2e8)) {
    iVar12 = uStack_c0._4_4_;
    uStack_c0 = plVar15;
    do {
      lVar14 = (**(code **)(*(longlong *)*local_3f8 + 0x1f8))
                         ((longlong *)*local_3f8,*local_d8 + (longlong)iVar12 * 3);
      iVar12 = *(int *)(lVar14 + 0x50);
      if ((longlong)iVar12 != 0) {
        lVar14 = *(longlong *)(lVar14 + 0x48);
        lVar24 = 0;
        do {
          uVar13 = local_368._8_4_;
          lVar30 = (longlong)(int)local_368._8_4_;
          uVar11 = local_368._8_4_ + 1;
          local_368._8_4_ = uVar11;
          if ((uint)local_368._12_4_ < uVar11) {
            FUN_140c60952(local_368,uVar13);
          }
          puVar23 = (undefined8 *)(lVar14 + lVar24);
          uVar4 = puVar23[1];
          puVar31 = (undefined8 *)(local_368._0_8_ + lVar30 * 0x10);
          *puVar31 = *puVar23;
          puVar31[1] = uVar4;
          lVar24 = lVar24 + 0x18;
        } while ((longlong)iVar12 * 0x18 != lVar24);
      }
      uStack_c0 = (longlong *)CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 & ~uStack_d0._4_4_);
      FUN_1449c0562(&uStack_d0);
      iVar12 = uStack_c0._4_4_;
      plVar15 = uStack_c0;
    } while (local_d8 != (code ******)&local_2f8 ||
             (local_c8 != local_2e8 || uStack_c0._4_4_ != iVar29));
  }
  uStack_c0 = plVar15;
  local_378 = (void *)0x0;
  lVar14 = (longlong)(int)local_368._8_4_;
  uVar4 = local_368._0_8_;
  local_370 = local_368._8_4_;
  if (lVar14 == 0) {
    local_36c = 0;
  }
  else {
    FUN_1417246d8(&local_378,local_368._8_4_,0);
    memcpy(local_378,(void *)uVar4,lVar14 << 4);
  }
  plVar15 = (longlong *)FUN_146b600f6(&local_378);
  local_388 = (undefined8 *)0x0;
  uStack_380 = 0;
  lVar14 = param_6[1];
  local_3e8 = plVar15;
  if ((longlong)(int)lVar14 != 0) {
    lVar24 = *param_6;
    lVar30 = 0;
    do {
      uVar17 = uStack_380;
      uVar4 = *local_3f8;
      lVar21 = (longlong)(int)uStack_380;
      uVar11 = (int)uStack_380 + 1;
      uStack_380 = CONCAT44(uStack_380._4_4_,uVar11);
      if (uStack_380._4_4_ < uVar11) {
        FUN_14294c370(&local_388,uVar17 & 0xffffffff);
        plVar15 = local_3e8;
      }
      puVar23 = (undefined8 *)(lVar24 + lVar30);
      lVar22 = lVar21 * 0x100;
      local_388[lVar21 * 0x20] = plVar15;
      local_388[lVar21 * 0x20 + 1] = uVar4;
      local_388[lVar21 * 0x20 + 2] = &local_2a8;
      uVar4 = puVar23[1];
      uVar6 = puVar23[2];
      uVar7 = puVar23[3];
      uVar8 = puVar23[4];
      uVar9 = puVar23[5];
      local_388[lVar21 * 0x20 + 3] = *puVar23;
      (local_388 + lVar21 * 0x20 + 3)[1] = uVar4;
      local_388[lVar21 * 0x20 + 5] = uVar6;
      (local_388 + lVar21 * 0x20 + 5)[1] = uVar7;
      local_388[lVar21 * 0x20 + 7] = uVar8;
      (local_388 + lVar21 * 0x20 + 7)[1] = uVar9;
      local_388[lVar21 * 0x20 + 0xe] = 0;
      *(undefined4 *)(local_388 + lVar21 * 0x20 + 0xf) = 0;
      local_388[lVar21 * 0x20 + 9] = 0;
      (local_388 + lVar21 * 0x20 + 9)[1] = 0;
      local_388[lVar21 * 0x20 + 0xb] = 0;
      *(undefined8 *)((longlong)local_388 + lVar22 + 0x7c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)local_388 + lVar22 + 0x84) = 0;
      local_388[lVar21 * 0x20 + 0x12] = 0;
      *(undefined4 *)(local_388 + lVar21 * 0x20 + 0x13) = 0;
      local_388[lVar21 * 0x20 + 0x18] = 0;
      *(undefined4 *)(local_388 + lVar21 * 0x20 + 0x19) = 0;
      local_388[lVar21 * 0x20 + 0x14] = 0;
      (local_388 + lVar21 * 0x20 + 0x14)[1] = 0;
      *(undefined8 *)((longlong)local_388 + lVar22 + 0xcc) = 0xffffffff00000080;
      *(undefined4 *)((longlong)local_388 + lVar22 + 0xd4) = 0;
      local_388[lVar21 * 0x20 + 0x1c] = 0;
      *(undefined4 *)(local_388 + lVar21 * 0x20 + 0x1d) = 0;
      local_388[lVar21 * 0x20 + 0x1e] = 0;
      (local_388 + lVar21 * 0x20 + 0x1e)[1] = 0;
      lVar30 = lVar30 + 0x30;
    } while ((longlong)(int)lVar14 * 0x30 != lVar30);
  }
  local_d8 = (code ******)0x100000000;
  uStack_d0 = (longlong ******)local_2e8;
  local_c8._0_4_ = 0xffffffff;
  local_c8._4_4_ = 0;
  uStack_c0 = (longlong *)((ulonglong)uStack_c0 & 0xffffffff00000000);
  if (local_2d0 == 0) {
    iVar29 = 0;
  }
  else {
    FUN_1449c0562(&local_d8);
    iVar29 = local_2d0;
  }
  local_398 = (uint)local_c8;
  iStack_394 = local_c8._4_4_;
  uStack_390 = (ulonglong)uStack_c0;
  local_3a8 = local_d8;
  puStack_3a0 = (undefined1 *)uStack_d0;
  local_3b0 = (code ****)&local_2f8;
  if ((local_c8._4_4_ != iVar29) || (uStack_d0 != (longlong ******)local_2e8)) {
    do {
      local_3dc = iVar29;
      local_3c0 = *local_3b0 + (longlong)iStack_394 * 3;
      if ((longlong)(int)uStack_380 != 0) {
        lVar14 = 0;
        do {
          *(double *)((longlong)local_388 + lVar14 + 0x48) =
               *(double *)((longlong)local_388 + lVar14 + 0x40) +
               *(double *)((longlong)local_388 + lVar14 + 0x48);
          lVar14 = lVar14 + 0x100;
        } while ((longlong)(int)uStack_380 * 0x100 != lVar14);
      }
      lVar14 = (**(code **)(*(longlong *)*local_3f8 + 0x1f8))();
      if ((longlong)*(int *)(lVar14 + 0x50) != 0) {
        lVar24 = *(longlong *)(lVar14 + 0x48);
        local_3b8 = lVar24 + (longlong)*(int *)(lVar14 + 0x50) * 0x18;
        do {
          local_3d8 = lVar24;
          if ((longlong)(int)uStack_380 != 0) {
            puVar23 = local_388 + (longlong)(int)uStack_380 * 0x20;
            puVar31 = local_388;
            local_3d0 = puVar23;
            do {
              plVar15 = puVar31 + 0x1e;
              uVar11 = *(uint *)(puVar31 + 0x1f);
              pdVar26 = (double *)puVar31[0x1e];
              if ((int)uVar11 < 1) {
LAB_146b5f72d:
                local_b8 = 0;
                local_b0 = 0;
                local_d8 = (code ******)0x0;
                uStack_d0 = (longlong ******)0x0;
                local_ac = 0xffffffff00000080;
                local_a4 = 0;
                local_98 = 0;
                local_90 = 0;
                if (uVar11 != 0) {
                  lVar14 = 0;
                  do {
                    puVar23 = (undefined8 *)((longlong)pdVar26 + lVar14 + 8);
                    local_128 = (longlong ******)*puVar23;
                    uStack_120 = (code *)puVar23[1];
                    FUN_146b753dc(&local_d8,&local_168,&local_128);
                    lVar14 = lVar14 + 0x18;
                  } while ((longlong)(int)uVar11 * 0x18 != lVar14);
                }
                local_118 = (longlong *)0x0;
                local_108 = &PTR_LAB_149f330b0;
                local_128 = (longlong ******)FUN_14294ac50;
                local_100 = puVar31;
                (**(code **)(*(longlong *)*puVar31 + 0x28))((longlong *)*puVar31,&local_358,100);
                local_158 = (undefined ***)0x0;
                local_148 = &PTR_LAB_149f330d0;
                local_168 = FUN_14294acd0;
                local_140 = (longlong ******)&local_d8;
                local_138 = puVar31;
                FUN_146b712e6(&local_358);
                puVar23 = local_3d0;
                dVar2 = (double)puVar31[9];
                if ((longlong)*(int *)(puVar31 + 0x1f) < 1) {
                  uVar13 = 0;
                  uVar32 = 0;
                }
                else {
                  uVar4 = *(undefined8 *)
                           (*plVar15 + -0x18 + (longlong)*(int *)(puVar31 + 0x1f) * 0x18);
                  uVar13 = (undefined4)uVar4;
                  uVar32 = (undefined4)((ulonglong)uVar4 >> 0x20);
                }
                if ((longlong)local_350 != 0) {
                  if ((double)CONCAT44(uVar32,uVar13) <= dVar2) {
                    uVar13 = SUB84(dVar2,0);
                    uVar32 = (undefined4)((ulonglong)dVar2 >> 0x20);
                  }
                  dVar2 = (double)CONCAT44(uVar32,uVar13);
                  lVar14 = (longlong)local_350 << 4;
                  puVar27 = local_358;
                  do {
                    lVar24 = (**(code **)(*(longlong *)puVar31[1] + 0x218))();
                    lVar24 = *(longlong *)(lVar24 + 0x38);
                    dVar3 = (double)puVar31[4];
                    iVar29 = *(int *)(puVar31 + 0x1f);
                    *(uint *)(puVar31 + 0x1f) = iVar29 + 1U;
                    if (*(uint *)((longlong)puVar31 + 0xfc) < iVar29 + 1U) {
                      FUN_146b75514(plVar15);
                    }
                    dVar2 = dVar2 + (double)lVar24 / dVar3;
                    lVar24 = *plVar15;
                    *(double *)(lVar24 + (longlong)iVar29 * 0x18) = dVar2;
                    uVar4 = puVar27[1];
                    puVar1 = (undefined8 *)(lVar24 + 8 + (longlong)iVar29 * 0x18);
                    *puVar1 = *puVar27;
                    puVar1[1] = uVar4;
                    puVar27 = puVar27 + 2;
                    lVar14 = lVar14 + -0x10;
                  } while (lVar14 != 0);
                }
                if (local_168 != (code *)0x0) {
                  pppuVar18 = local_158;
                  if (local_158 == (undefined ***)0x0) {
                    pppuVar18 = &local_148;
                  }
                  (*(code *)(*pppuVar18)[2])();
                }
                if (local_358 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_128 != (longlong ******)0x0) {
                  plVar15 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar15 = &local_108;
                  }
                  (**(code **)(*plVar15 + 0x10))();
                }
                local_90 = 0;
                if (local_98 != 0) {
                  FUN_1400020a8();
                }
                FUN_140149fc2(&local_d8);
              }
              else {
                if (*pdVar26 <= (double)puVar31[9]) {
                  do {
                    iVar29 = 0;
                    FUN_1457adc9c(puVar31 + 10,&local_d8,pdVar26 + 1,0);
                    if (*(int *)(puVar31 + 0x1f) + -1 != 0) {
                      memmove((void *)puVar31[0x1e],(void *)((longlong)puVar31[0x1e] + 0x18),
                              (longlong)(*(int *)(puVar31 + 0x1f) + -1) * 0x18);
                      iVar29 = *(int *)(puVar31 + 0x1f) + -1;
                    }
                    *(int *)(puVar31 + 0x1f) = iVar29;
                    FUN_146b7532e(plVar15);
                    uVar11 = *(uint *)(puVar31 + 0x1f);
                    pdVar26 = (double *)puVar31[0x1e];
                    if ((int)uVar11 < 1) goto LAB_146b5f72d;
                  } while (*pdVar26 <= (double)puVar31[9]);
                }
                if (uVar11 < 0x32) goto LAB_146b5f72d;
              }
              puVar31 = puVar31 + 0x20;
            } while (puVar31 != puVar23);
          }
          lVar24 = local_3d8;
          piVar16 = (int *)(**(code **)(*(longlong *)*local_3f8 + 0x218))
                                     ((longlong *)*local_3f8,local_3d8);
          if ((longlong)(int)uStack_380 != 0) {
            puVar31 = local_388 + (longlong)(int)uStack_380 * 0x20;
            puVar23 = local_388;
            do {
              puVar27 = puVar23 + 10;
              uVar13 = FUN_1447addd0(piVar16,0x10);
              iVar29 = FUN_140f5cb3a(puVar27,uVar13,piVar16);
              if (iVar29 == -1) {
                uVar13 = FUN_1447addd0(piVar16,0x10);
                iVar29 = FUN_140f5cb3a(puVar23 + 0x14,uVar13,piVar16);
                if (iVar29 == -1) {
                  uVar4 = puVar23[2];
                  uVar13 = FUN_1447addd0(piVar16,0x10);
                  iVar29 = FUN_140f5cb3a(uVar4,uVar13,piVar16);
                  if (iVar29 == -1) {
                    if (0 < (longlong)*(int *)(puVar23 + 0x1f)) {
                      lVar14 = puVar23[0x1e];
                      iVar29 = 1;
                      lVar24 = 0;
                      do {
                        if ((((*piVar16 == *(int *)(lVar14 + 8 + lVar24)) &&
                             (piVar16[1] == *(int *)(lVar14 + 0xc + lVar24))) &&
                            (piVar16[2] == *(int *)(lVar14 + 0x10 + lVar24))) &&
                           (piVar16[3] == *(int *)(lVar14 + 0x14 + lVar24))) {
                          puVar23[9] = *(undefined8 *)(lVar14 + lVar24);
                          FUN_1457adc9c(puVar27,&local_d8,(undefined8 *)(lVar14 + lVar24) + 1,0);
                          iVar12 = *(int *)(puVar23 + 0x1f);
                          if (iVar12 - iVar29 != 0) {
                            memmove((void *)(puVar23[0x1e] + lVar24),
                                    (void *)(puVar23[0x1e] + lVar24 + 0x18),
                                    (longlong)(iVar12 - iVar29) * 0x18);
                            iVar12 = *(int *)(puVar23 + 0x1f);
                          }
                          *(int *)(puVar23 + 0x1f) = iVar12 + -1;
                          FUN_146b7532e(puVar23 + 0x1e);
                          break;
                        }
                        lVar24 = lVar24 + 0x18;
                        iVar29 = iVar29 + 1;
                      } while ((longlong)*(int *)(puVar23 + 0x1f) * 0x18 != lVar24);
                    }
                    goto LAB_146b5fa02;
                  }
                  uVar17 = (ulonglong)(uint)piVar16[0xc];
                }
                else {
                  uVar17 = *(ulonglong *)(piVar16 + 0xe);
                }
                puVar23[9] = (double)(longlong)uVar17 / (double)puVar23[5] + (double)puVar23[9];
                FUN_1457adc9c(puVar27,&local_d8,piVar16,0);
              }
LAB_146b5fa02:
              puVar23 = puVar23 + 0x20;
            } while (puVar23 != puVar31);
            lVar24 = local_3d8;
            if ((longlong)(int)uStack_380 != 0) {
              lVar14 = 0;
              do {
                *(double *)((longlong)local_388 + lVar14 + 0x48) =
                     (double)*(uint *)(local_3d8 + 0x14) /
                     *(double *)((longlong)local_388 + lVar14 + 0x30) +
                     *(double *)((longlong)local_388 + lVar14 + 0x48);
                lVar14 = lVar14 + 0x100;
              } while ((longlong)(int)uStack_380 * 0x100 != lVar14);
            }
          }
          (**(code **)(*local_3e8 + 0x30))();
          lVar24 = lVar24 + 0x18;
        } while (lVar24 != local_3b8);
      }
      pppcVar10 = local_3c0;
      iVar29 = *(int *)(local_3c0 + 1);
      ppplVar20 = (longlong ***)&DAT_149dfb77a;
      if (iVar29 != 0) {
        ppplVar20 = (longlong ***)*local_3c0;
      }
      iVar12 = iVar29 + -1;
      if (iVar29 == 0) {
        iVar12 = 0;
      }
      uVar13 = FUN_144a49b4a(iVar12,ppplVar20);
      iVar29 = FUN_1456cf568(&local_258,uVar13,pppcVar10);
      if (iVar29 != -1) {
        lVar14 = (**(code **)(*(longlong *)*local_3f0 + 0x1f8))((longlong *)*local_3f0,pppcVar10);
        if ((longlong)(int)uStack_380 != 0) {
          puVar31 = local_388 + (longlong)(int)uStack_380 * 0x20;
          puVar23 = local_388;
          do {
            if (*(int *)(puVar23 + 3) == 1) {
              local_b8 = 0;
              local_b0 = 0;
              local_d8 = (code ******)0x0;
              uStack_d0 = (longlong ******)0x0;
              local_ac = 0xffffffff00000080;
              local_a4 = 0;
              local_98 = 0;
              local_90 = 0;
              if ((longlong)*(int *)(lVar14 + 0x50) != 0) {
                lVar24 = *(longlong *)(lVar14 + 0x48);
                lVar30 = (longlong)*(int *)(lVar14 + 0x50) * 0x18;
                do {
                  FUN_1457adc9c(&local_d8,&local_128,lVar24,0);
                  lVar24 = lVar24 + 0x18;
                  lVar30 = lVar30 + -0x18;
                } while (lVar30 != 0);
              }
              FUN_146b35124(&local_d8,&local_128,puVar23[2]);
              FUN_14681b5ea(&local_d8,&local_128);
              local_e0 = 0;
              if (local_e8 != 0) {
                FUN_1400020a8();
              }
              FUN_140149fc2(&local_128);
              local_118 = (longlong *)0x0;
              local_108 = &PTR_LAB_149f330f0;
              local_128 = (longlong ******)FUN_14294ada2;
              local_100 = puVar23;
              local_f8 = (longlong ******)&local_d8;
              (**(code **)(*(longlong *)*puVar23 + 0x20))
                        ((longlong *)*puVar23,&local_168,0x7fffffff);
              if ((longlong)(int)local_160 != 0) {
                lVar24 = (longlong)(int)local_160 << 4;
                pcVar28 = local_168;
                do {
                  lVar30 = (**(code **)(*(longlong *)puVar23[1] + 0x218))
                                     ((longlong *)puVar23[1],pcVar28);
                  puVar23[9] = (double)*(uint *)(lVar30 + 0x30) / (double)puVar23[7] +
                               (double)puVar23[9];
                  lVar30 = (**(code **)(*(longlong *)puVar23[1] + 0x218))
                                     ((longlong *)puVar23[1],pcVar28);
                  puVar23[9] = (double)*(longlong *)(lVar30 + 0x38) / (double)puVar23[7] +
                               (double)puVar23[9];
                  FUN_1457adc9c(puVar23 + 0x14,&local_358,pcVar28,0);
                  pcVar28 = pcVar28 + 0x10;
                  lVar24 = lVar24 + -0x10;
                } while (lVar24 != 0);
              }
              if (local_168 != (code *)0x0) {
                FUN_1400020a8(local_168);
              }
              if (local_128 != (longlong ******)0x0) {
                plVar15 = local_118;
                if (local_118 == (longlong *)0x0) {
                  plVar15 = &local_108;
                }
                (**(code **)(*plVar15 + 0x10))();
              }
              local_90 = 0;
              if (local_98 != 0) {
                FUN_1400020a8();
              }
              FUN_140149fc2();
            }
            puVar23 = puVar23 + 0x20;
          } while (puVar23 != puVar31);
        }
      }
      local_398 = local_398 & ~local_3a8._4_4_;
      FUN_1449c0562(&local_3a8);
      iVar29 = local_3dc;
    } while ((longlong *****)local_3b0 != &local_2f8 ||
             (puStack_3a0 != local_2e8 || iStack_394 != local_3dc));
  }
  puVar23 = local_388;
  plVar15 = local_3c8;
  *local_3c8 = 0;
  local_3c8[1] = 0;
  lVar14 = (longlong)(int)uStack_380;
  if (lVar14 == 0) {
    uVar17 = 0;
  }
  else {
    lVar24 = 0;
    do {
      uVar4 = *(undefined8 *)((longlong)puVar23 + lVar24 + 0x48);
      iVar29 = (int)plVar15[1];
      *(uint *)(plVar15 + 1) = iVar29 + 1U;
      if (*(uint *)((longlong)plVar15 + 0xc) < iVar29 + 1U) {
        FUN_144941252(plVar15,iVar29);
      }
      *(undefined8 *)(*plVar15 + (longlong)iVar29 * 8) = uVar4;
      lVar24 = lVar24 + 0x100;
    } while (lVar14 * 0x100 != lVar24);
    uVar17 = uStack_380 & 0xffffffff;
  }
  FUN_14294c2fb(local_388,uVar17);
  if (local_388 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_3e8 != (longlong *)0x0) {
    (**(code **)*local_3e8)(local_3e8,1);
  }
  if (local_368._0_8_ != 0) {
    FUN_1400020a8();
  }
  local_300 = 0;
  if (local_308 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_348);
  local_2b0 = 0;
  if (local_2b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_2f8);
  local_260 = 0;
  if (local_268 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_2a8);
  local_210 = 0;
  if (local_218 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_258);
  local_1c0 = 0;
  if (local_1c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_208);
  local_170 = 0;
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_1b8);
  if ((local_80 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar15;
}



// FUNCTION 146b600f6 FUN_146b600f6 body=127 status=ok
// SIG undefined FUN_146b600f6(void)

undefined8 FUN_146b600f6(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14001cc68(0x30,0x10);
  local_28 = *param_1;
  *param_1 = 0;
  local_20 = (undefined4)param_1[1];
  local_1c = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  FUN_146b71880(uVar1);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b60176 FUN_146b60176 body=458 status=ok
// SIG undefined FUN_146b60176(void)

undefined8 * FUN_146b60176(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_149f30e88;
  FUN_146b60340(param_1 + 1);
  uVar3 = FUN_1401cb356();
  param_1[0x1d] = uVar3;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  FUN_1446efa72(param_1 + 0x1e,0,3,0x10);
  *(undefined4 *)(param_1 + 0x1f) = 3;
  puVar1 = (undefined8 *)param_1[0x1e];
  *puVar1 = &PTR_LAB_149f34060;
  uVar3 = FUN_144a3f946();
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_149f33580;
  puVar1[3] = param_1;
  puVar1[4] = FUN_146b6050e;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  uVar3 = FUN_146b30882();
  param_1[0x22] = uVar3;
  uVar3 = FUN_146b33530();
  param_1[0x23] = uVar3;
  uVar3 = FUN_146b33584();
  param_1[0x24] = uVar3;
  uVar3 = FUN_146b33564();
  param_1[0x25] = uVar3;
  uVar3 = FUN_146b8bea8(0);
  param_1[0x26] = uVar3;
  uVar3 = FUN_146b91144(param_1[0x25],param_1[0x24],uVar3);
  param_1[0x27] = uVar3;
  uVar3 = FUN_146b89276(param_1[0x23],param_1[0x22],uVar3,param_1[0x26]);
  param_1[0x28] = uVar3;
  uVar3 = FUN_146b30862();
  param_1[0x29] = uVar3;
  *(undefined4 *)(param_1 + 0x2a) = 1;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffffffffffff;
  FUN_146b7c4de(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0x2e) = 0;
  FUN_146b7c4de(param_1 + 0x2f);
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  lVar2 = param_1[0x2d];
  param_1[0x32] = param_1[0x2c];
  param_1[0x33] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x31) = 1;
  lVar2 = param_1[0x30];
  param_1[0x34] = param_1[0x2f];
  param_1[0x35] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 146b60340 FUN_146b60340 body=461 status=ok
// SIG undefined FUN_146b60340(void)

undefined8 * FUN_146b60340(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_1410b2022(param_1 + 4,param_2 + 4);
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  FUN_1410b2022(param_1 + 0xe,param_2 + 0xe);
  param_1[0x18] = 0;
  iVar1 = *(int *)(param_2 + 0x19);
  uVar3 = param_2[0x18];
  *(int *)(param_1 + 0x19) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  }
  else {
    FUN_146b755a8(param_1 + 0x18,iVar1,0);
    FUN_146b7561b(param_1[0x18],uVar3,iVar1);
  }
  param_1[0x1a] = 0;
  iVar1 = *(int *)(param_2 + 0x1b);
  pvVar2 = (void *)param_2[0x1a];
  *(int *)(param_1 + 0x1b) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1a,iVar1,0);
    memcpy((void *)param_1[0x1a],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 146b6050e FUN_146b6050e body=734 status=ok
// SIG undefined FUN_146b6050e(void)

void FUN_146b6050e(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *plStack_c0;
  undefined1 local_b8;
  longlong local_a8 [2];
  longlong *local_98;
  longlong local_88 [4];
  code *local_68;
  undefined ***local_58;
  undefined **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0x154) == param_2) {
    plVar11 = (longlong *)(param_1 + 0x160);
  }
  else {
    if (*(int *)(param_1 + 0x158) != param_2) goto LAB_146b607b5;
    plVar11 = (longlong *)(param_1 + 0x178);
  }
  if (plVar11 != (longlong *)0x0) {
    cVar6 = (**(code **)(*(longlong *)*param_3 + 0x10))();
    if (cVar6 == '\0') {
      lVar4 = *plVar11;
      *(undefined8 *)(lVar4 + 0x80) = 0;
      *(undefined8 *)(lVar4 + 0x88) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
    }
    local_a8[0] = 0;
    local_98 = (longlong *)0x0;
    uStack_40 = *param_3;
    plVar3 = (longlong *)param_3[1];
    if (plVar3 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_38 = plVar3;
    }
    local_48 = &PTR_LAB_149f33610;
    local_58 = (undefined ***)0x0;
    local_68 = FUN_14294ce26;
    uStack_30 = plVar11;
    FUN_14170b918(&local_c8,local_a8);
    plVar11 = plStack_c0;
    local_b8 = 1;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
      UNLOCK();
    }
    cVar6 = FUN_144a53f06();
    pcVar5 = local_68;
    plVar10 = DAT_14c8442c0;
    if (cVar6 == '\0') {
      pppuVar9 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar9 = &local_48;
      }
      uVar8 = (*(code *)(*pppuVar9)[1])();
      (*pcVar5)(uVar8);
      *(undefined4 *)(local_c8 + 0x80) = 0;
      FUN_140b576f0();
    }
    else {
      puVar7 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      puVar7[1] = 0;
      *puVar7 = TAsyncQueuedWork<void>::vftable;
      puVar7[2] = local_68;
      puVar7[4] = local_58;
      local_58 = (undefined ***)0x0;
      *(undefined4 *)(puVar7 + 8) = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar7 + 0x44) = local_38._4_4_;
      *(undefined4 *)(puVar7 + 9) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_30._4_4_;
      puVar7[6] = local_48;
      puVar7[7] = uStack_40;
      if (local_68 != (code *)0x0) {
        local_68 = (code *)0x0;
      }
      puVar7[10] = local_c8;
      puVar7[0xb] = plStack_c0;
      local_c8 = 0;
      plStack_c0 = (longlong *)0x0;
      *(undefined1 *)(puVar7 + 0xc) = 0;
      (**(code **)(*plVar10 + 0x18))(plVar10,puVar7,3);
    }
    plVar10 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    if (local_68 != (code *)0x0) {
      pppuVar9 = &local_48;
      if (local_58 != (undefined ***)0x0) {
        pppuVar9 = local_58;
      }
      (*(code *)(*pppuVar9)[2])(pppuVar9);
    }
    if (local_a8[0] != 0) {
      plVar10 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar10 = local_88;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar11 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar3 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
  }
LAB_146b607b5:
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b60802 FUN_146b60802 body=401 status=ok
// SIG undefined FUN_146b60802(void)

void FUN_146b60802(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_149f30e88;
  plVar3 = (longlong *)param_1[0x35];
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
  }
  plVar3 = (longlong *)param_1[0x33];
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
  }
  plVar3 = (longlong *)param_1[0x30];
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
  }
  plVar3 = (longlong *)param_1[0x2d];
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
  }
  puVar4 = (undefined8 *)param_1[0x29];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[0x28];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[0x27];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[0x26];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[0x25];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[0x24];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[0x23];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[0x22];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  FUN_1449db362(param_1 + 0x20);
  FUN_1449db362(param_1 + 0x1e);
  FUN_146b60994(param_1 + 1);
  return;
}



// FUNCTION 146b60994 FUN_146b60994 body=174 status=ok
// SIG undefined FUN_146b60994(void)

void FUN_146b60994(longlong *param_1)

{
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_146b7c2fd(param_1[0x18],(int)param_1[0x19]);
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b60a42 FUN_146b60a42 body=1215 status=ok
// SIG undefined FUN_146b60a42(void)

ulonglong FUN_146b60a42(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong *plVar7;
  LARGE_INTEGER LVar8;
  char cVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined ***pppuVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined1 local_160;
  undefined2 *local_150;
  int local_148;
  longlong local_140;
  longlong *local_138;
  undefined1 local_130;
  longlong local_128;
  longlong *plStack_120;
  undefined1 local_118;
  longlong local_108;
  longlong *local_f8;
  longlong local_e8 [4];
  LARGE_INTEGER local_c8 [2];
  undefined ***local_b8;
  undefined **local_a8;
  longlong lStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_141054386();
  uVar11 = (**(code **)(**(longlong **)(param_1 + 0x140) + 8))
                     (*(longlong **)(param_1 + 0x140),param_1 + 8,param_1 + 0xf0,param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x154) = uVar11;
  uVar11 = (**(code **)(**(longlong **)(param_1 + 0x140) + 8))
                     (*(longlong **)(param_1 + 0x140),param_1 + 0x18,param_1 + 0xf0,param_1 + 0x100)
  ;
  *(undefined4 *)(param_1 + 0x158) = uVar11;
  local_108 = 0;
  local_f8 = (longlong *)0x0;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_LAB_149f335f0;
  local_c8[0].QuadPart = (LONGLONG)FUN_14294c468;
  lStack_a0 = param_1;
  FUN_1405d8960(&local_128);
  plVar7 = plStack_120;
  lVar6 = local_128;
  local_118 = 1;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
    UNLOCK();
  }
  cVar9 = FUN_144a53f06();
  LVar8 = local_c8[0];
  if (cVar9 == '\0') {
    pppuVar14 = local_b8;
    if (local_b8 == (undefined ***)0x0) {
      pppuVar14 = &local_a8;
    }
    uVar12 = (*(code *)(*pppuVar14)[1])();
    uVar10 = (*(code *)LVar8)(uVar12);
    *(undefined1 *)(local_128 + 0x80) = uVar10;
    FUN_140b576f0();
  }
  else {
    FUN_145c3b830(&local_140);
    puVar13 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    local_130 = 1;
    if (local_138 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_138 + 1) = (int)local_138[1] + 1;
      UNLOCK();
    }
    *puVar13 = TAsyncRunnable<bool>::vftable;
    ((LARGE_INTEGER *)(puVar13 + 2))->QuadPart = (LONGLONG)local_c8[0];
    puVar13[4] = local_b8;
    local_b8 = (undefined ***)0x0;
    *(undefined4 *)(puVar13 + 8) = local_98;
    *(undefined4 *)((longlong)puVar13 + 0x44) = uStack_94;
    *(undefined4 *)(puVar13 + 9) = uStack_90;
    *(undefined4 *)((longlong)puVar13 + 0x4c) = uStack_8c;
    puVar13[6] = local_a8;
    puVar13[7] = lStack_a0;
    if ((code *)local_c8[0].QuadPart != (code *)0x0) {
      local_c8[0].QuadPart = 0;
    }
    puVar13[10] = local_128;
    puVar13[0xb] = plStack_120;
    local_128 = 0;
    plStack_120 = (longlong *)0x0;
    *(undefined1 *)(puVar13 + 0xc) = local_118;
    puVar13[0xd] = local_140;
    puVar13[0xe] = local_138;
    uVar11 = FUN_146268020();
    FUN_140002266(&local_150,L"TAsync %d",uVar11);
    puVar16 = local_150;
    if (local_148 == 0) {
      puVar16 = &DAT_149dfb77a;
    }
    local_160 = 0;
    local_168 = 0xffffffffffffffff;
    uVar12 = FUN_1411b1052(puVar13,puVar16,0,0);
    *(undefined8 *)(local_140 + 0x80) = uVar12;
    FUN_140b576f0();
    if (local_150 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_138 != (longlong *)0x0) {
      LOCK();
      plVar15 = local_138 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*local_138)(local_138);
        LOCK();
        piVar2 = (int *)((longlong)local_138 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_138 + 0x10))(local_138);
        }
      }
    }
  }
  plVar15 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_120 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if ((code *)local_c8[0].QuadPart != (code *)0x0) {
    pppuVar14 = &local_a8;
    if (local_b8 != (undefined ***)0x0) {
      pppuVar14 = local_b8;
    }
    (*(code *)(*pppuVar14)[2])(pppuVar14);
  }
  if (local_108 != 0) {
    plVar15 = local_f8;
    if (local_f8 == (longlong *)0x0) {
      plVar15 = local_e8;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  QueryPerformanceCounter(local_c8);
  if (*(int *)(param_1 + 0x150) != 0) {
    dVar4 = 0.0;
    dVar5 = (double)local_c8[0].QuadPart * DAT_14c83f420 + 16777216.0;
    do {
      DAT_14c872be0 = DAT_14c872be0 + 1;
      (**(code **)(*DAT_14c82b500 + 0x48))(DAT_14c82b500,1);
      uVar12 = FUN_1401cb356();
      FUN_142746dae(uVar12,(float)dVar4);
      uVar12 = FUN_144a82cde();
      FUN_1400e4168(uVar12,0);
      QueryPerformanceCounter(local_c8);
      dVar4 = (dVar5 - ((double)local_c8[0].QuadPart * DAT_14c83f420 + 16777216.0)) +
              0.009999999776482582;
      dVar3 = 0.0;
      if (0.0 <= dVar4) {
        dVar3 = dVar4;
      }
      FUN_14000f986((float)dVar3);
      QueryPerformanceCounter(local_c8);
      dVar3 = (double)local_c8[0].QuadPart * DAT_14c83f420 + 16777216.0;
      dVar4 = dVar3 - dVar5;
      dVar5 = dVar3;
    } while (*(int *)(param_1 + 0x150) != 0);
  }
  uVar12 = FUN_144a82cde();
  FUN_1400e4168(uVar12,0);
  while ((*(byte *)(lVar6 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar6 + 0x70) + 0x20))(*(longlong **)(lVar6 + 0x70),0xffffffff,0);
  }
  uVar10 = *(undefined1 *)(lVar6 + 0x80);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar7 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)local_c8 >> 8),uVar10) & 0xffffffff;
}



// FUNCTION 146b60f02 FUN_146b60f02 body=63 status=ok
// SIG undefined FUN_146b60f02(void)

longlong FUN_146b60f02(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146b7c978(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_146b7c95e(lVar2);
  return lVar2;
}



// FUNCTION 146b60f42 FUN_146b60f42 body=134 status=ok
// SIG undefined FUN_146b60f42(void)

void FUN_146b60f42(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be();
  local_1a = 0x7b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 0x20) = 2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b60fca FUN_146b60fca body=122 status=ok
// SIG undefined FUN_146b60fca(void)

void FUN_146b60fca(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be();
  local_28 = *param_2;
  local_20 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    local_20 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b61046 FUN_146b61046 body=179 status=ok
// SIG undefined FUN_146b61046(void)

void FUN_146b61046(longlong param_1,int param_2)

{
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  ulonglong *local_68;
  undefined1 local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_146b551be(param_1,L"AppId");
  local_78 = local_58;
  local_60 = 0;
  local_68 = &local_18;
  local_70 = local_78;
  FUN_140212e80(&local_78,L"%lld",(longlong)param_2);
  local_88 = local_78;
  local_80 = (undefined4)((ulonglong)((longlong)local_70 - (longlong)local_78) >> 1);
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  FUN_144724f3c(&local_78);
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b610fa FUN_146b610fa body=182 status=ok
// SIG undefined FUN_146b610fa(void)

void FUN_146b610fa(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  ulonglong *local_70;
  undefined1 local_68;
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_146b551be(param_1,L"DownloadSize");
  local_80 = local_60;
  local_68 = 0;
  local_70 = &local_20;
  local_78 = local_80;
  FUN_140212e80(&local_80,L"%lld",param_2);
  local_90 = local_80;
  local_88 = (undefined4)((ulonglong)((longlong)local_78 - (longlong)local_80) >> 1);
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  FUN_144724f3c(&local_80);
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b611b2 FUN_146b611b2 body=182 status=ok
// SIG undefined FUN_146b611b2(void)

void FUN_146b611b2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  ulonglong *local_70;
  undefined1 local_68;
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_146b551be(param_1,L"BuildSize");
  local_80 = local_60;
  local_68 = 0;
  local_70 = &local_20;
  local_78 = local_80;
  FUN_140212e80(&local_80,L"%lld",param_2);
  local_90 = local_80;
  local_88 = (undefined4)((ulonglong)((longlong)local_78 - (longlong)local_80) >> 1);
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  FUN_144724f3c(&local_80);
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6126a FUN_146b6126a body=141 status=ok
// SIG undefined FUN_146b6126a(void)

void FUN_146b6126a(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be(param_1,L"IndividualTagDownloadSizes");
  local_1a = 0x7b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 0x20) = 2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b612f8 FUN_146b612f8 body=303 status=ok
// SIG undefined FUN_146b612f8(void)

void FUN_146b612f8(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined4 local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  ulonglong *local_78;
  undefined1 local_70;
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_88 = (undefined1 *)CONCAT62(local_88._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_88,2);
  }
  local_88 = (undefined1 *)*param_2;
  iVar1 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar1 = 0;
  }
  local_80 = (undefined1 *)CONCAT44(local_80._4_4_,iVar1);
  (**(code **)(*param_1 + 0x18))(param_1);
  local_98 = (undefined1 *)CONCAT62(local_98._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_98,2);
  local_88 = local_68;
  local_70 = 0;
  local_78 = &local_28;
  local_80 = local_88;
  FUN_140212e80(&local_88,L"%lld",param_3);
  local_98 = local_88;
  local_90 = (undefined4)((ulonglong)((longlong)local_80 - (longlong)local_88) >> 1);
  FUN_145d3640c(param_1[1],&local_98);
  FUN_144724f3c(&local_88);
  *(undefined4 *)(param_1 + 4) = 8;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b61428 FUN_146b61428 body=141 status=ok
// SIG undefined FUN_146b61428(void)

void FUN_146b61428(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b7ca0c(param_1,"CompareTagSetDownloadSizes");
  local_1a = 0x7b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 0x20) = 2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b614b6 FUN_146b614b6 body=134 status=ok
// SIG undefined FUN_146b614b6(void)

void FUN_146b614b6(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be();
  local_1a = 0x7b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 0x20) = 2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6153e FUN_146b6153e body=141 status=ok
// SIG undefined FUN_146b6153e(void)

void FUN_146b6153e(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b7ca0c(param_1,"CompareTagSetBuildSizes");
  local_1a = 0x7b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 0x20) = 2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b615cc FUN_146b615cc body=141 status=ok
// SIG undefined FUN_146b615cc(void)

void FUN_146b615cc(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be(param_1,L"NewFilePaths");
  local_1a = 0x5b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x20) = 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6165a FUN_146b6165a body=141 status=ok
// SIG undefined FUN_146b6165a(void)

void FUN_146b6165a(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be(param_1,L"UnchangedFilePaths");
  local_1a = 0x5b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x20) = 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b616e8 FUN_146b616e8 body=141 status=ok
// SIG undefined FUN_146b616e8(void)

void FUN_146b616e8(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be(param_1,L"NewChunkPaths");
  local_1a = 0x5b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x20) = 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b61776 FUN_146b61776 body=182 status=ok
// SIG undefined FUN_146b61776(void)

void FUN_146b61776(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  ulonglong *local_70;
  undefined1 local_68;
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_146b551be(param_1,L"TotalChunkSize");
  local_80 = local_60;
  local_68 = 0;
  local_70 = &local_20;
  local_78 = local_80;
  FUN_140212e80(&local_80,L"%lld",param_2);
  local_90 = local_80;
  local_88 = (undefined4)((ulonglong)((longlong)local_78 - (longlong)local_80) >> 1);
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  FUN_144724f3c(&local_80);
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6182e FUN_146b6182e body=182 status=ok
// SIG undefined FUN_146b6182e(void)

void FUN_146b6182e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  ulonglong *local_70;
  undefined1 local_68;
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_146b551be(param_1,L"DeltaDownloadSize");
  local_80 = local_60;
  local_68 = 0;
  local_70 = &local_20;
  local_78 = local_80;
  FUN_140212e80(&local_80,L"%lld",param_2);
  local_90 = local_80;
  local_88 = (undefined4)((ulonglong)((longlong)local_78 - (longlong)local_80) >> 1);
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  FUN_144724f3c(&local_80);
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b618e6 FUN_146b618e6 body=182 status=ok
// SIG undefined FUN_146b618e6(void)

void FUN_146b618e6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  ulonglong *local_70;
  undefined1 local_68;
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_146b551be(param_1,L"TempDiskSpaceReq");
  local_80 = local_60;
  local_68 = 0;
  local_70 = &local_20;
  local_78 = local_80;
  FUN_140212e80(&local_80,L"%lld",param_2);
  local_90 = local_80;
  local_88 = (undefined4)((ulonglong)((longlong)local_78 - (longlong)local_80) >> 1);
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  FUN_144724f3c(&local_80);
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6199e FUN_146b6199e body=141 status=ok
// SIG undefined FUN_146b6199e(void)

void FUN_146b6199e(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be(param_1,L"CompareTagSetTempDiskSpaceReqs");
  local_1a = 0x7b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 6;
  *(undefined4 *)(param_1 + 0x20) = 2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b61a2c FUN_146b61a2c body=141 status=ok
// SIG undefined FUN_146b61a2c(void)

void FUN_146b61a2c(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be(param_1,L"InstallTimeCoefficients");
  local_1a = 0x5b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x20) = 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b61aba FUN_146b61aba body=39 status=ok
// SIG undefined FUN_146b61aba(void)

void FUN_146b61aba(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x1b0,0x10);
  FUN_146b60176(uVar1,param_1);
  return;
}



// FUNCTION 146b61ae1 FUN_146b61ae1 body=138 status=ok
// SIG undefined FUN_146b61ae1(void)

bool FUN_146b61ae1(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48 [2];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)(*param_1 + 0x28))();
  local_48[0] = 0x1800000001;
  local_38 = 0;
  uStack_30 = 0;
  FUN_146b447fa(param_1,local_48);
  iVar1 = (int)local_48[0];
  (**(code **)(*param_1 + 0x1a0))(param_1,uVar2);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b61b6c FUN_146b61b6c body=245 status=ok
// SIG undefined FUN_146b61b6c(void)

undefined8 * FUN_146b61b6c(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_14001cc68(0x2b8,0x10);
  FUN_146b37170(plVar3);
  *param_1 = plVar3;
  local_38 = 0;
  uStack_30 = 0;
  (**(code **)(*param_2 + 0x1a0))(param_2,0);
  iVar2 = (**(code **)(*param_2 + 0x30))(param_2);
  uStack_30 = CONCAT44(uStack_30._4_4_,iVar2);
  if (iVar2 != 0) {
    FUN_1447403be(&local_38,0);
  }
  uVar4 = (**(code **)(*param_2 + 0x30))(param_2);
  (**(code **)(*param_2 + 0x170))(param_2,local_38,uVar4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
    cVar1 = (**(code **)(*plVar3 + 0x160))(plVar3,&local_38);
    if ((plVar3 == (longlong *)0x0) || (cVar1 != '\0')) goto LAB_146b61c31;
  }
  else if (plVar3 == (longlong *)0x0) goto LAB_146b61c31;
  *param_1 = 0;
  (**(code **)*plVar3)(plVar3,1);
LAB_146b61c31:
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b61c62 FUN_146b61c62 body=166 status=ok
// SIG undefined FUN_146b61c62(void)

undefined8 * FUN_146b61c62(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 146b61d08 FUN_146b61d08 body=91 status=ok
// SIG undefined FUN_146b61d08(void)

void FUN_146b61d08(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f311c0;
  puVar1 = (undefined8 *)param_1[8];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b61d64 FUN_146b61d64 body=149 status=ok
// SIG undefined FUN_146b61d64(void)

undefined4 FUN_146b61d64(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x10) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 8);
  }
  uVar1 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x48))
            (*(longlong **)(param_1 + 0x40),&local_30,puVar2,0);
  if (local_30 != (undefined8 *)0x0) {
    uVar1 = FUN_146b61dfa(param_1,local_30,param_2);
    if (local_30 != (undefined8 *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b61dfa FUN_146b61dfa body=62 status=ok
// SIG undefined FUN_146b61dfa(void)

void FUN_146b61dfa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_146b61ae1(param_2);
  if (cVar1 != '\0') {
    FUN_14293f8b0();
    return;
  }
  FUN_14293fbaa(param_1,param_2,param_3);
  return;
}



// FUNCTION 146b61e38 FUN_146b61e38 body=85 status=ok
// SIG undefined FUN_146b61e38(void)

undefined8 * FUN_146b61e38(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar1 = &PTR_FUN_149f311c0;
  FUN_146b61c62(puVar1 + 1,param_1);
  FUN_140bee914(puVar1 + 6,puVar1 + 1);
  uVar2 = FUN_146b30882();
  puVar1[8] = uVar2;
  return puVar1;
}



// FUNCTION 146b61e8e FUN_146b61e8e body=1781 status=ok
// SIG undefined FUN_146b61e8e(void)

undefined8 *
FUN_146b61e8e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,longlong *param_7,longlong *param_8)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  char cVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined ***pppuVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined1 local_180;
  undefined2 *local_170;
  int local_168;
  longlong local_160;
  longlong *local_158;
  undefined1 local_150;
  longlong local_148;
  longlong *plStack_140;
  undefined1 local_138;
  longlong local_128;
  longlong *local_118;
  longlong local_108 [4];
  longlong local_e8;
  longlong *local_d8;
  longlong local_c8 [4];
  code *local_a8;
  undefined ***local_98;
  undefined **local_88;
  undefined8 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *param_1 = &PTR_FUN_149f311f8;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[6] = 0;
  param_1[6] = *param_7;
  *param_7 = 0;
  *(int *)(param_1 + 7) = (int)param_7[1];
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_7 + 0xc);
  param_7[1] = 0;
  param_1[8] = *param_8;
  param_1[10] = param_8[2];
  param_8[2] = 0;
  lVar7 = param_8[4];
  uVar12 = *(undefined4 *)((longlong)param_8 + 0x24);
  lVar8 = param_8[5];
  uVar4 = *(undefined4 *)((longlong)param_8 + 0x2c);
  uVar5 = *(undefined4 *)((longlong)param_8 + 0x34);
  lVar9 = param_8[7];
  uVar6 = *(undefined4 *)((longlong)param_8 + 0x3c);
  *(int *)(param_1 + 0xe) = (int)param_8[6];
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar5;
  *(int *)(param_1 + 0xf) = (int)lVar9;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar6;
  *(int *)(param_1 + 0xc) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 100) = uVar12;
  *(int *)(param_1 + 0xd) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar4;
  if (param_1[8] != 0) {
    *param_8 = 0;
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  puVar13 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  param_1[0x17] = puVar13;
  param_1[0x16] = puVar13;
  uVar14 = FUN_1405d8a54(1);
  param_1[0x18] = uVar14;
  local_e8 = 0;
  local_d8 = (longlong *)0x0;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149f33630;
  local_a8 = FUN_14294cf90;
  puStack_80 = param_1;
  FUN_14170b918(&local_148);
  plVar16 = plStack_140;
  lVar7 = local_148;
  local_138 = 1;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
    UNLOCK();
  }
  cVar11 = FUN_144a53f06();
  pcVar10 = local_a8;
  if (cVar11 == '\0') {
    pppuVar15 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar15 = &local_88;
    }
    uVar14 = (*(code *)(*pppuVar15)[1])();
    (*pcVar10)(uVar14);
    *(undefined4 *)(local_148 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
    FUN_145c3b830(&local_160);
    puVar13 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    local_150 = 1;
    if (local_158 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_158 + 1) = (int)local_158[1] + 1;
      UNLOCK();
    }
    *puVar13 = TAsyncRunnable<void>::vftable;
    puVar13[2] = local_a8;
    puVar13[4] = local_98;
    local_98 = (undefined ***)0x0;
    *(undefined4 *)(puVar13 + 8) = local_78;
    *(undefined4 *)((longlong)puVar13 + 0x44) = uStack_74;
    *(undefined4 *)(puVar13 + 9) = uStack_70;
    *(undefined4 *)((longlong)puVar13 + 0x4c) = uStack_6c;
    puVar13[6] = local_88;
    puVar13[7] = puStack_80;
    if (local_a8 != (code *)0x0) {
      local_a8 = (code *)0x0;
    }
    puVar13[10] = local_148;
    puVar13[0xb] = plStack_140;
    local_148 = 0;
    plStack_140 = (longlong *)0x0;
    *(undefined1 *)(puVar13 + 0xc) = 0;
    puVar13[0xd] = local_160;
    puVar13[0xe] = local_158;
    uVar12 = FUN_146268020();
    FUN_140002266(&local_170,L"TAsync %d",uVar12);
    puVar17 = local_170;
    if (local_168 == 0) {
      puVar17 = &DAT_149dfb77a;
    }
    local_180 = 0;
    local_188 = 0xffffffffffffffff;
    uVar14 = FUN_1411b1052(puVar13,puVar17,0,0);
    *(undefined8 *)(local_160 + 0x80) = uVar14;
    FUN_140b576f0();
    if (local_170 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_158 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_158)(local_158);
        LOCK();
        piVar2 = (int *)((longlong)local_158 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_158 + 0x10))(local_158);
        }
      }
    }
  }
  plVar1 = plStack_140;
  local_160 = lVar7;
  local_158 = plVar16;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    plVar16 = plStack_140 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plStack_140)(plStack_140);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_a8 != (code *)0x0) {
    pppuVar15 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar15 = &local_88;
    }
    (*(code *)(*pppuVar15)[2])();
  }
  if (local_e8 != 0) {
    plVar16 = local_d8;
    if (local_d8 == (longlong *)0x0) {
      plVar16 = local_c8;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  FUN_14614a64a(param_1 + 0x10,&local_160);
  plVar16 = local_158;
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_158 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  local_128 = 0;
  local_118 = (longlong *)0x0;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149f33650;
  local_a8 = FUN_14294db90;
  puStack_80 = param_1;
  FUN_14170b918(&local_148);
  plVar16 = plStack_140;
  lVar7 = local_148;
  local_138 = 1;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_140 + 1) = (int)plStack_140[1] + 1;
    UNLOCK();
  }
  cVar11 = FUN_144a53f06();
  pcVar10 = local_a8;
  if (cVar11 == '\0') {
    pppuVar15 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar15 = &local_88;
    }
    uVar14 = (*(code *)(*pppuVar15)[1])();
    (*pcVar10)(uVar14);
    *(undefined4 *)(local_148 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
    FUN_145c3b830(&local_160);
    puVar13 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    local_150 = 1;
    if (local_158 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_158 + 1) = (int)local_158[1] + 1;
      UNLOCK();
    }
    *puVar13 = TAsyncRunnable<void>::vftable;
    puVar13[2] = local_a8;
    puVar13[4] = local_98;
    local_98 = (undefined ***)0x0;
    *(undefined4 *)(puVar13 + 8) = local_78;
    *(undefined4 *)((longlong)puVar13 + 0x44) = uStack_74;
    *(undefined4 *)(puVar13 + 9) = uStack_70;
    *(undefined4 *)((longlong)puVar13 + 0x4c) = uStack_6c;
    puVar13[6] = local_88;
    puVar13[7] = puStack_80;
    if (local_a8 != (code *)0x0) {
      local_a8 = (code *)0x0;
    }
    puVar13[10] = local_148;
    puVar13[0xb] = plStack_140;
    local_148 = 0;
    plStack_140 = (longlong *)0x0;
    *(undefined1 *)(puVar13 + 0xc) = 0;
    puVar13[0xd] = local_160;
    puVar13[0xe] = local_158;
    uVar12 = FUN_146268020();
    FUN_140002266(&local_170,L"TAsync %d",uVar12);
    puVar17 = local_170;
    if (local_168 == 0) {
      puVar17 = &DAT_149dfb77a;
    }
    local_180 = 0;
    local_188 = 0xffffffffffffffff;
    uVar14 = FUN_1411b1052(puVar13,puVar17,0,0);
    *(undefined8 *)(local_160 + 0x80) = uVar14;
    FUN_140b576f0();
    if (local_170 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    plVar1 = local_158;
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_158 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_158)(local_158);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  plVar1 = plStack_140;
  local_160 = lVar7;
  local_158 = plVar16;
  if (plStack_140 != (longlong *)0x0) {
    LOCK();
    plVar16 = plStack_140 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plStack_140)(plStack_140);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_a8 != (code *)0x0) {
    pppuVar15 = &local_88;
    if (local_98 != (undefined ***)0x0) {
      pppuVar15 = local_98;
    }
    (*(code *)(*pppuVar15)[2])(pppuVar15);
  }
  if (local_128 != 0) {
    plVar16 = local_118;
    if (local_118 == (longlong *)0x0) {
      plVar16 = local_108;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  FUN_14614a64a(param_1 + 0x12,&local_160);
  plVar16 = local_158;
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_158 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  FUN_146b7cb77(*param_7,(int)param_7[1]);
  if (*param_7 != 0) {
    FUN_1400020a8();
  }
  if (*param_8 != 0) {
    plVar16 = param_8 + 4;
    if ((longlong *)param_8[2] != (longlong *)0x0) {
      plVar16 = (longlong *)param_8[2];
    }
    (**(code **)(*plVar16 + 0x10))(plVar16);
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b62584 FUN_146b62584 body=331 status=ok
// SIG undefined FUN_146b62584(void)

void FUN_146b62584(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  
  *param_1 = &PTR_FUN_149f311f8;
  LOCK();
  *(undefined4 *)(param_1 + 0x14) = 1;
  UNLOCK();
  lVar3 = param_1[0x10];
  if (param_1[0x10] != 0) {
    while( true ) {
      do {
        lVar5 = lVar3;
        lVar3 = 0;
      } while (lVar5 == 0);
      plVar6 = *(longlong **)(lVar5 + 0x70);
      cVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,0xffffffff,0);
      if (cVar4 != '\0') break;
      lVar3 = param_1[0x10];
    }
  }
  lVar3 = param_1[0x12];
  if (param_1[0x12] != 0) {
    while( true ) {
      do {
        lVar5 = lVar3;
        lVar3 = 0;
      } while (lVar5 == 0);
      plVar6 = *(longlong **)(lVar5 + 0x70);
      cVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,0xffffffff,0);
      if (cVar4 != '\0') break;
      lVar3 = param_1[0x12];
    }
  }
  FUN_14018802a(param_1[0x18]);
  FUN_146b626d0(param_1 + 0x16);
  plVar6 = (longlong *)param_1[0x13];
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
  plVar6 = (longlong *)param_1[0x11];
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
  if (param_1[8] != 0) {
    plVar6 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  FUN_146b7cb77(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b626d0 FUN_146b626d0 body=89 status=ok
// SIG undefined FUN_146b626d0(void)

void FUN_146b626d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  while (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar3;
    plVar4 = (longlong *)puVar3[2];
    if (plVar4 != (longlong *)0x0) {
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
    FUN_1400020a8(puVar3);
    puVar3 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 146b6272a FUN_146b6272a body=236 status=ok
// SIG undefined FUN_146b6272a(void)

bool FUN_146b6272a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = **(longlong **)(param_1 + 8);
  if (lVar2 != 0) {
    if ((undefined8 *)(lVar2 + 8) != param_2) {
      *param_2 = *(undefined8 *)(lVar2 + 8);
      *(undefined8 *)(lVar2 + 8) = 0;
      plVar3 = *(longlong **)(lVar2 + 0x10);
      plVar4 = (longlong *)param_2[1];
      if (plVar3 != plVar4) {
        *(undefined8 *)(lVar2 + 0x10) = 0;
        param_2[1] = plVar3;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar4 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
    }
    lVar5 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar2;
    *(undefined8 *)(lVar2 + 8) = 0;
    plVar3 = *(longlong **)(lVar2 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(lVar2 + 0x10) = 0;
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    if (lVar5 != 0) {
      plVar3 = *(longlong **)(lVar5 + 0x10);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar3 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      FUN_1400020a8(lVar5);
    }
  }
  return lVar2 != 0;
}



// FUNCTION 146b62816 FUN_146b62816 body=332 status=ok
// SIG undefined FUN_146b62816(void)

undefined8
FUN_146b62816(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong *param_6,longlong *param_7)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88 [2];
  longlong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = FUN_14001cc68(0xd0,0x10);
  local_88[0] = *param_7;
  local_78 = param_7[2];
  param_7[2] = 0;
  local_68 = (undefined4)param_7[4];
  uStack_64 = *(undefined4 *)((longlong)param_7 + 0x24);
  uStack_60 = (undefined4)param_7[5];
  uStack_5c = *(undefined4 *)((longlong)param_7 + 0x2c);
  local_58 = (undefined4)param_7[6];
  uStack_54 = *(undefined4 *)((longlong)param_7 + 0x34);
  uStack_50 = (undefined4)param_7[7];
  uStack_4c = *(undefined4 *)((longlong)param_7 + 0x3c);
  if (local_88[0] != 0) {
    *param_7 = 0;
  }
  local_98 = *param_6;
  local_a8 = &local_98;
  *param_6 = 0;
  local_90 = (undefined4)param_6[1];
  local_8c = *(undefined4 *)((longlong)param_6 + 0xc);
  param_6[1] = 0;
  local_a0 = local_88;
  local_b0 = param_5;
  local_b8 = param_4;
  FUN_146b61e8e(uVar1,param_1,param_2,param_3);
  FUN_146b7cb77(*param_6,(int)param_6[1]);
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
  if (*param_7 != 0) {
    plVar2 = param_7 + 4;
    if ((longlong *)param_7[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_7[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b62963 FUN_146b62963 body=111 status=ok
// SIG undefined FUN_146b62963(void)

bool FUN_146b62963(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991e14) {
    FUN_144b3d300(&DAT_14c991e14);
    if (DAT_14c991e14 == -1) {
      DAT_14c991e10 = (**(code **)(*DAT_14c8442c0 + 0x28))();
      _Init_thread_footer(&DAT_14c991e14);
    }
  }
  return DAT_14c991e28 < DAT_14c991e10;
}



// FUNCTION 146b629d2 FUN_146b629d2 body=7 status=ok
// SIG undefined FUN_146b629d2(void)

undefined4 FUN_146b629d2(void)

{
  return DAT_14c991e28;
}



// FUNCTION 146b629d9 FUN_146b629d9 body=140 status=ok
// SIG undefined FUN_146b629d9(void)

void FUN_146b629d9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_20 = &local_60;
  local_60 = 0;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149f336b0;
  local_58[0] = FUN_14294e720;
  local_30 = param_4;
  local_28 = param_1;
  FUN_146b62a66(param_3,param_2,local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b62a66 FUN_146b62a66 body=107 status=ok
// SIG undefined FUN_146b62a66(void)

void FUN_146b62a66(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined4 *)*param_2;
  if (puVar1 != (undefined4 *)0x0) {
    do {
      local_38 = *puVar1;
      uStack_34 = puVar1[1];
      uStack_30 = puVar1[2];
      uStack_2c = puVar1[3];
      FUN_146b7568c(param_1,&local_38,param_3);
      puVar1 = *(undefined4 **)(puVar1 + 6);
    } while (puVar1 != (undefined4 *)0x0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b62ad2 FUN_146b62ad2 body=148 status=ok
// SIG undefined FUN_146b62ad2(void)

void FUN_146b62ad2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = &local_60;
  local_20 = &local_68;
  local_68 = 0;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_149f336d0;
  local_58[0] = FUN_14294ea2c;
  local_60 = param_2;
  local_28 = param_4;
  FUN_146b62a66(param_1,param_3,local_58);
  if (local_58[0] != (code *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b62b68 FUN_146b62b68 body=447 status=ok
// SIG undefined FUN_146b62b68(void)

undefined8 * FUN_146b62b68(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_149f31200;
  FUN_146b62d28(param_1 + 1);
  uVar3 = FUN_1401cb356();
  param_1[9] = uVar3;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_1446efa72(param_1 + 10,0,3,0x10);
  *(undefined4 *)(param_1 + 0xb) = 3;
  puVar1 = (undefined8 *)param_1[10];
  *puVar1 = &PTR_LAB_149f34060;
  uVar3 = FUN_144a3f946();
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_149f33710;
  puVar1[3] = param_1;
  puVar1[4] = FUN_146b62e1a;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar3 = FUN_146b30882();
  param_1[0xe] = uVar3;
  uVar3 = FUN_146b33530();
  param_1[0xf] = uVar3;
  uVar3 = FUN_146b33584();
  param_1[0x10] = uVar3;
  uVar3 = FUN_146b33564();
  param_1[0x11] = uVar3;
  uVar3 = FUN_146b8bea8(0);
  param_1[0x12] = uVar3;
  uVar3 = FUN_146b91144(param_1[0x11],param_1[0x10],uVar3);
  param_1[0x13] = uVar3;
  uVar3 = FUN_146b89276(param_1[0xf],param_1[0xe],uVar3,param_1[0x12]);
  param_1[0x14] = uVar3;
  uVar3 = FUN_146b8fc9c();
  param_1[0x15] = uVar3;
  uVar3 = FUN_146b30862();
  param_1[0x16] = uVar3;
  *(undefined4 *)(param_1 + 0x17) = 1;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x18] = 0xffffffffffffffff;
  FUN_146b7c4de(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x1b) = 0;
  FUN_146b7c4de(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  lVar2 = param_1[0x1a];
  param_1[0x1f] = param_1[0x19];
  param_1[0x20] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x1e) = 1;
  lVar2 = param_1[0x1d];
  param_1[0x21] = param_1[0x1c];
  param_1[0x22] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 146b62d28 FUN_146b62d28 body=242 status=ok
// SIG undefined FUN_146b62d28(void)

undefined8 * FUN_146b62d28(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  return param_1;
}



// FUNCTION 146b62e1a FUN_146b62e1a body=734 status=ok
// SIG undefined FUN_146b62e1a(void)

void FUN_146b62e1a(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined ***pppuVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *plStack_c0;
  undefined1 local_b8;
  longlong local_a8 [2];
  longlong *local_98;
  longlong local_88 [4];
  code *local_68;
  undefined ***local_58;
  undefined **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0xc0) == param_2) {
    plVar11 = (longlong *)(param_1 + 200);
  }
  else {
    if (*(int *)(param_1 + 0xc4) != param_2) goto LAB_146b630c1;
    plVar11 = (longlong *)(param_1 + 0xe0);
  }
  if (plVar11 != (longlong *)0x0) {
    cVar6 = (**(code **)(*(longlong *)*param_3 + 0x10))();
    if (cVar6 == '\0') {
      lVar4 = *plVar11;
      *(undefined8 *)(lVar4 + 0x80) = 0;
      *(undefined8 *)(lVar4 + 0x88) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_e8);
    }
    local_a8[0] = 0;
    local_98 = (longlong *)0x0;
    uStack_40 = *param_3;
    plVar3 = (longlong *)param_3[1];
    if (plVar3 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_38 = plVar3;
    }
    local_48 = &PTR_LAB_149f33830;
    local_58 = (undefined ***)0x0;
    local_68 = FUN_14294f008;
    uStack_30 = plVar11;
    FUN_14170b918(&local_c8,local_a8);
    plVar11 = plStack_c0;
    local_b8 = 1;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
      UNLOCK();
    }
    cVar6 = FUN_144a53f06();
    pcVar5 = local_68;
    plVar10 = DAT_14c8442c0;
    if (cVar6 == '\0') {
      pppuVar9 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar9 = &local_48;
      }
      uVar8 = (*(code *)(*pppuVar9)[1])();
      (*pcVar5)(uVar8);
      *(undefined4 *)(local_c8 + 0x80) = 0;
      FUN_140b576f0();
    }
    else {
      puVar7 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      puVar7[1] = 0;
      *puVar7 = TAsyncQueuedWork<void>::vftable;
      puVar7[2] = local_68;
      puVar7[4] = local_58;
      local_58 = (undefined ***)0x0;
      *(undefined4 *)(puVar7 + 8) = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar7 + 0x44) = local_38._4_4_;
      *(undefined4 *)(puVar7 + 9) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar7 + 0x4c) = uStack_30._4_4_;
      puVar7[6] = local_48;
      puVar7[7] = uStack_40;
      if (local_68 != (code *)0x0) {
        local_68 = (code *)0x0;
      }
      puVar7[10] = local_c8;
      puVar7[0xb] = plStack_c0;
      local_c8 = 0;
      plStack_c0 = (longlong *)0x0;
      *(undefined1 *)(puVar7 + 0xc) = 0;
      (**(code **)(*plVar10 + 0x18))(plVar10,puVar7,3);
    }
    plVar10 = plStack_c0;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    if (local_68 != (code *)0x0) {
      pppuVar9 = &local_48;
      if (local_58 != (undefined ***)0x0) {
        pppuVar9 = local_58;
      }
      (*(code *)(*pppuVar9)[2])(pppuVar9);
    }
    if (local_a8[0] != 0) {
      plVar10 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar10 = local_88;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar11 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar3 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
  }
LAB_146b630c1:
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6310e FUN_146b6310e body=411 status=ok
// SIG undefined FUN_146b6310e(void)

void FUN_146b6310e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_149f31200;
  plVar3 = (longlong *)param_1[0x22];
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
  }
  plVar3 = (longlong *)param_1[0x20];
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
  }
  plVar3 = (longlong *)param_1[0x1d];
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
  }
  plVar3 = (longlong *)param_1[0x1a];
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
  }
  puVar4 = (undefined8 *)param_1[0x16];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[0x15];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[0x14];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[0x13];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[0x12];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[0x11];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[0x10];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[0xf];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[0xe];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  FUN_1449db362(param_1 + 0xc);
  FUN_1449db362(param_1 + 10);
  FUN_146b632aa(param_1 + 1);
  return;
}



// FUNCTION 146b632aa FUN_146b632aa body=61 status=ok
// SIG undefined FUN_146b632aa(void)

void FUN_146b632aa(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b632e8 FUN_146b632e8 body=91 status=ok
// SIG undefined FUN_146b632e8(void)

undefined8 * FUN_146b632e8(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  iVar2 = (int)((ulonglong)(param_2[1] - lVar1) >> 3) * 0x2fa0be83;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_146b53074(param_1,iVar2,0);
    FUN_146b530e6(*param_1,lVar1,iVar2);
  }
  return param_1;
}



// FUNCTION 146b63344 FUN_146b63344 body=448 status=ok
// SIG undefined FUN_146b63344(void)

undefined8 * FUN_146b63344(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  void *_Src;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  void **local_60;
  ulonglong *local_58;
  undefined1 local_50 [16];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = &PTR_FUN_149f33120;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  uVar4 = param_3[4];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  *(undefined4 *)(param_1 + 1) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
  param_1[5] = *(undefined8 *)(param_3 + 8);
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_2 + 1);
  lVar10 = (longlong)local_38;
  _Src = (void *)*param_2;
  if (lVar10 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar10 * 2);
  }
  local_60 = &local_40;
  local_58 = &local_30;
  FUN_141469cae(local_50);
  FUN_146b34f2e(param_1 + 6,local_50);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x12) = 100;
  *(undefined4 *)((longlong)param_1 + 0x94) = 8;
  *(undefined4 *)(param_1 + 0x13) = 8;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 8;
  *(undefined4 *)(param_1 + 0x14) = 4;
  param_1[0x15] = 0x3feb333333333333;
  param_1[0x16] = 0x3fe4cccccccccccd;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x800000010;
  puVar8 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar8 = &PTR_FUN_149f2f710;
  param_1[0x19] = puVar8;
  puVar8 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar8 = &PTR_FUN_149f33130;
  param_1[0x1a] = puVar8;
  uVar9 = FUN_146b8d88c();
  param_1[0x1b] = uVar9;
  puVar8 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar8 = &PTR_FUN_149f33160;
  param_1[0x1c] = puVar8;
  *(undefined1 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 8) = 0x1e;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b63506 FUN_146b63506 body=290 status=ok
// SIG undefined FUN_146b63506(void)

undefined8 * FUN_146b63506(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*(longlong *)*param_2 + 0x1c8))((longlong *)*param_2,&local_58);
  if ((longlong)(int)uStack_50 == 0) {
    uVar4 = 0;
  }
  else {
    lVar6 = (longlong)(int)uStack_50 * 0x10 + local_58;
    lVar8 = 0;
    lVar7 = local_58;
    do {
      lVar3 = (**(code **)(*(longlong *)*param_2 + 0x1f8))((longlong *)*param_2,lVar7);
      if ((longlong)*(int *)(lVar3 + 0x50) != 0) {
        lVar5 = *(longlong *)(lVar3 + 0x48);
        lVar3 = (longlong)*(int *)(lVar3 + 0x50) * 0x18;
        do {
          uVar1 = FUN_1447addd0(lVar5,0x10);
          iVar2 = FUN_140f5cb3a(param_3,uVar1,lVar5);
          if (iVar2 != -1) {
            FUN_146b31154(param_1,lVar8,*(undefined4 *)(lVar5 + 0x14),1);
          }
          lVar8 = lVar8 + (ulonglong)*(uint *)(lVar5 + 0x14);
          lVar5 = lVar5 + 0x18;
          lVar3 = lVar3 + -0x18;
        } while (lVar3 != 0);
      }
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != lVar6);
    uVar4 = uStack_50 & 0xffffffff;
  }
  FUN_1447a1747(local_58,uVar4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6362a FUN_146b6362a body=196 status=ok
// SIG undefined FUN_146b6362a(void)

undefined8 FUN_146b6362a(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_14001cc68(0x70,0x10);
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_38 = *(undefined4 *)(param_2 + 2);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_30 = *(undefined4 *)(param_2 + 3);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_68 = *param_1;
  *param_1 = 0;
  local_60 = (undefined4)param_1[1];
  local_5c = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  local_58 = param_1[2];
  local_50 = param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_146b6be16(uVar1);
  FUN_146b6c0de(uVar1);
  FUN_146b30b8c(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b636f0 FUN_146b636f0 body=346 status=ok
// SIG undefined FUN_146b636f0(void)

undefined8 * FUN_146b636f0(undefined8 *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong local_98;
  ulonglong uStack_90;
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = &PTR_FUN_149f33280;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  uVar7 = 0;
  local_60 = &local_a0;
  local_a0 = 0;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149f336f0;
  local_88 = thunk_FUN_146b7d334;
  local_98 = 0;
  uStack_90 = 0;
  local_58 = param_1;
  (**(code **)(*param_2 + 0x1c8))(param_2,&local_98);
  if ((longlong)(int)uStack_90 != 0) {
    lVar5 = (longlong)(int)uStack_90 << 4;
    lVar6 = local_98;
    do {
      uVar2 = (**(code **)(*param_2 + 0x1f8))(param_2,lVar6);
      pcVar1 = local_88;
      pppuVar4 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar4 = &local_68;
      }
      uVar3 = (*(code *)(*pppuVar4)[1])();
      (*pcVar1)(uVar3,uVar2);
      lVar6 = lVar6 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
    uVar7 = uStack_90 & 0xffffffff;
  }
  FUN_1447a1747(local_98,uVar7);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != (code *)0x0) {
    pppuVar4 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar4 = local_78;
    }
    (*(code *)(*pppuVar4)[2])(pppuVar4);
  }
  param_1[4] = param_1[1];
  param_1[5] = *(undefined8 *)(param_1[1] + 0x20);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6384c FUN_146b6384c body=285 status=ok
// SIG undefined FUN_146b6384c(void)

undefined8 * FUN_146b6384c(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  (**(code **)(*param_2 + 0x1c8))(param_2,param_1 + 2);
  param_1[4] = 0;
  param_1[5] = 0;
  (**(code **)(*(longlong *)param_1[1] + 0x1c8))((longlong *)param_1[1],param_1 + 4);
  *(undefined4 *)(param_1 + 6) = 1;
  uVar3 = FUN_1405d8a54(1);
  param_1[7] = uVar3;
  param_1[8] = 0;
  param_1[9] = 0;
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  param_1[0xb] = puVar4;
  param_1[10] = puVar4;
  local_78 = 0;
  local_68 = 0;
  local_90 = param_1;
  FUN_14294ae4d(local_88);
  FUN_146b76ab2(param_1 + 8,local_88);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6396a FUN_146b6396a body=31 status=ok
// SIG undefined FUN_146b6396a(void)

void FUN_146b6396a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x198,0x10);
  FUN_146b64270(uVar1);
  return;
}



// FUNCTION 146b6398a FUN_146b6398a body=143 status=ok
// SIG undefined FUN_146b6398a(void)

void FUN_146b6398a(longlong param_1)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146b76b7c(local_40);
  FUN_146b76b12(param_1 + 0x50,local_40);
  while (local_30 != 0) {
    local_28 = *(longlong *)(local_30 + 0x18);
    FUN_1400020a8();
    local_30 = local_28;
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b63a1a FUN_146b63a1a body=83 status=ok
// SIG undefined FUN_146b63a1a(void)

undefined8 FUN_146b63a1a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  LOCK();
  *(undefined4 *)(param_1 + 0x30) = 0;
  UNLOCK();
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
  lVar1 = *(longlong *)(param_1 + 0x40);
  while ((*(byte *)(lVar1 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar1 + 0x70) + 0x20))(*(longlong **)(lVar1 + 0x70),0xffffffff,0);
  }
  FUN_146b3777c(param_2,lVar1 + 0x80);
  return param_2;
}



// FUNCTION 146b63a6e FUN_146b63a6e body=63 status=ok
// SIG undefined FUN_146b63a6e(void)

longlong FUN_146b63a6e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146b7df86(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_146b7df77(lVar2);
  return lVar2;
}



// FUNCTION 146b63aae FUN_146b63aae body=251 status=ok
// SIG undefined FUN_146b63aae(void)

undefined8 * FUN_146b63aae(undefined8 *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = &PTR_FUN_149f33280;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  local_80 = 0;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_149f33810;
  local_50 = &local_80;
  local_48 = param_1;
  local_78 = thunk_FUN_146b7e068;
  if ((longlong)(int)param_2[1] != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)(int)param_2[1] * 0x60;
    do {
      pcVar1 = local_78;
      pppuVar3 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar3 = &local_58;
      }
      uVar2 = (*(code *)(*pppuVar3)[1])();
      (*pcVar1)(uVar2,lVar4);
      lVar4 = lVar4 + 0x60;
      lVar5 = lVar5 + -0x60;
    } while (lVar5 != 0);
    if (local_78 == (code *)0x0) goto LAB_146b63b71;
  }
  pppuVar3 = &local_58;
  if (local_68 != (undefined ***)0x0) {
    pppuVar3 = local_68;
  }
  (*(code *)(*pppuVar3)[2])(pppuVar3);
LAB_146b63b71:
  param_1[4] = param_1[1];
  param_1[5] = *(undefined8 *)(param_1[1] + 0x20);
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b63baa FUN_146b63baa body=173 status=ok
// SIG undefined FUN_146b63baa(void)

undefined8
FUN_146b63baa(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_14001cc68(0x210,0x10);
  local_58 = *param_1;
  uStack_54 = param_1[1];
  uStack_50 = param_1[2];
  uStack_4c = param_1[3];
  local_48 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 4) = 0;
  local_40 = param_1[6];
  local_3c = param_1[7];
  *(undefined8 *)(param_1 + 6) = 0;
  local_38 = param_1[8];
  local_68 = param_4;
  FUN_146b64358(uVar1,&local_58,param_2,param_3);
  if (*(longlong *)(param_1 + 4) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b63c58 FUN_146b63c58 body=318 status=ok
// SIG undefined FUN_146b63c58(void)

longlong * FUN_146b63c58(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (iVar5 != 0) {
    FUN_140504644(param_2);
  }
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      puVar6 = (undefined4 *)((longlong)iStack_54 * 0x18 + *local_70);
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_140c60952(param_2,iVar5);
      }
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      puVar1 = (undefined4 *)(*param_2 + (longlong)iVar5 * 0x10);
      *puVar1 = *puVar6;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b63d98 FUN_146b63d98 body=274 status=ok
// SIG undefined FUN_146b63d98(void)

longlong * FUN_146b63d98(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar9 = *(int *)(param_1 + 0x18);
  if (-1 < iVar9) {
    if (iVar9 != 0) {
      FUN_146b76c86(param_2);
    }
    puVar12 = *(undefined8 **)(param_1 + 8);
    while( true ) {
      if (puVar12 == (undefined8 *)0x0) {
        return param_2;
      }
      uVar4 = *puVar12;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_146b55270(param_2,iVar3);
      }
      lVar11 = *param_2;
      lVar1 = lVar11 + (longlong)iVar3 * 0x60;
      FUN_146b49358(lVar1,uVar4);
      iVar9 = *(int *)(puVar12 + 6);
      if (iVar9 < 0) break;
      plVar10 = (longlong *)(lVar11 + (longlong)iVar3 * 0x60 + 0x48);
      *(undefined4 *)(lVar1 + 0x50) = 0;
      if (*(int *)(lVar1 + 0x54) != iVar9) {
        FUN_146b7bec2(plVar10);
      }
      for (lVar11 = puVar12[4]; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x28)) {
        iVar9 = *(int *)(lVar1 + 0x50);
        *(uint *)(lVar1 + 0x50) = iVar9 + 1U;
        if (*(uint *)(lVar1 + 0x54) < iVar9 + 1U) {
          FUN_146b55304(plVar10,iVar9);
        }
        lVar5 = *plVar10;
        *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar9 * 0x18) = *(undefined8 *)(lVar11 + 0x20);
        uVar6 = *(undefined4 *)(lVar11 + 0x14);
        uVar7 = *(undefined4 *)(lVar11 + 0x18);
        uVar8 = *(undefined4 *)(lVar11 + 0x1c);
        puVar2 = (undefined4 *)(lVar5 + (longlong)iVar9 * 0x18);
        *puVar2 = *(undefined4 *)(lVar11 + 0x10);
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
      }
      puVar12 = (undefined8 *)puVar12[7];
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar9);
}



// FUNCTION 146b63eac FUN_146b63eac body=64 status=ok
// SIG undefined FUN_146b63eac(void)

longlong FUN_146b63eac(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146b55398(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x40 + *param_1;
  FUN_146b7bce8(lVar2,1);
  return lVar2;
}



// FUNCTION 146b63eec FUN_146b63eec body=122 status=ok
// SIG undefined FUN_146b63eec(void)

void FUN_146b63eec(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146b551be();
  local_28 = *param_2;
  local_20 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    local_20 = 0;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b63f68 FUN_146b63f68 body=182 status=ok
// SIG undefined FUN_146b63f68(void)

void FUN_146b63f68(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  ulonglong *local_70;
  undefined1 local_68;
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_146b551be(param_1,L"OriginalUnknownBuildBytes");
  local_80 = local_60;
  local_68 = 0;
  local_70 = &local_20;
  local_78 = local_80;
  FUN_140212e80(&local_80,L"%lld",param_2);
  local_90 = local_80;
  local_88 = (undefined4)((ulonglong)((longlong)local_78 - (longlong)local_80) >> 1);
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  FUN_144724f3c(&local_80);
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b64020 FUN_146b64020 body=182 status=ok
// SIG undefined FUN_146b64020(void)

void FUN_146b64020(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  ulonglong *local_70;
  undefined1 local_68;
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_146b551be(param_1,L"FinalUnknownBuildBytes");
  local_80 = local_60;
  local_68 = 0;
  local_70 = &local_20;
  local_78 = local_80;
  FUN_140212e80(&local_80,L"%lld",param_2);
  local_90 = local_80;
  local_88 = (undefined4)((ulonglong)((longlong)local_78 - (longlong)local_80) >> 1);
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  FUN_144724f3c(&local_80);
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b640d8 FUN_146b640d8 body=182 status=ok
// SIG undefined FUN_146b640d8(void)

void FUN_146b640d8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  ulonglong *local_70;
  undefined1 local_68;
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_146b551be(param_1,L"OriginalUnknownCompressedBytes");
  local_80 = local_60;
  local_68 = 0;
  local_70 = &local_20;
  local_78 = local_80;
  FUN_140212e80(&local_80,L"%lld",param_2);
  local_90 = local_80;
  local_88 = (undefined4)((ulonglong)((longlong)local_78 - (longlong)local_80) >> 1);
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  FUN_144724f3c(&local_80);
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b64190 FUN_146b64190 body=182 status=ok
// SIG undefined FUN_146b64190(void)

void FUN_146b64190(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [40];
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  ulonglong *local_70;
  undefined1 local_68;
  undefined1 local_60 [64];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_146b551be(param_1,L"FinalUnknownCompressedBytes");
  local_80 = local_60;
  local_68 = 0;
  local_70 = &local_20;
  local_78 = local_80;
  FUN_140212e80(&local_80,L"%lld",param_2);
  local_90 = local_80;
  local_88 = (undefined4)((ulonglong)((longlong)local_78 - (longlong)local_80) >> 1);
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  FUN_144724f3c(&local_80);
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b64248 FUN_146b64248 body=39 status=ok
// SIG undefined FUN_146b64248(void)

void FUN_146b64248(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_146b62b68(uVar1,param_1);
  return;
}



// FUNCTION 146b64270 FUN_146b64270 body=232 status=ok
// SIG undefined FUN_146b64270(void)

void FUN_146b64270(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f332a0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  return;
}



// FUNCTION 146b64358 FUN_146b64358 body=1002 status=ok
// SIG undefined FUN_146b64358(void)

undefined8 *
FUN_146b64358(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  int iVar12;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [2];
  undefined8 local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = &PTR_FUN_149f332c0;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 2) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  param_1[3] = 0;
  param_1[3] = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_1 + 4) = param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x24) = param_2[7];
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined4 *)(param_1 + 5) = param_2[8];
  param_1[6] = param_3;
  param_1[7] = param_4;
  param_1[8] = param_5;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 1;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  local_c8 = param_2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x12),4000);
  puVar8 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  *(undefined8 *)((longlong)puVar8 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x3c) = 0;
  param_1[0x19] = puVar8;
  param_1[0x18] = puVar8;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  puVar8 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  param_1[0x1d] = puVar8;
  param_1[0x1c] = puVar8;
  puVar8 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  param_1[0x1f] = puVar8;
  param_1[0x1e] = puVar8;
  puVar8 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  *(undefined4 *)(puVar8 + 5) = 0;
  param_1[0x21] = puVar8;
  param_1[0x20] = puVar8;
  FUN_146b79636(param_1 + 0x22);
  param_1[9] = 0;
  plVar2 = (longlong *)param_1[8];
  FUN_140056680(&local_b8,L"Chunk Writer: Serialize Time");
  uVar9 = (**(code **)(*plVar2 + 8))(plVar2,&local_b8,0,0);
  param_1[10] = uVar9;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[8];
  FUN_140056680(&local_b8,L"Chunk Writer: Num Saved");
  uVar9 = (**(code **)(*plVar2 + 8))(plVar2,&local_b8,4,0);
  param_1[0xb] = uVar9;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[8];
  FUN_140056680(&local_b8,L"Chunk Writer: Data Size Written");
  uVar9 = (**(code **)(*plVar2 + 8))(plVar2,&local_b8,1,0);
  param_1[0xc] = uVar9;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[8];
  FUN_140056680(&local_b8,L"Chunk Writer: Compression Ratio");
  uVar9 = (**(code **)(*plVar2 + 8))(plVar2,&local_b8,3,0);
  param_1[0xe] = uVar9;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[8];
  FUN_140056680(&local_b8,L"Chunk Writer: Data Write Speed");
  uVar9 = (**(code **)(*plVar2 + 8))(plVar2,&local_b8,2,0);
  param_1[0xd] = uVar9;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  puVar11 = &DAT_149dfb77a;
  puVar10 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 4) != 0) {
    puVar10 = (undefined2 *)param_1[3];
  }
  (**(code **)(*(longlong *)param_1[6] + 0x10))((longlong *)param_1[6],puVar10);
  if (*(int *)(param_1 + 4) != 0) {
    puVar11 = (undefined2 *)param_1[3];
  }
  cVar7 = (**(code **)(*(longlong *)param_1[6] + 8))((longlong *)param_1[6],puVar11);
  if (cVar7 == '\0') {
    if (*(int *)(param_1 + 4) == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    else {
      puVar10 = (undefined2 *)param_1[3];
    }
    FUN_140033559(".\\Runtime/Online/BuildPatchServices/Private/Generation/ChunkWriter.cpp",0x4e,
                  L"Could not create cloud directory (%s).",puVar10);
  }
  if (0 < *(int *)((longlong)param_1 + 0x14)) {
    iVar12 = 0;
    do {
      local_a8[0] = 0;
      local_98 = 0;
      local_c0 = param_1;
      FUN_14294b59b(&local_b8,&local_c0,local_a8);
      iVar1 = *(int *)(param_1 + 0x10);
      *(uint *)(param_1 + 0x10) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x84) < iVar1 + 1U) {
        FUN_146b79992(param_1 + 0xf,iVar1);
      }
      lVar3 = param_1[0xf];
      *(longlong *)(lVar3 + (longlong)iVar1 * 0x10) = local_b8;
      *(undefined8 *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = local_b0;
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)((longlong)param_1 + 0x14));
  }
  if (*(longlong *)(local_c8 + 4) != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146b64744 FUN_146b64744 body=1193 status=ok
// SIG undefined FUN_146b64744(void)

undefined8 *
FUN_146b64744(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,int *param_4,
             longlong *param_5)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong *plVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  undefined ***pppuVar6;
  wchar_t *pwVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined8 *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = &PTR_FUN_149f31750;
  param_1[1] = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar2,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar2 * 2);
  }
  param_1[3] = *param_3;
  iVar2 = *param_4;
  pwVar7 = L"ChunksV4";
  if (iVar2 < 0xf) {
    pwVar7 = L"ChunksV3";
  }
  pwVar5 = L"ChunksV2";
  if (5 < iVar2) {
    pwVar5 = pwVar7;
  }
  pwVar7 = L"Chunks";
  if (2 < iVar2) {
    pwVar7 = pwVar5;
  }
  param_1[4] = pwVar7;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = param_5;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  FUN_140056680(local_88,L"Cloud Enumeration: Manifests Loaded");
  uVar4 = (**(code **)(*param_5 + 8))(param_5,local_88,4,0);
  param_1[0x62] = uVar4;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x5f];
  FUN_140056680(local_88,L"Cloud Enumeration: Manifests Rejected");
  uVar4 = (**(code **)(*plVar3 + 8))(plVar3,local_88,4,0);
  param_1[99] = uVar4;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x5f];
  FUN_140056680(local_88,L"Cloud Enumeration: Chunks Enumerated");
  uVar4 = (**(code **)(*plVar3 + 8))(plVar3,local_88,4,0);
  param_1[100] = uVar4;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x5f];
  FUN_140056680(local_88,L"Cloud Enumeration: Chunks Rejected");
  uVar4 = (**(code **)(*plVar3 + 8))(plVar3,local_88,4,0);
  param_1[0x65] = uVar4;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x5f];
  FUN_140056680(local_88,L"Cloud Enumeration: Enumeration Time");
  uVar4 = (**(code **)(*plVar3 + 8))(plVar3,local_88,0,0);
  param_1[0x66] = uVar4;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x5f];
  FUN_140056680(local_88,L"Cloud Enumeration: Unique Window Sizes");
  uVar4 = (**(code **)(*plVar3 + 8))(plVar3,local_88,4,0);
  param_1[0x67] = uVar4;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149f33850;
  local_88[0] = FUN_14294f172;
  local_c8 = 0;
  local_b8 = 0;
  local_60 = param_1;
  FUN_142944753(local_d8);
  FUN_14614a64a(param_1 + 0x60,local_d8);
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_d0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar6 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar6 = &local_68;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b64bee FUN_146b64bee body=517 status=ok
// SIG undefined FUN_146b64bee(void)

void FUN_146b64bee(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_149f31750;
  lVar4 = param_1[0x60];
  if (param_1[0x60] != 0) {
    while( true ) {
      do {
        lVar6 = lVar4;
        lVar4 = 0;
      } while (lVar6 == 0);
      plVar3 = *(longlong **)(lVar6 + 0x70);
      cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
      if (cVar5 != '\0') break;
      lVar4 = param_1[0x60];
    }
  }
  plVar3 = (longlong *)param_1[0x61];
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
  }
  *(undefined4 *)(param_1 + 0x5e) = 0;
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_146b79f3e(param_1 + 0x55);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(param_1 + 0x4b);
  *(undefined4 *)(param_1 + 0x4a) = 0;
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_146b7a0cc(param_1 + 0x41);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_146b48006(param_1 + 0x37);
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(param_1 + 0x2d);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_146b485a4(param_1 + 0x23);
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_146b48100(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_146b4803c(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_146b4865e(param_1 + 5);
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b64e0a FUN_146b64e0a body=80 status=ok
// SIG undefined FUN_146b64e0a(void)

longlong FUN_146b64e0a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x300);
  if (*(longlong *)(param_1 + 0x300) != 0) {
    while( true ) {
      do {
        lVar4 = lVar2;
        lVar2 = 0;
      } while (lVar4 == 0);
      plVar1 = *(longlong **)(lVar4 + 0x70);
      cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
      if (cVar3 != '\0') break;
      lVar2 = *(longlong *)(param_1 + 0x300);
    }
  }
  return param_1 + 0x168;
}



// FUNCTION 146b64e5a FUN_146b64e5a body=77 status=ok
// SIG undefined FUN_146b64e5a(void)

longlong FUN_146b64e5a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x300);
  if (*(longlong *)(param_1 + 0x300) != 0) {
    while( true ) {
      do {
        lVar4 = lVar2;
        lVar2 = 0;
      } while (lVar4 == 0);
      plVar1 = *(longlong **)(lVar4 + 0x70);
      cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
      if (cVar3 != '\0') break;
      lVar2 = *(longlong *)(param_1 + 0x300);
    }
  }
  return param_1 + 0x28;
}



// FUNCTION 146b64ea8 FUN_146b64ea8 body=77 status=ok
// SIG undefined FUN_146b64ea8(void)

longlong FUN_146b64ea8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x300);
  if (*(longlong *)(param_1 + 0x300) != 0) {
    while( true ) {
      do {
        lVar4 = lVar2;
        lVar2 = 0;
      } while (lVar4 == 0);
      plVar1 = *(longlong **)(lVar4 + 0x70);
      cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
      if (cVar3 != '\0') break;
      lVar2 = *(longlong *)(param_1 + 0x300);
    }
  }
  return param_1 + 0x78;
}



// FUNCTION 146b64ef6 FUN_146b64ef6 body=80 status=ok
// SIG undefined FUN_146b64ef6(void)

longlong FUN_146b64ef6(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x300);
  if (*(longlong *)(param_1 + 0x300) != 0) {
    while( true ) {
      do {
        lVar4 = lVar2;
        lVar2 = 0;
      } while (lVar4 == 0);
      plVar1 = *(longlong **)(lVar4 + 0x70);
      cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
      if (cVar3 != '\0') break;
      lVar2 = *(longlong *)(param_1 + 0x300);
    }
  }
  return param_1 + 0x118;
}



// FUNCTION 146b64f46 FUN_146b64f46 body=80 status=ok
// SIG undefined FUN_146b64f46(void)

longlong FUN_146b64f46(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x300);
  if (*(longlong *)(param_1 + 0x300) != 0) {
    while( true ) {
      do {
        lVar4 = lVar2;
        lVar2 = 0;
      } while (lVar4 == 0);
      plVar1 = *(longlong **)(lVar4 + 0x70);
      cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
      if (cVar3 != '\0') break;
      lVar2 = *(longlong *)(param_1 + 0x300);
    }
  }
  return param_1 + 0x1b8;
}



// FUNCTION 146b64f96 FUN_146b64f96 body=114 status=ok
// SIG undefined FUN_146b64f96(void)

bool FUN_146b64f96(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x300);
  if (*(longlong *)(param_1 + 0x300) != 0) {
    while( true ) {
      do {
        lVar6 = lVar2;
        lVar2 = 0;
      } while (lVar6 == 0);
      plVar1 = *(longlong **)(lVar6 + 0x70);
      cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
      if (cVar3 != '\0') break;
      lVar2 = *(longlong *)(param_1 + 0x300);
    }
  }
  uVar4 = FUN_1447addd0(param_2,0x10);
  iVar5 = FUN_140f5cb3a(param_1 + 600,uVar4,param_2);
  return iVar5 != -1;
}



// FUNCTION 146b65008 FUN_146b65008 body=130 status=ok
// SIG undefined FUN_146b65008(void)

longlong FUN_146b65008(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x300);
  if (*(longlong *)(param_1 + 0x300) != 0) {
    while( true ) {
      do {
        lVar6 = lVar5;
        lVar5 = 0;
      } while (lVar6 == 0);
      plVar1 = *(longlong **)(lVar6 + 0x70);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
      if (cVar2 != '\0') break;
      lVar5 = *(longlong *)(param_1 + 0x300);
    }
  }
  uVar3 = FUN_1447addd0(param_2,0x10);
  iVar4 = FUN_146b7e2ba((longlong *)(param_1 + 200),uVar3,param_2);
  if (iVar4 == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)iVar4 * 0x20 + *(longlong *)(param_1 + 200);
  }
  return lVar5 + 0x10;
}



// FUNCTION 146b6508a FUN_146b6508a body=130 status=ok
// SIG undefined FUN_146b6508a(void)

longlong FUN_146b6508a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x300);
  if (*(longlong *)(param_1 + 0x300) != 0) {
    while( true ) {
      do {
        lVar6 = lVar5;
        lVar5 = 0;
      } while (lVar6 == 0);
      plVar1 = *(longlong **)(lVar6 + 0x70);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
      if (cVar2 != '\0') break;
      lVar5 = *(longlong *)(param_1 + 0x300);
    }
  }
  uVar3 = FUN_1447addd0(param_2,0x10);
  iVar4 = FUN_146b505d2((longlong *)(param_1 + 0x118),uVar3,param_2);
  if (iVar4 == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)iVar4 * 0x2c + *(longlong *)(param_1 + 0x118);
  }
  return lVar5 + 0x10;
}



// FUNCTION 146b6510c FUN_146b6510c body=80 status=ok
// SIG undefined FUN_146b6510c(void)

longlong FUN_146b6510c(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x300);
  if (*(longlong *)(param_1 + 0x300) != 0) {
    while( true ) {
      do {
        lVar4 = lVar2;
        lVar2 = 0;
      } while (lVar4 == 0);
      plVar1 = *(longlong **)(lVar4 + 0x70);
      cVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
      if (cVar3 != '\0') break;
      lVar2 = *(longlong *)(param_1 + 0x300);
    }
  }
  return param_1 + 0x2a8;
}



// FUNCTION 146b6515c FUN_146b6515c body=662 status=ok
// SIG undefined FUN_146b6515c(void)

undefined8 * FUN_146b6515c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  void *pvVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  undefined ***pppuVar10;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined1 local_c8;
  longlong local_b8 [2];
  longlong *local_a8;
  longlong local_98 [4];
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b8[0] = 0;
  local_a8 = (longlong *)0x0;
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_3 + 1);
  lVar8 = (longlong)local_e0;
  pvVar2 = (void *)*param_3;
  local_f0 = param_1;
  if (lVar8 == 0) {
    local_dc = 0;
    iVar9 = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,pvVar2,lVar8 * 2);
    iVar9 = local_e0;
  }
  pvVar2 = local_e8;
  local_78[0] = (code *)0x0;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_149f33870;
  local_48 = (void *)0x0;
  uStack_50 = local_f0;
  iStack_40 = iVar9;
  if (iVar9 == 0) {
    uStack_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,iVar9,0);
    memcpy(local_48,pvVar2,(longlong)iVar9 * 2);
  }
  local_78[0] = FUN_14295006a;
  FUN_146b56a20(&local_d8,local_b8);
  plVar7 = plStack_d0;
  uVar4 = local_d8;
  local_c8 = 1;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
    UNLOCK();
  }
  cVar5 = FUN_144a53f06();
  plVar3 = DAT_14c8442c0;
  if (cVar5 == '\0') {
    FUN_146b5697a(&local_d8,local_78);
  }
  else {
    puVar6 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_149f2f7d0;
    puVar6[2] = local_78[0];
    puVar6[4] = local_68;
    local_68 = (undefined ***)0x0;
    *(undefined4 *)(puVar6 + 8) = (undefined4)local_48;
    *(undefined4 *)((longlong)puVar6 + 0x44) = local_48._4_4_;
    *(int *)(puVar6 + 9) = iStack_40;
    *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_3c;
    puVar6[6] = local_58;
    puVar6[7] = uStack_50;
    if (local_78[0] != (code *)0x0) {
      local_78[0] = (code *)0x0;
    }
    puVar6[10] = local_d8;
    puVar6[0xb] = plStack_d0;
    local_d8 = 0;
    plStack_d0 = (longlong *)0x0;
    *(undefined1 *)(puVar6 + 0xc) = local_c8;
    (**(code **)(*plVar3 + 0x18))(plVar3,puVar6,3);
  }
  plVar3 = plStack_d0;
  *param_2 = uVar4;
  param_2[1] = plVar7;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_d0 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_78[0] != (code *)0x0) {
    pppuVar10 = &local_58;
    if (local_68 != (undefined ***)0x0) {
      pppuVar10 = local_68;
    }
    (*(code *)(*pppuVar10)[2])(pppuVar10);
  }
  if (local_b8[0] != 0) {
    plVar7 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar7 = local_98;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (local_e8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b653f4 FUN_146b653f4 body=359 status=ok
// SIG undefined FUN_146b653f4(void)

void FUN_146b653f4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_146b7f620(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1449809d4(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      FUN_144980568(param_1,&local_50,(longlong)iStack_5c * 0xc + *local_78,0);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6555e FUN_146b6555e body=391 status=ok
// SIG undefined FUN_146b6555e(void)

void FUN_146b6555e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_146b7f7cc(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_146b4e840(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = (int)param_2[5];
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = param_2;
  if ((iStack_44 != iVar3) || (uStack_50 != plVar1)) {
    do {
      local_58 = *local_80 + (longlong)iStack_64 * 0x1c;
      uStack_50 = (longlong *)(*local_80 + (longlong)iStack_64 * 0x1c + 0x10);
      FUN_146b4e46a(param_1,local_34,&local_58,0);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != param_2 ||
             ((longlong *)CONCAT44(uStack_6c,uStack_70) != plVar1 || iStack_64 != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b656e8 FUN_146b656e8 body=83 status=ok
// SIG undefined FUN_146b656e8(void)

void FUN_146b656e8(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_146b48006(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(param_1);
  return;
}



// FUNCTION 146b6573c FUN_146b6573c body=2637 status=ok
// SIG undefined FUN_146b6573c(void)

undefined8 * FUN_146b6573c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong **pplVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_268 [32];
  int local_248;
  undefined8 *local_238;
  undefined8 *local_230;
  longlong local_228;
  undefined8 *local_220;
  ulonglong local_218;
  undefined2 *local_210;
  int local_208;
  longlong **local_200;
  undefined8 local_1f8;
  longlong **local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  longlong local_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  undefined4 *local_1c0;
  uint local_1b8;
  uint uStack_1b4;
  uint local_1b0;
  undefined4 local_1ac;
  undefined1 local_1a4 [4];
  longlong *local_1a0;
  undefined8 local_198;
  undefined1 *puStack_190;
  undefined8 local_188;
  uint local_180;
  uint local_17c;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined8 uStack_164;
  longlong *local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined8 local_140;
  undefined8 local_138;
  int local_130;
  undefined8 local_12c;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  longlong local_108 [2];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  uint local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8 [4];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  *(undefined4 *)((longlong)param_2 + 0x7c) = 0x80;
  *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  local_238 = param_2;
  iVar5 = (**(code **)(*(longlong *)*param_3 + 0x180))();
  if (iVar5 == 0xf) {
    local_98 = 0;
    local_90 = 0;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_108[0] = 0;
    local_108[1] = 0;
    local_dc = 0xffffffff00000080;
    local_d4 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_228 = param_1;
    (**(code **)(*(longlong *)*param_3 + 0x1c8))((longlong *)*param_3,&local_1d8);
    if ((longlong)(int)uStack_1d0 != 0) {
      lVar15 = (longlong)(int)uStack_1d0 * 0x10 + local_1d8;
      lVar14 = local_1d8;
      do {
        lVar8 = (**(code **)(*(longlong *)*param_3 + 0x1f8))((longlong *)*param_3,lVar14);
        if ((lVar8 != 0) && ((longlong)*(int *)(lVar8 + 0x50) != 0)) {
          lVar17 = *(longlong *)(lVar8 + 0x48);
          lVar8 = lVar17 + (longlong)*(int *)(lVar8 + 0x50) * 0x18;
          do {
            uVar6 = FUN_1447addd0(lVar17,0x10);
            uVar9 = FUN_146b56444(local_b8,uVar6,lVar17);
            FUN_146b31154(uVar9,*(undefined4 *)(lVar17 + 0x10),*(undefined4 *)(lVar17 + 0x14),0);
            lVar17 = lVar17 + 0x18;
          } while (lVar17 != lVar8);
        }
        lVar14 = lVar14 + 0x10;
      } while (lVar14 != lVar15);
    }
    plVar2 = local_b8 + 2;
    local_1a0 = (longlong *)0x100000000;
    puStack_190 = (undefined1 *)0xffffffff;
    local_188._0_4_ = 0;
    iVar5 = 0;
    local_220 = param_3;
    local_198 = (longlong **)plVar2;
    if (local_90 != 0) {
      FUN_1449c0562(&local_1a0);
      iVar5 = local_90;
    }
    local_230 = local_238 + 10;
    local_140 = puStack_190;
    uVar9 = local_140;
    local_138 = CONCAT44(local_188._4_4_,(uint)local_188);
    uStack_150 = local_1a0;
    local_148 = (longlong *)local_198;
    local_158 = local_b8;
    local_140._4_4_ = (int)((ulonglong)puStack_190 >> 0x20);
    if ((local_140._4_4_ != iVar5) || (local_198 != (longlong **)plVar2)) {
      iVar7 = local_140._4_4_;
      local_140 = uVar9;
      do {
        lVar14 = *local_158;
        lVar8 = (longlong)iVar7;
        lVar15 = *(longlong *)(lVar14 + 0x10 + lVar8 * 0x28);
        if (lVar15 != 0) {
          puVar11 = (undefined8 *)(lVar14 + lVar8 * 0x28 + 0x10);
          lVar17 = FUN_146b3114a(puVar11);
          if ((lVar15 == lVar17) && (lVar15 = FUN_146b31150(*puVar11), lVar15 == 0)) {
            plVar10 = (longlong *)(lVar14 + lVar8 * 0x28);
            local_1c8 = (longlong *)CONCAT44(local_1c8._4_4_,*(undefined4 *)(plVar10[2] + 8));
            FUN_144980568(local_238,&local_1a0,&local_1c8,0);
            local_1a0 = plVar10;
            local_198 = (longlong **)&local_1c8;
            FUN_146b4e46a(local_230,&local_200,&local_1a0);
            uVar9 = FUN_146b7f974(local_108,(ulonglong)local_1c8 & 0xffffffff,&local_1c8);
            FUN_1457adc9c(uVar9,&local_1a0,plVar10);
          }
        }
        local_140 = CONCAT44(local_140._4_4_,(uint)local_140 & ~uStack_150._4_4_);
        FUN_1449c0562(&uStack_150);
        iVar7 = local_140._4_4_;
        uVar9 = local_140;
      } while (local_158 != local_b8 || (local_148 != plVar2 || local_140._4_4_ != iVar5));
    }
    local_140 = uVar9;
    uVar18 = 0;
    local_138 = 0;
    local_130 = 0;
    local_158 = (longlong *)0x0;
    uStack_150 = (longlong *)0x0;
    local_12c = 0xffffffff00000080;
    local_124 = 0;
    local_118 = 0;
    local_110 = 0;
    local_200 = (longlong **)&DAT_100000000;
    local_1f0 = (longlong **)&DAT_ffffffff;
    local_1e8._0_4_ = 0;
    local_1f8 = (longlong *)local_f8;
    if (local_e0 != 0) {
      FUN_1449c0562(&local_200);
      uVar18 = (ulonglong)local_e0;
    }
    local_188 = (undefined4 *)local_1f0;
    puVar4 = local_188;
    local_180 = (uint)local_1e8;
    local_17c = local_1e8._4_4_;
    local_198 = local_200;
    puStack_190 = (undefined1 *)local_1f8;
    local_188._4_4_ = (int)((ulonglong)local_1f0 >> 0x20);
    if ((local_188._4_4_ != (int)uVar18) || (local_1f8 != (longlong *)local_f8)) {
      iVar5 = local_188._4_4_;
      local_218 = uVar18;
      local_1a0 = local_108;
      local_188 = puVar4;
      do {
        lVar14 = *local_1a0;
        lVar15 = (longlong)iVar5 * 0x60;
        if (*(int *)(lVar14 + 0x10 + lVar15) - *(int *)(lVar14 + 0x3c + lVar15) < 2) {
          puVar1 = (undefined4 *)(lVar14 + lVar15);
          FUN_144b016d0(local_238,*puVar1);
          puVar4 = puVar1 + 6;
          local_1c8 = (longlong *)&DAT_100000000;
          local_1b8 = 0xffffffff;
          uStack_1b4 = 0;
          local_1b0 = 0;
          local_1c0 = puVar4;
          if (puVar1[0xc] != 0) {
            FUN_1449c0562(&local_1c8);
          }
          pplVar16 = (longlong **)(lVar14 + lVar15 + 8);
          local_1e8._0_4_ = local_1b8;
          local_1e8._4_4_ = uStack_1b4;
          local_1e0 = local_1b0;
          local_1dc = local_1ac;
          local_1f8 = local_1c8;
          local_1f0 = (longlong **)local_1c0;
          uVar13 = puVar1[0xc];
          local_1c8 = (longlong *)CONCAT44(1 << ((byte)uVar13 & 0x1f),(int)uVar13 >> 5);
          _local_1b8 = CONCAT44(uVar13,-1 << ((byte)uVar13 & 0x1f));
          local_1b0 = uVar13 & 0xffffffe0;
          local_200 = pplVar16;
          local_1c0 = puVar4;
          if (puVar1[0xc] != uVar13) {
            FUN_1449c0562(&local_1c8);
            uVar13 = uStack_1b4;
          }
          puVar4 = local_1c0;
          uVar18 = local_218;
          if ((local_200 != pplVar16 || local_1f0 != (longlong **)local_1c0) ||
              local_1e8._4_4_ != uVar13) {
            do {
              lVar14 = (longlong)(int)local_1e8._4_4_;
              plVar2 = *local_200;
              FUN_146b7ffa6(local_230,plVar2 + lVar14 * 3);
              FUN_1457adc9c(&local_158,&local_1c8,plVar2 + lVar14 * 3,0);
              local_1e8._0_4_ = (uint)local_1e8 & ~local_1f8._4_4_;
              FUN_1449c0562(&local_1f8);
              uVar18 = local_218;
            } while (local_200 != pplVar16 ||
                     (local_1f0 != (longlong **)puVar4 || local_1e8._4_4_ != uVar13));
          }
        }
        local_188 = (undefined4 *)CONCAT44(local_188._4_4_,(uint)local_188 & ~local_198._4_4_);
        FUN_1449c0562(&local_198);
        iVar5 = local_188._4_4_;
        puVar4 = local_188;
      } while (local_1a0 != local_108 || (puStack_190 != local_f8 || local_188._4_4_ != (int)uVar18)
              );
    }
    local_188 = puVar4;
    local_198 = &local_148;
    local_1a0 = (longlong *)0x100000000;
    puStack_190 = (undefined1 *)0xffffffff;
    local_188 = (undefined4 *)((ulonglong)local_188 & 0xffffffff00000000);
    iVar5 = 0;
    if (local_130 != 0) {
      FUN_1449c0562(&local_1a0);
      iVar5 = local_130;
    }
    local_1e8 = puStack_190;
    uVar9 = local_1e8;
    local_1e0 = (uint)local_188;
    local_1dc = local_188._4_4_;
    local_1f8 = local_1a0;
    local_1f0 = local_198;
    local_1e8._4_4_ = (uint)((ulonglong)puStack_190 >> 0x20);
    local_200 = &local_158;
    if ((local_1e8._4_4_ != iVar5) || (local_198 != &local_148)) {
      iVar7 = local_1e8._4_4_;
      local_1e8 = uVar9;
      do {
        plVar2 = *local_200;
        FUN_146b43eee(&local_1a0,*local_220,plVar2 + (longlong)iVar7 * 3);
        iVar3 = (int)local_198 + -1;
        if ((int)local_198 == 0) {
          iVar3 = 0;
        }
        local_248 = iVar3 + 1 + (uint)(*(int *)(local_228 + 0x10) == 0);
        local_210 = (undefined2 *)0x0;
        FUN_14125bce8(&local_210,*(undefined8 *)(local_228 + 8),*(int *)(local_228 + 0x10),0);
        FUN_1401aebe8(&local_210,local_1a0,iVar3);
        if (local_1a0 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        plVar10 = (longlong *)FUN_14054d1d4();
        puVar12 = &DAT_149dfb77a;
        if (local_208 != 0) {
          puVar12 = local_210;
        }
        puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x18))(plVar10,puVar12,0);
        if (puVar11 != (undefined8 *)0x0) {
          local_1a0 = (longlong *)0x4200000003;
          local_198 = (longlong **)0x0;
          puStack_190 = (undefined1 *)0x0;
          local_188 = (undefined4 *)0x10000000000000;
          local_180 = CONCAT22(local_180._2_2_,0x100);
          uStack_168 = 0;
          uStack_164 = 0;
          uStack_178 = 0;
          uStack_170 = 0;
          local_16c = 0;
          FUN_146b46ec3(puVar11,&local_1a0);
          FUN_144980568(local_238,&local_1c8,(undefined4 *)((longlong)&local_188 + 4));
          local_1c8 = plVar2 + (longlong)iVar7 * 3;
          local_1c0 = (undefined4 *)((longlong)&local_188 + 4);
          FUN_146b4e46a(local_230,local_1a4,&local_1c8);
          (**(code **)*puVar11)(puVar11,1);
        }
        if (local_210 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        local_1e8 = CONCAT44(local_1e8._4_4_,(uint)local_1e8 & ~local_1f8._4_4_);
        FUN_1449c0562(&local_1f8);
        iVar7 = local_1e8._4_4_;
        uVar9 = local_1e8;
      } while (local_200 != &local_158 || (local_1f0 != &local_148 || local_1e8._4_4_ != iVar5));
    }
    local_1e8 = uVar9;
    local_110 = 0;
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    FUN_140149fc2(&local_158);
    FUN_1447a1747(local_1d8,uStack_1d0 & 0xffffffff);
    if (local_1d8 != 0) {
      FUN_1400020a8();
    }
    local_c0 = 0;
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    FUN_146b7a0cc(local_108);
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_146b49a2a(local_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_238;
}



// FUNCTION 146b6618a FUN_146b6618a body=78 status=ok
// SIG undefined FUN_146b6618a(void)

undefined8
FUN_146b6618a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x340,0x10);
  FUN_146b64744(uVar1,param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 146b661d8 FUN_146b661d8 body=1010 status=ok
// SIG undefined FUN_146b661d8(void)

undefined8 *
FUN_146b661d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined8 *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = &PTR_FUN_149f31980;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  uVar3 = (**(code **)(*param_4 + 0x18))(param_4);
  param_1[5] = uVar3;
  uVar3 = (**(code **)(*(longlong *)param_1[3] + 0x28))();
  param_1[6] = uVar3;
  uVar3 = (**(code **)(*(longlong *)param_1[3] + 0x50))();
  param_1[7] = uVar3;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xb),4000);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0x13) = 100;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_140504644(param_1 + 0x14,100);
  FUN_146b665cc(param_1 + 0x14,*(undefined4 *)(param_1 + 0x13));
  plVar2 = (longlong *)param_1[4];
  FUN_140056680(local_88,L"Scanner: Created Scanners");
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,local_88,4,0);
  param_1[0x18] = uVar3;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[4];
  FUN_140056680(local_88,L"Scanner: Running Scanners");
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,local_88,4,0);
  param_1[0x19] = uVar3;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[4];
  FUN_140056680(local_88,L"Scanner: Complete Scanners");
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,local_88,4,0);
  param_1[0x1a] = uVar3;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[4];
  FUN_140056680(local_88,L"Scanner: CPU Time");
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,local_88,0,0);
  param_1[0x1b] = uVar3;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[4];
  FUN_140056680(local_88,L"Scanner: Real Time");
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,local_88,0,0);
  param_1[0x1c] = uVar3;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[4];
  FUN_140056680(local_88,L"Scanner: Hash Collisions");
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,local_88,4,0);
  param_1[0x1d] = uVar3;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[4];
  FUN_140056680(local_88,L"Scanner: Total Data");
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,local_88,1,0);
  param_1[0x1e] = uVar3;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[4];
  FUN_140056680(local_88,L"Scanner: Skipped Data");
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,local_88,1,0);
  param_1[0x1f] = uVar3;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[4];
  FUN_140056680(local_88,L"Scanner: Processing Speed");
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,local_88,2,0);
  param_1[0x20] = uVar3;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  LOCK();
  *(longlong *)param_1[0x18] = *(longlong *)param_1[0x18] + 1;
  UNLOCK();
  LOCK();
  DAT_14c991e18 = DAT_14c991e18 + 1;
  UNLOCK();
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149f338e0;
  local_88[0] = FUN_14295037c;
  local_c8 = 0;
  local_b8 = 0;
  local_60 = param_1;
  FUN_142944a9f(local_d8);
  FUN_146b7a3d4(param_1 + 9,local_d8);
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_d0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar4 = &local_68;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b665cc FUN_146b665cc body=68 status=ok
// SIG undefined FUN_146b665cc(void)

int FUN_146b665cc(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_140c60952(param_1,iVar1);
  }
  FUN_140100f9f((longlong)iVar1 * 0x10 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 146b66610 FUN_146b66610 body=154 status=ok
// SIG undefined FUN_146b66610(void)

void FUN_146b66610(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_149f31980;
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x44) = 1;
  UNLOCK();
  lVar4 = param_1[9];
  if (param_1[9] != 0) {
    while( true ) {
      do {
        lVar6 = lVar4;
        lVar4 = 0;
      } while (lVar6 == 0);
      plVar3 = *(longlong **)(lVar6 + 0x70);
      cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
      if (cVar5 != '\0') break;
      lVar4 = param_1[9];
    }
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  plVar3 = (longlong *)param_1[10];
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
                    /* WARNING: Could not recover jumptable at 0x000146b6669f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b666b4 FUN_146b666b4 body=118 status=ok
// SIG undefined FUN_146b666b4(void)

undefined8 * FUN_146b666b4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  while ((*(byte *)(lVar2 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar2 + 0x70) + 0x20))(*(longlong **)(lVar2 + 0x70),0xffffffff,0);
  }
  *param_2 = 0;
  iVar1 = *(int *)(lVar2 + 0x88);
  _Src = *(void **)(lVar2 + 0x80);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_146b80306(param_2,iVar1);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 << 5);
  }
  return param_2;
}



// FUNCTION 146b66742 FUN_146b66742 body=769 status=ok
// SIG undefined FUN_146b66742(void)

ulonglong FUN_146b66742(longlong param_1,undefined8 param_2,int *param_3,int *param_4,
                       undefined8 *param_5)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong unaff_RBP;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  bool bVar16;
  
  piVar1 = (int *)(param_1 + 0xb0);
  iVar5 = *(int *)(param_1 + 0xb0);
  iVar10 = *(int *)(param_1 + 0xb4);
  iVar9 = 0;
  if (0 < iVar5) {
    iVar9 = iVar5 + -1;
  }
  iVar15 = *param_3;
  if (iVar15 == iVar10) {
    puVar2 = *(uint **)(param_1 + 0xa0);
    uVar12 = puVar2[1] | *puVar2 | puVar2[2] | puVar2[3];
    unaff_RBP = (ulonglong)CONCAT31((int3)(uVar12 >> 8),uVar12 != 0);
    if ((((iVar9 != 0 && uVar12 != 0) &&
         (lVar13 = (longlong)iVar9, unaff_RBP = lVar13 * 0x10, *puVar2 == puVar2[lVar13 * 4])) &&
        (puVar2[1] == puVar2[lVar13 * 4 + 1])) &&
       ((puVar2[2] == puVar2[lVar13 * 4 + 2] && (puVar2[3] == puVar2[lVar13 * 4 + 3])))) {
      if (*(int *)(param_1 + 0xb8) == 0) {
        *(int *)(param_1 + 0xb8) = iVar9;
        *(undefined4 *)(param_1 + 0xbc) = 1;
        iVar15 = *param_3;
      }
      iVar5 = FUN_146b31cda(param_2);
      iVar5 = iVar5 + iVar15 + -1;
      if (*(char *)(**(longlong **)(param_1 + 0x10) + (longlong)(iVar5 - *(int *)(param_1 + 0xb8)))
          == *(char *)(**(longlong **)(param_1 + 0x10) + (longlong)iVar5)) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(param_1 + 0xbc) * 0x10);
        iVar5 = piVar1[1];
        iVar10 = piVar1[2];
        iVar9 = piVar1[3];
        *param_4 = *piVar1;
        param_4[1] = iVar5;
        param_4[2] = iVar10;
        param_4[3] = iVar9;
        bVar16 = ((param_4[1] != 0 || *param_4 != 0) || param_4[2] != 0) || param_4[3] != 0;
        uVar14 = CONCAT71((int7)(unaff_RBP >> 8),bVar16);
        if (bVar16) {
          plVar4 = *(longlong **)(param_1 + 0x30);
          uVar7 = FUN_1447addd0(param_4,0x10);
          iVar5 = FUN_146b505d2(plVar4,uVar7,param_4);
          if (iVar5 == -1) {
            lVar13 = 0;
          }
          else {
            lVar13 = (longlong)iVar5 * 0x2c + *plVar4;
          }
          *(undefined4 *)(param_5 + 2) = *(undefined4 *)(lVar13 + 0x20);
          uVar8 = *(undefined8 *)(lVar13 + 0x18);
          *param_5 = *(undefined8 *)(lVar13 + 0x10);
          param_5[1] = uVar8;
        }
        *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
        uVar6 = *(int *)(param_1 + 0xbc) + 1;
        uVar12 = 1;
        if (uVar6 <= *(uint *)(param_1 + 0xb8)) {
          uVar12 = uVar6;
        }
        *(uint *)(param_1 + 0xbc) = uVar12;
        goto LAB_146b6696c;
      }
      *(undefined4 *)(param_1 + 0xb4) = 0;
      iVar15 = *param_3;
      iVar10 = 0;
      goto LAB_146b668b3;
    }
LAB_146b668bc:
    if (*(int *)(param_1 + 0x98) <= iVar5) goto LAB_146b668c4;
  }
  else {
LAB_146b668b3:
    if (iVar15 == iVar10) {
      iVar5 = *piVar1;
      goto LAB_146b668bc;
    }
LAB_146b668c4:
    puVar3 = *(undefined8 **)(param_1 + 0xa0);
    *puVar3 = 0;
    puVar3[1] = 0;
    piVar1[0] = 0;
    piVar1[1] = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0x28);
  lVar13 = FUN_146b31cce(param_2);
  if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
    plVar11 = plVar4 + 7;
    if ((longlong *)plVar4[8] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[8];
    }
    iVar5 = *(int *)((longlong)plVar11 +
                    (ulonglong)
                    ((int)plVar4[9] - 1U & (int)lVar13 + (int)((ulonglong)lVar13 >> 0x20) * 0x17) *
                    4);
    if (iVar5 != -1) {
      do {
        if (*(longlong *)(*plVar4 + (longlong)iVar5 * 0x60) == lVar13) {
          uVar8 = FUN_146b31cd4(param_2);
          FUN_146b66a44(uVar8,param_5);
          plVar4 = *(longlong **)(param_1 + 0x38);
          iVar5 = FUN_146b7f078(plVar4,*(undefined4 *)param_5,param_5);
          if (iVar5 != -1) {
            puVar3 = *(undefined8 **)(*plVar4 + 0x18 + (longlong)iVar5 * 0x70);
            uVar8 = puVar3[1];
            *(undefined8 *)param_4 = *puVar3;
            *(undefined8 *)(param_4 + 2) = uVar8;
            iVar5 = *(int *)(param_1 + 0xb0);
            *(int *)(param_1 + 0xb0) = iVar5 + 1;
            uVar8 = *(undefined8 *)(param_4 + 2);
            puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar5 * 0x10);
            *puVar3 = *(undefined8 *)param_4;
            puVar3[1] = uVar8;
            *(int *)(param_1 + 0xb4) = *param_3 + 1;
            uVar14 = CONCAT71((int7)(unaff_RBP >> 8),1);
            goto LAB_146b6696c;
          }
          LOCK();
          **(longlong **)(param_1 + 0xe8) = **(longlong **)(param_1 + 0xe8) + 1;
          UNLOCK();
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x60 + *plVar4 + 0x58);
      } while (iVar5 != -1);
    }
  }
  iVar5 = *piVar1;
  if (0 < (longlong)iVar5) {
    *(int *)(param_1 + 0xb0) = iVar5 + 1;
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar5 * 0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  }
  uVar14 = 0;
LAB_146b6696c:
  return uVar14 & 0xffffffff;
}



// FUNCTION 146b66a44 FUN_146b66a44 body=193 status=ok
// SIG undefined FUN_146b66a44(void)

void FUN_146b66a44(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined8 local_90;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *param_1;
  uVar2 = param_1[4];
  uVar3 = uVar1 - param_1[5];
  if (uVar2 <= uVar3) {
    uVar3 = uVar2;
  }
  local_a8 = 0x67452301;
  uStack_a4 = 0xefcdab89;
  uStack_a0 = 0x98badcfe;
  uStack_9c = 0x10325476;
  local_98 = 0xc3d2e1f0;
  local_90 = 0;
  FUN_140c54e34(&local_a8,
                (ulonglong)((uVar1 - uVar2) + param_1[5]) % (ulonglong)uVar1 +
                *(longlong *)(param_1 + 2),uVar3);
  if (uVar3 < param_1[4]) {
    FUN_140c54e34(&local_a8,*(undefined8 *)(param_1 + 2));
  }
  FUN_140c54d7a(&local_a8);
  FUN_142787a10(&local_a8,param_2);
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b66b06 FUN_146b66b06 body=290 status=ok
// SIG undefined FUN_146b66b06(void)

int FUN_146b66b06(longlong *param_1,int param_2,ulonglong *param_3,undefined8 *param_4,uint *param_5
                 )

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar2 = (int)param_1[1];
  if (param_2 < iVar2) {
    uVar3 = *param_3;
    uVar8 = (uVar3 + *param_5) - 1;
    lVar6 = *param_1;
    lVar9 = (longlong)iVar2 - (longlong)param_2;
    lVar10 = (longlong)param_2 << 5;
    iVar7 = param_2;
    do {
      uVar4 = *(ulonglong *)(lVar6 + lVar10);
      if (uVar3 < uVar4) {
        if (uVar4 <= uVar8) {
          return param_2;
        }
        *(int *)(param_1 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0xc) == iVar2) {
          FUN_146b8035e(param_1,iVar2);
          lVar6 = *param_1;
        }
        memmove((void *)(lVar6 + lVar10 + 0x20),(void *)(lVar6 + lVar10),
                (ulonglong)(uint)(iVar2 - iVar7) << 5);
        lVar6 = *param_1;
        *(ulonglong *)(lVar6 + lVar10) = *param_3;
        uVar5 = param_4[1];
        puVar1 = (undefined8 *)(lVar6 + 8 + lVar10);
        *puVar1 = *param_4;
        puVar1[1] = uVar5;
        *(uint *)(lVar6 + 0x18 + lVar10) = *param_5;
        return iVar7;
      }
      if (uVar3 == uVar4) {
        return iVar7;
      }
      if (uVar8 <= (uVar4 + *(uint *)(lVar6 + 0x18 + lVar10)) - 1) {
        return iVar7;
      }
      iVar7 = iVar7 + 1;
      lVar10 = lVar10 + 0x20;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_146b8035e(param_1,iVar2);
  }
  lVar6 = *param_1;
  lVar9 = (longlong)iVar2 * 0x20;
  *(ulonglong *)(lVar6 + lVar9) = *param_3;
  uVar5 = param_4[1];
  puVar1 = (undefined8 *)(lVar6 + 8 + lVar9);
  *puVar1 = *param_4;
  puVar1[1] = uVar5;
  *(uint *)(lVar6 + 0x18 + lVar9) = *param_5;
  return iVar2;
}



// FUNCTION 146b66c28 FUN_146b66c28 body=1028 status=ok
// SIG undefined FUN_146b66c28(void)

undefined8 * FUN_146b66c28(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  LARGE_INTEGER LVar11;
  undefined4 uVar12;
  uint *puVar13;
  code *pcVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_168 [32];
  uint *local_148;
  undefined4 local_134;
  undefined8 *local_130;
  longlong *local_128;
  longlong local_120;
  LARGE_INTEGER local_118;
  uint *local_110;
  LARGE_INTEGER local_108;
  uint local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0 [32];
  longlong local_c0;
  uint local_a4;
  LARGE_INTEGER local_a0;
  uint local_98 [6];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  LOCK();
  DAT_14c991e28 = DAT_14c991e28 + 1;
  UNLOCK();
  local_120 = param_1 + 0x58;
  *param_2 = 0;
  param_2[1] = 0;
  local_130 = param_2;
  FUN_146b341de();
  lVar10 = (longlong)*(int *)(*(undefined8 **)(param_1 + 8) + 1);
  if (lVar10 != 0) {
    puVar13 = (uint *)**(undefined8 **)(param_1 + 8);
    local_110 = puVar13 + lVar10;
    pcVar14 = QueryPerformanceCounter_exref;
    do {
      local_a4 = *puVar13;
      FUN_146b31df2(local_e0);
      local_f8 = 0;
      uStack_f0 = 0;
      local_98[0] = 0;
      local_98[1] = 0;
      local_98[2] = 0;
      local_98[3] = 0;
      local_98[4] = 0;
      uVar1 = *(uint *)(*(undefined8 **)(param_1 + 0x10) + 1);
      uVar2 = **(undefined8 **)(param_1 + 0x10);
      iVar7 = FUN_146b31cde(local_e0);
      local_a0.s.LowPart = iVar7;
      uVar12 = 0;
      if (iVar7 - 1U < uVar1) {
        FUN_146b31ce4(local_e0,uVar2,&local_a0);
        uVar12 = local_a0.s.LowPart;
      }
      (*pcVar14)(&local_a0);
      local_108.s = local_a0.s;
      plVar3 = *(longlong **)(param_1 + 200);
      local_128 = *(longlong **)(param_1 + 0xe0);
      LOCK();
      lVar10 = *plVar3;
      *plVar3 = *plVar3 + 1;
      UNLOCK();
      if (lVar10 == 0) {
        QueryPerformanceCounter(&local_a0);
        LOCK();
        DAT_14c991e20.s = local_a0.s;
        UNLOCK();
      }
      if (*(int *)(param_1 + 0x44) == 0) {
        LVar11.QuadPart = 0;
        local_134 = 0;
        do {
          uVar1 = local_a4;
          uVar16 = (ulonglong)local_a4;
          uVar15 = uVar12 - local_a4;
          local_148 = local_98;
          local_fc = uVar15;
          cVar6 = FUN_146b66742(param_1,local_e0,&local_fc,&local_f8);
          if (cVar6 == '\0') {
LAB_146b66f36:
            if (*(uint *)(*(longlong **)(param_1 + 0x10) + 1) <= (uint)uVar12) break;
            lVar10 = (longlong)(int)uVar12;
            uVar12 = uVar12 + 1;
            FUN_146b31d56(local_e0,lVar10 + **(longlong **)(param_1 + 0x10));
          }
          else {
            local_118.QuadPart = LVar11.QuadPart + uVar16;
            LVar11.s.HighPart = 0;
            LVar11.s.LowPart = uVar15;
            local_148 = &local_a4;
            local_a0 = LVar11;
            local_134 = FUN_146b66b06(local_130,local_134,&local_a0,&local_f8);
            if ((ulonglong)LVar11 < (ulonglong)local_118) goto LAB_146b66f36;
            FUN_146b31c9a(local_e0);
            uVar15 = *(uint *)(*(longlong **)(param_1 + 0x10) + 1);
            if (uVar15 <= (uVar1 + uVar12) - 1) break;
            lVar10 = **(longlong **)(param_1 + 0x10);
            iVar7 = FUN_146b31cde();
            local_a0.s.LowPart = iVar7;
            uVar9 = 0;
            if (iVar7 - 1U < uVar15 - uVar12) {
              FUN_146b31ce4(local_e0,lVar10 + (int)uVar12,&local_a0);
              uVar9 = local_a0.s.LowPart;
            }
            LOCK();
            **(longlong **)(param_1 + 0xf8) =
                 **(longlong **)(param_1 + 0xf8) + (ulonglong)(uint)uVar9;
            UNLOCK();
            uVar12 = uVar12 + uVar9;
          }
        } while (*(int *)(param_1 + 0x44) == 0);
      }
      plVar4 = *(longlong **)(param_1 + 0xd8);
      QueryPerformanceCounter(&local_a0);
      LOCK();
      *plVar4 = *plVar4 + (local_a0.QuadPart - (longlong)local_108);
      UNLOCK();
      LOCK();
      **(longlong **)(param_1 + 0xf0) =
           **(longlong **)(param_1 + 0xf0) + (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 8);
      UNLOCK();
      lVar10 = **(longlong **)(param_1 + 0xf0);
      lVar5 = *local_128;
      if (*plVar3 < 1) {
        lVar8 = 0;
      }
      else {
        QueryPerformanceCounter(&local_a0);
        lVar8 = local_a0.QuadPart - (longlong)DAT_14c991e20;
      }
      lVar8 = lVar8 + lVar5;
      auVar17._8_4_ = (int)((ulonglong)lVar8 >> 0x20);
      auVar17._0_8_ = lVar8;
      auVar17._12_4_ = 0x45300000;
      LOCK();
      **(longlong **)(param_1 + 0x100) =
           (longlong)
           ((double)lVar10 /
           ((((double)CONCAT44(0x43300000,(int)lVar8) - 4503599627370496.0) +
            (auVar17._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418));
      LVar11 = DAT_14c991e20;
      UNLOCK();
      LOCK();
      *plVar3 = *plVar3 + -1;
      pcVar14 = QueryPerformanceCounter_exref;
      UNLOCK();
      if (*plVar3 == 0) {
        QueryPerformanceCounter(&local_a0);
        LOCK();
        *local_128 = *local_128 + (local_a0.QuadPart - (longlong)LVar11);
        UNLOCK();
      }
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != local_110);
  }
  FUN_146b3441a(local_120);
  LOCK();
  DAT_14c991e28 = DAT_14c991e28 + -1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x40) = 1;
  UNLOCK();
  if ((local_80 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_130;
}



// FUNCTION 146b6702e FUN_146b6702e body=7 status=ok
// SIG undefined FUN_146b6702e(void)

undefined4 FUN_146b6702e(void)

{
  return DAT_14c991e18;
}



// FUNCTION 146b67036 FUN_146b67036 body=78 status=ok
// SIG undefined FUN_146b67036(void)

undefined8
FUN_146b67036(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_146b661d8(uVar1,param_1,param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 146b67084 FUN_146b67084 body=153 status=ok
// SIG undefined FUN_146b67084(void)

ulonglong FUN_146b67084(int param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_140393c76(&local_38,param_2,1);
  memset(local_38,param_1,param_2 & 0xffffffff);
  if ((int)param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
    do {
      uVar2 = (uVar2 << 1 | (ulonglong)((longlong)uVar2 < 0)) ^
              (&DAT_14c9912e0)[*(byte *)((longlong)local_38 + uVar1)];
      uVar1 = uVar1 + 1;
    } while ((param_2 & 0xffffffff) != uVar1);
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146b6711e FUN_146b6711e body=145 status=ok
// SIG undefined FUN_146b6711e(void)

undefined8 * FUN_146b6711e(undefined8 *param_1,int param_2,uint param_3)

{
  undefined1 auStack_58 [32];
  void *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_140393c76(&local_38,param_3,1);
  memset(local_38,param_2,(ulonglong)param_3);
  FUN_140f0be04(local_38,(ulonglong)param_3,param_1);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b671b0 FUN_146b671b0 body=1226 status=ok
// SIG undefined FUN_146b671b0(void)

longlong *
FUN_146b671b0(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 auStack_158 [40];
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 **local_e8;
  undefined8 *local_d8;
  longlong lStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_1 = (longlong)&PTR_FUN_149f31b60;
  param_1[1] = param_2;
  param_1[2] = param_3;
  FUN_146b636f0(param_1 + 3,param_4);
  *(undefined2 *)(param_1 + 9) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 4;
  *(undefined4 *)(param_1 + 10) = 1;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x144;
  *(undefined4 *)(param_1 + 0xb) = 1;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 1;
  *(undefined4 *)(param_1 + 0xc) = param_5;
  lStack_d0 = (longlong)&local_f0 + 4;
  local_f0 = (undefined8 *)CONCAT44(local_f0._4_4_,param_5);
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  local_d8 = &local_f0;
  FUN_146b803e4(param_1 + 0xd);
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  local_128 = param_1 + 0x2c;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  local_130 = param_1 + 0x36;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  local_118 = param_1 + 0x40;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  local_120 = param_1 + 0x4a;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  local_104 = 1;
  uStack_fc = 0;
  iStack_f8 = 0;
  FUN_146b6711e(&local_d8,0,(int)param_1[0xc]);
  (**(code **)(*param_1 + 0x50))(param_1,&local_108,&local_d8);
  uVar3 = FUN_146b67084(0,(int)param_1[0xc]);
  local_d8 = (undefined8 *)0x0;
  lStack_d0 = 0;
  local_c8 = 0xffffffff;
  local_a0 = 0;
  local_98 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_94 = 0xffffffff00000080;
  local_8c = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_110 = uVar3;
  puVar4 = (undefined4 *)FUN_146b6767c(&local_d8);
  *puVar4 = (undefined4)local_104;
  puVar4[1] = local_104._4_4_;
  puVar4[2] = uStack_fc;
  puVar4[3] = iStack_f8;
  *(undefined4 *)(local_d8 + 2) = 0;
  *(int *)((longlong)local_d8 + 0x14) = (int)param_1[0xc];
  local_70 = 0;
  uVar3 = FUN_146b50890(local_128,(int)((ulonglong)uVar3 >> 0x20) * 0x17 + (int)uVar3,&local_110);
  FUN_1457adc9c(uVar3,&local_f0,&local_104,0);
  local_f0 = &local_104;
  local_e8 = (undefined8 **)&local_110;
  FUN_146b7e32e(local_130,&local_f4,&local_f0);
  plVar2 = local_118;
  local_e8 = (undefined8 **)&local_108;
  local_f0 = &local_104;
  FUN_146b804b2(local_118,&local_f4,&local_f0);
  plVar1 = local_120;
  local_f0 = &local_104;
  local_e8 = &local_d8;
  FUN_146b80a02(local_120,&local_f4,&local_f0);
  iVar5 = 1;
  do {
    iStack_f8 = iVar5;
    FUN_146b6711e(&local_f0,iVar5,(int)param_1[0xc]);
    (**(code **)(*param_1 + 0x50))(param_1,&local_f4,&local_f0);
    local_108 = local_f4;
    local_110 = FUN_146b67084(iVar5,(int)param_1[0xc]);
    *(undefined4 *)local_d8 = (undefined4)local_104;
    *(undefined4 *)((longlong)local_d8 + 4) = local_104._4_4_;
    *(undefined4 *)(local_d8 + 1) = uStack_fc;
    *(int *)((longlong)local_d8 + 0xc) = iStack_f8;
    uVar3 = FUN_146b50890(local_128,(int)((ulonglong)local_110 >> 0x20) * 0x17 + (int)local_110,
                          &local_110);
    FUN_1457adc9c(uVar3,&local_f0,&local_104,0);
    local_f0 = &local_104;
    local_e8 = (undefined8 **)&local_110;
    FUN_146b7e32e(local_130,&local_f4,&local_f0);
    local_e8 = (undefined8 **)&local_108;
    local_f0 = &local_104;
    FUN_146b804b2(plVar2,&local_f4,&local_f0);
    local_e8 = &local_d8;
    local_f0 = &local_104;
    FUN_146b80a02(plVar1,&local_f4,&local_f0);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x100);
  FUN_146b676bc(&local_d8);
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6767c FUN_146b6767c body=63 status=ok
// SIG undefined FUN_146b6767c(void)

longlong FUN_146b6767c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146b55304(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_146b804ac(lVar2);
  return lVar2;
}



// FUNCTION 146b676bc FUN_146b676bc body=69 status=ok
// SIG undefined FUN_146b676bc(void)

void FUN_146b676bc(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 3);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146b67702 FUN_146b67702 body=378 status=ok
// SIG undefined FUN_146b67702(void)

void FUN_146b67702(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f31b60;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  FUN_146b7a434(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x53) = 0;
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_146b7a5c6(param_1 + 0x4a);
  *(undefined4 *)(param_1 + 0x49) = 0;
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_146b7a738(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_146b48100(param_1 + 0x36);
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146b4865e(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1404112b2(param_1 + 0x21);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bc218(param_1 + 0xd);
  param_1[3] = &PTR_FUN_149f33280;
  FUN_146b76cf6(param_1 + 3);
  return;
}



// FUNCTION 146b67894 FUN_146b67894 body=1391 status=ok
// SIG undefined FUN_146b67894(void)

void FUN_146b67894(longlong param_1)

{
  LARGE_INTEGER LVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_158 [40];
  LARGE_INTEGER local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  LARGE_INTEGER local_108;
  LARGE_INTEGER LStack_100;
  longlong local_f8;
  uint local_f0;
  int iStack_ec;
  undefined8 uStack_e8;
  int local_dc;
  void *local_d8;
  ulonglong uStack_d0;
  LARGE_INTEGER local_c0;
  longlong lStack_b8;
  uint local_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar5 = *(longlong **)(param_1 + 0x10);
  FUN_140056680(&local_108,L"BuildA: Chunked data size");
  plVar5 = (longlong *)(**(code **)(*plVar5 + 8))(plVar5,&local_108,1,0);
  if (local_108.QuadPart != 0) {
    FUN_1400020a8();
  }
  plVar6 = *(longlong **)(param_1 + 0x10);
  FUN_140056680(&local_108,L"BuildA: Chunking time");
  plVar6 = (longlong *)(**(code **)(*plVar6 + 8))(plVar6,&local_108,0,0);
  if (local_108.QuadPart != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  FUN_140056680(&local_108,L"BuildA: Progress");
  local_128 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2,&local_108,3,0);
  if (local_108.QuadPart != 0) {
    FUN_1400020a8();
  }
  local_110 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
  lVar14 = 0;
  for (lVar13 = *local_110; lVar13 != 0; lVar13 = *(longlong *)(lVar13 + 0x18)) {
    lVar14 = lVar14 + *(longlong *)(lVar13 + 8);
  }
  iVar12 = *(int *)(param_1 + 0x60);
  local_d8 = (void *)0x0;
  uStack_d0 = 0;
  if (iVar12 * 0x21 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar12 * 0x21);
  }
  if (iVar12 != 0) {
    FUN_144893a1c(&local_d8);
  }
  QueryPerformanceCounter(&local_108);
  local_130.s = local_108.s;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  if (cVar3 == '\0') {
    auVar16._8_4_ = (int)((ulonglong)lVar14 >> 0x20);
    auVar16._0_8_ = lVar14;
    auVar16._12_4_ = 0x45300000;
    lVar13 = 0;
    local_120 = plVar5;
    local_118 = plVar6;
    do {
      iVar9 = (int)uStack_d0;
      uVar11 = uStack_d0 & 0xffffffff;
      FUN_140393c76(&local_d8,(int)uStack_d0 + iVar12 * 0x20,0);
      iVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 8))
                        (*(longlong **)(param_1 + 8),uVar11 + (longlong)local_d8,iVar12 * 0x20,1);
      FUN_140393c76(&local_d8,iVar9 + iVar4,0);
      local_108.QuadPart = 0;
      LStack_100.QuadPart = 0;
      FUN_146b30ae2(local_110,lVar13,(longlong)(int)uStack_d0,&local_108);
      local_dc = 0;
      iVar9 = (int)uStack_d0 - *(int *)(param_1 + 0x60);
      if (-1 < iVar9) {
        do {
          iVar4 = local_dc;
          FUN_146b67e04(param_1,&local_d8,&local_dc,&local_108);
          local_dc = iVar4 + *(int *)(param_1 + 0x60);
        } while (local_dc <= iVar9);
      }
      iVar9 = local_dc;
      cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
      iVar4 = (int)uStack_d0;
      if ((cVar3 != '\0') && (iVar9 = (int)uStack_d0, *(int *)(param_1 + 0x60) <= (int)uStack_d0)) {
        local_c0.s.LowPart = (int)uStack_d0 - *(int *)(param_1 + 0x60);
        FUN_146b67e04(param_1,&local_d8,&local_c0,&local_108);
        iVar4 = (int)uStack_d0;
      }
      uVar10 = iVar4 - iVar9;
      if (uVar10 != 0 && iVar9 <= iVar4) {
        memcpy(local_d8,(void *)((longlong)iVar9 + (longlong)local_d8),(ulonglong)uVar10);
      }
      FUN_144a5eaa2(&local_d8,uVar10);
      plVar5 = local_120;
      lVar13 = (lVar13 + iVar4) - (longlong)(int)uStack_d0;
      auVar15._8_4_ = (int)((ulonglong)lVar13 >> 0x20);
      auVar15._0_8_ = lVar13;
      auVar15._12_4_ = 0x45300000;
      LOCK();
      *local_128 = (longlong)
                   (((((double)CONCAT44(0x43300000,(int)lVar13) - 4503599627370496.0) +
                     (auVar15._8_8_ - 1.9342813113834067e+25)) /
                    (((double)CONCAT44(0x43300000,(int)lVar14) - 4503599627370496.0) +
                    (auVar16._8_8_ - 1.9342813113834067e+25))) * 10000.0);
      UNLOCK();
      LOCK();
      *local_120 = lVar13;
      UNLOCK();
      QueryPerformanceCounter(&local_c0);
      plVar6 = local_118;
      LOCK();
      *local_118 = *local_118 + (local_c0.QuadPart - (longlong)local_130);
      UNLOCK();
      QueryPerformanceCounter(&local_c0);
      local_130 = local_c0;
      LVar1 = local_108;
      while (LVar1.QuadPart != 0) {
        LVar1 = (LARGE_INTEGER)((LARGE_INTEGER *)(LVar1.QuadPart + 0x18))->QuadPart;
        FUN_1400020a8();
      }
      cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    } while (cVar3 == '\0');
  }
  LOCK();
  *local_128 = 10000;
  UNLOCK();
  LOCK();
  *plVar5 = lVar14;
  UNLOCK();
  LVar1.QuadPart = param_1 + 0x200;
  lVar13 = param_1 + 0x210;
  local_c0.QuadPart = 0x100000000;
  local_b0 = 0xffffffff;
  iStack_ac = 0;
  uStack_a8 = 0;
  lStack_b8 = lVar13;
  if (*(int *)(param_1 + 0x228) == 0) {
    iVar12 = 0;
  }
  else {
    FUN_1449c0562(&local_c0);
    iVar12 = *(int *)(param_1 + 0x228);
  }
  uStack_e8 = CONCAT44(uStack_a4,uStack_a8);
  local_f0 = local_b0;
  iStack_ec = iStack_ac;
  LStack_100.s = local_c0.s;
  local_f8 = lStack_b8;
  local_108.QuadPart = LVar1.QuadPart;
  if ((iStack_ac != iVar12) || (lStack_b8 != lVar13)) {
    do {
      lVar14 = *(longlong *)local_108;
      lVar7 = (longlong)iStack_ec;
      uVar8 = FUN_146b80fa2(param_1 + 0x2a0,*(undefined4 *)(lVar14 + lVar7 * 0x1c + 0x10));
      FUN_1457adc9c(uVar8,&local_c0,lVar14 + lVar7 * 0x1c,0);
      local_f0 = local_f0 & ~LStack_100.s.HighPart;
      FUN_1449c0562(&LStack_100);
    } while (local_108.QuadPart != LVar1.QuadPart || (local_f8 != lVar13 || iStack_ec != iVar12));
  }
  QueryPerformanceCounter(&local_108);
  LOCK();
  *plVar6 = *plVar6 + (local_108.QuadPart - (longlong)local_130);
  UNLOCK();
  *(undefined1 *)(param_1 + 0x158) = 1;
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b67e04 FUN_146b67e04 body=540 status=ok
// SIG undefined FUN_146b67e04(void)

void FUN_146b67e04(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  byte *pbVar1;
  GUID *pGVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_118 [44];
  undefined1 local_ec [4];
  GUID local_e8;
  ulonglong local_d0;
  GUID *local_c8;
  undefined1 *puStack_c0;
  undefined1 local_ac [4];
  GUID *local_a8;
  ulonglong *puStack_a0;
  undefined8 local_98;
  undefined **local_88;
  longlong *local_80;
  GUID *local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((ulonglong)*(uint *)(param_1 + 0xc) != 0) {
    uVar5 = 0;
    uVar7 = 0;
    do {
      uVar6 = uVar7 << 1 | (ulonglong)((longlong)uVar7 < 0);
      pbVar1 = (byte *)((longlong)*param_3 + *param_2 + uVar5);
      uVar7 = (&DAT_14c9912e0)[*pbVar1] ^ uVar6;
      uVar5 = uVar5 + 1;
    } while (*(uint *)(param_1 + 0xc) != uVar5);
    local_d0 = uVar7;
    if ((&DAT_14c9912e0)[*pbVar1] != uVar6) {
      local_e8.Data1 = 0;
      local_e8.Data2 = 0;
      local_e8.Data3 = 0;
      local_e8.Data4[0] = '\0';
      local_e8.Data4[1] = '\0';
      local_e8.Data4[2] = '\0';
      local_e8.Data4[3] = '\0';
      local_e8.Data4[4] = '\0';
      local_e8.Data4[5] = '\0';
      local_e8.Data4[6] = '\0';
      local_e8.Data4[7] = '\0';
      CoCreateGuid(&local_e8);
      uVar3 = FUN_146b50890(param_1 + 0x2c,(int)(uVar7 >> 0x20) * 0x17 + (int)uVar7,&local_d0);
      FUN_1457adc9c(uVar3,&local_a8,&local_e8,0);
      local_a8 = &local_e8;
      puStack_a0 = &local_d0;
      FUN_146b7e32e(param_1 + 0x36,&local_c8,&local_a8);
      local_a8 = (GUID *)0x0;
      puStack_a0 = (ulonglong *)0x0;
      local_98 = (undefined ***)((ulonglong)local_98._4_4_ << 0x20);
      FUN_140f0be04((longlong)*param_3 + *param_2,(int)param_1[0xc],&local_a8);
      (**(code **)(*param_1 + 0x50))(param_1,local_ec,&local_a8);
      local_c8 = &local_e8;
      puStack_c0 = local_ec;
      FUN_146b8166e(param_1 + 0x40,local_ac,&local_c8);
      local_c8 = (GUID *)0x0;
      puStack_c0 = (undefined1 *)0x0;
      FUN_146b30ae2(param_4,(longlong)*param_3,(int)param_1[0xc],&local_c8);
      local_98 = (undefined ***)0x0;
      local_88 = &PTR_LAB_149f33950;
      local_a8 = (GUID *)FUN_142950436;
      local_80 = param_1;
      local_78 = &local_e8;
      FUN_146b62a66(param_1 + 3,&local_c8,&local_a8);
      pGVar2 = local_c8;
      if (local_a8 != (GUID *)0x0) {
        pppuVar4 = local_98;
        if (local_98 == (undefined ***)0x0) {
          pppuVar4 = &local_88;
        }
        (*(code *)(*pppuVar4)[2])();
        pGVar2 = local_c8;
      }
      while (pGVar2 != (GUID *)0x0) {
        pGVar2 = *(GUID **)pGVar2[1].Data4;
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b68032 FUN_146b68032 body=74 status=ok
// SIG undefined FUN_146b68032(void)

longlong FUN_146b68032(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = FUN_1447addd0(param_2,0x10);
  iVar2 = FUN_146b7e2ba((longlong *)(param_1 + 0x1b0),uVar1,param_2);
  if (iVar2 == -1) {
    lVar3 = 0;
  }
  else {
    lVar3 = (longlong)iVar2 * 0x20 + *(longlong *)(param_1 + 0x1b0);
  }
  return lVar3 + 0x10;
}



// FUNCTION 146b6807c FUN_146b6807c body=95 status=ok
// SIG undefined FUN_146b6807c(void)

void FUN_146b6807c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = FUN_1447addd0(param_2,0x10);
  iVar2 = FUN_146b80740(param_1 + 0x40,uVar1,param_2);
  if (iVar2 == -1) {
    lVar3 = 0;
  }
  else {
    lVar3 = (longlong)iVar2 * 0x1c + param_1[0x40];
  }
                    /* WARNING: Could not recover jumptable at 0x000146b680d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))(param_1,lVar3 + 0x10);
  return;
}



// FUNCTION 146b680dc FUN_146b680dc body=32 status=ok
// SIG undefined FUN_146b680dc(void)

undefined8 FUN_146b680dc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14482b35e(param_1 + 0xb8,param_2,param_3,0);
  return param_2;
}



// FUNCTION 146b680fc FUN_146b680fc body=32 status=ok
// SIG undefined FUN_146b680fc(void)

undefined8 FUN_146b680fc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140623ef4(param_1 + 0x108,param_2,param_3,0);
  return param_2;
}



// FUNCTION 146b6811c FUN_146b6811c body=82 status=ok
// SIG undefined FUN_146b6811c(void)

undefined4 * FUN_146b6811c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  
  iVar1 = *(int *)(param_3 + 1);
  if (iVar1 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_3;
  }
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar4);
  uVar3 = FUN_1456cf568(param_1 + 0xb8,uVar3,param_3);
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 146b6816e FUN_146b6816e body=34 status=ok
// SIG undefined FUN_146b6816e(void)

undefined4 * FUN_146b6816e(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140624776(param_1 + 0x108,*param_3);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 146b681ba FUN_146b681ba body=118 status=ok
// SIG undefined FUN_146b681ba(void)

undefined8 * FUN_146b681ba(undefined8 *param_1,ulonglong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_1401211f6(local_38,param_2,1);
  FUN_140f0be04(local_38[0],param_2 & 0xffffffff,param_1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b68232 FUN_146b68232 body=993 status=ok
// SIG undefined FUN_146b68232(void)

undefined8 *
FUN_146b68232(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5,undefined8 param_6)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined8 *local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = &PTR_FUN_149f31c60;
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  uVar3 = (**(code **)(*param_5 + 0x18))(param_5);
  param_1[5] = uVar3;
  uVar3 = (**(code **)(*param_5 + 0x20))(param_5);
  param_1[6] = uVar3;
  uVar3 = (**(code **)(*param_5 + 0x30))(param_5);
  param_1[7] = uVar3;
  uVar3 = (**(code **)(*param_5 + 0x28))(param_5);
  param_1[8] = uVar3;
  param_1[9] = param_6;
  param_1[10] = *(undefined8 *)(param_1[3] + 8);
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xf),4000);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  plVar2 = (longlong *)param_1[9];
  FUN_140056680(local_88,L"Scanner: Created Scanners");
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,local_88,4,0);
  param_1[0x17] = uVar3;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[9];
  FUN_140056680(local_88,L"Scanner: Running Scanners");
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,local_88,4,0);
  param_1[0x18] = uVar3;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[9];
  FUN_140056680(local_88,L"Scanner: Complete Scanners");
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,local_88,4,0);
  param_1[0x19] = uVar3;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[9];
  FUN_140056680(local_88,L"Scanner: CPU Time");
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,local_88,0,0);
  param_1[0x1a] = uVar3;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[9];
  FUN_140056680(local_88,L"Scanner: Real Time");
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,local_88,0,0);
  param_1[0x1b] = uVar3;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[9];
  FUN_140056680(local_88,L"Scanner: Hash Collisions");
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,local_88,4,0);
  param_1[0x1c] = uVar3;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[9];
  FUN_140056680(local_88,L"Scanner: Total Data");
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,local_88,1,0);
  param_1[0x1d] = uVar3;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[9];
  FUN_140056680(local_88,L"Scanner: Skipped Data");
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,local_88,1,0);
  param_1[0x1e] = uVar3;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[9];
  FUN_140056680(local_88,L"Scanner: Processing Speed");
  uVar3 = (**(code **)(*plVar2 + 8))(plVar2,local_88,2,0);
  param_1[0x1f] = uVar3;
  if (local_88[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  LOCK();
  *(longlong *)param_1[0x17] = *(longlong *)param_1[0x17] + 1;
  UNLOCK();
  LOCK();
  DAT_14c991e18 = DAT_14c991e18 + 1;
  UNLOCK();
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149f33970;
  local_88[0] = FUN_1429505ae;
  local_c8 = 0;
  local_b8 = 0;
  local_60 = param_1;
  FUN_142944a9f(local_d8);
  FUN_146b7a3d4(param_1 + 0xd,local_d8);
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_d0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar4 = &local_68;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b68614 FUN_146b68614 body=137 status=ok
// SIG undefined FUN_146b68614(void)

void FUN_146b68614(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_149f31c60;
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x5c) = 1;
  UNLOCK();
  lVar4 = param_1[0xd];
  if (param_1[0xd] != 0) {
    while( true ) {
      do {
        lVar6 = lVar4;
        lVar4 = 0;
      } while (lVar6 == 0);
      plVar3 = *(longlong **)(lVar6 + 0x70);
      cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
      if (cVar5 != '\0') break;
      lVar4 = param_1[0xd];
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  plVar3 = (longlong *)param_1[0xe];
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
                    /* WARNING: Could not recover jumptable at 0x000146b68692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146b686a8 FUN_146b686a8 body=118 status=ok
// SIG undefined FUN_146b686a8(void)

undefined8 * FUN_146b686a8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = *(longlong *)(param_1 + 0x68);
  while ((*(byte *)(lVar2 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar2 + 0x70) + 0x20))(*(longlong **)(lVar2 + 0x70),0xffffffff,0);
  }
  *param_2 = 0;
  iVar1 = *(int *)(lVar2 + 0x88);
  _Src = *(void **)(lVar2 + 0x80);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_146b80306(param_2,iVar1);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 << 5);
  }
  return param_2;
}



// FUNCTION 146b68752 FUN_146b68752 body=104 status=ok
// SIG undefined FUN_146b68752(void)

longlong * FUN_146b68752(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  
  LOCK();
  *(undefined4 *)(param_1 + 0x5c) = 1;
  UNLOCK();
  lVar4 = *(longlong *)(param_1 + 0x68);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    while( true ) {
      do {
        lVar6 = lVar4;
        lVar4 = 0;
      } while (lVar6 == 0);
      plVar3 = *(longlong **)(lVar6 + 0x70);
      cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
      if (cVar5 != '\0') break;
      lVar4 = *(longlong *)(param_1 + 0x68);
    }
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 8);
  iVar2 = *(int *)(param_1 + 0x60);
  *param_2 = (longlong)iVar2;
  param_2[1] = (longlong)iVar1 - (longlong)iVar2;
  return param_2;
}



// FUNCTION 146b687ba FUN_146b687ba body=364 status=ok
// SIG undefined FUN_146b687ba(void)

void FUN_146b687ba(longlong param_1,undefined8 param_2,longlong *param_3,uint *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_78 [44];
  uint local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_3 = 0;
  plVar1 = *(longlong **)(param_1 + 0x28);
  lVar2 = FUN_146b31cce(param_2);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar5 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)plVar1[9] - 1U & (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4)
    ;
    if (iVar4 != -1) {
      do {
        if (*(longlong *)(*plVar1 + (longlong)iVar4 * 0x60) == lVar2) {
          local_48 = 0;
          uStack_40 = 0;
          local_38 = 0;
          uVar3 = FUN_146b31cd4(param_2);
          FUN_146b66a44(uVar3,&local_48);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x60))
                    (*(longlong **)(param_1 + 0x20),&local_4c,&local_48);
          *param_4 = local_4c;
          if (local_4c != 0xffffffff) {
            plVar1 = *(longlong **)(param_1 + 0x38);
            if ((int)plVar1[1] == *(int *)((longlong)plVar1 + 0x34)) goto LAB_146b688c5;
            plVar5 = plVar1 + 7;
            if ((longlong *)plVar1[8] != (longlong *)0x0) {
              plVar5 = (longlong *)plVar1[8];
            }
            iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar1[9] - 1U & local_4c) * 4);
            if (iVar4 == -1) goto LAB_146b688c5;
            goto LAB_146b68906;
          }
          LOCK();
          **(longlong **)(param_1 + 0xe0) = **(longlong **)(param_1 + 0xe0) + 1;
          UNLOCK();
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x60 + *plVar1 + 0x58);
      } while (iVar4 != -1);
    }
  }
  goto LAB_146b68850;
  while (iVar4 = *(int *)(lVar2 + 0x58), iVar4 != -1) {
LAB_146b68906:
    lVar2 = *plVar1 + (longlong)iVar4 * 0x60;
    if (*(uint *)(*plVar1 + (longlong)iVar4 * 0x60) == local_4c) goto LAB_146b688c7;
  }
LAB_146b688c5:
  lVar2 = 0;
LAB_146b688c7:
  *param_3 = lVar2 + 8;
LAB_146b68850:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146b68928 FUN_146b68928 body=297 status=ok
// SIG undefined FUN_146b68928(void)

undefined8
FUN_146b68928(longlong param_1,int *param_2,ulonglong *param_3,undefined1 *param_4,longlong *param_5
             )

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  
  if ((((*param_2 != 1) || (param_2[1] != 0)) || (param_2[2] != 0)) || (0xff < (uint)param_2[3])) {
    puVar7 = *(ulonglong **)(param_1 + 0x50);
    do {
      if ((puVar7[1] != 0) && (param_3[1] != 0)) {
        if ((*puVar7 <= (param_3[1] + *param_3) - 1) && (*param_3 <= (puVar7[1] + *puVar7) - 1))
        goto LAB_146b689b3;
      }
      puVar7 = (ulonglong *)puVar7[0xe];
      *(ulonglong **)(param_1 + 0x50) = puVar7;
    } while( true );
  }
  *param_4 = 1;
  lVar6 = 0;
LAB_146b68961:
  *param_5 = lVar6;
  return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
LAB_146b689b3:
  plVar1 = *(longlong **)(param_1 + 0x40);
  uVar4 = FUN_1447addd0(param_2,0x10);
  iVar5 = FUN_146b7dd74(plVar1,uVar4,param_2);
  if (iVar5 == -1) {
    lVar9 = 0;
  }
  else {
    lVar9 = (longlong)iVar5 * 0x88 + *plVar1;
  }
  plVar1 = *(longlong **)(param_1 + 0x50);
  uVar8 = (*param_3 - *plVar1) + plVar1[0xd];
  *param_4 = 0;
  if ((*(int *)(lVar9 + 0x30) != *(int *)(lVar9 + 0x5c)) &&
     (cVar3 = FUN_1468fdee0(lVar9 + 0x28,plVar1 + 3), cVar3 == '\0')) {
    return 0;
  }
  bVar10 = *(int *)(lVar9 + 0x20) == (int)plVar1[2];
  *param_4 = bVar10;
  lVar6 = -1;
  if (bVar10) {
    uVar2 = *(ulonglong *)(lVar9 + 0x78);
    lVar6 = uVar8 - uVar2;
    if (uVar8 < uVar2 || uVar8 - uVar2 == 0) {
      lVar6 = -(uVar8 - uVar2);
    }
  }
  goto LAB_146b68961;
}



// FUNCTION 146b68a52 FUN_146b68a52 body=3103 status=ok
// SIG undefined FUN_146b68a52(void)

longlong * FUN_146b68a52(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  LARGE_INTEGER LVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  uint uVar20;
  longlong lVar21;
  LARGE_INTEGER LVar22;
  char *pcVar23;
  uint *puVar24;
  char *pcVar25;
  longlong lVar26;
  undefined1 auVar27 [16];
  undefined1 auStack_238 [32];
  ulonglong *local_218;
  char local_201;
  ulonglong local_200;
  char local_1f1;
  uint local_1f0;
  undefined4 local_1ec;
  uint local_1e8;
  uint local_1e4;
  uint local_1e0;
  uint local_1dc;
  ulonglong local_1d8;
  LARGE_INTEGER local_1d0;
  longlong local_1c8;
  ulonglong local_1c0;
  int local_1b4;
  LARGE_INTEGER local_1b0;
  LARGE_INTEGER local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong local_190;
  LARGE_INTEGER local_188;
  char *local_180;
  LARGE_INTEGER local_178;
  ulonglong uStack_170;
  longlong *local_168;
  LARGE_INTEGER local_160;
  longlong *local_158;
  LARGE_INTEGER local_150;
  undefined4 local_148;
  undefined4 local_144;
  LARGE_INTEGER local_140;
  ulonglong uStack_138;
  undefined1 local_130 [32];
  longlong local_110;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  longlong *local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  char local_b6;
  byte local_b5;
  undefined4 local_b4;
  longlong *local_b0;
  undefined1 local_a4 [4];
  LARGE_INTEGER local_a0;
  undefined8 local_98;
  LARGE_INTEGER LStack_90;
  undefined8 local_88;
  LARGE_INTEGER local_80;
  ulonglong uStack_78;
  byte local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  LOCK();
  DAT_14c991e28 = DAT_14c991e28 + 1;
  UNLOCK();
  plVar3 = *(longlong **)(param_1 + 0x20);
  FUN_146b681ba(&local_a0,*(undefined4 *)(param_1 + 8));
  (**(code **)(*plVar3 + 0x60))(plVar3,local_a4,&local_a0);
  local_b0 = (longlong *)0x0;
  local_b4 = 0xffffffff;
  local_b5 = 0;
  local_b6 = '\0';
  local_c0 = 0xffffffffffffffff;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  FUN_146b81a06(&local_d8);
  iVar10 = (int)uStack_d0;
  lVar16 = (longlong)(int)uStack_d0;
  uStack_d0 = CONCAT44(uStack_d0._4_4_,(int)uStack_d0 + 100);
  if ((uint)(uStack_d0._4_4_ - iVar10) < 100) {
    FUN_146b81a98(&local_d8);
  }
  memset(local_d8 + lVar16,0,800);
  local_190 = param_1 + 0x78;
  FUN_146b341de();
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0xffffffff;
  FUN_146b31df2(local_130,*(undefined4 *)(param_1 + 8));
  LVar22._0_4_ = *(uint *)(*(undefined8 **)(param_1 + 0x10) + 1);
  uVar4 = **(undefined8 **)(param_1 + 0x10);
  local_a0.s.LowPart = FUN_146b31cde(local_130);
  uVar19 = 0;
  if (local_a0.s.LowPart - 1 < LVar22._0_4_) {
    FUN_146b31ce4(local_130,uVar4,&local_a0);
    uVar19 = local_a0.s.LowPart;
  }
  QueryPerformanceCounter(&local_a0);
  local_1a8.s = local_a0.s;
  local_1a0 = *(longlong **)(param_1 + 0xc0);
  local_198 = *(longlong **)(param_1 + 0xd8);
  LOCK();
  lVar16 = *local_1a0;
  *local_1a0 = *local_1a0 + 1;
  UNLOCK();
  if (lVar16 == 0) {
    QueryPerformanceCounter(&local_a0);
    LOCK();
    DAT_14c991e30.s = local_a0.s;
    UNLOCK();
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    local_200 = 0;
    uVar17 = 0;
    do {
      uStack_138 = (ulonglong)*(uint *)(param_1 + 8);
      LVar22._0_4_ = uVar19 - *(uint *)(param_1 + 8);
      LVar22.s.HighPart = 0;
      local_140 = LVar22;
      FUN_146b687ba(param_1,local_130,&local_b0,&local_b4);
      plVar3 = local_b0;
      local_b5 = 0;
      if (local_b0 != (longlong *)0x0) {
        plVar1 = local_b0 + 2;
        local_a0.QuadPart = (LONGLONG)&DAT_100000000;
        LStack_90.QuadPart = (LONGLONG)&DAT_ffffffff;
        local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
        iVar10 = 0;
        local_1c0 = uVar17;
        local_98 = plVar1;
        if ((int)local_b0[5] != 0) {
          FUN_1449c0562(&local_a0);
          iVar10 = (int)plVar3[5];
        }
        local_150.s = LStack_90.s;
        LVar8.s = local_150.s;
        local_148 = (uint)local_88;
        local_144 = local_88._4_4_;
        local_160.s = local_a0.s;
        local_158 = local_98;
        local_168 = plVar3;
        local_150._4_4_ = LStack_90.s.HighPart;
        uVar13 = local_150._4_4_;
        if ((local_150._4_4_ != iVar10) ||
           (uVar17 = local_1c0, local_150.s = LVar8.s, local_98 != plVar1)) {
          do {
            local_150 = LVar8;
            puVar18 = (undefined8 *)((longlong)(int)uVar13 * 0x18 + *local_168);
            local_218 = &local_c0;
            cVar9 = FUN_146b68928(param_1,puVar18,&local_140,&local_b5);
            if (cVar9 != '\0') {
              local_98 = (longlong *)*puVar18;
              LStack_90 = *(LARGE_INTEGER *)(puVar18 + 1);
              local_88 = (longlong *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 8));
              local_80 = local_140;
              uStack_78 = uStack_138;
              local_70 = local_b5;
              local_68 = local_c0;
              local_a0 = LVar22;
              FUN_146b69672(&local_f8,&local_a0,&local_b6);
            }
            uVar17 = local_1c0;
            if (local_b6 != '\0') break;
            local_150.s.LowPart = local_150._0_4_ & ~local_160.s.HighPart;
            FUN_1449c0562(&local_160);
            uVar17 = local_1c0;
            uVar13 = local_150._4_4_;
            LVar8 = local_150;
          } while (local_168 != plVar3 || (local_158 != plVar1 || local_150._4_4_ != iVar10));
        }
      }
      if (local_b6 == '\x01') {
        local_b6 = '\0';
        FUN_146b31c9a(local_130);
        uVar20 = *(uint *)(*(longlong **)(param_1 + 0x10) + 1);
        if (uVar20 <= (*(int *)(param_1 + 8) + uVar19) - 1U) {
LAB_146b6947c:
          LOCK();
          *(uint *)(param_1 + 0x60) = LVar22._0_4_;
          UNLOCK();
          break;
        }
        lVar16 = **(longlong **)(param_1 + 0x10);
        iVar10 = FUN_146b31cde(local_130);
        local_a0.s.LowPart = iVar10;
        iVar14 = 0;
        uVar13 = 0;
        if (iVar10 - 1U < uVar20 - uVar19) {
          FUN_146b31ce4(local_130,lVar16 + (int)uVar19,&local_a0);
          uVar13 = local_a0.s.LowPart;
        }
        LOCK();
        **(longlong **)(param_1 + 0xf0) = **(longlong **)(param_1 + 0xf0) + (ulonglong)(uint)uVar13;
        UNLOCK();
        uVar19 = uVar19 + uVar13;
        uVar20 = 0;
      }
      else {
        uVar20 = *(uint *)(*(longlong **)(param_1 + 0x10) + 1);
        if (uVar20 <= (uint)uVar19) goto LAB_146b6947c;
        iVar10 = (int)uVar17;
        uVar12 = (uint)local_200;
        if (plVar3 == (longlong *)0x0) {
          iVar14 = 0;
          if ((iVar10 - 1U < 99) && (*local_d8 != 0)) {
            local_d8[uVar17 & 0xffffffff] = 0;
LAB_146b6943c:
            local_200 = (ulonglong)(uVar12 + 1);
            iVar14 = 0;
            uVar20 = iVar10 + 1;
          }
          else {
            uVar20 = 0;
          }
        }
        else {
          if (iVar10 == 0) {
            *local_d8 = (longlong)plVar3;
          }
          else {
            if (iVar10 < 100 && uVar12 == LVar22._0_4_) {
              if ((longlong *)*local_d8 != plVar3) {
                local_d8[iVar10] = (longlong)plVar3;
                goto LAB_146b6943c;
              }
              lVar16 = **(longlong **)(param_1 + 0x10);
              cVar9 = *(char *)(lVar16 + (uVar19 - iVar10));
              local_1f1 = *(char *)(lVar16 + (int)uVar19);
              local_201 = cVar9;
              local_1d0 = LVar22;
              if ((*(int *)(param_1 + 0x5c) == 0) && (iVar14 = uVar20 - 1, (int)uVar19 <= iVar14)) {
                pcVar25 = (char *)((uVar19 - iVar10) + lVar16);
                pcVar23 = (char *)((int)uVar19 + lVar16);
                local_180 = (char *)(iVar14 + lVar16);
                iVar14 = 0;
                iVar10 = 0;
                local_1f0 = uVar12;
                local_1c8 = param_1;
                local_1c0 = uVar17;
                do {
                  if (*pcVar25 != *pcVar23) break;
                  uVar17 = (ulonglong)((int)uVar17 + 1);
                  local_1f0 = local_1f0 + 1;
                  if (iVar10 == 0) {
                    LVar22 = (LARGE_INTEGER)
                             ((LARGE_INTEGER *)(local_d8 + (int)(uVar17 % (local_1c0 & 0xffffffff)))
                             )->QuadPart;
                    if ((longlong *)LVar22.QuadPart == (longlong *)0x0) {
                      iVar10 = 0;
                    }
                    else {
                      uStack_170 = (ulonglong)*(uint *)(param_1 + 8);
                      local_188.s.HighPart = 0;
                      local_188.s.LowPart = local_1f0;
                      local_1b0.QuadPart = LVar22.QuadPart + 0x10;
                      local_168 = (longlong *)&DAT_100000000;
                      local_158 = (longlong *)&DAT_ffffffff;
                      local_150.QuadPart = local_150.QuadPart & 0xffffffff00000000;
                      local_1dc = 0;
                      iVar10 = 0;
                      local_178 = local_188;
                      local_160.QuadPart = local_1b0.QuadPart;
                      if (*(int *)(LVar22.QuadPart + 0x28) != 0) {
                        FUN_1449c0562(&local_168);
                        iVar10 = *(int *)(LVar22.QuadPart + 0x28);
                      }
                      local_88 = local_158;
                      plVar3 = local_88;
                      local_80.s = local_150.s;
                      local_98 = local_168;
                      LStack_90.s = local_160.s;
                      local_88._4_4_ = (int)((ulonglong)local_158 >> 0x20);
                      local_a0 = LVar22;
                      local_88 = plVar3;
                      if ((local_88._4_4_ == iVar10) && (local_160.QuadPart == local_1b0.QuadPart))
                      {
                        local_1d8 = 0xffffffffffffffff;
                        local_1ec = 0;
                        local_1e4 = 0;
                        local_1e8 = 0;
                        local_1e0 = 0;
                      }
                      else {
                        local_1d8 = 0xffffffffffffffff;
                        local_1e0 = 0;
                        local_1e8 = 0;
                        local_1e4 = 0;
                        local_1dc = 0;
                        local_1ec = 0;
                        iVar11 = local_88._4_4_;
                        local_1b4 = iVar10;
                        do {
                          puVar24 = (uint *)((longlong)iVar11 * 0x18 + *(longlong *)local_a0);
                          local_218 = &local_c0;
                          cVar9 = FUN_146b68928(local_1c8,puVar24,&local_178,&local_b5);
                          if ((cVar9 != '\0') &&
                             ((uVar20 = local_1e8 | local_1e0 | local_1e4 | local_1dc, uVar20 == 0
                              || ((~(byte)local_1ec & local_b5 & 1) != 0 || local_c0 < local_1d8))))
                          {
                            local_1dc = *puVar24;
                            local_1e4 = puVar24[1];
                            local_1e8 = puVar24[2];
                            local_1e0 = puVar24[3];
                            local_1d8 = local_c0;
                            local_1ec = CONCAT31((int3)(uVar20 >> 8),local_b5);
                          }
                          local_88 = (longlong *)
                                     CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
                          FUN_1449c0562(&local_98);
                          iVar11 = local_88._4_4_;
                        } while (local_a0.QuadPart != LVar22.QuadPart ||
                                 (LStack_90.QuadPart != local_1b0.QuadPart ||
                                 local_88._4_4_ != local_1b4));
                      }
                      param_1 = local_1c8;
                      iVar10 = 0;
                      if (((local_1e4 != 0 || local_1dc != 0) || local_1e8 != 0) || local_1e0 != 0)
                      {
                        local_a0 = local_188;
                        local_98 = (longlong *)CONCAT44(local_1e4,local_1dc);
                        LStack_90.s.HighPart = local_1e0;
                        LStack_90.s.LowPart = local_1e8;
                        local_88 = (longlong *)
                                   CONCAT44(local_88._4_4_,*(undefined4 *)(local_1c8 + 8));
                        local_80 = local_178;
                        uStack_78 = uStack_170;
                        local_70 = (byte)local_1ec;
                        local_68 = local_1d8;
                        FUN_146b69672(&local_f8,&local_a0,&local_b6);
                        if (local_b6 == '\x01') {
                          iVar10 = *(int *)(param_1 + 8);
                          local_b6 = '\0';
                        }
                      }
                    }
                  }
                  else {
                    iVar10 = iVar10 + -1;
                  }
                  uVar19 = uVar19 + 1;
                  FUN_146b31d56(local_130);
                  LOCK();
                  *(int *)(param_1 + 0x60) = iVar14 + (int)local_200 + 1;
                  UNLOCK();
                  iVar14 = iVar14 + 1;
                  if (*(int *)(param_1 + 0x5c) != 0) break;
                  pcVar25 = pcVar25 + 1;
                  pcVar23 = pcVar23 + 1;
                } while (pcVar23 <= local_180);
                cVar9 = local_201;
                LVar22._0_4_ = local_1d0.s.LowPart;
                if (iVar10 != 0) {
                  local_200 = (ulonglong)((int)local_200 + 1);
                  do {
                    if (*(uint *)(*(longlong **)(param_1 + 0x10) + 1) <= (uint)uVar19) break;
                    lVar16 = (longlong)(int)uVar19;
                    uVar19 = uVar19 + 1;
                    FUN_146b31d56(local_130,lVar16 + **(longlong **)(param_1 + 0x10));
                    iVar11 = (int)local_200 + iVar14;
                    iVar14 = iVar14 + 1;
                    LOCK();
                    *(int *)(param_1 + 0x60) = iVar11;
                    UNLOCK();
                    iVar10 = iVar10 + -1;
                  } while (iVar10 != 0);
                }
                local_200 = (ulonglong)local_1f0;
              }
              else {
                iVar14 = 0;
              }
              uVar20 = 0;
              if (cVar9 == local_1f1) goto LAB_146b68de0;
              goto LAB_146b68e5d;
            }
            *local_d8 = (longlong)plVar3;
          }
          local_200 = (ulonglong)(LVar22._0_4_ + 1);
          iVar14 = 0;
          uVar20 = 1;
        }
LAB_146b68e5d:
        lVar16 = (longlong)(int)uVar19;
        uVar19 = uVar19 + 1;
        FUN_146b31d56(local_130,lVar16 + **(longlong **)(param_1 + 0x10));
      }
LAB_146b68de0:
      LOCK();
      *(uint *)(param_1 + 0x60) = LVar22._0_4_ + iVar14;
      UNLOCK();
      uVar17 = (ulonglong)uVar20;
    } while (*(int *)(param_1 + 0x5c) == 0);
  }
  plVar3 = *(longlong **)(param_1 + 0xd0);
  QueryPerformanceCounter(&local_a0);
  plVar7 = local_198;
  plVar1 = local_1a0;
  LOCK();
  *plVar3 = *plVar3 + (local_a0.QuadPart - (longlong)local_1a8);
  UNLOCK();
  LOCK();
  **(longlong **)(param_1 + 0xe8) =
       **(longlong **)(param_1 + 0xe8) + (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 8);
  UNLOCK();
  lVar16 = **(longlong **)(param_1 + 0xe8);
  lVar21 = *local_198;
  if (*local_1a0 < 1) {
    lVar15 = 0;
  }
  else {
    QueryPerformanceCounter(&local_a0);
    lVar15 = local_a0.QuadPart - (longlong)DAT_14c991e30;
  }
  lVar15 = lVar15 + lVar21;
  auVar27._8_4_ = (int)((ulonglong)lVar15 >> 0x20);
  auVar27._0_8_ = lVar15;
  auVar27._12_4_ = 0x45300000;
  LOCK();
  **(longlong **)(param_1 + 0xf8) =
       (longlong)
       ((double)lVar16 /
       ((((double)CONCAT44(0x43300000,(int)lVar15) - 4503599627370496.0) +
        (auVar27._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418));
  LVar22 = DAT_14c991e30;
  UNLOCK();
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    QueryPerformanceCounter(&local_a0);
    LOCK();
    *plVar7 = *plVar7 + (local_a0.QuadPart - (longlong)LVar22);
    UNLOCK();
  }
  lVar16 = local_f8;
  *param_2 = 0;
  param_2[1] = 0;
  lVar21 = (longlong)(int)uStack_f0;
  if (lVar21 != 0) {
    lVar26 = 0;
    lVar15 = 0;
    do {
      iVar10 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar10 + 1U) {
        FUN_146b8035e(param_2,iVar10);
        lVar15 = *param_2;
      }
      puVar18 = (undefined8 *)(lVar16 + lVar26);
      uVar4 = *puVar18;
      uVar5 = puVar18[1];
      uVar6 = puVar18[3];
      puVar2 = (undefined8 *)(lVar15 + 0x10 + (longlong)iVar10 * 0x20);
      *puVar2 = puVar18[2];
      puVar2[1] = uVar6;
      puVar18 = (undefined8 *)(lVar15 + (longlong)iVar10 * 0x20);
      *puVar18 = uVar4;
      puVar18[1] = uVar5;
      lVar26 = lVar26 + 0x40;
    } while (lVar21 * 0x40 != lVar26);
  }
  FUN_146b3441a(local_190);
  LOCK();
  DAT_14c991e28 = DAT_14c991e28 + -1;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x58) = 1;
  UNLOCK();
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146b69672 FUN_146b69672 body=1135 status=ok
// SIG undefined FUN_146b69672(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146b69672(longlong *param_1,undefined8 *param_2,byte *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  bool bVar17;
  longlong *plVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c991e78) && (FUN_144b3d300(&DAT_14c991e78), DAT_14c991e78 == -1)) {
    _DAT_14c991e70 = 0;
    _DAT_14c991e38 = 0;
    uRam000000014c991e40 = 0;
    _DAT_14c991e44 = 0;
    _DAT_14c991e48 = 0;
    uRam000000014c991e4c = 0;
    uRam000000014c991e50 = 0;
    _DAT_14c991e58 = 0;
    uRam000000014c991e60 = 0;
    DAT_14c991e68 = 0;
    _Init_thread_footer(&DAT_14c991e78);
  }
  *param_3 = 0;
  uVar20 = (ulonglong)(int)param_1[2];
  uVar16 = *(uint *)(param_1 + 1);
  lVar21 = (longlong)(int)uVar16;
  if (uVar20 == 0xffffffffffffffff) {
    *(uint *)(param_1 + 1) = uVar16 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) < uVar16 + 1) {
      FUN_146b7a8b0(param_1);
    }
    lVar14 = *param_1;
    lVar21 = lVar21 * 0x40;
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    uVar7 = param_2[5];
    uVar8 = param_2[7];
    puVar15 = (undefined8 *)(lVar14 + 0x30 + lVar21);
    *puVar15 = param_2[6];
    puVar15[1] = uVar8;
    puVar15 = (undefined8 *)(lVar14 + 0x20 + lVar21);
    *puVar15 = uVar6;
    puVar15[1] = uVar7;
    puVar15 = (undefined8 *)(lVar14 + 0x10 + lVar21);
    *puVar15 = uVar4;
    puVar15[1] = uVar5;
    *(undefined8 *)(lVar14 + lVar21) = uVar2;
    ((undefined8 *)(lVar14 + lVar21))[1] = uVar3;
LAB_146b697e5:
    *(int *)(param_1 + 2) = (int)param_1[1] + -1;
  }
  else {
    bVar17 = true;
    if ((int)param_1[2] < (int)uVar16) {
      plVar18 = (longlong *)(uVar20 * 0x40 + *param_1 + 0x28);
      bVar17 = false;
      uVar13 = uVar20;
      do {
        uVar13 = uVar13 + 1;
        if ((*plVar18 != 0) && (param_2[5] != 0)) {
          if (((ulonglong)plVar18[-1] <= (param_2[5] + param_2[4]) - 1) &&
             ((ulonglong)param_2[4] <= (*plVar18 + plVar18[-1]) - 1U)) goto LAB_146b6972e;
        }
        uVar19 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar19;
        *(uint *)(param_1 + 2) = uVar19;
        bVar17 = lVar21 <= (longlong)uVar13;
        plVar18 = plVar18 + 8;
      } while (uVar16 != uVar19);
      uVar20 = (ulonglong)uVar16;
    }
LAB_146b6972e:
    uVar19 = (uint)uVar20;
    if ((((*(int *)(param_2 + 1) == 1) && (*(int *)((longlong)param_2 + 0xc) == 0)) &&
        (*(int *)(param_2 + 2) == 0)) && (*(uint *)((longlong)param_2 + 0x14) < 0x100)) {
      if ((bool)((int)uVar19 < 0 | bVar17)) {
        uVar19 = uVar16;
      }
      *(uint *)(param_1 + 1) = uVar19 + 1;
      if (*(uint *)((longlong)param_1 + 0xc) < uVar19 + 1) {
        FUN_146b7a8b0(param_1,uVar19);
      }
      lVar21 = *param_1;
      lVar14 = (longlong)(int)uVar19 * 0x40;
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      uVar6 = param_2[4];
      uVar7 = param_2[5];
      uVar8 = param_2[7];
      puVar15 = (undefined8 *)(lVar21 + 0x30 + lVar14);
      *puVar15 = param_2[6];
      puVar15[1] = uVar8;
      puVar15 = (undefined8 *)(lVar21 + 0x20 + lVar14);
      *puVar15 = uVar6;
      puVar15[1] = uVar7;
      puVar15 = (undefined8 *)(lVar21 + 0x10 + lVar14);
      *puVar15 = uVar4;
      puVar15[1] = uVar5;
      *(undefined8 *)(lVar21 + lVar14) = uVar2;
      ((undefined8 *)(lVar21 + lVar14))[1] = uVar3;
      *param_3 = 1;
      return;
    }
    if ((int)uVar19 < 0 || bVar17) {
      *(uint *)(param_1 + 1) = uVar16 + 1;
      if (*(uint *)((longlong)param_1 + 0xc) < uVar16 + 1) {
        FUN_146b7a8b0(param_1);
      }
      lVar14 = *param_1;
      lVar21 = lVar21 * 0x40;
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      uVar6 = param_2[4];
      uVar7 = param_2[5];
      uVar8 = param_2[7];
      puVar15 = (undefined8 *)(lVar14 + 0x30 + lVar21);
      *puVar15 = param_2[6];
      puVar15[1] = uVar8;
      puVar15 = (undefined8 *)(lVar14 + 0x20 + lVar21);
      *puVar15 = uVar6;
      puVar15[1] = uVar7;
      puVar15 = (undefined8 *)(lVar14 + 0x10 + lVar21);
      *puVar15 = uVar4;
      puVar15[1] = uVar5;
      *(undefined8 *)(lVar14 + lVar21) = uVar2;
      ((undefined8 *)(lVar14 + lVar21))[1] = uVar3;
      lVar21 = (longlong)(int)param_1[1];
      *(int *)(param_1 + 2) = (int)param_1[1] + -1;
      if (*(char *)(param_2 + 6) != '\x01') {
        return;
      }
    }
    else {
      if (*(char *)(param_2 + 6) == '\0') {
        if ((int)uVar19 < (int)uVar16) {
          pcVar12 = (char *)(*param_1 + (uVar20 & 0xffffffff) * 0x40 + 0x30);
          do {
            if (*pcVar12 != '\0') {
              return;
            }
            pcVar12 = pcVar12 + 0x40;
            uVar19 = (int)uVar20 + 1;
            uVar20 = (ulonglong)uVar19;
          } while ((int)uVar19 < (int)uVar16);
        }
        *(uint *)(param_1 + 1) = uVar16 + 1;
        if (*(uint *)((longlong)param_1 + 0xc) < uVar16 + 1) {
          FUN_146b7a8b0(param_1);
        }
        lVar14 = *param_1;
        lVar21 = lVar21 * 0x40;
        uVar2 = *param_2;
        uVar3 = param_2[1];
        uVar4 = param_2[2];
        uVar5 = param_2[3];
        uVar6 = param_2[4];
        uVar7 = param_2[5];
        uVar8 = param_2[7];
        puVar15 = (undefined8 *)(lVar14 + 0x30 + lVar21);
        *puVar15 = param_2[6];
        puVar15[1] = uVar8;
        puVar15 = (undefined8 *)(lVar14 + 0x20 + lVar21);
        *puVar15 = uVar6;
        puVar15[1] = uVar7;
        puVar15 = (undefined8 *)(lVar14 + 0x10 + lVar21);
        *puVar15 = uVar4;
        puVar15[1] = uVar5;
        *(undefined8 *)(lVar14 + lVar21) = uVar2;
        ((undefined8 *)(lVar14 + lVar21))[1] = uVar3;
        return;
      }
      lVar14 = *param_1;
      lVar21 = lVar21 * 0x40;
      if ((*(longlong *)(lVar14 + -0x20 + lVar21) == param_2[4]) &&
         (*(longlong *)(lVar14 + -0x18 + lVar21) == param_2[5])) {
        if (*(ulonglong *)(lVar14 + lVar21 + -8) <= (ulonglong)param_2[7]) {
          return;
        }
        lVar14 = lVar14 + lVar21;
        uVar2 = *param_2;
        uVar3 = param_2[1];
        uVar4 = param_2[2];
        uVar5 = param_2[3];
        uVar6 = param_2[4];
        uVar7 = param_2[5];
        uVar8 = param_2[7];
        *(undefined8 *)(lVar14 + -0x10) = param_2[6];
        *(undefined8 *)(lVar14 + -8) = uVar8;
        *(undefined8 *)(lVar14 + -0x20) = uVar6;
        *(undefined8 *)(lVar14 + -0x18) = uVar7;
        *(undefined8 *)(lVar14 + -0x30) = uVar4;
        *(undefined8 *)(lVar14 + -0x28) = uVar5;
        *(undefined8 *)(lVar14 + -0x40) = uVar2;
        *(undefined8 *)(lVar14 + -0x38) = uVar3;
        goto LAB_146b697e5;
      }
      if ((int)uVar16 <= (int)uVar19) {
        FUN_146b7a7c6(param_1);
        return;
      }
      uVar13 = (uVar20 & 0xffffffff) << 6 | 0x38;
      bVar17 = false;
      do {
        uVar2 = _DAT_14c991e70;
        lVar21 = *param_1;
        if ((*(char *)(lVar21 + -8 + uVar13) != '\x01') ||
           ((ulonglong)param_2[7] < *(ulonglong *)(lVar21 + uVar13))) {
          puVar15 = (undefined8 *)(lVar21 + uVar13);
          puVar15[-1] = CONCAT71(uRam000000014c991e69,DAT_14c991e68);
          *puVar15 = uVar2;
          uVar2 = uRam000000014c991e60;
          puVar15[-3] = _DAT_14c991e58;
          puVar15[-2] = uVar2;
          uVar2 = CONCAT44(uRam000000014c991e54,uRam000000014c991e50);
          puVar15[-5] = CONCAT44(uRam000000014c991e4c,_DAT_14c991e48);
          puVar15[-4] = uVar2;
          uVar11 = _DAT_14c991e44;
          uVar10 = uRam000000014c991e40;
          uVar9 = DAT_14c991e38_4;
          *(undefined4 *)(puVar15 + -7) = _DAT_14c991e38;
          *(undefined4 *)((longlong)puVar15 + -0x34) = uVar9;
          *(undefined4 *)(puVar15 + -6) = uVar10;
          *(undefined4 *)((longlong)puVar15 + -0x2c) = uVar11;
          uVar16 = *(uint *)(param_1 + 1);
          bVar17 = true;
        }
        uVar19 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar19;
        uVar13 = uVar13 + 0x40;
      } while ((int)uVar19 < (int)uVar16);
      FUN_146b7a7c6(param_1);
      if (!bVar17) {
        return;
      }
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_146b7a8b0(param_1,iVar1);
      }
      lVar21 = *param_1;
      lVar14 = (longlong)iVar1 * 0x40;
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      uVar6 = param_2[4];
      uVar7 = param_2[5];
      uVar8 = param_2[7];
      puVar15 = (undefined8 *)(lVar21 + 0x30 + lVar14);
      *puVar15 = param_2[6];
      puVar15[1] = uVar8;
      puVar15 = (undefined8 *)(lVar21 + 0x20 + lVar14);
      *puVar15 = uVar6;
      puVar15[1] = uVar7;
      puVar15 = (undefined8 *)(lVar21 + 0x10 + lVar14);
      *puVar15 = uVar4;
      puVar15[1] = uVar5;
      *(undefined8 *)(lVar21 + lVar14) = uVar2;
      ((undefined8 *)(lVar21 + lVar14))[1] = uVar3;
      lVar21 = (longlong)(int)param_1[1];
      *(int *)(param_1 + 2) = (int)param_1[1] + -1;
      if (lVar21 < 2) {
        return;
      }
      if (*(char *)(param_2 + 6) == '\0') {
        return;
      }
    }
    lVar14 = *param_1;
    lVar21 = lVar21 * 0x40;
    *param_3 = *(longlong *)(lVar14 + -0x58 + lVar21) + *(longlong *)(lVar14 + -0x60 + lVar21) ==
               param_2[4] & *(byte *)(lVar14 + -0x50 + lVar21) &
               *(longlong *)(lVar14 + -0x48 + lVar21) == param_2[7];
  }
  return;
}



// FUNCTION 146b69ae2 FUN_146b69ae2 body=167 status=ok
// SIG undefined FUN_146b69ae2(void)

void FUN_146b69ae2(LPCRITICAL_SECTION param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection(param_1);
  EnterCriticalSection(param_1);
  iVar1 = *(int *)&param_1[1].DebugInfo;
  iVar2 = *(int *)&param_1[1].OwningThread;
  LeaveCriticalSection(param_1);
  if ((uint)(iVar1 - iVar2) < *param_3) {
    do {
      LeaveCriticalSection(param_1);
      FUN_14000f986(0x3c23d70a);
      EnterCriticalSection(param_1);
      EnterCriticalSection(param_1);
      iVar1 = *(int *)&param_1[1].DebugInfo;
      iVar2 = *(int *)&param_1[1].OwningThread;
      LeaveCriticalSection(param_1);
    } while ((uint)(iVar1 - iVar2) < *param_3);
  }
  FUN_146b69b8a(param_1 + 1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x000146b69b82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 146b69b8a FUN_146b69b8a body=112 status=ok
// SIG undefined FUN_146b69b8a(void)

void FUN_146b69b8a(uint *param_1,void *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1 - param_1[5];
  uVar1 = *param_3;
  if (uVar2 < *param_3) {
    uVar1 = uVar2;
  }
  memcpy((void *)((ulonglong)param_1[5] + *(longlong *)(param_1 + 2)),param_2,(ulonglong)uVar1);
  uVar1 = *param_3;
  if (uVar2 <= uVar1 && uVar1 - uVar2 != 0) {
    memcpy(*(void **)(param_1 + 2),(void *)((longlong)param_2 + (ulonglong)uVar2),
           (ulonglong)(uVar1 - uVar2));
    uVar1 = *param_3;
  }
  uVar2 = *param_1;
  param_1[5] = (uVar1 + param_1[5]) % uVar2;
  *(ulonglong *)(param_1 + 6) = *(longlong *)(param_1 + 6) + (ulonglong)*param_3;
  uVar1 = *param_3 + param_1[4];
  if (uVar2 <= *param_3 + param_1[4]) {
    uVar1 = uVar2;
  }
  param_1[4] = uVar1;
  return;
}



// FUNCTION 146b69bfa FUN_146b69bfa body=307 status=ok
// SIG undefined FUN_146b69bfa(void)

ulonglong FUN_146b69bfa(LPCRITICAL_SECTION param_1,void *param_2,uint *param_3,char param_4)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  EnterCriticalSection(param_1);
  uVar5 = *(uint *)&param_1[1].DebugInfo;
  uVar1 = *(uint *)&param_1[1].OwningThread;
  uVar3 = *param_3;
  if (uVar1 <= *param_3) {
    uVar3 = uVar1;
  }
  uVar4 = (ulonglong)uVar3;
  uVar2 = (ulonglong)((*(int *)((longlong)&param_1[1].OwningThread + 4) - uVar1) + uVar5) %
          (ulonglong)uVar5;
  uVar5 = uVar5 - (int)uVar2;
  uVar1 = uVar3;
  if (uVar5 < uVar3) {
    uVar1 = uVar5;
  }
  memcpy(param_2,(void *)(uVar2 + *(longlong *)&param_1[1].LockCount),(ulonglong)uVar1);
  if (uVar5 <= uVar3 && uVar3 - uVar5 != 0) {
    memcpy((void *)((ulonglong)uVar5 + (longlong)param_2),*(void **)&param_1[1].LockCount,
           (ulonglong)(uVar3 - uVar5));
  }
  *(uint *)&param_1[1].OwningThread = *(int *)&param_1[1].OwningThread - uVar3;
  if ((param_4 != '\0') && (uVar3 < *param_3)) {
    do {
      if ((int)param_1[1].SpinCount != 0) break;
      LeaveCriticalSection(param_1);
      FUN_14000f986(0x3c23d70a);
      EnterCriticalSection(param_1);
      uVar3 = *param_3 - (int)uVar4;
      uVar5 = *(uint *)&param_1[1].DebugInfo;
      uVar1 = *(uint *)&param_1[1].OwningThread;
      if (uVar1 <= uVar3) {
        uVar3 = uVar1;
      }
      uVar2 = (ulonglong)((*(int *)((longlong)&param_1[1].OwningThread + 4) - uVar1) + uVar5) %
              (ulonglong)uVar5;
      uVar5 = uVar5 - (int)uVar2;
      uVar1 = uVar3;
      if (uVar5 < uVar3) {
        uVar1 = uVar5;
      }
      memcpy((void *)(uVar4 + (longlong)param_2),
             (void *)(uVar2 + *(longlong *)&param_1[1].LockCount),(ulonglong)uVar1);
      if (uVar5 <= uVar3 && uVar3 - uVar5 != 0) {
        memcpy((void *)((longlong)(uVar4 + (longlong)param_2) + (ulonglong)uVar5),
               *(void **)&param_1[1].LockCount,(ulonglong)(uVar3 - uVar5));
      }
      *(uint *)&param_1[1].OwningThread = *(int *)&param_1[1].OwningThread - uVar3;
      uVar3 = (int)uVar4 + uVar3;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < *param_3);
  }
  LeaveCriticalSection(param_1);
  return uVar4;
}



// FUNCTION 146b69d2e FUN_146b69d2e body=623 status=ok
// SIG undefined FUN_146b69d2e(void)

undefined8 * FUN_146b69d2e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *_Dst;
  undefined ***pppuVar6;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  code *local_98;
  undefined ***local_88;
  undefined **local_78;
  undefined8 *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_1 = &PTR_FUN_149f31c90;
  FUN_146b308be(param_1 + 1);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(param_1 + 7) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar5;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 9),4000);
  *(undefined4 *)(param_1 + 0xe) = 0x6400000;
  _Dst = (void *)FUN_14001cc68(0x6400000);
  param_1[0xf] = _Dst;
  memset(_Dst,0,0x6400000);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x13),4000);
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x22));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x22),4000);
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0x67452301;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0xefcdab89;
  *(undefined4 *)(param_1 + 0x34) = 0x98badcfe;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x10325476;
  *(undefined4 *)(param_1 + 0x35) = 0xc3d2e1f0;
  param_1[0x36] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined4 *)((longlong)param_1 + 0x234) = 0;
  FUN_140c54d7a(param_1 + 0x33);
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_149f33990;
  local_98 = FUN_142950668;
  local_d8 = 0;
  local_c8 = 0;
  local_70 = param_1;
  FUN_142944753(local_e8);
  FUN_14614a64a(param_1 + 0x44,local_e8);
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar2 = (int *)((longlong)local_e0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_e0 + 0x10))(local_e0);
      }
    }
  }
  if (local_98 != (code *)0x0) {
    pppuVar6 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar6 = &local_78;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  FUN_146b31b5e(param_2);
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b69f9e FUN_146b69f9e body=357 status=ok
// SIG undefined FUN_146b69f9e(void)

void FUN_146b69f9e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_149f31c90;
  LOCK();
  *(undefined4 *)(param_1 + 0x46) = 1;
  UNLOCK();
  lVar4 = param_1[0x44];
  if (param_1[0x44] != 0) {
    while( true ) {
      do {
        lVar6 = lVar4;
        lVar4 = 0;
      } while (lVar6 == 0);
      plVar3 = *(longlong **)(lVar6 + 0x70);
      cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
      if (cVar5 != '\0') break;
      lVar4 = param_1[0x44];
    }
  }
  plVar3 = (longlong *)param_1[0x45];
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
  }
  *(undefined4 *)(param_1 + 0x33) = 0x67452301;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0xefcdab89;
  *(undefined4 *)(param_1 + 0x34) = 0x98badcfe;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x10325476;
  *(undefined4 *)(param_1 + 0x35) = 0xc3d2e1f0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x29);
  FUN_1447a1747(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x22));
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_146b7a936(param_1 + 0x18);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x13));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  FUN_146b31b5e(param_1 + 1);
  return;
}



// FUNCTION 146b6a104 FUN_146b6a104 body=66 status=ok
// SIG undefined FUN_146b6a104(void)

void FUN_146b6a104(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_146b69bfa(param_1 + 0x48,param_2,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146b6a148 FUN_146b6a148 body=275 status=ok
// SIG undefined FUN_146b6a148(void)

ulonglong FUN_146b6a148(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  if (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xf4)) {
    lVar5 = param_1 + 0xf8;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x100);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x108) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 0xc0);
      iVar6 = iVar4;
      do {
        if (*(longlong *)(lVar5 + (longlong)iVar6 * 0x58) == param_2) goto LAB_146b6a1f7;
        iVar6 = *(int *)((longlong)iVar6 * 0x58 + lVar5 + 0x50);
      } while (iVar6 != -1);
    }
  }
  uVar7 = 0;
  goto LAB_146b6a17c;
  while (iVar4 = *(int *)(lVar8 + 0x50), iVar4 != -1) {
LAB_146b6a1f7:
    lVar8 = lVar5 + (longlong)iVar4 * 0x58;
    if (*(longlong *)(lVar5 + (longlong)iVar4 * 0x58) == param_2) goto LAB_146b6a20d;
  }
  lVar8 = 0;
LAB_146b6a20d:
  FUN_144a787a6(param_3,lVar8 + 8);
  *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(lVar8 + 0x18);
  *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(lVar8 + 0x20);
  *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(lVar8 + 0x38);
  uVar1 = *(undefined4 *)(lVar8 + 0x2c);
  uVar2 = *(undefined4 *)(lVar8 + 0x30);
  uVar3 = *(undefined4 *)(lVar8 + 0x34);
  *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(lVar8 + 0x28);
  *(undefined4 *)(param_3 + 0x24) = uVar1;
  *(undefined4 *)(param_3 + 0x28) = uVar2;
  *(undefined4 *)(param_3 + 0x2c) = uVar3;
  *(undefined1 *)(param_3 + 0x34) = *(undefined1 *)(lVar8 + 0x3c);
  FUN_144a787a6(param_3 + 0x38,lVar8 + 0x40);
  uVar7 = CONCAT71((int7)((ulonglong)(param_3 + 0x38) >> 8),1);
LAB_146b6a17c:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  return uVar7 & 0xffffffff;
}



// FUNCTION 146b6a25c FUN_146b6a25c body=67 status=ok
// SIG undefined FUN_146b6a25c(void)

undefined8 FUN_146b6a25c(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  FUN_140e83cb0(param_1 + 0x148,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  return param_2;
}


