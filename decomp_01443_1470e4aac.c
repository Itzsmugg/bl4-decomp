// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1470e4aac FUN_1470e4aac body=139 status=ok
// SIG undefined FUN_1470e4aac(void)

longlong * FUN_1470e4aac(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  
  if ((*param_1 == '\x03') && (plVar3 = *(longlong **)(param_1 + 0x10), plVar3 != (longlong *)0x0))
  {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_1470e4b25;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 8);
    bVar9 = true;
    if (lVar4 != 0) {
      uVar8 = FUN_140c481ec();
      cVar6 = FUN_1448093f4(lVar4,uVar8);
      if (cVar6 != '\0') {
        *param_2 = lVar4;
        param_2[1] = (longlong)plVar3;
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        bVar9 = false;
      }
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
    if (!bVar9) {
      return param_2;
    }
  }
LAB_1470e4b25:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1470e4b38 FUN_1470e4b38 body=116 status=ok
// SIG undefined FUN_1470e4b38(void)

void FUN_1470e4b38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1405774e2(param_2);
  if (lVar1 != 0) {
    FUN_140c5894c(local_60,param_3);
    FUN_1402b8456(lVar1,param_1,local_60);
    FUN_144a2da94(local_60);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e4bae FUN_1470e4bae body=117 status=ok
// SIG undefined FUN_1470e4bae(void)

void FUN_1470e4bae(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = FUN_1402b888a(param_2,param_1 + 0x90);
  if (lVar2 != 0) {
    iVar3 = *(int *)(param_2 + 8);
    _Dst = (void *)((longlong)iVar3 * 0x58 + *(longlong *)(param_1 + 0x90));
    FUN_1403d8100(_Dst,1);
    iVar1 = *(int *)(param_1 + 0x98);
    iVar3 = iVar1 - (iVar3 + 1);
    if (iVar3 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 0x58),(longlong)iVar3 * 0x58);
      iVar1 = *(int *)(param_1 + 0x98);
    }
    *(int *)(param_1 + 0x98) = iVar1 + -1;
  }
  return;
}



// FUNCTION 1470e4c26 FUN_1470e4c26 body=124 status=ok
// SIG undefined FUN_1470e4c26(void)

void FUN_1470e4c26(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_20;
  local_20 = 0;
  iVar1 = FUN_1470e86da();
  if (0 < (int)param_1[6]) {
    lVar2 = 0;
    do {
      *(int *)(*(longlong *)(param_1[5] + lVar2 * 8) + 0x18) = (int)lVar2;
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_1[6]);
  }
  if (0 < iVar1) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e4ca4 FUN_1470e4ca4 body=346 status=ok
// SIG undefined FUN_1470e4ca4(void)

void FUN_1470e4ca4(longlong param_1,uint param_2)

{
  longlong *plVar1;
  void *_Dst;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (-1 < (int)param_2) {
    uVar4 = (ulonglong)param_2;
    iVar3 = *(int *)(param_1 + 0x30);
    if (param_2 != 0 && (int)param_2 < iVar3) {
      plVar1 = (longlong *)(param_1 + 0x28);
      plVar2 = *(longlong **)(*plVar1 + uVar4 * 8);
      if (plVar2 != (longlong *)0x0) {
        uVar5 = param_2 + 1;
        if (iVar3 - uVar5 != 0) {
          _Dst = (void *)(*plVar1 + uVar4 * 8);
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(iVar3 - uVar5) << 3);
          iVar3 = *(int *)(param_1 + 0x30);
        }
        uVar6 = iVar3 - 1;
        *(uint *)(param_1 + 0x30) = uVar6;
        iVar3 = *(int *)(param_1 + 0x20) - uVar5;
        if (iVar3 != 0) {
          memmove((void *)(*(longlong *)(param_1 + 0x18) + uVar4 * 8),
                  (void *)(*(longlong *)(param_1 + 0x18) + uVar4 * 8 + 8),(longlong)iVar3 << 3);
          uVar6 = *(uint *)(param_1 + 0x30);
          param_2 = *(int *)(param_1 + 0x20) - 1;
        }
        *(uint *)(param_1 + 0x20) = param_2;
        *(uint *)(param_1 + 0x30) = uVar6 + 1;
        if (*(uint *)(param_1 + 0x34) < uVar6 + 1) {
          FUN_140b3e020(plVar1,uVar6);
        }
        memmove((void *)(*plVar1 + 8),(void *)*plVar1,(ulonglong)uVar6 << 3);
        *(longlong **)*plVar1 = plVar2;
        local_48 = (**(code **)(*plVar2 + 8))(plVar2);
        if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(local_48);
        }
        FUN_1470e4e18(param_1 + 0x18,&local_48);
        uVar4 = 0;
        do {
          *(int *)(*(longlong *)(*plVar1 + uVar4 * 8) + 0x18) = (int)uVar4;
          uVar4 = uVar4 + 1;
        } while (uVar5 != uVar4);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e4e18 FUN_1470e4e18 body=101 status=ok
// SIG undefined FUN_1470e4e18(void)

void FUN_1470e4e18(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_140c48848(param_1,(ulonglong)uVar1);
  }
  memmove((void *)((longlong)*param_1 + 8),(void *)*param_1,(ulonglong)uVar1 << 3);
  lVar2 = *param_2;
  *(longlong *)*param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 1470e4e7e FUN_1470e4e7e body=115 status=ok
// SIG undefined FUN_1470e4e7e(void)

void FUN_1470e4e7e(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  do {
    iVar4 = *(int *)(param_1 + 0x108);
    iVar5 = iVar4 + -1;
    if (iVar4 < 1) {
      iVar5 = 0;
    }
    if (param_2 != '\0') {
      iVar5 = iVar4 + 1;
    }
    *(int *)(param_1 + 0x108) = iVar5;
    plVar3 = *(longlong **)(param_1 + 0x58);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    iVar4 = (int)plVar3[1];
    do {
      if (iVar4 == 0) {
        return;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar6 = iVar4 == iVar5;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar4 + 1;
        iVar5 = iVar4;
      }
      iVar4 = iVar5;
      UNLOCK();
    } while (!bVar6);
    param_1 = *(longlong *)(param_1 + 0x50);
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
  } while (param_1 != 0);
  return;
}



// FUNCTION 1470e4ef2 FUN_1470e4ef2 body=73 status=ok
// SIG undefined FUN_1470e4ef2(void)

void FUN_1470e4ef2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0xffffffff;
  local_18 = *(undefined8 *)(param_2 + 0x38);
  FUN_1402b8456();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e4f3c FUN_1470e4f3c body=900 status=ok
// SIG undefined FUN_1470e4f3c(void)

void FUN_1470e4f3c(longlong *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ushort uVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  longlong lVar12;
  code *pcVar13;
  byte *_Dst;
  longlong lVar14;
  undefined1 auStack_f8 [39];
  char local_d1;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a1;
  undefined8 ***local_a0;
  longlong *local_98;
  ushort local_88;
  byte local_80;
  undefined1 local_78 [40];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = (longlong *)param_2[9];
  *param_1 = local_c8[2];
  local_d1 = param_3;
  (**(code **)(*local_c8 + 0x48))(local_c8,param_1);
  (**(code **)(*param_2 + 0x70))(param_2,param_1);
  local_a1 = 2;
  if (param_2[8] == 0) {
    local_b0 = 0;
  }
  else {
    local_b0 = FUN_14479d2ce(param_2[8] + 0x48);
  }
  local_c0 = param_2;
  FUN_144a7bec8(param_2,&local_a0);
  local_78[0] = 0;
  local_50 = 0;
  FUN_144a7bf34(local_78,&local_a0,&local_b0,&local_a1);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  lVar6 = param_1[10];
  local_d0 = param_1;
  if ((longlong)(int)lVar6 != 0) {
    lVar5 = param_1[9];
    lVar2 = lVar5 + 0x60;
    local_b8 = lVar5 + 0x40;
    lVar12 = 0;
    do {
      cVar3 = *(char *)(lVar5 + 0x30 + lVar12);
      if (((cVar3 != '\0') && (*(char *)(lVar2 + lVar12) == '\0')) &&
         ((cVar3 != '\v' || (*(char *)(lVar5 + 0x38 + lVar12) == '\v')))) {
        _Dst = (byte *)(lVar2 + lVar12) + -0x20;
        lVar14 = local_b8 + lVar12;
        FUN_1447c3578(lVar12 + lVar5 + 8,&local_a0,local_78);
        pcVar13 = *(code **)((longlong)&DAT_14c9a85d0 +
                            (ulonglong)((uint)*(byte *)(lVar2 + lVar12) * 0x120));
        if (pcVar13 != (code *)0x0) {
          lVar10 = lVar14;
          if (0x18 < *(ushort *)(lVar5 + 0x58 + lVar12)) {
            lVar10 = *(longlong *)_Dst;
          }
          (*pcVar13)(lVar10);
        }
        if (0x18 < *(ushort *)(lVar5 + 0x58 + lVar12)) {
          FUN_1400020a8(*(longlong *)_Dst);
        }
        *(ushort *)(lVar5 + 0x58 + lVar12) = local_88;
        if (local_88 < 0x19) {
          uVar7 = (ulonglong)((uint)local_80 * 0x120);
          pcVar13 = *(code **)((longlong)&DAT_14c9a85b8 + uVar7);
          if ((pcVar13 == (code *)0x0) &&
             (pcVar13 = *(code **)((longlong)&DAT_14c9a85b0 + uVar7), pcVar13 == (code *)0x0)) {
            memcpy(_Dst,&local_a0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
          }
          else {
            (*pcVar13)(lVar14,&local_a0);
          }
        }
        else {
          *(undefined8 ****)_Dst = local_a0;
          local_a0 = (undefined8 ****)0x0;
          local_88 = 0;
        }
        *(byte *)(lVar2 + lVar12) = local_80;
        local_80 = 0;
        if (DAT_14c9a85d0 != (code *)0x0) {
          ppppuVar11 = &local_a0;
          if (0x18 < local_88) {
            ppppuVar11 = (undefined8 ****)local_a0;
          }
          (*DAT_14c9a85d0)(ppppuVar11);
        }
        if (0x18 < local_88) {
          FUN_1400020a8(local_a0);
        }
        if (*(char *)(lVar2 + lVar12) == '\0') {
          uVar9 = *(ushort *)(lVar5 + 0x58 + lVar12);
          if (DAT_14c9a85d0 != (code *)0x0) {
            if (0x18 < uVar9) {
              lVar14 = *(longlong *)_Dst;
            }
            (*DAT_14c9a85d0)(lVar14);
            uVar9 = *(ushort *)(lVar5 + 0x58 + lVar12);
          }
          if (0x18 < uVar9) {
            FUN_1400020a8(*(longlong *)_Dst);
          }
          *(undefined2 *)(lVar5 + 0x58 + lVar12) = 8;
          *(undefined8 *)(lVar5 + 0x40 + lVar12) = 0;
          *(undefined1 *)(lVar2 + lVar12) = 0x12;
        }
      }
      lVar12 = lVar12 + 0x78;
    } while ((longlong)(int)lVar6 * 0x78 - lVar12 != 0);
  }
  if ((local_d1 != '\0') && (lVar6 = local_c8[6], (longlong)(int)lVar6 != 0)) {
    lVar2 = local_c8[5];
    lVar5 = local_c0[8];
    lVar12 = 0;
    do {
      if ((*(char *)(lVar2 + 8 + lVar12) == '\x01') &&
         (lVar14 = *(longlong *)(lVar2 + lVar12), lVar14 != 0)) {
        iVar4 = *(int *)(lVar14 + 0x18);
        if ((-1 < (longlong)iVar4) &&
           ((iVar4 < *(int *)(lVar5 + 0x78) &&
            (lVar14 = *(longlong *)(*(longlong *)(lVar5 + 0x70) + (longlong)iVar4 * 8), lVar14 != 0)
            ))) {
          local_a0 = *(undefined8 ****)(*(longlong *)(lVar14 + 0x48) + 0x10);
          uVar8 = FUN_1470e5326(local_d0,&local_a0);
          FUN_1470e4f3c(uVar8,lVar14,1);
        }
      }
      lVar12 = lVar12 + 0x20;
    } while ((longlong)(int)lVar6 * 0x20 != lVar12);
  }
  FUN_144a5ac3a(local_78);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470e52c2 FUN_1470e52c2 body=99 status=ok
// SIG undefined FUN_1470e52c2(void)

undefined8 FUN_1470e52c2(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x10);
  uVar1 = FUN_1470e5326();
  FUN_1470e4f3c(uVar1,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e5326 FUN_1470e5326 body=155 status=ok
// SIG undefined FUN_1470e5326(void)

longlong * FUN_1470e5326(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x40);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar5 = lVar4 * 0x60;
    plVar2 = plVar3;
    do {
      if (*plVar2 == *param_2) {
        if (plVar2 != (longlong *)0x0) {
          return plVar2;
        }
        break;
      }
      plVar2 = plVar2 + 0xc;
      lVar5 = lVar5 + -0x60;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 0x40) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
    FUN_1470e8d6c((undefined8 *)(param_1 + 0x38),iVar1);
    plVar3 = *(longlong **)(param_1 + 0x38);
  }
  plVar3[lVar4 * 0xc] = *param_2;
  plVar3[lVar4 * 0xc + 1] = 0;
  (plVar3 + lVar4 * 0xc + 1)[1] = 0;
  plVar3[lVar4 * 0xc + 3] = 0;
  (plVar3 + lVar4 * 0xc + 3)[1] = 0;
  plVar3[lVar4 * 0xc + 5] = 0;
  (plVar3 + lVar4 * 0xc + 5)[1] = 0;
  plVar3[lVar4 * 0xc + 7] = 0;
  (plVar3 + lVar4 * 0xc + 7)[1] = 0;
  plVar3[lVar4 * 0xc + 9] = 0;
  (plVar3 + lVar4 * 0xc + 9)[1] = 0;
  *(undefined1 *)(plVar3 + lVar4 * 0xc + 0xb) = 0;
  return plVar3 + lVar4 * 0xc;
}



// FUNCTION 1470e53c2 FUN_1470e53c2 body=158 status=ok
// SIG undefined FUN_1470e53c2(void)

longlong * FUN_1470e53c2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x48);
  iVar1 = *(int *)(param_1 + 0x50);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar5 = lVar4 * 0x78;
    plVar2 = plVar3;
    do {
      if (*plVar2 == *param_2) {
        if (plVar2 != (longlong *)0x0) {
          return plVar2;
        }
        break;
      }
      plVar2 = plVar2 + 0xf;
      lVar5 = lVar5 + -0x78;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 0x50) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
    FUN_1470e8e00((undefined8 *)(param_1 + 0x48),iVar1);
    plVar3 = *(longlong **)(param_1 + 0x48);
  }
  plVar3[lVar4 * 0xf] = *param_2;
  plVar3[lVar4 * 0xf + 1] = 0;
  *(undefined2 *)(plVar3 + lVar4 * 0xf + 5) = 0;
  *(undefined1 *)(plVar3 + lVar4 * 0xf + 6) = 0;
  *(undefined1 *)(plVar3 + lVar4 * 0xf + 7) = 0;
  *(undefined2 *)(plVar3 + lVar4 * 0xf + 0xb) = 0;
  *(undefined1 *)(plVar3 + lVar4 * 0xf + 0xc) = 0;
  plVar3[lVar4 * 0xf + 0xd] = 0;
  (plVar3 + lVar4 * 0xf + 0xd)[1] = 0;
  return plVar3 + lVar4 * 0xf;
}



// FUNCTION 1470e5460 FUN_1470e5460 body=95 status=ok
// SIG undefined FUN_1470e5460(void)

void FUN_1470e5460(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14a18c5f0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// FUNCTION 1470e54f8 FUN_1470e54f8 body=40 status=ok
// SIG undefined FUN_1470e54f8(void)

undefined8 FUN_1470e54f8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145b0071e(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1470e552a FUN_1470e552a body=22 status=ok
// SIG undefined FUN_1470e552a(void)

ulonglong FUN_1470e552a(uint *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  plVar3 = DAT_14c9a7c68;
  if (DAT_14c9a7c68 == (longlong *)0x0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(code **)(*DAT_14c9a7c68 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14c9a7c68 + 0x154) & 1) != 0) &&
       (*(int *)((longlong)DAT_14c9a7c68 + 0x1fc) < (int)DAT_14c9a7c68[0x3a])) goto LAB_144815de0;
LAB_144815f6c:
    iVar6 = (int)plVar3[0x59];
    uVar14 = *param_1;
    if ((longlong)iVar6 == -1) {
      if (((uVar14 != 0) && (param_1[1] != 0)) && (uVar14 != DAT_14c948000)) {
        puVar7 = &DAT_14c948028;
        goto LAB_144815fa4;
      }
LAB_1448160f1:
      puVar7 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      uVar14 = (uint)DAT_14c948618;
    }
    else {
      if (((uVar14 == 0) || (uVar5 = param_1[1], uVar5 == 0)) || (uVar14 == DAT_14c948000))
      goto LAB_1448160f1;
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < (int)uVar5) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (uVar5 == 1 && 0 < iVar6) {
        puVar8 = (uint *)&DAT_14c948618;
        if (*(int *)((longlong)plVar3 + 0x2cc) == 1) {
          puVar8 = puVar10;
        }
        uVar14 = *puVar8;
        puVar7 = (ulonglong *)(puVar8 + 1);
      }
      else {
        if ((int)uVar5 <= iVar6) goto LAB_1448160f1;
        puVar7 = (ulonglong *)(puVar10 + (longlong)iVar6 * 3 + 1);
        uVar14 = puVar10[(longlong)iVar6 * 3];
      }
    }
LAB_144815fa4:
    uVar2 = *puVar7;
    uVar15 = uVar2 >> 0x20;
    uVar5 = uVar14;
    if (uVar15 != 0) {
      uVar5 = FUN_144a78877(uVar14,uVar15);
    }
    if ((int)plVar3[0x50] != *(int *)((longlong)plVar3 + 0x2ac)) {
      plVar11 = plVar3 + 0x56;
      if ((longlong *)plVar3[0x57] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x57];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x58] - 1U & uVar5) * 4);
      if (iVar6 != -1) {
        plVar11 = plVar3 + 0x4f;
        lVar9 = *plVar11;
        uVar15 = 0;
LAB_144815ffc:
        lVar18 = (longlong)iVar6 * 0x20;
        if ((*(uint *)(lVar9 + lVar18) != uVar14) ||
           (lVar1 = lVar9 + lVar18, *(int *)(lVar1 + 8) != (int)(uVar2 >> 0x20)))
        goto LAB_144816008;
        uVar15 = 0;
        if ((lVar1 != 0) && ((longlong *)(lVar1 + 0x10) != (longlong *)0x0)) {
          lVar9 = *(longlong *)(lVar1 + 0x10);
          if (lVar9 != 0) {
            lVar18 = *(longlong *)(lVar9 + 0x60);
            if (lVar18 != 0) {
              do {
                FUN_144a62e5c(&uStack_40,lVar18 + 0x18,(int)plVar3[0x59],
                              *(undefined4 *)((longlong)plVar3 + 0x2cc));
                if (iStack_38 != 0) {
                  FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
                }
                iVar6 = FUN_144b0847a(plVar11);
                if (iVar6 == -1) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = (longlong)iVar6 * 0x20 + *plVar11;
                }
                plVar12 = (longlong *)(lVar9 + 0x10);
                if (lVar9 == 0) {
                  plVar12 = (longlong *)0x0;
                }
                lVar9 = *plVar12;
                lVar18 = *(longlong *)(lVar9 + 0x60);
              } while (lVar18 != 0);
            }
            uVar15 = *(ulonglong *)(lVar9 + 0x30);
            uStack_40 = uVar15;
            if (uVar15 != 0) goto LAB_144815ea3;
            FUN_140e43bf0(plVar3,&uStack_40,lVar9);
            uVar15 = uStack_40;
            if (uStack_40 != 0) {
              *(ulonglong *)(lVar9 + 0x30) = uStack_40;
              if (lVar9 != 0) {
                FUN_1407d81de(uStack_40 + 8,lVar9);
              }
              goto LAB_144815ea3;
            }
          }
          goto LAB_144816103;
        }
        goto LAB_144815ea3;
      }
    }
  }
  else {
    cVar4 = (**(code **)(*DAT_14c9a7c68 + 0x300))(DAT_14c9a7c68);
    if (cVar4 == '\0') goto LAB_144815f6c;
LAB_144815de0:
    puVar10 = (uint *)&DAT_14c948618;
    if (((*param_1 != 0) && (0 < (int)param_1[1])) && (*param_1 != DAT_14c948000)) {
      puVar10 = param_1 + 2;
      if (0 < (int)param_1[9]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
      if (1 < param_1[1]) {
        puVar10 = *(uint **)(param_1 + 6);
      }
    }
    uVar14 = *puVar10;
    uVar5 = puVar10[2];
    uVar13 = uVar14;
    if (uVar5 != 0) {
      uVar13 = uVar5 >> 0xd ^ uVar14 - uVar5;
      uVar16 = uVar13 << 8 ^ (-0x61c88647 - uVar5) - uVar13;
      uVar17 = uVar16 >> 0xd ^ (uVar5 - uVar13) - uVar16;
      uVar13 = uVar17 >> 0xc ^ (uVar13 - uVar16) - uVar17;
      uVar19 = uVar13 << 0x10 ^ (uVar16 - uVar17) - uVar13;
      uVar16 = uVar19 >> 5 ^ (uVar17 - uVar13) - uVar19;
      uVar17 = uVar16 >> 3 ^ (uVar13 - uVar19) - uVar16;
      uVar13 = uVar17 << 10 ^ (uVar19 - uVar16) - uVar17;
      uVar13 = uVar13 >> 0xf ^ uVar16 - (uVar17 + uVar13);
    }
    if ((int)plVar3[0x3a] != *(int *)((longlong)plVar3 + 0x1fc)) {
      plVar11 = plVar3 + 0x40;
      if ((longlong *)plVar3[0x41] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar3[0x41];
      }
      iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar3[0x42] - 1U & uVar13) * 4);
      if (iVar6 != -1) {
        lVar9 = plVar3[0x39];
        uVar15 = 0;
        do {
          lVar18 = (longlong)iVar6 * 0x20;
          if ((*(uint *)(lVar9 + lVar18) == uVar14) &&
             (lVar1 = lVar9 + lVar18, *(uint *)(lVar1 + 8) == uVar5)) {
            uVar15 = 0;
            if ((lVar1 != 0) && ((ulonglong *)(lVar1 + 0x10) != (ulonglong *)0x0)) {
              uVar15 = *(ulonglong *)(lVar1 + 0x10);
            }
            break;
          }
          iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
        } while (iVar6 != -1);
        goto LAB_144815ea3;
      }
    }
  }
LAB_144816103:
  uVar15 = 0;
LAB_144815ea3:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144816008:
  iVar6 = *(int *)(lVar9 + 0x18 + lVar18);
  if (iVar6 == -1) goto LAB_144815ea3;
  goto LAB_144815ffc;
}



// FUNCTION 1470e5540 FUN_1470e5540 body=183 status=ok
// SIG undefined FUN_1470e5540(void)

undefined8 FUN_1470e5540(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = 0;
  puVar2 = *(undefined4 **)(param_4 + 8);
  if ((DAT_14c9a1ab0 != 0) && (puVar2 != (undefined4 *)0x0)) {
    uVar1 = *(ushort *)(puVar2 + 10);
    if (((short)uVar1 < 0) || (*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8);
    }
  }
  puVar3 = &DAT_14c9485f0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = puVar2;
  }
  FUN_1447325ac(puVar3,&local_38,1);
  local_48 = uVar4;
  FUN_140699b4e(param_1,param_2,param_3,local_38);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e55f8 FUN_1470e55f8 body=179 status=ok
// SIG undefined FUN_1470e55f8(void)

void FUN_1470e55f8(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = 0;
  puVar2 = *(undefined4 **)(param_3 + 8);
  if ((DAT_14c9a1ab0 != 0) && (puVar2 != (undefined4 *)0x0)) {
    uVar1 = *(ushort *)(puVar2 + 10);
    if (((short)uVar1 < 0) || (*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8);
    }
  }
  puVar3 = &DAT_14c9485f0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = puVar2;
  }
  FUN_1447325ac(puVar3,&local_38,1);
  local_48 = param_4;
  FUN_14069887e(param_1,param_2,local_38,uVar4);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e56ac FUN_1470e56ac body=143 status=ok
// SIG undefined FUN_1470e56ac(void)

void FUN_1470e56ac(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    local_20 = 0;
    FUN_14485c47a(&local_20);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if (*(int *)(param_1 + 0x590) == *(int *)(param_1 + 0x5bc)) {
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1470e940e(param_1 + 0x588);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1470e575c FUN_1470e575c body=653 status=ok
// SIG undefined FUN_1470e575c(void)

ulonglong FUN_1470e575c(longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  undefined7 uVar14;
  ulonglong uVar13;
  bool bVar15;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = *(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x18);
  uVar5 = (uint)(param_4 >> 0x10);
  uVar10 = (uint)param_4 & 0xffff;
  local_60 = uVar4;
  local_58 = param_2;
  local_50 = param_4;
  uVar10 = FUN_144a78877(((uint)param_4 << 0x10 | uVar10) + (uVar5 << 0x13 | uVar5 & 0xffff) +
                         (uVar10 >> 4),param_4 >> 0x20);
  uVar5 = (uint)(param_2 >> 0x10);
  uVar11 = (uint)param_2 & 0xffff;
  uVar7 = FUN_144a78877(((uint)param_2 << 0x10 | uVar11) + (uVar5 << 0x13 | uVar5 & 0xffff) +
                        (uVar11 >> 4),param_2 >> 0x20);
  uVar5 = (uint)((ulonglong)uVar4 >> 0x10);
  uVar11 = (uint)uVar4 & 0xffff;
  uVar7 = FUN_144a78877(((uint)uVar4 << 0x10 | uVar11) + (uVar11 >> 4) +
                        (uVar5 << 0x13 | uVar5 & 0xffff),uVar7);
  uVar7 = FUN_144a78877(uVar7,uVar10);
  iVar8 = FUN_14069bcca((longlong *)(param_1 + 0x538),uVar7,&local_60);
  uVar14 = (undefined7)((ulonglong)param_1 >> 8);
  if (iVar8 == -1) {
LAB_1470e587e:
    plVar12 = (longlong *)0x0;
LAB_1470e5880:
    FUN_140520a5e(param_1,&local_70,&local_60);
    plVar3 = local_68;
    if (local_68 == (longlong *)0x0) {
      bVar15 = true;
    }
    else {
      iVar8 = (int)local_68[1];
      do {
        if (iVar8 == 0) {
          bVar15 = true;
          goto LAB_1470e59bb;
        }
        LOCK();
        iVar6 = (int)local_68[1];
        bVar15 = iVar8 == iVar6;
        if (bVar15) {
          *(int *)(local_68 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar15);
      bVar15 = local_70 == 0;
      if (!bVar15) {
        if ((*(char *)(local_70 + 0x30) == '\0') && (*(char *)(local_70 + 0x31) == '\0')) {
          uVar10 = (uint)(*(int *)(local_70 + 0x6c) == 2);
        }
        else {
          uVar10 = 0;
        }
      }
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
LAB_1470e59bb:
      if (local_68 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
    }
    uVar13 = CONCAT71(uVar14,(bVar15 ^ 1U) & (byte)uVar10);
    if (plVar12 == (longlong *)0x0) goto LAB_1470e5937;
  }
  else {
    lVar9 = (longlong)iVar8 * 0x30 + *(longlong *)(param_1 + 0x538);
    if (((longlong *)(lVar9 + 0x18) == (longlong *)0x0 || lVar9 == 0) ||
       (plVar12 = *(longlong **)(lVar9 + 0x20), plVar12 == (longlong *)0x0)) goto LAB_1470e587e;
    iVar8 = (int)plVar12[1];
    do {
      if (iVar8 == 0) goto LAB_1470e587e;
      LOCK();
      iVar6 = (int)plVar12[1];
      bVar15 = iVar8 == iVar6;
      if (bVar15) {
        *(int *)(plVar12 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar15);
    lVar9 = *(longlong *)(lVar9 + 0x18);
    if (lVar9 == 0) goto LAB_1470e5880;
    lVar9 = *(longlong *)(lVar9 + 0x20);
    if ((((lVar9 == 0) || (*(char *)(lVar9 + 0x30) != '\0')) || (*(char *)(lVar9 + 0x31) != '\0'))
       || (uVar13 = CONCAT71(uVar14,1), *(int *)(lVar9 + 0x6c) != 2)) {
      uVar13 = 0;
    }
  }
  LOCK();
  plVar3 = plVar12 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar2 = (int *)((longlong)plVar12 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
LAB_1470e5937:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 1470e59ea FUN_1470e59ea body=168 status=ok
// SIG undefined FUN_1470e59ea(void)

void FUN_1470e59ea(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    lVar1 = FUN_144a79cc8();
    if (lVar1 != 0) {
      lVar2 = FUN_14050fd64();
      local_28 = 0;
      FUN_14485c47a(&local_28,lVar1);
      FUN_14080929a(lVar2 + 0x588,local_28);
      goto LAB_1470e5a58;
    }
  }
  lVar1 = FUN_14050fd64();
  if (*(int *)(lVar1 + 0x590) != *(int *)(lVar1 + 0x5bc)) {
    FUN_1470e940e(lVar1 + 0x588);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
LAB_1470e5a58:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e5aa2 FUN_1470e5aa2 body=61 status=ok
// SIG undefined FUN_1470e5aa2(void)

void FUN_1470e5aa2(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14050fd64();
  if (*(int *)(lVar1 + 0x590) == *(int *)(lVar1 + 0x5bc)) {
    return;
  }
  FUN_1470e940e(lVar1 + 0x588);
  FUN_1470e9552(lVar1 + 0x588);
  return;
}



// FUNCTION 1470e5ae0 FUN_1470e5ae0 body=126 status=ok
// SIG undefined FUN_1470e5ae0(void)

longlong * FUN_1470e5ae0(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_144a6c4d8();
  FUN_14123d74c(uVar2,param_1,param_3,param_2,uVar1 | param_4 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 1470e5b5e FUN_1470e5b5e body=125 status=ok
// SIG undefined FUN_1470e5b5e(void)

void FUN_1470e5b5e(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  FUN_1405d1525(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x34) != 0)) {
    FUN_1470e7ce6(param_1 + 0x28,0);
  }
  FUN_1470e7c86(param_1 + 0x28,param_2 + 0x308);
  FUN_144a787a6(param_1 + 0x38,param_2 + 0x350);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x34c);
  *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + (uint)(*(int *)(param_1 + 0x20) == 0);
  return;
}



// FUNCTION 1470e5bdc FUN_1470e5bdc body=103 status=ok
// SIG undefined FUN_1470e5bdc(void)

void FUN_1470e5bdc(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x50);
  if (lVar2 != 0) {
    if (((param_2 == 0) || (*(longlong *)(param_2 + 0x2e0) == 0)) ||
       (plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x2e0) + 0x70), plVar1 == (longlong *)0x0))
    {
      lVar3 = 0;
    }
    else {
      lVar3 = (**(code **)(*plVar1 + 0x3d0))();
    }
    if (lVar3 == lVar2) {
      FUN_147a593ca(param_1,param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 1470e5c44 FUN_1470e5c44 body=136 status=ok
// SIG undefined FUN_1470e5c44(void)

undefined8 FUN_1470e5c44(undefined1 *param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  puVar3 = (undefined8 *)FUN_144a7cdc2(param_2,&DAT_14c9a7cc8);
  pbVar1 = (byte *)*puVar3;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(pbVar1 + 8);
  }
  uVar2 = FUN_1470e9ef0(uVar4);
  *param_1 = uVar2;
  uVar4 = FUN_144a7cdc2(param_2,&DAT_14c9a7cd0);
  uVar5 = FUN_140b963dc(uVar4,0x40000000);
  *(undefined4 *)(param_1 + 4) = uVar5;
  uVar4 = FUN_144a7cdc2(param_2,&DAT_14c9a7cd8);
  uVar5 = FUN_140e1edd4(uVar4,2);
  *(undefined4 *)(param_1 + 8) = uVar5;
  return 1;
}



// FUNCTION 1470e5ccc FUN_1470e5ccc body=38 status=ok
// SIG undefined FUN_1470e5ccc(void)

undefined8 FUN_1470e5ccc(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"GbxManagerTick",1);
  return param_2;
}



// FUNCTION 1470e5cf2 FUN_1470e5cf2 body=32 status=ok
// SIG undefined FUN_1470e5cf2(void)

undefined8 FUN_1470e5cf2(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"GbxManagerTick");
  return param_2;
}



// FUNCTION 1470e5d12 FUN_1470e5d12 body=155 status=ok
// SIG undefined FUN_1470e5d12(void)

void FUN_1470e5d12(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_1 + 0x21c);
  FUN_147d8f5e6(param_1,&local_40,param_2);
  local_44 = 0;
  FUN_147d8f316(param_1,param_2);
  *(float *)(param_1 + 0x218) = (float)((double)*(float *)(param_1 + 0x218) + local_40);
  *(undefined4 *)(param_1 + 0x21c) = uVar1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((float)local_38);
}



// FUNCTION 1470e5e3a FUN_1470e5e3a body=755 status=ok
// SIG undefined FUN_1470e5e3a(void)

void FUN_1470e5e3a(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  short *psVar4;
  short *psVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint uVar8;
  short *psVar9;
  undefined2 *puVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  short *local_e8;
  longlong local_e0;
  longlong local_d8 [2];
  undefined4 *local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar10 = &DAT_149dfb77a;
  psVar4 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 1) != 0) {
    psVar4 = (short *)*param_2;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x218);
  local_c8 = (undefined4 *)0x0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  uStack_c0 = 1;
  FUN_14602b1fc(&local_c8,0);
  *local_c8 = 0xffffffff;
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  else {
    puVar10 = (undefined2 *)*param_2;
  }
  fVar12 = 0.0;
  if (psVar4 < puVar10 + iVar2) {
    uVar8 = 1;
    uVar6 = 0;
    local_f8 = 0;
    uVar7 = 0;
    psVar5 = psVar4;
    psVar9 = psVar4;
    local_e0 = param_1;
    do {
      if ((1 < uVar8) && (*psVar4 == 0x20)) goto LAB_1470e617d;
      if (uVar8 < 7) {
        uVar3 = (ulonglong)uVar8;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(uVar8) {
        case 0:
          if (*psVar4 != 0x7b) {
            uVar8 = 0;
            goto LAB_1470e6172;
          }
          uVar8 = 2;
          if (psVar5 < psVar4) {
            local_f4 = uVar7;
            local_f0 = uVar6;
            local_e8 = psVar5;
            FUN_1400089be(local_d8,(ulonglong)((longlong)psVar9 - (longlong)psVar5) >> 1);
            fVar11 = (float)FUN_1470e5d12(param_1,local_d8);
            if (local_d8[0] != 0) {
              FUN_1400020a8();
            }
            if (fVar12 <= fVar11) {
              fVar12 = fVar11;
            }
            local_f8 = 0;
            param_1 = local_e0;
            psVar5 = local_e8;
            uVar6 = local_f0;
            uVar7 = local_f4;
          }
          else {
            local_f8 = 0;
          }
          break;
        case 1:
          uVar8 = 2;
          if (*psVar4 != 0x7b) {
            local_f8 = (undefined4)
                       CONCAT71((int7)((ulonglong)
                                       ((longlong)&switchD_1470e5f6b::switchdataD_14a1ca73c +
                                       (longlong)
                                       (int)(&switchD_1470e5f6b::switchdataD_14a1ca73c)[uVar3]) >> 8
                                      ),1);
            uVar8 = 0;
            psVar5 = psVar4;
            goto LAB_1470e6172;
          }
        }
      }
      else {
LAB_1470e6172:
        uVar8 = (uint)(uVar8 != 0);
      }
LAB_1470e617d:
      puVar10 = &DAT_149dfb77a;
      iVar2 = *(int *)(param_2 + 1) + -1;
      if (*(int *)(param_2 + 1) == 0) {
        iVar2 = 0;
      }
      else {
        puVar10 = (undefined2 *)*param_2;
      }
      psVar4 = psVar4 + 1;
      psVar9 = psVar9 + 1;
    } while (psVar4 < puVar10 + iVar2);
    if (((byte)local_f8 & psVar5 < psVar4) == 1) {
      FUN_1400089be(local_d8,(ulonglong)((longlong)psVar9 - (longlong)psVar5) >> 1 & 0xffffffff);
      fVar11 = (float)FUN_1470e5d12(param_1,local_d8);
      if (local_d8[0] != 0) {
        FUN_1400020a8();
      }
      if (fVar12 <= fVar11) {
        fVar12 = fVar11;
      }
    }
  }
  *(float *)(param_1 + 0x21c) = fVar12 + *(float *)(param_1 + 0x21c);
  *(undefined4 *)(param_1 + 0x218) = uVar1;
  if (local_c8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e6416 FUN_1470e6416 body=24 status=ok
// SIG undefined FUN_1470e6416(void)

void FUN_1470e6416(int *param_1,int param_2)

{
  if ((((char)param_1[2] == '\x01') && (*param_1 <= param_2)) && (param_2 <= param_1[1])) {
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1470e647a FUN_1470e647a body=163 status=ok
// SIG undefined FUN_1470e647a(void)

undefined8 FUN_1470e647a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [36];
  undefined4 local_24 [2];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a62e5c(local_24,param_2,*(undefined4 *)(param_1 + 0x338),*(undefined4 *)(param_1 + 0x33c));
  if (local_1c != 0) {
    FUN_144a78877(local_24[0],local_1c);
  }
  iVar1 = FUN_1447fa34e((longlong *)(param_1 + 0x2e8));
  if (((iVar1 == -1) ||
      (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x2e8), lVar2 == 0)) ||
     (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x30);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e6558 FUN_1470e6558 body=826 status=ok
// SIG undefined FUN_1470e6558(void)

void FUN_1470e6558(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined4 local_a0;
  uint uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  ulonglong uStack_88;
  longlong local_80;
  longlong lStack_78;
  ulonglong local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar1 = (longlong *)(param_1 + 0x2e8);
  lVar2 = param_1 + 0x2f8;
  local_e0 = (longlong *)&DAT_100000000;
  local_d0 = 0xffffffff;
  uStack_c8 = uStack_c8 & 0xffffffff00000000;
  uStack_d8 = lVar2;
  if (*(int *)(param_1 + 0x310) == 0) {
    iVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_e0);
    iVar13 = *(int *)(param_1 + 0x310);
  }
  local_90 = local_d0;
  lVar11 = local_90;
  uStack_88 = uStack_c8;
  local_a0 = (undefined4)local_e0;
  uStack_9c = local_e0._4_4_;
  uStack_98 = (undefined4)uStack_d8;
  uStack_94 = uStack_d8._4_4_;
  local_90._4_4_ = (int)((ulonglong)local_d0 >> 0x20);
  local_a8 = plVar1;
  if ((local_90._4_4_ != iVar13) || (uStack_d8 != lVar2)) {
    iVar8 = local_90._4_4_;
    local_f0 = param_1;
    local_90 = lVar11;
    do {
      if (*(longlong *)(*local_a8 + 0x10 + (longlong)iVar8 * 0x20) != 0) {
        plVar10 = (longlong *)(*local_a8 + (longlong)iVar8 * 0x20 + 0x10);
        FUN_1470e6894(param_1);
        plVar12 = *(longlong **)(*plVar10 + 0x30);
        if (plVar12 != (longlong *)0x0) {
          local_b8 = 0;
          uStack_b0 = 0;
          lVar11 = *plVar10;
          iVar8 = *(int *)(lVar11 + 0x78) - *(int *)(lVar11 + 0xa4);
          local_e8 = plVar12;
          if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar8);
          }
          if (iVar8 != 0) {
            FUN_1470eaeee(&local_b8);
            lVar11 = *plVar10;
          }
          lVar3 = lVar11 + 0x80;
          local_80 = 0x100000000;
          local_70 = 0xffffffff;
          uStack_68 = 0;
          lStack_78 = lVar3;
          if (*(int *)(lVar11 + 0x98) == 0) {
            iVar8 = 0;
          }
          else {
            FUN_1449c0562(&local_80);
            iVar8 = *(int *)(lVar11 + 0x98);
          }
          plVar12 = (longlong *)(lVar11 + 0x70);
          uStack_c0 = CONCAT44(uStack_64,uStack_68);
          uStack_c8 = local_70;
          uVar4 = uStack_c8;
          uStack_d8 = local_80;
          local_d0 = lStack_78;
          uStack_c8._4_4_ = (int)(local_70 >> 0x20);
          iVar7 = uStack_c8._4_4_;
          local_e0 = plVar12;
          if ((uStack_c8._4_4_ != iVar8) || (uStack_c8 = uVar4, lStack_78 != lVar3)) {
            do {
              uStack_c8 = uVar4;
              lVar11 = *local_e0;
              if (*(longlong *)(lVar11 + 0x10 + (longlong)iVar7 * 0x20) != 0) {
                FUN_1470e6912(local_f0,local_e8);
                lVar11 = *(longlong *)(*(longlong *)(lVar11 + (longlong)iVar7 * 0x20 + 0x10) + 0x30)
                ;
                if (lVar11 != 0) {
                  lVar9 = (longlong)(int)uStack_b0;
                  uVar6 = (int)uStack_b0 + 1;
                  uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar6);
                  if (uStack_b0._4_4_ < uVar6) {
                    local_f8 = lVar9;
                    FUN_1470eaf4e(&local_b8,lVar9);
                    lVar9 = local_f8;
                  }
                  *(longlong *)(local_b8 + lVar9 * 8) = lVar11;
                }
              }
              uStack_c8 = CONCAT44(uStack_c8._4_4_,(uint)uStack_c8 & ~uStack_d8._4_4_);
              FUN_1449c0562(&uStack_d8);
              iVar7 = uStack_c8._4_4_;
              uVar4 = uStack_c8;
            } while (local_e0 != plVar12 || (local_d0 != lVar3 || uStack_c8._4_4_ != iVar8));
          }
          plVar12 = local_e8;
          cVar5 = (**(code **)(*local_e8 + 0x30))(local_e8,&local_b8);
          param_1 = local_f0;
          if (cVar5 == '\0') {
            *(undefined1 *)(plVar12 + 3) = 0;
          }
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
        }
      }
      local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~uStack_9c);
      FUN_1449c0562(&local_a0);
      iVar8 = local_90._4_4_;
      lVar11 = local_90;
    } while (local_a8 != plVar1 ||
             (CONCAT44(uStack_94,uStack_98) != lVar2 || local_90._4_4_ != iVar13));
  }
  local_90 = lVar11;
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470e6894 FUN_1470e6894 body=126 status=ok
// SIG undefined FUN_1470e6894(void)

void FUN_1470e6894(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_2 + 0x30) != 0) {
    *(undefined1 *)(*(longlong *)(param_2 + 0x30) + 0x18) = 0;
  }
  uVar2 = FUN_140d2fab0();
  cVar1 = FUN_1470e698c(param_1,(undefined8 *)(param_2 + 0x30),param_2,uVar2,0);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0x30);
    if (param_2 != 0) {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_1407d81de(lVar3 + 8,param_2);
        lVar3 = *(longlong *)(param_2 + 0x30);
      }
    }
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x44);
    *(undefined1 *)(lVar3 + 0x18) = 1;
  }
  return;
}



// FUNCTION 1470e6912 FUN_1470e6912 body=122 status=ok
// SIG undefined FUN_1470e6912(void)

void FUN_1470e6912(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_3 + 0x30) != 0) {
    *(undefined1 *)(*(longlong *)(param_3 + 0x30) + 0x18) = 0;
  }
  uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  uVar3 = FUN_1462afafa();
  cVar1 = FUN_1470e698c(param_1,(undefined8 *)(param_3 + 0x30),param_3,uVar3,uVar2);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_3 + 0x30) = 0;
  }
  else {
    FUN_1400f0d6e(param_1,param_3,0);
    *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_3 + 0x44);
    *(undefined1 *)(*(longlong *)(param_3 + 0x30) + 0x18) = 1;
  }
  return;
}



// FUNCTION 1470e698c FUN_1470e698c body=947 status=ok
// SIG undefined FUN_1470e698c(void)

ulonglong FUN_1470e698c(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                       longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  longlong local_88 [2];
  byte *local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = (byte *)0x0;
  plStack_70 = (longlong *)0x0;
  local_88[0] = 0;
  local_88[1] = 0;
  cVar4 = (**(code **)(*param_1 + 0x418))();
  if (cVar4 == '\0') {
LAB_1470e6a3c:
    plVar9 = (longlong *)0x0;
LAB_1470e6a3f:
    local_60 = plVar9;
    if (*param_2 != 0) {
      iVar3 = (int)param_1[0x69];
      *(uint *)(param_1 + 0x69) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x34c) < iVar3 + 1U) {
        FUN_1470a4daa(param_1 + 0x68,iVar3);
      }
      *(longlong *)(param_1[0x68] + (longlong)iVar3 * 8) = *param_2;
    }
  }
  else {
    FUN_1446e9750(param_1,&local_78,local_88,0);
    plVar9 = (longlong *)0x0;
    if (local_78 == (byte *)0x0) goto LAB_1470e6a3f;
    if ((*local_78 & 0x6b) != 3) goto LAB_1470e6a3c;
    if (param_5 == 0) {
      FUN_14480757c(&local_68,&DAT_14c9a81c0);
      puVar5 = (undefined8 *)FUN_144a06846(&local_78,&local_68);
      local_98 = *puVar5;
      local_90 = (longlong *)puVar5[1];
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_90 + 1) = (int)local_90[1] + 1;
        UNLOCK();
      }
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      param_5 = 0;
      FUN_1408db4c4(&local_68,&local_98,0,1);
      if (local_68 != 0) {
        param_5 = FUN_140007850(&local_68);
        if (param_5 != 0) {
          lVar8 = FUN_1446f4bba();
          if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(param_5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) goto LAB_1470e6bd4;
        }
        FUN_14475c82a(&local_68);
        param_5 = FUN_140007850(&local_68);
        if (param_5 != 0) {
          lVar8 = FUN_1446f4bba();
          if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(param_5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(param_5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) goto LAB_1470e6bd4;
        }
        param_5 = 0;
      }
LAB_1470e6bd4:
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      plVar9 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_90 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
    plVar9 = (longlong *)0x0;
    if (((param_4 == 0) || (param_5 == 0)) || (plVar9 = (longlong *)0x0, param_5 == param_4))
    goto LAB_1470e6a3f;
    if ((*(int *)(param_5 + 0x38) < *(int *)(param_4 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_5 + 0x30) + (longlong)*(int *)(param_4 + 0x38) * 8) !=
        param_4 + 0x30)) goto LAB_1470e6a3c;
    FUN_1470e6d40(param_1,&local_68,param_5);
    plVar9 = local_60;
    if (local_68 == 0) goto LAB_1470e6a3f;
    if ((longlong *)*param_2 != (longlong *)0x0) {
      lVar6 = (**(code **)(*(longlong *)*param_2 + 8))();
      lVar8 = local_68 + 0x38;
      lVar7 = FUN_14479d2ce(lVar8);
      if (lVar6 != lVar7) goto LAB_1470e6c7b;
      lVar6 = *param_2;
      plVar9 = (longlong *)FUN_14479d2ce(lVar8);
      (**(code **)(*plVar9 + 0x2f0))(plVar9,lVar6,1);
      plVar9 = (longlong *)FUN_14479d2ce(lVar8);
      (**(code **)(*plVar9 + 0x2e8))(plVar9,lVar6,1);
      lVar8 = *param_2;
LAB_1470e6cd1:
      uVar10 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      FUN_1446e7478(&local_78,lVar8,param_5,1);
      plVar9 = local_60;
      goto LAB_1470e6a74;
    }
LAB_1470e6c7b:
    lVar8 = FUN_14012ad82(local_68);
    if (*param_2 != lVar8 && *param_2 != 0) {
      iVar3 = (int)param_1[0x69];
      *(uint *)(param_1 + 0x69) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x34c) < iVar3 + 1U) {
        FUN_1470a4daa(param_1 + 0x68,iVar3);
      }
      *(longlong *)(param_1[0x68] + (longlong)iVar3 * 8) = *param_2;
    }
    *param_2 = lVar8;
    if (lVar8 != 0) goto LAB_1470e6cd1;
  }
  uVar10 = 0;
  plVar9 = local_60;
LAB_1470e6a74:
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  plVar9 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e6d40 FUN_1470e6d40 body=317 status=ok
// SIG undefined FUN_1470e6d40(void)

longlong * FUN_1470e6d40(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x358) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x350);
    lVar5 = (longlong)*(int *)(param_1 + 0x358) << 4;
    do {
      lVar3 = FUN_14479d2ce(*plVar4 + 0x38);
      if (lVar3 == param_3) {
        if (plVar4 != (longlong *)0x0) {
          lVar5 = *plVar4;
          *param_2 = lVar5;
          lVar3 = plVar4[1];
          param_2[1] = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
            lVar5 = *param_2;
          }
          if (lVar5 != 0) goto LAB_1470e6e4f;
          plVar4 = (longlong *)param_2[1];
          goto LAB_1470e6da4;
        }
        break;
      }
      plVar4 = plVar4 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  param_2[1] = 0;
  plVar4 = (longlong *)0x0;
LAB_1470e6da4:
  FUN_1470e6e7e(param_1,&local_40,param_3);
  plVar1 = local_38;
  *param_2 = local_40;
  local_40 = 0;
  if (local_38 != plVar4) {
    local_38 = (longlong *)0x0;
    param_2[1] = (longlong)plVar1;
    if (plVar4 == (longlong *)0x0) goto LAB_1470e6e4f;
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
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_1470e6e4f:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1470e6e7e FUN_1470e6e7e body=262 status=ok
// SIG undefined FUN_1470e6e7e(void)

undefined8 * FUN_1470e6e7e(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar5 = (longlong *)FUN_14001cc68(0x50,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14a1ca340;
    FUN_14012c1dc(plVar5 + 2,param_3);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    iVar3 = *(int *)(param_1 + 0x358);
    *(uint *)(param_1 + 0x358) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x35c) < iVar3 + 1U) {
      FUN_14012c348((longlong *)(param_1 + 0x350),iVar3);
    }
    lVar4 = *(longlong *)(param_1 + 0x350);
    *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar5 + 2;
    *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar5;
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
    lVar4 = *(longlong *)(param_1 + 0x350);
    lVar6 = (longlong)(*(int *)(param_1 + 0x358) + -1) * 0x10;
    *param_2 = *(undefined8 *)(lVar4 + lVar6);
    lVar4 = *(longlong *)(lVar4 + 8 + lVar6);
    param_2[1] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 1470e6f84 FUN_1470e6f84 body=70 status=ok
// SIG undefined FUN_1470e6f84(void)

undefined8 * FUN_1470e6f84(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14119c38e(&DAT_14c9a8258);
  *puVar1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(puVar1 + 1);
  *puVar1 = &PTR_FUN_14a1c92a0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  return puVar1;
}



// FUNCTION 1470e6fca FUN_1470e6fca body=58 status=ok
// SIG undefined FUN_1470e6fca(void)

undefined8 * FUN_1470e6fca(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14a1c92a0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  return param_1;
}



// FUNCTION 1470e7004 FUN_1470e7004 body=44 status=ok
// SIG undefined FUN_1470e7004(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470e7004(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14c9a8264 = _DAT_14c9a8264 + -1;
  *param_1 = DAT_14c9a8258;
  DAT_14c9a8258 = param_1;
  return;
}



// FUNCTION 1470e7030 FUN_1470e7030 body=62 status=ok
// SIG undefined FUN_1470e7030(void)

void FUN_1470e7030(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14a1c92a0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 1470e706e FUN_1470e706e body=74 status=ok
// SIG undefined FUN_1470e706e(void)

undefined8 * FUN_1470e706e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14119c38e(&DAT_14c9a8350);
  *puVar1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(puVar1 + 1);
  *puVar1 = &PTR_FUN_14a1c92d0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  return puVar1;
}



// FUNCTION 1470e70b8 FUN_1470e70b8 body=62 status=ok
// SIG undefined FUN_1470e70b8(void)

undefined8 * FUN_1470e70b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14a1c92d0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  return param_1;
}



// FUNCTION 1470e70f6 FUN_1470e70f6 body=44 status=ok
// SIG undefined FUN_1470e70f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470e70f6(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14c9a835c = _DAT_14c9a835c + -1;
  *param_1 = DAT_14c9a8350;
  DAT_14c9a8350 = param_1;
  return;
}



// FUNCTION 1470e7122 FUN_1470e7122 body=70 status=ok
// SIG undefined FUN_1470e7122(void)

void FUN_1470e7122(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *param_1 = &PTR_FUN_14a1c92d0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 1470e7168 FUN_1470e7168 body=60 status=ok
// SIG undefined FUN_1470e7168(void)

longlong * FUN_1470e7168(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  if (*(longlong *)(param_1 + 0x1c) == 0) {
    puVar1 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)(param_1 + 8);
    }
    FUN_1447325ac(puVar1,param_2,1);
  }
  else {
    *param_2 = *(longlong *)(param_1 + 0x1c);
  }
  return param_2;
}



// FUNCTION 1470e71a4 FUN_1470e71a4 body=22 status=ok
// SIG undefined FUN_1470e71a4(void)

undefined8 FUN_1470e71a4(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [36];
  undefined4 auStack_24 [2];
  int iStack_1c;
  ulonglong uStack_18;
  
  lVar2 = DAT_14c9a81f0;
  if (DAT_14c9a81f0 == 0) {
    return 0;
  }
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a62e5c(auStack_24,param_1,*(undefined4 *)(DAT_14c9a81f0 + 0x338),
                *(undefined4 *)(DAT_14c9a81f0 + 0x33c));
  if (iStack_1c != 0) {
    FUN_144a78877(auStack_24[0],iStack_1c);
  }
  iVar1 = FUN_1447fa34e((longlong *)(lVar2 + 0x2e8));
  if (((iVar1 == -1) || (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)(lVar2 + 0x2e8), lVar2 == 0))
     || (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x30);
  }
  if ((uStack_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e71ba FUN_1470e71ba body=106 status=ok
// SIG undefined FUN_1470e71ba(void)

undefined4 * FUN_1470e71ba(undefined4 *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  lVar3 = *(longlong *)(param_2 + 4);
  lVar4 = *(longlong *)(param_1 + 4);
  if (lVar4 != lVar3) {
    *(longlong *)(param_1 + 4) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  memcpy(param_1 + 6,param_2 + 6,0x90);
  return param_1;
}



// FUNCTION 1470e7224 FUN_1470e7224 body=142 status=ok
// SIG undefined FUN_1470e7224(void)

undefined8 FUN_1470e7224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0x44fa0000;
  local_30 = 0xbf80000043800000;
  local_48 = (undefined4)DAT_14c8464e0;
  uStack_44 = DAT_14c8464e0._4_4_;
  uStack_40 = (undefined4)DAT_14c8464e8;
  uStack_3c = DAT_14c8464e8._4_4_;
  local_38 = DAT_14c8464f0;
  FUN_14080fbce(&local_50);
  FUN_1409cd2ec(&local_50,param_1,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e72b4 FUN_1470e72b4 body=258 status=ok
// SIG undefined FUN_1470e72b4(void)

void FUN_1470e72b4(float *param_1,double *param_2,double *param_3,float param_4)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = (float)SQRT((*param_3 - *param_2) * (*param_3 - *param_2) +
                      (param_3[1] - param_2[1]) * (param_3[1] - param_2[1]));
  dVar1 = param_3[2];
  dVar2 = param_2[2];
  fVar3 = cosf(param_1[9] * 0.017453292);
  fVar4 = sinf(param_1[9] * 0.017453292);
  fVar4 = ((float)(dVar1 - dVar2) * fVar3 - fVar4 * fVar5) / (param_4 * 0.5 * fVar3);
  if (fVar4 < 0.0) {
    fVar4 = sqrtf(fVar4);
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  *param_1 = (fVar5 / fVar4) / fVar3;
  return;
}



// FUNCTION 1470e73c6 FUN_1470e73c6 body=52 status=ok
// SIG undefined FUN_1470e73c6(void)

undefined8 * FUN_1470e73c6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e7400 FUN_1470e7400 body=52 status=ok
// SIG undefined FUN_1470e7400(void)

undefined8 * FUN_1470e7400(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e7444 FUN_1470e7444 body=32 status=ok
// SIG undefined FUN_1470e7444(void)

undefined8 FUN_1470e7444(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"undefined");
  return param_2;
}



// FUNCTION 1470e74de FUN_1470e74de body=29 status=ok
// SIG undefined FUN_1470e74de(void)

undefined8 FUN_1470e74de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e74fc FUN_1470e74fc body=83 status=ok
// SIG undefined FUN_1470e74fc(void)

void FUN_1470e74fc(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9a93b0;
  uVar2 = (ushort)DAT_14c9a93b0;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9a9448 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9a93b0);
  }
  else {
    (*DAT_14c9a9448)();
  }
  *(undefined1 *)(param_2 + 4) = 0xd;
  return;
}



// FUNCTION 1470e7550 FUN_1470e7550 body=83 status=ok
// SIG undefined FUN_1470e7550(void)

void FUN_1470e7550(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9a93b0;
  uVar2 = (ushort)DAT_14c9a93b0;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9a9448 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9a93b0);
  }
  else {
    (*DAT_14c9a9448)();
  }
  *(undefined1 *)(param_2 + 4) = 0xd;
  return;
}



// FUNCTION 1470e75a4 FUN_1470e75a4 body=81 status=ok
// SIG undefined FUN_1470e75a4(void)

void FUN_1470e75a4(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      puVar2 = (undefined8 *)*param_2;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    FUN_1400020a8(*param_2);
    return;
  }
  return;
}



// FUNCTION 1470e760c FUN_1470e760c body=283 status=ok
// SIG undefined FUN_1470e760c(void)

undefined8 FUN_1470e760c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    bVar1 = *(byte *)(param_2 + 4);
    if (bVar1 == *(byte *)(param_3 + 4)) {
      puVar6 = param_3;
      if (0x18 < *(ushort *)(param_3 + 3)) {
        puVar6 = (undefined8 *)*param_3;
      }
      puVar5 = param_2;
      if (0x18 < *(ushort *)(param_2 + 3)) {
        puVar5 = (undefined8 *)*param_2;
      }
      uVar4 = (ulonglong)((uint)bVar1 * 0x120);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
      }
      else {
        (*pcVar3)();
      }
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar6 = param_2;
        if (0x18 < *(ushort *)(param_2 + 3)) {
          puVar6 = (undefined8 *)*param_2;
        }
        (*pcVar3)(puVar6);
      }
      if (0x18 < *(ushort *)(param_2 + 3)) {
        FUN_1400020a8(*param_2);
      }
      bVar1 = *(byte *)(param_3 + 4);
      uVar2 = *(ushort *)(param_3 + 3);
      *(ushort *)(param_2 + 3) = uVar2;
      puVar5 = param_2;
      puVar6 = param_3;
      if (0x18 < uVar2) {
        puVar5 = (undefined8 *)FUN_14001cc68(uVar2,0);
        *param_2 = puVar5;
        puVar6 = (undefined8 *)*param_3;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    }
    param_3 = param_3 + 5;
    param_2 = param_2 + 5;
  }
  return 1;
}



// FUNCTION 1470e7750 FUN_1470e7750 body=59 status=ok
// SIG undefined FUN_1470e7750(void)

undefined8 FUN_1470e7750(longlong *param_1)

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



// FUNCTION 1470e77ee FUN_1470e77ee body=85 status=ok
// SIG undefined FUN_1470e77ee(void)

void FUN_1470e77ee(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar1 != (code *)0x0) {
      puVar2 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar2 = (undefined8 *)*param_1;
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 1470e7844 FUN_1470e7844 body=40 status=ok
// SIG undefined FUN_1470e7844(void)

void FUN_1470e7844(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140e29948();
  FUN_14470ec92(uVar1,param_1,param_2,0);
  return;
}



// FUNCTION 1470e786c FUN_1470e786c body=39 status=ok
// SIG undefined FUN_1470e786c(void)

void FUN_1470e786c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140e29948();
  FUN_14470ec92(uVar1,param_1,&DAT_14c9a83f0,0);
  return;
}



// FUNCTION 1470e78be FUN_1470e78be body=29 status=ok
// SIG undefined FUN_1470e78be(void)

undefined8 FUN_1470e78be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e78dc FUN_1470e78dc body=83 status=ok
// SIG undefined FUN_1470e78dc(void)

void FUN_1470e78dc(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9a9830;
  uVar2 = (ushort)DAT_14c9a9830;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9a98c8 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9a9830);
  }
  else {
    (*DAT_14c9a98c8)();
  }
  *(undefined1 *)(param_2 + 4) = 0x11;
  return;
}



// FUNCTION 1470e7930 FUN_1470e7930 body=83 status=ok
// SIG undefined FUN_1470e7930(void)

void FUN_1470e7930(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *_Dst;
  
  uVar1 = DAT_14c9a9830;
  uVar2 = (ushort)DAT_14c9a9830;
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (DAT_14c9a98c8 == (code *)0x0) {
    memset(_Dst,0,(longlong)(int)DAT_14c9a9830);
  }
  else {
    (*DAT_14c9a98c8)();
  }
  *(undefined1 *)(param_2 + 4) = 0x11;
  return;
}



// FUNCTION 1470e7984 FUN_1470e7984 body=81 status=ok
// SIG undefined FUN_1470e7984(void)

void FUN_1470e7984(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 4) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = param_2;
    if (0x18 < *(ushort *)(param_2 + 3)) {
      puVar2 = (undefined8 *)*param_2;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < *(ushort *)(param_2 + 3)) {
    FUN_1400020a8(*param_2);
    return;
  }
  return;
}



// FUNCTION 1470e79ec FUN_1470e79ec body=283 status=ok
// SIG undefined FUN_1470e79ec(void)

undefined8 FUN_1470e79ec(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    bVar1 = *(byte *)(param_2 + 4);
    if (bVar1 == *(byte *)(param_3 + 4)) {
      puVar6 = param_3;
      if (0x18 < *(ushort *)(param_3 + 3)) {
        puVar6 = (undefined8 *)*param_3;
      }
      puVar5 = param_2;
      if (0x18 < *(ushort *)(param_2 + 3)) {
        puVar5 = (undefined8 *)*param_2;
      }
      uVar4 = (ulonglong)((uint)bVar1 * 0x120);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
      }
      else {
        (*pcVar3)();
      }
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 != (code *)0x0) {
        puVar6 = param_2;
        if (0x18 < *(ushort *)(param_2 + 3)) {
          puVar6 = (undefined8 *)*param_2;
        }
        (*pcVar3)(puVar6);
      }
      if (0x18 < *(ushort *)(param_2 + 3)) {
        FUN_1400020a8(*param_2);
      }
      bVar1 = *(byte *)(param_3 + 4);
      uVar2 = *(ushort *)(param_3 + 3);
      *(ushort *)(param_2 + 3) = uVar2;
      puVar5 = param_2;
      puVar6 = param_3;
      if (0x18 < uVar2) {
        puVar5 = (undefined8 *)FUN_14001cc68(uVar2,0);
        *param_2 = puVar5;
        puVar6 = (undefined8 *)*param_3;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(puVar5,puVar6,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_3 + 4);
    }
    param_3 = param_3 + 5;
    param_2 = param_2 + 5;
  }
  return 1;
}



// FUNCTION 1470e7b30 FUN_1470e7b30 body=59 status=ok
// SIG undefined FUN_1470e7b30(void)

undefined8 FUN_1470e7b30(longlong *param_1)

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



// FUNCTION 1470e7bce FUN_1470e7bce body=85 status=ok
// SIG undefined FUN_1470e7bce(void)

void FUN_1470e7bce(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 5) == '\x01') {
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120)
                       );
    if (pcVar1 != (code *)0x0) {
      puVar2 = param_1;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        puVar2 = (undefined8 *)*param_1;
      }
      (*pcVar1)(puVar2);
    }
    if (0x18 < *(ushort *)(param_1 + 3)) {
      FUN_1400020a8(*param_1);
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 1470e7c24 FUN_1470e7c24 body=38 status=ok
// SIG undefined FUN_1470e7c24(void)

undefined8 FUN_1470e7c24(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e7c4a FUN_1470e7c4a body=59 status=ok
// SIG undefined FUN_1470e7c4a(void)

undefined8 * FUN_1470e7c4a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1c96b0;
  if (DAT_14c9a1b08 == param_1) {
    DAT_14c9a1b08 = (undefined8 *)0x0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e7c86 FUN_1470e7c86 body=95 status=ok
// SIG undefined FUN_1470e7c86(void)

void FUN_1470e7c86(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1417426f6(param_1,iVar2);
  }
  FUN_1470e7d57((longlong)iVar2 * 0x30 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1470e7ce6 FUN_1470e7ce6 body=113 status=ok
// SIG undefined FUN_1470e7ce6(void)

void FUN_1470e7ce6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 1470e7d57 FUN_1470e7d57 body=134 status=ok
// SIG undefined FUN_1470e7d57(void)

void FUN_1470e7d57(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  if (param_3 != 0) {
    puVar9 = (undefined4 *)(param_2 + 0x10);
    do {
      *param_1 = 0;
      iVar1 = puVar9[-2];
      _Src = *(void **)(puVar9 + -4);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      uVar2 = *puVar9;
      uVar3 = puVar9[1];
      uVar4 = puVar9[2];
      uVar5 = puVar9[3];
      uVar6 = puVar9[4];
      uVar7 = puVar9[5];
      uVar8 = puVar9[6];
      *(undefined4 *)((longlong)param_1 + 0x1c) = puVar9[3];
      *(undefined4 *)(param_1 + 4) = uVar6;
      *(undefined4 *)((longlong)param_1 + 0x24) = uVar7;
      *(undefined4 *)(param_1 + 5) = uVar8;
      *(undefined4 *)(param_1 + 2) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(undefined4 *)(param_1 + 3) = uVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
      param_1 = param_1 + 6;
      puVar9 = puVar9 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1470e7dde FUN_1470e7dde body=38 status=ok
// SIG undefined FUN_1470e7dde(void)

undefined8 FUN_1470e7dde(undefined8 param_1,int param_2)

{
  FUN_145de3816();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e7e04 FUN_1470e7e04 body=31 status=ok
// SIG undefined FUN_1470e7e04(void)

undefined8 FUN_1470e7e04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e7e42 FUN_1470e7e42 body=93 status=ok
// SIG undefined FUN_1470e7e42(void)

void FUN_1470e7e42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c9ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c9b30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1470e7ea0 FUN_1470e7ea0 body=93 status=ok
// SIG undefined FUN_1470e7ea0(void)

void FUN_1470e7ea0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c9ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c9b30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1470e7efe FUN_1470e7efe body=126 status=ok
// SIG undefined FUN_1470e7efe(void)

void FUN_1470e7efe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c9ba0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1c9b30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470e7f6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470e7f7c FUN_1470e7f7c body=44 status=ok
// SIG undefined FUN_1470e7f7c(void)

undefined8
FUN_1470e7f7c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4,param_5,param_6);
  return 1;
}



// FUNCTION 1470e7faa FUN_1470e7faa body=31 status=ok
// SIG undefined FUN_1470e7faa(void)

undefined8 FUN_1470e7faa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e7fe6 FUN_1470e7fe6 body=93 status=ok
// SIG undefined FUN_1470e7fe6(void)

void FUN_1470e7fe6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c9c10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470e8044 FUN_1470e8044 body=93 status=ok
// SIG undefined FUN_1470e8044(void)

void FUN_1470e8044(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c9c10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470e80a2 FUN_1470e80a2 body=126 status=ok
// SIG undefined FUN_1470e80a2(void)

void FUN_1470e80a2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8660;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1c9c10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470e8111. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470e8132 FUN_1470e8132 body=38 status=ok
// SIG undefined FUN_1470e8132(void)

undefined8 FUN_1470e8132(undefined8 param_1,int param_2)

{
  FUN_140f4853a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e815c FUN_1470e815c body=110 status=ok
// SIG undefined FUN_1470e815c(void)

void FUN_1470e815c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_1402a2a4c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1470e81d8 FUN_1470e81d8 body=119 status=ok
// SIG undefined FUN_1470e81d8(void)

void FUN_1470e81d8(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x40;
    if (0x40 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_1470e8250(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1470e8250 FUN_1470e8250 body=141 status=ok
// SIG undefined FUN_1470e8250(void)

void FUN_1470e8250(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,8);
  return;
}



// FUNCTION 1470e82de FUN_1470e82de body=38 status=ok
// SIG undefined FUN_1470e82de(void)

undefined8 FUN_1470e82de(undefined8 param_1,int param_2)

{
  FUN_1412b7f2a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e8304 FUN_1470e8304 body=38 status=ok
// SIG undefined FUN_1470e8304(void)

undefined8 FUN_1470e8304(undefined8 param_1,int param_2)

{
  FUN_1447259a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e832e FUN_1470e832e body=31 status=ok
// SIG undefined FUN_1470e832e(void)

undefined8 FUN_1470e832e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e836a FUN_1470e836a body=93 status=ok
// SIG undefined FUN_1470e836a(void)

void FUN_1470e836a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c9d50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470e83c8 FUN_1470e83c8 body=126 status=ok
// SIG undefined FUN_1470e83c8(void)

void FUN_1470e83c8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1c9d50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470e8437. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470e8446 FUN_1470e8446 body=21 status=ok
// SIG undefined FUN_1470e8446(void)

undefined8 FUN_1470e8446(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1470e845c FUN_1470e845c body=96 status=ok
// SIG undefined FUN_1470e845c(void)

void FUN_1470e845c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 1470e84bc FUN_1470e84bc body=62 status=ok
// SIG undefined FUN_1470e84bc(void)

void FUN_1470e84bc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1470e84fa(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 1470e84fa FUN_1470e84fa body=93 status=ok
// SIG undefined FUN_1470e84fa(void)

ulonglong FUN_1470e84fa(uint param_1,uint param_2)

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



// FUNCTION 1470e8557 FUN_1470e8557 body=40 status=ok
// SIG undefined FUN_1470e8557(void)

void FUN_1470e8557(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 1470e8580 FUN_1470e8580 body=127 status=ok
// SIG undefined FUN_1470e8580(void)

void FUN_1470e8580(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x48;
  lVar6 = (longlong)*(int *)(lVar1 + 0x44);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x40 + lVar6 * 0x48);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x48 + 0x40);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x40);
  FUN_144a2da94(*param_1 + (longlong)param_2 * 0x48 + 8);
  FUN_140ffaa8c(param_1,param_2,1);
  return;
}



// FUNCTION 1470e8600 FUN_1470e8600 body=155 status=ok
// SIG undefined FUN_1470e8600(void)

undefined8 FUN_1470e8600(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x48) == param_2) {
          FUN_1470e8580(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x48 + 0x40);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1470e869c FUN_1470e869c body=61 status=ok
// SIG undefined FUN_1470e869c(void)

longlong FUN_1470e869c(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    lVar2 = FUN_144a7ef38();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1470e86da FUN_1470e86da body=209 status=ok
// SIG undefined FUN_1470e86da(void)

int FUN_1470e86da(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar5 = (longlong)(int)uVar1;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    plVar2 = (longlong *)*param_1;
    uVar3 = 0;
    bVar11 = *plVar2 == *(longlong *)*param_2;
    uVar8 = 0;
    do {
      uVar6 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar1) {
        uVar6 = uVar1;
      }
      uVar9 = uVar8;
      uVar7 = (ulonglong)uVar8;
      do {
        uVar7 = uVar7 + 1;
        uVar10 = uVar6;
        if (lVar5 <= (longlong)uVar7) break;
        uVar9 = uVar9 + 1;
        uVar10 = uVar9;
      } while (bVar11 == (plVar2[uVar7] == *(longlong *)*param_2));
      if (bVar11 == false) {
        if (uVar3 != uVar8) {
          memmove(plVar2 + (int)uVar3,plVar2 + uVar8,(longlong)(int)(uVar10 - uVar8) << 3);
        }
        uVar3 = uVar3 + (uVar10 - uVar8);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      uVar8 = uVar10;
    } while ((longlong)uVar7 < lVar5);
    *(uint *)(param_1 + 1) = uVar3;
    iVar4 = uVar1 - uVar3;
  }
  return iVar4;
}



// FUNCTION 1470e87ac FUN_1470e87ac body=62 status=ok
// SIG undefined FUN_1470e87ac(void)

void FUN_1470e87ac(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1470e87ea(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1470e87ea FUN_1470e87ea body=93 status=ok
// SIG undefined FUN_1470e87ea(void)

ulonglong FUN_1470e87ea(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1470e8847 FUN_1470e8847 body=40 status=ok
// SIG undefined FUN_1470e8847(void)

void FUN_1470e8847(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 1470e8870 FUN_1470e8870 body=62 status=ok
// SIG undefined FUN_1470e8870(void)

void FUN_1470e8870(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1470e88ae(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1470e88ae FUN_1470e88ae body=93 status=ok
// SIG undefined FUN_1470e88ae(void)

ulonglong FUN_1470e88ae(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1470e890c FUN_1470e890c body=96 status=ok
// SIG undefined FUN_1470e890c(void)

void FUN_1470e890c(longlong param_1,int param_2)

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



// FUNCTION 1470e896c FUN_1470e896c body=119 status=ok
// SIG undefined FUN_1470e896c(void)

void FUN_1470e896c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_1470e89e4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1470e89e4 FUN_1470e89e4 body=141 status=ok
// SIG undefined FUN_1470e89e4(void)

void FUN_1470e89e4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,8);
  return;
}



// FUNCTION 1470e8a72 FUN_1470e8a72 body=81 status=ok
// SIG undefined FUN_1470e8a72(void)

undefined8 FUN_1470e8a72(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
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
    uVar6 = *(undefined8 *)(param_1 + 0x20);
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



// FUNCTION 1470e8aca FUN_1470e8aca body=89 status=ok
// SIG undefined FUN_1470e8aca(void)

bool FUN_1470e8aca(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1470e8b15;
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
    lVar6 = *(longlong *)(param_1 + 0x20);
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
LAB_1470e8b15:
  return lVar6 == param_2;
}



// FUNCTION 1470e8b30 FUN_1470e8b30 body=126 status=ok
// SIG undefined FUN_1470e8b30(void)

void FUN_1470e8b30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c9ed0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14a1c9e60;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1470e8bae FUN_1470e8bae body=164 status=ok
// SIG undefined FUN_1470e8bae(void)

void FUN_1470e8bae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c9ed0;
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)&p_Var1->CriticalSection + 4) = uVar4;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = uVar5;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Flink + 4) = uVar6;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1c9e60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  p_Var1[1].Type = (short)uVar2;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)uVar2 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470e8c42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470e8c52 FUN_1470e8c52 body=169 status=ok
// SIG undefined FUN_1470e8c52(void)

void FUN_1470e8c52(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
LAB_1470e8cc3:
    local_18 = *(undefined4 *)(param_1 + 0x10);
    local_20 = *(undefined8 *)(param_1 + 8);
    (**(code **)(param_1 + 0x30))(0);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1470e8cc3;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    local_18 = *(undefined4 *)(param_1 + 0x10);
    local_20 = *(undefined8 *)(param_1 + 8);
    (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x20));
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
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470e8cfe FUN_1470e8cfe body=109 status=ok
// SIG undefined FUN_1470e8cfe(void)

void FUN_1470e8cfe(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x58,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x58)) {
      uVar2 = uVar1 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x58,8);
  }
  return;
}



// FUNCTION 1470e8d6c FUN_1470e8d6c body=147 status=ok
// SIG undefined FUN_1470e8d6c(void)

void FUN_1470e8d6c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1470e8e00 FUN_1470e8e00 body=143 status=ok
// SIG undefined FUN_1470e8e00(void)

void FUN_1470e8e00(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1470e8e90 FUN_1470e8e90 body=31 status=ok
// SIG undefined FUN_1470e8e90(void)

undefined8 FUN_1470e8e90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e8eca FUN_1470e8eca body=93 status=ok
// SIG undefined FUN_1470e8eca(void)

void FUN_1470e8eca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c9f40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470e8f28 FUN_1470e8f28 body=93 status=ok
// SIG undefined FUN_1470e8f28(void)

void FUN_1470e8f28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c9f40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470e8f86 FUN_1470e8f86 body=126 status=ok
// SIG undefined FUN_1470e8f86(void)

void FUN_1470e8f86(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8660;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1c9f40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470e8ff5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470e9004 FUN_1470e9004 body=58 status=ok
// SIG undefined FUN_1470e9004(void)

void FUN_1470e9004(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001470e903b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1470e903e FUN_1470e903e body=31 status=ok
// SIG undefined FUN_1470e903e(void)

undefined8 FUN_1470e903e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e9078 FUN_1470e9078 body=93 status=ok
// SIG undefined FUN_1470e9078(void)

void FUN_1470e9078(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c9fb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470e90d6 FUN_1470e90d6 body=93 status=ok
// SIG undefined FUN_1470e90d6(void)

void FUN_1470e90d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1c9fb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470e9134 FUN_1470e9134 body=126 status=ok
// SIG undefined FUN_1470e9134(void)

void FUN_1470e9134(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca6c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1c9fb0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470e91a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470e91b2 FUN_1470e91b2 body=48 status=ok
// SIG undefined FUN_1470e91b2(void)

void FUN_1470e91b2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001470e91df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1470e91e4 FUN_1470e91e4 body=31 status=ok
// SIG undefined FUN_1470e91e4(void)

undefined8 FUN_1470e91e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e921e FUN_1470e921e body=93 status=ok
// SIG undefined FUN_1470e921e(void)

void FUN_1470e921e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca3a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1ca020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470e927c FUN_1470e927c body=93 status=ok
// SIG undefined FUN_1470e927c(void)

void FUN_1470e927c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca3a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1ca020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470e92da FUN_1470e92da body=126 status=ok
// SIG undefined FUN_1470e92da(void)

void FUN_1470e92da(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca3a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1ca020;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470e9349. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470e9358 FUN_1470e9358 body=58 status=ok
// SIG undefined FUN_1470e9358(void)

void FUN_1470e9358(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001470e938f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1470e9394 FUN_1470e9394 body=122 status=ok
// SIG undefined FUN_1470e9394(void)

void FUN_1470e9394(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 1470e940e FUN_1470e940e body=322 status=ok
// SIG undefined FUN_1470e940e(void)

void FUN_1470e940e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x6c + (longlong)iVar4 * 0x70) * 4) =
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



// FUNCTION 1470e9552 FUN_1470e9552 body=282 status=ok
// SIG undefined FUN_1470e9552(void)

void FUN_1470e9552(longlong *param_1)

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
      FUN_14099aaa0(*local_60 + (longlong)iStack_44 * 0x70 + 8);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140875b54(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e9688 FUN_1470e9688 body=29 status=ok
// SIG undefined FUN_1470e9688(void)

bool FUN_1470e9688(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1470e96a6 FUN_1470e96a6 body=26 status=ok
// SIG undefined FUN_1470e96a6(void)

bool FUN_1470e96a6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1470e96c0 FUN_1470e96c0 body=93 status=ok
// SIG undefined FUN_1470e96c0(void)

void FUN_1470e96c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1ca0b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470e971e FUN_1470e971e body=126 status=ok
// SIG undefined FUN_1470e971e(void)

void FUN_1470e971e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1ca0b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470e978d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470e979c FUN_1470e979c body=146 status=ok
// SIG undefined FUN_1470e979c(void)

bool FUN_1470e979c(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e9830 FUN_1470e9830 body=96 status=ok
// SIG undefined FUN_1470e9830(void)

void FUN_1470e9830(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1470e9890 FUN_1470e9890 body=62 status=ok
// SIG undefined FUN_1470e9890(void)

void FUN_1470e9890(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1470e98ce(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 1470e98ce FUN_1470e98ce body=112 status=ok
// SIG undefined FUN_1470e98ce(void)

ulonglong FUN_1470e98ce(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1470e9908;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      param_2 = param_2 / 0xc;
    }
  }
LAB_1470e9908:
  return param_2 & 0xffffffff;
}



// FUNCTION 1470e993e FUN_1470e993e body=110 status=ok
// SIG undefined FUN_1470e993e(void)

void FUN_1470e993e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x18;
    if (0x18 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = (int)uVar2;
    FUN_14024e15e(param_1,*(undefined4 *)(param_1 + 200),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 1470e99ac FUN_1470e99ac body=634 status=ok
// SIG undefined FUN_1470e99ac(void)

void FUN_1470e99ac(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = *(int *)(param_3 + 200);
        *(uint *)(param_3 + 200) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
          FUN_14024e000(param_3,iVar2);
        }
        lVar7 = *(longlong *)(param_3 + 0xc0);
        if (*(longlong *)(param_3 + 0xc0) == 0) {
          lVar7 = param_3;
        }
        *(longlong **)(lVar7 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1470e99ac(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470e9c28 FUN_1470e9c28 body=328 status=ok
// SIG undefined FUN_1470e9c28(void)

void FUN_1470e9c28(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar6 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar6) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = *(int *)(param_3 + 200);
        *(uint *)(param_3 + 200) = iVar3 + 1U;
        if (*(uint *)(param_3 + 0xcc) < iVar3 + 1U) {
          FUN_14024e000(param_3,iVar3);
        }
        lVar5 = *(longlong *)(param_3 + 0xc0);
        if (*(longlong *)(param_3 + 0xc0) == 0) {
          lVar5 = param_3;
        }
        *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar6));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e9d72 FUN_1470e9d72 body=125 status=ok
// SIG undefined FUN_1470e9d72(void)

void FUN_1470e9d72(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x18;
    if (0x18 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0xcc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xcc) = (int)uVar4;
    FUN_1470e9df0(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1470e9df0 FUN_1470e9df0 body=142 status=ok
// SIG undefined FUN_1470e9df0(void)

void FUN_1470e9df0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,param_4);
  return;
}



// FUNCTION 1470e9e7e FUN_1470e9e7e body=114 status=ok
// SIG undefined FUN_1470e9e7e(void)

void FUN_1470e9e7e(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
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



// FUNCTION 1470e9ef0 FUN_1470e9ef0 body=122 status=ok
// SIG undefined FUN_1470e9ef0(void)

undefined4 FUN_1470e9ef0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = 0;
  if (param_1 != 0) {
    uVar2 = FUN_147b12009();
    FUN_1446ddc76(&local_38,param_1,1);
    cVar1 = FUN_1412446f0(local_38,uVar2,local_30);
    uVar3 = 0;
    if (cVar1 != '\0') {
      uVar3 = local_30[0];
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470e9f6c FUN_1470e9f6c body=31 status=ok
// SIG undefined FUN_1470e9f6c(void)

undefined8 FUN_1470e9f6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470e9f9a FUN_1470e9f9a body=93 status=ok
// SIG undefined FUN_1470e9f9a(void)

void FUN_1470e9f9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1ca540;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1470e9ff8 FUN_1470e9ff8 body=93 status=ok
// SIG undefined FUN_1470e9ff8(void)

void FUN_1470e9ff8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1ca540;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1470ea056 FUN_1470ea056 body=126 status=ok
// SIG undefined FUN_1470ea056(void)

void FUN_1470ea056(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca5b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1ca540;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470ea0c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470ea0d4 FUN_1470ea0d4 body=108 status=ok
// SIG undefined FUN_1470ea0d4(void)

void FUN_1470ea0d4(longlong param_1,undefined8 param_2,undefined2 *param_3)

{
  code *pcVar1;
  undefined1 auStack_48 [32];
  undefined2 local_28 [4];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x18);
  local_28[0] = *param_3;
  local_20 = *(longlong *)(param_3 + 4);
  if ((local_20 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  (*pcVar1)(param_2,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ea144 FUN_1470ea144 body=31 status=ok
// SIG undefined FUN_1470ea144(void)

undefined8 FUN_1470ea144(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470ea172 FUN_1470ea172 body=93 status=ok
// SIG undefined FUN_1470ea172(void)

void FUN_1470ea172(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1ca620;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1470ea1d0 FUN_1470ea1d0 body=93 status=ok
// SIG undefined FUN_1470ea1d0(void)

void FUN_1470ea1d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1ca620;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1470ea22e FUN_1470ea22e body=126 status=ok
// SIG undefined FUN_1470ea22e(void)

void FUN_1470ea22e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8660;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1ca620;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470ea29d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470ea2c4 FUN_1470ea2c4 body=81 status=ok
// SIG undefined FUN_1470ea2c4(void)

undefined8 FUN_1470ea2c4(longlong param_1)

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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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



// FUNCTION 1470ea31c FUN_1470ea31c body=118 status=ok
// SIG undefined FUN_1470ea31c(void)

void FUN_1470ea31c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca410;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1ca190;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1470ea392 FUN_1470ea392 body=118 status=ok
// SIG undefined FUN_1470ea392(void)

void FUN_1470ea392(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca410;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1ca190;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1470ea408 FUN_1470ea408 body=156 status=ok
// SIG undefined FUN_1470ea408(void)

void FUN_1470ea408(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca410;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1ca190;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470ea494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470ea4a4 FUN_1470ea4a4 body=98 status=ok
// SIG undefined FUN_1470ea4a4(void)

void FUN_1470ea4a4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001470ea4ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001470ea4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1470ea508 FUN_1470ea508 body=110 status=ok
// SIG undefined FUN_1470ea508(void)

void FUN_1470ea508(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x18;
    if (0x18 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = (int)uVar2;
    FUN_1401bf496(param_1,*(undefined4 *)(param_1 + 200),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 1470ea576 FUN_1470ea576 body=634 status=ok
// SIG undefined FUN_1470ea576(void)

void FUN_1470ea576(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = *(int *)(param_3 + 200);
        *(uint *)(param_3 + 200) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
          FUN_1401bf338(param_3,iVar2);
        }
        lVar7 = *(longlong *)(param_3 + 0xc0);
        if (*(longlong *)(param_3 + 0xc0) == 0) {
          lVar7 = param_3;
        }
        *(longlong **)(lVar7 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1470ea576(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470ea7f2 FUN_1470ea7f2 body=767 status=ok
// SIG undefined FUN_1470ea7f2(void)

void FUN_1470ea7f2(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1470ea916:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_1470ea92e;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_1470ea916;
LAB_1470ea92e:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar2 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
            FUN_1401bf338(param_3,iVar2);
          }
          lVar8 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar8 = param_3;
          }
          *(longlong **)(lVar8 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1470ea7f2(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470eaaf2 FUN_1470eaaf2 body=463 status=ok
// SIG undefined FUN_1470eaaf2(void)

void FUN_1470eaaf2(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (lVar4 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1470eac1f:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_1470eac37;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_1470eac1f;
LAB_1470eac37:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar3 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar3 + 1U) {
            FUN_1401bf338(param_3,iVar3);
          }
          lVar5 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar5 = param_3;
          }
          *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470eacc2 FUN_1470eacc2 body=300 status=ok
// SIG undefined FUN_1470eacc2(void)

undefined4 *
FUN_1470eacc2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14012b0fa(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  local_50[1] = 0;
  local_50[2] = 0;
  *(undefined1 *)(local_50 + 3) = 0;
  *(undefined4 *)(local_50 + 4) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_14012af04(param_1,param_3,local_50,local_58);
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
      *(uint *)((longlong)local_50 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 4) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14012bf40(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470eadf0 FUN_1470eadf0 body=114 status=ok
// SIG undefined FUN_1470eadf0(void)

void FUN_1470eadf0(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
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



// FUNCTION 1470eae62 FUN_1470eae62 body=87 status=ok
// SIG undefined FUN_1470eae62(void)

void FUN_1470eae62(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_1470eaeba();
  return;
}



// FUNCTION 1470eaeba FUN_1470eaeba body=52 status=ok
// SIG undefined FUN_1470eaeba(void)

void FUN_1470eaeba(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_1470eadf0(param_1,param_2);
  return;
}



// FUNCTION 1470eaeee FUN_1470eaeee body=95 status=ok
// SIG undefined FUN_1470eaeee(void)

void FUN_1470eaeee(longlong param_1,uint param_2)

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



// FUNCTION 1470eaf4e FUN_1470eaf4e body=132 status=ok
// SIG undefined FUN_1470eaf4e(void)

void FUN_1470eaf4e(longlong param_1,int param_2)

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



// FUNCTION 1470eafd4 FUN_1470eafd4 body=115 status=ok
// SIG undefined FUN_1470eafd4(void)

void FUN_1470eafd4(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1470eb047 FUN_1470eb047 body=522 status=ok
// SIG undefined FUN_1470eb047(void)

void FUN_1470eb047(longlong param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined1 auStack_88 [32];
  int local_68;
  int local_64;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_3;
  local_60 = param_1;
  if (param_2 < param_3 && 0 < param_2) {
    iVar11 = 0;
    iVar8 = param_2;
    while( true ) {
      local_64 = iVar8;
      lVar2 = local_60 + (longlong)local_64 * 0xc;
      iVar14 = 0;
      if (local_64 - iVar11 != 0 && iVar11 <= local_64) {
        lVar3 = local_60 + (longlong)iVar11 * 0xc;
        iVar14 = 0;
        uVar12 = local_64 - iVar11;
        do {
          uVar15 = (uVar12 >> 1) + iVar14;
          fVar5 = *(float *)(lVar3 + 8 + (ulonglong)uVar15 * 0xc);
          fVar6 = *(float *)(lVar2 + 8);
          if ((fVar5 != fVar6) || (NAN(fVar5) || NAN(fVar6))) {
            bVar7 = fVar5 < fVar6;
          }
          else {
            iVar8 = FUN_144a78538(lVar3 + (ulonglong)uVar15 * 0xc,lVar2);
            bVar7 = iVar8 < 1;
          }
          if (!bVar7) {
            iVar14 = uVar15 + (uVar12 & 1);
          }
          bVar7 = 1 < uVar12;
          uVar12 = uVar12 >> 1;
        } while (bVar7);
      }
      iVar14 = iVar14 + iVar11;
      iVar11 = local_64 - iVar14;
      if (iVar11 == 0 || local_64 < iVar14) break;
      uVar12 = local_68 - local_64;
      if (uVar12 == 0 || local_68 < local_64) {
        iVar16 = 0;
        iVar8 = local_64;
      }
      else {
        puVar17 = (undefined8 *)(local_60 + (longlong)iVar14 * 0xc);
        iVar16 = 0;
        uVar10 = (ulonglong)uVar12;
        do {
          uVar10 = uVar10 >> 1;
          uVar15 = (uint)uVar10 + iVar16;
          fVar5 = *(float *)(puVar17 + 1);
          fVar6 = *(float *)(lVar2 + 8 + (ulonglong)uVar15 * 0xc);
          if ((fVar5 != fVar6) || (NAN(fVar5) || NAN(fVar6))) {
            bVar7 = fVar5 < fVar6;
          }
          else {
            iVar8 = FUN_144a78538(puVar17,lVar2 + (ulonglong)uVar15 * 0xc);
            bVar7 = iVar8 < 1;
          }
          if (bVar7) {
            iVar16 = uVar15 + (uVar12 & 1);
          }
          bVar7 = 1 < uVar12;
          uVar12 = (uint)uVar10;
        } while (bVar7);
        iVar8 = local_64 + iVar16;
        if (0 < iVar16) {
          puVar13 = (undefined8 *)((longlong)puVar17 + (longlong)iVar11 * 0xc);
          puVar4 = (undefined8 *)((longlong)puVar17 + (longlong)(iVar8 - iVar14) * 0xc);
          puVar9 = puVar13;
          do {
            while( true ) {
              puVar1 = (undefined8 *)((longlong)puVar13 + 0xc);
              local_50 = *(undefined4 *)(puVar17 + 1);
              local_58 = *puVar17;
              *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(puVar13 + 1);
              *puVar17 = *puVar13;
              puVar17 = (undefined8 *)((longlong)puVar17 + 0xc);
              *(undefined4 *)(puVar13 + 1) = local_50;
              *puVar13 = local_58;
              if (puVar1 == puVar4) break;
              puVar13 = puVar1;
              if (puVar17 == puVar9) {
                puVar9 = puVar1;
              }
            }
            puVar13 = puVar9;
          } while (puVar17 != puVar9);
        }
      }
      if ((local_68 <= iVar8) || (iVar11 = iVar14 + iVar16 + 1, iVar8 <= iVar11)) break;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470eb252 FUN_1470eb252 body=132 status=ok
// SIG undefined FUN_1470eb252(void)

void FUN_1470eb252(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1470eb2d8 FUN_1470eb2d8 body=83 status=ok
// SIG undefined FUN_1470eb2d8(void)

void FUN_1470eb2d8(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  void *_Dst;
  
  lVar1 = *param_1;
  _Dst = *(void **)(lVar1 + 0x20);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)FUN_14001cc68(0x360,0x10);
    *(void **)(lVar1 + 0x20) = _Dst;
  }
  memcpy(_Dst,param_1 + 2,0x360);
  FUN_1447fd100(lVar1,param_2);
  return;
}



// FUNCTION 1470eb33c FUN_1470eb33c body=29 status=ok
// SIG undefined FUN_1470eb33c(void)

void FUN_1470eb33c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1470eb35a FUN_1470eb35a body=29 status=ok
// SIG undefined FUN_1470eb35a(void)

undefined8 FUN_1470eb35a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470eb378 FUN_1470eb378 body=105 status=ok
// SIG undefined FUN_1470eb378(void)

void FUN_1470eb378(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1470eb2d8(0xb0,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1470eb2d8(param_1 + 0x16,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001470eb3d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1470eb3e6 FUN_1470eb3e6 body=195 status=ok
// SIG undefined FUN_1470eb3e6(void)

bool FUN_1470eb3e6(longlong param_1,longlong param_2,longlong *param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_2c,4);
  uVar4 = (ulonglong)local_2c;
  if (uVar2 == uVar4) {
    local_2c = *(uint *)(param_1 + 0x18);
    puVar3 = (ulonglong *)param_3[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_2c,4);
      }
      else {
        FUN_14572512c(param_3,&local_2c);
      }
    }
    else {
      local_2c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    *(uint *)(param_1 + 0x18) = local_2c;
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 == uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470eb4aa FUN_1470eb4aa body=117 status=ok
// SIG undefined FUN_1470eb4aa(void)

undefined8 FUN_1470eb4aa(char *param_1,undefined8 param_2,float param_3)

{
  wchar_t *pwVar1;
  
  if (param_1[1] == '\0') {
    pwVar1 = L"unknown";
  }
  else {
    if (*param_1 == '\x01') {
      if (*(float *)(param_1 + 8) <= 0.0) {
        pwVar1 = L"true";
        goto LAB_1470eb4e8;
      }
      param_3 = (*(float *)(param_1 + 8) + *(float *)(param_1 + 4)) - param_3;
      if (0.0 < param_3) {
        FUN_140002266(param_2,L"true (for %0.02fs)",(double)param_3);
        return param_2;
      }
    }
    pwVar1 = L"false";
  }
LAB_1470eb4e8:
  FUN_140056680(param_2,pwVar1);
  return param_2;
}



// FUNCTION 1470eb520 FUN_1470eb520 body=323 status=ok
// SIG undefined FUN_1470eb520(void)

undefined4 FUN_1470eb520(longlong param_1,longlong param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 *_Src;
  longlong *_Dst;
  
  uVar4 = FUN_144a7b75a(*(undefined1 *)(param_2 + 0x28),*(undefined1 *)(param_1 + 0x30));
  if ((char)uVar4 != '\0') {
    _Src = (undefined8 *)(param_2 + 8);
    _Dst = (longlong *)(param_1 + 8);
    bVar1 = *(byte *)(param_1 + 0x28);
    if (bVar1 == *(byte *)(param_2 + 0x28)) {
      if (0x18 < *(ushort *)(param_2 + 0x20)) {
        _Src = *(undefined8 **)(param_2 + 8);
      }
      if (0x18 < *(ushort *)(param_1 + 0x20)) {
        _Dst = (longlong *)*_Dst;
      }
      uVar5 = (ulonglong)((uint)bVar1 * 0x120);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85c0 + uVar5);
      if (pcVar3 == (code *)0x0) {
        memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
      }
      else {
        (*pcVar3)(_Dst,_Src);
      }
    }
    else {
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 != (code *)0x0) {
        plVar6 = _Dst;
        if (0x18 < *(ushort *)(param_1 + 0x20)) {
          plVar6 = (longlong *)*_Dst;
        }
        (*pcVar3)(plVar6);
      }
      if (0x18 < *(ushort *)(param_1 + 0x20)) {
        FUN_1400020a8(*_Dst);
      }
      bVar1 = *(byte *)(param_2 + 0x28);
      uVar2 = *(ushort *)(param_2 + 0x20);
      *(ushort *)(param_1 + 0x20) = uVar2;
      plVar6 = _Dst;
      if (0x18 < uVar2) {
        plVar6 = (longlong *)FUN_14001cc68(uVar2,0);
        *_Dst = (longlong)plVar6;
        _Src = (undefined8 *)*_Src;
      }
      uVar5 = (ulonglong)((uint)bVar1 * 0x120);
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar5);
      if (pcVar3 == (code *)0x0) {
        memcpy(plVar6,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
      }
      else {
        (*pcVar3)(plVar6,_Src);
      }
      *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
    }
  }
  return uVar4;
}



// FUNCTION 1470eb664 FUN_1470eb664 body=262 status=ok
// SIG undefined FUN_1470eb664(void)

undefined8 FUN_1470eb664(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar4 = *(byte *)(param_1 + 0x30);
  FUN_144aa7a80(&local_48,1,0);
  local_30 = *(undefined8 *)((longlong)&DAT_14c9a8508 + (ulonglong)((uint)bVar4 * 0x120));
  FUN_1401269c0(&local_48);
  FUN_14161210c(param_3,&DAT_14c9a8438,&local_48);
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plStack_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_40 + 0x10))(plStack_40);
      }
    }
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_14161210c(param_3,&DAT_14c9a8460,&local_48);
  (**(code **)(*param_2 + 0x48))(param_2,param_3,1);
  plVar1 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470eb76c FUN_1470eb76c body=3 status=ok
// SIG undefined FUN_1470eb76c(void)

undefined1 FUN_1470eb76c(void)

{
  return 1;
}



// FUNCTION 1470eb77a FUN_1470eb77a body=3256 status=ok
// SIG undefined FUN_1470eb77a(void)

ulonglong FUN_1470eb77a(undefined *******param_1,longlong param_2,undefined ******param_3)

{
  undefined ****ppppuVar1;
  longlong *plVar2;
  undefined *****pppppuVar3;
  undefined ******ppppppuVar4;
  uint uVar5;
  undefined ******ppppppuVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  code *pcVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined *******pppppppuVar15;
  undefined *******pppppppuVar16;
  undefined8 *unaff_RBP;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined ******local_208;
  uint local_200;
  undefined8 local_1f8;
  undefined ******local_1f0;
  undefined *****pppppuStack_1e8;
  undefined ******local_1e0;
  undefined ******local_1d8;
  undefined1 local_1d0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  uVar17 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_1f0,3);
  if (uVar17 == ((ulonglong)local_1f0 & 0xffffffff)) {
    cVar7 = *(char *)(param_2 + 0x71);
    if (*(byte *)(param_1 + 4) == 1) {
      *(uint *)param_1 = (uint)(cVar7 != '\0');
    }
    else {
      pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 +
                          (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
      if (pcVar10 != (code *)0x0) {
        pppppppuVar16 = param_1;
        if (0x18 < *(ushort *)(param_1 + 3)) {
          pppppppuVar16 = (undefined *******)*param_1;
        }
        (*pcVar10)(pppppppuVar16);
      }
      if (0x18 < *(ushort *)(param_1 + 3)) {
        FUN_1400020a8(*param_1);
      }
      *(undefined2 *)(param_1 + 3) = 4;
      *(uint *)param_1 = (uint)(cVar7 != '\0');
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  else {
    uVar17 = *(ulonglong *)(param_2 + 0xc);
    FUN_1401a700c(&local_1f0,2);
    if (uVar17 == ((ulonglong)local_1f0 & 0xffffffff)) {
      uVar8 = FUN_1405d5f74(param_1);
      local_1f0 = (undefined ******)CONCAT44(local_1f0._4_4_,uVar8);
      pppppuVar3 = param_3[1];
      ppppuVar1 = (undefined ****)((longlong)*pppppuVar3 + 4);
      if (pppppuVar3[1] < ppppuVar1) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (*(code *)(*param_3)[0x2e])(param_3,&local_1f0,4);
        }
        else {
          FUN_14572512c(param_3,&local_1f0);
        }
      }
      else {
        local_1f0 = (undefined ******)CONCAT44(local_1f0._4_4_,*(undefined4 *)*pppppuVar3);
        *pppppuVar3 = ppppuVar1;
      }
      uVar5 = (uint)local_1f0;
      if (*(byte *)(param_1 + 4) == 2) {
        *(uint *)param_1 = (uint)local_1f0;
      }
      else {
        pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 +
                            (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
        if (pcVar10 != (code *)0x0) {
          pppppppuVar16 = param_1;
          if (0x18 < *(ushort *)(param_1 + 3)) {
            pppppppuVar16 = (undefined *******)*param_1;
          }
          (*pcVar10)(pppppppuVar16);
        }
        if (0x18 < *(ushort *)(param_1 + 3)) {
          FUN_1400020a8(*param_1);
        }
        *(undefined2 *)(param_1 + 3) = 4;
        *(uint *)param_1 = uVar5;
        *(undefined1 *)(param_1 + 4) = 2;
      }
    }
    else {
      uVar17 = *(ulonglong *)(param_2 + 0xc);
      FUN_1401a700c(&local_1f0,4);
      if (uVar17 == ((ulonglong)local_1f0 & 0xffffffff)) {
        uVar8 = FUN_144a7ecd0(param_1);
        local_1f0 = (undefined ******)CONCAT44(local_1f0._4_4_,uVar8);
        pppppuVar3 = param_3[1];
        ppppuVar1 = (undefined ****)((longlong)*pppppuVar3 + 4);
        if (pppppuVar3[1] < ppppuVar1) {
          if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
            (*(code *)(*param_3)[0x2e])(param_3,&local_1f0,4);
          }
          else {
            FUN_14572512c(param_3,&local_1f0);
          }
        }
        else {
          local_1f0 = (undefined ******)CONCAT44(local_1f0._4_4_,*(undefined4 *)*pppppuVar3);
          *pppppuVar3 = ppppuVar1;
        }
        uVar5 = (uint)local_1f0;
        if (*(byte *)(param_1 + 4) == 3) {
          *(uint *)param_1 = (uint)local_1f0;
        }
        else {
          pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 +
                              (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
          if (pcVar10 != (code *)0x0) {
            pppppppuVar16 = param_1;
            if (0x18 < *(ushort *)(param_1 + 3)) {
              pppppppuVar16 = (undefined *******)*param_1;
            }
            (*pcVar10)(pppppppuVar16);
          }
          if (0x18 < *(ushort *)(param_1 + 3)) {
            FUN_1400020a8(*param_1);
          }
          *(undefined2 *)(param_1 + 3) = 4;
          *(uint *)param_1 = uVar5;
          *(undefined1 *)(param_1 + 4) = 3;
        }
      }
      else {
        uVar17 = *(ulonglong *)(param_2 + 0xc);
        FUN_1401a700c(&local_1f0,8);
        if (uVar17 == ((ulonglong)local_1f0 & 0xffffffff)) {
          local_1f0 = (undefined ******)FUN_140ee352e(param_1);
          pppppuVar3 = param_3[1];
          ppppuVar1 = *pppppuVar3 + 1;
          if (pppppuVar3[1] < ppppuVar1) {
            if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
              (*(code *)(*param_3)[0x2e])(param_3,&local_1f0,8);
            }
            else {
              FUN_146821949(param_3,&local_1f0);
            }
          }
          else {
            local_1f0 = (undefined ******)**pppppuVar3;
            *pppppuVar3 = ppppuVar1;
          }
          ppppppuVar4 = local_1f0;
          if (*(byte *)(param_1 + 4) == 0x15) {
            *param_1 = local_1f0;
          }
          else {
            pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 +
                                (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
            if (pcVar10 != (code *)0x0) {
              pppppppuVar16 = param_1;
              if (0x18 < *(ushort *)(param_1 + 3)) {
                pppppppuVar16 = (undefined *******)*param_1;
              }
              (*pcVar10)(pppppppuVar16);
            }
            if (0x18 < *(ushort *)(param_1 + 3)) {
              FUN_1400020a8(*param_1);
            }
            *(undefined2 *)(param_1 + 3) = 8;
            *param_1 = ppppppuVar4;
            *(undefined1 *)(param_1 + 4) = 0x15;
          }
        }
        else {
          uVar17 = *(ulonglong *)(param_2 + 0xc);
          FUN_1401a700c(&local_1f0,0xd);
          if (uVar17 == ((ulonglong)local_1f0 & 0xffffffff)) {
            FUN_1461dc38e(param_1,&local_208);
            FUN_14021219d(param_3,&local_208);
            uVar5 = local_200;
            ppppppuVar4 = local_208;
            if (*(byte *)(param_1 + 4) == 8) {
              if (&local_208 != param_1) {
                lVar11 = (longlong)(int)local_200;
                *(uint *)(param_1 + 1) = local_200;
                if (local_200 == 0 && *(uint *)((longlong)param_1 + 0xc) == 0) {
                  *(uint *)((longlong)param_1 + 0xc) = 0;
                }
                else {
                  FUN_1446dd670(param_1,local_200);
                  if (uVar5 != 0) {
                    memcpy(*param_1,ppppppuVar4,lVar11 * 2);
                  }
                }
              }
            }
            else {
              pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 +
                                  (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
              if (pcVar10 != (code *)0x0) {
                pppppppuVar16 = param_1;
                if (0x18 < *(ushort *)(param_1 + 3)) {
                  pppppppuVar16 = (undefined *******)*param_1;
                }
                (*pcVar10)(pppppppuVar16);
              }
              if (0x18 < *(ushort *)(param_1 + 3)) {
                FUN_1400020a8(*param_1);
              }
              ppppppuVar4 = local_208;
              local_1f0 = (undefined ******)0x0;
              lVar11 = (longlong)(int)local_200;
              pppppuStack_1e8 = (undefined *****)CONCAT44(pppppuStack_1e8._4_4_,local_200);
              if (lVar11 == 0) {
                pppppuStack_1e8 = (undefined *****)(ulonglong)local_200;
                *(undefined2 *)(param_1 + 3) = 0x10;
                *param_1 = (undefined ******)0x0;
                *(uint *)(param_1 + 1) = 0;
LAB_1470ec306:
                *(uint *)((longlong)param_1 + 0xc) = 0;
              }
              else {
                FUN_1446dd670(&local_1f0,local_200,0);
                memcpy(local_1f0,ppppppuVar4,lVar11 * 2);
                ppppppuVar4 = local_1f0;
                lVar11 = (longlong)(int)(uint)pppppuStack_1e8;
                *(undefined2 *)(param_1 + 3) = 0x10;
                *param_1 = (undefined ******)0x0;
                *(uint *)(param_1 + 1) = (uint)pppppuStack_1e8;
                if (lVar11 == 0) goto LAB_1470ec306;
                FUN_1446dd670(param_1,(ulonglong)pppppuStack_1e8 & 0xffffffff,0);
                memcpy(*param_1,ppppppuVar4,lVar11 * 2);
              }
              *(undefined1 *)(param_1 + 4) = 8;
              if ((undefined *******)local_1f0 != (undefined *******)0x0) {
                FUN_1400020a8(local_1f0);
              }
            }
            if ((undefined *******)local_208 != (undefined *******)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            uVar17 = *(ulonglong *)(param_2 + 0xc);
            FUN_1401a700c(&local_1f0,10);
            if (uVar17 == ((ulonglong)local_1f0 & 0xffffffff)) {
              local_208 = (undefined ******)CONCAT44(local_208._4_4_,*(undefined4 *)(param_2 + 8));
              FUN_1401a700c(&local_1f0,0x3b);
              cVar7 = FUN_1468ec2ac(&local_208,(ulonglong)local_1f0 & 0xffffffff);
              if (cVar7 == '\0') {
                local_208 = (undefined ******)CONCAT44(local_208._4_4_,*(undefined4 *)(param_2 + 8))
                ;
                FUN_1401a700c(&local_1f0,0x3c);
                cVar7 = FUN_1468ec2ac(&local_208,(ulonglong)local_1f0 & 0xffffffff);
                if (cVar7 == '\0') {
                  local_1f0 = (undefined ******)
                              CONCAT44(local_1f0._4_4_,*(undefined4 *)(param_2 + 8));
                  lVar11 = FUN_1403f613c();
                  cVar7 = FUN_1468ec2ac(&local_1f0,*(undefined8 *)(lVar11 + 0x18));
                  if (cVar7 == '\0') {
                    uVar17 = (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120);
                    unaff_RBP = &DAT_14c9a8508;
                    if ((*(code **)(&DAT_14c9a8528 + uVar17) != (code *)0x0) &&
                       (lVar11 = (**(code **)(&DAT_14c9a8528 + uVar17))(), lVar11 != 0)) {
                      lVar13 = FUN_1446f4bba();
                      if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38))
                         && (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                              (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) {
                        if (0x18 < *(ushort *)(param_1 + 3)) {
                          param_1 = (undefined *******)*param_1;
                        }
                        FUN_14047320e(lVar11,param_3,param_1,0);
                        goto LAB_1470eb89e;
                      }
                    }
                    lVar11 = FUN_14479d2ce((longlong)&DAT_14c9a8538 + uVar17);
                    plVar2 = (longlong *)((longlong)&DAT_14c9a8540 + uVar17);
                    if (lVar11 == 0) {
                      *plVar2 = 0;
                      goto LAB_1470ec265;
                    }
                    lVar11 = FUN_1446ddbd2();
                    if (((*plVar2 == 0) ||
                        (cVar7 = FUN_144729dda((longlong)&DAT_14c9a8548 + uVar17), cVar7 == '\0'))
                       && (*(int *)((longlong)&DAT_14c9a8558 + uVar17) != 0)) {
                      plVar14 = (longlong *)FUN_14007daa4(plVar2,0,0);
                      if (plVar14 == (longlong *)0x0) {
LAB_1470ec390:
                        if (*plVar2 != 0) {
                          *plVar2 = 0;
                          *(undefined8 *)((longlong)&DAT_14c9a8548 + uVar17) = 0;
                        }
                        goto LAB_1470ec265;
                      }
                      lVar13 = plVar14[1];
                      if (*(ulonglong *)(lVar11 + 8) == 0) {
                        bVar18 = lVar13 != 0;
                        if (lVar13 != lVar11 && bVar18) {
                          do {
                            lVar13 = *(longlong *)(lVar13 + 0x30);
                            bVar18 = lVar13 != 0;
                            if (lVar13 == lVar11) break;
                          } while (lVar13 != 0);
                        }
                        if (!bVar18) goto LAB_1470ec390;
                      }
                      else if ((*(ulonglong *)(lVar13 + 0x18) & *(ulonglong *)(lVar11 + 8)) == 0)
                      goto LAB_1470ec390;
                      *plVar2 = (longlong)plVar14;
                    }
                    else {
                      plVar14 = (longlong *)*plVar2;
                    }
                    if (plVar14 != (longlong *)0x0) {
                      pppppppuVar16 = param_1;
                      if (0x18 < *(ushort *)(param_1 + 3)) {
                        pppppppuVar16 = (undefined *******)*param_1;
                      }
                      local_1f0 = (undefined ******)&PTR_FUN_149e37810;
                      local_218 = 0;
                      uStack_210 = 0;
                      pppppuStack_1e8 = (undefined *****)param_3;
                      local_1e0 = (undefined ******)&local_1f0;
                      local_1d8 = (undefined ******)&local_1e0;
                      iVar9 = (**(code **)(*plVar14 + 0xc0))
                                        (plVar14,param_2,&local_1e0,pppppppuVar16);
                      uVar17 = CONCAT71((int7)((longlong)&DAT_14c9a8508 + uVar17 >> 8),1);
                      if (iVar9 == 3) goto LAB_1470eb8a1;
                      if (iVar9 == 0) {
                        lVar11 = plVar14[1];
                        lVar13 = FUN_1446dcc8c();
                        if (*(ulonglong *)(lVar13 + 8) == 0) {
                          bVar18 = lVar11 != 0;
                          if (lVar11 != lVar13 && bVar18) {
                            do {
                              lVar11 = *(longlong *)(lVar11 + 0x30);
                              bVar18 = lVar11 != 0;
                              if (lVar11 == lVar13) break;
                            } while (lVar11 != 0);
                          }
                          if (bVar18) goto LAB_1470ec3d9;
                        }
                        else if ((*(ulonglong *)(lVar11 + 0x18) & *(ulonglong *)(lVar13 + 8)) != 0)
                        {
LAB_1470ec3d9:
                          local_1f0 = (undefined ******)
                                      CONCAT44(local_1f0._4_4_,*(undefined4 *)(param_2 + 8));
                          cVar7 = FUN_1468ec2ac(&local_1f0,*(undefined8 *)(plVar14[0xe] + 0x18));
                          if (cVar7 != '\0') {
                            if (0x18 < *(ushort *)(param_1 + 3)) {
                              param_1 = (undefined *******)*param_1;
                            }
                            local_1f0 = (undefined ******)&PTR_FUN_149e37810;
                            pppppuStack_1e8 = (undefined *****)param_3;
                            local_1e0 = (undefined ******)&local_1f0;
                            local_1d8 = (undefined ******)&local_1e0;
                            (**(code **)(*plVar14 + 0xd0))(plVar14,&local_1e0,param_1,0);
                            goto LAB_1470eb8a1;
                          }
                        }
                      }
                    }
LAB_1470ec265:
                    uVar17 = 0;
                    goto LAB_1470eb8a1;
                  }
                  FUN_140b013e6(param_1,&local_1f0);
                  local_208 = (undefined ******)0x0;
                  uVar12 = FUN_1403f613c();
                  FUN_14047320e(uVar12,param_3,&local_1f0,&local_208);
                  if (*(byte *)(param_1 + 4) == 0xb) {
                    *param_1 = local_1f0;
                  }
                  else {
                    pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 +
                                        (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
                    if (pcVar10 != (code *)0x0) {
                      pppppppuVar16 = param_1;
                      if (0x18 < *(ushort *)(param_1 + 3)) {
                        pppppppuVar16 = (undefined *******)*param_1;
                      }
                      (*pcVar10)(pppppppuVar16);
                    }
                    if (0x18 < *(ushort *)(param_1 + 3)) {
                      FUN_1400020a8(*param_1);
                    }
                    *(undefined2 *)(param_1 + 3) = 8;
                    *param_1 = local_1f0;
                    *(undefined1 *)(param_1 + 4) = 0xb;
                  }
                }
                else {
                  FUN_142b38d56(param_1,&local_1f0);
                  FUN_1401fb57a(param_3,&local_1f0);
                  if (*(byte *)(param_1 + 4) == 5) goto LAB_1470ebad6;
                  pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 +
                                      (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
                  if (pcVar10 != (code *)0x0) {
                    pppppppuVar16 = param_1;
                    if (0x18 < *(ushort *)(param_1 + 3)) {
                      pppppppuVar16 = (undefined *******)*param_1;
                    }
                    (*pcVar10)(pppppppuVar16);
                  }
                  if (0x18 < *(ushort *)(param_1 + 3)) {
                    FUN_1400020a8(*param_1);
                  }
                  *(undefined2 *)(param_1 + 3) = 0x18;
                  *param_1 = local_1f0;
                  param_1[1] = (undefined ******)pppppuStack_1e8;
                  param_1[2] = local_1e0;
                  *(undefined1 *)(param_1 + 4) = 5;
                }
              }
              else {
                FUN_144a7b7fe(param_1,&local_1f0);
                FUN_14480c34d(param_3,&local_1f0);
                if (*(byte *)(param_1 + 4) == 4) {
LAB_1470ebad6:
                  param_1[2] = local_1e0;
                  *param_1 = local_1f0;
                  param_1[1] = (undefined ******)pppppuStack_1e8;
                }
                else {
                  pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 +
                                      (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
                  if (pcVar10 != (code *)0x0) {
                    pppppppuVar16 = param_1;
                    if (0x18 < *(ushort *)(param_1 + 3)) {
                      pppppppuVar16 = (undefined *******)*param_1;
                    }
                    (*pcVar10)(pppppppuVar16);
                  }
                  if (0x18 < *(ushort *)(param_1 + 3)) {
                    FUN_1400020a8(*param_1);
                  }
                  *(undefined2 *)(param_1 + 3) = 0x18;
                  *param_1 = local_1f0;
                  param_1[1] = (undefined ******)pppppuStack_1e8;
                  param_1[2] = local_1e0;
                  *(undefined1 *)(param_1 + 4) = 4;
                }
              }
              goto LAB_1470eb89e;
            }
            uVar17 = *(ulonglong *)(param_2 + 0xc);
            FUN_1401a700c(&local_1f0,5);
            if (uVar17 != ((ulonglong)local_1f0 & 0xffffffff)) {
              uVar17 = *(ulonglong *)(param_2 + 0xc);
              FUN_1401a700c(&local_1f0,0x31);
              if (uVar17 == ((ulonglong)local_1f0 & 0xffffffff)) {
                local_208 = (undefined ******)0x0;
                local_200 = 0;
                local_1f8 = 0;
                FUN_14041e7fb(param_3,&local_208);
                uVar17 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),local_200 == 0xf00000d0);
                if (local_200 == 0xf00000d0) {
                  local_1d8 = (undefined ******)CONCAT62(local_1d8._2_6_,0x18);
                  local_1f0 = local_208;
                  pppppuStack_1e8 = (undefined *****)CONCAT44(pppppuStack_1e8._4_4_,0xf00000d0);
                  local_1e0 = (undefined ******)0x0;
                  local_1d0 = 10;
                  pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 +
                                      (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
                  if (pcVar10 != (code *)0x0) {
                    pppppppuVar16 = param_1;
                    if (0x18 < *(ushort *)(param_1 + 3)) {
                      pppppppuVar16 = (undefined *******)*param_1;
                    }
                    (*pcVar10)(pppppppuVar16);
                  }
                  if (0x18 < *(ushort *)(param_1 + 3)) {
                    FUN_1400020a8(*param_1);
                  }
                  *(undefined2 *)(param_1 + 3) = 0x18;
                  pcVar10 = DAT_14c9a90f8;
                  if ((DAT_14c9a90f8 == (code *)0x0) &&
                     (pcVar10 = DAT_14c9a90f0, DAT_14c9a90f0 == (code *)0x0)) {
                    memcpy(param_1,&local_1f0,(longlong)DAT_14c9a9050);
                  }
                  else {
                    (*pcVar10)(param_1,&local_1f0);
                  }
                  *(undefined1 *)(param_1 + 4) = local_1d0;
                  local_1d0 = 0;
                  if (DAT_14c9a85d0 != (code *)0x0) {
                    pppppppuVar16 = &local_1f0;
                    if (0x18 < (ushort)local_1d8) {
                      pppppppuVar16 = (undefined *******)local_1f0;
                    }
                    (*DAT_14c9a85d0)(pppppppuVar16);
                  }
                  if (0x18 < (ushort)local_1d8) {
                    FUN_1400020a8(local_1f0);
                  }
                }
                goto LAB_1470eb8a1;
              }
              goto LAB_1470ec265;
            }
            local_1f0 = (undefined ******)FUN_14070d842(param_1);
            (*(code *)(*param_3)[0x2a])(param_3,&local_1f0);
            ppppppuVar4 = local_1f0;
            if ((undefined *******)local_1f0 == (undefined *******)0x0) {
              pppppppuVar16 = (undefined *******)0x0;
LAB_1470ebec8:
              if (*(byte *)(param_1 + 4) != 6) {
                pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 +
                                    (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
                if (pcVar10 != (code *)0x0) {
                  pppppppuVar15 = param_1;
                  if (0x18 < *(ushort *)(param_1 + 3)) {
                    pppppppuVar15 = (undefined *******)*param_1;
                  }
                  (*pcVar10)(pppppppuVar15);
                }
                if (0x18 < *(ushort *)(param_1 + 3)) {
                  FUN_1400020a8(*param_1);
                }
                *(undefined2 *)(param_1 + 3) = 8;
                *param_1 = (undefined ******)0x0;
                FUN_14485c47a(param_1,pppppppuVar16);
                *(undefined1 *)(param_1 + 4) = 6;
                goto LAB_1470eb89e;
              }
            }
            else {
              lVar11 = FUN_144a6c4d8();
              ppppppuVar6 = local_1f0;
              pppppppuVar16 = (undefined *******)local_1f0;
              if ((*(int *)(ppppppuVar4[2] + 7) < *(int *)(lVar11 + 0x38)) ||
                 ((undefined ****)ppppppuVar4[2][6][*(int *)(lVar11 + 0x38)] !=
                  (undefined ****)(lVar11 + 0x30))) goto LAB_1470ebec8;
              if (*(byte *)(param_1 + 4) != 7) {
                pcVar10 = *(code **)((longlong)&DAT_14c9a85d0 +
                                    (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
                if (pcVar10 != (code *)0x0) {
                  pppppppuVar16 = param_1;
                  if (0x18 < *(ushort *)(param_1 + 3)) {
                    pppppppuVar16 = (undefined *******)*param_1;
                  }
                  (*pcVar10)(pppppppuVar16);
                }
                if (0x18 < *(ushort *)(param_1 + 3)) {
                  FUN_1400020a8(*param_1);
                }
                *(undefined2 *)(param_1 + 3) = 8;
                *param_1 = (undefined ******)0x0;
                FUN_14485c47a(param_1,ppppppuVar6);
                *(undefined1 *)(param_1 + 4) = 7;
                goto LAB_1470eb89e;
              }
            }
            FUN_14485c47a(param_1,pppppppuVar16);
          }
        }
      }
    }
  }
LAB_1470eb89e:
  uVar17 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
LAB_1470eb8a1:
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffffff;
}



// FUNCTION 1470ec434 FUN_1470ec434 body=180 status=ok
// SIG undefined FUN_1470ec434(void)

undefined8
FUN_1470ec434(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  short *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (short *)*param_2;
  FUN_140786e3e(&local_40,param_1 + 0x30);
  if (*local_40 == 0x2e) {
    local_40 = local_40 + 1;
  }
  local_48 = param_5;
  cVar1 = FUN_140786820(param_1 + 8,&local_40,param_3,param_4);
  if (cVar1 != '\0') {
    *param_2 = local_40;
    if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 1470ec508 FUN_1470ec508 body=127 status=ok
// SIG undefined FUN_1470ec508(void)

undefined8 * FUN_1470ec508(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined2 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (*(int *)(param_2 + 1) == 0) {
    local_18 = &DAT_149dfb77a;
  }
  else {
    local_18 = (undefined2 *)*param_2;
  }
  local_28 = DAT_14c872be8;
  FUN_1470ec434(param_1,&local_18,0,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ec588 FUN_1470ec588 body=341 status=ok
// SIG undefined FUN_1470ec588(void)

ulonglong FUN_1470ec588(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  bool bVar8;
  
  uVar7 = (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120);
  lVar2 = FUN_14479d2ce((longlong)&DAT_14c9a8538 + uVar7);
  plVar6 = (longlong *)((longlong)&DAT_14c9a8540 + uVar7);
  if (lVar2 == 0) {
    *plVar6 = 0;
  }
  else {
    lVar2 = FUN_1446ddbd2();
    if (*plVar6 == 0) {
LAB_1470ec5e4:
      if (*(int *)((longlong)&DAT_14c9a8558 + uVar7) == 0) goto LAB_1470ec638;
      plVar3 = (longlong *)FUN_14007daa4(plVar6,0,0);
      if (plVar3 == (longlong *)0x0) {
LAB_1470ec6c8:
        if (*plVar6 != 0) {
          *plVar6 = 0;
          *(undefined8 *)((longlong)&DAT_14c9a8548 + uVar7) = 0;
        }
        goto LAB_1470ec628;
      }
      lVar4 = plVar3[1];
      if (*(ulonglong *)(lVar2 + 8) == 0) {
        bVar8 = lVar4 != 0;
        if (lVar4 != lVar2 && bVar8) {
          do {
            lVar4 = *(longlong *)(lVar4 + 0x30);
            bVar8 = lVar4 != 0;
            if (lVar4 == lVar2) break;
          } while (lVar4 != 0);
        }
        if (!bVar8) goto LAB_1470ec6c8;
      }
      else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_1470ec6c8;
      *plVar6 = (longlong)plVar3;
    }
    else {
      cVar1 = FUN_144729dda((longlong)&DAT_14c9a8548 + uVar7);
      if (cVar1 == '\0') goto LAB_1470ec5e4;
LAB_1470ec638:
      plVar3 = (longlong *)*plVar6;
    }
    if (plVar3 != (longlong *)0x0) {
      if (*(int *)(param_2 + 1) == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = (undefined2 *)*param_2;
      }
      if (0x18 < *(ushort *)(param_1 + 3)) {
        param_1 = (undefined8 *)*param_1;
      }
      uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      if (puVar5 != (undefined2 *)0x0) {
        (**(code **)(*plVar3 + 0xf8))(plVar3,puVar5,param_1,0,0,0x8000000,DAT_14c872be8);
      }
      goto LAB_1470ec62a;
    }
  }
LAB_1470ec628:
  uVar7 = 0;
LAB_1470ec62a:
  return uVar7 & 0xffffffff;
}



// FUNCTION 1470ec6de FUN_1470ec6de body=856 status=ok
// SIG undefined FUN_1470ec6de(void)

void FUN_1470ec6de(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 ****ppppuVar4;
  undefined8 *puVar5;
  longlong ****pppplVar6;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  undefined8 local_e0;
  wchar_t *local_d8;
  longlong ***local_d0;
  undefined4 local_c8;
  undefined4 local_b0;
  longlong ***local_a8;
  undefined4 local_a0;
  ushort local_90;
  byte local_88;
  undefined8 local_80;
  undefined8 ***local_78 [3];
  ushort local_60;
  byte local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_80 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  puVar5 = &local_80;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
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
  FUN_1446ddbd2();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  lVar1 = *(longlong *)(param_2 + 0x30);
  lVar2 = *(longlong *)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (lVar1 == 0 || lVar2 == 0) {
    local_d8 = L"Resolve_MissingOutputProperty";
    local_d0._0_4_ = 0x1d;
    local_f0 = param_1;
    FUN_1446e940c(local_e4,&local_d8);
    local_d8 = L"GbxParamBlueprintLibrary";
    local_d0 = (longlong ***)CONCAT44(local_d0._4_4_,0x18);
    FUN_1446e940c(local_e8,&local_d8);
    FUN_140208bae(&local_a8,local_e8,local_e4,L"Failed to resolve the output parameter for Resolve."
                 );
    local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,3);
    local_d0 = local_a8;
    if ((longlong ****)local_a8 == (longlong ****)0x0) {
      local_c8 = local_a0;
    }
    else {
      (*(code *)(*local_a8)[1])();
      local_c8 = local_a0;
      if ((longlong ****)local_a8 != (longlong ****)0x0) {
        (*(code *)(*local_a8)[2])();
      }
    }
    FUN_14282556a(local_f0,param_2,&local_d8);
    if ((longlong ****)local_d0 != (longlong ****)0x0) {
      (*(code *)(*local_d0)[2])();
    }
  }
  local_d8 = (wchar_t *)((ulonglong)local_d8 & 0xffffffffffffff00);
  local_b0 = 0;
  FUN_1456bb102(&local_d8,local_e0);
  FUN_1447c3578(puVar5,&local_a8,&local_d8);
  FUN_1470ee80c(&local_a8,lVar1,lVar2,0);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppplVar6 = &local_a8;
    if (0x18 < local_90) {
      pppplVar6 = (longlong ****)local_a8;
    }
    (*pcVar3)(pppplVar6);
  }
  if (0x18 < local_90) {
    FUN_1400020a8(local_a8);
  }
  FUN_144a5ac3a(&local_d8);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar4 = (undefined8 ****)local_78[0];
    if (local_60 < 0x19) {
      ppppuVar4 = local_78;
    }
    (*pcVar3)(ppppuVar4);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78[0]);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470eca38 FUN_1470eca38 body=192 status=ok
// SIG undefined FUN_1470eca38(void)

undefined4 FUN_1470eca38(undefined8 param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [40];
  undefined4 local_50;
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[0] = 0;
  local_50 = 0;
  FUN_1456bb102(local_78);
  FUN_1447c3578(param_1,local_48,local_78);
  uVar2 = FUN_144a7fca4(local_48);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_48;
    if (0x18 < local_30) {
      pppuVar3 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  FUN_144a5ac3a(local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ecafa FUN_1470ecafa body=38 status=ok
// SIG undefined FUN_1470ecafa(void)

void FUN_1470ecafa(undefined8 *param_1,byte param_2)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 4;
  *(uint *)(param_1 + 1) = (uint)param_2;
  *(undefined1 *)(param_1 + 5) = 1;
  *(bool *)(param_1 + 6) = (DAT_14c9a8634 & 0x20) == 0;
  return;
}



// FUNCTION 1470ecb20 FUN_1470ecb20 body=41 status=ok
// SIG undefined FUN_1470ecb20(void)

void FUN_1470ecb20(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 4;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 5) = 2;
  *(byte *)(param_1 + 6) = (byte)~DAT_14c9a8754 >> 4 & 2;
  return;
}



// FUNCTION 1470ecb4a FUN_1470ecb4a body=44 status=ok
// SIG undefined FUN_1470ecb4a(void)

void FUN_1470ecb4a(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 4;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 5) = 3;
  *(char *)(param_1 + 6) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  return;
}



// FUNCTION 1470ecb76 FUN_1470ecb76 body=210 status=ok
// SIG undefined FUN_1470ecb76(void)

undefined4 FUN_1470ecb76(undefined8 param_1)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [40];
  undefined4 local_60;
  undefined8 **local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[0] = 0;
  local_60 = 0;
  FUN_1456bb102(local_88);
  FUN_1447c3578(param_1,local_58,local_88);
  uVar3 = FUN_140ee352e(local_58);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_58;
    if (0x18 < local_40) {
      pppuVar2 = (undefined8 ***)local_58[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  FUN_144a5ac3a(local_88);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ecc4a FUN_1470ecc4a body=46 status=ok
// SIG undefined FUN_1470ecc4a(void)

void FUN_1470ecc4a(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 8;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 5) = 0x15;
  uVar1 = 0x15;
  if ((DAT_14c9a9cb4 & 0x20) != 0) {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar1;
  return;
}



// FUNCTION 1470ecc78 FUN_1470ecc78 body=212 status=ok
// SIG undefined FUN_1470ecc78(void)

undefined8 FUN_1470ecc78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = 0;
  local_58 = 0;
  FUN_1456bb102(local_80,param_3);
  FUN_1447c3578(param_2,local_50,local_80);
  FUN_144a7b7fe(local_50,param_1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_50;
    if (0x18 < local_38) {
      pppuVar2 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a5ac3a(local_80);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ecd4e FUN_1470ecd4e body=212 status=ok
// SIG undefined FUN_1470ecd4e(void)

undefined8 FUN_1470ecd4e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = 0;
  local_58 = 0;
  FUN_1456bb102(local_80,param_3);
  FUN_1447c3578(param_2,local_50,local_80);
  FUN_142b38d56(local_50,param_1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_50;
    if (0x18 < local_38) {
      pppuVar2 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a5ac3a(local_80);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ece24 FUN_1470ece24 body=194 status=ok
// SIG undefined FUN_1470ece24(void)

undefined8 FUN_1470ece24(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [40];
  undefined4 local_50;
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[0] = 0;
  local_50 = 0;
  FUN_1456bb102(local_78);
  FUN_1447c3578(param_1,local_48,local_78);
  uVar2 = FUN_14070d842(local_48);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_48;
    if (0x18 < local_30) {
      pppuVar3 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  FUN_144a5ac3a(local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ecee8 FUN_1470ecee8 body=209 status=ok
// SIG undefined FUN_1470ecee8(void)

undefined8 * FUN_1470ecee8(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 4) = 8;
  FUN_14485c47a(param_1 + 1);
  *(undefined1 *)(param_1 + 5) = 6;
  uVar2 = 6;
  if ((DAT_14c9a8bd4 & 0x20) != 0) {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar2;
  if (param_2 != 0) {
    lVar1 = FUN_144a6c4d8();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30)) {
      lVar1 = FUN_144a799b0();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
        local_20 = param_2;
        FUN_1470ed0fa(param_1);
      }
    }
    else {
      local_20 = param_2;
      FUN_1470ecfba(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ecfba FUN_1470ecfba body=319 status=ok
// SIG undefined FUN_1470ecfba(void)

void FUN_1470ecfba(longlong param_1,undefined8 *param_2)

{
  longlong *_Dst;
  code *pcVar1;
  longlong *plVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 8;
  local_48[0] = (undefined8 ***)0x0;
  FUN_14485c47a(local_48,*param_2);
  local_28 = 7;
  _Dst = (longlong *)(param_1 + 8);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x28) * 0x120));
  if (pcVar1 != (code *)0x0) {
    plVar2 = _Dst;
    if (0x18 < *(ushort *)(param_1 + 0x20)) {
      plVar2 = (longlong *)*_Dst;
    }
    (*pcVar1)(plVar2);
  }
  if (0x18 < *(ushort *)(param_1 + 0x20)) {
    FUN_1400020a8(*_Dst);
  }
  *(ushort *)(param_1 + 0x20) = local_30;
  if (local_30 < 0x19) {
    pcVar1 = DAT_14c9a8d98;
    if ((DAT_14c9a8d98 == (code *)0x0) && (pcVar1 = DAT_14c9a8d90, DAT_14c9a8d90 == (code *)0x0)) {
      memcpy(_Dst,local_48,(longlong)DAT_14c9a8cf0);
    }
    else {
      (*pcVar1)(_Dst,local_48);
    }
  }
  else {
    *_Dst = (longlong)local_48[0];
    local_48[0] = (undefined8 ***)0x0;
    local_30 = 0;
  }
  *(undefined1 *)(param_1 + 0x28) = local_28;
  local_28 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    pppuVar3 = local_48;
    if (0x18 < local_30) {
      pppuVar3 = (undefined8 ***)local_48[0];
    }
    (*DAT_14c9a85d0)(pppuVar3);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ed0fa FUN_1470ed0fa body=319 status=ok
// SIG undefined FUN_1470ed0fa(void)

void FUN_1470ed0fa(longlong param_1,undefined8 *param_2)

{
  longlong *_Dst;
  code *pcVar1;
  longlong *plVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 8;
  local_48[0] = (undefined8 ***)0x0;
  FUN_14485c47a(local_48,*param_2);
  local_28 = 0xe;
  _Dst = (longlong *)(param_1 + 8);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x28) * 0x120));
  if (pcVar1 != (code *)0x0) {
    plVar2 = _Dst;
    if (0x18 < *(ushort *)(param_1 + 0x20)) {
      plVar2 = (longlong *)*_Dst;
    }
    (*pcVar1)(plVar2);
  }
  if (0x18 < *(ushort *)(param_1 + 0x20)) {
    FUN_1400020a8(*_Dst);
  }
  *(ushort *)(param_1 + 0x20) = local_30;
  if (local_30 < 0x19) {
    pcVar1 = DAT_14c9a9578;
    if ((DAT_14c9a9578 == (code *)0x0) && (pcVar1 = DAT_14c9a9570, DAT_14c9a9570 == (code *)0x0)) {
      memcpy(_Dst,local_48,(longlong)DAT_14c9a94d0);
    }
    else {
      (*pcVar1)(_Dst,local_48);
    }
  }
  else {
    *_Dst = (longlong)local_48[0];
    local_48[0] = (undefined8 ***)0x0;
    local_30 = 0;
  }
  *(undefined1 *)(param_1 + 0x28) = local_28;
  local_28 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    pppuVar3 = local_48;
    if (0x18 < local_30) {
      pppuVar3 = (undefined8 ***)local_48[0];
    }
    (*DAT_14c9a85d0)(pppuVar3);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ed23a FUN_1470ed23a body=62 status=ok
// SIG undefined FUN_1470ed23a(void)

undefined8 * FUN_1470ed23a(undefined8 *param_1)

{
  undefined1 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 4) = 8;
  FUN_14485c47a(param_1 + 1);
  *(undefined1 *)(param_1 + 5) = 7;
  uVar1 = 7;
  if ((DAT_14c9a8cf4 & 0x20) != 0) {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar1;
  return param_1;
}



// FUNCTION 1470ed278 FUN_1470ed278 body=194 status=ok
// SIG undefined FUN_1470ed278(void)

undefined8 FUN_1470ed278(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [40];
  undefined4 local_50;
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[0] = 0;
  local_50 = 0;
  FUN_1456bb102(local_78);
  FUN_1447c3578(param_1,local_48,local_78);
  uVar2 = FUN_140593260(local_48);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_48;
    if (0x18 < local_30) {
      pppuVar3 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  FUN_144a5ac3a(local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ed33c FUN_1470ed33c body=62 status=ok
// SIG undefined FUN_1470ed33c(void)

undefined8 * FUN_1470ed33c(undefined8 *param_1)

{
  undefined1 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 4) = 8;
  FUN_14485c47a(param_1 + 1);
  *(undefined1 *)(param_1 + 5) = 0xe;
  uVar1 = 0xe;
  if ((DAT_14c9a94d4 & 0x20) != 0) {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar1;
  return param_1;
}



// FUNCTION 1470ed37a FUN_1470ed37a body=212 status=ok
// SIG undefined FUN_1470ed37a(void)

undefined8 FUN_1470ed37a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = 0;
  local_58 = 0;
  FUN_1456bb102(local_80,param_3);
  FUN_1447c3578(param_2,local_50,local_80);
  FUN_1457d43e4(local_50,param_1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_50;
    if (0x18 < local_38) {
      pppuVar2 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a5ac3a(local_80);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ed450 FUN_1470ed450 body=48 status=ok
// SIG undefined FUN_1470ed450(void)

void FUN_1470ed450(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  uVar1 = *param_2;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 8;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 5) = 0x12;
  uVar2 = 0x12;
  if ((DAT_14c9a9954 & 0x20) != 0) {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar2;
  return;
}



// FUNCTION 1470ed480 FUN_1470ed480 body=212 status=ok
// SIG undefined FUN_1470ed480(void)

undefined8 FUN_1470ed480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = 0;
  local_58 = 0;
  FUN_1456bb102(local_80,param_3);
  FUN_1447c3578(param_2,local_50,local_80);
  FUN_1461dc38e(local_50,param_1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_50;
    if (0x18 < local_38) {
      pppuVar2 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a5ac3a(local_80);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ed556 FUN_1470ed556 body=145 status=ok
// SIG undefined FUN_1470ed556(void)

undefined8 FUN_1470ed556(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_1470ed5e8(param_1,&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ed5e8 FUN_1470ed5e8 body=278 status=ok
// SIG undefined FUN_1470ed5e8(void)

undefined8 * FUN_1470ed5e8(undefined8 *param_1,longlong *param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  local_40 = (void *)0x0;
  local_38 = (int)param_2[1];
  lVar2 = (longlong)local_38;
  pvVar1 = (void *)*param_2;
  if (lVar2 == 0) {
    local_34 = 0;
    *(undefined2 *)(param_1 + 4) = 0x10;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,pvVar1,lVar2 * 2);
    pvVar1 = local_40;
    lVar2 = (longlong)local_38;
    *(undefined2 *)(param_1 + 4) = 0x10;
    param_1[1] = 0;
    *(int *)(param_1 + 2) = local_38;
    if (lVar2 != 0) {
      FUN_1446dd670(param_1 + 1,local_38,0);
      memcpy((void *)param_1[1],pvVar1,lVar2 * 2);
      goto LAB_1470ed6ab;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
LAB_1470ed6ab:
  *(undefined1 *)(param_1 + 5) = 8;
  if (local_40 != (void *)0x0) {
    FUN_1400020a8(local_40);
  }
  *(byte *)(param_1 + 6) = (byte)~DAT_14c9a8e14 >> 2 & 8;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ed700 FUN_1470ed700 body=56 status=ok
// SIG undefined FUN_1470ed700(void)

void FUN_1470ed700(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar2 = *param_2;
  uVar1 = *(undefined4 *)(param_2 + 1);
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 0x18;
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar1;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 10;
  uVar3 = 10;
  if ((DAT_14c9a9054 & 0x20) != 0) {
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar3;
  return;
}



// FUNCTION 1470ed738 FUN_1470ed738 body=212 status=ok
// SIG undefined FUN_1470ed738(void)

undefined8 FUN_1470ed738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = 0;
  local_58 = 0;
  FUN_1456bb102(local_80,param_3);
  FUN_1447c3578(param_2,local_50,local_80);
  FUN_140b013e6(local_50,param_1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_50;
    if (0x18 < local_38) {
      pppuVar2 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a5ac3a(local_80);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ed80e FUN_1470ed80e body=48 status=ok
// SIG undefined FUN_1470ed80e(void)

void FUN_1470ed80e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  uVar1 = *param_2;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 8;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 5) = 0xb;
  uVar2 = 0xb;
  if ((DAT_14c9a9174 & 0x20) != 0) {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar2;
  return;
}



// FUNCTION 1470ed83e FUN_1470ed83e body=54 status=ok
// SIG undefined FUN_1470ed83e(void)

void FUN_1470ed83e(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 1);
  param_1[1] = *param_2;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 0xc;
  *(undefined1 *)(param_1 + 5) = 0x14;
  uVar1 = 0x14;
  if ((DAT_14c9a9b94 & 0x20) != 0) {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar1;
  return;
}



// FUNCTION 1470ed874 FUN_1470ed874 body=48 status=ok
// SIG undefined FUN_1470ed874(void)

void FUN_1470ed874(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  uVar1 = param_2[1];
  param_1[1] = *param_2;
  param_1[2] = uVar1;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 0x10;
  *(undefined1 *)(param_1 + 5) = 0x18;
  uVar2 = 0x18;
  if ((DAT_14c9aa014 & 0x20) != 0) {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar2;
  return;
}



// FUNCTION 1470ed8a4 FUN_1470ed8a4 body=197 status=ok
// SIG undefined FUN_1470ed8a4(void)

undefined8 FUN_1470ed8a4(undefined8 param_1,void *param_2)

{
  undefined1 auStack_148 [40];
  undefined1 local_120 [184];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  memcpy(local_120,param_2,0xb8);
  local_68 = *(undefined8 *)((longlong)param_2 + 0xb8);
  local_60 = *(undefined8 *)((longlong)param_2 + 0xc0);
  uStack_58 = *(undefined8 *)((longlong)param_2 + 200);
  local_50 = *(undefined4 *)((longlong)param_2 + 0xd0);
  local_4c = *(undefined1 *)((longlong)param_2 + 0xd4);
  local_28 = *(undefined8 *)((longlong)param_2 + 0xf8);
  local_48 = *(undefined4 *)((longlong)param_2 + 0xd8);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0xdc);
  uStack_40 = *(undefined4 *)((longlong)param_2 + 0xe0);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xe4);
  local_38 = *(undefined4 *)((longlong)param_2 + 0xe8);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xec);
  uStack_30 = *(undefined4 *)((longlong)param_2 + 0xf0);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0xf4);
  FUN_1470ed96a(param_1,local_120);
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ed96a FUN_1470ed96a body=317 status=ok
// SIG undefined FUN_1470ed96a(void)

undefined8 * FUN_1470ed96a(undefined8 *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  void *_Dst;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [184];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_1 = 0;
  memcpy(local_f8,param_2,0xb8);
  uVar2 = *(undefined8 *)((longlong)param_2 + 0xb8);
  local_108 = *(undefined8 *)((longlong)param_2 + 0xc0);
  uStack_100 = *(undefined8 *)((longlong)param_2 + 200);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xd0);
  uVar3 = *(undefined1 *)((longlong)param_2 + 0xd4);
  local_138 = *(undefined8 *)((longlong)param_2 + 0xd8);
  uStack_130 = *(undefined8 *)((longlong)param_2 + 0xe0);
  local_128 = *(undefined4 *)((longlong)param_2 + 0xe8);
  uStack_124 = *(undefined4 *)((longlong)param_2 + 0xec);
  uStack_120 = *(undefined4 *)((longlong)param_2 + 0xf0);
  uStack_11c = *(undefined4 *)((longlong)param_2 + 0xf4);
  local_118 = *(undefined8 *)((longlong)param_2 + 0xf8);
  *(undefined2 *)(param_1 + 4) = 0x100;
  _Dst = (void *)FUN_14001cc68(0x100,0);
  param_1[1] = _Dst;
  memcpy(_Dst,local_f8,0xb8);
  *(undefined8 *)((longlong)_Dst + 0xb8) = uVar2;
  *(undefined8 *)((longlong)_Dst + 0xc0) = local_108;
  *(undefined8 *)((longlong)_Dst + 200) = uStack_100;
  *(undefined4 *)((longlong)_Dst + 0xd0) = uVar1;
  *(undefined1 *)((longlong)_Dst + 0xd4) = uVar3;
  *(undefined8 *)((longlong)_Dst + 0xf8) = local_118;
  *(undefined4 *)((longlong)_Dst + 0xe8) = local_128;
  *(undefined4 *)((longlong)_Dst + 0xec) = uStack_124;
  *(undefined4 *)((longlong)_Dst + 0xf0) = uStack_120;
  *(undefined4 *)((longlong)_Dst + 0xf4) = uStack_11c;
  *(undefined4 *)((longlong)_Dst + 0xd8) = (undefined4)local_138;
  *(undefined4 *)((longlong)_Dst + 0xdc) = local_138._4_4_;
  *(undefined4 *)((longlong)_Dst + 0xe0) = (undefined4)uStack_130;
  *(undefined4 *)((longlong)_Dst + 0xe4) = uStack_130._4_4_;
  *(undefined1 *)(param_1 + 5) = 0x19;
  uVar3 = 0x19;
  if ((DAT_14c9aa134 & 0x20) != 0) {
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar3;
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470edaa8 FUN_1470edaa8 body=212 status=ok
// SIG undefined FUN_1470edaa8(void)

undefined8 FUN_1470edaa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = 0;
  local_58 = 0;
  FUN_1456bb102(local_80,param_3);
  FUN_1447c3578(param_2,local_50,local_80);
  FUN_1470df39c(local_50,param_1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_50;
    if (0x18 < local_38) {
      pppuVar2 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a5ac3a(local_80);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470edb7e FUN_1470edb7e body=97 status=ok
// SIG undefined FUN_1470edb7e(void)

undefined8 FUN_1470edb7e(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)*param_2;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = (undefined4)param_2[1];
  FUN_1470edbe0(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470edbe0 FUN_1470edbe0 body=148 status=ok
// SIG undefined FUN_1470edbe0(void)

undefined8 * FUN_1470edbe0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  *param_1 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0) {
    lVar2 = param_2[1];
    *(undefined2 *)(param_1 + 4) = 0x10;
    param_1[1] = 0;
    *(int *)(param_1 + 2) = (int)lVar2;
    *(undefined1 *)(param_1 + 5) = 0x1b;
  }
  else {
    (**(code **)(*plVar1 + 8))(plVar1);
    lVar2 = param_2[1];
    *(undefined2 *)(param_1 + 4) = 0x10;
    param_1[1] = plVar1;
    (**(code **)(*plVar1 + 8))(plVar1);
    *(int *)(param_1 + 2) = (int)lVar2;
    *(undefined1 *)(param_1 + 5) = 0x1b;
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  uVar3 = 0x1b;
  if ((DAT_14c9aa374 & 0x20) != 0) {
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar3;
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  return param_1;
}



// FUNCTION 1470edc74 FUN_1470edc74 body=212 status=ok
// SIG undefined FUN_1470edc74(void)

undefined8 FUN_1470edc74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = 0;
  local_58 = 0;
  FUN_1456bb102(local_80,param_3);
  FUN_1447c3578(param_2,local_50,local_80);
  FUN_1470df8c6(local_50,param_1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_50;
    if (0x18 < local_38) {
      pppuVar2 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a5ac3a(local_80);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470edd4a FUN_1470edd4a body=163 status=ok
// SIG undefined FUN_1470edd4a(void)

undefined8 FUN_1470edd4a(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *param_2;
  local_48 = *(undefined4 *)(param_2 + 1);
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_40 = *(undefined4 *)(param_2 + 2);
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 4);
  lVar1 = (longlong)local_30;
  _Src = (void *)param_2[3];
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  FUN_1470eddee(param_1,&local_50);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470eddee FUN_1470eddee body=350 status=ok
// SIG undefined FUN_1470eddee(void)

undefined8 * FUN_1470eddee(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  local_60 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_50 = *(undefined4 *)(param_2 + 2);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_2 + 4);
  lVar4 = (longlong)local_40;
  pvVar1 = (void *)param_2[3];
  if (lVar4 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,pvVar1,lVar4 * 2);
  }
  *(undefined2 *)(param_1 + 4) = 0x28;
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0);
  pvVar1 = local_48;
  param_1[1] = puVar2;
  *puVar2 = local_60;
  *(undefined4 *)(puVar2 + 1) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_54;
  *(undefined4 *)(puVar2 + 2) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_4c;
  puVar2[3] = 0;
  lVar4 = (longlong)local_40;
  *(int *)(puVar2 + 4) = local_40;
  if (lVar4 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 3,local_40,0);
    memcpy((void *)puVar2[3],pvVar1,lVar4 * 2);
  }
  *(undefined1 *)(param_1 + 5) = 0x1c;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8(local_48);
  }
  uVar3 = 0x1c;
  if ((DAT_14c9aa494 & 0x20) != 0) {
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar3;
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470edf4e FUN_1470edf4e body=212 status=ok
// SIG undefined FUN_1470edf4e(void)

undefined8 FUN_1470edf4e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = 0;
  local_58 = 0;
  FUN_1456bb102(local_80,param_3);
  FUN_1447c3578(param_2,local_50,local_80);
  FUN_1411a0e4c(local_50,param_1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_50;
    if (0x18 < local_38) {
      pppuVar2 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a5ac3a(local_80);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ee024 FUN_1470ee024 body=112 status=ok
// SIG undefined FUN_1470ee024(void)

undefined8 FUN_1470ee024(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  local_30 = FUN_14477b664(uVar1);
  local_28 = param_2[2];
  FUN_1470ee096(param_1,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ee096 FUN_1470ee096 body=120 status=ok
// SIG undefined FUN_1470ee096(void)

undefined8 * FUN_1470ee096(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  *param_1 = 0;
  uVar3 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar2 = FUN_14477b664(uVar1);
  uVar1 = param_2[2];
  *(undefined2 *)(param_1 + 4) = 0x18;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = uVar3;
  uVar3 = FUN_14477b664(uVar2);
  uVar3 = FUN_14477b664(uVar3);
  param_1[2] = uVar3;
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 5) = 0x1d;
  uVar4 = 0x1d;
  if ((DAT_14c9aa5b4 & 0x20) != 0) {
    uVar4 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar4;
  return param_1;
}



// FUNCTION 1470ee10e FUN_1470ee10e body=212 status=ok
// SIG undefined FUN_1470ee10e(void)

undefined8 FUN_1470ee10e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = 0;
  local_58 = 0;
  FUN_1456bb102(local_80,param_3);
  FUN_1447c3578(param_2,local_50,local_80);
  FUN_1470ee1e4(local_50,param_1);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_50;
    if (0x18 < local_38) {
      pppuVar2 = (undefined8 ***)local_50[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_144a5ac3a(local_80);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ee1e4 FUN_1470ee1e4 body=177 status=ok
// SIG undefined FUN_1470ee1e4(void)

longlong * FUN_1470ee1e4(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[4] == '\"') {
    *param_2 = *param_1;
  }
  else {
    FUN_1400b56fe(local_40,param_1,0x22);
    pppuVar2 = (undefined8 ***)local_40[0];
    if (local_20 == 0) {
      pppuVar2 = DAT_14c9aaf88;
    }
    *param_2 = (longlong)pppuVar2;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_40;
      if (0x18 < local_28) {
        pppuVar2 = (undefined8 ***)local_40[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_28) {
      FUN_1400020a8(local_40[0]);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ee296 FUN_1470ee296 body=48 status=ok
// SIG undefined FUN_1470ee296(void)

void FUN_1470ee296(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  uVar1 = *param_2;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 4) = 8;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 5) = 0x22;
  uVar2 = 0x22;
  if ((DAT_14c9aab54 & 0x20) != 0) {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 6) = uVar2;
  return;
}



// FUNCTION 1470ee2c6 FUN_1470ee2c6 body=174 status=ok
// SIG undefined FUN_1470ee2c6(void)

void FUN_1470ee2c6(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  ushort local_30;
  byte local_28;
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  local_30 = 4;
  local_28 = 3;
  local_20 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  local_48 = param_2;
  FUN_1403719a4(param_1,&local_50);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_30 < 0x19) {
      puVar2 = &local_48;
    }
    else {
      puVar2 = (undefined4 *)CONCAT44(uStack_44,local_48);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(CONCAT44(uStack_44,local_48));
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ee376 FUN_1470ee376 body=176 status=ok
// SIG undefined FUN_1470ee376(void)

void FUN_1470ee376(undefined8 param_1,undefined8 ****param_2)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 ***local_48 [3];
  ushort local_30;
  byte local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  local_30 = 8;
  local_28 = 0x15;
  local_20 = 0x15;
  if ((DAT_14c9a9cb4 & 0x20) != 0) {
    local_20 = 0;
  }
  local_48[0] = param_2;
  FUN_1403719a4(param_1,&local_50);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar2 = (undefined8 ****)local_48[0];
    if (local_30 < 0x19) {
      ppppuVar2 = local_48;
    }
    (*pcVar1)(ppppuVar2);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470ee428 FUN_1470ee428 body=170 status=ok
// SIG undefined FUN_1470ee428(void)

void FUN_1470ee428(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  ushort local_30;
  byte local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  local_30 = 4;
  local_28 = 2;
  local_20 = (byte)~DAT_14c9a8754 >> 4 & 2;
  local_48 = param_2;
  FUN_1403719a4(param_1,&local_50);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_30 < 0x19) {
      puVar2 = &local_48;
    }
    else {
      puVar2 = (undefined4 *)CONCAT44(uStack_44,local_48);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(CONCAT44(uStack_44,local_48));
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ee4d4 FUN_1470ee4d4 body=29 status=ok
// SIG undefined FUN_1470ee4d4(void)

undefined8 FUN_1470ee4d4(undefined8 param_1,longlong param_2)

{
  FUN_140592d2e(param_2 + 8,param_1);
  return param_1;
}



// FUNCTION 1470ee4f2 FUN_1470ee4f2 body=29 status=ok
// SIG undefined FUN_1470ee4f2(void)

undefined8 FUN_1470ee4f2(undefined8 param_1,longlong param_2)

{
  FUN_140592d2e(param_2 + 8,param_1);
  return param_1;
}



// FUNCTION 1470ee510 FUN_1470ee510 body=376 status=ok
// SIG undefined FUN_1470ee510(void)

double * FUN_1470ee510(longlong param_1,double *param_2,longlong param_3,double *param_4,
                      undefined1 param_5)

{
  double dVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_38;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5);
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == 0) {
    param_2[2] = param_4[2];
    dVar1 = param_4[1];
    *param_2 = *param_4;
    param_2[1] = dVar1;
  }
  else {
    FUN_14030a5f0(param_1,param_2,param_3,uVar2 & 0xffffffff);
  }
  if (1.0 < ABS(*(float *)(param_1 + 0x40))) {
    FUN_141036372(param_1 + 0x10,&local_50,param_3,uVar2 & 0xffffffff);
    dVar1 = (double)*(float *)(param_1 + 0x40);
    *param_2 = dVar1 * local_50 + *param_2;
    param_2[1] = local_48 * dVar1 + param_2[1];
    param_2[2] = local_40 * dVar1 + param_2[2];
  }
  if ((*(double *)(param_1 + 0x48) == 0.0) && (!NAN(*(double *)(param_1 + 0x48)))) {
    if ((*(double *)(param_1 + 0x50) == 0.0) && (!NAN(*(double *)(param_1 + 0x50)))) {
      if ((*(double *)(param_1 + 0x58) == 0.0) && (!NAN(*(double *)(param_1 + 0x58))))
      goto LAB_1470ee64d;
    }
  }
  FUN_140d0fb16(param_1 + 0x10,&local_50,param_3,uVar2 & 0xffffffff);
  FUN_1401c9a0e(&local_50,&local_68,param_1 + 0x48);
  *param_2 = local_68 + *param_2;
  param_2[1] = local_60 + param_2[1];
  param_2[2] = local_58 + param_2[2];
LAB_1470ee64d:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ee68a FUN_1470ee68a body=97 status=ok
// SIG undefined FUN_1470ee68a(void)

undefined4 * FUN_1470ee68a(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  *(undefined8 *)(param_1 + 4) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *param_1 = (undefined4)DAT_14c8464e0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  lVar4 = FUN_144a7cacc();
  if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
      (*(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
       == lVar4 + 0x30)) && (*(longlong *)(param_2 + 0x430) != 0)) {
    FUN_144b21218(*(longlong *)(param_2 + 0x430),param_1);
  }
  return param_1;
}



// FUNCTION 1470ee6ec FUN_1470ee6ec body=288 status=ok
// SIG undefined FUN_1470ee6ec(void)

ulonglong FUN_1470ee6ec(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if (param_1 != (longlong *)0x0) {
    uVar6 = 0;
    do {
      lVar2 = FUN_14479d2ce(&DAT_14c9a8538 + uVar6 * 0x48);
      plVar5 = &DAT_14c9a8540 + uVar6 * 0x24;
      if (lVar2 == 0) {
        *plVar5 = 0;
      }
      else {
        lVar2 = FUN_1446ddbd2();
        if (((*plVar5 == 0) || (cVar1 = FUN_144729dda(&DAT_14c9a8548 + uVar6 * 0x48), cVar1 == '\0')
            ) && ((&DAT_14c9a8558)[uVar6 * 0x48] != 0)) {
          lVar3 = FUN_14007daa4(plVar5,0,0);
          if (lVar3 == 0) {
LAB_1470ee7ea:
            if (*plVar5 != 0) {
              *plVar5 = 0;
              *(undefined8 *)(&DAT_14c9a8548 + uVar6 * 0x48) = 0;
            }
            goto LAB_1470ee793;
          }
          lVar4 = *(longlong *)(lVar3 + 8);
          if (*(ulonglong *)(lVar2 + 8) == 0) {
            bVar7 = lVar4 != 0;
            if (lVar4 != lVar2 && bVar7) {
              do {
                lVar4 = *(longlong *)(lVar4 + 0x30);
                bVar7 = lVar4 != 0;
                if (lVar4 == lVar2) break;
              } while (lVar4 != 0);
            }
            if (!bVar7) goto LAB_1470ee7ea;
          }
          else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0)
          goto LAB_1470ee7ea;
          *plVar5 = lVar3;
        }
        else {
          lVar3 = *plVar5;
        }
        if ((lVar3 != 0) && (cVar1 = (**(code **)(*param_1 + 0x1b0))(param_1), cVar1 != '\0'))
        goto LAB_1470ee7f7;
      }
LAB_1470ee793:
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x24);
  }
  uVar6 = 0;
LAB_1470ee7f7:
  return uVar6 & 0xffffffff;
}



// FUNCTION 1470ee80c FUN_1470ee80c body=2072 status=ok
// SIG undefined FUN_1470ee80c(void)

ulonglong FUN_1470ee80c(longlong *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  code *pcVar1;
  void *_Src;
  char cVar2;
  longlong lVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong *_Src_00;
  undefined8 uVar6;
  longlong lVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  ushort local_58;
  undefined6 uStack_56;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar12 = 0;
  if ((param_2 == (longlong *)0x0) || (param_3 == (longlong *)0x0)) goto LAB_1470ee8e2;
  if ((char)param_1[4] == '\0') goto LAB_1470eea94;
  lVar5 = param_2[1];
  lVar3 = FUN_1446ef9c4();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar16 = lVar5 != 0;
    if (lVar5 != lVar3 && bVar16) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar16 = lVar5 != 0;
      } while (lVar5 != lVar3 && bVar16);
    }
    if (!bVar16) goto LAB_1470ee876;
LAB_1470ee9a1:
    FUN_140576f62(param_1,&local_70);
    *param_3 = CONCAT44(local_70._4_4_,(int)local_70);
    *(int *)(param_3 + 1) = local_68;
    *(int *)((longlong)param_3 + 0xc) = iStack_64;
    *(int *)(param_3 + 2) = iStack_60;
    *(int *)((longlong)param_3 + 0x14) = iStack_5c;
    if (&local_70 != param_3) {
      _Src = (void *)CONCAT62(uStack_56,local_58);
      *(uint *)(param_3 + 4) = local_50;
      if (local_50 == 0 && *(int *)((longlong)param_3 + 0x24) == 0) {
        *(int *)((longlong)param_3 + 0x24) = 0;
      }
      else {
        FUN_1446dd670(param_3 + 3,local_50);
        if (local_50 != 0) {
          memcpy((void *)param_3[3],_Src,(longlong)(int)local_50 * 2);
        }
      }
    }
    if (CONCAT62(uStack_56,local_58) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) goto LAB_1470ee9a1;
LAB_1470ee876:
    lVar5 = param_2[1];
    lVar3 = FUN_1446f4b16();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar16 = lVar5 != 0;
      if (lVar5 != lVar3 && bVar16) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar16 = lVar5 != 0;
        } while (lVar5 != lVar3 && bVar16);
      }
      if (!bVar16) goto LAB_1470ee896;
LAB_1470eea3c:
      lVar3 = FUN_14070d842(param_1);
      lVar5 = param_2[0xe];
      if (lVar5 == 0) {
LAB_1470eea94:
        if ((~param_2[7] & 0x1000000200U) == 0) {
          uVar12 = 0;
          memset(param_3,0,(longlong)*(int *)((longlong)param_2 + 0x34));
          goto LAB_1470ee8e2;
        }
        (**(code **)(*param_2 + 0x140))(param_2,param_3);
        goto LAB_1470eeef6;
      }
      if (lVar3 == 0) {
        uVar12 = 1;
        if ((*(byte *)((longlong)param_2 + 0x39) & 0x10) != 0) goto LAB_1470ee8e2;
      }
      else {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar5);
        }
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_1470eea94;
      }
      (**(code **)(*param_2 + 0x1f0))(param_2,param_3,lVar3);
    }
    else {
      if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) goto LAB_1470eea3c;
LAB_1470ee896:
      lVar5 = param_2[1];
      lVar3 = FUN_144a5ab96();
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar16 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar16) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar16 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (!bVar16) goto LAB_1470eeb04;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
LAB_1470eeb04:
        lVar5 = param_2[1];
        lVar3 = FUN_1446e6c6a();
        if (*(ulonglong *)(lVar3 + 8) == 0) {
          bVar16 = lVar5 != 0;
          if ((bVar16) && (lVar5 != lVar3)) {
            do {
              lVar5 = *(longlong *)(lVar5 + 0x30);
              bVar16 = lVar5 != 0;
            } while (lVar5 != lVar3 && bVar16);
          }
          if (bVar16) {
LAB_1470eee7a:
            FUN_1411a0e4c(param_1,&local_70);
            if (*param_3 != CONCAT44(local_70._4_4_,(int)local_70)) {
              param_3[2] = 0;
            }
            *param_3 = CONCAT44(local_70._4_4_,(int)local_70);
            if (param_3[1] != CONCAT44(iStack_64,local_68)) {
              param_3[2] = 0;
            }
            uVar6 = FUN_14477b664();
            lVar5 = FUN_14477b664(uVar6);
            param_3[1] = lVar5;
            param_3[2] = CONCAT44(iStack_5c,iStack_60);
            goto LAB_1470ee8df;
          }
        }
        else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0)
        goto LAB_1470eee7a;
        uVar12 = (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120);
        lVar5 = FUN_14479d2ce((longlong)&DAT_14c9a8538 + uVar12);
        plVar13 = (longlong *)((longlong)&DAT_14c9a8540 + uVar12);
        if (lVar5 == 0) {
          *plVar13 = 0;
        }
        else {
          lVar5 = FUN_1446ddbd2();
          if (((*plVar13 == 0) ||
              (cVar2 = FUN_144729dda((longlong)&DAT_14c9a8548 + uVar12), cVar2 == '\0')) &&
             (*(int *)((longlong)&DAT_14c9a8558 + uVar12) != 0)) {
            lVar3 = FUN_14007daa4(plVar13,0,0);
            if (lVar3 == 0) {
LAB_1470eec7a:
              if (*plVar13 != 0) {
                *plVar13 = 0;
                *(undefined8 *)((longlong)&DAT_14c9a8548 + uVar12) = 0;
              }
              goto LAB_1470eec87;
            }
            lVar7 = *(longlong *)(lVar3 + 8);
            if (*(ulonglong *)(lVar5 + 8) == 0) {
              bVar16 = lVar7 != 0;
              if (lVar7 != lVar5 && bVar16) {
                do {
                  lVar7 = *(longlong *)(lVar7 + 0x30);
                  bVar16 = lVar7 != 0;
                  if (lVar7 == lVar5) break;
                } while (lVar7 != 0);
              }
              if (!bVar16) goto LAB_1470eec7a;
            }
            else if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0)
            goto LAB_1470eec7a;
            *plVar13 = lVar3;
          }
          else {
            lVar3 = *plVar13;
          }
          if ((lVar3 != 0) && (cVar2 = (**(code **)(*param_2 + 0x1b0))(param_2), cVar2 != '\0')) {
            if (*(int *)((longlong)param_2 + 0x34) * (int)param_2[6] ==
                *(int *)((longlong)&DAT_14c9a8510 +
                        (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120))) {
              if (0x18 < *(ushort *)(param_1 + 3)) {
                param_1 = (longlong *)*param_1;
              }
              uVar12 = CONCAT71((int7)((longlong)&DAT_14c9a8508 + uVar12 >> 8),1);
              if (param_1 != param_3) {
                if ((*(byte *)((longlong)param_2 + 0x3b) & 0x40) == 0) {
                  (**(code **)(*param_2 + 0x100))(param_2,param_3,param_1);
                }
                else {
                  memcpy(param_3,param_1,
                         (longlong)*(int *)((longlong)param_2 + 0x34) * (longlong)(int)param_2[6]);
                }
              }
              goto LAB_1470ee8e2;
            }
          }
        }
LAB_1470eec87:
        if (param_4 != '\0') {
          uVar14 = 0;
          do {
            bVar9 = *(byte *)(param_1 + 4);
            if (bVar9 == (byte)uVar14) {
LAB_1470eecff:
              lVar5 = FUN_14479d2ce(&DAT_14c9a8538 + uVar14 * 0x48);
              plVar13 = &DAT_14c9a8540 + uVar14 * 0x24;
              if (lVar5 == 0) {
                *plVar13 = 0;
              }
              else {
                lVar5 = FUN_1446ddbd2();
                if (((*plVar13 == 0) ||
                    (cVar2 = FUN_144729dda(&DAT_14c9a8548 + uVar14 * 0x48), cVar2 == '\0')) &&
                   ((&DAT_14c9a8558)[uVar14 * 0x48] != 0)) {
                  lVar3 = FUN_14007daa4(plVar13,0,0);
                  if (lVar3 == 0) {
LAB_1470eef9f:
                    if (*plVar13 != 0) {
                      *plVar13 = 0;
                      *(undefined8 *)(&DAT_14c9a8548 + uVar14 * 0x48) = 0;
                    }
                    goto LAB_1470eecd6;
                  }
                  lVar7 = *(longlong *)(lVar3 + 8);
                  if (*(ulonglong *)(lVar5 + 8) == 0) {
                    bVar16 = lVar7 != 0;
                    if (lVar7 != lVar5 && bVar16) {
                      do {
                        lVar7 = *(longlong *)(lVar7 + 0x30);
                        bVar16 = lVar7 != 0;
                        if (lVar7 == lVar5) break;
                      } while (lVar7 != 0);
                    }
                    if (!bVar16) goto LAB_1470eef9f;
                  }
                  else if ((*(ulonglong *)(lVar7 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0)
                  goto LAB_1470eef9f;
                  *plVar13 = lVar3;
                }
                else {
                  lVar3 = *plVar13;
                }
                if ((lVar3 != 0) &&
                   (cVar2 = (**(code **)(*param_2 + 0x1b0))(param_2), cVar2 != '\0')) {
                  plVar13 = &local_70;
                  FUN_1400b56fe(plVar13,param_1);
                  uVar10 = local_50 & 0xff;
                  bVar16 = true;
                  if ((byte)local_50 == '\0') {
                    uVar10 = 0;
                  }
                  else if (*(int *)((longlong)param_2 + 0x34) * (int)param_2[6] ==
                           *(int *)((longlong)&DAT_14c9a8510 +
                                   (ulonglong)((local_50 & 0xff) * 0x120))) {
                    _Src_00 = plVar13;
                    if (0x18 < local_58) {
                      _Src_00 = (longlong *)CONCAT44(local_70._4_4_,(int)local_70);
                    }
                    if (_Src_00 != param_3) {
                      if ((*(byte *)((longlong)param_2 + 0x3b) & 0x40) == 0) {
                        (**(code **)(*param_2 + 0x100))(param_2,param_3);
                        bVar16 = false;
                        uVar10 = local_50 & 0xff;
                        goto LAB_1470eede8;
                      }
                      memcpy(param_3,_Src_00,
                             (longlong)*(int *)((longlong)param_2 + 0x34) *
                             (longlong)(int)param_2[6]);
                    }
                    bVar16 = false;
                  }
LAB_1470eede8:
                  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar10 * 0x120));
                  if (pcVar1 != (code *)0x0) {
                    if (0x18 < local_58) {
                      plVar13 = (longlong *)CONCAT44(local_70._4_4_,(int)local_70);
                    }
                    (*pcVar1)(plVar13);
                  }
                  if (0x18 < local_58) {
                    FUN_1400020a8(CONCAT44(local_70._4_4_,(int)local_70));
                  }
                  uVar12 = 1;
                  if (!bVar16) break;
                }
              }
            }
            else {
              uVar10 = (uint)bVar9 * 0x120;
              if ((*(code **)(&DAT_14c9a8560 + uVar10) != (code *)0x0) &&
                 (cVar2 = (**(code **)(&DAT_14c9a8560 + uVar10))(uVar14 & 0xffffffff), cVar2 != '\0'
                 )) goto LAB_1470eecff;
              if ((((code *)(&DAT_14c9a8568)[uVar14 * 0x24] != (code *)0x0) &&
                  (cVar2 = (*(code *)(&DAT_14c9a8568)[uVar14 * 0x24])(bVar9), cVar2 != '\0')) ||
                 (((((&DAT_14c9a8514)[uVar10] & 0x20) != 0 &&
                   (((&DAT_14c9a8514)[uVar14 * 0x120] & 0x20) == 0)) &&
                  ((*(code **)(&DAT_14c9a8588 + uVar10) == (code *)0x0 ||
                   (cVar2 = (**(code **)(&DAT_14c9a8588 + uVar10))(uVar14 & 0xffffffff),
                   cVar2 != '\0')))))) goto LAB_1470eecff;
            }
LAB_1470eecd6:
            uVar14 = uVar14 + 1;
            uVar12 = 0;
          } while (uVar14 != 0x24);
          goto LAB_1470ee8e2;
        }
LAB_1470eeef6:
        uVar12 = 0;
        goto LAB_1470ee8e2;
      }
      if ((char)param_1[4] == '\x01') {
        pbVar4 = (byte *)((longlong)param_3 + (ulonglong)*(byte *)((longlong)param_2 + 0x71));
        bVar9 = *(byte *)((longlong)param_3 + (ulonglong)*(byte *)((longlong)param_2 + 0x71));
        bVar8 = *(byte *)((longlong)param_2 + 0x73);
        if ((int)*param_1 != 0) goto LAB_1470ee977;
LAB_1470ee8d3:
        bVar11 = 0;
      }
      else {
        puVar15 = &local_70;
        FUN_1400b56fe(puVar15,param_1);
        bVar16 = (int)local_70 == 0;
        pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_50 * 0x120));
        if (pcVar1 != (code *)0x0) {
          if (0x18 < local_58) {
            puVar15 = (undefined8 *)CONCAT44(local_70._4_4_,(int)local_70);
          }
          (*pcVar1)(puVar15);
        }
        if (0x18 < local_58) {
          FUN_1400020a8(CONCAT44(local_70._4_4_,(int)local_70));
        }
        pbVar4 = (byte *)((longlong)param_3 + (ulonglong)*(byte *)((longlong)param_2 + 0x71));
        bVar9 = *(byte *)((longlong)param_3 + (ulonglong)*(byte *)((longlong)param_2 + 0x71));
        bVar8 = *(byte *)((longlong)param_2 + 0x73);
        if ((byte)local_50 == 0 || bVar16) goto LAB_1470ee8d3;
LAB_1470ee977:
        bVar11 = *(byte *)((longlong)param_2 + 0x72);
      }
      *pbVar4 = ~bVar8 & bVar9 | bVar11;
    }
  }
LAB_1470ee8df:
  uVar12 = 1;
LAB_1470ee8e2:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 1470ef026 FUN_1470ef026 body=59 status=ok
// SIG undefined FUN_1470ef026(void)

void FUN_1470ef026(float *param_1,float param_2,char param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_2;
  if (param_2 <= *param_1 + param_1[1]) {
    fVar2 = *param_1 + param_1[1];
  }
  fVar1 = (fVar2 - param_2) * 0.5;
  param_1[1] = fVar1;
  if (param_3 == '\0') {
    fVar2 = fVar2 - fVar1;
  }
  else {
    fVar2 = fVar1 + param_2;
  }
  *param_1 = fVar2;
  return;
}



// FUNCTION 1470ef062 FUN_1470ef062 body=56 status=ok
// SIG undefined FUN_1470ef062(void)

void FUN_1470ef062(float *param_1,float param_2,char param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_1 - param_1[1];
  if (param_2 <= *param_1 - param_1[1]) {
    fVar1 = param_2;
  }
  fVar2 = (param_2 - fVar1) * 0.5;
  param_1[1] = fVar2;
  if (param_3 == '\0') {
    param_2 = param_2 - fVar2;
  }
  else {
    param_2 = fVar1 + fVar2;
  }
  *param_1 = param_2;
  return;
}



// FUNCTION 1470ef09a FUN_1470ef09a body=22 status=ok
// SIG undefined FUN_1470ef09a(void)

undefined8 FUN_1470ef09a(undefined8 param_1,undefined8 param_2)

{
  FUN_140ac5a8c();
  return param_2;
}



// FUNCTION 1470ef0b0 FUN_1470ef0b0 body=41 status=ok
// SIG undefined FUN_1470ef0b0(void)

undefined8 FUN_1470ef0b0(float *param_1,undefined8 param_2)

{
  FUN_140002266(param_2,&DAT_149e14292,(double)*param_1);
  return param_2;
}



// FUNCTION 1470ef0da FUN_1470ef0da body=128 status=ok
// SIG undefined FUN_1470ef0da(void)

undefined8 FUN_1470ef0da(float *param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  if (ABS(fVar2) <= 1e-08) {
    FUN_140002266(param_2,&DAT_149e14292,(double)fVar1);
  }
  else {
    FUN_140002266(param_2,L"[%g, %g]",(double)(fVar1 - fVar2),(double)(fVar2 + fVar1));
  }
  return param_2;
}



// FUNCTION 1470ef15a FUN_1470ef15a body=474 status=ok
// SIG undefined FUN_1470ef15a(void)

undefined8 FUN_1470ef15a(float *param_1,longlong param_2,longlong *param_3)

{
  undefined4 *puVar1;
  double *pdVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auStack_58 [32];
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_38,4);
  if (uVar3 == ((ulonglong)local_38 & 0xffffffff)) {
    local_38 = (double)CONCAT44(local_38._4_4_,*param_1);
    puVar4 = (ulonglong *)param_3[1];
    puVar1 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar1) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_38,4);
      }
      else {
        FUN_14572512c(param_3,&local_38);
      }
    }
    else {
      local_38 = (double)CONCAT44(local_38._4_4_,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar1;
    }
    *param_1 = local_38._0_4_;
  }
  else {
    uVar3 = *(ulonglong *)(param_2 + 0xc);
    FUN_1401a700c(&local_38,2);
    if (uVar3 == ((ulonglong)local_38 & 0xffffffff)) {
      local_38 = (double)CONCAT44(local_38._4_4_,(int)*param_1);
      puVar4 = (ulonglong *)param_3[1];
      puVar1 = (undefined4 *)*puVar4 + 1;
      if ((undefined4 *)puVar4[1] < puVar1) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_38,4);
        }
        else {
          FUN_14572512c(param_3,&local_38);
        }
      }
      else {
        local_38 = (double)CONCAT44(local_38._4_4_,*(undefined4 *)*puVar4);
        *puVar4 = (ulonglong)puVar1;
      }
      fVar6 = (float)(int)local_38._0_4_;
    }
    else {
      uVar3 = *(ulonglong *)(param_2 + 0xc);
      FUN_1401a700c(&local_38,8);
      if (uVar3 != ((ulonglong)local_38 & 0xffffffff)) {
        uVar5 = 0;
        goto LAB_1470ef256;
      }
      local_38 = (double)*param_1;
      puVar4 = (ulonglong *)param_3[1];
      pdVar2 = (double *)*puVar4 + 1;
      if ((double *)puVar4[1] < pdVar2) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_38,8);
        }
        else {
          FUN_146821949(param_3,&local_38);
        }
      }
      else {
        local_38 = *(double *)*puVar4;
        *puVar4 = (ulonglong)pdVar2;
      }
      fVar6 = (float)local_38;
    }
    *param_1 = fVar6;
  }
  param_1[1] = 0.0;
  uVar5 = 1;
LAB_1470ef256:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ef336 FUN_1470ef336 body=207 status=ok
// SIG undefined FUN_1470ef336(void)

undefined8 * FUN_1470ef336(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  int iVar4;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_1[1];
  *param_2 = *(undefined8 *)(lVar1 + -0x28 + lVar3 * 0x28);
  param_2[1] = *(undefined8 *)(lVar1 + -0x20 + lVar3 * 0x28);
  *(undefined8 *)(lVar1 + -0x20 + lVar3 * 0x28) = 0;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar1 + -0x18 + lVar3 * 0x28);
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(lVar1 + -0x14 + lVar3 * 0x28);
  *(undefined8 *)(lVar1 + -0x18 + lVar3 * 0x28) = 0;
  param_2[3] = *(undefined8 *)(lVar1 + -0x10 + lVar3 * 0x28);
  *(undefined8 *)(lVar1 + -0x10 + lVar3 * 0x28) = 0;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar1 + -8 + lVar3 * 0x28);
  *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)(lVar1 + -4 + lVar3 * 0x28);
  *(undefined8 *)(lVar1 + -8 + lVar3 * 0x28) = 0;
  iVar4 = (int)param_1[1];
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)iVar4 * 0x28 + -0x28);
  FUN_1470d1ce8(_Dst);
  iVar2 = (int)param_1[1] - iVar4;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)iVar4 * 0x28),(longlong)iVar2 * 0x28);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  FUN_1470f4b50(param_1);
  return param_2;
}



// FUNCTION 1470ef40a FUN_1470ef40a body=29 status=ok
// SIG undefined FUN_1470ef40a(void)

undefined8 FUN_1470ef40a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470ef428 FUN_1470ef428 body=69 status=ok
// SIG undefined FUN_1470ef428(void)

undefined8 * FUN_1470ef428(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Gearbox\\GbxEngine\\Public\\Value/GbxBinding.h",0xa6,
                L"Pure virtual not implemented (%s)",L"FGbxBinding::GetParam");
  *param_2 = 0;
  *(undefined2 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  return param_2;
}



// FUNCTION 1470ef46e FUN_1470ef46e body=29 status=ok
// SIG undefined FUN_1470ef46e(void)

undefined8 FUN_1470ef46e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


