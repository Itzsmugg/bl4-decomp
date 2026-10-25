// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147fcf9f0 FUN_147fcf9f0 body=133 status=ok
// SIG undefined FUN_147fcf9f0(void)

undefined8 *
FUN_147fcf9f0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = *param_2;
  lVar3 = param_2[1];
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  lVar3 = *param_3;
  param_1[2] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  param_1[3] = param_4;
  param_1[4] = param_5;
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 147fcfa76 FUN_147fcfa76 body=100 status=ok
// SIG undefined FUN_147fcfa76(void)

undefined8 * FUN_147fcfa76(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x40 + lVar3) != 0) {
        FUN_147fcfada(param_2);
      }
      lVar3 = lVar3 + 0xba0;
    } while ((longlong)iVar1 * 0xba0 - lVar3 != 0);
  }
  return param_2;
}



// FUNCTION 147fcfada FUN_147fcfada body=118 status=ok
// SIG undefined FUN_147fcfada(void)

void FUN_147fcfada(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  if ((ulonglong)*(byte *)(param_1 + 0x30) == 1) {
    iVar3 = *(int *)(param_1 + 0x28);
    uVar1 = *(uint *)(param_1 + 0x2c);
  }
  else {
    (*(code *)(&PTR_LAB_14ad0ff00)[*(byte *)(param_1 + 0x30)])(param_1);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 4;
    *(undefined1 *)(param_1 + 0x30) = 1;
    iVar3 = 0;
    uVar1 = 4;
  }
  *(uint *)(param_1 + 0x28) = iVar3 + 1U;
  if (uVar1 < iVar3 + 1U) {
    FUN_147fd7620(param_1,iVar3);
  }
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = param_1;
  }
  *(undefined8 *)(lVar2 + (longlong)iVar3 * 8) = param_2;
  return;
}



// FUNCTION 147fcfb58 FUN_147fcfb58 body=339 status=ok
// SIG undefined FUN_147fcfb58(void)

void FUN_147fcfb58(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar8 = 0;
    do {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x20) + lVar8 * 0xba0);
      plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 8 + lVar8 * 0xba0);
      bVar4 = true;
      if (plVar7 == (longlong *)0x0) {
LAB_147fcfbb3:
        lVar9 = 0;
        plVar7 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_147fcfbb3;
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
        lVar9 = *plVar2;
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        bVar4 = false;
      }
      iVar6 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
        FUN_147fd771c(param_2,iVar6);
      }
      lVar3 = *param_2;
      lVar10 = (longlong)iVar6 * 0x20;
      *(longlong **)(lVar3 + lVar10) = plVar2;
      *(longlong *)(lVar3 + 8 + lVar10) = lVar9;
      *(longlong **)(lVar3 + 0x10 + lVar10) = plVar7;
      *(int *)(lVar3 + 0x18 + lVar10) = (int)lVar8;
      *(undefined1 *)(lVar3 + 0x1c + lVar10) = 0;
      if (*(char *)((longlong)plVar2 + 0xb95) == '\0') {
        if (lVar9 == 0) {
          FUN_147fcf9a0(plVar2);
        }
        else if (*(char *)(lVar9 + 0xb11) == '\x01') {
          if ((*(char *)((longlong)plVar2 + 0xb91) == '\0') && ((char)plVar2[0x172] == '\0')) {
            *(undefined1 *)((longlong)plVar2 + 0xb94) = 1;
          }
          *(undefined1 *)((longlong)plVar2 + 0xb91) = 1;
          FUN_147fdbb5e(plVar2 + 0x16);
          FUN_147fd91fe(plVar2 + 0x27);
        }
      }
      if (!bVar4) {
        LOCK();
        plVar2 = plVar7 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 147fcfcac FUN_147fcfcac body=118 status=ok
// SIG undefined FUN_147fcfcac(void)

void FUN_147fcfcac(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x28) <= (int)param_2)) {
    return;
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x30) + 8 + lVar1) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar1) != 0)) {
        FUN_147fcfd22(param_1,2,(ulonglong)param_2 * 0xba0 + *(longlong *)(param_1 + 0x20),0);
        break;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x38) * 0x10 != lVar1);
  }
  FUN_147fcfeb8(param_1 + 0x20,(ulonglong)param_2);
  return;
}



// FUNCTION 147fcfd22 FUN_147fcfd22 body=404 status=ok
// SIG undefined FUN_147fcfd22(void)

void FUN_147fcfd22(longlong param_1,undefined4 param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined1 local_98 [8];
  longlong *local_90;
  undefined4 local_70 [2];
  longlong local_68;
  undefined8 local_60;
  longlong *plStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  longlong lStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_40 = 0;
  lStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  plStack_58 = (longlong *)0x0;
  local_a0 = param_3[2];
  uVar5 = param_3[8];
  local_70[0] = param_2;
  local_68 = param_1;
  if ((local_a0 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  local_b0 = 0;
  local_a8 = param_3[1];
  if (local_a8 != 0) {
    iVar6 = *(int *)(local_a8 + 8);
    do {
      if (iVar6 == 0) {
        local_a8 = 0;
        goto LAB_147fcfdb5;
      }
      LOCK();
      iVar4 = *(int *)(local_a8 + 8);
      bVar7 = iVar6 == iVar4;
      if (bVar7) {
        *(int *)(local_a8 + 8) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar7);
    if (local_a8 != 0) {
      local_b0 = *param_3;
    }
  }
LAB_147fcfdb5:
  local_b8 = uVar5;
  FUN_147fcf9f0(local_98,&local_b0,&local_a0,param_3 + 0x16);
  FUN_147fcf8ac(&local_60,local_98);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))(local_90);
      }
    }
  }
  if ((param_4 != 0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(param_4);
  }
  lStack_38 = param_4;
  FUN_147fd7852(param_1 + 0x30,local_70);
  plVar1 = plStack_58;
  if (plStack_58 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_58 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_58)(plStack_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fcfeb8 FUN_147fcfeb8 body=89 status=ok
// SIG undefined FUN_147fcfeb8(void)

void FUN_147fcfeb8(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0xba0 + *param_1);
  FUN_147fd0c8c(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0xba0),(longlong)(int)(~param_2 + iVar1) * 0xba0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_147fd77a2(param_1);
  return;
}



// FUNCTION 147fcff12 FUN_147fcff12 body=101 status=ok
// SIG undefined FUN_147fcff12(void)

void FUN_147fcff12(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x28) * 0xba0;
    lVar2 = *(longlong *)(param_1 + 0x20) + 0x18;
    do {
      (**(code **)(*param_2 + 0x88))(param_2,lVar2 + -8,0,0);
      (**(code **)(*param_2 + 0x88))(param_2,lVar2);
      lVar2 = lVar2 + 0xba0;
      lVar1 = lVar1 + -0xba0;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 147fcff78 FUN_147fcff78 body=659 status=ok
// SIG undefined FUN_147fcff78(void)

void FUN_147fcff78(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_3 + 5) & 4) == 0) {
    if ((*(byte *)(param_3 + 5) & 1) == 0) goto LAB_147fcffee;
    local_3c = 0;
  }
  else {
    local_3c = *(uint *)(param_1 + 0x28);
  }
  puVar2 = (ulonglong *)param_3[1];
  if (puVar2[1] < *puVar2 + 4) {
    if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
      (**(code **)(*param_3 + 0x170))(param_3,&local_3c,4);
    }
    else {
      thunk_FUN_14572512c(param_3,&local_3c);
    }
  }
  else {
    *puVar2 = *puVar2 + 4;
  }
LAB_147fcffee:
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    lVar5 = 0;
    do {
      FUN_147fda618(lVar3 + 0xb0 + lVar5,param_3);
      piVar4 = *(int **)param_3[1];
      if ((int *)((undefined8 *)param_3[1])[1] < piVar4 + 1) {
        local_3c = (uint)*(byte *)(lVar3 + 0xb90 + lVar5);
        (**(code **)(*param_3 + 0x170))(param_3,&local_3c,4);
        if (1 < local_3c) {
          FUN_14572541c(param_3);
        }
        *(bool *)(lVar3 + 0xb90 + lVar5) = local_3c != 0;
      }
      else {
        *(bool *)(lVar3 + 0xb90 + lVar5) = *piVar4 != 0;
        *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
      }
      piVar4 = *(int **)param_3[1];
      if ((int *)((undefined8 *)param_3[1])[1] < piVar4 + 1) {
        local_3c = (uint)*(byte *)(lVar3 + 0xb92 + lVar5);
        (**(code **)(*param_3 + 0x170))(param_3,&local_3c,4);
        if (1 < local_3c) {
          FUN_14572541c(param_3);
        }
        *(bool *)(lVar3 + 0xb92 + lVar5) = local_3c != 0;
      }
      else {
        *(bool *)(lVar3 + 0xb92 + lVar5) = *piVar4 != 0;
        *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
      }
      piVar4 = *(int **)param_3[1];
      if ((int *)((undefined8 *)param_3[1])[1] < piVar4 + 1) {
        local_3c = (uint)*(byte *)(lVar3 + 0xb93 + lVar5);
        (**(code **)(*param_3 + 0x170))(param_3,&local_3c,4);
        if (1 < local_3c) {
          FUN_14572541c(param_3);
        }
        *(bool *)(lVar3 + 0xb93 + lVar5) = local_3c != 0;
      }
      else {
        *(bool *)(lVar3 + 0xb93 + lVar5) = *piVar4 != 0;
        *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
      }
      piVar4 = *(int **)param_3[1];
      if ((int *)((undefined8 *)param_3[1])[1] < piVar4 + 1) {
        local_3c = (uint)*(byte *)(lVar3 + 0xb95 + lVar5);
        (**(code **)(*param_3 + 0x170))(param_3,&local_3c,4);
        if (1 < local_3c) {
          FUN_14572541c(param_3);
        }
        *(bool *)(lVar3 + 0xb95 + lVar5) = local_3c != 0;
      }
      else {
        *(bool *)(lVar3 + 0xb95 + lVar5) = *piVar4 != 0;
        *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
      }
      lVar5 = lVar5 + 0xba0;
    } while ((longlong)iVar1 * 0xba0 - lVar5 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd020c FUN_147fd020c body=299 status=ok
// SIG undefined FUN_147fd020c(void)

void FUN_147fd020c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar6 = (longlong)(*(int *)(param_1 + 0x28) + -1) * 0xba0;
    if (*(char *)(*(longlong *)(param_1 + 0x20) + 0xb95 + lVar6) == '\0') {
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x20) + lVar6);
      plVar3 = (longlong *)plVar7[1];
      if (plVar3 == (longlong *)0x0) {
LAB_147fd028a:
        lVar8 = *param_2;
        lVar6 = 0;
      }
      else {
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_147fd028a;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar9 = iVar5 == iVar4;
          if (bVar9) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar9);
        lVar6 = *plVar7;
        lVar8 = *param_2;
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
      if (lVar6 == lVar8) {
        lVar6 = param_2[2];
        if ((lVar6 != 0 & DAT_14c950c29) == 1) {
          FUN_14689c22e(lVar6);
        }
        if ((plVar7[2] == lVar6) || (iVar5 = FUN_147fd0338(plVar7[8],param_2[2]), iVar5 == 2)) {
          return;
        }
        if (iVar5 == 1) {
          lVar6 = FUN_147fd03c2(param_1,param_2);
          if (lVar6 == 0) {
            lVar6 = 0;
          }
          else if (*(char *)(lVar6 + 0x4d) == '\x01') {
            FUN_147fd0812(param_1,param_2,lVar6);
            return;
          }
          goto LAB_147fd02fb;
        }
      }
    }
  }
  lVar6 = FUN_147fd03c2(param_1,param_2);
LAB_147fd02fb:
  FUN_147fd08fa(param_1,param_2,lVar6);
  return;
}



// FUNCTION 147fd0338 FUN_147fd0338 body=137 status=ok
// SIG undefined FUN_147fd0338(void)

char FUN_147fd0338(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_2 + 0x48) != 0)) {
    uVar3 = FUN_145b68694();
    bVar2 = FUN_144a7ca96((longlong *)(param_2 + 0x48),uVar3);
    lVar1 = *(longlong *)(param_2 + 0x48);
    if (((lVar1 != 0 & bVar2) == 1) &&
       ((lVar1 = *(longlong *)(lVar1 + 0x38), cVar4 = '\0', lVar1 != 0 &&
        (*(longlong *)(param_1 + 0x28) == lVar1)))) {
      if (*(int *)(param_1 + 0x60) == 0) {
        cVar4 = '\x01';
      }
      else {
        cVar4 = (*(longlong *)
                  (*(longlong *)(param_1 + 0x58) + (longlong)(*(int *)(param_1 + 0x60) + -1) * 0xb00
                  ) == param_2) + '\x01';
      }
    }
  }
  return cVar4;
}



// FUNCTION 147fd03c2 FUN_147fd03c2 body=1103 status=ok
// SIG undefined FUN_147fd03c2(void)

longlong ** FUN_147fd03c2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong **pplVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong **pplVar13;
  longlong lVar14;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar6 = *param_2;
    local_d0 = (longlong *)param_2[1];
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    if (lVar6 == 0) {
      local_e8 = 0;
    }
    else {
      local_e8 = *(longlong *)(lVar6 + 0x30);
    }
    lVar6 = (longlong)(*(int *)(param_1 + 0x28) + -1) * 0xba0;
    plVar12 = (longlong *)(*(longlong *)(param_1 + 0x20) + lVar6);
    local_d8 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 8 + lVar6);
    if (local_d8 == (longlong *)0x0) {
      local_e0 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
      local_d8 = (longlong *)0x0;
LAB_147fd0491:
      lVar6 = 0;
    }
    else {
      uVar7 = (ulonglong)*(uint *)(local_d8 + 1);
      lVar6 = 0;
      do {
        uVar5 = (uint)uVar7;
        if (uVar5 == 0) {
          local_e0 = CONCAT71((int7)(uVar7 >> 8),1);
          local_d8 = (longlong *)0x0;
          goto LAB_147fd0493;
        }
        LOCK();
        uVar3 = *(uint *)(local_d8 + 1);
        if (uVar5 == uVar3) {
          *(uint *)(local_d8 + 1) = uVar5 + 1;
        }
        else {
          uVar7 = (ulonglong)uVar3;
        }
        UNLOCK();
      } while (uVar5 != uVar3);
      lVar6 = *plVar12;
      if (lVar6 == 0) {
        local_e0 = 0;
        goto LAB_147fd0491;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
      local_e0 = 0;
    }
LAB_147fd0493:
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    FUN_147fe63ce(param_2[2],&local_78);
    pplVar13 = &local_88;
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    FUN_147fe63ce(plVar12[2],pplVar13);
    if ((longlong)(int)uStack_80 != 0) {
      plVar12 = local_88 + (int)uStack_80;
      plVar10 = local_88;
      do {
        plVar1 = local_78;
        lVar14 = *plVar10;
        if (*(int *)(lVar14 + 0xa8) != 0) {
          lVar11 = (longlong)(int)uStack_70;
          if (lVar11 != 0) {
            lVar9 = 0;
            do {
              local_98 = *(undefined8 *)(lVar14 + 0xa0);
              local_90 = *(undefined4 *)(lVar14 + 0xa8);
              local_f8 = local_e8;
              pplVar8 = (longlong **)
                        FUN_147fd186e(&local_98,lVar14,lVar6,
                                      *(undefined8 *)((longlong)plVar1 + lVar9));
              if (pplVar8 != (longlong **)0x0) goto LAB_147fd0730;
              lVar9 = lVar9 + 8;
            } while (lVar11 * 8 != lVar9);
          }
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar12);
      if ((longlong)(int)uStack_80 != 0) {
        plVar10 = local_88 + (int)uStack_80;
        plVar12 = local_88;
        do {
          plVar1 = local_78;
          if ((lVar6 != 0) && (*(int *)(lVar6 + 0x78) != 0)) {
            lVar14 = (longlong)(int)uStack_70;
            if (lVar14 != 0) {
              lVar11 = *plVar12;
              lVar9 = 0;
              do {
                local_a8 = *(undefined8 *)(lVar6 + 0x70);
                local_a0 = *(undefined4 *)(lVar6 + 0x78);
                local_f8 = local_e8;
                pplVar8 = (longlong **)
                          FUN_147fd186e(&local_a8,lVar11,lVar6,
                                        *(undefined8 *)((longlong)plVar1 + lVar9));
                if (pplVar8 != (longlong **)0x0) goto LAB_147fd0730;
                lVar9 = lVar9 + 8;
              } while (lVar14 * 8 != lVar9);
            }
          }
          plVar12 = plVar12 + 1;
        } while (plVar12 != plVar10);
      }
    }
    bVar4 = true;
    if ((longlong)(int)uStack_70 != 0) {
      plVar12 = local_78 + (int)uStack_70;
      plVar10 = local_78;
      do {
        plVar1 = local_88;
        lVar14 = *plVar10;
        if (*(int *)(lVar14 + 0x98) != 0) {
          lVar11 = (longlong)(int)uStack_80;
          if (lVar11 != 0) {
            lVar9 = 0;
            do {
              local_b8 = *(undefined8 *)(lVar14 + 0x90);
              local_b0 = *(undefined4 *)(lVar14 + 0x98);
              local_f8 = local_e8;
              pplVar8 = (longlong **)
                        FUN_147fd186e(&local_b8,*(undefined8 *)((longlong)plVar1 + lVar9),lVar6,
                                      lVar14);
              if (pplVar8 != (longlong **)0x0) goto LAB_147fd0730;
              lVar9 = lVar9 + 8;
            } while (lVar11 * 8 != lVar9);
          }
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar12);
      if ((longlong)(int)uStack_70 != 0) {
        plVar12 = local_78 + (int)uStack_70;
        plVar10 = local_78;
        do {
          plVar1 = local_88;
          if ((local_e8 != 0) && (*(int *)(local_e8 + 0x68) != 0)) {
            lVar14 = (longlong)(int)uStack_80;
            if (lVar14 != 0) {
              lVar11 = *plVar10;
              lVar9 = 0;
              do {
                local_c8 = *(undefined8 *)(local_e8 + 0x60);
                local_c0 = *(undefined4 *)(local_e8 + 0x68);
                local_f8 = local_e8;
                pplVar8 = (longlong **)
                          FUN_147fd186e(&local_c8,*(undefined8 *)((longlong)plVar1 + lVar9),lVar6,
                                        lVar11);
                if (pplVar8 != (longlong **)0x0) goto LAB_147fd0730;
                lVar9 = lVar9 + 8;
              } while (lVar14 * 8 != lVar9);
            }
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar12);
      }
      bVar4 = true;
    }
    goto LAB_147fd0735;
  }
  goto LAB_147fd07ae;
LAB_147fd0730:
  bVar4 = false;
  pplVar13 = pplVar8;
LAB_147fd0735:
  plVar10 = local_d0;
  plVar12 = local_d8;
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((char)local_e0 == '\0') {
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar10 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  if (!bVar4) goto LAB_147fd07b1;
LAB_147fd07ae:
  pplVar13 = (longlong **)0x0;
LAB_147fd07b1:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pplVar13;
}



// FUNCTION 147fd0812 FUN_147fd0812 body=230 status=ok
// SIG undefined FUN_147fd0812(void)

void FUN_147fd0812(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x48) != 0) {
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x48);
    uVar3 = FUN_145b68694();
    cVar2 = FUN_144a7ca96(puVar7,uVar3);
    if (cVar2 != '\0') {
      uVar3 = *puVar7;
      goto LAB_147fd085d;
    }
  }
  uVar3 = 0;
LAB_147fd085d:
  lVar6 = *(longlong *)(param_3 + 0x40);
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e(lVar6);
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar4 = (longlong)(*(int *)(param_1 + 0x28) + -1) * 0xba0;
  lVar5 = lVar4 + lVar1;
  local_30 = lVar5 + 0x20;
  local_38 = &local_30;
  FUN_147fd0cd4(*(undefined8 *)(lVar5 + 0x40),&local_38,uVar3,lVar6);
  lVar6 = *(longlong *)(param_2 + 0x10);
  if (DAT_14c950c29 == 1) {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_14689c22e();
      lVar6 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(lVar1 + lVar4 + 0x10) = lVar6;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd08fa FUN_147fd08fa body=418 status=ok
// SIG undefined FUN_147fd08fa(void)

void FUN_147fd08fa(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c18 [32];
  longlong local_bf8;
  undefined8 local_be8;
  longlong local_be0;
  undefined1 local_bd8 [2984];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c18;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar3 = FUN_145869d10();
    cVar2 = FUN_144a7ca96((undefined8 *)(param_1 + 8),uVar3);
    if (cVar2 != '\0') {
      uVar3 = *(undefined8 *)(param_1 + 8);
      goto LAB_147fd0949;
    }
  }
  uVar3 = 0;
LAB_147fd0949:
  lVar4 = FUN_147fd0a9d(uVar3);
  lVar5 = param_2[2];
  lVar6 = *(longlong *)(lVar5 + 0x48);
  if (DAT_14c950c29 == '\x01') {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_14689c22e();
      lVar6 = *(longlong *)(lVar5 + 0x48);
    }
  }
  *(longlong *)(lVar4 + 0x40) = lVar6;
  if ((param_3 == 0) || (lVar5 = *(longlong *)(param_3 + 0x40), lVar5 == 0)) {
    lVar5 = FUN_147fd0b4c(lVar4);
  }
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  *(longlong *)(lVar4 + 0x38) = lVar5;
  FUN_147fd0bfc(local_bd8);
  local_be8 = *param_2;
  local_be0 = param_2[1];
  if (local_be0 != 0) {
    LOCK();
    *(int *)(local_be0 + 8) = *(int *)(local_be0 + 8) + 1;
    UNLOCK();
  }
  local_bf8 = lVar4;
  cVar2 = FUN_147fcf566(param_1,local_bd8,param_2[2],&local_be8);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
      FUN_147fd7a80(param_1 + 0x20,iVar1);
    }
    FUN_147fd78f6((longlong)iVar1 * 0xba0 + *(longlong *)(param_1 + 0x20));
    if ((longlong)*(int *)(param_1 + 0x38) != 0) {
      lVar5 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x30) + 8 + lVar5) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar5) != 0)) {
          FUN_147fcfd22(param_1,0,
                        (longlong)(*(int *)(param_1 + 0x28) + -1) * 0xba0 +
                        *(longlong *)(param_1 + 0x20),param_3);
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x38) * 0x10 != lVar5);
    }
  }
  FUN_147fd0c8c(local_bd8);
  if ((local_30 ^ (ulonglong)auStack_c18) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fd0a9d FUN_147fd0a9d body=174 status=ok
// SIG undefined FUN_147fd0a9d(void)

undefined8 FUN_147fd0a9d(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b67536();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 147fd0b4c FUN_147fd0b4c body=174 status=ok
// SIG undefined FUN_147fd0b4c(void)

undefined8 FUN_147fd0b4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b68118();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
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



// FUNCTION 147fd0bfc FUN_147fd0bfc body=143 status=ok
// SIG undefined FUN_147fd0bfc(void)

undefined8 * FUN_147fd0bfc(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  FUN_147fdae24(param_1 + 9);
  FUN_147fdbb04(param_1 + 0x16);
  FUN_147fe7938(param_1 + 0x27);
  param_1[0x52] = 0;
  param_1[0x54] = 0x200000000;
  FUN_144894d4c(param_1 + 0x56);
  *(undefined1 *)(param_1 + 0x16e) = 0;
  *(undefined2 *)(param_1 + 0x170) = 0;
  *(undefined2 *)((longlong)param_1 + 0xb94) = 0;
  *(undefined4 *)(param_1 + 0x172) = 0;
  return param_1;
}



// FUNCTION 147fd0c8c FUN_147fd0c8c body=72 status=ok
// SIG undefined FUN_147fd0c8c(void)

void FUN_147fd0c8c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_147fd6a5a(param_1 + 0xb0);
  FUN_147fd6aaa(param_1 + 0x48);
  FUN_147fd6af0(param_1 + 0x20);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147fd0cc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147fd0cd4 FUN_147fd0cd4 body=356 status=ok
// SIG undefined FUN_147fd0cd4(void)

void FUN_147fd0cd4(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_b58 [32];
  longlong local_b38;
  longlong local_b30;
  longlong local_b28;
  undefined8 local_b20;
  undefined1 local_b18 [136];
  undefined1 local_a90 [2656];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b58;
  if (((param_3 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) ||
     (*(longlong *)(param_1 + 0x28) != *(longlong *)(param_3 + 0x38))) goto LAB_147fd0d0e;
  FUN_147fd2348(param_1);
  FUN_147fd24f8(&local_b38);
  uVar2 = FUN_140ff39b8();
  local_b38 = FUN_144a78ede(param_3,uVar2);
  if (local_b38 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(local_b38);
  }
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_14689c22e(param_3);
  }
  local_b30 = param_3;
  local_b28 = param_4;
  if ((param_4 == 0) || ((DAT_14c950c29 & 1) == 0)) {
    FUN_147fd932e(local_a90,param_1 + 0x38);
    if (param_4 != 0) goto LAB_147fd0dca;
  }
  else {
    FUN_14689c22e(param_4);
    FUN_147fd932e(local_a90,param_1 + 0x38);
LAB_147fd0dca:
    local_b20 = FUN_147fdaba2(param_2,param_4);
  }
  iVar1 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar1 + 1U;
  if (*(uint *)(param_1 + 100) < iVar1 + 1U) {
    FUN_147fd7fea((longlong *)(param_1 + 0x58),iVar1);
  }
  FUN_147fd7eae((longlong)iVar1 * 0xb00 + *(longlong *)(param_1 + 0x58),&local_b38);
  FUN_147fd6a5a(local_b18);
LAB_147fd0d0e:
  if ((local_30 ^ (ulonglong)auStack_b58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fd0e3a FUN_147fd0e3a body=201 status=ok
// SIG undefined FUN_147fd0e3a(void)

void FUN_147fd0e3a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x20);
    plVar8 = plVar6 + (longlong)*(int *)(param_1 + 0x28) * 0x174;
    do {
      if (*(char *)((longlong)plVar6 + 0xb95) == '\0') {
        lVar7 = param_2[2];
        if ((lVar7 != 0 & DAT_14c950c29) == 1) {
          FUN_14689c22e(lVar7);
        }
        if (plVar6[2] == lVar7) {
          plVar3 = (longlong *)plVar6[1];
          if (plVar3 == (longlong *)0x0) {
LAB_147fd0edd:
            lVar9 = *param_2;
            lVar7 = 0;
          }
          else {
            iVar5 = (int)plVar3[1];
            do {
              if (iVar5 == 0) goto LAB_147fd0edd;
              LOCK();
              iVar4 = (int)plVar3[1];
              bVar10 = iVar5 == iVar4;
              if (bVar10) {
                *(int *)(plVar3 + 1) = iVar5 + 1;
                iVar4 = iVar5;
              }
              iVar5 = iVar4;
              UNLOCK();
            } while (!bVar10);
            lVar7 = *plVar6;
            lVar9 = *param_2;
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
          if (lVar7 == lVar9) {
            FUN_147fcf9a0(plVar6);
          }
        }
      }
      plVar6 = plVar6 + 0x174;
    } while (plVar6 != plVar8);
  }
  return;
}



// FUNCTION 147fd0f04 FUN_147fd0f04 body=297 status=ok
// SIG undefined FUN_147fd0f04(void)

void FUN_147fd0f04(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  FUN_147fcfb58(0,&local_38);
  local_48 = local_38;
  local_40 = (undefined4)uStack_30;
  FUN_147fd102e(&local_48,param_2,param_3);
  local_58 = local_38;
  local_50 = (undefined4)uStack_30;
  FUN_147fd1266(&local_58,param_2,param_3);
  local_68 = local_38;
  local_60 = (undefined4)uStack_30;
  FUN_147fd143c(&local_68,param_2,param_3);
  local_78 = local_38;
  local_70 = (undefined4)uStack_30;
  FUN_147fd163a(param_1,&local_78,param_2,param_3);
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar3 = 0;
    do {
      *(undefined1 *)(lVar2 + 0xb90 + lVar3) = 0;
      *(undefined2 *)(lVar2 + 0xb92 + lVar3) = 0;
      *(undefined1 *)(lVar2 + 0xb94 + lVar3) = 0;
      lVar3 = lVar3 + 0xba0;
    } while ((longlong)iVar1 * 0xba0 - lVar3 != 0);
  }
  FUN_147fd7c90(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd102e FUN_147fd102e body=566 status=ok
// SIG undefined FUN_147fd102e(void)

void FUN_147fd102e(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 *local_90;
  longlong local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((longlong)(int)param_1[1] != 0) {
    plVar10 = (longlong *)*param_1;
    plVar12 = plVar10 + (longlong)(int)param_1[1] * 4;
    local_90 = param_2 + 3;
    local_98 = plVar12;
    do {
      lVar6 = *plVar10;
      if (*(char *)(lVar6 + 0xb95) == '\0') {
        local_70 = *param_2;
        plVar7 = (longlong *)param_2[2];
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        local_50 = *(undefined1 *)(local_90 + 1);
        local_58 = *local_90;
        local_68 = plVar10[1];
        local_60 = (longlong *)plVar10[2];
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        if (plVar7 != (longlong *)0x0) {
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
        }
        local_50 = *(undefined1 *)(lVar6 + 0xb90);
        lVar1 = lVar6 + 0xb0;
        lVar2 = lVar6 + 0x138;
        FUN_147fd9f24(lVar2,param_3 + 0x88);
        thunk_FUN_147fe7e0c(lVar2,plVar10[1] + 200,0xb);
        if (*(char *)(lVar6 + 0xb92) == '\0') {
          local_80 = &local_70;
          iVar5 = *(int *)(lVar6 + 0x50);
          local_88 = lVar2;
          local_78 = lVar1;
          if ((longlong)iVar5 == 0) {
            uVar9 = 0;
          }
          else {
            lVar2 = *(longlong *)(lVar6 + 0x48);
            lVar11 = 0;
            uVar9 = 0;
            do {
              lVar8 = *(longlong *)(lVar2 + lVar11);
              if ((*(byte *)(lVar8 + 0x10) & 1) != 0) {
                FUN_147fdadf0(lVar8,&local_80,&local_88);
                uVar9 = 1;
              }
              lVar11 = lVar11 + 8;
            } while ((longlong)iVar5 * 8 != lVar11);
          }
          *(undefined1 *)((longlong)plVar10 + 0x1c) = uVar9;
          *(undefined1 *)(lVar6 + 0xb92) = 1;
          plVar12 = local_98;
        }
        if (*(char *)(lVar6 + 0xb93) == '\0') {
          lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x40) + 0x18);
          if (lVar2 != 0) {
            FUN_147fdae0a(lVar2,&local_70,lVar1);
          }
          *(undefined1 *)(lVar6 + 0xb93) = 1;
        }
        plVar7 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_60 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar4 = (int *)((longlong)plVar7 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
      }
      plVar10 = plVar10 + 4;
    } while (plVar10 != plVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fd1266 FUN_147fd1266 body=469 status=ok
// SIG undefined FUN_147fd1266(void)

void FUN_147fd1266(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined2 local_98;
  undefined8 *local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = param_1[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar3 = *param_1;
    param_3 = param_3 + 0x88;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar7);
      if (*(char *)(lVar4 + 0xb95) == '\0') {
        local_70 = *param_2;
        plVar5 = (longlong *)param_2[2];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_50 = *(undefined1 *)(param_2 + 4);
        local_58 = param_2[3];
        local_68 = *(undefined8 *)(lVar3 + 8 + lVar7);
        local_60 = *(longlong **)(lVar3 + 0x10 + lVar7);
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
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
        local_88 = lVar4 + 0xb0;
        local_50 = *(undefined1 *)(lVar4 + 0xb90);
        local_80 = lVar4 + 0x138;
        local_90 = &local_70;
        local_78 = 0;
        local_98 = 0;
        plVar5 = *(longlong **)(*(longlong *)(lVar4 + 0x40) + 0x18);
        local_a0 = param_3;
        if (plVar5 == (longlong *)0x0) {
          thunk_FUN_147fe7e0c(param_3,local_80,1);
        }
        else {
          (**(code **)(*plVar5 + 0x58))(plVar5,&local_90,&local_a0);
        }
        plVar5 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_60)(local_60);
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
      else {
        thunk_FUN_147fe7e0c(param_3,lVar4 + 0x138,1);
      }
      lVar7 = lVar7 + 0x20;
    } while ((longlong)(int)lVar6 * 0x20 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fd143c FUN_147fd143c body=508 status=ok
// SIG undefined FUN_147fd143c(void)

void FUN_147fd143c(longlong *param_1,undefined8 *param_2,void *param_3)

{
  void *_Dst;
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = param_1[1];
  if ((longlong)(int)lVar7 != 0) {
    lVar3 = *param_1;
    local_78 = param_2 + 3;
    local_80 = (longlong)param_3 + 0x100;
    local_88 = (longlong)param_3 + 0x200;
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar9);
      if (*(char *)(lVar4 + 0xb95) == '\0') {
        local_70 = *param_2;
        plVar5 = (longlong *)param_2[2];
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_50 = *(undefined1 *)(local_78 + 1);
        local_58 = *local_78;
        local_68 = *(undefined8 *)(lVar3 + 8 + lVar9);
        local_60 = *(longlong **)(lVar3 + 0x10 + lVar9);
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
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
        local_50 = *(undefined1 *)(lVar4 + 0xb90);
        _Dst = (void *)(lVar4 + 0xb0);
        memcpy(_Dst,param_3,0x88);
        thunk_FUN_147fe65f6(lVar4 + 0x1b0,local_80);
        FUN_147fd9f36(lVar4 + 0x2b0,local_88);
        lVar6 = *(longlong *)(lVar3 + 8 + lVar9);
        thunk_FUN_147fdc056(_Dst,lVar6 + 0x40);
        uVar8 = 1;
        if ((*(char *)((longlong)param_3 + 0xad0) == '\0') && (*(char *)(lVar6 + 0xb10) == '\0')) {
          uVar8 = *(undefined1 *)(lVar4 + 0xb94);
        }
        *(undefined1 *)(lVar4 + 0xb80) = uVar8;
        *(undefined1 *)(lVar4 + 0xb81) = 1;
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x40) + 0x20);
        if (lVar4 != 0) {
          FUN_147fdae0a(lVar4,&local_70,_Dst);
        }
        plVar5 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_60)(local_60);
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
      lVar9 = lVar9 + 0x20;
    } while ((longlong)(int)lVar7 * 0x20 != lVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fd163a FUN_147fd163a body=562 status=ok
// SIG undefined FUN_147fd163a(void)

void FUN_147fd163a(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined2 local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = param_2[1];
  local_a8 = param_1;
  if ((longlong)(int)lVar6 == 0) {
    iVar10 = -1;
  }
  else {
    lVar8 = *param_2;
    local_a0 = param_3 + 3;
    iVar10 = -1;
    lVar11 = 0;
    local_98 = param_3;
    do {
      lVar5 = *(longlong *)(lVar8 + lVar11);
      lVar4 = lVar5 + 0xb0;
      if (*(char *)(lVar5 + 0xb95) == '\0') {
        local_70 = *param_3;
        plVar3 = (longlong *)param_3[2];
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        local_50 = *(undefined1 *)(local_a0 + 1);
        local_58 = *local_a0;
        local_68 = *(undefined8 *)(lVar8 + 8 + lVar11);
        local_60 = *(longlong **)(lVar8 + 0x10 + lVar11);
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
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
        local_50 = *(undefined1 *)(lVar5 + 0xb90);
        local_80 = &local_70;
        local_88 = 0;
        plVar3 = *(longlong **)(*(longlong *)(lVar5 + 0x40) + 0x18);
        local_90 = param_4;
        local_78 = lVar4;
        if (plVar3 == (longlong *)0x0) {
          FUN_147fd9eac(param_4,lVar4);
LAB_147fd17ad:
          iVar10 = *(int *)(lVar8 + 0x18 + lVar11);
        }
        else {
          (**(code **)(*plVar3 + 0x60))(plVar3,&local_80,&local_90);
          if (((char)local_88 == '\x01') && (local_88._1_1_ != '\0')) goto LAB_147fd17ad;
        }
        plVar3 = local_60;
        param_3 = local_98;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_60)(local_60);
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
        FUN_147fd9eac(param_4,lVar4);
        iVar10 = *(int *)(lVar8 + 0x18 + lVar11);
      }
      lVar11 = lVar11 + 0x20;
    } while ((longlong)(int)lVar6 * 0x20 != lVar11);
  }
  lVar6 = local_a8;
  if (*(longlong *)(local_a8 + 8) != 0) {
    plVar3 = (longlong *)(local_a8 + 8);
    uVar9 = FUN_145869d10();
    cVar7 = FUN_144a7ca96(plVar3,uVar9);
    if (cVar7 != '\0') {
      lVar8 = *plVar3;
      goto LAB_147fd180b;
    }
  }
  lVar8 = 0;
LAB_147fd180b:
  if ((*(int *)(lVar8 + 0x38) == 0) && (iVar10 != -1)) {
    FUN_147fcf4e6(lVar6,iVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fd186e FUN_147fd186e body=169 status=ok
// SIG undefined FUN_147fd186e(void)

longlong FUN_147fd186e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = param_5;
  lVar2 = param_1[1];
  local_50 = param_2;
  local_48 = param_3;
  local_40 = param_4;
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar1 + lVar5);
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar4);
      }
      cVar3 = FUN_147fe668e(lVar4,&local_50);
      if (cVar3 != '\0') goto LAB_147fd18f2;
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar5);
  }
  lVar4 = 0;
LAB_147fd18f2:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd1918 FUN_147fd1918 body=539 status=ok
// SIG undefined FUN_147fd1918(void)

void FUN_147fd1918(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_c28 [32];
  longlong local_c08;
  longlong local_bf8;
  longlong local_bf0;
  undefined1 local_be8 [2984];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c28;
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    plVar11 = *(longlong **)(param_1 + 0x20);
    plVar12 = plVar11 + (longlong)*(int *)(param_1 + 0x28) * 0x174;
    do {
      if (*(char *)((longlong)plVar11 + 0xb95) == '\0') {
        lVar10 = param_2[2];
        if ((lVar10 != 0 & DAT_14c950c29) == 1) {
          FUN_14689c22e(lVar10);
        }
        if (plVar11[2] == lVar10) {
          plVar3 = (longlong *)plVar11[1];
          if (plVar3 == (longlong *)0x0) {
LAB_147fd19d9:
            lVar9 = *param_2;
            lVar10 = 0;
          }
          else {
            iVar6 = (int)plVar3[1];
            do {
              if (iVar6 == 0) goto LAB_147fd19d9;
              LOCK();
              iVar4 = (int)plVar3[1];
              bVar13 = iVar6 == iVar4;
              if (bVar13) {
                *(int *)(plVar3 + 1) = iVar6 + 1;
                iVar4 = iVar6;
              }
              iVar6 = iVar4;
              UNLOCK();
            } while (!bVar13);
            lVar10 = *plVar11;
            lVar9 = *param_2;
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
          if (lVar10 == lVar9) goto LAB_147fd19e4;
        }
      }
      plVar11 = plVar11 + 0x174;
    } while (plVar11 != plVar12);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar7 = FUN_145869d10();
    cVar5 = FUN_144a7ca96((undefined8 *)(param_1 + 8),uVar7);
    if (cVar5 != '\0') {
      uVar7 = *(undefined8 *)(param_1 + 8);
      goto LAB_147fd1a37;
    }
  }
  uVar7 = 0;
LAB_147fd1a37:
  lVar8 = FUN_147fd0a9d(uVar7);
  lVar10 = param_2[2];
  lVar9 = *(longlong *)(lVar10 + 0x48);
  if (DAT_14c950c29 == 1) {
    if (lVar9 == 0) {
      lVar9 = 0;
    }
    else {
      FUN_14689c22e();
      lVar9 = *(longlong *)(lVar10 + 0x48);
    }
  }
  *(longlong *)(lVar8 + 0x40) = lVar9;
  FUN_147fd0bfc(local_be8);
  local_bf8 = *param_2;
  local_bf0 = param_2[1];
  if (local_bf0 != 0) {
    LOCK();
    *(int *)(local_bf0 + 8) = *(int *)(local_bf0 + 8) + 1;
    UNLOCK();
  }
  local_c08 = lVar8;
  cVar5 = FUN_147fcf566(param_1,local_be8,param_2[2],&local_bf8);
  if (cVar5 != '\0') {
    iVar6 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = iVar6 + 1U;
    if (*(uint *)(param_1 + 0x2c) < iVar6 + 1U) {
      FUN_147fd7a80(param_1 + 0x20,iVar6);
    }
    FUN_147fd78f6((longlong)iVar6 * 0xba0 + *(longlong *)(param_1 + 0x20));
    if ((longlong)*(int *)(param_1 + 0x38) != 0) {
      lVar10 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x30) + 8 + lVar10) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar10) != 0)) {
          FUN_147fcfd22(param_1,0,
                        (longlong)(*(int *)(param_1 + 0x28) + -1) * 0xba0 +
                        *(longlong *)(param_1 + 0x20),0);
          break;
        }
        lVar10 = lVar10 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x38) * 0x10 != lVar10);
    }
  }
  FUN_147fd0c8c(local_be8);
LAB_147fd19e4:
  if ((local_40 ^ (ulonglong)auStack_c28) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fd1b34 FUN_147fd1b34 body=202 status=ok
// SIG undefined FUN_147fd1b34(void)

void FUN_147fd1b34(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  uVar5 = (ulonglong)*(int *)(param_1 + 0x28);
  if (0 < (longlong)uVar5) {
    do {
      uVar6 = uVar5 - 1;
      plVar7 = (longlong *)(uVar6 * 0xba0 + *(longlong *)(param_1 + 0x20));
      lVar9 = param_2[2];
      if ((lVar9 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar9);
      }
      if (plVar7[2] == lVar9) {
        plVar2 = (longlong *)plVar7[1];
        if (plVar2 == (longlong *)0x0) {
LAB_147fd1bd7:
          lVar8 = *param_2;
          lVar9 = 0;
        }
        else {
          iVar4 = (int)plVar2[1];
          do {
            if (iVar4 == 0) goto LAB_147fd1bd7;
            LOCK();
            iVar3 = (int)plVar2[1];
            bVar10 = iVar4 == iVar3;
            if (bVar10) {
              *(int *)(plVar2 + 1) = iVar4 + 1;
              iVar3 = iVar4;
            }
            iVar4 = iVar3;
            UNLOCK();
          } while (!bVar10);
          lVar9 = *plVar7;
          lVar8 = *param_2;
          LOCK();
          plVar7 = plVar2 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
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
        if (lVar9 == lVar8) {
          FUN_147fcfcac(param_1,uVar6 & 0xffffffff);
        }
      }
      bVar10 = 1 < (longlong)uVar5;
      uVar5 = uVar6;
    } while (bVar10);
  }
  return;
}



// FUNCTION 147fd1bfe FUN_147fd1bfe body=207 status=ok
// SIG undefined FUN_147fd1bfe(void)

void FUN_147fd1bfe(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  FUN_147fcfb58(0,&local_38);
  local_48 = local_38;
  local_40 = (undefined4)uStack_30;
  FUN_147fd1cce();
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar3 = 0;
    do {
      *(undefined1 *)(lVar2 + 0xb90 + lVar3) = 0;
      *(undefined2 *)(lVar2 + 0xb92 + lVar3) = 0;
      *(undefined1 *)(lVar2 + 0xb94 + lVar3) = 0;
      lVar3 = lVar3 + 0xba0;
    } while ((longlong)iVar1 * 0xba0 - lVar3 != 0);
  }
  FUN_147fd7c90(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd1cce FUN_147fd1cce body=935 status=ok
// SIG undefined FUN_147fd1cce(void)

void FUN_147fd1cce(longlong *param_1,undefined8 *param_2,void *param_3)

{
  int *piVar1;
  longlong *plVar2;
  void *_Dst;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_f8 [32];
  void *local_d8;
  longlong *local_d0;
  void *local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  void *local_a0;
  undefined2 local_98;
  undefined8 *local_90;
  void *local_88;
  void *local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c0 = param_2;
  if ((longlong)(int)param_1[1] != 0) {
    plVar10 = (longlong *)*param_1;
    plVar11 = plVar10 + (longlong)(int)param_1[1] * 4;
    local_a8 = param_2 + 3;
    local_d8 = (void *)((longlong)param_3 + 0x88);
    local_b0 = (longlong)param_3 + 0x100;
    local_b8 = (longlong)param_3 + 0x200;
    local_d0 = plVar11;
    local_c8 = param_3;
    do {
      lVar5 = *plVar10;
      if (*(char *)(lVar5 + 0xb95) == '\0') {
        local_70 = *local_c0;
        plVar11 = (longlong *)local_c0[2];
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        local_50 = *(undefined1 *)(local_a8 + 1);
        local_58 = *local_a8;
        local_68 = plVar10[1];
        local_60 = (longlong *)plVar10[2];
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar8 = plVar11 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
        local_50 = *(undefined1 *)(lVar5 + 0xb90);
        _Dst = (void *)(lVar5 + 0xb0);
        memcpy(_Dst,param_3,0x88);
        pvVar3 = (void *)(lVar5 + 0x138);
        FUN_147fd9f24(pvVar3,local_d8);
        thunk_FUN_147fe65f6(lVar5 + 0x1b0,local_b0);
        FUN_147fd9f36(lVar5 + 0x2b0,local_b8);
        lVar6 = plVar10[1];
        thunk_FUN_147fdc056(_Dst,lVar6 + 0x40);
        thunk_FUN_147fe7e0c(pvVar3,lVar6 + 200,0xb);
        uVar9 = 1;
        if ((*(char *)((longlong)param_3 + 0xad0) == '\0') && (*(char *)(lVar6 + 0xb10) == '\0')) {
          uVar9 = *(undefined1 *)(lVar5 + 0xb94);
        }
        *(undefined1 *)(lVar5 + 0xb80) = uVar9;
        *(undefined1 *)(lVar5 + 0xb81) = 1;
        local_90 = &local_70;
        iVar4 = *(int *)(lVar5 + 0x50);
        local_a0 = pvVar3;
        local_88 = _Dst;
        if ((longlong)iVar4 != 0) {
          lVar6 = *(longlong *)(lVar5 + 0x48);
          lVar12 = 0;
          do {
            lVar7 = *(longlong *)(lVar6 + lVar12);
            if ((*(byte *)(lVar7 + 0x10) & 1) != 0) {
              FUN_147fdadf0(lVar7,&local_90,&local_a0);
            }
            lVar12 = lVar12 + 8;
          } while ((longlong)iVar4 * 8 != lVar12);
        }
        plVar8 = *(longlong **)(*(longlong *)(lVar5 + 0x40) + 0x18);
        if (plVar8 == (longlong *)0x0) {
          thunk_FUN_147fe7e0c(local_d8,pvVar3,1);
        }
        else {
          FUN_147fdae0a(plVar8,&local_70,_Dst);
          local_78 = 0;
          local_a0 = local_d8;
          local_98 = 0;
          local_90 = &local_70;
          local_88 = _Dst;
          local_80 = pvVar3;
          (**(code **)(*plVar8 + 0x58))(plVar8,&local_90,&local_a0);
        }
        param_3 = local_c8;
        plVar11 = local_d0;
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x40) + 0x20);
        if (lVar5 != 0) {
          FUN_147fdae0a(lVar5,&local_70,_Dst);
        }
        if (plVar8 == (longlong *)0x0) {
          FUN_147fd9eac(param_3,_Dst);
        }
        else {
          local_90 = &local_70;
          local_a0 = param_3;
          local_98 = 0;
          local_88 = _Dst;
          (**(code **)(*plVar8 + 0x60))(plVar8,&local_90,&local_a0);
        }
        plVar8 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_60 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      else {
        thunk_FUN_147fe7e0c(local_d8,lVar5 + 0x138,1);
        FUN_147fd9eac(param_3,lVar5 + 0xb0);
      }
      plVar10 = plVar10 + 4;
    } while (plVar10 != plVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fd207a FUN_147fd207a body=155 status=ok
// SIG undefined FUN_147fd207a(void)

undefined8 * FUN_147fd207a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    local_20 = lVar1;
    if (DAT_14c950c29 == '\x01') {
      FUN_14689c22e();
    }
    FUN_147fd2118(param_2,&local_20);
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_147fd2118(param_2,param_1 + 0x40);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 147fd2118 FUN_147fd2118 body=150 status=ok
// SIG undefined FUN_147fd2118(void)

void FUN_147fd2118(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if ((ulonglong)*(byte *)(param_1 + 0x30) == 1) {
    iVar4 = *(int *)(param_1 + 0x28);
    uVar2 = *(uint *)(param_1 + 0x2c);
  }
  else {
    (*(code *)(&PTR_LAB_14ad0ff10)[*(byte *)(param_1 + 0x30)])(param_1);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 4;
    *(undefined1 *)(param_1 + 0x30) = 1;
    iVar4 = 0;
    uVar2 = 4;
  }
  *(uint *)(param_1 + 0x28) = iVar4 + 1U;
  if (uVar2 < iVar4 + 1U) {
    FUN_147fd7cda(param_1,iVar4);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar3 = param_1;
  }
  lVar1 = *param_2;
  *(longlong *)(lVar3 + (longlong)iVar4 * 8) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
    return;
  }
  return;
}



// FUNCTION 147fd21b6 FUN_147fd21b6 body=136 status=ok
// SIG undefined FUN_147fd21b6(void)

undefined8 * FUN_147fd21b6(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_147fcfada(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x58);
    lVar3 = 0;
    do {
      FUN_147fcfada(param_2,*(undefined8 *)(lVar2 + 0x18 + lVar3));
      lVar3 = lVar3 + 0xb00;
    } while ((longlong)iVar1 * 0xb00 - lVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_147fcfada(param_2);
  }
  return param_2;
}



// FUNCTION 147fd223e FUN_147fd223e body=91 status=ok
// SIG undefined FUN_147fd223e(void)

void FUN_147fd223e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = FUN_145b67536();
    cVar2 = FUN_144a7ca96((longlong *)(param_1 + 8),uVar1);
    if (cVar2 != '\0') {
      lVar3 = *(longlong *)(param_1 + 8);
      goto LAB_147fd2254;
    }
  }
  lVar3 = 0;
LAB_147fd2254:
  uVar1 = FUN_147fdaba2(param_2,*(undefined8 *)(lVar3 + 0x38));
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_147fdaba2(param_2,*(undefined8 *)(lVar3 + 0x40));
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



// FUNCTION 147fd229a FUN_147fd229a body=174 status=ok
// SIG undefined FUN_147fd229a(void)

void FUN_147fd229a(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar1 = FUN_145b67536();
    cVar2 = FUN_144a7ca96((longlong *)(param_1 + 8),uVar1);
    if (cVar2 != '\0') {
      lVar4 = *(longlong *)(param_1 + 8);
      goto LAB_147fd22ac;
    }
  }
  lVar4 = 0;
LAB_147fd22ac:
  if (*(longlong *)(lVar4 + 0x40) != 0) {
    uVar1 = FUN_145b68694();
    cVar2 = FUN_144a7ca96((longlong *)(lVar4 + 0x40),uVar1);
    bVar3 = DAT_14c950c29;
    if (cVar2 == '\0') {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x40);
    }
    if (lVar4 == 0 || DAT_14c950c29 != 1) {
      *(longlong *)(param_1 + 0x30) = lVar4;
      if (lVar4 == 0) {
        return;
      }
    }
    else {
      FUN_14689c22e(lVar4);
      *(longlong *)(param_1 + 0x30) = lVar4;
      bVar3 = DAT_14c950c29;
    }
    lVar4 = *(longlong *)(lVar4 + 0x38);
    if ((lVar4 != 0) && ((bVar3 & 1) != 0)) {
      FUN_14689c22e(lVar4);
    }
    *(longlong *)(param_1 + 0x28) = lVar4;
  }
  return;
}



// FUNCTION 147fd2348 FUN_147fd2348 body=431 status=ok
// SIG undefined FUN_147fd2348(void)

void FUN_147fd2348(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_b68 [32];
  longlong local_b48;
  longlong local_b40;
  undefined1 local_b28 [136];
  undefined1 local_aa0 [2656];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b68;
  lVar3 = *(longlong *)(param_1 + 0x28);
  if ((lVar3 != 0) && (*(int *)(param_1 + 0x60) == 0)) {
    iVar1 = *(int *)(lVar3 + 0x88);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x80);
      lVar7 = 0;
      do {
        lVar5 = *(longlong *)(lVar3 + lVar7);
        if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x60), lVar5 != 0)) {
          FUN_147fdde46(lVar5,&local_b48);
          iVar2 = *(int *)(param_1 + 0x40);
          *(uint *)(param_1 + 0x40) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0x44) < iVar2 + 1U) {
            FUN_147fd807e((longlong *)(param_1 + 0x38),iVar2);
          }
          lVar5 = *(longlong *)(param_1 + 0x38);
          *(undefined4 *)(lVar5 + 8 + (longlong)iVar2 * 0xc) = (undefined4)local_b40;
          *(longlong *)(lVar5 + (longlong)iVar2 * 0xc) = local_b48;
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
    }
    FUN_14801743c(*(undefined8 *)(param_1 + 0x20),0);
    FUN_147fd24f8(&local_b48);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = FUN_140ff39b8();
    local_b48 = FUN_144a78ede(uVar4,uVar6);
    if (local_b48 != 0 && DAT_14c950c29 == 1) {
      FUN_14689c22e(local_b48);
    }
    local_b40 = *(longlong *)(param_1 + 0x30);
    if ((DAT_14c950c29 & 1) != 0) {
      if (local_b40 == 0) {
        local_b40 = 0;
      }
      else {
        FUN_14689c22e();
        local_b40 = *(longlong *)(param_1 + 0x30);
      }
    }
    FUN_147fd932e(local_aa0,param_1 + 0x38);
    iVar1 = *(int *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x60) = iVar1 + 1U;
    if (*(uint *)(param_1 + 100) < iVar1 + 1U) {
      FUN_147fd7fea((longlong *)(param_1 + 0x58),iVar1);
    }
    FUN_147fd7eae((longlong)iVar1 * 0xb00 + *(longlong *)(param_1 + 0x58),&local_b48);
    FUN_147fd6a5a(local_b28);
  }
  if ((local_40 ^ (ulonglong)auStack_b68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fd24f8 FUN_147fd24f8 body=104 status=ok
// SIG undefined FUN_147fd24f8(void)

undefined8 * FUN_147fd24f8(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_147fdbb04(param_1 + 4);
  FUN_147fe7938(param_1 + 0x15);
  param_1[0x40] = 0;
  param_1[0x42] = 0x200000000;
  FUN_144894d4c(param_1 + 0x44);
  *(undefined1 *)(param_1 + 0x15c) = 0;
  *(undefined2 *)(param_1 + 0x15e) = 0;
  return param_1;
}



// FUNCTION 147fd2566 FUN_147fd2566 body=438 status=ok
// SIG undefined FUN_147fd2566(void)

void FUN_147fd2566(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  void *_Dst;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined4 local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(int *)(param_1 + 0x60) != 0) && (0 < *(int *)(param_1 + 0x60))) &&
     (*(longlong *)(param_1 + 0x28) != 0)) {
    uVar11 = 0xffffffff;
    lVar8 = 0xa8;
    uVar9 = 0;
    local_90 = param_1 + 0x58;
    local_88 = param_2;
    do {
      lVar2 = *(longlong *)(param_1 + 0x58);
      lVar1 = lVar8 + lVar2;
      FUN_147fd2766(param_1,lVar1);
      FUN_147fe61ac(local_50,*(longlong *)(lVar2 + -0xa0 + lVar8) + 0x38);
      FUN_147fe61b4(local_50,lVar1,0);
      puVar5 = local_88;
      lVar3 = *(longlong *)(lVar2 + -0x90 + lVar8);
      if (lVar3 == 0) {
        thunk_FUN_147fe7e0c(*param_3,lVar1);
        uVar11 = uVar9 & 0xffffffff;
      }
      else {
        FUN_147fdae0a(lVar3,*local_88,lVar2 + lVar8 + -0x88);
        local_70 = *(undefined4 *)puVar5;
        uStack_6c = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_68 = *(undefined4 *)(puVar5 + 1);
        uStack_64 = *(undefined4 *)((longlong)puVar5 + 0xc);
        local_58 = 8;
        local_80 = *param_3;
        local_78 = 0;
        plVar4 = *(longlong **)(lVar2 + lVar8 + -0x90);
        local_60 = lVar1;
        (**(code **)(*plVar4 + 0x58))(plVar4,&local_70);
        if ((local_78._1_1_ & (byte)local_78) != 0) {
          uVar11 = uVar9 & 0xffffffff;
        }
      }
      lVar1 = local_90;
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0xb00;
    } while ((longlong)uVar9 < (longlong)*(int *)(param_1 + 0x60));
    iVar10 = (int)uVar11;
    if (0 < iVar10) {
      _Dst = *(void **)(param_1 + 0x58);
      FUN_147fd8150(_Dst,uVar11);
      iVar6 = *(int *)(param_1 + 0x60) - iVar10;
      iVar7 = iVar10;
      if (iVar6 != 0) {
        memmove(_Dst,(void *)(uVar11 * 0xb00 + (longlong)_Dst),(longlong)iVar6 * 0xb00);
        iVar7 = *(int *)(param_1 + 0x60);
      }
      *(int *)(param_1 + 0x60) = iVar7 - iVar10;
      FUN_147fd8112(lVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd271e FUN_147fd271e body=72 status=ok
// SIG undefined FUN_147fd271e(void)

void FUN_147fd271e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_147fdae0a(*(longlong *)(param_1 + 0x18),param_2,param_3);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_147fdae0a(*(longlong *)(param_1 + 0x20),param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 147fd2766 FUN_147fd2766 body=198 status=ok
// SIG undefined FUN_147fd2766(void)

void FUN_147fd2766(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x28) + 0x88);
  if (lVar7 != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x80);
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar6);
      if ((lVar2 != 0) && (plVar3 = *(longlong **)(lVar2 + 0x60), plVar3 != (longlong *)0x0)) {
        uVar5 = (**(code **)(*plVar3 + 0x2a8))(plVar3);
        uVar4 = (**(code **)(*plVar3 + 0x2a0))(plVar3);
        FUN_147fe7846(plVar3,&local_4c);
        local_58 = 1;
        FUN_147fe7cb2(param_2,local_4c,uVar4,uVar5);
      }
      lVar6 = lVar6 + 8;
    } while (lVar7 * 8 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd282e FUN_147fd282e body=165 status=ok
// SIG undefined FUN_147fd282e(void)

void FUN_147fd282e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x28,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x30,0,0);
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x58);
    lVar1 = (longlong)*(int *)(param_1 + 0x60) * 0xb00 + lVar2;
    do {
      (**(code **)(*param_2 + 0x88))(param_2,lVar2,0,0);
      (**(code **)(*param_2 + 0x88))(param_2,lVar2 + 8);
      (**(code **)(*param_2 + 0x88))(param_2,lVar2 + 0x10);
      lVar2 = lVar2 + 0xb00;
    } while (lVar2 != lVar1);
  }
  return;
}



// FUNCTION 147fd28d4 FUN_147fd28d4 body=96 status=ok
// SIG undefined FUN_147fd28d4(void)

undefined * FUN_147fd28d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb29328) {
    FUN_144b3d300(&DAT_14cb29328);
    if (DAT_14cb29328 == -1) {
      FUN_147fd2934(&DAT_14cb292d4);
      _Init_thread_footer(&DAT_14cb29328);
    }
  }
  return &DAT_14cb292d4;
}



// FUNCTION 147fd2934 FUN_147fd2934 body=669 status=ok
// SIG undefined FUN_147fd2934(void)

undefined8 * FUN_147fd2934(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = 0xffffffff;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 0xffffffff;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 0xffffffff;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0xffffffff;
  *(undefined2 *)(param_1 + 10) = 0;
  local_98 = 0x290e460f6e23348f;
  uStack_90 = 0xe7ca03f29432ed80;
  local_88 = 0x677545a4b7142bda;
  uStack_80 = 0x712d1f89b06cd07b;
  local_78 = 0xde7d4917dabc149b;
  uStack_70 = 0xe2a9846c820c7eeb;
  local_68 = 0x87b3464856bf6a94;
  uStack_60 = 0xdad2706184a4391b;
  local_58 = 0xc645490767b7828d;
  uStack_50 = 0xeb8c838c92beb40d;
  local_48 = 0x70f2404139edc23e;
  uStack_40 = 0x80f640d1971b7bd6;
  local_38 = 0x2ab5fca4;
  uStack_34 = 0xd62c494c;
  uStack_30 = 0xb700c8f9;
  uStack_2c = 0x8cd2d8e8;
  FUN_140056680(local_a8,&DAT_14ad0b128);
  uVar1 = FUN_1447addd0(&local_98,0x10);
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)((longlong)param_1 + 4) = 3;
  *(undefined1 *)((longlong)param_1 + 9) = 1;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_a8,L"Pitch");
  uVar1 = FUN_1447addd0(&local_88,0x10);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 2) = 3;
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_a8,L"Roll");
  uVar1 = FUN_1447addd0(&local_78,0x10);
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 3;
  *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_a8,L"Zoom");
  uVar1 = FUN_1447addd0(&local_68,0x10);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = 3;
  *(undefined1 *)((longlong)param_1 + 0x2d) = 1;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_a8,L"YawPitch");
  uVar1 = FUN_1447addd0(&local_58,0x10);
  *(undefined4 *)(param_1 + 6) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 5;
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_a8,L"FreezeControlRotation");
  uVar1 = FUN_1447addd0(&local_48,0x10);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x45) = 1;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_a8,L"ControlRotation");
  uVar1 = FUN_1447addd0(&local_38,0x10);
  *(undefined4 *)(param_1 + 9) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xb;
  *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd2bd2 FUN_147fd2bd2 body=158 status=ok
// SIG undefined FUN_147fd2bd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147fd2bd2(undefined *param_1,undefined4 param_2)

{
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb29338) && (FUN_144b3d300(&DAT_14cb29338), DAT_14cb29338 == -1)) {
    _DAT_14cb2932c = 0xffffffff;
    _DAT_14cb29334 = 0;
    _Init_thread_footer(&DAT_14cb29338);
  }
  switch(param_2) {
  case 1:
    break;
  case 2:
    param_1 = param_1 + 0xc;
    break;
  case 3:
    param_1 = param_1 + 0x18;
    break;
  case 4:
    param_1 = param_1 + 0x24;
    break;
  default:
    param_1 = &DAT_14cb2932c;
  }
  return param_1;
}



// FUNCTION 147fd2c70 FUN_147fd2c70 body=125 status=ok
// SIG undefined FUN_147fd2c70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147fd2c70(longlong param_1,int param_2)

{
  undefined *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb29348) {
    FUN_144b3d300(&DAT_14cb29348);
    if (DAT_14cb29348 == -1) {
      _DAT_14cb2933c = 0xffffffff;
      _DAT_14cb29344 = 0;
      _Init_thread_footer(&DAT_14cb29348);
    }
  }
  puVar1 = &DAT_14cb2933c;
  if (param_2 == 1) {
    puVar1 = (undefined *)(param_1 + 0x30);
  }
  return puVar1;
}



// FUNCTION 147fd2cfe FUN_147fd2cfe body=68 status=ok
// SIG undefined FUN_147fd2cfe(void)

void FUN_147fd2cfe(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd2d44 FUN_147fd2d44 body=214 status=ok
// SIG undefined FUN_147fd2d44(void)

void FUN_147fd2d44(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_2 + 8) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  FUN_1400b22c2(local_48,&DAT_149dfd136);
  FUN_1407ec8fc(&local_38,param_2,local_48);
  if ((longlong *)(param_1 + 0x10) == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x10) = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 0x18) = (undefined4)local_30;
    *(undefined4 *)(param_1 + 0x1c) = local_30._4_4_;
    local_30 = 0;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd2e2c FUN_147fd2e2c body=11 status=ok
// SIG undefined FUN_147fd2e2c(void)

void FUN_147fd2e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_147fd2ef2(param_1,param_2,0,param_3);
  return;
}



// FUNCTION 147fd2e38 FUN_147fd2e38 body=185 status=ok
// SIG undefined FUN_147fd2e38(void)

void FUN_147fd2e38(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_147fd6e9c(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_147fd6f54(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_147fd700c(param_1 + 0x20);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fd2ef2 FUN_147fd2ef2 body=184 status=ok
// SIG undefined FUN_147fd2ef2(void)

void FUN_147fd2ef2(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  int local_48;
  int iStack_44;
  undefined8 uStack_40;
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_2;
  uStack_40 = param_3;
  FUN_14023423e(local_38,param_4);
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_147fd8272(param_1,iVar2);
  }
  piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x20);
  *piVar1 = local_48;
  piVar1[1] = iStack_44;
  piVar1[2] = (int)uStack_40;
  piVar1[3] = uStack_40._4_4_;
  FUN_14023423e(piVar1 + 4,local_38);
  if (local_38[0] != (longlong *)0x0) {
    (**(code **)(*local_38[0] + 0x10))();
  }
  if (param_2 - 2U < 2) {
    *(undefined1 *)((longlong)param_1 + 0x21) = 1;
  }
  else if (param_2 == 1) {
    *(undefined1 *)((longlong)param_1 + 0x22) = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd2fb0 FUN_147fd2fb0 body=29 status=ok
// SIG undefined FUN_147fd2fb0(void)

void FUN_147fd2fb0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ad0ff20;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 147fd2fce FUN_147fd2fce body=90 status=ok
// SIG undefined FUN_147fd2fce(void)

void FUN_147fd2fce(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  param_1[1] = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = (longlong *)param_1[2];
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    param_1[2] = (longlong)plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000147fd3025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  return;
}



// FUNCTION 147fd3028 FUN_147fd3028 body=91 status=ok
// SIG undefined FUN_147fd3028(void)

void FUN_147fd3028(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  param_1[1] = *(longlong *)(param_2 + 8);
  plVar2 = *(longlong **)(param_2 + 0x10);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = (longlong *)param_1[2];
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    param_1[2] = (longlong)plVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000147fd3080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  return;
}



// FUNCTION 147fd3084 FUN_147fd3084 body=55 status=ok
// SIG undefined FUN_147fd3084(void)

void FUN_147fd3084(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  (**(code **)(*param_1 + 0x28))();
  plVar2 = (longlong *)param_1[2];
  param_1[1] = 0;
  param_1[2] = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147fd30b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147fd30bc FUN_147fd30bc body=56 status=ok
// SIG undefined FUN_147fd30bc(void)

void FUN_147fd30bc(longlong *param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 3,0,0);
                    /* WARNING: Could not recover jumptable at 0x000147fd30f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  return;
}



// FUNCTION 147fd310e FUN_147fd310e body=45 status=ok
// SIG undefined FUN_147fd310e(void)

longlong FUN_147fd310e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145bca52c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fd3142 FUN_147fd3142 body=45 status=ok
// SIG undefined FUN_147fd3142(void)

longlong FUN_147fd3142(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fd3170 FUN_147fd3170 body=45 status=ok
// SIG undefined FUN_147fd3170(void)

longlong FUN_147fd3170(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fd31ac FUN_147fd31ac body=45 status=ok
// SIG undefined FUN_147fd31ac(void)

longlong FUN_147fd31ac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fd31da FUN_147fd31da body=45 status=ok
// SIG undefined FUN_147fd31da(void)

longlong FUN_147fd31da(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fd3228 FUN_147fd3228 body=43 status=ok
// SIG undefined FUN_147fd3228(void)

undefined8 FUN_147fd3228(undefined8 param_1,int param_2)

{
  FUN_147fd74e2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 147fd325c FUN_147fd325c body=45 status=ok
// SIG undefined FUN_147fd325c(void)

longlong FUN_147fd325c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fd32aa FUN_147fd32aa body=43 status=ok
// SIG undefined FUN_147fd32aa(void)

undefined8 FUN_147fd32aa(undefined8 param_1,int param_2)

{
  FUN_147fd831e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 147fd32d8 FUN_147fd32d8 body=45 status=ok
// SIG undefined FUN_147fd32d8(void)

longlong FUN_147fd32d8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d3cf0e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fd3310 FUN_147fd3310 body=45 status=ok
// SIG undefined FUN_147fd3310(void)

longlong FUN_147fd3310(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145d3cf0e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fd3344 FUN_147fd3344 body=45 status=ok
// SIG undefined FUN_147fd3344(void)

longlong FUN_147fd3344(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145d3cf0e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147fd3392 FUN_147fd3392 body=69 status=ok
// SIG undefined FUN_147fd3392(void)

undefined8 * FUN_147fd3392(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14ad0ff20;
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
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147fd3426 FUN_147fd3426 body=54 status=ok
// SIG undefined FUN_147fd3426(void)

undefined1 FUN_147fd3426(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fd3524(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 147fd3484 FUN_147fd3484 body=59 status=ok
// SIG undefined FUN_147fd3484(void)

undefined8 FUN_147fd3484(longlong *param_1)

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



// FUNCTION 147fd3524 FUN_147fd3524 body=211 status=ok
// SIG undefined FUN_147fd3524(void)

undefined8 * FUN_147fd3524(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  lVar2 = param_2[1];
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[1];
    }
  }
  bVar1 = DAT_14c950c29;
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  lVar2 = param_2[3];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[3];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[3] = lVar2;
  param_1[4] = param_2[4];
  lVar2 = param_2[5];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[5];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[5] = lVar2;
  param_1[6] = param_2[6];
  lVar2 = param_2[7];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[7];
    }
  }
  param_1[7] = lVar2;
  return param_1;
}



// FUNCTION 147fd367a FUN_147fd367a body=59 status=ok
// SIG undefined FUN_147fd367a(void)

undefined8 FUN_147fd367a(longlong *param_1)

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



// FUNCTION 147fd374c FUN_147fd374c body=94 status=ok
// SIG undefined FUN_147fd374c(void)

undefined1 FUN_147fd374c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      *(undefined1 *)(param_2 + lVar2) = *(undefined1 *)(param_3 + lVar2);
      lVar1 = *(longlong *)(param_3 + 8 + lVar2);
      if (DAT_14c950c29 == '\x01') {
        if (lVar1 == 0) {
          lVar1 = 0;
        }
        else {
          FUN_14689c22e();
          lVar1 = *(longlong *)(param_3 + 8 + lVar2);
        }
      }
      *(longlong *)(param_2 + 8 + lVar2) = lVar1;
      lVar2 = lVar2 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fd37d6 FUN_147fd37d6 body=59 status=ok
// SIG undefined FUN_147fd37d6(void)

undefined8 FUN_147fd37d6(longlong *param_1)

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



// FUNCTION 147fd38b0 FUN_147fd38b0 body=101 status=ok
// SIG undefined FUN_147fd38b0(void)

undefined1 FUN_147fd38b0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_2 + lVar3) = *(undefined4 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fd3942 FUN_147fd3942 body=59 status=ok
// SIG undefined FUN_147fd3942(void)

undefined8 FUN_147fd3942(longlong *param_1)

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



// FUNCTION 147fd3a1c FUN_147fd3a1c body=105 status=ok
// SIG undefined FUN_147fd3a1c(void)

undefined1 FUN_147fd3a1c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_2 + lVar3) = *(undefined4 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fd3ab2 FUN_147fd3ab2 body=59 status=ok
// SIG undefined FUN_147fd3ab2(void)

undefined8 FUN_147fd3ab2(longlong *param_1)

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



// FUNCTION 147fd3b7c FUN_147fd3b7c body=105 status=ok
// SIG undefined FUN_147fd3b7c(void)

undefined1 FUN_147fd3b7c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fd3c12 FUN_147fd3c12 body=59 status=ok
// SIG undefined FUN_147fd3c12(void)

undefined8 FUN_147fd3c12(longlong *param_1)

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



// FUNCTION 147fd3cdc FUN_147fd3cdc body=101 status=ok
// SIG undefined FUN_147fd3cdc(void)

undefined1 FUN_147fd3cdc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fd3d6e FUN_147fd3d6e body=59 status=ok
// SIG undefined FUN_147fd3d6e(void)

undefined8 FUN_147fd3d6e(longlong *param_1)

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



// FUNCTION 147fd3e38 FUN_147fd3e38 body=109 status=ok
// SIG undefined FUN_147fd3e38(void)

undefined1 FUN_147fd3e38(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      puVar2 = (undefined4 *)(param_3 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar1 = (undefined4 *)(param_2 + lVar8);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      lVar7 = *(longlong *)(param_3 + 0x10 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_14689c22e();
          lVar7 = *(longlong *)(param_3 + 0x10 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar8 + 0x10) = lVar7;
      lVar8 = lVar8 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fd3ed2 FUN_147fd3ed2 body=59 status=ok
// SIG undefined FUN_147fd3ed2(void)

undefined8 FUN_147fd3ed2(longlong *param_1)

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



// FUNCTION 147fd3f9c FUN_147fd3f9c body=117 status=ok
// SIG undefined FUN_147fd3f9c(void)

undefined1 FUN_147fd3f9c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 0x10 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 0x10 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 + 0x10) = lVar2;
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fd403e FUN_147fd403e body=59 status=ok
// SIG undefined FUN_147fd403e(void)

undefined8 FUN_147fd403e(longlong *param_1)

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



// FUNCTION 147fd4108 FUN_147fd4108 body=119 status=ok
// SIG undefined FUN_147fd4108(void)

undefined1 FUN_147fd4108(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + 0x10 + lVar8) = *(undefined8 *)(param_3 + 0x10 + lVar8);
      puVar2 = (undefined4 *)(param_3 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar1 = (undefined4 *)(param_2 + lVar8);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      lVar7 = *(longlong *)(param_3 + 0x18 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_14689c22e();
          lVar7 = *(longlong *)(param_3 + 0x18 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar8 + 0x18) = lVar7;
      lVar8 = lVar8 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fd41ac FUN_147fd41ac body=59 status=ok
// SIG undefined FUN_147fd41ac(void)

undefined8 FUN_147fd41ac(longlong *param_1)

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



// FUNCTION 147fd4276 FUN_147fd4276 body=109 status=ok
// SIG undefined FUN_147fd4276(void)

undefined1 FUN_147fd4276(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      puVar2 = (undefined4 *)(param_3 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar1 = (undefined4 *)(param_2 + lVar8);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      lVar7 = *(longlong *)(param_3 + 0x10 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_14689c22e();
          lVar7 = *(longlong *)(param_3 + 0x10 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar8 + 0x10) = lVar7;
      lVar8 = lVar8 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fd4310 FUN_147fd4310 body=59 status=ok
// SIG undefined FUN_147fd4310(void)

undefined8 FUN_147fd4310(longlong *param_1)

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



// FUNCTION 147fd43da FUN_147fd43da body=121 status=ok
// SIG undefined FUN_147fd43da(void)

undefined1 FUN_147fd43da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (param_4 != 0) {
    lVar12 = 0;
    bVar10 = DAT_14c950c29;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar12);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x10 + lVar12);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x10 + lVar12);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      puVar1 = (undefined4 *)(param_2 + lVar12);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      lVar11 = *(longlong *)(param_3 + 0x20 + lVar12);
      if ((bVar10 & 1) != 0) {
        if (lVar11 == 0) {
          lVar11 = 0;
        }
        else {
          FUN_14689c22e();
          lVar11 = *(longlong *)(param_3 + 0x20 + lVar12);
          bVar10 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar12 + 0x20) = lVar11;
      lVar12 = lVar12 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fd4480 FUN_147fd4480 body=59 status=ok
// SIG undefined FUN_147fd4480(void)

undefined8 FUN_147fd4480(longlong *param_1)

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



// FUNCTION 147fd454a FUN_147fd454a body=117 status=ok
// SIG undefined FUN_147fd454a(void)

undefined1 FUN_147fd454a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 0x10 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 0x10 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 + 0x10) = lVar2;
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fd45ec FUN_147fd45ec body=59 status=ok
// SIG undefined FUN_147fd45ec(void)

undefined8 FUN_147fd45ec(longlong *param_1)

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



// FUNCTION 147fd46b6 FUN_147fd46b6 body=119 status=ok
// SIG undefined FUN_147fd46b6(void)

undefined1 FUN_147fd46b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + 0x10 + lVar8) = *(undefined8 *)(param_3 + 0x10 + lVar8);
      puVar2 = (undefined4 *)(param_3 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar1 = (undefined4 *)(param_2 + lVar8);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      lVar7 = *(longlong *)(param_3 + 0x18 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_14689c22e();
          lVar7 = *(longlong *)(param_3 + 0x18 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar8 + 0x18) = lVar7;
      lVar8 = lVar8 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fd475a FUN_147fd475a body=59 status=ok
// SIG undefined FUN_147fd475a(void)

undefined8 FUN_147fd475a(longlong *param_1)

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



// FUNCTION 147fd4860 FUN_147fd4860 body=133 status=ok
// SIG undefined FUN_147fd4860(void)

undefined1 FUN_147fd4860(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  byte bVar14;
  longlong lVar15;
  longlong lVar16;
  
  if (param_4 != 0) {
    lVar16 = 0;
    bVar14 = DAT_14c950c29;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar16);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x10 + lVar16);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      puVar1 = (undefined4 *)(param_3 + 0x20 + lVar16);
      uVar11 = puVar1[1];
      uVar12 = puVar1[2];
      uVar13 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 0x20 + lVar16);
      *puVar2 = *puVar1;
      puVar2[1] = uVar11;
      puVar2[2] = uVar12;
      puVar2[3] = uVar13;
      puVar1 = (undefined4 *)(param_2 + 0x10 + lVar16);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      puVar1 = (undefined4 *)(param_2 + lVar16);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      lVar15 = *(longlong *)(param_3 + 0x30 + lVar16);
      if ((bVar14 & 1) != 0) {
        if (lVar15 == 0) {
          lVar15 = 0;
        }
        else {
          FUN_14689c22e();
          lVar15 = *(longlong *)(param_3 + 0x30 + lVar16);
          bVar14 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar16 + 0x30) = lVar15;
      lVar16 = lVar16 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fd4912 FUN_147fd4912 body=59 status=ok
// SIG undefined FUN_147fd4912(void)

undefined8 FUN_147fd4912(longlong *param_1)

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



// FUNCTION 147fd4a44 FUN_147fd4a44 body=134 status=ok
// SIG undefined FUN_147fd4a44(void)

undefined8 FUN_147fd4a44(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    bVar3 = DAT_14c950c29;
    do {
      plVar1 = (longlong *)(param_3 + 0x60 + lVar6);
      plVar4 = plVar1 + -0xc;
      plVar5 = (longlong *)(param_2 + lVar6);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *plVar5 = *plVar4;
        plVar4 = plVar4 + 1;
        plVar5 = plVar5 + 1;
      }
      lVar2 = *plVar1;
      if ((bVar3 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + 0x60 + lVar6);
          bVar3 = DAT_14c950c29;
        }
      }
      ((longlong *)(param_2 + lVar6))[0xc] = lVar2;
      lVar6 = lVar6 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147fd4af6 FUN_147fd4af6 body=59 status=ok
// SIG undefined FUN_147fd4af6(void)

undefined8 FUN_147fd4af6(longlong *param_1)

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



// FUNCTION 147fd4c02 FUN_147fd4c02 body=59 status=ok
// SIG undefined FUN_147fd4c02(void)

undefined8 FUN_147fd4c02(longlong *param_1)

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



// FUNCTION 147fd4d28 FUN_147fd4d28 body=59 status=ok
// SIG undefined FUN_147fd4d28(void)

undefined8 FUN_147fd4d28(longlong *param_1)

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



// FUNCTION 147fd4e3a FUN_147fd4e3a body=59 status=ok
// SIG undefined FUN_147fd4e3a(void)

undefined8 FUN_147fd4e3a(longlong *param_1)

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



// FUNCTION 147fd4f04 FUN_147fd4f04 body=54 status=ok
// SIG undefined FUN_147fd4f04(void)

undefined1 FUN_147fd4f04(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fd5002(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147fd4f62 FUN_147fd4f62 body=59 status=ok
// SIG undefined FUN_147fd4f62(void)

undefined8 FUN_147fd4f62(longlong *param_1)

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



// FUNCTION 147fd5002 FUN_147fd5002 body=91 status=ok
// SIG undefined FUN_147fd5002(void)

longlong * FUN_147fd5002(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_14689c22e();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 147fd5086 FUN_147fd5086 body=90 status=ok
// SIG undefined FUN_147fd5086(void)

undefined1 FUN_147fd5086(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147fd5108 FUN_147fd5108 body=95 status=ok
// SIG undefined FUN_147fd5108(void)

uint FUN_147fd5108(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  local_28 = 0;
  FUN_14485c47a(&local_28,*param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28._4_4_ ^ (uint)local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd51f6 FUN_147fd51f6 body=90 status=ok
// SIG undefined FUN_147fd51f6(void)

undefined1 FUN_147fd51f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147fd5278 FUN_147fd5278 body=95 status=ok
// SIG undefined FUN_147fd5278(void)

uint FUN_147fd5278(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  local_28 = 0;
  FUN_14485c47a(&local_28,*param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28._4_4_ ^ (uint)local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd5366 FUN_147fd5366 body=90 status=ok
// SIG undefined FUN_147fd5366(void)

undefined1 FUN_147fd5366(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147fd53e8 FUN_147fd53e8 body=95 status=ok
// SIG undefined FUN_147fd53e8(void)

uint FUN_147fd53e8(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  local_28 = 0;
  FUN_14485c47a(&local_28,*param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28._4_4_ ^ (uint)local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd54d6 FUN_147fd54d6 body=90 status=ok
// SIG undefined FUN_147fd54d6(void)

undefined1 FUN_147fd54d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147fd5558 FUN_147fd5558 body=95 status=ok
// SIG undefined FUN_147fd5558(void)

uint FUN_147fd5558(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  local_28 = 0;
  FUN_14485c47a(&local_28,*param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28._4_4_ ^ (uint)local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd5646 FUN_147fd5646 body=90 status=ok
// SIG undefined FUN_147fd5646(void)

undefined1 FUN_147fd5646(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147fd56c8 FUN_147fd56c8 body=95 status=ok
// SIG undefined FUN_147fd56c8(void)

uint FUN_147fd56c8(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  local_28 = 0;
  FUN_14485c47a(&local_28,*param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28._4_4_ ^ (uint)local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd57b6 FUN_147fd57b6 body=90 status=ok
// SIG undefined FUN_147fd57b6(void)

undefined1 FUN_147fd57b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147fd5838 FUN_147fd5838 body=95 status=ok
// SIG undefined FUN_147fd5838(void)

uint FUN_147fd5838(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  local_28 = 0;
  FUN_14485c47a(&local_28,*param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28._4_4_ ^ (uint)local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd5926 FUN_147fd5926 body=90 status=ok
// SIG undefined FUN_147fd5926(void)

undefined1 FUN_147fd5926(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147fd59a8 FUN_147fd59a8 body=95 status=ok
// SIG undefined FUN_147fd59a8(void)

uint FUN_147fd59a8(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  local_28 = 0;
  FUN_14485c47a(&local_28,*param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28._4_4_ ^ (uint)local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd5a96 FUN_147fd5a96 body=90 status=ok
// SIG undefined FUN_147fd5a96(void)

undefined1 FUN_147fd5a96(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147fd5b18 FUN_147fd5b18 body=95 status=ok
// SIG undefined FUN_147fd5b18(void)

uint FUN_147fd5b18(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  local_28 = 0;
  FUN_14485c47a(&local_28,*param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28._4_4_ ^ (uint)local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd5c06 FUN_147fd5c06 body=90 status=ok
// SIG undefined FUN_147fd5c06(void)

undefined1 FUN_147fd5c06(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147fd5c88 FUN_147fd5c88 body=95 status=ok
// SIG undefined FUN_147fd5c88(void)

uint FUN_147fd5c88(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  local_28 = 0;
  FUN_14485c47a(&local_28,*param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28._4_4_ ^ (uint)local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd5d76 FUN_147fd5d76 body=90 status=ok
// SIG undefined FUN_147fd5d76(void)

undefined1 FUN_147fd5d76(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147fd5df8 FUN_147fd5df8 body=95 status=ok
// SIG undefined FUN_147fd5df8(void)

uint FUN_147fd5df8(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  local_28 = 0;
  FUN_14485c47a(&local_28,*param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28._4_4_ ^ (uint)local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd5ee6 FUN_147fd5ee6 body=90 status=ok
// SIG undefined FUN_147fd5ee6(void)

undefined1 FUN_147fd5ee6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147fd5f68 FUN_147fd5f68 body=95 status=ok
// SIG undefined FUN_147fd5f68(void)

uint FUN_147fd5f68(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  local_28 = 0;
  FUN_14485c47a(&local_28,*param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28._4_4_ ^ (uint)local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd6056 FUN_147fd6056 body=90 status=ok
// SIG undefined FUN_147fd6056(void)

undefined1 FUN_147fd6056(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147fd60d8 FUN_147fd60d8 body=95 status=ok
// SIG undefined FUN_147fd60d8(void)

uint FUN_147fd60d8(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  local_28 = 0;
  FUN_14485c47a(&local_28,*param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28._4_4_ ^ (uint)local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd61c6 FUN_147fd61c6 body=90 status=ok
// SIG undefined FUN_147fd61c6(void)

undefined1 FUN_147fd61c6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147fd6248 FUN_147fd6248 body=95 status=ok
// SIG undefined FUN_147fd6248(void)

uint FUN_147fd6248(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  local_28 = 0;
  FUN_14485c47a(&local_28,*param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28._4_4_ ^ (uint)local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd6336 FUN_147fd6336 body=90 status=ok
// SIG undefined FUN_147fd6336(void)

undefined1 FUN_147fd6336(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147fd63b8 FUN_147fd63b8 body=95 status=ok
// SIG undefined FUN_147fd63b8(void)

uint FUN_147fd63b8(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28);
  local_28 = 0;
  FUN_14485c47a(&local_28,*param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28._4_4_ ^ (uint)local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd64ea FUN_147fd64ea body=64 status=ok
// SIG undefined FUN_147fd64ea(void)

undefined4 FUN_147fd64ea(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd65ee FUN_147fd65ee body=31 status=ok
// SIG undefined FUN_147fd65ee(void)

undefined1
FUN_147fd65ee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_147fe877d(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 147fd662a FUN_147fd662a body=59 status=ok
// SIG undefined FUN_147fd662a(void)

undefined8 FUN_147fd662a(longlong *param_1)

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



// FUNCTION 147fd66e4 FUN_147fd66e4 body=47 status=ok
// SIG undefined FUN_147fd66e4(void)

void FUN_147fd66e4(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fd672a FUN_147fd672a body=67 status=ok
// SIG undefined FUN_147fd672a(void)

undefined1 FUN_147fd672a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147fd6846(param_2,param_3);
    FUN_147fd68a0(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 147fd676e FUN_147fd676e body=31 status=ok
// SIG undefined FUN_147fd676e(void)

undefined1
FUN_147fd676e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_147fdd752(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 147fd67aa FUN_147fd67aa body=59 status=ok
// SIG undefined FUN_147fd67aa(void)

undefined8 FUN_147fd67aa(longlong *param_1)

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



// FUNCTION 147fd6846 FUN_147fd6846 body=89 status=ok
// SIG undefined FUN_147fd6846(void)

undefined8 * FUN_147fd6846(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147fd68f0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 147fd68a0 FUN_147fd68a0 body=79 status=ok
// SIG undefined FUN_147fd68a0(void)

undefined8 * FUN_147fd68a0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147fd6964(param_1,iVar1);
      FUN_147fd69c6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147fd68f0 FUN_147fd68f0 body=115 status=ok
// SIG undefined FUN_147fd68f0(void)

void FUN_147fd68f0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147fd6964 FUN_147fd6964 body=98 status=ok
// SIG undefined FUN_147fd6964(void)

void FUN_147fd6964(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147fd69c6 FUN_147fd69c6 body=78 status=ok
// SIG undefined FUN_147fd69c6(void)

void FUN_147fd69c6(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147fd6a16 FUN_147fd6a16 body=51 status=ok
// SIG undefined FUN_147fd6a16(void)

void FUN_147fd6a16(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147fd6a5a FUN_147fd6a5a body=79 status=ok
// SIG undefined FUN_147fd6a5a(void)

void FUN_147fd6a5a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xab0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FUN_1400020a8();
  }
  FUN_147fe79c8(param_1 + 0x88);
  return;
}



// FUNCTION 147fd6aaa FUN_147fd6aaa body=69 status=ok
// SIG undefined FUN_147fd6aaa(void)

void FUN_147fd6aaa(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_147fd6b26(param_1 + 2);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fd6af0 FUN_147fd6af0 body=54 status=ok
// SIG undefined FUN_147fd6af0(void)

void FUN_147fd6af0(longlong *param_1)

{
  FUN_147fd6bde(param_1,1);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fd6b26 FUN_147fd6b26 body=54 status=ok
// SIG undefined FUN_147fd6b26(void)

void FUN_147fd6b26(longlong *param_1)

{
  FUN_147fd6b5c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fd6b5c FUN_147fd6b5c body=128 status=ok
// SIG undefined FUN_147fd6b5c(void)

void FUN_147fd6b5c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147fd6bde FUN_147fd6bde body=450 status=ok
// SIG undefined FUN_147fd6bde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147fd6bde(longlong *param_1,char param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 uVar11;
  undefined1 auVar10 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  lVar9 = param_1[3];
  if ((longlong)(int)lVar9 != 0) {
    lVar6 = param_1[2];
    lVar7 = 0;
    do {
      (**(code **)(**(longlong **)(lVar6 + lVar7) + 0x10))(*(longlong **)(lVar6 + lVar7),0);
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar9 * 8 != lVar7);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    FUN_147fd6da0(param_1 + 2,0);
  }
  auVar3 = _DAT_149931e80;
  lVar9 = *param_1;
  iVar2 = (int)param_1[1];
  if (param_2 == '\0') {
    if (iVar2 != 0) {
      uVar1 = (longlong)iVar2 * 0x18 - 0x18;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar1;
      uVar8 = SUB164(auVar12 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
      uVar11 = (undefined4)(uVar1 / 0x180000000);
      auVar13._0_8_ = CONCAT44(uVar11,uVar8);
      auVar13._8_4_ = uVar8;
      auVar13._12_4_ = uVar11;
      auVar10._0_8_ = auVar13._0_8_ >> 4;
      auVar10._8_8_ = auVar13._8_8_ >> 4;
      puVar5 = (undefined4 *)(lVar9 + 0x58);
      uVar4 = 0;
      auVar12 = pmovsxbq(in_XMM1,0x302);
      auVar13 = pmovsxbq(in_XMM2,0x100);
      auVar10 = auVar10 | _DAT_149931e80;
      do {
        lVar9 = auVar10._0_8_;
        lVar6 = auVar10._8_8_;
        if ((bool)(~(lVar9 < (longlong)(uVar4 ^ auVar3._0_8_)) & 1)) {
          puVar5[-0x12] = 0;
        }
        auVar14._8_4_ = (int)uVar4;
        auVar14._0_8_ = uVar4;
        auVar14._12_4_ = (int)(uVar4 >> 0x20);
        if ((longlong)((auVar14._8_8_ | auVar13._8_8_) ^ auVar3._8_8_) <= lVar6) {
          puVar5[-0xc] = 0;
        }
        auVar14 = (auVar14 | auVar12) ^ auVar3;
        if (auVar14._0_8_ <= lVar9) {
          puVar5[-6] = 0;
        }
        if (auVar14._8_8_ <= lVar6) {
          *puVar5 = 0;
        }
        uVar4 = uVar4 + 4;
        puVar5 = puVar5 + 0x18;
      } while ((uVar1 / 0x18 + 4 & 0xfffffffffffffffc) != uVar4);
    }
  }
  else {
    if (iVar2 != 0) {
      lVar6 = 0;
      do {
        FUN_1400020a8(*(undefined8 *)(lVar9 + lVar6));
        lVar6 = lVar6 + 0x18;
      } while ((longlong)iVar2 * 0x18 != lVar6);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_147fd6e00(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 147fd6da0 FUN_147fd6da0 body=96 status=ok
// SIG undefined FUN_147fd6da0(void)

void FUN_147fd6da0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147fd6e00 FUN_147fd6e00 body=113 status=ok
// SIG undefined FUN_147fd6e00(void)

void FUN_147fd6e00(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 147fd6e9c FUN_147fd6e9c body=54 status=ok
// SIG undefined FUN_147fd6e9c(void)

void FUN_147fd6e9c(longlong *param_1)

{
  FUN_147fd6ed2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fd6ed2 FUN_147fd6ed2 body=128 status=ok
// SIG undefined FUN_147fd6ed2(void)

void FUN_147fd6ed2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147fd6f54 FUN_147fd6f54 body=54 status=ok
// SIG undefined FUN_147fd6f54(void)

void FUN_147fd6f54(longlong *param_1)

{
  FUN_147fd6f8a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fd6f8a FUN_147fd6f8a body=128 status=ok
// SIG undefined FUN_147fd6f8a(void)

void FUN_147fd6f8a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147fd700c FUN_147fd700c body=54 status=ok
// SIG undefined FUN_147fd700c(void)

void FUN_147fd700c(longlong *param_1)

{
  FUN_147fd7042(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fd7042 FUN_147fd7042 body=128 status=ok
// SIG undefined FUN_147fd7042(void)

void FUN_147fd7042(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147fd710a FUN_147fd710a body=34 status=ok
// SIG undefined FUN_147fd710a(void)

undefined8 FUN_147fd710a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 147fd7130 FUN_147fd7130 body=132 status=ok
// SIG undefined FUN_147fd7130(void)

undefined8 * FUN_147fd7130(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x48,8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 2;
  *puVar2 = &PTR_LAB_14ad0f5e0;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 147fd71b4 FUN_147fd71b4 body=228 status=ok
// SIG undefined FUN_147fd71b4(void)

void FUN_147fd71b4(longlong *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  iVar8 = (int)param_1[1];
  if ((longlong)iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    puVar7 = (uint *)(*param_1 + 0x10);
    do {
      uVar3 = (ulonglong)*puVar7 + *(longlong *)(puVar7 + -4) + ((ulonglong)param_3 - 1) &
              -(ulonglong)param_3;
      uVar9 = ((int)uVar3 + param_2) - (int)*(longlong *)(puVar7 + -4);
      if (uVar9 <= puVar7[-1]) {
        *puVar7 = uVar9;
        if (uVar3 != 0) {
          return;
        }
        iVar8 = (int)param_1[1];
        break;
      }
      puVar4 = puVar7 + 2;
      puVar7 = puVar7 + 6;
    } while (puVar4 != (uint *)(*param_1 + (longlong)iVar8 * 0x18));
  }
  uVar9 = 0x80;
  if (0x80 < param_2) {
    uVar9 = param_2;
  }
  uVar10 = 0x20;
  if (0x20 < param_3) {
    uVar10 = param_3;
  }
  *(uint *)(param_1 + 1) = iVar8 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
    FUN_147fd7298(param_1,iVar8);
  }
  lVar2 = *param_1;
  lVar5 = (longlong)iVar8;
  puVar1 = (undefined8 *)(lVar2 + lVar5 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar5 * 0x18) = 0;
  uVar6 = FUN_14001cc68(uVar9,uVar10);
  *(undefined8 *)(lVar2 + lVar5 * 0x18) = uVar6;
  *(uint *)(lVar2 + 8 + lVar5 * 0x18) = uVar10;
  *(uint *)(lVar2 + 0xc + lVar5 * 0x18) = uVar9;
  *(uint *)(lVar2 + 0x10 + lVar5 * 0x18) = param_2;
  return;
}



// FUNCTION 147fd7298 FUN_147fd7298 body=147 status=ok
// SIG undefined FUN_147fd7298(void)

void FUN_147fd7298(longlong param_1,int param_2)

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



// FUNCTION 147fd7356 FUN_147fd7356 body=43 status=ok
// SIG undefined FUN_147fd7356(void)

undefined8 FUN_147fd7356(undefined8 param_1,int param_2)

{
  FUN_147fd74e2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 147fd7382 FUN_147fd7382 body=132 status=ok
// SIG undefined FUN_147fd7382(void)

void FUN_147fd7382(longlong param_1,int param_2)

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



// FUNCTION 147fd7408 FUN_147fd7408 body=132 status=ok
// SIG undefined FUN_147fd7408(void)

undefined8 * FUN_147fd7408(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x48,8);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 2;
  *puVar2 = &PTR_LAB_14ad0f640;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 147fd74b6 FUN_147fd74b6 body=43 status=ok
// SIG undefined FUN_147fd74b6(void)

undefined8 FUN_147fd74b6(undefined8 param_1,int param_2)

{
  FUN_147fd74e2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 147fd74e2 FUN_147fd74e2 body=90 status=ok
// SIG undefined FUN_147fd74e2(void)

void FUN_147fd74e2(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ad0ac30;
  FUN_147fcf4e6(param_1,*(undefined4 *)(param_1 + 5));
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_147fd75f6(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fd75f6 FUN_147fd75f6 body=41 status=ok
// SIG undefined FUN_147fd75f6(void)

void FUN_147fd75f6(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147fd0c8c(param_1);
    param_1 = param_1 + 0xba0;
  }
  return;
}



// FUNCTION 147fd7620 FUN_147fd7620 body=116 status=ok
// SIG undefined FUN_147fd7620(void)

void FUN_147fd7620(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar4;
    FUN_147fd7696(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147fd7696 FUN_147fd7696 body=133 status=ok
// SIG undefined FUN_147fd7696(void)

void FUN_147fd7696(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 147fd771c FUN_147fd771c body=132 status=ok
// SIG undefined FUN_147fd771c(void)

void FUN_147fd771c(longlong param_1,int param_2)

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



// FUNCTION 147fd77a2 FUN_147fd77a2 body=62 status=ok
// SIG undefined FUN_147fd77a2(void)

void FUN_147fd77a2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147fd77e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xba0,0x10);
  }
  return;
}



// FUNCTION 147fd77e0 FUN_147fd77e0 body=113 status=ok
// SIG undefined FUN_147fd77e0(void)

ulonglong FUN_147fd77e0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xba0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147fd7819;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xba0,0x10);
      param_2 = param_2 / 0xba0;
    }
  }
LAB_147fd7819:
  return param_2 & 0xffffffff;
}



// FUNCTION 147fd7852 FUN_147fd7852 body=164 status=ok
// SIG undefined FUN_147fd7852(void)

void FUN_147fd7852(longlong *param_1,undefined8 param_2)

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
        goto LAB_147fd78d2;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147fd78d2:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147fd78f6 FUN_147fd78f6 body=393 status=ok
// SIG undefined FUN_147fd78f6(void)

undefined8 * FUN_147fd78f6(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = param_2[2];
  param_1[2] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  bVar1 = DAT_14c950c29;
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  if ((lVar2 != 0 & bVar1) == 1) {
    FUN_14689c22e();
  }
  FUN_147fd7b16(param_1 + 4,param_2 + 4);
  param_1[8] = param_2[8];
  param_1[9] = 0;
  param_1[9] = param_2[9];
  param_2[9] = 0;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  param_2[10] = 0;
  FUN_147fd7b82(param_1 + 0xb,param_2 + 0xb);
  memcpy(param_1 + 0x16,param_2 + 0x16,0x88);
  FUN_147fe796c(param_1 + 0x27,param_2 + 0x27);
  param_1[0x52] = 0;
  lVar2 = param_2[0x52];
  if (lVar2 == 0) {
    memmove(param_1 + 0x36,param_2 + 0x36,0xe0);
    lVar2 = param_2[0x52];
  }
  param_1[0x52] = lVar2;
  param_2[0x52] = 0;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)((longlong)param_1 + 0x2a4) = *(undefined4 *)((longlong)param_2 + 0x2a4);
  param_2[0x54] = 0x200000000;
  FUN_1472d1e8c(param_1 + 0x56,param_2 + 0x56);
  *(undefined1 *)(param_1 + 0x16e) = *(undefined1 *)(param_2 + 0x16e);
  *(undefined2 *)(param_1 + 0x170) = *(undefined2 *)(param_2 + 0x170);
  *(undefined4 *)(param_1 + 0x172) = *(undefined4 *)(param_2 + 0x172);
  *(undefined2 *)((longlong)param_1 + 0xb94) = *(undefined2 *)((longlong)param_2 + 0xb94);
  return param_1;
}



// FUNCTION 147fd7a80 FUN_147fd7a80 body=149 status=ok
// SIG undefined FUN_147fd7a80(void)

void FUN_147fd7a80(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xba0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xba0)) {
      uVar5 = uVar4 / 0xba0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xba0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147fd7b16 FUN_147fd7b16 body=108 status=ok
// SIG undefined FUN_147fd7b16(void)

undefined8 * FUN_147fd7b16(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  return param_1;
}



// FUNCTION 147fd7b82 FUN_147fd7b82 body=123 status=ok
// SIG undefined FUN_147fd7b82(void)

undefined8 * FUN_147fd7b82(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_147fd7bfe();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 147fd7bfe FUN_147fd7bfe body=146 status=ok
// SIG undefined FUN_147fd7bfe(void)

longlong * FUN_147fd7bfe(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 147fd7c90 FUN_147fd7c90 body=73 status=ok
// SIG undefined FUN_147fd7c90(void)

void FUN_147fd7c90(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147fd7cda FUN_147fd7cda body=116 status=ok
// SIG undefined FUN_147fd7cda(void)

void FUN_147fd7cda(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar4;
    FUN_147fd7d50(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147fd7d50 FUN_147fd7d50 body=133 status=ok
// SIG undefined FUN_147fd7d50(void)

void FUN_147fd7d50(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 147fd7dd6 FUN_147fd7dd6 body=145 status=ok
// SIG undefined FUN_147fd7dd6(void)

undefined8 * FUN_147fd7dd6(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_147fd71b4(param_1,0x68,8);
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 2;
  *puVar2 = &PTR_LAB_14ad0b0d0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  FUN_147fdabdc(puVar2,1);
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_147fd7382((longlong *)(param_1 + 0x10),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = puVar2;
  return puVar2;
}



// FUNCTION 147fd7eae FUN_147fd7eae body=315 status=ok
// SIG undefined FUN_147fd7eae(void)

longlong * FUN_147fd7eae(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  bVar1 = DAT_14c950c29;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if ((lVar2 != 0 & bVar1) == 1) {
    FUN_14689c22e();
    bVar1 = DAT_14c950c29;
  }
  lVar2 = param_2[2];
  param_1[2] = lVar2;
  if ((lVar2 != 0 & bVar1) == 1) {
    FUN_14689c22e();
  }
  param_1[3] = param_2[3];
  memcpy(param_1 + 4,param_2 + 4,0x88);
  FUN_147fe796c(param_1 + 0x15,param_2 + 0x15);
  param_1[0x40] = 0;
  lVar2 = param_2[0x40];
  if (lVar2 == 0) {
    memmove(param_1 + 0x24,param_2 + 0x24,0xe0);
    lVar2 = param_2[0x40];
  }
  param_1[0x40] = lVar2;
  param_2[0x40] = 0;
  *(int *)(param_1 + 0x42) = (int)param_2[0x42];
  *(undefined4 *)((longlong)param_1 + 0x214) = *(undefined4 *)((longlong)param_2 + 0x214);
  param_2[0x42] = 0x200000000;
  FUN_1472d1e8c(param_1 + 0x44,param_2 + 0x44);
  *(char *)(param_1 + 0x15c) = (char)param_2[0x15c];
  *(short *)(param_1 + 0x15e) = (short)param_2[0x15e];
  return param_1;
}



// FUNCTION 147fd7fea FUN_147fd7fea body=146 status=ok
// SIG undefined FUN_147fd7fea(void)

void FUN_147fd7fea(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb00,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb00)) {
      uVar5 = uVar4 / 0xb00 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb00,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147fd807e FUN_147fd807e body=147 status=ok
// SIG undefined FUN_147fd807e(void)

void FUN_147fd807e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147fd8112 FUN_147fd8112 body=62 status=ok
// SIG undefined FUN_147fd8112(void)

void FUN_147fd8112(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147fd817e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xb00,0x10);
  }
  return;
}



// FUNCTION 147fd8150 FUN_147fd8150 body=45 status=ok
// SIG undefined FUN_147fd8150(void)

void FUN_147fd8150(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    do {
      FUN_147fd6a5a(param_1);
      param_1 = param_1 + 0xb00;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147fd817e FUN_147fd817e body=110 status=ok
// SIG undefined FUN_147fd817e(void)

ulonglong FUN_147fd817e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xb00) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147fd81b7;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xb00,0x10);
      param_2 = param_2 / 0xb00;
    }
  }
LAB_147fd81b7:
  return param_2 & 0xffffffff;
}



// FUNCTION 147fd81ec FUN_147fd81ec body=132 status=ok
// SIG undefined FUN_147fd81ec(void)

void FUN_147fd81ec(longlong param_1,int param_2)

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



// FUNCTION 147fd8272 FUN_147fd8272 body=132 status=ok
// SIG undefined FUN_147fd8272(void)

void FUN_147fd8272(longlong param_1,int param_2)

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



// FUNCTION 147fd831e FUN_147fd831e body=84 status=ok
// SIG undefined FUN_147fd831e(void)

void FUN_147fd831e(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14ad0b0d0;
  FUN_147fd8150(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fd8372 FUN_147fd8372 body=226 status=ok
// SIG undefined FUN_147fd8372(void)

undefined8 * FUN_147fd8372(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0x408f400000000000;
  param_1[7] = 0x420c0000bf800000;
  param_1[8] = 0x4270000040333333;
  *(undefined4 *)(param_1 + 9) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x41c71eb8;
  *(undefined4 *)(param_1 + 10) = 0x41955c29;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x42c80000;
  param_1[0xb] = 0x83f800000;
  param_1[0xc] = 0xbf80000041200000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)((longlong)param_1 + 500) = 2;
  FUN_144894d4c(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x158) = 0;
  *(undefined2 *)(param_1 + 0x15a) = 0;
  return param_1;
}



// FUNCTION 147fd8454 FUN_147fd8454 body=118 status=ok
// SIG undefined FUN_147fd8454(void)

undefined8 * FUN_147fd8454(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_14ad0ffe0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_147fd8372(param_1 + 8);
  param_1[0x164] = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  *(undefined2 *)(param_1 + 0x16c) = 0;
  FUN_147fd84ca(param_1,param_2);
  return param_1;
}



// FUNCTION 147fd84ca FUN_147fd84ca body=250 status=ok
// SIG undefined FUN_147fd84ca(void)

void FUN_147fd84ca(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0xb60) == '\0') {
    lVar2 = *param_2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
    local_30 = 0;
    FUN_14485c47a(&local_30,lVar2);
    *(undefined8 *)(param_1 + 0x20) = local_30;
    lVar2 = param_2[1];
    if (DAT_14c950c29 == 1) {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = param_2[1];
      }
    }
    bVar1 = DAT_14c950c29;
    *(longlong *)(param_1 + 0x30) = lVar2;
    lVar2 = param_2[2];
    if ((lVar2 != 0 & bVar1) == 1) {
      FUN_1456cec3c(lVar2);
    }
    local_30 = 0;
    FUN_14485c47a(&local_30,lVar2);
    *(undefined8 *)(param_1 + 0x28) = local_30;
    *(undefined1 *)(param_1 + 0xb60) = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd85c6 FUN_147fd85c6 body=42 status=ok
// SIG undefined FUN_147fd85c6(void)

undefined8 FUN_147fd85c6(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147fd85e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x180))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147fd85f0 FUN_147fd85f0 body=167 status=ok
// SIG undefined FUN_147fd85f0(void)

void FUN_147fd85f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x30,0,0);
  if (*(longlong *)(param_1 + 0xb30) != 0) {
    FUN_147fd30bc(*(longlong *)(param_1 + 0xb30),param_2);
  }
  if ((longlong)*(int *)(param_1 + 0xb58) != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0xb50);
    puVar5 = puVar6 + (longlong)*(int *)(param_1 + 0xb58) * 2;
    do {
      uVar3 = *puVar6;
      plVar4 = (longlong *)puVar6[1];
      if (plVar4 == (longlong *)0x0) {
        FUN_147fd85f0(uVar3,param_2);
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        FUN_147fd85f0(uVar3,param_2);
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
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar5);
  }
  return;
}



// FUNCTION 147fd8698 FUN_147fd8698 body=406 status=ok
// SIG undefined FUN_147fd8698(void)

void FUN_147fd8698(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((char)param_1[0x16c] != '\x01') || (*(char *)((longlong)param_1 + 0xb61) != '\0'))
  goto LAB_147fd880f;
  param_1[0x167] = *param_2;
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_1438d8514(param_1);
  if (param_1[0x166] != 0) {
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    local_40 = *param_2;
    plVar10 = (longlong *)param_1[3];
    bVar5 = true;
    if (plVar10 == (longlong *)0x0) {
LAB_147fd8756:
      lVar9 = 0;
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar8 = (int)plVar10[1];
      do {
        if (iVar8 == 0) goto LAB_147fd8756;
        LOCK();
        iVar6 = (int)plVar10[1];
        bVar11 = iVar8 == iVar6;
        if (bVar11) {
          *(int *)(plVar10 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar11);
      lVar9 = param_1[2];
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
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
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    plVar1 = plStack_30;
    local_38 = lVar9;
    if (plVar10 == plStack_30) {
      plVar7 = plStack_30;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar8 = *piVar2;
          UNLOCK();
          plVar1 = plVar10;
          goto joined_r0x000147fd87a1;
        }
      }
    }
    else {
      plVar7 = plVar10;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_30 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          puVar4 = (undefined8 *)*plStack_30;
          plStack_30 = plVar10;
          (*(code *)*puVar4)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar8 = *piVar2;
          UNLOCK();
joined_r0x000147fd87a1:
          plVar7 = plStack_30;
          if (iVar8 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            plVar7 = plStack_30;
          }
        }
      }
    }
    plStack_30 = plVar7;
    if (!bVar5) {
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
    FUN_147fd3028(param_1[0x166],&local_40);
    plVar10 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  *(undefined1 *)((longlong)param_1 + 0xb61) = 1;
LAB_147fd880f:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd8830 FUN_147fd8830 body=439 status=ok
// SIG undefined FUN_147fd8830(void)

/* WARNING: Removing unreachable block (ram,0x000147fd88f5) */

void FUN_147fd8830(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)((longlong)param_1 + 0xb61) != '\x01') goto LAB_147fd8999;
  if (param_1[0x166] != 0) {
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    plVar3 = (longlong *)param_1[3];
    if (plVar3 != (longlong *)0x0) {
      iVar9 = (int)plVar3[1];
      do {
        iVar8 = iVar9;
        if (iVar8 == 0) {
          local_48 = 0;
          goto LAB_147fd8941;
        }
        LOCK();
        iVar9 = (int)plVar3[1];
        bVar10 = iVar8 == iVar9;
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar8 + 1;
          iVar9 = iVar8;
        }
        UNLOCK();
      } while (!bVar10);
      lVar4 = param_1[2];
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
      plVar1 = plStack_40;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_48 = lVar4;
      if (plVar3 == plStack_40) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        plVar6 = plStack_40;
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar6 = plStack_40;
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            plVar6 = plStack_40;
          }
        }
      }
      else {
        plVar6 = plVar3;
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          plVar6 = plStack_40 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          plVar7 = plVar3;
          if ((int)*plVar6 == 0) {
            puVar5 = (undefined8 *)*plStack_40;
            plStack_40 = plVar3;
            (*(code *)*puVar5)(plVar1);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            plVar7 = plStack_40;
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
              plVar7 = plStack_40;
            }
          }
          plStack_40 = plVar7;
          plVar6 = plStack_40;
          if (iVar8 == 0) goto LAB_147fd8941;
        }
      }
      plStack_40 = plVar6;
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
LAB_147fd8941:
    FUN_147fd3084(param_1[0x166],&local_48);
    plVar3 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
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
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  param_1[0x167] = 0;
  *(undefined1 *)((longlong)param_1 + 0xb61) = 0;
LAB_147fd8999:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd89e8 FUN_147fd89e8 body=49 status=ok
// SIG undefined FUN_147fd89e8(void)

void FUN_147fd89e8(longlong *param_1)

{
  FUN_147fd8a1a();
  FUN_14800258b(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147fd8a1a FUN_147fd8a1a body=221 status=ok
// SIG undefined FUN_147fd8a1a(void)

void FUN_147fd8a1a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar7 = (longlong *)*param_1;
  uVar6 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    plVar8 = plVar7 + (longlong)(int)param_1[1] * 2;
    do {
      plVar3 = (longlong *)plVar7[1];
      if (plVar3 != (longlong *)0x0) {
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_147fd8a94;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar9 = iVar5 == iVar4;
          if (bVar9) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar9);
        if (*plVar7 != 0) {
          FUN_147fd8830(*plVar7,&local_31);
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
LAB_147fd8a94:
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar8);
    uVar6 = (undefined4)param_1[1];
    plVar7 = (longlong *)*param_1;
  }
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  FUN_14800258b(plVar7,uVar6);
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar5 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_148002744(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fd8af8 FUN_147fd8af8 body=161 status=ok
// SIG undefined FUN_147fd8af8(void)

longlong * FUN_147fd8af8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  
  if ((longlong)(int)param_1[1] != 0) {
    plVar4 = (longlong *)*param_1;
    plVar8 = plVar4 + (longlong)(int)param_1[1] * 2;
    do {
      *param_2 = 0;
      lVar5 = plVar8[-1];
      plVar8 = plVar8 + -2;
      param_2[1] = lVar5;
      if (lVar5 != 0) {
        iVar7 = *(int *)(lVar5 + 8);
        do {
          if (iVar7 == 0) {
            param_2[1] = 0;
            goto LAB_147fd8b7b;
          }
          LOCK();
          iVar3 = *(int *)(lVar5 + 8);
          bVar9 = iVar7 == iVar3;
          if (bVar9) {
            *(int *)(lVar5 + 8) = iVar7 + 1;
            iVar3 = iVar7;
          }
          iVar7 = iVar3;
          UNLOCK();
        } while (!bVar9);
        plVar6 = (longlong *)param_2[1];
        if (plVar6 == (longlong *)0x0) {
LAB_147fd8b7b:
          if (*param_2 != 0) {
            return param_2;
          }
        }
        else {
          lVar5 = *plVar8;
          *param_2 = lVar5;
          if (lVar5 != 0) {
            return param_2;
          }
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
    } while (plVar8 != plVar4);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 147fd8b9a FUN_147fd8b9a body=504 status=ok
// SIG undefined FUN_147fd8b9a(void)

void FUN_147fd8b9a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar11 = param_1[1];
  iVar10 = -1;
  if ((longlong)(int)lVar11 != 0) {
    plVar5 = (longlong *)*param_1;
    plVar12 = plVar5;
    local_60 = param_1;
    local_58 = param_2;
    do {
      plVar6 = (longlong *)plVar12[1];
      if (plVar6 == (longlong *)0x0) {
LAB_147fd8c37:
        lVar13 = 0;
      }
      else {
        iVar10 = (int)plVar6[1];
        do {
          if (iVar10 == 0) goto LAB_147fd8c37;
          LOCK();
          iVar9 = (int)plVar6[1];
          bVar14 = iVar10 == iVar9;
          if (bVar14) {
            *(int *)(plVar6 + 1) = iVar10 + 1;
            iVar9 = iVar10;
          }
          iVar10 = iVar9;
          UNLOCK();
        } while (!bVar14);
        lVar13 = *plVar12;
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
      param_1 = local_60;
      param_2 = local_58;
      if (lVar13 == lVar3) {
        iVar10 = (int)((ulonglong)((longlong)plVar12 - (longlong)plVar5) >> 4);
        break;
      }
      plVar12 = plVar12 + 2;
      iVar10 = -1;
    } while (plVar12 != plVar5 + (longlong)(int)lVar11 * 2);
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if (iVar10 == -1) {
    local_50 = param_1[2];
    FUN_147fd8698(*param_2);
    lVar3 = *param_2;
    lVar11 = param_2[1];
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 0xc) = *(int *)(lVar11 + 0xc) + 1;
      UNLOCK();
    }
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1480026be(param_1,iVar10);
    }
    lVar13 = *param_1;
    *(longlong *)(lVar13 + (longlong)iVar10 * 0x10) = lVar3;
    *(longlong *)(lVar13 + 8 + (longlong)iVar10 * 0x10) = lVar11;
  }
  else if (iVar10 < (int)param_1[1] + -1) {
    lVar3 = *param_1;
    lVar11 = (longlong)iVar10 * 0x10;
    uVar7 = *(undefined8 *)(lVar3 + lVar11);
    uVar8 = *(undefined8 *)(lVar3 + 8 + lVar11);
    *(undefined8 *)(lVar3 + lVar11) = 0;
    ((undefined8 *)(lVar3 + lVar11))[1] = 0;
    FUN_1480025c2(param_1,iVar10);
    FUN_148002622(param_1);
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1480026be(param_1,iVar10);
    }
    lVar3 = *param_1;
    *(undefined8 *)(lVar3 + (longlong)iVar10 * 0x10) = uVar7;
    *(undefined8 *)(lVar3 + 8 + (longlong)iVar10 * 0x10) = uVar8;
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fd8d94 FUN_147fd8d94 body=249 status=ok
// SIG undefined FUN_147fd8d94(void)

void FUN_147fd8d94(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < (int)param_1[1]) {
    uVar6 = 0;
    do {
      lVar7 = *param_1;
      plVar3 = *(longlong **)(lVar7 + 8 + uVar6 * 0x10);
      if (plVar3 == (longlong *)0x0) {
LAB_147fd8e0f:
        lVar8 = *param_2;
        lVar7 = 0;
      }
      else {
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_147fd8e0f;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar9 = iVar5 == iVar4;
          if (bVar9) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar9);
        lVar7 = *(longlong *)(lVar7 + uVar6 * 0x10);
        lVar8 = *param_2;
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
      if (lVar7 == lVar8) {
        FUN_147fd8830(*param_2,&local_39);
        FUN_1480025c2(param_1,uVar6 & 0xffffffff);
        FUN_148002622(param_1);
        break;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)param_1[1]);
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
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fd8e8e FUN_147fd8e8e body=174 status=ok
// SIG undefined FUN_147fd8e8e(void)

void FUN_147fd8e8e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  if ((longlong)(int)param_1[1] != 0) {
    plVar9 = (longlong *)*param_1;
    plVar8 = plVar9 + (longlong)(int)param_1[1] * 2;
    do {
      plVar3 = (longlong *)plVar9[1];
      if (plVar3 != (longlong *)0x0) {
        iVar7 = (int)plVar3[1];
        do {
          if (iVar7 == 0) goto LAB_147fd8f17;
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
          iVar7 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar7 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
            FUN_148002506(param_2,iVar7);
          }
          lVar5 = *param_2;
          *(longlong *)(lVar5 + (longlong)iVar7 * 0x10) = lVar4;
          *(longlong **)(lVar5 + 8 + (longlong)iVar7 * 0x10) = plVar3;
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
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
LAB_147fd8f17:
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar8);
  }
  return;
}



// FUNCTION 147fd8f3c FUN_147fd8f3c body=125 status=ok
// SIG undefined FUN_147fd8f3c(void)

void FUN_147fd8f3c(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  if ((longlong)(int)param_1[1] != 0) {
    plVar7 = (longlong *)*param_1;
    plVar6 = plVar7 + (longlong)(int)param_1[1] * 2;
    do {
      plVar3 = (longlong *)plVar7[1];
      if (plVar3 != (longlong *)0x0) {
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_147fd8f9a;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar8 = iVar5 == iVar4;
          if (bVar8) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar8);
        if (*plVar7 != 0) {
          FUN_147fd85f0(*plVar7,param_2);
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
LAB_147fd8f9a:
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar6);
  }
  return;
}



// FUNCTION 147fd8fba FUN_147fd8fba body=578 status=ok
// SIG undefined FUN_147fd8fba(void)

void FUN_147fd8fba(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uStack_60 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    plVar14 = (longlong *)*param_1;
    plVar12 = plVar14 + (longlong)(int)param_1[1] * 2;
    do {
      uVar6 = uStack_60;
      plVar5 = (longlong *)plVar14[1];
      if (plVar5 != (longlong *)0x0) {
        iVar8 = (int)plVar5[1];
        do {
          if (iVar8 == 0) goto LAB_147fd90a9;
          LOCK();
          iVar7 = (int)plVar5[1];
          bVar16 = iVar8 == iVar7;
          if (bVar16) {
            *(int *)(plVar5 + 1) = iVar8 + 1;
            iVar7 = iVar8;
          }
          iVar8 = iVar7;
          UNLOCK();
        } while (!bVar16);
        lVar15 = *plVar14;
        if (lVar15 != 0) {
          lVar11 = (longlong)(int)uStack_60;
          uVar9 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar9);
          if (uStack_60._4_4_ < uVar9) {
            FUN_148002506(&local_68,uVar6 & 0xffffffff);
          }
          *(longlong *)(local_68 + lVar11 * 0x10) = lVar15;
          *(longlong **)(local_68 + 8 + lVar11 * 0x10) = plVar5;
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
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
LAB_147fd90a9:
      plVar14 = plVar14 + 2;
    } while (plVar14 != plVar12);
    if ((int)uStack_60 != 0) {
      do {
        lVar11 = (longlong)(int)uStack_60 * 0x10;
        lVar15 = *(longlong *)(local_68 + -0x10 + lVar11);
        plVar14 = *(longlong **)(local_68 + -8 + lVar11);
        puVar3 = (undefined8 *)(local_68 + -0x10 + lVar11);
        *puVar3 = 0;
        puVar3[1] = 0;
        FUN_148002774(&local_68);
        FUN_1480027ea(&local_68);
        iVar8 = *(int *)(lVar15 + 0xd0);
        if ((longlong)iVar8 != 0) {
          lVar11 = *(longlong *)(lVar15 + 200);
          lVar10 = 0;
          do {
            pbVar4 = (byte *)(lVar11 + 0xc + lVar10);
            *pbVar4 = *pbVar4 & 0xf7;
            lVar10 = lVar10 + 0x10;
          } while ((longlong)iVar8 * 0x10 != lVar10);
        }
        if ((longlong)*(int *)(lVar15 + 0xb58) != 0) {
          lVar11 = *(longlong *)(lVar15 + 0xb50);
          lVar15 = (longlong)*(int *)(lVar15 + 0xb58) << 4;
          do {
            uVar6 = uStack_60;
            lVar10 = *(longlong *)(lVar11 + -0x10 + lVar15);
            plVar12 = *(longlong **)(lVar11 + -8 + lVar15);
            if (plVar12 == (longlong *)0x0) {
              if (lVar10 != 0) goto LAB_147fd9193;
            }
            else {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
              if (lVar10 != 0) {
LAB_147fd9193:
                lVar13 = (longlong)(int)uStack_60;
                uVar9 = (int)uStack_60 + 1;
                uStack_60 = CONCAT44(uStack_60._4_4_,uVar9);
                if (uStack_60._4_4_ < uVar9) {
                  FUN_148002506(&local_68,uVar6 & 0xffffffff);
                }
                *(longlong *)(local_68 + lVar13 * 0x10) = lVar10;
                *(longlong **)(local_68 + 8 + lVar13 * 0x10) = plVar12;
                if (plVar12 == (longlong *)0x0) goto LAB_147fd91de;
                LOCK();
                *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                UNLOCK();
              }
              LOCK();
              plVar5 = plVar12 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar2 = (int *)((longlong)plVar12 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
LAB_147fd91de:
            lVar15 = lVar15 + -0x10;
          } while (lVar15 != 0);
        }
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar12 = plVar14 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar2 = (int *)((longlong)plVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
      } while ((int)uStack_60 != 0);
    }
  }
  FUN_1480024bc(local_68,0);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fd91fe FUN_147fd91fe body=33 status=ok
// SIG undefined FUN_147fd91fe(void)

void FUN_147fd91fe(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    lVar4 = 0;
    do {
      pbVar1 = (byte *)(lVar2 + 0xc + lVar4);
      *pbVar1 = *pbVar1 & 0xf7;
      lVar4 = lVar4 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 147fd9220 FUN_147fd9220 body=28 status=ok
// SIG undefined FUN_147fd9220(void)

void FUN_147fd9220(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14ad10030;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}



// FUNCTION 147fd923c FUN_147fd923c body=4 status=ok
// SIG undefined FUN_147fd923c(void)

void FUN_147fd923c(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 147fd9240 FUN_147fd9240 body=237 status=ok
// SIG undefined FUN_147fd9240(void)

void FUN_147fd9240(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70 [5];
  double local_48;
  double local_40;
  double local_38;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar3 = local_70;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  lVar1 = FUN_145b67620();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  if (local_40 <= 0.0) {
    local_40 = 0.1;
    if (0.1 <= *(double *)(lVar2 + 0x40)) {
      local_40 = *(double *)(lVar2 + 0x40);
    }
  }
  if (local_38 <= 0.0) {
    local_38 = 0.1;
    if (0.1 <= *(double *)(lVar2 + 0x48)) {
      local_38 = *(double *)(lVar2 + 0x48);
    }
  }
  if (local_48 <= 0.0) {
    local_48 = 0.1;
    if (0.1 <= *(double *)(lVar2 + 0x58)) {
      local_48 = *(double *)(lVar2 + 0x58);
    }
  }
  if (local_30 == '\0') {
    local_30 = (char)*(undefined4 *)(lVar2 + 0x50);
    local_30 = local_30 + (local_30 == '\0');
  }
  FUN_1438d86e0(param_1,local_70,param_3);
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fd932e FUN_147fd932e body=659 status=ok
// SIG undefined FUN_147fd932e(void)

void FUN_147fd932e(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint unaff_EBP;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_a8 [36];
  int local_84;
  longlong local_80;
  int local_74;
  undefined4 local_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_14800fc12(param_1);
  }
  FUN_14800fc42(param_1 + 2);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
    param_1[0xc] = 0;
  }
  if ((longlong)(int)param_2[1] == 0) {
    iVar10 = 0;
  }
  else {
    lVar5 = *param_2;
    local_80 = (longlong)(int)param_2[1] * 0xc;
    lVar11 = 0;
    iVar10 = 0;
    uVar7 = 0;
    do {
      uStack_6c = *(uint *)(lVar5 + 4 + lVar11);
      uVar4 = (ulonglong)uStack_6c;
      if (uVar4 < 0xe) {
        unaff_EBP = *(uint *)(&DAT_14ad2a8c8 + uVar4 * 4);
        local_84 = *(int *)(&DAT_14ad2a900 + uVar4 * 4);
      }
      uVar9 = -unaff_EBP & (iVar10 + unaff_EBP) - 1;
      if (uVar7 < unaff_EBP) {
        uVar7 = unaff_EBP;
      }
      local_70 = *(undefined4 *)(lVar5 + lVar11);
      bVar3 = *(byte *)(lVar5 + 8 + lVar11);
      if (*(char *)(lVar5 + 9 + lVar11) == '\x01') {
        bVar3 = bVar3 | 2;
      }
      uStack_64 = CONCAT31(uStack_64._1_3_,bVar3);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      uStack_68 = uVar9;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_14800fdca(param_1,iVar2);
      }
      iVar10 = uVar9 + local_84;
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar2 * 0x10);
      *puVar1 = local_70;
      puVar1[1] = uStack_6c;
      puVar1[2] = uStack_68;
      puVar1[3] = uStack_64;
      local_74 = (int)param_1[1] + -1;
      local_60 = &local_70;
      local_58 = &local_74;
      FUN_14800fe50(param_1 + 2,local_4c,&local_60);
      lVar11 = lVar11 + 0xc;
    } while (local_80 != lVar11);
  }
  lVar5 = FUN_14001cc68(iVar10);
  param_1[0xc] = lVar5;
  *(int *)(param_1 + 0xd) = iVar10;
  *(int *)((longlong)param_1 + 0x6c) = iVar10;
  lVar5 = param_1[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar11 = *param_1;
    lVar6 = 0;
    do {
      uVar7 = *(uint *)(lVar11 + 4 + lVar6);
      if (uVar7 < 0xe) {
        puVar8 = (undefined8 *)((ulonglong)*(uint *)(lVar11 + 8 + lVar6) + param_1[0xc]);
        switch(uVar7) {
        case 0:
          *(undefined1 *)puVar8 = 0;
          break;
        default:
          *(undefined4 *)puVar8 = 0;
          break;
        case 5:
          *puVar8 = 0;
          puVar8[1] = 0;
          break;
        case 6:
        case 10:
          *(undefined4 *)(puVar8 + 1) = 0;
        case 3:
        case 4:
          *puVar8 = 0;
          break;
        case 7:
        case 0xb:
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          break;
        case 8:
          *puVar8 = 0;
          puVar8[1] = 0x3f80000000000000;
          break;
        case 9:
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
          puVar8[3] = 0x3ff0000000000000;
          break;
        case 0xc:
          *puVar8 = 0;
          puVar8[1] = 0x3f80000000000000;
          puVar8[2] = 0;
          puVar8[3] = 0;
          puVar8[4] = &DAT_3f8000003f800000;
          puVar8[5] = 0x3f800000;
          break;
        case 0xd:
          *puVar8 = 0;
          puVar8[1] = 0;
          *(undefined4 *)(puVar8 + 2) = 0;
          *(undefined4 *)((longlong)puVar8 + 0x14) = 0;
          *(undefined4 *)(puVar8 + 3) = 0;
          *(undefined4 *)((longlong)puVar8 + 0x1c) = 0x3ff00000;
          puVar8[4] = 0;
          puVar8[5] = 0;
          puVar8[6] = 0;
          puVar8[7] = 0;
          puVar8[8] = 0x3ff0000000000000;
          puVar8[9] = 0x3ff0000000000000;
          puVar8[10] = 0x3ff0000000000000;
          puVar8[0xb] = 0;
        }
      }
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar5 * 0x10 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd95c2 FUN_147fd95c2 body=128 status=ok
// SIG undefined FUN_147fd95c2(void)

undefined8 * FUN_147fd95c2(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  uVar3 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar5;
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
  lVar5 = param_2[2];
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_2[2];
    }
  }
  param_1[2] = lVar5;
  uVar3 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  return param_1;
}



// FUNCTION 147fd9642 FUN_147fd9642 body=788 status=ok
// SIG undefined FUN_147fd9642(void)

/* WARNING: Removing unreachable block (ram,0x000147fd9925) */
/* WARNING: Removing unreachable block (ram,0x000147fd992f) */
/* WARNING: Removing unreachable block (ram,0x000147fd9942) */

void FUN_147fd9642(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_138 [40];
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  undefined **local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_147fd9958();
  local_108 = param_1 + 0x88;
  FUN_147fe7e0c(local_108,param_3[3] + 0x88,0xb);
  local_100 = *(longlong **)(*(longlong *)(param_2 + 8) + 0x88);
  lVar1 = param_1 + 0xb40;
  *(undefined4 *)(param_1 + 0xb48) = 0;
  if (*(int *)(param_1 + 0xb4c) < 0) {
    FUN_144893a1c(lVar1);
  }
  memset(&local_f8,0,0x90);
  FUN_144869430(&local_f8);
  local_68 = 0;
  local_f8 = &PTR_FUN_149e1e590;
  local_58 = 0;
  local_110 = lVar1;
  local_60 = lVar1;
  FUN_144a69558(&local_f8,1);
  (*(code *)local_f8[0x1e])(&local_f8,0);
  local_f8 = &PTR_FUN_149e1e330;
  iVar2 = *(int *)(param_1 + 0xae8);
  if ((longlong)iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0xae0);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar1 + lVar4);
      if ((*(byte *)(plVar3 + 2) & 2) != 0) {
        (**(code **)(*plVar3 + 0x50))(plVar3,&local_49,&local_f8);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar2 * 8 != lVar4);
  }
  FUN_144a7fc42(&local_f8);
  lVar1 = local_110;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_e0 = *param_2;
  local_d8 = *(undefined1 *)(param_2 + 1);
  local_dc = 1;
  uStack_f0 = *param_3;
  local_e8 = param_3[1];
  if (local_e8 == 0) {
    local_e8 = 0;
  }
  else {
    LOCK();
    *(int *)(local_e8 + 8) = *(int *)(local_e8 + 8) + 1;
    UNLOCK();
  }
  local_f8 = *(undefined ***)(param_2 + 8);
  FUN_147fd95c2(&local_d0,param_3);
  if (local_f8 != (undefined **)0x0) {
    FUN_148022214(local_f8[9],local_108);
  }
  (**(code **)(*local_100 + 0x70))(local_100,&local_f8,param_1);
  FUN_147fd9a04(&local_f8);
  memset(&local_f8,0,0x90);
  FUN_144869430(&local_f8);
  local_68 = 0;
  local_f8 = &PTR_FUN_149e1e050;
  local_60 = lVar1;
  local_58 = 0x7fffffffffffffff;
  FUN_140996f94(&local_f8,1);
  (*(code *)local_f8[0x1e])(&local_f8,0);
  iVar2 = *(int *)(param_1 + 0xae8);
  if ((longlong)iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0xae0);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar1 + lVar4);
      if ((*(byte *)(plVar3 + 2) & 2) != 0) {
        (**(code **)(*plVar3 + 0x50))(plVar3,&local_49,&local_f8);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar2 * 8 != lVar4);
  }
  FUN_144a7fc42(&local_f8);
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fd9958 FUN_147fd9958 body=166 status=ok
// SIG undefined FUN_147fd9958(void)

void FUN_147fd9958(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0x408f400000000000;
  param_1[7] = 0x420c0000bf800000;
  param_1[8] = 0x4270000040333333;
  *(undefined4 *)(param_1 + 9) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x41c71eb8;
  *(undefined4 *)(param_1 + 10) = 0x41955c29;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x42c80000;
  param_1[0xb] = 0x83f800000;
  param_1[0xc] = 0xbf80000041200000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  if (*(int *)((longlong)param_1 + 500) < 0) {
    *(undefined4 *)(param_1 + 0x3e) = 0;
    FUN_14800ec08(param_1 + 0x20,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x3e) = 0;
  }
  FUN_147fd9e2c(param_1 + 0x40);
  *(undefined2 *)(param_1 + 0x15a) = 0;
  return;
}



// FUNCTION 147fd99fe thunk_FUN_147fe7e0c body=5 status=ok
// SIG undefined thunk_FUN_147fe7e0c(void)

void thunk_FUN_147fe7e0c(longlong param_1,longlong *param_2,byte param_3)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  size_t _Size;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong lStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  byte bStack_4b;
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar6 = 0;
    do {
      bVar1 = *(byte *)(lVar2 + 0xc + lVar6);
      if (((bVar1 & 4) != 0) && (((param_3 & 4) == 0 || ((bVar1 & 8) != 0)))) {
        bVar5 = bVar1 >> 1 & 1;
        if ((((param_3 & bVar5) != 0) || ((param_3 & 2) != 0 && bVar5 == 0)) &&
           (((param_3 & 8) != 0 || ((bVar1 & 1) == 0)))) {
          uStack_58 = *(undefined4 *)(lVar2 + lVar6);
          lStack_60 = param_1;
          lVar4 = FUN_147fe7bd6(param_1);
          param_1 = lStack_60;
          if (lVar4 == 0) {
            uStack_4c = 0;
            uStack_54 = uStack_58;
            uStack_50 = *(undefined4 *)(lVar2 + 4 + lVar6);
            bStack_4b = bVar5;
            FUN_147fe7a26(lStack_60,&uStack_54);
            lVar4 = FUN_147fe7bd6(param_1,*(undefined4 *)(lVar2 + lVar6));
            if (lVar4 == 0) goto LAB_147fe7e56;
          }
          if ((ulonglong)*(uint *)(lVar4 + 4) < 0xe) {
            _Size = *(size_t *)(&DAT_14ad2aa08 + (ulonglong)*(uint *)(lVar4 + 4) * 8);
          }
          else {
            _Size = 0;
          }
          memcpy((void *)((ulonglong)*(uint *)(lVar4 + 8) + *(longlong *)(param_1 + 0x60)),
                 (void *)((ulonglong)*(uint *)(lVar2 + 8 + lVar6) + param_2[0xc]),_Size);
          *(byte *)(lVar4 + 0xc) = *(byte *)(lVar4 + 0xc) | bVar1 & 0xc;
          param_1 = lStack_60;
        }
      }
LAB_147fe7e56:
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  if ((uStack_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fd9a04 FUN_147fd9a04 body=100 status=ok
// SIG undefined FUN_147fd9a04(void)

void FUN_147fd9a04(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
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
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000147fd9a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147fd9a68 FUN_147fd9a68 body=509 status=ok
// SIG undefined FUN_147fd9a68(void)

undefined4 FUN_147fd9a68(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined1 auStack_118 [32];
  double *local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double local_68;
  double local_60;
  double dStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar1 = param_3[2];
  dVar2 = param_2[2];
  dVar3 = param_3[1];
  dVar4 = param_2[1];
  dVar5 = *param_3;
  dVar6 = *param_2;
  local_78 = param_1[2];
  local_88 = *param_1;
  dStack_80 = param_1[1];
  local_68 = 1.0;
  local_60 = 0.0;
  dStack_58 = 0.0;
  FUN_1401c9a0e(param_1 + 3,&local_a0);
  local_f8 = &local_a8;
  local_a8 = 0.0;
  uVar7 = FUN_147fd9c66(&local_88,&local_a0,param_2,
                        SQRT((dVar1 - dVar2) * (dVar1 - dVar2) +
                             (dVar5 - dVar6) * (dVar5 - dVar6) + (dVar3 - dVar4) * (dVar3 - dVar4)))
  ;
  if ((char)uVar7 != '\0') {
    dStack_58 = (local_90 * local_a8 + local_78) - param_2[2];
    local_60 = (local_98 * local_a8 + dStack_80) - param_2[1];
    local_68 = (local_a8 * local_a0 + local_88) - *param_2;
    local_b0 = param_3[2] - param_2[2];
    local_b8 = param_3[1] - param_2[1];
    local_c0 = *param_3 - *param_2;
    FUN_144a79a9c(&local_68,&local_d8);
    FUN_144a79a9c(&local_c0,&local_f0);
    *param_4 = local_f0 - local_d8;
    param_4[1] = local_e8 - local_d0;
    param_4[2] = local_e0 - local_c8;
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fd9c66 FUN_147fd9c66 body=336 status=ok
// SIG undefined FUN_147fd9c66(void)

bool FUN_147fd9c66(double *param_1,double *param_2,double *param_3,double param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = param_1[2] - param_3[2];
  dVar2 = param_1[1] - param_3[1];
  dVar7 = *param_1 - *param_3;
  dVar1 = *param_2;
  dVar6 = param_2[1];
  dVar8 = param_2[2];
  dVar3 = dVar8 * dVar8 + dVar1 * dVar1 + dVar6 * dVar6;
  dVar1 = dVar2 * dVar6 + dVar1 * dVar7 + dVar8 * dVar5;
  dVar1 = dVar1 + dVar1;
  dVar6 = dVar1 * dVar1 +
          dVar3 * -4.0 * ((dVar5 * dVar5 + dVar7 * dVar7 + dVar2 * dVar2) - param_4 * param_4);
  if (dVar6 <= 0.0) {
    if ((dVar6 != 0.0) || (NAN(dVar6))) {
      bVar4 = false;
    }
    else {
      if (dVar6 < 0.0) {
        sqrt(dVar6);
      }
      dVar1 = -dVar1 / (dVar3 + dVar3);
      *param_5 = dVar1;
      bVar4 = 0.0 <= dVar1;
    }
  }
  else {
    if (dVar6 < 0.0) {
      dVar6 = sqrt(dVar6);
    }
    else {
      dVar6 = SQRT(dVar6);
    }
    dVar8 = (dVar6 - dVar1) / (dVar3 + dVar3);
    dVar1 = (-dVar1 - dVar6) / (dVar3 + dVar3);
    if (dVar8 <= dVar1) {
      dVar8 = dVar1;
    }
    *param_5 = dVar8;
    bVar4 = true;
  }
  return bVar4;
}



// FUNCTION 147fd9dc0 thunk_FUN_1446e0b6e body=5 status=ok
// SIG undefined thunk_FUN_1446e0b6e(void)

void thunk_FUN_1446e0b6e(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_19;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd5) & 4) != 0) {
    uStack_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&uStack_19);
  if (cVar1 == '\0') {
    if ((uStack_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uStack_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 147fd9dc6 FUN_147fd9dc6 body=75 status=ok
// SIG undefined FUN_147fd9dc6(void)

longlong FUN_147fd9dc6(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x2b8))();
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_1);
  }
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(param_1);
  }
  *(longlong **)(lVar1 + 8) = param_1;
  return lVar1;
}



// FUNCTION 147fd9e12 FUN_147fd9e12 body=26 status=ok
// SIG undefined FUN_147fd9e12(void)

undefined8 * FUN_147fd9e12(undefined8 *param_1,undefined8 param_2)

{
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = param_2;
  return param_1;
}



// FUNCTION 147fd9e2c FUN_147fd9e2c body=128 status=ok
// SIG undefined FUN_147fd9e2c(void)

void FUN_147fd9e2c(longlong param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2a210) {
    FUN_144b3d300(&DAT_14cb2a210);
    if (DAT_14cb2a210 == -1) {
      FUN_144894d4c(&DAT_14cb29950);
      atexit(FUN_1438dbe18);
      _Init_thread_footer(&DAT_14cb2a210);
    }
  }
  FUN_14477b16e(param_1,&DAT_14cb29950);
  *(undefined1 *)(param_1 + 0x8c0) = 0;
  return;
}



// FUNCTION 147fd9eac FUN_147fd9eac body=120 status=ok
// SIG undefined FUN_147fd9eac(void)

void FUN_147fd9eac(longlong param_1,longlong param_2)

{
  FUN_147fdc056(param_1,param_2,0);
  FUN_147fe7e0c(param_1 + 0x88,param_2 + 0x88,3);
  FUN_147fe65f6(param_1 + 0x100,param_2 + 0x100);
  FUN_14477b16e(param_1 + 0x200,param_2 + 0x200);
  *(undefined1 *)(param_1 + 0xac0) = *(undefined1 *)(param_2 + 0xac0);
  *(undefined1 *)(param_1 + 0xad0) = *(undefined1 *)(param_2 + 0xad0);
  *(undefined1 *)(param_1 + 0xad1) = *(undefined1 *)(param_2 + 0xad1);
  return;
}



// FUNCTION 147fd9f24 FUN_147fd9f24 body=11 status=ok
// SIG undefined FUN_147fd9f24(void)

void FUN_147fd9f24(undefined8 param_1,undefined8 param_2)

{
  FUN_147fe7e0c(param_1,param_2,3);
  return;
}



// FUNCTION 147fd9f30 thunk_FUN_147fe65f6 body=5 status=ok
// SIG undefined thunk_FUN_147fe65f6(void)

void * thunk_FUN_147fe65f6(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0xe0);
    if (*(void **)((longlong)param_2 + 0xe0) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0xf0);
    *(int *)((longlong)param_1 + 0xf0) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xf4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xf4) = 2;
    }
    else {
      FUN_14800ee9c(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0xe0);
        if (*(void **)((longlong)param_1 + 0xe0) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0x70);
      }
    }
  }
  return param_1;
}



// FUNCTION 147fd9f36 FUN_147fd9f36 body=36 status=ok
// SIG undefined FUN_147fd9f36(void)

void FUN_147fd9f36(longlong param_1,longlong param_2)

{
  FUN_14477b16e();
  *(undefined1 *)(param_1 + 0x8c0) = *(undefined1 *)(param_2 + 0x8c0);
  return;
}



// FUNCTION 147fd9f5a FUN_147fd9f5a body=218 status=ok
// SIG undefined FUN_147fd9f5a(void)

void FUN_147fd9f5a(longlong param_1,longlong param_2,float param_3)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &local_48;
  local_48 = 0x1010101;
  uStack_44 = 0x1010101;
  uStack_40 = 0x1010101;
  uStack_3c = 0x1010101;
  local_38 = 0x1010101;
  FUN_147fdc3b2();
  FUN_147fe7f78(param_1 + 0x88,param_2 + 0x88,3,param_3);
  FUN_147fda036(param_1 + 0x100,param_2 + 0x100,param_3);
  FUN_147feafa8(param_1 + 0x200,param_2 + 0x200,param_3);
  if ((0.0 < param_3) && (*(char *)(param_2 + 0xad0) == '\x01')) {
    *(undefined1 *)(param_1 + 0xad0) = 1;
  }
  uVar1 = 0;
  if (*(char *)(param_1 + 0xad1) != '\0') {
    uVar1 = *(undefined1 *)(param_2 + 0xad1);
  }
  *(undefined1 *)(param_1 + 0xad1) = uVar1;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fda036 FUN_147fda036 body=1504 status=ok
// SIG undefined FUN_147fda036(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147fda036(uint *param_1,uint *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 *puVar13;
  int iVar14;
  longlong lVar15;
  uint *puVar16;
  undefined8 *puVar17;
  uint *puVar18;
  longlong **pplVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auStack_228 [40];
  uint *local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  uint *local_1d8;
  longlong **pplStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong *local_1b8;
  uint *puStack_1b0;
  uint uStack_1ac;
  undefined1 *local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined1 local_148;
  longlong local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  int local_110;
  undefined8 local_10c;
  int local_104;
  undefined1 local_100 [8];
  undefined1 *local_f8;
  int local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_118 = 0;
  local_110 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = (undefined1 *)0x0;
  local_f0 = 0;
  puVar10 = *(uint **)(param_1 + 0x38);
  if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
    puVar10 = param_1;
  }
  local_200 = param_2;
  if ((longlong)(int)param_1[0x3c] != 0) {
    lVar15 = (longlong)(int)param_1[0x3c] * 0x70;
    do {
      puVar16 = puVar10;
      pplVar19 = &local_1b8;
      for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
        *pplVar19 = *(longlong **)puVar16;
        puVar16 = puVar16 + 2;
        pplVar19 = pplVar19 + 1;
      }
      local_1d8 = puVar10;
      pplStack_1d0 = &local_1b8;
      local_148 = param_3 < 0.5;
      FUN_14800ef0c(&local_138,&local_1f8,&local_1d8);
      puVar10 = puVar10 + 0x1c;
      lVar15 = lVar15 + -0x70;
    } while (lVar15 != 0);
  }
  auVar9 = _DAT_149934d80;
  puVar10 = *(uint **)(local_200 + 0x38);
  if (*(uint **)(local_200 + 0x38) == (uint *)0x0) {
    puVar10 = local_200;
  }
  if ((longlong)(int)local_200[0x3c] != 0) {
    puVar16 = puVar10 + (longlong)(int)local_200[0x3c] * 0x1c;
    dVar4 = (double)param_3;
    do {
      if ((int)uStack_130 != local_104) {
        puVar13 = local_f8;
        if (local_f8 == (undefined1 *)0x0) {
          puVar13 = local_100;
        }
        iVar14 = *(int *)(puVar13 + (ulonglong)(local_f0 - 1U & *puVar10) * 4);
        while (iVar14 != -1) {
          lVar15 = local_138 + (longlong)iVar14 * 0xa0;
          if (*(uint *)(local_138 + (longlong)iVar14 * 0xa0) == *puVar10) {
            if ((lVar15 + 0x10U & 0xffffffffffffffef) != 0) {
              dVar6 = *(double *)(puVar10 + 0xc);
              dVar7 = *(double *)(lVar15 + 0x40);
              dVar1 = *(double *)(lVar15 + 0x50);
              dVar2 = *(double *)(puVar10 + 0x10);
              dVar21 = (*(double *)(puVar10 + 0xe) - *(double *)(lVar15 + 0x48)) * dVar4 +
                       *(double *)(lVar15 + 0x48);
              local_1d8 = *(uint **)(puVar10 + 4);
              pplStack_1d0 = *(longlong ***)(puVar10 + 6);
              local_1c8 = *(undefined8 *)(puVar10 + 8);
              uStack_1c0 = *(ulonglong *)(puVar10 + 10);
              local_1f8 = *(undefined8 *)(lVar15 + 0x20);
              uStack_1f0 = *(undefined8 *)(lVar15 + 0x28);
              local_1e8 = *(undefined4 *)(lVar15 + 0x30);
              uStack_1e4 = *(undefined4 *)(lVar15 + 0x34);
              uStack_1e0 = *(undefined4 *)(lVar15 + 0x38);
              uStack_1dc = *(undefined4 *)(lVar15 + 0x3c);
              FUN_144a44da6(&local_1b8,&local_1f8,&local_1d8);
              dVar22 = (double)local_1a8 * (double)local_1a8 + (double)local_1b8 * (double)local_1b8
              ;
              dVar25 = uStack_1a0 * uStack_1a0 + (double)puStack_1b0 * (double)puStack_1b0;
              auVar23._0_8_ = dVar22 + dVar25;
              auVar23._8_8_ = dVar22 + dVar25;
              uVar20 = -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
              auVar24 = sqrtpd(auVar23,auVar23);
              auVar26 = divpd(auVar9,auVar24);
              auVar27._0_8_ = auVar26._0_8_ * (double)local_1a8;
              auVar27._8_8_ = auVar26._8_8_ * uStack_1a0;
              auVar24._8_4_ = (int)uVar20;
              auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
              auVar24._12_4_ = (int)(uVar20 >> 0x20);
              auVar24 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar27,auVar24);
              dVar8 = *(double *)(puVar10 + 0x14);
              dVar22 = *(double *)(puVar10 + 0x18);
              dVar25 = (*(double *)(puVar10 + 0x16) - *(double *)(lVar15 + 0x68)) * dVar4 +
                       *(double *)(lVar15 + 0x68);
              *(ulonglong *)(lVar15 + 0x20) =
                   (ulonglong)((double)local_1b8 * auVar26._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
              *(ulonglong *)(lVar15 + 0x28) =
                   (ulonglong)((double)puStack_1b0 * auVar26._8_8_) & uVar20;
              *(undefined1 (*) [16])(lVar15 + 0x30) = auVar24;
              auVar5._8_4_ = SUB84(dVar21,0);
              auVar5._0_8_ = (dVar6 - dVar7) * dVar4 + dVar7;
              auVar5._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
              *(undefined1 (*) [16])(lVar15 + 0x40) = auVar5;
              *(double *)(lVar15 + 0x50) = (dVar2 - dVar1) * dVar4 + dVar1;
              *(undefined8 *)(lVar15 + 0x58) = 0;
              auVar26._8_4_ = SUB84(dVar25,0);
              auVar26._0_8_ =
                   (dVar8 - *(double *)(lVar15 + 0x60)) * dVar4 + *(double *)(lVar15 + 0x60);
              auVar26._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
              *(undefined1 (*) [16])(lVar15 + 0x60) = auVar26;
              *(double *)(lVar15 + 0x70) =
                   (dVar22 - *(double *)(lVar15 + 0x70)) * dVar4 + *(double *)(lVar15 + 0x70);
              *(undefined8 *)(lVar15 + 0x78) = 0;
              *(undefined1 *)(lVar15 + 0x80) = 1;
              goto LAB_147fda41a;
            }
            break;
          }
          iVar14 = *(int *)(lVar15 + 0x90);
        }
      }
      if (0.5 <= param_3) {
        puVar18 = puVar10;
        pplVar19 = &local_1b8;
        for (lVar15 = 0xe; lVar15 != 0; lVar15 = lVar15 + -1) {
          *pplVar19 = *(longlong **)puVar18;
          puVar18 = puVar18 + 2;
          pplVar19 = pplVar19 + 1;
        }
        local_148 = 1;
        local_1d8 = puVar10;
        pplStack_1d0 = &local_1b8;
        FUN_14800ef0c(&local_138,&local_1f8,&local_1d8);
      }
LAB_147fda41a:
      puVar10 = puVar10 + 0x1c;
    } while (puVar10 != puVar16);
  }
  param_1[0x3c] = 0;
  if ((int)param_1[0x3d] < 0) {
    FUN_14800ec08(param_1,0);
  }
  local_1d8 = (uint *)0x100000000;
  local_1c8._0_4_ = 0xffffffff;
  local_1c8._4_4_ = 0;
  uStack_1c0 = uStack_1c0 & 0xffffffff00000000;
  iVar14 = 0;
  pplStack_1d0 = (longlong **)local_128;
  if (local_110 != 0) {
    FUN_1449c0562(&local_1d8);
    iVar14 = local_110;
  }
  uStack_1a0._0_4_ = (uint)local_1c8;
  uStack_1a0._4_4_ = local_1c8._4_4_;
  local_198 = (undefined4)uStack_1c0;
  local_194 = uStack_1c0._4_4_;
  puStack_1b0 = local_1d8;
  local_1a8 = (undefined1 *)pplStack_1d0;
  local_1b8 = &local_138;
  if ((local_1c8._4_4_ != iVar14) || (pplStack_1d0 != (longlong **)local_128)) {
    do {
      lVar15 = *local_1b8;
      lVar11 = (longlong)uStack_1a0._4_4_;
      if (*(char *)(lVar15 + 0x80 + lVar11 * 0xa0) == '\x01') {
        uVar3 = param_1[0x3c];
        param_1[0x3c] = uVar3 + 1;
        if (param_1[0x3d] < uVar3 + 1) {
          FUN_14800eae8(param_1,uVar3);
        }
        puVar10 = *(uint **)(param_1 + 0x38);
        if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
          puVar10 = param_1;
        }
        puVar17 = (undefined8 *)(lVar15 + lVar11 * 0xa0 + 0x10);
        puVar10 = puVar10 + (longlong)(int)uVar3 * 0x1c;
        for (lVar12 = 0xe; lVar12 != 0; lVar12 = lVar12 + -1) {
          *(undefined8 *)puVar10 = *puVar17;
          puVar17 = puVar17 + 1;
          puVar10 = puVar10 + 2;
        }
      }
      uStack_1a0._0_4_ = (uint)uStack_1a0 & ~uStack_1ac;
      FUN_1449c0562(&stack0xfffffffffffffe50);
    } while (local_1b8 != &local_138 || (local_1a8 != local_128 || uStack_1a0._4_4_ != iVar14));
  }
  local_f0 = 0;
  if (local_f8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_148000ade(&local_138);
  if ((local_e0 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fda618 FUN_147fda618 body=325 status=ok
// SIG undefined FUN_147fda618(void)

void FUN_147fda618(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147fdccf2(param_2,param_1);
  FUN_147fda75e(param_1 + 0x88,param_2);
  FUN_14800ec7c(param_2,param_1 + 0x100);
  FUN_147fdaa80(param_1 + 0x200,param_2);
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0xad0);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0xad0) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0xad0) = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0xad1);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0xad1) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0xad1) = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fda75e FUN_147fda75e body=800 status=ok
// SIG undefined FUN_147fda75e(void)

void FUN_147fda75e(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  int local_68;
  int local_64;
  undefined4 local_60;
  uint local_5c;
  longlong local_58;
  int *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  bVar6 = *(byte *)(param_2 + 5);
  if ((bVar6 & 4) != 0) {
    puVar3 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0xd,4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xd) = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar3 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)param_1 + 0x6c),4);
      }
      else {
        thunk_FUN_14572512c(param_2);
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x6c) = *puVar3;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    (**(code **)(*param_2 + 0x170))(param_2,param_1[0xc],(int)param_1[0xd]);
    local_58 = CONCAT44(local_58._4_4_,(int)param_1[1]);
    puVar4 = (ulonglong *)param_2[1];
    puVar3 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar3) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_58);
      }
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar3;
    }
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)param_1[1] << 4);
    bVar6 = *(byte *)(param_2 + 5);
  }
  if ((bVar6 & 1) != 0) {
    local_5c = 0;
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_5c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_5c);
      }
    }
    else {
      local_5c = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    local_60 = 0;
    puVar4 = (ulonglong *)param_2[1];
    puVar3 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar3) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_60,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_60);
      }
    }
    else {
      local_60 = *(undefined4 *)*puVar4;
      *puVar4 = (ulonglong)puVar3;
    }
    uVar5 = *(uint *)(param_1 + 0xd);
    if (local_5c < *(uint *)(param_1 + 0xd)) {
      uVar5 = local_5c;
    }
    local_5c = uVar5;
    (**(code **)(*param_2 + 0x170))(param_2,param_1[0xc]);
    *(undefined4 *)((longlong)param_1 + 0x6c) = local_60;
    local_64 = 0;
    puVar4 = (ulonglong *)param_2[1];
    piVar2 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_64,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar2;
    }
    FUN_147fe7dac(param_1,local_64);
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)local_64 << 4);
    FUN_14800fc42(param_1 + 2);
    if (0 < (int)param_1[1]) {
      lVar8 = 0;
      iVar7 = 0;
      do {
        local_58 = *param_1 + lVar8;
        local_68 = iVar7;
        local_50 = &local_68;
        FUN_14800fe50(param_1 + 2,local_44,&local_58);
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 0x10;
      } while (iVar7 < (int)param_1[1]);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fdaa80 FUN_147fdaa80 body=289 status=ok
// SIG undefined FUN_147fdaa80(void)

void FUN_147fdaa80(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2aae0) {
    FUN_144b3d300(&DAT_14cb2aae0);
    if (DAT_14cb2aae0 == -1) {
      FUN_144894d4c(&DAT_14cb2a220);
      atexit(FUN_1438dbe48);
      _Init_thread_footer(&DAT_14cb2aae0);
    }
  }
  uVar2 = FUN_146392300();
  FUN_14047320e(uVar2,param_2,param_1,&DAT_14cb2a220);
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x8c0);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x8c0) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x8c0) = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdaba2 FUN_147fdaba2 body=57 status=ok
// SIG undefined FUN_147fdaba2(void)

longlong * FUN_147fdaba2(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (param_2 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)FUN_147fd9dc6(param_2,*param_1);
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
  }
  return plVar1;
}



// FUNCTION 147fdabdc FUN_147fdabdc body=4 status=ok
// SIG undefined FUN_147fdabdc(void)

void FUN_147fdabdc(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | param_2;
  return;
}



// FUNCTION 147fdabe0 FUN_147fdabe0 body=287 status=ok
// SIG undefined FUN_147fdabe0(void)

void FUN_147fdabe0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 ****ppppuVar4;
  uint *puVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  undefined8 ***local_68;
  uint local_60 [6];
  undefined8 ***local_48;
  uint local_40 [2];
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)(param_2 + 0x40);
  if (param_1 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
    iVar1 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
      FUN_148002906(plVar3,iVar1);
    }
    *(longlong **)(*plVar3 + (longlong)iVar1 * 8) = param_1;
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
  (**(code **)(*param_1 + 0x30))(param_1,&local_68);
  uVar6 = (ulonglong)local_38;
  if (local_38 == 0) {
    puVar5 = local_60;
  }
  else {
    if (local_38 != 1) goto LAB_147fdacbb;
    puVar5 = local_40;
  }
  uVar2 = *puVar5;
  if ((ulonglong)uVar2 != 0) {
    uVar6 = 0;
    do {
      if (local_38 == 1) {
        ppppuVar4 = (undefined8 ****)local_48;
        if ((undefined8 ****)local_48 == (undefined8 ****)0x0) {
          ppppuVar4 = &local_68;
        }
LAB_147fdac97:
        if (ppppuVar4[uVar6] != (undefined8 ***)0x0) {
          FUN_147fdabe0(ppppuVar4[uVar6],param_2,param_3);
        }
      }
      else {
        ppppuVar4 = (undefined8 ****)local_68;
        if (local_38 == 0) goto LAB_147fdac97;
      }
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
    uVar6 = (ulonglong)local_38;
  }
LAB_147fdacbb:
  (*(code *)(&PTR_LAB_14ad0ff00)[uVar6])(&local_68);
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fdad00 FUN_147fdad00 body=239 status=ok
// SIG undefined FUN_147fdad00(void)

void FUN_147fdad00(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 ****ppppuVar2;
  uint *puVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [40];
  undefined8 ***local_60;
  uint local_58 [6];
  undefined8 ***local_40;
  uint local_38 [2];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[1] != 0) {
    (**(code **)(*param_2 + 0x88))(param_2,param_1 + 1,0,0);
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_2);
  (**(code **)(*param_1 + 0x30))(param_1,&local_60);
  uVar4 = (ulonglong)local_30;
  if (local_30 == 0) {
    puVar3 = local_58;
  }
  else {
    if (local_30 != 1) goto LAB_147fdadbd;
    puVar3 = local_38;
  }
  uVar1 = *puVar3;
  if ((ulonglong)uVar1 != 0) {
    uVar4 = 0;
    do {
      if (local_30 == 1) {
        ppppuVar2 = (undefined8 ****)local_40;
        if ((undefined8 ****)local_40 == (undefined8 ****)0x0) {
          ppppuVar2 = &local_60;
        }
LAB_147fdad9c:
        if (ppppuVar2[uVar4] != (undefined8 ***)0x0) {
          FUN_147fdad00(ppppuVar2[uVar4],param_2);
        }
      }
      else {
        ppppuVar2 = (undefined8 ****)local_60;
        if (local_30 == 0) goto LAB_147fdad9c;
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
    uVar4 = (ulonglong)local_30;
  }
LAB_147fdadbd:
  (*(code *)(&PTR_LAB_14ad0ff00)[uVar4])(&local_60);
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fdadf0 FUN_147fdadf0 body=26 status=ok
// SIG undefined FUN_147fdadf0(void)

void FUN_147fdadf0(longlong *param_1)

{
  if ((param_1[1] != 0) && (*(char *)(param_1[1] + 0x30) != '\x01')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147fdae06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



// FUNCTION 147fdae0a FUN_147fdae0a body=26 status=ok
// SIG undefined FUN_147fdae0a(void)

void FUN_147fdae0a(longlong *param_1)

{
  if ((param_1[1] != 0) && (*(char *)(param_1[1] + 0x30) != '\x01')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147fdae20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}



// FUNCTION 147fdae24 FUN_147fdae24 body=47 status=ok
// SIG undefined FUN_147fdae24(void)

void FUN_147fdae24(undefined8 *param_1)

{
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return;
}



// FUNCTION 147fdae54 FUN_147fdae54 body=50 status=ok
// SIG undefined FUN_147fdae54(void)

void FUN_147fdae54(longlong param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_148002f28(param_1);
  }
  FUN_147fdae98(param_1,param_2);
  return;
}



// FUNCTION 147fdae86 FUN_147fdae86 body=18 status=ok
// SIG undefined FUN_147fdae86(void)

void FUN_147fdae86(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < *(int *)(param_1 + 0xc)) {
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147fdae98 FUN_147fdae98 body=405 status=ok
// SIG undefined FUN_147fdae98(void)

void FUN_147fdae98(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 ***pppuVar3;
  uint uVar4;
  undefined8 ****ppppuVar5;
  ulonglong uVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 ***local_80;
  int local_78 [6];
  undefined8 ***local_60;
  int local_58 [2];
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    local_98 = (longlong *)0x0;
    uStack_90 = 1;
    FUN_148002906(&local_98,0);
    *local_98 = param_2;
    if ((int)uStack_90 != 0) {
      do {
        plVar2 = (longlong *)local_98[(longlong)(int)uStack_90 + -1];
        uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + -1);
        FUN_14800298c(&local_98);
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_148002906(param_1,iVar1);
        }
        *(longlong **)(*param_1 + (longlong)iVar1 * 8) = plVar2;
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_80);
        uVar6 = (ulonglong)local_50;
        piVar7 = local_78;
        if (local_50 == 0) {
LAB_147fdaf84:
          lVar9 = (longlong)*piVar7;
          if (lVar9 != 0) {
            do {
              uVar6 = uStack_90;
              lVar9 = lVar9 + -1;
              if (local_50 == 1) {
                ppppuVar5 = (undefined8 ****)local_60;
                if ((undefined8 ****)local_60 == (undefined8 ****)0x0) {
                  ppppuVar5 = &local_80;
                }
LAB_147fdafbf:
                pppuVar3 = ppppuVar5[lVar9];
                if (pppuVar3 != (undefined8 ***)0x0) {
                  lVar8 = (longlong)(int)uStack_90;
                  uVar4 = (int)uStack_90 + 1;
                  uStack_90 = CONCAT44(uStack_90._4_4_,uVar4);
                  if (uStack_90._4_4_ < uVar4) {
                    FUN_148002906(&local_98,uVar6 & 0xffffffff);
                  }
                  local_98[lVar8] = (longlong)pppuVar3;
                }
              }
              else {
                ppppuVar5 = (undefined8 ****)local_80;
                if (local_50 == 0) goto LAB_147fdafbf;
              }
            } while (lVar9 != 0);
            uVar6 = (ulonglong)local_50;
          }
        }
        else if (local_50 == 1) {
          piVar7 = local_58;
          goto LAB_147fdaf84;
        }
        (*(code *)(&PTR_LAB_14ad0ff00)[uVar6])(&local_80);
      } while ((int)uStack_90 != 0);
    }
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fdb02e FUN_147fdb02e body=162 status=ok
// SIG undefined FUN_147fdb02e(void)

longlong * FUN_147fdb02e(undefined8 param_1,longlong *param_2)

{
  short *psVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  psVar1 = (short *)param_2[1];
  if (psVar1 != (short *)0x0) {
    if (psVar1[1] != 0 && *psVar1 != 0) {
      FUN_147fdb0d2(param_1,*psVar1,psVar1[1]);
    }
  }
  local_28 = &local_20;
  local_20 = param_1;
  if (*param_2 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)FUN_147fd9dc6(*param_2,&local_20);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdb0d2 FUN_147fdb0d2 body=112 status=ok
// SIG undefined FUN_147fdb0d2(void)

void FUN_147fdb0d2(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_147fd7298(param_1,iVar2);
  }
  lVar3 = *param_1;
  puVar1 = (undefined8 *)(lVar3 + lVar5 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + 0x10 + lVar5 * 0x18) = 0;
  uVar4 = FUN_14001cc68(param_2,param_3);
  *(undefined8 *)(lVar3 + lVar5 * 0x18) = uVar4;
  *(undefined4 *)(lVar3 + 8 + lVar5 * 0x18) = param_3;
  *(undefined4 *)(lVar3 + 0xc + lVar5 * 0x18) = param_2;
  *(undefined4 *)(lVar3 + 0x10 + lVar5 * 0x18) = 0;
  return;
}



// FUNCTION 147fdb142 thunk_FUN_147fd6bde body=5 status=ok
// SIG undefined thunk_FUN_147fd6bde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_147fd6bde(longlong *param_1,char param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 uVar11;
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  
  lVar9 = param_1[3];
  if ((longlong)(int)lVar9 != 0) {
    lVar6 = param_1[2];
    lVar7 = 0;
    do {
      (**(code **)(**(longlong **)(lVar6 + lVar7) + 0x10))(*(longlong **)(lVar6 + lVar7),0);
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar9 * 8 != lVar7);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) < 0) {
    FUN_147fd6da0(param_1 + 2,0);
  }
  auVar3 = _DAT_149931e80;
  lVar9 = *param_1;
  iVar2 = (int)param_1[1];
  if (param_2 == '\0') {
    if (iVar2 != 0) {
      uVar1 = (longlong)iVar2 * 0x18 - 0x18;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar1;
      uVar8 = SUB164(auVar12 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
      uVar11 = (undefined4)(uVar1 / 0x180000000);
      auVar13._0_8_ = CONCAT44(uVar11,uVar8);
      auVar13._8_4_ = uVar8;
      auVar13._12_4_ = uVar11;
      auVar10._0_8_ = auVar13._0_8_ >> 4;
      auVar10._8_8_ = auVar13._8_8_ >> 4;
      puVar5 = (undefined4 *)(lVar9 + 0x58);
      uVar4 = 0;
      auVar12 = pmovsxbq(in_XMM1,0x302);
      auVar13 = pmovsxbq(in_XMM2,0x100);
      auVar10 = auVar10 | _DAT_149931e80;
      do {
        lVar9 = auVar10._0_8_;
        lVar6 = auVar10._8_8_;
        if ((bool)(~(lVar9 < (longlong)(uVar4 ^ auVar3._0_8_)) & 1)) {
          puVar5[-0x12] = 0;
        }
        auVar14._8_4_ = (int)uVar4;
        auVar14._0_8_ = uVar4;
        auVar14._12_4_ = (int)(uVar4 >> 0x20);
        if ((longlong)((auVar14._8_8_ | auVar13._8_8_) ^ auVar3._8_8_) <= lVar6) {
          puVar5[-0xc] = 0;
        }
        auVar14 = (auVar14 | auVar12) ^ auVar3;
        if (auVar14._0_8_ <= lVar9) {
          puVar5[-6] = 0;
        }
        if (auVar14._8_8_ <= lVar6) {
          *puVar5 = 0;
        }
        uVar4 = uVar4 + 4;
        puVar5 = puVar5 + 0x18;
      } while ((uVar1 / 0x18 + 4 & 0xfffffffffffffffc) != uVar4);
    }
  }
  else {
    if (iVar2 != 0) {
      lVar6 = 0;
      do {
        FUN_1400020a8(*(undefined8 *)(lVar9 + lVar6));
        lVar6 = lVar6 + 0x18;
      } while ((longlong)iVar2 * 0x18 != lVar6);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_147fd6e00(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 147fdb148 FUN_147fdb148 body=423 status=ok
// SIG undefined FUN_147fdb148(void)

void FUN_147fdb148(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined1 local_80 [8];
  int local_78 [8];
  int local_58 [2];
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1480030e8(param_1);
  }
  if (param_2 != 0) {
    local_98 = (longlong *)0x0;
    uStack_90 = 1;
    FUN_148002f58(&local_98,0);
    *local_98 = param_2;
    if ((int)uStack_90 != 0) {
      do {
        plVar1 = (longlong *)local_98[(longlong)(int)uStack_90 + -1];
        uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + -1);
        FUN_148002fde(&local_98);
        iVar6 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
          FUN_148002f58(param_1,iVar6);
        }
        *(longlong **)(*param_1 + (longlong)iVar6 * 8) = plVar1;
        (**(code **)(*plVar1 + 0x2a0))(plVar1,local_80);
        uVar4 = (ulonglong)local_50;
        piVar5 = local_78;
        if (local_50 == 0) {
LAB_147fdb25d:
          iVar6 = *piVar5;
          if (iVar6 != 0) {
            do {
              iVar6 = iVar6 + -1;
              FUN_14800307a(local_80,&local_a0,iVar6);
              uVar4 = uStack_90;
              lVar2 = local_a0;
              if (local_a0 != 0) {
                lVar7 = (longlong)(int)uStack_90;
                uVar3 = (int)uStack_90 + 1;
                uStack_90 = CONCAT44(uStack_90._4_4_,uVar3);
                if (uStack_90._4_4_ < uVar3) {
                  FUN_148002f58(&local_98,uVar4 & 0xffffffff);
                }
                local_98[lVar7] = lVar2;
              }
            } while (iVar6 != 0);
            uVar4 = (ulonglong)local_50;
          }
        }
        else if (local_50 == 1) {
          piVar5 = local_58;
          goto LAB_147fdb25d;
        }
        (*(code *)(&PTR_LAB_14ad0ff10)[uVar4])(local_80);
      } while ((int)uStack_90 != 0);
    }
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147fdb2f0 FUN_147fdb2f0 body=104 status=ok
// SIG undefined FUN_147fdb2f0(void)

bool FUN_147fdb2f0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_2c,3);
  if (uVar1 == local_2c) {
    *(bool *)param_1 = *(char *)(param_2 + 0x71) != '\0';
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 == local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147fdb35a FUN_147fdb35a body=145 status=ok
// SIG undefined FUN_147fdb35a(void)

undefined8 FUN_147fdb35a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_34,2);
  if (uVar1 != local_34) {
    uVar1 = *(ulonglong *)(param_2 + 0xc);
    FUN_1401a700c(&local_34,0x15);
    if (uVar1 != local_34) {
      uVar2 = 0;
      goto LAB_147fdb3c5;
    }
  }
  FUN_144aa02de(*param_3,param_1);
  uVar2 = 1;
LAB_147fdb3c5:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


