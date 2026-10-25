// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14179f016 FUN_14179f016 body=220 status=ok
// SIG undefined FUN_14179f016(void)

undefined4 * FUN_14179f016(undefined4 *param_1,undefined4 *param_2,int param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = param_1[4];
  iVar4 = param_1[5];
  if (iVar4 == -1) {
    uVar6 = param_1[1];
    uVar7 = param_1[2];
    uVar8 = param_1[3];
    *param_2 = *param_1;
    param_2[1] = uVar6;
    param_2[2] = uVar7;
    param_2[3] = uVar8;
    param_2[4] = uVar3;
  }
  else if (DAT_14cab3298 == param_3) {
    uVar3 = param_1[1];
    uVar6 = param_1[2];
    uVar7 = param_1[3];
    *param_2 = *param_1;
    param_2[1] = uVar3;
    param_2[2] = uVar6;
    param_2[3] = uVar7;
    param_2[4] = param_3;
  }
  else {
    local_30 = *param_4;
    local_28 = param_4[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
      iVar4 = param_1[5];
    }
    local_38 = &local_30;
    FUN_1410cbea3(param_2 + 4,param_3,iVar4);
    uVar3 = param_1[1];
    uVar6 = param_1[2];
    uVar7 = param_1[3];
    *param_2 = *param_1;
    param_2[1] = uVar3;
    param_2[2] = uVar6;
    param_2[3] = uVar7;
  }
  plVar5 = (longlong *)param_4[1];
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14179f0f5 FUN_14179f0f5 body=49 status=ok
// SIG undefined FUN_14179f0f5(void)

longlong FUN_14179f0f5(void)

{
  if (DAT_14cab37b8 == 0) {
    FUN_14073dd9a(&DAT_14cab37b8,&PTR_LAB_14a488da0);
  }
  return DAT_14cab37b8;
}



// FUNCTION 14179f126 FUN_14179f126 body=49 status=ok
// SIG undefined FUN_14179f126(void)

longlong FUN_14179f126(void)

{
  if (DAT_14cab3a38 == 0) {
    FUN_14073dd9a(&DAT_14cab3a38,&PTR_LAB_14a48ce50);
  }
  return DAT_14cab3a38;
}



// FUNCTION 14179f158 FUN_14179f158 body=661 status=ok
// SIG undefined FUN_14179f158(void)

undefined8 FUN_14179f158(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
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
  code *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x298) == 0) {
    uVar4 = FUN_14682bf7b(0);
    FUN_140056680(param_2,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
  }
  local_40 = *(code **)(*(longlong *)(param_1 + 0x298) + 0x18);
  FUN_1400021e4(&local_40,param_2);
  if (param_3 != '\0') {
    if (DAT_14cac9ca8 == 0) {
      local_40 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1478c0a72;
      local_70 = (code *)&LAB_1417b2375;
      local_78 = L"Engine";
      local_80 = 0x1000000000;
      local_88 = 0x10000004;
      local_90 = 8;
      local_98 = 0x390;
      local_60 = &local_40;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    lVar3 = DAT_14cac9ca8;
    if (DAT_14c951858 == 0) {
      local_40 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1468c5283;
      local_70 = FUN_142809da0;
      local_78 = L"Engine";
      local_80 = 0x400000000;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x50;
      local_60 = &local_40;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar3 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
           (lVar5 = lVar2,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
           lVar3 + 0x30)) {
          lVar5 = 0;
        }
      } while ((lVar5 == 0) && (lVar2 = *(longlong *)(lVar2 + 0x20), lVar2 != 0));
      if (lVar5 != 0) {
        lVar3 = FUN_1447210f0(lVar5);
        if (lVar3 != 0) {
          uVar4 = FUN_1447210f0(lVar5);
          iVar1 = FUN_14490d72a(uVar4);
          if (iVar1 == 3) {
            iVar1 = FUN_140d25081();
            FUN_140002266(&local_40,L" (client %d)",iVar1 + -1);
            iVar1 = local_38 + -1;
            if (local_38 == 0) {
              iVar1 = 0;
            }
            FUN_1400020e8(param_2,local_40,iVar1);
            if (local_40 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14179f3f4 FUN_14179f3f4 body=41 status=ok
// SIG undefined FUN_14179f3f4(void)

void FUN_14179f3f4(longlong param_1)

{
  FUN_14087332c(param_1 + 0x2e0);
  FUN_140873278(param_1);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 14179f41e FUN_14179f41e body=40 status=ok
// SIG undefined FUN_14179f41e(void)

undefined8 FUN_14179f41e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179f446 FUN_14179f446 body=1263 status=ok
// SIG undefined FUN_14179f446(void)

longlong * FUN_14179f446(ulonglong *param_1,longlong *param_2,uint param_3)

{
  ushort *puVar1;
  byte bVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  ushort uVar9;
  byte *pbVar10;
  void *pvVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ushort uVar19;
  bool bVar20;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  ulonglong local_88;
  longlong *local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = (uint)param_1[2] | param_3;
  *(uint *)(param_1 + 2) = uVar4;
  uVar4 = param_3 - 1 & uVar4;
  uVar12 = (ulonglong)uVar4 - (ulonglong)(uVar4 >> 1 & 0x55555555);
  uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
  uVar16 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar17 = uVar16 >> 0x38;
  uVar12 = *param_1;
  bVar6 = *(byte *)((longlong)param_1 + 0xc);
  if (bVar6 == 0) {
    uVar19 = 8;
  }
  else {
    uVar19 = 8;
    lVar8 = 0;
    do {
      uVar9 = (ushort)*(byte *)(uVar12 + 3 + lVar8);
      if (uVar19 < uVar9) {
        uVar19 = uVar9;
      }
      lVar8 = lVar8 + 6;
    } while ((ulonglong)((uint)bVar6 + (uint)bVar6) * 3 != lVar8);
  }
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  FUN_14086fe48(local_78,bVar6 + 1);
  lVar8 = (ulonglong)((uint)bVar6 * 2 + 2) * 3;
  bVar2 = (byte)(uVar16 >> 0x38);
  if (uVar17 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)bVar2 + (uint)(bVar2 == 0);
    pbVar10 = (byte *)(uVar12 + 3);
    uVar13 = 0;
    do {
      uVar14 = -(ulonglong)*pbVar10 & (lVar8 + (ulonglong)*pbVar10) - 1;
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      *(short *)(puVar5 + uVar13 * 2) = (short)uVar14;
      lVar8 = pbVar10[-1] + uVar14;
      uVar13 = uVar13 + 1;
      pbVar10 = pbVar10 + 6;
    } while (uVar4 != uVar13);
  }
  uVar13 = lVar8 + 7U & 0xfffffffffffffff8;
  puVar5 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar5 = local_78;
  }
  uVar14 = (ulonglong)uVar4;
  *(short *)(puVar5 + uVar14 * 2) = (short)uVar13;
  uVar13 = uVar13 + 8;
  if (uVar4 < bVar6) {
    pbVar10 = (byte *)(uVar14 * 6 + 3 + uVar12);
    do {
      uVar13 = -(ulonglong)*pbVar10 & (uVar13 + *pbVar10) - 1;
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      *(short *)(puVar5 + uVar14 * 2 + 2) = (short)uVar13;
      uVar14 = uVar14 + 1;
      uVar13 = pbVar10[-1] + uVar13;
      pbVar10 = pbVar10 + 6;
    } while (bVar6 != uVar14);
  }
  uVar14 = *param_1;
  local_88 = uVar14;
  if (((ushort)param_1[1] < uVar19) || (*(ushort *)((longlong)param_1 + 10) < uVar13)) {
    uVar14 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 10) * 2);
    if (uVar13 < uVar14) {
      uVar13 = uVar14;
    }
    *(short *)((longlong)param_1 + 10) = (short)uVar13;
    uVar13 = uVar13 & 0xffff;
    uVar14 = FUN_14001cc68(uVar13,uVar19);
    *param_1 = uVar14;
    local_8c = (undefined4)CONCAT71((int7)(uVar13 >> 8),1);
  }
  else {
    local_8c = 0;
  }
  uVar13 = local_88;
  bVar6 = *(char *)((longlong)param_1 + 0xc) + 1;
  *(byte *)((longlong)param_1 + 0xc) = bVar6;
  uVar18 = (ulonglong)bVar6;
  iVar7 = bVar6 - 1;
  local_80 = param_2;
  if ((int)(uint)bVar2 < iVar7) {
    pbVar10 = (byte *)((ulonglong)bVar6 * 6 + -10 + uVar12);
    uVar14 = (ulonglong)bVar6;
    do {
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      pvVar11 = (void *)(uVar13 + *(ushort *)(pbVar10 + -2));
      if ((ulonglong)*(ushort *)(pbVar10 + -2) == 0xffff) {
        pvVar11 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar5 + uVar14 * 2 + -2) + *param_1),pvVar11,
              (ulonglong)*pbVar10);
      uVar18 = uVar14 - 1;
      pbVar10 = pbVar10 + -6;
      lVar8 = uVar14 - 2;
      uVar14 = uVar18;
    } while ((longlong)uVar17 < lVar8);
    iVar7 = (int)uVar18 + -1;
    uVar14 = *param_1;
  }
  uVar13 = local_88;
  puVar5 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar5 = local_78;
  }
  *(undefined8 *)(uVar14 + *(ushort *)(puVar5 + (longlong)iVar7 * 2)) = 0;
  if (1 < (int)uVar18) {
    uVar14 = (ulonglong)((int)uVar18 - 2);
    pbVar10 = (byte *)(uVar14 * 6 + 2 + uVar12);
    do {
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      pvVar11 = (void *)(uVar13 + *(ushort *)(pbVar10 + -2));
      if ((ulonglong)*(ushort *)(pbVar10 + -2) == 0xffff) {
        pvVar11 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar5 + uVar14 * 2) + *param_1),pvVar11,
              (ulonglong)*pbVar10);
      pbVar10 = pbVar10 + -6;
      bVar20 = uVar14 != 0;
      uVar14 = uVar14 - 1;
    } while (bVar20);
  }
  uVar13 = *param_1;
  bVar6 = *(byte *)((longlong)param_1 + 0xc);
  uVar4 = (uint)bVar6;
  iVar7 = bVar6 - 1;
  uVar14 = uVar13;
  if ((int)(uint)bVar2 < iVar7) {
    lVar8 = (ulonglong)((uint)bVar6 + (uint)bVar6) * 3;
    uVar14 = (ulonglong)(uint)bVar6;
    do {
      *(undefined2 *)((uVar13 - 2) + lVar8) = *(undefined2 *)((uVar12 - 8) + lVar8);
      *(undefined4 *)((uVar13 - 6) + lVar8) = *(undefined4 *)((uVar12 - 0xc) + lVar8);
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      *(undefined2 *)((uVar13 - 6) + lVar8) = *(undefined2 *)(puVar5 + uVar14 * 2 + -2);
      uVar18 = uVar14 - 1;
      lVar8 = lVar8 + -6;
      lVar15 = uVar14 - 2;
      uVar14 = uVar18;
    } while ((longlong)uVar17 < lVar15);
    uVar4 = (uint)uVar18;
    iVar7 = uVar4 - 1;
    uVar14 = *param_1;
  }
  puVar1 = (ushort *)(uVar13 + (longlong)iVar7 * 6);
  puVar5 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar5 = local_78;
  }
  uVar19 = *(ushort *)(puVar5 + (longlong)iVar7 * 2);
  *puVar1 = 0xffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  if (*param_1 <= uVar19 + uVar14) {
    *puVar1 = (short)(uVar19 + uVar14) - (short)*param_1;
  }
  puVar1[1] = 0x808;
  puVar1[2] = 0;
  if (1 < (int)uVar4) {
    uVar17 = (ulonglong)(uVar4 - 2);
    lVar8 = uVar17 * 6;
    do {
      *(undefined2 *)(uVar13 + 4 + lVar8) = *(undefined2 *)(uVar12 + 4 + lVar8);
      *(undefined4 *)(uVar13 + lVar8) = *(undefined4 *)(uVar12 + lVar8);
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      *(undefined2 *)(uVar13 + lVar8) = *(undefined2 *)(puVar5 + uVar17 * 2);
      lVar8 = lVar8 + -6;
      bVar20 = uVar17 != 0;
      uVar17 = uVar17 - 1;
    } while (bVar20);
  }
  if (((byte)local_8c & local_88 != 0) == 1) {
    FUN_1400020a8();
  }
  iVar7 = (int)param_1[4];
  *(uint *)(param_1 + 4) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0x24) < iVar7 + 1U) {
    FUN_14086feca(param_1 + 3,iVar7);
  }
  lVar8 = (uVar16 >> 0x38) * 0x10;
  memmove((void *)(param_1[3] + lVar8 + 0x10),(void *)(param_1[3] + lVar8),
          (ulonglong)(iVar7 - (uint)bVar2) << 4);
  plVar3 = local_80;
  uVar12 = param_1[3];
  *(undefined1 **)(uVar12 + lVar8) = &LAB_147580080;
  *(undefined1 **)(uVar12 + 8 + lVar8) = &LAB_141108666;
  lVar8 = 0;
  if ((ulonglong)*puVar1 != 0xffff) {
    lVar8 = *param_1 + (ulonglong)*puVar1;
  }
  *local_80 = (ulonglong)(byte)puVar1[2] + lVar8;
  *(undefined1 *)(local_80 + 1) = *(undefined1 *)((longlong)puVar1 + 5);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 14179f936 FUN_14179f936 body=29 status=ok
// SIG undefined FUN_14179f936(void)

undefined8 FUN_14179f936(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179f954 FUN_14179f954 body=29 status=ok
// SIG undefined FUN_14179f954(void)

undefined8 FUN_14179f954(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179f972 FUN_14179f972 body=90 status=ok
// SIG undefined FUN_14179f972(void)

void FUN_14179f972(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x8c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x80),
              (longlong)*(int *)((longlong)param_1 + 0x88) << 3);
      FUN_1446efa72((longlong)param_1 + 0x80,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 14179f9d2 FUN_14179f9d2 body=59 status=ok
// SIG undefined FUN_14179f9d2(void)

void FUN_14179f9d2(longlong param_1)

{
  FUN_144757f48(param_1,8);
  if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 8) & 0x30) != 0) {
    FUN_144757f48(param_1,*(uint *)(*(longlong *)(param_1 + 0x20) + 8) & 0x69);
  }
  FUN_140894914(param_1);
  return;
}



// FUNCTION 14179fa18 FUN_14179fa18 body=161 status=ok
// SIG undefined FUN_14179fa18(void)

void FUN_14179fa18(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(char *)(param_1 + 0x169) == '\0') && (*(char *)(param_1 + 0xf8) == '\x01')) {
    *(undefined1 *)(param_1 + 0x169) = 1;
    *(undefined1 *)(param_1 + 0x168) = 1;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar1 == '\0') {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 14179face FUN_14179face body=601 status=ok
// SIG undefined FUN_14179face(void)

void FUN_14179face(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  undefined2 *local_80;
  code *local_78;
  code *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined2 local_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar4 = *(undefined4 **)(param_3 + 8);
  if (puVar4 == (undefined4 *)0x0) {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
  }
  else {
    local_58 = *puVar4;
    uStack_54 = puVar4[1];
    uStack_50 = puVar4[2];
    uStack_4c = puVar4[3];
  }
  lVar6 = FUN_14009d2a0();
  uVar2 = *(undefined2 *)(lVar6 + 0x6a);
  lVar6 = FUN_14073751e();
  if (DAT_14c951858 == 0) {
    local_80 = &local_48;
    local_48 = 0x2820;
    uStack_46 = 0x449e;
    uStack_44 = 1;
    uStack_42 = 0;
    local_70 = FUN_14081d0ea;
    local_78 = FUN_14081d0ea;
    local_88 = &LAB_1468c5283;
    local_90 = FUN_142809da0;
    local_98 = L"Engine";
    local_a0 = 0x400000000;
    local_a8 = 0x10000000;
    local_b0 = 8;
    local_b8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar7 = *(longlong *)(param_1 + -0x1e8);
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (lVar9 = lVar7,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
         != lVar6 + 0x30)) {
        lVar9 = 0;
      }
    } while ((lVar9 == 0) && (lVar7 = *(longlong *)(lVar7 + 0x20), lVar7 != 0));
  }
  puVar4 = *(undefined4 **)(param_3 + 8);
  if (puVar4 == (undefined4 *)0x0) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = 0;
    uStack_5c = 0;
  }
  else {
    local_68 = *puVar4;
    uStack_64 = puVar4[1];
    uStack_60 = puVar4[2];
    uStack_5c = puVar4[3];
  }
  iVar5 = FUN_140c7f2b4(lVar9,&local_68);
  uVar8 = 0;
  if (iVar5 != -1) {
    uVar8 = (uint)((longlong)iVar5 * 0xf0 + *(longlong *)(lVar9 + 0x60) != 0) << 0x10;
  }
  lVar6 = FUN_14009d2a0();
  uVar3 = *(ushort *)(lVar6 + 0x138);
  uStack_46 = (undefined2)local_58;
  uStack_44 = (undefined2)((uint)local_58 >> 0x10);
  uStack_42 = (undefined2)uStack_54;
  uStack_40 = (undefined2)((uint)uStack_54 >> 0x10);
  uStack_3e = (undefined2)uStack_50;
  uStack_3c = (undefined2)((uint)uStack_50 >> 0x10);
  uStack_3a = (undefined2)uStack_4c;
  uStack_38 = (undefined2)((uint)uStack_4c >> 0x10);
  iVar5 = *(int *)(param_4 + 0x50);
  *(uint *)(param_4 + 0x50) = iVar5 + 1U;
  if (*(uint *)(param_4 + 0x54) < iVar5 + 1U) {
    FUN_140561fb4(param_4,iVar5);
  }
  lVar6 = *(longlong *)(param_4 + 0x48);
  if (*(longlong *)(param_4 + 0x48) == 0) {
    lVar6 = param_4;
  }
  puVar1 = (undefined8 *)(lVar6 + (longlong)iVar5 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_14055f024(puVar1);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) | 3;
  *puVar1 = &PTR_FUN_14a499430;
  *(undefined2 *)(puVar1 + 1) = uVar2;
  *(uint *)((longlong)puVar1 + 10) = CONCAT22(uStack_46,local_48);
  *(uint *)((longlong)puVar1 + 0xe) = CONCAT22(uStack_42,uStack_44);
  *(uint *)((longlong)puVar1 + 0x12) = CONCAT22(uStack_3e,uStack_40);
  *(uint *)((longlong)puVar1 + 0x16) = CONCAT22(uStack_3a,uStack_3c);
  *(undefined2 *)((longlong)puVar1 + 0x1a) = uStack_38;
  *(undefined1 *)((longlong)puVar1 + 0x1c) = 1;
  *(uint *)(puVar1 + 4) = uVar8 | uVar3;
  *(undefined1 *)((longlong)puVar1 + 0x24) = 0;
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14179fd28 FUN_14179fd28 body=124 status=ok
// SIG undefined FUN_14179fd28(void)

void FUN_14179fd28(longlong param_1)

{
  FUN_14024ff87(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140922698(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1409226d0(param_1);
  return;
}



// FUNCTION 14179fda4 FUN_14179fda4 body=52 status=ok
// SIG undefined FUN_14179fda4(void)

void FUN_14179fda4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a497dd0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  return;
}



// FUNCTION 14179fdd8 FUN_14179fdd8 body=65 status=ok
// SIG undefined FUN_14179fdd8(void)

undefined8 * FUN_14179fdd8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a493f70;
  FUN_140bb7e7c(param_1 + 0x20);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179fe1a FUN_14179fe1a body=70 status=ok
// SIG undefined FUN_14179fe1a(void)

undefined8 * FUN_14179fe1a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a497dd0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14179fe60 FUN_14179fe60 body=227 status=ok
// SIG undefined FUN_14179fe60(void)

void FUN_14179fe60(longlong param_1,undefined8 param_2,longlong param_3,undefined1 *param_4)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = *(ushort *)(param_1 + 8);
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_3 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 == 0 || iVar5 < iVar3) goto LAB_14179fee4;
  if (iVar3 == 0) {
LAB_14179fea8:
    if (*(int *)(param_3 + 0x24) <= (int)(uint)uVar2) {
      *(undefined4 *)(param_3 + 0x24) = 0x100;
      FUN_14497ddce(param_3,iVar3);
      iVar5 = *(int *)(param_3 + 0x20) + iVar7;
    }
    iVar6 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar6 = iVar5;
    }
    *(int *)(param_3 + 0x20) = iVar5;
    if (iVar5 % 0x20 != 0) {
      bVar4 = -(char)(iVar5 % 0x20);
      *(uint *)(param_3 + (longlong)(iVar6 >> 5) * 4) =
           (uint)(*(int *)(param_3 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
           (bVar4 & 0x1f);
    }
  }
  else {
    iVar6 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar6 = iVar3 + -1;
    }
    if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14179fea8;
    *(int *)(param_3 + 0x20) = iVar5;
  }
  FUN_1447c45ca(param_3,iVar3,iVar7,0);
LAB_14179fee4:
  puVar1 = (uint *)(param_3 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  if (*(char *)(param_1 + 0x22) == '\x01') {
    FUN_140dba9e6(param_3,*(undefined2 *)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 0x24) == '\x01') {
    *param_4 = 1;
  }
  return;
}



// FUNCTION 14179ff5a FUN_14179ff5a body=55 status=ok
// SIG undefined FUN_14179ff5a(void)

void FUN_14179ff5a(void)

{
  char cVar1;
  longlong lVar2;
  
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x2b0))();
    if (cVar1 != '\0') {
      lVar2 = FUN_140e3e8a6(DAT_14cb0d2b0);
      if (lVar2 != 0) {
        *(undefined1 *)(lVar2 + 0x48) = 1;
      }
    }
  }
  return;
}



// FUNCTION 14179ff92 FUN_14179ff92 body=293 status=ok
// SIG undefined FUN_14179ff92(void)

undefined4 *
FUN_14179ff92(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405dc782(param_1,local_50);
  puVar1 = (uint *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  local_48[1] = *puVar1;
  local_48[2] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_140263f5a(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140264164(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a00bd FUN_1417a00bd body=55 status=ok
// SIG undefined FUN_1417a00bd(void)

void FUN_1417a00bd(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140a823f6(puVar1,param_1);
  *(undefined2 *)(puVar1 + 5) = 0;
  *(undefined1 *)(puVar1 + 6) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  *puVar1 = &PTR_FUN_14a4a55c0;
  puVar1[8] = 0;
  return;
}



// FUNCTION 1417a00f4 FUN_1417a00f4 body=40 status=ok
// SIG undefined FUN_1417a00f4(void)

undefined8 FUN_1417a00f4(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a011c FUN_1417a011c body=2477 status=ok
// SIG undefined FUN_1417a011c(void)

void FUN_1417a011c(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  byte bVar4;
  void *pvVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  undefined ****ppppuVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  longlong local_138;
  longlong lStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  longlong local_110;
  longlong lStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong local_f0;
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined5 uStack_a0;
  undefined3 local_9b;
  undefined5 uStack_98;
  undefined ***local_90;
  char cStack_88;
  undefined7 uStack_87;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  longlong lStack_58;
  byte local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(int *)(param_3 + 0x20) == 0) {
    fVar16 = *(float *)(param_3 + 0x14) - *(float *)(param_3 + 8);
    auVar17 = roundps(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16),1);
    if (-1 < (int)auVar17._0_4_ + (*(int *)(param_3 + 0x10) - *(int *)(param_3 + 4))) {
      FUN_14055a9ea(local_148,param_3);
      uVar12 = *(uint *)(param_1 + 0x80);
      if (0 < (int)uVar12) {
        lVar8 = *(longlong *)(param_1 + 0x78);
        iVar10 = SUB84(local_148._8_8_,4) +
                 *(int *)(&DAT_14a46e600 + (ulonglong)((char)local_148._8_8_ == '\x01') * 4);
        iVar15 = 0;
        uVar13 = (ulonglong)uVar12;
        do {
          uVar13 = uVar13 >> 1;
          uVar14 = (uint)uVar13 + iVar15;
          if (*(int *)(lVar8 + (ulonglong)uVar14 * 4) <= iVar10) {
            iVar15 = uVar14 + (uVar12 & 1);
          }
          bVar6 = 1 < uVar12;
          uVar12 = (uint)uVar13;
        } while (bVar6);
        if (0 < iVar15) {
          uVar13 = (ulonglong)(iVar15 - 1);
          if (iVar10 <= *(int *)(lVar8 + uVar13 * 4)) {
            if (iVar15 == 1) goto LAB_1417a0569;
            uVar13 = (ulonglong)(iVar15 - 2);
          }
          cVar7 = *(char *)(*(longlong *)(param_1 + 0x90) + uVar13);
          if (cVar7 == '\x02') {
            cVar7 = FUN_1400a246c(local_148,lVar8 + uVar13 * 4);
            if (cVar7 == '\0') goto LAB_1417a0569;
            local_128 = (undefined4)param_5[0x24];
            local_138 = param_5[0x22];
            lStack_130 = param_5[0x23];
            uStack_124 = (undefined4)*(undefined8 *)((longlong)param_5 + 0x124);
            uStack_120 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x124) >> 0x20)
            ;
            uStack_11c = (undefined4)*(undefined8 *)((longlong)param_5 + 300);
            uStack_118 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 300) >> 0x20);
            local_110 = param_5[0x27];
            lStack_108 = param_5[0x28];
            local_100 = (undefined4)param_5[0x29];
            uStack_fc = *(undefined4 *)((longlong)param_5 + 0x14c);
            uStack_f8 = (undefined4)param_5[0x2a];
            uStack_f4 = *(undefined4 *)((longlong)param_5 + 0x154);
            local_f0 = param_5[0x2b];
            local_e0 = (undefined4)param_5[0x2d];
            local_e8 = param_5[0x2c];
            local_d8 = 0;
            iVar10 = (int)param_5[0x2f];
            lVar8 = param_5[0x2e];
            local_d0 = CONCAT44(local_d0._4_4_,iVar10);
            if (iVar10 == 0) {
              local_d0 = 0;
            }
            else {
              FUN_14753cf4a(&local_d8,iVar10,0);
              FUN_14753cfbd(local_d8,lVar8,iVar10);
            }
            local_c8 = (void *)0x0;
            uVar12 = *(uint *)(param_5 + 0x31);
            pvVar5 = (void *)param_5[0x30];
            local_c0 = CONCAT44(local_c0._4_4_,uVar12);
            if ((longlong)(int)uVar12 == 0) {
              local_c0 = (ulonglong)uVar12;
            }
            else {
              FUN_1456c5740(&local_c8,uVar12,0);
              memcpy(local_c8,pvVar5,(longlong)(int)uVar12 << 3);
            }
            local_b8 = (undefined1)param_5[0x32];
            local_b0 = (void *)0x0;
            uVar12 = *(uint *)(param_5 + 0x34);
            pvVar5 = (void *)param_5[0x33];
            local_a8 = CONCAT44(local_a8._4_4_,uVar12);
            if ((longlong)(int)uVar12 == 0) {
              local_a8 = (ulonglong)uVar12;
            }
            else {
              FUN_1447bda9e(&local_b0,uVar12,0);
              memcpy(local_b0,pvVar5,(longlong)(int)uVar12 << 2);
            }
            uStack_98 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x1ad) >> 0x18);
            uStack_a0 = (undefined5)param_5[0x35];
            local_9b = (undefined3)((ulonglong)param_5[0x35] >> 0x28);
            local_90 = (undefined ***)&PTR_FUN_14a4c0850;
            cStack_88 = '\x02';
          }
          else {
            local_128 = (undefined4)param_5[0x24];
            local_138 = param_5[0x22];
            lStack_130 = param_5[0x23];
            uStack_124 = (undefined4)*(undefined8 *)((longlong)param_5 + 0x124);
            uStack_120 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x124) >> 0x20)
            ;
            uStack_11c = (undefined4)*(undefined8 *)((longlong)param_5 + 300);
            uStack_118 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 300) >> 0x20);
            local_110 = param_5[0x27];
            lStack_108 = param_5[0x28];
            local_100 = (undefined4)param_5[0x29];
            uStack_fc = *(undefined4 *)((longlong)param_5 + 0x14c);
            uStack_f8 = (undefined4)param_5[0x2a];
            uStack_f4 = *(undefined4 *)((longlong)param_5 + 0x154);
            local_f0 = param_5[0x2b];
            local_e0 = (undefined4)param_5[0x2d];
            local_e8 = param_5[0x2c];
            local_d8 = 0;
            iVar10 = (int)param_5[0x2f];
            lVar8 = param_5[0x2e];
            local_d0 = CONCAT44(local_d0._4_4_,iVar10);
            if (iVar10 == 0) {
              local_d0 = 0;
            }
            else {
              FUN_14753cf4a(&local_d8,iVar10,0);
              FUN_14753cfbd(local_d8,lVar8,iVar10);
            }
            local_c8 = (void *)0x0;
            uVar12 = *(uint *)(param_5 + 0x31);
            pvVar5 = (void *)param_5[0x30];
            local_c0 = CONCAT44(local_c0._4_4_,uVar12);
            if ((longlong)(int)uVar12 == 0) {
              local_c0 = (ulonglong)uVar12;
            }
            else {
              FUN_1456c5740(&local_c8,uVar12,0);
              memcpy(local_c8,pvVar5,(longlong)(int)uVar12 << 3);
            }
            local_b8 = (undefined1)param_5[0x32];
            local_b0 = (void *)0x0;
            uVar12 = *(uint *)(param_5 + 0x34);
            pvVar5 = (void *)param_5[0x33];
            local_a8 = CONCAT44(local_a8._4_4_,uVar12);
            if ((longlong)(int)uVar12 == 0) {
              local_a8 = (ulonglong)uVar12;
            }
            else {
              FUN_1447bda9e(&local_b0,uVar12,0);
              memcpy(local_b0,pvVar5,(longlong)(int)uVar12 << 2);
            }
            uStack_98 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x1ad) >> 0x18);
            uStack_a0 = (undefined5)param_5[0x35];
            local_9b = (undefined3)((ulonglong)param_5[0x35] >> 0x28);
            local_90 = (undefined ***)&PTR_FUN_14a4c0850;
            cStack_88 = cVar7;
          }
          local_50 = local_50 | 3;
          local_90 = (undefined ***)&PTR_FUN_14a4c0850;
          local_80 = local_80 & 0xffffff00;
          iVar10 = (int)param_5[1];
          *(uint *)(param_5 + 1) = iVar10 + 1U;
          if (*(uint *)((longlong)param_5 + 0xc) < iVar10 + 1U) {
            FUN_140ac5684(param_5,iVar10);
          }
          lVar8 = *param_5;
          lVar11 = (longlong)iVar10 * 0xf0;
          *(undefined4 *)(lVar8 + 0x20 + lVar11) = uStack_118;
          puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar11);
          *puVar1 = CONCAT44(uStack_124,local_128);
          puVar1[1] = CONCAT44(uStack_11c,uStack_120);
          *(longlong *)(lVar8 + lVar11) = local_138;
          ((longlong *)(lVar8 + lVar11))[1] = lStack_130;
          *(longlong *)(lVar8 + 0x48 + lVar11) = local_f0;
          puVar2 = (undefined4 *)(lVar8 + 0x38 + lVar11);
          *puVar2 = local_100;
          puVar2[1] = uStack_fc;
          puVar2[2] = uStack_f8;
          puVar2[3] = uStack_f4;
          plVar3 = (longlong *)(lVar8 + 0x28 + lVar11);
          *plVar3 = local_110;
          plVar3[1] = lStack_108;
          *(longlong *)(lVar8 + 0x50 + lVar11) = local_e8;
          *(undefined4 *)(lVar8 + 0x58 + lVar11) = local_e0;
          *(undefined8 *)(lVar8 + 0x60 + lVar11) = 0;
          *(longlong *)(lVar8 + 0x60 + lVar11) = local_d8;
          local_d8 = 0;
          *(undefined4 *)(lVar8 + 0x68 + lVar11) = (undefined4)local_d0;
          *(undefined4 *)(lVar8 + 0x6c + lVar11) = local_d0._4_4_;
          local_d0 = 0;
          *(undefined8 *)(lVar8 + 0x70 + lVar11) = 0;
          *(void **)(lVar8 + 0x70 + lVar11) = local_c8;
          local_c8 = (void *)0x0;
          *(undefined4 *)(lVar8 + 0x78 + lVar11) = (undefined4)local_c0;
          *(undefined4 *)(lVar8 + 0x7c + lVar11) = local_c0._4_4_;
          local_c0 = 0;
          *(undefined1 *)(lVar8 + 0x80 + lVar11) = local_b8;
          *(undefined8 *)(lVar8 + 0x88 + lVar11) = 0;
          *(void **)(lVar8 + 0x88 + lVar11) = local_b0;
          local_b0 = (void *)0x0;
          *(undefined4 *)(lVar8 + 0x90 + lVar11) = (undefined4)local_a8;
          *(undefined4 *)(lVar8 + 0x94 + lVar11) = local_a8._4_4_;
          local_a8 = 0;
          *(ulonglong *)(lVar8 + 0x9d + lVar11) = CONCAT53(uStack_98,local_9b);
          *(ulonglong *)(lVar8 + 0x98 + lVar11) = CONCAT35(local_9b,uStack_a0);
          bVar4 = *(byte *)(lVar8 + 0xe8 + lVar11);
          *(byte *)(lVar8 + 0xe8 + lVar11) = bVar4 & 0xfc | 2;
          if ((local_50 & 1) != 0) {
            lVar8 = lVar8 + lVar11;
            *(byte *)(lVar8 + 0xe8) = bVar4 | 3;
            *(byte *)(lVar8 + 0xe8) = *(byte *)(lVar8 + 0xe8) & 0xfd | local_50 & 2;
            *(longlong *)(lVar8 + 0xd8) = local_60;
            *(longlong *)(lVar8 + 0xe0) = lStack_58;
            *(longlong *)(lVar8 + 200) = local_70;
            *(longlong *)(lVar8 + 0xd0) = lStack_68;
            *(uint *)(lVar8 + 0xb8) = local_80;
            *(undefined4 *)(lVar8 + 0xbc) = uStack_7c;
            *(undefined4 *)(lVar8 + 0xc0) = uStack_78;
            *(undefined4 *)(lVar8 + 0xc4) = uStack_74;
            *(undefined ****)(lVar8 + 0xa8) = local_90;
            *(ulonglong *)(lVar8 + 0xb0) = CONCAT71(uStack_87,cStack_88);
            local_50 = local_50 & 0xfe;
          }
          if ((local_50 & 1) != 0) {
            ppppuVar9 = &local_90;
            if ((local_50 & 2) == 0) {
              ppppuVar9 = (undefined ****)local_90;
            }
            local_50 = local_50 & 0xfe;
            (*(code *)**ppppuVar9)(ppppuVar9,0);
            if ((local_50 & 2) == 0) {
              FUN_1400020a8(local_90);
            }
          }
          if (local_b0 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_c8 != (void *)0x0) {
            FUN_1400020a8();
          }
          FUN_1447bda9c(local_d8,local_d0 & 0xffffffff);
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
        }
      }
      goto LAB_1417a0569;
    }
  }
  local_128 = (undefined4)param_5[0x24];
  local_138 = param_5[0x22];
  lStack_130 = param_5[0x23];
  uStack_124 = (undefined4)*(undefined8 *)((longlong)param_5 + 0x124);
  uStack_120 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x124) >> 0x20);
  uStack_11c = (undefined4)*(undefined8 *)((longlong)param_5 + 300);
  uStack_118 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_5 + 300) >> 0x20);
  local_110 = param_5[0x27];
  lStack_108 = param_5[0x28];
  local_100 = (undefined4)param_5[0x29];
  uStack_fc = *(undefined4 *)((longlong)param_5 + 0x14c);
  uStack_f8 = (undefined4)param_5[0x2a];
  uStack_f4 = *(undefined4 *)((longlong)param_5 + 0x154);
  local_f0 = param_5[0x2b];
  FUN_144a3f8b4(&local_e8,param_5 + 0x2c);
  FUN_144b1f2a6(&local_c8,param_5 + 0x30);
  uStack_a0 = (undefined5)param_5[0x35];
  local_9b = (undefined3)*(undefined8 *)((longlong)param_5 + 0x1ad);
  uStack_98 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_5 + 0x1ad) >> 0x18);
  local_50 = local_50 | 3;
  local_90 = (undefined ***)&PTR_FUN_14a4c0850;
  cStack_88 = '\x01';
  local_80 = local_80 & 0xffffff00;
  iVar10 = (int)param_5[1];
  *(uint *)(param_5 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar10 + 1U) {
    FUN_140ac5684(param_5,iVar10);
  }
  lVar8 = *param_5;
  plVar3 = (longlong *)(lVar8 + (longlong)iVar10 * 0xf0);
  *(undefined4 *)(plVar3 + 4) = uStack_118;
  plVar3[2] = CONCAT44(uStack_124,local_128);
  plVar3[3] = CONCAT44(uStack_11c,uStack_120);
  *plVar3 = local_138;
  plVar3[1] = lStack_130;
  plVar3[9] = local_f0;
  *(undefined4 *)(plVar3 + 7) = local_100;
  *(undefined4 *)((longlong)plVar3 + 0x3c) = uStack_fc;
  *(undefined4 *)(plVar3 + 8) = uStack_f8;
  *(undefined4 *)((longlong)plVar3 + 0x44) = uStack_f4;
  plVar3[5] = local_110;
  plVar3[6] = lStack_108;
  plVar3[10] = local_e8;
  *(undefined4 *)(plVar3 + 0xb) = local_e0;
  plVar3[0xc] = 0;
  plVar3[0xc] = local_d8;
  local_d8 = 0;
  *(undefined4 *)(plVar3 + 0xd) = (undefined4)local_d0;
  *(undefined4 *)((longlong)plVar3 + 0x6c) = local_d0._4_4_;
  local_d0 = 0;
  plVar3[0xe] = 0;
  plVar3[0xe] = (longlong)local_c8;
  local_c8 = (void *)0x0;
  *(undefined4 *)(plVar3 + 0xf) = (undefined4)local_c0;
  *(undefined4 *)((longlong)plVar3 + 0x7c) = local_c0._4_4_;
  local_c0 = 0;
  *(undefined1 *)(plVar3 + 0x10) = local_b8;
  plVar3[0x11] = 0;
  plVar3[0x11] = (longlong)local_b0;
  local_b0 = (void *)0x0;
  *(undefined4 *)(plVar3 + 0x12) = (undefined4)local_a8;
  *(undefined4 *)((longlong)plVar3 + 0x94) = local_a8._4_4_;
  local_a8 = 0;
  *(ulonglong *)((longlong)plVar3 + 0x9d) = CONCAT53(uStack_98,local_9b);
  plVar3[0x13] = CONCAT35(local_9b,uStack_a0);
  *(byte *)(plVar3 + 0x1d) = *(byte *)(plVar3 + 0x1d) & 0xfc | 2;
  FUN_144adeb48(plVar3 + 0x15);
  if ((local_50 & 1) != 0) {
    lVar8 = lVar8 + (longlong)iVar10 * 0xf0;
    *(byte *)(lVar8 + 0xe8) = *(byte *)(lVar8 + 0xe8) | 1;
    *(byte *)(lVar8 + 0xe8) = *(byte *)(lVar8 + 0xe8) & 0xfd | local_50 & 2;
    plVar3[0x1b] = local_60;
    plVar3[0x1c] = lStack_58;
    plVar3[0x19] = local_70;
    plVar3[0x1a] = lStack_68;
    plVar3[0x17] = CONCAT44(uStack_7c,local_80);
    plVar3[0x18] = CONCAT44(uStack_74,uStack_78);
    plVar3[0x15] = (longlong)local_90;
    plVar3[0x16] = CONCAT71(uStack_87,cStack_88);
    local_50 = local_50 & 0xfe;
  }
  if ((local_50 & 1) != 0) {
    ppppuVar9 = &local_90;
    if ((local_50 & 2) == 0) {
      ppppuVar9 = (undefined ****)local_90;
    }
    local_50 = local_50 & 0xfe;
    (*(code *)**ppppuVar9)(ppppuVar9,0);
    if ((local_50 & 2) == 0) {
      FUN_1400020a8(local_90);
    }
  }
  FUN_144adeafa(&local_110);
LAB_1417a0569:
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a0aca FUN_1417a0aca body=192 status=ok
// SIG undefined FUN_1417a0aca(void)

void FUN_1417a0aca(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_1;
  FUN_1406ed334(puVar1,param_1);
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  *(undefined4 *)(puVar1 + 0x23) = DAT_14cab4a28;
  *(undefined4 *)((longlong)puVar1 + 0x11c) = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x1b) = 1;
  *puVar1 = &PTR_FUN_14a4adaa0;
  puVar1[0x24] = &PTR_FUN_14a4ade10;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x136) = 0;
  local_28 = 0x7b5ae74c;
  uStack_24 = 0xd2704c10;
  uStack_20 = 0xa9585798;
  uStack_1c = 0xb212a5a;
  iVar2 = FUN_1448a256a(puVar1);
  *(undefined1 *)(puVar1 + 0xb) = 1;
  *(char *)((longlong)puVar1 + 0x59) = '\x02' - (iVar2 < 6);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a0b8c FUN_1417a0b8c body=515 status=ok
// SIG undefined FUN_1417a0b8c(void)

void FUN_1417a0b8c(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_a8 [34];
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(int *)(param_1 + -0x14) != 0 || *(int *)(param_1 + -0x18) != 0) ||
      *(int *)(param_1 + -0x10) != 0) || *(int *)(param_1 + -0xc) != 0) {
    piVar7 = *(int **)(param_3 + 8);
    if ((piVar7 != (int *)0x0) &&
       (((piVar7[1] != 0 || *piVar7 != 0) || piVar7[2] != 0) || piVar7[3] != 0)) {
      lVar10 = FUN_14009d2a0();
      lVar11 = FUN_14038fb82();
      uVar8 = *(undefined8 *)(param_1 + 8);
      local_80 = *(undefined8 *)(param_1 + 0x10);
      local_81 = *(undefined1 *)(param_1 + 0x18);
      local_82 = *(undefined1 *)(param_1 + 0x19);
      local_83 = *(undefined1 *)(param_1 + 0x1a);
      local_84 = *(undefined1 *)(param_1 + 0x1b);
      local_85 = *(undefined1 *)(param_1 + 0x1c);
      local_86 = *(undefined1 *)(param_1 + 0x1d);
      puVar9 = *(undefined4 **)(param_3 + 8);
      if (puVar9 == (undefined4 *)0x0) {
        local_78 = 0;
        uStack_74 = 0;
        uStack_70 = 0;
        uStack_6c = 0;
      }
      else {
        local_78 = *puVar9;
        uStack_74 = puVar9[1];
        uStack_70 = puVar9[2];
        uStack_6c = puVar9[3];
      }
      uVar2 = *(undefined2 *)(lVar10 + 100);
      uVar3 = *(undefined2 *)(lVar10 + 0x66);
      uVar4 = *(undefined2 *)(lVar11 + 0xdc);
      uVar5 = *(undefined2 *)(lVar11 + 0xde);
      local_50 = *(undefined8 *)(param_1 + -8);
      local_60 = *(undefined4 *)(param_1 + -0x18);
      uStack_5c = *(undefined4 *)(param_1 + -0x14);
      uStack_58 = *(undefined4 *)(param_1 + -0x10);
      uStack_54 = *(undefined4 *)(param_1 + -0xc);
      puVar12 = (undefined8 *)FUN_14001cc68(0x80,8);
      *(undefined2 *)(puVar12 + 1) = uVar2;
      *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
      *(ulonglong *)((longlong)puVar12 + 0xc) = CONCAT44(uStack_74,local_78);
      *(ulonglong *)((longlong)puVar12 + 0x14) = CONCAT44(uStack_6c,uStack_70);
      *(undefined2 *)(puVar12 + 4) = uVar3;
      *(undefined1 *)(puVar12 + 6) = 1;
      puVar12[5] = &LAB_140aa1c3a;
      *(undefined2 *)(puVar12 + 7) = uVar5;
      *(undefined1 *)((longlong)puVar12 + 0x54) = 1;
      *(undefined8 *)((longlong)puVar12 + 0x4c) = local_50;
      *(undefined4 *)((longlong)puVar12 + 0x3c) = local_60;
      *(undefined4 *)(puVar12 + 8) = uStack_5c;
      *(undefined4 *)((longlong)puVar12 + 0x44) = uStack_58;
      *(undefined4 *)(puVar12 + 9) = uStack_54;
      *(undefined2 *)(puVar12 + 0xb) = uVar4;
      *(undefined1 *)((longlong)puVar12 + 0x74) = 1;
      *(undefined8 *)((longlong)puVar12 + 0x5c) = uVar8;
      *(undefined8 *)((longlong)puVar12 + 100) = local_80;
      *(undefined1 *)((longlong)puVar12 + 0x6c) = local_81;
      *(undefined1 *)((longlong)puVar12 + 0x6d) = local_82;
      *(undefined1 *)((longlong)puVar12 + 0x6e) = local_83;
      *(undefined1 *)((longlong)puVar12 + 0x6f) = local_84;
      *(undefined1 *)(puVar12 + 0xe) = local_85;
      *(undefined1 *)((longlong)puVar12 + 0x71) = local_86;
      *(undefined1 *)(puVar12 + 0xf) = 0;
      *puVar12 = &PTR_FUN_14a4c6de0;
      iVar6 = *(int *)(param_4 + 0x50);
      *(uint *)(param_4 + 0x50) = iVar6 + 1U;
      if (*(uint *)(param_4 + 0x54) < iVar6 + 1U) {
        FUN_140561fb4(param_4,iVar6);
      }
      lVar10 = *(longlong *)(param_4 + 0x48);
      if (*(longlong *)(param_4 + 0x48) == 0) {
        lVar10 = param_4;
      }
      puVar1 = (undefined8 *)(lVar10 + (longlong)iVar6 * 0x48);
      *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
      FUN_14055f024(puVar1);
      *(byte *)(puVar1 + 8) = (*(byte *)(puVar1 + 8) & 0xfc) + 1;
      *puVar1 = puVar12;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a0d90 FUN_1417a0d90 body=121 status=ok
// SIG undefined FUN_1417a0d90(void)

void FUN_1417a0d90(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_140836bcc();
  uVar1 = DAT_14cab4a28;
  if (((*(int *)(param_1 + 0xfc) != 0 || *(int *)(param_1 + 0xf8) != 0) ||
      *(int *)(param_1 + 0x100) != 0) || *(int *)(param_1 + 0x104) != 0) {
    if (((*(int *)(param_1 + 0x10c) == 0 && *(int *)(param_1 + 0x108) == 0) &&
        *(int *)(param_1 + 0x110) == 0) && *(int *)(param_1 + 0x114) == 0) {
      *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0xf8);
      *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x100);
      *(undefined4 *)(param_1 + 0x118) = uVar1;
      *(undefined4 *)(param_1 + 0x11c) = 0;
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  return;
}



// FUNCTION 1417a0e09 FUN_1417a0e09 body=79 status=ok
// SIG undefined FUN_1417a0e09(void)

void FUN_1417a0e09(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406ed334(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a4b5dd0;
  puVar1[0x1f] = &PTR_FUN_14a4b6140;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  *(undefined1 *)(puVar1 + 0x1b) = 1;
  *(undefined2 *)(puVar1 + 0xb) = 0x201;
  return;
}



// FUNCTION 1417a0e58 FUN_1417a0e58 body=49 status=ok
// SIG undefined FUN_1417a0e58(void)

longlong FUN_1417a0e58(void)

{
  if (DAT_14cab52f8 == 0) {
    FUN_14073dd9a(&DAT_14cab52f8,&PTR_LAB_14a4be320);
  }
  return DAT_14cab52f8;
}



// FUNCTION 1417a0e8a FUN_1417a0e8a body=57 status=ok
// SIG undefined FUN_1417a0e8a(void)

void FUN_1417a0e8a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4b8650;
  param_1[0x1f] = &PTR_LAB_14a4b89c0;
  FUN_1404db99a(param_1 + 0x20);
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 1417a0ec4 FUN_1417a0ec4 body=67 status=ok
// SIG undefined FUN_1417a0ec4(void)

void FUN_1417a0ec4(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14a4ba098);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  FUN_141001072(param_1,param_2);
  return;
}



// FUNCTION 1417a0f07 FUN_1417a0f07 body=287 status=ok
// SIG undefined FUN_1417a0f07(void)

void FUN_1417a0f07(longlong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406ed334(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a4ba1b0;
  puVar1[0x1f] = &PTR_LAB_14a4ba520;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  *(undefined4 *)(puVar1 + 0x23) = 2;
  *(undefined8 *)((longlong)puVar1 + 0x11c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x124) = 0;
  *(undefined8 *)((longlong)puVar1 + 300) = 0x200000000;
  *(undefined8 *)((longlong)puVar1 + 0x134) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x13c) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x144) = 0;
  puVar1[0x29] = 2;
  puVar1[0x20] = &PTR_FUN_14a4ab330;
  puVar1[0x32] = 0;
  *(undefined4 *)(puVar1 + 0x33) = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x19c) = 0xffffffff00000080;
  puVar1[0x39] = 0;
  *(undefined4 *)(puVar1 + 0x3a) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1ac) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x1dc) = 0;
  puVar1[0x3d] = 0;
  *(undefined4 *)(puVar1 + 0x3e) = 0;
  *(undefined1 *)(puVar1 + 0x1b) = 1;
  if (((*(uint *)(puVar1 + 1) >> 9 & 1) != 0) || (cVar2 = FUN_145c40fca(puVar1,1), cVar2 != '\0')) {
    puVar1[0x13] = 2;
    puVar1[0x14] = 2;
  }
  return;
}



// FUNCTION 1417a1026 FUN_1417a1026 body=652 status=ok
// SIG undefined FUN_1417a1026(void)

void FUN_1417a1026(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  
  lVar7 = FUN_14009d2a0();
  lVar8 = FUN_14038fb82();
  piVar6 = *(int **)(param_3 + 8);
  if (piVar6 == (int *)0x0) {
    iVar11 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar10 = 0;
  }
  else {
    iVar10 = *piVar6;
    iVar14 = piVar6[1];
    iVar13 = piVar6[2];
    iVar11 = piVar6[3];
  }
  if (((iVar13 != 0 || iVar11 != 0) || iVar14 != 0) || iVar10 != 0) {
    lVar15 = param_1 + -0xf8;
    if (lVar15 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar15);
    }
    uVar2 = *(undefined2 *)(lVar8 + 0xe4);
    if ((~DAT_14c950c29 & 1) == 0 && lVar15 != 0) {
      FUN_1456cec3c(lVar15);
    }
    if ((~DAT_14c950c29 & 1) == 0 && lVar15 != 0) {
      FUN_1456cec3c(lVar15);
    }
    uVar3 = *(undefined2 *)(lVar7 + 100);
    if ((lVar15 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar15);
    }
    uVar4 = *(undefined2 *)(lVar7 + 0x66);
    if ((lVar15 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar15);
    }
    if (*(int *)(param_1 + 0xa0) == 0) {
      uVar12 = (uint)*(byte *)(param_1 + 0xbc) << 0x10;
    }
    else {
      uVar12 = 0x10000;
    }
    uVar5 = *(ushort *)(lVar7 + 0xb6);
    if ((lVar15 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar15);
    }
    puVar9 = (undefined8 *)FUN_14001cc68(0x70,8);
    *(undefined2 *)(puVar9 + 1) = uVar2;
    *(undefined1 *)(puVar9 + 3) = 1;
    puVar9[2] = lVar15;
    if ((lVar15 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar15);
    }
    *(undefined2 *)(puVar9 + 4) = uVar3;
    *(undefined1 *)((longlong)puVar9 + 0x34) = 1;
    *(int *)((longlong)puVar9 + 0x24) = iVar10;
    *(int *)(puVar9 + 5) = iVar14;
    *(int *)((longlong)puVar9 + 0x2c) = iVar13;
    *(int *)(puVar9 + 6) = iVar11;
    *(undefined2 *)(puVar9 + 7) = uVar4;
    *(undefined1 *)(puVar9 + 9) = 1;
    puVar9[8] = FUN_1417a6b6c;
    *(uint *)(puVar9 + 10) = uVar12 | uVar5;
    *(undefined1 *)(puVar9 + 0xc) = 1;
    puVar9[0xb] = param_1 + 0x40;
    *(undefined1 *)(puVar9 + 0xd) = 0;
    *puVar9 = &PTR_FUN_14a4c7a40;
    iVar10 = *(int *)(param_4 + 0x50);
    *(uint *)(param_4 + 0x50) = iVar10 + 1U;
    if (*(uint *)(param_4 + 0x54) < iVar10 + 1U) {
      FUN_140561fb4(param_4,iVar10);
    }
    lVar7 = *(longlong *)(param_4 + 0x48);
    if (*(longlong *)(param_4 + 0x48) == 0) {
      lVar7 = param_4;
    }
    puVar1 = (undefined8 *)(lVar7 + (longlong)iVar10 * 0x48);
    *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
    FUN_14055f024(puVar1);
    *(byte *)(puVar1 + 8) = (*(byte *)(puVar1 + 8) & 0xfc) + 1;
    *puVar1 = puVar9;
  }
  return;
}



// FUNCTION 1417a12b2 FUN_1417a12b2 body=54 status=ok
// SIG undefined FUN_1417a12b2(void)

undefined8 * FUN_1417a12b2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7f00;
  FUN_140e127fe(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a12e8 FUN_1417a12e8 body=343 status=ok
// SIG undefined FUN_1417a12e8(void)

undefined8 * FUN_1417a12e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4c7eb0;
  param_1[7] = &PTR_FUN_14a46e9c0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (*(int *)((longlong)param_1 + 0xfc) != 0) {
    FUN_14472eb64(param_1 + 0x1e,0);
  }
  param_1[0x24] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x11c)) {
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0x80;
    FUN_1446efbd8(param_1 + 0x20,0);
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dba90(param_1 + 0x17);
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1 + 7);
  *param_1 = &PTR_FUN_14a47b390;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a1440 FUN_1417a1440 body=258 status=ok
// SIG undefined FUN_1417a1440(void)

void FUN_1417a1440(longlong param_1,uint *param_2,longlong param_3,longlong param_4,longlong param_5
                  ,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [36];
  undefined8 local_74;
  undefined4 local_6c;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  byte local_50;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = param_2[1];
  if (**(int **)(param_1 + -0x28) != 0 || ((byte)uVar2 & 1) != 0) {
    uVar1 = *param_2;
    uVar3 = FUN_140732858();
    if (0 < (int)uVar1) {
      param_6 = param_6 + 8;
      uVar4 = 0;
      do {
        local_68 = *(longlong *)(param_5 + uVar4 * 8);
        if (local_68 != 0) {
          FUN_140bf371a(param_1 + -0xd8,&local_74,&local_68,param_6);
          local_54 = *(undefined4 *)(param_4 + uVar4 * 4);
          local_4a = *(undefined2 *)(param_3 + uVar4 * 2);
          local_58 = local_6c;
          local_60 = local_74;
          local_50 = (byte)uVar2;
          FUN_1449da5a2(uVar3,&local_4a,&local_60);
        }
        uVar4 = uVar4 + 1;
        param_6 = param_6 + 0x14;
      } while (uVar1 != uVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a1544 FUN_1417a1544 body=40 status=ok
// SIG undefined FUN_1417a1544(void)

undefined8 FUN_1417a1544(undefined8 param_1,int param_2)

{
  FUN_1404db908();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a156c FUN_1417a156c body=79 status=ok
// SIG undefined FUN_1417a156c(void)

undefined8 * FUN_1417a156c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4b26d0;
  param_1[0x1f] = &PTR_LAB_14a4b2a40;
  FUN_140e127fe(param_1 + 0x20);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a15bc FUN_1417a15bc body=40 status=ok
// SIG undefined FUN_1417a15bc(void)

undefined8 FUN_1417a15bc(undefined8 param_1,int param_2)

{
  FUN_140aeebc2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a15e4 FUN_1417a15e4 body=365 status=ok
// SIG undefined FUN_1417a15e4(void)

undefined8 * FUN_1417a15e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4ba1b0;
  param_1[0x1f] = &PTR_LAB_14a4ba520;
  param_1[0x20] = &PTR_FUN_14a4ab330;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (*(int *)((longlong)param_1 + 0x1b4) != 0) {
    FUN_14472eb64(param_1 + 0x35,0);
  }
  param_1[0x3b] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x1d4)) {
    *(undefined4 *)((longlong)param_1 + 0x1d4) = 0x80;
    FUN_1446efbd8(param_1 + 0x37,0);
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dba90(param_1 + 0x2e);
  FUN_140f00c57(param_1[0x2c],*(undefined4 *)(param_1 + 0x2d));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1 + 0x20);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a1752 FUN_1417a1752 body=93 status=ok
// SIG undefined FUN_1417a1752(void)

undefined8 * FUN_1417a1752(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4bac20;
  param_1[0x1f] = &PTR_LAB_14a4baf90;
  param_1[0x20] = &PTR_LAB_14a4bafc0;
  FUN_1404dbc70(param_1 + 0x21);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a17b0 FUN_1417a17b0 body=391 status=ok
// SIG undefined FUN_1417a17b0(void)

undefined8 * FUN_1417a17b0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4bef20;
  param_1[0x1f] = &PTR_LAB_14a4bf290;
  param_1[0x20] = &PTR_FUN_14a46cec0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x3d) = 0;
  if (*(int *)((longlong)param_1 + 0x1ec) != 0) {
    FUN_14472eb64(param_1 + 0x3c,0);
  }
  param_1[0x42] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x20c)) {
    *(undefined4 *)((longlong)param_1 + 0x20c) = 0x80;
    FUN_1446efbd8(param_1 + 0x3e,0);
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dba90(param_1 + 0x35);
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_140e91e06(param_1[0x2d],*(undefined4 *)(param_1 + 0x2e));
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1 + 0x20);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a1938 FUN_1417a1938 body=97 status=ok
// SIG undefined FUN_1417a1938(void)

undefined8 * FUN_1417a1938(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4bffe0;
  param_1[0x1f] = &PTR_LAB_14a4c0350;
  if (*(char *)((longlong)param_1 + 0x374) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x374) = 0;
  }
  FUN_1404dbc70(param_1 + 0x27);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a19e8 FUN_1417a19e8 body=181 status=ok
// SIG undefined FUN_1417a19e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1417a19e8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab5418) {
    FUN_144b3d300(&DAT_14cab5418);
    if (DAT_14cab5418 == -1) {
      _DAT_14cab53c8 = &PTR_FUN_14a4c1970;
      DAT_14cab53d0 = 0;
      uRam000000014cab53d8 = 0;
      _DAT_14cab53f8 = 0;
      uRam000000014cab5400 = 0;
      _DAT_14cab5408 = 0;
      _DAT_14cab53e0 = FUN_14009d2a0();
      _DAT_14cab53e8 = 0;
      _DAT_14cab5410 = 0;
      _DAT_14cab53c8 = &PTR_FUN_14a4c1950;
      atexit((_func_5014 *)&LAB_1432f5bcf);
      _Init_thread_footer(&DAT_14cab5418);
    }
  }
  return &DAT_14cab53c8;
}



// FUNCTION 1417a1a9e FUN_1417a1a9e body=181 status=ok
// SIG undefined FUN_1417a1a9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1417a1a9e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab5470) {
    FUN_144b3d300(&DAT_14cab5470);
    if (DAT_14cab5470 == -1) {
      _DAT_14cab5420 = &PTR_FUN_14a4c1b10;
      DAT_14cab5428 = 0;
      uRam000000014cab5430 = 0;
      _DAT_14cab5450 = 0;
      uRam000000014cab5458 = 0;
      _DAT_14cab5460 = 0;
      _DAT_14cab5438 = FUN_14009d2a0();
      _DAT_14cab5440 = 0;
      _DAT_14cab5468 = 0;
      _DAT_14cab5420 = &PTR_FUN_14a4c1af0;
      atexit((_func_5014 *)&LAB_1432f6351);
      _Init_thread_footer(&DAT_14cab5470);
    }
  }
  return &DAT_14cab5420;
}



// FUNCTION 1417a1b54 FUN_1417a1b54 body=181 status=ok
// SIG undefined FUN_1417a1b54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1417a1b54(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab54c8) {
    FUN_144b3d300(&DAT_14cab54c8);
    if (DAT_14cab54c8 == -1) {
      _DAT_14cab5478 = &PTR_FUN_14a4c1cd0;
      DAT_14cab5480 = 0;
      uRam000000014cab5488 = 0;
      _DAT_14cab54a8 = 0;
      uRam000000014cab54b0 = 0;
      _DAT_14cab54b8 = 0;
      _DAT_14cab5490 = FUN_14009d2a0();
      _DAT_14cab5498 = 0;
      _DAT_14cab54c0 = 0;
      _DAT_14cab5478 = &PTR_FUN_14a4c1cb0;
      atexit((_func_5014 *)&LAB_1432f7281);
      _Init_thread_footer(&DAT_14cab54c8);
    }
  }
  return &DAT_14cab5478;
}



// FUNCTION 1417a1c0a FUN_1417a1c0a body=181 status=ok
// SIG undefined FUN_1417a1c0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1417a1c0a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab5520) {
    FUN_144b3d300(&DAT_14cab5520);
    if (DAT_14cab5520 == -1) {
      _DAT_14cab54d0 = &PTR_FUN_14a4c1e70;
      DAT_14cab54d8 = 0;
      uRam000000014cab54e0 = 0;
      _DAT_14cab5500 = 0;
      uRam000000014cab5508 = 0;
      _DAT_14cab5510 = 0;
      _DAT_14cab54e8 = FUN_14009d2a0();
      _DAT_14cab54f0 = 0;
      _DAT_14cab5518 = 0;
      _DAT_14cab54d0 = &PTR_FUN_14a4c1e50;
      atexit((_func_5014 *)&LAB_1432f79f5);
      _Init_thread_footer(&DAT_14cab5520);
    }
  }
  return &DAT_14cab54d0;
}



// FUNCTION 1417a1cc0 FUN_1417a1cc0 body=181 status=ok
// SIG undefined FUN_1417a1cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1417a1cc0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab5578) {
    FUN_144b3d300(&DAT_14cab5578);
    if (DAT_14cab5578 == -1) {
      _DAT_14cab5528 = &PTR_FUN_14a4c2310;
      DAT_14cab5530 = 0;
      uRam000000014cab5538 = 0;
      _DAT_14cab5558 = 0;
      uRam000000014cab5560 = 0;
      _DAT_14cab5568 = 0;
      _DAT_14cab5540 = FUN_14009d2a0();
      _DAT_14cab5548 = 0;
      _DAT_14cab5570 = 0;
      _DAT_14cab5528 = &PTR_FUN_14a4c22f0;
      atexit((_func_5014 *)&LAB_1432f9f05);
      _Init_thread_footer(&DAT_14cab5578);
    }
  }
  return &DAT_14cab5528;
}



// FUNCTION 1417a1d76 FUN_1417a1d76 body=181 status=ok
// SIG undefined FUN_1417a1d76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1417a1d76(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab55d0) {
    FUN_144b3d300(&DAT_14cab55d0);
    if (DAT_14cab55d0 == -1) {
      _DAT_14cab5580 = &PTR_FUN_14a4c24e0;
      DAT_14cab5588 = 0;
      uRam000000014cab5590 = 0;
      _DAT_14cab55b0 = 0;
      uRam000000014cab55b8 = 0;
      _DAT_14cab55c0 = 0;
      _DAT_14cab5598 = FUN_14009d2a0();
      _DAT_14cab55a0 = 0;
      _DAT_14cab55c8 = 0;
      _DAT_14cab5580 = &PTR_FUN_14a4c24c0;
      atexit((_func_5014 *)&LAB_1432fae33);
      _Init_thread_footer(&DAT_14cab55d0);
    }
  }
  return &DAT_14cab5580;
}



// FUNCTION 1417a1e2c FUN_1417a1e2c body=181 status=ok
// SIG undefined FUN_1417a1e2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1417a1e2c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab5628) {
    FUN_144b3d300(&DAT_14cab5628);
    if (DAT_14cab5628 == -1) {
      _DAT_14cab55d8 = &PTR_FUN_14a4c25e0;
      DAT_14cab55e0 = 0;
      uRam000000014cab55e8 = 0;
      _DAT_14cab5608 = 0;
      uRam000000014cab5610 = 0;
      _DAT_14cab5618 = 0;
      _DAT_14cab55f0 = FUN_14009d2a0();
      _DAT_14cab55f8 = 0;
      _DAT_14cab5620 = 0;
      _DAT_14cab55d8 = &PTR_FUN_14a4c25c0;
      atexit((_func_5014 *)&LAB_1432fbd01);
      _Init_thread_footer(&DAT_14cab5628);
    }
  }
  return &DAT_14cab55d8;
}



// FUNCTION 1417a1ee2 FUN_1417a1ee2 body=29 status=ok
// SIG undefined FUN_1417a1ee2(void)

undefined8 FUN_1417a1ee2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a1f00 FUN_1417a1f00 body=29 status=ok
// SIG undefined FUN_1417a1f00(void)

undefined8 FUN_1417a1f00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a1f3a FUN_1417a1f3a body=181 status=ok
// SIG undefined FUN_1417a1f3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1417a1f3a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab5690) {
    FUN_144b3d300(&DAT_14cab5690);
    if (DAT_14cab5690 == -1) {
      _DAT_14cab5640 = &PTR_FUN_14a4c6250;
      DAT_14cab5648 = 0;
      uRam000000014cab5650 = 0;
      _DAT_14cab5670 = 0;
      uRam000000014cab5678 = 0;
      _DAT_14cab5680 = 0;
      _DAT_14cab5658 = FUN_14009d2a0();
      _DAT_14cab5660 = 0;
      _DAT_14cab5688 = 0;
      _DAT_14cab5640 = &PTR_FUN_14a4c6230;
      atexit((_func_5014 *)&LAB_1432fd611);
      _Init_thread_footer(&DAT_14cab5690);
    }
  }
  return &DAT_14cab5640;
}



// FUNCTION 1417a1ff0 FUN_1417a1ff0 body=181 status=ok
// SIG undefined FUN_1417a1ff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1417a1ff0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab56e8) {
    FUN_144b3d300(&DAT_14cab56e8);
    if (DAT_14cab56e8 == -1) {
      _DAT_14cab5698 = &PTR_FUN_14a4c6420;
      DAT_14cab56a0 = 0;
      uRam000000014cab56a8 = 0;
      _DAT_14cab56c8 = 0;
      uRam000000014cab56d0 = 0;
      _DAT_14cab56d8 = 0;
      _DAT_14cab56b0 = FUN_14009d2a0();
      _DAT_14cab56b8 = 0;
      _DAT_14cab56e0 = 0;
      _DAT_14cab5698 = &PTR_FUN_14a4c6400;
      atexit((_func_5014 *)&LAB_1432fe4eb);
      _Init_thread_footer(&DAT_14cab56e8);
    }
  }
  return &DAT_14cab5698;
}



// FUNCTION 1417a20a6 FUN_1417a20a6 body=181 status=ok
// SIG undefined FUN_1417a20a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1417a20a6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab5740) {
    FUN_144b3d300(&DAT_14cab5740);
    if (DAT_14cab5740 == -1) {
      _DAT_14cab56f0 = &PTR_FUN_14a4c65c0;
      DAT_14cab56f8 = 0;
      uRam000000014cab5700 = 0;
      _DAT_14cab5720 = 0;
      uRam000000014cab5728 = 0;
      _DAT_14cab5730 = 0;
      _DAT_14cab5708 = FUN_14009d2a0();
      _DAT_14cab5710 = 0;
      _DAT_14cab5738 = 0;
      _DAT_14cab56f0 = &PTR_FUN_14a4c65a0;
      atexit((_func_5014 *)&LAB_1432fec59);
      _Init_thread_footer(&DAT_14cab5740);
    }
  }
  return &DAT_14cab56f0;
}



// FUNCTION 1417a215c FUN_1417a215c body=29 status=ok
// SIG undefined FUN_1417a215c(void)

undefined8 FUN_1417a215c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a217a FUN_1417a217a body=263 status=ok
// SIG undefined FUN_1417a217a(void)

void FUN_1417a217a(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  short *psVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  psVar1 = (short *)*param_1;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,5);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar3 = *(ulonglong **)(lVar2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar3 + 0x1e) == *psVar1) goto LAB_1417a21cf;
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  puVar3 = (ulonglong *)0x0;
LAB_1417a21cf:
  lVar4 = *param_3;
  if (*(ulonglong *)(lVar2 + 0x20) <= *puVar3) {
    *(int *)(lVar4 + lVar7 * 4) = (int)*puVar3 - (int)*(ulonglong *)(lVar2 + 0x20);
    lVar4 = *param_3;
  }
  lVar5 = 0;
  do {
    if (*(ushort *)(lVar2 + 0xc) != 0) {
      puVar3 = *(ulonglong **)(lVar2 + 0x28);
      lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar3 + 0x1e) == psVar1[lVar5 + 1]) {
          if (puVar3 != (ulonglong *)0x0) {
            if (*(ulonglong *)(lVar2 + 0x20) <= *puVar3) {
              *(int *)(lVar4 + lVar7 * 4 + 4 + lVar5 * 4) =
                   (int)*puVar3 - (int)*(ulonglong *)(lVar2 + 0x20);
            }
          }
          break;
        }
        puVar3 = puVar3 + 4;
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar3 = *(ulonglong **)(lVar2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar3 + 0x1e) == psVar1[4]) goto LAB_1417a2262;
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  puVar3 = (ulonglong *)0x0;
LAB_1417a2262:
  if (*(ulonglong *)(lVar2 + 0x20) <= *puVar3) {
    *(int *)(*param_3 + 0x10 + lVar7 * 4) = (int)*puVar3 - (int)*(ulonglong *)(lVar2 + 0x20);
  }
  return;
}



// FUNCTION 1417a2282 FUN_1417a2282 body=181 status=ok
// SIG undefined FUN_1417a2282(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1417a2282(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab5798) {
    FUN_144b3d300(&DAT_14cab5798);
    if (DAT_14cab5798 == -1) {
      _DAT_14cab5748 = &PTR_FUN_14a4c6760;
      DAT_14cab5750 = 0;
      uRam000000014cab5758 = 0;
      _DAT_14cab5778 = 0;
      uRam000000014cab5780 = 0;
      _DAT_14cab5788 = 0;
      _DAT_14cab5760 = FUN_14009d2a0();
      _DAT_14cab5768 = 0;
      _DAT_14cab5790 = 0;
      _DAT_14cab5748 = &PTR_FUN_14a4c6740;
      atexit((_func_5014 *)&LAB_1432ff3ff);
      _Init_thread_footer(&DAT_14cab5798);
    }
  }
  return &DAT_14cab5748;
}



// FUNCTION 1417a2338 FUN_1417a2338 body=181 status=ok
// SIG undefined FUN_1417a2338(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1417a2338(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab57f0) {
    FUN_144b3d300(&DAT_14cab57f0);
    if (DAT_14cab57f0 == -1) {
      _DAT_14cab57a0 = &PTR_FUN_14a4c6900;
      DAT_14cab57a8 = 0;
      uRam000000014cab57b0 = 0;
      _DAT_14cab57d0 = 0;
      uRam000000014cab57d8 = 0;
      _DAT_14cab57e0 = 0;
      _DAT_14cab57b8 = FUN_14009d2a0();
      _DAT_14cab57c0 = 0;
      _DAT_14cab57e8 = 0;
      _DAT_14cab57a0 = &PTR_FUN_14a4c68e0;
      atexit((_func_5014 *)&LAB_1432ffb6b);
      _Init_thread_footer(&DAT_14cab57f0);
    }
  }
  return &DAT_14cab57a0;
}



// FUNCTION 1417a23ee FUN_1417a23ee body=181 status=ok
// SIG undefined FUN_1417a23ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1417a23ee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab5848) {
    FUN_144b3d300(&DAT_14cab5848);
    if (DAT_14cab5848 == -1) {
      _DAT_14cab57f8 = &PTR_FUN_14a4c6ad0;
      DAT_14cab5800 = 0;
      _DAT_14cab5808 = 0;
      _DAT_14cab5828 = 0;
      uRam000000014cab5830 = 0;
      _DAT_14cab5838 = 0;
      _DAT_14cab5810 = FUN_14009d2a0();
      _DAT_14cab5818 = 0;
      _DAT_14cab5840 = 0;
      _DAT_14cab57f8 = &PTR_FUN_14a4c6ab0;
      atexit(FUN_143300a39);
      _Init_thread_footer(&DAT_14cab5848);
    }
  }
  return &DAT_14cab57f8;
}



// FUNCTION 1417a24a4 FUN_1417a24a4 body=181 status=ok
// SIG undefined FUN_1417a24a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1417a24a4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab58a0) {
    FUN_144b3d300(&DAT_14cab58a0);
    if (DAT_14cab58a0 == -1) {
      _DAT_14cab5850 = &PTR_FUN_14a4c6ca0;
      DAT_14cab5858 = 0;
      uRam000000014cab5860 = 0;
      _DAT_14cab5880 = 0;
      uRam000000014cab5888 = 0;
      _DAT_14cab5890 = 0;
      _DAT_14cab5868 = FUN_14009d2a0();
      _DAT_14cab5870 = 0;
      _DAT_14cab5898 = 0;
      _DAT_14cab5850 = &PTR_FUN_14a4c6c80;
      atexit((_func_5014 *)&LAB_143301923);
      _Init_thread_footer(&DAT_14cab58a0);
    }
  }
  return &DAT_14cab5850;
}



// FUNCTION 1417a255a FUN_1417a255a body=373 status=ok
// SIG undefined FUN_1417a255a(void)

void FUN_1417a255a(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x108;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417a25e6;
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
LAB_1417a25e6:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x108)) {
    uVar7 = uVar5 / 0x108 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x108,8);
  return;
}



// FUNCTION 1417a26d0 FUN_1417a26d0 body=71 status=ok
// SIG undefined FUN_1417a26d0(void)

void FUN_1417a26d0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    lVar2 = param_3[1];
    FUN_140659b5e(param_1 + 0x10,lVar1,(int)lVar2);
    FUN_140659abc(param_1 + 0x28,lVar1,(int)lVar2);
    return;
  }
  return;
}



// FUNCTION 1417a2717 FUN_1417a2717 body=219 status=ok
// SIG undefined FUN_1417a2717(void)

void FUN_1417a2717(longlong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)*param_1;
  FUN_1406ed334(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a4c92e0;
  puVar1[0x1f] = &PTR_LAB_14a4c9650;
  lVar4 = 0x100;
  do {
    FUN_1406ed278((longlong)puVar1 + lVar4);
    lVar4 = lVar4 + 0x110;
  } while (lVar4 != 0x540);
  *(undefined4 *)(puVar1 + 0xa8) = 0;
  *(undefined1 *)(puVar1 + 0x1b) = 1;
  local_48 = 0xd2704c107b5ae74c;
  uStack_40 = 0xb212a5aa9585798;
  iVar3 = FUN_1448a256a(puVar1);
  if (iVar3 < 4) {
    cVar2 = '\0';
  }
  else {
    local_58 = 0xd2704c107b5ae74c;
    uStack_50 = 0xb212a5aa9585798;
    iVar3 = FUN_1448a256a(puVar1);
    cVar2 = '\x02' - (iVar3 < 6);
  }
  *(undefined1 *)(puVar1 + 0xb) = 1;
  *(char *)((longlong)puVar1 + 0x59) = cVar2;
  *(undefined2 *)((longlong)puVar1 + 0xd9) = 0x101;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a27f4 FUN_1417a27f4 body=588 status=ok
// SIG undefined FUN_1417a27f4(void)

void FUN_1417a27f4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_e8 [40];
  undefined **local_c0;
  undefined2 local_b8;
  uint local_b0;
  longlong local_a8;
  undefined1 local_a0;
  uint local_98;
  longlong local_90;
  undefined1 local_88;
  uint local_80;
  longlong local_78;
  undefined1 local_70;
  uint local_68;
  longlong local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined2 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(int *)(param_1 + 0x448) < 1) ||
     (((((*(int *)(param_1 + 0x68) == 0 && (*(char *)(param_1 + 0x84) == '\0')) &&
        (*(int *)(param_1 + 0x178) == 0)) &&
       ((*(char *)(param_1 + 0x194) == '\0' && (*(int *)(param_1 + 0x288) == 0)))) &&
      ((*(char *)(param_1 + 0x2a4) == '\0' &&
       ((*(int *)(param_1 + 0x398) == 0 && (*(char *)(param_1 + 0x3b4) != '\x01'))))))))
  goto LAB_1417a2961;
  lVar2 = FUN_14009d2a0();
  lVar3 = FUN_14038fb82();
  local_b8 = *(undefined2 *)(lVar3 + 0x54);
  uVar1 = *(uint *)(param_1 + 0x448);
  if ((int)uVar1 < 1) {
    local_b0 = (uint)*(ushort *)(lVar2 + 0x7e);
LAB_1417a29e2:
    local_98 = (uint)*(ushort *)(lVar2 + 0x80);
LAB_1417a29f1:
    local_80 = (uint)*(ushort *)(lVar2 + 0x82);
LAB_1417a28f2:
    local_68 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x68) == 0) {
      local_b0 = (uint)*(byte *)(param_1 + 0x84) << 0x10;
    }
    else {
      local_b0 = 0x10000;
    }
    local_b0 = *(ushort *)(lVar2 + 0x7e) | local_b0;
    if (uVar1 == 1) goto LAB_1417a29e2;
    if (*(int *)(param_1 + 0x178) == 0) {
      local_98 = (uint)*(byte *)(param_1 + 0x194) << 0x10;
    }
    else {
      local_98 = 0x10000;
    }
    local_98 = *(ushort *)(lVar2 + 0x80) | local_98;
    if (uVar1 < 3) goto LAB_1417a29f1;
    if (*(int *)(param_1 + 0x288) == 0) {
      local_80 = (uint)*(byte *)(param_1 + 0x2a4) << 0x10;
    }
    else {
      local_80 = 0x10000;
    }
    local_80 = *(ushort *)(lVar2 + 0x82) | local_80;
    if (uVar1 == 3) goto LAB_1417a28f2;
    if (*(int *)(param_1 + 0x398) == 0) {
      local_68 = (uint)*(byte *)(param_1 + 0x3b4) << 0x10;
    }
    else {
      local_68 = 0x10000;
    }
  }
  local_90 = param_1 + 0x118;
  local_78 = param_1 + 0x228;
  local_60 = param_1 + 0x338;
  local_68 = *(ushort *)(lVar2 + 0x84) | local_68;
  local_a0 = 1;
  local_88 = 1;
  local_70 = 1;
  local_58 = 1;
  local_50 = 0;
  local_c0 = &PTR_FUN_14a4c7c80;
  local_a8 = param_1 + 8;
  local_48 = local_b8;
  FUN_1411538b8(&local_c0,param_1 + -0xf8,param_3,param_4);
LAB_1417a2961:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417a2a41 FUN_1417a2a41 body=58 status=ok
// SIG undefined FUN_1417a2a41(void)

void FUN_1417a2a41(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140aec3fa(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a4c9d90;
  puVar1[0x41] = &PTR_FUN_14a4ca100;
  *(undefined2 *)(puVar1 + 0x2d) = 0x101;
  return;
}



// FUNCTION 1417a2a7c FUN_1417a2a7c body=646 status=ok
// SIG undefined FUN_1417a2a7c(void)

void FUN_1417a2a7c(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  undefined2 *local_80;
  code *local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined4 uStack_56;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined4 uStack_4e;
  undefined4 uStack_4a;
  undefined4 local_46;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar8 = FUN_14009d2a0();
  lVar9 = FUN_14038fb82();
  lVar10 = FUN_140bc7f26();
  if (DAT_14c951858 == 0) {
    local_80 = &local_58;
    local_58 = 0x2820;
    uStack_56 = 0x1449e;
    uStack_52 = 0;
    local_70 = FUN_14081d0ea;
    local_78 = FUN_14081d0ea;
    local_88 = &LAB_1468c5283;
    local_90 = FUN_142809da0;
    local_98 = L"Engine";
    local_a0 = 0x400000000;
    local_a8 = 0x10000000;
    local_b0 = 8;
    local_b8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar14 = *(longlong *)(param_1 + -0x1e8);
  if (lVar14 != 0) {
    do {
      if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
         (lVar11 = lVar14,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) {
        lVar11 = 0;
      }
    } while ((lVar11 == 0) && (lVar14 = *(longlong *)(lVar14 + 0x20), lVar14 != 0));
    if (lVar11 != 0) {
      piVar7 = *(int **)(param_3 + 8);
      if (piVar7 == (int *)0x0) {
        local_68 = 0;
        uStack_60 = 0;
        uVar13 = 0;
      }
      else {
        local_68 = *(undefined8 *)piVar7;
        uStack_60 = *(undefined8 *)(piVar7 + 2);
        uVar13 = (uint)(((piVar7[1] != 0 || *piVar7 != 0) || piVar7[2] != 0) || piVar7[3] != 0) <<
                 0x10;
      }
      uVar2 = *(ushort *)(lVar8 + 100);
      uVar3 = *(undefined2 *)(lVar9 + 0xf16);
      iVar6 = *(int *)(param_3 + 0x10);
      uVar4 = *(undefined2 *)(lVar8 + 0x62);
      uVar5 = *(undefined2 *)(lVar8 + 0x6e);
      local_46 = *(undefined4 *)(lVar11 + 0x110);
      uStack_56 = *(undefined4 *)(lVar11 + 0x100);
      uStack_4e = *(undefined4 *)(lVar11 + 0x108);
      uStack_4a = *(undefined4 *)(lVar11 + 0x10c);
      uStack_52 = (undefined2)*(undefined4 *)(lVar11 + 0x104);
      uStack_50 = (undefined2)((uint)*(undefined4 *)(lVar11 + 0x104) >> 0x10);
      puVar12 = (undefined8 *)FUN_14001cc68(0x48,8);
      *(uint *)(puVar12 + 1) = uVar2 | uVar13;
      *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
      *(undefined8 *)((longlong)puVar12 + 0xc) = local_68;
      *(undefined8 *)((longlong)puVar12 + 0x14) = uStack_60;
      *(undefined2 *)(puVar12 + 4) = uVar3;
      *(undefined2 *)((longlong)puVar12 + 0x22) = uVar5;
      *(undefined1 *)((longlong)puVar12 + 0x25) = 1;
      *(bool *)((longlong)puVar12 + 0x24) = 0 < iVar6;
      *(undefined2 *)(puVar12 + 5) = uVar4;
      *(undefined1 *)(puVar12 + 8) = 1;
      *(undefined4 *)((longlong)puVar12 + 0x3c) = local_46;
      *(undefined4 *)((longlong)puVar12 + 0x2c) = uStack_56;
      *(uint *)(puVar12 + 6) = CONCAT22(uStack_50,uStack_52);
      *(undefined4 *)((longlong)puVar12 + 0x34) = uStack_4e;
      *(undefined4 *)(puVar12 + 7) = uStack_4a;
      *(undefined1 *)((longlong)puVar12 + 0x44) = 0;
      *puVar12 = &PTR_FUN_14a4d6f00;
      iVar6 = *(int *)(param_4 + 0x50);
      *(uint *)(param_4 + 0x50) = iVar6 + 1U;
      if (*(uint *)(param_4 + 0x54) < iVar6 + 1U) {
        FUN_140561fb4(param_4,iVar6);
      }
      lVar8 = *(longlong *)(param_4 + 0x48);
      if (*(longlong *)(param_4 + 0x48) == 0) {
        lVar8 = param_4;
      }
      puVar1 = (undefined8 *)(lVar8 + (longlong)iVar6 * 0x48);
      *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
      FUN_14055f024(puVar1);
      *(byte *)(puVar1 + 8) = (*(byte *)(puVar1 + 8) & 0xfc) + 1;
      *puVar1 = puVar12;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a2d03 FUN_1417a2d03 body=240 status=ok
// SIG undefined FUN_1417a2d03(void)

void FUN_1417a2d03(longlong *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar2,param_1);
  *puVar2 = &PTR_FUN_14a4ca590;
  *(undefined4 *)(puVar2 + 7) = 4;
  lVar3 = FUN_14009d2a0();
  *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(lVar3 + 0x70);
  *(undefined1 *)((longlong)puVar2 + 0x32) = 8;
  if ((*(uint *)(puVar2 + 1) & 0x10) != 0) {
    uVar1 = *(undefined2 *)(lVar3 + 0x72);
    local_20 = FUN_145920a42();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_14122166c(&local_20,uVar1);
    local_28 = puVar2[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_30 = FUN_14588a226();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a2df4 FUN_1417a2df4 body=131 status=ok
// SIG undefined FUN_1417a2df4(void)

undefined8 FUN_1417a2df4(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  
  puVar5 = &DAT_14cab5a38;
  if (DAT_14cab5a50 != (undefined2 *)0x0) {
    puVar5 = DAT_14cab5a50;
  }
  lVar3 = (longlong)DAT_14cab5a58;
  if (lVar3 != 0) {
    lVar6 = 0;
    do {
      uVar1 = *(ushort *)((longlong)puVar5 + lVar6);
      lVar4 = FUN_14482820e(param_2 + 0x28);
      if (((uVar1 != 0xffff) &&
          (*(uint *)(lVar4 + 0x20) != (uint)uVar1 &&
           (int)(uint)uVar1 <= (int)*(uint *)(lVar4 + 0x20))) &&
         (uVar2 = *(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4), (uVar2 >> (uVar1 & 0x1f) & 1) != 0
         )) {
        return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
      }
      lVar6 = lVar6 + 6;
    } while (lVar3 * 6 != lVar6);
  }
  return 0;
}



// FUNCTION 1417a2e78 FUN_1417a2e78 body=927 status=ok
// SIG undefined FUN_1417a2e78(void)

ushort * FUN_1417a2e78(undefined8 *param_1,ushort *param_2,undefined8 *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  
  uVar4 = param_1[1];
  *(undefined8 *)param_2 = *param_1;
  *(undefined8 *)(param_2 + 4) = uVar4;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 2);
  puVar10 = param_2 + 0xc;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0x100;
  param_2[0x1f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0x100;
  param_2[0x33] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x100;
  param_2[0x4f] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x60] = 0;
  param_2[0x61] = 0;
  param_2[0x62] = 0x100;
  param_2[99] = 0;
  uVar2 = *param_2;
  iVar8 = uVar2 + 1;
  iVar6 = iVar8;
  if (0xff < uVar2) {
    FUN_14497ddce(puVar10,0);
    iVar6 = *(int *)(param_2 + 0x1c) + iVar8;
  }
  iVar9 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar9 = iVar6;
  }
  *(int *)(param_2 + 0x1c) = iVar6;
  if (iVar6 % 0x20 != 0) {
    bVar5 = -(char)(iVar6 % 0x20);
    *(uint *)(puVar10 + (longlong)(iVar9 >> 5) * 2) =
         (uint)(*(int *)(puVar10 + (longlong)(iVar9 >> 5) * 2) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
  }
  FUN_1447c45ca(puVar10,0,iVar8,0);
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_2[1];
  iVar8 = uVar2 + 1;
  iVar6 = *(int *)(param_2 + 0x1c);
  iVar9 = iVar8 - iVar6;
  if (iVar9 != 0 && iVar6 <= iVar8) {
    if (iVar6 == 0) {
LAB_1417a2f5f:
      if (*(int *)(param_2 + 0x1e) <= (int)(uint)uVar2) {
        param_2[0x1e] = 0x100;
        param_2[0x1f] = 0;
        FUN_14497ddce(puVar10,iVar6);
        iVar8 = *(int *)(param_2 + 0x1c) + iVar9;
      }
      iVar7 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar7 = iVar8;
      }
      *(int *)(param_2 + 0x1c) = iVar8;
      if (iVar8 % 0x20 != 0) {
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)(puVar10 + (longlong)(iVar7 >> 5) * 2) =
             (uint)(*(int *)(puVar10 + (longlong)(iVar7 >> 5) * 2) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar7 = iVar6 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1417a2f5f;
      *(int *)(param_2 + 0x1c) = iVar8;
    }
    FUN_1447c45ca(puVar10,iVar6,iVar9,0);
  }
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_2[2];
  iVar8 = uVar2 + 1;
  iVar6 = *(int *)(param_2 + 0x1c);
  iVar9 = iVar8 - iVar6;
  if (iVar9 != 0 && iVar6 <= iVar8) {
    if (iVar6 == 0) {
LAB_1417a2fe5:
      if (*(int *)(param_2 + 0x1e) <= (int)(uint)uVar2) {
        param_2[0x1e] = 0x100;
        param_2[0x1f] = 0;
        FUN_14497ddce(puVar10,iVar6);
        iVar8 = *(int *)(param_2 + 0x1c) + iVar9;
      }
      iVar7 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar7 = iVar8;
      }
      *(int *)(param_2 + 0x1c) = iVar8;
      if (iVar8 % 0x20 != 0) {
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)(puVar10 + (longlong)(iVar7 >> 5) * 2) =
             (uint)(*(int *)(puVar10 + (longlong)(iVar7 >> 5) * 2) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar7 = iVar6 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1417a2fe5;
      *(int *)(param_2 + 0x1c) = iVar8;
    }
    FUN_1447c45ca(puVar10,iVar6,iVar9,0);
  }
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_2[3];
  iVar8 = uVar2 + 1;
  iVar6 = *(int *)(param_2 + 0x1c);
  iVar9 = iVar8 - iVar6;
  if (iVar9 == 0 || iVar8 < iVar6) goto LAB_1417a30b5;
  if (iVar6 == 0) {
LAB_1417a3075:
    if (*(int *)(param_2 + 0x1e) <= (int)(uint)uVar2) {
      param_2[0x1e] = 0x100;
      param_2[0x1f] = 0;
      FUN_14497ddce(puVar10,iVar6);
      iVar8 = *(int *)(param_2 + 0x1c) + iVar9;
    }
    iVar7 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar7 = iVar8;
    }
    *(int *)(param_2 + 0x1c) = iVar8;
    if (iVar8 % 0x20 != 0) {
      bVar5 = -(char)(iVar8 % 0x20);
      *(uint *)(puVar10 + (longlong)(iVar7 >> 5) * 2) =
           (uint)(*(int *)(puVar10 + (longlong)(iVar7 >> 5) * 2) << (bVar5 & 0x1f)) >>
           (bVar5 & 0x1f);
    }
  }
  else {
    iVar7 = iVar6 + 0x1e;
    if (-1 < iVar6 + -1) {
      iVar7 = iVar6 + -1;
    }
    if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1417a3075;
    *(int *)(param_2 + 0x1c) = iVar8;
  }
  FUN_1447c45ca(puVar10,iVar6,iVar9,0);
LAB_1417a30b5:
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) | 1 << ((byte)uVar2 & 0x1f);
  puVar10 = (ushort *)*param_3;
  puVar3 = (ushort *)param_3[1];
  if (puVar10 != puVar3) {
    puVar1 = param_2 + 0x20;
    do {
      uVar2 = *puVar10;
      iVar8 = uVar2 + 1;
      iVar6 = *(int *)(param_2 + 0x30);
      iVar9 = iVar8 - iVar6;
      if (iVar9 != 0 && iVar6 <= iVar8) {
        if (iVar6 == 0) {
LAB_1417a3108:
          if (*(int *)(param_2 + 0x32) <= (int)(uint)uVar2) {
            param_2[0x32] = 0x100;
            param_2[0x33] = 0;
            FUN_14497ddce(puVar1,iVar6);
            iVar8 = *(int *)(param_2 + 0x30) + iVar9;
          }
          iVar7 = iVar8 + 0x1f;
          if (-1 < iVar8) {
            iVar7 = iVar8;
          }
          *(int *)(param_2 + 0x30) = iVar8;
          if (iVar8 % 0x20 != 0) {
            bVar5 = -(char)(iVar8 % 0x20);
            *(uint *)(puVar1 + (longlong)(iVar7 >> 5) * 2) =
                 (uint)(*(int *)(puVar1 + (longlong)(iVar7 >> 5) * 2) << (bVar5 & 0x1f)) >>
                 (bVar5 & 0x1f);
          }
        }
        else {
          iVar7 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar7 = iVar6 + -1;
          }
          if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1417a3108;
          *(int *)(param_2 + 0x30) = iVar8;
        }
        FUN_1447c45ca(puVar1,iVar6,iVar9,0);
      }
      *(uint *)(puVar1 + (ulonglong)(uVar2 >> 5) * 2) =
           *(uint *)(puVar1 + (ulonglong)(uVar2 >> 5) * 2) | 1 << ((byte)uVar2 & 0x1f);
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar3);
  }
  return param_2;
}



// FUNCTION 1417a3218 FUN_1417a3218 body=131 status=ok
// SIG undefined FUN_1417a3218(void)

undefined8 FUN_1417a3218(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  
  puVar5 = &DAT_14cab5a90;
  if (DAT_14cab5aa8 != (undefined2 *)0x0) {
    puVar5 = DAT_14cab5aa8;
  }
  lVar3 = (longlong)DAT_14cab5ab0;
  if (lVar3 != 0) {
    lVar6 = 0;
    do {
      uVar1 = *(ushort *)((longlong)puVar5 + lVar6);
      lVar4 = FUN_14482820e(param_2 + 0x28);
      if (((uVar1 != 0xffff) &&
          (*(uint *)(lVar4 + 0x20) != (uint)uVar1 &&
           (int)(uint)uVar1 <= (int)*(uint *)(lVar4 + 0x20))) &&
         (uVar2 = *(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4), (uVar2 >> (uVar1 & 0x1f) & 1) != 0
         )) {
        return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
      }
      lVar6 = lVar6 + 6;
    } while (lVar3 * 6 != lVar6);
  }
  return 0;
}



// FUNCTION 1417a329c FUN_1417a329c body=927 status=ok
// SIG undefined FUN_1417a329c(void)

ushort * FUN_1417a329c(undefined8 *param_1,ushort *param_2,undefined8 *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  
  uVar4 = param_1[1];
  *(undefined8 *)param_2 = *param_1;
  *(undefined8 *)(param_2 + 4) = uVar4;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 2);
  puVar10 = param_2 + 0xc;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0x100;
  param_2[0x1f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0x100;
  param_2[0x33] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x100;
  param_2[0x4f] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x60] = 0;
  param_2[0x61] = 0;
  param_2[0x62] = 0x100;
  param_2[99] = 0;
  uVar2 = *param_2;
  iVar8 = uVar2 + 1;
  iVar6 = iVar8;
  if (0xff < uVar2) {
    FUN_14497ddce(puVar10,0);
    iVar6 = *(int *)(param_2 + 0x1c) + iVar8;
  }
  iVar9 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar9 = iVar6;
  }
  *(int *)(param_2 + 0x1c) = iVar6;
  if (iVar6 % 0x20 != 0) {
    bVar5 = -(char)(iVar6 % 0x20);
    *(uint *)(puVar10 + (longlong)(iVar9 >> 5) * 2) =
         (uint)(*(int *)(puVar10 + (longlong)(iVar9 >> 5) * 2) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
  }
  FUN_1447c45ca(puVar10,0,iVar8,0);
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_2[1];
  iVar8 = uVar2 + 1;
  iVar6 = *(int *)(param_2 + 0x1c);
  iVar9 = iVar8 - iVar6;
  if (iVar9 != 0 && iVar6 <= iVar8) {
    if (iVar6 == 0) {
LAB_1417a3383:
      if (*(int *)(param_2 + 0x1e) <= (int)(uint)uVar2) {
        param_2[0x1e] = 0x100;
        param_2[0x1f] = 0;
        FUN_14497ddce(puVar10,iVar6);
        iVar8 = *(int *)(param_2 + 0x1c) + iVar9;
      }
      iVar7 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar7 = iVar8;
      }
      *(int *)(param_2 + 0x1c) = iVar8;
      if (iVar8 % 0x20 != 0) {
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)(puVar10 + (longlong)(iVar7 >> 5) * 2) =
             (uint)(*(int *)(puVar10 + (longlong)(iVar7 >> 5) * 2) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar7 = iVar6 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1417a3383;
      *(int *)(param_2 + 0x1c) = iVar8;
    }
    FUN_1447c45ca(puVar10,iVar6,iVar9,0);
  }
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_2[2];
  iVar8 = uVar2 + 1;
  iVar6 = *(int *)(param_2 + 0x1c);
  iVar9 = iVar8 - iVar6;
  if (iVar9 != 0 && iVar6 <= iVar8) {
    if (iVar6 == 0) {
LAB_1417a3409:
      if (*(int *)(param_2 + 0x1e) <= (int)(uint)uVar2) {
        param_2[0x1e] = 0x100;
        param_2[0x1f] = 0;
        FUN_14497ddce(puVar10,iVar6);
        iVar8 = *(int *)(param_2 + 0x1c) + iVar9;
      }
      iVar7 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar7 = iVar8;
      }
      *(int *)(param_2 + 0x1c) = iVar8;
      if (iVar8 % 0x20 != 0) {
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)(puVar10 + (longlong)(iVar7 >> 5) * 2) =
             (uint)(*(int *)(puVar10 + (longlong)(iVar7 >> 5) * 2) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar7 = iVar6 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1417a3409;
      *(int *)(param_2 + 0x1c) = iVar8;
    }
    FUN_1447c45ca(puVar10,iVar6,iVar9,0);
  }
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_2[3];
  iVar8 = uVar2 + 1;
  iVar6 = *(int *)(param_2 + 0x1c);
  iVar9 = iVar8 - iVar6;
  if (iVar9 == 0 || iVar8 < iVar6) goto LAB_1417a34d9;
  if (iVar6 == 0) {
LAB_1417a3499:
    if (*(int *)(param_2 + 0x1e) <= (int)(uint)uVar2) {
      param_2[0x1e] = 0x100;
      param_2[0x1f] = 0;
      FUN_14497ddce(puVar10,iVar6);
      iVar8 = *(int *)(param_2 + 0x1c) + iVar9;
    }
    iVar7 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar7 = iVar8;
    }
    *(int *)(param_2 + 0x1c) = iVar8;
    if (iVar8 % 0x20 != 0) {
      bVar5 = -(char)(iVar8 % 0x20);
      *(uint *)(puVar10 + (longlong)(iVar7 >> 5) * 2) =
           (uint)(*(int *)(puVar10 + (longlong)(iVar7 >> 5) * 2) << (bVar5 & 0x1f)) >>
           (bVar5 & 0x1f);
    }
  }
  else {
    iVar7 = iVar6 + 0x1e;
    if (-1 < iVar6 + -1) {
      iVar7 = iVar6 + -1;
    }
    if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1417a3499;
    *(int *)(param_2 + 0x1c) = iVar8;
  }
  FUN_1447c45ca(puVar10,iVar6,iVar9,0);
LAB_1417a34d9:
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) | 1 << ((byte)uVar2 & 0x1f);
  puVar10 = (ushort *)*param_3;
  puVar3 = (ushort *)param_3[1];
  if (puVar10 != puVar3) {
    puVar1 = param_2 + 0x20;
    do {
      uVar2 = *puVar10;
      iVar8 = uVar2 + 1;
      iVar6 = *(int *)(param_2 + 0x30);
      iVar9 = iVar8 - iVar6;
      if (iVar9 != 0 && iVar6 <= iVar8) {
        if (iVar6 == 0) {
LAB_1417a352c:
          if (*(int *)(param_2 + 0x32) <= (int)(uint)uVar2) {
            param_2[0x32] = 0x100;
            param_2[0x33] = 0;
            FUN_14497ddce(puVar1,iVar6);
            iVar8 = *(int *)(param_2 + 0x30) + iVar9;
          }
          iVar7 = iVar8 + 0x1f;
          if (-1 < iVar8) {
            iVar7 = iVar8;
          }
          *(int *)(param_2 + 0x30) = iVar8;
          if (iVar8 % 0x20 != 0) {
            bVar5 = -(char)(iVar8 % 0x20);
            *(uint *)(puVar1 + (longlong)(iVar7 >> 5) * 2) =
                 (uint)(*(int *)(puVar1 + (longlong)(iVar7 >> 5) * 2) << (bVar5 & 0x1f)) >>
                 (bVar5 & 0x1f);
          }
        }
        else {
          iVar7 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar7 = iVar6 + -1;
          }
          if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1417a352c;
          *(int *)(param_2 + 0x30) = iVar8;
        }
        FUN_1447c45ca(puVar1,iVar6,iVar9,0);
      }
      *(uint *)(puVar1 + (ulonglong)(uVar2 >> 5) * 2) =
           *(uint *)(puVar1 + (ulonglong)(uVar2 >> 5) * 2) | 1 << ((byte)uVar2 & 0x1f);
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar3);
  }
  return param_2;
}



// FUNCTION 1417a363b FUN_1417a363b body=391 status=ok
// SIG undefined FUN_1417a363b(void)

void FUN_1417a363b(longlong *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar2,param_1);
  *puVar2 = &PTR_FUN_14a4da7f0;
  puVar2[8] = &PTR_FUN_14a4daad0;
  puVar2[9] = 0;
  puVar2[10] = 0xffffffffffffffff;
  *(undefined1 *)((longlong)puVar2 + 0x32) = 8;
  uVar3 = FUN_1408bae02();
  *(uint *)(puVar2 + 7) = uVar3 | 0x10;
  *puVar2 = &PTR_FUN_14a4ccec0;
  puVar2[8] = &PTR_FUN_14a4cd1a0;
  lVar4 = FUN_14038fb82();
  *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(lVar4 + 0xc);
  *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(lVar4 + 0x14);
  if ((*(uint *)(puVar2 + 1) & 0x10) != 0) {
    local_20 = puVar2[2];
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_28 = FUN_145920a42();
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_28);
    }
    FUN_140909372(&local_28,&local_20);
    local_30 = puVar2[2];
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_38 = FUN_1410944f0();
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_38);
    }
    FUN_140909372(&local_38,&local_30);
    lVar4 = FUN_14038fb82();
    uVar1 = *(undefined2 *)(lVar4 + 0xc);
    local_40 = puVar2[2];
    if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_40,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a37c3 FUN_1417a37c3 body=324 status=ok
// SIG undefined FUN_1417a37c3(void)

void FUN_1417a37c3(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a4da7f0;
  puVar1[8] = &PTR_FUN_14a4daad0;
  puVar1[9] = 0;
  puVar1[10] = 0xffffffffffffffff;
  *(undefined1 *)((longlong)puVar1 + 0x32) = 8;
  uVar2 = FUN_1408bae02();
  *(uint *)(puVar1 + 7) = uVar2 | 0x10;
  *puVar1 = &PTR_FUN_14a4cda00;
  puVar1[8] = &PTR_FUN_14a4cdce0;
  lVar3 = FUN_14038fb82();
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(lVar3 + 0x48);
  *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(lVar3 + 0x50);
  if ((*(uint *)(puVar1 + 1) & 0x10) != 0) {
    local_18 = puVar1[2];
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_20 = FUN_14099c56c();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_18);
    local_28 = puVar1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_30 = FUN_1413336e6();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a3908 FUN_1417a3908 body=626 status=ok
// SIG undefined FUN_1417a3908(void)

void FUN_1417a3908(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_148 [32];
  undefined2 *local_128;
  undefined4 *local_120;
  int local_118;
  undefined2 local_10e;
  undefined2 local_10c;
  undefined2 local_10a;
  undefined4 local_108;
  undefined1 uStack_104;
  undefined1 uStack_103;
  undefined2 uStack_102;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_d8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_78;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar7 = FUN_14038fb82();
  lVar8 = FUN_14009d2a0();
  iVar4 = *(int *)(param_1 + 0x188);
  if ((longlong)iVar4 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x180);
    lVar11 = 0;
    do {
      puVar1 = (undefined4 *)(lVar5 + lVar11);
      local_108 = *puVar1;
      uVar6 = puVar1[1];
      uStack_100 = puVar1[2];
      uStack_fc = puVar1[3];
      puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar11);
      local_f8 = *puVar1;
      uStack_f4 = puVar1[1];
      uStack_f0 = puVar1[2];
      uStack_ec = puVar1[3];
      uStack_104 = (undefined1)uVar6;
      uStack_103 = (undefined1)((uint)uVar6 >> 8);
      uStack_102 = (undefined2)((uint)uVar6 >> 0x10);
      uVar9 = FUN_14479d2ce(&uStack_100);
      FUN_1475b8ae0(&uStack_f0,
                    CONCAT26(uStack_102,CONCAT15(uStack_103,CONCAT14(uStack_104,local_108))),uVar9,
                    &local_f8);
      lVar11 = lVar11 + 0x20;
    } while ((longlong)iVar4 * 0x20 != lVar11);
  }
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(int *)(param_1 + 0x18c) != 0) {
    FUN_14767c7fe(param_1 + 0x180);
  }
  lVar5 = *(longlong *)(*(int **)(param_2 + 0x10) + 2);
  if ((lVar5 != 0) && (**(int **)(param_2 + 0x10) != 0)) {
    local_10c = *(undefined2 *)(lVar7 + 0xda);
    local_120 = &local_108;
    local_10a = *(undefined2 *)(lVar8 + 0x11c);
    uStack_103 = 0;
    uStack_100 = 0x6ff;
    uStack_fc = uStack_fc & 0xffffff00;
    local_d8 = 0x10000000000;
    local_b0 = 0x10000000000;
    local_78 = 0x10000000000;
    local_a8 = 0;
    uStack_a0 = 0;
    local_50 = 0x10000000000;
    local_128 = &local_10c;
    FUN_1447c44f6(&local_f8);
    lVar7 = *(longlong *)(param_1 + -0x18);
    cVar2 = *(char *)(lVar7 + 0x298);
    FUN_14150e78a(&local_128,lVar7 + 0x28,&local_f8);
    iVar4 = *(int *)(lVar7 + 0x38);
    if (local_118 != iVar4) {
      do {
        lVar7 = *(longlong *)(*(longlong *)(local_120 + 0x18) + (longlong)local_118 * 8);
        if (cVar2 == '\0') {
          *(undefined4 *)(lVar7 + 0x14) = 0;
          lVar8 = lVar7;
        }
        else {
          lVar8 = 0;
        }
        uVar3 = *(ushort *)(lVar7 + 0xe);
        if ((ulonglong)uVar3 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x18);
          uVar10 = 0;
          do {
            local_10e = *(undefined2 *)(lVar7 + uVar10 * 2);
            FUN_14755d80c(lVar5,&local_10e,DAT_14cab5c38);
            uVar10 = uVar10 + 1;
          } while (uVar3 != uVar10);
        }
        if (lVar8 != 0) {
          *(undefined4 *)(lVar8 + 0x14) = 1;
        }
        local_118 = FUN_1403b8464(&local_128,local_118 + 1);
      } while (local_118 != iVar4);
    }
    if (local_128 != (undefined2 *)0x0) {
      if (*(char *)(local_120 + 0x9c) == '\0') {
        local_120[0x99] = local_120[0x99] + -1;
      }
      else {
        LOCK();
        local_120[0x99] = local_120[0x99] + -1;
        UNLOCK();
      }
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417a3b7b FUN_1417a3b7b body=574 status=ok
// SIG undefined FUN_1417a3b7b(void)

void FUN_1417a3b7b(longlong *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar2 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar2,param_1);
  *puVar2 = &PTR_FUN_14a4ce5a0;
  puVar2[8] = &PTR_LAB_14a4ce880;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  *(undefined4 *)(puVar2 + 0xd) = 0xffffffff;
  puVar2[0x12] = 0x10000000000;
  puVar2[0x17] = 0x10000000000;
  puVar2[0x1e] = 0x10000000000;
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  puVar2[0x23] = 0x10000000000;
  puVar2[0x2a] = 0x10000000000;
  puVar2[0x24] = 0;
  puVar2[0x25] = 0;
  puVar2[0x2f] = 0x10000000000;
  puVar2[0x30] = 0;
  puVar2[0x31] = 0;
  puVar2[0x32] = 0;
  puVar2[0x33] = 0;
  puVar2[0x34] = 0;
  lVar3 = FUN_14009d2a0();
  lVar4 = FUN_14038fb82();
  *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(lVar4 + 0xe6);
  *(undefined1 *)((longlong)puVar2 + 0x32) = 4;
  if ((*(uint *)(puVar2 + 1) & 0x10) != 0) {
    uVar1 = *(undefined2 *)(lVar3 + 0xea);
    local_30 = puVar2[2];
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_30,uVar1);
    uVar1 = *(undefined2 *)(lVar3 + 0x4a);
    local_38 = puVar2[2];
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_38,uVar1);
    uVar1 = *(undefined2 *)(lVar4 + 0xfa);
    local_40 = puVar2[2];
    if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_40,uVar1);
    local_48 = puVar2[2];
    if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_50 = FUN_14090928c();
    if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_50);
    }
    FUN_140909372(&local_50,&local_48);
    local_58 = puVar2[2];
    if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_60 = FUN_145a682c4();
    if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_60);
    }
    FUN_140909372(&local_60,&local_58);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a3dba FUN_1417a3dba body=681 status=ok
// SIG undefined FUN_1417a3dba(void)

void FUN_1417a3dba(longlong *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar2,param_1);
  *(undefined1 *)((longlong)puVar2 + 0x32) = 4;
  *puVar2 = &PTR_FUN_14a4ce980;
  puVar2[8] = &PTR_FUN_14a4cec60;
  puVar2[0xd] = 0;
  *(undefined4 *)(puVar2 + 0xe) = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = 0;
  puVar2[0x11] = 0;
  *(undefined4 *)(puVar2 + 0x12) = 0;
  puVar2[0x17] = 0;
  *(undefined4 *)(puVar2 + 0x18) = 0;
  puVar2[0x13] = 0;
  puVar2[0x14] = 0;
  *(undefined8 *)((longlong)puVar2 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0xcc) = 0;
  puVar2[0x1b] = 0;
  *(undefined4 *)(puVar2 + 0x1c) = 0;
  puVar2[0x21] = 0;
  *(undefined4 *)(puVar2 + 0x22) = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x11c) = 0;
  puVar2[0x25] = 0;
  *(undefined4 *)(puVar2 + 0x26) = 0;
  puVar2[0x2b] = 0;
  *(undefined4 *)(puVar2 + 0x2c) = 0;
  puVar2[0x27] = 0;
  puVar2[0x28] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x164) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x16c) = 0;
  puVar2[0x30] = 0;
  puVar2[0x31] = 0x8000000000;
  puVar2[0x34] = 0;
  puVar2[0x35] = 0x8000000000;
  *(undefined1 *)(puVar2 + 0x36) = 0;
  puVar2[0x37] = 0;
  puVar2[0x3c] = 0x10000000000;
  puVar2[0x41] = 0x10000000000;
  puVar2[0x44] = 0;
  puVar2[0x45] = 0;
  puVar2[0x42] = 0;
  puVar2[0x43] = 0;
  uVar3 = FUN_1408bae02();
  *(uint *)(puVar2 + 7) = *(uint *)(puVar2 + 7) | uVar3;
  FUN_14009d2a0();
  lVar4 = FUN_14038fb82();
  local_28 = (longlong)&local_20 + 4;
  local_20._0_4_ = CONCAT22(*(undefined2 *)(lVar4 + 0xda),*(undefined2 *)(lVar4 + 0x84));
  local_30 = &local_20;
  FUN_1403b5126(puVar2 + 0x38,&local_30,CONCAT71((int7)((ulonglong)local_28 >> 8),2));
  if ((*(uint *)(puVar2 + 1) & 0x10) != 0) {
    local_30 = (undefined8 *)puVar2[2];
    if ((local_30 != (undefined8 *)0x0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_20 = FUN_14090928c();
    if ((local_20 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_30);
    local_38 = FUN_1458848dc();
    if (local_38 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_38);
    }
    local_40 = puVar2[2];
    if ((local_40 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_40,&local_38);
    lVar4 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar4 + 0x140);
    local_48 = puVar2[2];
    if ((local_48 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_48,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a4078 FUN_1417a4078 body=84 status=ok
// SIG undefined FUN_1417a4078(void)

undefined8 FUN_1417a4078(longlong param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x30);
  lVar3 = FUN_14482820e(param_2 + 0x28);
  if (((uVar1 == 0xffff) ||
      (*(uint *)(lVar3 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar3 + 0x20) < (int)(uint)uVar1))
     || (uVar2 = *(uint *)(lVar3 + (ulonglong)(uVar1 >> 5) * 4), (uVar2 >> (uVar1 & 0x1f) & 1) == 0)
     ) {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),*(int *)(lVar3 + 8) != *(int *)(lVar3 + 0x34));
    }
  }
  else {
    uVar4 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
  }
  return uVar4;
}



// FUNCTION 1417a40cc FUN_1417a40cc body=838 status=ok
// SIG undefined FUN_1417a40cc(void)

void FUN_1417a40cc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x74)) goto LAB_1417a40f1;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x5d8);
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x5e0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar1 = local_58;
  local_50 = 3;
  *local_58 = (longlong)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar12 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar12 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar12;
  local_58[2] = lVar9;
  *local_58 = (longlong)&PTR_FUN_14a4d81d0;
  local_58[3] = 0;
  iVar10 = 0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar10 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar10 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar10 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar8;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar10 = iVar8;
      }
    }
  }
  *(int *)((longlong)plVar1 + 0x1c) = iVar10;
  plVar1[4] = (longlong)FUN_1414970ec;
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(*local_58 + 0x30))(), cVar7 == '\0')) {
    if (local_50 == 0) goto LAB_1417a42ad;
    if (local_58 != (longlong *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_1417a42a0;
    }
  }
  else {
    plVar1 = (longlong *)(lVar4 + 0x58);
    if (*(int *)(lVar4 + 0x6c) < 1) {
      iVar10 = *(int *)(lVar4 + 0x60);
      iVar8 = *(int *)(lVar4 + 0x68) + -1;
      *(int *)(lVar4 + 0x68) = iVar8;
      if (iVar8 <= iVar10) {
        iVar8 = iVar10;
        if (0 < iVar10) {
          iVar11 = 0;
          do {
            if (((*(int *)(*plVar1 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                (plVar6 = *(longlong **)(*plVar1 + (longlong)iVar11 * 0x10),
                plVar6 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar6 + 0x28))(), cVar7 != '\0')) {
              FUN_14005b288(plVar1,iVar11);
              FUN_14005b248(plVar1);
            }
            else {
              iVar11 = iVar11 + 1;
            }
            iVar8 = *(int *)(lVar4 + 0x60);
          } while (iVar11 < iVar8);
        }
        iVar11 = 2;
        if (2 < iVar8 * 2) {
          iVar11 = iVar8 * 2;
        }
        *(int *)(lVar4 + 0x68) = iVar11;
        if ((iVar11 < iVar10) && (*(int *)(lVar4 + 100) != iVar8)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,local_48);
    }
    iVar10 = *(int *)(lVar4 + 0x60);
    *(uint *)(lVar4 + 0x60) = iVar10 + 1U;
    if (*(uint *)(lVar4 + 100) < iVar10 + 1U) {
      FUN_1447a71f6(plVar1,iVar10);
    }
    lVar4 = *plVar1;
    lVar12 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar4 + lVar12) = 0;
    *(undefined4 *)(lVar4 + 8 + lVar12) = 0;
    *(longlong **)(lVar4 + lVar12) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar4 + 8 + lVar12) = local_50;
LAB_1417a42a0:
    local_50 = 0;
LAB_1417a42ad:
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
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
LAB_1417a40f1:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417a4413 FUN_1417a4413 body=324 status=ok
// SIG undefined FUN_1417a4413(void)

void FUN_1417a4413(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a4da7f0;
  puVar1[8] = &PTR_FUN_14a4daad0;
  puVar1[9] = 0;
  puVar1[10] = 0xffffffffffffffff;
  *(undefined1 *)((longlong)puVar1 + 0x32) = 8;
  uVar2 = FUN_1408bae02();
  *(uint *)(puVar1 + 7) = uVar2 | 0x10;
  *puVar1 = &PTR_FUN_14a4d27d0;
  puVar1[8] = &PTR_FUN_14a4d2ab0;
  lVar3 = FUN_14038fb82();
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(lVar3 + 0x30);
  *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(lVar3 + 0x38);
  if ((*(uint *)(puVar1 + 1) & 0x10) != 0) {
    local_18 = puVar1[2];
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_20 = FUN_14099c56c();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_18);
    local_28 = puVar1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_30 = FUN_1413336e6();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a4558 FUN_1417a4558 body=144 status=ok
// SIG undefined FUN_1417a4558(void)

undefined8 FUN_1417a4558(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_38 [36];
  ushort local_14 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = FUN_14009d2a0();
  local_14[0] = *(ushort *)(lVar2 + 0x58);
  local_14[1] = *(undefined2 *)(lVar2 + 0x5e);
  lVar2 = FUN_14482820e(param_2 + 0x28);
  lVar4 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)local_14 + lVar4);
    if (((uVar1 == 0xffff) ||
        (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1))
       || ((*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0)) break;
    lVar4 = lVar4 + 2;
    if (lVar4 == 4) {
      uVar3 = 1;
LAB_1417a45cc:
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  uVar3 = 0;
  goto LAB_1417a45cc;
}



// FUNCTION 1417a45e9 FUN_1417a45e9 body=261 status=ok
// SIG undefined FUN_1417a45e9(void)

void FUN_1417a45e9(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar1,param_1);
  *(undefined1 *)((longlong)puVar1 + 0x32) = 4;
  *puVar1 = &PTR_FUN_14a4d2fb0;
  *(undefined4 *)(puVar1 + 7) = 2;
  if ((*(uint *)(puVar1 + 1) & 0x10) != 0) {
    local_18 = FUN_145957a0a();
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_18);
    }
    local_20 = FUN_140926940();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_18);
    local_28 = FUN_145957a0a();
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_28);
    }
    local_30 = FUN_1459906fe();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a46ef FUN_1417a46ef body=852 status=ok
// SIG undefined FUN_1417a46ef(void)

void FUN_1417a46ef(longlong *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar2,param_1);
  *(undefined1 *)((longlong)puVar2 + 0x32) = 4;
  *puVar2 = &PTR_FUN_14a4d3f40;
  puVar2[0xc] = 0;
  *(undefined4 *)(puVar2 + 0xd) = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x74) = 0;
  puVar2[0x10] = 0;
  *(undefined4 *)(puVar2 + 0x11) = 0;
  puVar2[0x16] = 0;
  *(undefined4 *)(puVar2 + 0x17) = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  *(undefined8 *)((longlong)puVar2 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0xc4) = 0;
  puVar2[0x1a] = 0;
  *(undefined4 *)(puVar2 + 0x1b) = 0;
  puVar2[0x20] = 0;
  *(undefined4 *)(puVar2 + 0x21) = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1d] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x114) = 0;
  puVar2[0x24] = 0;
  *(undefined4 *)(puVar2 + 0x25) = 0;
  puVar2[0x2a] = 0;
  *(undefined4 *)(puVar2 + 0x2b) = 0;
  puVar2[0x26] = 0;
  puVar2[0x27] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x15c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x164) = 0;
  puVar2[0x2f] = 0;
  puVar2[0x30] = 0x8000000000;
  puVar2[0x33] = 0;
  puVar2[0x34] = 0x8000000000;
  *(undefined1 *)(puVar2 + 0x35) = 0;
  puVar2[0x3b] = 0;
  *(undefined4 *)(puVar2 + 0x3c) = 0;
  puVar2[0x36] = 0;
  puVar2[0x37] = 0;
  puVar2[0x38] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x1e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x1ec) = 0;
  puVar2[0x3f] = 0;
  *(undefined4 *)(puVar2 + 0x40) = 0;
  puVar2[0x45] = 0;
  *(undefined4 *)(puVar2 + 0x46) = 0;
  puVar2[0x41] = 0;
  puVar2[0x42] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x234) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x23c) = 0;
  puVar2[0x49] = 0;
  *(undefined4 *)(puVar2 + 0x4a) = 0;
  puVar2[0x4f] = 0;
  *(undefined4 *)(puVar2 + 0x50) = 0;
  puVar2[0x4b] = 0;
  puVar2[0x4c] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x284) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x28c) = 0;
  puVar2[0x53] = 0;
  *(undefined4 *)(puVar2 + 0x54) = 0;
  puVar2[0x59] = 0;
  *(undefined4 *)(puVar2 + 0x5a) = 0;
  puVar2[0x55] = 0;
  puVar2[0x56] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x2d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x2dc) = 0;
  puVar2[0x5e] = 0;
  puVar2[0x5f] = 0x8000000000;
  puVar2[0x62] = 0;
  puVar2[99] = 0x8000000000;
  *(undefined1 *)(puVar2 + 100) = 0;
  puVar2[0x69] = 0;
  puVar2[0x6a] = 0;
  puVar2[0x67] = 0;
  puVar2[0x68] = 0;
  puVar2[0x65] = 0;
  puVar2[0x66] = 0;
  lVar3 = FUN_14009d2a0();
  lVar4 = FUN_14038fb82();
  uVar1 = *(undefined2 *)(lVar4 + 0xfa);
  *(undefined2 *)(puVar2 + 6) = uVar1;
  if ((*(uint *)(puVar2 + 1) & 0x10) != 0) {
    local_28 = puVar2[2];
    if ((local_28 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_28,uVar1);
    uVar1 = *(undefined2 *)(lVar3 + 0xf2);
    local_30 = puVar2[2];
    if ((local_30 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_30,uVar1);
    local_38 = puVar2[2];
    if ((local_38 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_40 = FUN_1459e4b3c();
    if ((local_40 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_40);
    }
    FUN_140909372(&local_40,&local_38);
    local_48 = FUN_145957a0a();
    if (local_48 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_48);
    }
    local_50 = puVar2[2];
    if ((local_50 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_50,&local_48);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a4a44 FUN_1417a4a44 body=324 status=ok
// SIG undefined FUN_1417a4a44(void)

void FUN_1417a4a44(longlong *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar2,param_1);
  *puVar2 = &PTR_FUN_14a4d42e0;
  lVar3 = FUN_14009d2a0();
  lVar4 = FUN_14038fb82();
  *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(lVar4 + 0xfa);
  *(undefined1 *)((longlong)puVar2 + 0x32) = 8;
  if ((*(uint *)(puVar2 + 1) & 0x10) != 0) {
    uVar1 = *(undefined2 *)(lVar4 + 0xfa);
    local_38 = puVar2[2];
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_38,uVar1);
    lVar4 = 0;
    do {
      uVar1 = *(undefined2 *)(lVar3 + 0xbc + lVar4 * 2);
      local_40 = puVar2[2];
      if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      FUN_14118c742(&local_40,uVar1);
      lVar4 = lVar4 + 1;
    } while (lVar4 != 9);
    local_48 = puVar2[2];
    if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_50 = FUN_14099c56c();
    if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_50);
    }
    FUN_140909372(&local_50,&local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a4b8a FUN_1417a4b8a body=410 status=ok
// SIG undefined FUN_1417a4b8a(void)

undefined8 * FUN_1417a4b8a(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14a4c92e0;
  param_1[0x1f] = &PTR_LAB_14a4c9650;
  lVar1 = 0x430;
  lVar3 = 0x4f8;
  lVar4 = 0x4e8;
  lVar2 = 0x4b0;
  do {
    *(undefined ***)((longlong)param_1 + lVar1) = &PTR_FUN_14a46ea60;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x100) = 0;
    if (*(longlong *)((longlong)param_1 + lVar1 + 0xf8) != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)((longlong)param_1 + lVar1 + 0xc0) = 0;
    if (*(int *)((longlong)param_1 + lVar1 + 0xc4) != 0) {
      FUN_14472eb64((longlong)param_1 + lVar4,0);
    }
    *(undefined8 *)((longlong)param_1 + lVar1 + 0xe8) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0xe0) = 0;
    if (0x80 < *(uint *)((longlong)param_1 + lVar1 + 0xe4)) {
      *(undefined4 *)((longlong)param_1 + lVar1 + 0xe4) = 0x80;
      FUN_1446efbd8((longlong)param_1 + lVar3);
    }
    if (*(longlong *)((longlong)param_1 + lVar1 + 0xd8) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)((longlong)param_1 + lVar1 + 0xb8) != 0) {
      FUN_1400020a8();
    }
    FUN_1404dba90((longlong)param_1 + lVar2);
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x68) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x58) != 0) {
      FUN_1400020a8();
    }
    FUN_1404dbac8((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x110;
    lVar3 = lVar3 + -0x110;
    lVar4 = lVar4 + -0x110;
    lVar2 = lVar2 + -0x110;
  } while (lVar1 != -0x10);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a4d24 FUN_1417a4d24 body=65 status=ok
// SIG undefined FUN_1417a4d24(void)

undefined8 * FUN_1417a4d24(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a493f70;
  FUN_140bb7e7c(param_1 + 0x20);
  FUN_1404db908(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a4d66 FUN_1417a4d66 body=40 status=ok
// SIG undefined FUN_1417a4d66(void)

undefined8 FUN_1417a4d66(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a4d8e FUN_1417a4d8e body=40 status=ok
// SIG undefined FUN_1417a4d8e(void)

undefined8 FUN_1417a4d8e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a4db6 FUN_1417a4db6 body=40 status=ok
// SIG undefined FUN_1417a4db6(void)

undefined8 FUN_1417a4db6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a4dde FUN_1417a4dde body=40 status=ok
// SIG undefined FUN_1417a4dde(void)

undefined8 FUN_1417a4dde(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a4e06 FUN_1417a4e06 body=40 status=ok
// SIG undefined FUN_1417a4e06(void)

undefined8 FUN_1417a4e06(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a4e2e FUN_1417a4e2e body=40 status=ok
// SIG undefined FUN_1417a4e2e(void)

undefined8 FUN_1417a4e2e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a4e56 FUN_1417a4e56 body=40 status=ok
// SIG undefined FUN_1417a4e56(void)

undefined8 FUN_1417a4e56(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a4e7e FUN_1417a4e7e body=40 status=ok
// SIG undefined FUN_1417a4e7e(void)

undefined8 FUN_1417a4e7e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a4ea6 FUN_1417a4ea6 body=40 status=ok
// SIG undefined FUN_1417a4ea6(void)

undefined8 FUN_1417a4ea6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a4ece FUN_1417a4ece body=356 status=ok
// SIG undefined FUN_1417a4ece(void)

void FUN_1417a4ece(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auStack_88 [36];
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_2;
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    plVar7 = *(longlong **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1417a4f21;
      plVar7 = plVar7 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1417a4f21:
  iVar1 = *(int *)(lVar3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar3 = *param_2;
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    plVar6 = *(longlong **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar6 + 0x1e) == *(short *)(param_1 + 0xc)) goto LAB_1417a4f60;
      plVar6 = plVar6 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar6 = (longlong *)0x0;
LAB_1417a4f60:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
  }
  LOCK();
  *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
  UNLOCK();
  if (0 < *(int *)((longlong)param_2 + 0xc)) {
    lVar3 = *plVar6;
    lVar8 = (longlong)(int)param_2[1];
    do {
      cVar4 = FUN_1400f0204(*(undefined8 *)(lVar5 + lVar8 * 8),0,0,&local_64);
      if (cVar4 == '\0') {
        dVar9 = 2.2250738585072014e-308;
      }
      else {
        dVar9 = (double)local_64;
      }
      *(double *)(lVar3 + lVar8 * 8) = dVar9;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (longlong)*(int *)((longlong)param_2 + 0xc) + (longlong)(int)param_2[1]);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 3) = (int)plVar6[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a5034 FUN_1417a5034 body=525 status=ok
// SIG undefined FUN_1417a5034(void)

void FUN_1417a5034(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  uint *puVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar13 = *(longlong **)(param_2 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar13 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1417a5070;
      plVar13 = plVar13 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar13 = (longlong *)0x0;
LAB_1417a5070:
  iVar4 = *(int *)(param_2 + 0x14);
  if (iVar4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar13 + 1));
  }
  LOCK();
  *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
  UNLOCK();
  uVar3 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar3 != 0) {
    lVar8 = *plVar13;
    uVar12 = 0;
    do {
      uVar1 = uVar12 + 1;
      if (*(int *)(*(longlong *)(lVar8 + uVar12 * 8) + 0x60) < 2) {
        iVar5 = *(int *)(param_3 + 0x18);
        lVar14 = uVar12 + (uint)-iVar5 + 1;
        if (0 < (int)lVar14) {
          iVar17 = (int)uVar1;
          if (iVar5 == 0) {
LAB_1417a5154:
            if ((longlong)*(int *)(param_3 + 0x1c) <= (longlong)uVar12) {
              if (uVar12 < 0x80) {
                iVar7 = 0x80;
                iVar6 = iVar5;
              }
              else {
                uVar16 = (int)uVar12 + 0x20U >> 5;
                if (*(int *)(param_3 + 0x1c) + 0x1fU < 0xa0) {
                  uVar10 = 4;
                  if (4 < uVar16) {
                    uVar10 = uVar16;
                  }
                }
                else {
                  uVar10 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
                }
                uVar9 = FUN_144a3809e(uVar10 << 2,0);
                iVar6 = (int)(uVar9 >> 2);
                iVar7 = -0x20;
                if ((int)uVar16 <= iVar6) {
                  iVar7 = iVar6 << 5;
                }
                iVar6 = *(int *)(param_3 + 0x18);
              }
              *(int *)(param_3 + 0x1c) = iVar7;
              FUN_1446efbd8(param_3,iVar6);
              iVar17 = (iVar17 - iVar5) + *(int *)(param_3 + 0x18);
            }
            iVar6 = iVar17 + 0x1f;
            if (-1 < iVar17) {
              iVar6 = iVar17;
            }
            *(int *)(param_3 + 0x18) = iVar17;
            if (iVar17 % 0x20 != 0) {
              lVar11 = *(longlong *)(param_3 + 0x10);
              if (*(longlong *)(param_3 + 0x10) == 0) {
                lVar11 = param_3;
              }
              bVar15 = -(char)(iVar17 % 0x20);
              *(uint *)(lVar11 + (longlong)(iVar6 >> 5) * 4) =
                   (uint)(*(int *)(lVar11 + (longlong)(iVar6 >> 5) * 4) << (bVar15 & 0x1f)) >>
                   (bVar15 & 0x1f);
            }
          }
          else {
            iVar6 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar6 = iVar5 + -1;
            }
            if (((uint)(uVar12 >> 5) & 0x7ffffff) != iVar6 >> 5) goto LAB_1417a5154;
            *(int *)(param_3 + 0x18) = iVar17;
          }
          FUN_1447c6044(param_3,iVar5,lVar14,0);
        }
        lVar14 = *(longlong *)(param_3 + 0x10);
        if (*(longlong *)(param_3 + 0x10) == 0) {
          lVar14 = param_3;
        }
        puVar2 = (uint *)(lVar14 + (uVar12 >> 5 & 0x7ffffff) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar12 & 0x1f);
      }
      uVar12 = uVar1;
    } while (uVar3 != uVar1);
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 3) = (int)plVar13[3] + -1;
    UNLOCK();
    if (iVar4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001417a514d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar13 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1417a5242 FUN_1417a5242 body=464 status=ok
// SIG undefined FUN_1417a5242(void)

void FUN_1417a5242(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  byte *pbVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = FUN_14009d2a0();
  uVar2 = *(ushort *)(param_2 + 0xc);
  if (uVar2 == 0) {
    bVar12 = false;
  }
  else {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar9 = (ulonglong)uVar2 << 5;
    plVar7 = plVar8;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(lVar6 + 0x130)) goto LAB_1417a52a4;
      plVar7 = plVar7 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
    plVar7 = (longlong *)0x0;
LAB_1417a52a4:
    bVar12 = plVar7 != (longlong *)0x0;
    lVar9 = (ulonglong)uVar2 << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(lVar6 + 0x58)) goto LAB_1417a52ca;
      plVar8 = plVar8 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1417a52ca:
  iVar3 = *(int *)(param_2 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar9 = *plVar8;
  FUN_1410fbae8(param_2,&local_60,*(undefined2 *)(lVar6 + 0x5e));
  uVar2 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar2 != 0) {
    pbVar10 = (byte *)(lVar9 + 8);
    uVar11 = 0;
    do {
      if (local_50 == 0) {
        sVar4 = 0;
      }
      else {
        sVar4 = *(short *)(local_50 + uVar11 * 2);
      }
      if (((*pbVar10 & 1) == 0) &&
         (bVar12 != (sVar4 < *(short *)(*(longlong *)(param_1 + 8) + 0x10 +
                                       (longlong)*(int *)(pbVar10 + -4) * 0x18) &&
                    (*(byte *)(*(longlong *)(param_1 + 8) + 0x12 +
                              (longlong)*(int *)(pbVar10 + -4) * 0x18) & 1) == 0))) {
        lVar6 = uVar11 + (uint)-*(int *)(param_3 + 0x18) + 1;
        if (0 < (int)lVar6) {
          local_68 = lVar6;
          uVar5 = FUN_144a54ea4(param_3,lVar6);
          FUN_1447c6044(param_3,uVar5,local_68,0);
        }
        lVar6 = *(longlong *)(param_3 + 0x10);
        if (*(longlong *)(param_3 + 0x10) == 0) {
          lVar6 = param_3;
        }
        puVar1 = (uint *)(lVar6 + (uVar11 >> 5 & 0x7ffffff) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
      }
      uVar11 = uVar11 + 1;
      pbVar10 = pbVar10 + 0xc;
    } while (uVar2 != uVar11);
  }
  if (local_60 != 0) {
    LOCK();
    *(int *)(local_60 + 0x18) = *(int *)(local_60 + 0x18) + -1;
    UNLOCK();
    if (local_58 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_60 + 8));
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar8 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417a5414 FUN_1417a5414 body=216 status=ok
// SIG undefined FUN_1417a5414(void)

void FUN_1417a5414(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_140dba9e6(param_3,*(undefined2 *)(*(longlong *)(param_1 + 0x20) + 0x60));
  }
  uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x20) + 0x120);
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_3 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 == 0 || iVar5 < iVar3) goto LAB_1417a54a0;
  if (iVar3 == 0) {
LAB_1417a5465:
    if (*(int *)(param_3 + 0x24) <= (int)(uint)uVar2) {
      *(undefined4 *)(param_3 + 0x24) = 0x100;
      FUN_14497ddce(param_3,iVar3);
      iVar5 = *(int *)(param_3 + 0x20) + iVar7;
    }
    iVar6 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar6 = iVar5;
    }
    *(int *)(param_3 + 0x20) = iVar5;
    if (iVar5 % 0x20 != 0) {
      bVar4 = -(char)(iVar5 % 0x20);
      *(uint *)(param_3 + (longlong)(iVar6 >> 5) * 4) =
           (uint)(*(int *)(param_3 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
           (bVar4 & 0x1f);
    }
  }
  else {
    iVar6 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar6 = iVar3 + -1;
    }
    if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1417a5465;
    *(int *)(param_3 + 0x20) = iVar5;
  }
  FUN_1447c45ca(param_3,iVar3,iVar7,0);
LAB_1417a54a0:
  puVar1 = (uint *)(param_3 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 1417a54ec FUN_1417a54ec body=332 status=ok
// SIG undefined FUN_1417a54ec(void)

void FUN_1417a54ec(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined1 auStack_b8 [32];
  uint *local_98;
  uint local_88 [4];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 local_64;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x10000000000;
  puVar10 = local_88;
  local_98 = puVar10;
  FUN_14009e926(param_3,param_1 + 0x28,&local_58,2);
  local_88[0] = local_58;
  local_88[1] = uStack_54;
  local_88[2] = uStack_50;
  local_88[3] = uStack_4c;
  local_78 = local_48;
  uStack_74 = uStack_44;
  uStack_70 = uStack_40;
  uStack_6c = uStack_3c;
  local_68 = (int)local_38;
  local_64 = local_38._4_4_;
  iVar4 = -1;
  if (0x1f < (int)local_38 + 0x1fU) {
    lVar7 = 0;
    do {
      uVar2 = *puVar10;
      if (uVar2 != 0) {
        iVar6 = 0;
        if (uVar2 != 0) {
          for (; (uVar2 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
          }
        }
        iVar6 = iVar6 - (int)lVar7;
        if (iVar6 < (int)local_38) {
          iVar4 = iVar6;
        }
        break;
      }
      lVar7 = lVar7 + -0x20;
      puVar10 = puVar10 + 1;
    } while ((ulonglong)((int)local_38 + 0x1fU & 0xffffffe0) + lVar7 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0x10);
  lVar7 = *(longlong *)(param_1 + 8);
  uVar9 = 0;
  uVar8 = uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar1 = (uVar8 >> 1) + uVar9;
      if (*(ushort *)(lVar7 + (ulonglong)uVar1 * 0x10) < (ushort)iVar4) {
        uVar9 = uVar1 + (uVar8 & 1);
      }
      bVar3 = 1 < uVar8;
      uVar8 = uVar8 >> 1;
    } while (bVar3);
  }
  if (((((int)uVar9 < (int)uVar2) && (*(ushort *)(lVar7 + (ulonglong)uVar9 * 0x10) <= (ushort)iVar4)
       ) && (plVar5 = (longlong *)(lVar7 + (ulonglong)uVar9 * 0x10 + 8), plVar5 != (longlong *)0x0))
     && (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x10))(plVar5,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417a563a FUN_1417a563a body=170 status=ok
// SIG undefined FUN_1417a563a(void)

undefined8 FUN_1417a563a(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5);
}



// FUNCTION 1417a56e4 FUN_1417a56e4 body=29 status=ok
// SIG undefined FUN_1417a56e4(void)

undefined8 FUN_1417a56e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a5702 FUN_1417a5702 body=282 status=ok
// SIG undefined FUN_1417a5702(void)

void FUN_1417a5702(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  short *psVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  psVar1 = (short *)*param_1;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  lVar4 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,3);
  uVar5 = *(ushort *)(lVar2 + 0xc);
  puVar3 = *(ulonglong **)(lVar2 + 0x28);
  if (uVar5 != 0) {
    lVar7 = (ulonglong)uVar5 << 5;
    puVar6 = puVar3;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == *psVar1) goto LAB_1417a5760;
      puVar6 = puVar6 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar6 = (ulonglong *)0x0;
LAB_1417a5760:
  lVar7 = *param_3;
  if (*(ulonglong *)(lVar2 + 0x20) <= *puVar6) {
    *(int *)(lVar7 + lVar4 * 4) = (int)*puVar6 - (int)*(ulonglong *)(lVar2 + 0x20);
    lVar7 = *param_3;
    uVar5 = *(ushort *)(lVar2 + 0xc);
    puVar3 = *(ulonglong **)(lVar2 + 0x28);
  }
  if (uVar5 != 0) {
    lVar8 = (ulonglong)uVar5 << 5;
    puVar6 = puVar3;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == psVar1[1]) goto LAB_1417a57b3;
      puVar6 = puVar6 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  puVar6 = (ulonglong *)0x0;
LAB_1417a57b3:
  if (*(ulonglong *)(lVar2 + 0x20) <= *puVar6) {
    *(int *)(lVar7 + 4 + lVar4 * 4) = (int)*puVar6 - (int)*(ulonglong *)(lVar2 + 0x20);
    lVar7 = *param_3;
    uVar5 = *(ushort *)(lVar2 + 0xc);
    puVar3 = *(ulonglong **)(lVar2 + 0x28);
  }
  if (uVar5 != 0) {
    lVar8 = (ulonglong)uVar5 << 5;
    do {
      if (*(short *)((longlong)puVar3 + 0x1e) == psVar1[2]) goto LAB_1417a57f8;
      puVar3 = puVar3 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  puVar3 = (ulonglong *)0x0;
LAB_1417a57f8:
  if (*(ulonglong *)(lVar2 + 0x20) <= *puVar3) {
    *(int *)(lVar7 + 8 + lVar4 * 4) = (int)*puVar3 - (int)*(ulonglong *)(lVar2 + 0x20);
  }
  return;
}



// FUNCTION 1417a581c FUN_1417a581c body=242 status=ok
// SIG undefined FUN_1417a581c(void)

undefined8 FUN_1417a581c(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[3];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar6 = false;
  }
  else {
    bVar6 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5 & bVar6);
}



// FUNCTION 1417a590e FUN_1417a590e body=29 status=ok
// SIG undefined FUN_1417a590e(void)

undefined8 FUN_1417a590e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a592c FUN_1417a592c body=242 status=ok
// SIG undefined FUN_1417a592c(void)

undefined8 FUN_1417a592c(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[3];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar6 = false;
  }
  else {
    bVar6 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5 & bVar6);
}



// FUNCTION 1417a5a1e FUN_1417a5a1e body=29 status=ok
// SIG undefined FUN_1417a5a1e(void)

undefined8 FUN_1417a5a1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a5a3c FUN_1417a5a3c body=359 status=ok
// SIG undefined FUN_1417a5a3c(void)

void FUN_1417a5a3c(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  short *psVar1;
  longlong lVar2;
  ulonglong *puVar3;
  uint uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  psVar1 = (short *)*param_1;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  lVar5 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,4);
  uVar6 = *(ushort *)(lVar2 + 0xc);
  uVar4 = (uint)uVar6;
  puVar3 = *(ulonglong **)(lVar2 + 0x28);
  if (uVar4 != 0) {
    lVar8 = (ulonglong)uVar6 << 5;
    puVar7 = puVar3;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == *psVar1) goto LAB_1417a5a9a;
      puVar7 = puVar7 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_1417a5a9a:
  lVar8 = *param_3;
  if (*(ulonglong *)(lVar2 + 0x20) <= *puVar7) {
    *(int *)(lVar8 + lVar5 * 4) = (int)*puVar7 - (int)*(ulonglong *)(lVar2 + 0x20);
    lVar8 = *param_3;
    uVar6 = *(ushort *)(lVar2 + 0xc);
    uVar4 = (uint)uVar6;
    puVar3 = *(ulonglong **)(lVar2 + 0x28);
  }
  if (uVar6 != 0) {
    uVar9 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar3;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == psVar1[1]) goto LAB_1417a5aed;
      puVar7 = puVar7 + 4;
      uVar9 = uVar9 - 0x20;
    } while (uVar9 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_1417a5aed:
  if (*(ulonglong *)(lVar2 + 0x20) <= *puVar7) {
    *(int *)(lVar8 + 4 + lVar5 * 4) = (int)*puVar7 - (int)*(ulonglong *)(lVar2 + 0x20);
    lVar8 = *param_3;
    uVar6 = *(ushort *)(lVar2 + 0xc);
    uVar4 = (uint)uVar6;
    puVar3 = *(ulonglong **)(lVar2 + 0x28);
  }
  if (uVar6 != 0) {
    uVar9 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar3;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == psVar1[2]) goto LAB_1417a5b3a;
      puVar7 = puVar7 + 4;
      uVar9 = uVar9 - 0x20;
    } while (uVar9 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_1417a5b3a:
  if (*(ulonglong *)(lVar2 + 0x20) <= *puVar7) {
    *(int *)(lVar8 + 8 + lVar5 * 4) = (int)*puVar7 - (int)*(ulonglong *)(lVar2 + 0x20);
    lVar8 = *param_3;
    uVar6 = *(ushort *)(lVar2 + 0xc);
    puVar3 = *(ulonglong **)(lVar2 + 0x28);
    uVar4 = (uint)uVar6;
  }
  if (uVar6 != 0) {
    uVar9 = (ulonglong)(uVar4 << 5);
    do {
      if (*(short *)((longlong)puVar3 + 0x1e) == psVar1[3]) goto LAB_1417a5b7f;
      puVar3 = puVar3 + 4;
      uVar9 = uVar9 - 0x20;
    } while (uVar9 != 0);
  }
  puVar3 = (ulonglong *)0x0;
LAB_1417a5b7f:
  if (*(ulonglong *)(lVar2 + 0x20) <= *puVar3) {
    *(int *)(lVar8 + 0xc + lVar5 * 4) = (int)*puVar3 - (int)*(ulonglong *)(lVar2 + 0x20);
  }
  return;
}



// FUNCTION 1417a5ba4 FUN_1417a5ba4 body=29 status=ok
// SIG undefined FUN_1417a5ba4(void)

undefined8 FUN_1417a5ba4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a5bc2 FUN_1417a5bc2 body=29 status=ok
// SIG undefined FUN_1417a5bc2(void)

undefined8 FUN_1417a5bc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a5be0 FUN_1417a5be0 body=181 status=ok
// SIG undefined FUN_1417a5be0(void)

void FUN_1417a5be0(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x10) + 0xfa);
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_3 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 == 0 || iVar5 < iVar3) goto LAB_1417a5c5e;
  if (iVar3 == 0) {
LAB_1417a5c23:
    if (*(int *)(param_3 + 0x24) <= (int)(uint)uVar2) {
      *(undefined4 *)(param_3 + 0x24) = 0x100;
      FUN_14497ddce(param_3,iVar3);
      iVar5 = *(int *)(param_3 + 0x20) + iVar7;
    }
    iVar6 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar6 = iVar5;
    }
    *(int *)(param_3 + 0x20) = iVar5;
    if (iVar5 % 0x20 != 0) {
      bVar4 = -(char)(iVar5 % 0x20);
      *(uint *)(param_3 + (longlong)(iVar6 >> 5) * 4) =
           (uint)(*(int *)(param_3 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
           (bVar4 & 0x1f);
    }
  }
  else {
    iVar6 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar6 = iVar3 + -1;
    }
    if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1417a5c23;
    *(int *)(param_3 + 0x20) = iVar5;
  }
  FUN_1447c45ca(param_3,iVar3,iVar7,0);
LAB_1417a5c5e:
  puVar1 = (uint *)(param_3 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 1417a5c96 FUN_1417a5c96 body=29 status=ok
// SIG undefined FUN_1417a5c96(void)

undefined8 FUN_1417a5c96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a5cb4 FUN_1417a5cb4 body=29 status=ok
// SIG undefined FUN_1417a5cb4(void)

undefined8 FUN_1417a5cb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a5cd2 FUN_1417a5cd2 body=29 status=ok
// SIG undefined FUN_1417a5cd2(void)

undefined8 FUN_1417a5cd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a5cf0 FUN_1417a5cf0 body=272 status=ok
// SIG undefined FUN_1417a5cf0(void)

void FUN_1417a5cf0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  short *psVar1;
  longlong lVar2;
  bool bVar3;
  ulonglong *puVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  psVar1 = (short *)*param_1;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  lVar8 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,4);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar4 = *(ulonglong **)(lVar2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *psVar1) goto LAB_1417a5d45;
      puVar4 = puVar4 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1417a5d45:
  lVar6 = *param_3;
  if (*(ulonglong *)(lVar2 + 0x20) <= *puVar4) {
    *(int *)(lVar6 + lVar8 * 4) = (int)*puVar4 - (int)*(ulonglong *)(lVar2 + 0x20);
    lVar6 = *param_3;
  }
  lVar7 = 0;
  bVar3 = true;
  do {
    bVar5 = bVar3;
    if (*(ushort *)(lVar2 + 0xc) != 0) {
      puVar4 = *(ulonglong **)(lVar2 + 0x28);
      lVar9 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar4 + 0x1e) == psVar1[lVar7 + 1]) {
          if (puVar4 != (ulonglong *)0x0) {
            if (*(ulonglong *)(lVar2 + 0x20) <= *puVar4) {
              *(int *)(lVar6 + lVar8 * 4 + 4 + lVar7 * 4) =
                   (int)*puVar4 - (int)*(ulonglong *)(lVar2 + 0x20);
            }
          }
          break;
        }
        puVar4 = puVar4 + 4;
        lVar9 = lVar9 + -0x20;
      } while (lVar9 != 0);
    }
    lVar7 = 1;
    bVar3 = false;
  } while (bVar5);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar4 = *(ulonglong **)(lVar2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == psVar1[3]) goto LAB_1417a5de1;
      puVar4 = puVar4 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1417a5de1:
  if (*(ulonglong *)(lVar2 + 0x20) <= *puVar4) {
    *(int *)(*param_3 + 0xc + lVar8 * 4) = (int)*puVar4 - (int)*(ulonglong *)(lVar2 + 0x20);
  }
  return;
}



// FUNCTION 1417a5e00 FUN_1417a5e00 body=29 status=ok
// SIG undefined FUN_1417a5e00(void)

undefined8 FUN_1417a5e00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a5e1d FUN_1417a5e1d body=1221 status=ok
// SIG undefined FUN_1417a5e1d(void)

void FUN_1417a5e1d(longlong *param_1)

{
  longlong *plVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar4 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar4,param_1);
  *(undefined1 *)((longlong)puVar4 + 0x32) = 4;
  *puVar4 = &PTR_FUN_14a4da3e0;
  *(undefined4 *)(puVar4 + 8) = 0xffffffff;
  puVar4[0xd] = 0;
  *(undefined4 *)(puVar4 + 0xe) = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x74) = 0xffffffff00000080;
  puVar4[0x14] = 0;
  *(undefined4 *)(puVar4 + 0x15) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x7c) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x84) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x8c) = 0;
  *(undefined8 *)((longlong)puVar4 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar4 + 0xb4) = 0;
  puVar4[0x18] = 0;
  *(undefined4 *)(puVar4 + 0x19) = 0;
  puVar4[0x1e] = 0;
  *(undefined4 *)(puVar4 + 0x1f) = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1b] = 0;
  *(undefined8 *)((longlong)puVar4 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar4 + 0x104) = 0;
  puVar4[0x22] = 0;
  *(undefined4 *)(puVar4 + 0x23) = 0;
  *(undefined4 *)(puVar4 + 0x2a) = 0;
  puVar4[0x24] = 0;
  puVar4[0x25] = 0;
  *(undefined4 *)((longlong)puVar4 + 0x154) = 0x100;
  puVar4[0x2d] = 0;
  puVar4[0x2e] = 0x8000000000;
  puVar4[0x31] = 0;
  puVar4[0x32] = 0x8000000000;
  puVar4[0x35] = 0;
  puVar4[0x36] = 0x8000000000;
  puVar4[0x38] = 0;
  *(undefined4 *)(puVar4 + 0x39) = 0;
  uVar8 = FUN_14009d2a0();
  puVar4[0x37] = uVar8;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar5 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14a4ab7b0;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar12 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar12 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar12;
  local_48[2] = lVar9;
  *local_48 = &PTR_FUN_14a4e0480;
  local_48[3] = 0;
  iVar11 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    uVar3 = *(uint *)((longlong)puVar4 + 0xc);
    *(uint *)(local_48 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar11 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar11 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar11 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar10;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar11 = iVar10;
      }
    }
  }
  iVar10 = local_40;
  puVar6 = local_48;
  plVar1 = puVar4 + 0x38;
  *(int *)((longlong)puVar5 + 0x1c) = iVar11;
  puVar5[4] = FUN_14769bb5c;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  if (*(int *)(puVar4 + 0x39) == 0) {
LAB_1417a601d:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar5 = (undefined8 *)*plVar1;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(puVar4 + 0x39) = 0;
      goto LAB_1417a601d;
    }
  }
  puVar4[0x38] = puVar6;
  *(int *)(puVar4 + 0x39) = iVar10;
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_1417a604b;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1417a604b:
  uVar7 = FUN_1408bae02();
  *(undefined4 *)(puVar4 + 7) = uVar7;
  *(undefined2 *)(puVar4 + 6) = *(undefined2 *)(puVar4[0x37] + 0x62);
  if ((*(uint *)(puVar4 + 1) & 0x10) != 0) {
    uVar2 = *(undefined2 *)(puVar4[0x37] + 0x4a);
    local_48 = (undefined8 *)puVar4[2];
    if ((local_48 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_48,uVar2);
    local_50 = puVar4[2];
    uVar2 = *(undefined2 *)(puVar4[0x37] + 0x58);
    if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_50,uVar2);
    local_58 = puVar4[2];
    uVar2 = *(undefined2 *)(puVar4[0x37] + 0xf2);
    if ((local_58 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_58,uVar2);
    local_60 = puVar4[2];
    uVar2 = *(undefined2 *)(puVar4[0x37] + 0x130);
    if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_60,uVar2);
    local_68 = puVar4[2];
    uVar2 = *(undefined2 *)(puVar4[0x37] + 0x5a);
    if ((local_68 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_68,uVar2);
    local_70 = puVar4[2];
    uVar2 = *(undefined2 *)(puVar4[0x37] + 0x140);
    if ((local_70 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_70,uVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417a62e3 FUN_1417a62e3 body=49 status=ok
// SIG undefined FUN_1417a62e3(void)

longlong FUN_1417a62e3(void)

{
  if (DAT_14cab60b8 == 0) {
    FUN_14073dd9a(&DAT_14cab60b8,&PTR_LAB_14a4da7a8);
  }
  return DAT_14cab60b8;
}



// FUNCTION 1417a6314 FUN_1417a6314 body=199 status=ok
// SIG undefined FUN_1417a6314(void)

void FUN_1417a6314(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_30;
  uint local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x50);
    if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar2 + 0x128))) &&
       (local_20 = *(undefined8 *)(*(longlong *)(lVar2 + 0x120) + (longlong)iVar1 * 8),
       0 < (int)local_20)) {
      plVar3 = (longlong *)FUN_14009d2a0();
      lVar4 = (longlong)*(int *)(param_1 + 0x50) * 0x58;
      lVar2 = *plVar3 + lVar4;
      lVar4 = lVar4 + *plVar3;
      plVar5 = (longlong *)(lVar4 + 0x30);
      if ((*(byte *)(lVar4 + 0x50) & 2) == 0) {
        plVar5 = (longlong *)*plVar5;
      }
      local_40 = *(undefined8 *)(param_1 + 0x28);
      local_30 = (ulonglong)*(ushort *)(lVar2 + 0x10) * 4 + plVar3[2];
      local_28 = (uint)*(ushort *)(lVar2 + 0x12);
      local_48 = param_2;
      (**(code **)(*plVar5 + 8))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a63dc FUN_1417a63dc body=679 status=ok
// SIG undefined FUN_1417a63dc(void)

void FUN_1417a63dc(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a4db370;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  puVar1[0x16] = 0;
  *(undefined4 *)(puVar1 + 0x17) = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xc4) = 0;
  puVar1[0x1a] = 0;
  *(undefined4 *)(puVar1 + 0x1b) = 0;
  lVar3 = FUN_14038fb82();
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(lVar3 + 0xe4);
  *(undefined1 *)((longlong)puVar1 + 0x32) = 0xc;
  uVar2 = FUN_1408bae02();
  *(uint *)(puVar1 + 7) = *(uint *)(puVar1 + 7) | uVar2;
  if ((*(uint *)(puVar1 + 1) & 0x10) != 0) {
    local_18 = puVar1[2];
    if ((local_18 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_20 = FUN_1458d4322();
    if ((local_20 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_18);
    local_28 = puVar1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_30 = FUN_145920b2e();
    if ((local_30 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
    local_38 = puVar1[2];
    if ((local_38 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_40 = FUN_145957af6();
    if ((local_40 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_40);
    }
    FUN_140909372(&local_40,&local_38);
    local_48 = puVar1[2];
    if ((local_48 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_50 = FUN_145a6849c();
    if ((local_50 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_50);
    }
    FUN_140909372(&local_50,&local_48);
    local_58 = FUN_1458848dc();
    if (local_58 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_58);
    }
    local_60 = puVar1[2];
    if ((local_60 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_60,&local_58);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a6684 FUN_1417a6684 body=1254 status=ok
// SIG undefined FUN_1417a6684(void)

void FUN_1417a6684(longlong *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [32];
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar13 = (uint *)(param_1 + 2);
  iVar11 = (int)param_1[5];
  if (iVar11 == 0) {
    uVar17 = 1;
    uVar15 = 0;
    iVar4 = 0;
    iVar10 = 0;
  }
  else {
    puVar3 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar3 = puVar13;
    }
    uVar14 = *puVar3;
    if (uVar14 == 0) {
      iVar4 = iVar11 + 0x1e;
      if (-1 < iVar11 + -1) {
        iVar4 = iVar11 + -1;
      }
      uVar15 = 0;
      uVar17 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar17 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar17 == uVar15) {
          iVar8 = 1;
          goto LAB_1417a67f0;
        }
        iVar10 = iVar10 + 0x20;
        uVar14 = puVar3[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar17 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar17 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar11 <= iVar4) {
      iVar4 = iVar11;
    }
  }
  iVar8 = iVar11;
  if (iVar4 != iVar11) {
    uVar14 = 0xffffffff;
    do {
      lVar12 = *param_1;
      lVar9 = (longlong)iVar4 * 0x3f0;
      plVar16 = *(longlong **)(lVar12 + 0x2f0 + lVar9);
      if (plVar16 != (longlong *)0x0) {
        local_98 = puVar13;
        (**(code **)(*plVar16 + 0xbd0))(plVar16,lVar9 + lVar12 + 0x3d0);
        puVar13 = local_98;
      }
      *(undefined8 *)(lVar12 + 0x3d0 + lVar9) = 0;
      uVar14 = uVar14 & ~(uint)uVar17;
      puVar3 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar3 = puVar13;
      }
      iVar8 = (int)param_1[5];
      iVar4 = (int)uVar15;
      lVar12 = (longlong)iVar4;
      uVar5 = puVar3[lVar12] & uVar14;
      if (uVar5 == 0) {
        iVar6 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar6 = iVar8 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar4 < iVar6) {
          lVar9 = 0;
          do {
            uVar5 = puVar3[lVar12 + lVar9 + 1];
            if (uVar5 != 0) {
              uVar15 = (ulonglong)(iVar4 + (int)lVar9 + 1);
              uVar14 = 0xffffffff;
              goto LAB_1417a67c4;
            }
            iVar10 = iVar10 + 0x20;
            lVar9 = lVar9 + 1;
          } while (iVar7 - lVar12 != lVar9);
          uVar14 = 0xffffffff;
          iVar4 = iVar7;
        }
        uVar15 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar8;
      }
      else {
LAB_1417a67c4:
        uVar17 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar17 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar4 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar8 <= iVar4) {
          iVar4 = iVar8;
        }
      }
    } while (iVar4 != iVar11);
  }
LAB_1417a67f0:
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar16 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[8];
    }
    iVar11 = (int)param_1[9];
    iVar4 = iVar11 + 3;
    if (-1 < iVar11) {
      iVar4 = iVar11;
    }
    if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = puVar13;
      if (iVar8 == 0) {
        iVar11 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar11 = (int)param_1[5];
      }
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      local_78 = local_58;
      uVar2 = local_78;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar4 = local_78._4_4_;
      local_90 = param_1;
      if ((local_78._4_4_ != iVar11) || (local_78 = uVar2, uStack_60 != puVar13)) {
        do {
          local_78 = uVar2;
          *(undefined4 *)
           ((longlong)plVar16 + (longlong)*(int *)(*local_90 + 0x3e4 + (longlong)iVar4 * 0x3f0) * 4)
               = 0xffffffff;
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar4 = local_78._4_4_;
          uVar2 = local_78;
        } while (local_90 != param_1 ||
                 ((uint *)CONCAT44(uStack_7c,uStack_80) != puVar13 || local_78._4_4_ != iVar11));
      }
    }
    else if (0 < iVar11) {
      lVar12 = 0;
      do {
        *(undefined4 *)((longlong)plVar16 + lVar12 * 4) = 0xffffffff;
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)param_1[9]);
    }
    iVar11 = (int)param_1[5];
    if (iVar11 == 0) {
      uVar15 = 0;
      uVar17 = 1;
      iVar4 = 0;
      iVar10 = 0;
    }
    else {
      puVar3 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar3 = puVar13;
      }
      uVar14 = *puVar3;
      if (uVar14 == 0) {
        iVar4 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar4 = iVar11 + -1;
        }
        uVar15 = 0;
        uVar17 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar17 = uVar15;
        }
        iVar10 = 0;
        do {
          if (uVar17 == uVar15) goto LAB_1417a6994;
          iVar10 = iVar10 + 0x20;
          uVar14 = puVar3[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar15 = 0;
        iVar10 = 0;
      }
      uVar17 = (ulonglong)(-uVar14 & uVar14);
      uVar1 = uVar17 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar11 <= iVar4) {
        iVar4 = iVar11;
      }
    }
    if (iVar4 < iVar11) {
      uVar14 = 0xffffffff;
      do {
        lVar12 = *param_1 + (longlong)iVar4 * 0x3f0;
        if (*(char *)(*param_1 + 0x3c0 + (longlong)iVar4 * 0x3f0) == '\x01') {
          *(undefined1 *)(lVar12 + 0x3c0) = 0;
        }
        FUN_1406b907e(lVar12 + 0x180);
        FUN_1406b907e(lVar12 + 0x10);
        uVar14 = uVar14 & ~(uint)uVar17;
        puVar3 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar3 = puVar13;
        }
        iVar11 = (int)param_1[5];
        iVar4 = (int)uVar15;
        lVar12 = (longlong)iVar4;
        uVar5 = puVar3[lVar12] & uVar14;
        if (uVar5 == 0) {
          iVar8 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar8 = iVar11 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar6 = iVar8;
          if (iVar8 < iVar4) {
            iVar6 = iVar4;
          }
          if (iVar8 <= iVar4) break;
          lVar9 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar5 = puVar3[lVar12 + lVar9 + 1];
            if (uVar5 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar6 - lVar12 == lVar9) goto LAB_1417a6994;
          }
          uVar15 = (ulonglong)(iVar4 + (int)lVar9 + 1);
          uVar14 = 0xffffffff;
        }
        uVar17 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar17 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar4 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar4 < iVar11);
    }
LAB_1417a6994:
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_1410d8858(param_1);
    }
    param_1[6] = 0xffffffff;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a6b6c FUN_1417a6b6c body=394 status=ok
// SIG undefined FUN_1417a6b6c(void)

longlong * FUN_1417a6b6c(longlong *param_1)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != (longlong *)0x0) {
    if (DAT_14cad2858 == 0) {
      local_30 = &local_18;
      local_18 = FUN_144a7958c;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_146395584;
      local_38 = &LAB_147a0ba80;
      local_40 = &LAB_14575ccce;
      local_48 = L"Engine";
      local_50 = 0x40000000000;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) goto LAB_1417a6bba;
    lVar1 = FUN_144a6c4d8();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
LAB_1417a6c05:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
    }
    lVar1 = FUN_140e1d66a();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
         lVar1 + 0x30)) && (lVar1 = (**(code **)(*param_1 + 0x5d8))(param_1), lVar1 != 0))
    goto LAB_1417a6c05;
  }
  param_1 = (longlong *)0x0;
LAB_1417a6bba:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1417a6d08 FUN_1417a6d08 body=930 status=ok
// SIG undefined FUN_1417a6d08(void)

undefined8 * FUN_1417a6d08(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ushort *puVar15;
  
  uVar9 = param_1[1];
  uVar5 = *(undefined4 *)((longlong)param_1 + 0xc);
  uVar6 = *(undefined4 *)(param_1 + 2);
  uVar7 = *(undefined4 *)((longlong)param_1 + 0x14);
  uVar8 = *(undefined4 *)(param_1 + 3);
  *param_2 = *param_1;
  param_2[1] = uVar9;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
  *(undefined4 *)(param_2 + 2) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar7;
  *(undefined4 *)(param_2 + 3) = uVar8;
  puVar1 = param_2 + 4;
  param_2[8] = 0x10000000000;
  param_2[0xd] = 0x10000000000;
  param_2[0x14] = 0x10000000000;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x19] = 0x10000000000;
  uVar3 = *(ushort *)((longlong)param_2 + 2);
  iVar13 = uVar3 + 1;
  iVar11 = iVar13;
  if (0xff < uVar3) {
    FUN_14497ddce(puVar1,0);
    iVar11 = *(int *)(param_2 + 8) + iVar13;
  }
  iVar14 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar14 = iVar11;
  }
  *(int *)(param_2 + 8) = iVar11;
  if (iVar11 % 0x20 != 0) {
    bVar10 = -(char)(iVar11 % 0x20);
    *(uint *)((longlong)puVar1 + (longlong)(iVar14 >> 5) * 4) =
         (uint)(*(int *)((longlong)puVar1 + (longlong)(iVar14 >> 5) * 4) << (bVar10 & 0x1f)) >>
         (bVar10 & 0x1f);
  }
  FUN_1447c45ca(puVar1,0,iVar13,0);
  puVar2 = (uint *)((longlong)param_2 + (ulonglong)(uVar3 >> 5) * 4 + 0x20);
  *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
  uVar3 = *(ushort *)((longlong)param_2 + 4);
  iVar13 = uVar3 + 1;
  iVar11 = *(int *)(param_2 + 8);
  iVar14 = iVar13 - iVar11;
  if (iVar14 != 0 && iVar11 <= iVar13) {
    if (iVar11 == 0) {
LAB_1417a6df2:
      if (*(int *)((longlong)param_2 + 0x44) <= (int)(uint)uVar3) {
        *(undefined4 *)((longlong)param_2 + 0x44) = 0x100;
        FUN_14497ddce(puVar1,iVar11);
        iVar13 = *(int *)(param_2 + 8) + iVar14;
      }
      iVar12 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar12 = iVar13;
      }
      *(int *)(param_2 + 8) = iVar13;
      if (iVar13 % 0x20 != 0) {
        bVar10 = -(char)(iVar13 % 0x20);
        *(uint *)((longlong)puVar1 + (longlong)(iVar12 >> 5) * 4) =
             (uint)(*(int *)((longlong)puVar1 + (longlong)(iVar12 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    else {
      iVar12 = iVar11 + 0x1e;
      if (-1 < iVar11 + -1) {
        iVar12 = iVar11 + -1;
      }
      if (iVar12 >> 5 != (uint)(uVar3 >> 5)) goto LAB_1417a6df2;
      *(int *)(param_2 + 8) = iVar13;
    }
    FUN_1447c45ca(puVar1,iVar11,iVar14,0);
  }
  puVar2 = (uint *)((longlong)param_2 + (ulonglong)(uVar3 >> 5) * 4 + 0x20);
  *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
  uVar3 = *(ushort *)((longlong)param_2 + 6);
  iVar13 = uVar3 + 1;
  iVar11 = *(int *)(param_2 + 8);
  iVar14 = iVar13 - iVar11;
  if (iVar14 != 0 && iVar11 <= iVar13) {
    if (iVar11 == 0) {
LAB_1417a6e78:
      if (*(int *)((longlong)param_2 + 0x44) <= (int)(uint)uVar3) {
        *(undefined4 *)((longlong)param_2 + 0x44) = 0x100;
        FUN_14497ddce(puVar1,iVar11);
        iVar13 = *(int *)(param_2 + 8) + iVar14;
      }
      iVar12 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar12 = iVar13;
      }
      *(int *)(param_2 + 8) = iVar13;
      if (iVar13 % 0x20 != 0) {
        bVar10 = -(char)(iVar13 % 0x20);
        *(uint *)((longlong)puVar1 + (longlong)(iVar12 >> 5) * 4) =
             (uint)(*(int *)((longlong)puVar1 + (longlong)(iVar12 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    else {
      iVar12 = iVar11 + 0x1e;
      if (-1 < iVar11 + -1) {
        iVar12 = iVar11 + -1;
      }
      if (iVar12 >> 5 != (uint)(uVar3 >> 5)) goto LAB_1417a6e78;
      *(int *)(param_2 + 8) = iVar13;
    }
    FUN_1447c45ca(puVar1,iVar11,iVar14,0);
  }
  puVar2 = (uint *)((longlong)param_2 + (ulonglong)(uVar3 >> 5) * 4 + 0x20);
  *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
  uVar3 = *(ushort *)(param_2 + 1);
  iVar13 = uVar3 + 1;
  iVar11 = *(int *)(param_2 + 8);
  iVar14 = iVar13 - iVar11;
  if (iVar14 == 0 || iVar13 < iVar11) goto LAB_1417a6f48;
  if (iVar11 == 0) {
LAB_1417a6f08:
    if (*(int *)((longlong)param_2 + 0x44) <= (int)(uint)uVar3) {
      *(undefined4 *)((longlong)param_2 + 0x44) = 0x100;
      FUN_14497ddce(puVar1,iVar11);
      iVar13 = *(int *)(param_2 + 8) + iVar14;
    }
    iVar12 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar12 = iVar13;
    }
    *(int *)(param_2 + 8) = iVar13;
    if (iVar13 % 0x20 != 0) {
      bVar10 = -(char)(iVar13 % 0x20);
      *(uint *)((longlong)puVar1 + (longlong)(iVar12 >> 5) * 4) =
           (uint)(*(int *)((longlong)puVar1 + (longlong)(iVar12 >> 5) * 4) << (bVar10 & 0x1f)) >>
           (bVar10 & 0x1f);
    }
  }
  else {
    iVar12 = iVar11 + 0x1e;
    if (-1 < iVar11 + -1) {
      iVar12 = iVar11 + -1;
    }
    if (iVar12 >> 5 != (uint)(uVar3 >> 5)) goto LAB_1417a6f08;
    *(int *)(param_2 + 8) = iVar13;
  }
  FUN_1447c45ca(puVar1,iVar11,iVar14,0);
LAB_1417a6f48:
  puVar2 = (uint *)((longlong)param_2 + (ulonglong)(uVar3 >> 5) * 4 + 0x20);
  *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
  puVar15 = (ushort *)*param_3;
  puVar4 = (ushort *)param_3[1];
  if (puVar15 != puVar4) {
    puVar1 = param_2 + 9;
    do {
      uVar3 = *puVar15;
      iVar13 = uVar3 + 1;
      iVar11 = *(int *)(param_2 + 0xd);
      iVar14 = iVar13 - iVar11;
      if (iVar14 != 0 && iVar11 <= iVar13) {
        if (iVar11 == 0) {
LAB_1417a6f9b:
          if (*(int *)((longlong)param_2 + 0x6c) <= (int)(uint)uVar3) {
            *(undefined4 *)((longlong)param_2 + 0x6c) = 0x100;
            FUN_14497ddce(puVar1,iVar11);
            iVar13 = *(int *)(param_2 + 0xd) + iVar14;
          }
          iVar12 = iVar13 + 0x1f;
          if (-1 < iVar13) {
            iVar12 = iVar13;
          }
          *(int *)(param_2 + 0xd) = iVar13;
          if (iVar13 % 0x20 != 0) {
            bVar10 = -(char)(iVar13 % 0x20);
            *(uint *)((longlong)puVar1 + (longlong)(iVar12 >> 5) * 4) =
                 (uint)(*(int *)((longlong)puVar1 + (longlong)(iVar12 >> 5) * 4) << (bVar10 & 0x1f))
                 >> (bVar10 & 0x1f);
          }
        }
        else {
          iVar12 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar12 = iVar11 + -1;
          }
          if (iVar12 >> 5 != (uint)(uVar3 >> 5)) goto LAB_1417a6f9b;
          *(int *)(param_2 + 0xd) = iVar13;
        }
        FUN_1447c45ca(puVar1,iVar11,iVar14,0);
      }
      puVar2 = (uint *)((longlong)puVar1 + (ulonglong)(uVar3 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar4);
  }
  return param_2;
}



// FUNCTION 1417a70aa FUN_1417a70aa body=234 status=ok
// SIG undefined FUN_1417a70aa(void)

void FUN_1417a70aa(longlong *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar2,param_1);
  *puVar2 = &PTR_FUN_14a4dc090;
  *(undefined1 *)((longlong)puVar2 + 0x32) = 4;
  if ((*(uint *)(puVar2 + 1) & 0x10) != 0) {
    lVar3 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar3 + 0x140);
    local_20 = puVar2[2];
    if ((local_20 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_20,uVar1);
    local_28 = FUN_1412217cc();
    if (local_28 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_28);
    }
    local_30 = puVar2[2];
    if ((local_30 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_30,&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a7195 FUN_1417a7195 body=973 status=ok
// SIG undefined FUN_1417a7195(void)

void FUN_1417a7195(longlong *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  undefined1 *local_30;
  longlong local_28;
  undefined2 local_20;
  undefined2 local_1e;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar2 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar2,param_1);
  *puVar2 = &PTR_FUN_14a4dc420;
  puVar2[0xc] = 0;
  *(undefined4 *)(puVar2 + 0xd) = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x6c) = 0xffffffff00000080;
  puVar2[0x15] = 0x10000000000;
  *(undefined8 *)((longlong)puVar2 + 0x74) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x7c) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x84) = 0;
  puVar2[0x1a] = 0x10000000000;
  puVar2[0x1b] = 0;
  puVar2[0x1c] = 0;
  *(undefined1 *)((longlong)puVar2 + 0x32) = 8;
  lVar3 = FUN_14009d2a0();
  local_30 = local_1c;
  local_28 = *(longlong *)(lVar3 + 0xbc);
  local_20 = *(undefined2 *)(lVar3 + 0xc4);
  local_1e = *(undefined2 *)(lVar3 + 0xc6);
  local_38 = &local_28;
  FUN_1403b5126(puVar2 + 0x11,&local_38,CONCAT71((int7)((ulonglong)local_30 >> 8),2));
  if ((*(uint *)(puVar2 + 1) & 0x10) != 0) {
    local_38 = (longlong *)FUN_14099c56c();
    if (local_38 != (longlong *)0x0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_38);
    }
    local_28 = puVar2[2];
    if ((local_28 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_28,&local_38);
    local_40 = FUN_145920b2e();
    if (local_40 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(local_40);
    }
    local_48 = puVar2[2];
    if ((local_48 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c();
    }
    FUN_140909372(&local_48,&local_40);
    local_50 = puVar2[2];
    if ((local_50 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    local_58 = FUN_1412217cc();
    if ((local_58 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(local_58);
    }
    FUN_140909372(&local_58,&local_50);
    lVar3 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar3 + 0xbc);
    local_60 = puVar2[2];
    if ((local_60 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_60,uVar1);
    lVar3 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar3 + 0xbe);
    local_68 = puVar2[2];
    if ((local_68 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_68,uVar1);
    lVar3 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar3 + 0xc0);
    local_70 = puVar2[2];
    if ((local_70 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_70,uVar1);
    lVar3 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar3 + 0xc2);
    local_78 = puVar2[2];
    if ((local_78 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_78,uVar1);
    lVar3 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar3 + 0xc4);
    local_80 = puVar2[2];
    if ((local_80 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_80,uVar1);
    lVar3 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar3 + 0xc6);
    local_88 = puVar2[2];
    if ((local_88 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_88,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a7564 FUN_1417a7564 body=889 status=ok
// SIG undefined FUN_1417a7564(void)

ulonglong FUN_1417a7564(longlong param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  uint *puVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  int local_c8;
  uint local_c4;
  uint *local_c0;
  uint local_b8;
  int local_b4;
  int local_b0;
  uint local_a8 [8];
  undefined8 local_88;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar7 = FUN_14009d2a0();
  local_88 = 0x10000000000;
  local_60 = 0x10000000000;
  local_58 = 0;
  uStack_50 = 0;
  uVar3 = *(ushort *)(lVar7 + 0x124);
  iVar15 = uVar3 + 1;
  iVar14 = iVar15;
  if (0xff < uVar3) {
    FUN_14497ddce(local_a8,0);
    iVar14 = (int)local_88 + iVar15;
  }
  iVar6 = iVar14 + 0x1f;
  if (-1 < iVar14) {
    iVar6 = iVar14;
  }
  local_88 = CONCAT44(local_88._4_4_,iVar14);
  if (iVar14 % 0x20 != 0) {
    bVar13 = -(char)(iVar14 % 0x20);
    local_a8[iVar6 >> 5] = (local_a8[iVar6 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
  }
  FUN_1447c45ca(local_a8,0,iVar15,0);
  uVar20 = 1;
  local_a8[uVar3 >> 5] = local_a8[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
  FUN_1406abdee(local_a8,param_1 + 0x88);
  cVar5 = FUN_14050a5e0();
  if (cVar5 == '\0') {
    lVar7 = *(longlong *)(param_2 + 0x548);
    puVar1 = (uint *)(lVar7 + 0x18);
    iVar14 = *(int *)(lVar7 + 0x30);
    if (iVar14 == 0) {
      local_b0 = 0;
      local_c8 = 0;
      local_b4 = 0;
    }
    else {
      puVar17 = *(uint **)(lVar7 + 0x28);
      if (*(uint **)(lVar7 + 0x28) == (uint *)0x0) {
        puVar17 = puVar1;
      }
      uVar19 = *puVar17;
      if (uVar19 == 0) {
        iVar15 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar15 = iVar14 + -1;
        }
        uVar18 = 0;
        uVar16 = (ulonglong)(uint)(iVar15 >> 5);
        if (iVar15 >> 5 < 1) {
          uVar16 = uVar18;
        }
        local_c8 = (int)uVar16 + 1;
        local_b0 = (int)uVar16 * 0x20 + 0x20;
        iVar15 = 0;
        do {
          local_b4 = iVar14;
          if (uVar16 == uVar18) goto LAB_1417a76f1;
          iVar15 = iVar15 + 0x20;
          uVar19 = puVar17[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar19 == 0);
        local_c8 = (int)uVar18;
        local_b0 = iVar15;
      }
      else {
        local_b0 = 0;
        local_c8 = 0;
      }
      uVar20 = -uVar19 & uVar19;
      uVar16 = (ulonglong)uVar20 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_b4 = (local_b0 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      if (iVar14 <= local_b4) {
        local_b4 = iVar14;
      }
    }
LAB_1417a76f1:
    local_b8 = 0xffffffff;
    local_d0 = (longlong *)(lVar7 + 8);
    local_c4 = uVar20;
    local_c0 = puVar1;
    do {
      if (((local_b4 == iVar14) && (local_c0 == puVar1)) && (local_d0 == (longlong *)(lVar7 + 8))) {
        uVar16 = 0;
        goto LAB_1417a77af;
      }
      lVar9 = *(longlong *)(*local_d0 + 0x100 + (longlong)local_b4 * 0x128);
      plVar4 = *(longlong **)(*local_d0 + 0x108 + (longlong)local_b4 * 0x128);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        plVar8 = plVar4 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
      plVar8 = (longlong *)FUN_140127e98(lVar9 + 0x38);
      if ((plVar8 != (longlong *)0x0) && (lVar9 = (**(code **)(*plVar8 + 0x18))(plVar8), lVar9 != 0)
         ) {
        uVar10 = FUN_140127f54();
        lVar11 = FUN_144718840(lVar9,uVar10);
        if (lVar11 != 0) goto LAB_1417a779d;
        uVar10 = *(undefined8 *)(lVar9 + 0x10);
        uVar12 = FUN_140127f54();
        cVar5 = FUN_144a7ff9e(uVar10,uVar12);
        if (cVar5 != '\0') goto LAB_1417a779d;
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar4 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
      local_b8 = local_b8 & ~local_c4;
      FUN_1449c0562(&local_c8);
    } while( true );
  }
  uVar16 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
LAB_1417a77af:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
LAB_1417a779d:
  uVar16 = CONCAT71((int7)((ulonglong)&local_c8 >> 8),1);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  goto LAB_1417a77af;
}



// FUNCTION 1417a78de FUN_1417a78de body=324 status=ok
// SIG undefined FUN_1417a78de(void)

void FUN_1417a78de(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a4da7f0;
  puVar1[8] = &PTR_FUN_14a4daad0;
  puVar1[9] = 0;
  puVar1[10] = 0xffffffffffffffff;
  *(undefined1 *)((longlong)puVar1 + 0x32) = 8;
  uVar2 = FUN_1408bae02();
  *(uint *)(puVar1 + 7) = uVar2 | 0x10;
  *puVar1 = &PTR_FUN_14a4dc800;
  puVar1[8] = &PTR_FUN_14a4dcae0;
  lVar3 = FUN_14038fb82();
  *(undefined2 *)(puVar1 + 6) = *(undefined2 *)(lVar3 + 0x54);
  *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(lVar3 + 0x5c);
  if ((*(uint *)(puVar1 + 1) & 0x10) != 0) {
    local_18 = puVar1[2];
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_20 = FUN_1413336e6();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_18);
    local_28 = puVar1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_30 = FUN_14099c56c();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a7a23 FUN_1417a7a23 body=364 status=ok
// SIG undefined FUN_1417a7a23(void)

void FUN_1417a7a23(longlong *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar2,param_1);
  *puVar2 = &PTR_FUN_14a4de240;
  puVar2[8] = 0;
  puVar2[9] = 0;
  *(undefined4 *)(puVar2 + 10) = 0xffffffff;
  *(undefined4 *)(puVar2 + 7) = 4;
  *(undefined1 *)((longlong)puVar2 + 0x32) = 8;
  if ((*(uint *)(puVar2 + 1) & 0x10) != 0) {
    lVar3 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar3 + 0xe4);
    local_28 = puVar2[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_28,uVar1);
    local_30 = puVar2[2];
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_38 = FUN_14588a226();
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_38);
    }
    FUN_140909372(&local_38,&local_30);
    uVar1 = *(undefined2 *)(lVar3 + 0xe6);
    local_40 = puVar2[2];
    if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_40,uVar1);
    uVar1 = *(undefined2 *)(lVar3 + 0xf4);
    local_48 = puVar2[2];
    if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14122166c(&local_48,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a7b90 FUN_1417a7b90 body=133 status=ok
// SIG undefined FUN_1417a7b90(void)

ulonglong FUN_1417a7b90(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x74)) {
    lVar2 = FUN_14009d2a0();
    uVar1 = *(ushort *)(lVar2 + 0xf0);
    lVar2 = FUN_14482820e(param_2 + 0x28);
    if (((uVar1 == 0xffff) ||
        (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1))
       || ((*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0)) {
      lVar2 = FUN_14009d2a0();
      uVar1 = *(ushort *)(lVar2 + 0x10e);
      lVar2 = FUN_14482820e(param_2 + 0x28);
      if ((uVar1 == 0xffff) ||
         (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)
         ) {
        uVar3 = 0;
      }
      else {
        uVar3 = (ulonglong)
                CONCAT11((char)(uVar1 >> 8),
                         (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0
                        );
      }
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1417a7c16 FUN_1417a7c16 body=72 status=ok
// SIG undefined FUN_1417a7c16(void)

undefined8 FUN_1417a7c16(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_14009d2a0();
  uVar1 = *(ushort *)(lVar3 + 0xf4);
  lVar3 = FUN_14482820e(param_2 + 0x28);
  if (((uVar1 == 0xffff) ||
      (*(uint *)(lVar3 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar3 + 0x20) < (int)(uint)uVar1))
     || (uVar2 = *(uint *)(lVar3 + (ulonglong)(uVar1 >> 5) * 4), (uVar2 >> (uVar1 & 0x1f) & 1) == 0)
     ) {
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
  }
  return uVar4;
}



// FUNCTION 1417a7c5e FUN_1417a7c5e body=45 status=ok
// SIG undefined FUN_1417a7c5e(void)

void FUN_1417a7c5e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *puVar1 = &PTR_FUN_14a4df110;
  return;
}



// FUNCTION 1417a7c8c FUN_1417a7c8c body=40 status=ok
// SIG undefined FUN_1417a7c8c(void)

undefined8 FUN_1417a7c8c(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a7cb4 FUN_1417a7cb4 body=40 status=ok
// SIG undefined FUN_1417a7cb4(void)

undefined8 FUN_1417a7cb4(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a7cdc FUN_1417a7cdc body=69 status=ok
// SIG undefined FUN_1417a7cdc(void)

undefined8 * FUN_1417a7cdc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4de240;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a7d22 FUN_1417a7d22 body=70 status=ok
// SIG undefined FUN_1417a7d22(void)

undefined8 * FUN_1417a7d22(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4df5c0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a7d68 FUN_1417a7d68 body=53 status=ok
// SIG undefined FUN_1417a7d68(void)

undefined4 FUN_1417a7d68(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  lVar4 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar4 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar4 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4);
    uVar3 = CONCAT31((int3)(uVar2 >> 8),(uVar2 >> (uVar1 & 0x1f) & 1) != 0);
  }
  return uVar3;
}



// FUNCTION 1417a7d9e FUN_1417a7d9e body=29 status=ok
// SIG undefined FUN_1417a7d9e(void)

undefined8 FUN_1417a7d9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a7dbb FUN_1417a7dbb body=313 status=ok
// SIG undefined FUN_1417a7dbb(void)

void FUN_1417a7dbb(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  uint local_68 [8];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0x10000000000;
  lVar7 = 0;
  do {
    uVar2 = local_48;
    uVar1 = *(ushort *)(param_1 + lVar7 * 2);
    if (uVar1 != 0xffff) {
      iVar4 = uVar1 + 1;
      iVar6 = iVar4 - (int)local_48;
      if (iVar6 != 0 && (int)local_48 <= iVar4) {
        if ((int)local_48 == 0) {
LAB_1417a7e35:
          if (local_48._4_4_ <= (int)(uint)uVar1) {
            local_48 = CONCAT44(0x100,(int)local_48);
            FUN_14497ddce(local_68,uVar2 & 0xffffffff);
            iVar4 = (int)local_48 + iVar6;
          }
          iVar5 = iVar4 + 0x1f;
          if (-1 < iVar4) {
            iVar5 = iVar4;
          }
          local_48 = CONCAT44(local_48._4_4_,iVar4);
          if (iVar4 % 0x20 != 0) {
            bVar3 = -(char)(iVar4 % 0x20);
            local_68[iVar5 >> 5] = (local_68[iVar5 >> 5] << (bVar3 & 0x1f)) >> (bVar3 & 0x1f);
          }
        }
        else {
          iVar5 = (int)local_48 + 0x1e;
          if (-1 < (int)local_48 + -1) {
            iVar5 = (int)local_48 + -1;
          }
          if (iVar5 >> 5 != (uint)(uVar1 >> 5)) goto LAB_1417a7e35;
          local_48 = CONCAT44(local_48._4_4_,iVar4);
        }
        FUN_1447c45ca(local_68,uVar2 & 0xffffffff,iVar6,0);
      }
      local_68[uVar1 >> 5] = local_68[uVar1 >> 5] | 1 << ((byte)uVar1 & 0x1f);
    }
    lVar7 = lVar7 + 1;
    if (lVar7 == 3) {
      FUN_140dad9c2(param_2,local_68,2);
      if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 1417a7ef6 FUN_1417a7ef6 body=440 status=ok
// SIG undefined FUN_1417a7ef6(void)

void FUN_1417a7ef6(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  ushort uVar1;
  short *psVar2;
  longlong lVar3;
  ulonglong *puVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong *puVar11;
  
  psVar2 = (short *)*param_1;
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  lVar10 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,7);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar4 = *(ulonglong **)(lVar3 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *psVar2) goto LAB_1417a7f4b;
      puVar4 = puVar4 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1417a7f4b:
  lVar6 = *param_3;
  if (*(ulonglong *)(lVar3 + 0x20) <= *puVar4) {
    *(int *)(lVar6 + lVar10 * 4) = (int)*puVar4 - (int)*(ulonglong *)(lVar3 + 0x20);
    lVar6 = *param_3;
  }
  lVar7 = 0;
  do {
    if (*(ushort *)(lVar3 + 0xc) != 0) {
      puVar4 = *(ulonglong **)(lVar3 + 0x28);
      lVar9 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar4 + 0x1e) == psVar2[lVar7 + 1]) {
          if (puVar4 != (ulonglong *)0x0) {
            if (*(ulonglong *)(lVar3 + 0x20) <= *puVar4) {
              *(int *)(lVar6 + lVar10 * 4 + 4 + lVar7 * 4) =
                   (int)*puVar4 - (int)*(ulonglong *)(lVar3 + 0x20);
            }
          }
          break;
        }
        puVar4 = puVar4 + 4;
        lVar9 = lVar9 + -0x20;
      } while (lVar9 != 0);
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  uVar1 = *(ushort *)(lVar3 + 0xc);
  uVar5 = (uint)uVar1;
  if (uVar1 != 0) {
    lVar6 = *param_3;
    puVar4 = *(ulonglong **)(lVar3 + 0x28);
    puVar8 = puVar4 + (ulonglong)uVar1 * 4;
    lVar7 = 0;
    do {
      if (*(short *)((longlong)puVar4 + lVar7 + 0x1e) == psVar2[4]) {
        if ((longlong)puVar4 + lVar7 != 0) {
          uVar5 = (uint)uVar1;
          if (*(ulonglong *)(lVar3 + 0x20) <= *(ulonglong *)((longlong)puVar4 + lVar7)) {
            *(int *)(lVar6 + 0x10 + lVar10 * 4) =
                 (int)*(ulonglong *)((longlong)puVar4 + lVar7) - (int)*(ulonglong *)(lVar3 + 0x20);
            uVar1 = *(ushort *)(lVar3 + 0xc);
            uVar5 = (uint)uVar1;
            if (uVar1 == 0) {
              return;
            }
            lVar6 = *param_3;
            puVar4 = *(ulonglong **)(lVar3 + 0x28);
            puVar8 = puVar4 + (ulonglong)uVar1 * 4;
          }
        }
        break;
      }
      lVar7 = lVar7 + 0x20;
    } while ((ulonglong)uVar1 << 5 != lVar7);
    puVar11 = puVar4;
    do {
      if (*(short *)((longlong)puVar11 + 0x1e) == psVar2[5]) {
        if (puVar11 != (ulonglong *)0x0) {
          if (*(ulonglong *)(lVar3 + 0x20) <= *puVar11) {
            *(int *)(lVar6 + 0x14 + lVar10 * 4) = (int)*puVar11 - (int)*(ulonglong *)(lVar3 + 0x20);
            uVar5 = (uint)*(ushort *)(lVar3 + 0xc);
            if (*(ushort *)(lVar3 + 0xc) == 0) {
              return;
            }
            lVar6 = *param_3;
            puVar4 = *(ulonglong **)(lVar3 + 0x28);
          }
        }
        break;
      }
      puVar11 = puVar11 + 4;
    } while (puVar11 != puVar8);
    puVar8 = (ulonglong *)((ulonglong)(uVar5 << 5) + (longlong)puVar4);
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == psVar2[6]) {
        if (puVar4 == (ulonglong *)0x0) {
          return;
        }
        if (*puVar4 < *(ulonglong *)(lVar3 + 0x20)) {
          return;
        }
        *(int *)(lVar6 + 0x18 + lVar10 * 4) = (int)*puVar4 - (int)*(ulonglong *)(lVar3 + 0x20);
        return;
      }
      puVar4 = puVar4 + 4;
    } while (puVar4 != puVar8);
  }
  return;
}



// FUNCTION 1417a80ae FUN_1417a80ae body=29 status=ok
// SIG undefined FUN_1417a80ae(void)

undefined8 FUN_1417a80ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a80cc FUN_1417a80cc body=243 status=ok
// SIG undefined FUN_1417a80cc(void)

undefined8 FUN_1417a80cc(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *(ushort *)(param_1 + 2);
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = *(ushort *)(param_1 + 4);
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = *(ushort *)(param_1 + 6);
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = *(ushort *)(param_1 + 8);
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar6 = false;
  }
  else {
    bVar6 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5 & bVar6);
}



// FUNCTION 1417a81c0 FUN_1417a81c0 body=29 status=ok
// SIG undefined FUN_1417a81c0(void)

undefined8 FUN_1417a81c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a81de FUN_1417a81de body=544 status=ok
// SIG undefined FUN_1417a81de(void)

void FUN_1417a81de(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  uint uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar1 = *param_1;
  uVar2 = *(ulonglong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  lVar5 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,7);
  if (uVar2 <= *(ulonglong *)(uVar2 + 0x18)) {
    *(int *)(*param_3 + lVar5 * 4) = (int)*(ulonglong *)(uVar2 + 0x18) - (int)uVar2;
  }
  uVar4 = (uint)*(ushort *)(uVar2 + 0xc);
  puVar3 = *(ulonglong **)(uVar2 + 0x28);
  if (uVar4 != 0) {
    lVar9 = (ulonglong)*(ushort *)(uVar2 + 0xc) << 5;
    puVar7 = puVar3;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == *(short *)(lVar1 + 2)) goto LAB_1417a824e;
      puVar7 = puVar7 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_1417a824e:
  lVar9 = *param_3;
  if (*(ulonglong *)(uVar2 + 0x20) <= *puVar7) {
    *(int *)(lVar9 + 4 + lVar5 * 4) = (int)*puVar7 - (int)*(ulonglong *)(uVar2 + 0x20);
    lVar9 = *param_3;
    uVar4 = (uint)*(ushort *)(uVar2 + 0xc);
    puVar3 = *(ulonglong **)(uVar2 + 0x28);
  }
  if ((short)uVar4 != 0) {
    uVar10 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar3;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == *(short *)(lVar1 + 4)) goto LAB_1417a82a2;
      puVar7 = puVar7 + 4;
      uVar10 = uVar10 - 0x20;
    } while (uVar10 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_1417a82a2:
  if (*(ulonglong *)(uVar2 + 0x20) <= *puVar7) {
    *(int *)(lVar9 + 8 + lVar5 * 4) = (int)*puVar7 - (int)*(ulonglong *)(uVar2 + 0x20);
    lVar9 = *param_3;
    uVar4 = (uint)*(ushort *)(uVar2 + 0xc);
    puVar3 = *(ulonglong **)(uVar2 + 0x28);
  }
  uVar6 = (ushort)uVar4;
  if (uVar6 != 0) {
    uVar10 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar3;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == *(short *)(lVar1 + 6)) goto LAB_1417a82ef;
      puVar7 = puVar7 + 4;
      uVar10 = uVar10 - 0x20;
    } while (uVar10 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_1417a82ef:
  if (*(ulonglong *)(uVar2 + 0x20) <= *puVar7) {
    *(int *)(lVar9 + 0xc + lVar5 * 4) = (int)*puVar7 - (int)*(ulonglong *)(uVar2 + 0x20);
    lVar9 = *param_3;
    uVar6 = *(ushort *)(uVar2 + 0xc);
    uVar4 = (uint)uVar6;
    puVar3 = *(ulonglong **)(uVar2 + 0x28);
  }
  if (uVar6 != 0) {
    uVar10 = (ulonglong)(uVar4 << 5);
    puVar7 = puVar3;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == *(short *)(lVar1 + 8)) goto LAB_1417a833c;
      puVar7 = puVar7 + 4;
      uVar10 = uVar10 - 0x20;
    } while (uVar10 != 0);
  }
  puVar7 = (ulonglong *)0x0;
LAB_1417a833c:
  if (*(ulonglong *)(uVar2 + 0x20) <= *puVar7) {
    *(int *)(lVar9 + 0x10 + lVar5 * 4) = (int)*puVar7 - (int)*(ulonglong *)(uVar2 + 0x20);
    lVar9 = *param_3;
    uVar6 = *(ushort *)(uVar2 + 0xc);
    puVar3 = *(ulonglong **)(uVar2 + 0x28);
    uVar4 = (uint)uVar6;
  }
  if (uVar6 != 0) {
    uVar10 = 0;
    do {
      if (*(short *)((longlong)puVar3 + uVar10 + 0x1e) == *(short *)(lVar1 + 10)) {
        if ((longlong)puVar3 + uVar10 != 0) {
          if (*(ulonglong *)(uVar2 + 0x20) <= *(ulonglong *)((longlong)puVar3 + uVar10)) {
            *(int *)(lVar9 + 0x14 + lVar5 * 4) =
                 (int)*(ulonglong *)((longlong)puVar3 + uVar10) - (int)*(ulonglong *)(uVar2 + 0x20);
            lVar9 = *param_3;
            uVar6 = *(ushort *)(uVar2 + 0xc);
            puVar3 = *(ulonglong **)(uVar2 + 0x28);
          }
        }
        break;
      }
      uVar10 = uVar10 + 0x20;
    } while (uVar4 << 5 != uVar10);
    if (uVar6 != 0) {
      lVar8 = (ulonglong)uVar6 << 5;
      do {
        if (*(short *)((longlong)puVar3 + 0x1e) == *(short *)(lVar1 + 0xc)) {
          if (puVar3 == (ulonglong *)0x0) {
            return;
          }
          if (*puVar3 < *(ulonglong *)(uVar2 + 0x20)) {
            return;
          }
          *(int *)(lVar9 + 0x18 + lVar5 * 4) = (int)*puVar3 - (int)*(ulonglong *)(uVar2 + 0x20);
          return;
        }
        puVar3 = puVar3 + 4;
        lVar8 = lVar8 + -0x20;
      } while (lVar8 != 0);
    }
  }
  return;
}



// FUNCTION 1417a83fe FUN_1417a83fe body=29 status=ok
// SIG undefined FUN_1417a83fe(void)

undefined8 FUN_1417a83fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a841c FUN_1417a841c body=29 status=ok
// SIG undefined FUN_1417a841c(void)

undefined8 FUN_1417a841c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a843a FUN_1417a843a body=29 status=ok
// SIG undefined FUN_1417a843a(void)

undefined8 FUN_1417a843a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a8458 FUN_1417a8458 body=29 status=ok
// SIG undefined FUN_1417a8458(void)

undefined8 FUN_1417a8458(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a8476 FUN_1417a8476 body=29 status=ok
// SIG undefined FUN_1417a8476(void)

undefined8 FUN_1417a8476(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a8494 FUN_1417a8494 body=29 status=ok
// SIG undefined FUN_1417a8494(void)

undefined8 FUN_1417a8494(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a84b2 FUN_1417a84b2 body=29 status=ok
// SIG undefined FUN_1417a84b2(void)

undefined8 FUN_1417a84b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a84d0 FUN_1417a84d0 body=115 status=ok
// SIG undefined FUN_1417a84d0(void)

void FUN_1417a84d0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong lVar5;
  
  psVar1 = (short *)*param_1;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  lVar3 = param_3[1];
  FUN_1403f967c(param_3,1);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar4 = *(ulonglong **)(lVar2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *psVar1) goto LAB_1417a8525;
      puVar4 = puVar4 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1417a8525:
  if (*(ulonglong *)(lVar2 + 0x20) <= *puVar4) {
    *(int *)(*param_3 + (longlong)(int)lVar3 * 4) = (int)*puVar4 - (int)*(ulonglong *)(lVar2 + 0x20)
    ;
  }
  return;
}



// FUNCTION 1417a8544 FUN_1417a8544 body=170 status=ok
// SIG undefined FUN_1417a8544(void)

undefined8 FUN_1417a8544(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[1];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  uVar1 = param_1[2];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar5 = false;
  }
  else {
    bVar5 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4 & bVar5);
}



// FUNCTION 1417a85ee FUN_1417a85ee body=524 status=ok
// SIG undefined FUN_1417a85ee(void)

void FUN_1417a85ee(ushort *param_1,longlong param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = *param_1;
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 != 0 && iVar3 <= iVar5) {
    if (iVar3 == 0) {
LAB_1417a8633:
      if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(param_2 + 0x24) = 0x100;
        FUN_14497ddce(param_2,iVar3);
        iVar5 = *(int *)(param_2 + 0x20) + iVar7;
      }
      iVar6 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      *(int *)(param_2 + 0x20) = iVar5;
      if (iVar5 % 0x20 != 0) {
        bVar4 = -(char)(iVar5 % 0x20);
        *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1417a8633;
      *(int *)(param_2 + 0x20) = iVar5;
    }
    FUN_1447c45ca(param_2,iVar3,iVar7,0);
  }
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_1[1];
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 != 0 && iVar3 <= iVar5) {
    if (iVar3 == 0) {
LAB_1417a86bb:
      if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(param_2 + 0x24) = 0x100;
        FUN_14497ddce(param_2,iVar3);
        iVar5 = *(int *)(param_2 + 0x20) + iVar7;
      }
      iVar6 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar6 = iVar5;
      }
      *(int *)(param_2 + 0x20) = iVar5;
      if (iVar5 % 0x20 != 0) {
        bVar4 = -(char)(iVar5 % 0x20);
        *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1417a86bb;
      *(int *)(param_2 + 0x20) = iVar5;
    }
    FUN_1447c45ca(param_2,iVar3,iVar7,0);
  }
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  uVar2 = param_1[2];
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_2 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 == 0 || iVar5 < iVar3) goto LAB_1417a8775;
  if (iVar3 == 0) {
LAB_1417a8736:
    if (*(int *)(param_2 + 0x24) <= (int)(uint)uVar2) {
      *(undefined4 *)(param_2 + 0x24) = 0x100;
      FUN_14497ddce(param_2,iVar3);
      iVar5 = *(int *)(param_2 + 0x20) + iVar7;
    }
    iVar6 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar6 = iVar5;
    }
    *(int *)(param_2 + 0x20) = iVar5;
    if (iVar5 % 0x20 != 0) {
      bVar4 = -(char)(iVar5 % 0x20);
      *(uint *)(param_2 + (longlong)(iVar6 >> 5) * 4) =
           (uint)(*(int *)(param_2 + (longlong)(iVar6 >> 5) * 4) << (bVar4 & 0x1f)) >>
           (bVar4 & 0x1f);
    }
  }
  else {
    iVar6 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar6 = iVar3 + -1;
    }
    if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1417a8736;
    *(int *)(param_2 + 0x20) = iVar5;
  }
  FUN_1447c45ca(param_2,iVar3,iVar7,0);
LAB_1417a8775:
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 1417a87fa FUN_1417a87fa body=29 status=ok
// SIG undefined FUN_1417a87fa(void)

undefined8 FUN_1417a87fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a8818 FUN_1417a8818 body=282 status=ok
// SIG undefined FUN_1417a8818(void)

void FUN_1417a8818(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  short *psVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  psVar1 = (short *)*param_1;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  lVar4 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,3);
  uVar5 = *(ushort *)(lVar2 + 0xc);
  puVar3 = *(ulonglong **)(lVar2 + 0x28);
  if (uVar5 != 0) {
    lVar7 = (ulonglong)uVar5 << 5;
    puVar6 = puVar3;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == *psVar1) goto LAB_1417a8876;
      puVar6 = puVar6 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar6 = (ulonglong *)0x0;
LAB_1417a8876:
  lVar7 = *param_3;
  if (*(ulonglong *)(lVar2 + 0x20) <= *puVar6) {
    *(int *)(lVar7 + lVar4 * 4) = (int)*puVar6 - (int)*(ulonglong *)(lVar2 + 0x20);
    lVar7 = *param_3;
    uVar5 = *(ushort *)(lVar2 + 0xc);
    puVar3 = *(ulonglong **)(lVar2 + 0x28);
  }
  if (uVar5 != 0) {
    lVar8 = (ulonglong)uVar5 << 5;
    puVar6 = puVar3;
    do {
      if (*(short *)((longlong)puVar6 + 0x1e) == psVar1[1]) goto LAB_1417a88c9;
      puVar6 = puVar6 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  puVar6 = (ulonglong *)0x0;
LAB_1417a88c9:
  if (*(ulonglong *)(lVar2 + 0x20) <= *puVar6) {
    *(int *)(lVar7 + 4 + lVar4 * 4) = (int)*puVar6 - (int)*(ulonglong *)(lVar2 + 0x20);
    lVar7 = *param_3;
    uVar5 = *(ushort *)(lVar2 + 0xc);
    puVar3 = *(ulonglong **)(lVar2 + 0x28);
  }
  if (uVar5 != 0) {
    lVar8 = (ulonglong)uVar5 << 5;
    do {
      if (*(short *)((longlong)puVar3 + 0x1e) == psVar1[2]) goto LAB_1417a890e;
      puVar3 = puVar3 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  puVar3 = (ulonglong *)0x0;
LAB_1417a890e:
  if (*(ulonglong *)(lVar2 + 0x20) <= *puVar3) {
    *(int *)(lVar7 + 8 + lVar4 * 4) = (int)*puVar3 - (int)*(ulonglong *)(lVar2 + 0x20);
  }
  return;
}



// FUNCTION 1417a8932 FUN_1417a8932 body=54 status=ok
// SIG undefined FUN_1417a8932(void)

undefined4 FUN_1417a8932(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = *(ushort *)(param_1 + 4);
  lVar4 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar4 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar4 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4);
    uVar3 = CONCAT31((int3)(uVar2 >> 8),(uVar2 >> (uVar1 & 0x1f) & 1) != 0);
  }
  return uVar3;
}



// FUNCTION 1417a8968 FUN_1417a8968 body=29 status=ok
// SIG undefined FUN_1417a8968(void)

undefined8 FUN_1417a8968(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a8985 FUN_1417a8985 body=323 status=ok
// SIG undefined FUN_1417a8985(void)

void FUN_1417a8985(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  uint local_68 [8];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0x10000000000;
  lVar4 = 0;
  bVar9 = true;
  do {
    uVar3 = local_48;
    uVar1 = *(ushort *)(param_1 + lVar4 * 2);
    if (uVar1 != 0xffff) {
      iVar6 = uVar1 + 1;
      iVar8 = iVar6 - (int)local_48;
      if (iVar8 != 0 && (int)local_48 <= iVar6) {
        if ((int)local_48 == 0) {
LAB_1417a8a01:
          if (local_48._4_4_ <= (int)(uint)uVar1) {
            local_48 = CONCAT44(0x100,(int)local_48);
            FUN_14497ddce(local_68,uVar3 & 0xffffffff);
            iVar6 = (int)local_48 + iVar8;
          }
          iVar7 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar7 = iVar6;
          }
          local_48 = CONCAT44(local_48._4_4_,iVar6);
          if (iVar6 % 0x20 != 0) {
            bVar5 = -(char)(iVar6 % 0x20);
            local_68[iVar7 >> 5] = (local_68[iVar7 >> 5] << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
          }
        }
        else {
          iVar7 = (int)local_48 + 0x1e;
          if (-1 < (int)local_48 + -1) {
            iVar7 = (int)local_48 + -1;
          }
          if (iVar7 >> 5 != (uint)(uVar1 >> 5)) goto LAB_1417a8a01;
          local_48 = CONCAT44(local_48._4_4_,iVar6);
        }
        FUN_1447c45ca(local_68,uVar3 & 0xffffffff,iVar8,0);
      }
      local_68[uVar1 >> 5] = local_68[uVar1 >> 5] | 1 << ((byte)uVar1 & 0x1f);
    }
    lVar4 = 1;
    bVar2 = !bVar9;
    bVar9 = false;
    if (bVar2) {
      FUN_140dad9c2(param_2,local_68,2);
      if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 1417a8aca FUN_1417a8aca body=213 status=ok
// SIG undefined FUN_1417a8aca(void)

void FUN_1417a8aca(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong *puVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  lVar3 = param_3[1];
  FUN_1403f967c(param_3);
  lVar7 = *param_3;
  lVar8 = 0;
  bVar4 = true;
  do {
    bVar6 = bVar4;
    if (*(ushort *)(lVar2 + 0xc) != 0) {
      puVar5 = *(ulonglong **)(lVar2 + 0x28);
      lVar9 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
      do {
        if (*(short *)((longlong)puVar5 + 0x1e) == *(short *)(lVar1 + lVar8 * 2)) {
          if (puVar5 != (ulonglong *)0x0) {
            if (*(ulonglong *)(lVar2 + 0x20) <= *puVar5) {
              *(int *)((longlong)(int)lVar3 * 4 + lVar7 + lVar8 * 4) =
                   (int)*puVar5 - (int)*(ulonglong *)(lVar2 + 0x20);
            }
          }
          break;
        }
        puVar5 = puVar5 + 4;
        lVar9 = lVar9 + -0x20;
      } while (lVar9 != 0);
    }
    lVar8 = 1;
    bVar4 = false;
  } while (bVar6);
  if (*(ushort *)(lVar2 + 0xc) != 0) {
    puVar5 = *(ulonglong **)(lVar2 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == *(short *)(lVar1 + 4)) goto LAB_1417a8b80;
      puVar5 = puVar5 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  puVar5 = (ulonglong *)0x0;
LAB_1417a8b80:
  if (*(ulonglong *)(lVar2 + 0x20) <= *puVar5) {
    *(int *)(*param_3 + 8 + (longlong)(int)lVar3 * 4) =
         (int)*puVar5 - (int)*(ulonglong *)(lVar2 + 0x20);
  }
  return;
}



// FUNCTION 1417a8b9f FUN_1417a8b9f body=49 status=ok
// SIG undefined FUN_1417a8b9f(void)

longlong FUN_1417a8b9f(void)

{
  if (DAT_14cab66c0 == 0) {
    FUN_14073dd9a(&DAT_14cab66c0,&PTR_LAB_14a4e9678);
  }
  return DAT_14cab66c0;
}



// FUNCTION 1417a8bd0 FUN_1417a8bd0 body=77 status=ok
// SIG undefined FUN_1417a8bd0(void)

void FUN_1417a8bd0(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x101) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x109) = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  *(byte *)(puVar1 + 0xb) = *(byte *)(puVar1 + 0xb) | 0x11;
  *puVar1 = &PTR_FUN_14a4e19e0;
  puVar1[0x25] = &PTR_LAB_14a4e1d30;
  return;
}



// FUNCTION 1417a8c1d FUN_1417a8c1d body=74 status=ok
// SIG undefined FUN_1417a8c1d(void)

void FUN_1417a8c1d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x101) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x109) = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  *(byte *)(puVar1 + 0xb) = *(byte *)(puVar1 + 0xb) | 0x11;
  *puVar1 = &PTR_FUN_14a4e1e60;
  puVar1[0x25] = 0;
  return;
}



// FUNCTION 1417a8c67 FUN_1417a8c67 body=67 status=ok
// SIG undefined FUN_1417a8c67(void)

void FUN_1417a8c67(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x101) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x109) = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  *(byte *)(puVar1 + 0xb) = *(byte *)(puVar1 + 0xb) | 0x11;
  *puVar1 = &PTR_FUN_14a4e3a70;
  *(undefined1 *)(puVar1 + 0xd) = 0x1f;
  return;
}



// FUNCTION 1417a8caa FUN_1417a8caa body=92 status=ok
// SIG undefined FUN_1417a8caa(void)

void FUN_1417a8caa(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_1406078d6(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14a4e5c00;
  puVar1[0x1f] = &PTR_LAB_14a4e5f50;
  puVar1[0x20] = &PTR_LAB_14a4e5f80;
  *(byte *)(puVar1 + 0x21) = *(byte *)(puVar1 + 0x21) | 3;
  *(undefined1 *)((longlong)puVar1 + 0x10c) = 1;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  return;
}



// FUNCTION 1417a8d06 FUN_1417a8d06 body=67 status=ok
// SIG undefined FUN_1417a8d06(void)

void FUN_1417a8d06(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x101) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x109) = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  *(byte *)(puVar1 + 0xb) = *(byte *)(puVar1 + 0xb) | 0x11;
  *puVar1 = &PTR_FUN_14a4e6490;
  *(undefined1 *)(puVar1 + 0xd) = 0x1f;
  return;
}



// FUNCTION 1417a8d49 FUN_1417a8d49 body=107 status=ok
// SIG undefined FUN_1417a8d49(void)

void FUN_1417a8d49(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  *(byte *)(puVar1 + 0xd) = *(byte *)(puVar1 + 0xd) | 0xb;
  *puVar1 = &PTR_FUN_14a4e7df0;
  puVar1[0x22] = &PTR_LAB_14a4e8140;
  puVar1[0x23] = &PTR_LAB_14a4e8170;
  puVar1[0x24] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x125) = 0;
  *(undefined1 *)(puVar1 + 0x10) = 1;
  return;
}



// FUNCTION 1417a8db4 FUN_1417a8db4 body=59 status=ok
// SIG undefined FUN_1417a8db4(void)

void FUN_1417a8db4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a4e8cd0;
  puVar1[0x1f] = &PTR_LAB_14a4e9030;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  return;
}



// FUNCTION 1417a8def FUN_1417a8def body=83 status=ok
// SIG undefined FUN_1417a8def(void)

void FUN_1417a8def(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x101) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x109) = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  *(byte *)(puVar1 + 0xb) = *(byte *)(puVar1 + 0xb) | 0x11;
  *puVar1 = &PTR_FUN_14a4e9180;
  puVar1[0x25] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x12d) = 0;
  *(byte *)(puVar1 + 0xd) = *(byte *)(puVar1 + 0xd) | 3;
  return;
}



// FUNCTION 1417a8e42 FUN_1417a8e42 body=128 status=ok
// SIG undefined FUN_1417a8e42(void)

void FUN_1417a8e42(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14a4e9a38);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a8ec4 FUN_1417a8ec4 body=85 status=ok
// SIG undefined FUN_1417a8ec4(void)

void FUN_1417a8ec4(longlong param_1)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140aecba6(&local_2c);
  *(undefined4 *)(param_1 + 0x100) = local_2c;
  *(undefined4 *)(param_1 + 0x104) = uStack_28;
  *(undefined4 *)(param_1 + 0x108) = uStack_24;
  *(undefined4 *)(param_1 + 0x10c) = uStack_20;
  *(undefined4 *)(param_1 + 0x110) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a8f1a FUN_1417a8f1a body=63 status=ok
// SIG undefined FUN_1417a8f1a(void)

void FUN_1417a8f1a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1406078d6(puVar1,param_1);
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x101) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x109) = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  *(byte *)(puVar1 + 0xb) = *(byte *)(puVar1 + 0xb) | 0x11;
  *puVar1 = &PTR_FUN_14a4eb970;
  return;
}



// FUNCTION 1417a8f5a FUN_1417a8f5a body=218 status=ok
// SIG undefined FUN_1417a8f5a(void)

void FUN_1417a8f5a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_1e8 [40];
  undefined **local_1c0;
  longlong *local_1b8;
  undefined ***local_1b0;
  undefined8 **local_1a8;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14a4e9a38);
  local_1a8 = &local_1b0;
  local_1c0 = &PTR_FUN_149e37810;
  local_1b0 = &local_1c0;
  local_1b8 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  if (((*(byte *)(param_2 + 5) & 1) != 0) && (0 < *(int *)(param_1 + 0x120))) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + lVar4 * 8);
      if (lVar1 != 0) {
        lVar2 = *(longlong *)(lVar1 + 0x10);
        lVar3 = FUN_140d48730();
        if (lVar2 == lVar3) {
          (**(code **)(*param_2 + 0x198))(param_2,lVar1);
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x120));
  }
  if ((local_30 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a9036 FUN_1417a9036 body=486 status=ok
// SIG undefined FUN_1417a9036(void)

void FUN_1417a9036(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined1 local_1a0;
  undefined4 local_198;
  undefined **local_190 [5];
  byte local_166;
  undefined8 local_100;
  longlong *local_f8;
  undefined1 local_f0 [168];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_48 = 0;
  uStack_40 = 0;
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x120);
  if (0 < (int)*(uint *)(param_1 + 0x120)) {
    lVar6 = 0;
    bVar7 = false;
    do {
      while( true ) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + lVar6 * 8);
        if (lVar1 != 0) break;
LAB_1417a9098:
        lVar6 = lVar6 + 1;
        if ((int)uVar5 <= lVar6) {
          if (!bVar7) goto LAB_1417a90ad;
          goto LAB_1417a9210;
        }
      }
      lVar2 = *(longlong *)(lVar1 + 0x10);
      lVar3 = FUN_140d48730();
      if (lVar2 != lVar3) {
        uVar5 = (ulonglong)*(uint *)(param_1 + 0x120);
        goto LAB_1417a9098;
      }
      FUN_1400337aa(lVar1);
      bVar7 = (longlong)uStack_40 < 0;
      uStack_40 = uStack_40 & 0xffffffff00000000;
      if (bVar7) {
        FUN_144893a1c(&local_48,0);
      }
      local_198 = 0;
      local_1a0 = 1;
      local_1a8 = 0;
      FUN_147587eae(local_f0,lVar1,&local_48,0);
      FUN_144a7fc42(local_f0);
      plVar4 = (longlong *)FUN_1476c207c(param_1);
      *(undefined2 *)(plVar4 + 0x2d) = 0;
      memset(local_190,0,0x90);
      FUN_144869430(local_190);
      local_100 = 0;
      local_190[0] = &PTR_FUN_149fba270;
      bVar7 = true;
      local_f8 = &local_48;
      FUN_140996f94(local_190,1);
      (*(code *)local_190[0][0x1e])(local_190,0);
      local_166 = local_166 & 0x7b;
      (**(code **)(*plVar4 + 0xd8))(plVar4);
      FUN_144a7fc42(local_190);
      lVar1 = *(longlong *)(param_1 + 0x118);
      if ((plVar4 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(plVar4);
      }
      *(longlong **)(lVar1 + lVar6 * 8) = plVar4;
      lVar6 = lVar6 + 1;
      uVar5 = (ulonglong)*(int *)(param_1 + 0x120);
    } while (lVar6 < (longlong)uVar5);
LAB_1417a9210:
    thunk_FUN_1475847ee(param_1);
  }
LAB_1417a90ad:
  FUN_1409dad52(param_1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a921e FUN_1417a921e body=70 status=ok
// SIG undefined FUN_1417a921e(void)

undefined8 * FUN_1417a921e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4e96c0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a9264 FUN_1417a9264 body=70 status=ok
// SIG undefined FUN_1417a9264(void)

undefined8 * FUN_1417a9264(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4e96c0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a92aa FUN_1417a92aa body=70 status=ok
// SIG undefined FUN_1417a92aa(void)

undefined8 * FUN_1417a92aa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4e96c0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a92f0 FUN_1417a92f0 body=98 status=ok
// SIG undefined FUN_1417a92f0(void)

undefined8 * FUN_1417a92f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4e5c00;
  param_1[0x1f] = &PTR_LAB_14a4e5f50;
  param_1[0x20] = &PTR_LAB_14a4e5f80;
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a9352 FUN_1417a9352 body=70 status=ok
// SIG undefined FUN_1417a9352(void)

undefined8 * FUN_1417a9352(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4e96c0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a9398 FUN_1417a9398 body=70 status=ok
// SIG undefined FUN_1417a9398(void)

undefined8 * FUN_1417a9398(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4e7980;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a93de FUN_1417a93de body=84 status=ok
// SIG undefined FUN_1417a93de(void)

undefined8 * FUN_1417a93de(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4e8cd0;
  param_1[0x1f] = &PTR_LAB_14a4e9030;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a9432 FUN_1417a9432 body=70 status=ok
// SIG undefined FUN_1417a9432(void)

undefined8 * FUN_1417a9432(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4e96c0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a9478 FUN_1417a9478 body=70 status=ok
// SIG undefined FUN_1417a9478(void)

undefined8 * FUN_1417a9478(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4ea030;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a94be FUN_1417a94be body=70 status=ok
// SIG undefined FUN_1417a94be(void)

undefined8 * FUN_1417a94be(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4e96c0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a9504 FUN_1417a9504 body=49 status=ok
// SIG undefined FUN_1417a9504(void)

longlong FUN_1417a9504(void)

{
  if (DAT_14cab67d0 == 0) {
    FUN_1409ce572(&DAT_14cab67d0,&PTR_FUN_14a4ec8a0);
  }
  return DAT_14cab67d0;
}



// FUNCTION 1417a9535 FUN_1417a9535 body=49 status=ok
// SIG undefined FUN_1417a9535(void)

longlong FUN_1417a9535(void)

{
  if (DAT_14cab6838 == 0) {
    FUN_14086a14e(&DAT_14cab6838,&PTR_FUN_14a4ed118);
  }
  return DAT_14cab6838;
}



// FUNCTION 1417a956c FUN_1417a956c body=97 status=ok
// SIG undefined FUN_1417a956c(void)

undefined8 * FUN_1417a956c(undefined8 *param_1,void *param_2)

{
  int iVar1;
  void *_Src;
  
  _Src = *(void **)((longlong)param_2 + 0x100);
  if (*(void **)((longlong)param_2 + 0x100) == (void *)0x0) {
    _Src = param_2;
  }
  iVar1 = *(int *)((longlong)param_2 + 0x108);
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1401b309e(param_1,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
    }
  }
  return param_1;
}



// FUNCTION 1417a95cd FUN_1417a95cd body=49 status=ok
// SIG undefined FUN_1417a95cd(void)

longlong FUN_1417a95cd(void)

{
  if (DAT_14cab6f68 == 0) {
    FUN_14086a14e(&DAT_14cab6f68,&PTR_FUN_14a4fa160);
  }
  return DAT_14cab6f68;
}



// FUNCTION 1417a95fe FUN_1417a95fe body=59 status=ok
// SIG undefined FUN_1417a95fe(void)

void FUN_1417a95fe(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140f05222(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a4ff0f0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[7] = 0x4000000040800000;
  puVar1[8] = 0x4000000040800000;
  *(undefined2 *)(puVar1 + 9) = 0;
  return;
}



// FUNCTION 1417a963a FUN_1417a963a body=53 status=ok
// SIG undefined FUN_1417a963a(void)

void FUN_1417a963a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_140bc9634();
  plVar2 = *(longlong **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001417a966b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1417a9670 FUN_1417a9670 body=53 status=ok
// SIG undefined FUN_1417a9670(void)

void FUN_1417a9670(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_140bc9634();
  plVar2 = *(longlong **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001417a96a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1417a96a5 FUN_1417a96a5 body=49 status=ok
// SIG undefined FUN_1417a96a5(void)

longlong FUN_1417a96a5(void)

{
  if (DAT_14cab7350 == 0) {
    FUN_14073dd9a(&DAT_14cab7350,&PTR_LAB_14a501dc0);
  }
  return DAT_14cab7350;
}



// FUNCTION 1417a96d6 FUN_1417a96d6 body=91 status=ok
// SIG undefined FUN_1417a96d6(void)

void FUN_1417a96d6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140f14cc6();
  *(undefined8 *)(param_1 + 0xb08) = 0;
  plVar3 = *(longlong **)(param_1 + 0xb10);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xb10) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001417a972d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1417a9731 FUN_1417a9731 body=49 status=ok
// SIG undefined FUN_1417a9731(void)

longlong FUN_1417a9731(void)

{
  if (DAT_14cab7540 == 0) {
    FUN_14073dd9a(&DAT_14cab7540,&PTR_LAB_14a5060b0);
  }
  return DAT_14cab7540;
}



// FUNCTION 1417a9762 FUN_1417a9762 body=76 status=ok
// SIG undefined FUN_1417a9762(void)

undefined8 * FUN_1417a9762(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a4ff0f0;
  plVar2 = (longlong *)param_1[0xb];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a97ae FUN_1417a97ae body=76 status=ok
// SIG undefined FUN_1417a97ae(void)

undefined8 * FUN_1417a97ae(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a5005f0;
  plVar2 = (longlong *)param_1[0xb];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417a97fa FUN_1417a97fa body=181 status=ok
// SIG undefined FUN_1417a97fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1417a97fa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab7600) {
    FUN_144b3d300(&DAT_14cab7600);
    if (DAT_14cab7600 == -1) {
      _DAT_14cab75b0 = &PTR_FUN_14a5084b0;
      DAT_14cab75b8 = 0;
      uRam000000014cab75c0 = 0;
      _DAT_14cab75e0 = 0;
      uRam000000014cab75e8 = 0;
      _DAT_14cab75f0 = 0;
      _DAT_14cab75c8 = FUN_14009d2a0();
      _DAT_14cab75d0 = 0;
      _DAT_14cab75f8 = 0;
      _DAT_14cab75b0 = &PTR_FUN_14a508490;
      atexit((_func_5014 *)&LAB_1433303a3);
      _Init_thread_footer(&DAT_14cab7600);
    }
  }
  return &DAT_14cab75b0;
}



// FUNCTION 1417a98b0 FUN_1417a98b0 body=181 status=ok
// SIG undefined FUN_1417a98b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1417a98b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab7658) {
    FUN_144b3d300(&DAT_14cab7658);
    if (DAT_14cab7658 == -1) {
      _DAT_14cab7608 = &PTR_FUN_14a508680;
      DAT_14cab7610 = 0;
      uRam000000014cab7618 = 0;
      _DAT_14cab7638 = 0;
      uRam000000014cab7640 = 0;
      _DAT_14cab7648 = 0;
      _DAT_14cab7620 = FUN_14009d2a0();
      _DAT_14cab7628 = 0;
      _DAT_14cab7650 = 0;
      _DAT_14cab7608 = &PTR_FUN_14a508660;
      atexit((_func_5014 *)&LAB_14333126d);
      _Init_thread_footer(&DAT_14cab7658);
    }
  }
  return &DAT_14cab7608;
}



// FUNCTION 1417a9965 FUN_1417a9965 body=49 status=ok
// SIG undefined FUN_1417a9965(void)

longlong FUN_1417a9965(void)

{
  if (DAT_14cab77a0 == 0) {
    FUN_14073dd9a(&DAT_14cab77a0,&PTR_LAB_14a50d1e0);
  }
  return DAT_14cab77a0;
}



// FUNCTION 1417a9996 FUN_1417a9996 body=49 status=ok
// SIG undefined FUN_1417a9996(void)

longlong FUN_1417a9996(void)

{
  if (DAT_14cab8120 == 0) {
    FUN_14073dd9a(&DAT_14cab8120,&PTR_LAB_14a520520);
  }
  return DAT_14cab8120;
}



// FUNCTION 1417a99c7 FUN_1417a99c7 body=49 status=ok
// SIG undefined FUN_1417a99c7(void)

longlong FUN_1417a99c7(void)

{
  if (DAT_14cab8d90 == 0) {
    FUN_14073dd9a(&DAT_14cab8d90,&PTR_LAB_14a53a8a0);
  }
  return DAT_14cab8d90;
}



// FUNCTION 1417a99f8 FUN_1417a99f8 body=49 status=ok
// SIG undefined FUN_1417a99f8(void)

longlong FUN_1417a99f8(void)

{
  if (DAT_14cab7900 == 0) {
    FUN_14073dd9a(&DAT_14cab7900,&PTR_LAB_14a50ff20);
  }
  return DAT_14cab7900;
}



// FUNCTION 1417a9a29 FUN_1417a9a29 body=49 status=ok
// SIG undefined FUN_1417a9a29(void)

longlong FUN_1417a9a29(void)

{
  if (DAT_14cab80b8 == 0) {
    FUN_14073dd9a(&DAT_14cab80b8,&PTR_LAB_14a51f850);
  }
  return DAT_14cab80b8;
}



// FUNCTION 1417a9a5a FUN_1417a9a5a body=86 status=ok
// SIG undefined FUN_1417a9a5a(void)

void FUN_1417a9a5a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140ea0e34(puVar1,param_1);
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  *(undefined1 *)(puVar1 + 0x2f) = 1;
  *puVar1 = &PTR_FUN_14a513960;
  puVar1[5] = &PTR_FUN_14a513c80;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  *(byte *)((longlong)puVar1 + 0xd9) = *(byte *)((longlong)puVar1 + 0xd9) & 0xfe;
  FUN_140e2f50a(puVar1,4);
  return;
}



// FUNCTION 1417a9ab0 FUN_1417a9ab0 body=49 status=ok
// SIG undefined FUN_1417a9ab0(void)

longlong FUN_1417a9ab0(void)

{
  if (DAT_14cab7bb0 == 0) {
    FUN_14073dd9a(&DAT_14cab7bb0,&PTR_LAB_14a5151b0);
  }
  return DAT_14cab7bb0;
}



// FUNCTION 1417a9ae1 FUN_1417a9ae1 body=49 status=ok
// SIG undefined FUN_1417a9ae1(void)

longlong FUN_1417a9ae1(void)

{
  if (DAT_14cab7dc0 == 0) {
    FUN_14073dd9a(&DAT_14cab7dc0,&PTR_LAB_14a519470);
  }
  return DAT_14cab7dc0;
}



// FUNCTION 1417a9b12 FUN_1417a9b12 body=49 status=ok
// SIG undefined FUN_1417a9b12(void)

longlong FUN_1417a9b12(void)

{
  if (DAT_14cab8318 == 0) {
    FUN_14073dd9a(&DAT_14cab8318,&PTR_LAB_14a524370);
  }
  return DAT_14cab8318;
}



// FUNCTION 1417a9b43 FUN_1417a9b43 body=49 status=ok
// SIG undefined FUN_1417a9b43(void)

longlong FUN_1417a9b43(void)

{
  if (DAT_14cab84f8 == 0) {
    FUN_14073dd9a(&DAT_14cab84f8,&PTR_LAB_14a528ff0);
  }
  return DAT_14cab84f8;
}



// FUNCTION 1417a9b74 FUN_1417a9b74 body=49 status=ok
// SIG undefined FUN_1417a9b74(void)

longlong FUN_1417a9b74(void)

{
  if (DAT_14cab85c0 == 0) {
    FUN_14073dd9a(&DAT_14cab85c0,&PTR_LAB_14a52aa50);
  }
  return DAT_14cab85c0;
}



// FUNCTION 1417a9ba5 FUN_1417a9ba5 body=96 status=ok
// SIG undefined FUN_1417a9ba5(void)

void FUN_1417a9ba5(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140ea0e34(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a52c970;
  puVar1[5] = &PTR_FUN_14a52cc70;
  puVar1[0x2d] = 0x3ff0000000000000;
  puVar1[0x2e] = 0x3ff0000000000000;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  *(byte *)((longlong)puVar1 + 0xd9) = *(byte *)((longlong)puVar1 + 0xd9) & 0xfe;
  FUN_140e2f50a(puVar1,4);
  return;
}



// FUNCTION 1417a9c05 FUN_1417a9c05 body=49 status=ok
// SIG undefined FUN_1417a9c05(void)

longlong FUN_1417a9c05(void)

{
  if (DAT_14cab8798 == 0) {
    FUN_14073dd9a(&DAT_14cab8798,&PTR_LAB_14a52e760);
  }
  return DAT_14cab8798;
}



// FUNCTION 1417a9c36 FUN_1417a9c36 body=49 status=ok
// SIG undefined FUN_1417a9c36(void)

longlong FUN_1417a9c36(void)

{
  if (DAT_14cab88a0 == 0) {
    FUN_14073dd9a(&DAT_14cab88a0,&PTR_LAB_14a5306f0);
  }
  return DAT_14cab88a0;
}



// FUNCTION 1417a9c68 FUN_1417a9c68 body=117 status=ok
// SIG undefined FUN_1417a9c68(void)

void FUN_1417a9c68(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x1b8) = *(undefined4 *)(param_2 + 2);
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x1ac) = uVar1;
  *(undefined4 *)(param_1 + 0x1b0) = uVar2;
  *(undefined4 *)(param_1 + 0x1b4) = uVar3;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    local_28 = *(undefined4 *)(param_2 + 2);
    local_38 = *param_2;
    uStack_30 = param_2[1];
    local_24 = 1;
    local_20 = 0;
    uStack_18 = 0;
    FUN_1410da5ca(*(longlong *)(param_1 + 0x318),&local_38);
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417a9cde FUN_1417a9cde body=1167 status=ok
// SIG undefined FUN_1417a9cde(void)

undefined8 * FUN_1417a9cde(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_6e8 [32];
  undefined1 *local_6c8;
  undefined1 local_6b1;
  undefined1 local_6b0 [8];
  longlong *local_6a8;
  undefined1 local_691;
  undefined8 local_690;
  longlong *local_688;
  undefined8 local_678;
  longlong *local_670;
  undefined8 local_668;
  longlong *local_660;
  undefined1 local_658 [1114];
  undefined1 local_1fe;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_6e8;
  if (*(char *)(param_1 + 0x310) == '\x01') {
    FUN_14773a356(local_1e8);
    FUN_140a570d8(local_658);
    local_1fe = *(undefined1 *)(param_1 + 0x313);
    local_6c8 = &local_691;
    FUN_140a54526(&local_690,"STextBlock",".\\Runtime/UMG/Private/Components/TextBlock.cpp",0x14a);
    if (local_688 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_688 + 1) = (int)local_688[1] + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)(param_1 + 800);
    *(undefined8 *)(param_1 + 0x318) = local_690;
    *(longlong **)(param_1 + 800) = local_688;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    FUN_140a52852(&local_690,&local_678,local_658);
    plVar5 = local_38;
    plVar6 = local_670;
    if (local_670 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_670 + 1) = (int)local_670[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_670 + 1) = (int)local_670[1] + 1;
      UNLOCK();
    }
    local_40 = local_678;
    local_38 = local_670;
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
    FUN_147769ec0(local_6b0,".\\Runtime/UMG/Private/Components/TextBlock.cpp",0x148,&local_6b1);
    FUN_14773a3ee(local_6b0,&local_668,local_1e8);
    if (local_660 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_660 + 1) = (int)local_660[1] + 1;
      UNLOCK();
      if (local_660 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_660 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_660)(local_660);
          LOCK();
          piVar2 = (int *)((longlong)local_660 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_660 + 0x10))(local_660);
          }
        }
      }
    }
    if (local_6a8 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_6a8 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_6a8)(local_6a8);
        LOCK();
        piVar2 = (int *)((longlong)local_6a8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_6a8 + 0x10))(local_6a8);
        }
      }
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    if (local_670 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_670 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_670)(local_670);
        LOCK();
        piVar2 = (int *)((longlong)local_670 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_670 + 0x10))(local_670);
        }
      }
    }
    if (local_688 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_688 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_688)(local_688);
        LOCK();
        piVar2 = (int *)((longlong)local_688 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_688 + 0x10))(local_688);
        }
      }
    }
    FUN_140a59ae6(local_658);
    FUN_143334520(local_1e8);
    *param_2 = local_668;
    param_2[1] = local_660;
    plVar6 = local_660;
    if (local_660 == (longlong *)0x0) goto LAB_1417a9e0e;
  }
  else {
    FUN_140a570d8(local_658);
    local_1fe = *(undefined1 *)(param_1 + 0x313);
    local_6c8 = local_6b0;
    FUN_140a54526(local_1e8,"STextBlock",".\\Runtime/UMG/Private/Components/TextBlock.cpp",0x152);
    FUN_140a52852(local_1e8,&local_690,local_658);
    plVar6 = local_688;
    if (local_688 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x318) = local_690;
      plVar5 = *(longlong **)(param_1 + 800);
      if (plVar5 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 800) = 0;
LAB_1417aa0a7:
        LOCK();
        plVar6 = plVar5 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
joined_r0x0001417aa0e0:
          if (iVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_688 + 1) = (int)local_688[1] + 1;
      UNLOCK();
      *(undefined8 *)(param_1 + 0x318) = local_690;
      plVar5 = *(longlong **)(param_1 + 800);
      if (local_688 == plVar5) {
        LOCK();
        plVar5 = local_688 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_688)(local_688);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
          plVar5 = plVar6;
          goto joined_r0x0001417aa0e0;
        }
      }
      else {
        *(longlong **)(param_1 + 800) = local_688;
        if (plVar5 != (longlong *)0x0) goto LAB_1417aa0a7;
      }
    }
    if (local_688 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_688 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_688)(local_688);
        LOCK();
        piVar2 = (int *)((longlong)local_688 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_688 + 0x10))(local_688);
        }
      }
    }
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_1e0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_1e0)(local_1e0);
        LOCK();
        piVar2 = (int *)((longlong)local_1e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_1e0 + 0x10))(local_1e0);
        }
      }
    }
    FUN_140a59ae6(local_658);
    uVar4 = *(undefined8 *)(param_1 + 0x318);
    plVar6 = *(longlong **)(param_1 + 800);
    if (plVar6 == (longlong *)0x0) {
      *param_2 = uVar4;
      param_2[1] = 0;
      goto LAB_1417a9e0e;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = uVar4;
    param_2[1] = plVar6;
  }
  LOCK();
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  UNLOCK();
  LOCK();
  plVar5 = plVar6 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_1417a9e0e:
  if ((local_30 ^ (ulonglong)auStack_6e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417aa16e FUN_1417aa16e body=86 status=ok
// SIG undefined FUN_1417aa16e(void)

void FUN_1417aa16e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140ea0e34(puVar1,param_1);
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  *(undefined1 *)(puVar1 + 0x2f) = 1;
  *puVar1 = &PTR_FUN_14a534660;
  puVar1[5] = &PTR_FUN_14a534980;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  *(byte *)((longlong)puVar1 + 0xd9) = *(byte *)((longlong)puVar1 + 0xd9) & 0xfe;
  FUN_140e2f50a(puVar1,4);
  return;
}



// FUNCTION 1417aa1c4 FUN_1417aa1c4 body=54 status=ok
// SIG undefined FUN_1417aa1c4(void)

undefined8 FUN_1417aa1c4(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1401e2c50();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x27c));
}



// FUNCTION 1417aa1fa FUN_1417aa1fa body=49 status=ok
// SIG undefined FUN_1417aa1fa(void)

longlong FUN_1417aa1fa(void)

{
  if (DAT_14cab8fa8 == 0) {
    FUN_14073dd9a(&DAT_14cab8fa8,&PTR_LAB_14a53dd70);
  }
  return DAT_14cab8fa8;
}



// FUNCTION 1417aa22c FUN_1417aa22c body=73 status=ok
// SIG undefined FUN_1417aa22c(void)

void FUN_1417aa22c(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  FUN_1448284b2();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc28);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cc28);
  if (iVar1 < 0x1f) {
    *(undefined1 *)(param_1 + 0x69a) = 0;
  }
  return;
}



// FUNCTION 1417aa276 FUN_1417aa276 body=238 status=ok
// SIG undefined FUN_1417aa276(void)

void FUN_1417aa276(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  
  if (*(longlong *)(param_1 + 0x710) != 0) {
    iVar1 = *(int *)(param_3 + 0x128);
    *(uint *)(param_3 + 0x128) = iVar1 + 1U;
    if (*(uint *)(param_3 + 300) < iVar1 + 1U) {
      FUN_1401acddc(param_3,iVar1);
    }
    lVar4 = *(longlong *)(param_3 + 0x120);
    if (*(longlong *)(param_3 + 0x120) == 0) {
      lVar4 = param_3;
    }
    lVar3 = (longlong)iVar1 * 0x48;
    FUN_1447244c4(lVar4 + lVar3,1);
    lVar4 = *(longlong *)(param_3 + 0x120);
    if (*(longlong *)(param_3 + 0x120) == 0) {
      lVar4 = param_3;
    }
    puVar5 = (undefined1 *)(lVar4 + lVar3);
    *puVar5 = 1;
    *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(param_1 + 0x710);
    iVar1 = *(int *)(puVar5 + 0x40);
    *(uint *)(puVar5 + 0x40) = iVar1 + 1U;
    if (*(uint *)(puVar5 + 0x44) < iVar1 + 1U) {
      FUN_140df0cf8(puVar5 + 0x18,iVar1);
    }
    puVar2 = *(undefined1 **)(lVar4 + lVar3 + 0x38);
    puVar5 = puVar5 + 0x18;
    if (puVar2 != (undefined1 *)0x0) {
      puVar5 = puVar2;
    }
    *(undefined **)(puVar5 + (longlong)iVar1 * 0x10) = &DAT_14cae9e78;
    *(undefined8 *)(puVar5 + (longlong)iVar1 * 0x10 + 8) = 0;
    *(undefined8 *)(lVar4 + lVar3 + 0x10) = *param_2;
  }
  return;
}



// FUNCTION 1417aa364 FUN_1417aa364 body=536 status=ok
// SIG undefined FUN_1417aa364(void)

void FUN_1417aa364(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140457ffc(&DAT_14cb10a90,param_1);
  lVar6 = *(longlong *)(param_1 + 0xb0);
  if (lVar6 == 0) {
    lVar6 = FUN_1448abda6(param_1);
  }
  bVar5 = *(byte *)(lVar6 + 0x152);
  if ((bVar5 == 1) || ((bVar5 < 7 && ((0x68U >> (bVar5 & 0x1f) & 1) != 0)))) {
    (**(code **)(*DAT_14cb0d2b0 + 0x3d0))(DAT_14cb0d2b0,&local_78);
    plVar2 = local_70;
    if (local_78 != 0) {
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      if ((*(char *)(param_1 + 0x698) == '\x01') && (*(char *)(param_1 + 0x728) == '\0')) {
        FUN_146ad75fc(local_78,&local_50);
        plVar1 = local_48;
        if (local_50 != 0) {
          if (local_48 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_48 + 1) = (int)local_48[1] + 1;
            UNLOCK();
          }
          local_68 = 0;
          FUN_14485c47a(&local_68,param_1);
          FUN_147765b46(local_50 + 8,&local_68);
          if (*(int *)(local_50 + 0x10) == 0) {
            local_68 = 0;
            uStack_60 = 0;
            FUN_146ad755e(local_78);
          }
          if (plVar1 != (longlong *)0x0) {
            LOCK();
            plVar4 = plVar1 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*plVar1)(plVar1);
              LOCK();
              piVar3 = (int *)((longlong)plVar1 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
        }
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_48 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_48)(local_48);
            LOCK();
            piVar3 = (int *)((longlong)local_48 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_48 + 0x10))(local_48);
            }
          }
        }
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar3 = (int *)((longlong)plVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_70 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar3 = (int *)((longlong)local_70 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
  }
  FUN_1447c0e7a(param_1);
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417aa57e FUN_1417aa57e body=40 status=ok
// SIG undefined FUN_1417aa57e(void)

undefined8 FUN_1417aa57e(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417aa5a6 FUN_1417aa5a6 body=40 status=ok
// SIG undefined FUN_1417aa5a6(void)

undefined8 FUN_1417aa5a6(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417aa5ce FUN_1417aa5ce body=40 status=ok
// SIG undefined FUN_1417aa5ce(void)

undefined8 FUN_1417aa5ce(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417aa612 FUN_1417aa612 body=344 status=ok
// SIG undefined FUN_1417aa612(void)

void FUN_1417aa612(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14072b458();
  lVar2 = *(longlong *)(param_2 + 0x658);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
LAB_1417aa651:
    lVar1 = FUN_1405e2bf2();
    if ((lVar1 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) goto LAB_1417aa6ab;
    lVar3 = 0;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30) {
      lVar3 = lVar2;
    }
  }
  else {
    if (lVar2 != 0) goto LAB_1417aa651;
LAB_1417aa6ab:
    lVar3 = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x160);
  if (lVar2 == 0) {
LAB_1417aa683:
    lVar2 = 0;
  }
  else {
    lVar1 = FUN_1405e2bf2();
    if (((lVar1 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) goto LAB_1417aa683;
    lVar2 = *(longlong *)(param_1 + 0x160);
  }
  if (lVar3 != lVar2) goto LAB_1417aa68a;
  lVar2 = *(longlong *)(param_1 + 0x168);
  if (DAT_14c950c29 == 1) {
    if (lVar2 != 0) {
      FUN_1456cec3c(lVar2);
      lVar2 = *(longlong *)(param_1 + 0x168);
      goto LAB_1417aa720;
    }
    *(undefined8 *)(param_2 + 0x708) = 0;
  }
  else {
LAB_1417aa720:
    *(longlong *)(param_2 + 0x708) = lVar2;
    lVar1 = *(longlong *)(param_2 + 0x710);
    if (lVar2 != 0 && lVar1 != 0) {
      FUN_1446ddc76(&local_30,"SlateUI",1);
      FUN_14016d8b0(lVar1,local_30,lVar2);
    }
  }
  FUN_1448215fa(param_2);
LAB_1417aa68a:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417aa76c FUN_1417aa76c body=40 status=ok
// SIG undefined FUN_1417aa76c(void)

undefined8 FUN_1417aa76c(undefined8 param_1,int param_2)

{
  FUN_140595c52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417aa794 FUN_1417aa794 body=38 status=ok
// SIG undefined FUN_1417aa794(void)

undefined8 FUN_1417aa794(undefined8 param_1,int param_2)

{
  FUN_140064e2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417aa7ba FUN_1417aa7ba body=292 status=ok
// SIG undefined FUN_1417aa7ba(void)

ulonglong * FUN_1417aa7ba(longlong param_1,ulonglong *param_2,longlong param_3)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  param_2[1] = 0;
  param_2[2] = 0;
  uVar1 = *(ulonglong *)(param_1 + 0x2e0);
  *param_2 = uVar1;
  cVar2 = FUN_14480c900(0,param_3);
  if (cVar2 == '\0') {
    uVar5 = 2;
  }
  else {
    uVar5 = *(uint *)(*(longlong *)(param_3 + 8) + 0x5c) >> 0x17 & 4 | 2;
  }
  uVar7 = 0;
  if ((DAT_14c761ae8 - 1U < 3) && (uVar7 = 0, (*(byte *)(param_1 + 0x78) & 0x40) != 0)) {
    uVar7 = 0x20;
  }
  uVar6 = *(byte *)(param_1 + 0x6e) & 8;
  cVar2 = *(char *)(param_1 + 0x82);
  bVar3 = FUN_144914152(param_1,param_3);
  if (((byte)(*(char *)(param_1 + 0x68) - 1U) < 2) || ((*(byte *)(param_1 + 0x78) & 0x10) != 0)) {
    if ((uVar1 & 0x200000000) != 0) {
LAB_1417aa8cb:
      iVar4 = uVar6 << 1;
      goto LAB_1417aa85c;
    }
  }
  else if ((uVar1 & 0x200000000) != 0 && (*(byte *)(param_1 + 0x75) & 200) != 0) goto LAB_1417aa8cb;
  iVar4 = 0;
LAB_1417aa85c:
  *(uint *)(param_2 + 2) =
       ((uint)bVar3 << 3 | uVar7 | uVar5 | (uint)(cVar2 != '\x01') << 0xd |
        (*(byte *)(param_1 + 0x72) & 1) << 0xe | uVar6 << 4) + iVar4;
  return param_2;
}



// FUNCTION 1417aa8de FUN_1417aa8de body=169 status=ok
// SIG undefined FUN_1417aa8de(void)

longlong FUN_1417aa8de(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = DAT_14c98dec8;
  lVar4 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x1b0) = DAT_14c98ded0;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(ushort *)(param_1 + 0x70) = DAT_14c96b23c | 0x100;
  plVar2 = (longlong *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x80) != 0) {
    puVar3 = (undefined8 *)*plVar2;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1417aa936;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
LAB_1417aa936:
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return param_1;
}



// FUNCTION 1417aa988 FUN_1417aa988 body=66 status=ok
// SIG undefined FUN_1417aa988(void)

void FUN_1417aa988(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1417aa9ca FUN_1417aa9ca body=29 status=ok
// SIG undefined FUN_1417aa9ca(void)

undefined8 FUN_1417aa9ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417aa9e7 FUN_1417aa9e7 body=49 status=ok
// SIG undefined FUN_1417aa9e7(void)

longlong FUN_1417aa9e7(void)

{
  if (DAT_14cab9498 == 0) {
    FUN_14073dd9a(&DAT_14cab9498,&PTR_LAB_14a54c180);
  }
  return DAT_14cab9498;
}



// FUNCTION 1417aaa18 FUN_1417aaa18 body=804 status=ok
// SIG undefined FUN_1417aaa18(void)

void FUN_1417aaa18(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  undefined8 unaff_RBP;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  longlong *plVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_88 [40];
  uint local_60;
  uint local_5c;
  longlong *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar16 = (longlong *)param_1[0x22];
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (plVar16 == (longlong *)0x0) {
    plVar16 = (longlong *)0x0;
    lVar12 = 0;
  }
  else {
    iVar5 = (int)plVar16[1];
    lVar12 = 0;
    do {
      if (iVar5 == 0) {
        plVar16 = (longlong *)0x0;
        goto LAB_1417aaa72;
      }
      LOCK();
      iVar3 = (int)plVar16[1];
      bVar17 = iVar5 == iVar3;
      if (bVar17) {
        *(int *)(plVar16 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar17);
    lVar12 = param_1[0x21];
    uVar9 = 0;
  }
LAB_1417aaa72:
  lVar7 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar7 == 0 || lVar12 == 0) goto LAB_1417aabbc;
  if ((char)param_1[0x51] == '\x01') {
    lVar11 = param_1[2];
    bVar14 = 1;
    local_5c = (uint)uVar9;
    if (lVar11 != 0) {
      lVar8 = FUN_140e64c66();
      if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
        bVar14 = (byte)*(undefined4 *)(lVar11 + 0x3c8) & 1;
      }
    }
    bVar10 = *(byte *)(param_1 + 0x4e);
    if (*(longlong *)(lVar7 + 0x1f0) == 0) {
      lVar7 = lVar7 + 0x460;
    }
    else {
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x1f0) + 0xf8);
    }
    bVar17 = false;
    uVar15 = 0;
    uVar9 = 0;
    local_58 = plVar16;
    if (param_1 != (longlong *)0x0) {
      uVar15 = *(uint *)((longlong)param_1 + 0xc);
      if ((int)uVar15 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      uVar9 = (ulonglong)*(uint *)(lVar11 + 0x10);
      if (*(uint *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        uVar13 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar18) {
          local_60 = uVar13;
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar13);
          uVar13 = local_60;
        }
        LOCK();
        uVar6 = *(uint *)(lVar11 + 0x10);
        bVar18 = uVar6 == 0;
        if (bVar18) {
          *(uint *)(lVar11 + 0x10) = uVar13;
          uVar6 = 0;
        }
        UNLOCK();
        if (bVar18) {
          uVar6 = uVar13;
        }
        uVar9 = (ulonglong)uVar6;
      }
    }
    local_50 = (ulonglong)uVar15 | uVar9 << 0x20;
    lVar7 = FUN_140633c48(lVar7);
    plVar16 = local_58;
    if (lVar7 != 0) {
      bVar17 = *(int *)(lVar7 + 8) != *(int *)(lVar7 + 0x34);
    }
    uVar9 = (ulonglong)local_5c;
    if (((int)param_1[0x45] < 1 && ((bVar14 == 0 && (bVar10 & 1) == 0) && !bVar17)) &&
        (int)param_1[0x43] < 1) {
      if (((*(byte *)(param_1 + 0x4e) & 8) != 0) &&
         (lVar7 = param_1[0x4c], (longlong)(int)lVar7 != 0)) {
        lVar11 = param_1[0x4b];
        lVar8 = 0;
        do {
          cVar4 = (**(code **)(**(longlong **)(lVar11 + lVar8) + 0x2b8))();
          if (cVar4 != '\0') goto LAB_1417aabad;
          lVar8 = lVar8 + 8;
        } while ((longlong)(int)lVar7 * 8 != lVar8);
      }
      goto LAB_1417aacf0;
    }
LAB_1417aabad:
    bVar14 = *(byte *)(lVar12 + 0x38);
    bVar10 = bVar14 | 4;
  }
  else {
LAB_1417aacf0:
    bVar14 = *(byte *)(lVar12 + 0x38);
    bVar10 = bVar14 & 0xfb;
  }
  *(byte *)(lVar12 + 0x38) = bVar10;
  if ((bVar14 != bVar10) &&
     (((((bVar10 & 0xcc) != 0) != ((bVar14 & 0xcc) != 0) || ((char)(bVar10 ^ bVar14) < '\0')) &&
      (cVar4 = FUN_1400d1184(lVar12 + 0x18,lVar12), cVar4 != '\0')))) {
    lVar7 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x10);
    FUN_146932214(lVar7,(ulonglong)((*(uint *)(lVar12 + 0x28) >> 0x10) * 0x18) +
                        *(longlong *)
                         (*(longlong *)(lVar7 + 0x10) + 0x10 +
                         (ulonglong)((*(uint *)(lVar12 + 0x28) & 0xffff) << 6)));
  }
LAB_1417aabbc:
  if ((char)uVar9 == '\0') {
    LOCK();
    plVar1 = plVar16 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417aadc8 FUN_1417aadc8 body=130 status=ok
// SIG undefined FUN_1417aadc8(void)

double * FUN_1417aadc8(longlong param_1,double *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140105618(param_1,&local_28);
  lVar1 = *(longlong *)(param_1 + 0x278);
  if (lVar1 == 0) {
    *param_2 = local_28;
    param_2[1] = dStack_20;
  }
  else {
    if (dStack_20 <= *(double *)(lVar1 + 0x280)) {
      dStack_20 = *(double *)(lVar1 + 0x280);
    }
    if (local_28 <= *(double *)(lVar1 + 0x278)) {
      local_28 = *(double *)(lVar1 + 0x278);
    }
    *param_2 = local_28;
    param_2[1] = dStack_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417aae4b FUN_1417aae4b body=49 status=ok
// SIG undefined FUN_1417aae4b(void)

longlong FUN_1417aae4b(void)

{
  if (DAT_14cab9b38 == 0) {
    FUN_14073dd9a(&DAT_14cab9b38,&PTR_LAB_14a5553a0);
  }
  return DAT_14cab9b38;
}



// FUNCTION 1417aae82 FUN_1417aae82 body=418 status=ok
// SIG undefined FUN_1417aae82(void)

undefined8 * FUN_1417aae82(code *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  undefined1 local_231;
  undefined1 local_230 [8];
  longlong *local_228;
  undefined8 local_218;
  longlong *local_210;
  code *local_208;
  code **local_200;
  code *local_1f8;
  undefined1 *local_1f0;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (((byte)param_1[0x270] & 4) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x300))(param_1);
  }
  cVar3 = FUN_141318136(param_1 + 0x2b8);
  if (cVar3 != '\0') {
    local_200 = &local_1f8;
    local_208 = FUN_14333d928;
    local_1f8 = param_1;
    FUN_140ec5510(*(longlong *)(param_1 + 0x268));
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x268) + 0x30) == 0) {
    FUN_140a50678(&local_1f8);
    local_248 = &local_231;
    FUN_140a52ce6(local_230,"SSpacer",".\\Runtime/UMG/Private/UserWidget.cpp",0x45e);
    FUN_140a50c6a(local_230,&local_218,&local_1f8);
    *param_2 = local_218;
    param_2[1] = local_210;
    if (local_210 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_210 + 1) = (int)local_210[1] + 1;
      UNLOCK();
      if (local_210 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_210 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_210)(local_210);
          LOCK();
          piVar2 = (int *)((longlong)local_210 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_210 + 0x10))(local_210);
          }
        }
      }
    }
    if (local_228 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_228 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_228)(local_228);
        LOCK();
        piVar2 = (int *)((longlong)local_228 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_228 + 0x10))(local_228);
        }
      }
    }
    FUN_1449db362(local_38);
    FUN_140a4ff8c(&local_1f8);
  }
  else {
    local_1f0 = local_230;
    local_1f8 = FUN_143336ee2;
    FUN_1407616b4(*(longlong *)(*(longlong *)(param_1 + 0x268) + 0x30),param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ab026 FUN_1417ab026 body=127 status=ok
// SIG undefined FUN_1417ab026(void)

void FUN_1417ab026(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar1 == '\0') {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1417ab0b9 FUN_1417ab0b9 body=117 status=ok
// SIG undefined FUN_1417ab0b9(void)

void FUN_1417ab0b9(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_14094d83e(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14a5566b0;
  puVar1[0x4a] = &PTR_FUN_14a556ab0;
  puVar1[0x76] = 0;
  puVar1[0x77] = 0;
  puVar1[0x78] = 0;
  puVar1[0x7a] = 0;
  puVar1[0x7b] = 0;
  puVar1[0x7c] = 0;
  puVar1[0x7d] = 0;
  puVar1[0x7e] = 0;
  puVar1[0x7f] = 0;
  puVar1[0x80] = 0;
  puVar1[0x81] = 0;
  puVar1[0x82] = 0;
  puVar1[0x83] = 0;
  *(byte *)(puVar1 + 0x79) = *(byte *)(puVar1 + 0x79) & 0xfd;
  return;
}



// FUNCTION 1417ab12e FUN_1417ab12e body=280 status=ok
// SIG undefined FUN_1417ab12e(void)

void FUN_1417ab12e(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  int iVar2;
  
  FUN_140958b58();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc28);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar2 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
    if (iVar2 < 0x46) {
      iVar2 = *(int *)(param_1 + 0x3f8);
      pvVar1 = *(void **)(param_1 + 0x3f0);
      *(int *)(param_1 + 0x408) = iVar2;
      if (iVar2 == 0 && *(int *)(param_1 + 0x40c) == 0) {
        *(undefined4 *)(param_1 + 0x40c) = 0;
      }
      else {
        FUN_1401b309e((undefined8 *)(param_1 + 0x400),iVar2);
        if (iVar2 != 0) {
          memcpy(*(void **)(param_1 + 0x400),pvVar1,(longlong)iVar2 << 3);
        }
      }
      iVar2 = *(int *)(param_1 + 0x3f8);
      pvVar1 = *(void **)(param_1 + 0x3f0);
      *(int *)(param_1 + 0x418) = iVar2;
      if (iVar2 == 0 && *(int *)(param_1 + 0x41c) == 0) {
        *(undefined4 *)(param_1 + 0x41c) = 0;
      }
      else {
        FUN_1401b309e((undefined8 *)(param_1 + 0x410),iVar2);
        if (iVar2 != 0) {
          memcpy(*(void **)(param_1 + 0x410),pvVar1,(longlong)iVar2 << 3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1417ab246 FUN_1417ab246 body=65 status=ok
// SIG undefined FUN_1417ab246(void)

void FUN_1417ab246(longlong param_1)

{
  FUN_1408a74b4();
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FUN_14472eae2(*(longlong *)(param_1 + 0x3b0),0x40021);
    FUN_1406555d4(*(undefined8 *)(param_1 + 0x3b0),param_1,1);
    return;
  }
  return;
}



// FUNCTION 1417ab287 FUN_1417ab287 body=49 status=ok
// SIG undefined FUN_1417ab287(void)

longlong FUN_1417ab287(void)

{
  if (DAT_14caba6f8 == 0) {
    FUN_14073dd9a(&DAT_14caba6f8,&PTR_LAB_14a55b550);
  }
  return DAT_14caba6f8;
}



// FUNCTION 1417ab2b8 FUN_1417ab2b8 body=49 status=ok
// SIG undefined FUN_1417ab2b8(void)

longlong FUN_1417ab2b8(void)

{
  if (DAT_14caba7d0 == 0) {
    FUN_14073dd9a(&DAT_14caba7d0,&PTR_LAB_14a55d0a0);
  }
  return DAT_14caba7d0;
}



// FUNCTION 1417ab2ea FUN_1417ab2ea body=127 status=ok
// SIG undefined FUN_1417ab2ea(void)

void FUN_1417ab2ea(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar1 == '\0') {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1417ab37e FUN_1417ab37e body=113 status=ok
// SIG undefined FUN_1417ab37e(void)

undefined8 * FUN_1417ab37e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a54d860;
  plVar3 = (longlong *)param_1[4];
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
  FUN_140762ea4(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ab3f0 FUN_1417ab3f0 body=29 status=ok
// SIG undefined FUN_1417ab3f0(void)

undefined8 FUN_1417ab3f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ab40d FUN_1417ab40d body=49 status=ok
// SIG undefined FUN_1417ab40d(void)

longlong FUN_1417ab40d(void)

{
  if (DAT_14caba9c8 == 0) {
    FUN_14073dd9a(&DAT_14caba9c8,&PTR_LAB_14a562440);
  }
  return DAT_14caba9c8;
}



// FUNCTION 1417ab44b FUN_1417ab44b body=49 status=ok
// SIG undefined FUN_1417ab44b(void)

longlong FUN_1417ab44b(void)

{
  if (DAT_14cabaf88 == 0) {
    FUN_14073dd9a(&DAT_14cabaf88,&PTR_LAB_14a56c800);
  }
  return DAT_14cabaf88;
}



// FUNCTION 1417ab47c FUN_1417ab47c body=49 status=ok
// SIG undefined FUN_1417ab47c(void)

longlong FUN_1417ab47c(void)

{
  if (DAT_14cabb6d8 == 0) {
    FUN_14073dd9a(&DAT_14cabb6d8,&PTR_LAB_14a5738d0);
  }
  return DAT_14cabb6d8;
}



// FUNCTION 1417ab4ad FUN_1417ab4ad body=49 status=ok
// SIG undefined FUN_1417ab4ad(void)

longlong FUN_1417ab4ad(void)

{
  if (DAT_14cabb9a8 == 0) {
    FUN_14073dd9a(&DAT_14cabb9a8,&PTR_LAB_14a579790);
  }
  return DAT_14cabb9a8;
}



// FUNCTION 1417ab4de FUN_1417ab4de body=49 status=ok
// SIG undefined FUN_1417ab4de(void)

longlong FUN_1417ab4de(void)

{
  if (DAT_14cabba90 == 0) {
    FUN_14073dd9a(&DAT_14cabba90,&PTR_LAB_14a57b400);
  }
  return DAT_14cabba90;
}



// FUNCTION 1417ab50f FUN_1417ab50f body=49 status=ok
// SIG undefined FUN_1417ab50f(void)

longlong FUN_1417ab50f(void)

{
  if (DAT_14cabbfa0 == 0) {
    FUN_14073dd9a(&DAT_14cabbfa0,&PTR_LAB_14a586420);
  }
  return DAT_14cabbfa0;
}



// FUNCTION 1417ab540 FUN_1417ab540 body=49 status=ok
// SIG undefined FUN_1417ab540(void)

longlong FUN_1417ab540(void)

{
  if (DAT_14cabc508 == 0) {
    FUN_14073dd9a(&DAT_14cabc508,&PTR_LAB_14a5929c0);
  }
  return DAT_14cabc508;
}



// FUNCTION 1417ab572 FUN_1417ab572 body=487 status=ok
// SIG undefined FUN_1417ab572(void)

undefined4 FUN_1417ab572(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  longlong local_60;
  int local_58;
  uint local_50;
  longlong local_48 [2];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = param_3;
  uVar1 = FUN_140988638(&local_38,L"MEDIA",1);
  if ((char)uVar1 == '\0') goto LAB_1417ab5ac;
  FUN_14619c2be(local_48,&local_38,0);
  local_70 = 0xffffffff;
  local_78 = 0;
  iVar2 = FUN_1447ee042(local_48,L"PLAY",4,1);
  if (iVar2 == -1) {
    local_70 = 0xffffffff;
    local_78 = 0;
    iVar2 = FUN_1447ee042(local_48,L"PAUSE",5,1);
    if (iVar2 != -1) {
      FUN_147819752(&local_60);
      uVar4 = (ulonglong)local_50;
      if ((-1 < (int)local_50) && ((int)local_50 < local_58)) {
        do {
          FUN_147801690(*(undefined8 *)(*(longlong *)(local_60 + (uVar4 & 0xffffffff) * 8) + 0x130),
                        0);
          uVar4 = (longlong)(int)local_50;
          do {
            uVar3 = uVar4;
            uVar4 = uVar3 + 1;
            local_50 = (uint)uVar4;
            if ((longlong)local_58 <= (longlong)uVar4) break;
          } while (*(longlong *)(local_60 + uVar4 * 8) == 0);
        } while ((-2 < (longlong)uVar3) && ((int)local_50 < local_58));
      }
      goto LAB_1417ab6da;
    }
  }
  else {
    FUN_147819752(&local_60);
    uVar4 = (ulonglong)local_50;
    if ((-1 < (int)local_50) && ((int)local_50 < local_58)) {
      do {
        FUN_147801690(*(undefined8 *)(*(longlong *)(local_60 + (uVar4 & 0xffffffff) * 8) + 0x130),
                      0x3f800000);
        uVar4 = (longlong)(int)local_50;
        do {
          uVar3 = uVar4;
          uVar4 = uVar3 + 1;
          local_50 = (uint)uVar4;
          if ((longlong)local_58 <= (longlong)uVar4) break;
        } while (*(longlong *)(local_60 + uVar4 * 8) == 0);
      } while ((-2 < (longlong)uVar3) && ((int)local_50 < local_58));
    }
LAB_1417ab6da:
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
LAB_1417ab5ac:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}


