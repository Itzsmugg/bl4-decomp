// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1415b3b3e FUN_1415b3b3e body=512 status=ok
// SIG undefined FUN_1415b3b3e(void)

undefined8 * FUN_1415b3b3e(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14aba03c0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) & 0x80 | 8;
  *(undefined1 *)((longlong)param_1 + 0x2b) = 1;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[4] = &PTR_FUN_14a1b6cf0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_1461cd2c4(param_1 + 0x18);
  FUN_146421b50(param_1 + 0x40,param_1);
  param_1[0x5e] = param_1;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = param_1;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0x200000000;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  FUN_1464220fa(param_1 + 0x77,param_1);
  FUN_147e435ba(param_1 + 0x8e,param_1);
  param_1[0xb5] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x5cd) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  if (*(int *)(param_1 + 10) != 3) {
    FUN_1446efa72(param_1 + 9,0,3,0x10);
    *(undefined4 *)(param_1 + 10) = 3;
  }
  puVar1 = (undefined8 *)param_1[9];
  *puVar1 = &PTR_LAB_149e01f80;
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
  *puVar1 = &PTR_FUN_14aba0760;
  puVar1[3] = param_1;
  puVar1[4] = FUN_140bcd22c;
  *(undefined4 *)(puVar1 + 5) = 0;
  return param_1;
}



// FUNCTION 1415b3d3e FUN_1415b3d3e body=618 status=ok
// SIG undefined FUN_1415b3d3e(void)

void FUN_1415b3d3e(longlong param_1,byte param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 *local_58;
  code *local_50;
  undefined8 **local_48;
  undefined1 local_3f;
  undefined2 local_3e;
  undefined1 local_3b;
  byte local_3a;
  undefined1 local_39;
  byte local_38;
  undefined1 local_37;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 local_23;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(byte *)(param_1 + 0x60) & 1) != param_2) {
    *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfe | param_2;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (param_2 == 0) {
      FUN_145feef96(*(longlong *)(param_1 + 0x10) + 0x1808,&DAT_14cbd4078);
    }
    else {
      local_48 = &local_58;
      local_58 = &DAT_14cbd4078;
      local_50 = (code *)&LAB_143cbcb2c;
      FUN_1400b7536();
    }
    lVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10c8) + 0x10))
                      (*(longlong *)(param_1 + 0x10) + 0x10c8);
    if (lVar2 != 0) {
      plVar3 = (longlong *)FUN_140849bbe(lVar2);
      if (plVar3 != (longlong *)0x0) {
        if (DAT_14cb63950 == 0) {
          local_70 = &local_50;
          local_50 = FUN_144a7958c;
          local_60 = FUN_14081d0ea;
          local_68 = &LAB_1464ec72a;
          local_78 = &LAB_1486f5f75;
          local_80 = &LAB_140945686;
          local_88 = L"Engine";
          local_90 = 0;
          local_98 = 0x10000004;
          local_a0 = 0x10;
          local_a8 = 0x19d0;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee)
          ;
        }
        if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) ==
            DAT_14cb63950 + 0x30)) {
          lVar2 = FUN_14025708c(plVar3,DAT_14c9abbf0);
          if ((lVar2 != 0) && (*(char *)(lVar2 + 0x362) == '\x01')) {
            cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x9a0))();
            if (cVar1 != '\0') {
              local_50._0_5_ = (uint5)(uint)local_50;
              local_48._0_5_ = (uint5)(uint)local_48;
              local_3f = 0;
              local_3b = 0;
              local_34 = 0xffffffff;
              uStack_30 = 0;
              uStack_2c = 0xffffffff;
              uStack_28 = 0;
              local_23 = 0;
              local_21 = 0;
              local_3e = 0x101;
              local_3a = param_2 ^ 1;
              local_39 = 1;
              local_37 = 1;
              local_38 = param_2;
              FUN_14079848a();
              (**(code **)(*plVar3 + 0xd78))(plVar3,&DAT_14cbd4078,&local_50);
              goto LAB_1415b3eaf;
            }
          }
          *(byte *)(plVar3 + 0x18e) = *(byte *)(plVar3 + 0x18e) & 0xef | param_2 << 4;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_c8);
        }
      }
    }
  }
LAB_1415b3eaf:
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b3fc0 FUN_1415b3fc0 body=223 status=ok
// SIG undefined FUN_1415b3fc0(void)

void FUN_1415b3fc0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x1f0), lVar1 != 0)) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (param_1[9] != 0) {
        FUN_14480f766(lVar1 + 0xc0);
      }
      if (param_1[10] != 0) {
        FUN_14480f766(lVar1 + 0xd8);
      }
      lVar1 = *(longlong *)(lVar1 + 0x48);
      if (lVar1 != 0) {
        lVar2 = FUN_140b6d0be();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          if (param_1[0xb] != 0) {
            FUN_14480f766(lVar1 + 0x228);
            param_1[0xb] = 0;
          }
          if (param_1[0xc] != 0) {
            FUN_14480f766(lVar1 + 0x240);
            param_1[0xc] = 0;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1415b40a0 FUN_1415b40a0 body=4958 status=ok
// SIG undefined FUN_1415b40a0(void)

void FUN_1415b40a0(longlong *param_1,char *param_2,undefined8 param_3,code *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  float fVar4;
  ushort uVar5;
  char *pcVar6;
  code *pcVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  ulonglong uVar20;
  uint uVar21;
  void *pvVar22;
  undefined4 *puVar23;
  undefined7 uVar25;
  PSRWLOCK SRWLock;
  undefined8 *puVar24;
  longlong lVar26;
  longlong lVar27;
  char *pcVar28;
  bool bVar29;
  undefined1 auStack_198 [32];
  undefined2 *local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined2 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  char *local_140;
  undefined1 *local_138;
  code *local_130;
  undefined8 local_120;
  undefined4 local_114;
  PSRWLOCK local_110;
  char *local_108;
  undefined2 local_100;
  undefined2 uStack_fe;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  longlong *local_f0;
  int local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  void *pvStack_a0;
  undefined8 uStack_98;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *(undefined1 *)(param_1 + 0x11) = 0;
  lVar9 = FUN_1400d7050(param_1 + 6);
  if (lVar9 == 0) goto LAB_1415b4169;
  if (DAT_14cbadd90 == 0) {
    local_140 = (char *)&local_b8;
    local_b8 = FUN_141030f22;
    local_130 = FUN_14081d0ea;
    local_138 = &LAB_1459f2e4c;
    local_148 = &LAB_148c39de3;
    local_150 = &LAB_1457a9eb2;
    local_158 = &DAT_149e063b2;
    local_160 = 0;
    local_168 = 0x10000004;
    local_170 = 0x10;
    local_178 = (undefined2 *)CONCAT44(local_178._4_4_,0x3de0);
    param_4 = FUN_1465e9ab8;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1415b4169;
  if (*param_2 != '\x01') {
    if (*param_2 != '\x02') {
LAB_1415b424c:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_198);
    }
    FUN_1449027d0(param_1,&local_b8);
    lVar14 = *(longlong *)(local_b8 + 0x120);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar14 + 0x100));
    plVar15 = uStack_b0;
    *(int *)(lVar14 + 0xf8) = *(int *)(lVar14 + 0xf8) + 1;
    if (uStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = uStack_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*uStack_b0)(uStack_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    if ((*(int *)(param_2 + 0x30) != *(int *)(lVar14 + 0x38)) || (*(int *)(lVar14 + 0x60) == 0)) {
      FUN_1447715ec(lVar14 + 0x38,param_2 + 0x30);
      *(int *)(lVar14 + 0x60) = *(int *)(lVar14 + 0x60) + 1;
    }
    if ((*(float *)(lVar14 + 0xb8) != 0.0) || (NAN(*(float *)(lVar14 + 0xb8)))) {
      iVar16 = *(int *)(lVar14 + 0xbc) + 1;
LAB_1415b4399:
      *(undefined4 *)(lVar14 + 0xb8) = 0;
      *(int *)(lVar14 + 0xbc) = iVar16;
    }
    else {
      iVar16 = 1;
      if (*(int *)(lVar14 + 0xbc) == 0) goto LAB_1415b4399;
    }
    iVar16 = -1;
    if (*(longlong *)(param_2 + 0x20) != 0) {
      iVar16 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x394);
    }
    if (iVar16 == *(int *)(lVar14 + 0x68)) {
      iVar17 = 1;
      if (*(int *)(lVar14 + 0x6c) == 0) goto LAB_1415b43da;
    }
    else {
      iVar17 = *(int *)(lVar14 + 0x6c) + 1;
LAB_1415b43da:
      *(int *)(lVar14 + 0x68) = iVar16;
      *(int *)(lVar14 + 0x6c) = iVar17;
    }
    local_178 = (undefined2 *)CONCAT71(local_178._1_7_,(char)param_1[0x11]);
    FUN_148e59f9c(lVar14,param_1 + 0xe,iVar16,
                  CONCAT71((int7)((ulonglong)param_4 >> 8),param_2[0x59]) ^ 1);
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar14 + 0x100));
    uVar13 = FUN_1401b4c98(lVar9);
    lVar9 = FUN_140cb9f34();
    uVar3 = *(undefined4 *)(lVar9 + 0x28);
    local_f0 = (longlong *)0x0;
    local_e8 = 0;
    FUN_1446efa72(&local_f0,0,3,0x10);
    plVar15 = local_f0;
    local_e8 = 3;
    *local_f0 = (longlong)&PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar14 == 0) {
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_f0[2] = lVar14;
    *local_f0 = (longlong)&PTR_FUN_14b9b8ed0;
    local_f0[3] = 0;
    iVar16 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar21 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_f0 + 3) = uVar21;
      if ((int)uVar21 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar16 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar16 = DAT_14c964868 + 1;
        UNLOCK();
        iVar17 = DAT_14c964868 + 1;
        bVar29 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar16;
        if (bVar29) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar17);
        }
        LOCK();
        iVar16 = *(int *)(lVar9 + 0x10);
        bVar29 = iVar16 == 0;
        if (bVar29) {
          *(int *)(lVar9 + 0x10) = iVar17;
          iVar16 = 0;
        }
        UNLOCK();
        if (bVar29) {
          iVar16 = iVar17;
        }
      }
    }
    *(int *)((longlong)plVar15 + 0x1c) = iVar16;
    plVar15[4] = (longlong)&LAB_146648dd8;
    *(undefined4 *)(plVar15 + 5) = 0;
    local_b8 = (code *)0x0;
    uStack_b0 = (longlong *)((ulonglong)uStack_b0._4_4_ << 0x20);
    FUN_14487d8d8(&local_b8,&local_f0);
    local_78 = 1;
    local_178 = &local_100;
    local_100 = 0;
    uStack_fc = 0xbf800000;
    FUN_1406f4044(uVar13,param_1 + 0x10,&local_b8,uVar3);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
    if (local_e8 != 0) {
      if (local_f0 == (longlong *)0x0) goto LAB_1415b4169;
      (**(code **)*local_f0)(local_f0,0);
      FUN_1446efa72(&local_f0,0,0,0x10);
      local_e8 = 0;
    }
    if (local_f0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_1415b4169;
  }
  bVar29 = false;
  if (((int)param_1[0xf] == 1) && (param_2[0x5a] != '\x03')) {
    bVar29 = param_2[0x5a] != '\x04';
  }
  if ((int)param_1[0xf] == 0 || bVar29) {
    cVar8 = FUN_140426394(lVar9 + 0xd98,&DAT_14cbd9688);
    if (cVar8 != '\0') goto LAB_1415b424c;
    goto LAB_1415b4169;
  }
  if (param_1[0x10] != 0) {
    lVar10 = FUN_1401b4c98(lVar9);
    lVar14 = param_1[0x10];
    if (lVar14 != 0) {
      uVar21 = (uint)lVar14;
      if ((int)(uVar21 & 0xffffff) < *(int *)(lVar10 + 0x10)) {
        lVar26 = lVar10 + 0x18;
        if (*(longlong *)(lVar10 + 0x28) != 0) {
          lVar26 = *(longlong *)(lVar10 + 0x28);
        }
        if ((*(uint *)(lVar26 + (ulonglong)((uVar21 & 0xffffff) >> 5) * 4) >> (uVar21 & 0x1f) & 1)
            != 0) {
          lVar26 = *(longlong *)(lVar10 + 8);
          lVar27 = (ulonglong)(uVar21 & 0xffffff) * 0x70;
          if (((lVar26 + lVar27 != 0) && (*(longlong *)(lVar26 + 0x60 + lVar27) == lVar14)) &&
             (*(char *)(lVar26 + 1 + lVar27) != '\x04')) {
            FUN_1405a424c(lVar10);
          }
        }
      }
    }
    param_1[0x10] = 0;
  }
  *(undefined1 *)(param_1 + 0x11) = 1;
  FUN_1403ca8ec(lVar9 + 0xd98,&DAT_14cbd9688);
  FUN_1449027d0(param_1,&local_b8);
  pcVar6 = *(char **)(local_b8 + 0x120);
  SRWLock = (PSRWLOCK)(pcVar6 + 0x100);
  AcquireSRWLockExclusive(SRWLock);
  plVar15 = uStack_b0;
  *(int *)(pcVar6 + 0xf8) = *(int *)(pcVar6 + 0xf8) + 1;
  if (uStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_b0)(uStack_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (*pcVar6 == '\0') {
    iVar16 = *(int *)(pcVar6 + 4) + 1;
LAB_1415b45b5:
    *pcVar6 = '\x01';
    *(int *)(pcVar6 + 4) = iVar16;
  }
  else {
    iVar16 = 1;
    if (*(int *)(pcVar6 + 4) == 0) goto LAB_1415b45b5;
  }
  fVar4 = *(float *)(param_2 + 0x28);
  if ((fVar4 != *(float *)(pcVar6 + 0xb8)) || (NAN(fVar4) || NAN(*(float *)(pcVar6 + 0xb8)))) {
    iVar16 = *(int *)(pcVar6 + 0xbc) + 1;
LAB_1415b45e0:
    *(float *)(pcVar6 + 0xb8) = fVar4;
    *(int *)(pcVar6 + 0xbc) = iVar16;
  }
  else {
    iVar16 = 1;
    if (*(int *)(pcVar6 + 0xbc) == 0) goto LAB_1415b45e0;
  }
  FUN_14130d958(pcVar6 + 0x38,&DAT_14c9485f0);
  if (param_2[0x59] == pcVar6[0xc0]) {
    iVar16 = 1;
    if (*(int *)(pcVar6 + 0xc4) == 0) goto LAB_1415b461e;
  }
  else {
    iVar16 = *(int *)(pcVar6 + 0xc4) + 1;
LAB_1415b461e:
    pcVar6[0xc0] = param_2[0x59];
    *(int *)(pcVar6 + 0xc4) = iVar16;
  }
  if (param_2[0x5a] == pcVar6[200]) {
    iVar16 = 1;
    if (*(int *)(pcVar6 + 0xcc) == 0) goto LAB_1415b464a;
  }
  else {
    iVar16 = *(int *)(pcVar6 + 0xcc) + 1;
LAB_1415b464a:
    pcVar6[200] = param_2[0x5a];
    *(int *)(pcVar6 + 0xcc) = iVar16;
  }
  iVar16 = -1;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    iVar16 = *(int *)(*(longlong *)(param_2 + 0x20) + 0x394);
  }
  if (iVar16 == *(int *)(pcVar6 + 0x68)) {
    iVar17 = 1;
    if (*(int *)(pcVar6 + 0x6c) == 0) goto LAB_1415b4688;
  }
  else {
    iVar17 = *(int *)(pcVar6 + 0x6c) + 1;
LAB_1415b4688:
    *(int *)(pcVar6 + 0x68) = iVar16;
    *(int *)(pcVar6 + 0x6c) = iVar17;
  }
  local_178 = (undefined2 *)CONCAT71(local_178._1_7_,(char)param_1[0x11]);
  local_120 = (ulonglong)local_120._4_4_ << 0x20;
  FUN_148e59f9c(pcVar6,param_1 + 0xe,iVar16,0);
  FUN_140056680(&local_100,&DAT_149dfb77a);
  pcVar28 = param_2 + 0x5c;
  if (*(int *)(param_2 + 0x5c) != 0) {
    local_110 = SRWLock;
    if (param_2[0x5b] == '\x01') {
      lVar9 = FUN_140d1d7e4();
      puVar11 = (undefined8 *)FUN_140d19a6c(lVar9 + 0x90);
      local_c8 = *(undefined8 *)pcVar28;
      local_c0 = *(undefined4 *)(param_2 + 100);
      uVar12 = FUN_1448075d0(&local_b8);
      if (DAT_14cbcdc38 == 0) {
        local_120 = 0;
      }
      else {
        uVar12 = FUN_144837462(DAT_14cbcdc38,&local_b8);
        local_120 = uVar12;
      }
      if (pvStack_a0 != (void *)0x0) {
        uVar12 = FUN_1400020a8();
      }
      uVar25 = (undefined7)((ulonglong)SRWLock >> 8);
      local_108 = pcVar28;
      if (local_120 == 0) {
        uVar21 = (uint)CONCAT71(uVar25,2);
LAB_1415b4761:
        local_b8 = (code *)0x0;
        uStack_b0 = (longlong *)0x0;
        local_a8 = local_a8 & 0xffffffff00000000;
        pvStack_a0 = (void *)0x0;
        uStack_98 = 0;
        local_114 = (undefined4)CONCAT71((int7)(uVar12 >> 8),1);
        lVar9 = 0;
      }
      else {
        uVar21 = (uint)CONCAT71(uVar25,2);
        if ((longlong)*(int *)(puVar11 + 1) != 0) {
          puVar24 = (undefined8 *)*puVar11;
          lVar9 = (longlong)*(int *)(puVar11 + 1) * 0x18;
          uVar12 = local_120;
          do {
            uStack_b0 = (longlong *)0x0;
            local_b8 = (code *)*puVar24;
            local_a8 = 0;
            uVar13 = FUN_14477b664(puVar24[1]);
            uStack_b0 = (longlong *)FUN_14477b664(uVar13);
            local_a8 = puVar24[2];
            if (uStack_b0 == (longlong *)0x0) {
              uVar13 = FUN_141417e7c();
              uStack_b0 = (longlong *)FUN_14477b664(uVar13);
            }
            uVar20 = local_a8;
            if (local_a8 == 0) {
              local_a8 = 0;
              if (uStack_b0 == (longlong *)0x0) {
                uVar20 = 0;
              }
              else {
                uVar20 = 0;
                if (local_b8 != (code *)0x0) {
                  plVar15 = (longlong *)uStack_b0[0x17];
                  if ((plVar15 == (longlong *)0x0) ||
                     (cVar8 = (**(code **)(*plVar15 + 0x108))(), cVar8 == '\0')) {
                    uVar20 = 0;
                    uVar12 = local_120;
                  }
                  else {
                    uVar13 = (**(code **)(*plVar15 + 0x110))(plVar15);
                    uVar20 = FUN_144aff482(uVar13,&local_b8);
                    uVar12 = local_120;
                  }
                }
              }
            }
            if (uVar20 == uVar12) goto LAB_1415b51ea;
            puVar24 = puVar24 + 3;
            lVar9 = lVar9 + -0x18;
          } while (lVar9 != 0);
          puVar24 = (undefined8 *)0x0;
LAB_1415b51ea:
          uVar21 = (uint)CONCAT71((int7)((ulonglong)puVar24 >> 8),puVar24 == (undefined8 *)0x0) ^ 3;
        }
        lVar9 = FUN_148d7eeca(local_120);
        uVar12 = 0;
        if (lVar9 == 0) goto LAB_1415b4761;
        puVar23 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar9 + 8) != (undefined4 *)0x0) {
          puVar23 = *(undefined4 **)(lVar9 + 8);
        }
        FUN_1447a97f4(&local_b8,puVar23);
        local_114 = 0;
      }
      local_120 = CONCAT44(local_120._4_4_,uVar21);
      if (DAT_14c947fe0 == 0) {
        lVar14 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar14);
        DAT_14c947fe0 = lVar14;
      }
      FUN_140045924(DAT_14c947fe0,&local_e0,&local_b8,1);
      local_f0 = local_e0;
      FUN_1401533ba(&local_d8,&local_f0,1);
      if (pvStack_a0 != (void *)0x0) {
        FUN_1400020a8();
      }
      pcVar28 = local_108;
      SRWLock = local_110;
      if ((char)local_114 == '\0') {
        uVar5 = *(ushort *)(lVar9 + 0x53a);
        lVar9 = *(longlong *)(DAT_14cb86da8 + 0x370);
        uVar13 = (**(code **)(*param_1 + 0x180))(param_1);
        FUN_143deff24((ulonglong)((uint)uVar5 * 0x18) + lVar9,&local_f0,&local_d8,uVar13);
        plVar15 = local_f0;
        if (*(code **)(*local_f0 + 0x50) != FUN_144828418) {
          plVar15 = (longlong *)(**(code **)(*local_f0 + 0x50))();
        }
        FUN_1447a1fc0(plVar15);
        pcVar7 = *(code **)(*local_f0 + 0x28);
        if (pcVar7 == FUN_14482841c) {
          plVar15 = local_f0 + 3;
          if (local_f0[5] != 0) {
            plVar15 = (longlong *)(local_f0[5] + 8);
          }
        }
        else if (pcVar7 == (code *)&LAB_14010c34c) {
          plVar15 = local_f0 + 2;
        }
        else {
          plVar15 = (longlong *)(*pcVar7)(local_f0);
        }
        local_b8 = (code *)0x0;
        uVar21 = *(uint *)(plVar15 + 1);
        pvVar22 = (void *)*plVar15;
        uStack_b0 = (longlong *)CONCAT44(uStack_b0._4_4_,uVar21);
        if ((longlong)(int)uVar21 == 0) {
          uStack_b0 = (longlong *)(ulonglong)uVar21;
        }
        else {
          FUN_1446dd670(&local_b8,uVar21,0);
          pcVar28 = local_108;
          memcpy(local_b8,pvVar22,(longlong)(int)uVar21 * 2);
        }
      }
      else {
        FUN_140056680(&local_b8,&DAT_149dfb77a);
      }
      iVar16 = (int)uStack_b0 + -1;
      if ((int)uStack_b0 == 0) {
        iVar16 = 0;
      }
      FUN_1402980a2(&local_100,local_b8,iVar16);
      if (local_b8 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (((char)local_114 == '\0') && (local_f0 != (longlong *)0x0)) {
        (**(code **)(*local_f0 + 0x10))();
      }
    }
    else {
      local_c8 = *(undefined8 *)pcVar28;
      local_c0 = *(undefined4 *)(param_2 + 100);
      FUN_1448075d0(&local_b8);
      lVar9 = FUN_14060eaf6(&local_b8);
      if (pvStack_a0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (lVar9 == 0) {
        FUN_140056680(&local_b8,&DAT_149dfb77a);
      }
      else {
        uVar5 = *(ushort *)(lVar9 + 0x53a);
        lVar14 = *(longlong *)(DAT_14cb86da8 + 0x370);
        uVar13 = (**(code **)(*param_1 + 0x180))(param_1);
        FUN_143deff24((ulonglong)((uint)uVar5 * 0x18) + lVar14,&local_f0,pcVar28,uVar13);
        plVar15 = local_f0;
        if (*(code **)(*local_f0 + 0x50) != FUN_144828418) {
          plVar15 = (longlong *)(**(code **)(*local_f0 + 0x50))();
        }
        FUN_1447a1fc0(plVar15);
        pcVar7 = *(code **)(*local_f0 + 0x28);
        if (pcVar7 == FUN_14482841c) {
          plVar15 = local_f0 + 3;
          if (local_f0[5] != 0) {
            plVar15 = (longlong *)(local_f0[5] + 8);
          }
        }
        else if (pcVar7 == (code *)&LAB_14010c34c) {
          plVar15 = local_f0 + 2;
        }
        else {
          plVar15 = (longlong *)(*pcVar7)(local_f0);
        }
        local_b8 = (code *)0x0;
        uVar21 = *(uint *)(plVar15 + 1);
        pvVar22 = (void *)*plVar15;
        uStack_b0 = (longlong *)CONCAT44(uStack_b0._4_4_,uVar21);
        if ((longlong)(int)uVar21 == 0) {
          uStack_b0 = (longlong *)(ulonglong)uVar21;
        }
        else {
          FUN_1446dd670(&local_b8,uVar21,0);
          memcpy(local_b8,pvVar22,(longlong)(int)uVar21 * 2);
        }
      }
      iVar16 = (int)uStack_b0 + -1;
      if ((int)uStack_b0 == 0) {
        iVar16 = 0;
      }
      uVar13 = FUN_1402980a2(&local_100,local_b8,iVar16);
      if (local_b8 != (code *)0x0) {
        uVar13 = FUN_1400020a8();
      }
      if (lVar9 == 0) {
        iVar16 = (int)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
      }
      else {
        if (local_f0 != (longlong *)0x0) {
          (**(code **)(*local_f0 + 0x10))();
        }
        cVar8 = FUN_1407a73f8(lVar9 + 0x4f0,&DAT_14cbcdde0);
        iVar16 = (uint)(cVar8 != '\0') * 3 + 1;
      }
      local_120 = CONCAT44(local_120._4_4_,iVar16);
      SRWLock = local_110;
    }
    if (iStack_f8 < 2) {
      FUN_1408226d0(pcVar28,&local_b8,1);
      if (CONCAT44(uStack_fc,CONCAT22(uStack_fe,local_100)) != 0) {
        FUN_1400020a8();
      }
      local_100 = SUB82(local_b8,0);
      uStack_fe = (undefined2)((ulonglong)local_b8 >> 0x10);
      uStack_fc = local_b8._4_4_;
      iStack_f8 = (int)uStack_b0;
      uStack_f4 = uStack_b0._4_4_;
    }
  }
  lVar9 = FUN_1400d7050(param_1 + 6);
  if (lVar9 == 0) {
LAB_1415b4bfa:
    local_a8 = 0;
    pvStack_a0 = (void *)0x0;
    local_b8 = (code *)0x0;
    uStack_b0 = (longlong *)0x0;
    uStack_98 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_b8 = FUN_141030f22;
      local_130 = FUN_14081d0ea;
      local_138 = &LAB_1459f2e4c;
      local_148 = &LAB_148c39de3;
      local_150 = &LAB_1457a9eb2;
      local_158 = &DAT_149e063b2;
      local_160 = 0;
      local_168 = 0x10000004;
      local_170 = 0x10;
      local_178 = (undefined2 *)CONCAT44(local_178._4_4_,0x3de0);
      local_140 = (char *)&local_b8;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1415b4bfa;
    local_c8 = *(undefined8 *)pcVar28;
    local_c0 = *(undefined4 *)(pcVar28 + 8);
    FUN_1448075d0(&local_b8);
    if (DAT_14cbcdc38 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = FUN_144837462(DAT_14cbcdc38,&local_b8);
    }
    if (pvStack_a0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((lVar9 == 0) || (lVar14 = FUN_14090ae24(lVar9 + 0x80), lVar14 == 0)) {
      switch((undefined1)local_120) {
      case 1:
      case 4:
        local_d8 = *(undefined8 *)pcVar28;
        local_d0 = *(undefined4 *)(pcVar28 + 8);
        FUN_1448075d0(&local_b8);
        lVar9 = FUN_140fa5e12(&local_b8);
        if (pvStack_a0 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (lVar9 == 0) goto switchD_1415b4f2c_default;
        FUN_1418eba7c(&local_b8,lVar9);
        goto LAB_1415b4c19;
      case 2:
        lVar9 = FUN_140d1d7e4();
        local_b8 = *(code **)(lVar9 + 0xa0);
        uStack_b0 = *(longlong **)(lVar9 + 0xa8);
        local_a8 = *(ulonglong *)(lVar9 + 0xb0);
        uVar12 = (ulonglong)*(int *)(lVar9 + 0xc0);
        pvVar22 = *(void **)(lVar9 + 0xb8);
        break;
      case 3:
        lVar9 = FUN_140d1d7e4();
        local_b8 = *(code **)(lVar9 + 200);
        uStack_b0 = *(longlong **)(lVar9 + 0xd0);
        local_a8 = *(ulonglong *)(lVar9 + 0xd8);
        uVar12 = (ulonglong)*(int *)(lVar9 + 0xe8);
        pvVar22 = *(void **)(lVar9 + 0xe0);
        break;
      default:
switchD_1415b4f2c_default:
        lVar9 = FUN_140cb9f34();
        local_b8 = *(code **)(lVar9 + 0x38);
        uStack_b0 = *(longlong **)(lVar9 + 0x40);
        local_a8 = *(ulonglong *)(lVar9 + 0x48);
        uVar12 = (ulonglong)*(int *)(lVar9 + 0x58);
        pvVar22 = *(void **)(lVar9 + 0x50);
      }
      pvStack_a0 = (void *)0x0;
      uStack_98 = CONCAT44(uStack_98._4_4_,(int)uVar12);
      if (uVar12 == 0) goto LAB_1415b519e;
      FUN_1446dd670(&pvStack_a0,uVar12 & 0xffffffff,0);
    }
    else {
      local_b8 = *(code **)(lVar9 + 0x80);
      uStack_b0 = *(longlong **)(lVar9 + 0x88);
      local_a8 = *(ulonglong *)(lVar9 + 0x90);
      pvStack_a0 = (void *)0x0;
      iVar16 = *(int *)(lVar9 + 0xa0);
      uVar12 = (ulonglong)iVar16;
      pvVar22 = *(void **)(lVar9 + 0x98);
      uStack_98 = CONCAT44(uStack_98._4_4_,iVar16);
      if (uVar12 == 0) {
LAB_1415b519e:
        pvStack_a0 = (void *)0x0;
        uStack_98 = uStack_98 & 0xffffffff;
        goto LAB_1415b4c19;
      }
      FUN_1446dd670(&pvStack_a0,iVar16,0);
    }
    memcpy(pvStack_a0,pvVar22,uVar12 * 2);
  }
LAB_1415b4c19:
  *(code **)(pcVar6 + 0xd0) = local_b8;
  *(int *)(pcVar6 + 0xd8) = (int)uStack_b0;
  *(uint *)(pcVar6 + 0xdc) = uStack_b0._4_4_;
  *(undefined4 *)(pcVar6 + 0xe0) = (undefined4)local_a8;
  *(undefined4 *)(pcVar6 + 0xe4) = local_a8._4_4_;
  if (pcVar6 + 0xd0 == (char *)&local_b8) {
    if (pvStack_a0 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(pcVar6 + 0xe8) != 0) {
      FUN_1400020a8();
    }
    *(void **)(pcVar6 + 0xe8) = pvStack_a0;
    pvStack_a0 = (void *)0x0;
    *(undefined4 *)(pcVar6 + 0xf0) = (undefined4)uStack_98;
    *(undefined4 *)(pcVar6 + 0xf4) = uStack_98._4_4_;
  }
  *(int *)(pcVar6 + 0x30) = *(int *)(pcVar6 + 0x30) + 1;
  *(int *)(pcVar6 + 0x18) = *(int *)(pcVar6 + 0x18) + 1;
  FUN_14020fad6(pcVar6 + 8,&DAT_149dfb77a);
  iVar16 = iStack_f8;
  if ((byte)param_2[0x5a] < 5) {
    pcVar28 = pcVar6 + 0x20;
    cVar8 = (char)local_120;
    switch(param_2[0x5a]) {
    case '\0':
      if (param_2[0x59] == '\x01') {
        FUN_140ac6a88(&DAT_14cbd8940,pcVar28);
        goto LAB_1415b4eef;
      }
      goto LAB_1415b4e94;
    case '\x01':
      if (pcVar28 != (char *)&local_100) {
        lVar9 = (longlong)iStack_f8;
        pvVar22 = (void *)CONCAT44(uStack_fc,CONCAT22(uStack_fe,local_100));
        *(int *)(pcVar6 + 0x28) = iStack_f8;
        if (iStack_f8 == 0 && *(int *)(pcVar6 + 0x2c) == 0) {
          pcVar6[0x2c] = '\0';
          pcVar6[0x2d] = '\0';
          pcVar6[0x2e] = '\0';
          pcVar6[0x2f] = '\0';
        }
        else {
          FUN_1446dd670(pcVar28,iStack_f8);
          if (iVar16 != 0) {
            memcpy(*(void **)pcVar28,pvVar22,lVar9 * 2);
          }
        }
      }
      goto LAB_1415b4eef;
    case '\x02':
      if ((byte)(cVar8 - 2U) < 3) {
        ppuVar19 = &PTR_DAT_14b9ba8c8;
LAB_1415b4d34:
        puVar18 = ppuVar19[(byte)(cVar8 - 2)];
      }
      else {
        puVar18 = &DAT_14cbd8968;
      }
      break;
    case '\x03':
      if ((byte)(cVar8 - 2U) < 3) {
        ppuVar19 = &PTR_DAT_14b9ba8e0;
        goto LAB_1415b4d34;
      }
      puVar18 = &DAT_14cbd8a08;
      break;
    case '\x04':
      puVar18 = &DAT_14cbd8aa8;
    }
    FUN_140ac6a88(puVar18,pcVar6 + 8);
LAB_1415b4e94:
    FUN_1442a3f7e(&local_b8,param_2);
    if ((char *)&local_b8 == pcVar28) {
      if (local_b8 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(pcVar6 + 0x20) != 0) {
        FUN_1400020a8();
      }
      *(code **)(pcVar6 + 0x20) = local_b8;
      *(int *)(pcVar6 + 0x28) = (int)uStack_b0;
      *(uint *)(pcVar6 + 0x2c) = uStack_b0._4_4_;
    }
  }
LAB_1415b4eef:
  if (CONCAT44(uStack_fc,CONCAT22(uStack_fe,local_100)) != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive(SRWLock);
LAB_1415b4169:
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415b5422 FUN_1415b5422 body=56 status=ok
// SIG undefined FUN_1415b5422(void)

void FUN_1415b5422(longlong param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  if (param_2 < 0) {
    bVar1 = false;
  }
  else {
    bVar1 = param_2 < *(int *)(param_1 + 0x44);
  }
  if (bVar1 == (bool)*(char *)(param_1 + 0x400)) {
    if (*(int *)(param_1 + 0x404) != 0) {
      return;
    }
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x404) + 1;
  }
  *(bool *)(param_1 + 0x400) = bVar1;
  *(int *)(param_1 + 0x404) = iVar2;
  return;
}



// FUNCTION 1415b545a FUN_1415b545a body=61 status=ok
// SIG undefined FUN_1415b545a(void)

longlong FUN_1415b545a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (*param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)(int)param_1[3];
    if (lVar2 == 0) {
      lVar2 = CONCAT71((int7)(int3)((uint)(int)param_1[3] >> 8),1);
    }
    else {
      lVar1 = lVar2 * 8;
      lVar3 = 0;
      do {
        bVar4 = *(longlong *)(param_1[2] + lVar3) == 0;
        lVar2 = CONCAT71((int7)((ulonglong)lVar2 >> 8),!bVar4);
        if (bVar4) {
          return lVar2;
        }
        bVar4 = lVar1 + -8 != lVar3;
        lVar3 = lVar3 + 8;
      } while (bVar4);
    }
  }
  return lVar2;
}



// FUNCTION 1415b5498 FUN_1415b5498 body=61 status=ok
// SIG undefined FUN_1415b5498(void)

undefined8 FUN_1415b5498(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
LAB_1415b54d1:
    uVar3 = 0;
  }
  else {
    if ((longlong)*(int *)(param_1 + 0x20) != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar4) == 0) goto LAB_1415b54d1;
        lVar4 = lVar4 + 8;
      } while ((longlong)*(int *)(param_1 + 0x20) * 8 != lVar4);
    }
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x368)) &
            0xffffffffffffff10;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 4);
  }
  return uVar3;
}



// FUNCTION 1415b54d6 FUN_1415b54d6 body=125 status=ok
// SIG undefined FUN_1415b54d6(void)

undefined4 FUN_1415b54d6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c65c56(param_1 + 8,&local_28);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(local_28 + 0x40);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b5554 FUN_1415b5554 body=201 status=ok
// SIG undefined FUN_1415b5554(void)

void FUN_1415b5554(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)FUN_140495e96(param_1 + 0x30);
  if (plVar2 == (longlong *)0x0) {
    bVar6 = true;
  }
  else {
    iVar1 = (**(code **)(*plVar2 + 0x328))(plVar2);
    bVar6 = iVar1 != 0;
  }
  lVar4 = 0;
  uVar5 = 0;
  do {
    if (!(bool)(bVar6 & uVar5 != 1)) {
      puVar3 = (undefined8 *)(*param_2 + lVar4);
      if ((longlong)(int)param_2[1] <= (longlong)uVar5) {
        puVar3 = &DAT_14c948618;
      }
      local_48 = *(undefined4 *)(puVar3 + 1);
      local_50 = *puVar3;
      FUN_14147f19c(param_1,uVar5 & 0xffffffff,&local_50,0);
    }
    uVar5 = uVar5 + 1;
    lVar4 = lVar4 + 0xc;
  } while (uVar5 != 3);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b561e FUN_1415b561e body=276 status=ok
// SIG undefined FUN_1415b561e(void)

void FUN_1415b561e(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)((longlong)param_1 + 0x2e1) = 1;
  local_28 = param_1[0x52];
  FUN_140e0c48e(param_1,param_1[1] + 0x88,param_1 + 3,0);
  FUN_140e0c004(param_1,param_1 + 0x29);
  lVar2 = param_1[1];
  if (*(char *)(lVar2 + 0x3da) == '\x01') {
    FUN_1457b3e8a(param_1);
    lVar2 = param_1[1];
  }
  if (*(char *)(lVar2 + 0x448) == '\0') goto LAB_1415b5700;
  if (*(int *)((longlong)param_1 + 0x294) == 0) {
LAB_1415b572f:
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x52);
    uVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar3 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar3 == (undefined8 *)0x0) ||
         ((*(int *)(puVar3 + 2) != *(int *)((longlong)param_1 + 0x294) ||
          ((*(uint *)(puVar3 + 1) & 0x10200000) != 0)))) goto LAB_1415b572f;
      uVar4 = *puVar3;
    }
  }
  lVar2 = (**(code **)(*param_1 + 8))(param_1);
  local_20 = *(undefined8 *)(lVar2 + 0x18);
  FUN_145ae3ed2(uVar4,*(undefined1 *)(param_1[1] + 0x448),1);
LAB_1415b5700:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b5734 FUN_1415b5734 body=277 status=ok
// SIG undefined FUN_1415b5734(void)

void FUN_1415b5734(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Font";
  local_48 = 4;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Font";
  local_48 = 4;
  FUN_140208c1e(&DAT_14caeb4b0,local_58,local_54,&local_50);
  local_50 = L"Parameters";
  local_48 = 10;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Parameters";
  local_48 = 10;
  FUN_140208c1e(&DAT_14caeb4c0,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b584a FUN_1415b584a body=208 status=ok
// SIG undefined FUN_1415b584a(void)

undefined4 * FUN_1415b584a(undefined8 param_1,undefined4 *param_2,int param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 < 0) {
    *param_2 = 0xffff;
  }
  else {
    FUN_140ceec26(param_1,&local_2c);
    if ((short)local_2c < 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(int *)(puVar3 + 1) = param_3;
      lVar4 = FUN_143d9c092(param_1);
      lVar2 = *(longlong *)(lVar4 + 0x10);
      *(undefined8 **)(lVar4 + 0x10) = puVar3;
      if (lVar2 != 0) {
        FUN_1400020a8();
      }
      FUN_1414f506e(param_1,lVar4);
      FUN_141323fc0(param_1,lVar4,4);
      uVar1 = *(undefined2 *)(lVar4 + 8);
      *(undefined2 *)param_2 = *(undefined2 *)(lVar4 + 2);
      *(undefined2 *)((longlong)param_2 + 2) = uVar1;
    }
    else {
      *param_2 = local_2c;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b591c FUN_1415b591c body=425 status=ok
// SIG undefined FUN_1415b591c(void)

undefined * FUN_1415b591c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1a1f8) {
    FUN_144b3d300(&DAT_14ca1a1f8);
    if (DAT_14ca1a1f8 == -1) {
      FUN_145ff2408(local_20);
      local_38 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"ComputeShadingOutputs";
      local_78 = L"FComputeShadingOutputs";
      local_30 = 0xc;
      local_40 = 0;
      local_50 = 0x50;
      local_58 = 0x147;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1a178,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e4d47a);
      _Init_thread_footer(&DAT_14ca1a1f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca1a178;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b5ac6 FUN_1415b5ac6 body=237 status=ok
// SIG undefined FUN_1415b5ac6(void)

void FUN_1415b5ac6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x40) != 2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    FUN_145e04a2a(&local_20);
    lVar2 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,local_20,0);
    plVar3 = (longlong *)(lVar2 + -8);
    *(longlong **)(param_1 + 0x30) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x228))(plVar3);
      if (cVar1 != '\0') {
        FUN_145d154e0(param_1);
        *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x44) ^ 1;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b5bb4 FUN_1415b5bb4 body=154 status=ok
// SIG undefined FUN_1415b5bb4(void)

undefined4
FUN_1415b5bb4(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar2 = *param_5;
  local_48 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_58 = &local_48;
    local_48 = uVar2;
    local_40 = uVar1;
    lVar4 = FUN_146216d6a(param_1,lVar4,param_3,param_4);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b5c50 FUN_1415b5c50 body=130 status=ok
// SIG undefined FUN_1415b5c50(void)

undefined4
FUN_1415b5c50(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_38 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_38 = uVar2;
    local_30 = uVar1;
    lVar4 = FUN_1461bbdae(param_1,lVar4,param_3);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b5cd4 FUN_1415b5cd4 body=164 status=ok
// SIG undefined FUN_1415b5cd4(void)

undefined4
FUN_1415b5cd4(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = (undefined4)param_5[1];
  lVar2 = *param_5;
  local_48 = *param_2;
  lVar1 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar1 != 0) {
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    local_58 = &local_48;
    local_48 = lVar2;
    local_40 = uVar4;
    lVar2 = FUN_145d8052e(param_1,lVar1,param_3,param_4);
    uVar3 = *(undefined4 *)(lVar2 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b5d7a FUN_1415b5d7a body=154 status=ok
// SIG undefined FUN_1415b5d7a(void)

undefined4
FUN_1415b5d7a(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar2 = *param_5;
  local_48 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_58 = &local_48;
    local_48 = uVar2;
    local_40 = uVar1;
    lVar4 = FUN_145d8052e(param_1,lVar4,param_3,param_4);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b5e16 FUN_1415b5e16 body=58 status=ok
// SIG undefined FUN_1415b5e16(void)

void FUN_1415b5e16(longlong param_1)

{
  FUN_140a54e77(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b0));
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 1415b5e50 FUN_1415b5e50 body=188 status=ok
// SIG undefined FUN_1415b5e50(void)

void FUN_1415b5e50(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (*(char *)((longlong)param_1 + 0x54) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x4c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x44) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  }
  plVar3 = param_1 + 6;
  if ((int)param_1[7] != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1415b5e7d;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 7) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1415b5e7d:
  plVar3 = (longlong *)param_1[2];
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
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001415b5ee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar4)(puVar4,1);
  return;
}



// FUNCTION 1415b5f0c FUN_1415b5f0c body=305 status=ok
// SIG undefined FUN_1415b5f0c(void)

undefined8 FUN_1415b5f0c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  undefined **local_50;
  longlong local_48;
  longlong *local_40;
  byte local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_1 != 0) && (lVar4 = *(longlong *)(param_1 + 0x1f0), lVar4 != 0)) {
    plVar2 = (longlong *)FUN_140773fe2();
    if (plVar2 != (longlong *)0x0) {
      FUN_1463caa92(lVar4,&local_50);
      if ((&DAT_149fc1b6e)[local_38] == '\x01') {
        lVar4 = local_48;
        if (local_40 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
          plVar5 = local_40;
        }
      }
      else {
        plVar5 = (longlong *)0x0;
        lVar4 = 0;
      }
      local_50 = &PTR_FUN_14a5af930;
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      local_50 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_38])();
      if (lVar4 == 0) {
        uVar3 = 0;
      }
      else {
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        local_60 = lVar4;
        local_58 = plVar5;
        uVar3 = (**(code **)(*plVar2 + 0x2c8))(plVar2,&local_60);
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      goto LAB_1415b5f3f;
    }
  }
  uVar3 = 0;
LAB_1415b5f3f:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b603e FUN_1415b603e body=327 status=ok
// SIG undefined FUN_1415b603e(void)

undefined8 * FUN_1415b603e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  size_t sVar2;
  ulonglong uVar3;
  char *_Str;
  char **ppcVar4;
  undefined1 auStack_68 [40];
  char *local_40;
  undefined4 local_38;
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14ba3c370;
  if ((longlong)DAT_14cbf4940 < 0) {
    _Str = (char *)(DAT_14cbf4940 & 0x7fffffffffffffff);
    if (DAT_14cbf494c == '\x01') {
      ppcVar4 = &local_40;
      FUN_1446f470e(ppcVar4,_Str,1);
    }
    else {
      local_40 = _Str;
      if (_Str == (char *)0x0) {
        local_38 = 0;
      }
      else {
        sVar2 = strlen(_Str);
        local_38 = (undefined4)sVar2;
      }
      ppcVar4 = &local_30;
      FUN_14001c09c(ppcVar4,&local_40,1);
    }
    uVar1 = (ulonglong)*(uint *)ppcVar4;
    uVar3 = (ulonglong)DAT_14cbf4948 << 0x20;
    DAT_14cbf4940 = uVar1;
  }
  else {
    uVar1 = (ulonglong)DAT_14cbf4948 << 0x20;
    uVar3 = DAT_14cbf4940 & 0xffffffff;
  }
  local_30 = (char *)(uVar3 | uVar1);
  FUN_146282982(param_1 + 2,1,param_3,&local_30);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[2] = &PTR_FUN_14ba3bed0;
  param_1[9] = param_2;
  param_1[10] = &PTR_FUN_14ba3c280;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x100000000;
  param_1[0xe] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b618c FUN_1415b618c body=224 status=ok
// SIG undefined FUN_1415b618c(void)

void FUN_1415b618c(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if (DAT_14cb96828 == (undefined8 *)0x0) {
    DAT_14cb96828 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *DAT_14cb96828 = 0;
    DAT_14cb96828[1] = 0;
    DAT_14cb96828[2] = 0;
    DAT_14cb96828[3] = 0;
    DAT_14cb96828[4] = 0;
    DAT_14cb96828[5] = 0;
  }
  puVar5 = DAT_14cb96828;
  FUN_1412f6f7a(DAT_14cb96828,param_1);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (0 < *(int *)(puVar5 + 3)) {
    lVar6 = 0;
    do {
      lVar4 = puVar5[2];
      lVar9 = lVar6 * 0x80;
      uVar2 = *(uint *)(lVar4 + 8 + lVar9);
      uVar7 = uVar2 & 0xfffffff9;
      *(uint *)(lVar4 + 8 + lVar9) = uVar7;
      if (*(longlong *)(lVar4 + 0x28 + lVar9) != 0) {
        iVar3 = *(int *)(param_1 + 0xa0);
        if ((uVar2 & 0x40) == 0) {
          if (iVar3 != 0) {
LAB_1415b6202:
            plVar8 = *(longlong **)(param_1 + 0x98);
            plVar1 = plVar8 + iVar3;
            do {
              if (*plVar8 == *(longlong *)(lVar4 + lVar9 + 0xc)) goto LAB_1415b6221;
              plVar8 = plVar8 + 1;
            } while (plVar8 != plVar1);
          }
        }
        else {
          if (iVar3 != 0) goto LAB_1415b6202;
LAB_1415b6221:
          *(uint *)(lVar4 + lVar9 + 8) = uVar7 | 2;
          *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(puVar5 + 3));
  }
  return;
}



// FUNCTION 1415b626c FUN_1415b626c body=663 status=ok
// SIG undefined FUN_1415b626c(void)

void FUN_1415b626c(longlong param_1,uint param_2)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  int iVar7;
  ulonglong uVar8;
  double *pdVar9;
  double *pdVar10;
  longlong *plVar11;
  double *pdVar12;
  int iVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = (ulonglong)param_2 * 0x10 + param_1 + -0x10;
    local_348 = param_1;
    fVar17 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar17 + fVar17);
    plVar11 = &local_348;
    do {
      pdVar5 = (double *)*plVar11;
      pdVar12 = (double *)plVar11[1];
      iVar13 = (int)plVar11[2];
      iVar7 = (int)((ulonglong)((longlong)pdVar12 - (longlong)pdVar5) >> 4);
      pdVar6 = pdVar5;
      pdVar14 = pdVar12;
      pdVar15 = pdVar5;
      if (iVar13 != 0) {
LAB_1415b6309:
        if (8 < (int)(iVar7 + 1U)) {
          uVar8 = (ulonglong)(iVar7 + 1U >> 1);
          dVar20 = pdVar5[uVar8 * 2];
          dVar1 = (pdVar5 + uVar8 * 2)[1];
          dVar2 = pdVar5[1];
          pdVar5[uVar8 * 2] = *pdVar5;
          (pdVar5 + uVar8 * 2)[1] = dVar2;
          *pdVar5 = dVar20;
          pdVar5[1] = dVar1;
          pdVar9 = pdVar12 + 2;
          pdVar6 = pdVar5;
          do {
            pdVar3 = pdVar6 + 2;
            pdVar4 = pdVar6 + 2;
            do {
              pdVar6 = pdVar4;
              pdVar10 = pdVar3;
              if (pdVar12 < pdVar6) break;
              pdVar3 = pdVar10 + 2;
              pdVar4 = pdVar6 + 2;
            } while (*pdVar6 < *pdVar5 || *pdVar6 == *pdVar5);
            pdVar3 = pdVar9 + -4;
            do {
              pdVar4 = pdVar9;
              pdVar16 = pdVar3;
              pdVar9 = pdVar4 + -2;
              if (pdVar9 <= pdVar5) break;
              pdVar3 = pdVar16 + -2;
            } while (*pdVar5 < *pdVar9 || *pdVar5 == *pdVar9);
            if (pdVar9 < pdVar6) goto code_r0x0001415b6397;
            dVar20 = *pdVar6;
            dVar1 = pdVar6[1];
            dVar2 = pdVar4[-1];
            *pdVar6 = *pdVar9;
            pdVar6[1] = dVar2;
            *pdVar9 = dVar20;
            pdVar4[-1] = dVar1;
          } while( true );
        }
        if (pdVar5 < pdVar12) {
          do {
            pdVar6 = pdVar5;
            if (pdVar5 + 2 <= pdVar12) {
              uVar18 = SUB84(*pdVar5,0);
              uVar19 = (undefined4)((ulonglong)*pdVar5 >> 0x20);
              pdVar14 = pdVar5 + 2;
              do {
                dVar20 = *pdVar14;
                if ((double)CONCAT44(uVar19,uVar18) <= dVar20 &&
                    dVar20 != (double)CONCAT44(uVar19,uVar18)) {
                  pdVar6 = pdVar14;
                }
                if (dVar20 <= (double)CONCAT44(uVar19,uVar18)) {
                  dVar20 = (double)CONCAT44(uVar19,uVar18);
                }
                pdVar14 = pdVar14 + 2;
                uVar18 = SUB84(dVar20,0);
                uVar19 = (undefined4)((ulonglong)dVar20 >> 0x20);
              } while (pdVar14 <= pdVar12);
            }
            local_48 = *pdVar6;
            uStack_40 = pdVar6[1];
            dVar1 = local_48;
            dVar2 = uStack_40;
            dVar20 = pdVar12[1];
            *pdVar6 = *pdVar12;
            pdVar6[1] = dVar20;
            local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
            uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
            *(undefined4 *)pdVar12 = (undefined4)local_48;
            *(undefined4 *)((longlong)pdVar12 + 4) = local_48._4_4_;
            *(undefined4 *)(pdVar12 + 1) = (undefined4)uStack_40;
            *(undefined4 *)((longlong)pdVar12 + 0xc) = uStack_40._4_4_;
            pdVar12 = pdVar12 + -2;
            local_48 = dVar1;
            uStack_40 = dVar2;
          } while (pdVar5 < pdVar12);
        }
        goto LAB_1415b6476;
      }
LAB_1415b64b1:
      FUN_148a65d9c(pdVar6);
LAB_1415b6476:
      plVar11 = plVar11 + -3;
    } while (&local_348 <= plVar11);
  }
  if ((local_38 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001415b6397:
  local_48 = *pdVar5;
  uStack_40 = pdVar5[1];
  dVar1 = local_48;
  dVar2 = uStack_40;
  dVar20 = pdVar4[-1];
  *pdVar5 = *pdVar9;
  pdVar5[1] = dVar20;
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  *(undefined4 *)pdVar9 = (undefined4)local_48;
  *(undefined4 *)((longlong)pdVar4 + -0xc) = local_48._4_4_;
  *(undefined4 *)(pdVar4 + -1) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)pdVar4 + -4) = uStack_40._4_4_;
  iVar13 = iVar13 + -1;
  local_48 = dVar1;
  uStack_40 = dVar2;
  if ((longlong)pdVar16 - (longlong)pdVar15 < (longlong)pdVar14 - (longlong)pdVar10) {
    if (pdVar6 < pdVar12) {
      *plVar11 = (longlong)pdVar6;
      plVar11[1] = (longlong)pdVar12;
      *(int *)(plVar11 + 2) = iVar13;
      plVar11 = plVar11 + 3;
    }
    pdVar6 = pdVar5;
    pdVar10 = pdVar5;
    pdVar12 = pdVar4 + -4;
    if (pdVar9 <= pdVar5 + 2) goto LAB_1415b6476;
  }
  else {
    if (pdVar5 + 2 < pdVar9) {
      *plVar11 = (longlong)pdVar5;
      plVar11[1] = (longlong)(pdVar4 + -4);
      *(int *)(plVar11 + 2) = iVar13;
      plVar11 = plVar11 + 3;
    }
    pdVar16 = pdVar12;
    if (pdVar12 <= pdVar6) goto LAB_1415b6476;
  }
  iVar7 = (int)((ulonglong)((longlong)pdVar16 - (longlong)pdVar10) >> 4);
  pdVar5 = pdVar6;
  pdVar14 = pdVar16;
  pdVar15 = pdVar10;
  if (iVar13 == 0) goto LAB_1415b64b1;
  goto LAB_1415b6309;
}



// FUNCTION 1415b6504 FUN_1415b6504 body=240 status=ok
// SIG undefined FUN_1415b6504(void)

void FUN_1415b6504(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x10);
  if (plVar7 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    (**(code **)(*plVar7 + 0x38))();
  }
  plVar7 = *(longlong **)(param_1 + 0x20);
  if (plVar7 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    (**(code **)(*plVar7 + 0x38))();
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1415b65f4 FUN_1415b65f4 body=436 status=ok
// SIG undefined FUN_1415b65f4(void)

void FUN_1415b65f4(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
  }
  plVar4 = local_58;
  iVar5 = (int)local_58[3];
  iVar14 = (int)local_60;
  uVar11 = (uint)local_50;
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < iVar5) {
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar7 * 0x20) != 0) {
        FUN_1400020a8();
        iVar5 = (int)plVar4[3];
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar12 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar11;
      if (uVar6 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar12 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar12 == lVar9) goto LAB_1415b672f;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_1415b672f:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b67aa FUN_1415b67aa body=436 status=ok
// SIG undefined FUN_1415b67aa(void)

void FUN_1415b67aa(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
  }
  plVar4 = local_58;
  iVar5 = (int)local_58[3];
  iVar14 = (int)local_60;
  uVar11 = (uint)local_50;
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < iVar5) {
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar7 * 0x20) != 0) {
        FUN_1400020a8();
        iVar5 = (int)plVar4[3];
      }
      uVar11 = uVar11 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar12 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar11;
      if (uVar6 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar12 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar12 == lVar9) goto LAB_1415b68e5;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_1415b68e5:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b6960 FUN_1415b6960 body=566 status=ok
// SIG undefined FUN_1415b6960(void)

void FUN_1415b6960(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  wchar_t *pwVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *local_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146222bdc();
  cVar4 = FUN_1414e62ca(*(undefined8 *)(param_1 + 8));
  if ((cVar4 == '\0') || (*(int *)(*param_2 + 0x14) == 0)) goto LAB_1415b6b52;
  cVar4 = FUN_145c66520(param_1,param_2);
  if (cVar4 == '\0') goto LAB_1415b6b52;
  local_48 = (wchar_t *)0x0;
  uStack_40 = 0;
  FUN_14101cdd4(*param_2 + 0x20,&DAT_14cb977e0,&local_48);
  puVar6 = (undefined8 *)FUN_14101d2ea();
  iVar5 = *(int *)(puVar6 + 1);
  if (iVar5 == (int)uStack_40) {
    if (1 < iVar5) {
      iVar5 = wcscmp((wchar_t *)*puVar6,local_48);
      if (iVar5 != 0) goto LAB_1415b6b36;
    }
LAB_1415b6a05:
    FUN_145e1aa6e(*(undefined8 *)(param_1 + 8),&local_68);
    plVar3 = plStack_60;
    local_58 = local_68;
    local_50 = plStack_60;
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    FUN_145c7de4a(param_1);
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
    plVar3 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    pwVar8 = L"";
    if ((int)uStack_40 != 0) {
      pwVar8 = local_48;
    }
    puVar7 = &DAT_149dfb77a;
    if (DAT_14cb97948 != 0) {
      puVar7 = DAT_14cb97940;
    }
    FUN_140002266(&local_58,L"%s.%s",puVar7,pwVar8);
    FUN_140056680(&local_68,&DAT_149dfb77a);
    FUN_141511334(*(undefined8 *)(param_1 + 8),&local_58,&local_68);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (*(int *)(param_1 + 0x154) == 0) {
      *(undefined4 *)(param_1 + 0x154) = 1;
      FUN_143f48db6(param_1);
    }
    else if (*(int *)(param_1 + 0x158) != 3) {
      *(undefined4 *)(param_1 + 0x158) = 1;
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if ((int)uStack_40 + iVar5 == 1) goto LAB_1415b6a05;
LAB_1415b6b36:
    FUN_148aaf074(param_1,&local_48);
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1415b6b52:
  cVar4 = FUN_145c6571c(param_1);
  if (cVar4 != '\0') {
    cVar4 = FUN_145c65e6c(param_2);
    if (cVar4 != '\0') {
      FUN_145c65b22(param_1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b6b98 FUN_1415b6b98 body=434 status=ok
// SIG undefined FUN_1415b6b98(void)

undefined * FUN_1415b6b98(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca02580) {
    FUN_144b3d300(&DAT_14ca02580);
    if (DAT_14ca02580 == -1) {
      FUN_145ffebbc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"SceneTextures";
      local_70 = L"LumenTranslucencyRadianceCacheMarkPass";
      local_78 = L"FLumenTranslucencyRadianceCacheMarkPassUniformParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x44;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca02500,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142db999a);
      _Init_thread_footer(&DAT_14ca02580);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca02500;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b6d4b FUN_1415b6d4b body=403 status=ok
// SIG undefined FUN_1415b6d4b(void)

longlong *
FUN_1415b6d4b(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,undefined8 *param_5
             )

{
  undefined4 uVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined **local_a8;
  undefined8 local_a0;
  uint local_98;
  uint local_8c [3];
  undefined8 local_80;
  undefined ***local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  uint local_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_4 = param_4 | 0x8000;
  uVar1 = FUN_1414e3242(param_4,0);
  local_a0 = *param_5;
  local_78 = &local_a8;
  local_a8 = &PTR_FUN_14a249130;
  local_98 = *(int *)(param_5 + 1) * 2;
  local_80 = 0;
  local_70 = 1;
  local_6c = 0;
  uStack_64 = 0;
  local_5c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_58 = 0;
  local_54 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_8c[1] = 2;
  local_8c[0] = local_98;
  local_8c[2] = param_4;
  local_50 = param_3;
  if (local_98 == 0) {
    FUN_14570b4be(param_2,&local_80,param_4,2);
  }
  local_b8 = uVar1;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_80;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_1,param_2,local_8c);
    *(undefined4 *)(*param_1 + 0x18) = uVar1;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_80;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_1,param_2,local_8c);
    *(undefined4 *)(*param_1 + 0x18) = uVar1;
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b6edf FUN_1415b6edf body=410 status=ok
// SIG undefined FUN_1415b6edf(void)

longlong *
FUN_1415b6edf(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,undefined8 *param_5
             )

{
  undefined4 uVar1;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 *local_c0;
  undefined **local_b0;
  undefined8 local_a8;
  int local_a0;
  int local_94 [3];
  undefined8 local_88;
  undefined ***local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  param_4 = param_4 | 0x4000;
  uVar1 = FUN_1414e3242(param_4,0);
  local_a8 = *param_5;
  local_80 = &local_b0;
  local_b0 = &PTR_FUN_14a249130;
  local_a0 = *(int *)(param_5 + 1) * 0xc;
  local_88 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_94[1] = 0;
  local_94[0] = local_a0;
  local_94[2] = param_4;
  local_58 = param_3;
  if (local_a0 == 0) {
    FUN_14570b4be(param_2,&local_88,param_4,0);
  }
  local_c8 = uVar1;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_c0 = &local_88;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_1,param_2,local_94);
    *(undefined4 *)(*param_1 + 0x18) = uVar1;
    FUN_14002049c(param_2,0);
  }
  else {
    local_c0 = &local_88;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_1,param_2,local_94);
    *(undefined4 *)(*param_1 + 0x18) = uVar1;
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b707a FUN_1415b707a body=325 status=ok
// SIG undefined FUN_1415b707a(void)

void FUN_1415b707a(longlong *param_1)

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



// FUNCTION 1415b71c0 FUN_1415b71c0 body=325 status=ok
// SIG undefined FUN_1415b71c0(void)

void FUN_1415b71c0(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x10 + (longlong)iVar4 * 0x14) * 4) =
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



// FUNCTION 1415b7306 FUN_1415b7306 body=325 status=ok
// SIG undefined FUN_1415b7306(void)

void FUN_1415b7306(longlong *param_1)

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



// FUNCTION 1415b744c FUN_1415b744c body=329 status=ok
// SIG undefined FUN_1415b744c(void)

void FUN_1415b744c(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x5c + (longlong)iVar4 * 0x60) * 4) =
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



// FUNCTION 1415b7596 FUN_1415b7596 body=447 status=ok
// SIG undefined FUN_1415b7596(void)

void FUN_1415b7596(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((int)param_1[5] == 0) {
    uVar10 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar10 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar12 = (int)local_68;
  uVar13 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar8 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar9 = *param_1;
      lVar11 = (longlong)iVar6 * 0x60;
      *(undefined4 *)(lVar9 + 0x50 + lVar11) = 0;
      if (*(longlong *)(lVar9 + 0x48 + lVar11) != 0) {
        FUN_1400020a8();
      }
      FUN_141046fd4(lVar9 + lVar11 + 8);
      uVar13 = uVar13 & ~(uint)uVar10;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar9 = (longlong)iVar12;
      uVar5 = *(uint *)((longlong)plVar7 + lVar9 * 4) & uVar13;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar12) {
          iVar3 = iVar12;
        }
        if (iVar6 <= iVar12) break;
        lVar11 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4 + lVar9 * 4 + 4);
          if (uVar5 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar3 - lVar9 == lVar11) goto LAB_1415b76ed;
        }
        iVar12 = iVar12 + (int)lVar11 + 1;
        uVar13 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar10 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar6 = (iVar8 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1415b76ed:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b7756 FUN_1415b7756 body=190 status=ok
// SIG undefined FUN_1415b7756(void)

longlong * FUN_1415b7756(longlong param_1,longlong *param_2,int *param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    plVar4 = (longlong *)(*(longlong *)(param_1 + 0x58) + 0x28);
    do {
      if (((((int)plVar4[-5] == *param_3) && (*(int *)((longlong)plVar4 + -0x24) == param_3[1])) &&
          ((int)plVar4[-4] == param_3[2])) && (*(int *)((longlong)plVar4 + -0x1c) == param_3[3])) {
        lVar1 = plVar4[-3];
        if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) == param_4)) {
          *param_2 = lVar1;
          lVar1 = plVar4[-2];
LAB_1415b77eb:
          param_2[1] = lVar1;
          if (lVar1 == 0) {
            return param_2;
          }
          LOCK();
          *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
          UNLOCK();
          return param_2;
        }
        lVar3 = plVar4[-1];
        if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x10) == param_4)) {
          if (lVar1 != 0) {
            FUN_1460034e0();
            lVar3 = plVar4[-1];
          }
          *param_2 = lVar3;
          lVar1 = *plVar4;
          goto LAB_1415b77eb;
        }
      }
      plVar2 = plVar4 + 1;
      plVar4 = plVar4 + 6;
    } while (plVar2 != (longlong *)
                       ((longlong)*(int *)(param_1 + 0x60) * 0x30 + *(longlong *)(param_1 + 0x58)));
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1415b7814 FUN_1415b7814 body=277 status=ok
// SIG undefined FUN_1415b7814(void)

void FUN_1415b7814(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Math";
  local_48 = 4;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Math";
  local_48 = 4;
  FUN_140208c1e(&DAT_14caeac08,local_58,local_54,&local_50);
  local_50 = L"Utility";
  local_48 = 7;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Utility";
  local_48 = 7;
  FUN_140208c1e(&DAT_14caeac18,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b792a FUN_1415b792a body=361 status=ok
// SIG undefined FUN_1415b792a(void)

void FUN_1415b792a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *(undefined4 *)(param_1 + 0x358) = 0;
  if (*(longlong *)(param_1 + 0x350) != 0) {
    FUN_1400020a8();
  }
  FUN_14062c7dc(param_1 + 0x310);
  FUN_14124efea(param_1 + 0x1d8);
  plVar3 = *(longlong **)(param_1 + 0x1d0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_148a8319e(*(undefined8 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1c0));
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)(param_1 + 0x1a8);
  if (*(int *)(param_1 + 0x1b0) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1415b79ec;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x1b0) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1415b79ec:
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x188),*(undefined4 *)(param_1 + 400));
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x168) == '\x01') {
    FUN_148da6a00(param_1 + 0x38);
    *(undefined1 *)(param_1 + 0x168) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x20);
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
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415b7a6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1415b7a94 FUN_1415b7a94 body=197 status=ok
// SIG undefined FUN_1415b7a94(void)

int FUN_1415b7a94(longlong *param_1,uint param_2,longlong *param_3)

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
LAB_1415b7ada:
      lVar10 = (longlong)iVar1 * 0x68;
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
            if (0x7f < (uVar7 | uVar8)) goto LAB_1415b7b32;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1415b7b32;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1415b7b48;
    }
  }
  return -1;
LAB_1415b7b32:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1415b7b48:
  iVar1 = *(int *)(lVar4 + 0x60 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1415b7ada;
}



// FUNCTION 1415b7b5a FUN_1415b7b5a body=872 status=ok
// SIG undefined FUN_1415b7b5a(void)

void FUN_1415b7b5a(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  double dVar3;
  byte *pbVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_50 = FUN_14079c5e4;
      local_58 = &DAT_14c9520b8;
      local_68 = 0x101008001;
      local_60 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar4 = *(byte **)(param_2 + 0x20);
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_38 = *(double *)(pbVar4 + 1);
      *(byte **)(param_2 + 0x20) = pbVar4 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_38);
    }
  }
  local_40 = 0.0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_50 = FUN_14079c5e4;
      local_58 = &DAT_14c9520b8;
      local_68 = 0x101008001;
      local_60 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  pbVar4 = *(byte **)(param_2 + 0x20);
  if (pbVar4 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar4 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar4];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_40);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_40);
    }
    else {
      if (pcVar2 == (code *)&LAB_1428293cc) {
        local_40 = *(double *)(pbVar4 + 1);
        pbVar4 = pbVar4 + 9;
        goto LAB_1415b7cbb;
      }
      (*pcVar2)(uVar1,param_2,&local_40);
    }
  }
  pbVar4 = *(byte **)(param_2 + 0x20);
LAB_1415b7cbb:
  *(byte **)(param_2 + 0x20) = pbVar4 + (pbVar4 != (byte *)0x0);
  dVar3 = 0.0;
  if ((local_40 != 0.0) || (NAN(local_40))) {
    dVar3 = local_38 / local_40;
  }
  else {
    FUN_1415b7ec4(L"Divide by zero: Divide_DoubleDouble",3,DAT_14cae6e38);
  }
  *param_3 = dVar3;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b7ec4 FUN_1415b7ec4 body=300 status=ok
// SIG undefined FUN_1415b7ec4(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1415b7ec4(undefined8 param_1,undefined4 param_2)

{
  DWORD DVar1;
  DWORD dwTlsIndex;
  DWORD DVar2;
  LPVOID lpTlsValue;
  bool bVar3;
  undefined1 auStack_2088 [32];
  undefined2 *local_2068;
  undefined1 local_2051;
  undefined2 *local_2050;
  undefined2 *local_2048;
  ulonglong *local_2040;
  char local_2038;
  undefined2 local_2030 [4096];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2088;
  local_2050 = local_2030;
  local_2038 = '\0';
  local_2040 = &local_30;
  local_2048 = local_2050;
  if ((char)param_2 == '\x01') {
    local_2030[0] = 0;
    local_2068 = local_2050;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/ScriptCore.cpp",0x2a2,
                  L"Script Msg: %s\n%s",param_1);
  }
  else {
    dwTlsIndex = DAT_14c75b110;
    if (DAT_14c75b110 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar2 = 0xffffffff;
      LOCK();
      bVar3 = DAT_14c75b110 != 0xffffffff;
      DVar1 = dwTlsIndex;
      if (bVar3) {
        DVar2 = DAT_14c75b110;
        DVar1 = DAT_14c75b110;
      }
      DAT_14c75b110 = DVar1;
      UNLOCK();
      if (bVar3) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar2;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_14626bb4c(&local_2051);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    *local_2048 = 0;
    FUN_14586ad08(lpTlsValue,param_2,param_1,local_2050);
  }
  if (local_2038 == '\x01') {
    FUN_1400020a8(local_2050);
  }
  if ((local_30 ^ (ulonglong)auStack_2088) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415b7ff2 FUN_1415b7ff2 body=719 status=ok
// SIG undefined FUN_1415b7ff2(void)

undefined8 FUN_1415b7ff2(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x14) == 0) {
LAB_1415b8102:
    uVar4 = 0;
  }
  else {
    lVar2 = FUN_1400d7050();
    if (lVar2 == 0) {
LAB_1415b82bb:
      lVar2 = 0;
    }
    else {
      if (DAT_14cbadd90 == 0) {
        local_50 = &local_30;
        local_30 = FUN_141030f22;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_1459f2e4c;
        local_58 = &LAB_148c39de3;
        local_60 = &LAB_1457a9eb2;
        local_68 = &DAT_149e063b2;
        local_70 = 0;
        local_78 = 0x10000004;
        local_80 = 0x10;
        local_88 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30))
      goto LAB_1415b82bb;
    }
    plVar5 = (longlong *)(param_1 + -0x30);
    lVar3 = FUN_14026506e(param_1);
    if (lVar3 == 0) {
LAB_1415b8075:
      bVar1 = false;
    }
    else {
      lVar6 = FUN_144a2f878();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (bVar1 = true,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
         != lVar6 + 0x30)) goto LAB_1415b8075;
    }
    lVar3 = (**(code **)(*plVar5 + 0x180))(plVar5);
    if (lVar3 == 0) {
LAB_1415b8299:
      if (!bVar1 || lVar2 == 0) goto LAB_1415b8102;
    }
    else {
      uVar4 = (**(code **)(*plVar5 + 0x180))(plVar5);
      plVar5 = (longlong *)FUN_140636ec6(uVar4);
      if (plVar5 == (longlong *)0x0) goto LAB_1415b8299;
      if (DAT_14cbadd90 == 0) {
        local_50 = &local_30;
        local_30 = FUN_141030f22;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_1459f2e4c;
        local_58 = &LAB_148c39de3;
        local_60 = &LAB_1457a9eb2;
        local_68 = &DAT_149e063b2;
        local_70 = 0;
        local_78 = 0x10000004;
        local_80 = 0x10;
        local_88 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(plVar5[2] + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) !=
          DAT_14cbadd90 + 0x30)) goto LAB_1415b8299;
      lVar3 = (**(code **)(*plVar5 + 0x14d8))(plVar5);
      if (!(bool)(bVar1 & (lVar2 != 0 && lVar3 != 0))) goto LAB_1415b8102;
    }
    FUN_1460055fe(lVar2);
    uVar4 = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1415b82c2 FUN_1415b82c2 body=322 status=ok
// SIG undefined FUN_1415b82c2(void)

void FUN_1415b82c2(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  
  plVar5 = (longlong *)FUN_140e8d764();
  plVar5 = (longlong *)*plVar5;
  AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 0xb));
  if ((longlong)(int)param_2[1] != 0) {
    plVar9 = (longlong *)*param_2;
    plVar1 = plVar9 + (int)param_2[1];
    bVar4 = false;
LAB_1415b8303:
    do {
      if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
        lVar2 = *plVar9;
        uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar7 = (uint)lVar2 & 0xffff;
        plVar6 = (longlong *)plVar5[8];
        if ((longlong *)plVar5[8] == (longlong *)0x0) {
          plVar6 = plVar5 + 7;
        }
        iVar8 = *(int *)((longlong)plVar6 +
                        (ulonglong)
                        ((int)plVar5[9] - 1U &
                        (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar7) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar8 != -1) {
          do {
            plVar6 = (longlong *)(*plVar5 + (longlong)iVar8 * 0x28);
            if (*plVar6 == lVar2) {
              if ((plVar6 + 1 != (longlong *)0x0 && plVar6 != (longlong *)0x0) &&
                 ((int)plVar6[2] != 0)) {
                FUN_140989cc7(plVar6[1]);
                *(undefined4 *)(plVar6 + 2) = 0;
                if (*(int *)((longlong)plVar6 + 0x14) != 0) {
                  FUN_140989f18(plVar6 + 1,0);
                }
                *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
                plVar9 = plVar9 + 1;
                bVar4 = true;
                if (plVar9 == plVar1) goto LAB_1415b83ff;
                goto LAB_1415b8303;
              }
              break;
            }
            iVar8 = (int)plVar6[4];
          } while (iVar8 != -1);
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
    if (bVar4) {
LAB_1415b83ff:
      *(int *)(plVar5 + 10) = (int)plVar5[10] + 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001415b83a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 0xb));
  return;
}



// FUNCTION 1415b8404 FUN_1415b8404 body=258 status=ok
// SIG undefined FUN_1415b8404(void)

void FUN_1415b8404(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c3ef8) {
    FUN_144b3d300(&DAT_14c9c3ef8);
    if (DAT_14c9c3ef8 == -1) {
      FUN_146005646(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FRenderOpaqueFXPassParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x1fe;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c3e78,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142bc278e);
      _Init_thread_footer(&DAT_14c9c3ef8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b8508 FUN_1415b8508 body=258 status=ok
// SIG undefined FUN_1415b8508(void)

void FUN_1415b8508(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca962b0) {
    FUN_144b3d300(&DAT_14ca962b0);
    if (DAT_14ca962b0 == -1) {
      FUN_146005734(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FClearTextureUAVParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x1b5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca96230,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14321d0a9);
      _Init_thread_footer(&DAT_14ca962b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b860c FUN_1415b860c body=258 status=ok
// SIG undefined FUN_1415b860c(void)

void FUN_1415b860c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3f0f8) {
    FUN_144b3d300(&DAT_14cb3f0f8);
    if (DAT_14cb3f0f8 == -1) {
      FUN_146005df4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FNiagaraGpuComputeDispatchParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0xa36;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb3f078,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a9ee46);
      _Init_thread_footer(&DAT_14cb3f0f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b8778 FUN_1415b8778 body=918 status=ok
// SIG undefined FUN_1415b8778(void)

ulonglong FUN_1415b8778(longlong param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong local_88;
  longlong *local_80;
  int local_78;
  longlong *local_70;
  int local_68;
  undefined4 local_64;
  longlong local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = (longlong *)0x0;
  local_50 = 3;
  FUN_1460066bc(&local_58,3,0);
  plVar8 = local_58;
  *local_58 = param_1 + 0x78;
  local_58[1] = param_1 + 0x28;
  local_58[2] = param_1 + 200;
  local_70 = (longlong *)0x0;
  lVar11 = (longlong)local_50;
  local_68 = local_50;
  if (lVar11 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1460066bc(&local_70,local_50,0);
    memcpy(local_70,plVar8,lVar11 << 3);
  }
  lVar11 = *(longlong *)(param_1 + 0x230);
  plVar8 = (longlong *)(param_1 + 0x138);
  local_60 = param_1;
  FUN_141157eea(&local_80,plVar8,*(undefined1 *)(param_1 + 0x1e0));
  uVar10 = CONCAT71((int7)((ulonglong)&local_80 >> 8),1);
  if ((longlong)local_78 != 0) {
    plVar13 = local_80 + (longlong)local_78 * 2;
    lVar9 = local_60;
    plVar12 = local_80;
    plVar14 = local_70;
    plVar15 = local_80;
    do {
      cVar5 = (char)plVar12[1];
      local_80 = plVar15;
      lVar16 = local_88;
      if (cVar5 == 'e') {
        lVar7 = *plVar12;
        lVar6 = *plVar8;
        if (*(int *)(lVar11 + 8) <= (int)(uint)*(ushort *)(lVar6 + 2 + lVar7)) goto LAB_1415b89ef;
        uVar2 = *(ushort *)(lVar6 + 4 + lVar7);
        if (uVar2 != 0) {
          lVar6 = lVar7 + (ulonglong)*(byte *)((longlong)plVar12 + 9) + lVar6;
          lVar7 = 0;
          do {
            bVar1 = *(byte *)(lVar6 + 10 + lVar7);
            if (bVar1 == 2) {
              uVar3 = *(ushort *)(lVar6 + 0xe + lVar7);
              if ((uVar3 != 0xffff) &&
                 (*(uint *)(lVar9 + 0x120) == (uint)uVar3 ||
                  (int)*(uint *)(lVar9 + 0x120) < (int)(uint)uVar3)) goto LAB_1415b89ef;
            }
            else {
              uVar10 = 2;
              if ((bVar1 != 3) && (uVar10 = (ulonglong)bVar1, 3 < bVar1)) goto LAB_1415b89ef;
              uVar3 = *(ushort *)(lVar6 + 0xc + lVar7);
              if ((uVar3 == 0xffff) ||
                 (uVar4 = *(uint *)(plVar14[uVar10] + 0x30),
                 uVar4 == uVar3 || (int)uVar4 < (int)(uint)uVar3)) goto LAB_1415b89ef;
              uVar3 = *(ushort *)(lVar6 + 0xe + lVar7);
              if ((uVar3 != 0xffff) &&
                 (uVar4 = *(uint *)(plVar14[uVar10] + 0x40),
                 uVar4 == uVar3 || (int)uVar4 < (int)(uint)uVar3)) goto LAB_1415b89ef;
            }
            lVar7 = lVar7 + 6;
          } while ((ulonglong)((uint)uVar2 * 2) * 3 != lVar7);
        }
        goto switchD_1415b8951_caseD_49;
      }
      lVar16 = lVar9;
      switch(cVar5) {
      case 'A':
      case 'B':
      case 'C':
      case 'E':
      case 'F':
      case 'L':
      case 'M':
      case 'N':
switchD_1415b8951_caseD_41:
        local_88 = lVar16;
        cVar5 = FUN_1415b8b10(&local_70,*plVar8 + *plVar12 + 2);
        goto joined_r0x0001415b89ad;
      case 'D':
        lVar16 = *plVar12;
        lVar7 = *plVar8;
        local_90 = plVar15;
        local_88 = lVar9;
        cVar5 = FUN_1415b8b10(&local_70,lVar7 + lVar16 + 2);
        if (cVar5 == '\0') {
          uVar10 = 0;
          local_80 = local_90;
          goto LAB_1415b89f1;
        }
        cVar5 = FUN_1415b8b10(&local_70,lVar7 + lVar16 + 8);
        plVar15 = local_90;
        lVar9 = local_88;
joined_r0x0001415b89ad:
        local_80 = plVar15;
        lVar16 = local_88;
        if (cVar5 == '\0') goto LAB_1415b89ef;
        break;
      case 'G':
      case 'H':
        lVar7 = *plVar12;
        lVar16 = *plVar8;
        local_90 = plVar14;
        local_88 = lVar9;
        cVar5 = FUN_1415b8b10(&local_70,lVar16 + lVar7 + 2);
        if (cVar5 != '\0') {
          lVar16 = lVar16 + lVar7;
          cVar5 = FUN_1415b8b10(&local_70,lVar16 + 8);
          if (cVar5 != '\0') {
            lVar16 = lVar16 + 0xe;
            goto LAB_1415b8aea;
          }
        }
        goto LAB_1415b89ef;
      case 'I':
      case 'J':
      case 'K':
      case 'O':
      case 'P':
        break;
      case 'Q':
        lVar16 = *plVar12;
        lVar7 = *plVar8;
        local_90 = plVar14;
        local_88 = lVar9;
        cVar5 = FUN_1415b8b10(&local_70,lVar7 + lVar16 + 2);
        if (cVar5 != '\0') {
          lVar16 = lVar7 + lVar16 + 8;
LAB_1415b8aea:
          cVar5 = FUN_1415b8b10(&local_70,lVar16);
          plVar14 = local_90;
          lVar9 = local_88;
          goto joined_r0x0001415b89ad;
        }
LAB_1415b89ef:
        uVar10 = 0;
        goto LAB_1415b89f1;
      default:
        lVar16 = local_88;
        if (cVar5 == 'd') goto switchD_1415b8951_caseD_41;
      }
switchD_1415b8951_caseD_49:
      local_88 = lVar16;
      plVar12 = plVar12 + 2;
      plVar15 = local_80;
    } while (plVar12 != plVar13);
    uVar10 = (longlong)L"TArray<FName>" + 7;
  }
LAB_1415b89f1:
  if (local_80 != (longlong *)0x0) {
    FUN_1400020a8(local_80);
  }
  if (local_70 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b8b10 FUN_1415b8b10 body=101 status=ok
// SIG undefined FUN_1415b8b10(void)

undefined8 FUN_1415b8b10(longlong *param_1,byte *param_2)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  
  bVar1 = *param_2;
  if (bVar1 == 2) {
    uVar2 = *(ushort *)(param_2 + 4);
    uVar3 = (ulonglong)uVar2;
    if ((uVar2 == 0xffff) ||
       (*(uint *)(param_1[2] + 0x120) != (uint)uVar2 &&
        (int)(uint)uVar2 <= (int)*(uint *)(param_1[2] + 0x120))) {
LAB_1415b8b6f:
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  else {
    uVar3 = 2;
    if ((bVar1 == 3) || (uVar3 = (ulonglong)bVar1, bVar1 < 4)) {
      uVar2 = *(ushort *)(param_2 + 2);
      if ((uVar2 != 0xffff) &&
         (uVar3 = *(ulonglong *)(*param_1 + uVar3 * 8),
         *(uint *)(uVar3 + 0x30) != (uint)uVar2 && (int)(uint)uVar2 <= (int)*(uint *)(uVar3 + 0x30))
         ) {
        uVar2 = *(ushort *)(param_2 + 4);
        if ((uVar2 == 0xffff) ||
           (*(uint *)(uVar3 + 0x40) != (uint)uVar2 &&
            (int)(uint)uVar2 <= (int)*(uint *)(uVar3 + 0x40))) goto LAB_1415b8b6f;
      }
    }
  }
  return 0;
}



// FUNCTION 1415b8b76 FUN_1415b8b76 body=1946 status=ok
// SIG undefined FUN_1415b8b76(void)

void FUN_1415b8b76(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  undefined8 *puVar16;
  int iVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_70 [24];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar10 = *(longlong *)(param_1 + 0x10);
  if (((((lVar10 == 0) || (*(char *)(lVar10 + 0x58) != '\x01')) || (*(int *)(param_1 + 0x54) == 0))
      || (((uVar21 = *(uint *)(param_1 + 0x50), (int)uVar21 < 0 || (DAT_14c9647dc <= (int)uVar21))
          || ((lVar20 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8), lVar20 == 0
              || ((*(int *)(lVar20 + 0x10) != *(int *)(param_1 + 0x54) ||
                  ((*(uint *)(lVar20 + 8) & 0x10200000) != 0)))))))) ||
     (*(char *)(lVar10 + 0x78) == '\0')) {
    local_58 = *(undefined8 *)(param_1 + 0xa0);
    uStack_50 = *(undefined8 *)(param_1 + 0xa8);
    local_48 = *(undefined8 *)(param_1 + 0xb0);
    local_98 = *(undefined8 *)(param_1 + 0x60);
    uStack_90 = *(undefined8 *)(param_1 + 0x68);
    local_88 = *(undefined4 *)(param_1 + 0x70);
    uStack_84 = *(undefined4 *)(param_1 + 0x74);
    uStack_80 = *(undefined4 *)(param_1 + 0x78);
    uStack_7c = *(undefined4 *)(param_1 + 0x7c);
    FUN_1448052ee(&local_98,local_70);
    local_b8 = *(undefined8 *)(param_1 + 0x80);
    uStack_b0 = *(undefined8 *)(param_1 + 0x88);
    local_a8 = *(undefined8 *)(param_1 + 0x90);
    uVar7 = FUN_1412fe774(param_1 + 0xd0);
    if (*(int *)(param_1 + 0x44) == 0) {
LAB_1415b9243:
      uVar19 = 0;
    }
    else {
      uVar21 = *(uint *)(param_1 + 0x40);
      uVar19 = 0;
      if ((-1 < (int)uVar21) && ((int)uVar21 < DAT_14c9647dc)) {
        puVar16 = (undefined8 *)
                  ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8));
        if ((puVar16 == (undefined8 *)0x0) ||
           ((*(int *)(puVar16 + 2) != *(int *)(param_1 + 0x44) ||
            ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)))) goto LAB_1415b9243;
        uVar19 = *puVar16;
      }
    }
    local_c8 = 1;
    local_d8 = 1;
    local_e8 = &local_58;
    local_d0 = 2;
    local_e0 = 0;
    lVar10 = FUN_140416e90(uVar19,uVar7,&local_b8,local_70);
    if (lVar10 == 0) {
      *(undefined4 *)(param_1 + 0xf8) = 0;
      iVar4 = 0;
    }
    else {
      uVar21 = *(uint *)(lVar10 + 0xc);
      *(uint *)(param_1 + 0xf8) = uVar21;
      if ((int)uVar21 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar21 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar4 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar23 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar23) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar4 = *(int *)(lVar10 + 0x10);
        bVar23 = iVar4 == 0;
        if (bVar23) {
          *(int *)(lVar10 + 0x10) = iVar6;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar23) {
          iVar4 = iVar6;
        }
      }
    }
    *(int *)(param_1 + 0xfc) = iVar4;
    bVar23 = true;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xfc);
    bVar23 = false;
  }
  if (((((iVar4 == 0) || (uVar21 = *(uint *)(param_1 + 0xf8), (int)uVar21 < 0)) ||
       (DAT_14c9647dc <= (int)uVar21)) ||
      ((((puVar16 = (undefined8 *)
                    ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8)),
         puVar16 == (undefined8 *)0x0 || (*(int *)(puVar16 + 2) != iVar4)) ||
        (((*(uint *)(puVar16 + 1) & 0x10200000) != 0 ||
         ((*(int *)(param_1 + 0x44) == 0 || (uVar21 = *(uint *)(param_1 + 0x40), (int)uVar21 < 0))))
        )) || (DAT_14c9647dc <= (int)uVar21)))) ||
     (((puVar8 = (undefined8 *)
                 ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8)),
       puVar8 == (undefined8 *)0x0 || (*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x44))) ||
      (!bVar23 || (*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_1415b8d89;
  if ((*(uint *)(puVar16 + 1) & 0x10200000) == 0) {
    uVar7 = *puVar16;
  }
  else {
    uVar7 = 0;
  }
  if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
    plVar14 = (longlong *)*puVar8;
  }
  else {
    plVar14 = (longlong *)0x0;
  }
  uVar5 = (**(code **)(*plVar14 + 0x1068))();
  uVar19 = 0;
  FUN_140357fa8(uVar7,uVar5,0);
  local_98 = CONCAT44(local_98._4_4_,0xffffffff);
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar21 = *(uint *)(param_1 + 0x40);
    uVar19 = 0;
    if ((-1 < (int)uVar21) && ((int)uVar21 < DAT_14c9647dc)) {
      puVar16 = (undefined8 *)
                ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8));
      if ((puVar16 == (undefined8 *)0x0) ||
         ((*(int *)(puVar16 + 2) != *(int *)(param_1 + 0x44) ||
          ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)))) {
        uVar19 = 0;
      }
      else {
        uVar19 = *puVar16;
      }
    }
  }
  cVar3 = FUN_14016169c(uVar19,&local_98);
  if (cVar3 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb78500) && (FUN_144b3d300(&DAT_14cb78500), DAT_14cb78500 == -1)) {
      FUN_1446f470e(&DAT_14cb784f8,L"PlayerCamera",1);
      _Init_thread_footer(&DAT_14cb78500);
    }
    uVar7 = DAT_14cb784f8;
    if (*(int *)(param_1 + 0xfc) == 0) {
LAB_1415b928b:
      uVar19 = 0;
    }
    else {
      uVar21 = *(uint *)(param_1 + 0xf8);
      uVar19 = 0;
      if ((-1 < (int)uVar21) && ((int)uVar21 < DAT_14c9647dc)) {
        puVar16 = (undefined8 *)
                  ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8));
        if ((puVar16 == (undefined8 *)0x0) ||
           ((*(int *)(puVar16 + 2) != *(int *)(param_1 + 0xfc) ||
            ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)))) goto LAB_1415b928b;
        uVar19 = *puVar16;
      }
    }
    uVar9 = FUN_140584734();
    lVar10 = FUN_140584a5e(uVar9,uVar19,uVar7);
    if (lVar10 != 0) {
      lVar20 = FUN_140584734();
      if ((*(int *)(lVar20 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar20 + 0x38) * 8) == lVar20 + 0x30)) {
        *(undefined4 *)(lVar10 + 0x38) = (undefined4)local_98;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if (*(int *)(param_1 + 0xfc) == 0) {
LAB_1415b9284:
      uVar7 = 0;
    }
    else {
      uVar21 = *(uint *)(param_1 + 0xf8);
      uVar7 = 0;
      if ((-1 < (int)uVar21) && ((int)uVar21 < DAT_14c9647dc)) {
        puVar16 = (undefined8 *)
                  ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8));
        if ((puVar16 == (undefined8 *)0x0) ||
           ((*(int *)(puVar16 + 2) != *(int *)(param_1 + 0xfc) ||
            ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)))) goto LAB_1415b9284;
        uVar7 = *puVar16;
      }
    }
    FUN_143d1579e(param_1,uVar7,*(longlong *)(param_1 + 0x10) + 0x48);
  }
  uVar18 = 0;
  if (*(int *)(param_1 + 0xfc) == 0) {
LAB_1415b927d:
    uVar7 = 0;
  }
  else {
    uVar21 = *(uint *)(param_1 + 0xf8);
    uVar7 = 0;
    if ((-1 < (int)uVar21) && ((int)uVar21 < DAT_14c9647dc)) {
      puVar16 = (undefined8 *)
                ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8));
      if ((puVar16 == (undefined8 *)0x0) ||
         ((*(int *)(puVar16 + 2) != *(int *)(param_1 + 0xfc) ||
          ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)))) goto LAB_1415b927d;
      uVar7 = *puVar16;
    }
  }
  FUN_143d1579e(param_1,uVar7,param_1 + 0x100);
  iVar4 = *(int *)(param_1 + 0x148);
  if (iVar4 == 0) {
    uVar22 = 1;
    iVar17 = 0;
    iVar6 = 0;
  }
  else {
    puVar11 = *(uint **)(param_1 + 0x140);
    if (*(uint **)(param_1 + 0x140) == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 0x130);
    }
    uVar21 = *puVar11;
    if (uVar21 == 0) {
      iVar6 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar6 = iVar4 + -1;
      }
      uVar18 = 0;
      uVar22 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar22 = uVar18;
      }
      iVar17 = 0;
      do {
        if (uVar22 == uVar18) goto LAB_1415b8d89;
        iVar17 = iVar17 + 0x20;
        uVar21 = puVar11[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar21 == 0);
    }
    else {
      uVar18 = 0;
      iVar17 = 0;
    }
    uVar22 = (ulonglong)(-uVar21 & uVar21);
    uVar1 = uVar22 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar6 = (iVar17 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar6) {
      iVar6 = iVar4;
    }
  }
  if (iVar6 != iVar4) {
    uVar21 = 0xffffffff;
    do {
      puVar16 = (undefined8 *)((longlong)iVar6 * 0x14 + *(longlong *)(param_1 + 0x120));
      if ((*(int *)(param_1 + 0xfc) == 0) || (uVar15 = *(uint *)(param_1 + 0xf8), (int)uVar15 < 0))
      {
LAB_1415b9232:
        plVar14 = (longlong *)0x0;
      }
      else {
        plVar14 = (longlong *)0x0;
        if ((int)uVar15 < DAT_14c9647dc) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
          if (((puVar8 == (undefined8 *)0x0) || (*(int *)(puVar8 + 2) != *(int *)(param_1 + 0xfc)))
             || ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_1415b9232;
          plVar14 = (longlong *)*puVar8;
        }
      }
      (**(code **)(*plVar14 + 0xa08))(plVar14,*puVar16,*(undefined4 *)(puVar16 + 1));
      uVar21 = uVar21 & ~(uint)uVar22;
      puVar11 = *(uint **)(param_1 + 0x140);
      if (*(uint **)(param_1 + 0x140) == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 0x130);
      }
      iVar2 = *(int *)(param_1 + 0x148);
      iVar6 = (int)uVar18;
      lVar10 = (longlong)iVar6;
      uVar15 = puVar11[lVar10] & uVar21;
      if (uVar15 == 0) {
        iVar12 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar12 = iVar2 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar6) {
          iVar13 = iVar6;
        }
        if (iVar6 < iVar12) {
          lVar20 = 0;
          do {
            uVar15 = puVar11[lVar10 + lVar20 + 1];
            if (uVar15 != 0) {
              uVar18 = (ulonglong)(iVar6 + (int)lVar20 + 1);
              uVar21 = 0xffffffff;
              goto LAB_1415b91fe;
            }
            iVar17 = iVar17 + 0x20;
            lVar20 = lVar20 + 1;
          } while (iVar13 - lVar10 != lVar20);
          uVar21 = 0xffffffff;
          lVar10 = (longlong)iVar13;
        }
        uVar18 = lVar10 + 1U & 0xffffffff;
        iVar6 = iVar2;
      }
      else {
LAB_1415b91fe:
        uVar22 = (ulonglong)(-uVar15 & uVar15);
        uVar1 = uVar22 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar6 = (iVar17 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar6) {
          iVar6 = iVar2;
        }
      }
    } while (iVar6 != iVar4);
  }
LAB_1415b8d89:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415b9312 FUN_1415b9312 body=573 status=ok
// SIG undefined FUN_1415b9312(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415b9312(void)

{
  uint *puVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  undefined *puVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  undefined *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0x100000000;
  local_58 = &DAT_14ca774c0;
  local_50 = 0xffffffff;
  local_48 = 0;
  if (DAT_14ca774d8 == 0) {
    uVar18 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar18 = local_60 >> 0x20;
  }
  puVar6 = local_58;
  iVar14 = (int)local_60;
  uVar15 = (uint)local_50;
  iVar16 = local_48;
  iVar11 = local_50._4_4_;
  if (local_50._4_4_ < *(int *)(local_58 + 0x18)) {
    do {
      lVar17 = *(longlong *)(DAT_14ca774b0 + 600 + (longlong)iVar11 * 0x268);
      if (lVar17 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar17 + 8);
        uVar10 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar10 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar17 + 8);
          LOCK();
          uVar10 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar10 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(lVar17 + 0xd);
            plVar7 = (longlong *)FUN_14001cc68(0x10,8);
            plVar7[1] = lVar17;
            plVar9 = DAT_14ca843c0;
            plVar8 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar7 = (longlong)plVar9;
                LOCK();
                bVar19 = plVar9 != DAT_14ca843c0;
                plVar8 = plVar7;
                if (bVar19) {
                  plVar9 = DAT_14ca843c0;
                  plVar8 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar8;
                UNLOCK();
              } while (bVar19);
            }
            else {
              do {
                *plVar7 = (longlong)plVar8;
                LOCK();
                bVar19 = plVar8 != DAT_14ca843c8;
                plVar9 = plVar7;
                if (bVar19) {
                  plVar8 = DAT_14ca843c8;
                  plVar9 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar9;
                UNLOCK();
              } while (bVar19);
            }
          }
        }
      }
      uVar15 = uVar15 & ~(uint)uVar18;
      puVar12 = *(undefined **)(puVar6 + 0x10);
      if (*(undefined **)(puVar6 + 0x10) == (undefined *)0x0) {
        puVar12 = puVar6;
      }
      iVar4 = *(int *)(puVar6 + 0x18);
      lVar17 = (longlong)iVar14;
      uVar10 = *(uint *)(puVar12 + lVar17 * 4) & uVar15;
      if (uVar10 == 0) {
        iVar11 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar11 = iVar4 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar5 = iVar11;
        if (iVar11 < iVar14) {
          iVar5 = iVar14;
        }
        if (iVar11 <= iVar14) break;
        lVar13 = 0;
        while( true ) {
          iVar16 = iVar16 + 0x20;
          uVar10 = *(uint *)(puVar12 + lVar13 * 4 + lVar17 * 4 + 4);
          if (uVar10 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar5 - lVar17 == lVar13) goto LAB_1415b9492;
        }
        iVar14 = iVar14 + (int)lVar13 + 1;
        uVar15 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar10 & uVar10);
      uVar2 = uVar18 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar11 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar4);
  }
LAB_1415b9492:
  DAT_14ca774b8 = 0;
  if (DAT_14ca774bc != 0) {
    FUN_1460076c0();
  }
  _DAT_14ca774e0 = 0xffffffff;
  DAT_14ca774d8 = 0;
  if (0x80 < DAT_14ca774dc) {
    DAT_14ca774dc = 0x80;
    FUN_1446efbd8(&DAT_14ca774c0,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b9550 FUN_1415b9550 body=115 status=ok
// SIG undefined FUN_1415b9550(void)

undefined8 FUN_1415b9550(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  plVar1 = (longlong *)(param_1 + -0x428);
  iVar3 = FUN_14487fd02(plVar1);
  cVar2 = (**(code **)(*(longlong *)(param_1 + -0x428) + 0xb80))(plVar1);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
    if ((iVar3 - 1U < 2) || (cVar2 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001415b95b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar1 + 0xbb0))(plVar1,param_2);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1415b95c4 FUN_1415b95c4 body=186 status=ok
// SIG undefined FUN_1415b95c4(void)

undefined8 FUN_1415b95c4(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = *(uint *)(param_1 + 0x30);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x34))) &&
       ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar5 = *plVar2;
      }
      else {
        lVar5 = 0;
      }
      if (*(int *)(lVar5 + 0x390) != 0) {
        uVar1 = *(uint *)(lVar5 + 0x38c);
        uVar4 = 0;
        if ((-1 < (int)uVar1) && (uVar4 = 0, (int)uVar1 < DAT_14c9647dc)) {
          puVar3 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (puVar3 == (undefined8 *)0x0) {
            return 0;
          }
          if (*(int *)(puVar3 + 2) != *(int *)(lVar5 + 0x390)) {
            return 0;
          }
          if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
            return 0;
          }
          uVar4 = *puVar3;
        }
        return uVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 1415b967e FUN_1415b967e body=925 status=ok
// SIG undefined FUN_1415b967e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415b967e(char param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0ff80) && (FUN_144b3d300(&DAT_14cb0ff80), DAT_14cb0ff80 == -1)) {
    DAT_14cb0ff58 = '\0';
    DAT_14cb0ff70 = 0;
    _DAT_14cb0ff78 = 0x200000000;
    atexit((_func_5014 *)&LAB_143784b18);
    _Init_thread_footer(&DAT_14cb0ff80);
  }
  lVar6 = DAT_14cb0fe10;
  if (param_1 == '\0') {
    if (DAT_14cb0ff58 == '\0') {
      piVar1 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      iVar2 = *piVar1;
      if (iVar2 == 0x40000002) {
        uVar9 = 0;
      }
      else {
        bVar11 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
          if (iVar2 == 1) {
            DVar7 = FUN_140ad26c0();
            DVar8 = GetCurrentThreadId();
            bVar11 = DVar7 == DVar8;
          }
          else {
            bVar11 = false;
          }
        }
        uVar9 = (ulonglong)(bVar11 ^ 1);
      }
      iVar2 = *piVar1;
      lVar10 = DAT_14cb0fdc8;
      if (0 < *(int *)(lVar6 + uVar9 * 4)) {
        lVar10 = DAT_14cb0fe10;
      }
      if (iVar2 == 0x40000002) {
        uVar9 = 0;
      }
      else {
        bVar11 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
          if (iVar2 == 1) {
            DVar7 = FUN_140ad26c0();
            DVar8 = GetCurrentThreadId();
            bVar11 = DVar7 == DVar8;
          }
          else {
            bVar11 = false;
          }
        }
        uVar9 = (ulonglong)(bVar11 ^ 1);
      }
      lVar6 = DAT_14cb0fe28;
      uVar3 = *(undefined4 *)(lVar10 + uVar9 * 4);
      iVar2 = *piVar1;
      if (iVar2 == 0x40000002) {
        uVar9 = 0;
      }
      else {
        bVar11 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
          if (iVar2 == 1) {
            DVar7 = FUN_140ad26c0();
            DVar8 = GetCurrentThreadId();
            bVar11 = DVar7 == DVar8;
          }
          else {
            bVar11 = false;
          }
        }
        uVar9 = (ulonglong)(bVar11 ^ 1);
      }
      iVar2 = *piVar1;
      lVar10 = DAT_14cb0fde0;
      if (0 < *(int *)(lVar6 + uVar9 * 4)) {
        lVar10 = DAT_14cb0fe28;
      }
      if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
        uVar9 = 0;
      }
      else if (iVar2 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        uVar9 = (ulonglong)(DVar7 != DVar8);
      }
      else {
        uVar9 = 1;
      }
      lVar6 = DAT_14cb0fe40;
      uVar4 = *(undefined4 *)(lVar10 + uVar9 * 4);
      iVar2 = *piVar1;
      if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
        uVar9 = 0;
      }
      else if (iVar2 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        uVar9 = (ulonglong)(DVar7 != DVar8);
      }
      else {
        uVar9 = 1;
      }
      iVar2 = *piVar1;
      lVar10 = DAT_14cb0fdf8;
      if (0 < *(int *)(lVar6 + uVar9 * 4)) {
        lVar10 = DAT_14cb0fe40;
      }
      if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
        uVar9 = 0;
      }
      else if (iVar2 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        uVar9 = (ulonglong)(DVar7 != DVar8);
      }
      else {
        uVar9 = 1;
      }
      uVar5 = *(undefined4 *)(lVar10 + uVar9 * 4);
      FUN_140635eb8(DAT_14cb0fdc0,uVar3,0xd000000,0);
      FUN_140635eb8(DAT_14cb0fdd8,uVar4,0xd000000,0);
      FUN_140635eb8(DAT_14cb0fdf0,uVar5,0xd000000,0);
    }
    FUN_1400bc96c(&DAT_14cb0ff58,param_2);
    return;
  }
  FUN_1400bc8c2(&DAT_14cb0ff58,param_2);
  if (DAT_14cb0ff58 == '\0') {
    (**(code **)(*DAT_14cb0fdc0 + 0xa0))(DAT_14cb0fdc0,0xd000000,0);
    (**(code **)(*DAT_14cb0fdd8 + 0xa0))(DAT_14cb0fdd8,0xd000000,0);
                    /* WARNING: Could not recover jumptable at 0x0001415b976f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14cb0fdf0 + 0xa0))(DAT_14cb0fdf0,0xd000000,0);
    return;
  }
  return;
}



// FUNCTION 1415b9a1c FUN_1415b9a1c body=120 status=ok
// SIG undefined FUN_1415b9a1c(void)

undefined8 * FUN_1415b9a1c(undefined8 *param_1)

{
  FUN_144805d84();
  *param_1 = &PTR_FUN_14a848d60;
  param_1[5] = &PTR_FUN_14a849200;
  param_1[6] = &PTR_LAB_14a849240;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(byte *)((longlong)param_1 + 0x194) = *(byte *)((longlong)param_1 + 0x194) & 0xfe;
  return param_1;
}



// FUNCTION 1415b9a94 FUN_1415b9a94 body=497 status=ok
// SIG undefined FUN_1415b9a94(void)

void FUN_1415b9a94(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 ****ppppuVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = *(longlong *)(param_1 + 0x20);
  if ((((((lVar7 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) && (*(int *)(param_1 + 0x2c) != 0))
       && (((uVar1 = *(uint *)(param_1 + 0x28), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
           ((lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar9 != 0 &&
            ((*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x2c) &&
             ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))))))) &&
      (lVar9 = FUN_14108b142(lVar7 + 8), lVar9 != 0)) &&
     ((cVar4 = FUN_1410862f0(param_2), cVar4 != '\0' || (*(char *)(lVar7 + 0x80) == '\x01')))) {
    lVar5 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
    FUN_148990f62(lVar7);
    FUN_145a3753e(param_1,lVar5,lVar9);
    cVar4 = FUN_1410862f0(param_2);
    if (cVar4 == '\0') {
      FUN_14034cca6(local_68,lVar9 + 0x30);
    }
    else {
      FUN_140c5894c(local_68,param_1 + 0x38);
    }
    if (*(char *)(lVar9 + 0x68) == '\x01') {
      uVar6 = (**(code **)(*(longlong *)(lVar5 + 0x1a8) + 0x30))(lVar5 + 0x1a8,lVar9);
      FUN_14101bc7a(lVar5 + 0x1a8,uVar6,local_68);
    }
    else {
      lVar7 = FUN_148990f62(lVar7);
      if (((*(byte *)(lVar5 + 0x20c) & 1) == 0) && ((longlong)*(int *)(lVar5 + 0x40) != 0)) {
        lVar10 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + lVar10);
          if (((lVar3 != 0) && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) &&
             (*(longlong *)(lVar3 + 0xa8) == lVar7)) {
            FUN_14101bbec(lVar3,lVar9,local_68);
            break;
          }
          lVar10 = lVar10 + 8;
        } while ((longlong)*(int *)(lVar5 + 0x40) * 8 != lVar10);
      }
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar8 = (undefined8 ****)local_60[0];
      if (local_48 < 0x19) {
        ppppuVar8 = local_60;
      }
      (*pcVar2)(ppppuVar8);
    }
    if (0x18 < local_48) {
      FUN_1400020a8(local_60[0]);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415b9c86 FUN_1415b9c86 body=474 status=ok
// SIG undefined FUN_1415b9c86(void)

undefined8 FUN_1415b9c86(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar4 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_58[2] = lVar5;
  *local_58 = &PTR_FUN_14b9b3620;
  local_58[3] = 0;
  iVar7 = 0;
  if (param_3 != 0) {
    uVar2 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_58 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar7 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar7 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar7 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar6;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar7 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar7;
  puVar4[4] = uVar3;
  *(undefined4 *)(puVar4 + 5) = uVar1;
  FUN_1448b6402(param_1,param_2,&local_58);
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_1415b9d98;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1415b9d98:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1415b9e62 FUN_1415b9e62 body=394 status=ok
// SIG undefined FUN_1415b9e62(void)

void FUN_1415b9e62(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x192) == '\x01') {
    *(undefined1 *)(param_1 + 0x192) = 0;
  }
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1400020a8();
  }
  FUN_145d6b462(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  FUN_145a9f2f4(param_1 + 0xe0);
  if (*(char *)(param_1 + 0xdc) == '\x01') {
    *(undefined1 *)(param_1 + 0xdc) = 0;
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_1447a08a2((longlong *)(param_1 + 0x88),0);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (0x80 < *(uint *)(param_1 + 0xb4)) {
    *(undefined4 *)(param_1 + 0xb4) = 0x80;
    FUN_1446efbd8(param_1 + 0x98,0);
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_141475320(param_1 + 0x30);
  FUN_144760e21(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415b9faf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1415b9fec FUN_1415b9fec body=576 status=ok
// SIG undefined FUN_1415b9fec(void)

void FUN_1415b9fec(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  longlong **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x5e8) + 0x1f0);
  if (lVar7 != 0) {
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x5e8) + 0x1e8);
    plVar9 = plVar8 + lVar7 * 3;
    do {
      lVar7 = *plVar8;
      plVar3 = (longlong *)plVar8[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        plVar5 = plVar3 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      if ((lVar7 != 0) && (*(char *)(lVar7 + 0x48) == '\0')) {
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
        }
        local_60 = lVar7;
        local_58 = plVar3;
        plVar5 = (longlong *)FUN_143d50766(param_1,&local_60);
        if (plVar5 != (longlong *)0x0) {
          uVar4 = (**(code **)(*plVar5 + 0x2e8))(plVar5);
          *(undefined1 *)((longlong)plVar5 + 0x99) = uVar4;
          uVar6 = FUN_14477b072(plVar5,DAT_14cb5e940);
          (**(code **)(*plVar5 + 0x248))(plVar5,uVar6,0);
          if (*(char *)((longlong)plVar5 + 0x99) == '\x01') {
            FUN_144757f48(plVar5,0x40000000);
            uVar2 = *(uint *)((longlong)plVar5 + 0xc);
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            do {
              uVar2 = *(uint *)(lVar7 + 8);
              if ((uVar2 >> 0x15 & 1) != 0) break;
              LOCK();
              bVar10 = uVar2 == *(uint *)(lVar7 + 8);
              if (bVar10) {
                *(uint *)(lVar7 + 8) = uVar2 | 0x200000;
              }
              UNLOCK();
            } while (!bVar10);
            local_68 = plVar5;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(plVar5);
            }
            local_50 = &local_68;
            FUN_148865b48(param_1 + 0x650,&local_50);
          }
          else {
            FUN_14885c672(plVar5 + 0x14,&local_50);
            local_50 = DAT_14cb7d9d0;
            FUN_1400bc96c(param_1 + 0x518,&local_50);
            *(uint *)(param_1 + 0x438) =
                 *(uint *)(param_1 + 0x438) & 0xfffffffe | (uint)*(byte *)(param_1 + 0x518);
          }
        }
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar3 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      plVar8 = plVar8 + 3;
    } while (plVar8 != plVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415ba22e FUN_1415ba22e body=91 status=ok
// SIG undefined FUN_1415ba22e(void)

void FUN_1415ba22e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14108b142();
  if (lVar1 == 0) {
    return;
  }
  uVar2 = 0;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x90);
  }
  FUN_1461e86ae(param_1,uVar2);
  uVar2 = FUN_14108b142(param_1);
  FUN_14101bbec(param_2,uVar2,param_1 + 0x40);
  return;
}



// FUNCTION 1415ba28a FUN_1415ba28a body=872 status=ok
// SIG undefined FUN_1415ba28a(void)

void FUN_1415ba28a(longlong *param_1)

{
  int iVar1;
  int iVar2;
  void *_Src;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  uint *local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < (longlong)(int)param_1[0x17]) {
    uVar10 = (longlong)(int)param_1[0x17] + 1;
    do {
      lVar16 = param_1[0x16];
      iVar1 = *(int *)(lVar16 + -0xc + uVar10 * 8);
      if ((((iVar1 != 0) && (uVar4 = *(uint *)(lVar16 + -0x10 + uVar10 * 8), -1 < (int)uVar4)) &&
          ((int)uVar4 < DAT_14c9647dc)) &&
         (((puVar8 = (undefined8 *)
                     ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
           puVar8 != (undefined8 *)0x0 && (*(int *)(puVar8 + 2) == iVar1)) &&
          ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
          uVar9 = *puVar8;
        }
        else {
          uVar9 = 0;
        }
        FUN_148fbeeee(param_1,uVar9);
      }
      uVar10 = uVar10 - 1;
    } while (1 < uVar10);
  }
  local_88 = param_1 + 0x22;
  FUN_145d72cbc();
  local_80 = (uint *)(param_1 + 0x1a);
  iVar1 = (int)param_1[0x1d];
  if (iVar1 == 0) {
    uVar11 = 1;
    uVar10 = 0;
    iVar12 = 0;
    iVar14 = 0;
  }
  else {
    puVar3 = (uint *)param_1[0x1c];
    if ((uint *)param_1[0x1c] == (uint *)0x0) {
      puVar3 = local_80;
    }
    uVar4 = *puVar3;
    if (uVar4 == 0) {
      iVar12 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar12 = iVar1 + -1;
      }
      uVar10 = 0;
      uVar5 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar5 = uVar10;
      }
      iVar12 = 0;
      do {
        if (uVar5 == uVar10) goto LAB_1415ba3d8;
        iVar12 = iVar12 + 0x20;
        uVar4 = puVar3[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar10 = 0;
      iVar12 = 0;
    }
    uVar11 = (ulonglong)(-uVar4 & uVar4);
    uVar5 = uVar11 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar14 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar14) {
      iVar14 = iVar1;
    }
  }
  if (iVar14 != iVar1) {
    uVar4 = 0xffffffff;
    do {
      FUN_148fc38ce(&local_78,(longlong)iVar14 * 0x38 + param_1[0x18]);
      FUN_1443b567a(param_1,local_78,0xffffffff);
      FUN_148fbf028(&local_78);
      uVar4 = ~(uint)uVar11 & uVar4;
      puVar3 = (uint *)param_1[0x1c];
      if ((uint *)param_1[0x1c] == (uint *)0x0) {
        puVar3 = local_80;
      }
      iVar2 = (int)param_1[0x1d];
      iVar14 = (int)uVar10;
      lVar16 = (longlong)iVar14;
      uVar13 = puVar3[lVar16] & uVar4;
      if (uVar13 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar14) {
          iVar7 = iVar14;
        }
        if (iVar14 < iVar6) {
          lVar15 = 0;
          do {
            uVar13 = puVar3[lVar16 + lVar15 + 1];
            if (uVar13 != 0) {
              uVar10 = (ulonglong)(iVar14 + (int)lVar15 + 1);
              uVar4 = 0xffffffff;
              goto LAB_1415ba59f;
            }
            iVar12 = iVar12 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar7 - lVar16 != lVar15);
          uVar4 = 0xffffffff;
          lVar16 = (longlong)iVar7;
        }
        uVar10 = lVar16 + 1U & 0xffffffff;
        iVar14 = iVar2;
      }
      else {
LAB_1415ba59f:
        uVar11 = (ulonglong)(-uVar13 & uVar13);
        uVar5 = uVar11 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar14 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar14) {
          iVar14 = iVar2;
        }
      }
    } while (iVar14 != iVar1);
  }
LAB_1415ba3d8:
  FUN_1443b5b34(param_1,1);
  local_78 = (void *)0x0;
  local_70 = (int)param_1[0x15];
  lVar16 = (longlong)local_70;
  _Src = (void *)param_1[0x14];
  if (lVar16 == 0) {
    local_6c = 0;
  }
  else {
    FUN_148fc4e2e(&local_78,local_70);
    memcpy(local_78,_Src,lVar16 << 3);
    if (0 < local_70) {
      lVar16 = 0;
      do {
        (**(code **)(*param_1 + 0x38))(param_1,*(undefined8 *)((longlong)local_78 + lVar16 * 8));
        lVar16 = lVar16 + 1;
      } while (lVar16 < local_70);
    }
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (*(int *)((longlong)param_1 + 0xac) != 0) {
    FUN_148fc4e88(param_1 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (*(int *)((longlong)param_1 + 0xbc) != 0) {
    FUN_148fc4eb8(param_1 + 0x16);
  }
  FUN_146150afc(param_1 + 0x18);
  FUN_145d72cbc(local_88);
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415ba5f4 FUN_1415ba5f4 body=460 status=ok
// SIG undefined FUN_1415ba5f4(void)

undefined8 * FUN_1415ba5f4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14add3740;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 2;
  puVar2 = param_1 + 4;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = puVar2;
  if (*(int *)(param_1 + 7) != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = plVar1;
  if (iStack_3c < *(int *)(local_48 + 3)) {
    do {
      FUN_145a5ded4(*local_78 + (longlong)iStack_5c * 0x410 + 0x10);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < *(int *)(local_68 + 3));
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_146012ade(plVar1,0);
  }
  param_1[8] = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3c)) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
    FUN_1446efbd8(puVar2,0);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1415ba7c1 FUN_1415ba7c1 body=852 status=ok
// SIG undefined FUN_1415ba7c1(void)

undefined8 *
FUN_1415ba7c1(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined1 *param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14063337c(&DAT_14c846b20,L"CULTUREFORCOOKING=",param_1,1,0);
  if (cVar1 != '\0') {
    *param_5 = 0;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar1 = FUN_14054d46e(&DAT_14c846b20,L"firstinstall");
    if ((param_3 != 0) && (cVar1 != '\0')) {
      iVar2 = *(int *)(param_1 + 1);
      puVar4 = (undefined2 *)*param_1;
      lVar3 = FUN_14052bcbc(DAT_14c872ce0,&DAT_14c872ce8);
      if (lVar3 != 0) {
        if (iVar2 == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        FUN_1410abc54(lVar3,L"Internationalization",param_3,puVar4);
      }
    }
  }
  iVar2 = *(int *)(param_1 + 1);
  if (param_2 != 0 && iVar2 < 2) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar1 = FUN_14063337c(&DAT_14c846b20,param_2,param_1,1,0);
    if (cVar1 != '\0') {
      *param_5 = 0;
    }
    iVar2 = *(int *)(param_1 + 1);
  }
  if (iVar2 < 2) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar1 = FUN_14063337c(&DAT_14c846b20,L"CULTURE=",param_1,1,0);
    if (cVar1 != '\0') {
      *param_5 = 0;
    }
  }
  if (*(int *)(param_1 + 1) < 2) {
    if (param_3 != 0) {
      cVar1 = FUN_1449da20c(DAT_14c872ce0,L"Internationalization",param_3,param_1,&DAT_14c872b08);
      if (cVar1 != '\0') {
        *param_5 = 2;
      }
      if (1 < *(int *)(param_1 + 1)) goto LAB_1415baa74;
    }
    cVar1 = FUN_1449da20c(DAT_14c872ce0,L"Internationalization",L"Culture",param_1,&DAT_14c872b08);
    if (cVar1 != '\0') {
      *param_5 = 2;
    }
    if (*(int *)(param_1 + 1) < 2) {
      if (param_3 != 0) {
        cVar1 = FUN_1449da20c(DAT_14c872ce0,L"Internationalization",param_3,param_1,&DAT_14c872af8);
        if (cVar1 != '\0') {
          *param_5 = 3;
        }
        if (1 < *(int *)(param_1 + 1)) goto LAB_1415baa74;
      }
      cVar1 = FUN_1449da20c(DAT_14c872ce0,L"Internationalization",L"Culture",param_1,&DAT_14c872af8)
      ;
      if (cVar1 != '\0') {
        *param_5 = 3;
      }
      if (*(int *)(param_1 + 1) < 2) {
        if (param_3 != 0) {
          cVar1 = FUN_1449da20c(DAT_14c872ce0,L"Internationalization",param_3,param_1,&DAT_14c872ce8
                               );
          if (cVar1 != '\0') {
            *param_5 = 4;
          }
          if (1 < *(int *)(param_1 + 1)) goto LAB_1415baa74;
        }
        cVar1 = FUN_1449da20c(DAT_14c872ce0,L"Internationalization",L"Culture",param_1,
                              &DAT_14c872ce8);
        if (cVar1 != '\0') {
          *param_5 = 4;
        }
      }
    }
  }
LAB_1415baa74:
  if ((param_4 != 0) && (*(int *)(param_1 + 1) < 2)) {
    FUN_14020fad6(param_1,param_4);
    *param_5 = 5;
  }
  return param_1;
}



// FUNCTION 1415bab16 FUN_1415bab16 body=458 status=ok
// SIG undefined FUN_1415bab16(void)

void FUN_1415bab16(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar12 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar12 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar10 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      if (*(longlong *)(lVar11 + 0x28 + (longlong)iVar6 * 0x40) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar11 + (longlong)iVar6 * 0x40 + 0x18) != 0) {
        FUN_1400020a8();
      }
      uVar10 = uVar10 & ~(uint)uVar12;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar10;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar8 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar3 - lVar11 == lVar8) goto LAB_1415bac76;
        }
        iVar13 = iVar13 + (int)lVar8 + 1;
        uVar10 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1415bac76:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415bace2 FUN_1415bace2 body=1646 status=ok
// SIG undefined FUN_1415bace2(void)

void FUN_1415bace2(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  bool bVar18;
  double dVar19;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong uStack_60;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = FUN_14620a5eb();
  dVar19 = (double)FUN_1458c5372(&DAT_14c9a4028,*(undefined4 *)(lVar6 + 0x30),
                                 *(undefined4 *)(lVar6 + 0x34));
  *(int *)(param_1 + 0x14) = (int)dVar19;
  dVar19 = (double)FUN_1462a60b8(*(undefined4 *)(lVar6 + 0x2c),*(undefined4 *)(lVar6 + 0x30),
                                 *(undefined4 *)(lVar6 + 0x34));
  *(int *)((longlong)param_1 + 0xa4) = (int)dVar19;
  local_88 = param_1;
  if (DAT_14cbe61a8 != 0) {
    local_68 = (longlong *)0x0;
    uStack_60 = 0;
    FUN_145c53836();
    lVar6 = FUN_14620a5eb();
    if ((longlong)*(int *)(lVar6 + 0x58) != 0) {
      plVar16 = *(longlong **)(lVar6 + 0x50);
      plVar15 = plVar16 + (longlong)*(int *)(lVar6 + 0x58) * 3;
      plVar11 = param_1 + 0xf;
      local_80 = plVar11;
      local_78 = plVar15;
      do {
        lVar6 = plVar16[1];
        if (lVar6 == 0) {
          uVar7 = FUN_141218768();
          lVar6 = FUN_14477b664(uVar7);
          plVar16[1] = lVar6;
        }
        lVar17 = plVar16[2];
        if (lVar17 == 0) {
          if ((lVar6 != 0) && (*plVar16 != 0)) {
            plVar2 = *(longlong **)(lVar6 + 0xb8);
            if ((plVar2 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
              plVar16[2] = 0;
            }
            else {
              uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar17 = FUN_144aff482(uVar7,plVar16);
              plVar16[2] = lVar17;
              if (lVar17 != 0) goto LAB_1415bae85;
            }
          }
        }
        else {
LAB_1415bae85:
          iVar10 = (int)param_1[0x10];
          *(uint *)(param_1 + 0x10) = iVar10 + 1U;
          if (*(uint *)((longlong)param_1 + 0x84) < iVar10 + 1U) {
            FUN_14665d462(plVar11,iVar10);
          }
          FUN_145a21352((longlong)iVar10 * 0xe8 + *plVar11,lVar17);
          plVar2 = local_68;
          iVar10 = (int)uStack_60;
          lVar6 = (longlong)(int)uStack_60;
          if (lVar6 != 0) {
            iVar12 = 0;
            bVar18 = *local_68 == lVar17;
            iVar5 = 0;
            local_70 = plVar16;
            do {
              lVar8 = (longlong)iVar5;
              iVar13 = iVar5;
              lVar9 = lVar8;
              iVar3 = iVar5 + 1;
              if (iVar5 + 1 < iVar10) {
                iVar3 = iVar10;
              }
              do {
                lVar9 = lVar9 + 1;
                iVar14 = iVar3;
                if (lVar6 <= lVar9) break;
                iVar14 = iVar13 + 1;
                iVar13 = iVar14;
              } while (bVar18 == (plVar2[lVar9] == lVar17));
              if (bVar18 == false) {
                if (iVar12 != iVar5) {
                  memmove(plVar2 + iVar12,plVar2 + lVar8,(longlong)(iVar14 - iVar5) << 3);
                }
                iVar12 = iVar12 + (iVar14 - iVar5);
              }
              bVar18 = (bool)(bVar18 ^ 1);
              iVar5 = iVar14;
            } while (lVar9 < lVar6);
            uStack_60 = CONCAT44(uStack_60._4_4_,iVar12);
            plVar11 = local_80;
            plVar15 = local_78;
            plVar16 = local_70;
            param_1 = local_88;
          }
        }
        plVar16 = plVar16 + 3;
      } while (plVar16 != plVar15);
    }
    plVar11 = local_68;
    lVar6 = (longlong)(int)uStack_60;
    if (lVar6 != 0) {
      lVar17 = 0;
      do {
        lVar9 = *(longlong *)((longlong)plVar11 + lVar17);
        if (lVar9 != 0) {
          iVar10 = (int)param_1[0x10];
          *(uint *)(param_1 + 0x10) = iVar10 + 1U;
          if (*(uint *)((longlong)param_1 + 0x84) < iVar10 + 1U) {
            FUN_14665d462(param_1 + 0xf,iVar10);
          }
          FUN_145a21352((longlong)iVar10 * 0xe8 + param_1[0xf],lVar9);
        }
        lVar17 = lVar17 + 8;
      } while (lVar6 * 8 != lVar17);
    }
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((((*(uint *)(param_1 + 1) & 0x10) == 0) && (lVar6 = param_1[4], lVar6 != 0)) &&
     (*(char *)(lVar6 + 0x32b8) == '\0')) {
    FUN_14665c99e(lVar6 + 0x3228,&local_68,param_1,FUN_14162f20c);
  }
  else {
    FUN_14162f20c(param_1);
  }
  FUN_14665ca94(&local_68,param_1);
  uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar6 = FUN_1406f612e(uVar7);
  if (lVar6 == 0) goto LAB_1415bb22e;
  FUN_145ad668c(lVar6 + 0x48,&local_68,param_1);
  local_68 = (longlong *)0x0;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  FUN_1446efa72(&local_68,0,3,0x10);
  plVar11 = local_68;
  uStack_60 = CONCAT44(uStack_60._4_4_,3);
  *local_68 = (longlong)&PTR_LAB_14b982290;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar17 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar17 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar17;
  local_68[2] = lVar9;
  *local_68 = (longlong)&PTR_FUN_14b9dc2b0;
  local_68[3] = 0;
  iVar10 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_68 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar10 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar10 = *(int *)(lVar17 + 0x10);
      bVar18 = iVar10 == 0;
      if (bVar18) {
        *(int *)(lVar17 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar18) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar11 + 0x1c) = iVar10;
  plVar11[4] = (longlong)FUN_1443375f2;
  if (((int)uStack_60 == 0) || (local_68 == (longlong *)0x0)) {
LAB_1415bb2e3:
    param_1 = local_88;
    if ((int)uStack_60 != 0) {
      if (local_68 == (longlong *)0x0) goto LAB_1415bb22e;
      (**(code **)*local_68)(local_68,0);
      FUN_1446efa72(&local_68,0,0,0x10);
      goto LAB_1415bb218;
    }
  }
  else {
    cVar4 = (**(code **)(*local_68 + 0x30))();
    if (cVar4 == '\0') {
      goto LAB_1415bb2e3;
    }
    plVar11 = (longlong *)(lVar6 + 0x690);
    if (*(int *)(lVar6 + 0x6a4) < 1) {
      iVar10 = *(int *)(lVar6 + 0x698);
      iVar5 = *(int *)(lVar6 + 0x6a0) + -1;
      *(int *)(lVar6 + 0x6a0) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
          iVar12 = 0;
          do {
            if (((*(int *)(*plVar11 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                (plVar15 = *(longlong **)(*plVar11 + (longlong)iVar12 * 0x10),
                plVar15 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar15 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar11,iVar12);
              FUN_14005b248(plVar11);
            }
            else {
              iVar12 = iVar12 + 1;
            }
            iVar5 = *(int *)(lVar6 + 0x698);
          } while (iVar12 < iVar5);
        }
        iVar12 = 2;
        if (2 < iVar5 * 2) {
          iVar12 = iVar5 * 2;
        }
        *(int *)(lVar6 + 0x6a0) = iVar12;
        if ((iVar12 < iVar10) && (*(int *)(lVar6 + 0x69c) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    if (((int)uStack_60 != 0) && (local_68 != (longlong *)0x0)) {
      (**(code **)(*local_68 + 0x38))(local_68,local_50);
    }
    iVar10 = *(int *)(lVar6 + 0x698);
    *(uint *)(lVar6 + 0x698) = iVar10 + 1U;
    if (*(uint *)(lVar6 + 0x69c) < iVar10 + 1U) {
      FUN_1447a71f6(plVar11,iVar10);
    }
    lVar6 = *plVar11;
    lVar17 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar6 + lVar17) = 0;
    *(undefined4 *)(lVar6 + 8 + lVar17) = 0;
    *(longlong **)(lVar6 + lVar17) = local_68;
    local_68 = (longlong *)0x0;
    *(int *)(lVar6 + 8 + lVar17) = (int)uStack_60;
LAB_1415bb218:
    uStack_60 = uStack_60 & 0xffffffff00000000;
  }
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1415bb22e:
  FUN_14665c99e(&DAT_14c872c10,&local_68,param_1,&LAB_1443377c8);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415bb352 FUN_1415bb352 body=662 status=ok
// SIG undefined FUN_1415bb352(void)

longlong * FUN_1415bb352(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar4 = *(uint *)(param_4 + 0xf0);
  lVar5 = *(longlong *)(param_4 + 0xe8);
  uVar9 = 0;
  if (0 < (int)uVar4) {
    uVar10 = (ulonglong)uVar4;
    uVar11 = uVar4;
    do {
      uVar10 = uVar10 >> 1;
      uVar12 = (uint)uVar10 + (int)uVar9;
      if (*(uint *)(lVar5 + (ulonglong)uVar12 * 0x18) < *(uint *)(param_1 + 8)) {
        uVar9 = (ulonglong)(uVar12 + (uVar11 & 1));
      }
      bVar6 = 1 < uVar11;
      uVar11 = (uint)uVar10;
    } while (bVar6);
  }
  if (((int)uVar9 < (int)uVar4) && (*(uint *)(lVar5 + uVar9 * 0x18) <= *(uint *)(param_1 + 8))) {
    lVar5 = lVar5 + uVar9 * 0x18;
    plVar7 = (longlong *)(lVar5 + 8);
    if (plVar7 == (longlong *)0x0) goto LAB_1415bb44c;
    plVar7 = (longlong *)*plVar7;
    plVar14 = *(longlong **)(lVar5 + 0x10);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      plVar13 = plVar14 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    plVar13 = plVar14;
    if (plVar7 != (longlong *)0x0) goto LAB_1415bb406;
  }
  else {
LAB_1415bb44c:
    plVar14 = (longlong *)0x0;
  }
  plVar8 = (longlong *)FUN_14001cc68(0x110,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a4c1a20;
  plVar7 = plVar8 + 2;
  FUN_146018ff4(plVar7,param_3);
  local_50 = plVar7;
  local_48 = plVar8;
  FUN_146018e94(&local_50,plVar7);
  plVar13 = plVar8;
  if (plVar8 == (longlong *)0x0) {
    if (plVar14 != (longlong *)0x0) {
LAB_1415bb565:
      LOCK();
      plVar2 = plVar14 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar2 = plVar14;
joined_r0x0001415bb5a9:
        plVar13 = plVar8;
        if (iVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      goto LAB_1415bb4bd;
    }
    plVar13 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (plVar8 == plVar14) {
      LOCK();
      plVar2 = plVar8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plVar13 = plVar14;
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar2 = plVar8;
        plVar8 = plVar14;
        goto joined_r0x0001415bb5a9;
      }
    }
    else if (plVar14 != (longlong *)0x0) goto LAB_1415bb565;
LAB_1415bb4bd:
    plVar14 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_48 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
  }
  (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined4 *)(param_1 + 8),param_4);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_60 = plVar7;
  local_58 = plVar13;
  FUN_146018f36(param_4,*(undefined4 *)(param_1 + 8),&local_60);
LAB_1415bb406:
  *param_2 = (longlong)plVar7;
  param_2[1] = (longlong)plVar13;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar13 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415bb5ee FUN_1415bb5ee body=545 status=ok
// SIG undefined FUN_1415bb5ee(void)

void FUN_1415bb5ee(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x70));
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
    uVar15 = 1;
    uVar14 = 0;
    iVar9 = 0;
    iVar11 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x30);
    }
    uVar5 = *puVar4;
    if (uVar5 == 0) {
      iVar9 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar9 = iVar1 + -1;
      }
      uVar14 = 0;
      uVar6 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar6 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar6 == uVar14) goto LAB_1415bb6a2;
        iVar9 = iVar9 + 0x20;
        uVar5 = puVar4[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar15 = (ulonglong)(-uVar5 & uVar5);
    uVar6 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar11) {
      iVar11 = iVar1;
    }
  }
  if (iVar11 != iVar1) {
    uVar5 = 0xffffffff;
    do {
      plVar3 = *(longlong **)
                (*(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + (longlong)iVar11 * 0x20) + 0x10);
      (**(code **)(*plVar3 + 0x40))(plVar3,1);
      uVar5 = ~(uint)uVar15 & uVar5;
      puVar4 = *(uint **)(param_1 + 0x40);
      if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0x30);
      }
      iVar2 = *(int *)(param_1 + 0x48);
      iVar11 = (int)uVar14;
      lVar12 = (longlong)iVar11;
      uVar10 = puVar4[lVar12] & uVar5;
      if (uVar10 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar11) {
          iVar8 = iVar11;
        }
        if (iVar11 < iVar7) {
          lVar13 = 0;
          do {
            uVar10 = puVar4[lVar12 + lVar13 + 1];
            if (uVar10 != 0) {
              uVar14 = (ulonglong)(iVar11 + (int)lVar13 + 1);
              uVar5 = 0xffffffff;
              goto LAB_1415bb7ab;
            }
            iVar9 = iVar9 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar8 - lVar12 != lVar13);
          uVar5 = 0xffffffff;
          iVar11 = iVar8;
        }
        uVar14 = (ulonglong)(iVar11 + 1);
        iVar11 = iVar2;
      }
      else {
LAB_1415bb7ab:
        uVar15 = (ulonglong)(-uVar10 & uVar10);
        uVar6 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar11 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar11) {
          iVar11 = iVar2;
        }
      }
    } while (iVar11 != iVar1);
  }
LAB_1415bb6a2:
  FUN_14615096c(param_1 + 0x20);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x70));
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x88));
  iVar1 = *(int *)(param_1 + 0x84);
  FUN_141525aa6(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  *(undefined4 *)(param_1 + 0x80) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x84) != 0)) {
    FUN_1489da594(param_1 + 0x78);
  }
                    /* WARNING: Could not recover jumptable at 0x0001415bb708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x88));
  return;
}



// FUNCTION 1415bb810 FUN_1415bb810 body=553 status=ok
// SIG undefined FUN_1415bb810(void)

void FUN_1415bb810(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x88;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x84 + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x80 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_1415bb9f0;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_1415bb9f0:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415bba3a FUN_1415bba3a body=715 status=ok
// SIG undefined FUN_1415bba3a(void)

void FUN_1415bba3a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  int iVar5;
  uint *puVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint uVar19;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar12 = 1;
    uVar18 = 0;
    iVar14 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 2);
    }
    uVar19 = *puVar6;
    if (uVar19 == 0) {
      iVar14 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar14 = iVar3 + -1;
      }
      uVar18 = 0;
      uVar11 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar11 = uVar18;
      }
      iVar14 = 0;
      do {
        if (uVar11 == uVar18) goto LAB_1415bbae3;
        iVar14 = iVar14 + 0x20;
        uVar19 = puVar6[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar18 = 0;
      iVar14 = 0;
    }
    uVar12 = (ulonglong)(-uVar19 & uVar19);
    uVar11 = uVar12 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar10 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar10) {
      iVar10 = iVar3;
    }
  }
  if (iVar10 != iVar3) {
    uVar19 = 0xffffffff;
    iVar5 = iVar3;
    do {
      lVar15 = *(longlong *)(*param_1 + 8 + (longlong)iVar10 * 0x20);
      if (lVar15 != 0) {
        plVar17 = (longlong *)(*param_1 + (longlong)iVar10 * 0x20 + 8);
        plVar13 = *(longlong **)(lVar15 + 0x30);
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x118))();
          lpCriticalSection =
               (LPCRITICAL_SECTION)(**(code **)(**(longlong **)(*plVar17 + 0x30) + 0xf0))();
          EnterCriticalSection(lpCriticalSection);
          p_Var4 = lpCriticalSection[1].DebugInfo;
          if (p_Var4 != (PRTL_CRITICAL_SECTION_DEBUG)0x0 && lpCriticalSection[1].LockCount != 0) {
            (*(code *)**(undefined8 **)p_Var4)(p_Var4,0);
            FUN_1446efa72(lpCriticalSection + 1,0,0,0x10);
            lpCriticalSection[1].LockCount = 0;
          }
          if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
            LeaveCriticalSection(lpCriticalSection);
          }
          lVar15 = *plVar17;
          *(undefined8 *)(lVar15 + 0x30) = 0;
          plVar13 = *(longlong **)(lVar15 + 0x38);
          if (plVar13 != (longlong *)0x0) {
            *(undefined8 *)(lVar15 + 0x38) = 0;
            LOCK();
            plVar1 = plVar13 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
        }
        (**(code **)(**(longlong **)(*plVar17 + 0x20) + 0x40))(*(longlong **)(*plVar17 + 0x20),1);
        iVar5 = (int)param_1[5];
      }
      uVar19 = uVar19 & ~(uint)uVar12;
      puVar6 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 2);
      }
      iVar10 = (int)uVar18;
      lVar15 = (longlong)iVar10;
      uVar7 = puVar6[lVar15] & uVar19;
      if (uVar7 == 0) {
        iVar8 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar8 = iVar5 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar10) {
          iVar9 = iVar10;
        }
        if (iVar10 < iVar8) {
          lVar16 = 0;
          do {
            uVar7 = puVar6[lVar15 + lVar16 + 1];
            if (uVar7 != 0) {
              uVar18 = (ulonglong)(iVar10 + (int)lVar16 + 1);
              uVar19 = 0xffffffff;
              goto LAB_1415bbcba;
            }
            iVar14 = iVar14 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar9 - lVar15 != lVar16);
          uVar19 = 0xffffffff;
          iVar10 = iVar9;
        }
        uVar18 = (ulonglong)(iVar10 + 1);
        iVar10 = iVar5;
      }
      else {
LAB_1415bbcba:
        uVar12 = (ulonglong)(-uVar7 & uVar7);
        uVar11 = uVar12 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar10 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar10) {
          iVar10 = iVar5;
        }
      }
    } while (iVar10 != iVar3);
  }
LAB_1415bbae3:
  FUN_1461507dc(param_1);
  for (plVar13 = (longlong *)param_1[0xb]; plVar13 != (longlong *)0x0;
      plVar13 = (longlong *)plVar13[2]) {
    if (*plVar13 != 0) {
      plVar17 = *(longlong **)(*plVar13 + 0x20);
      (**(code **)(*plVar17 + 0x40))(plVar17,1);
    }
  }
  FUN_145cbf3c6(param_1 + 10);
                    /* WARNING: Could not recover jumptable at 0x0001415bbb32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  return;
}



// FUNCTION 1415bbd06 FUN_1415bbd06 body=94 status=ok
// SIG undefined FUN_1415bbd06(void)

void FUN_1415bbd06(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = &local_28;
  local_18 = &local_30;
  local_30 = param_3;
  local_28 = param_2;
  FUN_140e9bc46(param_1 + 0x218,local_c,&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415bbd66 FUN_1415bbd66 body=1075 status=ok
// SIG undefined FUN_1415bbd66(void)

void FUN_1415bbd66(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149eeb4d0;
  param_1[0x154] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x168];
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
  param_1[0x13e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x152];
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
  param_1[0x128] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x13c];
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
  param_1[0x112] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x126];
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
  param_1[0xfc] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x110];
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
  param_1[0xe0] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xf4];
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
  param_1[0xca] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xde];
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
  param_1[0xb4] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[200];
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
  param_1[0x9e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0xb2];
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
  param_1[0x88] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x9c];
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
  param_1[0x72] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x86];
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
  param_1[0x5a] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x6e];
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
  param_1[0x44] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x58];
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
  param_1[0x2e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x42];
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
  param_1[0x18] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x2c];
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
  param_1[2] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x16];
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
                    /* WARNING: Could not recover jumptable at 0x0001415bc195. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1415bc19a FUN_1415bc19a body=257 status=ok
// SIG undefined FUN_1415bc19a(void)

void FUN_1415bc19a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0xb60,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eeb7f0;
  FUN_1415bc658(plVar4 + 2,param_3);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40 = &local_48;
  local_38 = &local_58;
  local_58 = plVar4 + 2;
  local_50 = plVar4;
  FUN_141030890(param_1 + 0x30,local_2c,&local_40,0);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415bc29c FUN_1415bc29c body=439 status=ok
// SIG undefined FUN_1415bc29c(void)

void FUN_1415bc29c(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined4 uVar2;
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
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  longlong **local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_2;
  plVar13 = (longlong *)FUN_14001cc68(0xd0,0x10);
  plVar13[1] = (longlong)&DAT_100000001;
  *plVar13 = (longlong)&PTR_FUN_149eeb7d0;
  plVar13[2] = (longlong)&PTR_FUN_149eeb4b0;
  plVar13[4] = (longlong)&PTR_FUN_149ed05f0;
  uVar2 = *(undefined4 *)(param_3 + 0x1c);
  uVar3 = *(undefined4 *)(param_3 + 0x20);
  uVar4 = *(undefined4 *)(param_3 + 0x24);
  uVar5 = *(undefined4 *)(param_3 + 0x28);
  uVar6 = *(undefined4 *)(param_3 + 0x2c);
  uVar7 = *(undefined4 *)(param_3 + 0x30);
  uVar8 = *(undefined4 *)(param_3 + 0x34);
  uVar9 = *(undefined4 *)(param_3 + 0x38);
  uVar10 = *(undefined4 *)(param_3 + 0x3c);
  uVar11 = *(undefined4 *)(param_3 + 0x40);
  uVar12 = *(undefined4 *)(param_3 + 0x44);
  *(undefined4 *)(plVar13 + 5) = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)((longlong)plVar13 + 0x2c) = uVar2;
  *(undefined4 *)(plVar13 + 6) = uVar3;
  *(undefined4 *)((longlong)plVar13 + 0x34) = uVar4;
  *(undefined4 *)(plVar13 + 7) = uVar5;
  *(undefined4 *)((longlong)plVar13 + 0x3c) = uVar6;
  *(undefined4 *)(plVar13 + 8) = uVar7;
  *(undefined4 *)((longlong)plVar13 + 0x44) = uVar8;
  *(undefined4 *)(plVar13 + 9) = uVar9;
  *(undefined4 *)((longlong)plVar13 + 0x4c) = uVar10;
  *(undefined4 *)(plVar13 + 10) = uVar11;
  *(undefined4 *)((longlong)plVar13 + 0x54) = uVar12;
  lVar14 = *(longlong *)(param_3 + 0x48);
  plVar13[0xb] = lVar14;
  if ((lVar14 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_60 = plVar13 + 2;
  plVar15 = (longlong *)(param_3 + 0x50);
  plVar16 = plVar13 + 0xc;
  for (lVar14 = 10; lVar14 != 0; lVar14 = lVar14 + -1) {
    *plVar16 = *plVar15;
    plVar15 = plVar15 + 1;
    plVar16 = plVar16 + 1;
  }
  *(undefined1 *)((longlong)plVar13 + 0xb4) = *(undefined1 *)(param_3 + 0xa4);
  *(undefined4 *)(plVar13 + 0x16) = *(undefined4 *)(param_3 + 0xa0);
  plVar13[0x17] = *(longlong *)(param_3 + 0xa8);
  lVar14 = *(longlong *)(param_3 + 0xb0);
  plVar13[0x18] = lVar14;
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  plVar13[0x19] = *(longlong *)(param_3 + 0xb8);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_48 = &local_50;
  local_40 = &local_60;
  local_58 = plVar13;
  FUN_141030890(param_1 + 0x30,local_34,&local_48,0);
  plVar15 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_58 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar13 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415bc454 FUN_1415bc454 body=257 status=ok
// SIG undefined FUN_1415bc454(void)

void FUN_1415bc454(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x650,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eeb810;
  FUN_1457b6a3e(plVar4 + 2,param_3);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40 = &local_48;
  local_38 = &local_58;
  local_58 = plVar4 + 2;
  local_50 = plVar4;
  FUN_141030890(param_1 + 0x30,local_2c,&local_40,0);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415bc556 FUN_1415bc556 body=257 status=ok
// SIG undefined FUN_1415bc556(void)

void FUN_1415bc556(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0xfb0,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149eeb830;
  FUN_1457b6974(plVar4 + 2,param_3);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_40 = &local_48;
  local_38 = &local_58;
  local_58 = plVar4 + 2;
  local_50 = plVar4;
  FUN_141030890(param_1 + 0x30,local_2c,&local_40,0);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415bc658 FUN_1415bc658 body=3304 status=ok
// SIG undefined FUN_1415bc658(void)

undefined8 * FUN_1415bc658(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  *param_1 = &PTR_FUN_149eeb4d0;
  param_1[2] = &PTR_FUN_149ed05f0;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  uVar8 = *(undefined4 *)(param_2 + 0x38);
  uVar9 = *(undefined4 *)(param_2 + 0x3c);
  uVar10 = *(undefined4 *)(param_2 + 0x40);
  uVar11 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 6) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 7) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar9;
  *(undefined4 *)(param_1 + 8) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar11;
  lVar15 = *(longlong *)(param_2 + 0x48);
  param_1[9] = lVar15;
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar16 = (undefined8 *)(param_2 + 0x50);
  puVar17 = param_1 + 10;
  for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0xa4) = *(undefined1 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
  param_1[0x15] = *(undefined8 *)(param_2 + 0xa8);
  lVar15 = *(longlong *)(param_2 + 0xb0);
  param_1[0x16] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  param_1[0x17] = *(undefined8 *)(param_2 + 0xb8);
  param_1[0x18] = &PTR_FUN_149ed05f0;
  uVar1 = *(undefined4 *)(param_2 + 0xcc);
  uVar2 = *(undefined4 *)(param_2 + 0xd0);
  uVar3 = *(undefined4 *)(param_2 + 0xd4);
  uVar4 = *(undefined4 *)(param_2 + 0xd8);
  uVar5 = *(undefined4 *)(param_2 + 0xdc);
  uVar6 = *(undefined4 *)(param_2 + 0xe0);
  uVar7 = *(undefined4 *)(param_2 + 0xe4);
  uVar8 = *(undefined4 *)(param_2 + 0xe8);
  uVar9 = *(undefined4 *)(param_2 + 0xec);
  uVar10 = *(undefined4 *)(param_2 + 0xf0);
  uVar11 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 200);
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar1;
  *(undefined4 *)(param_1 + 0x1a) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar3;
  *(undefined4 *)(param_1 + 0x1b) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar5;
  *(undefined4 *)(param_1 + 0x1c) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar7;
  *(undefined4 *)(param_1 + 0x1d) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar9;
  *(undefined4 *)(param_1 + 0x1e) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar11;
  lVar15 = *(longlong *)(param_2 + 0xf8);
  param_1[0x1f] = lVar15;
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar16 = (undefined8 *)(param_2 + 0x100);
  puVar17 = param_1 + 0x20;
  for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x154) = *(undefined1 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x150);
  param_1[0x2b] = *(undefined8 *)(param_2 + 0x158);
  lVar15 = *(longlong *)(param_2 + 0x160);
  param_1[0x2c] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  param_1[0x2d] = *(undefined8 *)(param_2 + 0x168);
  param_1[0x2e] = &PTR_FUN_149ed05f0;
  uVar1 = *(undefined4 *)(param_2 + 0x17c);
  uVar2 = *(undefined4 *)(param_2 + 0x180);
  uVar3 = *(undefined4 *)(param_2 + 0x184);
  uVar4 = *(undefined4 *)(param_2 + 0x188);
  uVar5 = *(undefined4 *)(param_2 + 0x18c);
  uVar6 = *(undefined4 *)(param_2 + 400);
  uVar7 = *(undefined4 *)(param_2 + 0x194);
  uVar8 = *(undefined4 *)(param_2 + 0x198);
  uVar9 = *(undefined4 *)(param_2 + 0x19c);
  uVar10 = *(undefined4 *)(param_2 + 0x1a0);
  uVar11 = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)((longlong)param_1 + 0x17c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x184) = uVar3;
  *(undefined4 *)(param_1 + 0x31) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x18c) = uVar5;
  *(undefined4 *)(param_1 + 0x32) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x194) = uVar7;
  *(undefined4 *)(param_1 + 0x33) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x19c) = uVar9;
  *(undefined4 *)(param_1 + 0x34) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar11;
  lVar15 = *(longlong *)(param_2 + 0x1a8);
  param_1[0x35] = lVar15;
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar16 = (undefined8 *)(param_2 + 0x1b0);
  puVar17 = param_1 + 0x36;
  for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x204) = *(undefined1 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x200);
  param_1[0x41] = *(undefined8 *)(param_2 + 0x208);
  lVar15 = *(longlong *)(param_2 + 0x210);
  param_1[0x42] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  param_1[0x43] = *(undefined8 *)(param_2 + 0x218);
  param_1[0x44] = &PTR_FUN_149ed05f0;
  uVar1 = *(undefined4 *)(param_2 + 0x22c);
  uVar2 = *(undefined4 *)(param_2 + 0x230);
  uVar3 = *(undefined4 *)(param_2 + 0x234);
  uVar4 = *(undefined4 *)(param_2 + 0x238);
  uVar5 = *(undefined4 *)(param_2 + 0x23c);
  uVar6 = *(undefined4 *)(param_2 + 0x240);
  uVar7 = *(undefined4 *)(param_2 + 0x244);
  uVar8 = *(undefined4 *)(param_2 + 0x248);
  uVar9 = *(undefined4 *)(param_2 + 0x24c);
  uVar10 = *(undefined4 *)(param_2 + 0x250);
  uVar11 = *(undefined4 *)(param_2 + 0x254);
  *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(param_2 + 0x228);
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar1;
  *(undefined4 *)(param_1 + 0x46) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x234) = uVar3;
  *(undefined4 *)(param_1 + 0x47) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x23c) = uVar5;
  *(undefined4 *)(param_1 + 0x48) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x244) = uVar7;
  *(undefined4 *)(param_1 + 0x49) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x24c) = uVar9;
  *(undefined4 *)(param_1 + 0x4a) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x254) = uVar11;
  lVar15 = *(longlong *)(param_2 + 600);
  param_1[0x4b] = lVar15;
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar16 = (undefined8 *)(param_2 + 0x260);
  puVar17 = param_1 + 0x4c;
  for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x2b4) = *(undefined1 *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)(param_2 + 0x2b0);
  param_1[0x57] = *(undefined8 *)(param_2 + 0x2b8);
  lVar15 = *(longlong *)(param_2 + 0x2c0);
  param_1[0x58] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  param_1[0x59] = *(undefined8 *)(param_2 + 0x2c8);
  param_1[0x5a] = &PTR_FUN_149ed05f0;
  uVar1 = *(undefined4 *)(param_2 + 0x2dc);
  uVar2 = *(undefined4 *)(param_2 + 0x2e0);
  uVar3 = *(undefined4 *)(param_2 + 0x2e4);
  uVar4 = *(undefined4 *)(param_2 + 0x2e8);
  uVar5 = *(undefined4 *)(param_2 + 0x2ec);
  uVar6 = *(undefined4 *)(param_2 + 0x2f0);
  uVar7 = *(undefined4 *)(param_2 + 0x2f4);
  uVar8 = *(undefined4 *)(param_2 + 0x2f8);
  uVar9 = *(undefined4 *)(param_2 + 0x2fc);
  uVar10 = *(undefined4 *)(param_2 + 0x300);
  uVar11 = *(undefined4 *)(param_2 + 0x304);
  *(undefined4 *)(param_1 + 0x5b) = *(undefined4 *)(param_2 + 0x2d8);
  *(undefined4 *)((longlong)param_1 + 0x2dc) = uVar1;
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = uVar3;
  *(undefined4 *)(param_1 + 0x5d) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = uVar5;
  *(undefined4 *)(param_1 + 0x5e) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = uVar7;
  *(undefined4 *)(param_1 + 0x5f) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = uVar9;
  *(undefined4 *)(param_1 + 0x60) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x304) = uVar11;
  lVar15 = *(longlong *)(param_2 + 0x308);
  param_1[0x61] = lVar15;
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar16 = (undefined8 *)(param_2 + 0x310);
  puVar17 = param_1 + 0x62;
  for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x364) = *(undefined1 *)(param_2 + 0x364);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x360);
  param_1[0x6d] = *(undefined8 *)(param_2 + 0x368);
  lVar15 = *(longlong *)(param_2 + 0x370);
  param_1[0x6e] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  param_1[0x6f] = *(undefined8 *)(param_2 + 0x378);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x380);
  param_1[0x72] = &PTR_FUN_149ed05f0;
  uVar1 = *(undefined4 *)(param_2 + 0x39c);
  uVar2 = *(undefined4 *)(param_2 + 0x3a0);
  uVar3 = *(undefined4 *)(param_2 + 0x3a4);
  uVar4 = *(undefined4 *)(param_2 + 0x3a8);
  uVar5 = *(undefined4 *)(param_2 + 0x3ac);
  uVar6 = *(undefined4 *)(param_2 + 0x3b0);
  uVar7 = *(undefined4 *)(param_2 + 0x3b4);
  uVar8 = *(undefined4 *)(param_2 + 0x3b8);
  uVar9 = *(undefined4 *)(param_2 + 0x3bc);
  uVar10 = *(undefined4 *)(param_2 + 0x3c0);
  uVar11 = *(undefined4 *)(param_2 + 0x3c4);
  *(undefined4 *)(param_1 + 0x73) = *(undefined4 *)(param_2 + 0x398);
  *(undefined4 *)((longlong)param_1 + 0x39c) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = uVar3;
  *(undefined4 *)(param_1 + 0x75) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = uVar5;
  *(undefined4 *)(param_1 + 0x76) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = uVar7;
  *(undefined4 *)(param_1 + 0x77) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = uVar9;
  *(undefined4 *)(param_1 + 0x78) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = uVar11;
  lVar15 = *(longlong *)(param_2 + 0x3c8);
  param_1[0x79] = lVar15;
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar16 = (undefined8 *)(param_2 + 0x3d0);
  puVar17 = param_1 + 0x7a;
  for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x424) = *(undefined1 *)(param_2 + 0x424);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x420);
  param_1[0x85] = *(undefined8 *)(param_2 + 0x428);
  lVar15 = *(longlong *)(param_2 + 0x430);
  param_1[0x86] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  param_1[0x87] = *(undefined8 *)(param_2 + 0x438);
  param_1[0x88] = &PTR_FUN_149ed05f0;
  uVar1 = *(undefined4 *)(param_2 + 0x44c);
  uVar2 = *(undefined4 *)(param_2 + 0x450);
  uVar3 = *(undefined4 *)(param_2 + 0x454);
  uVar4 = *(undefined4 *)(param_2 + 0x458);
  uVar5 = *(undefined4 *)(param_2 + 0x45c);
  uVar6 = *(undefined4 *)(param_2 + 0x460);
  uVar7 = *(undefined4 *)(param_2 + 0x464);
  uVar8 = *(undefined4 *)(param_2 + 0x468);
  uVar9 = *(undefined4 *)(param_2 + 0x46c);
  uVar10 = *(undefined4 *)(param_2 + 0x470);
  uVar11 = *(undefined4 *)(param_2 + 0x474);
  *(undefined4 *)(param_1 + 0x89) = *(undefined4 *)(param_2 + 0x448);
  *(undefined4 *)((longlong)param_1 + 0x44c) = uVar1;
  *(undefined4 *)(param_1 + 0x8a) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x454) = uVar3;
  *(undefined4 *)(param_1 + 0x8b) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x45c) = uVar5;
  *(undefined4 *)(param_1 + 0x8c) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x464) = uVar7;
  *(undefined4 *)(param_1 + 0x8d) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x46c) = uVar9;
  *(undefined4 *)(param_1 + 0x8e) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x474) = uVar11;
  lVar15 = *(longlong *)(param_2 + 0x478);
  param_1[0x8f] = lVar15;
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar16 = (undefined8 *)(param_2 + 0x480);
  puVar17 = param_1 + 0x90;
  for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x4d4) = *(undefined1 *)(param_2 + 0x4d4);
  *(undefined4 *)(param_1 + 0x9a) = *(undefined4 *)(param_2 + 0x4d0);
  param_1[0x9b] = *(undefined8 *)(param_2 + 0x4d8);
  lVar15 = *(longlong *)(param_2 + 0x4e0);
  param_1[0x9c] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  param_1[0x9d] = *(undefined8 *)(param_2 + 0x4e8);
  param_1[0x9e] = &PTR_FUN_149ed05f0;
  uVar1 = *(undefined4 *)(param_2 + 0x4fc);
  uVar2 = *(undefined4 *)(param_2 + 0x500);
  uVar3 = *(undefined4 *)(param_2 + 0x504);
  uVar4 = *(undefined4 *)(param_2 + 0x508);
  uVar5 = *(undefined4 *)(param_2 + 0x50c);
  uVar6 = *(undefined4 *)(param_2 + 0x510);
  uVar7 = *(undefined4 *)(param_2 + 0x514);
  uVar8 = *(undefined4 *)(param_2 + 0x518);
  uVar9 = *(undefined4 *)(param_2 + 0x51c);
  uVar10 = *(undefined4 *)(param_2 + 0x520);
  uVar11 = *(undefined4 *)(param_2 + 0x524);
  *(undefined4 *)(param_1 + 0x9f) = *(undefined4 *)(param_2 + 0x4f8);
  *(undefined4 *)((longlong)param_1 + 0x4fc) = uVar1;
  *(undefined4 *)(param_1 + 0xa0) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x504) = uVar3;
  *(undefined4 *)(param_1 + 0xa1) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x50c) = uVar5;
  *(undefined4 *)(param_1 + 0xa2) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x514) = uVar7;
  *(undefined4 *)(param_1 + 0xa3) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x51c) = uVar9;
  *(undefined4 *)(param_1 + 0xa4) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x524) = uVar11;
  lVar15 = *(longlong *)(param_2 + 0x528);
  param_1[0xa5] = lVar15;
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar16 = (undefined8 *)(param_2 + 0x530);
  puVar17 = param_1 + 0xa6;
  for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x584) = *(undefined1 *)(param_2 + 0x584);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0x580);
  param_1[0xb1] = *(undefined8 *)(param_2 + 0x588);
  lVar15 = *(longlong *)(param_2 + 0x590);
  param_1[0xb2] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  param_1[0xb3] = *(undefined8 *)(param_2 + 0x598);
  param_1[0xb4] = &PTR_FUN_149ed05f0;
  uVar1 = *(undefined4 *)(param_2 + 0x5ac);
  uVar2 = *(undefined4 *)(param_2 + 0x5b0);
  uVar3 = *(undefined4 *)(param_2 + 0x5b4);
  uVar4 = *(undefined4 *)(param_2 + 0x5b8);
  uVar5 = *(undefined4 *)(param_2 + 0x5bc);
  uVar6 = *(undefined4 *)(param_2 + 0x5c0);
  uVar7 = *(undefined4 *)(param_2 + 0x5c4);
  uVar8 = *(undefined4 *)(param_2 + 0x5c8);
  uVar9 = *(undefined4 *)(param_2 + 0x5cc);
  uVar10 = *(undefined4 *)(param_2 + 0x5d0);
  uVar11 = *(undefined4 *)(param_2 + 0x5d4);
  *(undefined4 *)(param_1 + 0xb5) = *(undefined4 *)(param_2 + 0x5a8);
  *(undefined4 *)((longlong)param_1 + 0x5ac) = uVar1;
  *(undefined4 *)(param_1 + 0xb6) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x5b4) = uVar3;
  *(undefined4 *)(param_1 + 0xb7) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x5bc) = uVar5;
  *(undefined4 *)(param_1 + 0xb8) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x5c4) = uVar7;
  *(undefined4 *)(param_1 + 0xb9) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x5cc) = uVar9;
  *(undefined4 *)(param_1 + 0xba) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x5d4) = uVar11;
  lVar15 = *(longlong *)(param_2 + 0x5d8);
  param_1[0xbb] = lVar15;
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar16 = (undefined8 *)(param_2 + 0x5e0);
  puVar17 = param_1 + 0xbc;
  for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x634) = *(undefined1 *)(param_2 + 0x634);
  *(undefined4 *)(param_1 + 0xc6) = *(undefined4 *)(param_2 + 0x630);
  param_1[199] = *(undefined8 *)(param_2 + 0x638);
  lVar15 = *(longlong *)(param_2 + 0x640);
  param_1[200] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  param_1[0xc9] = *(undefined8 *)(param_2 + 0x648);
  param_1[0xca] = &PTR_FUN_149ed05f0;
  uVar1 = *(undefined4 *)(param_2 + 0x65c);
  uVar2 = *(undefined4 *)(param_2 + 0x660);
  uVar3 = *(undefined4 *)(param_2 + 0x664);
  uVar4 = *(undefined4 *)(param_2 + 0x668);
  uVar5 = *(undefined4 *)(param_2 + 0x66c);
  uVar6 = *(undefined4 *)(param_2 + 0x670);
  uVar7 = *(undefined4 *)(param_2 + 0x674);
  uVar8 = *(undefined4 *)(param_2 + 0x678);
  uVar9 = *(undefined4 *)(param_2 + 0x67c);
  uVar10 = *(undefined4 *)(param_2 + 0x680);
  uVar11 = *(undefined4 *)(param_2 + 0x684);
  *(undefined4 *)(param_1 + 0xcb) = *(undefined4 *)(param_2 + 0x658);
  *(undefined4 *)((longlong)param_1 + 0x65c) = uVar1;
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x664) = uVar3;
  *(undefined4 *)(param_1 + 0xcd) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x66c) = uVar5;
  *(undefined4 *)(param_1 + 0xce) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x674) = uVar7;
  *(undefined4 *)(param_1 + 0xcf) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x67c) = uVar9;
  *(undefined4 *)(param_1 + 0xd0) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x684) = uVar11;
  lVar15 = *(longlong *)(param_2 + 0x688);
  param_1[0xd1] = lVar15;
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar16 = (undefined8 *)(param_2 + 0x690);
  puVar17 = param_1 + 0xd2;
  for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x6e4) = *(undefined1 *)(param_2 + 0x6e4);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0x6e0);
  param_1[0xdd] = *(undefined8 *)(param_2 + 0x6e8);
  lVar15 = *(longlong *)(param_2 + 0x6f0);
  param_1[0xde] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  param_1[0xdf] = *(undefined8 *)(param_2 + 0x6f8);
  param_1[0xe0] = &PTR_FUN_149ed05f0;
  uVar1 = *(undefined4 *)(param_2 + 0x70c);
  uVar2 = *(undefined4 *)(param_2 + 0x710);
  uVar3 = *(undefined4 *)(param_2 + 0x714);
  uVar4 = *(undefined4 *)(param_2 + 0x718);
  uVar5 = *(undefined4 *)(param_2 + 0x71c);
  uVar6 = *(undefined4 *)(param_2 + 0x720);
  uVar7 = *(undefined4 *)(param_2 + 0x724);
  uVar8 = *(undefined4 *)(param_2 + 0x728);
  uVar9 = *(undefined4 *)(param_2 + 0x72c);
  uVar10 = *(undefined4 *)(param_2 + 0x730);
  uVar11 = *(undefined4 *)(param_2 + 0x734);
  *(undefined4 *)(param_1 + 0xe1) = *(undefined4 *)(param_2 + 0x708);
  *(undefined4 *)((longlong)param_1 + 0x70c) = uVar1;
  *(undefined4 *)(param_1 + 0xe2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x714) = uVar3;
  *(undefined4 *)(param_1 + 0xe3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x71c) = uVar5;
  *(undefined4 *)(param_1 + 0xe4) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x724) = uVar7;
  *(undefined4 *)(param_1 + 0xe5) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x72c) = uVar9;
  *(undefined4 *)(param_1 + 0xe6) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x734) = uVar11;
  lVar15 = *(longlong *)(param_2 + 0x738);
  param_1[0xe7] = lVar15;
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar16 = (undefined8 *)(param_2 + 0x740);
  puVar17 = param_1 + 0xe8;
  for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x794) = *(undefined1 *)(param_2 + 0x794);
  *(undefined4 *)(param_1 + 0xf2) = *(undefined4 *)(param_2 + 0x790);
  param_1[0xf3] = *(undefined8 *)(param_2 + 0x798);
  lVar15 = *(longlong *)(param_2 + 0x7a0);
  param_1[0xf4] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  param_1[0xf5] = *(undefined8 *)(param_2 + 0x7a8);
  uVar12 = *(undefined8 *)(param_2 + 0x7b8);
  uVar13 = *(undefined8 *)(param_2 + 0x7c0);
  uVar14 = *(undefined8 *)(param_2 + 0x7c8);
  param_1[0xf6] = *(undefined8 *)(param_2 + 0x7b0);
  param_1[0xf7] = uVar12;
  param_1[0xf8] = uVar13;
  param_1[0xf9] = uVar14;
  param_1[0xfa] = *(undefined8 *)(param_2 + 2000);
  param_1[0xfc] = &PTR_FUN_149ed05f0;
  uVar1 = *(undefined4 *)(param_2 + 0x7ec);
  uVar2 = *(undefined4 *)(param_2 + 0x7f0);
  uVar3 = *(undefined4 *)(param_2 + 0x7f4);
  uVar4 = *(undefined4 *)(param_2 + 0x7f8);
  uVar5 = *(undefined4 *)(param_2 + 0x7fc);
  uVar6 = *(undefined4 *)(param_2 + 0x800);
  uVar7 = *(undefined4 *)(param_2 + 0x804);
  uVar8 = *(undefined4 *)(param_2 + 0x808);
  uVar9 = *(undefined4 *)(param_2 + 0x80c);
  uVar10 = *(undefined4 *)(param_2 + 0x810);
  uVar11 = *(undefined4 *)(param_2 + 0x814);
  *(undefined4 *)(param_1 + 0xfd) = *(undefined4 *)(param_2 + 0x7e8);
  *(undefined4 *)((longlong)param_1 + 0x7ec) = uVar1;
  *(undefined4 *)(param_1 + 0xfe) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x7f4) = uVar3;
  *(undefined4 *)(param_1 + 0xff) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x7fc) = uVar5;
  *(undefined4 *)(param_1 + 0x100) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x804) = uVar7;
  *(undefined4 *)(param_1 + 0x101) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x80c) = uVar9;
  *(undefined4 *)(param_1 + 0x102) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x814) = uVar11;
  lVar15 = *(longlong *)(param_2 + 0x818);
  param_1[0x103] = lVar15;
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar16 = (undefined8 *)(param_2 + 0x820);
  puVar17 = param_1 + 0x104;
  for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x874) = *(undefined1 *)(param_2 + 0x874);
  *(undefined4 *)(param_1 + 0x10e) = *(undefined4 *)(param_2 + 0x870);
  param_1[0x10f] = *(undefined8 *)(param_2 + 0x878);
  lVar15 = *(longlong *)(param_2 + 0x880);
  param_1[0x110] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  param_1[0x111] = *(undefined8 *)(param_2 + 0x888);
  param_1[0x112] = &PTR_FUN_149ed05f0;
  uVar1 = *(undefined4 *)(param_2 + 0x89c);
  uVar2 = *(undefined4 *)(param_2 + 0x8a0);
  uVar3 = *(undefined4 *)(param_2 + 0x8a4);
  uVar4 = *(undefined4 *)(param_2 + 0x8a8);
  uVar5 = *(undefined4 *)(param_2 + 0x8ac);
  uVar6 = *(undefined4 *)(param_2 + 0x8b0);
  uVar7 = *(undefined4 *)(param_2 + 0x8b4);
  uVar8 = *(undefined4 *)(param_2 + 0x8b8);
  uVar9 = *(undefined4 *)(param_2 + 0x8bc);
  uVar10 = *(undefined4 *)(param_2 + 0x8c0);
  uVar11 = *(undefined4 *)(param_2 + 0x8c4);
  *(undefined4 *)(param_1 + 0x113) = *(undefined4 *)(param_2 + 0x898);
  *(undefined4 *)((longlong)param_1 + 0x89c) = uVar1;
  *(undefined4 *)(param_1 + 0x114) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x8a4) = uVar3;
  *(undefined4 *)(param_1 + 0x115) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x8ac) = uVar5;
  *(undefined4 *)(param_1 + 0x116) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x8b4) = uVar7;
  *(undefined4 *)(param_1 + 0x117) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x8bc) = uVar9;
  *(undefined4 *)(param_1 + 0x118) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x8c4) = uVar11;
  lVar15 = *(longlong *)(param_2 + 0x8c8);
  param_1[0x119] = lVar15;
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar16 = (undefined8 *)(param_2 + 0x8d0);
  puVar17 = param_1 + 0x11a;
  for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x924) = *(undefined1 *)(param_2 + 0x924);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x920);
  param_1[0x125] = *(undefined8 *)(param_2 + 0x928);
  lVar15 = *(longlong *)(param_2 + 0x930);
  param_1[0x126] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  param_1[0x127] = *(undefined8 *)(param_2 + 0x938);
  param_1[0x128] = &PTR_FUN_149ed05f0;
  uVar1 = *(undefined4 *)(param_2 + 0x94c);
  uVar2 = *(undefined4 *)(param_2 + 0x950);
  uVar3 = *(undefined4 *)(param_2 + 0x954);
  uVar4 = *(undefined4 *)(param_2 + 0x958);
  uVar5 = *(undefined4 *)(param_2 + 0x95c);
  uVar6 = *(undefined4 *)(param_2 + 0x960);
  uVar7 = *(undefined4 *)(param_2 + 0x964);
  uVar8 = *(undefined4 *)(param_2 + 0x968);
  uVar9 = *(undefined4 *)(param_2 + 0x96c);
  uVar10 = *(undefined4 *)(param_2 + 0x970);
  uVar11 = *(undefined4 *)(param_2 + 0x974);
  *(undefined4 *)(param_1 + 0x129) = *(undefined4 *)(param_2 + 0x948);
  *(undefined4 *)((longlong)param_1 + 0x94c) = uVar1;
  *(undefined4 *)(param_1 + 0x12a) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x954) = uVar3;
  *(undefined4 *)(param_1 + 299) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x95c) = uVar5;
  *(undefined4 *)(param_1 + 300) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x964) = uVar7;
  *(undefined4 *)(param_1 + 0x12d) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x96c) = uVar9;
  *(undefined4 *)(param_1 + 0x12e) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x974) = uVar11;
  lVar15 = *(longlong *)(param_2 + 0x978);
  param_1[0x12f] = lVar15;
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar16 = (undefined8 *)(param_2 + 0x980);
  puVar17 = param_1 + 0x130;
  for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x9d4) = *(undefined1 *)(param_2 + 0x9d4);
  *(undefined4 *)(param_1 + 0x13a) = *(undefined4 *)(param_2 + 0x9d0);
  param_1[0x13b] = *(undefined8 *)(param_2 + 0x9d8);
  lVar15 = *(longlong *)(param_2 + 0x9e0);
  param_1[0x13c] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  param_1[0x13d] = *(undefined8 *)(param_2 + 0x9e8);
  param_1[0x13e] = &PTR_FUN_149ed05f0;
  uVar1 = *(undefined4 *)(param_2 + 0x9fc);
  uVar2 = *(undefined4 *)(param_2 + 0xa00);
  uVar3 = *(undefined4 *)(param_2 + 0xa04);
  uVar4 = *(undefined4 *)(param_2 + 0xa08);
  uVar5 = *(undefined4 *)(param_2 + 0xa0c);
  uVar6 = *(undefined4 *)(param_2 + 0xa10);
  uVar7 = *(undefined4 *)(param_2 + 0xa14);
  uVar8 = *(undefined4 *)(param_2 + 0xa18);
  uVar9 = *(undefined4 *)(param_2 + 0xa1c);
  uVar10 = *(undefined4 *)(param_2 + 0xa20);
  uVar11 = *(undefined4 *)(param_2 + 0xa24);
  *(undefined4 *)(param_1 + 0x13f) = *(undefined4 *)(param_2 + 0x9f8);
  *(undefined4 *)((longlong)param_1 + 0x9fc) = uVar1;
  *(undefined4 *)(param_1 + 0x140) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xa04) = uVar3;
  *(undefined4 *)(param_1 + 0x141) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xa0c) = uVar5;
  *(undefined4 *)(param_1 + 0x142) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xa14) = uVar7;
  *(undefined4 *)(param_1 + 0x143) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0xa1c) = uVar9;
  *(undefined4 *)(param_1 + 0x144) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0xa24) = uVar11;
  lVar15 = *(longlong *)(param_2 + 0xa28);
  param_1[0x145] = lVar15;
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar16 = (undefined8 *)(param_2 + 0xa30);
  puVar17 = param_1 + 0x146;
  for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0xa84) = *(undefined1 *)(param_2 + 0xa84);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0xa80);
  param_1[0x151] = *(undefined8 *)(param_2 + 0xa88);
  lVar15 = *(longlong *)(param_2 + 0xa90);
  param_1[0x152] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  param_1[0x153] = *(undefined8 *)(param_2 + 0xa98);
  param_1[0x154] = &PTR_FUN_149ed05f0;
  uVar1 = *(undefined4 *)(param_2 + 0xaac);
  uVar2 = *(undefined4 *)(param_2 + 0xab0);
  uVar3 = *(undefined4 *)(param_2 + 0xab4);
  uVar4 = *(undefined4 *)(param_2 + 0xab8);
  uVar5 = *(undefined4 *)(param_2 + 0xabc);
  uVar6 = *(undefined4 *)(param_2 + 0xac0);
  uVar7 = *(undefined4 *)(param_2 + 0xac4);
  uVar8 = *(undefined4 *)(param_2 + 0xac8);
  uVar9 = *(undefined4 *)(param_2 + 0xacc);
  uVar10 = *(undefined4 *)(param_2 + 0xad0);
  uVar11 = *(undefined4 *)(param_2 + 0xad4);
  *(undefined4 *)(param_1 + 0x155) = *(undefined4 *)(param_2 + 0xaa8);
  *(undefined4 *)((longlong)param_1 + 0xaac) = uVar1;
  *(undefined4 *)(param_1 + 0x156) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xab4) = uVar3;
  *(undefined4 *)(param_1 + 0x157) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xabc) = uVar5;
  *(undefined4 *)(param_1 + 0x158) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xac4) = uVar7;
  *(undefined4 *)(param_1 + 0x159) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0xacc) = uVar9;
  *(undefined4 *)(param_1 + 0x15a) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0xad4) = uVar11;
  lVar15 = *(longlong *)(param_2 + 0xad8);
  param_1[0x15b] = lVar15;
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar16 = (undefined8 *)(param_2 + 0xae0);
  puVar17 = param_1 + 0x15c;
  for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0xb34) = *(undefined1 *)(param_2 + 0xb34);
  *(undefined4 *)(param_1 + 0x166) = *(undefined4 *)(param_2 + 0xb30);
  param_1[0x167] = *(undefined8 *)(param_2 + 0xb38);
  lVar15 = *(longlong *)(param_2 + 0xb40);
  param_1[0x168] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  param_1[0x169] = *(undefined8 *)(param_2 + 0xb48);
  return param_1;
}



// FUNCTION 1415bd340 FUN_1415bd340 body=21 status=ok
// SIG undefined FUN_1415bd340(void)

longlong FUN_1415bd340(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(char *)(param_1 + 0xcb) != '\0') {
    lVar1 = param_1 + 0xd0;
  }
  return lVar1;
}



// FUNCTION 1415bd356 FUN_1415bd356 body=144 status=ok
// SIG undefined FUN_1415bd356(void)

void FUN_1415bd356(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a9154b0;
  FUN_144880010(param_1,1);
  lVar1 = 0;
  do {
    FUN_14488048e(*(undefined8 *)((longlong)param_1 + lVar1 + 0x4a8),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 0x4b0));
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x4a8) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x360);
  lVar1 = 0x150;
  do {
    FUN_14488048e(*(undefined8 *)((longlong)param_1 + lVar1 + -8),
                  *(undefined4 *)((longlong)param_1 + lVar1));
    if (*(longlong *)((longlong)param_1 + lVar1 + -8) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x30);
                    /* WARNING: Could not recover jumptable at 0x0001415bd3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}



// FUNCTION 1415bd3e6 FUN_1415bd3e6 body=144 status=ok
// SIG undefined FUN_1415bd3e6(void)

void FUN_1415bd3e6(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a9154b8;
  FUN_14487d37c(param_1,1);
  lVar1 = 0;
  do {
    FUN_14487d818(*(undefined8 *)((longlong)param_1 + lVar1 + 0x4a8),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 0x4b0));
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x4a8) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x360);
  lVar1 = 0x150;
  do {
    FUN_14487d818(*(undefined8 *)((longlong)param_1 + lVar1 + -8),
                  *(undefined4 *)((longlong)param_1 + lVar1));
    if (*(longlong *)((longlong)param_1 + lVar1 + -8) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x30);
                    /* WARNING: Could not recover jumptable at 0x0001415bd468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}



// FUNCTION 1415bd476 FUN_1415bd476 body=342 status=ok
// SIG undefined FUN_1415bd476(void)

void FUN_1415bd476(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return;
  }
  bVar1 = *(byte *)(param_2 + 0x152);
  if (bVar1 != 1) {
    if (6 < bVar1) {
      return;
    }
    if ((0x68U >> (bVar1 & 0x1f) & 1) == 0) {
      return;
    }
  }
  if (*(longlong *)(param_2 + 0x30) == 0) {
    return;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0);
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(lVar4 + 0x3f0) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x9c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x98);
    lVar4 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1415bd51d;
    plVar3 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       (((int)plVar3[2] == *(int *)(param_1 + 0x9c) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))
       ) {
      lVar4 = *plVar3;
      goto LAB_1415bd51d;
    }
  }
  lVar4 = 0;
LAB_1415bd51d:
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if (lVar4 != 0) {
      FUN_14480f766(lVar4 + 0x570);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    if (lVar4 != 0) {
      FUN_14480f766(lVar4 + 0x588);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_14480f766(&DAT_14cb10980);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14480f766(&DAT_14cb10a20);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  return;
}



// FUNCTION 1415bd5cc FUN_1415bd5cc body=236 status=ok
// SIG undefined FUN_1415bd5cc(void)

longlong * FUN_1415bd5cc(longlong param_1,longlong *param_2,byte param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  while (((lVar6 = param_1, *(int *)(lVar6 + 0x30c) != 0 &&
          (uVar2 = *(uint *)(lVar6 + 0x308), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))) {
    plVar7 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != *(int *)(lVar6 + 0x30c))) ||
       (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (param_1 = *plVar7, *plVar7 == 0)))) break;
  }
  *param_2 = 0;
  param_2[1] = 0;
  iVar3 = *(int *)(lVar6 + 800);
  if ((longlong)iVar3 != 0) {
    lVar6 = *(longlong *)(lVar6 + 0x318);
    lVar8 = 0;
    do {
      if ((*(byte *)(lVar6 + lVar8) & ~param_3) == 0) {
        iVar4 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_149192788(param_2,iVar4);
        }
        puVar1 = (undefined8 *)(lVar6 + lVar8);
        lVar5 = *param_2;
        *(undefined4 *)(lVar5 + 8 + (longlong)iVar4 * 0xc) = *(undefined4 *)(puVar1 + 1);
        *(undefined8 *)(lVar5 + (longlong)iVar4 * 0xc) = *puVar1;
      }
      lVar8 = lVar8 + 0xc;
    } while ((longlong)iVar3 * 0xc != lVar8);
  }
  return param_2;
}



// FUNCTION 1415bd6c0 FUN_1415bd6c0 body=842 status=ok
// SIG undefined FUN_1415bd6c0(void)

void FUN_1415bd6c0(uint *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_3;
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar6 == 0 ||
          (*(uint *)(lVar6 + 0x10) != param_1[1])))) || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0))
  {
    if (param_2 == 0) {
      *param_1 = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_2 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      uVar3 = *(uint *)(lVar6 + 0x10);
      if (*(uint *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar5 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar5);
        }
        LOCK();
        uVar3 = *(uint *)(lVar6 + 0x10);
        bVar7 = uVar3 == 0;
        if (bVar7) {
          *(uint *)(lVar6 + 0x10) = uVar5;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar7) {
          uVar3 = uVar5;
        }
      }
    }
    param_1[1] = uVar3;
  }
  else {
    FUN_1411db966(param_1);
  }
  FUN_140721fbe(param_1 + 0x26,&local_28);
  if ((int)param_1[0x28] < 2) {
    FUN_140f8b30c(param_1);
  }
  if (((param_1[1] != 0) && (uVar3 = *param_1, -1 < (int)uVar3)) &&
     (((int)uVar3 < DAT_14c9647dc &&
      (((plVar4 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
        plVar4 != (longlong *)0x0 && (*(uint *)(plVar4 + 2) == param_1[1])) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
      lVar6 = *plVar4;
    }
    else {
      lVar6 = 0;
    }
    if (*(char *)(lVar6 + 0x950) == '\0') {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar6 = *plVar4;
      }
      else {
        lVar6 = 0;
      }
      *(undefined1 *)(lVar6 + 0x950) = 1;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8d1f0) && (FUN_144b3d300(&DAT_14cb8d1f0), DAT_14cb8d1f0 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cb8d1e8 =
             (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ScreenPercentage",1);
        _Init_thread_footer(&DAT_14cb8d1f0);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb8d200) && (FUN_144b3d300(&DAT_14cb8d200), DAT_14cb8d200 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cb8d1f8 =
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.gbx.SceneCapture.ScreenPercentageOverride",1);
        _Init_thread_footer(&DAT_14cb8d200);
      }
      lVar6 = DAT_14cb8d1f8;
      uVar2 = DAT_14cb8d1e0;
      if (DAT_14cb8d1f8 != 0 && DAT_14cb8d1e8 != (longlong *)0x0) {
        uVar8 = (**(code **)(*DAT_14cb8d1e8 + 0xb8))();
        FUN_140635f48(lVar6,uVar8,0xd000000,uVar2);
        FUN_140635eb8(DAT_14cb8d1e8,10,0xd000000,DAT_14cb8d1e0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415bda0c FUN_1415bda0c body=164 status=ok
// SIG undefined FUN_1415bda0c(void)

void FUN_1415bda0c(void)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (DAT_14ca9ee30 == (longlong *)0x0) {
    DAT_14ca9ee30 = (longlong *)FUN_14001cc68(0x10,0x10);
    *DAT_14ca9ee30 = 0;
    DAT_14ca9ee30[1] = 0;
  }
  else {
    lVar3 = DAT_14ca9ee30[1];
    if ((longlong)(int)lVar3 == 0) goto LAB_1415bda50;
    lVar2 = *DAT_14ca9ee30;
    lVar5 = 0;
    do {
      (*(code *)**(undefined8 **)(lVar2 + lVar5))((*(undefined8 **)(lVar2 + lVar5))[1]);
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  if (DAT_14ca9ee30 == (longlong *)0x0) {
    DAT_14ca9ee30 = (longlong *)FUN_14001cc68(0x10,0x10);
    *DAT_14ca9ee30 = 0;
    DAT_14ca9ee30[1] = 0;
    return;
  }
LAB_1415bda50:
  plVar4 = DAT_14ca9ee30;
  piVar1 = (int *)((longlong)DAT_14ca9ee30 + 0xc);
  *(undefined4 *)(DAT_14ca9ee30 + 1) = 0;
  if (*piVar1 == 0) {
    return;
  }
  FUN_14601e9e6(plVar4,0);
  return;
}



// FUNCTION 1415bdab0 FUN_1415bdab0 body=467 status=ok
// SIG undefined FUN_1415bdab0(void)

void FUN_1415bdab0(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar12 = 1;
    local_58._4_4_ = 0;
    uVar10 = 0xffffffff;
    iVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar12 = local_68 >> 0x20;
    uVar10 = (uint)local_58;
    iVar13 = (int)local_68;
  }
  plVar4 = local_60;
  iVar7 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar5 = (longlong)iVar7;
      FUN_144760e21(*(undefined8 *)(lVar11 + 8 + lVar5 * 0x28),
                    *(undefined4 *)(lVar11 + 0x10 + lVar5 * 0x28));
      if (*(longlong *)(lVar11 + 8 + lVar5 * 0x28) != 0) {
        FUN_1400020a8();
      }
      uVar10 = uVar10 & ~(uint)uVar12;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar6 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar10;
      if (uVar6 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar7 <= iVar13) break;
        lVar5 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar5 * 4 + lVar11 * 4 + 4);
          if (uVar6 != 0) break;
          lVar5 = lVar5 + 1;
          if (iVar3 - lVar11 == lVar5) goto LAB_1415bdbdd;
        }
        iVar13 = iVar13 + (int)lVar5 + 1;
        uVar10 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar7 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar2);
  }
LAB_1415bdbdd:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415bdc84 FUN_1415bdc84 body=32 status=ok
// SIG undefined FUN_1415bdc84(void)

void FUN_1415bdc84(longlong *param_1)

{
  longlong lVar1;
  
  if (*param_1 == 0) {
    lVar1 = FUN_140e92164();
    *param_1 = lVar1;
  }
  return;
}



// FUNCTION 1415bdca4 FUN_1415bdca4 body=456 status=ok
// SIG undefined FUN_1415bdca4(void)

undefined8 FUN_1415bdca4(undefined8 param_1)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  size_t sVar3;
  ulonglong *puVar4;
  longlong lVar5;
  wchar_t *_Str;
  int iVar6;
  undefined1 auStack_488 [40];
  wchar_t *local_460;
  int local_458;
  undefined1 *local_450;
  undefined2 *local_448;
  ulonglong *local_440;
  char local_438;
  undefined1 local_430 [1024];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_488;
  local_450 = local_430;
  local_438 = '\0';
  local_440 = &local_30;
  local_448 = (undefined2 *)local_450;
  uVar2 = FUN_140d6afb0();
  FUN_140056680(&local_460,uVar2);
  _Str = local_460;
  if (local_458 == 0) {
    _Str = L"";
  }
  iVar6 = 0;
  if (_Str != (wchar_t *)0x0) {
    sVar3 = wcslen(_Str);
    iVar6 = (int)sVar3;
  }
  lVar5 = (longlong)iVar6;
  if (local_440 <= (ulonglong *)((longlong)local_448 + lVar5 * 2)) {
    FUN_140213274(&local_450,lVar5);
  }
  puVar1 = local_448;
  if (iVar6 != 0) {
    memcpy(local_448,_Str,lVar5 * 2);
    local_448 = (undefined2 *)((longlong)puVar1 + lVar5 * 2);
  }
  if (local_460 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_147372740(&local_450,"Saved/Cooked/");
  if (local_440 <= (ulonglong *)((longlong)local_448 + 0xe)) {
    FUN_140213274(&local_450,7);
  }
  lVar5 = 0;
  do {
    *(short *)((longlong)local_448 + lVar5 * 2) = (short)"Windows"[lVar5];
    lVar5 = lVar5 + 1;
  } while (lVar5 != 7);
  puVar1 = (undefined2 *)((longlong)local_448 + 0xe);
  puVar4 = (ulonglong *)((longlong)local_448 + 0x10);
  local_448 = puVar1;
  if (local_440 <= puVar4) {
    FUN_140213274(&local_450,1);
  }
  *local_448 = 0x2f;
  local_448[1] = 0;
  local_448 = local_448 + 1;
  FUN_140056680(param_1,local_450);
  if (local_438 == '\x01') {
    FUN_1400020a8(local_450);
  }
  if ((local_30 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1415bde6e FUN_1415bde6e body=555 status=ok
// SIG undefined FUN_1415bde6e(void)

longlong * FUN_1415bde6e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = *(longlong *)(param_1 + 0x110);
  if ((lVar8 == 0) || ((*(uint *)(lVar8 + 8) >> 0x1e & 1) != 0)) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  lVar4 = *(longlong *)(param_1 + 0x148);
  if (lVar4 != 0) goto LAB_1415bdeb1;
  plVar5 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b9daf60;
  *(undefined4 *)((longlong)plVar5 + 0x34) = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  *(undefined8 *)((longlong)plVar5 + 0x1c) = 0;
  *(undefined8 *)((longlong)plVar5 + 0x24) = 0;
  uVar2 = *(uint *)(lVar8 + 0xc);
  *(uint *)(plVar5 + 6) = uVar2;
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar8 = 0;
  }
  plVar7 = plVar5 + 2;
  iVar3 = *(int *)(lVar8 + 0x10);
  if (*(int *)(lVar8 + 0x10) == 0) {
    LOCK();
    iVar3 = DAT_14c964868 + 1;
    UNLOCK();
    iVar6 = DAT_14c964868 + 1;
    bVar9 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar3;
    if (bVar9) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar6);
    }
    LOCK();
    iVar3 = *(int *)(lVar8 + 0x10);
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(lVar8 + 0x10) = iVar6;
      iVar3 = 0;
    }
    UNLOCK();
    if (bVar9) {
      iVar3 = iVar6;
    }
  }
  *(int *)((longlong)plVar5 + 0x34) = iVar3;
  plVar5[7] = 0;
  *(undefined8 *)((longlong)plVar5 + 0x3e) = 0;
  local_48 = plVar7;
  local_40 = plVar5;
  FUN_148ef9d2e(&local_48,plVar7);
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x148) = 0x10;
    plVar7 = *(longlong **)(param_1 + 0x150);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x150) = 0;
LAB_1415bdfe3:
      LOCK();
      plVar5 = plVar7 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x0001415be010:
        if (iVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x148) = plVar7;
    plVar7 = *(longlong **)(param_1 + 0x150);
    if (plVar5 == plVar7) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar7 = plVar5;
        goto joined_r0x0001415be010;
      }
    }
    else {
      *(longlong **)(param_1 + 0x150) = plVar5;
      if (plVar7 != (longlong *)0x0) goto LAB_1415bdfe3;
    }
  }
  plVar5 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_40 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x148);
LAB_1415bdeb1:
  *param_2 = lVar4;
  lVar8 = *(longlong *)(param_1 + 0x150);
  param_2[1] = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1415be09a FUN_1415be09a body=465 status=ok
// SIG undefined FUN_1415be09a(void)

undefined8 FUN_1415be09a(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar3 = *param_4;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar4 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_58[2] = lVar5;
  *local_58 = &PTR_FUN_14b9b7240;
  local_58[3] = 0;
  iVar7 = 0;
  if (param_3 != 0) {
    uVar2 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_58 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar7 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar7 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar7 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar6;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar7 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar7;
  puVar4[4] = uVar3;
  *(undefined4 *)(puVar4 + 5) = uVar1;
  FUN_1448b6402(param_1,param_2,&local_58);
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_1415be1d8;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1415be1d8:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1415be26c FUN_1415be26c body=146 status=ok
// SIG undefined FUN_1415be26c(void)

void FUN_1415be26c(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a8cab80;
  FUN_14482dff6(param_1,1);
  lVar1 = 0;
  do {
    FUN_14482e36f(*(undefined8 *)((longlong)param_1 + lVar1 + 0x428),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 0x430));
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x428) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x300);
  lVar1 = 0x130;
  do {
    FUN_14482e36f(*(undefined8 *)((longlong)param_1 + lVar1 + -8),
                  *(undefined4 *)((longlong)param_1 + lVar1));
    if (*(longlong *)((longlong)param_1 + lVar1 + -8) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x30);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}



// FUNCTION 1415be2fe FUN_1415be2fe body=146 status=ok
// SIG undefined FUN_1415be2fe(void)

void FUN_1415be2fe(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a8cabf0;
  FUN_14482f31e(param_1,1);
  lVar1 = 0;
  do {
    FUN_14482f6b7(*(undefined8 *)((longlong)param_1 + lVar1 + 0x428),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 0x430));
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x428) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x300);
  lVar1 = 0x130;
  do {
    FUN_14482f6b7(*(undefined8 *)((longlong)param_1 + lVar1 + -8),
                  *(undefined4 *)((longlong)param_1 + lVar1));
    if (*(longlong *)((longlong)param_1 + lVar1 + -8) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x30);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}



// FUNCTION 1415be390 FUN_1415be390 body=321 status=ok
// SIG undefined FUN_1415be390(void)

void FUN_1415be390(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_2 != 0) && ((byte)(*(char *)(param_1 + 0xb0) - 1U) < 8)) &&
     (iVar2 = FUN_14487fd02(param_2), iVar2 != 3)) {
    if ((longlong)*(int *)(param_1 + 0x150) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x148);
      lVar5 = (longlong)*(int *)(param_1 + 0x150) << 3;
      do {
        cVar1 = FUN_14600443a(lVar4,param_2);
        if (cVar1 != '\0') goto LAB_1415be428;
        lVar4 = lVar4 + 8;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    FUN_1415d73be(param_1,param_2);
LAB_1415be428:
    FUN_148d7ffd0(param_1 + 0x158);
    local_2c = 0;
    local_30 = *(uint *)(param_2 + 0xc);
    if ((int)local_30 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((local_30 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar3;
      }
    }
    local_2c = iVar2;
    FUN_145a5d306(param_1 + 0x158);
    FUN_148d8006c(param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415be4d2 FUN_1415be4d2 body=82 status=ok
// SIG undefined FUN_1415be4d2(void)

undefined8 FUN_1415be4d2(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    lVar3 = FUN_140b6d0be();
    if ((((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) && (cVar2 = FUN_143f37826(lVar1), cVar2 != '\0')) &&
       (cVar2 = FUN_14127c006(lVar1), cVar2 == '\0')) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1415be524 FUN_1415be524 body=575 status=ok
// SIG undefined FUN_1415be524(void)

void FUN_1415be524(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
      iVar6 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar3 = *local_80;
        lVar7 = (longlong)iVar6;
        uVar4 = *(undefined8 *)(lVar3 + lVar7 * 0x28);
        uVar5 = *(undefined8 *)(lVar3 + 8 + lVar7 * 0x28);
        uVar2 = (uint)((ulonglong)uVar5 >> 0x10);
        uVar9 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar12 = (uint)uVar4 & 0xffff;
        uVar9 = ((uint)uVar4 << 0x10 | uVar12) + (int)((ulonglong)uVar4 >> 0x20) +
                (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar12 >> 4);
        uVar12 = (uint)uVar5 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar5 << 0x10 | uVar12) + (int)((ulonglong)uVar5 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar12 >> 4) + uVar9 * 0x40 +
                       (uVar9 >> 2) + 0x9e3779b9 ^ uVar9) & (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar6 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415be764 FUN_1415be764 body=137 status=ok
// SIG undefined FUN_1415be764(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415be764(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  DAT_14caa9c38 = 0;
  _DAT_14caa9c40 = 0;
  DAT_14caa9c28 = 0;
  _DAT_14caa9c30 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14caa9c48);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14caa9c48,4000);
  FUN_146022414();
  if (0 < DAT_14caa9c40) {
    lVar2 = 0;
    do {
      puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = DAT_14c872be0;
      *(undefined8 **)(DAT_14caa9c38 + lVar2 * 8) = puVar1;
      lVar2 = lVar2 + 1;
    } while (lVar2 < DAT_14caa9c40);
  }
  return;
}



// FUNCTION 1415be7ee FUN_1415be7ee body=708 status=ok
// SIG undefined FUN_1415be7ee(void)

void FUN_1415be7ee(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_1 + 0x5a0) & 1) == 0) {
    lVar8 = FUN_1447210f0();
    *(byte *)(param_1 + 0x5a0) = *(byte *)(param_1 + 0x5a0) | 1;
    lVar9 = FUN_14093f908(param_1);
    if (*(longlong *)(lVar9 + 0x588) == 0) {
      if (*(longlong *)(lVar8 + 0x38) != 0) {
        iVar7 = (**(code **)(**(longlong **)(lVar8 + 0x170) + 0x6b0))();
        local_58 = &local_49;
        local_60 = &LAB_143653068;
        FUN_1417e3490(*(undefined8 *)(lVar8 + 0x38),
                      *(undefined4 *)(&DAT_14aa2b6d0 + (ulonglong)(iVar7 < 8) * 4));
      }
    }
    else {
      plVar4 = *(longlong **)(*(longlong *)(lVar8 + 0x38) + 0x858);
      iVar7 = (int)plVar4[5];
      if (iVar7 == 0) {
        uVar16 = 1;
        uVar18 = 0;
        iVar15 = 0;
        iVar6 = 0;
      }
      else {
        puVar10 = (uint *)plVar4[4];
        if ((uint *)plVar4[4] == (uint *)0x0) {
          puVar10 = (uint *)(plVar4 + 2);
        }
        uVar17 = *puVar10;
        if (uVar17 == 0) {
          iVar6 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar6 = iVar7 + -1;
          }
          uVar18 = 0;
          uVar16 = (ulonglong)(uint)(iVar6 >> 5);
          if (iVar6 >> 5 < 1) {
            uVar16 = uVar18;
          }
          iVar15 = 0;
          do {
            if (uVar16 == uVar18) goto LAB_1415be92c;
            iVar15 = iVar15 + 0x20;
            uVar17 = puVar10[uVar18 + 1];
            uVar18 = uVar18 + 1;
          } while (uVar17 == 0);
        }
        else {
          uVar18 = 0;
          iVar15 = 0;
        }
        uVar16 = (ulonglong)(-uVar17 & uVar17);
        uVar2 = uVar16 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar6 = (iVar15 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if (iVar7 <= iVar6) {
          iVar6 = iVar7;
        }
      }
      if (iVar6 != iVar7) {
        uVar17 = 0xffffffff;
        do {
          lVar8 = *(longlong *)(*plVar4 + (longlong)iVar6 * 0x18);
          plVar5 = *(longlong **)(*plVar4 + 8 + (longlong)iVar6 * 0x18);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          if ((((((lVar8 != 0) && (*(int *)(lVar8 + 0xc) != 0)) &&
                (uVar13 = *(uint *)(lVar8 + 8), -1 < (int)uVar13)) &&
               (((int)uVar13 < DAT_14c9647dc &&
                (plVar14 = (longlong *)
                           ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
                plVar14 != (longlong *)0x0)))) &&
              (((int)plVar14[2] == *(int *)(lVar8 + 0xc) &&
               (((*(uint *)(plVar14 + 1) & 0x10200000) == 0 &&
                (plVar14 = (longlong *)*plVar14, plVar14 != (longlong *)0x0)))))) &&
             ((*(byte *)(plVar14 + 0xc) & 4) == 0)) {
            (**(code **)(*plVar14 + 0x578))();
          }
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar14 = plVar5 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
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
          uVar17 = uVar17 & ~(uint)uVar16;
          puVar10 = (uint *)plVar4[4];
          if ((uint *)plVar4[4] == (uint *)0x0) {
            puVar10 = (uint *)(plVar4 + 2);
          }
          iVar3 = (int)plVar4[5];
          iVar6 = (int)uVar18;
          lVar8 = (longlong)iVar6;
          uVar13 = puVar10[lVar8] & uVar17;
          if (uVar13 == 0) {
            iVar11 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar11 = iVar3 + -1;
            }
            iVar11 = iVar11 >> 5;
            iVar15 = iVar15 + 0x20;
            iVar12 = iVar11;
            if (iVar11 < iVar6) {
              iVar12 = iVar6;
            }
            if (iVar6 < iVar11) {
              lVar9 = 0;
              do {
                uVar13 = puVar10[lVar8 + lVar9 + 1];
                if (uVar13 != 0) {
                  uVar18 = (ulonglong)(iVar6 + (int)lVar9 + 1);
                  uVar17 = 0xffffffff;
                  goto LAB_1415bea6a;
                }
                iVar15 = iVar15 + 0x20;
                lVar9 = lVar9 + 1;
              } while (iVar12 - lVar8 != lVar9);
              uVar17 = 0xffffffff;
              iVar6 = iVar12;
            }
            uVar18 = (ulonglong)(iVar6 + 1);
            iVar6 = iVar3;
          }
          else {
LAB_1415bea6a:
            uVar16 = (ulonglong)(-uVar13 & uVar13);
            uVar2 = uVar16 * 2 + 1;
            lVar8 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            iVar6 = (iVar15 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar6) {
              iVar6 = iVar3;
            }
          }
        } while (iVar6 != iVar7);
      }
    }
  }
LAB_1415be92c:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415beab4 FUN_1415beab4 body=878 status=ok
// SIG undefined FUN_1415beab4(void)

void FUN_1415beab4(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined ***pppuVar7;
  float fVar8;
  undefined1 auStack_128 [32];
  undefined2 *local_108;
  undefined8 *local_100;
  int local_f8;
  undefined2 local_f0 [2];
  undefined4 local_ec;
  undefined1 *local_e8 [2];
  undefined ***local_d8;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar2 = FUN_145c6695c(param_2);
  fVar8 = DAT_14c763850;
  if ((((cVar2 != '\0') && (*(int *)(param_2 + 0xc) != 0)) &&
      (uVar1 = *(uint *)(param_2 + 8), -1 < (int)uVar1)) &&
     ((((int)uVar1 < DAT_14c9647dc &&
       (plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0)) &&
      (((int)plVar3[2] == *(int *)(param_2 + 0xc) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))))
     ) {
    if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
      lVar4 = *plVar3;
    }
    else {
      lVar4 = 0;
    }
    if ((*(byte *)(lVar4 + 0x155) & 0x20) == 0) {
      if (*(double *)(param_2 + 0xb0) <= 0.0 && *(double *)(param_2 + 0xb0) != 0.0) {
        local_d8 = (undefined ***)0x0;
        local_c8 = &PTR_LAB_14b3ec6a0;
        local_e8[0] = &LAB_143cadf7a;
        if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
          lVar4 = *plVar3;
        }
        else {
          lVar4 = 0;
        }
        if (*(longlong *)(lVar4 + 0x1f0) == 0) {
          puVar5 = (undefined8 *)(lVar4 + 0x458);
        }
        else {
          puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
        }
        uVar6 = *puVar5;
        local_100 = (undefined8 *)0x0;
        local_f8 = 0;
        local_c0 = param_1;
        FUN_1446efa72(&local_100,0,8,0x10);
        local_f8 = 8;
        FUN_145d3284c(local_100,param_1,param_2 + 0x78,local_e8);
        local_a8 = 0;
        local_a0 = 0;
        FUN_14487d8d8(&local_a8,&local_100);
        fVar8 = 5.0;
      }
      else {
        if (DAT_14c763850 <= 0.0) goto LAB_1415beb6e;
        local_d8 = (undefined ***)0x0;
        local_c8 = &PTR_LAB_14b3ec6c0;
        local_e8[0] = &LAB_143cadfca;
        if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
          lVar4 = *plVar3;
        }
        else {
          lVar4 = 0;
        }
        if (*(longlong *)(lVar4 + 0x1f0) == 0) {
          puVar5 = (undefined8 *)(lVar4 + 0x458);
        }
        else {
          puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
        }
        uVar6 = *puVar5;
        local_100 = (undefined8 *)0x0;
        local_f8 = 0;
        local_c0 = param_1;
        FUN_1446efa72(&local_100,0,8,0x10);
        local_f8 = 8;
        FUN_145d3284c(local_100,param_1,param_2 + 0x78,local_e8);
        local_a8 = 0;
        local_a0 = 0;
        FUN_14487d8d8(&local_a8,&local_100);
      }
      local_108 = local_f0;
      local_68 = 1;
      local_ec = 0xbf800000;
      local_f0[0] = 0;
      FUN_1406f4044(uVar6,param_2 + 0xb8,&local_a8,fVar8);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
      if (local_f8 == 0) {
LAB_1415bedba:
        if (local_100 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_100 != (undefined8 *)0x0) {
        (**(code **)*local_100)(local_100,0);
        FUN_1446efa72(&local_100,0,0,0x10);
        local_f8 = 0;
        goto LAB_1415bedba;
      }
      if (local_e8[0] != (undefined1 *)0x0) {
        pppuVar7 = local_d8;
        if (local_d8 == (undefined ***)0x0) {
          pppuVar7 = &local_c8;
        }
        (*(code *)(*pppuVar7)[2])();
      }
      goto LAB_1415beb79;
    }
  }
LAB_1415beb6e:
  *(undefined8 *)(param_2 + 0xb8) = 0;
LAB_1415beb79:
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415bee24 FUN_1415bee24 body=557 status=ok
// SIG undefined FUN_1415bee24(void)

void FUN_1415bee24(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  byte bVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  char *pcVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(byte *)(param_1 + 0x8c) & 0x80) != 0) &&
     (lVar4 = *(longlong *)(param_1 + 0x288), lVar4 != 0)) {
    FUN_1448d5e3c(&local_58,param_1 + 0x208);
    puVar5 = *(undefined8 **)(local_58 + 0x290);
    AcquireSRWLockShared((PSRWLOCK)(puVar5 + 7));
    if (*(int *)(lVar4 + 0xac) != *(int *)(puVar5 + 6)) {
      *(int *)(lVar4 + 0xac) = *(int *)(puVar5 + 6);
      *(byte *)(lVar4 + 0x118) = *(byte *)(lVar4 + 0x118) & 0xfd;
      iVar3 = *(int *)(lVar4 + 0x114);
      FUN_145bdcd3c(*(undefined8 *)(lVar4 + 0x108),*(undefined4 *)(lVar4 + 0x110));
      *(undefined4 *)(lVar4 + 0x110) = 0;
      if ((iVar3 < 0) && (*(int *)(lVar4 + 0x114) != 0)) {
        FUN_148eb4ca2(lVar4 + 0x108);
      }
      if ((longlong)*(int *)(puVar5 + 1) != 0) {
        pcVar11 = (char *)*puVar5;
        lVar10 = (longlong)*(int *)(puVar5 + 1) * 0x50;
        do {
          if ((*pcVar11 != '\x05') || (-1 < *(char *)(lVar4 + 0x118))) {
            lVar8 = FUN_14602503e(lVar4 + 0x108);
            FUN_1460251d6(lVar8,pcVar11);
            bVar7 = *(char *)(lVar8 + 0x40) * '\x02';
            if (*(char *)(lVar8 + 0x38) != '\0') {
              bVar7 = 2;
            }
            *(byte *)(lVar4 + 0x118) = *(byte *)(lVar4 + 0x118) | bVar7;
          }
          pcVar11 = pcVar11 + 0x50;
          lVar10 = lVar10 + -0x50;
        } while (lVar10 != 0);
      }
      if (((*(char *)(lVar4 + 0xa8) != '\0') && ((*(byte *)(lVar4 + 0x118) & 0x40) == 0)) &&
         (*(int *)(lVar4 + 0xf0) != *(int *)(puVar5 + 5))) {
        FUN_144a787a6(lVar4 + 0xe0,puVar5 + 3);
        *(undefined4 *)(lVar4 + 0xf0) = *(undefined4 *)(puVar5 + 5);
        uVar9 = FUN_148ea58e8(lVar4,lVar4 + 0xe0);
        FUN_14625b08a(lVar4,uVar9);
        bVar7 = *(byte *)(lVar4 + 0x118);
        if ((bVar7 & 4) != 0) {
          *(byte *)(lVar4 + 0x118) = bVar7 & 0xfd | bVar7 >> 2 & 2;
        }
      }
      puVar6 = *(ushort **)(lVar4 + 0x80);
      if (puVar6 != (ushort *)0x0) {
        *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(puVar5 + 7));
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415bf052 FUN_1415bf052 body=125 status=ok
// SIG undefined FUN_1415bf052(void)

void FUN_1415bf052(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14b4e3140;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[2] = &PTR_FUN_14b4dfa90;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 2;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  return;
}



// FUNCTION 1415bf0d0 FUN_1415bf0d0 body=163 status=ok
// SIG undefined FUN_1415bf0d0(void)

undefined8 * FUN_1415bf0d0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  plVar2 = (longlong *)FUN_140a68038(1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x98))(plVar2,&local_28);
    if (&local_28 == param_1) {
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_20 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar1 = (int *)((longlong)local_20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_20 + 0x10))(local_20);
          }
        }
      }
    }
    else {
      *param_1 = local_28;
      if (local_20 != (longlong *)0x0) {
        param_1[1] = local_20;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415bf174 FUN_1415bf174 body=277 status=ok
// SIG undefined FUN_1415bf174(void)

void FUN_1415bf174(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Math";
  local_48 = 4;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Math";
  local_48 = 4;
  FUN_140208c1e(&DAT_14caeac58,local_58,local_54,&local_50);
  local_50 = L"Utility";
  local_48 = 7;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Utility";
  local_48 = 7;
  FUN_140208c1e(&DAT_14caeac68,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415bf28a FUN_1415bf28a body=277 status=ok
// SIG undefined FUN_1415bf28a(void)

void FUN_1415bf28a(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Math";
  local_48 = 4;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Math";
  local_48 = 4;
  FUN_140208c1e(&DAT_14caeabe0,local_58,local_54,&local_50);
  local_50 = L"Utility";
  local_48 = 7;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Utility";
  local_48 = 7;
  FUN_140208c1e(&DAT_14caeabf0,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415bf3a0 FUN_1415bf3a0 body=423 status=ok
// SIG undefined FUN_1415bf3a0(void)

undefined * FUN_1415bf3a0(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb02c98) {
    FUN_144b3d300(&DAT_14cb02c98);
    if (DAT_14cb02c98 == -1) {
      FUN_146025c90(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"MobileReflectionCapture";
      local_78 = L"FMobileReflectionCaptureShaderParameters";
      local_50 = 0x30;
      local_58 = 0x450;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb02c18,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1436a257e);
      _Init_thread_footer(&DAT_14cb02c98);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb02c18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415bf548 FUN_1415bf548 body=423 status=ok
// SIG undefined FUN_1415bf548(void)

undefined * FUN_1415bf548(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb03150) {
    FUN_144b3d300(&DAT_14cb03150);
    if (DAT_14cb03150 == -1) {
      FUN_146025f0a(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"MobileDirectionalLight";
      local_78 = L"FMobileDirectionalLightShaderParameters";
      local_50 = 0x170;
      local_58 = 0x36d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb030d0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1436a2726);
      _Init_thread_footer(&DAT_14cb03150);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb030d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415bf6f0 FUN_1415bf6f0 body=276 status=ok
// SIG undefined FUN_1415bf6f0(void)

void FUN_1415bf6f0(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_4 == 0) {
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 1;
    if ((param_4 & 0x208) != 0) {
      *(undefined4 *)(param_1 + 0x38) = 6;
      if (*(char *)(param_1 + 0x24) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
      goto LAB_1415bf77e;
    }
    uVar3 = 7;
    if (((((param_4 & 2) == 0) && (uVar3 = 8, (param_4 & 1) == 0)) &&
        (uVar3 = 9, (param_4 & 4) == 0)) && (uVar3 = 2, (param_4 & 0x10) == 0)) goto LAB_1415bf77e;
  }
  *(undefined4 *)(param_1 + 0x38) = uVar3;
LAB_1415bf77e:
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar4 = (longlong *)FUN_140a68038(1);
    if (plVar4 == (longlong *)0x0) {
      local_28 = (longlong *)0x0;
      plStack_20 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar4 + 0x80))(plVar4,&local_28);
      if (local_28 != (longlong *)0x0) {
        (**(code **)(*local_28 + 0x30))(local_28,*(undefined4 *)(param_1 + 0x20),param_1 + 0x40);
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
    }
    plVar4 = plStack_20;
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_20)(plStack_20);
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
  *(undefined1 *)(param_1 + 0x18) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415bf816 FUN_1415bf816 body=164 status=ok
// SIG undefined FUN_1415bf816(void)

void FUN_1415bf816(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"MeshPaintTexture";
  local_38 = 0x10;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"MeshPaintTexture";
  local_38 = 0x10;
  FUN_140208c1e(&DAT_14caeaad0,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415bf8bc FUN_1415bf8bc body=531 status=ok
// SIG undefined FUN_1415bf8bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415bf8bc(void)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  DAT_14cb448b0 = (undefined8 *)0x0;
  _DAT_14cb448b8 = 1;
  uVar15 = 0;
  FUN_1446f84a2(&DAT_14cb448b0,0);
  *DAT_14cb448b0 = DAT_14cb44890;
  plVar6 = (longlong *)FUN_140f7b050();
  iVar2 = (int)plVar6[5];
  if (iVar2 == 0) {
    uVar16 = 1;
    iVar13 = 0;
    iVar8 = 0;
  }
  else {
    puVar7 = (uint *)plVar6[4];
    if ((uint *)plVar6[4] == (uint *)0x0) {
      puVar7 = (uint *)(plVar6 + 2);
    }
    uVar14 = *puVar7;
    if (uVar14 == 0) {
      iVar8 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar8 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar13 = 0;
      do {
        if (uVar16 == uVar15) {
          return;
        }
        iVar13 = iVar13 + 0x20;
        uVar14 = puVar7[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar13 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar16 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar8 = (iVar13 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar8) {
      iVar8 = iVar2;
    }
  }
  if (iVar8 != iVar2) {
    uVar14 = 0xffffffff;
    iVar4 = iVar2;
    do {
      uVar1 = _DAT_14cb448b8;
      lVar12 = *plVar6;
      lVar11 = (longlong)iVar8 * 0xa0;
      if ((*(char *)(lVar12 + 0x21 + lVar11) == '\0') && (*(char *)(lVar12 + lVar11 + 0x60) == '\0')
         ) {
        uVar3 = *(undefined8 *)(lVar12 + lVar11);
        lVar12 = (longlong)DAT_14cb448b8;
        uVar5 = DAT_14cb448b8 + 1;
        _DAT_14cb448b8 = CONCAT44(DAT_14cb448bc,uVar5);
        if (DAT_14cb448bc < uVar5) {
          FUN_1446f84a2(&DAT_14cb448b0,uVar1 & 0xffffffff);
        }
        DAT_14cb448b0[lVar12] = uVar3;
        iVar4 = (int)plVar6[5];
      }
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar7 = (uint *)plVar6[4];
      if ((uint *)plVar6[4] == (uint *)0x0) {
        puVar7 = (uint *)(plVar6 + 2);
      }
      iVar8 = (int)uVar15;
      lVar12 = (longlong)iVar8;
      uVar5 = puVar7[lVar12] & uVar14;
      if (uVar5 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar8) {
          iVar10 = iVar8;
        }
        if (iVar8 < iVar9) {
          lVar11 = 0;
          do {
            uVar5 = puVar7[lVar12 + lVar11 + 1];
            if (uVar5 != 0) {
              uVar15 = (ulonglong)(iVar8 + (int)lVar11 + 1);
              uVar14 = 0xffffffff;
              goto LAB_1415bfa81;
            }
            iVar13 = iVar13 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar10 - lVar12 != lVar11);
          uVar14 = 0xffffffff;
          iVar8 = iVar10;
        }
        uVar15 = (ulonglong)(iVar8 + 1);
        iVar8 = iVar4;
      }
      else {
LAB_1415bfa81:
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar8 = (iVar13 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar8) {
          iVar8 = iVar4;
        }
      }
    } while (iVar8 != iVar2);
  }
  return;
}



// FUNCTION 1415bfad0 FUN_1415bfad0 body=213 status=ok
// SIG undefined FUN_1415bfad0(void)

void FUN_1415bfad0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  local_38 = 0;
  FUN_1400021e4(&local_38,&local_30);
  if (&local_30 == param_1 + 2) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 3) = local_28;
    *(undefined4 *)((longlong)param_1 + 0x1c) = local_24;
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415bfba6 FUN_1415bfba6 body=1385 status=ok
// SIG undefined FUN_1415bfba6(void)

int * FUN_1415bfba6(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  PSRWLOCK pRVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar18 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar18 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar18) {
      FUN_1447711aa(param_1,iVar18);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar7 = iVar20 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar12 = iVar20 + 1;
    iVar17 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar17 = iVar20;
    }
    if (iVar17 >> 5 == iVar7) {
      *(int *)(param_1 + 5) = iVar12;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        if (iVar20 + 0x20U < 0xa0) {
          iVar12 = 0x80;
          iVar7 = iVar20;
        }
        else {
          uVar15 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar8 = 4;
            if (4 < uVar15) {
              uVar8 = uVar15;
            }
          }
          else {
            uVar8 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
          }
          uVar14 = FUN_144a3809e(uVar8 << 2,0);
          iVar7 = (int)(uVar14 >> 2);
          iVar12 = -0x20;
          if ((int)uVar15 <= iVar7) {
            iVar12 = iVar7 << 5;
          }
          iVar7 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar12;
        FUN_1446efbd8(plVar13,iVar7);
        iVar12 = (int)param_1[5] + 1;
      }
      iVar7 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar7 = iVar12;
      }
      *(int *)(param_1 + 5) = iVar12;
      if (iVar12 % 0x20 != 0) {
        plVar16 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar16 = plVar13;
        }
        bVar10 = -(char)(iVar12 % 0x20);
        *(uint *)((longlong)plVar16 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar16 + (longlong)(iVar7 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar9 = (longlong)iVar18;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar20 & 0x1f;
    puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar17 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar18 = (int)param_1[6];
    lVar9 = (longlong)iVar18;
    iVar20 = *(int *)(*param_1 + 4 + lVar9 * 0x20);
    *(int *)(param_1 + 6) = iVar20;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 0x20) = 0xffffffff;
    }
  }
  plVar13 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar13 = (longlong *)param_1[4];
  }
  iVar20 = iVar18 + 0x1f;
  if (-1 < iVar18) {
    iVar20 = iVar18;
  }
  puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar20 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar18 & 0x1f);
  lVar22 = *param_1;
  lVar9 = lVar9 * 0x20;
  piVar2 = (int *)(lVar22 + lVar9);
  plVar13 = (longlong *)param_3[1];
  uVar4 = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar22 + lVar9) = uVar4;
  plVar16 = (longlong *)*plVar13;
  *(longlong **)(lVar22 + 8 + lVar9) = plVar16;
  if (plVar16 == (longlong *)0x0) {
    iVar20 = (int)((ulonglong)uVar4 >> 0x20);
  }
  else {
    (**(code **)(*plVar16 + 8))();
    iVar20 = piVar2[1];
  }
  piVar2[4] = (int)plVar13[1];
  piVar2[6] = -1;
  iVar7 = 0;
  uVar15 = 0;
  if (iVar20 != -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c845168) && (FUN_144b3d300(&DAT_14c845168), DAT_14c845168 == -1)) {
      FUN_1456aef72(&DAT_14c8450d0);
      DAT_14c845160 = (PSRWLOCK)&DAT_14c8450d0;
      atexit(FUN_142767c9e);
      _Init_thread_footer(&DAT_14c845168);
    }
    pRVar6 = DAT_14c845160;
    iVar20 = piVar2[1];
    AcquireSRWLockShared(DAT_14c845160);
    uVar15 = *(uint *)(*(longlong *)((longlong)pRVar6[3].Ptr + (longlong)(iVar20 / 0x555) * 8) + 0xc
                      + (longlong)(iVar20 % 0x555) * 0x18);
    ReleaseSRWLockShared(pRVar6);
  }
  if (*piVar2 != -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c845168) && (FUN_144b3d300(&DAT_14c845168), DAT_14c845168 == -1)) {
      FUN_1456aef72(&DAT_14c8450d0);
      DAT_14c845160 = (PSRWLOCK)&DAT_14c8450d0;
      atexit(FUN_142767c9e);
      _Init_thread_footer(&DAT_14c845168);
    }
    pRVar6 = DAT_14c845160;
    iVar20 = *piVar2;
    AcquireSRWLockShared(DAT_14c845160);
    iVar7 = *(int *)(*(longlong *)((longlong)pRVar6[3].Ptr + (longlong)(iVar20 / 0x555) * 8) + 0xc +
                    (longlong)(iVar20 % 0x555) * 0x18);
    ReleaseSRWLockShared(pRVar6);
  }
  uVar8 = uVar15 >> 0xd ^ iVar7 - uVar15;
  uVar11 = uVar8 << 8 ^ (-0x61c88647 - uVar15) - uVar8;
  uVar15 = uVar11 >> 0xd ^ (uVar15 - uVar8) - uVar11;
  uVar19 = uVar15 >> 0xc ^ (uVar8 - uVar11) - uVar15;
  uVar21 = uVar19 << 0x10 ^ (uVar11 - uVar15) - uVar19;
  uVar8 = uVar21 >> 5 ^ (uVar15 - uVar19) - uVar21;
  uVar11 = uVar8 >> 3 ^ (uVar19 - uVar21) - uVar8;
  uVar15 = uVar11 << 10 ^ (uVar21 - uVar8) - uVar11;
  uVar15 = uVar15 >> 0xf ^ uVar8 - (uVar11 + uVar15);
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar8 != 0) && (uVar8 != 1)) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar20 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & uVar15) * 4);
    if (iVar20 != -1) {
      lVar9 = *param_1;
      do {
        lVar22 = (longlong)iVar20 * 0x20;
        piVar3 = (int *)(lVar9 + lVar22);
        if ((*(int *)(lVar9 + lVar22) == *piVar2) && (*(int *)(lVar9 + 4 + lVar22) == piVar2[1])) {
          if (*(longlong **)(piVar3 + 2) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(piVar3 + 2) + 0x10))();
          }
          iVar7 = *piVar2;
          iVar12 = piVar2[1];
          iVar17 = piVar2[2];
          iVar5 = piVar2[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(piVar2 + 4);
          *piVar3 = iVar7;
          piVar3[1] = iVar12;
          piVar3[2] = iVar17;
          piVar3[3] = iVar5;
          FUN_146027a9a(param_1,iVar18);
          iVar18 = iVar20;
          goto LAB_1415bfefb;
        }
        iVar20 = piVar3[6];
      } while (iVar20 != -1);
    }
  }
  if (uVar8 < 4) {
    iVar20 = 1;
  }
  else {
    uVar14 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
    lVar9 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar20 = 1 << ((byte)lVar9 & 0x1f);
  }
  if (((int)uVar8 < 1) || (iVar20 <= (int)param_1[9])) {
    uVar15 = (int)param_1[9] - 1U & uVar15;
    piVar2[7] = uVar15;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    piVar2[6] = *(int *)((longlong)plVar13 +
                        ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar18;
  }
  else {
    *(int *)(param_1 + 9) = iVar20;
    FUN_1415c0110(param_1);
  }
LAB_1415bfefb:
  *param_2 = iVar18;
  return param_2;
}



// FUNCTION 1415c0110 FUN_1415c0110 body=1150 status=ok
// SIG undefined FUN_1415c0110(void)

void FUN_1415c0110(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  PSRWLOCK pRVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 auStack_a8 [40];
  uint local_80;
  int local_7c;
  longlong *local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar7 = param_1 + 7;
    FUN_144a1cbf0(plVar7,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar5 = 0;
      do {
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar7;
        }
        *(undefined4 *)((longlong)plVar12 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4)
             = 0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar18 = 1;
      local_80 = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar18 = local_68 >> 0x20;
      local_80 = (uint)local_58;
    }
    iVar17 = (int)local_68;
    iVar9 = local_58._4_4_;
    iVar14 = local_50;
    local_70 = local_60;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_78 = plVar7;
        piVar1 = (int *)(*param_1 + (longlong)iVar9 * 0x20);
        uVar6 = 0;
        local_7c = iVar14;
        if (*(int *)(*param_1 + 4 + (longlong)iVar9 * 0x20) != -1) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c845168) && (FUN_144b3d300(&DAT_14c845168), DAT_14c845168 == -1)) {
            FUN_1456aef72(&DAT_14c8450d0);
            DAT_14c845160 = (PSRWLOCK)&DAT_14c8450d0;
            atexit(FUN_142767c9e);
            _Init_thread_footer(&DAT_14c845168);
          }
          pRVar4 = DAT_14c845160;
          iVar14 = piVar1[1];
          AcquireSRWLockShared(DAT_14c845160);
          uVar6 = *(uint *)(*(longlong *)((longlong)pRVar4[3].Ptr + (longlong)(iVar14 / 0x555) * 8)
                            + 0xc + (longlong)(iVar14 % 0x555) * 0x18);
          ReleaseSRWLockShared(pRVar4);
        }
        if (*piVar1 == -1) {
          iVar14 = 0;
        }
        else {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c845168) && (FUN_144b3d300(&DAT_14c845168), DAT_14c845168 == -1)) {
            FUN_1456aef72(&DAT_14c8450d0);
            DAT_14c845160 = (PSRWLOCK)&DAT_14c8450d0;
            atexit(FUN_142767c9e);
            _Init_thread_footer(&DAT_14c845168);
          }
          pRVar4 = DAT_14c845160;
          iVar14 = *piVar1;
          AcquireSRWLockShared(DAT_14c845160);
          iVar14 = *(int *)(*(longlong *)((longlong)pRVar4[3].Ptr + (longlong)(iVar14 / 0x555) * 8)
                            + 0xc + (longlong)(iVar14 % 0x555) * 0x18);
          ReleaseSRWLockShared(pRVar4);
        }
        uVar5 = uVar6 >> 0xd ^ iVar14 - uVar6;
        uVar8 = uVar5 << 8 ^ (-0x61c88647 - uVar6) - uVar5;
        uVar11 = uVar8 >> 0xd ^ (uVar6 - uVar5) - uVar8;
        uVar15 = uVar11 >> 0xc ^ (uVar5 - uVar8) - uVar11;
        uVar6 = uVar15 << 0x10 ^ (uVar8 - uVar11) - uVar15;
        uVar5 = uVar6 >> 5 ^ (uVar11 - uVar15) - uVar6;
        uVar8 = uVar5 >> 3 ^ (uVar15 - uVar6) - uVar5;
        uVar6 = uVar8 << 10 ^ (uVar6 - uVar5) - uVar8;
        uVar10 = (longlong)(int)(uVar6 >> 0xf ^ uVar5 - (uVar8 + uVar6)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar14 = (int)uVar10;
        piVar1[7] = iVar14;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = local_78;
        }
        piVar1[6] = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = local_78;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9
        ;
        uVar6 = local_80 & ~(uint)uVar18;
        plVar7 = (longlong *)local_70[2];
        if ((longlong *)local_70[2] == (longlong *)0x0) {
          plVar7 = local_70;
        }
        iVar2 = (int)local_70[3];
        lVar16 = (longlong)iVar17;
        uVar5 = *(uint *)((longlong)plVar7 + lVar16 * 4) & uVar6;
        iVar14 = local_7c;
        if (uVar5 == 0) {
          iVar9 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar9 = iVar2 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar3 = iVar9;
          if (iVar9 < iVar17) {
            iVar3 = iVar17;
          }
          if (iVar9 <= iVar17) break;
          lVar13 = 0;
          while( true ) {
            iVar14 = iVar14 + 0x20;
            uVar5 = *(uint *)((longlong)plVar7 + lVar13 * 4 + lVar16 * 4 + 4);
            if (uVar5 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar16 == lVar13) goto LAB_1415c054f;
          }
          iVar17 = iVar17 + (int)lVar13 + 1;
          local_80 = 0xffffffff;
          uVar6 = local_80;
        }
        local_80 = uVar6;
        uVar18 = (ulonglong)(-uVar5 & uVar5);
        uVar10 = uVar18 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar9 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        plVar7 = local_78;
      } while (iVar9 < iVar2);
    }
  }
LAB_1415c054f:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c0590 FUN_1415c0590 body=742 status=ok
// SIG undefined FUN_1415c0590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415c0590(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b7bd240;
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x51) = 0;
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  FUN_1461243ec(param_1 + 0x48);
  param_1[0x33] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (*(int *)((longlong)param_1 + 0x1b4) != 0) {
    FUN_140115c12(param_1 + 0x35,0);
  }
  param_1[0x34] = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2f] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (*(int *)((longlong)param_1 + 0x194) != 0) {
    FUN_140115c12(param_1 + 0x31,0);
  }
  param_1[0x30] = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_14404ebb2(param_1 + 0x23);
  param_1[0x1e] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (*(int *)((longlong)param_1 + 0x10c) != 0) {
    FUN_140115c12(param_1 + 0x20,0);
  }
  param_1[0x1f] = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1a] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (*(int *)((longlong)param_1 + 0xec) != 0) {
    FUN_140115c12(param_1 + 0x1c,0);
  }
  param_1[0x1b] = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x16] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (*(int *)((longlong)param_1 + 0xcc) != 0) {
    FUN_140115c12(param_1 + 0x18,0);
  }
  param_1[0x17] = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  param_1[0x12] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (*(int *)((longlong)param_1 + 0xac) != 0) {
    FUN_140115c12(param_1 + 0x14,0);
  }
  param_1[0x13] = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  param_1[0xe] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (*(int *)((longlong)param_1 + 0x8c) != 0) {
    FUN_140115c12(param_1 + 0x10,0);
  }
  param_1[0xf] = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_145fa0eea(param_1 + 4);
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0001415c085e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1415c0876 FUN_1415c0876 body=423 status=ok
// SIG undefined FUN_1415c0876(void)

undefined * FUN_1415c0876(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb49a50) {
    FUN_144b3d300(&DAT_14cb49a50);
    if (DAT_14cb49a50 == -1) {
      FUN_1460289ce(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"WaterVF";
      local_78 = L"FWaterVertexFactoryParameters";
      local_50 = 0x30;
      local_58 = 0x12;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb499d0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b4a639);
      _Init_thread_footer(&DAT_14cb49a50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb499d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c0a1e FUN_1415c0a1e body=1363 status=ok
// SIG undefined FUN_1415c0a1e(void)

void FUN_1415c0a1e(longlong param_1)

{
  longlong *plVar1;
  PSRWLOCK SRWLock;
  longlong *plVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ushort *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined2 *puVar13;
  longlong lVar14;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  longlong local_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  longlong local_80 [2];
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140642c08();
  FUN_1406429e2(param_1);
  FUN_1406428ce(param_1);
  puVar4 = (undefined4 *)(param_1 + 0x208);
  FUN_1448d5e3c(&local_70,puVar4);
  puVar6 = *(undefined1 **)(local_70 + 0x390);
  AcquireSRWLockShared((PSRWLOCK)(puVar6 + 0x28));
  plVar2 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (*(int *)(param_1 + 0x2f4) != *(int *)(puVar6 + 0x20)) {
    *(int *)(param_1 + 0x2f4) = *(int *)(puVar6 + 0x20);
    lVar9 = *(longlong *)(param_1 + 0x288);
    if (lVar9 != 0) {
      if (*(int *)(lVar9 + 0x34c) != *(int *)(puVar6 + 4)) {
        *(undefined1 *)(lVar9 + 0x348) = *puVar6;
        *(undefined4 *)(lVar9 + 0x34c) = *(undefined4 *)(puVar6 + 4);
        *(undefined1 *)(param_1 + 0x2c0) = 1;
        puVar8 = *(ushort **)(lVar9 + 0x80);
        if (puVar8 != (ushort *)0x0) {
          *puVar8 = *puVar8 | (ushort)(1L << (*(byte *)(lVar9 + 0x78) & 0x3f));
        }
      }
      if (*(int *)(lVar9 + 0x354) != *(int *)(puVar6 + 0xc)) {
        *(undefined1 *)(lVar9 + 0x350) = puVar6[8];
        *(undefined4 *)(lVar9 + 0x354) = *(undefined4 *)(puVar6 + 0xc);
        *(undefined1 *)(param_1 + 0x2c0) = 1;
        puVar8 = *(ushort **)(lVar9 + 0x80);
        if (puVar8 != (ushort *)0x0) {
          *puVar8 = *puVar8 | (ushort)(1L << (*(byte *)(lVar9 + 0x78) & 0x3f));
        }
      }
      if (*(int *)(param_1 + 0x304) != *(int *)(puVar6 + 0x14)) {
        *(undefined1 *)(param_1 + 0x300) = puVar6[0x10];
        *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(puVar6 + 0x14);
        *(undefined1 *)(param_1 + 0x2c0) = 1;
        puVar8 = *(ushort **)(lVar9 + 0x80);
        if (puVar8 != (ushort *)0x0) {
          *puVar8 = *puVar8 | (ushort)(1L << (*(byte *)(lVar9 + 0x78) & 0x3f));
        }
      }
      if (*(int *)(param_1 + 0x2fc) != *(int *)(puVar6 + 0x1c)) {
        *(undefined1 *)(param_1 + 0x2f8) = puVar6[0x18];
        *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(puVar6 + 0x1c);
        *(undefined1 *)(param_1 + 0x2c0) = 1;
        puVar8 = *(ushort **)(lVar9 + 0x80);
        if (puVar8 != (ushort *)0x0) {
          *puVar8 = *puVar8 | (ushort)(1L << (*(byte *)(lVar9 + 0x78) & 0x3f));
        }
      }
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(puVar6 + 0x28));
  if (*(char *)(param_1 + 0x2ec) == '\x01') {
    lVar9 = FUN_14479d2ce(param_1 + 0x30);
    if (lVar9 != 0) {
      FUN_146028c4e(param_1);
    }
    *(undefined1 *)(param_1 + 0x2ec) = 0;
  }
  FUN_1448d5e3c(&local_70,puVar4);
  lVar9 = *(longlong *)(local_70 + 0x400);
  AcquireSRWLockShared((PSRWLOCK)(lVar9 + 0x58));
  if (*(int *)(param_1 + 0x308) != *(int *)(lVar9 + 0x50)) {
    *(int *)(param_1 + 0x308) = *(int *)(lVar9 + 0x50);
    if ((*(int *)(param_1 + 800) == 0) || (*(int *)(param_1 + 800) != *(int *)(lVar9 + 0x28))) {
      *(int *)(param_1 + 800) = *(int *)(lVar9 + 0x28);
      FUN_145b05478(param_1 + 0x310,lVar9 + 0x18);
      lVar7 = *(longlong *)(param_1 + 0x288);
      if (lVar7 != 0) {
        lVar14 = *(longlong *)(param_1 + 0x310);
        *(int *)(param_1 + 800) = *(int *)(param_1 + 800) + 2;
        if ((longlong)*(int *)(param_1 + 0x318) != 0) {
          lVar12 = (longlong)*(int *)(param_1 + 0x318) * 0x80 + lVar14;
          do {
            if ((*(char *)(lVar14 + 0x68) == '\x01') && (*(longlong *)(lVar14 + 0x70) != 0)) {
              local_a0 = *(longlong *)(lVar14 + 0x70);
              FUN_1400021e4(&local_a0,&local_98);
              uVar10 = (int)uStack_90 - 1;
              if ((int)uStack_90 == 0) {
                uVar10 = 0;
              }
              if (0 < (int)uVar10) {
                uVar11 = 0;
                do {
                  local_98[uVar11] =
                       (ushort)((ushort)local_98[uVar11] - 0x41 < 0x1a) * 0x20 + local_98[uVar11];
                  uVar11 = uVar11 + 1;
                } while (uVar10 != uVar11);
              }
              local_a8 = local_98;
              puVar13 = local_98;
              if ((int)uStack_90 == 0) {
                puVar13 = &DAT_149dfb77a;
              }
              local_98 = (undefined2 *)0x0;
              uStack_90 = 0;
              FUN_140002266(local_80,L"profile.dlc.%s",puVar13);
              FUN_140d07d58(lVar7 + 0x690,&DAT_14cbe06b8,local_80);
              if (local_80[0] != 0) {
                FUN_1400020a8();
              }
              if (local_a8 != (undefined2 *)0x0) {
                FUN_1400020a8(local_a8);
              }
              if (local_98 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
            }
            lVar14 = lVar14 + 0x80;
          } while (lVar14 != lVar12);
        }
        FUN_140714e1e(lVar7 + 0x690,&DAT_14cbe06b8,*puVar4);
        puVar8 = *(ushort **)(lVar7 + 0x80);
        if (puVar8 != (ushort *)0x0) {
          *puVar8 = *puVar8 | (ushort)(1L << (*(byte *)(lVar7 + 0x78) & 0x3f));
        }
      }
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar9 + 0x58));
  plVar2 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x288);
  if (lVar9 != 0) {
    FUN_1448d5e3c(&local_70,puVar4);
    lVar7 = *(longlong *)(local_70 + 0x640);
    SRWLock = (PSRWLOCK)(lVar7 + 0x28);
    AcquireSRWLockShared(SRWLock);
    iVar5 = *(int *)(lVar7 + 0x20);
    if (*(int *)(param_1 + 0x2f0) != iVar5) {
      *(int *)(param_1 + 0x2f0) = iVar5;
      FUN_140714c1e(lVar9 + 0x690,*(undefined4 *)(param_1 + 0x208));
      puVar8 = *(ushort **)(lVar9 + 0x80);
      if (puVar8 != (ushort *)0x0) {
        *puVar8 = *puVar8 | (ushort)(1L << (*(byte *)(lVar9 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared(SRWLock);
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_68 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar3 = (int *)((longlong)local_68 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x2c0) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_c8);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415c0f98 FUN_1415c0f98 body=618 status=ok
// SIG undefined FUN_1415c0f98(void)

void FUN_1415c0f98(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  ushort *puVar3;
  code *pcVar4;
  void *_Src;
  longlong *plVar5;
  void **ppvVar6;
  undefined1 auStack_b8 [32];
  longlong *local_98 [2];
  longlong local_88 [2];
  void *local_78;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x6f8);
  iVar2 = *(int *)(param_1 + 0x704);
  FUN_140f9c02e(*(undefined8 *)(param_1 + 0x6f8),*(undefined4 *)(param_1 + 0x700));
  *(undefined4 *)(param_1 + 0x700) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0x704) != 0)) {
    FUN_148a07b08(plVar1,0);
  }
  if (*(char *)(param_1 + 0x2c0) == '\0') {
    FUN_1400b22c2(local_88,&DAT_149e02088);
    FUN_1400b22c2(&local_78,&DAT_149e02088);
    FUN_14020fad6(local_88,L"action_ui_cursor_click");
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_1446ddda2(&local_68,"ContinueText",0);
    FUN_1410d1eba(local_98,&local_68);
    plVar5 = local_98[0];
    if (*(code **)(*local_98[0] + 0x50) != FUN_144828418) {
      plVar5 = (longlong *)(**(code **)(*local_98[0] + 0x50))(local_98[0]);
    }
    FUN_1447a1fc0(plVar5);
    pcVar4 = *(code **)(*local_98[0] + 0x28);
    if (pcVar4 == FUN_14482841c) {
      ppvVar6 = (void **)(local_98[0][5] + 8);
      if (local_98[0][5] == 0) {
        ppvVar6 = (void **)(local_98[0] + 3);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      ppvVar6 = (void **)(local_98[0] + 2);
    }
    else {
      ppvVar6 = (void **)(*pcVar4)(local_98[0]);
    }
    if (&local_78 != ppvVar6) {
      iVar2 = *(int *)(ppvVar6 + 1);
      _Src = *ppvVar6;
      local_70 = iVar2;
      if (iVar2 == 0 && local_6c == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,iVar2);
        if (iVar2 != 0) {
          memcpy(local_78,_Src,(longlong)iVar2 * 2);
        }
      }
    }
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))(local_98[0]);
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    iVar2 = *(int *)(param_1 + 0x700);
    *(uint *)(param_1 + 0x700) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x704) < iVar2 + 1U) {
      FUN_1457d7810(plVar1,iVar2);
    }
    FUN_14656d756((longlong)iVar2 * 0x20 + *plVar1,local_88);
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
  }
  puVar3 = *(ushort **)(param_1 + 0x80);
  if (puVar3 != (ushort *)0x0) {
    *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(param_1 + 0x78) & 0x3f));
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415c1204 FUN_1415c1204 body=1915 status=ok
// SIG undefined FUN_1415c1204(void)

int * FUN_1415c1204(int *param_1,int *param_2)

{
  float fVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  
  if ((*param_2 != *param_1) || (param_1[10] == 0)) {
    FUN_1447715ec(param_1,param_2);
    param_1[10] = param_1[10] + 1;
  }
  iVar5 = param_1[0x13];
  if ((*(longlong *)(param_2 + 0x11) != *(longlong *)(param_1 + 0x11)) ||
     (bVar7 = iVar5 == 0, iVar5 = 0, bVar7)) {
    *(longlong *)(param_1 + 0x11) = *(longlong *)(param_2 + 0x11);
    param_1[0x13] = iVar5 + 1;
  }
  FUN_1449a0272(param_1 + 0x14,param_2 + 0x14);
  FUN_1449a0272(param_1 + 0x1a,param_2 + 0x1a);
  iVar5 = param_1[0x21];
  if ((param_2[0x20] != param_1[0x20]) || (bVar7 = iVar5 == 0, iVar5 = 0, bVar7)) {
    param_1[0x20] = param_2[0x20];
    param_1[0x21] = iVar5 + 1;
  }
  fVar1 = (float)param_2[0x22];
  iVar5 = param_1[0x23];
  if (((fVar1 != (float)param_1[0x22]) || (NAN(fVar1) || NAN((float)param_1[0x22]))) ||
     (bVar7 = iVar5 == 0, iVar5 = 0, bVar7)) {
    param_1[0x22] = (int)fVar1;
    param_1[0x23] = iVar5 + 1;
  }
  plVar6 = (longlong *)(param_1 + 0x24);
  if (param_1[0x28] == 0) {
LAB_1415c12ea:
    plVar2 = *(longlong **)(param_2 + 0x24);
    plVar3 = (longlong *)*plVar6;
    if (plVar3 != plVar2) {
      *plVar6 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    param_1[0x26] = param_2[0x26];
    param_1[0x28] = param_1[0x28] + 1;
  }
  else {
    cVar4 = FUN_144722c14(plVar6,param_2 + 0x24,0);
    if (cVar4 == '\0') goto LAB_1415c12ea;
  }
  fVar1 = (float)param_2[0x2a];
  iVar5 = param_1[0x2b];
  if (((fVar1 != (float)param_1[0x2a]) || (NAN(fVar1) || NAN((float)param_1[0x2a]))) ||
     (bVar7 = iVar5 == 0, iVar5 = 0, bVar7)) {
    param_1[0x2a] = (int)fVar1;
    param_1[0x2b] = iVar5 + 1;
  }
  plVar6 = (longlong *)(param_1 + 0x2c);
  if (param_1[0x30] == 0) {
LAB_1415c137c:
    plVar2 = *(longlong **)(param_2 + 0x2c);
    plVar3 = (longlong *)*plVar6;
    if (plVar3 != plVar2) {
      *plVar6 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    param_1[0x2e] = param_2[0x2e];
    param_1[0x30] = param_1[0x30] + 1;
  }
  else {
    cVar4 = FUN_144722c14(plVar6,param_2 + 0x2c,0);
    if (cVar4 == '\0') goto LAB_1415c137c;
  }
  plVar6 = (longlong *)(param_1 + 0x32);
  if (param_1[0x36] == 0) {
LAB_1415c13dc:
    plVar2 = *(longlong **)(param_2 + 0x32);
    plVar3 = (longlong *)*plVar6;
    if (plVar3 != plVar2) {
      *plVar6 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    param_1[0x34] = param_2[0x34];
    param_1[0x36] = param_1[0x36] + 1;
  }
  else {
    cVar4 = FUN_144722c14(plVar6,param_2 + 0x32,0);
    if (cVar4 == '\0') goto LAB_1415c13dc;
  }
  plVar6 = (longlong *)(param_1 + 0x38);
  if (param_1[0x3c] == 0) {
LAB_1415c143c:
    plVar2 = *(longlong **)(param_2 + 0x38);
    plVar3 = (longlong *)*plVar6;
    if (plVar3 != plVar2) {
      *plVar6 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    param_1[0x3a] = param_2[0x3a];
    param_1[0x3c] = param_1[0x3c] + 1;
  }
  else {
    cVar4 = FUN_144722c14(plVar6,param_2 + 0x38,0);
    if (cVar4 == '\0') goto LAB_1415c143c;
  }
  plVar6 = (longlong *)(param_1 + 0x3e);
  if (param_1[0x42] == 0) {
LAB_1415c149c:
    plVar2 = *(longlong **)(param_2 + 0x3e);
    plVar3 = (longlong *)*plVar6;
    if (plVar3 != plVar2) {
      *plVar6 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    param_1[0x40] = param_2[0x40];
    param_1[0x42] = param_1[0x42] + 1;
  }
  else {
    cVar4 = FUN_144722c14(plVar6,param_2 + 0x3e,0);
    if (cVar4 == '\0') goto LAB_1415c149c;
  }
  iVar5 = param_1[0x45];
  if (((char)param_2[0x44] != (char)param_1[0x44]) || (bVar7 = iVar5 == 0, iVar5 = 0, bVar7)) {
    *(char *)(param_1 + 0x44) = (char)param_2[0x44];
    param_1[0x45] = iVar5 + 1;
  }
  iVar5 = param_1[0x47];
  if (((char)param_2[0x46] != (char)param_1[0x46]) || (bVar7 = iVar5 == 0, iVar5 = 0, bVar7)) {
    *(char *)(param_1 + 0x46) = (char)param_2[0x46];
    param_1[0x47] = iVar5 + 1;
  }
  iVar5 = param_1[0x49];
  if (((char)param_2[0x48] != (char)param_1[0x48]) || (bVar7 = iVar5 == 0, iVar5 = 0, bVar7)) {
    *(char *)(param_1 + 0x48) = (char)param_2[0x48];
    param_1[0x49] = iVar5 + 1;
  }
  iVar5 = param_1[0x4b];
  if (((char)param_2[0x4a] != (char)param_1[0x4a]) || (bVar7 = iVar5 == 0, iVar5 = 0, bVar7)) {
    *(char *)(param_1 + 0x4a) = (char)param_2[0x4a];
    param_1[0x4b] = iVar5 + 1;
  }
  iVar5 = param_1[0x4d];
  if (((char)param_2[0x4c] != (char)param_1[0x4c]) || (bVar7 = iVar5 == 0, iVar5 = 0, bVar7)) {
    *(char *)(param_1 + 0x4c) = (char)param_2[0x4c];
    param_1[0x4d] = iVar5 + 1;
  }
  iVar5 = param_1[0x4f];
  if (((char)param_2[0x4e] != (char)param_1[0x4e]) || (bVar7 = iVar5 == 0, iVar5 = 0, bVar7)) {
    *(char *)(param_1 + 0x4e) = (char)param_2[0x4e];
    param_1[0x4f] = iVar5 + 1;
  }
  iVar5 = param_1[0x51];
  if (((char)param_2[0x50] != (char)param_1[0x50]) || (bVar7 = iVar5 == 0, iVar5 = 0, bVar7)) {
    *(char *)(param_1 + 0x50) = (char)param_2[0x50];
    param_1[0x51] = iVar5 + 1;
  }
  FUN_145f00ea2(param_1 + 0x52,param_2 + 0x52);
  param_1[0x56] = param_1[0x56] + 1;
  FUN_1449a0272(param_1 + 0x58,param_2 + 0x58);
  FUN_1449a0272(param_1 + 0x5e,param_2 + 0x5e);
  iVar5 = param_1[0x77];
  if ((char)param_2[0x76] == (char)param_1[0x76]) {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1415c1655;
    }
  }
  else {
LAB_1415c1655:
    *(char *)(param_1 + 0x76) = (char)param_2[0x76];
    param_1[0x77] = iVar5 + 1;
  }
  iVar5 = param_1[0x79];
  if ((char)param_2[0x78] == (char)param_1[0x78]) {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1415c167d;
    }
  }
  else {
LAB_1415c167d:
    *(char *)(param_1 + 0x78) = (char)param_2[0x78];
    param_1[0x79] = iVar5 + 1;
  }
  iVar5 = param_1[0x7b];
  if ((char)param_2[0x7a] == (char)param_1[0x7a]) {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1415c16a5;
    }
  }
  else {
LAB_1415c16a5:
    *(char *)(param_1 + 0x7a) = (char)param_2[0x7a];
    param_1[0x7b] = iVar5 + 1;
  }
  iVar5 = param_1[0x7d];
  if ((char)param_2[0x7c] == (char)param_1[0x7c]) {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1415c16cd;
    }
  }
  else {
LAB_1415c16cd:
    *(char *)(param_1 + 0x7c) = (char)param_2[0x7c];
    param_1[0x7d] = iVar5 + 1;
  }
  iVar5 = param_1[0x7f];
  if ((char)param_2[0x7e] == (char)param_1[0x7e]) {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1415c16f5;
    }
  }
  else {
LAB_1415c16f5:
    *(char *)(param_1 + 0x7e) = (char)param_2[0x7e];
    param_1[0x7f] = iVar5 + 1;
  }
  iVar5 = param_1[0x81];
  if ((char)param_2[0x80] == (char)param_1[0x80]) {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1415c171d;
    }
  }
  else {
LAB_1415c171d:
    *(char *)(param_1 + 0x80) = (char)param_2[0x80];
    param_1[0x81] = iVar5 + 1;
  }
  iVar5 = param_1[0x88];
  if (*(longlong *)(param_2 + 0x86) == *(longlong *)(param_1 + 0x86)) {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1415c1741;
    }
  }
  else {
LAB_1415c1741:
    *(longlong *)(param_1 + 0x86) = *(longlong *)(param_2 + 0x86);
    param_1[0x88] = iVar5 + 1;
  }
  if ((param_2[0x8a] != param_1[0x8a]) || (param_1[0x94] == 0)) {
    FUN_1447715ec(param_1 + 0x8a,param_2 + 0x8a);
    param_1[0x94] = param_1[0x94] + 1;
  }
  if ((param_2[0x96] != param_1[0x96]) || (param_1[0xa0] == 0)) {
    FUN_1447715ec(param_1 + 0x96,param_2 + 0x96);
    param_1[0xa0] = param_1[0xa0] + 1;
  }
  iVar5 = param_1[0xa3];
  if ((char)param_2[0xa2] == (char)param_1[0xa2]) {
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_1415c17d0;
    }
  }
  else {
LAB_1415c17d0:
    *(char *)(param_1 + 0xa2) = (char)param_2[0xa2];
    param_1[0xa3] = iVar5 + 1;
  }
  if ((char)param_2[0xa4] == (char)param_1[0xa4]) {
    if (param_1[0xa5] == 0) {
      iVar5 = 1;
      goto LAB_1415c17ff;
    }
  }
  else {
    iVar5 = param_1[0xa5] + 1;
LAB_1415c17ff:
    *(char *)(param_1 + 0xa4) = (char)param_2[0xa4];
    param_1[0xa5] = iVar5;
  }
  if ((char)param_2[0xa6] == (char)param_1[0xa6]) {
    if (param_1[0xa7] == 0) {
      iVar5 = 1;
      goto LAB_1415c182c;
    }
  }
  else {
    iVar5 = param_1[0xa7] + 1;
LAB_1415c182c:
    *(char *)(param_1 + 0xa6) = (char)param_2[0xa6];
    param_1[0xa7] = iVar5;
  }
  plVar6 = (longlong *)(param_1 + 0xa8);
  if (param_1[0xac] == 0) {
LAB_1415c185f:
    plVar2 = *(longlong **)(param_2 + 0xa8);
    plVar3 = (longlong *)*plVar6;
    if (plVar3 != plVar2) {
      *plVar6 = (longlong)plVar2;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    param_1[0xaa] = param_2[0xaa];
    param_1[0xac] = param_1[0xac] + 1;
  }
  else {
    cVar4 = FUN_144722c14(plVar6,param_2 + 0xa8,0);
    if (cVar4 == '\0') goto LAB_1415c185f;
  }
  if (*(longlong *)(param_2 + 0xb4) == *(longlong *)(param_1 + 0xb4)) {
    if (param_1[0xb6] == 0) {
      iVar5 = 1;
      goto LAB_1415c18bb;
    }
  }
  else {
    iVar5 = param_1[0xb6] + 1;
LAB_1415c18bb:
    *(longlong *)(param_1 + 0xb4) = *(longlong *)(param_2 + 0xb4);
    param_1[0xb6] = iVar5;
  }
  if (*(longlong *)(param_2 + 0xb8) == *(longlong *)(param_1 + 0xb8)) {
    if (param_1[0xba] == 0) {
      iVar5 = 1;
      goto LAB_1415c18eb;
    }
  }
  else {
    iVar5 = param_1[0xba] + 1;
LAB_1415c18eb:
    *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_2 + 0xb8);
    param_1[0xba] = iVar5;
  }
  plVar6 = (longlong *)(param_1 + 0xae);
  if (param_1[0xb2] != 0) {
    cVar4 = FUN_144722c14(plVar6,param_2 + 0xae,0);
    if (cVar4 != '\0') goto LAB_1415c1958;
  }
  plVar2 = *(longlong **)(param_2 + 0xae);
  plVar3 = (longlong *)*plVar6;
  if (plVar3 != plVar2) {
    *plVar6 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  param_1[0xb0] = param_2[0xb0];
  param_1[0xb2] = param_1[0xb2] + 1;
LAB_1415c1958:
  FUN_1449a0272(param_1 + 0xbc,param_2 + 0xbc);
  return param_1;
}



// FUNCTION 1415c1980 FUN_1415c1980 body=517 status=ok
// SIG undefined FUN_1415c1980(void)

void FUN_1415c1980(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_1 + 0x68) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar4 = *(longlong **)(param_1 + 0x70);
  if (plVar4 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x70);
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x70) = plVar2;
  }
  local_40 = (void *)0x0;
  uStack_38._0_4_ = *(int *)(param_3 + 1);
  lVar5 = (longlong)(int)uStack_38;
  _Src = (void *)*param_3;
  if (lVar5 == 0) {
    local_44 = 0;
    local_48 = 0;
    local_50 = (void *)0x0;
  }
  else {
    FUN_1446dd670(&local_40,(int)uStack_38,0);
    memcpy(local_40,_Src,lVar5 * 2);
    local_50 = local_40;
    local_48 = (int)uStack_38;
    local_44 = uStack_38._4_4_;
  }
  local_40 = (void *)0x0;
  uStack_38 = 0;
  cVar3 = FUN_140c44378(*param_2);
  if (cVar3 == '\0') {
    local_68 = 0;
    FUN_1413f0866(*param_2,&local_50,&local_68,0);
    FUN_1444bd3c6(&local_68,&local_50,*param_2);
    *(ulonglong *)(param_1 + 0x50) = CONCAT44(uStack_64,local_68);
    if ((undefined4 *)(param_1 + 0x50) == &local_68) {
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x58) = local_60;
      local_60 = 0;
      *(undefined4 *)(param_1 + 0x60) = local_58;
      *(undefined4 *)(param_1 + 100) = local_54;
    }
  }
  else {
    FUN_1444bd3c6(&local_68,&local_50,*param_2);
    *(ulonglong *)(param_1 + 0x50) = CONCAT44(uStack_64,local_68);
    if ((undefined4 *)(param_1 + 0x50) == &local_68) {
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x58) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x58) = local_60;
      local_60 = 0;
      *(undefined4 *)(param_1 + 0x60) = local_58;
      *(undefined4 *)(param_1 + 100) = local_54;
    }
    FUN_1444c4752(param_1);
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c1b86 FUN_1415c1b86 body=188 status=ok
// SIG undefined FUN_1415c1b86(void)

byte FUN_1415c1b86(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  
  cVar2 = FUN_143c09d32();
  cVar1 = DAT_14c763034;
  if (cVar2 == '\0') {
    bVar3 = 0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb521d8) {
      FUN_144b3d300(&DAT_14cb521d8);
      if (DAT_14cb521d8 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cb521d0 =
             (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.NGX.DLSS.Enable",1);
        _Init_thread_footer(&DAT_14cb521d8);
      }
    }
    if (DAT_14cb521d0 == (longlong *)0x0) {
      bVar5 = false;
    }
    else {
      iVar4 = (**(code **)(*DAT_14cb521d0 + 0xb0))();
      bVar5 = iVar4 != 0;
    }
    bVar3 = cVar1 == '\0' & bVar5;
  }
  return bVar3;
}



// FUNCTION 1415c1c42 FUN_1415c1c42 body=587 status=ok
// SIG undefined FUN_1415c1c42(void)

void FUN_1415c1c42(undefined8 param_1,byte param_2)

{
  float fVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  uint unaff_EDI;
  ulonglong uVar10;
  bool bVar11;
  
  cVar3 = FUN_143c09d32();
  if (cVar3 != '\0') {
    if (DAT_14cb52068 == 0) {
      uVar6 = FUN_1464a83fc();
      DAT_14cb52068 = FUN_14171c317(FUN_1464a845c,uVar6);
    }
    uVar5 = (ulonglong)*(int *)(DAT_14cb52068 + 0x48);
    if ((longlong)uVar5 < 1) {
      return;
    }
    uVar9 = (ulonglong)param_2;
    if (*(ulonglong *)(*(longlong *)(DAT_14cb52068 + 0x40) + 8) != uVar9) {
      uVar10 = 0;
      puVar8 = (ulonglong *)(*(longlong *)(DAT_14cb52068 + 0x40) + 0x18);
      do {
        if (uVar5 - 1 == uVar10) {
          return;
        }
        uVar10 = uVar10 + 1;
        uVar2 = *puVar8;
        puVar8 = puVar8 + 2;
      } while (uVar2 != uVar9);
      if (uVar5 <= uVar10) {
        return;
      }
    }
    uVar5 = FUN_1404d8156();
    if (uVar5 == uVar9) {
      return;
    }
    bVar11 = DAT_14c763034 == '\0';
    if (1 < param_2 && bVar11) {
      unaff_EDI = 1;
      if ((byte)(param_2 - 2) < 6) {
        unaff_EDI = 5 - (byte)(param_2 - 2);
      }
    }
    DAT_14c763044 = param_2;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb521f8) && (FUN_144b3d300(), DAT_14cb521f8 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb521f0 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ScreenPercentage",1);
      _Init_thread_footer();
    }
    if (1 < param_2 && bVar11) {
      if (unaff_EDI < 6) {
        lVar7 = *(longlong *)(&DAT_14afc1810 + (ulonglong)unaff_EDI * 8);
      }
      else {
        lVar7 = 0;
      }
      if (*(char *)(DAT_14cb51ee0 + 0x1c + lVar7 * 0x2c) == '\x01') {
        uVar6 = 1;
        if (DAT_14cb521f0 != (longlong *)0x0) {
          if (unaff_EDI < 6) {
            lVar7 = *(longlong *)(&DAT_14afc1810 + (ulonglong)unaff_EDI * 8);
          }
          else {
            lVar7 = 0;
          }
          fVar1 = *(float *)(DAT_14cb51ee0 + 0x20 + lVar7 * 0x2c);
          uVar4 = (**(code **)(*DAT_14cb521f0 + 0x18))();
          FUN_140635f48(DAT_14cb521f0,fVar1 * 100.0,uVar4 & 0xff000000,0);
        }
        goto LAB_1415c1e1e;
      }
    }
    if (DAT_14cb521f0 != (longlong *)0x0) {
      uVar4 = (**(code **)(*DAT_14cb521f0 + 0x18))();
      FUN_140635f48(DAT_14cb521f0,0x42c80000,uVar4 & 0xff000000,0);
    }
    if (DAT_14cb52189 == '\0') {
      uVar6 = 0;
LAB_1415c1e1e:
      FUN_143c07e86(uVar6);
      return;
    }
  }
  return;
}



// FUNCTION 1415c1e8e FUN_1415c1e8e body=243 status=ok
// SIG undefined FUN_1415c1e8e(void)

undefined1 FUN_1415c1e8e(byte param_1)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (DAT_14cb52068 == 0) {
    uVar4 = FUN_1464a83fc();
    DAT_14cb52068 = FUN_14171c317(FUN_1464a845c,uVar4);
  }
  uVar3 = (ulonglong)*(int *)(DAT_14cb52068 + 0x48);
  if (0 < (longlong)uVar3) {
    uVar7 = (ulonglong)param_1;
    if (*(ulonglong *)(*(longlong *)(DAT_14cb52068 + 0x40) + 8) != uVar7) {
      uVar8 = 0;
      puVar6 = (ulonglong *)(*(longlong *)(DAT_14cb52068 + 0x40) + 0x18);
      do {
        if (uVar3 - 1 == uVar8) {
          return 0;
        }
        uVar8 = uVar8 + 1;
        uVar1 = *puVar6;
        puVar6 = puVar6 + 2;
      } while (uVar1 != uVar7);
      if (uVar3 <= uVar8) {
        return 0;
      }
    }
    uVar3 = FUN_1404d8156();
    if (uVar3 != uVar7) {
      if (param_1 == 0) {
        return 1;
      }
      cVar2 = FUN_143c09d32();
      if ((cVar2 != '\0') && (cVar2 = FUN_143c09d32(), cVar2 != '\0')) {
        cVar2 = FUN_143c09d32();
        if (param_1 == 1) {
          return 0;
        }
        if (cVar2 != '\0') {
          if (DAT_14c763034 == '\0') {
            if ((byte)(param_1 - 2) < 6) {
              lVar5 = (&DAT_14afc17e0)[(byte)(param_1 - 2)];
            }
            else {
              lVar5 = 0;
            }
            return *(undefined1 *)(DAT_14cb51ee0 + 0x1c + lVar5 * 0x2c);
          }
          return 0;
        }
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 1415c1f82 FUN_1415c1f82 body=1181 status=ok
// SIG undefined FUN_1415c1f82(void)

undefined4 * FUN_1415c1f82(undefined4 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  undefined1 local_398 [16];
  double adStack_388 [2];
  undefined8 local_378;
  undefined4 auStack_370 [2];
  undefined8 local_368 [44];
  double adStack_208 [2];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8 [47];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)local_398;
  *param_1 = 0;
  plVar1 = (longlong *)(param_1 + 2);
  *(undefined8 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x11) = 0xffffffff00000080;
  param_1[0x13] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x30),4000);
  local_1e8[0] = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8[1] = 0x4024000000000000;
  local_1e8[2] = 0;
  local_1e8[3] = 0;
  local_1e8[4] = 0x4034000000000000;
  local_1e8[5] = 0;
  local_1e8[6] = 0;
  local_1e8[7] = 0x403e000000000000;
  local_1e8[8] = 0;
  local_1e8[9] = 0;
  local_1e8[10] = 0;
  local_1e8[0xb] = 0x4024000000000000;
  local_1e8[0xc] = 0;
  local_1e8[0xd] = 0x4024000000000000;
  local_1e8[0xe] = 0x4024000000000000;
  local_1e8[0xf] = 0x4024000000000000;
  local_1e8[0x10] = 0x4034000000000000;
  local_1e8[0x11] = 0x4024000000000000;
  local_1e8[0x12] = 0x4024000000000000;
  local_1e8[0x13] = 0x403e000000000000;
  local_1e8[0x14] = 0x4024000000000000;
  local_1e8[0x15] = 0;
  local_1e8[0x16] = 0;
  local_1e8[0x17] = 0x4034000000000000;
  local_1e8[0x18] = 0;
  local_1e8[0x19] = 0x4024000000000000;
  local_1e8[0x1a] = 0x4034000000000000;
  local_1e8[0x1b] = 0x4024000000000000;
  local_1e8[0x1c] = 0x4034000000000000;
  local_1e8[0x1d] = 0x4034000000000000;
  local_1e8[0x1e] = 0x4024000000000000;
  local_1e8[0x1f] = 0x403e000000000000;
  local_1e8[0x20] = 0x4034000000000000;
  local_1e8[0x21] = 0;
  local_1e8[0x22] = 0;
  local_1e8[0x23] = 0x403e000000000000;
  local_1e8[0x24] = 0;
  local_1e8[0x25] = 0x4024000000000000;
  local_1e8[0x26] = 0x403e000000000000;
  local_1e8[0x27] = 0;
  local_1e8[0x28] = 0x4034000000000000;
  local_1e8[0x29] = 0x403e000000000000;
  local_1e8[0x2a] = 0;
  local_1e8[0x2b] = 0x403e000000000000;
  local_1e8[0x2c] = 0x403e000000000000;
  local_1e8[0x2d] = 0;
  lVar13 = 0x10;
  do {
    dVar5 = *(double *)((longlong)&local_1f8 + lVar13);
    dVar16 = *(double *)((longlong)adStack_208 + lVar13 + 8) + -0.15000000596046448;
    dVar17 = *(double *)((longlong)adStack_208 + lVar13) + -0.15000000596046448;
    *(double *)((longlong)adStack_388 + lVar13) = dVar17;
    *(double *)((longlong)adStack_388 + lVar13 + 8) = dVar16;
    *(double *)((longlong)&local_378 + lVar13) = dVar5;
    dVar8 = dVar5 * dVar5 + dVar17 * dVar17 + dVar16 * dVar16;
    if (9.99999993922529e-09 < dVar8) {
      dVar8 = 1.0 / SQRT(dVar8);
      *(double *)((longlong)adStack_388 + lVar13) = dVar17 * dVar8;
      *(double *)((longlong)adStack_388 + lVar13 + 8) = dVar16 * dVar8;
      *(double *)((longlong)&local_378 + lVar13) = dVar5 * dVar8;
    }
    lVar13 = lVar13 + 0x18;
  } while (lVar13 != 400);
  FUN_14602b282(plVar1);
  lVar13 = 0;
  do {
    plVar3 = (longlong *)(*plVar1 + lVar13 * 0x30);
    if (*(int *)(*plVar1 + 0xc + lVar13 * 0x30) < 0x10) {
      FUN_1447a8aa0(plVar3,0x10);
    }
    plVar2 = plVar3 + 2;
    if (*(int *)((longlong)plVar3 + 0x1c) < 0x10) {
      FUN_1447a8aa0(plVar2,0x10);
    }
    lVar15 = 0;
    do {
      iVar6 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar6 + 1U) {
        FUN_1403e3958(plVar3,iVar6);
      }
      lVar14 = *plVar3;
      *(undefined8 *)(lVar14 + 0x10 + (longlong)iVar6 * 0x18) =
           *(undefined8 *)((longlong)local_1e8 + lVar15);
      uVar9 = *(undefined4 *)((longlong)&local_1f8 + lVar15 + 4);
      uVar10 = *(undefined4 *)((longlong)&uStack_1f0 + lVar15);
      uVar11 = *(undefined4 *)((longlong)&uStack_1f0 + lVar15 + 4);
      puVar4 = (undefined4 *)(lVar14 + (longlong)iVar6 * 0x18);
      *puVar4 = *(undefined4 *)((longlong)&local_1f8 + lVar15);
      puVar4[1] = uVar9;
      puVar4[2] = uVar10;
      puVar4[3] = uVar11;
      iVar6 = (int)plVar3[3];
      *(uint *)(plVar3 + 3) = iVar6 + 1U;
      if (*(uint *)((longlong)plVar3 + 0x1c) < iVar6 + 1U) {
        FUN_1403e3958(plVar2,iVar6);
      }
      lVar14 = *plVar2;
      *(undefined8 *)(lVar14 + 0x10 + (longlong)iVar6 * 0x18) =
           *(undefined8 *)((longlong)local_368 + lVar15);
      uVar9 = *(undefined4 *)((longlong)auStack_370 + lVar15 + -4);
      uVar10 = *(undefined4 *)((longlong)auStack_370 + lVar15);
      uVar11 = *(undefined4 *)((longlong)auStack_370 + lVar15 + 4);
      puVar4 = (undefined4 *)(lVar14 + (longlong)iVar6 * 0x18);
      *puVar4 = *(undefined4 *)((longlong)&local_378 + lVar15);
      puVar4[1] = uVar9;
      puVar4[2] = uVar10;
      puVar4[3] = uVar11;
      lVar15 = lVar15 + 0x18;
    } while (lVar15 != 0x180);
    plVar2 = plVar3 + 4;
    if (*(int *)((longlong)plVar3 + 0x2c) < 0x36) {
      FUN_14480809c(plVar2);
    }
    lVar15 = 0;
    do {
      lVar14 = plVar3[5];
      uVar12 = (int)lVar14 + 1;
      *(uint *)(plVar3 + 5) = uVar12;
      if (*(uint *)((longlong)plVar3 + 0x2c) < uVar12) {
        FUN_1447808da(plVar2);
      }
      *(undefined4 *)(*plVar2 + (longlong)(int)lVar14 * 4) =
           *(undefined4 *)((longlong)&DAT_14a5a8270 + lVar15);
      lVar15 = lVar15 + 4;
    } while (lVar15 != 0xd8);
    lVar13 = lVar13 + 1;
  } while (lVar13 != 4);
  lVar13 = 0;
  do {
    lVar15 = *plVar1;
    lVar14 = 0;
    do {
      lVar7 = *(longlong *)(lVar13 * 0x30 + lVar15);
      *(double *)(lVar7 + lVar14) =
           *(double *)(lVar7 + lVar14) + (double)((float)(int)lVar13 * 30.0);
      lVar14 = lVar14 + 0x18;
    } while (lVar14 != 0x180);
    lVar13 = lVar13 + 1;
  } while (lVar13 != 4);
  if ((local_70 ^ (ulonglong)local_398) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c2420 FUN_1415c2420 body=223 status=ok
// SIG undefined FUN_1415c2420(void)

void FUN_1415c2420(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b8b7f80;
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_1406435d7(param_1[0x45],*(undefined4 *)(param_1 + 0x46));
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x42] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x42] + 0x10))();
  }
  FUN_140fe7f98(param_1 + 0x16);
  *param_1 = &PTR_FUN_14b473650;
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1415c2500 FUN_1415c2500 body=7 status=ok
// SIG undefined FUN_1415c2500(void)

undefined1 FUN_1415c2500(void)

{
  return DAT_14cb71bf8;
}



// FUNCTION 1415c2508 FUN_1415c2508 body=193 status=ok
// SIG undefined FUN_1415c2508(void)

undefined4 FUN_1415c2508(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_138 [32];
  undefined1 local_118 [216];
  undefined4 local_40 [2];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar2 = 0xffffffff;
  if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34)) < 4) {
    cVar1 = FUN_1485eca5a(param_1,param_2 + 0x1c);
    if (cVar1 == '\0') {
      cVar1 = FUN_1485ecb8a(param_1,param_2 + 0x24);
      if (cVar1 == '\0') {
        FUN_146220a8a(local_118,param_2,param_3);
        FUN_14607dc56(param_1,local_40);
        FUN_1464a4e74(local_38,local_118);
        FUN_145c7cb60(local_118);
        uVar2 = local_40[0];
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c25ca FUN_1415c25ca body=277 status=ok
// SIG undefined FUN_1415c25ca(void)

void FUN_1415c25ca(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Math";
  local_48 = 4;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Math";
  local_48 = 4;
  FUN_140208c1e(&DAT_14caeac30,local_58,local_54,&local_50);
  local_50 = L"Utility";
  local_48 = 7;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Utility";
  local_48 = 7;
  FUN_140208c1e(&DAT_14caeac40,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c26e0 FUN_1415c26e0 body=481 status=ok
// SIG undefined FUN_1415c26e0(void)

void FUN_1415c26e0(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar12 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar12 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar10 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      plVar7 = *(longlong **)(lVar11 + 0x20 + (longlong)iVar6 * 0x38);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      if (*(longlong *)(lVar11 + (longlong)iVar6 * 0x38 + 0x10) != 0) {
        FUN_1400020a8();
      }
      uVar10 = uVar10 & ~(uint)uVar12;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar10;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar8 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar3 - lVar11 == lVar8) goto LAB_1415c281e;
        }
        iVar13 = iVar13 + (int)lVar8 + 1;
        uVar10 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1415c281e:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c28c2 FUN_1415c28c2 body=107 status=ok
// SIG undefined FUN_1415c28c2(void)

undefined1 FUN_1415c28c2(void)

{
  char cVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca9a5a4) {
    FUN_144b3d300(&DAT_14ca9a5a4);
    if (DAT_14ca9a5a4 == -1) {
      cVar1 = FUN_141528a2c();
      if (cVar1 == '\0') {
        DAT_14ca9a5a0 = 0;
      }
      else {
        DAT_14ca9a5a0 = FUN_14602e73a();
      }
      _Init_thread_footer(&DAT_14ca9a5a4);
    }
  }
  return DAT_14ca9a5a0;
}



// FUNCTION 1415c292e FUN_1415c292e body=245 status=ok
// SIG undefined FUN_1415c292e(void)

longlong * FUN_1415c292e(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_145fcd36a();
  local_48 = param_3;
  local_40 = param_4;
  (**(code **)(*DAT_14ca83900 + 0x138))
            (DAT_14ca83900,&local_30,param_2,*(undefined8 *)(lVar4 + 0x48));
  *param_1 = local_30;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
    if (local_30 != 0) {
      LOCK();
      puVar1 = (uint *)(local_30 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_30 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_30 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = local_30;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar8 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar8) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar8);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar8 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar8) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar8);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1415c2a24 FUN_1415c2a24 body=427 status=ok
// SIG undefined FUN_1415c2a24(void)

undefined * FUN_1415c2a24(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caad338) {
    FUN_144b3d300(&DAT_14caad338);
    if (DAT_14caad338 == -1) {
      FUN_146034380(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"SlateView";
      local_70 = L"SlateView";
      local_78 = L"FSlateViewUniformParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x23f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caad2b8,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1432c28fe);
      _Init_thread_footer(&DAT_14caad338);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14caad2b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c2bd0 FUN_1415c2bd0 body=646 status=ok
// SIG undefined FUN_1415c2bd0(void)

void FUN_1415c2bd0(longlong param_1)

{
  ushort *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong *plVar6;
  byte *pbVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_58 [42];
  byte local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  byte local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x240) & 1) != 0) {
    uVar3 = FUN_140843f56();
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x238) + 0x47c0);
    if (lVar4 != 0) {
      lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x238) + 0x47b8);
      lVar4 = lVar4 * 0x88;
      do {
        FUN_140f2f85c(lVar8,0);
        lVar8 = lVar8 + 0x88;
        lVar4 = lVar4 + -0x88;
      } while (lVar4 != 0);
    }
    if (*(char *)(*(longlong *)(param_1 + 0x230) + 0x68) == '\x01') {
      lVar4 = *(longlong *)(param_1 + 0x238) + 0x60e8;
      FUN_140fb62a4(lVar4,&DAT_14cbc67a0,0);
      FUN_1412bb140(lVar4,DAT_14cbc67a0,0);
    }
    if ((*(byte *)(param_1 + 0x244) < 0xb) &&
       ((0x786U >> (*(byte *)(param_1 + 0x244) & 0x1f) & 1) != 0)) {
      FUN_143d06c5c(*(longlong *)(param_1 + 0x238) + 0x4128,0);
    }
    *(undefined1 *)(param_1 + 0x245) = 0;
    if ((*(byte *)(param_1 + 0x240) & 1) != 0) {
      puVar1 = (ushort *)(*(longlong *)(param_1 + 0x238) + 0x7558);
      *puVar1 = *puVar1 & 0xff3f;
      uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x238) + 0x28);
      if (uVar2 < 0xffffffff00000000) {
        plVar6 = DAT_14c9980d0;
        if (DAT_14c9980d8 == 0) {
          plVar6 = (longlong *)0x0;
        }
        (**(code **)(*plVar6 + 0x58))();
      }
      else {
        uVar9 = (uint)uVar2;
        if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
          puVar5 = &DAT_14c998070;
          if (DAT_14c998080 != (undefined *)0x0) {
            puVar5 = DAT_14c998080;
          }
          if ((*(uint *)(puVar5 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1) != 0) {
            lVar8 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
            lVar4 = *(longlong *)(lVar8 + 0x18);
            if (*(longlong *)(lVar8 + 0x18) == 0) {
              lVar4 = lVar8 + 8;
            }
            *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 1;
            *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
          }
        }
      }
    }
    if (*(char *)(param_1 + 0x243) == '\x02') {
      local_2e = *(byte *)(param_1 + 0x240) & 1;
      local_2c = 0;
      local_2d = (char)uVar3;
      FUN_1447cd2ec(param_1 + 0x138);
    }
    FUN_14164c272(param_1,0);
    FUN_140843a9c(param_1);
    local_29 = *(undefined1 *)(param_1 + 0x244);
    local_2b = *(byte *)(param_1 + 0x240) & 1;
    pbVar7 = &local_2b;
    local_2a = (char)uVar3;
    FUN_1447cd2ec(param_1 + 0x68);
    FUN_1440fd3c6(param_1 + 0x78,
                  CONCAT71((int7)((ulonglong)pbVar7 >> 8),*(undefined1 *)(param_1 + 0x240)) &
                  0xffffffffffffff01,uVar3,*(undefined1 *)(param_1 + 0x244));
    if (*(longlong *)(param_1 + 0x358) != 0) {
      lVar4 = FUN_140cf8aa6(*(undefined8 *)(param_1 + 0x238));
      if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x358) != 0)) {
        FUN_14480f766(lVar4 + 0xcf8);
      }
      *(undefined8 *)(param_1 + 0x358) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415c2e58 FUN_1415c2e58 body=1055 status=ok
// SIG undefined FUN_1415c2e58(void)

void FUN_1415c2e58(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_e8 [40];
  char local_c0 [16];
  longlong *local_b0;
  undefined4 local_98 [2];
  float local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  float local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar5 = *(longlong *)(param_1 + 0x318);
  if (lVar5 == 0) goto LAB_1415c2e8a;
  if (*(int *)(param_1 + 0x28c) == 0) {
LAB_1415c30a5:
    uVar6 = 0;
  }
  else {
    uVar8 = *(uint *)(param_1 + 0x288);
    uVar6 = 0;
    if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
      puVar9 = (undefined8 *)
               ((ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
      if ((puVar9 == (undefined8 *)0x0) ||
         ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x28c) ||
          ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_1415c30a5;
      uVar6 = *puVar9;
    }
  }
  local_c0[0] = '\0';
  local_98[0] = 0;
  FUN_1456bb102(local_c0,uVar6);
  pfVar11 = &local_90;
  FUN_1448729ea(lVar5 + 0x1e0,pfVar11,local_c0);
  if (local_70 == 3) {
    local_70 = 3;
    fVar13 = local_90;
  }
  else {
    pfVar10 = &local_68;
    FUN_1400b56fe(pfVar10,&local_90,3);
    fVar13 = local_68;
    if (local_48 == 0) {
      fVar13 = 1.0;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_50) {
        pfVar10 = (float *)CONCAT44(uStack_64,local_68);
      }
      (*pcVar2)(pfVar10);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(CONCAT44(uStack_64,local_68));
    }
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_78) {
      pfVar11 = (float *)CONCAT44(uStack_8c,local_90);
    }
    (*pcVar2)(pfVar11);
  }
  if (0x18 < local_78) {
    FUN_1400020a8(CONCAT44(uStack_8c,local_90));
  }
  FUN_1448173f8(local_98);
  if ((local_c0[0] == '\x03') && (local_b0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_b0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b0 + 0x10))();
    }
  }
  if (0.0 < fVar13) {
    if (0 < *(int *)(param_1 + 0x300)) {
      FUN_14053d8da(param_1 + 0x2f8,1);
    }
    *(undefined4 *)(param_1 + 0x328) = 0;
    *(uint *)(param_1 + 0x32c) = -(uint)(*(int *)(*(longlong *)(param_1 + 0x318) + 0x508) < 1);
    goto LAB_1415c2e8a;
  }
  cVar4 = FUN_145ec36f4(param_1,1);
  if (cVar4 == '\0') goto LAB_1415c2e8a;
  if (*(longlong *)(param_1 + 0x338) != 0) {
    if ((((*(int *)(param_1 + 0x294) != 0) && (uVar8 = *(uint *)(param_1 + 0x290), -1 < (int)uVar8))
        && ((int)uVar8 < DAT_14c9647dc)) &&
       (((puVar9 = (undefined8 *)
                   ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
         puVar9 != (undefined8 *)0x0 && (*(int *)(puVar9 + 2) == *(int *)(param_1 + 0x294))) &&
        ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar9 + 1) & 0x10200000) == 0) {
        uVar6 = *puVar9;
      }
      else {
        uVar6 = 0;
      }
      lVar5 = FUN_1447210f0(uVar6);
      if (lVar5 != 0) {
        if (*(int *)(param_1 + 0x294) == 0) {
LAB_1415c322d:
          uVar6 = 0;
        }
        else {
          uVar8 = *(uint *)(param_1 + 0x290);
          uVar6 = 0;
          if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
            puVar9 = (undefined8 *)
                     ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
            if ((puVar9 == (undefined8 *)0x0) ||
               ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x294) ||
                ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_1415c322d;
            uVar6 = *puVar9;
          }
        }
        lVar5 = FUN_1447210f0(uVar6);
        if (*(longlong *)(lVar5 + 0x1f0) == 0) {
          plVar7 = (longlong *)(lVar5 + 0x458);
        }
        else {
          plVar7 = (longlong *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
        }
        lVar5 = *(longlong *)(param_1 + 0x338);
        if (lVar5 != 0) {
          lVar3 = *plVar7;
          uVar8 = (uint)lVar5;
          if ((int)(uVar8 & 0xffffff) < *(int *)(lVar3 + 0x10)) {
            lVar12 = lVar3 + 0x18;
            if (*(longlong *)(lVar3 + 0x28) != 0) {
              lVar12 = *(longlong *)(lVar3 + 0x28);
            }
            if ((*(uint *)(lVar12 + (ulonglong)((uVar8 & 0xffffff) >> 5) * 4) >> (uVar8 & 0x1f) & 1)
                != 0) {
              lVar3 = *(longlong *)(lVar3 + 8);
              lVar12 = (ulonglong)(uVar8 & 0xffffff) * 0x70;
              if (((lVar3 + lVar12 != 0) && (*(longlong *)(lVar3 + 0x60 + lVar12) == lVar5)) &&
                 (*(char *)(lVar3 + 1 + lVar12) != '\x04')) {
                FUN_1405a424c();
              }
            }
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x338) = 0;
  }
  if (0 < *(int *)(param_1 + 0x300)) {
    FUN_14053d8da(param_1 + 0x2f8,1);
  }
LAB_1415c2e8a:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415c3278 FUN_1415c3278 body=156 status=ok
// SIG undefined FUN_1415c3278(void)

void FUN_1415c3278(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14be805f0;
  FUN_1400bfa52(param_1,1);
  lVar1 = 0;
  do {
    FUN_1400bfc98(*(undefined8 *)((longlong)param_1 + lVar1 + 0x2a8),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 0x2b0));
    if (*(longlong *)((longlong)param_1 + lVar1 + 0x2a8) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x1e0);
  lVar1 = 0;
  do {
    FUN_1400bfc98(*(undefined8 *)((longlong)param_1 + lVar1 + 200),
                  *(undefined4 *)((longlong)param_1 + lVar1 + 0xd0));
    if (*(longlong *)((longlong)param_1 + lVar1 + 200) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0xa0);
                    /* WARNING: Could not recover jumptable at 0x0001415c32ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}



// FUNCTION 1415c3314 FUN_1415c3314 body=373 status=ok
// SIG undefined FUN_1415c3314(void)

undefined2 * FUN_1415c3314(void)

{
  char cVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8c27c0) && (FUN_144b3d300(&DAT_14c8c27c0), DAT_14c8c27c0 == -1)) {
    FUN_140056680(&DAT_14c8c27b0,L"WindowsPlatformFeatures");
    atexit((_func_5014 *)&LAB_142797cf6);
    _Init_thread_footer(&DAT_14c8c27c0);
  }
  if ((DAT_14c8c27c4 == '\0') && (1 < DAT_14c872cf0)) {
    FUN_1449da20c(DAT_14c872ce0,L"PlatformFeatures",L"PlatformFeaturesModule",&DAT_14c8c27b0,
                  &DAT_14c872ce8);
    DAT_14c8c27c4 = '\x01';
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  puVar2 = DAT_14c8c27b0;
  if (DAT_14c8c27b8 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  cVar1 = FUN_1457f751e(&DAT_14c874628,puVar2,0);
  puVar2 = (undefined2 *)0x0;
  if (1 < DAT_14c8c27b8) {
    puVar2 = DAT_14c8c27b0;
  }
  puVar3 = (undefined2 *)0x0;
  if (cVar1 != '\0') {
    puVar3 = puVar2;
  }
  return puVar3;
}



// FUNCTION 1415c348a FUN_1415c348a body=319 status=ok
// SIG undefined FUN_1415c348a(void)

undefined8
FUN_1415c348a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,byte param_8)

{
  undefined8 uVar1;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  code *local_e8 [2];
  undefined8 *local_d8;
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined8 local_68 [2];
  undefined8 local_58;
  ulonglong local_28;
  
  uVar1 = param_7;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f8 = param_4;
  local_f0 = param_2;
  if ((param_8 & 2) == 0) {
    local_108 = 0;
    uStack_100 = 0;
    local_68[0] = 0;
    local_58 = 0;
    local_a8[0] = 0;
    local_98 = 0;
    local_e8[0] = (code *)0x0;
    local_d8 = (undefined8 *)FUN_14001cc68(0x40,8);
    *local_d8 = &PTR_FUN_14bd1da10;
    local_d8[1] = &local_f0;
    local_d8[2] = param_3;
    local_d8[3] = &local_f8;
    local_d8[4] = &param_5;
    local_d8[5] = &param_6;
    local_d8[6] = uVar1;
    local_d8[7] = &param_8;
    if (local_d8 + 1 != (longlong *)0x0) {
      local_e8[0] = FUN_1445323f4;
    }
    local_110 = &local_108;
    local_118 = local_68;
    uVar1 = FUN_140fc92aa(param_1,param_2,local_e8,local_a8);
  }
  else {
    uVar1 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c35ca FUN_1415c35ca body=228 status=ok
// SIG undefined FUN_1415c35ca(void)

void FUN_1415c35ca(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_14ab67820;
  param_1[3] = &PTR_FUN_14ab67840;
  iVar2 = *(int *)(param_1 + 0xf);
  if ((longlong)iVar2 != 0) {
    lVar3 = param_1[0xe];
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar6);
      if (lVar4 != 0) {
        puVar5 = *(undefined8 **)(lVar4 + 0x48);
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar5 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
        if (*(longlong *)(lVar4 + 0x30) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar4);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xe],(longlong)*(int *)((longlong)param_1 + 0x7c) << 3
              );
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 1415c36ae FUN_1415c36ae body=434 status=ok
// SIG undefined FUN_1415c36ae(void)

undefined * FUN_1415c36ae(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ed068) {
    FUN_144b3d300(&DAT_14c9ed068);
    if (DAT_14c9ed068 == -1) {
      FUN_146039d5a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"SceneTextures";
      local_70 = L"LumenFrontLayerTranslucencyGBufferPass";
      local_78 = L"FLumenFrontLayerTranslucencyGBufferPassUniformParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x5b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ecfe8,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d0ca72);
      _Init_thread_footer(&DAT_14c9ed068);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9ecfe8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c3862 FUN_1415c3862 body=173 status=ok
// SIG undefined FUN_1415c3862(void)

void FUN_1415c3862(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 **local_60;
  undefined1 *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  code *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  DAT_14c83efa8 = (undefined8 *)0x0;
  uVar3 = FUN_14001cc68(0x880,0x10);
  local_60 = local_58;
  local_48 = 0;
  local_38 = &PTR_LAB_149e05580;
  local_30 = FUN_14274e59e;
  local_58[0] = &LAB_1467ba4c2;
  local_68 = 1;
  FUN_1427867de(uVar3,0,0,0);
  puVar2 = DAT_14c83efa8;
  if (DAT_14c83efa8 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*DAT_14c83efa8;
    DAT_14c83efa8 = (undefined8 *)uVar3;
    (*(code *)*puVar1)(puVar2,1);
    uVar3 = DAT_14c83efa8;
  }
  DAT_14c83efa8 = (undefined8 *)uVar3;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c3910 FUN_1415c3910 body=235 status=ok
// SIG undefined FUN_1415c3910(void)

void FUN_1415c3910(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a34d2b0;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x3e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3e] + 0x10))();
  }
  FUN_145d1128d(param_1[0x36],*(undefined4 *)(param_1 + 0x37));
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[0x35];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_1400500bc(param_1 + 0x1b);
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  while ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
    param_1[9] = *(undefined8 *)param_1[9];
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14a377ce0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1415c39fc FUN_1415c39fc body=1675 status=ok
// SIG undefined FUN_1415c39fc(void)

void FUN_1415c39fc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ushort *puVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  wchar_t *pwVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined2 *puVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_138 [47];
  byte local_109;
  longlong *local_108;
  ulonglong local_100;
  longlong *local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8 [2];
  undefined8 local_c8;
  longlong *local_c0;
  longlong **local_b8;
  undefined8 *local_b0;
  undefined2 *local_a8;
  ulonglong uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 uStack_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar5 = *(longlong *)(param_1 + 0x288);
  if ((lVar5 != 0) && (*(int *)(param_1 + 0x208) != 0)) {
    FUN_1448d5e3c(&local_70,param_1 + 0x208);
    puVar6 = *(undefined1 **)(local_70 + 0x120);
    AcquireSRWLockShared((PSRWLOCK)(puVar6 + 0x100));
    plVar8 = (longlong *)CONCAT44(uStack_64,local_68);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (*(int *)(lVar5 + 0xac) != *(int *)(puVar6 + 0xf8)) {
      *(int *)(lVar5 + 0xac) = *(int *)(puVar6 + 0xf8);
      *(undefined1 *)(lVar5 + 0xb0) = *puVar6;
      FUN_144a787a6(lVar5 + 200,puVar6 + 8);
      FUN_144a787a6(lVar5 + 0xd8,puVar6 + 0x20);
      FUN_144a787a6(lVar5 + 0xe8,puVar6 + 0x70);
      FUN_144a787a6(lVar5 + 0xf8,puVar6 + 0x88);
      *(bool *)(lVar5 + 0xb3) = puVar6[200] == '\x02';
      *(bool *)(lVar5 + 0xb4) = (byte)(puVar6[200] - 3) < 2;
      *(bool *)(lVar5 + 0xb2) = (byte)(puVar6[200] - 5) < 0xfe;
      *(bool *)(lVar5 + 0xb5) = 0.0 <= *(float *)(puVar6 + 0xb8);
      FUN_140390f7a(puVar6 + 0xd0,lVar5 + 0xb8);
      local_108 = (longlong *)(lVar5 + 0x108);
      FUN_14603a97a();
      plVar8 = local_108;
      uVar10 = *(uint *)(puVar6 + 0xa8);
      if (uVar10 != 0) {
        lVar16 = 0x30;
        lVar14 = 0;
        uVar13 = 0;
        do {
          local_100 = uVar13;
          if (((longlong)uVar13 < (longlong)(int)uVar10) &&
             ((longlong)uVar13 < (longlong)*(int *)(lVar5 + 0x110))) {
            local_109 = *(byte *)(*(longlong *)(puVar6 + 0xa0) + -0x17 + lVar16);
            pwVar12 = L"ready";
            if (((*(byte *)(*(longlong *)(puVar6 + 0xa0) + -0x18 + lVar16) | local_109) & 1) != 0) {
              pwVar12 = L"not_ready";
            }
            FUN_14020fad6(*plVar8 + lVar14,pwVar12);
            *(byte *)(*plVar8 + 0x10 + lVar14) = local_109;
            FUN_144a787a6(*plVar8 + lVar14 + 0x18,*(longlong *)(puVar6 + 0xa0) + lVar16 + -0x28);
            *(undefined4 *)(*plVar8 + 0x28 + lVar14) =
                 *(undefined4 *)(*(longlong *)(puVar6 + 0xa0) + -0x30 + lVar16);
            *(bool *)(*plVar8 + 0x2c + lVar14) =
                 *(int *)(*(longlong *)(puVar6 + 0xa0) + -0x30 + lVar16) == *(int *)(puVar6 + 0x68);
            FUN_144a787a6(*plVar8 + lVar14 + 0x30,*(longlong *)(puVar6 + 0xa0) + lVar16 + -0x10);
            FUN_144a787a6(*plVar8 + lVar14 + 0x40,*(longlong *)(puVar6 + 0xa0) + lVar16);
            uVar10 = *(uint *)(puVar6 + 0xa8);
          }
          uVar13 = local_100 + 1;
          lVar16 = lVar16 + 0x40;
          lVar14 = lVar14 + 0x50;
        } while (uVar13 != uVar10);
      }
      if (*(int *)(param_1 + 0x298) != *(int *)(puVar6 + 0xbc)) {
        *(int *)(param_1 + 0x298) = *(int *)(puVar6 + 0xbc);
        fVar3 = *(float *)(puVar6 + 0xb8);
        if (0.0 < fVar3) {
          *(float *)(param_1 + 0x29c) = fVar3;
          *(int *)(param_1 + 0x2a0) = -((int)ROUND(-0.5 - (fVar3 + fVar3)) >> 1);
          FUN_148e7b10e(&local_70);
          if ((longlong *)(lVar5 + 0x128) == &local_70) {
            if (local_70 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(lVar5 + 0x128) != 0) {
              FUN_1400020a8();
            }
            *(longlong *)(lVar5 + 0x128) = local_70;
            local_70 = 0;
            *(undefined4 *)(lVar5 + 0x130) = local_68;
            *(undefined4 *)(lVar5 + 0x134) = uStack_64;
          }
        }
      }
      bVar17 = true;
      if ((*(int *)(puVar6 + 0x38) != 0) && (*(int *)(puVar6 + 0x3c) != 0)) {
        bVar17 = *(int *)(puVar6 + 0x38) == DAT_14c948000;
      }
      *(byte *)(lVar5 + 0xb1) = bVar17 ^ 1;
      if ((*(char *)(lVar5 + 0xb0) == '\x01') && (puVar6[0xc0] == '\0')) {
        piVar2 = (int *)(puVar6 + 0x38);
        if ((*piVar2 == 0) || ((*(int *)(puVar6 + 0x3c) == 0 || (*piVar2 == DAT_14c948000)))) {
          FUN_14020fad6(lVar5 + 0x118,&DAT_149dfb77a);
        }
        else {
          local_a8 = (undefined2 *)0x0;
          uStack_a0 = 0;
          FUN_1400b2348(piVar2,&local_a8,1);
          puVar15 = local_a8;
          if ((int)uStack_a0 == 0) {
            puVar15 = &DAT_149dfb77a;
          }
          FUN_140002266(&local_98,L"travel_notification_canceled_reason_%s",puVar15);
          FUN_14000bbd8(&local_70,&local_98,0);
          if (local_98 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (local_a8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          local_98 = (longlong *)0x0;
          uStack_90 = 0;
          local_88 = (longlong *)((ulonglong)local_88._4_4_ << 0x20);
          local_80 = 0;
          uStack_78 = 0;
          FUN_1446ddda2(&local_98,"DLCOwnership",0);
          iVar4 = *piVar2;
          iVar9 = (int)local_98;
          if (local_80 != 0) {
            FUN_1400020a8();
          }
          if (iVar4 == iVar9) {
            FUN_1410d1eba(local_f8,&local_70);
            FUN_14023409e(&local_e8,local_f8,1);
            local_b0 = &uStack_78;
            local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
            uStack_90 = 0;
            local_88 = (longlong *)0x0;
            local_80 = local_80 & 0xffffffff00000000;
            local_b8 = &local_98;
            FUN_14010d304(&local_a8);
            local_c8 = local_e8;
            local_c0 = local_e0;
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_d8,&local_c8,&local_a8);
            FUN_14007f2db(local_a8,uStack_a0 & 0xffffffff);
            if (local_a8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_88 != (longlong *)0x0) {
              (**(code **)(*local_88 + 0x10))();
            }
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              plVar8 = local_e0 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
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
            uVar11 = FUN_1447a1f4a(local_d8);
            FUN_144a787a6(lVar5 + 0x118,uVar11);
            if (local_d8[0] != (longlong *)0x0) {
              (**(code **)(*local_d8[0] + 0x10))();
            }
          }
          else {
            FUN_1410d1eba(&local_98,&local_70);
            uVar11 = FUN_1447a1f4a(&local_98);
            FUN_144a787a6(lVar5 + 0x118,uVar11);
            local_f8[0] = local_98;
          }
          if (local_f8[0] != (longlong *)0x0) {
            (**(code **)(*local_f8[0] + 0x10))();
          }
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
      }
      puVar7 = *(ushort **)(lVar5 + 0x80);
      if (puVar7 != (ushort *)0x0) {
        *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(puVar6 + 0x100));
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415c4088 FUN_1415c4088 body=725 status=ok
// SIG undefined FUN_1415c4088(void)

void FUN_1415c4088(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_80;
  uint local_74;
  ulonglong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  iVar11 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c);
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  local_88 = param_2;
  if (iVar11 != 0) {
    FUN_14603b672(param_2);
  }
  local_80 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_80;
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar15 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar11 = 0;
    local_58._4_4_ = 0;
    uVar19 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar19 = local_68 & 0xffffffff;
    uVar15 = local_68 >> 0x20;
    iVar11 = *(int *)(param_1 + 0x30);
  }
  lVar6 = local_60;
  plVar7 = local_88;
  uVar18 = (uint)local_58;
  iVar13 = local_58._4_4_;
  iVar14 = local_50;
  if (local_58._4_4_ != iVar11 || local_60 != local_80) {
    do {
      lVar17 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar13 * 0x28);
      lVar10 = (longlong)
               (*(int *)(*(longlong *)(param_1 + 8) + 0x18 + (longlong)iVar13 * 0x28) + -1) * 0x10;
      lVar16 = *(longlong *)(lVar17 + lVar10);
      if (((*(byte *)(lVar16 + 0x244) & 1) != 0) && (*(char *)(lVar16 + 0x16f) == '\x01')) {
        plVar5 = *(longlong **)(lVar17 + lVar10 + 8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        iVar13 = (int)plVar7[1];
        *(uint *)(plVar7 + 1) = iVar13 + 1U;
        local_70 = uVar19;
        if (*(uint *)((longlong)plVar7 + 0xc) < iVar13 + 1U) {
          local_74 = uVar18;
          FUN_146019a74(plVar7,iVar13);
          plVar7 = local_88;
          uVar18 = local_74;
        }
        uVar19 = local_70;
        lVar17 = *plVar7;
        *(longlong *)(lVar17 + (longlong)iVar13 * 0x10) = lVar16;
        *(longlong **)(lVar17 + 8 + (longlong)iVar13 * 0x10) = plVar5;
        if (plVar5 != (longlong *)0x0) {
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
            plVar7 = local_88;
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
              plVar7 = local_88;
            }
          }
        }
      }
      uVar18 = uVar18 & ~(uint)uVar15;
      lVar17 = *(longlong *)(lVar6 + 0x10);
      if (*(longlong *)(lVar6 + 0x10) == 0) {
        lVar17 = lVar6;
      }
      iVar4 = *(int *)(lVar6 + 0x18);
      iVar13 = (int)uVar19;
      lVar16 = (longlong)iVar13;
      uVar12 = *(uint *)(lVar17 + lVar16 * 4) & uVar18;
      if (uVar12 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar13 < iVar8) {
          lVar10 = 0;
          do {
            uVar12 = *(uint *)(lVar17 + lVar16 * 4 + 4 + lVar10 * 4);
            if (uVar12 != 0) {
              uVar19 = (ulonglong)(iVar13 + (int)lVar10 + 1);
              uVar18 = 0xffffffff;
              goto LAB_1415c425a;
            }
            iVar14 = iVar14 + 0x20;
            lVar10 = lVar10 + 1;
          } while (iVar9 - lVar16 != lVar10);
          uVar18 = 0xffffffff;
          iVar13 = iVar9;
        }
        uVar19 = (ulonglong)(iVar13 + 1);
        plVar7 = local_88;
        iVar13 = iVar4;
      }
      else {
LAB_1415c425a:
        uVar15 = (ulonglong)(-uVar12 & uVar12);
        uVar3 = uVar15 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar13 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar13) {
          iVar13 = iVar4;
        }
      }
    } while (iVar13 != iVar11 || lVar6 != local_80);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415c435e FUN_1415c435e body=204 status=ok
// SIG undefined FUN_1415c435e(void)

void FUN_1415c435e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined2 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  int local_3c;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *param_2;
  FUN_1446dcdd4(&local_40);
  if ((((param_1 != 0) && (local_40 != 0)) && (local_3c != 0)) &&
     ((local_40 != DAT_14c948000 && (DAT_14cb24608 != 0)))) {
    lVar1 = FUN_144837462(DAT_14cb24608,&local_40);
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_141817c28(param_1);
      if (plVar2 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        local_58 = 0xffff;
        local_50 = 0;
        local_60 = lVar1;
        FUN_140365ba6(uVar3,&local_60,1);
      }
    }
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c442c FUN_1415c442c body=477 status=ok
// SIG undefined FUN_1415c442c(void)

void FUN_1415c442c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x151) != '\0') goto LAB_1415c4544;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar3 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar3 != 2)) {
    if (iVar3 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_1415c456a;
    }
    plVar7 = (longlong *)FUN_1447c1074(DAT_14cabc548);
  }
  else {
LAB_1415c456a:
    uVar4 = DAT_14cabc548;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    plVar7 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar4,&local_30,0);
  }
  if (plVar7 != (longlong *)0x0) {
    plVar8 = (longlong *)(**(code **)(*plVar7 + 0xa8))(plVar7);
    local_30 = *(undefined8 *)(param_1 + 0x130);
    plVar7 = *(longlong **)(param_1 + 0x138);
    if (plVar7 == (longlong *)0x0) {
      local_28 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      local_28 = plVar7;
    }
    (**(code **)(*plVar8 + 0x10))(plVar8,&local_30);
    plVar8 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    *(undefined1 *)(param_1 + 0x151) = 1;
  }
LAB_1415c4544:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415c460a FUN_1415c460a body=406 status=ok
// SIG undefined FUN_1415c460a(void)

void FUN_1415c460a(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined8 *local_a0;
  int local_98;
  undefined2 local_90 [2];
  undefined4 local_8c;
  undefined1 *local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0xc))) &&
      (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar2 = *plVar5, lVar2 != 0)))))) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar2 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    uVar3 = *puVar4;
    local_88 = &LAB_1405c985e;
    local_80 = 0;
    FUN_1462b0f46(&local_a0,param_1,&local_88);
    local_88 = (undefined1 *)0x0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_a0);
    local_48 = 1;
    local_a8 = local_90;
    local_90[0] = 1;
    local_8c = 0xbf800000;
    FUN_1406f4044(uVar3,param_1 + 0xc38,&local_88,0x3dcccccd);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    if (local_98 != 0) {
      if (local_a0 == (undefined8 *)0x0) goto LAB_1415c4673;
      (**(code **)*local_a0)(local_a0,0);
      FUN_1446efa72(&local_a0,0,0,0x10);
      local_98 = 0;
    }
    if (local_a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1415c4673:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c47a2 FUN_1415c47a2 body=1475 status=ok
// SIG undefined FUN_1415c47a2(void)

void FUN_1415c47a2(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_188 [40];
  byte *local_160;
  undefined8 local_158;
  undefined1 *local_150;
  uint local_148;
  int local_144;
  byte *local_140;
  undefined1 *local_138;
  undefined1 local_12c [4];
  undefined8 local_128;
  undefined4 local_120;
  longlong local_118;
  undefined4 local_110;
  longlong local_108 [4];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  int local_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x61);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = param_1;
  }
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar5 != 0) && (cVar3 = FUN_1407579fa(lVar5), cVar3 == '\0')) {
    local_98 = 0;
    local_90 = 0;
    local_b8 = (undefined8 *)0x0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    local_118 = plVar4[99];
    local_110 = (undefined4)plVar4[100];
    FUN_14603c42a();
    if ((longlong)(int)param_1[0x18] != 0) {
      plVar9 = (longlong *)param_1[0x17];
      plVar10 = plVar9 + (int)param_1[0x18];
      do {
        lVar5 = *plVar9;
        if ((((lVar5 != 0) && (*(char *)(lVar5 + 0x10) == '\x04')) &&
            (*(char *)(lVar5 + 0x210) == '\x02')) && ((int)uStack_b0 != local_84)) {
          lVar1 = *(longlong *)(lVar5 + 0x14);
          uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
          uVar7 = (uint)lVar1 & 0xffff;
          puVar8 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar8 = local_80;
          }
          iVar11 = *(int *)(puVar8 + (ulonglong)
                                     (local_70 - 1U &
                                     ((int)((ulonglong)lVar1 >> 0x20) +
                                      ((uint)lVar1 << 0x10 | uVar7) +
                                      (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 10 + 4) * 4
                           );
          while (iVar11 != -1) {
            lVar6 = (longlong)iVar11;
            if ((*(longlong *)((longlong)local_b8 + lVar6 * 0x14 + 4) == lVar1) &&
               (*(char *)((longlong)local_b8 + lVar6 * 0x14) == '\x04')) {
              local_128 = *(undefined8 *)(lVar5 + 0x388);
              local_120 = *(undefined4 *)(lVar5 + 0x390);
              FUN_14603c42a(&local_b8);
              break;
            }
            iVar11 = *(int *)((longlong)local_b8 + lVar6 * 0x14 + 0xc);
          }
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar10);
      if ((longlong)(int)param_1[0x18] != 0) {
        plVar10 = (longlong *)param_1[0x17];
        plVar9 = plVar10 + (int)param_1[0x18];
        do {
          lVar5 = *plVar10;
          if (((lVar5 != 0) && (*(char *)(lVar5 + 0x10) == '\x04')) &&
             ((*(char *)(lVar5 + 0x210) == '\x02' && (*(char *)(lVar5 + 0x33d) == '\x01')))) {
            if ((int)plVar4[100] == 0) {
              if ((*(char *)(lVar5 + 0x211) != '\0') && (*(char *)(lVar5 + 0x33c) != '\0')) {
                *(undefined1 *)(lVar5 + 0x33c) = 0;
LAB_1415c4a50:
                FUN_140ad4746(param_1,8,lVar5);
              }
            }
            else {
              if ((int)uStack_b0 != local_84) {
                lVar1 = *(longlong *)(lVar5 + 0x14);
                uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
                uVar7 = (uint)lVar1 & 0xffff;
                puVar8 = local_78;
                if (local_78 == (undefined1 *)0x0) {
                  puVar8 = local_80;
                }
                iVar11 = *(int *)(puVar8 + (ulonglong)
                                           (local_70 - 1U &
                                           ((int)((ulonglong)lVar1 >> 0x20) +
                                            ((uint)lVar1 << 0x10 | uVar7) +
                                            (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 10 +
                                           4) * 4);
                while (iVar11 != -1) {
                  lVar6 = (longlong)iVar11;
                  if ((*(longlong *)((longlong)local_b8 + lVar6 * 0x14 + 4) == lVar1) &&
                     (*(char *)((longlong)local_b8 + lVar6 * 0x14) == '\x04')) goto LAB_1415c4d37;
                  iVar11 = *(int *)((longlong)local_b8 + lVar6 * 0x14 + 0xc);
                }
              }
              local_e8 = 0;
              local_e0 = 0;
              local_108[0] = 0;
              local_108[1] = 0;
              local_dc = 0xffffffff00000080;
              local_d4 = 0;
              local_c8 = (undefined1 *)0x0;
              local_158 = 0;
              local_c0 = 0;
              FUN_14920e78a(local_108,&local_b8);
              local_160 = *(byte **)(lVar5 + 0x388);
              local_150 = local_c8;
              if ((longlong)*(int *)(lVar5 + 0x390) != 0) {
                local_140 = local_160 + (longlong)*(int *)(lVar5 + 0x390) * 0xc;
                local_138 = local_c8;
                if (local_c8 == (undefined1 *)0x0) {
                  local_138 = local_d0;
                }
                local_144 = local_d4;
                local_148 = local_c0 - 1;
                do {
                  if ((int)local_108[1] != local_d4) {
                    lVar1 = *(longlong *)(local_160 + 4);
                    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
                    uVar7 = (uint)lVar1 & 0xffff;
                    iVar11 = *(int *)(local_138 +
                                     (ulonglong)
                                     ((uint)*local_160 +
                                      ((int)((ulonglong)lVar1 >> 0x20) +
                                       ((uint)lVar1 << 0x10 | uVar7) +
                                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 10 &
                                     local_148) * 4);
                    while (iVar11 != -1) {
                      lVar6 = (longlong)iVar11;
                      if ((*(longlong *)(local_108[0] + 4 + lVar6 * 0x14) == lVar1) &&
                         (*(byte *)(local_108[0] + lVar6 * 0x14) == *local_160)) {
                        local_158 = CONCAT71((int7)(int3)((uint)iVar11 >> 8),1);
                        goto LAB_1415c4b65;
                      }
                      iVar11 = *(int *)(local_108[0] + lVar6 * 0x14 + 0xc);
                    }
                  }
                  local_160 = local_160 + 0xc;
                } while (local_160 != local_140);
                local_158 = 0;
                local_160 = local_140;
              }
LAB_1415c4b65:
              local_c0 = 0;
              if (local_c8 != (undefined1 *)0x0) {
                FUN_1400020a8(local_c8);
              }
              FUN_14603c376(local_108);
              if ((char)local_158 == '\x01' && local_160 != (byte *)0x0) {
LAB_1415c4d37:
                FUN_14920e87e(&local_b8,local_12c,lVar5 + 0x10);
                cVar3 = '\x01';
              }
              else {
                cVar3 = '\0';
              }
              if (((*(char *)(lVar5 + 0x210) != '\x01') && (*(char *)(lVar5 + 0x211) != '\0')) &&
                 (*(char *)(lVar5 + 0x33c) != cVar3)) {
                *(char *)(lVar5 + 0x33c) = cVar3;
                goto LAB_1415c4a50;
              }
            }
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar9);
      }
    }
    local_70 = 0;
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14603c376(&local_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c4d66 FUN_1415c4d66 body=96 status=ok
// SIG undefined FUN_1415c4d66(void)

undefined8 FUN_1415c4d66(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x180))();
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
      lVar2 = FUN_1458485da();
      if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x30), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001415c4dba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1,param_2);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1415c4dc6 FUN_1415c4dc6 body=240 status=ok
// SIG undefined FUN_1415c4dc6(void)

void FUN_1415c4dc6(longlong *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = (int)param_1[0x1c];
  if (iVar1 != param_2) {
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
    FUN_147d7ffe0(DAT_14cb0d2b0,param_1,iVar1,param_2);
    *(int *)(param_1 + 0x1c) = param_2;
    FUN_1401f8a0e(param_1 + 0x1d,param_2,iVar1);
    cVar2 = (**(code **)(*DAT_14cb0d2b0 + 0x338))();
    if (cVar2 != '\0') {
      if (DAT_14c9670a0 == (longlong *)0x0) {
        plVar3 = (longlong *)FUN_14001cc68(0x78,0x10);
        FUN_14593912e(plVar3,1,1);
        DAT_14c9670a0 = plVar3;
      }
      (**(code **)(*DAT_14c9670a0 + 0xa8))(DAT_14c9670a0,&local_2c,param_2);
      (**(code **)(*param_1 + 0x318))(param_1,local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c4eb8 FUN_1415c4eb8 body=7 status=ok
// SIG undefined FUN_1415c4eb8(void)

undefined1 FUN_1415c4eb8(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x140);
}



// FUNCTION 1415c4ec0 FUN_1415c4ec0 body=258 status=ok
// SIG undefined FUN_1415c4ec0(void)

void FUN_1415c4ec0(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e6b88) {
    FUN_144b3d300(&DAT_14c9e6b88);
    if (DAT_14c9e6b88 == -1) {
      FUN_14603f8e4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x572;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e6b08,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ccf636);
      _Init_thread_footer(&DAT_14c9e6b88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c4fc4 FUN_1415c4fc4 body=988 status=ok
// SIG undefined FUN_1415c4fc4(void)

void FUN_1415c4fc4(longlong *param_1,int param_2,char param_3,char param_4,char param_5)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined *puVar8;
  uint *puVar9;
  longlong *plVar10;
  uint uVar11;
  float fVar12;
  
  if ((*(byte *)((longlong)param_1 + 0x91) & 1) == 0) {
    if (param_3 != '\0') {
      fVar12 = (float)param_2 / 100.0;
      if (1.0 <= fVar12) {
        fVar12 = 1.0;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      fVar12 = (float)(int)param_1[0x24] * fVar12;
      param_2 = -((int)ROUND(-0.5 - (fVar12 + fVar12)) >> 1);
    }
    if (*(char *)(param_1[6] + 0x178) == '\x03') {
      iVar3 = (int)param_1[0x24];
      if (param_2 < 0) {
        param_2 = iVar3;
      }
      param_2 = param_2 + *(int *)((longlong)param_1 + 0x11c);
      if (iVar3 <= param_2) {
        param_2 = iVar3;
      }
      *(int *)((longlong)param_1 + 0x11c) = param_2;
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x2b8))(param_1);
      if (0 < iVar3) {
        if (param_2 < 0) {
          param_2 = *(int *)((longlong)param_1 + 0xf4);
        }
        iVar4 = (**(code **)(*param_1 + 0x2c0))(param_1);
        iVar5 = (**(code **)(*param_1 + 0x2b8))(param_1);
        iVar3 = iVar4 + param_2;
        if (iVar5 <= iVar4 + param_2) {
          iVar3 = iVar5;
        }
        iVar4 = (**(code **)(*param_1 + 0x2e8))(param_1);
        if (iVar4 <= iVar3) {
          iVar3 = iVar4;
        }
        lVar7 = param_1[0x20];
        *(int *)((longlong)param_1 + 0x11c) = iVar3;
        *(int *)(param_1 + 0x20) = iVar3;
        if ((int)lVar7 != iVar3) {
          FUN_140a429bc(param_1);
          return;
        }
      }
    }
  }
  else {
    if (param_3 != '\0') {
      fVar12 = (float)param_2 / 100.0;
      if (1.0 <= fVar12) {
        fVar12 = 1.0;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      iVar3 = (**(code **)(*param_1 + 0x2b8))(param_1);
      param_2 = -((int)ROUND(-0.5 - ((float)iVar3 * fVar12 + (float)iVar3 * fVar12)) >> 1);
    }
    if ((param_4 != '\0') && (*(char *)(param_1[6] + 0x178) == '\x03')) {
      FUN_14604096c(param_1,param_2);
    }
    iVar3 = (**(code **)(*param_1 + 0x2e8))(param_1);
    iVar4 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if (0 < iVar4) {
      if (param_2 < 0) {
        param_2 = *(int *)((longlong)param_1 + 0xf4);
      }
      iVar5 = (**(code **)(*param_1 + 0x2c0))(param_1);
      iVar6 = (**(code **)(*param_1 + 0x2b8))();
      iVar4 = iVar5 + param_2;
      if (iVar6 <= iVar5 + param_2) {
        iVar4 = iVar6;
      }
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
      lVar7 = param_1[0x20];
      *(int *)((longlong)param_1 + 0x11c) = iVar4;
      *(int *)(param_1 + 0x20) = iVar4;
      if ((int)lVar7 != iVar4) {
        FUN_140a429bc();
        iVar4 = (int)param_1[0x20];
      }
      if (*(int *)((longlong)param_1 + 0x10c) != iVar4) {
        *(int *)((longlong)param_1 + 0x10c) = iVar4;
        uVar1 = param_1[7];
        if (uVar1 < 0xffffffff00000000) {
          plVar10 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar10 = (longlong *)0x0;
          }
          (**(code **)(*plVar10 + 0x58))(plVar10,param_1,uVar1,4);
        }
        else {
          uVar11 = (uint)uVar1;
          if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c998088)) {
            puVar8 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar8 = DAT_14c998080;
            }
            if ((*(uint *)(puVar8 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar11 & 0x1f) & 1) != 0)
            {
              lVar7 = DAT_14c998060 + (ulonglong)(uVar11 & 0x7fffffff) * 0x68;
              puVar9 = *(uint **)(lVar7 + 0x18);
              if (*(uint **)(lVar7 + 0x18) == (uint *)0x0) {
                puVar9 = (uint *)(lVar7 + 8);
              }
              *puVar9 = *puVar9 | 0x10;
              *(byte *)(lVar7 + 0x60) = *(byte *)(lVar7 + 0x60) | 1;
            }
          }
        }
      }
      cVar2 = (**(code **)(*param_1 + 0x2f8))();
      if (cVar2 == '\0') {
        iVar3 = iVar3 - (int)param_1[0x20];
        iVar4 = 0;
        if (0 < iVar3) {
          iVar4 = iVar3;
        }
        if ((int)param_1[0x21] != iVar4) {
          *(int *)(param_1 + 0x21) = iVar4;
          uVar1 = param_1[7];
          if (uVar1 < 0xffffffff00000000) {
            plVar10 = DAT_14c9980d0;
            if (DAT_14c9980d8 == 0) {
              plVar10 = (longlong *)0x0;
            }
            (**(code **)(*plVar10 + 0x58))(plVar10,param_1,uVar1,3);
          }
          else {
            uVar11 = (uint)uVar1;
            if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c998088)) {
              puVar8 = &DAT_14c998070;
              if (DAT_14c998080 != (undefined *)0x0) {
                puVar8 = DAT_14c998080;
              }
              if ((*(uint *)(puVar8 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar11 & 0x1f) & 1) != 0
                 ) {
                lVar7 = DAT_14c998060 + (ulonglong)(uVar11 & 0x7fffffff) * 0x68;
                puVar9 = *(uint **)(lVar7 + 0x18);
                if (*(uint **)(lVar7 + 0x18) == (uint *)0x0) {
                  puVar9 = (uint *)(lVar7 + 8);
                }
                *puVar9 = *puVar9 | 8;
                *(byte *)(lVar7 + 0x60) = *(byte *)(lVar7 + 0x60) | 1;
              }
            }
          }
        }
      }
    }
    if (param_5 != '\0') {
      FUN_1447f69b6(param_1 + 8);
      return;
    }
  }
  return;
}



// FUNCTION 1415c53a0 FUN_1415c53a0 body=281 status=ok
// SIG undefined FUN_1415c53a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415c53a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca45a98) {
    FUN_144b3d300(&DAT_14ca45a98);
    if (DAT_14ca45a98 == -1) {
      FUN_146040a26();
      FUN_140db5666(&DAT_14ca459f0,0,&DAT_14ca45988,L"FOcclusionQueryVS",
                    L"/Engine/Private/OcclusionQueryVertexShader.usf",L"Main",0,1,FUN_1472d9e4a,
                    FUN_1472d9e22,&LAB_1472d9e1e,&LAB_1472d9e1a,&LAB_14712ac0c,&LAB_14712ac08,0xf8,0
                   );
      _DAT_14ca459f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142fdad9c);
      _Init_thread_footer(&DAT_14ca45a98);
    }
  }
  return &DAT_14ca459f0;
}



// FUNCTION 1415c54ba FUN_1415c54ba body=281 status=ok
// SIG undefined FUN_1415c54ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415c54ba(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae1f78) {
    FUN_144b3d300(&DAT_14cae1f78);
    if (DAT_14cae1f78 == -1) {
      FUN_146040c4c();
      FUN_140db5666(&DAT_14cae1ed0,0,&DAT_14cae1e68,L"FRadixSortSpineCS",
                    L"/Engine/Private/RadixSortShaders.usf",L"RadixSort_Spine",5,1,FUN_147addb70,
                    FUN_147addb48,&LAB_147addb44,&LAB_147addb40,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0
                   );
      _DAT_14cae1ed0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143519da5);
      _Init_thread_footer(&DAT_14cae1f78);
    }
  }
  return &DAT_14cae1ed0;
}



// FUNCTION 1415c55d4 FUN_1415c55d4 body=2280 status=ok
// SIG undefined FUN_1415c55d4(void)

undefined8 * FUN_1415c55d4(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  void *pvVar4;
  char cVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_158 [40];
  void *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  ulonglong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  ulonglong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 uStack_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  void *local_80;
  int local_78;
  undefined4 local_74;
  ulonglong local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_128 = 0;
  uStack_120 = 0;
  if (param_3 == 0) {
    local_128 = 0;
    uStack_120 = 0;
    uVar18 = 0;
    local_110 = 0;
    local_130 = (void *)0x0;
  }
  else {
    FUN_1400bbfc4(&local_70,param_3);
    local_128 = local_70;
    uStack_120 = CONCAT44(uStack_64,uStack_68);
    local_130 = (void *)CONCAT44(uStack_5c,local_60);
    uVar18 = (ulonglong)local_58 & 0xffffffff;
    cVar5 = (*(code *)PTR_FUN_14c758760)();
    uVar13 = *(uint *)(param_3 + 0xc);
    if (cVar5 == '\0') {
LAB_1415c5654:
      if ((int)uVar13 < DAT_14c9647dc) {
        lVar19 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
      }
      else {
        lVar19 = 0;
      }
      uVar15 = *(uint *)(lVar19 + 0x10);
      if (*(uint *)(lVar19 + 0x10) == 0) {
        LOCK();
        iVar17 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar20 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar17;
        if (bVar20) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar15 = *(uint *)(lVar19 + 0x10);
        bVar20 = uVar15 == 0;
        if (bVar20) {
          *(uint *)(lVar19 + 0x10) = uVar6;
          uVar15 = 0;
        }
        UNLOCK();
        if (bVar20) {
          uVar15 = uVar6;
        }
      }
      uVar9 = (ulonglong)uVar15;
      uVar15 = uVar13;
    }
    else {
      uVar15 = 0;
      if ((int)uVar13 < DAT_14c9647dc) {
        lVar19 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
      }
      else {
        lVar19 = 0;
      }
      uVar9 = 0;
      if ((*(uint *)(lVar19 + 8) & 0x8400000) == 0) goto LAB_1415c5654;
    }
    local_110 = (ulonglong)uVar15 | uVar9 << 0x20;
  }
  local_108 = (undefined4)local_128;
  uStack_104 = local_128._4_4_;
  uStack_100 = (undefined4)uStack_120;
  uStack_fc = uStack_120._4_4_;
  local_f8 = (void *)0x0;
  iVar17 = (int)uVar18;
  local_f0 = iVar17;
  if (iVar17 == 0) {
    local_ec = 0;
    local_e0 = local_128;
    uStack_d8 = uStack_120;
    local_c8 = 0;
    local_e8 = local_110;
LAB_1415c56d6:
    local_d0 = (void *)0x0;
    local_c4 = 0;
    local_a0 = 0;
    local_110 = local_e8;
    local_c0 = local_e8;
  }
  else {
    FUN_1446dd670(&local_f8,uVar18,0);
    memcpy(local_f8,local_130,(longlong)iVar17 * 2);
    pvVar4 = local_f8;
    local_c8 = local_f0;
    lVar19 = (longlong)local_f0;
    local_e8 = local_110;
    local_e0 = CONCAT44(uStack_104,local_108);
    uStack_d8 = CONCAT44(uStack_fc,uStack_100);
    local_d0 = (void *)0x0;
    if (lVar19 == 0) goto LAB_1415c56d6;
    FUN_1446dd670(&local_d0,local_f0,0);
    memcpy(local_d0,pvVar4,lVar19 * 2);
    pvVar4 = local_d0;
    local_a0 = local_c8;
    lVar19 = (longlong)local_c8;
    local_c0 = local_e8;
    local_b8 = local_e0;
    uStack_b0 = uStack_d8;
    local_a8 = (undefined2 *)0x0;
    if (lVar19 != 0) {
      FUN_1446dd670(&local_a8,local_c8,0);
      memcpy(local_a8,pvVar4,lVar19 * 2);
      iVar17 = local_a0;
      goto LAB_1415c5714;
    }
  }
  local_a8 = (undefined2 *)0x0;
  local_9c = 0;
  iVar17 = 0;
  local_e8 = local_c0;
  local_b8 = local_e0;
  uStack_b0 = uStack_d8;
LAB_1415c5714:
  uVar8 = uStack_b0;
  uVar18 = local_b8;
  uVar9 = 0;
  iVar11 = iVar17 + -1;
  if (iVar17 == 0) {
    iVar11 = 0;
  }
  if (0 < iVar11) {
    puVar7 = &DAT_149dfb77a;
    if (iVar17 != 0) {
      puVar7 = local_a8;
    }
    lVar19 = 0;
    uVar9 = 0;
    do {
      uVar13 = ((uint)(0x19 < (ushort)puVar7[lVar19] - 0x61) * 0x20 + (uint)(ushort)puVar7[lVar19])
               - 0x20;
      uVar15 = (uint)(uVar9 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar9 ^ uVar13) & 0xff) * 4);
      uVar9 = (ulonglong)
              (uVar15 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar15 & 0xff ^ uVar13 >> 8 & 0xff) * 4));
      lVar19 = lVar19 + 1;
    } while (iVar11 != (int)lVar19);
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0x338) != *(int *)(param_1 + 0x364)) {
    uVar15 = (uint)(uVar18 >> 0x10);
    uVar10 = (uint)uVar18 & 0xffff;
    uVar13 = (uint)((ulonglong)uVar8 >> 0x10);
    uVar6 = (uint)uVar8 & 0xffff;
    uVar15 = (uVar10 >> 4) +
             ((uint)uVar18 << 0x10 | uVar10) + (int)(uVar18 >> 0x20) +
             (uVar15 << 0x13 | uVar15 & 0xffff);
    uVar15 = (uVar15 >> 2) + 0x9e3779b9 +
             uVar15 * 0x40 +
             (uVar6 >> 4) +
             ((uint)uVar8 << 0x10 | uVar6) + (int)((ulonglong)uVar8 >> 0x20) +
             (uVar13 << 0x13 | uVar13 & 0xffff) ^ uVar15;
    uVar6 = uVar15 >> 0xd ^ -uVar15;
    uVar13 = uVar6 << 8 ^ (-0x61c88647 - uVar15) - uVar6;
    uVar10 = uVar13 >> 0xd ^ (uVar15 - uVar6) - uVar13;
    uVar15 = uVar10 >> 0xc ^ (uVar6 - uVar13) - uVar10;
    uVar6 = uVar15 << 0x10 ^ (uVar13 - uVar10) - uVar15;
    uVar13 = uVar6 >> 5 ^ (uVar10 - uVar15) - uVar6;
    uVar10 = uVar13 >> 3 ^ (uVar15 - uVar6) - uVar13;
    uVar15 = uVar10 << 10 ^ (uVar6 - uVar13) - uVar10;
    iVar17 = (int)uVar9;
    uVar15 = (uint)(uVar9 >> 0xd) ^ (uVar15 >> 0xf ^ uVar13 - (uVar10 + uVar15)) - iVar17;
    uVar6 = uVar15 << 8 ^ (-0x61c88647 - iVar17) - uVar15;
    uVar13 = uVar6 >> 0xd ^ (iVar17 - uVar15) - uVar6;
    uVar10 = uVar13 >> 0xc ^ (uVar15 - uVar6) - uVar13;
    uVar15 = uVar10 << 0x10 ^ (uVar6 - uVar13) - uVar10;
    uVar6 = uVar15 >> 5 ^ (uVar13 - uVar10) - uVar15;
    uVar13 = uVar6 >> 3 ^ (uVar10 - uVar15) - uVar6;
    uVar15 = uVar13 << 10 ^ (uVar15 - uVar6) - uVar13;
    lVar19 = param_1 + 0x368;
    if (*(longlong *)(param_1 + 0x370) != 0) {
      lVar19 = *(longlong *)(param_1 + 0x370);
    }
    iVar17 = *(int *)(lVar19 + (ulonglong)
                               (*(int *)(param_1 + 0x378) - 1U &
                               (uVar15 >> 0xf ^ uVar6 - (uVar13 + uVar15))) * 4);
    if (iVar17 != -1) {
LAB_1415c5980:
      pvVar4 = local_d0;
      local_70 = local_e8;
      uStack_68 = (undefined4)local_e0;
      uStack_64 = local_e0._4_4_;
      local_60 = (undefined4)uStack_d8;
      uStack_5c = uStack_d8._4_4_;
      local_58 = (void *)0x0;
      lVar19 = (longlong)local_c8;
      local_50 = local_c8;
      if (lVar19 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_c8,0);
        memcpy(local_58,pvVar4,lVar19 * 2);
      }
      lVar19 = *(longlong *)(param_1 + 0x330);
      lVar12 = (longlong)iVar17;
      local_98 = *(undefined8 *)(lVar19 + lVar12 * 0x48);
      puVar1 = (undefined4 *)(lVar19 + 8 + lVar12 * 0x48);
      local_90 = *puVar1;
      uStack_8c = puVar1[1];
      uStack_88 = puVar1[2];
      uStack_84 = puVar1[3];
      local_80 = (void *)0x0;
      local_78 = *(int *)(lVar19 + 0x20 + lVar12 * 0x48);
      lVar16 = (longlong)local_78;
      pvVar4 = *(void **)(lVar19 + 0x18 + lVar12 * 0x48);
      if (lVar16 == 0) {
        local_74 = 0;
      }
      else {
        FUN_1446dd670(&local_80,local_78,0);
        memcpy(local_80,pvVar4,lVar16 * 2);
      }
      if ((CONCAT44(uStack_8c,local_90) == CONCAT44(uStack_64,uStack_68)) &&
         (CONCAT44(uStack_84,uStack_88) == CONCAT44(uStack_5c,local_60))) {
        if (local_78 == local_50) {
          bVar20 = true;
          if (1 < local_78) {
            lVar19 = 0;
            do {
              uVar2 = *(ushort *)((longlong)local_80 + lVar19);
              uVar3 = *(ushort *)((longlong)local_58 + lVar19);
              if (uVar2 == uVar3) {
                if (uVar2 == 0) goto LAB_1415c5c29;
              }
              else {
                if (0x7f < (uVar3 | uVar2)) {
                  iVar11 = (uint)uVar2 - (uint)uVar3;
                  goto LAB_1415c5c2b;
                }
                if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) {
                  iVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2] -
                           (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
                  goto LAB_1415c5c2b;
                }
              }
              lVar19 = lVar19 + 2;
            } while( true );
          }
        }
        else {
          bVar20 = local_50 + local_78 == 1;
        }
      }
      else {
        bVar20 = false;
      }
      goto LAB_1415c5a3b;
    }
  }
LAB_1415c5b32:
  lVar19 = 0;
LAB_1415c5a7f:
  pvVar4 = local_130;
  if (local_d0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_f8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (pvVar4 != (void *)0x0) {
    FUN_1400020a8(pvVar4);
  }
  puVar14 = (undefined8 *)(lVar19 + 0x28);
  if (lVar19 == 0) {
    puVar14 = (undefined8 *)0x0;
  }
  if (puVar14 == (undefined8 *)0x0) {
    FUN_1415c5ebe(param_2,param_1 + 0x380);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = *puVar14;
    uVar8 = FUN_14477b664(puVar14[1]);
    uVar8 = FUN_14477b664(uVar8);
    param_2[1] = uVar8;
    param_2[2] = puVar14[2];
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
LAB_1415c5c29:
  iVar11 = 0;
LAB_1415c5c2b:
  bVar20 = iVar11 == 0;
LAB_1415c5a3b:
  if (local_80 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (bVar20) {
    if (iVar17 == -1) {
      lVar19 = 0;
    }
    else {
      lVar19 = lVar12 * 0x48 + *(longlong *)(param_1 + 0x330);
    }
    goto LAB_1415c5a7f;
  }
  iVar17 = *(int *)(*(longlong *)(param_1 + 0x330) + 0x40 + lVar12 * 0x48);
  if (iVar17 == -1) goto LAB_1415c5b32;
  goto LAB_1415c5980;
}



// FUNCTION 1415c5ebe FUN_1415c5ebe body=71 status=ok
// SIG undefined FUN_1415c5ebe(void)

undefined8 * FUN_1415c5ebe(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1415c5f06 FUN_1415c5f06 body=116 status=ok
// SIG undefined FUN_1415c5f06(void)

void FUN_1415c5f06(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1415c5f7a FUN_1415c5f7a body=164 status=ok
// SIG undefined FUN_1415c5f7a(void)

void FUN_1415c5f7a(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"MeshPaintTexture";
  local_38 = 0x10;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"MeshPaintTexture";
  local_38 = 0x10;
  FUN_140208c1e(&DAT_14caeaae8,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c6020 FUN_1415c6020 body=785 status=ok
// SIG undefined FUN_1415c6020(void)

void FUN_1415c6020(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  longlong *local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong *plStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  void *local_70;
  int local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar7 = (longlong *)(param_1 + 0xa8);
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = *param_2;
  plStack_80 = (longlong *)param_2[1];
  uStack_78 = (undefined4)param_2[2];
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_70 = (void *)0x0;
  local_68 = (int)param_2[4];
  lVar8 = (longlong)local_68;
  _Src = (void *)param_2[3];
  if (lVar8 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_68,0);
    memcpy(local_70,_Src,lVar8 * 2);
  }
  FUN_14655238a(plVar7,&local_b8,&local_88);
  uVar4 = local_b8;
  local_c0 = param_2;
  if ((longlong)(int)local_b8 != -1) {
    FUN_145c41c1a(&local_a8,*plVar7 + (longlong)(int)local_b8 * 0x50 + 0x28);
    FUN_145afb440(plVar7,uVar4 & 0xffffffff);
    lVar8 = FUN_145d56936(param_2);
    plVar7 = (longlong *)((longlong)(int)uStack_90 * 0x28 + local_98);
    if (lVar8 == 0) {
      if ((int)uStack_90 != 0) {
        plVar6 = (longlong *)(local_98 + 0x10);
        do {
          local_88 = 0;
          plStack_80 = (longlong *)0x0;
          if ((((int)plVar6[1] != 0) && (plVar5 = (longlong *)*plVar6, plVar5 != (longlong *)0x0))
             && ((**(code **)(*plVar5 + 0x60))(plVar5,(int)plVar6[-2],&local_88),
                plVar5 = plStack_80, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_80)(plStack_80);
              LOCK();
              piVar2 = (int *)((longlong)plVar5 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
          plVar5 = plVar6 + 3;
          plVar6 = plVar6 + 5;
        } while (plVar5 != plVar7);
      }
    }
    else if ((int)uStack_90 != 0) {
      plVar6 = (longlong *)(local_98 + 0x10);
      do {
        lVar3 = plVar6[-2];
        local_b8 = *(ulonglong *)(lVar8 + 0x30);
        plVar5 = *(longlong **)(lVar8 + 0x38);
        if (plVar5 == (longlong *)0x0) {
          local_b0 = (longlong *)0x0;
        }
        else {
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
          local_b0 = plVar5;
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
        local_c8 = (int)lVar3;
        FUN_14153f984(param_1,&local_88,&local_b8,(longlong)plVar6 + -0xc);
        plVar5 = local_b0;
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_b0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        if (((int)plVar6[1] != 0) && (plVar5 = (longlong *)*plVar6, plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x60))(plVar5,(int)plVar6[-2],&local_88);
        }
        plVar5 = plStack_80;
        if ((char)plVar6[2] == '\x01') {
          *(undefined1 *)(local_88 + 0x180) = 1;
        }
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_80 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        plVar5 = plVar6 + 3;
        plVar6 = plVar6 + 5;
      } while (plVar5 != plVar7);
    }
  }
  FUN_145d5702a(&local_a8);
  if (local_c0[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415c6332 FUN_1415c6332 body=4 status=ok
// SIG undefined FUN_1415c6332(void)

undefined4 FUN_1415c6332(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}



// FUNCTION 1415c6336 FUN_1415c6336 body=23 status=ok
// SIG undefined FUN_1415c6336(void)

undefined8 FUN_1415c6336(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != DAT_14cb71810 && lVar1 != 0);
}



// FUNCTION 1415c634e FUN_1415c634e body=215 status=ok
// SIG undefined FUN_1415c634e(void)

int FUN_1415c634e(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar4 = *param_1;
LAB_1415c638b:
      lVar10 = (longlong)iVar2 * 0x78;
      if ((*(longlong *)(lVar4 + lVar10) == *param_3) &&
         (lVar1 = lVar4 + lVar10, *(longlong *)(lVar1 + 8) == param_3[1])) {
        iVar3 = (int)param_3[3];
        if (*(int *)(lVar1 + 0x18) == iVar3) {
          if (iVar3 < 2) {
            return iVar2;
          }
          lVar7 = 0;
          do {
            uVar8 = *(ushort *)(*(longlong *)(lVar1 + 0x10) + lVar7);
            uVar9 = (ulonglong)uVar8;
            uVar6 = *(ushort *)(param_3[2] + lVar7);
            if (uVar8 == uVar6) {
              if (uVar8 == 0) {
                return iVar2;
              }
            }
            else {
              if (0x7f < (uVar6 | uVar8)) goto LAB_1415c640f;
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              uVar11 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1415c640f;
            }
            lVar7 = lVar7 + 2;
          } while( true );
        }
        if (iVar3 + *(int *)(lVar1 + 0x18) == 1) {
          return iVar2;
        }
      }
      goto LAB_1415c6398;
    }
  }
  return -1;
LAB_1415c640f:
  if (uVar8 == uVar6) {
    return iVar2;
  }
LAB_1415c6398:
  iVar2 = *(int *)(lVar4 + 0x70 + lVar10);
  if (iVar2 == -1) {
    return -1;
  }
  goto LAB_1415c638b;
}



// FUNCTION 1415c6426 FUN_1415c6426 body=1464 status=ok
// SIG undefined FUN_1415c6426(void)

void FUN_1415c6426(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auStack_178 [40];
  undefined8 *local_150;
  longlong *local_148;
  int local_140;
  longlong local_138;
  longlong *local_130;
  void **local_128;
  undefined8 *local_120;
  void *local_118;
  int local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8 [2];
  uint local_a8 [4];
  uint *local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_150 = param_2;
  FUN_14131d034(param_1,&local_138,param_2);
  *(undefined1 *)(local_138 + 0x100) = 0;
  iVar3 = *(int *)(local_138 + 0x88);
  if (iVar3 == 0) {
    uVar16 = 1;
    iVar11 = 0;
    uVar14 = 0;
    iVar10 = 0;
  }
  else {
    puVar4 = *(uint **)(local_138 + 0x80);
    if (*(uint **)(local_138 + 0x80) == (uint *)0x0) {
      puVar4 = (uint *)(local_138 + 0x70);
    }
    uVar5 = *puVar4;
    if (uVar5 == 0) {
      iVar11 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar11 = iVar3 + -1;
      }
      uVar14 = 0;
      uVar17 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar17 = uVar14;
      }
      iVar11 = 0;
      do {
        if (uVar17 == uVar14) goto LAB_1415c650a;
        iVar11 = iVar11 + 0x20;
        uVar5 = puVar4[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar5 == 0);
    }
    else {
      iVar11 = 0;
      uVar14 = 0;
    }
    uVar16 = (ulonglong)(-uVar5 & uVar5);
    uVar17 = uVar16 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar10 = (iVar11 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar10) {
      iVar10 = iVar3;
    }
  }
  if (iVar10 != iVar3) {
    uVar5 = 0xffffffff;
    do {
      FUN_143f4601c(param_1,(longlong)iVar10 * 0x18 + *(longlong *)(local_138 + 0x60));
      uVar5 = ~(uint)uVar16 & uVar5;
      puVar4 = *(uint **)(local_138 + 0x80);
      if (*(uint **)(local_138 + 0x80) == (uint *)0x0) {
        puVar4 = (uint *)(local_138 + 0x70);
      }
      iVar8 = *(int *)(local_138 + 0x88);
      iVar10 = (int)uVar14;
      lVar18 = (longlong)iVar10;
      uVar13 = puVar4[lVar18] & uVar5;
      if (uVar13 == 0) {
        iVar6 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar6 = iVar8 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar10) {
          iVar7 = iVar10;
        }
        if (iVar10 < iVar6) {
          lVar12 = 0;
          do {
            uVar13 = puVar4[lVar18 + lVar12 + 1];
            if (uVar13 != 0) {
              uVar14 = (ulonglong)(iVar10 + (int)lVar12 + 1);
              uVar5 = 0xffffffff;
              goto LAB_1415c6896;
            }
            iVar11 = iVar11 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar7 - lVar18 != lVar12);
          uVar5 = 0xffffffff;
          iVar10 = iVar7;
        }
        uVar14 = (ulonglong)(iVar10 + 1);
        iVar10 = iVar8;
      }
      else {
LAB_1415c6896:
        uVar16 = (ulonglong)(-uVar13 & uVar13);
        uVar17 = uVar16 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar10 = (iVar11 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar8 <= iVar10) {
          iVar10 = iVar8;
        }
      }
    } while (iVar10 != iVar3);
  }
LAB_1415c650a:
  uVar14 = 0;
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_14586fca4(local_b8,local_138 + 0xb0);
  iVar11 = local_90;
  uVar17 = 1;
  iVar10 = 0;
  iVar3 = 0;
  if (local_90 != 0) {
    puVar4 = local_98;
    if (local_98 == (uint *)0x0) {
      puVar4 = local_a8;
    }
    uVar5 = *puVar4;
    if (uVar5 == 0) {
      iVar3 = local_90 + 0x1e;
      if (-1 < local_90 + -1) {
        iVar3 = local_90 + -1;
      }
      uVar14 = 0;
      uVar17 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar17 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar17 == uVar14) goto LAB_1415c65e1;
        iVar10 = iVar10 + 0x20;
        uVar5 = puVar4[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar14 = 0;
    }
    uVar17 = (ulonglong)(-uVar5 & uVar5);
    uVar16 = uVar17 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar3 = (iVar10 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (local_90 <= iVar3) {
      iVar3 = local_90;
    }
  }
  if (iVar3 != local_90) {
    uVar5 = 0xffffffff;
    do {
      FUN_145c5940a(param_1,local_138,(longlong)iVar3 * 0x18 + local_b8[0]);
      uVar5 = ~(uint)uVar17 & uVar5;
      puVar4 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar4 = local_a8;
      }
      iVar3 = (int)uVar14;
      lVar18 = (longlong)iVar3;
      uVar13 = puVar4[lVar18] & uVar5;
      if (uVar13 == 0) {
        iVar8 = local_90 + 0x1e;
        if (-1 < local_90 + -1) {
          iVar8 = local_90 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar6 = iVar8;
        if (iVar8 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar3 < iVar8) {
          lVar12 = 0;
          do {
            uVar13 = puVar4[lVar18 + lVar12 + 1];
            if (uVar13 != 0) {
              uVar14 = (ulonglong)(iVar3 + (int)lVar12 + 1);
              uVar5 = 0xffffffff;
              goto LAB_1415c6982;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar6 - lVar18 != lVar12);
          uVar5 = 0xffffffff;
          iVar3 = iVar6;
        }
        uVar14 = (ulonglong)(iVar3 + 1);
        iVar3 = local_90;
      }
      else {
LAB_1415c6982:
        uVar17 = (ulonglong)(-uVar13 & uVar13);
        uVar16 = uVar17 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar3 = (iVar10 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (local_90 <= iVar3) {
          iVar3 = local_90;
        }
      }
    } while (iVar3 != iVar11);
  }
LAB_1415c65e1:
  FUN_1460227a4(local_b8);
  FUN_14131cafa(param_1,&local_148);
  puVar15 = local_150;
  if ((longlong)local_140 != 0) {
    lVar18 = (longlong)local_140 << 4;
    plVar9 = local_148;
    do {
      plVar2 = *(longlong **)(*plVar9 + 0x38);
      if (plVar2 != (longlong *)0x0) {
        local_118 = (void *)0x0;
        local_110 = *(int *)(puVar15 + 1);
        lVar12 = (longlong)local_110;
        _Src = (void *)*puVar15;
        if (lVar12 == 0) {
          local_10c = 0;
        }
        else {
          FUN_1446dd670(&local_118,local_110,0);
          memcpy(local_118,_Src,lVar12 * 2);
        }
        local_e8 = 0;
        local_e0 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_dc = 0xffffffff00000080;
        local_d4 = 0;
        local_c8 = 0;
        local_c0 = 0;
        local_120 = &local_108;
        local_128 = &local_118;
        FUN_1415d42fa(&local_108,&local_128);
        (**(code **)(*plVar2 + 0x1b8))(plVar2,&local_108);
        puVar15 = local_150;
        local_c0 = 0;
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        FUN_1408910a4(&local_108);
        if (local_118 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_1458eaf94(param_1,plVar9);
      plVar9 = plVar9 + 2;
      lVar18 = lVar18 + -0x10;
    } while (lVar18 != 0);
  }
  FUN_146586558(param_1,puVar15);
  FUN_145cc7c76(param_1 + 0x138,puVar15);
  FUN_14131cf14(local_148,local_140);
  if (local_148 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c31a(local_b8);
  if (local_130 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_130 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_130)(local_130);
      LOCK();
      piVar1 = (int *)((longlong)local_130 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_130 + 0x10))(local_130);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415c69e0 FUN_1415c69e0 body=202 status=ok
// SIG undefined FUN_1415c69e0(void)

undefined8 *
FUN_1415c69e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar2 = &PTR_LAB_149f21780;
  *(undefined4 *)(puVar2 + 1) = param_3;
  puVar2[2] = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(puVar2 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 2,iVar1,0);
    memcpy((void *)puVar2[2],_Src,(longlong)iVar1 * 2);
  }
  puVar2[4] = *param_5;
  puVar2[5] = param_2;
  puVar2[6] = 0;
  *(undefined4 *)(puVar2 + 7) = 0;
  puVar2[8] = param_1;
  *puVar2 = &PTR_FUN_149f22330;
  puVar2[9] = 0;
  return puVar2;
}



// FUNCTION 1415c6aaa FUN_1415c6aaa body=143 status=ok
// SIG undefined FUN_1415c6aaa(void)

void FUN_1415c6aaa(longlong param_1,char *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x48);
    lVar4 = (longlong)*(int *)(param_1 + 0x50) * 0x38 + lVar5;
    do {
      lVar1 = *(longlong *)(lVar5 + 0x28);
      if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x88) & 8) != 0)) {
        if (*param_2 == '\0') {
          if ((longlong)*(int *)(param_2 + 0x10) != 0) {
            lVar6 = 0;
            do {
              lVar2 = *(longlong *)(*(longlong *)(param_2 + 8) + lVar6);
              if ((lVar2 != 0) &&
                 ((lVar3 = *(longlong *)(*(longlong *)(param_2 + 8) + 8 + lVar6), lVar3 == 0 ||
                  ((*(longlong *)(*(longlong *)(lVar1 + 0x58) + 0x60) == lVar2 &&
                   (*(longlong *)(*(longlong *)(lVar1 + 0x58) + 0x58) == lVar3))))))
              goto LAB_1415c6af0;
              lVar6 = lVar6 + 0x10;
            } while ((longlong)*(int *)(param_2 + 0x10) * 0x10 != lVar6);
          }
        }
        else {
LAB_1415c6af0:
          FUN_14604aaec();
        }
      }
      lVar5 = lVar5 + 0x38;
    } while (lVar5 != lVar4);
  }
  return;
}



// FUNCTION 1415c6b3a FUN_1415c6b3a body=186 status=ok
// SIG undefined FUN_1415c6b3a(void)

void FUN_1415c6b3a(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&DAT_14cae9268,L"Lighting",1);
  local_40 = L"Lighting";
  local_38 = 8;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"SpriteCategory";
  local_38 = 0xe;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Lighting";
  local_38 = 8;
  FUN_140208c1e(&DAT_14cae9270,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c6bf6 FUN_1415c6bf6 body=525 status=ok
// SIG undefined FUN_1415c6bf6(void)

undefined8 * FUN_1415c6bf6(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0x40000000400;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 10;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0x3ba9cdc43a6ed02d;
  param_1[10] = 0x3f8000003c1f44d4;
  *param_1 = &PTR_FUN_14b7a8760;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x15) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar2;
  *(undefined4 *)(param_1 + 0x16) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar4;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_1446f470e(param_1 + 0x1d,&DAT_14a1f75d8,1);
  *(undefined1 *)(param_1 + 0x1e) = 1;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x42c80000;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  lVar5 = 0x180;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar5 + 0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar5) = 0;
    ((undefined8 *)((longlong)param_1 + lVar5))[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar5 + 0x20) = 0;
    lVar5 = lVar5 + 0x28;
  } while (lVar5 != 0x2c0);
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0x3f4ccccd;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  FUN_145ec9c24(param_1 + 0x5c);
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3fc) = 0x3f800000;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined8 *)((longlong)param_1 + 0x419) = 0;
  *(undefined8 *)((longlong)param_1 + 0x421) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0x3f800000;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0x412000003f800000;
  param_1[0x97] = 0x3dcccccd3dcccccd;
  *(undefined4 *)(param_1 + 0x98) = 0x3e4ccccd;
  *(undefined2 *)((longlong)param_1 + 0x4c4) = 0;
  return param_1;
}



// FUNCTION 1415c6e04 FUN_1415c6e04 body=483 status=ok
// SIG undefined FUN_1415c6e04(void)

void FUN_1415c6e04(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_b8 [40];
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  int local_58;
  code *local_50;
  longlong *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
    FUN_140212f8e(&local_40);
    auVar2 = SEXT816(local_40 - *(longlong *)(param_1 + 0x80)) * SEXT816(0x346dc5d63886594b);
    if (*(longlong *)(param_2 + 0x1f0) == 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      iVar3 = 0;
    }
    else {
      uVar1 = *(uint *)(*(longlong *)(param_2 + 0x1f0) + 0xc);
      *(uint *)(param_1 + 0x58) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      iVar3 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar6 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar6) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar3 = *(int *)(lVar5 + 0x10);
        bVar6 = iVar3 == 0;
        if (bVar6) {
          *(int *)(lVar5 + 0x10) = iVar4;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar6) {
          iVar3 = iVar4;
        }
      }
    }
    *(int *)(param_1 + 0x5c) = iVar3;
    lVar5 = FUN_1414fb80c();
    if (lVar5 == 0) {
      local_68 = 0;
      local_60 = 0;
    }
    else {
      local_68 = *(longlong *)(lVar5 + 0x3d0);
      if (local_68 == 0) {
        local_68 = *(longlong *)(lVar5 + 0x7a0);
      }
      local_60 = *(undefined8 *)(lVar5 + 0x608);
    }
    local_48 = &local_70;
    local_50 = FUN_143eec8ee;
    local_80 = "map_connect";
    local_78 = "";
    local_90 = "bifrost_ue4_content_load";
    local_88 = "";
    local_70 = param_2;
    local_58 = (int)(auVar2._8_8_ >> 0xb) - (auVar2._12_4_ >> 0x1f);
    bifrost::telemetry::raiseEvent(*(undefined8 *)(param_1 + 0x50));
    *(longlong *)(param_1 + 0x80) = local_40;
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415c6fe8 FUN_1415c6fe8 body=524 status=ok
// SIG undefined FUN_1415c6fe8(void)

void FUN_1415c6fe8(longlong param_1,longlong param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  longlong *local_b0;
  longlong local_a8 [3];
  longlong local_90;
  undefined4 local_88;
  undefined1 local_80;
  code *local_58;
  code *local_50;
  code *local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    local_a8[0] = 0;
    local_a8[1] = 0;
    if ((((int)param_4[1] != 0) && (plVar1 = (longlong *)*param_4, plVar1 != (longlong *)0x0)) &&
       ((**(code **)(*plVar1 + 0x60))(plVar1,0,local_a8,3), local_a8[0] != 0)) {
      FUN_1400020a8();
    }
  }
  else {
    local_a8[0] = param_2;
    if (param_1 == 0) {
      uVar7 = 0;
      uVar4 = 0;
    }
    else {
      uVar7 = *(uint *)(param_1 + 0xc);
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      uVar4 = (ulonglong)*(uint *)(lVar8 + 0x10);
      if (*(uint *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar3 = *(uint *)(lVar8 + 0x10);
        bVar9 = uVar3 == 0;
        if (bVar9) {
          *(uint *)(lVar8 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar9) {
          uVar3 = uVar6;
        }
        uVar4 = (ulonglong)uVar3;
      }
    }
    local_a8[2] = uVar4 << 0x20 | (ulonglong)uVar7;
    local_90 = *param_4;
    *param_4 = 0;
    local_88 = (undefined4)param_4[1];
    *(undefined4 *)(param_4 + 1) = 0;
    local_58 = FUN_143efb9e4;
    local_50 = FUN_143efbae0;
    local_48 = FUN_143efbb1c;
    local_40 = FUN_143efbb9c;
    local_b8 = &LAB_143efb9dc;
    local_b0 = local_a8;
    local_80 = (char)param_3;
    bifrost::messaging::createLobby(*(undefined8 *)(param_1 + 0x2b8),&local_b8,param_3);
  }
  puVar5 = (undefined8 *)*param_4;
  if ((int)param_4[1] != 0) {
    if (puVar5 == (undefined8 *)0x0) goto LAB_1415c7129;
    (**(code **)*puVar5)(puVar5,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
    puVar5 = (undefined8 *)*param_4;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1415c7129:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415c71f6 FUN_1415c71f6 body=79 status=ok
// SIG undefined FUN_1415c71f6(void)

undefined8 FUN_1415c71f6(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x180))();
    if (lVar1 != 0) {
      lVar1 = FUN_140149a73(lVar1,0);
      if (lVar1 != 0) {
        plVar2 = (longlong *)FUN_14007a60a(lVar1);
        if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001415c7237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*plVar2 + 0x110))(plVar2);
          return uVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1415c7246 FUN_1415c7246 body=112 status=ok
// SIG undefined FUN_1415c7246(void)

undefined8 *
FUN_1415c7246(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar1 = (**(code **)(*DAT_14c8407a8 + 0xa8))(DAT_14c8407a8,param_2,param_3,param_4,param_5);
  FUN_14078dc50(param_1,uVar1);
  *param_1 = &PTR_FUN_149e002c8;
  return param_1;
}



// FUNCTION 1415c72b6 FUN_1415c72b6 body=500 status=ok
// SIG undefined FUN_1415c72b6(void)

void FUN_1415c72b6(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((int)param_1[5] == 0) {
    uVar9 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
    plVar13 = local_60;
  }
  else {
    local_70 = local_60;
    FUN_1449c0562(&local_68);
    uVar9 = local_68 >> 0x20;
    plVar13 = local_70;
  }
  plVar3 = local_60;
  iVar4 = (int)local_60[3];
  iVar14 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < iVar4) {
    do {
      if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar6 * 0x30) != 0) {
        FUN_1400020a8();
        iVar4 = (int)plVar3[3];
      }
      uVar12 = uVar12 & ~(uint)uVar9;
      plVar7 = (longlong *)plVar3[2];
      if ((longlong *)plVar3[2] == (longlong *)0x0) {
        plVar7 = plVar3;
      }
      lVar11 = (longlong)iVar14;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar2 = iVar6;
        if (iVar6 < iVar14) {
          iVar2 = iVar14;
        }
        if (iVar6 <= iVar14) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar2 - lVar11 == lVar8) goto LAB_1415c7419;
        }
        iVar14 = iVar14 + (int)lVar8 + 1;
        uVar12 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_1415c7419:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar12 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar13,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c74ac FUN_1415c74ac body=7 status=ok
// SIG undefined FUN_1415c74ac(void)

void FUN_1415c74ac(undefined4 *param_1)

{
  *param_1 = 0x7fffffff;
  return;
}



// FUNCTION 1415c74b4 FUN_1415c74b4 body=135 status=ok
// SIG undefined FUN_1415c74b4(void)

void FUN_1415c74b4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x118);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x100);
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
  if (*(char *)(param_1 + 0x72) == '\x01') {
    *(undefined1 *)(param_1 + 0x72) = 0;
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  plVar3 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x0001415c7523. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return;
}



// FUNCTION 1415c753c FUN_1415c753c body=319 status=ok
// SIG undefined FUN_1415c753c(void)

undefined4 * FUN_1415c753c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  pvVar2 = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_141894126(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),pvVar2,(longlong)iVar1 << 4);
  }
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  pvVar2 = *(void **)(param_2 + 10);
  param_1[0xc] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    FUN_1406fd90c(param_1 + 10,iVar1,0);
    memcpy(*(void **)(param_1 + 10),pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined2 **)(param_1 + 0xe) = &DAT_14a171d50;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  FUN_1406022fe(param_1 + 0x12,param_2 + 0x12);
  *(undefined ***)(param_1 + 0xe) = &PTR_FUN_14b1828b0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  iVar1 = param_2[0x18];
  pvVar2 = *(void **)(param_2 + 0x16);
  param_1[0x18] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x19] = 0;
  }
  else {
    FUN_1487630d4(param_1 + 0x16,iVar1,0);
    memcpy(*(void **)(param_1 + 0x16),pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1415c767c FUN_1415c767c body=245 status=ok
// SIG undefined FUN_1415c767c(void)

longlong * FUN_1415c767c(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145eeb6b8();
  local_30 = 1;
  local_38 = param_3;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca54670);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1415c7772 FUN_1415c7772 body=297 status=ok
// SIG undefined FUN_1415c7772(void)

void FUN_1415c7772(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  longlong local_88 [3];
  undefined4 local_70;
  code *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    local_88[0] = 0;
    local_88[1] = 0;
    if (((int)param_3[1] != 0) && (plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x60))(plVar1,3,local_88,0);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    local_88[2] = *param_3;
    *param_3 = 0;
    local_70 = (undefined4)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
    local_38 = FUN_143efcd44;
    local_30 = &LAB_143efce12;
    local_28 = &LAB_143efce26;
    local_20 = FUN_143efce50;
    bifrost::messaging::getPeersInRoom(*(undefined8 *)(param_1 + 0x2b8));
  }
  puVar2 = (undefined8 *)*param_3;
  if ((int)param_3[1] != 0) {
    if (puVar2 == (undefined8 *)0x0) goto LAB_1415c782f;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar2 = (undefined8 *)*param_3;
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1415c782f:
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c789c FUN_1415c789c body=109 status=ok
// SIG undefined FUN_1415c789c(void)

undefined8 *
FUN_1415c789c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar1 = (**(code **)(*DAT_14c8407a8 + 0x30))(DAT_14c8407a8,param_2,param_3,param_4,param_5);
  FUN_14078dc50(param_1,uVar1);
  *param_1 = FAutoConsoleVariableRef::vftable;
  return param_1;
}



// FUNCTION 1415c790a FUN_1415c790a body=2104 status=ok
// SIG undefined FUN_1415c790a(void)

void FUN_1415c790a(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  int local_c4;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  int local_98 [6];
  longlong local_80;
  undefined8 *local_70;
  int local_68;
  undefined4 uStack_64;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_2 + 8) != '\x01') {
    iVar7 = *(int *)((longlong)param_1 + 0x17c);
    FUN_143c41687(param_1[0x2e],(int)param_1[0x2f]);
    *(undefined4 *)(param_1 + 0x2f) = 0;
    if ((iVar7 < 0) && (*(int *)((longlong)param_1 + 0x17c) != 0)) {
      FUN_1489b3450(param_1 + 0x2e);
    }
    goto LAB_1415c7f40;
  }
  lVar4 = param_1[0x2c];
  local_c0 = (longlong *)param_1[0x2d];
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  local_b0 = (longlong *)param_1[0x2e];
  local_b8 = (longlong)(int)param_1[0x2f];
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  if ((longlong)*(int *)(param_2 + 0x18) != 0) {
    plVar2 = param_1 + 0x2e;
    piVar12 = *(int **)(param_2 + 0x10);
    piVar10 = piVar12 + (longlong)*(int *)(param_2 + 0x18) * 0x14;
    local_d0 = local_b8 << 4;
    do {
      local_a8 = DAT_14cb8dd60;
      local_a0 = DAT_14cb8dd68;
      FUN_1448075d0(&local_70,&local_a8);
      iVar7 = *piVar12;
      iVar11 = (int)local_70;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (iVar7 == iVar11) {
        if (lVar4 == 0) {
          (**(code **)(*param_1 + 0x2d8))(param_1,&local_70,piVar12,&DAT_14c9485f0);
          plVar9 = (longlong *)CONCAT44(uStack_64,local_68);
          if (plVar9 == (longlong *)0x0) {
            param_1[0x2c] = (longlong)local_70;
            plVar15 = (longlong *)param_1[0x2d];
            if (plVar15 != (longlong *)0x0) {
              param_1[0x2d] = 0;
LAB_1415c7bf1:
              LOCK();
              plVar9 = plVar15 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar1 = (int *)((longlong)plVar15 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar7 = *piVar1;
                UNLOCK();
joined_r0x0001415c7c34:
                if (iVar7 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
              }
            }
          }
          else {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
            param_1[0x2c] = (longlong)local_70;
            plVar15 = (longlong *)param_1[0x2d];
            if (plVar9 == plVar15) {
              LOCK();
              plVar15 = plVar9 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar7 = *piVar1;
                UNLOCK();
                plVar15 = plVar9;
                goto joined_r0x0001415c7c34;
              }
            }
            else {
              param_1[0x2d] = (longlong)plVar9;
              if (plVar15 != (longlong *)0x0) goto LAB_1415c7bf1;
            }
          }
LAB_1415c7acd:
          plVar9 = (longlong *)CONCAT44(uStack_64,local_68);
        }
        else {
          if (local_c0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
            UNLOCK();
          }
          plVar9 = (longlong *)param_1[0x2d];
          param_1[0x2c] = lVar4;
          param_1[0x2d] = (longlong)local_c0;
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar9 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      else {
        FUN_1447a97f4(local_98,piVar12);
        lVar16 = local_d0;
        plVar9 = local_b0;
        if ((int)local_b8 != 0) {
          do {
            if (*(int *)(*plVar9 + 8) == local_98[0]) {
              if (local_80 != 0) {
                FUN_1400020a8();
              }
              if (plVar9 == (longlong *)0x0) goto LAB_1415c7a6d;
              iVar7 = (int)param_1[0x2f];
              *(uint *)(param_1 + 0x2f) = iVar7 + 1U;
              if (*(uint *)((longlong)param_1 + 0x17c) < iVar7 + 1U) {
                FUN_146563568(plVar2,iVar7);
              }
              lVar16 = *plVar2;
              *(longlong *)(lVar16 + (longlong)iVar7 * 0x10) = *plVar9;
              lVar13 = plVar9[1];
              *(longlong *)(lVar16 + 8 + (longlong)iVar7 * 0x10) = lVar13;
              if (lVar13 != 0) {
                LOCK();
                *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
                UNLOCK();
              }
              goto LAB_1415c7bbd;
            }
            lVar16 = lVar16 + -0x10;
            plVar9 = plVar9 + 2;
          } while (lVar16 != 0);
        }
        if (local_80 != 0) {
          FUN_1400020a8();
        }
LAB_1415c7a6d:
        (**(code **)(*param_1 + 0x2d8))(param_1,&local_70,piVar12,piVar12 + 10);
        iVar7 = (int)param_1[0x2f];
        *(uint *)(param_1 + 0x2f) = iVar7 + 1U;
        if (*(uint *)((longlong)param_1 + 0x17c) < iVar7 + 1U) {
          FUN_146563568(plVar2,iVar7);
        }
        lVar16 = *plVar2;
        *(undefined8 **)(lVar16 + (longlong)iVar7 * 0x10) = local_70;
        lVar13 = CONCAT44(uStack_64,local_68);
        *(longlong *)(lVar16 + 8 + (longlong)iVar7 * 0x10) = lVar13;
        if (lVar13 != 0) {
          LOCK();
          *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
          UNLOCK();
          goto LAB_1415c7acd;
        }
      }
LAB_1415c7bbd:
      piVar12 = piVar12 + 0x14;
    } while (piVar12 != piVar10);
  }
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    local_d0 = param_1[4];
  }
  else {
    local_d0 = 0;
  }
  lVar4 = param_1[0x2c];
  if ((lVar4 != 0) && (*(char *)(lVar4 + 0x58) == '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x159) = 1;
    *(int *)((longlong)param_1 + 0x15c) = *(int *)((longlong)param_1 + 0x15c) + 1;
    *(undefined1 *)(lVar4 + 0x58) = 1;
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    FUN_1446efa72(&local_70,0,3,0x10);
    puVar6 = local_70;
    local_68 = 3;
    *local_70 = &PTR_LAB_14b434d90;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar16 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar16 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar16;
    local_70[2] = lVar13;
    *local_70 = &PTR_FUN_14b4344c0;
    local_70[3] = 0;
    iVar7 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar3 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_70 + 3) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      iVar7 = *(int *)(lVar16 + 0x10);
      if (*(int *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar7 = *(int *)(lVar16 + 0x10);
        bVar17 = iVar7 == 0;
        if (bVar17) {
          *(int *)(lVar16 + 0x10) = iVar11;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar17) {
          iVar7 = iVar11;
        }
      }
    }
    *(int *)((longlong)puVar6 + 0x1c) = iVar7;
    puVar6[4] = FUN_141366796;
    FUN_145840754(local_d0,param_1,lVar4 + 8,&local_70);
    if (local_68 != 0) {
      if (local_70 == (undefined8 *)0x0) goto LAB_1415c7cf7;
      (**(code **)*local_70)(local_70,0);
      FUN_1446efa72(&local_70,0,0,0x10);
      local_68 = 0;
    }
    if (local_70 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1415c7cf7:
  lVar4 = param_1[0x2f];
  if ((longlong)(int)lVar4 != 0) {
    lVar16 = param_1[0x2e];
    lVar13 = 0;
    do {
      lVar5 = *(longlong *)(lVar16 + lVar13);
      if (*(char *)(lVar5 + 0x58) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x159) = 1;
        *(int *)((longlong)param_1 + 0x15c) = *(int *)((longlong)param_1 + 0x15c) + 1;
        *(undefined1 *)(lVar5 + 0x58) = 1;
        local_70 = (undefined8 *)0x0;
        local_68 = 0;
        FUN_1446efa72(&local_70,0,3,0x10);
        puVar6 = local_70;
        local_68 = 3;
        *local_70 = &PTR_LAB_14b434d90;
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 1;
        lVar14 = DAT_14c758608 + 1;
        if (lVar8 == 0) {
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 2;
          lVar14 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar14;
        local_70[2] = lVar8;
        *local_70 = &PTR_FUN_14b4344c0;
        local_70[3] = 0;
        if (param_1 == (longlong *)0x0) {
          iVar7 = 0;
        }
        else {
          uVar3 = *(uint *)((longlong)param_1 + 0xc);
          *(uint *)(local_70 + 3) = uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          iVar7 = *(int *)(lVar14 + 0x10);
          if (*(int *)(lVar14 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar11 = DAT_14c964868 + 1;
            bVar17 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar17) {
              local_c4 = iVar11;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar11);
              iVar11 = local_c4;
            }
            LOCK();
            iVar7 = *(int *)(lVar14 + 0x10);
            bVar17 = iVar7 == 0;
            if (bVar17) {
              *(int *)(lVar14 + 0x10) = iVar11;
              iVar7 = 0;
            }
            UNLOCK();
            if (bVar17) {
              iVar7 = iVar11;
            }
          }
        }
        *(int *)((longlong)puVar6 + 0x1c) = iVar7;
        puVar6[4] = FUN_141366796;
        FUN_145840754(local_d0,param_1,lVar5 + 8,&local_70);
        if (local_68 != 0) {
          if (local_70 == (undefined8 *)0x0) goto LAB_1415c7d27;
          (**(code **)*local_70)();
          FUN_1446efa72(&local_70,0,0,0x10);
          local_68 = 0;
        }
        if (local_70 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_1415c7d27:
      lVar13 = lVar13 + 0x10;
    } while ((longlong)(int)lVar4 * 0x10 != lVar13);
  }
  plVar2 = local_b0;
  FUN_143c41687(local_b0,local_b8);
  if (plVar2 != (longlong *)0x0) {
    FUN_1400020a8(plVar2);
  }
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_c0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar12 = (int *)((longlong)local_c0 + 0xc);
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (*piVar12 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
  }
LAB_1415c7f40:
  if ((*(char *)((longlong)param_1 + 0x159) == '\x01') && (*(int *)((longlong)param_1 + 0x15c) == 0)
     ) {
    *(undefined1 *)((longlong)param_1 + 0x159) = 0;
    (**(code **)(*param_1 + 0x2e0))(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c8144 FUN_1415c8144 body=3708 status=ok
// SIG undefined FUN_1415c8144(void)

void FUN_1415c8144(undefined4 *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong lVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  undefined ***pppuVar15;
  longlong lVar16;
  uint *puVar17;
  int iVar18;
  int *piVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_128 [32];
  code **local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  int *local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  longlong *local_98;
  longlong local_90;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined4 *local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (DAT_14cb907b8 == (longlong *)0x0) {
    local_d0 = local_88;
    local_88[0] = FUN_1449e2820;
    local_c0 = FUN_14081d0ea;
    local_c8 = FUN_14081d0ea;
    local_d8 = &LAB_1489c8acb;
    local_e0 = &LAB_146027b0e;
    local_e8 = L"Engine";
    local_f0 = 0;
    local_f8 = 0x10000006;
    local_100 = 8;
    local_108 = (code **)CONCAT44(local_108._4_4_,0x128);
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
  }
  plVar22 = DAT_14cb907b8;
  lVar11 = DAT_14cb907b8[0x22];
  if (lVar11 == 0) {
    (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
    lVar11 = plVar22[0x22];
  }
  if ((*(char *)(lVar11 + 0x73) == '\x01') && (FUN_1489cc00a(local_88), local_88[0] != (code *)0x0))
  {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) goto LAB_1415c83ab;
  piVar19 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  iVar18 = *piVar19;
  if (DAT_14c86a9fc == 0) {
    if (iVar18 != 2) {
      if (iVar18 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) {
          iVar18 = *piVar19;
          if (DAT_14c86a9fc == 0) goto LAB_1415c8217;
          goto LAB_1415c8260;
        }
      }
      else if (iVar18 == 0x10) goto LAB_1415c8217;
LAB_1415c830d:
      if (DAT_14ca9a438 == '\0') {
        iVar18 = *piVar19;
        if (DAT_14c86a9f8 != '\x01') {
LAB_1415c8f81:
          if (DAT_14c86a9fc == 0) {
            if (iVar18 == 1) goto LAB_1415c8221;
            if (iVar18 == 2) goto LAB_1415c81e6;
          }
LAB_1415c8260:
          if (iVar18 != 0x10) goto LAB_1415c83ab;
          goto LAB_1415c81e6;
        }
        if (iVar18 == 2) {
          if (DAT_14c86a9fc != 0) goto LAB_1415c83ab;
          goto LAB_1415c81e6;
        }
        if (iVar18 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) {
            iVar18 = *piVar19;
            goto LAB_1415c8f81;
          }
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar1 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar1;
        if (puVar13 != (uint *)0x0) goto LAB_1415c8cb4;
        while( true ) {
          uVar8 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar8 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar8 | 1;
            __tlregdtor(&LAB_143ea3853);
          }
          lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar11 + 0x310);
          *(undefined8 *)(lVar11 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar1 = puVar12;
          FUN_140217a48(puVar1);
          puVar13 = (uint *)*puVar1;
LAB_1415c8cb4:
          puVar21 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar21 + 0x16);
          uVar8 = puVar13[0x12];
          if (puVar17 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar5 = *puVar13;
            *puVar13 = *puVar13 + uVar8 + 1;
            UNLOCK();
            if ((uVar5 ^ uVar8) != 0xffffffff) break;
            puVar13 = (uint *)*puVar1;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar1 = puVar13;
            puVar21 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar17 = (uint *)(puVar21 + 0x16);
            uVar8 = 0;
            if (puVar17 <= puVar13 + 0x4000) {
              uVar8 = 1;
              goto LAB_1415c8d34;
            }
          }
        }
        uVar8 = uVar8 + 1;
LAB_1415c8d34:
        *(uint **)(puVar13 + 0x10) = puVar17;
        puVar13[0x12] = uVar8;
        iVar18 = 0;
        FUN_1447247dc(puVar21,0);
        *puVar21 = &PTR_FUN_14b4568d8;
        puVar21[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar8 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
            uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
            iVar18 = 0;
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          iVar18 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar20 = 5;
        }
        if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
        }
        puVar21[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar21[9] = puVar21;
        puVar21[10] = puVar21;
        lVar11 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar11 == 0) {
          uVar6 = 1;
          if ((char)uVar20 != '\x06') {
            uVar6 = uVar20;
          }
          uVar20 = uVar6;
          uVar14 = 0;
        }
        else {
          if ((char)uVar20 == '\x06') {
            uVar20 = *(ulonglong *)(lVar11 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar11 + 0x30);
        }
        puVar21[0xf] = uVar14;
        puVar21[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar21 + 0x1c) = iVar18;
        if (puVar21 == (undefined8 *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
          UNLOCK();
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar21);
          LOCK();
          piVar19 = (int *)(puVar21 + 1);
          *piVar19 = *piVar19 + -1;
          UNLOCK();
          if (*piVar19 == 0) {
            (**(code **)*puVar21)(puVar21,1);
          }
        }
      }
      else {
        local_108 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14b456870;
        local_88[0] = FUN_143ea58c6;
        local_60 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateUserBackgroundDimensionsRT",&DAT_14cb91360);
        if (local_88[0] != (code *)0x0) {
          pppuVar15 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar15 = &local_68;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_1415c83ab;
    }
LAB_1415c8217:
    if (iVar18 != 2) {
      if (iVar18 != 1) goto LAB_1415c8260;
LAB_1415c8221:
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 != DVar10) goto LAB_1415c83ab;
    }
  }
  else if (iVar18 != 0x10) goto LAB_1415c830d;
LAB_1415c81e6:
  FUN_1418b5bf6(param_1);
LAB_1415c83ab:
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar8 = param_1[0x48];
  if (uVar8 != param_1[0x49]) {
    puVar1 = (undefined8 *)(lVar11 + 0x308);
    local_a0 = (undefined8 *)(lVar11 + 0x310);
    local_90 = 0x527800b400;
    lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    piVar19 = (int *)(lVar11 + 0xc60);
    local_98 = (longlong *)(lVar11 + 0x2b8);
    local_b0 = piVar19;
    do {
      lVar11 = *(longlong *)(param_1 + 0x44);
      lVar16 = (longlong)(int)(param_1[0x42] & uVar8);
      uVar3 = *(undefined4 *)(lVar11 + lVar16 * 0xc);
      uVar4 = *(undefined4 *)(lVar11 + 4 + lVar16 * 0xc);
      uVar5 = *(uint *)(lVar11 + 8 + lVar16 * 0xc);
      LOCK();
      param_1[0x48] = uVar8 + 1 & param_1[0x42];
      UNLOCK();
      if (((((param_1[0x55] != 0) && (uVar8 = param_1[0x54], -1 < (int)uVar8)) &&
           ((int)uVar8 < DAT_14c9647dc)) &&
          ((plVar22 = (longlong *)
                      ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
           plVar22 != (longlong *)0x0 && ((int)plVar22[2] == param_1[0x55])))) &&
         ((*(uint *)(plVar22 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(plVar22 + 1) & 0x10200000) == 0) {
          lVar11 = *plVar22;
        }
        else {
          lVar11 = 0;
        }
        cVar7 = FUN_140432338(lVar11);
        if (cVar7 != '\0') {
          if ((*(uint *)(plVar22 + 1) & 0x10200000) == 0) {
            lVar11 = *plVar22;
          }
          else {
            lVar11 = 0;
          }
          if ((longlong)*(int *)(lVar11 + 0x2b0) != 0) {
            lVar16 = *(longlong *)(lVar11 + 0x2a8);
            lVar23 = (longlong)*(int *)(lVar11 + 0x2b0) * 0x1c;
            do {
              FUN_143e97d48(lVar11,lVar16);
              lVar16 = lVar16 + 0x1c;
              lVar23 = lVar23 + -0x1c;
            } while (lVar23 != 0);
          }
          *(undefined4 *)(lVar11 + 0x2b0) = 0;
          if (*(int *)(lVar11 + 0x2b4) != 0) {
            FUN_1489ef4e0(lVar11 + 0x2a8);
          }
          piVar19 = local_b0;
          if ((*(short *)(lVar11 + 0x1ac) != 0) && (*(char *)(lVar11 + 0x1ae) == '\0')) {
            if (*(int *)(lVar11 + 0x260) != *(int *)(lVar11 + 0x28c)) {
              lVar16 = lVar11 + 0x290;
              if (*(longlong *)(lVar11 + 0x298) != 0) {
                lVar16 = *(longlong *)(lVar11 + 0x298);
              }
              iVar18 = *(int *)(lVar16 + (ulonglong)(*(int *)(lVar11 + 0x2a0) - 1U & uVar5) * 4);
              if (iVar18 != -1) {
                plVar22 = (longlong *)(lVar11 + 600);
                do {
                  lVar16 = *plVar22 + (longlong)iVar18 * 0x20;
                  if (*(uint *)(*plVar22 + (longlong)iVar18 * 0x20) == uVar5) {
                    if ((lVar16 + 8U & 0xfffffffffffffff7) != 0) {
                      local_a8 = plVar22;
                      if ((longlong)*(int *)(lVar16 + 0x10) != 0) {
                        lVar23 = *(longlong *)(lVar16 + 8);
                        lVar16 = (longlong)*(int *)(lVar16 + 0x10) * 0x1c;
                        do {
                          FUN_143e97d48(lVar11,lVar23);
                          lVar23 = lVar23 + 0x1c;
                          lVar16 = lVar16 + -0x1c;
                        } while (lVar16 != 0);
                      }
                      FUN_1489ee126(local_a8,uVar5);
                    }
                    break;
                  }
                  iVar18 = *(int *)(lVar16 + 0x18);
                } while (iVar18 != -1);
              }
            }
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0x180));
            FUN_1489ede82(lVar11 + 0x1b8,uVar5);
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar11 + 0x180));
            piVar19 = local_b0;
          }
        }
      }
      cVar7 = FUN_140595f28(param_1);
      if (cVar7 != '\0') {
        LOCK();
        *param_1 = 0;
        UNLOCK();
      }
      iVar18 = *piVar19;
      if (DAT_14c86a9fc == 0) {
        if (iVar18 == 2) {
LAB_1415c86e7:
          if (iVar18 == 2) goto LAB_1415c85ae;
          if (iVar18 == 1) {
            DVar9 = FUN_140ad26c0();
            DVar10 = GetCurrentThreadId();
            bVar24 = DVar9 == DVar10;
          }
          else {
            bVar24 = iVar18 == 0x10;
          }
LAB_1415c8708:
          piVar19 = local_b0;
          if (bVar24) goto LAB_1415c85ae;
        }
        else if (iVar18 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          piVar19 = local_b0;
          if (DVar9 != DVar10) goto LAB_1415c8766;
          iVar18 = *local_b0;
          if (DAT_14c86a9fc == 0) goto LAB_1415c86e7;
LAB_1415c873f:
          piVar19 = local_b0;
          if (iVar18 == 0x10) goto LAB_1415c85ae;
        }
        else {
          piVar19 = local_b0;
          if (iVar18 == 0x10) goto LAB_1415c86e7;
LAB_1415c8766:
          if (DAT_14ca9a438 == '\0') {
            iVar18 = *piVar19;
            if (DAT_14c86a9f8 != '\x01') {
LAB_1415c8b9e:
              if (DAT_14c86a9fc == 0) {
                if (iVar18 != 1) {
                  piVar19 = local_b0;
                  if (iVar18 == 2) goto LAB_1415c85ae;
                  goto LAB_1415c873f;
                }
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                bVar24 = DVar9 == DVar10;
              }
              else {
                bVar24 = iVar18 == 0x10;
              }
              goto LAB_1415c8708;
            }
            if (iVar18 == 2) {
              if (DAT_14c86a9fc == 0) goto LAB_1415c85ae;
              goto LAB_1415c881e;
            }
            if (iVar18 == 1) {
              DVar9 = FUN_140ad26c0();
              DVar10 = GetCurrentThreadId();
              piVar19 = local_b0;
              if (DVar9 == DVar10) {
                iVar18 = *local_b0;
                goto LAB_1415c8b9e;
              }
            }
          }
          if (DAT_14ca9a43c == 0) {
            puVar13 = (uint *)*puVar1;
            if (puVar13 != (uint *)0x0) goto LAB_1415c88d2;
            do {
              puVar21 = local_a0;
              uVar8 = *(uint *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x318);
              if ((uVar8 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar8 | 1;
                __tlregdtor(&LAB_143ea3853);
              }
              puVar12 = (undefined4 *)*puVar21;
              *puVar21 = 0;
              if (puVar12 == (undefined4 *)0x0) {
                puVar12 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar12 = 0xffffffff;
              *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
              puVar12[0x12] = 0;
              *puVar1 = puVar12;
              FUN_140217a48(puVar1);
              puVar13 = (uint *)*puVar1;
LAB_1415c88d2:
              uVar20 = *(longlong *)(puVar13 + 0x10) + 7;
              uVar8 = puVar13[0x12];
              while( true ) {
                puVar21 = (undefined8 *)(uVar20 & 0xfffffffffffffff8);
                if (puVar21 + 0x17 <= puVar13 + 0x4000) {
                  *(undefined8 **)(puVar13 + 0x10) = puVar21 + 0x17;
                  puVar13[0x12] = uVar8 + 1;
                  FUN_1447247dc(puVar21,0);
                  *puVar21 = &PTR_FUN_14b456930;
                  puVar21[0x15] = param_1;
                  *(undefined4 *)(puVar21 + 0x16) = uVar3;
                  if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                    uVar8 = DAT_14c7585c8 >> 10 & 3;
                    iVar18 = 0;
                    if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
                      uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
                      iVar18 = 0;
                    }
                    else {
                      uVar20 = 2;
                    }
                  }
                  else {
                    iVar18 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                             *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                    uVar20 = 5;
                  }
                  if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
                  }
                  puVar21[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar21[9] = puVar21;
                  puVar21[10] = puVar21;
                  lVar11 = *local_98;
                  if (lVar11 == 0) {
                    if ((char)uVar20 == '\x06') {
                      uVar20 = 1;
                    }
                    uVar14 = 0;
                  }
                  else {
                    if ((char)uVar20 == '\x06') {
                      uVar20 = *(ulonglong *)(lVar11 + 0x38) >> 0x3b;
                    }
                    uVar14 = *(undefined8 *)(lVar11 + 0x30);
                  }
                  puVar21[0xf] = uVar14;
                  puVar21[0x10] = (uVar20 << 0x3b) + local_90 | 0xc000000000000000;
                  *(int *)((longlong)puVar21 + 0x1c) = iVar18;
                  if (puVar21 == (undefined8 *)0x0) {
                    local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(0,local_88);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
                    UNLOCK();
                    local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
                    FUN_1447439e4(puVar21,local_88);
                    LOCK();
                    piVar2 = (int *)(puVar21 + 1);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)*puVar21)(puVar21,1);
                    }
                  }
                  goto LAB_1415c881e;
                }
                *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
                LOCK();
                uVar5 = *puVar13;
                *puVar13 = *puVar13 + uVar8 + 1;
                UNLOCK();
                if ((uVar5 ^ uVar8) != 0xffffffff) break;
                puVar13 = (uint *)*puVar1;
                *puVar13 = 0xffffffff;
                *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
                puVar13[0x12] = 0;
                *puVar1 = puVar13;
                uVar20 = (longlong)puVar13 + 0x5f;
                uVar8 = 0;
              }
            } while( true );
          }
          local_78 = (undefined ***)0x0;
          local_68 = &PTR_LAB_14b4568f0;
          local_88[0] = FUN_143ea5b06;
          local_108 = local_88;
          local_60 = param_1;
          local_58 = uVar3;
          FUN_14005a792(&DAT_14ca9a440,L"PaintCohtmlView",&DAT_14cb91364);
          if (local_88[0] != (code *)0x0) {
            pppuVar15 = local_78;
            if (local_78 == (undefined ***)0x0) {
              pppuVar15 = &local_68;
            }
            (*(code *)(*pppuVar15)[2])();
          }
        }
      }
      else {
        if (iVar18 != 0x10) goto LAB_1415c8766;
LAB_1415c85ae:
        plVar22 = *(longlong **)(param_1 + 0xc);
        if (plVar22 != (longlong *)0x0) {
          (**(code **)(*plVar22 + 0x10))(plVar22,uVar3,1);
          FUN_143e92990(param_1,&DAT_14ca85100);
          LOCK();
          *param_1 = 1;
          UNLOCK();
        }
      }
LAB_1415c881e:
      if ((*(longlong **)(param_1 + 0x52) != (longlong *)0x0) &&
         (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x52) + 0x78))(), cVar7 != '\0')) {
        (**(code **)(**(longlong **)(param_1 + 0x52) + 0x40))(*(longlong **)(param_1 + 0x52),uVar4);
      }
      uVar8 = param_1[0x48];
    } while (uVar8 != param_1[0x49]);
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c8fc2 FUN_1415c8fc2 body=280 status=ok
// SIG undefined FUN_1415c8fc2(void)

void FUN_1415c8fc2(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"MaterialAttributes";
  local_48 = 0x12;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Material Attributes";
  local_48 = 0x13;
  FUN_140208c1e(&DAT_14caeb078,local_58,local_54,&local_50);
  local_50 = L"Parameters";
  local_48 = 10;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Parameters";
  local_48 = 10;
  FUN_140208c1e(&DAT_14caeb088,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c90dc FUN_1415c90dc body=488 status=ok
// SIG undefined FUN_1415c90dc(void)

void FUN_1415c90dc(longlong param_1,int param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  longlong lVar13;
  int *piVar14;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined1 local_50 [4];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)(param_1 + 0x468);
  iVar4 = *(int *)(param_1 + 0x494);
  local_4c = param_2;
  if (param_3 == '\0') {
    if (iVar3 != iVar4) {
      lVar9 = *(longlong *)(param_1 + 0x4a0);
      if (*(longlong *)(param_1 + 0x4a0) == 0) {
        lVar9 = param_1 + 0x498;
      }
      piVar12 = (int *)(lVar9 + ((longlong)param_2 & (longlong)*(int *)(param_1 + 0x4a8) - 1U) * 4);
      do {
        iVar5 = *piVar12;
        lVar9 = (longlong)iVar5;
        if (lVar9 == -1) break;
        lVar7 = *(longlong *)(param_1 + 0x460);
        piVar1 = (int *)(lVar7 + lVar9 * 0xc);
        iVar6 = *piVar1;
        if (iVar6 == param_2) {
          lVar13 = *(longlong *)(param_1 + 0x4a0);
          if (*(longlong *)(param_1 + 0x4a0) == 0) {
            lVar13 = param_1 + 0x498;
          }
          iVar11 = *(int *)(lVar13 + (longlong)piVar1[2] * 4);
          if (iVar11 == iVar5) {
            piVar14 = (int *)(lVar13 + (longlong)piVar1[2] * 4);
          }
          else {
            do {
              piVar14 = (int *)(lVar7 + (longlong)iVar11 * 0xc + 4);
              iVar11 = *piVar14;
            } while (iVar11 != iVar5);
          }
          *piVar14 = piVar1[1];
          lVar7 = *(longlong *)(param_1 + 0x460);
          if (*(int *)(param_1 + 0x494) != 0) {
            *(int *)(lVar7 + (longlong)*(int *)(param_1 + 0x490) * 0xc) = iVar5;
          }
          *(undefined4 *)(lVar7 + lVar9 * 0xc) = 0xffffffff;
          uVar10 = 0xffffffff;
          if (0 < *(int *)(param_1 + 0x494)) {
            uVar10 = *(undefined4 *)(param_1 + 0x490);
          }
          *(undefined4 *)(lVar7 + lVar9 * 0xc + 4) = uVar10;
          *(int *)(param_1 + 0x490) = iVar5;
          *(int *)(param_1 + 0x494) = *(int *)(param_1 + 0x494) + 1;
          lVar9 = *(longlong *)(param_1 + 0x480);
          if (*(longlong *)(param_1 + 0x480) == 0) {
            lVar9 = param_1 + 0x470;
          }
          iVar11 = iVar5 + 0x1f;
          if (-1 < iVar5) {
            iVar11 = iVar5;
          }
          bVar8 = (byte)iVar5 & 0x1f;
          puVar2 = (uint *)(lVar9 + (longlong)(iVar11 >> 5) * 4);
          *puVar2 = *puVar2 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
          local_58 = piVar12;
        }
        else {
          piVar12 = piVar1 + 1;
        }
      } while (iVar6 != param_2);
    }
  }
  else {
    FUN_1447cbafe((longlong *)(param_1 + 0x460),local_50,&local_4c,0);
  }
  if ((iVar3 != iVar4) != (*(int *)(param_1 + 0x468) != *(int *)(param_1 + 0x494))) {
    FUN_140898514(param_1 + 0x2a0,*(int *)(param_1 + 0x468) != *(int *)(param_1 + 0x494));
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415c92c6 FUN_1415c92c6 body=537 status=ok
// SIG undefined FUN_1415c92c6(void)

void FUN_1415c92c6(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *param_2;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar5 != 0) && (*(uint *)(lVar5 + 8) == (uint)param_2[1])) {
      if (-1 < *(short *)(lVar5 + 4)) {
        do {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar5 + 2) * 8);
        } while (-1 < *(short *)(lVar5 + 4));
        if (lVar5 == 0) {
          return;
        }
      }
      if (*(longlong *)(lVar5 + 0x10) != 0) {
        *(undefined1 *)(*(longlong *)(lVar5 + 0x10) + 0xc) = 0;
        *(undefined1 *)(*(longlong *)(lVar5 + 0x10) + 0xd) = 0;
      }
      if (*(int *)(lVar5 + 0x94) < *(int *)(lVar5 + 0x68)) {
        FUN_145d6dd74(lVar5 + 0x60);
        FUN_141323fc0(param_1,lVar5,0x10);
      }
      *(undefined8 *)(lVar5 + 0x58) = 0;
      if (*(int *)(lVar5 + 0xf4) < *(int *)(lVar5 + 200)) {
        FUN_145dd240c(lVar5 + 0xc0,0);
        FUN_141323fc0(param_1,lVar5,0x20);
      }
      if (*(longlong *)(lVar5 + 0x110) != 0) {
        *(undefined8 *)(lVar5 + 0x110) = 0;
        FUN_141323fc0(param_1,lVar5,0x1000);
      }
      if ((((*(int *)(lVar5 + 0x30) != 0) && (uVar2 = *(uint *)(lVar5 + 0x2c), -1 < (int)uVar2)) &&
          ((int)uVar2 < DAT_14c9647dc)) &&
         (((lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar4 != 0 &&
           (*(int *)(lVar4 + 0x10) == *(int *)(lVar5 + 0x30))) &&
          ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
        *(undefined8 *)(lVar5 + 0x2c) = 0;
        FUN_141323fc0(param_1,lVar5,0x100);
      }
      if (*(longlong *)(lVar5 + 0x40) != 0) {
        *(undefined8 *)(lVar5 + 0x40) = 0;
        FUN_141323fc0(param_1,lVar5,0x200);
      }
      if (-1 < *(int *)(lVar5 + 0x50)) {
        *(undefined4 *)(lVar5 + 0x50) = 0xffffffff;
        *(undefined2 *)(lVar5 + 0x54) = 0x101;
        FUN_141323fc0(param_1,lVar5,8);
      }
      if (-1 < *(short *)(lVar5 + 0xb2)) {
        *(undefined2 *)(lVar5 + 0xb2) = 0xffff;
        FUN_141323fc0(param_1,lVar5,0x800);
      }
      if (-1 < *(short *)(lVar5 + 0xb0)) {
        *(undefined2 *)(lVar5 + 0xb0) = 0xffff;
        FUN_141323fc0(param_1,lVar5,0x400);
      }
      if (*(char *)(lVar5 + 0x11c) == '\x01') {
        *(undefined1 *)(lVar5 + 0x11c) = 0;
        FUN_141323fc0(param_1,lVar5,0x40);
      }
      cVar3 = FUN_1465538ae((undefined8 *)(lVar5 + 0xb4));
      if (cVar3 == '\0') {
        *(undefined8 *)(lVar5 + 0xb4) = 0;
      }
      FUN_1414f506e(param_1,lVar5);
      return;
    }
  }
  return;
}



// FUNCTION 1415c94e0 FUN_1415c94e0 body=284 status=ok
// SIG undefined FUN_1415c94e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415c94e0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2f758) {
    FUN_144b3d300(&DAT_14cb2f758);
    if (DAT_14cb2f758 == -1) {
      FUN_146087666();
      FUN_140db5666(&DAT_14cb2f6b0,3,&DAT_14cb2f648,L"FNiagaraShader",
                    L"/Plugin/FX/Niagara/Private/NiagaraEmitterInstanceShader.usf",L"SimulateMain",5
                    ,1,FUN_14804db30,FUN_14804db08,&LAB_14804db04,&LAB_14804db00,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf8,0);
      _DAT_14cb2f6b0 = &PTR_FUN_14ad4b7e0;
      atexit((_func_5014 *)&LAB_1438fa290);
      _Init_thread_footer(&DAT_14cb2f758);
    }
  }
  return &DAT_14cb2f6b0;
}



// FUNCTION 1415c95fc FUN_1415c95fc body=799 status=ok
// SIG undefined FUN_1415c95fc(void)

void FUN_1415c95fc(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  
  *param_1 = &PTR_FUN_14b968fa0;
  param_1[4] = &PTR_FUN_14b968fc0;
  if (param_1[0x55] != 0) {
    FUN_14480f766(&DAT_14cb103e0);
    param_1[0x55] = 0;
  }
  FUN_140457ffc(&DAT_14cb10968,param_1);
  if (((((*(int *)((longlong)param_1 + 0xc) != 0) &&
        (uVar8 = *(uint *)(param_1 + 1), -1 < (int)uVar8)) && ((int)uVar8 < DAT_14c9647dc)) &&
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)((longlong)param_1 + 0xc))))) &&
     ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
      lVar7 = *plVar9;
    }
    else {
      lVar7 = 0;
    }
    if (*(longlong *)(lVar7 + 0x1f0) == 0) {
      plVar9 = (longlong *)(lVar7 + 0x458);
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
    }
    iVar2 = *(int *)(param_1 + 0x47);
    if ((longlong)iVar2 != 0) {
      lVar7 = *plVar9;
      lVar3 = param_1[0x46];
      lVar10 = 0;
      do {
        lVar4 = *(longlong *)(lVar3 + 0x78 + lVar10);
        if (lVar4 != 0) {
          uVar8 = (uint)lVar4;
          if ((int)(uVar8 & 0xffffff) < *(int *)(lVar7 + 0x10)) {
            lVar5 = *(longlong *)(lVar7 + 0x28);
            if (*(longlong *)(lVar7 + 0x28) == 0) {
              lVar5 = lVar7 + 0x18;
            }
            if ((*(uint *)(lVar5 + (ulonglong)((uVar8 & 0xffffff) >> 5) * 4) >> (uVar8 & 0x1f) & 1)
                != 0) {
              lVar5 = *(longlong *)(lVar7 + 8);
              lVar6 = (ulonglong)(uVar8 & 0xffffff) * 0x70;
              if (((lVar5 + lVar6 != 0) && (*(longlong *)(lVar5 + 0x60 + lVar6) == lVar4)) &&
                 (*(char *)(lVar5 + 1 + lVar6) != '\x04')) {
                FUN_1405a424c(lVar7);
              }
            }
          }
          *(undefined8 *)(lVar3 + 0x78 + lVar10) = 0;
        }
        lVar10 = lVar10 + 0x98;
      } while ((longlong)iVar2 * 0x98 - lVar10 != 0);
    }
  }
  if (param_1[0x4b] != 0) {
    FUN_1400020a8();
  }
  FUN_148e14651(param_1[0x48],*(undefined4 *)(param_1 + 0x49));
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_14164267b(param_1[0x46],*(undefined4 *)(param_1 + 0x47));
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  FUN_14606b008(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x36) = 0;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_145c256de(param_1 + 0x2d);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_14589ee94(param_1 + 0x23);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 4);
  plVar9 = (longlong *)param_1[3];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415c98f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1415c991c FUN_1415c991c body=187 status=ok
// SIG undefined FUN_1415c991c(void)

int FUN_1415c991c(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      lVar6 = *param_1;
      do {
        lVar8 = (longlong)iVar7 * 0x68;
        puVar3 = *(undefined8 **)(lVar6 + lVar8);
        plVar5 = *(longlong **)(lVar6 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        cVar4 = '\x01';
        if (puVar3 != (undefined8 *)*param_3) {
          cVar4 = (**(code **)*puVar3)();
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
        if (cVar4 != '\0') {
          return iVar7;
        }
        lVar6 = *param_1;
        iVar7 = *(int *)(lVar6 + 0x60 + lVar8);
      } while (iVar7 != -1);
    }
  }
  return -1;
}



// FUNCTION 1415c99d8 FUN_1415c99d8 body=7 status=ok
// SIG undefined FUN_1415c99d8(void)

void FUN_1415c99d8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001415c99db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}



// FUNCTION 1415c99e0 FUN_1415c99e0 body=33 status=ok
// SIG undefined FUN_1415c99e0(void)

bool FUN_1415c99e0(longlong param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(byte *)(param_1 + 0x101) < 5) {
    if (*(byte *)(param_1 + 0x101) == 4) {
      bVar1 = *(longlong *)(param_1 + 0xd8) != 0;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}



// FUNCTION 1415c9a02 FUN_1415c9a02 body=425 status=ok
// SIG undefined FUN_1415c9a02(void)

void FUN_1415c9a02(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  code *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  int local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = (longlong *)FUN_140a68038(1);
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x110))(local_38,&local_48,*(undefined4 *)(param_1 + 0x20));
      if (local_48 == 0) {
LAB_1415c9a7f:
        *(undefined4 *)(param_1 + 0x38) = 3;
        *(undefined1 *)(param_1 + 0x18) = 1;
      }
      else {
        iVar3 = (**(code **)(*local_38 + 0x130))();
        plVar4 = local_38;
        if (iVar3 != 2) goto LAB_1415c9a7f;
        local_68 = FUN_1415bf6f0;
        local_60 = 0;
        FUN_14657f5dc(&local_58,param_1);
        local_78 = 0;
        (**(code **)(*plVar4 + 0x170))(plVar4,local_48,1,&local_58);
        if (local_50 == 0) {
LAB_1415c9b94:
          if (local_58 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_58 != (undefined8 *)0x0) {
          (**(code **)*local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          local_50 = 0;
          goto LAB_1415c9b94;
        }
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
          }
        }
      }
      goto LAB_1415c9ac6;
    }
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_1415c9ac6:
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415c9bac FUN_1415c9bac body=462 status=ok
// SIG undefined FUN_1415c9bac(void)

void FUN_1415c9bac(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1406c9d00(param_1 + 0x240,&local_38);
  if (local_30 == 0) {
    uVar4 = FUN_140927942();
    local_30 = FUN_14477b664(uVar4);
  }
  if (local_28 == (longlong *)0x0) {
    if ((((local_30 == 0) || (local_38 == 0)) ||
        (plVar1 = *(longlong **)(local_30 + 0xb8), plVar1 == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) goto LAB_1415c9ce2;
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    local_28 = (longlong *)FUN_144aff482(uVar4,&local_38);
    if (local_28 == (longlong *)0x0) goto LAB_1415c9ce2;
  }
  lVar3 = (**(code **)(*local_28 + 0x128))();
  if ((lVar3 != 0) && (cVar2 = FUN_1402611f4(lVar3), cVar2 != '\0')) {
    FUN_1406c9d00(param_1 + 0x240,&local_38);
    if (local_30 == 0) {
      uVar4 = FUN_140927942();
      local_30 = FUN_14477b664(uVar4);
    }
    if (((local_28 == (longlong *)0x0) && (local_30 != 0)) && (local_38 != 0)) {
      plVar1 = *(longlong **)(local_30 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        local_28 = (longlong *)0x0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        local_28 = (longlong *)FUN_144aff482(uVar4,&local_38);
      }
    }
    FUN_1408da346(param_1 + 0x2880,param_1 + -0x10b0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
LAB_1415c9ce2:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1415c9d86(param_1 + 0x2698);
  return;
}



// FUNCTION 1415c9d86 FUN_1415c9d86 body=174 status=ok
// SIG undefined FUN_1415c9d86(void)

bool FUN_1415c9d86(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  byte bVar4;
  
  bVar4 = *(byte *)(param_1 + 0x1c);
  if (bVar4 == 0) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
    if (*(longlong **)(param_1 + 0x140) == (longlong *)0x0) {
      return false;
    }
    if (*(int *)(param_1 + 0x13c) == 0) {
      return false;
    }
    uVar1 = *(uint *)(param_1 + 0x138);
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (lVar3 == 0) {
      return false;
    }
    if (*(int *)(lVar3 + 0x10) != *(int *)(param_1 + 0x13c)) {
      return false;
    }
    if ((*(uint *)(lVar3 + 8) & 0x10200000) != 0) {
      return false;
    }
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x10))();
    if ((cVar2 != '\0') || (*(char *)(param_1 + 0x1bb) != '\0')) {
      *(undefined1 *)(param_1 + 0x1c) = 2;
      goto LAB_1415c9e1d;
    }
    bVar4 = *(byte *)(param_1 + 0x1c);
  }
  if (bVar4 == 1) {
    return false;
  }
  if (2 < bVar4) {
    return true;
  }
LAB_1415c9e1d:
  return *(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x5c);
}



// FUNCTION 1415c9e34 FUN_1415c9e34 body=812 status=ok
// SIG undefined FUN_1415c9e34(void)

int * FUN_1415c9e34(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar13) {
      FUN_14482b872(param_1,iVar13);
    }
    iVar10 = (int)param_1[5];
    if (iVar10 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar4 = iVar10 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar6 = param_1 + 2;
    iVar8 = iVar10 + 1;
    iVar12 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar12 = iVar10;
    }
    if (iVar12 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar10) {
        if (iVar10 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar4 = iVar10;
        }
        else {
          uVar14 = iVar10 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar15 = 4;
            if (4 < uVar14) {
              uVar15 = uVar14;
            }
          }
          else {
            uVar15 = (uVar14 * 3 >> 3) + uVar14 + 0x10;
          }
          uVar9 = FUN_144a3809e(uVar15 << 2,0);
          iVar4 = (int)(uVar9 >> 2);
          iVar8 = -0x20;
          if ((int)uVar14 <= iVar4) {
            iVar8 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar6,iVar4);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar4 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar4 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar11 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar11 = plVar6;
        }
        bVar7 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar11 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar11 + (longlong)(iVar4 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar13;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar10 & 0x1f;
    puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar13 = (int)param_1[6];
    lVar5 = (longlong)iVar13;
    iVar10 = *(int *)(*param_1 + 4 + lVar5 * 0x18);
    *(int *)(param_1 + 6) = iVar10;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x18) = 0xffffffff;
    }
  }
  iVar10 = 1;
  plVar6 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar6 = (longlong *)param_1[4];
  }
  iVar4 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar4 = iVar13;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  plVar6 = (longlong *)(*param_1 + lVar5 * 0x18);
  plVar11 = (longlong *)param_3[1];
  lVar5 = *(longlong *)*param_3;
  *plVar6 = lVar5;
  plVar6[1] = *plVar11;
  *(undefined4 *)(plVar6 + 2) = 0xffffffff;
  uVar14 = (uint)((ulonglong)lVar5 >> 0x10);
  uVar15 = (uint)lVar5 & 0xffff;
  uVar14 = ((uint)lVar5 << 0x10 | uVar15) + (int)((ulonglong)lVar5 >> 0x20) +
           (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar15 >> 4);
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar15 != 0) && (uVar15 != 1)) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & uVar14) * 4);
    if (iVar4 != -1) {
      do {
        plVar11 = (longlong *)(*param_1 + (longlong)iVar4 * 0x18);
        if (*plVar11 == lVar5) {
          uVar2 = *(undefined4 *)((longlong)plVar6 + 4);
          lVar5 = plVar6[1];
          uVar3 = *(undefined4 *)((longlong)plVar6 + 0xc);
          *(int *)plVar11 = (int)*plVar6;
          *(undefined4 *)((longlong)plVar11 + 4) = uVar2;
          *(int *)(plVar11 + 1) = (int)lVar5;
          *(undefined4 *)((longlong)plVar11 + 0xc) = uVar3;
          FUN_14860a8e0(param_1,iVar13);
          goto LAB_1415ca017;
        }
        iVar4 = (int)plVar11[2];
      } while (iVar4 != -1);
    }
  }
  if (3 < uVar15) {
    uVar9 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
    lVar5 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar10 = 1 << ((byte)lVar5 & 0x1f);
  }
  iVar4 = iVar13;
  if (((int)uVar15 < 1) || (iVar10 <= (int)param_1[9])) {
    uVar14 = (int)param_1[9] - 1U & uVar14;
    *(uint *)((longlong)plVar6 + 0x14) = uVar14;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(plVar6 + 2) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         iVar13;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    FUN_1415ca160(param_1);
  }
LAB_1415ca017:
  *param_2 = iVar4;
  return param_2;
}



// FUNCTION 1415ca160 FUN_1415ca160 body=482 status=ok
// SIG undefined FUN_1415ca160(void)

void FUN_1415ca160(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 1415ca344 FUN_1415ca344 body=715 status=ok
// SIG undefined FUN_1415ca344(void)

void FUN_1415ca344(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined8 *)*param_3;
  local_30 = (longlong *)param_3[1];
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  local_3c = param_2;
  FUN_1410a39c4(param_1 + 0x48,param_2,&local_38);
  lVar7 = (**(code **)(*(longlong *)*param_3 + 0x38))();
  if ((*(byte *)(lVar7 + 0x10) & 4) != 0) {
    uVar8 = FUN_141429bf2(param_1 + 0x680,param_2,&local_3c);
    (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_38);
    FUN_140b6d1a4(uVar8,&local_48,&local_38,0);
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
  if ((*(longlong *)(param_1 + 0x6d0) == 0) && (lVar7 = FUN_1460658f4(param_1), lVar7 != 0)) {
    local_38 = (undefined8 *)0x0;
    local_30 = (longlong *)((ulonglong)local_30 & 0xffffffff00000000);
    FUN_1446efa72(&local_38,0,3,0x10);
    local_30 = (longlong *)CONCAT44(local_30._4_4_,3);
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_1415ca547:
      *local_38 = &PTR_LAB_149e063e0;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_38[2] = lVar9;
      *local_38 = &PTR_FUN_14b9893c0;
      local_38[3] = 0;
      local_38[4] = 0;
      local_38[5] = param_1;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_1415ca547;
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
      uVar8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *local_38 = &PTR_LAB_149e063e0;
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar9 == 0) {
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_38[2] = lVar9;
      *local_38 = &PTR_FUN_14b9893c0;
      local_38[3] = uVar8;
      local_38[4] = plVar3;
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      local_38[5] = param_1;
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
    FUN_14134bd86(lVar7 + 0x2b8,&local_48,&local_38);
    FUN_1449db362(&local_38);
    *(undefined8 *)(param_1 + 0x6d0) = local_48;
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415ca610 FUN_1415ca610 body=79 status=ok
// SIG undefined FUN_1415ca610(void)

undefined8 FUN_1415ca610(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0xac) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0xa8);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0xac)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 1415ca660 FUN_1415ca660 body=400 status=ok
// SIG undefined FUN_1415ca660(void)

void FUN_1415ca660(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  undefined1 local_50 [12];
  undefined1 local_44 [4];
  undefined8 *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(*param_2 + 0x18);
  local_40 = (undefined8 *)0x0;
  local_38 = (undefined1 *)((ulonglong)local_38 & 0xffffffff00000000);
  FUN_1446efa72(&local_40,0,2,0x10);
  local_38._0_4_ = 2;
  *local_40 = &PTR_LAB_14b4f3990;
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
  local_40[2] = lVar5;
  *local_40 = &PTR_FUN_14ba3ebd0;
  local_40[3] = param_1;
  FUN_145defd34(lVar3 + 0x188,local_50,&local_40);
  if ((int)local_38 != 0) {
    if (local_40 == (undefined8 *)0x0) goto LAB_1415ca75d;
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38._0_4_ = 0;
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1415ca75d:
  (**(code **)(*(longlong *)*param_2 + 8))((longlong *)*param_2,&local_60);
  local_40 = &local_60;
  local_38 = local_50;
  FUN_146065cec(param_1 + 0x90,local_44,&local_40,0);
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415ca7f2 FUN_1415ca7f2 body=1787 status=ok
// SIG undefined FUN_1415ca7f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1415ca7f2(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  byte bVar16;
  int iVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong lVar20;
  int iVar21;
  longlong *plVar22;
  int iVar23;
  longlong *plVar24;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  undefined8 *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x70);
  local_58 = (longlong *)*param_3;
  plVar22 = (longlong *)param_3[1];
  if (plVar22 == (longlong *)0x0) {
    local_50 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
    UNLOCK();
    local_50 = plVar22;
  }
  uVar9 = (**(code **)(*local_58 + 0x40))();
  iVar10 = FUN_140eb36de(plVar1,uVar9,&local_58);
  plVar14 = local_50;
  if (iVar10 == -1) {
    lVar15 = 0;
  }
  else {
    lVar15 = (longlong)iVar10 * 0x28 + *plVar1;
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar24 = local_50 + 1;
    *(int *)plVar24 = (int)*plVar24 + -1;
    UNLOCK();
    if ((int)*plVar24 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar22 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar22)(plVar22);
      LOCK();
      piVar2 = (int *)((longlong)plVar22 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  if (lVar15 != 0) {
    *param_2 = *(undefined8 *)(lVar15 + 0x10);
    lVar15 = *(longlong *)(lVar15 + 0x18);
    param_2[1] = lVar15;
    if (lVar15 != 0) {
      LOCK();
      *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
      UNLOCK();
    }
    goto LAB_1415caba2;
  }
  local_60 = param_2;
  plVar14 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar14[1] = (longlong)&DAT_100000001;
  *plVar14 = (longlong)&PTR_FUN_14ba41220;
  plVar22 = plVar14 + 2;
  plVar14[3] = 0;
  plVar14[4] = 0;
  plVar14[2] = (longlong)&PTR_FUN_14ba3d1e0;
  plVar14[5] = *param_3;
  lVar15 = param_3[1];
  plVar14[6] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  plVar14[7] = 0;
  plVar14[8] = 0;
  if ((plVar22 != (longlong *)0x0) &&
     (((plVar14[3] == 0 || (plVar14[4] == 0)) || (*(int *)(plVar14[4] + 8) < 1)))) {
    if (plVar14 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar24 = (longlong *)&DAT_00000020;
      plVar19 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_1415cada2:
        LOCK();
        piVar2 = (int *)((longlong)plVar19 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar19 + 0x10))();
        }
        *plVar24 = (longlong)plVar14;
        if (plVar14 != (longlong *)0x0) goto LAB_1415ca93b;
      }
    }
    else {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      plVar14[3] = (longlong)plVar22;
      if ((longlong *)plVar14[4] != plVar14) {
        LOCK();
        *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar14[4] != (longlong *)0x0) {
          plVar24 = plVar14 + 4;
          plVar19 = (longlong *)plVar14[4];
          goto LAB_1415cada2;
        }
        plVar14[4] = (longlong)plVar14;
      }
LAB_1415ca93b:
      LOCK();
      plVar24 = plVar14 + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)*plVar24 == 0) {
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
  }
  local_70 = plVar1;
  if (*(int *)(param_1 + 0xa4) == 0) {
    iVar10 = *(int *)(param_1 + 0x78);
    *(int *)(param_1 + 0x78) = iVar10 + 1;
    if (*(int *)(param_1 + 0x7c) == iVar10) {
      FUN_140549c28(plVar1,iVar10);
    }
    iVar21 = *(int *)(param_1 + 0x98);
    if (iVar21 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar11 = iVar21 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    lVar20 = param_1 + 0x80;
    iVar17 = iVar21 + 1;
    iVar23 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar23 = iVar21;
    }
    if (iVar23 >> 5 == iVar11) {
      *(int *)(param_1 + 0x98) = iVar17;
    }
    else {
      if (*(int *)(param_1 + 0x9c) <= iVar21) {
        if (iVar21 + 0x20U < 0xa0) {
          iVar17 = 0x80;
          iVar11 = iVar21;
        }
        else {
          uVar12 = iVar21 + 0x20U >> 5;
          local_68 = (ulonglong)uVar12;
          if (*(int *)(param_1 + 0x9c) + 0x1fU < 0xa0) {
            uVar13 = 4;
            if (4 < uVar12) {
              uVar13 = uVar12;
            }
          }
          else {
            uVar13 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
          }
          uVar18 = FUN_144a3809e(uVar13 << 2,0);
          iVar11 = (int)(uVar18 >> 2);
          iVar17 = -0x20;
          if ((int)local_68 <= iVar11) {
            iVar17 = iVar11 << 5;
          }
          iVar11 = *(int *)(param_1 + 0x98);
        }
        *(int *)(param_1 + 0x9c) = iVar17;
        FUN_1446efbd8(lVar20,iVar11);
        iVar17 = *(int *)(param_1 + 0x98) + 1;
      }
      iVar11 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar11 = iVar17;
      }
      *(int *)(param_1 + 0x98) = iVar17;
      if (iVar17 % 0x20 != 0) {
        lVar15 = *(longlong *)(param_1 + 0x90);
        if (*(longlong *)(param_1 + 0x90) == 0) {
          lVar15 = lVar20;
        }
        bVar16 = -(char)(iVar17 % 0x20);
        *(uint *)(lVar15 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)(lVar15 + (longlong)(iVar11 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar15 = (longlong)iVar10;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar20 = *(longlong *)(param_1 + 0x90);
    }
    bVar16 = (byte)iVar21 & 0x1f;
    puVar4 = (uint *)(lVar20 + (longlong)(iVar23 >> 5) * 4);
    *puVar4 = *puVar4 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar10 = *(int *)(param_1 + 0xa0);
    lVar15 = (longlong)iVar10;
    iVar21 = *(int *)(*(longlong *)(param_1 + 0x70) + 4 + lVar15 * 0x28);
    *(int *)(param_1 + 0xa0) = iVar21;
    iVar11 = *(int *)(param_1 + 0xa4) + -1;
    *(int *)(param_1 + 0xa4) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar21 * 0x28) = 0xffffffff;
    }
  }
  lVar20 = param_1 + 0x80;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar20 = *(longlong *)(param_1 + 0x90);
  }
  iVar21 = iVar10 + 0x1f;
  if (-1 < iVar10) {
    iVar21 = iVar10;
  }
  puVar4 = (uint *)(lVar20 + (longlong)(iVar21 >> 5) * 4);
  *puVar4 = *puVar4 | 1 << ((byte)iVar10 & 0x1f);
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x70) + lVar15 * 0x28);
  *plVar1 = *param_3;
  lVar15 = param_3[1];
  plVar1[1] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  plVar1[2] = (longlong)plVar22;
  plVar1[3] = (longlong)plVar14;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  *(undefined4 *)(plVar1 + 4) = 0xffffffff;
  plVar22 = (longlong *)*plVar1;
  plVar24 = (longlong *)plVar1[1];
  if (plVar24 == (longlong *)0x0) {
    uVar12 = (**(code **)(*plVar22 + 0x40))();
  }
  else {
    LOCK();
    *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
    UNLOCK();
    uVar12 = (**(code **)(*plVar22 + 0x40))();
    LOCK();
    plVar22 = plVar24 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (**(code **)*plVar24)(plVar24);
      LOCK();
      piVar2 = (int *)((longlong)plVar24 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
      }
    }
  }
  iVar21 = 1;
  if (*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0xa4) == 1) {
    uVar13 = 1;
LAB_1415cab00:
    plVar22 = local_70;
    iVar11 = iVar10;
    if (((int)uVar13 < 1) || (iVar21 <= *(int *)(param_1 + 0xb8))) {
      uVar12 = *(int *)(param_1 + 0xb8) - 1U & uVar12;
      *(uint *)((longlong)plVar1 + 0x24) = uVar12;
      lVar15 = *(longlong *)(param_1 + 0xb0);
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        lVar15 = param_1 + 0xa8;
      }
      *(undefined4 *)(plVar1 + 4) =
           *(undefined4 *)
            (lVar15 + ((longlong)*(int *)(param_1 + 0xb8) - 1U & (longlong)(int)uVar12) * 4);
      lVar15 = *(longlong *)(param_1 + 0xb0);
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        lVar15 = param_1 + 0xa8;
      }
      *(int *)(lVar15 + ((longlong)*(int *)(param_1 + 0xb8) - 1U & (longlong)(int)uVar12) * 4) =
           iVar10;
    }
    else {
      *(int *)(param_1 + 0xb8) = iVar21;
      FUN_1415caef4(local_70);
    }
  }
  else {
    local_58 = (longlong *)*plVar1;
    plVar22 = (longlong *)plVar1[1];
    local_50 = plVar22;
    if (plVar22 == (longlong *)0x0) {
      iVar11 = FUN_140eb36de(local_70,uVar12,&local_58);
    }
    else {
      LOCK();
      *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
      UNLOCK();
      iVar11 = FUN_140eb36de(local_70,uVar12);
      if (plVar22 != (longlong *)0x0) {
        LOCK();
        plVar24 = plVar22 + 1;
        *(int *)plVar24 = (int)*plVar24 + -1;
        UNLOCK();
        if ((int)*plVar24 == 0) {
          (**(code **)*plVar22)(plVar22);
          LOCK();
          piVar2 = (int *)((longlong)plVar22 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
      }
    }
    plVar22 = local_70;
    if (iVar11 == -1) {
      uVar13 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0xa4);
      if (3 < uVar13) {
        uVar18 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
        lVar15 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar21 = 1 << ((byte)lVar15 & 0x1f);
      }
      goto LAB_1415cab00;
    }
    puVar3 = (undefined4 *)(*local_70 + (longlong)iVar11 * 0x28);
    FUN_148fa89ec(puVar3);
    lVar15 = *plVar1;
    uVar9 = *(undefined4 *)((longlong)plVar1 + 4);
    lVar20 = plVar1[1];
    uVar5 = *(undefined4 *)((longlong)plVar1 + 0xc);
    uVar6 = *(undefined4 *)((longlong)plVar1 + 0x14);
    lVar8 = plVar1[3];
    uVar7 = *(undefined4 *)((longlong)plVar1 + 0x1c);
    puVar3[4] = (int)plVar1[2];
    puVar3[5] = uVar6;
    puVar3[6] = (int)lVar8;
    puVar3[7] = uVar7;
    *puVar3 = (int)lVar15;
    puVar3[1] = uVar9;
    puVar3[2] = (int)lVar20;
    puVar3[3] = uVar5;
    FUN_148fa97cc(plVar22,iVar10);
  }
  param_2 = local_60;
  lVar15 = *plVar22;
  *local_60 = *(undefined8 *)(lVar15 + 0x10 + (longlong)iVar11 * 0x28);
  lVar15 = *(longlong *)(lVar15 + 0x18 + (longlong)iVar11 * 0x28);
  local_60[1] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar14 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
      }
    }
  }
LAB_1415caba2:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1415caef4 FUN_1415caef4 body=635 status=ok
// SIG undefined FUN_1415caef4(void)

void FUN_1415caef4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar13 = *(uint *)(param_1 + 9);
  if (uVar13 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar13,4);
    if (0 < (int)uVar13) {
      uVar6 = 0;
      do {
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar6) * 4)
             = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar13 != uVar6);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_70 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar14 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar14 = local_68 >> 0x20;
    }
    plVar1 = local_60;
    iVar15 = (int)local_68;
    uVar13 = (uint)local_58;
    iVar9 = local_58._4_4_;
    iVar7 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar12 = *param_1;
        lVar10 = (longlong)iVar9;
        plVar11 = *(longlong **)(lVar12 + lVar10 * 0x28);
        plVar4 = *(longlong **)(lVar12 + 8 + lVar10 * 0x28);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        lVar12 = lVar12 + lVar10 * 0x28;
        local_74 = iVar7;
        iVar7 = (**(code **)(*plVar11 + 0x40))();
        uVar8 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar8;
        *(int *)(lVar12 + 0x24) = iVar7;
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = local_70;
        }
        *(undefined4 *)(lVar12 + 0x20) =
             *(undefined4 *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = local_70;
        }
        *(int *)((longlong)plVar11 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9
        ;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar4 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
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
        uVar13 = uVar13 & ~(uint)uVar14;
        plVar11 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar11 = plVar1;
        }
        iVar3 = (int)plVar1[3];
        lVar12 = (longlong)iVar15;
        uVar6 = *(uint *)((longlong)plVar11 + lVar12 * 4) & uVar13;
        iVar7 = local_74;
        if (uVar6 == 0) {
          iVar9 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar9 = iVar3 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar5 = iVar9;
          if (iVar9 < iVar15) {
            iVar5 = iVar15;
          }
          if (iVar9 <= iVar15) break;
          lVar10 = 0;
          while( true ) {
            iVar7 = iVar7 + 0x20;
            uVar6 = *(uint *)((longlong)plVar11 + lVar10 * 4 + lVar12 * 4 + 4);
            if (uVar6 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar5 - lVar12 == lVar10) goto LAB_1415cb0fd;
          }
          iVar15 = iVar15 + (int)lVar10 + 1;
          uVar13 = 0xffffffff;
        }
        uVar14 = (ulonglong)(-uVar6 & uVar6);
        uVar8 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar9 = (iVar7 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar9 < iVar3);
    }
  }
LAB_1415cb0fd:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415cb170 FUN_1415cb170 body=278 status=ok
// SIG undefined FUN_1415cb170(void)

void FUN_1415cb170(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [39];
  undefined1 local_51;
  code *local_50;
  undefined1 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(*(longlong *)(param_2 + 0xf8) + (longlong)param_3 * 0x20);
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0xf8) + (longlong)param_3 * 0x20);
  if (lVar4 == 0) {
    if (((char)plVar1[3] != '\0') || (*(char *)((longlong)plVar1 + 0x19) != '\0'))
    goto LAB_1415cb1cc;
    FUN_144a93420(param_1,param_2,param_3);
    lVar4 = *plVar1;
    if (lVar4 == 0) goto LAB_1415cb1cc;
  }
  if ((((char)plVar1[3] == '\0') && (*(char *)((longlong)plVar1 + 0x19) == '\0')) &&
     ((*(uint *)(lVar4 + 8) >> 10 & 1) != 0)) {
    local_48 = &local_51;
    local_50 = FUN_141073f72;
    lVar5 = FUN_144a773aa(&local_50,&DAT_14c75ec34);
    uVar2 = *(undefined8 *)(lVar5 + 0x40);
    uVar3 = *(undefined8 *)(lVar5 + 0x48);
    *(longlong *)(lVar5 + 0x40) = param_1;
    lVar4 = *(longlong *)(param_1 + 0x298) + 8;
    if (*(longlong *)(param_1 + 0x298) == 0) {
      lVar4 = 0;
    }
    *(longlong *)(lVar5 + 0x48) = lVar4;
    FUN_1415cc3d6(param_1,param_2,param_3,0);
    *(undefined8 *)(lVar5 + 0x40) = uVar2;
    *(undefined8 *)(lVar5 + 0x48) = uVar3;
  }
LAB_1415cb1cc:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415cb288 FUN_1415cb288 body=4429 status=ok
// SIG undefined FUN_1415cb288(void)

code * FUN_1415cb288(ulonglong param_1,longlong param_2,int param_3)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  code *pcVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  longlong *plVar24;
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  byte bVar29;
  undefined8 uVar30;
  int iVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong *plVar34;
  code *pcVar35;
  code *pcVar36;
  undefined1 auStack_198 [32];
  wchar_t *local_178;
  undefined4 local_170;
  undefined8 local_168;
  wchar_t *local_160;
  wchar_t *local_158;
  code *local_150;
  undefined1 *local_148;
  code **local_140;
  code *local_138;
  code *local_130;
  ulonglong local_120;
  ulonglong local_118;
  longlong *local_110;
  ulonglong local_108;
  longlong local_100;
  code *local_f8;
  undefined1 local_f0 [8];
  code *local_e8;
  undefined4 local_e0 [2];
  code *local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  undefined2 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar33 = (longlong)param_3;
  plVar34 = (longlong *)(lVar33 * 0x20 + *(longlong *)(param_2 + 0xf8));
  lVar13 = *(longlong *)(param_2 + 0x78);
  uVar5 = *(undefined4 *)(lVar13 + 0x14 + lVar33 * 0x48);
  uVar6 = *(undefined4 *)
           (*(longlong *)(param_2 + 0x30) +
           (ulonglong)(uint)(*(int *)(lVar13 + 0x10 + lVar33 * 0x48) << 2));
  bVar29 = *(byte *)(lVar13 + 0x44 + lVar33 * 0x48);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c948af4) &&
     (local_120 = param_1, FUN_144b3d300(&DAT_14c948af4), param_1 = local_120, DAT_14c948af4 == -1))
  {
    DAT_14c948af0 = 0;
    if (DAT_14c86a9f0 == '\0') {
      DAT_14c948af0 = DAT_14c8687b8;
    }
    _Init_thread_footer(&DAT_14c948af4);
    param_1 = local_120;
  }
  pcVar12 = (code *)(ulonglong)DAT_14c948afc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < (int)DAT_14c948afc) &&
     (local_120 = param_1, pcVar12 = (code *)FUN_144b3d300(), param_1 = local_120,
     DAT_14c948afc == 0xffffffff)) {
    DAT_14c948af8 = 0;
    if (DAT_14c86a9f0 != '\0') {
      DAT_14c948af8 = DAT_14c8687b8 ^ 1;
    }
    pcVar12 = (code *)_Init_thread_footer(&DAT_14c948afc);
    param_1 = local_120;
  }
  if (((bVar29 & 2) != 0) && (DAT_14c948af0 != 0)) {
    *(undefined1 *)(plVar34 + 3) = 1;
    goto LAB_1415cb6e7;
  }
  bVar29 = bVar29 & DAT_14c948af8;
  *(byte *)(plVar34 + 3) = bVar29;
  if ((bVar29 != 0) || (*(char *)((longlong)plVar34 + 0x19) != '\0')) goto LAB_1415cb6e7;
  plVar24 = (longlong *)(lVar13 + lVar33 * 0x48);
  local_120 = param_1;
  pcVar12 = (code *)FUN_1427d07de(param_1,param_2,param_3,0);
  uVar15 = plVar24[4];
  if (uVar15 == 0xffffffffffffffff) {
    pcVar35 = DAT_14c949118;
    if (DAT_14c949118 == (code *)0x0) {
      local_f8 = FUN_140631fbe;
      local_110 = plVar24;
      pcVar12 = (code *)FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = pcVar12;
      FUN_1446f470e(local_f0,L"Class",1);
      local_148 = &LAB_146891e90;
      local_150 = (code *)&LAB_146273097;
      local_160 = L"Engine";
      local_158 = (wchar_t *)CONCAT44(local_158._4_4_,199);
      local_168 = 0x20;
      local_170 = 0x10000000;
      local_178._0_4_ = 8;
      local_140 = &local_f8;
      FUN_14574b4b2(pcVar12);
      DAT_14c949118 = pcVar12;
      if (DAT_14c951858 == 0) {
        local_140 = &local_d8;
        local_d8 = FUN_1449e2820;
        local_130 = FUN_14081d0ea;
        local_138 = FUN_14081d0ea;
        local_148 = &LAB_1468c5283;
        local_150 = FUN_142809da0;
        local_158 = L"Engine";
        local_160 = (wchar_t *)0x400000000;
        local_168 = CONCAT44(local_168._4_4_,0x10000000);
        local_170 = 8;
        local_178._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar13 = DAT_14c951858;
      pcVar12 = DAT_14c949118;
      if (DAT_14c948f88 == 0) {
        local_e8 = (code *)&DAT_1427db2a2;
        DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        local_118 = DAT_14c948f88;
        FUN_1446f470e(local_e0,L"Struct",1);
        local_140 = &local_e8;
        local_148 = &LAB_146891313;
        local_150 = FUN_146272f63;
        local_160 = L"Engine";
        local_158 = (wchar_t *)CONCAT44(local_158._4_4_,199);
        local_168 = 8;
        local_170 = 0x10000020;
        local_178._0_4_ = 8;
        FUN_14574b4b2(local_118);
        DAT_14c948f88 = local_118;
        local_108 = DAT_14c927740;
        if (DAT_14c927740 == 0) {
          local_140 = &local_d8;
          local_d8 = FUN_1449e2820;
          local_130 = FUN_14081d0ea;
          local_138 = FUN_14081d0ea;
          local_148 = &LAB_146856450;
          local_150 = FUN_1427b121c;
          local_158 = L"Engine";
          local_160 = (wchar_t *)0x0;
          local_168 = CONCAT44(local_168._4_4_,0x10000021);
          local_170 = 8;
          local_178._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
          local_118 = DAT_14c948f88;
        }
        DAT_14c948f88 = local_118;
        local_108 = DAT_14c927740;
        uVar30 = FUN_1400163b0();
        local_178 = L"Struct";
        FUN_14574b446(uVar30,local_118,local_108,L"/Script/CoreUObject");
      }
      local_178 = L"Class";
      pcVar12 = (code *)FUN_14574b446(DAT_14c948f88,pcVar12,lVar13,L"/Script/CoreUObject");
      plVar24 = local_110;
      pcVar35 = DAT_14c949118;
    }
  }
  else if (uVar15 < 0x4000000000000000) {
    pcVar12 = *(code **)(param_2 + 0xf8);
    pcVar35 = *(code **)(pcVar12 + (longlong)(int)uVar15 * 0x20);
  }
  else {
    uVar15 = uVar15 & 0xc000000000000000;
    if ((uVar15 == 0x4000000000000000) || (pcVar12 = (code *)-uVar15, SBORROW8(0,uVar15))) {
      pcVar12 = (code *)FUN_144aff64a(local_120 + 0x2a8,param_2);
      pcVar35 = pcVar12;
    }
    else {
      pcVar35 = (code *)0x0;
    }
  }
  uVar15 = plVar24[3];
  if (uVar15 != 0xffffffffffffffff) {
    if (uVar15 < 0x4000000000000000) {
      pcVar12 = *(code **)(param_2 + 0xf8);
      pcVar36 = *(code **)(pcVar12 + (longlong)(int)uVar15 * 0x20);
      goto LAB_1415cb57f;
    }
    uVar15 = uVar15 & 0xc000000000000000;
    if ((uVar15 == 0x4000000000000000) || (pcVar12 = (code *)-uVar15, SBORROW8(0,uVar15))) {
      pcVar12 = (code *)FUN_144aff64a(local_120 + 0x2a8,param_2);
      pcVar36 = pcVar12;
      goto LAB_1415cb57f;
    }
LAB_1415cb6e2:
    *(undefined1 *)((longlong)plVar34 + 0x19) = 1;
    goto LAB_1415cb6e7;
  }
  pcVar36 = *(code **)(local_120 + 0x2b0);
LAB_1415cb57f:
  if ((pcVar35 == (code *)0x0) || (pcVar36 == (code *)0x0)) goto LAB_1415cb6e2;
  uVar15 = plVar24[5];
  if (uVar15 != 0xffffffffffffffff) {
    if (uVar15 < 0x4000000000000000) {
      pcVar12 = *(code **)(*(longlong *)(param_2 + 0xf8) + (longlong)(int)uVar15 * 0x20);
    }
    else {
      pcVar12 = (code *)(uVar15 & 0xc000000000000000);
      if ((!SBORROW8(0,(longlong)pcVar12)) && (pcVar12 != (code *)0x4000000000000000)) {
        plVar34[2] = 0;
        goto LAB_1415cb6e2;
      }
      pcVar12 = (code *)FUN_144aff64a(local_120 + 0x2a8,param_2);
    }
    plVar34[2] = (longlong)pcVar12;
    if (pcVar12 == (code *)0x0) goto LAB_1415cb6e2;
  }
  uVar15 = plVar24[6];
  if (uVar15 == 0xffffffffffffffff) {
LAB_1415cb6d0:
    plVar34[1] = 0;
    goto LAB_1415cb6e2;
  }
  if (uVar15 < 0x4000000000000000) {
    lVar13 = *(longlong *)(*(longlong *)(param_2 + 0xf8) + (longlong)(int)uVar15 * 0x20);
  }
  else {
    uVar15 = uVar15 & 0xc000000000000000;
    if ((uVar15 != 0x4000000000000000) && (pcVar12 = (code *)-uVar15, !SBORROW8(0,uVar15)))
    goto LAB_1415cb6d0;
    lVar13 = FUN_144aff64a(local_120 + 0x2a8,param_2);
  }
  plVar34[1] = lVar13;
  pcVar12 = (code *)0x0;
  if (lVar13 == 0) goto LAB_1415cb6e2;
  if ((*(byte *)(plVar24 + 8) & 0x10) == 0) {
    pcVar12 = *(code **)(lVar13 + 0x10);
    if ((*(int *)(pcVar12 + 0x38) < *(int *)(pcVar35 + 0x38)) ||
       (pcVar12 = *(code **)(pcVar12 + 0x30),
       *(code **)(pcVar12 + (longlong)*(int *)(pcVar35 + 0x38) * 8) != pcVar35 + 0x30))
    goto LAB_1415cb6e2;
  }
  uVar30 = CONCAT44(uVar5,uVar6);
  local_170 = 0;
  local_178 = (wchar_t *)((ulonglong)local_178 & 0xffffffff00000000);
  lVar13 = FUN_14283d079(0,pcVar36,uVar30,1);
  *plVar34 = lVar13;
  if (lVar13 == 0) {
    FUN_14472e7dc(plVar34[1],0);
    local_88 = (longlong *)0x0;
    local_58 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_c0 = (ulonglong)*(uint *)(plVar24 + 8) | 0x83400;
    local_b0 = plVar34[1];
    local_b8 = 0x100;
    local_d8 = pcVar35;
    local_d0 = pcVar36;
    local_c8 = uVar30;
    lVar13 = FUN_1402710dd(&local_d8);
    *plVar34 = lVar13;
    if (local_98 != 0) {
      plVar18 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar18 = local_78;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    if ((DAT_14c75b114 != '\0') || (DAT_14c9647c4 == '\x01')) {
      uVar16 = *(uint *)(*plVar34 + 0xc);
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      FUN_1447f71cc(lVar13,0x40000000);
    }
  }
  else {
    uVar16 = *(uint *)(lVar13 + 0xc);
    if ((int)uVar16 < DAT_14c9647dc) {
      lVar33 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
    }
    else {
      lVar33 = 0;
    }
    if ((*(uint *)(lVar33 + 8) & 0x8400000) == 0) {
      *(undefined1 *)((longlong)plVar34 + 0x1a) = 1;
    }
    if ((*(uint *)(lVar13 + 8) >> 0x15 & 1) == 0) {
      if ((*(uint *)(lVar13 + 8) & 0x10) == 0) {
        uVar30 = 0x83400;
      }
      else {
        uVar30 = 0x81400;
      }
      FUN_144757f48(lVar13,uVar30);
    }
  }
  uVar30 = 0x4000000;
  if ((*(char *)(local_120 + 0x11d) == '\x01') && (uVar15 = plVar24[7], uVar15 != 0)) {
    lVar13 = *plVar34;
    uVar19 = *(ulonglong *)(local_120 + 0xf8);
    lVar33 = *(longlong *)(local_120 + 0x2a8);
    uVar16 = *(uint *)(lVar13 + 0xc);
    local_120 = uVar15 >> 0x20;
    iVar26 = (int)uVar15;
    if (*(int *)(lVar33 + 0x10) != *(int *)(lVar33 + 0x3c)) {
      lVar14 = lVar33 + 0x40;
      if (*(longlong *)(lVar33 + 0x48) != 0) {
        lVar14 = *(longlong *)(lVar33 + 0x48);
      }
      iVar10 = *(int *)(lVar14 + (ulonglong)(*(int *)(lVar33 + 0x50) - 1U & (uint)uVar19) * 4);
      if (iVar10 != -1) {
        do {
          lVar14 = *(longlong *)(lVar33 + 8) + (longlong)iVar10 * 0x78;
          if (*(ulonglong *)(*(longlong *)(lVar33 + 8) + (longlong)iVar10 * 0x78) == uVar19) {
            if ((lVar14 != 0) && (*(int *)(lVar14 + 0x10) != *(int *)(lVar14 + 0x3c))) {
              lVar23 = lVar14 + 0x40;
              if (*(longlong *)(lVar14 + 0x48) != 0) {
                lVar23 = *(longlong *)(lVar14 + 0x48);
              }
              iVar10 = *(int *)(lVar23 + (ulonglong)
                                         (*(int *)(lVar14 + 0x50) - 1U &
                                         (int)(uVar15 >> 0x20) * 0x17 + iVar26) * 4);
              if (iVar10 != -1) {
                goto LAB_1415cb905;
              }
            }
            break;
          }
          iVar10 = *(int *)(lVar14 + 0x70);
        } while (iVar10 != -1);
      }
    }
    goto LAB_1415cb9b5;
  }
  goto LAB_1415cbdc6;
  while (iVar10 = (int)puVar1[2], iVar10 != -1) {
LAB_1415cb905:
    puVar1 = (ulonglong *)(*(longlong *)(lVar14 + 8) + (longlong)iVar10 * 0x18);
    if (*puVar1 == uVar15) {
      if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
        uVar27 = (uint)puVar1[1];
        if ((int)uVar27 < DAT_14c9647dc) {
          plVar24 = (longlong *)
                    ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8));
        }
        else {
          plVar24 = (longlong *)0x0;
        }
        lVar14 = *plVar24;
        if (lVar14 != lVar13 && lVar14 != 0) {
          uVar27 = *(uint *)(lVar14 + 0xc);
          if ((int)uVar27 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          FUN_14482b126(lVar14,0x100000);
          FUN_1400b4ad0(lVar33 + 0xa8,uVar27);
        }
      }
      break;
    }
  }
LAB_1415cb9b5:
  plVar24 = (longlong *)(lVar33 + 0xa8);
  if (*(int *)(lVar33 + 0xb0) != *(int *)(lVar33 + 0xdc)) {
    lVar14 = lVar33 + 0xe0;
    if (*(longlong *)(lVar33 + 0xe8) != 0) {
      lVar14 = *(longlong *)(lVar33 + 0xe8);
    }
    iVar10 = *(int *)(lVar14 + (ulonglong)(*(int *)(lVar33 + 0xf0) - 1U & uVar16) * 4);
    if (iVar10 != -1) {
      do {
        lVar14 = *plVar24 + (longlong)iVar10 * 0x1c;
        if (*(uint *)(*plVar24 + (longlong)iVar10 * 0x1c) == uVar16) {
          if ((lVar14 + 4U & 0xfffffffffffffffb) == 0) break;
          if (CONCAT44(*(undefined4 *)(lVar14 + 0xc),*(undefined4 *)(lVar14 + 0x10)) == uVar15) {
            uVar27 = *(uint *)(lVar14 + 8);
            uVar25 = CONCAT44(*(undefined4 *)(lVar14 + 4),uVar27);
            if (uVar25 == uVar19) break;
          }
          else {
            uVar27 = *(uint *)(lVar14 + 8);
            uVar25 = CONCAT44(*(undefined4 *)(lVar14 + 4),uVar27);
          }
          if (*(int *)(lVar33 + 0x10) == *(int *)(lVar33 + 0x3c)) goto LAB_1415cbac7;
          lVar14 = lVar33 + 0x40;
          if (*(longlong *)(lVar33 + 0x48) != 0) {
            lVar14 = *(longlong *)(lVar33 + 0x48);
          }
          iVar10 = *(int *)(lVar14 + (ulonglong)(*(int *)(lVar33 + 0x50) - 1U & uVar27) * 4);
          if (iVar10 == -1) goto LAB_1415cbac7;
          goto LAB_1415cba93;
        }
        iVar10 = *(int *)(lVar14 + 0x14);
      } while (iVar10 != -1);
    }
  }
  goto LAB_1415cbad1;
  while (iVar10 = *(int *)(lVar14 + 0x70), iVar10 != -1) {
LAB_1415cba93:
    lVar14 = *(longlong *)(lVar33 + 8) + (longlong)iVar10 * 0x78;
    if (*(ulonglong *)(*(longlong *)(lVar33 + 8) + (longlong)iVar10 * 0x78) == uVar25) {
      if ((lVar14 != 0) && (iVar10 = FUN_1403462ec(lVar14 + 8), iVar10 != 0)) {
        *(undefined1 *)(lVar14 + 0x6c) = 0;
      }
      break;
    }
  }
LAB_1415cbac7:
  FUN_1400b4ad0(plVar24,uVar16);
LAB_1415cbad1:
  local_108 = uVar19 >> 0x20;
  local_118 = uVar19;
  local_110 = plVar24;
  lVar14 = FUN_144aff51a(lVar33,uVar19,0);
  uVar5 = *(undefined4 *)(lVar13 + 0xc);
  FUN_140345fc2(lVar14,&local_d8);
  pcVar12 = local_d0;
  *(ulonglong *)local_d0 = uVar15;
  *(undefined4 *)(local_d0 + 8) = uVar5;
  *(undefined4 *)(local_d0 + 0x10) = 0xffffffff;
  local_e0[0] = local_d8._0_4_;
  iVar10 = (int)local_120;
  uVar27 = iVar10 * 0x17 + iVar26;
  local_178 = (wchar_t *)0x0;
  cVar9 = FUN_140345ef2(lVar14,uVar27,local_d0);
  if (cVar9 == '\0') {
    uVar20 = *(int *)(lVar14 + 8) - *(int *)(lVar14 + 0x34);
    if (uVar20 < 4) {
      iVar31 = 1;
    }
    else {
      uVar15 = (ulonglong)(uVar20 & 0xfffffffe) + 0xf;
      lVar13 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar31 = 1 << ((byte)lVar13 & 0x1f);
    }
    if (((int)uVar20 < 1) || (iVar31 <= *(int *)(lVar14 + 0x48))) {
      uVar27 = *(int *)(lVar14 + 0x48) - 1U & uVar27;
      *(uint *)(pcVar12 + 0x14) = uVar27;
      lVar13 = *(longlong *)(lVar14 + 0x40);
      if (*(longlong *)(lVar14 + 0x40) == 0) {
        lVar13 = lVar14 + 0x38;
      }
      *(undefined4 *)(pcVar12 + 0x10) =
           *(undefined4 *)
            (lVar13 + ((longlong)*(int *)(lVar14 + 0x48) - 1U & (longlong)(int)uVar27) * 4);
      lVar13 = lVar14 + 0x38;
      if (*(longlong *)(lVar14 + 0x40) != 0) {
        lVar13 = *(longlong *)(lVar14 + 0x40);
      }
      *(undefined4 *)(lVar13 + ((longlong)*(int *)(lVar14 + 0x48) - 1U & (longlong)(int)uVar27) * 4)
           = local_e0[0];
    }
    else {
      *(int *)(lVar14 + 0x48) = iVar31;
      FUN_144a4495e(lVar14);
    }
  }
  if (*(int *)(lVar33 + 0xdc) == 0) {
    iVar31 = *(int *)(lVar33 + 0xb0);
    *(int *)(lVar33 + 0xb0) = iVar31 + 1;
    if (*(int *)(lVar33 + 0xb4) == iVar31) {
      FUN_1406245f8(local_110,iVar31);
    }
    iVar22 = *(int *)(lVar33 + 0xd0);
    if (iVar22 == 0) {
      iVar21 = -1;
    }
    else {
      iVar21 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar21 = iVar22 + -1;
      }
      iVar21 = iVar21 >> 5;
    }
    lVar13 = lVar33 + 0xb8;
    iVar17 = iVar22 + 1;
    iVar28 = iVar22 + 0x1f;
    if (-1 < iVar22) {
      iVar28 = iVar22;
    }
    if (iVar28 >> 5 == iVar21) {
      *(int *)(lVar33 + 0xd0) = iVar17;
    }
    else {
      local_100 = lVar13;
      if (*(int *)(lVar33 + 0xd4) <= iVar22) {
        iVar10 = iVar22;
        if (iVar22 + 0x20U < 0xa0) {
          iVar21 = 0x80;
        }
        else {
          uVar27 = iVar22 + 0x20U >> 5;
          if (*(int *)(lVar33 + 0xd4) + 0x1fU < 0xa0) {
            uVar20 = 4;
            if (4 < uVar27) {
              uVar20 = uVar27;
            }
          }
          else {
            uVar20 = uVar27 + (uVar27 * 3 >> 3) + 0x10;
          }
          uVar15 = (ulonglong)(uVar20 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar11 = (uint)(uVar15 + 0xf);
              if (uVar20 < 0x1ffd) {
                uVar15 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar15 + 0xf >> 4]];
              }
              else {
                uVar19 = (ulonglong)(uVar11 & 0xfffffff0);
                if (uVar19 < 0x7ff1) {
                  bVar29 = (&DAT_14c841e00)[uVar11 >> 4];
                  uVar25 = 0x32;
                  if (0x32 < bVar29) {
                    uVar25 = (ulonglong)bVar29;
                  }
                  uVar32 = 0x32 - (ulonglong)bVar29;
                  do {
                    uVar15 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar32 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar32 & 0xffffffff] & 0xf) == 0) goto LAB_1415cc052;
                    lVar13 = uVar25 + 1 + uVar32;
                    uVar32 = uVar32 - 1;
                  } while (lVar13 != 0x33);
                }
                uVar15 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar15 = (ulonglong)DAT_14c841df8;
                }
                uVar15 = -uVar15 & (uVar19 + uVar15) - 1;
              }
            }
            else {
              uVar15 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar15,0);
              iVar10 = *(int *)(lVar33 + 0xd0);
            }
          }
LAB_1415cc052:
          iVar17 = (int)(uVar15 >> 2);
          iVar21 = -0x20;
          if ((int)uVar27 <= iVar17) {
            iVar21 = iVar17 << 5;
          }
        }
        *(int *)(lVar33 + 0xd4) = iVar21;
        FUN_1446efbd8(local_100,iVar10);
        iVar17 = *(int *)(lVar33 + 0xd0) + 1;
      }
      iVar21 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar21 = iVar17;
      }
      *(int *)(lVar33 + 0xd0) = iVar17;
      iVar10 = (int)local_120;
      lVar13 = local_100;
      if (iVar17 % 0x20 != 0) {
        lVar14 = *(longlong *)(lVar33 + 200);
        if (*(longlong *)(lVar33 + 200) == 0) {
          lVar14 = local_100;
        }
        bVar29 = -(char)(iVar17 % 0x20);
        *(uint *)(lVar14 + (longlong)(iVar21 >> 5) * 4) =
             (uint)(*(int *)(lVar14 + (longlong)(iVar21 >> 5) * 4) << (bVar29 & 0x1f)) >>
             (bVar29 & 0x1f);
      }
    }
    lVar14 = (longlong)iVar31;
    if (*(longlong *)(lVar33 + 200) != 0) {
      lVar13 = *(longlong *)(lVar33 + 200);
    }
    bVar29 = (byte)iVar22 & 0x1f;
    puVar2 = (uint *)(lVar13 + (longlong)(iVar28 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar29 | 0xfffffffeU >> 0x20 - bVar29);
  }
  else {
    iVar31 = *(int *)(lVar33 + 0xd8);
    lVar14 = (longlong)iVar31;
    iVar22 = *(int *)(*(longlong *)(lVar33 + 0xa8) + 4 + lVar14 * 0x1c);
    *(int *)(lVar33 + 0xd8) = iVar22;
    iVar21 = *(int *)(lVar33 + 0xdc) + -1;
    *(int *)(lVar33 + 0xdc) = iVar21;
    if (iVar21 != 0) {
      *(undefined4 *)(*(longlong *)(lVar33 + 0xa8) + (longlong)iVar22 * 0x1c) = 0xffffffff;
    }
  }
  lVar13 = lVar33 + 0xb8;
  if (*(longlong *)(lVar33 + 200) != 0) {
    lVar13 = *(longlong *)(lVar33 + 200);
  }
  iVar22 = iVar31 + 0x1f;
  if (-1 < iVar31) {
    iVar22 = iVar31;
  }
  puVar2 = (uint *)(lVar13 + (longlong)(iVar22 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar31 & 0x1f);
  iVar22 = 1;
  lVar13 = *(longlong *)(lVar33 + 0xa8);
  lVar14 = lVar14 * 0x1c;
  puVar3 = (undefined4 *)(lVar13 + lVar14);
  *(uint *)(lVar13 + lVar14) = uVar16;
  *(int *)(lVar13 + 4 + lVar14) = (int)local_108;
  *(int *)(lVar13 + 8 + lVar14) = (int)local_118;
  *(int *)(lVar13 + 0xc + lVar14) = iVar10;
  *(int *)(lVar13 + 0x10 + lVar14) = iVar26;
  *(undefined4 *)(lVar13 + 0x14 + lVar14) = 0xffffffff;
  uVar27 = *(int *)(lVar33 + 0xb0) - *(int *)(lVar33 + 0xdc);
  if ((uVar27 != 0) && (uVar27 != 1)) {
    lVar13 = lVar33 + 0xe0;
    if (*(longlong *)(lVar33 + 0xe8) != 0) {
      lVar13 = *(longlong *)(lVar33 + 0xe8);
    }
    iVar26 = *(int *)(lVar13 + (ulonglong)(*(int *)(lVar33 + 0xf0) - 1U & uVar16) * 4);
    if (iVar26 != -1) {
      do {
        puVar4 = (undefined4 *)(*local_110 + (longlong)iVar26 * 0x1c);
        if (*(uint *)(*local_110 + (longlong)iVar26 * 0x1c) == uVar16) {
          uVar5 = *puVar3;
          uVar6 = puVar3[1];
          uVar7 = puVar3[2];
          uVar8 = puVar3[3];
          puVar4[4] = puVar3[4];
          *puVar4 = uVar5;
          puVar4[1] = uVar6;
          puVar4[2] = uVar7;
          puVar4[3] = uVar8;
          FUN_1400b4b8c(local_110,iVar31);
          goto LAB_1415cbdc1;
        }
        iVar26 = puVar4[5];
      } while (iVar26 != -1);
    }
  }
  if (3 < uVar27) {
    uVar15 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar22 = 1 << ((byte)lVar13 & 0x1f);
  }
  if (((int)uVar27 < 1) || (iVar22 <= *(int *)(lVar33 + 0xf0))) {
    uVar16 = *(int *)(lVar33 + 0xf0) - 1U & uVar16;
    puVar3[6] = uVar16;
    lVar13 = *(longlong *)(lVar33 + 0xe8);
    if (*(longlong *)(lVar33 + 0xe8) == 0) {
      lVar13 = lVar33 + 0xe0;
    }
    puVar3[5] = *(undefined4 *)
                 (lVar13 + ((longlong)*(int *)(lVar33 + 0xf0) - 1U & (longlong)(int)uVar16) * 4);
    lVar13 = *(longlong *)(lVar33 + 0xe8);
    if (*(longlong *)(lVar33 + 0xe8) == 0) {
      lVar13 = lVar33 + 0xe0;
    }
    *(int *)(lVar13 + ((longlong)*(int *)(lVar33 + 0xf0) - 1U & (longlong)(int)uVar16) * 4) = iVar31
    ;
  }
  else {
    *(int *)(lVar33 + 0xf0) = iVar22;
    FUN_141610494(local_110);
  }
LAB_1415cbdc1:
  uVar30 = 0x4100000;
LAB_1415cbdc6:
  uVar16 = *(uint *)(*plVar34 + 0xc);
  if ((int)uVar16 < DAT_14c9647dc) {
    lVar13 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
  }
  else {
    lVar13 = 0;
  }
  pcVar12 = (code *)FUN_1447f71cc(lVar13,uVar30);
LAB_1415cb6e7:
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pcVar12;
}



// FUNCTION 1415cc3d6 FUN_1415cc3d6 body=3854 status=ok
// SIG undefined FUN_1415cc3d6(void)

void FUN_1415cc3d6(longlong param_1,longlong param_2,int param_3,undefined ***param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined **ppuVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined *puVar7;
  DWORD DVar8;
  DWORD dwTlsIndex;
  DWORD DVar9;
  undefined8 uVar10;
  LPVOID lpTlsValue;
  undefined **ppuVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined *puVar15;
  wchar_t *pwVar16;
  longlong *plVar17;
  undefined **ppuVar18;
  bool bVar19;
  undefined1 auStack_438 [32];
  wchar_t *local_418;
  undefined **local_410;
  undefined **local_408;
  wchar_t *local_400;
  wchar_t *local_3f8;
  code *local_3f0;
  undefined1 *local_3e8;
  undefined ***local_3e0;
  code *local_3d8;
  code *local_3d0;
  longlong local_3c8;
  longlong local_3c0;
  wchar_t *local_3b8;
  undefined **local_3b0;
  wchar_t *local_3a8;
  undefined **local_3a0;
  int local_398;
  wchar_t *local_390;
  int local_388;
  undefined8 local_380;
  undefined **local_378;
  int local_370;
  wchar_t *local_368;
  undefined8 uStack_360;
  undefined **local_358 [11];
  longlong *local_300;
  longlong local_2e0;
  char local_270;
  undefined **local_268;
  undefined ***local_260;
  undefined ***local_258;
  undefined ****local_250;
  undefined *local_248 [64];
  undefined **local_48;
  
  local_48 = (undefined **)(DAT_14c707940 ^ (ulonglong)auStack_438);
  lVar12 = *(longlong *)(param_2 + 0xf8);
  lVar13 = (longlong)param_3 * 0x20;
  if (*(char *)(lVar12 + 0x18 + lVar13) != '\0') goto LAB_1415cc963;
  lVar1 = lVar12 + lVar13;
  ppuVar4 = *(undefined ***)(lVar12 + lVar13);
  if ((ppuVar4 == (undefined **)0x0 || *(char *)(lVar1 + 0x19) != '\0') ||
     (plVar17 = (longlong *)((longlong)param_3 * 0x48 + *(longlong *)(param_2 + 0x78)),
     (*(uint *)(ppuVar4 + 1) >> 10 & 1) == 0)) goto LAB_1415cc963;
  local_270 = '\0';
  if (param_4 == (undefined ***)0x0) {
    uVar10 = FUN_141552012(param_1 + 0x290);
    param_4 = local_358;
    FUN_14015c3c4(param_4,uVar10);
    local_270 = '\x01';
    FUN_1417119d0(param_1,param_4);
  }
  FUN_1427d07de(param_1,param_2,param_3,1);
  if (DAT_14c948f88 == 0) {
    local_378 = (undefined **)&DAT_1427db2a2;
    lVar12 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c948f88 = lVar12;
    FUN_1446f470e(&local_368,L"Struct",1);
    local_3e8 = &LAB_146891313;
    local_3f0 = FUN_146272f63;
    local_400 = L"Engine";
    local_3f8 = (wchar_t *)CONCAT44(local_3f8._4_4_,199);
    local_408 = (undefined **)&DAT_00000008;
    local_410 = (undefined **)CONCAT44(local_410._4_4_,0x10000020);
    local_418._0_4_ = 8;
    local_3e0 = &local_378;
    FUN_14574b4b2(lVar12);
    DAT_14c948f88 = lVar12;
    if (DAT_14c927740 == 0) {
      local_3e0 = &local_268;
      local_268 = (undefined **)FUN_1449e2820;
      local_3d0 = FUN_14081d0ea;
      local_3d8 = FUN_14081d0ea;
      local_3e8 = &LAB_146856450;
      local_3f0 = FUN_1427b121c;
      local_3f8 = L"Engine";
      local_400 = (wchar_t *)0x0;
      local_408 = (undefined **)CONCAT44(local_408._4_4_,0x10000021);
      local_410 = (undefined **)CONCAT44(local_410._4_4_,8);
      local_418._0_4_ = 0x28;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    lVar13 = DAT_14c948f88;
    lVar12 = DAT_14c927740;
    uVar10 = FUN_1400163b0();
    local_418 = L"Struct";
    FUN_14574b446(uVar10,lVar13,lVar12,L"/Script/CoreUObject");
  }
  iVar2 = *(int *)(DAT_14c948f88 + 0x38);
  if ((((iVar2 <= *(int *)(ppuVar4[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(ppuVar4[2] + 0x30) + (longlong)iVar2 * 8) ==
        DAT_14c948f88 + 0x30)) && (*(longlong *)(lVar1 + 0x10) != 0)) &&
     ((lVar12 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x10), iVar2 <= *(int *)(lVar12 + 0x38)
      && (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar2 * 8) == DAT_14c948f88 + 0x30)
      ))) {
    (**(code **)(*ppuVar4 + 0x310))(ppuVar4);
    if (DAT_14c949118 == 0) {
      local_3a0 = (undefined **)FUN_140631fbe;
      lVar12 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar12;
      FUN_1446f470e(&local_390,L"Class",1);
      local_3e8 = &LAB_146891e90;
      local_3f0 = (code *)&LAB_146273097;
      local_400 = L"Engine";
      local_3f8 = (wchar_t *)CONCAT44(local_3f8._4_4_,199);
      local_408 = (undefined **)&DAT_00000020;
      local_410 = (undefined **)CONCAT44(local_410._4_4_,0x10000000);
      local_418._0_4_ = 8;
      local_3e0 = &local_3a0;
      FUN_14574b4b2(lVar12);
      DAT_14c949118 = lVar12;
      if (DAT_14c951858 == 0) {
        local_3e0 = &local_268;
        local_268 = (undefined **)FUN_1449e2820;
        local_3d0 = FUN_14081d0ea;
        local_3d8 = FUN_14081d0ea;
        local_3e8 = &LAB_1468c5283;
        local_3f0 = FUN_142809da0;
        local_3f8 = L"Engine";
        local_400 = (wchar_t *)0x400000000;
        local_408 = (undefined **)CONCAT44(local_408._4_4_,0x10000000);
        local_410 = (undefined **)CONCAT44(local_410._4_4_,8);
        local_418._0_4_ = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar13 = DAT_14c951858;
      lVar12 = DAT_14c949118;
      if (DAT_14c948f88 == 0) {
        local_378 = (undefined **)&DAT_1427db2a2;
        DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        local_3c8 = DAT_14c948f88;
        FUN_1446f470e(&local_368,L"Struct",1);
        local_3e0 = &local_378;
        local_3e8 = &LAB_146891313;
        local_3f0 = FUN_146272f63;
        local_400 = L"Engine";
        local_3f8 = (wchar_t *)CONCAT44(local_3f8._4_4_,199);
        local_408 = (undefined **)&DAT_00000008;
        local_410 = (undefined **)CONCAT44(local_410._4_4_,0x10000020);
        local_418._0_4_ = 8;
        FUN_14574b4b2(local_3c8);
        DAT_14c948f88 = local_3c8;
        local_3c0 = DAT_14c927740;
        if (DAT_14c927740 == 0) {
          local_3e0 = &local_268;
          local_268 = (undefined **)FUN_1449e2820;
          local_3d0 = FUN_14081d0ea;
          local_3d8 = FUN_14081d0ea;
          local_3e8 = &LAB_146856450;
          local_3f0 = FUN_1427b121c;
          local_3f8 = L"Engine";
          local_400 = (wchar_t *)0x0;
          local_408 = (undefined **)CONCAT44(local_408._4_4_,0x10000021);
          local_410 = (undefined **)CONCAT44(local_410._4_4_,8);
          local_418._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
          local_3c8 = DAT_14c948f88;
        }
        DAT_14c948f88 = local_3c8;
        local_3c0 = DAT_14c927740;
        uVar10 = FUN_1400163b0();
        local_418 = L"Struct";
        FUN_14574b446(uVar10,local_3c8,local_3c0,L"/Script/CoreUObject");
      }
      local_418 = L"Class";
      FUN_14574b446(DAT_14c948f88,lVar12,lVar13,L"/Script/CoreUObject");
    }
    if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(ppuVar4[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(ppuVar4[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) ==
        DAT_14c949118 + 0x30)) {
      (**(code **)(*ppuVar4 + 0x2a8))(ppuVar4);
    }
  }
  if ((plVar17[4] == -1) && (DAT_14c949118 == 0)) {
    local_3a0 = (undefined **)FUN_140631fbe;
    lVar12 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar12;
    FUN_1446f470e(&local_390,L"Class",1);
    local_3e8 = &LAB_146891e90;
    local_3f0 = (code *)&LAB_146273097;
    local_400 = L"Engine";
    local_3f8 = (wchar_t *)CONCAT44(local_3f8._4_4_,199);
    local_408 = (undefined **)&DAT_00000020;
    local_410 = (undefined **)CONCAT44(local_410._4_4_,0x10000000);
    local_418._0_4_ = 8;
    local_3e0 = &local_3a0;
    FUN_14574b4b2(lVar12);
    DAT_14c949118 = lVar12;
    if (DAT_14c951858 == 0) {
      local_3e0 = &local_268;
      local_268 = (undefined **)FUN_1449e2820;
      local_3d0 = FUN_14081d0ea;
      local_3d8 = FUN_14081d0ea;
      local_3e8 = &LAB_1468c5283;
      local_3f0 = FUN_142809da0;
      local_3f8 = L"Engine";
      local_400 = (wchar_t *)0x400000000;
      local_408 = (undefined **)CONCAT44(local_408._4_4_,0x10000000);
      local_410 = (undefined **)CONCAT44(local_410._4_4_,8);
      local_418._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar13 = DAT_14c951858;
    lVar12 = DAT_14c949118;
    if (DAT_14c948f88 == 0) {
      local_378 = (undefined **)&DAT_1427db2a2;
      DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      local_3c8 = DAT_14c948f88;
      FUN_1446f470e(&local_368,L"Struct",1);
      local_3e0 = &local_378;
      local_3e8 = &LAB_146891313;
      local_3f0 = FUN_146272f63;
      local_400 = L"Engine";
      local_3f8 = (wchar_t *)CONCAT44(local_3f8._4_4_,199);
      local_408 = (undefined **)&DAT_00000008;
      local_410 = (undefined **)CONCAT44(local_410._4_4_,0x10000020);
      local_418._0_4_ = 8;
      FUN_14574b4b2(local_3c8);
      DAT_14c948f88 = local_3c8;
      local_3c0 = DAT_14c927740;
      if (DAT_14c927740 == 0) {
        local_3e0 = &local_268;
        local_268 = (undefined **)FUN_1449e2820;
        local_3d0 = FUN_14081d0ea;
        local_3d8 = FUN_14081d0ea;
        local_3e8 = &LAB_146856450;
        local_3f0 = FUN_1427b121c;
        local_3f8 = L"Engine";
        local_400 = (wchar_t *)0x0;
        local_408 = (undefined **)CONCAT44(local_408._4_4_,0x10000021);
        local_410 = (undefined **)CONCAT44(local_410._4_4_,8);
        local_418._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        local_3c8 = DAT_14c948f88;
      }
      DAT_14c948f88 = local_3c8;
      local_3c0 = DAT_14c927740;
      uVar10 = FUN_1400163b0();
      local_418 = L"Struct";
      FUN_14574b446(uVar10,local_3c8,local_3c0,L"/Script/CoreUObject");
    }
    local_418 = L"Class";
    FUN_14574b446(DAT_14c948f88,lVar12,lVar13,L"/Script/CoreUObject");
  }
  FUN_144a8e47e(ppuVar4,*(undefined8 *)(lVar1 + 8));
  FUN_14472eae2(ppuVar4,0x400);
  dwTlsIndex = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar9 = 0xffffffff;
    LOCK();
    bVar19 = DAT_14c75ec34 != 0xffffffff;
    DVar8 = dwTlsIndex;
    if (bVar19) {
      DVar9 = DAT_14c75ec34;
      DVar8 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar8;
    UNLOCK();
    if (bVar19) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar9;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  lVar12 = *(longlong *)((longlong)lpTlsValue + 0x58);
  lVar13 = *(longlong *)(lVar12 + 0x30);
  *(undefined ***)(lVar12 + 0x30) = ppuVar4;
  lVar5 = *plVar17;
  ppuVar11 = (undefined **)plVar17[1];
  param_4[0x19] = ppuVar4;
  uVar3 = *(uint *)(param_4[0x17][10] + 4);
  param_4[0x1a] = (undefined **)((ulonglong)uVar3 + lVar5);
  param_4[0x1b] = ppuVar11;
  *param_4[1] = (undefined *)((longlong)((ulonglong)uVar3 + lVar5) + (longlong)param_4[1][2]);
  puVar15 = param_4[1][2];
  if (*(char *)((longlong)param_4 + 0xe1) == '\x01') {
    lVar5 = -(longlong)(puVar15 + (longlong)param_4[0x1a]);
  }
  else {
    lVar5 = (ulonglong)*(uint *)param_4[0x17] -
            (longlong)(puVar15 + *(uint *)(param_4[0x17][10] + 4));
  }
  puVar15 = *param_4[1] + lVar5;
  param_4[0x13] = *(undefined ***)(lVar1 + 8);
  if (((ulonglong)ppuVar4[1] & 0x10) == 0) {
    (**(code **)(*ppuVar4 + 0xd8))(ppuVar4,param_4);
  }
  else {
    local_250 = &local_258;
    local_268 = &PTR_FUN_149e37810;
    local_258 = &local_268;
    local_260 = param_4;
    (**(code **)(*(longlong *)ppuVar4[2] + 0x3a8))(ppuVar4[2],ppuVar4);
  }
  param_4[0x13] = (undefined **)0x0;
  pwVar16 = (wchar_t *)plVar17[1];
  ppuVar11 = param_4[1];
  puVar6 = *ppuVar11;
  puVar7 = ppuVar11[2];
  if (*(char *)((longlong)param_4 + 0xe1) == '\x01') {
    if (pwVar16 !=
        (wchar_t *)(puVar6 + -(longlong)(puVar7 + (longlong)puVar15 + (longlong)param_4[0x1a]))) {
      lVar1 = -(longlong)((longlong)param_4[0x1a] + (longlong)puVar7);
LAB_1415cc697:
      local_368 = (wchar_t *)0x0;
      uStack_360 = 0;
      local_3c8 = lVar12;
      local_3b8 = pwVar16;
      FUN_14005eb28(&local_368,0x80);
      local_268 = local_248;
      local_250 = (undefined ****)((ulonglong)local_250 & 0xffffffffffffff00);
      local_258 = &local_48;
      local_378 = *(undefined ***)(ppuVar4[2] + 0x18);
      local_260 = (undefined ***)local_268;
      FUN_14005eb5c(&local_378,&local_268);
      if (local_258 <= (undefined ***)((longlong)local_260 + 2)) {
        FUN_140213274(&local_268,1);
      }
      *(undefined2 *)local_260 = 0x20;
      local_260 = (undefined ***)((longlong)local_260 + 2);
      FUN_144750bde(ppuVar4,0,&local_268);
      FUN_1400020e8(&local_368,local_268,(ulonglong)((longlong)local_260 - (longlong)local_268) >> 1
                   );
      if ((char)local_250 == '\x01') {
        FUN_1400020a8(local_268);
      }
      local_3a8 = L"";
      if ((int)uStack_360 != 0) {
        local_3a8 = local_368;
      }
      local_3c0 = lVar13;
      FUN_140002266(&local_268,L"%llX",*(undefined8 *)(param_1 + 0x100));
      local_3b0 = (undefined **)&DAT_149dfb77a;
      if ((int)local_260 != 0) {
        local_3b0 = local_268;
      }
      local_380 = *(undefined8 *)(param_1 + 0x110);
      FUN_1400021e4(&local_380,&local_378);
      ppuVar11 = (undefined **)&DAT_149dfb77a;
      if (local_370 != 0) {
        ppuVar11 = local_378;
      }
      FUN_140002266(&local_390,L"%llX",*(undefined8 *)(param_1 + 0xf8));
      pwVar16 = L"";
      if (local_388 != 0) {
        pwVar16 = local_390;
      }
      FUN_1400021e4(param_1 + 0x108,&local_3a0);
      ppuVar18 = (undefined **)&DAT_149dfb77a;
      if (local_398 != 0) {
        ppuVar18 = local_3a0;
      }
      local_3f8 = local_3b8;
      local_400 = local_3a8;
      local_408 = local_3b0;
      local_418 = pwVar16;
      local_410 = ppuVar11;
      local_3f0 = (code *)(puVar6 + (lVar1 - (longlong)puVar15));
      FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/AsyncLoading2.cpp",0x1c73,
                    L"ObjectSerializationError: %s (0x%s) %s (0x%s) - %s: Serial size mismatch: Expected read size %lld, Actual read size %lld"
                    ,ppuVar18);
      lVar13 = local_3c0;
      if (local_3a0 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      lVar12 = local_3c8;
      if (local_390 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (local_378 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (local_268 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (local_368 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      ppuVar11 = param_4[1];
    }
  }
  else {
    uVar3 = *(uint *)(param_4[0x17][10] + 4);
    uVar14 = (ulonglong)*(uint *)param_4[0x17];
    if (pwVar16 != (wchar_t *)(puVar6 + (uVar14 - (longlong)(puVar7 + (longlong)(puVar15 + uVar3))))
       ) {
      lVar1 = uVar14 - (longlong)(puVar7 + uVar3);
      goto LAB_1415cc697;
    }
  }
  param_4[0x19] = (undefined **)0x0;
  param_4[0x1a] = (undefined **)0x0;
  param_4[0x1b] = (undefined **)0x0;
  *ppuVar11 = ppuVar11[2];
  FUN_144757f48(ppuVar4,0x200000);
  *(longlong *)(lVar12 + 0x30) = lVar13;
  if (local_270 == '\x01') {
    local_358[0] = &PTR__purecall_149e35f70;
    if (local_300 != (longlong *)0x0) {
      if (*local_300 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_300);
    }
    if (local_2e0 != 0) {
      if (*(longlong *)(local_2e0 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_2e0);
    }
  }
LAB_1415cc963:
  if (((ulonglong)local_48 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415cd2e6 FUN_1415cd2e6 body=1367 status=ok
// SIG undefined FUN_1415cd2e6(void)

void FUN_1415cd2e6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  int iVar17;
  ulonglong uVar18;
  undefined1 auStack_a8 [32];
  longlong **local_88;
  longlong local_80;
  longlong *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar13 = *(undefined8 *)(param_1 + 0xd0);
  plVar5 = *(longlong **)(param_1 + 0xd8);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar17 = *(int *)(lVar10 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar17 == 2) goto LAB_1415cd34d;
    if (iVar17 != 1) goto LAB_1415cd344;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_1415cd34d;
  }
  else {
LAB_1415cd344:
    if (iVar17 == 0x10) goto LAB_1415cd34d;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar17 = *(int *)(lVar10 + 0xc60), iVar17 == 2))
    goto LAB_1415cd34d;
    if (iVar17 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1415cd34d;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar3 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar12 = (uint *)*puVar3;
    if (puVar12 != (uint *)0x0) goto LAB_1415cd4c5;
    while( true ) {
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_143b4b45e);
      }
      lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar11 = *(undefined4 **)(lVar10 + 0x310);
      *(undefined8 *)(lVar10 + 0x310) = 0;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar11 = 0xffffffff;
      *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
      puVar11[0x12] = 0;
      *puVar3 = puVar11;
      FUN_140217a48(puVar3);
      puVar12 = (uint *)*puVar3;
LAB_1415cd4c5:
      puVar16 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar7 = puVar12[0x12];
      if (puVar15 <= puVar12 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
        LOCK();
        uVar4 = *puVar12;
        *puVar12 = *puVar12 + uVar7 + 1;
        UNLOCK();
        if ((uVar4 ^ uVar7) != 0xffffffff) break;
        puVar12 = (uint *)*puVar3;
        *puVar12 = 0xffffffff;
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar3 = puVar12;
        puVar16 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar7 = 0;
        if (puVar15 <= puVar12 + 0x4000) {
          uVar7 = 1;
          goto LAB_1415cd545;
        }
      }
    }
    uVar7 = uVar7 + 1;
LAB_1415cd545:
    *(uint **)(puVar12 + 0x10) = puVar15;
    puVar12[0x12] = uVar7;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14aea0bf8;
    puVar16[0x15] = uVar13;
    puVar16[0x16] = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar7 = DAT_14c7585c8 >> 10 & 3;
      iVar17 = 0;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar7 < 2) {
        uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar7];
        iVar17 = 0;
      }
      else {
        uVar18 = 2;
      }
    }
    else {
      iVar17 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
               *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar18 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar10 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar10 == 0) {
      uVar6 = 1;
      if ((char)uVar18 != '\x06') {
        uVar6 = uVar18;
      }
      uVar18 = uVar6;
      uVar13 = 0;
    }
    else {
      if ((char)uVar18 == '\x06') {
        uVar18 = *(ulonglong *)(lVar10 + 0x38) >> 0x3b;
      }
      uVar13 = *(undefined8 *)(lVar10 + 0x30);
    }
    puVar16[0xf] = uVar13;
    puVar16[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar17;
    if (puVar16 == (undefined8 *)0x0) {
      local_78[0] = (longlong *)CONCAT71(local_78[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_78[0] = (longlong *)CONCAT71(local_78[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar2 = (int *)(puVar16 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14aea0b90;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_88 = local_78;
    local_78[0] = (longlong *)&DAT_143b4b6b0;
    local_50 = uVar13;
    local_48 = plVar5;
    FUN_14005a792(&DAT_14ca9a440,L"DeallocateWaterInstanceDataBuffer",&DAT_14cb4a4cc);
    if (local_78[0] != (longlong *)0x0) {
      pppuVar14 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar14 = &local_58;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_1415cd34d:
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
  lVar10 = FUN_14585114a(DAT_14cb0d2b0);
  if (lVar10 != 0) {
    local_78[0] = &local_80;
    local_80 = param_1;
    FUN_145d11676(lVar10 + 0x30);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415cd83e FUN_1415cd83e body=242 status=ok
// SIG undefined FUN_1415cd83e(void)

void FUN_1415cd83e(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong in_stack_00000028;
  
  if (in_stack_00000028 == 0) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x90);
  if (lVar4 == 0) {
    uVar3 = FUN_141218768();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x90) = lVar4;
  }
  lVar5 = *(longlong *)(param_1 + 0x98);
  if (((lVar5 == 0) && (lVar5 = 0, lVar4 != 0)) && (*(longlong *)(param_1 + 0x88) != 0)) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      lVar5 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar5 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x88));
    }
    *(longlong *)(param_1 + 0x98) = lVar5;
  }
  if (lVar5 != in_stack_00000028) {
    return;
  }
  uVar3 = FUN_145a1089c(param_1);
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar6 = 0;
  }
  cVar2 = FUN_14125be1e(uVar6,uVar3);
  if (cVar2 != '\0') {
    FUN_146230ef6(param_1);
    return;
  }
  FUN_1443377da();
  return;
}



// FUNCTION 1415cd930 FUN_1415cd930 body=662 status=ok
// SIG undefined FUN_1415cd930(void)

void FUN_1415cd930(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  FUN_14080c2b4();
  FUN_14440aa80(param_1,0);
  plVar1 = (longlong *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 == 0) {
    uVar15 = 1;
    uVar14 = 0;
    iVar11 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 0x38);
    }
    uVar13 = *puVar8;
    if (uVar13 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar9 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar9 = uVar14;
      }
      iVar11 = 0;
      do {
        if (uVar9 == uVar14) goto LAB_1415cdac8;
        iVar11 = iVar11 + 0x20;
        uVar13 = puVar8[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar9 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      lVar12 = *plVar1;
      if (*(longlong *)(lVar12 + 8 + (longlong)iVar7 * 0x28) != 0) {
        FUN_1400020a8();
      }
      puVar3 = (undefined8 *)((longlong)iVar7 * 0x28 + 8 + lVar12);
      uVar13 = uVar13 & ~(uint)uVar15;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar8 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0x38);
      }
      iVar2 = *(int *)(param_1 + 0x50);
      iVar7 = (int)uVar14;
      lVar12 = (longlong)iVar7;
      uVar4 = puVar8[lVar12] & uVar13;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar7) {
          iVar6 = iVar7;
        }
        if (iVar5 <= iVar7) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar4 = puVar8[lVar12 + lVar10 + 1];
          if (uVar4 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar6 - lVar12 == lVar10) goto LAB_1415cdac8;
        }
        uVar14 = (ulonglong)(iVar7 + (int)lVar10 + 1);
        uVar13 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar4 & uVar4);
      uVar9 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar2);
  }
LAB_1415cdac8:
  FUN_146150c8c(plVar1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_14017e2da(param_1 + 0xc0);
  while (*(undefined8 **)(param_1 + 0xb8) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0xb8) = **(undefined8 **)(param_1 + 0xb8);
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_145af7a40(plVar1);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1415cdbc6 FUN_1415cdbc6 body=467 status=ok
// SIG undefined FUN_1415cdbc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415cdbc6(void)

{
  ulonglong uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  undefined *local_48;
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0x100000000;
  local_48 = &DAT_14c845fe0;
  local_40 = 0xffffffff;
  local_38 = 0;
  if (DAT_14c845ff8 == 0) {
    uVar14 = 1;
    local_40._0_4_ = 0xffffffff;
    local_40._4_4_ = 0;
    local_50._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    uVar14 = local_50 >> 0x20;
  }
  puVar3 = local_48;
  iVar4 = *(int *)(local_48 + 0x18);
  lVar7 = DAT_14c845fd0;
  iVar8 = (int)local_50;
  uVar9 = (uint)local_40;
  iVar6 = local_40._4_4_;
  iVar10 = local_38;
  if (local_40._4_4_ < iVar4) {
    do {
      if (*(longlong *)(lVar7 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
        iVar4 = *(int *)(puVar3 + 0x18);
        lVar7 = DAT_14c845fd0;
      }
      uVar9 = uVar9 & ~(uint)uVar14;
      puVar11 = *(undefined **)(puVar3 + 0x10);
      if (*(undefined **)(puVar3 + 0x10) == (undefined *)0x0) {
        puVar11 = puVar3;
      }
      lVar13 = (longlong)iVar8;
      uVar5 = *(uint *)(puVar11 + lVar13 * 4) & uVar9;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar2 = iVar6;
        if (iVar6 < iVar8) {
          iVar2 = iVar8;
        }
        if (iVar6 <= iVar8) break;
        lVar12 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)(puVar11 + lVar12 * 4 + lVar13 * 4 + 4);
          if (uVar5 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar2 - lVar13 == lVar12) goto LAB_1415cdcf4;
        }
        iVar8 = iVar8 + (int)lVar12 + 1;
        uVar9 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar14 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_1415cdcf4:
  DAT_14c845fd8 = 0;
  if (DAT_14c845fdc != 0) {
    FUN_1446f4a44(&DAT_14c845fd0,0);
  }
  _DAT_14c846000 = 0xffffffff;
  DAT_14c845ff8 = 0;
  if (0x80 < DAT_14c845ffc) {
    DAT_14c845ffc = 0x80;
    FUN_1446efbd8(&DAT_14c845fe0,0);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415cdd9a FUN_1415cdd9a body=206 status=ok
// SIG undefined FUN_1415cdd9a(void)

void FUN_1415cdd9a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_1411df190();
  if ((longlong)*(int *)(lVar1 + 0x60) != 0) {
    lVar4 = (longlong)*(int *)(lVar1 + 0x60) * 0x1c;
    lVar3 = *(longlong *)(lVar1 + 0x58) + 0x10;
    lVar2 = DAT_14cacd8a0;
    do {
      if (*(longlong *)(lVar3 + -0x10) != lVar2) {
        local_48 = *(undefined4 *)(lVar3 + -0x10);
        uStack_44 = *(undefined4 *)(lVar3 + -0xc);
        uStack_40 = *(undefined4 *)(lVar3 + -8);
        uStack_3c = *(undefined4 *)(lVar3 + -4);
        (**(code **)(*param_1 + 0x3f0))(param_1,&local_48,lVar3);
        lVar2 = DAT_14cacd8a0;
      }
      lVar3 = lVar3 + 0x1c;
      lVar4 = lVar4 + -0x1c;
    } while (lVar4 != 0);
  }
  if ((longlong)*(int *)(lVar1 + 0x70) != 0) {
    lVar4 = *(longlong *)(lVar1 + 0x68);
    lVar1 = (longlong)*(int *)(lVar1 + 0x70) * 0x38;
    do {
      (**(code **)(*param_1 + 0x4e0))(param_1,lVar4);
      lVar4 = lVar4 + 0x38;
      lVar1 = lVar1 + -0x38;
    } while (lVar1 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415cde6a FUN_1415cde6a body=325 status=ok
// SIG undefined FUN_1415cde6a(void)

void FUN_1415cde6a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = local_58;
  if ((DAT_14cb420b8 & 1) != 0) {
    LOCK();
    DAT_14cb420b8 = 0;
    UNLOCK();
    local_48 = 0x100000000;
    local_40 = &DAT_14cb44460;
    local_38 = 0xffffffff;
    local_30 = 0;
    iVar4 = 0;
    if (DAT_14cb44478 != 0) {
      FUN_1449c0562(&local_48);
      iVar4 = DAT_14cb44478;
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar2 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_70 = &DAT_14cb44450;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    if ((local_58._4_4_ != iVar4) || (local_40 != &DAT_14cb44460)) {
      iVar3 = local_58._4_4_;
      local_58 = uVar2;
      do {
        lVar1 = *(longlong *)(*local_70 + 8 + (longlong)iVar3 * 0x18);
        if (lVar1 != 0) {
          FUN_14606a49c(*(undefined8 *)(lVar1 + 0x1c78));
        }
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar3 = local_58._4_4_;
        uVar2 = local_58;
      } while (local_70 != &DAT_14cb44450 || (local_60 != &DAT_14cb44460 || local_58._4_4_ != iVar4)
              );
    }
  }
  local_58 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415cdfb0 FUN_1415cdfb0 body=108 status=ok
// SIG undefined FUN_1415cdfb0(void)

void FUN_1415cdfb0(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14aac2720;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)puVar2 + 100);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (((*piVar1 == 0) && (*(int *)(puVar2 + 0xc) == 0)) && (*(int *)(puVar2 + 0xb) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = IQueuedWork::vftable;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415ce012. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1415ce01c FUN_1415ce01c body=346 status=ok
// SIG undefined FUN_1415ce01c(void)

void FUN_1415ce01c(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  code *local_70;
  undefined4 local_68;
  code *local_60;
  undefined4 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = (**(code **)(*param_1 + 0x2a0))();
  local_70 = FUN_1494fd23c;
  local_68 = 0;
  FUN_14673f23a(&local_60,param_1);
  FUN_145da85ea(uVar1,&local_70,&local_60);
  FUN_1401cb1ee(&local_60);
  local_60 = FUN_141533ed2;
  local_58 = 0;
  FUN_14606b712(&DAT_14c8673d8,&local_70,param_1,&local_60);
  FUN_14020fad6(param_1 + 0x33,L"LiveLink Rebroadcast");
  plVar2 = (longlong *)FUN_145988e1c();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(lVar3 + 0xb0);
  plVar2 = (longlong *)FUN_145988e1c();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  *(undefined1 *)((longlong)param_1 + 0x201) = *(undefined1 *)(lVar3 + 0xb1);
  local_60 = (code *)((ulonglong)local_60 & 0xffffffffffffff00);
  local_78 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"LiveLink",L"bEnableParentSubjects",&local_60);
  *(undefined1 *)((longlong)param_1 + 0x202) = local_60._0_1_;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415ce178 FUN_1415ce178 body=533 status=ok
// SIG undefined FUN_1415ce178(void)

undefined8 * FUN_1415ce178(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90;
  undefined1 local_88 [8];
  undefined1 local_80 [72];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_14bd2e1b0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xd),4000);
  LOCK();
  *(undefined4 *)(param_1 + 1) = 0;
  UNLOCK();
  plVar3 = (longlong *)FUN_145988e1c();
  lVar4 = plVar3[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar4 = plVar3[0x22];
  }
  auVar6._0_8_ = (double)(float)*(double *)(lVar4 + 0x90) * 10000000.0 + 0.5;
  auVar6._8_8_ = 0;
  auVar6 = roundpd(auVar6,auVar6,1);
  param_1[5] = (longlong)auVar6._0_8_;
  uVar5 = FUN_1405d8a54(0);
  param_1[0xc] = uVar5;
  FUN_1446f470e(local_88,L"LiveLinkMessageHeartbeatManager",1);
  FUN_1458bfb2e(local_80,local_88);
  FUN_14673e19e(local_80,param_1);
  FUN_1458bfc2e(local_80,&local_38);
  plVar3 = local_30;
  if (param_1 + 8 != &local_38) {
    param_1[8] = local_38;
    local_38 = 0;
    plVar2 = (longlong *)param_1[9];
    if (local_30 != plVar2) {
      local_30 = (longlong *)0x0;
      param_1[9] = plVar3;
      if (plVar2 != (longlong *)0x0) {
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
    }
  }
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1458bf708(local_80);
  LOCK();
  *(uint *)(param_1 + 10) = (uint)(param_1[8] != 0);
  UNLOCK();
  if (*(int *)(param_1 + 10) != 0) {
    local_90 = 0;
    local_98 = 0xffffffffffffffff;
    uVar5 = FUN_1411b1052(param_1,L"LiveLinkMessageBusDiscoveryManager",0,0);
    param_1[0xb] = uVar5;
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415ce38e FUN_1415ce38e body=382 status=ok
// SIG undefined FUN_1415ce38e(void)

ulonglong FUN_1415ce38e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)(param_1 + 0x398);
  if (lVar4 != 0) {
    unaff_RDI = param_2;
    if (DAT_14cbae3d8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464f5fc4;
      local_48 = &LAB_148c3dd26;
      local_50 = &LAB_1459673ba;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar4 = *(longlong *)(param_1 + 0x398);
      if (lVar4 == 0) goto LAB_1415ce4e5;
    }
    if ((((DAT_14cbae3d8 != 0) && (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
         == DAT_14cbae3d8 + 0x30 && (cVar2 = FUN_1441fb884(lVar4,param_2,param_3), cVar2 == '\0'))))
    {
      uVar5 = 0;
      goto LAB_1415ce417;
    }
  }
LAB_1415ce4e5:
  uVar3 = FUN_140d27aa0(param_1);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  FUN_145cb003e(uVar3,1);
  lVar4 = FUN_140d27aa0(param_1);
  *(undefined2 *)(lVar4 + 0x45) = 0x100;
LAB_1415ce417:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1415ce50d FUN_1415ce50d body=8 status=ok
// SIG undefined FUN_1415ce50d(void)

void FUN_1415ce50d(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 1415ce516 FUN_1415ce516 body=346 status=ok
// SIG undefined FUN_1415ce516(void)

void FUN_1415ce516(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar6 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar3) {
      uVar6 = (ulonglong)uVar3;
    }
  }
  else {
    uVar6 = uVar6 + (uVar6 * 3 >> 3) + 0x10;
  }
  uVar5 = uVar6 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar5 + 0xf;
      if (uVar6 < 0xfff) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1415ce5a6;
            lVar1 = uVar6 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar6 & ((uVar4 & 0xfffffffffffffff0) + uVar6) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1415ce5a6:
  uVar6 = 0x7fffffff;
  if ((int)uVar3 <= (int)(uVar5 >> 3)) {
    uVar6 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar6;
  FUN_1446f8d3c(param_1,0,uVar6,8,8);
  return;
}



// FUNCTION 1415ce670 FUN_1415ce670 body=258 status=ok
// SIG undefined FUN_1415ce670(void)

void FUN_1415ce670(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa0e90) {
    FUN_144b3d300(&DAT_14caa0e90);
    if (DAT_14caa0e90 == -1) {
      FUN_146163b06(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x115;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa0e10,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14323df23);
      _Init_thread_footer(&DAT_14caa0e90);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415ce774 FUN_1415ce774 body=1350 status=ok
// SIG undefined FUN_1415ce774(void)

void FUN_1415ce774(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_f8 [32];
  int *local_d8;
  int *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  int local_b8 [10];
  int local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  uint local_64;
  undefined8 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar9 = *(longlong *)(param_1 + 0x10);
  plVar1 = *(longlong **)(lVar9 + 0x70);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  FUN_146319cd6(&local_60);
  FUN_1460272c0(&DAT_14c8337f0,&local_58,local_60);
  lVar3 = local_58;
  lVar14 = (longlong)local_50;
  bVar6 = true;
  if (lVar14 != 0) {
    lVar13 = 0;
    do {
      plVar11 = *(longlong **)(lVar3 + lVar13);
      cVar7 = (**(code **)*plVar11)(plVar11,3);
      if (((cVar7 != '\0') && (cVar7 = (**(code **)(*plVar11 + 0x20))(plVar11), cVar7 != '\0')) &&
         (cVar7 = (**(code **)(*plVar11 + 0x28))(plVar11), cVar7 != '\0')) {
        if (plVar11 != (longlong *)0x0) goto LAB_1415ce9a4;
        break;
      }
      lVar13 = lVar13 + 8;
    } while (lVar14 * 8 != lVar13);
    lVar3 = local_58;
    if ((longlong)local_50 != 0) {
      lVar14 = 0;
      do {
        plVar11 = *(longlong **)(lVar3 + lVar14);
        cVar7 = (**(code **)*plVar11)(plVar11,3);
        if ((cVar7 != '\0') && (cVar7 = (**(code **)(*plVar11 + 0x28))(plVar11), cVar7 != '\0')) {
          if (plVar11 != (longlong *)0x0) goto LAB_1415ce9a4;
          break;
        }
        lVar14 = lVar14 + 8;
      } while ((longlong)local_50 * 8 != lVar14);
    }
  }
  plVar11 = (longlong *)0x0;
LAB_1415ce8a9:
  *(undefined1 *)(param_1 + 0x2c) = 0;
  if ((DAT_14c760bf8 != 0) && (plVar2 = *(longlong **)(lVar9 + 0x88), plVar2 != (longlong *)0x0)) {
    local_90 = 0;
    (**(code **)(*plVar2 + 0xe0))(plVar2,0,&local_90,4);
    *(bool *)(param_1 + 0x2c) = local_90 != 0;
  }
  uVar12 = 0;
  if (DAT_14ca7768c == '\x01') {
    iVar8 = (**(code **)(*plVar1 + 0x70))(plVar1);
    uVar12 = 1;
    if (iVar8 == 0) {
      DAT_14ca7768c = '\0';
      uVar12 = 0;
    }
  }
  FUN_1456ccc7a(param_1);
  if (*(char *)(param_1 + 0x2d) != '\x01') goto LAB_1415ceb7b;
  lVar3 = *(longlong *)(*(longlong *)(lVar9 + 2000) + 0x1280);
  lVar9 = *(longlong *)(lVar9 + 2000) + 0xb00;
  if (lVar3 != 0) {
    lVar9 = lVar3;
  }
  uVar10 = *(undefined8 *)(lVar9 + 0x10);
  local_64 = (uint)*(byte *)(param_1 + 0x2c) << 0xb | 2;
  local_90 = *(int *)(param_1 + 0x20);
  local_8c = *(undefined4 *)(param_1 + 0x24);
  iVar8 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)((uint)*(byte *)(param_1 + 0x28) * 0x30));
  if (iVar8 < 0x49) {
    if (iVar8 == 0x1b) {
      local_88 = 0x1c;
    }
    else if (iVar8 == 0x35) {
      local_88 = 0x38;
    }
    else if (iVar8 == 0x46) {
      local_88 = 0x47;
    }
    else {
LAB_1415ce9a0:
      local_88 = iVar8;
    }
  }
  else if (iVar8 == 0x49) {
    local_88 = 0x4a;
  }
  else if (iVar8 == 0x4c) {
    local_88 = 0x4d;
  }
  else {
    local_88 = 0x57;
    if (iVar8 != 0x5a) goto LAB_1415ce9a0;
  }
  local_80 = 1;
  local_78 = 0x30;
  local_74 = *(undefined4 *)(param_1 + 0x54);
  local_70 = 0x400000001;
  local_68 = 0;
  local_b8[4] = 0;
  local_b8[5] = 0;
  local_b8[6] = 0;
  local_b8[7] = 0;
  local_b8[8] = *(byte *)(param_1 + 0x29) ^ 1;
  plVar2 = (longlong *)(param_1 + 0x30);
  plVar4 = *(longlong **)(param_1 + 0x30);
  local_84 = uVar12;
  if (bVar6) {
    if (plVar4 != (longlong *)0x0) {
      *plVar2 = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    local_d8 = local_b8 + 4;
    local_d0 = (int *)0x0;
    local_c8 = plVar2;
    iVar8 = (**(code **)(*plVar1 + 0x78))(plVar1,uVar10,*(undefined8 *)(param_1 + 0x18),&local_90);
  }
  else {
    if (plVar4 != (longlong *)0x0) {
      *plVar2 = 0;
      (**(code **)(*plVar4 + 0x10))();
    }
    local_d0 = local_b8 + 4;
    local_d8 = &local_90;
    local_c8 = (longlong *)0x0;
    local_c0 = plVar2;
    iVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,plVar1,uVar10,*(undefined8 *)(param_1 + 0x18));
  }
  if (iVar8 < 0) {
    local_d0 = local_b8;
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_b8[2] = 0;
    local_b8[3] = 0;
    local_d8 = (int *)0x0;
    FUN_145763094(iVar8,&DAT_14a3502ae,
                  ".\\Runtime/D3D12RHI/Private/Windows/WindowsD3D12Viewport.cpp",0xb4);
  }
  puVar5 = (undefined8 *)*plVar2;
  if (puVar5 != (undefined8 *)0x0) {
    plVar11 = *(longlong **)(param_1 + 0x38);
    if (plVar11 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      (**(code **)(*plVar11 + 0x10))();
    }
    (**(code **)*puVar5)(puVar5,&DAT_14a3538a8,(undefined8 *)(param_1 + 0x38));
    puVar5 = *(undefined8 **)(param_1 + 0x30);
    plVar11 = *(longlong **)(param_1 + 0x40);
    if (plVar11 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
      (**(code **)(*plVar11 + 0x10))();
    }
    (**(code **)*puVar5)(puVar5,&DAT_14a3452d8,(undefined8 *)(param_1 + 0x40));
    puVar5 = *(undefined8 **)(param_1 + 0x30);
    plVar11 = *(longlong **)(param_1 + 0x48);
    if (plVar11 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x48) = 0;
      (**(code **)(*plVar11 + 0x10))();
    }
    (**(code **)*puVar5)(puVar5,&DAT_14a3538b8,(undefined8 *)(param_1 + 0x48));
  }
LAB_1415ceb7b:
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca778c0);
  (**(code **)(*plVar1 + 0x40))(plVar1,*(undefined8 *)(param_1 + 0x18),1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca778c0);
  local_d8 = (int *)CONCAT71(local_d8._1_7_,*(undefined1 *)(param_1 + 0x28));
  FUN_14317e0b4(param_1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                *(undefined1 *)(param_1 + 0x29));
  PostMessageW(*(HWND *)(param_1 + 0x18),0xf,0,0);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1415ce9a4:
  plVar2 = DAT_14ca776e0;
  if ((DAT_14ca776f0 == '\0') && (DAT_14ca776f0 = '\x01', DAT_14ca776e0 != (longlong *)0x0)) {
    uVar10 = (**(code **)(*plVar11 + 8))(plVar11);
    bVar6 = false;
    (**(code **)(*plVar2 + 0x98))(plVar2,uVar10,0xd000000,0);
  }
  else {
    bVar6 = false;
  }
  goto LAB_1415ce8a9;
}



// FUNCTION 1415cecbb FUN_1415cecbb body=370 status=ok
// SIG undefined FUN_1415cecbb(void)

uint FUN_1415cecbb(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar3 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4);
  uVar4 = uVar3 >> 0xd ^ -uVar3;
  uVar5 = uVar4 << 8 ^ (-0x61c88647 - uVar3) - uVar4;
  uVar6 = uVar5 >> 0xd ^ (uVar3 - uVar4) - uVar5;
  uVar3 = uVar6 >> 0xc ^ (uVar4 - uVar5) - uVar6;
  uVar4 = uVar3 << 0x10 ^ (uVar5 - uVar6) - uVar3;
  uVar6 = uVar4 >> 5 ^ (uVar6 - uVar3) - uVar4;
  uVar7 = uVar6 >> 3 ^ (uVar3 - uVar4) - uVar6;
  uVar5 = uVar7 << 10 ^ (uVar4 - uVar6) - uVar7;
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar4 = (uint)uVar2 & 0xffff;
  uVar3 = ((uint)uVar2 << 0x10 | uVar4) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4);
  uVar4 = uVar3 >> 0xd ^ (uVar5 >> 0xf ^ uVar6 - (uVar7 + uVar5)) - uVar3;
  uVar6 = uVar4 << 8 ^ (-0x61c88647 - uVar3) - uVar4;
  uVar5 = uVar6 >> 0xd ^ (uVar3 - uVar4) - uVar6;
  uVar3 = uVar5 >> 0xc ^ (uVar4 - uVar6) - uVar5;
  uVar4 = uVar3 << 0x10 ^ (uVar6 - uVar5) - uVar3;
  uVar6 = uVar4 >> 5 ^ (uVar5 - uVar3) - uVar4;
  uVar5 = uVar6 >> 3 ^ (uVar3 - uVar4) - uVar6;
  uVar3 = uVar5 << 10 ^ (uVar4 - uVar6) - uVar5;
  return uVar3 >> 0xf ^ uVar6 - (uVar5 + uVar3);
}



// FUNCTION 1415cee2e FUN_1415cee2e body=248 status=ok
// SIG undefined FUN_1415cee2e(void)

longlong * FUN_1415cee2e(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145fcb062();
  local_48 = param_3;
  local_40 = param_4;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_30,param_2,DAT_14c9e9060);
  *param_1 = local_30;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
    if (local_30 != 0) {
      LOCK();
      puVar1 = (uint *)(local_30 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_30 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_30 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_30;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1415cef28 FUN_1415cef28 body=1821 status=ok
// SIG undefined FUN_1415cef28(void)

void FUN_1415cef28(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_68;
  code *local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  lVar9 = DAT_14cb259f8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((DAT_14cb259f8 == 0) || (*param_4 == *(char *)(param_1 + 0x30))) {
    if (DAT_14cb253f8 == (longlong *)0x0) {
      local_a0 = &local_60;
      local_60 = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_147f6f09d;
      local_b0 = &LAB_146201c25;
      local_b8 = &DAT_149e063b2;
      local_c0 = 0;
      local_c8 = 0x10000006;
      local_d0 = 8;
      local_d8 = 0x480;
      FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
    }
    if (DAT_14cb253f8[0x22] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
    }
    goto LAB_1415cef81;
  }
  FUN_1465466f2(&local_60,param_4);
  if (local_58 == 0) {
    uVar6 = FUN_140067708();
    local_58 = FUN_14477b664(uVar6);
  }
  if (local_50 == 0) {
    if ((((local_58 != 0) && (local_60 != (code *)0x0)) &&
        (plVar2 = *(longlong **)(local_58 + 0xb8), plVar2 != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 != '\0')) {
      uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
      local_50 = FUN_144aff482(uVar6,&local_60);
      if (local_50 != 0) goto LAB_1415cf360;
    }
  }
  else {
LAB_1415cf360:
    local_68 = local_50;
    if (local_58 == 0) {
      uVar6 = FUN_140067708();
      local_58 = FUN_14477b664(uVar6);
      local_68 = local_50;
      if (((local_50 == 0) && (local_68 = 0, local_58 != 0)) && (local_60 != (code *)0x0)) {
        plVar2 = *(longlong **)(local_58 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
          local_68 = 0;
          local_50 = local_68;
        }
        else {
          uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
          local_68 = FUN_144aff482(uVar6,&local_60);
          local_50 = local_68;
        }
      }
    }
    FUN_140942716(&local_68);
    FUN_145f888b2(lVar9,&local_68);
    if ((local_68 != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(local_68 + 0x50));
    }
  }
  cVar4 = *param_4;
  plVar2 = (longlong *)(param_1 + 0x48);
  cVar5 = FUN_144904448(plVar2);
  if (cVar4 == '\x05') {
    if (cVar5 == '\0') {
      if (DAT_14cb253f8 == (longlong *)0x0) {
        local_60 = FUN_1449e2820;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_14081d0ea;
        local_a8 = &LAB_147f6f09d;
        local_b0 = &LAB_146201c25;
        local_b8 = &DAT_149e063b2;
        local_c0 = 0;
        local_c8 = 0x10000006;
        local_d0 = 8;
        local_d8 = 0x480;
        local_a0 = &local_60;
        FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
      }
      plVar2 = DAT_14cb253f8;
      lVar8 = DAT_14cb253f8[0x22];
      if (lVar8 == 0) {
        (**(code **)(*DAT_14cb253f8 + 1000))(DAT_14cb253f8);
        lVar8 = plVar2[0x22];
        if (lVar8 == 0) goto LAB_1415cf34e;
      }
      lVar7 = *(longlong *)(lVar8 + 0x408);
      if (lVar7 == 0) {
        uVar6 = FUN_140067708();
        lVar7 = FUN_14477b664(uVar6);
        *(longlong *)(lVar8 + 0x408) = lVar7;
      }
      plVar2 = (longlong *)(lVar8 + 0x400);
      if (*(longlong *)(lVar8 + 0x410) == 0) {
        if ((lVar7 != 0) && (*plVar2 != 0)) {
          plVar10 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar10 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar4 == '\0')) {
            *(undefined8 *)(lVar8 + 0x410) = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar10 + 0x110))(plVar10);
            lVar7 = FUN_144aff482(uVar6,plVar2);
            *(longlong *)(lVar8 + 0x410) = lVar7;
            if (lVar7 != 0) goto LAB_1415cf111;
          }
        }
      }
      else {
LAB_1415cf111:
        plVar10 = *(longlong **)(lVar9 + 0xa0);
        if (plVar10 != (longlong *)0x0) {
          *(int *)(plVar10 + 0x21) = (int)plVar10[0x21] + 1;
          local_d8 = 0;
          FUN_14071ab80(plVar10,&local_60,plVar2,param_1);
          *(code **)(param_1 + 0x48) = local_60;
          *(longlong *)(param_1 + 0x50) = local_58;
          lVar9 = local_50;
LAB_1415cf238:
          *(longlong *)(param_1 + 0x58) = lVar9;
          goto LAB_1415cf324;
        }
      }
    }
  }
  else if (cVar5 != '\0') {
    plVar10 = (longlong *)*plVar2;
    if (((plVar10 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x50) == -1)) ||
       (*plVar10 != *(longlong *)(param_1 + 0x50))) {
      plVar10 = (longlong *)0x0;
    }
    else {
      *(int *)(plVar10 + 0x21) = (int)plVar10[0x21] + 1;
    }
    if (DAT_14cb253f8 == (longlong *)0x0) {
      local_60 = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_147f6f09d;
      local_b0 = &LAB_146201c25;
      local_b8 = &DAT_149e063b2;
      local_c0 = 0;
      local_c8 = 0x10000006;
      local_d0 = 8;
      local_d8 = 0x480;
      local_a0 = &local_60;
      FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
    }
    plVar1 = DAT_14cb253f8;
    lVar9 = DAT_14cb253f8[0x22];
    if (lVar9 == 0) {
      (**(code **)(*DAT_14cb253f8 + 1000))(DAT_14cb253f8);
      lVar9 = plVar1[0x22];
    }
    if ((plVar10 != (longlong *)0x0) && (lVar9 != 0)) {
      lVar8 = *(longlong *)(lVar9 + 0x420);
      if (lVar8 == 0) {
        uVar6 = FUN_140067708();
        lVar8 = FUN_14477b664(uVar6);
        *(longlong *)(lVar9 + 0x420) = lVar8;
      }
      plVar1 = (longlong *)(lVar9 + 0x418);
      if (*(longlong *)(lVar9 + 0x428) != 0) {
LAB_1415cf202:
        local_d8 = 0;
        FUN_14071ab80(plVar10,&local_80,plVar1,param_1);
        lVar9 = 0;
        local_80 = 0;
        local_78 = 0xffffffffffffffff;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
        goto LAB_1415cf238;
      }
      if ((lVar8 != 0) && (*plVar1 != 0)) {
        plVar3 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
          *(undefined8 *)(lVar9 + 0x428) = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar8 = FUN_144aff482(uVar6,plVar1);
          *(longlong *)(lVar9 + 0x428) = lVar8;
          if (lVar8 != 0) goto LAB_1415cf202;
        }
      }
    }
    FUN_14072d42a(plVar2,0x40a00000);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x58) = 0;
    if (plVar10 != (longlong *)0x0) {
LAB_1415cf324:
      *(int *)(plVar10 + 0x21) = (int)plVar10[0x21] + -1;
      if (((int)plVar10[0x26] < 1) && (FUN_1400847bc(plVar10 + 0x17,0), (int)plVar10[0x21] == 0)) {
        FUN_140087e46(plVar10);
        if (*plVar10 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_1415cf34e;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar10);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar10);
        }
      }
    }
  }
LAB_1415cf34e:
  *(char *)(param_1 + 0x30) = *param_4;
LAB_1415cef81:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415cf666 FUN_1415cf666 body=242 status=ok
// SIG undefined FUN_1415cf666(void)

longlong * FUN_1415cf666(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_145fa089e();
  local_30 = 1;
  local_38 = param_3;
  (**(code **)(*DAT_14ca83900 + 0x138))
            (DAT_14ca83900,&local_28,param_2,*(undefined8 *)(lVar4 + 0x48));
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = local_28;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar8 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar8) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar8);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar8 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar8) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar8);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1415cf75a FUN_1415cf75a body=296 status=ok
// SIG undefined FUN_1415cf75a(void)

void FUN_1415cf75a(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 *local_58;
  undefined4 local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = FUN_1415b1ce8();
  if (0x18 < iVar2) {
    lVar3 = FUN_1414354ce(param_1);
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x48), lVar3 != 0)) {
      lVar4 = FUN_140b7066c();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) {
        uVar1 = *(undefined8 *)(param_1 + 0x38);
        iVar2 = *(int *)(param_1 + 0x30);
        lVar4 = FUN_140d75dd6(uVar1,iVar2);
        uVar5 = 0;
        if (lVar4 != 0) {
          uVar5 = *(undefined4 *)(lVar4 + 0x14);
        }
        lVar4 = FUN_1400b465c(uVar1);
        uVar6 = 1;
        if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x40))) {
          lVar4 = **(longlong **)(lVar4 + 0x38);
          if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
            FUN_14689c22e(lVar4);
          }
          else if (lVar4 == 0) goto LAB_1415cf837;
          if (*(int *)(lVar4 + 0xe0) == iVar2) {
            uVar6 = 0;
          }
        }
LAB_1415cf837:
        local_58 = &LAB_145c6a3fc;
        local_50 = 0;
        FUN_146581978(local_48,param_1);
        local_68 = uVar6;
        FUN_1465832c0(lVar3,*(undefined4 *)(param_1 + 0x30),uVar5,local_48);
        goto LAB_1415cf7bc;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
LAB_1415cf7bc:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415cf884 FUN_1415cf884 body=272 status=ok
// SIG undefined FUN_1415cf884(void)

undefined8 FUN_1415cf884(longlong param_1,uint param_2,undefined1 *param_3,char param_4)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined *puVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar4 = (ulonglong)param_2 + 1;
  do {
    uVar1 = 1;
    if (uVar4 == 1) {
      return 1;
    }
    uVar8 = uVar4 - 1;
    lVar9 = uVar4 * 2;
    uVar4 = uVar8;
  } while (*(short *)(param_1 + -4 + lVar9) == 0x3d);
  if (((uint)uVar8 & 3) == 1) {
LAB_1415cf990:
    uVar1 = 0;
  }
  else {
    puVar5 = &DAT_149e27230;
    if (param_4 == '\x01') {
      puVar5 = &DAT_149e271b0;
    }
    lVar9 = param_1;
    if (3 < uVar8) {
      do {
        param_1 = lVar9 + 8;
        lVar6 = 0;
        uVar10 = 0;
        do {
          uVar4 = (ulonglong)*(ushort *)(lVar9 + lVar6 * 2);
          if ((0x7f < uVar4) || ((byte)puVar5[uVar4] == 0xff)) goto LAB_1415cf990;
          uVar3 = uVar10 << 6;
          uVar10 = (byte)puVar5[uVar4] | uVar3;
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 != 4);
        param_3[2] = (char)uVar10;
        param_3[1] = (char)(uVar3 >> 8);
        *param_3 = (char)(uVar3 >> 0x10);
        param_3 = param_3 + 3;
        uVar10 = (int)uVar8 - 4;
        uVar8 = (ulonglong)uVar10;
        lVar9 = param_1;
      } while (3 < uVar10);
    }
    iVar7 = (int)uVar8;
    if (iVar7 != 0) {
      lVar9 = 0;
      uVar10 = 0;
      do {
        uVar4 = (ulonglong)*(ushort *)(param_1 + lVar9 * 2);
        if ((0x7f < uVar4) || ((byte)puVar5[uVar4] == 0xff)) goto LAB_1415cf990;
        uVar10 = uVar10 << 6 | (uint)(byte)puVar5[uVar4];
        lVar9 = lVar9 + 1;
      } while (iVar7 != (int)lVar9);
      iVar2 = 4;
      do {
        uVar10 = uVar10 << 6;
        iVar2 = iVar2 + -1;
      } while (iVar7 != iVar2);
      if (iVar7 == 3) {
        param_3[1] = (char)(uVar10 >> 8);
      }
      *param_3 = (char)(uVar10 >> 0x10);
    }
  }
  return uVar1;
}



// FUNCTION 1415cf994 FUN_1415cf994 body=614 status=ok
// SIG undefined FUN_1415cf994(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415cf994(longlong param_1,ulonglong *param_2,undefined8 *param_3)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  undefined1 auStack_78 [40];
  ulonglong local_50 [2];
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = ram0x00014cb7bde4;
  if ((ram0x00014cb7bde4 == DAT_14c948034) &&
     (uVar4 = DAT_14c948034, (int)DAT_14cb7bde0 != DAT_14c948030)) {
    FUN_14011791e(local_50,(int)DAT_14cb7bde0,ram0x00014cb7bde4 >> 0x20);
    unique0x00023e00 = local_50[0];
    uVar4 = local_50[0];
  }
  uVar2 = *param_2;
  if (uVar2 == uVar4) {
    FUN_1407eda54(*param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  uVar4 = _DAT_14cb7bdcc;
  if ((_DAT_14cb7bdcc == DAT_14c948034) && (uVar4 = DAT_14c948034, DAT_14cb7bdc8 != DAT_14c948030))
  {
    FUN_14011791e(local_50,DAT_14cb7bdc8,_DAT_14cb7bdcc >> 0x20);
    _DAT_14cb7bdcc = local_50[0];
    uVar2 = *param_2;
    uVar4 = local_50[0];
  }
  if (uVar2 == uVar4) {
LAB_1415cfba7:
    cVar1 = FUN_1407eda54(*param_3);
    if (cVar1 == '\0') goto LAB_1415cfa49;
    puVar3 = (ulonglong *)FUN_144a8232a(&DAT_14cb7bdc8);
    FUN_14152b6d4(param_1 + -0x4a0,*param_2 == *puVar3);
    puVar3 = &local_40;
    local_40 = DAT_14cb7c580;
    local_38 = *param_2;
    puVar5 = local_50;
    FUN_1401533ba(puVar5,&local_38,1);
  }
  else {
    uVar4 = DAT_14cb7941c;
    if ((DAT_14cb7941c == DAT_14c948034) && (uVar4 = DAT_14c948034, DAT_14cb79418 != DAT_14c948030))
    {
      FUN_14011791e(local_50,DAT_14cb79418,DAT_14cb7941c >> 0x20);
      DAT_14cb7941c = local_50[0];
      uVar2 = *param_2;
      uVar4 = local_50[0];
    }
    if (uVar2 == uVar4) goto LAB_1415cfba7;
    uVar4 = DAT_14cb79464;
    if ((DAT_14cb79464 == DAT_14c948034) && (uVar4 = DAT_14c948034, DAT_14cb79460 != DAT_14c948030))
    {
      FUN_14011791e(local_50,DAT_14cb79460,DAT_14cb79464 >> 0x20);
      DAT_14cb79464 = local_50[0];
      uVar2 = *param_2;
      uVar4 = local_50[0];
    }
    if ((uVar2 != uVar4) || (cVar1 = FUN_1407eda54(*param_3), cVar1 == '\0')) goto LAB_1415cfa49;
    FUN_14607a2f2(param_1 + -0x4a0);
    puVar3 = local_50;
    local_50[0] = DAT_14cb7c580;
    puVar5 = (ulonglong *)&DAT_14cb79460;
  }
  FUN_140bfca4e(param_1 + 0x80,puVar5,puVar3,0);
LAB_1415cfa49:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415cfc10 FUN_1415cfc10 body=145 status=ok
// SIG undefined FUN_1415cfc10(void)

longlong * FUN_1415cfc10(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = (int)*param_2;
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  *param_2 = (longlong)local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415cfca2 FUN_1415cfca2 body=914 status=ok
// SIG undefined FUN_1415cfca2(void)

ulonglong FUN_1415cfca2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined ***pppuVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_120;
  undefined2 *local_110;
  int local_108;
  longlong local_100;
  longlong *local_f8;
  undefined1 local_f0;
  longlong local_e8;
  longlong *plStack_e0;
  undefined1 local_d8;
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  longlong lStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  LOCK();
  uVar3 = *(uint *)(param_1 + 0x440);
  *(uint *)(param_1 + 0x440) = 0;
  uVar10 = (ulonglong)uVar3;
  UNLOCK();
  if (*(longlong *)(param_1 + 0x240) != 0) goto LAB_1415cfcd7;
  uVar8 = FUN_1405d8a54(0);
  *(undefined8 *)(param_1 + 0x240) = uVar8;
  local_c8 = 0;
  local_b8 = (longlong *)0x0;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_14b3f0110;
  local_88 = FUN_143ccd4fe;
  lStack_60 = param_1;
  FUN_14170b918(&local_e8);
  plVar12 = plStack_e0;
  lVar4 = local_e8;
  local_d8 = 1;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar8 = FUN_14118da1c();
      bVar6 = FUN_14054d46e(uVar8,L"nothreading");
      DAT_14c83f0f8 = bVar6 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    pcVar5 = local_88;
    if (DAT_14c83f0f8 == 1) goto LAB_1415cfdb9;
    pppuVar11 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar11 = &local_68;
    }
    uVar8 = (*(code *)(*pppuVar11)[1])();
    (*pcVar5)(uVar8);
    *(undefined4 *)(local_e8 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
LAB_1415cfdb9:
    FUN_145c3b830(&local_100);
    puVar9 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    local_f0 = 1;
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
      UNLOCK();
    }
    *puVar9 = TAsyncRunnable<void>::vftable;
    puVar9[2] = local_88;
    puVar9[4] = local_78;
    local_78 = (undefined ***)0x0;
    *(undefined4 *)(puVar9 + 8) = local_58;
    *(undefined4 *)((longlong)puVar9 + 0x44) = uStack_54;
    *(undefined4 *)(puVar9 + 9) = uStack_50;
    *(undefined4 *)((longlong)puVar9 + 0x4c) = uStack_4c;
    puVar9[6] = local_68;
    puVar9[7] = lStack_60;
    if (local_88 != (code *)0x0) {
      local_88 = (code *)0x0;
    }
    puVar9[10] = local_e8;
    puVar9[0xb] = plStack_e0;
    local_e8 = 0;
    plStack_e0 = (longlong *)0x0;
    *(undefined1 *)(puVar9 + 0xc) = 0;
    puVar9[0xd] = local_100;
    puVar9[0xe] = local_f8;
    uVar7 = FUN_146268020();
    FUN_140002266(&local_110,L"TAsyncThread %d",uVar7);
    puVar13 = local_110;
    if (local_108 == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    local_120 = 0;
    local_128 = 0xffffffffffffffff;
    uVar8 = FUN_1411b1052(puVar9,puVar13,0,2);
    *(undefined8 *)(local_100 + 0x80) = uVar8;
    FUN_140b576f0();
    if (local_110 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_f8)(local_f8);
        LOCK();
        piVar2 = (int *)((longlong)local_f8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_f8 + 0x10))(local_f8);
        }
      }
    }
  }
  plVar1 = plStack_e0;
  local_100 = lVar4;
  local_f8 = plVar12;
  if (plStack_e0 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_e0 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plStack_e0)(plStack_e0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_88 != (code *)0x0) {
    pppuVar11 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar11 = local_78;
    }
    (*(code *)(*pppuVar11)[2])(pppuVar11);
  }
  if (local_c8 != 0) {
    plVar12 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar12 = local_a8;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  uVar10 = FUN_14614a64a(param_1 + 0x448,&local_100);
  plVar12 = local_f8;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      uVar10 = (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        uVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  *(int *)(param_1 + 0x458) = *(int *)(param_1 + 0x458) + 1;
LAB_1415cfcd7:
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 1415d0036 FUN_1415d0036 body=304 status=ok
// SIG undefined FUN_1415d0036(void)

void FUN_1415d0036(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x1c8) != 0) && (*(longlong *)(param_1 + 0x1d0) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x1d0) + 8))) {
    FUN_1401cb356();
    local_20 = *(undefined8 *)(param_1 + 0x1c8);
    local_18 = *(longlong *)(param_1 + 0x1d0);
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 0xc) = *(int *)(local_18 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_20);
    plVar2 = *(longlong **)(param_1 + 0x1d0);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
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
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_14480f766(&DAT_14cbd0b78);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
  }
  if (*(longlong *)(param_1 + 0x308) != 0) {
    plVar2 = (longlong *)FUN_1458b3986(param_1);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0xe8))(plVar2);
      if (*(longlong *)(param_1 + 0x308) != 0) {
        FUN_14480f766(uVar3);
      }
    }
    *(undefined8 *)(param_1 + 0x308) = 0;
  }
  if (*(longlong *)(param_1 + 0x360) != 0) {
    FUN_14480f766(&DAT_14c9647a0);
    *(undefined8 *)(param_1 + 0x360) = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_148da6758(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d0168 FUN_1415d0168 body=323 status=ok
// SIG undefined FUN_1415d0168(void)

void FUN_1415d0168(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(longlong *)(param_1 + 0x608) != 0) && (*(longlong *)(param_1 + 0x610) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x610) + 8))) {
    *(undefined4 *)(param_1 + 0x618) = 0;
    FUN_14127b1cd(*(undefined8 *)(param_1 + 0x5f8),*(undefined4 *)(param_1 + 0x600));
    *(undefined4 *)(param_1 + 0x600) = 0;
    if (*(int *)(param_1 + 0x604) != 0) {
      FUN_1459b6c3c(param_1 + 0x5f8,0);
    }
    FUN_1401cb356();
    local_28 = *(undefined8 *)(param_1 + 0x608);
    local_20 = *(longlong *)(param_1 + 0x610);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    plVar2 = *(longlong **)(param_1 + 0x610);
    *(undefined8 *)(param_1 + 0x608) = 0;
    *(undefined8 *)(param_1 + 0x610) = 0;
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
  if (((*(char *)(param_1 + 0x21) == '\x01') && (*(longlong *)(param_1 + 0x38) != 0)) &&
     ((lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30), lVar3 != 0 &&
      ((lVar3 = *(longlong *)(lVar3 + 0x360), lVar3 != 0 && (*(longlong *)(lVar3 + 0x1f0) != 0))))))
  {
    lVar3 = FUN_140cb14ac();
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
      FUN_146584316(lVar3);
      *(undefined1 *)(lVar3 + 0x20) = 0;
      *(undefined8 *)(lVar3 + 0x18) = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d02ac FUN_1415d02ac body=694 status=ok
// SIG undefined FUN_1415d02ac(void)

void FUN_1415d02ac(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  int local_70;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140457ffc(&DAT_14cb717f8,param_1);
  FUN_140457ffc(&DAT_14cbd0b78,param_1);
  FUN_140457ffc(&DAT_14cbd0b18,param_1);
  FUN_14101cf30(param_1,&local_78);
  lVar8 = local_78;
  lVar11 = (longlong)local_70;
  if (lVar11 == 0) {
    local_70 = 0;
  }
  else {
    lVar10 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar8 + lVar10);
      if (*(int *)((longlong)puVar3 + 0x14) == 0) {
        local_88 = *puVar3;
        plVar4 = (longlong *)puVar3[1];
        local_80 = plVar4;
        if (plVar4 == (longlong *)0x0) {
          uVar7 = FUN_145ce2ae6(param_1,&local_88);
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          uVar7 = FUN_145ce2ae6(param_1,&local_88);
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
        FUN_145cc76be(param_1,uVar7);
        FUN_148daa36a(param_1,uVar7);
      }
      lVar10 = lVar10 + 0x10;
    } while (lVar11 * 0x10 != lVar10);
  }
  FUN_14101cee4(local_78,local_70);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (((*(int *)(param_1 + 0x770) != 0) && (*(longlong **)(param_1 + 0x768) != (longlong *)0x0)) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x768) + 0x30))(), cVar6 != '\0')) {
    if ((*(longlong *)(param_1 + 0x38) == 0) ||
       (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30), lVar8 == 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar8 + 0x360);
    }
    if ((*(int *)(param_1 + 0x770) == 0) ||
       (plVar4 = *(longlong **)(param_1 + 0x768), plVar4 == (longlong *)0x0)) {
      local_90 = 0;
    }
    else {
      (**(code **)(*plVar4 + 0x38))(plVar4,&local_90);
    }
    FUN_144928b90(&local_78,2);
    local_88 = DAT_14cbca650;
    local_80 = (longlong *)CONCAT44(local_80._4_4_,DAT_14cbca658);
    FUN_144928d62(local_68,1);
    uVar5 = local_90;
    lVar8 = FUN_140149a73(uVar9,0);
    if (lVar8 != 0) {
      FUN_140825b72(&local_78,uVar5,lVar8,0);
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar8 = FUN_140b64196();
    if (lVar8 != 0) {
      FUN_140457ffc(lVar8 + 0x1f0,param_1);
    }
    lVar8 = *(longlong *)(param_1 + 0x38);
    if (lVar8 != 0) {
      lVar11 = FUN_1403ca142();
      if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
        if (*(longlong *)(param_1 + 0x878) != 0) {
          FUN_14480f766(lVar8 + 0x668);
        }
        *(undefined8 *)(param_1 + 0x878) = 0;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415d0564 FUN_1415d0564 body=258 status=ok
// SIG undefined FUN_1415d0564(void)

void FUN_1415d0564(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5af80) {
    FUN_144b3d300(&DAT_14ca5af80);
    if (DAT_14ca5af80 == -1) {
      FUN_14607b75a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShadowProjectionPassParameters";
      local_38 = 0;
      local_50 = 0x200;
      local_58 = 0x477;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5af00,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143068808);
      _Init_thread_footer(&DAT_14ca5af80);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d0667 FUN_1415d0667 body=1004 status=ok
// SIG undefined FUN_1415d0667(void)

void FUN_1415d0667(longlong param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  void *pvVar5;
  void *pvVar6;
  longlong *plVar7;
  uint uVar8;
  void *_Src;
  int iVar9;
  void *pvVar10;
  void *_Src_00;
  void *pvVar11;
  void *pvVar12;
  float fVar13;
  undefined1 auStack_608 [40];
  longlong *local_5e0;
  void *local_5d8;
  int local_5cc;
  void *local_5c8;
  void *local_5c0;
  longlong local_5b8;
  longlong local_5b0;
  undefined4 local_5a8 [190];
  undefined1 local_2b0 [616];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_608;
  if (1 < (int)param_2) {
    memset(local_5a8,0,0x2f0);
    local_5b0 = (ulonglong)param_2 * 0x268 + param_1 + -0x268;
    local_5b8 = param_1;
    fVar13 = logf((float)(int)param_2);
    local_5a8[0] = (int)(longlong)(fVar13 + fVar13);
    plVar1 = param_4 + 4;
    plVar7 = &local_5b8;
    do {
      pvVar6 = (void *)*plVar7;
      pvVar10 = (void *)plVar7[1];
      iVar9 = (int)plVar7[2];
      uVar8 = (int)((ulonglong)((longlong)pvVar10 - (longlong)pvVar6) >> 3) * 0x3f2b3885 + 1;
      _Src = pvVar6;
      _Src_00 = pvVar10;
      pvVar12 = pvVar6;
      if (iVar9 != 0) {
LAB_1415d0717:
        local_5e0 = plVar7;
        if (8 < (int)uVar8) {
          pvVar12 = (void *)((ulonglong)(uVar8 >> 1) * 0x268 + (longlong)_Src);
          local_5cc = iVar9;
          local_5c8 = pvVar6;
          local_5c0 = pvVar10;
          memcpy(local_2b0,pvVar12,0x268);
          memcpy(pvVar12,_Src,0x268);
          memcpy(_Src,local_2b0,0x268);
          pvVar6 = (void *)((longlong)_Src_00 + 0x268);
          pvVar12 = _Src;
          do {
            pvVar10 = (void *)((longlong)pvVar12 + 0x268);
            pvVar11 = (void *)((longlong)pvVar12 + 0x268);
            do {
              pvVar12 = pvVar11;
              pvVar5 = pvVar10;
              if (_Src_00 < pvVar12) break;
              pcVar2 = (code *)*param_4;
              plVar7 = (longlong *)param_4[2];
              if ((longlong *)param_4[2] == (longlong *)0x0) {
                plVar7 = plVar1;
              }
              uVar4 = (**(code **)(*plVar7 + 8))();
              cVar3 = (*pcVar2)(uVar4,_Src,pvVar12);
              pvVar10 = (void *)((longlong)pvVar5 + 0x268);
              pvVar11 = (void *)((longlong)pvVar12 + 0x268);
            } while (cVar3 == '\0');
            pvVar10 = (void *)((longlong)pvVar6 + -0x4d0);
            local_5d8 = pvVar5;
            do {
              pvVar11 = pvVar6;
              pvVar5 = pvVar10;
              pvVar6 = (void *)((longlong)pvVar11 + -0x268);
              if (pvVar6 <= _Src) break;
              pcVar2 = (code *)*param_4;
              plVar7 = (longlong *)param_4[2];
              if ((longlong *)param_4[2] == (longlong *)0x0) {
                plVar7 = plVar1;
              }
              uVar4 = (**(code **)(*plVar7 + 8))();
              cVar3 = (*pcVar2)(uVar4,pvVar6,_Src);
              pvVar10 = (void *)((longlong)pvVar5 + -0x268);
            } while (cVar3 == '\0');
            if (pvVar6 < pvVar12) goto LAB_1415d095c;
            memcpy(local_2b0,pvVar12,0x268);
            memcpy(pvVar12,pvVar6,0x268);
            memcpy(pvVar6,local_2b0,0x268);
          } while( true );
        }
        for (; plVar7 = local_5e0, pvVar10 = _Src, pvVar6 = _Src, _Src < _Src_00;
            _Src_00 = (void *)((longlong)_Src_00 + -0x268)) {
          while (pvVar12 = pvVar10, pvVar6 = (void *)((longlong)pvVar6 + 0x268), pvVar6 <= _Src_00)
          {
            pcVar2 = (code *)*param_4;
            plVar7 = (longlong *)param_4[2];
            if ((longlong *)param_4[2] == (longlong *)0x0) {
              plVar7 = plVar1;
            }
            uVar4 = (**(code **)(*plVar7 + 8))();
            cVar3 = (*pcVar2)(uVar4,pvVar12,pvVar6);
            pvVar10 = pvVar6;
            if (cVar3 == '\0') {
              pvVar10 = pvVar12;
            }
          }
          memcpy(local_2b0,pvVar12,0x268);
          memcpy(pvVar12,_Src_00,0x268);
          memcpy(_Src_00,local_2b0,0x268);
        }
        goto LAB_1415d08b7;
      }
LAB_1415d0a04:
      FUN_148eb7a57(pvVar12,uVar8,0,param_4);
LAB_1415d08b7:
      plVar7 = plVar7 + -3;
    } while (&local_5b8 <= plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_608) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1415d095c:
  memcpy(local_2b0,_Src,0x268);
  memcpy(_Src,pvVar6,0x268);
  memcpy(pvVar6,local_2b0,0x268);
  iVar9 = local_5cc + -1;
  pvVar11 = (void *)((longlong)pvVar11 + -0x4d0);
  if ((longlong)pvVar5 - (longlong)local_5c8 < (longlong)local_5c0 - (longlong)local_5d8) {
    if (pvVar12 < _Src_00) {
      *local_5e0 = (longlong)pvVar12;
      local_5e0[1] = (longlong)_Src_00;
      *(int *)(local_5e0 + 2) = iVar9;
      local_5e0 = local_5e0 + 3;
    }
    pvVar12 = _Src;
    plVar7 = local_5e0;
    _Src_00 = pvVar5;
    if (pvVar6 <= (void *)((longlong)_Src + 0x268U)) goto LAB_1415d08b7;
  }
  else {
    plVar7 = local_5e0;
    if ((void *)((longlong)_Src + 0x268U) < pvVar6) {
      *local_5e0 = (longlong)_Src;
      local_5e0[1] = (longlong)pvVar11;
      *(int *)(local_5e0 + 2) = iVar9;
      plVar7 = local_5e0 + 3;
    }
    pvVar11 = _Src_00;
    _Src = local_5d8;
    if (_Src_00 <= pvVar12) goto LAB_1415d08b7;
  }
  local_5d8 = _Src;
  uVar8 = (int)((ulonglong)((longlong)_Src_00 - (longlong)local_5d8) >> 3) * 0x3f2b3885 + 1;
  pvVar6 = local_5d8;
  _Src = pvVar12;
  pvVar10 = _Src_00;
  _Src_00 = pvVar11;
  if (iVar9 == 0) goto LAB_1415d0a04;
  goto LAB_1415d0717;
}



// FUNCTION 1415d0a54 FUN_1415d0a54 body=281 status=ok
// SIG undefined FUN_1415d0a54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d0a54(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca30a28) {
    FUN_144b3d300(&DAT_14ca30a28);
    if (DAT_14ca30a28 == -1) {
      FUN_14607c4dc();
      FUN_140db5666(&DAT_14ca30980,0,&DAT_14ca30918,L"FTonemapVS",
                    L"/Engine/Private/PostProcessTonemap.usf",L"MainVS",0,1,FUN_14729a4d4,
                    FUN_14729a474,&LAB_14729a470,&LAB_14729a46c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca30980 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f0be41);
      _Init_thread_footer(&DAT_14ca30a28);
    }
  }
  return &DAT_14ca30980;
}



// FUNCTION 1415d0b6e FUN_1415d0b6e body=281 status=ok
// SIG undefined FUN_1415d0b6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d0b6e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caad560) {
    FUN_144b3d300(&DAT_14caad560);
    if (DAT_14caad560 == -1) {
      FUN_14607c770();
      FUN_140db5666(&DAT_14caad4b8,0,&DAT_14caad450,L"FSlateElementVS",
                    L"/Engine/Private/SlateVertexShader.usf",L"Main",0,1,FUN_14750ef7e,FUN_14750ef56
                    ,&LAB_14750ef52,&LAB_14750ef4e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0);
      _DAT_14caad4b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c5f8f);
      _Init_thread_footer(&DAT_14caad560);
    }
  }
  return &DAT_14caad4b8;
}



// FUNCTION 1415d0c88 FUN_1415d0c88 body=258 status=ok
// SIG undefined FUN_1415d0c88(void)

void FUN_1415d0c88(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6c820) {
    FUN_144b3d300(&DAT_14ca6c820);
    if (DAT_14ca6c820 == -1) {
      FUN_14607c8ba(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x378;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6c7a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14310d43f);
      _Init_thread_footer(&DAT_14ca6c820);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d0d8c FUN_1415d0d8c body=708 status=ok
// SIG undefined FUN_1415d0d8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1415d0d8c(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined *puVar6;
  undefined1 auStack_118 [40];
  undefined8 *local_f0;
  ulonglong *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar2 = *param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb38820) && (FUN_144b3d300(&DAT_14cb38820), DAT_14cb38820 == -1)) {
    local_e8 = &local_18;
    local_e0 = DAT_14cb386f0;
    local_d8 = DAT_14cb386f8;
    local_d0 = DAT_14cb38700;
    local_c8 = DAT_14cb38708;
    local_c0 = DAT_14cb38710;
    local_b8 = DAT_14cb38718;
    local_b0 = DAT_14cb38720;
    local_a8 = DAT_14cb38730;
    local_a0 = DAT_14cb38608;
    local_98 = DAT_14cb38610;
    local_90 = DAT_14cb38618;
    local_88 = DAT_14cb38620;
    local_80 = DAT_14cb38628;
    local_78 = DAT_14cb38630;
    local_70 = DAT_14cb38638;
    local_68 = DAT_14cb38640;
    local_60 = DAT_14cb38648;
    local_58 = DAT_14cb38650;
    local_50 = DAT_14cb38658;
    local_48 = DAT_14cb38660;
    local_40 = DAT_14cb38668;
    local_38 = DAT_14cb38670;
    local_30 = DAT_14cb38678;
    local_28 = DAT_14cb38680;
    local_20 = DAT_14cb38688;
    DAT_14cb387f0 = 0;
    _DAT_14cb387f8 = 0;
    DAT_14cb387d0 = 0;
    _DAT_14cb387d8 = 0;
    _DAT_14cb387fc = 0xffffffff00000080;
    DAT_14cb38804 = 0;
    DAT_14cb38810 = (undefined *)0x0;
    DAT_14cb38818 = 0;
    local_f0 = &local_e0;
    FUN_1415d1052(&DAT_14cb387d0);
    atexit(FUN_14391b75a);
    _Init_thread_footer(&DAT_14cb38820);
  }
  bVar4 = 1;
  if (DAT_14cb387d8 != DAT_14cb38804) {
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    puVar6 = &DAT_14cb38808;
    if (DAT_14cb38810 != (undefined *)0x0) {
      puVar6 = DAT_14cb38810;
    }
    for (iVar1 = *(int *)(puVar6 + (ulonglong)
                                   (DAT_14cb38818 - 1U &
                                   (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                                   (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x10 + DAT_14cb387d0 + 8)) {
      if (*(longlong *)(DAT_14cb387d0 + (longlong)iVar1 * 0x10) == lVar2) {
        bVar4 = 0;
        break;
      }
    }
  }
  *(byte *)*param_1 = *(byte *)*param_1 | bVar4;
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(char *)*param_1 == '\0');
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d1052 FUN_1415d1052 body=204 status=ok
// SIG undefined FUN_1415d1052(void)

void FUN_1415d1052(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = (int)((ulonglong)(param_2[1] - *param_2) >> 3) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_144732142(param_1,uVar4);
    if (uVar4 < 4) {
      iVar3 = 1;
    }
    else {
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
      FUN_144869b4a(param_1);
    }
  }
  lVar5 = *param_2;
  lVar1 = param_2[1];
  if (lVar5 != lVar1) {
    do {
      FUN_144a13f80(param_1,local_2c,lVar5,0);
      lVar5 = lVar5 + 8;
    } while (lVar5 != lVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d1120 FUN_1415d1120 body=523 status=ok
// SIG undefined FUN_1415d1120(void)

undefined4 FUN_1415d1120(char param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_80 [8];
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar3 = DAT_14c872e88;
  if (DAT_14c872e84 != '\x01') {
    if ((((param_1 == '\0') || (DAT_14c872df8 == 0)) || (DAT_14c872df0 == (longlong *)0x0)) ||
       (cVar2 = (**(code **)(*DAT_14c872df0 + 0x30))(), cVar2 == '\0')) {
      uVar3 = FUN_145a36572();
      FUN_14626bcb6();
      puVar5 = DAT_14c872e70;
      if (DAT_14c872e78 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      local_88 = uVar3;
      FUN_140002266(local_58,L"%s %s, NetCL: %d",&DAT_14c764000,puVar5);
      FUN_145946ebb();
      if ((longlong)DAT_14c872e28 != 0) {
        lVar7 = (longlong)DAT_14c872e28 * 0x28;
        lVar6 = DAT_14c872e20;
        do {
          uVar3 = *(undefined4 *)(lVar6 + 0x10);
          FUN_14278ffaa(lVar6,local_80);
          FUN_1400021e4(local_80,&local_78);
          puVar5 = &DAT_149dfb77a;
          if (local_70 != 0) {
            puVar5 = local_78;
          }
          FUN_140002266(&local_68,L", %s: %d",puVar5,uVar3);
          iVar1 = local_60 + -1;
          if (local_60 == 0) {
            iVar1 = 0;
          }
          FUN_1400020e8(local_58,local_68,iVar1);
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_78 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          lVar6 = lVar6 + 0x28;
          lVar7 = lVar7 + -0x28;
        } while (lVar7 != 0);
      }
      FUN_144a2b0a4(local_58,&local_68);
      puVar5 = local_68;
      if (local_60 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      DAT_14c872e88 = FUN_144a1ccda(puVar5,0);
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar3 = DAT_14c872e88;
      DAT_14c872e84 = '\x01';
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
    else {
      plVar4 = DAT_14c872df0;
      if (DAT_14c872df8 == 0) {
        plVar4 = (longlong *)0x0;
      }
      DAT_14c872e88 = (**(code **)(*plVar4 + 0x58))();
      DAT_14c872e84 = '\x01';
      uVar3 = DAT_14c872e88;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1415d132c FUN_1415d132c body=284 status=ok
// SIG undefined FUN_1415d132c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d132c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca25480) {
    FUN_144b3d300(&DAT_14ca25480);
    if (DAT_14ca25480 == -1) {
      FUN_14607f6cc();
      FUN_140db5666(&DAT_14ca253d8,1,&DAT_14ca25370,L"FScreenSpaceDecalMaterialVS",
                    L"/Engine/Private/GbxScreenSpaceDecalMaterialShaders.usf",L"MainVS",0,1,
                    FUN_1472894f4,FUN_147289494,&LAB_140a0242e,&LAB_147289490,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf8,0);
      _DAT_14ca253d8 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142eb1754);
      _Init_thread_footer(&DAT_14ca25480);
    }
  }
  return &DAT_14ca253d8;
}



// FUNCTION 1415d1448 FUN_1415d1448 body=284 status=ok
// SIG undefined FUN_1415d1448(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d1448(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca255a8) {
    FUN_144b3d300(&DAT_14ca255a8);
    if (DAT_14ca255a8 == -1) {
      FUN_14607f816();
      FUN_140db5666(&DAT_14ca25500,1,&DAT_14ca25498,L"FScreenSpaceDecalMaterialPS",
                    L"/Engine/Private/GbxScreenSpaceDecalMaterialShaders.usf",L"MainPS",3,1,
                    FUN_1472895c8,FUN_147289568,&LAB_141774244,&LAB_147289564,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf8,0);
      _DAT_14ca25500 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142eb1760);
      _Init_thread_footer(&DAT_14ca255a8);
    }
  }
  return &DAT_14ca25500;
}



// FUNCTION 1415d1564 FUN_1415d1564 body=284 status=ok
// SIG undefined FUN_1415d1564(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d1564(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca610d0) {
    FUN_144b3d300(&DAT_14ca610d0);
    if (DAT_14ca610d0 == -1) {
      FUN_146082bbe();
      FUN_140db5666(&DAT_14ca61028,1,&DAT_14ca60fc0,L"FTranslucentLightingInjectPS",
                    L"/Engine/Private/TranslucentLightInjectionShaders.usf",L"InjectMainPS",3,0x20,
                    FUN_147322c66,FUN_147322c0c,FUN_1430ac36c,&LAB_147322c08,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf8,0);
      _DAT_14ca61028 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_1430ac461);
      _Init_thread_footer(&DAT_14ca610d0);
    }
  }
  return &DAT_14ca61028;
}



// FUNCTION 1415d1680 FUN_1415d1680 body=1225 status=ok
// SIG undefined FUN_1415d1680(void)

void FUN_1415d1680(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined8 local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_14a8ca2b0;
  uVar11 = param_1[1];
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_70 = uVar11;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1415d16d2;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1415d1aaa;
      goto LAB_1415d16db;
    }
  }
  else {
LAB_1415d16d2:
    if (iVar6 != 0x10) {
LAB_1415d16db:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_1415d1aaa;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1415d1aaa;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_1415d183c;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_1434dd150);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_1415d183c:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_1415d18bc;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_1415d18bc:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14a8ca370;
        puVar16[0x15] = local_70;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a8ca310;
        local_68[0] = &LAB_14571ad52;
        local_40 = uVar11;
        FUN_14005a792(&DAT_14ca9a440,L"DeleteDynamicResolutionProxy",&DAT_14cad8214);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_1415d177a;
    }
  }
LAB_1415d1aaa:
  FUN_14571ad58(&local_70);
LAB_1415d177a:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d1b4a FUN_1415d1b4a body=561 status=ok
// SIG undefined FUN_1415d1b4a(void)

void FUN_1415d1b4a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140521134(param_1 + 0x440);
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_140872868(param_1 + 0x550);
  }
  FUN_140ce54a8(param_1 + 0xbf0,0);
  if ((*(longlong *)(param_1 + 0xb88) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x168), plVar1 != (longlong *)0x0)) {
    if (DAT_14cb223d8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_147f29feb;
      local_50 = FUN_1464384fe;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb223d8);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14cb223d8 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_147f29feb;
        local_50 = FUN_1464384fe;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb223d8);
      if ((plVar1 != plVar2) && (plVar2 != (longlong *)0x0)) {
        lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if ((lVar3 != 0) && (*(longlong *)(param_1 + 0xb88) != 0)) {
          FUN_14480f766(lVar3);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_140872622(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d1d7c FUN_1415d1d7c body=326 status=ok
// SIG undefined FUN_1415d1d7c(void)

ulonglong FUN_1415d1d7c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  longlong *plVar7;
  bool bVar8;
  
  if ((*(char *)(param_1 + 0x1fb) == '\0') && (*(longlong *)(param_1 + 0xa8) != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar7 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
      if (plVar7 == (longlong *)0x0) {
        DAT_14ca97068 = 0;
      }
      else {
        DAT_14ca97068 = (**(code **)(*plVar7 + 0x68))(plVar7);
      }
      _Init_thread_footer(&DAT_14ca97070);
    }
    lVar2 = DAT_14ca97068;
    bVar8 = true;
    cVar3 = DAT_14ca96da8;
    if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      cVar3 = '\x02';
      if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
        uVar6 = 0;
      }
      else if (iVar1 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar6 = (ulonglong)(DVar4 != DVar5);
        cVar3 = DAT_14ca96da8;
      }
      else {
        uVar6 = 1;
      }
      bVar8 = *(int *)(lVar2 + uVar6 * 4) != 0;
    }
    if ((!bVar8) || (cVar3 == '\0')) {
      uVar6 = FUN_14498f84a();
      return uVar6 ^ 1;
    }
  }
  return 0;
}



// FUNCTION 1415d1ec2 FUN_1415d1ec2 body=269 status=ok
// SIG undefined FUN_1415d1ec2(void)

void FUN_1415d1ec2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b894a60;
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x5c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x5c] + 0x10))();
  }
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  FUN_146602ffc(param_1 + 0x3a);
  FUN_140f9a609(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_1465f2eca(param_1 + 0x1b);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b473650;
  plVar2 = (longlong *)param_1[0xd];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1415d1fd0 FUN_1415d1fd0 body=494 status=ok
// SIG undefined FUN_1415d1fd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415d1fd0(void)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined4 *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0x100000000;
  local_50 = &DAT_14c997fa8;
  local_48 = 0xffffffff;
  local_40 = 0;
  if (DAT_14c997fc0 == 0) {
    uVar16 = 1;
    local_48._4_4_ = 0;
    uVar13 = 0xffffffff;
    iVar15 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    uVar16 = local_58 >> 0x20;
    uVar13 = (uint)local_48;
    iVar15 = (int)local_58;
  }
  puVar7 = local_50;
  iVar9 = local_48._4_4_;
  iVar12 = local_40;
  if (local_48._4_4_ < (int)local_50[6]) {
    do {
      plVar5 = *(longlong **)(DAT_14c997f98 + 0x10 + (longlong)iVar9 * 0x20);
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
      uVar13 = uVar13 & ~(uint)uVar16;
      puVar10 = *(undefined4 **)(puVar7 + 4);
      if (*(undefined4 **)(puVar7 + 4) == (undefined4 *)0x0) {
        puVar10 = puVar7;
      }
      iVar4 = puVar7[6];
      lVar14 = (longlong)iVar15;
      uVar8 = puVar10[lVar14] & uVar13;
      if (uVar8 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar15) {
          iVar6 = iVar15;
        }
        if (iVar9 <= iVar15) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = puVar10[lVar14 + lVar11 + 1];
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar14 == lVar11) goto LAB_1415d2102;
        }
        iVar15 = iVar15 + (int)lVar11 + 1;
        uVar13 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar8 & uVar8);
      uVar3 = uVar16 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_1415d2102:
  _DAT_14c997fa0 = 0;
  if (DAT_14c997fa4 != 0) {
    FUN_1446f4a44(&DAT_14c997f98,0);
  }
  _DAT_14c997fc8 = 0xffffffff;
  DAT_14c997fc0 = 0;
  if (0x80 < DAT_14c997fc4) {
    DAT_14c997fc4 = 0x80;
    FUN_1446efbd8(&DAT_14c997fa8,0);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415d21c0 FUN_1415d21c0 body=511 status=ok
// SIG undefined FUN_1415d21c0(void)

void FUN_1415d21c0(void)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  lVar5 = DAT_14c9a1ab0;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = DAT_14c9a1ab0 + 0x80;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_50 = lVar1;
  if (*(int *)(DAT_14c9a1ab0 + 0x98) == 0) {
    uVar11 = 1;
    local_48._0_4_ = 0xffffffff;
    iVar6 = 0;
    local_48._4_4_ = 0;
    uVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    uVar13 = local_58 & 0xffffffff;
    uVar11 = local_58 >> 0x20;
    iVar6 = *(int *)(lVar5 + 0x98);
  }
  uVar14 = (uint)local_48;
  iVar9 = local_48._4_4_;
  iVar7 = local_40;
  if (local_48._4_4_ != iVar6 || local_50 != lVar1) {
    do {
      iVar12 = (int)uVar13;
      lVar17 = *(longlong *)(*(longlong *)(lVar5 + 0x70) + 8 + (longlong)iVar9 * 0x18);
      if (lVar17 != 0) {
        bVar3 = *(byte *)(lVar17 + 0x160);
        *(byte *)(lVar17 + 0x160) = bVar3 & 0xfe;
        if ((bVar3 & 4) != 0) {
          *(undefined1 *)(lVar17 + 0x161) = 0;
          *(byte *)(lVar17 + 0x160) = bVar3 & 0xfa;
        }
      }
      uVar14 = uVar14 & ~(uint)uVar11;
      lVar17 = *(longlong *)(local_50 + 0x10);
      if (*(longlong *)(local_50 + 0x10) == 0) {
        lVar17 = local_50;
      }
      iVar4 = *(int *)(local_50 + 0x18);
      lVar15 = (longlong)iVar12;
      uVar8 = *(uint *)(lVar17 + lVar15 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar7 = iVar7 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar12) {
          iVar10 = iVar12;
        }
        if (iVar12 < iVar9) {
          lVar16 = 0;
          do {
            uVar8 = *(uint *)(lVar17 + lVar15 * 4 + 4 + lVar16 * 4);
            if (uVar8 != 0) {
              uVar13 = (ulonglong)(iVar12 + (int)lVar16 + 1);
              uVar14 = 0xffffffff;
              goto LAB_1415d2304;
            }
            iVar7 = iVar7 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar10 - lVar15 != lVar16);
          uVar14 = 0xffffffff;
          iVar12 = iVar10;
        }
        uVar13 = (ulonglong)(iVar12 + 1);
        iVar9 = iVar4;
      }
      else {
LAB_1415d2304:
        uVar11 = (ulonglong)(-uVar8 & uVar8);
        uVar2 = uVar11 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar9 = (iVar7 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar9) {
          iVar9 = iVar4;
        }
      }
    } while (iVar9 != iVar6 || local_50 != lVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415d23c0 FUN_1415d23c0 body=287 status=ok
// SIG undefined FUN_1415d23c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d23c0(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5e478) {
    FUN_144b3d300(&DAT_14ca5e478);
    if (DAT_14ca5e478 == -1) {
      uVar1 = FUN_145cf4068();
      FUN_14608e682();
      FUN_140db5666(&DAT_14ca5e3d0,0,&DAT_14ca5e368,L"FSubstrateTilePassVS",
                    L"/Engine/Private/Substrate/SubstrateTile.usf",L"SubstrateTilePassVS",0,4,
                    FUN_1473178a2,FUN_147317848,&LAB_147317830,&LAB_14731782c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,uVar1);
      _DAT_14ca5e3d0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14309a190);
      _Init_thread_footer(&DAT_14ca5e478);
    }
  }
  return &DAT_14ca5e3d0;
}



// FUNCTION 1415d24e0 FUN_1415d24e0 body=287 status=ok
// SIG undefined FUN_1415d24e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d24e0(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca60730) {
    FUN_144b3d300(&DAT_14ca60730);
    if (DAT_14ca60730 == -1) {
      uVar1 = FUN_14153ccb2();
      FUN_14608e7cc();
      FUN_140db5666(&DAT_14ca60688,0,&DAT_14ca60620,L"FSubsurfaceTilePassVS",
                    L"/Engine/Private/PostProcessSubsurfaceTile.usf",L"MainVS",0,1,FUN_147321522,
                    FUN_1473214c8,&LAB_1473214b0,&LAB_1473214ac,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    uVar1);
      _DAT_14ca60688 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430aa81f);
      _Init_thread_footer(&DAT_14ca60730);
    }
  }
  return &DAT_14ca60688;
}



// FUNCTION 1415d2600 FUN_1415d2600 body=287 status=ok
// SIG undefined FUN_1415d2600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d2600(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2eec8) {
    FUN_144b3d300(&DAT_14cb2eec8);
    if (DAT_14cb2eec8 == -1) {
      uVar1 = FUN_14153dbfe();
      FUN_14608ea4c();
      FUN_140db5666(&DAT_14cb2ee20,0,&DAT_14cb2edb8,L"FNiagaraRibbonSortPhase2CS",
                    L"/Plugin/FX/Niagara/Private/Ribbons/NiagaraRibbonSortParticles.usf",
                    L"MergeSort",5,8,FUN_14804d58e,FUN_14804d534,&LAB_1438fa170,&LAB_14804d530,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,uVar1);
      _DAT_14cb2ee20 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438fa173);
      _Init_thread_footer(&DAT_14cb2eec8);
    }
  }
  return &DAT_14cb2ee20;
}



// FUNCTION 1415d2720 FUN_1415d2720 body=287 status=ok
// SIG undefined FUN_1415d2720(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d2720(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2f118) {
    FUN_144b3d300(&DAT_14cb2f118);
    if (DAT_14cb2f118 == -1) {
      uVar1 = FUN_14156b12c();
      FUN_14608eb96();
      FUN_140db5666(&DAT_14cb2f070,0,&DAT_14cb2f008,L"FNiagaraRibbonVertexReductionPropagateCS",
                    L"/Plugin/FX/Niagara/Private/Ribbons/NiagaraRibbonVertexReductionPropagation.usf"
                    ,L"VertexGenPrefixSumPropagation",5,0x20,FUN_14804d706,FUN_14804d6ac,
                    &LAB_1438fa198,&LAB_1438fa194,&LAB_14712ac0c,&LAB_14712ac08,0xe0,uVar1);
      _DAT_14cb2f070 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438fa19b);
      _Init_thread_footer(&DAT_14cb2f118);
    }
  }
  return &DAT_14cb2f070;
}



// FUNCTION 1415d2840 FUN_1415d2840 body=289 status=ok
// SIG undefined FUN_1415d2840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d2840(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ca378) {
    FUN_144b3d300(&DAT_14c9ca378);
    if (DAT_14c9ca378 == -1) {
      FUN_141555c14();
      FUN_14608f0cc();
      FUN_140db5666(&DAT_14c9ca2d0,0,&DAT_14c9ca268,L"FDistortionMergeScreenPS",
                    L"/Engine/Private/DistortApplyScreenPS.usf",L"Merge",3,8,FUN_147157abc,
                    FUN_147157a5c,&LAB_147157a36,&LAB_147157a32,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9cdc98);
      _DAT_14c9ca2d0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bf7e5f);
      _Init_thread_footer(&DAT_14c9ca378);
    }
  }
  return &DAT_14c9ca2d0;
}



// FUNCTION 1415d2962 FUN_1415d2962 body=281 status=ok
// SIG undefined FUN_1415d2962(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d2962(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca70240) {
    FUN_144b3d300(&DAT_14ca70240);
    if (DAT_14ca70240 == -1) {
      FUN_146092282();
      FUN_140db5666(&DAT_14ca70198,0,&DAT_14ca70130,L"TPageTableUpdateVS<true>",
                    L"/Engine/Private/PageTableUpdate.usf",L"PageTableUpdateVS",0,1,FUN_1473410ae,
                    FUN_147341086,&LAB_147341082,&LAB_14734107e,&LAB_14712ac0c,&LAB_14712ac08,0xf8,0
                   );
      _DAT_14ca70198 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431225cb);
      _Init_thread_footer(&DAT_14ca70240);
    }
  }
  return &DAT_14ca70198;
}



// FUNCTION 1415d2a7c FUN_1415d2a7c body=281 status=ok
// SIG undefined FUN_1415d2a7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d2a7c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca705b8) {
    FUN_144b3d300(&DAT_14ca705b8);
    if (DAT_14ca705b8 == -1) {
      FUN_1460923d6();
      FUN_140db5666(&DAT_14ca70510,0,&DAT_14ca704a8,L"TPageTableUpdatePS<PF_R16G16B16A16_UINT>",
                    L"/Engine/Private/PageTableUpdate.usf",L"PageTableUpdatePS_4",3,1,FUN_147341246,
                    FUN_14734121e,&LAB_14734121a,&LAB_147341216,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca70510 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431225ef);
      _Init_thread_footer(&DAT_14ca705b8);
    }
  }
  return &DAT_14ca70510;
}



// FUNCTION 1415d2b96 FUN_1415d2b96 body=281 status=ok
// SIG undefined FUN_1415d2b96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d2b96(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca706e0) {
    FUN_144b3d300(&DAT_14ca706e0);
    if (DAT_14ca706e0 == -1) {
      FUN_14609252a();
      FUN_140db5666(&DAT_14ca70638,0,&DAT_14ca705d0,L"TPageTableUpdatePS<PF_R32_UINT>",
                    L"/Engine/Private/PageTableUpdate.usf",L"PageTableUpdatePS_1",3,1,FUN_1473412c4,
                    FUN_14734129c,&LAB_147341298,&LAB_147341294,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca70638 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431225fb);
      _Init_thread_footer(&DAT_14ca706e0);
    }
  }
  return &DAT_14ca70638;
}



// FUNCTION 1415d2cb0 FUN_1415d2cb0 body=281 status=ok
// SIG undefined FUN_1415d2cb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d2cb0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca70808) {
    FUN_144b3d300(&DAT_14ca70808);
    if (DAT_14ca70808 == -1) {
      FUN_14609267e();
      FUN_140db5666(&DAT_14ca70760,0,&DAT_14ca706f8,L"TPageTableUpdatePS<PF_R32G32_UINT>",
                    L"/Engine/Private/PageTableUpdate.usf",L"PageTableUpdatePS_2",3,1,FUN_147341342,
                    FUN_14734131a,&LAB_147341316,&LAB_147341312,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca70760 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143122607);
      _Init_thread_footer(&DAT_14ca70808);
    }
  }
  return &DAT_14ca70760;
}



// FUNCTION 1415d2dca FUN_1415d2dca body=281 status=ok
// SIG undefined FUN_1415d2dca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d2dca(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca70930) {
    FUN_144b3d300(&DAT_14ca70930);
    if (DAT_14ca70930 == -1) {
      FUN_1460927d2();
      FUN_140db5666(&DAT_14ca70888,0,&DAT_14ca70820,L"TPageTableUpdatePS<PF_R32G32B32A32_UINT>",
                    L"/Engine/Private/PageTableUpdate.usf",L"PageTableUpdatePS_4",3,1,FUN_1473413c0,
                    FUN_147341398,&LAB_147341394,&LAB_147341390,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca70888 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143122613);
      _Init_thread_footer(&DAT_14ca70930);
    }
  }
  return &DAT_14ca70888;
}



// FUNCTION 1415d2ee4 FUN_1415d2ee4 body=281 status=ok
// SIG undefined FUN_1415d2ee4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415d2ee4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8eb50) {
    FUN_144b3d300(&DAT_14cb8eb50);
    if (DAT_14cb8eb50 == -1) {
      FUN_146092926();
      FUN_140db5666(&DAT_14cb8eaa8,0,&DAT_14cb8ea40,L"FRenoirPathVS",
                    L"/Plugin/CoherentRenderingPlugin/Private/CohPathVS.usf",L"PathVS",0,1,
                    FUN_1489c0884,FUN_1489c0826,&LAB_1489c0822,&LAB_1489c081e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe8,0);
      _DAT_14cb8eaa8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e78462);
      _Init_thread_footer(&DAT_14cb8eb50);
    }
  }
  return &DAT_14cb8eaa8;
}


