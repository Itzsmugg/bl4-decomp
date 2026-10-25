// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1428bd694 Unwind@1428bd694 body=38 status=ok
// SIG undefined Unwind@1428bd694(void)

void Unwind_1428bd694(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428bd6bc Unwind@1428bd6bc body=193 status=ok
// SIG undefined Unwind@1428bd6bc(void)

void Unwind_1428bd6bc(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xb8) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 200);
        **(undefined8 **)(param_2 + 200) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428bd77e Unwind@1428bd77e body=95 status=ok
// SIG undefined Unwind@1428bd77e(void)

void Unwind_1428bd77e(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428bd7de Unwind@1428bd7de body=95 status=ok
// SIG undefined Unwind@1428bd7de(void)

void Unwind_1428bd7de(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428bd83e Unwind@1428bd83e body=67 status=ok
// SIG undefined Unwind@1428bd83e(void)

void Unwind_1428bd83e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  return;
}



// FUNCTION 1428bd882 Unwind@1428bd882 body=67 status=ok
// SIG undefined Unwind@1428bd882(void)

void Unwind_1428bd882(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428bd8c6 Unwind@1428bd8c6 body=38 status=ok
// SIG undefined Unwind@1428bd8c6(void)

void Unwind_1428bd8c6(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428bd8ee Unwind@1428bd8ee body=130 status=ok
// SIG undefined Unwind@1428bd8ee(void)

void Unwind_1428bd8ee(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x80,*(undefined4 *)(param_2 + 0x16c));
  FUN_14588b8d6(param_2 + 0x80);
  while (puVar1 = *(undefined8 **)(param_2 + 0x158), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x158) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428bd970 Unwind@1428bd970 body=76 status=ok
// SIG undefined Unwind@1428bd970(void)

void Unwind_1428bd970(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428bd9bc Unwind@1428bd9bc body=76 status=ok
// SIG undefined Unwind@1428bd9bc(void)

void Unwind_1428bd9bc(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428bda08 FUN_1428bda08 body=2751 status=ok
// SIG undefined FUN_1428bda08(void)

void FUN_1428bda08(longlong ******param_1,undefined1 param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *******ppppppplVar2;
  int *piVar3;
  longlong *****ppppplVar4;
  longlong ******pppppplVar5;
  longlong ******pppppplVar6;
  int iVar7;
  short sVar8;
  longlong *******ppppppplVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  longlong *******ppppppplVar15;
  longlong lVar16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  longlong *plVar22;
  byte bVar23;
  int iVar24;
  byte bVar25;
  undefined1 uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  int iVar31;
  undefined4 in_stack_fffffffffffffe10;
  undefined2 uVar32;
  longlong *****local_1d8;
  longlong *****local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7;
  byte local_1c6;
  int local_1c4;
  int local_1c0;
  undefined1 *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined1 local_1a0 [32];
  undefined1 *local_180;
  undefined8 local_178;
  longlong *****local_170;
  ulonglong local_168;
  longlong ******local_160;
  longlong ******pppppplStack_158;
  int local_150;
  int iStack_14c;
  longlong ******local_148;
  longlong ******pppppplStack_140;
  undefined4 local_138;
  int iStack_134;
  int local_130;
  undefined8 local_128;
  int *local_120;
  longlong local_118;
  longlong ******local_110;
  longlong *local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  short local_ca;
  uint local_c8;
  uint local_c4;
  undefined8 *local_c0;
  longlong *****local_b8;
  longlong *****local_b0;
  int local_a0;
  undefined1 local_99;
  longlong ******local_98;
  longlong ******pppppplStack_90;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined8 *local_70;
  char local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_144b77940(param_1[0xe]);
  FUN_144b77ad0(param_1[0xe]);
  local_170 = param_1[0x13];
  local_168 = (ulonglong)param_1[0x14] >> 1;
  local_ca = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_ca);
  sVar8 = local_ca;
  bVar23 = 1;
  uVar26 = param_2;
  if (local_ca != 2) {
    bVar23 = *(byte *)((longlong)param_1 + 0x7e);
    uVar26 = 1;
  }
  local_7c = *(int *)(param_1 + 0x11);
  local_74 = *(int *)(param_1 + 0x12);
  iVar11 = FUN_144b77e20(param_1[0xe],0x142);
  if ((iVar11 == 0) || (iVar11 = FUN_144b77e20(param_1[0xe],0x143,&local_74), iVar11 == 0)) {
    FUN_14020fad6(param_1 + 0xb,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  local_1d0 = (longlong *****)&local_170;
  local_1c4 = local_7c;
  local_1c0 = local_74;
  local_1b8 = &local_99;
  bVar25 = 1;
  if (sVar8 == 2) {
    bVar25 = (byte)*(undefined2 *)((longlong)param_1 + 0x7e);
  }
  local_1d8 = (longlong *****)param_1;
  local_1c8 = param_2;
  local_1c7 = uVar26;
  local_1c6 = bVar23;
  local_b8 = (longlong *****)FUN_14001cc68(0x18,0x10);
  *local_b8 = (longlong ****)0x0;
  local_b8[1] = (longlong ****)0x0;
  local_b8[2] = (longlong ****)0x0;
  local_180 = (undefined1 *)0x0;
  local_178 = 0x400000000;
  local_b0 = local_b8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar11 != 2)) {
    uVar30 = 0xff;
    if (iVar11 != 1) goto LAB_1428bdbd5;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_1428bdbd5;
  }
  uVar30 = 1;
LAB_1428bdbd5:
  local_1a8 = FUN_144b7ac40(param_1[0xe]);
  if (local_1a8 < (ulonglong)((longlong)(int)((uint)bVar23 * local_74 * local_7c) * 2)) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_78 = uVar30;
    iVar11 = FUN_144b7b020(param_1[0xe]);
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    local_62 = param_3;
    local_61 = param_2;
    if ((int)local_178._4_4_ < iVar11) {
      FUN_14473dbc4(local_1a0,iVar11);
    }
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (undefined8 *)(lVar16 + 0x308);
    local_c0 = (undefined8 *)(lVar16 + 0x310);
    local_120 = (int *)(lVar16 + 0xc60);
    local_c4 = (uint)bVar25;
    for (local_128 = 0; local_c8 = (uint)local_128 & 0xff, local_c8 < local_c4;
        local_128 = CONCAT71((int7)((ulonglong)local_128 >> 8),(char)local_128 + '\x01')) {
      local_a0 = 0;
      for (iVar11 = 0; ppppplVar4 = param_1[0x12], (longlong)iVar11 < (longlong)ppppplVar4;
          iVar11 = iVar11 + local_74) {
        iVar7 = (int)ppppplVar4 - iVar11;
        if ((longlong)(local_74 + iVar11) <= (longlong)ppppplVar4) {
          iVar7 = local_74;
        }
        iVar31 = 0;
        iVar24 = 0;
LAB_1428bdce0:
        uVar32 = (undefined2)((uint)in_stack_fffffffffffffe10 >> 0x10);
        if ((longlong)iVar31 < (longlong)param_1[0x11]) {
          local_98 = (longlong ******)0x0;
          pppppplStack_90 = (longlong ******)0x0;
          cVar10 = FUN_14698d83a(&local_b8,&local_98);
          if (cVar10 == '\0') {
            pppppplStack_158 = (longlong ******)FUN_14001cc68(0x28,0x10);
            pppppplVar6 = pppppplStack_90;
            pppppplStack_158[1] = (longlong *****)&DAT_100000001;
            *pppppplStack_158 = (longlong *****)&PTR_LAB_149ef6700;
            local_160 = pppppplStack_158 + 2;
            pppppplStack_158[2] = (longlong *****)0x0;
            pppppplStack_158[3] = (longlong *****)0x0;
            pppppplStack_158[4] = (longlong *****)0x0;
            if ((longlong *******)pppppplStack_158 == (longlong *******)0x0) {
              ppppppplVar15 = (longlong *******)0x0;
            }
            else {
              LOCK();
              *(int *)(pppppplStack_158 + 1) = *(int *)(pppppplStack_158 + 1) + 1;
              UNLOCK();
              ppppppplVar15 = (longlong *******)pppppplStack_158;
            }
            local_118 = 0;
            local_110 = pppppplStack_158;
            local_98 = local_160;
            ppppppplVar9 = (longlong *******)pppppplStack_90;
            if ((ppppppplVar15 != (longlong *******)pppppplStack_90) &&
               (local_110 = (longlong ******)0x0, ppppppplVar9 = ppppppplVar15,
               (longlong *******)pppppplStack_90 != (longlong *******)0x0)) {
              LOCK();
              ppppppplVar2 = (longlong *******)(pppppplStack_90 + 1);
              *(int *)ppppppplVar2 = *(int *)ppppppplVar2 + -1;
              UNLOCK();
              if (*(int *)ppppppplVar2 == 0) {
                pppppplVar5 = (longlong ******)*pppppplStack_90;
                pppppplStack_90 = (longlong ******)ppppppplVar15;
                (*(code *)*pppppplVar5)(pppppplVar6);
                LOCK();
                piVar3 = (int *)((longlong)pppppplVar6 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                ppppppplVar9 = (longlong *******)pppppplStack_90;
                if (*piVar3 == 0) {
                  (*(code *)(*pppppplVar6)[2])(pppppplVar6);
                  ppppppplVar9 = (longlong *******)pppppplStack_90;
                }
              }
            }
            pppppplStack_90 = (longlong ******)ppppppplVar9;
            FUN_14698d952(&local_118);
            FUN_14698d9aa(&local_160);
            pppppplVar6 = (longlong ******)local_98[1];
            local_98[1] = (longlong *****)((longlong)pppppplVar6 + local_1a8);
            if ((ulonglong)((longlong)local_98[2] - (longlong)pppppplVar6) < local_1a8) {
              FUN_14112c458();
            }
          }
          in_stack_fffffffffffffe10 = CONCAT22(uVar32,(short)local_c8);
          lVar16 = FUN_144b82d60(param_1[0xe],*local_98,iVar31,iVar11,0,in_stack_fffffffffffffe10);
          if (-1 < lVar16) {
            local_150 = (int)param_1[0x11] - iVar31;
            if ((longlong)(local_7c + iVar31) <= (longlong)param_1[0x11]) {
              local_150 = local_7c;
            }
            local_160 = &local_b8;
            pppppplStack_158 = &local_1d8;
            local_148 = local_98;
            pppppplStack_140 = pppppplStack_90;
            if ((longlong *******)pppppplStack_90 != (longlong *******)0x0) {
              LOCK();
              *(int *)(pppppplStack_90 + 1) = *(int *)(pppppplStack_90 + 1) + 1;
              UNLOCK();
            }
            local_138 = CONCAT31(local_138._1_3_,(char)local_128);
            local_130 = local_a0;
            puVar18 = (uint *)*puVar1;
            iStack_14c = iVar7;
            iStack_134 = iVar24;
            if (puVar18 != (uint *)0x0) goto LAB_1428bdf26;
LAB_1428bdeba:
            uVar27 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar27 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar27 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar17 = (undefined4 *)*local_c0;
            *local_c0 = 0;
            if (puVar17 == (undefined4 *)0x0) {
              puVar17 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar17 = 0xffffffff;
            *(undefined4 **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar1 = puVar17;
            FUN_140217a48(puVar1);
            puVar18 = (uint *)*puVar1;
LAB_1428bdf26:
            uVar29 = *(longlong *)(puVar18 + 0x10) + 0xf;
            uVar27 = puVar18[0x12];
            do {
              puVar20 = (undefined8 *)(uVar29 & 0xfffffffffffffff0);
              if (puVar20 + 0x20 <= puVar18 + 0x4000) {
                *(undefined8 **)(puVar18 + 0x10) = puVar20 + 0x20;
                puVar18[0x12] = uVar27 + 1;
                local_1b0 = uVar29;
                local_70 = puVar20;
                FUN_1447247dc(puVar20,0);
                puVar20 = local_70;
                *local_70 = &PTR_FUN_149ef6718;
                local_118 = 0;
                local_108 = (longlong *)0x0;
                puVar19 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar19 = &PTR_LAB_149ef73a0;
                puVar19[1] = local_160;
                puVar19[2] = pppppplStack_158;
                puVar19[3] = CONCAT44(iStack_14c,local_150);
                puVar19[4] = local_148;
                puVar19[5] = pppppplStack_140;
                local_148 = (longlong ******)0x0;
                pppppplStack_140 = (longlong ******)0x0;
                *(int *)(puVar19 + 7) = local_130;
                puVar19[6] = CONCAT44(iStack_134,local_138);
                if (puVar19 + 1 == (undefined8 *)0x0) {
                  puVar20[0x16] = local_118;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
                  if (local_118 != 0) goto LAB_1428be0c6;
                }
                else {
                  puVar20[0x16] = &LAB_146998694;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_1428be0c6:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_1428be0fc;
                  DVar13 = FUN_140ad26c0();
                  DVar14 = GetCurrentThreadId();
                  uVar27 = (uint)(DVar13 != DVar14) * 0x200 + 0x6ff;
                  uVar29 = (ulonglong)uVar27;
                  *(uint *)(local_70 + 0x1e) = uVar27;
                  puVar20 = local_70;
                  if (local_118 != 0) {
                    plVar22 = local_108;
                    if (local_108 == (longlong *)0x0) {
                      plVar22 = (longlong *)&local_f8;
                    }
                    (**(code **)(*plVar22 + 0x10))();
                    uVar29 = (ulonglong)*(uint *)(local_70 + 0x1e);
                    puVar20 = local_70;
                  }
                }
                else {
                  uVar29 = 0x6ff;
LAB_1428be0fc:
                  *(int *)(puVar20 + 0x1e) = (int)uVar29;
                }
                uVar27 = (uint)uVar29;
                if ((uVar27 & 0xff) == 0xff) {
                  uVar12 = (uint)(uVar29 >> 10) & 3;
                  iVar28 = 0;
                  if ((uVar27 >> 9 & 1) == 0 || uVar12 < 2) {
                    uVar26 = (&DAT_149e38edc)[uVar12];
                  }
                  else {
                    uVar26 = 2;
                  }
                }
                else {
                  iVar28 = (uVar27 >> 7 & 2 | (uint)(uVar29 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                  uVar26 = 5;
                }
                FUN_144a24082(puVar20,L"GraphTask",uVar26,iVar28,0);
                if (puVar20 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
                  UNLOCK();
                }
                local_118 = CONCAT71(local_118._1_7_,1);
                FUN_1447439e4(puVar20,&local_118);
                uVar29 = local_178;
                iVar28 = (int)local_178;
                uVar27 = (int)local_178 + 1;
                local_178 = CONCAT44(local_178._4_4_,uVar27);
                if (local_178._4_4_ < uVar27) {
                  FUN_14476a5c8(local_1a0,uVar29 & 0xffffffff);
                }
                puVar21 = local_180;
                if (local_180 == (undefined1 *)0x0) {
                  puVar21 = local_1a0;
                }
                *(undefined8 **)(puVar21 + (longlong)iVar28 * 8) = local_70;
                FUN_14698d952(&local_148);
                FUN_14698d952(&local_98);
                iVar31 = iVar31 + local_7c;
                iVar24 = iVar24 + 1;
                goto LAB_1428bdce0;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_1428bdeba;
              puVar18 = (uint *)*puVar1;
              *puVar18 = 0xffffffff;
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
              puVar18[0x12] = 0;
              *puVar1 = puVar18;
              uVar29 = (longlong)puVar18 + 0x67;
              uVar27 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0xb,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_98);
          uVar30 = local_78;
          goto LAB_1428be336;
        }
        local_a0 = local_a0 + 1;
      }
    }
    uVar30 = local_78;
    if (local_62 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_1a0,local_78);
      FUN_14698da02();
      if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
        if (*local_120 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
        }
        else {
          local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
        }
      }
      else {
        local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
      }
      pppppplStack_90 = &local_170;
      local_118 = 0;
      local_110 = (longlong ******)((ulonglong)local_110 & 0xffffffff00000000);
      local_160 = (longlong ******)&LAB_14699898e;
      pppppplStack_158 = (longlong ******)&local_98;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
      uVar30 = local_78;
    }
  }
LAB_1428be336:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_1a0,uVar30);
  FUN_14588b8d6(local_1a0);
  while (ppppplVar4 = local_b0, (longlong ******)local_b0 != (longlong ******)0x0) {
    pppppplVar6 = (longlong ******)(local_b0 + 1);
    local_b0 = (longlong *****)*local_b0;
    FUN_14698d952(pppppplVar6);
    FUN_1400020a8(ppppplVar4);
  }
  return;
}



// FUNCTION 1428be4c8 Unwind@1428be4c8 body=38 status=ok
// SIG undefined Unwind@1428be4c8(void)

void Unwind_1428be4c8(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428be4f0 Unwind@1428be4f0 body=196 status=ok
// SIG undefined Unwind@1428be4f0(void)

void Unwind_1428be4f0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x68) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0x158);
        **(undefined8 **)(param_2 + 0x158) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428be5b4 Unwind@1428be5b4 body=95 status=ok
// SIG undefined Unwind@1428be5b4(void)

void Unwind_1428be5b4(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a8))(*(undefined8 **)(param_2 + 0x1a8),1);
    }
  }
  return;
}



// FUNCTION 1428be614 Unwind@1428be614 body=95 status=ok
// SIG undefined Unwind@1428be614(void)

void Unwind_1428be614(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a8))(*(undefined8 **)(param_2 + 0x1a8),1);
    }
  }
  return;
}



// FUNCTION 1428be674 Unwind@1428be674 body=64 status=ok
// SIG undefined Unwind@1428be674(void)

void Unwind_1428be674(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  return;
}



// FUNCTION 1428be6b4 Unwind@1428be6b4 body=67 status=ok
// SIG undefined Unwind@1428be6b4(void)

void Unwind_1428be6b4(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428be6f8 Unwind@1428be6f8 body=131 status=ok
// SIG undefined Unwind@1428be6f8(void)

void Unwind_1428be6f8(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x78,*(undefined4 *)(param_2 + 0x1a0));
  FUN_14588b8d6(param_2 + 0x78);
  while (puVar1 = *(undefined8 **)(param_2 + 0x168), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x168) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428be77c Unwind@1428be77c body=76 status=ok
// SIG undefined Unwind@1428be77c(void)

void Unwind_1428be77c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  FUN_14698d9aa(param_2 + 0xb8);
  return;
}



// FUNCTION 1428be7c8 Unwind@1428be7c8 body=38 status=ok
// SIG undefined Unwind@1428be7c8(void)

void Unwind_1428be7c8(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428be7f0 FUN_1428be7f0 body=4057 status=ok
// SIG undefined FUN_1428be7f0(void)

void FUN_1428be7f0(longlong *param_1,undefined1 param_2,char param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  byte bVar23;
  longlong lVar24;
  byte bVar25;
  undefined1 uVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong **pplVar29;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a7;
  byte local_1a6;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 *local_198;
  longlong local_190;
  ulonglong local_188;
  undefined1 local_180 [32];
  undefined1 *local_160;
  undefined8 local_158;
  short local_14e;
  uint local_14c;
  int *local_148;
  ulonglong local_140;
  undefined8 *local_138;
  longlong *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  uint local_118;
  undefined4 uStack_114;
  longlong *plStack_110;
  longlong *plStack_108;
  undefined4 local_100;
  byte local_fc;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  undefined1 local_a1;
  undefined8 *local_a0;
  longlong *local_98;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  undefined8 *local_70;
  char local_64;
  undefined1 local_63;
  ushort local_62 [17];
  
  local_62[1] = 0xfffe;
  local_62[2] = 0xffff;
  local_62[3] = 0xffff;
  local_62[4] = 0xffff;
  local_190 = FUN_144b77940(param_1[0xe]);
  local_140 = FUN_144b77ad0(param_1[0xe]);
  local_1c8 = param_1[0x13];
  local_1c0 = (ulonglong)param_1[0x14] >> 1;
  local_14e = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_14e);
  bVar23 = 1;
  bVar25 = 1;
  local_1a7 = param_2;
  if (local_14e != 2) {
    local_1a7 = 1;
    bVar25 = *(byte *)((longlong)param_1 + 0x7e);
  }
  local_1a4 = (undefined4)param_1[0x11];
  local_1a0 = (undefined4)param_1[0x12];
  local_1b0 = &local_1c8;
  local_198 = &local_a1;
  if (local_14e == 2) {
    bVar23 = (byte)*(undefined2 *)((longlong)param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a8 = param_2;
  local_1a6 = bVar25;
  local_98 = param_1;
  local_f8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_f8 = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_160 = (undefined1 *)0x0;
  local_158 = 0x400000000;
  local_f0 = local_f8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar6 != 2)) {
    uVar7 = 0xff;
    if (iVar6 != 1) goto LAB_1428be956;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428be956;
  }
  uVar7 = 1;
LAB_1428be956:
  plVar20 = local_98;
  local_62[0] = 0;
  FUN_144b77e20(local_98[0xe],0x116,local_62);
  uVar11 = (ulonglong)local_62[0];
  uVar28 = plVar20[0x12];
  uVar22 = uVar11;
  if ((longlong)uVar28 < (longlong)uVar11) {
    uVar22 = uVar28;
  }
  if (uVar11 == 0) {
    uVar22 = uVar28;
  }
  if (local_140 < (ulonglong)((uint)bVar25 * 2) * plVar20[0x11] * (longlong)(int)uVar22) {
    FUN_14020fad6(plVar20 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar7;
    iVar6 = FUN_144b77d80(plVar20[0xe]);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    local_64 = param_3;
    if ((int)local_158._4_4_ < iVar6) {
      FUN_14473dbc4(local_180,iVar6);
    }
    local_14c = (uint)bVar23;
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar2 = (undefined8 *)(lVar13 + 0x308);
    local_138 = (undefined8 *)(lVar13 + 0x310);
    local_148 = (int *)(lVar13 + 0xc60);
    bVar25 = 0;
    plVar20 = local_98;
    local_63 = param_2;
    while( true ) {
      uVar26 = local_63;
      pplVar29 = &local_f8;
      local_a8 = (uint)bVar25;
      if (local_14c < local_a8 || local_14c == bVar25) break;
      if (local_62[0] == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(pplVar29,&local_88);
        if (cVar5 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar12 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_130 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_128._0_4_ = SUB84(local_e0,0);
          uStack_128._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar17 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar17 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_130;
          plVar4 = plStack_80;
          if ((plVar17 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar4 = plVar17, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar17;
              (*(code *)*puVar18)(plVar12);
              LOCK();
              piVar3 = (int *)((longlong)plVar12 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              plVar4 = plStack_80;
              if (*piVar3 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_130);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_140;
          if ((ulonglong)(local_88[2] - lVar13) < local_140) {
            FUN_14112c458();
          }
        }
        lVar13 = FUN_144b82e30(plVar20[0xe],local_a8,*local_88,local_140);
        puVar18 = local_138;
        if (lVar13 != -1) {
          local_120 = &local_1b8;
          local_118 = (uint)local_88;
          uStack_114 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_110 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_108 = (longlong *)CONCAT71(plStack_108._1_7_,bVar25);
          puVar15 = (uint *)*puVar2;
          local_130 = plVar20;
          if (puVar15 != (uint *)0x0) goto LAB_1428bf278;
LAB_1428bf215:
          uVar27 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          uStack_128 = pplVar29;
          if ((uVar27 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar27 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          FUN_140217a48(puVar2);
          puVar15 = (uint *)*puVar2;
          pplVar29 = uStack_128;
LAB_1428bf278:
          puVar16 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 0xf);
          uVar27 = puVar15[0x12];
          do {
            puVar21 = (undefined8 *)((ulonglong)puVar16 & 0xfffffffffffffff0);
            if (puVar21 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar21 + 0x20;
              puVar15[0x12] = uVar27 + 1;
              local_a0 = puVar16;
              local_70 = puVar21;
              uStack_128 = pplVar29;
              FUN_1447247dc(puVar21,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar16 = &PTR_LAB_149ef73e0;
              puVar16[1] = local_130;
              puVar16[2] = uStack_128;
              puVar16[3] = local_120;
              puVar16[4] = CONCAT44(uStack_114,local_118);
              puVar16[5] = plStack_110;
              local_118 = 0;
              uStack_114 = 0;
              plStack_110 = (longlong *)0x0;
              *(undefined1 *)(puVar16 + 6) = plStack_108._0_1_;
              if (puVar16 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_1428bf40b;
              }
              else {
                puVar18[0x16] = &LAB_146998c66;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428bf40b:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428bf441;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar27 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar28 = (ulonglong)uVar27;
                *(uint *)(puVar18 + 0x1e) = uVar27;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar28 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                  plVar20 = local_98;
                }
              }
              else {
                uVar28 = 0x6ff;
LAB_1428bf441:
                *(int *)(puVar18 + 0x1e) = (int)uVar28;
              }
              uVar27 = (uint)uVar28;
              if ((uVar27 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar28 >> 10) & 3;
                iVar6 = 0;
                if ((uVar27 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar26 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar26 = 2;
                }
              }
              else {
                iVar6 = (uVar27 >> 7 & 2 | (uint)(uVar28 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                uVar26 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar26,iVar6,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              uVar28 = local_158;
              iVar6 = (int)local_158;
              uVar27 = (int)local_158 + 1;
              local_158 = CONCAT44(local_158._4_4_,uVar27);
              if (local_158._4_4_ < uVar27) {
                FUN_14476a5c8(local_180,uVar28 & 0xffffffff);
              }
              puVar19 = local_160;
              if (local_160 == (undefined1 *)0x0) {
                puVar19 = local_180;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar6 * 8) = local_70;
              FUN_14698d952(&local_118);
              FUN_14698d952(&local_88);
              goto LAB_1428bf564;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428bf215;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            puVar16 = (undefined8 *)((longlong)puVar15 + 0x67);
            uVar27 = 0;
          } while( true );
        }
LAB_1428bf610:
        FUN_14020fad6(plVar20 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        goto LAB_1428bf636;
      }
      puVar18 = (undefined8 *)0x0;
LAB_1428bea71:
      if ((longlong)puVar18 < plVar20[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        local_70 = puVar18;
        cVar5 = FUN_14698d83a(&local_f8,&local_88);
        if (cVar5 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_130 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_128._0_4_ = SUB84(local_e0,0);
          uStack_128._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar12 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_130;
          plVar17 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar17 = plVar12, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar4 = plStack_80 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              puVar16 = (undefined8 *)*plStack_80;
              plStack_80 = plVar12;
              (*(code *)*puVar16)(plVar20);
              LOCK();
              piVar3 = (int *)((longlong)plVar20 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              plVar17 = plStack_80;
              if (*piVar3 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar17 = plStack_80;
              }
            }
          }
          plStack_80 = plVar17;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_130);
          plVar20 = local_98;
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_140;
          if ((ulonglong)(local_88[2] - lVar13) < local_140) {
            FUN_14112c458();
          }
        }
        uVar27 = (int)plVar20[0x12] - (int)puVar18;
        if ((longlong)(ulonglong)((int)local_70 + (uint)local_62[0]) <= plVar20[0x12]) {
          uVar27 = (uint)local_62[0];
        }
        lVar13 = *local_88;
        lVar24 = (int)uVar27 * local_190;
        uVar7 = FUN_144b77d20(plVar20[0xe],local_70,local_a8);
        lVar13 = FUN_144b82e30(plVar20[0xe],uVar7,lVar13,lVar24);
        if (lVar13 != -1) {
          uStack_128 = &local_1b8;
          local_120 = &local_f8;
          plStack_110 = local_88;
          plStack_108 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_100 = SUB84(local_70,0);
          puVar15 = (uint *)*puVar2;
          local_130 = plVar20;
          local_118 = uVar27;
          local_fc = bVar25;
          if (puVar15 != (uint *)0x0) goto LAB_1428becd2;
LAB_1428bec6b:
          puVar18 = local_138;
          uVar27 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar27 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar27 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          FUN_140217a48(puVar2);
          puVar15 = (uint *)*puVar2;
LAB_1428becd2:
          uVar28 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar27 = puVar15[0x12];
          do {
            puVar18 = (undefined8 *)(uVar28 & 0xfffffffffffffff0);
            if (puVar18 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar18 + 0x20;
              puVar15[0x12] = uVar27 + 1;
              local_188 = uVar28;
              local_a0 = puVar18;
              FUN_1447247dc(puVar18,0);
              puVar18 = local_a0;
              *local_a0 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar16 = &PTR_LAB_149ef73c0;
              puVar16[1] = local_130;
              puVar16[2] = uStack_128;
              *(ulonglong *)((longlong)puVar16 + 0x14) =
                   CONCAT44((undefined4)local_120,uStack_128._4_4_);
              *(ulonglong *)((longlong)puVar16 + 0x1c) = CONCAT44(local_118,local_120._4_4_);
              puVar16[5] = plStack_110;
              puVar16[6] = plStack_108;
              plStack_110 = (longlong *)0x0;
              plStack_108 = (longlong *)0x0;
              *(byte *)((longlong)puVar16 + 0x3c) = local_fc;
              *(undefined4 *)(puVar16 + 7) = local_100;
              if (puVar16 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_1428bee71;
              }
              else {
                puVar18[0x16] = &LAB_1469989aa;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428bee71:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428beea7;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar27 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar28 = (ulonglong)uVar27;
                *(uint *)(puVar18 + 0x1e) = uVar27;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar28 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar28 = 0x6ff;
LAB_1428beea7:
                *(int *)(puVar18 + 0x1e) = (int)uVar28;
              }
              uVar27 = (uint)uVar28;
              if ((uVar27 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar28 >> 10) & 3;
                iVar6 = 0;
                if ((uVar27 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar26 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar26 = 2;
                }
              }
              else {
                iVar6 = (uVar27 >> 7 & 2 | (uint)(uVar28 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                uVar26 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar26,iVar6,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              uVar28 = local_158;
              iVar6 = (int)local_158;
              uVar27 = (int)local_158 + 1;
              local_158 = CONCAT44(local_158._4_4_,uVar27);
              if (local_158._4_4_ < uVar27) {
                FUN_14476a5c8(local_180,uVar28 & 0xffffffff);
              }
              puVar19 = local_160;
              if (local_160 == (undefined1 *)0x0) {
                puVar19 = local_180;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar6 * 8) = local_a0;
              FUN_14698d952(&plStack_110);
              FUN_14698d952(&local_88);
              puVar18 = (undefined8 *)(ulonglong)((int)local_70 + (uint)local_62[0]);
              plVar20 = local_98;
              goto LAB_1428bea71;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428bec6b;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            uVar28 = (longlong)puVar15 + 0x67;
            uVar27 = 0;
          } while( true );
        }
        goto LAB_1428bf610;
      }
LAB_1428bf564:
      bVar25 = bVar25 + 1;
    }
    uVar7 = local_8c;
    if (local_64 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_180,local_8c);
      FUN_14698da02();
      plVar20 = local_98;
      if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
        if (*local_148 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          local_88 = (longlong *)CONCAT71(local_88._1_7_,uVar26);
        }
        else {
          local_88 = (longlong *)CONCAT71(local_88._1_7_,uVar26);
        }
      }
      else {
        local_88 = (longlong *)CONCAT71(local_88._1_7_,uVar26);
      }
      local_e8 = 0;
      local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
      local_130 = (longlong *)&LAB_146998d48;
      plStack_80 = &local_1c8;
      uStack_128 = &local_88;
      FUN_1401f8d10(L"ParallelFor Task",(int)plVar20[0x12] * (int)plVar20[0x11],1);
      uVar7 = local_8c;
    }
  }
LAB_1428bf636:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_180,uVar7);
  FUN_14588b8d6(local_180);
  while (plVar20 = local_f0, local_f0 != (longlong *)0x0) {
    plVar12 = local_f0 + 1;
    local_f0 = (longlong *)*local_f0;
    FUN_14698d952(plVar12);
    FUN_1400020a8(plVar20);
  }
  return;
}



// FUNCTION 1428bf7ca Unwind@1428bf7ca body=38 status=ok
// SIG undefined Unwind@1428bf7ca(void)

void Unwind_1428bf7ca(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428bf7f2 Unwind@1428bf7f2 body=193 status=ok
// SIG undefined Unwind@1428bf7f2(void)

void Unwind_1428bf7f2(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x168) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x80) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xd0);
        **(undefined8 **)(param_2 + 0xd0) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428bf8b4 Unwind@1428bf8b4 body=83 status=ok
// SIG undefined Unwind@1428bf8b4(void)

void Unwind_1428bf8b4(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x168);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428bf908 Unwind@1428bf908 body=83 status=ok
// SIG undefined Unwind@1428bf908(void)

void Unwind_1428bf908(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x168);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428bf95c Unwind@1428bf95c body=64 status=ok
// SIG undefined Unwind@1428bf95c(void)

void Unwind_1428bf95c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf8);
  return;
}



// FUNCTION 1428bf99c Unwind@1428bf99c body=67 status=ok
// SIG undefined Unwind@1428bf99c(void)

void Unwind_1428bf99c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428bf9e0 Unwind@1428bf9e0 body=38 status=ok
// SIG undefined Unwind@1428bf9e0(void)

void Unwind_1428bf9e0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428bfa08 Unwind@1428bfa08 body=196 status=ok
// SIG undefined Unwind@1428bfa08(void)

void Unwind_1428bfa08(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x198) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x168) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xd0);
        **(undefined8 **)(param_2 + 0xd0) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428bfacc Unwind@1428bfacc body=95 status=ok
// SIG undefined Unwind@1428bfacc(void)

void Unwind_1428bfacc(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x198) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x198) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x198))(*(undefined8 **)(param_2 + 0x198),1);
    }
  }
  return;
}



// FUNCTION 1428bfb2c Unwind@1428bfb2c body=95 status=ok
// SIG undefined Unwind@1428bfb2c(void)

void Unwind_1428bfb2c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x198) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x198) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x198))(*(undefined8 **)(param_2 + 0x198),1);
    }
  }
  return;
}



// FUNCTION 1428bfb8c Unwind@1428bfb8c body=64 status=ok
// SIG undefined Unwind@1428bfb8c(void)

void Unwind_1428bfb8c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf0);
  return;
}



// FUNCTION 1428bfbcc Unwind@1428bfbcc body=67 status=ok
// SIG undefined Unwind@1428bfbcc(void)

void Unwind_1428bfbcc(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428bfc10 Unwind@1428bfc10 body=131 status=ok
// SIG undefined Unwind@1428bfc10(void)

void Unwind_1428bfc10(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x88,*(undefined4 *)(param_2 + 0x17c));
  FUN_14588b8d6(param_2 + 0x88);
  while (puVar1 = *(undefined8 **)(param_2 + 0x118), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x118) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428bfc94 Unwind@1428bfc94 body=76 status=ok
// SIG undefined Unwind@1428bfc94(void)

void Unwind_1428bfc94(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428bfce0 Unwind@1428bfce0 body=76 status=ok
// SIG undefined Unwind@1428bfce0(void)

void Unwind_1428bfce0(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428bfd2c Unwind@1428bfd2c body=38 status=ok
// SIG undefined Unwind@1428bfd2c(void)

void Unwind_1428bfd2c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428bfd54 FUN_1428bfd54 body=2405 status=ok
// SIG undefined FUN_1428bfd54(void)

void FUN_1428bfd54(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  short sVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  byte bVar20;
  undefined1 uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  byte bVar26;
  int iVar27;
  bool bVar28;
  undefined8 local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
  undefined1 local_1a8;
  char local_1a7;
  byte local_1a6;
  int local_1a4;
  int local_1a0;
  undefined1 *local_198;
  int *local_190;
  ulonglong local_188;
  ulonglong local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  longlong local_148;
  longlong *local_140;
  longlong *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **local_100;
  longlong *plStack_f8;
  int local_f0;
  int iStack_ec;
  undefined8 **local_e8;
  longlong *plStack_e0;
  undefined4 local_d8;
  int iStack_d4;
  int local_d0;
  undefined8 local_c8;
  short local_ba;
  uint local_b8;
  uint local_b4;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  int local_8c;
  undefined8 **local_88;
  longlong *plStack_80;
  undefined1 local_75;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  local_1c8 = *(undefined8 *)(param_1 + 0x98);
  local_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 1;
  local_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&local_ba);
  sVar5 = local_ba;
  bVar20 = 1;
  bVar28 = local_ba == 2;
  if (!bVar28) {
    bVar20 = *(byte *)(param_1 + 0x7e);
  }
  local_70 = *(int *)(param_1 + 0x88);
  local_6c = *(int *)(param_1 + 0x90);
  iVar8 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar8 == 0) ||
     (iVar8 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&local_6c), iVar8 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  local_1b0 = &local_1c8;
  local_1a7 = bVar28 * '\x03' + '\x01';
  local_1a8 = 4;
  local_1a4 = local_70;
  local_1a0 = local_6c;
  local_198 = &local_75;
  bVar26 = 1;
  if (sVar5 == 2) {
    bVar26 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a6 = bVar20;
  local_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar8 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar8 != 2)) {
    local_74 = 0xff;
    if (iVar8 != 1) goto LAB_1428bff20;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_1428bff20;
  }
  local_74 = 1;
LAB_1428bff20:
  local_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (local_180 < (ulonglong)((longlong)(int)((uint)bVar20 * local_6c * local_70) * 2)) {
    FUN_14020fad6(param_1 + 0x58,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    iVar8 = FUN_144b7b020(*(undefined8 *)(param_1 + 0x70));
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    if ((int)local_150._4_4_ < iVar8) {
      FUN_14473dbc4(local_178,iVar8);
    }
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar13 + 0x308);
    local_b0 = (undefined8 *)(lVar13 + 0x310);
    local_190 = (int *)(lVar13 + 0xc60);
    local_b4 = (uint)bVar26;
    for (local_c8 = 0; local_b8 = (uint)local_c8 & 0xff, local_b8 < local_b4;
        local_c8 = CONCAT71((int7)((ulonglong)local_c8 >> 8),(char)local_c8 + '\x01')) {
      local_8c = 0;
      for (iVar8 = 0; lVar13 = *(longlong *)(param_1 + 0x90), iVar8 < lVar13;
          iVar8 = iVar8 + local_6c) {
        iVar4 = (int)lVar13 - iVar8;
        if (local_6c + iVar8 <= lVar13) {
          iVar4 = local_6c;
        }
        iVar25 = 0;
        iVar27 = 0;
LAB_1428c0019:
        if ((longlong)iVar25 < *(longlong *)(param_1 + 0x88)) {
          local_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar7 = FUN_14698d83a(&local_a8,&local_88);
          if (cVar7 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar19 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            local_100 = (undefined8 **)(plStack_f8 + 2);
            plStack_f8[2] = 0;
            plStack_f8[3] = 0;
            plStack_f8[4] = 0;
            if (plStack_f8 == (longlong *)0x0) {
              plVar12 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_f8 + 1) = (int)plStack_f8[1] + 1;
              UNLOCK();
              plVar12 = plStack_f8;
            }
            local_148 = 0;
            local_140 = plStack_f8;
            local_88 = local_100;
            plVar6 = plStack_80;
            if ((plVar12 != plStack_80) &&
               (local_140 = (longlong *)0x0, plVar6 = plVar12, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar17 = (undefined8 *)*plStack_80;
                plStack_80 = plVar12;
                (*(code *)*puVar17)(plVar19);
                LOCK();
                piVar2 = (int *)((longlong)plVar19 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar6 = plStack_80;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar19 + 0x10))(plVar19);
                  plVar6 = plStack_80;
                }
              }
            }
            plStack_80 = plVar6;
            FUN_14698d952(&local_148);
            FUN_14698d9aa(&local_100);
            puVar17 = local_88[1];
            local_88[1] = (undefined8 *)((longlong)puVar17 + local_180);
            if ((ulonglong)((longlong)local_88[2] - (longlong)puVar17) < local_180) {
              FUN_14112c458();
            }
          }
          lVar13 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*local_88,iVar25,iVar8,0,
                                 (short)local_b8);
          if (-1 < lVar13) {
            local_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar25;
            if ((longlong)(local_70 + iVar25) <= *(longlong *)(param_1 + 0x88)) {
              local_f0 = local_70;
            }
            local_100 = &local_a8;
            plStack_f8 = &local_1b8;
            local_e8 = local_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            local_d8 = CONCAT31(local_d8._1_3_,(char)local_c8);
            local_d0 = local_8c;
            puVar15 = (uint *)*puVar3;
            iStack_ec = iVar4;
            iStack_d4 = iVar27;
            if (puVar15 != (uint *)0x0) goto LAB_1428c0262;
LAB_1428c01f8:
            uVar22 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar22 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar22 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar14 = (undefined4 *)*local_b0;
            *local_b0 = 0;
            if (puVar14 == (undefined4 *)0x0) {
              puVar14 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar14 = 0xffffffff;
            *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar3 = puVar14;
            FUN_140217a48(puVar3);
            puVar15 = (uint *)*puVar3;
LAB_1428c0262:
            uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
            uVar22 = puVar15[0x12];
            do {
              puVar17 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
              if (puVar17 + 0x20 <= puVar15 + 0x4000) {
                *(undefined8 **)(puVar15 + 0x10) = puVar17 + 0x20;
                puVar15[0x12] = uVar22 + 1;
                local_188 = uVar24;
                local_68 = puVar17;
                FUN_1447247dc(puVar17,0);
                puVar17 = local_68;
                *local_68 = &PTR_FUN_149ef6718;
                local_148 = 0;
                local_138 = (longlong *)0x0;
                puVar16 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar16 = &PTR_LAB_149ef7400;
                puVar16[1] = local_100;
                puVar16[2] = plStack_f8;
                puVar16[3] = CONCAT44(iStack_ec,local_f0);
                puVar16[4] = local_e8;
                puVar16[5] = plStack_e0;
                local_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar16 + 7) = local_d0;
                puVar16[6] = CONCAT44(iStack_d4,local_d8);
                if (puVar16 + 1 == (longlong *)0x0) {
                  puVar17[0x16] = local_148;
                  puVar17[0x18] = puVar16;
                  *(undefined4 *)(puVar17 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar17 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar17 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar17 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_11c;
                  if (local_148 != 0) goto LAB_1428c03ee;
                }
                else {
                  puVar17[0x16] = &LAB_146998d64;
                  puVar17[0x18] = puVar16;
                  *(undefined4 *)(puVar17 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar17 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar17 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar17 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_11c;
LAB_1428c03ee:
                  local_148 = 0;
                }
                local_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_190 != 2)) {
                  uVar24 = 0x8ff;
                  if (*local_190 != 1) goto LAB_1428c0421;
                  DVar10 = FUN_140ad26c0();
                  DVar11 = GetCurrentThreadId();
                  uVar22 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                  uVar24 = (ulonglong)uVar22;
                  *(uint *)(local_68 + 0x1e) = uVar22;
                  puVar17 = local_68;
                  if (local_148 != 0) {
                    plVar19 = local_138;
                    if (local_138 == (longlong *)0x0) {
                      plVar19 = (longlong *)&local_128;
                    }
                    (**(code **)(*plVar19 + 0x10))();
                    uVar24 = (ulonglong)*(uint *)(local_68 + 0x1e);
                    puVar17 = local_68;
                  }
                }
                else {
                  uVar24 = 0x6ff;
LAB_1428c0421:
                  *(int *)(puVar17 + 0x1e) = (int)uVar24;
                }
                uVar22 = (uint)uVar24;
                if ((uVar22 & 0xff) == 0xff) {
                  uVar9 = (uint)(uVar24 >> 10) & 3;
                  iVar23 = 0;
                  if ((uVar22 >> 9 & 1) == 0 || uVar9 < 2) {
                    uVar21 = (&DAT_149e38edc)[uVar9];
                  }
                  else {
                    uVar21 = 2;
                  }
                }
                else {
                  iVar23 = (uVar22 >> 7 & 2 | (uint)(uVar24 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar22 & 0xff) * 4);
                  uVar21 = 5;
                }
                FUN_144a24082(puVar17,L"GraphTask",uVar21,iVar23,0);
                if (puVar17 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                  UNLOCK();
                }
                local_148 = CONCAT71(local_148._1_7_,1);
                FUN_1447439e4(puVar17,&local_148);
                uVar24 = local_150;
                iVar23 = (int)local_150;
                uVar22 = (int)local_150 + 1;
                local_150 = CONCAT44(local_150._4_4_,uVar22);
                if (local_150._4_4_ < uVar22) {
                  FUN_14476a5c8(local_178,uVar24 & 0xffffffff);
                }
                puVar18 = local_158;
                if (local_158 == (undefined1 *)0x0) {
                  puVar18 = local_178;
                }
                *(undefined8 **)(puVar18 + (longlong)iVar23 * 8) = local_68;
                FUN_14698d952(&local_e8);
                FUN_14698d952(&local_88);
                iVar25 = iVar25 + local_70;
                iVar27 = iVar27 + 1;
                goto LAB_1428c0019;
              }
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
              LOCK();
              uVar9 = *puVar15;
              *puVar15 = *puVar15 + uVar22 + 1;
              UNLOCK();
              if ((uVar9 ^ uVar22) != 0xffffffff) goto LAB_1428c01f8;
              puVar15 = (uint *)*puVar3;
              *puVar15 = 0xffffffff;
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
              puVar15[0x12] = 0;
              *puVar3 = puVar15;
              uVar24 = (longlong)puVar15 + 0x67;
              uVar22 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0x58,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_88);
          goto LAB_1428c0642;
        }
        local_8c = local_8c + 1;
      }
    }
  }
LAB_1428c0642:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,local_74);
  FUN_14588b8d6(local_178);
  while (puVar3 = local_a0, local_a0 != (undefined8 *)0x0) {
    puVar17 = local_a0 + 1;
    local_a0 = (undefined8 *)*local_a0;
    FUN_14698d952(puVar17);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 1428c06ba Unwind@1428c06ba body=38 status=ok
// SIG undefined Unwind@1428c06ba(void)

void Unwind_1428c06ba(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c06e2 Unwind@1428c06e2 body=196 status=ok
// SIG undefined Unwind@1428c06e2(void)

void Unwind_1428c06e2(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x70) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0x148);
        **(undefined8 **)(param_2 + 0x148) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428c07a6 Unwind@1428c07a6 body=95 status=ok
// SIG undefined Unwind@1428c07a6(void)

void Unwind_1428c07a6(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428c0806 Unwind@1428c0806 body=95 status=ok
// SIG undefined Unwind@1428c0806(void)

void Unwind_1428c0806(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428c0866 Unwind@1428c0866 body=67 status=ok
// SIG undefined Unwind@1428c0866(void)

void Unwind_1428c0866(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x110);
  return;
}



// FUNCTION 1428c08aa Unwind@1428c08aa body=67 status=ok
// SIG undefined Unwind@1428c08aa(void)

void Unwind_1428c08aa(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428c08ee Unwind@1428c08ee body=38 status=ok
// SIG undefined Unwind@1428c08ee(void)

void Unwind_1428c08ee(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c0916 Unwind@1428c0916 body=130 status=ok
// SIG undefined Unwind@1428c0916(void)

void Unwind_1428c0916(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x80,*(undefined4 *)(param_2 + 0x184));
  FUN_14588b8d6(param_2 + 0x80);
  while (puVar1 = *(undefined8 **)(param_2 + 0x158), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x158) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428c0998 Unwind@1428c0998 body=73 status=ok
// SIG undefined Unwind@1428c0998(void)

void Unwind_1428c0998(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xb0);
  FUN_14698d9aa(param_2 + 0xf8);
  return;
}



// FUNCTION 1428c09e2 FUN_1428c09e2 body=3601 status=ok
// SIG undefined FUN_1428c09e2(void)

void FUN_1428c09e2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined1 uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  byte bVar26;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  char local_1a7;
  byte local_1a6;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 *local_198;
  longlong local_190;
  ulonglong local_188;
  int *local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  short local_146;
  uint local_144;
  ulonglong local_140;
  ulonglong local_138;
  undefined8 *local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  longlong *plStack_c0;
  longlong *plStack_b8;
  int local_b0;
  undefined1 local_ac;
  longlong *local_a8;
  longlong *local_a0;
  undefined1 local_8d;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  ushort local_6a;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_190 = FUN_144b77940(param_1[0xe]);
  local_138 = FUN_144b77ad0(param_1[0xe]);
  local_1c8 = param_1[0x13];
  local_1c0 = (ulonglong)param_1[0x14] >> 1;
  local_146 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_146);
  bVar26 = 1;
  local_1a7 = (local_146 == 2) * '\x03' + '\x01';
  if (local_146 != 2) {
    bVar26 = *(byte *)((longlong)param_1 + 0x7e);
  }
  local_1a4 = (undefined4)param_1[0x11];
  local_1a0 = (undefined4)param_1[0x12];
  local_1b0 = &local_1c8;
  local_1a8 = 4;
  local_198 = &local_8d;
  uVar22 = 1;
  if (local_146 == 2) {
    uVar22 = (uint)*(ushort *)((longlong)param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a6 = bVar26;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar6 != 2)) {
    uVar7 = 0xff;
    if (iVar6 != 1) goto LAB_1428c0b36;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428c0b36;
  }
  uVar7 = 1;
LAB_1428c0b36:
  local_6a = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_6a);
  uVar11 = (ulonglong)local_6a;
  uVar24 = param_1[0x12];
  uVar20 = uVar11;
  if ((longlong)uVar24 < (longlong)uVar11) {
    uVar20 = uVar24;
  }
  if (uVar11 == 0) {
    uVar20 = uVar24;
  }
  if (local_138 < (ulonglong)((uint)bVar26 * 2) * param_1[0x11] * (longlong)(int)uVar20) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar7;
    iVar6 = FUN_144b77d80(param_1[0xe]);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if ((int)local_150._4_4_ < iVar6) {
      FUN_14473dbc4(local_178,iVar6);
    }
    local_144 = uVar22 & 0xff;
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar13 + 0x308);
    local_130 = (undefined8 *)(lVar13 + 0x310);
    local_180 = (int *)(lVar13 + 0xc60);
    uVar24 = 0;
    while( true ) {
      uVar20 = uVar24 & 0xff;
      uVar7 = local_8c;
      if (local_144 <= (uint)uVar20) break;
      local_188 = uVar24;
      if (local_6a == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar5 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar19 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar12 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar4 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar4 = plVar12, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar17 = (undefined8 *)*plStack_80;
              plStack_80 = plVar12;
              (*(code *)*puVar17)(plVar19);
              LOCK();
              piVar2 = (int *)((longlong)plVar19 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar4 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_138;
          if ((ulonglong)(local_88[2] - lVar13) < local_138) {
            FUN_14112c458();
          }
        }
        lVar13 = FUN_144b82e30(param_1[0xe],uVar20,*local_88,local_138);
        puVar17 = local_130;
        if (lVar13 != -1) {
          uStack_d8 = &local_a8;
          local_d0 = &local_1b8;
          local_c8 = (uint)local_88;
          uStack_c4 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_c0 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_b8 = (longlong *)CONCAT71(plStack_b8._1_7_,(char)uVar24);
          puVar15 = (uint *)*puVar3;
          local_e0 = param_1;
          if (puVar15 != (uint *)0x0) goto LAB_1428c13d2;
LAB_1428c136f:
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar17;
          *puVar17 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          FUN_140217a48(puVar3);
          puVar15 = (uint *)*puVar3;
LAB_1428c13d2:
          uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar22 = puVar15[0x12];
          do {
            puVar16 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
            if (puVar16 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar16 + 0x20;
              puVar15[0x12] = uVar22 + 1;
              local_140 = uVar24;
              local_68 = puVar16;
              FUN_1447247dc(puVar16,0);
              puVar17 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar16 = &PTR_LAB_149ef7440;
              puVar16[1] = local_e0;
              puVar16[2] = uStack_d8;
              puVar16[3] = local_d0;
              puVar16[4] = CONCAT44(uStack_c4,local_c8);
              puVar16[5] = plStack_c0;
              local_c8 = 0;
              uStack_c4 = 0;
              plStack_c0 = (longlong *)0x0;
              *(undefined1 *)(puVar16 + 6) = plStack_b8._0_1_;
              if (puVar16 + 1 == (longlong *)0x0) {
                puVar17[0x16] = local_128;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_1428c1558;
              }
              else {
                puVar17[0x16] = &LAB_14699930c;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428c1558:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428c158b;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar22 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar24 = (ulonglong)uVar22;
                *(uint *)(puVar17 + 0x1e) = uVar22;
                if (local_128 != 0) {
                  plVar19 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar19 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar19 + 0x10))();
                  uVar24 = (ulonglong)*(uint *)(puVar17 + 0x1e);
                }
              }
              else {
                uVar24 = 0x6ff;
LAB_1428c158b:
                *(int *)(puVar17 + 0x1e) = (int)uVar24;
              }
              uVar22 = (uint)uVar24;
              if ((uVar22 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar24 >> 10) & 3;
                iVar6 = 0;
                if ((uVar22 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar21 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar21 = 2;
                }
              }
              else {
                iVar6 = (uVar22 >> 7 & 2 | (uint)(uVar24 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar22 & 0xff) * 4);
                uVar21 = 5;
              }
              FUN_144a24082(puVar17,L"GraphTask",uVar21,iVar6,0);
              if (puVar17 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                UNLOCK();
              }
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar17,&local_128);
              iVar6 = (int)local_150;
              uVar24 = local_150 & 0xffffffff;
              uVar22 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar22);
              if (local_150._4_4_ < uVar22) {
                FUN_14476a5c8(local_178,uVar24);
              }
              puVar18 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar18 = local_178;
              }
              *(undefined8 **)(puVar18 + (longlong)iVar6 * 8) = local_68;
              FUN_14698d952(&local_c8);
              FUN_14698d952(&local_88);
              goto LAB_1428c16a8;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428c136f;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
LAB_1428c1747:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        break;
      }
      uVar24 = 0;
LAB_1428c0c25:
      iVar6 = (int)uVar24;
      if ((longlong)uVar24 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar5 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar19 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar12 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar4 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar4 = plVar12, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar17 = (undefined8 *)*plStack_80;
              plStack_80 = plVar12;
              (*(code *)*puVar17)(plVar19);
              LOCK();
              piVar2 = (int *)((longlong)plVar19 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar4 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_138;
          if ((ulonglong)(local_88[2] - lVar13) < local_138) {
            FUN_14112c458();
          }
        }
        uVar22 = (int)param_1[0x12] - iVar6;
        if ((longlong)(ulonglong)(iVar6 + (uint)local_6a) <= param_1[0x12]) {
          uVar22 = (uint)local_6a;
        }
        lVar13 = *local_88;
        lVar25 = (int)uVar22 * local_190;
        uVar7 = FUN_144b77d20(param_1[0xe],uVar24,uVar20);
        lVar13 = FUN_144b82e30(param_1[0xe],uVar7,lVar13,lVar25);
        if (lVar13 != -1) {
          uStack_d8 = &local_1b8;
          local_d0 = &local_a8;
          plStack_c0 = local_88;
          plStack_b8 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_ac = (undefined1)local_188;
          puVar15 = (uint *)*puVar3;
          local_e0 = param_1;
          local_c8 = uVar22;
          local_b0 = iVar6;
          if (puVar15 != (uint *)0x0) goto LAB_1428c0e67;
LAB_1428c0e00:
          puVar17 = local_130;
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar17;
          *puVar17 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          FUN_140217a48(puVar3);
          puVar15 = (uint *)*puVar3;
LAB_1428c0e67:
          uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar22 = puVar15[0x12];
          do {
            puVar17 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
            if (puVar17 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar17 + 0x20;
              puVar15[0x12] = uVar22 + 1;
              local_140 = uVar24;
              local_68 = puVar17;
              FUN_1447247dc(puVar17,0);
              puVar17 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar16 = &PTR_LAB_149ef7420;
              puVar16[1] = local_e0;
              puVar16[2] = uStack_d8;
              *(ulonglong *)((longlong)puVar16 + 0x14) =
                   CONCAT44((undefined4)local_d0,uStack_d8._4_4_);
              *(ulonglong *)((longlong)puVar16 + 0x1c) = CONCAT44(local_c8,local_d0._4_4_);
              puVar16[5] = plStack_c0;
              puVar16[6] = plStack_b8;
              plStack_c0 = (longlong *)0x0;
              plStack_b8 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar16 + 0x3c) = local_ac;
              *(int *)(puVar16 + 7) = local_b0;
              if (puVar16 + 1 == (longlong *)0x0) {
                puVar17[0x16] = local_128;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_1428c0ff0;
              }
              else {
                puVar17[0x16] = &LAB_1469990ba;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428c0ff0:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428c1023;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar22 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar24 = (ulonglong)uVar22;
                *(uint *)(puVar17 + 0x1e) = uVar22;
                if (local_128 != 0) {
                  plVar19 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar19 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar19 + 0x10))();
                  uVar24 = (ulonglong)*(uint *)(puVar17 + 0x1e);
                }
              }
              else {
                uVar24 = 0x6ff;
LAB_1428c1023:
                *(int *)(puVar17 + 0x1e) = (int)uVar24;
              }
              uVar22 = (uint)uVar24;
              if ((uVar22 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar24 >> 10) & 3;
                iVar23 = 0;
                if ((uVar22 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar21 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar21 = 2;
                }
              }
              else {
                iVar23 = (uVar22 >> 7 & 2 | (uint)(uVar24 >> 9) & 1) +
                         *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar22 & 0xff) * 4);
                uVar21 = 5;
              }
              FUN_144a24082(puVar17,L"GraphTask",uVar21,iVar23,0);
              if (puVar17 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                UNLOCK();
              }
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar17,&local_128);
              uVar24 = local_150;
              iVar23 = (int)local_150;
              uVar22 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar22);
              if (local_150._4_4_ < uVar22) {
                FUN_14476a5c8(local_178,uVar24 & 0xffffffff);
              }
              puVar18 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar18 = local_178;
              }
              *(undefined8 **)(puVar18 + (longlong)iVar23 * 8) = local_68;
              FUN_14698d952(&plStack_c0);
              FUN_14698d952(&local_88);
              uVar24 = (ulonglong)(iVar6 + (uint)local_6a);
              goto LAB_1428c0c25;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428c0e00;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
        goto LAB_1428c1747;
      }
LAB_1428c16a8:
      uVar24 = CONCAT71((int7)(local_188 >> 8),(char)local_188 + '\x01');
    }
  }
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,uVar7);
  FUN_14588b8d6(local_178);
  while (plVar19 = local_a0, local_a0 != (longlong *)0x0) {
    plVar12 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar12);
    FUN_1400020a8(plVar19);
  }
  return;
}



// FUNCTION 1428c17f4 Unwind@1428c17f4 body=38 status=ok
// SIG undefined Unwind@1428c17f4(void)

void Unwind_1428c17f4(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c181c Unwind@1428c181c body=193 status=ok
// SIG undefined Unwind@1428c181c(void)

void Unwind_1428c181c(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xb8) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 200);
        **(undefined8 **)(param_2 + 200) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428c18de Unwind@1428c18de body=83 status=ok
// SIG undefined Unwind@1428c18de(void)

void Unwind_1428c18de(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 400);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428c1932 Unwind@1428c1932 body=83 status=ok
// SIG undefined Unwind@1428c1932(void)

void Unwind_1428c1932(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 400);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428c1986 Unwind@1428c1986 body=67 status=ok
// SIG undefined Unwind@1428c1986(void)

void Unwind_1428c1986(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x138);
  return;
}



// FUNCTION 1428c19ca Unwind@1428c19ca body=67 status=ok
// SIG undefined Unwind@1428c19ca(void)

void Unwind_1428c19ca(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428c1a0e Unwind@1428c1a0e body=38 status=ok
// SIG undefined Unwind@1428c1a0e(void)

void Unwind_1428c1a0e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c1a36 Unwind@1428c1a36 body=193 status=ok
// SIG undefined Unwind@1428c1a36(void)

void Unwind_1428c1a36(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xb8) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 200);
        **(undefined8 **)(param_2 + 200) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428c1af8 Unwind@1428c1af8 body=95 status=ok
// SIG undefined Unwind@1428c1af8(void)

void Unwind_1428c1af8(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428c1b58 Unwind@1428c1b58 body=95 status=ok
// SIG undefined Unwind@1428c1b58(void)

void Unwind_1428c1b58(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428c1bb8 Unwind@1428c1bb8 body=67 status=ok
// SIG undefined Unwind@1428c1bb8(void)

void Unwind_1428c1bb8(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  return;
}



// FUNCTION 1428c1bfc Unwind@1428c1bfc body=67 status=ok
// SIG undefined Unwind@1428c1bfc(void)

void Unwind_1428c1bfc(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428c1c40 Unwind@1428c1c40 body=38 status=ok
// SIG undefined Unwind@1428c1c40(void)

void Unwind_1428c1c40(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c1c68 Unwind@1428c1c68 body=130 status=ok
// SIG undefined Unwind@1428c1c68(void)

void Unwind_1428c1c68(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x80,*(undefined4 *)(param_2 + 0x16c));
  FUN_14588b8d6(param_2 + 0x80);
  while (puVar1 = *(undefined8 **)(param_2 + 0x158), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x158) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428c1cea Unwind@1428c1cea body=76 status=ok
// SIG undefined Unwind@1428c1cea(void)

void Unwind_1428c1cea(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428c1d36 Unwind@1428c1d36 body=76 status=ok
// SIG undefined Unwind@1428c1d36(void)

void Unwind_1428c1d36(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428c1d82 FUN_1428c1d82 body=2752 status=ok
// SIG undefined FUN_1428c1d82(void)

void FUN_1428c1d82(longlong ******param_1,undefined1 param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *******ppppppplVar2;
  int *piVar3;
  longlong *****ppppplVar4;
  longlong ******pppppplVar5;
  longlong ******pppppplVar6;
  int iVar7;
  short sVar8;
  longlong *******ppppppplVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  longlong *******ppppppplVar15;
  longlong lVar16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  longlong *plVar22;
  byte bVar23;
  int iVar24;
  byte bVar25;
  undefined1 uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  int iVar31;
  undefined4 in_stack_fffffffffffffe10;
  undefined2 uVar32;
  longlong *****local_1d8;
  longlong *****local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7;
  byte local_1c6;
  int local_1c4;
  int local_1c0;
  undefined1 *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined1 local_1a0 [32];
  undefined1 *local_180;
  undefined8 local_178;
  longlong *****local_170;
  ulonglong local_168;
  longlong ******local_160;
  longlong ******pppppplStack_158;
  int local_150;
  int iStack_14c;
  longlong ******local_148;
  longlong ******pppppplStack_140;
  undefined4 local_138;
  int iStack_134;
  int local_130;
  undefined8 local_128;
  int *local_120;
  longlong local_118;
  longlong ******local_110;
  longlong *local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  short local_ca;
  uint local_c8;
  uint local_c4;
  undefined8 *local_c0;
  longlong *****local_b8;
  longlong *****local_b0;
  int local_a0;
  undefined1 local_99;
  longlong ******local_98;
  longlong ******pppppplStack_90;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined8 *local_70;
  char local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_144b77940(param_1[0xe]);
  FUN_144b77ad0(param_1[0xe]);
  local_170 = param_1[0x13];
  local_168 = (ulonglong)param_1[0x14] >> 1;
  local_ca = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_ca);
  sVar8 = local_ca;
  bVar23 = 1;
  uVar26 = param_2;
  if (local_ca != 2) {
    bVar23 = *(byte *)((longlong)param_1 + 0x7e);
    uVar26 = 1;
  }
  local_7c = *(int *)(param_1 + 0x11);
  local_74 = *(int *)(param_1 + 0x12);
  iVar11 = FUN_144b77e20(param_1[0xe],0x142);
  if ((iVar11 == 0) || (iVar11 = FUN_144b77e20(param_1[0xe],0x143,&local_74), iVar11 == 0)) {
    FUN_14020fad6(param_1 + 0xb,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  local_1d0 = (longlong *****)&local_170;
  local_1c4 = local_7c;
  local_1c0 = local_74;
  local_1b8 = &local_99;
  bVar25 = 1;
  if (sVar8 == 2) {
    bVar25 = (byte)*(undefined2 *)((longlong)param_1 + 0x7e);
  }
  local_1d8 = (longlong *****)param_1;
  local_1c8 = param_2;
  local_1c7 = uVar26;
  local_1c6 = bVar23;
  local_b8 = (longlong *****)FUN_14001cc68(0x18,0x10);
  *local_b8 = (longlong ****)0x0;
  local_b8[1] = (longlong ****)0x0;
  local_b8[2] = (longlong ****)0x0;
  local_180 = (undefined1 *)0x0;
  local_178 = 0x400000000;
  local_b0 = local_b8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar11 != 2)) {
    uVar30 = 0xff;
    if (iVar11 != 1) goto LAB_1428c1f4f;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_1428c1f4f;
  }
  uVar30 = 1;
LAB_1428c1f4f:
  local_1a8 = FUN_144b7ac40(param_1[0xe]);
  if (local_1a8 < (ulonglong)((longlong)(int)((uint)bVar23 * local_74 * local_7c) << 2)) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_78 = uVar30;
    iVar11 = FUN_144b7b020(param_1[0xe]);
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    local_62 = param_3;
    local_61 = param_2;
    if ((int)local_178._4_4_ < iVar11) {
      FUN_14473dbc4(local_1a0,iVar11);
    }
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (undefined8 *)(lVar16 + 0x308);
    local_c0 = (undefined8 *)(lVar16 + 0x310);
    local_120 = (int *)(lVar16 + 0xc60);
    local_c4 = (uint)bVar25;
    for (local_128 = 0; local_c8 = (uint)local_128 & 0xff, local_c8 < local_c4;
        local_128 = CONCAT71((int7)((ulonglong)local_128 >> 8),(char)local_128 + '\x01')) {
      local_a0 = 0;
      for (iVar11 = 0; ppppplVar4 = param_1[0x12], (longlong)iVar11 < (longlong)ppppplVar4;
          iVar11 = iVar11 + local_74) {
        iVar7 = (int)ppppplVar4 - iVar11;
        if ((longlong)(local_74 + iVar11) <= (longlong)ppppplVar4) {
          iVar7 = local_74;
        }
        iVar31 = 0;
        iVar24 = 0;
LAB_1428c205b:
        uVar32 = (undefined2)((uint)in_stack_fffffffffffffe10 >> 0x10);
        if ((longlong)iVar31 < (longlong)param_1[0x11]) {
          local_98 = (longlong ******)0x0;
          pppppplStack_90 = (longlong ******)0x0;
          cVar10 = FUN_14698d83a(&local_b8,&local_98);
          if (cVar10 == '\0') {
            pppppplStack_158 = (longlong ******)FUN_14001cc68(0x28,0x10);
            pppppplVar6 = pppppplStack_90;
            pppppplStack_158[1] = (longlong *****)&DAT_100000001;
            *pppppplStack_158 = (longlong *****)&PTR_LAB_149ef6700;
            local_160 = pppppplStack_158 + 2;
            pppppplStack_158[2] = (longlong *****)0x0;
            pppppplStack_158[3] = (longlong *****)0x0;
            pppppplStack_158[4] = (longlong *****)0x0;
            if ((longlong *******)pppppplStack_158 == (longlong *******)0x0) {
              ppppppplVar15 = (longlong *******)0x0;
            }
            else {
              LOCK();
              *(int *)(pppppplStack_158 + 1) = *(int *)(pppppplStack_158 + 1) + 1;
              UNLOCK();
              ppppppplVar15 = (longlong *******)pppppplStack_158;
            }
            local_118 = 0;
            local_110 = pppppplStack_158;
            local_98 = local_160;
            ppppppplVar9 = (longlong *******)pppppplStack_90;
            if ((ppppppplVar15 != (longlong *******)pppppplStack_90) &&
               (local_110 = (longlong ******)0x0, ppppppplVar9 = ppppppplVar15,
               (longlong *******)pppppplStack_90 != (longlong *******)0x0)) {
              LOCK();
              ppppppplVar2 = (longlong *******)(pppppplStack_90 + 1);
              *(int *)ppppppplVar2 = *(int *)ppppppplVar2 + -1;
              UNLOCK();
              if (*(int *)ppppppplVar2 == 0) {
                pppppplVar5 = (longlong ******)*pppppplStack_90;
                pppppplStack_90 = (longlong ******)ppppppplVar15;
                (*(code *)*pppppplVar5)(pppppplVar6);
                LOCK();
                piVar3 = (int *)((longlong)pppppplVar6 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                ppppppplVar9 = (longlong *******)pppppplStack_90;
                if (*piVar3 == 0) {
                  (*(code *)(*pppppplVar6)[2])(pppppplVar6);
                  ppppppplVar9 = (longlong *******)pppppplStack_90;
                }
              }
            }
            pppppplStack_90 = (longlong ******)ppppppplVar9;
            FUN_14698d952(&local_118);
            FUN_14698d9aa(&local_160);
            pppppplVar6 = (longlong ******)local_98[1];
            local_98[1] = (longlong *****)((longlong)pppppplVar6 + local_1a8);
            if ((ulonglong)((longlong)local_98[2] - (longlong)pppppplVar6) < local_1a8) {
              FUN_14112c458();
            }
          }
          in_stack_fffffffffffffe10 = CONCAT22(uVar32,(short)local_c8);
          lVar16 = FUN_144b82d60(param_1[0xe],*local_98,iVar31,iVar11,0,in_stack_fffffffffffffe10);
          if (-1 < lVar16) {
            local_150 = (int)param_1[0x11] - iVar31;
            if ((longlong)(local_7c + iVar31) <= (longlong)param_1[0x11]) {
              local_150 = local_7c;
            }
            local_160 = &local_b8;
            pppppplStack_158 = &local_1d8;
            local_148 = local_98;
            pppppplStack_140 = pppppplStack_90;
            if ((longlong *******)pppppplStack_90 != (longlong *******)0x0) {
              LOCK();
              *(int *)(pppppplStack_90 + 1) = *(int *)(pppppplStack_90 + 1) + 1;
              UNLOCK();
            }
            local_138 = CONCAT31(local_138._1_3_,(char)local_128);
            local_130 = local_a0;
            puVar18 = (uint *)*puVar1;
            iStack_14c = iVar7;
            iStack_134 = iVar24;
            if (puVar18 != (uint *)0x0) goto LAB_1428c22a1;
LAB_1428c2235:
            uVar27 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar27 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar27 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar17 = (undefined4 *)*local_c0;
            *local_c0 = 0;
            if (puVar17 == (undefined4 *)0x0) {
              puVar17 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar17 = 0xffffffff;
            *(undefined4 **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar1 = puVar17;
            FUN_140217a48(puVar1);
            puVar18 = (uint *)*puVar1;
LAB_1428c22a1:
            uVar29 = *(longlong *)(puVar18 + 0x10) + 0xf;
            uVar27 = puVar18[0x12];
            do {
              puVar20 = (undefined8 *)(uVar29 & 0xfffffffffffffff0);
              if (puVar20 + 0x20 <= puVar18 + 0x4000) {
                *(undefined8 **)(puVar18 + 0x10) = puVar20 + 0x20;
                puVar18[0x12] = uVar27 + 1;
                local_1b0 = uVar29;
                local_70 = puVar20;
                FUN_1447247dc(puVar20,0);
                puVar20 = local_70;
                *local_70 = &PTR_FUN_149ef6718;
                local_118 = 0;
                local_108 = (longlong *)0x0;
                puVar19 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar19 = &PTR_LAB_149ef7460;
                puVar19[1] = local_160;
                puVar19[2] = pppppplStack_158;
                puVar19[3] = CONCAT44(iStack_14c,local_150);
                puVar19[4] = local_148;
                puVar19[5] = pppppplStack_140;
                local_148 = (longlong ******)0x0;
                pppppplStack_140 = (longlong ******)0x0;
                *(int *)(puVar19 + 7) = local_130;
                puVar19[6] = CONCAT44(iStack_134,local_138);
                if (puVar19 + 1 == (undefined8 *)0x0) {
                  puVar20[0x16] = local_118;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
                  if (local_118 != 0) goto LAB_1428c2441;
                }
                else {
                  puVar20[0x16] = &LAB_146999462;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_1428c2441:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_1428c2477;
                  DVar13 = FUN_140ad26c0();
                  DVar14 = GetCurrentThreadId();
                  uVar27 = (uint)(DVar13 != DVar14) * 0x200 + 0x6ff;
                  uVar29 = (ulonglong)uVar27;
                  *(uint *)(local_70 + 0x1e) = uVar27;
                  puVar20 = local_70;
                  if (local_118 != 0) {
                    plVar22 = local_108;
                    if (local_108 == (longlong *)0x0) {
                      plVar22 = (longlong *)&local_f8;
                    }
                    (**(code **)(*plVar22 + 0x10))();
                    uVar29 = (ulonglong)*(uint *)(local_70 + 0x1e);
                    puVar20 = local_70;
                  }
                }
                else {
                  uVar29 = 0x6ff;
LAB_1428c2477:
                  *(int *)(puVar20 + 0x1e) = (int)uVar29;
                }
                uVar27 = (uint)uVar29;
                if ((uVar27 & 0xff) == 0xff) {
                  uVar12 = (uint)(uVar29 >> 10) & 3;
                  iVar28 = 0;
                  if ((uVar27 >> 9 & 1) == 0 || uVar12 < 2) {
                    uVar26 = (&DAT_149e38edc)[uVar12];
                  }
                  else {
                    uVar26 = 2;
                  }
                }
                else {
                  iVar28 = (uVar27 >> 7 & 2 | (uint)(uVar29 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                  uVar26 = 5;
                }
                FUN_144a24082(puVar20,L"GraphTask",uVar26,iVar28,0);
                if (puVar20 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
                  UNLOCK();
                }
                local_118 = CONCAT71(local_118._1_7_,1);
                FUN_1447439e4(puVar20,&local_118);
                uVar29 = local_178;
                iVar28 = (int)local_178;
                uVar27 = (int)local_178 + 1;
                local_178 = CONCAT44(local_178._4_4_,uVar27);
                if (local_178._4_4_ < uVar27) {
                  FUN_14476a5c8(local_1a0,uVar29 & 0xffffffff);
                }
                puVar21 = local_180;
                if (local_180 == (undefined1 *)0x0) {
                  puVar21 = local_1a0;
                }
                *(undefined8 **)(puVar21 + (longlong)iVar28 * 8) = local_70;
                FUN_14698d952(&local_148);
                FUN_14698d952(&local_98);
                iVar31 = iVar31 + local_7c;
                iVar24 = iVar24 + 1;
                goto LAB_1428c205b;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_1428c2235;
              puVar18 = (uint *)*puVar1;
              *puVar18 = 0xffffffff;
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
              puVar18[0x12] = 0;
              *puVar1 = puVar18;
              uVar29 = (longlong)puVar18 + 0x67;
              uVar27 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0xb,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_98);
          uVar30 = local_78;
          goto LAB_1428c26b1;
        }
        local_a0 = local_a0 + 1;
      }
    }
    uVar30 = local_78;
    if (local_62 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_1a0,local_78);
      FUN_14698da02();
      if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
        if (*local_120 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
        }
        else {
          local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
        }
      }
      else {
        local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
      }
      pppppplStack_90 = &local_170;
      local_118 = 0;
      local_110 = (longlong ******)((ulonglong)local_110 & 0xffffffff00000000);
      local_160 = (longlong ******)&LAB_14699975c;
      pppppplStack_158 = (longlong ******)&local_98;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
      uVar30 = local_78;
    }
  }
LAB_1428c26b1:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_1a0,uVar30);
  FUN_14588b8d6(local_1a0);
  while (ppppplVar4 = local_b0, (longlong ******)local_b0 != (longlong ******)0x0) {
    pppppplVar6 = (longlong ******)(local_b0 + 1);
    local_b0 = (longlong *****)*local_b0;
    FUN_14698d952(pppppplVar6);
    FUN_1400020a8(ppppplVar4);
  }
  return;
}



// FUNCTION 1428c2842 Unwind@1428c2842 body=38 status=ok
// SIG undefined Unwind@1428c2842(void)

void Unwind_1428c2842(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c286a Unwind@1428c286a body=196 status=ok
// SIG undefined Unwind@1428c286a(void)

void Unwind_1428c286a(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x68) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0x158);
        **(undefined8 **)(param_2 + 0x158) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428c292e Unwind@1428c292e body=95 status=ok
// SIG undefined Unwind@1428c292e(void)

void Unwind_1428c292e(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a8))(*(undefined8 **)(param_2 + 0x1a8),1);
    }
  }
  return;
}



// FUNCTION 1428c298e Unwind@1428c298e body=95 status=ok
// SIG undefined Unwind@1428c298e(void)

void Unwind_1428c298e(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a8))(*(undefined8 **)(param_2 + 0x1a8),1);
    }
  }
  return;
}



// FUNCTION 1428c29ee Unwind@1428c29ee body=64 status=ok
// SIG undefined Unwind@1428c29ee(void)

void Unwind_1428c29ee(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  return;
}



// FUNCTION 1428c2a2e Unwind@1428c2a2e body=67 status=ok
// SIG undefined Unwind@1428c2a2e(void)

void Unwind_1428c2a2e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428c2a72 Unwind@1428c2a72 body=131 status=ok
// SIG undefined Unwind@1428c2a72(void)

void Unwind_1428c2a72(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x78,*(undefined4 *)(param_2 + 0x1a0));
  FUN_14588b8d6(param_2 + 0x78);
  while (puVar1 = *(undefined8 **)(param_2 + 0x168), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x168) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428c2af6 Unwind@1428c2af6 body=76 status=ok
// SIG undefined Unwind@1428c2af6(void)

void Unwind_1428c2af6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  FUN_14698d9aa(param_2 + 0xb8);
  return;
}



// FUNCTION 1428c2b42 Unwind@1428c2b42 body=38 status=ok
// SIG undefined Unwind@1428c2b42(void)

void Unwind_1428c2b42(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c2b6a FUN_1428c2b6a body=4058 status=ok
// SIG undefined FUN_1428c2b6a(void)

void FUN_1428c2b6a(longlong *param_1,undefined1 param_2,char param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  byte bVar23;
  longlong lVar24;
  byte bVar25;
  undefined1 uVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong **pplVar29;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a7;
  byte local_1a6;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 *local_198;
  longlong local_190;
  ulonglong local_188;
  undefined1 local_180 [32];
  undefined1 *local_160;
  undefined8 local_158;
  short local_14e;
  uint local_14c;
  int *local_148;
  ulonglong local_140;
  undefined8 *local_138;
  longlong *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  uint local_118;
  undefined4 uStack_114;
  longlong *plStack_110;
  longlong *plStack_108;
  undefined4 local_100;
  byte local_fc;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  undefined1 local_a1;
  undefined8 *local_a0;
  longlong *local_98;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  undefined8 *local_70;
  char local_64;
  undefined1 local_63;
  ushort local_62 [17];
  
  local_62[1] = 0xfffe;
  local_62[2] = 0xffff;
  local_62[3] = 0xffff;
  local_62[4] = 0xffff;
  local_190 = FUN_144b77940(param_1[0xe]);
  local_140 = FUN_144b77ad0(param_1[0xe]);
  local_1c8 = param_1[0x13];
  local_1c0 = (ulonglong)param_1[0x14] >> 1;
  local_14e = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_14e);
  bVar23 = 1;
  bVar25 = 1;
  local_1a7 = param_2;
  if (local_14e != 2) {
    local_1a7 = 1;
    bVar25 = *(byte *)((longlong)param_1 + 0x7e);
  }
  local_1a4 = (undefined4)param_1[0x11];
  local_1a0 = (undefined4)param_1[0x12];
  local_1b0 = &local_1c8;
  local_198 = &local_a1;
  if (local_14e == 2) {
    bVar23 = (byte)*(undefined2 *)((longlong)param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a8 = param_2;
  local_1a6 = bVar25;
  local_98 = param_1;
  local_f8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_f8 = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_160 = (undefined1 *)0x0;
  local_158 = 0x400000000;
  local_f0 = local_f8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar6 != 2)) {
    uVar7 = 0xff;
    if (iVar6 != 1) goto LAB_1428c2cd0;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428c2cd0;
  }
  uVar7 = 1;
LAB_1428c2cd0:
  plVar20 = local_98;
  local_62[0] = 0;
  FUN_144b77e20(local_98[0xe],0x116,local_62);
  uVar11 = (ulonglong)local_62[0];
  uVar28 = plVar20[0x12];
  uVar22 = uVar11;
  if ((longlong)uVar28 < (longlong)uVar11) {
    uVar22 = uVar28;
  }
  if (uVar11 == 0) {
    uVar22 = uVar28;
  }
  if (local_140 < (ulonglong)bVar25 * 4 * plVar20[0x11] * (longlong)(int)uVar22) {
    FUN_14020fad6(plVar20 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar7;
    iVar6 = FUN_144b77d80(plVar20[0xe]);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    local_64 = param_3;
    if ((int)local_158._4_4_ < iVar6) {
      FUN_14473dbc4(local_180,iVar6);
    }
    local_14c = (uint)bVar23;
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar2 = (undefined8 *)(lVar13 + 0x308);
    local_138 = (undefined8 *)(lVar13 + 0x310);
    local_148 = (int *)(lVar13 + 0xc60);
    bVar25 = 0;
    plVar20 = local_98;
    local_63 = param_2;
    while( true ) {
      uVar26 = local_63;
      pplVar29 = &local_f8;
      local_a8 = (uint)bVar25;
      if (local_14c < local_a8 || local_14c == bVar25) break;
      if (local_62[0] == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(pplVar29,&local_88);
        if (cVar5 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar12 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_130 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_128._0_4_ = SUB84(local_e0,0);
          uStack_128._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar17 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar17 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_130;
          plVar4 = plStack_80;
          if ((plVar17 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar4 = plVar17, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar17;
              (*(code *)*puVar18)(plVar12);
              LOCK();
              piVar3 = (int *)((longlong)plVar12 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              plVar4 = plStack_80;
              if (*piVar3 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_130);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_140;
          if ((ulonglong)(local_88[2] - lVar13) < local_140) {
            FUN_14112c458();
          }
        }
        lVar13 = FUN_144b82e30(plVar20[0xe],local_a8,*local_88,local_140);
        puVar18 = local_138;
        if (lVar13 != -1) {
          local_120 = &local_1b8;
          local_118 = (uint)local_88;
          uStack_114 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_110 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_108 = (longlong *)CONCAT71(plStack_108._1_7_,bVar25);
          puVar15 = (uint *)*puVar2;
          local_130 = plVar20;
          if (puVar15 != (uint *)0x0) goto LAB_1428c35f3;
LAB_1428c3590:
          uVar27 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          uStack_128 = pplVar29;
          if ((uVar27 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar27 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          FUN_140217a48(puVar2);
          puVar15 = (uint *)*puVar2;
          pplVar29 = uStack_128;
LAB_1428c35f3:
          puVar16 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 0xf);
          uVar27 = puVar15[0x12];
          do {
            puVar21 = (undefined8 *)((ulonglong)puVar16 & 0xfffffffffffffff0);
            if (puVar21 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar21 + 0x20;
              puVar15[0x12] = uVar27 + 1;
              local_a0 = puVar16;
              local_70 = puVar21;
              uStack_128 = pplVar29;
              FUN_1447247dc(puVar21,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar16 = &PTR_LAB_149ef74a0;
              puVar16[1] = local_130;
              puVar16[2] = uStack_128;
              puVar16[3] = local_120;
              puVar16[4] = CONCAT44(uStack_114,local_118);
              puVar16[5] = plStack_110;
              local_118 = 0;
              uStack_114 = 0;
              plStack_110 = (longlong *)0x0;
              *(undefined1 *)(puVar16 + 6) = plStack_108._0_1_;
              if (puVar16 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_1428c3786;
              }
              else {
                puVar18[0x16] = &LAB_146999a34;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428c3786:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428c37bc;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar27 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar28 = (ulonglong)uVar27;
                *(uint *)(puVar18 + 0x1e) = uVar27;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar28 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                  plVar20 = local_98;
                }
              }
              else {
                uVar28 = 0x6ff;
LAB_1428c37bc:
                *(int *)(puVar18 + 0x1e) = (int)uVar28;
              }
              uVar27 = (uint)uVar28;
              if ((uVar27 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar28 >> 10) & 3;
                iVar6 = 0;
                if ((uVar27 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar26 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar26 = 2;
                }
              }
              else {
                iVar6 = (uVar27 >> 7 & 2 | (uint)(uVar28 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                uVar26 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar26,iVar6,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              uVar28 = local_158;
              iVar6 = (int)local_158;
              uVar27 = (int)local_158 + 1;
              local_158 = CONCAT44(local_158._4_4_,uVar27);
              if (local_158._4_4_ < uVar27) {
                FUN_14476a5c8(local_180,uVar28 & 0xffffffff);
              }
              puVar19 = local_160;
              if (local_160 == (undefined1 *)0x0) {
                puVar19 = local_180;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar6 * 8) = local_70;
              FUN_14698d952(&local_118);
              FUN_14698d952(&local_88);
              goto LAB_1428c38df;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428c3590;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            puVar16 = (undefined8 *)((longlong)puVar15 + 0x67);
            uVar27 = 0;
          } while( true );
        }
LAB_1428c398b:
        FUN_14020fad6(plVar20 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        goto LAB_1428c39b1;
      }
      puVar18 = (undefined8 *)0x0;
LAB_1428c2dec:
      if ((longlong)puVar18 < plVar20[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        local_70 = puVar18;
        cVar5 = FUN_14698d83a(&local_f8,&local_88);
        if (cVar5 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_130 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_128._0_4_ = SUB84(local_e0,0);
          uStack_128._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar12 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_130;
          plVar17 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar17 = plVar12, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar4 = plStack_80 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              puVar16 = (undefined8 *)*plStack_80;
              plStack_80 = plVar12;
              (*(code *)*puVar16)(plVar20);
              LOCK();
              piVar3 = (int *)((longlong)plVar20 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              plVar17 = plStack_80;
              if (*piVar3 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar17 = plStack_80;
              }
            }
          }
          plStack_80 = plVar17;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_130);
          plVar20 = local_98;
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_140;
          if ((ulonglong)(local_88[2] - lVar13) < local_140) {
            FUN_14112c458();
          }
        }
        uVar27 = (int)plVar20[0x12] - (int)puVar18;
        if ((longlong)(ulonglong)((int)local_70 + (uint)local_62[0]) <= plVar20[0x12]) {
          uVar27 = (uint)local_62[0];
        }
        lVar13 = *local_88;
        lVar24 = (int)uVar27 * local_190;
        uVar7 = FUN_144b77d20(plVar20[0xe],local_70,local_a8);
        lVar13 = FUN_144b82e30(plVar20[0xe],uVar7,lVar13,lVar24);
        if (lVar13 != -1) {
          uStack_128 = &local_1b8;
          local_120 = &local_f8;
          plStack_110 = local_88;
          plStack_108 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_100 = SUB84(local_70,0);
          puVar15 = (uint *)*puVar2;
          local_130 = plVar20;
          local_118 = uVar27;
          local_fc = bVar25;
          if (puVar15 != (uint *)0x0) goto LAB_1428c304d;
LAB_1428c2fe6:
          puVar18 = local_138;
          uVar27 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar27 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar27 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          FUN_140217a48(puVar2);
          puVar15 = (uint *)*puVar2;
LAB_1428c304d:
          uVar28 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar27 = puVar15[0x12];
          do {
            puVar18 = (undefined8 *)(uVar28 & 0xfffffffffffffff0);
            if (puVar18 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar18 + 0x20;
              puVar15[0x12] = uVar27 + 1;
              local_188 = uVar28;
              local_a0 = puVar18;
              FUN_1447247dc(puVar18,0);
              puVar18 = local_a0;
              *local_a0 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar16 = &PTR_LAB_149ef7480;
              puVar16[1] = local_130;
              puVar16[2] = uStack_128;
              *(ulonglong *)((longlong)puVar16 + 0x14) =
                   CONCAT44((undefined4)local_120,uStack_128._4_4_);
              *(ulonglong *)((longlong)puVar16 + 0x1c) = CONCAT44(local_118,local_120._4_4_);
              puVar16[5] = plStack_110;
              puVar16[6] = plStack_108;
              plStack_110 = (longlong *)0x0;
              plStack_108 = (longlong *)0x0;
              *(byte *)((longlong)puVar16 + 0x3c) = local_fc;
              *(undefined4 *)(puVar16 + 7) = local_100;
              if (puVar16 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_1428c31ec;
              }
              else {
                puVar18[0x16] = &LAB_146999778;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428c31ec:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428c3222;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar27 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar28 = (ulonglong)uVar27;
                *(uint *)(puVar18 + 0x1e) = uVar27;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar28 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar28 = 0x6ff;
LAB_1428c3222:
                *(int *)(puVar18 + 0x1e) = (int)uVar28;
              }
              uVar27 = (uint)uVar28;
              if ((uVar27 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar28 >> 10) & 3;
                iVar6 = 0;
                if ((uVar27 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar26 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar26 = 2;
                }
              }
              else {
                iVar6 = (uVar27 >> 7 & 2 | (uint)(uVar28 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                uVar26 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar26,iVar6,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              uVar28 = local_158;
              iVar6 = (int)local_158;
              uVar27 = (int)local_158 + 1;
              local_158 = CONCAT44(local_158._4_4_,uVar27);
              if (local_158._4_4_ < uVar27) {
                FUN_14476a5c8(local_180,uVar28 & 0xffffffff);
              }
              puVar19 = local_160;
              if (local_160 == (undefined1 *)0x0) {
                puVar19 = local_180;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar6 * 8) = local_a0;
              FUN_14698d952(&plStack_110);
              FUN_14698d952(&local_88);
              puVar18 = (undefined8 *)(ulonglong)((int)local_70 + (uint)local_62[0]);
              plVar20 = local_98;
              goto LAB_1428c2dec;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428c2fe6;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            uVar28 = (longlong)puVar15 + 0x67;
            uVar27 = 0;
          } while( true );
        }
        goto LAB_1428c398b;
      }
LAB_1428c38df:
      bVar25 = bVar25 + 1;
    }
    uVar7 = local_8c;
    if (local_64 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_180,local_8c);
      FUN_14698da02();
      plVar20 = local_98;
      if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
        if (*local_148 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          local_88 = (longlong *)CONCAT71(local_88._1_7_,uVar26);
        }
        else {
          local_88 = (longlong *)CONCAT71(local_88._1_7_,uVar26);
        }
      }
      else {
        local_88 = (longlong *)CONCAT71(local_88._1_7_,uVar26);
      }
      local_e8 = 0;
      local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
      local_130 = (longlong *)&LAB_146999b16;
      plStack_80 = &local_1c8;
      uStack_128 = &local_88;
      FUN_1401f8d10(L"ParallelFor Task",(int)plVar20[0x12] * (int)plVar20[0x11],1);
      uVar7 = local_8c;
    }
  }
LAB_1428c39b1:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_180,uVar7);
  FUN_14588b8d6(local_180);
  while (plVar20 = local_f0, local_f0 != (longlong *)0x0) {
    plVar12 = local_f0 + 1;
    local_f0 = (longlong *)*local_f0;
    FUN_14698d952(plVar12);
    FUN_1400020a8(plVar20);
  }
  return;
}



// FUNCTION 1428c3b44 Unwind@1428c3b44 body=38 status=ok
// SIG undefined Unwind@1428c3b44(void)

void Unwind_1428c3b44(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c3b6c Unwind@1428c3b6c body=193 status=ok
// SIG undefined Unwind@1428c3b6c(void)

void Unwind_1428c3b6c(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x168) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x80) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xd0);
        **(undefined8 **)(param_2 + 0xd0) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428c3c2e Unwind@1428c3c2e body=83 status=ok
// SIG undefined Unwind@1428c3c2e(void)

void Unwind_1428c3c2e(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x168);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428c3c82 Unwind@1428c3c82 body=83 status=ok
// SIG undefined Unwind@1428c3c82(void)

void Unwind_1428c3c82(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x168);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428c3cd6 Unwind@1428c3cd6 body=64 status=ok
// SIG undefined Unwind@1428c3cd6(void)

void Unwind_1428c3cd6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf8);
  return;
}



// FUNCTION 1428c3d16 Unwind@1428c3d16 body=67 status=ok
// SIG undefined Unwind@1428c3d16(void)

void Unwind_1428c3d16(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428c3d5a Unwind@1428c3d5a body=38 status=ok
// SIG undefined Unwind@1428c3d5a(void)

void Unwind_1428c3d5a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c3d82 Unwind@1428c3d82 body=196 status=ok
// SIG undefined Unwind@1428c3d82(void)

void Unwind_1428c3d82(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x198) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x168) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xd0);
        **(undefined8 **)(param_2 + 0xd0) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428c3e46 Unwind@1428c3e46 body=95 status=ok
// SIG undefined Unwind@1428c3e46(void)

void Unwind_1428c3e46(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x198) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x198) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x198))(*(undefined8 **)(param_2 + 0x198),1);
    }
  }
  return;
}



// FUNCTION 1428c3ea6 Unwind@1428c3ea6 body=95 status=ok
// SIG undefined Unwind@1428c3ea6(void)

void Unwind_1428c3ea6(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x198) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x198) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x198))(*(undefined8 **)(param_2 + 0x198),1);
    }
  }
  return;
}



// FUNCTION 1428c3f06 Unwind@1428c3f06 body=64 status=ok
// SIG undefined Unwind@1428c3f06(void)

void Unwind_1428c3f06(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf0);
  return;
}



// FUNCTION 1428c3f46 Unwind@1428c3f46 body=67 status=ok
// SIG undefined Unwind@1428c3f46(void)

void Unwind_1428c3f46(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428c3f8a Unwind@1428c3f8a body=131 status=ok
// SIG undefined Unwind@1428c3f8a(void)

void Unwind_1428c3f8a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x88,*(undefined4 *)(param_2 + 0x17c));
  FUN_14588b8d6(param_2 + 0x88);
  while (puVar1 = *(undefined8 **)(param_2 + 0x118), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x118) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428c400e Unwind@1428c400e body=76 status=ok
// SIG undefined Unwind@1428c400e(void)

void Unwind_1428c400e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428c405a Unwind@1428c405a body=76 status=ok
// SIG undefined Unwind@1428c405a(void)

void Unwind_1428c405a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428c40a6 Unwind@1428c40a6 body=38 status=ok
// SIG undefined Unwind@1428c40a6(void)

void Unwind_1428c40a6(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c40ce FUN_1428c40ce body=2406 status=ok
// SIG undefined FUN_1428c40ce(void)

void FUN_1428c40ce(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  short sVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  byte bVar20;
  undefined1 uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  byte bVar26;
  int iVar27;
  bool bVar28;
  undefined8 local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
  undefined1 local_1a8;
  char local_1a7;
  byte local_1a6;
  int local_1a4;
  int local_1a0;
  undefined1 *local_198;
  int *local_190;
  ulonglong local_188;
  ulonglong local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  longlong local_148;
  longlong *local_140;
  longlong *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **local_100;
  longlong *plStack_f8;
  int local_f0;
  int iStack_ec;
  undefined8 **local_e8;
  longlong *plStack_e0;
  undefined4 local_d8;
  int iStack_d4;
  int local_d0;
  undefined8 local_c8;
  short local_ba;
  uint local_b8;
  uint local_b4;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  int local_8c;
  undefined8 **local_88;
  longlong *plStack_80;
  undefined1 local_75;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  local_1c8 = *(undefined8 *)(param_1 + 0x98);
  local_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 1;
  local_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&local_ba);
  sVar5 = local_ba;
  bVar20 = 1;
  bVar28 = local_ba == 2;
  if (!bVar28) {
    bVar20 = *(byte *)(param_1 + 0x7e);
  }
  local_70 = *(int *)(param_1 + 0x88);
  local_6c = *(int *)(param_1 + 0x90);
  iVar8 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar8 == 0) ||
     (iVar8 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&local_6c), iVar8 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  local_1b0 = &local_1c8;
  local_1a7 = bVar28 * '\x03' + '\x01';
  local_1a8 = 4;
  local_1a4 = local_70;
  local_1a0 = local_6c;
  local_198 = &local_75;
  bVar26 = 1;
  if (sVar5 == 2) {
    bVar26 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a6 = bVar20;
  local_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar8 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar8 != 2)) {
    local_74 = 0xff;
    if (iVar8 != 1) goto LAB_1428c429a;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_1428c429a;
  }
  local_74 = 1;
LAB_1428c429a:
  local_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (local_180 < (ulonglong)((longlong)(int)((uint)bVar20 * local_6c * local_70) << 2)) {
    FUN_14020fad6(param_1 + 0x58,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    iVar8 = FUN_144b7b020(*(undefined8 *)(param_1 + 0x70));
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    if ((int)local_150._4_4_ < iVar8) {
      FUN_14473dbc4(local_178,iVar8);
    }
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar13 + 0x308);
    local_b0 = (undefined8 *)(lVar13 + 0x310);
    local_190 = (int *)(lVar13 + 0xc60);
    local_b4 = (uint)bVar26;
    for (local_c8 = 0; local_b8 = (uint)local_c8 & 0xff, local_b8 < local_b4;
        local_c8 = CONCAT71((int7)((ulonglong)local_c8 >> 8),(char)local_c8 + '\x01')) {
      local_8c = 0;
      for (iVar8 = 0; lVar13 = *(longlong *)(param_1 + 0x90), iVar8 < lVar13;
          iVar8 = iVar8 + local_6c) {
        iVar4 = (int)lVar13 - iVar8;
        if (local_6c + iVar8 <= lVar13) {
          iVar4 = local_6c;
        }
        iVar25 = 0;
        iVar27 = 0;
LAB_1428c4394:
        if ((longlong)iVar25 < *(longlong *)(param_1 + 0x88)) {
          local_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar7 = FUN_14698d83a(&local_a8,&local_88);
          if (cVar7 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar19 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            local_100 = (undefined8 **)(plStack_f8 + 2);
            plStack_f8[2] = 0;
            plStack_f8[3] = 0;
            plStack_f8[4] = 0;
            if (plStack_f8 == (longlong *)0x0) {
              plVar12 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_f8 + 1) = (int)plStack_f8[1] + 1;
              UNLOCK();
              plVar12 = plStack_f8;
            }
            local_148 = 0;
            local_140 = plStack_f8;
            local_88 = local_100;
            plVar6 = plStack_80;
            if ((plVar12 != plStack_80) &&
               (local_140 = (longlong *)0x0, plVar6 = plVar12, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar17 = (undefined8 *)*plStack_80;
                plStack_80 = plVar12;
                (*(code *)*puVar17)(plVar19);
                LOCK();
                piVar2 = (int *)((longlong)plVar19 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar6 = plStack_80;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar19 + 0x10))(plVar19);
                  plVar6 = plStack_80;
                }
              }
            }
            plStack_80 = plVar6;
            FUN_14698d952(&local_148);
            FUN_14698d9aa(&local_100);
            puVar17 = local_88[1];
            local_88[1] = (undefined8 *)((longlong)puVar17 + local_180);
            if ((ulonglong)((longlong)local_88[2] - (longlong)puVar17) < local_180) {
              FUN_14112c458();
            }
          }
          lVar13 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*local_88,iVar25,iVar8,0,
                                 (short)local_b8);
          if (-1 < lVar13) {
            local_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar25;
            if ((longlong)(local_70 + iVar25) <= *(longlong *)(param_1 + 0x88)) {
              local_f0 = local_70;
            }
            local_100 = &local_a8;
            plStack_f8 = &local_1b8;
            local_e8 = local_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            local_d8 = CONCAT31(local_d8._1_3_,(char)local_c8);
            local_d0 = local_8c;
            puVar15 = (uint *)*puVar3;
            iStack_ec = iVar4;
            iStack_d4 = iVar27;
            if (puVar15 != (uint *)0x0) goto LAB_1428c45dd;
LAB_1428c4573:
            uVar22 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar22 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar22 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar14 = (undefined4 *)*local_b0;
            *local_b0 = 0;
            if (puVar14 == (undefined4 *)0x0) {
              puVar14 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar14 = 0xffffffff;
            *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar3 = puVar14;
            FUN_140217a48(puVar3);
            puVar15 = (uint *)*puVar3;
LAB_1428c45dd:
            uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
            uVar22 = puVar15[0x12];
            do {
              puVar17 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
              if (puVar17 + 0x20 <= puVar15 + 0x4000) {
                *(undefined8 **)(puVar15 + 0x10) = puVar17 + 0x20;
                puVar15[0x12] = uVar22 + 1;
                local_188 = uVar24;
                local_68 = puVar17;
                FUN_1447247dc(puVar17,0);
                puVar17 = local_68;
                *local_68 = &PTR_FUN_149ef6718;
                local_148 = 0;
                local_138 = (longlong *)0x0;
                puVar16 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar16 = &PTR_LAB_149ef74c0;
                puVar16[1] = local_100;
                puVar16[2] = plStack_f8;
                puVar16[3] = CONCAT44(iStack_ec,local_f0);
                puVar16[4] = local_e8;
                puVar16[5] = plStack_e0;
                local_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar16 + 7) = local_d0;
                puVar16[6] = CONCAT44(iStack_d4,local_d8);
                if (puVar16 + 1 == (longlong *)0x0) {
                  puVar17[0x16] = local_148;
                  puVar17[0x18] = puVar16;
                  *(undefined4 *)(puVar17 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar17 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar17 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar17 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_11c;
                  if (local_148 != 0) goto LAB_1428c4769;
                }
                else {
                  puVar17[0x16] = &LAB_146999b32;
                  puVar17[0x18] = puVar16;
                  *(undefined4 *)(puVar17 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar17 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar17 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar17 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_11c;
LAB_1428c4769:
                  local_148 = 0;
                }
                local_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_190 != 2)) {
                  uVar24 = 0x8ff;
                  if (*local_190 != 1) goto LAB_1428c479c;
                  DVar10 = FUN_140ad26c0();
                  DVar11 = GetCurrentThreadId();
                  uVar22 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                  uVar24 = (ulonglong)uVar22;
                  *(uint *)(local_68 + 0x1e) = uVar22;
                  puVar17 = local_68;
                  if (local_148 != 0) {
                    plVar19 = local_138;
                    if (local_138 == (longlong *)0x0) {
                      plVar19 = (longlong *)&local_128;
                    }
                    (**(code **)(*plVar19 + 0x10))();
                    uVar24 = (ulonglong)*(uint *)(local_68 + 0x1e);
                    puVar17 = local_68;
                  }
                }
                else {
                  uVar24 = 0x6ff;
LAB_1428c479c:
                  *(int *)(puVar17 + 0x1e) = (int)uVar24;
                }
                uVar22 = (uint)uVar24;
                if ((uVar22 & 0xff) == 0xff) {
                  uVar9 = (uint)(uVar24 >> 10) & 3;
                  iVar23 = 0;
                  if ((uVar22 >> 9 & 1) == 0 || uVar9 < 2) {
                    uVar21 = (&DAT_149e38edc)[uVar9];
                  }
                  else {
                    uVar21 = 2;
                  }
                }
                else {
                  iVar23 = (uVar22 >> 7 & 2 | (uint)(uVar24 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar22 & 0xff) * 4);
                  uVar21 = 5;
                }
                FUN_144a24082(puVar17,L"GraphTask",uVar21,iVar23,0);
                if (puVar17 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                  UNLOCK();
                }
                local_148 = CONCAT71(local_148._1_7_,1);
                FUN_1447439e4(puVar17,&local_148);
                uVar24 = local_150;
                iVar23 = (int)local_150;
                uVar22 = (int)local_150 + 1;
                local_150 = CONCAT44(local_150._4_4_,uVar22);
                if (local_150._4_4_ < uVar22) {
                  FUN_14476a5c8(local_178,uVar24 & 0xffffffff);
                }
                puVar18 = local_158;
                if (local_158 == (undefined1 *)0x0) {
                  puVar18 = local_178;
                }
                *(undefined8 **)(puVar18 + (longlong)iVar23 * 8) = local_68;
                FUN_14698d952(&local_e8);
                FUN_14698d952(&local_88);
                iVar25 = iVar25 + local_70;
                iVar27 = iVar27 + 1;
                goto LAB_1428c4394;
              }
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
              LOCK();
              uVar9 = *puVar15;
              *puVar15 = *puVar15 + uVar22 + 1;
              UNLOCK();
              if ((uVar9 ^ uVar22) != 0xffffffff) goto LAB_1428c4573;
              puVar15 = (uint *)*puVar3;
              *puVar15 = 0xffffffff;
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
              puVar15[0x12] = 0;
              *puVar3 = puVar15;
              uVar24 = (longlong)puVar15 + 0x67;
              uVar22 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0x58,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_88);
          goto LAB_1428c49bd;
        }
        local_8c = local_8c + 1;
      }
    }
  }
LAB_1428c49bd:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,local_74);
  FUN_14588b8d6(local_178);
  while (puVar3 = local_a0, local_a0 != (undefined8 *)0x0) {
    puVar17 = local_a0 + 1;
    local_a0 = (undefined8 *)*local_a0;
    FUN_14698d952(puVar17);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 1428c4a34 Unwind@1428c4a34 body=38 status=ok
// SIG undefined Unwind@1428c4a34(void)

void Unwind_1428c4a34(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c4a5c Unwind@1428c4a5c body=196 status=ok
// SIG undefined Unwind@1428c4a5c(void)

void Unwind_1428c4a5c(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x70) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0x148);
        **(undefined8 **)(param_2 + 0x148) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428c4b20 Unwind@1428c4b20 body=95 status=ok
// SIG undefined Unwind@1428c4b20(void)

void Unwind_1428c4b20(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428c4b80 Unwind@1428c4b80 body=95 status=ok
// SIG undefined Unwind@1428c4b80(void)

void Unwind_1428c4b80(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428c4be0 Unwind@1428c4be0 body=67 status=ok
// SIG undefined Unwind@1428c4be0(void)

void Unwind_1428c4be0(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x110);
  return;
}



// FUNCTION 1428c4c24 Unwind@1428c4c24 body=67 status=ok
// SIG undefined Unwind@1428c4c24(void)

void Unwind_1428c4c24(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428c4c68 Unwind@1428c4c68 body=38 status=ok
// SIG undefined Unwind@1428c4c68(void)

void Unwind_1428c4c68(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c4c90 Unwind@1428c4c90 body=130 status=ok
// SIG undefined Unwind@1428c4c90(void)

void Unwind_1428c4c90(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x80,*(undefined4 *)(param_2 + 0x184));
  FUN_14588b8d6(param_2 + 0x80);
  while (puVar1 = *(undefined8 **)(param_2 + 0x158), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x158) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428c4d12 Unwind@1428c4d12 body=73 status=ok
// SIG undefined Unwind@1428c4d12(void)

void Unwind_1428c4d12(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xb0);
  FUN_14698d9aa(param_2 + 0xf8);
  return;
}



// FUNCTION 1428c4d5c FUN_1428c4d5c body=3602 status=ok
// SIG undefined FUN_1428c4d5c(void)

void FUN_1428c4d5c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined1 uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  byte bVar26;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  char local_1a7;
  byte local_1a6;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 *local_198;
  longlong local_190;
  ulonglong local_188;
  int *local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  short local_146;
  uint local_144;
  ulonglong local_140;
  ulonglong local_138;
  undefined8 *local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  longlong *plStack_c0;
  longlong *plStack_b8;
  int local_b0;
  undefined1 local_ac;
  longlong *local_a8;
  longlong *local_a0;
  undefined1 local_8d;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  ushort local_6a;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_190 = FUN_144b77940(param_1[0xe]);
  local_138 = FUN_144b77ad0(param_1[0xe]);
  local_1c8 = param_1[0x13];
  local_1c0 = (ulonglong)param_1[0x14] >> 1;
  local_146 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_146);
  bVar26 = 1;
  local_1a7 = (local_146 == 2) * '\x03' + '\x01';
  if (local_146 != 2) {
    bVar26 = *(byte *)((longlong)param_1 + 0x7e);
  }
  local_1a4 = (undefined4)param_1[0x11];
  local_1a0 = (undefined4)param_1[0x12];
  local_1b0 = &local_1c8;
  local_1a8 = 4;
  local_198 = &local_8d;
  uVar22 = 1;
  if (local_146 == 2) {
    uVar22 = (uint)*(ushort *)((longlong)param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a6 = bVar26;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar6 != 2)) {
    uVar7 = 0xff;
    if (iVar6 != 1) goto LAB_1428c4eb0;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428c4eb0;
  }
  uVar7 = 1;
LAB_1428c4eb0:
  local_6a = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_6a);
  uVar11 = (ulonglong)local_6a;
  uVar24 = param_1[0x12];
  uVar20 = uVar11;
  if ((longlong)uVar24 < (longlong)uVar11) {
    uVar20 = uVar24;
  }
  if (uVar11 == 0) {
    uVar20 = uVar24;
  }
  if (local_138 < (ulonglong)bVar26 * 4 * param_1[0x11] * (longlong)(int)uVar20) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar7;
    iVar6 = FUN_144b77d80(param_1[0xe]);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if ((int)local_150._4_4_ < iVar6) {
      FUN_14473dbc4(local_178,iVar6);
    }
    local_144 = uVar22 & 0xff;
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar13 + 0x308);
    local_130 = (undefined8 *)(lVar13 + 0x310);
    local_180 = (int *)(lVar13 + 0xc60);
    uVar24 = 0;
    while( true ) {
      uVar20 = uVar24 & 0xff;
      uVar7 = local_8c;
      if (local_144 <= (uint)uVar20) break;
      local_188 = uVar24;
      if (local_6a == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar5 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar19 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar12 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar4 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar4 = plVar12, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar17 = (undefined8 *)*plStack_80;
              plStack_80 = plVar12;
              (*(code *)*puVar17)(plVar19);
              LOCK();
              piVar2 = (int *)((longlong)plVar19 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar4 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_138;
          if ((ulonglong)(local_88[2] - lVar13) < local_138) {
            FUN_14112c458();
          }
        }
        lVar13 = FUN_144b82e30(param_1[0xe],uVar20,*local_88,local_138);
        puVar17 = local_130;
        if (lVar13 != -1) {
          uStack_d8 = &local_a8;
          local_d0 = &local_1b8;
          local_c8 = (uint)local_88;
          uStack_c4 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_c0 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_b8 = (longlong *)CONCAT71(plStack_b8._1_7_,(char)uVar24);
          puVar15 = (uint *)*puVar3;
          local_e0 = param_1;
          if (puVar15 != (uint *)0x0) goto LAB_1428c574d;
LAB_1428c56ea:
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar17;
          *puVar17 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          FUN_140217a48(puVar3);
          puVar15 = (uint *)*puVar3;
LAB_1428c574d:
          uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar22 = puVar15[0x12];
          do {
            puVar16 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
            if (puVar16 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar16 + 0x20;
              puVar15[0x12] = uVar22 + 1;
              local_140 = uVar24;
              local_68 = puVar16;
              FUN_1447247dc(puVar16,0);
              puVar17 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar16 = &PTR_LAB_149ef7500;
              puVar16[1] = local_e0;
              puVar16[2] = uStack_d8;
              puVar16[3] = local_d0;
              puVar16[4] = CONCAT44(uStack_c4,local_c8);
              puVar16[5] = plStack_c0;
              local_c8 = 0;
              uStack_c4 = 0;
              plStack_c0 = (longlong *)0x0;
              *(undefined1 *)(puVar16 + 6) = plStack_b8._0_1_;
              if (puVar16 + 1 == (longlong *)0x0) {
                puVar17[0x16] = local_128;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_1428c58d3;
              }
              else {
                puVar17[0x16] = &LAB_14699a0da;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428c58d3:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428c5906;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar22 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar24 = (ulonglong)uVar22;
                *(uint *)(puVar17 + 0x1e) = uVar22;
                if (local_128 != 0) {
                  plVar19 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar19 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar19 + 0x10))();
                  uVar24 = (ulonglong)*(uint *)(puVar17 + 0x1e);
                }
              }
              else {
                uVar24 = 0x6ff;
LAB_1428c5906:
                *(int *)(puVar17 + 0x1e) = (int)uVar24;
              }
              uVar22 = (uint)uVar24;
              if ((uVar22 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar24 >> 10) & 3;
                iVar6 = 0;
                if ((uVar22 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar21 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar21 = 2;
                }
              }
              else {
                iVar6 = (uVar22 >> 7 & 2 | (uint)(uVar24 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar22 & 0xff) * 4);
                uVar21 = 5;
              }
              FUN_144a24082(puVar17,L"GraphTask",uVar21,iVar6,0);
              if (puVar17 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                UNLOCK();
              }
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar17,&local_128);
              iVar6 = (int)local_150;
              uVar24 = local_150 & 0xffffffff;
              uVar22 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar22);
              if (local_150._4_4_ < uVar22) {
                FUN_14476a5c8(local_178,uVar24);
              }
              puVar18 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar18 = local_178;
              }
              *(undefined8 **)(puVar18 + (longlong)iVar6 * 8) = local_68;
              FUN_14698d952(&local_c8);
              FUN_14698d952(&local_88);
              goto LAB_1428c5a23;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428c56ea;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
LAB_1428c5ac2:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        break;
      }
      uVar24 = 0;
LAB_1428c4fa0:
      iVar6 = (int)uVar24;
      if ((longlong)uVar24 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar5 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar19 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar12 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar4 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar4 = plVar12, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar17 = (undefined8 *)*plStack_80;
              plStack_80 = plVar12;
              (*(code *)*puVar17)(plVar19);
              LOCK();
              piVar2 = (int *)((longlong)plVar19 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar4 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_138;
          if ((ulonglong)(local_88[2] - lVar13) < local_138) {
            FUN_14112c458();
          }
        }
        uVar22 = (int)param_1[0x12] - iVar6;
        if ((longlong)(ulonglong)(iVar6 + (uint)local_6a) <= param_1[0x12]) {
          uVar22 = (uint)local_6a;
        }
        lVar13 = *local_88;
        lVar25 = (int)uVar22 * local_190;
        uVar7 = FUN_144b77d20(param_1[0xe],uVar24,uVar20);
        lVar13 = FUN_144b82e30(param_1[0xe],uVar7,lVar13,lVar25);
        if (lVar13 != -1) {
          uStack_d8 = &local_1b8;
          local_d0 = &local_a8;
          plStack_c0 = local_88;
          plStack_b8 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_ac = (undefined1)local_188;
          puVar15 = (uint *)*puVar3;
          local_e0 = param_1;
          local_c8 = uVar22;
          local_b0 = iVar6;
          if (puVar15 != (uint *)0x0) goto LAB_1428c51e2;
LAB_1428c517b:
          puVar17 = local_130;
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar17;
          *puVar17 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          FUN_140217a48(puVar3);
          puVar15 = (uint *)*puVar3;
LAB_1428c51e2:
          uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar22 = puVar15[0x12];
          do {
            puVar17 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
            if (puVar17 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar17 + 0x20;
              puVar15[0x12] = uVar22 + 1;
              local_140 = uVar24;
              local_68 = puVar17;
              FUN_1447247dc(puVar17,0);
              puVar17 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar16 = &PTR_LAB_149ef74e0;
              puVar16[1] = local_e0;
              puVar16[2] = uStack_d8;
              *(ulonglong *)((longlong)puVar16 + 0x14) =
                   CONCAT44((undefined4)local_d0,uStack_d8._4_4_);
              *(ulonglong *)((longlong)puVar16 + 0x1c) = CONCAT44(local_c8,local_d0._4_4_);
              puVar16[5] = plStack_c0;
              puVar16[6] = plStack_b8;
              plStack_c0 = (longlong *)0x0;
              plStack_b8 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar16 + 0x3c) = local_ac;
              *(int *)(puVar16 + 7) = local_b0;
              if (puVar16 + 1 == (longlong *)0x0) {
                puVar17[0x16] = local_128;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_1428c536b;
              }
              else {
                puVar17[0x16] = &LAB_146999e88;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428c536b:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428c539e;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar22 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar24 = (ulonglong)uVar22;
                *(uint *)(puVar17 + 0x1e) = uVar22;
                if (local_128 != 0) {
                  plVar19 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar19 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar19 + 0x10))();
                  uVar24 = (ulonglong)*(uint *)(puVar17 + 0x1e);
                }
              }
              else {
                uVar24 = 0x6ff;
LAB_1428c539e:
                *(int *)(puVar17 + 0x1e) = (int)uVar24;
              }
              uVar22 = (uint)uVar24;
              if ((uVar22 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar24 >> 10) & 3;
                iVar23 = 0;
                if ((uVar22 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar21 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar21 = 2;
                }
              }
              else {
                iVar23 = (uVar22 >> 7 & 2 | (uint)(uVar24 >> 9) & 1) +
                         *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar22 & 0xff) * 4);
                uVar21 = 5;
              }
              FUN_144a24082(puVar17,L"GraphTask",uVar21,iVar23,0);
              if (puVar17 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                UNLOCK();
              }
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar17,&local_128);
              uVar24 = local_150;
              iVar23 = (int)local_150;
              uVar22 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar22);
              if (local_150._4_4_ < uVar22) {
                FUN_14476a5c8(local_178,uVar24 & 0xffffffff);
              }
              puVar18 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar18 = local_178;
              }
              *(undefined8 **)(puVar18 + (longlong)iVar23 * 8) = local_68;
              FUN_14698d952(&plStack_c0);
              FUN_14698d952(&local_88);
              uVar24 = (ulonglong)(iVar6 + (uint)local_6a);
              goto LAB_1428c4fa0;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428c517b;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
        goto LAB_1428c5ac2;
      }
LAB_1428c5a23:
      uVar24 = CONCAT71((int7)(local_188 >> 8),(char)local_188 + '\x01');
    }
  }
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,uVar7);
  FUN_14588b8d6(local_178);
  while (plVar19 = local_a0, local_a0 != (longlong *)0x0) {
    plVar12 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar12);
    FUN_1400020a8(plVar19);
  }
  return;
}



// FUNCTION 1428c5b6e Unwind@1428c5b6e body=38 status=ok
// SIG undefined Unwind@1428c5b6e(void)

void Unwind_1428c5b6e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c5b96 Unwind@1428c5b96 body=193 status=ok
// SIG undefined Unwind@1428c5b96(void)

void Unwind_1428c5b96(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xb8) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 200);
        **(undefined8 **)(param_2 + 200) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428c5c58 Unwind@1428c5c58 body=83 status=ok
// SIG undefined Unwind@1428c5c58(void)

void Unwind_1428c5c58(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 400);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428c5cac Unwind@1428c5cac body=83 status=ok
// SIG undefined Unwind@1428c5cac(void)

void Unwind_1428c5cac(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 400);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428c5d00 Unwind@1428c5d00 body=67 status=ok
// SIG undefined Unwind@1428c5d00(void)

void Unwind_1428c5d00(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x138);
  return;
}



// FUNCTION 1428c5d44 Unwind@1428c5d44 body=67 status=ok
// SIG undefined Unwind@1428c5d44(void)

void Unwind_1428c5d44(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428c5d88 Unwind@1428c5d88 body=38 status=ok
// SIG undefined Unwind@1428c5d88(void)

void Unwind_1428c5d88(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c5db0 Unwind@1428c5db0 body=193 status=ok
// SIG undefined Unwind@1428c5db0(void)

void Unwind_1428c5db0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xb8) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 200);
        **(undefined8 **)(param_2 + 200) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428c5e72 Unwind@1428c5e72 body=95 status=ok
// SIG undefined Unwind@1428c5e72(void)

void Unwind_1428c5e72(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428c5ed2 Unwind@1428c5ed2 body=95 status=ok
// SIG undefined Unwind@1428c5ed2(void)

void Unwind_1428c5ed2(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428c5f32 Unwind@1428c5f32 body=67 status=ok
// SIG undefined Unwind@1428c5f32(void)

void Unwind_1428c5f32(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  return;
}



// FUNCTION 1428c5f76 Unwind@1428c5f76 body=67 status=ok
// SIG undefined Unwind@1428c5f76(void)

void Unwind_1428c5f76(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428c5fba Unwind@1428c5fba body=38 status=ok
// SIG undefined Unwind@1428c5fba(void)

void Unwind_1428c5fba(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c5fe2 Unwind@1428c5fe2 body=130 status=ok
// SIG undefined Unwind@1428c5fe2(void)

void Unwind_1428c5fe2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x80,*(undefined4 *)(param_2 + 0x16c));
  FUN_14588b8d6(param_2 + 0x80);
  while (puVar1 = *(undefined8 **)(param_2 + 0x158), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x158) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428c6064 Unwind@1428c6064 body=76 status=ok
// SIG undefined Unwind@1428c6064(void)

void Unwind_1428c6064(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428c60b0 Unwind@1428c60b0 body=76 status=ok
// SIG undefined Unwind@1428c60b0(void)

void Unwind_1428c60b0(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428c60fc FUN_1428c60fc body=2752 status=ok
// SIG undefined FUN_1428c60fc(void)

void FUN_1428c60fc(longlong ******param_1,undefined1 param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *******ppppppplVar2;
  int *piVar3;
  longlong *****ppppplVar4;
  longlong ******pppppplVar5;
  longlong ******pppppplVar6;
  int iVar7;
  short sVar8;
  longlong *******ppppppplVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  longlong *******ppppppplVar15;
  longlong lVar16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  longlong *plVar22;
  byte bVar23;
  int iVar24;
  byte bVar25;
  undefined1 uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  int iVar31;
  undefined4 in_stack_fffffffffffffe10;
  undefined2 uVar32;
  longlong *****local_1d8;
  longlong *****local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7;
  byte local_1c6;
  int local_1c4;
  int local_1c0;
  undefined1 *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined1 local_1a0 [32];
  undefined1 *local_180;
  undefined8 local_178;
  longlong *****local_170;
  ulonglong local_168;
  longlong ******local_160;
  longlong ******pppppplStack_158;
  int local_150;
  int iStack_14c;
  longlong ******local_148;
  longlong ******pppppplStack_140;
  undefined4 local_138;
  int iStack_134;
  int local_130;
  undefined8 local_128;
  int *local_120;
  longlong local_118;
  longlong ******local_110;
  longlong *local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  short local_ca;
  uint local_c8;
  uint local_c4;
  undefined8 *local_c0;
  longlong *****local_b8;
  longlong *****local_b0;
  int local_a0;
  undefined1 local_99;
  longlong ******local_98;
  longlong ******pppppplStack_90;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined8 *local_70;
  char local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_144b77940(param_1[0xe]);
  FUN_144b77ad0(param_1[0xe]);
  local_170 = param_1[0x13];
  local_168 = (ulonglong)param_1[0x14] >> 1;
  local_ca = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_ca);
  sVar8 = local_ca;
  bVar23 = 1;
  uVar26 = param_2;
  if (local_ca != 2) {
    bVar23 = *(byte *)((longlong)param_1 + 0x7e);
    uVar26 = 1;
  }
  local_7c = *(int *)(param_1 + 0x11);
  local_74 = *(int *)(param_1 + 0x12);
  iVar11 = FUN_144b77e20(param_1[0xe],0x142);
  if ((iVar11 == 0) || (iVar11 = FUN_144b77e20(param_1[0xe],0x143,&local_74), iVar11 == 0)) {
    FUN_14020fad6(param_1 + 0xb,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  local_1d0 = (longlong *****)&local_170;
  local_1c4 = local_7c;
  local_1c0 = local_74;
  local_1b8 = &local_99;
  bVar25 = 1;
  if (sVar8 == 2) {
    bVar25 = (byte)*(undefined2 *)((longlong)param_1 + 0x7e);
  }
  local_1d8 = (longlong *****)param_1;
  local_1c8 = param_2;
  local_1c7 = uVar26;
  local_1c6 = bVar23;
  local_b8 = (longlong *****)FUN_14001cc68(0x18,0x10);
  *local_b8 = (longlong ****)0x0;
  local_b8[1] = (longlong ****)0x0;
  local_b8[2] = (longlong ****)0x0;
  local_180 = (undefined1 *)0x0;
  local_178 = 0x400000000;
  local_b0 = local_b8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar11 != 2)) {
    uVar30 = 0xff;
    if (iVar11 != 1) goto LAB_1428c62c9;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_1428c62c9;
  }
  uVar30 = 1;
LAB_1428c62c9:
  local_1a8 = FUN_144b7ac40(param_1[0xe]);
  if (local_1a8 < (ulonglong)((longlong)(int)((uint)bVar23 * local_74 * local_7c) << 3)) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_78 = uVar30;
    iVar11 = FUN_144b7b020(param_1[0xe]);
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    local_62 = param_3;
    local_61 = param_2;
    if ((int)local_178._4_4_ < iVar11) {
      FUN_14473dbc4(local_1a0,iVar11);
    }
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (undefined8 *)(lVar16 + 0x308);
    local_c0 = (undefined8 *)(lVar16 + 0x310);
    local_120 = (int *)(lVar16 + 0xc60);
    local_c4 = (uint)bVar25;
    for (local_128 = 0; local_c8 = (uint)local_128 & 0xff, local_c8 < local_c4;
        local_128 = CONCAT71((int7)((ulonglong)local_128 >> 8),(char)local_128 + '\x01')) {
      local_a0 = 0;
      for (iVar11 = 0; ppppplVar4 = param_1[0x12], (longlong)iVar11 < (longlong)ppppplVar4;
          iVar11 = iVar11 + local_74) {
        iVar7 = (int)ppppplVar4 - iVar11;
        if ((longlong)(local_74 + iVar11) <= (longlong)ppppplVar4) {
          iVar7 = local_74;
        }
        iVar31 = 0;
        iVar24 = 0;
LAB_1428c63d5:
        uVar32 = (undefined2)((uint)in_stack_fffffffffffffe10 >> 0x10);
        if ((longlong)iVar31 < (longlong)param_1[0x11]) {
          local_98 = (longlong ******)0x0;
          pppppplStack_90 = (longlong ******)0x0;
          cVar10 = FUN_14698d83a(&local_b8,&local_98);
          if (cVar10 == '\0') {
            pppppplStack_158 = (longlong ******)FUN_14001cc68(0x28,0x10);
            pppppplVar6 = pppppplStack_90;
            pppppplStack_158[1] = (longlong *****)&DAT_100000001;
            *pppppplStack_158 = (longlong *****)&PTR_LAB_149ef6700;
            local_160 = pppppplStack_158 + 2;
            pppppplStack_158[2] = (longlong *****)0x0;
            pppppplStack_158[3] = (longlong *****)0x0;
            pppppplStack_158[4] = (longlong *****)0x0;
            if ((longlong *******)pppppplStack_158 == (longlong *******)0x0) {
              ppppppplVar15 = (longlong *******)0x0;
            }
            else {
              LOCK();
              *(int *)(pppppplStack_158 + 1) = *(int *)(pppppplStack_158 + 1) + 1;
              UNLOCK();
              ppppppplVar15 = (longlong *******)pppppplStack_158;
            }
            local_118 = 0;
            local_110 = pppppplStack_158;
            local_98 = local_160;
            ppppppplVar9 = (longlong *******)pppppplStack_90;
            if ((ppppppplVar15 != (longlong *******)pppppplStack_90) &&
               (local_110 = (longlong ******)0x0, ppppppplVar9 = ppppppplVar15,
               (longlong *******)pppppplStack_90 != (longlong *******)0x0)) {
              LOCK();
              ppppppplVar2 = (longlong *******)(pppppplStack_90 + 1);
              *(int *)ppppppplVar2 = *(int *)ppppppplVar2 + -1;
              UNLOCK();
              if (*(int *)ppppppplVar2 == 0) {
                pppppplVar5 = (longlong ******)*pppppplStack_90;
                pppppplStack_90 = (longlong ******)ppppppplVar15;
                (*(code *)*pppppplVar5)(pppppplVar6);
                LOCK();
                piVar3 = (int *)((longlong)pppppplVar6 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                ppppppplVar9 = (longlong *******)pppppplStack_90;
                if (*piVar3 == 0) {
                  (*(code *)(*pppppplVar6)[2])(pppppplVar6);
                  ppppppplVar9 = (longlong *******)pppppplStack_90;
                }
              }
            }
            pppppplStack_90 = (longlong ******)ppppppplVar9;
            FUN_14698d952(&local_118);
            FUN_14698d9aa(&local_160);
            pppppplVar6 = (longlong ******)local_98[1];
            local_98[1] = (longlong *****)((longlong)pppppplVar6 + local_1a8);
            if ((ulonglong)((longlong)local_98[2] - (longlong)pppppplVar6) < local_1a8) {
              FUN_14112c458();
            }
          }
          in_stack_fffffffffffffe10 = CONCAT22(uVar32,(short)local_c8);
          lVar16 = FUN_144b82d60(param_1[0xe],*local_98,iVar31,iVar11,0,in_stack_fffffffffffffe10);
          if (-1 < lVar16) {
            local_150 = (int)param_1[0x11] - iVar31;
            if ((longlong)(local_7c + iVar31) <= (longlong)param_1[0x11]) {
              local_150 = local_7c;
            }
            local_160 = &local_b8;
            pppppplStack_158 = &local_1d8;
            local_148 = local_98;
            pppppplStack_140 = pppppplStack_90;
            if ((longlong *******)pppppplStack_90 != (longlong *******)0x0) {
              LOCK();
              *(int *)(pppppplStack_90 + 1) = *(int *)(pppppplStack_90 + 1) + 1;
              UNLOCK();
            }
            local_138 = CONCAT31(local_138._1_3_,(char)local_128);
            local_130 = local_a0;
            puVar18 = (uint *)*puVar1;
            iStack_14c = iVar7;
            iStack_134 = iVar24;
            if (puVar18 != (uint *)0x0) goto LAB_1428c661b;
LAB_1428c65af:
            uVar27 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar27 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar27 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar17 = (undefined4 *)*local_c0;
            *local_c0 = 0;
            if (puVar17 == (undefined4 *)0x0) {
              puVar17 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar17 = 0xffffffff;
            *(undefined4 **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar1 = puVar17;
            FUN_140217a48(puVar1);
            puVar18 = (uint *)*puVar1;
LAB_1428c661b:
            uVar29 = *(longlong *)(puVar18 + 0x10) + 0xf;
            uVar27 = puVar18[0x12];
            do {
              puVar20 = (undefined8 *)(uVar29 & 0xfffffffffffffff0);
              if (puVar20 + 0x20 <= puVar18 + 0x4000) {
                *(undefined8 **)(puVar18 + 0x10) = puVar20 + 0x20;
                puVar18[0x12] = uVar27 + 1;
                local_1b0 = uVar29;
                local_70 = puVar20;
                FUN_1447247dc(puVar20,0);
                puVar20 = local_70;
                *local_70 = &PTR_FUN_149ef6718;
                local_118 = 0;
                local_108 = (longlong *)0x0;
                puVar19 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar19 = &PTR_LAB_149ef7520;
                puVar19[1] = local_160;
                puVar19[2] = pppppplStack_158;
                puVar19[3] = CONCAT44(iStack_14c,local_150);
                puVar19[4] = local_148;
                puVar19[5] = pppppplStack_140;
                local_148 = (longlong ******)0x0;
                pppppplStack_140 = (longlong ******)0x0;
                *(int *)(puVar19 + 7) = local_130;
                puVar19[6] = CONCAT44(iStack_134,local_138);
                if (puVar19 + 1 == (undefined8 *)0x0) {
                  puVar20[0x16] = local_118;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
                  if (local_118 != 0) goto LAB_1428c67bb;
                }
                else {
                  puVar20[0x16] = &LAB_14699a230;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_1428c67bb:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_1428c67f1;
                  DVar13 = FUN_140ad26c0();
                  DVar14 = GetCurrentThreadId();
                  uVar27 = (uint)(DVar13 != DVar14) * 0x200 + 0x6ff;
                  uVar29 = (ulonglong)uVar27;
                  *(uint *)(local_70 + 0x1e) = uVar27;
                  puVar20 = local_70;
                  if (local_118 != 0) {
                    plVar22 = local_108;
                    if (local_108 == (longlong *)0x0) {
                      plVar22 = (longlong *)&local_f8;
                    }
                    (**(code **)(*plVar22 + 0x10))();
                    uVar29 = (ulonglong)*(uint *)(local_70 + 0x1e);
                    puVar20 = local_70;
                  }
                }
                else {
                  uVar29 = 0x6ff;
LAB_1428c67f1:
                  *(int *)(puVar20 + 0x1e) = (int)uVar29;
                }
                uVar27 = (uint)uVar29;
                if ((uVar27 & 0xff) == 0xff) {
                  uVar12 = (uint)(uVar29 >> 10) & 3;
                  iVar28 = 0;
                  if ((uVar27 >> 9 & 1) == 0 || uVar12 < 2) {
                    uVar26 = (&DAT_149e38edc)[uVar12];
                  }
                  else {
                    uVar26 = 2;
                  }
                }
                else {
                  iVar28 = (uVar27 >> 7 & 2 | (uint)(uVar29 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                  uVar26 = 5;
                }
                FUN_144a24082(puVar20,L"GraphTask",uVar26,iVar28,0);
                if (puVar20 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
                  UNLOCK();
                }
                local_118 = CONCAT71(local_118._1_7_,1);
                FUN_1447439e4(puVar20,&local_118);
                uVar29 = local_178;
                iVar28 = (int)local_178;
                uVar27 = (int)local_178 + 1;
                local_178 = CONCAT44(local_178._4_4_,uVar27);
                if (local_178._4_4_ < uVar27) {
                  FUN_14476a5c8(local_1a0,uVar29 & 0xffffffff);
                }
                puVar21 = local_180;
                if (local_180 == (undefined1 *)0x0) {
                  puVar21 = local_1a0;
                }
                *(undefined8 **)(puVar21 + (longlong)iVar28 * 8) = local_70;
                FUN_14698d952(&local_148);
                FUN_14698d952(&local_98);
                iVar31 = iVar31 + local_7c;
                iVar24 = iVar24 + 1;
                goto LAB_1428c63d5;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_1428c65af;
              puVar18 = (uint *)*puVar1;
              *puVar18 = 0xffffffff;
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
              puVar18[0x12] = 0;
              *puVar1 = puVar18;
              uVar29 = (longlong)puVar18 + 0x67;
              uVar27 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0xb,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_98);
          uVar30 = local_78;
          goto LAB_1428c6a2b;
        }
        local_a0 = local_a0 + 1;
      }
    }
    uVar30 = local_78;
    if (local_62 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_1a0,local_78);
      FUN_14698da02();
      if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
        if (*local_120 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
        }
        else {
          local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
        }
      }
      else {
        local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
      }
      pppppplStack_90 = &local_170;
      local_118 = 0;
      local_110 = (longlong ******)((ulonglong)local_110 & 0xffffffff00000000);
      local_160 = (longlong ******)&LAB_14699a540;
      pppppplStack_158 = (longlong ******)&local_98;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
      uVar30 = local_78;
    }
  }
LAB_1428c6a2b:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_1a0,uVar30);
  FUN_14588b8d6(local_1a0);
  while (ppppplVar4 = local_b0, (longlong ******)local_b0 != (longlong ******)0x0) {
    pppppplVar6 = (longlong ******)(local_b0 + 1);
    local_b0 = (longlong *****)*local_b0;
    FUN_14698d952(pppppplVar6);
    FUN_1400020a8(ppppplVar4);
  }
  return;
}



// FUNCTION 1428c6bbc Unwind@1428c6bbc body=38 status=ok
// SIG undefined Unwind@1428c6bbc(void)

void Unwind_1428c6bbc(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c6be4 Unwind@1428c6be4 body=196 status=ok
// SIG undefined Unwind@1428c6be4(void)

void Unwind_1428c6be4(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x68) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0x158);
        **(undefined8 **)(param_2 + 0x158) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428c6ca8 Unwind@1428c6ca8 body=95 status=ok
// SIG undefined Unwind@1428c6ca8(void)

void Unwind_1428c6ca8(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a8))(*(undefined8 **)(param_2 + 0x1a8),1);
    }
  }
  return;
}



// FUNCTION 1428c6d08 Unwind@1428c6d08 body=95 status=ok
// SIG undefined Unwind@1428c6d08(void)

void Unwind_1428c6d08(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a8))(*(undefined8 **)(param_2 + 0x1a8),1);
    }
  }
  return;
}



// FUNCTION 1428c6d68 Unwind@1428c6d68 body=64 status=ok
// SIG undefined Unwind@1428c6d68(void)

void Unwind_1428c6d68(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  return;
}



// FUNCTION 1428c6da8 Unwind@1428c6da8 body=67 status=ok
// SIG undefined Unwind@1428c6da8(void)

void Unwind_1428c6da8(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428c6dec Unwind@1428c6dec body=131 status=ok
// SIG undefined Unwind@1428c6dec(void)

void Unwind_1428c6dec(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x78,*(undefined4 *)(param_2 + 0x1a0));
  FUN_14588b8d6(param_2 + 0x78);
  while (puVar1 = *(undefined8 **)(param_2 + 0x168), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x168) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428c6e70 Unwind@1428c6e70 body=76 status=ok
// SIG undefined Unwind@1428c6e70(void)

void Unwind_1428c6e70(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  FUN_14698d9aa(param_2 + 0xb8);
  return;
}



// FUNCTION 1428c6ebc Unwind@1428c6ebc body=38 status=ok
// SIG undefined Unwind@1428c6ebc(void)

void Unwind_1428c6ebc(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c6ee4 FUN_1428c6ee4 body=4058 status=ok
// SIG undefined FUN_1428c6ee4(void)

void FUN_1428c6ee4(longlong *param_1,undefined1 param_2,char param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  byte bVar23;
  longlong lVar24;
  byte bVar25;
  undefined1 uVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong **pplVar29;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a7;
  byte local_1a6;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 *local_198;
  longlong local_190;
  ulonglong local_188;
  undefined1 local_180 [32];
  undefined1 *local_160;
  undefined8 local_158;
  short local_14e;
  uint local_14c;
  int *local_148;
  ulonglong local_140;
  undefined8 *local_138;
  longlong *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  uint local_118;
  undefined4 uStack_114;
  longlong *plStack_110;
  longlong *plStack_108;
  undefined4 local_100;
  byte local_fc;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  undefined1 local_a1;
  undefined8 *local_a0;
  longlong *local_98;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  undefined8 *local_70;
  char local_64;
  undefined1 local_63;
  ushort local_62 [17];
  
  local_62[1] = 0xfffe;
  local_62[2] = 0xffff;
  local_62[3] = 0xffff;
  local_62[4] = 0xffff;
  local_190 = FUN_144b77940(param_1[0xe]);
  local_140 = FUN_144b77ad0(param_1[0xe]);
  local_1c8 = param_1[0x13];
  local_1c0 = (ulonglong)param_1[0x14] >> 1;
  local_14e = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_14e);
  bVar23 = 1;
  bVar25 = 1;
  local_1a7 = param_2;
  if (local_14e != 2) {
    local_1a7 = 1;
    bVar25 = *(byte *)((longlong)param_1 + 0x7e);
  }
  local_1a4 = (undefined4)param_1[0x11];
  local_1a0 = (undefined4)param_1[0x12];
  local_1b0 = &local_1c8;
  local_198 = &local_a1;
  if (local_14e == 2) {
    bVar23 = (byte)*(undefined2 *)((longlong)param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a8 = param_2;
  local_1a6 = bVar25;
  local_98 = param_1;
  local_f8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_f8 = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_160 = (undefined1 *)0x0;
  local_158 = 0x400000000;
  local_f0 = local_f8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar6 != 2)) {
    uVar7 = 0xff;
    if (iVar6 != 1) goto LAB_1428c704a;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428c704a;
  }
  uVar7 = 1;
LAB_1428c704a:
  plVar20 = local_98;
  local_62[0] = 0;
  FUN_144b77e20(local_98[0xe],0x116,local_62);
  uVar11 = (ulonglong)local_62[0];
  uVar28 = plVar20[0x12];
  uVar22 = uVar11;
  if ((longlong)uVar28 < (longlong)uVar11) {
    uVar22 = uVar28;
  }
  if (uVar11 == 0) {
    uVar22 = uVar28;
  }
  if (local_140 < (ulonglong)bVar25 * 8 * plVar20[0x11] * (longlong)(int)uVar22) {
    FUN_14020fad6(plVar20 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar7;
    iVar6 = FUN_144b77d80(plVar20[0xe]);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    local_64 = param_3;
    if ((int)local_158._4_4_ < iVar6) {
      FUN_14473dbc4(local_180,iVar6);
    }
    local_14c = (uint)bVar23;
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar2 = (undefined8 *)(lVar13 + 0x308);
    local_138 = (undefined8 *)(lVar13 + 0x310);
    local_148 = (int *)(lVar13 + 0xc60);
    bVar25 = 0;
    plVar20 = local_98;
    local_63 = param_2;
    while( true ) {
      uVar26 = local_63;
      pplVar29 = &local_f8;
      local_a8 = (uint)bVar25;
      if (local_14c < local_a8 || local_14c == bVar25) break;
      if (local_62[0] == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(pplVar29,&local_88);
        if (cVar5 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar12 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_130 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_128._0_4_ = SUB84(local_e0,0);
          uStack_128._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar17 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar17 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_130;
          plVar4 = plStack_80;
          if ((plVar17 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar4 = plVar17, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar17;
              (*(code *)*puVar18)(plVar12);
              LOCK();
              piVar3 = (int *)((longlong)plVar12 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              plVar4 = plStack_80;
              if (*piVar3 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_130);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_140;
          if ((ulonglong)(local_88[2] - lVar13) < local_140) {
            FUN_14112c458();
          }
        }
        lVar13 = FUN_144b82e30(plVar20[0xe],local_a8,*local_88,local_140);
        puVar18 = local_138;
        if (lVar13 != -1) {
          local_120 = &local_1b8;
          local_118 = (uint)local_88;
          uStack_114 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_110 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_108 = (longlong *)CONCAT71(plStack_108._1_7_,bVar25);
          puVar15 = (uint *)*puVar2;
          local_130 = plVar20;
          if (puVar15 != (uint *)0x0) goto LAB_1428c796d;
LAB_1428c790a:
          uVar27 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          uStack_128 = pplVar29;
          if ((uVar27 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar27 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          FUN_140217a48(puVar2);
          puVar15 = (uint *)*puVar2;
          pplVar29 = uStack_128;
LAB_1428c796d:
          puVar16 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 0xf);
          uVar27 = puVar15[0x12];
          do {
            puVar21 = (undefined8 *)((ulonglong)puVar16 & 0xfffffffffffffff0);
            if (puVar21 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar21 + 0x20;
              puVar15[0x12] = uVar27 + 1;
              local_a0 = puVar16;
              local_70 = puVar21;
              uStack_128 = pplVar29;
              FUN_1447247dc(puVar21,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar16 = &PTR_LAB_149ef7560;
              puVar16[1] = local_130;
              puVar16[2] = uStack_128;
              puVar16[3] = local_120;
              puVar16[4] = CONCAT44(uStack_114,local_118);
              puVar16[5] = plStack_110;
              local_118 = 0;
              uStack_114 = 0;
              plStack_110 = (longlong *)0x0;
              *(undefined1 *)(puVar16 + 6) = plStack_108._0_1_;
              if (puVar16 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_1428c7b00;
              }
              else {
                puVar18[0x16] = &LAB_14699a82e;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428c7b00:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428c7b36;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar27 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar28 = (ulonglong)uVar27;
                *(uint *)(puVar18 + 0x1e) = uVar27;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar28 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                  plVar20 = local_98;
                }
              }
              else {
                uVar28 = 0x6ff;
LAB_1428c7b36:
                *(int *)(puVar18 + 0x1e) = (int)uVar28;
              }
              uVar27 = (uint)uVar28;
              if ((uVar27 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar28 >> 10) & 3;
                iVar6 = 0;
                if ((uVar27 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar26 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar26 = 2;
                }
              }
              else {
                iVar6 = (uVar27 >> 7 & 2 | (uint)(uVar28 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                uVar26 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar26,iVar6,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              uVar28 = local_158;
              iVar6 = (int)local_158;
              uVar27 = (int)local_158 + 1;
              local_158 = CONCAT44(local_158._4_4_,uVar27);
              if (local_158._4_4_ < uVar27) {
                FUN_14476a5c8(local_180,uVar28 & 0xffffffff);
              }
              puVar19 = local_160;
              if (local_160 == (undefined1 *)0x0) {
                puVar19 = local_180;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar6 * 8) = local_70;
              FUN_14698d952(&local_118);
              FUN_14698d952(&local_88);
              goto LAB_1428c7c59;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428c790a;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            puVar16 = (undefined8 *)((longlong)puVar15 + 0x67);
            uVar27 = 0;
          } while( true );
        }
LAB_1428c7d05:
        FUN_14020fad6(plVar20 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        goto LAB_1428c7d2b;
      }
      puVar18 = (undefined8 *)0x0;
LAB_1428c7166:
      if ((longlong)puVar18 < plVar20[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        local_70 = puVar18;
        cVar5 = FUN_14698d83a(&local_f8,&local_88);
        if (cVar5 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_130 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_128._0_4_ = SUB84(local_e0,0);
          uStack_128._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar12 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_130;
          plVar17 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar17 = plVar12, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar4 = plStack_80 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              puVar16 = (undefined8 *)*plStack_80;
              plStack_80 = plVar12;
              (*(code *)*puVar16)(plVar20);
              LOCK();
              piVar3 = (int *)((longlong)plVar20 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              plVar17 = plStack_80;
              if (*piVar3 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar17 = plStack_80;
              }
            }
          }
          plStack_80 = plVar17;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_130);
          plVar20 = local_98;
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_140;
          if ((ulonglong)(local_88[2] - lVar13) < local_140) {
            FUN_14112c458();
          }
        }
        uVar27 = (int)plVar20[0x12] - (int)puVar18;
        if ((longlong)(ulonglong)((int)local_70 + (uint)local_62[0]) <= plVar20[0x12]) {
          uVar27 = (uint)local_62[0];
        }
        lVar13 = *local_88;
        lVar24 = (int)uVar27 * local_190;
        uVar7 = FUN_144b77d20(plVar20[0xe],local_70,local_a8);
        lVar13 = FUN_144b82e30(plVar20[0xe],uVar7,lVar13,lVar24);
        if (lVar13 != -1) {
          uStack_128 = &local_1b8;
          local_120 = &local_f8;
          plStack_110 = local_88;
          plStack_108 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_100 = SUB84(local_70,0);
          puVar15 = (uint *)*puVar2;
          local_130 = plVar20;
          local_118 = uVar27;
          local_fc = bVar25;
          if (puVar15 != (uint *)0x0) goto LAB_1428c73c7;
LAB_1428c7360:
          puVar18 = local_138;
          uVar27 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar27 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar27 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          FUN_140217a48(puVar2);
          puVar15 = (uint *)*puVar2;
LAB_1428c73c7:
          uVar28 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar27 = puVar15[0x12];
          do {
            puVar18 = (undefined8 *)(uVar28 & 0xfffffffffffffff0);
            if (puVar18 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar18 + 0x20;
              puVar15[0x12] = uVar27 + 1;
              local_188 = uVar28;
              local_a0 = puVar18;
              FUN_1447247dc(puVar18,0);
              puVar18 = local_a0;
              *local_a0 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar16 = &PTR_LAB_149ef7540;
              puVar16[1] = local_130;
              puVar16[2] = uStack_128;
              *(ulonglong *)((longlong)puVar16 + 0x14) =
                   CONCAT44((undefined4)local_120,uStack_128._4_4_);
              *(ulonglong *)((longlong)puVar16 + 0x1c) = CONCAT44(local_118,local_120._4_4_);
              puVar16[5] = plStack_110;
              puVar16[6] = plStack_108;
              plStack_110 = (longlong *)0x0;
              plStack_108 = (longlong *)0x0;
              *(byte *)((longlong)puVar16 + 0x3c) = local_fc;
              *(undefined4 *)(puVar16 + 7) = local_100;
              if (puVar16 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_1428c7566;
              }
              else {
                puVar18[0x16] = &LAB_14699a55c;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428c7566:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428c759c;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar27 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar28 = (ulonglong)uVar27;
                *(uint *)(puVar18 + 0x1e) = uVar27;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar28 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar28 = 0x6ff;
LAB_1428c759c:
                *(int *)(puVar18 + 0x1e) = (int)uVar28;
              }
              uVar27 = (uint)uVar28;
              if ((uVar27 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar28 >> 10) & 3;
                iVar6 = 0;
                if ((uVar27 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar26 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar26 = 2;
                }
              }
              else {
                iVar6 = (uVar27 >> 7 & 2 | (uint)(uVar28 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                uVar26 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar26,iVar6,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              uVar28 = local_158;
              iVar6 = (int)local_158;
              uVar27 = (int)local_158 + 1;
              local_158 = CONCAT44(local_158._4_4_,uVar27);
              if (local_158._4_4_ < uVar27) {
                FUN_14476a5c8(local_180,uVar28 & 0xffffffff);
              }
              puVar19 = local_160;
              if (local_160 == (undefined1 *)0x0) {
                puVar19 = local_180;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar6 * 8) = local_a0;
              FUN_14698d952(&plStack_110);
              FUN_14698d952(&local_88);
              puVar18 = (undefined8 *)(ulonglong)((int)local_70 + (uint)local_62[0]);
              plVar20 = local_98;
              goto LAB_1428c7166;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428c7360;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            uVar28 = (longlong)puVar15 + 0x67;
            uVar27 = 0;
          } while( true );
        }
        goto LAB_1428c7d05;
      }
LAB_1428c7c59:
      bVar25 = bVar25 + 1;
    }
    uVar7 = local_8c;
    if (local_64 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_180,local_8c);
      FUN_14698da02();
      plVar20 = local_98;
      if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
        if (*local_148 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          local_88 = (longlong *)CONCAT71(local_88._1_7_,uVar26);
        }
        else {
          local_88 = (longlong *)CONCAT71(local_88._1_7_,uVar26);
        }
      }
      else {
        local_88 = (longlong *)CONCAT71(local_88._1_7_,uVar26);
      }
      local_e8 = 0;
      local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
      local_130 = (longlong *)&LAB_14699a910;
      plStack_80 = &local_1c8;
      uStack_128 = &local_88;
      FUN_1401f8d10(L"ParallelFor Task",(int)plVar20[0x12] * (int)plVar20[0x11],1);
      uVar7 = local_8c;
    }
  }
LAB_1428c7d2b:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_180,uVar7);
  FUN_14588b8d6(local_180);
  while (plVar20 = local_f0, local_f0 != (longlong *)0x0) {
    plVar12 = local_f0 + 1;
    local_f0 = (longlong *)*local_f0;
    FUN_14698d952(plVar12);
    FUN_1400020a8(plVar20);
  }
  return;
}



// FUNCTION 1428c7ebe Unwind@1428c7ebe body=38 status=ok
// SIG undefined Unwind@1428c7ebe(void)

void Unwind_1428c7ebe(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c7ee6 Unwind@1428c7ee6 body=193 status=ok
// SIG undefined Unwind@1428c7ee6(void)

void Unwind_1428c7ee6(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x168) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x80) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xd0);
        **(undefined8 **)(param_2 + 0xd0) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428c7fa8 Unwind@1428c7fa8 body=83 status=ok
// SIG undefined Unwind@1428c7fa8(void)

void Unwind_1428c7fa8(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x168);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428c7ffc Unwind@1428c7ffc body=83 status=ok
// SIG undefined Unwind@1428c7ffc(void)

void Unwind_1428c7ffc(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x168);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428c8050 Unwind@1428c8050 body=64 status=ok
// SIG undefined Unwind@1428c8050(void)

void Unwind_1428c8050(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf8);
  return;
}



// FUNCTION 1428c8090 Unwind@1428c8090 body=67 status=ok
// SIG undefined Unwind@1428c8090(void)

void Unwind_1428c8090(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428c80d4 Unwind@1428c80d4 body=38 status=ok
// SIG undefined Unwind@1428c80d4(void)

void Unwind_1428c80d4(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c80fc Unwind@1428c80fc body=196 status=ok
// SIG undefined Unwind@1428c80fc(void)

void Unwind_1428c80fc(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x198) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x168) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xd0);
        **(undefined8 **)(param_2 + 0xd0) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428c81c0 Unwind@1428c81c0 body=95 status=ok
// SIG undefined Unwind@1428c81c0(void)

void Unwind_1428c81c0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x198) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x198) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x198))(*(undefined8 **)(param_2 + 0x198),1);
    }
  }
  return;
}



// FUNCTION 1428c8220 Unwind@1428c8220 body=95 status=ok
// SIG undefined Unwind@1428c8220(void)

void Unwind_1428c8220(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x198) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x198) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x198))(*(undefined8 **)(param_2 + 0x198),1);
    }
  }
  return;
}



// FUNCTION 1428c8280 Unwind@1428c8280 body=64 status=ok
// SIG undefined Unwind@1428c8280(void)

void Unwind_1428c8280(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf0);
  return;
}



// FUNCTION 1428c82c0 Unwind@1428c82c0 body=67 status=ok
// SIG undefined Unwind@1428c82c0(void)

void Unwind_1428c82c0(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428c8304 Unwind@1428c8304 body=131 status=ok
// SIG undefined Unwind@1428c8304(void)

void Unwind_1428c8304(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x88,*(undefined4 *)(param_2 + 0x17c));
  FUN_14588b8d6(param_2 + 0x88);
  while (puVar1 = *(undefined8 **)(param_2 + 0x118), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x118) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428c8388 Unwind@1428c8388 body=76 status=ok
// SIG undefined Unwind@1428c8388(void)

void Unwind_1428c8388(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428c83d4 Unwind@1428c83d4 body=76 status=ok
// SIG undefined Unwind@1428c83d4(void)

void Unwind_1428c83d4(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428c8420 Unwind@1428c8420 body=38 status=ok
// SIG undefined Unwind@1428c8420(void)

void Unwind_1428c8420(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c8448 FUN_1428c8448 body=2406 status=ok
// SIG undefined FUN_1428c8448(void)

void FUN_1428c8448(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  short sVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  byte bVar20;
  undefined1 uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  byte bVar26;
  int iVar27;
  bool bVar28;
  undefined8 local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
  undefined1 local_1a8;
  char local_1a7;
  byte local_1a6;
  int local_1a4;
  int local_1a0;
  undefined1 *local_198;
  int *local_190;
  ulonglong local_188;
  ulonglong local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  longlong local_148;
  longlong *local_140;
  longlong *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **local_100;
  longlong *plStack_f8;
  int local_f0;
  int iStack_ec;
  undefined8 **local_e8;
  longlong *plStack_e0;
  undefined4 local_d8;
  int iStack_d4;
  int local_d0;
  undefined8 local_c8;
  short local_ba;
  uint local_b8;
  uint local_b4;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  int local_8c;
  undefined8 **local_88;
  longlong *plStack_80;
  undefined1 local_75;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  local_1c8 = *(undefined8 *)(param_1 + 0x98);
  local_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 1;
  local_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&local_ba);
  sVar5 = local_ba;
  bVar20 = 1;
  bVar28 = local_ba == 2;
  if (!bVar28) {
    bVar20 = *(byte *)(param_1 + 0x7e);
  }
  local_70 = *(int *)(param_1 + 0x88);
  local_6c = *(int *)(param_1 + 0x90);
  iVar8 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar8 == 0) ||
     (iVar8 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&local_6c), iVar8 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  local_1b0 = &local_1c8;
  local_1a7 = bVar28 * '\x03' + '\x01';
  local_1a8 = 4;
  local_1a4 = local_70;
  local_1a0 = local_6c;
  local_198 = &local_75;
  bVar26 = 1;
  if (sVar5 == 2) {
    bVar26 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a6 = bVar20;
  local_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar8 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar8 != 2)) {
    local_74 = 0xff;
    if (iVar8 != 1) goto LAB_1428c8614;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_1428c8614;
  }
  local_74 = 1;
LAB_1428c8614:
  local_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (local_180 < (ulonglong)((longlong)(int)((uint)bVar20 * local_6c * local_70) << 3)) {
    FUN_14020fad6(param_1 + 0x58,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    iVar8 = FUN_144b7b020(*(undefined8 *)(param_1 + 0x70));
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    if ((int)local_150._4_4_ < iVar8) {
      FUN_14473dbc4(local_178,iVar8);
    }
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar13 + 0x308);
    local_b0 = (undefined8 *)(lVar13 + 0x310);
    local_190 = (int *)(lVar13 + 0xc60);
    local_b4 = (uint)bVar26;
    for (local_c8 = 0; local_b8 = (uint)local_c8 & 0xff, local_b8 < local_b4;
        local_c8 = CONCAT71((int7)((ulonglong)local_c8 >> 8),(char)local_c8 + '\x01')) {
      local_8c = 0;
      for (iVar8 = 0; lVar13 = *(longlong *)(param_1 + 0x90), iVar8 < lVar13;
          iVar8 = iVar8 + local_6c) {
        iVar4 = (int)lVar13 - iVar8;
        if (local_6c + iVar8 <= lVar13) {
          iVar4 = local_6c;
        }
        iVar25 = 0;
        iVar27 = 0;
LAB_1428c870e:
        if ((longlong)iVar25 < *(longlong *)(param_1 + 0x88)) {
          local_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar7 = FUN_14698d83a(&local_a8,&local_88);
          if (cVar7 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar19 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            local_100 = (undefined8 **)(plStack_f8 + 2);
            plStack_f8[2] = 0;
            plStack_f8[3] = 0;
            plStack_f8[4] = 0;
            if (plStack_f8 == (longlong *)0x0) {
              plVar12 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_f8 + 1) = (int)plStack_f8[1] + 1;
              UNLOCK();
              plVar12 = plStack_f8;
            }
            local_148 = 0;
            local_140 = plStack_f8;
            local_88 = local_100;
            plVar6 = plStack_80;
            if ((plVar12 != plStack_80) &&
               (local_140 = (longlong *)0x0, plVar6 = plVar12, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar17 = (undefined8 *)*plStack_80;
                plStack_80 = plVar12;
                (*(code *)*puVar17)(plVar19);
                LOCK();
                piVar2 = (int *)((longlong)plVar19 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar6 = plStack_80;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar19 + 0x10))(plVar19);
                  plVar6 = plStack_80;
                }
              }
            }
            plStack_80 = plVar6;
            FUN_14698d952(&local_148);
            FUN_14698d9aa(&local_100);
            puVar17 = local_88[1];
            local_88[1] = (undefined8 *)((longlong)puVar17 + local_180);
            if ((ulonglong)((longlong)local_88[2] - (longlong)puVar17) < local_180) {
              FUN_14112c458();
            }
          }
          lVar13 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*local_88,iVar25,iVar8,0,
                                 (short)local_b8);
          if (-1 < lVar13) {
            local_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar25;
            if ((longlong)(local_70 + iVar25) <= *(longlong *)(param_1 + 0x88)) {
              local_f0 = local_70;
            }
            local_100 = &local_a8;
            plStack_f8 = &local_1b8;
            local_e8 = local_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            local_d8 = CONCAT31(local_d8._1_3_,(char)local_c8);
            local_d0 = local_8c;
            puVar15 = (uint *)*puVar3;
            iStack_ec = iVar4;
            iStack_d4 = iVar27;
            if (puVar15 != (uint *)0x0) goto LAB_1428c8957;
LAB_1428c88ed:
            uVar22 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar22 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar22 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar14 = (undefined4 *)*local_b0;
            *local_b0 = 0;
            if (puVar14 == (undefined4 *)0x0) {
              puVar14 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar14 = 0xffffffff;
            *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar3 = puVar14;
            FUN_140217a48(puVar3);
            puVar15 = (uint *)*puVar3;
LAB_1428c8957:
            uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
            uVar22 = puVar15[0x12];
            do {
              puVar17 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
              if (puVar17 + 0x20 <= puVar15 + 0x4000) {
                *(undefined8 **)(puVar15 + 0x10) = puVar17 + 0x20;
                puVar15[0x12] = uVar22 + 1;
                local_188 = uVar24;
                local_68 = puVar17;
                FUN_1447247dc(puVar17,0);
                puVar17 = local_68;
                *local_68 = &PTR_FUN_149ef6718;
                local_148 = 0;
                local_138 = (longlong *)0x0;
                puVar16 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar16 = &PTR_LAB_149ef7580;
                puVar16[1] = local_100;
                puVar16[2] = plStack_f8;
                puVar16[3] = CONCAT44(iStack_ec,local_f0);
                puVar16[4] = local_e8;
                puVar16[5] = plStack_e0;
                local_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar16 + 7) = local_d0;
                puVar16[6] = CONCAT44(iStack_d4,local_d8);
                if (puVar16 + 1 == (longlong *)0x0) {
                  puVar17[0x16] = local_148;
                  puVar17[0x18] = puVar16;
                  *(undefined4 *)(puVar17 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar17 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar17 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar17 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_11c;
                  if (local_148 != 0) goto LAB_1428c8ae3;
                }
                else {
                  puVar17[0x16] = &LAB_14699a92c;
                  puVar17[0x18] = puVar16;
                  *(undefined4 *)(puVar17 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar17 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar17 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar17 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_11c;
LAB_1428c8ae3:
                  local_148 = 0;
                }
                local_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_190 != 2)) {
                  uVar24 = 0x8ff;
                  if (*local_190 != 1) goto LAB_1428c8b16;
                  DVar10 = FUN_140ad26c0();
                  DVar11 = GetCurrentThreadId();
                  uVar22 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                  uVar24 = (ulonglong)uVar22;
                  *(uint *)(local_68 + 0x1e) = uVar22;
                  puVar17 = local_68;
                  if (local_148 != 0) {
                    plVar19 = local_138;
                    if (local_138 == (longlong *)0x0) {
                      plVar19 = (longlong *)&local_128;
                    }
                    (**(code **)(*plVar19 + 0x10))();
                    uVar24 = (ulonglong)*(uint *)(local_68 + 0x1e);
                    puVar17 = local_68;
                  }
                }
                else {
                  uVar24 = 0x6ff;
LAB_1428c8b16:
                  *(int *)(puVar17 + 0x1e) = (int)uVar24;
                }
                uVar22 = (uint)uVar24;
                if ((uVar22 & 0xff) == 0xff) {
                  uVar9 = (uint)(uVar24 >> 10) & 3;
                  iVar23 = 0;
                  if ((uVar22 >> 9 & 1) == 0 || uVar9 < 2) {
                    uVar21 = (&DAT_149e38edc)[uVar9];
                  }
                  else {
                    uVar21 = 2;
                  }
                }
                else {
                  iVar23 = (uVar22 >> 7 & 2 | (uint)(uVar24 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar22 & 0xff) * 4);
                  uVar21 = 5;
                }
                FUN_144a24082(puVar17,L"GraphTask",uVar21,iVar23,0);
                if (puVar17 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                  UNLOCK();
                }
                local_148 = CONCAT71(local_148._1_7_,1);
                FUN_1447439e4(puVar17,&local_148);
                uVar24 = local_150;
                iVar23 = (int)local_150;
                uVar22 = (int)local_150 + 1;
                local_150 = CONCAT44(local_150._4_4_,uVar22);
                if (local_150._4_4_ < uVar22) {
                  FUN_14476a5c8(local_178,uVar24 & 0xffffffff);
                }
                puVar18 = local_158;
                if (local_158 == (undefined1 *)0x0) {
                  puVar18 = local_178;
                }
                *(undefined8 **)(puVar18 + (longlong)iVar23 * 8) = local_68;
                FUN_14698d952(&local_e8);
                FUN_14698d952(&local_88);
                iVar25 = iVar25 + local_70;
                iVar27 = iVar27 + 1;
                goto LAB_1428c870e;
              }
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
              LOCK();
              uVar9 = *puVar15;
              *puVar15 = *puVar15 + uVar22 + 1;
              UNLOCK();
              if ((uVar9 ^ uVar22) != 0xffffffff) goto LAB_1428c88ed;
              puVar15 = (uint *)*puVar3;
              *puVar15 = 0xffffffff;
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
              puVar15[0x12] = 0;
              *puVar3 = puVar15;
              uVar24 = (longlong)puVar15 + 0x67;
              uVar22 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0x58,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_88);
          goto LAB_1428c8d37;
        }
        local_8c = local_8c + 1;
      }
    }
  }
LAB_1428c8d37:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,local_74);
  FUN_14588b8d6(local_178);
  while (puVar3 = local_a0, local_a0 != (undefined8 *)0x0) {
    puVar17 = local_a0 + 1;
    local_a0 = (undefined8 *)*local_a0;
    FUN_14698d952(puVar17);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 1428c8dae Unwind@1428c8dae body=38 status=ok
// SIG undefined Unwind@1428c8dae(void)

void Unwind_1428c8dae(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c8dd6 Unwind@1428c8dd6 body=196 status=ok
// SIG undefined Unwind@1428c8dd6(void)

void Unwind_1428c8dd6(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x70) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0x148);
        **(undefined8 **)(param_2 + 0x148) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428c8e9a Unwind@1428c8e9a body=95 status=ok
// SIG undefined Unwind@1428c8e9a(void)

void Unwind_1428c8e9a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428c8efa Unwind@1428c8efa body=95 status=ok
// SIG undefined Unwind@1428c8efa(void)

void Unwind_1428c8efa(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428c8f5a Unwind@1428c8f5a body=67 status=ok
// SIG undefined Unwind@1428c8f5a(void)

void Unwind_1428c8f5a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x110);
  return;
}



// FUNCTION 1428c8f9e Unwind@1428c8f9e body=67 status=ok
// SIG undefined Unwind@1428c8f9e(void)

void Unwind_1428c8f9e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428c8fe2 Unwind@1428c8fe2 body=38 status=ok
// SIG undefined Unwind@1428c8fe2(void)

void Unwind_1428c8fe2(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c900a Unwind@1428c900a body=130 status=ok
// SIG undefined Unwind@1428c900a(void)

void Unwind_1428c900a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x80,*(undefined4 *)(param_2 + 0x184));
  FUN_14588b8d6(param_2 + 0x80);
  while (puVar1 = *(undefined8 **)(param_2 + 0x158), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x158) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428c908c Unwind@1428c908c body=73 status=ok
// SIG undefined Unwind@1428c908c(void)

void Unwind_1428c908c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xb0);
  FUN_14698d9aa(param_2 + 0xf8);
  return;
}



// FUNCTION 1428c90d6 FUN_1428c90d6 body=3602 status=ok
// SIG undefined FUN_1428c90d6(void)

void FUN_1428c90d6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined1 uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  byte bVar26;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  char local_1a7;
  byte local_1a6;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 *local_198;
  longlong local_190;
  ulonglong local_188;
  int *local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  short local_146;
  uint local_144;
  ulonglong local_140;
  ulonglong local_138;
  undefined8 *local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  longlong *plStack_c0;
  longlong *plStack_b8;
  int local_b0;
  undefined1 local_ac;
  longlong *local_a8;
  longlong *local_a0;
  undefined1 local_8d;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  ushort local_6a;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_190 = FUN_144b77940(param_1[0xe]);
  local_138 = FUN_144b77ad0(param_1[0xe]);
  local_1c8 = param_1[0x13];
  local_1c0 = (ulonglong)param_1[0x14] >> 1;
  local_146 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_146);
  bVar26 = 1;
  local_1a7 = (local_146 == 2) * '\x03' + '\x01';
  if (local_146 != 2) {
    bVar26 = *(byte *)((longlong)param_1 + 0x7e);
  }
  local_1a4 = (undefined4)param_1[0x11];
  local_1a0 = (undefined4)param_1[0x12];
  local_1b0 = &local_1c8;
  local_1a8 = 4;
  local_198 = &local_8d;
  uVar22 = 1;
  if (local_146 == 2) {
    uVar22 = (uint)*(ushort *)((longlong)param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a6 = bVar26;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar6 != 2)) {
    uVar7 = 0xff;
    if (iVar6 != 1) goto LAB_1428c922a;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428c922a;
  }
  uVar7 = 1;
LAB_1428c922a:
  local_6a = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_6a);
  uVar11 = (ulonglong)local_6a;
  uVar24 = param_1[0x12];
  uVar20 = uVar11;
  if ((longlong)uVar24 < (longlong)uVar11) {
    uVar20 = uVar24;
  }
  if (uVar11 == 0) {
    uVar20 = uVar24;
  }
  if (local_138 < (ulonglong)bVar26 * 8 * param_1[0x11] * (longlong)(int)uVar20) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar7;
    iVar6 = FUN_144b77d80(param_1[0xe]);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if ((int)local_150._4_4_ < iVar6) {
      FUN_14473dbc4(local_178,iVar6);
    }
    local_144 = uVar22 & 0xff;
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar13 + 0x308);
    local_130 = (undefined8 *)(lVar13 + 0x310);
    local_180 = (int *)(lVar13 + 0xc60);
    uVar24 = 0;
    while( true ) {
      uVar20 = uVar24 & 0xff;
      uVar7 = local_8c;
      if (local_144 <= (uint)uVar20) break;
      local_188 = uVar24;
      if (local_6a == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar5 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar19 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar12 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar4 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar4 = plVar12, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar17 = (undefined8 *)*plStack_80;
              plStack_80 = plVar12;
              (*(code *)*puVar17)(plVar19);
              LOCK();
              piVar2 = (int *)((longlong)plVar19 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar4 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_138;
          if ((ulonglong)(local_88[2] - lVar13) < local_138) {
            FUN_14112c458();
          }
        }
        lVar13 = FUN_144b82e30(param_1[0xe],uVar20,*local_88,local_138);
        puVar17 = local_130;
        if (lVar13 != -1) {
          uStack_d8 = &local_a8;
          local_d0 = &local_1b8;
          local_c8 = (uint)local_88;
          uStack_c4 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_c0 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_b8 = (longlong *)CONCAT71(plStack_b8._1_7_,(char)uVar24);
          puVar15 = (uint *)*puVar3;
          local_e0 = param_1;
          if (puVar15 != (uint *)0x0) goto LAB_1428c9ac7;
LAB_1428c9a64:
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar17;
          *puVar17 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          FUN_140217a48(puVar3);
          puVar15 = (uint *)*puVar3;
LAB_1428c9ac7:
          uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar22 = puVar15[0x12];
          do {
            puVar16 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
            if (puVar16 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar16 + 0x20;
              puVar15[0x12] = uVar22 + 1;
              local_140 = uVar24;
              local_68 = puVar16;
              FUN_1447247dc(puVar16,0);
              puVar17 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar16 = &PTR_LAB_149ef75c0;
              puVar16[1] = local_e0;
              puVar16[2] = uStack_d8;
              puVar16[3] = local_d0;
              puVar16[4] = CONCAT44(uStack_c4,local_c8);
              puVar16[5] = plStack_c0;
              local_c8 = 0;
              uStack_c4 = 0;
              plStack_c0 = (longlong *)0x0;
              *(undefined1 *)(puVar16 + 6) = plStack_b8._0_1_;
              if (puVar16 + 1 == (longlong *)0x0) {
                puVar17[0x16] = local_128;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_1428c9c4d;
              }
              else {
                puVar17[0x16] = &LAB_14699aee4;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428c9c4d:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428c9c80;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar22 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar24 = (ulonglong)uVar22;
                *(uint *)(puVar17 + 0x1e) = uVar22;
                if (local_128 != 0) {
                  plVar19 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar19 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar19 + 0x10))();
                  uVar24 = (ulonglong)*(uint *)(puVar17 + 0x1e);
                }
              }
              else {
                uVar24 = 0x6ff;
LAB_1428c9c80:
                *(int *)(puVar17 + 0x1e) = (int)uVar24;
              }
              uVar22 = (uint)uVar24;
              if ((uVar22 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar24 >> 10) & 3;
                iVar6 = 0;
                if ((uVar22 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar21 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar21 = 2;
                }
              }
              else {
                iVar6 = (uVar22 >> 7 & 2 | (uint)(uVar24 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar22 & 0xff) * 4);
                uVar21 = 5;
              }
              FUN_144a24082(puVar17,L"GraphTask",uVar21,iVar6,0);
              if (puVar17 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                UNLOCK();
              }
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar17,&local_128);
              iVar6 = (int)local_150;
              uVar24 = local_150 & 0xffffffff;
              uVar22 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar22);
              if (local_150._4_4_ < uVar22) {
                FUN_14476a5c8(local_178,uVar24);
              }
              puVar18 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar18 = local_178;
              }
              *(undefined8 **)(puVar18 + (longlong)iVar6 * 8) = local_68;
              FUN_14698d952(&local_c8);
              FUN_14698d952(&local_88);
              goto LAB_1428c9d9d;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428c9a64;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
LAB_1428c9e3c:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        break;
      }
      uVar24 = 0;
LAB_1428c931a:
      iVar6 = (int)uVar24;
      if ((longlong)uVar24 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar5 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar19 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar12 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar4 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar4 = plVar12, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar17 = (undefined8 *)*plStack_80;
              plStack_80 = plVar12;
              (*(code *)*puVar17)(plVar19);
              LOCK();
              piVar2 = (int *)((longlong)plVar19 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar4 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_138;
          if ((ulonglong)(local_88[2] - lVar13) < local_138) {
            FUN_14112c458();
          }
        }
        uVar22 = (int)param_1[0x12] - iVar6;
        if ((longlong)(ulonglong)(iVar6 + (uint)local_6a) <= param_1[0x12]) {
          uVar22 = (uint)local_6a;
        }
        lVar13 = *local_88;
        lVar25 = (int)uVar22 * local_190;
        uVar7 = FUN_144b77d20(param_1[0xe],uVar24,uVar20);
        lVar13 = FUN_144b82e30(param_1[0xe],uVar7,lVar13,lVar25);
        if (lVar13 != -1) {
          uStack_d8 = &local_1b8;
          local_d0 = &local_a8;
          plStack_c0 = local_88;
          plStack_b8 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_ac = (undefined1)local_188;
          puVar15 = (uint *)*puVar3;
          local_e0 = param_1;
          local_c8 = uVar22;
          local_b0 = iVar6;
          if (puVar15 != (uint *)0x0) goto LAB_1428c955c;
LAB_1428c94f5:
          puVar17 = local_130;
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar17;
          *puVar17 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          FUN_140217a48(puVar3);
          puVar15 = (uint *)*puVar3;
LAB_1428c955c:
          uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar22 = puVar15[0x12];
          do {
            puVar17 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
            if (puVar17 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar17 + 0x20;
              puVar15[0x12] = uVar22 + 1;
              local_140 = uVar24;
              local_68 = puVar17;
              FUN_1447247dc(puVar17,0);
              puVar17 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar16 = &PTR_LAB_149ef75a0;
              puVar16[1] = local_e0;
              puVar16[2] = uStack_d8;
              *(ulonglong *)((longlong)puVar16 + 0x14) =
                   CONCAT44((undefined4)local_d0,uStack_d8._4_4_);
              *(ulonglong *)((longlong)puVar16 + 0x1c) = CONCAT44(local_c8,local_d0._4_4_);
              puVar16[5] = plStack_c0;
              puVar16[6] = plStack_b8;
              plStack_c0 = (longlong *)0x0;
              plStack_b8 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar16 + 0x3c) = local_ac;
              *(int *)(puVar16 + 7) = local_b0;
              if (puVar16 + 1 == (longlong *)0x0) {
                puVar17[0x16] = local_128;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_1428c96e5;
              }
              else {
                puVar17[0x16] = &LAB_14699ac92;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428c96e5:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428c9718;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar22 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar24 = (ulonglong)uVar22;
                *(uint *)(puVar17 + 0x1e) = uVar22;
                if (local_128 != 0) {
                  plVar19 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar19 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar19 + 0x10))();
                  uVar24 = (ulonglong)*(uint *)(puVar17 + 0x1e);
                }
              }
              else {
                uVar24 = 0x6ff;
LAB_1428c9718:
                *(int *)(puVar17 + 0x1e) = (int)uVar24;
              }
              uVar22 = (uint)uVar24;
              if ((uVar22 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar24 >> 10) & 3;
                iVar23 = 0;
                if ((uVar22 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar21 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar21 = 2;
                }
              }
              else {
                iVar23 = (uVar22 >> 7 & 2 | (uint)(uVar24 >> 9) & 1) +
                         *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar22 & 0xff) * 4);
                uVar21 = 5;
              }
              FUN_144a24082(puVar17,L"GraphTask",uVar21,iVar23,0);
              if (puVar17 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                UNLOCK();
              }
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar17,&local_128);
              uVar24 = local_150;
              iVar23 = (int)local_150;
              uVar22 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar22);
              if (local_150._4_4_ < uVar22) {
                FUN_14476a5c8(local_178,uVar24 & 0xffffffff);
              }
              puVar18 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar18 = local_178;
              }
              *(undefined8 **)(puVar18 + (longlong)iVar23 * 8) = local_68;
              FUN_14698d952(&plStack_c0);
              FUN_14698d952(&local_88);
              uVar24 = (ulonglong)(iVar6 + (uint)local_6a);
              goto LAB_1428c931a;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428c94f5;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
        goto LAB_1428c9e3c;
      }
LAB_1428c9d9d:
      uVar24 = CONCAT71((int7)(local_188 >> 8),(char)local_188 + '\x01');
    }
  }
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,uVar7);
  FUN_14588b8d6(local_178);
  while (plVar19 = local_a0, local_a0 != (longlong *)0x0) {
    plVar12 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar12);
    FUN_1400020a8(plVar19);
  }
  return;
}



// FUNCTION 1428c9ee8 Unwind@1428c9ee8 body=38 status=ok
// SIG undefined Unwind@1428c9ee8(void)

void Unwind_1428c9ee8(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428c9f10 Unwind@1428c9f10 body=193 status=ok
// SIG undefined Unwind@1428c9f10(void)

void Unwind_1428c9f10(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xb8) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 200);
        **(undefined8 **)(param_2 + 200) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428c9fd2 Unwind@1428c9fd2 body=83 status=ok
// SIG undefined Unwind@1428c9fd2(void)

void Unwind_1428c9fd2(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 400);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428ca026 Unwind@1428ca026 body=83 status=ok
// SIG undefined Unwind@1428ca026(void)

void Unwind_1428ca026(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 400);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428ca07a Unwind@1428ca07a body=67 status=ok
// SIG undefined Unwind@1428ca07a(void)

void Unwind_1428ca07a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x138);
  return;
}



// FUNCTION 1428ca0be Unwind@1428ca0be body=67 status=ok
// SIG undefined Unwind@1428ca0be(void)

void Unwind_1428ca0be(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428ca102 Unwind@1428ca102 body=38 status=ok
// SIG undefined Unwind@1428ca102(void)

void Unwind_1428ca102(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428ca12a Unwind@1428ca12a body=193 status=ok
// SIG undefined Unwind@1428ca12a(void)

void Unwind_1428ca12a(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xb8) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 200);
        **(undefined8 **)(param_2 + 200) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428ca1ec Unwind@1428ca1ec body=95 status=ok
// SIG undefined Unwind@1428ca1ec(void)

void Unwind_1428ca1ec(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428ca24c Unwind@1428ca24c body=95 status=ok
// SIG undefined Unwind@1428ca24c(void)

void Unwind_1428ca24c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428ca2ac Unwind@1428ca2ac body=67 status=ok
// SIG undefined Unwind@1428ca2ac(void)

void Unwind_1428ca2ac(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  return;
}



// FUNCTION 1428ca2f0 Unwind@1428ca2f0 body=67 status=ok
// SIG undefined Unwind@1428ca2f0(void)

void Unwind_1428ca2f0(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428ca334 Unwind@1428ca334 body=38 status=ok
// SIG undefined Unwind@1428ca334(void)

void Unwind_1428ca334(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428ca35c Unwind@1428ca35c body=130 status=ok
// SIG undefined Unwind@1428ca35c(void)

void Unwind_1428ca35c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x80,*(undefined4 *)(param_2 + 0x16c));
  FUN_14588b8d6(param_2 + 0x80);
  while (puVar1 = *(undefined8 **)(param_2 + 0x158), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x158) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428ca3de Unwind@1428ca3de body=76 status=ok
// SIG undefined Unwind@1428ca3de(void)

void Unwind_1428ca3de(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428ca42a Unwind@1428ca42a body=76 status=ok
// SIG undefined Unwind@1428ca42a(void)

void Unwind_1428ca42a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428ca476 FUN_1428ca476 body=2751 status=ok
// SIG undefined FUN_1428ca476(void)

void FUN_1428ca476(longlong ******param_1,undefined1 param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *******ppppppplVar2;
  int *piVar3;
  longlong *****ppppplVar4;
  longlong ******pppppplVar5;
  longlong ******pppppplVar6;
  int iVar7;
  short sVar8;
  longlong *******ppppppplVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  longlong *******ppppppplVar15;
  longlong lVar16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  longlong *plVar22;
  byte bVar23;
  int iVar24;
  byte bVar25;
  undefined1 uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  int iVar31;
  undefined4 in_stack_fffffffffffffe10;
  undefined2 uVar32;
  longlong *****local_1d8;
  longlong *****local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7;
  byte local_1c6;
  int local_1c4;
  int local_1c0;
  undefined1 *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined1 local_1a0 [32];
  undefined1 *local_180;
  undefined8 local_178;
  longlong *****local_170;
  ulonglong local_168;
  longlong ******local_160;
  longlong ******pppppplStack_158;
  int local_150;
  int iStack_14c;
  longlong ******local_148;
  longlong ******pppppplStack_140;
  undefined4 local_138;
  int iStack_134;
  int local_130;
  undefined8 local_128;
  int *local_120;
  longlong local_118;
  longlong ******local_110;
  longlong *local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  short local_ca;
  uint local_c8;
  uint local_c4;
  undefined8 *local_c0;
  longlong *****local_b8;
  longlong *****local_b0;
  int local_a0;
  undefined1 local_99;
  longlong ******local_98;
  longlong ******pppppplStack_90;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined8 *local_70;
  char local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_144b77940(param_1[0xe]);
  FUN_144b77ad0(param_1[0xe]);
  local_170 = param_1[0x13];
  local_168 = (ulonglong)param_1[0x14] >> 1;
  local_ca = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_ca);
  sVar8 = local_ca;
  bVar23 = 1;
  uVar26 = param_2;
  if (local_ca != 2) {
    bVar23 = *(byte *)((longlong)param_1 + 0x7e);
    uVar26 = 1;
  }
  local_7c = *(int *)(param_1 + 0x11);
  local_74 = *(int *)(param_1 + 0x12);
  iVar11 = FUN_144b77e20(param_1[0xe],0x142);
  if ((iVar11 == 0) || (iVar11 = FUN_144b77e20(param_1[0xe],0x143,&local_74), iVar11 == 0)) {
    FUN_14020fad6(param_1 + 0xb,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  local_1d0 = (longlong *****)&local_170;
  local_1c4 = local_7c;
  local_1c0 = local_74;
  local_1b8 = &local_99;
  bVar25 = 1;
  if (sVar8 == 2) {
    bVar25 = (byte)*(undefined2 *)((longlong)param_1 + 0x7e);
  }
  local_1d8 = (longlong *****)param_1;
  local_1c8 = param_2;
  local_1c7 = uVar26;
  local_1c6 = bVar23;
  local_b8 = (longlong *****)FUN_14001cc68(0x18,0x10);
  *local_b8 = (longlong ****)0x0;
  local_b8[1] = (longlong ****)0x0;
  local_b8[2] = (longlong ****)0x0;
  local_180 = (undefined1 *)0x0;
  local_178 = 0x400000000;
  local_b0 = local_b8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar11 != 2)) {
    uVar30 = 0xff;
    if (iVar11 != 1) goto LAB_1428ca643;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_1428ca643;
  }
  uVar30 = 1;
LAB_1428ca643:
  local_1a8 = FUN_144b7ac40(param_1[0xe]);
  if (local_1a8 < (ulonglong)((longlong)(int)((uint)bVar23 * local_74 * local_7c) * 2)) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_78 = uVar30;
    iVar11 = FUN_144b7b020(param_1[0xe]);
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    local_62 = param_3;
    local_61 = param_2;
    if ((int)local_178._4_4_ < iVar11) {
      FUN_14473dbc4(local_1a0,iVar11);
    }
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (undefined8 *)(lVar16 + 0x308);
    local_c0 = (undefined8 *)(lVar16 + 0x310);
    local_120 = (int *)(lVar16 + 0xc60);
    local_c4 = (uint)bVar25;
    for (local_128 = 0; local_c8 = (uint)local_128 & 0xff, local_c8 < local_c4;
        local_128 = CONCAT71((int7)((ulonglong)local_128 >> 8),(char)local_128 + '\x01')) {
      local_a0 = 0;
      for (iVar11 = 0; ppppplVar4 = param_1[0x12], (longlong)iVar11 < (longlong)ppppplVar4;
          iVar11 = iVar11 + local_74) {
        iVar7 = (int)ppppplVar4 - iVar11;
        if ((longlong)(local_74 + iVar11) <= (longlong)ppppplVar4) {
          iVar7 = local_74;
        }
        iVar31 = 0;
        iVar24 = 0;
LAB_1428ca74e:
        uVar32 = (undefined2)((uint)in_stack_fffffffffffffe10 >> 0x10);
        if ((longlong)iVar31 < (longlong)param_1[0x11]) {
          local_98 = (longlong ******)0x0;
          pppppplStack_90 = (longlong ******)0x0;
          cVar10 = FUN_14698d83a(&local_b8,&local_98);
          if (cVar10 == '\0') {
            pppppplStack_158 = (longlong ******)FUN_14001cc68(0x28,0x10);
            pppppplVar6 = pppppplStack_90;
            pppppplStack_158[1] = (longlong *****)&DAT_100000001;
            *pppppplStack_158 = (longlong *****)&PTR_LAB_149ef6700;
            local_160 = pppppplStack_158 + 2;
            pppppplStack_158[2] = (longlong *****)0x0;
            pppppplStack_158[3] = (longlong *****)0x0;
            pppppplStack_158[4] = (longlong *****)0x0;
            if ((longlong *******)pppppplStack_158 == (longlong *******)0x0) {
              ppppppplVar15 = (longlong *******)0x0;
            }
            else {
              LOCK();
              *(int *)(pppppplStack_158 + 1) = *(int *)(pppppplStack_158 + 1) + 1;
              UNLOCK();
              ppppppplVar15 = (longlong *******)pppppplStack_158;
            }
            local_118 = 0;
            local_110 = pppppplStack_158;
            local_98 = local_160;
            ppppppplVar9 = (longlong *******)pppppplStack_90;
            if ((ppppppplVar15 != (longlong *******)pppppplStack_90) &&
               (local_110 = (longlong ******)0x0, ppppppplVar9 = ppppppplVar15,
               (longlong *******)pppppplStack_90 != (longlong *******)0x0)) {
              LOCK();
              ppppppplVar2 = (longlong *******)(pppppplStack_90 + 1);
              *(int *)ppppppplVar2 = *(int *)ppppppplVar2 + -1;
              UNLOCK();
              if (*(int *)ppppppplVar2 == 0) {
                pppppplVar5 = (longlong ******)*pppppplStack_90;
                pppppplStack_90 = (longlong ******)ppppppplVar15;
                (*(code *)*pppppplVar5)(pppppplVar6);
                LOCK();
                piVar3 = (int *)((longlong)pppppplVar6 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                ppppppplVar9 = (longlong *******)pppppplStack_90;
                if (*piVar3 == 0) {
                  (*(code *)(*pppppplVar6)[2])(pppppplVar6);
                  ppppppplVar9 = (longlong *******)pppppplStack_90;
                }
              }
            }
            pppppplStack_90 = (longlong ******)ppppppplVar9;
            FUN_14698d952(&local_118);
            FUN_14698d9aa(&local_160);
            pppppplVar6 = (longlong ******)local_98[1];
            local_98[1] = (longlong *****)((longlong)pppppplVar6 + local_1a8);
            if ((ulonglong)((longlong)local_98[2] - (longlong)pppppplVar6) < local_1a8) {
              FUN_14112c458();
            }
          }
          in_stack_fffffffffffffe10 = CONCAT22(uVar32,(short)local_c8);
          lVar16 = FUN_144b82d60(param_1[0xe],*local_98,iVar31,iVar11,0,in_stack_fffffffffffffe10);
          if (-1 < lVar16) {
            local_150 = (int)param_1[0x11] - iVar31;
            if ((longlong)(local_7c + iVar31) <= (longlong)param_1[0x11]) {
              local_150 = local_7c;
            }
            local_160 = &local_b8;
            pppppplStack_158 = &local_1d8;
            local_148 = local_98;
            pppppplStack_140 = pppppplStack_90;
            if ((longlong *******)pppppplStack_90 != (longlong *******)0x0) {
              LOCK();
              *(int *)(pppppplStack_90 + 1) = *(int *)(pppppplStack_90 + 1) + 1;
              UNLOCK();
            }
            local_138 = CONCAT31(local_138._1_3_,(char)local_128);
            local_130 = local_a0;
            puVar18 = (uint *)*puVar1;
            iStack_14c = iVar7;
            iStack_134 = iVar24;
            if (puVar18 != (uint *)0x0) goto LAB_1428ca994;
LAB_1428ca928:
            uVar27 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar27 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar27 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar17 = (undefined4 *)*local_c0;
            *local_c0 = 0;
            if (puVar17 == (undefined4 *)0x0) {
              puVar17 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar17 = 0xffffffff;
            *(undefined4 **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar1 = puVar17;
            FUN_140217a48(puVar1);
            puVar18 = (uint *)*puVar1;
LAB_1428ca994:
            uVar29 = *(longlong *)(puVar18 + 0x10) + 0xf;
            uVar27 = puVar18[0x12];
            do {
              puVar20 = (undefined8 *)(uVar29 & 0xfffffffffffffff0);
              if (puVar20 + 0x20 <= puVar18 + 0x4000) {
                *(undefined8 **)(puVar18 + 0x10) = puVar20 + 0x20;
                puVar18[0x12] = uVar27 + 1;
                local_1b0 = uVar29;
                local_70 = puVar20;
                FUN_1447247dc(puVar20,0);
                puVar20 = local_70;
                *local_70 = &PTR_FUN_149ef6718;
                local_118 = 0;
                local_108 = (longlong *)0x0;
                puVar19 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar19 = &PTR_LAB_149ef75e0;
                puVar19[1] = local_160;
                puVar19[2] = pppppplStack_158;
                puVar19[3] = CONCAT44(iStack_14c,local_150);
                puVar19[4] = local_148;
                puVar19[5] = pppppplStack_140;
                local_148 = (longlong ******)0x0;
                pppppplStack_140 = (longlong ******)0x0;
                *(int *)(puVar19 + 7) = local_130;
                puVar19[6] = CONCAT44(iStack_134,local_138);
                if (puVar19 + 1 == (undefined8 *)0x0) {
                  puVar20[0x16] = local_118;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
                  if (local_118 != 0) goto LAB_1428cab34;
                }
                else {
                  puVar20[0x16] = &LAB_14699b03a;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_1428cab34:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_1428cab6a;
                  DVar13 = FUN_140ad26c0();
                  DVar14 = GetCurrentThreadId();
                  uVar27 = (uint)(DVar13 != DVar14) * 0x200 + 0x6ff;
                  uVar29 = (ulonglong)uVar27;
                  *(uint *)(local_70 + 0x1e) = uVar27;
                  puVar20 = local_70;
                  if (local_118 != 0) {
                    plVar22 = local_108;
                    if (local_108 == (longlong *)0x0) {
                      plVar22 = (longlong *)&local_f8;
                    }
                    (**(code **)(*plVar22 + 0x10))();
                    uVar29 = (ulonglong)*(uint *)(local_70 + 0x1e);
                    puVar20 = local_70;
                  }
                }
                else {
                  uVar29 = 0x6ff;
LAB_1428cab6a:
                  *(int *)(puVar20 + 0x1e) = (int)uVar29;
                }
                uVar27 = (uint)uVar29;
                if ((uVar27 & 0xff) == 0xff) {
                  uVar12 = (uint)(uVar29 >> 10) & 3;
                  iVar28 = 0;
                  if ((uVar27 >> 9 & 1) == 0 || uVar12 < 2) {
                    uVar26 = (&DAT_149e38edc)[uVar12];
                  }
                  else {
                    uVar26 = 2;
                  }
                }
                else {
                  iVar28 = (uVar27 >> 7 & 2 | (uint)(uVar29 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                  uVar26 = 5;
                }
                FUN_144a24082(puVar20,L"GraphTask",uVar26,iVar28,0);
                if (puVar20 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
                  UNLOCK();
                }
                local_118 = CONCAT71(local_118._1_7_,1);
                FUN_1447439e4(puVar20,&local_118);
                uVar29 = local_178;
                iVar28 = (int)local_178;
                uVar27 = (int)local_178 + 1;
                local_178 = CONCAT44(local_178._4_4_,uVar27);
                if (local_178._4_4_ < uVar27) {
                  FUN_14476a5c8(local_1a0,uVar29 & 0xffffffff);
                }
                puVar21 = local_180;
                if (local_180 == (undefined1 *)0x0) {
                  puVar21 = local_1a0;
                }
                *(undefined8 **)(puVar21 + (longlong)iVar28 * 8) = local_70;
                FUN_14698d952(&local_148);
                FUN_14698d952(&local_98);
                iVar31 = iVar31 + local_7c;
                iVar24 = iVar24 + 1;
                goto LAB_1428ca74e;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_1428ca928;
              puVar18 = (uint *)*puVar1;
              *puVar18 = 0xffffffff;
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
              puVar18[0x12] = 0;
              *puVar1 = puVar18;
              uVar29 = (longlong)puVar18 + 0x67;
              uVar27 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0xb,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_98);
          uVar30 = local_78;
          goto LAB_1428cada4;
        }
        local_a0 = local_a0 + 1;
      }
    }
    uVar30 = local_78;
    if (local_62 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_1a0,local_78);
      FUN_14698da02();
      if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
        if (*local_120 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
        }
        else {
          local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
        }
      }
      else {
        local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
      }
      pppppplStack_90 = &local_170;
      local_118 = 0;
      local_110 = (longlong ******)((ulonglong)local_110 & 0xffffffff00000000);
      local_160 = (longlong ******)&LAB_14699b2c2;
      pppppplStack_158 = (longlong ******)&local_98;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
      uVar30 = local_78;
    }
  }
LAB_1428cada4:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_1a0,uVar30);
  FUN_14588b8d6(local_1a0);
  while (ppppplVar4 = local_b0, (longlong ******)local_b0 != (longlong ******)0x0) {
    pppppplVar6 = (longlong ******)(local_b0 + 1);
    local_b0 = (longlong *****)*local_b0;
    FUN_14698d952(pppppplVar6);
    FUN_1400020a8(ppppplVar4);
  }
  return;
}



// FUNCTION 1428caf36 Unwind@1428caf36 body=38 status=ok
// SIG undefined Unwind@1428caf36(void)

void Unwind_1428caf36(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428caf5e Unwind@1428caf5e body=196 status=ok
// SIG undefined Unwind@1428caf5e(void)

void Unwind_1428caf5e(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x68) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0x158);
        **(undefined8 **)(param_2 + 0x158) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428cb022 Unwind@1428cb022 body=95 status=ok
// SIG undefined Unwind@1428cb022(void)

void Unwind_1428cb022(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a8))(*(undefined8 **)(param_2 + 0x1a8),1);
    }
  }
  return;
}



// FUNCTION 1428cb082 Unwind@1428cb082 body=95 status=ok
// SIG undefined Unwind@1428cb082(void)

void Unwind_1428cb082(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a8))(*(undefined8 **)(param_2 + 0x1a8),1);
    }
  }
  return;
}



// FUNCTION 1428cb0e2 Unwind@1428cb0e2 body=64 status=ok
// SIG undefined Unwind@1428cb0e2(void)

void Unwind_1428cb0e2(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  return;
}



// FUNCTION 1428cb122 Unwind@1428cb122 body=67 status=ok
// SIG undefined Unwind@1428cb122(void)

void Unwind_1428cb122(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428cb166 Unwind@1428cb166 body=131 status=ok
// SIG undefined Unwind@1428cb166(void)

void Unwind_1428cb166(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x78,*(undefined4 *)(param_2 + 0x1a0));
  FUN_14588b8d6(param_2 + 0x78);
  while (puVar1 = *(undefined8 **)(param_2 + 0x168), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x168) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428cb1ea Unwind@1428cb1ea body=76 status=ok
// SIG undefined Unwind@1428cb1ea(void)

void Unwind_1428cb1ea(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  FUN_14698d9aa(param_2 + 0xb8);
  return;
}



// FUNCTION 1428cb236 Unwind@1428cb236 body=38 status=ok
// SIG undefined Unwind@1428cb236(void)

void Unwind_1428cb236(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428cb25e FUN_1428cb25e body=4057 status=ok
// SIG undefined FUN_1428cb25e(void)

void FUN_1428cb25e(longlong *param_1,undefined1 param_2,char param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  byte bVar23;
  longlong lVar24;
  byte bVar25;
  undefined1 uVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong **pplVar29;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a7;
  byte local_1a6;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 *local_198;
  longlong local_190;
  ulonglong local_188;
  undefined1 local_180 [32];
  undefined1 *local_160;
  undefined8 local_158;
  short local_14e;
  uint local_14c;
  int *local_148;
  ulonglong local_140;
  undefined8 *local_138;
  longlong *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  uint local_118;
  undefined4 uStack_114;
  longlong *plStack_110;
  longlong *plStack_108;
  undefined4 local_100;
  byte local_fc;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  undefined1 local_a1;
  undefined8 *local_a0;
  longlong *local_98;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  undefined8 *local_70;
  char local_64;
  undefined1 local_63;
  ushort local_62 [17];
  
  local_62[1] = 0xfffe;
  local_62[2] = 0xffff;
  local_62[3] = 0xffff;
  local_62[4] = 0xffff;
  local_190 = FUN_144b77940(param_1[0xe]);
  local_140 = FUN_144b77ad0(param_1[0xe]);
  local_1c8 = param_1[0x13];
  local_1c0 = (ulonglong)param_1[0x14] >> 1;
  local_14e = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_14e);
  bVar23 = 1;
  bVar25 = 1;
  local_1a7 = param_2;
  if (local_14e != 2) {
    local_1a7 = 1;
    bVar25 = *(byte *)((longlong)param_1 + 0x7e);
  }
  local_1a4 = (undefined4)param_1[0x11];
  local_1a0 = (undefined4)param_1[0x12];
  local_1b0 = &local_1c8;
  local_198 = &local_a1;
  if (local_14e == 2) {
    bVar23 = (byte)*(undefined2 *)((longlong)param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a8 = param_2;
  local_1a6 = bVar25;
  local_98 = param_1;
  local_f8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_f8 = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_160 = (undefined1 *)0x0;
  local_158 = 0x400000000;
  local_f0 = local_f8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar6 != 2)) {
    uVar7 = 0xff;
    if (iVar6 != 1) goto LAB_1428cb3c4;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428cb3c4;
  }
  uVar7 = 1;
LAB_1428cb3c4:
  plVar20 = local_98;
  local_62[0] = 0;
  FUN_144b77e20(local_98[0xe],0x116,local_62);
  uVar11 = (ulonglong)local_62[0];
  uVar28 = plVar20[0x12];
  uVar22 = uVar11;
  if ((longlong)uVar28 < (longlong)uVar11) {
    uVar22 = uVar28;
  }
  if (uVar11 == 0) {
    uVar22 = uVar28;
  }
  if (local_140 < (ulonglong)((uint)bVar25 * 2) * plVar20[0x11] * (longlong)(int)uVar22) {
    FUN_14020fad6(plVar20 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar7;
    iVar6 = FUN_144b77d80(plVar20[0xe]);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    local_64 = param_3;
    if ((int)local_158._4_4_ < iVar6) {
      FUN_14473dbc4(local_180,iVar6);
    }
    local_14c = (uint)bVar23;
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar2 = (undefined8 *)(lVar13 + 0x308);
    local_138 = (undefined8 *)(lVar13 + 0x310);
    local_148 = (int *)(lVar13 + 0xc60);
    bVar25 = 0;
    plVar20 = local_98;
    local_63 = param_2;
    while( true ) {
      uVar26 = local_63;
      pplVar29 = &local_f8;
      local_a8 = (uint)bVar25;
      if (local_14c < local_a8 || local_14c == bVar25) break;
      if (local_62[0] == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(pplVar29,&local_88);
        if (cVar5 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar12 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_130 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_128._0_4_ = SUB84(local_e0,0);
          uStack_128._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar17 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar17 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_130;
          plVar4 = plStack_80;
          if ((plVar17 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar4 = plVar17, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar17;
              (*(code *)*puVar18)(plVar12);
              LOCK();
              piVar3 = (int *)((longlong)plVar12 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              plVar4 = plStack_80;
              if (*piVar3 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_130);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_140;
          if ((ulonglong)(local_88[2] - lVar13) < local_140) {
            FUN_14112c458();
          }
        }
        lVar13 = FUN_144b82e30(plVar20[0xe],local_a8,*local_88,local_140);
        puVar18 = local_138;
        if (lVar13 != -1) {
          local_120 = &local_1b8;
          local_118 = (uint)local_88;
          uStack_114 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_110 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_108 = (longlong *)CONCAT71(plStack_108._1_7_,bVar25);
          puVar15 = (uint *)*puVar2;
          local_130 = plVar20;
          if (puVar15 != (uint *)0x0) goto LAB_1428cbce6;
LAB_1428cbc83:
          uVar27 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          uStack_128 = pplVar29;
          if ((uVar27 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar27 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          FUN_140217a48(puVar2);
          puVar15 = (uint *)*puVar2;
          pplVar29 = uStack_128;
LAB_1428cbce6:
          puVar16 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 0xf);
          uVar27 = puVar15[0x12];
          do {
            puVar21 = (undefined8 *)((ulonglong)puVar16 & 0xfffffffffffffff0);
            if (puVar21 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar21 + 0x20;
              puVar15[0x12] = uVar27 + 1;
              local_a0 = puVar16;
              local_70 = puVar21;
              uStack_128 = pplVar29;
              FUN_1447247dc(puVar21,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar16 = &PTR_LAB_149ef7620;
              puVar16[1] = local_130;
              puVar16[2] = uStack_128;
              puVar16[3] = local_120;
              puVar16[4] = CONCAT44(uStack_114,local_118);
              puVar16[5] = plStack_110;
              local_118 = 0;
              uStack_114 = 0;
              plStack_110 = (longlong *)0x0;
              *(undefined1 *)(puVar16 + 6) = plStack_108._0_1_;
              if (puVar16 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_1428cbe79;
              }
              else {
                puVar18[0x16] = &LAB_14699b520;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428cbe79:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428cbeaf;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar27 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar28 = (ulonglong)uVar27;
                *(uint *)(puVar18 + 0x1e) = uVar27;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar28 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                  plVar20 = local_98;
                }
              }
              else {
                uVar28 = 0x6ff;
LAB_1428cbeaf:
                *(int *)(puVar18 + 0x1e) = (int)uVar28;
              }
              uVar27 = (uint)uVar28;
              if ((uVar27 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar28 >> 10) & 3;
                iVar6 = 0;
                if ((uVar27 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar26 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar26 = 2;
                }
              }
              else {
                iVar6 = (uVar27 >> 7 & 2 | (uint)(uVar28 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                uVar26 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar26,iVar6,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              uVar28 = local_158;
              iVar6 = (int)local_158;
              uVar27 = (int)local_158 + 1;
              local_158 = CONCAT44(local_158._4_4_,uVar27);
              if (local_158._4_4_ < uVar27) {
                FUN_14476a5c8(local_180,uVar28 & 0xffffffff);
              }
              puVar19 = local_160;
              if (local_160 == (undefined1 *)0x0) {
                puVar19 = local_180;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar6 * 8) = local_70;
              FUN_14698d952(&local_118);
              FUN_14698d952(&local_88);
              goto LAB_1428cbfd2;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428cbc83;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            puVar16 = (undefined8 *)((longlong)puVar15 + 0x67);
            uVar27 = 0;
          } while( true );
        }
LAB_1428cc07e:
        FUN_14020fad6(plVar20 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        goto LAB_1428cc0a4;
      }
      puVar18 = (undefined8 *)0x0;
LAB_1428cb4df:
      if ((longlong)puVar18 < plVar20[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        local_70 = puVar18;
        cVar5 = FUN_14698d83a(&local_f8,&local_88);
        if (cVar5 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_130 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_128._0_4_ = SUB84(local_e0,0);
          uStack_128._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar12 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_130;
          plVar17 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar17 = plVar12, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar4 = plStack_80 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              puVar16 = (undefined8 *)*plStack_80;
              plStack_80 = plVar12;
              (*(code *)*puVar16)(plVar20);
              LOCK();
              piVar3 = (int *)((longlong)plVar20 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              plVar17 = plStack_80;
              if (*piVar3 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar17 = plStack_80;
              }
            }
          }
          plStack_80 = plVar17;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_130);
          plVar20 = local_98;
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_140;
          if ((ulonglong)(local_88[2] - lVar13) < local_140) {
            FUN_14112c458();
          }
        }
        uVar27 = (int)plVar20[0x12] - (int)puVar18;
        if ((longlong)(ulonglong)((int)local_70 + (uint)local_62[0]) <= plVar20[0x12]) {
          uVar27 = (uint)local_62[0];
        }
        lVar13 = *local_88;
        lVar24 = (int)uVar27 * local_190;
        uVar7 = FUN_144b77d20(plVar20[0xe],local_70,local_a8);
        lVar13 = FUN_144b82e30(plVar20[0xe],uVar7,lVar13,lVar24);
        if (lVar13 != -1) {
          uStack_128 = &local_1b8;
          local_120 = &local_f8;
          plStack_110 = local_88;
          plStack_108 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_100 = SUB84(local_70,0);
          puVar15 = (uint *)*puVar2;
          local_130 = plVar20;
          local_118 = uVar27;
          local_fc = bVar25;
          if (puVar15 != (uint *)0x0) goto LAB_1428cb740;
LAB_1428cb6d9:
          puVar18 = local_138;
          uVar27 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar27 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar27 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          FUN_140217a48(puVar2);
          puVar15 = (uint *)*puVar2;
LAB_1428cb740:
          uVar28 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar27 = puVar15[0x12];
          do {
            puVar18 = (undefined8 *)(uVar28 & 0xfffffffffffffff0);
            if (puVar18 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar18 + 0x20;
              puVar15[0x12] = uVar27 + 1;
              local_188 = uVar28;
              local_a0 = puVar18;
              FUN_1447247dc(puVar18,0);
              puVar18 = local_a0;
              *local_a0 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar16 = &PTR_LAB_149ef7600;
              puVar16[1] = local_130;
              puVar16[2] = uStack_128;
              *(ulonglong *)((longlong)puVar16 + 0x14) =
                   CONCAT44((undefined4)local_120,uStack_128._4_4_);
              *(ulonglong *)((longlong)puVar16 + 0x1c) = CONCAT44(local_118,local_120._4_4_);
              puVar16[5] = plStack_110;
              puVar16[6] = plStack_108;
              plStack_110 = (longlong *)0x0;
              plStack_108 = (longlong *)0x0;
              *(byte *)((longlong)puVar16 + 0x3c) = local_fc;
              *(undefined4 *)(puVar16 + 7) = local_100;
              if (puVar16 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_1428cb8df;
              }
              else {
                puVar18[0x16] = &LAB_14699b2de;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428cb8df:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428cb915;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar27 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar28 = (ulonglong)uVar27;
                *(uint *)(puVar18 + 0x1e) = uVar27;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar28 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar28 = 0x6ff;
LAB_1428cb915:
                *(int *)(puVar18 + 0x1e) = (int)uVar28;
              }
              uVar27 = (uint)uVar28;
              if ((uVar27 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar28 >> 10) & 3;
                iVar6 = 0;
                if ((uVar27 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar26 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar26 = 2;
                }
              }
              else {
                iVar6 = (uVar27 >> 7 & 2 | (uint)(uVar28 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                uVar26 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar26,iVar6,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              uVar28 = local_158;
              iVar6 = (int)local_158;
              uVar27 = (int)local_158 + 1;
              local_158 = CONCAT44(local_158._4_4_,uVar27);
              if (local_158._4_4_ < uVar27) {
                FUN_14476a5c8(local_180,uVar28 & 0xffffffff);
              }
              puVar19 = local_160;
              if (local_160 == (undefined1 *)0x0) {
                puVar19 = local_180;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar6 * 8) = local_a0;
              FUN_14698d952(&plStack_110);
              FUN_14698d952(&local_88);
              puVar18 = (undefined8 *)(ulonglong)((int)local_70 + (uint)local_62[0]);
              plVar20 = local_98;
              goto LAB_1428cb4df;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428cb6d9;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            uVar28 = (longlong)puVar15 + 0x67;
            uVar27 = 0;
          } while( true );
        }
        goto LAB_1428cc07e;
      }
LAB_1428cbfd2:
      bVar25 = bVar25 + 1;
    }
    uVar7 = local_8c;
    if (local_64 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_180,local_8c);
      FUN_14698da02();
      plVar20 = local_98;
      if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
        if (*local_148 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          local_88 = (longlong *)CONCAT71(local_88._1_7_,uVar26);
        }
        else {
          local_88 = (longlong *)CONCAT71(local_88._1_7_,uVar26);
        }
      }
      else {
        local_88 = (longlong *)CONCAT71(local_88._1_7_,uVar26);
      }
      local_e8 = 0;
      local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
      local_130 = (longlong *)&LAB_14699b602;
      plStack_80 = &local_1c8;
      uStack_128 = &local_88;
      FUN_1401f8d10(L"ParallelFor Task",(int)plVar20[0x12] * (int)plVar20[0x11],1);
      uVar7 = local_8c;
    }
  }
LAB_1428cc0a4:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_180,uVar7);
  FUN_14588b8d6(local_180);
  while (plVar20 = local_f0, local_f0 != (longlong *)0x0) {
    plVar12 = local_f0 + 1;
    local_f0 = (longlong *)*local_f0;
    FUN_14698d952(plVar12);
    FUN_1400020a8(plVar20);
  }
  return;
}



// FUNCTION 1428cc238 Unwind@1428cc238 body=38 status=ok
// SIG undefined Unwind@1428cc238(void)

void Unwind_1428cc238(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428cc260 Unwind@1428cc260 body=193 status=ok
// SIG undefined Unwind@1428cc260(void)

void Unwind_1428cc260(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x168) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x80) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xd0);
        **(undefined8 **)(param_2 + 0xd0) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428cc322 Unwind@1428cc322 body=83 status=ok
// SIG undefined Unwind@1428cc322(void)

void Unwind_1428cc322(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x168);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428cc376 Unwind@1428cc376 body=83 status=ok
// SIG undefined Unwind@1428cc376(void)

void Unwind_1428cc376(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x168);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428cc3ca Unwind@1428cc3ca body=64 status=ok
// SIG undefined Unwind@1428cc3ca(void)

void Unwind_1428cc3ca(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf8);
  return;
}



// FUNCTION 1428cc40a Unwind@1428cc40a body=67 status=ok
// SIG undefined Unwind@1428cc40a(void)

void Unwind_1428cc40a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428cc44e Unwind@1428cc44e body=38 status=ok
// SIG undefined Unwind@1428cc44e(void)

void Unwind_1428cc44e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428cc476 Unwind@1428cc476 body=196 status=ok
// SIG undefined Unwind@1428cc476(void)

void Unwind_1428cc476(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x198) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x168) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xd0);
        **(undefined8 **)(param_2 + 0xd0) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428cc53a Unwind@1428cc53a body=95 status=ok
// SIG undefined Unwind@1428cc53a(void)

void Unwind_1428cc53a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x198) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x198) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x198))(*(undefined8 **)(param_2 + 0x198),1);
    }
  }
  return;
}



// FUNCTION 1428cc59a Unwind@1428cc59a body=95 status=ok
// SIG undefined Unwind@1428cc59a(void)

void Unwind_1428cc59a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x198) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x198) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x198))(*(undefined8 **)(param_2 + 0x198),1);
    }
  }
  return;
}



// FUNCTION 1428cc5fa Unwind@1428cc5fa body=64 status=ok
// SIG undefined Unwind@1428cc5fa(void)

void Unwind_1428cc5fa(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf0);
  return;
}



// FUNCTION 1428cc63a Unwind@1428cc63a body=67 status=ok
// SIG undefined Unwind@1428cc63a(void)

void Unwind_1428cc63a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428cc67e Unwind@1428cc67e body=131 status=ok
// SIG undefined Unwind@1428cc67e(void)

void Unwind_1428cc67e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x88,*(undefined4 *)(param_2 + 0x17c));
  FUN_14588b8d6(param_2 + 0x88);
  while (puVar1 = *(undefined8 **)(param_2 + 0x118), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x118) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428cc702 Unwind@1428cc702 body=76 status=ok
// SIG undefined Unwind@1428cc702(void)

void Unwind_1428cc702(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428cc74e Unwind@1428cc74e body=76 status=ok
// SIG undefined Unwind@1428cc74e(void)

void Unwind_1428cc74e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428cc79a Unwind@1428cc79a body=38 status=ok
// SIG undefined Unwind@1428cc79a(void)

void Unwind_1428cc79a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428cc7c2 FUN_1428cc7c2 body=2405 status=ok
// SIG undefined FUN_1428cc7c2(void)

void FUN_1428cc7c2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  short sVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  byte bVar20;
  undefined1 uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  int iVar25;
  byte bVar26;
  int iVar27;
  bool bVar28;
  undefined8 local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
  undefined1 local_1a8;
  char local_1a7;
  byte local_1a6;
  int local_1a4;
  int local_1a0;
  undefined1 *local_198;
  int *local_190;
  ulonglong local_188;
  ulonglong local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  longlong local_148;
  longlong *local_140;
  longlong *local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 **local_100;
  longlong *plStack_f8;
  int local_f0;
  int iStack_ec;
  undefined8 **local_e8;
  longlong *plStack_e0;
  undefined4 local_d8;
  int iStack_d4;
  int local_d0;
  undefined8 local_c8;
  short local_ba;
  uint local_b8;
  uint local_b4;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  int local_8c;
  undefined8 **local_88;
  longlong *plStack_80;
  undefined1 local_75;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_144b77940(*(undefined8 *)(param_1 + 0x70));
  FUN_144b77ad0(*(undefined8 *)(param_1 + 0x70));
  local_1c8 = *(undefined8 *)(param_1 + 0x98);
  local_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 1;
  local_ba = 0;
  FUN_144b7a120(*(undefined8 *)(param_1 + 0x70),0x11c,&local_ba);
  sVar5 = local_ba;
  bVar20 = 1;
  bVar28 = local_ba == 2;
  if (!bVar28) {
    bVar20 = *(byte *)(param_1 + 0x7e);
  }
  local_70 = *(int *)(param_1 + 0x88);
  local_6c = *(int *)(param_1 + 0x90);
  iVar8 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x142);
  if ((iVar8 == 0) ||
     (iVar8 = FUN_144b77e20(*(undefined8 *)(param_1 + 0x70),0x143,&local_6c), iVar8 == 0)) {
    FUN_14020fad6(param_1 + 0x58,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  local_1b0 = &local_1c8;
  local_1a7 = bVar28 * '\x03' + '\x01';
  local_1a8 = 4;
  local_1a4 = local_70;
  local_1a0 = local_6c;
  local_198 = &local_75;
  bVar26 = 1;
  if (sVar5 == 2) {
    bVar26 = (byte)*(undefined2 *)(param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a6 = bVar20;
  local_a8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar8 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar8 != 2)) {
    local_74 = 0xff;
    if (iVar8 != 1) goto LAB_1428cc98e;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_1428cc98e;
  }
  local_74 = 1;
LAB_1428cc98e:
  local_180 = FUN_144b7ac40(*(undefined8 *)(param_1 + 0x70));
  if (local_180 < (ulonglong)((longlong)(int)((uint)bVar20 * local_6c * local_70) * 2)) {
    FUN_14020fad6(param_1 + 0x58,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    iVar8 = FUN_144b7b020(*(undefined8 *)(param_1 + 0x70));
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    if ((int)local_150._4_4_ < iVar8) {
      FUN_14473dbc4(local_178,iVar8);
    }
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar13 + 0x308);
    local_b0 = (undefined8 *)(lVar13 + 0x310);
    local_190 = (int *)(lVar13 + 0xc60);
    local_b4 = (uint)bVar26;
    for (local_c8 = 0; local_b8 = (uint)local_c8 & 0xff, local_b8 < local_b4;
        local_c8 = CONCAT71((int7)((ulonglong)local_c8 >> 8),(char)local_c8 + '\x01')) {
      local_8c = 0;
      for (iVar8 = 0; lVar13 = *(longlong *)(param_1 + 0x90), iVar8 < lVar13;
          iVar8 = iVar8 + local_6c) {
        iVar4 = (int)lVar13 - iVar8;
        if (local_6c + iVar8 <= lVar13) {
          iVar4 = local_6c;
        }
        iVar25 = 0;
        iVar27 = 0;
LAB_1428cca87:
        if ((longlong)iVar25 < *(longlong *)(param_1 + 0x88)) {
          local_88 = (undefined8 **)0x0;
          plStack_80 = (longlong *)0x0;
          cVar7 = FUN_14698d83a(&local_a8,&local_88);
          if (cVar7 == '\0') {
            plStack_f8 = (longlong *)FUN_14001cc68(0x28,0x10);
            plVar19 = plStack_80;
            plStack_f8[1] = (longlong)&DAT_100000001;
            *plStack_f8 = (longlong)&PTR_LAB_149ef6700;
            local_100 = (undefined8 **)(plStack_f8 + 2);
            plStack_f8[2] = 0;
            plStack_f8[3] = 0;
            plStack_f8[4] = 0;
            if (plStack_f8 == (longlong *)0x0) {
              plVar12 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plStack_f8 + 1) = (int)plStack_f8[1] + 1;
              UNLOCK();
              plVar12 = plStack_f8;
            }
            local_148 = 0;
            local_140 = plStack_f8;
            local_88 = local_100;
            plVar6 = plStack_80;
            if ((plVar12 != plStack_80) &&
               (local_140 = (longlong *)0x0, plVar6 = plVar12, plStack_80 != (longlong *)0x0)) {
              LOCK();
              plVar1 = plStack_80 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                puVar17 = (undefined8 *)*plStack_80;
                plStack_80 = plVar12;
                (*(code *)*puVar17)(plVar19);
                LOCK();
                piVar2 = (int *)((longlong)plVar19 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar6 = plStack_80;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar19 + 0x10))(plVar19);
                  plVar6 = plStack_80;
                }
              }
            }
            plStack_80 = plVar6;
            FUN_14698d952(&local_148);
            FUN_14698d9aa(&local_100);
            puVar17 = local_88[1];
            local_88[1] = (undefined8 *)((longlong)puVar17 + local_180);
            if ((ulonglong)((longlong)local_88[2] - (longlong)puVar17) < local_180) {
              FUN_14112c458();
            }
          }
          lVar13 = FUN_144b82d60(*(undefined8 *)(param_1 + 0x70),*local_88,iVar25,iVar8,0,
                                 (short)local_b8);
          if (-1 < lVar13) {
            local_f0 = (int)*(longlong *)(param_1 + 0x88) - iVar25;
            if ((longlong)(local_70 + iVar25) <= *(longlong *)(param_1 + 0x88)) {
              local_f0 = local_70;
            }
            local_100 = &local_a8;
            plStack_f8 = &local_1b8;
            local_e8 = local_88;
            plStack_e0 = plStack_80;
            if (plStack_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
              UNLOCK();
            }
            local_d8 = CONCAT31(local_d8._1_3_,(char)local_c8);
            local_d0 = local_8c;
            puVar15 = (uint *)*puVar3;
            iStack_ec = iVar4;
            iStack_d4 = iVar27;
            if (puVar15 != (uint *)0x0) goto LAB_1428cccd0;
LAB_1428ccc66:
            uVar22 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar22 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar22 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar14 = (undefined4 *)*local_b0;
            *local_b0 = 0;
            if (puVar14 == (undefined4 *)0x0) {
              puVar14 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar14 = 0xffffffff;
            *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar3 = puVar14;
            FUN_140217a48(puVar3);
            puVar15 = (uint *)*puVar3;
LAB_1428cccd0:
            uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
            uVar22 = puVar15[0x12];
            do {
              puVar17 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
              if (puVar17 + 0x20 <= puVar15 + 0x4000) {
                *(undefined8 **)(puVar15 + 0x10) = puVar17 + 0x20;
                puVar15[0x12] = uVar22 + 1;
                local_188 = uVar24;
                local_68 = puVar17;
                FUN_1447247dc(puVar17,0);
                puVar17 = local_68;
                *local_68 = &PTR_FUN_149ef6718;
                local_148 = 0;
                local_138 = (longlong *)0x0;
                puVar16 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar16 = &PTR_LAB_149ef7640;
                puVar16[1] = local_100;
                puVar16[2] = plStack_f8;
                puVar16[3] = CONCAT44(iStack_ec,local_f0);
                puVar16[4] = local_e8;
                puVar16[5] = plStack_e0;
                local_e8 = (undefined8 **)0x0;
                plStack_e0 = (longlong *)0x0;
                *(int *)(puVar16 + 7) = local_d0;
                puVar16[6] = CONCAT44(iStack_d4,local_d8);
                if (puVar16 + 1 == (longlong *)0x0) {
                  puVar17[0x16] = local_148;
                  puVar17[0x18] = puVar16;
                  *(undefined4 *)(puVar17 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar17 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar17 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar17 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_11c;
                  if (local_148 != 0) goto LAB_1428cce5c;
                }
                else {
                  puVar17[0x16] = &LAB_14699b61e;
                  puVar17[0x18] = puVar16;
                  *(undefined4 *)(puVar17 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar17 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar17 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar17 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_11c;
LAB_1428cce5c:
                  local_148 = 0;
                }
                local_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_190 != 2)) {
                  uVar24 = 0x8ff;
                  if (*local_190 != 1) goto LAB_1428cce8f;
                  DVar10 = FUN_140ad26c0();
                  DVar11 = GetCurrentThreadId();
                  uVar22 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                  uVar24 = (ulonglong)uVar22;
                  *(uint *)(local_68 + 0x1e) = uVar22;
                  puVar17 = local_68;
                  if (local_148 != 0) {
                    plVar19 = local_138;
                    if (local_138 == (longlong *)0x0) {
                      plVar19 = (longlong *)&local_128;
                    }
                    (**(code **)(*plVar19 + 0x10))();
                    uVar24 = (ulonglong)*(uint *)(local_68 + 0x1e);
                    puVar17 = local_68;
                  }
                }
                else {
                  uVar24 = 0x6ff;
LAB_1428cce8f:
                  *(int *)(puVar17 + 0x1e) = (int)uVar24;
                }
                uVar22 = (uint)uVar24;
                if ((uVar22 & 0xff) == 0xff) {
                  uVar9 = (uint)(uVar24 >> 10) & 3;
                  iVar23 = 0;
                  if ((uVar22 >> 9 & 1) == 0 || uVar9 < 2) {
                    uVar21 = (&DAT_149e38edc)[uVar9];
                  }
                  else {
                    uVar21 = 2;
                  }
                }
                else {
                  iVar23 = (uVar22 >> 7 & 2 | (uint)(uVar24 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar22 & 0xff) * 4);
                  uVar21 = 5;
                }
                FUN_144a24082(puVar17,L"GraphTask",uVar21,iVar23,0);
                if (puVar17 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                  UNLOCK();
                }
                local_148 = CONCAT71(local_148._1_7_,1);
                FUN_1447439e4(puVar17,&local_148);
                uVar24 = local_150;
                iVar23 = (int)local_150;
                uVar22 = (int)local_150 + 1;
                local_150 = CONCAT44(local_150._4_4_,uVar22);
                if (local_150._4_4_ < uVar22) {
                  FUN_14476a5c8(local_178,uVar24 & 0xffffffff);
                }
                puVar18 = local_158;
                if (local_158 == (undefined1 *)0x0) {
                  puVar18 = local_178;
                }
                *(undefined8 **)(puVar18 + (longlong)iVar23 * 8) = local_68;
                FUN_14698d952(&local_e8);
                FUN_14698d952(&local_88);
                iVar25 = iVar25 + local_70;
                iVar27 = iVar27 + 1;
                goto LAB_1428cca87;
              }
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
              LOCK();
              uVar9 = *puVar15;
              *puVar15 = *puVar15 + uVar22 + 1;
              UNLOCK();
              if ((uVar9 ^ uVar22) != 0xffffffff) goto LAB_1428ccc66;
              puVar15 = (uint *)*puVar3;
              *puVar15 = 0xffffffff;
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
              puVar15[0x12] = 0;
              *puVar3 = puVar15;
              uVar24 = (longlong)puVar15 + 0x67;
              uVar22 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0x58,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_88);
          goto LAB_1428cd0b0;
        }
        local_8c = local_8c + 1;
      }
    }
  }
LAB_1428cd0b0:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,local_74);
  FUN_14588b8d6(local_178);
  while (puVar3 = local_a0, local_a0 != (undefined8 *)0x0) {
    puVar17 = local_a0 + 1;
    local_a0 = (undefined8 *)*local_a0;
    FUN_14698d952(puVar17);
    FUN_1400020a8(puVar3);
  }
  return;
}



// FUNCTION 1428cd128 Unwind@1428cd128 body=38 status=ok
// SIG undefined Unwind@1428cd128(void)

void Unwind_1428cd128(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428cd150 Unwind@1428cd150 body=196 status=ok
// SIG undefined Unwind@1428cd150(void)

void Unwind_1428cd150(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x70) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0x148);
        **(undefined8 **)(param_2 + 0x148) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428cd214 Unwind@1428cd214 body=95 status=ok
// SIG undefined Unwind@1428cd214(void)

void Unwind_1428cd214(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428cd274 Unwind@1428cd274 body=95 status=ok
// SIG undefined Unwind@1428cd274(void)

void Unwind_1428cd274(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428cd2d4 Unwind@1428cd2d4 body=67 status=ok
// SIG undefined Unwind@1428cd2d4(void)

void Unwind_1428cd2d4(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x110);
  return;
}



// FUNCTION 1428cd318 Unwind@1428cd318 body=67 status=ok
// SIG undefined Unwind@1428cd318(void)

void Unwind_1428cd318(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428cd35c Unwind@1428cd35c body=38 status=ok
// SIG undefined Unwind@1428cd35c(void)

void Unwind_1428cd35c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428cd384 Unwind@1428cd384 body=130 status=ok
// SIG undefined Unwind@1428cd384(void)

void Unwind_1428cd384(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x80,*(undefined4 *)(param_2 + 0x184));
  FUN_14588b8d6(param_2 + 0x80);
  while (puVar1 = *(undefined8 **)(param_2 + 0x158), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x158) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428cd406 Unwind@1428cd406 body=73 status=ok
// SIG undefined Unwind@1428cd406(void)

void Unwind_1428cd406(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xb0);
  FUN_14698d9aa(param_2 + 0xf8);
  return;
}



// FUNCTION 1428cd450 FUN_1428cd450 body=3601 status=ok
// SIG undefined FUN_1428cd450(void)

void FUN_1428cd450(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined1 uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  byte bVar26;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  char local_1a7;
  byte local_1a6;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 *local_198;
  longlong local_190;
  ulonglong local_188;
  int *local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  short local_146;
  uint local_144;
  ulonglong local_140;
  ulonglong local_138;
  undefined8 *local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  longlong *plStack_c0;
  longlong *plStack_b8;
  int local_b0;
  undefined1 local_ac;
  longlong *local_a8;
  longlong *local_a0;
  undefined1 local_8d;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  ushort local_6a;
  undefined8 *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_190 = FUN_144b77940(param_1[0xe]);
  local_138 = FUN_144b77ad0(param_1[0xe]);
  local_1c8 = param_1[0x13];
  local_1c0 = (ulonglong)param_1[0x14] >> 1;
  local_146 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_146);
  bVar26 = 1;
  local_1a7 = (local_146 == 2) * '\x03' + '\x01';
  if (local_146 != 2) {
    bVar26 = *(byte *)((longlong)param_1 + 0x7e);
  }
  local_1a4 = (undefined4)param_1[0x11];
  local_1a0 = (undefined4)param_1[0x12];
  local_1b0 = &local_1c8;
  local_1a8 = 4;
  local_198 = &local_8d;
  uVar22 = 1;
  if (local_146 == 2) {
    uVar22 = (uint)*(ushort *)((longlong)param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a6 = bVar26;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar6 != 2)) {
    uVar7 = 0xff;
    if (iVar6 != 1) goto LAB_1428cd5a4;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428cd5a4;
  }
  uVar7 = 1;
LAB_1428cd5a4:
  local_6a = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_6a);
  uVar11 = (ulonglong)local_6a;
  uVar24 = param_1[0x12];
  uVar20 = uVar11;
  if ((longlong)uVar24 < (longlong)uVar11) {
    uVar20 = uVar24;
  }
  if (uVar11 == 0) {
    uVar20 = uVar24;
  }
  if (local_138 < (ulonglong)((uint)bVar26 * 2) * param_1[0x11] * (longlong)(int)uVar20) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar7;
    iVar6 = FUN_144b77d80(param_1[0xe]);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if ((int)local_150._4_4_ < iVar6) {
      FUN_14473dbc4(local_178,iVar6);
    }
    local_144 = uVar22 & 0xff;
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar13 + 0x308);
    local_130 = (undefined8 *)(lVar13 + 0x310);
    local_180 = (int *)(lVar13 + 0xc60);
    uVar24 = 0;
    while( true ) {
      uVar20 = uVar24 & 0xff;
      uVar7 = local_8c;
      if (local_144 <= (uint)uVar20) break;
      local_188 = uVar24;
      if (local_6a == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar5 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar19 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar12 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar4 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar4 = plVar12, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar17 = (undefined8 *)*plStack_80;
              plStack_80 = plVar12;
              (*(code *)*puVar17)(plVar19);
              LOCK();
              piVar2 = (int *)((longlong)plVar19 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar4 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_138;
          if ((ulonglong)(local_88[2] - lVar13) < local_138) {
            FUN_14112c458();
          }
        }
        lVar13 = FUN_144b82e30(param_1[0xe],uVar20,*local_88,local_138);
        puVar17 = local_130;
        if (lVar13 != -1) {
          uStack_d8 = &local_a8;
          local_d0 = &local_1b8;
          local_c8 = (uint)local_88;
          uStack_c4 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_c0 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_b8 = (longlong *)CONCAT71(plStack_b8._1_7_,(char)uVar24);
          puVar15 = (uint *)*puVar3;
          local_e0 = param_1;
          if (puVar15 != (uint *)0x0) goto LAB_1428cde40;
LAB_1428cdddd:
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar17;
          *puVar17 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          FUN_140217a48(puVar3);
          puVar15 = (uint *)*puVar3;
LAB_1428cde40:
          uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar22 = puVar15[0x12];
          do {
            puVar16 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
            if (puVar16 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar16 + 0x20;
              puVar15[0x12] = uVar22 + 1;
              local_140 = uVar24;
              local_68 = puVar16;
              FUN_1447247dc(puVar16,0);
              puVar17 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar16 = &PTR_LAB_149ef7680;
              puVar16[1] = local_e0;
              puVar16[2] = uStack_d8;
              puVar16[3] = local_d0;
              puVar16[4] = CONCAT44(uStack_c4,local_c8);
              puVar16[5] = plStack_c0;
              local_c8 = 0;
              uStack_c4 = 0;
              plStack_c0 = (longlong *)0x0;
              *(undefined1 *)(puVar16 + 6) = plStack_b8._0_1_;
              if (puVar16 + 1 == (longlong *)0x0) {
                puVar17[0x16] = local_128;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_1428cdfc6;
              }
              else {
                puVar17[0x16] = &LAB_14699bb54;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428cdfc6:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428cdff9;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar22 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar24 = (ulonglong)uVar22;
                *(uint *)(puVar17 + 0x1e) = uVar22;
                if (local_128 != 0) {
                  plVar19 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar19 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar19 + 0x10))();
                  uVar24 = (ulonglong)*(uint *)(puVar17 + 0x1e);
                }
              }
              else {
                uVar24 = 0x6ff;
LAB_1428cdff9:
                *(int *)(puVar17 + 0x1e) = (int)uVar24;
              }
              uVar22 = (uint)uVar24;
              if ((uVar22 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar24 >> 10) & 3;
                iVar6 = 0;
                if ((uVar22 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar21 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar21 = 2;
                }
              }
              else {
                iVar6 = (uVar22 >> 7 & 2 | (uint)(uVar24 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar22 & 0xff) * 4);
                uVar21 = 5;
              }
              FUN_144a24082(puVar17,L"GraphTask",uVar21,iVar6,0);
              if (puVar17 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                UNLOCK();
              }
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar17,&local_128);
              iVar6 = (int)local_150;
              uVar24 = local_150 & 0xffffffff;
              uVar22 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar22);
              if (local_150._4_4_ < uVar22) {
                FUN_14476a5c8(local_178,uVar24);
              }
              puVar18 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar18 = local_178;
              }
              *(undefined8 **)(puVar18 + (longlong)iVar6 * 8) = local_68;
              FUN_14698d952(&local_c8);
              FUN_14698d952(&local_88);
              goto LAB_1428ce116;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428cdddd;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
LAB_1428ce1b5:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        break;
      }
      uVar24 = 0;
LAB_1428cd693:
      iVar6 = (int)uVar24;
      if ((longlong)uVar24 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar5 == '\0') {
          local_120 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar19 = plStack_80;
          local_120[1] = (longlong)&DAT_100000001;
          *local_120 = (longlong)&PTR_LAB_149ef6700;
          local_e0 = local_120 + 2;
          local_120[2] = 0;
          local_120[3] = 0;
          local_120[4] = 0;
          uStack_d8._0_4_ = SUB84(local_120,0);
          uStack_d8._4_4_ = (undefined4)((ulonglong)local_120 >> 0x20);
          if (local_120 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_120 + 1) = (int)local_120[1] + 1;
            UNLOCK();
            plVar12 = local_120;
          }
          local_128 = 0;
          local_88 = local_e0;
          plVar4 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_120 = (longlong *)0x0, plVar4 = plVar12, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar17 = (undefined8 *)*plStack_80;
              plStack_80 = plVar12;
              (*(code *)*puVar17)(plVar19);
              LOCK();
              piVar2 = (int *)((longlong)plVar19 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar4 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_128);
          FUN_14698d9aa(&local_e0);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_138;
          if ((ulonglong)(local_88[2] - lVar13) < local_138) {
            FUN_14112c458();
          }
        }
        uVar22 = (int)param_1[0x12] - iVar6;
        if ((longlong)(ulonglong)(iVar6 + (uint)local_6a) <= param_1[0x12]) {
          uVar22 = (uint)local_6a;
        }
        lVar13 = *local_88;
        lVar25 = (int)uVar22 * local_190;
        uVar7 = FUN_144b77d20(param_1[0xe],uVar24,uVar20);
        lVar13 = FUN_144b82e30(param_1[0xe],uVar7,lVar13,lVar25);
        if (lVar13 != -1) {
          uStack_d8 = &local_1b8;
          local_d0 = &local_a8;
          plStack_c0 = local_88;
          plStack_b8 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_ac = (undefined1)local_188;
          puVar15 = (uint *)*puVar3;
          local_e0 = param_1;
          local_c8 = uVar22;
          local_b0 = iVar6;
          if (puVar15 != (uint *)0x0) goto LAB_1428cd8d5;
LAB_1428cd86e:
          puVar17 = local_130;
          uVar22 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar22 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar22 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar17;
          *puVar17 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar3 = puVar14;
          FUN_140217a48(puVar3);
          puVar15 = (uint *)*puVar3;
LAB_1428cd8d5:
          uVar24 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar22 = puVar15[0x12];
          do {
            puVar17 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
            if (puVar17 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar17 + 0x20;
              puVar15[0x12] = uVar22 + 1;
              local_140 = uVar24;
              local_68 = puVar17;
              FUN_1447247dc(puVar17,0);
              puVar17 = local_68;
              *local_68 = &PTR_FUN_149ef6718;
              local_128 = 0;
              local_118 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar16 = &PTR_LAB_149ef7660;
              puVar16[1] = local_e0;
              puVar16[2] = uStack_d8;
              *(ulonglong *)((longlong)puVar16 + 0x14) =
                   CONCAT44((undefined4)local_d0,uStack_d8._4_4_);
              *(ulonglong *)((longlong)puVar16 + 0x1c) = CONCAT44(local_c8,local_d0._4_4_);
              puVar16[5] = plStack_c0;
              puVar16[6] = plStack_b8;
              plStack_c0 = (longlong *)0x0;
              plStack_b8 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar16 + 0x3c) = local_ac;
              *(int *)(puVar16 + 7) = local_b0;
              if (puVar16 + 1 == (longlong *)0x0) {
                puVar17[0x16] = local_128;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
                if (local_128 != 0) goto LAB_1428cda5e;
              }
              else {
                puVar17[0x16] = &LAB_14699b8da;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428cda5e:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428cda91;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar22 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar24 = (ulonglong)uVar22;
                *(uint *)(puVar17 + 0x1e) = uVar22;
                if (local_128 != 0) {
                  plVar19 = local_118;
                  if (local_118 == (longlong *)0x0) {
                    plVar19 = (longlong *)&local_108;
                  }
                  (**(code **)(*plVar19 + 0x10))();
                  uVar24 = (ulonglong)*(uint *)(puVar17 + 0x1e);
                }
              }
              else {
                uVar24 = 0x6ff;
LAB_1428cda91:
                *(int *)(puVar17 + 0x1e) = (int)uVar24;
              }
              uVar22 = (uint)uVar24;
              if ((uVar22 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar24 >> 10) & 3;
                iVar23 = 0;
                if ((uVar22 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar21 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar21 = 2;
                }
              }
              else {
                iVar23 = (uVar22 >> 7 & 2 | (uint)(uVar24 >> 9) & 1) +
                         *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar22 & 0xff) * 4);
                uVar21 = 5;
              }
              FUN_144a24082(puVar17,L"GraphTask",uVar21,iVar23,0);
              if (puVar17 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                UNLOCK();
              }
              local_128 = CONCAT71(local_128._1_7_,1);
              FUN_1447439e4(puVar17,&local_128);
              uVar24 = local_150;
              iVar23 = (int)local_150;
              uVar22 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar22);
              if (local_150._4_4_ < uVar22) {
                FUN_14476a5c8(local_178,uVar24 & 0xffffffff);
              }
              puVar18 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar18 = local_178;
              }
              *(undefined8 **)(puVar18 + (longlong)iVar23 * 8) = local_68;
              FUN_14698d952(&plStack_c0);
              FUN_14698d952(&local_88);
              uVar24 = (ulonglong)(iVar6 + (uint)local_6a);
              goto LAB_1428cd693;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428cd86e;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
        goto LAB_1428ce1b5;
      }
LAB_1428ce116:
      uVar24 = CONCAT71((int7)(local_188 >> 8),(char)local_188 + '\x01');
    }
  }
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,uVar7);
  FUN_14588b8d6(local_178);
  while (plVar19 = local_a0, local_a0 != (longlong *)0x0) {
    plVar12 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar12);
    FUN_1400020a8(plVar19);
  }
  return;
}



// FUNCTION 1428ce262 Unwind@1428ce262 body=38 status=ok
// SIG undefined Unwind@1428ce262(void)

void Unwind_1428ce262(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428ce28a Unwind@1428ce28a body=193 status=ok
// SIG undefined Unwind@1428ce28a(void)

void Unwind_1428ce28a(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xb8) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 200);
        **(undefined8 **)(param_2 + 200) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428ce34c Unwind@1428ce34c body=83 status=ok
// SIG undefined Unwind@1428ce34c(void)

void Unwind_1428ce34c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 400);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428ce3a0 Unwind@1428ce3a0 body=83 status=ok
// SIG undefined Unwind@1428ce3a0(void)

void Unwind_1428ce3a0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 400);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428ce3f4 Unwind@1428ce3f4 body=67 status=ok
// SIG undefined Unwind@1428ce3f4(void)

void Unwind_1428ce3f4(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x138);
  return;
}



// FUNCTION 1428ce438 Unwind@1428ce438 body=67 status=ok
// SIG undefined Unwind@1428ce438(void)

void Unwind_1428ce438(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428ce47c Unwind@1428ce47c body=38 status=ok
// SIG undefined Unwind@1428ce47c(void)

void Unwind_1428ce47c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428ce4a4 Unwind@1428ce4a4 body=193 status=ok
// SIG undefined Unwind@1428ce4a4(void)

void Unwind_1428ce4a4(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xb8) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 200);
        **(undefined8 **)(param_2 + 200) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428ce566 Unwind@1428ce566 body=95 status=ok
// SIG undefined Unwind@1428ce566(void)

void Unwind_1428ce566(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428ce5c6 Unwind@1428ce5c6 body=95 status=ok
// SIG undefined Unwind@1428ce5c6(void)

void Unwind_1428ce5c6(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 400) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 400) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 400))(*(undefined8 **)(param_2 + 400),1);
    }
  }
  return;
}



// FUNCTION 1428ce626 Unwind@1428ce626 body=67 status=ok
// SIG undefined Unwind@1428ce626(void)

void Unwind_1428ce626(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  return;
}



// FUNCTION 1428ce66a Unwind@1428ce66a body=67 status=ok
// SIG undefined Unwind@1428ce66a(void)

void Unwind_1428ce66a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428ce6ae Unwind@1428ce6ae body=38 status=ok
// SIG undefined Unwind@1428ce6ae(void)

void Unwind_1428ce6ae(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428ce6d6 Unwind@1428ce6d6 body=130 status=ok
// SIG undefined Unwind@1428ce6d6(void)

void Unwind_1428ce6d6(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x80,*(undefined4 *)(param_2 + 0x16c));
  FUN_14588b8d6(param_2 + 0x80);
  while (puVar1 = *(undefined8 **)(param_2 + 0x158), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x158) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428ce758 Unwind@1428ce758 body=76 status=ok
// SIG undefined Unwind@1428ce758(void)

void Unwind_1428ce758(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428ce7a4 Unwind@1428ce7a4 body=76 status=ok
// SIG undefined Unwind@1428ce7a4(void)

void Unwind_1428ce7a4(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428ce7f0 FUN_1428ce7f0 body=2752 status=ok
// SIG undefined FUN_1428ce7f0(void)

void FUN_1428ce7f0(longlong ******param_1,undefined1 param_2,char param_3)

{
  undefined8 *puVar1;
  longlong *******ppppppplVar2;
  int *piVar3;
  longlong *****ppppplVar4;
  longlong ******pppppplVar5;
  longlong ******pppppplVar6;
  int iVar7;
  short sVar8;
  longlong *******ppppppplVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  longlong *******ppppppplVar15;
  longlong lVar16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  longlong *plVar22;
  byte bVar23;
  int iVar24;
  byte bVar25;
  undefined1 uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  int iVar31;
  undefined4 in_stack_fffffffffffffe10;
  undefined2 uVar32;
  longlong *****local_1d8;
  longlong *****local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c7;
  byte local_1c6;
  int local_1c4;
  int local_1c0;
  undefined1 *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  undefined1 local_1a0 [32];
  undefined1 *local_180;
  undefined8 local_178;
  longlong *****local_170;
  ulonglong local_168;
  longlong ******local_160;
  longlong ******pppppplStack_158;
  int local_150;
  int iStack_14c;
  longlong ******local_148;
  longlong ******pppppplStack_140;
  undefined4 local_138;
  int iStack_134;
  int local_130;
  undefined8 local_128;
  int *local_120;
  longlong local_118;
  longlong ******local_110;
  longlong *local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  short local_ca;
  uint local_c8;
  uint local_c4;
  undefined8 *local_c0;
  longlong *****local_b8;
  longlong *****local_b0;
  int local_a0;
  undefined1 local_99;
  longlong ******local_98;
  longlong ******pppppplStack_90;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined8 *local_70;
  char local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  FUN_144b77940(param_1[0xe]);
  FUN_144b77ad0(param_1[0xe]);
  local_170 = param_1[0x13];
  local_168 = (ulonglong)param_1[0x14] >> 1;
  local_ca = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_ca);
  sVar8 = local_ca;
  bVar23 = 1;
  uVar26 = param_2;
  if (local_ca != 2) {
    bVar23 = *(byte *)((longlong)param_1 + 0x7e);
    uVar26 = 1;
  }
  local_7c = *(int *)(param_1 + 0x11);
  local_74 = *(int *)(param_1 + 0x12);
  iVar11 = FUN_144b77e20(param_1[0xe],0x142);
  if ((iVar11 == 0) || (iVar11 = FUN_144b77e20(param_1[0xe],0x143,&local_74), iVar11 == 0)) {
    FUN_14020fad6(param_1 + 0xb,L"The tiff file is invalid.(Tiled image but no tile dimensions)");
    return;
  }
  local_1d0 = (longlong *****)&local_170;
  local_1c4 = local_7c;
  local_1c0 = local_74;
  local_1b8 = &local_99;
  bVar25 = 1;
  if (sVar8 == 2) {
    bVar25 = (byte)*(undefined2 *)((longlong)param_1 + 0x7e);
  }
  local_1d8 = (longlong *****)param_1;
  local_1c8 = param_2;
  local_1c7 = uVar26;
  local_1c6 = bVar23;
  local_b8 = (longlong *****)FUN_14001cc68(0x18,0x10);
  *local_b8 = (longlong ****)0x0;
  local_b8[1] = (longlong ****)0x0;
  local_b8[2] = (longlong ****)0x0;
  local_180 = (undefined1 *)0x0;
  local_178 = 0x400000000;
  local_b0 = local_b8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar11 != 2)) {
    uVar30 = 0xff;
    if (iVar11 != 1) goto LAB_1428ce9bd;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_1428ce9bd;
  }
  uVar30 = 1;
LAB_1428ce9bd:
  local_1a8 = FUN_144b7ac40(param_1[0xe]);
  if (local_1a8 < (ulonglong)((longlong)(int)((uint)bVar23 * local_74 * local_7c) << 2)) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff tiles are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_78 = uVar30;
    iVar11 = FUN_144b7b020(param_1[0xe]);
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    local_62 = param_3;
    local_61 = param_2;
    if ((int)local_178._4_4_ < iVar11) {
      FUN_14473dbc4(local_1a0,iVar11);
    }
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (undefined8 *)(lVar16 + 0x308);
    local_c0 = (undefined8 *)(lVar16 + 0x310);
    local_120 = (int *)(lVar16 + 0xc60);
    local_c4 = (uint)bVar25;
    for (local_128 = 0; local_c8 = (uint)local_128 & 0xff, local_c8 < local_c4;
        local_128 = CONCAT71((int7)((ulonglong)local_128 >> 8),(char)local_128 + '\x01')) {
      local_a0 = 0;
      for (iVar11 = 0; ppppplVar4 = param_1[0x12], (longlong)iVar11 < (longlong)ppppplVar4;
          iVar11 = iVar11 + local_74) {
        iVar7 = (int)ppppplVar4 - iVar11;
        if ((longlong)(local_74 + iVar11) <= (longlong)ppppplVar4) {
          iVar7 = local_74;
        }
        iVar31 = 0;
        iVar24 = 0;
LAB_1428ceac9:
        uVar32 = (undefined2)((uint)in_stack_fffffffffffffe10 >> 0x10);
        if ((longlong)iVar31 < (longlong)param_1[0x11]) {
          local_98 = (longlong ******)0x0;
          pppppplStack_90 = (longlong ******)0x0;
          cVar10 = FUN_14698d83a(&local_b8,&local_98);
          if (cVar10 == '\0') {
            pppppplStack_158 = (longlong ******)FUN_14001cc68(0x28,0x10);
            pppppplVar6 = pppppplStack_90;
            pppppplStack_158[1] = (longlong *****)&DAT_100000001;
            *pppppplStack_158 = (longlong *****)&PTR_LAB_149ef6700;
            local_160 = pppppplStack_158 + 2;
            pppppplStack_158[2] = (longlong *****)0x0;
            pppppplStack_158[3] = (longlong *****)0x0;
            pppppplStack_158[4] = (longlong *****)0x0;
            if ((longlong *******)pppppplStack_158 == (longlong *******)0x0) {
              ppppppplVar15 = (longlong *******)0x0;
            }
            else {
              LOCK();
              *(int *)(pppppplStack_158 + 1) = *(int *)(pppppplStack_158 + 1) + 1;
              UNLOCK();
              ppppppplVar15 = (longlong *******)pppppplStack_158;
            }
            local_118 = 0;
            local_110 = pppppplStack_158;
            local_98 = local_160;
            ppppppplVar9 = (longlong *******)pppppplStack_90;
            if ((ppppppplVar15 != (longlong *******)pppppplStack_90) &&
               (local_110 = (longlong ******)0x0, ppppppplVar9 = ppppppplVar15,
               (longlong *******)pppppplStack_90 != (longlong *******)0x0)) {
              LOCK();
              ppppppplVar2 = (longlong *******)(pppppplStack_90 + 1);
              *(int *)ppppppplVar2 = *(int *)ppppppplVar2 + -1;
              UNLOCK();
              if (*(int *)ppppppplVar2 == 0) {
                pppppplVar5 = (longlong ******)*pppppplStack_90;
                pppppplStack_90 = (longlong ******)ppppppplVar15;
                (*(code *)*pppppplVar5)(pppppplVar6);
                LOCK();
                piVar3 = (int *)((longlong)pppppplVar6 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                ppppppplVar9 = (longlong *******)pppppplStack_90;
                if (*piVar3 == 0) {
                  (*(code *)(*pppppplVar6)[2])(pppppplVar6);
                  ppppppplVar9 = (longlong *******)pppppplStack_90;
                }
              }
            }
            pppppplStack_90 = (longlong ******)ppppppplVar9;
            FUN_14698d952(&local_118);
            FUN_14698d9aa(&local_160);
            pppppplVar6 = (longlong ******)local_98[1];
            local_98[1] = (longlong *****)((longlong)pppppplVar6 + local_1a8);
            if ((ulonglong)((longlong)local_98[2] - (longlong)pppppplVar6) < local_1a8) {
              FUN_14112c458();
            }
          }
          in_stack_fffffffffffffe10 = CONCAT22(uVar32,(short)local_c8);
          lVar16 = FUN_144b82d60(param_1[0xe],*local_98,iVar31,iVar11,0,in_stack_fffffffffffffe10);
          if (-1 < lVar16) {
            local_150 = (int)param_1[0x11] - iVar31;
            if ((longlong)(local_7c + iVar31) <= (longlong)param_1[0x11]) {
              local_150 = local_7c;
            }
            local_160 = &local_b8;
            pppppplStack_158 = &local_1d8;
            local_148 = local_98;
            pppppplStack_140 = pppppplStack_90;
            if ((longlong *******)pppppplStack_90 != (longlong *******)0x0) {
              LOCK();
              *(int *)(pppppplStack_90 + 1) = *(int *)(pppppplStack_90 + 1) + 1;
              UNLOCK();
            }
            local_138 = CONCAT31(local_138._1_3_,(char)local_128);
            local_130 = local_a0;
            puVar18 = (uint *)*puVar1;
            iStack_14c = iVar7;
            iStack_134 = iVar24;
            if (puVar18 != (uint *)0x0) goto LAB_1428ced0f;
LAB_1428ceca3:
            uVar27 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar27 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar27 | 1;
              __tlregdtor(&LAB_142885ccb);
            }
            puVar17 = (undefined4 *)*local_c0;
            *local_c0 = 0;
            if (puVar17 == (undefined4 *)0x0) {
              puVar17 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar17 = 0xffffffff;
            *(undefined4 **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar1 = puVar17;
            FUN_140217a48(puVar1);
            puVar18 = (uint *)*puVar1;
LAB_1428ced0f:
            uVar29 = *(longlong *)(puVar18 + 0x10) + 0xf;
            uVar27 = puVar18[0x12];
            do {
              puVar20 = (undefined8 *)(uVar29 & 0xfffffffffffffff0);
              if (puVar20 + 0x20 <= puVar18 + 0x4000) {
                *(undefined8 **)(puVar18 + 0x10) = puVar20 + 0x20;
                puVar18[0x12] = uVar27 + 1;
                local_1b0 = uVar29;
                local_70 = puVar20;
                FUN_1447247dc(puVar20,0);
                puVar20 = local_70;
                *local_70 = &PTR_FUN_149ef6718;
                local_118 = 0;
                local_108 = (longlong *)0x0;
                puVar19 = (undefined8 *)FUN_14001cc68(0x40,8);
                *puVar19 = &PTR_LAB_149ef76a0;
                puVar19[1] = local_160;
                puVar19[2] = pppppplStack_158;
                puVar19[3] = CONCAT44(iStack_14c,local_150);
                puVar19[4] = local_148;
                puVar19[5] = pppppplStack_140;
                local_148 = (longlong ******)0x0;
                pppppplStack_140 = (longlong ******)0x0;
                *(int *)(puVar19 + 7) = local_130;
                puVar19[6] = CONCAT44(iStack_134,local_138);
                if (puVar19 + 1 == (undefined8 *)0x0) {
                  puVar20[0x16] = local_118;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
                  if (local_118 != 0) goto LAB_1428ceeaf;
                }
                else {
                  puVar20[0x16] = &LAB_14699bcaa;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_1428ceeaf:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_1428ceee5;
                  DVar13 = FUN_140ad26c0();
                  DVar14 = GetCurrentThreadId();
                  uVar27 = (uint)(DVar13 != DVar14) * 0x200 + 0x6ff;
                  uVar29 = (ulonglong)uVar27;
                  *(uint *)(local_70 + 0x1e) = uVar27;
                  puVar20 = local_70;
                  if (local_118 != 0) {
                    plVar22 = local_108;
                    if (local_108 == (longlong *)0x0) {
                      plVar22 = (longlong *)&local_f8;
                    }
                    (**(code **)(*plVar22 + 0x10))();
                    uVar29 = (ulonglong)*(uint *)(local_70 + 0x1e);
                    puVar20 = local_70;
                  }
                }
                else {
                  uVar29 = 0x6ff;
LAB_1428ceee5:
                  *(int *)(puVar20 + 0x1e) = (int)uVar29;
                }
                uVar27 = (uint)uVar29;
                if ((uVar27 & 0xff) == 0xff) {
                  uVar12 = (uint)(uVar29 >> 10) & 3;
                  iVar28 = 0;
                  if ((uVar27 >> 9 & 1) == 0 || uVar12 < 2) {
                    uVar26 = (&DAT_149e38edc)[uVar12];
                  }
                  else {
                    uVar26 = 2;
                  }
                }
                else {
                  iVar28 = (uVar27 >> 7 & 2 | (uint)(uVar29 >> 9) & 1) +
                           *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                  uVar26 = 5;
                }
                FUN_144a24082(puVar20,L"GraphTask",uVar26,iVar28,0);
                if (puVar20 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
                  UNLOCK();
                }
                local_118 = CONCAT71(local_118._1_7_,1);
                FUN_1447439e4(puVar20,&local_118);
                uVar29 = local_178;
                iVar28 = (int)local_178;
                uVar27 = (int)local_178 + 1;
                local_178 = CONCAT44(local_178._4_4_,uVar27);
                if (local_178._4_4_ < uVar27) {
                  FUN_14476a5c8(local_1a0,uVar29 & 0xffffffff);
                }
                puVar21 = local_180;
                if (local_180 == (undefined1 *)0x0) {
                  puVar21 = local_1a0;
                }
                *(undefined8 **)(puVar21 + (longlong)iVar28 * 8) = local_70;
                FUN_14698d952(&local_148);
                FUN_14698d952(&local_98);
                iVar31 = iVar31 + local_7c;
                iVar24 = iVar24 + 1;
                goto LAB_1428ceac9;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_1428ceca3;
              puVar18 = (uint *)*puVar1;
              *puVar18 = 0xffffffff;
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
              puVar18[0x12] = 0;
              *puVar1 = puVar18;
              uVar29 = (longlong)puVar18 + 0x67;
              uVar27 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0xb,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_98);
          uVar30 = local_78;
          goto LAB_1428cf11f;
        }
        local_a0 = local_a0 + 1;
      }
    }
    uVar30 = local_78;
    if (local_62 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_1a0,local_78);
      FUN_14698da02();
      if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
        if (*local_120 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
        }
        else {
          local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
        }
      }
      else {
        local_98 = (longlong ******)CONCAT71(local_98._1_7_,local_61);
      }
      pppppplStack_90 = &local_170;
      local_118 = 0;
      local_110 = (longlong ******)((ulonglong)local_110 & 0xffffffff00000000);
      local_160 = (longlong ******)&LAB_14699bfaa;
      pppppplStack_158 = (longlong ******)&local_98;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
      uVar30 = local_78;
    }
  }
LAB_1428cf11f:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_1a0,uVar30);
  FUN_14588b8d6(local_1a0);
  while (ppppplVar4 = local_b0, (longlong ******)local_b0 != (longlong ******)0x0) {
    pppppplVar6 = (longlong ******)(local_b0 + 1);
    local_b0 = (longlong *****)*local_b0;
    FUN_14698d952(pppppplVar6);
    FUN_1400020a8(ppppplVar4);
  }
  return;
}



// FUNCTION 1428cf2b0 Unwind@1428cf2b0 body=38 status=ok
// SIG undefined Unwind@1428cf2b0(void)

void Unwind_1428cf2b0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428cf2d8 Unwind@1428cf2d8 body=196 status=ok
// SIG undefined Unwind@1428cf2d8(void)

void Unwind_1428cf2d8(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x68) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0x158);
        **(undefined8 **)(param_2 + 0x158) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428cf39c Unwind@1428cf39c body=95 status=ok
// SIG undefined Unwind@1428cf39c(void)

void Unwind_1428cf39c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a8))(*(undefined8 **)(param_2 + 0x1a8),1);
    }
  }
  return;
}



// FUNCTION 1428cf3fc Unwind@1428cf3fc body=95 status=ok
// SIG undefined Unwind@1428cf3fc(void)

void Unwind_1428cf3fc(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1a8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1a8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1a8))(*(undefined8 **)(param_2 + 0x1a8),1);
    }
  }
  return;
}



// FUNCTION 1428cf45c Unwind@1428cf45c body=64 status=ok
// SIG undefined Unwind@1428cf45c(void)

void Unwind_1428cf45c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  return;
}



// FUNCTION 1428cf49c Unwind@1428cf49c body=67 status=ok
// SIG undefined Unwind@1428cf49c(void)

void Unwind_1428cf49c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428cf4e0 Unwind@1428cf4e0 body=131 status=ok
// SIG undefined Unwind@1428cf4e0(void)

void Unwind_1428cf4e0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x78,*(undefined4 *)(param_2 + 0x1a0));
  FUN_14588b8d6(param_2 + 0x78);
  while (puVar1 = *(undefined8 **)(param_2 + 0x168), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x168) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428cf564 Unwind@1428cf564 body=76 status=ok
// SIG undefined Unwind@1428cf564(void)

void Unwind_1428cf564(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  FUN_14698d9aa(param_2 + 0xb8);
  return;
}



// FUNCTION 1428cf5b0 Unwind@1428cf5b0 body=38 status=ok
// SIG undefined Unwind@1428cf5b0(void)

void Unwind_1428cf5b0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428cf5d8 FUN_1428cf5d8 body=4058 status=ok
// SIG undefined FUN_1428cf5d8(void)

void FUN_1428cf5d8(longlong *param_1,undefined1 param_2,char param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  DWORD DVar9;
  DWORD DVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  byte bVar23;
  longlong lVar24;
  byte bVar25;
  undefined1 uVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong **pplVar29;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a7;
  byte local_1a6;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 *local_198;
  longlong local_190;
  ulonglong local_188;
  undefined1 local_180 [32];
  undefined1 *local_160;
  undefined8 local_158;
  short local_14e;
  uint local_14c;
  int *local_148;
  ulonglong local_140;
  undefined8 *local_138;
  longlong *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  uint local_118;
  undefined4 uStack_114;
  longlong *plStack_110;
  longlong *plStack_108;
  undefined4 local_100;
  byte local_fc;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8;
  undefined1 local_a1;
  undefined8 *local_a0;
  longlong *local_98;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  undefined8 *local_70;
  char local_64;
  undefined1 local_63;
  ushort local_62 [17];
  
  local_62[1] = 0xfffe;
  local_62[2] = 0xffff;
  local_62[3] = 0xffff;
  local_62[4] = 0xffff;
  local_190 = FUN_144b77940(param_1[0xe]);
  local_140 = FUN_144b77ad0(param_1[0xe]);
  local_1c8 = param_1[0x13];
  local_1c0 = (ulonglong)param_1[0x14] >> 1;
  local_14e = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_14e);
  bVar23 = 1;
  bVar25 = 1;
  local_1a7 = param_2;
  if (local_14e != 2) {
    local_1a7 = 1;
    bVar25 = *(byte *)((longlong)param_1 + 0x7e);
  }
  local_1a4 = (undefined4)param_1[0x11];
  local_1a0 = (undefined4)param_1[0x12];
  local_1b0 = &local_1c8;
  local_198 = &local_a1;
  if (local_14e == 2) {
    bVar23 = (byte)*(undefined2 *)((longlong)param_1 + 0x7e);
  }
  local_1b8 = param_1;
  local_1a8 = param_2;
  local_1a6 = bVar25;
  local_98 = param_1;
  local_f8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_f8 = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_160 = (undefined1 *)0x0;
  local_158 = 0x400000000;
  local_f0 = local_f8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar6 != 2)) {
    uVar7 = 0xff;
    if (iVar6 != 1) goto LAB_1428cf73e;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428cf73e;
  }
  uVar7 = 1;
LAB_1428cf73e:
  plVar20 = local_98;
  local_62[0] = 0;
  FUN_144b77e20(local_98[0xe],0x116,local_62);
  uVar11 = (ulonglong)local_62[0];
  uVar28 = plVar20[0x12];
  uVar22 = uVar11;
  if ((longlong)uVar28 < (longlong)uVar11) {
    uVar22 = uVar28;
  }
  if (uVar11 == 0) {
    uVar22 = uVar28;
  }
  if (local_140 < (ulonglong)bVar25 * 4 * plVar20[0x11] * (longlong)(int)uVar22) {
    FUN_14020fad6(plVar20 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar7;
    iVar6 = FUN_144b77d80(plVar20[0xe]);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    local_64 = param_3;
    if ((int)local_158._4_4_ < iVar6) {
      FUN_14473dbc4(local_180,iVar6);
    }
    local_14c = (uint)bVar23;
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar2 = (undefined8 *)(lVar13 + 0x308);
    local_138 = (undefined8 *)(lVar13 + 0x310);
    local_148 = (int *)(lVar13 + 0xc60);
    bVar25 = 0;
    plVar20 = local_98;
    local_63 = param_2;
    while( true ) {
      uVar26 = local_63;
      pplVar29 = &local_f8;
      local_a8 = (uint)bVar25;
      if (local_14c < local_a8 || local_14c == bVar25) break;
      if (local_62[0] == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar5 = FUN_14698d83a(pplVar29,&local_88);
        if (cVar5 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar12 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_130 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_128._0_4_ = SUB84(local_e0,0);
          uStack_128._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar17 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar17 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_130;
          plVar4 = plStack_80;
          if ((plVar17 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar4 = plVar17, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar17;
              (*(code *)*puVar18)(plVar12);
              LOCK();
              piVar3 = (int *)((longlong)plVar12 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              plVar4 = plStack_80;
              if (*piVar3 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
                plVar4 = plStack_80;
              }
            }
          }
          plStack_80 = plVar4;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_130);
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_140;
          if ((ulonglong)(local_88[2] - lVar13) < local_140) {
            FUN_14112c458();
          }
        }
        lVar13 = FUN_144b82e30(plVar20[0xe],local_a8,*local_88,local_140);
        puVar18 = local_138;
        if (lVar13 != -1) {
          local_120 = &local_1b8;
          local_118 = (uint)local_88;
          uStack_114 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_110 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_108 = (longlong *)CONCAT71(plStack_108._1_7_,bVar25);
          puVar15 = (uint *)*puVar2;
          local_130 = plVar20;
          if (puVar15 != (uint *)0x0) goto LAB_1428d0061;
LAB_1428cfffe:
          uVar27 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          uStack_128 = pplVar29;
          if ((uVar27 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar27 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          FUN_140217a48(puVar2);
          puVar15 = (uint *)*puVar2;
          pplVar29 = uStack_128;
LAB_1428d0061:
          puVar16 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 0xf);
          uVar27 = puVar15[0x12];
          do {
            puVar21 = (undefined8 *)((ulonglong)puVar16 & 0xfffffffffffffff0);
            if (puVar21 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar21 + 0x20;
              puVar15[0x12] = uVar27 + 1;
              local_a0 = puVar16;
              local_70 = puVar21;
              uStack_128 = pplVar29;
              FUN_1447247dc(puVar21,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar16 = &PTR_LAB_149ef76e0;
              puVar16[1] = local_130;
              puVar16[2] = uStack_128;
              puVar16[3] = local_120;
              puVar16[4] = CONCAT44(uStack_114,local_118);
              puVar16[5] = plStack_110;
              local_118 = 0;
              uStack_114 = 0;
              plStack_110 = (longlong *)0x0;
              *(undefined1 *)(puVar16 + 6) = plStack_108._0_1_;
              if (puVar16 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_1428d01f4;
              }
              else {
                puVar18[0x16] = &LAB_14699c288;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428d01f4:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428d022a;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar27 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar28 = (ulonglong)uVar27;
                *(uint *)(puVar18 + 0x1e) = uVar27;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar28 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                  plVar20 = local_98;
                }
              }
              else {
                uVar28 = 0x6ff;
LAB_1428d022a:
                *(int *)(puVar18 + 0x1e) = (int)uVar28;
              }
              uVar27 = (uint)uVar28;
              if ((uVar27 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar28 >> 10) & 3;
                iVar6 = 0;
                if ((uVar27 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar26 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar26 = 2;
                }
              }
              else {
                iVar6 = (uVar27 >> 7 & 2 | (uint)(uVar28 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                uVar26 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar26,iVar6,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              uVar28 = local_158;
              iVar6 = (int)local_158;
              uVar27 = (int)local_158 + 1;
              local_158 = CONCAT44(local_158._4_4_,uVar27);
              if (local_158._4_4_ < uVar27) {
                FUN_14476a5c8(local_180,uVar28 & 0xffffffff);
              }
              puVar19 = local_160;
              if (local_160 == (undefined1 *)0x0) {
                puVar19 = local_180;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar6 * 8) = local_70;
              FUN_14698d952(&local_118);
              FUN_14698d952(&local_88);
              goto LAB_1428d034d;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428cfffe;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            puVar16 = (undefined8 *)((longlong)puVar15 + 0x67);
            uVar27 = 0;
          } while( true );
        }
LAB_1428d03f9:
        FUN_14020fad6(plVar20 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        goto LAB_1428d041f;
      }
      puVar18 = (undefined8 *)0x0;
LAB_1428cf85a:
      if ((longlong)puVar18 < plVar20[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        local_70 = puVar18;
        cVar5 = FUN_14698d83a(&local_f8,&local_88);
        if (cVar5 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_130 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_128._0_4_ = SUB84(local_e0,0);
          uStack_128._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar12 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_130;
          plVar17 = plStack_80;
          if ((plVar12 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar17 = plVar12, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar4 = plStack_80 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              puVar16 = (undefined8 *)*plStack_80;
              plStack_80 = plVar12;
              (*(code *)*puVar16)(plVar20);
              LOCK();
              piVar3 = (int *)((longlong)plVar20 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              plVar17 = plStack_80;
              if (*piVar3 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar17 = plStack_80;
              }
            }
          }
          plStack_80 = plVar17;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_130);
          plVar20 = local_98;
          lVar13 = local_88[1];
          local_88[1] = lVar13 + local_140;
          if ((ulonglong)(local_88[2] - lVar13) < local_140) {
            FUN_14112c458();
          }
        }
        uVar27 = (int)plVar20[0x12] - (int)puVar18;
        if ((longlong)(ulonglong)((int)local_70 + (uint)local_62[0]) <= plVar20[0x12]) {
          uVar27 = (uint)local_62[0];
        }
        lVar13 = *local_88;
        lVar24 = (int)uVar27 * local_190;
        uVar7 = FUN_144b77d20(plVar20[0xe],local_70,local_a8);
        lVar13 = FUN_144b82e30(plVar20[0xe],uVar7,lVar13,lVar24);
        if (lVar13 != -1) {
          uStack_128 = &local_1b8;
          local_120 = &local_f8;
          plStack_110 = local_88;
          plStack_108 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_100 = SUB84(local_70,0);
          puVar15 = (uint *)*puVar2;
          local_130 = plVar20;
          local_118 = uVar27;
          local_fc = bVar25;
          if (puVar15 != (uint *)0x0) goto LAB_1428cfabb;
LAB_1428cfa54:
          puVar18 = local_138;
          uVar27 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar27 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar27 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar14 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar14 = 0xffffffff;
          *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar2 = puVar14;
          FUN_140217a48(puVar2);
          puVar15 = (uint *)*puVar2;
LAB_1428cfabb:
          uVar28 = *(longlong *)(puVar15 + 0x10) + 0xf;
          uVar27 = puVar15[0x12];
          do {
            puVar18 = (undefined8 *)(uVar28 & 0xfffffffffffffff0);
            if (puVar18 + 0x20 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar18 + 0x20;
              puVar15[0x12] = uVar27 + 1;
              local_188 = uVar28;
              local_a0 = puVar18;
              FUN_1447247dc(puVar18,0);
              puVar18 = local_a0;
              *local_a0 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar16 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar16 = &PTR_LAB_149ef76c0;
              puVar16[1] = local_130;
              puVar16[2] = uStack_128;
              *(ulonglong *)((longlong)puVar16 + 0x14) =
                   CONCAT44((undefined4)local_120,uStack_128._4_4_);
              *(ulonglong *)((longlong)puVar16 + 0x1c) = CONCAT44(local_118,local_120._4_4_);
              puVar16[5] = plStack_110;
              puVar16[6] = plStack_108;
              plStack_110 = (longlong *)0x0;
              plStack_108 = (longlong *)0x0;
              *(byte *)((longlong)puVar16 + 0x3c) = local_fc;
              *(undefined4 *)(puVar16 + 7) = local_100;
              if (puVar16 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_1428cfc5a;
              }
              else {
                puVar18[0x16] = &LAB_14699bfc6;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428cfc5a:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428cfc90;
                DVar9 = FUN_140ad26c0();
                DVar10 = GetCurrentThreadId();
                uVar27 = (uint)(DVar9 != DVar10) * 0x200 + 0x6ff;
                uVar28 = (ulonglong)uVar27;
                *(uint *)(puVar18 + 0x1e) = uVar27;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar28 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar28 = 0x6ff;
LAB_1428cfc90:
                *(int *)(puVar18 + 0x1e) = (int)uVar28;
              }
              uVar27 = (uint)uVar28;
              if ((uVar27 & 0xff) == 0xff) {
                uVar8 = (uint)(uVar28 >> 10) & 3;
                iVar6 = 0;
                if ((uVar27 >> 9 & 1) == 0 || uVar8 < 2) {
                  uVar26 = (&DAT_149e38edc)[uVar8];
                }
                else {
                  uVar26 = 2;
                }
              }
              else {
                iVar6 = (uVar27 >> 7 & 2 | (uint)(uVar28 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar27 & 0xff) * 4);
                uVar26 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar26,iVar6,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              uVar28 = local_158;
              iVar6 = (int)local_158;
              uVar27 = (int)local_158 + 1;
              local_158 = CONCAT44(local_158._4_4_,uVar27);
              if (local_158._4_4_ < uVar27) {
                FUN_14476a5c8(local_180,uVar28 & 0xffffffff);
              }
              puVar19 = local_160;
              if (local_160 == (undefined1 *)0x0) {
                puVar19 = local_180;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar6 * 8) = local_a0;
              FUN_14698d952(&plStack_110);
              FUN_14698d952(&local_88);
              puVar18 = (undefined8 *)(ulonglong)((int)local_70 + (uint)local_62[0]);
              plVar20 = local_98;
              goto LAB_1428cf85a;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428cfa54;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            uVar28 = (longlong)puVar15 + 0x67;
            uVar27 = 0;
          } while( true );
        }
        goto LAB_1428d03f9;
      }
LAB_1428d034d:
      bVar25 = bVar25 + 1;
    }
    uVar7 = local_8c;
    if (local_64 != '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_180,local_8c);
      FUN_14698da02();
      plVar20 = local_98;
      if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
        if (*local_148 == 1) {
          FUN_140ad26c0();
          GetCurrentThreadId();
          local_88 = (longlong *)CONCAT71(local_88._1_7_,uVar26);
        }
        else {
          local_88 = (longlong *)CONCAT71(local_88._1_7_,uVar26);
        }
      }
      else {
        local_88 = (longlong *)CONCAT71(local_88._1_7_,uVar26);
      }
      local_e8 = 0;
      local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
      local_130 = (longlong *)&LAB_14699c36a;
      plStack_80 = &local_1c8;
      uStack_128 = &local_88;
      FUN_1401f8d10(L"ParallelFor Task",(int)plVar20[0x12] * (int)plVar20[0x11],1);
      uVar7 = local_8c;
    }
  }
LAB_1428d041f:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_180,uVar7);
  FUN_14588b8d6(local_180);
  while (plVar20 = local_f0, local_f0 != (longlong *)0x0) {
    plVar12 = local_f0 + 1;
    local_f0 = (longlong *)*local_f0;
    FUN_14698d952(plVar12);
    FUN_1400020a8(plVar20);
  }
  return;
}



// FUNCTION 1428d05b2 Unwind@1428d05b2 body=38 status=ok
// SIG undefined Unwind@1428d05b2(void)

void Unwind_1428d05b2(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d05da Unwind@1428d05da body=193 status=ok
// SIG undefined Unwind@1428d05da(void)

void Unwind_1428d05da(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x168) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x80) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xd0);
        **(undefined8 **)(param_2 + 0xd0) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428d069c Unwind@1428d069c body=83 status=ok
// SIG undefined Unwind@1428d069c(void)

void Unwind_1428d069c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x168);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428d06f0 Unwind@1428d06f0 body=83 status=ok
// SIG undefined Unwind@1428d06f0(void)

void Unwind_1428d06f0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x168);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}



// FUNCTION 1428d0744 Unwind@1428d0744 body=64 status=ok
// SIG undefined Unwind@1428d0744(void)

void Unwind_1428d0744(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf8);
  return;
}



// FUNCTION 1428d0784 Unwind@1428d0784 body=67 status=ok
// SIG undefined Unwind@1428d0784(void)

void Unwind_1428d0784(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428d07c8 Unwind@1428d07c8 body=38 status=ok
// SIG undefined Unwind@1428d07c8(void)

void Unwind_1428d07c8(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428d07f0 Unwind@1428d07f0 body=196 status=ok
// SIG undefined Unwind@1428d07f0(void)

void Unwind_1428d07f0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x198) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x168) & 0xffffffffffff0000);
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      _Memory = piVar2;
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142885ccb);
        }
        _Memory = (int *)**(undefined8 **)(param_2 + 0xd0);
        **(undefined8 **)(param_2 + 0xd0) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428d08b4 Unwind@1428d08b4 body=95 status=ok
// SIG undefined Unwind@1428d08b4(void)

void Unwind_1428d08b4(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x198) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x198) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x198))(*(undefined8 **)(param_2 + 0x198),1);
    }
  }
  return;
}



// FUNCTION 1428d0914 Unwind@1428d0914 body=95 status=ok
// SIG undefined Unwind@1428d0914(void)

void Unwind_1428d0914(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x198) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x198) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x198))(*(undefined8 **)(param_2 + 0x198),1);
    }
  }
  return;
}



// FUNCTION 1428d0974 Unwind@1428d0974 body=64 status=ok
// SIG undefined Unwind@1428d0974(void)

void Unwind_1428d0974(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf0);
  return;
}



// FUNCTION 1428d09b4 Unwind@1428d09b4 body=67 status=ok
// SIG undefined Unwind@1428d09b4(void)

void Unwind_1428d09b4(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428d09f8 Unwind@1428d09f8 body=131 status=ok
// SIG undefined Unwind@1428d09f8(void)

void Unwind_1428d09f8(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0x88,*(undefined4 *)(param_2 + 0x17c));
  FUN_14588b8d6(param_2 + 0x88);
  while (puVar1 = *(undefined8 **)(param_2 + 0x118), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x118) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}


