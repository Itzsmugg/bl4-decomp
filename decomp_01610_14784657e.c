// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14784657e FUN_14784657e body=269 status=ok
// SIG undefined FUN_14784657e(void)

longlong FUN_14784657e(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar2 = 0;
  if ((longlong)*(int *)(param_1 + 0x1c8) != 0) {
    lVar4 = 0;
    do {
      uVar1 = ((int)uVar2 + 1) - (uint)(*(longlong *)(*(longlong *)(param_1 + 0x1c0) + lVar4) == 0);
      uVar2 = (ulonglong)uVar1;
      lVar4 = lVar4 + 0x90;
    } while ((longlong)*(int *)(param_1 + 0x1c8) * 0x90 != lVar4);
    uVar2 = (ulonglong)uVar1;
  }
  lVar3 = (longlong)*(int *)(param_1 + 0x1bc) * 0x10 + 0x290;
  lVar4 = (longlong)*(int *)(param_1 + 0x218) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x218) < 2) {
    lVar4 = 0;
  }
  lVar5 = (longlong)*(int *)(param_1 + 0x268) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x268) < 2) {
    lVar5 = 0;
  }
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x1bc) < 0x11) {
    lVar3 = 0x290;
  }
  return lVar3 + ((longlong)*(int *)(param_1 + 0x1dc) + (longlong)*(int *)(param_1 + 0xac)) * 0x10 +
         uVar2 * *(longlong *)(param_1 + 0x288) + (longlong)*(int *)(param_1 + 0x1cc) * 0x90 +
         (ulonglong)(*(int *)(param_1 + 0x1fc) + 0x1fU >> 5) * 4 + lVar4 +
         (longlong)*(int *)(param_1 + 0x22c) * 0x18 +
         (ulonglong)(*(int *)(param_1 + 0x24c) + 0x1fU >> 5) * 4 + lVar5;
}



// FUNCTION 14784668c FUN_14784668c body=100 status=ok
// SIG undefined FUN_14784668c(void)

void FUN_14784668c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_147850bea(param_1,iVar2);
    }
    memmove((void *)((longlong)iVar2 * 8 + *param_1),(void *)*param_2,(longlong)(int)uVar1 << 3);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 1478466f0 FUN_1478466f0 body=144 status=ok
// SIG undefined FUN_1478466f0(void)

longlong FUN_1478466f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar6 = 0;
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (plVar3 == (longlong *)0x0) {
        lVar4 = 0;
      }
      else {
        lVar4 = (**(code **)(*plVar3 + 0x18))();
      }
      lVar5 = lVar5 + lVar4;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (plVar3 == (longlong *)0x0) {
        lVar4 = 0;
      }
      else {
        lVar4 = (**(code **)(*plVar3 + 0x18))();
      }
      lVar5 = lVar5 + lVar4;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return lVar5 + (longlong)*(int *)(param_1 + 0x34) * 8;
}



// FUNCTION 147846780 FUN_147846780 body=517 status=ok
// SIG undefined FUN_147846780(void)

void FUN_147846780(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
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
  plVar1 = (longlong *)
           (*(code *)(&PTR_LAB_14a5b3c20)[*(byte *)(param_1 + 0x60)])(&local_90,param_1 + 0x20);
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1);
  lVar7 = 0;
  lVar3 = (longlong)*(int *)(param_1 + 0xf0) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0xf0) < 2) {
    lVar3 = lVar7;
  }
  lVar5 = (longlong)*(int *)(param_1 + 0x140) * 4;
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x140) < 2) {
    lVar5 = lVar7;
  }
  lVar5 = lVar2 + (ulonglong)(*(int *)(param_1 + 0xd4) + 0x1fU >> 5) * 4 +
          ((longlong)*(int *)(param_1 + 0x104) + (longlong)*(int *)(param_1 + 0xb4)) * 0x20 + lVar3
          + (ulonglong)(*(int *)(param_1 + 0x124) + 0x1fU >> 5) * 4 + lVar5;
  do {
    if (*(longlong *)(param_1 + 0x80 + lVar7) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_1478466f0();
    }
    lVar5 = lVar5 + lVar3;
    lVar7 = lVar7 + 0x10;
  } while (lVar7 != 0x20);
  plVar1 = (longlong *)(param_1 + 0xa8);
  FUN_14484255c(param_2,lVar5);
  lVar3 = param_1 + 0xb8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar3;
  if (*(int *)(param_1 + 0xd0) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0xd0);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar6) || (uStack_60 != lVar3)) {
    do {
      lVar2 = (longlong)*(int *)(*local_90 + 0x10 + (longlong)iStack_74 * 0x20);
      if (lVar2 != 0) {
        lVar7 = *(longlong *)(*local_90 + 8 + (longlong)iStack_74 * 0x20);
        lVar5 = 0;
        do {
          uVar4 = FUN_14784657e(*(undefined8 *)(lVar7 + lVar5));
          FUN_14484255c(param_2,uVar4);
          lVar5 = lVar5 + 0x10;
        } while (lVar2 * 0x10 != lVar5);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar3 || iStack_74 != iVar6));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147846986 FUN_147846986 body=361 status=ok
// SIG undefined FUN_147846986(void)

void FUN_147846986(longlong param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  DWORD *pDVar3;
  int iVar4;
  DWORD DVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  
  if (param_2 == '\x01') {
    lVar9 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x80 + lVar9);
      if (lVar7 == 0) {
        lVar7 = FUN_14001cc68(0x58,0x10);
        FUN_14636a6d0(lVar7);
        plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar8[1] = (longlong)&DAT_100000001;
        *plVar8 = (longlong)&PTR_FUN_14a5b5a70;
        plVar8[2] = lVar7;
        *(longlong *)(param_1 + 0x80 + lVar9) = lVar7;
        plVar2 = *(longlong **)(param_1 + 0x88 + lVar9);
        if (plVar8 == plVar2) {
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                lVar7 = *plVar8;
                goto LAB_147846a51;
              }
            }
          }
        }
        else {
          *(longlong **)(param_1 + 0x88 + lVar9) = plVar8;
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar2 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*plVar2)(plVar2);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                lVar7 = *plVar2;
                plVar8 = plVar2;
LAB_147846a51:
                (**(code **)(lVar7 + 0x10))(plVar8);
              }
            }
          }
        }
      }
      else {
        DVar5 = GetCurrentThreadId();
        *(DWORD *)(lVar7 + 0x50) = DVar5;
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x20);
    plVar2 = *(longlong **)(param_1 + 0x70);
    if (plVar2 != (longlong *)0x0) {
      iVar6 = (int)plVar2[1];
      do {
        if (iVar6 == 0) {
          return;
        }
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar2 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      pDVar3 = *(DWORD **)(param_1 + 0x68);
      if (pDVar3 != (DWORD *)0x0) {
        DVar5 = GetCurrentThreadId();
        *pDVar3 = DVar5;
      }
      LOCK();
      plVar8 = plVar2 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147846ada. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x10))(plVar2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 147846af0 FUN_147846af0 body=93 status=ok
// SIG undefined FUN_147846af0(void)

void FUN_147846af0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147846b4e FUN_147846b4e body=119 status=ok
// SIG undefined FUN_147846b4e(void)

longlong FUN_147846b4e(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_144a69486();
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_144a69486(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_144a69486(param_1 + 0x40,param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_144a69486(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_144a69486(param_1 + 0x80,param_2 + 0x80);
  return param_1;
}



// FUNCTION 147846bc6 FUN_147846bc6 body=143 status=ok
// SIG undefined FUN_147846bc6(void)

longlong FUN_147846bc6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_144a69486();
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_144a69486(param_1 + 0x20,param_3);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_144a69486(param_1 + 0x40,param_4);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_144a69486(param_1 + 0x60,param_5);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_144a69486(param_1 + 0x80,param_6);
  return param_1;
}



// FUNCTION 147846c56 FUN_147846c56 body=74 status=ok
// SIG undefined FUN_147846c56(void)

void FUN_147846c56(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[3];
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147846ca0 FUN_147846ca0 body=145 status=ok
// SIG undefined FUN_147846ca0(void)

undefined8 FUN_147846ca0(uint *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar1 = param_1[6];
  puVar5 = *(uint **)(param_1 + 4);
  if (*(uint **)(param_1 + 4) == (uint *)0x0) {
    puVar5 = param_1;
  }
  uVar6 = 0xffffffff >> (-(char)((int)uVar1 % 0x20) & 0x1fU);
  if ((int)uVar1 % 0x20 < 1) {
    uVar6 = 0xffffffff;
  }
  if ((int)uVar1 < 1) {
    uVar3 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  else {
    uVar7 = 0xffffffff;
    if (uVar1 < 0x21) {
      uVar7 = uVar6;
    }
    if ((*puVar5 & uVar7) == 0) {
      uVar4 = (ulonglong)uVar1 + 0x1f >> 5;
      uVar2 = 1;
      do {
        uVar8 = uVar2;
        if (uVar4 == uVar8) break;
        uVar7 = 0xffffffff;
        if (uVar8 - ((int)uVar4 - 2) == 1) {
          uVar7 = uVar6;
        }
        uVar2 = uVar8 + 1;
      } while ((puVar5[uVar8] & uVar7) == 0);
      uVar3 = CONCAT71((uint7)((ulonglong)uVar1 + 0x1f >> 0xd),uVar4 <= uVar8);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 147846d32 FUN_147846d32 body=145 status=ok
// SIG undefined FUN_147846d32(void)

undefined8 FUN_147846d32(uint *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar1 = param_1[6];
  puVar5 = *(uint **)(param_1 + 4);
  if (*(uint **)(param_1 + 4) == (uint *)0x0) {
    puVar5 = param_1;
  }
  uVar6 = 0xffffffff >> (-(char)((int)uVar1 % 0x20) & 0x1fU);
  if ((int)uVar1 % 0x20 < 1) {
    uVar6 = 0xffffffff;
  }
  if ((int)uVar1 < 1) {
    uVar3 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  else {
    uVar7 = 0xffffffff;
    if (uVar1 < 0x21) {
      uVar7 = uVar6;
    }
    if ((*puVar5 & uVar7) == 0) {
      uVar4 = (ulonglong)uVar1 + 0x1f >> 5;
      uVar2 = 1;
      do {
        uVar8 = uVar2;
        if (uVar4 == uVar8) break;
        uVar7 = 0xffffffff;
        if (uVar8 - ((int)uVar4 - 2) == 1) {
          uVar7 = uVar6;
        }
        uVar2 = uVar8 + 1;
      } while ((puVar5[uVar8] & uVar7) == 0);
      uVar3 = CONCAT71((uint7)((ulonglong)uVar1 + 0x1f >> 0xd),uVar4 <= uVar8);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 147846dc4 FUN_147846dc4 body=109 status=ok
// SIG undefined FUN_147846dc4(void)

undefined8 FUN_147846dc4(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14784d1f0();
  if (cVar1 != '\0') {
    cVar1 = FUN_14784d1f0(param_1 + 0x20,param_2 + 0x20);
    if (cVar1 != '\0') {
      cVar1 = FUN_14784d1f0(param_1 + 0x40,param_2 + 0x40);
      if (cVar1 != '\0') {
        cVar1 = FUN_14784d1f0(param_1 + 0x60,param_2 + 0x60);
        if (cVar1 != '\0') {
          uVar2 = FUN_14784d1f0(param_1 + 0x80,param_2 + 0x80);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 147846e32 FUN_147846e32 body=145 status=ok
// SIG undefined FUN_147846e32(void)

undefined8 FUN_147846e32(uint *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar1 = param_1[6];
  puVar5 = *(uint **)(param_1 + 4);
  if (*(uint **)(param_1 + 4) == (uint *)0x0) {
    puVar5 = param_1;
  }
  uVar6 = 0xffffffff >> (-(char)((int)uVar1 % 0x20) & 0x1fU);
  if ((int)uVar1 % 0x20 < 1) {
    uVar6 = 0xffffffff;
  }
  if ((int)uVar1 < 1) {
    uVar3 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  else {
    uVar7 = 0xffffffff;
    if (uVar1 < 0x21) {
      uVar7 = uVar6;
    }
    if ((*puVar5 & uVar7) == 0) {
      uVar4 = (ulonglong)uVar1 + 0x1f >> 5;
      uVar2 = 1;
      do {
        uVar8 = uVar2;
        if (uVar4 == uVar8) break;
        uVar7 = 0xffffffff;
        if (uVar8 - ((int)uVar4 - 2) == 1) {
          uVar7 = uVar6;
        }
        uVar2 = uVar8 + 1;
      } while ((puVar5[uVar8] & uVar7) == 0);
      uVar3 = CONCAT71((uint7)((ulonglong)uVar1 + 0x1f >> 0xd),uVar4 <= uVar8);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 147846ec4 FUN_147846ec4 body=179 status=ok
// SIG undefined FUN_147846ec4(void)

void FUN_147846ec4(longlong param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_4 < *(int *)(param_1 + 0x150)) {
    lVar7 = (longlong)param_4;
    lVar6 = lVar7 << 4;
    do {
      cVar5 = FUN_147854dee(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x148) + lVar6));
      if (cVar5 != '\0') {
        uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x148) + lVar6);
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x148) + 8 + lVar6);
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_147851e8c(param_3,iVar1);
        }
        lVar4 = *param_3;
        *(undefined8 *)(lVar4 + (longlong)iVar1 * 0x10) = uVar2;
        *(longlong *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = lVar3;
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < *(int *)(param_1 + 0x150));
  }
  return;
}



// FUNCTION 147846f78 FUN_147846f78 body=221 status=ok
// SIG undefined FUN_147846f78(void)

void FUN_147846f78(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x418);
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
  FUN_147846af0(param_1 + 0x370);
  FUN_1401f9f5c(param_1 + 0x358);
  FUN_147846c56(param_1 + 0x338);
  plVar3 = *(longlong **)(param_1 + 800);
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
  FUN_14784d404(param_1 + 0x2c0);
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147847056 FUN_147847056 body=106 status=ok
// SIG undefined FUN_147847056(void)

void FUN_147847056(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_144a61b4f();
  if ((cVar2 != '\0') && (*(int *)(param_1 + 0xa0) < 1)) {
    lVar1 = *param_2;
    if ((lVar1 != 0) &&
       (((0 < *(int *)(lVar1 + 0x48) && (*(longlong *)(param_1 + 0x80) != lVar1)) &&
        (*(longlong *)(param_1 + 0x90) != lVar1)))) {
      FUN_14339f7c6(*(undefined8 *)(param_1 + 0x80 + (ulonglong)*(byte *)(param_1 + 0x79) * 0x10));
    }
    FUN_1478470c0(param_1);
    return;
  }
  return;
}



// FUNCTION 1478470c0 FUN_1478470c0 body=133 status=ok
// SIG undefined FUN_1478470c0(void)

ulonglong FUN_1478470c0(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  
  uVar2 = FUN_144a61b4f();
  if (((((char)uVar2 != '\0') && (*(int *)(param_1 + 0xa0) < 1)) &&
      ((*(byte *)(param_1 + 0x78) & 1) == 0)) && (*(int *)(param_1 + 0xa0) < 1)) {
    LOCK();
    *(undefined1 *)(param_1 + 0x78) = 1;
    UNLOCK();
    bVar1 = *(byte *)(param_1 + 0x79);
    lVar3 = *(longlong *)(param_1 + 0x80 + (ulonglong)bVar1 * 0x10);
    uVar4 = 0;
    do {
      *(byte *)(param_1 + 0x79) = ~bVar1 & 1;
      FUN_14339f3c4(lVar3,param_1);
      bVar1 = *(byte *)(param_1 + 0x79);
      lVar3 = *(longlong *)(param_1 + 0x80 + (ulonglong)bVar1 * 0x10);
      if (*(int *)(lVar3 + 0x48) < 1) break;
      bVar5 = uVar4 < 4;
      uVar4 = uVar4 + 1;
    } while (bVar5);
    LOCK();
    bVar1 = *(byte *)(param_1 + 0x78);
    *(byte *)(param_1 + 0x78) = 0;
    uVar2 = (ulonglong)bVar1;
    UNLOCK();
  }
  return uVar2;
}



// FUNCTION 147847146 FUN_147847146 body=130 status=ok
// SIG undefined FUN_147847146(void)

int * FUN_147847146(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  iVar3 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar3 < 1) {
    iVar4 = FUN_1478474a6(param_1 + 0x10,1);
  }
  else {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x28) + -4 + (longlong)iVar3 * 4);
    *(int *)(param_1 + 0x30) = iVar3 + -1;
  }
  *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)(iVar4 / 0x2aa) * 8) + 0x10 +
          (ulonglong)(uint)(iVar4 % 0x2aa) * 0x18) = iVar2;
  param_2[1] = iVar2;
  *param_2 = iVar4;
  return param_2;
}



// FUNCTION 1478472a4 FUN_1478472a4 body=132 status=ok
// SIG undefined FUN_1478472a4(void)

void FUN_1478472a4(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)
           ((ulonglong)(uint)(param_2 % 0x2aa) * 0x18 +
           *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)(param_2 / 0x2aa) * 8));
  uVar3 = *param_3;
  lVar4 = param_3[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)puVar6[1];
  *puVar6 = uVar3;
  puVar6[1] = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x00014784731d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147847328 FUN_147847328 body=132 status=ok
// SIG undefined FUN_147847328(void)

void FUN_147847328(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)
           ((ulonglong)(uint)(param_2 % 0x2aa) * 0x18 +
           *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)(param_2 / 0x2aa) * 8));
  uVar3 = *param_3;
  lVar4 = param_3[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)puVar6[1];
  *puVar6 = uVar3;
  puVar6[1] = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x0001478473a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1478474a6 FUN_1478474a6 body=182 status=ok
// SIG undefined FUN_1478474a6(void)

int FUN_1478474a6(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = (int)param_1[1];
  iVar1 = (int)param_1[2];
  iVar3 = (iVar1 + param_2 + 0x2a9) / 0x2aa;
  *(int *)(param_1 + 2) = iVar1 + param_2;
  if (iVar6 < iVar3) {
    do {
      lVar4 = FUN_14001cc68(0x3ff0,0x10);
      lVar5 = 0;
      do {
        *(undefined8 *)(lVar4 + lVar5) = 0;
        ((undefined8 *)(lVar4 + lVar5))[1] = 0;
        *(undefined4 *)(lVar4 + 0x10 + lVar5) = 0;
        lVar5 = lVar5 + 0x18;
      } while (lVar5 != 0x3ff0);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1456bd870(param_1,iVar2);
      }
      *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar4;
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar3);
  }
  return iVar1;
}



// FUNCTION 14784755c FUN_14784755c body=352 status=ok
// SIG undefined FUN_14784755c(void)

uint FUN_14784755c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  
  uVar3 = *(uint *)(param_2 + 1);
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  uVar4 = *(uint *)(param_1 + 0x30);
  uVar6 = uVar4;
  if ((int)uVar3 < (int)uVar4) {
    uVar6 = uVar3;
  }
  if ((int)uVar6 < 1) {
    uVar7 = 0;
    uVar6 = 0;
  }
  else {
    iVar5 = uVar4 - uVar6;
    uVar7 = 0;
    lVar8 = (longlong)iVar5;
    do {
      iVar9 = *(int *)(*(longlong *)(param_1 + 0x28) + lVar8 * 4);
      *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)(iVar9 / 0x2aa) * 8) + 0x10 +
              (ulonglong)(uint)(iVar9 % 0x2aa) * 0x18) = iVar2;
      *(ulonglong *)(*param_2 + uVar7 * 8) = CONCAT44(iVar2,iVar9);
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x30));
    uVar7 = uVar7 & 0xffffffff;
    iVar9 = *(int *)(param_1 + 0x30) - uVar4;
    if (iVar9 != 0) {
      _Dst = (void *)((longlong)iVar5 * 4 + *(longlong *)(param_1 + 0x28));
      memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar6 * 4),(longlong)iVar9 << 2);
      iVar5 = *(int *)(param_1 + 0x30) - uVar6;
    }
    *(int *)(param_1 + 0x30) = iVar5;
  }
  if ((int)uVar6 < (int)uVar3) {
    iVar5 = *(int *)(param_1 + 0x20);
    FUN_1478474a6(param_1 + 0x10);
    uVar6 = uVar3;
    if (iVar5 < *(int *)(param_1 + 0x20)) {
      do {
        *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)(iVar5 / 0x2aa) * 8) + 0x10
                + (ulonglong)(uint)(iVar5 % 0x2aa) * 0x18) = iVar2;
        *(ulonglong *)(*param_2 + uVar7 * 8) = CONCAT44(iVar2,iVar5);
        uVar7 = uVar7 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x20));
    }
  }
  return uVar6;
}



// FUNCTION 1478476bc FUN_1478476bc body=286 status=ok
// SIG undefined FUN_1478476bc(void)

int FUN_1478476bc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  
  iVar9 = (int)param_2[1];
  iVar11 = *(int *)(param_1 + 0x30) + iVar9;
  if (-1 < iVar11) {
    plVar1 = (longlong *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x34) < iVar11) {
      FUN_14481578e(plVar1);
      iVar9 = (int)param_2[1];
    }
    if (iVar9 == 0) {
      iVar11 = 0;
    }
    else {
      lVar6 = *param_2;
      lVar12 = 0;
      iVar11 = 0;
      do {
        uVar10 = (ulonglong)(uint)(*(int *)(lVar6 + lVar12) % 0x2aa);
        lVar7 = *(longlong *)
                 (*(longlong *)(param_1 + 0x10) + (longlong)(*(int *)(lVar6 + lVar12) / 0x2aa) * 8);
        if (*(int *)(lVar7 + 0x10 + uVar10 * 0x18) == *(int *)(lVar6 + 4 + lVar12)) {
          puVar4 = (undefined8 *)(lVar7 + uVar10 * 0x18);
          *puVar4 = 0;
          plVar8 = (longlong *)puVar4[1];
          if (plVar8 != (longlong *)0x0) {
            puVar4[1] = 0;
            LOCK();
            plVar2 = plVar8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar3 = (int *)((longlong)plVar8 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
          *(undefined4 *)(puVar4 + 2) = 0;
          iVar5 = *(int *)(param_1 + 0x30);
          *(uint *)(param_1 + 0x30) = iVar5 + 1U;
          if (*(uint *)(param_1 + 0x34) < iVar5 + 1U) {
            FUN_1446f48e2(plVar1,iVar5);
          }
          *(undefined4 *)(*plVar1 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar6 + lVar12);
          iVar11 = iVar11 + 1;
        }
        lVar12 = lVar12 + 8;
      } while ((longlong)iVar9 * 8 != lVar12);
    }
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar11);
}



// FUNCTION 1478477dc FUN_1478477dc body=74 status=ok
// SIG undefined FUN_1478477dc(void)

void FUN_1478477dc(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = &local_10;
  local_18 = 1;
  local_10 = param_2;
  FUN_1478476bc();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147847828 FUN_147847828 body=273 status=ok
// SIG undefined FUN_147847828(void)

undefined4 FUN_147847828(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  
  iVar7 = (int)param_2[1];
  iVar9 = *(int *)(param_1 + 0x30) + iVar7;
  if (-1 < iVar9) {
    plVar1 = (longlong *)(param_1 + 0x28);
    if (*(int *)(param_1 + 0x34) < iVar9) {
      FUN_14481578e(plVar1);
      iVar7 = (int)param_2[1];
    }
    if (iVar7 == 0) {
      uVar8 = 0;
    }
    else {
      lVar5 = *param_2;
      lVar10 = 0;
      do {
        iVar9 = *(int *)(lVar5 + lVar10);
        puVar4 = (undefined8 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)(iVar9 / 0x2aa) * 8) +
                 (ulonglong)(uint)(iVar9 % 0x2aa) * 0x18);
        *puVar4 = 0;
        plVar6 = (longlong *)puVar4[1];
        if (plVar6 != (longlong *)0x0) {
          puVar4[1] = 0;
          LOCK();
          plVar2 = plVar6 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar3 = (int *)((longlong)plVar6 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        *(undefined4 *)(puVar4 + 2) = 0;
        iVar9 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar9 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar9 + 1U) {
          FUN_1446f48e2(plVar1,iVar9);
        }
        *(undefined4 *)(*plVar1 + (longlong)iVar9 * 4) = *(undefined4 *)(lVar5 + lVar10);
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar7 * 8 != lVar10);
      uVar8 = (undefined4)param_2[1];
    }
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar9);
}



// FUNCTION 14784793a FUN_14784793a body=74 status=ok
// SIG undefined FUN_14784793a(void)

void FUN_14784793a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = &local_10;
  local_18 = 1;
  local_10 = param_2;
  FUN_147847828();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147847a46 FUN_147847a46 body=123 status=ok
// SIG undefined FUN_147847a46(void)

void FUN_147847a46(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  undefined8 *puVar9;
  uint uVar10;
  int iVar8;
  
  uVar3 = *(uint *)(param_1 + 0x14);
  iVar8 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar8 == 0; iVar8 = iVar8 + -1) {
    }
  }
  bVar7 = (byte)iVar8;
  if (uVar3 == 0) {
    bVar7 = 0;
  }
  uVar10 = param_2 >> (bVar7 & 0x1f);
  puVar9 = (undefined8 *)
           ((ulonglong)(param_2 - uVar3 * uVar10) * 0x18 +
           *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar10 * 8));
  uVar4 = *param_3;
  lVar5 = param_3[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)puVar9[1];
  *puVar9 = uVar4;
  puVar9[1] = lVar5;
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
                    /* WARNING: Could not recover jumptable at 0x000147847ab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147847ac2 FUN_147847ac2 body=123 status=ok
// SIG undefined FUN_147847ac2(void)

void FUN_147847ac2(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  undefined8 *puVar9;
  uint uVar10;
  int iVar8;
  
  uVar3 = *(uint *)(param_1 + 0x14);
  iVar8 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar8 == 0; iVar8 = iVar8 + -1) {
    }
  }
  bVar7 = (byte)iVar8;
  if (uVar3 == 0) {
    bVar7 = 0;
  }
  uVar10 = param_2 >> (bVar7 & 0x1f);
  puVar9 = (undefined8 *)
           ((ulonglong)(param_2 - uVar3 * uVar10) * 0x18 +
           *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar10 * 8));
  uVar4 = *param_3;
  lVar5 = param_3[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)puVar9[1];
  *puVar9 = uVar4;
  puVar9[1] = lVar5;
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
                    /* WARNING: Could not recover jumptable at 0x000147847b32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147847c32 FUN_147847c32 body=273 status=ok
// SIG undefined FUN_147847c32(void)

bool FUN_147847c32(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined8 *_Dst;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  pcVar1 = (char *)(param_1 + 0x1c);
  LOCK();
  bVar7 = *(char *)(param_1 + 0x1c) == '\0';
  if (bVar7) {
    *(char *)(param_1 + 0x1c) = '\x01';
  }
  UNLOCK();
  if (!bVar7) {
    FUN_1447d2058(pcVar1);
  }
  uVar3 = *(uint *)(param_1 + 0x14);
  iVar4 = *(int *)(param_1 + 0x18);
  _Dst = (undefined8 *)FUN_14001cc68();
  if (_Dst != (undefined8 *)0x0) {
    memset(_Dst,0,(ulonglong)uVar3 * 0x18);
    *(undefined8 **)(*(longlong *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_1 + 0x18) * 8) =
         _Dst;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    if (iVar4 == 0) {
      *_Dst = 0;
      _Dst[1] = 0;
      _Dst[2] = 0;
      *(undefined4 *)(_Dst + 2) = 0x40000001;
      iVar5 = *(int *)(param_1 + 0x14);
      iVar6 = 1;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x14);
      iVar6 = iVar5 * iVar4;
    }
    iVar5 = (iVar4 + 1) * iVar5;
    iVar4 = iVar5 - iVar6;
    if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    if (*(int *)(param_1 + 0x34) < iVar4) {
      FUN_14481578e();
    }
    while (iVar6 < iVar5) {
      iVar4 = *(int *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x34) < iVar4 + 1U) {
        FUN_1446f48e2((longlong *)(param_1 + 0x28),iVar4);
      }
      iVar5 = iVar5 + -1;
      *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 4) = iVar5;
    }
  }
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\x01') {
    *pcVar1 = '\0';
  }
  UNLOCK();
  if (cVar2 != '\x01') {
    FUN_14008cdb0(pcVar1);
  }
  return _Dst != (undefined8 *)0x0;
}



// FUNCTION 147847d44 FUN_147847d44 body=183 status=ok
// SIG undefined FUN_147847d44(void)

uint * FUN_147847d44(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  bool bVar8;
  
  LOCK();
  bVar8 = *(char *)(param_1 + 0x38) == '\0';
  if (bVar8) {
    *(char *)(param_1 + 0x38) = '\x01';
  }
  UNLOCK();
  if (!bVar8) {
    FUN_1447d2058(param_1 + 0x38);
  }
  iVar5 = *(int *)(param_1 + 0x30);
  if (iVar5 == 0) {
    FUN_147847c32(param_1);
    iVar5 = *(int *)(param_1 + 0x30);
  }
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x28) + -4 + (longlong)iVar5 * 4);
  *(int *)(param_1 + 0x30) = iVar5 + -1;
  LOCK();
  bVar8 = *(char *)(param_1 + 0x38) == '\x01';
  if (bVar8) {
    *(char *)(param_1 + 0x38) = '\0';
  }
  UNLOCK();
  if (!bVar8) {
    FUN_14008cdb0(param_1 + 0x38);
  }
  uVar2 = *(uint *)(param_1 + 0x14);
  iVar5 = 0x1f;
  if (uVar2 != 0) {
    for (; uVar2 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  bVar4 = (byte)iVar5;
  if (uVar2 == 0) {
    bVar4 = 0;
  }
  uVar7 = uVar1 >> (bVar4 & 0x1f);
  uVar6 = (ulonglong)(uVar1 - uVar2 * uVar7);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar7 * 8);
  uVar2 = *(uint *)(lVar3 + 0x10 + uVar6 * 0x18);
  uVar7 = uVar2 + 1 & 0x3fffffff;
  *(uint *)(lVar3 + 0x10 + uVar6 * 0x18) = (uVar2 & 0x80000000) + uVar7 + 0x40000000;
  LOCK();
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
  UNLOCK();
  param_2[1] = uVar7;
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 147847dfc FUN_147847dfc body=322 status=ok
// SIG undefined FUN_147847dfc(void)

void FUN_147847dfc(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar6;
  
  iVar12 = (int)param_2[1];
  pcVar1 = (char *)(param_1 + 0x38);
  iVar15 = 0;
  iVar16 = 0;
  do {
    if (iVar12 < 1) break;
    LOCK();
    cVar8 = *pcVar1;
    if (cVar8 == '\0') {
      *pcVar1 = '\x01';
    }
    UNLOCK();
    if (cVar8 != '\0') {
      FUN_1447d2058(pcVar1);
    }
    iVar13 = *(int *)(param_1 + 0x30);
    if (iVar13 == 0) {
      cVar8 = FUN_147847c32();
      if (cVar8 != '\0') {
        iVar13 = *(int *)(param_1 + 0x30);
        goto LAB_147847e44;
      }
      bVar7 = false;
    }
    else {
LAB_147847e44:
      iVar9 = iVar13;
      if (iVar12 < iVar13) {
        iVar9 = iVar12;
      }
      if (0 < iVar13) {
        lVar11 = (longlong)iVar15;
        iVar13 = 1;
        if (1 < iVar9) {
          iVar13 = iVar9;
        }
        iVar14 = 0;
        do {
          uVar2 = *(uint *)(*(longlong *)(param_1 + 0x28) + -4 +
                           (longlong)*(int *)(param_1 + 0x30) * 4);
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
          uVar3 = *(uint *)(param_1 + 0x14);
          iVar6 = 0x1f;
          if (uVar3 != 0) {
            for (; uVar3 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          bVar5 = (byte)iVar6;
          if (uVar3 == 0) {
            bVar5 = 0;
          }
          uVar17 = uVar2 >> (bVar5 & 0x1f);
          uVar10 = (ulonglong)(uVar2 - uVar3 * uVar17);
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar17 * 8);
          uVar17 = *(uint *)(lVar4 + 0x10 + uVar10 * 0x18);
          uVar3 = uVar17 + 1;
          *(uint *)(lVar4 + 0x10 + uVar10 * 0x18) =
               (uVar17 & 0x80000000) + (uVar3 & 0x3fffffff) + 0x40000000;
          *(ulonglong *)(*param_2 + lVar11 * 8) = CONCAT44(uVar3,uVar2) & 0x3fffffffffffffff;
          lVar11 = lVar11 + 1;
          iVar14 = iVar14 + -1;
        } while (-iVar13 != iVar14);
        iVar15 = iVar15 - iVar14;
      }
      iVar16 = iVar16 + iVar9;
      iVar12 = iVar12 - iVar9;
      bVar7 = true;
    }
    LOCK();
    cVar8 = *pcVar1;
    if (cVar8 == '\x01') {
      *pcVar1 = '\0';
    }
    UNLOCK();
    if (cVar8 != '\x01') {
      FUN_14008cdb0(pcVar1);
    }
  } while (bVar7);
  LOCK();
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + (longlong)iVar16;
  UNLOCK();
  return;
}



// FUNCTION 147847f3e FUN_147847f3e body=334 status=ok
// SIG undefined FUN_147847f3e(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147847f3e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  longlong local_78;
  int *local_70;
  int *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_50 [2];
  ulonglong local_48;
  int iVar9;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar11 = 0;
  local_70 = local_50 + 1;
  local_50[1] = 0;
  local_68 = local_50;
  local_50[0] = 0;
  local_60 = (undefined4)*param_2;
  uStack_5c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_58 = (undefined4)param_2[1];
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar10 = param_2[1];
  local_78 = param_1;
  if (0 < (longlong)(int)lVar10) {
    lVar14 = 0;
    iVar11 = 0;
    do {
      uVar4 = *(uint *)(*param_2 + lVar14 * 8);
      uVar5 = *(uint *)(param_1 + 0x14);
      iVar9 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      bVar8 = (byte)iVar9;
      if (uVar5 == 0) {
        bVar8 = 0;
      }
      uVar13 = uVar4 >> (bVar8 & 0x1f);
      uVar12 = (ulonglong)(uVar4 - uVar5 * uVar13);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar13 * 8);
      if ((*(uint *)(lVar6 + 0x10 + uVar12 * 0x18) & 0x3fffffff) ==
          *(uint *)(*param_2 + 4 + lVar14 * 8)) {
        puVar3 = (undefined8 *)(lVar6 + uVar12 * 0x18);
        local_50[0] = local_50[0] + 1;
        *(uint *)(puVar3 + 2) =
             *(uint *)(puVar3 + 2) & 0x80000000 | *(uint *)(puVar3 + 2) + 1 & 0x3fffffff;
        *puVar3 = 0;
        plVar7 = (longlong *)puVar3[1];
        if (plVar7 != (longlong *)0x0) {
          puVar3[1] = 0;
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
        iVar11 = iVar11 + 1;
      }
      else {
        FUN_14339f8c6(&local_78);
      }
      lVar14 = lVar14 + 1;
    } while ((int)lVar10 != lVar14);
  }
  FUN_14339f8c6(&local_78);
  LOCK();
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) - (longlong)iVar11;
  UNLOCK();
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14784808e FUN_14784808e body=74 status=ok
// SIG undefined FUN_14784808e(void)

void FUN_14784808e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = &local_10;
  local_18 = 1;
  local_10 = param_2;
  FUN_147847f3e();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478480da FUN_1478480da body=359 status=ok
// SIG undefined FUN_1478480da(void)

undefined4 FUN_1478480da(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  
  lVar9 = param_2[1];
  if ((longlong)(int)lVar9 != 0) {
    lVar13 = *param_2;
    lVar15 = 0;
    do {
      uVar5 = *(uint *)(param_1 + 0x14);
      iVar10 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      bVar8 = (byte)iVar10;
      if (uVar5 == 0) {
        bVar8 = 0;
      }
      uVar14 = *(uint *)(lVar13 + lVar15) >> (bVar8 & 0x1f);
      uVar12 = (ulonglong)(*(uint *)(lVar13 + lVar15) - uVar5 * uVar14);
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (ulonglong)uVar14 * 8);
      uVar5 = *(uint *)(lVar6 + 0x10 + uVar12 * 0x18);
      *(uint *)(lVar6 + 0x10 + uVar12 * 0x18) = uVar5 & 0x80000000 | uVar5 + 1 & 0x3fffffff;
      *(undefined8 *)(lVar6 + uVar12 * 0x18) = 0;
      plVar7 = *(longlong **)(lVar6 + 8 + uVar12 * 0x18);
      if (plVar7 != (longlong *)0x0) {
        *(undefined8 *)(lVar6 + uVar12 * 0x18 + 8) = 0;
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
      lVar15 = lVar15 + 8;
    } while ((longlong)(int)lVar9 * 8 != lVar15);
  }
  pcVar3 = (char *)(param_1 + 0x38);
  LOCK();
  bVar16 = *(char *)(param_1 + 0x38) == '\0';
  if (bVar16) {
    *(char *)(param_1 + 0x38) = '\x01';
  }
  UNLOCK();
  if (!bVar16) {
    FUN_1447d2058();
  }
  iVar10 = (int)param_2[1];
  iVar11 = *(int *)(param_1 + 0x30) + iVar10;
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  if (*(int *)(param_1 + 0x34) < iVar11) {
    FUN_14481578e();
    iVar10 = (int)param_2[1];
  }
  if (iVar10 != 0) {
    lVar9 = *param_2;
    lVar13 = 0;
    do {
      iVar11 = *(int *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar11 + 1U;
      if (*(uint *)(param_1 + 0x34) < iVar11 + 1U) {
        FUN_1446f48e2((longlong *)(param_1 + 0x28),iVar11);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar11 * 4) =
           *(undefined4 *)(lVar9 + lVar13);
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar10 * 8 != lVar13);
  }
  LOCK();
  cVar4 = *pcVar3;
  if (cVar4 == '\x01') {
    *pcVar3 = '\0';
  }
  UNLOCK();
  if (cVar4 != '\x01') {
    FUN_14008cdb0(pcVar3);
  }
  LOCK();
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) - (longlong)(int)param_2[1];
  UNLOCK();
  return (int)param_2[1];
}



// FUNCTION 147848242 FUN_147848242 body=74 status=ok
// SIG undefined FUN_147848242(void)

void FUN_147848242(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = &local_10;
  local_18 = 1;
  local_10 = param_2;
  FUN_1478480da();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14784829a FUN_14784829a body=283 status=ok
// SIG undefined FUN_14784829a(void)

void FUN_14784829a(undefined8 *param_1)

{
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x8000000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0x8000000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0x8000000000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x8000000000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x8000000000;
  param_1[0x22] = 0;
  param_1[0x23] = 0x8000000000;
  param_1[0x26] = 0;
  param_1[0x27] = 0x8000000000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x8000000000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x8000000000;
  param_1[0x32] = 0;
  param_1[0x33] = 0x8000000000;
  param_1[0x36] = 0;
  param_1[0x37] = 0x8000000000;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x8000000000;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0x8000000000;
  param_1[0x42] = 0;
  param_1[0x43] = 0x8000000000;
  param_1[0x46] = 0;
  param_1[0x47] = 0x8000000000;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0x8000000000;
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) & 0xf0;
  *(undefined2 *)((longlong)param_1 + 0x262) = 0;
  *(undefined1 *)((longlong)param_1 + 0x264) = 0;
  return;
}



// FUNCTION 1478483b6 FUN_1478483b6 body=94 status=ok
// SIG undefined FUN_1478483b6(void)

void FUN_1478483b6(longlong *param_1,undefined8 *param_2)

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
    FUN_147851e8c(param_1,iVar2);
  }
  FUN_14784de24((longlong)iVar2 * 0x10 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 147848414 FUN_147848414 body=66 status=ok
// SIG undefined FUN_147848414(void)

void FUN_147848414(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1478520f0(param_1,iVar1);
  }
  FUN_1478520a0((longlong)iVar1 * 0x140 + *param_1,param_2);
  return;
}



// FUNCTION 147848456 FUN_147848456 body=85 status=ok
// SIG undefined FUN_147848456(void)

void FUN_147848456(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478484b4 FUN_1478484b4 body=35 status=ok
// SIG undefined FUN_1478484b4(void)

void FUN_1478484b4(longlong param_1,undefined8 param_2)

{
  switchD_143c3d4dc::caseD_38();
  FUN_147846780(*(undefined8 *)(param_1 + 0x38),param_2);
  return;
}



// FUNCTION 1478484d8 FUN_1478484d8 body=77 status=ok
// SIG undefined FUN_1478484d8(void)

void FUN_1478484d8(int *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 2);
  iVar2 = param_1[4];
  uVar3 = param_1[1];
  do {
    iVar2 = iVar2 + 1;
    param_1[4] = iVar2;
    uVar3 = uVar3 * 2;
    param_1[1] = uVar3;
    if (uVar3 == 0) {
      param_1[1] = 1;
      *param_1 = *param_1 + 1;
      uVar3 = 1;
    }
    if (*(int *)(lVar1 + 0x18) <= iVar2) {
      return;
    }
    lVar4 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar4 = lVar1;
    }
  } while ((bool)(char)param_1[6] != ((*(uint *)(lVar4 + (longlong)*param_1 * 4) & uVar3) != 0));
  return;
}



// FUNCTION 147848526 FUN_147848526 body=229 status=ok
// SIG undefined FUN_147848526(void)

longlong FUN_147848526(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0x8000000000;
  lVar3 = 200;
  do {
    *(undefined8 *)(param_1 + -0x28 + lVar3) = 0;
    *(undefined4 *)(param_1 + -0x20 + lVar3) = 0;
    puVar1 = (undefined8 *)(param_1 + -0x48 + lVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(param_1 + -0x1c + lVar3) = 0xffffffff00000080;
    *(undefined4 *)(param_1 + -0x14 + lVar3) = 0;
    *(undefined8 *)(param_1 + -8 + lVar3) = 0;
    *(undefined4 *)(param_1 + lVar3) = 0;
    lVar3 = lVar3 + 0x50;
  } while (lVar3 != 0x168);
  lVar3 = 0x168;
  do {
    *(undefined8 *)(param_1 + -0x28 + lVar3) = 0;
    *(undefined4 *)(param_1 + -0x20 + lVar3) = 0;
    puVar1 = (undefined8 *)(param_1 + -0x48 + lVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(param_1 + -0x1c + lVar3) = 0xffffffff00000080;
    *(undefined4 *)(param_1 + -0x14 + lVar3) = 0;
    *(undefined8 *)(param_1 + -8 + lVar3) = 0;
    *(undefined4 *)(param_1 + lVar3) = 0;
    lVar3 = lVar3 + 0x50;
  } while (lVar3 != 0x208);
  plVar2 = (longlong *)FUN_145b3ad28();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(lVar3 + 0x38);
  return param_1;
}



// FUNCTION 14784860c FUN_14784860c body=145 status=ok
// SIG undefined FUN_14784860c(void)

undefined8 FUN_14784860c(uint *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar1 = param_1[6];
  puVar5 = *(uint **)(param_1 + 4);
  if (*(uint **)(param_1 + 4) == (uint *)0x0) {
    puVar5 = param_1;
  }
  uVar6 = 0xffffffff >> (-(char)((int)uVar1 % 0x20) & 0x1fU);
  if ((int)uVar1 % 0x20 < 1) {
    uVar6 = 0xffffffff;
  }
  if ((int)uVar1 < 1) {
    uVar3 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  else {
    uVar7 = 0xffffffff;
    if (uVar1 < 0x21) {
      uVar7 = uVar6;
    }
    if ((*puVar5 & uVar7) == 0) {
      uVar4 = (ulonglong)uVar1 + 0x1f >> 5;
      uVar2 = 1;
      do {
        uVar8 = uVar2;
        if (uVar4 == uVar8) break;
        uVar7 = 0xffffffff;
        if (uVar8 - ((int)uVar4 - 2) == 1) {
          uVar7 = uVar6;
        }
        uVar2 = uVar8 + 1;
      } while ((puVar5[uVar8] & uVar7) == 0);
      uVar3 = CONCAT71((uint7)((ulonglong)uVar1 + 0x1f >> 0xd),uVar4 <= uVar8);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 14784869e FUN_14784869e body=108 status=ok
// SIG undefined FUN_14784869e(void)

void FUN_14784869e(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14785286a(param_1,iVar1);
  }
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    return;
  }
  return;
}



// FUNCTION 147848716 FUN_147848716 body=163 status=ok
// SIG undefined FUN_147848716(void)

void FUN_147848716(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    plVar1 = (longlong *)FUN_1459d489c();
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar2 = plVar1[0x22];
    }
    local_28 = *(longlong *)(param_1 + 0x10);
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_1478487ba(lVar2,*(undefined8 *)(param_1 + 0xb8),*(undefined1 *)(param_1 + 0xc0),&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478487ba FUN_1478487ba body=345 status=ok
// SIG undefined FUN_1478487ba(void)

void FUN_1478487ba(longlong param_1,ulonglong param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  if (DAT_14cabd4d8 == 0) {
    uVar2 = FUN_140f5467b();
    DAT_14cabd4d8 = FUN_140002ddd(FUN_14636aa74,uVar2,L"MassFragment");
    if (DAT_14cabd4d8 != 0) goto LAB_147848812;
  }
  else {
LAB_147848812:
    if ((*(int *)(DAT_14cabd4d8 + 0x38) <= *(int *)(param_2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(DAT_14cabd4d8 + 0x38) * 8)
        == DAT_14cabd4d8 + 0x30)) {
      if (param_2 != 0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      lVar3 = param_1 + (ulonglong)((param_3 & 0xff) * 0x50) + 0x28;
      goto LAB_1478488a4;
    }
  }
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  lVar3 = param_1 + (ulonglong)((param_3 & 0xff) * 0x50) + 200;
LAB_1478488a4:
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  uVar2 = FUN_147853008(lVar3,uVar1 >> 0x10 ^ uVar1,&local_38);
  FUN_1478536a6(uVar2,param_4);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147848918 FUN_147848918 body=407 status=ok
// SIG undefined FUN_147848918(void)

void FUN_147848918(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 auStack_68 [40];
  longlong *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1[0x16];
  iVar1 = (int)param_1[0x17];
  local_40 = (longlong *)0x0;
  local_38 = iVar1;
  if (iVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_14784ebb6(&local_40,iVar1,0);
    FUN_14784ec18(local_40,lVar4,iVar1);
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (*(int *)((longlong)param_1 + 0xbc) < 0) {
    FUN_14785283a(param_1 + 0x16);
  }
  lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
  bVar8 = 0x1f;
  if (lVar4 != 0) {
    uVar3 = FUN_14490d72a(lVar4);
    if (uVar3 < 4) {
      bVar8 = (byte)(0x4060201 >> ((byte)(uVar3 << 3) & 0x1f));
    }
    else {
      bVar8 = 0;
    }
  }
  plVar5 = (longlong *)FUN_145b3ac3e();
  if (plVar5[0x22] == 0) {
    (**(code **)(*plVar5 + 1000))(plVar5);
  }
  if ((longlong)(int)param_2[1] != 0) {
    lVar4 = *param_2;
    lVar9 = (longlong)(int)param_2[1] * 0x30 + lVar4;
    do {
      if ((*(char *)(lVar4 + 0x10) == '\x01') &&
         (lVar7 = *(longlong *)(lVar4 + 8), (*(byte *)(lVar7 + 0x51) & bVar8) != 0)) {
        if (((*(byte *)(lVar7 + 0x52) & 2) == 0) && ((longlong)local_38 != 0)) {
          lVar6 = (longlong)local_38 << 3;
          plVar5 = local_40;
          do {
            lVar2 = *plVar5;
            if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x10) == *(longlong *)(lVar7 + 0x10))) {
              if (plVar5 != (longlong *)0x0) {
                *(longlong *)(lVar4 + 8) = lVar2;
                lVar7 = lVar2;
              }
              break;
            }
            plVar5 = plVar5 + 1;
            lVar6 = lVar6 + -8;
          } while (lVar6 != 0);
        }
        FUN_14784869e(param_1 + 0x16,lVar7);
      }
      lVar4 = lVar4 + 0x30;
    } while (lVar4 != lVar9);
  }
  if (local_40 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147848ab0 FUN_147848ab0 body=99 status=ok
// SIG undefined FUN_147848ab0(void)

void FUN_147848ab0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x38);
  FUN_14784f562(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147848b1a FUN_147848b1a body=270 status=ok
// SIG undefined FUN_147848b1a(void)

void FUN_147848b1a(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  if ((longlong)(int)param_1[1] != 0) {
    plVar6 = (longlong *)*param_1;
    plVar3 = plVar6 + (int)param_1[1];
    bVar10 = false;
    do {
      while (plVar2 = (longlong *)*plVar6, plVar2 == (longlong *)0x0) {
        plVar6 = plVar6 + 1;
        bVar10 = true;
        if (plVar6 == plVar3) goto LAB_147848b83;
      }
      if ((*(byte *)((longlong)plVar2 + 0x52) & 8) == 0) {
        (**(code **)(*plVar2 + 0x2a0))(plVar2,param_2);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar3);
    if (bVar10) {
LAB_147848b83:
      iVar1 = (int)param_1[1];
      lVar8 = (longlong)iVar1;
      if (lVar8 != 0) {
        plVar3 = (longlong *)*param_1;
        iVar7 = 0;
        bVar10 = *plVar3 == 0;
        iVar11 = 0;
        do {
          lVar5 = (longlong)iVar11;
          iVar12 = iVar11;
          lVar9 = lVar5;
          iVar4 = iVar11 + 1;
          if (iVar11 + 1 < iVar1) {
            iVar4 = iVar1;
          }
          do {
            lVar9 = lVar9 + 1;
            iVar13 = iVar4;
            if (lVar8 <= lVar9) break;
            iVar13 = iVar12 + 1;
            iVar12 = iVar13;
          } while (bVar10 == (plVar3[lVar9] == 0));
          if (bVar10 == false) {
            if (iVar7 != iVar11) {
              memmove(plVar3 + iVar7,plVar3 + lVar5,(longlong)(iVar13 - iVar11) << 3);
            }
            iVar7 = iVar7 + (iVar13 - iVar11);
          }
          bVar10 = (bool)(bVar10 ^ 1);
          iVar11 = iVar13;
        } while (lVar9 < lVar8);
        *(int *)(param_1 + 1) = iVar7;
      }
    }
  }
  return;
}



// FUNCTION 147848c28 FUN_147848c28 body=175 status=ok
// SIG undefined FUN_147848c28(void)

undefined8 FUN_147848c28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147848cd8 FUN_147848cd8 body=95 status=ok
// SIG undefined FUN_147848cd8(void)

void FUN_147848cd8(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar1 = FUN_1458854ca();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar3 = *param_2;
      goto LAB_147848d1b;
    }
  }
  lVar3 = 0;
LAB_147848d1b:
  uVar2 = FUN_147848c28(param_3,lVar3);
  FUN_14784869e(param_1,uVar2);
  return;
}



// FUNCTION 147848d37 FUN_147848d37 body=96 status=ok
// SIG undefined FUN_147848d37(void)

ulonglong FUN_147848d37(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = *param_1;
    lVar5 = 0;
    uVar3 = 0;
    do {
      uVar4 = ((uint)(*(ulonglong *)(lVar1 + lVar5) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar1 + lVar5) >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      uVar3 = FUN_144a78877(uVar3 & 0xffffffff,uVar4 >> 0x10 ^ uVar4);
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar5);
  }
  return uVar3;
}



// FUNCTION 147848db2 FUN_147848db2 body=123 status=ok
// SIG undefined FUN_147848db2(void)

void FUN_147848db2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((longlong)*(int *)(param_1 + 0xa8) != 0) {
    plVar4 = *(longlong **)(param_1 + 0xa0);
    plVar1 = plVar4 + *(int *)(param_1 + 0xa8);
    do {
      lVar3 = *plVar4;
      FUN_14339fa08(lVar3,param_2);
      if ((longlong)*(int *)(lVar3 + 0x300) != 0) {
        lVar2 = *(longlong *)(lVar3 + 0x2f8);
        lVar3 = (longlong)*(int *)(lVar3 + 0x300) << 4;
        do {
          FUN_14785387a(param_3,lVar2);
          lVar2 = lVar2 + 0x10;
          lVar3 = lVar3 + -0x10;
        } while (lVar3 != 0);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  return;
}



// FUNCTION 147848e3a FUN_147848e3a body=91 status=ok
// SIG undefined FUN_147848e3a(void)

void FUN_147848e3a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      FUN_147854460(lVar3 + 0x268,param_2);
      FUN_147855f42(lVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 147848e9a FUN_147848e9a body=30 status=ok
// SIG undefined FUN_147848e9a(void)

void FUN_147848e9a(longlong param_1)

{
  FUN_147848b1a(param_1 + 0xb0);
  *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x52) | 8;
  return;
}



// FUNCTION 147848eb8 FUN_147848eb8 body=334 status=ok
// SIG undefined FUN_147848eb8(void)

void FUN_147848eb8(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8 = *param_2;
  local_a0 = *(undefined4 *)(param_2 + 1);
  local_98 = 0;
  local_96 = 1;
  local_50 = 0;
  local_48 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_44 = 0xffffffff00000080;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = *param_3;
  local_c0 = param_3[1];
  if (local_c0 != 0) {
    LOCK();
    *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
    UNLOCK();
  }
  FUN_14339ffc0(&local_a8,&local_b8,&local_c8);
  local_d8 = local_b8;
  local_d0 = (undefined4)uStack_b0;
  FUN_147848918(param_1);
  if (local_98._1_1_ == '\0') {
    local_e8 = local_b8;
    local_e0 = (undefined4)uStack_b0;
    (**(code **)(*param_1 + 0x2f8))(param_1);
  }
  FUN_14785384b(local_b8,uStack_b0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_147848ab0(&local_a8);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14784900a FUN_14784900a body=74 status=ok
// SIG undefined FUN_14784900a(void)

void FUN_14784900a(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *(char *)(param_1 + 0x50) = (char)param_2;
  iVar1 = *(int *)(param_1 + 0xb8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x2d0))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 147849054 FUN_147849054 body=897 status=ok
// SIG undefined FUN_147849054(void)

void FUN_147849054(longlong param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_69;
  undefined1 local_68 [16];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = param_2 + 0x40;
  local_80 = param_1 + 0x40;
  local_88 = param_2 + 0x80;
  local_90 = param_2 + 0xe0;
  bVar2 = true;
  local_a0 = param_1;
  local_98 = param_2;
  do {
    bVar1 = bVar2;
    uVar3 = (ulonglong)(((byte)~bVar1 & 1) << 5);
    puVar4 = (undefined1 *)(local_a0 + uVar3);
    local_58 = 0;
    local_50 = 0x8000000000;
    local_a8 = &local_69;
    FUN_146fdacc0(puVar4,local_98 + uVar3,local_68,1);
    if (local_68 != puVar4) {
      FUN_144a69486(puVar4,local_68);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    puVar4 = (undefined1 *)(local_80 + uVar3);
    local_58 = 0;
    local_50 = 0x8000000000;
    local_a8 = &local_69;
    FUN_146fdacc0(puVar4,local_78 + uVar3,local_68,1);
    if (local_68 != puVar4) {
      FUN_144a69486(puVar4,local_68);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    puVar4 = (undefined1 *)(param_1 + 0x80 + uVar3);
    local_58 = 0;
    local_50 = 0x8000000000;
    local_a8 = &local_69;
    FUN_146fdacc0(puVar4,local_88 + uVar3,local_68,1);
    if (local_68 != puVar4) {
      FUN_144a69486(puVar4,local_68);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    puVar4 = (undefined1 *)(uVar3 + param_1 + 0xe0);
    local_58 = 0;
    local_50 = 0x8000000000;
    local_a8 = &local_69;
    FUN_146fdacc0(puVar4,local_90 + uVar3,local_68,1);
    if (local_68 != puVar4) {
      FUN_144a69486(puVar4,local_68);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    bVar2 = false;
  } while (bVar1);
  puVar4 = (undefined1 *)(local_a0 + 0xc0);
  local_58 = 0;
  local_50 = 0x8000000000;
  local_a8 = &local_69;
  FUN_146fdacc0(puVar4,local_98 + 0xc0,local_68,1);
  if (local_68 != puVar4) {
    FUN_144a69486(puVar4,local_68);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  puVar4 = (undefined1 *)(local_a0 + 0x120);
  local_58 = 0;
  local_50 = 0x8000000000;
  local_a8 = &local_69;
  FUN_146fdacc0(puVar4,local_98 + 0x120,local_68,1);
  if (local_68 != puVar4) {
    FUN_144a69486(puVar4,local_68);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  puVar4 = (undefined1 *)(local_a0 + 0x140);
  local_58 = 0;
  local_50 = 0x8000000000;
  local_a8 = &local_69;
  FUN_146fdacc0(puVar4,local_98 + 0x140,local_68,1);
  if (local_68 != puVar4) {
    FUN_144a69486(puVar4,local_68);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  puVar4 = (undefined1 *)(local_a0 + 0x160);
  local_58 = 0;
  local_50 = 0x8000000000;
  local_a8 = &local_69;
  FUN_146fdacc0(puVar4,local_98 + 0x160,local_68,1);
  if (local_68 != puVar4) {
    FUN_144a69486(puVar4,local_68);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(local_a0 + 0x180) = 0xffffffff;
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478493d6 FUN_1478493d6 body=193 status=ok
// SIG undefined FUN_1478493d6(void)

void FUN_1478493d6(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar3 = FUN_144b07aaa(param_1 + 0xc0,0,0xffffffff);
  *(undefined4 *)(param_1 + 0x180) = uVar3;
  bVar2 = true;
  do {
    bVar1 = bVar2;
    uVar5 = (ulonglong)(((byte)~bVar1 & 1) << 5);
    iVar4 = FUN_144b07aaa(param_1 + uVar5,0,0xffffffff);
    *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + iVar4;
    iVar4 = FUN_144b07aaa(param_1 + 0x40 + uVar5,0,0xffffffff);
    *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + iVar4;
    iVar4 = FUN_144b07aaa(param_1 + 0x80 + uVar5,0,0xffffffff);
    *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + iVar4;
    iVar4 = FUN_144b07aaa(uVar5 + param_1 + 0xe0,0,0xffffffff);
    *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + iVar4;
    bVar2 = false;
  } while (bVar1);
  return;
}



// FUNCTION 147849498 FUN_147849498 body=755 status=ok
// SIG undefined FUN_147849498(void)

undefined8 FUN_147849498(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  longlong local_f0;
  undefined1 local_d9;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_48 = 0;
  local_40 = 0x8000000000;
  local_68 = 0;
  local_60 = 0x8000000000;
  local_f8 = &local_98;
  FUN_146fdacc0(param_1 + 0x80,param_1 + 0xa0,&local_78,1);
  FUN_144a69486(&local_58,&local_78);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_48 == 0) {
    local_98 = local_58;
    uStack_94 = uStack_54;
    uStack_90 = uStack_50;
    uStack_8c = uStack_4c;
  }
  local_88 = local_48;
  local_80 = local_40;
  local_48 = 0;
  local_40 = 0x8000000000;
  local_68 = 0;
  local_60 = 0x8000000000;
  local_f8 = &local_b8;
  FUN_146fdacc0(param_1 + 0x40,param_1 + 0x60,&local_78,1);
  FUN_144a69486(&local_58,&local_78);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_48 == 0) {
    local_b8 = local_58;
    uStack_b4 = uStack_54;
    uStack_b0 = uStack_50;
    uStack_ac = uStack_4c;
  }
  local_a8 = local_48;
  local_a0 = local_40;
  local_48 = 0;
  local_40 = 0x8000000000;
  local_68 = 0;
  local_60 = 0x8000000000;
  local_f8 = &local_d8;
  FUN_146fdacc0(param_1 + 0x120,param_1 + 0x140,&local_78,1);
  FUN_144a69486(&local_58,&local_78);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_48 == 0) {
    local_d8 = local_58;
    uStack_d4 = uStack_54;
    uStack_d0 = uStack_50;
    uStack_cc = uStack_4c;
  }
  local_c8 = local_48;
  local_c0 = local_40;
  local_48 = 0;
  local_40 = 0x8000000000;
  local_68 = 0;
  local_60 = 0x8000000000;
  local_f8 = (undefined4 *)&local_d9;
  FUN_146fdacc0(param_1,param_1 + 0x20,&local_78,1);
  FUN_144a69486(&local_58,&local_78);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_f0 = param_1 + 0xc0;
  if (local_48 == 0) {
    local_78 = local_58;
    uStack_74 = uStack_54;
    uStack_70 = uStack_50;
    uStack_6c = uStack_4c;
  }
  local_68 = local_48;
  local_60 = local_40;
  local_f8 = &local_98;
  FUN_147846bc6(param_2,&local_78,&local_d8,&local_b8);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14784978c FUN_14784978c body=563 status=ok
// SIG undefined FUN_14784978c(void)

longlong FUN_14784978c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  FUN_1478499c0();
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = *param_2;
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 1);
  bVar5 = true;
  do {
    bVar4 = bVar5;
    uVar8 = (ulonglong)(((byte)~bVar4 & 1) << 4);
    plVar1 = (longlong *)(param_1 + 0x188 + uVar8);
    lVar7 = (longlong)DAT_14cabda28;
    lVar6 = (longlong)DAT_14cabda54;
    iVar2 = *(int *)(param_1 + 400 + uVar8);
    uVar3 = (uint)(lVar7 - lVar6);
    *(uint *)(param_1 + 400 + uVar8) = iVar2 + uVar3;
    if ((uint)(*(int *)(param_1 + 0x194 + uVar8) - iVar2) < uVar3) {
      FUN_147853b3a(plVar1);
    }
    memset((void *)((longlong)iVar2 * 0x10 + *plVar1),0,(lVar7 - lVar6) * 0x10);
    plVar1 = (longlong *)(param_1 + 0x1a8 + uVar8);
    lVar7 = (longlong)DAT_14cabdf88;
    lVar6 = (longlong)DAT_14cabdfb4;
    iVar2 = *(int *)(param_1 + 0x1b0 + uVar8);
    uVar3 = (uint)(lVar7 - lVar6);
    *(uint *)(param_1 + 0x1b0 + uVar8) = iVar2 + uVar3;
    if ((uint)(*(int *)(param_1 + 0x1b4 + uVar8) - iVar2) < uVar3) {
      FUN_147853b3a(plVar1);
    }
    memset((void *)((longlong)iVar2 * 0x10 + *plVar1),0,(lVar7 - lVar6) * 0x10);
    plVar1 = (longlong *)(uVar8 + param_1 + 0x1c8);
    lVar7 = (longlong)DAT_14cabe238;
    lVar6 = (longlong)DAT_14cabe264;
    iVar2 = *(int *)(param_1 + 0x1d0 + uVar8);
    uVar3 = (uint)(lVar7 - lVar6);
    *(uint *)(param_1 + 0x1d0 + uVar8) = iVar2 + uVar3;
    if ((uint)(*(int *)(param_1 + 0x1d4 + uVar8) - iVar2) < uVar3) {
      FUN_147853b3a(plVar1);
    }
    memset((void *)((longlong)iVar2 * 0x10 + *plVar1),0,(lVar7 - lVar6) * 0x10);
    plVar1 = (longlong *)(uVar8 + param_1 + 0x1e8);
    lVar7 = (longlong)DAT_14cabe4e8;
    lVar6 = (longlong)DAT_14cabe514;
    iVar2 = *(int *)(param_1 + 0x1f0 + uVar8);
    uVar3 = (uint)(lVar7 - lVar6);
    *(uint *)(param_1 + 0x1f0 + uVar8) = iVar2 + uVar3;
    if ((uint)(*(int *)(param_1 + 500 + uVar8) - iVar2) < uVar3) {
      FUN_147853b3a(plVar1);
    }
    memset((void *)((longlong)iVar2 * 0x10 + *plVar1),0,(lVar7 - lVar6) * 0x10);
    bVar5 = false;
  } while (bVar4);
  return param_1;
}



// FUNCTION 1478499c0 FUN_1478499c0 body=170 status=ok
// SIG undefined FUN_1478499c0(void)

void FUN_1478499c0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0x8000000000;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0x8000000000;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0x8000000000;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0x8000000000;
  *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
  return;
}



// FUNCTION 147849a6a FUN_147849a6a body=242 status=ok
// SIG undefined FUN_147849a6a(void)

ulonglong FUN_147849a6a(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  bVar3 = true;
  do {
    bVar2 = bVar3;
    uVar5 = (ulonglong)(((byte)~bVar2 & 1) << 4);
    lVar7 = (longlong)*(int *)(param_2 + 8 + uVar5);
    if (lVar7 != 0) {
      puVar4 = *(undefined8 **)(param_2 + uVar5);
      puVar8 = puVar4 + lVar7 * 2;
      do {
        if ((longlong)*(int *)(puVar4 + 1) != 0) {
          piVar6 = (int *)*puVar4;
          piVar1 = piVar6 + *(int *)(puVar4 + 1);
          do {
            lVar7 = (longlong)
                    *(int *)(*(longlong *)(param_1 + 0x208) + 0x200 + (longlong)*piVar6 * 0x208);
            if (lVar7 != 0) {
              plVar9 = *(longlong **)
                        (*(longlong *)(param_1 + 0x208) + 0x1f8 + (longlong)*piVar6 * 0x208);
              plVar10 = plVar9 + lVar7 * 2;
              do {
                if ((int)param_3[1] != 0) {
                  lVar7 = 0;
                  do {
                    if (*(longlong *)(*param_3 + lVar7) == *plVar9) {
                      uVar5 = CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
                      goto LAB_147849b41;
                    }
                    lVar7 = lVar7 + 0x10;
                  } while ((longlong)(int)param_3[1] << 4 != lVar7);
                }
                plVar9 = plVar9 + 2;
              } while (plVar9 != plVar10);
            }
            piVar6 = piVar6 + 1;
          } while (piVar6 != piVar1);
        }
        puVar4 = puVar4 + 2;
      } while (puVar4 != puVar8);
    }
    uVar5 = 0;
    bVar3 = false;
  } while (bVar2);
LAB_147849b41:
  FUN_147849b5c(param_2);
  return uVar5 & 0xffffffff;
}



// FUNCTION 147849b5c FUN_147849b5c body=70 status=ok
// SIG undefined FUN_147849b5c(void)

void FUN_147849b5c(longlong *param_1)

{
  FUN_14784fc12(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_14784fc12(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147849ba2 FUN_147849ba2 body=337 status=ok
// SIG undefined FUN_147849ba2(void)

undefined8 FUN_147849ba2(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_147849cf4();
  if (cVar1 == '\0') {
    FUN_14784fc3e(local_48,param_1 + 0x188);
    FUN_14784fc3e(local_38,param_1 + 0x198);
    cVar1 = FUN_147849a6a(param_1,local_48,param_3);
    if (cVar1 == '\0') goto LAB_147849bd2;
LAB_147849c4f:
    uVar2 = 0;
  }
  else {
LAB_147849bd2:
    cVar1 = FUN_14784a028(param_1 + 0x40,param_2 + 0x40);
    if (cVar1 == '\0') {
      FUN_14784fc3e(local_68,param_1 + 0x1a8);
      FUN_14784fc3e(local_58,param_1 + 0x1b8);
      cVar1 = FUN_147849a6a(param_1,local_68,param_3);
      if (cVar1 != '\0') goto LAB_147849c4f;
    }
    cVar1 = FUN_14784a35c(param_1 + 0x80,param_2 + 0x80);
    if (cVar1 == '\0') {
      FUN_14784fc3e(local_88,param_1 + 0x1c8);
      FUN_14784fc3e(local_78,param_1 + 0x1d8);
      cVar1 = FUN_147849a6a(param_1,local_88,param_3);
      if (cVar1 != '\0') goto LAB_147849c4f;
    }
    uVar2 = FUN_14784a690(param_1 + 0xe0,param_2 + 0xe0);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147849cf4 FUN_147849cf4 body=820 status=ok
// SIG undefined FUN_147849cf4(void)

undefined8 FUN_147849cf4(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  
  iVar1 = *(int *)(param_2 + 0x38);
  lVar9 = param_2 + 0x20;
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar9 = *(longlong *)(param_2 + 0x30);
  }
  iVar14 = iVar1 + 0x3e;
  if (-1 < iVar1 + 0x1f) {
    iVar14 = iVar1 + 0x1f;
  }
  iVar14 = iVar14 >> 5;
  iVar2 = *(int *)(param_1 + 0x38);
  bVar22 = 0 < iVar2;
  bVar3 = 0 < iVar1;
  uVar15 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
  if (iVar1 % 0x20 < 1) {
    uVar15 = 0xffffffff;
  }
  uVar17 = 0xffffffff;
  if (iVar1 - 1U < 0x20) {
    uVar17 = uVar15;
  }
  lVar21 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar21 = *(longlong *)(param_1 + 0x30);
  }
  iVar5 = iVar2 + 0x3e;
  if (-1 < iVar2 + 0x1f) {
    iVar5 = iVar2 + 0x1f;
  }
  iVar5 = iVar5 >> 5;
  uVar4 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
  if (iVar2 % 0x20 < 1) {
    uVar4 = 0xffffffff;
  }
  uVar18 = 0xffffffff;
  if (iVar2 - 1U < 0x20) {
    uVar18 = uVar4;
  }
  if (bVar3 || bVar22) {
    uVar13 = 0;
    bVar19 = bVar3;
    uVar11 = uVar17;
    uVar10 = uVar18;
    do {
      uVar16 = 0;
      if (bVar19) {
        uVar16 = uVar11 & *(uint *)(lVar9 + uVar13 * 4);
      }
      uVar11 = 0;
      if (bVar22) {
        uVar11 = uVar10 & *(uint *)(lVar21 + uVar13 * 4);
      }
      if ((uVar11 & uVar16) != 0) {
        return 0;
      }
      uVar11 = 0xffffffff;
      if (iVar14 - 2 == uVar13) {
        uVar11 = uVar15;
      }
      bVar22 = iVar5 - 2 == uVar13;
      uVar13 = uVar13 + 1;
      uVar10 = 0xffffffff;
      if (bVar22) {
        uVar10 = uVar4;
      }
      bVar19 = (int)uVar13 < iVar14;
      bVar22 = (int)uVar13 < iVar5;
    } while (bVar19 || bVar22);
  }
  iVar12 = *(int *)(param_1 + 0x18);
  lVar20 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar20 = param_1;
  }
  iVar6 = iVar12 + 0x3e;
  if (-1 < iVar12 + 0x1f) {
    iVar6 = iVar12 + 0x1f;
  }
  bVar22 = 0 < iVar12;
  uVar11 = 0xffffffff >> (-(char)(iVar12 % 0x20) & 0x1fU);
  if (iVar12 % 0x20 < 1) {
    uVar11 = 0xffffffff;
  }
  if (0 < iVar1 || bVar22) {
    uVar10 = 0xffffffff;
    if (iVar12 - 1U < 0x20) {
      uVar10 = uVar11;
    }
    uVar13 = 0;
    do {
      uVar16 = 0;
      if (bVar3) {
        uVar16 = uVar17 & *(uint *)(lVar9 + uVar13 * 4);
      }
      uVar17 = 0;
      if (bVar22) {
        uVar17 = uVar10 & *(uint *)(lVar20 + uVar13 * 4);
      }
      if ((uVar17 & uVar16) != 0) {
        return 0;
      }
      uVar17 = 0xffffffff;
      if (iVar14 - 2 == uVar13) {
        uVar17 = uVar15;
      }
      bVar22 = (iVar6 >> 5) - 2 == uVar13;
      uVar13 = uVar13 + 1;
      uVar10 = 0xffffffff;
      if (bVar22) {
        uVar10 = uVar11;
      }
      bVar3 = (int)uVar13 < iVar14;
      bVar22 = (int)uVar13 < iVar6 >> 5;
    } while (bVar3 || bVar22);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  lVar9 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar9 = param_2;
  }
  iVar14 = iVar1 + 0x1f;
  iVar12 = iVar1 + 0x3e;
  if (-1 < iVar14) {
    iVar12 = iVar14;
  }
  if (-1 < iVar1) {
    iVar14 = iVar1;
  }
  bVar22 = iVar1 < 1;
  uVar15 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
  if (iVar1 % 0x20 < 1) {
    uVar15 = 0xffffffff;
  }
  bVar3 = iVar2 < 1;
  uVar7 = CONCAT71((uint7)(uint3)((uint)iVar14 >> 8),1);
  if (!bVar22 || !bVar3) {
    uVar17 = 0xffffffff;
    if (iVar1 - 1U < 0x20) {
      uVar17 = uVar15;
    }
    uVar13 = 0;
    do {
      uVar8 = 0;
      if (!bVar22) {
        uVar8 = (ulonglong)(uVar17 & *(uint *)(lVar9 + uVar13 * 4));
      }
      uVar17 = 0;
      if (!bVar3) {
        uVar17 = uVar18 & *(uint *)(lVar21 + uVar13 * 4);
      }
      bVar22 = (uVar17 & (uint)uVar8) == 0;
      uVar7 = CONCAT71((int7)(uVar8 >> 8),bVar22);
      if (!bVar22) {
        return uVar7;
      }
      uVar17 = 0xffffffff;
      if ((iVar12 >> 5) - 2 == uVar13) {
        uVar17 = uVar15;
      }
      bVar22 = iVar5 - 2 == uVar13;
      uVar13 = uVar13 + 1;
      uVar18 = 0xffffffff;
      if (bVar22) {
        uVar18 = uVar4;
      }
      bVar22 = iVar12 >> 5 <= (int)uVar13;
      bVar3 = iVar5 <= (int)uVar13;
    } while (!bVar22 || !bVar3);
  }
  return uVar7;
}



// FUNCTION 14784a028 FUN_14784a028 body=820 status=ok
// SIG undefined FUN_14784a028(void)

undefined8 FUN_14784a028(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  
  iVar1 = *(int *)(param_2 + 0x38);
  lVar9 = param_2 + 0x20;
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar9 = *(longlong *)(param_2 + 0x30);
  }
  iVar14 = iVar1 + 0x3e;
  if (-1 < iVar1 + 0x1f) {
    iVar14 = iVar1 + 0x1f;
  }
  iVar14 = iVar14 >> 5;
  iVar2 = *(int *)(param_1 + 0x38);
  bVar22 = 0 < iVar2;
  bVar3 = 0 < iVar1;
  uVar15 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
  if (iVar1 % 0x20 < 1) {
    uVar15 = 0xffffffff;
  }
  uVar17 = 0xffffffff;
  if (iVar1 - 1U < 0x20) {
    uVar17 = uVar15;
  }
  lVar21 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar21 = *(longlong *)(param_1 + 0x30);
  }
  iVar5 = iVar2 + 0x3e;
  if (-1 < iVar2 + 0x1f) {
    iVar5 = iVar2 + 0x1f;
  }
  iVar5 = iVar5 >> 5;
  uVar4 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
  if (iVar2 % 0x20 < 1) {
    uVar4 = 0xffffffff;
  }
  uVar18 = 0xffffffff;
  if (iVar2 - 1U < 0x20) {
    uVar18 = uVar4;
  }
  if (bVar3 || bVar22) {
    uVar13 = 0;
    bVar19 = bVar3;
    uVar11 = uVar17;
    uVar10 = uVar18;
    do {
      uVar16 = 0;
      if (bVar19) {
        uVar16 = uVar11 & *(uint *)(lVar9 + uVar13 * 4);
      }
      uVar11 = 0;
      if (bVar22) {
        uVar11 = uVar10 & *(uint *)(lVar21 + uVar13 * 4);
      }
      if ((uVar11 & uVar16) != 0) {
        return 0;
      }
      uVar11 = 0xffffffff;
      if (iVar14 - 2 == uVar13) {
        uVar11 = uVar15;
      }
      bVar22 = iVar5 - 2 == uVar13;
      uVar13 = uVar13 + 1;
      uVar10 = 0xffffffff;
      if (bVar22) {
        uVar10 = uVar4;
      }
      bVar19 = (int)uVar13 < iVar14;
      bVar22 = (int)uVar13 < iVar5;
    } while (bVar19 || bVar22);
  }
  iVar12 = *(int *)(param_1 + 0x18);
  lVar20 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar20 = param_1;
  }
  iVar6 = iVar12 + 0x3e;
  if (-1 < iVar12 + 0x1f) {
    iVar6 = iVar12 + 0x1f;
  }
  bVar22 = 0 < iVar12;
  uVar11 = 0xffffffff >> (-(char)(iVar12 % 0x20) & 0x1fU);
  if (iVar12 % 0x20 < 1) {
    uVar11 = 0xffffffff;
  }
  if (0 < iVar1 || bVar22) {
    uVar10 = 0xffffffff;
    if (iVar12 - 1U < 0x20) {
      uVar10 = uVar11;
    }
    uVar13 = 0;
    do {
      uVar16 = 0;
      if (bVar3) {
        uVar16 = uVar17 & *(uint *)(lVar9 + uVar13 * 4);
      }
      uVar17 = 0;
      if (bVar22) {
        uVar17 = uVar10 & *(uint *)(lVar20 + uVar13 * 4);
      }
      if ((uVar17 & uVar16) != 0) {
        return 0;
      }
      uVar17 = 0xffffffff;
      if (iVar14 - 2 == uVar13) {
        uVar17 = uVar15;
      }
      bVar22 = (iVar6 >> 5) - 2 == uVar13;
      uVar13 = uVar13 + 1;
      uVar10 = 0xffffffff;
      if (bVar22) {
        uVar10 = uVar11;
      }
      bVar3 = (int)uVar13 < iVar14;
      bVar22 = (int)uVar13 < iVar6 >> 5;
    } while (bVar3 || bVar22);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  lVar9 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar9 = param_2;
  }
  iVar14 = iVar1 + 0x1f;
  iVar12 = iVar1 + 0x3e;
  if (-1 < iVar14) {
    iVar12 = iVar14;
  }
  if (-1 < iVar1) {
    iVar14 = iVar1;
  }
  bVar22 = iVar1 < 1;
  uVar15 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
  if (iVar1 % 0x20 < 1) {
    uVar15 = 0xffffffff;
  }
  bVar3 = iVar2 < 1;
  uVar7 = CONCAT71((uint7)(uint3)((uint)iVar14 >> 8),1);
  if (!bVar22 || !bVar3) {
    uVar17 = 0xffffffff;
    if (iVar1 - 1U < 0x20) {
      uVar17 = uVar15;
    }
    uVar13 = 0;
    do {
      uVar8 = 0;
      if (!bVar22) {
        uVar8 = (ulonglong)(uVar17 & *(uint *)(lVar9 + uVar13 * 4));
      }
      uVar17 = 0;
      if (!bVar3) {
        uVar17 = uVar18 & *(uint *)(lVar21 + uVar13 * 4);
      }
      bVar22 = (uVar17 & (uint)uVar8) == 0;
      uVar7 = CONCAT71((int7)(uVar8 >> 8),bVar22);
      if (!bVar22) {
        return uVar7;
      }
      uVar17 = 0xffffffff;
      if ((iVar12 >> 5) - 2 == uVar13) {
        uVar17 = uVar15;
      }
      bVar22 = iVar5 - 2 == uVar13;
      uVar13 = uVar13 + 1;
      uVar18 = 0xffffffff;
      if (bVar22) {
        uVar18 = uVar4;
      }
      bVar22 = iVar12 >> 5 <= (int)uVar13;
      bVar3 = iVar5 <= (int)uVar13;
    } while (!bVar22 || !bVar3);
  }
  return uVar7;
}



// FUNCTION 14784a35c FUN_14784a35c body=820 status=ok
// SIG undefined FUN_14784a35c(void)

undefined8 FUN_14784a35c(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  
  iVar1 = *(int *)(param_2 + 0x38);
  lVar9 = param_2 + 0x20;
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar9 = *(longlong *)(param_2 + 0x30);
  }
  iVar14 = iVar1 + 0x3e;
  if (-1 < iVar1 + 0x1f) {
    iVar14 = iVar1 + 0x1f;
  }
  iVar14 = iVar14 >> 5;
  iVar2 = *(int *)(param_1 + 0x38);
  bVar22 = 0 < iVar2;
  bVar3 = 0 < iVar1;
  uVar15 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
  if (iVar1 % 0x20 < 1) {
    uVar15 = 0xffffffff;
  }
  uVar17 = 0xffffffff;
  if (iVar1 - 1U < 0x20) {
    uVar17 = uVar15;
  }
  lVar21 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar21 = *(longlong *)(param_1 + 0x30);
  }
  iVar5 = iVar2 + 0x3e;
  if (-1 < iVar2 + 0x1f) {
    iVar5 = iVar2 + 0x1f;
  }
  iVar5 = iVar5 >> 5;
  uVar4 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
  if (iVar2 % 0x20 < 1) {
    uVar4 = 0xffffffff;
  }
  uVar18 = 0xffffffff;
  if (iVar2 - 1U < 0x20) {
    uVar18 = uVar4;
  }
  if (bVar3 || bVar22) {
    uVar13 = 0;
    bVar19 = bVar3;
    uVar11 = uVar17;
    uVar10 = uVar18;
    do {
      uVar16 = 0;
      if (bVar19) {
        uVar16 = uVar11 & *(uint *)(lVar9 + uVar13 * 4);
      }
      uVar11 = 0;
      if (bVar22) {
        uVar11 = uVar10 & *(uint *)(lVar21 + uVar13 * 4);
      }
      if ((uVar11 & uVar16) != 0) {
        return 0;
      }
      uVar11 = 0xffffffff;
      if (iVar14 - 2 == uVar13) {
        uVar11 = uVar15;
      }
      bVar22 = iVar5 - 2 == uVar13;
      uVar13 = uVar13 + 1;
      uVar10 = 0xffffffff;
      if (bVar22) {
        uVar10 = uVar4;
      }
      bVar19 = (int)uVar13 < iVar14;
      bVar22 = (int)uVar13 < iVar5;
    } while (bVar19 || bVar22);
  }
  iVar12 = *(int *)(param_1 + 0x18);
  lVar20 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar20 = param_1;
  }
  iVar6 = iVar12 + 0x3e;
  if (-1 < iVar12 + 0x1f) {
    iVar6 = iVar12 + 0x1f;
  }
  bVar22 = 0 < iVar12;
  uVar11 = 0xffffffff >> (-(char)(iVar12 % 0x20) & 0x1fU);
  if (iVar12 % 0x20 < 1) {
    uVar11 = 0xffffffff;
  }
  if (0 < iVar1 || bVar22) {
    uVar10 = 0xffffffff;
    if (iVar12 - 1U < 0x20) {
      uVar10 = uVar11;
    }
    uVar13 = 0;
    do {
      uVar16 = 0;
      if (bVar3) {
        uVar16 = uVar17 & *(uint *)(lVar9 + uVar13 * 4);
      }
      uVar17 = 0;
      if (bVar22) {
        uVar17 = uVar10 & *(uint *)(lVar20 + uVar13 * 4);
      }
      if ((uVar17 & uVar16) != 0) {
        return 0;
      }
      uVar17 = 0xffffffff;
      if (iVar14 - 2 == uVar13) {
        uVar17 = uVar15;
      }
      bVar22 = (iVar6 >> 5) - 2 == uVar13;
      uVar13 = uVar13 + 1;
      uVar10 = 0xffffffff;
      if (bVar22) {
        uVar10 = uVar11;
      }
      bVar3 = (int)uVar13 < iVar14;
      bVar22 = (int)uVar13 < iVar6 >> 5;
    } while (bVar3 || bVar22);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  lVar9 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar9 = param_2;
  }
  iVar14 = iVar1 + 0x1f;
  iVar12 = iVar1 + 0x3e;
  if (-1 < iVar14) {
    iVar12 = iVar14;
  }
  if (-1 < iVar1) {
    iVar14 = iVar1;
  }
  bVar22 = iVar1 < 1;
  uVar15 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
  if (iVar1 % 0x20 < 1) {
    uVar15 = 0xffffffff;
  }
  bVar3 = iVar2 < 1;
  uVar7 = CONCAT71((uint7)(uint3)((uint)iVar14 >> 8),1);
  if (!bVar22 || !bVar3) {
    uVar17 = 0xffffffff;
    if (iVar1 - 1U < 0x20) {
      uVar17 = uVar15;
    }
    uVar13 = 0;
    do {
      uVar8 = 0;
      if (!bVar22) {
        uVar8 = (ulonglong)(uVar17 & *(uint *)(lVar9 + uVar13 * 4));
      }
      uVar17 = 0;
      if (!bVar3) {
        uVar17 = uVar18 & *(uint *)(lVar21 + uVar13 * 4);
      }
      bVar22 = (uVar17 & (uint)uVar8) == 0;
      uVar7 = CONCAT71((int7)(uVar8 >> 8),bVar22);
      if (!bVar22) {
        return uVar7;
      }
      uVar17 = 0xffffffff;
      if ((iVar12 >> 5) - 2 == uVar13) {
        uVar17 = uVar15;
      }
      bVar22 = iVar5 - 2 == uVar13;
      uVar13 = uVar13 + 1;
      uVar18 = 0xffffffff;
      if (bVar22) {
        uVar18 = uVar4;
      }
      bVar22 = iVar12 >> 5 <= (int)uVar13;
      bVar3 = iVar5 <= (int)uVar13;
    } while (!bVar22 || !bVar3);
  }
  return uVar7;
}



// FUNCTION 14784a690 FUN_14784a690 body=820 status=ok
// SIG undefined FUN_14784a690(void)

undefined8 FUN_14784a690(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  
  iVar1 = *(int *)(param_2 + 0x38);
  lVar9 = param_2 + 0x20;
  if (*(longlong *)(param_2 + 0x30) != 0) {
    lVar9 = *(longlong *)(param_2 + 0x30);
  }
  iVar14 = iVar1 + 0x3e;
  if (-1 < iVar1 + 0x1f) {
    iVar14 = iVar1 + 0x1f;
  }
  iVar14 = iVar14 >> 5;
  iVar2 = *(int *)(param_1 + 0x38);
  bVar22 = 0 < iVar2;
  bVar3 = 0 < iVar1;
  uVar15 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
  if (iVar1 % 0x20 < 1) {
    uVar15 = 0xffffffff;
  }
  uVar17 = 0xffffffff;
  if (iVar1 - 1U < 0x20) {
    uVar17 = uVar15;
  }
  lVar21 = param_1 + 0x20;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar21 = *(longlong *)(param_1 + 0x30);
  }
  iVar5 = iVar2 + 0x3e;
  if (-1 < iVar2 + 0x1f) {
    iVar5 = iVar2 + 0x1f;
  }
  iVar5 = iVar5 >> 5;
  uVar4 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
  if (iVar2 % 0x20 < 1) {
    uVar4 = 0xffffffff;
  }
  uVar18 = 0xffffffff;
  if (iVar2 - 1U < 0x20) {
    uVar18 = uVar4;
  }
  if (bVar3 || bVar22) {
    uVar13 = 0;
    bVar19 = bVar3;
    uVar11 = uVar17;
    uVar10 = uVar18;
    do {
      uVar16 = 0;
      if (bVar19) {
        uVar16 = uVar11 & *(uint *)(lVar9 + uVar13 * 4);
      }
      uVar11 = 0;
      if (bVar22) {
        uVar11 = uVar10 & *(uint *)(lVar21 + uVar13 * 4);
      }
      if ((uVar11 & uVar16) != 0) {
        return 0;
      }
      uVar11 = 0xffffffff;
      if (iVar14 - 2 == uVar13) {
        uVar11 = uVar15;
      }
      bVar22 = iVar5 - 2 == uVar13;
      uVar13 = uVar13 + 1;
      uVar10 = 0xffffffff;
      if (bVar22) {
        uVar10 = uVar4;
      }
      bVar19 = (int)uVar13 < iVar14;
      bVar22 = (int)uVar13 < iVar5;
    } while (bVar19 || bVar22);
  }
  iVar12 = *(int *)(param_1 + 0x18);
  lVar20 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar20 = param_1;
  }
  iVar6 = iVar12 + 0x3e;
  if (-1 < iVar12 + 0x1f) {
    iVar6 = iVar12 + 0x1f;
  }
  bVar22 = 0 < iVar12;
  uVar11 = 0xffffffff >> (-(char)(iVar12 % 0x20) & 0x1fU);
  if (iVar12 % 0x20 < 1) {
    uVar11 = 0xffffffff;
  }
  if (0 < iVar1 || bVar22) {
    uVar10 = 0xffffffff;
    if (iVar12 - 1U < 0x20) {
      uVar10 = uVar11;
    }
    uVar13 = 0;
    do {
      uVar16 = 0;
      if (bVar3) {
        uVar16 = uVar17 & *(uint *)(lVar9 + uVar13 * 4);
      }
      uVar17 = 0;
      if (bVar22) {
        uVar17 = uVar10 & *(uint *)(lVar20 + uVar13 * 4);
      }
      if ((uVar17 & uVar16) != 0) {
        return 0;
      }
      uVar17 = 0xffffffff;
      if (iVar14 - 2 == uVar13) {
        uVar17 = uVar15;
      }
      bVar22 = (iVar6 >> 5) - 2 == uVar13;
      uVar13 = uVar13 + 1;
      uVar10 = 0xffffffff;
      if (bVar22) {
        uVar10 = uVar11;
      }
      bVar3 = (int)uVar13 < iVar14;
      bVar22 = (int)uVar13 < iVar6 >> 5;
    } while (bVar3 || bVar22);
  }
  iVar1 = *(int *)(param_2 + 0x18);
  lVar9 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar9 = param_2;
  }
  iVar14 = iVar1 + 0x1f;
  iVar12 = iVar1 + 0x3e;
  if (-1 < iVar14) {
    iVar12 = iVar14;
  }
  if (-1 < iVar1) {
    iVar14 = iVar1;
  }
  bVar22 = iVar1 < 1;
  uVar15 = 0xffffffff >> (-(char)(iVar1 % 0x20) & 0x1fU);
  if (iVar1 % 0x20 < 1) {
    uVar15 = 0xffffffff;
  }
  bVar3 = iVar2 < 1;
  uVar7 = CONCAT71((uint7)(uint3)((uint)iVar14 >> 8),1);
  if (!bVar22 || !bVar3) {
    uVar17 = 0xffffffff;
    if (iVar1 - 1U < 0x20) {
      uVar17 = uVar15;
    }
    uVar13 = 0;
    do {
      uVar8 = 0;
      if (!bVar22) {
        uVar8 = (ulonglong)(uVar17 & *(uint *)(lVar9 + uVar13 * 4));
      }
      uVar17 = 0;
      if (!bVar3) {
        uVar17 = uVar18 & *(uint *)(lVar21 + uVar13 * 4);
      }
      bVar22 = (uVar17 & (uint)uVar8) == 0;
      uVar7 = CONCAT71((int7)(uVar8 >> 8),bVar22);
      if (!bVar22) {
        return uVar7;
      }
      uVar17 = 0xffffffff;
      if ((iVar12 >> 5) - 2 == uVar13) {
        uVar17 = uVar15;
      }
      bVar22 = iVar5 - 2 == uVar13;
      uVar13 = uVar13 + 1;
      uVar18 = 0xffffffff;
      if (bVar22) {
        uVar18 = uVar4;
      }
      bVar22 = iVar12 >> 5 <= (int)uVar13;
      bVar3 = iVar5 <= (int)uVar13;
    } while (!bVar22 || !bVar3);
  }
  return uVar7;
}



// FUNCTION 14784a9c4 FUN_14784a9c4 body=148 status=ok
// SIG undefined FUN_14784a9c4(void)

void FUN_14784a9c4(longlong param_1,undefined4 param_2,longlong param_3)

{
  FUN_14784aa58(param_1,param_1 + 0x188,param_3 + 0x50,param_3,param_2);
  FUN_14784b040(param_1,param_1 + 0x1a8,param_3 + 0x90,param_3,param_2);
  FUN_14784b628(param_1,param_1 + 0x1c8,param_3 + 0xd0,param_3,param_2);
  FUN_14784bc10(param_1,param_1 + 0x1e8,param_3 + 0x130,param_3,param_2);
  FUN_147849054(param_1,param_3 + 0x50);
  return;
}



// FUNCTION 14784aa58 FUN_14784aa58 body=1511 status=ok
// SIG undefined FUN_14784aa58(void)

void FUN_14784aa58(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  int *piVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  int local_68;
  uint local_64;
  longlong local_60;
  int local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_3;
  FUN_147853c0e(&local_68,param_3);
  if (local_58 < *(int *)(local_60 + 0x18)) {
    lVar12 = local_60;
    do {
      lVar11 = (longlong)*(int *)(param_2[2] + 8 + (longlong)local_58 * 0x10);
      iVar8 = local_68;
      if (lVar11 != 0) {
        piVar9 = *(int **)(param_2[2] + (longlong)local_58 * 0x10);
        piVar1 = piVar9 + lVar11;
        do {
          iVar8 = *piVar9;
          lVar12 = (longlong)iVar8 * 0x208;
          lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x208) + 0x200 + lVar12);
          if (lVar11 != 0) {
            plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x208) + 0x1f8 + lVar12);
            plVar7 = plVar6 + lVar11 * 2;
            do {
              if (*(int *)(param_4 + 0x200) != 0) {
                lVar12 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_4 + 0x1f8) + lVar12) == *plVar6) {
                    iVar2 = *(int *)(param_4 + 0x18);
                    *(uint *)(param_4 + 0x18) = iVar2 + 1U;
                    if (*(uint *)(param_4 + 0x1c) < iVar2 + 1U) {
                      FUN_1446f48e2((longlong *)(param_4 + 0x10),iVar2);
                    }
                    *(int *)(*(longlong *)(param_4 + 0x10) + (longlong)iVar2 * 4) = iVar8;
                    goto LAB_14784ab59;
                  }
                  lVar12 = lVar12 + 0x10;
                } while ((longlong)*(int *)(param_4 + 0x200) << 4 != lVar12);
              }
              plVar6 = plVar6 + 2;
            } while (plVar6 != plVar7);
          }
LAB_14784ab59:
          piVar9 = piVar9 + 1;
          iVar8 = local_68;
          lVar12 = local_60;
        } while (piVar9 != piVar1);
      }
      do {
        local_58 = local_58 + 1;
        local_64 = local_64 * 2;
        if (local_64 == 0) {
          local_64 = 1;
          iVar8 = iVar8 + 1;
          local_68 = iVar8;
        }
        if (*(int *)(lVar12 + 0x18) <= local_58) goto LAB_14784abc6;
        lVar11 = *(longlong *)(lVar12 + 0x10);
        if (*(longlong *)(lVar12 + 0x10) == 0) {
          lVar11 = lVar12;
        }
      } while ((bool)local_50 != ((*(uint *)(lVar11 + (longlong)iVar8 * 4) & local_64) != 0));
    } while( true );
  }
LAB_14784abc6:
  local_70 = local_78 + 0x20;
  FUN_147853c0e(&local_68);
  if (local_58 < *(int *)(local_60 + 0x18)) {
    plVar6 = (longlong *)(param_4 + 0x10);
    do {
      lVar12 = (longlong)local_58;
      uVar10 = (ulonglong)*(int *)(*param_2 + 8 + lVar12 * 0x10);
      if (0 < (longlong)uVar10) {
        do {
          iVar8 = *(int *)(*(longlong *)(*param_2 + (longlong)local_58 * 0x10) + -4 + uVar10 * 4);
          lVar12 = (longlong)iVar8 * 0x208;
          lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x208) + 0x200 + lVar12);
          if (lVar11 != 0) {
            plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x208) + 0x1f8 + lVar12);
            plVar5 = plVar7 + lVar11 * 2;
            do {
              if (*(int *)(param_4 + 0x200) != 0) {
                lVar12 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_4 + 0x1f8) + lVar12) == *plVar7) {
                    iVar2 = *(int *)(param_4 + 0x18);
                    *(uint *)(param_4 + 0x18) = iVar2 + 1U;
                    if (*(uint *)(param_4 + 0x1c) < iVar2 + 1U) {
                      FUN_1446f48e2(plVar6,iVar2);
                    }
                    *(int *)(*plVar6 + (longlong)iVar2 * 4) = iVar8;
                    plVar7 = (longlong *)(*param_2 + (longlong)local_58 * 0x10);
                    uVar4 = *(uint *)(*param_2 + 8 + (longlong)local_58 * 0x10);
                    if (uVar10 != uVar4) {
                      iVar8 = uVar4 - (int)uVar10;
                      if (0 < iVar8) {
                        iVar8 = 1;
                      }
                      memmove((void *)(*plVar7 + (uVar10 - 1) * 4),
                              (void *)(*plVar7 + (longlong)(int)(uVar4 - iVar8) * 4),
                              (longlong)iVar8 << 2);
                      uVar4 = *(uint *)(plVar7 + 1);
                    }
                    *(uint *)(plVar7 + 1) = uVar4 - 1;
                    FUN_14479f406(plVar7);
                    goto LAB_14784ad17;
                  }
                  lVar12 = lVar12 + 0x10;
                } while ((longlong)*(int *)(param_4 + 0x200) << 4 != lVar12);
              }
              plVar7 = plVar7 + 2;
            } while (plVar7 != plVar5);
          }
LAB_14784ad17:
          bVar3 = 1 < (longlong)uVar10;
          uVar10 = uVar10 - 1;
        } while (bVar3);
        lVar12 = (longlong)local_58;
      }
      uVar10 = (ulonglong)*(int *)(param_2[2] + 8 + lVar12 * 0x10);
      iVar8 = local_68;
      if (0 < (longlong)uVar10) {
        do {
          iVar8 = *(int *)(*(longlong *)(param_2[2] + (longlong)local_58 * 0x10) + -4 + uVar10 * 4);
          lVar12 = (longlong)iVar8 * 0x208;
          lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x208) + 0x200 + lVar12);
          if (lVar11 != 0) {
            plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x208) + 0x1f8 + lVar12);
            plVar5 = plVar7 + lVar11 * 2;
            do {
              if (*(int *)(param_4 + 0x200) != 0) {
                lVar12 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_4 + 0x1f8) + lVar12) == *plVar7) {
                    iVar2 = *(int *)(param_4 + 0x18);
                    *(uint *)(param_4 + 0x18) = iVar2 + 1U;
                    if (*(uint *)(param_4 + 0x1c) < iVar2 + 1U) {
                      FUN_1446f48e2(plVar6,iVar2);
                    }
                    *(int *)(*plVar6 + (longlong)iVar2 * 4) = iVar8;
                    plVar7 = (longlong *)(param_2[2] + (longlong)local_58 * 0x10);
                    uVar4 = *(uint *)(param_2[2] + 8 + (longlong)local_58 * 0x10);
                    if (uVar10 != uVar4) {
                      iVar8 = uVar4 - (int)uVar10;
                      if (0 < iVar8) {
                        iVar8 = 1;
                      }
                      memmove((void *)(*plVar7 + (uVar10 - 1) * 4),
                              (void *)(*plVar7 + (longlong)(int)(uVar4 - iVar8) * 4),
                              (longlong)iVar8 << 2);
                      uVar4 = *(uint *)(plVar7 + 1);
                    }
                    *(uint *)(plVar7 + 1) = uVar4 - 1;
                    FUN_14479f406(plVar7);
                    goto LAB_14784ae44;
                  }
                  lVar12 = lVar12 + 0x10;
                } while ((longlong)*(int *)(param_4 + 0x200) << 4 != lVar12);
              }
              plVar7 = plVar7 + 2;
            } while (plVar7 != plVar5);
          }
LAB_14784ae44:
          bVar3 = 1 < (longlong)uVar10;
          uVar10 = uVar10 - 1;
          iVar8 = local_68;
        } while (bVar3);
      }
      do {
        local_58 = local_58 + 1;
        local_64 = local_64 * 2;
        if (local_64 == 0) {
          local_64 = 1;
          iVar8 = iVar8 + 1;
          local_68 = iVar8;
        }
        if (*(int *)(local_60 + 0x18) <= local_58) goto LAB_14784aeae;
        lVar12 = *(longlong *)(local_60 + 0x10);
        if (*(longlong *)(local_60 + 0x10) == 0) {
          lVar12 = local_60;
        }
      } while ((bool)local_50 != ((*(uint *)(lVar12 + (longlong)iVar8 * 4) & local_64) != 0));
    } while( true );
  }
LAB_14784aeae:
  FUN_147853c0e(&local_68,local_78);
  if (local_58 < *(int *)(local_60 + 0x18)) {
    do {
      lVar12 = *param_2;
      lVar11 = (longlong)local_58 * 0x10;
      iVar8 = *(int *)(lVar12 + 8 + lVar11);
      *(uint *)(lVar12 + 8 + lVar11) = iVar8 + 1U;
      if (*(uint *)(lVar12 + 0xc + lVar11) < iVar8 + 1U) {
        FUN_1446f48e2((longlong *)(lVar12 + lVar11),iVar8);
      }
      *(undefined4 *)(*(longlong *)(lVar12 + lVar11) + (longlong)iVar8 * 4) = param_5;
      iVar8 = local_68;
      do {
        local_58 = local_58 + 1;
        local_64 = local_64 * 2;
        if (local_64 == 0) {
          local_64 = 1;
          iVar8 = iVar8 + 1;
          local_68 = iVar8;
        }
        if (*(int *)(local_60 + 0x18) <= local_58) goto LAB_14784af66;
        lVar12 = *(longlong *)(local_60 + 0x10);
        if (*(longlong *)(local_60 + 0x10) == 0) {
          lVar12 = local_60;
        }
      } while ((bool)local_50 != ((*(uint *)(lVar12 + (longlong)iVar8 * 4) & local_64) != 0));
    } while( true );
  }
LAB_14784af66:
  FUN_147853c0e(&local_68,local_70);
  if (*(int *)(local_60 + 0x18) <= local_58) {
LAB_14784b018:
    if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  do {
    lVar12 = param_2[2];
    lVar11 = (longlong)local_58 * 0x10;
    iVar8 = *(int *)(lVar12 + 8 + lVar11);
    *(uint *)(lVar12 + 8 + lVar11) = iVar8 + 1U;
    if (*(uint *)(lVar12 + 0xc + lVar11) < iVar8 + 1U) {
      FUN_1446f48e2((longlong *)(lVar12 + lVar11),iVar8);
    }
    *(undefined4 *)(*(longlong *)(lVar12 + lVar11) + (longlong)iVar8 * 4) = param_5;
    iVar8 = local_68;
    do {
      local_58 = local_58 + 1;
      local_64 = local_64 * 2;
      if (local_64 == 0) {
        local_64 = 1;
        iVar8 = iVar8 + 1;
        local_68 = iVar8;
      }
      if (*(int *)(local_60 + 0x18) <= local_58) goto LAB_14784b018;
      lVar12 = *(longlong *)(local_60 + 0x10);
      if (*(longlong *)(local_60 + 0x10) == 0) {
        lVar12 = local_60;
      }
    } while ((bool)local_50 != ((*(uint *)(lVar12 + (longlong)iVar8 * 4) & local_64) != 0));
  } while( true );
}



// FUNCTION 14784b040 FUN_14784b040 body=1511 status=ok
// SIG undefined FUN_14784b040(void)

void FUN_14784b040(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  int *piVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  int local_68;
  uint local_64;
  longlong local_60;
  int local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_3;
  FUN_147853caa(&local_68,param_3);
  if (local_58 < *(int *)(local_60 + 0x18)) {
    lVar12 = local_60;
    do {
      lVar11 = (longlong)*(int *)(param_2[2] + 8 + (longlong)local_58 * 0x10);
      iVar8 = local_68;
      if (lVar11 != 0) {
        piVar9 = *(int **)(param_2[2] + (longlong)local_58 * 0x10);
        piVar1 = piVar9 + lVar11;
        do {
          iVar8 = *piVar9;
          lVar12 = (longlong)iVar8 * 0x208;
          lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x208) + 0x200 + lVar12);
          if (lVar11 != 0) {
            plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x208) + 0x1f8 + lVar12);
            plVar7 = plVar6 + lVar11 * 2;
            do {
              if (*(int *)(param_4 + 0x200) != 0) {
                lVar12 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_4 + 0x1f8) + lVar12) == *plVar6) {
                    iVar2 = *(int *)(param_4 + 0x18);
                    *(uint *)(param_4 + 0x18) = iVar2 + 1U;
                    if (*(uint *)(param_4 + 0x1c) < iVar2 + 1U) {
                      FUN_1446f48e2((longlong *)(param_4 + 0x10),iVar2);
                    }
                    *(int *)(*(longlong *)(param_4 + 0x10) + (longlong)iVar2 * 4) = iVar8;
                    goto LAB_14784b141;
                  }
                  lVar12 = lVar12 + 0x10;
                } while ((longlong)*(int *)(param_4 + 0x200) << 4 != lVar12);
              }
              plVar6 = plVar6 + 2;
            } while (plVar6 != plVar7);
          }
LAB_14784b141:
          piVar9 = piVar9 + 1;
          iVar8 = local_68;
          lVar12 = local_60;
        } while (piVar9 != piVar1);
      }
      do {
        local_58 = local_58 + 1;
        local_64 = local_64 * 2;
        if (local_64 == 0) {
          local_64 = 1;
          iVar8 = iVar8 + 1;
          local_68 = iVar8;
        }
        if (*(int *)(lVar12 + 0x18) <= local_58) goto LAB_14784b1ae;
        lVar11 = *(longlong *)(lVar12 + 0x10);
        if (*(longlong *)(lVar12 + 0x10) == 0) {
          lVar11 = lVar12;
        }
      } while ((bool)local_50 != ((*(uint *)(lVar11 + (longlong)iVar8 * 4) & local_64) != 0));
    } while( true );
  }
LAB_14784b1ae:
  local_70 = local_78 + 0x20;
  FUN_147853caa(&local_68);
  if (local_58 < *(int *)(local_60 + 0x18)) {
    plVar6 = (longlong *)(param_4 + 0x10);
    do {
      lVar12 = (longlong)local_58;
      uVar10 = (ulonglong)*(int *)(*param_2 + 8 + lVar12 * 0x10);
      if (0 < (longlong)uVar10) {
        do {
          iVar8 = *(int *)(*(longlong *)(*param_2 + (longlong)local_58 * 0x10) + -4 + uVar10 * 4);
          lVar12 = (longlong)iVar8 * 0x208;
          lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x208) + 0x200 + lVar12);
          if (lVar11 != 0) {
            plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x208) + 0x1f8 + lVar12);
            plVar5 = plVar7 + lVar11 * 2;
            do {
              if (*(int *)(param_4 + 0x200) != 0) {
                lVar12 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_4 + 0x1f8) + lVar12) == *plVar7) {
                    iVar2 = *(int *)(param_4 + 0x18);
                    *(uint *)(param_4 + 0x18) = iVar2 + 1U;
                    if (*(uint *)(param_4 + 0x1c) < iVar2 + 1U) {
                      FUN_1446f48e2(plVar6,iVar2);
                    }
                    *(int *)(*plVar6 + (longlong)iVar2 * 4) = iVar8;
                    plVar7 = (longlong *)(*param_2 + (longlong)local_58 * 0x10);
                    uVar4 = *(uint *)(*param_2 + 8 + (longlong)local_58 * 0x10);
                    if (uVar10 != uVar4) {
                      iVar8 = uVar4 - (int)uVar10;
                      if (0 < iVar8) {
                        iVar8 = 1;
                      }
                      memmove((void *)(*plVar7 + (uVar10 - 1) * 4),
                              (void *)(*plVar7 + (longlong)(int)(uVar4 - iVar8) * 4),
                              (longlong)iVar8 << 2);
                      uVar4 = *(uint *)(plVar7 + 1);
                    }
                    *(uint *)(plVar7 + 1) = uVar4 - 1;
                    FUN_14479f406(plVar7);
                    goto LAB_14784b2ff;
                  }
                  lVar12 = lVar12 + 0x10;
                } while ((longlong)*(int *)(param_4 + 0x200) << 4 != lVar12);
              }
              plVar7 = plVar7 + 2;
            } while (plVar7 != plVar5);
          }
LAB_14784b2ff:
          bVar3 = 1 < (longlong)uVar10;
          uVar10 = uVar10 - 1;
        } while (bVar3);
        lVar12 = (longlong)local_58;
      }
      uVar10 = (ulonglong)*(int *)(param_2[2] + 8 + lVar12 * 0x10);
      iVar8 = local_68;
      if (0 < (longlong)uVar10) {
        do {
          iVar8 = *(int *)(*(longlong *)(param_2[2] + (longlong)local_58 * 0x10) + -4 + uVar10 * 4);
          lVar12 = (longlong)iVar8 * 0x208;
          lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x208) + 0x200 + lVar12);
          if (lVar11 != 0) {
            plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x208) + 0x1f8 + lVar12);
            plVar5 = plVar7 + lVar11 * 2;
            do {
              if (*(int *)(param_4 + 0x200) != 0) {
                lVar12 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_4 + 0x1f8) + lVar12) == *plVar7) {
                    iVar2 = *(int *)(param_4 + 0x18);
                    *(uint *)(param_4 + 0x18) = iVar2 + 1U;
                    if (*(uint *)(param_4 + 0x1c) < iVar2 + 1U) {
                      FUN_1446f48e2(plVar6,iVar2);
                    }
                    *(int *)(*plVar6 + (longlong)iVar2 * 4) = iVar8;
                    plVar7 = (longlong *)(param_2[2] + (longlong)local_58 * 0x10);
                    uVar4 = *(uint *)(param_2[2] + 8 + (longlong)local_58 * 0x10);
                    if (uVar10 != uVar4) {
                      iVar8 = uVar4 - (int)uVar10;
                      if (0 < iVar8) {
                        iVar8 = 1;
                      }
                      memmove((void *)(*plVar7 + (uVar10 - 1) * 4),
                              (void *)(*plVar7 + (longlong)(int)(uVar4 - iVar8) * 4),
                              (longlong)iVar8 << 2);
                      uVar4 = *(uint *)(plVar7 + 1);
                    }
                    *(uint *)(plVar7 + 1) = uVar4 - 1;
                    FUN_14479f406(plVar7);
                    goto LAB_14784b42c;
                  }
                  lVar12 = lVar12 + 0x10;
                } while ((longlong)*(int *)(param_4 + 0x200) << 4 != lVar12);
              }
              plVar7 = plVar7 + 2;
            } while (plVar7 != plVar5);
          }
LAB_14784b42c:
          bVar3 = 1 < (longlong)uVar10;
          uVar10 = uVar10 - 1;
          iVar8 = local_68;
        } while (bVar3);
      }
      do {
        local_58 = local_58 + 1;
        local_64 = local_64 * 2;
        if (local_64 == 0) {
          local_64 = 1;
          iVar8 = iVar8 + 1;
          local_68 = iVar8;
        }
        if (*(int *)(local_60 + 0x18) <= local_58) goto LAB_14784b496;
        lVar12 = *(longlong *)(local_60 + 0x10);
        if (*(longlong *)(local_60 + 0x10) == 0) {
          lVar12 = local_60;
        }
      } while ((bool)local_50 != ((*(uint *)(lVar12 + (longlong)iVar8 * 4) & local_64) != 0));
    } while( true );
  }
LAB_14784b496:
  FUN_147853caa(&local_68,local_78);
  if (local_58 < *(int *)(local_60 + 0x18)) {
    do {
      lVar12 = *param_2;
      lVar11 = (longlong)local_58 * 0x10;
      iVar8 = *(int *)(lVar12 + 8 + lVar11);
      *(uint *)(lVar12 + 8 + lVar11) = iVar8 + 1U;
      if (*(uint *)(lVar12 + 0xc + lVar11) < iVar8 + 1U) {
        FUN_1446f48e2((longlong *)(lVar12 + lVar11),iVar8);
      }
      *(undefined4 *)(*(longlong *)(lVar12 + lVar11) + (longlong)iVar8 * 4) = param_5;
      iVar8 = local_68;
      do {
        local_58 = local_58 + 1;
        local_64 = local_64 * 2;
        if (local_64 == 0) {
          local_64 = 1;
          iVar8 = iVar8 + 1;
          local_68 = iVar8;
        }
        if (*(int *)(local_60 + 0x18) <= local_58) goto LAB_14784b54e;
        lVar12 = *(longlong *)(local_60 + 0x10);
        if (*(longlong *)(local_60 + 0x10) == 0) {
          lVar12 = local_60;
        }
      } while ((bool)local_50 != ((*(uint *)(lVar12 + (longlong)iVar8 * 4) & local_64) != 0));
    } while( true );
  }
LAB_14784b54e:
  FUN_147853caa(&local_68,local_70);
  if (*(int *)(local_60 + 0x18) <= local_58) {
LAB_14784b600:
    if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  do {
    lVar12 = param_2[2];
    lVar11 = (longlong)local_58 * 0x10;
    iVar8 = *(int *)(lVar12 + 8 + lVar11);
    *(uint *)(lVar12 + 8 + lVar11) = iVar8 + 1U;
    if (*(uint *)(lVar12 + 0xc + lVar11) < iVar8 + 1U) {
      FUN_1446f48e2((longlong *)(lVar12 + lVar11),iVar8);
    }
    *(undefined4 *)(*(longlong *)(lVar12 + lVar11) + (longlong)iVar8 * 4) = param_5;
    iVar8 = local_68;
    do {
      local_58 = local_58 + 1;
      local_64 = local_64 * 2;
      if (local_64 == 0) {
        local_64 = 1;
        iVar8 = iVar8 + 1;
        local_68 = iVar8;
      }
      if (*(int *)(local_60 + 0x18) <= local_58) goto LAB_14784b600;
      lVar12 = *(longlong *)(local_60 + 0x10);
      if (*(longlong *)(local_60 + 0x10) == 0) {
        lVar12 = local_60;
      }
    } while ((bool)local_50 != ((*(uint *)(lVar12 + (longlong)iVar8 * 4) & local_64) != 0));
  } while( true );
}



// FUNCTION 14784b628 FUN_14784b628 body=1511 status=ok
// SIG undefined FUN_14784b628(void)

void FUN_14784b628(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  int *piVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  int local_68;
  uint local_64;
  longlong local_60;
  int local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_3;
  FUN_147852916(&local_68,param_3);
  if (local_58 < *(int *)(local_60 + 0x18)) {
    lVar12 = local_60;
    do {
      lVar11 = (longlong)*(int *)(param_2[2] + 8 + (longlong)local_58 * 0x10);
      iVar8 = local_68;
      if (lVar11 != 0) {
        piVar9 = *(int **)(param_2[2] + (longlong)local_58 * 0x10);
        piVar1 = piVar9 + lVar11;
        do {
          iVar8 = *piVar9;
          lVar12 = (longlong)iVar8 * 0x208;
          lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x208) + 0x200 + lVar12);
          if (lVar11 != 0) {
            plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x208) + 0x1f8 + lVar12);
            plVar7 = plVar6 + lVar11 * 2;
            do {
              if (*(int *)(param_4 + 0x200) != 0) {
                lVar12 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_4 + 0x1f8) + lVar12) == *plVar6) {
                    iVar2 = *(int *)(param_4 + 0x18);
                    *(uint *)(param_4 + 0x18) = iVar2 + 1U;
                    if (*(uint *)(param_4 + 0x1c) < iVar2 + 1U) {
                      FUN_1446f48e2((longlong *)(param_4 + 0x10),iVar2);
                    }
                    *(int *)(*(longlong *)(param_4 + 0x10) + (longlong)iVar2 * 4) = iVar8;
                    goto LAB_14784b729;
                  }
                  lVar12 = lVar12 + 0x10;
                } while ((longlong)*(int *)(param_4 + 0x200) << 4 != lVar12);
              }
              plVar6 = plVar6 + 2;
            } while (plVar6 != plVar7);
          }
LAB_14784b729:
          piVar9 = piVar9 + 1;
          iVar8 = local_68;
          lVar12 = local_60;
        } while (piVar9 != piVar1);
      }
      do {
        local_58 = local_58 + 1;
        local_64 = local_64 * 2;
        if (local_64 == 0) {
          local_64 = 1;
          iVar8 = iVar8 + 1;
          local_68 = iVar8;
        }
        if (*(int *)(lVar12 + 0x18) <= local_58) goto LAB_14784b796;
        lVar11 = *(longlong *)(lVar12 + 0x10);
        if (*(longlong *)(lVar12 + 0x10) == 0) {
          lVar11 = lVar12;
        }
      } while ((bool)local_50 != ((*(uint *)(lVar11 + (longlong)iVar8 * 4) & local_64) != 0));
    } while( true );
  }
LAB_14784b796:
  local_70 = local_78 + 0x20;
  FUN_147852916(&local_68);
  if (local_58 < *(int *)(local_60 + 0x18)) {
    plVar6 = (longlong *)(param_4 + 0x10);
    do {
      lVar12 = (longlong)local_58;
      uVar10 = (ulonglong)*(int *)(*param_2 + 8 + lVar12 * 0x10);
      if (0 < (longlong)uVar10) {
        do {
          iVar8 = *(int *)(*(longlong *)(*param_2 + (longlong)local_58 * 0x10) + -4 + uVar10 * 4);
          lVar12 = (longlong)iVar8 * 0x208;
          lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x208) + 0x200 + lVar12);
          if (lVar11 != 0) {
            plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x208) + 0x1f8 + lVar12);
            plVar5 = plVar7 + lVar11 * 2;
            do {
              if (*(int *)(param_4 + 0x200) != 0) {
                lVar12 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_4 + 0x1f8) + lVar12) == *plVar7) {
                    iVar2 = *(int *)(param_4 + 0x18);
                    *(uint *)(param_4 + 0x18) = iVar2 + 1U;
                    if (*(uint *)(param_4 + 0x1c) < iVar2 + 1U) {
                      FUN_1446f48e2(plVar6,iVar2);
                    }
                    *(int *)(*plVar6 + (longlong)iVar2 * 4) = iVar8;
                    plVar7 = (longlong *)(*param_2 + (longlong)local_58 * 0x10);
                    uVar4 = *(uint *)(*param_2 + 8 + (longlong)local_58 * 0x10);
                    if (uVar10 != uVar4) {
                      iVar8 = uVar4 - (int)uVar10;
                      if (0 < iVar8) {
                        iVar8 = 1;
                      }
                      memmove((void *)(*plVar7 + (uVar10 - 1) * 4),
                              (void *)(*plVar7 + (longlong)(int)(uVar4 - iVar8) * 4),
                              (longlong)iVar8 << 2);
                      uVar4 = *(uint *)(plVar7 + 1);
                    }
                    *(uint *)(plVar7 + 1) = uVar4 - 1;
                    FUN_14479f406(plVar7);
                    goto LAB_14784b8e7;
                  }
                  lVar12 = lVar12 + 0x10;
                } while ((longlong)*(int *)(param_4 + 0x200) << 4 != lVar12);
              }
              plVar7 = plVar7 + 2;
            } while (plVar7 != plVar5);
          }
LAB_14784b8e7:
          bVar3 = 1 < (longlong)uVar10;
          uVar10 = uVar10 - 1;
        } while (bVar3);
        lVar12 = (longlong)local_58;
      }
      uVar10 = (ulonglong)*(int *)(param_2[2] + 8 + lVar12 * 0x10);
      iVar8 = local_68;
      if (0 < (longlong)uVar10) {
        do {
          iVar8 = *(int *)(*(longlong *)(param_2[2] + (longlong)local_58 * 0x10) + -4 + uVar10 * 4);
          lVar12 = (longlong)iVar8 * 0x208;
          lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x208) + 0x200 + lVar12);
          if (lVar11 != 0) {
            plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x208) + 0x1f8 + lVar12);
            plVar5 = plVar7 + lVar11 * 2;
            do {
              if (*(int *)(param_4 + 0x200) != 0) {
                lVar12 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_4 + 0x1f8) + lVar12) == *plVar7) {
                    iVar2 = *(int *)(param_4 + 0x18);
                    *(uint *)(param_4 + 0x18) = iVar2 + 1U;
                    if (*(uint *)(param_4 + 0x1c) < iVar2 + 1U) {
                      FUN_1446f48e2(plVar6,iVar2);
                    }
                    *(int *)(*plVar6 + (longlong)iVar2 * 4) = iVar8;
                    plVar7 = (longlong *)(param_2[2] + (longlong)local_58 * 0x10);
                    uVar4 = *(uint *)(param_2[2] + 8 + (longlong)local_58 * 0x10);
                    if (uVar10 != uVar4) {
                      iVar8 = uVar4 - (int)uVar10;
                      if (0 < iVar8) {
                        iVar8 = 1;
                      }
                      memmove((void *)(*plVar7 + (uVar10 - 1) * 4),
                              (void *)(*plVar7 + (longlong)(int)(uVar4 - iVar8) * 4),
                              (longlong)iVar8 << 2);
                      uVar4 = *(uint *)(plVar7 + 1);
                    }
                    *(uint *)(plVar7 + 1) = uVar4 - 1;
                    FUN_14479f406(plVar7);
                    goto LAB_14784ba14;
                  }
                  lVar12 = lVar12 + 0x10;
                } while ((longlong)*(int *)(param_4 + 0x200) << 4 != lVar12);
              }
              plVar7 = plVar7 + 2;
            } while (plVar7 != plVar5);
          }
LAB_14784ba14:
          bVar3 = 1 < (longlong)uVar10;
          uVar10 = uVar10 - 1;
          iVar8 = local_68;
        } while (bVar3);
      }
      do {
        local_58 = local_58 + 1;
        local_64 = local_64 * 2;
        if (local_64 == 0) {
          local_64 = 1;
          iVar8 = iVar8 + 1;
          local_68 = iVar8;
        }
        if (*(int *)(local_60 + 0x18) <= local_58) goto LAB_14784ba7e;
        lVar12 = *(longlong *)(local_60 + 0x10);
        if (*(longlong *)(local_60 + 0x10) == 0) {
          lVar12 = local_60;
        }
      } while ((bool)local_50 != ((*(uint *)(lVar12 + (longlong)iVar8 * 4) & local_64) != 0));
    } while( true );
  }
LAB_14784ba7e:
  FUN_147852916(&local_68,local_78);
  if (local_58 < *(int *)(local_60 + 0x18)) {
    do {
      lVar12 = *param_2;
      lVar11 = (longlong)local_58 * 0x10;
      iVar8 = *(int *)(lVar12 + 8 + lVar11);
      *(uint *)(lVar12 + 8 + lVar11) = iVar8 + 1U;
      if (*(uint *)(lVar12 + 0xc + lVar11) < iVar8 + 1U) {
        FUN_1446f48e2((longlong *)(lVar12 + lVar11),iVar8);
      }
      *(undefined4 *)(*(longlong *)(lVar12 + lVar11) + (longlong)iVar8 * 4) = param_5;
      iVar8 = local_68;
      do {
        local_58 = local_58 + 1;
        local_64 = local_64 * 2;
        if (local_64 == 0) {
          local_64 = 1;
          iVar8 = iVar8 + 1;
          local_68 = iVar8;
        }
        if (*(int *)(local_60 + 0x18) <= local_58) goto LAB_14784bb36;
        lVar12 = *(longlong *)(local_60 + 0x10);
        if (*(longlong *)(local_60 + 0x10) == 0) {
          lVar12 = local_60;
        }
      } while ((bool)local_50 != ((*(uint *)(lVar12 + (longlong)iVar8 * 4) & local_64) != 0));
    } while( true );
  }
LAB_14784bb36:
  FUN_147852916(&local_68,local_70);
  if (*(int *)(local_60 + 0x18) <= local_58) {
LAB_14784bbe8:
    if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  do {
    lVar12 = param_2[2];
    lVar11 = (longlong)local_58 * 0x10;
    iVar8 = *(int *)(lVar12 + 8 + lVar11);
    *(uint *)(lVar12 + 8 + lVar11) = iVar8 + 1U;
    if (*(uint *)(lVar12 + 0xc + lVar11) < iVar8 + 1U) {
      FUN_1446f48e2((longlong *)(lVar12 + lVar11),iVar8);
    }
    *(undefined4 *)(*(longlong *)(lVar12 + lVar11) + (longlong)iVar8 * 4) = param_5;
    iVar8 = local_68;
    do {
      local_58 = local_58 + 1;
      local_64 = local_64 * 2;
      if (local_64 == 0) {
        local_64 = 1;
        iVar8 = iVar8 + 1;
        local_68 = iVar8;
      }
      if (*(int *)(local_60 + 0x18) <= local_58) goto LAB_14784bbe8;
      lVar12 = *(longlong *)(local_60 + 0x10);
      if (*(longlong *)(local_60 + 0x10) == 0) {
        lVar12 = local_60;
      }
    } while ((bool)local_50 != ((*(uint *)(lVar12 + (longlong)iVar8 * 4) & local_64) != 0));
  } while( true );
}



// FUNCTION 14784bc10 FUN_14784bc10 body=1523 status=ok
// SIG undefined FUN_14784bc10(void)

void FUN_14784bc10(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  int *piVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  int local_68;
  uint local_64;
  longlong local_60;
  int local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_3;
  FUN_147853d46(&local_68,param_3,1);
  if (local_58 < *(int *)(local_60 + 0x18)) {
    lVar12 = local_60;
    do {
      lVar11 = (longlong)*(int *)(param_2[2] + 8 + (longlong)local_58 * 0x10);
      iVar8 = local_68;
      if (lVar11 != 0) {
        piVar9 = *(int **)(param_2[2] + (longlong)local_58 * 0x10);
        piVar1 = piVar9 + lVar11;
        do {
          iVar8 = *piVar9;
          lVar12 = (longlong)iVar8 * 0x208;
          lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x208) + 0x200 + lVar12);
          if (lVar11 != 0) {
            plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x208) + 0x1f8 + lVar12);
            plVar7 = plVar6 + lVar11 * 2;
            do {
              if (*(int *)(param_4 + 0x200) != 0) {
                lVar12 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_4 + 0x1f8) + lVar12) == *plVar6) {
                    iVar2 = *(int *)(param_4 + 0x18);
                    *(uint *)(param_4 + 0x18) = iVar2 + 1U;
                    if (*(uint *)(param_4 + 0x1c) < iVar2 + 1U) {
                      FUN_1446f48e2((longlong *)(param_4 + 0x10),iVar2);
                    }
                    *(int *)(*(longlong *)(param_4 + 0x10) + (longlong)iVar2 * 4) = iVar8;
                    goto LAB_14784bd14;
                  }
                  lVar12 = lVar12 + 0x10;
                } while ((longlong)*(int *)(param_4 + 0x200) << 4 != lVar12);
              }
              plVar6 = plVar6 + 2;
            } while (plVar6 != plVar7);
          }
LAB_14784bd14:
          piVar9 = piVar9 + 1;
          iVar8 = local_68;
          lVar12 = local_60;
        } while (piVar9 != piVar1);
      }
      do {
        local_58 = local_58 + 1;
        local_64 = local_64 * 2;
        if (local_64 == 0) {
          local_64 = 1;
          iVar8 = iVar8 + 1;
          local_68 = iVar8;
        }
        if (*(int *)(lVar12 + 0x18) <= local_58) goto LAB_14784bd81;
        lVar11 = *(longlong *)(lVar12 + 0x10);
        if (*(longlong *)(lVar12 + 0x10) == 0) {
          lVar11 = lVar12;
        }
      } while ((bool)local_50 != ((*(uint *)(lVar11 + (longlong)iVar8 * 4) & local_64) != 0));
    } while( true );
  }
LAB_14784bd81:
  local_70 = local_78 + 0x20;
  FUN_147853d46(&local_68,local_70,1);
  if (local_58 < *(int *)(local_60 + 0x18)) {
    plVar6 = (longlong *)(param_4 + 0x10);
    do {
      lVar12 = (longlong)local_58;
      uVar10 = (ulonglong)*(int *)(*param_2 + 8 + lVar12 * 0x10);
      if (0 < (longlong)uVar10) {
        do {
          iVar8 = *(int *)(*(longlong *)(*param_2 + (longlong)local_58 * 0x10) + -4 + uVar10 * 4);
          lVar12 = (longlong)iVar8 * 0x208;
          lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x208) + 0x200 + lVar12);
          if (lVar11 != 0) {
            plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x208) + 0x1f8 + lVar12);
            plVar5 = plVar7 + lVar11 * 2;
            do {
              if (*(int *)(param_4 + 0x200) != 0) {
                lVar12 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_4 + 0x1f8) + lVar12) == *plVar7) {
                    iVar2 = *(int *)(param_4 + 0x18);
                    *(uint *)(param_4 + 0x18) = iVar2 + 1U;
                    if (*(uint *)(param_4 + 0x1c) < iVar2 + 1U) {
                      FUN_1446f48e2(plVar6,iVar2);
                    }
                    *(int *)(*plVar6 + (longlong)iVar2 * 4) = iVar8;
                    plVar7 = (longlong *)(*param_2 + (longlong)local_58 * 0x10);
                    uVar4 = *(uint *)(*param_2 + 8 + (longlong)local_58 * 0x10);
                    if (uVar10 != uVar4) {
                      iVar8 = uVar4 - (int)uVar10;
                      if (0 < iVar8) {
                        iVar8 = 1;
                      }
                      memmove((void *)(*plVar7 + (uVar10 - 1) * 4),
                              (void *)(*plVar7 + (longlong)(int)(uVar4 - iVar8) * 4),
                              (longlong)iVar8 << 2);
                      uVar4 = *(uint *)(plVar7 + 1);
                    }
                    *(uint *)(plVar7 + 1) = uVar4 - 1;
                    FUN_14479f406(plVar7);
                    goto LAB_14784bed5;
                  }
                  lVar12 = lVar12 + 0x10;
                } while ((longlong)*(int *)(param_4 + 0x200) << 4 != lVar12);
              }
              plVar7 = plVar7 + 2;
            } while (plVar7 != plVar5);
          }
LAB_14784bed5:
          bVar3 = 1 < (longlong)uVar10;
          uVar10 = uVar10 - 1;
        } while (bVar3);
        lVar12 = (longlong)local_58;
      }
      uVar10 = (ulonglong)*(int *)(param_2[2] + 8 + lVar12 * 0x10);
      iVar8 = local_68;
      if (0 < (longlong)uVar10) {
        do {
          iVar8 = *(int *)(*(longlong *)(param_2[2] + (longlong)local_58 * 0x10) + -4 + uVar10 * 4);
          lVar12 = (longlong)iVar8 * 0x208;
          lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x208) + 0x200 + lVar12);
          if (lVar11 != 0) {
            plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x208) + 0x1f8 + lVar12);
            plVar5 = plVar7 + lVar11 * 2;
            do {
              if (*(int *)(param_4 + 0x200) != 0) {
                lVar12 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_4 + 0x1f8) + lVar12) == *plVar7) {
                    iVar2 = *(int *)(param_4 + 0x18);
                    *(uint *)(param_4 + 0x18) = iVar2 + 1U;
                    if (*(uint *)(param_4 + 0x1c) < iVar2 + 1U) {
                      FUN_1446f48e2(plVar6,iVar2);
                    }
                    *(int *)(*plVar6 + (longlong)iVar2 * 4) = iVar8;
                    plVar7 = (longlong *)(param_2[2] + (longlong)local_58 * 0x10);
                    uVar4 = *(uint *)(param_2[2] + 8 + (longlong)local_58 * 0x10);
                    if (uVar10 != uVar4) {
                      iVar8 = uVar4 - (int)uVar10;
                      if (0 < iVar8) {
                        iVar8 = 1;
                      }
                      memmove((void *)(*plVar7 + (uVar10 - 1) * 4),
                              (void *)(*plVar7 + (longlong)(int)(uVar4 - iVar8) * 4),
                              (longlong)iVar8 << 2);
                      uVar4 = *(uint *)(plVar7 + 1);
                    }
                    *(uint *)(plVar7 + 1) = uVar4 - 1;
                    FUN_14479f406(plVar7);
                    goto LAB_14784c002;
                  }
                  lVar12 = lVar12 + 0x10;
                } while ((longlong)*(int *)(param_4 + 0x200) << 4 != lVar12);
              }
              plVar7 = plVar7 + 2;
            } while (plVar7 != plVar5);
          }
LAB_14784c002:
          bVar3 = 1 < (longlong)uVar10;
          uVar10 = uVar10 - 1;
          iVar8 = local_68;
        } while (bVar3);
      }
      do {
        local_58 = local_58 + 1;
        local_64 = local_64 * 2;
        if (local_64 == 0) {
          local_64 = 1;
          iVar8 = iVar8 + 1;
          local_68 = iVar8;
        }
        if (*(int *)(local_60 + 0x18) <= local_58) goto LAB_14784c06c;
        lVar12 = *(longlong *)(local_60 + 0x10);
        if (*(longlong *)(local_60 + 0x10) == 0) {
          lVar12 = local_60;
        }
      } while ((bool)local_50 != ((*(uint *)(lVar12 + (longlong)iVar8 * 4) & local_64) != 0));
    } while( true );
  }
LAB_14784c06c:
  FUN_147853d46(&local_68,local_78,1);
  if (local_58 < *(int *)(local_60 + 0x18)) {
    do {
      lVar12 = *param_2;
      lVar11 = (longlong)local_58 * 0x10;
      iVar8 = *(int *)(lVar12 + 8 + lVar11);
      *(uint *)(lVar12 + 8 + lVar11) = iVar8 + 1U;
      if (*(uint *)(lVar12 + 0xc + lVar11) < iVar8 + 1U) {
        FUN_1446f48e2((longlong *)(lVar12 + lVar11),iVar8);
      }
      *(undefined4 *)(*(longlong *)(lVar12 + lVar11) + (longlong)iVar8 * 4) = param_5;
      iVar8 = local_68;
      do {
        local_58 = local_58 + 1;
        local_64 = local_64 * 2;
        if (local_64 == 0) {
          local_64 = 1;
          iVar8 = iVar8 + 1;
          local_68 = iVar8;
        }
        if (*(int *)(local_60 + 0x18) <= local_58) goto LAB_14784c127;
        lVar12 = *(longlong *)(local_60 + 0x10);
        if (*(longlong *)(local_60 + 0x10) == 0) {
          lVar12 = local_60;
        }
      } while ((bool)local_50 != ((*(uint *)(lVar12 + (longlong)iVar8 * 4) & local_64) != 0));
    } while( true );
  }
LAB_14784c127:
  FUN_147853d46(&local_68,local_70,1);
  if (local_58 < *(int *)(local_60 + 0x18)) {
    do {
      lVar12 = param_2[2];
      lVar11 = (longlong)local_58 * 0x10;
      iVar8 = *(int *)(lVar12 + 8 + lVar11);
      *(uint *)(lVar12 + 8 + lVar11) = iVar8 + 1U;
      if (*(uint *)(lVar12 + 0xc + lVar11) < iVar8 + 1U) {
        FUN_1446f48e2((longlong *)(lVar12 + lVar11),iVar8);
      }
      *(undefined4 *)(*(longlong *)(lVar12 + lVar11) + (longlong)iVar8 * 4) = param_5;
      iVar8 = local_68;
      do {
        local_58 = local_58 + 1;
        local_64 = local_64 * 2;
        if (local_64 == 0) {
          local_64 = 1;
          iVar8 = iVar8 + 1;
          local_68 = iVar8;
        }
        if (*(int *)(local_60 + 0x18) <= local_58) goto LAB_14784c1dc;
        lVar12 = *(longlong *)(local_60 + 0x10);
        if (*(longlong *)(local_60 + 0x10) == 0) {
          lVar12 = local_60;
        }
      } while ((bool)local_50 != ((*(uint *)(lVar12 + (longlong)iVar8 * 4) & local_64) != 0));
    } while( true );
  }
LAB_14784c1dc:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14784c204 FUN_14784c204 body=155 status=ok
// SIG undefined FUN_14784c204(void)

void FUN_14784c204(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x1dc) < (int)param_2[1] * (int)param_2[1]) {
    *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) + 1;
    iVar1 = *(int *)(param_1 + 0x18);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      lVar3 = 0;
      do {
        local_48 = (undefined4)*param_2;
        uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_40 = (undefined4)param_2[1];
        uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
        FUN_14784c204((longlong)*(int *)(lVar2 + lVar3) * 0x208 + *param_2,&local_48);
        lVar3 = lVar3 + 4;
      } while ((longlong)iVar1 * 4 != lVar3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14784c2a0 FUN_14784c2a0 body=641 status=ok
// SIG undefined FUN_14784c2a0(void)

void FUN_14784c2a0(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  void *local_78;
  ulonglong uStack_70;
  void *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  local_50 = param_1;
  FUN_1447a1747(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar2 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_1408be2c4(param_2,0);
  }
  FUN_1400021e4(&local_50,&local_60);
  local_78 = (void *)0x0;
  uStack_70 = 0;
  while( true ) {
    FUN_140056680(&local_88,&DAT_149e0635c);
    cVar4 = FUN_1407cdba6(&local_60,&local_88,&local_78,&local_60);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    iVar2 = (int)param_2[1];
    uVar5 = iVar2 + 1;
    *(uint *)(param_2 + 1) = uVar5;
    if (cVar4 == '\0') break;
    if (*(uint *)((longlong)param_2 + 0xc) < uVar5) {
      FUN_1447a1bd6(param_2,iVar2);
    }
    pvVar3 = local_78;
    lVar10 = *param_2;
    lVar8 = (longlong)iVar2 * 0x10;
    puVar1 = (undefined8 *)(lVar10 + lVar8);
    *(undefined8 *)(lVar10 + lVar8) = 0;
    lVar9 = (longlong)(int)uStack_70;
    *(int *)(lVar10 + 8 + lVar8) = (int)uStack_70;
    if (lVar9 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar1,uStack_70 & 0xffffffff,0);
      memcpy((void *)*puVar1,pvVar3,lVar9 * 2);
    }
  }
  if (*(uint *)((longlong)param_2 + 0xc) < uVar5) {
    FUN_1447a1bd6(param_2,iVar2);
  }
  pvVar3 = local_60;
  lVar10 = *param_2;
  lVar8 = (longlong)iVar2 * 0x10;
  puVar1 = (undefined8 *)(lVar10 + lVar8);
  *(undefined8 *)(lVar10 + lVar8) = 0;
  *(int *)(lVar10 + 8 + lVar8) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,local_58,0);
    memcpy((void *)*puVar1,pvVar3,(longlong)local_58 * 2);
  }
  if (1 < (int)param_2[1]) {
    lVar10 = 1;
    lVar8 = 0x10;
    do {
      lVar9 = *param_2;
      puVar7 = &DAT_149dfb77a;
      if (*(int *)(lVar9 + 8 + lVar8) != 0) {
        puVar7 = *(undefined2 **)(lVar9 + lVar8);
      }
      puVar6 = &DAT_149dfb77a;
      if (*(int *)(lVar9 + -8 + lVar8) != 0) {
        puVar6 = *(undefined2 **)(lVar9 + -0x10 + lVar8);
      }
      FUN_140002266(&local_88,L"%s.%s",puVar6,puVar7);
      lVar9 = *param_2;
      if ((longlong *)(lVar8 + lVar9) != &local_88) {
        if (*(longlong *)(lVar9 + lVar8) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar9 + lVar8) = local_88;
        local_88 = 0;
        *(undefined4 *)(lVar9 + 8 + lVar8) = (undefined4)local_80;
        *(undefined4 *)(lVar9 + 0xc + lVar8) = local_80._4_4_;
        local_80 = 0;
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      lVar10 = lVar10 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar10 < (int)param_2[1]);
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14784c522 FUN_14784c522 body=137 status=ok
// SIG undefined FUN_14784c522(void)

void FUN_14784c522(longlong param_1)

{
  FUN_14784dd78(*(undefined8 *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x200));
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_1400020a8();
  }
  FUN_14784fd52(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14784c5ac FUN_14784c5ac body=69 status=ok
// SIG undefined FUN_14784c5ac(void)

void FUN_14784c5ac(longlong param_1)

{
  FUN_147849b5c(param_1 + 0x1e8);
  FUN_147849b5c(param_1 + 0x1c8);
  FUN_147849b5c(param_1 + 0x1a8);
  FUN_147849b5c(param_1 + 0x188);
  FUN_14784fd52(param_1);
  return;
}



// FUNCTION 14784c5f2 FUN_14784c5f2 body=48 status=ok
// SIG undefined FUN_14784c5f2(void)

undefined8 FUN_14784c5f2(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559("Runtime\\Engine\\Public\\Subsystems/WorldSubsystem.h",0x44,
                L"Pure virtual not implemented (%s)",L"UTickableWorldSubsystem::GetStatId");
  return param_2;
}



// FUNCTION 14784c622 FUN_14784c622 body=45 status=ok
// SIG undefined FUN_14784c622(void)

longlong FUN_14784c622(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1410891e4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14784c650 FUN_14784c650 body=32 status=ok
// SIG undefined FUN_14784c650(void)

undefined8 FUN_14784c650(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FMassEntityManager");
  return param_2;
}



// FUNCTION 14784c670 FUN_14784c670 body=41 status=ok
// SIG undefined FUN_14784c670(void)

void FUN_14784c670(void)

{
  FUN_140033559("Runtime\\MassEntity\\Public\\MassProcessor.h",0x77,
                L"Pure virtual not implemented (%s)",L"UMassProcessor::ConfigureQueries");
  return;
}



// FUNCTION 14784c69a FUN_14784c69a body=41 status=ok
// SIG undefined FUN_14784c69a(void)

void FUN_14784c69a(void)

{
  FUN_140033559("Runtime\\MassEntity\\Public\\MassProcessor.h",0x79,
                L"Pure virtual not implemented (%s)",L"UMassProcessor::Execute");
  return;
}



// FUNCTION 14784c70c FUN_14784c70c body=59 status=ok
// SIG undefined FUN_14784c70c(void)

undefined8 FUN_14784c70c(longlong *param_1)

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



// FUNCTION 14784c7ae FUN_14784c7ae body=89 status=ok
// SIG undefined FUN_14784c7ae(void)

void FUN_14784c7ae(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14784c808 FUN_14784c808 body=85 status=ok
// SIG undefined FUN_14784c808(void)

ulonglong FUN_14784c808(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = -*(int *)(param_1 + 0x5c) & (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x5c)) - 1U;
  uVar1 = (*(int *)(param_2 + 0x58) + *(int *)(param_2 + 0x5c)) - 1;
  uVar4 = -*(int *)(param_2 + 0x5c) & uVar1;
  uVar2 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  if ((int)uVar3 <= (int)uVar4) {
    if (uVar3 == uVar4) {
      uVar1 = (int)*(undefined8 *)(param_2 + 0x18) - (int)*(undefined8 *)(param_1 + 0x18);
      if (uVar1 == 0) {
        uVar1 = (int)((ulonglong)*(undefined8 *)(param_2 + 0x18) >> 0x20) -
                (int)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
      }
      uVar2 = (ulonglong)(uVar1 >> 0x1f);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 14784c85e FUN_14784c85e body=39 status=ok
// SIG undefined FUN_14784c85e(void)

void FUN_14784c85e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_14784c886(param_1 + 0x10);
  return;
}



// FUNCTION 14784c886 FUN_14784c886 body=61 status=ok
// SIG undefined FUN_14784c886(void)

void FUN_14784c886(longlong *param_1)

{
  FUN_14784c8f4();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14784c8c4 FUN_14784c8c4 body=48 status=ok
// SIG undefined FUN_14784c8c4(void)

void FUN_14784c8c4(longlong param_1)

{
  FUN_14784c8f4();
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 14784c8f4 FUN_14784c8f4 body=108 status=ok
// SIG undefined FUN_14784c8f4(void)

void FUN_14784c8f4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  iVar5 = *(int *)(param_1 + 1);
  if (iVar5 != 0) {
    plVar6 = (longlong *)*param_1;
    do {
      lVar3 = *plVar6;
      if (lVar3 != 0) {
        lVar7 = 0x3ff0;
        do {
          plVar4 = *(longlong **)(lVar3 + -0x10 + lVar7);
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
          lVar7 = lVar7 + -0x18;
        } while (lVar7 != 0);
        FUN_1400020a8(lVar3);
      }
      plVar6 = plVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 14784c966 FUN_14784c966 body=149 status=ok
// SIG undefined FUN_14784c966(void)

void FUN_14784c966(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_1;
  (*(code *)(&PTR_FUN_14a5b3c40)[*(byte *)(puVar1 + 8)])(puVar1);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *puVar1 = &PTR_FUN_14a5b3c70;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14784c8c4(puVar1 + 2);
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 8) = 1;
  FUN_147847146(*param_1,local_38);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14784c9fc FUN_14784c9fc body=56 status=ok
// SIG undefined FUN_14784c9fc(void)

longlong FUN_14784c9fc(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_14784c886(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14784ca34 FUN_14784ca34 body=38 status=ok
// SIG undefined FUN_14784ca34(void)

undefined8 FUN_14784ca34(undefined8 param_1,int param_2)

{
  FUN_145a48fee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14784ca5a FUN_14784ca5a body=1796 status=ok
// SIG undefined FUN_14784ca5a(void)

void FUN_14784ca5a(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cabd9d8) && (FUN_144b3d300(&DAT_14cabd9d8), DAT_14cabd9d8 == -1)) {
    if (DAT_14cabd4d8 == 0) {
      uVar11 = FUN_140f5467b();
      DAT_14cabd4d8 = FUN_140002ddd(FUN_14636aa74,uVar11,L"MassFragment");
    }
    DAT_14cabd9d0 = DAT_14cabd4d8;
    _Init_thread_footer(&DAT_14cabd9d8);
  }
  uVar2 = DAT_14cabd9d0;
  uVar4 = *(uint *)(param_1 + 0x18);
  lVar14 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar14 = param_1;
  }
  uVar1 = 0xffffffff >> (-(char)((int)uVar4 % 0x20) & 0x1fU);
  if ((int)uVar4 % 0x20 < 1) {
    uVar1 = 0xffffffff;
  }
  if ((int)uVar4 < 1) {
    iVar3 = 0;
  }
  else {
    uVar15 = (ulonglong)uVar4 + 0x1f >> 5;
    uVar12 = 0xffffffff;
    if (uVar4 < 0x21) {
      uVar12 = uVar1;
    }
    uVar13 = 0;
    iVar3 = 0;
    iVar9 = 0;
    do {
      if (iVar9 == 0) {
        iVar9 = iVar3;
      }
      if ((uVar12 & *(uint *)(lVar14 + uVar13 * 4)) == 0) {
        iVar9 = FUN_144a78877(iVar9,0);
      }
      else {
        iVar3 = FUN_144a78877();
        iVar9 = 0;
      }
      bVar16 = (int)uVar15 - 2 == uVar13;
      uVar13 = uVar13 + 1;
      uVar12 = 0xffffffff;
      if (bVar16) {
        uVar12 = uVar1;
      }
    } while (uVar15 != uVar13);
  }
  uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar5 = FUN_144a78877(uVar4 >> 0x10 ^ uVar4,iVar3);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cabd9e8) && (FUN_144b3d300(&DAT_14cabd9e8), DAT_14cabd9e8 == -1)) {
    if (DAT_14cabd4f0 == 0) {
      uVar11 = FUN_140f5467b();
      DAT_14cabd4f0 = FUN_140002ddd(FUN_14636aad4,uVar11,L"MassTag");
    }
    DAT_14cabd9e0 = DAT_14cabd4f0;
    _Init_thread_footer(&DAT_14cabd9e8);
  }
  uVar2 = DAT_14cabd9e0;
  uVar4 = *(uint *)(param_2 + 0x18);
  lVar14 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar14 = param_2;
  }
  uVar1 = 0xffffffff >> (-(char)((int)uVar4 % 0x20) & 0x1fU);
  if ((int)uVar4 % 0x20 < 1) {
    uVar1 = 0xffffffff;
  }
  if ((int)uVar4 < 1) {
    iVar3 = 0;
  }
  else {
    uVar15 = (ulonglong)uVar4 + 0x1f >> 5;
    uVar12 = 0xffffffff;
    if (uVar4 < 0x21) {
      uVar12 = uVar1;
    }
    uVar13 = 0;
    iVar3 = 0;
    iVar9 = 0;
    do {
      if (iVar9 == 0) {
        iVar9 = iVar3;
      }
      if ((uVar12 & *(uint *)(lVar14 + uVar13 * 4)) == 0) {
        iVar9 = FUN_144a78877(iVar9,0);
      }
      else {
        iVar3 = FUN_144a78877();
        iVar9 = 0;
      }
      bVar16 = (int)uVar15 - 2 == uVar13;
      uVar13 = uVar13 + 1;
      uVar12 = 0xffffffff;
      if (bVar16) {
        uVar12 = uVar1;
      }
    } while (uVar15 != uVar13);
  }
  uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar6 = FUN_144a78877(uVar4 >> 0x10 ^ uVar4,iVar3);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cabd9f8) && (FUN_144b3d300(&DAT_14cabd9f8), DAT_14cabd9f8 == -1)) {
    if (DAT_14cabd508 == 0) {
      uVar11 = FUN_140f5467b();
      DAT_14cabd508 = FUN_140002ddd(FUN_14636ab34,uVar11,L"MassChunkFragment");
    }
    DAT_14cabd9f0 = DAT_14cabd508;
    _Init_thread_footer(&DAT_14cabd9f8);
  }
  uVar2 = DAT_14cabd9f0;
  uVar4 = *(uint *)(param_3 + 0x18);
  lVar14 = *(longlong *)(param_3 + 0x10);
  if (*(longlong *)(param_3 + 0x10) == 0) {
    lVar14 = param_3;
  }
  uVar1 = 0xffffffff >> (-(char)((int)uVar4 % 0x20) & 0x1fU);
  if ((int)uVar4 % 0x20 < 1) {
    uVar1 = 0xffffffff;
  }
  if ((int)uVar4 < 1) {
    iVar3 = 0;
  }
  else {
    uVar15 = (ulonglong)uVar4 + 0x1f >> 5;
    uVar12 = 0xffffffff;
    if (uVar4 < 0x21) {
      uVar12 = uVar1;
    }
    uVar13 = 0;
    iVar3 = 0;
    iVar9 = 0;
    do {
      if (iVar9 == 0) {
        iVar9 = iVar3;
      }
      if ((uVar12 & *(uint *)(lVar14 + uVar13 * 4)) == 0) {
        iVar9 = FUN_144a78877(iVar9,0);
      }
      else {
        iVar3 = FUN_144a78877();
        iVar9 = 0;
      }
      bVar16 = (int)uVar15 - 2 == uVar13;
      uVar13 = uVar13 + 1;
      uVar12 = 0xffffffff;
      if (bVar16) {
        uVar12 = uVar1;
      }
    } while (uVar15 != uVar13);
  }
  uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar7 = FUN_144a78877(uVar4 >> 0x10 ^ uVar4,iVar3);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cabda08) && (FUN_144b3d300(&DAT_14cabda08), DAT_14cabda08 == -1)) {
    if (DAT_14cabd520 == 0) {
      uVar11 = FUN_140f5467b();
      DAT_14cabd520 = FUN_140002ddd(FUN_14636ab94,uVar11,L"MassSharedFragment");
    }
    DAT_14cabda00 = DAT_14cabd520;
    _Init_thread_footer(&DAT_14cabda08);
  }
  uVar2 = DAT_14cabda00;
  uVar4 = *(uint *)(param_4 + 0x18);
  lVar14 = *(longlong *)(param_4 + 0x10);
  if (*(longlong *)(param_4 + 0x10) == 0) {
    lVar14 = param_4;
  }
  uVar1 = 0xffffffff >> (-(char)((int)uVar4 % 0x20) & 0x1fU);
  if ((int)uVar4 % 0x20 < 1) {
    uVar1 = 0xffffffff;
  }
  if ((int)uVar4 < 1) {
    iVar3 = 0;
  }
  else {
    uVar15 = (ulonglong)uVar4 + 0x1f >> 5;
    uVar12 = 0xffffffff;
    if (uVar4 < 0x21) {
      uVar12 = uVar1;
    }
    uVar13 = 0;
    iVar3 = 0;
    iVar9 = 0;
    do {
      if (iVar9 == 0) {
        iVar9 = iVar3;
      }
      if ((uVar12 & *(uint *)(lVar14 + uVar13 * 4)) == 0) {
        iVar9 = FUN_144a78877(iVar9,0);
      }
      else {
        iVar3 = FUN_144a78877();
        iVar9 = 0;
      }
      bVar16 = (int)uVar15 - 2 == uVar13;
      uVar13 = uVar13 + 1;
      uVar12 = 0xffffffff;
      if (bVar16) {
        uVar12 = uVar1;
      }
    } while (uVar15 != uVar13);
  }
  uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar8 = FUN_144a78877(uVar4 >> 0x10 ^ uVar4,iVar3);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cabda18) && (FUN_144b3d300(&DAT_14cabda18), DAT_14cabda18 == -1)) {
    if (DAT_14cabd538 == 0) {
      uVar11 = FUN_140f5467b();
      DAT_14cabd538 = FUN_140002ddd(FUN_14636abf4,uVar11,L"MassConstSharedFragment");
    }
    DAT_14cabda10 = DAT_14cabd538;
    _Init_thread_footer(&DAT_14cabda18);
  }
  uVar2 = DAT_14cabda10;
  uVar4 = *(uint *)(param_5 + 0x18);
  lVar14 = *(longlong *)(param_5 + 0x10);
  if (*(longlong *)(param_5 + 0x10) == 0) {
    lVar14 = param_5;
  }
  uVar1 = 0xffffffff >> (-(char)((int)uVar4 % 0x20) & 0x1fU);
  if ((int)uVar4 % 0x20 < 1) {
    uVar1 = 0xffffffff;
  }
  if ((int)uVar4 < 1) {
    iVar3 = 0;
  }
  else {
    uVar15 = (ulonglong)uVar4 + 0x1f >> 5;
    uVar12 = 0xffffffff;
    if (uVar4 < 0x21) {
      uVar12 = uVar1;
    }
    uVar13 = 0;
    iVar3 = 0;
    iVar9 = 0;
    do {
      if (iVar9 == 0) {
        iVar9 = iVar3;
      }
      if ((uVar12 & *(uint *)(lVar14 + uVar13 * 4)) == 0) {
        iVar9 = FUN_144a78877(iVar9,0);
      }
      else {
        iVar3 = FUN_144a78877();
        iVar9 = 0;
      }
      bVar16 = (int)uVar15 - 2 == uVar13;
      uVar13 = uVar13 + 1;
      uVar12 = 0xffffffff;
      if (bVar16) {
        uVar12 = uVar1;
      }
    } while (uVar15 != uVar13);
  }
  uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar10 = FUN_144a78877(uVar4 >> 0x10 ^ uVar4,iVar3);
  uVar5 = FUN_144a78877(uVar5,uVar6);
  uVar5 = FUN_144a78877(uVar5,uVar7);
  uVar5 = FUN_144a78877(uVar5,uVar8);
  FUN_144a78877(uVar5,uVar10);
  return;
}



// FUNCTION 14784d15e FUN_14784d15e body=145 status=ok
// SIG undefined FUN_14784d15e(void)

undefined8 FUN_14784d15e(uint *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar1 = param_1[6];
  puVar5 = *(uint **)(param_1 + 4);
  if (*(uint **)(param_1 + 4) == (uint *)0x0) {
    puVar5 = param_1;
  }
  uVar6 = 0xffffffff >> (-(char)((int)uVar1 % 0x20) & 0x1fU);
  if ((int)uVar1 % 0x20 < 1) {
    uVar6 = 0xffffffff;
  }
  if ((int)uVar1 < 1) {
    uVar3 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
  }
  else {
    uVar7 = 0xffffffff;
    if (uVar1 < 0x21) {
      uVar7 = uVar6;
    }
    if ((*puVar5 & uVar7) == 0) {
      uVar4 = (ulonglong)uVar1 + 0x1f >> 5;
      uVar2 = 1;
      do {
        uVar8 = uVar2;
        if (uVar4 == uVar8) break;
        uVar7 = 0xffffffff;
        if (uVar8 - ((int)uVar4 - 2) == 1) {
          uVar7 = uVar6;
        }
        uVar2 = uVar8 + 1;
      } while ((puVar5[uVar8] & uVar7) == 0);
      uVar3 = CONCAT71((uint7)((ulonglong)uVar1 + 0x1f >> 0xd),uVar4 <= uVar8);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 14784d1f0 FUN_14784d1f0 body=310 status=ok
// SIG undefined FUN_14784d1f0(void)

undefined8 FUN_14784d1f0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  bool bVar16;
  
  lVar12 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar12 = param_1;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  iVar13 = iVar2 + 0x3e;
  if (-1 < iVar2 + 0x1f) {
    iVar13 = iVar2 + 0x1f;
  }
  iVar3 = *(int *)(param_2 + 0x18);
  iVar1 = iVar3 + 0x1f;
  iVar6 = iVar3;
  if (iVar3 < 0) {
    iVar6 = iVar1;
  }
  bVar16 = iVar2 < 1;
  uVar4 = 0xffffffff >> (-(char)(iVar2 % 0x20) & 0x1fU);
  if (iVar2 % 0x20 < 1) {
    uVar4 = 0xffffffff;
  }
  lVar14 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar14 = param_2;
  }
  iVar9 = iVar3 + 0x3e;
  if (-1 < iVar1) {
    iVar9 = iVar1;
  }
  uVar5 = 0xffffffff >> (-(char)(iVar3 % 0x20) & 0x1fU);
  if (iVar3 % 0x20 < 1) {
    uVar5 = 0xffffffff;
  }
  uVar7 = CONCAT71((uint7)(uint3)((uint)iVar6 >> 8),1);
  if (!bVar16 || 0 < iVar3) {
    iVar9 = iVar9 >> 5;
    uVar10 = 0xffffffff;
    if (iVar3 - 1U < 0x20) {
      uVar10 = uVar5;
    }
    uVar11 = 0xffffffff;
    if (iVar2 - 1U < 0x20) {
      uVar11 = uVar4;
    }
    uVar15 = 0;
    do {
      uVar8 = 0;
      if (!bVar16) {
        uVar8 = (ulonglong)(uVar11 & *(uint *)(lVar12 + uVar15 * 4));
      }
      uVar11 = 0;
      if ((longlong)uVar15 < (longlong)iVar9) {
        uVar11 = uVar10 & *(uint *)(lVar14 + uVar15 * 4);
      }
      bVar16 = (uint)uVar8 == uVar11;
      uVar7 = CONCAT71((int7)(uVar8 >> 8),bVar16);
      if (!bVar16) {
        return uVar7;
      }
      uVar11 = 0xffffffff;
      if ((iVar13 >> 5) - 2 == uVar15) {
        uVar11 = uVar4;
      }
      uVar10 = 0xffffffff;
      if (iVar9 - 2 == uVar15) {
        uVar10 = uVar5;
      }
      uVar15 = uVar15 + 1;
      bVar16 = iVar13 >> 5 <= (int)uVar15;
    } while ((int)uVar15 < iVar9 || !bVar16);
  }
  return uVar7;
}



// FUNCTION 14784d326 FUN_14784d326 body=115 status=ok
// SIG undefined FUN_14784d326(void)

undefined8 * FUN_14784d326(undefined8 *param_1,undefined8 *param_2)

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
    FUN_14784d39a(param_1,iVar1);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
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



// FUNCTION 14784d39a FUN_14784d39a body=106 status=ok
// SIG undefined FUN_14784d39a(void)

undefined8 FUN_14784d39a(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0xc,4);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0xc)) {
    uVar5 = uVar2 / 0xc & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0xc,4);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 14784d404 FUN_14784d404 body=62 status=ok
// SIG undefined FUN_14784d404(void)

void FUN_14784d404(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14784d442 FUN_14784d442 body=129 status=ok
// SIG undefined FUN_14784d442(void)

void FUN_14784d442(undefined8 param_1,longlong param_2)

{
  FUN_14784829a(param_2);
  *(undefined8 *)(param_2 + 0x278) = 0;
  *(undefined8 *)(param_2 + 0x280) = 0x8000000000;
  *(undefined8 *)(param_2 + 0x298) = 0;
  *(undefined8 *)(param_2 + 0x2a0) = 0x8000000000;
  *(undefined1 *)(param_2 + 0x2a8) = 0;
  *(undefined8 *)(param_2 + 0x2b0) = 0;
  *(undefined8 *)(param_2 + 0x2c0) = 0;
  *(undefined8 *)(param_2 + 0x2f0) = 0;
  *(undefined8 *)(param_2 + 0x2f8) = 0;
  *(undefined8 *)(param_2 + 0x300) = 0;
  *(undefined8 *)(param_2 + 0x308) = 0;
  *(undefined8 *)(param_2 + 0x310) = 0;
  *(byte *)(param_2 + 0x318) = (*(byte *)(param_2 + 0x318) & 0xfc) + 1;
  *(undefined1 *)(param_2 + 0x319) = 0;
  return;
}



// FUNCTION 14784d4c4 FUN_14784d4c4 body=129 status=ok
// SIG undefined FUN_14784d4c4(void)

void FUN_14784d4c4(undefined8 param_1,longlong param_2)

{
  FUN_14784829a(param_2);
  *(undefined8 *)(param_2 + 0x278) = 0;
  *(undefined8 *)(param_2 + 0x280) = 0x8000000000;
  *(undefined8 *)(param_2 + 0x298) = 0;
  *(undefined8 *)(param_2 + 0x2a0) = 0x8000000000;
  *(undefined1 *)(param_2 + 0x2a8) = 0;
  *(undefined8 *)(param_2 + 0x2b0) = 0;
  *(undefined8 *)(param_2 + 0x2c0) = 0;
  *(undefined8 *)(param_2 + 0x2f0) = 0;
  *(undefined8 *)(param_2 + 0x2f8) = 0;
  *(undefined8 *)(param_2 + 0x300) = 0;
  *(undefined8 *)(param_2 + 0x308) = 0;
  *(undefined8 *)(param_2 + 0x310) = 0;
  *(byte *)(param_2 + 0x318) = (*(byte *)(param_2 + 0x318) & 0xfc) + 1;
  *(undefined1 *)(param_2 + 0x319) = 0;
  return;
}



// FUNCTION 14784d564 FUN_14784d564 body=63 status=ok
// SIG undefined FUN_14784d564(void)

undefined1 FUN_14784d564(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14784d8c0(param_2,param_3);
    param_3 = param_3 + 800;
    param_2 = param_2 + 800;
  }
  return 1;
}



// FUNCTION 14784d5cc FUN_14784d5cc body=59 status=ok
// SIG undefined FUN_14784d5cc(void)

undefined8 FUN_14784d5cc(longlong *param_1)

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



// FUNCTION 14784d618 FUN_14784d618 body=40 status=ok
// SIG undefined FUN_14784d618(void)

void FUN_14784d618(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 800) == '\x01') {
    FUN_14784d68e(param_2);
    *(undefined1 *)(param_2 + 800) = 0;
  }
  return;
}



// FUNCTION 14784d68e FUN_14784d68e body=162 status=ok
// SIG undefined FUN_14784d68e(void)

void FUN_14784d68e(longlong param_1)

{
  longlong *plVar1;
  
  FUN_14784d896(*(undefined8 *)(param_1 + 0x308),*(undefined4 *)(param_1 + 0x310));
  if (*(longlong *)(param_1 + 0x308) != 0) {
    FUN_1400020a8();
  }
  FUN_14784dd78(*(undefined8 *)(param_1 + 0x2f8),*(undefined4 *)(param_1 + 0x300));
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    plVar1 = (longlong *)(param_1 + 0x2d0);
    if (*(longlong **)(param_1 + 0x2c0) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x2c0);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x298) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x278) != 0) {
    FUN_1400020a8();
  }
  FUN_14784d730(param_1);
  return;
}



// FUNCTION 14784d730 FUN_14784d730 body=358 status=ok
// SIG undefined FUN_14784d730(void)

void FUN_14784d730(longlong *param_1)

{
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 14784d896 FUN_14784d896 body=41 status=ok
// SIG undefined FUN_14784d896(void)

void FUN_14784d896(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147848456(param_1);
    param_1 = param_1 + 0x140;
  }
  return;
}



// FUNCTION 14784d8c0 FUN_14784d8c0 body=157 status=ok
// SIG undefined FUN_14784d8c0(void)

longlong FUN_14784d8c0(longlong param_1,longlong param_2)

{
  FUN_14784d95e();
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x268,param_2 + 0x268);
    FUN_144a69486(param_1 + 0x288,param_2 + 0x288);
  }
  *(undefined1 *)(param_1 + 0x2a8) = *(undefined1 *)(param_2 + 0x2a8);
  FUN_14784dada(param_1 + 0x2b0,param_2 + 0x2b0);
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_2 + 0x2f0);
  FUN_14784dbfe(param_1 + 0x2f8,param_2 + 0x2f8);
  FUN_14784dc5e(param_1 + 0x308,param_2 + 0x308);
  *(undefined2 *)(param_1 + 0x318) = *(undefined2 *)(param_2 + 0x318);
  return param_1;
}



// FUNCTION 14784d95e FUN_14784d95e body=380 status=ok
// SIG undefined FUN_14784d95e(void)

longlong FUN_14784d95e(longlong param_1,longlong param_2)

{
  FUN_14784dcbe();
  FUN_14784dcbe(param_1 + 0x10,param_2 + 0x10);
  FUN_14784dcbe(param_1 + 0x20,param_2 + 0x20);
  FUN_14784dcbe(param_1 + 0x30,param_2 + 0x30);
  if (param_1 != param_2) {
    FUN_144a69486(param_1 + 0x40,param_2 + 0x40);
    FUN_144a69486(param_1 + 0x60,param_2 + 0x60);
    FUN_144a69486(param_1 + 0x80,param_2 + 0x80);
    FUN_144a69486(param_1 + 0xa0,param_2 + 0xa0);
    FUN_144a69486(param_1 + 0xc0,param_2 + 0xc0);
    FUN_144a69486(param_1 + 0xe0,param_2 + 0xe0);
    FUN_144a69486(param_1 + 0x100,param_2 + 0x100);
    FUN_144a69486(param_1 + 0x120,param_2 + 0x120);
    FUN_144a69486(param_1 + 0x140,param_2 + 0x140);
    FUN_144a69486(param_1 + 0x160,param_2 + 0x160);
    FUN_144a69486(param_1 + 0x180,param_2 + 0x180);
    FUN_144a69486(param_1 + 0x1a0,param_2 + 0x1a0);
    FUN_144a69486(param_1 + 0x1c0,param_2 + 0x1c0);
    FUN_144a69486(param_1 + 0x1e0,param_2 + 0x1e0);
    FUN_144a69486(param_1 + 0x200,param_2 + 0x200);
    FUN_144a69486(param_1 + 0x220,param_2 + 0x220);
    FUN_144a69486(param_1 + 0x240,param_2 + 0x240);
  }
  *(undefined1 *)(param_1 + 0x264) = *(undefined1 *)(param_2 + 0x264);
  *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_2 + 0x260);
  return param_1;
}



// FUNCTION 14784dada FUN_14784dada body=290 status=ok
// SIG undefined FUN_14784dada(void)

longlong * FUN_14784dada(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14784dbfe FUN_14784dbfe body=95 status=ok
// SIG undefined FUN_14784dbfe(void)

undefined8 * FUN_14784dbfe(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14784dd78(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14784ddc2(param_1,iVar1);
      FUN_14784de24(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14784dc5e FUN_14784dc5e body=95 status=ok
// SIG undefined FUN_14784dc5e(void)

undefined8 * FUN_14784dc5e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14784d896(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14784de52(param_1,iVar1);
      FUN_14784dec5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14784dcbe FUN_14784dcbe body=88 status=ok
// SIG undefined FUN_14784dcbe(void)

undefined8 * FUN_14784dcbe(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14784dd16(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14784dd16 FUN_14784dd16 body=98 status=ok
// SIG undefined FUN_14784dd16(void)

void FUN_14784dd16(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14784dd78 FUN_14784dd78 body=73 status=ok
// SIG undefined FUN_14784dd78(void)

void FUN_14784dd78(longlong param_1,int param_2)

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



// FUNCTION 14784ddc2 FUN_14784ddc2 body=98 status=ok
// SIG undefined FUN_14784ddc2(void)

void FUN_14784ddc2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14784de24 FUN_14784de24 body=45 status=ok
// SIG undefined FUN_14784de24(void)

void FUN_14784de24(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14784de52 FUN_14784de52 body=115 status=ok
// SIG undefined FUN_14784de52(void)

void FUN_14784de52(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x140,8);
    iVar2 = (int)(uVar1 / 0x140);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x140,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14784dec5 FUN_14784dec5 body=60 status=ok
// SIG undefined FUN_14784dec5(void)

void FUN_14784dec5(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14784df02(param_1,param_2);
    param_1 = param_1 + 0x140;
    param_2 = param_2 + 0x140;
  }
  return;
}



// FUNCTION 14784df02 FUN_14784df02 body=463 status=ok
// SIG undefined FUN_14784df02(void)

void * FUN_14784df02(void *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x48);
  pvVar3 = *(void **)((longlong)param_2 + 0x40);
  *(int *)((longlong)param_1 + 0x48) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0x10;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = param_2;
    }
    FUN_14784e0d2(param_1,iVar1,0);
    pvVar2 = *(void **)((longlong)param_1 + 0x40);
    if (*(void **)((longlong)param_1 + 0x40) == (void *)0x0) {
      pvVar2 = param_1;
    }
    memcpy(pvVar2,pvVar3,(longlong)iVar1 << 2);
  }
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x98);
  pvVar3 = *(void **)((longlong)param_2 + 0x90);
  *(int *)((longlong)param_1 + 0x98) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0x10;
  }
  else {
    pvVar2 = (void *)((longlong)param_2 + 0x50);
    if (pvVar3 != (void *)0x0) {
      pvVar2 = pvVar3;
    }
    FUN_14784e0d2((void *)((longlong)param_1 + 0x50),iVar1,0);
    pvVar3 = *(void **)((longlong)param_1 + 0x90);
    if (*(void **)((longlong)param_1 + 0x90) == (void *)0x0) {
      pvVar3 = (void *)((longlong)param_1 + 0x50);
    }
    memcpy(pvVar3,pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0xe8);
  pvVar3 = *(void **)((longlong)param_2 + 0xe0);
  *(int *)((longlong)param_1 + 0xe8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xec) = 0x10;
  }
  else {
    pvVar2 = (void *)((longlong)param_2 + 0xa0);
    if (pvVar3 != (void *)0x0) {
      pvVar2 = pvVar3;
    }
    FUN_14784e0d2((void *)((longlong)param_1 + 0xa0),iVar1,0);
    pvVar3 = *(void **)((longlong)param_1 + 0xe0);
    if (*(void **)((longlong)param_1 + 0xe0) == (void *)0x0) {
      pvVar3 = (void *)((longlong)param_1 + 0xa0);
    }
    memcpy(pvVar3,pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x138);
  pvVar3 = *(void **)((longlong)param_2 + 0x130);
  *(int *)((longlong)param_1 + 0x138) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x13c) = 0x10;
  }
  else {
    pvVar2 = (void *)((longlong)param_2 + 0xf0);
    if (pvVar3 != (void *)0x0) {
      pvVar2 = pvVar3;
    }
    FUN_14784e0d2((void *)((longlong)param_1 + 0xf0),iVar1,0);
    pvVar3 = *(void **)((longlong)param_1 + 0x130);
    if (*(void **)((longlong)param_1 + 0x130) == (void *)0x0) {
      pvVar3 = (void *)((longlong)param_1 + 0xf0);
    }
    memcpy(pvVar3,pvVar2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 14784e0d2 FUN_14784e0d2 body=99 status=ok
// SIG undefined FUN_14784e0d2(void)

void FUN_14784e0d2(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x10;
    if (0x10 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_1401fcd14(param_1,0,iVar3,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x4c) = param_3;
  return;
}



// FUNCTION 14784e17e FUN_14784e17e body=59 status=ok
// SIG undefined FUN_14784e17e(void)

undefined8 FUN_14784e17e(longlong *param_1)

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



// FUNCTION 14784e268 FUN_14784e268 body=59 status=ok
// SIG undefined FUN_14784e268(void)

undefined8 FUN_14784e268(longlong *param_1)

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



// FUNCTION 14784e352 FUN_14784e352 body=59 status=ok
// SIG undefined FUN_14784e352(void)

undefined8 FUN_14784e352(longlong *param_1)

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



// FUNCTION 14784e43c FUN_14784e43c body=59 status=ok
// SIG undefined FUN_14784e43c(void)

undefined8 FUN_14784e43c(longlong *param_1)

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



// FUNCTION 14784e526 FUN_14784e526 body=59 status=ok
// SIG undefined FUN_14784e526(void)

undefined8 FUN_14784e526(longlong *param_1)

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



// FUNCTION 14784e634 FUN_14784e634 body=77 status=ok
// SIG undefined FUN_14784e634(void)

void FUN_14784e634(longlong *param_1,ulonglong *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_144a78877(*param_2,*param_2 >> 0x20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14784e778 FUN_14784e778 body=59 status=ok
// SIG undefined FUN_14784e778(void)

undefined8 FUN_14784e778(longlong *param_1)

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



// FUNCTION 14784e868 FUN_14784e868 body=42 status=ok
// SIG undefined FUN_14784e868(void)

void FUN_14784e868(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1459329c0(param_2);
  return;
}



// FUNCTION 14784e8a8 FUN_14784e8a8 body=54 status=ok
// SIG undefined FUN_14784e8a8(void)

undefined1 FUN_14784e8a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14784e9d2(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 14784e906 FUN_14784e906 body=59 status=ok
// SIG undefined FUN_14784e906(void)

undefined8 FUN_14784e906(longlong *param_1)

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



// FUNCTION 14784e94c FUN_14784e94c body=55 status=ok
// SIG undefined FUN_14784e94c(void)

void FUN_14784e94c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1459329c0(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14784e9d2 FUN_14784e9d2 body=122 status=ok
// SIG undefined FUN_14784e9d2(void)

longlong FUN_14784e9d2(longlong param_1,longlong param_2)

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
    FUN_14784ea4c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14784ea4c FUN_14784ea4c body=202 status=ok
// SIG undefined FUN_14784ea4c(void)

undefined8 * FUN_14784ea4c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14136a0f0(param_1,(ulonglong)uVar1);
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
          FUN_14784eb16(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 10;
        puVar6 = puVar6 + 10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14784eb16 FUN_14784eb16 body=70 status=ok
// SIG undefined FUN_14784eb16(void)

longlong * FUN_14784eb16(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14784eb5c(param_1 + 1,param_2 + 1);
  param_1[4] = param_2[4];
  return param_1;
}



// FUNCTION 14784eb5c FUN_14784eb5c body=90 status=ok
// SIG undefined FUN_14784eb5c(void)

undefined8 * FUN_14784eb5c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14784ebb6(param_1,iVar1,0);
    FUN_14784ec18(*param_1,uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 14784ebb6 FUN_14784ebb6 body=98 status=ok
// SIG undefined FUN_14784ebb6(void)

void FUN_14784ebb6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14784ec18 FUN_14784ec18 body=82 status=ok
// SIG undefined FUN_14784ec18(void)

void FUN_14784ec18(longlong param_1,longlong param_2,int param_3)

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
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 14784ecc6 FUN_14784ecc6 body=59 status=ok
// SIG undefined FUN_14784ecc6(void)

undefined8 FUN_14784ecc6(longlong *param_1)

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



// FUNCTION 14784ed12 FUN_14784ed12 body=40 status=ok
// SIG undefined FUN_14784ed12(void)

void FUN_14784ed12(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1c8) == '\x01') {
    FUN_145932904(param_2);
    *(undefined1 *)(param_2 + 0x1c8) = 0;
  }
  return;
}



// FUNCTION 14784edbe FUN_14784edbe body=54 status=ok
// SIG undefined FUN_14784edbe(void)

undefined1 FUN_14784edbe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14784eed6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14784ee1c FUN_14784ee1c body=59 status=ok
// SIG undefined FUN_14784ee1c(void)

undefined8 FUN_14784ee1c(longlong *param_1)

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



// FUNCTION 14784ee62 FUN_14784ee62 body=37 status=ok
// SIG undefined FUN_14784ee62(void)

void FUN_14784ee62(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 14784eed6 FUN_14784eed6 body=79 status=ok
// SIG undefined FUN_14784eed6(void)

undefined8 * FUN_14784eed6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14784ef26(param_1,iVar1);
      FUN_14784ef88(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14784ef26 FUN_14784ef26 body=98 status=ok
// SIG undefined FUN_14784ef26(void)

void FUN_14784ef26(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14784ef88 FUN_14784ef88 body=82 status=ok
// SIG undefined FUN_14784ef88(void)

void FUN_14784ef88(longlong param_1,longlong param_2,int param_3)

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
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 14784f02a FUN_14784f02a body=42 status=ok
// SIG undefined FUN_14784f02a(void)

void FUN_14784f02a(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145af261a(param_2);
  return;
}



// FUNCTION 14784f06a FUN_14784f06a body=54 status=ok
// SIG undefined FUN_14784f06a(void)

undefined1 FUN_14784f06a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14784f194(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 14784f0c8 FUN_14784f0c8 body=59 status=ok
// SIG undefined FUN_14784f0c8(void)

undefined8 FUN_14784f0c8(longlong *param_1)

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



// FUNCTION 14784f10e FUN_14784f10e body=55 status=ok
// SIG undefined FUN_14784f10e(void)

void FUN_14784f10e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_145af261a(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14784f194 FUN_14784f194 body=122 status=ok
// SIG undefined FUN_14784f194(void)

longlong FUN_14784f194(longlong param_1,longlong param_2)

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
    FUN_14784f20e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14784f20e FUN_14784f20e body=201 status=ok
// SIG undefined FUN_14784f20e(void)

undefined8 * FUN_14784f20e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145af2652(param_1,(ulonglong)uVar1);
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
          FUN_14784f2d8(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14784f2d8 FUN_14784f2d8 body=70 status=ok
// SIG undefined FUN_14784f2d8(void)

longlong * FUN_14784f2d8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14784f31e(param_1 + 1,param_2 + 1);
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 14784f31e FUN_14784f31e body=77 status=ok
// SIG undefined FUN_14784f31e(void)

undefined8 * FUN_14784f31e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14784ef26(param_1,iVar1,0);
    FUN_14784ef88(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14784f3aa FUN_14784f3aa body=54 status=ok
// SIG undefined FUN_14784f3aa(void)

undefined1 FUN_14784f3aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14784f4c2(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 14784f408 FUN_14784f408 body=59 status=ok
// SIG undefined FUN_14784f408(void)

undefined8 FUN_14784f408(longlong *param_1)

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



// FUNCTION 14784f44e FUN_14784f44e body=38 status=ok
// SIG undefined FUN_14784f44e(void)

void FUN_14784f44e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 14784f4c2 FUN_14784f4c2 body=79 status=ok
// SIG undefined FUN_14784f4c2(void)

undefined8 * FUN_14784f4c2(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = param_2[1];
    }
  }
  param_1[1] = lVar1;
  FUN_14784f512(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 14784f512 FUN_14784f512 body=79 status=ok
// SIG undefined FUN_14784f512(void)

undefined8 * FUN_14784f512(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14784ebb6(param_1,iVar1);
      FUN_14784ec18(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14784f562 FUN_14784f562 body=41 status=ok
// SIG undefined FUN_14784f562(void)

void FUN_14784f562(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14784c522(param_1);
    param_1 = param_1 + 0x208;
  }
  return;
}



// FUNCTION 14784f5d4 FUN_14784f5d4 body=59 status=ok
// SIG undefined FUN_14784f5d4(void)

undefined8 FUN_14784f5d4(longlong *param_1)

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



// FUNCTION 14784f676 FUN_14784f676 body=59 status=ok
// SIG undefined FUN_14784f676(void)

void FUN_14784f676(undefined8 param_1,undefined8 *param_2)

{
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_141215e22(param_2 + 3);
  *(undefined1 *)(param_2 + 5) = 1;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



// FUNCTION 14784f6b2 FUN_14784f6b2 body=54 status=ok
// SIG undefined FUN_14784f6b2(void)

void FUN_14784f6b2(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  FUN_141215e22(param_2 + 3);
  *(undefined1 *)(param_2 + 5) = 1;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



// FUNCTION 14784f706 FUN_14784f706 body=54 status=ok
// SIG undefined FUN_14784f706(void)

undefined1 FUN_14784f706(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14784f818(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 14784f764 FUN_14784f764 body=59 status=ok
// SIG undefined FUN_14784f764(void)

undefined8 FUN_14784f764(longlong *param_1)

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



// FUNCTION 14784f7aa FUN_14784f7aa body=32 status=ok
// SIG undefined FUN_14784f7aa(void)

void FUN_14784f7aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_14339f826(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14784f818 FUN_14784f818 body=186 status=ok
// SIG undefined FUN_14784f818(void)

undefined8 * FUN_14784f818(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  if (param_1 != param_2) {
    FUN_1401fa0f0(param_1 + 3,param_2[3],param_2[4]);
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar3 = param_2[6];
  lVar4 = param_2[7];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[7];
  param_1[6] = uVar3;
  param_1[7] = lVar4;
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
  return param_1;
}



// FUNCTION 14784f910 FUN_14784f910 body=74 status=ok
// SIG undefined FUN_14784f910(void)

undefined1 FUN_14784f910(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14784f512(param_2,param_3);
    *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 14784f982 FUN_14784f982 body=70 status=ok
// SIG undefined FUN_14784f982(void)

void FUN_14784f982(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_147848d37(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14784f9d4 FUN_14784f9d4 body=37 status=ok
// SIG undefined FUN_14784f9d4(void)

void FUN_14784f9d4(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[3] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 14784fa72 FUN_14784fa72 body=48 status=ok
// SIG undefined FUN_14784fa72(void)

void FUN_14784fa72(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14784fab8 FUN_14784fab8 body=96 status=ok
// SIG undefined FUN_14784fab8(void)

undefined8 FUN_14784fab8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_1406fa324();
      FUN_1406fa324(param_2 + lVar1 + 0x18,param_3 + lVar1 + 0x18);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14784fb40 FUN_14784fb40 body=59 status=ok
// SIG undefined FUN_14784fb40(void)

undefined8 FUN_14784fb40(longlong *param_1)

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



// FUNCTION 14784fbde FUN_14784fbde body=52 status=ok
// SIG undefined FUN_14784fbde(void)

void FUN_14784fbde(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14784fc12 FUN_14784fc12 body=43 status=ok
// SIG undefined FUN_14784fc12(void)

void FUN_14784fc12(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14784fc3e FUN_14784fc3e body=74 status=ok
// SIG undefined FUN_14784fc3e(void)

undefined8 * FUN_14784fc3e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14784fc88(param_1,iVar1);
    FUN_14784fce0(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14784fc88 FUN_14784fc88 body=88 status=ok
// SIG undefined FUN_14784fc88(void)

void FUN_14784fc88(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14784fce0 FUN_14784fce0 body=114 status=ok
// SIG undefined FUN_14784fce0(void)

void FUN_14784fce0(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  piVar2 = (int *)(param_2 + 8);
  do {
    *param_1 = 0;
    iVar1 = *piVar2;
    _Src = *(void **)(piVar2 + -2);
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_144a06ca8(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
    }
    param_1 = param_1 + 2;
    piVar2 = piVar2 + 4;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14784fd52 FUN_14784fd52 body=212 status=ok
// SIG undefined FUN_14784fd52(void)

void FUN_14784fd52(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14784fe26 FUN_14784fe26 body=119 status=ok
// SIG undefined FUN_14784fe26(void)

void FUN_14784fe26(longlong param_1,int param_2)

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
    FUN_14784fe9e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14784fe9e FUN_14784fe9e body=141 status=ok
// SIG undefined FUN_14784fe9e(void)

void FUN_14784fe9e(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 14784ff2b FUN_14784ff2b body=671 status=ok
// SIG undefined FUN_14784ff2b(void)

void FUN_14784ff2b(longlong param_1,uint param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  undefined1 auStack_388 [40];
  longlong *local_360;
  int local_354;
  undefined8 local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  local_350 = param_3;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar16 + fVar16);
    plVar6 = &local_348;
    do {
      puVar8 = (undefined8 *)*plVar6;
      puVar3 = (undefined8 *)plVar6[1];
      local_354 = (int)plVar6[2];
      uVar4 = (int)((ulonglong)((longlong)puVar3 - (longlong)puVar8) >> 3) + 1;
      puVar13 = puVar3;
      puVar12 = puVar8;
      local_360 = plVar6;
      if (local_354 != 0) {
LAB_14784fffa:
        if (8 < (int)uVar4) {
          uVar10 = puVar8[uVar4 >> 1];
          puVar8[uVar4 >> 1] = *puVar8;
          *puVar8 = uVar10;
          puVar15 = puVar13 + 1;
          puVar9 = puVar8;
          do {
            puVar1 = puVar9 + 1;
            puVar14 = puVar9 + 1;
            do {
              puVar9 = puVar14;
              puVar11 = puVar1;
              if (puVar13 < puVar9) break;
              cVar2 = FUN_14784c808(*puVar8,*puVar9);
              puVar1 = puVar11 + 1;
              puVar14 = puVar9 + 1;
            } while (cVar2 == '\0');
            puVar1 = puVar15 + -2;
            do {
              puVar14 = puVar15;
              puVar5 = puVar1;
              puVar15 = puVar14 + -1;
              if (puVar15 <= puVar8) break;
              cVar2 = FUN_14784c808(*puVar15,*puVar8);
              puVar1 = puVar5 + -1;
            } while (cVar2 == '\0');
            if (puVar15 < puVar9) goto LAB_147850087;
            uVar10 = *puVar9;
            *puVar9 = *puVar15;
            *puVar15 = uVar10;
          } while( true );
        }
        plVar6 = local_360;
        if (puVar8 < puVar13) {
          do {
            puVar3 = puVar8;
            if (puVar8 + 1 <= puVar13) {
              uVar10 = *puVar8;
              puVar12 = puVar8;
              puVar15 = puVar8 + 1;
              do {
                uVar7 = *puVar15;
                cVar2 = FUN_14784c808(uVar10,uVar7);
                puVar3 = puVar15;
                if (cVar2 == '\0') {
                  puVar3 = puVar12;
                  uVar7 = uVar10;
                }
                puVar15 = puVar15 + 1;
                uVar10 = uVar7;
                puVar12 = puVar3;
              } while (puVar15 <= puVar13);
            }
            uVar10 = *puVar3;
            *puVar3 = *puVar13;
            *puVar13 = uVar10;
            puVar13 = puVar13 + -1;
            plVar6 = local_360;
          } while (puVar8 < puVar13);
        }
        goto LAB_14785019c;
      }
LAB_1478501b6:
      FUN_1478501cb(puVar8,uVar4,local_350);
      plVar6 = local_360;
LAB_14785019c:
      plVar6 = plVar6 + -3;
    } while (&local_348 <= plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147850087:
  uVar10 = *puVar8;
  *puVar8 = *puVar15;
  *puVar15 = uVar10;
  local_354 = local_354 + -1;
  puVar14 = puVar14 + -2;
  if ((longlong)puVar5 - (longlong)puVar12 < (longlong)puVar3 - (longlong)puVar11) {
    plVar6 = local_360;
    if (puVar9 < puVar13) {
      *local_360 = (longlong)puVar9;
      local_360[1] = (longlong)puVar13;
      *(int *)(local_360 + 2) = local_354;
      plVar6 = local_360 + 3;
    }
    puVar3 = puVar5;
    puVar11 = puVar8;
    if (puVar15 <= puVar8 + 1) goto LAB_14785019c;
  }
  else {
    if (puVar8 + 1 < puVar15) {
      *local_360 = (longlong)puVar8;
      local_360[1] = (longlong)puVar14;
      *(int *)(local_360 + 2) = local_354;
      local_360 = local_360 + 3;
    }
    plVar6 = local_360;
    puVar3 = puVar13;
    puVar8 = puVar9;
    puVar14 = puVar13;
    if (puVar13 <= puVar9) goto LAB_14785019c;
  }
  local_360 = plVar6;
  uVar4 = (int)((ulonglong)((longlong)puVar3 - (longlong)puVar11) >> 3) + 1;
  puVar13 = puVar14;
  puVar12 = puVar11;
  if (local_354 == 0) goto LAB_1478501b6;
  goto LAB_14784fffa;
}



// FUNCTION 1478501cb FUN_1478501cb body=358 status=ok
// SIG undefined FUN_1478501cb(void)

void FUN_1478501cb(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  bool bVar10;
  
  if (param_2 != 0) {
    iVar9 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar6 = iVar9;
joined_r0x000147850203:
    do {
      iVar4 = iVar9 * 2 + 1;
      if (iVar4 < (int)param_2) {
        iVar5 = iVar9 * 2 + 2;
        if ((iVar5 < (int)param_2) &&
           (cVar3 = FUN_14784c808(param_1[iVar5],param_1[iVar4]), cVar3 == '\0')) {
          iVar4 = iVar5;
        }
        uVar1 = param_1[iVar4];
        uVar2 = param_1[iVar9];
        cVar3 = FUN_14784c808(uVar2,uVar1);
        if (cVar3 != '\0') {
          param_1[iVar9] = uVar1;
          param_1[iVar4] = uVar2;
          iVar9 = iVar4;
          goto joined_r0x000147850203;
        }
      }
      bVar10 = iVar6 != 0;
      iVar9 = iVar6 + -1;
      iVar6 = iVar9;
    } while (bVar10);
    if (1 < (int)param_2) {
      uVar7 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar7 - 1];
      param_1[uVar7 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar8 = uVar7 - 1;
          iVar9 = 0;
          iVar4 = 1;
          iVar6 = 0;
          do {
            iVar9 = iVar9 + 2;
            iVar5 = iVar4;
            if (((longlong)iVar9 < (longlong)uVar8) &&
               (cVar3 = FUN_14784c808(param_1[iVar9],param_1[iVar4]), cVar3 == '\0')) {
              iVar5 = iVar9;
            }
            uVar1 = param_1[iVar5];
            uVar2 = param_1[iVar6];
            cVar3 = FUN_14784c808(uVar2,uVar1);
            if (cVar3 == '\0') break;
            param_1[iVar6] = uVar1;
            param_1[iVar5] = uVar2;
            iVar9 = iVar5 * 2;
            iVar4 = iVar5 * 2 + 1;
            iVar6 = iVar5;
          } while ((longlong)iVar4 < (longlong)uVar8);
          uVar1 = *param_1;
          *param_1 = param_1[uVar7 - 2];
          param_1[uVar7 - 2] = uVar1;
          uVar7 = uVar8;
        } while (2 < uVar8);
      }
    }
  }
  return;
}



// FUNCTION 147850332 FUN_147850332 body=132 status=ok
// SIG undefined FUN_147850332(void)

void FUN_147850332(longlong param_1,int param_2)

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



// FUNCTION 1478503b8 FUN_1478503b8 body=141 status=ok
// SIG undefined FUN_1478503b8(void)

void FUN_1478503b8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,0x10);
  return;
}



// FUNCTION 147850445 FUN_147850445 body=27 status=ok
// SIG undefined FUN_147850445(void)

void FUN_147850445(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 147850460 FUN_147850460 body=119 status=ok
// SIG undefined FUN_147850460(void)

void FUN_147850460(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_1478503b8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1478504d8 FUN_1478504d8 body=411 status=ok
// SIG undefined FUN_1478504d8(void)

void FUN_1478504d8(longlong *param_1,uint param_2)

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
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14482b872(param_1);
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



// FUNCTION 147850674 FUN_147850674 body=474 status=ok
// SIG undefined FUN_147850674(void)

void FUN_147850674(longlong *param_1)

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



// FUNCTION 147850850 FUN_147850850 body=324 status=ok
// SIG undefined FUN_147850850(void)

undefined4 * FUN_147850850(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
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
  FUN_147850996(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_147850a7c(param_1,uVar4,local_40,&local_4c);
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
      FUN_147850674(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147850996 FUN_147850996 body=230 status=ok
// SIG undefined FUN_147850996(void)

int * FUN_147850996(longlong *param_1,int *param_2)

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



// FUNCTION 147850a7c FUN_147850a7c body=128 status=ok
// SIG undefined FUN_147850a7c(void)

undefined8 FUN_147850a7c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147850afc((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147850afc FUN_147850afc body=114 status=ok
// SIG undefined FUN_147850afc(void)

void FUN_147850afc(longlong *param_1,int param_2)

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



// FUNCTION 147850b6e FUN_147850b6e body=75 status=ok
// SIG undefined FUN_147850b6e(void)

void FUN_147850b6e(longlong *param_1)

{
  if (*param_1 != 0) {
    FUN_1400020a8();
    *param_1 = 0;
  }
  FUN_14784613c(param_1 + 5);
  FUN_1468969b7(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147850bba FUN_147850bba body=48 status=ok
// SIG undefined FUN_147850bba(void)

void FUN_147850bba(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147850bea FUN_147850bea body=132 status=ok
// SIG undefined FUN_147850bea(void)

void FUN_147850bea(longlong param_1,int param_2)

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



// FUNCTION 147850c70 FUN_147850c70 body=231 status=ok
// SIG undefined FUN_147850c70(void)

longlong * FUN_147850c70(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  
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
    *puVar5 = &PTR_LAB_149e05c00;
    uVar8 = FUN_144a3f946();
    puVar5[2] = uVar8;
    *puVar5 = &PTR_FUN_14a5b5880;
    puVar5[3] = uVar6;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e05c00;
    uVar8 = FUN_144a3f946();
    puVar5[2] = uVar8;
    *puVar5 = &PTR_FUN_14a5b5880;
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



// FUNCTION 147850d58 FUN_147850d58 body=64 status=ok
// SIG undefined FUN_147850d58(void)

undefined8 * FUN_147850d58(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a5b5880;
  plVar2 = (longlong *)param_1[4];
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



// FUNCTION 147850d9c FUN_147850d9c body=81 status=ok
// SIG undefined FUN_147850d9c(void)

undefined8 FUN_147850d9c(longlong param_1)

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



// FUNCTION 147850df4 FUN_147850df4 body=89 status=ok
// SIG undefined FUN_147850df4(void)

bool FUN_147850df4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_147850e3f;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_147850e3f:
  return lVar6 == param_2;
}



// FUNCTION 147850e6a FUN_147850e6a body=118 status=ok
// SIG undefined FUN_147850e6a(void)

void FUN_147850e6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e05c00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5b5880;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147850ee0 FUN_147850ee0 body=118 status=ok
// SIG undefined FUN_147850ee0(void)

void FUN_147850ee0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e05c00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5b5880;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147850f56 FUN_147850f56 body=156 status=ok
// SIG undefined FUN_147850f56(void)

void FUN_147850f56(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e05c00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5b5880;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147850fe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147850ff2 FUN_147850ff2 body=104 status=ok
// SIG undefined FUN_147850ff2(void)

void FUN_147850ff2(longlong param_1)

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
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x00014785103f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147851050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14785105a FUN_14785105a body=101 status=ok
// SIG undefined FUN_14785105a(void)

ulonglong FUN_14785105a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1478510b4:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1478510b4;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 1478510c0 FUN_1478510c0 body=181 status=ok
// SIG undefined FUN_1478510c0(void)

longlong FUN_1478510c0(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_147851158;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_147851176(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_147851158:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 147851176 FUN_147851176 body=284 status=ok
// SIG undefined FUN_147851176(void)

undefined4 * FUN_147851176(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147851294(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 2) = 0;
  *(undefined8 *)(local_40 + 4) = 0;
  FUN_145932848(0,0);
  local_40[6] = 0xffffffff;
  cVar1 = FUN_14785137a(param_1,param_3,local_40,local_48);
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
      local_40[7] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[6] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
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
      FUN_147851498(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147851294 FUN_147851294 body=229 status=ok
// SIG undefined FUN_147851294(void)

int * FUN_147851294(longlong *param_1,int *param_2)

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



// FUNCTION 14785137a FUN_14785137a body=172 status=ok
// SIG undefined FUN_14785137a(void)

undefined8 FUN_14785137a(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
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
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          FUN_145932848(*(undefined8 *)(piVar1 + 2),piVar1[4]);
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147851426(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147851426 FUN_147851426 body=114 status=ok
// SIG undefined FUN_147851426(void)

void FUN_147851426(longlong *param_1,int param_2)

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



// FUNCTION 147851498 FUN_147851498 body=422 status=ok
// SIG undefined FUN_147851498(void)

void FUN_147851498(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
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



// FUNCTION 147851640 FUN_147851640 body=132 status=ok
// SIG undefined FUN_147851640(void)

void FUN_147851640(longlong param_1,int param_2)

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



// FUNCTION 1478516c6 FUN_1478516c6 body=41 status=ok
// SIG undefined FUN_1478516c6(void)

void FUN_1478516c6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_14785170e(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1478516f0 FUN_1478516f0 body=29 status=ok
// SIG undefined FUN_1478516f0(void)

undefined8 FUN_1478516f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14785170e FUN_14785170e body=194 status=ok
// SIG undefined FUN_14785170e(void)

void FUN_14785170e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x268) = 0;
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FUN_1400020a8();
  }
  FUN_1478517d0(param_1 + 0x220);
  *(undefined4 *)(param_1 + 0x218) = 0;
  if (*(longlong *)(param_1 + 0x210) != 0) {
    FUN_1400020a8();
  }
  FUN_144a6bfa8(param_1 + 0x1d0);
  FUN_147851804(*(undefined8 *)(param_1 + 0x1c0),*(undefined4 *)(param_1 + 0x1c8));
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  FUN_1468969b7(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_147846af0(param_1);
  return;
}



// FUNCTION 1478517d0 FUN_1478517d0 body=52 status=ok
// SIG undefined FUN_1478517d0(void)

void FUN_1478517d0(longlong *param_1)

{
  FUN_14784c7ae();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147851804 FUN_147851804 body=41 status=ok
// SIG undefined FUN_147851804(void)

void FUN_147851804(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147850b6e(param_1);
    param_1 = param_1 + 0x90;
  }
  return;
}



// FUNCTION 14785182e FUN_14785182e body=181 status=ok
// SIG undefined FUN_14785182e(void)

longlong FUN_14785182e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_1478518c6;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1478518e4(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1478518c6:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1478518e4 FUN_1478518e4 body=286 status=ok
// SIG undefined FUN_1478518e4(void)

undefined4 * FUN_1478518e4(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_147851a04(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_145932848(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_147851aea(param_1,param_3,local_40,local_48);
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
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_147851c0a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147851a04 FUN_147851a04 body=229 status=ok
// SIG undefined FUN_147851a04(void)

int * FUN_147851a04(longlong *param_1,int *param_2)

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



// FUNCTION 147851aea FUN_147851aea body=174 status=ok
// SIG undefined FUN_147851aea(void)

undefined8 FUN_147851aea(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_145932848(*(undefined8 *)(puVar1 + 2),puVar1[4]);
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
          FUN_147851b98(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147851b98 FUN_147851b98 body=114 status=ok
// SIG undefined FUN_147851b98(void)

void FUN_147851b98(longlong *param_1,int param_2)

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



// FUNCTION 147851c0a FUN_147851c0a body=477 status=ok
// SIG undefined FUN_147851c0a(void)

void FUN_147851c0a(longlong *param_1)

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



// FUNCTION 147851de8 FUN_147851de8 body=164 status=ok
// SIG undefined FUN_147851de8(void)

void FUN_147851de8(longlong *param_1,undefined8 param_2)

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
        goto LAB_147851e68;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147851e68:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147851e8c FUN_147851e8c body=132 status=ok
// SIG undefined FUN_147851e8c(void)

void FUN_147851e8c(longlong param_1,int param_2)

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



// FUNCTION 147851f12 FUN_147851f12 body=31 status=ok
// SIG undefined FUN_147851f12(void)

undefined8 FUN_147851f12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147851f4e FUN_147851f4e body=93 status=ok
// SIG undefined FUN_147851f4e(void)

void FUN_147851f4e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a5b5910;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147851fac FUN_147851fac body=126 status=ok
// SIG undefined FUN_147851fac(void)

void FUN_147851fac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a5b5910;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014785201b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14785202a FUN_14785202a body=21 status=ok
// SIG undefined FUN_14785202a(void)

undefined8 FUN_14785202a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147852040 FUN_147852040 body=48 status=ok
// SIG undefined FUN_147852040(void)

void FUN_147852040(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147852070 FUN_147852070 body=48 status=ok
// SIG undefined FUN_147852070(void)

void FUN_147852070(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x140,8);
  }
  return;
}



// FUNCTION 1478520a0 FUN_1478520a0 body=79 status=ok
// SIG undefined FUN_1478520a0(void)

void FUN_1478520a0(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x13c;
    do {
      *(undefined8 *)(param_1 + -0xfc) = 0;
      *(undefined8 *)(param_1 + -0xf4) = 0x1000000000;
      *(undefined8 *)(param_1 + -0xac) = 0;
      *(undefined8 *)(param_1 + -0xa4) = 0x1000000000;
      *(undefined8 *)(param_1 + -0x5c) = 0;
      *(undefined8 *)(param_1 + -0x54) = 0x1000000000;
      *(undefined8 *)(param_1 + -0xc) = 0;
      *(undefined8 *)(param_1 + -4) = 0x1000000000;
      param_1 = param_1 + 0x140;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1478520f0 FUN_1478520f0 body=147 status=ok
// SIG undefined FUN_1478520f0(void)

void FUN_1478520f0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x140,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x140)) {
      uVar5 = uVar4 / 0x140 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x140,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147852184 FUN_147852184 body=650 status=ok
// SIG undefined FUN_147852184(void)

void * FUN_147852184(void *param_1,void *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  void *pvVar7;
  
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x108);
  pvVar7 = *(void **)((longlong)param_2 + 0x100);
  *(int *)((longlong)param_1 + 0x108) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 8;
  }
  else {
    if (pvVar7 == (void *)0x0) {
      pvVar7 = param_2;
    }
    FUN_1478524a2(param_1,iVar1);
    pvVar6 = *(void **)((longlong)param_1 + 0x100);
    if (*(void **)((longlong)param_1 + 0x100) == (void *)0x0) {
      pvVar6 = param_1;
    }
    memcpy(pvVar6,pvVar7,(longlong)iVar1 << 5);
  }
  *(undefined8 *)((longlong)param_1 + 400) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x198);
  pvVar7 = *(void **)((longlong)param_2 + 400);
  *(int *)((longlong)param_1 + 0x198) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x19c) = 4;
  }
  else {
    pvVar6 = (void *)((longlong)param_2 + 0x110);
    if (pvVar7 != (void *)0x0) {
      pvVar6 = pvVar7;
    }
    FUN_14785252c((void *)((longlong)param_1 + 0x110),iVar1);
    pvVar7 = *(void **)((longlong)param_1 + 400);
    if (*(void **)((longlong)param_1 + 400) == (void *)0x0) {
      pvVar7 = (void *)((longlong)param_1 + 0x110);
    }
    memcpy(pvVar7,pvVar6,(longlong)iVar1 << 5);
  }
  *(undefined8 *)((longlong)param_1 + 0x220) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x228);
  pvVar7 = *(void **)((longlong)param_2 + 0x220);
  *(int *)((longlong)param_1 + 0x228) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x22c) = 4;
  }
  else {
    pvVar6 = (void *)((longlong)param_2 + 0x1a0);
    if (pvVar7 != (void *)0x0) {
      pvVar6 = pvVar7;
    }
    FUN_1478525b6((void *)((longlong)param_1 + 0x1a0),iVar1);
    pvVar7 = *(void **)((longlong)param_1 + 0x220);
    if (*(void **)((longlong)param_1 + 0x220) == (void *)0x0) {
      pvVar7 = (void *)((longlong)param_1 + 0x1a0);
    }
    memcpy(pvVar7,pvVar6,(longlong)iVar1 << 5);
  }
  *(undefined8 *)((longlong)param_1 + 0x2b0) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x2b8);
  pvVar7 = *(void **)((longlong)param_2 + 0x2b0);
  *(int *)((longlong)param_1 + 0x2b8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 700) = 4;
  }
  else {
    pvVar6 = (void *)((longlong)param_2 + 0x230);
    if (pvVar7 != (void *)0x0) {
      pvVar6 = pvVar7;
    }
    FUN_14785252c((void *)((longlong)param_1 + 0x230),iVar1);
    pvVar7 = *(void **)((longlong)param_1 + 0x2b0);
    if (*(void **)((longlong)param_1 + 0x2b0) == (void *)0x0) {
      pvVar7 = (void *)((longlong)param_1 + 0x230);
    }
    memcpy(pvVar7,pvVar6,(longlong)iVar1 << 5);
  }
  FUN_14785240e((longlong)param_1 + 0x2c0,(longlong)param_2 + 0x2c0);
  *(undefined8 *)((longlong)param_1 + 0x318) = *(undefined8 *)((longlong)param_2 + 0x318);
  lVar2 = *(longlong *)((longlong)param_2 + 800);
  *(longlong *)((longlong)param_1 + 800) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x32c);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x330);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x334);
  *(undefined4 *)((longlong)param_1 + 0x328) = *(undefined4 *)((longlong)param_2 + 0x328);
  *(undefined4 *)((longlong)param_1 + 0x32c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x330) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x334) = uVar5;
  FUN_14784d326((longlong)param_1 + 0x338,(longlong)param_2 + 0x338);
  *(undefined8 *)((longlong)param_1 + 0x358) = 0;
  *(undefined8 *)((longlong)param_1 + 0x360) = 0;
  FUN_1401fa0f0((longlong)param_1 + 0x358,*(undefined8 *)((longlong)param_2 + 0x358),
                *(undefined8 *)((longlong)param_2 + 0x360));
  *(undefined8 *)((longlong)param_1 + 0x368) = *(undefined8 *)((longlong)param_2 + 0x368);
  FUN_147846b4e((longlong)param_1 + 0x370,(longlong)param_2 + 0x370);
  *(undefined8 *)((longlong)param_1 + 0x410) = *(undefined8 *)((longlong)param_2 + 0x410);
  lVar2 = *(longlong *)((longlong)param_2 + 0x418);
  *(longlong *)((longlong)param_1 + 0x418) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined2 *)((longlong)param_1 + 0x420) = *(undefined2 *)((longlong)param_2 + 0x420);
  return param_1;
}



// FUNCTION 14785240e FUN_14785240e body=147 status=ok
// SIG undefined FUN_14785240e(void)

longlong FUN_14785240e(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_144a69486();
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_144a69486(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x40) = 0;
  iVar1 = *(int *)(param_2 + 0x48);
  _Src = *(void **)(param_2 + 0x40);
  *(int *)(param_1 + 0x48) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  else {
    FUN_147852640((undefined8 *)(param_1 + 0x40),iVar1,0);
    memcpy(*(void **)(param_1 + 0x40),_Src,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  return param_1;
}



// FUNCTION 1478524a2 FUN_1478524a2 body=138 status=ok
// SIG undefined FUN_1478524a2(void)

void FUN_1478524a2(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 8;
  if (param_2 < 9) {
LAB_1478524b7:
    uVar1 = (uint)uVar2;
    if ((uVar1 < 9) && (*(longlong *)(param_1 + 0x100) == 0)) goto LAB_1478524e6;
    uVar3 = 0;
    if (8 < uVar1) {
      uVar3 = uVar2 & 0xffffffff;
    }
  }
  else {
    uVar1 = 0;
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 5,0);
    uVar2 = uVar2 >> 5;
    if ((int)param_2 <= (int)uVar2) {
      if ((int)uVar2 < 1) goto LAB_1478524e6;
      goto LAB_1478524b7;
    }
    uVar1 = 0x7fffffff;
    uVar3 = 0x7fffffff;
  }
  FUN_1446efa72(param_1 + 0x100,0,uVar3,0x20);
LAB_1478524e6:
  *(uint *)(param_1 + 0x10c) = uVar1;
  return;
}



// FUNCTION 14785252c FUN_14785252c body=138 status=ok
// SIG undefined FUN_14785252c(void)

void FUN_14785252c(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 4;
  if (param_2 < 5) {
LAB_147852541:
    uVar1 = (uint)uVar2;
    if ((uVar1 < 5) && (*(longlong *)(param_1 + 0x80) == 0)) goto LAB_147852570;
    uVar3 = 0;
    if (4 < uVar1) {
      uVar3 = uVar2 & 0xffffffff;
    }
  }
  else {
    uVar1 = 0;
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 5,0);
    uVar2 = uVar2 >> 5;
    if ((int)param_2 <= (int)uVar2) {
      if ((int)uVar2 < 1) goto LAB_147852570;
      goto LAB_147852541;
    }
    uVar1 = 0x7fffffff;
    uVar3 = 0x7fffffff;
  }
  FUN_1446efa72(param_1 + 0x80,0,uVar3,0x20);
LAB_147852570:
  *(uint *)(param_1 + 0x8c) = uVar1;
  return;
}



// FUNCTION 1478525b6 FUN_1478525b6 body=138 status=ok
// SIG undefined FUN_1478525b6(void)

void FUN_1478525b6(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 4;
  if (param_2 < 5) {
LAB_1478525cb:
    uVar1 = (uint)uVar2;
    if ((uVar1 < 5) && (*(longlong *)(param_1 + 0x80) == 0)) goto LAB_1478525fa;
    uVar3 = 0;
    if (4 < uVar1) {
      uVar3 = uVar2 & 0xffffffff;
    }
  }
  else {
    uVar1 = 0;
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 5,0);
    uVar2 = uVar2 >> 5;
    if ((int)param_2 <= (int)uVar2) {
      if ((int)uVar2 < 1) goto LAB_1478525fa;
      goto LAB_1478525cb;
    }
    uVar1 = 0x7fffffff;
    uVar3 = 0x7fffffff;
  }
  FUN_1446efa72(param_1 + 0x80,0,uVar3,0x20);
LAB_1478525fa:
  *(uint *)(param_1 + 0x8c) = uVar1;
  return;
}



// FUNCTION 147852640 FUN_147852640 body=98 status=ok
// SIG undefined FUN_147852640(void)

void FUN_147852640(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1478526a2 FUN_1478526a2 body=31 status=ok
// SIG undefined FUN_1478526a2(void)

undefined8 FUN_1478526a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478526dc FUN_1478526dc body=93 status=ok
// SIG undefined FUN_1478526dc(void)

void FUN_1478526dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5b59c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14785273a FUN_14785273a body=93 status=ok
// SIG undefined FUN_14785273a(void)

void FUN_14785273a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5b59c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147852798 FUN_147852798 body=126 status=ok
// SIG undefined FUN_147852798(void)

void FUN_147852798(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5b59c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147852807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147852816 FUN_147852816 body=35 status=ok
// SIG undefined FUN_147852816(void)

void FUN_147852816(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147852835. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 14785283a FUN_14785283a body=48 status=ok
// SIG undefined FUN_14785283a(void)

void FUN_14785283a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14785286a FUN_14785286a body=132 status=ok
// SIG undefined FUN_14785286a(void)

void FUN_14785286a(longlong param_1,int param_2)

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



// FUNCTION 147852916 FUN_147852916 body=77 status=ok
// SIG undefined FUN_147852916(void)

undefined8 * FUN_147852916(undefined8 *param_1,byte *param_2)

{
  byte *pbVar1;
  
  *param_1 = 0x100000000;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  if (0 < *(int *)(param_2 + 0x18)) {
    pbVar1 = *(byte **)(param_2 + 0x10);
    if (*(byte **)(param_2 + 0x10) == (byte *)0x0) {
      pbVar1 = param_2;
    }
    if ((*pbVar1 & 1) == 0) {
      FUN_1478484d8(param_1);
    }
  }
  return param_1;
}



// FUNCTION 147852964 FUN_147852964 body=135 status=ok
// SIG undefined FUN_147852964(void)

longlong FUN_147852964(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1478529ec();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_14785299e;
  }
  local_30 = param_3;
  FUN_147852abc(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_14785299e:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478529ec FUN_1478529ec body=207 status=ok
// SIG undefined FUN_1478529ec(void)

int FUN_1478529ec(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x20 + (longlong)iVar1 * 0x28)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x28);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 147852abc FUN_147852abc body=300 status=ok
// SIG undefined FUN_147852abc(void)

undefined4 * FUN_147852abc(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147852bea(param_1,local_40);
  lVar5 = *(longlong *)*param_4;
  *local_38 = lVar5;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_38[1] = 0;
  local_38[2] = 0;
  *(undefined1 *)(local_38 + 3) = 0;
  *(undefined4 *)(local_38 + 4) = 0xffffffff;
  cVar1 = FUN_147852cd0(param_1,param_3,local_38);
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
      *(uint *)((longlong)local_38 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 4) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_40[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_147852e08(param_1);
    }
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


