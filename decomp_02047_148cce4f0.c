// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148cce4f0 FUN_148cce4f0 body=697 status=ok
// SIG undefined FUN_148cce4f0(void)

void FUN_148cce4f0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e0;
  longlong local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_80;
  longlong local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_68 = 0x3f800000;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0x3f800000;
  lVar1 = *(longlong *)(param_1 + 0x3f70);
  if (lVar1 != 0) {
    local_68 = *(undefined4 *)(lVar1 + 0xf00);
    uStack_64 = *(undefined4 *)(lVar1 + 0xf04);
    uStack_60 = *(undefined4 *)(lVar1 + 0xf08);
    uStack_5c = *(undefined4 *)(lVar1 + 0xf0c);
  }
  local_49 = param_2;
  local_80 = FUN_14081cebe();
  if ((local_80 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_80);
  }
  local_108 = 0;
  FUN_141274158(local_78,param_1,&local_80,0);
  FUN_1440ade9e(&local_49,local_78,&local_68);
  local_98 = 0;
  uStack_90 = 0;
  local_100 = param_1;
  FUN_14490f2e4(param_1,&local_98,1,1);
  lVar1 = local_98;
  lVar4 = (longlong)(int)uStack_90;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar1 + lVar3);
      local_b0 = FUN_14081cebe();
      if ((local_b0 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(local_b0);
      }
      local_108 = 0;
      FUN_141274158(&local_a8,uVar2,&local_b0,0);
      local_c8 = local_68;
      uStack_c4 = uStack_64;
      uStack_c0 = uStack_60;
      uStack_bc = uStack_5c;
      FUN_1440ade9e(&local_49,&local_a8,&local_c8);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 != lVar3);
  }
  FUN_14153d700(&local_a8,local_100,0,0);
  lVar1 = local_a8;
  if ((longlong)local_a0 != 0) {
    lVar4 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar1 + lVar4);
      local_e0 = FUN_14081cebe();
      if ((local_e0 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(local_e0);
      }
      local_108 = 0;
      FUN_141274158(local_d8,uVar2,&local_e0,0);
      local_f8 = local_68;
      uStack_f4 = uStack_64;
      uStack_f0 = uStack_60;
      uStack_ec = uStack_5c;
      FUN_1440ade9e(&local_49,local_d8,&local_f8);
      if (local_d8[0] != 0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)local_a0 * 8 != lVar4);
  }
  if (local_a8 != 0) {
    FUN_1400020a8(local_a8);
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cce7c6 FUN_148cce7c6 body=12 status=ok
// SIG undefined FUN_148cce7c6(void)

byte FUN_148cce7c6(longlong param_1)

{
  return (*(byte *)(param_1 + 0x73e8) & 4) >> 2;
}



// FUNCTION 148cce7d2 FUN_148cce7d2 body=12 status=ok
// SIG undefined FUN_148cce7d2(void)

void FUN_148cce7d2(longlong param_1)

{
  FUN_140f330f4(param_1 + 0x71a8);
  return;
}



// FUNCTION 148cce7de FUN_148cce7de body=19 status=ok
// SIG undefined FUN_148cce7de(void)

undefined8 FUN_148cce7de(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_58 [40];
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  longlong lStack_18;
  ulonglong uStack_10;
  
  lVar2 = *(longlong *)(&DAT_00006850 + param_1);
  if (lVar2 == 0) {
    return 0;
  }
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(lVar2 + 0x1eb8) != (longlong *)0x0) {
    cVar4 = (**(code **)(**(longlong **)(lVar2 + 0x1eb8) + 0xb0))();
    uVar5 = 1;
    if (cVar4 == '\x02') goto LAB_1440ee88a;
    if (*(longlong **)(lVar2 + 0x1eb8) != (longlong *)0x0) {
      cVar4 = (**(code **)(**(longlong **)(lVar2 + 0x1eb8) + 0xb0))();
      uVar5 = 2;
      if (cVar4 == '\x04') goto LAB_1440ee88a;
    }
    lVar1 = *(longlong *)(lVar2 + 0x4210);
    if (((lVar1 != 0) && (*(longlong **)(lVar2 + 0x1eb8) != (longlong *)0x0)) &&
       (*(int *)(lVar1 + 0x6b4) < *(int *)(lVar1 + 0x688))) {
      plVar6 = (longlong *)(**(code **)(**(longlong **)(lVar2 + 0x1eb8) + 0xd0))();
      FUN_1446f470e(&lStack_18,L"blood",1);
      if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
        uVar3 = (uint)((ulonglong)lStack_18 >> 0x10);
        uVar8 = (uint)lStack_18 & 0xffff;
        plVar7 = plVar6 + 7;
        if ((longlong *)plVar6[8] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar6[8];
        }
        iVar9 = *(int *)((longlong)plVar7 +
                        (ulonglong)
                        ((int)plVar6[9] - 1U &
                        (int)((ulonglong)lStack_18 >> 0x20) + ((uint)lStack_18 << 0x10 | uVar8) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
        if (iVar9 != -1) {
          do {
            if (*(longlong *)(*plVar6 + (longlong)iVar9 * 0x10) == lStack_18) goto LAB_1440ee8a7;
            iVar9 = *(int *)((longlong)iVar9 * 0x10 + *plVar6 + 8);
          } while (iVar9 != -1);
        }
      }
      FUN_1446f470e(&lStack_20,L"Blood",1);
      if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
        uVar3 = (uint)((ulonglong)lStack_20 >> 0x10);
        uVar8 = (uint)lStack_20 & 0xffff;
        plVar7 = plVar6 + 7;
        if ((longlong *)plVar6[8] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar6[8];
        }
        iVar9 = *(int *)((longlong)plVar7 +
                        (ulonglong)
                        ((int)plVar6[9] - 1U &
                        (int)((ulonglong)lStack_20 >> 0x20) + ((uint)lStack_20 << 0x10 | uVar8) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
        if (iVar9 != -1) {
          do {
            if (*(longlong *)(*plVar6 + (longlong)iVar9 * 0x10) == lStack_20) goto LAB_1440ee8a7;
            iVar9 = *(int *)((longlong)iVar9 * 0x10 + *plVar6 + 8);
          } while (iVar9 != -1);
        }
      }
      FUN_1446f470e(&lStack_28,&DAT_14b964cc4,1);
      if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
        uVar3 = (uint)((ulonglong)lStack_28 >> 0x10);
        uVar8 = (uint)lStack_28 & 0xffff;
        plVar7 = plVar6 + 7;
        if ((longlong *)plVar6[8] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar6[8];
        }
        iVar9 = *(int *)((longlong)plVar7 +
                        (ulonglong)
                        ((int)plVar6[9] - 1U &
                        (int)((ulonglong)lStack_28 >> 0x20) + ((uint)lStack_28 << 0x10 | uVar8) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
        if (iVar9 != -1) {
          do {
            if (*(longlong *)(*plVar6 + (longlong)iVar9 * 0x10) == lStack_28) goto LAB_1440ee8ab;
            iVar9 = *(int *)((longlong)iVar9 * 0x10 + *plVar6 + 8);
          } while (iVar9 != -1);
        }
      }
      FUN_1446f470e(&lStack_30,&DAT_14b964ccc,1);
      if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
        uVar3 = (uint)((ulonglong)lStack_30 >> 0x10);
        uVar8 = (uint)lStack_30 & 0xffff;
        plVar7 = plVar6 + 7;
        if ((longlong *)plVar6[8] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar6[8];
        }
        iVar9 = *(int *)((longlong)plVar7 +
                        (ulonglong)
                        ((int)plVar6[9] - 1U &
                        (int)((ulonglong)lStack_30 >> 0x20) + ((uint)lStack_30 << 0x10 | uVar8) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
        if (iVar9 != -1) {
          do {
            if (*(longlong *)(*plVar6 + (longlong)iVar9 * 0x10) == lStack_30) goto LAB_1440ee8ab;
            iVar9 = *(int *)((longlong)iVar9 * 0x10 + *plVar6 + 8);
            uVar5 = 0;
          } while (iVar9 != -1);
          goto LAB_1440ee88a;
        }
      }
    }
  }
  uVar5 = 0;
LAB_1440ee88a:
  if ((uStack_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
LAB_1440ee8a7:
  uVar5 = 3;
  goto LAB_1440ee88a;
LAB_1440ee8ab:
  uVar5 = 4;
  goto LAB_1440ee88a;
}



// FUNCTION 148cce7f2 FUN_148cce7f2 body=142 status=ok
// SIG undefined FUN_148cce7f2(void)

byte FUN_148cce7f2(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *(longlong *)(&DAT_00006850 + param_1);
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
    if ((*(double *)(lVar1 + 0x628) == DAT_14c8464e0) &&
       (!NAN(*(double *)(lVar1 + 0x628)) && !NAN(DAT_14c8464e0))) {
      if ((*(double *)(lVar1 + 0x630) == DAT_14c8464e8) &&
         (!NAN(*(double *)(lVar1 + 0x630)) && !NAN(DAT_14c8464e8))) {
        if ((((*(double *)(lVar1 + 0x638) == DAT_14c8464f0) &&
             (!NAN(*(double *)(lVar1 + 0x638)) && !NAN(DAT_14c8464f0))) &&
            (*(double *)(lVar1 + 0x128) == DAT_14c8464e0)) &&
           (((!NAN(*(double *)(lVar1 + 0x128)) && !NAN(DAT_14c8464e0) &&
             (*(double *)(lVar1 + 0x130) == DAT_14c8464e8)) &&
            (!NAN(*(double *)(lVar1 + 0x130)) && !NAN(DAT_14c8464e8))))) {
          bVar2 = -(DAT_14c8464f0 != *(double *)(lVar1 + 0x138)) & 1;
        }
      }
    }
  }
  return bVar2;
}



// FUNCTION 148cce880 FUN_148cce880 body=40 status=ok
// SIG undefined FUN_148cce880(void)

void FUN_148cce880(longlong param_1,byte param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(&DAT_00006850 + param_1);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x4458) = *(uint *)(lVar1 + 0x4458) & 0xfffffffe | (uint)param_2;
    *(undefined1 *)(lVar1 + 0x4448) = param_3;
  }
  return;
}



// FUNCTION 148cce8a8 FUN_148cce8a8 body=25 status=ok
// SIG undefined FUN_148cce8a8(void)

undefined8 FUN_148cce8a8(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(&DAT_00006850 + param_1) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cce8b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(&DAT_00006850 + param_1) + 0xf38))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 148cce8c2 FUN_148cce8c2 body=19 status=ok
// SIG undefined FUN_148cce8c2(void)

bool FUN_148cce8c2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(&DAT_00006850 + param_1);
  if (lVar3 == 0) {
    return false;
  }
  if (*(longlong *)(lVar3 + 0x43d8) == 0) {
    return false;
  }
  lVar4 = *(longlong *)(lVar3 + 0x43d8) + 0x20;
  lVar1 = FUN_14485c28e(lVar4);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_14485c28e(lVar4);
  }
  if (*(longlong *)(lVar3 + 0x3170) == 0) {
    if (*(char *)(lVar3 + 0x34b0) != '\x01') {
      return false;
    }
    lVar4 = lVar3 + 0x3210;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x3170) + 0xd8;
  }
  lVar2 = FUN_140153468(lVar4);
  if (lVar2 == 0) {
    return false;
  }
  if ((*(byte *)(lVar4 + 0x298) & 2) != 0) {
    return false;
  }
  if (*(longlong *)(lVar3 + 0x110) == 0) {
    return false;
  }
  if (*(longlong *)(lVar3 + 0x3170) == 0) {
    if (*(char *)(lVar3 + 0x34b0) != '\x01') {
      return false;
    }
    lVar4 = lVar3 + 0x3210;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x3170) + 0xd8;
  }
  lVar4 = FUN_140153468(lVar4);
  if (lVar1 == 0) {
    return false;
  }
  if (lVar4 == 0) {
    return false;
  }
  if (*(longlong *)(lVar3 + 0x3170) == 0) {
    if (*(char *)(lVar3 + 0x34b0) != '\x01') {
      lVar3 = 0;
      goto LAB_141215acf;
    }
    lVar3 = lVar3 + 0x3210;
  }
  else {
    lVar3 = *(longlong *)(lVar3 + 0x3170) + 0xd8;
  }
  lVar3 = FUN_140153468(lVar3);
LAB_141215acf:
  return lVar3 == lVar1;
}



// FUNCTION 148cce8d6 FUN_148cce8d6 body=129 status=ok
// SIG undefined FUN_148cce8d6(void)

undefined8 FUN_148cce8d6(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = -1;
  local_28 = -1;
  cVar2 = FUN_140ae5c1d(param_2);
  iVar1 = local_28;
  if ((cVar2 == '\0') || (iVar4 = local_24, local_28 < local_24)) {
    uVar3 = 0;
  }
  else {
    do {
      uVar3 = FUN_140368a1a(param_1,iVar4);
      if ((char)uVar3 != '\0') break;
      bVar5 = iVar1 != iVar4;
      iVar4 = iVar4 + 1;
    } while (bVar5);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 148cce9a0 FUN_148cce9a0 body=27 status=ok
// SIG undefined FUN_148cce9a0(void)

undefined8 FUN_148cce9a0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x3f70) == 0) {
    return 0;
  }
  uVar1 = FUN_148cd08c6(*(longlong *)(param_1 + 0x3f70) + 0x1030);
  return uVar1;
}



// FUNCTION 148cce9bc FUN_148cce9bc body=234 status=ok
// SIG undefined FUN_148cce9bc(void)

void FUN_148cce9bc(longlong param_1,undefined8 param_2)

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
  if (*(char *)(param_1 + 0x178) == '\x03') {
    uVar5 = FUN_1447210f0();
    FUN_140a702f6(&local_30,uVar5);
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
        if (local_30 != 0) {
          FUN_147f5f4ec(local_30,param_1,DAT_14cbc1d88);
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
      }
    }
    FUN_1437e8e50(param_1 + 0x89c8,param_2,param_1);
    FUN_148bf702e(param_1 + 0x89e0,param_2,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cceaae FUN_148cceaae body=199 status=ok
// SIG undefined FUN_148cceaae(void)

void FUN_148cceaae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x8a10) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x8a10) + 0xa08), lVar3 != 0)) {
    lVar5 = FUN_144a2f878();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      FUN_14150ea58(lVar3 + 0x6c48,&local_38);
      if (local_38 != 0) {
        FUN_148de24dc(local_38,param_1);
      }
      goto LAB_148cceb07;
    }
  }
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
LAB_148cceb07:
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cceb76 FUN_148cceb76 body=54 status=ok
// SIG undefined FUN_148cceb76(void)

bool FUN_148cceb76(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  
  if ((param_2 == (longlong *)0x0) || (*(char *)(param_1 + 0x8a08) != '\x01')) {
    bVar2 = false;
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x5d8))(param_2);
    bVar2 = *(longlong *)(param_1 + 0x8a10) == lVar1;
  }
  return bVar2;
}



// FUNCTION 148ccebac FUN_148ccebac body=148 status=ok
// SIG undefined FUN_148ccebac(void)

undefined8 FUN_148ccebac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((param_2 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) &&
      (*(char *)(param_1 + 0x8a08) == '\0')) && (lVar1 = *(longlong *)(param_2 + 0x3c0), lVar1 != 0)
     ) {
    lVar2 = FUN_144a5dd5e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      *(undefined1 *)(param_1 + 0x8a08) = 1;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar1);
      }
      *(longlong *)(param_1 + 0x8a10) = lVar1;
      FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x51);
      FUN_148cceaae(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 148ccec40 FUN_148ccec40 body=110 status=ok
// SIG undefined FUN_148ccec40(void)

undefined8 FUN_148ccec40(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((((param_2 != (longlong *)0x0) && (*(char *)(param_1 + 0x178) == '\x03')) &&
      (*(char *)(param_1 + 0x8a08) == '\x01')) &&
     (lVar1 = (**(code **)(*param_2 + 0x5d8))(param_2), *(longlong *)(param_1 + 0x8a10) == lVar1)) {
    *(undefined1 *)(param_1 + 0x8a08) = 0;
    *(undefined8 *)(param_1 + 0x8a10) = 0;
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x51);
    FUN_148cceaae(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 148ccecae FUN_148ccecae body=112 status=ok
// SIG undefined FUN_148ccecae(void)

undefined4 FUN_148ccecae(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(&DAT_00006850 + param_1) == 0) {
    uVar1 = 0;
  }
  else {
    local_19 = 0;
    uVar1 = FUN_1459e1b38();
    if ((char)uVar1 == '\0') {
      FUN_140fb2b78(*(undefined8 *)(&DAT_00006850 + param_1),0x200000,local_19);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cced20 FUN_148cced20 body=312 status=ok
// SIG undefined FUN_148cced20(void)

void FUN_148cced20(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  FUN_1488088a6();
  (**(code **)(*param_1 + 0x6c8))(param_1);
  cVar5 = (**(code **)(*param_1 + 0x700))(param_1);
  if (cVar5 != '\0') {
    if (param_1[0x78] != 0) {
      lVar7 = FUN_144a5dd5e();
      plVar3 = (longlong *)param_1[0x78];
      if ((((plVar3 != (longlong *)0x0) && (lVar7 != 0)) && (lVar8 = plVar3[2], lVar8 != 0)) &&
         ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar8 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
           lVar7 + 0x30)))) {
        (**(code **)(*plVar3 + 0xcb8))(plVar3,param_1[0x7d6]);
      }
    }
    plVar3 = (longlong *)param_1[0xebc];
    if (plVar3 != (longlong *)0x0) {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) {
          return;
        }
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar9 = iVar6 == iVar4;
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar9);
      lVar7 = param_1[0xebb];
      if (lVar7 != 0) {
        if (((param_1[0xd0a] != 0) && (lVar8 = FUN_140caafdc(), lVar8 != 0)) &&
           (lVar8 = FUN_140caafdc(param_1[0xd0a]), *(char *)(lVar8 + 0x178) == '\x01')) {
          FUN_148d34956(lVar7,DAT_14cbc1d60,1);
          FUN_145745220(lVar7,DAT_14cbc1d60,1);
        }
        thunk_FUN_1411b6e1a(lVar7,1);
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
                    /* WARNING: Could not recover jumptable at 0x000148ccee4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148ccee58 FUN_148ccee58 body=384 status=ok
// SIG undefined FUN_148ccee58(void)

void FUN_148ccee58(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1488088a8();
  (**(code **)(*param_1 + 0x6c8))(param_1);
  cVar7 = (**(code **)(*param_1 + 0x700))(param_1);
  if (cVar7 != '\0') {
    if (param_1[0x78] != 0) {
      lVar9 = FUN_144a5dd5e();
      lVar3 = param_1[0x78];
      if ((((lVar3 != 0) && (lVar9 != 0)) && (lVar4 = *(longlong *)(lVar3 + 0x10), lVar4 != 0)) &&
         ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar4 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30)))) {
        lVar9 = param_1[0x7d7];
        FUN_1412354b2(lVar3,&local_38);
        local_40 = 0;
        local_48 = 0;
        thunk_FUN_1459a44de(lVar3,local_38,0,(int)lVar9);
      }
    }
    plVar5 = (longlong *)param_1[0xebc];
    if (plVar5 != (longlong *)0x0) {
      iVar8 = (int)plVar5[1];
      do {
        if (iVar8 == 0) goto LAB_148ccefb5;
        LOCK();
        iVar6 = (int)plVar5[1];
        bVar10 = iVar8 == iVar6;
        if (bVar10) {
          *(int *)(plVar5 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar10);
      lVar3 = param_1[0xebb];
      if (lVar3 != 0) {
        if (((param_1[0xd0a] != 0) && (lVar9 = FUN_140caafdc(), lVar9 != 0)) &&
           (lVar9 = FUN_140caafdc(param_1[0xd0a]), *(char *)(lVar9 + 0x178) == '\x01')) {
          FUN_148d34956(lVar3,DAT_14cbc1d60,0);
          FUN_145745220(lVar3,DAT_14cbc1d60,0);
        }
        thunk_FUN_1411b6e1a(lVar3,0);
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
  }
LAB_148ccefb5:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ccefda FUN_148ccefda body=48 status=ok
// SIG undefined FUN_148ccefda(void)

void FUN_148ccefda(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x700))();
  if (cVar1 != '\0') {
    FUN_148bf7076(param_1 + 0x7d2);
    return;
  }
  return;
}



// FUNCTION 148ccf00a FUN_148ccf00a body=48 status=ok
// SIG undefined FUN_148ccf00a(void)

void FUN_148ccf00a(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x700))();
  if (cVar1 != '\0') {
    FUN_148bf7076(param_1 + 0x7d4);
    return;
  }
  return;
}



// FUNCTION 148ccf03a FUN_148ccf03a body=31 status=ok
// SIG undefined FUN_148ccf03a(void)

void FUN_148ccf03a(longlong *param_1)

{
  FUN_1488088aa();
                    /* WARNING: Could not recover jumptable at 0x000148ccf052. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x700))(param_1);
  return;
}



// FUNCTION 148ccf066 FUN_148ccf066 body=192 status=ok
// SIG undefined FUN_148ccf066(void)

void FUN_148ccf066(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_1459f32ee();
    lVar3 = (**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (lVar3 != 0) {
      uVar1 = FUN_1459f32ee();
      lVar4 = FUN_144718840(lVar3,uVar1);
      if (lVar4 != 0 && lVar3 != lVar4) {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(param_2);
        }
        bVar2 = DAT_14c950c29;
        *(longlong **)(param_1 + 0x53f0) = param_2;
        if ((bVar2 & 1) != 0) {
          FUN_1456cec3c(param_2);
        }
        *(longlong **)(param_1 + 0x53f8) = param_2;
        *(longlong *)(param_1 + 0x5400) = lVar4;
        FUN_144a62f0c(param_1 + -0x3bb8,*(undefined8 *)(param_1 + -0x3b90),0x68);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ccf152 FUN_148ccf152 body=356 status=ok
// SIG undefined FUN_148ccf152(void)

void FUN_148ccf152(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  plVar1 = param_1 + -0x22d;
  lVar4 = param_1[0xadd];
  if (lVar4 != 0) {
    if ((*(longlong *)(&DAT_00001ce8 + lVar4) == 0) ||
       (*(byte *)(*(longlong *)(&DAT_00001ce8 + lVar4) + 0x178) < 2)) {
      cVar3 = *(char *)(lVar4 + 0x1ee9);
    }
    else {
      plVar6 = *(longlong **)(lVar4 + 0x1eb8);
      if (plVar6 == (longlong *)0x0) goto LAB_148ccf1aa;
      cVar3 = (**(code **)(*plVar6 + 0x70))(plVar6,0);
    }
    if (cVar3 != '\0') {
      (**(code **)(*plVar1 + 0x928))(plVar1,6);
      goto LAB_148ccf217;
    }
  }
LAB_148ccf1aa:
  lVar4 = FUN_1447210f0(plVar1);
  if (((((lVar4 == 0) || (lVar4 = FUN_14494016c(lVar4,1,1), lVar4 == 0)) ||
       (lVar2 = *(longlong *)(lVar4 + 0x410), lVar2 == 0)) ||
      ((lVar5 = FUN_1411311bc(), lVar5 == 0 || (*(int *)(lVar2 + 0x38) < *(int *)(lVar5 + 0x38)))))
     || ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30 || (lVar2 = *(longlong *)(lVar4 + 0x410), lVar2 == 0)))) {
    plVar6 = (longlong *)FUN_1411311bc();
    lVar4 = plVar6[0x22];
  }
  else {
    lVar5 = FUN_1411311bc();
    if (((lVar5 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(lVar4 + 0x410);
    }
    lVar4 = plVar6[0x22];
  }
  if ((lVar4 != 0) || ((**(code **)(*plVar6 + 1000))(plVar6), plVar6[0x22] != 0)) {
    (**(code **)(*plVar1 + 0x510))(plVar1);
  }
LAB_148ccf217:
  uVar7 = (**(code **)(*param_1 + 0x18))(param_1);
  FUN_148929bba(uVar7);
  return;
}



// FUNCTION 148ccf2b6 FUN_148ccf2b6 body=165 status=ok
// SIG undefined FUN_148ccf2b6(void)

void FUN_148ccf2b6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < *(int *)(param_1 + 0x78f0)) {
    lVar3 = 0x28;
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x78e8) + lVar3);
      if (plVar1 != (longlong *)0x0 &&
          *(longlong *)(*(longlong *)(param_1 + 0x78e8) + -8 + lVar3) != 0) {
        lVar2 = (**(code **)(*plVar1 + 8))();
        if (lVar2 != 0) {
          local_38 = lVar2;
          FUN_140bfeb58(param_3,&local_38);
        }
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x48;
    } while (lVar4 < *(int *)(param_1 + 0x78f0));
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ccf35c FUN_148ccf35c body=45 status=ok
// SIG undefined FUN_148ccf35c(void)

void FUN_148ccf35c(longlong param_1)

{
  FUN_1487bc1a8();
  FUN_1447f69b6(param_1 + 0x6eb8);
  FUN_145c7c2ca(param_1 + 0x4ea0);
  return;
}



// FUNCTION 148ccf38a FUN_148ccf38a body=188 status=ok
// SIG undefined FUN_148ccf38a(void)

void FUN_148ccf38a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  FUN_1487bc1c2();
  FUN_148d57ca0(param_1 + 0x3ad8);
  FUN_1447f69b6(param_1 + 0x6eb8);
  plVar3 = *(longlong **)(param_1 + 0x75e0);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  iVar7 = (int)plVar3[1];
  do {
    if (iVar7 == 0) {
      return;
    }
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar8 = iVar7 == iVar6;
    if (bVar8) {
      *(int *)(plVar3 + 1) = iVar7 + 1;
      iVar6 = iVar7;
    }
    iVar7 = iVar6;
    UNLOCK();
  } while (!bVar8);
  lVar4 = *(longlong *)(param_1 + 0x75d8);
  if ((lVar4 != 0) && (0 < *(int *)(param_1 + 0x6190))) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x6188) + 0x20);
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    else if (lVar5 == 0) goto LAB_148ccf40e;
    FUN_140eeb9a0(lVar4,lVar5);
  }
LAB_148ccf40e:
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
                    /* WARNING: Could not recover jumptable at 0x000148ccf42f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 148ccf446 FUN_148ccf446 body=52 status=ok
// SIG undefined FUN_148ccf446(void)

undefined8 * FUN_148ccf446(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x318) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_148ccf47a(*(longlong *)(param_1 + 0x318) + 0x1090,param_2);
  }
  return param_2;
}



// FUNCTION 148ccf47a FUN_148ccf47a body=88 status=ok
// SIG undefined FUN_148ccf47a(void)

undefined8 * FUN_148ccf47a(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  uVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    param_2[1] = plVar4;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 148ccf4d2 FUN_148ccf4d2 body=102 status=ok
// SIG undefined FUN_148ccf4d2(void)

void FUN_148ccf4d2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_148e04750();
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_148bf7082(&DAT_00005d38 + param_1,lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ccf538 FUN_148ccf538 body=102 status=ok
// SIG undefined FUN_148ccf538(void)

void FUN_148ccf538(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_148e04752();
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar1 != 0) {
      lVar2 = FUN_144a5dd5e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_148bf7082(param_1 + 0x5d48,lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148ccf5a4 FUN_148ccf5a4 body=35 status=ok
// SIG undefined FUN_148ccf5a4(void)

byte FUN_148ccf5a4(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  
  bVar1 = FUN_1487f1b14(param_1 + 0x3748);
  return bVar1 & 1 < *(int *)(param_3 + 8);
}



// FUNCTION 148ccf5c8 FUN_148ccf5c8 body=28 status=ok
// SIG undefined FUN_148ccf5c8(void)

void FUN_148ccf5c8(longlong param_1,undefined8 param_2)

{
  FUN_14594588a(param_1 + 0x1180,&DAT_14cbc1c78,param_2,1);
  return;
}



// FUNCTION 148ccf5e4 FUN_148ccf5e4 body=45 status=ok
// SIG undefined FUN_148ccf5e4(void)

byte FUN_148ccf5e4(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = FUN_1487f1b14(param_1 + 0x3748,&DAT_14cbc1c78,param_2);
  return bVar1 & 1 < *(int *)(param_2 + 8);
}



// FUNCTION 148ccf612 FUN_148ccf612 body=28 status=ok
// SIG undefined FUN_148ccf612(void)

void FUN_148ccf612(longlong param_1,undefined8 param_2)

{
  FUN_14594588a(param_1 + 0x1180,&DAT_14cbc1c80,param_2,1);
  return;
}



// FUNCTION 148ccf62e FUN_148ccf62e body=45 status=ok
// SIG undefined FUN_148ccf62e(void)

byte FUN_148ccf62e(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = FUN_1487f1b14(param_1 + 0x3748,&DAT_14cbc1c80,param_2);
  return bVar1 & 1 < *(int *)(param_2 + 8);
}



// FUNCTION 148ccf65c FUN_148ccf65c body=659 status=ok
// SIG undefined FUN_148ccf65c(void)

void FUN_148ccf65c(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  longlong local_70;
  code *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    uVar1 = *(uint *)(param_1 + 0x6888);
    uVar13 = (ulonglong)(int)uVar1;
    if (uVar13 == 0) {
      iVar8 = 0;
    }
    else {
      plVar2 = *(longlong **)(param_1 + 0x6880);
      lVar6 = 0;
      do {
        if (*(longlong *)((longlong)plVar2 + lVar6) == param_2) {
          if (lVar6 + (longlong)plVar2 != 0) goto LAB_148ccf875;
          break;
        }
        lVar6 = lVar6 + 0x10;
      } while (uVar13 << 4 != lVar6);
      uVar5 = 1;
      if (*plVar2 != 0) {
        uVar5 = *(uint *)(*plVar2 + 8) >> 0x1e & 1;
      }
      iVar8 = 0;
      uVar12 = 0;
      local_70 = param_1;
LAB_148ccf6ee:
      do {
        iVar4 = (int)uVar12;
        uVar12 = (ulonglong)(iVar4 + 1U);
        lVar6 = (longlong)iVar4;
        if ((int)(iVar4 + 1U) < (int)uVar1) {
          uVar12 = lVar6 + 1;
          plVar11 = plVar2 + lVar6 * 2 + 2;
          bVar3 = true;
          do {
            if (*plVar11 == 0) {
              if (uVar5 == 0) goto LAB_148ccf759;
            }
            else if ((((byte)((uint)*(undefined4 *)(*plVar11 + 8) >> 0x1e) ^ (byte)uVar5) & 1) != 0)
            goto LAB_148ccf742;
            uVar12 = uVar12 + 1;
            bVar3 = (longlong)uVar12 < (longlong)uVar13;
            plVar11 = plVar11 + 2;
          } while (uVar13 != uVar12);
          uVar12 = (ulonglong)uVar1;
LAB_148ccf742:
          if (uVar5 != 0) {
            uVar5 = 0;
            if (!bVar3) break;
            goto LAB_148ccf6ee;
          }
        }
        else {
          if (uVar5 != 0) break;
          bVar3 = false;
        }
LAB_148ccf759:
        iVar10 = (int)uVar12 - iVar4;
        if (iVar8 != iVar4) {
          memmove(plVar2 + (longlong)iVar8 * 2,plVar2 + lVar6 * 2,(longlong)iVar10 << 4);
        }
        iVar8 = iVar8 + iVar10;
        uVar5 = 1;
      } while (bVar3);
      *(int *)(local_70 + 0x6888) = iVar8;
      param_1 = local_70;
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
      iVar8 = *(int *)(param_1 + 0x6888);
    }
    *(uint *)(param_1 + 0x6888) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x688c) < iVar8 + 1U) {
      FUN_148cd39a0((longlong *)(param_1 + 0x6880),iVar8);
    }
    lVar7 = *(longlong *)(param_1 + 0x6880);
    lVar6 = lVar7 + (longlong)iVar8 * 0x10;
    *(longlong *)(lVar7 + (longlong)iVar8 * 0x10) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(undefined8 *)(lVar6 + 8) = 0;
    lVar7 = FUN_144a2f878();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
         ) != lVar7 + 0x30)) {
      local_68 = (code *)&LAB_148ccfb50;
      local_60 = 0;
      puVar9 = &local_50;
      FUN_148ccfa50(param_2 + 0x2b8,puVar9,param_1);
    }
    else {
      local_50 = 0;
      FUN_14485c47a(&local_50,param_2);
      local_68 = FUN_148ccfa04;
      local_60 = 0;
      puVar9 = &local_58;
      local_78 = &local_50;
      FUN_148ccf8f0(param_2 + 0x4e80,puVar9,param_1);
    }
    *(undefined8 *)(lVar6 + 8) = *puVar9;
    FUN_148cd3f64(param_1 + 0x6868,param_2,0);
  }
LAB_148ccf875:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148ccf8f0 FUN_148ccf8f0 body=274 status=ok
// SIG undefined FUN_148ccf8f0(void)

undefined8
FUN_148ccf8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14ab672c0;
  local_50[1] = *param_5;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_50[2] = lVar5;
  *local_50 = &PTR_FUN_14b95c7d0;
  local_50[3] = 0;
  FUN_14485c47a(local_50 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_50);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ccfa04 FUN_148ccfa04 body=74 status=ok
// SIG undefined FUN_148ccfa04(void)

void FUN_148ccfa04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_14479d2ce();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_148ccfb56(param_1,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ccfa50 FUN_148ccfa50 body=254 status=ok
// SIG undefined FUN_148ccfa50(void)

undefined8
FUN_148ccfa50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14a3a3510;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b95c840;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_14490d954(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ccfb56 FUN_148ccfb56 body=339 status=ok
// SIG undefined FUN_148ccfb56(void)

void FUN_148ccfb56(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_1 + 0x6888);
  if ((longlong)iVar2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x6880);
    lVar4 = *(longlong *)(param_1 + 0x6880);
    lVar7 = 0;
    uVar5 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar7) == param_2) {
        if (iVar2 <= (int)uVar5 || (int)uVar5 < 0) {
          return;
        }
        if (param_2 != 0) {
          lVar7 = FUN_144a2f878();
          if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) {
            lVar4 = *plVar1;
          }
          else {
            lVar4 = *plVar1;
            if (*(longlong *)
                 (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30) {
              lVar4 = *(longlong *)(lVar4 + 8 + (ulonglong)(uVar5 & 0x7fffffff) * 0x10);
              lVar7 = 0x4e80;
              goto LAB_148ccfbd5;
            }
          }
        }
        lVar4 = *(longlong *)(lVar4 + 8 + (ulonglong)(uVar5 & 0x7fffffff) * 0x10);
        lVar7 = 0x2b8;
LAB_148ccfbd5:
        if (lVar4 != 0) {
          FUN_14480f766(lVar7 + param_2);
        }
        FUN_148cd3f64(param_1 + 0x6868,param_2,1);
        iVar2 = *(int *)(param_1 + 0x6888);
        if (iVar2 - 1U != uVar5) {
          iVar3 = (iVar2 - 1U) - uVar5;
          iVar6 = 1;
          if (iVar3 < 1) {
            iVar6 = iVar3;
          }
          memmove((void *)((ulonglong)(uVar5 & 0x7fffffff) * 0x10 + *(longlong *)(param_1 + 0x6880))
                  ,(void *)((longlong)(iVar2 - iVar6) * 0x10 + *(longlong *)(param_1 + 0x6880)),
                  (longlong)iVar6 << 4);
          iVar2 = *(int *)(param_1 + 0x6888);
        }
        *(int *)(param_1 + 0x6888) = iVar2 + -1;
        FUN_148cd4014(plVar1);
        return;
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar2 << 4 != lVar7);
  }
  return;
}



// FUNCTION 148ccfcaa FUN_148ccfcaa body=41 status=ok
// SIG undefined FUN_148ccfcaa(void)

longlong * FUN_148ccfcaa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x6888) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x6880);
    lVar2 = (longlong)*(int *)(param_1 + 0x6888) << 4;
    do {
      if (*plVar1 == param_2) {
        return plVar1;
      }
      plVar1 = plVar1 + 2;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  return (longlong *)0x0;
}



// FUNCTION 148ccfcea FUN_148ccfcea body=51 status=ok
// SIG undefined FUN_148ccfcea(void)

longlong FUN_148ccfcea(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x3990);
  if (cVar1 == '\0') {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_14479d2ce(param_1 + 0x3990);
    lVar2 = lVar2 + 0x268;
  }
  return lVar2;
}



// FUNCTION 148ccfd1e FUN_148ccfd1e body=45 status=ok
// SIG undefined FUN_148ccfd1e(void)

undefined8 FUN_148ccfd1e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x3c20) + 0x10))(param_1 + 0x3c20);
  if (lVar1 != 0) {
    uVar2 = FUN_148f05a58(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148ccfd4c FUN_148ccfd4c body=45 status=ok
// SIG undefined FUN_148ccfd4c(void)

undefined8 FUN_148ccfd4c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x3c20) + 0x10))(param_1 + 0x3c20);
  if (lVar1 != 0) {
    uVar2 = FUN_148f05a60(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148ccfd7a FUN_148ccfd7a body=239 status=ok
// SIG undefined FUN_148ccfd7a(void)

void FUN_148ccfd7a(longlong param_1,float param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    lVar2 = FUN_140cf8388();
    if (lVar2 != 0) {
      local_38 = 0;
      FUN_14485c47a(&local_38,param_1);
      cVar1 = FUN_1488d603e(lVar2,local_38);
      if (cVar1 == '\0') {
        FUN_148cccd00(param_1);
        local_40 = 0;
        FUN_14485c47a(&local_40,param_1);
        cVar1 = FUN_1488d603e(lVar2,local_40);
        if ((1e-08 <= param_2) && (cVar1 != '\0')) goto LAB_148ccfe43;
      }
      else if (1e-08 <= param_2) {
LAB_148ccfe43:
        local_48 = 0;
        FUN_14485c47a(&local_48,param_1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ccfe88 FUN_148ccfe88 body=252 status=ok
// SIG undefined FUN_148ccfe88(void)

void FUN_148ccfe88(longlong param_1,float param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    lVar2 = FUN_140cf8388();
    if (lVar2 != 0) {
      local_48 = 0;
      FUN_14485c47a(&local_48,param_1);
      cVar1 = FUN_1488d603e(lVar2,local_48);
      if (cVar1 == '\0') {
        FUN_148cccd00(param_1);
        local_50 = 0;
        FUN_14485c47a(&local_50,param_1);
        cVar1 = FUN_1488d603e(lVar2,local_50);
        if ((1e-08 <= param_2) && (cVar1 != '\0')) goto LAB_148ccff5e;
      }
      else if (1e-08 <= param_2) {
LAB_148ccff5e:
        local_58 = 0;
        FUN_14485c47a(&local_58,param_1);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148ccffa8 FUN_148ccffa8 body=116 status=ok
// SIG undefined FUN_148ccffa8(void)

void FUN_148ccffa8(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    lVar1 = FUN_140cf8388();
    if (lVar1 != 0) {
      local_28 = 0;
      FUN_14485c47a(&local_28,param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd0030 FUN_148cd0030 body=128 status=ok
// SIG undefined FUN_148cd0030(void)

void FUN_148cd0030(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x7988) = *param_2;
  lVar1 = FUN_140cf8388();
  if (lVar1 != 0) {
    local_30 = 0;
    FUN_14485c47a(&local_30,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd00c8 FUN_148cd00c8 body=125 status=ok
// SIG undefined FUN_148cd00c8(void)

void FUN_148cd00c8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x7990) = param_2;
  lVar1 = FUN_140cf8388();
  if (lVar1 != 0) {
    local_30 = 0;
    FUN_14485c47a(&local_30,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd015e FUN_148cd015e body=129 status=ok
// SIG undefined FUN_148cd015e(void)

longlong * FUN_148cd015e(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = *(longlong *)(param_1 + 800);
  if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 0xf30), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(lVar3 + 0xf28);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      if (lVar4 != 0) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1446f84a2(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return param_2;
}



// FUNCTION 148cd01e0 FUN_148cd01e0 body=49 status=ok
// SIG undefined FUN_148cd01e0(void)

void FUN_148cd01e0(longlong param_1)

{
  FUN_1478c1b8e();
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_14885abf2(param_1 + 0x40e8);
    return;
  }
  return;
}



// FUNCTION 148cd0212 FUN_148cd0212 body=507 status=ok
// SIG undefined FUN_148cd0212(void)

void FUN_148cd0212(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined8 **local_98;
  undefined1 local_90 [8];
  longlong local_88;
  longlong *local_80;
  undefined8 *local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = FUN_1403ca227();
  lVar4 = FUN_141450dba(lVar4 + 0x338);
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*(longlong *)(param_1 + 0x10e0) + 0x50))(param_1 + 0x10e0);
    local_98 = &local_78;
    local_58 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    uStack_50 = 0x8000000000;
    local_48 = 0xffffffff;
    FUN_14122243a(uVar5,&local_88,lVar4,1);
    uStack_30 = uStack_30 & 0xffffffff00000000;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    FUN_140333f4e(&local_78);
    if ((local_88 != 0) && (*(char *)(local_88 + 0xa0) == '\0')) {
      local_78 = (undefined8 *)0x0;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      FUN_1446efa72(&local_78,0,3,0x10);
      puVar3 = local_78;
      uStack_70 = CONCAT44(uStack_70._4_4_,3);
      *local_78 = &PTR_LAB_14b3e9c20;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_78[2] = lVar6;
      *local_78 = &PTR_FUN_14b95c920;
      local_78[3] = 0;
      FUN_14485c47a(local_78 + 3,param_1);
      puVar3[4] = param_1;
      FUN_140ebcfd8(local_88 + 0x18,local_90,&local_78);
      FUN_1449db362(&local_78);
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
      goto LAB_148cd0301;
    }
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
  }
  thunk_FUN_140aeefbc(param_1);
LAB_148cd0301:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd040e FUN_148cd040e body=12 status=ok
// SIG undefined FUN_148cd040e(void)

void FUN_148cd040e(longlong param_1)

{
  FUN_1415138ca(param_1 + 0x9b60);
  return;
}



// FUNCTION 148cd0436 FUN_148cd0436 body=12 status=ok
// SIG undefined FUN_148cd0436(void)

void FUN_148cd0436(longlong param_1)

{
  FUN_148e02488(param_1 + 0x9b60);
  return;
}



// FUNCTION 148cd0442 FUN_148cd0442 body=87 status=ok
// SIG undefined FUN_148cd0442(void)

void FUN_148cd0442(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_140b32deb(local_28,param_1,param_2,0);
  FUN_144a7b030(local_28);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd049a FUN_148cd049a body=149 status=ok
// SIG undefined FUN_148cd049a(void)

void FUN_148cd049a(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xf40);
  if (lVar4 == 0) {
    uVar3 = FUN_14050c9fe();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0xf40) = lVar4;
  }
  if (*(longlong *)(param_1 + 0xf48) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xf38) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0xf38));
    }
    *(undefined8 *)(param_1 + 0xf48) = uVar3;
    return;
  }
  return;
}



// FUNCTION 148cd0530 FUN_148cd0530 body=53 status=ok
// SIG undefined FUN_148cd0530(void)

undefined1 FUN_148cd0530(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  if (*(char *)(param_1 + 0x10aa) == '\x01') {
    uVar1 = FUN_141563480(param_1 + 0x10b0);
    uVar2 = FUN_14125be1e(param_2,uVar1);
    return uVar2;
  }
  return 1;
}



// FUNCTION 148cd0566 FUN_148cd0566 body=238 status=ok
// SIG undefined FUN_148cd0566(void)

undefined8 FUN_148cd0566(longlong *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  byte bVar7;
  longlong lVar8;
  
  lVar8 = 0;
  if (param_1 != (longlong *)0x0) {
    lVar4 = FUN_144a2f878();
    lVar8 = param_1[2];
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
       (lVar8 = *(longlong *)(lVar8 + 0x30),
       *(longlong *)(lVar8 + (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
      cVar2 = FUN_1449ce97a(param_1);
      if (cVar2 == '\0') {
LAB_148cd05de:
        uVar5 = (**(code **)(param_1[0x765] + 0x18))(param_1 + 0x765);
        uVar5 = FUN_143dd4cc4(uVar5,param_2,param_3,(param_4 & 2) >> 1,cVar2,param_4 & 0xc);
      }
      else {
        cVar3 = FUN_144a783a6(param_1);
        if (cVar3 != '\0') {
          cVar3 = (**(code **)(*param_1 + 0x700))(param_1);
          if (cVar3 != '\0') goto LAB_148cd05de;
        }
        uVar5 = (**(code **)(param_1[0x765] + 0x18))(param_1 + 0x765);
        uVar5 = FUN_1488e7748(uVar5,param_2,param_3,(param_4 & 2) >> 1,param_4 & 0xc);
      }
      bVar7 = (byte)uVar5;
      uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
      bVar1 = 1;
      goto LAB_148cd05a5;
    }
  }
  bVar7 = (byte)lVar8;
  bVar1 = 0;
  uVar6 = 0;
LAB_148cd05a5:
  return CONCAT71(uVar6,bVar1 & bVar7);
}



// FUNCTION 148cd0654 FUN_148cd0654 body=90 status=ok
// SIG undefined FUN_148cd0654(void)

void FUN_148cd0654(longlong param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = 1;
  if (param_1 != 0) {
    lVar2 = FUN_144a2f878();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
       (*(longlong **)(param_1 + 0x3f70) != (longlong *)0x0)) {
      bVar1 = (**(code **)(**(longlong **)(param_1 + 0x3f70) + 0x80))();
      bVar1 = bVar1 ^ 1;
    }
  }
  *param_2 = bVar1;
  return;
}



// FUNCTION 148cd06ae FUN_148cd06ae body=109 status=ok
// SIG undefined FUN_148cd06ae(void)

void FUN_148cd06ae(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_2;
  lVar1 = param_2[1];
  if ((longlong)(int)lVar1 != 0) {
    lVar3 = 0;
    do {
      FUN_1440b0c80(param_1,*(undefined4 *)(lVar2 + lVar3),param_3);
      lVar3 = lVar3 + 4;
    } while ((longlong)(int)lVar1 * 4 != lVar3);
    lVar2 = *param_2;
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
    return;
  }
  return;
}



// FUNCTION 148cd071c FUN_148cd071c body=138 status=ok
// SIG undefined FUN_148cd071c(void)

void FUN_148cd071c(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x48 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x48) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148cd07a6 FUN_148cd07a6 body=145 status=ok
// SIG undefined FUN_148cd07a6(void)

void FUN_148cd07a6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x30);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x34) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x28,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
        uVar5 = uVar4 / 0x28 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x34) = (int)uVar5;
    FUN_148cd0838(param_1,param_2,uVar5,0x28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148cd0838 FUN_148cd0838 body=141 status=ok
// SIG undefined FUN_148cd0838(void)

void FUN_148cd0838(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x28);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x28,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x28),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x28,param_2,param_3,param_4);
  return;
}



// FUNCTION 148cd08c6 FUN_148cd08c6 body=124 status=ok
// SIG undefined FUN_148cd08c6(void)

longlong FUN_148cd08c6(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_50 = *param_1;
    FUN_1446dcdd4(local_48);
    lVar1 = FUN_148dc0506(local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd0944 FUN_148cd0944 body=132 status=ok
// SIG undefined FUN_148cd0944(void)

void FUN_148cd0944(longlong param_1,int param_2)

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



// FUNCTION 148cd09ca FUN_148cd09ca body=107 status=ok
// SIG undefined FUN_148cd09ca(void)

/* WARNING: Removing unreachable block (ram,0x000148cd09fc) */
/* WARNING: Removing unreachable block (ram,0x000148cd09d8) */
/* WARNING: Removing unreachable block (ram,0x000148cd09ee) */
/* WARNING: Removing unreachable block (ram,0x000148cd0a07) */
/* WARNING: Removing unreachable block (ram,0x000148cd09f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148cd09ca(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cbc2058;
  LOCK();
  UNLOCK();
  DAT_14cbc2058 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cbc2060 = _DAT_14cbc2060 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cbc2060 = _DAT_14cbc2060 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 148cd0a46 FUN_148cd0a46 body=93 status=ok
// SIG undefined FUN_148cd0a46(void)

void FUN_148cd0a46(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95b6b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cd0aa4 FUN_148cd0aa4 body=93 status=ok
// SIG undefined FUN_148cd0aa4(void)

void FUN_148cd0aa4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95b6b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cd0b02 FUN_148cd0b02 body=126 status=ok
// SIG undefined FUN_148cd0b02(void)

void FUN_148cd0b02(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95b6b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd0b71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd0b8e FUN_148cd0b8e body=21 status=ok
// SIG undefined FUN_148cd0b8e(void)

undefined8 FUN_148cd0b8e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148cd0bb4 FUN_148cd0bb4 body=93 status=ok
// SIG undefined FUN_148cd0bb4(void)

void FUN_148cd0bb4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95b720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cd0c12 FUN_148cd0c12 body=93 status=ok
// SIG undefined FUN_148cd0c12(void)

void FUN_148cd0c12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95b720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cd0c70 FUN_148cd0c70 body=126 status=ok
// SIG undefined FUN_148cd0c70(void)

void FUN_148cd0c70(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c7440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95b720;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd0cdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd0d0c FUN_148cd0d0c body=93 status=ok
// SIG undefined FUN_148cd0d0c(void)

void FUN_148cd0d0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95b790;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cd0d6a FUN_148cd0d6a body=93 status=ok
// SIG undefined FUN_148cd0d6a(void)

void FUN_148cd0d6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a915ec0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95b790;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148cd0dc8 FUN_148cd0dc8 body=126 status=ok
// SIG undefined FUN_148cd0dc8(void)

void FUN_148cd0dc8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a915ec0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95b790;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd0e37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd0e54 FUN_148cd0e54 body=29 status=ok
// SIG undefined FUN_148cd0e54(void)

undefined8 FUN_148cd0e54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd0e8c FUN_148cd0e8c body=29 status=ok
// SIG undefined FUN_148cd0e8c(void)

bool FUN_148cd0e8c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x38);
  return lVar1 == param_2;
}



// FUNCTION 148cd0eaa FUN_148cd0eaa body=26 status=ok
// SIG undefined FUN_148cd0eaa(void)

bool FUN_148cd0eaa(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x38,1);
  return lVar1 == 0;
}



// FUNCTION 148cd0ec4 FUN_148cd0ec4 body=24 status=ok
// SIG undefined FUN_148cd0ec4(void)

bool FUN_148cd0ec4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x38);
  return lVar1 != 0;
}



// FUNCTION 148cd0ee8 FUN_148cd0ee8 body=117 status=ok
// SIG undefined FUN_148cd0ee8(void)

void FUN_148cd0ee8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95b870;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[6] = uVar6;
  *puVar1 = &PTR_FUN_14b95b800;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar2;
  puVar1[9] = *(undefined8 *)(param_1 + 0x48);
  return;
}



// FUNCTION 148cd0f5e FUN_148cd0f5e body=117 status=ok
// SIG undefined FUN_148cd0f5e(void)

void FUN_148cd0f5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95b870;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = uVar4;
  puVar1[5] = uVar5;
  puVar1[6] = uVar6;
  *puVar1 = &PTR_FUN_14b95b800;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  puVar1[7] = *(undefined8 *)(param_1 + 0x38);
  puVar1[8] = uVar2;
  puVar1[9] = *(undefined8 *)(param_1 + 0x48);
  return;
}



// FUNCTION 148cd0fd4 FUN_148cd0fd4 body=150 status=ok
// SIG undefined FUN_148cd0fd4(void)

void FUN_148cd0fd4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  _LIST_ENTRY *p_Var10;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b95b870;
  p_Var10 = *(_LIST_ENTRY **)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  DVar6 = *(DWORD *)(param_1 + 0x28);
  uVar7 = *(undefined4 *)(param_1 + 0x2c);
  uVar8 = *(undefined4 *)(param_1 + 0x30);
  uVar9 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var10;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = uVar2;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  p_Var1->Flags = DVar6;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar7;
  p_Var1->SpareWORD = (short)((uint)uVar7 >> 0x10);
  p_Var1[1].Type = (short)uVar8;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar8 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar9;
  *(undefined ***)p_Var1 = &PTR_FUN_14b95b800;
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = *(undefined4 *)(param_1 + 0x40);
  uVar7 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)&p_Var1[1].CriticalSection = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar2;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = uVar3;
  *(undefined4 *)((longlong)&p_Var1[1].ProcessLocksList.Flink + 4) = uVar7;
  p_Var1[1].ProcessLocksList.Blink = *(_LIST_ENTRY **)(param_1 + 0x48);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd105b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd106a FUN_148cd106a body=79 status=ok
// SIG undefined FUN_148cd106a(void)

void FUN_148cd106a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x38);
  (**(code **)(param_1 + 0x40))
            (*(int *)(param_1 + 0x48) + lVar1,*(undefined8 *)(param_1 + 8),
             *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
             *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
             *(undefined4 *)(param_1 + 0x28));
  return;
}



// FUNCTION 148cd10ba FUN_148cd10ba body=191 status=ok
// SIG undefined FUN_148cd10ba(void)

bool FUN_148cd10ba(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x38,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x38);
  if (lVar2 != 0) {
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_40 = *(undefined4 *)(param_1 + 0x24);
    local_48 = *(undefined4 *)(param_1 + 0x20);
    (**(code **)(param_1 + 0x40))
              (*(int *)(param_1 + 0x48) + lVar2,*(undefined8 *)(param_1 + 8),
               *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd117c FUN_148cd117c body=31 status=ok
// SIG undefined FUN_148cd117c(void)

undefined8 FUN_148cd117c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd11b6 FUN_148cd11b6 body=29 status=ok
// SIG undefined FUN_148cd11b6(void)

bool FUN_148cd11b6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cd11d4 FUN_148cd11d4 body=26 status=ok
// SIG undefined FUN_148cd11d4(void)

bool FUN_148cd11d4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cd11ee FUN_148cd11ee body=101 status=ok
// SIG undefined FUN_148cd11ee(void)

void FUN_148cd11ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95b8e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd1254 FUN_148cd1254 body=101 status=ok
// SIG undefined FUN_148cd1254(void)

void FUN_148cd1254(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95b8e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd12ba FUN_148cd12ba body=134 status=ok
// SIG undefined FUN_148cd12ba(void)

void FUN_148cd12ba(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95b8e0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd1331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd1340 FUN_148cd1340 body=44 status=ok
// SIG undefined FUN_148cd1340(void)

void FUN_148cd1340(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cd1369. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148cd136c FUN_148cd136c body=31 status=ok
// SIG undefined FUN_148cd136c(void)

undefined8 FUN_148cd136c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd13a6 FUN_148cd13a6 body=29 status=ok
// SIG undefined FUN_148cd13a6(void)

bool FUN_148cd13a6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cd13c4 FUN_148cd13c4 body=26 status=ok
// SIG undefined FUN_148cd13c4(void)

bool FUN_148cd13c4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cd13de FUN_148cd13de body=101 status=ok
// SIG undefined FUN_148cd13de(void)

void FUN_148cd13de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95b950;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd1444 FUN_148cd1444 body=101 status=ok
// SIG undefined FUN_148cd1444(void)

void FUN_148cd1444(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95b950;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd14aa FUN_148cd14aa body=134 status=ok
// SIG undefined FUN_148cd14aa(void)

void FUN_148cd14aa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95b950;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd1521. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd1530 FUN_148cd1530 body=42 status=ok
// SIG undefined FUN_148cd1530(void)

void FUN_148cd1530(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cd1557. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148cd1574 FUN_148cd1574 body=29 status=ok
// SIG undefined FUN_148cd1574(void)

bool FUN_148cd1574(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cd1592 FUN_148cd1592 body=26 status=ok
// SIG undefined FUN_148cd1592(void)

bool FUN_148cd1592(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cd15ac FUN_148cd15ac body=101 status=ok
// SIG undefined FUN_148cd15ac(void)

void FUN_148cd15ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42c920;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95ba10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd1612 FUN_148cd1612 body=101 status=ok
// SIG undefined FUN_148cd1612(void)

void FUN_148cd1612(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42c920;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95ba10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd1678 FUN_148cd1678 body=134 status=ok
// SIG undefined FUN_148cd1678(void)

void FUN_148cd1678(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b42c920;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95ba10;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd16ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd16fe FUN_148cd16fe body=44 status=ok
// SIG undefined FUN_148cd16fe(void)

void FUN_148cd16fe(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cd1727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148cd1744 FUN_148cd1744 body=101 status=ok
// SIG undefined FUN_148cd1744(void)

void FUN_148cd1744(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95bac0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd17aa FUN_148cd17aa body=101 status=ok
// SIG undefined FUN_148cd17aa(void)

void FUN_148cd17aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95bac0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd1810 FUN_148cd1810 body=134 status=ok
// SIG undefined FUN_148cd1810(void)

void FUN_148cd1810(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95bac0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd1887. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd1896 FUN_148cd1896 body=44 status=ok
// SIG undefined FUN_148cd1896(void)

void FUN_148cd1896(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cd18bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148cd18dc FUN_148cd18dc body=29 status=ok
// SIG undefined FUN_148cd18dc(void)

bool FUN_148cd18dc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cd18fa FUN_148cd18fa body=101 status=ok
// SIG undefined FUN_148cd18fa(void)

void FUN_148cd18fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edb80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95bb30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd1960 FUN_148cd1960 body=101 status=ok
// SIG undefined FUN_148cd1960(void)

void FUN_148cd1960(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4edb80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95bb30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd19c6 FUN_148cd19c6 body=134 status=ok
// SIG undefined FUN_148cd19c6(void)

void FUN_148cd19c6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4edb80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95bb30;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd1a3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd1a4c FUN_148cd1a4c body=50 status=ok
// SIG undefined FUN_148cd1a4c(void)

void FUN_148cd1a4c(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cd1a7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148cd1a98 FUN_148cd1a98 body=29 status=ok
// SIG undefined FUN_148cd1a98(void)

bool FUN_148cd1a98(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cd1ab6 FUN_148cd1ab6 body=26 status=ok
// SIG undefined FUN_148cd1ab6(void)

bool FUN_148cd1ab6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cd1ad0 FUN_148cd1ad0 body=24 status=ok
// SIG undefined FUN_148cd1ad0(void)

bool FUN_148cd1ad0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148cd1ae8 FUN_148cd1ae8 body=101 status=ok
// SIG undefined FUN_148cd1ae8(void)

void FUN_148cd1ae8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b95bba0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd1b4e FUN_148cd1b4e body=134 status=ok
// SIG undefined FUN_148cd1b4e(void)

void FUN_148cd1b4e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95bba0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd1bc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd1bd4 FUN_148cd1bd4 body=39 status=ok
// SIG undefined FUN_148cd1bd4(void)

void FUN_148cd1bd4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cd1bf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148cd1c16 FUN_148cd1c16 body=101 status=ok
// SIG undefined FUN_148cd1c16(void)

void FUN_148cd1c16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95bdd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd1c7c FUN_148cd1c7c body=101 status=ok
// SIG undefined FUN_148cd1c7c(void)

void FUN_148cd1c7c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7890;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95bdd0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd1ce2 FUN_148cd1ce2 body=134 status=ok
// SIG undefined FUN_148cd1ce2(void)

void FUN_148cd1ce2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7890;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95bdd0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd1d59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd1d68 FUN_148cd1d68 body=44 status=ok
// SIG undefined FUN_148cd1d68(void)

void FUN_148cd1d68(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cd1d91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148cd1d9a FUN_148cd1d9a body=29 status=ok
// SIG undefined FUN_148cd1d9a(void)

bool FUN_148cd1d9a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cd1db8 FUN_148cd1db8 body=26 status=ok
// SIG undefined FUN_148cd1db8(void)

bool FUN_148cd1db8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cd1dde FUN_148cd1dde body=101 status=ok
// SIG undefined FUN_148cd1dde(void)

void FUN_148cd1dde(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95beb0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b95be40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd1e44 FUN_148cd1e44 body=134 status=ok
// SIG undefined FUN_148cd1e44(void)

void FUN_148cd1e44(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b95beb0;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b95be40;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd1ebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd1eca FUN_148cd1eca body=150 status=ok
// SIG undefined FUN_148cd1eca(void)

bool FUN_148cd1eca(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,*(undefined2 *)(param_1 + 8));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd1f64 FUN_148cd1f64 body=31 status=ok
// SIG undefined FUN_148cd1f64(void)

undefined8 FUN_148cd1f64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd1f9e FUN_148cd1f9e body=29 status=ok
// SIG undefined FUN_148cd1f9e(void)

bool FUN_148cd1f9e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cd1fbc FUN_148cd1fbc body=26 status=ok
// SIG undefined FUN_148cd1fbc(void)

bool FUN_148cd1fbc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cd1fd6 FUN_148cd1fd6 body=101 status=ok
// SIG undefined FUN_148cd1fd6(void)

void FUN_148cd1fd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3ea270;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95bf20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd203c FUN_148cd203c body=101 status=ok
// SIG undefined FUN_148cd203c(void)

void FUN_148cd203c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3ea270;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95bf20;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd20a2 FUN_148cd20a2 body=134 status=ok
// SIG undefined FUN_148cd20a2(void)

void FUN_148cd20a2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3ea270;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95bf20;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd2119. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd2128 FUN_148cd2128 body=44 status=ok
// SIG undefined FUN_148cd2128(void)

void FUN_148cd2128(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cd2151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148cd216e FUN_148cd216e body=29 status=ok
// SIG undefined FUN_148cd216e(void)

bool FUN_148cd216e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cd218c FUN_148cd218c body=101 status=ok
// SIG undefined FUN_148cd218c(void)

void FUN_148cd218c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b41bb90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95c0e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd21f2 FUN_148cd21f2 body=134 status=ok
// SIG undefined FUN_148cd21f2(void)

void FUN_148cd21f2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b41bb90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95c0e0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd2269. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd2278 FUN_148cd2278 body=58 status=ok
// SIG undefined FUN_148cd2278(void)

void FUN_148cd2278(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cd22af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 148cd22b2 FUN_148cd22b2 body=54 status=ok
// SIG undefined FUN_148cd22b2(void)

longlong FUN_148cd22b2(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 148cd22e8 FUN_148cd22e8 body=31 status=ok
// SIG undefined FUN_148cd22e8(void)

undefined8 FUN_148cd22e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd2322 FUN_148cd2322 body=29 status=ok
// SIG undefined FUN_148cd2322(void)

bool FUN_148cd2322(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cd2340 FUN_148cd2340 body=26 status=ok
// SIG undefined FUN_148cd2340(void)

bool FUN_148cd2340(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cd235a FUN_148cd235a body=101 status=ok
// SIG undefined FUN_148cd235a(void)

void FUN_148cd235a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95c1e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd23c0 FUN_148cd23c0 body=101 status=ok
// SIG undefined FUN_148cd23c0(void)

void FUN_148cd23c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8700;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95c1e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd2426 FUN_148cd2426 body=134 status=ok
// SIG undefined FUN_148cd2426(void)

void FUN_148cd2426(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8700;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95c1e0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd249d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd24ac FUN_148cd24ac body=68 status=ok
// SIG undefined FUN_148cd24ac(void)

void FUN_148cd24ac(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cd24ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3);
  return;
}



// FUNCTION 148cd24f0 FUN_148cd24f0 body=31 status=ok
// SIG undefined FUN_148cd24f0(void)

undefined8 FUN_148cd24f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd252a FUN_148cd252a body=29 status=ok
// SIG undefined FUN_148cd252a(void)

bool FUN_148cd252a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cd2548 FUN_148cd2548 body=26 status=ok
// SIG undefined FUN_148cd2548(void)

bool FUN_148cd2548(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cd2562 FUN_148cd2562 body=101 status=ok
// SIG undefined FUN_148cd2562(void)

void FUN_148cd2562(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95c250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd25c8 FUN_148cd25c8 body=101 status=ok
// SIG undefined FUN_148cd25c8(void)

void FUN_148cd25c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecf50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95c250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd262e FUN_148cd262e body=134 status=ok
// SIG undefined FUN_148cd262e(void)

void FUN_148cd262e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ecf50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95c250;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd26a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd26b4 FUN_148cd26b4 body=52 status=ok
// SIG undefined FUN_148cd26b4(void)

void FUN_148cd26b4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cd26e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148cd2702 FUN_148cd2702 body=29 status=ok
// SIG undefined FUN_148cd2702(void)

bool FUN_148cd2702(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cd2720 FUN_148cd2720 body=26 status=ok
// SIG undefined FUN_148cd2720(void)

bool FUN_148cd2720(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cd273a FUN_148cd273a body=101 status=ok
// SIG undefined FUN_148cd273a(void)

void FUN_148cd273a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95c330;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95c2c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd27a0 FUN_148cd27a0 body=101 status=ok
// SIG undefined FUN_148cd27a0(void)

void FUN_148cd27a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95c330;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95c2c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd2806 FUN_148cd2806 body=134 status=ok
// SIG undefined FUN_148cd2806(void)

void FUN_148cd2806(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b95c330;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95c2c0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd287d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd288c FUN_148cd288c body=142 status=ok
// SIG undefined FUN_148cd288c(void)

void FUN_148cd288c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar6 = FUN_14479d2ce(param_1 + 0x18);
  pcVar4 = *(code **)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x28);
  local_28 = *param_2;
  local_20 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar4)(iVar3 + lVar6);
  plVar5 = (longlong *)param_2[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd2924 FUN_148cd2924 body=29 status=ok
// SIG undefined FUN_148cd2924(void)

bool FUN_148cd2924(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cd2942 FUN_148cd2942 body=26 status=ok
// SIG undefined FUN_148cd2942(void)

bool FUN_148cd2942(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cd295c FUN_148cd295c body=101 status=ok
// SIG undefined FUN_148cd295c(void)

void FUN_148cd295c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95cc50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd29c2 FUN_148cd29c2 body=134 status=ok
// SIG undefined FUN_148cd29c2(void)

void FUN_148cd29c2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95cc50;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd2a39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd2a48 FUN_148cd2a48 body=146 status=ok
// SIG undefined FUN_148cd2a48(void)

bool FUN_148cd2a48(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd2adc FUN_148cd2adc body=164 status=ok
// SIG undefined FUN_148cd2adc(void)

void FUN_148cd2adc(longlong *param_1,undefined4 param_2)

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
        goto LAB_148cd2b5c;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148cd2b5c:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148cd2b80 FUN_148cd2b80 body=31 status=ok
// SIG undefined FUN_148cd2b80(void)

undefined8 FUN_148cd2b80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd2ba6 FUN_148cd2ba6 body=29 status=ok
// SIG undefined FUN_148cd2ba6(void)

bool FUN_148cd2ba6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cd2bc4 FUN_148cd2bc4 body=26 status=ok
// SIG undefined FUN_148cd2bc4(void)

bool FUN_148cd2bc4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cd2bea FUN_148cd2bea body=101 status=ok
// SIG undefined FUN_148cd2bea(void)

void FUN_148cd2bea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b95c5a0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b95c530;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd2c50 FUN_148cd2c50 body=134 status=ok
// SIG undefined FUN_148cd2c50(void)

void FUN_148cd2c50(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b95c5a0;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b95c530;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd2cc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd2cd6 FUN_148cd2cd6 body=149 status=ok
// SIG undefined FUN_148cd2cd6(void)

bool FUN_148cd2cd6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,*(undefined1 *)(param_1 + 8));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd2d6e FUN_148cd2d6e body=319 status=ok
// SIG undefined FUN_148cd2d6e(void)

undefined4 * FUN_148cd2d6e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_148cd2eae(param_1,local_48);
  FUN_148cd3022(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
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
  cVar3 = FUN_148cd2f90(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x34) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
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
      FUN_148cd310c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd2eae FUN_148cd2eae body=226 status=ok
// SIG undefined FUN_148cd2eae(void)

int * FUN_148cd2eae(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 148cd2f90 FUN_148cd2f90 body=145 status=ok
// SIG undefined FUN_148cd2f90(void)

undefined8 FUN_148cd2f90(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
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
  undefined4 uVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar15 = FUN_145f89b6a(), iVar15 != -1)) {
    plVar2 = (longlong *)(*param_1 + (longlong)iVar15 * 0x38);
    plVar3 = *(longlong **)(*param_1 + 0x18 + (longlong)iVar15 * 0x38);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[2];
    uVar7 = param_3[3];
    uVar8 = param_3[4];
    uVar9 = param_3[5];
    uVar10 = param_3[6];
    uVar11 = param_3[7];
    uVar12 = param_3[9];
    uVar13 = param_3[10];
    uVar14 = param_3[0xb];
    *(undefined4 *)(plVar2 + 4) = param_3[8];
    *(undefined4 *)((longlong)plVar2 + 0x24) = uVar12;
    *(undefined4 *)(plVar2 + 5) = uVar13;
    *(undefined4 *)((longlong)plVar2 + 0x2c) = uVar14;
    *(undefined4 *)(plVar2 + 2) = uVar8;
    *(undefined4 *)((longlong)plVar2 + 0x14) = uVar9;
    *(undefined4 *)(plVar2 + 3) = uVar10;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uVar11;
    *(undefined4 *)plVar2 = uVar4;
    *(undefined4 *)((longlong)plVar2 + 4) = uVar5;
    *(undefined4 *)(plVar2 + 1) = uVar6;
    *(undefined4 *)((longlong)plVar2 + 0xc) = uVar7;
    FUN_148cd3098(param_1,*param_4);
    *param_4 = iVar15;
    return 1;
  }
  return 0;
}



// FUNCTION 148cd3022 FUN_148cd3022 body=118 status=ok
// SIG undefined FUN_148cd3022(void)

undefined8 * FUN_148cd3022(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
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
  param_1[2] = *param_3;
  param_1[3] = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  uVar2 = param_3[3];
  param_1[4] = param_3[2];
  param_1[5] = uVar2;
  return param_1;
}



// FUNCTION 148cd3098 FUN_148cd3098 body=116 status=ok
// SIG undefined FUN_148cd3098(void)

void FUN_148cd3098(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 148cd310c FUN_148cd310c body=476 status=ok
// SIG undefined FUN_148cd310c(void)

void FUN_148cd310c(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x38;
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
        *(int *)(lVar3 + 0x34 + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar11) =
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



// FUNCTION 148cd32ea FUN_148cd32ea body=253 status=ok
// SIG undefined FUN_148cd32ea(void)

void FUN_148cd32ea(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_148cd3360:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x38);
      iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x38);
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_148cd33cf;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_148cd33cf;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_148cd33d5;
      }
      if (iVar2 + iVar1 == 1) goto LAB_148cd33d5;
      goto LAB_148cd33c1;
    }
  }
  return;
LAB_148cd33cf:
  if (uVar7 == uVar6) {
LAB_148cd33d5:
    FUN_148cd33e8(param_1);
    return;
  }
LAB_148cd33c1:
  iVar2 = (int)plVar3[6];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_148cd3360;
}



// FUNCTION 148cd33e8 FUN_148cd33e8 body=87 status=ok
// SIG undefined FUN_148cd33e8(void)

void FUN_148cd33e8(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x34 + (longlong)param_2 * 0x38);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x30 + lVar5 * 0x38);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x38 + 0x30);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x38 + 0x30);
  FUN_148cd3440();
  return;
}



// FUNCTION 148cd3440 FUN_148cd3440 body=78 status=ok
// SIG undefined FUN_148cd3440(void)

void FUN_148cd3440(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 0x18 + (longlong)param_2 * 0x38);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if (*(longlong *)(lVar2 + (longlong)param_2 * 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_148cd3098(param_1,param_2);
  return;
}



// FUNCTION 148cd348e FUN_148cd348e body=96 status=ok
// SIG undefined FUN_148cd348e(void)

void FUN_148cd348e(longlong param_1,int param_2)

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



// FUNCTION 148cd34ee FUN_148cd34ee body=62 status=ok
// SIG undefined FUN_148cd34ee(void)

void FUN_148cd34ee(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148cd352c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 148cd352c FUN_148cd352c body=112 status=ok
// SIG undefined FUN_148cd352c(void)

ulonglong FUN_148cd352c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_148cd3566;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_148cd3566:
  return param_2 & 0xffffffff;
}



// FUNCTION 148cd359c FUN_148cd359c body=95 status=ok
// SIG undefined FUN_148cd359c(void)

void FUN_148cd359c(longlong param_1,uint param_2)

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



// FUNCTION 148cd35fc FUN_148cd35fc body=31 status=ok
// SIG undefined FUN_148cd35fc(void)

undefined8 FUN_148cd35fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd3636 FUN_148cd3636 body=29 status=ok
// SIG undefined FUN_148cd3636(void)

bool FUN_148cd3636(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cd3654 FUN_148cd3654 body=101 status=ok
// SIG undefined FUN_148cd3654(void)

void FUN_148cd3654(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40ed20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95c6b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd36ba FUN_148cd36ba body=101 status=ok
// SIG undefined FUN_148cd36ba(void)

void FUN_148cd36ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b40ed20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95c6b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd3720 FUN_148cd3720 body=134 status=ok
// SIG undefined FUN_148cd3720(void)

void FUN_148cd3720(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b40ed20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95c6b0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd3797. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd37a6 FUN_148cd37a6 body=44 status=ok
// SIG undefined FUN_148cd37a6(void)

void FUN_148cd37a6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cd37cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148cd37ec FUN_148cd37ec body=29 status=ok
// SIG undefined FUN_148cd37ec(void)

bool FUN_148cd37ec(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cd380a FUN_148cd380a body=26 status=ok
// SIG undefined FUN_148cd380a(void)

bool FUN_148cd380a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cd3824 FUN_148cd3824 body=101 status=ok
// SIG undefined FUN_148cd3824(void)

void FUN_148cd3824(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95c720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd388a FUN_148cd388a body=101 status=ok
// SIG undefined FUN_148cd388a(void)

void FUN_148cd388a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95c720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd38f0 FUN_148cd38f0 body=134 status=ok
// SIG undefined FUN_148cd38f0(void)

void FUN_148cd38f0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95c720;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd3967. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd3976 FUN_148cd3976 body=42 status=ok
// SIG undefined FUN_148cd3976(void)

void FUN_148cd3976(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cd399d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148cd39a0 FUN_148cd39a0 body=132 status=ok
// SIG undefined FUN_148cd39a0(void)

void FUN_148cd39a0(longlong param_1,int param_2)

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



// FUNCTION 148cd3a26 FUN_148cd3a26 body=29 status=ok
// SIG undefined FUN_148cd3a26(void)

undefined8 FUN_148cd3a26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd3a5e FUN_148cd3a5e body=29 status=ok
// SIG undefined FUN_148cd3a5e(void)

bool FUN_148cd3a5e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cd3a7c FUN_148cd3a7c body=26 status=ok
// SIG undefined FUN_148cd3a7c(void)

bool FUN_148cd3a7c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cd3a96 FUN_148cd3a96 body=24 status=ok
// SIG undefined FUN_148cd3a96(void)

bool FUN_148cd3a96(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148cd3aae FUN_148cd3aae body=101 status=ok
// SIG undefined FUN_148cd3aae(void)

void FUN_148cd3aae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab672c0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b95c7d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd3b14 FUN_148cd3b14 body=101 status=ok
// SIG undefined FUN_148cd3b14(void)

void FUN_148cd3b14(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab672c0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b95c7d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd3b7a FUN_148cd3b7a body=134 status=ok
// SIG undefined FUN_148cd3b7a(void)

void FUN_148cd3b7a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  _LIST_ENTRY *p_Var6;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ab672c0;
  p_Var6 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var6;
  *(undefined ***)p_Var1 = &PTR_FUN_14b95c7d0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd3bf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd3c00 FUN_148cd3c00 body=40 status=ok
// SIG undefined FUN_148cd3c00(void)

void FUN_148cd3c00(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cd3c25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,*(undefined8 *)(param_1 + 8),
             *(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148cd3c28 FUN_148cd3c28 body=150 status=ok
// SIG undefined FUN_148cd3c28(void)

bool FUN_148cd3c28(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,*(undefined8 *)(param_1 + 8));
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd3cc0 FUN_148cd3cc0 body=29 status=ok
// SIG undefined FUN_148cd3cc0(void)

undefined8 FUN_148cd3cc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd3cf8 FUN_148cd3cf8 body=29 status=ok
// SIG undefined FUN_148cd3cf8(void)

bool FUN_148cd3cf8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cd3d16 FUN_148cd3d16 body=26 status=ok
// SIG undefined FUN_148cd3d16(void)

bool FUN_148cd3d16(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cd3d30 FUN_148cd3d30 body=24 status=ok
// SIG undefined FUN_148cd3d30(void)

bool FUN_148cd3d30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148cd3d48 FUN_148cd3d48 body=101 status=ok
// SIG undefined FUN_148cd3d48(void)

void FUN_148cd3d48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95c840;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd3dae FUN_148cd3dae body=101 status=ok
// SIG undefined FUN_148cd3dae(void)

void FUN_148cd3dae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95c840;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cd3e14 FUN_148cd3e14 body=134 status=ok
// SIG undefined FUN_148cd3e14(void)

void FUN_148cd3e14(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95c840;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd3e8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd3e9a FUN_148cd3e9a body=44 status=ok
// SIG undefined FUN_148cd3e9a(void)

void FUN_148cd3e9a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cd3ec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148cd3ec6 FUN_148cd3ec6 body=156 status=ok
// SIG undefined FUN_148cd3ec6(void)

bool FUN_148cd3ec6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd3f64 FUN_148cd3f64 body=175 status=ok
// SIG undefined FUN_148cd3f64(void)

void FUN_148cd3f64(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148cd3fed;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148cd3fed:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148cd4014 FUN_148cd4014 body=62 status=ok
// SIG undefined FUN_148cd4014(void)

void FUN_148cd4014(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148cd4052(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 148cd4052 FUN_148cd4052 body=93 status=ok
// SIG undefined FUN_148cd4052(void)

ulonglong FUN_148cd4052(uint param_1,uint param_2)

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



// FUNCTION 148cd40b0 FUN_148cd40b0 body=31 status=ok
// SIG undefined FUN_148cd40b0(void)

undefined8 FUN_148cd40b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd40e4 FUN_148cd40e4 body=85 status=ok
// SIG undefined FUN_148cd40e4(void)

void FUN_148cd40e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b95cb30;
  return;
}



// FUNCTION 148cd413a FUN_148cd413a body=118 status=ok
// SIG undefined FUN_148cd413a(void)

void FUN_148cd413a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b95cb30;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cd41a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cd41b0 FUN_148cd41b0 body=105 status=ok
// SIG undefined FUN_148cd41b0(void)

undefined8 FUN_148cd41b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14603fe32(param_1 + 0x18,local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd421a FUN_148cd421a body=45 status=ok
// SIG undefined FUN_148cd421a(void)

longlong FUN_148cd421a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145c3b608(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cd4248 FUN_148cd4248 body=54 status=ok
// SIG undefined FUN_148cd4248(void)

longlong FUN_148cd4248(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
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



// FUNCTION 148cd427e FUN_148cd427e body=132 status=ok
// SIG undefined FUN_148cd427e(void)

void FUN_148cd427e(longlong param_1,int param_2)

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



// FUNCTION 148cd4304 FUN_148cd4304 body=132 status=ok
// SIG undefined FUN_148cd4304(void)

void FUN_148cd4304(longlong param_1,int param_2)

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



// FUNCTION 148cd438a FUN_148cd438a body=389 status=ok
// SIG undefined FUN_148cd438a(void)

void FUN_148cd438a(longlong param_1)

{
  undefined1 auStack_c8 [32];
  longlong local_a8 [2];
  longlong local_98 [2];
  longlong local_88 [2];
  GUID local_78;
  longlong local_68 [3];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1405f1eac();
  local_78.Data1 = 0;
  local_78.Data2 = 0;
  local_78.Data3 = 0;
  local_78.Data4[0] = '\0';
  local_78.Data4[1] = '\0';
  local_78.Data4[2] = '\0';
  local_78.Data4[3] = '\0';
  local_78.Data4[4] = '\0';
  local_78.Data4[5] = '\0';
  local_78.Data4[6] = '\0';
  local_78.Data4[7] = '\0';
  CoCreateGuid(&local_78);
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_1407c869a(&local_78,local_68,0);
  FUN_140056680(local_a8,L"OakCharacterVolumeLock_");
  FUN_144a7dea0(local_98,local_a8,param_1 + 0x3d0);
  FUN_144a882a8(local_88,local_98,&DAT_149e01f60);
  FUN_1401c7f3e(&local_50,local_88,local_68);
  if ((longlong *)(param_1 + 0x3f8) == &local_50) {
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x3f8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x3f8) = local_50;
    local_50 = 0;
    *(undefined4 *)(param_1 + 0x400) = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0x404) = local_48._4_4_;
    local_48 = 0;
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd4510 FUN_148cd4510 body=205 status=ok
// SIG undefined FUN_148cd4510(void)

void FUN_148cd4510(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x3f0) != 0) {
    lVar5 = *(longlong *)(param_1 + 1000);
    lVar6 = (longlong)*(int *)(param_1 + 0x3f0) << 3;
    do {
      cVar3 = FUN_144729dda(lVar5);
      if (cVar3 != '\0') {
        uVar1 = *(undefined4 *)(param_1 + 0x3c8);
        uVar4 = FUN_14479d2ce(lVar5);
        FUN_1407aedfe(uVar4,0,param_1 + 0x3f8,uVar1);
      }
      lVar5 = lVar5 + 8;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0x3f0) = 0;
  if (*(int *)(param_1 + 0x3f4) < 0) {
    FUN_148ccb3dc(param_1 + 1000,0);
  }
  *(undefined4 *)(param_1 + 0x400) = 0;
  if (*(int *)(param_1 + 0x404) < 0) {
    FUN_1446f8c06((undefined8 *)(param_1 + 0x3f8),0);
  }
  puVar2 = *(undefined2 **)(param_1 + 0x3f8);
  if (puVar2 != (undefined2 *)0x0) {
    *puVar2 = 0;
  }
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 148cd45de FUN_148cd45de body=269 status=ok
// SIG undefined FUN_148cd45de(void)

void FUN_148cd45de(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1404df0da();
  if (param_2 != 0) {
    lVar3 = FUN_144a2f878();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      cVar2 = FUN_148cd4706(param_1,param_2);
      if (cVar2 != '\0') {
        if ((longlong)*(int *)(param_1 + 0x3f0) != 0) {
          lVar3 = *(longlong *)(param_1 + 1000);
          lVar4 = (longlong)*(int *)(param_1 + 0x3f0) << 3;
          do {
            cVar2 = FUN_140e8a950(lVar3,param_2);
            if (cVar2 != '\0') goto LAB_148cd4626;
            lVar3 = lVar3 + 8;
            lVar4 = lVar4 + -8;
          } while (lVar4 != 0);
        }
        local_30 = 0;
        FUN_14485c47a(&local_30,param_2);
        iVar1 = *(int *)(param_1 + 0x3f0);
        *(uint *)(param_1 + 0x3f0) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x3f4) < iVar1 + 1U) {
          FUN_145cb4378(param_1 + 1000,iVar1);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 1000) + (longlong)iVar1 * 8) = local_30;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
LAB_148cd4626:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd4706 FUN_148cd4706 body=95 status=ok
// SIG undefined FUN_148cd4706(void)

ulonglong FUN_148cd4706(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 unaff_RSI;
  undefined7 uVar3;
  ulonglong uVar2;
  
  cVar1 = *(char *)(param_1 + 0x3e0);
  uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (cVar1 == '\x02') {
    uVar2 = CONCAT71(uVar3,1);
    if ((char)param_2[0x2f] == '\x03') goto LAB_148cd474f;
  }
  else {
    if (cVar1 == '\x01') {
      cVar1 = (**(code **)(*param_2 + 0x700))(param_2);
    }
    else {
      if (cVar1 != '\0') goto LAB_148cd474d;
      uVar2 = CONCAT71(uVar3,1);
      if ((char)param_2[0x2f] == '\x03') goto LAB_148cd474f;
      cVar1 = (**(code **)(*param_2 + 0x700))(param_2);
    }
    uVar2 = CONCAT71(uVar3,1);
    if (cVar1 != '\0') goto LAB_148cd474f;
  }
LAB_148cd474d:
  uVar2 = 0;
LAB_148cd474f:
  return uVar2 & 0xffffffff;
}



// FUNCTION 148cd4766 FUN_148cd4766 body=234 status=ok
// SIG undefined FUN_148cd4766(void)

void FUN_148cd4766(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar2 = FUN_144a2f878();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
       ((longlong)*(int *)(param_1 + 0x3f0) != 0)) {
      lVar2 = *(longlong *)(param_1 + 1000);
      lVar3 = (longlong)*(int *)(param_1 + 0x3f0) << 3;
      do {
        cVar1 = FUN_140e8a950(lVar2,param_2);
        if (cVar1 != '\0') {
          FUN_1407aedfe(param_2,0,param_1 + 0x3f8,*(undefined4 *)(param_1 + 0x3c8));
          local_38 = 0;
          FUN_14485c47a(&local_38,param_2);
          FUN_148cd4852(param_1 + 1000,&local_38);
          break;
        }
        lVar2 = lVar2 + 8;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
  }
  FUN_1415e2276(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cd4852 FUN_148cd4852 body=245 status=ok
// SIG undefined FUN_148cd4852(void)

void FUN_148cd4852(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar3 = 0;
  bVar6 = false;
  do {
    lVar5 = lVar3 * 8;
    while( true ) {
      cVar1 = FUN_14141af92(*param_1 + lVar5,param_2);
      iVar2 = (int)param_1[1];
      if (cVar1 != '\0') break;
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 8;
      if (iVar2 <= lVar3) {
        if (!bVar6) {
          return;
        }
        goto LAB_148cd4931;
      }
    }
    do {
      if (iVar2 - 1U != (uint)lVar3) {
        iVar4 = ~(uint)lVar3 + iVar2;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        memmove((void *)(*param_1 + lVar3 * 8),(void *)(*param_1 + (longlong)(iVar2 - iVar4) * 8),
                (longlong)iVar4 << 3);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 + -1;
      if (iVar2 + -1 <= lVar3) goto LAB_148cd4931;
      cVar1 = FUN_14141af92(*param_1 + lVar5,param_2);
      iVar2 = (int)param_1[1];
    } while (cVar1 != '\0');
    lVar3 = lVar3 + 1;
    bVar6 = true;
  } while (lVar3 < iVar2);
LAB_148cd4931:
  FUN_148cdac0c(param_1);
  return;
}



// FUNCTION 148cd4948 FUN_148cd4948 body=53 status=ok
// SIG undefined FUN_148cd4948(void)

undefined8 FUN_148cd4948(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144837462(DAT_14cbc27b8,param_1);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return uVar1;
}



// FUNCTION 148cd49d6 FUN_148cd49d6 body=44 status=ok
// SIG undefined FUN_148cd49d6(void)

undefined8 FUN_148cd49d6(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x1878) != (longlong *)0x0) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x1878) + 0xd0))();
    uVar1 = FUN_1405c04c0(uVar1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 148cd4a02 FUN_148cd4a02 body=126 status=ok
// SIG undefined FUN_148cd4a02(void)

longlong * FUN_148cd4a02(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 0xd40), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(lVar3 + 0xd38);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      if (lVar4 != 0) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1446f84a2(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return param_2;
}



// FUNCTION 148cd4aba FUN_148cd4aba body=20 status=ok
// SIG undefined FUN_148cd4aba(void)

undefined8 FUN_148cd4aba(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = FUN_1457baa60(param_1 + 0x4ea0);
  return uVar1;
}



// FUNCTION 148cd4ace FUN_148cd4ace body=4 status=ok
// SIG undefined FUN_148cd4ace(void)

void FUN_148cd4ace(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x68) = param_2;
  return;
}



// FUNCTION 148cd4ad2 FUN_148cd4ad2 body=8 status=ok
// SIG undefined FUN_148cd4ad2(void)

void FUN_148cd4ad2(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x72) = param_2;
  *(undefined1 *)(param_1 + 0x71) = 1;
  return;
}



// FUNCTION 148cd4ada FUN_148cd4ada body=715 status=ok
// SIG undefined FUN_148cd4ada(void)

void FUN_148cd4ada(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_14479d2ce(param_1 + 0x48);
  lVar3 = FUN_14479d2ce(param_1 + 0x58);
  if (lVar3 != 0 && lVar2 != 0) {
    lVar4 = FUN_1407afa82(lVar3);
    if (lVar4 != 0) {
      FUN_1458b7ff6(lVar3);
      FUN_148ccbf14(lVar2);
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar1 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b438ba0;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_48[2] = lVar5;
      *local_48 = &PTR_FUN_14b95ec10;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar3);
      puVar1[4] = lVar3;
      FUN_145ce3550(lVar4 + 0x920,local_50,&local_48);
      FUN_1449db362(&local_48);
      local_48 = (undefined8 *)0x0;
      local_40 = 0;
      FUN_1446efa72(&local_48,0,3,0x10);
      puVar1 = local_48;
      local_40 = 3;
      *local_48 = &PTR_LAB_14b4edb80;
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
      local_48[2] = lVar4;
      *local_48 = &PTR_FUN_14b95ec80;
      local_48[3] = 0;
      FUN_14485c47a(local_48 + 3,lVar3);
      puVar1[4] = lVar3;
      FUN_140dca018(lVar3 + 0x71b8,local_50,&local_48);
      FUN_1449db362(&local_48);
      lVar2 = (**(code **)(*(longlong *)(lVar3 + 0x3c20) + 0x18))(lVar3 + 0x3c20);
      if (lVar2 != 0) {
        local_48 = (undefined8 *)0x0;
        local_40 = 0;
        FUN_1446efa72(&local_48,0,3,0x10);
        puVar1 = local_48;
        local_40 = 3;
        *local_48 = &PTR_LAB_14b95fed0;
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 1;
        lVar4 = DAT_14c758608 + 1;
        if (lVar5 == 0) {
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 2;
          lVar4 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar4;
        local_48[2] = lVar5;
        *local_48 = &PTR_FUN_14b95ecf0;
        local_48[3] = 0;
        FUN_14485c47a(local_48 + 3,lVar3);
        puVar1[4] = lVar3;
        FUN_141346f50(lVar2,local_50,&local_48);
        FUN_1449db362(&local_48);
      }
      *(undefined1 *)(param_1 + 0x70) = 1;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd4da6 FUN_148cd4da6 body=155 status=ok
// SIG undefined FUN_148cd4da6(void)

void FUN_148cd4da6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 0x70) = 0;
  lVar1 = FUN_14479d2ce(param_1 + 0x48);
  if (lVar1 != 0) {
    FUN_148ccbf92(lVar1);
  }
  lVar1 = FUN_14479d2ce(param_1 + 0x58);
  if (lVar1 != 0) {
    FUN_140457ffc(lVar1 + 0x71b8,param_1);
    lVar2 = (**(code **)(*(longlong *)(lVar1 + 0x3c20) + 0x18))(lVar1 + 0x3c20);
    if (lVar2 != 0) {
      FUN_140457ffc(lVar2,param_1);
    }
    FUN_14661cd94(lVar1);
    lVar1 = FUN_1407afa82(lVar1);
    if (lVar1 != 0) {
      FUN_140457ffc(lVar1 + 0x920,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 148cd4e42 FUN_148cd4e42 body=91 status=ok
// SIG undefined FUN_148cd4e42(void)

void FUN_148cd4e42(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    return;
  }
  lVar1 = FUN_14479d2ce(param_1 + 0x58);
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*(longlong *)(lVar1 + 0x3c20) + 0x18))(lVar1 + 0x3c20);
    if ((lVar1 != 0) && (*(longlong *)(param_1 + 0xa0) != 0)) {
      FUN_14480f766(lVar1);
    }
  }
  FUN_145c7c2ca(param_1);
  return;
}



// FUNCTION 148cd4e9e FUN_148cd4e9e body=296 status=ok
// SIG undefined FUN_148cd4e9e(void)

void FUN_148cd4e9e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_14479d2ce(param_1 + 0x50);
  if (lVar1 != 0) {
    lVar2 = FUN_14479d2ce(param_1 + 0x58);
    if (lVar2 != 0) {
      lVar3 = (**(code **)(*(longlong *)(lVar2 + 0x3c20) + 0x18))(lVar2 + 0x3c20);
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x20) != 0)) {
        lVar4 = FUN_141439416(*(longlong *)(lVar3 + 0x20) + 0x438);
        if (lVar4 != 0) {
          lVar5 = FUN_140229858(lVar4,DAT_14cbc2810);
          if (lVar5 != 0) {
            FUN_147d16a02(lVar5,lVar1,lVar4);
            local_48 = &LAB_148cd50c8;
            local_40 = 0;
            FUN_148cd4fc8(lVar3,&local_38,lVar2);
            *(undefined8 *)(param_1 + 0xa0) = local_38;
          }
        }
      }
    }
    lVar1 = FUN_140d4a0e8(lVar1);
    if (lVar1 != 0) {
      uVar6 = FUN_140d4a22a();
      lVar1 = FUN_140d4a0a6(lVar1,uVar6);
      if (lVar1 != 0) {
        FUN_145c7c644(lVar1,1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd4fc8 FUN_148cd4fc8 body=254 status=ok
// SIG undefined FUN_148cd4fc8(void)

undefined8
FUN_148cd4fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b95fed0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b95ed60;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141346f50(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd50d4 FUN_148cd50d4 body=72 status=ok
// SIG undefined FUN_148cd50d4(void)

void FUN_148cd50d4(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_1447f69b6(param_1 + 0x30);
  cVar2 = FUN_14486ea84(param_1 + 0x78);
  if (cVar2 != '\0') {
    uVar1 = FUN_14008e0ae(param_1 + 0x78);
    FUN_1414daa56(uVar1,0x3f800000,0x3f800000);
    return;
  }
  return;
}



// FUNCTION 148cd511c FUN_148cd511c body=595 status=ok
// SIG undefined FUN_148cd511c(void)

void FUN_148cd511c(longlong *param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5,undefined4 *param_6,undefined1 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_4 == 0) goto LAB_148cd514e;
  FUN_14030a482(param_2,&local_78,param_4,0);
  local_98 = local_68;
  local_a8 = local_78;
  uStack_a4 = uStack_74;
  uStack_a0 = uStack_70;
  uStack_9c = uStack_6c;
  lVar6 = param_1[1];
  if (lVar6 == 0) {
    uVar5 = FUN_14121240e();
    lVar6 = FUN_14477b664(uVar5);
    param_1[1] = lVar6;
  }
  lVar7 = param_1[2];
  if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*param_1 != 0)) {
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if (plVar3 == (longlong *)0x0) {
LAB_148cd5368:
      lVar7 = 0;
    }
    else {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 == '\0') goto LAB_148cd5368;
      uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar7 = FUN_144aff482(uVar5,param_1);
    }
    param_1[2] = lVar7;
  }
  local_b8 = param_8;
  local_c0 = param_7;
  local_c8 = param_3;
  FUN_1461901de(param_4 + 0x4ea0,&local_88,lVar7,&local_a8);
  lVar6 = FUN_1447210f0(param_4);
  if (lVar6 != 0 && local_88 != 0) {
    uVar8 = FUN_14119d0a4(lVar6);
    puVar9 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    uVar2 = *param_6;
    uVar5 = *(undefined8 *)(param_6 + 2);
    lVar6 = *(longlong *)(param_6 + 4);
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    *puVar9 = &PTR_FUN_14b95e830;
    puVar9[1] = param_5;
    *(undefined4 *)(puVar9 + 2) = uVar2;
    *(undefined8 *)((longlong)puVar9 + 0x14) = uVar5;
    *(undefined8 *)((longlong)puVar9 + 0x1c) = 0;
    FUN_14485c47a((longlong)puVar9 + 0x1c,lVar6);
    puVar9[5] = local_88;
    puVar9[6] = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    FUN_140b1330e(uVar8,*(undefined8 *)(param_6 + 4),param_6[1],puVar9);
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_80 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
LAB_148cd514e:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd5370 FUN_148cd5370 body=575 status=ok
// SIG undefined FUN_148cd5370(void)

void FUN_148cd5370(undefined4 *param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                  undefined4 *param_5,undefined1 param_6,undefined8 param_7)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 == 0) goto LAB_148cd539c;
  local_88 = *param_1;
  uStack_84 = param_1[1];
  uStack_80 = param_1[2];
  uStack_7c = param_1[3];
  local_78 = *(undefined8 *)(param_1 + 4);
  lVar5 = FUN_1403ca227();
  lVar7 = *(longlong *)(lVar5 + 0x28);
  if (lVar7 == 0) {
    uVar6 = FUN_14121240e();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(lVar5 + 0x28) = lVar7;
  }
  lVar8 = *(longlong *)(lVar5 + 0x30);
  if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*(longlong *)(lVar5 + 0x20) != 0)) {
    plVar3 = *(longlong **)(lVar7 + 0xb8);
    if (plVar3 == (longlong *)0x0) {
LAB_148cd55a8:
      lVar8 = 0;
    }
    else {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 == '\0') goto LAB_148cd55a8;
      uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar8 = FUN_144aff482(uVar6,(longlong *)(lVar5 + 0x20));
    }
    *(longlong *)(lVar5 + 0x30) = lVar8;
  }
  local_98 = param_7;
  local_a0 = param_6;
  local_a8 = param_2;
  FUN_1461901de(param_3 + 0x4ea0,&local_70,lVar8,&local_88);
  lVar7 = FUN_1447210f0(param_3);
  if (lVar7 != 0 && local_70 != 0) {
    uVar9 = FUN_14119d0a4(lVar7);
    puVar10 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    uVar2 = *param_5;
    uVar6 = *(undefined8 *)(param_5 + 2);
    lVar7 = *(longlong *)(param_5 + 4);
    if ((lVar7 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar7);
    }
    *puVar10 = &PTR_FUN_14b95e830;
    puVar10[1] = param_4;
    *(undefined4 *)(puVar10 + 2) = uVar2;
    *(undefined8 *)((longlong)puVar10 + 0x14) = uVar6;
    *(undefined8 *)((longlong)puVar10 + 0x1c) = 0;
    FUN_14485c47a((longlong)puVar10 + 0x1c,lVar7);
    puVar10[5] = local_70;
    puVar10[6] = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
    }
    FUN_140b1330e(uVar9,*(undefined8 *)(param_5 + 4),param_5[1],puVar10);
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_68 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
LAB_148cd539c:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cd55b0 FUN_148cd55b0 body=12 status=ok
// SIG undefined FUN_148cd55b0(void)

void FUN_148cd55b0(longlong param_1,undefined1 param_2)

{
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x4f08) = param_2;
  }
  return;
}



// FUNCTION 148cd55bc FUN_148cd55bc body=183 status=ok
// SIG undefined FUN_148cd55bc(void)

undefined8 FUN_148cd55bc(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) != lVar1 + 0x30)) {
      lVar1 = FUN_140e85284();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
        lVar1 = FUN_140e85284();
        if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
           (lVar1 = FUN_140d4a076(param_1), lVar1 != 0)) {
          uVar2 = FUN_148ccbfa6(lVar1);
          return uVar2;
        }
      }
    }
    else {
      lVar1 = FUN_144a2f878();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
        return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),*(undefined1 *)(param_1 + 0x4f12));
      }
    }
  }
  return 0;
}


