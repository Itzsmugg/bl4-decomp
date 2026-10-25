// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14052002c FUN_14052002c body=372 status=ok
// SIG undefined FUN_14052002c(void)

void FUN_14052002c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0xb8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405200b4;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1405200b4:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xb8)) {
    uVar7 = uVar5 / 0xb8 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xb8,8);
  return;
}



// FUNCTION 1405201a0 FUN_1405201a0 body=463 status=ok
// SIG undefined FUN_1405201a0(void)

void FUN_1405201a0(longlong *param_1,undefined4 param_2,float *param_3,float param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  
  if (0 < (int)param_1[1]) {
    lVar9 = 0x90;
    lVar10 = 0;
    do {
      lVar8 = *param_1;
      lVar1 = lVar8 + lVar9;
      lVar6 = FUN_1447e736e(lVar1);
      if (lVar6 == 0) {
        lVar8 = lVar8 + lVar9 + -0x80;
      }
      else {
        lVar8 = FUN_1447e736e(lVar1);
        lVar8 = lVar8 + 0x30;
      }
      if (lVar8 != 0) {
        lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        fVar12 = (float)FUN_1448c9f94(lVar8,param_2,0);
        lVar8 = DAT_14cb7d4c0;
        iVar2 = *(int *)(lVar6 + 0xc60);
        if (iVar2 == 0x40000002) {
          uVar7 = 0;
        }
        else {
          bVar11 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
            if (iVar2 == 1) {
              DVar4 = FUN_140ad26c0();
              DVar5 = GetCurrentThreadId();
              bVar11 = DVar4 == DVar5;
            }
            else {
              bVar11 = false;
            }
          }
          uVar7 = (ulonglong)(bVar11 ^ 1);
        }
        fVar12 = fVar12 * param_4 * *(float *)(lVar8 + uVar7 * 4);
        uVar3 = *(uint *)(lVar1 + -0x90);
        if ((uVar3 & 1) != 0) {
          fVar13 = fVar12;
          if (1.0 <= fVar12) {
            fVar13 = 1.0;
          }
          if (fVar13 <= *param_3) {
            fVar13 = *param_3;
          }
          *param_3 = fVar13;
          uVar3 = *(uint *)(lVar1 + -0x90);
        }
        if ((uVar3 & 2) != 0) {
          fVar13 = fVar12;
          if (1.0 <= fVar12) {
            fVar13 = 1.0;
          }
          if (fVar13 <= param_3[1]) {
            fVar13 = param_3[1];
          }
          param_3[1] = fVar13;
          uVar3 = *(uint *)(lVar1 + -0x90);
        }
        if ((uVar3 & 4) != 0) {
          fVar13 = fVar12;
          if (1.0 <= fVar12) {
            fVar13 = 1.0;
          }
          if (fVar13 <= param_3[2]) {
            fVar13 = param_3[2];
          }
          param_3[2] = fVar13;
          uVar3 = *(uint *)(lVar1 + -0x90);
        }
        if ((uVar3 & 8) != 0) {
          if (1.0 <= fVar12) {
            fVar12 = 1.0;
          }
          if (fVar12 <= param_3[3]) {
            fVar12 = param_3[3];
          }
          param_3[3] = fVar12;
        }
      }
      lVar10 = lVar10 + 1;
      lVar9 = lVar9 + 0xb8;
    } while (lVar10 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 140520370 FUN_140520370 body=130 status=ok
// SIG undefined FUN_140520370(void)

undefined8 * FUN_140520370(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14abab320;
  FUN_1400d7c38(param_1 + 0x1f);
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1405203f2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1405203f2 FUN_1405203f2 body=87 status=ok
// SIG undefined FUN_1405203f2(void)

void FUN_1405203f2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a790720;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140520449 FUN_140520449 body=528 status=ok
// SIG undefined FUN_140520449(void)

void FUN_140520449(uint param_1,undefined8 *param_2,int param_3,byte param_4)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_e8 [40];
  uint local_c0;
  undefined8 *local_b8;
  byte local_a1;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 **local_88;
  undefined2 local_80;
  undefined4 *local_78;
  undefined8 uStack_70;
  code *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar4 = 0;
  if (0 < param_3) {
    iVar4 = param_3;
  }
  uVar2 = 1;
  uVar3 = param_1;
  if (iVar4 <= (int)param_1) {
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar2 = DAT_14c8335d8 +
            (uint)(*(undefined **)(lVar8 + 0x2c0) != &DAT_14c82ba00 || *(int *)(lVar8 + 0x2c8) == 0)
    ;
    if ((int)param_1 <= (int)uVar2) {
      uVar2 = param_1;
    }
    if ((int)DAT_14c75f14c <= (int)uVar2) {
      uVar2 = DAT_14c75f14c;
    }
    uVar3 = (int)(uVar2 + param_1 + -1) / (int)uVar2;
    if (1 < (int)uVar2 && (int)uVar3 < iVar4) {
      uVar7 = uVar2;
      do {
        uVar2 = uVar7 >> 1;
        uVar3 = (int)(uVar2 + (param_1 - 1)) / (int)uVar2;
        if (uVar7 < 4) break;
        uVar7 = uVar2;
      } while ((int)uVar3 < iVar4);
    }
  }
  local_78 = (undefined4 *)0x0;
  uStack_70 = 1;
  local_a1 = param_4;
  local_a0 = param_2;
  FUN_1446f48e2(&local_78,0);
  *local_78 = 0;
  if (0 < (int)uVar2) {
    uVar6 = 0;
    do {
      uVar1 = uStack_70;
      uVar7 = local_78[uVar6] + uVar3;
      if ((int)param_1 <= (int)uVar7) {
        uVar7 = param_1;
      }
      if (uVar7 == local_78[uVar6]) break;
      lVar8 = (longlong)(int)uStack_70;
      uVar5 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
      if (uStack_70._4_4_ < uVar5) {
        FUN_1446f48e2(&local_78,uVar1 & 0xffffffff);
      }
      local_78[lVar8] = uVar7;
      uVar6 = uVar6 + 1;
    } while (uVar2 != uVar6);
  }
  local_98 = *local_a0;
  local_60 = &local_98;
  local_90 = local_a0[1];
  local_80 = 0;
  local_b8 = &local_58;
  local_58 = 0;
  local_50 = 0;
  local_68 = FUN_1429afe04;
  local_c0 = (uint)(DAT_14c99384c != 0 | local_a1);
  local_88 = &local_78;
  FUN_1427ae281(L"ParallelFor Task",(int)uStack_70 + -1,1);
  if (local_78 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14052065a FUN_14052065a body=468 status=ok
// SIG undefined FUN_14052065a(void)

longlong FUN_14052065a(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x298);
  iVar3 = *(int *)(param_1 + 0x2a0);
  if ((longlong)iVar3 != 0) {
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar5 + lVar6);
      if (lVar4 != 0) {
        FUN_144725486();
        FUN_144725486(lVar4 + 8);
        FUN_144725486(lVar4 + 0x18);
        FUN_144725486(lVar4 + 0x30);
        FUN_144725486(lVar4 + 0xd0);
        FUN_144725486(lVar4 + 0x110);
        FUN_144725486(lVar4 + 0x138);
        FUN_14052082e(lVar4 + 0x360);
        FUN_140137a98(lVar4 + 0x360);
        *(undefined ***)(lVar4 + 0x138) = &PTR_FUN_14a1ca480;
        if (*(longlong *)(lVar4 + 0x348) != 0) {
          LOCK();
          puVar1 = (uint *)(*(longlong *)(lVar4 + 0x348) + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
        if (*(longlong *)(lVar4 + 0x340) != 0) {
          LOCK();
          puVar1 = (uint *)(*(longlong *)(lVar4 + 0x340) + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
        FUN_1447259a8(lVar4 + 0x138);
        *(undefined ***)(lVar4 + 0x110) = &PTR_FUN_14a83cdc0;
        if (*(longlong *)(lVar4 + 0x128) != 0) {
          FUN_1400020a8();
        }
        FUN_14003f39a(lVar4 + 0x110);
        FUN_140296b76(lVar4 + 0xd0);
        FUN_140296ab8(lVar4 + 0x90);
        FUN_140296d44(lVar4 + 8);
        FUN_1400020a8(lVar4);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar3 * 8 != lVar6);
    lVar5 = *(longlong *)(param_1 + 0x298);
  }
  if (lVar5 != 0) {
    FUN_1400020a8();
  }
  FUN_140064e2c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14052082e FUN_14052082e body=360 status=ok
// SIG undefined FUN_14052082e(void)

void FUN_14052082e(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  undefined1 local_62;
  undefined1 local_61;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined4 uStack_58;
  undefined3 uStack_54;
  undefined1 local_51;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0xa8) != -1) {
    (**(code **)(*DAT_14ca964f8 + 0x38))();
    *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  }
  FUN_144725486();
  uStack_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_6a = 0;
  local_62 = 1;
  plVar1 = (longlong *)(param_1 + 0x40);
  local_61 = 0;
  uStack_60 = 0;
  uStack_59 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_51 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  if (plVar1 != &local_78) {
    lVar4 = *plVar1;
    *plVar1 = 0;
    if (lVar4 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar4 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x48) = uStack_70;
  *(undefined2 *)(param_1 + 0x4c) = uStack_6c;
  *(ulonglong *)(param_1 + 0x4e) = CONCAT62(uStack_68,uStack_6a);
  *(undefined1 *)(param_1 + 0x56) = local_62;
  *(undefined1 *)(param_1 + 0x57) = local_61;
  FUN_140520998(param_1 + 0x58,&uStack_60);
  *(undefined4 *)(param_1 + 0x68) = uStack_50;
  *(undefined4 *)(param_1 + 0x6c) = uStack_4c;
  *(undefined4 *)(param_1 + 0x70) = uStack_48;
  *(undefined4 *)(param_1 + 0x74) = uStack_44;
  *(undefined4 *)(param_1 + 0x78) = uStack_40;
  *(undefined4 *)(param_1 + 0x7c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x80) = uStack_38;
  *(undefined4 *)(param_1 + 0x84) = uStack_34;
  *(undefined4 *)(param_1 + 0x88) = uStack_30;
  FUN_14005bcf4(CONCAT17(uStack_59,uStack_60),uStack_58);
  if (CONCAT17(uStack_59,uStack_60) != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    LOCK();
    puVar2 = (uint *)(local_78 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140520998 FUN_140520998 body=80 status=ok
// SIG undefined FUN_140520998(void)

longlong * FUN_140520998(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_14005bcf4(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1405209e8 FUN_1405209e8 body=116 status=ok
// SIG undefined FUN_1405209e8(void)

undefined8 * FUN_1405209e8(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140520a5e(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140520a5e FUN_140520a5e body=839 status=ok
// SIG undefined FUN_140520a5e(void)

undefined8 * FUN_140520a5e(longlong param_1,undefined8 *param_2,uint *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x4e0));
  uVar4 = *param_3;
  uVar7 = param_3[2];
  uVar10 = param_3[3];
  uVar5 = param_3[4];
  uVar6 = param_3[5];
  uVar5 = uVar6 >> 0xd ^
          ((uVar5 << 0x10 | uVar5 & 0xffff) - uVar6) + ((uVar5 >> 0x10) << 0x13 | uVar5 >> 0x10) +
          ((uVar5 & 0xffff) >> 4);
  uVar8 = uVar5 << 8 ^ (-0x61c88647 - uVar6) - uVar5;
  uVar9 = uVar8 >> 0xd ^ (uVar6 - uVar5) - uVar8;
  uVar5 = uVar9 >> 0xc ^ (uVar5 - uVar8) - uVar9;
  uVar6 = uVar5 << 0x10 ^ (uVar8 - uVar9) - uVar5;
  uVar8 = uVar6 >> 5 ^ (uVar9 - uVar5) - uVar6;
  uVar9 = uVar8 >> 3 ^ (uVar5 - uVar6) - uVar8;
  uVar5 = uVar9 << 10 ^ (uVar6 - uVar8) - uVar9;
  uVar5 = uVar5 >> 0xf ^ uVar8 - (uVar9 + uVar5);
  uVar7 = uVar10 >> 0xd ^
          ((uVar7 << 0x10 | uVar7 & 0xffff) - uVar10) + ((uVar7 >> 0x10) << 0x13 | uVar7 >> 0x10) +
          ((uVar7 & 0xffff) >> 4);
  uVar6 = uVar7 << 8 ^ (-0x61c88647 - uVar10) - uVar7;
  uVar10 = uVar6 >> 0xd ^ (uVar10 - uVar7) - uVar6;
  uVar7 = uVar10 >> 0xc ^ (uVar7 - uVar6) - uVar10;
  uVar6 = uVar7 << 0x10 ^ (uVar6 - uVar10) - uVar7;
  uVar10 = uVar6 >> 5 ^ (uVar10 - uVar7) - uVar6;
  uVar8 = uVar10 >> 3 ^ (uVar7 - uVar6) - uVar10;
  uVar7 = uVar8 << 10 ^ (uVar6 - uVar10) - uVar8;
  uVar10 = uVar7 >> 0xf ^ uVar10 - (uVar8 + uVar7);
  uVar7 = uVar10 >> 0xd ^
          ((uVar4 << 0x10 | uVar4 & 0xffff) + ((uVar4 & 0xffff) >> 4) +
          ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10)) - uVar10;
  uVar4 = uVar7 << 8 ^ (-0x61c88647 - uVar10) - uVar7;
  uVar6 = uVar4 >> 0xd ^ (uVar10 - uVar7) - uVar4;
  uVar10 = uVar6 >> 0xc ^ (uVar7 - uVar4) - uVar6;
  uVar7 = uVar10 << 0x10 ^ (uVar4 - uVar6) - uVar10;
  uVar4 = uVar7 >> 5 ^ (uVar6 - uVar10) - uVar7;
  uVar10 = uVar4 >> 3 ^ (uVar10 - uVar7) - uVar4;
  uVar7 = uVar10 << 10 ^ (uVar7 - uVar4) - uVar10;
  uVar7 = uVar5 >> 0xd ^ (uVar7 >> 0xf ^ uVar4 - (uVar10 + uVar7)) - uVar5;
  uVar10 = uVar7 << 8 ^ (-0x61c88647 - uVar5) - uVar7;
  uVar4 = uVar10 >> 0xd ^ (uVar5 - uVar7) - uVar10;
  uVar7 = uVar4 >> 0xc ^ (uVar7 - uVar10) - uVar4;
  uVar5 = uVar7 << 0x10 ^ (uVar10 - uVar4) - uVar7;
  uVar10 = uVar5 >> 5 ^ (uVar4 - uVar7) - uVar5;
  uVar4 = uVar10 >> 3 ^ (uVar7 - uVar5) - uVar10;
  uVar7 = uVar4 << 10 ^ (uVar5 - uVar10) - uVar4;
  iVar2 = FUN_140520da6((longlong *)(param_1 + 0x4e8),uVar7 >> 0xf ^ uVar10 - (uVar4 + uVar7),
                        param_3);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x4e8);
    lVar3 = lVar1 + (longlong)iVar2 * 0x30;
    if ((lVar3 != 0) && (lVar1 + (longlong)iVar2 * 0x30 != -0x18)) {
      *param_2 = *(undefined8 *)(lVar3 + 0x18);
      lVar1 = *(longlong *)(lVar3 + 0x20);
      param_2[1] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
        UNLOCK();
      }
      goto LAB_140520d4f;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_140520d4f:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x4e0));
  return param_2;
}



// FUNCTION 140520da6 FUN_140520da6 body=125 status=ok
// SIG undefined FUN_140520da6(void)

int FUN_140520da6(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x30;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 8 + lVar4) == param_3[2]))
            && (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) &&
           ((*(int *)(lVar2 + 0x10 + lVar4) == param_3[4] &&
            (*(int *)(lVar2 + 0x14 + lVar4) == param_3[5])))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x28 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140520e24 FUN_140520e24 body=14 status=ok
// SIG undefined FUN_140520e24(void)

void FUN_140520e24(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_140520e32();
    return;
  }
  return;
}



// FUNCTION 140520e32 FUN_140520e32 body=450 status=ok
// SIG undefined FUN_140520e32(void)

void FUN_140520e32(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_140520f4d:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_140520f8a:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_140520e88;
LAB_140520e7d:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_140520e88:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x000140520eb4;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140520f0a:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_140520f8a;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_140520f4d;
code_r0x000140520eb4:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_140520f0a;
    }
  }
  goto LAB_140520e7d;
}



// FUNCTION 140520ff4 FUN_140520ff4 body=46 status=ok
// SIG undefined FUN_140520ff4(void)

void FUN_140520ff4(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x2500) = 0;
  FUN_140283eaa(param_1 + 0x2568,0);
  FUN_140521022(param_1);
  return;
}



// FUNCTION 140521022 FUN_140521022 body=273 status=ok
// SIG undefined FUN_140521022(void)

void FUN_140521022(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_140521134(param_1 + 0x988);
    plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x3a8) + 0x20))(param_1 + 0x3a8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
    }
  }
  FUN_1405213ee(param_1 + 0x1750);
  FUN_1405211a0(param_1);
  FUN_14063a62a(param_1 + 0x4b8,0);
  if ((*(longlong *)(param_1 + 0x1748) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x168), plVar1 != (longlong *)0x0)) {
    uVar2 = FUN_1449d6ade();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_1449d6ade();
      plVar3 = (longlong *)FUN_144718840(plVar1,uVar2);
      if ((plVar1 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x1748) != 0)) {
          FUN_14480f766(lVar4);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x8d1) = 1;
  FUN_14067171c(param_1 + 0x898);
  *(undefined8 *)(param_1 + 0x898) = 0;
  FUN_14078a7c0(param_1 + 0x4d8);
  FUN_140872622(param_1);
  return;
}



// FUNCTION 140521134 FUN_140521134 body=97 status=ok
// SIG undefined FUN_140521134(void)

void FUN_140521134(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  plVar3 = *(longlong **)(param_1 + 0xf8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xf8) = 0;
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
  *(undefined1 *)(param_1 + 0x101) = 0;
  return;
}



// FUNCTION 140521196 FUN_140521196 body=9 status=ok
// SIG undefined FUN_140521196(void)

void FUN_140521196(longlong param_1)

{
  FUN_1405212ac(param_1 + 0x10);
  return;
}



// FUNCTION 1405211a0 FUN_1405211a0 body=103 status=ok
// SIG undefined FUN_1405211a0(void)

void FUN_1405211a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0xd00) != 0) {
    FUN_140521208();
    *(undefined8 *)(param_1 + 0xd00) = 0;
    plVar3 = *(longlong **)(param_1 + 0xd08);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xd08) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140521203. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140521208 FUN_140521208 body=163 status=ok
// SIG undefined FUN_140521208(void)

void FUN_140521208(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  
  if (*(char *)((longlong)param_1 + 0x3c) == '\x01') {
    bVar4 = true;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      uVar1 = *(uint *)(param_1 + 6);
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        plVar2 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar2 != (longlong *)0x0) &&
           (((int)plVar2[2] == *(int *)((longlong)param_1 + 0x34) &&
            ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
            lVar3 = *plVar2;
          }
          else {
            lVar3 = 0;
          }
          if ((*(byte *)(lVar3 + 0x155) & 0x20) == 0) {
            if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
              lVar3 = *plVar2;
            }
            else {
              lVar3 = 0;
            }
            bVar4 = *(char *)(lVar3 + 0x152) == '\x02';
          }
        }
      }
    }
    (**(code **)(*param_1 + 0x18))(param_1,bVar4);
    *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  }
  return;
}



// FUNCTION 1405212ac FUN_1405212ac body=321 status=ok
// SIG undefined FUN_1405212ac(void)

void FUN_1405212ac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x98);
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
  plVar3 = *(longlong **)(param_1 + 0x88);
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
  plVar3 = *(longlong **)(param_1 + 0x78);
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
  FUN_140861e20(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x48) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_140521313;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_140521313:
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001405213df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1405213ee FUN_1405213ee body=248 status=ok
// SIG undefined FUN_1405213ee(void)

void FUN_1405213ee(undefined8 *param_1)

{
  int iVar1;
  
  FUN_140521550(param_1 + 0x35,0);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    FUN_140254dde(param_1 + 4,0);
  }
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)((longlong)param_1 + 100) != 0) {
    FUN_140254dde(param_1 + 9,0);
  }
  *(undefined1 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x74) < 0) {
    *(undefined4 *)(param_1 + 0xe) = 0;
    FUN_147f618de(param_1 + 0xd,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  iVar1 = *(int *)((longlong)param_1 + 0xb4);
  FUN_1405214e6(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xb4) != 0)) {
    FUN_147f6193e(param_1 + 0x15,0);
  }
  if (*(int *)((longlong)param_1 + 0x114) < 0) {
    *(undefined4 *)(param_1 + 0x22) = 0;
    FUN_14089e18e(param_1 + 0x17,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x22) = 0;
  }
  *(undefined4 *)(param_1 + 0xf) = 0xbf800000;
  return;
}



// FUNCTION 1405214e6 FUN_1405214e6 body=105 status=ok
// SIG undefined FUN_1405214e6(void)

void FUN_1405214e6(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 8);
    do {
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar3 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar2 = puVar3;
        if (0x18 < *(ushort *)(puVar3 + 3)) {
          puVar2 = (undefined8 *)*puVar3;
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < *(ushort *)(puVar3 + 3)) {
        FUN_1400020a8(*puVar3);
      }
      puVar3 = puVar3 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140521550 FUN_140521550 body=126 status=ok
// SIG undefined FUN_140521550(void)

void FUN_140521550(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1405215ce FUN_1405215ce body=82 status=ok
// SIG undefined FUN_1405215ce(void)

void FUN_1405215ce(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b318620;
  *(undefined4 *)(param_1 + 0x700) = 0;
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FUN_1400020a8();
  }
  FUN_14060f136(param_1 + 0x6b8);
  FUN_14060f31a(param_1 + 0x10);
  return;
}



// FUNCTION 140521620 FUN_140521620 body=1287 status=ok
// SIG undefined FUN_140521620(void)

void FUN_140521620(longlong *param_1,longlong *param_2,undefined4 *param_3,undefined4 param_4,
                  longlong *param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_178 [32];
  longlong *local_158;
  undefined1 *local_148;
  longlong *local_140;
  longlong *local_138 [2];
  undefined8 local_128;
  longlong *local_120;
  undefined8 local_118;
  longlong *local_110;
  undefined8 local_108;
  longlong *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  longlong local_e0;
  undefined1 *local_d8;
  longlong *local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((param_1[0x6f] != 0) && (plVar7 = (longlong *)param_1[0x70], plVar7 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,param_3,param_4,param_6);
    if (cVar4 == '\0') goto LAB_140521813;
  }
  lVar5 = (**(code **)(*param_5 + 0x2a8))(param_5);
  if (lVar5 == 0) {
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      local_d8 = (undefined1 *)FUN_14479d2ce(param_1 + 0xad);
      local_158 = param_1 + 0xae;
      FUN_14052268c(lVar5,DAT_14cb0caba,&local_d8,param_1 + 0xb0);
      FUN_14757466e(param_1,&local_d8);
      local_148 = local_d8;
      local_140 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
        UNLOCK();
      }
      local_158 = (longlong *)param_6;
      (**(code **)(*param_5 + 0x2c0))(param_5,param_3,param_2,&local_148);
      plVar7 = local_d0;
      if (local_d0 == (longlong *)0x0) goto LAB_140521813;
      LOCK();
      plVar1 = local_d0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) goto LAB_140521813;
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) goto LAB_140521813;
      lVar5 = *plVar7;
      goto LAB_1405219c5;
    }
    local_d8 = local_c8;
    local_d0 = (longlong *)0x8000000000;
    param_2[1] = (longlong)&local_d8;
    local_100 = (longlong *)FUN_14479d2ce(param_1 + 0xad);
    local_158 = param_1 + 0xae;
    FUN_14052268c(&local_d8,DAT_14cb0caba,&local_100,param_1 + 0xb0);
    FUN_14757466e(param_1,&local_100);
    local_138[0] = local_100;
    if (CONCAT44(uStack_f4,local_f8) != 0) {
      LOCK();
      piVar2 = (int *)(CONCAT44(uStack_f4,local_f8) + 8);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    local_158 = (longlong *)param_6;
    (**(code **)(*param_5 + 0x2c0))(param_5,param_3,param_2,local_138);
    plVar7 = (longlong *)CONCAT44(uStack_f4,local_f8);
    if (plVar7 != (longlong *)0x0) {
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
          lVar5 = *plVar7;
          goto LAB_140521a0f;
        }
      }
    }
  }
  else {
    local_100 = param_5;
    if (param_5 != (longlong *)0x0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_5);
    }
    local_f8 = *param_3;
    uStack_f4 = param_3[1];
    uStack_f0 = param_3[2];
    uStack_ec = param_3[3];
    local_e0 = *param_2;
    local_e8 = param_4;
    if ((local_e0 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    lVar6 = param_2[1];
    if (lVar6 != 0) {
      local_d8 = (undefined1 *)FUN_14479d2ce(param_1 + 0xad);
      local_158 = param_1 + 0xae;
      FUN_14052268c(lVar6,DAT_14cb0caba,&local_d8,param_1 + 0xb0);
      lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
      local_128 = *(undefined8 *)(lVar6 + 8);
      plVar7 = *(longlong **)(lVar6 + 0x10);
      if (plVar7 == (longlong *)0x0) {
        local_120 = (longlong *)0x0;
        local_158 = (longlong *)param_6;
        FUN_140521b2e(lVar5,&local_100,param_2);
        goto LAB_140521813;
      }
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      local_158 = (longlong *)param_6;
      local_120 = plVar7;
      FUN_140521b2e(lVar5,&local_100,param_2);
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) goto LAB_140521813;
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) goto LAB_140521813;
      lVar5 = *plVar7;
LAB_1405219c5:
      (**(code **)(lVar5 + 0x10))(plVar7);
      goto LAB_140521813;
    }
    local_d8 = local_c8;
    local_d0 = (longlong *)0x8000000000;
    param_2[1] = (longlong)&local_d8;
    local_158 = param_1 + 0xae;
    if (*(int *)((longlong)param_1 + 0x56c) == 0) {
LAB_140521841:
      local_108 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0xad);
      local_108 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        puVar8 = (undefined8 *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((puVar8 == (undefined8 *)0x0) ||
           ((*(int *)(puVar8 + 2) != *(int *)((longlong)param_1 + 0x56c) ||
            ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_140521841;
        local_108 = *puVar8;
      }
    }
    FUN_14052268c(&local_d8,CONCAT71((int7)((ulonglong)local_108 >> 8),DAT_14cb0caba),&local_108,
                  param_1 + 0xb0);
    lVar6 = (**(code **)(*param_1 + 0x10))(param_1);
    local_118 = *(undefined8 *)(lVar6 + 8);
    plVar7 = *(longlong **)(lVar6 + 0x10);
    if (plVar7 == (longlong *)0x0) {
      local_110 = (longlong *)0x0;
      local_158 = (longlong *)param_6;
      FUN_140521b2e(lVar5,&local_100,param_2);
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      local_158 = (longlong *)param_6;
      local_110 = plVar7;
      FUN_140521b2e(lVar5,&local_100,param_2);
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
          lVar5 = *plVar7;
LAB_140521a0f:
          (**(code **)(lVar5 + 0x10))(plVar7);
        }
      }
    }
  }
  param_2[1] = 0;
  FUN_14027079c(&local_d8);
LAB_140521813:
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140521b2e FUN_140521b2e body=649 status=ok
// SIG undefined FUN_140521b2e(void)

void FUN_140521b2e(longlong *param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  longlong param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  int local_84;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar8 = *(uint *)(param_1 + 1);
  if ((int)uVar8 < 1) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    uVar11 = uVar8;
    do {
      uVar2 = (uVar11 >> 1) + uVar13;
      lVar15 = (ulonglong)uVar2 * 0x30;
      lVar14 = *param_1 + lVar15;
      uVar3 = *(uint *)(*param_1 + lVar15);
      if ((uVar3 < *(uint *)(param_2 + 8)) ||
         ((uVar3 <= *(uint *)(param_2 + 8) &&
          ((*(uint *)(lVar14 + 4) < *(uint *)(param_2 + 0xc) ||
           ((*(uint *)(lVar14 + 4) == *(uint *)(param_2 + 0xc) &&
            ((*(uint *)(lVar14 + 8) < *(uint *)(param_2 + 0x10) ||
             ((*(uint *)(lVar14 + 8) == *(uint *)(param_2 + 0x10) &&
              (*(uint *)(lVar14 + 0xc) < *(uint *)(param_2 + 0x14))))))))))))) {
        uVar13 = uVar2 + (uVar11 & 1);
      }
      bVar17 = 1 < uVar11;
      uVar11 = uVar11 >> 1;
    } while (bVar17);
  }
  local_78 = param_5;
  local_70 = param_3;
  if (uVar8 - uVar13 != 0 && (int)uVar13 <= (int)uVar8) {
    lVar14 = (ulonglong)uVar13 << 0x20;
    lVar15 = (ulonglong)uVar13 * 0x30 + 0xc;
    iVar16 = 0;
    local_84 = uVar8 - uVar13;
    local_68 = param_4;
    do {
      lVar9 = *param_1;
      param_4 = local_68;
      if ((((*(int *)(lVar9 + -0xc + lVar15) != *(int *)(param_2 + 8)) ||
           (*(int *)(lVar9 + -8 + lVar15) != *(int *)(param_2 + 0xc))) ||
          (*(int *)(lVar9 + -4 + lVar15) != *(int *)(param_2 + 0x10))) ||
         (*(int *)(lVar9 + lVar15) != *(int *)(param_2 + 0x14))) break;
      lVar4 = *local_68;
      plVar5 = (longlong *)local_68[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        lVar9 = *param_1;
      }
      plVar6 = *(longlong **)(lVar9 + 0x28 + (lVar14 >> 0x20) * 0x30);
      if ((plVar6 == (longlong *)0x0) || (lVar4 == 0)) {
        lVar9 = FUN_140521dd2(param_1,uVar13 + iVar16,local_70);
      }
      else {
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_98 = &local_60;
        local_60 = lVar4;
        local_58 = plVar5;
        (**(code **)(*plVar6 + 0x2a0))(plVar6,&local_50,param_2,iVar16);
        lVar9 = FUN_140521eec(local_50);
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar5 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      lVar4 = local_78;
      if (lVar9 != 0) {
        lVar12 = (longlong)*(int *)(local_78 + 0x10);
        uVar8 = *(int *)(local_78 + 0x10) + 1;
        *(uint *)(local_78 + 0x10) = uVar8;
        if (*(uint *)(local_78 + 0x14) < uVar8) {
          local_80 = lVar12;
          FUN_14571f162(local_78,lVar12);
          lVar12 = local_80;
        }
        lVar10 = *(longlong *)(lVar4 + 8);
        if (lVar10 == 0) {
          lVar10 = lVar4;
        }
        *(longlong *)(lVar10 + lVar12 * 8) = lVar9;
      }
      lVar14 = lVar14 + 0x100000000;
      iVar16 = iVar16 + 1;
      lVar15 = lVar15 + 0x30;
      param_4 = local_68;
    } while (local_84 != iVar16);
  }
  puVar7 = (undefined8 *)param_4[1];
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar7 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar7)(puVar7);
      LOCK();
      piVar1 = (int *)((longlong)puVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140521dd2 FUN_140521dd2 body=213 status=ok
// SIG undefined FUN_140521dd2(void)

void FUN_140521dd2(longlong *param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((longlong *)*param_3 != (longlong *)0x0) &&
     (lVar1 = (**(code **)(*(longlong *)*param_3 + 0x180))(), lVar1 != 0)) {
    *(byte *)(param_3 + 2) =
         *(byte *)(param_3 + 2) | *(byte *)(*param_1 + 0x20 + (longlong)param_2 * 0x30);
  }
  plVar2 = local_38;
  FUN_140521ea8((longlong)param_2 * 0x30 + *param_1 + 0x10,plVar2,param_3);
  if (local_28 == 1) {
    while ((*(byte *)(local_38[0] + 0x78) & 1) == 0) {
      (**(code **)(**(longlong **)(local_38[0] + 0x70) + 0x20))
                (*(longlong **)(local_38[0] + 0x70),0xffffffff,0);
    }
    plVar2 = (longlong *)(local_38[0] + 0x80);
  }
  lVar1 = *plVar2;
  (*(code *)(&PTR_FUN_149fcd7f0)[local_28])(local_38);
  FUN_140521eec(lVar1);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140521ea8 FUN_140521ea8 body=68 status=ok
// SIG undefined FUN_140521ea8(void)

undefined8 * FUN_140521ea8(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  if (DAT_14c950c28 == '\x01') {
    *param_2 = 0;
    *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0xfc;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  else if ((*(byte *)(param_3 + 0x10) & 4) == 0) {
    FUN_1405220bc(param_1,param_2);
  }
  else {
    FUN_147025bd6(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 140521eec FUN_140521eec body=420 status=ok
// SIG undefined FUN_140521eec(void)

longlong FUN_140521eec(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = FUN_1405225a6();
    lVar3 = FUN_144718840(param_1,uVar2);
    if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar4 = FUN_1405225a6();
    if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0xd5) & 0x40) != 0)) {
      if (DAT_14c950d78 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_14081d0ea;
        local_48 = &LAB_1468b50ee;
        local_50 = FUN_1427f23a3;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
      }
      if ((lVar3 != 0) && (DAT_14c950d78 != lVar4)) {
        do {
          if (0 < (longlong)*(int *)(lVar3 + 0x1e0)) {
            lVar5 = 0;
            do {
              lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x1d8) + lVar5);
              if (((lVar1 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
                 (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
                  == lVar4 + 0x30)) {
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
              }
              lVar5 = lVar5 + 0x10;
            } while ((longlong)*(int *)(lVar3 + 0x1e0) * 0x10 != lVar5);
          }
          lVar3 = *(longlong *)(lVar3 + 0x40);
        } while (lVar3 != 0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1405220bc FUN_1405220bc body=584 status=ok
// SIG undefined FUN_1405220bc(void)

undefined4 * FUN_1405220bc(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  byte bVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 auStack_118 [40];
  ulonglong local_f0;
  longlong local_e8 [2];
  byte local_d8;
  undefined1 local_d0 [16];
  byte local_c0;
  undefined8 local_b8;
  uint uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8;
  longlong local_a0;
  uint uStack_98;
  undefined4 uStack_94;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_a0 = 0;
  uStack_98 = uStack_98 & 0xffffff00;
  local_90 = 0;
  uVar1 = *(uint *)(param_1 + 1);
  if ((ulonglong)uVar1 == 1) {
    FUN_140522308(*param_1,param_2,param_3);
  }
  else {
    if (uVar1 != 0) {
      local_b8 = 0;
      uStack_b0 = uStack_b0 & 0xffffff00;
      local_a8 = local_a8 & 0xffffffffffffff00;
      bVar10 = 0;
      if (0 < (int)uVar1) {
        lVar8 = *param_3;
        local_f0 = (ulonglong)(uVar1 - 1);
        plVar9 = &local_b8;
        uVar11 = 0;
        do {
          bVar10 = (byte)(int)param_3[2];
          local_e8[1] = 0;
          local_d8 = bVar10 & 0xfd;
          if (uVar11 == local_f0) {
            local_d8 = bVar10;
          }
          local_e8[0] = lVar8;
          FUN_140522308(uVar11 * 0x20 + *param_1,local_d0,local_e8);
          local_78 = CONCAT71(local_78._1_7_,local_c0);
          (*(code *)(&PTR_FUN_149fcd7e0)[local_c0])(&local_88,local_d0);
          uVar7 = local_78;
          uVar6 = uStack_7c;
          uVar5 = uStack_80;
          uVar4 = uStack_84;
          uVar3 = local_88;
          uVar2 = local_a8;
          local_78 = local_a8;
          local_88 = (undefined4)local_b8;
          uStack_84 = local_b8._4_4_;
          uStack_80 = uStack_b0;
          uStack_7c = uStack_ac;
          local_b8 = CONCAT44(uVar4,uVar3);
          uStack_b0 = uVar5;
          uStack_ac = uVar6;
          local_a8 = uVar7;
          (*(code *)(&PTR_FUN_149fcd7f0)[uVar2 & 0xff])(&local_88);
          (*(code *)(&PTR_FUN_149fcd7f0)[local_c0])(local_d0);
          lVar8 = local_b8;
          bVar10 = (byte)local_a8;
          if ((local_d8 & 2) != 0) {
LAB_1405222f0:
            *(byte *)(param_2 + 4) = bVar10;
            goto LAB_1405222c3;
          }
          plVar12 = plVar9;
          if ((byte)local_a8 == 1) {
            while ((*(byte *)(lVar8 + 0x78) & 1) == 0) {
              (**(code **)(**(longlong **)(lVar8 + 0x70) + 0x20))
                        (*(longlong **)(lVar8 + 0x70),0xffffffff,0);
            }
            plVar12 = (longlong *)(lVar8 + 0x80);
          }
          lVar8 = *plVar12;
          if (lVar8 == 0) {
            plVar9 = &local_a0;
            bVar10 = local_90;
            goto LAB_1405222f0;
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar1);
        bVar10 = (byte)local_a8;
      }
      *(byte *)(param_2 + 4) = bVar10;
      plVar9 = &local_b8;
LAB_1405222c3:
      (*(code *)(&PTR_FUN_149fcd7e0)[bVar10])(param_2,plVar9);
      (*(code *)(&PTR_FUN_149fcd7f0)[local_a8 & 0xff])();
      uVar11 = (ulonglong)local_90;
      goto LAB_14052211c;
    }
    *(undefined1 *)(param_2 + 4) = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = uStack_98;
    param_2[3] = uStack_94;
  }
  uVar11 = 0;
LAB_14052211c:
  (*(code *)(&PTR_FUN_149fcd7f0)[uVar11])(&local_a0);
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140522306 FUN_140522306 body=1 status=ok
// SIG undefined FUN_140522306(void)

void FUN_140522306(void)

{
  return;
}



// FUNCTION 140522308 FUN_140522308 body=276 status=ok
// SIG undefined FUN_140522308(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140522308(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  
  if (*(char *)((longlong)param_1 + 0x1e) != -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c99e178) && (FUN_144b3d300(&DAT_14c99e178), DAT_14c99e178 == -1)) {
      _DAT_14c99e148 = &PTR_LAB_149e668b0;
      _DAT_14c99e150 = 0;
      FUN_1405bceb4(&DAT_14c99e148);
      _DAT_14c99e148 = &PTR_FUN_149fcd880;
      DAT_14c99e158 = 0;
      _DAT_14c99e160 = 0;
      _DAT_14c99e168 = 0;
      _DAT_14c99e170 = 0;
      atexit((_func_5014 *)&LAB_142aedb63);
      _Init_thread_footer(&DAT_14c99e178);
    }
    lVar2 = (ulonglong)*(byte *)((longlong)param_1 + 0x1e) * 0x58 + _DAT_14c99e168;
    if ((lVar2 != 0) && (bVar1 = *(byte *)((longlong)param_1 + 0x1f), (bVar1 & 1) != 0)) {
      if ((bVar1 & 2) == 0) {
        param_1 = (undefined8 *)*param_1;
      }
      (**(code **)(lVar2 + 8))
                (param_2,(ulonglong)((uint)(1L << (bVar1 >> 2)) & 0xfffffffe) + (longlong)param_1,
                 param_3);
      return param_2;
    }
  }
  *param_2 = 0;
  *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0xfc;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 14052241c FUN_14052241c body=393 status=ok
// SIG undefined FUN_14052241c(void)

undefined8 * FUN_14052241c(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  undefined8 local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_3 = (longlong *)*param_3;
  if (param_3 == (longlong *)0x0) {
    *param_1 = 0;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfc;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    local_30 = 0;
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    cVar1 = (**(code **)(*param_3 + 0x98))(param_3,puVar3,&local_30,0);
    uVar2 = local_30;
    if (cVar1 == '\0') {
      if (*(int *)(param_2 + 1) == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = (undefined2 *)*param_2;
      }
      if (DAT_14c927740 == 0) {
        local_50 = &local_28;
        local_28 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_146856450;
        local_60 = FUN_1427b121c;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10000021;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      uVar2 = FUN_140277b32(DAT_14c927740,param_3,puVar3,0);
    }
    *param_1 = uVar2;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1405225a6 FUN_1405225a6 body=228 status=ok
// SIG undefined FUN_1405225a6(void)

longlong FUN_1405225a6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab1a70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14751fc49;
    local_40 = FUN_146338904;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneBoundObjectProxy",&DAT_14cab1a70,&DAT_14751fc48)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab1a70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14052268c FUN_14052268c body=920 status=ok
// SIG undefined FUN_14052268c(void)

void FUN_14052268c(ulonglong *param_1,uint param_2,longlong *param_3,longlong *param_4,
                  undefined4 *param_5)

{
  ushort uVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  void *_Dst;
  ulonglong uVar12;
  byte bVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  char cVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ushort *puVar22;
  longlong *_Dst_00;
  bool bVar23;
  undefined1 auStack_88 [47];
  char local_59;
  undefined4 *local_58;
  byte local_49;
  ulonglong local_48;
  
  local_58 = param_5;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_49 = (byte)param_2;
  uVar9 = FUN_140522a3e();
  lVar10 = FUN_140522a78(&local_49,uVar9);
  if (lVar10 != 0) {
    uVar8 = (1 << ((byte)param_2 & 0x1f)) - 1U & (uint)param_1[1];
    *(uint *)(param_1 + 1) = (uint)param_1[1] | 1 << (param_2 & 0x1f);
    uVar11 = (ulonglong)uVar8 - (ulonglong)(uVar8 >> 1 & 0x55555555);
    uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
    uVar20 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    uVar21 = uVar20 >> 0x38;
    uVar11 = *param_1;
    bVar13 = *(byte *)((longlong)param_1 + 0xe);
    uVar14 = (ulonglong)bVar13;
    uVar15 = 8;
    if (bVar13 != 0) {
      uVar12 = 0;
      do {
        uVar16 = (ulonglong)*(byte *)(uVar11 + 3 + uVar12 * 4);
        if (uVar15 < uVar16) {
          uVar15 = uVar16;
        }
        uVar12 = uVar12 + 1;
      } while (uVar14 != uVar12);
    }
    lVar10 = uVar14 * 4 + 4;
    uVar8 = 0;
    bVar2 = (byte)(uVar20 >> 0x38);
    uVar18 = (uint)bVar2;
    if (uVar21 != 0) {
      uVar8 = (uint)bVar2 + (uint)(uVar18 == 0);
      uVar20 = 0;
      do {
        uVar12 = (ulonglong)*(byte *)(uVar11 + 3 + uVar20 * 4);
        lVar10 = (ulonglong)*(byte *)(uVar11 + 2 + uVar20 * 4) + (-uVar12 & (lVar10 + uVar12) - 1);
        uVar20 = uVar20 + 1;
      } while (uVar8 != uVar20);
    }
    uVar20 = (lVar10 + 7U & 0xfffffffffffffff8) + 0x28;
    if (uVar8 < bVar13) {
      uVar12 = (ulonglong)uVar8;
      do {
        uVar16 = (ulonglong)*(byte *)(uVar11 + 3 + uVar12 * 4);
        lVar10 = uVar12 * 4;
        uVar12 = uVar12 + 1;
        uVar20 = (ulonglong)*(byte *)(uVar11 + 2 + lVar10) + (-uVar16 & (uVar20 + uVar16) - 1);
      } while (uVar14 != uVar12);
    }
    cVar17 = *(char *)((longlong)param_1 + 0xf);
    bVar23 = (uVar15 - 1 & uVar11) != 0;
    uVar1 = *(ushort *)((longlong)param_1 + 0xc);
    uVar15 = uVar11;
    if (uVar1 < uVar20 || bVar23) {
      uVar15 = (ulonglong)((uint)uVar1 * 2);
      if ((uint)uVar1 * 2 <= uVar20) {
        uVar15 = uVar20;
      }
      *(short *)((longlong)param_1 + 0xc) = (short)uVar15;
      uVar15 = FUN_14001cc68(uVar15 & 0xffff);
      *param_1 = uVar15;
      *(undefined1 *)((longlong)param_1 + 0xf) = 1;
      bVar13 = *(byte *)((longlong)param_1 + 0xe);
    }
    bVar13 = bVar13 + 1;
    *(byte *)((longlong)param_1 + 0xe) = bVar13;
    _Dst = (void *)(uVar15 + uVar20);
    if ((int)(uint)bVar2 < (int)(bVar13 - 1)) {
      lVar10 = (ulonglong)bVar13 - 1;
      local_59 = cVar17;
      do {
        uVar15 = (ulonglong)*(byte *)((uVar11 - 2) + lVar10 * 4);
        _Dst = (void *)(-(ulonglong)*(byte *)((uVar11 - 1) + lVar10 * 4) & (longlong)_Dst - uVar15);
        memmove(_Dst,(void *)(*(ushort *)((uVar11 - 4) + lVar10 * 4) + uVar11),uVar15);
        *(short *)((uVar11 - 4) + lVar10 * 4) = (short)_Dst - (short)(int)*param_1;
        lVar10 = lVar10 + -1;
        cVar17 = local_59;
      } while ((longlong)uVar21 < lVar10);
    }
    _Dst_00 = (longlong *)((longlong)_Dst - 0x28U & 0xfffffffffffffff8);
    lVar10 = *param_3;
    *_Dst_00 = lVar10;
    if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    lVar10 = param_4[1];
    _Dst_00[1] = *param_4;
    _Dst_00[2] = lVar10;
    uVar4 = local_58[1];
    uVar5 = local_58[2];
    uVar6 = local_58[3];
    *(undefined4 *)(_Dst_00 + 3) = *local_58;
    *(undefined4 *)((longlong)_Dst_00 + 0x1c) = uVar4;
    *(undefined4 *)(_Dst_00 + 4) = uVar5;
    *(undefined4 *)((longlong)_Dst_00 + 0x24) = uVar6;
    uVar15 = *param_1;
    sVar3 = (short)uVar15;
    if (uVar21 != 0) {
      puVar22 = (ushort *)(uVar11 + (ulonglong)(bVar2 - 1) * 4);
      local_58 = (undefined4 *)CONCAT44(local_58._4_4_,uVar18);
      local_59 = cVar17;
      do {
        _Dst_00 = (longlong *)
                  ((longlong)_Dst_00 - (ulonglong)(byte)puVar22[1] &
                  -(ulonglong)*(byte *)((longlong)puVar22 + 3));
        memmove(_Dst_00,(void *)(*puVar22 + uVar11),(ulonglong)(byte)puVar22[1]);
        *puVar22 = (short)_Dst_00 - (short)(int)*param_1;
        puVar22 = puVar22 + -2;
        iVar7 = (int)local_58;
        iVar19 = (int)local_58 + -1;
        local_58 = (undefined4 *)CONCAT44(local_58._4_4_,iVar19);
      } while (iVar19 != 0 && 0 < iVar7);
      uVar15 = *param_1;
      cVar17 = local_59;
    }
    if ((int)uVar18 < (int)(*(byte *)((longlong)param_1 + 0xe) - 1)) {
      lVar10 = (ulonglong)*(byte *)((longlong)param_1 + 0xe) - 1;
      do {
        *(undefined4 *)(uVar15 + lVar10 * 4) = *(undefined4 *)((uVar11 - 4) + lVar10 * 4);
        lVar10 = lVar10 + -1;
      } while ((longlong)uVar21 < lVar10);
    }
    *(ushort *)(uVar15 + uVar21 * 4) = ((ushort)((longlong)_Dst - 0x28U) & 0xfff8) - sVar3;
    *(undefined2 *)(uVar15 + 2 + uVar21 * 4) = 0x828;
    if ((*param_1 != uVar11) && (uVar21 != 0)) {
      uVar14 = (ulonglong)(bVar2 - 1);
      do {
        *(undefined4 *)(uVar15 + uVar14 * 4) = *(undefined4 *)(uVar11 + uVar14 * 4);
        uVar14 = uVar14 - 1;
        iVar19 = (int)uVar21;
        uVar8 = iVar19 - 1;
        uVar21 = (ulonglong)uVar8;
      } while (uVar8 != 0 && 0 < iVar19);
    }
    if (((uVar1 < uVar20 || bVar23) && uVar11 != 0) && (cVar17 != '\0')) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140522a3e FUN_140522a3e body=57 status=ok
// SIG undefined FUN_140522a3e(void)

void FUN_140522a3e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabe898 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cabe898 = FUN_140002ddd(FUN_14636bc09,uVar1,L"ActorLocatorFragmentResolveParameter");
  }
  return;
}



// FUNCTION 140522a78 FUN_140522a78 body=190 status=ok
// SIG undefined FUN_140522a78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140522a78(byte *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0xff) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c99e178) {
      FUN_144b3d300(&DAT_14c99e178);
      if (DAT_14c99e178 == -1) {
        _DAT_14c99e148 = &PTR_LAB_149e668b0;
        _DAT_14c99e150 = 0;
        FUN_1405bceb4(&DAT_14c99e148);
        _DAT_14c99e148 = &PTR_FUN_149fcd880;
        DAT_14c99e158 = 0;
        _DAT_14c99e160 = 0;
        _DAT_14c99e168 = 0;
        _DAT_14c99e170 = 0;
        atexit((_func_5014 *)&LAB_142aedb63);
        _Init_thread_footer(&DAT_14c99e178);
      }
    }
    uVar1 = *(undefined8 *)(DAT_14c99e158 + (ulonglong)*param_1 * 8);
  }
  return uVar1;
}



// FUNCTION 140522b40 FUN_140522b40 body=701 status=ok
// SIG undefined FUN_140522b40(void)

void FUN_140522b40(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  
  lVar2 = param_1[1];
  iVar6 = *(int *)(*param_1 + 0x10);
  iVar5 = *(int *)(lVar2 + 0x108);
  if (iVar5 < iVar6) {
    *(int *)(lVar2 + 0x108) = iVar6;
    if ((uint)(*(int *)(lVar2 + 0x10c) - iVar5) < (uint)(iVar6 - iVar5)) {
      FUN_14571f26c(lVar2,iVar5);
    }
    lVar4 = *(longlong *)(lVar2 + 0x100);
    if (*(longlong *)(lVar2 + 0x100) == 0) {
      lVar4 = lVar2;
    }
    FUN_140522dfe((longlong)iVar5 * 0x10 + lVar4);
  }
  else {
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar6 < iVar5) {
      *(int *)(lVar2 + 0x108) = iVar6;
      FUN_140522e12(lVar2);
    }
  }
  lVar2 = *param_1;
  iVar6 = *(int *)(lVar2 + 0x30);
  if (iVar6 == 0) {
    uVar3 = 0;
    uVar10 = 1;
    iVar5 = 0;
    iVar8 = 0;
  }
  else {
    puVar9 = *(uint **)(lVar2 + 0x28);
    if (*(uint **)(lVar2 + 0x28) == (uint *)0x0) {
      puVar9 = (uint *)(lVar2 + 0x18);
    }
    uVar11 = *puVar9;
    if (uVar11 == 0) {
      iVar5 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar5 = iVar6 + -1;
      }
      uVar3 = 0;
      uVar10 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar10 = uVar3;
      }
      iVar8 = 0;
      do {
        if (uVar10 == uVar3) {
          return;
        }
        iVar8 = iVar8 + 0x20;
        uVar11 = puVar9[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar3 = 0;
      iVar8 = 0;
    }
    uVar10 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar10 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar5 = (iVar8 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar5) {
      iVar5 = iVar6;
    }
  }
  if (iVar5 < iVar6) {
    uVar11 = 0xffffffff;
    do {
      lVar4 = *(longlong *)(lVar2 + 8);
      lVar15 = (longlong)iVar5 * 0x128;
      iVar6 = *(int *)(lVar4 + 0x8c + lVar15);
      if (SBORROW4(0,iVar6)) {
        lVar14 = lVar4 + lVar15 + 4;
        if (*(int *)(lVar4 + lVar15 + 0x88) == 0) {
          lVar14 = lVar4 + lVar15 + 0x10;
        }
        iVar6 = *(int *)(lVar14 + 0x68);
        fVar16 = *(float *)(lVar14 + 0x6c);
      }
      else {
        fVar16 = 0.0;
      }
      lVar4 = *(longlong *)(lVar4 + 0x80 + lVar15);
      lVar15 = *(longlong *)(param_1[1] + 0x100);
      if (lVar15 == 0) {
        lVar15 = param_1[1];
      }
      lVar14 = (longlong)iVar5 * 0x10;
      *(int *)(lVar15 + lVar14) = iVar6;
      *(float *)(lVar15 + 4 + lVar14) = fVar16;
      *(double *)(lVar15 + 8 + lVar14) =
           ((double)((lVar4 >> 0x20) * (longlong)iVar6) +
           (double)(int)((ulonglong)lVar4 >> 0x20) * (double)fVar16) / (double)(int)lVar4;
      uVar11 = uVar11 & ~(uint)uVar10;
      puVar9 = *(uint **)(lVar2 + 0x28);
      if (*(uint **)(lVar2 + 0x28) == (uint *)0x0) {
        puVar9 = (uint *)(lVar2 + 0x18);
      }
      iVar6 = *(int *)(lVar2 + 0x30);
      iVar5 = (int)uVar3;
      lVar4 = (longlong)iVar5;
      uVar7 = puVar9[lVar4] & uVar11;
      if (uVar7 == 0) {
        iVar12 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar12 = iVar6 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar5) {
          iVar13 = iVar5;
        }
        if (iVar12 <= iVar5) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar7 = puVar9[lVar4 + lVar15 + 1];
          if (uVar7 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar13 - lVar4 == lVar15) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar5 + (int)lVar15 + 1);
        uVar11 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar7 & uVar7);
      uVar1 = uVar10 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = (iVar8 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar6);
  }
  return;
}



// FUNCTION 140522dfe FUN_140522dfe body=20 status=ok
// SIG undefined FUN_140522dfe(void)

void FUN_140522dfe(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140522e12 FUN_140522e12 body=158 status=ok
// SIG undefined FUN_140522e12(void)

void FUN_140522e12(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x108);
  uVar1 = *(uint *)(param_1 + 0x10c);
  if ((ulonglong)uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  else {
    iVar3 = uVar1 - uVar4;
    if (((longlong)iVar3 & 0xffffffffffffc00U) == 0) {
      if (iVar3 < 0x41 || (int)(uVar1 * 2) <= (int)(uVar4 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar4) {
      uVar2 = FUN_144a3809e((ulonglong)uVar4 << 4,0);
      uVar4 = (uint)(uVar2 >> 4);
      uVar1 = *(uint *)(param_1 + 0x10c);
    }
  }
  if (uVar4 == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x10c) = uVar4;
  FUN_14571f2e8(param_1,*(undefined4 *)(param_1 + 0x108));
  return;
}



// FUNCTION 140522eb0 FUN_140522eb0 body=63 status=ok
// SIG undefined FUN_140522eb0(void)

void FUN_140522eb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = param_3;
  *(byte *)(param_1 + 0x84) = *(byte *)(param_1 + 0x84) | 4;
  FUN_1449d6bc4(param_1 + -0x210);
  *(byte *)(param_1 + 0x84) = *(byte *)(param_1 + 0x84) & 0xfb;
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  return;
}



// FUNCTION 140522f04 FUN_140522f04 body=547 status=ok
// SIG undefined FUN_140522f04(void)

int * FUN_140522f04(longlong param_1,int *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  float fVar13;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    *(undefined8 *)param_2 = *param_3;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar5 = param_3[1];
    fVar6 = (float)((ulonglong)lVar2 >> 0x20);
    if (lVar1 != lVar5) {
      lVar4 = (lVar1 >> 0x20) * (longlong)(int)lVar5;
      lVar5 = (longlong)(int)lVar1 * (lVar5 >> 0x20);
      lVar1 = (lVar4 * (int)lVar2) / lVar5;
      dVar7 = ((double)fVar6 * (double)lVar4) / (double)lVar5 +
              (((double)lVar4 * (double)(int)lVar2) / (double)lVar5 - (double)lVar1);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = dVar7;
      auVar10 = roundpd(auVar10,auVar10,1);
      lVar1 = (longlong)auVar10._0_8_ + lVar1;
      fVar8 = (float)(dVar7 - auVar10._0_8_);
      fVar6 = fVar8;
      if (0.99999994 <= fVar8) {
        fVar6 = 0.99999994;
      }
      if (0x7ffffffe < lVar1) {
        lVar1 = 0x7fffffff;
      }
      lVar2 = -0x80000000;
      if (-0x80000000 < lVar1) {
        lVar2 = lVar1;
      }
      fVar6 = (float)(~-(uint)(0.0 < fVar8) & (uint)fVar8 | (uint)fVar6 & -(uint)(0.0 < fVar8)) +
              0.5 + -0.5;
      if (0.99999994 <= fVar6) {
        fVar6 = 0.99999994;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      lVar1 = param_3[1];
    }
    dVar7 = ((double)(int)lVar1 * *(double *)(param_1 + 0x28)) /
            (double)(int)((ulonglong)lVar1 >> 0x20);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = dVar7;
    auVar10 = roundpd(auVar12,auVar12,1);
    dVar11 = auVar10._0_8_;
    dVar7 = dVar7 - dVar11;
    if (2147483647.0 <= dVar11) {
      dVar11 = 2147483647.0;
    }
    if (dVar11 <= -2147483648.0) {
      dVar11 = -2147483648.0;
    }
    iVar3 = (int)dVar7;
    fVar13 = (float)dVar7 - (float)iVar3;
    fVar9 = 0.99999994;
    fVar8 = fVar13;
    if (0.99999994 <= fVar13) {
      fVar8 = fVar9;
    }
    fVar8 = (float)(~-(uint)(0.0 < fVar13) & (uint)fVar13 | (uint)fVar8 & -(uint)(0.0 < fVar13)) +
            0.5 + -0.5;
    if (0.99999994 <= fVar8) {
      fVar8 = fVar9;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    fVar8 = fVar8 + fVar6;
    auVar10 = roundss(ZEXT416(0),ZEXT416((uint)fVar8),9);
    *param_2 = (int)lVar2 + iVar3 + (int)dVar11 + ((int)ROUND(fVar8 + fVar8 + -0.5) >> 1);
    fVar6 = (fVar8 - auVar10._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar6) {
      fVar6 = fVar9;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    param_2[1] = (int)fVar6;
  }
  return param_2;
}



// FUNCTION 140523128 FUN_140523128 body=129 status=ok
// SIG undefined FUN_140523128(void)

undefined8 FUN_140523128(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x28) + 0x78))(param_1 + 0x28);
  uVar3 = 0;
  uVar4 = 0;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x180))(plVar1);
    if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 0x38) != 0)) &&
        (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0xf0), lVar2 != 0)) &&
       ((lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0 &&
        (lVar2 = *(longlong *)(lVar2 + 0x398), lVar2 != 0)))) {
      uVar3 = *(uint *)(lVar2 + 0x3d8);
      uVar4 = 0;
      if ((*(byte *)(param_1 + 0x294) & 1) != 0) {
        uVar4 = 0x80000000;
        uVar3 = uVar3 ^ 0x80000000;
      }
    }
  }
  return CONCAT44(uVar4,uVar3);
}



// FUNCTION 1405231aa FUN_1405231aa body=129 status=ok
// SIG undefined FUN_1405231aa(void)

void FUN_1405231aa(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if ((((longlong)(int)(iVar3 - uVar1) & 0xffffffffffffc00U) == 0) &&
     (iVar3 * 2 <= (int)(uVar1 * 3))) {
    return;
  }
  if ((uVar1 == 0) || (0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = FUN_144a3809e(uVar2 << 4,8);
      uVar2 = uVar2 >> 4;
      iVar3 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar2 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar2;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2 & 0xffffffff,0x10,8);
    }
  }
  return;
}



// FUNCTION 14052322c FUN_14052322c body=4754 status=ok
// SIG undefined FUN_14052322c(void)

/* WARNING: Removing unreachable block (ram,0x000140524434) */

void FUN_14052322c(longlong *param_1,ulonglong param_2,byte param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  ulonglong *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 **ppuVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined4 local_1a0;
  undefined8 *local_198;
  longlong lStack_190;
  ulonglong local_188;
  longlong lStack_180;
  undefined8 local_178;
  ulonglong local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong *local_150;
  undefined8 *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  ulonglong local_138;
  longlong lStack_130;
  undefined8 local_128;
  int local_120;
  float fStack_11c;
  int local_118;
  float fStack_114;
  ulonglong local_110;
  undefined8 local_108;
  int local_100;
  undefined8 local_f8;
  longlong lStack_f0;
  ulonglong local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  undefined1 local_cc [8];
  longlong lStack_c4;
  ulonglong local_bc;
  char local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  uVar21 = 0;
  if (param_3 < 3) {
    uVar21 = *(undefined4 *)(&DAT_14a492078 + (ulonglong)param_3 * 4);
  }
  iVar18 = *(int *)((longlong)param_1 + 0x2a4);
  local_110 = param_2;
  if (((iVar18 == 0) && (*(float *)(param_1 + 0x55) == 0.0)) && (!NAN(*(float *)(param_1 + 0x55))))
  {
    if ((*(uint *)((longlong)param_1 + 0x294) & 0x20) != 0) {
      *(uint *)((longlong)param_1 + 0x294) = *(uint *)((longlong)param_1 + 0x294) & 0xffffffdf;
      FUN_14179f158(param_1,&local_f8,1);
      if (local_f8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    goto LAB_140523ac3;
  }
  uVar7 = *(uint *)((longlong)param_1 + 0x294);
  *(uint *)((longlong)param_1 + 0x294) = uVar7 | 0x20;
  if ((uVar7 & 2) != 0) {
    (**(code **)(*param_1 + 0x2d8))(param_1);
    *(byte *)((longlong)param_1 + 0x294) = *(byte *)((longlong)param_1 + 0x294) & 0xfd;
  }
  if (param_3 == 0) {
    lVar10 = FUN_14179e7c6(param_1 + 0x5c);
    if (lVar10 != 0) {
      FUN_1432d92ec(lVar10 + 0x78,&local_f8);
      if (local_f8._1_1_ != '\0' && (char)local_f8 == '\x01') {
        lVar15 = param_1[0x61];
        lVar4 = param_1[0x62];
        fVar35 = (float)(param_2 >> 0x20);
        uVar13 = (ulonglong)(uint)fVar35;
        if (lVar15 != lVar4) {
          local_f8 = (undefined8 *)((lVar15 >> 0x20) * (longlong)(int)lVar4);
          local_148 = (undefined8 *)((longlong)(int)lVar15 * (lVar4 >> 0x20));
          lVar15 = ((longlong)local_f8 * (longlong)(int)param_2) / (longlong)local_148;
          dVar27 = ((double)fVar35 * (double)(longlong)local_f8) / (double)(longlong)local_148 +
                   (((double)(longlong)local_f8 * (double)(int)param_2) /
                    (double)(longlong)local_148 - (double)lVar15);
          auVar33._8_8_ = 0;
          auVar33._0_8_ = dVar27;
          auVar33 = roundpd(auVar33,auVar33,1);
          fVar25 = (float)(dVar27 - auVar33._0_8_);
          uVar13 = (longlong)auVar33._0_8_ + lVar15;
          fVar35 = fVar25;
          if (0.99999994 <= fVar25) {
            fVar35 = 0.99999994;
          }
          if (0x7ffffffe < (longlong)uVar13) {
            uVar13 = 0x7fffffff;
          }
          param_2 = 0xffffffff80000000;
          if (-0x80000000 < (longlong)uVar13) {
            param_2 = uVar13;
          }
          fVar35 = (float)(~-(uint)(0.0 < fVar25) & (uint)fVar25 |
                          (uint)fVar35 & -(uint)(0.0 < fVar25)) + 0.5 + -0.5;
          if (0.99999994 <= fVar35) {
            fVar35 = 0.99999994;
          }
          uVar13 = (ulonglong)(uint)fVar35;
          if (fVar35 <= 0.0) {
            uVar13 = 0;
          }
        }
        FUN_14040645e(lVar10 + 0x78,&local_f8,param_2 & 0xffffffff | uVar13 << 0x20);
        lVar10 = param_1[0x61];
        lVar15 = param_1[0x62];
        fVar35 = (float)((ulonglong)local_f8 >> 0x20);
        puVar14 = local_f8;
        if (lVar15 != lVar10) {
          puVar22 = (undefined8 *)((lVar15 >> 0x20) * (longlong)(int)lVar10);
          local_148 = (undefined8 *)((longlong)(int)lVar15 * (lVar10 >> 0x20));
          lVar10 = ((longlong)puVar22 * (longlong)(int)local_f8) / (longlong)local_148;
          dVar27 = ((double)fVar35 * (double)(longlong)puVar22) / (double)(longlong)local_148 +
                   (((double)(longlong)puVar22 * (double)(int)local_f8) /
                    (double)(longlong)local_148 - (double)lVar10);
          auVar31._8_8_ = 0;
          auVar31._0_8_ = dVar27;
          auVar33 = roundpd(auVar31,auVar31,1);
          fVar25 = (float)(dVar27 - auVar33._0_8_);
          puVar16 = (undefined8 *)((longlong)auVar33._0_8_ + lVar10);
          fVar35 = fVar25;
          if (0.99999994 <= fVar25) {
            fVar35 = 0.99999994;
          }
          if (0x7ffffffe < (longlong)puVar16) {
            puVar16 = (undefined8 *)0x7fffffff;
          }
          puVar14 = (undefined8 *)0xffffffff80000000;
          if (-0x80000000 < (longlong)puVar16) {
            puVar14 = puVar16;
          }
          fVar35 = (float)(~-(uint)(0.0 < fVar25) & (uint)fVar25 |
                          (uint)fVar35 & -(uint)(0.0 < fVar25)) + 0.5 + -0.5;
          if (0.99999994 <= fVar35) {
            fVar35 = 0.99999994;
          }
          local_f8 = puVar22;
          if (fVar35 <= 0.0) {
            fVar35 = 0.0;
          }
        }
        local_110 = CONCAT44(fVar35,(int)puVar14);
      }
    }
    FUN_14133d04a(param_1,local_cc,&local_110);
    param_2 = local_110;
    if (local_b4 == '\x01') goto LAB_1405236b9;
    cVar6 = FUN_140b8ae34(param_1,local_110);
    if (cVar6 == '\0') {
      ppuVar17 = (undefined8 **)&local_f8;
      goto LAB_1405238cd;
    }
    uVar7 = *(uint *)((longlong)param_1 + 0x294);
    if ((uVar7 & 1) == 0) {
      local_118 = (int)param_1[0x54];
      fStack_114 = 0.0;
    }
    else {
      (**(code **)(*param_1 + 0x2c8))(param_1,&local_118);
      uVar7 = *(uint *)((longlong)param_1 + 0x294);
    }
    if ((uVar7 & 1) == 0) {
      (**(code **)(*param_1 + 0x2c8))(param_1,&local_120);
    }
    else {
      local_120 = (int)param_1[0x54];
      fStack_11c = 0.0;
    }
    plVar3 = param_1 + 0x61;
    fVar35 = *(float *)(param_1 + 0x55) + 0.5 + -0.5;
    if (0.99999994 <= fVar35) {
      fVar35 = 0.99999994;
    }
    if (fVar35 <= 0.0) {
      fVar35 = 0.0;
    }
    dVar30 = (double)fVar35 + (double)*(int *)((longlong)param_1 + 0x2a4);
    dVar27 = 9.99999993922529e-09;
    if (9.99999993922529e-09 <= dVar30) {
      dVar27 = dVar30;
    }
    fVar35 = (float)(param_2 >> 0x20);
    fVar25 = fVar35 - fStack_114;
    auVar33 = roundps(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25),1);
    iVar19 = (int)param_2;
    fVar25 = (fVar25 - auVar33._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar25) {
      fVar25 = 0.99999994;
    }
    if (fVar25 <= 0.0) {
      fVar25 = 0.0;
    }
    dVar30 = (double)fVar25 + (double)((int)auVar33._0_4_ + (iVar19 - local_118));
    iVar8 = (int)(dVar30 / dVar27);
    iVar20 = -iVar8;
    if (-iVar8 < 0) {
      iVar20 = iVar8;
    }
    iVar12 = *(int *)((longlong)param_1 + 0x2ac) + iVar20;
    if (((int)param_1[0x57] < 0) || (iVar12 <= (int)param_1[0x57])) {
      *(int *)((longlong)param_1 + 0x2ac) = iVar12;
      if (iVar8 != 0) {
        if (*(int *)((longlong)param_1 + 900) < 0) {
          *(undefined4 *)(param_1 + 0x70) = 0;
          FUN_14571f40c(param_1 + 0x6f);
        }
        else {
          *(undefined4 *)(param_1 + 0x70) = 0;
        }
      }
      uVar11 = *(undefined8 *)((longlong)param_1 + 0x31c);
      uVar7 = *(uint *)((longlong)param_1 + 0x294);
      iVar19 = (int)uVar11;
      fVar35 = (float)((ulonglong)uVar11 >> 0x20);
      if ((uVar7 & 1) == 0) {
        if ((iVar19 < local_120) ||
           ((auVar33 = ZEXT416((uint)fVar35), iVar19 == local_120 && (fVar35 < fStack_11c)))) {
LAB_140523df7:
          FUN_1432db21e(plVar3,&local_148);
          local_d8 = local_128;
          lStack_f0 = CONCAT44(uStack_13c,uStack_140);
          local_e8 = local_138;
          lStack_e0 = lStack_130;
          local_f8 = local_148;
          local_108 = local_108 & 0xffffffffffff0000;
          (**(code **)(*param_1 + 0x2c0))(param_1,&local_f8,uVar21);
          uVar7 = *(uint *)((longlong)param_1 + 0x294);
          uVar11 = *(undefined8 *)((longlong)param_1 + 0x31c);
          auVar33 = ZEXT416((uint)((ulonglong)uVar11 >> 0x20));
        }
      }
      else if ((local_120 < iVar19) ||
              ((auVar33 = ZEXT416((uint)fVar35), iVar19 == local_120 && (fStack_11c < fVar35))))
      goto LAB_140523df7;
      auVar28._4_12_ = auVar33._4_12_;
      fVar35 = auVar33._0_4_;
      if ((uVar7 & 1) == 0) {
        auVar28._0_4_ = fVar35 + 0.0;
        iVar19 = (int)ROUND(auVar28._0_4_ + auVar28._0_4_ + -0.5) >> 1;
        auVar33 = roundss(ZEXT416(0),auVar28,9);
        fVar35 = auVar28._0_4_ - auVar33._0_4_;
        iVar8 = 1;
      }
      else {
        auVar33 = roundps(ZEXT416((uint)fVar35),ZEXT416((uint)fVar35),1);
        iVar19 = (int)auVar33._0_4_;
        fVar35 = fVar35 - auVar33._0_4_;
        iVar8 = -1;
      }
      fVar35 = fVar35 + 0.5 + -0.5;
      if (0.99999994 <= fVar35) {
        fVar35 = 0.99999994;
      }
      auVar29._4_12_ = auVar28._4_12_;
      auVar29._0_4_ = fVar35;
      lVar10 = auVar29._0_8_;
      if (fVar35 <= 0.0) {
        lVar10 = 0;
      }
      cVar6 = FUN_140b8ae34(param_1,(ulonglong)(uint)((int)uVar11 + iVar8 + iVar19) | lVar10 << 0x20
                           );
      if (cVar6 == '\0') {
        *(int *)((longlong)param_1 + 0x2ac) = *(int *)((longlong)param_1 + 0x2ac) - iVar20;
      }
      else {
        dVar27 = (double)FUN_144719204(dVar30,dVar27);
        auVar34._8_8_ = 0;
        auVar34._0_8_ = dVar27;
        auVar33 = roundpd(auVar34,auVar34,1);
        dVar30 = auVar33._0_8_;
        dVar27 = dVar27 - dVar30;
        if (2147483647.0 <= dVar30) {
          dVar30 = 2147483647.0;
        }
        if (dVar30 <= -2147483648.0) {
          dVar30 = -2147483648.0;
        }
        iVar19 = (int)dVar30;
        fVar35 = (float)dVar27;
        if (0.99999994 <= fVar35) {
          fVar35 = 0.99999994;
        }
        if (fVar35 <= 0.0) {
          fVar35 = 0.0;
        }
        fVar35 = fVar35 + 0.5 + -0.5;
        if (0.99999994 <= fVar35) {
          fVar35 = 0.99999994;
        }
        fVar25 = fVar35;
        if (fVar35 <= 0.0) {
          fVar25 = 0.0;
        }
        iVar20 = iVar19;
        if ((*(byte *)((longlong)param_1 + 0x294) & 1) == 0) {
          if (iVar19 < 0) {
LAB_1405240f9:
            iVar20 = ((int)ROUND(fVar25 + fVar25 + -0.5) >> 1) + iVar18 + iVar19;
            auVar33 = roundss(ZEXT816(0),ZEXT416((uint)fVar25),9);
            fVar25 = (fVar25 - auVar33._0_4_) + 0.5 + -0.5;
            if (0.99999994 <= fVar25) {
              fVar25 = 0.99999994;
            }
            if (fVar25 <= 0.0) {
              fVar25 = 0.0;
            }
          }
        }
        else if ((0 < iVar19) || (iVar19 == 0 && 0.0 < fVar35)) goto LAB_1405240f9;
        lVar10 = param_1[0x6c];
        if (lVar10 != 0) {
          lVar15 = (**(code **)(param_1[5] + 0x10))(param_1 + 5);
          local_158 = *(undefined8 *)(lVar15 + 8);
          plVar5 = *(longlong **)(lVar15 + 0x10);
          if (plVar5 == (longlong *)0x0) {
            local_150 = (longlong *)0x0;
            FUN_1400a5de2(lVar10);
          }
          else {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            local_150 = plVar5;
            FUN_1400a5de2(lVar10);
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
        if ((*(byte *)((longlong)param_1 + 0x294) & 1) == 0) {
          if (iVar19 < 0) {
            lVar10 = *param_1;
            puVar14 = &local_168;
LAB_140524218:
            (**(code **)(lVar10 + 0x2c8))(param_1,puVar14);
            uVar11 = *puVar14;
          }
          else {
            uVar11 = CONCAT44(fStack_114,local_118);
            local_168 = uVar11;
          }
        }
        else {
          if ((0 < iVar19) || (iVar19 == 0 && 0.0 < fVar35)) {
            lVar10 = *param_1;
            puVar14 = &local_160;
            goto LAB_140524218;
          }
          uVar11 = CONCAT44(fStack_114,local_118);
          local_160 = uVar11;
        }
        *(undefined8 *)((longlong)param_1 + 0x31c) = uVar11;
        if (*(char *)((longlong)param_1 + 0x32c) == '\x01') {
          *(undefined1 *)((longlong)param_1 + 0x32c) = 0;
        }
        if ((char)param_1[0x6b] == '\x01') {
          *(undefined1 *)(param_1 + 0x6b) = 0;
        }
        fVar35 = fStack_114 + fVar25;
        auVar33 = roundss(ZEXT416(0),ZEXT416((uint)fVar35),9);
        fVar26 = (fVar35 - auVar33._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar26) {
          fVar26 = 0.99999994;
        }
        if (fVar26 <= 0.0) {
          fVar26 = 0.0;
        }
        FUN_1432db21e(plVar3,&local_148,
                      CONCAT44(fVar26,local_118 + iVar20 + ((int)ROUND(fVar35 + fVar35 + -0.5) >> 1)
                              ));
        local_d8 = local_128;
        local_e8 = local_138;
        lStack_e0 = lStack_130;
        local_f8 = local_148;
        local_108 = CONCAT62(local_108._2_6_,1);
        (**(code **)(*param_1 + 0x2c0))(param_1,&local_f8,uVar21);
        fVar25 = fVar25 + fStack_114;
        lStack_f0 = param_1[0x61];
        auVar33 = roundss(ZEXT816(0),ZEXT416((uint)fVar25),9);
        fVar35 = (fVar25 - auVar33._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar35) {
          fVar35 = 0.99999994;
        }
        if (fVar35 <= 0.0) {
          fVar35 = 0.0;
        }
        local_f8 = (undefined8 *)
                   CONCAT44(fVar35,iVar20 + local_118 + ((int)ROUND(fVar25 + fVar25 + -0.5) >> 1));
        FUN_1405246a4(param_1[0x7a],&local_f8);
        cVar6 = FUN_1402d76c0(param_1);
        if (cVar6 != '\0') {
          *(undefined8 *)((longlong)param_1 + 0x38c) = *(undefined8 *)((longlong)param_1 + 0x31c);
          *(char *)((longlong)param_1 + 0x394) = (char)param_1[0x52];
          param_1[0x73] = *(longlong *)((longlong)param_1 + 0x2ac);
        }
        (**(code **)(*param_1 + 0x2e0))(param_1);
      }
    }
    else {
      (**(code **)(*param_1 + 0x2c8))(param_1,&local_170);
      uVar7 = *(uint *)(param_1 + 0x54);
      uVar13 = param_2;
      if ((int)local_170 <= iVar19) {
        if ((float)(local_170 >> 0x20) <= fVar35) {
          param_2 = local_170;
        }
        uVar13 = param_2;
        if (iVar19 != (int)local_170) {
          uVar13 = local_170;
        }
        param_2 = uVar13 & 0xffffffff;
      }
      if ((int)(uint)param_2 <= (int)uVar7) {
        if ((float)(uVar13 >> 0x20) <= 0.0) {
          uVar13 = (ulonglong)uVar7;
        }
        if (uVar7 != (uint)param_2) {
          uVar13 = (ulonglong)uVar7;
        }
      }
      local_110 = uVar13;
      FUN_1432db21e(plVar3,&local_148,uVar13);
      local_d8 = local_128;
      lStack_f0 = CONCAT44(uStack_13c,uStack_140);
      local_e8 = local_138;
      lStack_e0 = lStack_130;
      local_f8 = local_148;
      local_108 = local_108 & 0xffffffffffff0000;
      (**(code **)(*param_1 + 0x2c0))(param_1,&local_f8,uVar21);
      if ((((param_1[0x74] == 0) || ((longlong *)param_1[0x75] == (longlong *)0x0)) ||
          (cVar6 = (**(code **)(*(longlong *)param_1[0x75] + 0x28))(), cVar6 == '\0')) ||
         (cVar6 = FUN_1402d76c0(param_1), cVar6 != '\0')) {
        FUN_14179f158(param_1,&local_f8,1);
LAB_14052404d:
        FUN_140b8acc6(param_1,uVar13);
        local_100 = (int)param_1[0x56] + 1;
        local_108 = uVar13;
        uVar11 = FUN_14477b072(param_1,DAT_14cab39a8);
        (**(code **)(*param_1 + 0x248))(param_1,uVar11,&local_108);
      }
      else {
        cVar6 = *(char *)((longlong)param_1 + 0x394);
        FUN_14179f158(param_1,&local_f8,1);
        if (cVar6 == '\0') goto LAB_14052404d;
      }
      cVar6 = FUN_1402d76c0(param_1);
      if (cVar6 != '\0') {
        *(undefined8 *)((longlong)param_1 + 0x38c) = *(undefined8 *)((longlong)param_1 + 0x31c);
        *(char *)((longlong)param_1 + 0x394) = (char)param_1[0x52];
        param_1[0x73] = *(longlong *)((longlong)param_1 + 0x2ac);
      }
      if (local_f8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    FUN_14133d04a(param_1,local_cc,&local_110);
    if (local_b4 == '\0') {
      ppuVar17 = (undefined8 **)&local_f8;
LAB_140523872:
      FUN_1432db04a(param_1 + 0x61,ppuVar17,param_2);
    }
    else {
LAB_1405236b9:
      lStack_e0 = param_1[0x62];
      local_e8 = local_bc;
      local_f8 = (undefined8 *)local_cc;
      lStack_f0 = lStack_c4;
      uVar7 = *(uint *)((longlong)param_1 + 0x294) & 1;
      local_d8 = CONCAT44(0x80000000,uVar7);
      lVar10 = param_1[0x61];
      puVar9 = (ulonglong *)(local_cc + 4);
      if (uVar7 == 0) {
        puVar9 = &local_bc;
      }
      uVar13 = *puVar9;
      uVar23 = uVar13 >> 0x20;
      if (lStack_e0 != lVar10) {
        local_148 = (undefined8 *)((lStack_e0 >> 0x20) * (longlong)(int)lVar10);
        local_108 = (longlong)(int)lStack_e0 * (lVar10 >> 0x20);
        lVar10 = ((longlong)local_148 * (longlong)(int)uVar13) / (longlong)local_108;
        dVar27 = ((double)(float)(uVar13 >> 0x20) * (double)(longlong)local_148) /
                 (double)(longlong)local_108 +
                 (((double)(longlong)local_148 * (double)(int)uVar13) / (double)(longlong)local_108
                 - (double)lVar10);
        auVar32._8_8_ = 0;
        auVar32._0_8_ = dVar27;
        auVar33 = roundpd(auVar32,auVar32,1);
        uVar23 = (longlong)auVar33._0_8_ + lVar10;
        fVar25 = (float)(dVar27 - auVar33._0_8_);
        fVar35 = fVar25;
        if (0.99999994 <= fVar25) {
          fVar35 = 0.99999994;
        }
        if (0x7ffffffe < (longlong)uVar23) {
          uVar23 = 0x7fffffff;
        }
        uVar13 = 0xffffffff80000000;
        if (-0x80000000 < (longlong)uVar23) {
          uVar13 = uVar23;
        }
        fVar35 = (float)(~-(uint)(0.0 < fVar25) & (uint)fVar25 |
                        (uint)fVar35 & -(uint)(0.0 < fVar25)) + 0.5 + -0.5;
        if (0.99999994 <= fVar35) {
          fVar35 = 0.99999994;
        }
        if (fVar35 <= 0.0) {
          fVar35 = 0.0;
        }
        uVar23 = (ulonglong)(uint)fVar35;
      }
      param_2 = uVar13 & 0xffffffff | uVar23 << 0x20;
      ppuVar17 = &local_148;
      if (param_3 != 0) goto LAB_140523872;
LAB_1405238cd:
      FUN_1432db21e(param_1 + 0x61,ppuVar17,param_2);
    }
    bVar24 = true;
    if ((param_1[0x5d] != 0) && (lVar10 = FUN_1400d1226(param_1[0x5d],&DAT_14cab329c), lVar10 != 0))
    {
      bVar24 = (*(byte *)(lVar10 + 99) & 2) == 0;
    }
    local_108 = CONCAT71(CONCAT61(local_108._2_6_,
                                  (byte)((*(uint *)((longlong)param_1 + 0x294) & 4) >> 2) & bVar24),
                         param_4);
    local_148 = (undefined8 *)0x0;
    uStack_140 = 0;
    FUN_1446efa72(&local_148,0,3,0x10);
    puVar14 = local_148;
    uStack_140 = 3;
    *local_148 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar15 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar15 == 0) {
      LOCK();
      UNLOCK();
      lVar15 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_148[2] = lVar15;
    *local_148 = &PTR_FUN_14a491a60;
    local_148[3] = 0;
    iVar18 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar7 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_148 + 3) = uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar18 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar18 = DAT_14c964868 + 1;
        UNLOCK();
        iVar19 = DAT_14c964868 + 1;
        bVar24 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar18;
        if (bVar24) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar19);
        }
        LOCK();
        iVar18 = *(int *)(lVar10 + 0x10);
        bVar24 = iVar18 == 0;
        if (bVar24) {
          *(int *)(lVar10 + 0x10) = iVar19;
          iVar18 = 0;
        }
        UNLOCK();
        if (bVar24) {
          iVar18 = iVar19;
        }
      }
    }
    *(int *)((longlong)puVar14 + 0x1c) = iVar18;
    puVar14[4] = FUN_1402d767e;
    *(undefined4 *)(puVar14 + 5) = 0;
    iVar18 = (int)param_1[0x8d];
    *(uint *)(param_1 + 0x8d) = iVar18 + 1U;
    if (*(uint *)((longlong)param_1 + 0x46c) < iVar18 + 1U) {
      FUN_14009e818(param_1 + 0x8c,iVar18);
    }
    lVar10 = param_1[0x8c];
    lVar15 = (longlong)iVar18 * 0x10;
    *(undefined8 *)(lVar10 + lVar15) = 0;
    *(undefined4 *)(lVar10 + 8 + lVar15) = 0;
    *(undefined8 **)(lVar10 + lVar15) = local_148;
    *(undefined4 *)(lVar10 + 8 + lVar15) = uStack_140;
    uStack_140 = 0;
    local_148 = (undefined8 *)0x0;
    local_198 = local_f8;
    lStack_190 = lStack_f0;
    local_188 = local_e8;
    lStack_180 = lStack_e0;
    local_178 = local_d8;
    (**(code **)(*param_1 + 0x2c0))(param_1,&local_198,uVar21,&local_108);
    if (local_b4 == '\x01') {
      if (local_108._1_1_ == '\x01') {
        local_1a8 = (undefined8 *)0x0;
        local_1a0 = 0;
        FUN_1446efa72(&local_1a8,0,3,0x10);
        puVar14 = local_1a8;
        local_1a0 = 3;
        *local_1a8 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar15 = DAT_14c758608 + 1;
        lVar10 = DAT_14c758608 + 1;
        if (lVar15 == 0) {
          LOCK();
          UNLOCK();
          lVar15 = DAT_14c758608 + 2;
          lVar10 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar10;
        local_1a8[2] = lVar15;
        *local_1a8 = &PTR_FUN_14a491670;
        local_1a8[3] = 0;
        iVar18 = 0;
        if (param_1 != (longlong *)0x0) {
          uVar7 = *(uint *)((longlong)param_1 + 0xc);
          *(uint *)(local_1a8 + 3) = uVar7;
          if ((int)uVar7 < DAT_14c9647dc) {
            lVar10 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
          }
          else {
            lVar10 = 0;
          }
          iVar18 = *(int *)(lVar10 + 0x10);
          if (*(int *)(lVar10 + 0x10) == 0) {
            LOCK();
            iVar18 = DAT_14c964868 + 1;
            UNLOCK();
            iVar19 = DAT_14c964868 + 1;
            bVar24 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar18;
            if (bVar24) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar19);
            }
            LOCK();
            iVar18 = *(int *)(lVar10 + 0x10);
            bVar24 = iVar18 == 0;
            if (bVar24) {
              *(int *)(lVar10 + 0x10) = iVar19;
              iVar18 = 0;
            }
            UNLOCK();
            if (bVar24) {
              iVar18 = iVar19;
            }
          }
        }
        *(int *)((longlong)puVar14 + 0x1c) = iVar18;
        puVar14[4] = FUN_140b8aeaa;
        *(undefined4 *)(puVar14 + 5) = 0;
        FUN_14621550a(param_1,&local_1a8);
      }
      else {
        FUN_140b8aeaa(param_1);
      }
    }
  }
  if (local_b4 == '\x01') {
    local_b4 = '\0';
  }
LAB_140523ac3:
  if ((local_b0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405244c0 FUN_1405244c0 body=483 status=ok
// SIG undefined FUN_1405244c0(void)

void FUN_1405244c0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  int iStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((param_1[0x44] == 0) || ((longlong *)param_1[0x45] == (longlong *)0x0)) ||
      (cVar2 = (**(code **)(*(longlong *)param_1[0x45] + 0x10))(), cVar2 != '\0')) &&
     (param_1[0x53] != 0)) {
    cVar2 = FUN_1405246fa(param_1);
    if (cVar2 == '\0') {
      FUN_1405247c2(param_2,&local_58,param_1);
      puVar4 = &DAT_14cab3698;
      if (DAT_14cab36a8 != (undefined *)0x0) {
        puVar4 = DAT_14cab36a8;
      }
      if ((*(uint *)(puVar4 + (ulonglong)(*(ushort *)(param_1 + 0x41) >> 5) * 4) >>
           (*(ushort *)(param_1 + 0x41) & 0x1f) & 1) == 0) {
        FUN_14052322c(param_1,local_58,*(undefined1 *)(param_2 + 0x39),
                      *(undefined1 *)(param_2 + 0x3a));
      }
      local_40 = (undefined4)*(undefined8 *)((longlong)param_1 + 0x31c);
      uStack_3c = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x31c) >> 0x20);
      local_38 = (undefined4)param_1[0x61];
      iStack_34 = (int)((ulonglong)param_1[0x61] >> 0x20);
      FUN_1405246a4(param_1[0x7a]);
      cVar2 = FUN_1402d76c0(param_1);
      if ((cVar2 != '\0') && (*(char *)(param_2 + 0x3b) == '\x01')) {
        iStack_34 = (int)param_1[0x56] + 1;
        local_40 = CONCAT31(local_40._1_3_,*(undefined1 *)(param_2 + 0x39));
        uStack_3c = (undefined4)local_58;
        local_38 = (undefined4)((ulonglong)local_58 >> 0x20);
        uVar3 = FUN_14477b072(param_1,DAT_14cab3998);
        (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_40);
      }
    }
    else {
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,7,0x10);
      puVar1 = local_50;
      local_48 = 7;
      FUN_147581254(local_50,param_2);
      *puVar1 = &PTR_FUN_14a491980;
      puVar1[10] = 0;
      FUN_14485c47a(puVar1 + 10,param_1);
      *(undefined4 *)(puVar1 + 0xc) = 0;
      puVar1[0xb] = FUN_1405244c0;
      FUN_14621550a(param_1,&local_50);
    }
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405246a4 FUN_1405246a4 body=86 status=ok
// SIG undefined FUN_1405246a4(void)

void FUN_1405246a4(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if ((char)param_1[3] == '\x01') {
    (**(code **)(*param_1 + 0x18))();
    if ((char)param_1[3] == '\x01') {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_1 + 1 != param_2) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      lVar3 = param_2[1];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(int *)(param_1 + 1) = (int)*param_2;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
      *(int *)(param_1 + 2) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(undefined1 *)(param_1 + 3) = 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001405246ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1405246fa FUN_1405246fa body=199 status=ok
// SIG undefined FUN_1405246fa(void)

ulonglong FUN_1405246fa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined *puVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x2e8) == 0) {
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    FUN_140232b8e(*(longlong *)(param_1 + 0x2e8),&local_28);
  }
  plVar3 = plStack_20;
  puVar4 = &DAT_14cab3698;
  if (DAT_14cab36a8 != (undefined *)0x0) {
    puVar4 = DAT_14cab36a8;
  }
  uVar6 = (undefined7)((ulonglong)param_1 >> 8);
  if ((*(uint *)(puVar4 + (ulonglong)(*(ushort *)(param_1 + 0x208) >> 5) * 4) >>
       (*(ushort *)(param_1 + 0x208) & 0x1f) & 1) == 0) {
    if (local_28 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = CONCAT71(uVar6,*(int *)(local_28 + 0x80) != 0);
    }
  }
  else {
    uVar5 = CONCAT71(uVar6,1);
  }
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405247c2 FUN_1405247c2 body=432 status=ok
// SIG undefined FUN_1405247c2(void)

int * FUN_1405247c2(undefined8 *param_1,int *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)param_2 = *(undefined8 *)(param_3 + 0x31c);
  cVar1 = *(char *)(param_1 + 7);
  if (cVar1 == '\0') {
    *(undefined8 *)param_2 = *param_1;
  }
  else if (cVar1 == '\x01') {
    dVar5 = ((double)(int)*(undefined8 *)(param_3 + 0x308) * (double)*(float *)(param_1 + 1)) /
            (double)(int)((ulonglong)*(undefined8 *)(param_3 + 0x308) >> 0x20);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar5;
    auVar7 = roundpd(auVar7,auVar7,1);
    dVar6 = auVar7._0_8_;
    dVar5 = dVar5 - dVar6;
    if (2147483647.0 <= dVar6) {
      dVar6 = 2147483647.0;
    }
    if (dVar6 <= -2147483648.0) {
      dVar6 = -2147483648.0;
    }
    iVar3 = (int)dVar5;
    fVar4 = (float)dVar5 - (float)iVar3;
    fVar8 = fVar4;
    if (0.99999994 <= fVar4) {
      fVar8 = 0.99999994;
    }
    fVar8 = (float)(~-(uint)(0.0 < fVar4) & (uint)fVar4 | (uint)fVar8 & -(uint)(0.0 < fVar4)) + 0.5
            + -0.5;
    if (0.99999994 <= fVar8) {
      fVar8 = 0.99999994;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    *param_2 = (int)dVar6 + iVar3;
    param_2[1] = (int)fVar8;
  }
  else if (cVar1 == '\x02') {
    if (*(longlong **)(param_3 + 0x298) != (longlong *)0x0) {
      lVar2 = (**(code **)(**(longlong **)(param_3 + 0x298) + 0x2e8))();
      if (lVar2 != 0) {
        iVar3 = FUN_14756ecdc(lVar2,param_1 + 2);
        if (iVar3 != -1) {
          FUN_144a808d5(param_2,*(undefined4 *)
                                 (*(longlong *)(lVar2 + 0x150) + (longlong)iVar3 * 0x20),
                        *(undefined8 *)(lVar2 + 0x118),*(undefined8 *)(lVar2 + 0x120));
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  else if (cVar1 == '\x03') {
    local_30 = *(undefined8 *)(param_3 + 0x308);
    FUN_147516d62(param_1 + 4,&local_24);
    *param_2 = local_24;
    param_2[1] = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140524978 FUN_140524978 body=6206 status=ok
// SIG undefined FUN_140524978(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140524978(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  char cVar14;
  int iVar15;
  undefined8 uVar16;
  char *pcVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  double *pdVar21;
  undefined4 *puVar22;
  double *pdVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  uint *puVar33;
  bool bVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  double dVar42;
  undefined1 auVar39 [16];
  double dVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  double dVar53;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar54;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar58;
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined1 auVar68 [16];
  double dVar69;
  double dVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined1 auStack_438 [32];
  uint *local_418;
  double *local_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined1 local_3e8 [16];
  double local_3d8;
  double dStack_3d0;
  longlong local_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  double local_398 [4];
  double local_378;
  double dStack_370;
  double local_368;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined8 local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  double local_328;
  double dStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  uint local_300;
  undefined1 local_2fc;
  code *local_2f8;
  double dStack_2f0;
  longlong *local_2e8;
  undefined8 uStack_2e0;
  undefined1 local_2d8 [16];
  code **local_2c8;
  undefined8 uStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [16];
  double local_288;
  undefined8 uStack_280;
  double local_278;
  double dStack_270;
  undefined1 local_268 [16];
  undefined1 local_258 [8];
  undefined2 uStack_250;
  undefined6 uStack_24e;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  double dStack_188;
  undefined8 local_180;
  undefined4 local_154;
  undefined4 local_128;
  undefined8 local_120;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_438;
  lVar19 = *(longlong *)(param_1 + 0x3f0);
  local_1f8 = (double)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
  if ((((lVar19 != 0) &&
       (local_1f8 = (double)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8),
       *(char *)(param_1 + 0x98) == '\x01')) &&
      (local_1f8 = (double)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8),
      *(char *)(param_3 + 0xec) == '\x01')) &&
     ((local_1f8 = (double)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8),
      0 < *(int *)(lVar19 + 0x10) &&
      (lVar19 = **(longlong **)(lVar19 + 8),
      local_1f8 = (double)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8), lVar19 != 0)))) {
    local_3d8 = *(double *)(lVar19 + 0x130);
    dStack_3d0 = *(double *)(lVar19 + 0x138);
    local_3f8 = (undefined4)*(undefined8 *)(lVar19 + 0x140);
    uStack_3f4 = (undefined4)((ulonglong)*(undefined8 *)(lVar19 + 0x140) >> 0x20);
    uStack_3f0 = (undefined4)*(undefined8 *)(lVar19 + 0x148);
    uStack_3ec = (undefined4)((ulonglong)*(undefined8 *)(lVar19 + 0x148) >> 0x20);
    local_408 = (undefined4)*(undefined8 *)(lVar19 + 0x150);
    uStack_404 = (undefined4)((ulonglong)*(undefined8 *)(lVar19 + 0x150) >> 0x20);
    uStack_400 = (undefined4)*(undefined8 *)(lVar19 + 0x158);
    uStack_3fc = (undefined4)((ulonglong)*(undefined8 *)(lVar19 + 0x158) >> 0x20);
    uVar16 = *(undefined8 *)(lVar19 + 0x160);
    uVar7 = *(undefined8 *)(lVar19 + 0x168);
    auVar60 = *(undefined1 (*) [16])(lVar19 + 0x170);
    dVar58 = auVar60._0_8_;
    dVar37 = auVar60._8_8_;
    uVar67 = *(undefined4 *)(lVar19 + 0x180);
    uVar72 = *(undefined4 *)(lVar19 + 0x184);
    uVar71 = *(undefined4 *)(lVar19 + 0x188);
    uVar73 = *(undefined4 *)(lVar19 + 0x18c);
    pcVar17 = *(char **)(param_2 + 0x38);
    local_3c0 = lVar19;
    if (*pcVar17 == '\0') {
      pcVar17 = (char *)FUN_1447d5d8e((undefined8 *)(param_2 + 0x20),0);
    }
    auVar38 = _DAT_149934d80;
    pdVar23 = *(double **)(param_2 + 0x20);
    pdVar21 = local_398;
    for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
      *pdVar21 = *pdVar23;
      pdVar23 = pdVar23 + 1;
      pdVar21 = pdVar21 + 1;
    }
    local_1f8._0_4_ = 0;
    local_1f8._4_4_ = 0;
    local_1f8 = 0.0;
    dStack_1f0 = 0.0;
    local_1e8 = 0.0;
    dStack_1e0 = 1.0;
    local_1d8 = ZEXT816(0);
    local_1c8 = ZEXT816(0);
    local_1b8 = _DAT_149934d80;
    local_1a8 = ZEXT816(0x3ff0000000000000);
    dVar48 = *(double *)(param_1 + 0x120) * *(double *)(param_1 + 0x120) +
             *(double *)(param_1 + 0x110) * *(double *)(param_1 + 0x110);
    dVar53 = *(double *)(param_1 + 0x128) * *(double *)(param_1 + 0x128) +
             *(double *)(param_1 + 0x118) * *(double *)(param_1 + 0x118);
    auVar46._8_8_ =
         -(ulonglong)(0.009999999776482582 < ABS(DAT_149934d80._8_8_ - (dVar48 + dVar53)));
    auVar46._0_8_ =
         -(ulonglong)(0.009999999776482582 < ABS((double)DAT_149934d80 - (dVar48 + dVar53)));
    iVar15 = movmskpd((int)pcVar17,auVar46);
    local_3b8 = (undefined4)uVar16;
    uStack_3b4 = (undefined4)((ulonglong)uVar16 >> 0x20);
    uStack_3b0 = (undefined4)uVar7;
    uStack_3ac = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (iVar15 == 0) {
      auVar46 = minpd(local_358,*(undefined1 (*) [16])(param_1 + 0x150));
      auVar49 = minpd(local_348,*(undefined1 (*) [16])(param_1 + 0x160));
      auVar56._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
      auVar56._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
      iVar15 = movmskpd(0,auVar56);
      auVar50._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
      auVar50._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
      uVar18 = movmskpd(0,auVar50);
      if ((uVar18 & 0x3fffffff) == 0 && iVar15 == 0) {
        local_3e8 = local_348;
        puVar22 = *(undefined4 **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar15 = DAT_14c8460b0;
        local_3a8 = uVar67;
        uStack_3a4 = uVar72;
        uStack_3a0 = uVar71;
        uStack_39c = uVar73;
        if ((int)puVar22[0x44] < DAT_14c8460b0) {
          puVar22 = &DAT_14c8460b0;
          iVar15 = FUN_144b3d300();
          if (DAT_14c8460b0 == -1) {
            DAT_14c8460a0 = 0x322bcc77322bcc77;
            DAT_14c8460a8 = 0x322bcc77322bcc77;
            puVar22 = &DAT_14c8460b0;
            iVar15 = _Init_thread_footer();
          }
        }
        uVar74 = SUB84(puVar22,0);
        auVar46 = *(undefined1 (*) [16])(param_1 + 0x150);
        auVar38 = divpd(auVar38,auVar46);
        auVar56 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_1 + 0x160));
        dVar53 = (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(auVar46._0_8_)) &
                         auVar38._0_8_);
        dVar54 = (double)(-(ulonglong)
                           ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) < ABS(auVar46._8_8_))
                         & auVar38._8_8_);
        dVar44 = (double)(-(ulonglong)
                           ((double)(float)DAT_14c8460a8 <
                           ABS(SUB168(*(undefined1 (*) [16])(param_1 + 0x160),0))) & auVar56._0_8_);
        dVar35 = local_378 - *(double *)(param_1 + 0x130);
        dVar42 = dStack_370 - *(double *)(param_1 + 0x138);
        dVar62 = local_368 - *(double *)(param_1 + 0x140);
        dVar48 = -*(double *)(param_1 + 0x110);
        dVar36 = -*(double *)(param_1 + 0x118);
        dVar43 = *(double *)(param_1 + 0x120) * -1.0;
        dVar59 = *(double *)(param_1 + 0x128) * 1.0;
        dVar55 = dVar42 * dVar48 - dVar35 * dVar36;
        dVar6 = dVar62 * dVar36 - dVar42 * dVar43;
        dVar69 = dVar35 * dVar43 - dVar62 * dVar48;
        dVar70 = dVar59 * 0.0 - dVar59 * 0.0;
        dVar6 = dVar6 + dVar6;
        dVar69 = dVar69 + dVar69;
        dVar55 = dVar55 + dVar55;
        dVar70 = dVar70 + dVar70;
        dVar45 = local_358._0_8_ * dVar53;
        dVar47 = local_358._8_8_ * dVar54;
        dVar53 = ((dVar55 * dVar36 - dVar43 * dVar69) + dVar59 * dVar6 + dVar35) * dVar53;
        dVar54 = ((dVar6 * dVar43 - dVar55 * dVar48) + dVar59 * dVar69 + dVar42) * dVar54;
        dVar48 = ((dVar69 * dVar48 - dVar36 * dVar6) + dVar59 * dVar55 + dVar62) * dVar44;
        dVar42 = ((dVar70 * dVar59 - dVar70 * dVar59) + dVar59 * dVar70 + 0.0) * 0.0;
        dVar36 = *(double *)(param_1 + 0x110);
        dVar55 = *(double *)(param_1 + 0x110);
        dVar70 = *(double *)(param_1 + 0x118);
        dVar6 = *(double *)(param_1 + 0x118);
        local_1a8._8_8_ = (double)local_3e8._8_8_ * 0.0;
        local_1a8._0_8_ = (double)local_3e8._0_8_ * dVar44;
        dVar69 = local_398[1] * dVar43 * -1.0 +
                 ((local_398[0] * dVar59 - dVar36 * local_398[3] * 1.0) - local_398[2] * dVar70);
        dVar35 = local_398[0] * dVar43 * 1.0 +
                 ((local_398[1] * dVar59 - dVar55 * local_398[2] * -1.0) - local_398[3] * dVar6);
        pdVar23 = (double *)&local_1f8;
        local_1b8._8_4_ = SUB84(dVar47,0);
        local_1b8._0_8_ = dVar45;
        local_1b8._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
        local_1d8._8_4_ = SUB84(dVar54,0);
        local_1d8._0_8_ = dVar53;
        local_1d8._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
        local_1c8._8_4_ = SUB84(dVar42,0);
        local_1c8._0_8_ = dVar48;
        local_1c8._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
        auVar38._8_4_ = SUB84(dVar35,0);
        auVar38._0_8_ = dVar69;
        auVar38._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
        local_1f8._0_4_ = SUB84(dVar69,0);
        local_1f8._4_4_ = (undefined4)((ulonglong)dVar69 >> 0x20);
        dStack_1f0 = auVar38._8_8_;
        auVar38 = local_1a8;
        uVar67 = local_3a8;
        uVar72 = uStack_3a4;
        uVar71 = uStack_3a0;
        uVar73 = uStack_39c;
        dVar36 = local_398[3] * dVar43 * 1.0 +
                 dVar70 * local_398[0] + (dVar59 * local_398[2] - dVar36 * local_398[1] * 1.0);
        dVar55 = local_398[2] * dVar43 * -1.0 +
                 dVar6 * local_398[1] + (dVar59 * local_398[3] - dVar55 * local_398[0] * -1.0);
        local_1f8 = dVar69;
      }
      else {
        pdVar23 = (double *)&local_1f8;
        pdVar21 = pdVar23;
        iVar15 = FUN_1402db8fa(pdVar23,local_398);
        uVar74 = SUB84(pdVar21,0);
        auVar38 = local_1a8;
        dVar48 = (double)local_1c8._0_8_;
        dVar53 = (double)local_1d8._0_8_;
        dVar54 = (double)local_1d8._8_8_;
        dVar36 = local_1e8;
        dVar55 = dStack_1e0;
        dVar45 = (double)local_1b8._0_8_;
        dVar47 = (double)local_1b8._8_8_;
      }
    }
    else {
      pdVar23 = (double *)&DAT_14c846480;
      uVar74 = 0;
      auVar38 = _DAT_14c8464d0;
      dVar48 = DAT_14c8464b0;
      dVar53 = DAT_14c8464a0;
      dVar54 = DAT_14c8464a8;
      dVar36 = DAT_14c846490;
      dVar55 = DAT_14c846498;
      dVar45 = DAT_14c8464c0;
      dVar47 = DAT_14c8464c8;
    }
    uVar79 = uStack_3ac;
    uVar78 = uStack_3b0;
    uVar77 = uStack_3b4;
    uVar76 = local_3b8;
    dVar70 = *pdVar23;
    dVar6 = pdVar23[1];
    auVar49._8_8_ = dVar47;
    auVar49._0_8_ = dVar45;
    auVar46 = minpd(auVar49,auVar60);
    auVar60._4_4_ = uVar72;
    auVar60._0_4_ = uVar67;
    auVar60._8_4_ = uVar71;
    auVar60._12_4_ = uVar73;
    auVar60 = minpd(auVar38,auVar60);
    auVar39._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
    auVar39._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
    iVar15 = movmskpd(iVar15,auVar39);
    auVar61._8_8_ = -(ulonglong)(auVar60._8_8_ < 0.0);
    auVar61._0_8_ = -(ulonglong)(auVar60._0_8_ < 0.0);
    uVar18 = movmskpd(uVar74,auVar61);
    if ((uVar18 & 0x3fffffff) == 0 && iVar15 == 0) {
      dVar35 = (double)CONCAT44(uStack_3f4,local_3f8);
      auVar10._8_4_ = uStack_3f0;
      auVar10._0_8_ = dVar35;
      auVar10._12_4_ = uStack_3ec;
      dVar69 = auVar10._8_8_;
      dVar45 = dVar6 * dVar35 * -1.0 +
               dVar36 * dStack_3d0 + local_3d8 * dVar55 * 1.0 + dVar69 * dVar70;
      dVar47 = dVar70 * dVar35 * 1.0 +
               dVar55 * dStack_3d0 + local_3d8 * dVar36 * -1.0 + dVar69 * dVar6;
      auVar68._0_8_ =
           dVar55 * dVar35 * 1.0 +
           ((local_3d8 * dVar6 * 1.0 + dVar69 * dVar36) - dStack_3d0 * dVar70);
      auVar68._8_8_ =
           dVar36 * dVar35 * -1.0 +
           ((local_3d8 * dVar70 * -1.0 + dVar69 * dVar55) - dStack_3d0 * dVar6);
      dVar58 = dVar58 * dVar53;
      dVar37 = dVar37 * dVar54;
      dVar48 = (double)CONCAT44(uVar72,uVar67) * dVar48;
      dVar53 = dVar37 * local_3d8 - dStack_3d0 * dVar58;
      dVar36 = dVar48 * dStack_3d0 - dVar35 * dVar37;
      dVar55 = dVar58 * dVar35 - local_3d8 * dVar48;
      dVar36 = dVar36 + dVar36;
      dVar55 = dVar55 + dVar55;
      dVar53 = dVar53 + dVar53;
      auVar9._8_4_ = uStack_400;
      auVar9._0_8_ = CONCAT44(uStack_404,local_408);
      auVar9._12_4_ = uStack_3fc;
      uVar63 = local_3f8;
      uVar64 = uStack_3f4;
      uVar65 = uStack_3f0;
      uVar66 = uStack_3ec;
      uVar71 = local_408;
      uVar73 = uStack_404;
      uVar74 = uStack_400;
      uVar75 = uStack_3fc;
      dVar54 = (dVar55 * local_3d8 - dStack_3d0 * dVar36) + dVar69 * dVar53 + dVar48 +
               (double)CONCAT44(uStack_3b4,local_3b8);
      dVar58 = (dVar53 * dStack_3d0 - dVar35 * dVar55) + dVar69 * dVar36 + dVar58 +
               (double)CONCAT44(uStack_404,local_408);
      dVar37 = (dVar36 * dVar35 - dVar53 * local_3d8) + dVar69 * dVar55 + dVar37 + auVar9._8_8_;
      dVar48 = local_3d8;
      dVar53 = dStack_3d0;
    }
    else {
      dVar44 = dStack_3d0 + dStack_3d0;
      dVar69 = (double)CONCAT44(uStack_3f4,local_3f8);
      dVar42 = dVar69 + dVar69;
      dVar59 = local_3d8 * (local_3d8 + local_3d8);
      local_278 = (1.0 - (dVar69 * dVar42 + dStack_3d0 * dVar44)) * dVar58;
      dVar69 = (1.0 - (dVar69 * dVar42 + dVar59)) * dVar37;
      dVar35 = (double)CONCAT44(uStack_3ec,uStack_3f0);
      dVar43 = (local_3d8 + local_3d8) * dVar35;
      dStack_230 = (dVar42 * dStack_3d0 - dVar43) * (double)CONCAT44(uVar72,uVar67);
      local_238 = (dVar44 * dVar35 + local_3d8 * dVar42) * (double)CONCAT44(uVar72,uVar67);
      dStack_270 = (dVar44 * local_3d8 + dVar42 * dVar35) * dVar58;
      local_248 = (dVar42 * dStack_3d0 + dVar43) * dVar37;
      local_228 = (1.0 - (dVar59 + dStack_3d0 * dVar44)) * (double)CONCAT44(uVar72,uVar67);
      local_268._8_8_ = 0;
      local_268._0_8_ = (local_3d8 * dVar42 - dVar44 * dVar35) * dVar58;
      unique0x10000f13 = SUB84(dVar69,0);
      local_258 = (undefined1  [8])((dVar44 * local_3d8 - dVar42 * dVar35) * dVar37);
      unique0x10000f17 = (int)((ulonglong)dVar69 >> 0x20);
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = CONCAT44(uStack_404,local_408);
      uStack_210 = CONCAT44(uStack_3fc,uStack_400);
      local_208 = CONCAT44(uStack_3b4,local_3b8);
      uStack_200 = 0x3ff0000000000000;
      dVar43 = dVar6 + dVar6;
      dVar69 = dVar36 + dVar36;
      dVar42 = dVar70 * (dVar70 + dVar70);
      dVar35 = (dVar70 + dVar70) * dVar55;
      local_3e8._0_8_ = auVar38._0_8_;
      uVar16 = local_3e8._0_8_;
      dStack_2b0 = (dVar69 * dVar6 - dVar35) * (double)local_3e8._0_8_;
      local_2f8 = (code *)((1.0 - (dVar36 * dVar69 + dVar6 * dVar43)) * dVar45);
      dVar36 = (1.0 - (dVar36 * dVar69 + dVar42)) * dVar47;
      dStack_2f0 = (dVar43 * dVar70 + dVar69 * dVar55) * dVar45;
      local_2c8 = (code **)((dVar69 * dVar6 + dVar35) * dVar47);
      local_2b8 = (dVar43 * dVar55 + dVar70 * dVar69) * (double)local_3e8._0_8_;
      local_2e8 = (longlong *)((dVar70 * dVar69 - dVar43 * dVar55) * dVar45);
      uStack_2e0 = 0;
      local_2d8._8_4_ = SUB84(dVar36,0);
      local_2d8._0_8_ = (dVar43 * dVar70 - dVar69 * dVar55) * dVar47;
      local_2d8._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      uStack_2c0 = 0;
      local_2a8 = (1.0 - (dVar42 + dVar6 * dVar43)) * (double)local_3e8._0_8_;
      uStack_2a0 = 0;
      local_298._8_4_ = SUB84(dVar54,0);
      local_298._0_8_ = dVar53;
      local_298._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
      uStack_280 = 0x3ff0000000000000;
      local_3e8 = auVar38;
      local_288 = dVar48;
      FUN_1447fea8d(&local_1f8);
      FUN_144a1c686(&local_1f8,0x3e45798ee0000000);
      dVar53 = dStack_3d0;
      dVar48 = local_3d8;
      uVar66 = uStack_3ec;
      uVar65 = uStack_3f0;
      uVar64 = uStack_3f4;
      uVar63 = local_3f8;
      uVar75 = uStack_3fc;
      uVar74 = uStack_400;
      uVar73 = uStack_404;
      uVar71 = local_408;
      auVar60 = _DAT_149934d80;
      auVar40._8_8_ = -(ulonglong)(0.0 <= dVar37 * dVar47);
      auVar40._0_8_ = -(ulonglong)(0.0 <= dVar58 * dVar45);
      auVar38 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar40);
      uVar30 = -(ulonglong)(0.0 <= (double)CONCAT44(uVar72,uVar67) * (double)uVar16);
      dVar58 = (double)(~uVar30 & 0xbff0000000000000 | uVar30 & 0x3ff0000000000000);
      dVar37 = auVar38._0_8_;
      local_1e8 = local_1e8 * dVar37;
      dStack_1f0 = dStack_1f0 * dVar37;
      local_1f8 = local_1f8 * dVar37;
      dVar37 = auVar38._8_8_;
      local_1d8._8_8_ = (double)local_1d8._8_8_ * dVar37;
      local_1d8._0_8_ = dVar37 * (double)local_1d8._0_8_;
      local_1c8._0_8_ = (double)local_1c8._0_8_ * dVar37;
      local_1b8._8_8_ = (double)local_1b8._8_8_ * dVar58;
      local_1b8._0_8_ = dVar58 * (double)local_1b8._0_8_;
      local_1a8._0_8_ = (double)local_1a8._0_8_ * dVar58;
      FUN_14481fd10(&local_338,&local_1f8);
      dVar58 = (double)CONCAT44(uStack_32c,uStack_330);
      dVar37 = local_328 * local_328 + local_338 * local_338;
      dVar54 = dStack_320 * dStack_320 + dVar58 * dVar58;
      auVar52._0_8_ = dVar37 + dVar54;
      auVar52._8_8_ = dVar37 + dVar54;
      auVar41._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_);
      auVar41._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_);
      auVar38 = sqrtpd(auVar52,auVar52);
      auVar60 = divpd(auVar60,auVar38);
      auVar57._0_8_ = auVar60._0_8_ * local_328;
      auVar57._8_8_ = auVar60._8_8_ * dStack_320;
      dVar45 = (double)((ulonglong)(local_338 * auVar60._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_));
      dVar47 = (double)((ulonglong)(dVar58 * auVar60._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_));
      auVar68 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar57,auVar41);
      dVar54 = dStack_188;
      dVar58 = local_198;
      dVar37 = dStack_190;
    }
    if (*(char *)(param_1 + 0x690) == '\x01') {
      dVar48 = *(double *)(param_1 + 0x630);
      dVar53 = *(double *)(param_1 + 0x638);
      uVar63 = *(undefined4 *)(param_1 + 0x640);
      uVar64 = *(undefined4 *)(param_1 + 0x644);
      uVar65 = *(undefined4 *)(param_1 + 0x648);
      uVar66 = *(undefined4 *)(param_1 + 0x64c);
      uVar71 = *(undefined4 *)(param_1 + 0x650);
      uVar73 = *(undefined4 *)(param_1 + 0x654);
      uVar74 = *(undefined4 *)(param_1 + 0x658);
      uVar75 = *(undefined4 *)(param_1 + 0x65c);
      uVar76 = *(undefined4 *)(param_1 + 0x660);
      uVar77 = *(undefined4 *)(param_1 + 0x664);
      uVar78 = *(undefined4 *)(param_1 + 0x668);
      uVar79 = *(undefined4 *)(param_1 + 0x66c);
    }
    lVar19 = *(longlong *)(param_1 + 0x3f0);
    bVar34 = true;
    if (*(char *)(param_1 + 0xad) == '\0') {
      if (0 < (longlong)*(int *)(lVar19 + 0x10)) {
        lVar26 = 0;
        do {
          lVar27 = *(longlong *)(*(longlong *)(lVar19 + 8) + lVar26 * 8);
          lVar28 = (longlong)*(int *)(lVar27 + 0x2a8);
          if (lVar28 != 0) {
            lVar27 = *(longlong *)(lVar27 + 0x2a0);
            lVar28 = lVar28 * 0x520 + lVar27;
            pdVar23 = (double *)(lVar27 + 0x1e0);
            do {
              if (*(int *)(lVar27 + 0x500) == 5) {
                lVar31 = *(longlong *)(lVar27 + 0x508);
              }
              else {
                lVar31 = 0;
              }
              if (*(int *)(lVar27 + 0x510) == 5) {
                lVar32 = *(longlong *)(lVar27 + 0x518);
              }
              else {
                lVar32 = 0;
              }
              if (lVar31 == 0) {
LAB_140525162:
                bVar2 = false;
              }
              else if ((*(byte *)(lVar31 + 0x20) & 1) == 0) {
                if (((9.99999993922529e-09 < ABS(*(double *)(lVar31 + 0x60))) ||
                    (9.99999993922529e-09 < ABS(*(double *)(lVar31 + 0x68)))) ||
                   ((9.99999993922529e-09 < ABS(*(double *)(lVar31 + 0x70)) ||
                    ((9.99999993922529e-09 < ABS(*(double *)(lVar31 + 0x48)) ||
                     (9.99999993922529e-09 < ABS(*(double *)(lVar31 + 0x50))))))))
                goto LAB_140525162;
                bVar2 = ABS(*(double *)(lVar31 + 0x58)) <= 9.99999993922529e-09;
              }
              else {
                bVar2 = true;
              }
              if ((lVar32 == 0) || ((*(byte *)(lVar32 + 0x20) & 1) != 0)) {
LAB_140525191:
                uVar30 = (ulonglong)*(int *)(lVar27 + 0x4f8);
                if (0 < (longlong)uVar30) {
                  if (0.0 < *(double *)(lVar27 + 0xa8)) goto LAB_1405251e9;
                  uVar29 = 0;
                  pdVar21 = pdVar23;
                  do {
                    if (uVar30 - 1 == uVar29) goto LAB_14052519d;
                    dVar36 = *pdVar21;
                    pdVar21 = pdVar21 + 0x27;
                    uVar29 = uVar29 + 1;
                  } while (dVar36 <= 0.0);
                  if (uVar29 < uVar30) goto LAB_1405251e9;
                }
              }
              else {
                if (((9.99999993922529e-09 < ABS(*(double *)(lVar32 + 0x60))) ||
                    (((9.99999993922529e-09 < ABS(*(double *)(lVar32 + 0x68)) ||
                      (9.99999993922529e-09 < ABS(*(double *)(lVar32 + 0x70)))) ||
                     (9.99999993922529e-09 < ABS(*(double *)(lVar32 + 0x48)))))) ||
                   (9.99999993922529e-09 < ABS(*(double *)(lVar32 + 0x50)))) {
                  bVar3 = false;
                }
                else {
                  bVar3 = ABS(*(double *)(lVar32 + 0x58)) <= 9.99999993922529e-09;
                }
                if ((lVar31 == 0) || (bVar2 || bVar3)) goto LAB_140525191;
              }
LAB_14052519d:
              lVar27 = lVar27 + 0x520;
              pdVar23 = pdVar23 + 0xa4;
            } while (lVar27 != lVar28);
          }
          lVar26 = lVar26 + 1;
        } while (lVar26 != *(int *)(lVar19 + 0x10));
      }
      bVar34 = false;
    }
LAB_1405251e9:
    FUN_1449d7c9e(lVar19,&local_1f8);
    if (bVar34) {
      puVar33 = *(uint **)(param_1 + 0x3a8);
      if (((puVar33[1] != 0) && (uVar18 = *puVar33, -1 < (int)uVar18)) &&
         (((int)uVar18 < DAT_14c9647dc &&
          ((plVar20 = (longlong *)
                      ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
           plVar20 != (longlong *)0x0 && (*(uint *)(plVar20 + 2) == puVar33[1])))))) {
        if (((*(uint *)(plVar20 + 1) & 0x10200000) == 0) && (lVar19 = *plVar20, lVar19 != 0)) {
          dVar36 = ((double)local_1d8._8_8_ - local_1e8) * 0.5;
          dVar55 = (dStack_1e0 - local_1f8) * 0.5;
          dVar70 = ((double)local_1d8._0_8_ - dStack_1f0) * 0.5;
          memset(&local_1f8,0,0x100);
          auVar60 = _local_258;
          local_128 = 0xffffffff;
          local_1f8._4_4_ = 0x3f800000;
          local_154 = 0xffffffff;
          local_2fc = 0;
          local_300 = puVar33[0x80] | puVar33[0x81];
          local_258._4_4_ = 0;
          uStack_24e = auVar60._10_6_;
          uStack_250 = 0x101;
          local_228 = 0.0;
          uStack_220 = 0x800000000;
          local_208 = 0;
          uStack_200 = 0x400000000;
          local_278 = 0.0;
          dStack_270 = 0.0;
          auVar11[0xf] = 0;
          auVar11._0_15_ = stack0xfffffffffffffda9;
          _local_258 = auVar11 << 8;
          local_268[8] = 1;
          local_268._0_8_ = 0x100000000000100;
          local_268._12_4_ = 0;
          local_2e8 = (longlong *)0x0;
          local_2d8._8_8_ = &local_278;
          local_2d8._0_8_ = &PTR_LAB_14a1e1520;
          local_2c8 = &local_2f8;
          local_2f8 = FUN_142b5e6b8;
          uVar18 = puVar33[0x50];
          if ((longlong)(int)uVar18 != 0) {
            local_408 = (undefined4)lVar19;
            uStack_404 = (undefined4)((ulonglong)lVar19 >> 0x20);
            lVar19 = *(longlong *)(puVar33 + 0x4e);
            lVar26 = 0;
            do {
              pcVar13 = local_2f8;
              iVar15 = *(int *)(lVar19 + 4 + lVar26);
              if ((iVar15 == 0) || (uVar1 = *(uint *)(lVar19 + lVar26), (int)uVar1 < 0)) {
LAB_14052546f:
                local_338 = 0.0;
              }
              else {
                local_338 = 0.0;
                if ((int)uVar1 < DAT_14c9647dc) {
                  pdVar23 = (double *)
                            ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                  if (((pdVar23 == (double *)0x0) || (*(int *)(pdVar23 + 2) != iVar15)) ||
                     (((ulonglong)pdVar23[1] & 0x10200000) != 0)) goto LAB_14052546f;
                  local_338 = *pdVar23;
                }
              }
              plVar20 = local_2e8;
              if (local_2e8 == (longlong *)0x0) {
                plVar20 = (longlong *)local_2d8;
              }
              uVar16 = (**(code **)(*plVar20 + 8))();
              (*pcVar13)(uVar16);
              lVar26 = lVar26 + 8;
            } while ((longlong)(int)uVar18 * 8 != lVar26);
            puVar33 = *(uint **)(param_1 + 0x3a8);
            lVar19 = CONCAT44(uStack_404,local_408);
          }
          FUN_1405261b8(&local_278,puVar33 + 0x52);
          local_328 = (double)CONCAT44(uVar77,uVar76) -
                      SQRT(dVar36 * dVar36 + dVar55 * dVar55 + dVar70 * dVar70);
          local_338 = (double)CONCAT44(uVar73,uVar71);
          local_308 = CONCAT44(uVar77,uVar76);
          local_418 = &local_300;
          local_410 = &local_278;
          uStack_330 = uVar74;
          uStack_32c = uVar75;
          local_318 = uVar71;
          uStack_314 = uVar73;
          uStack_310 = uVar74;
          uStack_30c = uVar75;
          cVar14 = FUN_140526294(lVar19,&local_1f8);
          if (cVar14 == '\0') {
            *(double *)(param_1 + 0x388) = DAT_14c8464f0;
            dVar36 = DAT_14c8464e8;
            *(double *)(param_1 + 0x378) = DAT_14c8464e0;
            *(double *)(param_1 + 0x380) = dVar36;
            dVar36 = DAT_14c8464e8;
            *(double *)(param_1 + 0x390) = DAT_14c8464e0;
            *(double *)(param_1 + 0x398) = dVar36;
            *(double *)(param_1 + 0x3a0) = DAT_14c8464f0;
            local_120 = 0;
          }
          else {
            *(undefined8 *)(param_1 + 0x388) = local_1c8._8_8_;
            *(undefined8 *)(param_1 + 0x378) = local_1d8._8_8_;
            *(undefined8 *)(param_1 + 0x380) = local_1c8._0_8_;
            *(undefined8 *)(param_1 + 0x390) = local_1a8._8_8_;
            *(double *)(param_1 + 0x398) = local_198;
            *(double *)(param_1 + 0x3a0) = dStack_190;
          }
          *(undefined8 *)(param_1 + 0x370) = local_120;
          if (local_2f8 != (code *)0x0) {
            plVar20 = (longlong *)local_2d8;
            if (local_2e8 != (longlong *)0x0) {
              plVar20 = local_2e8;
            }
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
          if (local_208 != 0) {
            FUN_1400020a8();
          }
          if (local_228 != 0.0) {
            FUN_1400020a8();
          }
          local_1f8 = (double)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
          if (cVar14 != '\0') {
            uVar71 = *(undefined4 *)(param_1 + 0x378);
            uVar73 = *(undefined4 *)(param_1 + 0x37c);
            uVar74 = *(undefined4 *)(param_1 + 0x380);
            uVar75 = *(undefined4 *)(param_1 + 900);
            uVar76 = (undefined4)*(undefined8 *)(param_1 + 0x388);
            uVar77 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x388) >> 0x20);
            uVar78 = 0;
            uVar79 = 0;
            local_1f8 = (double)CONCAT44(local_1f8._4_4_,(undefined4)local_1f8);
          }
        }
      }
    }
    dVar36 = (double)CONCAT44(uVar64,uVar63);
    dVar55 = (double)CONCAT44(uVar66,uVar65);
    if (*(char *)(param_1 + 0x690) == '\0') {
      dVar55 = auVar68._0_8_;
      dVar70 = auVar68._8_8_;
      dVar53 = dVar55 - dVar45 * 0.0;
      dVar36 = dVar45 * 0.0 - dVar47;
      dVar48 = dVar47 * 0.0 + dVar55 * -0.0;
      dVar36 = dVar36 + dVar36;
      dVar53 = dVar53 + dVar53;
      dVar48 = dVar48 + dVar48;
      auVar51._8_8_ = 0;
      auVar51._0_8_ = DAT_14c8462d0;
      dVar36 = ((dVar45 * dVar53 - dVar48 * dVar47) + dVar70 * dVar36 + 0.0) * DAT_14c8462d0 +
               ((dVar47 * dVar36 - dVar53 * dVar55) + dVar70 * dVar48 + 1.0) * DAT_14c8462c0 +
               ((dVar55 * dVar48 - dVar36 * dVar45) + dVar70 * dVar53 + 0.0) * DAT_14c8462c8;
      dVar48 = *(double *)(local_3c0 + 0x150);
      dVar53 = *(double *)(local_3c0 + 0x158);
      if (0.0 <= dVar36) {
        dVar48 = dVar58;
        dVar53 = dVar37;
        dVar58 = *(double *)(local_3c0 + 0x150);
        dVar37 = *(double *)(local_3c0 + 0x158);
      }
      dVar48 = dVar48 - dVar58;
      dVar53 = dVar53 - dVar37;
      uVar30 = -(ulonglong)(dVar36 < 0.0);
      dVar37 = (double)(~uVar30 & (ulonglong)(dVar54 - *(double *)(local_3c0 + 0x160)) |
                       (ulonglong)(*(double *)(local_3c0 + 0x160) - dVar54) & uVar30);
      dVar58 = dVar37 * dVar37 + dVar48 * dVar48 + dVar53 * dVar53;
      if (((dVar58 != 1.0) || (dVar36 = dVar48, dVar54 = dVar53, dVar55 = dVar37, NAN(dVar58))) &&
         (dVar36 = DAT_14c8464e0, dVar54 = DAT_14c8464e8, dVar55 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar58)) {
        dVar58 = 1.0 / SQRT(dVar58);
        dVar36 = dVar48 * dVar58;
        dVar54 = dVar53 * dVar58;
        dVar55 = dVar37 * dVar58;
      }
      local_278 = dVar45;
      dStack_270 = dVar47;
      local_268 = auVar68;
      if ((((ABS(dVar36 - DAT_14c8464e0) <= 9.999999747378752e-05) &&
           (ABS(dVar54 - DAT_14c8464e8) <= 9.999999747378752e-05)) &&
          (ABS(dVar55 - DAT_14c8464f0) <= 9.999999747378752e-05)) ||
         (((ABS(dVar36 - DAT_14c8462c0) <= 9.999999747378752e-05 &&
           (ABS(dVar54 - DAT_14c8462c8) <= 9.999999747378752e-05)) &&
          (ABS(dVar55 - DAT_14c8462d0) <= 9.999999747378752e-05)))) {
        FUN_1449413b4(&local_278,&local_1f8);
        local_1f8._0_4_ = 0;
        local_1f8._4_4_ = 0;
        dStack_1f0 = 0.0;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = local_1e8;
        auVar60 = divpd(auVar12 << 0x40,_DAT_1499387d0);
        auVar60 = roundpd(auVar60,auVar60,3);
        auVar38 = roundpd(auVar51,ZEXT816(0),3);
        dVar58 = (0.0 - auVar60._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar37 = (local_1e8 - auVar60._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar48 = (0.0 - auVar38._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar36 = (0.0 - auVar38._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar53 = sin(dVar58);
        dVar54 = sin(dVar37);
        dVar45 = sin(dVar48);
        sin(dVar36);
        dVar58 = cos(dVar58);
        dVar37 = cos(dVar37);
        dVar47 = cos(dVar48);
        cos(dVar36);
        dVar36 = -(dVar37 * dVar53 * dVar45) + dVar54 * dVar58 * dVar47;
        dVar55 = dVar54 * dVar53 * dVar45 + dVar37 * dVar58 * dVar47;
        dVar48 = dVar53 * dVar54 * dVar47 - dVar58 * dVar37 * dVar45;
        dVar53 = -(dVar53 * dVar37 * dVar47) - dVar58 * dVar54 * dVar45;
      }
      else {
        local_1c8._0_8_ = DAT_14c8462c0 * dVar54 - dVar36 * DAT_14c8462c8;
        local_1d8._8_8_ = DAT_14c8462d0 * dVar36 - dVar55 * DAT_14c8462c0;
        local_1d8._0_8_ = DAT_14c8462c8 * dVar55 - dVar54 * DAT_14c8462d0;
        dVar58 = (double)local_1c8._0_8_ * (double)local_1c8._0_8_ +
                 (double)local_1d8._0_8_ * (double)local_1d8._0_8_ +
                 (double)local_1d8._8_8_ * (double)local_1d8._8_8_;
        if (9.99999993922529e-09 < dVar58) {
          dVar58 = 1.0 / SQRT(dVar58);
          local_1d8._0_8_ = (double)local_1d8._0_8_ * dVar58;
          local_1d8._8_8_ = (double)local_1d8._8_8_ * dVar58;
          local_1c8._0_8_ = (double)local_1c8._0_8_ * dVar58;
        }
        local_1e8 = (double)local_1d8._0_8_ * DAT_14c8462c8 -
                    DAT_14c8462c0 * (double)local_1d8._8_8_;
        dStack_1f0 = (double)local_1c8._0_8_ * DAT_14c8462c0 -
                     DAT_14c8462d0 * (double)local_1d8._0_8_;
        local_1f8 = (double)local_1d8._8_8_ * DAT_14c8462d0 -
                    DAT_14c8462c8 * (double)local_1c8._0_8_;
        dStack_1e0 = 0.0;
        local_1c8._8_8_ = 0;
        local_1b8._8_8_ = DAT_14c8462c8;
        local_1b8._0_8_ = DAT_14c8462c0;
        local_1a8._8_8_ = 0;
        local_1a8._0_8_ = DAT_14c8462d0;
        local_198 = DAT_14c8464e0;
        dStack_190 = DAT_14c8464e8;
        dStack_188 = DAT_14c8464f0;
        local_180 = 0x3ff0000000000000;
        FUN_14481fd10(&local_278);
        dVar36 = (double)local_268._0_8_;
        dVar55 = (double)local_268._8_8_;
        dVar48 = local_278;
        dVar53 = dStack_270;
      }
    }
    uVar67 = (undefined4)((ulonglong)dVar55 >> 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0x1b0);
    uVar8 = *(undefined8 *)(param_1 + 0x1b8);
    uVar16 = *(undefined8 *)(param_1 + 0x1c0);
    bVar34 = *(char *)(param_1 + 0x2f0) == '\0';
    puVar24 = (undefined8 *)(param_1 + 0x170);
    if (!bVar34) {
      puVar24 = (undefined8 *)(param_1 + 0x290);
    }
    puVar25 = (undefined8 *)(param_1 + 0x230);
    for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
      *puVar25 = *puVar24;
      puVar24 = puVar24 + 1;
      puVar25 = puVar25 + 1;
    }
    if (bVar34) {
      *(double *)(param_1 + 0x300) = dVar48;
      *(double *)(param_1 + 0x308) = dVar53;
      auVar5._8_4_ = SUB84(dVar55,0);
      auVar5._0_8_ = dVar36;
      auVar5._12_4_ = uVar67;
      *(undefined1 (*) [16])(param_1 + 0x310) = auVar5;
      *(undefined4 *)(param_1 + 800) = uVar71;
      *(undefined4 *)(param_1 + 0x324) = uVar73;
      *(undefined4 *)(param_1 + 0x328) = uVar74;
      *(undefined4 *)(param_1 + 0x32c) = uVar75;
      *(undefined4 *)(param_1 + 0x330) = uVar76;
      *(undefined4 *)(param_1 + 0x334) = uVar77;
      *(undefined4 *)(param_1 + 0x338) = uVar78;
      *(undefined4 *)(param_1 + 0x33c) = uVar79;
      *(undefined8 *)(param_1 + 0x340) = uVar7;
      *(undefined8 *)(param_1 + 0x348) = uVar8;
      *(undefined8 *)(param_1 + 0x350) = uVar16;
      *(undefined8 *)(param_1 + 0x358) = 0;
      *(undefined1 *)(param_1 + 0x360) = 1;
    }
    *(double *)(param_1 + 0x290) = dVar48;
    *(double *)(param_1 + 0x298) = dVar53;
    auVar4._8_4_ = SUB84(dVar55,0);
    auVar4._0_8_ = dVar36;
    auVar4._12_4_ = uVar67;
    *(undefined1 (*) [16])(param_1 + 0x2a0) = auVar4;
    *(undefined4 *)(param_1 + 0x2b0) = uVar71;
    *(undefined4 *)(param_1 + 0x2b4) = uVar73;
    *(undefined4 *)(param_1 + 0x2b8) = uVar74;
    *(undefined4 *)(param_1 + 700) = uVar75;
    *(undefined4 *)(param_1 + 0x2c0) = uVar76;
    *(undefined4 *)(param_1 + 0x2c4) = uVar77;
    *(undefined4 *)(param_1 + 0x2c8) = uVar78;
    *(undefined4 *)(param_1 + 0x2cc) = uVar79;
    *(undefined8 *)(param_1 + 0x2d0) = uVar7;
    *(undefined8 *)(param_1 + 0x2d8) = uVar8;
    *(undefined8 *)(param_1 + 0x2e0) = uVar16;
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    *(undefined1 *)(param_1 + 0x2f0) = 1;
  }
  if ((local_f0 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405261b8 FUN_1405261b8 body=218 status=ok
// SIG undefined FUN_1405261b8(void)

void FUN_1405261b8(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_2;
    lVar8 = 0;
    do {
      local_50 = *(undefined8 *)(lVar3 + lVar8);
      plVar6 = (longlong *)FUN_14479d2ce(&local_50);
      if (((plVar6 != (longlong *)0x0) &&
          (uVar5 = (**(code **)(*plVar6 + 0x570))(plVar6), uVar5 < 6)) &&
         ((0x2aU >> (uVar5 & 0x1f) & 1) != 0)) {
        uVar1 = *(undefined4 *)((longlong)plVar6 + 0xc);
        iVar2 = *(int *)(param_1 + 0x58);
        *(uint *)(param_1 + 0x58) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
          FUN_140694806(param_1 + 0x30,iVar2);
        }
        lVar7 = *(longlong *)(param_1 + 0x50);
        if (*(longlong *)(param_1 + 0x50) == 0) {
          lVar7 = param_1 + 0x30;
        }
        *(undefined4 *)(lVar7 + (longlong)iVar2 * 4) = uVar1;
        *(undefined1 *)(param_1 + 0x29) = 0;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140526294 FUN_140526294 body=471 status=ok
// SIG undefined FUN_140526294(void)

undefined8
FUN_140526294(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 local_a9;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  uVar1 = DAT_14cad0ec4;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = param_4[2];
  local_88 = *param_4;
  uStack_80 = param_4[1];
  local_98 = *(undefined8 *)(param_3 + 4);
  local_a8 = *param_3;
  uStack_a4 = param_3[1];
  uStack_a0 = param_3[2];
  uStack_9c = param_3[3];
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
    uVar3 = 0;
  }
  else {
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x38) + 0x1e9) == '\x01') {
      cVar2 = FUN_144a61b4f();
      if ((cVar2 != '\0') ||
         (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002)) {
        local_e8 = &local_48;
        local_38 = local_78;
        local_48 = local_88;
        uStack_40 = uStack_80;
        local_68 = local_a8;
        uStack_64 = uStack_a4;
        uStack_60 = uStack_a0;
        uStack_5c = uStack_9c;
        local_58 = local_98;
        local_c0 = &local_69;
        local_c8 = param_5;
        local_d0 = &DAT_14cad0f10;
        local_d8 = param_6;
        local_e0 = uVar1;
        uVar3 = FUN_143444273(param_1,param_2,&local_a9);
        goto LAB_140526399;
      }
    }
    local_e8 = &local_48;
    local_38 = local_78;
    local_48 = local_88;
    uStack_40 = uStack_80;
    local_68 = local_a8;
    uStack_64 = uStack_a4;
    uStack_60 = uStack_a0;
    uStack_5c = uStack_9c;
    local_58 = local_98;
    local_c0 = &local_69;
    local_c8 = param_5;
    local_d0 = &DAT_14cad0f10;
    local_d8 = param_6;
    local_e0 = uVar1;
    uVar3 = FUN_14006c4c7(param_1,param_2,&local_a9);
  }
LAB_140526399:
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14052646c FUN_14052646c body=2612 status=ok
// SIG undefined FUN_14052646c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14052646c(longlong param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 extraout_EAX;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar23;
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar34;
  undefined1 auVar33 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_2b8 [32];
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  auVar38 = *(undefined1 (*) [16])(param_1 + 0x28);
  auVar18 = divpd(auVar38,_DAT_1499387d0);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = *(double *)(param_1 + 0x38);
  auVar19 = divpd(auVar19,_DAT_1499387d0);
  auVar18 = roundpd(auVar18,auVar18,3);
  auVar19 = roundpd(auVar19,auVar19,3);
  dVar14 = (auVar38._0_8_ - auVar18._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar21 = (auVar38._8_8_ - auVar18._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar30 = (*(double *)(param_1 + 0x38) - auVar19._0_8_ * (double)DAT_1499387d0) *
           0.008726646259971648;
  dVar34 = (0.0 - auVar19._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  lVar9 = param_1;
  dVar11 = sin(dVar14);
  uVar7 = (undefined4)lVar9;
  dVar12 = sin(dVar21);
  dVar13 = sin(dVar30);
  sin(dVar34);
  dVar14 = cos(dVar14);
  dVar15 = cos(dVar21);
  dVar16 = cos(dVar30);
  cos(dVar34);
  auVar18 = _DAT_149934d80;
  dVar21 = -(dVar15 * dVar11 * dVar13) + dVar12 * dVar14 * dVar16;
  dVar30 = dVar12 * dVar11 * dVar13 + dVar15 * dVar14 * dVar16;
  dVar34 = dVar11 * dVar12 * dVar16 - dVar14 * dVar15 * dVar13;
  dVar15 = -(dVar11 * dVar15 * dVar16) - dVar14 * dVar12 * dVar13;
  dVar12 = param_4 * *(double *)(param_1 + 0x10);
  dVar13 = param_4 * *(double *)(param_1 + 0x18);
  dVar11 = *(double *)(param_1 + 0x20) * param_4;
  local_298 = *(undefined1 (*) [16])(param_3 + 8);
  auVar38 = *(undefined1 (*) [16])(param_3 + 10);
  dVar14 = auVar38._0_8_;
  auVar19 = minpd(_DAT_149934d80,local_298);
  auVar27 = minpd(ZEXT816(0x3ff0000000000000),auVar38);
  auVar24._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
  auVar24._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
  iVar6 = movmskpd(extraout_EAX,auVar24);
  auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
  auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
  uVar8 = movmskpd(uVar7,auVar28);
  uVar4 = local_298._0_8_;
  uVar5 = local_298._8_8_;
  if ((uVar8 & 0x3fffffff) == 0 && iVar6 == 0) {
    dVar36 = *param_3;
    dVar1 = param_3[1];
    dVar29 = param_3[3];
    dVar26 = param_3[3];
    dVar23 = param_3[1];
    dVar31 = param_3[1];
    dVar2 = param_3[2];
    dVar3 = param_3[3];
    dVar32 = param_3[2];
    dVar35 = param_3[2];
    dVar16 = dVar15 * dVar32 * -1.0 + dVar21 * dVar23 + dVar30 * *param_3 * 1.0 + dVar34 * dVar29;
    dVar25 = dVar34 * dVar35 * 1.0 + dVar30 * dVar31 + dVar21 * *param_3 * -1.0 + dVar15 * dVar26;
    auVar18._0_8_ =
         dVar30 * dVar32 * 1.0 + ((*param_3 * dVar15 * 1.0 + dVar21 * dVar29) - dVar34 * dVar23);
    auVar18._8_8_ =
         dVar21 * dVar35 * -1.0 + ((*param_3 * dVar34 * -1.0 + dVar30 * dVar26) - dVar15 * dVar31);
    dVar12 = dVar12 * (double)local_298._0_8_;
    dVar13 = dVar13 * (double)local_298._8_8_;
    dVar11 = dVar11 * dVar14;
    dVar34 = auVar38._8_8_ * 0.0;
    dVar21 = dVar13 * dVar36 - dVar12 * dVar1;
    dVar23 = dVar11 * dVar1 - dVar13 * dVar2;
    dVar15 = dVar12 * dVar2 - dVar11 * dVar36;
    dVar30 = dVar34 * dVar3 - dVar34 * dVar3;
    dVar23 = dVar23 + dVar23;
    dVar15 = dVar15 + dVar15;
    dVar21 = dVar21 + dVar21;
    dVar30 = dVar30 + dVar30;
    local_f8 = (dVar21 * dVar1 - dVar2 * dVar15) + dVar29 * dVar23 + dVar12 + param_3[4];
    dStack_f0 = (dVar23 * dVar2 - dVar21 * dVar36) + dVar26 * dVar15 + dVar13 + param_3[5];
    local_288 = (dVar15 * dVar36 - dVar1 * dVar23) + dVar29 * dVar21 + dVar11 + param_3[6];
    dStack_280 = (dVar30 * dVar3 - dVar30 * dVar3) + dVar26 * dVar30 + dVar34 + param_3[7];
  }
  else {
    dVar26 = *param_3;
    dVar29 = param_3[1];
    dVar16 = param_3[2];
    dVar23 = dVar29 + dVar29;
    dVar31 = dVar16 + dVar16;
    dVar36 = dVar26 * (dVar26 + dVar26);
    local_1d8 = (1.0 - (dVar16 * dVar31 + dVar29 * dVar23)) * (double)local_298._0_8_;
    dVar25 = (1.0 - (dVar16 * dVar31 + dVar36)) * (double)local_298._8_8_;
    dVar16 = param_3[3];
    dVar32 = dVar31 * dVar16;
    dVar35 = (dVar26 + dVar26) * param_3[3];
    dVar16 = dVar23 * dVar16;
    dStack_190 = (dVar31 * dVar29 - dVar35) * dVar14;
    local_198 = (dVar16 + *param_3 * dVar31) * dVar14;
    dStack_1d0 = (dVar23 * dVar26 + dVar32) * (double)local_298._0_8_;
    local_1a8 = (dVar31 * dVar29 + dVar35) * (double)local_298._8_8_;
    local_188 = (1.0 - (dVar36 + dVar29 * dVar23)) * dVar14;
    local_1c8 = (*param_3 * dVar31 - dVar16) * (double)local_298._0_8_;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar25,0);
    local_1b8._0_8_ = (dVar23 * dVar26 - dVar32) * (double)local_298._8_8_;
    local_1b8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = param_3[4];
    dStack_170 = param_3[5];
    local_168 = param_3[6];
    uStack_160 = 0x3ff0000000000000;
    dVar26 = dVar15 + dVar15;
    dVar25 = dVar21 + dVar21;
    dVar16 = dVar34 * (dVar34 + dVar34);
    local_258 = (double)DAT_149934d80 - (dVar21 * dVar25 + dVar15 * dVar26);
    dStack_230 = DAT_149934d80._8_8_ - (dVar21 * dVar25 + dVar16);
    local_208 = 1.0 - (dVar16 + dVar15 * dVar26);
    dVar21 = (dVar34 + dVar34) * dVar30;
    dStack_250 = dVar26 * dVar34 + dVar25 * dVar30;
    local_228 = dVar25 * dVar15 + dVar21;
    local_238 = dVar26 * dVar34 - dVar25 * dVar30;
    dVar21 = dVar25 * dVar15 - dVar21;
    local_248 = dVar34 * dVar25 - dVar26 * dVar30;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218._8_4_ = SUB84(dVar21,0);
    local_218._0_8_ = dVar26 * dVar30 + dVar34 * dVar25;
    local_218._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    uStack_200 = 0;
    uStack_1e0 = 0x3ff0000000000000;
    local_1f8 = dVar12;
    dStack_1f0 = dVar13;
    local_1e8 = dVar11;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar27._8_8_ = -(ulonglong)(0.0 <= (double)uVar5);
    auVar27._0_8_ = -(ulonglong)(0.0 <= (double)uVar4);
    auVar19 = blendvpd(_DAT_149936790,auVar18,auVar27);
    uVar10 = -(ulonglong)(0.0 <= dVar14 * 1.0);
    dVar21 = (double)(~uVar10 & 0xbff0000000000000 | uVar10 & 0x3ff0000000000000);
    dVar30 = auVar19._0_8_;
    local_148 = local_148 * dVar30;
    local_150 = local_150 * dVar30;
    local_158 = local_158 * dVar30;
    dVar30 = auVar19._8_8_;
    local_128 = local_128 * dVar30;
    local_130 = local_130 * dVar30;
    local_138 = dVar30 * local_138;
    local_108 = local_108 * dVar21;
    local_110 = local_110 * dVar21;
    local_118 = dVar21 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar21 = local_268 * local_268 + local_278 * local_278;
    dVar30 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar20._0_8_ = dVar21 + dVar30;
    auVar20._8_8_ = dVar21 + dVar30;
    auVar17._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_);
    auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_);
    auVar19 = sqrtpd(auVar20,auVar20);
    auVar18 = divpd(auVar18,auVar19);
    auVar22._0_8_ = auVar18._0_8_ * local_268;
    auVar22._8_8_ = auVar18._8_8_ * dStack_260;
    dVar16 = (double)((ulonglong)(local_278 * auVar18._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_));
    dVar25 = (double)((ulonglong)(dStack_270 * auVar18._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_));
    auVar18 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar22,auVar17);
    local_288 = local_e8;
    dStack_280 = 0.0;
  }
  dVar14 = dVar14 * 1.0;
  dVar34 = ABS(*(double *)(param_1 + 0x48) * param_4) * 0.5;
  dVar21 = ABS(param_4 * *(double *)(param_1 + 0x40)) * 0.5;
  dVar11 = auVar18._0_8_;
  dVar31 = auVar18._8_8_;
  dVar23 = dVar11 + dVar11;
  dVar12 = dVar16 + dVar16;
  dVar13 = dVar25 + dVar25;
  auVar37._0_8_ = (double)local_298._8_8_ * (dVar13 * dVar16 - dVar31 * dVar23);
  auVar37._8_8_ = dVar14 * (dVar23 * dVar25 - dVar31 * dVar12);
  dVar15 = ABS(*(double *)(param_1 + 0x50) * param_4) * 0.5;
  auVar33._0_8_ = (dVar13 * dVar31 + dVar16 * dVar23) * dVar14;
  auVar33._8_8_ = (dVar12 * dVar31 + dVar16 * dVar12) * auVar38._8_8_ * 0.0;
  auVar18 = blendpd(auVar33,auVar37,2);
  dVar30 = (1.0 - (dVar23 * dVar11 + dVar13 * dVar25)) * (double)local_298._0_8_;
  dVar11 = (1.0 - (dVar23 * dVar11 + dVar12 * dVar16)) * (double)local_298._8_8_;
  auVar38._8_4_ = SUB84(dVar11,0);
  auVar38._0_8_ = dVar30;
  auVar38._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar38 = blendpd(auVar37,auVar38,2);
  dVar26 = (dVar31 * dVar23 + dVar13 * dVar16) * (double)local_298._0_8_;
  dVar29 = (dVar31 * dVar12 + dVar23 * dVar25) * (double)local_298._8_8_;
  dVar14 = (1.0 - (dVar12 * dVar16 + dVar13 * dVar25)) * dVar14;
  dVar13 = (dVar16 * dVar23 - dVar13 * dVar31) * (double)local_298._0_8_;
  dVar11 = (dVar21 - dVar21) * 0.5;
  dVar12 = (dVar34 - dVar34) * 0.5;
  dVar16 = (dVar15 - dVar15) * 0.5;
  dVar25 = (dVar21 + dVar21) * 0.5;
  dVar34 = (dVar34 + dVar34) * 0.5;
  dVar21 = (dVar15 + dVar15) * 0.5;
  local_f8 = dVar16 * auVar18._0_8_ + auVar38._0_8_ * dVar12 + dVar11 * dVar30 + local_f8;
  dStack_f0 = dVar16 * auVar18._8_8_ + auVar38._8_8_ * dVar12 + dVar11 * dVar26 + dStack_f0;
  dVar30 = ABS(dVar21 * auVar18._0_8_) + ABS(auVar38._0_8_ * dVar34) + ABS(dVar25 * dVar30);
  dVar15 = ABS(dVar21 * auVar18._8_8_) + ABS(auVar38._8_8_ * dVar34) + ABS(dVar25 * dVar26);
  *param_2 = local_f8 - dVar30;
  param_2[1] = dStack_f0 - dVar15;
  dVar21 = ABS(dVar34 * dVar29) + ABS(dVar13 * dVar25) + ABS(dVar21 * dVar14);
  dVar14 = dVar16 * dVar14 + dVar12 * dVar29 + dVar11 * dVar13 + local_288;
  param_2[2] = dVar14 - dVar21;
  param_2[3] = dVar30 + local_f8;
  param_2[4] = dVar15 + dStack_f0;
  param_2[5] = dVar14 + dVar21;
  *(undefined1 *)(param_2 + 6) = 1;
  if ((local_d0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140526ea2 FUN_140526ea2 body=82 status=ok
// SIG undefined FUN_140526ea2(void)

void FUN_140526ea2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x10;
  do {
    lVar1 = *(longlong *)((longlong)param_1 + lVar2);
    if (lVar1 != 0) {
      FUN_140526ea2(lVar1);
      FUN_1400020a8(lVar1);
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x30);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140526f02 FUN_140526f02 body=16 status=ok
// SIG undefined FUN_140526f02(void)

undefined1 FUN_140526f02(void)

{
  FUN_140526f12();
  return 1;
}



// FUNCTION 140526f12 FUN_140526f12 body=81 status=ok
// SIG undefined FUN_140526f12(void)

void FUN_140526f12(longlong *param_1)

{
  char cVar1;
  
  if ((char)param_1[0x33] != '\x02') {
    cVar1 = FUN_140526f64();
    if ((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x1c2) == '\0')) {
      cVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
      if (cVar1 == '\0') {
        FUN_14052712e();
        return;
      }
      FUN_1405272ae(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140526f64 FUN_140526f64 body=216 status=ok
// SIG undefined FUN_140526f64(void)

undefined1 FUN_140526f64(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if ((((((*(int *)(param_1 + 0x54) == 0) || (uVar1 = *(uint *)(param_1 + 0x50), (int)uVar1 < 0)) ||
        (DAT_14c9647dc <= (int)uVar1)) ||
       (((plVar5 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar5 == (longlong *)0x0 || ((int)plVar5[2] != *(int *)(param_1 + 0x54))) ||
        (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 ||
         ((*plVar5 == 0 || (lVar2 = *(longlong *)(*plVar5 + 0x30), lVar2 == 0)))))))) ||
      ((*(longlong *)(lVar2 + 0x360) == 0 || (iVar3 = FUN_14490d72a(), iVar3 != 3)))) &&
     (*(int *)(param_1 + 0x5c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x58);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0x5c))) &&
        ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) &&
       (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)) {
      plVar4 = (longlong *)(**(code **)(*plVar5 + 0x2f8))(plVar5);
      if (plVar4 == (longlong *)0x0) {
        plVar4 = plVar5;
      }
      return *(undefined1 *)((longlong)plVar4 + 0x49);
    }
  }
  return 0;
}



// FUNCTION 14052703c FUN_14052703c body=241 status=ok
// SIG undefined FUN_14052703c(void)

undefined4 FUN_14052703c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_48 [36];
  int local_24 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar5 = (**(code **)(*param_1 + 0x100))();
  if (cVar5 != '\0') {
    lVar8 = FUN_14479d2ce(param_1 + 10);
    if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0x30) == 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(*(longlong *)(lVar8 + 0x30) + 0x360);
    }
    FUN_140fda471(local_24,uVar9);
    if ((((local_24[0] != 0) && (param_1[0x31] != 0)) &&
        (plVar3 = (longlong *)param_1[0x32], plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1])) {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) {
          uVar7 = FUN_14571f9ee(0);
          goto LAB_140527063;
        }
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      uVar7 = FUN_14571f9ee(param_1[0x31]);
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
      goto LAB_140527063;
    }
  }
  uVar7 = 0;
LAB_140527063:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14052712e FUN_14052712e body=382 status=ok
// SIG undefined FUN_14052712e(void)

void FUN_14052712e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + 0x1a0) == 0) || (*(longlong *)(param_1 + 0x1a8) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x1a8) + 8) < 1)) {
    uVar4 = FUN_1401cb356();
    local_48 = (undefined8 *)0x0;
    local_40 = 0;
    FUN_1446efa72(&local_48,0,3,0x10);
    local_40 = 3;
    *local_48 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_48[2] = lVar5;
    *local_48 = &PTR_FUN_14b419980;
    local_48[3] = param_1;
    local_48[4] = FUN_140526f02;
    local_58 = 0x800000;
    FUN_1405f67fc(uVar4,&local_38,&local_48,L"FMissionBrain::CheckInitNextTick");
    if ((undefined8 *)(param_1 + 0x1a0) != &local_38) {
      *(undefined8 *)(param_1 + 0x1a0) = local_38;
      local_38 = 0;
      plVar2 = *(longlong **)(param_1 + 0x1a8);
      *(longlong **)(param_1 + 0x1a8) = local_30;
      local_30 = (longlong *)0x0;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
    FUN_1449db362(&local_48);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405272ae FUN_1405272ae body=391 status=ok
// SIG undefined FUN_1405272ae(void)

void FUN_1405272ae(longlong *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 unaff_BL;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_140d7e454();
  if (lVar5 != 0) {
    unaff_BL = *(undefined1 *)(lVar5 + 0x156);
    *(undefined1 *)(lVar5 + 0x156) = 1;
  }
  uVar1 = *(undefined1 *)((longlong)param_1 + 0x1c2);
  lVar3 = param_1[0x39];
  *(undefined1 *)((longlong)param_1 + 0x1c2) = 1;
  *(undefined1 *)(param_1 + 0x39) = 1;
  if ((char)param_1[0x33] == '\0') {
    FUN_146130d20(param_1);
    uVar2 = *(undefined1 *)((longlong)param_1 + 0x1c3);
    *(undefined1 *)((longlong)param_1 + 0x1c3) = 1;
    FUN_140f158c6(param_1);
    FUN_140f42938(param_1);
    *(undefined1 *)((longlong)param_1 + 0x1c3) = uVar2;
    FUN_140f54804(param_1);
    (**(code **)(*param_1 + 0x110))(param_1);
    FUN_146556af0(param_1,local_48);
    cVar4 = FUN_140526f64(param_1);
    if (cVar4 != '\0') {
      plVar6 = (longlong *)FUN_141561c74(param_1);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,local_48);
      }
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  else if ((char)param_1[0x33] == '\x01') {
    uVar2 = *(undefined1 *)((longlong)param_1 + 0x1c4);
    *(undefined1 *)((longlong)param_1 + 0x1c4) = 1;
    FUN_140f54804(param_1);
    (**(code **)(*param_1 + 0x108))(param_1);
    *(undefined1 *)((longlong)param_1 + 0x1c4) = uVar2;
  }
  *(char *)(param_1 + 0x39) = (char)lVar3;
  if ((char)lVar3 == '\0') {
    FUN_1410a01b0(param_1);
  }
  *(undefined1 *)((longlong)param_1 + 0x1c2) = uVar1;
  *(undefined1 *)(param_1 + 0x33) = 2;
  FUN_146556a0e(param_1);
  FUN_146556b62(param_1);
  FUN_1447f69b6(param_1 + 4);
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x156) = unaff_BL;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140527436 FUN_140527436 body=1362 status=ok
// SIG undefined FUN_140527436(void)

void FUN_140527436(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_158 [40];
  ulonglong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  ulonglong local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined1 local_d0 [4];
  undefined8 local_cc;
  undefined4 local_c4;
  ulonglong local_c0 [2];
  undefined1 local_b0 [8];
  undefined4 local_a8;
  int local_a4 [2];
  undefined4 local_9c;
  undefined2 local_98 [2];
  undefined8 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_120 = param_1;
  lVar6 = FUN_14479d2ce(param_1 + 0x50);
  if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x30) != 0)) &&
     (*(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x360) != 0)) {
    lVar6 = FUN_14479d2ce(param_1 + 0x50);
    if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x30) == 0)) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + 0x360);
    }
    if (*(longlong *)(lVar6 + 0x178) != 0) {
      lVar7 = FUN_14041aabe();
      if (((*(longlong *)(lVar6 + 0x178) != 0) && (lVar7 != 0)) &&
         ((lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x178) + 0x10), lVar6 != 0 &&
          (((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
             lVar7 + 0x30)) && (lVar6 = FUN_14127bc34(), lVar6 != 0)))))) {
        lVar7 = FUN_140082f10();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
           ((*(char *)(lVar6 + 0x4dd) == '\x01' &&
            ((*(char *)(lVar6 + 0x4dc) == '\x01' && (lVar6 = FUN_1401b2ade(lVar6), lVar6 != 0))))))
        {
          lVar7 = FUN_1449f3324();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (((*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30 &&
               (local_d8 = (**(code **)(*(longlong *)(lVar6 + 0x9a8) + 0x10))(lVar6 + 0x9a8),
               lVar6 = local_120, local_d8 != 0)) && (*(char *)(local_d8 + 0xb8) == '\x01')))) {
            FUN_14571fa66(local_120);
            iVar3 = *(int *)(lVar6 + 0x108);
            if ((longlong)iVar3 != 0) {
              plVar15 = *(longlong **)(local_120 + 0x100);
              plVar1 = plVar15 + iVar3;
              local_130 = CONCAT44(local_130._4_4_,iVar3);
              do {
                local_e0 = *plVar15;
                if (((local_e0 != 0) && (lVar6 = FUN_140f42f34(), lVar6 != 0)) &&
                   ((bVar4 = FUN_1405f61f4(lVar6), (bVar4 | 2) == 6 &&
                    (lVar6 = *(longlong *)(local_e0 + 0xa0), lVar6 != 0)))) {
                  local_f8 = local_120;
                  local_f0 = &local_e0;
                  local_e8 = &local_d8;
                  if (bVar4 == 6) {
                    FUN_14571fa36(local_e0,&local_100);
                    lVar7 = FUN_14571fa08(lVar6,local_100);
                    if (((lVar7 != 0) || (lVar7 = FUN_14890baac(lVar6), lVar7 != 0)) &&
                       ((longlong)*(int *)(lVar7 + 0x58) != 0)) {
                      lVar14 = *(longlong *)(lVar7 + 0x50);
                      lVar7 = (longlong)*(int *)(lVar7 + 0x58) * 0x58;
                      do {
                        FUN_14052798a(&local_f8,lVar14);
                        lVar14 = lVar14 + 0x58;
                        lVar7 = lVar7 + -0x58;
                      } while (lVar7 != 0);
                    }
                  }
                  if ((longlong)*(int *)(lVar6 + 0x4c0) != 0) {
                    plVar16 = *(longlong **)(lVar6 + 0x4b8);
                    plVar2 = plVar16 + *(int *)(lVar6 + 0x4c0);
                    do {
                      lVar7 = *plVar16;
                      if ((lVar7 != 0) && (0 < (longlong)*(int *)(lVar7 + 0x3f8))) {
                        local_118 = local_120 + 0x58;
                        lVar14 = *(longlong *)(lVar7 + 0x3f0);
                        lVar12 = (longlong)*(int *)(lVar7 + 0x3f8) * 0x60;
                        bVar5 = false;
                        do {
                          local_110 = lVar14;
                          if ((bVar4 == 6) || (*(char *)(lVar14 + 0x58) != '\0')) {
                            local_128 = lVar12;
                            if (bVar5) {
                              if ((local_130 & 1) == 0) {
LAB_14052796d:
                                local_130 = local_130 & 0xffffffff00000000;
                              }
                              else {
LAB_1405278cd:
                                uVar10 = FUN_14052798a(&local_f8,local_110);
                                local_130 = CONCAT44(local_130._4_4_,
                                                     (int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1)
                                                    );
                              }
                            }
                            else {
                              FUN_14100bb46(lVar7,local_a4);
                              if (local_a4[0] == 0) goto LAB_14052796d;
                              local_98[0] = 0xb;
                              local_94 = 0;
                              local_78 = 0;
                              local_88 = 0;
                              uStack_80 = 0;
                              local_70 = 0;
                              uStack_68 = 0;
                              local_a8 = local_9c;
                              FUN_144928d62(&local_88,0,local_b0);
                              local_130 = FUN_14479d2ce(local_118);
                              puVar11 = *(undefined4 **)(lVar7 + 8);
                              if (puVar11 == (undefined4 *)0x0) {
                                puVar11 = &DAT_14c9485f0;
                              }
                              FUN_144a7660c(puVar11,local_d0,1);
                              puVar11 = *(undefined4 **)(lVar6 + 8);
                              if (puVar11 == (undefined4 *)0x0) {
                                puVar11 = &DAT_14c9485f0;
                              }
                              FUN_144a7660c(puVar11,local_c0,1);
                              FUN_140d84843(local_98,local_c0,local_d0,local_130);
                              local_d0[0] = 0;
                              local_cc = 0;
                              local_c4 = 0;
                              plVar8 = (longlong *)FUN_14479d2ce(local_118);
                              if ((plVar8 != (longlong *)0x0) &&
                                 (lVar14 = (**(code **)(*plVar8 + 0x2b0))(plVar8), lVar14 != 0)) {
                                FUN_14039fc7b(local_98,local_d0,lVar14,0);
                              }
                              FUN_1403a0728(local_d0,local_c0);
                              uVar9 = DAT_14cb88918;
                              uVar13 = local_c0[0];
                              if (local_70 != 0) {
                                local_130 = DAT_14cb88918;
                                local_108 = local_c0[0];
                                FUN_1400020a8();
                                uVar9 = local_130;
                                uVar13 = local_108;
                              }
                              if (uVar13 == uVar9) goto LAB_1405278cd;
                              local_130 = local_130 & 0xffffffff00000000;
                            }
                            bVar5 = true;
                            lVar12 = local_128;
                          }
                          lVar14 = local_110 + 0x60;
                          lVar12 = lVar12 + -0x60;
                        } while (lVar12 != 0);
                      }
                      plVar16 = plVar16 + 1;
                    } while (plVar16 != plVar2);
                  }
                }
                plVar15 = plVar15 + 1;
              } while (plVar15 != plVar1);
            }
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14052798a FUN_14052798a body=470 status=ok
// SIG undefined FUN_14052798a(void)

void FUN_14052798a(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  ulonglong local_90;
  undefined1 *local_88;
  undefined1 local_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined1 local_68 [56];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = (undefined1 *)CONCAT44(local_88._4_4_,*(undefined4 *)(*(longlong *)param_1[1] + 0x98));
  local_90 = *(ulonglong *)(*(longlong *)param_1[1] + 0x90);
  iVar1 = *(int *)(*param_1 + 0x5c);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(*param_1 + 0x58);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140527a26;
    puVar6 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar6 != (undefined8 *)0x0) &&
       ((*(int *)(puVar6 + 2) == iVar1 && ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
      uVar5 = *puVar6;
      goto LAB_140527a26;
    }
  }
  uVar5 = 0;
LAB_140527a26:
  FUN_140c5218a(param_2,local_68,uVar5,&local_90);
  lVar4 = FUN_140c520a2(local_68);
  if (lVar4 != 0) {
    cVar3 = FUN_14105c016(*(undefined8 *)param_1[2],lVar4);
    if (cVar3 != '\0') {
      uVar7 = *(ulonglong *)(*(longlong *)param_1[1] + 0x94);
      if ((uVar7 == DAT_14c948034) &&
         (iVar1 = *(int *)(*(longlong *)param_1[1] + 0x90), iVar1 != DAT_14c948030)) {
        FUN_14011791e(&local_90,iVar1,uVar7 >> 0x20);
        uVar7 = local_90;
      }
      local_88 = &DAT_3f800000ffffffff;
      local_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      uVar5 = *(undefined8 *)param_1[2];
      local_90 = uVar7;
      local_a8 = FUN_140c520a2(local_68);
      local_a0 = FUN_1418a5c14(local_68);
      local_98 = 1;
      FUN_14164c0ba(uVar5,&local_a8,&local_90);
      FUN_140de863f(local_78,uStack_70 & 0xffffffff);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[local_30])();
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140527b62 FUN_140527b62 body=58 status=ok
// SIG undefined FUN_140527b62(void)

void FUN_140527b62(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_140527cca();
  FUN_140527b9c(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 140527b9c FUN_140527b9c body=301 status=ok
// SIG undefined FUN_140527b9c(void)

void FUN_140527b9c(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x38);
      if ((*(char *)(lVar2 + 0x4a0 + lVar6) == '\0') &&
         (((0.0 < *(double *)(lVar2 + 0x220 + lVar6) || (0.0 < *(double *)(lVar2 + 0x228 + lVar6)))
          && (lVar3 = FUN_146de952a(*(undefined8 *)(param_1 + 0x10),
                                    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar5 * 4)),
             *(char *)(lVar3 + 0xf9) == '\x01')))) {
        lVar4 = lVar2 + lVar6;
        FUN_146dc4120();
        if (param_3 == 0) {
          FUN_14029fe06(*(undefined8 *)(lVar2 + 0x18 + lVar6));
          *(undefined8 *)(lVar2 + 0x1d0 + lVar6) = 0;
          *(undefined8 *)(lVar2 + 0x1d8 + lVar6) = 0x3ff0000000000000;
          FUN_146dc4da6(lVar4);
          FUN_146dc4ee6(lVar4);
        }
        FUN_146dc360c(lVar4,param_2,lVar1 + 0x20,lVar3,param_4 + -1 == param_3);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x4b0;
    } while (lVar5 < *(int *)(param_1 + 0x40));
  }
  return;
}



// FUNCTION 140527cca FUN_140527cca body=380 status=ok
// SIG undefined FUN_140527cca(void)

void FUN_140527cca(longlong param_1,undefined4 param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x10) + 0x20;
  iVar2 = *(int *)(param_1 + 0x30);
  if (param_3 == 0) {
    if (iVar2 < 1) {
      return;
    }
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x28);
      if ((*(char *)(lVar1 + 0xfc0 + lVar4) == '\0') &&
         (((0.0 < *(double *)(lVar1 + 0x238 + lVar4) || (0.0 < *(double *)(lVar1 + 0x240 + lVar4)))
          && (lVar3 = FUN_146de952a(*(undefined8 *)(param_1 + 0x10),
                                    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar5 * 4)),
             *(char *)(lVar3 + 0xf9) == '\x01')))) {
        FUN_146db9ada(lVar1 + lVar4,param_2,lVar6,lVar3);
      }
      lVar5 = lVar5 + 1;
      iVar2 = *(int *)(param_1 + 0x30);
      lVar4 = lVar4 + 0xfd0;
    } while (lVar5 < iVar2);
  }
  if (0 < iVar2) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x28);
      if (((*(char *)(lVar1 + 0xfc0 + lVar5) == '\0') &&
          ((0.0 < *(double *)(lVar1 + 0x238 + lVar5) || (0.0 < *(double *)(lVar1 + 0x240 + lVar5))))
          ) && (lVar3 = FUN_146de952a(*(undefined8 *)(param_1 + 0x10),
                                      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar4 * 4)),
               *(char *)(lVar3 + 0xf9) == '\x01')) {
        if (param_3 == 0) {
          FUN_146dbfd74(lVar1 + lVar5,lVar3);
        }
        FUN_146dbece4(lVar1 + lVar5,param_2,lVar6,lVar3,param_4 + -1 == param_3);
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0xfd0;
    } while (lVar4 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 140527e46 FUN_140527e46 body=29 status=ok
// SIG undefined FUN_140527e46(void)

void FUN_140527e46(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x70))(param_1,5,param_2);
  FUN_140527e63(0);
  return;
}



// FUNCTION 140527e63 FUN_140527e63 body=1284 status=ok
// SIG undefined FUN_140527e63(void)

/* WARNING: Removing unreachable block (ram,0x000140528343) */
/* WARNING: Removing unreachable block (ram,0x00014052835e) */

void FUN_140527e63(char param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auStack_298 [32];
  longlong local_278 [2];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined8 local_248;
  undefined4 local_240;
  undefined2 local_23c;
  undefined2 local_23a;
  undefined8 local_238;
  undefined8 local_230;
  int local_228;
  undefined4 local_224;
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined2 local_1ca;
  undefined8 local_1c8;
  undefined8 local_1c0;
  unkbyte10 local_1b8;
  undefined2 uStack_1ae;
  undefined4 uStack_1ac;
  int local_1a8;
  undefined4 local_1a4;
  undefined2 uStack_1a0;
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  DAT_14cb529f4 = DAT_14cb0d290;
  DAT_14cb529f8 = 1;
  if (param_1 != '\0') {
    DAT_14cb529f0 = 0;
    DAT_14cb529ec = 0;
    DAT_14cb529fc = 0;
  }
  iVar3 = FUN_1401433c5();
  if (iVar3 != 0) goto LAB_1405282e6;
  iVar4 = 0;
  local_188 = 0;
  local_180 = 0x4fc89b3c171b6435;
  uStack_178 = 0xa4aa6925e5fb9499;
  local_170 = 1;
  local_168 = 0;
  local_1d8 = 0;
  local_1d0 = 0xcc8ac8e1;
  local_1cc = 0xa179;
  local_1ca = 0x44f5;
  local_1c8 = 0x61bcf91241e7fa97;
  local_1c0 = 3;
  local_1b8 = SUB1610((undefined1  [16])0x0,0);
  uStack_1ae = 0;
  uStack_1ac = 0;
  local_1a8 = 0;
  local_1a4 = 0;
  uStack_1a0 = 0;
  local_198 = (undefined1  [16])0x0;
  local_248 = 0;
  local_240 = 0xfac5f1cb;
  local_23c = 0x2dfd;
  local_23a = 0x4f36;
  local_238 = 0xc55652869e3ae6a1;
  local_230 = 3;
  local_1e8 = 0;
  local_220 = (undefined1  [16])0x0;
  local_210 = (undefined1  [16])0x0;
  local_200 = (undefined1  [16])0x0;
  local_1f0 = 0;
  local_1e0 = 2;
  local_1dc = 0;
  iVar3 = (**(code **)(*DAT_14cb52c50 + 0xb0))();
  if (iVar3 == -1) {
    iVar3 = (**(code **)(*DAT_14cb52c68 + 0xb0))();
    if (iVar3 == -1) goto LAB_140527ff0;
  }
  else {
    iVar3 = (**(code **)(*DAT_14cb52c50 + 0xb0))();
    if (iVar3 != 1) {
LAB_140527ff0:
      iVar4 = FUN_14014334e();
    }
  }
  local_228 = iVar4;
  local_224 = FUN_143c12078();
  if (DAT_14cb52e18 == (code *)0x0) {
    (*DAT_14cb52768)(1000,"slDLSSGGetState",&DAT_14cb52e18);
  }
  local_258 = (undefined1  [16])0x0;
  FUN_141842240(local_258,&local_188);
  FUN_140002266(&local_160,L"arg%d",local_258._8_4_);
  uVar2 = local_258._8_4_;
  lVar6 = (longlong)(int)local_258._8_4_;
  uVar5 = local_258._8_4_ + 1;
  local_258._8_4_ = uVar5;
  if ((uint)local_258._12_4_ < uVar5) {
    FUN_1447a1bd6(local_258,uVar2);
  }
  lVar6 = lVar6 * 0x10;
  *(undefined8 *)(local_258._0_8_ + lVar6) = 0;
  *(undefined8 *)(local_258._0_8_ + lVar6) = local_160;
  *(undefined4 *)(local_258._0_8_ + 8 + lVar6) = (undefined4)local_158;
  *(undefined4 *)(local_258._0_8_ + 0xc + lVar6) = local_158._4_4_;
  local_158 = 0;
  local_160 = 0;
  FUN_140002266(&local_160,L"arg%d",local_258._8_4_);
  uVar2 = local_258._8_4_;
  lVar6 = (longlong)(int)local_258._8_4_;
  uVar5 = local_258._8_4_ + 1;
  local_258._8_4_ = uVar5;
  if ((uint)local_258._12_4_ < uVar5) {
    FUN_1447a1bd6(local_258,uVar2);
  }
  uVar1 = local_258._0_8_;
  lVar6 = lVar6 * 0x10;
  *(undefined8 *)(local_258._0_8_ + lVar6) = 0;
  *(undefined8 *)(local_258._0_8_ + lVar6) = local_160;
  *(undefined4 *)(local_258._0_8_ + 8 + lVar6) = (undefined4)local_158;
  *(undefined4 *)(local_258._0_8_ + 0xc + lVar6) = local_158._4_4_;
  local_158 = 0;
  local_160 = 0;
  auVar9 = (undefined1  [16])0x0;
  local_268 = (undefined1  [16])0x0;
  lVar6 = (longlong)(int)local_258._8_4_;
  if (lVar6 != 0) {
    iVar3 = 1;
    lVar8 = 0;
    do {
      if ((char)iVar3 == '\0') {
        FUN_1400020e8(local_268,&DAT_149e19f34,2);
      }
      iVar4 = *(int *)(uVar1 + 8 + lVar8);
      iVar3 = 0;
      iVar7 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar7 = iVar3;
      }
      auVar9._0_8_ = FUN_1400020e8(local_268,*(undefined8 *)(uVar1 + lVar8),iVar7);
      auVar9._8_8_ = extraout_XMM0_Qb;
      lVar8 = lVar8 + 0x10;
    } while (lVar6 * 0x10 != lVar8);
  }
  local_60 = 0;
  local_50 = 0xf;
  lVar6 = 0;
  do {
    auVar9 = pmovsxbw(auVar9,*(undefined8 *)("slDLSSGGetState" + lVar6));
    *(undefined1 (*) [16])((longlong)&local_160 + lVar6 * 2) = auVar9;
    lVar6 = lVar6 + 8;
  } while (lVar6 != 0x10);
  local_58 = &local_160;
  FUN_140002266(local_278,&DAT_149e0625e,&local_160);
  if (local_278[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_268._0_8_ != 0) {
    FUN_1400020a8();
  }
  (*DAT_14cb52e18)(&local_188,&local_1d8,&local_248);
  FUN_1447a1747(local_258._0_8_,local_258._8_4_);
  if (local_258._0_8_ != 0) {
    FUN_1400020a8();
  }
  DAT_14cb529f4 = (float)local_1a8 * DAT_14cb0d290;
  DAT_14cb529f8 = local_1a8;
  if (local_228 != 0) {
    DAT_14cb0d278 = DAT_14cb0d278 * 0.9 + DAT_14cb529f4 * 0.1;
  }
  if (param_1 != '\0') {
    DAT_14cb529fc = uStack_1ac;
    DAT_14cb529f0 = 1;
    DAT_14cb529ec = local_1a4;
  }
LAB_1405282e6:
  if ((local_48 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140528368 FUN_140528368 body=41 status=ok
// SIG undefined FUN_140528368(void)

void FUN_140528368(longlong param_1,undefined8 param_2)

{
  FUN_1402d084a();
  FUN_140528391(param_2,param_1 + 0x3d8);
  return;
}



// FUNCTION 140528391 FUN_140528391 body=138 status=ok
// SIG undefined FUN_140528391(void)

longlong FUN_140528391(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    for (lVar1 = *param_2; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
      if ((*(uint *)(lVar1 + 8) & 0x30) != 0) goto LAB_1405283e4;
    }
    if ((*(byte *)(param_1 + 0x35) & 0x10) == 0) {
      if ((*(byte *)(param_1 + 0x29) & 1) != 0) {
        FUN_1402ac1b3(param_1,param_2 + 1);
      }
    }
    else {
      FUN_1412e3d1e(&local_30);
      *(undefined4 *)(param_2 + 1) = local_30;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_2c;
      *(undefined4 *)(param_2 + 2) = uStack_28;
      *(undefined4 *)((longlong)param_2 + 0x14) = uStack_24;
    }
  }
LAB_1405283e4:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14052841c FUN_14052841c body=284 status=ok
// SIG undefined FUN_14052841c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14052841c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca69c68) {
    FUN_144b3d300(&DAT_14ca69c68);
    if (DAT_14ca69c68 == -1) {
      FUN_14571fb0e();
      FUN_140db5666(&DAT_14ca69bc0,2,&DAT_14ca69b58,L"FRenderVolumetricCloudVS",
                    L"/Engine/Private/VolumetricCloud.usf",L"MainVS",0,1,FUN_147333c82,FUN_147333c5a
                    ,&LAB_1430f7618,&LAB_147333c56,&LAB_14712ac0c,&LAB_14712ac08,0x108,0);
      _DAT_14ca69bc0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_1430f763f);
      _Init_thread_footer(&DAT_14ca69c68);
    }
  }
  return &DAT_14ca69bc0;
}



// FUNCTION 140528538 FUN_140528538 body=284 status=ok
// SIG undefined FUN_140528538(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140528538(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6aa38) {
    FUN_144b3d300(&DAT_14ca6aa38);
    if (DAT_14ca6aa38 == -1) {
      FUN_14571fc58();
      FUN_140db5666(&DAT_14ca6a990,2,&DAT_14ca6a928,L"FVolumetricCloudShadowPS",
                    L"/Engine/Private/VolumetricCloud.usf",L"MainPS",3,1,FUN_14733453a,FUN_147334512
                    ,&LAB_1430f78fa,&LAB_14733450e,&LAB_14712ac0c,&LAB_14712ac08,0x108,0);
      _DAT_14ca6a990 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_1430f7921);
      _Init_thread_footer(&DAT_14ca6aa38);
    }
  }
  return &DAT_14ca6a990;
}



// FUNCTION 140528654 FUN_140528654 body=124 status=ok
// SIG undefined FUN_140528654(void)

undefined8 FUN_140528654(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_1405286d0();
  if ((((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x78f0))) &&
      (lVar2 = (ulonglong)uVar1 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar2 != 0)) &&
     ((*(longlong **)(lVar2 + 0x28) != (longlong *)0x0 && *(longlong *)(lVar2 + 0x20) != 0 &&
      (lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 8))(), lVar2 != 0)))) {
    lVar3 = FUN_145b8f424();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      return CONCAT71((int7)((ulonglong)(lVar3 + 0x30) >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 1405286d0 FUN_1405286d0 body=703 status=ok
// SIG undefined FUN_1405286d0(void)

uint FUN_1405286d0(void)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cbcbdf0 == (longlong *)0x0) {
    memset(&DAT_14cbcbdf8,0,0x810);
    FUN_1461632d4(&DAT_14cbcbdf8);
    DAT_14cbcbdf0 = (longlong *)&DAT_14cbcbdf8;
  }
  plVar1 = DAT_14cbcbdf0;
  plVar7 = DAT_14cbcbdf0 + 1;
  cVar2 = (char)DAT_14cbcbdf0[2];
  plVar8 = plVar7;
  if (cVar2 == '\0') {
LAB_14052870b:
    if (*plVar8 == 0) goto LAB_140528857;
    plVar8 = plVar7;
    if (cVar2 != '\0') {
      if (cVar2 == '\x02') {
        plVar8 = (longlong *)(*plVar7 + 0x30);
        goto LAB_140528720;
      }
LAB_1405287ec:
      if (((DAT_14c9a1ab0 == 0) || (*plVar7 == 0)) ||
         (plVar7 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar7 + 0x28)),
         plVar7 == (longlong *)0x0)) goto LAB_140528738;
      puVar10 = &DAT_14c9485f0;
      if ((undefined4 *)plVar1[1] != (undefined4 *)0x0) {
        puVar10 = (undefined4 *)plVar1[1];
      }
      cVar2 = (**(code **)(*plVar7 + 0x2a0))(plVar7,plVar1,puVar10);
LAB_14052883c:
      if (cVar2 == '\0') goto LAB_140528738;
      goto LAB_1405288a1;
    }
LAB_140528720:
    if (*plVar8 == 0) goto LAB_1405287ec;
    if ((((int)DAT_14cbcbdf0[3] != *(int *)(*plVar8 + 0x44)) && (DAT_14c9a1ab0 != 0)) &&
       ((*plVar7 != 0 &&
        (plVar7 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar7 + 0x28)),
        plVar7 != (longlong *)0x0)))) {
      cVar2 = (**(code **)(*plVar7 + 0x2a8))(plVar7,plVar1);
      goto LAB_14052883c;
    }
  }
  else {
    if (cVar2 == '\x02') {
      plVar8 = (longlong *)(*plVar7 + 0x30);
      goto LAB_14052870b;
    }
LAB_140528857:
    lVar4 = FUN_140162146();
    if (lVar4 != 0) {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      FUN_1446ddda2(&local_58,"def_globals_oak_inventory",0);
      FUN_140024ada(&local_58,plVar1);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
LAB_1405288a1:
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
LAB_140528738:
  lVar4 = plVar1[5];
  if (lVar4 == 0) {
    uVar5 = FUN_145d8612a();
    lVar4 = FUN_14477b664(uVar5);
    plVar1[5] = lVar4;
  }
  lVar6 = plVar1[6];
  if (lVar6 == 0) {
    uVar9 = 0xffffffff;
    if ((lVar4 == 0) || (plVar1[4] == 0)) goto LAB_140528795;
    plVar7 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar2 == '\0')) {
      plVar1[6] = 0;
      goto LAB_140528795;
    }
    uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
    lVar6 = FUN_144aff482(uVar5,plVar1 + 4);
    plVar1[6] = lVar6;
    if (lVar6 == 0) goto LAB_140528795;
  }
  uVar9 = 0xffffffff;
  if ((longlong)*(int *)(lVar6 + 0x20) != 0) {
    plVar7 = *(longlong **)(lVar6 + 0x18);
    plVar8 = plVar7 + (longlong)*(int *)(lVar6 + 0x20) * 7;
    uVar3 = 0;
    do {
      if (plVar1[0x15] == *plVar7) {
        uVar9 = -(uint)((int)plVar7[1] == 0) | uVar3;
        break;
      }
      uVar3 = uVar3 + (int)plVar7[1];
      plVar7 = plVar7 + 7;
    } while (plVar7 != plVar8);
  }
LAB_140528795:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 140528990 FUN_140528990 body=128 status=ok
// SIG undefined FUN_140528990(void)

void FUN_140528990(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_20 = *(longlong *)(param_1 + 0x10);
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  lVar3 = FUN_140528a12(uVar2,&local_20);
  if (lVar3 != 0) {
    FUN_14095c1ce(uVar1,&local_20,lVar3 + 8,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140528a12 FUN_140528a12 body=118 status=ok
// SIG undefined FUN_140528a12(void)

longlong * FUN_140528a12(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    plVar5 = (longlong *)*param_1;
    lVar4 = (longlong)*(int *)(param_1 + 1) * 0x30;
    do {
      lVar1 = *plVar5;
      lVar3 = *param_2;
      if ((((lVar3 == 0) || (lVar2 = FUN_140528a88(), lVar2 == 0)) ||
          (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        lVar3 = 0;
      }
      else {
        lVar3 = *param_2;
      }
      if (lVar1 == lVar3) {
        return plVar5;
      }
      plVar5 = plVar5 + 6;
      lVar4 = lVar4 + -0x30;
    } while (lVar4 != 0);
  }
  return (longlong *)0x0;
}



// FUNCTION 140528a88 FUN_140528a88 body=221 status=ok
// SIG undefined FUN_140528a88(void)

longlong FUN_140528a88(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb675d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14873bda0;
    local_40 = FUN_146516885;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectSignatureParam",&DAT_14cb675d0,FUN_14651685e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb675d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140528b66 FUN_140528b66 body=226 status=ok
// SIG undefined FUN_140528b66(void)

void FUN_140528b66(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_140528c48(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 140528c48 FUN_140528c48 body=1324 status=ok
// SIG undefined FUN_140528c48(void)

void FUN_140528c48(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140529176 FUN_140529176 body=226 status=ok
// SIG undefined FUN_140529176(void)

void FUN_140529176(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_140529258(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 140529258 FUN_140529258 body=1324 status=ok
// SIG undefined FUN_140529258(void)

void FUN_140529258(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140529786 FUN_140529786 body=55 status=ok
// SIG undefined FUN_140529786(void)

void FUN_140529786(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  FUN_1405297be(param_3,param_2,param_4,0,param_5,param_6,param_9);
  return;
}



// FUNCTION 1405297be FUN_1405297be body=2874 status=ok
// SIG undefined FUN_1405297be(void)

undefined8
FUN_1405297be(longlong *param_1,ulonglong *param_2,int param_3,int param_4,int param_5,int *param_6,
             ulonglong *param_7)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  byte bVar15;
  int iVar16;
  uint *puVar17;
  longlong *plVar18;
  int iVar19;
  longlong *plVar20;
  longlong *plVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong **pplVar24;
  undefined8 *puVar25;
  longlong lVar26;
  ulonglong uVar27;
  int iVar28;
  int iVar29;
  ulonglong uVar30;
  undefined1 auStack_188 [32];
  longlong *local_168;
  longlong *local_160;
  int *local_158;
  ulonglong *puStack_150;
  undefined8 local_148;
  uint local_134;
  undefined8 local_130;
  ulonglong *local_128;
  longlong *local_120;
  ulonglong local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  uint local_d8;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  longlong local_b8 [3];
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_128 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca773cc) && (FUN_144b3d300(&DAT_14ca773cc), DAT_14ca773cc == -1)) {
    FUN_1446f470e(&DAT_14ca773c4,L"FRHITexture Lock",1);
    _Init_thread_footer(&DAT_14ca773cc);
  }
  puVar3 = (undefined4 *)param_1[0xd];
  local_130 = *(undefined8 *)(puVar3 + 4);
  lVar10 = (**(code **)(*param_1 + 8))(param_1);
  uVar23 = (uint)*(byte *)(lVar10 + 0x30) * param_4 + param_3;
  puVar11 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  *puVar11 = puVar3;
  puVar11[1] = puVar3;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[0xb] = 0;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0;
  puVar11[0xe] = 0;
  *(undefined1 *)(puVar11 + 0xf) = 0;
  *(undefined2 *)((longlong)puVar11 + 0x79) = 0xff;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[8] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[0x10] = 0;
  puVar11[0x11] = 0;
  *(undefined8 *)((longlong)puVar11 + 0x8c) = 0;
  *(undefined8 *)((longlong)puVar11 + 0x94) = 0;
  *(undefined4 *)((longlong)puVar11 + 0x9c) = 4;
  local_148 = 0;
  local_158 = (int *)0x0;
  puStack_150 = (ulonglong *)0x0;
  local_160 = &local_90;
  local_168 = (longlong *)0x0;
  local_134 = uVar23;
  (**(code **)(**(longlong **)(*(longlong *)(puVar3 + 4) + 8) + 0x130))
            (*(longlong **)(*(longlong *)(puVar3 + 4) + 8),param_1[0x17] + 0x58,uVar23,1);
  local_90 = 0;
  *(undefined4 *)(puVar11 + 0x10) = uStack_88;
  *(undefined4 *)((longlong)puVar11 + 0x84) = uStack_84;
  *(undefined4 *)(puVar11 + 0x11) = uStack_80;
  *(undefined4 *)((longlong)puVar11 + 0x8c) = uStack_7c;
  *(int *)(puVar11 + 0x12) = iStack_78;
  *param_6 = iStack_78;
  uVar23 = iStack_78 * *(int *)(puVar11 + 0x11) * *(int *)((longlong)puVar11 + 0x8c);
  uVar12 = (ulonglong)uVar23;
  if (param_7 != (ulonglong *)0x0) {
    *param_7 = uVar12;
  }
  local_98 = 0;
  puStack_150 = param_7;
  local_158 = param_6;
  local_160 = (longlong *)CONCAT44(local_160._4_4_,param_5);
  local_168 = param_1;
  cVar5 = (**(code **)(*DAT_14ca77418 + 0x618))(DAT_14ca77418,&local_98,param_3,param_4);
  if (cVar5 == '\0') {
    puVar14 = puVar11 + 1;
    if (param_5 == 1) {
      lVar10 = FUN_140a6e1ae(puVar3 + 0x50e,uVar23 + 0x1ff & 0xfffffe00,0x200,puVar14);
      if (lVar10 == 0) {
        if (puVar11 != (undefined8 *)0x0) {
          FUN_1456d02da(puVar14);
          FUN_1400020a8(puVar11);
        }
        uVar13 = 0;
        goto LAB_140529dd5;
      }
    }
    else {
      *(byte *)((longlong)puVar11 + 0x9c) = *(byte *)((longlong)puVar11 + 0x9c) | 2;
      local_160 = &local_a0;
      local_a0 = 0;
      local_158 = (int *)0x0;
      puStack_150 = (ulonglong *)((ulonglong)puStack_150 & 0xffffffff00000000);
      local_168 = (longlong *)uVar12;
      iVar7 = FUN_14631a284(local_130,3,*puVar3,*puVar3);
      if (iVar7 < 0) {
        local_160 = local_b8;
        local_b8[0] = 0;
        local_b8[1] = 0;
        local_168 = (longlong *)0x0;
        FUN_145763094(iVar7,
                      "Adapter->CreateBuffer(D3D12_HEAP_TYPE_READBACK, Node, Node, SubresourceSize, &StagingTexture, nullptr)"
                      ,".\\Runtime/D3D12RHI/Private/D3D12Texture.cpp",0x63d);
      }
      local_168 = (longlong *)0x0;
      FUN_1400daf10(puVar14,local_a0,uVar12,0);
      puVar4 = local_128;
      local_58 = uStack_80;
      uStack_54 = uStack_7c;
      iStack_50 = iStack_78;
      uStack_4c = uStack_74;
      local_68 = local_90;
      uVar13 = local_68;
      uStack_c4 = 0;
      uStack_c0 = 0;
      uStack_d4 = 0;
      uStack_cc = 0;
      local_c8 = 0;
      local_120 = param_1;
      local_118 = *(ulonglong *)(local_a0 + 0x20);
      local_110 = 1;
      local_ec = uStack_74;
      local_68._0_4_ = (undefined4)local_90;
      local_68._4_4_ = (undefined4)((ulonglong)local_90 >> 0x20);
      local_10c = uStack_6c;
      uStack_108 = (undefined4)local_68;
      uStack_104 = local_68._4_4_;
      uStack_100 = uStack_88;
      local_e8 = *(undefined8 *)(param_1[0x17] + 0x20);
      local_e0 = 0;
      local_d8 = local_134;
      local_68 = uVar13;
      if (*(char *)((longlong)local_128 + 100) == '\x01') {
        FUN_143179b5e(&local_120,local_128);
      }
      else {
        puVar25 = (undefined8 *)(*local_128 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar25 + 0xf;
        if ((undefined8 *)local_128[1] < puVar14) {
          FUN_140023dd8(local_128,0x80);
          puVar25 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
          puVar14 = puVar25 + 0xf;
        }
        *puVar4 = (ulonglong)puVar14;
        *(int *)(puVar4 + 0xc) = (int)puVar4[0xc] + 1;
        *(undefined8 **)puVar4[6] = puVar25;
        puVar4[6] = (ulonglong)(puVar25 + 1);
        puVar25[1] = 0;
        *puVar25 = &PTR_LAB_14a350210;
        pplVar24 = &local_120;
        puVar14 = puVar25 + 2;
        for (lVar10 = 0xd; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar14 = *pplVar24;
          pplVar24 = pplVar24 + 1;
          puVar14 = puVar14 + 1;
        }
      }
      local_120 = (longlong *)0x0;
      local_118 = local_118 & 0xffffffff00000000;
      FUN_14007658c(&DAT_14ca850c8,&local_120,5);
      (**(code **)(*DAT_14ca83900 + 0x370))();
    }
    local_98 = puVar11[0xb];
  }
  plVar20 = param_1 + 0x3c;
  if (*(int *)((longlong)param_1 + 0x214) == 0) {
    iVar7 = (int)param_1[0x3d];
    *(int *)(param_1 + 0x3d) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0x1ec) == iVar7) {
      FUN_14482b872(plVar20,iVar7);
    }
    iVar28 = (int)param_1[0x41];
    if (iVar28 == 0) {
      iVar16 = -1;
    }
    else {
      iVar16 = iVar28 + 0x1e;
      if (-1 < iVar28 + -1) {
        iVar16 = iVar28 + -1;
      }
      iVar16 = iVar16 >> 5;
    }
    plVar18 = param_1 + 0x3e;
    iVar19 = iVar28 + 1;
    iVar29 = iVar28 + 0x1f;
    if (-1 < iVar28) {
      iVar29 = iVar28;
    }
    if (iVar29 >> 5 == iVar16) {
      *(int *)(param_1 + 0x41) = iVar19;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x20c) <= iVar28) {
        iVar16 = iVar28;
        if (iVar28 + 0x20U < 0xa0) {
          iVar19 = 0x80;
        }
        else {
          uVar23 = iVar28 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x20c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar23) {
              uVar6 = uVar23;
            }
          }
          else {
            uVar6 = uVar23 + (uVar23 * 3 >> 3) + 0x10;
          }
          uVar12 = (ulonglong)(uVar6 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar8 = (uint)(uVar12 + 0xf);
              if (uVar6 < 0x1ffd) {
                uVar12 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar12 + 0xf >> 4]];
              }
              else {
                uVar22 = (ulonglong)(uVar8 & 0xfffffff0);
                if (uVar22 < 0x7ff1) {
                  bVar15 = (&DAT_14c841e00)[uVar8 >> 4];
                  uVar30 = 0x32;
                  if (0x32 < bVar15) {
                    uVar30 = (ulonglong)bVar15;
                  }
                  uVar27 = 0x32 - (ulonglong)bVar15;
                  do {
                    uVar12 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar27 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar27 & 0xffffffff] & 0xf) == 0) goto LAB_14052a0f8;
                    lVar10 = uVar30 + 1 + uVar27;
                    uVar27 = uVar27 - 1;
                  } while (lVar10 != 0x33);
                }
                uVar12 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar12 = (ulonglong)DAT_14c841df8;
                }
                uVar12 = -uVar12 & (uVar22 + uVar12) - 1;
              }
            }
            else {
              uVar12 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar12,0);
              iVar16 = (int)param_1[0x41];
            }
          }
LAB_14052a0f8:
          iVar9 = (int)(uVar12 >> 2);
          iVar19 = -0x20;
          if ((int)uVar23 <= iVar9) {
            iVar19 = iVar9 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x20c) = iVar19;
        FUN_1446efbd8(plVar18,iVar16);
        iVar19 = (int)param_1[0x41] + 1;
      }
      iVar16 = iVar19 + 0x1f;
      if (-1 < iVar19) {
        iVar16 = iVar19;
      }
      *(int *)(param_1 + 0x41) = iVar19;
      if (iVar19 % 0x20 != 0) {
        plVar21 = (longlong *)param_1[0x40];
        if ((longlong *)param_1[0x40] == (longlong *)0x0) {
          plVar21 = plVar18;
        }
        bVar15 = -(char)(iVar19 % 0x20);
        *(uint *)((longlong)plVar21 + (longlong)(iVar16 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar21 + (longlong)(iVar16 >> 5) * 4) << (bVar15 & 0x1f)) >>
             (bVar15 & 0x1f);
      }
    }
    lVar10 = (longlong)iVar7;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar18 = (longlong *)param_1[0x40];
    }
    bVar15 = (byte)iVar28 & 0x1f;
    puVar1 = (uint *)((longlong)plVar18 + (longlong)(iVar29 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
  }
  else {
    iVar7 = (int)param_1[0x42];
    lVar10 = (longlong)iVar7;
    iVar28 = *(int *)(param_1[0x3c] + 4 + lVar10 * 0x18);
    *(int *)(param_1 + 0x42) = iVar28;
    iVar16 = *(int *)((longlong)param_1 + 0x214) + -1;
    *(int *)((longlong)param_1 + 0x214) = iVar16;
    if (iVar16 != 0) {
      *(undefined4 *)(param_1[0x3c] + (longlong)iVar28 * 0x18) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 0x3e);
  puVar17 = (uint *)param_1[0x40];
  if ((uint *)param_1[0x40] == (uint *)0x0) {
    puVar17 = puVar1;
  }
  iVar28 = iVar7 + 0x1f;
  if (-1 < iVar7) {
    iVar28 = iVar7;
  }
  puVar17[iVar28 >> 5] = puVar17[iVar28 >> 5] | 1 << ((byte)iVar7 & 0x1f);
  uVar23 = 1;
  puVar17 = (uint *)(param_1[0x3c] + lVar10 * 0x18);
  *puVar17 = local_134;
  *(undefined8 **)(puVar17 + 2) = puVar11;
  puVar17[4] = 0xffffffff;
  uVar6 = (int)param_1[0x3d] - *(int *)((longlong)param_1 + 0x214);
  if (uVar6 != 1) {
    if ((int)param_1[0x3d] != *(int *)((longlong)param_1 + 0x214)) {
      plVar18 = param_1 + 0x43;
      if ((longlong *)param_1[0x44] != (longlong *)0x0) {
        plVar18 = (longlong *)param_1[0x44];
      }
      uVar8 = *(uint *)((longlong)plVar18 + (ulonglong)((int)param_1[0x45] - 1U & local_134) * 4);
      if (uVar8 != 0xffffffff) {
        do {
          puVar2 = (uint *)(*plVar20 + (longlong)(int)uVar8 * 0x18);
          if (*puVar2 == local_134) {
            lVar10 = *(longlong *)(puVar2 + 2);
            if (lVar10 != 0) {
              FUN_1456d02da(lVar10 + 8);
              FUN_1400020a8(lVar10);
            }
            uVar23 = puVar17[1];
            uVar6 = puVar17[2];
            uVar8 = puVar17[3];
            *puVar2 = *puVar17;
            puVar2[1] = uVar23;
            puVar2[2] = uVar6;
            puVar2[3] = uVar8;
            FUN_143179cea(plVar20,iVar7);
            uVar13 = local_98;
            goto LAB_140529dd5;
          }
          uVar8 = puVar2[4];
        } while (uVar8 != 0xffffffff);
      }
    }
    if (3 < uVar6) {
      uVar12 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar23 = 1 << ((byte)lVar10 & 0x1f);
    }
  }
  if (((int)uVar6 < 1) || ((int)uVar23 <= (int)param_1[0x45])) {
    uVar23 = (int)param_1[0x45] - 1U & local_134;
    puVar17[5] = uVar23;
    plVar20 = (longlong *)param_1[0x44];
    if ((longlong *)param_1[0x44] == (longlong *)0x0) {
      plVar20 = param_1 + 0x43;
    }
    puVar17[4] = *(uint *)((longlong)plVar20 +
                          ((longlong)(int)param_1[0x45] - 1U & (longlong)(int)uVar23) * 4);
    plVar20 = (longlong *)param_1[0x44];
    if ((longlong *)param_1[0x44] == (longlong *)0x0) {
      plVar20 = param_1 + 0x43;
    }
    *(int *)((longlong)plVar20 + ((longlong)(int)param_1[0x45] - 1U & (longlong)(int)uVar23) * 4) =
         iVar7;
    uVar13 = local_98;
    goto LAB_140529dd5;
  }
  *(uint *)(param_1 + 0x45) = uVar23;
  plVar20 = param_1 + 0x44;
  if (param_1[0x44] != 0) {
    FUN_1446efa72(plVar20,0,0,4);
    uVar23 = *(uint *)(param_1 + 0x45);
  }
  plVar18 = param_1 + 0x43;
  if (uVar23 == 1) {
    if (*plVar20 != 0) {
      FUN_1446efa72(plVar20,0,0,4);
    }
LAB_140529bf5:
    uVar6 = 0;
    do {
      plVar20 = (longlong *)param_1[0x44];
      if ((longlong *)param_1[0x44] == (longlong *)0x0) {
        plVar20 = plVar18;
      }
      *(undefined4 *)((longlong)plVar20 + (ulonglong)((int)param_1[0x45] + 0x7fffffffU & uVar6) * 4)
           = 0xffffffff;
      uVar6 = uVar6 + 1;
    } while (uVar23 != uVar6);
  }
  else {
    uVar13 = local_98;
    if (uVar23 == 0) goto LAB_140529dd5;
    FUN_1446efa72(plVar20,0,uVar23,4);
    if (0 < (int)uVar23) goto LAB_140529bf5;
  }
  iVar7 = (int)param_1[0x41];
  uVar13 = local_98;
  if (iVar7 == 0) {
    uVar12 = 0;
    uVar22 = 1;
    iVar28 = 0;
    iVar16 = 0;
  }
  else {
    puVar17 = (uint *)param_1[0x40];
    if ((uint *)param_1[0x40] == (uint *)0x0) {
      puVar17 = puVar1;
    }
    uVar23 = *puVar17;
    if (uVar23 == 0) {
      iVar28 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar28 = iVar7 + -1;
      }
      uVar12 = 0;
      uVar22 = (ulonglong)(uint)(iVar28 >> 5);
      if (iVar28 >> 5 < 1) {
        uVar22 = uVar12;
      }
      iVar16 = 0;
      do {
        if (uVar22 == uVar12) goto LAB_140529dd5;
        iVar16 = iVar16 + 0x20;
        uVar23 = puVar17[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar23 == 0);
    }
    else {
      uVar12 = 0;
      iVar16 = 0;
    }
    uVar22 = (ulonglong)(-uVar23 & uVar23);
    uVar30 = uVar22 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar28 = (iVar16 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar28) {
      iVar28 = iVar7;
    }
  }
  if (iVar28 < iVar7) {
    uVar23 = 0xffffffff;
    do {
      lVar10 = param_1[0x3c];
      lVar26 = (longlong)iVar28;
      uVar30 = (longlong)(int)param_1[0x45] - 1U & (longlong)*(int *)(lVar10 + lVar26 * 0x18);
      iVar7 = (int)uVar30;
      *(int *)(lVar10 + 0x14 + lVar26 * 0x18) = iVar7;
      plVar20 = (longlong *)param_1[0x44];
      if ((longlong *)param_1[0x44] == (longlong *)0x0) {
        plVar20 = plVar18;
      }
      *(undefined4 *)(lVar10 + 0x10 + lVar26 * 0x18) =
           *(undefined4 *)((longlong)plVar20 + ((longlong)(int)param_1[0x45] - 1U & uVar30) * 4);
      plVar20 = (longlong *)param_1[0x44];
      if ((longlong *)param_1[0x44] == (longlong *)0x0) {
        plVar20 = plVar18;
      }
      *(int *)((longlong)plVar20 + ((longlong)iVar7 & (longlong)(int)param_1[0x45] - 1U) * 4) =
           iVar28;
      uVar23 = ~(uint)uVar22 & uVar23;
      puVar17 = (uint *)param_1[0x40];
      if ((uint *)param_1[0x40] == (uint *)0x0) {
        puVar17 = puVar1;
      }
      iVar7 = (int)param_1[0x41];
      iVar28 = (int)uVar12;
      lVar10 = (longlong)iVar28;
      uVar6 = puVar17[lVar10] & uVar23;
      if (uVar6 == 0) {
        iVar19 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar19 = iVar7 + -1;
        }
        iVar19 = iVar19 >> 5;
        iVar29 = iVar19;
        if (iVar19 < iVar28) {
          iVar29 = iVar28;
        }
        if (iVar19 <= iVar28) break;
        lVar26 = 0;
        while( true ) {
          iVar16 = iVar16 + 0x20;
          uVar6 = puVar17[lVar10 + lVar26 + 1];
          if (uVar6 != 0) break;
          lVar26 = lVar26 + 1;
          if (iVar29 - lVar10 == lVar26) goto LAB_140529dd5;
        }
        uVar12 = (ulonglong)(iVar28 + (int)lVar26 + 1);
        uVar23 = 0xffffffff;
      }
      uVar22 = (ulonglong)(-uVar6 & uVar6);
      uVar30 = uVar22 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar28 = (iVar16 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar28 < iVar7);
  }
LAB_140529dd5:
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14052a2fa FUN_14052a2fa body=35 status=ok
// SIG undefined FUN_14052a2fa(void)

void FUN_14052a2fa(longlong param_1,char param_2)

{
  FUN_14052a31e();
  if (param_2 != '\0') {
    *(int *)(param_1 + 0x41c) = *(int *)(param_1 + 0x41c) + 1;
  }
  return;
}



// FUNCTION 14052a31e FUN_14052a31e body=1269 status=ok
// SIG undefined FUN_14052a31e(void)

void FUN_14052a31e(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (iVar7 == 4) goto LAB_14052a48f;
  piVar1 = (int *)(lVar4 + 0xc60);
  *(undefined4 *)(param_1 + 0x418) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x410) = 0;
  if (*(int *)(param_1 + 0x414) != 0) {
    FUN_14122c398(param_1 + 1000);
    iVar7 = *piVar1;
  }
  lVar4 = *(longlong *)(param_1 + 0x2d0);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14052a39e;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14052a3a3;
      goto LAB_14052a3ff;
    }
  }
  else {
LAB_14052a39e:
    if (iVar7 != 0x10) {
LAB_14052a3ff:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *piVar1, iVar7 == 2)) goto LAB_14052a3a3;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_14052a3a3;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_14052a551;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_1432c7d5e);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_14052a551:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x16);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x16);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_14052a5d1;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_14052a5d1:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14a4525f8;
        puVar17[0x15] = lVar4;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar16 != '\x06') {
            uVar6 = uVar16;
          }
          uVar16 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar7;
        if (puVar17 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a4525b0;
        local_68[0] = &LAB_1432cb41e;
        local_40 = lVar4;
        FUN_14005a792(&DAT_14ca9a440,L"ClearScenesOnPolicy",&DAT_14cab0e88);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_14052a48f;
    }
  }
LAB_14052a3a3:
  lVar4 = *(longlong *)(lVar4 + 0x20);
  *(undefined4 *)(lVar4 + 0x248) = 0;
  if (*(int *)(lVar4 + 0x24c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
LAB_14052a48f:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14052a854 FUN_14052a854 body=1946 status=ok
// SIG undefined FUN_14052a854(void)

void FUN_14052a854(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  void *pvVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined **ppuVar15;
  longlong lVar16;
  undefined4 uVar17;
  size_t _Size;
  undefined1 auStack_238 [32];
  void **local_218;
  longlong *local_210;
  uint *local_208;
  uint *local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined **local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  void *local_1c8;
  undefined8 uStack_1c0;
  void *local_1b8;
  ulonglong uStack_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  void *local_180;
  int iStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  byte local_160;
  longlong local_158;
  longlong lStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong local_110;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined8 local_f0;
  void *local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  void *local_d0;
  undefined8 local_c8;
  undefined5 uStack_c0;
  undefined3 local_bb;
  undefined5 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  void *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  byte local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  plVar9 = *(longlong **)(param_4 + 8);
  iVar6 = FUN_1401abde8(plVar9,~(*(uint *)(param_4 + 0x24) ^ *(uint *)(param_4 + 0x28) ^
                                *(uint *)(param_4 + 0x2c)),param_4 + 0x24);
  if ((((iVar6 != -1) &&
       (lVar8 = (longlong)iVar6 * 0x20 + *plVar9, plVar9 = (longlong *)(lVar8 + 0x10),
       plVar9 != (longlong *)0x0 && lVar8 != 0)) && (lVar8 = *plVar9, lVar8 != 0)) &&
     ((longlong)*(int *)(lVar8 + 0x10) != 0)) {
    lVar16 = (longlong)*(int *)(lVar8 + 0x10) * 0x28;
    lVar8 = *(longlong *)(lVar8 + 8) + 0x18;
    local_208 = (uint *)(param_3 + 4);
    local_200 = (uint *)(param_3 + 0x10);
    do {
      if (*(int *)(lVar8 + 0xc) != -1) {
        local_1b8 = (void *)0x0;
        uStack_1b0 = 0;
        uVar7 = *(uint *)(param_3 + 0x24);
        uVar17 = 0;
        uVar11 = 0;
        if (SBORROW4(0,uVar7)) {
          puVar12 = local_200;
          if (*(int *)(param_3 + 0x20) != 0) {
            puVar12 = local_208;
          }
          uVar7 = *puVar12;
          uVar11 = (ulonglong)puVar12[1];
        }
        local_218 = &local_1b8;
        local_210 = param_1;
        (**(code **)(*param_1 + 0x50))
                  (param_1,(ulonglong)uVar7 | uVar11 << 0x20,(undefined8 *)(lVar8 + -0x10),lVar8);
        pvVar4 = local_1b8;
        local_1f0 = *(undefined4 *)(lVar8 + -8);
        local_1f8 = *(undefined8 *)(lVar8 + -0x10);
        local_1e0 = *(undefined8 *)(lVar8 + -0x18);
        local_1e8 = &PTR_FUN_14ad972e0;
        local_1c8 = (void *)0x0;
        _Size = (size_t)(int)uStack_1b0;
        uStack_1c0._0_4_ = (int)uStack_1b0;
        uStack_1d8 = local_1f8;
        local_1d0 = local_1f0;
        if (_Size == 0) {
          iStack_178 = 0;
          local_1c8 = (void *)0x0;
        }
        else {
          FUN_1447a127e(&local_1c8,uStack_1b0 & 0xffffffff,0);
          memcpy(local_1c8,pvVar4,_Size);
          iStack_178 = (int)uStack_1c0;
          uVar17 = uStack_1c0._4_4_;
        }
        local_160 = local_160 | 3;
        local_1a0 = &PTR_FUN_14ad972e0;
        uStack_198 = local_1e0;
        uStack_190 = uStack_1d8;
        uStack_188 = local_1d0;
        local_180 = local_1c8;
        local_1c8 = (void *)0x0;
        uStack_1c0 = 0;
        uStack_174 = uVar17;
        local_148 = (int)param_5[0x24];
        local_158 = param_5[0x22];
        lStack_150 = param_5[0x23];
        uStack_144 = (undefined4)*(undefined8 *)((longlong)param_5 + 0x124);
        uStack_140 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x124) >> 0x20);
        uStack_13c = (undefined4)*(undefined8 *)((longlong)param_5 + 300);
        uStack_138 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 300) >> 0x20);
        local_110 = param_5[0x2b];
        local_120 = (int)param_5[0x29];
        uStack_11c = *(undefined4 *)((longlong)param_5 + 0x14c);
        uStack_118 = (int)param_5[0x2a];
        uStack_114 = *(undefined4 *)((longlong)param_5 + 0x154);
        local_130 = (int)param_5[0x27];
        uStack_12c = *(undefined4 *)((longlong)param_5 + 0x13c);
        uStack_128 = (int)param_5[0x28];
        uStack_124 = *(undefined4 *)((longlong)param_5 + 0x144);
        local_100 = (int)param_5[0x2d];
        local_108 = param_5[0x2c];
        local_f8 = 0;
        iVar6 = (int)param_5[0x2f];
        lVar10 = param_5[0x2e];
        local_f0 = CONCAT44(local_f0._4_4_,iVar6);
        if (iVar6 == 0) {
          local_f0 = 0;
        }
        else {
          FUN_14753cf4a(&local_f8,iVar6,0);
          FUN_14753cfbd(local_f8,lVar10,iVar6);
        }
        puVar14 = (undefined8 *)&local_b0;
        local_e8 = (void *)0x0;
        uVar7 = *(uint *)(param_5 + 0x31);
        pvVar4 = (void *)param_5[0x30];
        local_e0 = CONCAT44(local_e0._4_4_,uVar7);
        if ((longlong)(int)uVar7 == 0) {
          local_e0 = (ulonglong)uVar7;
        }
        else {
          FUN_1456c5740(&local_e8,uVar7,0);
          memcpy(local_e8,pvVar4,(longlong)(int)uVar7 << 3);
        }
        local_d8 = (char)param_5[0x32];
        local_d0 = (void *)0x0;
        uVar7 = *(uint *)(param_5 + 0x34);
        pvVar4 = (void *)param_5[0x33];
        local_c8 = CONCAT44(local_c8._4_4_,uVar7);
        if ((longlong)(int)uVar7 == 0) {
          local_c8 = (ulonglong)uVar7;
        }
        else {
          FUN_1447bda9e(&local_d0,uVar7,0);
          memcpy(local_d0,pvVar4,(longlong)(int)uVar7 << 2);
        }
        bVar3 = local_160;
        param_1 = local_210;
        uStack_b8 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x1ad) >> 0x18);
        uStack_c0 = (undefined5)param_5[0x35];
        local_bb = (undefined3)((ulonglong)param_5[0x35] >> 0x28);
        bVar5 = local_70 & 0xfc;
        local_70 = bVar5 + 2;
        if ((local_160 & 1) != 0) {
          local_160 = local_160 & 0xfe;
          local_70 = bVar5 | bVar3 & 2 | 1;
          local_80 = local_170;
          uStack_78 = uStack_168;
          local_90 = local_180;
          uStack_88 = CONCAT44(uStack_174,iStack_178);
          local_a0 = uStack_190;
          uStack_98 = CONCAT44(uStack_184,uStack_188);
          local_b0 = (undefined4)local_1a0;
          uStack_ac = local_1a0._4_4_;
          uStack_a8 = (undefined4)uStack_198;
          uStack_a4 = uStack_198._4_4_;
        }
        iVar6 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar6 + 1U) {
          FUN_140ac5684(param_5,iVar6);
        }
        lVar10 = *param_5;
        lVar13 = (longlong)iVar6 * 0xf0;
        *(undefined4 *)(lVar10 + 0x20 + lVar13) = uStack_138;
        puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar13);
        *puVar1 = CONCAT44(uStack_144,local_148);
        puVar1[1] = CONCAT44(uStack_13c,uStack_140);
        *(longlong *)(lVar10 + lVar13) = local_158;
        ((longlong *)(lVar10 + lVar13))[1] = lStack_150;
        *(longlong *)(lVar10 + 0x48 + lVar13) = local_110;
        puVar2 = (undefined4 *)(lVar10 + 0x38 + lVar13);
        *puVar2 = local_120;
        puVar2[1] = uStack_11c;
        puVar2[2] = uStack_118;
        puVar2[3] = uStack_114;
        puVar2 = (undefined4 *)(lVar10 + 0x28 + lVar13);
        *puVar2 = local_130;
        puVar2[1] = uStack_12c;
        puVar2[2] = uStack_128;
        puVar2[3] = uStack_124;
        *(longlong *)(lVar10 + 0x50 + lVar13) = local_108;
        *(undefined4 *)(lVar10 + 0x58 + lVar13) = local_100;
        *(undefined8 *)(lVar10 + 0x60 + lVar13) = 0;
        *(longlong *)(lVar10 + 0x60 + lVar13) = local_f8;
        local_f8 = 0;
        *(undefined4 *)(lVar10 + 0x68 + lVar13) = (undefined4)local_f0;
        *(undefined4 *)(lVar10 + 0x6c + lVar13) = local_f0._4_4_;
        local_f0 = 0;
        *(undefined8 *)(lVar10 + 0x70 + lVar13) = 0;
        *(void **)(lVar10 + 0x70 + lVar13) = local_e8;
        local_e8 = (void *)0x0;
        *(undefined4 *)(lVar10 + 0x78 + lVar13) = (undefined4)local_e0;
        *(undefined4 *)(lVar10 + 0x7c + lVar13) = local_e0._4_4_;
        local_e0 = 0;
        *(undefined1 *)(lVar10 + 0x80 + lVar13) = local_d8;
        *(undefined8 *)(lVar10 + 0x88 + lVar13) = 0;
        *(void **)(lVar10 + 0x88 + lVar13) = local_d0;
        local_d0 = (void *)0x0;
        *(undefined4 *)(lVar10 + 0x90 + lVar13) = (undefined4)local_c8;
        *(undefined4 *)(lVar10 + 0x94 + lVar13) = local_c8._4_4_;
        local_c8 = 0;
        *(ulonglong *)(lVar10 + 0x9d + lVar13) = CONCAT53(uStack_b8,local_bb);
        *(ulonglong *)(lVar10 + 0x98 + lVar13) = CONCAT35(local_bb,uStack_c0);
        bVar3 = *(byte *)(lVar10 + 0xe8 + lVar13);
        *(byte *)(lVar10 + 0xe8 + lVar13) = bVar3 & 0xfc | 2;
        if ((local_70 & 1) != 0) {
          lVar10 = lVar10 + lVar13;
          *(byte *)(lVar10 + 0xe8) = bVar3 | 3;
          *(byte *)(lVar10 + 0xe8) = *(byte *)(lVar10 + 0xe8) & 0xfd | local_70 & 2;
          *(undefined8 *)(lVar10 + 0xd8) = local_80;
          *(undefined8 *)(lVar10 + 0xe0) = uStack_78;
          *(void **)(lVar10 + 200) = local_90;
          *(undefined8 *)(lVar10 + 0xd0) = uStack_88;
          *(undefined4 *)(lVar10 + 0xb8) = (undefined4)local_a0;
          *(undefined4 *)(lVar10 + 0xbc) = local_a0._4_4_;
          *(undefined4 *)(lVar10 + 0xc0) = (undefined4)uStack_98;
          *(undefined4 *)(lVar10 + 0xc4) = uStack_98._4_4_;
          *(undefined4 *)(lVar10 + 0xa8) = local_b0;
          *(undefined4 *)(lVar10 + 0xac) = uStack_ac;
          *(undefined4 *)(lVar10 + 0xb0) = uStack_a8;
          *(undefined4 *)(lVar10 + 0xb4) = uStack_a4;
          local_70 = local_70 & 0xfe;
        }
        if ((local_70 & 1) != 0) {
          if ((local_70 & 2) == 0) {
            puVar14 = (undefined8 *)CONCAT44(uStack_ac,local_b0);
          }
          local_70 = local_70 & 0xfe;
          (**(code **)*puVar14)(puVar14,0);
          param_1 = local_210;
          if ((local_70 & 2) == 0) {
            FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
          }
        }
        if (local_d0 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_e8 != (void *)0x0) {
          FUN_1400020a8();
        }
        FUN_1447bda9c(local_f8,local_f0 & 0xffffffff);
        if (local_f8 != 0) {
          FUN_1400020a8();
        }
        if ((local_160 & 1) != 0) {
          ppuVar15 = local_1a0;
          if ((local_160 & 2) != 0) {
            ppuVar15 = (undefined **)&local_1a0;
          }
          local_160 = local_160 & 0xfe;
          (**(code **)*ppuVar15)(ppuVar15,0);
          param_1 = local_210;
          if ((local_160 & 2) == 0) {
            FUN_1400020a8(local_1a0);
          }
        }
        local_1e8 = &PTR_FUN_14ad972e0;
        if (local_1c8 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_1b8 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar8 = lVar8 + 0x28;
      lVar16 = lVar16 + -0x28;
    } while (lVar16 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14052aff0 FUN_14052aff0 body=116 status=ok
// SIG undefined FUN_14052aff0(void)

void FUN_14052aff0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  int iVar1;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = *(undefined4 *)*param_4;
  FUN_1400f0204(param_1 + 0x40,0,param_2);
  iVar1 = *(int *)(param_5 + 1);
  *(int *)(param_5 + 1) = iVar1 + 4;
  if ((uint)(*(int *)((longlong)param_5 + 0xc) - iVar1) < 4) {
    FUN_1447403be(param_5);
  }
  *(undefined4 *)*param_5 = local_14;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14052b066 FUN_14052b066 body=202 status=ok
// SIG undefined FUN_14052b066(void)

void FUN_14052b066(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 auStack_2c [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined4 *)*param_4;
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  auStack_2c[0] = puVar1[3];
  FUN_1400f0204(param_1 + 0x40,0,param_2);
  FUN_1400f0204(param_1 + 0x150,0,param_2,&uStack_34);
  FUN_1400f0204(param_1 + 0x260,0,param_2,&uStack_30);
  FUN_1400f0204(param_1 + 0x370,0,param_2,auStack_2c);
  lVar2 = param_5[1];
  *(int *)(param_5 + 1) = (int)lVar2 + 0x10;
  if ((uint)(*(int *)((longlong)param_5 + 0xc) - (int)lVar2) < 0x10) {
    FUN_1447403be(param_5);
  }
  puVar1 = (undefined4 *)*param_5;
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = auStack_2c[0];
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14052b132 FUN_14052b132 body=638 status=ok
// SIG undefined FUN_14052b132(void)

void FUN_14052b132(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  double *pdVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  float fStack_40;
  undefined4 auStack_3c [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x480);
  if (iVar1 == 3) {
    fStack_40 = *(float *)((undefined8 *)*param_4 + 1);
    local_48 = *(undefined8 *)*param_4;
    FUN_1400f0204(param_1 + 0x40,0,param_2,&local_48);
    FUN_1400f0204(param_1 + 0x150,0,param_2,(longlong)&local_48 + 4);
    FUN_1400f0204(param_1 + 0x260,0,param_2,&fStack_40);
    plVar5 = (longlong *)FUN_144741050(param_3 + 8);
    lVar4 = DAT_14cb42130;
    if ((DAT_14cb42130 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42130);
    }
    if (((*plVar5 == lVar4) && ((short)plVar5[1] == DAT_14cb42138)) &&
       (*(char *)((longlong)plVar5 + 10) == DAT_14cb4213a)) {
      lVar4 = param_5[1];
      *(int *)(param_5 + 1) = (int)lVar4 + 0x18;
      if ((uint)(*(int *)((longlong)param_5 + 0xc) - (int)lVar4) < 0x18) {
        FUN_1447403be(param_5);
      }
      pdVar3 = (double *)*param_5;
      *pdVar3 = (double)(float)local_48;
      pdVar3[1] = (double)local_48._4_4_;
      pdVar3[2] = (double)fStack_40;
      goto LAB_14052b221;
    }
    lVar4 = param_5[1];
    *(int *)(param_5 + 1) = (int)lVar4 + 0xc;
    if ((uint)(*(int *)((longlong)param_5 + 0xc) - (int)lVar4) < 0xc) {
      FUN_1447403be(param_5);
    }
    puVar6 = (undefined8 *)*param_5;
    *(float *)(puVar6 + 1) = fStack_40;
  }
  else {
    if (iVar1 == 4) {
      puVar6 = (undefined8 *)*param_4;
      local_48 = *puVar6;
      fStack_40 = *(float *)(puVar6 + 1);
      auStack_3c[0] = *(undefined4 *)((longlong)puVar6 + 0xc);
      FUN_1400f0204(param_1 + 0x40,0,param_2);
      FUN_1400f0204(param_1 + 0x150,0,param_2,(longlong)&local_48 + 4);
      FUN_1400f0204(param_1 + 0x260,0,param_2,&fStack_40);
      FUN_1400f0204(param_1 + 0x370,0,param_2,auStack_3c);
      lVar4 = param_5[1];
      *(int *)(param_5 + 1) = (int)lVar4 + 0x10;
      if ((uint)(*(int *)((longlong)param_5 + 0xc) - (int)lVar4) < 0x10) {
        FUN_1447403be(param_5);
      }
      puVar2 = (undefined4 *)*param_5;
      *puVar2 = (float)local_48;
      puVar2[1] = local_48._4_4_;
      puVar2[2] = fStack_40;
      puVar2[3] = auStack_3c[0];
      goto LAB_14052b221;
    }
    if (iVar1 != 2) goto LAB_14052b221;
    local_48 = *(undefined8 *)*param_4;
    FUN_1400f0204(param_1 + 0x40,0,param_2);
    FUN_1400f0204(param_1 + 0x150,0,param_2,(longlong)&local_48 + 4);
    lVar4 = param_5[1];
    *(int *)(param_5 + 1) = (int)lVar4 + 8;
    if ((uint)(*(int *)((longlong)param_5 + 0xc) - (int)lVar4) < 8) {
      FUN_1447403be(param_5);
    }
    puVar6 = (undefined8 *)*param_5;
  }
  *puVar6 = local_48;
LAB_14052b221:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14052b3b1 FUN_14052b3b1 body=176 status=ok
// SIG undefined FUN_14052b3b1(void)

void FUN_14052b3b1(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = 0;
    do {
      *(undefined8 *)(param_1 + lVar5) = *(undefined8 *)(param_2 + lVar5);
      lVar2 = *(longlong *)(param_2 + 8 + lVar5);
      *(longlong *)(param_1 + 8 + lVar5) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      lVar2 = param_1 + lVar5;
      lVar1 = param_2 + lVar5;
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
      lVar3 = *(longlong *)(lVar1 + 0x18);
      *(longlong *)(lVar2 + 0x18) = lVar3;
      if ((DAT_14c950c29 == 1) && (lVar3 != 0)) {
        FUN_1456cec3c();
      }
      bVar4 = DAT_14c950c29;
      lVar3 = *(longlong *)(lVar1 + 0x20);
      *(longlong *)(lVar2 + 0x20) = lVar3;
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c();
      }
      *(undefined1 *)(lVar2 + 0x2c) = *(undefined1 *)(lVar1 + 0x2c);
      *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar1 + 0x28);
      lVar5 = lVar5 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14052b462 FUN_14052b462 body=69 status=ok
// SIG undefined FUN_14052b462(void)

void FUN_14052b462(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1448262fc(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14052b4a8(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14052b4a8 FUN_14052b4a8 body=231 status=ok
// SIG undefined FUN_14052b4a8(void)

void FUN_14052b4a8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
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



// FUNCTION 14052b590 FUN_14052b590 body=50 status=ok
// SIG undefined FUN_14052b590(void)

undefined8 * FUN_14052b590(undefined8 *param_1)

{
  FUN_140938dea();
  param_1[1] = &DAT_14cb86c40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b41c0c0;
  return param_1;
}



// FUNCTION 14052b5c2 FUN_14052b5c2 body=30 status=ok
// SIG undefined FUN_14052b5c2(void)

longlong FUN_14052b5c2(longlong param_1)

{
  *(undefined8 *)(param_1 + 4) = 0;
  FUN_14052b5e0();
  return param_1;
}



// FUNCTION 14052b5e0 FUN_14052b5e0 body=257 status=ok
// SIG undefined FUN_14052b5e0(void)

undefined1 FUN_14052b5e0(undefined8 *param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 *local_50;
  code *local_48;
  int **local_40;
  int local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &local_34;
  local_34 = 0;
  local_40 = &local_58;
  local_48 = FUN_140001a12;
  local_50 = param_1;
  if (DAT_14c947fe0 == 0) {
    lVar3 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar3);
    DAT_14c947fe0 = lVar3;
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    local_28 = DAT_14c948620;
    local_30 = DAT_14c948618;
    iVar1 = *local_58;
    *local_58 = iVar1 + 1;
    uVar2 = iVar1 < 1;
    puVar4 = &DAT_14c948618;
    if (iVar1 < 1) {
      puVar4 = &local_30;
    }
    *(undefined4 *)(local_50 + 1) = *(undefined4 *)(puVar4 + 1);
    *local_50 = *puVar4;
  }
  else {
    uVar2 = FUN_1446ded13(DAT_14c947fe0,param_2,param_3,&local_48);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14052b6e2 FUN_14052b6e2 body=350 status=ok
// SIG undefined FUN_14052b6e2(void)

longlong *
FUN_14052b6e2(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,int param_5,
             undefined4 param_6,undefined8 param_7)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  int local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  if ((longlong *)*param_4 == (longlong *)0x0) {
    puVar6 = (undefined8 *)0x0;
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_4 + 0x38))();
    puVar6 = (undefined8 *)*param_4;
  }
  if (param_5 != 0) {
    local_48 = 0;
    local_50 = puVar6 == (undefined8 *)0x0;
    local_60 = param_6;
    local_68 = param_5;
    local_58 = plVar5;
    FUN_1402b3334(&local_40,param_3,param_7);
    if (&local_40 == param_2) {
LAB_14052b81c:
      if (local_40 != 0) {
        LOCK();
        puVar1 = (uint *)(local_40 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    else {
      lVar3 = *param_2;
      *param_2 = local_40;
      local_40 = 0;
      if (lVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
        goto LAB_14052b81c;
      }
    }
    puVar6 = (undefined8 *)*param_4;
  }
  if (puVar6 == (undefined8 *)0x0) goto LAB_14052b747;
  if (plVar5 == (longlong *)0x0) {
LAB_14052b7ed:
    (**(code **)*puVar6)(puVar6,1);
  }
  else {
    iVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if (iVar4 != 0) goto LAB_14052b747;
    puVar6 = (undefined8 *)*param_4;
    if (puVar6 != (undefined8 *)0x0) goto LAB_14052b7ed;
  }
  *param_4 = 0;
LAB_14052b747:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14052b848 FUN_14052b848 body=703 status=ok
// SIG undefined FUN_14052b848(void)

void FUN_14052b848(undefined8 param_1,undefined1 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_208 [32];
  longlong *local_1e8;
  undefined2 *local_1e0;
  undefined8 local_1d8;
  undefined1 *local_1d0;
  code *local_1c8;
  undefined1 (*local_1c0) [16];
  char local_1b8;
  undefined7 uStack_1b7;
  int local_1b0;
  longlong local_1a8 [2];
  longlong local_198 [2];
  undefined8 *local_188;
  int local_180;
  undefined1 local_178 [16] [16];
  longlong local_78;
  undefined1 (*local_70) [16];
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  *param_2 = 0;
  plVar2 = (longlong *)FUN_144a8054c();
  (**(code **)(*plVar2 + 0xc0))(plVar2,&local_188);
  if ((longlong)local_180 == 0) {
    local_180 = 0;
  }
  else {
    auVar9 = pmovsxbw(unaff_XMM6,(char  [8])0x73776f646e6957);
    lVar8 = (longlong)local_180 << 4;
    puVar5 = local_188;
    local_1d8 = param_1;
    local_1d0 = param_2;
    do {
      puVar3 = (undefined8 *)(**(code **)(*(longlong *)*puVar5 + 8))();
      puVar6 = &DAT_149dfb77a;
      if (*(int *)(puVar3 + 1) != 0) {
        puVar6 = (undefined2 *)*puVar3;
      }
      local_78 = 0;
      local_68 = 7;
      local_178[0] = auVar9;
      local_70 = local_178;
      uVar4 = FUN_140b7d41a();
      FUN_140056680(&local_1b8,uVar4);
      puVar7 = &DAT_149dfb77a;
      if (local_1b0 != 0) {
        puVar7 = (undefined2 *)CONCAT71(uStack_1b7,local_1b8);
      }
      local_1e8 = (longlong *)puVar6;
      FUN_140002266(local_1a8,L"%s%s/%s.ini",puVar7,local_178);
      FUN_14052bb92(local_198,local_1a8);
      if (local_1a8[0] != 0) {
        FUN_1400020a8();
      }
      if (CONCAT71(uStack_1b7,local_1b8) != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      local_1b8 = '\0';
      local_1e8 = local_198;
      cVar1 = FUN_14052bb08(DAT_14c872ce0,L"PluginSettings",L"RemapPluginContentToGame",&local_1b8);
      if ((cVar1 != '\0') && (local_1b8 == '\x01')) {
        puVar3 = (undefined8 *)(**(code **)(*(longlong *)*puVar5 + 8))();
        puVar6 = &DAT_149dfb77a;
        local_1e0 = &DAT_149dfb77a;
        if (*(int *)(puVar3 + 1) != 0) {
          puVar6 = (undefined2 *)*puVar3;
        }
        FUN_140002266(local_178,L"/%s/",puVar6);
        if (local_178[0]._8_4_ != 0) {
          local_1e0 = (undefined2 *)local_178[0]._0_8_;
        }
        FUN_1446f470e(local_1a8,local_1e0,1);
        if (local_178[0]._0_8_ != 0) {
          FUN_1400020a8();
        }
        local_178[0]._8_8_ = local_1d8;
        local_178[0]._0_8_ = puVar5;
        local_1c0 = local_178;
        local_1c8 = FUN_142add914;
        FUN_146ff0c84(local_1d8,local_1a8[0]);
        *local_1d0 = 1;
      }
      if (local_198[0] != 0) {
        FUN_1400020a8();
      }
      puVar5 = puVar5 + 2;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
  }
  FUN_140a4981e(local_188,local_180);
  if (local_188 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14052bb08 FUN_14052bb08 body=136 status=ok
// SIG undefined FUN_14052bb08(void)

undefined4 FUN_14052bb08(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 *in_R9;
  undefined8 in_stack_00000028;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined2 *)0x0;
  uStack_20 = 0;
  local_38 = in_stack_00000028;
  uVar2 = FUN_1449da20c();
  if ((char)uVar2 != '\0') {
    puVar3 = local_28;
    if ((int)uStack_20 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    uVar1 = FUN_14052c20c(puVar3);
    *in_R9 = uVar1;
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14052bb92 FUN_14052bb92 body=93 status=ok
// SIG undefined FUN_14052bb92(void)

undefined8 FUN_14052bb92(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14052c168(local_28);
  FUN_1401ae664(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14052bbf0 FUN_14052bbf0 body=204 status=ok
// SIG undefined FUN_14052bbf0(void)

int FUN_14052bbf0(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  longlong lVar9;
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
LAB_14052bc32:
      lVar10 = (longlong)iVar1 * 0xc0;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar9 = 0;
        do {
          uVar6 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar9);
          uVar7 = (ulonglong)uVar6;
          uVar8 = *(ushort *)(*param_3 + lVar9);
          if (uVar6 == uVar8) {
            if (uVar6 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar8 | uVar6)) goto LAB_14052bcb4;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar11 = (ulonglong)uVar8;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar11]) goto LAB_14052bcb4;
          }
          lVar9 = lVar9 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14052bc50;
    }
  }
  return -1;
LAB_14052bcb4:
  if (uVar6 == uVar8) {
    return iVar1;
  }
LAB_14052bc50:
  iVar1 = *(int *)(lVar4 + 0xb8 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14052bc32;
}



// FUNCTION 14052bcbc FUN_14052bcbc body=260 status=ok
// SIG undefined FUN_14052bcbc(void)

longlong FUN_14052bcbc(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_138 [40];
  undefined2 *local_110;
  int local_108;
  undefined1 local_100 [216];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (1 < *(uint *)(param_2 + 8)) {
    lVar2 = FUN_141348652();
    if (lVar2 != 0) goto LAB_14052bcf7;
    if (*(char *)(param_1 + 8) == '\0') {
      FUN_14052bb92(&local_110,param_2);
      lVar2 = FUN_141348652(param_1,&local_110);
      if (lVar2 == 0) {
        puVar3 = local_110;
        if (local_108 == 0) {
          puVar3 = &DAT_149dfb77a;
        }
        lVar2 = 0;
        cVar1 = FUN_1427735ea(puVar3,0);
        if (cVar1 != '\0') {
          FUN_1408e76da(local_100);
          lVar2 = FUN_140d7ae18(param_1,&local_110,local_100);
          FUN_1409263a6(local_100);
          FUN_140fa61d5(lVar2,&local_110,0);
          *(byte *)(lVar2 + 0x50) = *(byte *)(lVar2 + 0x50) | 2;
        }
      }
      if (local_110 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14052bcf7;
    }
  }
  lVar2 = 0;
LAB_14052bcf7:
  if ((local_28 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 14052bdc2 FUN_14052bdc2 body=386 status=ok
// SIG undefined FUN_14052bdc2(void)

void FUN_14052bdc2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined2 *local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined2 *local_70;
  int local_68;
  LARGE_INTEGER local_60 [2];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = FUN_1449da4c4();
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x29) == '\0')) {
    do {
      cVar2 = FUN_14278768a(&DAT_14c873058,param_2);
      if (cVar2 != '\0') goto LAB_14052be92;
      QueryPerformanceCounter(local_60);
    } while (((double)local_60[0].QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(lVar3 + 0x18)
             <= (double)*(float *)(param_1 + 0x50));
    *(undefined1 *)(lVar3 + 0x28) = 1;
LAB_14052be92:
    FUN_140056680(local_60,param_2);
    FUN_146819c6e(&DAT_14c873058,param_2,lVar3);
    *(undefined1 *)(lVar3 + 0x29) = 1;
    uVar1 = DAT_14c872ce0;
    uVar4 = FUN_140b7d41a();
    FUN_140056680(&local_70,uVar4);
    local_90 = local_70;
    if (local_68 == 0) {
      local_90 = &DAT_149dfb77a;
    }
    local_80 = 0;
    local_88 = uVar1;
    local_98 = 1;
    local_a0 = 1;
    local_a8 = 0;
    FUN_14626b15c(local_60,lVar3 + 0x2a,0,0);
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_60[0].QuadPart != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14052bf46 FUN_14052bf46 body=181 status=ok
// SIG undefined FUN_14052bf46(void)

int FUN_14052bf46(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
LAB_14052bf92:
      lVar9 = (longlong)iVar1 * 0x848;
      puVar10 = &DAT_149dfb77a;
      if (*(int *)(lVar2 + 8 + lVar9) != 0) {
        puVar10 = *(undefined2 **)(lVar2 + lVar9);
      }
      lVar8 = 0;
      do {
        uVar6 = *(ushort *)((longlong)puVar10 + lVar8);
        uVar7 = (ulonglong)uVar6;
        uVar4 = *(ushort *)(*param_3 + lVar8);
        if (uVar6 == uVar4) {
          if (uVar6 == 0) {
            return iVar1;
          }
        }
        else {
          if (0x7f < (uVar4 | uVar6)) goto LAB_14052bfdf;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          uVar5 = (ulonglong)uVar4;
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar5]) goto LAB_14052bfdf;
        }
        lVar8 = lVar8 + 2;
      } while( true );
    }
  }
  return -1;
LAB_14052bfdf:
  if (uVar6 == uVar4) {
    return iVar1;
  }
  iVar1 = *(int *)(lVar2 + 0x840 + lVar9);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14052bf92;
}



// FUNCTION 14052bffc FUN_14052bffc body=149 status=ok
// SIG undefined FUN_14052bffc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14052bffc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c867870) {
    FUN_144b3d300(&DAT_14c867870);
    if (DAT_14c867870 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c867830);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c867830,4000);
      DAT_14c867858 = 0;
      _DAT_14c867860 = 0;
      _DAT_14c867868 = 2;
      atexit(FUN_14277fae9);
      _Init_thread_footer(&DAT_14c867870);
    }
  }
  return &DAT_14c867830;
}



// FUNCTION 14052c092 FUN_14052c092 body=214 status=ok
// SIG undefined FUN_14052c092(void)

void FUN_14052c092(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 param_3,
                  undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar9 = uVar6 * 0x10 + -8;
      uVar8 = uVar6;
      while (((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar9) != 0 &&
              (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar9 + -8),
              plVar3 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2,param_3,param_4), cVar5 != '\0'))
            ) {
        lVar9 = lVar9 + -0x10;
        bVar4 = uVar8 < 2;
        uVar8 = uVar8 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_14052c159;
          goto LAB_14052c0c7;
        }
      }
      uVar6 = uVar8 - 1;
      bVar7 = true;
    } while (1 < uVar8);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_14052c159:
    FUN_14109be94(param_1,0);
  }
LAB_14052c0c7:
  if (param_1 == (LPCRITICAL_SECTION)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014052c0dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 14052c168 FUN_14052c168 body=163 status=ok
// SIG undefined FUN_14052c168(void)

undefined8 * FUN_14052c168(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1401ae99a(&local_38);
  *param_1 = local_38;
  *(int *)(param_1 + 1) = local_30;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14052c20c FUN_14052c20c body=1348 status=ok
// SIG undefined FUN_14052c20c(void)

ulonglong FUN_14052c20c(wchar_t *param_1)

{
  code *pcVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ushort uVar11;
  undefined7 uVar13;
  longlong lVar12;
  ulonglong uVar14;
  
  lVar12 = 0;
  lVar4 = FUN_140932b6e();
  while( true ) {
    uVar2 = *(ushort *)((longlong)param_1 + lVar12);
    uVar5 = (ulonglong)uVar2;
    uVar11 = *(ushort *)((longlong)&DAT_149e0617a + lVar12);
    uVar13 = (undefined7)((ulonglong)lVar12 >> 8);
    if (uVar2 != uVar11) {
      if ((uVar11 | uVar2) < 0x80) {
        uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar10 = (ulonglong)uVar11;
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar10]) goto LAB_14052c24b;
      }
      uVar5 = CONCAT71(uVar13,1);
      if (uVar2 == uVar11) goto LAB_14052c372;
      lVar12 = 0;
      goto LAB_14052c282;
    }
    if (uVar2 == 0) break;
LAB_14052c24b:
    lVar12 = lVar12 + 2;
  }
  uVar5 = CONCAT71(uVar13,1);
  goto LAB_14052c372;
LAB_14052c282:
  uVar2 = *(ushort *)((longlong)param_1 + lVar12);
  uVar10 = (ulonglong)uVar2;
  uVar11 = *(ushort *)((longlong)&DAT_149e06384 + lVar12);
  if (uVar2 != uVar11) {
    if ((uVar11 | uVar2) < 0x80) {
      uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      uVar14 = (ulonglong)uVar11;
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
      if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar14]) goto LAB_14052c299;
    }
    if (uVar2 != uVar11) {
      lVar12 = 0;
      goto LAB_14052c2d1;
    }
    goto LAB_14052c372;
  }
  if (uVar2 == 0) goto LAB_14052c372;
LAB_14052c299:
  lVar12 = lVar12 + 2;
  goto LAB_14052c282;
LAB_14052c2d1:
  uVar2 = *(ushort *)((longlong)param_1 + lVar12);
  uVar10 = (ulonglong)uVar2;
  uVar11 = *(ushort *)((longlong)&DAT_149e060ac + lVar12);
  if (uVar2 != uVar11) {
    if ((uVar11 | uVar2) < 0x80) {
      uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      uVar14 = (ulonglong)uVar11;
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
      if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar14]) goto LAB_14052c2e8;
    }
    if (uVar2 != uVar11) {
      plVar9 = *(longlong **)(lVar4 + 0x50);
      plVar7 = (longlong *)*plVar9;
      if (*(code **)(*plVar7 + 0x50) != FUN_144828418) {
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x50))();
      }
      FUN_1447a1fc0(plVar7);
      plVar9 = (longlong *)*plVar9;
      pcVar1 = *(code **)(*plVar9 + 0x28);
      if (pcVar1 == FUN_14482841c) {
        plVar7 = plVar9 + 3;
        if (plVar9[5] != 0) {
          plVar7 = (longlong *)(plVar9[5] + 8);
        }
      }
      else if (pcVar1 == (code *)&LAB_14010c34c) {
        plVar7 = plVar9 + 2;
      }
      else {
        plVar7 = (longlong *)(*pcVar1)();
      }
      if ((int)plVar7[1] == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*plVar7;
      }
      lVar12 = 0;
      goto LAB_14052c38d;
    }
    goto LAB_14052c372;
  }
  if (uVar2 == 0) goto LAB_14052c372;
LAB_14052c2e8:
  lVar12 = lVar12 + 2;
  goto LAB_14052c2d1;
LAB_14052c38d:
  uVar2 = *(ushort *)((longlong)param_1 + lVar12);
  uVar10 = (ulonglong)uVar2;
  uVar11 = *(ushort *)((longlong)puVar6 + lVar12);
  if (uVar2 != uVar11) {
    if ((uVar11 | uVar2) < 0x80) {
      uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      uVar14 = (ulonglong)uVar11;
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
      if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar14]) goto LAB_14052c3a0;
    }
    if (uVar2 != uVar11) {
      plVar9 = *(longlong **)(lVar4 + 0x60);
      plVar7 = (longlong *)*plVar9;
      if (*(code **)(*plVar7 + 0x50) != FUN_144828418) {
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x50))();
      }
      FUN_1447a1fc0(plVar7);
      plVar9 = (longlong *)*plVar9;
      pcVar1 = *(code **)(*plVar9 + 0x28);
      if (pcVar1 == FUN_14482841c) {
        plVar7 = plVar9 + 3;
        if (plVar9[5] != 0) {
          plVar7 = (longlong *)(plVar9[5] + 8);
        }
      }
      else if (pcVar1 == (code *)&LAB_14010c34c) {
        plVar7 = plVar9 + 2;
      }
      else {
        plVar7 = (longlong *)(*pcVar1)();
      }
      if ((int)plVar7[1] == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*plVar7;
      }
      lVar12 = 0;
      goto LAB_14052c43c;
    }
    goto LAB_14052c372;
  }
  if (uVar2 == 0) goto LAB_14052c372;
LAB_14052c3a0:
  lVar12 = lVar12 + 2;
  goto LAB_14052c38d;
LAB_14052c43c:
  uVar2 = *(ushort *)((longlong)param_1 + lVar12);
  uVar10 = (ulonglong)uVar2;
  uVar11 = *(ushort *)((longlong)puVar6 + lVar12);
  if (uVar2 != uVar11) {
    if ((uVar11 | uVar2) < 0x80) {
      uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      uVar14 = (ulonglong)uVar11;
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
      if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar14]) goto LAB_14052c453;
    }
    if (uVar2 != uVar11) {
      lVar12 = 0;
      goto LAB_14052c48b;
    }
    goto LAB_14052c372;
  }
  if (uVar2 == 0) goto LAB_14052c372;
LAB_14052c453:
  lVar12 = lVar12 + 2;
  goto LAB_14052c43c;
LAB_14052c48b:
  uVar2 = *(ushort *)((longlong)param_1 + lVar12);
  uVar5 = (ulonglong)uVar2;
  uVar11 = *(ushort *)((longlong)L"False" + lVar12);
  if (uVar2 != uVar11) {
    if ((uVar11 | uVar2) < 0x80) {
      uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
      uVar10 = (ulonglong)uVar11;
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar10]) goto LAB_14052c4a2;
    }
    if (uVar2 != uVar11) {
      lVar12 = 0;
      goto LAB_14052c4da;
    }
    goto LAB_14052c6e4;
  }
  if (uVar2 == 0) goto LAB_14052c6e4;
LAB_14052c4a2:
  lVar12 = lVar12 + 2;
  goto LAB_14052c48b;
LAB_14052c4da:
  uVar2 = *(ushort *)((longlong)param_1 + lVar12);
  uVar5 = (ulonglong)uVar2;
  uVar11 = *(ushort *)((longlong)&DAT_149e06338 + lVar12);
  if (uVar2 != uVar11) {
    if ((uVar11 | uVar2) < 0x80) {
      uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
      uVar10 = (ulonglong)uVar11;
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar10]) goto LAB_14052c4f1;
    }
    if (uVar2 != uVar11) {
      lVar12 = 0;
      goto LAB_14052c529;
    }
    goto LAB_14052c6e4;
  }
  if (uVar2 == 0) goto LAB_14052c6e4;
LAB_14052c4f1:
  lVar12 = lVar12 + 2;
  goto LAB_14052c4da;
LAB_14052c529:
  uVar2 = *(ushort *)((longlong)param_1 + lVar12);
  uVar5 = (ulonglong)uVar2;
  uVar11 = *(ushort *)((longlong)&DAT_149e1d734 + lVar12);
  if (uVar2 != uVar11) {
    if ((uVar11 | uVar2) < 0x80) {
      uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
      uVar10 = (ulonglong)uVar11;
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar10]) goto LAB_14052c540;
    }
    if (uVar2 != uVar11) {
      plVar7 = *(longlong **)(lVar4 + 0x58);
      plVar9 = (longlong *)*plVar7;
      if (*(code **)(*plVar9 + 0x50) != FUN_144828418) {
        plVar9 = (longlong *)(**(code **)(*plVar9 + 0x50))();
      }
      FUN_1447a1fc0(plVar9);
      plVar9 = (longlong *)*plVar7;
      pcVar1 = *(code **)(*plVar9 + 0x28);
      if (pcVar1 == FUN_14482841c) {
        plVar8 = plVar9 + 3;
        if (plVar9[5] != 0) {
          plVar8 = (longlong *)(plVar9[5] + 8);
        }
      }
      else if (pcVar1 == (code *)&LAB_14010c34c) {
        plVar8 = plVar9 + 2;
      }
      else {
        plVar8 = (longlong *)(*pcVar1)();
      }
      if ((int)plVar8[1] == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*plVar8;
      }
      lVar12 = 0;
      goto LAB_14052c5de;
    }
    goto LAB_14052c6e4;
  }
  if (uVar2 == 0) goto LAB_14052c6e4;
LAB_14052c540:
  lVar12 = lVar12 + 2;
  goto LAB_14052c529;
LAB_14052c5de:
  uVar2 = *(ushort *)((longlong)param_1 + lVar12);
  uVar5 = (ulonglong)uVar2;
  uVar11 = *(ushort *)((longlong)puVar6 + lVar12);
  if (uVar2 != uVar11) {
    if ((uVar11 | uVar2) < 0x80) {
      uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
      uVar10 = (ulonglong)uVar11;
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar10]) goto LAB_14052c5f5;
    }
    if (uVar2 != uVar11) {
      plVar8 = *(longlong **)(lVar4 + 0x68);
      plVar9 = (longlong *)*plVar8;
      if (*(code **)(*plVar9 + 0x50) != FUN_144828418) {
        plVar9 = (longlong *)(**(code **)(*plVar9 + 0x50))();
      }
      FUN_1447a1fc0(plVar9);
      plVar8 = (longlong *)*plVar8;
      pcVar1 = *(code **)(*plVar8 + 0x28);
      if (pcVar1 == FUN_14482841c) {
        plVar9 = plVar8 + 3;
        if (plVar8[5] != 0) {
          plVar9 = (longlong *)(plVar8[5] + 8);
        }
      }
      else if (pcVar1 == (code *)&LAB_14010c34c) {
        plVar9 = plVar8 + 2;
      }
      else {
        plVar9 = (longlong *)(*pcVar1)();
      }
      if ((int)plVar9[1] == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*plVar9;
      }
      lVar4 = 0;
      goto LAB_14052c693;
    }
    goto LAB_14052c6e4;
  }
  if (uVar2 == 0) goto LAB_14052c6e4;
LAB_14052c5f5:
  lVar12 = lVar12 + 2;
  goto LAB_14052c5de;
LAB_14052c693:
  uVar2 = *(ushort *)((longlong)param_1 + lVar4);
  uVar5 = (ulonglong)uVar2;
  uVar11 = *(ushort *)((longlong)puVar6 + lVar4);
  if (uVar2 == uVar11) {
    if (uVar2 == 0) goto LAB_14052c6e4;
LAB_14052c6a6:
    lVar4 = lVar4 + 2;
    goto LAB_14052c693;
  }
  if ((uVar11 | uVar2) < 0x80) {
    uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    uVar10 = (ulonglong)uVar11;
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar10]) goto LAB_14052c6a6;
  }
  if (uVar2 != uVar11) {
    iVar3 = _wtoi(param_1);
    uVar5 = CONCAT71((int7)((ulonglong)plVar7 >> 8),iVar3 != 0);
    goto LAB_14052c372;
  }
LAB_14052c6e4:
  uVar5 = 0;
LAB_14052c372:
  return uVar5 & 0xffffffff;
}



// FUNCTION 14052c750 FUN_14052c750 body=70 status=ok
// SIG undefined FUN_14052c750(void)

void FUN_14052c750(longlong param_1)

{
  FUN_14052c7cd(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14052c796(param_1);
  return;
}



// FUNCTION 14052c796 FUN_14052c796 body=55 status=ok
// SIG undefined FUN_14052c796(void)

void FUN_14052c796(longlong *param_1)

{
  FUN_14052c86e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14052c7cd FUN_14052c7cd body=161 status=ok
// SIG undefined FUN_14052c7cd(void)

void FUN_14052c7cd(longlong param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    param_1 = param_1 + 0x48;
    do {
      *(undefined4 *)(param_1 + 0x48) = 0;
      if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_14052c796(param_1);
      plVar1 = (longlong *)(param_1 + -0x30);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(param_1 + -0x10) * 0x120));
      if (pcVar2 != (code *)0x0) {
        plVar3 = plVar1;
        if (0x18 < *(ushort *)(param_1 + -0x18)) {
          plVar3 = (longlong *)*plVar1;
        }
        (*pcVar2)(plVar3);
      }
      if (0x18 < *(ushort *)(param_1 + -0x18)) {
        FUN_1400020a8(*plVar1);
      }
      if (*(longlong *)(param_1 + -0x48) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0x98;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14052c86e FUN_14052c86e body=121 status=ok
// SIG undefined FUN_14052c86e(void)

void FUN_14052c86e(longlong param_1,int param_2)

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
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14052c8e8 FUN_14052c8e8 body=77 status=ok
// SIG undefined FUN_14052c8e8(void)

void FUN_14052c8e8(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  FUN_14052c94c(param_1 + 2,param_2,uVar1);
  return;
}



// FUNCTION 14052c94c FUN_14052c94c body=106 status=ok
// SIG undefined FUN_14052c94c(void)

void FUN_14052c94c(longlong *param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  if (0 < (int)param_3) {
    uVar4 = 0;
    do {
      puVar2 = *(undefined8 **)(*(longlong *)(param_2 + 0x10) + uVar4 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = *(undefined8 **)(*param_1 + uVar4 * 8);
        if (puVar3 != puVar2) {
          *(undefined8 **)(*param_1 + uVar4 * 8) = puVar2;
          LOCK();
          *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
          UNLOCK();
          if (puVar3 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar3 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (param_3 != uVar4);
  }
  return;
}



// FUNCTION 14052c9b6 FUN_14052c9b6 body=702 status=ok
// SIG undefined FUN_14052c9b6(void)

undefined8 * FUN_14052c9b6(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [128];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = &PTR_FUN_14a350f40;
  param_1[0xe] = &PTR_LAB_14a350f80;
  if ((*(int *)(param_1 + 0xd) != -1) && (*(char *)((longlong)param_1 + 0x6c) != -1)) {
    FUN_144b1ad1a(param_1[0xc] + 0x60,param_1 + 0xe);
    uVar7 = *(uint *)(param_1 + 0x10);
    if (uVar7 == 0) {
      uVar4 = 0x20;
    }
    else {
      uVar4 = 0;
      if (uVar7 != 0) {
        for (; (uVar7 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
    }
    puVar6 = (undefined8 *)(param_1[(ulonglong)uVar4 + 0x11] + 0x80);
    if (param_1[(ulonglong)uVar4 + 0x11] == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    if (puVar6 == param_1 + 0x10) {
      FUN_14736baba(param_1[0xf] + 0x6b0,param_1[0xd]);
    }
  }
  uVar7 = *(uint *)(param_1 + 0x10);
  if (uVar7 == 0) {
    uVar4 = 0x20;
  }
  else {
    uVar4 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
  }
  lVar9 = param_1[(ulonglong)uVar4 + 0x11];
  puVar6 = (undefined8 *)(lVar9 + 0x80);
  if (lVar9 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  if (puVar6 != param_1 + 0x10) goto LAB_14052ca7a;
  local_50 = (undefined1 *)0x0;
  local_48 = 0x800000000;
  bVar2 = (byte)uVar4 & 0x1f;
  uVar7 = uVar7 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  if (uVar7 == 0) {
LAB_14052ca5f:
    FUN_14052cc76(local_d0);
  }
  else {
    uVar4 = 0;
    if (uVar7 != 0) {
      for (; (uVar7 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    uVar8 = (ulonglong)uVar4;
    lVar9 = *(longlong *)(lVar9 + 0x88 + uVar8 * 8);
    if (lVar9 != 0) {
      do {
        uVar3 = local_48;
        lVar10 = (longlong)(int)local_48;
        uVar4 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,uVar4);
        if (local_48._4_4_ < uVar4) {
          FUN_147389a52(local_d0,uVar3 & 0xffffffff);
        }
        puVar5 = local_50;
        if (local_50 == (undefined1 *)0x0) {
          puVar5 = local_d0;
        }
        *(ulonglong *)(puVar5 + lVar10 * 0x10) = (ulonglong)uVar7 | uVar8 << 0x20;
        *(longlong *)(puVar5 + lVar10 * 0x10 + 8) = lVar9;
        bVar2 = (byte)uVar8 & 0x1f;
        uVar7 = uVar7 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        if (uVar7 == 0) break;
        uVar4 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        uVar8 = (ulonglong)uVar4;
        lVar9 = *(longlong *)(lVar9 + 0x88 + uVar8 * 8);
      } while (lVar9 != 0);
      lVar9 = (longlong)(int)local_48;
      puVar5 = local_d0;
      if (local_50 != (undefined1 *)0x0) {
        puVar5 = local_50;
      }
      if (lVar9 != 0) {
        lVar10 = 0;
        do {
          LOCK();
          puVar1 = (uint *)(*(longlong *)(puVar5 + lVar10 + 8) + 8);
          uVar7 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar7 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
          lVar10 = lVar10 + 0x10;
        } while (lVar9 * 0x10 != lVar10);
      }
    }
    uVar8 = local_48 >> 0x20;
    local_48 = local_48 & 0xffffffff00000000;
    if ((int)uVar8 != 0) goto LAB_14052ca5f;
  }
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_14052ca7a:
  *param_1 = &PTR_FUN_14a37fd30;
  if (param_1[0xc] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xc] + 8);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar7 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14052cc76 FUN_14052cc76 body=89 status=ok
// SIG undefined FUN_14052cc76(void)

void FUN_14052cc76(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x8c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x80),
              (longlong)*(int *)((longlong)param_1 + 0x88) << 4);
      FUN_1446efa72((longlong)param_1 + 0x80,0,0,0x10);
      return;
    }
  }
  return;
}



// FUNCTION 14052ccd0 FUN_14052ccd0 body=281 status=ok
// SIG undefined FUN_14052ccd0(void)

undefined8 FUN_14052ccd0(longlong param_1,uint *param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint *puVar6;
  uint *puVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  uVar1 = param_2[1];
  uVar3 = (ulonglong)uVar1;
  if (uVar1 == 0) {
LAB_14052cdd6:
    lVar8 = 0;
  }
  else {
    uVar2 = *param_2;
    lVar8 = 0;
    bVar10 = false;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14052cd4f;
    plVar9 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar9 == (longlong *)0x0) || (*(uint *)(plVar9 + 2) != uVar1)) goto LAB_14052cdd6;
    if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
      lVar8 = *plVar9;
    }
    else {
      lVar8 = 0;
    }
    uVar3 = (ulonglong)*(uint *)(plVar9 + 1);
    if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
      bVar10 = *plVar9 != 0;
      goto LAB_14052cd4f;
    }
  }
  bVar10 = false;
LAB_14052cd4f:
  uVar4 = CONCAT71((int7)(uVar3 >> 8),1);
  if (((byte)(~bVar10 & (byte)((param_2[0xb7] & 2) >> 1)) == 0) &&
     ((param_1 == 0 || (param_2[0xba] == *(uint *)(param_1 + 0x84))))) {
    param_2[0xb0] = param_4;
    if ((param_2[0xb7] & 1) != 0) {
      puVar6 = param_2 + 8;
      puVar7 = param_2 + 0x48;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
        puVar6 = puVar6 + 2;
        puVar7 = puVar7 + 2;
      }
      puVar6 = param_2 + 0x28;
      puVar7 = param_2 + 0x68;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *(undefined8 *)puVar7 = *(undefined8 *)puVar6;
        puVar6 = puVar6 + 2;
        puVar7 = puVar7 + 2;
      }
      param_2[0xac] = param_2[0xa8];
      param_2[0xad] = param_2[0xa9];
      param_2[0xae] = param_2[0xaa];
      param_2[0xaf] = param_2[0xab];
      FUN_14052cdea(param_2,lVar8);
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 14052cdea FUN_14052cdea body=1624 status=ok
// SIG undefined FUN_14052cdea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14052cdea(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  int iVar21;
  longlong lVar22;
  double *pdVar23;
  uint uVar24;
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
  double *pdVar27;
  double *pdVar28;
  double *pdVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  
  pdVar28 = (double *)(param_1 + 0x220);
  pdVar23 = (double *)(param_3 + 0x50);
  pdVar27 = pdVar28;
  for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
    *pdVar27 = *pdVar23;
    pdVar23 = pdVar23 + 1;
    pdVar27 = pdVar27 + 1;
  }
  if (param_2 == 0) {
    pdVar23 = (double *)(param_1 + 0x230);
    pdVar27 = (double *)(param_1 + 0x240);
    pdVar29 = (double *)(param_1 + 0x250);
    pauVar26 = (undefined1 (*) [16])(param_1 + 0x260);
    pauVar25 = (undefined1 (*) [16])(param_1 + 0x270);
  }
  else {
    pdVar28 = (double *)(param_2 + 0x240);
    pdVar23 = (double *)(param_2 + 0x250);
    pdVar27 = (double *)(param_2 + 0x260);
    pdVar29 = (double *)(param_2 + 0x270);
    pauVar26 = (undefined1 (*) [16])(param_2 + 0x280);
    pauVar25 = (undefined1 (*) [16])(param_2 + 0x290);
  }
  auVar39 = *pauVar25;
  auVar46 = *pauVar26;
  dVar8 = auVar46._0_8_;
  dVar9 = auVar46._8_8_;
  dVar3 = *pdVar29;
  dVar6 = *pdVar27;
  dVar7 = pdVar27[1];
  dVar16 = *pdVar23;
  dVar17 = pdVar23[1];
  dVar18 = *pdVar28;
  dVar19 = pdVar28[1];
  dVar2 = *pdVar28;
  dVar40 = pdVar23[1];
  dVar34 = pdVar23[1];
  *(float *)(param_1 + 8) = (float)(dVar6 - *(double *)(param_1 + 0x240));
  *(float *)(param_1 + 0xc) = (float)(dVar7 - *(double *)(param_1 + 0x248));
  *(float *)(param_1 + 0x10) = (float)(dVar3 - *(double *)(param_1 + 0x250));
  fVar1 = *(float *)(param_3 + 0x10);
  dVar30 = (double)*(float *)(param_3 + 0x14) * -65536.0;
  *(double *)(param_1 + 0x280) = (double)*(float *)(param_3 + 0xc) * -65536.0;
  *(double *)(param_1 + 0x288) = (double)fVar1 * -65536.0;
  *(double *)(param_1 + 0x290) = dVar30;
  auVar20 = _DAT_149934d80;
  dVar30 = dVar30 + dVar3;
  dVar33 = dVar19 + dVar19;
  dVar31 = dVar16 + dVar16;
  dVar43 = dVar18 * (dVar18 + dVar18);
  dVar3 = (double)DAT_149934d80;
  dVar4 = DAT_149934d80._8_8_;
  dVar11 = (dVar4 - (dVar16 * dVar31 + dVar43)) * dVar9;
  dVar14 = dVar31 * dVar40;
  dVar34 = (dVar18 + dVar18) * dVar34;
  dVar40 = dVar33 * dVar40;
  dVar41 = auVar39._0_8_;
  dVar32 = (dVar31 * dVar19 - dVar34) * dVar41;
  dVar6 = dVar6 + *(double *)(param_1 + 0x280);
  dVar7 = dVar7 + *(double *)(param_1 + 0x288);
  dVar15 = (dVar33 * dVar18 + dVar14) * dVar8;
  auVar13._8_4_ = SUB84(dVar15,0);
  auVar13._0_8_ = (dVar3 - (dVar16 * dVar31 + dVar19 * dVar33)) * dVar8;
  auVar13._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x20) = auVar13;
  *(double *)(param_1 + 0x30) = (dVar2 * dVar31 - dVar40) * dVar8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  auVar10._8_4_ = SUB84(dVar11,0);
  auVar10._0_8_ = (dVar33 * dVar18 - dVar14) * dVar9;
  auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar10;
  *(double *)(param_1 + 0x50) = (dVar31 * dVar19 + dVar34) * dVar9;
  *(undefined8 *)(param_1 + 0x58) = 0;
  auVar12._8_4_ = SUB84(dVar32,0);
  auVar12._0_8_ = (dVar2 * dVar31 + dVar40) * dVar41;
  auVar12._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar12;
  *(double *)(param_1 + 0x70) = (1.0 - (dVar43 + dVar19 * dVar33)) * dVar41;
  *(undefined8 *)(param_1 + 0x78) = 0;
  auVar5._8_4_ = SUB84(dVar7,0);
  auVar5._0_8_ = dVar6;
  auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar5;
  *(double *)(param_1 + 0x90) = dVar30;
  *(undefined8 *)(param_1 + 0x98) = 0x3ff0000000000000;
  auVar44._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar9));
  auVar44._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar8));
  iVar21 = movmskpd((int)pdVar23,auVar44);
  auVar45._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar39._8_8_));
  auVar45._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar41));
  uVar24 = movmskpd((int)pauVar25,auVar45);
  uVar35 = (undefined4)DAT_14c846480;
  uVar36 = DAT_14c846480._4_4_;
  uVar37 = (undefined4)DAT_14c846488;
  uVar38 = DAT_14c846488._4_4_;
  dVar32 = DAT_14c8464c0;
  dVar33 = DAT_14c8464c8;
  dVar40 = DAT_14c846498;
  dVar34 = DAT_14c8464d0;
  dVar31 = DAT_14c8464b0;
  dVar2 = DAT_14c846490;
  dVar11 = DAT_14c8464a0;
  dVar43 = DAT_14c8464a8;
  if ((uVar24 & 0x3fffffff) != 0 || iVar21 != 0) {
    auVar46 = divpd(auVar20,auVar46);
    auVar39 = divpd(ZEXT816(0x3ff0000000000000),auVar39);
    dVar32 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar8)) & auVar46._0_8_);
    dVar33 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar9)) & auVar46._8_8_);
    dVar34 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar41)) & auVar39._0_8_);
    dVar8 = -dVar18;
    dVar9 = -dVar19;
    dVar2 = dVar16 * -1.0;
    dVar40 = dVar17 * 1.0;
    dVar6 = dVar6 * dVar32;
    dVar7 = dVar7 * dVar33;
    dVar30 = dVar30 * dVar34;
    dVar43 = dVar7 * dVar8 - dVar9 * dVar6;
    dVar14 = dVar30 * dVar9 - dVar2 * dVar7;
    dVar15 = dVar6 * dVar2 - dVar8 * dVar30;
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar43 = dVar43 + dVar43;
    uVar35 = SUB84(dVar18,0);
    uVar36 = (int)((ulonglong)dVar8 >> 0x20);
    uVar37 = SUB84(dVar19,0);
    uVar38 = (int)((ulonglong)dVar9 >> 0x20);
    dVar31 = 0.0 - (dVar40 * dVar43 + dVar30 + (dVar15 * dVar8 - dVar14 * dVar9));
    dVar11 = 0.0 - ((dVar43 * dVar9 - dVar15 * dVar2) + dVar40 * dVar14 + dVar6);
    dVar43 = 0.0 - (dVar43 * dVar18 + dVar2 * dVar14 + dVar40 * dVar15 + dVar7);
  }
  dVar15 = (double)CONCAT44(uVar36,uVar35) + (double)CONCAT44(uVar36,uVar35);
  dVar30 = (double)CONCAT44(uVar38,uVar37) + (double)CONCAT44(uVar38,uVar37);
  dVar41 = dVar2 + dVar2;
  dVar7 = (double)CONCAT44(uVar36,uVar35) * dVar15;
  dVar14 = (double)CONCAT44(uVar38,uVar37) * dVar30;
  dVar8 = dVar30 * (double)CONCAT44(uVar36,uVar35);
  dVar9 = dVar41 * (double)CONCAT44(uVar38,uVar37);
  dVar15 = dVar15 * dVar40;
  dVar6 = (dVar9 - dVar15) * dVar34;
  dVar42 = dVar41 * (double)CONCAT44(uVar36,uVar35);
  *(double *)(param_1 + 0xa0) = (dVar3 - (dVar2 * dVar41 + dVar14)) * dVar32;
  *(double *)(param_1 + 0xa8) = (dVar8 - dVar41 * dVar40) * dVar33;
  *(double *)(param_1 + 0xb0) = (dVar42 + dVar30 * dVar40) * dVar34;
  *(double *)(param_1 + 0xb8) = dVar11;
  *(double *)(param_1 + 0xc0) = (dVar8 + dVar41 * dVar40) * dVar32;
  auVar39._8_4_ = SUB84(dVar6,0);
  auVar39._0_8_ = (dVar4 - (dVar2 * dVar41 + dVar7)) * dVar33;
  auVar39._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 200) = auVar39;
  *(double *)(param_1 + 0xd8) = dVar43;
  *(double *)(param_1 + 0xe0) = (dVar42 - dVar30 * dVar40) * dVar32;
  *(double *)(param_1 + 0xe8) = (dVar9 + dVar15) * dVar33;
  *(double *)(param_1 + 0xf0) = (1.0 - (dVar7 + dVar14)) * dVar34;
  *(double *)(param_1 + 0xf8) = dVar31;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0x3ff0000000000000;
  *(float *)(param_1 + 0x2a0) = (float)dVar18;
  *(float *)(param_1 + 0x2a4) = (float)dVar19;
  *(float *)(param_1 + 0x2a8) = (float)dVar16;
  *(float *)(param_1 + 0x2ac) = (float)dVar17;
  return;
}



// FUNCTION 14052d442 FUN_14052d442 body=95 status=ok
// SIG undefined FUN_14052d442(void)

void FUN_14052d442(undefined8 param_1,undefined8 *param_2,undefined2 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined2 local_a;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined4 *)(param_2 + 1);
  local_20 = *param_2;
  local_10 = param_5;
  local_14 = param_4;
  local_a = param_3;
  FUN_1449da5a2(param_1,&local_a);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14052d4a2 FUN_14052d4a2 body=544 status=ok
// SIG undefined FUN_14052d4a2(void)

void FUN_14052d4a2(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x20);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar3 < 2) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 1;
    _Src = *(void **)((longlong)param_1 + 0x18);
joined_r0x00014052d657:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x14);
    param_2 = 0;
    uVar7 = 0;
  }
  else {
    if (*(uint *)((longlong)param_1 + 0x24) < 2) {
      uVar6 = 4;
      if (4 < uVar3) {
        uVar6 = uVar3;
      }
      lVar4 = (longlong)(int)uVar6;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
    }
    uVar7 = lVar4 * 0x14;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar7 + 0xf;
        if (uVar7 < 0x7ff1) {
          uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14052d538;
              lVar4 = uVar5 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar4 != 0x33);
          }
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
        }
      }
      else {
        uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
      }
    }
LAB_14052d538:
    uVar7 = uVar7 / 0x14;
    uVar6 = (uint)uVar7;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0x7fffffff;
      uVar7 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x18);
    }
    else {
      *(uint *)((longlong)param_1 + 0x24) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x18);
      if (uVar6 < 2) goto joined_r0x00014052d657;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x18,0,uVar7,0x14);
      memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0x14);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,uVar7,0x14);
  return;
}



// FUNCTION 14052d6c2 FUN_14052d6c2 body=624 status=ok
// SIG undefined FUN_14052d6c2(void)

void FUN_14052d6c2(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  
  plVar7 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar7,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar7 != 0) {
      FUN_1446efa72(plVar7,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar7,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_14052d724;
  }
  uVar4 = 0;
  do {
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = plVar1;
    }
    *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
         0xffffffff;
    uVar4 = uVar4 + 1;
  } while (uVar9 != uVar4);
LAB_14052d724:
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar5 = 0;
    uVar13 = 1;
    iVar14 = 0;
    iVar6 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar14 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar14 = iVar3 + -1;
      }
      uVar5 = 0;
      uVar13 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar13 = uVar5;
      }
      iVar6 = 0;
      do {
        if (uVar13 == uVar5) {
          return;
        }
        iVar6 = iVar6 + 0x20;
        uVar9 = puVar12[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar5 = 0;
      iVar6 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar2 = uVar13 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar14 = (iVar6 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar14) {
      iVar14 = iVar3;
    }
  }
  if (iVar14 < iVar3) {
    uVar9 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar15 = (longlong)iVar14 * 0x38;
      uVar4 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar8 + lVar15);
      *(uint *)(lVar8 + 0x34 + lVar15) = uVar4;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(lVar8 + 0x30 + lVar15) =
           *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar4) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar4) * 4) = iVar14;
      uVar9 = ~(uint)uVar13 & uVar9;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar14 = (int)uVar5;
      lVar8 = (longlong)iVar14;
      uVar4 = puVar12[lVar8] & uVar9;
      if (uVar4 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar14) {
          iVar11 = iVar14;
        }
        if (iVar10 <= iVar14) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar6 = iVar6 + 0x20;
          uVar4 = puVar12[lVar8 + lVar15 + 1];
          if (uVar4 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar11 - lVar8 == lVar15) {
            return;
          }
        }
        uVar5 = (ulonglong)(iVar14 + (int)lVar15 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar2 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar14 = (iVar6 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar3);
  }
  return;
}



// FUNCTION 14052d932 FUN_14052d932 body=1274 status=ok
// SIG undefined FUN_14052d932(void)

void FUN_14052d932(longlong param_1,longlong param_2)

{
  void *_Dst;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  code *pcVar11;
  longlong lVar12;
  undefined8 uVar13;
  char cVar14;
  int iVar15;
  undefined8 ****ppppuVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  undefined8 *puVar28;
  double dVar29;
  undefined1 auStack_f8 [32];
  undefined8 ***local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ushort local_c0;
  byte local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (0 < *(int *)(param_1 + 0x448)) {
    if (*(int *)(param_1 + 0x538) == 0) {
      dVar29 = (*(double *)(param_1 + 0x4e0) + *(double *)(param_1 + 0x4f8)) * 0.5;
      if (((*(float *)(param_1 + 0x524) == 3.4028235e+38) && (!NAN(*(float *)(param_1 + 0x524)))) &&
         ((*(float *)(param_1 + 0x520) != 0.0 || (NAN(*(float *)(param_1 + 0x520)))))) {
        dVar29 = *(double *)(param_1 + 0x518);
      }
      uVar23 = *(uint *)(param_1 + 0x44c);
      if (0 < (int)uVar23) {
        dVar1 = *(double *)(param_1 + 0x4d0);
        dVar2 = *(double *)(param_1 + 0x4d8);
        dVar3 = *(double *)(param_1 + 0x4f0);
        dVar4 = *(double *)(param_1 + 0x4e8);
        iVar18 = *(int *)(param_1 + 0x454);
        iVar15 = iVar18 / 2;
        dVar5 = *(double *)(param_1 + 0x428);
        iVar25 = *(int *)(param_1 + 0x450);
        iVar20 = iVar25 / 2;
        dVar6 = *(double *)(param_1 + 0x420);
        uVar21 = uVar23 >> 1;
        dVar7 = *(double *)(param_1 + 0x418);
        iVar19 = 0;
        do {
          if (0 < iVar25) {
            dVar8 = *(double *)(param_1 + 0x418);
            iVar27 = 0;
            do {
              if (0 < iVar18) {
                dVar9 = *(double *)(param_1 + 0x420);
                iVar25 = 0;
                do {
                  dVar10 = *(double *)(param_1 + 0x428);
                  iVar18 = *(int *)(param_1 + 0x538);
                  lVar26 = (longlong)iVar18;
                  *(uint *)(param_1 + 0x538) = iVar18 + 1U;
                  if (*(uint *)(param_1 + 0x53c) < iVar18 + 1U) {
                    FUN_1403e3958((longlong *)(param_1 + 0x530),iVar18);
                  }
                  lVar17 = *(longlong *)(param_1 + 0x530);
                  *(double *)(lVar17 + lVar26 * 0x18) =
                       (double)(float)((double)iVar19 * dVar8 +
                                      (double)(float)((dVar1 + dVar4) * 0.5 - (double)uVar21 * dVar7
                                                     ));
                  *(double *)(lVar17 + 8 + lVar26 * 0x18) =
                       (double)(float)((double)iVar27 * dVar9 +
                                      (double)(float)((dVar2 + dVar3) * 0.5 - (double)iVar20 * dVar6
                                                     ));
                  *(double *)(lVar17 + 0x10 + lVar26 * 0x18) =
                       (double)(float)((double)iVar25 * dVar10 +
                                      (double)(float)(dVar29 - (double)iVar15 * dVar5));
                  iVar25 = iVar25 + 1;
                  iVar18 = *(int *)(param_1 + 0x454);
                } while (iVar25 < iVar18);
                iVar25 = *(int *)(param_1 + 0x450);
              }
              iVar27 = iVar27 + 1;
            } while (iVar27 < iVar25);
            uVar23 = *(uint *)(param_1 + 0x44c);
          }
          iVar19 = iVar19 + 1;
        } while (iVar19 < (int)uVar23);
        iVar18 = *(int *)(param_1 + 0x538);
        if (0 < (longlong)iVar18) {
          lVar26 = *(longlong *)(param_1 + 0x40);
          lVar17 = 0;
          uVar22 = 0;
          do {
            uVar23 = *(int *)(lVar26 + 0x4ec) * 0xbb38435 + 0x3619636b;
            *(uint *)(lVar26 + 0x4ec) = uVar23;
            uVar23 = (uint)(((float)(uVar23 >> 9 | 0x3f800000) + -1.0) * (float)iVar18);
            if (uVar22 != uVar23) {
              lVar12 = *(longlong *)(param_1 + 0x530);
              lVar24 = (longlong)(int)uVar23;
              local_c8 = *(undefined8 *)(lVar12 + 0x10 + lVar17);
              local_d8 = *(undefined8 ****)(lVar12 + lVar17);
              uStack_d0 = ((undefined8 *)(lVar12 + lVar17))[1];
              *(undefined8 *)(lVar12 + 0x10 + lVar17) =
                   *(undefined8 *)(lVar12 + 0x10 + lVar24 * 0x18);
              puVar28 = (undefined8 *)(lVar12 + lVar24 * 0x18);
              uVar13 = puVar28[1];
              *(undefined8 *)(lVar12 + lVar17) = *puVar28;
              ((undefined8 *)(lVar12 + lVar17))[1] = uVar13;
              *(undefined8 *)(lVar12 + 0x10 + lVar24 * 0x18) = local_c8;
              puVar28 = (undefined8 *)(lVar12 + lVar24 * 0x18);
              *puVar28 = local_d8;
              puVar28[1] = uStack_d0;
            }
            uVar22 = uVar22 + 1;
            lVar17 = lVar17 + 0x18;
          } while ((longlong)iVar18 * 0x18 != lVar17);
        }
      }
    }
    iVar18 = 0;
    do {
      do {
        iVar25 = *(int *)(param_1 + 0x540);
        if (*(int *)(param_1 + 0x538) <= iVar25) goto LAB_14052dacd;
        *(int *)(param_1 + 0x540) = iVar25 + 1;
        puVar28 = (undefined8 *)((longlong)iVar25 * 0x18 + *(longlong *)(param_1 + 0x530));
        cVar14 = FUN_14052de2e(param_1 + 0x460,puVar28);
      } while (cVar14 == '\0');
      iVar25 = *(int *)(param_2 + 0x388);
      *(uint *)(param_2 + 0x388) = iVar25 + 1U;
      if (*(uint *)(param_2 + 0x38c) < iVar25 + 1U) {
        FUN_14052e0a0(param_2,iVar25);
      }
      lVar26 = *(longlong *)(param_2 + 0x380);
      if (*(longlong *)(param_2 + 0x380) == 0) {
        lVar26 = param_2;
      }
      _Dst = (void *)(lVar26 + (longlong)iVar25 * 0x38);
      local_c0 = 0x18;
      local_d8 = (undefined8 ***)*puVar28;
      uStack_d0 = puVar28[1];
      local_c8 = puVar28[2];
      local_b8 = 4;
      *(undefined2 *)(lVar26 + 0x18 + (longlong)iVar25 * 0x38) = 0x18;
      if (DAT_14c9a8a30 == (code *)0x0) {
        memcpy(_Dst,&local_d8,(longlong)DAT_14c9a8990);
      }
      else {
        (*DAT_14c9a8a30)(_Dst,&local_d8);
      }
      *(byte *)((longlong)_Dst + 0x20) = local_b8;
      *(undefined8 *)((longlong)_Dst + 0x28) = 0;
      *(undefined8 *)((longlong)_Dst + 0x30) = 0;
      pcVar11 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b8 * 0x120));
      if (pcVar11 != (code *)0x0) {
        ppppuVar16 = &local_d8;
        if (0x18 < local_c0) {
          ppppuVar16 = (undefined8 ****)local_d8;
        }
        (*pcVar11)(ppppuVar16);
      }
      if (0x18 < local_c0) {
        FUN_1400020a8(local_d8);
      }
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(int *)(param_1 + 0x544));
  }
LAB_14052dacd:
  if ((local_b0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14052de2e FUN_14052de2e body=625 status=ok
// SIG undefined FUN_14052de2e(void)

char FUN_14052de2e(undefined4 *param_1,double *param_2)

{
  float fVar1;
  char cVar2;
  undefined **ppuVar3;
  undefined1 auStack_108 [40];
  undefined4 *local_e0;
  double *local_d8;
  char *local_d0;
  char local_c1;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined1 local_90;
  int local_84;
  undefined **local_80;
  double *local_78;
  undefined4 *local_70;
  undefined4 **local_68;
  undefined ***local_60;
  undefined ***local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_98 = param_2[2] + 0.5;
  local_a0 = param_2[1] + 0.5;
  local_a8 = *param_2 + 0.5;
  local_b0 = param_2[2] + -0.5;
  local_b8 = param_2[1] + -0.5;
  local_c0 = *param_2 + -0.5;
  local_90 = 1;
  if (*(char *)((longlong)param_1 + 0xca) == '\x01') {
    local_d0 = &local_c1;
    local_c1 = '\0';
    local_68 = &local_e0;
    local_70 = param_1 + 0xe;
    ppuVar3 = &PTR_LAB_14ac8c6f0;
    local_80 = &PTR_LAB_14ac8c6f0;
    local_78 = &local_c0;
    local_e0 = param_1;
    local_d8 = param_2;
    local_60 = &local_80;
    local_48 = &local_80;
    if (param_1[0x12] == -1) {
LAB_14052e085:
      (*(code *)ppuVar3[4])(local_48,local_48 != &local_80);
    }
    else {
      local_84 = param_1[0x12];
      FUN_143887974(&local_80);
      if (local_48 != (undefined ***)0x0) {
        ppuVar3 = *local_48;
        goto LAB_14052e085;
      }
    }
    if (local_c1 != '\0') {
      cVar2 = '\0';
      goto LAB_14052dfb2;
    }
  }
  cVar2 = '\x01';
  if (*(char *)(param_1 + 0x32) == '\0') {
    fVar1 = (float)param_1[0x30];
    if ((0.0 < fVar1) &&
       ((float)((*param_2 - *(double *)(param_1 + 0x2a)) * (*param_2 - *(double *)(param_1 + 0x2a))
               + (param_2[1] - *(double *)(param_1 + 0x2c)) *
                 (param_2[1] - *(double *)(param_1 + 0x2c))) <= fVar1 * fVar1)) {
      fVar1 = (float)param_1[0x31];
      if (((fVar1 == 3.4028235e+38) && (!NAN(fVar1))) ||
         (ABS(param_2[2] - *(double *)(param_1 + 0x2e)) <= (double)fVar1)) goto LAB_14052dfb2;
    }
    local_d0 = &local_c1;
    local_c1 = '\0';
    local_68 = &local_e0;
    ppuVar3 = &PTR_LAB_14ac8c720;
    local_80 = &PTR_LAB_14ac8c720;
    local_78 = &local_c0;
    local_e0 = param_1;
    local_d8 = param_2;
    local_70 = param_1;
    local_60 = &local_80;
    local_48 = &local_80;
    if (param_1[4] != -1) {
      local_84 = param_1[4];
      FUN_14052e20c(&local_80);
      cVar2 = local_c1;
      if (local_48 == (undefined ***)0x0) goto LAB_14052dfb2;
      ppuVar3 = *local_48;
    }
    (*(code *)ppuVar3[4])(local_48,local_48 != &local_80);
    cVar2 = local_c1;
  }
LAB_14052dfb2:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar2;
}



// FUNCTION 14052e0a0 FUN_14052e0a0 body=363 status=ok
// SIG undefined FUN_14052e0a0(void)

void FUN_14052e0a0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar3 = *(uint *)(param_1 + 0x388);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0x11) {
    iVar9 = 0x10;
  }
  else {
    lVar5 = (longlong)(int)uVar3;
    if (0x10 < *(uint *)(param_1 + 0x38c)) {
      lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
    }
    uVar6 = lVar5 * 0x38;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar6 + 0xf;
        if (uVar6 < 0x7ff1) {
          uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar8 = 0x32;
            if (0x32 < bVar2) {
              uVar8 = (ulonglong)bVar2;
            }
            uVar10 = 0x32 - (ulonglong)bVar2;
            do {
              uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_14052e132;
              lVar5 = uVar8 + 1 + uVar10;
              uVar10 = uVar10 - 1;
            } while (lVar5 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = (ulonglong)DAT_14c841df8;
          }
          uVar6 = -uVar6 & ((uVar1 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
      }
    }
LAB_14052e132:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar6 >> 3;
    iVar7 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    iVar9 = 0x7fffffff;
    if ((int)uVar3 <= iVar7) {
      iVar9 = iVar7;
    }
  }
  *(int *)(param_1 + 0x38c) = iVar9;
  FUN_14023b334(param_1,param_2,iVar9,0x38);
  return;
}



// FUNCTION 14052e20c FUN_14052e20c body=306 status=ok
// SIG undefined FUN_14052e20c(void)

void FUN_14052e20c(longlong param_1,int *param_2)

{
  longlong lVar1;
  double dVar2;
  double *pdVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar3 = *(double **)(param_1 + 8);
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar5 = *(longlong *)(lVar4 + 0x28);
  lVar8 = (longlong)*param_2 * 200;
  dVar2 = *(double *)(lVar5 + 0x90 + lVar8);
  if (dVar2 < pdVar3[3] || dVar2 == pdVar3[3]) {
    lVar1 = lVar5 + lVar8;
    if ((((*pdVar3 < *(double *)(lVar1 + 0xa8) || *pdVar3 == *(double *)(lVar1 + 0xa8)) &&
         (*(double *)(lVar1 + 0x98) < pdVar3[4] || *(double *)(lVar1 + 0x98) == pdVar3[4])) &&
        (pdVar3[1] < *(double *)(lVar1 + 0xb0) || pdVar3[1] == *(double *)(lVar1 + 0xb0))) &&
       ((*(double *)(lVar1 + 0xa0) < pdVar3[5] || *(double *)(lVar1 + 0xa0) == pdVar3[5] &&
        (pdVar3[2] < *(double *)(lVar1 + 0xb8) || pdVar3[2] == *(double *)(lVar1 + 0xb8))))) {
      if (*(int *)(lVar5 + 0x84 + lVar8) != -1) {
        local_2c = *(undefined4 *)(lVar5 + 0x80 + lVar8);
        plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x38);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,&local_2c);
          local_2c = *(undefined4 *)(*(longlong *)(lVar4 + 0x28) + 0x84 + lVar8);
          plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x38);
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6,&local_2c);
            goto LAB_14052e2f0;
          }
        }
                    /* WARNING: Subroutine does not return */
        std::_Xbad_function_call();
      }
      plVar6 = *(longlong **)(param_1 + 0x18);
      cVar7 = FUN_145d340a8(*(longlong *)(*plVar6 + 0x28) + lVar8 + 0x10,plVar6[1]);
      if (cVar7 != '\0') {
        *(undefined1 *)plVar6[2] = 1;
      }
    }
  }
LAB_14052e2f0:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14052e340 FUN_14052e340 body=176 status=ok
// SIG undefined FUN_14052e340(void)

void FUN_14052e340(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *(undefined2 *)(param_1 + 0x84) = 0;
  lVar2 = *(longlong *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x94) != 0) {
    uVar1 = *(uint *)(param_1 + 0x90);
    lVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14052e3ba;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       (((int)plVar3[2] == *(int *)(param_1 + 0x94) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))
       ) {
      lVar4 = *plVar3;
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar4);
      }
      goto LAB_14052e3ba;
    }
  }
  lVar4 = 0;
LAB_14052e3ba:
  *(longlong *)(param_1 + 0x88) = lVar4;
  *(bool *)(param_1 + 0x99) = lVar4 != lVar2;
  FUN_14052e3f0(param_1,param_2);
  return;
}



// FUNCTION 14052e3f0 FUN_14052e3f0 body=1136 status=ok
// SIG undefined FUN_14052e3f0(void)

void FUN_14052e3f0(longlong param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *(longlong *)(param_1 + 0x28);
  if ((lVar5 == 0) || (lVar1 = *(longlong *)(lVar5 + 0x3258), lVar1 == 0)) goto LAB_14052e45e;
  if (*(longlong *)(param_1 + 0x88) == 0) {
LAB_14052e43a:
    bVar7 = 0;
  }
  else {
    plVar3 = *(longlong **)(lVar5 + 0x3d0);
    if (plVar3 == (longlong *)0x0) {
LAB_14052e5af:
      lVar5 = 0;
    }
    else {
      if (DAT_14cb223d8 == 0) {
        local_60 = &local_48;
        local_48 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_1427b09ee;
        local_68 = &LAB_147f29feb;
        local_70 = FUN_1464384fe;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10004001;
        local_90 = 8;
        local_98 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,DAT_14cb223d8);
      if (plVar3 == (longlong *)0x0) goto LAB_14052e5af;
      if (DAT_14cb223d8 == 0) {
        local_60 = &local_48;
        local_48 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_1427b09ee;
        local_68 = &LAB_147f29feb;
        local_70 = FUN_1464384fe;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10004001;
        local_90 = 8;
        local_98 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar4 = (longlong *)FUN_144718840(plVar3,DAT_14cb223d8);
      lVar5 = 0;
      if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
        lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x88);
    if (plVar3 == (longlong *)0x0) {
LAB_14052e5b6:
      lVar6 = 0;
    }
    else {
      if (DAT_14cb223d8 == 0) {
        local_60 = &local_48;
        local_48 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_1427b09ee;
        local_68 = &LAB_147f29feb;
        local_70 = FUN_1464384fe;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10004001;
        local_90 = 8;
        local_98 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,DAT_14cb223d8);
      if (plVar3 == (longlong *)0x0) goto LAB_14052e5b6;
      if (DAT_14cb223d8 == 0) {
        local_60 = &local_48;
        local_48 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_1427b09ee;
        local_68 = &LAB_147f29feb;
        local_70 = FUN_1464384fe;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10004001;
        local_90 = 8;
        local_98 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar4 = (longlong *)FUN_144718840(plVar3,DAT_14cb223d8);
      lVar6 = 0;
      if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
        lVar6 = (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    if (lVar5 == 0) goto LAB_14052e43a;
    iVar2 = FUN_14486116a(lVar5,*(undefined8 *)(param_1 + 0x88));
    if (iVar2 != 0) goto LAB_14052e43a;
    if (lVar6 == 0) {
      bVar7 = 1;
    }
    else {
      bVar7 = *(byte *)(lVar6 + 0x53);
    }
  }
  if (*(byte *)(param_1 + 0x168) == bVar7) {
    fVar8 = *(float *)(param_1 + 0x16c);
    bVar7 = *(byte *)(param_1 + 0x168);
  }
  else {
    *(byte *)(param_1 + 0x168) = bVar7;
    fVar8 = *(float *)(lVar1 + 0x84 + (ulonglong)(bVar7 ^ 1) * 4);
    *(float *)(param_1 + 0x16c) = fVar8;
  }
  if (0.0 <= fVar8) {
    *(float *)(param_1 + 0x16c) = fVar8 - param_2;
    if (fVar8 - param_2 < 0.0) {
      *(byte *)(param_1 + 0x170) = bVar7;
    }
  }
LAB_14052e45e:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14052e862 FUN_14052e862 body=228 status=ok
// SIG undefined FUN_14052e862(void)

void FUN_14052e862(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (uint *)*param_2;
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar3 = *(longlong *)(lVar2 + 0x20);
  lVar5 = 0;
  local_60 = lVar3 + (ulonglong)puVar1[6];
  if ((ulonglong)puVar1[6] == 0xffffffff) {
    local_60 = lVar5;
  }
  local_68 = lVar3 + (ulonglong)puVar1[5];
  if ((ulonglong)puVar1[5] == 0xffffffff) {
    local_68 = lVar5;
  }
  lVar4 = lVar3 + (ulonglong)puVar1[4];
  if ((ulonglong)puVar1[4] == 0xffffffff) {
    lVar4 = lVar5;
  }
  local_50 = lVar3 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    local_50 = lVar5;
  }
  local_48 = lVar3 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_48 = lVar5;
  }
  local_40 = lVar3 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_40 = lVar5;
  }
  lVar3 = lVar3 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar3 = lVar5;
  }
  FUN_14052e948(lVar2,lVar3,&local_50,lVar4);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14052e948 FUN_14052e948 body=2881 status=ok
// SIG undefined FUN_14052e948(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14052e948(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  int iVar1;
  float fVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auStack_1c8 [40];
  longlong local_1a0;
  double local_198;
  longlong local_190;
  double local_188;
  double dStack_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  double local_120;
  undefined1 local_118 [4];
  int local_114;
  undefined1 local_110;
  int local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_190 = param_4;
  local_160 = param_2;
  if (*(ushort *)(param_1 + 0xe) != 0) {
    local_168 = *param_3;
    local_170 = param_3[1];
    local_178 = param_3[2];
    local_1a0 = (ulonglong)*(ushort *)(param_1 + 0xe) << 3;
    local_158 = 0;
    uStack_150 = 0x3ff0000000000000;
    lVar9 = 0;
    do {
      plVar8 = (longlong *)(local_168 + lVar9);
      if (local_168 == 0) {
        plVar8 = (longlong *)0x0;
      }
      plVar11 = (longlong *)(local_170 + lVar9);
      if (local_170 == 0) {
        plVar11 = (longlong *)0x0;
      }
      plVar10 = (longlong *)(local_178 + lVar9);
      iVar1 = *(int *)(local_160 + lVar9);
      fVar2 = *(float *)(local_160 + 4 + lVar9);
      if (local_178 == 0) {
        plVar10 = (longlong *)0x0;
      }
      local_118[0] = 1;
      local_114 = -0x80000000;
      local_110 = 0;
      local_10c = 0x7fffffff;
      if (plVar8 != (longlong *)0x0) {
        local_148 = *(double *)(*plVar8 + 0x58);
        dStack_140 = (double)CONCAT44(dStack_140._4_4_,*(undefined4 *)(*plVar8 + 0x60));
        FUN_1449daa8a(CONCAT44(fVar2,iVar1),&local_148,local_118);
      }
      if (plVar11 != (longlong *)0x0) {
        local_148 = *(double *)(*plVar11 + 0x58);
        dStack_140 = (double)CONCAT44(dStack_140._4_4_,*(undefined4 *)(*plVar11 + 0x60));
        FUN_1449daa8a(CONCAT44(fVar2,iVar1),&local_148,local_118);
      }
      if (plVar10 != (longlong *)0x0) {
        local_148 = *(double *)(*plVar10 + 0x58);
        dStack_140 = (double)CONCAT44(dStack_140._4_4_,*(undefined4 *)(*plVar10 + 0x60));
        FUN_1449daa8a(CONCAT44(fVar2,iVar1),&local_148,local_118);
      }
      iVar6 = local_10c;
      iVar5 = local_114;
      if (local_10c == 0x7fffffff || local_114 == -0x80000000) {
        if (plVar8 == (longlong *)0x0) {
          uVar26 = 0;
          uVar28 = 0;
        }
        else {
          cVar7 = FUN_140108ba0(*plVar8,0,CONCAT44(fVar2,iVar1),&local_120);
          if (cVar7 == '\0') {
            uVar26 = 0;
            uVar28 = 0;
          }
          else {
            uVar26 = SUB84(local_120,0);
            uVar28 = (undefined4)((ulonglong)local_120 >> 0x20);
          }
        }
        uVar27 = 0;
        uVar29 = 0;
        if ((plVar11 != (longlong *)0x0) &&
           (cVar7 = FUN_140108ba0(*plVar11,0,CONCAT44(fVar2,iVar1),&local_120), cVar7 != '\0')) {
          uVar27 = SUB84(local_120,0);
          uVar29 = (undefined4)((ulonglong)local_120 >> 0x20);
        }
        uVar31 = 0;
        uVar30 = 0;
        if ((plVar10 != (longlong *)0x0) &&
           (cVar7 = FUN_140108ba0(*plVar10,0,CONCAT44(fVar2,iVar1),&local_120), cVar7 != '\0')) {
          uVar30 = SUB84(local_120,0);
          uVar31 = (undefined4)((ulonglong)local_120 >> 0x20);
        }
        lVar4 = local_1a0;
        auVar19._4_4_ = uVar29;
        auVar19._0_4_ = uVar27;
        auVar19._12_4_ = uVar31;
        auVar19._8_4_ = uVar30;
        auVar19 = divpd(auVar19,_DAT_1499387d0);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = (double)CONCAT44(uVar28,uVar26) / 360.0;
        auVar19 = roundpd(auVar19,auVar19,3);
        auVar18 = roundpd(auVar18,auVar18,3);
        dVar37 = ((double)CONCAT44(uVar29,uVar27) - auVar19._0_8_ * (double)DAT_1499387d0) *
                 0.008726646259971648;
        dVar12 = ((double)CONCAT44(uVar31,uVar30) - auVar19._8_8_ * DAT_1499387d0._8_8_) *
                 0.008726646259971648;
        dVar15 = ((double)CONCAT44(uVar28,uVar26) - auVar18._0_8_ * (double)DAT_1499387d0) *
                 0.008726646259971648;
        dVar35 = (0.0 - auVar18._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar39 = sin(dVar37);
        dVar13 = sin(dVar12);
        dVar32 = sin(dVar15);
        sin(dVar35);
        dVar14 = cos(dVar37);
        dVar12 = cos(dVar12);
        dVar15 = cos(dVar15);
        cos(dVar35);
        dVar37 = dVar13 * dVar39 * dVar32 + dVar12 * dVar14 * dVar15;
        local_148 = dVar39 * dVar13 * dVar15 - dVar14 * dVar12 * dVar32;
        dStack_140 = -(dVar39 * dVar12 * dVar15) - dVar14 * dVar13 * dVar32;
        local_138._8_4_ = SUB84(dVar37,0);
        local_138._0_8_ = -(dVar12 * dVar39 * dVar32) + dVar13 * dVar14 * dVar15;
        local_138._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
        FUN_1448052ee(&local_148,&local_108);
        if (plVar8 != (longlong *)0x0) {
          *(undefined8 *)(local_190 + lVar9) = local_f8;
        }
      }
      else {
        dVar37 = (((double)fVar2 + (double)iVar1) - (double)local_114) /
                 (double)(local_10c - local_114);
        if (1.0 <= dVar37) {
          dVar37 = 1.0;
        }
        uVar26 = 0;
        uVar28 = 0;
        dVar12 = 0.0;
        if (plVar8 != (longlong *)0x0) {
          cVar7 = FUN_140108ba0(*plVar8,0,local_114,&local_120);
          uVar26 = 0;
          uVar28 = 0;
          dVar12 = local_120;
          if (cVar7 == '\0') {
            dVar12 = 0.0;
          }
          cVar7 = FUN_140108ba0(*plVar8,0,iVar6,&local_120);
          if (cVar7 != '\0') {
            uVar26 = SUB84(local_120,0);
            uVar28 = (undefined4)((ulonglong)local_120 >> 0x20);
          }
        }
        if (plVar11 == (longlong *)0x0) {
          uVar27 = 0;
          uVar29 = 0;
          auVar34 = ZEXT816(0);
        }
        else {
          cVar7 = FUN_140108ba0(*plVar11,0,iVar5,&local_120);
          uVar27 = 0;
          uVar29 = 0;
          dVar39 = local_120;
          if (cVar7 == '\0') {
            dVar39 = 0.0;
          }
          auVar34._8_8_ = 0;
          auVar34._0_8_ = dVar39;
          cVar7 = FUN_140108ba0(*plVar11,0,iVar6,&local_120);
          if (cVar7 != '\0') {
            uVar27 = SUB84(local_120,0);
            uVar29 = (undefined4)((ulonglong)local_120 >> 0x20);
          }
        }
        uVar31 = 0;
        uVar30 = 0;
        local_198 = dVar37;
        if (dVar37 <= 0.0) {
          local_198 = 0.0;
        }
        local_188 = (double)CONCAT44(uVar28,uVar26);
        dStack_180 = 0.0;
        if (plVar10 != (longlong *)0x0) {
          cVar7 = FUN_140108ba0(*plVar10,0,iVar5,&local_120);
          if (cVar7 != '\0') {
            auVar34._8_8_ = local_120;
          }
          cVar7 = FUN_140108ba0(*plVar10,0,iVar6,&local_120);
          if (cVar7 != '\0') {
            uVar30 = SUB84(local_120,0);
            uVar31 = (undefined4)((ulonglong)local_120 >> 0x20);
          }
        }
        lVar4 = local_1a0;
        auVar19 = _DAT_1499387d0;
        dVar37 = (double)DAT_1499387d0;
        dVar39 = DAT_1499387d0._8_8_;
        auVar18 = divpd(auVar34,_DAT_1499387d0);
        auVar21._8_8_ = 0;
        auVar21._0_8_ = dVar12 / 360.0;
        auVar18 = roundpd(auVar18,auVar18,3);
        auVar22 = roundpd(auVar21,auVar21,3);
        dVar32 = (auVar34._0_8_ - auVar18._0_8_ * dVar37) * 0.008726646259971648;
        dVar35 = (auVar34._8_8_ - auVar18._8_8_ * dVar39) * 0.008726646259971648;
        dVar36 = (dVar12 - auVar22._0_8_ * dVar37) * 0.008726646259971648;
        dVar38 = (0.0 - auVar22._8_8_ * dVar39) * 0.008726646259971648;
        dVar12 = sin(dVar32);
        dVar13 = sin(dVar35);
        dVar14 = sin(dVar36);
        sin(dVar38);
        dVar15 = cos(dVar32);
        dVar16 = cos(dVar35);
        dVar36 = cos(dVar36);
        cos(dVar38);
        dVar33 = -(dVar16 * dVar12 * dVar14) + dVar13 * dVar15 * dVar36;
        dVar35 = dVar13 * dVar12 * dVar14 + dVar16 * dVar15 * dVar36;
        dVar32 = dVar12 * dVar13 * dVar36 - dVar15 * dVar16 * dVar14;
        dVar14 = -(dVar12 * dVar16 * dVar36) - dVar15 * dVar13 * dVar14;
        auVar22._4_4_ = uVar29;
        auVar22._0_4_ = uVar27;
        auVar22._12_4_ = uVar31;
        auVar22._8_4_ = uVar30;
        auVar19 = divpd(auVar22,auVar19);
        auVar23._0_8_ = local_188 / 360.0;
        auVar23._8_8_ = 0;
        auVar19 = roundpd(auVar19,auVar19,3);
        auVar18 = roundpd(auVar23,auVar23,3);
        dVar12 = ((double)CONCAT44(uVar29,uVar27) - auVar19._0_8_ * dVar37) * 0.008726646259971648;
        dVar13 = ((double)CONCAT44(uVar31,uVar30) - auVar19._8_8_ * dVar39) * 0.008726646259971648;
        dVar37 = (local_188 - auVar18._0_8_ * dVar37) * 0.008726646259971648;
        dVar39 = (0.0 - auVar18._8_8_ * dVar39) * 0.008726646259971648;
        dVar15 = sin(dVar12);
        dVar16 = sin(dVar13);
        dVar36 = sin(dVar37);
        sin(dVar39);
        dVar38 = cos(dVar12);
        dVar13 = cos(dVar13);
        dVar17 = cos(dVar37);
        cos(dVar39);
        dVar37 = -(dVar13 * dVar15 * dVar36) + dVar16 * dVar38 * dVar17;
        dVar12 = dVar16 * dVar15 * dVar36 + dVar13 * dVar38 * dVar17;
        dVar39 = dVar15 * dVar16 * dVar17 - dVar38 * dVar13 * dVar36;
        dVar13 = -(dVar15 * dVar13 * dVar17) - dVar38 * dVar16 * dVar36;
        dVar15 = dVar12 * dVar35 + dVar33 * dVar37 + dVar13 * dVar14 + dVar32 * dVar39;
        dVar16 = dVar15 * (double)(&DAT_149931160)[0.0 <= dVar15];
        dVar36 = 1.0 - local_198;
        dVar15 = local_198 * (double)(&DAT_149931160)[0.0 <= dVar15];
        if (dVar16 < 0.9999) {
          dVar38 = dVar16;
          if (1.0 <= dVar16) {
            dVar38 = 1.0;
          }
          local_188 = dVar35;
          dStack_180 = dVar35;
          local_198 = acos((double)(-(ulonglong)(dVar16 < -1.0) & 0xbff0000000000000 |
                                   ~-(ulonglong)(dVar16 < -1.0) & (ulonglong)dVar38));
          dVar35 = sin(local_198);
          dVar36 = sin(dVar36 * local_198);
          dVar36 = dVar36 * (1.0 / dVar35);
          dVar15 = sin(dVar15 * local_198);
          dVar15 = dVar15 * (1.0 / dVar35);
          dVar35 = local_188;
        }
        dVar35 = dVar36 * dVar35 + dVar12 * dVar15;
        dVar16 = dVar33 * dVar36 + dVar37 * dVar15;
        dVar37 = dVar14 * dVar36 + dVar13 * dVar15;
        dVar12 = dVar32 * dVar36 + dVar15 * dVar39;
        dVar39 = dVar16 * dVar16 + dVar12 * dVar12;
        dVar13 = dVar35 * dVar35 + dVar37 * dVar37;
        auVar24._0_8_ = dVar39 + dVar13;
        auVar24._8_8_ = dVar39 + dVar13;
        auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_);
        auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_);
        auVar19 = sqrtpd(auVar24,auVar24);
        auVar19 = divpd(_DAT_149934d80,auVar19);
        auVar25._0_8_ = auVar19._0_8_ * dVar16;
        auVar25._8_8_ = auVar19._8_8_ * dVar35;
        local_148 = (double)((ulonglong)(dVar12 * auVar19._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_));
        dStack_140 = (double)((ulonglong)(dVar37 * auVar19._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_));
        auVar3._8_8_ = uStack_150;
        auVar3._0_8_ = local_158;
        local_138 = blendvpd(auVar3,auVar25,auVar20);
        FUN_1448052ee(&local_148,&local_108);
        if (plVar8 != (longlong *)0x0) {
          *(undefined8 *)(local_190 + lVar9) = local_f8;
        }
      }
      if (plVar11 != (longlong *)0x0) {
        *(undefined8 *)(param_5 + lVar9) = local_108;
      }
      if (plVar10 != (longlong *)0x0) {
        *(undefined8 *)(param_6 + lVar9) = local_100;
      }
      lVar9 = lVar9 + 8;
    } while (lVar4 != lVar9);
  }
  if ((local_f0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14052f48a FUN_14052f48a body=63 status=ok
// SIG undefined FUN_14052f48a(void)

void FUN_14052f48a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_14052f4ca(param_7,param_6,param_3,param_4,param_2,param_5,param_7,param_8,&DAT_14cad0f08);
  return;
}



// FUNCTION 14052f4ca FUN_14052f4ca body=404 status=ok
// SIG undefined FUN_14052f4ca(void)

undefined4
FUN_14052f4ca(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_a9;
  undefined8 *local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_118 = *param_4;
  uStack_110 = param_4[1];
  local_108 = *(undefined4 *)(param_4 + 2);
  uStack_104 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_100 = *(undefined4 *)(param_4 + 3);
  uStack_fc = *(undefined4 *)((longlong)param_4 + 0x1c);
  uVar6 = *param_3;
  uVar5 = param_3[1];
  uVar2 = *(undefined8 *)(param_3 + 2);
  uVar3 = *(undefined8 *)(param_3 + 4);
  FUN_144a73fdc(local_a8,&local_118,param_2);
  local_118 = local_98;
  uStack_110 = uStack_90;
  local_108 = local_88;
  uStack_104 = uStack_84;
  uStack_100 = uStack_80;
  uStack_fc = uStack_7c;
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  local_120 = &local_a9;
  local_128 = param_9;
  local_138 = param_7;
  uStack_130 = param_8;
  local_140 = param_6;
  local_148 = param_5;
  local_f8 = uVar6;
  uStack_f4 = uVar5;
  uStack_f0 = (int)uVar2;
  uStack_ec = (int)((ulonglong)uVar2 >> 0x20);
  local_e8 = uVar3;
  uVar6 = FUN_1408bb035(param_1,local_a8[0],param_2,&local_118);
  if (local_a8[0] != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_a8[0] + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)local_a8[0] + 0xc) == 0)) {
      pcVar4 = *(code **)*local_a8[0];
      if ((pcVar4 == FUN_141724e50) || (pcVar4 == FUN_141724e26)) {
        *local_a8[0] = &PTR_FUN_149f553e0;
        FUN_1400020a8();
      }
      else {
        (*pcVar4)(local_a8[0],1);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14052f660 FUN_14052f660 body=179 status=ok
// SIG undefined FUN_14052f660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14052f660(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  FUN_14052f714();
  LOCK();
  *(int *)(param_1 + 0x770) = *(int *)(param_1 + 0x770) + 1;
  UNLOCK();
  puVar2 = *(undefined8 **)(param_1 + 0x768);
  do {
    if (puVar2 == (undefined8 *)0x0) {
      LOCK();
      *(int *)(param_1 + 0x770) = *(int *)(param_1 + 0x770) + -1;
      UNLOCK();
      return;
    }
    lVar3 = puVar2[2];
    if ((lVar3 != 0) && ((*(uint *)(lVar3 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar3 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar3 = lVar3 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_14052f6d9:
          if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
            LOCK();
            *(int *)(param_1 + 0x770) = *(int *)(param_1 + 0x770) + -1;
            UNLOCK();
            FUN_14052f7ec();
            return;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar3 = 0;
        goto LAB_14052f6d9;
      }
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}



// FUNCTION 14052f714 FUN_14052f714 body=216 status=ok
// SIG undefined FUN_14052f714(void)

void FUN_14052f714(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  
  lVar1 = param_1 + -0x20;
  cVar4 = (**(code **)(*(longlong *)(param_1 + -0x20) + 0x70))(lVar1);
  if ((((cVar4 != '\0') && (*(int *)(param_1 + -0x14) != 0)) &&
      (uVar2 = *(uint *)(param_1 + -0x18), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + -0x14))) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar3 = *plVar5, lVar3 != 0)))) {
      *(float *)(param_1 + 0x1b0) = *(float *)(lVar3 + 0x6f4) + *(float *)(param_1 + 0x1b0);
      *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar3 + 0x930);
      FUN_141510208(lVar1);
      FUN_1437eba82(lVar1);
      FUN_141800d70(lVar1);
      FUN_1437ec29a(lVar1);
      FUN_1448c1206(lVar1);
      FUN_140510930(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14052f7ec FUN_14052f7ec body=166 status=ok
// SIG undefined FUN_14052f7ec(void)

void FUN_14052f7ec(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14052f894(param_1 + 0xf88,0);
  cVar2 = *(char *)(param_1 + 0xf20);
  if (cVar2 != '\0') {
    local_48 = *(undefined8 *)(param_1 + 0x260);
    uStack_40 = *(undefined8 *)(param_1 + 0x268);
    local_38 = *(undefined8 *)(param_1 + 0x270);
    lVar1 = *(longlong *)(param_1 + 0xb0);
    if (lVar1 == 0) {
      lVar1 = FUN_1448abda6(param_1);
      cVar2 = *(char *)(param_1 + 0xf20);
    }
    FUN_14052f912(local_30,cVar2,lVar1,&local_48);
    FUN_14052f9ee(param_1,local_30,0);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14052f894 FUN_14052f894 body=126 status=ok
// SIG undefined FUN_14052f894(void)

void FUN_14052f894(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14052f912 FUN_14052f912 body=219 status=ok
// SIG undefined FUN_14052f912(void)

undefined8 *
FUN_14052f912(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [38];
  byte local_32;
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_140927dcc(param_2,param_3,param_4);
  if (lVar1 != 0) {
    uVar2 = FUN_1402a1570(param_3,lVar1);
    FUN_1402a10ba(&local_32,param_3,uVar2,param_4);
    if ((local_31 != '\0') && ((int)(uint)local_32 < *(int *)(lVar1 + 0x68))) {
      lVar1 = *(longlong *)(lVar1 + 0x60);
      uVar3 = (ulonglong)((uint)local_32 * 0x30);
      *param_1 = *(undefined8 *)(lVar1 + uVar3);
      uVar2 = FUN_14477b664(*(undefined8 *)(lVar1 + 8 + uVar3));
      uVar2 = FUN_14477b664(uVar2);
      param_1[1] = uVar2;
      param_1[2] = *(undefined8 *)(lVar1 + 0x10 + uVar3);
      if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 14052f9ee FUN_14052f9ee body=975 status=ok
// SIG undefined FUN_14052f9ee(void)

void FUN_14052f9ee(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  bool bVar16;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar10 = FUN_1400d690e(param_1 + 0x13b);
  lVar12 = param_2[1];
  if (lVar12 == 0) {
    uVar11 = FUN_140927942();
    lVar12 = FUN_14477b664(uVar11);
    param_2[1] = lVar12;
  }
  lVar13 = param_2[2];
  if (((lVar13 == 0) && (lVar13 = 0, lVar12 != 0)) && (*param_2 != 0)) {
    plVar3 = *(longlong **)(lVar12 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) {
      lVar13 = 0;
    }
    else {
      uVar11 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar13 = FUN_144aff482(uVar11,param_2);
    }
    param_2[2] = lVar13;
  }
  if (lVar10 == lVar13) goto LAB_14052fd45;
  if (param_3 != '\0') {
    FUN_140af9c32(param_1);
  }
  (**(code **)(*param_1 + 0xaa8))(param_1);
  lVar12 = param_2[1];
  if (lVar12 == 0) {
    uVar11 = FUN_140927942();
    lVar12 = FUN_14477b664(uVar11);
    param_2[1] = lVar12;
  }
  lVar10 = param_2[2];
  if (lVar10 == 0) {
    if ((lVar12 != 0) && (*param_2 != 0)) {
      plVar3 = *(longlong **)(lVar12 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) {
        param_2[2] = 0;
      }
      else {
        uVar11 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar10 = FUN_144aff482(uVar11,param_2);
        param_2[2] = lVar10;
        if (lVar10 != 0) goto LAB_14052fb39;
      }
    }
    local_40 = 0;
  }
  else {
LAB_14052fb39:
    puVar15 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar10 + 8) != (undefined4 *)0x0) {
      puVar15 = *(undefined4 **)(lVar10 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar12 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar12);
      DAT_14c947fe0 = lVar12;
    }
    FUN_140045924(DAT_14c947fe0,&local_40,puVar15,1);
  }
  if (param_1[0x13b] != local_40) {
    param_1[0x13d] = 0;
  }
  param_1[0x13b] = local_40;
  (**(code **)(*param_1 + 0xab0))(param_1);
  plVar3 = (longlong *)param_1[0x105];
  if (plVar3 == (longlong *)0x0) {
LAB_14052fc65:
    if ((uint)*(ushort *)((longlong)param_1 + 0x9da) < DAT_14c87eb08 + 1U) {
      FUN_14092811c(param_1);
    }
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_14052fc65;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar16 = iVar7 == iVar5;
      if (bVar16) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar16);
    lVar12 = param_1[0x104];
    if (lVar12 == 0) {
      if ((uint)*(ushort *)((longlong)param_1 + 0x9da) < DAT_14c87eb08 + 1U) {
        FUN_14092811c(param_1);
      }
    }
    else {
      lVar10 = param_1[0x13b];
      if (*(int *)(lVar12 + 0x200) != (int)param_1[0x13c] || *(longlong *)(lVar12 + 0x1f8) != lVar10
         ) {
        if (*(longlong *)(lVar12 + 0x1f8) != lVar10 ||
            *(int *)(lVar12 + 0x200) != (int)param_1[0x13c]) {
          *(longlong *)(lVar12 + 0x1f8) = lVar10;
          *(int *)(lVar12 + 0x200) = (int)param_1[0x13c];
          *(undefined8 *)(lVar12 + 0x208) = 0;
        }
        FUN_14092a19c(lVar12);
        lVar10 = DAT_14cb1b010;
        iVar7 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (((iVar7 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar7 == 2)) {
          uVar14 = 0;
        }
        else if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          uVar14 = (ulonglong)(DVar8 != DVar9);
        }
        else {
          uVar14 = 1;
        }
        if (*(char *)(lVar10 + uVar14) == '\x01') {
          FUN_140515662(lVar12);
        }
        plVar4 = *(longlong **)(lVar12 + 0x120);
        if (plVar4 != (longlong *)0x0) {
          iVar7 = (int)plVar4[1];
          do {
            if (iVar7 == 0) goto LAB_14052fd20;
            LOCK();
            iVar5 = (int)plVar4[1];
            bVar16 = iVar7 == iVar5;
            if (bVar16) {
              *(int *)(plVar4 + 1) = iVar7 + 1;
              iVar5 = iVar7;
            }
            iVar7 = iVar5;
            UNLOCK();
          } while (!bVar16);
          if (*(longlong *)(lVar12 + 0x118) != 0) {
            FUN_14129ffc2(*(longlong *)(lVar12 + 0x118) + 0x28);
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
LAB_14052fd20:
        FUN_140929af0(lVar12);
      }
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
LAB_14052fd45:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14052fdcb FUN_14052fdcb body=348 status=ok
// SIG undefined FUN_14052fdcb(void)

void FUN_14052fdcb(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14052fe0e;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar4 = (uint *)*puVar1;
LAB_14052fe0e:
    puVar3 = (undefined8 *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar5 = puVar4[0x12];
    if (puVar3 + 0x10 <= puVar4 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
      LOCK();
      uVar2 = *puVar4;
      *puVar4 = *puVar4 + uVar5 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar5) != 0xffffffff) break;
      puVar4 = (uint *)*puVar1;
      *puVar4 = 0xffffffff;
      *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      puVar3 = (undefined8 *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
      uVar5 = 0;
      if (puVar3 + 0x10 <= puVar4 + 0x4000) {
        uVar5 = 1;
        goto LAB_14052fe8a;
      }
    }
  }
  uVar5 = uVar5 + 1;
LAB_14052fe8a:
  *(undefined8 **)(puVar4 + 0x10) = puVar3 + 0x11;
  puVar4[0x12] = uVar5;
  *(int *)(puVar3 + -1) = ((int)puVar3 + -8) - (int)puVar4;
  *(undefined4 *)((longlong)puVar3 + -4) = 0x80;
  *(undefined4 *)(puVar3 + 1) = (&DAT_14ca11f80)[(ulonglong)(2 < param_1) * 0x3a];
  *(undefined2 *)(puVar3 + 2) = 0x1818;
  puVar3[3] = param_2;
  *(int *)(puVar3 + 4) = param_1;
  puVar3[5] = param_3;
  puVar3[6] = param_4;
  *(undefined1 *)(puVar3 + 7) = 0x3a;
  *puVar3 = &PTR_FUN_14a337000;
  puVar3[8] = 0;
  *(undefined4 *)(puVar3 + 10) = 0x11;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[9] = DAT_14c9c0d98;
  *(undefined4 *)(puVar3 + 0xf) = 0;
  return;
}



// FUNCTION 14052ff28 FUN_14052ff28 body=284 status=ok
// SIG undefined FUN_14052ff28(void)

void FUN_14052ff28(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((((*(longlong **)(param_1 + 0x1a8) != (longlong *)0x0) && (*(int *)(param_1 + 0x1a4) != 0)) &&
      (uVar2 = *(uint *)(param_1 + 0x1a0), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1a4))) &&
       ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
      plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x10))();
      if (((plVar5 != (longlong *)0x0) && (*(char *)(param_1 + 0x160) == '\x01')) &&
         (lVar6 = *(longlong *)(param_1 + 400), lVar6 != 0)) {
        lVar3 = *(longlong *)(param_1 + 0x198);
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        plVar4 = (longlong *)plVar5[1];
        *plVar5 = lVar6;
        plVar5[1] = lVar3;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar4 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
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
  }
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  plVar5 = *(longlong **)(param_1 + 0x198);
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x198) = 0;
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014052ffea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140530044 FUN_140530044 body=250 status=ok
// SIG undefined FUN_140530044(void)

void FUN_140530044(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_144723c10(*(undefined8 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0xf0));
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  FUN_144716758(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0));
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0));
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0xa0);
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
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14053013e FUN_14053013e body=14 status=ok
// SIG undefined FUN_14053013e(void)

void FUN_14053013e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 140530152 FUN_140530152 body=57 status=ok
// SIG undefined FUN_140530152(void)

void FUN_140530152(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23048 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23048 = FUN_140002ddd(FUN_14643ca41,uVar1,L"GpsTestSettings_AttitudeTowards");
  }
  return;
}



// FUNCTION 14053018c FUN_14053018c body=326 status=ok
// SIG undefined FUN_14053018c(void)

undefined8
FUN_14053018c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1405302cb;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1405302cb;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_1405302cb:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140530274;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      local_50 = param_6;
      local_58 = param_5;
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_140530274;
    }
  }
  uVar6 = 0;
LAB_140530274:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405302d4 FUN_1405302d4 body=489 status=ok
// SIG undefined FUN_1405302d4(void)

void FUN_1405302d4(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  char param_5,undefined1 param_6)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == 0) {
LAB_140530556:
    lVar1 = 0;
  }
  else {
    if (DAT_14cb10130 == 0) {
      local_60 = &local_48;
      local_48 = FUN_140754f84;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_147da9a76;
      local_70 = FUN_1409f3105;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14cb10130 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) != DAT_14cb10130 + 0x30)) goto LAB_140530556;
  }
  if (lVar1 == param_2) {
    switch(param_6) {
    case 0:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
    case 1:
      if (param_5 == '\x03') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
      }
      break;
    case 2:
switchD_140530397_caseD_2:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
    case 3:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
    case 5:
      switch(param_5) {
      case '\x01':
      case '\x03':
      case '\x05':
        if (param_4 != 0) goto switchD_140530397_caseD_2;
        break;
      case '\b':
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
      }
      break;
    case 7:
      if (param_5 == '\x06') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14053055e FUN_14053055e body=796 status=ok
// SIG undefined FUN_14053055e(void)

double * FUN_14053055e(double *param_1,int param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  iVar4 = _finite(*param_3);
  if (((iVar4 == 0) || (iVar4 = _finite(param_3[1]), iVar4 == 0)) ||
     (iVar4 = _finite(param_3[2]), iVar4 == 0)) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    return param_1;
  }
  dVar5 = (double)(int)(short)param_2;
  dVar6 = *param_3;
  dVar1 = param_3[1];
  dVar8 = dVar6 * dVar5;
  dVar7 = dVar1 * dVar5;
  dVar2 = param_3[2];
  dVar5 = dVar5 * dVar2;
  dVar3 = ABS(dVar8);
  if (ABS(dVar8) <= ABS(dVar7)) {
    dVar3 = ABS(dVar7);
  }
  if (dVar3 <= ABS(dVar5)) {
    dVar3 = ABS(dVar5);
  }
  if (dVar3 < 4.611686018427388e+18) {
    dVar3 = ABS(dVar6);
    if (ABS(dVar1) <= ABS(dVar6)) {
      dVar3 = ABS(dVar1);
    }
    if (ABS(dVar2) <= dVar3) {
      dVar3 = ABS(dVar2);
    }
    if (dVar3 < 4503599627370496.0) {
      dVar6 = 1.0 / (double)param_2;
      *param_1 = dVar6 * (double)(longlong)
                                 ((double)(-(ulonglong)(0.0 < dVar8) & 0x3ff0000000000000 |
                                          (ulonglong)
                                          (~(uint)(-(ulonglong)(0.0 < dVar8) >> 0x20) &
                                          (uint)(-(ulonglong)(dVar8 < 0.0) >> 0x20) & 0xbff00000) <<
                                          0x20) * 0.5 + dVar8);
      param_1[1] = (double)(longlong)
                           ((double)(-(ulonglong)(0.0 < dVar7) & 0x3ff0000000000000 |
                                    (ulonglong)
                                    (~(uint)(-(ulonglong)(0.0 < dVar7) >> 0x20) &
                                    (uint)(-(ulonglong)(dVar7 < 0.0) >> 0x20) & 0xbff00000) << 0x20)
                            * 0.5 + dVar7) * dVar6;
      param_1[2] = (double)(longlong)
                           ((double)(-(ulonglong)(0.0 < dVar5) & 0x3ff0000000000000 |
                                    ~-(ulonglong)(0.0 < dVar5) &
                                    -(ulonglong)(dVar5 < 0.0) & 0xbff0000000000000) * 0.5 + dVar5) *
                   dVar6;
      return param_1;
    }
    *param_1 = (double)(longlong)
                       ((double)(-(ulonglong)(0.0 < dVar6) & 0x3ff0000000000000 |
                                (ulonglong)
                                (~(uint)(-(ulonglong)(0.0 < dVar6) >> 0x20) &
                                (uint)(-(ulonglong)(dVar6 < 0.0) >> 0x20) & 0xbff00000) << 0x20) *
                        0.5 + dVar6);
    param_1[1] = (double)(longlong)
                         ((double)(-(ulonglong)(0.0 < dVar1) & 0x3ff0000000000000 |
                                  (ulonglong)
                                  (~(uint)(-(ulonglong)(0.0 < dVar1) >> 0x20) &
                                  (uint)(-(ulonglong)(dVar1 < 0.0) >> 0x20) & 0xbff00000) << 0x20) *
                          0.5 + dVar1);
    param_1[2] = (double)(longlong)
                         ((double)(-(ulonglong)(0.0 < dVar2) & 0x3ff0000000000000 |
                                  ~-(ulonglong)(0.0 < dVar2) &
                                  -(ulonglong)(dVar2 < 0.0) & 0xbff0000000000000) * 0.5 + dVar2);
    return param_1;
  }
  param_1[2] = param_3[2];
  dVar6 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = dVar6;
  return param_1;
}



// FUNCTION 14053087a FUN_14053087a body=59 status=ok
// SIG undefined FUN_14053087a(void)

void FUN_14053087a(longlong param_1)

{
  FUN_140283eaa(param_1 + 0x78,1);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_1405308b6(param_1 + 0x28);
  return;
}



// FUNCTION 1405308b6 FUN_1405308b6 body=55 status=ok
// SIG undefined FUN_1405308b6(void)

void FUN_1405308b6(longlong *param_1)

{
  FUN_1405308ee(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1405308ee FUN_1405308ee body=123 status=ok
// SIG undefined FUN_1405308ee(void)

void FUN_1405308ee(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14053096a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14053096a FUN_14053096a body=112 status=ok
// SIG undefined FUN_14053096a(void)

void FUN_14053096a(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xe0,0x10);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 5;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0xe0,0x10);
  }
  return;
}



// FUNCTION 1405309e6 FUN_1405309e6 body=868 status=ok
// SIG undefined FUN_1405309e6(void)

void FUN_1405309e6(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  longlong *local_d8 [2];
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8 [2];
  longlong *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  ulonglong *local_80;
  longlong local_78;
  undefined4 local_70;
  wchar_t *local_68;
  undefined4 local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_1[3] == 0) {
    if ((char)param_2[0x13] == '\x01') {
      FUN_142400d60(param_2[4],(int)param_2[5]);
    }
    else {
      FUN_1448859f0(param_2 + 4,param_2[6]);
    }
  }
  else {
    lVar4 = param_1[4];
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(int *)((longlong)param_2 + 0x14) = (int)lVar4;
    (**(code **)(*(longlong *)param_1[3] + 0x28))((longlong *)param_1[3],param_2);
  }
  lVar4 = (**(code **)(*param_1 + 0xf0))(param_1);
  if ((lVar4 != 0) && ((char)param_1[5] != '\0')) {
    cVar3 = (**(code **)(*param_1 + 0x110))(param_1);
    if (cVar3 != '\0') {
      if ((char)param_2[0x13] == '\x01') {
        FUN_140009b9a(local_b8,*param_2 + 0x160);
        local_68 = L"AdditiveMirrorWarning";
        local_60 = 0x15;
        FUN_1446e940c(local_dc,&local_68);
        local_68 = L"AnimNode_Mirror";
        local_60 = 0xf;
        FUN_1446e940c(local_e0,&local_68);
        FUN_140208bae(local_d8,local_e0,local_dc,
                      L"Trying to mirror an additive animation pose is not supported in anim instance \'{0}\'"
                     );
        FUN_14023409e(&local_c8,local_d8,1);
        local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
        FUN_14023423e(local_58,local_b8);
        local_80 = &local_48;
        local_88 = &local_68;
        FUN_14010d304(&local_78);
        local_98 = local_c8;
        local_90 = local_c0;
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(&local_a8,&local_98,&local_78);
        FUN_14007f2db(local_78,local_70);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (local_58[0] != (longlong *)0x0) {
          (**(code **)(*local_58[0] + 0x10))();
        }
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_c0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_c0)(local_c0);
            LOCK();
            piVar2 = (int *)((longlong)local_c0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_c0 + 0x10))(local_c0);
            }
          }
        }
        if (local_b8[0] != (longlong *)0x0) {
          (**(code **)(*local_b8[0] + 0x10))();
        }
        if (local_d8[0] != (longlong *)0x0) {
          (**(code **)(*local_d8[0] + 0x10))();
        }
        local_f0 = local_a8;
        if (local_a8 == (longlong *)0x0) {
          local_e8 = local_a0;
          FUN_1474c7e4c(param_2,3);
          FUN_142400d60(param_2[4],(int)param_2[5]);
        }
        else {
          (**(code **)(*local_a8 + 8))(local_a8);
          local_e8 = local_a0;
          FUN_1474c7e4c(param_2,3);
          FUN_142400d60(param_2[4],(int)param_2[5]);
          (**(code **)(*local_a8 + 0x10))(local_a8);
        }
      }
      else {
        if ((int)param_1[7] != *(int *)(param_2[6] + 8)) {
          FUN_140334254(param_1);
        }
        FUN_140531124(param_2 + 4,*(undefined1 *)(lVar4 + 0xc0),param_1 + 6,param_1 + 8);
      }
    }
    cVar3 = (**(code **)(*param_1 + 0x118))(param_1);
    if (cVar3 != '\0') {
      FUN_140530d58(param_2 + 7,lVar4);
    }
    cVar3 = (**(code **)(*param_1 + 0x120))(param_1);
    if (cVar3 != '\0') {
      FUN_140531d0c(param_2 + 0xb,lVar4,param_1 + 6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140530d58 FUN_140530d58 body=971 status=ok
// SIG undefined FUN_140530d58(void)

void FUN_140530d58(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  
  iVar3 = *(int *)(param_2 + 0x128);
  if (iVar3 == 0) {
    uVar24 = 1;
    uVar26 = 0;
    iVar15 = 0;
    iVar13 = 0;
  }
  else {
    puVar8 = *(uint **)(param_2 + 0x120);
    if (*(uint **)(param_2 + 0x120) == (uint *)0x0) {
      puVar8 = (uint *)(param_2 + 0x110);
    }
    uVar25 = *puVar8;
    if (uVar25 == 0) {
      iVar15 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar15 = iVar3 + -1;
      }
      uVar26 = 0;
      uVar11 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar11 = uVar26;
      }
      iVar15 = 0;
      do {
        if (uVar11 == uVar26) {
          return;
        }
        iVar15 = iVar15 + 0x20;
        uVar25 = puVar8[uVar26 + 1];
        uVar26 = uVar26 + 1;
      } while (uVar25 == 0);
    }
    else {
      uVar26 = 0;
      iVar15 = 0;
    }
    uVar24 = (ulonglong)(-uVar25 & uVar25);
    uVar11 = uVar24 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar13 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar13) {
      iVar13 = iVar3;
    }
  }
  if (iVar13 != iVar3) {
    uVar25 = 0xffffffff;
    do {
      uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 0x100) + (longlong)iVar13 * 0x18);
      uVar5 = *(undefined8 *)(*(longlong *)(param_2 + 0x100) + 8 + (longlong)iVar13 * 0x18);
      cVar7 = (char)param_1[2];
      uVar23 = *(uint *)(param_1 + 1);
      lVar17 = *param_1;
      if (cVar7 == '\0') {
        FUN_144716af1();
        *(undefined1 *)(param_1 + 2) = 1;
        uVar23 = *(uint *)(param_1 + 1);
        lVar17 = *param_1;
        cVar7 = '\x01';
      }
      uVar11 = (ulonglong)uVar23;
      iVar13 = (int)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar23 < 1) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        uVar21 = uVar11;
        do {
          uVar19 = (int)(uVar21 >> 1) + uVar20;
          uVar6 = *(undefined8 *)(lVar17 + (ulonglong)uVar19 * 0x10);
          iVar14 = (int)uVar6 - (int)uVar4;
          if (iVar14 == 0) {
            iVar14 = (int)((ulonglong)uVar6 >> 0x20) - iVar13;
          }
          uVar22 = (uint)uVar21;
          if (iVar14 < 0) {
            uVar20 = uVar19 + (uVar22 & 1);
          }
          uVar21 = uVar21 >> 1;
        } while (1 < uVar22);
      }
      if ((int)uVar20 < (int)uVar23) {
        uVar6 = *(undefined8 *)(lVar17 + (ulonglong)uVar20 * 0x10);
        iVar14 = (int)uVar4 - (int)uVar6;
        if (iVar14 == 0) {
          iVar14 = iVar13 - (int)((ulonglong)uVar6 >> 0x20);
        }
        puVar16 = (undefined8 *)0x0;
        if (-1 < iVar14) {
          puVar16 = (undefined8 *)(lVar17 + (ulonglong)uVar20 * 0x10);
        }
      }
      else {
        puVar16 = (undefined8 *)0x0;
      }
      if (cVar7 == '\0') {
        FUN_144716af1();
        *(undefined1 *)(param_1 + 2) = 1;
        uVar11 = (ulonglong)*(uint *)(param_1 + 1);
        lVar17 = *param_1;
      }
      iVar13 = (int)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar11 < 1) {
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
        uVar21 = uVar11;
        do {
          uVar20 = (int)(uVar21 >> 1) + uVar23;
          uVar6 = *(undefined8 *)(lVar17 + (ulonglong)uVar20 * 0x10);
          iVar14 = (int)uVar6 - (int)uVar5;
          if (iVar14 == 0) {
            iVar14 = (int)((ulonglong)uVar6 >> 0x20) - iVar13;
          }
          uVar19 = (uint)uVar21;
          if (iVar14 < 0) {
            uVar23 = uVar20 + (uVar19 & 1);
          }
          uVar21 = uVar21 >> 1;
        } while (1 < uVar19);
      }
      if ((int)uVar23 < (int)uVar11) {
        uVar6 = *(undefined8 *)(lVar17 + (ulonglong)uVar23 * 0x10);
        iVar14 = (int)uVar5 - (int)uVar6;
        if (iVar14 == 0) {
          iVar14 = iVar13 - (int)((ulonglong)uVar6 >> 0x20);
        }
        if (iVar14 < 0) goto LAB_140530efa;
        puVar12 = (undefined8 *)(lVar17 + (ulonglong)uVar23 * 0x10);
        if ((puVar16 == (undefined8 *)0x0) || (puVar12 == (undefined8 *)0x0)) {
          if (puVar16 != (undefined8 *)0x0) goto LAB_140531112;
          if (puVar12 == (undefined8 *)0x0) goto LAB_140530f0d;
          *puVar12 = uVar4;
          goto LAB_140531115;
        }
        uVar1 = *(undefined4 *)(puVar16 + 1);
        *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar12 + 1);
        *(undefined4 *)(puVar12 + 1) = uVar1;
        uVar2 = *(undefined1 *)((longlong)puVar16 + 0xc);
        *(undefined1 *)((longlong)puVar16 + 0xc) = *(undefined1 *)((longlong)puVar12 + 0xc);
        *(undefined1 *)((longlong)puVar12 + 0xc) = uVar2;
      }
      else {
LAB_140530efa:
        if (puVar16 != (undefined8 *)0x0) {
LAB_140531112:
          *puVar16 = uVar5;
LAB_140531115:
          *(undefined1 *)(param_1 + 2) = 0;
        }
      }
LAB_140530f0d:
      uVar25 = uVar25 & ~(uint)uVar24;
      puVar8 = *(uint **)(param_2 + 0x120);
      if (*(uint **)(param_2 + 0x120) == (uint *)0x0) {
        puVar8 = (uint *)(param_2 + 0x110);
      }
      iVar14 = *(int *)(param_2 + 0x128);
      iVar13 = (int)uVar26;
      lVar17 = (longlong)iVar13;
      uVar23 = puVar8[lVar17] & uVar25;
      if (uVar23 == 0) {
        iVar9 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar9 = iVar14 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar13) {
          iVar10 = iVar13;
        }
        if (iVar13 < iVar9) {
          lVar18 = 0;
          do {
            uVar23 = puVar8[lVar17 + lVar18 + 1];
            if (uVar23 != 0) {
              uVar26 = (ulonglong)(iVar13 + (int)lVar18 + 1);
              uVar25 = 0xffffffff;
              goto LAB_140530f8a;
            }
            iVar15 = iVar15 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar10 - lVar17 != lVar18);
          uVar25 = 0xffffffff;
          iVar13 = iVar10;
        }
        uVar26 = (ulonglong)(iVar13 + 1);
        iVar13 = iVar14;
      }
      else {
LAB_140530f8a:
        uVar24 = (ulonglong)(-uVar23 & uVar23);
        uVar11 = uVar24 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar13 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar14 <= iVar13) {
          iVar13 = iVar14;
        }
      }
    } while (iVar13 != iVar3);
  }
  return;
}



// FUNCTION 140531124 FUN_140531124 body=1391 status=ok
// SIG undefined FUN_140531124(void)

void FUN_140531124(longlong *param_1,int param_2,longlong *param_3,undefined8 *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar32;
  undefined1 auVar31 [16];
  undefined1 auStack_248 [32];
  int *local_228;
  undefined4 *local_220;
  int *local_218;
  longlong *local_208;
  longlong local_200;
  double local_1f8;
  undefined8 uStack_1f0;
  longlong *local_1e0;
  undefined8 local_1d8 [13];
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168 [12];
  int local_108;
  int local_104;
  undefined8 *local_100;
  int local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if (param_2 != 0) {
    local_200 = param_1[2];
    if (*(int *)*param_3 != -1) {
      auVar26 = *(undefined1 (*) [16])*param_4;
      dVar6 = auVar26._0_8_;
      dVar3 = auVar26._8_8_;
      auVar30 = ((undefined1 (*) [16])*param_4)[1];
      dVar2 = auVar30._0_8_;
      dVar4 = auVar30._8_8_;
      pdVar1 = (double *)*param_1;
      local_1f8 = pdVar1[6];
      dVar16 = pdVar1[4];
      uVar23 = (uint)((ulonglong)pdVar1[5] >> 0x20);
      uStack_1f0 = 0;
      if (param_2 == 2) {
        uVar23 = uVar23 ^ 0x80000000;
        auVar31 = *(undefined1 (*) [16])(pdVar1 + 2);
        uVar21 = auVar31._8_4_;
        uVar22 = auVar31._12_4_;
        dVar18 = pdVar1[1];
        uVar20 = (uint)((ulonglong)*pdVar1 >> 0x20) ^ 0x80000000;
        uVar19 = SUB84(*pdVar1,0);
        dVar17 = -auVar31._0_8_;
        auVar25._0_8_ = -dVar6;
        auVar25._8_8_ = -dVar3;
        auVar26 = blendpd(auVar25,auVar26,2);
        auVar29._0_8_ = -dVar2;
        auVar29._8_8_ = -dVar4;
        auVar30 = blendpd(auVar29,auVar30,2);
      }
      else if (param_2 == 3) {
        local_1f8 = -local_1f8;
        uStack_1f0 = 0x8000000000000000;
        auVar31 = *(undefined1 (*) [16])(pdVar1 + 2);
        dVar17 = auVar31._0_8_;
        uVar20 = (uint)((ulonglong)*pdVar1 >> 0x20) ^ 0x80000000;
        uVar19 = SUB84(*pdVar1,0);
        dVar18 = -pdVar1[1];
        auVar26._0_8_ = -dVar6;
        auVar26._8_8_ = -dVar3;
        uVar21 = auVar31._8_4_;
        uVar22 = auVar31._12_4_;
      }
      else if (param_2 == 1) {
        dVar16 = -dVar16;
        uVar19 = *(undefined4 *)pdVar1;
        uVar20 = *(uint *)((longlong)pdVar1 + 4);
        auVar26 = *(undefined1 (*) [16])(pdVar1 + 2);
        uVar21 = auVar26._8_4_;
        uVar22 = auVar26._12_4_;
        dVar18 = -pdVar1[1];
        dVar17 = -auVar26._0_8_;
        auVar26._8_8_ = -dVar3;
        auVar26._0_8_ = dVar6;
        auVar31._0_8_ = -dVar2;
        auVar31._8_8_ = -dVar4;
        auVar30 = blendpd(auVar31,auVar30,2);
      }
      else {
        uVar19 = *(undefined4 *)pdVar1;
        uVar20 = *(uint *)((longlong)pdVar1 + 4);
        auVar31 = *(undefined1 (*) [16])(pdVar1 + 2);
        dVar17 = auVar31._0_8_;
        dVar18 = pdVar1[1];
        uVar21 = auVar31._8_4_;
        uVar22 = auVar31._12_4_;
      }
      dVar28 = auVar30._0_8_ * -1.0;
      dVar32 = auVar30._8_8_ * 1.0;
      dVar24 = auVar26._0_8_;
      dVar27 = auVar26._8_8_;
      dVar7 = dVar3 * dVar28 * -1.0 + ((dVar6 * dVar32 - dVar4 * dVar24 * 1.0) - dVar2 * dVar27);
      dVar8 = dVar6 * dVar28 * 1.0 + ((dVar3 * dVar32 - dVar2 * dVar24 * -1.0) - dVar4 * dVar27);
      dVar5 = dVar4 * dVar28 * 1.0 + dVar27 * dVar6 + (dVar32 * dVar2 - dVar24 * dVar3 * 1.0);
      dVar6 = dVar2 * dVar28 * -1.0 + dVar27 * dVar3 + (dVar32 * dVar4 - dVar24 * dVar6 * -1.0);
      *pdVar1 = dVar8 * dVar17 * -1.0 +
                dVar5 * dVar18 +
                (double)CONCAT44(uVar20,uVar19) * dVar6 * 1.0 +
                (double)CONCAT44(uVar22,uVar21) * dVar7;
      pdVar1[1] = dVar7 * dVar17 * 1.0 +
                  dVar6 * dVar18 +
                  (double)CONCAT44(uVar20,uVar19) * dVar5 * -1.0 +
                  (double)CONCAT44(uVar22,uVar21) * dVar8;
      pdVar1[2] = dVar6 * dVar17 * 1.0 +
                  (((double)CONCAT44(uVar20,uVar19) * dVar8 * 1.0 +
                   (double)CONCAT44(uVar22,uVar21) * dVar5) - dVar7 * dVar18);
      pdVar1[3] = dVar5 * dVar17 * -1.0 +
                  (((double)CONCAT44(uVar20,uVar19) * dVar7 * -1.0 +
                   (double)CONCAT44(uVar22,uVar21) * dVar6) - dVar8 * dVar18);
      pdVar1[4] = dVar16;
      pdVar1[5] = (double)CONCAT44(uVar23,SUB84(pdVar1[5],0));
      pdVar1[6] = local_1f8;
      pdVar1[7] = 0.0;
      pdVar1[0xb] = 0.0;
    }
    local_104 = 1;
    local_1f8 = (double)CONCAT44(local_1f8._4_4_,*(int *)(local_200 + 8));
    local_208 = param_1;
    local_100 = param_4;
    local_f8 = param_2;
    if (1 < *(int *)(local_200 + 8)) {
      lVar14 = 0x60;
      lVar15 = 0;
      local_1e0 = param_3;
      do {
        local_108 = *(int *)(*param_3 + 4 + lVar15 * 4);
        iVar13 = (int)(lVar15 + 1);
        if (iVar13 == local_108) {
          local_1d8[0]._0_4_ = *(undefined4 *)(*(longlong *)(local_200 + 0x90) + 4 + lVar15 * 4);
          puVar12 = (undefined8 *)(*param_1 + lVar14);
          local_228 = &local_104;
          local_220 = (undefined4 *)local_1d8;
          puVar11 = local_168;
          local_218 = local_228;
          FUN_140531694(&local_100,puVar11,puVar12);
          lVar10 = 0xc;
          param_1 = local_208;
LAB_1405314ef:
          for (; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
        }
        else if (iVar13 < local_108) {
          local_16c = *(undefined4 *)(*(longlong *)(local_200 + 0x90) + 4 + lVar15 * 4);
          local_170 = *(undefined4 *)(*(longlong *)(local_200 + 0x90) + (longlong)local_108 * 4);
          lVar10 = *param_1;
          lVar9 = (longlong)local_108 * 0x60;
          local_218 = &local_104;
          local_220 = &local_16c;
          local_228 = &local_108;
          FUN_140531694(&local_100,local_168,lVar10 + lVar9,&local_170);
          puVar12 = (undefined8 *)(lVar10 + lVar14);
          local_228 = &local_104;
          local_220 = &local_170;
          local_218 = &local_108;
          FUN_140531694(&local_100,local_1d8,puVar12,&local_16c);
          puVar11 = local_168;
          for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          lVar10 = 0xc;
          param_3 = local_1e0;
          puVar11 = local_1d8;
          puVar12 = (undefined8 *)(lVar9 + *local_208);
          param_1 = local_208;
          goto LAB_1405314ef;
        }
        iVar13 = (int)lVar15;
        local_104 = iVar13 + 2;
        lVar14 = lVar14 + 0x60;
        lVar15 = lVar15 + 1;
      } while (iVar13 + 2 < local_1f8._0_4_);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140531694 FUN_140531694 body=1655 status=ok
// SIG undefined FUN_140531694(void)

void FUN_140531694(undefined8 *param_1,double *param_2,double *param_3,int *param_4,int *param_5,
                  int *param_6,int *param_7)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  uint uVar34;
  double local_128;
  double local_118;
  double local_108;
  double dStack_f0;
  
  lVar7 = *(longlong *)*param_1;
  lVar26 = (longlong)*param_4 * 0x20;
  dVar13 = *(double *)(lVar7 + lVar26);
  dVar14 = ((double *)(lVar7 + lVar26))[1];
  pdVar1 = (double *)(lVar7 + 0x10 + lVar26);
  dVar12 = *pdVar1;
  dVar16 = pdVar1[1];
  dVar29 = param_3[6];
  dVar28 = param_3[4];
  dVar30 = param_3[5];
  dVar2 = *(double *)(lVar7 + 8 + lVar26);
  dVar18 = dVar2 * dVar29 - dVar30 * dVar12;
  dVar18 = dVar18 + dVar18;
  dVar3 = *(double *)(lVar7 + 0x18 + lVar26);
  dVar20 = dVar13 * dVar30 - dVar28 * dVar2;
  dVar20 = dVar20 + dVar20;
  dVar10 = dVar12 * dVar28 - dVar29 * dVar13;
  dVar10 = dVar10 + dVar10;
  local_108 = (dVar13 * dVar10 - dVar18 * dVar2) + dVar3 * dVar20 + dVar29;
  dVar29 = (dVar12 * dVar18 - dVar20 * dVar13) + dVar3 * dVar10 + dVar30;
  dVar28 = (dVar2 * dVar20 - dVar10 * dVar12) + dVar3 * dVar18 + dVar28;
  iVar6 = *(int *)(param_1 + 1);
  if (iVar6 == 3) {
    local_108 = -local_108;
  }
  else if (iVar6 == 2) {
    dVar29 = -dVar29;
  }
  else if (iVar6 == 1) {
    dVar28 = -dVar28;
  }
  auVar4 = *(undefined1 (*) [16])(lVar7 + (longlong)*param_6 * 0x20);
  dVar30 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar10 = param_3[3];
  pdVar1 = (double *)(lVar7 + 0x10 + (longlong)*param_6 * 0x20);
  dVar18 = *pdVar1;
  dVar20 = pdVar1[1];
  pdVar1 = (double *)(lVar7 + (longlong)*param_7 * 0x20);
  dVar19 = *pdVar1;
  dVar23 = pdVar1[1];
  pdVar1 = (double *)(lVar7 + 0x10 + (longlong)*param_7 * 0x20);
  dVar24 = *pdVar1;
  dVar25 = pdVar1[1];
  auVar32 = *(undefined1 (*) [16])(lVar7 + (longlong)*param_5 * 0x20);
  uVar8 = auVar32._0_8_;
  uVar9 = auVar32._8_8_;
  auVar5 = *(undefined1 (*) [16])(lVar7 + 0x10 + (longlong)*param_5 * 0x20);
  uVar34 = auVar5._4_4_;
  dVar27 = dVar2 * dVar12 * -1.0 + dVar3 * dVar14 + dVar13 * dVar10 * 1.0 + dVar16 * dVar30;
  local_118 = dVar30 * dVar12 * 1.0 + dVar10 * dVar14 + dVar13 * dVar3 * -1.0 + dVar16 * dVar2;
  local_128 = dVar10 * dVar12 * 1.0 + ((dVar13 * dVar2 * 1.0 + dVar16 * dVar3) - dVar14 * dVar30);
  dVar30 = dVar3 * dVar12 * -1.0 + ((dVar13 * dVar30 * -1.0 + dVar16 * dVar10) - dVar14 * dVar2);
  if (iVar6 == 3) {
    dVar27 = -dVar27;
    local_118 = -local_118;
    auVar32._0_8_ = uVar8 ^ 0x8000000000000000;
    auVar32._8_8_ = uVar9 ^ 0x8000000000000000;
  }
  else {
    if (iVar6 == 2) {
      dVar27 = -dVar27;
      auVar32._8_8_ = uVar9;
      auVar32._0_8_ = uVar8 ^ 0x8000000000000000;
    }
    else {
      if (iVar6 != 1) goto LAB_1405319c6;
      local_118 = -local_118;
      auVar11._8_4_ = auVar32._8_4_;
      auVar11._0_8_ = uVar8 ^ 0x8000000000000000;
      auVar11._12_4_ = auVar32._12_4_ ^ 0x80000000;
      auVar32 = blendpd(auVar32,auVar11,2);
    }
    local_128 = -local_128;
    uVar34 = uVar34 ^ 0x80000000;
  }
LAB_1405319c6:
  dVar2 = auVar4._8_8_;
  dVar17 = dVar18 * dVar29 - dVar2 * local_108;
  dVar3 = auVar4._0_8_;
  dVar21 = dVar2 * dVar28 - dVar3 * dVar29;
  dVar17 = dVar17 + dVar17;
  dVar12 = dVar3 * local_108 - dVar28 * dVar18;
  dVar21 = dVar21 + dVar21;
  dVar12 = dVar12 + dVar12;
  auVar15._8_4_ = auVar4._8_4_;
  auVar15._0_8_ = dVar2;
  auVar15._12_4_ = auVar4._12_4_;
  dVar10 = (double)CONCAT44(uVar34,auVar5._0_4_) * -1.0;
  dVar16 = auVar5._8_8_ * 1.0;
  dVar31 = auVar32._0_8_;
  dVar33 = auVar32._8_8_;
  dVar13 = dVar23 * dVar10 * -1.0 + ((dVar19 * dVar16 - dVar25 * dVar31 * 1.0) - dVar24 * dVar33);
  dVar14 = dVar19 * dVar10 * 1.0 + ((dVar23 * dVar16 - dVar24 * dVar31 * -1.0) - dVar25 * dVar33);
  dVar22 = dVar25 * dVar10 * 1.0 + dVar33 * dVar19 + (dVar16 * dVar24 - dVar31 * dVar23 * 1.0);
  dVar23 = dVar24 * dVar10 * -1.0 + dVar33 * dVar23 + (dVar16 * dVar25 - dVar31 * dVar19 * -1.0);
  dVar16 = dVar14 * local_128 * -1.0 + dVar22 * local_118 + dVar27 * dVar23 * 1.0 + dVar30 * dVar13;
  dVar19 = dVar13 * local_128 * 1.0 + dVar23 * local_118 + dVar27 * dVar22 * -1.0 + dVar30 * dVar14;
  dVar10 = dVar23 * local_128 * 1.0 +
           ((dVar27 * dVar14 * 1.0 + dVar30 * dVar22) - dVar13 * local_118);
  dVar13 = dVar22 * local_128 * -1.0 +
           ((dVar27 * dVar13 * -1.0 + dVar30 * dVar23) - dVar14 * local_118);
  dVar23 = dVar18 * -1.0;
  dVar24 = dVar20 * 1.0;
  dStack_f0 = auVar15._8_8_;
  dVar14 = dVar10 * dVar23 * -1.0 + dVar19 * dStack_f0 + (dVar24 * dVar13 - dVar3 * dVar16 * -1.0);
  dVar25 = param_3[8];
  dVar27 = param_3[9];
  dVar30 = param_3[10];
  *param_2 = dVar19 * dVar23 * -1.0 + ((dVar24 * dVar16 - dVar3 * dVar13 * 1.0) - dVar2 * dVar10);
  param_2[1] = dVar16 * dVar23 * 1.0 +
               ((dVar24 * dVar19 - dVar3 * dVar10 * -1.0) - dStack_f0 * dVar13);
  auVar4._8_4_ = SUB84(dVar14,0);
  auVar4._0_8_ = dVar13 * dVar23 * 1.0 + dVar16 * dVar2 + (dVar24 * dVar10 - dVar3 * dVar19 * 1.0);
  auVar4._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar4;
  param_2[4] = (dVar18 * dVar12 - dVar2 * dVar21) + dVar20 * dVar17 + dVar28;
  param_2[5] = (dVar3 * dVar21 - dVar18 * dVar17) + dVar20 * dVar12 + dVar29;
  param_2[6] = (dVar17 * dVar2 - dVar12 * dVar3) + dVar21 * dVar20 + local_108;
  param_2[7] = 0.0;
  param_2[8] = dVar25;
  param_2[9] = dVar27;
  param_2[10] = dVar30;
  param_2[0xb] = 0.0;
  return;
}



// FUNCTION 140531d0c FUN_140531d0c body=1753 status=ok
// SIG undefined FUN_140531d0c(void)

void FUN_140531d0c(longlong *param_1,longlong param_2,longlong *param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  void *_Src;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong *plVar16;
  void **ppvVar17;
  ulonglong uVar18;
  uint uVar19;
  uint *puVar20;
  longlong lVar21;
  longlong *plVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auStack_188 [40];
  longlong *local_160;
  longlong local_158;
  longlong *local_150;
  longlong local_148;
  longlong local_140;
  longlong *local_138;
  undefined8 local_130;
  void *local_128;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d0;
  longlong **local_c0;
  longlong *local_b8;
  ulonglong uStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  void *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_c0 = &local_b8;
  local_b8 = (longlong *)0x0;
  uStack_b0 = 0;
  if ((longlong)(int)param_1[7] != 0) {
    local_158 = param_1[6];
    local_140 = local_158 + (longlong)(int)param_1[7] * 8;
    do {
      uVar8 = FUN_14479d2ce(local_158);
      lVar11 = param_1[7];
      if ((longlong)(int)lVar11 != 0) {
        lVar13 = param_1[6];
        uVar23 = 0;
        lVar12 = 0;
        do {
          cVar5 = FUN_1400063ec(uVar23 + lVar13,uVar8);
          if (cVar5 != '\0') {
            if ((int)(~uVar23 >> 3) != 0) {
              bVar24 = (longlong)uStack_b0 < 0;
              uStack_b0 = uStack_b0 & 0xffffffff00000000;
              if (bVar24) {
                FUN_1433f5060(&local_b8);
              }
              lVar11 = *param_1;
              lVar12 = lVar12 >> 0x20;
              lVar13 = lVar12 * 0x10;
              local_128 = (void *)0x0;
              uStack_120 = *(uint *)(lVar11 + 8 + lVar13);
              lVar21 = (longlong)(int)uStack_120;
              _Src = *(void **)(lVar11 + lVar13);
              if (lVar21 == 0) {
                uStack_11c = 0;
                uVar19 = 0;
              }
              else {
                FUN_144a06ca8(&local_128,uStack_120,0);
                memcpy(local_128,_Src,lVar21 << 2);
                uVar19 = uStack_120;
              }
              FUN_144958a06(local_128,uVar19);
              puVar20 = *(uint **)(lVar11 + lVar13);
              iVar6 = *(int *)((undefined8 *)(lVar11 + lVar13) + 1);
              puVar1 = puVar20 + iVar6;
              if ((int)param_3[1] == 0) {
                if (iVar6 != 0) {
                  do {
                    uVar19 = *puVar20;
                    uVar3 = *(uint *)(*(longlong *)(param_2 + 0xd0) + (longlong)(int)uVar19 * 4);
                    if ((((*(uint *)(*(longlong *)(param_2 + 0xd0) + (longlong)(int)uVar3 * 4) ==
                           uVar19) && (uVar19 != uVar3)) && (uVar19 != 0xffffffff)) &&
                       (uVar3 != 0xffffffff)) {
                      uVar23 = 0;
                      if (0 < (int)uStack_120) {
                        uVar18 = (ulonglong)uStack_120;
                        uVar19 = uStack_120;
                        do {
                          uVar18 = uVar18 >> 1;
                          uVar15 = (uint)uVar18 + (int)uVar23;
                          if (*(int *)((longlong)local_128 + (ulonglong)uVar15 * 4) < (int)uVar3) {
                            uVar23 = (ulonglong)(uVar15 + (uVar19 & 1));
                          }
                          bVar24 = 1 < uVar19;
                          uVar19 = (uint)uVar18;
                        } while (bVar24);
                      }
                      if ((((int)uStack_120 <= (int)uVar23) || ((int)uVar23 != 0)) ||
                         ((int)uVar3 < *(int *)((longlong)local_128 + uVar23 * 4))) {
                        FUN_1433ec8a4(&local_c0);
                      }
                    }
                    puVar20 = puVar20 + 1;
                  } while (puVar20 != puVar1);
                }
              }
              else if (iVar6 != 0) {
                do {
                  uVar19 = *puVar20;
                  if ((int)uVar19 < (int)param_3[1] && -1 < (int)uVar19) {
                    uVar3 = *(uint *)(*param_3 + (ulonglong)uVar19 * 4);
                    if (((uVar19 != uVar3) && ((int)uVar3 < (int)param_3[1] && -1 < (int)uVar3)) &&
                       (*(uint *)(*param_3 + (ulonglong)uVar3 * 4) == uVar19)) {
                      uVar23 = 0;
                      if (0 < (int)uStack_120) {
                        uVar18 = (ulonglong)uStack_120;
                        uVar19 = uStack_120;
                        do {
                          uVar18 = uVar18 >> 1;
                          uVar15 = (uint)uVar18 + (int)uVar23;
                          if (*(int *)((longlong)local_128 + (ulonglong)uVar15 * 4) < (int)uVar3) {
                            uVar23 = (ulonglong)(uVar15 + (uVar19 & 1));
                          }
                          bVar24 = 1 < uVar19;
                          uVar19 = (uint)uVar18;
                        } while (bVar24);
                      }
                      if ((((int)uStack_120 <= (int)uVar23) || ((int)uVar23 != 0)) ||
                         ((int)uVar3 < *(int *)((longlong)local_128 + uVar23 * 4))) {
                        FUN_1433ec8a4(&local_c0);
                      }
                    }
                  }
                  puVar20 = puVar20 + 1;
                } while (puVar20 != puVar1);
              }
              local_150 = (longlong *)param_1[2];
              iVar6 = (int)local_150[lVar12 * 2 + 1];
              if (0 < iVar6) {
                local_150 = local_150 + lVar12 * 2;
                local_138 = (longlong *)(lVar13 + param_1[4]);
                local_148 = 0;
                do {
                  if ((longlong)(int)uStack_b0 != 0) {
                    local_160 = (longlong *)(local_148 * 0x14 + *local_150);
                    local_130 = *(undefined8 *)(*local_138 + local_148 * 0x10);
                    lVar11 = (longlong)(int)uStack_b0 * 0x48;
                    plVar7 = local_b8 + 6;
                    plVar16 = local_b8;
                    do {
                      if ((int)plVar7[2] == (int)local_160[2]) {
                        iVar6 = (int)plVar7[-1];
                        *(uint *)(plVar7 + -1) = iVar6 + 1U;
                        if (*(uint *)((longlong)plVar7 + -4) < iVar6 + 1U) {
                          FUN_147944de0(plVar7 + -2,iVar6);
                        }
                        plVar10 = plVar7 + -6;
                        *(longlong **)(plVar7[-2] + (longlong)iVar6 * 8) = local_160;
                        iVar6 = (int)plVar7[-5];
                        *(uint *)(plVar7 + -5) = iVar6 + 1U;
                        plVar22 = plVar10;
                        if (*(uint *)((longlong)plVar7 + -0x24) < iVar6 + 1U) {
LAB_140531f19:
                          FUN_147944f52(plVar10,iVar6);
                        }
LAB_140531ea7:
                        *(undefined8 *)(*plVar22 + (longlong)iVar6 * 8) = local_130;
                      }
                      else if (*(int *)((longlong)plVar7 + 0x14) == (int)local_160[2]) {
                        iVar6 = (int)plVar7[1];
                        *(uint *)(plVar7 + 1) = iVar6 + 1U;
                        if (*(uint *)((longlong)plVar7 + 0xc) < iVar6 + 1U) {
                          FUN_147944de0(plVar7,iVar6);
                        }
                        *(longlong **)(*plVar7 + (longlong)iVar6 * 8) = local_160;
                        plVar22 = plVar16 + 2;
                        iVar6 = (int)plVar7[-3];
                        *(uint *)(plVar7 + -3) = iVar6 + 1U;
                        if (*(uint *)((longlong)plVar7 + -0x14) < iVar6 + 1U) {
                          plVar10 = plVar7 + -4;
                          goto LAB_140531f19;
                        }
                        goto LAB_140531ea7;
                      }
                      plVar16 = plVar16 + 9;
                      plVar7 = plVar7 + 9;
                      lVar11 = lVar11 + -0x48;
                    } while (lVar11 != 0);
                    iVar6 = (int)local_150[1];
                  }
                  local_148 = local_148 + 1;
                } while (local_148 < iVar6);
              }
              if ((longlong)(int)uStack_b0 != 0) {
                local_160 = local_b8 + (longlong)(int)uStack_b0 * 9;
                plVar7 = local_b8;
                do {
                  iVar6 = (int)plVar7[5];
                  if (0 < iVar6) {
                    lVar11 = 0;
                    do {
                      lVar13 = local_158;
                      if (0 < (longlong)(int)plVar7[7]) {
                        plVar16 = *(longlong **)(plVar7[4] + lVar11 * 8);
                        uVar8 = *(undefined8 *)(*plVar7 + lVar11 * 8);
                        lVar12 = 0;
                        do {
                          plVar22 = *(longlong **)(plVar7[6] + lVar12 * 8);
                          if ((plVar16[1] == plVar22[1]) && (*plVar16 == *plVar22)) {
                            uVar4 = *(undefined8 *)(plVar7[2] + lVar12 * 8);
                            uVar9 = FUN_14479d2ce(local_158);
                            FUN_14791f98e(&local_88,uVar9);
                            uVar9 = FUN_14479d2ce(lVar13);
                            FUN_1449b16b6(uVar9,local_88,uVar8,1);
                            uVar9 = FUN_14479d2ce(lVar13);
                            FUN_1449b16b6(uVar9,uVar8,uVar4,1);
                            uVar8 = FUN_14479d2ce(lVar13);
                            FUN_1449b16b6(uVar8,uVar4);
                            iVar6 = (int)plVar7[5];
                            break;
                          }
                          lVar12 = lVar12 + 1;
                        } while ((int)plVar7[7] != lVar12);
                      }
                      lVar11 = lVar11 + 1;
                    } while (lVar11 < iVar6);
                  }
                  plVar7 = plVar7 + 9;
                } while (plVar7 != local_160);
              }
              if (local_128 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
            break;
          }
          lVar12 = lVar12 + 0x100000000;
          uVar23 = uVar23 + 8;
        } while ((longlong)(int)lVar11 * 8 != uVar23);
      }
      local_158 = local_158 + 8;
    } while (local_158 != local_140);
  }
  plVar7 = (longlong *)FUN_14010173e();
  if ((plVar7 != (longlong *)0x0) && (*(char *)(param_2 + 0xc1) == '\x01')) {
    puVar14 = &DAT_14c846480;
    ppvVar17 = &local_128;
    for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
      *ppvVar17 = (void *)*puVar14;
      puVar14 = puVar14 + 1;
      ppvVar17 = ppvVar17 + 1;
    }
    cVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,param_1);
    if (cVar5 != '\0') {
      uVar2 = *(undefined1 *)(param_2 + 0xc0);
      local_58 = local_f8;
      FUN_1433cec3c(&local_88,&local_68,uVar2);
      local_58 = local_78;
      local_68 = local_88;
      uStack_60 = uStack_80;
      local_88 = local_128;
      uStack_80 = CONCAT44(uStack_11c,uStack_120);
      FUN_1433cec84(&local_a8,&local_88,uVar2);
      local_78 = local_98;
      uVar4 = local_78;
      uStack_70 = uStack_90;
      uVar9 = uStack_70;
      local_88 = local_a8;
      uStack_80 = uStack_a0;
      uVar8 = uStack_80;
      uStack_80._0_4_ = (uint)uStack_a0;
      uStack_80._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
      uStack_100 = (undefined4)uStack_60;
      uStack_fc = (undefined4)((ulonglong)uStack_60 >> 0x20);
      local_78._0_4_ = (undefined4)local_98;
      local_78._4_4_ = (undefined4)((ulonglong)local_98 >> 0x20);
      uStack_70._0_4_ = (undefined4)uStack_90;
      uStack_70._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
      local_128 = local_a8;
      uStack_120 = (uint)uStack_80;
      uStack_11c = uStack_80._4_4_;
      local_118 = (undefined4)local_78;
      uStack_114 = local_78._4_4_;
      uStack_110 = (undefined4)uStack_70;
      uStack_10c = uStack_70._4_4_;
      local_108 = (undefined4)local_68;
      uStack_104 = local_68._4_4_;
      local_f8 = local_58;
      uStack_f0 = 0;
      local_d0 = 0;
      uStack_80 = uVar8;
      local_78 = uVar4;
      uStack_70 = uVar9;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_128,param_1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405323e6 FUN_1405323e6 body=744 status=ok
// SIG undefined FUN_1405323e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1405323e6(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  int local_2c;
  ulonglong local_28;
  ulonglong uVar10;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa93c) {
    FUN_144b3d300(&DAT_14caaa93c);
    if (DAT_14caaa93c == -1) {
      _DAT_14caaa930 = 0;
      DAT_14caaa938 = -1;
      _Init_thread_footer(&DAT_14caaa93c);
    }
  }
  if (DAT_14caaa938 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa948) {
      FUN_144b3d300(&DAT_14caaa948);
      if (DAT_14caaa948 == -1) {
        FUN_1446ddc76(&DAT_14caaa940,"bBoneMirroring",1);
        _Init_thread_footer(&DAT_14caaa948);
      }
    }
    if (DAT_14caaa288 == 0) {
      uVar6 = FUN_140c6b56d();
      DAT_14caaa288 = FUN_140002ddd(FUN_146330fa5,uVar6,L"AnimNode_Mirror");
    }
    FUN_14094e66e(&local_34,DAT_14caaa940,param_1,DAT_14caaa288);
    DAT_14caaa938 = local_2c;
    _DAT_14caaa930 = local_34;
  }
  plVar8 = *(longlong **)(param_1 + 8);
  lVar7 = *plVar8;
  uVar1 = *(uint *)(plVar8[2] + (longlong)DAT_14caaa938 * 4);
  uVar9 = uVar1 & 0x7fffffff;
  uVar10 = (ulonglong)uVar9;
  if ((int)uVar1 < 0) {
    if (lVar7 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)plVar8[1];
    }
    lVar4 = plVar8[4];
    if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_14488c8ee) {
      plVar5 = plVar5 + 0x12;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      lVar7 = *plVar8;
    }
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    param_1 = param_1 - *(int *)(*(longlong *)(*plVar5 + (longlong)(int)lVar4 * 8) + 0x44);
    pcVar2 = *(code **)(*plVar8 + 0x108);
    if (pcVar2 == FUN_144a4518c) {
      lVar7 = *(longlong *)(plVar8[0x42] + uVar10 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x118);
      if (pcVar2 == (code *)&LAB_1478d543c) {
        if (plVar8[0x4a] == 0) {
          param_1 = 0;
        }
        else {
          param_1 = param_1 + *(int *)(plVar8[0x4a] + 0x44);
        }
      }
      else {
        param_1 = (*pcVar2)(plVar8,param_1);
      }
      puVar3 = (undefined1 *)(*(int *)(lVar7 + 0x44) + param_1);
    }
    else {
      puVar3 = (undefined1 *)(*pcVar2)(plVar8,uVar10,param_1);
    }
  }
  else {
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    pcVar2 = *(code **)(*plVar8 + 0x100);
    if (pcVar2 == FUN_144a45148) {
      lVar7 = *(longlong *)(plVar8[0x44] + (ulonglong)uVar9 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == (code *)&LAB_1478d5456) {
        lVar4 = plVar8[-0x53];
      }
      else {
        lVar4 = (*pcVar2)();
      }
      puVar3 = (undefined1 *)(*(int *)(lVar7 + 0x44) + lVar4);
    }
    else {
      puVar3 = (undefined1 *)(*pcVar2)(plVar8,uVar10);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return *puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405326d0 FUN_1405326d0 body=744 status=ok
// SIG undefined FUN_1405326d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1405326d0(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  int local_2c;
  ulonglong local_28;
  ulonglong uVar10;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa95c) {
    FUN_144b3d300(&DAT_14caaa95c);
    if (DAT_14caaa95c == -1) {
      _DAT_14caaa950 = 0;
      DAT_14caaa958 = -1;
      _Init_thread_footer(&DAT_14caaa95c);
    }
  }
  if (DAT_14caaa958 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa968) {
      FUN_144b3d300(&DAT_14caaa968);
      if (DAT_14caaa968 == -1) {
        FUN_1446ddc76(&DAT_14caaa960,"bCurveMirroring",1);
        _Init_thread_footer(&DAT_14caaa968);
      }
    }
    if (DAT_14caaa288 == 0) {
      uVar6 = FUN_140c6b56d();
      DAT_14caaa288 = FUN_140002ddd(FUN_146330fa5,uVar6,L"AnimNode_Mirror");
    }
    FUN_14094e66e(&local_34,DAT_14caaa960,param_1,DAT_14caaa288);
    DAT_14caaa958 = local_2c;
    _DAT_14caaa950 = local_34;
  }
  plVar8 = *(longlong **)(param_1 + 8);
  lVar7 = *plVar8;
  uVar1 = *(uint *)(plVar8[2] + (longlong)DAT_14caaa958 * 4);
  uVar9 = uVar1 & 0x7fffffff;
  uVar10 = (ulonglong)uVar9;
  if ((int)uVar1 < 0) {
    if (lVar7 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)plVar8[1];
    }
    lVar4 = plVar8[4];
    if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_14488c8ee) {
      plVar5 = plVar5 + 0x12;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      lVar7 = *plVar8;
    }
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    param_1 = param_1 - *(int *)(*(longlong *)(*plVar5 + (longlong)(int)lVar4 * 8) + 0x44);
    pcVar2 = *(code **)(*plVar8 + 0x108);
    if (pcVar2 == FUN_144a4518c) {
      lVar7 = *(longlong *)(plVar8[0x42] + uVar10 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x118);
      if (pcVar2 == (code *)&LAB_1478d543c) {
        if (plVar8[0x4a] == 0) {
          param_1 = 0;
        }
        else {
          param_1 = param_1 + *(int *)(plVar8[0x4a] + 0x44);
        }
      }
      else {
        param_1 = (*pcVar2)(plVar8,param_1);
      }
      puVar3 = (undefined1 *)(*(int *)(lVar7 + 0x44) + param_1);
    }
    else {
      puVar3 = (undefined1 *)(*pcVar2)(plVar8,uVar10,param_1);
    }
  }
  else {
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    pcVar2 = *(code **)(*plVar8 + 0x100);
    if (pcVar2 == FUN_144a45148) {
      lVar7 = *(longlong *)(plVar8[0x44] + (ulonglong)uVar9 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == (code *)&LAB_1478d5456) {
        lVar4 = plVar8[-0x53];
      }
      else {
        lVar4 = (*pcVar2)();
      }
      puVar3 = (undefined1 *)(*(int *)(lVar7 + 0x44) + lVar4);
    }
    else {
      puVar3 = (undefined1 *)(*pcVar2)(plVar8,uVar10);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return *puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405329ba FUN_1405329ba body=744 status=ok
// SIG undefined FUN_1405329ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1405329ba(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  int local_2c;
  ulonglong local_28;
  ulonglong uVar10;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa97c) {
    FUN_144b3d300(&DAT_14caaa97c);
    if (DAT_14caaa97c == -1) {
      _DAT_14caaa970 = 0;
      DAT_14caaa978 = -1;
      _Init_thread_footer(&DAT_14caaa97c);
    }
  }
  if (DAT_14caaa978 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa988) {
      FUN_144b3d300(&DAT_14caaa988);
      if (DAT_14caaa988 == -1) {
        FUN_1446ddc76(&DAT_14caaa980,"bAttributeMirroring",1);
        _Init_thread_footer(&DAT_14caaa988);
      }
    }
    if (DAT_14caaa288 == 0) {
      uVar6 = FUN_140c6b56d();
      DAT_14caaa288 = FUN_140002ddd(FUN_146330fa5,uVar6,L"AnimNode_Mirror");
    }
    FUN_14094e66e(&local_34,DAT_14caaa980,param_1,DAT_14caaa288);
    DAT_14caaa978 = local_2c;
    _DAT_14caaa970 = local_34;
  }
  plVar8 = *(longlong **)(param_1 + 8);
  lVar7 = *plVar8;
  uVar1 = *(uint *)(plVar8[2] + (longlong)DAT_14caaa978 * 4);
  uVar9 = uVar1 & 0x7fffffff;
  uVar10 = (ulonglong)uVar9;
  if ((int)uVar1 < 0) {
    if (lVar7 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)plVar8[1];
    }
    lVar4 = plVar8[4];
    if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_14488c8ee) {
      plVar5 = plVar5 + 0x12;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      lVar7 = *plVar8;
    }
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    param_1 = param_1 - *(int *)(*(longlong *)(*plVar5 + (longlong)(int)lVar4 * 8) + 0x44);
    pcVar2 = *(code **)(*plVar8 + 0x108);
    if (pcVar2 == FUN_144a4518c) {
      lVar7 = *(longlong *)(plVar8[0x42] + uVar10 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x118);
      if (pcVar2 == (code *)&LAB_1478d543c) {
        if (plVar8[0x4a] == 0) {
          param_1 = 0;
        }
        else {
          param_1 = param_1 + *(int *)(plVar8[0x4a] + 0x44);
        }
      }
      else {
        param_1 = (*pcVar2)(plVar8,param_1);
      }
      puVar3 = (undefined1 *)(*(int *)(lVar7 + 0x44) + param_1);
    }
    else {
      puVar3 = (undefined1 *)(*pcVar2)(plVar8,uVar10,param_1);
    }
  }
  else {
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    pcVar2 = *(code **)(*plVar8 + 0x100);
    if (pcVar2 == FUN_144a45148) {
      lVar7 = *(longlong *)(plVar8[0x44] + (ulonglong)uVar9 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == (code *)&LAB_1478d5456) {
        lVar4 = plVar8[-0x53];
      }
      else {
        lVar4 = (*pcVar2)();
      }
      puVar3 = (undefined1 *)(*(int *)(lVar7 + 0x44) + lVar4);
    }
    else {
      puVar3 = (undefined1 *)(*pcVar2)(plVar8,uVar10);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return *puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140532ca4 FUN_140532ca4 body=89 status=ok
// SIG undefined FUN_140532ca4(void)

ulonglong FUN_140532ca4(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  cVar1 = FUN_140532cfe();
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_1403ca102(param_1 + -0x10b0);
    uVar4 = CONCAT71((int7)((ulonglong)(param_1 + -0x10b0) >> 8),1);
    if ((plVar3 == (longlong *)0x0) ||
       ((bVar2 = (**(code **)(*plVar3 + 0x498))(plVar3), 5 < bVar2 &&
        (cVar1 = (**(code **)(*plVar3 + 0x498))(plVar3), cVar1 != '\t')))) goto LAB_140532cb8;
  }
  uVar4 = 0;
LAB_140532cb8:
  return uVar4 & 0xffffffff;
}



// FUNCTION 140532cfe FUN_140532cfe body=159 status=ok
// SIG undefined FUN_140532cfe(void)

ulonglong FUN_140532cfe(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined7 uVar5;
  
  lVar1 = *(longlong *)(param_1 + -0xcf0);
  if (lVar1 == 0) {
LAB_140532d13:
    uVar5 = (undefined7)((ulonglong)lVar1 >> 8);
    uVar4 = CONCAT71(uVar5,1);
    if (*(longlong *)(param_1 + 0x138) == 0) goto LAB_140532d60;
    cVar2 = FUN_140532d9e();
    if (cVar2 == '\0') goto LAB_140532d60;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x1518);
    if (lVar1 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0xcc0);
      uVar4 = CONCAT71(uVar5,1 < (ulonglong)(DAT_14c872be0 - lVar1) && lVar1 != 0);
      goto LAB_140532d60;
    }
  }
  else {
    lVar3 = FUN_144a75eb4();
    if (((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         != lVar3 + 0x30)) || ((~*(uint *)(lVar1 + 0x5a0) & 6) != 0)) goto LAB_140532d13;
  }
  uVar4 = 0;
LAB_140532d60:
  return uVar4 & 0xffffffff;
}



// FUNCTION 140532d9e FUN_140532d9e body=112 status=ok
// SIG undefined FUN_140532d9e(void)

bool FUN_140532d9e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x1f0);
  if ((lVar1 == 0) || (*(char *)(param_1 + 0x1539) == '\0')) {
    bVar3 = false;
  }
  else {
    if ((*(longlong *)(lVar1 + 0x170) != 0) && (DAT_14c87ead8 == '\0')) {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    iVar2 = FUN_14487fd02(lVar1);
    bVar3 = true;
    if (iVar2 == 3) {
      bVar3 = *(char *)(*(longlong *)(param_1 + 0x1f0) + 0x68) != '\0';
    }
  }
  return bVar3;
}



// FUNCTION 140532e0e FUN_140532e0e body=335 status=ok
// SIG undefined FUN_140532e0e(void)

undefined8 * FUN_140532e0e(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_140533278();
  *param_1 = &PTR_FUN_14a200350;
  uVar2 = FUN_140532ff2(param_1[1]);
  param_1[0x1a8] = uVar2;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0;
  param_1[0x1b1] = 0;
  param_1[0x1b2] = 0;
  param_1[0x1b3] = 0;
  param_1[0x1b4] = 0;
  *(undefined1 *)(param_1 + 0x1b5) = 0;
  param_1[0x1b6] = *(undefined8 *)(param_1[1] + 0x5350);
  param_1[0x1b7] = param_1;
  *(undefined1 *)(param_1 + 0x1c6) = 0;
  param_1[0x1cb] = 0;
  param_1[0x1cc] = 0x100000000;
  param_1[0x1c3] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c1] = 0;
  param_1[0x1c2] = 0;
  param_1[0x1bf] = 0;
  param_1[0x1c0] = 0;
  param_1[0x1bd] = 0;
  param_1[0x1be] = 0;
  param_1[0x1bb] = 0;
  param_1[0x1bc] = 0;
  param_1[0x1ce] = 0;
  *(undefined2 *)(param_1 + 0x1cd) = 0;
  param_1[0x1cf] = DAT_14c967818;
  param_1[0x1d0] = 0x13f800000;
  param_1[0x1d1] = 0;
  param_1[0x1d2] = 0;
  *(undefined1 *)(param_1 + 0x1d3) = 0;
  FUN_140532f5e(param_1 + 0x1c7,*(undefined4 *)(param_1 + 0x82),1);
  uVar2 = FUN_14001cc68(0x98,0x10);
  FUN_140533112(uVar2,param_1);
  lVar1 = param_1[0xf8];
  param_1[0xf8] = uVar2;
  if (lVar1 != 0) {
    FUN_1400bfd20(lVar1);
    FUN_1400020a8(lVar1);
  }
  return param_1;
}



// FUNCTION 140532f5e FUN_140532f5e body=147 status=ok
// SIG undefined FUN_140532f5e(void)

void FUN_140532f5e(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)(param_1 + 0x2c) - iVar1) < uVar3) {
      FUN_14714c036(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar2 = param_1;
    }
    if (uVar3 != 0) {
      memset((void *)((longlong)iVar1 * 0x20 + lVar2),0,(ulonglong)uVar3 << 5);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 0x28) = param_2, param_3 == '\x01')) {
    FUN_14714c138(param_1);
    return;
  }
  return;
}



// FUNCTION 140532ff2 FUN_140532ff2 body=287 status=ok
// SIG undefined FUN_140532ff2(void)

ulonglong FUN_140532ff2(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  lVar4 = DAT_14c9c4760;
  if (param_1 == 0) {
    uVar10 = 0;
    uVar11 = 0;
  }
  else {
    uVar10 = (ulonglong)*(uint *)(param_1 + 0x35e8);
    uVar11 = (ulonglong)*(byte *)(param_1 + 0x35ec) << 0x20;
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar1 = *(int *)(lVar3 + 0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar9 = 0;
  }
  else if (iVar1 == 1) {
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar7 != DVar8);
  }
  else {
    uVar9 = 1;
  }
  uVar12 = 0x1000000000000;
  iVar1 = *(int *)(lVar4 + uVar9 * 4);
  if ((DAT_14ca84e22 == '\x01') && (cVar5 = FUN_1448072cd(), lVar4 = DAT_14c9c4748, cVar5 == '\0'))
  {
    if (*(int *)(lVar3 + 0xc60) == 0x40000002) {
      uVar9 = 0;
    }
    else {
      bVar6 = FUN_144a61b4f();
      uVar9 = (ulonglong)(bVar6 ^ 1);
    }
    iVar2 = *(int *)(lVar4 + uVar9 * 4);
    if (iVar2 == 2) {
      uVar12 = 0x4000000000000;
    }
    if (iVar2 == 1) {
      uVar12 = 0x2000000000000;
    }
  }
  return uVar11 | uVar10 | (ulonglong)(0 < iVar1) << 0x28 | uVar12;
}



// FUNCTION 140533112 FUN_140533112 body=358 status=ok
// SIG undefined FUN_140533112(void)

undefined8 * FUN_140533112(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = param_2;
  lVar7 = *(longlong *)(param_2 + 8);
  param_1[9] = lVar7;
  param_1[10] = *(undefined8 *)(lVar7 + 0x4c40);
  param_1[0xb] = param_2 + 0x5b0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  puVar2 = DAT_14ca5bab8;
  bVar1 = DAT_14c86a9f8;
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = *(int *)(lVar7 + 0xc60);
  if (iVar3 == 0x40000002) {
    *(undefined1 *)((longlong)param_1 + 0x89) = *DAT_14ca5bab8;
    uVar6 = 0;
    lVar7 = DAT_14ca5ba88;
    goto LAB_1405331df;
  }
  if (DAT_14c86a9f8 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x89) = *DAT_14ca5bab8;
LAB_1405331c7:
    lVar7 = DAT_14ca5ba88;
    if (((bVar1 & 1) != 0) && (iVar3 != 2)) {
      if (iVar3 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar6 = (ulonglong)(DVar4 != DVar5);
      }
      else {
        uVar6 = 1;
      }
      goto LAB_1405331df;
    }
  }
  else {
    if (iVar3 == 2) {
      *(undefined1 *)((longlong)param_1 + 0x89) = *DAT_14ca5bab8;
      iVar3 = 2;
      bVar1 = DAT_14c86a9f8;
      goto LAB_1405331c7;
    }
    uVar6 = 1;
    if (iVar3 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar6 = (ulonglong)(DVar4 != DVar5);
      iVar3 = *(int *)(lVar7 + 0xc60);
    }
    *(undefined1 *)((longlong)param_1 + 0x89) = puVar2[uVar6];
    bVar1 = DAT_14c86a9f8;
    if (iVar3 != 0x40000002) goto LAB_1405331c7;
  }
  uVar6 = 0;
  lVar7 = DAT_14ca5ba88;
LAB_1405331df:
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(lVar7 + uVar6 * 4);
  *(undefined2 *)(param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 140533278 FUN_140533278 body=5506 status=ok
// SIG undefined FUN_140533278(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_140533278(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined *puVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  int *piVar14;
  undefined4 *puVar15;
  longlong lVar16;
  void *_Dst;
  int iVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  byte bVar20;
  undefined8 *puVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  bool bVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_36f8 [32];
  undefined4 local_36d8;
  undefined8 *local_36d0;
  byte *local_36c8;
  undefined8 *local_36c0;
  int local_36b4;
  longlong *local_36b0;
  undefined8 *local_36a8;
  longlong local_36a0;
  undefined8 *local_3698;
  longlong *local_3690;
  undefined **local_3688;
  longlong local_3680;
  longlong local_3678;
  undefined8 *local_3670;
  undefined8 *local_3668;
  longlong local_3660;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 local_578 [16];
  undefined8 local_4f8 [16];
  undefined8 local_478;
  undefined8 uStack_470;
  undefined1 local_450;
  undefined1 local_3c8;
  undefined8 local_3b8 [16];
  undefined1 local_338;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  longlong *local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined1 *local_2b8;
  undefined1 *puStack_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_23c;
  undefined4 local_234;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined1 uStack_1a8;
  undefined8 uStack_1a7;
  undefined1 local_19f;
  undefined8 local_19c;
  undefined1 *local_194;
  undefined4 local_18c;
  undefined4 local_188;
  undefined1 local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined7 local_157;
  undefined1 uStack_150;
  undefined8 uStack_14f;
  undefined8 local_140;
  undefined3 uStack_138;
  undefined5 uStack_135;
  undefined3 uStack_130;
  undefined8 uStack_12d;
  undefined1 local_118 [37];
  byte local_f3;
  byte local_ee;
  longlong local_d0;
  ulonglong local_90;
  undefined8 uStack_48;
  
  uStack_48 = 0x14053328e;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_36f8;
  local_36c0 = param_3;
  uVar6 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x3e0))();
  *param_1 = &PTR_FUN_14a2f1c30;
  param_1[1] = uVar6;
  FUN_1404606c4(param_1 + 2);
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *param_1 = &PTR_LAB_14a2efeb0;
  param_1[0x12] = 0;
  local_36d0 = param_1 + 0x13;
  FUN_1448ee4fa(local_36d0,param_2);
  param_1[0x8f] = 0;
  param_1[0x90] = 0x1000000000;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  uVar23 = DAT_14ca8b9f8;
  if ((int)DAT_14ca8b9f8 < 1) {
    if ((int)DAT_14ca8b9f8 < 0) goto LAB_14053477b;
    param_1[0x99] = 0;
    param_1[0x9a] = 0x1000000000;
  }
  else {
    *(uint *)(param_1 + 0x90) = DAT_14ca8b9f8;
    if (uVar23 < 0x11) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      FUN_1472ddbf0(param_1 + 0x87,0);
      puVar7 = (undefined8 *)param_1[0x8f];
    }
    puVar21 = param_1 + 0x87;
    if (puVar7 != (undefined8 *)0x0) {
      puVar21 = puVar7;
    }
    FUN_1448b6b1e(puVar21,uVar23);
    uVar23 = DAT_14ca8b9f8;
    param_1[0x99] = 0;
    param_1[0x9a] = 0x1000000000;
    if ((int)uVar23 < 1) {
      if ((int)uVar23 < 0) goto LAB_14053477b;
    }
    else {
      *(uint *)(param_1 + 0x9a) = uVar23;
      if (uVar23 < 0x11) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        FUN_1472ddbf0(param_1 + 0x91,0);
        puVar7 = (undefined8 *)param_1[0x99];
      }
      puVar21 = param_1 + 0x91;
      if (puVar7 != (undefined8 *)0x0) {
        puVar21 = puVar7;
      }
      FUN_1448b6b1e(puVar21,uVar23);
    }
  }
  param_1[0xa8] = 0;
  param_1[0xa9] = 0x400000000;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  *(undefined1 *)(param_1 + 0x9d) = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb6] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5f4) = 0;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5fc) = 0x3f800000;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xd5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x729) = 0;
  *(undefined8 *)((longlong)param_1 + 0x731) = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  *(undefined8 *)((longlong)param_1 + 0x76a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x772) = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = param_1[1];
  *(undefined4 *)(param_1 + 0xf6) = 0x10101;
  *(undefined2 *)((longlong)param_1 + 0x7b4) = 0;
  *(undefined4 *)(param_1 + 0xf7) = 0xffffffff;
  param_1[0xf8] = 0;
  FUN_1402bf2d6(param_1 + 0xf9);
  *(undefined2 *)(param_1 + 0x114) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8aa) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8ac) = 1;
  *(undefined2 *)(param_1 + 0x116) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x8b2) = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  *(undefined4 *)(param_1 + 0x119) = 2;
  *(undefined8 *)((longlong)param_1 + 0x8cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8fc) = 0x100000000;
  param_1[0x121] = 0;
  *(undefined1 *)(param_1 + 0x123) = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0x8000000000;
  param_1[0x1a6] = param_1[1] + 0x3f08;
  *(undefined1 *)(param_1 + 0x1a7) = 0;
  param_1[0x42] = param_1;
  uVar23 = *(uint *)(param_2 + 0x10);
  if ((int)uVar23 < 0) {
LAB_14053477b:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar23);
  }
  plVar8 = param_1 + 0x7d;
  FUN_14002d158(param_1[0x7d],*(undefined4 *)(param_1 + 0x7e));
  *(undefined4 *)(param_1 + 0x7e) = 0;
  if (*(uint *)((longlong)param_1 + 0x3f4) != uVar23) {
    FUN_14177f1e2(plVar8,uVar23);
  }
  local_36a8 = param_1 + 0x123;
  local_36b0 = plVar8;
  if (*(int *)(param_2 + 0x10) < 1) {
    bVar20 = 0;
  }
  else {
    local_36c8 = (byte *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         );
    lVar24 = 0;
    bVar20 = 0;
    do {
      lVar16 = *(longlong *)(param_2 + 8);
      iVar17 = *(int *)(param_1 + 0x7e);
      *(uint *)(param_1 + 0x7e) = iVar17 + 1U;
      if (*(uint *)((longlong)param_1 + 0x3f4) < iVar17 + 1U) {
        FUN_1472df1dc(local_36b0,iVar17);
      }
      lVar22 = param_1[0x7d];
      lVar25 = (longlong)iVar17 * 0x13c10;
      lVar9 = lVar22 + lVar25;
      FUN_144a3da16(lVar9,*(undefined8 *)(lVar16 + lVar24 * 8));
      *(longlong *)(param_1[0x14] + lVar24 * 8) = lVar9;
      *(undefined8 **)(lVar22 + 8 + lVar25) = local_36d0;
      bVar20 = bVar20 & 1 | *(byte *)(lVar22 + 0x23f0 + lVar25);
      *(int *)(lVar22 + 0x30a8 + lVar25) = (int)lVar24;
      puVar7 = (undefined8 *)(lVar22 + 0x13ba0 + lVar25);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined8 *)(lVar22 + 0x13ba9 + lVar25);
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined8 **)(lVar22 + 0x13bc0 + lVar25) = local_36a8;
      puVar7 = (undefined8 *)(lVar22 + 0x13bd0 + lVar25);
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7 = (undefined8 *)(lVar22 + 0x13bd9 + lVar25);
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined8 **)(lVar22 + 0x13bf0 + lVar25) = local_36a8;
      if (*(longlong *)(lVar22 + 0x4d0 + lVar25) != 0) {
        local_3660 = lVar9 + 0x13b98;
        local_3688 = &PTR_FUN_14a217cb0;
        local_3670 = (undefined8 *)0x0;
        local_3668 = local_36c0;
        local_3680 = lVar9;
        local_3678 = lVar9;
        (**(code **)**(undefined8 **)(lVar9 + 0x4d0))
                  (*(undefined8 **)(lVar9 + 0x4d0),lVar9,&local_3688);
        local_3688 = &PTR_FUN_14a217cb0;
        if (local_3670 != (undefined8 *)0x0) {
          piVar14 = (int *)(local_3670 + 1);
          *piVar14 = *piVar14 + -1;
          if (*piVar14 == 0) {
            (**(code **)*local_3670)(local_3670,1);
          }
        }
      }
      cVar2 = FUN_1449a7bda(param_1[1],lVar9,0,0);
      if (cVar2 == '\0') {
        local_36d8 = 0;
        cVar2 = FUN_140444219(lVar9,0);
        if ((((cVar2 != '\0') || (0 < *DAT_14ca69630)) ||
            (cVar2 = FUN_14005b4aa(*(undefined2 *)
                                    (&DAT_14ca85070 + (longlong)*(int *)(param_1[1] + 8) * 2)),
            cVar2 != '\0')) ||
           ((cVar2 = FUN_14178fb38(*(undefined2 *)
                                    (&DAT_14ca85070 + (longlong)*(int *)(lVar9 + 0x3090) * 2)),
            cVar2 != '\0' ||
            (cVar2 = FUN_140919df9(0,*(undefined2 *)
                                      (&DAT_14ca85070 + (longlong)*(int *)(lVar9 + 0x3090) * 2)),
            cVar2 != '\0')))) goto LAB_14053386a;
      }
      else {
LAB_14053386a:
        FUN_1415ff5aa(DAT_14cb0d2b0);
      }
      cVar2 = FUN_14178fb38();
      if (cVar2 != '\0') {
        FUN_147d7f6dc();
      }
      lVar16 = DAT_14ca97170;
      iVar17 = *(int *)local_36c8;
      if (((iVar17 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar17 == 2)) {
        uVar13 = 0;
      }
      else if (iVar17 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar13 = (ulonglong)(DVar4 != DVar5);
      }
      else {
        uVar13 = 1;
      }
      if (0 < *(int *)(lVar16 + uVar13 * 4)) {
        FUN_147d7f7de(DAT_14cb0d2b0);
      }
      if ((*(char *)(lVar9 + 0x2545) == '\x01') && (*(longlong *)(lVar9 + 0x3108) != 0)) {
        lVar16 = *(longlong *)(lVar9 + 0x28a0);
        if (lVar16 == 0) {
          FUN_147d7f5c6(DAT_14cb0d2b0);
          lVar16 = *(longlong *)(DAT_14cb0d2b0 + 0x430);
        }
        cVar2 = FUN_142fe51e2(lVar16);
        if (cVar2 != '\0') {
          plVar8 = (longlong *)FUN_1447b4020(lVar16);
          if (plVar8 == (longlong *)0x0) {
            lVar16 = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar8 + 0x50))(plVar8);
            *(undefined8 *)(lVar9 + 0x13830) = uVar6;
            if ((lVar16 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar16);
            }
          }
          *(longlong *)(lVar9 + 0x28a0) = lVar16;
        }
      }
      if ((0.0 < *(float *)(lVar9 + 0x2ac8)) && (*DAT_14ca46318 != 0)) {
        piVar14 = (int *)(param_1[0x1b] + 8);
        if (param_1[0x1b] == 0) {
          piVar14 = &DAT_14c760db4;
        }
        if (2 < (int)(&DAT_14ca814b8)
                     [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar14 * 2) * 0xf]) {
          lVar16 = *(longlong *)(lVar9 + 0x2ae8);
          if (lVar16 == 0) {
            FUN_147d7f64c(DAT_14cb0d2b0);
            lVar16 = *(longlong *)(DAT_14cb0d2b0 + 0x458);
          }
          cVar2 = FUN_142fe51e2(lVar16);
          if ((cVar2 != '\0') &&
             (plVar8 = (longlong *)FUN_1447b4020(lVar16), plVar8 != (longlong *)0x0)) {
            uVar6 = (**(code **)(*plVar8 + 0x50))(plVar8);
            *(undefined8 *)(lVar9 + 0x13838) = uVar6;
          }
        }
      }
      if ((0.0 <= *DAT_14ca46330) && (cVar2 = FUN_141773f3f(lVar9), cVar2 != '\0')) {
        fVar28 = 1.0 - *DAT_14ca46330;
        if (1.0 <= fVar28) {
          fVar28 = 1.0;
        }
        if (fVar28 <= 0.01) {
          fVar28 = 0.01;
        }
        *(float *)(lVar9 + 0x125b4) = *(float *)(lVar9 + 0x2b50) / fVar28;
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 < *(int *)(param_2 + 0x10));
  }
  if ((*(byte *)((longlong)param_1 + 0xe7) & 2) != 0) {
    FUN_14495554e(local_36d0);
  }
  param_1[0x43] = 0;
  uVar6 = (**(code **)(**(longlong **)(param_2 + 0x180) + 0x10))
                    (*(longlong **)(param_2 + 0x180),local_36d0);
  param_1[0x43] = uVar6;
  if (param_1[0x44] != 0) {
    param_1[0x44] = 0;
    uVar6 = (**(code **)(**(longlong **)(param_2 + 0x188) + 0x28))();
    param_1[0x44] = uVar6;
    iVar17 = *(int *)(param_1 + 0x7e);
    if ((longlong)iVar17 != 0) {
      lVar24 = param_1[0x7d];
      lVar16 = 0;
      do {
        *(undefined1 **)(lVar24 + 0x3020 + lVar16) = &DAT_100000002;
        lVar16 = lVar16 + 0x13c10;
      } while ((longlong)iVar17 * 0x13c10 - lVar16 != 0);
    }
  }
  if (param_1[0x45] != 0) {
    param_1[0x45] = 0;
    uVar6 = (**(code **)(**(longlong **)(param_2 + 400) + 0x10))
                      (*(longlong **)(param_2 + 400),local_36d0);
    param_1[0x45] = uVar6;
  }
  if (param_1[0x46] != 0) {
    param_1[0x46] = 0;
    uVar6 = (**(code **)(**(longlong **)(param_2 + 0x198) + 0x10))
                      (*(longlong **)(param_2 + 0x198),local_36d0);
    param_1[0x46] = uVar6;
  }
  if (bVar20 != 0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
  }
  if ((*(longlong **)(param_2 + 0x30) != (longlong *)0x0) &&
     (cVar2 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x58))(), cVar2 != '\0')) {
    *(undefined1 *)(param_1 + 0x114) = 1;
  }
  if ((DAT_14ca44d20 != (undefined8 *)0x0) && (0 < *(int *)(param_1 + 0x7e))) {
    lVar24 = 0;
    lVar16 = 0;
    do {
      lVar9 = param_1[0x7d];
      uVar6 = (**(code **)*DAT_14ca44d20)(DAT_14ca44d20,lVar9 + lVar24);
      *(undefined8 *)(lVar9 + 0x13828 + lVar24) = uVar6;
      lVar16 = lVar16 + 1;
      lVar24 = lVar24 + 0x13c10;
    } while (lVar16 < *(int *)(param_1 + 0x7e));
  }
  iVar17 = *(int *)(param_1[1] + 0x5348);
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar17);
  }
  puVar7 = param_1 + 0x7f;
  FUN_14002d181(param_1[0x7f]);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)((longlong)param_1 + 0x404) != iVar17) {
    FUN_1472df270(puVar7);
  }
  local_36c8 = (byte *)(param_1 + 0x1c);
  lVar24 = param_1[1];
  if (*(int *)(lVar24 + 0x5348) < 1) {
    iVar17 = 0;
  }
  else {
    local_3690 = param_1 + 0x24;
    local_36c0 = &local_478;
    iVar17 = 0;
    uVar13 = 0;
    do {
      lVar24 = *(longlong *)(lVar24 + 0x5340);
      lVar9 = uVar13 * 0x220;
      lVar16 = *(longlong *)(lVar24 + 0x218 + lVar9);
      FUN_147149c5c();
      puVar10 = (undefined *)FUN_147cc7e18(lVar16);
      if (puVar10 == (undefined *)0x0) {
        puVar10 = &DAT_14ca47530;
      }
      if ((puVar10[8] != '\x01') || (iVar12 = 1, *(char *)((longlong)param_1 + 0x16a) == '\x01')) {
        puVar21 = (undefined8 *)(lVar24 + lVar9);
        pbVar19 = (byte *)(puVar21 + 0x38);
        if (*(char *)((longlong)puVar21 + 0x215) != '\0') {
          pbVar19 = local_36c8;
        }
        local_36b4 = iVar17;
        FUN_14031f39e(local_118,param_1[0x19],param_1[1],pbVar19);
        local_ee = local_ee & 0xfd;
        local_f3 = local_f3 | 0x80;
        iVar17 = *(int *)(param_1 + 0x80);
        *(uint *)(param_1 + 0x80) = iVar17 + 1U;
        if (*(uint *)((longlong)param_1 + 0x404) < iVar17 + 1U) {
          FUN_1472df2e0(puVar7,iVar17);
        }
        lVar24 = param_1[0x7f];
        local_36a0 = (longlong)iVar17 * 0x3c0 + lVar24;
        local_3698 = puVar7;
        FUN_1472db110(local_36a0,local_118,local_36d0);
        plVar8 = (longlong *)((longlong)iVar17 * 0x3c0 + lVar24);
        plVar11 = plVar8 + 1;
        *plVar8 = lVar16;
        lVar24 = local_3690[1];
        plVar8[0x12] = *local_3690;
        plVar8[0x13] = lVar24;
        plVar8[0x14] = local_3690[2];
        plVar8[0x30] = (longlong)param_1;
        *(undefined *)(plVar8 + 0x69) = puVar10[9];
        puVar7 = &DAT_14c846400;
        puVar18 = local_578;
        for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
          *puVar18 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar18 = puVar18 + 1;
        }
        puVar7 = &DAT_14c846400;
        puVar18 = local_4f8;
        for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
          *puVar18 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar18 = puVar18 + 1;
        }
        local_450 = 0;
        local_3c8 = 0;
        *local_36c0 = 0;
        local_36c0[1] = 0;
        local_318 = DAT_14c8464f0;
        local_328 = DAT_14c8464e0;
        uStack_320 = DAT_14c8464e8;
        local_2e8 = 0xffffffff;
        local_2c0 = 0;
        local_2d0 = 0;
        uStack_2c8 = 0;
        local_2e0 = 0;
        uStack_2d8 = 0;
        local_2b8 = &DAT_3f8000003f800000;
        puStack_2b0 = &DAT_3f8000003f800000;
        local_2a8 = 0xffffffff00000000;
        local_2a0 = 0x42c80000;
        local_248 = 0;
        local_240 = 0;
        local_298 = 0;
        uStack_290 = 0;
        local_288 = 0;
        uStack_280 = 0;
        local_278 = 0;
        uStack_270 = 0;
        local_268 = 0;
        uStack_260 = 0;
        local_23c = 0xffffffff00000080;
        local_234 = 0;
        local_228 = 0;
        local_220 = 0;
        local_218 = 0;
        local_210 = 0xffffffff00000000;
        local_1f8 = 0;
        local_1f0 = 0x8000000000;
        uStack_1e8 = 0xffffffff;
        local_1d8 = 0;
        local_1d0 = 0;
        local_1c8 = 0xffffffffffffffff;
        local_1c0 = 0xbf8000003f800000;
        local_1b8 = 0;
        uStack_1b0 = 0;
        uStack_1af = 0;
        uStack_1a8 = 0;
        uStack_1a7 = 0;
        local_19f = 1;
        local_19c = 0x42b4000042b40000;
        local_18c = 0;
        local_194 = &DAT_3f8000003f800000;
        local_188 = 0;
        local_184 = 0;
        local_180 = 0x3f800000bf800000;
        local_178 = 0x3f800000;
        uStack_150 = 0;
        uStack_14f = 0;
        uStack_160 = 0;
        uStack_158 = 0;
        local_157 = 0;
        local_170 = 0;
        uStack_168 = 0;
        local_140 = 0;
        uStack_138 = 0;
        uStack_135 = 0;
        uStack_130 = 0;
        uStack_12d = 0;
        puVar7 = &DAT_14c846400;
        puVar18 = local_3b8;
        for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
          *puVar18 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar18 = puVar18 + 1;
        }
        local_338 = 1;
        uStack_2f8 = puVar21[0x41];
        uStack_470 = *(undefined8 *)(lVar16 + 0x28);
        local_478 = 0;
        local_310 = 0;
        local_598 = *puVar21;
        uStack_590 = puVar21[1];
        local_588 = puVar21[2];
        puVar7 = puVar21 + 4;
        puVar18 = local_578;
        uStack_308 = uStack_470;
        for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
          *puVar18 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar18 = puVar18 + 1;
        }
        puVar7 = puVar21 + 0x14;
        puVar18 = local_4f8;
        for (lVar24 = 0x10; lVar24 != 0; lVar24 = lVar24 + -1) {
          *puVar18 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar18 = puVar18 + 1;
        }
        local_188 = CONCAT31(local_188._1_3_,*(undefined1 *)((longlong)puVar21 + 0x214));
        local_2f0 = puVar21[0x40];
        local_300 = plVar11;
        if ((puVar21 + 0x2e != &local_218) && (*(int *)((longlong)puVar21 + 0x17c) != -1)) {
          FUN_1472df374(&local_218);
        }
        FUN_144899d7a(&local_268,puVar21 + 0x24);
        FUN_144891fa0(&local_3688,&local_598);
        lVar24 = local_36a0;
        iVar17 = *(int *)(local_36a0 + 0x360);
        *(uint *)(local_36a0 + 0x360) = iVar17 + 1U;
        if (*(uint *)(local_36a0 + 0x364) < iVar17 + 1U) {
          FUN_1472df1dc(local_36a0 + 0x358,iVar17);
        }
        lVar22 = (longlong)iVar17 * 0x13c10 + *(longlong *)(lVar24 + 0x358);
        FUN_144a3da16(lVar22);
        iVar17 = *(int *)(lVar24 + 0x18);
        uVar23 = iVar17 + 1;
        *(uint *)(lVar24 + 0x18) = uVar23;
        if (*(uint *)(lVar24 + 0x1c) < uVar23) {
          FUN_144928a2e((longlong *)(lVar24 + 0x10));
        }
        *(longlong *)(*(longlong *)(lVar24 + 0x10) + (longlong)iVar17 * 8) = lVar22;
        if (*(char *)((longlong)puVar21 + 0x216) == '\x01') {
          puVar21 = puVar21 + 0x42;
        }
        else {
          puVar21 = (undefined8 *)(*local_36b0 + 0x2c04);
        }
        *(undefined4 *)(lVar22 + 0x2c04) = *(undefined4 *)puVar21;
        *(undefined8 *)(lVar22 + 0x13ba0) = 0;
        *(undefined8 *)(lVar22 + 0x13ba8) = 0;
        *(undefined8 *)(lVar22 + 0x13ba9) = 0;
        *(undefined8 *)(lVar22 + 0x13bb1) = 0;
        *(undefined8 **)(lVar22 + 0x13bc0) = local_36a8;
        *(byte *)(lVar22 + 0x125b0) = *(byte *)(lVar22 + 0x125b0) | 0x30;
        *(longlong *)(lVar22 + 0x23e0) = lVar16;
        iVar17 = *(int *)(lVar16 + 0x38);
        uVar23 = iVar17 + 1;
        *(uint *)(lVar16 + 0x38) = uVar23;
        if (*(uint *)(lVar16 + 0x3c) < uVar23) {
          FUN_1472df3da((longlong *)(lVar16 + 0x30));
        }
        *(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)iVar17 * 8) = lVar22;
        lVar24 = param_1[1];
        _Dst = (void *)(lVar9 + *(longlong *)(lVar24 + 0x5340));
        FUN_1472d3330(_Dst);
        iVar17 = *(int *)(lVar24 + 0x5348);
        iVar12 = ~(uint)uVar13 + iVar17;
        if (iVar12 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + 0x220),(longlong)iVar12 * 0x220);
          iVar17 = *(int *)(lVar24 + 0x5348);
        }
        *(int *)(lVar24 + 0x5348) = iVar17 + -1;
        FUN_1400468f8(&local_3688);
        FUN_144891d70(&local_598);
        puVar7 = local_3698;
        iVar17 = local_36b4;
        if (local_d0 != 0) {
          FUN_1400020a8();
        }
        iVar17 = iVar17 + 1;
        iVar12 = 0;
      }
      uVar23 = (uint)uVar13 + iVar12;
      uVar13 = (ulonglong)uVar23;
      lVar24 = param_1[1];
    } while ((int)uVar23 < *(int *)(lVar24 + 0x5348));
  }
  iVar12 = *(int *)(param_1 + 0x7e);
  iVar17 = iVar17 + iVar12;
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar17);
  }
  plVar8 = param_1 + 0x81;
  *(undefined4 *)(param_1 + 0x82) = 0;
  if (*(int *)((longlong)param_1 + 0x414) != iVar17) {
    FUN_14177f298(plVar8);
    iVar12 = *(int *)(param_1 + 0x7e);
  }
  if (0 < iVar12) {
    lVar24 = 0;
    lVar16 = 0;
    do {
      lVar9 = param_1[0x7d];
      iVar17 = *(int *)(param_1 + 0x82);
      uVar23 = iVar17 + 1;
      *(uint *)(param_1 + 0x82) = uVar23;
      if (*(uint *)((longlong)param_1 + 0x414) < uVar23) {
        FUN_1472df3da(plVar8);
      }
      *(longlong *)(param_1[0x81] + (longlong)iVar17 * 8) = lVar9 + lVar24;
      lVar16 = lVar16 + 1;
      lVar24 = lVar24 + 0x13c10;
    } while (lVar16 < *(int *)(param_1 + 0x7e));
  }
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    lVar24 = param_1[0x7f];
    lVar16 = (longlong)*(int *)(param_1 + 0x80) * 0x3c0 + lVar24;
    do {
      if ((longlong)*(int *)(lVar24 + 0x360) != 0) {
        lVar9 = *(longlong *)(lVar24 + 0x358);
        lVar22 = (longlong)*(int *)(lVar24 + 0x360) * 0x13c10;
        do {
          iVar17 = *(int *)(param_1 + 0x82);
          uVar23 = iVar17 + 1;
          *(uint *)(param_1 + 0x82) = uVar23;
          if (*(uint *)((longlong)param_1 + 0x414) < uVar23) {
            FUN_1472df3da(plVar8);
          }
          *(longlong *)(*plVar8 + (longlong)iVar17 * 8) = lVar9;
          lVar9 = lVar9 + 0x13c10;
          lVar22 = lVar22 + -0x13c10;
        } while (lVar22 != 0);
      }
      lVar24 = lVar24 + 0x3c0;
    } while (lVar24 != lVar16);
  }
  if ((*local_36c8 & 1) == 0) {
    piVar14 = (int *)(param_1[0x1b] + 8);
    if (param_1[0x1b] == 0) {
      piVar14 = &DAT_14c760db4;
    }
    bVar1 = false;
    bVar20 = 0;
    bVar27 = false;
    bVar3 = 0;
    if (*piVar14 == 1) {
LAB_14053440e:
      uVar23 = FUN_1400b0b91(1);
      if (((bVar20 == 0) || (1 < uVar23)) || (bVar26 = true, DAT_14c760e14 == '\0')) {
        *(undefined1 *)(param_1 + 0x49) = 0;
        bVar1 = true;
        bVar27 = false;
        goto LAB_140534594;
      }
      goto LAB_14053445b;
    }
  }
  else {
    piVar14 = (int *)(param_1[0x1b] + 8);
    if (param_1[0x1b] == 0) {
      piVar14 = &DAT_14c760db4;
    }
    if (*piVar14 == 1) {
      bVar20 = (byte)(*(uint *)((longlong)param_1 + 0xe4) >> 0x18) & 1;
      goto LAB_14053440e;
    }
    bVar1 = false;
    bVar27 = false;
    bVar3 = 0;
    bVar26 = false;
    if ((*(uint *)((longlong)param_1 + 0xe4) >> 0x18 & 1) == 0) goto LAB_1405344f3;
LAB_14053445b:
    bVar1 = bVar26;
    lVar16 = DAT_14ca461e0;
    lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar17 = *(int *)(lVar24 + 0xc60);
    if (iVar17 == 0x40000002) {
      uVar13 = 0;
    }
    else {
      bVar27 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar17 != 2)) {
        if (iVar17 == 1) {
          DVar4 = FUN_140ad26c0();
          DVar5 = GetCurrentThreadId();
          bVar27 = DVar4 == DVar5;
        }
        else {
          bVar27 = false;
        }
      }
      uVar13 = (ulonglong)(bVar27 ^ 1);
    }
    lVar9 = DAT_14ca460c0;
    bVar27 = true;
    if (*(int *)(lVar16 + uVar13 * 4) == 0) {
      bVar3 = 0;
    }
    else {
      iVar17 = *(int *)(lVar24 + 0xc60);
      if (((iVar17 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar17 == 2)) {
        uVar13 = 0;
      }
      else if (iVar17 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar13 = (ulonglong)(DVar4 != DVar5);
      }
      else {
        uVar13 = 1;
      }
      bVar3 = *(byte *)(lVar9 + uVar13) ^ 1;
    }
  }
LAB_1405344f3:
  *(byte *)(param_1 + 0x49) = bVar3;
  lVar24 = DAT_14ca46210;
  if ((!bVar1) && (bVar3 == 0)) {
    iVar17 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if ((iVar17 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar17 == 2)))) {
      uVar13 = 0;
    }
    else if (iVar17 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar13 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar13 = 1;
    }
    if ((*(int *)(lVar24 + uVar13 * 4) != 0) && ((longlong)*(int *)(param_1 + 0x82) != 0)) {
      lVar24 = 0;
      do {
        if (*(int *)(*(longlong *)(param_1[0x81] + lVar24) + 0x3020) == 4) {
          *(undefined1 *)(param_1 + 0x49) = 1;
          break;
        }
        lVar24 = lVar24 + 8;
      } while ((longlong)*(int *)(param_1 + 0x82) * 8 != lVar24);
    }
    bVar1 = false;
  }
LAB_140534594:
  puVar15 = (undefined4 *)(param_1[0x1b] + 8);
  if (param_1[0x1b] == 0) {
    puVar15 = &DAT_14c760db4;
  }
  iVar17 = FUN_1400b0b91(*puVar15,8);
  lVar24 = DAT_14ca461f8;
  bVar26 = false;
  if (((!bVar1) && (bVar26 = false, bVar27)) && (iVar17 == 1)) {
    iVar17 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (((iVar17 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar17 == 2)) {
      uVar13 = 0;
    }
    else if (iVar17 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar13 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar13 = 1;
    }
    bVar26 = *(int *)(lVar24 + uVar13 * 4) != 0;
  }
  *(bool *)((longlong)param_1 + 0x249) = bVar26;
  plVar11 = param_1 + 0x16;
  uVar23 = *(uint *)(param_1 + 0x82);
  if (uVar23 != 0) {
    iVar17 = *(int *)(param_1 + 0x17);
    *(uint *)(param_1 + 0x17) = iVar17 + uVar23;
    if ((uint)(*(int *)((longlong)param_1 + 0xbc) - iVar17) < uVar23) {
      FUN_144928a2e(plVar11,iVar17);
    }
    FUN_142ffc8a0((longlong)iVar17 * 8 + *plVar11,*plVar8,uVar23);
  }
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    lVar16 = (longlong)*(int *)(param_1 + 0x80) * 0x3c0;
    lVar24 = param_1[0x7f] + 0x20;
    do {
      FUN_1400f698c(lVar24,plVar11);
      lVar24 = lVar24 + 0x3c0;
      lVar16 = lVar16 + -0x3c0;
    } while (lVar16 != 0);
  }
  iVar17 = *(int *)(param_1[1] + 8);
  *(int *)((longlong)param_1 + 0x8a4) = iVar17;
  *(undefined2 *)(param_1 + 0x115) = *(undefined2 *)(&DAT_14ca85070 + (longlong)iVar17 * 2);
  *(bool *)(param_1 + 0x122) = DAT_14ca460e0 != 0;
  DAT_14ca460e0 = 0;
  FUN_1449b47aa(param_1 + 10,param_1);
  if ((local_90 ^ (ulonglong)auStack_36f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1405347fb FUN_1405347fb body=110 status=ok
// SIG undefined FUN_1405347fb(void)

void FUN_1405347fb(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14053486a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14abab320;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xe4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xec) = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) & 0xfd;
  *(uint *)(puVar1 + 0x1c) = *(uint *)(puVar1 + 0x1c) & 0xfffffff8 | 3;
  return;
}



// FUNCTION 14053486a FUN_14053486a body=117 status=ok
// SIG undefined FUN_14053486a(void)

undefined8 * FUN_14053486a(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a790720;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc;
  return param_1;
}



// FUNCTION 1405348ec FUN_1405348ec body=351 status=ok
// SIG undefined FUN_1405348ec(void)

void FUN_1405348ec(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14053492f;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar4 = (uint *)*puVar1;
LAB_14053492f:
    puVar3 = (undefined8 *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar5 = puVar4[0x12];
    if (puVar3 + 0x10 <= puVar4 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
      LOCK();
      uVar2 = *puVar4;
      *puVar4 = *puVar4 + uVar5 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar5) != 0xffffffff) break;
      puVar4 = (uint *)*puVar1;
      *puVar4 = 0xffffffff;
      *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      puVar3 = (undefined8 *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
      uVar5 = 0;
      if (puVar3 + 0x10 <= puVar4 + 0x4000) {
        uVar5 = 1;
        goto LAB_1405349ab;
      }
    }
  }
  uVar5 = uVar5 + 1;
LAB_1405349ab:
  *(undefined8 **)(puVar4 + 0x10) = puVar3 + 0x11;
  puVar4[0x12] = uVar5;
  *(int *)(puVar3 + -1) = ((int)puVar3 + -8) - (int)puVar4;
  *(undefined4 *)((longlong)puVar3 + -4) = 0x80;
  *(undefined4 *)(puVar3 + 1) = (&DAT_14ca11f78)[(ulonglong)(2 < param_1) * 0x3a];
  *(undefined2 *)(puVar3 + 2) = 0x1616;
  puVar3[3] = param_2;
  *(int *)(puVar3 + 4) = param_1;
  puVar3[5] = param_3;
  puVar3[6] = param_4;
  *(undefined1 *)(puVar3 + 7) = 0x3a;
  *puVar3 = &PTR_FUN_14a1fe690;
  *(undefined4 *)(puVar3 + 10) = 0x11;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[8] = DAT_14c9c0d50;
  puVar3[9] = DAT_14c9c0ea0;
  *(undefined4 *)(puVar3 + 0xf) = 0;
  return;
}



// FUNCTION 140534a4c FUN_140534a4c body=3304 status=ok
// SIG undefined FUN_140534a4c(void)

longlong * FUN_140534a4c(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  undefined8 uVar8;
  uint *puVar9;
  longlong lVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  undefined8 ****ppppuVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  byte bVar17;
  int iVar18;
  ulonglong uVar19;
  int *piVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  longlong *plVar25;
  longlong lVar26;
  undefined4 *puVar27;
  bool bVar28;
  bool bVar29;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  int local_194;
  longlong local_190;
  ulonglong local_188;
  uint *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_138;
  undefined4 local_130;
  char local_128;
  undefined7 uStack_127;
  uint local_120;
  longlong *local_118;
  int local_100;
  char local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  int local_d0;
  undefined8 ***local_c8 [3];
  ushort local_b0;
  byte local_a8;
  int local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  undefined6 uStack_86;
  byte local_80;
  int *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  *param_2 = 0;
  param_2[1] = 0;
  bVar17 = 1;
  local_1b0 = param_4;
  local_1a8 = param_2;
  if (((*(byte *)(param_1 + 8) & 1) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    uVar3 = *(uint *)(param_3 + 5);
    if (uVar3 == 0) {
      uVar19 = 1;
      uVar22 = 0;
      uVar7 = 0;
      iVar18 = 0;
    }
    else {
      puVar9 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar9 = (uint *)(param_3 + 2);
      }
      uVar7 = *puVar9;
      if (uVar7 == 0) {
        iVar18 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar18 = uVar3 - 1;
        }
        uVar22 = 0;
        uVar19 = (ulonglong)(uint)(iVar18 >> 5);
        if (iVar18 >> 5 < 1) {
          uVar19 = uVar22;
        }
        iVar18 = 0;
        do {
          if (uVar19 == uVar22) goto LAB_1405352fe;
          iVar18 = iVar18 + 0x20;
          uVar7 = puVar9[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar7 == 0);
      }
      else {
        uVar22 = 0;
        iVar18 = 0;
      }
      uVar19 = (ulonglong)(-uVar7 & uVar7);
      uVar2 = uVar19 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar7 = (iVar18 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      if ((int)uVar3 <= (int)uVar7) {
        uVar7 = uVar3;
      }
    }
    if (uVar7 == uVar3) {
LAB_1405352fe:
      bVar17 = 0;
    }
    else {
      uVar24 = 0xffffffff;
      bVar17 = 0;
      local_190 = param_1;
      local_188 = (ulonglong)uVar3;
      local_180 = (uint *)(param_3 + 2);
      do {
        iVar21 = *(int *)(*param_3 + 0xc + (longlong)(int)uVar7 * 0x18);
        if ((iVar21 == 0) ||
           (uVar3 = *(uint *)(*param_3 + 8 + (longlong)(int)uVar7 * 0x18), (int)uVar3 < 0)) {
LAB_14053538c:
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          if ((int)uVar3 < DAT_14c9647dc) {
            puVar16 = (undefined8 *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if (((puVar16 == (undefined8 *)0x0) || (*(int *)(puVar16 + 2) != iVar21)) ||
               ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)) goto LAB_14053538c;
            uVar8 = *puVar16;
          }
        }
        local_128 = '\0';
        local_100 = 0;
        local_194 = iVar18;
        FUN_1456bb102(&local_128,uVar8);
        local_f8 = '\0';
        local_d0 = 0;
        lVar10 = *(longlong *)(param_1 + 0x20);
        if (lVar10 == 0) {
          local_c8[0] = *(undefined8 ****)(param_1 + 0x10);
          FUN_1446dcdd4(&local_a0,local_c8);
          lVar10 = FUN_1448fdc6e(&local_a0);
          if (CONCAT62(uStack_86,local_88) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0x20) = lVar10;
        }
        FUN_1400606f6(&local_a0,lVar10,&local_128);
        piVar20 = local_70;
        if (local_70 == (int *)0x0) {
          piVar20 = &local_a0;
        }
        if (local_68 < 1) {
          piVar20 = (int *)&DAT_14c9a40e0;
        }
        FUN_1400603ec(local_c8,lVar10,piVar20);
        piVar20 = local_70;
        if (local_70 == (int *)0x0) {
          piVar20 = &local_a0;
        }
        FUN_1446fdf58(piVar20,local_68);
        if (local_70 != (int *)0x0) {
          FUN_1400020a8();
        }
        if (local_a8 == 1) {
          bVar28 = (int)local_c8[0] != 0;
          bVar6 = 1;
        }
        else {
          FUN_1400b56fe(&local_a0,local_c8,1);
          bVar28 = local_80 != 0;
          bVar29 = local_a0 != 0;
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
          if (pcVar4 != (code *)0x0) {
            piVar20 = &local_a0;
            if (0x18 < local_88) {
              piVar20 = (int *)CONCAT44(uStack_9c,local_a0);
            }
            (*pcVar4)(piVar20);
          }
          if (0x18 < local_88) {
            FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
          }
          bVar28 = bVar28 && bVar29;
          bVar6 = local_a8;
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar6 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppuVar14 = local_c8;
          if (0x18 < local_b0) {
            ppppuVar14 = (undefined8 ****)local_c8[0];
          }
          (*pcVar4)(ppppuVar14);
        }
        if (0x18 < local_b0) {
          FUN_1400020a8(local_c8[0]);
        }
        param_1 = local_190;
        if ((longlong)local_d0 != 0) {
          lVar10 = (longlong)local_d0 + -1;
          local_1a0 = DAT_14c9a3da0;
          local_1b8 = lVar10 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + local_1b8),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + local_1b8));
          if (*(longlong *)(local_1a0 + local_1b8) != 0) {
            FUN_1400020a8();
          }
          lVar26 = DAT_14c9a3da0;
          iVar18 = (int)lVar10;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
          }
          *(undefined4 *)(lVar26 + local_1b8) = 0xffffffff;
          iVar21 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar21 = DAT_14c9a3dd0;
          }
          *(int *)(lVar26 + 4 + local_1b8) = iVar21;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar11 = DAT_14c9a3dc0;
          if (DAT_14c9a3dc0 == (undefined *)0x0) {
            puVar11 = &DAT_14c9a3db0;
          }
          iVar21 = iVar18 + 0x1f;
          if (-1 < iVar18) {
            iVar21 = iVar18;
          }
          bVar6 = (byte)lVar10 & 0x1f;
          DAT_14c9a3dd0 = iVar18;
          *(uint *)(puVar11 + (longlong)(iVar21 >> 5) * 4) =
               *(uint *)(puVar11 + (longlong)(iVar21 >> 5) * 4) &
               (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
          local_d0 = 0;
        }
        if (local_f8 != '\0') {
          if (local_f8 == '\x01') {
            local_f0 = 0;
          }
          else if ((local_f8 == '\x03') && (local_e8 != (longlong *)0x0)) {
            LOCK();
            piVar20 = (int *)((longlong)local_e8 + 0xc);
            *piVar20 = *piVar20 + -1;
            UNLOCK();
            if (*piVar20 == 0) {
              (**(code **)(*local_e8 + 0x10))();
            }
          }
          local_f8 = '\0';
        }
        if ((longlong)local_100 != 0) {
          lVar10 = (longlong)local_100 + -1;
          local_1a0 = DAT_14c9a3da0;
          local_1b8 = lVar10 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + local_1b8),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + local_1b8));
          if (*(longlong *)(local_1a0 + local_1b8) != 0) {
            FUN_1400020a8();
          }
          lVar26 = DAT_14c9a3da0;
          iVar18 = (int)lVar10;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar18;
          }
          *(undefined4 *)(lVar26 + local_1b8) = 0xffffffff;
          iVar21 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar21 = DAT_14c9a3dd0;
          }
          *(int *)(lVar26 + 4 + local_1b8) = iVar21;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar11 = DAT_14c9a3dc0;
          if (DAT_14c9a3dc0 == (undefined *)0x0) {
            puVar11 = &DAT_14c9a3db0;
          }
          iVar21 = iVar18 + 0x1f;
          if (-1 < iVar18) {
            iVar21 = iVar18;
          }
          bVar6 = (byte)lVar10 & 0x1f;
          DAT_14c9a3dd0 = iVar18;
          *(uint *)(puVar11 + (longlong)(iVar21 >> 5) * 4) =
               *(uint *)(puVar11 + (longlong)(iVar21 >> 5) * 4) &
               (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
          local_100 = 0;
        }
        if ((local_128 == '\x03') && (local_118 != (longlong *)0x0)) {
          LOCK();
          piVar20 = (int *)((longlong)local_118 + 0xc);
          *piVar20 = *piVar20 + -1;
          UNLOCK();
          if (*piVar20 == 0) {
            (**(code **)(*local_118 + 0x10))();
          }
        }
        uVar24 = uVar24 & ~(uint)uVar19;
        puVar9 = (uint *)param_3[4];
        if ((uint *)param_3[4] == (uint *)0x0) {
          puVar9 = local_180;
        }
        uVar3 = *(uint *)(param_3 + 5);
        iVar21 = (int)uVar22;
        lVar10 = (longlong)iVar21;
        uVar7 = puVar9[lVar10] & uVar24;
        iVar18 = local_194;
        if (uVar7 == 0) {
          iVar12 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar12 = uVar3 - 1;
          }
          iVar12 = iVar12 >> 5;
          iVar18 = local_194 + 0x20;
          iVar13 = iVar12;
          if (iVar12 < iVar21) {
            iVar13 = iVar21;
          }
          if (iVar21 < iVar12) {
            lVar26 = 0;
            do {
              uVar7 = (puVar9 + lVar10 + 1)[lVar26];
              if (uVar7 != 0) {
                uVar22 = (ulonglong)(iVar21 + (int)lVar26 + 1);
                uVar24 = 0xffffffff;
                goto LAB_140534fa6;
              }
              iVar18 = iVar18 + 0x20;
              lVar26 = lVar26 + 1;
            } while (iVar13 - lVar10 != lVar26);
            uVar24 = 0xffffffff;
            iVar21 = iVar13;
          }
          uVar22 = (ulonglong)(iVar21 + 1);
          param_1 = local_190;
          uVar7 = uVar3;
        }
        else {
LAB_140534fa6:
          uVar19 = (ulonglong)(-uVar7 & uVar7);
          uVar2 = uVar19 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar7 = (iVar18 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if ((int)uVar3 <= (int)uVar7) {
            uVar7 = uVar3;
          }
        }
        bVar17 = bVar17 | bVar28;
      } while (uVar7 != (uint)local_188);
    }
  }
  plVar25 = local_1b0;
  if ((int)param_3[1] == *(int *)((longlong)param_3 + 0x34)) {
LAB_1405355d0:
    plVar15 = (longlong *)0x0;
  }
  else {
    uVar3 = (uint)((ulonglong)DAT_14c9a63e8 >> 0x10);
    uVar7 = (uint)DAT_14c9a63e8 & 0xffff;
    plVar15 = param_3 + 7;
    if ((longlong *)param_3[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_3[8];
    }
    iVar18 = *(int *)((longlong)plVar15 +
                     (ulonglong)
                     ((int)param_3[9] - 1U &
                     (int)((ulonglong)DAT_14c9a63e8 >> 0x20) + ((uint)DAT_14c9a63e8 << 0x10 | uVar7)
                     + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar18 == -1) goto LAB_1405355d0;
    do {
      plVar15 = (longlong *)(*param_3 + (longlong)iVar18 * 0x18);
      if (*plVar15 == DAT_14c9a63e8) goto LAB_140534b1f;
      iVar18 = (int)plVar15[2];
    } while (iVar18 != -1);
    plVar15 = (longlong *)0x0;
  }
LAB_140534b1f:
  puVar9 = (uint *)(plVar15 + 1);
  if (plVar15 == (longlong *)0x0) {
    puVar9 = (uint *)0x0;
  }
  bVar28 = true;
  if (((*(byte *)(param_1 + 8) & 2) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
    if ((puVar9 != (uint *)0x0) && (puVar9[1] != 0)) {
      uVar3 = *puVar9;
      bVar28 = false;
      if (((int)uVar3 < 0) || (bVar28 = false, DAT_14c9647dc <= (int)uVar3)) goto LAB_140534b38;
      plVar15 = (longlong *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar15 != (longlong *)0x0) &&
         (((*(uint *)(plVar15 + 2) == puVar9[1] && ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)) &&
          (lVar10 = *plVar15, lVar10 != 0)))) {
        lVar26 = FUN_140126fc0();
        if (((*(int *)(lVar26 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar26 + 0x38) * 8) == lVar26 + 0x30)) &&
           ((*(longlong *)(lVar10 + 0x3f0) != 0 && (lVar10 = FUN_140a2d0dc(), lVar10 != 0)))) {
          puVar27 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar10 + 8) != (undefined4 *)0x0) {
            puVar27 = *(undefined4 **)(lVar10 + 8);
          }
          if (DAT_14c947fe0 == 0) {
            lVar10 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar10);
            DAT_14c947fe0 = lVar10;
          }
          FUN_140045924(DAT_14c947fe0,&local_128,puVar27,1);
          bVar28 = CONCAT71(uStack_127,local_128) == *(longlong *)(param_1 + 0x28);
          plVar25 = local_1b0;
          goto LAB_140534b38;
        }
      }
    }
    bVar28 = false;
  }
LAB_140534b38:
  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
    uVar3 = (uint)((ulonglong)DAT_14c9a63f0 >> 0x10);
    uVar7 = (uint)DAT_14c9a63f0 & 0xffff;
    plVar15 = param_3 + 7;
    if ((longlong *)param_3[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_3[8];
    }
    iVar18 = *(int *)((longlong)plVar15 +
                     (ulonglong)
                     ((int)param_3[9] - 1U &
                     (int)((ulonglong)DAT_14c9a63f0 >> 0x20) + ((uint)DAT_14c9a63f0 << 0x10 | uVar7)
                     + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar18 != -1) {
      do {
        plVar15 = (longlong *)(*param_3 + (longlong)iVar18 * 0x18);
        if (*plVar15 == DAT_14c9a63f0) goto LAB_140534baf;
        iVar18 = (int)plVar15[2];
      } while (iVar18 != -1);
    }
  }
  plVar15 = (longlong *)0x0;
LAB_140534baf:
  puVar9 = (uint *)(plVar15 + 1);
  if (plVar15 == (longlong *)0x0) {
    puVar9 = (uint *)0x0;
  }
  cVar5 = '\x01';
  if (((*(byte *)(param_1 + 8) & 4) != 0) && (*(longlong *)(param_1 + 0x40) != 0)) {
    if ((((puVar9 == (uint *)0x0) ||
         ((((puVar9[1] == 0 || (uVar3 = *puVar9, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
          || ((plVar15 = (longlong *)
                         ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
              plVar15 == (longlong *)0x0 || (*(uint *)(plVar15 + 2) != puVar9[1])))))) ||
        ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)) || (lVar10 = *plVar15, lVar10 == 0))
    goto LAB_140534c5b;
    uVar8 = FUN_140535ad4();
    plVar15 = (longlong *)FUN_144718840(lVar10,uVar8);
    if (plVar15 == (longlong *)0x0) goto LAB_140534c5b;
    uVar8 = FUN_1400d690e(param_1 + 0x40);
    cVar5 = (**(code **)(*plVar15 + 0x18))(plVar15,uVar8);
  }
  plVar15 = local_1a8;
  if ((!(bool)(bVar17 & bVar28)) || (cVar5 == '\0')) goto LAB_140534c5b;
  uVar3 = *(uint *)(param_1 + 0x60);
  if (uVar3 != 0) {
    iVar18 = (int)local_1a8[1];
    *(uint *)(local_1a8 + 1) = iVar18 + uVar3;
    if ((uint)(*(int *)((longlong)local_1a8 + 0xc) - iVar18) < uVar3) {
      FUN_140535bba(local_1a8,iVar18);
    }
    FUN_140535abd((longlong)iVar18 * 8 + *plVar15,*(undefined8 *)(param_1 + 0x58),uVar3);
  }
  if ((plVar25 != (longlong *)0x0) && (lVar10 = *(longlong *)(param_1 + 0x68), lVar10 != 0)) {
    plVar15 = *(longlong **)(param_1 + 0x70);
    if (plVar15 == (longlong *)0x0) {
LAB_140535695:
      plVar15 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar15 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar20 = (int *)((longlong)plVar15 + 0xc);
        *piVar20 = *piVar20 + -1;
        UNLOCK();
        if (*piVar20 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      LOCK();
      plVar1 = plVar15 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar20 = (int *)((longlong)plVar15 + 0xc);
        *piVar20 = *piVar20 + -1;
        UNLOCK();
        if (*piVar20 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      lVar10 = *(longlong *)(param_1 + 0x68);
      plVar15 = *(longlong **)(param_1 + 0x70);
      if (plVar15 == (longlong *)0x0) goto LAB_140535695;
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar15 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar20 = (int *)((longlong)plVar15 + 0xc);
        *piVar20 = *piVar20 + -1;
        UNLOCK();
        plVar25 = local_1b0;
        if (*piVar20 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          plVar25 = local_1b0;
        }
      }
    }
    iVar18 = (int)plVar25[1];
    *(uint *)(plVar25 + 1) = iVar18 + 1U;
    if (*(uint *)((longlong)plVar25 + 0xc) < iVar18 + 1U) {
      FUN_140535d1c(plVar25,iVar18);
    }
    lVar26 = *plVar25;
    *(longlong *)(lVar26 + (longlong)iVar18 * 0x10) = lVar10;
    *(longlong **)(lVar26 + 8 + (longlong)iVar18 * 0x10) = plVar15;
  }
  iVar18 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar18 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x80);
    lVar26 = 0;
    do {
      lVar23 = *(longlong *)(lVar10 + lVar26);
      local_158 = 0;
      local_150 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_14c = 0xffffffff00000080;
      local_144 = 0;
      local_138 = 0;
      local_130 = 0;
      FUN_140535930(&local_178,param_3);
      FUN_140534a4c(lVar23 + 8,&local_128,&local_178,plVar25);
      lVar23 = (longlong)(int)local_120;
      if (lVar23 != 0) {
        iVar21 = (int)local_1a8[1];
        *(uint *)(local_1a8 + 1) = local_120 + iVar21;
        if ((uint)(*(int *)((longlong)local_1a8 + 0xc) - iVar21) < local_120) {
          FUN_140535bba(local_1a8,iVar21);
        }
        memmove((void *)((longlong)iVar21 * 8 + *local_1a8),(void *)CONCAT71(uStack_127,local_128),
                lVar23 << 3);
        local_120 = 0;
        plVar25 = local_1b0;
      }
      if (CONCAT71(uStack_127,local_128) != 0) {
        FUN_1400020a8();
      }
      lVar26 = lVar26 + 0x18;
    } while ((longlong)iVar18 * 0x18 != lVar26);
  }
LAB_140534c5b:
  *(undefined4 *)(param_3 + 9) = 0;
  if (param_3[8] != 0) {
    FUN_1400020a8();
  }
  FUN_140535736(param_3);
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_1a8;
}



// FUNCTION 140535736 FUN_140535736 body=55 status=ok
// SIG undefined FUN_140535736(void)

void FUN_140535736(longlong *param_1)

{
  FUN_14053576e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14053576e FUN_14053576e body=121 status=ok
// SIG undefined FUN_14053576e(void)

void FUN_14053576e(longlong param_1,int param_2)

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
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1405357e8 FUN_1405357e8 body=328 status=ok
// SIG undefined FUN_1405357e8(void)

void FUN_1405357e8(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140535880;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_140535880:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x18)) {
      uVar5 = uVar3 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x18,4);
  }
  return;
}



// FUNCTION 140535930 FUN_140535930 body=154 status=ok
// SIG undefined FUN_140535930(void)

longlong FUN_140535930(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140535985;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140535985:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_1405359ca(param_1,param_2);
  return param_1;
}



// FUNCTION 1405359ca FUN_1405359ca body=243 status=ok
// SIG undefined FUN_1405359ca(void)

undefined8 * FUN_1405359ca(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *_Src;
  undefined8 *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14053576e(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1403951a8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar4 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar4;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      _Src = param_2 + 2;
      if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
        _Src = (undefined8 *)param_2[4];
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,_Src,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 140535abd FUN_140535abd body=23 status=ok
// SIG undefined FUN_140535abd(void)

void FUN_140535abd(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_2 + lVar1 * 8);
    lVar1 = lVar1 + 1;
  } while (param_3 != (int)lVar1);
  return;
}



// FUNCTION 140535ad4 FUN_140535ad4 body=228 status=ok
// SIG undefined FUN_140535ad4(void)

longlong FUN_140535ad4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb58418 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14864f0bb;
    local_40 = FUN_1464c1134;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxActorDefBasedAnimUser",&DAT_14cb58418,&DAT_14864f0ba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb58418;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140535bba FUN_140535bba body=353 status=ok
// SIG undefined FUN_140535bba(void)

void FUN_140535bba(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140535c3f;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140535c3f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140535d1c FUN_140535d1c body=269 status=ok
// SIG undefined FUN_140535d1c(void)

void FUN_140535d1c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140535e2a FUN_140535e2a body=226 status=ok
// SIG undefined FUN_140535e2a(void)

void FUN_140535e2a(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_140535f0c(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 140535f0c FUN_140535f0c body=1365 status=ok
// SIG undefined FUN_140535f0c(void)

void FUN_140535f0c(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_141573e46();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca05ce0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140536462 FUN_140536462 body=226 status=ok
// SIG undefined FUN_140536462(void)

void FUN_140536462(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_140536544(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 140536544 FUN_140536544 body=1365 status=ok
// SIG undefined FUN_140536544(void)

void FUN_140536544(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_14158f54e();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9feb30);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140536a9a FUN_140536a9a body=226 status=ok
// SIG undefined FUN_140536a9a(void)

void FUN_140536a9a(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_140536b7c(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 140536b7c FUN_140536b7c body=1365 status=ok
// SIG undefined FUN_140536b7c(void)

void FUN_140536b7c(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  size_t _Size;
  longlong lVar18;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  *(int *)(puVar17 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar16 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar16 = local_b8;
    }
    FUN_1446fe144(puVar17 + 2,local_b0,0);
    puVar11 = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 2;
    }
    memcpy(puVar11,puVar16,(longlong)local_b0);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    puVar16 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar16 = local_a8;
    }
    FUN_1446fe1b8(puVar17 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar17 + 5;
    }
    memcpy(puVar11,puVar16,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar17 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar6 = *(code **)(param_1 + 0x1f0);
  if (pcVar6 != (code *)0x0) {
    plVar14 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar14 = *(longlong **)(param_1 + 0x200);
    }
    uVar13 = (**(code **)(*plVar14 + 8))();
    (*pcVar6)(uVar13);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1e0);
  uVar13 = *(undefined8 *)(param_1 + 0x1c0);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
  FUN_141570d92();
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a37d340;
  puVar17[2] = uVar10;
  local_d8 = uVar13;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14c9fd898);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar17 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar17 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_LAB_14a1e7fd0;
  puVar17[2] = uVar7;
  *(undefined4 *)(puVar17 + 3) = uVar3;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    local_c8 = 0;
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    local_c8 = *(longlong *)(*(longlong *)(lVar18 + 0x50) + lVar15 * 8);
    if (local_c8 == 0) {
      local_c8 = FUN_1400bafc2(lVar18,lVar15,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar18 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar18 + 0x10);
    uVar19 = lVar18 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar18 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar18 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar18);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar18);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            FUN_1447477d8(puVar1,iVar5);
          }
          uVar9 = *puVar1;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar18 = lVar18 + 4;
      } while ((longlong)iVar4 * 4 != lVar18);
    }
    uVar9 = param_2[0x13];
    lVar18 = (longlong)(int)uVar9;
    if (0 < lVar18) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar17 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar17 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar17;
        param_2[6] = (ulonglong)(puVar17 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)((longlong)_Dst + lVar18 * 4);
        _Size = lVar18 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst,_Src,_Size);
        puVar17[1] = 0;
        *puVar17 = &PTR_FUN_14a1fbc38;
        puVar17[2] = local_c8;
        puVar17[3] = _Dst;
        *(int *)(puVar17 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405370d2 FUN_1405370d2 body=764 status=ok
// SIG undefined FUN_1405370d2(void)

void FUN_1405370d2(longlong param_1,undefined8 param_2,int param_3,longlong param_4,longlong param_5
                  ,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short *psVar9;
  undefined1 auStack_1d8 [32];
  uint local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  short local_19a;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  dVar1 = *(double *)(param_4 + 0x1030);
  dVar2 = *(double *)(param_4 + 0x1038);
  dVar3 = *(double *)(param_4 + 0x1040);
  local_1b0 = 0.0 < *(float *)(param_5 + 0x6f4);
  local_1a8 = 0;
  local_1b8 = local_1b8 & 0xffffff00;
  FUN_1405373d0(param_1 + 0xe0,0,param_4,param_5);
  lVar6 = param_5 + 0x978;
  if (*(longlong *)(param_5 + 0x980) != 0) {
    lVar6 = *(longlong *)(param_5 + 0x980);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_5 + 0xb60) + 0x28);
  FUN_1447e4b92(param_2,param_1 + 0x130,lVar6 + (longlong)param_3 * 4,0);
  local_198 = *(float *)((longlong)plVar4 + 0x164) * 7.0 + 1.0;
  FUN_1447e4b92(param_2,param_1 + 0x136,&local_198,0);
  local_18c = (float)(**(code **)(*plVar4 + 0x18))(plVar4);
  local_190 = (float)(dVar3 + (double)plVar4[6]);
  local_194 = (float)(dVar2 + (double)plVar4[5]);
  local_18c = 1.0 / local_18c;
  local_198 = (float)(dVar1 + (double)plVar4[4]);
  FUN_1449dacb8(param_2,param_1 + 0x13c,&local_198,0);
  lVar6 = FUN_1449dab10();
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uVar8 = param_1 + 0xa0 + ((longlong)uVar5 >> 0x18);
  if ((uVar5 & 1) == 0) {
    uVar8 = uVar5;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar7 = 0;
    do {
      if (*(longlong *)(uVar8 + lVar7 * 4) == *(longlong *)(lVar6 + 0x28)) {
        uVar5 = *(ulonglong *)(param_1 + 0xb0);
        uVar8 = param_1 + 0xb0 + ((longlong)uVar5 >> 0x18);
        if ((uVar5 & 1) == 0) {
          uVar8 = uVar5;
        }
        psVar9 = (short *)(uVar8 + lVar7);
        goto LAB_1405372c8;
      }
      lVar7 = lVar7 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar7);
  }
  psVar9 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_1405372c8:
  local_19a = *psVar9;
  if (local_19a != -1) {
    local_1b8 = 0;
    FUN_1449e488f(&local_198,param_4,*(undefined8 *)(param_5 + 0xb60),param_6);
    FUN_142cf7dd1(param_2,&local_19a,&local_198);
  }
  plVar4 = *(longlong **)(*(longlong *)(param_4 + 8) + 0x40);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x3e0))();
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405373d0 FUN_1405373d0 body=1728 status=ok
// SIG undefined FUN_1405373d0(void)

void FUN_1405373d0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  char param_5,byte param_6,char param_7)

{
  double dVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  int local_170;
  int local_168;
  undefined8 local_158;
  float local_150;
  float fStack_14c;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_198;
  dVar1 = *(double *)(param_3 + 0x1030);
  dVar11 = *(double *)(param_3 + 0x1038);
  dVar10 = *(double *)(param_3 + 0x1040);
  uVar6 = 0x4000;
  if (*(int *)(param_4 + 0x99c) == -1) {
    iVar7 = 0x4000;
    if (*(longlong *)(param_4 + 0xb50) == 0) {
      plVar3 = *(longlong **)(param_4 + 0x28);
      if (plVar3 == (longlong *)0x0) {
        plVar3 = (longlong *)**(longlong **)(param_4 + 0x18);
      }
      lVar2 = (**(code **)(*plVar3 + 0x10))();
      uVar6 = *(undefined8 *)(lVar2 + 0x2c);
      iVar7 = (int)((ulonglong)uVar6 >> 0x20);
    }
  }
  else {
    iVar7 = 0x4000;
  }
  iVar5 = (int)uVar6;
  if (*(short *)(param_1 + 0x30) != 0) {
    fStack_14c = (float)*(uint *)(param_4 + 0x95c) * (1.0 / (float)iVar7);
    local_150 = (float)*(uint *)(param_4 + 0x958) * (1.0 / (float)iVar5);
    local_158 = (double)CONCAT44((float)(uint)(*(int *)(param_4 + 0x954) + *(int *)(param_4 + 0x960)
                                              ) * (1.0 / (float)iVar7),
                                 (float)(uint)(*(int *)(param_4 + 0x960) + *(int *)(param_4 + 0x950)
                                              ) * (1.0 / (float)iVar5));
    FUN_1449dacb8(param_2,param_1 + 0x2c,&local_158,0);
  }
  if (param_5 == '\0') {
    uVar4 = *(undefined4 *)(param_4 + 0x950);
    local_178 = *(undefined4 *)(param_4 + 0x954);
    local_170 = *(int *)(param_4 + 0x958);
    local_168 = *(int *)(param_4 + 0x95c);
  }
  else {
    local_178 = 0;
    uVar4 = 0;
    local_170 = iVar5;
    local_168 = iVar7;
  }
  FUN_140537bf8(param_4,&local_158,param_3,uVar4);
  local_d8 = (float)local_158;
  local_d4 = (float)(double)CONCAT44(fStack_14c,local_150);
  local_d0 = (float)local_148;
  local_cc = (float)local_140;
  local_c8 = (float)local_138;
  local_c4 = (float)local_130;
  local_c0 = (float)local_128;
  local_bc = (float)local_120;
  local_b8 = (float)local_118;
  local_b4 = (float)local_110;
  local_b0 = (float)local_108;
  local_ac = (float)local_100;
  local_a8 = (float)local_f8;
  local_a4 = (float)local_f0;
  local_a0 = (float)local_e8;
  local_9c = (float)local_e0;
  FUN_1447f9c4a(param_2,param_1,&local_d8,0);
  if (*(short *)(param_1 + 10) != 0) {
    local_150 = (float)FUN_140537afc(param_4);
    local_150 = 1.0 / local_150;
    local_158 = 0.0;
    FUN_1447f9a48(param_2,param_1 + 6,&local_158,0);
  }
  if (*(short *)(param_1 + 0x10) != 0) {
    fStack_14c = 1.0 / (float)iVar7;
    local_150 = 1.0 / (float)iVar5;
    local_158 = (double)CONCAT44((float)iVar7,(float)iVar5);
    FUN_1449dacb8(param_2,param_1 + 0xc,&local_158,0);
  }
  uVar6 = DAT_14c9c0d80;
  lVar2 = *(longlong *)(param_4 + 0x28);
  if (*(longlong *)(param_4 + 0x28) == 0) {
    lVar2 = DAT_14ca63b28;
  }
  FUN_144775fd8(param_2,param_1 + 0x12,*(undefined8 *)(lVar2 + 8));
  FUN_144775e63(param_2,param_1 + 0x16,uVar6);
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_144775e63(param_2,param_1 + 0x16,uVar6);
  }
  fVar8 = *(float *)(param_4 + 0x2a4);
  fVar9 = *(float *)(param_4 + 0x2a8);
  local_150 = (float)FUN_140537a92(param_4);
  local_158 = *(double *)(param_4 + 0x10d8);
  fStack_14c = fVar8 - fVar9;
  FUN_1449dacb8(param_2,param_1 + 0x1a,&local_158,0);
  FUN_1447e4b92(param_2,param_1 + 0x20,param_4 + 0x6f0,0);
  if (param_6 == 1 && *(short *)(param_1 + 0x2a) != 0) {
    local_158 = (double)CONCAT44(local_158._4_4_,1.0 / *(float *)(param_4 + 0x6f4));
    FUN_1447e4b92(param_2,param_1 + 0x26,&local_158,0);
  }
  if (*(short *)(param_1 + 0x36) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_4 + 0xb60) + 0x28);
    if (*(char *)(lVar2 + 0x1e8) == '\0') {
      dVar10 = *(double *)(lVar2 + 0x90);
      dVar11 = *(double *)(lVar2 + 0x70);
      dVar1 = *(double *)(lVar2 + 0x50);
      fStack_14c = 0.0;
    }
    else {
      dVar1 = dVar1 + *(double *)(lVar2 + 0x20);
      dVar11 = dVar11 + *(double *)(lVar2 + 0x28);
      dVar10 = dVar10 + *(double *)(lVar2 + 0x30);
      fStack_14c = 1.0;
    }
    local_150 = (float)dVar10;
    local_158 = (double)CONCAT44((float)dVar11,(float)dVar1);
    FUN_1449dacb8(param_2,param_1 + 0x32,&local_158,0);
  }
  if (param_7 != '\0') {
    if ((*(uint *)(param_4 + 0x990) & 0x2810) == 0x10) {
      dVar10 = *(double *)(param_3 + 0x860) * 0.0 + *(double *)(param_3 + 0x840) * 0.0;
      dVar11 = *(double *)(param_3 + 0x868) * 0.0 + *(double *)(param_3 + 0x848) * 0.0;
      fVar8 = (float)(((double)*(float *)(param_4 + 0x6e0) * *(double *)(param_3 + 0x880) + dVar10 +
                      *(double *)(param_3 + 0x8a0)) /
                     ((double)*(float *)(param_4 + 0x6e0) * *(double *)(param_3 + 0x888) + dVar11 +
                     *(double *)(param_3 + 0x8a8)));
      fVar9 = (float)(((double)*(float *)(param_4 + 0x6e4) * *(double *)(param_3 + 0x880) + dVar10 +
                      *(double *)(param_3 + 0x8a0)) /
                     ((double)*(float *)(param_4 + 0x6e4) * *(double *)(param_3 + 0x888) + dVar11 +
                     *(double *)(param_3 + 0x8a8)));
    }
    else {
      fVar9 = 0.0;
      fVar8 = 1.0;
    }
    local_158 = (double)CONCAT44(fVar9,fVar8);
    FUN_1472f9f03(param_2,param_1 + 0x44,&local_158,0);
    local_d8 = (float)(uint)param_6;
    FUN_1448fc859(param_2,param_1 + 0x4a,&local_d8,0);
  }
  FUN_1447e4b92(param_2,param_1 + 0x38,param_4 + 0xa50,0);
  FUN_1447e4b92(param_2,param_1 + 0x3e,param_4 + 0xa54,0);
  if ((local_90 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140537a92 FUN_140537a92 body=106 status=ok
// SIG undefined FUN_140537a92(void)

float FUN_140537a92(longlong param_1)

{
  char cVar1;
  float *pfVar2;
  float fVar4;
  longlong lVar3;
  
  cVar1 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0xb60) + 0x28) + 0x1e8);
  lVar3 = DAT_14ca4fdc8;
  if (cVar1 == '\0') {
LAB_140537ab7:
    pfVar2 = (float *)(lVar3 + 4);
  }
  else {
    if (cVar1 != '\x01') {
      lVar3 = DAT_14ca4fed0;
      if ((cVar1 != '\x02') && (fVar4 = 1.0, lVar3 = DAT_14ca4fe40, cVar1 != '\x03'))
      goto LAB_140537abf;
      goto LAB_140537ab7;
    }
    pfVar2 = (float *)(param_1 + 0x10dc);
  }
  fVar4 = *pfVar2;
LAB_140537abf:
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  return 1.0 - fVar4;
}



// FUNCTION 140537afc FUN_140537afc body=252 status=ok
// SIG undefined FUN_140537afc(void)

ulonglong FUN_140537afc(longlong param_1)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  undefined *puVar4;
  double dVar5;
  ulonglong uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x990);
  if ((char)uVar2 < '\0') {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb60) + 0x28);
    if ((*(byte *)(lVar3 + 0x1e8) & 0xfd) != 1) {
      if (((uVar2 & 0x10) != 0) && (-1 < *(int *)(param_1 + 0x944))) {
        dVar5 = *(double *)(param_1 + 0x6d0) / (double)*(uint *)(param_1 + 0x958);
        uVar6 = CONCAT44((int)((ulonglong)dVar5 >> 0x20),
                         (float)dVar5 *
                         (*(float *)(DAT_14ca4fd20 + 4) /
                         (*(float *)(param_1 + 0x2a4) - *(float *)(param_1 + 0x2a8))) *
                         *(float *)(lVar3 + 0x15c));
        goto LAB_140537b7b;
      }
      goto LAB_140537b84;
    }
    puVar4 = &DAT_14ca4fda0;
    if ((uVar2 & 0x10) == 0) {
      puVar4 = &DAT_14ca4fea8;
    }
    fVar1 = *(float *)(*(longlong *)(puVar4 + 0x10) + 4);
  }
  else {
LAB_140537b84:
    uVar6 = 0;
    if ((uVar2 >> 0xb & 1) != 0) goto LAB_140537b7b;
    puVar4 = &DAT_14ca4fda0;
    if ((uVar2 & 0x10) == 0) {
      puVar4 = &DAT_14ca4fea8;
    }
    fVar1 = *(float *)(*(longlong *)(puVar4 + 0x10) + 4);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb60) + 0x28);
  }
  uVar6 = (ulonglong)(uint)((*(float *)(lVar3 + 0x15c) + *(float *)(lVar3 + 0x15c)) * (1.0 / fVar1))
  ;
LAB_140537b7b:
  if ((float)uVar6 <= 1e-05) {
    uVar6 = CONCAT44((int)(uVar6 >> 0x20),0x3727c5ac);
  }
  return uVar6;
}



// FUNCTION 140537bf8 FUN_140537bf8 body=6733 status=ok
// SIG undefined FUN_140537bf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_140537bf8(longlong param_1,double *param_2,longlong param_3,int param_4,int param_5,
                      uint param_6,uint param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  ulonglong uVar46;
  longlong lVar47;
  longlong *plVar48;
  float fVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  undefined1 auVar55 [16];
  double dVar57;
  double dVar58;
  undefined1 auVar56 [16];
  float fVar59;
  double dVar60;
  undefined1 auVar61 [16];
  double dVar65;
  double dVar66;
  double dVar67;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  double dVar80;
  double dVar81;
  double dVar82;
  undefined1 auVar79 [16];
  float fVar83;
  double dVar84;
  double dVar85;
  undefined1 auVar86 [16];
  double dVar90;
  undefined1 auVar87 [16];
  double dVar91;
  double dVar92;
  undefined1 auVar88 [16];
  double dVar93;
  undefined1 auVar89 [16];
  double dVar94;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  undefined1 local_208 [12];
  undefined4 uStack_1fc;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [432];
  
  if ((*(byte *)(param_1 + 0x998) & 2) == 0) {
    fVar49 = 16384.0;
    fVar59 = 16384.0;
    if ((*(int *)(param_1 + 0x99c) == -1) && (*(longlong *)(param_1 + 0xb50) == 0)) {
      plVar48 = *(longlong **)(param_1 + 0x28);
      if (plVar48 == (longlong *)0x0) {
        plVar48 = (longlong *)**(longlong **)(param_1 + 0x18);
      }
      lVar47 = (**(code **)(*plVar48 + 0x10))();
      fVar49 = (float)(int)*(undefined8 *)(lVar47 + 0x2c);
      fVar59 = (float)(int)((ulonglong)*(undefined8 *)(lVar47 + 0x2c) >> 0x20);
    }
    dVar51 = (double)*(float *)(param_1 + 0x1e0);
    dVar90 = (double)*(float *)(param_1 + 0x1e4);
    dVar3 = (double)*(float *)(param_1 + 0x1e8);
    dVar60 = (double)*(float *)(param_1 + 0x1ec);
    dVar50 = (double)*(float *)(param_1 + 0x1f0);
    dVar52 = (double)*(float *)(param_1 + 500);
    dVar17 = (double)*(float *)(param_1 + 0x1f8);
    dVar53 = (double)*(float *)(param_1 + 0x1fc);
    dVar19 = (double)*(float *)(param_1 + 0x200);
    dVar54 = (double)*(float *)(param_1 + 0x204);
    dVar12 = (double)*(float *)(param_1 + 0x208);
    dVar73 = (double)*(float *)(param_1 + 0x20c);
    auVar79._8_4_ = SUB84(dVar90,0);
    auVar79._0_8_ = dVar51;
    auVar79._12_4_ = (int)((ulonglong)dVar90 >> 0x20);
    auVar88._8_4_ = SUB84(dVar54,0);
    auVar88._0_8_ = dVar19;
    auVar88._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
    dVar93 = auVar88._8_8_ * 0.0;
    auVar89._8_4_ = SUB84(dVar53,0);
    auVar89._0_8_ = dVar17;
    auVar89._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
    dVar69 = auVar89._8_8_ * 0.0;
    auVar56._8_4_ = SUB84(dVar73,0);
    auVar56._0_8_ = dVar12;
    auVar56._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
    dVar67 = auVar56._8_8_ * 0.0;
    dVar77 = *(double *)(param_1 + 0x48);
    dVar1 = *(double *)(param_1 + 0x48);
    dVar2 = *(double *)(param_1 + 0x50);
    dVar72 = *(double *)(param_1 + 0x50);
    dVar75 = *(double *)(param_1 + 0x58);
    dVar81 = *(double *)(param_1 + 0x58);
    fVar83 = (float)param_6 * 0.5 * (1.0 / fVar49);
    fVar68 = (float)param_7 * 0.5 * (1.0 / fVar59);
    dVar20 = dVar19 * dVar75 + dVar50 * dVar2 + dVar51 * dVar77 +
             (double)*(float *)(param_1 + 0x210);
    dVar58 = dVar54 * dVar81 + dVar52 * dVar72 + dVar90 * dVar1 +
             (double)*(float *)(param_1 + 0x214);
    dVar13 = (double)*(float *)(param_1 + 0x210) * 0.0;
    dVar70 = (double)*(float *)(param_1 + 0x214) * 0.0;
    dVar2 = dVar12 * dVar75 + dVar17 * dVar2 + dVar3 * dVar77 + (double)*(float *)(param_1 + 0x218);
    dVar1 = dVar73 * dVar81 + dVar53 * dVar72 + dVar60 * dVar1 + (double)*(float *)(param_1 + 0x21c)
    ;
    auVar63._8_4_ = SUB84(dVar1,0);
    auVar63._0_8_ = dVar2;
    auVar63._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    dVar14 = (double)*(float *)(param_1 + 0x218) * 0.0;
    dVar15 = (double)*(float *)(param_1 + 0x21c) * 0.0;
    dVar57 = dVar51 + dVar50 * 0.0 + dVar19 * 0.0 + dVar13;
    dVar65 = auVar79._8_8_ + dVar52 * 0.0 + dVar93 + dVar70;
    dVar77 = dVar3 + dVar17 * 0.0 + dVar12 * 0.0 + dVar14;
    dVar72 = dVar60 + dVar69 + dVar67 + dVar15;
    dVar81 = dVar51 * 0.0 + dVar50 + dVar19 * 0.0 + dVar13;
    dVar75 = dVar90 * 0.0 + dVar52 + dVar93 + dVar70;
    dVar93 = dVar3 * 0.0 + dVar17 + dVar12 * 0.0 + dVar14;
    dVar67 = dVar60 * 0.0 + dVar53 + dVar67 + dVar15;
    dVar13 = dVar51 * 0.0 + dVar50 * 0.0 + dVar19 + dVar13;
    dVar70 = dVar90 * 0.0 + dVar52 * 0.0 + dVar54 + dVar70;
    dVar14 = dVar3 * 0.0 + dVar17 * 0.0 + dVar12 + dVar14;
    dVar15 = dVar60 * 0.0 + dVar69 + dVar73 + dVar15;
    dVar52 = (double)((float)(uint)(param_5 + *(int *)(param_1 + 0x960)) * (1.0 / fVar59) + fVar68);
    dVar3 = (double)((float)(uint)(param_4 + *(int *)(param_1 + 0x960)) * (1.0 / fVar49) + fVar83);
    dVar53 = (double)-fVar68;
    dVar1 = (double)fVar83;
    dVar54 = (double)*(float *)(param_1 + 0x2a0);
    local_248._0_8_ = dVar72 * dVar3 + dVar77 * 0.0 + dVar65 * 0.0 + dVar57 * dVar1;
    local_248._8_8_ = dVar72 * dVar52 + dVar77 * 0.0 + dVar53 * dVar65 + dVar57 * 0.0;
    local_258._0_8_ = dVar72 * 0.0 + dVar77 * dVar54 + dVar65 * 0.0 + dVar57 * 0.0;
    dVar77 = dVar72 * 1.0 + dVar77 * 0.0 + dVar65 * 0.0 + dVar57 * 0.0;
    local_258._8_4_ = SUB84(dVar77,0);
    local_258._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
    local_1e8._0_8_ = dVar67 * dVar3 + dVar93 * 0.0 + dVar75 * 0.0 + dVar81 * dVar1;
    dVar77 = dVar67 * dVar52 + dVar93 * 0.0 + dVar53 * dVar75 + dVar81 * 0.0;
    local_268._0_8_ = dVar67 * 0.0 + dVar93 * dVar54 + dVar75 * 0.0 + dVar81 * 0.0;
    local_268._8_8_ = dVar67 * 1.0 + dVar93 * 0.0 + dVar75 * 0.0 + dVar81 * 0.0;
    local_1f8._0_8_ = dVar15 * dVar3 + dVar14 * 0.0 + dVar70 * 0.0 + dVar13 * dVar1;
    dVar72 = dVar15 * dVar52 + dVar14 * 0.0 + dVar53 * dVar70 + dVar13 * 0.0;
    dVar81 = dVar15 * 0.0 + dVar14 * dVar54 + dVar70 * 0.0 + dVar13 * 0.0;
    dVar75 = dVar15 * 1.0 + dVar14 * 0.0 + dVar70 * 0.0 + dVar13 * 0.0;
    local_218._8_4_ = SUB84(dVar75,0);
    local_218._0_8_ = dVar81;
    local_218._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
    local_278._8_8_ = auVar63._8_8_;
    local_238._0_8_ = dVar3 * (double)local_278._8_8_ + dVar2 * 0.0 + dVar58 * 0.0 + dVar20 * dVar1;
    local_238._8_8_ =
         dVar52 * (double)local_278._8_8_ + dVar2 * 0.0 + dVar53 * dVar58 + dVar20 * 0.0;
    uVar46 = (ulonglong)local_238._8_8_ >> 0x20;
    local_278._0_8_ = (double)local_278._8_8_ * 0.0 + dVar2 * dVar54 + dVar58 * 0.0 + dVar20 * 0.0;
    local_278._8_8_ = (double)local_278._8_8_ * 1.0 + dVar2 * 0.0 + dVar58 * 0.0 + dVar20 * 0.0;
    if (*(char *)(param_3 + 0x23f5) != '\0') goto LAB_140539519;
    local_1f8._8_4_ = SUB84(dVar72,0);
    local_1f8._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
    local_1e8._8_4_ = SUB84(dVar77,0);
    local_1e8._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
    local_238._8_4_ = (int)local_238._8_8_;
    local_238._12_4_ = (int)uVar46;
    if ((*(byte *)(param_3 + 0x3099) & 2) == 0) {
      dVar14 = *(double *)(param_3 + 0xeb0);
      dVar15 = *(double *)(param_3 + 0xeb8);
      dVar17 = *(double *)(param_3 + 0xed0);
      dVar19 = *(double *)(param_3 + 0xed8);
      dVar1 = *(double *)(param_3 + 0xf30);
      dVar77 = *(double *)(param_3 + 0xf30);
      dVar72 = *(double *)(param_3 + 0xf38);
      dVar2 = *(double *)(param_3 + 0xf38);
      dVar20 = *(double *)(param_3 + 0xec0);
      dVar58 = *(double *)(param_3 + 0xec8);
      dVar60 = *(double *)(param_3 + 0xee0);
      dVar67 = *(double *)(param_3 + 0xee8);
      dVar51 = *(double *)(param_3 + 0xef0);
      dVar90 = *(double *)(param_3 + 0xef8);
      dVar75 = *(double *)(param_3 + 0xf40);
      dVar3 = *(double *)(param_3 + 0xf40);
      dVar93 = *(double *)(param_3 + 0xf00);
      dVar50 = *(double *)(param_3 + 0xf08);
      dVar57 = *(double *)(param_3 + 0xf10);
      dVar65 = *(double *)(param_3 + 0xf18);
      dVar52 = *(double *)(param_3 + 0xf48);
      dVar53 = *(double *)(param_3 + 0xf48);
      dVar76 = dVar57 * dVar52 + dVar51 * dVar75 + dVar17 * dVar72 + dVar14 * dVar1;
      dVar80 = dVar65 * dVar53 + dVar90 * dVar3 + dVar19 * dVar2 + dVar15 * dVar77;
      dVar69 = *(double *)(param_3 + 0xf20);
      dVar91 = *(double *)(param_3 + 0xf28);
      dVar54 = dVar52 * dVar69 + dVar75 * dVar93 + dVar72 * dVar60 + dVar1 * dVar20;
      dVar1 = dVar53 * dVar91 + dVar3 * dVar50 + dVar2 * dVar67 + dVar77 * dVar58;
      auVar6._8_4_ = SUB84(dVar1,0);
      auVar6._0_8_ = dVar54;
      auVar6._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      dVar77 = *(double *)(param_3 + 0xf50);
      dVar1 = *(double *)(param_3 + 0xf50);
      dVar2 = *(double *)(param_3 + 0xf58);
      dVar72 = *(double *)(param_3 + 0xf58);
      dVar75 = *(double *)(param_3 + 0xf60);
      dVar3 = *(double *)(param_3 + 0xf60);
      dVar52 = *(double *)(param_3 + 0xf68);
      dVar53 = *(double *)(param_3 + 0xf68);
      dVar85 = dVar57 * dVar52 + dVar51 * dVar75 + dVar17 * dVar2 + dVar14 * dVar77;
      dVar94 = dVar65 * dVar53 + dVar90 * dVar3 + dVar19 * dVar72 + dVar15 * dVar1;
      dVar78 = dVar52 * dVar69 + dVar75 * dVar93 + dVar2 * dVar60 + dVar77 * dVar20;
      dVar82 = dVar53 * dVar91 + dVar3 * dVar50 + dVar72 * dVar67 + dVar1 * dVar58;
      dVar1 = *(double *)(param_3 + 0xf70);
      dVar77 = *(double *)(param_3 + 0xf70);
      dVar72 = *(double *)(param_3 + 0xf78);
      dVar2 = *(double *)(param_3 + 0xf78);
      dVar75 = *(double *)(param_3 + 0xf80);
      dVar3 = *(double *)(param_3 + 0xf80);
      dVar52 = *(double *)(param_3 + 0xf88);
      dVar53 = *(double *)(param_3 + 0xf88);
      dVar12 = dVar57 * dVar52 + dVar51 * dVar75 + dVar17 * dVar72 + dVar14 * dVar1;
      dVar13 = dVar65 * dVar53 + dVar90 * dVar3 + dVar19 * dVar2 + dVar15 * dVar77;
      dVar70 = dVar52 * dVar69 + dVar75 * dVar93 + dVar72 * dVar60 + dVar1 * dVar20;
      dVar73 = dVar53 * dVar91 + dVar3 * dVar50 + dVar2 * dVar67 + dVar77 * dVar58;
      dVar1 = *(double *)(param_3 + 0xf90);
      dVar77 = *(double *)(param_3 + 0xf90);
      dVar72 = *(double *)(param_3 + 0xf98);
      dVar2 = *(double *)(param_3 + 0xf98);
      dVar3 = *(double *)(param_3 + 4000);
      dVar75 = *(double *)(param_3 + 4000);
      dVar53 = *(double *)(param_3 + 0xfa8);
      dVar52 = *(double *)(param_3 + 0xfa8);
      dVar51 = dVar57 * dVar53 + dVar51 * dVar3 + dVar17 * dVar72 + dVar14 * dVar1;
      dVar90 = dVar65 * dVar52 + dVar90 * dVar75 + dVar19 * dVar2 + dVar15 * dVar77;
      dVar72 = dVar69 * dVar53 + dVar93 * dVar3 + dVar60 * dVar72 + dVar20 * dVar1;
      dVar2 = dVar91 * dVar52 + dVar50 * dVar75 + dVar67 * dVar2 + dVar58 * dVar77;
      uStack_220 = auVar6._8_8_;
      dVar75 = *(double *)(param_3 + 0x1030);
      dVar3 = *(double *)(param_3 + 0x1038);
      dVar15 = (dVar54 * 0.0 + dVar80 * 0.0 + dVar76 * 1.0) - uStack_220 * dVar75;
      dVar17 = (dVar54 * 0.0 + dVar80 * 1.0 + dVar76 * 0.0) - uStack_220 * dVar3;
      auVar64._0_8_ = *(ulonglong *)(param_3 + 0x1040) ^ 0x8000000000000000;
      auVar64._8_8_ = 0x8000000000000000;
      auVar63 = blendpd(auVar64,_DAT_149935300,2);
      dVar52 = auVar63._0_8_;
      dVar53 = auVar63._8_8_;
      dVar77 = uStack_220 * dVar52 + dVar54 * 1.0 + dVar80 * 0.0 + dVar76 * 0.0;
      dVar1 = uStack_220 * dVar53 + dVar54 * 0.0 + dVar80 * 0.0 + dVar76 * 0.0;
      auVar9._8_4_ = SUB84(dVar1,0);
      auVar9._0_8_ = dVar77;
      auVar9._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      dVar19 = (dVar78 * 0.0 + dVar94 * 0.0 + dVar85 * 1.0) - dVar82 * dVar75;
      dVar20 = (dVar78 * 0.0 + dVar94 * 1.0 + dVar85 * 0.0) - dVar82 * dVar3;
      dVar50 = dVar82 * dVar52 + dVar78 * 1.0 + dVar94 * 0.0 + dVar85 * 0.0;
      dVar65 = dVar82 * dVar53 + dVar78 * 0.0 + dVar94 * 0.0 + dVar85 * 0.0;
      dVar69 = (dVar70 * 0.0 + dVar13 * 0.0 + dVar12 * 1.0) - dVar73 * dVar75;
      dVar91 = (dVar70 * 0.0 + dVar13 * 1.0 + dVar12 * 0.0) - dVar73 * dVar3;
      dVar60 = dVar52 * dVar73 + dVar70 * 1.0 + dVar13 * 0.0 + dVar12 * 0.0;
      dVar93 = dVar53 * dVar73 + dVar70 * 0.0 + dVar13 * 0.0 + dVar12 * 0.0;
      dVar73 = (dVar72 * 0.0 + dVar90 * 0.0 + dVar51 * 1.0) - dVar75 * dVar2;
      dVar14 = (dVar72 * 0.0 + dVar90 * 1.0 + dVar51 * 0.0) - dVar3 * dVar2;
      dVar58 = dVar2 * dVar52 + dVar72 * 1.0 + dVar90 * 0.0 + dVar51 * 0.0;
      dVar51 = dVar2 * dVar53 + dVar72 * 0.0 + dVar90 * 0.0 + dVar51 * 0.0;
      uStack_220 = auVar9._8_8_;
      dVar1 = dVar77 * dVar81;
      dVar3 = dVar77 * (double)local_218._8_8_;
      dVar53 = uStack_220 * (double)local_238._0_8_ +
               dVar77 * (double)local_1f8._0_8_ +
               dVar17 * (double)local_1e8._0_8_ + dVar15 * (double)local_248._0_8_;
      dVar77 = uStack_220 * (double)local_238._8_8_ +
               dVar77 * (double)local_1f8._8_8_ +
               dVar17 * (double)local_1e8._8_8_ + dVar15 * (double)local_248._8_8_;
      auVar4._8_4_ = SUB84(dVar77,0);
      auVar4._0_8_ = dVar53;
      auVar4._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
      dVar90 = uStack_220 * (double)local_278._0_8_;
      uStack_220 = uStack_220 * (double)local_278._8_8_;
      dVar2 = dVar19 * (double)local_258._0_8_;
      dVar52 = dVar19 * (double)local_258._8_8_;
      dVar54 = dVar50 * dVar81;
      dVar13 = dVar50 * (double)local_218._8_8_;
      dVar75 = dVar65 * (double)local_238._0_8_;
      dVar77 = dVar65 * (double)local_238._8_8_ +
               dVar50 * (double)local_1f8._8_8_ +
               dVar20 * (double)local_1e8._8_8_ + dVar19 * (double)local_248._8_8_;
      dVar57 = dVar65 * (double)local_278._0_8_;
      dVar65 = dVar65 * (double)local_278._8_8_;
      dVar70 = dVar91 * (double)local_1e8._0_8_;
      dVar12 = dVar93 * (double)local_238._0_8_;
      dVar72 = dVar93 * (double)local_238._8_8_ +
               dVar60 * (double)local_1f8._8_8_ +
               dVar91 * (double)local_1e8._8_8_ + dVar69 * (double)local_248._8_8_;
      dVar67 = dVar93 * (double)local_278._0_8_;
      dVar93 = dVar93 * (double)local_278._8_8_;
      local_238._0_8_ =
           (double)local_238._0_8_ * dVar51 +
           (double)local_1f8._0_8_ * dVar58 +
           (double)local_1e8._0_8_ * dVar14 + (double)local_248._0_8_ * dVar73;
      local_238._8_8_ =
           (double)local_238._8_8_ * dVar51 +
           (double)local_1f8._8_8_ * dVar58 +
           (double)local_1e8._8_8_ * dVar14 + (double)local_248._8_8_ * dVar73;
      local_278._0_8_ =
           dVar51 * (double)local_278._0_8_ +
           dVar58 * dVar81 + dVar14 * (double)local_268._0_8_ + dVar73 * (double)local_258._0_8_;
      local_278._8_8_ =
           dVar51 * (double)local_278._8_8_ +
           dVar58 * (double)local_218._8_8_ +
           dVar14 * (double)local_268._8_8_ + dVar73 * (double)local_258._8_8_;
      stack0xfffffffffffffe00 = auVar4._8_8_;
      dVar81 = dVar67 + dVar60 * dVar81 +
                        dVar91 * (double)local_268._0_8_ + dVar69 * (double)local_258._0_8_;
      local_218._8_8_ =
           dVar93 + dVar60 * (double)local_218._8_8_ +
                    dVar91 * (double)local_268._8_8_ + dVar69 * (double)local_258._8_8_;
      local_1e8._0_8_ =
           dVar75 + dVar50 * (double)local_1f8._0_8_ +
                    dVar20 * (double)local_1e8._0_8_ + dVar19 * (double)local_248._0_8_;
      local_1f8._0_8_ =
           dVar12 + dVar60 * (double)local_1f8._0_8_ + dVar70 + dVar69 * (double)local_248._0_8_;
      local_258._0_8_ =
           dVar90 + dVar1 + dVar17 * (double)local_268._0_8_ + dVar15 * (double)local_258._0_8_;
      local_258._8_8_ =
           uStack_220 + dVar3 + dVar17 * (double)local_268._8_8_ + dVar15 * (double)local_258._8_8_;
      local_248._0_8_ = dVar53;
      local_248._8_8_ = stack0xfffffffffffffe00;
      local_268._0_8_ = dVar57 + dVar54 + dVar20 * (double)local_268._0_8_ + dVar2;
      local_268._8_8_ = dVar65 + dVar13 + dVar20 * (double)local_268._8_8_ + dVar52;
      goto LAB_140539519;
    }
  }
  else {
    fVar49 = 16384.0;
    fVar59 = 16384.0;
    if ((*(int *)(param_1 + 0x99c) == -1) && (*(longlong *)(param_1 + 0xb50) == 0)) {
      plVar48 = *(longlong **)(param_1 + 0x28);
      if (plVar48 == (longlong *)0x0) {
        plVar48 = (longlong *)**(longlong **)(param_1 + 0x18);
      }
      lVar47 = (**(code **)(*plVar48 + 0x10))();
      fVar49 = (float)(int)*(undefined8 *)(lVar47 + 0x2c);
      fVar59 = (float)(int)((ulonglong)*(undefined8 *)(lVar47 + 0x2c) >> 0x20);
    }
    dVar69 = (double)*(float *)(param_1 + 0x1e0);
    dVar50 = (double)*(float *)(param_1 + 0x1e4);
    dVar53 = (double)*(float *)(param_1 + 0x1e8);
    dVar51 = (double)*(float *)(param_1 + 0x1ec);
    dVar93 = (double)*(float *)(param_1 + 0x1f0);
    dVar52 = (double)*(float *)(param_1 + 500);
    dVar3 = (double)*(float *)(param_1 + 0x1f8);
    dVar54 = (double)*(float *)(param_1 + 0x1fc);
    dVar14 = (double)*(float *)(param_1 + 0x200);
    dVar12 = (double)*(float *)(param_1 + 0x204);
    dVar19 = (double)*(float *)(param_1 + 0x208);
    dVar13 = (double)*(float *)(param_1 + 0x20c);
    auVar86._8_4_ = SUB84(dVar12,0);
    auVar86._0_8_ = dVar14;
    auVar86._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    dVar90 = auVar86._8_8_ * 0.0;
    auVar87._8_4_ = SUB84(dVar54,0);
    auVar87._0_8_ = dVar3;
    auVar87._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
    dVar91 = auVar87._8_8_ * 0.0;
    auVar55._8_4_ = SUB84(dVar13,0);
    auVar55._0_8_ = dVar19;
    auVar55._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    dVar57 = auVar55._8_8_ * 0.0;
    auVar61._8_4_ = SUB84(dVar51,0);
    auVar61._0_8_ = dVar53;
    auVar61._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
    dVar65 = auVar61._8_8_ * 0.0;
    dVar77 = *(double *)(param_1 + 0x48);
    dVar1 = *(double *)(param_1 + 0x48);
    dVar72 = *(double *)(param_1 + 0x50);
    dVar2 = *(double *)(param_1 + 0x50);
    dVar81 = *(double *)(param_1 + 0x58);
    dVar75 = *(double *)(param_1 + 0x58);
    fVar68 = (float)param_6 * 0.5 * (1.0 / fVar49);
    fVar83 = (float)param_7 * 0.5 * (1.0 / fVar59);
    dVar15 = dVar14 * dVar81 + dVar93 * dVar72 + dVar69 * dVar77 +
             (double)*(float *)(param_1 + 0x210);
    dVar17 = dVar12 * dVar75 + dVar52 * dVar2 + dVar50 * dVar1 + (double)*(float *)(param_1 + 0x214)
    ;
    dVar70 = (double)*(float *)(param_1 + 0x210) * 0.0;
    dVar73 = (double)*(float *)(param_1 + 0x214) * 0.0;
    dVar20 = dVar19 * dVar81 + dVar3 * dVar72 + dVar53 * dVar77 +
             (double)*(float *)(param_1 + 0x218);
    dVar58 = dVar13 * dVar75 + dVar54 * dVar2 + dVar51 * dVar1 + (double)*(float *)(param_1 + 0x21c)
    ;
    dVar76 = (double)*(float *)(param_1 + 0x218) * 0.0;
    dVar80 = (double)*(float *)(param_1 + 0x21c) * 0.0;
    dVar60 = dVar69 + dVar93 * 0.0 + dVar14 * 0.0 + dVar70;
    dVar67 = dVar50 + dVar52 * 0.0 + dVar90 + dVar73;
    dVar77 = dVar53 + dVar3 * 0.0 + dVar19 * 0.0 + dVar76;
    dVar72 = dVar51 + dVar91 + dVar57 + dVar80;
    dVar51 = dVar69 * 0.0 + dVar93 + dVar14 * 0.0 + dVar70;
    dVar90 = dVar50 * 0.0 + dVar52 + dVar90 + dVar73;
    dVar2 = dVar53 * 0.0 + dVar3 + dVar19 * 0.0 + dVar76;
    dVar81 = dVar65 + dVar54 + dVar57 + dVar80;
    dVar70 = dVar69 * 0.0 + dVar93 * 0.0 + dVar14 + dVar70;
    dVar73 = dVar50 * 0.0 + dVar52 * 0.0 + dVar12 + dVar73;
    dVar76 = dVar53 * 0.0 + dVar3 * 0.0 + dVar19 + dVar76;
    dVar80 = dVar65 + dVar91 + dVar13 + dVar80;
    dVar52 = (double)((float)(uint)(param_5 + *(int *)(param_1 + 0x960)) * (1.0 / fVar59) + fVar83);
    dVar3 = (double)((float)(uint)(param_4 + *(int *)(param_1 + 0x960)) * (1.0 / fVar49) + fVar68);
    dVar53 = (double)-fVar83;
    dVar1 = (double)fVar68;
    dVar54 = (double)*(float *)(param_1 + 0x2a0);
    dVar91 = dVar72 * dVar3 + dVar77 * 0.0 + dVar67 * 0.0 + dVar60 * dVar1;
    dVar75 = dVar72 * dVar52 + dVar77 * 0.0 + dVar53 * dVar67 + dVar60 * 0.0;
    local_248._8_4_ = SUB84(dVar75,0);
    local_248._0_8_ = dVar91;
    local_248._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
    dVar50 = dVar72 * 0.0 + dVar77 * dVar54 + dVar67 * 0.0 + dVar60 * 0.0;
    dVar77 = dVar72 * 1.0 + dVar77 * 0.0 + dVar67 * 0.0 + dVar60 * 0.0;
    local_258._8_4_ = SUB84(dVar77,0);
    local_258._0_8_ = dVar50;
    local_258._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
    dVar57 = dVar81 * dVar3 + dVar2 * 0.0 + dVar90 * 0.0 + dVar51 * dVar1;
    dVar77 = dVar81 * dVar52 + dVar2 * 0.0 + dVar53 * dVar90 + dVar51 * 0.0;
    local_1e8._8_4_ = SUB84(dVar77,0);
    local_1e8._0_8_ = dVar57;
    local_1e8._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
    dVar69 = dVar81 * 0.0 + dVar2 * dVar54 + dVar90 * 0.0 + dVar51 * 0.0;
    dVar77 = dVar81 * 1.0 + dVar2 * 0.0 + dVar90 * 0.0 + dVar51 * 0.0;
    local_268._8_4_ = SUB84(dVar77,0);
    local_268._0_8_ = dVar69;
    local_268._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
    dVar65 = dVar80 * dVar3 + dVar76 * 0.0 + dVar73 * 0.0 + dVar70 * dVar1;
    dVar77 = dVar80 * dVar52 + dVar76 * 0.0 + dVar53 * dVar73 + dVar70 * 0.0;
    local_1f8._8_4_ = SUB84(dVar77,0);
    local_1f8._0_8_ = dVar65;
    local_1f8._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
    local_218._0_8_ = dVar80 * 0.0 + dVar76 * dVar54 + dVar73 * 0.0 + dVar70 * 0.0;
    dVar66 = dVar80 * 1.0 + dVar76 * 0.0 + dVar73 * 0.0 + dVar70 * 0.0;
    local_218._8_8_ = dVar66;
    dVar78 = *(double *)(param_3 + 0xcb0);
    dVar82 = *(double *)(param_3 + 0xcb8);
    dVar29 = *(double *)(param_3 + 0xcc0);
    dVar30 = *(double *)(param_3 + 0xcc8);
    dVar85 = *(double *)(param_3 + 0xcd0);
    dVar94 = *(double *)(param_3 + 0xcd8);
    dVar80 = dVar3 * dVar58 + dVar20 * 0.0 + dVar17 * 0.0 + dVar15 * dVar1;
    dVar1 = dVar52 * dVar58 + dVar20 * 0.0 + dVar53 * dVar17 + dVar15 * 0.0;
    local_238._8_4_ = SUB84(dVar1,0);
    local_238._0_8_ = dVar80;
    local_238._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    dVar25 = *(double *)(param_3 + 0xce0);
    dVar26 = *(double *)(param_3 + 0xce8);
    local_208 = ZEXT812(0);
    uStack_1fc = 0x3ff00000;
    dVar76 = dVar58 * 0.0 + dVar20 * dVar54 + dVar17 * 0.0 + dVar15 * 0.0;
    dVar1 = dVar58 * 1.0 + dVar20 * 0.0 + dVar17 * 0.0 + dVar15 * 0.0;
    local_278._8_4_ = SUB84(dVar1,0);
    local_278._0_8_ = dVar76;
    local_278._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    dVar27 = *(double *)(param_3 + 0xcf0);
    dVar28 = *(double *)(param_3 + 0xcf8);
    dVar31 = *(double *)(param_3 + 0xd00);
    dVar32 = *(double *)(param_3 + 0xd08);
    dVar33 = *(double *)(param_3 + 0xd10);
    dVar34 = *(double *)(param_3 + 0xd18);
    dVar35 = *(double *)(param_3 + 0xd20);
    dVar36 = *(double *)(param_3 + 0xd28);
    dVar77 = *(double *)(param_3 + 0x680);
    dVar1 = *(double *)(param_3 + 0x680);
    dVar2 = *(double *)(param_3 + 0x688);
    dVar72 = *(double *)(param_3 + 0x688);
    dVar75 = *(double *)(param_3 + 0x690);
    dVar81 = *(double *)(param_3 + 0x690);
    dVar52 = *(double *)(param_3 + 0x698);
    dVar3 = *(double *)(param_3 + 0x698);
    dVar54 = *(double *)(param_3 + 0x6a0);
    dVar53 = *(double *)(param_3 + 0x6a0);
    dVar13 = *(double *)(param_3 + 0x6a8);
    dVar12 = *(double *)(param_3 + 0x6a8);
    dVar73 = *(double *)(param_3 + 0x6b0);
    dVar70 = *(double *)(param_3 + 0x6b0);
    dVar71 = *(double *)(param_3 + 0x6b8);
    dVar14 = *(double *)(param_3 + 0x6b8);
    dVar74 = *(double *)(param_3 + 0x6c0);
    dVar15 = *(double *)(param_3 + 0x6c0);
    dVar17 = *(double *)(param_3 + 0x6c8);
    dVar19 = *(double *)(param_3 + 0x6c8);
    dVar39 = *(double *)(param_3 + 0x6d0);
    dVar20 = *(double *)(param_3 + 0x6d0);
    dVar40 = *(double *)(param_3 + 0x6d8);
    dVar58 = *(double *)(param_3 + 0x6d8);
    dVar41 = *(double *)(param_3 + 0x6e0);
    dVar51 = *(double *)(param_3 + 0x6e0);
    dVar42 = *(double *)(param_3 + 0x6e8);
    dVar90 = *(double *)(param_3 + 0x6e8);
    dVar43 = *(double *)(param_3 + 0x6f0);
    dVar60 = *(double *)(param_3 + 0x6f0);
    dVar44 = *(double *)(param_3 + 0x6f8);
    dVar67 = *(double *)(param_3 + 0x6f8);
    local_228 = *(double *)(param_3 + 0x650);
    dVar93 = *(double *)(param_3 + 0x650);
    uStack_220._0_4_ = SUB84(dVar93,0);
    uStack_220._4_4_ = (int)((ulonglong)dVar93 >> 0x20);
    dVar45 = *(double *)(param_3 + 0x670);
    dVar93 = *(double *)(param_3 + 0x670);
    dVar37 = *(double *)(param_3 + 0x1030);
    dVar38 = *(double *)(param_3 + 0x1038);
    if ((*(char *)(param_3 + 0x23f5) != '\x01') || (*(int *)(*(longlong *)(param_3 + 8) + 0x10) < 1)
       ) {
      dVar10 = dVar33 * dVar52 + dVar27 * dVar75 + dVar85 * dVar2 + dVar78 * dVar77;
      dVar11 = dVar34 * dVar3 + dVar28 * dVar81 + dVar94 * dVar72 + dVar82 * dVar1;
      dVar23 = dVar52 * dVar35 + dVar75 * dVar31 + dVar2 * dVar25 + dVar77 * dVar29;
      dVar24 = dVar3 * dVar36 + dVar81 * dVar32 + dVar72 * dVar26 + dVar1 * dVar30;
      dVar16 = dVar33 * dVar71 + dVar27 * dVar73 + dVar85 * dVar13 + dVar78 * dVar54;
      dVar18 = dVar34 * dVar14 + dVar28 * dVar70 + dVar94 * dVar12 + dVar82 * dVar53;
      dVar73 = dVar71 * dVar35 + dVar73 * dVar31 + dVar13 * dVar25 + dVar54 * dVar29;
      dVar12 = dVar14 * dVar36 + dVar70 * dVar32 + dVar12 * dVar26 + dVar53 * dVar30;
      dVar84 = dVar33 * dVar40 + dVar27 * dVar39 + dVar85 * dVar17 + dVar78 * dVar74;
      dVar92 = dVar34 * dVar58 + dVar28 * dVar20 + dVar94 * dVar19 + dVar82 * dVar15;
      dVar71 = dVar40 * dVar35 + dVar39 * dVar31 + dVar17 * dVar25 + dVar74 * dVar29;
      dVar74 = dVar58 * dVar36 + dVar20 * dVar32 + dVar19 * dVar26 + dVar15 * dVar30;
      dVar77 = dVar33 * dVar44 + dVar27 * dVar43 + dVar85 * dVar42 + dVar78 * dVar41;
      dVar81 = dVar34 * dVar67 + dVar28 * dVar60 + dVar94 * dVar90 + dVar82 * dVar51;
      dVar72 = dVar35 * dVar44 + dVar31 * dVar43 + dVar25 * dVar42 + dVar29 * dVar41;
      dVar75 = dVar36 * dVar67 + dVar32 * dVar60 + dVar26 * dVar90 + dVar30 * dVar51;
      dVar1 = dVar16 * 0.0;
      dVar2 = dVar18 * 0.0;
      dVar3 = dVar10 * 0.0;
      dVar53 = dVar11 * 0.0;
      dVar60 = dVar73 * 0.0;
      dVar67 = dVar12 * 0.0;
      dVar14 = dVar23 * 0.0;
      dVar17 = dVar24 * 0.0;
      dVar52 = dVar3 + dVar1;
      dVar54 = dVar53 + dVar2;
      dVar15 = dVar14 + dVar60;
      dVar20 = dVar17 + dVar67;
      dVar78 = local_228 * dVar84 + dVar52 + dVar77;
      dVar82 = uStack_220 * dVar92 + dVar54 + dVar81;
      dVar77 = dVar77 * 0.0;
      dVar81 = dVar81 * 0.0;
      dVar51 = dVar10 + dVar1 + dVar84 * 0.0 + dVar77;
      dVar90 = dVar11 + dVar2 + dVar92 * 0.0 + dVar81;
      dVar13 = dVar16 + dVar3 + dVar84 * 0.0 + dVar77;
      dVar70 = dVar18 + dVar53 + dVar92 * 0.0 + dVar81;
      dVar77 = dVar84 * dVar45 + dVar52 + dVar77;
      dVar81 = dVar92 * dVar93 + dVar54 + dVar81;
      dVar19 = local_228 * dVar71 + dVar15 + dVar72;
      dVar58 = uStack_220 * dVar74 + dVar20 + dVar75;
      dVar72 = dVar72 * 0.0;
      dVar75 = dVar75 * 0.0;
      dVar1 = dVar23 + dVar60 + dVar71 * 0.0 + dVar72;
      dVar3 = dVar24 + dVar67 + dVar74 * 0.0 + dVar75;
      dVar73 = dVar73 + dVar14 + dVar71 * 0.0 + dVar72;
      dVar14 = dVar12 + dVar17 + dVar74 * 0.0 + dVar75;
      dVar72 = dVar71 * dVar45 + dVar15 + dVar72;
      dVar75 = dVar74 * dVar93 + dVar20 + dVar75;
      dVar52 = (dVar1 * 0.0 + dVar90 * 0.0 + dVar51 * 1.0) - dVar37 * dVar3;
      dVar53 = (dVar1 * 0.0 + dVar90 * stack0xfffffffffffffe00 + dVar51 * 0.0) - dVar38 * dVar3;
      auVar62._0_8_ = *(ulonglong *)(param_3 + 0x1040) ^ 0x8000000000000000;
      auVar62._8_8_ = 0x8000000000000000;
      auVar63 = blendpd(auVar62,_DAT_149935300,2);
      dVar60 = auVar63._0_8_;
      dVar67 = auVar63._8_8_;
      dVar2 = dVar3 * dVar60 + dVar1 * 1.0 + dVar90 * 0.0 + dVar51 * 0.0;
      dVar3 = dVar3 * dVar67 + dVar1 * 0.0 + dVar90 * 0.0 + dVar51 * 0.0;
      dVar54 = (dVar73 * 0.0 + dVar70 * 0.0 + dVar13 * 1.0) - dVar37 * dVar14;
      dVar12 = (dVar73 * 0.0 + dVar70 * stack0xfffffffffffffe00 + dVar13 * 0.0) - dVar38 * dVar14;
      dVar15 = dVar14 * dVar60 + dVar73 * 1.0 + dVar70 * 0.0 + dVar13 * 0.0;
      dVar17 = dVar14 * dVar67 + dVar73 * 0.0 + dVar70 * 0.0 + dVar13 * 0.0;
      dVar13 = (dVar19 * 0.0 + dVar82 * 0.0 + dVar78 * 1.0) - dVar37 * dVar58;
      dVar70 = (dVar19 * 0.0 + dVar82 * stack0xfffffffffffffe00 + dVar78 * 0.0) - dVar38 * dVar58;
      dVar20 = dVar58 * dVar60 + dVar19 * 1.0 + dVar82 * 0.0 + dVar78 * 0.0;
      dVar19 = dVar58 * dVar67 + dVar19 * 0.0 + dVar82 * 0.0 + dVar78 * 0.0;
      dVar73 = (dVar72 * 0.0 + dVar81 * 0.0 + dVar77 * 1.0) - dVar37 * dVar75;
      dVar14 = (dVar72 * 0.0 + stack0xfffffffffffffe00 * dVar81 + dVar77 * 0.0) - dVar38 * dVar75;
      dVar90 = dVar75 * dVar60 + dVar72 * 1.0 + dVar81 * 0.0 + dVar77 * 0.0;
      dVar81 = dVar75 * dVar67 + dVar72 * 0.0 + dVar81 * 0.0 + dVar77 * 0.0;
      dVar58 = dVar3 * (double)local_238._8_8_;
      dVar75 = dVar3 * (double)local_278._8_8_;
      dVar1 = dVar54 * (double)local_258._8_8_;
      dVar77 = dVar17 * (double)local_238._8_8_;
      dVar60 = dVar17 * (double)local_278._8_8_;
      dVar51 = dVar19 * (double)local_238._8_8_;
      dVar72 = dVar19 * (double)local_278._8_8_;
      local_238._0_8_ = dVar80 * dVar81 + dVar65 * dVar90 + dVar57 * dVar14 + dVar91 * dVar73;
      local_238._8_8_ =
           (double)local_238._8_8_ * dVar81 +
           (double)local_1f8._8_8_ * dVar90 +
           (double)local_1e8._8_8_ * dVar14 + (double)local_248._8_8_ * dVar73;
      local_278._0_8_ =
           dVar81 * dVar76 + dVar90 * (double)local_218._0_8_ + dVar14 * dVar69 + dVar73 * dVar50;
      local_278._8_8_ =
           dVar81 * (double)local_278._8_8_ +
           dVar90 * dVar66 + dVar14 * (double)local_268._8_8_ + dVar73 * (double)local_258._8_8_;
      dVar81 = dVar19 * dVar76 +
               dVar20 * (double)local_218._0_8_ + dVar70 * dVar69 + dVar13 * dVar50;
      local_218._8_8_ =
           dVar72 + dVar20 * dVar66 +
                    dVar70 * (double)local_268._8_8_ + dVar13 * (double)local_258._8_8_;
      local_1e8._0_8_ = dVar17 * dVar80 + dVar15 * dVar65 + dVar12 * dVar57 + dVar54 * dVar91;
      dVar77 = dVar77 + dVar15 * (double)local_1f8._8_8_ +
                        dVar12 * (double)local_1e8._8_8_ + dVar54 * (double)local_248._8_8_;
      local_1f8._0_8_ = dVar19 * dVar80 + dVar20 * dVar65 + dVar70 * dVar57 + dVar13 * dVar91;
      dVar72 = dVar51 + dVar20 * (double)local_1f8._8_8_ +
                        dVar70 * (double)local_1e8._8_8_ + dVar13 * (double)local_248._8_8_;
      local_258._0_8_ =
           dVar3 * dVar76 + dVar2 * (double)local_218._0_8_ + dVar53 * dVar69 + dVar52 * dVar50;
      local_258._8_8_ =
           dVar75 + dVar2 * dVar66 +
                    dVar53 * (double)local_268._8_8_ + dVar52 * (double)local_258._8_8_;
      local_248._0_8_ = dVar3 * dVar80 + dVar2 * dVar65 + dVar53 * dVar57 + dVar52 * dVar91;
      local_248._8_8_ =
           dVar58 + dVar2 * (double)local_1f8._8_8_ +
                    dVar53 * (double)local_1e8._8_8_ + dVar52 * (double)local_248._8_8_;
      local_268._0_8_ =
           dVar17 * dVar76 + dVar15 * (double)local_218._0_8_ + dVar12 * dVar69 + dVar54 * dVar50;
      local_268._8_8_ = dVar60 + dVar15 * dVar66 + dVar12 * (double)local_268._8_8_ + dVar1;
      goto LAB_140539519;
    }
  }
  dVar81 = (double)local_218._0_8_;
  dVar77 = (double)local_1e8._8_8_;
  dVar72 = (double)local_1f8._8_8_;
LAB_140539519:
  *param_2 = (double)local_248._0_8_;
  param_2[1] = (double)local_248._8_8_;
  auVar21._8_4_ = (int)local_258._8_8_;
  auVar21._0_8_ = local_258._0_8_;
  auVar21._12_4_ = (int)((ulonglong)local_258._8_8_ >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar21;
  auVar8._8_4_ = SUB84(dVar77,0);
  auVar8._0_8_ = local_1e8._0_8_;
  auVar8._12_4_ = (int)((ulonglong)dVar77 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 4) = auVar8;
  param_2[6] = (double)local_268._0_8_;
  param_2[7] = (double)local_268._8_8_;
  auVar7._8_4_ = SUB84(dVar72,0);
  auVar7._0_8_ = local_1f8._0_8_;
  auVar7._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 8) = auVar7;
  auVar5._8_4_ = (int)local_218._8_8_;
  auVar5._0_8_ = dVar81;
  auVar5._12_4_ = (int)((ulonglong)local_218._8_8_ >> 0x20);
  *(undefined1 (*) [16])(param_2 + 10) = auVar5;
  auVar22._8_4_ = (int)local_238._8_8_;
  auVar22._0_8_ = local_238._0_8_;
  auVar22._12_4_ = (int)((ulonglong)local_238._8_8_ >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0xc) = auVar22;
  param_2[0xe] = (double)local_278._0_8_;
  param_2[0xf] = (double)local_278._8_8_;
  return param_2;
}



// FUNCTION 140539646 FUN_140539646 body=226 status=ok
// SIG undefined FUN_140539646(void)

longlong * FUN_140539646(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d5a44;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14053972a FUN_14053972a body=1869 status=ok
// SIG undefined FUN_14053972a(void)

void FUN_14053972a(longlong *param_1)

{
  float *pfVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  code *pcVar6;
  char cVar7;
  code *pcVar8;
  code *pcVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  code **ppcVar16;
  code *pcVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  code *pcVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  code *_Src;
  code *pcVar25;
  float fVar26;
  undefined1 auStack_498 [32];
  undefined4 local_478;
  undefined4 local_470;
  undefined4 local_468;
  undefined8 local_460;
  undefined2 *local_458;
  undefined1 *local_450;
  undefined1 *local_448;
  code **local_440;
  undefined1 *local_438;
  code *local_430;
  longlong *local_428;
  longlong *local_420;
  code *local_418;
  code *local_410;
  code *local_408;
  code *local_400;
  undefined4 local_3f8 [188];
  undefined1 local_108 [152];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_498;
  if (((*(byte *)(param_1 + 6) & 0x80) != 0) &&
     (cVar7 = (**(code **)(*param_1 + 0x310))(param_1,0), cVar7 != '\0')) {
    (**(code **)(*param_1 + 0x330))(param_1);
  }
  if (0 < (int)param_1[0x10]) {
    plVar3 = param_1 + 0xf;
    uVar12 = 0;
    do {
      iVar11 = (int)uVar12;
      if ((*(longlong *)(*plVar3 + uVar12 * 0x98) == 0) ||
         (cVar7 = FUN_140539fdc(param_1,*plVar3 + uVar12 * 0x98), cVar7 != '\0')) {
        FUN_140539e78(plVar3,uVar12);
        FUN_140539ef6(plVar3);
        iVar11 = iVar11 + -1;
      }
      uVar12 = (ulonglong)(iVar11 + 1U);
    } while ((int)(iVar11 + 1U) < (int)param_1[0x10]);
  }
  lVar24 = param_1[5];
  lVar19 = *(longlong *)(lVar24 + 0x98);
  if (lVar19 != 0) {
    if (DAT_14caf9cd0 == 0) {
      local_440 = &local_408;
      local_408 = FUN_141030f22;
      local_430 = FUN_14081d0ea;
      local_438 = &LAB_1463c0cc2;
      local_448 = &LAB_147c9db5b;
      local_450 = &LAB_1463f9c44;
      local_458 = &DAT_149e063b2;
      local_460 = 0x2000000000;
      local_468 = 0x10000004;
      local_470 = 8;
      local_478 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
      lVar19 = *(longlong *)(lVar24 + 0x98);
      if (lVar19 == 0) goto LAB_140539cca;
    }
    if ((((DAT_14caf9cd0 != 0) && (lVar24 = *(longlong *)(lVar19 + 0x10), lVar24 != 0)) &&
        (*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(lVar24 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar24 + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8)
         == DAT_14caf9cd0 + 0x30 && (*(longlong *)(lVar19 + 0x438) != 0)))) {
      if ((char)param_1[0x12] == '\0') {
        FUN_14053b46e(param_1);
        *(undefined1 *)(param_1 + 0x12) = 1;
      }
      iVar11 = (int)param_1[0xe];
      lVar24 = (longlong)iVar11;
      if (lVar24 != 0) {
        local_428 = param_1 + 0xd;
        plVar3 = (longlong *)*local_428;
        local_420 = plVar3 + 0x13;
        uVar12 = 0;
        iVar15 = 0;
        bVar5 = *plVar3 == 0;
        do {
          lVar19 = (longlong)iVar15;
          iVar14 = iVar15 + 1;
          if (iVar15 + 1 < iVar11) {
            iVar14 = iVar11;
          }
          plVar18 = local_420 + lVar19 * 0x13;
          iVar22 = iVar15;
          lVar20 = lVar19;
          do {
            lVar20 = lVar20 + 1;
            iVar23 = iVar14;
            if (lVar24 <= lVar20) break;
            lVar4 = *plVar18;
            iVar22 = iVar22 + 1;
            plVar18 = plVar18 + 0x13;
            iVar23 = iVar22;
          } while (bVar5 == (lVar4 == 0));
          if (bVar5) {
            FUN_140882410(plVar3 + lVar19 * 0x13);
          }
          else {
            iVar14 = (int)uVar12;
            if (iVar14 != iVar15) {
              memmove(plVar3 + (longlong)iVar14 * 0x13,plVar3 + lVar19 * 0x13,
                      (longlong)(iVar23 - iVar15) * 0x98);
            }
            uVar12 = (ulonglong)(uint)(iVar14 + (iVar23 - iVar15));
          }
          plVar18 = local_428;
          iVar15 = iVar23;
          bVar5 = (bool)(bVar5 ^ 1);
        } while (lVar20 < lVar24);
        iVar11 = (int)uVar12;
        *(int *)(param_1 + 0xe) = iVar11;
        if (iVar11 != 0) {
          if (1 < iVar11) {
            pcVar17 = (code *)*local_428;
            memset(local_3f8,0,0x2f0);
            local_400 = pcVar17 + uVar12 * 0x98 + -0x98;
            local_408 = pcVar17;
            fVar26 = logf((float)iVar11);
            local_3f8[0] = (int)(longlong)(fVar26 + fVar26);
            ppcVar16 = &local_408;
            do {
              pcVar13 = *ppcVar16;
              pcVar8 = ppcVar16[1];
              iVar11 = *(int *)(ppcVar16 + 2);
              iVar15 = (int)((ulonglong)((longlong)pcVar8 - (longlong)pcVar13) >> 3);
              pcVar21 = pcVar13;
              _Src = pcVar13;
              pcVar17 = pcVar8;
              if (iVar11 != 0) {
LAB_140539970:
                uVar10 = iVar15 * 0x286bca1b + 1;
                plVar18 = local_428;
                if (8 < (int)uVar10) {
                  local_420 = (longlong *)CONCAT44(local_420._4_4_,iVar11);
                  local_418 = pcVar13;
                  local_410 = pcVar8;
                  memcpy(local_108,_Src + (ulonglong)(uVar10 >> 1) * 0x98,0x98);
                  memcpy(_Src + (ulonglong)(uVar10 >> 1) * 0x98,_Src,0x98);
                  memcpy(_Src,local_108,0x98);
                  pcVar8 = pcVar17 + 0x98;
                  pcVar21 = _Src;
                  do {
                    pcVar25 = pcVar21 + 0x98;
                    pcVar6 = pcVar21 + 0x98;
                    do {
                      pcVar21 = pcVar6;
                      pcVar13 = pcVar25;
                      if (pcVar17 < pcVar21) break;
                      pcVar25 = pcVar13 + 0x98;
                      pcVar6 = pcVar21 + 0x98;
                    } while (*(float *)(pcVar21 + 0x6c) < *(float *)(_Src + 0x6c) ||
                             *(float *)(pcVar21 + 0x6c) == *(float *)(_Src + 0x6c));
                    pcVar25 = pcVar8 + -0x130;
                    do {
                      pcVar6 = pcVar8;
                      pcVar9 = pcVar25;
                      pcVar8 = pcVar6 + -0x98;
                      if (pcVar8 <= _Src) break;
                      pcVar25 = pcVar9 + -0x98;
                    } while (*(float *)(_Src + 0x6c) < *(float *)(pcVar6 + -0x2c) ||
                             *(float *)(_Src + 0x6c) == *(float *)(pcVar6 + -0x2c));
                    if (pcVar8 < pcVar21) goto LAB_140539b3d;
                    memcpy(local_108,pcVar21,0x98);
                    memcpy(pcVar21,pcVar8,0x98);
                    memcpy(pcVar8,local_108,0x98);
                  } while( true );
                }
                for (; local_428 = plVar18, pcVar13 = _Src, pcVar8 = _Src, _Src < pcVar17;
                    pcVar17 = pcVar17 + -0x98) {
                  while (pcVar21 = pcVar13, pcVar13 = pcVar8 + 0x98, pcVar13 <= pcVar17) {
                    pfVar1 = (float *)(pcVar8 + 0x104);
                    pcVar8 = pcVar13;
                    if (*pfVar1 < *(float *)(pcVar21 + 0x6c) ||
                        *pfVar1 == *(float *)(pcVar21 + 0x6c)) {
                      pcVar13 = pcVar21;
                    }
                  }
                  memcpy(local_108,pcVar21,0x98);
                  memcpy(pcVar21,pcVar17,0x98);
                  memcpy(pcVar17,local_108,0x98);
                  plVar18 = local_428;
                }
                goto LAB_140539ab8;
              }
LAB_140539d43:
              FUN_14053b1d6(pcVar21);
LAB_140539ab8:
              ppcVar16 = ppcVar16 + -3;
            } while (&local_408 <= ppcVar16);
          }
          iVar11 = 0;
          FUN_1449daf8c(&local_408,param_1,0);
          lVar24 = (**(code **)(*(longlong *)param_1[5] + 0x180))();
          if (0 < (int)param_1[0xe]) {
            dVar2 = *(double *)(lVar24 + 0x6d0);
            uVar12 = 0;
            do {
              iVar15 = (int)uVar12;
              if ((float)dVar2 < *(float *)(*plVar18 + 0x6c + uVar12 * 0x98)) {
                if (iVar11 == 0) goto LAB_140539cbd;
                break;
              }
              lVar24 = *plVar18 + uVar12 * 0x98;
              FUN_14053a926(lVar24,&local_408,*(undefined8 *)(param_1[5] + 0x68));
              if (*(char *)(lVar24 + 0x68) == '\x01') {
                FUN_140539e78(plVar18,uVar12);
                FUN_140539ef6(plVar18);
                iVar15 = iVar15 + -1;
              }
              else {
                *(float *)(lVar24 + 0x6c) = (float)dVar2 + 0.5;
              }
              if (iVar11 == -0x31) break;
              uVar12 = (ulonglong)(iVar15 + 1U);
              iVar11 = iVar11 + -1;
            } while ((int)(iVar15 + 1U) < (int)param_1[0xe]);
            (**(code **)(*param_1 + 0x308))(param_1,local_108,&local_408,1);
          }
LAB_140539cbd:
          FUN_1449daebe(&local_408);
        }
      }
    }
  }
LAB_140539cca:
  if ((local_70 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140539b3d:
  memcpy(local_108,_Src,0x98);
  memcpy(_Src,pcVar8,0x98);
  memcpy(pcVar8,local_108,0x98);
  iVar11 = (int)local_420 + -1;
  plVar18 = local_428;
  if ((longlong)pcVar9 - (longlong)local_418 < (longlong)local_410 - (longlong)pcVar13) {
    if (pcVar21 < pcVar17) {
      *ppcVar16 = pcVar21;
      ppcVar16[1] = pcVar17;
      *(int *)(ppcVar16 + 2) = iVar11;
      ppcVar16 = ppcVar16 + 3;
    }
    pcVar13 = _Src;
    pcVar17 = pcVar9;
    pcVar21 = _Src;
    pcVar25 = pcVar6 + -0x130;
    if (pcVar8 <= _Src + 0x98) goto LAB_140539ab8;
  }
  else {
    if (_Src + 0x98 < pcVar8) {
      *ppcVar16 = _Src;
      ppcVar16[1] = pcVar6 + -0x130;
      *(int *)(ppcVar16 + 2) = iVar11;
      ppcVar16 = ppcVar16 + 3;
    }
    pcVar25 = pcVar17;
    if (pcVar17 <= pcVar21) goto LAB_140539ab8;
  }
  iVar15 = (int)((ulonglong)((longlong)pcVar17 - (longlong)pcVar13) >> 3);
  pcVar8 = pcVar17;
  _Src = pcVar21;
  pcVar17 = pcVar25;
  if (iVar11 == 0) goto LAB_140539d43;
  goto LAB_140539970;
}



// FUNCTION 140539e78 FUN_140539e78 body=126 status=ok
// SIG undefined FUN_140539e78(void)

void FUN_140539e78(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)(*param_1 + (longlong)(int)param_2 * 0x98);
  if (*(char *)(*param_1 + 0x90 + (longlong)(int)param_2 * 0x98) == '\x01') {
    *(undefined1 *)((longlong)_Dst + 0x90) = 0;
  }
  *(undefined4 *)((longlong)_Dst + 0x60) = 0;
  if (*(longlong *)((longlong)_Dst + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e((longlong)_Dst + 0x18);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x98),(longlong)(int)(~param_2 + iVar1) * 0x98);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 140539ef6 FUN_140539ef6 body=156 status=ok
// SIG undefined FUN_140539ef6(void)

void FUN_140539ef6(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x98)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x98,8);
      uVar3 = uVar3 / 0x98;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x98,8);
    }
  }
  return;
}



// FUNCTION 140539f92 FUN_140539f92 body=73 status=ok
// SIG undefined FUN_140539f92(void)

undefined8 FUN_140539f92(longlong param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    if (((*(int *)(param_1 + 0x38) == -1) ||
        (*(char *)(*(longlong *)(param_1 + 0x28) + 0x16c0) != '\0')) &&
       ((*(byte *)(param_1 + 0x31) & 0x10) != 0)) {
      *(byte *)(param_3 + 0xf4) = *(byte *)(param_3 + 0xf4) | 0x10;
    }
    *(byte *)(param_3 + 0xf4) = *(byte *)(param_3 + 0xf4) & 0xfd;
  }
  FUN_1408f10c6(param_1,param_2);
  return param_2;
}



// FUNCTION 140539fdc FUN_140539fdc body=2377 status=ok
// SIG undefined FUN_140539fdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140539fdc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  double dVar14;
  uint *puVar15;
  double *pdVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  size_t _Size;
  ulonglong uVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  undefined4 uVar39;
  double _X;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined1 local_160;
  longlong *local_158;
  longlong local_150;
  double local_148;
  longlong *plStack_140;
  undefined1 local_138 [16];
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar24 = *param_2;
  if ((lVar24 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar24);
  }
  if ((~DAT_14c950c29 & 1) == 0 && lVar24 != 0) {
    FUN_1456cec3c(lVar24);
LAB_14053a089:
    uVar10 = FUN_1407ca880();
    FUN_144718840(lVar24,uVar10);
  }
  else if (lVar24 != 0) goto LAB_14053a089;
  lVar24 = *param_2;
  lVar23 = lVar24;
  if ((lVar24 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar24);
    lVar23 = *param_2;
  }
  uVar10 = FUN_1407ca880();
  plVar11 = (longlong *)FUN_144718840(lVar23,uVar10);
  plVar12 = (longlong *)0x0;
  if (lVar24 != 0) {
    plVar12 = plVar11;
  }
  plVar12 = (longlong *)(**(code **)(*plVar12 + 0x50))(plVar12);
  lVar24 = *plVar12;
  if (lVar24 == 0) goto LAB_14053a62f;
  iVar8 = (int)param_2[2];
  if (iVar8 == 3) {
    if ((int)(uint)*(byte *)((longlong)param_2 + 0x14) < (int)plVar12[0x13]) {
      cVar7 = *(char *)(plVar12[0x12] + (ulonglong)*(byte *)((longlong)param_2 + 0x14));
    }
    else {
      cVar7 = '\0';
    }
    if ((longlong)(int)plVar12[9] != 0) {
      plVar11 = (longlong *)plVar12[8];
      lVar23 = (longlong)(int)plVar12[9] << 4;
      do {
        if ((*plVar11 != 0) && (*(char *)(*plVar11 + 0x40) == cVar7)) {
          if (plVar11 != (longlong *)0x0) {
            iVar8 = (int)param_2[8];
            if (iVar8 == 0) {
              uVar27 = 1;
              uVar26 = 0;
              iVar9 = 0;
              iVar25 = 0;
              goto LAB_14053a35c;
            }
            puVar15 = (uint *)param_2[7];
            if ((uint *)param_2[7] == (uint *)0x0) {
              puVar15 = (uint *)(param_2 + 5);
            }
            uVar17 = *puVar15;
            if (uVar17 != 0) {
              uVar26 = 0;
              iVar25 = 0;
              goto LAB_14053a335;
            }
            iVar9 = iVar8 + 0x1e;
            if (-1 < iVar8 + -1) {
              iVar9 = iVar8 + -1;
            }
            uVar26 = 0;
            uVar27 = (ulonglong)(uint)(iVar9 >> 5);
            if (iVar9 >> 5 < 1) {
              uVar27 = uVar26;
            }
            iVar25 = 0;
            goto LAB_14053a31c;
          }
          break;
        }
        plVar11 = plVar11 + 2;
        lVar23 = lVar23 + -0x10;
      } while (lVar23 != 0);
    }
  }
  else if (iVar8 == 0) {
    if ((int)(uint)*(byte *)((longlong)param_2 + 0x14) < (int)plVar12[0x13]) {
      cVar7 = *(char *)(plVar12[0x12] + (ulonglong)*(byte *)((longlong)param_2 + 0x14));
    }
    else {
      cVar7 = '\0';
    }
    if ((longlong)(int)plVar12[9] != 0) {
      lVar23 = 0;
      do {
        if ((*(longlong *)(plVar12[8] + lVar23) != 0) &&
           (*(char *)(*(longlong *)(plVar12[8] + lVar23) + 0x40) == cVar7)) goto LAB_14053a553;
        lVar23 = lVar23 + 0x10;
      } while ((longlong)(int)plVar12[9] * 0x10 != lVar23);
    }
    lVar23 = *param_2;
    if (lVar23 == 0) {
LAB_14053a480:
      lVar23 = 0;
    }
    else if ((char)param_2[0x12] == '\x01') {
      lVar13 = FUN_14070cc62();
      lVar23 = *param_2;
      if (lVar23 == 0) goto LAB_14053a480;
      if (((lVar13 != 0) && (lVar18 = *(longlong *)(lVar23 + 0x10), lVar18 != 0)) &&
         (*(int *)(lVar13 + 0x38) <= *(int *)(lVar18 + 0x38))) {
        dVar14 = (double)(lVar13 + 0x30);
        lVar18 = *(longlong *)(lVar18 + 0x30);
        if ((*(double *)(lVar18 + (longlong)*(int *)(lVar13 + 0x38) * 8) == dVar14) &&
           (lVar13 = *(longlong *)(lVar23 + 0x858), lVar13 != 0)) {
          lVar23 = *(longlong *)(lVar23 + 0x1c8);
          if (lVar23 == 0) {
            uVar38 = SUB84(DAT_14c8464f8,0);
            uVar39 = (undefined4)((ulonglong)DAT_14c8464f8 >> 0x20);
            dVar14 = DAT_14c846508;
          }
          else {
            dVar32 = *(double *)(lVar23 + 0x240);
            plVar11 = *(longlong **)(lVar23 + 0x248);
            dVar31 = *(double *)*(undefined1 (*) [16])(lVar23 + 0x250);
            dVar28 = *(double *)(lVar23 + 600);
            local_138 = *(undefined1 (*) [16])(lVar23 + 0x250);
            pdVar16 = *(double **)(lVar23 + 0x228);
            local_148 = dVar32;
            plStack_140 = plVar11;
            if (pdVar16 == (double *)0x0) {
              lVar18 = 0x40;
              pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
              dVar14 = DAT_14c8463d8;
              *pdVar16 = DAT_14c8463d0;
              pdVar16[1] = dVar14;
              dVar14 = DAT_14c8463e8;
              pdVar16[2] = DAT_14c8463e0;
              pdVar16[3] = dVar14;
              dVar14 = DAT_14c846500;
              pdVar16[4] = DAT_14c8464f8;
              pdVar16[5] = dVar14;
              dVar14 = DAT_14c846508;
              pdVar16[6] = DAT_14c846508;
              *(double **)(lVar23 + 0x228) = pdVar16;
            }
            auVar37._8_8_ = -(ulonglong)(dVar28 != pdVar16[3]);
            auVar37._0_8_ = -(ulonglong)(dVar31 != pdVar16[2]);
            auVar36._8_4_ = (int)-(ulonglong)((double)plVar11 != pdVar16[1]);
            auVar36._0_8_ = -(ulonglong)(dVar32 != *pdVar16);
            auVar36._12_4_ = (int)(-(ulonglong)((double)plVar11 != pdVar16[1]) >> 0x20);
            iVar8 = movmskpd(SUB84(dVar14,0),auVar36);
            uVar17 = movmskpd((int)lVar18,auVar37);
            if ((uVar17 & 0x3fffffff) != 0 || iVar8 != 0) {
              *(undefined4 *)(pdVar16 + 2) = local_138._0_4_;
              *(undefined4 *)((longlong)pdVar16 + 0x14) = local_138._4_4_;
              *(undefined4 *)(pdVar16 + 3) = local_138._8_4_;
              *(undefined4 *)((longlong)pdVar16 + 0x1c) = local_138._12_4_;
              *pdVar16 = local_148;
              pdVar16[1] = (double)plStack_140;
              FUN_1448052ee(&local_148,&local_e8);
              pdVar16[6] = local_d8;
              pdVar16[4] = local_e8;
              pdVar16[5] = dStack_e0;
            }
            uVar38 = SUB84(pdVar16[4],0);
            uVar39 = (undefined4)((ulonglong)pdVar16[4] >> 0x20);
            dVar14 = pdVar16[6];
          }
          dVar32 = (double)*(float *)(param_2 + 0x11);
          auVar35._4_4_ = uVar39;
          auVar35._0_4_ = uVar38;
          auVar35._8_4_ = SUB84(dVar32,0);
          auVar35._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
          auVar36 = divpd(auVar35,_DAT_1499387d0);
          auVar34._0_8_ = dVar14 / 360.0;
          auVar34._8_8_ = 0;
          auVar37 = roundpd(auVar36,auVar36,3);
          auVar36 = roundpd(auVar34,auVar34,3);
          dVar31 = ((double)CONCAT44(uVar39,uVar38) - auVar37._0_8_ * (double)DAT_1499387d0) *
                   0.008726646259971648;
          dVar32 = (dVar32 - auVar37._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
          dVar14 = (dVar14 - auVar36._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
          _X = (0.0 - auVar36._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
          dVar28 = sin(dVar31);
          dVar29 = sin(dVar32);
          dVar30 = sin(dVar14);
          sin(_X);
          dVar31 = cos(dVar31);
          dVar32 = cos(dVar32);
          dVar33 = cos(dVar14);
          cos(_X);
          dVar14 = dVar29 * dVar28 * dVar30 + dVar32 * dVar31 * dVar33;
          local_148 = dVar28 * dVar29 * dVar33 - dVar31 * dVar32 * dVar30;
          plStack_140 = (longlong *)(-(dVar28 * dVar32 * dVar33) - dVar31 * dVar29 * dVar30);
          local_138._8_4_ = SUB84(dVar14,0);
          local_138._0_8_ = -(dVar32 * dVar28 * dVar30) + dVar29 * dVar31 * dVar33;
          local_138._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
          local_128 = param_2[0xe];
          lStack_120 = param_2[0xf];
          local_118 = param_2[0x10];
          uStack_110 = 0;
          local_108 = 0x3ff0000000000000;
          uStack_100 = 0x3ff0000000000000;
          local_f8 = 0x3ff0000000000000;
          uStack_f0 = 0;
          FUN_140ce4034(lVar13);
          *(byte *)(lVar13 + 0x5b4) = *(byte *)(lVar13 + 0x5b4) | 0x20;
          lVar23 = *param_2;
        }
      }
    }
    cVar7 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x3c0))();
    uVar10 = 1;
    if (cVar7 != '\0') {
      FUN_140885768(param_1,lVar23);
      uVar10 = 3;
    }
    local_160 = 0;
    local_168 = param_2 + 3;
    FUN_14096dfee(plVar12,&local_148,param_2[1],uVar10);
    plVar11 = plStack_140;
    if (local_148 == 0.0) {
      uVar26 = 0;
    }
    else {
      uVar26 = CONCAT71((int7)((ulonglong)lVar23 >> 8),*(undefined1 *)((longlong)local_148 + 0x40));
    }
    if (plStack_140 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_140 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_140)(plStack_140);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    bVar4 = *(byte *)((longlong)param_2 + 0x14);
    plVar11 = plVar12 + 0x12;
    iVar8 = (int)plVar12[0x13];
    if (iVar8 <= (int)(uint)bVar4) {
      local_158 = (longlong *)CONCAT44(local_158._4_4_,(int)uVar26);
      lVar23 = (ulonglong)bVar4 + 1;
      *(int *)(plVar12 + 0x13) = (int)lVar23;
      _Size = lVar23 - iVar8;
      if ((uint)(*(int *)((longlong)plVar12 + 0x9c) - iVar8) < (uint)_Size) {
        FUN_1447403be(plVar11);
      }
      memset((void *)((longlong)iVar8 + *plVar11),0,_Size);
      uVar26 = (ulonglong)local_158 & 0xffffffff;
    }
    *(char *)(*plVar11 + (ulonglong)bVar4) = (char)uVar26;
  }
  else {
    if ((int)(uint)*(byte *)((longlong)param_2 + 0x14) < (int)plVar12[0x13]) {
      uVar19 = *(undefined1 *)(plVar12[0x12] + (ulonglong)*(byte *)((longlong)param_2 + 0x14));
    }
    else {
      uVar19 = 0;
    }
    FUN_140c4a7e8(plVar12,uVar19,iVar8 != 1);
  }
  goto LAB_14053a553;
  while( true ) {
    iVar25 = iVar25 + 0x20;
    uVar17 = puVar15[uVar26 + 1];
    uVar26 = uVar26 + 1;
    if (uVar17 != 0) break;
LAB_14053a31c:
    if (uVar27 == uVar26) goto LAB_14053a553;
  }
LAB_14053a335:
  uVar27 = (ulonglong)(-uVar17 & uVar17);
  uVar3 = uVar27 * 2 + 1;
  lVar23 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
    }
  }
  iVar9 = (iVar25 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
  if (iVar8 <= iVar9) {
    iVar9 = iVar8;
  }
LAB_14053a35c:
  if (iVar9 != iVar8) {
    uVar17 = 0xffffffff;
    local_158 = plVar11;
    local_150 = lVar24;
    do {
      FUN_1408834b4(*local_158,param_2[3] + (longlong)iVar9 * 0x38,
                    param_2[3] + (longlong)iVar9 * 0x38 + 8);
      uVar17 = ~(uint)uVar27 & uVar17;
      puVar15 = (uint *)param_2[7];
      if ((uint *)param_2[7] == (uint *)0x0) {
        puVar15 = (uint *)(param_2 + 5);
      }
      iVar5 = (int)param_2[8];
      iVar9 = (int)uVar26;
      lVar24 = (longlong)iVar9;
      uVar22 = puVar15[lVar24] & uVar17;
      if (uVar22 == 0) {
        iVar20 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar20 = iVar5 + -1;
        }
        iVar20 = iVar20 >> 5;
        iVar25 = iVar25 + 0x20;
        iVar21 = iVar20;
        if (iVar20 < iVar9) {
          iVar21 = iVar9;
        }
        if (iVar9 < iVar20) {
          lVar23 = 0;
          do {
            uVar22 = puVar15[lVar24 + lVar23 + 1];
            if (uVar22 != 0) {
              uVar26 = (ulonglong)(iVar9 + (int)lVar23 + 1);
              uVar17 = 0xffffffff;
              goto LAB_14053a416;
            }
            iVar25 = iVar25 + 0x20;
            lVar23 = lVar23 + 1;
          } while (iVar21 - lVar24 != lVar23);
          uVar17 = 0xffffffff;
          iVar9 = iVar21;
        }
        uVar26 = (ulonglong)(iVar9 + 1);
        iVar9 = iVar5;
      }
      else {
LAB_14053a416:
        uVar27 = (ulonglong)(-uVar22 & uVar22);
        uVar3 = uVar27 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        iVar9 = (iVar25 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar9) {
          iVar9 = iVar5;
        }
      }
      lVar24 = local_150;
    } while (iVar9 != iVar8);
  }
LAB_14053a553:
  iVar8 = *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = iVar8 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar8 + 1U) {
    FUN_14088594e((longlong *)(param_1 + 0x68),iVar8);
  }
  lVar13 = *(longlong *)(param_1 + 0x68);
  lVar23 = lVar13 + (longlong)iVar8 * 0x98;
  lVar18 = *param_2;
  *(longlong *)(lVar13 + (longlong)iVar8 * 0x98) = lVar18;
  if ((lVar18 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar4 = DAT_14c950c29;
  lVar13 = param_2[1];
  *(longlong *)(lVar23 + 8) = lVar13;
  if ((lVar13 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
  }
  *(undefined2 *)(lVar23 + 0x14) = *(undefined2 *)((longlong)param_2 + 0x14);
  *(int *)(lVar23 + 0x10) = (int)param_2[2];
  *(undefined8 *)(lVar23 + 0x38) = 0;
  *(undefined4 *)(lVar23 + 0x40) = 0;
  *(undefined8 *)(lVar23 + 0x18) = 0;
  *(undefined8 *)(lVar23 + 0x20) = 0;
  *(undefined8 *)(lVar23 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)(lVar23 + 0x4c) = 0;
  *(undefined8 *)(lVar23 + 0x58) = 0;
  *(undefined4 *)(lVar23 + 0x60) = 0;
  FUN_140725242(lVar23 + 0x18,param_2 + 3);
  *(longlong *)(lVar23 + 0x68) = param_2[0xd];
  lVar13 = param_2[0x12];
  *(char *)(lVar23 + 0x90) = (char)lVar13;
  if ((char)lVar13 == '\x01') {
    lVar13 = param_2[0xe];
    lVar18 = param_2[0xf];
    lVar6 = param_2[0x11];
    *(longlong *)(lVar23 + 0x80) = param_2[0x10];
    *(longlong *)(lVar23 + 0x88) = lVar6;
    *(longlong *)(lVar23 + 0x70) = lVar13;
    *(longlong *)(lVar23 + 0x78) = lVar18;
  }
  *(undefined1 *)(lVar23 + 0x68) = 1;
LAB_14053a62f:
  if ((local_d0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar24 != 0;
}



// FUNCTION 14053a926 FUN_14053a926 body=991 status=ok
// SIG undefined FUN_14053a926(void)

void FUN_14053a926(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  longlong local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_2 + 0x178))(param_2,param_1 + 0xd,1);
  (**(code **)(*param_2 + 0x178))(param_2,param_1 + 2,2);
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)((longlong)param_1 + 0x14),1);
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x14) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  local_48 = 0;
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    local_48 = *param_1;
  }
  if (DAT_14cac9ca8 == 0) {
    local_60 = &local_40;
    local_40 = FUN_141030f22;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_1478c0a72;
    local_70 = &LAB_1417b2375;
    local_78 = L"Engine";
    local_80 = 0x1000000000;
    local_88 = 0x10000004;
    local_90 = 8;
    local_98 = CONCAT44(local_98._4_4_,0x390);
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
  }
  local_98 = 0;
  (**(code **)(*param_3 + 0x2a8))(param_3,param_2,DAT_14cac9ca8,&local_48);
  lVar2 = local_48;
  if ((local_48 != 0 & *(byte *)(param_2 + 5)) == 1) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(local_48);
    }
    *param_1 = lVar2;
  }
  iVar4 = (int)param_1[2];
  if (iVar4 == 0 && (char)param_1[0xd] == '\0') {
    local_40 = (code *)0x0;
    if ((*(byte *)(param_2 + 5) & 4) != 0) {
      local_40 = (code *)param_1[1];
    }
    uVar6 = FUN_14053ad22();
    local_98 = 0;
    (**(code **)(*param_3 + 0x2a8))(param_3,param_2,uVar6,&local_40);
    pcVar3 = local_40;
    if ((local_40 != (code *)0x0 & *(byte *)(param_2 + 5)) == 1) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(local_40);
      }
      param_1[1] = (longlong)pcVar3;
    }
    (**(code **)(*param_2 + 0x178))(param_2,(longlong)param_1 + 0x15,2);
    FUN_14053ae08(param_2,param_1 + 3);
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      local_48 = CONCAT71(local_48._1_7_,(char)param_1[0x12]);
      (**(code **)(*param_2 + 0x178))(param_2,&local_48,1);
      if ((char)local_48 != '\x01') goto LAB_14053aa1c;
    }
    else {
      (**(code **)(*param_2 + 0x178))(param_2,&local_48,1);
      if ((char)local_48 == '\0') {
        if ((char)param_1[0x12] != '\0') {
          *(undefined1 *)(param_1 + 0x12) = 0;
        }
        goto LAB_14053aa1c;
      }
      if ((char)param_1[0x12] == '\0') {
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *(undefined1 *)(param_1 + 0x12) = 1;
      }
    }
    FUN_1402301a5(param_1 + 0xe,param_2);
    if ((*(byte *)(param_2 + 5) & 4) == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        (**(code **)(*param_2 + 0x180))(param_2,&local_40,0x2000);
        *(float *)(param_1 + 0x11) = (float)((int)local_40 + -0x1000) * 0.09090909;
      }
    }
    else {
      iVar4 = (int)ROUND(*(float *)(param_1 + 0x11) * 11.0 + *(float *)(param_1 + 0x11) * 11.0 + 0.5
                        ) >> 1;
      uVar7 = 0x1fff;
      if (iVar4 < -0xfff) {
        uVar7 = 0;
      }
      uVar5 = iVar4 + 0x1000;
      if (uVar5 < 0x2000) {
        uVar7 = uVar5;
      }
      local_40 = (code *)CONCAT44(local_40._4_4_,uVar7);
      (**(code **)(*param_2 + 0x180))(param_2,&local_40,0x2000);
    }
  }
  else if (iVar4 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
  }
LAB_14053aa1c:
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14053ad22 FUN_14053ad22 body=228 status=ok
// SIG undefined FUN_14053ad22(void)

longlong FUN_14053ad22(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb67c30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_14873f961;
    local_40 = &LAB_146518e03;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxTrick",&DAT_14cb67c30,&DAT_14873f960);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb67c30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14053ae08 FUN_14053ae08 body=973 status=ok
// SIG undefined FUN_14053ae08(void)

longlong * FUN_14053ae08(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_88 [36];
  int local_64;
  int local_60 [2];
  undefined8 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x38,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x38);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_60[0] = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,local_60,4);
      }
      else {
        thunk_FUN_14572512c(param_1,local_60);
      }
    }
    else {
      local_60[0] = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    iVar10 = (int)param_2[5];
    if (iVar10 == 0) {
      uVar14 = 0;
      uVar16 = 1;
      iVar5 = 0;
      iVar13 = 0;
    }
    else {
      puVar9 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar9 = (uint *)(param_2 + 2);
      }
      uVar15 = *puVar9;
      if (uVar15 == 0) {
        iVar13 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar13 = iVar10 + -1;
        }
        uVar14 = 0;
        uVar16 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar16 = uVar14;
        }
        iVar13 = 0;
        do {
          if (uVar16 == uVar14) goto LAB_14053b0c7;
          iVar13 = iVar13 + 0x20;
          uVar15 = puVar9[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar14 = 0;
        iVar13 = 0;
      }
      uVar16 = (ulonglong)(-uVar15 & uVar15);
      uVar2 = uVar16 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar5 = (iVar13 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar10 <= iVar5) {
        iVar5 = iVar10;
      }
    }
    if (iVar5 < iVar10) {
      uVar15 = 0xffffffff;
      do {
        lVar12 = *param_2;
        local_64 = iVar13;
        (**(code **)(*param_1 + 0x160))(param_1,(longlong)iVar5 * 0x38 + lVar12);
        FUN_1403f5866((longlong)iVar5 * 0x38 + lVar12 + 8,param_1);
        uVar15 = ~(uint)uVar16 & uVar15;
        puVar9 = (uint *)param_2[4];
        if ((uint *)param_2[4] == (uint *)0x0) {
          puVar9 = (uint *)(param_2 + 2);
        }
        iVar10 = (int)param_2[5];
        iVar5 = (int)uVar14;
        lVar12 = (longlong)iVar5;
        uVar6 = puVar9[lVar12] & uVar15;
        iVar13 = local_64;
        if (uVar6 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar8 = iVar7;
          if (iVar7 < iVar5) {
            iVar8 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar11 = 0;
          while( true ) {
            iVar13 = iVar13 + 0x20;
            uVar6 = puVar9[lVar12 + lVar11 + 1];
            if (uVar6 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar8 - lVar12 == lVar11) goto LAB_14053b0c7;
          }
          uVar14 = (ulonglong)(iVar5 + (int)lVar11 + 1);
          uVar15 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar6 & uVar6);
        uVar2 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = (iVar13 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar10);
    }
  }
  else {
    local_4c = 0;
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_4c,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_4c);
      }
    }
    else {
      local_4c = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    FUN_140333f86(param_2,local_4c);
    if (0 < local_4c) {
      iVar10 = 0;
      do {
        FUN_14040cfbc(param_2,local_60);
        puVar4 = local_58;
        *local_58 = 0;
        *(undefined2 *)(local_58 + 4) = 0;
        *(undefined1 *)(local_58 + 5) = 0;
        *(undefined4 *)(local_58 + 6) = 0xffffffff;
        (**(code **)(*param_1 + 0x160))(param_1,local_58);
        FUN_1403f5866(puVar4 + 1,param_1);
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_4c);
    }
  }
LAB_14053b0c7:
  if (((*(byte *)(param_1 + 5) & 1) != 0) ||
     (((*(byte *)(param_1 + 5) & 4) == 0 && ((*(byte *)((longlong)param_1 + 0x2b) & 4) != 0)))) {
    if (param_2[8] != 0) {
      FUN_1446efa72(param_2 + 8,0,0,4);
    }
    *(undefined4 *)(param_2 + 9) = 0;
    uVar15 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    iVar10 = 1;
    if (3 < uVar15) {
      uVar14 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar12 & 0x1f);
    }
    if ((0 < (int)uVar15) && (0 < iVar10)) {
      *(int *)(param_2 + 9) = iVar10;
      FUN_140882160(param_2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14053b1d6 FUN_14053b1d6 body=662 status=ok
// SIG undefined FUN_14053b1d6(void)

void FUN_14053b1d6(void *param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [152];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 != 0) {
    iVar6 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar5 = iVar6;
joined_r0x00014053b227:
    do {
      iVar4 = iVar6 * 2 + 1;
      if (iVar4 < (int)param_2) {
        iVar3 = iVar6 * 2 + 2;
        if ((iVar3 < (int)param_2) &&
           (fVar2 = *(float *)((longlong)param_1 + (longlong)iVar4 * 0x98 + 0x6c),
           pfVar1 = (float *)((longlong)param_1 + (longlong)iVar3 * 0x98 + 0x6c),
           fVar2 < *pfVar1 || fVar2 == *pfVar1)) {
          iVar4 = iVar3;
        }
        fVar2 = *(float *)((longlong)param_1 + (longlong)iVar4 * 0x98 + 0x6c);
        pfVar1 = (float *)((longlong)param_1 + (longlong)iVar6 * 0x98 + 0x6c);
        if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
          pvVar8 = (void *)((longlong)iVar6 * 0x98 + (longlong)param_1);
          pvVar7 = (void *)((longlong)iVar4 * 0x98 + (longlong)param_1);
          memcpy(local_d8,pvVar8,0x98);
          memcpy(pvVar8,pvVar7,0x98);
          memcpy(pvVar7,local_d8,0x98);
          iVar6 = iVar4;
          goto joined_r0x00014053b227;
        }
      }
      bVar10 = iVar5 != 0;
      iVar6 = iVar5 + -1;
      iVar5 = iVar6;
    } while (bVar10);
    if (1 < (int)param_2) {
      pvVar7 = (void *)(((ulonglong)param_2 - 1) * 0x98 + (longlong)param_1);
      memcpy(local_d8,param_1,0x98);
      memcpy(param_1,pvVar7,0x98);
      memcpy(pvVar7,local_d8,0x98);
      if (param_2 != 2) {
        uVar9 = (ulonglong)param_2 - 1;
        do {
          iVar6 = 0;
          iVar4 = 1;
          iVar5 = 0;
          do {
            iVar6 = iVar6 + 2;
            iVar3 = iVar4;
            if (((longlong)iVar6 < (longlong)uVar9) &&
               (fVar2 = *(float *)((longlong)param_1 + (longlong)iVar4 * 0x98 + 0x6c),
               pfVar1 = (float *)((longlong)param_1 + (longlong)iVar6 * 0x98 + 0x6c),
               fVar2 < *pfVar1 || fVar2 == *pfVar1)) {
              iVar3 = iVar6;
            }
            fVar2 = *(float *)((longlong)param_1 + (longlong)iVar3 * 0x98 + 0x6c);
            pfVar1 = (float *)((longlong)param_1 + (longlong)iVar5 * 0x98 + 0x6c);
            if (fVar2 < *pfVar1 || fVar2 == *pfVar1) break;
            pvVar8 = (void *)((longlong)iVar5 * 0x98 + (longlong)param_1);
            pvVar7 = (void *)((longlong)iVar3 * 0x98 + (longlong)param_1);
            memcpy(local_d8,pvVar8,0x98);
            memcpy(pvVar8,pvVar7,0x98);
            memcpy(pvVar7,local_d8,0x98);
            iVar6 = iVar3 * 2;
            iVar4 = iVar3 * 2 + 1;
            iVar5 = iVar3;
          } while ((longlong)iVar4 < (longlong)uVar9);
          pvVar7 = (void *)((uVar9 - 1) * 0x98 + (longlong)param_1);
          memcpy(local_d8,param_1,0x98);
          memcpy(param_1,pvVar7,0x98);
          memcpy(pvVar7,local_d8,0x98);
          bVar10 = 2 < uVar9;
          uVar9 = uVar9 - 1;
        } while (bVar10);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14053b46e FUN_14053b46e body=313 status=ok
// SIG undefined FUN_14053b46e(void)

void FUN_14053b46e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x3c0))();
  if ((cVar3 != '\0') && (*(longlong **)(param_1 + 0x28) != (longlong *)0x0)) {
    local_50 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))();
    FUN_145720508(local_88);
    lVar2 = local_60;
    local_90 = local_78;
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
    plVar6 = local_80;
LAB_14053b4f7:
    if (plVar6 != local_68) {
      lVar5 = (longlong)*(int *)(plVar6[2] + 0x48);
      if (lVar5 != 0) {
        lVar1 = *(longlong *)(plVar6[2] + 0x40);
        lVar4 = 0;
        do {
          local_50 = 0;
          FUN_140881600(param_1,*(undefined8 *)(lVar1 + lVar4),0,&local_50);
          lVar4 = lVar4 + 0x10;
        } while (lVar5 * 0x10 != lVar4);
      }
      do {
        plVar6 = (longlong *)*plVar6;
        if (plVar6 == (longlong *)0x0) break;
        if (*(longlong *)plVar6[2] == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = FUN_1447210f0();
        }
      } while (lVar5 != *local_70);
      goto LAB_14053b4f7;
    }
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + -1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14053b5c6 caseD_0 body=55 status=ok
// SIG undefined caseD_0(void)

void switchD_1458da17c::caseD_0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x00014053b5f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14053b60a FUN_14053b60a body=354 status=ok
// SIG undefined FUN_14053b60a(void)

void FUN_14053b60a(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14053b64d;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar4 = (uint *)*puVar1;
LAB_14053b64d:
    puVar3 = (undefined8 *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar5 = puVar4[0x12];
    if (puVar3 + 0x10 <= puVar4 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
      LOCK();
      uVar2 = *puVar4;
      *puVar4 = *puVar4 + uVar5 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar5) != 0xffffffff) break;
      puVar4 = (uint *)*puVar1;
      *puVar4 = 0xffffffff;
      *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      puVar3 = (undefined8 *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
      uVar5 = 0;
      if (puVar3 + 0x10 <= puVar4 + 0x4000) {
        uVar5 = 1;
        goto LAB_14053b6c9;
      }
    }
  }
  uVar5 = uVar5 + 1;
LAB_14053b6c9:
  *(undefined8 **)(puVar4 + 0x10) = puVar3 + 0x11;
  puVar4[0x12] = uVar5;
  *(int *)(puVar3 + -1) = ((int)puVar3 + -8) - (int)puVar4;
  *(undefined4 *)((longlong)puVar3 + -4) = 0x80;
  *(undefined4 *)(puVar3 + 1) = (&DAT_14ca11fb0)[(ulonglong)(2 < param_1) * 0x3a];
  *(undefined2 *)(puVar3 + 2) = 0x2424;
  puVar3[3] = param_2;
  *(int *)(puVar3 + 4) = param_1;
  puVar3[5] = param_3;
  puVar3[6] = param_4;
  *(undefined1 *)(puVar3 + 7) = 0x3a;
  *puVar3 = &PTR_FUN_14a338bc0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[8] = DAT_14c9c4540;
  *(undefined4 *)(puVar3 + 10) = 2;
  puVar3[9] = DAT_14c9c0ea0;
  *(undefined4 *)(puVar3 + 0xf) = 0;
  return;
}



// FUNCTION 14053b76c FUN_14053b76c body=57 status=ok
// SIG undefined FUN_14053b76c(void)

void FUN_14053b76c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba03e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba03e0 = FUN_140002ddd(FUN_1465a97be,uVar1,L"DLCDef");
  }
  return;
}



// FUNCTION 14053b7a6 FUN_14053b7a6 body=146 status=ok
// SIG undefined FUN_14053b7a6(void)

void FUN_14053b7a6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  code *local_40;
  longlong *local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_1470a32b6(param_2,0);
  }
  local_38 = &local_48;
  local_30 = &local_40;
  local_40 = FUN_142b2895e;
  local_20 = &local_30;
  local_28 = FUN_14053bbf2;
  local_48 = param_2;
  FUN_14053b83a(param_1,&local_28,1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14053b83a FUN_14053b83a body=892 status=ok
// SIG undefined FUN_14053b83a(void)

void FUN_14053b83a(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStack_c8 [39];
  char local_a1;
  undefined8 *local_a0;
  uint *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a1 = param_3;
  local_a0 = param_2;
  cVar7 = (**(code **)(*param_1 + 0x300))();
  if (cVar7 == '\0') {
    local_98 = (uint *)(param_1 + 0x51);
    iVar17 = (int)param_1[0x54];
    if (iVar17 == 0) {
      uVar18 = 1;
      uVar15 = 0;
      iVar8 = 0;
      iVar16 = 0;
    }
    else {
      puVar9 = (uint *)param_1[0x53];
      if ((uint *)param_1[0x53] == (uint *)0x0) {
        puVar9 = local_98;
      }
      uVar19 = *puVar9;
      if (uVar19 == 0) {
        iVar8 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar8 = iVar17 + -1;
        }
        uVar15 = 0;
        uVar18 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar18 = uVar15;
        }
        iVar16 = 0;
        do {
          if (uVar18 == uVar15) goto LAB_14053ba35;
          iVar16 = iVar16 + 0x20;
          uVar19 = puVar9[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar19 == 0);
      }
      else {
        uVar15 = 0;
        iVar16 = 0;
      }
      uVar18 = (ulonglong)(-uVar19 & uVar19);
      uVar2 = uVar18 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = (iVar16 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      if (iVar17 <= iVar8) {
        iVar8 = iVar17;
      }
    }
    if (iVar8 != iVar17) {
      uVar19 = 0xffffffff;
      do {
        lVar10 = param_1[0x4f];
        lVar11 = *(longlong *)(lVar10 + 0x10 + (longlong)iVar8 * 0x20);
        if (lVar11 != 0) {
          if (local_a1 != '\0') {
            FUN_144837e54(lVar11,0);
            lVar11 = *(longlong *)(lVar10 + (longlong)iVar8 * 0x20 + 0x10);
          }
          if (((*(byte **)(lVar11 + 0x48) != (byte *)0x0) &&
              ((**(byte **)(lVar11 + 0x48) & 0x6b) == 3)) &&
             (plVar4 = *(longlong **)(lVar11 + 0x30), plVar4 != (longlong *)0x0)) {
            lVar10 = (**(code **)(*plVar4 + 8))(plVar4);
            lVar11 = FUN_14053bbb8();
            if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
                == lVar11 + 0x30)) {
              (*(code *)*local_a0)(local_a0[1],plVar4);
            }
          }
        }
        uVar19 = uVar19 & ~(uint)uVar18;
        puVar9 = (uint *)param_1[0x53];
        if ((uint *)param_1[0x53] == (uint *)0x0) {
          puVar9 = local_98;
        }
        iVar3 = (int)param_1[0x54];
        iVar8 = (int)uVar15;
        lVar10 = (longlong)iVar8;
        uVar14 = puVar9[lVar10] & uVar19;
        if (uVar14 == 0) {
          iVar12 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar12 = iVar3 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar13 = iVar12;
          if (iVar12 < iVar8) {
            iVar13 = iVar8;
          }
          if (iVar8 < iVar12) {
            lVar11 = 0;
            do {
              uVar14 = puVar9[lVar10 + lVar11 + 1];
              if (uVar14 != 0) {
                uVar15 = (ulonglong)(iVar8 + (int)lVar11 + 1);
                uVar19 = 0xffffffff;
                goto LAB_14053ba07;
              }
              iVar16 = iVar16 + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar13 - lVar10 != lVar11);
            uVar19 = 0xffffffff;
            iVar8 = iVar13;
          }
          uVar15 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar3;
        }
        else {
LAB_14053ba07:
          uVar18 = (ulonglong)(-uVar14 & uVar14);
          uVar2 = uVar18 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iVar8 = (iVar16 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
      } while (iVar8 != iVar17);
    }
  }
  else {
    plVar4 = param_1 + 0x39;
    plVar1 = param_1 + 0x3b;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = plVar1;
    if ((int)param_1[0x3e] == 0) {
      iVar17 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar17 = (int)param_1[0x3e];
    }
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar6 = local_78;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar8 = local_78._4_4_;
    local_90 = plVar4;
    if ((local_78._4_4_ != iVar17) || (local_78 = local_58, uStack_60 != plVar1)) {
      do {
        local_78 = uVar6;
        plVar5 = *(longlong **)(*local_90 + 0x10 + (longlong)iVar8 * 0x20);
        if (plVar5 != (longlong *)0x0) {
          lVar10 = (**(code **)(*plVar5 + 8))(plVar5);
          lVar11 = FUN_14053bbb8();
          if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
              lVar11 + 0x30)) {
            (*(code *)*local_a0)(local_a0[1],plVar5);
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar6 = local_78;
      } while (local_90 != plVar4 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar1 || local_78._4_4_ != iVar17));
    }
  }
LAB_14053ba35:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14053bbb8 FUN_14053bbb8 body=57 status=ok
// SIG undefined FUN_14053bbb8(void)

void FUN_14053bbb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a0370 == 0) {
    uVar1 = FUN_140e3c68b();
    DAT_14c9a0370 = FUN_140002ddd(FUN_14173798b,uVar1,L"GbxDef");
  }
  return;
}



// FUNCTION 14053bbf2 FUN_14053bbf2 body=67 status=ok
// SIG undefined FUN_14053bbf2(void)

void FUN_14053bbf2(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14053bc36 FUN_14053bc36 body=26 status=ok
// SIG undefined FUN_14053bc36(void)

ulonglong FUN_14053bc36(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *(char *)(param_1 + 0x1640);
  if (cVar1 == '\x01') {
    uVar2 = FUN_14053bc50(param_1,*(undefined1 *)(param_1 + 0x1641));
    return uVar2;
  }
  if (cVar1 == '\x04') {
LAB_14053bc55:
    return (ulonglong)(uint)(*(float *)(param_1 + 0x177c) + *(float *)(param_1 + 0x1780));
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x16d2) == '\x04') goto LAB_14053bc55;
    if (*(char *)(param_1 + 0x16d2) != '\x02') {
      return (ulonglong)*(uint *)(param_1 + 0x16c8);
    }
  }
  else if (cVar1 != '\x02') {
    return 0;
  }
  return (ulonglong)(uint)(*(float *)(param_1 + 0x165c) + *(float *)(param_1 + 0x1660));
}



// FUNCTION 14053bc50 FUN_14053bc50 body=82 status=ok
// SIG undefined FUN_14053bc50(void)

float FUN_14053bc50(longlong param_1,char param_2)

{
  if (param_2 == '\x04') {
LAB_14053bc55:
    return *(float *)(param_1 + 0x177c) + *(float *)(param_1 + 0x1780);
  }
  if (param_2 == '\x03') {
    if (*(char *)(param_1 + 0x16d2) == '\x04') goto LAB_14053bc55;
    if (*(char *)(param_1 + 0x16d2) != '\x02') {
      return *(float *)(param_1 + 0x16c8);
    }
  }
  else if (param_2 != '\x02') {
    return 0.0;
  }
  return *(float *)(param_1 + 0x165c) + *(float *)(param_1 + 0x1660);
}



// FUNCTION 14053bca2 FUN_14053bca2 body=14 status=ok
// SIG undefined FUN_14053bca2(void)

void FUN_14053bca2(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_14053bcb0();
    return;
  }
  return;
}



// FUNCTION 14053bcb0 FUN_14053bcb0 body=450 status=ok
// SIG undefined FUN_14053bcb0(void)

void FUN_14053bcb0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14053bdcb:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_14053be08:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14053bd06;
LAB_14053bcfb:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14053bd06:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x00014053bd32;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14053bd88:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14053be08;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14053bdcb;
code_r0x00014053bd32:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14053bd88;
    }
  }
  goto LAB_14053bcfb;
}



// FUNCTION 14053be7c FUN_14053be7c body=392 status=ok
// SIG undefined FUN_14053be7c(void)

void FUN_14053be7c(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  longlong lVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  PSRWLOCK SRWLock;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  uint local_40;
  undefined4 local_3c;
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14031deac(local_38);
  if (*param_2 == '\x01') {
    iVar9 = *(int *)(param_2 + 0x30);
    bVar2 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar9);
    local_40 = (uint)bVar2;
    *(int *)(param_2 + 0x30) = iVar9 + 1;
    local_48 = (undefined4 *)
               ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar2 * 4 +
               *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar9 * 8));
  }
  else {
    puVar5 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar3 = *puVar5;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar5 + 1;
    uVar7 = uVar3 & 0x7fff;
    if (uVar7 == 0x7fff) {
      local_48 = &local_3c;
      local_40 = 0;
    }
    else {
      lVar6 = *(longlong *)(param_2 + 0x80);
      local_40 = 1;
      local_48 = (undefined4 *)
                 ((ulonglong)(uVar7 * *(int *)(lVar6 + 0x80)) + *(longlong *)(lVar6 + 0x70) +
                 (longlong)*(int *)(lVar6 + 0x4c) * 4);
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_30 == '\x01') {
      local_30 = local_30 + 0x10;
      goto LAB_14053bf28;
    }
  }
  local_30 = (char *)(lVar6 + 0x50);
LAB_14053bf28:
  piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar8 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar8) {
    uVar4 = *(undefined4 *)(local_30 + 8);
    iVar9 = 0;
    do {
      puVar1 = local_48 + (int)local_40;
      *local_48 = uVar4;
      iVar9 = iVar9 + 1;
      piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar8 = (int *)(param_2 + 0x3c);
      }
      local_48 = puVar1;
    } while (iVar9 < *piVar8);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14053c012 FUN_14053c012 body=300 status=ok
// SIG undefined FUN_14053c012(void)

void FUN_14053c012(longlong *param_1,undefined8 *param_2)

{
  uint *_Dst;
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  iVar7 = (int)param_1[1];
  if (0 < iVar7) {
    lVar9 = 0;
    bVar5 = false;
    do {
      while( true ) {
        lVar4 = *param_1;
        _Dst = (uint *)(lVar4 + lVar9 * 0x10);
        if (((((*(longlong *)(lVar4 + 8 + lVar9 * 0x10) != 0) && (_Dst[1] != 0)) &&
             (uVar1 = *_Dst, -1 < (int)uVar1)) &&
            (((int)uVar1 < DAT_14c9647dc &&
             (plVar8 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar8 != (longlong *)0x0)))) &&
           ((*(uint *)(plVar8 + 2) == _Dst[1] &&
            (((*(uint *)(plVar8 + 1) >> 0x1c & 1) == 0 && (*plVar8 != 0)))))) break;
        iVar6 = ~(uint)lVar9 + iVar7;
        if (iVar6 != 0) {
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove(_Dst,(void *)(lVar4 + (longlong)(iVar7 - iVar6) * 0x10),(longlong)iVar6 << 4);
          iVar7 = (int)param_1[1];
        }
        iVar7 = iVar7 + -1;
        *(int *)(param_1 + 1) = iVar7;
        bVar5 = true;
        if (iVar7 <= lVar9) goto LAB_14053c131;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar7);
    if (bVar5) {
LAB_14053c131:
      FUN_1400bbcfc(param_1);
      iVar7 = (int)param_1[1];
    }
  }
  *(uint *)(param_1 + 1) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
    FUN_140335274(param_1,iVar7);
  }
  lVar9 = *param_1;
  *(undefined8 *)(lVar9 + (longlong)iVar7 * 0x10) = uVar2;
  *(undefined8 *)(lVar9 + 8 + (longlong)iVar7 * 0x10) = uVar3;
  return;
}



// FUNCTION 14053c150 FUN_14053c150 body=2085 status=ok
// SIG undefined FUN_14053c150(void)

void FUN_14053c150(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 auStack_1b8 [40];
  undefined8 *local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  ulonglong local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined **local_140;
  undefined8 local_138;
  undefined4 local_130;
  void *local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined **local_108;
  undefined8 local_100;
  undefined4 local_f8;
  void *local_f0;
  ulonglong uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0 [6];
  undefined1 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_70;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (*(char *)(param_1 + 0x590) == '\0') {
    *(undefined1 *)(param_1 + 0x590) = 1;
    lVar15 = 0;
    do {
      *(undefined4 *)(param_1 + 0x20 + lVar15) = 0;
      *(undefined8 *)(param_1 + 0x24 + lVar15) = 0x44bb800043fa0000;
      *(undefined1 *)(param_1 + 0x2c + lVar15) = 0;
      if (*(longlong *)(param_1 + 0x30 + lVar15) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + lVar15 + 0x30) = 0;
      *(undefined8 *)(param_1 + lVar15 + 0x38) = 0;
      memset(&local_140,0,0xd8);
      local_188._0_5_ = 0x43fa0000;
      local_188._5_3_ = 0x44bb80;
      local_180 = 0;
      uStack_17c = 0;
      uStack_178 = (void *)0x0;
      local_170 = 0;
      uStack_168 = 0;
      local_160 = 0;
      uStack_158 = 0;
      local_150 = 0;
      uStack_148 = 0;
      FUN_1446f470e(local_68,L"FGbxTerritoryAreaDataCache::AABBTree",1);
      local_138 = 0;
      local_140 = &PTR_LAB_14a1e3c98;
      local_130 = 0xffffffff;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = (void *)0x0;
      uStack_120 = 0;
      FUN_1446f470e(local_68,L"FGbxTerritoryAreaDataCache::ExclusionAABBTree",1);
      local_100 = 0;
      local_108 = &PTR_LAB_14a1e3c98;
      local_f8 = 0xffffffff;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = (void *)0x0;
      uStack_e8 = 0;
      local_a0 = 0;
      local_88 = DAT_14c8464f0;
      local_98 = (undefined4)DAT_14c8464e0;
      uStack_94 = DAT_14c8464e0._4_4_;
      uStack_90 = (undefined4)DAT_14c8464e8;
      uStack_8c = DAT_14c8464e8._4_4_;
      local_80 = 0x7f7fffff00000000;
      local_70 = 0;
      puVar14 = (undefined8 *)(param_1 + 0x40 + lVar15);
      local_78 = 0;
      *puVar14 = CONCAT35(local_188._5_3_,(undefined5)local_188);
      if (puVar14 == &local_188) {
        *(undefined8 *)(param_1 + 0x90 + lVar15) = local_138;
        *(undefined4 *)(param_1 + 0x98 + lVar15) = local_130;
      }
      else {
        if (*(longlong *)(param_1 + 0x48 + lVar15) != 0) {
          FUN_1400020a8();
        }
        *(ulonglong *)(param_1 + 0x48 + lVar15) = CONCAT44(uStack_17c,local_180);
        local_180 = 0;
        uStack_17c = 0;
        *(undefined4 *)(param_1 + 0x50 + lVar15) = (undefined4)uStack_178;
        *(undefined4 *)(param_1 + 0x54 + lVar15) = uStack_178._4_4_;
        uStack_178 = (void *)0x0;
        if (*(longlong *)(param_1 + 0x58 + lVar15) != 0) {
          FUN_1400020a8();
        }
        *(ulonglong *)(param_1 + 0x58 + lVar15) = local_170;
        local_170 = 0;
        *(undefined4 *)(param_1 + 0x60 + lVar15) = (undefined4)uStack_168;
        *(undefined4 *)(param_1 + 100 + lVar15) = uStack_168._4_4_;
        uStack_168 = 0;
        if (*(longlong *)(param_1 + 0x68 + lVar15) != 0) {
          FUN_1400020a8();
        }
        *(undefined8 *)(param_1 + 0x68 + lVar15) = local_160;
        local_160 = 0;
        *(undefined4 *)(param_1 + 0x70 + lVar15) = (undefined4)uStack_158;
        *(undefined4 *)(param_1 + 0x74 + lVar15) = uStack_158._4_4_;
        uStack_158 = 0;
        if (*(longlong *)(param_1 + 0x78 + lVar15) != 0) {
          FUN_1400020a8();
        }
        pvVar4 = local_128;
        *(undefined8 *)(param_1 + 0x78 + lVar15) = local_150;
        local_150 = 0;
        *(undefined4 *)(param_1 + 0x80 + lVar15) = (undefined4)uStack_148;
        *(undefined4 *)(param_1 + 0x84 + lVar15) = uStack_148._4_4_;
        uStack_148 = 0;
        *(undefined8 *)(param_1 + 0x90 + lVar15) = local_138;
        *(undefined4 *)(param_1 + 0x98 + lVar15) = local_130;
        iVar8 = (int)uStack_120;
        lVar13 = (longlong)(int)uStack_120;
        *(int *)(param_1 + 0xa8 + lVar15) = (int)uStack_120;
        if ((int)uStack_120 == 0 && *(int *)(param_1 + 0xac + lVar15) == 0) {
          *(undefined4 *)(param_1 + 0xac + lVar15) = 0;
        }
        else {
          local_190 = (undefined8 *)(param_1 + lVar15 + 0xa0);
          FUN_1447bda9e(local_190,uStack_120 & 0xffffffff);
          if (iVar8 != 0) {
            memcpy((void *)*local_190,pvVar4,lVar13 << 2);
          }
        }
      }
      lVar13 = param_1 + lVar15;
      FUN_140186fe6(lVar13 + 0xb0,&local_118);
      pvVar4 = local_f0;
      *(undefined8 *)(lVar13 + 200) = local_100;
      *(undefined4 *)(lVar13 + 0xd0) = local_f8;
      if (puVar14 != &local_188) {
        iVar8 = (int)uStack_e8;
        lVar13 = (longlong)(int)uStack_e8;
        *(int *)(param_1 + 0xe0 + lVar15) = (int)uStack_e8;
        if ((int)uStack_e8 == 0 && *(int *)(param_1 + 0xe4 + lVar15) == 0) {
          *(undefined4 *)(param_1 + 0xe4 + lVar15) = 0;
        }
        else {
          puVar14 = (undefined8 *)(param_1 + lVar15 + 0xd8);
          FUN_1447bda9e(puVar14,uStack_e8 & 0xffffffff);
          if (iVar8 != 0) {
            memcpy((void *)*puVar14,pvVar4,lVar13 << 2);
          }
        }
      }
      FUN_140186fe6(param_1 + lVar15 + 0xe8,&local_e0);
      lVar13 = param_1 + lVar15;
      puVar14 = local_d0;
      puVar9 = (undefined8 *)(lVar13 + 0xf8);
      for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar9 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar9 = puVar9 + 1;
      }
      *(undefined4 *)(lVar13 + 0x150) = local_78;
      *(undefined2 *)(lVar13 + 0x158) = local_70;
      FUN_14494dff0(&local_188);
      lVar15 = lVar15 + 0x140;
    } while (lVar15 != 0x3c0);
    *(undefined1 *)(param_1 + 0x570) = 1;
    *(undefined4 *)(param_1 + 0x574) = 0;
    *(undefined1 *)(param_1 + 0x578) = 0;
    *(undefined4 *)(param_1 + 0x57c) = 0x55000000;
    lVar15 = 0x520;
    do {
      uVar5 = *(undefined4 *)(param_1 + 0x574);
      uVar6 = *(undefined4 *)(param_1 + 0x578);
      uVar7 = *(undefined4 *)(param_1 + 0x57c);
      puVar1 = (undefined4 *)(param_1 + lVar15);
      *puVar1 = *(undefined4 *)(param_1 + 0x570);
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      lVar15 = lVar15 + 0x10;
    } while (lVar15 != 0x570);
    if ((((*(longlong **)(param_1 + 0x10) != (longlong *)0x0) && (*(int *)(param_1 + 0xc) != 0)) &&
        (uVar3 = *(uint *)(param_1 + 8), -1 < (int)uVar3)) &&
       ((((int)uVar3 < DAT_14c9647dc &&
         (lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar15 != 0)) &&
        ((*(int *)(lVar15 + 0x10) == *(int *)(param_1 + 0xc) &&
         ((*(uint *)(lVar15 + 8) & 0x10200000) == 0)))))) {
      lVar15 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
      if (*(char *)(lVar15 + 0x22) == '\x01') {
        lVar13 = param_1 + 0x40;
        lVar11 = 0x28;
        do {
          FUN_14053cd36(lVar13 + -0x20,lVar15 + lVar11);
          FUN_14053c976(lVar13,lVar15 + lVar11);
          lVar11 = lVar11 + 0x120;
          lVar13 = lVar13 + 0x140;
        } while (lVar11 != 0x388);
      }
      else {
        lVar13 = FUN_14061177a(param_1);
        if (lVar13 != 0) {
          puVar14 = (undefined8 *)(lVar13 + 0x30);
          lVar13 = 0;
          do {
            local_180 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar14 + 5) >> 0x18);
            uStack_17c._0_1_ =
                 (undefined1)((ulonglong)*(undefined8 *)((longlong)puVar14 + 5) >> 0x38);
            local_188._0_5_ = (undefined5)*puVar14;
            local_188._5_3_ = (undefined3)((ulonglong)*puVar14 >> 0x28);
            uStack_178 = (void *)0x0;
            uVar3 = *(uint *)(puVar14 + 3);
            pvVar4 = (void *)puVar14[2];
            local_170 = CONCAT44(local_170._4_4_,uVar3);
            if ((longlong)(int)uVar3 == 0) {
              local_170 = (ulonglong)uVar3;
            }
            else {
              FUN_1404ec2aa(&uStack_178,uVar3,0);
              memcpy(uStack_178,pvVar4,(longlong)(int)uVar3 * 0x90);
            }
            pvVar4 = uStack_178;
            puVar9 = (undefined8 *)(param_1 + lVar13 + 0x20);
            *(ulonglong *)(param_1 + lVar13 + 0x25) =
                 CONCAT17((undefined1)uStack_17c,CONCAT43(local_180,local_188._5_3_));
            *puVar9 = CONCAT35(local_188._5_3_,(undefined5)local_188);
            if (puVar9 != &local_188) {
              iVar8 = (int)local_170;
              lVar11 = (longlong)(int)local_170;
              *(int *)(param_1 + 0x38 + lVar13) = (int)local_170;
              if ((int)local_170 == 0 && *(int *)(param_1 + 0x3c + lVar13) == 0) {
                *(undefined4 *)(param_1 + 0x3c + lVar13) = 0;
              }
              else {
                local_190 = (undefined8 *)(param_1 + lVar13 + 0x30);
                FUN_1404ec2aa(local_190,local_170 & 0xffffffff);
                if (iVar8 != 0) {
                  memcpy((void *)*local_190,pvVar4,lVar11 * 0x90);
                }
              }
            }
            if (uStack_178 != (void *)0x0) {
              FUN_1400020a8();
            }
            FUN_1406519c2(puVar14,param_1 + lVar13 + 0x40);
            lVar13 = lVar13 + 0x140;
            puVar14 = puVar14 + 4;
          } while (lVar13 != 0x3c0);
        }
      }
      if (*(char *)(lVar15 + 0x23) == '\x01') {
        lVar13 = 0;
        do {
          puVar1 = (undefined4 *)(lVar15 + 0x388 + lVar13);
          uVar5 = puVar1[1];
          uVar6 = puVar1[2];
          uVar7 = puVar1[3];
          puVar2 = (undefined4 *)(param_1 + 0x520 + lVar13);
          *puVar2 = *puVar1;
          puVar2[1] = uVar5;
          puVar2[2] = uVar6;
          puVar2[3] = uVar7;
          lVar13 = lVar13 + 0x10;
        } while (lVar13 != 0x50);
      }
      else {
        lVar15 = FUN_14061177a(param_1);
        if (lVar15 != 0) {
          uVar12 = *(undefined8 *)(lVar15 + 0x17c);
          *(undefined8 *)(param_1 + 0x520) = *(undefined8 *)(lVar15 + 0x174);
          *(undefined8 *)(param_1 + 0x528) = uVar12;
          uVar12 = *(undefined8 *)(lVar15 + 0x18c);
          *(undefined8 *)(param_1 + 0x530) = *(undefined8 *)(lVar15 + 0x184);
          *(undefined8 *)(param_1 + 0x538) = uVar12;
          uVar12 = *(undefined8 *)(lVar15 + 0x19c);
          *(undefined8 *)(param_1 + 0x540) = *(undefined8 *)(lVar15 + 0x194);
          *(undefined8 *)(param_1 + 0x548) = uVar12;
          uVar12 = *(undefined8 *)(lVar15 + 0x1ac);
          *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(lVar15 + 0x1a4);
          *(undefined8 *)(param_1 + 0x558) = uVar12;
          uVar5 = *(undefined4 *)(lVar15 + 0x1b8);
          uVar6 = *(undefined4 *)(lVar15 + 0x1bc);
          uVar7 = *(undefined4 *)(lVar15 + 0x1c0);
          *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(lVar15 + 0x1b4);
          *(undefined4 *)(param_1 + 0x564) = uVar5;
          *(undefined4 *)(param_1 + 0x568) = uVar6;
          *(undefined4 *)(param_1 + 0x56c) = uVar7;
        }
      }
      plVar10 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
      (**(code **)(*plVar10 + 0x10))(plVar10,&local_188,param_1);
      if ((undefined8 *)(param_1 + 0x580) == &local_188) {
        uVar12 = CONCAT35(local_188._5_3_,(undefined5)local_188);
      }
      else {
        FUN_14054e5f7(*(undefined8 *)(param_1 + 0x580),*(undefined4 *)(param_1 + 0x588));
        if (*(longlong *)(param_1 + 0x580) != 0) {
          FUN_1400020a8();
        }
        *(ulonglong *)(param_1 + 0x580) = CONCAT35(local_188._5_3_,(undefined5)local_188);
        uVar12 = 0;
        local_188._0_5_ = 0;
        local_188._5_3_ = 0;
        *(undefined4 *)(param_1 + 0x588) = local_180;
        *(undefined4 *)(param_1 + 0x58c) = uStack_17c;
        local_180 = 0;
        uStack_17c = 0;
      }
      FUN_14054e5f7(uVar12,local_180);
      if (CONCAT35(local_188._5_3_,(undefined5)local_188) != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14053c976 FUN_14053c976 body=394 status=ok
// SIG undefined FUN_14053c976(void)

undefined8 * FUN_14053c976(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_1 = *param_2;
  FUN_14053cb00(param_1 + 1,param_2 + 1);
  FUN_1402ae23a(param_1 + 3,param_2 + 3);
  FUN_14053cb00(param_1 + 5,param_2 + 5);
  FUN_14053cb50(param_1 + 7,param_2 + 7);
  param_1[10] = param_2[10];
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0xd);
    pvVar2 = (void *)param_2[0xc];
    *(int *)(param_1 + 0xd) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x6c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    }
    else {
      FUN_1447bda9e(param_1 + 0xc,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[0xc],pvVar2,(longlong)iVar1 << 2);
      }
    }
  }
  FUN_140186fe6(param_1 + 0xe,param_2 + 0xe);
  param_1[0x11] = param_2[0x11];
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x14);
    pvVar2 = (void *)param_2[0x13];
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xa4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
    }
    else {
      FUN_1447bda9e(param_1 + 0x13,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[0x13],pvVar2,(longlong)iVar1 << 2);
      }
    }
  }
  FUN_140186fe6(param_1 + 0x15,param_2 + 0x15);
  puVar4 = param_2 + 0x17;
  puVar5 = param_1 + 0x17;
  for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  *(undefined2 *)(param_1 + 0x23) = *(undefined2 *)(param_2 + 0x23);
  return param_1;
}



// FUNCTION 14053cb00 FUN_14053cb00 body=79 status=ok
// SIG undefined FUN_14053cb00(void)

undefined8 * FUN_14053cb00(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14053cbf8(param_1,iVar1);
      FUN_14053cba8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14053cb50 FUN_14053cb50 body=88 status=ok
// SIG undefined FUN_14053cb50(void)

undefined8 * FUN_14053cb50(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147f18d0a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14053cba8 FUN_14053cba8 body=80 status=ok
// SIG undefined FUN_14053cba8(void)

void FUN_14053cba8(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 14053cbf8 FUN_14053cbf8 body=317 status=ok
// SIG undefined FUN_14053cbf8(void)

void FUN_14053cbf8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14053cc66;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_14053cc66:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14053cd36 FUN_14053cd36 body=1227 status=ok
// SIG undefined FUN_14053cd36(void)

void FUN_14053cd36(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  longlong *plVar17;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined1 *local_120;
  undefined8 local_118 [13];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_1 = *(undefined1 *)(param_2 + 0x46);
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = param_2[1];
  param_1[0xc] = *(undefined1 *)((longlong)param_2 + 0x119);
  plVar17 = (longlong *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) < 0) {
    FUN_14882c588(plVar17);
  }
  iVar7 = param_2[4];
  local_128 = plVar17;
  local_120 = param_1;
  if ((longlong)iVar7 != 0) {
    lVar9 = *(longlong *)(param_2 + 2);
    lVar15 = 0;
    do {
      if ((*(longlong *)(lVar9 + lVar15) != 0) &&
         (*(longlong *)(*(longlong *)(lVar9 + lVar15) + 0x3a8) != 0)) {
        FUN_143d16884(&local_120);
      }
      lVar15 = lVar15 + 8;
    } while ((longlong)iVar7 * 8 != lVar15);
  }
  iVar7 = param_2[8];
  if ((longlong)iVar7 != 0) {
    lVar9 = *(longlong *)(param_2 + 6);
    lVar15 = 0;
    plVar17 = local_128;
    do {
      lVar10 = *(longlong *)(lVar9 + lVar15);
      if (lVar10 != 0) {
        lVar11 = FUN_14088b378();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar11 + 0x38) * 8) != lVar11 + 0x30)) {
          lVar11 = FUN_140f974a4();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar11 + 0x38) * 8) != lVar11 + 0x30)) {
            lVar11 = FUN_1400b5618();
            if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar11 + 0x38) * 8) != lVar11 + 0x30)) {
              lVar11 = FUN_1410dc03a();
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar11 + 0x38) * 8) != lVar11 + 0x30)) {
                FUN_143d16884(&local_120,lVar10);
              }
              else {
                puVar13 = (undefined8 *)(lVar10 + 0x240);
                puVar14 = local_118;
                for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
                  *puVar14 = *puVar13;
                  puVar13 = puVar13 + 1;
                  puVar14 = puVar14 + 1;
                }
                uVar16 = (uint)(*(int *)(lVar10 + 0x640) == 1);
                if (*(int *)(lVar10 + 0x640) == 2) {
                  uVar16 = 2;
                }
                uVar4 = *(undefined8 *)(lVar10 + 0x648);
                uVar5 = *(undefined8 *)(lVar10 + 0x650);
                uVar6 = *(undefined8 *)(lVar10 + 0x658);
                uVar1 = *(undefined4 *)(lVar10 + 0x660);
                uVar2 = *(undefined4 *)(lVar10 + 0x664);
                uVar3 = *(undefined4 *)(lVar10 + 0x668);
                iVar8 = *(int *)(param_1 + 0x18);
                *(uint *)(param_1 + 0x18) = iVar8 + 1U;
                if (*(uint *)(param_1 + 0x1c) < iVar8 + 1U) {
                  FUN_14187ed24(local_128,iVar8);
                }
                lVar10 = *local_128;
                lVar12 = (longlong)iVar8 * 0x90;
                puVar13 = local_118;
                puVar14 = (undefined8 *)(lVar10 + lVar12);
                for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
                  *puVar14 = *puVar13;
                  puVar13 = puVar13 + 1;
                  puVar14 = puVar14 + 1;
                }
                *(uint *)(lVar10 + 0x60 + lVar12) = uVar16;
                *(undefined8 *)(lVar10 + 0x68 + lVar12) = uVar4;
                *(undefined8 *)(lVar10 + 0x70 + lVar12) = uVar5;
                *(undefined8 *)(lVar10 + 0x78 + lVar12) = uVar6;
                *(undefined4 *)(lVar10 + 0x80 + lVar12) = uVar1;
                *(undefined4 *)(lVar10 + 0x84 + lVar12) = uVar2;
                *(undefined4 *)(lVar10 + 0x88 + lVar12) = uVar3;
                plVar17 = local_128;
              }
            }
            else {
              puVar13 = (undefined8 *)(lVar10 + 0x240);
              puVar14 = local_118;
              for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
                *puVar14 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar14 = puVar14 + 1;
              }
              uVar1 = *(undefined4 *)(lVar10 + 0x640);
              uVar2 = *(undefined4 *)(lVar10 + 0x644);
              iVar8 = *(int *)(param_1 + 0x18);
              *(uint *)(param_1 + 0x18) = iVar8 + 1U;
              if (*(uint *)(param_1 + 0x1c) < iVar8 + 1U) {
                FUN_14187ed24(plVar17,iVar8);
              }
              lVar10 = *plVar17;
              lVar12 = (longlong)iVar8 * 0x90;
              puVar13 = local_118;
              puVar14 = (undefined8 *)(lVar10 + lVar12);
              for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
                *puVar14 = *puVar13;
                puVar13 = puVar13 + 1;
                puVar14 = puVar14 + 1;
              }
              *(undefined4 *)(lVar10 + 0x60 + lVar12) = 2;
              *(undefined8 *)(lVar10 + 0x68 + lVar12) = 0x4040000000000000;
              *(undefined8 *)(lVar10 + 0x70 + lVar12) = 0x4040000000000000;
              *(undefined8 *)(lVar10 + 0x78 + lVar12) = 0x4040000000000000;
              *(undefined4 *)(lVar10 + 0x80 + lVar12) = 0x41b00000;
              *(undefined4 *)(lVar10 + 0x84 + lVar12) = uVar1;
              *(undefined4 *)(lVar10 + 0x88 + lVar12) = uVar2;
            }
          }
          else {
            puVar13 = (undefined8 *)(lVar10 + 0x240);
            puVar14 = local_118;
            for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
              *puVar14 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
            }
            uVar1 = *(undefined4 *)(lVar10 + 0x640);
            iVar8 = *(int *)(param_1 + 0x18);
            *(uint *)(param_1 + 0x18) = iVar8 + 1U;
            if (*(uint *)(param_1 + 0x1c) < iVar8 + 1U) {
              FUN_14187ed24(plVar17,iVar8);
            }
            lVar10 = *plVar17;
            lVar12 = (longlong)iVar8 * 0x90;
            puVar13 = local_118;
            puVar14 = (undefined8 *)(lVar10 + lVar12);
            for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
              *puVar14 = *puVar13;
              puVar13 = puVar13 + 1;
              puVar14 = puVar14 + 1;
            }
            *(undefined4 *)(lVar10 + 0x60 + lVar12) = 2;
            *(undefined8 *)(lVar10 + 0x68 + lVar12) = 0x4040000000000000;
            *(undefined8 *)(lVar10 + 0x70 + lVar12) = 0x4040000000000000;
            *(undefined8 *)(lVar10 + 0x78 + lVar12) = 0x4040000000000000;
            *(undefined4 *)(lVar10 + 0x80 + lVar12) = uVar1;
            *(undefined8 *)(lVar10 + 0x84 + lVar12) = 0x41b0000042300000;
          }
        }
        else {
          puVar13 = (undefined8 *)(lVar10 + 0x240);
          puVar14 = local_118;
          for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar14 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
          }
          uVar4 = *(undefined8 *)(lVar10 + 0x640);
          uVar5 = *(undefined8 *)(lVar10 + 0x648);
          uVar6 = *(undefined8 *)(lVar10 + 0x650);
          iVar8 = *(int *)(param_1 + 0x18);
          *(uint *)(param_1 + 0x18) = iVar8 + 1U;
          if (*(uint *)(param_1 + 0x1c) < iVar8 + 1U) {
            FUN_14187ed24(plVar17,iVar8);
          }
          lVar10 = *plVar17;
          lVar12 = (longlong)iVar8 * 0x90;
          puVar13 = local_118;
          puVar14 = (undefined8 *)(lVar10 + lVar12);
          for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar14 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
          }
          *(undefined4 *)(lVar10 + 0x60 + lVar12) = 0;
          *(undefined8 *)(lVar10 + 0x68 + lVar12) = uVar4;
          *(undefined8 *)(lVar10 + 0x70 + lVar12) = uVar5;
          *(undefined8 *)(lVar10 + 0x78 + lVar12) = uVar6;
          *(undefined8 *)(lVar10 + 0x80 + lVar12) = 0x4230000041b00000;
          *(undefined4 *)(lVar10 + 0x88 + lVar12) = 0x41b00000;
        }
      }
      lVar15 = lVar15 + 8;
    } while ((longlong)iVar7 * 8 != lVar15);
  }
  if ((local_b0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14053d20f FUN_14053d20f body=359 status=ok
// SIG undefined FUN_14053d20f(void)

void FUN_14053d20f(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar4 = DAT_14c9d5278;
  uVar3 = DAT_14c9c0d50;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar6 = (uint *)*puVar1;
  if (puVar6 != (uint *)0x0) goto LAB_14053d264;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar6 = (uint *)*puVar1;
LAB_14053d264:
    puVar5 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar6[0x12];
    if (puVar5 + 0x10 <= puVar6 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
      LOCK();
      uVar2 = *puVar6;
      *puVar6 = *puVar6 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar6 = (uint *)*puVar1;
      *puVar6 = 0xffffffff;
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
      puVar6[0x12] = 0;
      *puVar1 = puVar6;
      puVar5 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar5 + 0x10 <= puVar6 + 0x4000) {
        uVar7 = 1;
        goto LAB_14053d2e0;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_14053d2e0:
  *(undefined8 **)(puVar6 + 0x10) = puVar5 + 0x11;
  puVar6[0x12] = uVar7;
  *(int *)(puVar5 + -1) = ((int)puVar5 + -8) - (int)puVar6;
  *(undefined4 *)((longlong)puVar5 + -4) = 0x80;
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(&DAT_14ca11f84 + (ulonglong)(2 < param_1) * 0xe8);
  *(undefined2 *)(puVar5 + 2) = 0x1919;
  puVar5[3] = param_2;
  *(int *)(puVar5 + 4) = param_1;
  puVar5[5] = param_3;
  puVar5[6] = param_4;
  *(undefined1 *)(puVar5 + 7) = 0x3a;
  *puVar5 = &PTR_FUN_14a268d20;
  puVar5[8] = uVar3;
  puVar5[9] = uVar4;
  *(undefined4 *)(puVar5 + 10) = 0x11;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  *(undefined4 *)(puVar5 + 0xf) = 0;
  return;
}



// FUNCTION 14053d383 FUN_14053d383 body=359 status=ok
// SIG undefined FUN_14053d383(void)

void FUN_14053d383(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar4 = DAT_14c9c0d98;
  uVar3 = DAT_14c9c0d50;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar6 = (uint *)*puVar1;
  if (puVar6 != (uint *)0x0) goto LAB_14053d3d8;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar6 = (uint *)*puVar1;
LAB_14053d3d8:
    puVar5 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar6[0x12];
    if (puVar5 + 0x10 <= puVar6 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
      LOCK();
      uVar2 = *puVar6;
      *puVar6 = *puVar6 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar6 = (uint *)*puVar1;
      *puVar6 = 0xffffffff;
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
      puVar6[0x12] = 0;
      *puVar1 = puVar6;
      puVar5 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar5 + 0x10 <= puVar6 + 0x4000) {
        uVar7 = 1;
        goto LAB_14053d454;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_14053d454:
  *(undefined8 **)(puVar6 + 0x10) = puVar5 + 0x11;
  puVar6[0x12] = uVar7;
  *(int *)(puVar5 + -1) = ((int)puVar5 + -8) - (int)puVar6;
  *(undefined4 *)((longlong)puVar5 + -4) = 0x80;
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(&DAT_14ca11f8c + (ulonglong)(2 < param_1) * 0xe8);
  *(undefined2 *)(puVar5 + 2) = 0x1b1b;
  puVar5[3] = param_2;
  *(int *)(puVar5 + 4) = param_1;
  puVar5[5] = param_3;
  puVar5[6] = param_4;
  *(undefined1 *)(puVar5 + 7) = 0x3a;
  *puVar5 = &PTR_FUN_14a27de10;
  puVar5[8] = uVar3;
  puVar5[9] = uVar4;
  *(undefined4 *)(puVar5 + 10) = 0x11;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  *(undefined4 *)(puVar5 + 0xf) = 0;
  return;
}



// FUNCTION 14053d4ea FUN_14053d4ea body=664 status=ok
// SIG undefined FUN_14053d4ea(void)

undefined8 FUN_14053d4ea(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong local_90;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong lStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar9 = *(longlong *)(param_1 + 0x28);
  if (lVar9 == 0) {
    local_50 = (longlong *)FUN_14001cc68(0x98,0x10);
    local_50[1] = (longlong)&DAT_100000001;
    *local_50 = (longlong)&PTR_FUN_14a1b6cc0;
    local_58 = local_50 + 2;
    local_50[2] = (longlong)&PTR_FUN_14a18e458;
    local_50[3] = 0;
    local_50[4] = 0;
    local_50[5] = 0;
    local_50[6] = 0;
    local_50[7] = 0;
    local_50[8] = 0;
    local_50[9] = 0;
    local_50[10] = 0;
    local_50[0xb] = 0;
    local_50[0xc] = 0;
    local_50[0xd] = 0;
    local_50[0xe] = 0;
    local_50[0xf] = 0;
    local_50[0x10] = 0;
    local_50[0x11] = 0;
    local_50[0x12] = 0;
    FUN_1404e24cc(&local_58);
    FUN_1404e256a(&local_a8,&local_58);
    FUN_14029d0b6(plVar1,&local_a8);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_a0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar4 = (int *)((longlong)local_a0 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*local_a0 + 0x10))(local_a0);
        }
      }
    }
    plVar2 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar4 = (int *)((longlong)plVar2 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    lVar9 = *plVar1;
  }
  if ((*(longlong *)(lVar9 + 0x20) != 0) ||
     ((*(longlong *)(lVar9 + 0x40) != 0 && (*(longlong *)(lVar9 + 0x48) != 0)))) goto LAB_14053d53a;
  local_50 = (longlong *)0x0;
  lStack_48 = 0;
  uVar5 = FUN_140927942();
  lVar6 = FUN_14477b664(uVar5);
  lVar7 = FUN_140927942();
  uVar5 = FUN_140927942();
  FUN_1402d1bfa(&local_a8,uVar5,param_1);
  if (local_a8 != (longlong *)0x0) {
    lStack_48 = 0;
  }
  local_58 = local_a8;
  lVar8 = FUN_140927942();
  if (lVar7 == 0) {
LAB_14053d5f7:
    lVar8 = lVar7;
  }
  else if (lVar8 == 0) {
    lVar8 = 0;
  }
  else if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
           lVar8 + 0x30)) goto LAB_14053d5f7;
  if (lVar6 != lVar8) {
    lStack_48 = 0;
  }
  uVar5 = FUN_14477b664(lVar8);
  local_50 = (longlong *)FUN_14477b664(uVar5);
  if ((local_a8 != (longlong *)0x0) && (local_50 != (longlong *)0x0)) {
    lStack_48 = param_1;
  }
  FUN_14031575e(&local_a8,&local_58);
  FUN_14085123a(lVar9,&local_a8,0,1);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    piVar4 = (int *)((longlong)local_60 + 0xc);
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
LAB_14053d53a:
  FUN_14053d784(plVar1,param_2);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14053d784 FUN_14053d784 body=90 status=ok
// SIG undefined FUN_14053d784(void)

undefined8 * FUN_14053d784(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14053d7de FUN_14053d7de body=140 status=ok
// SIG undefined FUN_14053d7de(void)

void FUN_14053d7de(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_14053d86a();
  if (((param_2 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) &&
     (iVar1 = *(int *)(param_1 + 0xe20), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0xe18);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = FUN_144a2f878();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (lVar5 = param_2,
           *(longlong *)
            (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
          lVar5 = 0;
        }
        (**(code **)(*plVar3 + 0x20))(plVar3,lVar5);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return;
}



// FUNCTION 14053d86a FUN_14053d86a body=112 status=ok
// SIG undefined FUN_14053d86a(void)

void FUN_14053d86a(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x818) = 0;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    if (*(int *)(param_1 + 0x810) != 0) {
      FUN_14053d8da(param_1 + 0x808,1);
    }
    if (*(char *)(param_1 + 0x819) == '\x01') {
      *(undefined1 *)(param_1 + 0x819) = 0;
      FUN_140cfbd92(param_1 + 0x5f8);
    }
  }
  if ((*(longlong *)(param_1 + 0x820) != 0) && (*(char *)(param_1 + 0x81a) == '\x01')) {
    FUN_140521208();
    return;
  }
  return;
}



// FUNCTION 14053d8da FUN_14053d8da body=144 status=ok
// SIG undefined FUN_14053d8da(void)

void FUN_14053d8da(undefined8 *param_1,char param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    plVar2 = (longlong *)*param_1;
    lVar3 = (longlong)*(int *)(param_1 + 1) << 4;
    do {
      if ((longlong *)*plVar2 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar2 + 0x20))();
      }
      FUN_14053d96a(plVar2);
      plVar2 = plVar2 + 2;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  if (param_2 == '\0') {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    FUN_140368c45(*param_1,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
    if (-1 < iVar1) {
      return;
    }
  }
  else {
    FUN_140368c45(*param_1,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_14053e466(param_1,0);
  return;
}



// FUNCTION 14053d96a FUN_14053d96a body=91 status=ok
// SIG undefined FUN_14053d96a(void)

void FUN_14053d96a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x20))();
  }
  *param_1 = 0;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    param_1[1] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014053d9b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14053d9c6 FUN_14053d9c6 body=24 status=ok
// SIG undefined FUN_14053d9c6(void)

void FUN_14053d9c6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014053d9da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14053d9de FUN_14053d9de body=53 status=ok
// SIG undefined FUN_14053d9de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14053d9de(undefined8 *param_1,int param_2)

{
  FUN_14053e1dc();
  if (param_2 != 0) {
    _DAT_14c9a65c4 = _DAT_14c9a65c4 + -1;
    *param_1 = DAT_14c9a65b8;
    DAT_14c9a65b8 = param_1;
  }
  return param_1;
}



// FUNCTION 14053da14 FUN_14053da14 body=24 status=ok
// SIG undefined FUN_14053da14(void)

void FUN_14053da14(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014053da28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14053da2c FUN_14053da2c body=190 status=ok
// SIG undefined FUN_14053da2c(void)

void FUN_14053da2c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14053dc24();
  uVar5 = FUN_14053dec2(param_1 + 0x78);
  FUN_14053daec(&local_28,uVar5);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_14053dff8(local_28 + 0x20,param_1);
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
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14053daec FUN_14053daec body=310 status=ok
// SIG undefined FUN_14053daec(void)

longlong * FUN_14053daec(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14c9a7790;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
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
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14053dc24 FUN_14053dc24 body=250 status=ok
// SIG undefined FUN_14053dc24(void)

void FUN_14053dc24(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 == 0) {
    FUN_14053dd1e(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    plVar4 = *(longlong **)(lVar3 + 0x30);
    plVar5 = *(longlong **)(lVar3 + 0x38);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
    if (plVar4 != (longlong *)0x0) {
      lVar7 = param_1 + 0x30;
      if (*(longlong *)(param_1 + 0x68) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x68);
      }
      if ((longlong)*(int *)(param_1 + 0x70) != 0) {
        lVar6 = (longlong)*(int *)(param_1 + 0x70) * 0x38 + lVar7;
        do {
          (**(code **)(*plVar4 + 0x70))(plVar4,lVar3,lVar7,lVar7 + 0x30);
          lVar7 = lVar7 + 0x38;
        } while (lVar7 != lVar6);
      }
    }
    FUN_14053dd1e(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014053dd1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x10))(plVar5);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14053dd1e FUN_14053dd1e body=59 status=ok
// SIG undefined FUN_14053dd1e(void)

void FUN_14053dd1e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar1 = param_1;
  }
  FUN_14053dda4(lVar1,*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) == 0) {
    return;
  }
  FUN_14053dd5a(param_1);
  return;
}



// FUNCTION 14053dd5a FUN_14053dd5a body=74 status=ok
// SIG undefined FUN_14053dd5a(void)

void FUN_14053dd5a(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x38),
              (longlong)*(int *)((longlong)param_1 + 0x40) * 0x38);
      FUN_1446efa72((longlong)param_1 + 0x38,0,0,0x38);
      return;
    }
  }
  return;
}



// FUNCTION 14053dda4 FUN_14053dda4 body=286 status=ok
// SIG undefined FUN_14053dda4(void)

void FUN_14053dda4(char *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar5 = DAT_14c9a3da0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    DAT_14c9a3da0 = lVar5;
    if ((longlong)*(int *)(param_1 + 0x28) != 0) {
      lVar9 = (longlong)*(int *)(param_1 + 0x28) + -1;
      lVar10 = lVar9 * 0x10;
      FUN_1448176ff(*(undefined8 *)(lVar5 + lVar10),*(undefined4 *)(lVar5 + 8 + lVar10));
      if (*(longlong *)(lVar5 + lVar10) != 0) {
        FUN_1400020a8();
      }
      lVar5 = DAT_14c9a3da0;
      iVar8 = (int)lVar9;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
      }
      *(undefined4 *)(lVar5 + lVar10) = 0xffffffff;
      iVar7 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar7 = DAT_14c9a3dd0;
      }
      *(int *)(lVar5 + 4 + lVar10) = iVar7;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar6 = DAT_14c9a3dc0;
      if (DAT_14c9a3dc0 == (undefined *)0x0) {
        puVar6 = &DAT_14c9a3db0;
      }
      iVar7 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar7 = iVar8;
      }
      bVar4 = (byte)lVar9 & 0x1f;
      DAT_14c9a3dd0 = iVar8;
      *(uint *)(puVar6 + (longlong)(iVar7 >> 5) * 4) =
           *(uint *)(puVar6 + (longlong)(iVar7 >> 5) * 4) &
           (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      param_1[0x28] = '\0';
      param_1[0x29] = '\0';
      param_1[0x2a] = '\0';
      param_1[0x2b] = '\0';
    }
    cVar2 = *param_1;
    if (cVar2 != '\0') {
      if (cVar2 == '\x01') {
        param_1[8] = '\0';
        param_1[9] = '\0';
        param_1[10] = '\0';
        param_1[0xb] = '\0';
        param_1[0xc] = '\0';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
      }
      else if ((cVar2 == '\x03') &&
              (plVar3 = *(longlong **)(param_1 + 0x10), plVar3 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      *param_1 = '\0';
    }
    param_1 = param_1 + 0x38;
    lVar5 = DAT_14c9a3da0;
  }
  DAT_14c9a3da0 = lVar5;
  return;
}



// FUNCTION 14053dec2 FUN_14053dec2 body=310 status=ok
// SIG undefined FUN_14053dec2(void)

longlong FUN_14053dec2(char *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    if (*(longlong *)(param_1 + 8) != 0) goto LAB_14053df5e;
  }
  else if (cVar1 == '\x02') {
    if ((((*(int *)(param_1 + 0xc) != 0) && (uVar2 = *(uint *)(param_1 + 8), -1 < (int)uVar2)) &&
        ((int)uVar2 < DAT_14c9647dc)) &&
       (((lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar3 != 0 &&
         (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0xc))) &&
        ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) goto LAB_14053df5e;
  }
  else if (((cVar1 == '\x03') && (*(longlong *)(param_1 + 8) != 0)) &&
          ((*(longlong *)(param_1 + 0x10) != 0 && (0 < *(int *)(*(longlong *)(param_1 + 0x10) + 8)))
          )) {
LAB_14053df5e:
    lVar3 = FUN_14049cbd6(param_1);
    if (lVar3 != 0) {
      return lVar3;
    }
  }
  cVar1 = param_1[0x30];
  if (cVar1 == '\x01') {
    if (*(longlong *)(param_1 + 0x38) != 0) {
LAB_14053dfc0:
      lVar3 = FUN_14049cbd6(param_1 + 0x30);
      return lVar3;
    }
  }
  else if (cVar1 == '\x02') {
    if (*(int *)(param_1 + 0x3c) != 0) {
      uVar2 = *(uint *)(param_1 + 0x38);
      if ((int)uVar2 < 0) {
        return 0;
      }
      if (DAT_14c9647dc <= (int)uVar2) {
        return 0;
      }
      lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x3c))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) goto LAB_14053dfc0;
    }
  }
  else if (((cVar1 == '\x03') && (*(longlong *)(param_1 + 0x38) != 0)) &&
          ((*(longlong *)(param_1 + 0x40) != 0 && (0 < *(int *)(*(longlong *)(param_1 + 0x40) + 8)))
          )) goto LAB_14053dfc0;
  return 0;
}



// FUNCTION 14053dff8 FUN_14053dff8 body=203 status=ok
// SIG undefined FUN_14053dff8(void)

void FUN_14053dff8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar8 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar8 = param_1;
  }
  iVar6 = *(int *)(param_1 + 0xc08);
  if ((longlong)iVar6 != 0) {
    lVar9 = lVar8;
    do {
      plVar3 = *(longlong **)(lVar9 + 0x10);
      if (plVar3 == (longlong *)0x0) {
LAB_14053e066:
        lVar7 = 0;
      }
      else {
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_14053e066;
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
        lVar7 = *(longlong *)(lVar9 + 8);
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
      if (lVar7 == param_2) {
        iVar6 = (int)((ulonglong)(lVar9 - lVar8) >> 3) * -0x55555555;
        if (iVar6 < 0) {
          return;
        }
        if (*(int *)(param_1 + 0xc08) <= iVar6) {
          return;
        }
        FUN_14053e0c4(param_1,iVar6,1);
        *(undefined1 *)(param_1 + 0xc14) = 1;
        return;
      }
      lVar9 = lVar9 + 0x18;
    } while (lVar9 != lVar8 + (longlong)iVar6 * 0x18);
  }
  return;
}



// FUNCTION 14053e0c4 FUN_14053e0c4 body=133 status=ok
// SIG undefined FUN_14053e0c4(void)

void FUN_14053e0c4(longlong param_1,int param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar3 = param_1;
  }
  _Dst = (void *)(lVar3 + (longlong)param_2 * 0x18);
  FUN_14053e149(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0xc08);
  iVar2 = iVar1 - (param_2 + param_3);
  if (param_3 < iVar2) {
    iVar2 = param_3;
  }
  if (iVar2 != 0) {
    memmove(_Dst,(void *)(lVar3 + (longlong)(iVar1 - iVar2) * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = *(int *)(param_1 + 0xc08);
  }
  *(int *)(param_1 + 0xc08) = iVar1 - param_3;
  return;
}



// FUNCTION 14053e149 FUN_14053e149 body=56 status=ok
// SIG undefined FUN_14053e149(void)

void FUN_14053e149(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x10);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14053e182 FUN_14053e182 body=90 status=ok
// SIG undefined FUN_14053e182(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14053e182(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a1c75b0;
  FUN_14053e432(param_1 + 6);
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
    _DAT_14c9a65d4 = _DAT_14c9a65d4 + -1;
    *param_1 = DAT_14c9a65c8;
    DAT_14c9a65c8 = param_1;
  }
  return param_1;
}



// FUNCTION 14053e1dc FUN_14053e1dc body=598 status=ok
// SIG undefined FUN_14053e1dc(void)

void FUN_14053e1dc(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined *puVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  
  *param_1 = &PTR_FUN_14a1c75e0;
  lVar5 = DAT_14c9a3da0;
  if ((longlong)*(int *)(param_1 + 0x1a) != 0) {
    lVar10 = (longlong)*(int *)(param_1 + 0x1a) + -1;
    lVar8 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8))
    ;
    if (*(longlong *)(lVar5 + lVar8) != 0) {
      FUN_1400020a8();
    }
    lVar5 = DAT_14c9a3da0;
    iVar9 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar5 + lVar8) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar5 + 4 + lVar8) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar6 = iVar9;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    *(undefined4 *)(param_1 + 0x1a) = 0;
  }
  cVar2 = *(char *)(param_1 + 0x15);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      param_1[0x16] = 0;
    }
    else if ((cVar2 == '\x03') && (plVar3 = (longlong *)param_1[0x17], plVar3 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  lVar5 = DAT_14c9a3da0;
  if ((longlong)*(int *)(param_1 + 0x14) != 0) {
    lVar10 = (longlong)*(int *)(param_1 + 0x14) + -1;
    lVar8 = lVar10 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar8),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar8))
    ;
    if (*(longlong *)(lVar5 + lVar8) != 0) {
      FUN_1400020a8();
    }
    lVar5 = DAT_14c9a3da0;
    iVar9 = (int)lVar10;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar5 + lVar8) = 0xffffffff;
    iVar6 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar6 = DAT_14c9a3dd0;
    }
    *(int *)(lVar5 + 4 + lVar8) = iVar6;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar7 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar7 = DAT_14c9a3dc0;
    }
    iVar6 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar6 = iVar9;
    }
    bVar4 = (byte)lVar10 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) =
         *(uint *)(puVar7 + (longlong)(iVar6 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  cVar2 = *(char *)(param_1 + 0xf);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      param_1[0x10] = 0;
    }
    else if ((cVar2 == '\x03') && (plVar3 = (longlong *)param_1[0x11], plVar3 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  *param_1 = &PTR_FUN_14a1c75b0;
  FUN_14053e432(param_1 + 6);
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014053e42e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14053e432 FUN_14053e432 body=52 status=ok
// SIG undefined FUN_14053e432(void)

void FUN_14053e432(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar1 = param_1;
  }
  FUN_14053dda4(lVar1,*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14053e466 FUN_14053e466 body=221 status=ok
// SIG undefined FUN_14053e466(void)

void FUN_14053e466(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
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



// FUNCTION 14053e544 FUN_14053e544 body=1507 status=ok
// SIG undefined FUN_14053e544(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14053e544(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar6;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double *pdVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  double dVar26;
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_198 [32];
  float local_178;
  undefined8 local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  ulonglong local_d0;
  double dVar5;
  double dVar7;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((param_3 == 0) || (*(char *)(param_2 + 0x70) != '\x01')) goto LAB_14053ea40;
  plVar1 = (longlong *)(param_1 + -0x50);
  lVar9 = *(longlong *)(param_1 + -8);
  FUN_14053ebde(param_3,&local_f8);
  uVar11 = DAT_14c8463e8;
  dVar5 = *(double *)(param_1 + 0x20);
  dVar4 = *(double *)(param_1 + 0x28);
  dVar6 = *(double *)(param_1 + 0x30);
  dVar7 = *(double *)(param_1 + 0x38);
  local_118 = dVar4 * local_e8 * -1.0 + dVar6 * local_f0 + local_f8 * dVar7 * 1.0 + local_e0 * dVar5
  ;
  dStack_110 = dVar5 * local_e8 * 1.0 +
               dVar7 * local_f0 + local_f8 * dVar6 * -1.0 + local_e0 * dVar4;
  local_108 = dVar7 * local_e8 * 1.0 +
              ((local_f8 * dVar4 * 1.0 + local_e0 * dVar6) - local_f0 * dVar5);
  dStack_100 = dVar6 * local_e8 * -1.0 +
               ((local_f8 * dVar5 * -1.0 + local_e0 * dVar7) - local_f0 * dVar4);
  if (*(char *)(lVar9 + 0x40) == '\x01') {
    if (*(char *)(param_3 + 0x558) == '\0') {
      puVar2 = (undefined8 *)(param_3 + 0x510);
      if (*(char *)(param_3 + 0x530) == '\0') {
        lVar10 = *(longlong *)(param_3 + 0xd0);
        if (lVar10 == 0) {
          if (puVar2 == &DAT_14c8463d0) goto LAB_14053e81a;
          *(undefined8 *)(param_3 + 0x520) = DAT_14c8463e0;
          *(undefined8 *)(param_3 + 0x528) = uVar11;
          uVar19 = DAT_14c8463d8._4_4_;
          uVar18 = (undefined4)DAT_14c8463d8;
          uVar3 = DAT_14c8463d0._4_4_;
          *(undefined4 *)puVar2 = (undefined4)DAT_14c8463d0;
          *(undefined4 *)(param_3 + 0x514) = uVar3;
          *(undefined4 *)(param_3 + 0x518) = uVar18;
          *(undefined4 *)(param_3 + 0x51c) = uVar19;
        }
        else {
          pdVar20 = (double *)FUN_1447c6d68(lVar10);
          dVar14 = *(double *)(lVar10 + 0x450);
          dVar15 = *(double *)(lVar10 + 0x458);
          dVar16 = *(double *)(lVar10 + 0x460);
          dVar17 = *(double *)(lVar10 + 0x468);
          dVar4 = pdVar20[3];
          dVar5 = pdVar20[3];
          dVar6 = pdVar20[1];
          dVar7 = pdVar20[1];
          dVar8 = pdVar20[2];
          dVar26 = pdVar20[2];
          dVar12 = dVar15 * dVar8 * -1.0 + dVar16 * dVar6 + *pdVar20 * dVar17 * 1.0 + dVar4 * dVar14
          ;
          dVar13 = dVar14 * dVar26 * 1.0 +
                   dVar17 * dVar7 + *pdVar20 * dVar16 * -1.0 + dVar5 * dVar15;
          dVar24 = (dVar17 * dVar8 * 1.0 +
                   ((*pdVar20 * dVar15 * 1.0 + dVar4 * dVar16) - dVar6 * dVar14)) * -1.0;
          dVar26 = (dVar16 * dVar26 * -1.0 +
                   ((*pdVar20 * dVar14 * -1.0 + dVar5 * dVar17) - dVar7 * dVar15)) * 1.0;
          dVar4 = *(double *)(param_3 + 0x3c0);
          dVar6 = *(double *)(param_3 + 0x3c8);
          dVar7 = *(double *)(param_3 + 0x3d0);
          dVar8 = *(double *)(param_3 + 0x3d8);
          dVar5 = dVar7 * dVar24 * -1.0 + dVar13 * dVar6 + (dVar26 * dVar8 - dVar12 * dVar4 * -1.0);
          *(double *)(param_3 + 0x510) =
               dVar6 * dVar24 * -1.0 + ((dVar4 * dVar26 - dVar8 * dVar12 * 1.0) - dVar7 * dVar13);
          *(double *)(param_3 + 0x518) =
               dVar4 * dVar24 * 1.0 + ((dVar6 * dVar26 - dVar7 * dVar12 * -1.0) - dVar8 * dVar13);
          auVar25._8_4_ = SUB84(dVar5,0);
          auVar25._0_8_ =
               dVar8 * dVar24 * 1.0 + dVar13 * dVar4 + (dVar26 * dVar7 - dVar12 * dVar6 * 1.0);
          auVar25._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
          *(undefined1 (*) [16])(param_3 + 0x520) = auVar25;
        }
        *(undefined1 *)(param_3 + 0x530) = 1;
      }
LAB_14053e81a:
      FUN_1448052ee(puVar2,&local_138);
      *(undefined8 *)(param_3 + 0x550) = local_128._0_8_;
      *(undefined4 *)(param_3 + 0x540) = (undefined4)local_138;
      *(undefined4 *)(param_3 + 0x544) = local_138._4_4_;
      *(undefined4 *)(param_3 + 0x548) = (undefined4)uStack_130;
      *(undefined4 *)(param_3 + 0x54c) = uStack_130._4_4_;
      *(undefined1 *)(param_3 + 0x558) = 1;
    }
    FUN_1448052ee(&local_118,&local_150);
    FUN_1448052ee(param_2 + 0x50,&local_168);
    dVar5 = *(double *)(param_3 + 0x540);
    uVar3 = *(undefined4 *)(lVar9 + 0x44);
    uVar11 = (**(code **)(*plVar1 + 0x80))(plVar1,param_2);
    local_178 = (float)dVar5;
    fVar22 = (float)FUN_14053ecf3((float)local_150,(float)local_168,uVar11,uVar3);
    dVar5 = *(double *)(param_3 + 0x548);
    (**(code **)(*plVar1 + 0x88))(plVar1,param_2);
    local_178 = (float)dVar5;
    fVar23 = (float)FUN_14053ecf3((float)local_148,(float)local_160);
    dVar5 = (double)fVar23;
    auVar28._8_4_ = SUB84(dVar5,0);
    auVar28._0_8_ = (double)fVar22;
    auVar28._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar25 = divpd(auVar28,_DAT_1499387d0);
    auVar27._8_8_ = 0;
    auVar27._0_8_ = local_158;
    auVar28 = divpd(auVar27,_DAT_1499387d0);
    auVar25 = roundpd(auVar25,auVar25,3);
    auVar28 = roundpd(auVar28,auVar28,3);
    dVar7 = ((double)fVar22 - auVar25._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar8 = (dVar5 - auVar25._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar26 = (local_158 - auVar28._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar12 = (0.0 - auVar28._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar5 = sin(dVar7);
    dVar4 = sin(dVar8);
    dVar6 = sin(dVar26);
    sin(dVar12);
    dVar7 = cos(dVar7);
    dVar8 = cos(dVar8);
    dVar26 = cos(dVar26);
    cos(dVar12);
    dVar12 = dVar4 * dVar5 * dVar6 + dVar8 * dVar7 * dVar26;
    local_138 = dVar5 * dVar4 * dVar26 - dVar7 * dVar8 * dVar6;
    uStack_130 = -(dVar5 * dVar8 * dVar26) - dVar7 * dVar4 * dVar6;
    local_128._8_4_ = SUB84(dVar12,0);
    local_128._0_8_ = -(dVar8 * dVar5 * dVar6) + dVar4 * dVar7 * dVar26;
    local_128._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  }
  else {
    uVar21 = FUN_1487d63d2(param_3);
    fVar22 = *(float *)(lVar9 + 0x44);
    uVar11 = (**(code **)(*plVar1 + 0x78))(plVar1,param_2);
    local_178 = fVar22;
    local_170 = uVar21;
    FUN_1487da597(&local_138,&local_118,param_2 + 0x50,uVar11);
  }
  FUN_140182d80(param_2,&local_138);
LAB_14053ea40:
  if ((local_d0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14053ebde FUN_14053ebde body=277 status=ok
// SIG undefined FUN_14053ebde(void)

double * FUN_14053ebde(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double *pdVar14;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  lVar9 = *(longlong *)(param_1 + 0xd0);
  if (lVar9 == 0) {
    pdVar14 = (double *)(param_1 + 0x3c0);
    if (*(char *)(param_1 + 0x440) != '\0') {
      pdVar14 = (double *)(param_1 + 0x420);
    }
    dVar1 = *pdVar14;
    dVar2 = pdVar14[1];
    dVar3 = pdVar14[3];
    param_2[2] = pdVar14[2];
    param_2[3] = dVar3;
    *param_2 = dVar1;
    param_2[1] = dVar2;
  }
  else {
    pdVar14 = (double *)FUN_1447c6d68(lVar9);
    dVar10 = *(double *)(lVar9 + 0x450);
    dVar11 = *(double *)(lVar9 + 0x458);
    dVar12 = *(double *)(lVar9 + 0x460);
    dVar13 = *(double *)(lVar9 + 0x468);
    dVar1 = pdVar14[3];
    dVar2 = pdVar14[3];
    dVar3 = pdVar14[1];
    dVar4 = pdVar14[1];
    dVar5 = *pdVar14;
    dVar6 = *pdVar14;
    dVar7 = pdVar14[2];
    dVar8 = pdVar14[2];
    *param_2 = dVar11 * dVar7 * -1.0 + dVar12 * dVar3 + dVar5 * dVar13 * 1.0 + dVar1 * dVar10;
    param_2[1] = dVar10 * dVar8 * 1.0 + dVar13 * dVar4 + dVar6 * dVar12 * -1.0 + dVar2 * dVar11;
    param_2[2] = dVar13 * dVar7 * 1.0 + ((dVar5 * dVar11 * 1.0 + dVar1 * dVar12) - dVar3 * dVar10);
    param_2[3] = dVar12 * dVar8 * -1.0 + ((dVar6 * dVar10 * -1.0 + dVar2 * dVar13) - dVar4 * dVar11)
    ;
  }
  return param_2;
}



// FUNCTION 14053ecf3 FUN_14053ecf3 body=555 status=ok
// SIG undefined FUN_14053ecf3(void)

float FUN_14053ecf3(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  uint uVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  
  dVar3 = (double)FUN_144719204((double)(param_2 - param_1),0x4076800000000000);
  dVar3 = (double)(~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar3 |
                  (ulonglong)(dVar3 + 360.0) & -(ulonglong)(dVar3 < 0.0));
  fVar5 = (float)(double)(~-(ulonglong)(180.0 < dVar3) & (ulonglong)dVar3 |
                         (ulonglong)(dVar3 + -360.0) & -(ulonglong)(180.0 < dVar3));
  if (180.0 - param_4 < ABS(fVar5)) {
    dVar3 = (double)FUN_144719204((double)(param_5 - param_1),0x4076800000000000);
    dVar3 = (double)(~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar3 |
                    (ulonglong)(dVar3 + 360.0) & -(ulonglong)(dVar3 < 0.0));
    fVar4 = (float)(double)(~-(ulonglong)(180.0 < dVar3) & (ulonglong)dVar3 |
                           (ulonglong)(dVar3 + -360.0) & -(ulonglong)(180.0 < dVar3));
    uVar2 = -(uint)(0.0 < fVar4);
    fVar1 = (float)(uVar2 & 0x3f800000 | ~uVar2 & -(uint)(fVar4 < 0.0) & 0xbf800000);
    fVar4 = (float)(-(uint)(0.0 < fVar5) & 0x3f800000 |
                   ~-(uint)(0.0 < fVar5) & -(uint)(fVar5 < 0.0) & 0xbf800000);
    if ((fVar1 != fVar4) || (NAN(fVar1) || NAN(fVar4))) {
      fVar5 = fVar5 + fVar4 * -360.0;
    }
  }
  dVar3 = (double)FUN_144719204((double)(fVar5 * param_3 + param_1),0x4076800000000000);
  dVar3 = (double)(~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar3 |
                  (ulonglong)(dVar3 + 360.0) & -(ulonglong)(dVar3 < 0.0));
  return (float)(double)(~-(ulonglong)(180.0 < dVar3) & (ulonglong)dVar3 |
                        (ulonglong)(dVar3 + -360.0) & -(ulonglong)(180.0 < dVar3));
}



// FUNCTION 14053ef1e FUN_14053ef1e body=280 status=ok
// SIG undefined FUN_14053ef1e(void)

undefined4 *
FUN_14053ef1e(undefined8 param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,
             char param_5)

{
  undefined1 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_50 [2];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((DAT_14c760d84 != 0 & DAT_14ca84f5a) == 0 && param_5 == '\0') || (param_3 == 0)) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 2) = 0;
  }
  else {
    local_40 = param_3;
    local_38 = param_4;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca81300) {
      FUN_144b3d300(&DAT_14ca81300);
      if (DAT_14ca81300 == -1) {
        DAT_14ca812fc = FUN_1447e0190();
        _Init_thread_footer(&DAT_14ca81300);
      }
    }
    uVar1 = DAT_14ca812fc;
    FUN_140056680(local_50,param_4);
    local_58 = uVar1;
    FUN_14053f038(param_1,param_2,&local_40,local_50);
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14053f038 FUN_14053f038 body=4242 status=ok
// SIG undefined FUN_14053f038(void)

uint * FUN_14053f038(uint *param_1,uint *param_2,longlong *param_3,void **param_4,char param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong lVar3;
  void *_Src;
  undefined8 *puVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined4 *puVar19;
  uint *puVar20;
  longlong *plVar21;
  byte bVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  uint *puVar28;
  ulonglong uVar29;
  uint uVar30;
  PSRWLOCK pRVar31;
  uint uVar32;
  longlong lVar33;
  ulonglong uVar34;
  uint uVar35;
  uint uVar36;
  longlong lVar37;
  undefined8 *puVar38;
  bool bVar39;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  void **local_1e0;
  undefined8 local_1d8;
  uint local_1c4;
  PSRWLOCK local_1c0;
  undefined8 *local_1b8;
  uint *local_1b0;
  uint *local_1a8;
  longlong local_1a0;
  void **local_198;
  longlong *local_190;
  undefined8 *local_188;
  undefined8 local_180;
  void *local_178;
  ulonglong uStack_170;
  ulonglong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  *param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  lVar3 = *param_3;
  pRVar31 = (PSRWLOCK)(param_1 + 2);
  AcquireSRWLockShared(pRVar31);
  cVar11 = FUN_144b1bc6c(param_1,lVar3,param_2);
  ReleaseSRWLockShared(pRVar31);
  if (cVar11 != '\0') goto LAB_14053f8dd;
  AcquireSRWLockExclusive(pRVar31);
  cVar11 = FUN_144b1bc6c(param_1,lVar3,param_2);
  if (cVar11 != '\0') {
    ReleaseSRWLockExclusive(pRVar31);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_208);
  }
  uVar36 = *param_1;
  uVar23 = param_1[6];
  param_1[6] = uVar23 + 1;
  local_198 = param_4;
  if (param_1[7] < uVar23 + 1) {
    FUN_14479d316(param_1 + 4,uVar23);
  }
  *(longlong *)(*(longlong *)(param_1 + 4) + (longlong)(int)uVar23 * 8) = lVar3;
  *param_2 = (uVar36 & 3) + uVar23 * 4;
  puVar14 = (undefined8 *)FUN_14001cc68(0x50);
  lVar33 = *param_3;
  lVar37 = param_3[1];
  puVar14[1] = 0;
  puVar14[2] = DAT_14c867d10;
  puVar14[5] = 0;
  puVar14[6] = 0;
  puVar14[3] = 0;
  puVar14[4] = 0;
  *puVar14 = &PTR_FUN_14a37d350;
  puVar14[7] = lVar33;
  puVar14[8] = lVar37;
  puVar14[9] = 0;
  LOCK();
  piVar1 = (int *)(lVar33 + 8);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  local_168 = local_168 & 0xffffffffffffff00;
  uVar36 = *param_2;
  local_1b0 = param_1 + 8;
  local_1c0 = pRVar31;
  local_1b8 = puVar14;
  local_190 = param_3;
  if (param_1[0x15] == 0) {
    uVar23 = param_1[10];
    param_1[10] = uVar23 + 1;
    if (param_1[0xb] == uVar23) {
      FUN_1447711aa(local_1b0,uVar23);
    }
    uVar26 = param_1[0x12];
    if (uVar26 == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = uVar26 + 0x1e;
      if (-1 < (int)(uVar26 - 1)) {
        iVar12 = uVar26 - 1;
      }
      iVar12 = iVar12 >> 5;
    }
    puVar20 = param_1 + 0xc;
    uVar32 = uVar26 + 1;
    uVar30 = uVar26 + 0x1f;
    if (-1 < (int)uVar26) {
      uVar30 = uVar26;
    }
    if ((int)uVar30 >> 5 == iVar12) {
      param_1[0x12] = uVar32;
    }
    else {
      if ((int)param_1[0x13] <= (int)uVar26) {
        uVar32 = uVar26;
        local_1c4 = uVar36;
        if (uVar26 + 0x20 < 0xa0) {
          uVar36 = 0x80;
        }
        else {
          uVar35 = uVar26 + 0x20 >> 5;
          if (param_1[0x13] + 0x1f < 0xa0) {
            uVar36 = 4;
            if (4 < uVar35) {
              uVar36 = uVar35;
            }
          }
          else {
            uVar36 = uVar35 + (uVar35 * 3 >> 3) + 0x10;
          }
          uVar24 = (ulonglong)(uVar36 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar13 = (uint)(uVar24 + 0xf);
              if (uVar36 < 0x1ffd) {
                uVar24 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar24 + 0xf >> 4]];
              }
              else {
                uVar25 = (ulonglong)(uVar13 & 0xfffffff0);
                if (uVar25 < 0x7ff1) {
                  bVar22 = (&DAT_14c841e00)[uVar13 >> 4];
                  uVar29 = 0x32;
                  if (0x32 < bVar22) {
                    uVar29 = (ulonglong)bVar22;
                  }
                  uVar34 = 0x32 - (ulonglong)bVar22;
                  do {
                    uVar24 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar34 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar34 & 0xffffffff] & 0xf) == 0) goto LAB_14053fe6d;
                    lVar33 = uVar29 + 1 + uVar34;
                    uVar34 = uVar34 - 1;
                  } while (lVar33 != 0x33);
                }
                uVar24 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar24 = (ulonglong)DAT_14c841df8;
                }
                uVar24 = -uVar24 & (uVar25 + uVar24) - 1;
              }
            }
            else {
              local_1a8 = (uint *)(ulonglong)uVar35;
              uVar24 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar24,0);
              uVar35 = (uint)local_1a8;
              uVar32 = param_1[0x12];
            }
          }
LAB_14053fe6d:
          iVar12 = (int)(uVar24 >> 2);
          uVar36 = 0xffffffe0;
          if ((int)uVar35 <= iVar12) {
            uVar36 = iVar12 << 5;
          }
        }
        param_1[0x13] = uVar36;
        FUN_1446efbd8(puVar20,uVar32);
        uVar32 = param_1[0x12] + 1;
        uVar36 = local_1c4;
      }
      uVar35 = uVar32 + 0x1f;
      if (-1 < (int)uVar32) {
        uVar35 = uVar32;
      }
      param_1[0x12] = uVar32;
      if ((int)uVar32 % 0x20 != 0) {
        puVar28 = *(uint **)(param_1 + 0x10);
        if (*(uint **)(param_1 + 0x10) == (uint *)0x0) {
          puVar28 = puVar20;
        }
        bVar22 = -(char)((int)uVar32 % 0x20);
        puVar28[(int)uVar35 >> 5] =
             (puVar28[(int)uVar35 >> 5] << (bVar22 & 0x1f)) >> (bVar22 & 0x1f);
      }
    }
    lVar33 = (longlong)(int)uVar23;
    if (*(uint **)(param_1 + 0x10) != (uint *)0x0) {
      puVar20 = *(uint **)(param_1 + 0x10);
    }
    bVar22 = (byte)uVar26 & 0x1f;
    puVar20[(int)uVar30 >> 5] =
         puVar20[(int)uVar30 >> 5] & (-2 << bVar22 | 0xfffffffeU >> 0x20 - bVar22);
  }
  else {
    uVar23 = param_1[0x14];
    lVar33 = (longlong)(int)uVar23;
    uVar26 = *(uint *)(*(longlong *)(param_1 + 8) + 4 + lVar33 * 0x20);
    param_1[0x14] = uVar26;
    uVar32 = param_1[0x15] - 1;
    param_1[0x15] = uVar32;
    if (uVar32 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar26 * 0x20) = 0xffffffff;
    }
  }
  pRVar31 = local_1c0;
  puVar20 = param_1 + 0xc;
  if (*(uint **)(param_1 + 0x10) != (uint *)0x0) {
    puVar20 = *(uint **)(param_1 + 0x10);
  }
  uVar26 = uVar23 + 0x1f;
  if (-1 < (int)uVar23) {
    uVar26 = uVar23;
  }
  puVar20[(int)uVar26 >> 5] = puVar20[(int)uVar26 >> 5] | 1 << ((byte)uVar23 & 0x1f);
  uVar26 = 1;
  lVar37 = *(longlong *)(param_1 + 8);
  lVar33 = lVar33 * 0x20;
  puVar19 = (undefined4 *)(lVar37 + lVar33);
  *(longlong *)(lVar37 + lVar33) = lVar3;
  *(undefined8 **)(lVar37 + 8 + lVar33) = local_1b8;
  *(uint *)(lVar37 + 0x10 + lVar33) = uVar36;
  *(undefined1 *)(lVar37 + 0x14 + lVar33) = (undefined1)local_168;
  *(undefined4 *)(lVar37 + 0x18 + lVar33) = 0xffffffff;
  uVar36 = (int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3;
  uVar32 = param_1[10] - param_1[0x15];
  if ((uVar32 != 0) && (uVar32 != 1)) {
    puVar20 = param_1 + 0x16;
    if (*(uint **)(param_1 + 0x18) != (uint *)0x0) {
      puVar20 = *(uint **)(param_1 + 0x18);
    }
    uVar30 = puVar20[param_1[0x1a] - 1 & uVar36];
    if (uVar30 != 0xffffffff) {
      do {
        puVar2 = (undefined4 *)(*(longlong *)local_1b0 + (longlong)(int)uVar30 * 0x20);
        if (*(longlong *)(*(longlong *)local_1b0 + (longlong)(int)uVar30 * 0x20) == lVar3) {
          uVar6 = *puVar19;
          uVar7 = puVar19[1];
          uVar8 = puVar19[2];
          uVar9 = puVar19[3];
          *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar19 + 4);
          *puVar2 = uVar6;
          puVar2[1] = uVar7;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
          FUN_147411cd2(local_1b0,uVar23);
          goto LAB_14053f35f;
        }
        uVar30 = puVar2[6];
      } while (uVar30 != 0xffffffff);
    }
  }
  if (3 < uVar32) {
    uVar24 = (ulonglong)(uVar32 & 0xfffffffe) + 0xf;
    lVar33 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    uVar26 = 1 << ((byte)lVar33 & 0x1f);
  }
  if (((int)uVar32 < 1) || ((int)uVar26 <= (int)param_1[0x1a])) {
    uVar26 = param_1[0x1a] - 1 & uVar36;
    puVar19[7] = uVar26;
    puVar20 = *(uint **)(param_1 + 0x18);
    if (*(uint **)(param_1 + 0x18) == (uint *)0x0) {
      puVar20 = param_1 + 0x16;
    }
    puVar19[6] = puVar20[(longlong)(int)param_1[0x1a] - 1U & (longlong)(int)uVar26];
    puVar20 = *(uint **)(param_1 + 0x18);
    if (*(uint **)(param_1 + 0x18) == (uint *)0x0) {
      puVar20 = param_1 + 0x16;
    }
    puVar20[(longlong)(int)param_1[0x1a] - 1U & (longlong)(int)uVar26] = uVar23;
  }
  else {
    param_1[0x1a] = uVar26;
    FUN_14178d25a(local_1b0);
  }
LAB_14053f35f:
  if (param_5 != '\0') {
    puVar38 = (undefined8 *)FUN_1446fac86(0xa8);
    FUN_1447247dc(puVar38,0);
    *puVar38 = &PTR_FUN_149e00300;
    if (*(code **)(puVar38[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar38[0xe] + 0x18))(puVar38 + 0xe,puVar38 + 9);
    }
    puVar38[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar38[9] = puVar38;
    puVar38[10] = puVar38;
    lVar33 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar33 == 0) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(lVar33 + 0x30);
    }
    puVar38[0xf] = uVar15;
    puVar38[0x10] = 0xc80000527800c400;
    *(undefined4 *)((longlong)puVar38 + 0x1c) = 2;
    local_188 = puVar38;
    FUN_140314f2e(local_1b8);
    uVar23 = 1;
    if ((*(byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) & 0x20) == 0) {
      uVar23 = DAT_14c760d80 ^ 1;
    }
    plVar21 = *(longlong **)((longlong)puVar14 + (ulonglong)(uVar23 << 4) + 0x18);
    if (plVar21 == (longlong *)0x0) {
      puVar38 = *(undefined8 **)(param_2 + 2);
      if (puVar38 != (undefined8 *)0x0) {
        param_2[2] = 0;
        param_2[3] = 0;
LAB_14053fc01:
        LOCK();
        piVar1 = (int *)(puVar38 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar38)(puVar38,1);
        }
      }
    }
    else {
      puVar4 = (undefined8 *)*plVar21;
      puVar38 = *(undefined8 **)(param_2 + 2);
      if (puVar38 != puVar4) {
        *(undefined8 **)(param_2 + 2) = puVar4;
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
          UNLOCK();
        }
        if (puVar38 != (undefined8 *)0x0) goto LAB_14053fc01;
      }
    }
    LOCK();
    param_1[0x1c] = param_1[0x1c] + 1;
    UNLOCK();
  }
  local_1c4 = uVar36;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca813a8) && (FUN_144b3d300(), DAT_14ca813a8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14ca813a0 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.pso.KeepAliveCount",1);
    _Init_thread_footer();
    pRVar31 = local_1c0;
    uVar36 = local_1c4;
  }
  bVar39 = false;
  if ((DAT_14ca84df4 == 0x10de) && (DAT_14ca813a0 != (longlong *)0x0)) {
    iVar12 = (**(code **)(*DAT_14ca813a0 + 0xb0))();
    bVar39 = 0 < iVar12;
  }
  if ((((!bVar39) && (DAT_14ca80860 != 0)) && (DAT_14ca84df4 == 0x10de)) && (param_1[0x2a] != 0)) {
    uVar36 = param_1[0x2b];
    lVar33 = *(longlong *)(param_1 + 0x26);
    lVar37 = (longlong)*(int *)(lVar33 + (longlong)(int)uVar36 * 4);
    if (lVar37 != -1) {
      puVar20 = param_1 + 0x20;
      uVar23 = param_1[0x22];
      param_1[0x22] = uVar23 + 1;
      lVar27 = *(longlong *)(param_1 + 4);
      if (param_1[0x23] < uVar23 + 1) {
        local_1a8 = puVar20;
        local_1a0 = *(longlong *)(param_1 + 4);
        FUN_14479d316(puVar20,uVar23);
        puVar20 = local_1a8;
        lVar27 = local_1a0;
      }
      *(undefined8 *)(*(longlong *)puVar20 + (longlong)(int)uVar23 * 8) =
           *(undefined8 *)(lVar27 + lVar37 * 8);
    }
    *(uint *)(lVar33 + (longlong)(int)uVar36 * 4) = *param_2 >> 2;
    uVar36 = 0;
    if (param_1[0x2b] + 1 < param_1[0x2a]) {
      uVar36 = param_1[0x2b] + 1;
    }
    param_1[0x2b] = uVar36;
    pRVar31 = local_1c0;
    uVar36 = local_1c4;
  }
  ReleaseSRWLockExclusive(pRVar31);
  puVar38 = local_1b8;
  if (param_5 == '\0') {
    local_168 = local_1b8[7];
    uStack_160 = CONCAT71(uStack_160._1_7_,0x40);
    (**(code **)(*DAT_14ca83900 + 0x128))(DAT_14ca83900,local_88);
    lVar33 = puVar38[9];
    puVar38[9] = local_88[0];
    local_88[0] = (undefined1 *)0x0;
    if (lVar33 != 0) {
      LOCK();
      puVar20 = (uint *)(lVar33 + 8);
      uVar23 = *puVar20;
      *puVar20 = *puVar20 - 1;
      UNLOCK();
      if ((uVar23 & 0x3fffffff) == 1) {
        puVar20 = (uint *)(lVar33 + 8);
        LOCK();
        uVar23 = *puVar20;
        *puVar20 = *puVar20 | 0x40000000;
        UNLOCK();
        if ((uVar23 >> 0x1e & 1) == 0) {
          bVar22 = *(byte *)(lVar33 + 0xd);
          plVar17 = (longlong *)FUN_14001cc68(0x10,8);
          plVar17[1] = lVar33;
          plVar21 = DAT_14ca843c0;
          plVar18 = DAT_14ca843c8;
          if ((bVar22 & 2) == 0) {
            do {
              *plVar17 = (longlong)plVar21;
              LOCK();
              bVar39 = plVar21 != DAT_14ca843c0;
              plVar18 = plVar17;
              if (bVar39) {
                plVar21 = DAT_14ca843c0;
                plVar18 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar18;
              UNLOCK();
            } while (bVar39);
          }
          else {
            do {
              *plVar17 = (longlong)plVar18;
              LOCK();
              bVar39 = plVar18 != DAT_14ca843c8;
              plVar21 = plVar17;
              if (bVar39) {
                plVar18 = DAT_14ca843c8;
                plVar21 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar21;
              UNLOCK();
            } while (bVar39);
          }
        }
      }
      puVar10 = local_88[0];
      if (local_88[0] != (undefined1 *)0x0) {
        LOCK();
        puVar20 = (uint *)(local_88[0] + 8);
        uVar23 = *puVar20;
        *puVar20 = *puVar20 - 1;
        UNLOCK();
        if ((uVar23 & 0x3fffffff) == 1) {
          puVar20 = (uint *)(local_88[0] + 8);
          LOCK();
          uVar23 = *puVar20;
          *puVar20 = *puVar20 | 0x40000000;
          UNLOCK();
          if ((uVar23 >> 0x1e & 1) == 0) {
            bVar22 = local_88[0][0xd];
            plVar17 = (longlong *)FUN_14001cc68(0x10,8);
            plVar17[1] = (longlong)puVar10;
            plVar21 = DAT_14ca843c0;
            plVar18 = DAT_14ca843c8;
            if ((bVar22 & 2) == 0) {
              do {
                *plVar17 = (longlong)plVar21;
                LOCK();
                bVar39 = plVar21 != DAT_14ca843c0;
                plVar18 = plVar17;
                if (bVar39) {
                  plVar21 = DAT_14ca843c0;
                  plVar18 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar18;
                UNLOCK();
              } while (bVar39);
            }
            else {
              do {
                *plVar17 = (longlong)plVar18;
                LOCK();
                bVar39 = plVar18 != DAT_14ca843c8;
                plVar21 = plVar17;
                if (bVar39) {
                  plVar18 = DAT_14ca843c8;
                  plVar21 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar21;
                UNLOCK();
              } while (bVar39);
            }
          }
        }
      }
    }
    FUN_14178ccba(DAT_14ca811d0,local_190,local_1b8[9] != 0);
    pRVar31 = local_1c0;
  }
  else {
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_118 = 0;
    local_10c = 0;
    uStack_104 = 0;
    local_fc = 0;
    uStack_f4 = 0;
    local_ec = 0;
    uStack_e4 = 0;
    local_dc = 0;
    uStack_d4 = 0;
    uStack_cf = 0;
    uStack_cc = 0;
    uStack_c7 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    local_a0 = 0x48000001;
    local_98 = 0;
    local_178 = (void *)0x0;
    uStack_170 = 0;
    if (&local_178 != local_198) {
      uVar36 = *(uint *)(local_198 + 1);
      _Src = *local_198;
      uStack_170 = (ulonglong)uVar36;
      if ((longlong)(int)uVar36 != 0) {
        FUN_1446dd670(&local_178,uVar36,0);
        memcpy(local_178,_Src,(longlong)(int)uVar36 * 2);
      }
    }
    iVar12 = FUN_1415b29d6();
    local_1e0 = &local_178;
    if (iVar12 < 1) {
      puVar14 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar20 = (uint *)*puVar14;
      if (puVar20 != (uint *)0x0) goto LAB_14053fa30;
      while( true ) {
        uVar36 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar36 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar36 | 1;
          __tlregdtor(&LAB_1431e6dc7);
        }
        lVar33 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar19 = *(undefined4 **)(lVar33 + 0x310);
        *(undefined8 *)(lVar33 + 0x310) = 0;
        if (puVar19 == (undefined4 *)0x0) {
          puVar19 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar19 = 0xffffffff;
        *(undefined4 **)(puVar19 + 0x10) = puVar19 + 0x16;
        puVar19[0x12] = 0;
        *puVar14 = puVar19;
        FUN_140217a48(puVar14);
        puVar20 = (uint *)*puVar14;
LAB_14053fa30:
        puVar38 = (undefined8 *)(*(longlong *)(puVar20 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar28 = (uint *)(puVar38 + 0x34);
        uVar36 = puVar20[0x12];
        if (puVar28 <= puVar20 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar20 + 0x10) = puVar20 + 0x4000;
          LOCK();
          uVar23 = *puVar20;
          *puVar20 = *puVar20 + uVar36 + 1;
          UNLOCK();
          if ((uVar23 ^ uVar36) != 0xffffffff) break;
          puVar20 = (uint *)*puVar14;
          *puVar20 = 0xffffffff;
          *(uint **)(puVar20 + 0x10) = puVar20 + 0x16;
          puVar20[0x12] = 0;
          *puVar14 = puVar20;
          puVar38 = (undefined8 *)((longlong)puVar20 + 0x5fU & 0xfffffffffffffff8);
          puVar28 = (uint *)(puVar38 + 0x34);
          uVar36 = 0;
          if (puVar28 <= puVar20 + 0x4000) {
            uVar36 = 1;
            goto LAB_14053fab2;
          }
        }
      }
      uVar36 = uVar36 + 1;
LAB_14053fab2:
      *(uint **)(puVar20 + 0x10) = puVar28;
      puVar20[0x12] = uVar36;
      iVar12 = 0;
      FUN_1447247dc(puVar38,0);
      *puVar38 = &PTR_FUN_14a37d398;
      local_1e8 = 0;
      FUN_140565cd6(puVar38 + 0x15,local_1b8,&local_168,1);
      uVar36 = FUN_14025a222(puVar38 + 0x15);
      if ((uVar36 & 0xff) == 0xff) {
        uVar23 = uVar36 >> 10 & 3;
        if ((uVar36 >> 9 & 1) == 0 || uVar23 < 2) {
          uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar23];
          iVar12 = 0;
        }
        else {
          uVar24 = 2;
        }
      }
      else {
        iVar12 = (uVar36 >> 7 & 2 | uVar36 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar36 & 0xff) * 4);
        uVar24 = 5;
      }
      if (*(code **)(puVar38[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar38[0xe] + 0x18))(puVar38 + 0xe,puVar38 + 9);
      }
      pRVar31 = local_1c0;
      uVar36 = local_1c4;
      puVar38[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar38[9] = puVar38;
      puVar38[10] = puVar38;
      lVar33 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar33 == 0) {
        uVar25 = 1;
        if ((char)uVar24 != '\x06') {
          uVar25 = uVar24;
        }
        uVar24 = uVar25;
        uVar15 = 0;
      }
      else {
        if ((char)uVar24 == '\x06') {
          uVar24 = *(ulonglong *)(lVar33 + 0x38) >> 0x3b;
        }
        uVar15 = *(undefined8 *)(lVar33 + 0x30);
      }
      puVar38[0xf] = uVar15;
      puVar38[0x10] = uVar24 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar38 + 0x1c) = iVar12;
      if (puVar38 == (undefined8 *)0x0) {
        local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(0);
        pRVar31 = local_1c0;
        uVar36 = local_1c4;
      }
      else {
        LOCK();
        *(int *)(puVar38 + 1) = *(int *)(puVar38 + 1) + 1;
        UNLOCK();
        local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(puVar38);
        LOCK();
        piVar1 = (int *)(puVar38 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar38)(puVar38,1);
        }
      }
    }
    else {
      uVar15 = FUN_14001cc68(0xf8,0x10);
      puVar38 = local_1b8;
      local_1e8 = 0;
      FUN_140565cd6(uVar15,local_1b8,&local_168,1);
      uVar16 = FUN_14001cc68(0x90,0x10);
      local_78 = 0;
      local_68 = &PTR_LAB_14a37d710;
      local_88[0] = &LAB_1431e9200;
      local_60 = uVar15;
      FUN_1431e7872(uVar16);
      local_180 = uVar16;
      FUN_14178cc5e(puVar38);
      pRVar31 = local_1c0;
      uVar36 = local_1c4;
      uVar23 = DAT_14c760d80 ^ 1;
      if ((*(byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) & 0x20) != 0) {
        uVar23 = 1;
      }
      lVar33 = *(longlong *)((longlong)puVar14 + (ulonglong)(uVar23 << 4) + 0x18);
      if (lVar33 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = *(undefined8 *)(lVar33 + 8);
      }
      uVar16 = FUN_1415b2962(&DAT_14ca80898);
      local_1d8 = 0;
      local_1e0 = (void **)0xffffffffffffffff;
      local_1e8 = 0;
      FUN_1402a8900(uVar15,0,uVar16,3);
      FUN_14178d214(0);
    }
    if (local_178 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  AcquireSRWLockShared(pRVar31);
  if (param_1[10] != param_1[0x15]) {
    puVar20 = param_1 + 0x16;
    if (*(uint **)(param_1 + 0x18) != (uint *)0x0) {
      puVar20 = *(uint **)(param_1 + 0x18);
    }
    uVar36 = puVar20[param_1[0x1a] - 1 & uVar36];
    if (uVar36 != 0xffffffff) {
      lVar33 = *(longlong *)local_1b0;
      do {
        lVar37 = lVar33 + (longlong)(int)uVar36 * 0x20;
        if (*(longlong *)(lVar33 + (longlong)(int)uVar36 * 0x20) == lVar3) {
          if ((undefined8 *)(lVar37 + 8) != (undefined8 *)0x0 && lVar37 != 0) {
            uVar24 = CONCAT71((int7)((ulonglong)lVar33 >> 8),*(undefined1 *)(lVar37 + 0x14));
            do {
              bVar5 = (byte)uVar24;
              LOCK();
              bVar22 = *(byte *)(lVar37 + 0x14);
              if (bVar5 == bVar22) {
                *(byte *)(lVar37 + 0x14) = bVar5 | 1;
              }
              else {
                uVar24 = CONCAT71((int7)(uVar24 >> 8),bVar22);
              }
              UNLOCK();
            } while (bVar5 != bVar22);
            if (((byte)uVar24 & 0xe) == 8) {
              FUN_1402d073e(param_1,uVar24 & 0xffffffff,0,*(undefined8 *)(lVar37 + 8));
            }
          }
          break;
        }
        uVar36 = *(uint *)(lVar37 + 0x18);
      } while (uVar36 != 0xffffffff);
    }
  }
  ReleaseSRWLockShared(pRVar31);
LAB_14053f8dd:
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405400de FUN_1405400de body=36 status=ok
// SIG undefined FUN_1405400de(void)

undefined8 FUN_1405400de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 140540102 FUN_140540102 body=77 status=ok
// SIG undefined FUN_140540102(void)

longlong FUN_140540102(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_140540150(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


