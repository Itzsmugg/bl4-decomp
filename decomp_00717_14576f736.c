// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14576f736 FUN_14576f736 body=117 status=ok
// SIG undefined FUN_14576f736(void)

undefined8 * FUN_14576f736(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1403fa4e6(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1405b363e(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 5);
    }
  }
  return param_1;
}



// FUNCTION 14576f7ac FUN_14576f7ac body=122 status=ok
// SIG undefined FUN_14576f7ac(void)

longlong FUN_14576f7ac(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_14576f826(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14576f826 FUN_14576f826 body=200 status=ok
// SIG undefined FUN_14576f826(void)

undefined8 * FUN_14576f826(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1403fa8ea(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
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
          FUN_14701ad0c(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14576f8ee FUN_14576f8ee body=365 status=ok
// SIG undefined FUN_14576f8ee(void)

void FUN_14576f8ee(longlong param_1,undefined4 param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 400);
  lVar2 = param_1 + 0x1a0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar4 = 0;
  local_60 = lVar2;
  if (*(int *)(param_1 + 0x1b8) != 0) {
    FUN_1449c0562(&local_68);
    iVar4 = *(int *)(param_1 + 0x1b8);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar4) || (local_60 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_90 + 0x20 + (longlong)iStack_74 * 0x30);
      FUN_147012f0e(lVar3,0xf,param_2);
      uVar5 = 0;
      if ((param_3 != '\0') && (uVar5 = 8, (*(byte *)(lVar3 + 0xc0) & 8) == 0)) {
        FUN_147015e0a(lVar3 + 0x50,0);
      }
      *(uint *)(lVar3 + 0xc0) = *(uint *)(lVar3 + 0xc0) & 0xfffffff7 | uVar5;
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar4) || (local_80 != lVar2)) || (local_90 != plVar1));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14576fa5c FUN_14576fa5c body=40 status=ok
// SIG undefined FUN_14576fa5c(void)

undefined8 FUN_14576fa5c(undefined8 param_1,int param_2)

{
  FUN_140af924e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14576fa84 FUN_14576fa84 body=132 status=ok
// SIG undefined FUN_14576fa84(void)

void FUN_14576fa84(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_14576fb08(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14576fb08 FUN_14576fb08 body=89 status=ok
// SIG undefined FUN_14576fb08(void)

void FUN_14576fb08(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14576fb62();
  return;
}



// FUNCTION 14576fb62 FUN_14576fb62 body=52 status=ok
// SIG undefined FUN_14576fb62(void)

void FUN_14576fb62(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_14576fb96(param_1,param_2);
  return;
}



// FUNCTION 14576fb96 FUN_14576fb96 body=116 status=ok
// SIG undefined FUN_14576fb96(void)

void FUN_14576fb96(longlong *param_1,int param_2)

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
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 14576fc0a FUN_14576fc0a body=48 status=ok
// SIG undefined FUN_14576fc0a(void)

void FUN_14576fc0a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14576fc3a FUN_14576fc3a body=269 status=ok
// SIG undefined FUN_14576fc3a(void)

void FUN_14576fc3a(longlong *param_1,longlong *param_2,longlong *param_3,byte param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  if ((*param_2 != 0) && ((int)param_2[1] - 1U < 0xfffffffe)) {
    if ((param_3 != (longlong *)0x0) && (param_4 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014576fc8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_3 + 0x58))(param_3,param_2);
      return;
    }
    if (param_1 != (longlong *)0x0) {
      lVar1 = (**(code **)(*param_1 + 0x180))();
      if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x238))) {
        iVar5 = 0;
        lVar6 = 0;
        do {
          plVar2 = (longlong *)FUN_14479d2ce(*(longlong *)(lVar1 + 0x230) + lVar6);
          if (plVar2 != (longlong *)0x0) {
            uVar3 = FUN_1410a2c98();
            plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
            if (plVar2 != (longlong *)0x0) {
              uVar3 = FUN_1410a2c98();
              plVar4 = (longlong *)FUN_144718840(plVar2,uVar3);
              if ((plVar2 != plVar4) &&
                 ((plVar4 == param_3 & param_4) == 0 && plVar4 != (longlong *)0x0)) {
                (**(code **)(*plVar4 + 0x58))(plVar4,param_2);
              }
            }
          }
          lVar6 = lVar6 + 8;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(lVar1 + 0x238));
      }
    }
  }
  return;
}



// FUNCTION 14576fd48 FUN_14576fd48 body=599 status=ok
// SIG undefined FUN_14576fd48(void)

void FUN_14576fd48(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  byte bVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  
  if (*(char *)(param_1 + 0x2558) != '\0') {
    lVar1 = param_1 + 0x518;
    plVar4 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x518) + 0x30))(lVar1);
    if ((param_1 != 0) && (plVar4 != (longlong *)0x0)) {
      lVar5 = FUN_1447210f0(param_1);
      dVar2 = *(double *)(lVar5 + 0x6d0);
      if (*(char *)(param_1 + 0x2558) == '\x03') {
        fVar10 = *(float *)(param_1 + 0x2564);
        fVar8 = (float)(**(code **)(*plVar4 + 0x10))(plVar4);
        if (fVar8 <= (float)dVar2 - fVar10) {
          if (*(char *)(param_1 + 0x2559) == '\0') {
            uVar6 = 0;
            cVar7 = '\0';
          }
          else {
            cVar7 = *(char *)(param_1 + 0x2559) + -1;
            uVar6 = 2;
          }
          FUN_14596b788(param_1,uVar6,cVar7);
        }
        if ((longlong)*(int *)(param_1 + 0x2578) != 0) {
          lVar5 = 0;
          do {
            if ((*(int *)(*(longlong *)(param_1 + 0x2570) + 8 + lVar5) != 0) &&
               (*(longlong *)(*(longlong *)(param_1 + 0x2570) + lVar5) != 0)) {
LAB_14576fe07:
              uVar9 = FUN_14023bf44(lVar1);
              FUN_14485dd80(param_1 + 0x2570,uVar9);
              return;
            }
            lVar5 = lVar5 + 0x10;
          } while ((longlong)*(int *)(param_1 + 0x2578) * 0x10 != lVar5);
        }
      }
      else {
        if (*(char *)(param_1 + 0x2558) != '\x01') {
          bVar3 = *(byte *)(param_1 + 0x2559);
          if (bVar3 < *(byte *)(param_1 + 0x2568)) {
            uVar9 = *(undefined4 *)(param_1 + 0x2564);
            fVar10 = (float)(**(code **)(*plVar4 + 0x10))(plVar4,bVar3 + 1);
            fVar8 = (float)(**(code **)(*plVar4 + 0x58))(plVar4);
            uVar9 = FUN_14114c86e(lVar1,fVar10 * fVar8,uVar9);
            *(undefined4 *)(param_1 + 0x2564) = uVar9;
            cVar7 = *(char *)(param_1 + 0x2559) + '\x01';
            uVar6 = 1;
          }
          else {
            if (bVar3 <= *(byte *)(param_1 + 0x2568)) {
              return;
            }
            uVar9 = *(undefined4 *)(param_1 + 0x2564);
            fVar10 = (float)(**(code **)(*plVar4 + 0x10))(plVar4);
            fVar8 = (float)(**(code **)(*plVar4 + 0x58))(plVar4);
            uVar9 = FUN_14114c86e(lVar1,fVar10 * fVar8,uVar9);
            *(undefined4 *)(param_1 + 0x2564) = uVar9;
            cVar7 = *(char *)(param_1 + 0x2559);
            uVar6 = 3;
          }
          FUN_14596b788(param_1,uVar6,cVar7);
          return;
        }
        fVar10 = *(float *)(param_1 + 0x2564);
        fVar8 = (float)(**(code **)(*plVar4 + 0x10))(plVar4);
        if (fVar8 <= (float)dVar2 - fVar10) {
          FUN_14596b788(param_1,2,*(undefined1 *)(param_1 + 0x2559));
        }
        if ((longlong)*(int *)(param_1 + 0x2578) != 0) {
          lVar5 = 0;
          do {
            if ((*(int *)(*(longlong *)(param_1 + 0x2570) + 8 + lVar5) != 0) &&
               (*(longlong *)(*(longlong *)(param_1 + 0x2570) + lVar5) != 0)) goto LAB_14576fe07;
            lVar5 = lVar5 + 0x10;
          } while ((longlong)*(int *)(param_1 + 0x2578) * 0x10 != lVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 14576ffba FUN_14576ffba body=62 status=ok
// SIG undefined FUN_14576ffba(void)

void FUN_14576ffba(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1457701a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14576fff8 FUN_14576fff8 body=122 status=ok
// SIG undefined FUN_14576fff8(void)

void FUN_14576fff8(longlong *param_1,uint param_2)

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



// FUNCTION 145770072 FUN_145770072 body=9 status=ok
// SIG undefined FUN_145770072(void)

void FUN_145770072(longlong param_1)

{
  FUN_1457701fa(param_1 + 0x10);
  return;
}



// FUNCTION 14577007c FUN_14577007c body=95 status=ok
// SIG undefined FUN_14577007c(void)

void FUN_14577007c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1457700dc FUN_1457700dc body=195 status=ok
// SIG undefined FUN_1457700dc(void)

undefined8 FUN_1457700dc(undefined8 param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14040d984(&local_30);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_28;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_30 == 0) {
        uVar5 = 0;
      }
      else {
        FUN_148ce0458(local_30,param_1);
        uVar5 = FUN_148ce0876(local_30,param_1);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      goto LAB_145770163;
    }
  }
  uVar5 = 0;
LAB_145770163:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1457701a0 FUN_1457701a0 body=89 status=ok
// SIG undefined FUN_1457701a0(void)

ulonglong FUN_1457701a0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
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



// FUNCTION 1457701fa FUN_1457701fa body=367 status=ok
// SIG undefined FUN_1457701fa(void)

void FUN_1457701fa(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x140);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x100);
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
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145770365. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14577036a FUN_14577036a body=481 status=ok
// SIG undefined FUN_14577036a(void)

void FUN_14577036a(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == (longlong *)0x0) goto LAB_14577051f;
  lVar1 = FUN_14479d2ce(param_1 + 200);
  if (lVar1 != 0) {
    uVar2 = FUN_140b066c4();
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140b066c4();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
        uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x390) + 0x10))(lVar1 + 0x390);
        (**(code **)(*plVar4 + 0x10))(plVar4,uVar2);
      }
    }
  }
  lVar1 = FUN_14479d2ce(param_1 + 0x124);
  if (lVar1 == 0) goto LAB_14577051f;
  plVar3 = (longlong *)FUN_14577087a(lVar1,param_2);
  if (plVar3 == (longlong *)0x0) goto LAB_14577051f;
  lVar1 = FUN_14098e79e();
  if ((*(int *)(plVar3[2] + 0x38) < *(int *)(lVar1 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) goto LAB_14577051f;
  lVar1 = (**(code **)(*plVar3 + 0x9f8))(plVar3);
  if (lVar1 == 0) {
LAB_145770544:
    lVar1 = 0;
  }
  else {
    lVar5 = FUN_14098e79e();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_145770544;
  }
  FUN_14485c47a(param_1 + 300,lVar1);
  FUN_14485c47a(param_1 + 0x124,plVar3);
  if (lVar1 != 0) {
    FUN_1457706d4(local_48,param_1);
    FUN_14577054c(lVar1 + 0x6b8,local_50,local_48);
    FUN_1449db362(local_48);
  }
  if (param_3 != '\0') {
    local_48[0] = 0;
    FUN_14485c47a(local_48,param_2);
    FUN_145770632(param_1 + 0x28,local_48);
  }
  FUN_140b05db8(param_1);
LAB_14577051f:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577054c FUN_14577054c body=216 status=ok
// SIG undefined FUN_14577054c(void)

undefined8 * FUN_14577054c(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145770632 FUN_145770632 body=162 status=ok
// SIG undefined FUN_145770632(void)

void FUN_145770632(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1457706bf;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1457706bf:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1457706d4 FUN_1457706d4 body=422 status=ok
// SIG undefined FUN_1457706d4(void)

longlong * FUN_1457706d4(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
LAB_1457707aa:
    *puVar3 = &PTR_LAB_14b40d390;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b9614d0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = FUN_145a1c8fa;
  }
  else {
    iVar8 = (int)plVar4[1];
    do {
      if (iVar8 == 0) goto LAB_1457707aa;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar10 = iVar8 == iVar6;
      if (bVar10) {
        *(int *)(plVar4 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar10);
    uVar5 = *param_2;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b40d390;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b9614d0;
    puVar3[3] = uVar5;
    puVar3[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_145a1c8fa;
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
  return param_1;
}



// FUNCTION 14577087a FUN_14577087a body=243 status=ok
// SIG undefined FUN_14577087a(void)

longlong FUN_14577087a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar5 = *(longlong *)(param_1 + 0xb0);
    if (lVar5 == 0) {
      lVar5 = FUN_1448abda6(param_1);
    }
    FUN_140937dea(&local_38,lVar5);
    if (local_30 != (longlong *)0x0) {
      iVar4 = (int)local_30[1];
      do {
        if (iVar4 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_30[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(local_30 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar6 = local_30;
      } while (!bVar7);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
      if (plVar6 != (longlong *)0x0) {
        if (local_38 != (longlong *)0x0) {
          param_2 = (**(code **)(*local_38 + 0x38))(local_38,param_1,param_2);
        }
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        if (local_38 != (longlong *)0x0) goto LAB_14577090f;
      }
    }
  }
  param_2 = 0;
LAB_14577090f:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14577096e FUN_14577096e body=312 status=ok
// SIG undefined FUN_14577096e(void)

longlong * FUN_14577096e(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140cc68fa(param_2);
  lVar6 = *(longlong *)(param_2 + 0x6a8);
  plVar3 = *(longlong **)(param_2 + 0x6b0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if ((longlong)*(int *)(lVar6 + 0x58) != 0) {
    lVar8 = *(longlong *)(lVar6 + 0x50);
    lVar7 = (longlong)*(int *)(lVar6 + 0x58) << 3;
    plVar5 = (longlong *)0x0;
    do {
      cVar4 = FUN_14069eaf4(lVar8,param_3);
      if (cVar4 != '\0') goto LAB_145770a2d;
      lVar8 = lVar8 + 8;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  (**(code **)(*param_1 + 0x48))(param_1,param_3);
  FUN_140cc7410(param_2);
  local_50 = 0;
  FUN_14485c47a(&local_50,param_3);
  FUN_1407a297a(lVar6 + 0x50,&local_50);
  plVar5 = (longlong *)FUN_140b05a90(param_2,param_3);
  lVar6 = (**(code **)(*plVar5 + 0xa00))(plVar5);
  (**(code **)(*param_1 + 0x40))(param_1,param_3,plVar5,lVar6 == 0);
LAB_145770a2d:
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
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5;
}



// FUNCTION 145770aa8 FUN_145770aa8 body=462 status=ok
// SIG undefined FUN_145770aa8(void)

void FUN_145770aa8(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) goto LAB_145770b08;
  plVar6 = (longlong *)(param_1 + 0x58);
  local_48 = 0;
  FUN_14485c47a(&local_48);
  local_40 = local_48;
  iVar2 = FUN_1409a82f2(plVar6,(uint)((ulonglong)local_48 >> 0x20) ^ (uint)local_48);
  if (iVar2 == -1) goto LAB_145770b08;
  if ((*plVar6 + (longlong)iVar2 * 0x90 + 8U & 0xfffffffffffffff7) == 0) goto LAB_145770b08;
  lVar7 = *plVar6 + (longlong)iVar2 * 0x90;
  if (*(longlong *)(lVar7 + 0x58) == 0) {
LAB_145770b6b:
    plVar5 = (longlong *)0x0;
  }
  else {
    cVar1 = FUN_144729dda(lVar7 + 0x50);
    if (cVar1 == '\0') goto LAB_145770b6b;
    plVar5 = *(longlong **)(lVar7 + 0x58);
  }
  if (*(longlong *)(lVar7 + 0x68) == 0) {
LAB_145770b8a:
    plVar8 = (longlong *)0x0;
  }
  else {
    cVar1 = FUN_144729dda(lVar7 + 0x60);
    if (cVar1 == '\0') goto LAB_145770b8a;
    plVar8 = *(longlong **)(lVar7 + 0x68);
  }
  local_50 = 0;
  FUN_14485c47a(&local_50,param_2);
  FUN_1487d267e(plVar6,local_50);
  if (*(longlong *)(lVar7 + 0x70) != 0) {
    lVar3 = FUN_140519fd4(param_2);
    if ((lVar3 != 0) && (*(longlong *)(lVar7 + 0x70) != 0)) {
      FUN_14480f766(lVar3);
    }
    *(undefined8 *)(lVar7 + 0x70) = 0;
  }
  if (*(longlong *)(lVar7 + 0x78) != 0) {
    FUN_14480f766(param_2 + 0x350);
    *(undefined8 *)(lVar7 + 0x78) = 0;
  }
  if (plVar5 != (longlong *)0x0) {
    lVar7 = (**(code **)(*plVar5 + 0x20))(plVar5);
    if (lVar7 != 0) {
      FUN_140356f00(lVar7,1,3);
    }
  }
  if (plVar8 != (longlong *)0x0) {
    uVar4 = (**(code **)(*plVar8 + 0x28))(plVar8);
    FUN_1402b8a4c(uVar4,&DAT_14cb716c8);
    FUN_1402b8a4c(uVar4,&DAT_14cb716d0);
    FUN_1402b8a4c(uVar4,&DAT_14cb716d8);
    FUN_1402b8a4c(uVar4,&DAT_14cb716e0);
  }
LAB_145770b08:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145770c78 FUN_145770c78 body=1625 status=ok
// SIG undefined FUN_145770c78(void)

void FUN_145770c78(longlong param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_178 [32];
  code **local_158;
  undefined1 local_150;
  longlong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  code *local_68;
  longlong *local_60;
  code **local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_60 = param_2;
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    local_68 = (code *)0x0;
    FUN_14485c47a(&local_68);
    plVar11 = (longlong *)(param_1 + 0x58);
    local_e8 = local_68;
    iVar6 = FUN_1409a82f2(plVar11,(uint)((ulonglong)local_68 >> 0x20) ^ (uint)local_68,&local_e8);
    local_140 = param_1;
    if ((iVar6 == -1) || (((longlong)iVar6 * 0x90 + *plVar11 + 8U & 0xfffffffffffffff7) == 0)) {
      local_e8 = (code *)0x0;
      uStack_d0 = 0;
      uStack_ce = 0;
      uStack_a4 = 0;
      uStack_e0 = 0x200000000;
      local_d8 = 0xff7fffff00000000;
      uStack_cf = 1;
      uStack_cc = 0;
      local_c8 = 0;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      local_b8 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      local_58 = &local_68;
      local_50 = &local_e8;
      FUN_145771492(plVar11,&local_f8);
      lVar3 = *plVar11;
      lVar1 = lVar3 + (longlong)(int)local_f8 * 0x90;
      *(code **)(lVar1 + 0x3c) = local_68;
      lVar3 = lVar3 + (longlong)(int)local_f8 * 0x90;
      FUN_14485c47a(lVar3 + 0x2c,param_3);
      *(undefined1 *)(lVar3 + 8) = 0;
      *(undefined4 *)(lVar3 + 0x10) = 0;
      FUN_1457712d2(&local_e8,&local_60);
      *(undefined4 *)(lVar3 + 0x50) = (undefined4)local_e8;
      *(undefined4 *)(lVar3 + 0x54) = local_e8._4_4_;
      *(undefined4 *)(lVar3 + 0x58) = (undefined4)uStack_e0;
      *(undefined4 *)(lVar3 + 0x5c) = uStack_e0._4_4_;
      FUN_14577131c(&local_e8,&local_60);
      *(undefined4 *)(lVar3 + 0x60) = (undefined4)local_e8;
      *(undefined4 *)(lVar3 + 100) = local_e8._4_4_;
      *(undefined4 *)(lVar3 + 0x68) = (undefined4)uStack_e0;
      *(undefined4 *)(lVar3 + 0x6c) = uStack_e0._4_4_;
      *(undefined1 *)(lVar3 + 9) = 1;
      *(undefined1 *)(lVar3 + 10) = param_4;
      lVar7 = FUN_140519fd4(param_2);
      lVar3 = local_140;
      if (lVar7 != 0) {
        plVar11 = *(longlong **)(local_140 + 0x18);
        if (plVar11 == (longlong *)0x0) {
LAB_145770ff9:
          local_f8 = 0;
          plStack_f0 = (longlong *)0x0;
        }
        else {
          iVar6 = (int)plVar11[1];
          do {
            if (iVar6 == 0) goto LAB_145770ff9;
            LOCK();
            iVar4 = (int)plVar11[1];
            bVar12 = iVar6 == iVar4;
            if (bVar12) {
              *(int *)(plVar11 + 1) = iVar6 + 1;
              iVar4 = iVar6;
            }
            iVar6 = iVar4;
            UNLOCK();
          } while (!bVar12);
          local_f8 = *(undefined8 *)(local_140 + 0x10);
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          LOCK();
          plVar9 = plVar11 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          plStack_f0 = plVar11;
          if ((int)*plVar9 == 0) {
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
        local_58 = (code **)FUN_145a2b028;
        local_50 = (undefined8 *)((ulonglong)local_50 & 0xffffffff00000000);
        FUN_145771366(&local_e8,&local_f8);
        FUN_140d0168e(lVar7,&local_58,&local_e8);
        FUN_1449db362(&local_e8);
        plVar11 = plStack_f0;
        *(code ***)(lVar1 + 0x70) = local_58;
        param_2 = local_60;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          plVar9 = plStack_f0 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plStack_f0)(plStack_f0);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            param_2 = local_60;
            if (*piVar2 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
              param_2 = local_60;
            }
          }
        }
      }
      FUN_140cc68fa(param_3);
      lVar7 = param_3[0xd5];
      plVar11 = (longlong *)param_3[0xd6];
      if (plVar11 == (longlong *)0x0) {
        cVar5 = FUN_14069eaf4(lVar7 + 0x60,param_2);
      }
      else {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        cVar5 = FUN_14069eaf4(lVar7 + 0x60,param_2);
        LOCK();
        plVar9 = plVar11 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      if (cVar5 != '\0') {
        lVar7 = (**(code **)(*param_3 + 0xa08))(param_3);
        if ((lVar7 == 0) || (*(longlong *)(lVar7 + 0x3b8) == 0)) {
          cVar5 = FUN_1456f056a(param_3);
          if (cVar5 == '\0') {
            cVar5 = FUN_1456f057c(param_3);
            if ((((cVar5 != '\0') && (lVar7 = FUN_1487c6890(param_3 + 300), lVar7 != 0)) &&
                (*(int *)(lVar7 + 0x3d8) != 0)) &&
               (lVar7 = **(longlong **)(lVar7 + 0x3d0), lVar7 != 0)) {
              local_e8 = *(code **)(lVar7 + 0x240);
              uStack_e0 = *(ulonglong *)(lVar7 + 0x248);
              local_d8 = *(undefined8 *)(lVar7 + 0x250);
              uVar8 = *(undefined8 *)(lVar7 + 600);
              uStack_d0 = (undefined1)uVar8;
              uStack_cf = (undefined1)((ulonglong)uVar8 >> 8);
              uStack_ce = (undefined2)((ulonglong)uVar8 >> 0x10);
              uStack_cc = (undefined4)((ulonglong)uVar8 >> 0x20);
              local_138 = *(undefined8 *)(lVar7 + 0x260);
              uStack_130 = *(undefined8 *)(lVar7 + 0x268);
              local_128 = *(undefined8 *)(lVar7 + 0x270);
              local_150 = 0;
              local_158 = (code **)0x0;
              FUN_141507c90(local_60,&local_138,&local_e8,0);
            }
          }
          else {
            lVar7 = FUN_1456f0676(param_3 + 0x125);
            if (lVar7 != 0) {
              if ((*(byte *)(lVar7 + 0x1f8) & 1) == 0) {
                FUN_1447a91cc(lVar7,0,0);
              }
              local_e8 = *(code **)(lVar7 + 0x240);
              uStack_e0 = *(ulonglong *)(lVar7 + 0x248);
              local_d8 = *(undefined8 *)(lVar7 + 0x250);
              uVar8 = *(undefined8 *)(lVar7 + 600);
              uStack_d0 = (undefined1)uVar8;
              uStack_cf = (undefined1)((ulonglong)uVar8 >> 8);
              uStack_ce = (undefined2)((ulonglong)uVar8 >> 0x10);
              uStack_cc = (undefined4)((ulonglong)uVar8 >> 0x20);
              local_118 = *(undefined8 *)(lVar7 + 0x260);
              uStack_110 = *(undefined8 *)(lVar7 + 0x268);
              local_108 = *(undefined8 *)(lVar7 + 0x270);
              local_150 = 0;
              local_158 = (code **)0x0;
              FUN_141507c90(local_60,&local_118,&local_e8,0);
              plVar11 = local_60;
              if (local_60 != (longlong *)0x0) {
                uVar8 = FUN_1407ca880();
                plVar9 = (longlong *)(**(code **)(*plVar11 + 0x288))(plVar11,uVar8);
                if (plVar9 != (longlong *)0x0) {
                  uVar8 = FUN_1407ca880();
                  plVar10 = (longlong *)FUN_144718840(plVar9,uVar8);
                  if ((plVar9 != plVar10) && (plVar10 != (longlong *)0x0)) {
                    FUN_1406966b6(plVar11,&DAT_14cb71990,1);
                    lVar7 = (**(code **)(*plVar10 + 0x50))(plVar10);
                    local_e8 = FUN_146148b84;
                    uStack_e0 = uStack_e0 & 0xffffffff00000000;
                    local_158 = &local_68;
                    FUN_145771a8a(lVar7 + 0xb8,&local_58,lVar3);
                  }
                }
              }
            }
          }
        }
      }
      FUN_141077574(lVar1 + 8);
      if ((*(byte *)((longlong)local_60 + 0x65) & 0x18) == 0x10) {
        FUN_14577174e(lVar3,lVar1 + 8);
      }
      else {
        plVar11 = local_60 + 0x6a;
        local_58 = (code **)FUN_1460d5cbe;
        local_50 = (undefined8 *)((ulonglong)local_50 & 0xffffffff00000000);
        FUN_14577192a(&local_e8,lVar3,&local_58,&local_68);
        FUN_1448b6402(plVar11,&local_58,&local_e8);
        FUN_1449db362(&local_e8);
        *(code ***)(lVar1 + 0x78) = local_58;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457712d2 FUN_1457712d2 body=74 status=ok
// SIG undefined FUN_1457712d2(void)

undefined8 * FUN_1457712d2(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar1 = FUN_140b040c0();
    lVar2 = FUN_144718840(lVar2,uVar1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_14485c47a(param_1,*param_2);
    }
  }
  return param_1;
}



// FUNCTION 14577131c FUN_14577131c body=74 status=ok
// SIG undefined FUN_14577131c(void)

undefined8 * FUN_14577131c(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar1 = FUN_144a7fd54();
    lVar2 = FUN_144718840(lVar2,uVar1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_14485c47a(param_1,*param_2);
    }
  }
  return param_1;
}



// FUNCTION 145771366 FUN_145771366 body=300 status=ok
// SIG undefined FUN_145771366(void)

longlong * FUN_145771366(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
    *puVar5 = &PTR_LAB_14ac89870;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b3ec1d0;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14ac89870;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    puVar5[2] = lVar9;
    *puVar5 = &PTR_FUN_14b3ec1d0;
    puVar5[3] = uVar6;
    puVar5[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  return param_1;
}



// FUNCTION 145771492 FUN_145771492 body=316 status=ok
// SIG undefined FUN_145771492(void)

undefined4 * FUN_145771492(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145771660(param_1,local_48);
  puVar9 = (undefined8 *)param_3[1];
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  puVar10 = local_40;
  for (lVar5 = 0x10; puVar10 = puVar10 + 1, lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)(local_40 + 0x11) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  cVar3 = FUN_1457715d0(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x8c) = uVar8;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x11) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145771bba(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457715d0 FUN_1457715d0 body=142 status=ok
// SIG undefined FUN_1457715d0(void)

undefined8 FUN_1457715d0(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar1 = FUN_1409a82f2();
    if (iVar1 != -1) {
      memmove((void *)((longlong)iVar1 * 0x90 + *param_1),param_3,0x88);
      FUN_1457e7712(param_1,*param_4);
      *param_4 = iVar1;
      uVar2 = 1;
      goto LAB_145771612;
    }
  }
  uVar2 = 0;
LAB_145771612:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145771660 FUN_145771660 body=238 status=ok
// SIG undefined FUN_145771660(void)

int * FUN_145771660(longlong *param_1,int *param_2)

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
      FUN_140f20a84(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x90);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x90) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x90 + *param_1;
  return param_2;
}



// FUNCTION 14577174e FUN_14577174e body=475 status=ok
// SIG undefined FUN_14577174e(void)

void FUN_14577174e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [8];
  undefined1 local_a8 [16];
  code *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = FUN_14479d2ce(param_2 + 0x34);
  if ((lVar6 != 0) && (*(char *)(param_2 + 2) == '\x01')) {
    FUN_14070cbf4(&local_98,lVar6);
    pcVar4 = local_98;
    plVar3 = (longlong *)CONCAT44(uStack_8c,local_90);
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
    if (pcVar4 == (code *)0x0) {
      lVar8 = FUN_1447210f0(lVar6);
      if (lVar8 != 0) {
        if (*(longlong *)(lVar8 + 0x1f0) == 0) {
          puVar9 = (undefined8 *)(lVar8 + 0x458);
        }
        else {
          puVar9 = (undefined8 *)(*(longlong *)(lVar8 + 0x1f0) + 0xf0);
        }
        uVar7 = *puVar9;
        local_98 = FUN_1460d5cbe;
        local_90 = 0;
        FUN_1487cc74a(local_a8,param_1,&local_98,param_2 + 0x34);
        local_98 = (code *)0x0;
        local_90 = 0;
        FUN_14487d8d8(&local_98,local_a8);
        local_58 = 1;
        FUN_14016fdb0(uVar7,local_b0,&local_98);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
        FUN_1449db362(local_a8);
        goto LAB_145771807;
      }
    }
  }
  lVar6 = FUN_140519fd4(lVar6);
  if (lVar6 != 0) {
    cVar5 = FUN_140b038fa(lVar6);
    if (cVar5 != '\0') {
      uVar7 = FUN_1408a1fe2(lVar6);
      FUN_145a2b028(param_1,lVar6,uVar7);
    }
  }
  if (*(char *)(param_2 + 3) == '\0') {
    if (*(char *)(param_2 + 2) == '\x01') {
      cVar5 = FUN_1410770b6(param_1,param_2);
      if (cVar5 != '\0') {
        FUN_1456f06d6(param_1,param_2);
        goto LAB_145771803;
      }
    }
    FUN_1456efee2(param_1,param_2);
  }
LAB_145771803:
  *(undefined1 *)(param_2 + 1) = 0;
LAB_145771807:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577192a FUN_14577192a body=351 status=ok
// SIG undefined FUN_14577192a(void)

longlong * FUN_14577192a(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar10 = *(longlong **)(param_2 + 0x18);
  bVar9 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_145771a20:
    uVar12 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_145771a20;
      LOCK();
      iVar6 = (int)plVar10[1];
      bVar13 = iVar8 == iVar6;
      if (bVar13) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  *puVar5 = &PTR_LAB_14ab672c0;
  puVar5[1] = *param_4;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar5[2] = lVar11;
  *puVar5 = &PTR_FUN_14b3ec320;
  puVar5[3] = uVar12;
  puVar5[4] = plVar10;
  if (bVar9) {
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  return param_1;
}



// FUNCTION 145771a8a FUN_145771a8a body=132 status=ok
// SIG undefined FUN_145771a8a(void)

undefined8
FUN_145771a8a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined4 *)(param_4 + 1);
  local_40 = *param_4;
  FUN_145771d82(local_30,param_3,&local_40,param_5);
  FUN_140b06c70(param_1,param_2,local_30);
  FUN_1449db362(local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145771b0f FUN_145771b0f body=170 status=ok
// SIG undefined FUN_145771b0f(void)

void FUN_145771b0f(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0xffffffff;
  local_48 = 0x20;
  puVar4 = param_1 + 1;
  local_50 = param_3;
  if (puVar4 != param_2 && param_1 != param_2) {
    lVar3 = 1;
    do {
      lVar2 = FUN_14051345a(&local_50,lVar3 + 1);
      if (lVar3 != lVar2) {
        uVar1 = *puVar4;
        *puVar4 = param_1[lVar2];
        param_1[lVar2] = uVar1;
      }
      puVar4 = puVar4 + 1;
      lVar3 = lVar3 + 1;
    } while (puVar4 != param_2);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145771bba FUN_145771bba body=455 status=ok
// SIG undefined FUN_145771bba(void)

void FUN_145771bba(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x90;
        uVar10 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x8c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x88 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145771d82 FUN_145771d82 body=351 status=ok
// SIG undefined FUN_145771d82(void)

longlong * FUN_145771d82(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar10 = *(longlong **)(param_2 + 0x18);
  bVar9 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_145771e78:
    uVar12 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_145771e78;
      LOCK();
      iVar6 = (int)plVar10[1];
      bVar13 = iVar8 == iVar6;
      if (bVar13) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  *puVar5 = &PTR_LAB_14b3ec2b0;
  puVar5[1] = *param_4;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar5[2] = lVar11;
  *puVar5 = &PTR_FUN_14b3ec240;
  puVar5[3] = uVar12;
  puVar5[4] = plVar10;
  if (bVar9) {
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  return param_1;
}



// FUNCTION 145771f0a FUN_145771f0a body=287 status=ok
// SIG undefined FUN_145771f0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145771f0a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c4af8) {
    FUN_144b3d300(&DAT_14c9c4af8);
    if (DAT_14c9c4af8 == -1) {
      FUN_14577202a();
      FUN_140db5666(&DAT_14c9c4a50,2,&DAT_14c9c49e8,L"TDepthOnlyPS<true>",
                    L"/Engine/Private/DepthOnlyPixelShader.usf",L"Main",3,1,FUN_14714d8a0,
                    FUN_14714d878,FUN_14175f98c,&LAB_14714d874,&LAB_14712ac0c,&LAB_14712ac08,0x108,0
                   );
      _DAT_14c9c4a50 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142bcb460);
      _Init_thread_footer(&DAT_14c9c4af8);
    }
  }
  return &DAT_14c9c4a50;
}



// FUNCTION 14577202a FUN_14577202a body=205 status=ok
// SIG undefined FUN_14577202a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577202a(void)

{
  if ((DAT_14c9c4a4f & 2) == 0) {
    DAT_14c9c4a4f = DAT_14c9c4a4f | 2;
    _DAT_14c9c49f0 = L"TDepthOnlyPS<true>";
    _DAT_14c9c4a08 = FUN_146826540;
    _DAT_14c9c4a10 = FUN_146825d77;
    _DAT_14c9c4a18 = FUN_146825fd6;
    _DAT_14c9c4a20 = FUN_1407e02ea;
    _DAT_14c9c4a28 = FUN_146826273;
    _DAT_14c9c4a00 = FUN_14714d83a;
    _DAT_14c9c4a40 = 0xffffffff00000108;
    _DAT_14c9c4a48 = 8;
    DAT_14c9c4a4c = 0;
    _DAT_14c9c4a30 = &LAB_14714d870;
    FUN_1457720f8();
    FUN_1407e00cc(&DAT_14c9c49e8);
    return;
  }
  return;
}



// FUNCTION 1457720f8 FUN_1457720f8 body=123 status=ok
// SIG undefined FUN_1457720f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457720f8(void)

{
  _DAT_14c9c91e8 = L"BASE";
  DAT_14c9c9212 = 4;
  _DAT_14c9c91f0 = FUN_141092e92();
  _DAT_14c9c91f8 = DAT_14c9c49f8;
  _DAT_14c9c9200 = &LAB_14682652b;
  DAT_14c9c49f8 = &DAT_14c9c91e8;
  DAT_14c9c4a4d = DAT_14c9c4a4d + '\x01';
  _DAT_14c9c9208 = 0x100000000;
  if (*(char *)(_DAT_14c9c91f0 + 100) != '\0') {
    DAT_14c9c4a4e = DAT_14c9c4a4e + '\x01';
  }
  return;
}



// FUNCTION 145772174 FUN_145772174 body=202 status=ok
// SIG undefined FUN_145772174(void)

void FUN_145772174(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    param_1[0x31] = lVar3;
    plVar5 = (longlong *)param_1[0x32];
    if (plVar5 == (longlong *)0x0) goto LAB_1457721be;
    param_1[0x32] = 0;
LAB_1457721ff:
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1457721be;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    param_1[0x31] = lVar3;
    plVar5 = (longlong *)param_1[0x32];
    if (plVar4 != plVar5) {
      param_1[0x32] = (longlong)plVar4;
      if (plVar5 == (longlong *)0x0) goto LAB_1457721be;
      goto LAB_1457721ff;
    }
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1457721be;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1457721be:
                    /* WARNING: Could not recover jumptable at 0x0001457721de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 14577223e FUN_14577223e body=99 status=ok
// SIG undefined FUN_14577223e(void)

void FUN_14577223e(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 0x184) = param_4;
  FUN_1408f9d2c();
  FUN_140b0c232(param_1);
  local_20 = *(undefined8 *)(param_2 + 0xb8);
  FUN_1457722a2(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457722a2 FUN_1457722a2 body=195 status=ok
// SIG undefined FUN_1457722a2(void)

void FUN_1457722a2(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 != 0) {
    lVar2 = FUN_1408d3a8a(param_1);
    if (lVar2 != 0) {
      lVar2 = FUN_140115352(lVar2);
      if (lVar2 != 0) {
        FUN_145772396(lVar2,&local_2c,param_2);
        *(undefined4 *)(param_1 + 0x1a0) = local_24;
        *(undefined8 *)(param_1 + 0x198) = local_2c;
      }
    }
  }
  if (*(int *)(param_1 + 0x198) != 0) {
    cVar1 = FUN_140317ca6(param_1 + 0x19c,0);
    if (cVar1 == '\0') {
      if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  FUN_1408d3a8a(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 145772396 FUN_145772396 body=166 status=ok
// SIG undefined FUN_145772396(void)

undefined8 * FUN_145772396(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar4 = *param_3;
  uVar1 = (uint)((ulonglong)uVar4 >> 0x10);
  uVar5 = (uint)uVar4 & 0xffff;
  piVar3 = (int *)FUN_14577243c(param_1 + 400,
                                ((uint)uVar4 << 0x10 | uVar5) + (int)((ulonglong)uVar4 >> 0x20) +
                                (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4));
  if (*piVar3 != 0) {
    cVar2 = FUN_140317ca6(piVar3 + 1,0);
    if (cVar2 == '\0') goto LAB_1457723f7;
  }
  uVar4 = FUN_144a126be(param_1);
  if (*piVar3 == 0) {
    DAT_14c763920 = DAT_14c763920 + -1;
    *piVar3 = DAT_14c763920;
  }
  FUN_14485c47a(piVar3 + 1,uVar4);
LAB_1457723f7:
  *(int *)(param_2 + 1) = piVar3[2];
  *param_2 = *(undefined8 *)piVar3;
  return param_2;
}



// FUNCTION 14577243c FUN_14577243c body=195 status=ok
// SIG undefined FUN_14577243c(void)

longlong FUN_14577243c(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *param_1 + (longlong)iVar2 * 0x1c;
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x1c) == *param_3) {
          if (lVar1 != 0) goto LAB_1457724e2;
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x14);
      } while (iVar2 != -1);
    }
  }
  local_28 = param_3;
  FUN_145772500(param_1,&local_1c,param_2);
  lVar1 = *param_1 + (longlong)local_1c * 0x1c;
LAB_1457724e2:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 145772500 FUN_145772500 body=262 status=ok
// SIG undefined FUN_145772500(void)

undefined4 * FUN_145772500(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14577269a(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  *(uint *)(local_40 + 1) = 0;
  *(uint *)((longlong)local_40 + 0xc) = 0;
  *(uint *)(local_40 + 2) = 0;
  *(uint *)((longlong)local_40 + 0x14) = 0xffffffff;
  cVar1 = FUN_145772608(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 3) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0x14) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_145772796(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145772608 FUN_145772608 body=145 status=ok
// SIG undefined FUN_145772608(void)

undefined8 FUN_145772608(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x1c);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x1c) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          puVar1[4] = (int)param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_14887e778((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[5];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14577269a FUN_14577269a body=251 status=ok
// SIG undefined FUN_14577269a(void)

int * FUN_14577269a(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 145772796 FUN_145772796 body=489 status=ok
// SIG undefined FUN_145772796(void)

void FUN_145772796(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar6 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar5 = (longlong)iVar6 * 0x1c;
        uVar4 = *(undefined8 *)(lVar3 + lVar5);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x18 + lVar5) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar5) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar6 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14577298c FUN_14577298c body=132 status=ok
// SIG undefined FUN_14577298c(void)

void FUN_14577298c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145772a10 FUN_145772a10 body=128 status=ok
// SIG undefined FUN_145772a10(void)

void FUN_145772a10(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_28 = param_3;
  FUN_1447cd2ec(param_1 + 0x1b8);
  if ((((param_3 != '\0') && (*(longlong *)(param_1 + 0x10) != 0)) &&
      (*(longlong *)(param_1 + 0x18) != 0)) && (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 8))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145772c04 FUN_145772c04 body=13 status=ok
// SIG undefined FUN_145772c04(void)

void FUN_145772c04(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_145772caa();
    if ((((plVar3 != (longlong *)0x0) &&
         (lVar4 = (**(code **)(*plVar3 + 0x2b8))(plVar3), lVar4 != 0)) &&
        (plVar3 = (longlong *)FUN_140b16984(lVar4), plVar3 != (longlong *)0x0)) &&
       (iVar1 = *(int *)(lVar2 + 0xe8), (longlong)iVar1 != 0)) {
      lVar2 = *(longlong *)(lVar2 + 0xe0);
      lVar4 = 0;
      do {
        if ((*(char *)(lVar2 + 0x19 + lVar4) != '\x01') ||
           (*(char *)(lVar2 + 0x1a + lVar4) == '\x01')) {
          (**(code **)(*plVar3 + 0x68))
                    (plVar3,lVar2 + 8 + lVar4,*(undefined4 *)(lVar2 + 0x14 + lVar4),0);
        }
        lVar4 = lVar4 + 0x30;
      } while ((longlong)iVar1 * 0x30 != lVar4);
    }
    return;
  }
  return;
}



// FUNCTION 145772c12 FUN_145772c12 body=151 status=ok
// SIG undefined FUN_145772c12(void)

void FUN_145772c12(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_145772caa();
  if ((((plVar2 != (longlong *)0x0) && (lVar3 = (**(code **)(*plVar2 + 0x2b8))(plVar2), lVar3 != 0))
      && (plVar2 = (longlong *)FUN_140b16984(lVar3), plVar2 != (longlong *)0x0)) &&
     (iVar1 = *(int *)(param_1 + 0xe8), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0xe0);
    lVar4 = 0;
    do {
      if ((*(char *)(lVar3 + 0x19 + lVar4) != '\x01') || (*(char *)(lVar3 + 0x1a + lVar4) == '\x01')
         ) {
        (**(code **)(*plVar2 + 0x68))
                  (plVar2,lVar3 + 8 + lVar4,*(undefined4 *)(lVar3 + 0x14 + lVar4),0);
      }
      lVar4 = lVar4 + 0x30;
    } while ((longlong)iVar1 * 0x30 != lVar4);
  }
  return;
}



// FUNCTION 145772caa FUN_145772caa body=104 status=ok
// SIG undefined FUN_145772caa(void)

undefined8 FUN_145772caa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_14479d2ce(*(longlong *)(param_1 + 0x18) + 0x20);
    }
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
  return uVar6;
}



// FUNCTION 145772d12 FUN_145772d12 body=522 status=ok
// SIG undefined FUN_145772d12(void)

void FUN_145772d12(longlong param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  char cVar4;
  uint *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined2 *local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = *(uint *)(param_2 + 1);
  if (1 < (int)uVar2) {
    local_50 = (undefined2 *)0x0;
    _Src = (void *)*param_2;
    local_48 = uVar2;
    FUN_1446dd670(&local_50,(ulonglong)uVar2,0);
    memcpy(local_50,_Src,(ulonglong)uVar2 * 2);
    puVar6 = local_50;
    if (local_48 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_58,puVar6,1);
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x70) + 0x152);
    uVar2 = (uint)((ulonglong)local_58 >> 0x10);
    uVar8 = (uint)local_58 & 0xffff;
    puVar5 = (uint *)FUN_140b19d32(&DAT_14cb108c8,
                                   ((uint)local_58 << 0x10 | uVar8) +
                                   (int)((ulonglong)local_58 >> 0x20) +
                                   (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4),&local_58);
    *puVar5 = (uint)bVar1;
    local_68 = 0;
    local_60 = 0;
    local_78 = *param_2;
    local_70 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      local_70 = 0;
    }
    cVar4 = FUN_140b1a3de();
    if (cVar4 != '\0') {
      local_88 = (undefined8 *)0x0;
      local_80 = 0;
      FUN_1446efa72(&local_88,0,3,0x10);
      local_80 = 3;
      *local_88 = &PTR_LAB_149e665f0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar3 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar3 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar3;
      local_88[2] = lVar7;
      *local_88 = &PTR_FUN_14ab09960;
      local_88[3] = param_1;
      local_88[4] = FUN_141655a62;
      local_90 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_a8 = 0xffffffff;
      FUN_140b1a772(&local_68,local_58,&local_88,0);
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145772f1e FUN_145772f1e body=437 status=ok
// SIG undefined FUN_145772f1e(void)

undefined8 * FUN_145772f1e(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  
  *param_1 = param_2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 1),4000);
  param_1[6] = 0;
  param_1[7] = 1;
  param_1[8] = 0;
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
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  iVar1 = DAT_14c75f610 << 0x1e;
  DAT_14c75f610 = DAT_14c75f610 + 1;
  *(int *)(param_1 + 0x1b) = iVar1;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0xc0000000;
  FUN_140b25128(param_1 + 0x17);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  iVar1 = DAT_14c75f610 << 0x1e;
  DAT_14c75f610 = DAT_14c75f610 + 1;
  *(int *)(param_1 + 0x20) = iVar1;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0xc0000000;
  FUN_1457730d4(param_1 + 0x1c);
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  lVar2 = 0x178;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x10) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -8) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0;
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x278);
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27c) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x53));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x53),4000);
  *(undefined1 *)(param_1 + 0x58) = param_3;
  return param_1;
}



// FUNCTION 1457730d4 FUN_1457730d4 body=104 status=ok
// SIG undefined FUN_1457730d4(void)

void FUN_1457730d4(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar2 = (int)param_1[3];
  if ((longlong)iVar2 == 0) {
    iVar5 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
      FUN_14571f004(param_1,iVar5);
    }
  }
  else {
    iVar5 = *(int *)(param_1[2] + -4 + (longlong)iVar2 * 4);
    *(int *)(param_1 + 3) = iVar2 + -1;
    FUN_14479f406(param_1 + 2);
  }
  lVar3 = *param_1;
  lVar4 = (longlong)iVar5 * 0x30;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  ((undefined8 *)(lVar3 + lVar4))[1] = 0;
  return;
}



// FUNCTION 14577313c FUN_14577313c body=481 status=ok
// SIG undefined FUN_14577313c(void)

void FUN_14577313c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar9 = local_68._4_4_;
      local_68 = uVar4;
      do {
        piVar2 = (int *)(*local_80 + (longlong)iVar9 * 0x30);
        iVar5 = *(int *)(*local_80 + 8 + (longlong)iVar9 * 0x30);
        if (iVar5 == 0) {
          iVar5 = *piVar2;
        }
        else {
          iVar5 = FUN_144a78877(*piVar2,iVar5);
        }
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        piVar2[0xb] = iVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        piVar2[10] = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577331e FUN_14577331e body=205 status=ok
// SIG undefined FUN_14577331e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577331e(void)

{
  if ((DAT_14caada7f & 2) == 0) {
    DAT_14caada7f = DAT_14caada7f | 2;
    _DAT_14caada20 = L"TSlateElementPSDefaultfalsetruetruefalseA";
    _DAT_14caada38 = FUN_146826540;
    _DAT_14caada40 = FUN_146825d77;
    _DAT_14caada48 = FUN_146825fd6;
    _DAT_14caada50 = FUN_1407e02ea;
    _DAT_14caada58 = FUN_146826273;
    _DAT_14caada30 = FUN_14750f2e2;
    _DAT_14caada70 = 0xffffffff00000118;
    _DAT_14caada78 = 8;
    DAT_14caada7c = 0;
    _DAT_14caada60 = &LAB_14750f30c;
    FUN_1457733ec();
    FUN_1407e00cc(&DAT_14caada18);
    return;
  }
  return;
}



// FUNCTION 1457733ec FUN_1457733ec body=133 status=ok
// SIG undefined FUN_1457733ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457733ec(void)

{
  _DAT_14cab0fc0 = L"BASE";
  DAT_14cab0fea = 4;
  FUN_1413f4858();
  _DAT_14cab0fd0 = DAT_14caada28;
  _DAT_14cab0fc8 = &DAT_14caad3e0;
  _DAT_14cab0fd8 = &LAB_14682652b;
  DAT_14caada28 = &DAT_14cab0fc0;
  DAT_14caada7d = DAT_14caada7d + '\x01';
  _DAT_14cab0fe0 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caada7e = DAT_14caada7e + '\x01';
  }
  return;
}



// FUNCTION 145773472 FUN_145773472 body=205 status=ok
// SIG undefined FUN_145773472(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145773472(void)

{
  if ((DAT_14caadba7 & 2) == 0) {
    DAT_14caadba7 = DAT_14caadba7 | 2;
    _DAT_14caadb48 = L"TSlateElementPSDefaultfalsetruetruetrueA";
    _DAT_14caadb60 = FUN_146826540;
    _DAT_14caadb68 = FUN_146825d77;
    _DAT_14caadb70 = FUN_146825fd6;
    _DAT_14caadb78 = FUN_1407e02ea;
    _DAT_14caadb80 = FUN_146826273;
    _DAT_14caadb58 = FUN_14750f38c;
    _DAT_14caadb98 = 0xffffffff00000118;
    _DAT_14caadba0 = 8;
    DAT_14caadba4 = 0;
    _DAT_14caadb88 = &LAB_14750f3b6;
    FUN_145773540();
    FUN_1407e00cc(&DAT_14caadb40);
    return;
  }
  return;
}



// FUNCTION 145773540 FUN_145773540 body=133 status=ok
// SIG undefined FUN_145773540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145773540(void)

{
  _DAT_14cab0ff0 = L"BASE";
  DAT_14cab101a = 4;
  FUN_1413f4858();
  _DAT_14cab1000 = DAT_14caadb50;
  _DAT_14cab0ff8 = &DAT_14caad3e0;
  _DAT_14cab1008 = &LAB_14682652b;
  DAT_14caadb50 = &DAT_14cab0ff0;
  DAT_14caadba5 = DAT_14caadba5 + '\x01';
  _DAT_14cab1010 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caadba6 = DAT_14caadba6 + '\x01';
  }
  return;
}



// FUNCTION 1457735c6 FUN_1457735c6 body=205 status=ok
// SIG undefined FUN_1457735c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457735c6(void)

{
  if ((DAT_14caadccf & 2) == 0) {
    DAT_14caadccf = DAT_14caadccf | 2;
    _DAT_14caadc70 = L"TSlateElementPSBorderfalsetruefalsefalseA";
    _DAT_14caadc88 = FUN_146826540;
    _DAT_14caadc90 = FUN_146825d77;
    _DAT_14caadc98 = FUN_146825fd6;
    _DAT_14caadca0 = FUN_1407e02ea;
    _DAT_14caadca8 = FUN_146826273;
    _DAT_14caadc80 = FUN_14750f436;
    _DAT_14caadcc0 = 0xffffffff00000118;
    _DAT_14caadcc8 = 8;
    DAT_14caadccc = 0;
    _DAT_14caadcb0 = &LAB_14750f460;
    FUN_145773694();
    FUN_1407e00cc(&DAT_14caadc68);
    return;
  }
  return;
}



// FUNCTION 145773694 FUN_145773694 body=133 status=ok
// SIG undefined FUN_145773694(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145773694(void)

{
  _DAT_14cab1020 = L"BASE";
  DAT_14cab104a = 4;
  FUN_1413f4858();
  _DAT_14cab1030 = DAT_14caadc78;
  _DAT_14cab1028 = &DAT_14caad3e0;
  _DAT_14cab1038 = &LAB_14682652b;
  DAT_14caadc78 = &DAT_14cab1020;
  DAT_14caadccd = DAT_14caadccd + '\x01';
  _DAT_14cab1040 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caadcce = DAT_14caadcce + '\x01';
  }
  return;
}



// FUNCTION 14577371a FUN_14577371a body=205 status=ok
// SIG undefined FUN_14577371a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577371a(void)

{
  if ((DAT_14caaecff & 2) == 0) {
    DAT_14caaecff = DAT_14caaecff | 2;
    _DAT_14caaeca0 = L"TSlateElementPSDefaultfalsetruefalsefalseA";
    _DAT_14caaecb8 = FUN_146826540;
    _DAT_14caaecc0 = FUN_146825d77;
    _DAT_14caaecc8 = FUN_146825fd6;
    _DAT_14caaecd0 = FUN_1407e02ea;
    _DAT_14caaecd8 = FUN_146826273;
    _DAT_14caaecb0 = FUN_14750fd82;
    _DAT_14caaecf0 = 0xffffffff00000118;
    _DAT_14caaecf8 = 8;
    DAT_14caaecfc = 0;
    _DAT_14caaece0 = &LAB_14750fdac;
    FUN_1457737e8();
    FUN_1407e00cc(&DAT_14caaec98);
    return;
  }
  return;
}



// FUNCTION 1457737e8 FUN_1457737e8 body=133 status=ok
// SIG undefined FUN_1457737e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457737e8(void)

{
  _DAT_14cab12c0 = L"BASE";
  DAT_14cab12ea = 4;
  FUN_1413f4858();
  _DAT_14cab12d0 = DAT_14caaeca8;
  _DAT_14cab12c8 = &DAT_14caad3e0;
  _DAT_14cab12d8 = &LAB_14682652b;
  DAT_14caaeca8 = &DAT_14cab12c0;
  DAT_14caaecfd = DAT_14caaecfd + '\x01';
  _DAT_14cab12e0 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caaecfe = DAT_14caaecfe + '\x01';
  }
  return;
}



// FUNCTION 14577386e FUN_14577386e body=205 status=ok
// SIG undefined FUN_14577386e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577386e(void)

{
  if ((DAT_14caaee27 & 2) == 0) {
    DAT_14caaee27 = DAT_14caaee27 | 2;
    _DAT_14caaedc8 = L"TSlateElementPSDefaultfalsetruefalsetrueA";
    _DAT_14caaede0 = FUN_146826540;
    _DAT_14caaede8 = FUN_146825d77;
    _DAT_14caaedf0 = FUN_146825fd6;
    _DAT_14caaedf8 = FUN_1407e02ea;
    _DAT_14caaee00 = FUN_146826273;
    _DAT_14caaedd8 = FUN_14750fe2c;
    _DAT_14caaee18 = 0xffffffff00000118;
    _DAT_14caaee20 = 8;
    DAT_14caaee24 = 0;
    _DAT_14caaee08 = &LAB_14750fe56;
    FUN_14577393c();
    FUN_1407e00cc(&DAT_14caaedc0);
    return;
  }
  return;
}



// FUNCTION 14577393c FUN_14577393c body=133 status=ok
// SIG undefined FUN_14577393c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577393c(void)

{
  _DAT_14cab12f0 = L"BASE";
  DAT_14cab131a = 4;
  FUN_1413f4858();
  _DAT_14cab1300 = DAT_14caaedd0;
  _DAT_14cab12f8 = &DAT_14caad3e0;
  _DAT_14cab1308 = &LAB_14682652b;
  DAT_14caaedd0 = &DAT_14cab12f0;
  DAT_14caaee25 = DAT_14caaee25 + '\x01';
  _DAT_14cab1310 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caaee26 = DAT_14caaee26 + '\x01';
  }
  return;
}



// FUNCTION 1457739c2 FUN_1457739c2 body=205 status=ok
// SIG undefined FUN_1457739c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457739c2(void)

{
  if ((DAT_14caaef4f & 2) == 0) {
    DAT_14caaef4f = DAT_14caaef4f | 2;
    _DAT_14caaeef0 = L"TSlateElementPSDefaultfalsefalsefalsefalseA";
    _DAT_14caaef08 = FUN_146826540;
    _DAT_14caaef10 = FUN_146825d77;
    _DAT_14caaef18 = FUN_146825fd6;
    _DAT_14caaef20 = FUN_1407e02ea;
    _DAT_14caaef28 = FUN_146826273;
    _DAT_14caaef00 = FUN_14750fed6;
    _DAT_14caaef40 = 0xffffffff00000118;
    _DAT_14caaef48 = 8;
    DAT_14caaef4c = 0;
    _DAT_14caaef30 = &LAB_14750ff00;
    FUN_145773a90();
    FUN_1407e00cc(&DAT_14caaeee8);
    return;
  }
  return;
}



// FUNCTION 145773a90 FUN_145773a90 body=133 status=ok
// SIG undefined FUN_145773a90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145773a90(void)

{
  _DAT_14cab1320 = L"BASE";
  DAT_14cab134a = 4;
  FUN_1413f4858();
  _DAT_14cab1330 = DAT_14caaeef8;
  _DAT_14cab1328 = &DAT_14caad3e0;
  _DAT_14cab1338 = &LAB_14682652b;
  DAT_14caaeef8 = &DAT_14cab1320;
  DAT_14caaef4d = DAT_14caaef4d + '\x01';
  _DAT_14cab1340 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caaef4e = DAT_14caaef4e + '\x01';
  }
  return;
}



// FUNCTION 145773b16 FUN_145773b16 body=205 status=ok
// SIG undefined FUN_145773b16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145773b16(void)

{
  if ((DAT_14caaf19f & 2) == 0) {
    DAT_14caaf19f = DAT_14caaf19f | 2;
    _DAT_14caaf140 = L"TSlateElementPSGrayscaleFontfalsetruefalsefalseA";
    _DAT_14caaf158 = FUN_146826540;
    _DAT_14caaf160 = FUN_146825d77;
    _DAT_14caaf168 = FUN_146825fd6;
    _DAT_14caaf170 = FUN_1407e02ea;
    _DAT_14caaf178 = FUN_146826273;
    _DAT_14caaf150 = FUN_14751002a;
    _DAT_14caaf190 = 0xffffffff00000118;
    _DAT_14caaf198 = 8;
    DAT_14caaf19c = 0;
    _DAT_14caaf180 = &LAB_147510054;
    FUN_145773be4();
    FUN_1407e00cc(&DAT_14caaf138);
    return;
  }
  return;
}



// FUNCTION 145773be4 FUN_145773be4 body=133 status=ok
// SIG undefined FUN_145773be4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145773be4(void)

{
  _DAT_14cab1380 = L"BASE";
  DAT_14cab13aa = 4;
  FUN_1413f4858();
  _DAT_14cab1390 = DAT_14caaf148;
  _DAT_14cab1388 = &DAT_14caad3e0;
  _DAT_14cab1398 = &LAB_14682652b;
  DAT_14caaf148 = &DAT_14cab1380;
  DAT_14caaf19d = DAT_14caaf19d + '\x01';
  _DAT_14cab13a0 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caaf19e = DAT_14caaf19e + '\x01';
  }
  return;
}



// FUNCTION 145773c6a FUN_145773c6a body=205 status=ok
// SIG undefined FUN_145773c6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145773c6a(void)

{
  if ((DAT_14caaf3ef & 2) == 0) {
    DAT_14caaf3ef = DAT_14caaf3ef | 2;
    _DAT_14caaf390 = L"TSlateElementPSColorFontfalsetruefalsefalseA";
    _DAT_14caaf3a8 = FUN_146826540;
    _DAT_14caaf3b0 = FUN_146825d77;
    _DAT_14caaf3b8 = FUN_146825fd6;
    _DAT_14caaf3c0 = FUN_1407e02ea;
    _DAT_14caaf3c8 = FUN_146826273;
    _DAT_14caaf3a0 = FUN_14751017e;
    _DAT_14caaf3e0 = 0xffffffff00000118;
    _DAT_14caaf3e8 = 8;
    DAT_14caaf3ec = 0;
    _DAT_14caaf3d0 = &LAB_1475101a8;
    FUN_145773d38();
    FUN_1407e00cc(&DAT_14caaf388);
    return;
  }
  return;
}



// FUNCTION 145773d38 FUN_145773d38 body=133 status=ok
// SIG undefined FUN_145773d38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145773d38(void)

{
  _DAT_14cab13e0 = L"BASE";
  DAT_14cab140a = 4;
  FUN_1413f4858();
  _DAT_14cab13f0 = DAT_14caaf398;
  _DAT_14cab13e8 = &DAT_14caad3e0;
  _DAT_14cab13f8 = &LAB_14682652b;
  DAT_14caaf398 = &DAT_14cab13e0;
  DAT_14caaf3ed = DAT_14caaf3ed + '\x01';
  _DAT_14cab1400 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caaf3ee = DAT_14caaf3ee + '\x01';
  }
  return;
}



// FUNCTION 145773dbe FUN_145773dbe body=205 status=ok
// SIG undefined FUN_145773dbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145773dbe(void)

{
  if ((DAT_14caaf63f & 2) == 0) {
    DAT_14caaf63f = DAT_14caaf63f | 2;
    _DAT_14caaf5e0 = L"TSlateElementPSLineSegmentfalsetruefalsefalseA";
    _DAT_14caaf5f8 = FUN_146826540;
    _DAT_14caaf600 = FUN_146825d77;
    _DAT_14caaf608 = FUN_146825fd6;
    _DAT_14caaf610 = FUN_1407e02ea;
    _DAT_14caaf618 = FUN_146826273;
    _DAT_14caaf5f0 = FUN_1475102d2;
    _DAT_14caaf630 = 0xffffffff00000118;
    _DAT_14caaf638 = 8;
    DAT_14caaf63c = 0;
    _DAT_14caaf620 = &LAB_1475102fc;
    FUN_145773e8c();
    FUN_1407e00cc(&DAT_14caaf5d8);
    return;
  }
  return;
}



// FUNCTION 145773e8c FUN_145773e8c body=133 status=ok
// SIG undefined FUN_145773e8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145773e8c(void)

{
  _DAT_14cab1440 = L"BASE";
  DAT_14cab146a = 4;
  FUN_1413f4858();
  _DAT_14cab1450 = DAT_14caaf5e8;
  _DAT_14cab1448 = &DAT_14caad3e0;
  _DAT_14cab1458 = &LAB_14682652b;
  DAT_14caaf5e8 = &DAT_14cab1440;
  DAT_14caaf63d = DAT_14caaf63d + '\x01';
  _DAT_14cab1460 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caaf63e = DAT_14caaf63e + '\x01';
  }
  return;
}



// FUNCTION 145773f12 FUN_145773f12 body=205 status=ok
// SIG undefined FUN_145773f12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145773f12(void)

{
  if ((DAT_14caaf88f & 2) == 0) {
    DAT_14caaf88f = DAT_14caaf88f | 2;
    _DAT_14caaf830 = L"TSlateElementPSRoundedBoxfalsetruefalsefalseA";
    _DAT_14caaf848 = FUN_146826540;
    _DAT_14caaf850 = FUN_146825d77;
    _DAT_14caaf858 = FUN_146825fd6;
    _DAT_14caaf860 = FUN_1407e02ea;
    _DAT_14caaf868 = FUN_146826273;
    _DAT_14caaf840 = FUN_147510426;
    _DAT_14caaf880 = 0xffffffff00000118;
    _DAT_14caaf888 = 8;
    DAT_14caaf88c = 0;
    _DAT_14caaf870 = &LAB_147510450;
    FUN_145773fe0();
    FUN_1407e00cc(&DAT_14caaf828);
    return;
  }
  return;
}



// FUNCTION 145773fe0 FUN_145773fe0 body=133 status=ok
// SIG undefined FUN_145773fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145773fe0(void)

{
  _DAT_14cab14a0 = L"BASE";
  DAT_14cab14ca = 4;
  FUN_1413f4858();
  _DAT_14cab14b0 = DAT_14caaf838;
  _DAT_14cab14a8 = &DAT_14caad3e0;
  _DAT_14cab14b8 = &LAB_14682652b;
  DAT_14caaf838 = &DAT_14cab14a0;
  DAT_14caaf88d = DAT_14caaf88d + '\x01';
  _DAT_14cab14c0 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caaf88e = DAT_14caaf88e + '\x01';
  }
  return;
}



// FUNCTION 145774066 FUN_145774066 body=205 status=ok
// SIG undefined FUN_145774066(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145774066(void)

{
  if ((DAT_14caafadf & 2) == 0) {
    DAT_14caafadf = DAT_14caafadf | 2;
    _DAT_14caafa80 = L"TSlateElementPSSdfFontfalsetruefalsefalseA";
    _DAT_14caafa98 = FUN_146826540;
    _DAT_14caafaa0 = FUN_146825d77;
    _DAT_14caafaa8 = FUN_146825fd6;
    _DAT_14caafab0 = FUN_1407e02ea;
    _DAT_14caafab8 = FUN_146826273;
    _DAT_14caafa90 = FUN_14751057a;
    _DAT_14caafad0 = 0xffffffff00000118;
    _DAT_14caafad8 = 8;
    DAT_14caafadc = 0;
    _DAT_14caafac0 = &LAB_1475105a4;
    FUN_145774134();
    FUN_1407e00cc(&DAT_14caafa78);
    return;
  }
  return;
}



// FUNCTION 145774134 FUN_145774134 body=133 status=ok
// SIG undefined FUN_145774134(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145774134(void)

{
  _DAT_14cab1500 = L"BASE";
  DAT_14cab152a = 4;
  FUN_1413f4858();
  _DAT_14cab1510 = DAT_14caafa88;
  _DAT_14cab1508 = &DAT_14caad3e0;
  _DAT_14cab1518 = &LAB_14682652b;
  DAT_14caafa88 = &DAT_14cab1500;
  DAT_14caafadd = DAT_14caafadd + '\x01';
  _DAT_14cab1520 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caafade = DAT_14caafade + '\x01';
  }
  return;
}



// FUNCTION 1457741ba FUN_1457741ba body=205 status=ok
// SIG undefined FUN_1457741ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1457741ba(void)

{
  if ((DAT_14caafd2f & 2) == 0) {
    DAT_14caafd2f = DAT_14caafd2f | 2;
    _DAT_14caafcd0 = L"TSlateElementPSMsdfFontfalsetruefalsefalseA";
    _DAT_14caafce8 = FUN_146826540;
    _DAT_14caafcf0 = FUN_146825d77;
    _DAT_14caafcf8 = FUN_146825fd6;
    _DAT_14caafd00 = FUN_1407e02ea;
    _DAT_14caafd08 = FUN_146826273;
    _DAT_14caafce0 = FUN_1475106ce;
    _DAT_14caafd20 = 0xffffffff00000118;
    _DAT_14caafd28 = 8;
    DAT_14caafd2c = 0;
    _DAT_14caafd10 = &LAB_1475106f8;
    FUN_145774288();
    FUN_1407e00cc(&DAT_14caafcc8);
    return;
  }
  return;
}



// FUNCTION 145774288 FUN_145774288 body=133 status=ok
// SIG undefined FUN_145774288(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145774288(void)

{
  _DAT_14cab1560 = L"BASE";
  DAT_14cab158a = 4;
  FUN_1413f4858();
  _DAT_14cab1570 = DAT_14caafcd8;
  _DAT_14cab1568 = &DAT_14caad3e0;
  _DAT_14cab1578 = &LAB_14682652b;
  DAT_14caafcd8 = &DAT_14cab1560;
  DAT_14caafd2d = DAT_14caafd2d + '\x01';
  _DAT_14cab1580 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caafd2e = DAT_14caafd2e + '\x01';
  }
  return;
}



// FUNCTION 14577430e FUN_14577430e body=116 status=ok
// SIG undefined FUN_14577430e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577430e(longlong param_1)

{
  longlong lVar1;
  
  _DAT_14ca94428 = L"BASE";
  DAT_14ca94452 = 4;
  lVar1 = FUN_145cc1382();
  _DAT_14ca94440 = &LAB_14682652b;
  _DAT_14ca94448 = 0x100000000;
  _DAT_14ca94438 = *(undefined8 *)(param_1 + 0x10);
  _DAT_14ca94430 = lVar1;
  *(undefined **)(param_1 + 0x10) = &DAT_14ca94428;
  *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x01';
  if (*(char *)(lVar1 + 100) != '\0') {
    *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + '\x01';
  }
  return;
}



// FUNCTION 145774382 FUN_145774382 body=152 status=ok
// SIG undefined FUN_145774382(void)

void FUN_145774382(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    local_58[0] = *param_2;
    local_48[0] = 0;
    if (local_58[0] != 0) {
      plVar2 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar2 = (longlong *)param_2[2];
      }
      (**(code **)*plVar2)(plVar2,local_48);
    }
    FUN_140b38e7e(lVar1,local_58);
  }
  if (*param_2 != 0) {
    plVar2 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577441c FUN_14577441c body=119 status=ok
// SIG undefined FUN_14577441c(void)

void FUN_14577441c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_1487bed06(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 145774494 FUN_145774494 body=167 status=ok
// SIG undefined FUN_145774494(void)

void FUN_145774494(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0xd8,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b3e71d0;
  puVar2[2] = *param_1;
  uVar1 = param_2[1];
  puVar2[3] = *param_2;
  puVar2[4] = uVar1;
  *(undefined1 *)(puVar2 + 5) = 0;
  puVar2[10] = 0;
  *(undefined4 *)(puVar2 + 0xb) = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 100) = 0;
  puVar2[0xe] = 0;
  *(undefined4 *)(puVar2 + 0xf) = 0;
  *(undefined1 *)(puVar2 + 0x10) = 0;
  puVar2[0x15] = 0;
  *(undefined4 *)(puVar2 + 0x16) = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  *(undefined8 *)((longlong)puVar2 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0xbc) = 0;
  puVar2[0x19] = 0;
  *(undefined4 *)(puVar2 + 0x1a) = 0;
  return;
}



// FUNCTION 14577453c FUN_14577453c body=161 status=ok
// SIG undefined FUN_14577453c(void)

int FUN_14577453c(short *param_1,int *param_2)

{
  int iVar1;
  short *psVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  
  iVar1 = *param_2;
  psVar2 = param_1 + (longlong)iVar1 + -1;
  if (param_1 <= psVar2) {
    uVar6 = 0;
    do {
      if (9 < (ushort)(*psVar2 - 0x30U)) break;
      uVar6 = uVar6 + 1;
      psVar2 = psVar2 + -1;
    } while (param_1 <= psVar2);
    if (uVar6 == 0 || iVar1 <= (int)uVar6) {
      return 0;
    }
    if (10 < uVar6) {
      return 0;
    }
    uVar4 = (ulonglong)uVar6;
    lVar5 = -uVar4;
    if (param_1[(longlong)iVar1 + (-1 - uVar4)] != 0x5f) {
      return 0;
    }
    if ((uVar6 != 1) && (param_1[(longlong)iVar1 - uVar4] == 0x30)) {
      return 0;
    }
    lVar3 = 0;
    do {
      lVar3 = (ulonglong)(ushort)param_1[iVar1 + lVar5] + lVar3 * 10 + -0x30;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0);
    if (lVar3 < 0x7fffffff) {
      *param_2 = ~uVar6 + iVar1;
      return (int)lVar3 + 1;
    }
  }
  return 0;
}



// FUNCTION 1457745e2 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(void)

{
  thunk_FUN_144760e82();
  return;
}



// FUNCTION 1457745e8 FUN_1457745e8 body=214 status=ok
// SIG undefined FUN_1457745e8(void)

undefined8 FUN_1457745e8(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_14b412660;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar2;
  *local_28 = &PTR_FUN_14b4125f0;
  local_28[3] = FUN_143da869f;
  FUN_1457746c0(&DAT_14cb895b8,param_1,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457746c0 FUN_1457746c0 body=216 status=ok
// SIG undefined FUN_1457746c0(void)

undefined8 * FUN_1457746c0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457747aa FUN_1457747aa body=53 status=ok
// SIG undefined FUN_1457747aa(void)

void FUN_1457747aa(longlong *param_1)

{
  FUN_140b3ce08();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457747e0 FUN_1457747e0 body=430 status=ok
// SIG undefined FUN_1457747e0(void)

void FUN_1457747e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
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
  uVar4 = local_58;
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar2 = *local_70;
        lVar3 = (longlong)iVar5 * 0x1c;
        uVar8 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar2 + lVar3);
        *(uint *)(lVar2 + 0x18 + lVar3) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x14 + lVar3) =
             *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14577499a FUN_14577499a body=470 status=ok
// SIG undefined FUN_14577499a(void)

undefined8 FUN_14577499a(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  ushort *puVar1;
  undefined1 *puVar2;
  ulonglong *puVar3;
  undefined1 auStack_58 [38];
  ushort local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x160))(param_2,param_1);
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 8),1);
  }
  else {
    *(undefined1 *)(param_1 + 8) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 10),1);
  }
  else {
    *(undefined1 *)(param_1 + 10) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (ushort *)*puVar3 + 1;
    if ((ushort *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_32,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_32);
      }
    }
    else {
      local_32 = *(ushort *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    *(byte *)(param_1 + 9) = (byte)(local_32 >> 0xe);
    FUN_144a5eaa2(param_1 + 0x10,local_32 & 0x3fff,1);
  }
  else {
    local_32 = (ushort)*(byte *)(param_1 + 9) << 0xe | (ushort)*(undefined4 *)(param_1 + 0x18);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (ushort *)*puVar3 + 1;
    if ((ushort *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_32,2);
      }
      else {
        thunk_FUN_1457251a8(param_2,&local_32);
      }
    }
    else {
      local_32 = *(ushort *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
  }
  (**(code **)(*param_2 + 0x170))
            (param_2,*(undefined8 *)(param_1 + 0x10),(longlong)*(int *)(param_1 + 0x18));
  *param_4 = 1;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145774b72 FUN_145774b72 body=203 status=ok
// SIG undefined FUN_145774b72(void)

ulonglong FUN_145774b72(ulonglong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  lVar4 = FUN_14479d2ce(*param_2 + 0x20);
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x548) + 8);
  lVar5 = (ulonglong)*(ushort *)(*param_2 + 0x30) * 0x128;
  if (*(int *)(lVar4 + 0x18 + lVar5) == *(int *)(lVar4 + 0x44 + lVar5)) {
    lVar5 = param_1 + 0x18;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xd8);
    }
    piVar2 = (int *)(param_1 + 0xe0);
    if ((longlong)*piVar2 == 0) {
      param_1 = CONCAT71((int7)(param_1 >> 8),1);
    }
    else {
      lVar6 = 0;
      do {
        lVar7 = (ulonglong)*(ushort *)(lVar5 + 0x14 + lVar6) * 0x128;
        bVar8 = *(int *)(lVar4 + 0x18 + lVar7) == *(int *)(lVar4 + 0x44 + lVar7);
        param_1 = CONCAT71((int7)(param_1 >> 8),bVar8);
        if (!bVar8) break;
        bVar8 = (longlong)*piVar2 * 0x18 + -0x18 != lVar6;
        lVar6 = lVar6 + 0x18;
      } while (bVar8);
    }
  }
  else {
    param_1 = 0;
  }
  plVar3 = (longlong *)param_2[1];
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
  return param_1 & 0xffffffff;
}



// FUNCTION 145774c3e FUN_145774c3e body=482 status=ok
// SIG undefined FUN_145774c3e(void)

void FUN_145774c3e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x14);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145774e22 FUN_145774e22 body=147 status=ok
// SIG undefined FUN_145774e22(void)

void FUN_145774e22(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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



// FUNCTION 145774eb6 FUN_145774eb6 body=48 status=ok
// SIG undefined FUN_145774eb6(void)

void FUN_145774eb6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 145774ee6 FUN_145774ee6 body=100 status=ok
// SIG undefined FUN_145774ee6(void)

void FUN_145774ee6(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  undefined1 local_1f;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_20 = param_3;
  local_1f = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cbadd58);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145774f4c FUN_145774f4c body=327 status=ok
// SIG undefined FUN_145774f4c(void)

ulonglong FUN_145774f4c(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined8 local_44;
  undefined8 uStack_3c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_2 + 1) == '\x01') {
    FUN_1447210f0();
    plVar3 = (longlong *)FUN_14007a5e6();
    if (plVar3 != (longlong *)0x0) {
      local_a8 = 0;
      local_a0 = 0x8000000000;
      uStack_98 = 0xffffffff;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0xf;
      local_48 = 1;
      local_44 = 0;
      uStack_3c = 0;
      cVar1 = (**(code **)(*plVar3 + 0x70))(plVar3,*param_2);
      if (cVar1 != '\0') {
        uVar4 = FUN_140b479f0(&local_108,&DAT_14cb843e8,0);
        uVar5 = FUN_1401e6c61();
        iVar2 = FUN_140df7d8e(param_1,uVar5);
        uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),uVar4 <= (ulonglong)(longlong)iVar2);
        FUN_140368b56(&local_108);
        goto LAB_145775053;
      }
      FUN_140368b56(&local_108);
    }
  }
  uVar4 = 0;
LAB_145775053:
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145775094 FUN_145775094 body=254 status=ok
// SIG undefined FUN_145775094(void)

void FUN_145775094(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140b48de0();
  local_38 = 0x93ede1aa;
  uStack_34 = 0x10ca7375;
  uStack_30 = 0x4df98a28;
  uStack_2c = 0x49b157a0;
  iVar1 = FUN_1448a256a(param_1);
  if (iVar1 < 4) {
    lVar3 = FUN_14081cebe();
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    iVar1 = *(int *)(param_1 + 0x60);
    uVar2 = iVar1 + 1;
    *(uint *)(param_1 + 0x60) = uVar2;
    if (*(uint *)(param_1 + 100) < uVar2) {
      FUN_145735362((longlong *)(param_1 + 0x58));
    }
    *(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = lVar3;
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    uVar2 = *(uint *)(param_1 + 0x40);
    iVar1 = *(int *)(param_1 + 0x70);
    *(uint *)(param_1 + 0x70) = iVar1 + uVar2;
    if ((uint)(*(int *)(param_1 + 0x74) - iVar1) < uVar2) {
      FUN_1446f48e2((longlong *)(param_1 + 0x68));
    }
    memset((void *)((longlong)iVar1 * 4 + *(longlong *)(param_1 + 0x68)),0,(longlong)(int)uVar2 << 2
          );
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457751a0 FUN_1457751a0 body=61 status=ok
// SIG undefined FUN_1457751a0(void)

longlong FUN_1457751a0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14945b8e4(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x68 + *param_1;
  FUN_1457751dd(lVar2);
  return lVar2;
}



// FUNCTION 1457751dd FUN_1457751dd body=55 status=ok
// SIG undefined FUN_1457751dd(void)

void FUN_1457751dd(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = &DAT_100000001;
  *(undefined4 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  return;
}



// FUNCTION 145775214 FUN_145775214 body=62 status=ok
// SIG undefined FUN_145775214(void)

void FUN_145775214(longlong param_1,int param_2)

{
  FUN_1413ff3b2();
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1447ab16c(param_1,param_2);
  return;
}



// FUNCTION 145775252 FUN_145775252 body=108 status=ok
// SIG undefined FUN_145775252(void)

void FUN_145775252(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x68,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x68)) {
      uVar2 = uVar1 / 0x68 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x68,8);
  }
  return;
}



// FUNCTION 1457752be FUN_1457752be body=132 status=ok
// SIG undefined FUN_1457752be(void)

void FUN_1457752be(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145775343 FUN_145775343 body=59 status=ok
// SIG undefined FUN_145775343(void)

void FUN_145775343(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_14577537e(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 14577537e FUN_14577537e body=55 status=ok
// SIG undefined FUN_14577537e(void)

void FUN_14577537e(longlong *param_1)

{
  FUN_145775430(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1457753b6 FUN_1457753b6 body=121 status=ok
// SIG undefined FUN_1457753b6(void)

void FUN_1457753b6(longlong *param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_145775592(param_1,iVar1);
  }
  if (param_2 != 0) {
    puVar2 = (undefined4 *)((longlong)iVar1 * 0x58 + *param_1 + 0x50);
    do {
      *(undefined8 *)(puVar2 + -0xc) = 0;
      puVar2[-10] = 0;
      *(undefined8 *)(puVar2 + -0x14) = 0;
      *(undefined8 *)(puVar2 + -0x12) = 0;
      *(undefined8 *)(puVar2 + -9) = 0xffffffff00000080;
      puVar2[-7] = 0;
      *(undefined8 *)(puVar2 + -4) = 0;
      puVar2[-2] = 0;
      *puVar2 = 0;
      puVar2 = puVar2 + 0x16;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145775430 FUN_145775430 body=351 status=ok
// SIG undefined FUN_145775430(void)

void FUN_145775430(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
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
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145775592 FUN_145775592 body=143 status=ok
// SIG undefined FUN_145775592(void)

void FUN_145775592(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145775622 FUN_145775622 body=63 status=ok
// SIG undefined FUN_145775622(void)

void FUN_145775622(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145775662(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 145775662 FUN_145775662 body=83 status=ok
// SIG undefined FUN_145775662(void)

ulonglong FUN_145775662(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if ((param_1 == 0) || (0x40 < (int)(param_2 - param_1))) {
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



// FUNCTION 1457756b6 FUN_1457756b6 body=91 status=ok
// SIG undefined FUN_1457756b6(void)

void FUN_1457756b6(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_140b42ff8(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 145775712 FUN_145775712 body=297 status=ok
// SIG undefined FUN_145775712(void)

void FUN_145775712(longlong param_1,longlong param_2,float param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = FUN_1402179b4();
  if ((*(byte *)(lVar2 + 0x19) & 0x10) != 0) {
    if ((*(longlong *)(lVar2 + 0x248) == 0) || (0xfffffffd < *(int *)(lVar2 + 0x250) - 1U)) {
      if (*(char *)(lVar2 + 0x244) == '\x01') {
        if ((longlong)*(int *)(param_2 + 0x40) == 0) {
          fVar5 = 0.0;
        }
        else {
          lVar3 = *(longlong *)(param_2 + 0x38);
          lVar4 = (longlong)*(int *)(param_2 + 0x40) * 0x88;
          fVar5 = 0.0;
          do {
            fVar6 = (float)FUN_1405583ce(lVar3);
            fVar5 = fVar5 + fVar6;
            lVar3 = lVar3 + 0x88;
            lVar4 = lVar4 + -0x88;
          } while (lVar4 != 0);
        }
      }
      else {
        bVar1 = *(byte *)(lVar2 + 0x245);
        if ((int)(uint)bVar1 < *(int *)(param_2 + 0x40)) {
          fVar5 = (float)FUN_1405583ce((ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8 +
                                       *(longlong *)(param_2 + 0x38));
        }
        else {
          fVar5 = -1.0;
        }
      }
      *(float *)(param_1 + 0x30) = fVar5 * *(float *)(lVar2 + 0x240);
      FUN_14020a6cc(param_1 + 0x28,1);
    }
    if (0.0 <= param_3) {
      FUN_14095ee72(param_1,param_3 * *(float *)(param_1 + 0x2c));
      return;
    }
  }
  return;
}



// FUNCTION 14577583b FUN_14577583b body=221 status=ok
// SIG undefined FUN_14577583b(void)

undefined8
FUN_14577583b(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145a51b60();
  FUN_144a5c54a(local_d8,uVar1);
  local_b8 = param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145775924 FUN_145775924 body=470 status=ok
// SIG undefined FUN_145775924(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145775924(undefined4 *param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  char **local_58;
  undefined4 local_50;
  char *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char *local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x9a) != 0) {
    local_58 = &local_48;
    local_38 = "staticli";
    local_48 = "activityarea";
    uStack_40 = 0x4b3e625f;
    uStack_3c = 1;
    local_50 = 3;
    local_68 = _DAT_14cb852b8;
    local_60 = DAT_14cb852c0;
    FUN_140b620a4();
    lVar1 = *(longlong *)(param_1 + 0x9a);
    local_48 = (char *)FUN_14015bf82();
    uVar2 = ((uint)((ulonglong)local_48 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_48 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar3 = FUN_145775afc(lVar1 + 0xa0,uVar2 >> 0x10 ^ uVar2,&local_48);
    FUN_145775ede(uVar3,&local_48,param_1);
    *(char **)(param_1 + 0x9c) = local_48;
    lVar1 = *(longlong *)(param_1 + 0x9a);
    local_48 = (char *)FUN_1401ad114();
    uVar2 = ((uint)((ulonglong)local_48 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_48 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar3 = FUN_145775afc(lVar1 + 0xa0,uVar2 >> 0x10 ^ uVar2,&local_48);
    FUN_1457760ae(uVar3,&local_48,param_1);
    *(char **)(param_1 + 0x9e) = local_48;
    lVar1 = *(longlong *)(param_1 + 0x9a);
    local_48 = (char *)FUN_140443780();
    uVar2 = ((uint)((ulonglong)local_48 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_48 >> 4)) *
            -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar3 = FUN_145775afc(lVar1 + 0xa0,uVar2 >> 0x10 ^ uVar2,&local_48);
    FUN_14577627e(uVar3,&local_48,param_1);
    *(char **)(param_1 + 0xa0) = local_48;
  }
  FUN_14577644e(param_1);
  FUN_145776fc0(param_1);
  FUN_145776cc6(param_1);
  *param_1 = 2;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145775afc FUN_145775afc body=180 status=ok
// SIG undefined FUN_145775afc(void)

longlong * FUN_145775afc(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_145775b88;
          break;
        }
        iVar1 = (int)plVar2[4];
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_145775bb2(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x28);
LAB_145775b88:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 145775bb2 FUN_145775bb2 body=269 status=ok
// SIG undefined FUN_145775bb2(void)

undefined4 * FUN_145775bb2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145775df6(param_1,local_48);
  FUN_145775cc0(param_4,local_40);
  *(undefined4 *)(local_40 + 0x20) = 0xffffffff;
  cVar1 = FUN_145775d44(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x20) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_145776ae2(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145775cc0 FUN_145775cc0 body=131 status=ok
// SIG undefined FUN_145775cc0(void)

undefined8 * FUN_145775cc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 2;
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 2;
  FUN_14019d794(param_2 + 1,&local_38);
  FUN_144760e21(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145775d44 FUN_145775d44 body=178 status=ok
// SIG undefined FUN_145775d44(void)

undefined8 FUN_145775d44(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if (*plVar8 == *param_3) {
          FUN_144760e21(plVar8[1],(int)plVar8[2]);
          if (plVar8[1] != 0) {
            FUN_1400020a8();
          }
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar8 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
          *(int *)(plVar8 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
          *(int *)plVar8 = (int)lVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
          *(int *)(plVar8 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          FUN_1487b609c(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145775df6 FUN_145775df6 body=231 status=ok
// SIG undefined FUN_145775df6(void)

int * FUN_145775df6(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 145775ede FUN_145775ede body=228 status=ok
// SIG undefined FUN_145775ede(void)

undefined8 FUN_145775ede(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b3e5890;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b3e5820;
  local_38[3] = param_3;
  local_38[4] = FUN_143c8df02;
  FUN_145775fc4(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145775fc4 FUN_145775fc4 body=216 status=ok
// SIG undefined FUN_145775fc4(void)

undefined8 * FUN_145775fc4(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457760ae FUN_1457760ae body=228 status=ok
// SIG undefined FUN_1457760ae(void)

undefined8 FUN_1457760ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b3e5970;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b3e5900;
  local_38[3] = param_3;
  local_38[4] = FUN_143c8e2e4;
  FUN_145776194(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145776194 FUN_145776194 body=216 status=ok
// SIG undefined FUN_145776194(void)

undefined8 * FUN_145776194(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577627e FUN_14577627e body=228 status=ok
// SIG undefined FUN_14577627e(void)

undefined8 FUN_14577627e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14b3e5a50;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14b3e59e0;
  local_38[3] = param_3;
  local_38[4] = FUN_143c8e6c6;
  FUN_145776364(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145776364 FUN_145776364 body=216 status=ok
// SIG undefined FUN_145776364(void)

undefined8 * FUN_145776364(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577644e FUN_14577644e body=442 status=ok
// SIG undefined FUN_14577644e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577644e(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined4 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined4 local_60;
  code *local_58;
  undefined8 **local_50;
  undefined1 *local_48;
  code **local_40;
  ulonglong local_38;
  
  lVar1 = DAT_14cb84f20;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_70 = DAT_14cb84f20;
  if (DAT_14cb84f20 != 0) {
    local_80 = _DAT_14cb852b8;
    local_78 = DAT_14cb852c0;
    local_58 = (code *)&LAB_143c93488;
    local_48 = &LAB_143c930c8;
    local_68 = param_1;
    local_50 = &local_68;
    local_40 = &local_58;
    uVar2 = FUN_1401ad114();
    local_a0 = local_80;
    local_98._0_4_ = local_78;
    FUN_140e9367e(lVar1,&local_a0,uVar2,&local_48);
    local_90 = _DAT_14cb852b8;
    local_88 = DAT_14cb852c0;
    local_58 = (code *)&LAB_143c9349e;
    local_48 = &LAB_143c93490;
    local_68 = param_1;
    local_50 = &local_68;
    local_40 = &local_58;
    uVar2 = FUN_14015bf82();
    local_a0 = local_90;
    local_98 = (undefined8 *)CONCAT44(local_98._4_4_,local_88);
    FUN_140e9367e(lVar1,&local_a0,uVar2,&local_48);
    local_a0 = &local_70;
    local_b0 = _DAT_14cb852b8;
    local_a8 = DAT_14cb852c0;
    local_58 = FUN_143c934b4;
    local_48 = &LAB_143c934a6;
    local_98 = param_1;
    local_50 = &local_a0;
    local_40 = &local_58;
    uVar2 = FUN_140443780();
    local_68 = local_b0;
    local_60 = local_a8;
    FUN_140e9367e(lVar1,&local_68,uVar2,&local_48);
    FUN_140b61c9c(param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577660a FUN_14577660a body=62 status=ok
// SIG undefined FUN_14577660a(void)

void FUN_14577660a(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_14577663c:
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140631d80(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_14577663c;
  return;
}



// FUNCTION 145776648 FUN_145776648 body=113 status=ok
// SIG undefined FUN_145776648(void)

void FUN_145776648(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x280,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x280)) {
      uVar2 = uVar1 / 0x280 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x280,0x10);
  }
  return;
}



// FUNCTION 1457766ba FUN_1457766ba body=68 status=ok
// SIG undefined FUN_1457766ba(void)

void FUN_1457766ba(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_144a56d22(param_1);
  return;
}



// FUNCTION 1457766fe FUN_1457766fe body=76 status=ok
// SIG undefined FUN_1457766fe(void)

void FUN_1457766fe(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar3 = 1;
  }
  else {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1402b4eec(param_1);
  return;
}



// FUNCTION 14577674a FUN_14577674a body=76 status=ok
// SIG undefined FUN_14577674a(void)

void FUN_14577674a(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar3 = 1;
  }
  else {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_1409c1ac6(param_1);
  return;
}



// FUNCTION 145776796 FUN_145776796 body=205 status=ok
// SIG undefined FUN_145776796(void)

void FUN_145776796(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)(int)uVar7;
        if (iVar3 < (int)uVar7) {
          iVar5 = *(int *)(lVar2 + lVar6 * 0xc);
          iVar1 = *(int *)(lVar2 + 4 + lVar6 * 0xc);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0xc) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0xc) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + lVar6 * 0xc);
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_1447a08a2(param_1,iVar5);
  return;
}



// FUNCTION 145776864 FUN_145776864 body=205 status=ok
// SIG undefined FUN_145776864(void)

void FUN_145776864(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)(int)uVar7;
        if (iVar3 < (int)uVar7) {
          iVar5 = *(int *)(lVar2 + lVar6 * 0x48);
          iVar1 = *(int *)(lVar2 + 4 + lVar6 * 0x48);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0x48) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x48) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + lVar6 * 0x48);
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) != iVar5) {
    FUN_1403af08a(param_1,iVar5);
    return;
  }
  return;
}



// FUNCTION 145776932 FUN_145776932 body=206 status=ok
// SIG undefined FUN_145776932(void)

void FUN_145776932(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        lVar6 = (longlong)(int)uVar7;
        if (iVar3 < (int)uVar7) {
          iVar5 = *(int *)(lVar2 + lVar6 * 0x14);
          iVar1 = *(int *)(lVar2 + 4 + lVar6 * 0x14);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0x14) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x14) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + lVar6 * 0x14);
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) != iVar5) {
    FUN_1401ad22e(param_1,iVar5);
    return;
  }
  return;
}



// FUNCTION 145776a00 FUN_145776a00 body=225 status=ok
// SIG undefined FUN_145776a00(void)

void FUN_145776a00(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  iVar3 = FUN_144a79e9a(param_1 + 2,1,(int)param_1[5]);
  iVar4 = iVar3 + 1;
  iVar5 = (int)param_1[1];
  if (iVar4 < iVar5) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar7 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar2 = *param_1;
      do {
        iVar5 = (int)uVar7;
        if (iVar3 < iVar5) {
          lVar6 = (longlong)iVar5 * 0x30;
          iVar5 = *(int *)(lVar2 + lVar6);
          iVar1 = *(int *)(lVar2 + 4 + lVar6);
          uVar7 = (ulonglong)iVar1;
          if (uVar7 != 0xffffffffffffffff) {
            *(int *)(lVar2 + uVar7 * 0x30) = iVar5;
          }
          if (iVar5 == -1) {
            *(int *)(param_1 + 6) = iVar1;
          }
          else {
            *(int *)(lVar2 + 4 + (longlong)iVar5 * 0x30) = iVar1;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar7 = (ulonglong)*(uint *)(lVar2 + 4 + (longlong)iVar5 * 0x30);
        }
      } while ((int)uVar7 != -1);
      iVar5 = (int)param_1[1];
    }
    if (iVar5 != iVar4) {
      *(int *)(param_1 + 1) = iVar4;
    }
    FUN_144a6134a(param_1 + 2,iVar4,(int)param_1[5] - iVar4);
    iVar5 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) == iVar5) {
    return;
  }
  FUN_14494313c(param_1,iVar5);
  return;
}



// FUNCTION 145776ae2 FUN_145776ae2 body=483 status=ok
// SIG undefined FUN_145776ae2(void)

void FUN_145776ae2(longlong *param_1)

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
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x28);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x24 + lVar5 * 0x28) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20 + lVar5 * 0x28) =
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



// FUNCTION 145776cc6 FUN_145776cc6 body=760 status=ok
// SIG undefined FUN_145776cc6(void)

void FUN_145776cc6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  longlong local_158;
  undefined8 *local_150;
  undefined4 local_148;
  undefined1 local_140 [4];
  undefined8 local_13c;
  undefined4 local_134;
  undefined1 local_130;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 local_11c;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b0;
  undefined2 local_af;
  undefined1 local_ad;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  char local_98;
  undefined1 uStack_97;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar6 = (longlong *)FUN_14479d2ce(param_1 + 0x70);
  if ((((plVar6 != (longlong *)0x0) && (lVar7 = (**(code **)(*plVar6 + 0x2b0))(plVar6), lVar7 != 0))
      && (local_160 = (longlong *)FUN_1401499e8(lVar7), local_160 != (longlong *)0x0)) &&
     (local_168 = (longlong)*(int *)(param_1 + 0xa0), local_168 != 0)) {
    local_158 = *(longlong *)(param_1 + 0x98);
    local_168 = local_168 << 2;
    lVar7 = 0;
    do {
      iVar1 = *(int *)(local_158 + lVar7);
      lVar2 = *(longlong *)(param_1 + 0x78);
      lVar9 = (longlong)iVar1 * 0x280;
      puVar10 = (undefined8 *)(lVar2 + lVar9 + 8);
      cVar5 = FUN_140114204(puVar10);
      if ((cVar5 != '\0') || (*(longlong *)(lVar2 + 600 + lVar9) == 0)) {
        local_78 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_70 = 0;
        uStack_68 = 0;
        uStack_90 = *(undefined4 *)(lVar2 + lVar9 + 0x10);
        uVar3 = *puVar10;
        local_98 = (char)uVar3;
        uStack_97 = (undefined1)((ulonglong)uVar3 >> 8);
        uStack_96 = (undefined2)((ulonglong)uVar3 >> 0x10);
        uStack_94 = (undefined4)((ulonglong)uVar3 >> 0x20);
        FUN_1447715ec(&local_88,lVar2 + lVar9 + 0x18);
        local_a8 = DAT_14cb7bde0;
        local_a0 = DAT_14cb7bde8;
        FUN_144928d62(&local_88,5,&local_a8);
        local_140[0] = 0;
        local_13c = 0;
        local_134 = 0;
        local_130 = 0;
        local_11c = 0;
        local_12c = 0;
        uStack_124 = 0;
        local_110 = 0xc69c4000;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        local_c8 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_af = 1;
        local_ad = 0;
        local_ac = 0;
        if (local_98 == '\x01') {
          local_150 = (undefined8 *)0x0;
          local_148 = 0;
          FUN_1446efa72(&local_150,0,3,0x10);
          local_148 = 3;
          *local_150 = &PTR_LAB_14b3e6380;
          *(int *)(local_150 + 1) = iVar1;
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 1;
          lVar4 = DAT_14c758608 + 1;
          if (lVar8 == 0) {
            LOCK();
            UNLOCK();
            lVar8 = DAT_14c758608 + 2;
            lVar4 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar4;
          local_150[2] = lVar8;
          *local_150 = &PTR_FUN_14b3e5ae0;
          local_150[3] = param_1;
          local_150[4] = FUN_1487b02d6;
          FUN_144a450dc((longlong)&uStack_124 + 4,&local_150);
          FUN_1449db362(&local_150);
          (**(code **)(*local_160 + 0x38))(local_160,&local_150,&local_98,local_140);
          *(undefined8 **)(lVar2 + lVar9 + 0x108) = local_150;
        }
        FUN_1409838b8(local_140);
        if (local_70 != 0) {
          FUN_1400020a8();
        }
      }
      lVar7 = lVar7 + 4;
    } while (local_168 != lVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145776fc0 FUN_145776fc0 body=2224 status=ok
// SIG undefined FUN_145776fc0(void)

void FUN_145776fc0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  bool bVar4;
  void *pvVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined4 *puVar10;
  longlong lVar11;
  int iVar12;
  char *pcVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_278 [32];
  undefined8 **local_258;
  undefined *local_250;
  undefined1 local_248;
  undefined8 *local_240;
  void *local_230;
  char *local_228;
  longlong *local_220;
  longlong *local_218;
  undefined4 local_20c;
  longlong *local_208;
  longlong *local_200;
  undefined8 *local_1f8;
  int local_1f0;
  char *local_1e8;
  ulonglong uStack_1e0;
  void *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  char local_1b8;
  longlong local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  ulonglong uStack_190;
  int local_184 [2];
  int local_17c;
  int local_178;
  undefined4 uStack_174;
  int local_170;
  int local_168 [2];
  int local_160;
  int local_15c [2];
  int local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined1 local_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined8 local_12c;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  undefined2 local_bf;
  undefined1 local_bd;
  undefined4 local_bc;
  longlong local_b8 [4];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  plVar8 = (longlong *)FUN_14479d2ce(param_1 + 0x70);
  if (plVar8 != (longlong *)0x0) {
    lVar9 = (**(code **)(*plVar8 + 0x2b0))(plVar8);
    if (lVar9 != 0) {
      local_208 = (longlong *)FUN_14039ffc6(lVar9);
      if (local_208 != (longlong *)0x0) {
        local_98 = 0;
        local_90 = 0;
        local_b8[0] = 0;
        local_b8[1] = 0;
        local_8c = 0xffffffff00000080;
        local_84 = 0;
        local_78 = 0;
        local_70 = 0;
        if ((longlong)*(int *)(param_1 + 0x80) != 0) {
          lVar9 = *(longlong *)(param_1 + 0x78);
          lVar15 = (longlong)*(int *)(param_1 + 0x80) * 0x280 + lVar9;
          do {
            if ((longlong)*(int *)(lVar9 + 0xf0) != 0) {
              lVar11 = (longlong)*(int *)(lVar9 + 0xf0) * 0x90;
              lVar16 = *(longlong *)(lVar9 + 0xe8) + 0x80;
              do {
                local_150 = lVar16 + -0x78;
                local_148 = (undefined4)lVar16;
                uStack_144 = (undefined4)((ulonglong)lVar16 >> 0x20);
                FUN_1402b3ac6(local_b8,&local_1d8,&local_150,0);
                lVar16 = lVar16 + 0x90;
                lVar11 = lVar11 + -0x90;
              } while (lVar11 != 0);
            }
            lVar9 = lVar9 + 0x280;
          } while (lVar9 != lVar15);
        }
        local_198 = (longlong *)0x0;
        uStack_190 = 0;
        FUN_14577a30e(&local_198);
        if ((int)uStack_190 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uStack_190 & 0xffffffff);
        }
        local_220 = (longlong *)(param_1 + 0x248);
        if (*(int *)(param_1 + 0x254) < (int)uStack_190) {
          FUN_1487b6720(local_220);
        }
        if ((int)uStack_190 != 0) {
          local_218 = local_198;
          local_200 = local_198 + (int)uStack_190;
          do {
            local_230 = (void *)*local_218;
            puVar10 = *(undefined4 **)((longlong)local_230 + 8);
            if (puVar10 == (undefined4 *)0x0) {
              puVar10 = &DAT_14c9485f0;
            }
            FUN_144a7660c(puVar10,&local_150,1);
            (**(code **)(*local_208 + 0x78))(local_208,&local_1a8,&local_150);
            if (local_1a8 != 0) {
              local_1b8 = 0;
              local_1d8 = (void *)0x0;
              uStack_1d0 = 0;
              local_1c8 = 0;
              uStack_1c0 = local_230;
              local_1b8 = FUN_1405f61f4();
              if (local_1b8 != '\x06') {
                local_1e8 = (char *)0x0;
                uStack_1e0 = 0;
                FUN_14890baba(local_230,&local_1e8);
                if ((longlong)(int)uStack_1e0 != 0) {
                  local_228 = local_1e8 + (longlong)(int)uStack_1e0 * 0x38;
                  pcVar13 = local_1e8;
                  do {
                    if (*pcVar13 == '\x01') {
                      FUN_1447a97f4(&local_150,pcVar13 + 0x10);
                      if (0xffffffff < local_150) {
                        iVar12 = 0;
                        lVar9 = local_150;
                        do {
                          local_150 = lVar9;
                          FUN_144a7c8fe(&local_150,&local_1f8,iVar12,1);
                          if (((int)local_1f8 == DAT_14cb7beb0) && (local_1f0 == DAT_14cb7beb8)) {
LAB_14577744a:
                            FUN_1402b5374(&local_150,iVar12,0);
                            lVar9 = local_150;
                          }
                          else {
                            FUN_144a7c8fe(&local_150,local_15c,iVar12,1);
                            if ((local_15c[0] == DAT_14cb7bec8) && (local_154 == DAT_14cb7bed0))
                            goto LAB_14577744a;
                            FUN_144a7c8fe(&local_150,local_168,iVar12,1);
                            if ((local_168[0] == DAT_14cb7bee0) && (local_160 == DAT_14cb7bee8))
                            goto LAB_14577744a;
                            FUN_144a7c8fe(&local_150,&local_178,iVar12,1);
                            if ((local_178 == DAT_14cb7bef8) && (local_170 == DAT_14cb7bf00))
                            goto LAB_14577744a;
                            FUN_144a7c8fe(&local_150,local_184,iVar12,1);
                            lVar9 = local_150;
                            if ((local_184[0] == DAT_14cb7bf10) && (local_17c == DAT_14cb7bf18))
                            goto LAB_14577744a;
                          }
                          local_150._4_4_ = (int)((ulonglong)lVar9 >> 0x20);
                          iVar12 = iVar12 + 1;
                          bVar4 = iVar12 < local_150._4_4_;
                          local_150 = lVar9;
                        } while (bVar4);
                      }
                      uVar14 = (uint)local_150;
                      if (CONCAT44(uStack_134,uStack_138) != 0) {
                        FUN_1400020a8();
                      }
                    }
                    else {
                      uVar14 = *(undefined4 *)(pcVar13 + 0x10);
                    }
                    iVar12 = FUN_1402b3efe(local_b8,uVar14,pcVar13);
                    uVar6 = uStack_1d0;
                    lVar9 = 0;
                    if (iVar12 != -1) {
                      lVar9 = (longlong)iVar12 * 0x48 + local_b8[0];
                    }
                    if (lVar9 != 0) {
                      lVar15 = (longlong)(int)uStack_1d0;
                      uVar7 = (int)uStack_1d0 + 1;
                      uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar7);
                      if (uStack_1d0._4_4_ < uVar7) {
                        FUN_1446f48e2(&local_1d8,uVar6 & 0xffffffff);
                      }
                      *(undefined4 *)((longlong)local_1d8 + lVar15 * 4) =
                           *(undefined4 *)(lVar9 + 0x38);
                    }
                    pcVar13 = pcVar13 + 0x38;
                  } while (pcVar13 != local_228);
                  if ((int)uStack_1d0 != 0) {
                    uVar14 = *(undefined4 *)(param_1 + 0x250);
                    local_150._0_4_ = (uint)local_150 & 0xffffff00;
                    local_150._4_4_ = 0;
                    local_148 = 0;
                    uStack_144 = 0;
                    local_140 = 0;
                    local_12c = 0;
                    local_13c = 0;
                    uStack_138 = 0;
                    uStack_134 = 0;
                    uStack_130 = 0;
                    local_120 = 0xc69c4000;
                    local_d0 = 0;
                    local_c8 = 0;
                    local_c0 = 0;
                    local_d8 = 0;
                    local_e8 = 0;
                    uStack_e0 = 0;
                    local_f8 = 0;
                    uStack_f0 = 0;
                    local_108 = 0;
                    uStack_100 = 0;
                    local_118 = 0;
                    uStack_110 = 0;
                    local_bf = 1;
                    local_bd = 0;
                    local_bc = 0;
                    local_1f8 = (undefined8 *)0x0;
                    local_1f0 = 0;
                    FUN_1446efa72(&local_1f8,0,3,0x10);
                    local_1f0 = 3;
                    *local_1f8 = &PTR_LAB_14b3e6380;
                    *(undefined4 *)(local_1f8 + 1) = uVar14;
                    LOCK();
                    UNLOCK();
                    lVar15 = DAT_14c758608 + 1;
                    lVar9 = DAT_14c758608 + 1;
                    if (lVar15 == 0) {
                      LOCK();
                      UNLOCK();
                      lVar15 = DAT_14c758608 + 2;
                      lVar9 = DAT_14c758608 + 2;
                    }
                    DAT_14c758608 = lVar9;
                    local_1f8[2] = lVar15;
                    *local_1f8 = &PTR_FUN_14b3e5ae0;
                    local_1f8[3] = param_1;
                    local_1f8[4] = FUN_1487b07c0;
                    local_20c = uVar14;
                    FUN_144a450dc(&uStack_130,&local_1f8);
                    FUN_1449db362(&local_1f8);
                    pvVar5 = local_230;
                    local_1f8 = (undefined8 *)0x0;
                    local_1f0 = 0;
                    puVar10 = *(undefined4 **)((longlong)local_230 + 8);
                    if (puVar10 == (undefined4 *)0x0) {
                      puVar10 = &DAT_14c9485f0;
                    }
                    FUN_144a7660c(puVar10,local_15c,1);
                    FUN_140fa600a(pvVar5,local_168);
                    local_250 = &DAT_14cb705e8;
                    local_248 = 0;
                    local_258 = &local_1f8;
                    local_240 = &local_150;
                    (**(code **)(*local_208 + 0x20))(local_208,&local_178,local_168,local_15c);
                    local_1c8 = CONCAT44(uStack_174,local_178);
                    local_228 = (char *)(longlong)(int)uStack_1d0;
                    if (local_228 != (char *)0x0) {
                      local_230 = local_1d8;
                      local_228 = (char *)((longlong)local_228 << 2);
                      pcVar13 = (char *)0x0;
                      do {
                        lVar9 = *(longlong *)(param_1 + 0x78) +
                                (longlong)*(int *)((longlong)local_230 + (longlong)pcVar13) * 0x280;
                        iVar12 = *(int *)(lVar9 + 0x100);
                        *(uint *)(lVar9 + 0x100) = iVar12 + 1U;
                        if (*(uint *)(lVar9 + 0x104) < iVar12 + 1U) {
                          FUN_1446f48e2((longlong *)(lVar9 + 0xf8),iVar12);
                        }
                        *(undefined4 *)(*(longlong *)(lVar9 + 0xf8) + (longlong)iVar12 * 4) =
                             local_20c;
                        pcVar13 = pcVar13 + 4;
                      } while (local_228 != pcVar13);
                    }
                    iVar12 = *(int *)(param_1 + 0x250);
                    *(uint *)(param_1 + 0x250) = iVar12 + 1U;
                    if (*(uint *)(param_1 + 0x254) < iVar12 + 1U) {
                      FUN_1487b6f6a(local_220,iVar12);
                    }
                    pvVar5 = local_1d8;
                    puVar3 = (undefined8 *)(*local_220 + (longlong)iVar12 * 0x28);
                    *puVar3 = 0;
                    lVar9 = (longlong)(int)uStack_1d0;
                    *(int *)(puVar3 + 1) = (int)uStack_1d0;
                    if (lVar9 == 0) {
                      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
                    }
                    else {
                      FUN_144a06ca8(puVar3,uStack_1d0 & 0xffffffff,0);
                      memcpy((void *)*puVar3,pvVar5,lVar9 << 2);
                    }
                    *(char *)(puVar3 + 4) = local_1b8;
                    *(undefined4 *)(puVar3 + 2) = (undefined4)local_1c8;
                    *(undefined4 *)((longlong)puVar3 + 0x14) = local_1c8._4_4_;
                    *(undefined4 *)(puVar3 + 3) = (undefined4)uStack_1c0;
                    *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_1c0._4_4_;
                    FUN_1409838b8(&local_150);
                  }
                }
                FUN_1405d7ab2(local_1e8,uStack_1e0 & 0xffffffff);
                if (local_1e8 != (char *)0x0) {
                  FUN_1400020a8();
                }
              }
              if (local_1d8 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
            plVar8 = local_1a0;
            if (local_1a0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_1a0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_1a0)(local_1a0);
                LOCK();
                piVar2 = (int *)((longlong)plVar8 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                }
              }
            }
            local_218 = local_218 + 1;
          } while (local_218 != local_200);
        }
        if (0 < *(int *)(param_1 + 0x80)) {
          iVar12 = 0;
          do {
            FUN_1487b0858(param_1,iVar12);
            iVar12 = iVar12 + 1;
          } while (iVar12 < *(int *)(param_1 + 0x80));
        }
        if (local_198 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        local_70 = 0;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        FUN_145a27346(local_b8);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145777871 FUN_145777871 body=60 status=ok
// SIG undefined FUN_145777871(void)

void FUN_145777871(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_140b6229c(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1457778ae FUN_1457778ae body=1 status=ok
// SIG undefined FUN_1457778ae(void)

void FUN_1457778ae(void)

{
  return;
}



// FUNCTION 1457778b0 FUN_1457778b0 body=7 status=ok
// SIG undefined FUN_1457778b0(void)

undefined4 FUN_1457778b0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xef0);
}



// FUNCTION 1457778b7 FUN_1457778b7 body=41 status=ok
// SIG undefined FUN_1457778b7(void)

void FUN_1457778b7(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140b6f1b6(param_1);
    param_1 = param_1 + 0x198;
  }
  return;
}



// FUNCTION 1457778e0 FUN_1457778e0 body=22 status=ok
// SIG undefined FUN_1457778e0(void)

bool FUN_1457778e0(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = true;
  if (*param_1 == *param_2) {
    bVar1 = param_1[1] != param_2[1];
  }
  return bVar1;
}



// FUNCTION 1457778f6 FUN_1457778f6 body=63 status=ok
// SIG undefined FUN_1457778f6(void)

void FUN_1457778f6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14577799a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x198,8);
  }
  return;
}



// FUNCTION 145777936 FUN_145777936 body=100 status=ok
// SIG undefined FUN_145777936(void)

void FUN_145777936(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x198 + *param_1);
  FUN_145926ddc(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x198 + (longlong)_Dst),(longlong)iVar2 * 0x198);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14577799a FUN_14577799a body=111 status=ok
// SIG undefined FUN_14577799a(void)

ulonglong FUN_14577799a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x198) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x198,8);
      uVar1 = uVar1 / 0x198;
    }
  }
  return uVar1;
}



// FUNCTION 145777a0a FUN_145777a0a body=146 status=ok
// SIG undefined FUN_145777a0a(void)

void FUN_145777a0a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x198,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x198)) {
      uVar5 = uVar4 / 0x198 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x198,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145777a9e FUN_145777a9e body=51 status=ok
// SIG undefined FUN_145777a9e(void)

undefined8 FUN_145777a9e(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if ((param_2 != 0) && (plVar2 = (longlong *)FUN_1401b2ade(param_2), plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x6c8))(plVar2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 145777ad2 FUN_145777ad2 body=63 status=ok
// SIG undefined FUN_145777ad2(void)

void FUN_145777ad2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145777b46(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 145777b11 FUN_145777b11 body=52 status=ok
// SIG undefined FUN_145777b11(void)

void FUN_145777b11(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_145777c7e(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 145777b46 FUN_145777b46 body=93 status=ok
// SIG undefined FUN_145777b46(void)

ulonglong FUN_145777b46(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 145777ba4 FUN_145777ba4 body=98 status=ok
// SIG undefined FUN_145777ba4(void)

void FUN_145777ba4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145777c06 FUN_145777c06 body=120 status=ok
// SIG undefined FUN_145777c06(void)

void FUN_145777c06(longlong *param_1,uint param_2)

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



// FUNCTION 145777c7e FUN_145777c7e body=156 status=ok
// SIG undefined FUN_145777c7e(void)

undefined8 * FUN_145777c7e(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



// FUNCTION 145777d1a FUN_145777d1a body=132 status=ok
// SIG undefined FUN_145777d1a(void)

void FUN_145777d1a(longlong param_1,int param_2)

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



// FUNCTION 145777d9e FUN_145777d9e body=72 status=ok
// SIG undefined FUN_145777d9e(void)

void FUN_145777d9e(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145777d1a(param_1,iVar1);
  }
  FUN_145777c7e((longlong)iVar1 * 0x20 + *param_1,param_2);
  if (iVar1 != -1) {
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}



// FUNCTION 145777de6 FUN_145777de6 body=347 status=ok
// SIG undefined FUN_145777de6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_145777de6(undefined4 *param_1,uint param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145777f42(&DAT_14cb97548,local_40);
  puVar1 = (undefined8 *)*param_3;
  *local_38 = *puVar1;
  lVar2 = puVar1[1];
  local_38[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  local_38[2] = 0;
  local_38[3] = 0;
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  local_48 = 0;
  cVar3 = FUN_145778036(&DAT_14cb97548,param_2,local_38);
  if (cVar3 == '\0') {
    uVar4 = DAT_14cb97550 - _DAT_14cb9757c;
    if (uVar4 < 4) {
      iVar7 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= DAT_14cb97590)) {
      param_2 = DAT_14cb97590 - 1U & param_2;
      *(uint *)((longlong)local_38 + 0x24) = param_2;
      puVar5 = DAT_14cb97588;
      if (DAT_14cb97588 == (undefined *)0x0) {
        puVar5 = &DAT_14cb97580;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)(puVar5 + ((longlong)DAT_14cb97590 - 1U & (longlong)(int)param_2) * 4);
      puVar5 = DAT_14cb97588;
      if (DAT_14cb97588 == (undefined *)0x0) {
        puVar5 = &DAT_14cb97580;
      }
      *(undefined4 *)(puVar5 + ((longlong)DAT_14cb97590 - 1U & (longlong)(int)param_2) * 4) =
           local_40[0];
    }
    else {
      DAT_14cb97590 = iVar7;
      FUN_140b749d6(&DAT_14cb97548);
    }
  }
  *param_1 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145777f42 FUN_145777f42 body=243 status=ok
// SIG undefined FUN_145777f42(void)

int * FUN_145777f42(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 145778036 FUN_145778036 body=256 status=ok
// SIG undefined FUN_145778036(void)

void FUN_145778036(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined1 uVar12;
  int iVar13;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    local_40 = (longlong *)param_3[1];
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    iVar13 = FUN_140b6c796(param_1,param_2,&local_48);
    plVar11 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (iVar13 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x28);
      FUN_148a9ac74(puVar3);
      uVar4 = *(undefined4 *)param_3;
      uVar5 = *(undefined4 *)((longlong)param_3 + 4);
      uVar6 = *(undefined4 *)(param_3 + 1);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar9 = *(undefined4 *)(param_3 + 3);
      uVar10 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar3[4] = *(undefined4 *)(param_3 + 2);
      puVar3[5] = uVar8;
      puVar3[6] = uVar9;
      puVar3[7] = uVar10;
      *puVar3 = uVar4;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      FUN_148a9c116(param_1,*param_4,1);
      *param_4 = iVar13;
      uVar12 = 1;
      goto LAB_1457780b0;
    }
  }
  uVar12 = 0;
LAB_1457780b0:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar12;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145778138 FUN_145778138 body=485 status=ok
// SIG undefined FUN_145778138(void)

void FUN_145778138(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14577831e FUN_14577831e body=486 status=ok
// SIG undefined FUN_14577831e(void)

void FUN_14577831e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x30;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145778506 FUN_145778506 body=135 status=ok
// SIG undefined FUN_145778506(void)

longlong FUN_145778506(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_140b6cb4e();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_145778553;
  }
  local_30 = param_3;
  FUN_14577858e(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_145778553:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + lVar2 * 0x28 + 0x10;
}



// FUNCTION 14577858e FUN_14577858e body=298 status=ok
// SIG undefined FUN_14577858e(void)

undefined4 * FUN_14577858e(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1457786ba(param_1,local_40);
  puVar1 = (undefined8 *)*param_4;
  *local_38 = *puVar1;
  lVar6 = puVar1[1];
  local_38[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  local_38[2] = 0;
  local_38[3] = 0;
  FUN_140b6c183(0,0);
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  cVar2 = FUN_1457787ae(param_1,param_3,local_38);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_38 + 0x24) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_40[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_145778fa2(param_1);
    }
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457786ba FUN_1457786ba body=243 status=ok
// SIG undefined FUN_1457786ba(void)

int * FUN_1457786ba(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar4 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1457787ae FUN_1457787ae body=242 status=ok
// SIG undefined FUN_1457787ae(void)

undefined8 FUN_1457787ae(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_38 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar12 = FUN_140b6cb4e(param_1,param_2,&local_40);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar12 = FUN_140b6cb4e(param_1);
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
    }
    if (iVar12 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x28);
      FUN_145778c66(puVar3);
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar10 = *(undefined4 *)(param_3 + 3);
      uVar11 = *(undefined4 *)((longlong)param_3 + 0x1c);
      puVar3[4] = *(undefined4 *)(param_3 + 2);
      puVar3[5] = uVar9;
      puVar3[6] = uVar10;
      puVar3[7] = uVar11;
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_148e5008c(param_1,*param_4);
      *param_4 = iVar12;
      uVar13 = 1;
      goto LAB_14577881b;
    }
  }
  uVar13 = 0;
LAB_14577881b:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1457788a2 FUN_1457788a2 body=249 status=ok
// SIG undefined FUN_1457788a2(void)

undefined8 * FUN_1457788a2(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar4 = (ulonglong)(param_2[1] - *param_2) >> 4;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_145778cba(param_1,uVar4 & 0xffffffff);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_1 + 9) == 0) || (*(int *)(param_1 + 9) < iVar2)) {
      *(int *)(param_1 + 9) = iVar2;
      FUN_140b74bcc(param_1);
    }
  }
  puVar5 = (undefined4 *)*param_2;
  puVar1 = (undefined4 *)param_2[1];
  if (puVar5 != puVar1) {
    do {
      local_48 = *puVar5;
      uStack_44 = puVar5[1];
      uStack_40 = puVar5[2];
      uStack_3c = puVar5[3];
      FUN_14577899c(param_1,local_34,&local_48);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577899c FUN_14577899c body=316 status=ok
// SIG undefined FUN_14577899c(void)

undefined4 * FUN_14577899c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_140b747ec(param_1,local_48);
  FUN_145778ada(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
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
  cVar3 = FUN_140b746a2(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x24) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
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
      FUN_140b74bcc(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145778ada FUN_145778ada body=113 status=ok
// SIG undefined FUN_145778ada(void)

undefined8 * FUN_145778ada(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  
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
  plVar2 = (longlong *)*param_3;
  param_1[2] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 3) = (int)param_3[1];
  return param_1;
}



// FUNCTION 145778b4c FUN_145778b4c body=281 status=ok
// SIG undefined FUN_145778b4c(void)

void FUN_145778b4c(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      FUN_145778c66((longlong)iStack_44 * 0x28 + *local_60);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145778c66 FUN_145778c66 body=84 status=ok
// SIG undefined FUN_145778c66(void)

void FUN_145778c66(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140b6c183(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000145778cb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145778cba FUN_145778cba body=417 status=ok
// SIG undefined FUN_145778cba(void)

void FUN_145778cba(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_140549ad6(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_140549c28(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0x28 + -0x24);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        uVar3 = 0xffffffff;
        if (0 < *(int *)((longlong)param_1 + 0x34)) {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -10;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      plVar7 = param_1 + 2;
      *(uint *)(param_1 + 5) = uVar8;
      uVar12 = uVar8 + 0x1f >> 5;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
        FUN_14499171c(plVar7,0,uVar12,4);
        *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
      }
      _Dst = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        _Dst = plVar7;
      }
      if (uVar8 < 0x101) {
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
          plVar7 = (longlong *)param_1[4];
        }
        bVar4 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 145778e5c FUN_145778e5c body=325 status=ok
// SIG undefined FUN_145778e5c(void)

void FUN_145778e5c(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 145778fa2 FUN_145778fa2 body=501 status=ok
// SIG undefined FUN_145778fa2(void)

void FUN_145778fa2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar9 = (longlong)iVar12;
        plVar10 = *(longlong **)(lVar4 + lVar9 * 0x28);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar9 * 0x28);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        lVar4 = lVar4 + lVar9 * 0x28;
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar4 + 0x24) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x20) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145779198 FUN_145779198 body=185 status=ok
// SIG undefined FUN_145779198(void)

undefined8 * FUN_145779198(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b982370;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0x4000;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3ff00000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3ff00000;
  param_1[0x12] = 0x3ff0000000000000;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_144928b90(param_1 + 0x1e,0);
  *(undefined1 *)(param_1 + 0x25) = 0;
  return param_1;
}



// FUNCTION 145779252 FUN_145779252 body=162 status=ok
// SIG undefined FUN_145779252(void)

void FUN_145779252(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x18) == plVar2) goto LAB_145779291;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x18) = plVar2;
      goto LAB_145779291;
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
LAB_145779291:
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
                    /* WARNING: Could not recover jumptable at 0x0001457792f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1457792f4 FUN_1457792f4 body=132 status=ok
// SIG undefined FUN_1457792f4(void)

void FUN_1457792f4(longlong param_1,int param_2)

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



// FUNCTION 14577937a FUN_14577937a body=162 status=ok
// SIG undefined FUN_14577937a(void)

void FUN_14577937a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x18) == plVar2) goto LAB_1457793b9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x18) = plVar2;
      goto LAB_1457793b9;
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
LAB_1457793b9:
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
                    /* WARNING: Could not recover jumptable at 0x000145779418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14577941c FUN_14577941c body=221 status=ok
// SIG undefined FUN_14577941c(void)

void FUN_14577941c(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_1 + 0x20) != *param_2) || (*(int *)(param_1 + 0x28) != (int)param_2[1]))
  {
    *(longlong *)(param_1 + 0x20) = *param_2;
    *(int *)(param_1 + 0x28) = (int)param_2[1];
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  plVar2 = param_2 + 4;
  plVar3 = (longlong *)(param_1 + 0x40);
  for (lVar1 = 0xd; lVar1 != 0; lVar1 = lVar1 + -1) {
    *plVar3 = *plVar2;
    plVar2 = plVar2 + 1;
    plVar3 = plVar3 + 1;
  }
  *(char *)(param_1 + 0xa8) = (char)param_2[0x11];
  *(longlong *)(param_1 + 0xb8) = param_4;
  *(char *)(param_1 + 0x128) = (char)param_2[0x11];
  if (((param_3 != 0) && (param_4 != 0)) &&
     (lVar1 = param_2[0x12], *(char *)(param_1 + 0xb0) = (char)lVar1, (char)lVar1 == '\x01')) {
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_3 + 0x98);
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_3 + 0x90);
    FUN_1447715ec(param_1 + 0x100,param_3 + 0xa0);
    FUN_1457794fa(*(undefined8 *)(param_1 + 0xb8),param_3);
    return;
  }
  return;
}



// FUNCTION 1457794fa FUN_1457794fa body=697 status=ok
// SIG undefined FUN_1457794fa(void)

void FUN_1457794fa(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0 [4];
  undefined8 local_ec;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined2 local_5f;
  undefined1 local_5d;
  undefined4 local_5c;
  ulonglong local_58;
  ulonglong *local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_58 = param_2;
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar6 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x80);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar8 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x40);
      do {
        if (*(ulonglong *)(lVar6 + (longlong)iVar8 * 0x18) == param_2) goto LAB_145779764;
        iVar8 = *(int *)(lVar6 + (longlong)iVar8 * 0x18 + 0x10);
      } while (iVar8 != -1);
    }
  }
  uVar5 = FUN_14479d2ce(param_1 + 8);
  lVar6 = FUN_140149a73(uVar5,0);
  if ((lVar6 != 0) && (plVar7 = (longlong *)FUN_140b75e6e(lVar6), plVar7 != (longlong *)0x0)) {
    uVar2 = *(ulonglong *)(param_1 + 0x10);
    plVar3 = *(longlong **)(param_1 + 0x18);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    local_f0[0] = 0;
    local_ec = 0;
    local_e4 = 0;
    local_e0 = 0;
    local_dc = 0;
    uStack_d4 = 0;
    local_cc = 0;
    local_c0 = 0xc69c4000;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_5f = 1;
    local_5d = 0;
    local_5c = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    local_50 = (ulonglong *)0x0;
    local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
    FUN_1446efa72(&local_50,0,3,0x10);
    local_48 = (longlong *)CONCAT44(local_48._4_4_,3);
    *local_50 = (ulonglong)&PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    uVar9 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (uVar9 == 0) {
      LOCK();
      UNLOCK();
      uVar9 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_50[2] = uVar9;
    *local_50 = (ulonglong)&PTR_FUN_14b988c40;
    local_50[3] = uVar2;
    local_50[4] = (ulonglong)plVar3;
    FUN_144a450dc((longlong)&uStack_d4 + 4,&local_50);
    FUN_1449db362(&local_50);
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_f8,local_58 + 0x90,local_f0);
    if (local_f8 != 0) {
      local_50 = &local_58;
      local_48 = &local_f8;
      FUN_1412f9e04((longlong *)(param_1 + 0x40),local_3c,&local_50,0);
    }
    FUN_1409838b8(local_f0);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_145779764:
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1457797b4 FUN_1457797b4 body=625 status=ok
// SIG undefined FUN_1457797b4(void)

void FUN_1457797b4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [88];
  longlong local_50;
  longlong *local_48;
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0xc0) == '\0') {
    lVar5 = FUN_1400d690e(param_1 + 0x20);
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      plVar3 = *(longlong **)(param_1 + 0x18);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
      }
      local_40 = (undefined8 *)0x0;
      local_38 = 0;
      FUN_1446efa72(&local_40,0,3,0x10);
      local_38 = 3;
      *local_40 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_40[2] = lVar7;
      *local_40 = &PTR_FUN_14b988b70;
      local_40[3] = uVar6;
      local_40[4] = plVar3;
      uVar6 = FUN_1400d690e(param_1 + 0x20);
      FUN_140861c24(local_a8,uVar6);
      local_b8 = 0;
      local_b0 = 0;
      FUN_14009d848(&local_b8,&local_40);
      uVar6 = FUN_140861d4c(local_a8,&local_b8);
      FUN_140697a82(uVar6,&local_50);
      plVar2 = local_48;
      if ((longlong *)(param_1 + 200) != &local_50) {
        *(longlong *)(param_1 + 200) = local_50;
        local_50 = 0;
        plVar4 = *(longlong **)(param_1 + 0xd0);
        if (local_48 != plVar4) {
          local_48 = (longlong *)0x0;
          *(longlong **)(param_1 + 0xd0) = plVar2;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar4 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
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
      plVar2 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_48 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      FUN_140861dac(local_a8);
      if (*(longlong *)(param_1 + 200) != 0) {
        FUN_1406979e8();
        if (*(char *)(param_1 + 0xc0) == '\0') {
          *(undefined1 *)(param_1 + 0xc0) = 1;
        }
      }
      FUN_1449db362(&local_40);
      if (plVar3 != (longlong *)0x0) {
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
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145779a26 FUN_145779a26 body=61 status=ok
// SIG undefined FUN_145779a26(void)

void FUN_145779a26(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_1447cd2ec(param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145779a64 FUN_145779a64 body=380 status=ok
// SIG undefined FUN_145779a64(void)

void FUN_145779a64(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_140b78bbe();
  lVar2 = DAT_14c9a1ab0;
  if (DAT_14c9a1ab0 != 0) {
    FUN_14577a14c(DAT_14c9a1ab0 + 0x580,local_18,FUN_145779c61);
    FUN_145779c61(*(undefined4 *)(lVar2 + 0x58));
  }
  if (DAT_14cb86b80 != 2) {
    FUN_1446efa72(&DAT_14cb86b78,0,2,0x10);
    DAT_14cb86b80 = 2;
  }
  puVar1 = DAT_14cb86b78;
  *DAT_14cb86b78 = &PTR_LAB_14b97d5c0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[2] = lVar4;
  *puVar1 = &PTR_FUN_14b97d550;
  puVar1[3] = FUN_140ef27be;
  uVar3 = FUN_145779bf2();
  FUN_145779be2(uVar3);
  FUN_145779cd4();
  if (DAT_14cb86b90 != 2) {
    FUN_1446efa72(&DAT_14cb86b88,0,2,0x10);
    DAT_14cb86b90 = 2;
  }
  puVar1 = DAT_14cb86b88;
  *DAT_14cb86b88 = &PTR_LAB_14b97d6a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[2] = lVar4;
  *puVar1 = &PTR_FUN_14b97d630;
  uVar3 = FUN_145779c2a();
  FUN_1459a995e(uVar3);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145779be2 FUN_145779be2 body=15 status=ok
// SIG undefined FUN_145779be2(void)

void FUN_145779be2(undefined8 param_1)

{
  FUN_14485c47a(&DAT_14cb88700,param_1);
  return;
}



// FUNCTION 145779bf2 FUN_145779bf2 body=55 status=ok
// SIG undefined FUN_145779bf2(void)

void FUN_145779bf2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbad1c0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbad1c0 = FUN_140002ddd(FUN_1465e5a01,uVar1,L"OakObjectiveWaypointSettings");
  }
  return;
}



// FUNCTION 145779c2a FUN_145779c2a body=55 status=ok
// SIG undefined FUN_145779c2a(void)

void FUN_145779c2a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfdc0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfdc0 = FUN_140002ddd(FUN_146614a20,uVar1,L"ReplicatedTraitMissionAvailableChange");
  }
  return;
}



// FUNCTION 145779c61 FUN_145779c61 body=113 status=ok
// SIG undefined FUN_145779c61(void)

void FUN_145779c61(int param_1)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1 != 4) {
    if ((DAT_14cbcda40 == '\0') && (DAT_14cb86da8 != 0)) {
      DAT_14cbcda40 = '\x01';
      FUN_14577a074(DAT_14cb86da8 + 0x28,local_10);
    }
    FUN_140b78bbe();
    FUN_140b79ab4();
    FUN_140b7b06a();
    FUN_140b79196();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145779cd4 FUN_145779cd4 body=126 status=ok
// SIG undefined FUN_145779cd4(void)

void FUN_145779cd4(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (DAT_14cb7d6a0 != 2) {
    FUN_1446efa72(&DAT_14cb7d698,0,2,0x10);
    DAT_14cb7d6a0 = 2;
  }
  puVar1 = DAT_14cb7d698;
  *DAT_14cb7d698 = &PTR_LAB_14b96db10;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14b96daa0;
  return;
}



// FUNCTION 145779d52 FUN_145779d52 body=70 status=ok
// SIG undefined FUN_145779d52(void)

void FUN_145779d52(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_140b79050();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1401ad22e(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145779d98 FUN_145779d98 body=63 status=ok
// SIG undefined FUN_145779d98(void)

void FUN_145779d98(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145779dd8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 145779dd8 FUN_145779dd8 body=93 status=ok
// SIG undefined FUN_145779dd8(void)

ulonglong FUN_145779dd8(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 145779e36 FUN_145779e36 body=128 status=ok
// SIG undefined FUN_145779e36(void)

void FUN_145779e36(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  code *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  lVar1 = DAT_14cb86df8;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb86df8 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_148922db4(param_1,0);
    }
    local_20 = &local_30;
    local_28 = FUN_143dfc114;
    local_30 = param_1;
    FUN_140b7960e(lVar1,&local_28,0);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145779eb8 FUN_145779eb8 body=107 status=ok
// SIG undefined FUN_145779eb8(void)

void FUN_145779eb8(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145779f07:
      FUN_14029310a(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_140f8ddac(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145779f07;
  FUN_145779f24(param_1);
  FUN_14029310a(param_1,param_2);
  return;
}



// FUNCTION 145779f24 FUN_145779f24 body=335 status=ok
// SIG undefined FUN_145779f24(void)

void FUN_145779f24(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
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



// FUNCTION 14577a074 FUN_14577a074 body=215 status=ok
// SIG undefined FUN_14577a074(void)

undefined8 FUN_14577a074(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14b3fc1e0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14b97d4e0;
  local_30[3] = FUN_1458dfb50;
  FUN_145a9a454(param_1,param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577a14c FUN_14577a14c body=217 status=ok
// SIG undefined FUN_14577a14c(void)

undefined8 FUN_14577a14c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_14ac8b3b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14ac8b340;
  local_38[3] = param_3;
  FUN_14577a226(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577a226 FUN_14577a226 body=214 status=ok
// SIG undefined FUN_14577a226(void)

undefined8 * FUN_14577a226(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577a30e FUN_14577a30e body=93 status=ok
// SIG undefined FUN_14577a30e(void)

void FUN_14577a30e(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb86da8 != 0) {
    local_10 = &local_20;
    local_18 = FUN_143dfc042;
    local_20 = param_1;
    FUN_140b7a69a();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577a36c FUN_14577a36c body=52 status=ok
// SIG undefined FUN_14577a36c(void)

void FUN_14577a36c(void)

{
  if (DAT_14cbcd998 < 2) {
    FUN_14577a3a0();
    FUN_140b7aa00();
    return;
  }
  FUN_140b7aa00();
  DAT_14cbcd998 = 1;
  FUN_140b7abe2();
  return;
}



// FUNCTION 14577a3a0 FUN_14577a3a0 body=381 status=ok
// SIG undefined FUN_14577a3a0(void)

void FUN_14577a3a0(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_14cbcd988;
  if (DAT_14cbcd990 != (undefined *)0x0) {
    puVar5 = DAT_14cbcd990;
  }
  iVar4 = DAT_14cbcd998 + 3;
  if (-1 < DAT_14cbcd998) {
    iVar4 = DAT_14cbcd998;
  }
  if (DAT_14cbcd958 - DAT_14cbcd984 < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14cbcd960;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14cbcd978 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14cbcd978;
    }
    local_78 = &DAT_14cbcd950;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14cbcd960)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x4c + (longlong)iVar2 * 0x50) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14cbcd950 ||
               ((undefined4 *)CONCAT44(uStack_64,uStack_68) != &DAT_14cbcd960 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14cbcd998) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14cbcd998);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14577a51e FUN_14577a51e body=87 status=ok
// SIG undefined FUN_14577a51e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577a51e(void)

{
  if (DAT_14cbcd9a8 != DAT_14cbcd9d4) {
    FUN_140b7c05e();
    DAT_14cbcd9a8 = 0;
    if (DAT_14cbcd9ac < 0) {
      FUN_140549ad6(&DAT_14cbcd9a0,0);
    }
    _DAT_14cbcd9d0 = 0xffffffff;
    DAT_14cbcd9c8 = 0;
  }
  return;
}



// FUNCTION 14577a576 FUN_14577a576 body=41 status=ok
// SIG undefined FUN_14577a576(void)

void FUN_14577a576(longlong *param_1)

{
  FUN_140b7c6c6();
  if ((char)param_1[5] == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014577a594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x20))(param_1);
    return;
  }
  return;
}



// FUNCTION 14577a5a0 FUN_14577a5a0 body=672 status=ok
// SIG undefined FUN_14577a5a0(void)

void FUN_14577a5a0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_f8 [40];
  uint local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  char local_c0;
  longlong local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined2 local_3f;
  undefined1 local_3d;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = param_1 + -0x30;
  FUN_140b7c6c8();
  lVar5 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(lVar1);
  if ((lVar5 == 0) || (lVar6 = FUN_140b7c6ca(param_1), lVar6 == 0)) goto LAB_14577a627;
  lVar7 = FUN_1403ca142();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
      lVar7 + 0x30)) goto LAB_14577a627;
  uVar8 = FUN_140d27a2a(lVar6);
  cVar4 = FUN_14577a842(uVar8);
  if (cVar4 == '\0') goto LAB_14577a627;
  lVar6 = FUN_1402735c8();
  cVar4 = FUN_140114204(lVar6 + 0x568);
  if (cVar4 == '\0') goto LAB_14577a627;
  plVar2 = (longlong *)(param_1 + 0x18);
  if (((*(int *)(param_1 + 0x20) == 0) || ((longlong *)*plVar2 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*(longlong *)*plVar2 + 0x30))(), cVar4 == '\0')) {
    local_d0 = 0;
    uStack_cc = 0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    local_c8 = 3;
    puVar3 = (undefined8 *)CONCAT44(uStack_cc,local_d0);
    *puVar3 = &PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    puVar3[2] = lVar9;
    *puVar3 = &PTR_FUN_14b9ae7a0;
    puVar3[3] = 0;
    FUN_14485c47a(puVar3 + 3,lVar1);
    puVar3[4] = &LAB_148e37fee;
    *(undefined4 *)(puVar3 + 5) = 0;
    FUN_144a450dc(plVar2,&local_d0);
    FUN_1449db362(&local_d0);
  }
  local_d0 = local_d0 & 0xffffff00;
  uStack_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_c0 = '\0';
  local_bc = 0;
  uStack_b4 = 0;
  local_ac = 0;
  local_a0 = 0xc69c4000;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_3f = 1;
  local_3d = 0;
  local_3c = 0;
  FUN_1401aa3da((longlong)&uStack_b4 + 4,plVar2);
  lVar5 = FUN_140149a73(lVar5,0);
  if (lVar5 == 0) {
    local_3c = 2;
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  else {
    FUN_140983ba6(lVar6 + 0x568,lVar5,&local_d0);
    *(bool *)(param_1 + 0x28) = local_3c == 1;
    if (local_3c == 1) {
      if (local_c0 == '\x03') {
        bVar11 = local_bc == 0;
LAB_14577a7ca:
        uVar10 = (ulonglong)!bVar11;
      }
      else if (local_c0 == '\x02') {
        uVar10 = uStack_b4 & 0xffffffff;
      }
      else {
        uVar10 = 0;
        if (local_c0 == '\x01') {
          bVar11 = (int)uStack_b4 == 0;
          goto LAB_14577a7ca;
        }
      }
      FUN_14577a986(lVar1,uVar10);
    }
  }
  FUN_1409838b8(&local_d0);
LAB_14577a627:
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14577a842 FUN_14577a842 body=264 status=ok
// SIG undefined FUN_14577a842(void)

ulonglong FUN_14577a842(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  size_t sVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined1 local_78 [16];
  undefined *local_68;
  undefined4 local_60;
  undefined2 local_58 [2];
  undefined8 local_54;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_14577a94c();
  uVar6 = 0;
  lVar2 = FUN_140149a73(uVar1,0);
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_14039ffc6(lVar2);
    uVar6 = 0;
    uVar5 = 0;
    if (plVar3 != (longlong *)0x0) {
      local_58[0] = 0;
      local_54 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      local_30 = 0;
      uStack_28 = 0;
      local_68 = PTR_u_missions_missionset_main_prisonp_14c763ff0;
      if (PTR_u_missions_missionset_main_prisonp_14c763ff0 != (undefined *)0x0) {
        sVar4 = wcslen((wchar_t *)PTR_u_missions_missionset_main_prisonp_14c763ff0);
        uVar5 = (int)sVar4;
      }
      local_60 = uVar5;
      FUN_140b7c6f1(&local_68,local_58);
      (**(code **)(*plVar3 + 0x38))(plVar3,local_78,local_58);
      FUN_1403a0728(local_78,&local_80);
      uVar6 = CONCAT71((int7)((ulonglong)local_78 >> 8),local_80 != DAT_14cb88920);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577a94c FUN_14577a94c body=58 status=ok
// SIG undefined FUN_14577a94c(void)

undefined8 FUN_14577a94c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda(param_1 + 100);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 100);
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      return *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
    }
  }
  return 0;
}



// FUNCTION 14577a986 FUN_14577a986 body=534 status=ok
// SIG undefined FUN_14577a986(void)

void FUN_14577a986(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_14011be0c(param_1 + 6);
  if (lVar3 != 0) {
    lVar4 = FUN_144a5dd5e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      if (*(longlong *)((longlong)param_1 + 0x5c) != 0) {
        FUN_140c125e6(lVar3 + 0xd98,(longlong *)((longlong)param_1 + 0x5c));
      }
      lVar4 = FUN_1402735c8();
      if (*(int *)(lVar4 + 0x5a8) != *(int *)(lVar4 + 0x5d4)) {
        lVar7 = lVar4 + 0x5d8;
        if (*(longlong *)(lVar4 + 0x5e0) != 0) {
          lVar7 = *(longlong *)(lVar4 + 0x5e0);
        }
        iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar4 + 0x5e8) - 1U & param_2) * 4);
        if (iVar6 != -1) {
          lVar4 = *(longlong *)(lVar4 + 0x5a0);
          iVar8 = iVar6;
          do {
            if (*(uint *)(lVar4 + (longlong)iVar8 * 0x30) == param_2) goto LAB_14577aa81;
            iVar8 = *(int *)((longlong)iVar8 * 0x30 + lVar4 + 0x28);
          } while (iVar8 != -1);
        }
      }
    }
  }
  goto LAB_14577aa1e;
  while (iVar6 = *(int *)(lVar7 + 0x28), iVar6 != -1) {
LAB_14577aa81:
    lVar7 = lVar4 + (longlong)iVar6 * 0x30;
    if (*(uint *)(lVar4 + (longlong)iVar6 * 0x30) == param_2) goto LAB_14577aa9a;
  }
  lVar7 = 0;
LAB_14577aa9a:
  lVar4 = *(longlong *)(lVar7 + 8);
  *(longlong *)((longlong)param_1 + 0x5c) = lVar4;
  if (lVar4 != DAT_14caa8578) {
    cVar2 = FUN_140426394(lVar3 + 0xd98,lVar7 + 8);
    if (cVar2 == '\0') {
      FUN_1403ca8ec(lVar3 + 0xd98,lVar7 + 8);
      lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
      if (lVar3 != 0) {
        lVar3 = *(longlong *)(lVar7 + 0x18);
        if (lVar3 == 0) {
          uVar5 = FUN_140067708();
          lVar3 = FUN_14477b664(uVar5);
          *(longlong *)(lVar7 + 0x18) = lVar3;
        }
        lVar4 = *(longlong *)(lVar7 + 0x20);
        if (lVar4 == 0) {
          if ((lVar3 == 0) || (*(longlong *)(lVar7 + 0x10) == 0)) goto LAB_14577aa1e;
          plVar1 = *(longlong **)(lVar3 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            *(undefined8 *)(lVar7 + 0x20) = 0;
            goto LAB_14577aa1e;
          }
          uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar4 = FUN_144aff482(uVar5,(longlong *)(lVar7 + 0x10));
          *(longlong *)(lVar7 + 0x20) = lVar4;
          if (lVar4 == 0) goto LAB_14577aa1e;
        }
        local_58 = 0;
        uStack_50 = 0;
        FUN_140d26af5(local_48,lVar4);
        FUN_144a7b030(local_48);
      }
    }
  }
LAB_14577aa1e:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14577ab9e FUN_14577ab9e body=14 status=ok
// SIG undefined FUN_14577ab9e(void)

undefined1 FUN_14577ab9e(longlong param_1)

{
  (**(code **)(param_1 + 0x18))();
  return 1;
}



// FUNCTION 14577abac FUN_14577abac body=601 status=ok
// SIG undefined FUN_14577abac(void)

void FUN_14577abac(void)

{
  longlong lVar1;
  size_t sVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_1f8 [32];
  longlong local_1d8 [2];
  longlong *local_1c8;
  undefined2 **ppuStack_1c0;
  undefined1 local_1b4 [4];
  undefined2 *local_1b0;
  int local_1a8;
  wchar_t *local_108;
  undefined4 local_100;
  wchar_t *local_f8;
  undefined4 local_f0;
  byte local_b8;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_14577b9dc();
  uVar7 = 0;
  lVar1 = FUN_140d6a126(DAT_14c872ce0,L"CrashReportClient",0,&DAT_14c872ce8);
  if (lVar1 != 0) {
    FUN_1408e76da(&local_108);
    FUN_140b7c8de(&local_1b0,lVar1);
    FUN_140056680(local_1d8,L"CrashReportClient");
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
    local_1c8 = local_1d8;
    ppuStack_1c0 = &local_1b0;
    FUN_14577b86e(&local_108,local_1b4);
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
    if (local_1d8[0] != 0) {
      FUN_1400020a8();
    }
    local_b8 = local_b8 | 1;
    local_1c8 = (longlong *)0x0;
    ppuStack_1c0 = (undefined2 **)0x0;
    FUN_14577b3ae();
    FUN_140056680(local_1d8,&DAT_14c83dab8);
    FUN_14577b4ea(&local_108,local_1d8,1,&local_1c8);
    if (local_1d8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_1c8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_140b7cb8c(&local_1b0);
    FUN_1409263a6(&local_108);
  }
  FUN_14577ae06();
  local_108 = (wchar_t *)FUN_14577aebc();
  if (local_108 != (wchar_t *)0x0) {
    sVar2 = wcslen(local_108);
    uVar7 = (int)sVar2;
  }
  local_f8 = L"NotAllowedUnattendedBugReports";
  local_f0 = 0x1e;
  local_100 = uVar7;
  FUN_140bee87a(&local_1b0,&local_108,2);
  if (DAT_14c83df41 == '\0') {
    plVar3 = (longlong *)FUN_1400dbadc();
    plVar5 = (longlong *)*plVar3;
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_140e92164();
      *plVar3 = (longlong)plVar5;
    }
    puVar6 = local_1b0;
    if (local_1a8 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x100))(plVar5,puVar6,0,0);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  lVar1 = FUN_140008f10();
  FUN_14123f5ce(lVar1 + 0x120,&local_108,FUN_14577ae06);
  FUN_14577b282();
  if (local_1b0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14577ae06 FUN_14577ae06 body=180 status=ok
// SIG undefined FUN_14577ae06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577ae06(void)

{
  char cVar1;
  undefined8 *puVar2;
  wchar_t *_Source;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  longlong *local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a5dc74(local_20);
  local_28 = &DAT_14c872ce8;
  cVar1 = FUN_14577b02e(DAT_14c872ce0,L"CrashContextProperties",L"CrashReportClientRichText",
                        local_20);
  if (cVar1 != '\0') {
    puVar2 = (undefined8 *)FUN_1447a1f4a(local_20);
    if (*(int *)(puVar2 + 1) == 0) {
      _Source = L"";
    }
    else {
      _Source = (wchar_t *)*puVar2;
    }
    wcsncpy((wchar_t *)&DAT_14c83d638,_Source,0x1ff);
    _DAT_14c83da36 = 0;
  }
  if (local_20[0] != (longlong *)0x0) {
    (**(code **)(*local_20[0] + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577aebc FUN_14577aebc body=369 status=ok
// SIG undefined FUN_14577aebc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_14577aebc(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_50 [2];
  longlong local_40 [2];
  undefined2 *local_30;
  undefined8 uStack_28;
  LPVOID local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8c3088) && (FUN_144b3d300(&DAT_14c8c3088), DAT_14c8c3088 == -1)) {
    DAT_14c8c3078 = (undefined2 *)0x0;
    _DAT_14c8c3080 = 0;
    atexit((_func_5014 *)&LAB_14279b9a5);
    _Init_thread_footer(&DAT_14c8c3088);
  }
  puVar2 = DAT_14c8c3078;
  if (DAT_14c8c3080 < 2) {
    iVar1 = SHGetKnownFolderPath(&DAT_1499d7650,0,0,&local_20);
    if (-1 < iVar1) {
      FUN_140056680(local_50,local_20);
      local_58 = 1;
      FUN_1414bc8e4(local_50,local_40,&DAT_149e01f64,&DAT_149e065c6);
      FUN_144a882a8(&local_30,local_40,L"/Epic/");
      if (DAT_14c8c3078 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      DAT_14c8c3078 = local_30;
      _DAT_14c8c3080 = uStack_28;
      local_30 = (undefined2 *)0x0;
      uStack_28 = 0;
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      CoTaskMemFree(local_20);
    }
    puVar2 = DAT_14c8c3078;
    if (DAT_14c8c3080 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 14577b02e FUN_14577b02e body=595 status=ok
// SIG undefined FUN_14577b02e(void)

undefined8
FUN_14577b02e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_5 + 1) == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  else {
    puVar10 = (undefined2 *)*param_5;
  }
  FUN_14052bdc2(&DAT_14c872ff0,puVar10);
  plVar4 = (longlong *)FUN_14052bcbc(param_1,param_5);
  if (plVar4 != (longlong *)0x0) {
    FUN_140056680(&local_50,param_2);
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    puVar10 = local_50;
    if (local_48 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    uVar11 = 0;
    uVar7 = (ulonglong)(local_48 - 1);
    if (local_48 == 0) {
      uVar7 = uVar11;
    }
    uVar2 = FUN_144a49b4a(uVar7,puVar10);
    iVar3 = FUN_14052bbf0(plVar4,uVar2,&local_50);
    if (iVar3 != -1) {
      uVar11 = (longlong)iVar3 * 0xc0 + *plVar4;
    }
    plVar4 = (longlong *)(uVar11 + 0x10);
    if (uVar11 == 0) {
      plVar4 = (longlong *)0x0;
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((plVar4 != (longlong *)0x0) &&
       (FUN_1446f470e(&local_58,param_3,1), (int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34))) {
      uVar1 = (uint)((ulonglong)local_58 >> 0x10);
      uVar9 = (uint)local_58 & 0xffff;
      plVar8 = plVar4 + 7;
      if ((longlong *)plVar4[8] != (longlong *)0x0) {
        plVar8 = (longlong *)plVar4[8];
      }
      iVar3 = *(int *)((longlong)plVar8 +
                      (ulonglong)
                      ((int)plVar4[9] - 1U &
                      (int)((ulonglong)local_58 >> 0x20) + ((uint)local_58 << 0x10 | uVar9) +
                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar3 != -1) {
        do {
          lVar5 = *plVar4 + (longlong)iVar3 * 0x40;
          if (*(longlong *)(*plVar4 + (longlong)iVar3 * 0x40) == local_58) {
            uVar6 = 0;
            if ((lVar5 != 0) && (lVar5 + 8 != 0)) {
              uVar7 = (ulonglong)(*(int *)(lVar5 + 0x28) - 2U < 0x7fffffff) * 0x10;
              if (*(int *)(lVar5 + 0x18 + uVar7) == 0) {
                puVar10 = &DAT_149dfb77a;
              }
              else {
                puVar10 = *(undefined2 **)(lVar5 + 8 + (uVar7 | 8));
              }
              local_68 = 0;
              uVar6 = 0;
              lVar5 = FUN_140c97480(puVar10,param_4,param_2,0);
              if (lVar5 != 0) {
                uVar6 = FUN_14052bffc();
                if (*(int *)(param_5 + 1) == 0) {
                  puVar10 = &DAT_149dfb77a;
                }
                else {
                  puVar10 = (undefined2 *)*param_5;
                }
                FUN_14052c092(uVar6,puVar10,param_2,param_3);
                uVar6 = 1;
              }
            }
            break;
          }
          iVar3 = *(int *)(lVar5 + 0x38);
          uVar6 = 0;
        } while (iVar3 != -1);
        goto LAB_14577b126;
      }
    }
  }
  uVar6 = 0;
LAB_14577b126:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14577b282 FUN_14577b282 body=298 status=ok
// SIG undefined FUN_14577b282(void)

void FUN_14577b282(void)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c83f1e0 != 0) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_1446f8c06(&local_28,0x8001);
    FUN_1400020e8(&local_28,L"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n",0x28);
    FUN_1407c8b48(&local_28,L"<%s>\r\n",L"FGenericCrashContext");
    FUN_1467b40ba(&local_28);
    FUN_1467b4c2e(&local_28);
    FUN_1407c8b48(&local_28,L"</%s>\r\n",L"FGenericCrashContext");
    FUN_1467b3fec(&local_38,DAT_14c83bd08);
    uVar1 = FUN_14054d1d4();
    puVar2 = local_38;
    if (local_30 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    local_48 = local_28;
    local_40 = (int)uStack_20 + -1;
    if ((int)uStack_20 == 0) {
      local_40 = 0;
    }
    local_58 = 0;
    FUN_1415d54ec(&local_48,puVar2,0,uVar1);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14577b3ae FUN_14577b3ae body=314 status=ok
// SIG undefined FUN_14577b3ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14577b3ae(void)

{
  size_t sVar1;
  longlong *plVar2;
  wchar_t *pwVar3;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  int local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  undefined *local_38;
  undefined4 local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  sVar1 = wcslen((wchar_t *)&DAT_14c83dab8);
  if ((int)sVar1 == 0) {
    local_48 = (wchar_t *)FUN_14577bc94();
    if (local_48 == (wchar_t *)0x0) {
      local_40 = 0;
    }
    else {
      sVar1 = wcslen(local_48);
      local_40 = (int)sVar1;
    }
    local_38 = &DAT_14c83ccb8;
    sVar1 = wcslen((wchar_t *)&DAT_14c83ccb8);
    local_28 = L"CrashReportClient.ini";
    local_20 = 0x15;
    local_30 = (int)sVar1;
    FUN_140bee87a(&local_58,&local_48,3);
    plVar2 = (longlong *)FUN_14054d1d4();
    pwVar3 = local_58;
    if (local_50 == 0) {
      pwVar3 = L"";
    }
    (**(code **)(*plVar2 + 0xf8))(plVar2,&local_48,pwVar3);
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_58 = local_48;
    local_50 = local_40;
    local_4c = local_3c;
    pwVar3 = L"";
    if (local_40 != 0) {
      pwVar3 = local_48;
    }
    wcsncpy((wchar_t *)&DAT_14c83dab8,pwVar3,0xff);
    _DAT_14c83dcb6 = 0;
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14577b4ea FUN_14577b4ea body=330 status=ok
// SIG undefined FUN_14577b4ea(void)

undefined4 FUN_14577b4ea(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong local_b8 [5];
  longlong *local_90;
  longlong local_88;
  undefined1 local_7c [4];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  if (1 < *(int *)(param_4 + 8)) {
    local_90 = local_b8;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_88 = param_4;
    FUN_1413216f2(&local_78,local_7c,&local_90,0);
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
  }
  local_c8 = local_b8 + 2;
  uVar1 = FUN_14577b636(param_1,param_2,param_3,&local_78);
  FUN_1447a1747(local_b8[2],local_b8[3] & 0xffffffff);
  if (local_b8[2] != 0) {
    FUN_1400020a8();
  }
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(&local_78);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577b636 FUN_14577b636 body=363 status=ok
// SIG undefined FUN_14577b636(void)

ulonglong FUN_14577b636(longlong param_1,undefined8 *param_2,char param_3,ulonglong param_4,
                       undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  longlong local_58 [2];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_44 = 0x7fffffff;
  uVar2 = FUN_140b7d170(param_1,param_2,&local_44);
  local_58[0] = 0;
  local_58[1] = 0;
  local_70 = param_5;
  local_78 = param_4;
  FUN_140b7d4dc(param_1,local_58,uVar2,local_44);
  if ((char)uVar2 == '\0') {
    FUN_140b7cf16(local_58,&local_68);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    uVar2 = local_60;
    if (local_60 < 2) {
      plVar3 = (longlong *)FUN_14054d1d4();
      if (*(int *)(param_2 + 1) == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      local_78 = local_78 & 0xffffffffffffff00;
      (**(code **)(*plVar3 + 0x30))(plVar3,puVar4,0,0);
      uVar5 = CONCAT71((uint7)(uint3)(local_60 >> 8),1);
      goto LAB_14577b73a;
    }
  }
  uVar5 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
  if (((*(byte *)(param_1 + 0x50) & 2) == 0) && ((*(byte *)(param_1 + 0x50) & 1) != 0)) {
    cVar1 = FUN_140b7cf70();
    if (cVar1 != '\0') {
      if (param_3 != '\0') {
        if (*(int *)(param_2 + 1) == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        else {
          puVar4 = (undefined2 *)*param_2;
        }
        FUN_14577b7a2(&DAT_14c872ff0,puVar4,local_58);
      }
      if (*(int *)(param_2 + 1) == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)*param_2;
      }
      uVar2 = FUN_140b7d02a(puVar4,local_58);
      uVar5 = (ulonglong)uVar2;
      *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfe | (byte)uVar2 ^ 1;
    }
  }
LAB_14577b73a:
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577b7a2 FUN_14577b7a2 body=203 status=ok
// SIG undefined FUN_14577b7a2(void)

ulonglong FUN_14577b7a2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_1449da4c4();
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (lVar2 != 0) {
    FUN_146819d9e(&local_50,param_2);
    QueryPerformanceCounter(&local_40);
    *(double *)(lVar2 + 0x20) = (double)local_40.QuadPart * DAT_14c83f420 + 16777216.0;
    puVar3 = local_50;
    if (local_48 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    uVar1 = FUN_1427872fe(param_2,puVar3,lVar2,param_3);
    uVar4 = (ulonglong)uVar1;
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14577b86e FUN_14577b86e body=364 status=ok
// SIG undefined FUN_14577b86e(void)

undefined4 * FUN_14577b86e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140d69788(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  uVar2 = param_3[1];
  *local_40 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  FUN_140b7c8de(local_40 + 2,uVar2);
  *(undefined4 *)(local_40 + 0x17) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*local_40;
    iVar8 = *(int *)(local_40 + 1) + -1;
  }
  uVar4 = FUN_144a49b4a(iVar8,puVar7);
  local_58 = 0;
  cVar3 = FUN_140d69354(param_1,uVar4,local_40,&local_4c);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0xbc) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x17) =
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
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_140d69a94(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14577b9dc FUN_14577b9dc body=694 status=ok
// SIG undefined FUN_14577b9dc(void)

void FUN_14577b9dc(void)

{
  longlong lVar1;
  longlong *plVar2;
  size_t sVar3;
  int iVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  longlong local_a8;
  longlong local_a0;
  wchar_t *local_98;
  int local_90;
  longlong local_88;
  ulonglong uStack_80;
  int local_6c;
  wchar_t *local_68;
  int local_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_6c = 2;
  local_b8 = &DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"CrashReportClient",L"CrashConfigPurgeDays",&local_6c);
  iVar4 = local_6c;
  if (0 < local_6c) {
    plVar2 = (longlong *)FUN_14054d1d4();
    local_88 = 0;
    uStack_80 = 0;
    local_68 = (wchar_t *)FUN_14577bc94();
    if (local_68 == (wchar_t *)0x0) {
      local_60 = 0;
    }
    else {
      sVar3 = wcslen(local_68);
      local_60 = (int)sVar3;
    }
    local_58 = L"UECC-";
    local_50 = 5;
    FUN_140bee87a(&local_98,&local_68,2);
    FUN_144a882a8(&local_68,&local_98,&DAT_149e060b2);
    pwVar9 = local_68;
    if (local_60 == 0) {
      pwVar9 = L"";
    }
    local_b8 = (undefined8 *)CONCAT71(local_b8._1_7_,1);
    (**(code **)(*plVar2 + 0x78))(plVar2,&local_88,pwVar9,0);
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_98 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    lVar1 = local_88;
    lVar8 = (longlong)(int)uStack_80;
    if (lVar8 == 0) {
      uVar6 = 0;
    }
    else {
      auVar11._0_8_ = (double)iVar4 * 864000000000.0 + 0.5;
      auVar11._8_8_ = 0;
      pwVar9 = L"";
      auVar11 = roundpd(auVar11,auVar11,1);
      local_a8 = (longlong)auVar11._0_8_;
      lVar7 = 0;
      do {
        pwVar5 = pwVar9;
        if (*(int *)(lVar1 + 8 + lVar7) != 0) {
          pwVar5 = *(wchar_t **)(lVar1 + lVar7);
        }
        local_68 = (wchar_t *)FUN_14577bc94();
        uVar10 = 0;
        iVar4 = 0;
        if (local_68 != (wchar_t *)0x0) {
          sVar3 = wcslen(local_68);
          iVar4 = (int)sVar3;
        }
        local_60 = iVar4;
        local_58 = pwVar5;
        if (pwVar5 != (wchar_t *)0x0) {
          sVar3 = wcslen(pwVar5);
          uVar10 = (int)sVar3;
        }
        local_50 = uVar10;
        FUN_140bee87a(&local_98,&local_68,2);
        pwVar5 = pwVar9;
        if (local_90 != 0) {
          pwVar5 = local_98;
        }
        (**(code **)(*plVar2 + 0xd0))(plVar2,&local_68,pwVar5);
        FUN_1402160b8(&local_a0);
        if (local_a8 < local_a0 - (longlong)local_68) {
          pwVar5 = pwVar9;
          if (local_90 != 0) {
            pwVar5 = local_98;
          }
          (**(code **)(*plVar2 + 0x60))(plVar2,pwVar5,0,1);
        }
        if (local_98 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        lVar7 = lVar7 + 0x10;
      } while (lVar8 * 0x10 != lVar7);
      uVar6 = uStack_80 & 0xffffffff;
    }
    FUN_1447a1747(local_88,uVar6);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14577bc94 FUN_14577bc94 body=367 status=ok
// SIG undefined FUN_14577bc94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_14577bc94(void)

{
  int iVar1;
  undefined2 *puVar2;
  size_t sVar3;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  int local_50;
  undefined2 *local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c83e2a0) && (FUN_144b3d300(&DAT_14c83e2a0), DAT_14c83e2a0 == -1)) {
    DAT_14c83e290 = (undefined2 *)0x0;
    _DAT_14c83e298 = 0;
    atexit((_func_5014 *)&LAB_14274caa6);
    _Init_thread_footer(&DAT_14c83e2a0);
  }
  puVar2 = DAT_14c83e290;
  if (DAT_14c83e298 < 2) {
    FUN_140b7d3f8(&local_58);
    local_38 = local_58;
    if (local_50 == 0) {
      local_38 = L"";
    }
    if (local_38 == (wchar_t *)0x0) {
      local_30 = 0;
    }
    else {
      sVar3 = wcslen(local_38);
      local_30 = (int)sVar3;
    }
    local_28 = L"CrashReportClient";
    local_20 = 0x11;
    FUN_140bee87a(&local_48,&local_38,2);
    if (DAT_14c83e290 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    DAT_14c83e290 = local_48;
    local_48 = (undefined2 *)0x0;
    iVar1 = (int)local_40;
    _DAT_14c83e298 = local_40;
    local_40 = 0;
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
      iVar1 = DAT_14c83e298;
    }
    puVar2 = &DAT_149dfb77a;
    if (iVar1 != 0) {
      puVar2 = DAT_14c83e290;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 14577be04 FUN_14577be04 body=91 status=ok
// SIG undefined FUN_14577be04(void)

void FUN_14577be04(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x28;
  lVar5 = (longlong)*(int *)(lVar1 + 0x24);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x28 + 0x20);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x20);
  FUN_14577be60(param_1,param_2,1);
  return;
}



// FUNCTION 14577be60 FUN_14577be60 body=101 status=ok
// SIG undefined FUN_14577be60(void)

void FUN_14577be60(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + (longlong)param_2 * 0x28 + 0x10);
    iVar1 = param_3;
    do {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      if (plVar2[-2] != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 5;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_140ac60ec(param_1,param_2,param_3);
  return;
}



// FUNCTION 14577bec6 FUN_14577bec6 body=187 status=ok
// SIG undefined FUN_14577bec6(void)

void FUN_14577bec6(longlong param_1,byte param_2,longlong *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if ((int)(uint)param_2 < *(int *)(param_1 + 0xbf0)) {
    lVar3 = *(longlong *)(param_1 + 0xbe8);
    lVar1 = (ulonglong)param_2 * 0x80 + (ulonglong)param_2 * 8;
    plVar4 = *(longlong **)(lVar3 + 0x78 + lVar1);
    iVar2 = *(int *)(lVar3 + 0x80 + lVar1);
    lVar5 = (longlong)iVar2;
    if (lVar5 != 0) {
      lVar6 = lVar5 << 4;
      plVar7 = plVar4;
      do {
        if (*plVar7 == *param_3) {
          if (plVar7 != (longlong *)0x0) {
            return;
          }
          break;
        }
        plVar7 = plVar7 + 2;
        lVar6 = lVar6 + -0x10;
      } while (lVar6 != 0);
    }
    lVar3 = lVar3 + lVar1;
    *(uint *)(lVar3 + 0x80) = iVar2 + 1U;
    if (*(uint *)(lVar3 + 0x84) < iVar2 + 1U) {
      FUN_148a275b6((undefined8 *)(lVar3 + 0x78),iVar2);
      plVar4 = *(longlong **)(lVar3 + 0x78);
    }
    plVar4[lVar5 * 2] = *param_3;
    *(undefined4 *)(plVar4 + lVar5 * 2 + 1) = param_4;
    *(undefined4 *)((longlong)plVar4 + lVar5 * 0x10 + 0xc) = param_5;
  }
  return;
}



// FUNCTION 14577bf82 FUN_14577bf82 body=51 status=ok
// SIG undefined FUN_14577bf82(void)

void FUN_14577bf82(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x900);
  if (lVar1 == 0) {
    return;
  }
  if ((*(char *)(lVar1 + 0x489) == '\0') && (*(char *)(lVar1 + 0x3c) == '\x01')) {
    FUN_140a9d838(lVar1,lVar1 + 0x420,param_2,0);
    return;
  }
  return;
}



// FUNCTION 14577bfb6 FUN_14577bfb6 body=52 status=ok
// SIG undefined FUN_14577bfb6(void)

void FUN_14577bfb6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14577bfea();
  FUN_14577bff6(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14577bfea FUN_14577bfea body=12 status=ok
// SIG undefined FUN_14577bfea(void)

void FUN_14577bfea(longlong param_1)

{
  *(undefined1 *)(*(longlong *)(param_1 + 0x1e70) + 0x4c) = 1;
  return;
}



// FUNCTION 14577bff6 FUN_14577bff6 body=342 status=ok
// SIG undefined FUN_14577bff6(void)

void FUN_14577bff6(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,int param_6,int param_7)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0x1c;
  if (param_7 != 0) {
    iVar7 = param_7;
  }
  iVar8 = 0x400;
  if (param_6 < 0x400) {
    iVar8 = param_6;
  }
  if (param_6 == 0) {
    iVar8 = 0x400;
  }
  (**(code **)(*param_1 + 0x338))(param_1,param_2,param_3,param_4,param_5,iVar8,iVar7);
  lVar2 = param_1[0x3ce];
  uVar5 = (**(code **)(*param_2 + 0x3d0))(param_2);
  cVar4 = FUN_140b82b4a(lVar2,uVar5,param_3,param_4);
  if (cVar4 == '\0') {
    FUN_147a491c6(param_1);
    return;
  }
  lVar2 = *(longlong *)(param_1[0x3ce] + 0x28);
  plVar3 = *(longlong **)(param_1[0x3ce] + 0x30);
  if (plVar3 == (longlong *)0x0) {
    param_1[0x22] = lVar2;
    plVar6 = (longlong *)param_1[0x23];
    if (plVar6 == (longlong *)0x0) goto LAB_14577c0c8;
    param_1[0x23] = 0;
LAB_14577c111:
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14577c0c8;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar7 = *piVar1;
    UNLOCK();
    plVar3 = plVar6;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    param_1[0x22] = lVar2;
    plVar6 = (longlong *)param_1[0x23];
    if (plVar3 != plVar6) {
      param_1[0x23] = (longlong)plVar3;
      if (plVar6 == (longlong *)0x0) goto LAB_14577c0c8;
      goto LAB_14577c111;
    }
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_14577c0c8;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar7 = *piVar1;
    UNLOCK();
  }
  if (iVar7 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_14577c0c8:
                    /* WARNING: Could not recover jumptable at 0x00014577c0d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2e8))(param_1);
  return;
}



// FUNCTION 14577c14c FUN_14577c14c body=250 status=ok
// SIG undefined FUN_14577c14c(void)

void FUN_14577c14c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,int param_6,int param_7)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  int local_30;
  int local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0x1c;
  if (param_7 != 0) {
    local_28 = param_7;
  }
  local_30 = 0x400;
  if (param_6 < 0x400) {
    local_30 = param_6;
  }
  if (param_6 == 0) {
    local_30 = 0x400;
  }
  local_38 = param_5;
  FUN_14577c248(param_1,param_2,param_3);
  if (*(char *)(*(longlong *)(param_1 + 0x1e70) + 0x4c) == '\x01') {
    *(undefined8 *)(param_1 + 0x1de8) = param_3;
  }
  lVar1 = DAT_14caf1d00;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  if (0 < *(int *)(lVar1 + uVar3 * 4)) {
    local_1c = 0x100;
    FUN_148a365c0(param_1 + 0x1d78,param_1 + 0x38);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577c248 FUN_14577c248 body=2366 status=ok
// SIG undefined FUN_14577c248(void)

void FUN_14577c248(longlong *param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code **ppcVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  void *pvVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int iVar17;
  undefined ***pppuVar18;
  longlong *plVar19;
  char cVar20;
  wchar_t *pwVar21;
  undefined1 auStack_218 [32];
  code **local_1f8;
  code **local_1f0;
  code **local_1e8;
  longlong *local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined1 local_1b8 [16];
  undefined8 *local_1a8;
  longlong *local_1a0;
  code *local_198 [2];
  undefined1 *local_188 [2];
  undefined ***local_178;
  undefined **local_168;
  undefined8 local_160;
  code *local_148 [2];
  undefined ***local_138;
  undefined **local_128;
  longlong *local_120;
  code *local_108 [2];
  undefined ***local_f8;
  undefined **local_e8;
  longlong *local_e0;
  code *local_c8;
  longlong *local_c0;
  undefined ***local_b8;
  undefined **local_a8;
  longlong *local_a0;
  undefined1 *local_88;
  undefined8 local_78;
  undefined **local_68;
  code *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1e0 = param_4;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[0xb] = param_2;
  FUN_140b82e66(param_1);
  local_1d8 = param_2;
  uVar7 = FUN_14577cbc2(param_2 + 0x880);
  *(ulonglong *)((longlong)param_1 + 0x1d2c) = (ulonglong)uVar7;
  plVar3 = (longlong *)param_1[0xb];
  lVar14 = plVar3[0x60];
  param_1[0x8e] = lVar14;
  param_1[0x3b] = lVar14;
  param_1[0x92] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = lVar14;
  param_1[0x3f] = lVar14;
  param_1[0x42] = lVar14;
  param_1[0x43] = lVar14;
  uVar7 = *(uint *)((longlong)param_1 + 0xa4);
  cVar5 = (**(code **)(*plVar3 + 0x3c0))(plVar3);
  lVar14 = plVar3[0x33];
  cVar20 = (char)((uVar7 & 4) >> 2);
  if (lVar14 != 0 && cVar20 == '\0') {
    pwVar21 = L"Core.ClientNetConn";
    if (cVar5 != '\0') {
      pwVar21 = L"Core.ServerNetConn";
    }
    FUN_140056680(local_198,L"FNetConnAnalyticsData");
    FUN_1446f470e(local_108,pwVar21,1);
    puVar15 = (undefined8 *)FUN_14001cc68(0xe0);
    memset(puVar15,0,0xe0);
    FUN_146efa5c6(puVar15);
    FUN_145946dfc(puVar15 + 4);
    *puVar15 = &PTR_FUN_14a9e46a0;
    local_1a8 = puVar15;
    plVar16 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar16[1] = (longlong)&DAT_100000001;
    *plVar16 = (longlong)&PTR_FUN_14a9e4b70;
    plVar16[2] = (longlong)puVar15;
    local_1a0 = plVar16;
    if ((puVar15 != (undefined8 *)0x0) &&
       (((puVar15[1] == 0 || (puVar15[2] == 0)) || (*(int *)(puVar15[2] + 8) < 1)))) {
      if (plVar16 == (longlong *)0x0) {
        puVar15[1] = puVar15;
        plVar19 = (longlong *)puVar15[2];
        if (plVar19 != (longlong *)0x0) {
LAB_14577ca8d:
          LOCK();
          piVar13 = (int *)((longlong)plVar19 + 0xc);
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (*piVar13 == 0) {
            (**(code **)(*plVar19 + 0x10))();
          }
          puVar15[2] = plVar16;
          if (plVar16 != (longlong *)0x0) goto LAB_14577cb3c;
        }
      }
      else {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        puVar15[1] = puVar15;
        if ((longlong *)puVar15[2] != plVar16) {
          LOCK();
          *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
          UNLOCK();
          plVar19 = (longlong *)puVar15[2];
          if (plVar19 != (longlong *)0x0) goto LAB_14577ca8d;
          puVar15[2] = plVar16;
        }
LAB_14577cb3c:
        LOCK();
        plVar19 = plVar16 + 1;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)*plVar19 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar13 = (int *)((longlong)plVar16 + 0xc);
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (*piVar13 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
    }
    local_1f8 = local_198;
    FUN_142a62264(lVar14,&local_c8,&local_1a8,local_108);
    plVar16 = local_c0;
    if (local_c0 == (longlong *)0x0) {
      param_1[0xc2] = (longlong)local_c8;
      plVar19 = (longlong *)param_1[0xc3];
      if (plVar19 != (longlong *)0x0) {
        param_1[0xc3] = 0;
LAB_14577caf0:
        LOCK();
        plVar16 = plVar19 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar19)(plVar19);
          LOCK();
          piVar13 = (int *)((longlong)plVar19 + 0xc);
          *piVar13 = *piVar13 + -1;
          iVar2 = *piVar13;
          UNLOCK();
joined_r0x00014577cadd:
          if (iVar2 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
      param_1[0xc2] = (longlong)local_c8;
      plVar19 = (longlong *)param_1[0xc3];
      if (local_c0 == plVar19) {
        LOCK();
        plVar19 = local_c0 + 1;
        *(int *)plVar19 = (int)*plVar19 + -1;
        UNLOCK();
        if ((int)*plVar19 == 0) {
          (**(code **)*local_c0)(local_c0);
          LOCK();
          piVar13 = (int *)((longlong)plVar16 + 0xc);
          *piVar13 = *piVar13 + -1;
          iVar2 = *piVar13;
          UNLOCK();
          plVar19 = plVar16;
          goto joined_r0x00014577cadd;
        }
      }
      else {
        param_1[0xc3] = (longlong)local_c0;
        if (plVar19 != (longlong *)0x0) goto LAB_14577caf0;
      }
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar16 = local_c0 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar13 = (int *)((longlong)local_c0 + 0xc);
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (*piVar13 == 0) {
          (**(code **)(*local_c0 + 0x10))(local_c0);
        }
      }
    }
  }
  FUN_14577d766(param_1 + 0x2db);
  *(undefined4 *)((longlong)param_1 + 0x134) = param_5;
  FUN_1405f35b2(param_1 + 0x15,local_1e0);
  *(undefined4 *)(param_1 + 0x14) = param_6;
  *(undefined4 *)(param_1 + 0x32) = param_7;
  *(undefined1 *)((longlong)param_1 + 0x1d49) = 0;
  lVar14 = param_1[0x28];
  if (lVar14 != 0) {
    param_1[0x28] = 0;
    FUN_145c6ba12(lVar14);
    FUN_1400020a8(lVar14);
  }
  (**(code **)(*param_1 + 0x358))(param_1);
  pvVar9 = (void *)FUN_14001cc68(0x150);
  memset(pvVar9,0,0x150);
  FUN_14577ce1c(pvVar9);
  lVar14 = param_1[0x3ab];
  param_1[0x3ab] = (longlong)pvVar9;
  FUN_14577cb88(lVar14);
  FUN_14577cb88(0);
  lVar14 = param_1[0x3ab];
  if (param_1[0xb] == 0) {
    FUN_140056680(local_1b8,&DAT_149dfb77a);
  }
  else {
    local_c8 = *(code **)(param_1[0xb] + 0x278);
    FUN_1400021e4(&local_c8,local_1b8);
  }
  FUN_14577cc86(lVar14,local_1b8,param_1);
  lVar14 = DAT_14caf1d18;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar10 = 0;
  }
  else {
    bVar6 = FUN_144a61b4f();
    uVar10 = (ulonglong)(bVar6 ^ 1);
  }
  if (*(int *)(lVar14 + uVar10 * 4) != 0) {
    local_78 = 0;
    local_68 = &PTR_LAB_14a9e4bc0;
    local_60 = FUN_14359209a;
    local_88 = &LAB_147bd2cc8;
    FUN_14577d108(param_1[0x3ab] + 0x60);
  }
  lVar11 = FUN_14045d4ce(param_1 + 0x15,&DAT_14a9e5386,0);
  lVar12 = FUN_1458cbbd8();
  lVar14 = *(longlong *)(lVar12 + 0x110);
  if (lVar11 == 0) {
    if (lVar14 == 0) {
      FUN_140aa6c08(lVar12);
      lVar14 = *(longlong *)(lVar12 + 0x110);
    }
    piVar13 = (int *)(lVar14 + 0x3c);
  }
  else {
    if (lVar14 == 0) {
      FUN_140aa6c08(lVar12);
      lVar14 = *(longlong *)(lVar12 + 0x110);
    }
    piVar13 = (int *)(lVar14 + 0x40);
  }
  iVar2 = *piVar13;
  iVar17 = 0x708;
  if (0x708 < iVar2) {
    iVar17 = iVar2;
  }
  iVar8 = 0xa28;
  if (iVar2 != 0) {
    iVar8 = iVar17;
  }
  *(int *)(param_1 + 7) = iVar8;
  if (*(longlong *)(param_1[0xb] + 0x838) != 0) {
    FUN_14577d1e6(*(longlong *)(param_1[0xb] + 0x838),*(undefined4 *)((longlong)param_1 + 0x1d2c));
  }
  lVar14 = param_1[0xc];
  if (((lVar14 == 0) || (lVar11 = FUN_14598598a(), lVar11 == 0)) ||
     ((*(int *)(lVar14 + 0x38) < *(int *)(lVar11 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
       lVar11 + 0x30)))) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1[0xc];
  }
  lVar14 = FUN_14577d04c(param_1,lVar14);
  if (lVar14 != 0) {
    local_1c8 = *(undefined8 *)(param_1[0xb] + 0x1b8);
    local_1c0 = *(longlong *)(param_1[0xb] + 0x1c0);
    if (local_1c0 != 0) {
      LOCK();
      *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
      UNLOCK();
    }
    FUN_14577d2c8(lVar14,param_1,&local_1c8);
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar14);
    }
    param_1[0xd] = lVar14;
  }
  if (cVar5 == '\x01' && cVar20 == '\0') {
    local_1e0 = plVar3 + 0x33;
    pvVar9 = (void *)FUN_14001cc68(0x1460);
    memset(pvVar9,0,0x1460);
    FUN_14577d50c(pvVar9);
    puVar15 = (undefined8 *)param_1[0x3aa];
    param_1[0x3aa] = (longlong)pvVar9;
    if (puVar15 != (undefined8 *)0x0) {
      (**(code **)*puVar15)(puVar15,1);
      pvVar9 = (void *)param_1[0x3aa];
    }
    local_b8 = (undefined ***)0x0;
    local_a8 = &PTR_LAB_14a9e4c50;
    local_c8 = FUN_143592434;
    local_f8 = (undefined ***)0x0;
    local_e8 = &PTR_LAB_14a9e4c30;
    local_108[0] = FUN_14359239a;
    local_138 = (undefined ***)0x0;
    local_128 = &PTR_LAB_14a9e4c10;
    local_148[0] = FUN_143592342;
    local_1d0 = 0;
    local_120 = param_1;
    local_e0 = param_1;
    local_a0 = param_1;
    FUN_14485c47a(&local_1d0,*(undefined8 *)(local_1d8 + 0x1a8));
    local_178 = (undefined ***)0x0;
    local_168 = &PTR_LAB_14a9e4bf0;
    local_160 = local_1d0;
    local_188[0] = &LAB_1435922ba;
    local_1f8 = local_148;
    local_1f0 = local_108;
    local_1e8 = &local_c8;
    FUN_14577dd08(pvVar9,*(undefined8 *)(param_1[0xb] + 0x278),local_1e0,local_188);
    if (local_188[0] != (undefined1 *)0x0) {
      pppuVar18 = local_178;
      if (local_178 == (undefined ***)0x0) {
        pppuVar18 = &local_168;
      }
      (*(code *)(*pppuVar18)[2])();
    }
    if (local_148[0] != (code *)0x0) {
      pppuVar18 = local_138;
      if (local_138 == (undefined ***)0x0) {
        pppuVar18 = &local_128;
      }
      (*(code *)(*pppuVar18)[2])();
    }
    if (local_108[0] != (code *)0x0) {
      pppuVar18 = local_f8;
      if (local_f8 == (undefined ***)0x0) {
        pppuVar18 = &local_e8;
      }
      (*(code *)(*pppuVar18)[2])();
    }
    if (local_c8 != (code *)0x0) {
      pppuVar18 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar18 = &local_a8;
      }
      (*(code *)(*pppuVar18)[2])();
    }
  }
  FUN_14577d3c2(&local_c8,param_1);
  ppcVar1 = (code **)(param_1 + 0x3ae);
  if (&local_c8 != ppcVar1) {
    pcVar4 = *ppcVar1;
    *ppcVar1 = local_c8;
    local_c8 = (code *)0x0;
    if (pcVar4 == (code *)0x0) goto LAB_14577c774;
    (**(code **)(pcVar4 + -0x10))(pcVar4 + -0x10);
  }
  if (local_c8 != (code *)0x0) {
    (**(code **)(local_c8 + -0x10))(local_c8 + -0x10);
  }
LAB_14577c774:
  lVar14 = *(longlong *)(param_1[0xb] + 0x840);
  if (lVar14 != 0) {
    FUN_142a9d292(*(undefined8 *)(lVar14 + 0x28),*(undefined4 *)((longlong)param_1 + 0x1d2c));
    FUN_146f45974(lVar14,*(undefined4 *)((longlong)param_1 + 0x1d2c),param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577cb88 FUN_14577cb88 body=57 status=ok
// SIG undefined FUN_14577cb88(void)

void FUN_14577cb88(longlong param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_14577cc16(param_1);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14577cbc2 FUN_14577cbc2 body=84 status=ok
// SIG undefined FUN_14577cbc2(void)

int FUN_14577cbc2(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar2 = FUN_144a784a6(param_1,0,*(undefined4 *)(param_1 + 0x20));
  iVar4 = 0;
  if (iVar2 != -1) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar3 = param_1;
    }
    iVar4 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar4 = iVar2;
    }
    puVar1 = (uint *)(lVar3 + (longlong)(iVar4 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar2 & 0x1f);
    iVar4 = iVar2;
  }
  *(int *)(param_1 + 0x20) = iVar2 + 1;
  return iVar4;
}



// FUNCTION 14577cc16 FUN_14577cc16 body=111 status=ok
// SIG undefined FUN_14577cc16(void)

void FUN_14577cc16(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a9e4b58;
  FUN_145ad5a28(param_1 + 0xc);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    return;
  }
  FUN_147bd2b44(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 14577cc86 FUN_14577cc86 body=113 status=ok
// SIG undefined FUN_14577cc86(void)

void FUN_14577cc86(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 0x100,*param_2,iVar1);
  *(longlong *)(param_1 + 0x110) = param_3;
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_3 + 0x508);
    FUN_14577ccf8(param_1 + 0x130,param_1);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14577ccf8 FUN_14577ccf8 body=71 status=ok
// SIG undefined FUN_14577ccf8(void)

void FUN_14577ccf8(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 0x10) == 0) &&
     (*(longlong *)(param_1 + 0x10) = param_2, param_2 != 0)) {
    FUN_14577cd40(param_2 + 0x60,param_1,1);
    FUN_14577ceb2(*(undefined8 *)(param_1 + 0x10),0,1);
    return;
  }
  return;
}



// FUNCTION 14577cd40 FUN_14577cd40 body=101 status=ok
// SIG undefined FUN_14577cd40(void)

void FUN_14577cd40(longlong param_1,longlong *param_2,char param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x48);
  }
  local_20 = param_2;
  FUN_14577cda6(param_1,&local_20,uVar1);
  param_2[1] = param_1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014577cd97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 8))(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577cda6 FUN_14577cda6 body=118 status=ok
// SIG undefined FUN_14577cda6(void)

int FUN_14577cda6(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_146f0025a(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar2 = param_1;
  }
  lVar3 = (longlong)param_3;
  memmove((void *)(lVar2 + lVar3 * 8 + 8),(void *)(lVar2 + lVar3 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar2 = param_1;
  }
  *(undefined8 *)(lVar2 + lVar3 * 8) = *param_2;
  return param_3;
}



// FUNCTION 14577ce1c FUN_14577ce1c body=150 status=ok
// SIG undefined FUN_14577ce1c(void)

void FUN_14577ce1c(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 2;
  param_1[10] = 0;
  param_1[0xb] = 0x800000000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x800000000;
  param_1[0x1a] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_14a9e4b88;
  param_1[0x25] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x27] = 0;
  param_1[0x26] = &PTR_FUN_14a9e4ba0;
  param_1[0x28] = 0;
  return;
}



// FUNCTION 14577ceb2 FUN_14577ceb2 body=155 status=ok
// SIG undefined FUN_14577ceb2(void)

void FUN_14577ceb2(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 == 0) {
    local_28 = param_2 & 0xff;
    local_24 = param_3;
    FUN_14577cf4e(param_1 + 0x18);
  }
  else {
    lVar1 = lVar3 + (ulonglong)(param_2 & 0xff) * 0x28;
    local_28 = param_3;
    FUN_146f0005e(lVar1 + 0x930,&local_28);
    lVar4 = *(longlong *)(lVar1 + 0x948);
    if (*(longlong *)(lVar1 + 0x948) == 0) {
      lVar4 = lVar1 + 0x930;
    }
    uVar2 = *(undefined4 *)(lVar1 + 0x950);
    lVar3 = *(longlong *)(lVar3 + 0x1f0);
    uVar5 = (ulonglong)((param_2 & 0xff) << 4);
    *(longlong *)(lVar3 + uVar5) = lVar4;
    *(undefined4 *)(lVar3 + 8 + uVar5) = uVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577cf4e FUN_14577cf4e body=122 status=ok
// SIG undefined FUN_14577cf4e(void)

void FUN_14577cf4e(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if ((*(int *)(lVar3 + uVar4) == *param_2) && (*(int *)(lVar3 + 4 + uVar4) == param_2[1])) {
        if ((int)(~uVar4 >> 3) != 0) {
          return;
        }
        break;
      }
      lVar1 = lVar3 + uVar4;
      uVar4 = uVar4 + 8;
    } while (lVar1 + 8 != lVar3 + lVar5 * 8);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_14577cfc8(param_1,iVar2);
    lVar3 = *param_1;
  }
  *(undefined8 *)(lVar3 + lVar5 * 8) = *(undefined8 *)param_2;
  return;
}



// FUNCTION 14577cfc8 FUN_14577cfc8 body=132 status=ok
// SIG undefined FUN_14577cfc8(void)

void FUN_14577cfc8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14577d04c FUN_14577d04c body=187 status=ok
// SIG undefined FUN_14577d04c(void)

undefined8 FUN_14577d04c(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577d108 FUN_14577d108 body=204 status=ok
// SIG undefined FUN_14577d108(void)

void FUN_14577d108(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x70);
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  uVar6 = *(undefined8 *)(param_1 + 0x88);
  uVar7 = *(undefined8 *)(param_1 + 0x90);
  uVar8 = *(undefined8 *)(param_1 + 0x98);
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  lVar14 = param_2[5];
  lVar15 = param_2[7];
  *(longlong *)(param_1 + 0x90) = param_2[6];
  *(longlong *)(param_1 + 0x98) = lVar15;
  *(longlong *)(param_1 + 0x80) = lVar13;
  *(longlong *)(param_1 + 0x88) = lVar14;
  *(longlong *)(param_1 + 0x70) = lVar11;
  *(longlong *)(param_1 + 0x78) = lVar12;
  *(longlong *)(param_1 + 0x60) = lVar9;
  *(longlong *)(param_1 + 0x68) = lVar10;
  local_58._0_4_ = (undefined4)uVar1;
  local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar2;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_48._0_4_ = (undefined4)uVar3;
  local_48._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar4;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_38._0_4_ = (undefined4)uVar5;
  local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar6;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_28._0_4_ = (undefined4)uVar7;
  local_28._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar8;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = uVar3;
  uStack_40 = uVar4;
  local_38 = uVar5;
  uStack_30 = uVar6;
  local_28 = uVar7;
  uStack_20 = uVar8;
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14577d1e6 FUN_14577d1e6 body=226 status=ok
// SIG undefined FUN_14577d1e6(void)

void FUN_14577d1e6(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (param_2 < *(uint *)(param_1 + 0x10))) {
    lVar2 = (longlong)(int)param_2;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar2 * 8);
    if (lVar3 == 0) {
      puVar1 = (undefined8 *)FUN_14001cc68(0x80,0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
      lVar3 = 0;
      do {
        FUN_14581e4c0((longlong)puVar1 + lVar3,1,1);
        lVar3 = lVar3 + 0x10;
      } while (lVar3 != 0x80);
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar2 * 8);
      *(undefined8 **)(*(longlong *)(param_1 + 8) + lVar2 * 8) = puVar1;
      if (lVar3 != 0) {
        lVar2 = 0x80;
        do {
          if (*(longlong *)(lVar3 + -0x10 + lVar2) != 0) {
            FUN_1400020a8();
          }
          lVar2 = lVar2 + -0x10;
        } while (lVar2 != 0);
        FUN_1400020a8(lVar3);
        return;
      }
    }
    else {
      lVar2 = 0;
      do {
        FUN_14581e4c0(lVar3 + lVar2,1,1);
        lVar2 = lVar2 + 0x10;
      } while (lVar2 != 0x80);
    }
  }
  return;
}



// FUNCTION 14577d2c8 FUN_14577d2c8 body=250 status=ok
// SIG undefined FUN_14577d2c8(void)

void FUN_14577d2c8(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  
  *(longlong *)(param_1 + 0x130) = param_2;
  uVar5 = *param_3;
  lVar3 = param_3[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x318);
  *(undefined8 *)(param_1 + 0x310) = uVar5;
  *(longlong *)(param_1 + 0x318) = lVar3;
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
  *(undefined4 *)(param_1 + 0x308) = 0;
  *(longlong *)(param_1 + 0x2e8) = param_1 + 0x1f8;
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x838);
  *(longlong *)(param_1 + 0x408) = lVar3;
  if (lVar3 != 0) {
    uVar6 = (uint)*(undefined8 *)(param_2 + 0x1d2c);
    if ((uVar6 == 0) || (*(uint *)(lVar3 + 0x10) <= uVar6)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 8) + (longlong)(int)uVar6 * 8);
    }
    *(undefined8 *)(param_1 + 0x410) = uVar5;
  }
  plVar4 = (longlong *)param_3[1];
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
                    /* WARNING: Could not recover jumptable at 0x00014577d3be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14577d3c2 FUN_14577d3c2 body=329 status=ok
// SIG undefined FUN_14577d3c2(void)

longlong * FUN_14577d3c2(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  if (param_2 != 0) {
    plVar2 = *(longlong **)(param_2 + 0x58);
    if ((plVar2 != (longlong *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(plVar2);
    }
    else if (plVar2 == (longlong *)0x0) goto LAB_14577d4a3;
    lVar3 = DAT_14caf2678;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar4 ^ 1);
    }
    uVar1 = *(uint *)(lVar3 + uVar5 * 4);
    bVar4 = (**(code **)(*plVar2 + 0x3c0))(plVar2);
    uVar5 = plVar2[0x40];
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    if (((uVar5 == DAT_14c892fa8) || (plVar2[0x40] == (ulonglong)DAT_14c892fac)) &&
       (((uVar1 - 3 < 0xfffffffe | bVar4) != 1 || (((uVar1 & 0xfffffffe) == 2 & bVar4) != 0)))) {
      puVar6 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
      *puVar6 = FUN_147be3a2c;
      puVar6[1] = 0;
      puVar6 = puVar6 + 2;
      FUN_147bdc34e(puVar6,param_2);
      *param_1 = (longlong)puVar6;
      FUN_1435a3896(puVar6);
      return param_1;
    }
  }
LAB_14577d4a3:
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14577d50c FUN_14577d50c body=484 status=ok
// SIG undefined FUN_14577d50c(void)

undefined8 * FUN_14577d50c(undefined8 *param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffffffffffff;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0x1ff;
  *(undefined4 *)((longlong)param_1 + 0x1e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x19) = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = &PTR_FUN_14a9e4be0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0x100;
  param_1[0x214] = 0;
  *(undefined2 *)(param_1 + 0x215) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10ac) = 0;
  memset((void *)((longlong)param_1 + 0x74),0,0x1005);
  param_1[0x210] = 0;
  param_1[0x211] = 0;
  *(undefined8 *)((longlong)param_1 + 0x108c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1094) = 0;
  param_1[0x217] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0x3ff0000000000000;
  param_1[0x21e] = 0;
  param_1[0x220] = 0;
  param_1[0x22a] = 0;
  param_1[0x234] = 0;
  param_1[0x23d] = 0;
  *(undefined1 *)(param_1 + 0x23e) = 0;
  param_1[0x23f] = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  param_1[0x21b] = 0;
  param_1[0x21c] = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  param_1[0x228] = 0;
  param_1[0x230] = 0;
  param_1[0x231] = 0;
  param_1[0x232] = 0;
  *(undefined4 *)((longlong)param_1 + 0x11df) = 0;
  param_1[0x23a] = 0;
  param_1[0x23b] = 0;
  *(undefined4 *)(param_1 + 0x245) = 0;
  param_1[0x243] = 0;
  param_1[0x244] = 0;
  param_1[0x241] = 0;
  param_1[0x242] = 0;
  lVar1 = 0x1238;
  do {
    *(undefined4 *)((longlong)param_1 + lVar1 + -8) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1) = 0;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x1338);
  *(undefined1 *)(param_1 + 0x266) = 0;
  param_1[0x26a] = 0;
  *(undefined2 *)(param_1 + 0x26b) = 0;
  param_1[0x270] = 0;
  *(undefined4 *)(param_1 + 0x271) = 0;
  param_1[0x267] = 0;
  param_1[0x268] = 0;
  *(undefined4 *)(param_1 + 0x269) = 0;
  param_1[0x26c] = 0;
  param_1[0x26d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x138c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1394) = 0;
  param_1[0x274] = 0;
  *(undefined4 *)(param_1 + 0x275) = 0;
  param_1[0x276] = 0;
  param_1[0x277] = 0;
  param_1[0x278] = 0;
  FUN_14577d6f0(param_1 + 0x279);
  param_1[0x288] = 0;
  param_1[0x289] = 0;
  param_1[0x28a] = 0;
  param_1[0x28b] = 0;
  return param_1;
}



// FUNCTION 14577d6f0 FUN_14577d6f0 body=117 status=ok
// SIG undefined FUN_14577d6f0(void)

undefined8 * FUN_14577d6f0(undefined8 *param_1)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar1 = DAT_14caca990;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(lVar1 + uVar3 * 4);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 14577d766 FUN_14577d766 body=1308 status=ok
// SIG undefined FUN_14577d766(void)

void FUN_14577d766(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x7fefffffffffffff;
  param_1[5] = -0x10000000000001;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar2 = 0;
  iVar4 = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_146821058(param_1);
    iVar4 = (int)param_1[1];
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
  }
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (uVar2 < iVar4 + 1U) {
    FUN_14577dc82(param_1);
  }
  lVar1 = *param_1;
  lVar3 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(lVar1 + lVar3) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar3) = 0x4022000000000000;
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  *(undefined4 *)(lVar1 + 0x18 + lVar3) = 0;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_14577dc82(param_1,iVar4);
  }
  lVar1 = *param_1;
  lVar3 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(lVar1 + lVar3) = 0x4022000000000000;
  *(undefined8 *)(lVar1 + 8 + lVar3) = 0x4031000000000000;
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  *(undefined4 *)(lVar1 + 0x18 + lVar3) = 0;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_14577dc82(param_1,iVar4);
  }
  lVar1 = *param_1;
  lVar3 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(lVar1 + lVar3) = 0x4031000000000000;
  *(undefined8 *)(lVar1 + 8 + lVar3) = 0x4041000000000000;
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  *(undefined4 *)(lVar1 + 0x18 + lVar3) = 0;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_14577dc82(param_1,iVar4);
  }
  lVar1 = *param_1;
  lVar3 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(lVar1 + lVar3) = 0x4041000000000000;
  *(undefined8 *)(lVar1 + 8 + lVar3) = 0x4049000000000000;
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  *(undefined4 *)(lVar1 + 0x18 + lVar3) = 0;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_14577dc82(param_1,iVar4);
  }
  lVar1 = *param_1;
  lVar3 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(lVar1 + lVar3) = 0x4049000000000000;
  *(undefined8 *)(lVar1 + 8 + lVar3) = 0x4050c00000000000;
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  *(undefined4 *)(lVar1 + 0x18 + lVar3) = 0;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_14577dc82(param_1,iVar4);
  }
  lVar1 = *param_1;
  lVar3 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(lVar1 + lVar3) = 0x4050c00000000000;
  *(undefined8 *)(lVar1 + 8 + lVar3) = 0x4059000000000000;
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  *(undefined4 *)(lVar1 + 0x18 + lVar3) = 0;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_14577dc82(param_1,iVar4);
  }
  lVar1 = *param_1;
  lVar3 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(lVar1 + lVar3) = 0x4059000000000000;
  *(undefined8 *)(lVar1 + 8 + lVar3) = 0x4069000000000000;
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  *(undefined4 *)(lVar1 + 0x18 + lVar3) = 0;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_14577dc82(param_1,iVar4);
  }
  lVar1 = *param_1;
  lVar3 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(lVar1 + lVar3) = 0x4069000000000000;
  *(undefined8 *)(lVar1 + 8 + lVar3) = 0x4072c00000000000;
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  *(undefined4 *)(lVar1 + 0x18 + lVar3) = 0;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_14577dc82(param_1,iVar4);
  }
  lVar1 = *param_1;
  lVar3 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(lVar1 + lVar3) = 0x4072c00000000000;
  *(undefined8 *)(lVar1 + 8 + lVar3) = 0x407f400000000000;
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  *(undefined4 *)(lVar1 + 0x18 + lVar3) = 0;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_14577dc82(param_1,iVar4);
  }
  lVar1 = *param_1;
  lVar3 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(lVar1 + lVar3) = 0x407f400000000000;
  *(undefined8 *)(lVar1 + 8 + lVar3) = 0x4087700000000000;
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  *(undefined4 *)(lVar1 + 0x18 + lVar3) = 0;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_14577dc82(param_1,iVar4);
  }
  lVar1 = *param_1;
  lVar3 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(lVar1 + lVar3) = 0x4087700000000000;
  *(undefined8 *)(lVar1 + 8 + lVar3) = 0x408f400000000000;
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  *(undefined4 *)(lVar1 + 0x18 + lVar3) = 0;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_14577dc82(param_1,iVar4);
  }
  lVar1 = *param_1;
  lVar3 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(lVar1 + lVar3) = 0x408f400000000000;
  *(undefined8 *)(lVar1 + 8 + lVar3) = 0x4097700000000000;
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  *(undefined4 *)(lVar1 + 0x18 + lVar3) = 0;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_14577dc82(param_1,iVar4);
  }
  lVar1 = *param_1;
  lVar3 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(lVar1 + lVar3) = 0x4097700000000000;
  *(undefined8 *)(lVar1 + 8 + lVar3) = 0x409f400000000000;
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  *(undefined4 *)(lVar1 + 0x18 + lVar3) = 0;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_14577dc82(param_1,iVar4);
  }
  lVar1 = *param_1;
  lVar3 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(lVar1 + lVar3) = 0x409f400000000000;
  *(undefined8 *)(lVar1 + 8 + lVar3) = 0x40a3880000000000;
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  *(undefined4 *)(lVar1 + 0x18 + lVar3) = 0;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_14577dc82(param_1,iVar4);
  }
  lVar1 = *param_1;
  lVar3 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(lVar1 + lVar3) = 0x40a3880000000000;
  *(undefined8 *)(lVar1 + 8 + lVar3) = 0x40b3880000000000;
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  *(undefined4 *)(lVar1 + 0x18 + lVar3) = 0;
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_14577dc82(param_1,iVar4);
  }
  lVar1 = *param_1;
  lVar3 = (longlong)iVar4 * 0x20;
  *(undefined8 *)(lVar1 + lVar3) = 0x40b3880000000000;
  *(undefined8 *)(lVar1 + 8 + lVar3) = 0x47efffffe0000000;
  *(undefined8 *)(lVar1 + 0x10 + lVar3) = 0;
  *(undefined4 *)(lVar1 + 0x18 + lVar3) = 0;
  return;
}


