// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1428e456e Unwind@1428e456e body=95 status=ok
// SIG undefined Unwind@1428e456e(void)

void Unwind_1428e456e(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e45ce Unwind@1428e45ce body=64 status=ok
// SIG undefined Unwind@1428e45ce(void)

void Unwind_1428e45ce(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  return;
}



// FUNCTION 1428e460e Unwind@1428e460e body=67 status=ok
// SIG undefined Unwind@1428e460e(void)

void Unwind_1428e460e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428e4652 Unwind@1428e4652 body=131 status=ok
// SIG undefined Unwind@1428e4652(void)

void Unwind_1428e4652(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e46d6 Unwind@1428e46d6 body=76 status=ok
// SIG undefined Unwind@1428e46d6(void)

void Unwind_1428e46d6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  FUN_14698d9aa(param_2 + 0xb8);
  return;
}



// FUNCTION 1428e4722 Unwind@1428e4722 body=38 status=ok
// SIG undefined Unwind@1428e4722(void)

void Unwind_1428e4722(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e474a FUN_1428e474a body=4058 status=ok
// SIG undefined FUN_1428e474a(void)

void FUN_1428e474a(longlong *param_1,undefined1 param_2,char param_3)

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
  local_1c0 = (ulonglong)param_1[0x14] >> 2;
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
    if (iVar6 != 1) goto LAB_1428e48b1;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428e48b1;
  }
  uVar7 = 1;
LAB_1428e48b1:
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
          if (puVar15 != (uint *)0x0) goto LAB_1428e51d3;
LAB_1428e5170:
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
LAB_1428e51d3:
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
              *puVar16 = &PTR_LAB_149ef7aa0;
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
                if (local_e8 != 0) goto LAB_1428e5366;
              }
              else {
                puVar18[0x16] = &LAB_1469a0660;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428e5366:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428e539c;
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
LAB_1428e539c:
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
              goto LAB_1428e54bf;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428e5170;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            puVar16 = (undefined8 *)((longlong)puVar15 + 0x67);
            uVar27 = 0;
          } while( true );
        }
LAB_1428e556b:
        FUN_14020fad6(plVar20 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        goto LAB_1428e5591;
      }
      puVar18 = (undefined8 *)0x0;
LAB_1428e49cc:
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
          if (puVar15 != (uint *)0x0) goto LAB_1428e4c2d;
LAB_1428e4bc6:
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
LAB_1428e4c2d:
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
              *puVar16 = &PTR_LAB_149ef7a80;
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
                if (local_e8 != 0) goto LAB_1428e4dcc;
              }
              else {
                puVar18[0x16] = &LAB_1469a038c;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428e4dcc:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428e4e02;
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
LAB_1428e4e02:
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
              goto LAB_1428e49cc;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428e4bc6;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            uVar28 = (longlong)puVar15 + 0x67;
            uVar27 = 0;
          } while( true );
        }
        goto LAB_1428e556b;
      }
LAB_1428e54bf:
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
      local_130 = (longlong *)&LAB_1469a0742;
      plStack_80 = &local_1c8;
      uStack_128 = &local_88;
      FUN_1401f8d10(L"ParallelFor Task",(int)plVar20[0x12] * (int)plVar20[0x11],1);
      uVar7 = local_8c;
    }
  }
LAB_1428e5591:
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



// FUNCTION 1428e5724 Unwind@1428e5724 body=38 status=ok
// SIG undefined Unwind@1428e5724(void)

void Unwind_1428e5724(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e574c Unwind@1428e574c body=193 status=ok
// SIG undefined Unwind@1428e574c(void)

void Unwind_1428e574c(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e580e Unwind@1428e580e body=83 status=ok
// SIG undefined Unwind@1428e580e(void)

void Unwind_1428e580e(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e5862 Unwind@1428e5862 body=83 status=ok
// SIG undefined Unwind@1428e5862(void)

void Unwind_1428e5862(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e58b6 Unwind@1428e58b6 body=64 status=ok
// SIG undefined Unwind@1428e58b6(void)

void Unwind_1428e58b6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf8);
  return;
}



// FUNCTION 1428e58f6 Unwind@1428e58f6 body=67 status=ok
// SIG undefined Unwind@1428e58f6(void)

void Unwind_1428e58f6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428e593a Unwind@1428e593a body=38 status=ok
// SIG undefined Unwind@1428e593a(void)

void Unwind_1428e593a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e5962 Unwind@1428e5962 body=196 status=ok
// SIG undefined Unwind@1428e5962(void)

void Unwind_1428e5962(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e5a26 Unwind@1428e5a26 body=95 status=ok
// SIG undefined Unwind@1428e5a26(void)

void Unwind_1428e5a26(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e5a86 Unwind@1428e5a86 body=95 status=ok
// SIG undefined Unwind@1428e5a86(void)

void Unwind_1428e5a86(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e5ae6 Unwind@1428e5ae6 body=64 status=ok
// SIG undefined Unwind@1428e5ae6(void)

void Unwind_1428e5ae6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf0);
  return;
}



// FUNCTION 1428e5b26 Unwind@1428e5b26 body=67 status=ok
// SIG undefined Unwind@1428e5b26(void)

void Unwind_1428e5b26(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428e5b6a Unwind@1428e5b6a body=131 status=ok
// SIG undefined Unwind@1428e5b6a(void)

void Unwind_1428e5b6a(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e5bee Unwind@1428e5bee body=76 status=ok
// SIG undefined Unwind@1428e5bee(void)

void Unwind_1428e5bee(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428e5c3a Unwind@1428e5c3a body=76 status=ok
// SIG undefined Unwind@1428e5c3a(void)

void Unwind_1428e5c3a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428e5c86 Unwind@1428e5c86 body=38 status=ok
// SIG undefined Unwind@1428e5c86(void)

void Unwind_1428e5c86(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e5cae FUN_1428e5cae body=2406 status=ok
// SIG undefined FUN_1428e5cae(void)

void FUN_1428e5cae(longlong param_1)

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
  local_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 2;
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
    if (iVar8 != 1) goto LAB_1428e5e7b;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_1428e5e7b;
  }
  local_74 = 1;
LAB_1428e5e7b:
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
LAB_1428e5f74:
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
            if (puVar15 != (uint *)0x0) goto LAB_1428e61bd;
LAB_1428e6153:
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
LAB_1428e61bd:
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
                *puVar16 = &PTR_LAB_149ef7ac0;
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
                  if (local_148 != 0) goto LAB_1428e6349;
                }
                else {
                  puVar17[0x16] = &LAB_1469a0760;
                  puVar17[0x18] = puVar16;
                  *(undefined4 *)(puVar17 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar17 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar17 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar17 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_11c;
LAB_1428e6349:
                  local_148 = 0;
                }
                local_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_190 != 2)) {
                  uVar24 = 0x8ff;
                  if (*local_190 != 1) goto LAB_1428e637c;
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
LAB_1428e637c:
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
                goto LAB_1428e5f74;
              }
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
              LOCK();
              uVar9 = *puVar15;
              *puVar15 = *puVar15 + uVar22 + 1;
              UNLOCK();
              if ((uVar9 ^ uVar22) != 0xffffffff) goto LAB_1428e6153;
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
          goto LAB_1428e659d;
        }
        local_8c = local_8c + 1;
      }
    }
  }
LAB_1428e659d:
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



// FUNCTION 1428e6614 Unwind@1428e6614 body=38 status=ok
// SIG undefined Unwind@1428e6614(void)

void Unwind_1428e6614(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e663c Unwind@1428e663c body=196 status=ok
// SIG undefined Unwind@1428e663c(void)

void Unwind_1428e663c(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e6700 Unwind@1428e6700 body=95 status=ok
// SIG undefined Unwind@1428e6700(void)

void Unwind_1428e6700(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e6760 Unwind@1428e6760 body=95 status=ok
// SIG undefined Unwind@1428e6760(void)

void Unwind_1428e6760(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e67c0 Unwind@1428e67c0 body=67 status=ok
// SIG undefined Unwind@1428e67c0(void)

void Unwind_1428e67c0(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x110);
  return;
}



// FUNCTION 1428e6804 Unwind@1428e6804 body=67 status=ok
// SIG undefined Unwind@1428e6804(void)

void Unwind_1428e6804(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428e6848 Unwind@1428e6848 body=38 status=ok
// SIG undefined Unwind@1428e6848(void)

void Unwind_1428e6848(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e6870 Unwind@1428e6870 body=130 status=ok
// SIG undefined Unwind@1428e6870(void)

void Unwind_1428e6870(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e68f2 Unwind@1428e68f2 body=73 status=ok
// SIG undefined Unwind@1428e68f2(void)

void Unwind_1428e68f2(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xb0);
  FUN_14698d9aa(param_2 + 0xf8);
  return;
}



// FUNCTION 1428e693c FUN_1428e693c body=3602 status=ok
// SIG undefined FUN_1428e693c(void)

void FUN_1428e693c(longlong *param_1)

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
  local_1c0 = (ulonglong)param_1[0x14] >> 2;
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
    if (iVar6 != 1) goto LAB_1428e6a91;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428e6a91;
  }
  uVar7 = 1;
LAB_1428e6a91:
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
          if (puVar15 != (uint *)0x0) goto LAB_1428e732d;
LAB_1428e72ca:
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
LAB_1428e732d:
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
              *puVar16 = &PTR_LAB_149ef7b00;
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
                if (local_128 != 0) goto LAB_1428e74b3;
              }
              else {
                puVar17[0x16] = &LAB_1469a0d52;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428e74b3:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428e74e6;
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
LAB_1428e74e6:
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
              goto LAB_1428e7603;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428e72ca;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
LAB_1428e76a2:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        break;
      }
      uVar24 = 0;
LAB_1428e6b80:
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
          if (puVar15 != (uint *)0x0) goto LAB_1428e6dc2;
LAB_1428e6d5b:
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
LAB_1428e6dc2:
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
              *puVar16 = &PTR_LAB_149ef7ae0;
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
                if (local_128 != 0) goto LAB_1428e6f4b;
              }
              else {
                puVar17[0x16] = &LAB_1469a0b00;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428e6f4b:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428e6f7e;
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
LAB_1428e6f7e:
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
              goto LAB_1428e6b80;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428e6d5b;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
        goto LAB_1428e76a2;
      }
LAB_1428e7603:
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



// FUNCTION 1428e774e Unwind@1428e774e body=38 status=ok
// SIG undefined Unwind@1428e774e(void)

void Unwind_1428e774e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e7776 Unwind@1428e7776 body=193 status=ok
// SIG undefined Unwind@1428e7776(void)

void Unwind_1428e7776(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e7838 Unwind@1428e7838 body=83 status=ok
// SIG undefined Unwind@1428e7838(void)

void Unwind_1428e7838(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e788c Unwind@1428e788c body=83 status=ok
// SIG undefined Unwind@1428e788c(void)

void Unwind_1428e788c(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e78e0 Unwind@1428e78e0 body=67 status=ok
// SIG undefined Unwind@1428e78e0(void)

void Unwind_1428e78e0(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x138);
  return;
}



// FUNCTION 1428e7924 Unwind@1428e7924 body=67 status=ok
// SIG undefined Unwind@1428e7924(void)

void Unwind_1428e7924(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428e7968 Unwind@1428e7968 body=38 status=ok
// SIG undefined Unwind@1428e7968(void)

void Unwind_1428e7968(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e7990 Unwind@1428e7990 body=193 status=ok
// SIG undefined Unwind@1428e7990(void)

void Unwind_1428e7990(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e7a52 Unwind@1428e7a52 body=95 status=ok
// SIG undefined Unwind@1428e7a52(void)

void Unwind_1428e7a52(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e7ab2 Unwind@1428e7ab2 body=95 status=ok
// SIG undefined Unwind@1428e7ab2(void)

void Unwind_1428e7ab2(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e7b12 Unwind@1428e7b12 body=67 status=ok
// SIG undefined Unwind@1428e7b12(void)

void Unwind_1428e7b12(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  return;
}



// FUNCTION 1428e7b56 Unwind@1428e7b56 body=67 status=ok
// SIG undefined Unwind@1428e7b56(void)

void Unwind_1428e7b56(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428e7b9a Unwind@1428e7b9a body=38 status=ok
// SIG undefined Unwind@1428e7b9a(void)

void Unwind_1428e7b9a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e7bc2 Unwind@1428e7bc2 body=130 status=ok
// SIG undefined Unwind@1428e7bc2(void)

void Unwind_1428e7bc2(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e7c44 Unwind@1428e7c44 body=76 status=ok
// SIG undefined Unwind@1428e7c44(void)

void Unwind_1428e7c44(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428e7c90 Unwind@1428e7c90 body=76 status=ok
// SIG undefined Unwind@1428e7c90(void)

void Unwind_1428e7c90(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428e7cdc FUN_1428e7cdc body=2753 status=ok
// SIG undefined FUN_1428e7cdc(void)

void FUN_1428e7cdc(longlong ******param_1,undefined1 param_2,char param_3)

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
  local_168 = (ulonglong)param_1[0x14] >> 2;
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
    if (iVar11 != 1) goto LAB_1428e7eaa;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_1428e7eaa;
  }
  uVar30 = 1;
LAB_1428e7eaa:
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
LAB_1428e7fb6:
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
            if (puVar18 != (uint *)0x0) goto LAB_1428e81fc;
LAB_1428e8190:
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
LAB_1428e81fc:
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
                *puVar19 = &PTR_LAB_149ef7b20;
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
                  if (local_118 != 0) goto LAB_1428e839c;
                }
                else {
                  puVar20[0x16] = &LAB_1469a0ea8;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_1428e839c:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_1428e83d2;
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
LAB_1428e83d2:
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
                goto LAB_1428e7fb6;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_1428e8190;
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
          goto LAB_1428e860c;
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
      local_160 = (longlong ******)&LAB_1469a1132;
      pppppplStack_158 = (longlong ******)&local_98;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
      uVar30 = local_78;
    }
  }
LAB_1428e860c:
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



// FUNCTION 1428e879e Unwind@1428e879e body=38 status=ok
// SIG undefined Unwind@1428e879e(void)

void Unwind_1428e879e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e87c6 Unwind@1428e87c6 body=196 status=ok
// SIG undefined Unwind@1428e87c6(void)

void Unwind_1428e87c6(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e888a Unwind@1428e888a body=95 status=ok
// SIG undefined Unwind@1428e888a(void)

void Unwind_1428e888a(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e88ea Unwind@1428e88ea body=95 status=ok
// SIG undefined Unwind@1428e88ea(void)

void Unwind_1428e88ea(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e894a Unwind@1428e894a body=64 status=ok
// SIG undefined Unwind@1428e894a(void)

void Unwind_1428e894a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  return;
}



// FUNCTION 1428e898a Unwind@1428e898a body=67 status=ok
// SIG undefined Unwind@1428e898a(void)

void Unwind_1428e898a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428e89ce Unwind@1428e89ce body=131 status=ok
// SIG undefined Unwind@1428e89ce(void)

void Unwind_1428e89ce(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e8a52 Unwind@1428e8a52 body=76 status=ok
// SIG undefined Unwind@1428e8a52(void)

void Unwind_1428e8a52(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  FUN_14698d9aa(param_2 + 0xb8);
  return;
}



// FUNCTION 1428e8a9e Unwind@1428e8a9e body=38 status=ok
// SIG undefined Unwind@1428e8a9e(void)

void Unwind_1428e8a9e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e8ac6 FUN_1428e8ac6 body=4059 status=ok
// SIG undefined FUN_1428e8ac6(void)

void FUN_1428e8ac6(longlong *param_1,undefined1 param_2,char param_3)

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
  local_1c0 = (ulonglong)param_1[0x14] >> 2;
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
    if (iVar6 != 1) goto LAB_1428e8c2d;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428e8c2d;
  }
  uVar7 = 1;
LAB_1428e8c2d:
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
          if (puVar15 != (uint *)0x0) goto LAB_1428e9550;
LAB_1428e94ed:
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
LAB_1428e9550:
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
              *puVar16 = &PTR_LAB_149ef7b60;
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
                if (local_e8 != 0) goto LAB_1428e96e3;
              }
              else {
                puVar18[0x16] = &LAB_1469a1394;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428e96e3:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428e9719;
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
LAB_1428e9719:
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
              goto LAB_1428e983c;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428e94ed;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            puVar16 = (undefined8 *)((longlong)puVar15 + 0x67);
            uVar27 = 0;
          } while( true );
        }
LAB_1428e98e8:
        FUN_14020fad6(plVar20 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        goto LAB_1428e990e;
      }
      puVar18 = (undefined8 *)0x0;
LAB_1428e8d49:
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
          if (puVar15 != (uint *)0x0) goto LAB_1428e8faa;
LAB_1428e8f43:
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
LAB_1428e8faa:
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
              *puVar16 = &PTR_LAB_149ef7b40;
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
                if (local_e8 != 0) goto LAB_1428e9149;
              }
              else {
                puVar18[0x16] = &LAB_1469a1150;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428e9149:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428e917f;
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
LAB_1428e917f:
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
              goto LAB_1428e8d49;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428e8f43;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            uVar28 = (longlong)puVar15 + 0x67;
            uVar27 = 0;
          } while( true );
        }
        goto LAB_1428e98e8;
      }
LAB_1428e983c:
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
      local_130 = (longlong *)&LAB_1469a1476;
      plStack_80 = &local_1c8;
      uStack_128 = &local_88;
      FUN_1401f8d10(L"ParallelFor Task",(int)plVar20[0x12] * (int)plVar20[0x11],1);
      uVar7 = local_8c;
    }
  }
LAB_1428e990e:
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



// FUNCTION 1428e9aa2 Unwind@1428e9aa2 body=38 status=ok
// SIG undefined Unwind@1428e9aa2(void)

void Unwind_1428e9aa2(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e9aca Unwind@1428e9aca body=193 status=ok
// SIG undefined Unwind@1428e9aca(void)

void Unwind_1428e9aca(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e9b8c Unwind@1428e9b8c body=83 status=ok
// SIG undefined Unwind@1428e9b8c(void)

void Unwind_1428e9b8c(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e9be0 Unwind@1428e9be0 body=83 status=ok
// SIG undefined Unwind@1428e9be0(void)

void Unwind_1428e9be0(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e9c34 Unwind@1428e9c34 body=64 status=ok
// SIG undefined Unwind@1428e9c34(void)

void Unwind_1428e9c34(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf8);
  return;
}



// FUNCTION 1428e9c74 Unwind@1428e9c74 body=67 status=ok
// SIG undefined Unwind@1428e9c74(void)

void Unwind_1428e9c74(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428e9cb8 Unwind@1428e9cb8 body=38 status=ok
// SIG undefined Unwind@1428e9cb8(void)

void Unwind_1428e9cb8(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428e9ce0 Unwind@1428e9ce0 body=196 status=ok
// SIG undefined Unwind@1428e9ce0(void)

void Unwind_1428e9ce0(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e9da4 Unwind@1428e9da4 body=95 status=ok
// SIG undefined Unwind@1428e9da4(void)

void Unwind_1428e9da4(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e9e04 Unwind@1428e9e04 body=95 status=ok
// SIG undefined Unwind@1428e9e04(void)

void Unwind_1428e9e04(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e9e64 Unwind@1428e9e64 body=64 status=ok
// SIG undefined Unwind@1428e9e64(void)

void Unwind_1428e9e64(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf0);
  return;
}



// FUNCTION 1428e9ea4 Unwind@1428e9ea4 body=67 status=ok
// SIG undefined Unwind@1428e9ea4(void)

void Unwind_1428e9ea4(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428e9ee8 Unwind@1428e9ee8 body=131 status=ok
// SIG undefined Unwind@1428e9ee8(void)

void Unwind_1428e9ee8(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428e9f6c Unwind@1428e9f6c body=76 status=ok
// SIG undefined Unwind@1428e9f6c(void)

void Unwind_1428e9f6c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428e9fb8 Unwind@1428e9fb8 body=76 status=ok
// SIG undefined Unwind@1428e9fb8(void)

void Unwind_1428e9fb8(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428ea004 Unwind@1428ea004 body=38 status=ok
// SIG undefined Unwind@1428ea004(void)

void Unwind_1428ea004(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428ea02c FUN_1428ea02c body=2407 status=ok
// SIG undefined FUN_1428ea02c(void)

void FUN_1428ea02c(longlong param_1)

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
  local_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 2;
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
    if (iVar8 != 1) goto LAB_1428ea1f9;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_1428ea1f9;
  }
  local_74 = 1;
LAB_1428ea1f9:
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
LAB_1428ea2f3:
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
            if (puVar15 != (uint *)0x0) goto LAB_1428ea53c;
LAB_1428ea4d2:
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
LAB_1428ea53c:
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
                *puVar16 = &PTR_LAB_149ef7b80;
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
                  if (local_148 != 0) goto LAB_1428ea6c8;
                }
                else {
                  puVar17[0x16] = &LAB_1469a1494;
                  puVar17[0x18] = puVar16;
                  *(undefined4 *)(puVar17 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar17 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar17 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar17 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_11c;
LAB_1428ea6c8:
                  local_148 = 0;
                }
                local_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_190 != 2)) {
                  uVar24 = 0x8ff;
                  if (*local_190 != 1) goto LAB_1428ea6fb;
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
LAB_1428ea6fb:
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
                goto LAB_1428ea2f3;
              }
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
              LOCK();
              uVar9 = *puVar15;
              *puVar15 = *puVar15 + uVar22 + 1;
              UNLOCK();
              if ((uVar9 ^ uVar22) != 0xffffffff) goto LAB_1428ea4d2;
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
          goto LAB_1428ea91c;
        }
        local_8c = local_8c + 1;
      }
    }
  }
LAB_1428ea91c:
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



// FUNCTION 1428ea994 Unwind@1428ea994 body=38 status=ok
// SIG undefined Unwind@1428ea994(void)

void Unwind_1428ea994(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428ea9bc Unwind@1428ea9bc body=196 status=ok
// SIG undefined Unwind@1428ea9bc(void)

void Unwind_1428ea9bc(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428eaa80 Unwind@1428eaa80 body=95 status=ok
// SIG undefined Unwind@1428eaa80(void)

void Unwind_1428eaa80(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428eaae0 Unwind@1428eaae0 body=95 status=ok
// SIG undefined Unwind@1428eaae0(void)

void Unwind_1428eaae0(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428eab40 Unwind@1428eab40 body=67 status=ok
// SIG undefined Unwind@1428eab40(void)

void Unwind_1428eab40(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x110);
  return;
}



// FUNCTION 1428eab84 Unwind@1428eab84 body=67 status=ok
// SIG undefined Unwind@1428eab84(void)

void Unwind_1428eab84(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428eabc8 Unwind@1428eabc8 body=38 status=ok
// SIG undefined Unwind@1428eabc8(void)

void Unwind_1428eabc8(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428eabf0 Unwind@1428eabf0 body=130 status=ok
// SIG undefined Unwind@1428eabf0(void)

void Unwind_1428eabf0(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428eac72 Unwind@1428eac72 body=73 status=ok
// SIG undefined Unwind@1428eac72(void)

void Unwind_1428eac72(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xb0);
  FUN_14698d9aa(param_2 + 0xf8);
  return;
}



// FUNCTION 1428eacbc FUN_1428eacbc body=3603 status=ok
// SIG undefined FUN_1428eacbc(void)

void FUN_1428eacbc(longlong *param_1)

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
  local_1c0 = (ulonglong)param_1[0x14] >> 2;
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
    if (iVar6 != 1) goto LAB_1428eae11;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428eae11;
  }
  uVar7 = 1;
LAB_1428eae11:
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
          if (puVar15 != (uint *)0x0) goto LAB_1428eb6ae;
LAB_1428eb64b:
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
LAB_1428eb6ae:
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
              *puVar16 = &PTR_LAB_149ef7bc0;
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
                if (local_128 != 0) goto LAB_1428eb834;
              }
              else {
                puVar17[0x16] = &LAB_1469a19d6;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428eb834:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428eb867;
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
LAB_1428eb867:
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
              goto LAB_1428eb984;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428eb64b;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
LAB_1428eba23:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        break;
      }
      uVar24 = 0;
LAB_1428eaf01:
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
          if (puVar15 != (uint *)0x0) goto LAB_1428eb143;
LAB_1428eb0dc:
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
LAB_1428eb143:
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
              *puVar16 = &PTR_LAB_149ef7ba0;
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
                if (local_128 != 0) goto LAB_1428eb2cc;
              }
              else {
                puVar17[0x16] = &LAB_1469a1754;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428eb2cc:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428eb2ff;
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
LAB_1428eb2ff:
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
              goto LAB_1428eaf01;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428eb0dc;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
        goto LAB_1428eba23;
      }
LAB_1428eb984:
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



// FUNCTION 1428ebad0 Unwind@1428ebad0 body=38 status=ok
// SIG undefined Unwind@1428ebad0(void)

void Unwind_1428ebad0(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428ebaf8 Unwind@1428ebaf8 body=193 status=ok
// SIG undefined Unwind@1428ebaf8(void)

void Unwind_1428ebaf8(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428ebbba Unwind@1428ebbba body=83 status=ok
// SIG undefined Unwind@1428ebbba(void)

void Unwind_1428ebbba(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428ebc0e Unwind@1428ebc0e body=83 status=ok
// SIG undefined Unwind@1428ebc0e(void)

void Unwind_1428ebc0e(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428ebc62 Unwind@1428ebc62 body=67 status=ok
// SIG undefined Unwind@1428ebc62(void)

void Unwind_1428ebc62(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x138);
  return;
}



// FUNCTION 1428ebca6 Unwind@1428ebca6 body=67 status=ok
// SIG undefined Unwind@1428ebca6(void)

void Unwind_1428ebca6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428ebcea Unwind@1428ebcea body=38 status=ok
// SIG undefined Unwind@1428ebcea(void)

void Unwind_1428ebcea(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428ebd12 Unwind@1428ebd12 body=193 status=ok
// SIG undefined Unwind@1428ebd12(void)

void Unwind_1428ebd12(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428ebdd4 Unwind@1428ebdd4 body=95 status=ok
// SIG undefined Unwind@1428ebdd4(void)

void Unwind_1428ebdd4(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428ebe34 Unwind@1428ebe34 body=95 status=ok
// SIG undefined Unwind@1428ebe34(void)

void Unwind_1428ebe34(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428ebe94 Unwind@1428ebe94 body=67 status=ok
// SIG undefined Unwind@1428ebe94(void)

void Unwind_1428ebe94(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  return;
}



// FUNCTION 1428ebed8 Unwind@1428ebed8 body=67 status=ok
// SIG undefined Unwind@1428ebed8(void)

void Unwind_1428ebed8(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428ebf1c Unwind@1428ebf1c body=38 status=ok
// SIG undefined Unwind@1428ebf1c(void)

void Unwind_1428ebf1c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428ebf44 Unwind@1428ebf44 body=130 status=ok
// SIG undefined Unwind@1428ebf44(void)

void Unwind_1428ebf44(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428ebfc6 Unwind@1428ebfc6 body=76 status=ok
// SIG undefined Unwind@1428ebfc6(void)

void Unwind_1428ebfc6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428ec012 Unwind@1428ec012 body=76 status=ok
// SIG undefined Unwind@1428ec012(void)

void Unwind_1428ec012(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428ec05e FUN_1428ec05e body=2753 status=ok
// SIG undefined FUN_1428ec05e(void)

void FUN_1428ec05e(longlong ******param_1,undefined1 param_2,char param_3)

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
  local_168 = (ulonglong)param_1[0x14] >> 2;
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
    if (iVar11 != 1) goto LAB_1428ec22c;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_1428ec22c;
  }
  uVar30 = 1;
LAB_1428ec22c:
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
LAB_1428ec338:
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
            if (puVar18 != (uint *)0x0) goto LAB_1428ec57e;
LAB_1428ec512:
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
LAB_1428ec57e:
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
                *puVar19 = &PTR_LAB_149ef7be0;
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
                  if (local_118 != 0) goto LAB_1428ec71e;
                }
                else {
                  puVar20[0x16] = &LAB_1469a1b2c;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_1428ec71e:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_1428ec754;
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
LAB_1428ec754:
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
                goto LAB_1428ec338;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_1428ec512;
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
          goto LAB_1428ec98e;
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
      local_160 = (longlong ******)&LAB_1469a1dd2;
      pppppplStack_158 = (longlong ******)&local_98;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
      uVar30 = local_78;
    }
  }
LAB_1428ec98e:
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



// FUNCTION 1428ecb20 Unwind@1428ecb20 body=38 status=ok
// SIG undefined Unwind@1428ecb20(void)

void Unwind_1428ecb20(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428ecb48 Unwind@1428ecb48 body=196 status=ok
// SIG undefined Unwind@1428ecb48(void)

void Unwind_1428ecb48(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428ecc0c Unwind@1428ecc0c body=95 status=ok
// SIG undefined Unwind@1428ecc0c(void)

void Unwind_1428ecc0c(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428ecc6c Unwind@1428ecc6c body=95 status=ok
// SIG undefined Unwind@1428ecc6c(void)

void Unwind_1428ecc6c(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428ecccc Unwind@1428ecccc body=64 status=ok
// SIG undefined Unwind@1428ecccc(void)

void Unwind_1428ecccc(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  return;
}



// FUNCTION 1428ecd0c Unwind@1428ecd0c body=67 status=ok
// SIG undefined Unwind@1428ecd0c(void)

void Unwind_1428ecd0c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428ecd50 Unwind@1428ecd50 body=131 status=ok
// SIG undefined Unwind@1428ecd50(void)

void Unwind_1428ecd50(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428ecdd4 Unwind@1428ecdd4 body=76 status=ok
// SIG undefined Unwind@1428ecdd4(void)

void Unwind_1428ecdd4(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  FUN_14698d9aa(param_2 + 0xb8);
  return;
}



// FUNCTION 1428ece20 Unwind@1428ece20 body=38 status=ok
// SIG undefined Unwind@1428ece20(void)

void Unwind_1428ece20(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428ece48 FUN_1428ece48 body=4059 status=ok
// SIG undefined FUN_1428ece48(void)

void FUN_1428ece48(longlong *param_1,undefined1 param_2,char param_3)

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
  local_1c0 = (ulonglong)param_1[0x14] >> 2;
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
    if (iVar6 != 1) goto LAB_1428ecfaf;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428ecfaf;
  }
  uVar7 = 1;
LAB_1428ecfaf:
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
          if (puVar15 != (uint *)0x0) goto LAB_1428ed8d2;
LAB_1428ed86f:
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
LAB_1428ed8d2:
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
              *puVar16 = &PTR_LAB_149ef7c20;
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
                if (local_e8 != 0) goto LAB_1428eda65;
              }
              else {
                puVar18[0x16] = &LAB_1469a2054;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428eda65:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428eda9b;
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
LAB_1428eda9b:
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
              goto LAB_1428edbbe;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428ed86f;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            puVar16 = (undefined8 *)((longlong)puVar15 + 0x67);
            uVar27 = 0;
          } while( true );
        }
LAB_1428edc6a:
        FUN_14020fad6(plVar20 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        goto LAB_1428edc90;
      }
      puVar18 = (undefined8 *)0x0;
LAB_1428ed0cb:
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
          if (puVar15 != (uint *)0x0) goto LAB_1428ed32c;
LAB_1428ed2c5:
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
LAB_1428ed32c:
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
              *puVar16 = &PTR_LAB_149ef7c00;
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
                if (local_e8 != 0) goto LAB_1428ed4cb;
              }
              else {
                puVar18[0x16] = &LAB_1469a1df0;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428ed4cb:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428ed501;
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
LAB_1428ed501:
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
              goto LAB_1428ed0cb;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428ed2c5;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            uVar28 = (longlong)puVar15 + 0x67;
            uVar27 = 0;
          } while( true );
        }
        goto LAB_1428edc6a;
      }
LAB_1428edbbe:
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
      local_130 = (longlong *)&LAB_1469a2136;
      plStack_80 = &local_1c8;
      uStack_128 = &local_88;
      FUN_1401f8d10(L"ParallelFor Task",(int)plVar20[0x12] * (int)plVar20[0x11],1);
      uVar7 = local_8c;
    }
  }
LAB_1428edc90:
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



// FUNCTION 1428ede24 Unwind@1428ede24 body=38 status=ok
// SIG undefined Unwind@1428ede24(void)

void Unwind_1428ede24(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428ede4c Unwind@1428ede4c body=193 status=ok
// SIG undefined Unwind@1428ede4c(void)

void Unwind_1428ede4c(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428edf0e Unwind@1428edf0e body=83 status=ok
// SIG undefined Unwind@1428edf0e(void)

void Unwind_1428edf0e(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428edf62 Unwind@1428edf62 body=83 status=ok
// SIG undefined Unwind@1428edf62(void)

void Unwind_1428edf62(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428edfb6 Unwind@1428edfb6 body=64 status=ok
// SIG undefined Unwind@1428edfb6(void)

void Unwind_1428edfb6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf8);
  return;
}



// FUNCTION 1428edff6 Unwind@1428edff6 body=67 status=ok
// SIG undefined Unwind@1428edff6(void)

void Unwind_1428edff6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428ee03a Unwind@1428ee03a body=38 status=ok
// SIG undefined Unwind@1428ee03a(void)

void Unwind_1428ee03a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428ee062 Unwind@1428ee062 body=196 status=ok
// SIG undefined Unwind@1428ee062(void)

void Unwind_1428ee062(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428ee126 Unwind@1428ee126 body=95 status=ok
// SIG undefined Unwind@1428ee126(void)

void Unwind_1428ee126(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428ee186 Unwind@1428ee186 body=95 status=ok
// SIG undefined Unwind@1428ee186(void)

void Unwind_1428ee186(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428ee1e6 Unwind@1428ee1e6 body=64 status=ok
// SIG undefined Unwind@1428ee1e6(void)

void Unwind_1428ee1e6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf0);
  return;
}



// FUNCTION 1428ee226 Unwind@1428ee226 body=67 status=ok
// SIG undefined Unwind@1428ee226(void)

void Unwind_1428ee226(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428ee26a Unwind@1428ee26a body=131 status=ok
// SIG undefined Unwind@1428ee26a(void)

void Unwind_1428ee26a(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428ee2ee Unwind@1428ee2ee body=76 status=ok
// SIG undefined Unwind@1428ee2ee(void)

void Unwind_1428ee2ee(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428ee33a Unwind@1428ee33a body=76 status=ok
// SIG undefined Unwind@1428ee33a(void)

void Unwind_1428ee33a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428ee386 Unwind@1428ee386 body=38 status=ok
// SIG undefined Unwind@1428ee386(void)

void Unwind_1428ee386(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428ee3ae FUN_1428ee3ae body=2407 status=ok
// SIG undefined FUN_1428ee3ae(void)

void FUN_1428ee3ae(longlong param_1)

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
  local_1c0 = *(ulonglong *)(param_1 + 0xa0) >> 2;
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
    if (iVar8 != 1) goto LAB_1428ee57b;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_1428ee57b;
  }
  local_74 = 1;
LAB_1428ee57b:
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
LAB_1428ee675:
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
            if (puVar15 != (uint *)0x0) goto LAB_1428ee8be;
LAB_1428ee854:
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
LAB_1428ee8be:
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
                *puVar16 = &PTR_LAB_149ef7c40;
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
                  if (local_148 != 0) goto LAB_1428eea4a;
                }
                else {
                  puVar17[0x16] = &LAB_1469a2154;
                  puVar17[0x18] = puVar16;
                  *(undefined4 *)(puVar17 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar17 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar17 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar17 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_11c;
LAB_1428eea4a:
                  local_148 = 0;
                }
                local_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_190 != 2)) {
                  uVar24 = 0x8ff;
                  if (*local_190 != 1) goto LAB_1428eea7d;
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
LAB_1428eea7d:
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
                goto LAB_1428ee675;
              }
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
              LOCK();
              uVar9 = *puVar15;
              *puVar15 = *puVar15 + uVar22 + 1;
              UNLOCK();
              if ((uVar9 ^ uVar22) != 0xffffffff) goto LAB_1428ee854;
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
          goto LAB_1428eec9e;
        }
        local_8c = local_8c + 1;
      }
    }
  }
LAB_1428eec9e:
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



// FUNCTION 1428eed16 Unwind@1428eed16 body=38 status=ok
// SIG undefined Unwind@1428eed16(void)

void Unwind_1428eed16(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428eed3e Unwind@1428eed3e body=196 status=ok
// SIG undefined Unwind@1428eed3e(void)

void Unwind_1428eed3e(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428eee02 Unwind@1428eee02 body=95 status=ok
// SIG undefined Unwind@1428eee02(void)

void Unwind_1428eee02(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428eee62 Unwind@1428eee62 body=95 status=ok
// SIG undefined Unwind@1428eee62(void)

void Unwind_1428eee62(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428eeec2 Unwind@1428eeec2 body=67 status=ok
// SIG undefined Unwind@1428eeec2(void)

void Unwind_1428eeec2(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x110);
  return;
}



// FUNCTION 1428eef06 Unwind@1428eef06 body=67 status=ok
// SIG undefined Unwind@1428eef06(void)

void Unwind_1428eef06(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428eef4a Unwind@1428eef4a body=38 status=ok
// SIG undefined Unwind@1428eef4a(void)

void Unwind_1428eef4a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428eef72 Unwind@1428eef72 body=130 status=ok
// SIG undefined Unwind@1428eef72(void)

void Unwind_1428eef72(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428eeff4 Unwind@1428eeff4 body=73 status=ok
// SIG undefined Unwind@1428eeff4(void)

void Unwind_1428eeff4(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xb0);
  FUN_14698d9aa(param_2 + 0xf8);
  return;
}



// FUNCTION 1428ef03e FUN_1428ef03e body=3603 status=ok
// SIG undefined FUN_1428ef03e(void)

void FUN_1428ef03e(longlong *param_1)

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
  local_1c0 = (ulonglong)param_1[0x14] >> 2;
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
    if (iVar6 != 1) goto LAB_1428ef193;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428ef193;
  }
  uVar7 = 1;
LAB_1428ef193:
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
          if (puVar15 != (uint *)0x0) goto LAB_1428efa30;
LAB_1428ef9cd:
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
LAB_1428efa30:
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
              *puVar16 = &PTR_LAB_149ef7c80;
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
                if (local_128 != 0) goto LAB_1428efbb6;
              }
              else {
                puVar17[0x16] = &LAB_1469a26c6;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428efbb6:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428efbe9;
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
LAB_1428efbe9:
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
              goto LAB_1428efd06;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428ef9cd;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
LAB_1428efda5:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        break;
      }
      uVar24 = 0;
LAB_1428ef283:
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
          if (puVar15 != (uint *)0x0) goto LAB_1428ef4c5;
LAB_1428ef45e:
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
LAB_1428ef4c5:
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
              *puVar16 = &PTR_LAB_149ef7c60;
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
                if (local_128 != 0) goto LAB_1428ef64e;
              }
              else {
                puVar17[0x16] = &LAB_1469a242c;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428ef64e:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428ef681;
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
LAB_1428ef681:
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
              goto LAB_1428ef283;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428ef45e;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
        goto LAB_1428efda5;
      }
LAB_1428efd06:
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



// FUNCTION 1428efe52 Unwind@1428efe52 body=38 status=ok
// SIG undefined Unwind@1428efe52(void)

void Unwind_1428efe52(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428efe7a Unwind@1428efe7a body=193 status=ok
// SIG undefined Unwind@1428efe7a(void)

void Unwind_1428efe7a(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428eff3c Unwind@1428eff3c body=83 status=ok
// SIG undefined Unwind@1428eff3c(void)

void Unwind_1428eff3c(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428eff90 Unwind@1428eff90 body=83 status=ok
// SIG undefined Unwind@1428eff90(void)

void Unwind_1428eff90(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428effe4 Unwind@1428effe4 body=67 status=ok
// SIG undefined Unwind@1428effe4(void)

void Unwind_1428effe4(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x138);
  return;
}



// FUNCTION 1428f0028 Unwind@1428f0028 body=67 status=ok
// SIG undefined Unwind@1428f0028(void)

void Unwind_1428f0028(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428f006c Unwind@1428f006c body=38 status=ok
// SIG undefined Unwind@1428f006c(void)

void Unwind_1428f006c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428f0094 Unwind@1428f0094 body=193 status=ok
// SIG undefined Unwind@1428f0094(void)

void Unwind_1428f0094(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428f0156 Unwind@1428f0156 body=95 status=ok
// SIG undefined Unwind@1428f0156(void)

void Unwind_1428f0156(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428f01b6 Unwind@1428f01b6 body=95 status=ok
// SIG undefined Unwind@1428f01b6(void)

void Unwind_1428f01b6(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428f0216 Unwind@1428f0216 body=67 status=ok
// SIG undefined Unwind@1428f0216(void)

void Unwind_1428f0216(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  return;
}



// FUNCTION 1428f025a Unwind@1428f025a body=67 status=ok
// SIG undefined Unwind@1428f025a(void)

void Unwind_1428f025a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428f029e Unwind@1428f029e body=38 status=ok
// SIG undefined Unwind@1428f029e(void)

void Unwind_1428f029e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428f02c6 Unwind@1428f02c6 body=130 status=ok
// SIG undefined Unwind@1428f02c6(void)

void Unwind_1428f02c6(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428f0348 Unwind@1428f0348 body=76 status=ok
// SIG undefined Unwind@1428f0348(void)

void Unwind_1428f0348(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428f0394 Unwind@1428f0394 body=76 status=ok
// SIG undefined Unwind@1428f0394(void)

void Unwind_1428f0394(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428f0412 FUN_1428f0412 body=582 status=ok
// SIG undefined FUN_1428f0412(void)

bool FUN_1428f0412(longlong *param_1,longlong *param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong *local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  param_2[1] = 0;
  if (param_2[2] != 0) {
    FUN_140d2d4a8(param_2,0);
  }
  bVar7 = false;
  (**(code **)(*param_1 + 0x58))(param_1,&local_58,param_3,0);
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x88))
              (param_1,*(undefined1 *)((longlong)param_4 + 0xc),&local_41,&local_48);
    local_68 = param_4[2];
    local_78 = *param_4;
    uStack_70 = param_4[1];
    local_b8 = 0;
    uStack_b0 = 0;
    uStack_ac = CONCAT22(uStack_ac._2_2_,0x201);
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    cVar3 = (**(code **)(*local_58 + 0x10))(local_58,local_41,local_48);
    if (cVar3 == '\0') {
      bVar4 = (**(code **)(*local_58 + 0x18))(local_58,*(undefined1 *)((longlong)param_4 + 0xc));
      local_b8 = *param_4;
      uStack_b0 = 1;
      uStack_ac._0_2_ = CONCAT11((bVar4 < 2) * '\x02',bVar4);
      FUN_14287f4cc(&local_b8);
      local_78 = local_b8;
      uStack_70 = CONCAT44(uStack_ac,uStack_b0);
      local_68 = local_a8;
      FUN_14287def8(param_4);
      (**(code **)(*param_1 + 0x88))(param_1,bVar4,&local_41,&local_48);
    }
    uVar5 = uStack_70 >> 0x20 & 0xff;
    if (uVar5 < 9) {
      lVar6 = *(longlong *)(&DAT_149ef8148 + uVar5 * 8);
    }
    else {
      lVar6 = 0;
    }
    cVar3 = (**(code **)(*local_58 + 8))
                      (local_58,local_68,
                       (longlong)(int)local_78 * (longlong)local_78._4_4_ * (int)uStack_70 * lVar6,
                       (longlong)(int)local_78,local_78._4_4_,local_41,local_48,0);
    if (cVar3 == '\0') {
      bVar7 = false;
    }
    else {
      (**(code **)(*local_58 + 0x20))(local_58,&local_90,param_5);
      if (&local_90 == param_2) {
        if (local_90 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = local_90;
        local_90 = 0;
        param_2[1] = local_88;
        param_2[2] = local_80;
      }
      bVar7 = param_2[1] != 0;
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
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
  return bVar7;
}



// FUNCTION 1428f0658 Unwind@1428f0658 body=56 status=ok
// SIG undefined Unwind@1428f0658(void)

void Unwind_1428f0658(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1428f0690 Unwind@1428f0690 body=81 status=ok
// SIG undefined Unwind@1428f0690(void)

void Unwind_1428f0690(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0xa8);
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
  return;
}



// FUNCTION 1428f06e2 Unwind@1428f06e2 body=31 status=ok
// SIG undefined Unwind@1428f06e2(void)

void Unwind_1428f06e2(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428f0702 FUN_1428f0702 body=229 status=ok
// SIG undefined FUN_1428f0702(void)

undefined4 FUN_1428f0702(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (undefined8 *)0x0;
  plStack_70 = (longlong *)0x0;
  uStack_50 = 0x201;
  FUN_14698d1f8(param_4,&local_78);
  FUN_14698d278(&local_78);
  uVar5 = (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3);
  if ((char)uVar5 == -1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    (**(code **)(*param_1 + 0x58))(param_1,&local_78,uVar5,0);
    if (local_78 != (undefined8 *)0x0) {
      cVar4 = (**(code **)*local_78)(local_78,param_2,param_3);
      if (cVar4 == '\0') {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_14698c202(local_78,param_4);
      }
    }
    plVar3 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_70)(plStack_70);
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
  return uVar6;
}



// FUNCTION 1428f07e8 Unwind@1428f07e8 body=78 status=ok
// SIG undefined Unwind@1428f07e8(void)

void Unwind_1428f07e8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x28);
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
  return;
}



// FUNCTION 1428f0836 Unwind@1428f0836 body=28 status=ok
// SIG undefined Unwind@1428f0836(void)

void Unwind_1428f0836(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428f0854 FUN_1428f0854 body=648 status=ok
// SIG undefined FUN_1428f0854(void)

undefined8
FUN_1428f0854(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char local_49 [9];
  
  local_49[1] = -2;
  local_49[2] = -1;
  local_49[3] = -1;
  local_49[4] = -1;
  local_49[5] = -1;
  local_49[6] = -1;
  local_49[7] = -1;
  local_49[8] = -1;
  *param_4 = 0;
  *(undefined4 *)(param_4 + 1) = 0;
  *(undefined2 *)((longlong)param_4 + 0xc) = 0x201;
  if (param_4[2] != 0) {
    FUN_1400020a8();
  }
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[4] = 0;
  uVar7 = (**(code **)(*param_1 + 0x60))(param_1,param_2,param_3);
  if ((char)uVar7 == -1) {
    return 0;
  }
  uVar10 = 0;
  (**(code **)(*param_1 + 0x58))(param_1,&local_80,uVar7,0);
  if (local_80 == (longlong *)0x0) goto LAB_1428f0a82;
  cVar4 = (**(code **)*local_80)(local_80,param_2,param_3);
  if (cVar4 == '\0') {
    uVar10 = 0;
    goto LAB_1428f0a82;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  cVar4 = (**(code **)(*local_80 + 0x58))(local_80);
  iVar8 = (**(code **)(*local_80 + 0x50))(local_80);
  if (iVar8 == 0 || cVar4 == -1) {
LAB_1428f0a72:
    uVar10 = 0;
  }
  else {
    cVar4 = (**(code **)(*local_80 + 0x38))(local_80,cVar4,iVar8,&local_68);
    if (cVar4 == '\0') goto LAB_1428f0a72;
    local_70 = (**(code **)(*local_80 + 0x40))(local_80);
    uVar7 = (**(code **)(*local_80 + 0x48))(local_80);
    cVar4 = (**(code **)(*local_80 + 0x58))(local_80);
    (**(code **)(*local_80 + 0x50))(local_80);
    uVar5 = (**(code **)(*local_80 + 0x58))(local_80);
    uVar9 = (**(code **)(*local_80 + 0x50))(local_80);
    bVar6 = FUN_142882538(uVar5,uVar9,local_49);
    if (bVar6 == 0xff) goto LAB_1428f0a72;
    cVar3 = (bVar6 < 2) * '\x02';
    if (local_49[0] == '\x01') {
      if (param_4 + 2 != &local_68) {
        if (param_4[2] != 0) {
          FUN_1400020a8();
        }
        param_4[2] = local_68;
        local_68 = 0;
        param_4[3] = uStack_60;
        param_4[4] = local_58;
        uStack_60 = 0;
        local_58 = 0;
      }
      *(int *)param_4 = (int)local_70;
      *(undefined4 *)((longlong)param_4 + 4) = uVar7;
      *(undefined4 *)(param_4 + 1) = 1;
      *(byte *)((longlong)param_4 + 0xc) = bVar6;
      *(char *)((longlong)param_4 + 0xd) = cVar3;
    }
    else {
      *(int *)param_4 = (int)local_70;
      *(undefined4 *)((longlong)param_4 + 4) = uVar7;
      *(undefined4 *)(param_4 + 1) = 1;
      *(byte *)((longlong)param_4 + 0xc) = bVar6;
      *(char *)((longlong)param_4 + 0xd) = cVar3;
      FUN_14287f4cc(param_4);
      local_98 = *(undefined4 *)param_4;
      uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
      uStack_90 = *(undefined4 *)(param_4 + 1);
      uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
      local_88 = local_68;
      if ((cVar4 != '\x01') && (cVar4 != '\0')) goto LAB_1428f0a72;
      FUN_146987720(&local_98);
    }
    uVar10 = 1;
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_1428f0a82:
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_78 + 0x10))(local_78);
      }
    }
  }
  return uVar10;
}



// FUNCTION 1428f0adc Unwind@1428f0adc body=60 status=ok
// SIG undefined Unwind@1428f0adc(void)

void Unwind_1428f0adc(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x70) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1428f0b18 Unwind@1428f0b18 body=33 status=ok
// SIG undefined Unwind@1428f0b18(void)

void Unwind_1428f0b18(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428f0b3a Unwind@1428f0b3a body=85 status=ok
// SIG undefined Unwind@1428f0b3a(void)

void Unwind_1428f0b3a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x60);
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
  return;
}



// FUNCTION 1428f0b90 FUN_1428f0b90 body=2330 status=ok
// SIG undefined FUN_1428f0b90(void)

longlong * FUN_1428f0b90(undefined8 param_1,longlong *param_2,undefined1 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  *param_2 = 0;
  param_2[1] = 0;
  local_38 = param_2;
  switch(param_3) {
  case 0:
    plVar4 = (longlong *)FUN_14001cc68(0x88,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_149ef7da0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[8] = 0;
    plVar4[9] = 0;
    *(undefined1 *)(plVar4 + 10) = 0xff;
    *(undefined8 *)((longlong)plVar4 + 0x54) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x5c) = 0;
    *(undefined8 *)((longlong)plVar4 + 100) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x6c) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x74) = 0;
    plVar4[2] = (longlong)&PTR_FUN_149ef5d00;
    plVar4[0xf] = 0;
    *(undefined4 *)(plVar4 + 0x10) = 0;
    *(undefined1 *)((longlong)plVar4 + 0x84) = 0;
    if (plVar4 == (longlong *)0x0) {
      *param_2 = 0x10;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar3 = (longlong *)param_2[1];
      *param_2 = (longlong)(plVar4 + 2);
      if (plVar4 == plVar3) {
        LOCK();
        plVar3 = plVar4 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar4)();
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
      }
      else {
        param_2[1] = (longlong)plVar4;
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
      }
      param_2 = local_38;
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
    break;
  case 1:
    plVar4 = (longlong *)FUN_1469a2e63();
    local_48 = plVar4 + 2;
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
LAB_1428f0d82:
      *param_2 = (longlong)local_48;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar3 = (longlong *)param_2[1];
      *param_2 = (longlong)local_48;
      if (plVar4 == plVar3) {
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
      else {
        param_2[1] = (longlong)plVar4;
        if (plVar3 != (longlong *)0x0) {
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
      }
    }
    goto LAB_1428f0d85;
  case 2:
    plVar4 = (longlong *)FUN_1469a2efb();
    local_48 = plVar4 + 2;
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) goto LAB_1428f0d82;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    *param_2 = (longlong)local_48;
    if (plVar4 == plVar3) {
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
    else {
      param_2[1] = (longlong)plVar4;
      if (plVar3 != (longlong *)0x0) {
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
    }
LAB_1428f0d85:
    FUN_1469a2af4(&local_48);
    param_2 = local_38;
    break;
  case 3:
    plVar4 = (longlong *)FUN_1469a309a();
    local_48 = plVar4 + 2;
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      *param_2 = 0x10;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar3 = (longlong *)param_2[1];
      *param_2 = (longlong)local_48;
      if (plVar4 == plVar3) {
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
      else {
        param_2[1] = (longlong)plVar4;
        if (plVar3 != (longlong *)0x0) {
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
      }
    }
    FUN_1469a2ba4(&local_48);
    param_2 = local_38;
    break;
  case 4:
    plVar4 = (longlong *)FUN_1469a312d();
    local_48 = plVar4 + 2;
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      *param_2 = 0x10;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar3 = (longlong *)param_2[1];
      *param_2 = (longlong)local_48;
      if (plVar4 == plVar3) {
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
      else {
        param_2[1] = (longlong)plVar4;
        if (plVar3 != (longlong *)0x0) {
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
      }
    }
    FUN_1469a2bfc(&local_48);
    param_2 = local_38;
    break;
  case 5:
    plVar4 = (longlong *)FUN_1469a31dd();
    local_48 = plVar4 + 2;
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      *param_2 = 0x10;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar3 = (longlong *)param_2[1];
      *param_2 = (longlong)local_48;
      if (plVar4 == plVar3) {
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
      else {
        param_2[1] = (longlong)plVar4;
        if (plVar3 != (longlong *)0x0) {
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
      }
    }
    FUN_1469a2c54(&local_48);
    param_2 = local_38;
    break;
  case 6:
    plVar4 = (longlong *)FUN_14001cc68(0x78,0x10);
    plVar4[1] = (longlong)&DAT_100000001;
    *plVar4 = (longlong)&PTR_FUN_149ef7e60;
    local_48 = plVar4 + 2;
    plVar4[3] = 0;
    plVar4[4] = 0;
    plVar4[5] = 0;
    plVar4[6] = 0;
    plVar4[7] = 0;
    plVar4[8] = 0;
    plVar4[9] = 0;
    *(undefined1 *)(plVar4 + 10) = 0xff;
    *(undefined8 *)((longlong)plVar4 + 0x54) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x5c) = 0;
    *(undefined8 *)((longlong)plVar4 + 100) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x6c) = 0;
    *(undefined4 *)((longlong)plVar4 + 0x74) = 0;
    plVar4[2] = (longlong)&PTR_LAB_149ef5a40;
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      *param_2 = 0x10;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar3 = (longlong *)param_2[1];
      *param_2 = (longlong)local_48;
      if (plVar4 == plVar3) {
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
      else {
        param_2[1] = (longlong)plVar4;
        if (plVar3 != (longlong *)0x0) {
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
      }
    }
    FUN_1469a2cac(&local_48);
    param_2 = local_38;
    break;
  case 7:
    plVar4 = (longlong *)FUN_1469a32e1();
    local_48 = plVar4 + 2;
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      *param_2 = 0x10;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar3 = (longlong *)param_2[1];
      *param_2 = (longlong)local_48;
      if (plVar4 == plVar3) {
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
      else {
        param_2[1] = (longlong)plVar4;
        if (plVar3 != (longlong *)0x0) {
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
      }
    }
    FUN_1469a2d04(&local_48);
    param_2 = local_38;
    break;
  case 8:
    plVar4 = (longlong *)FUN_1469a33e9();
    local_48 = plVar4 + 2;
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      *local_38 = 0x10;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar3 = (longlong *)local_38[1];
      *local_38 = (longlong)local_48;
      if (plVar4 == plVar3) {
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
      else {
        local_38[1] = (longlong)plVar4;
        if (plVar3 != (longlong *)0x0) {
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
      }
    }
    FUN_1469a2d5c(&local_48);
    param_2 = local_38;
    break;
  case 9:
    plVar4 = (longlong *)FUN_1469a35dd();
    local_48 = plVar4 + 2;
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      *param_2 = 0x10;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar3 = (longlong *)param_2[1];
      *param_2 = (longlong)local_48;
      if (plVar4 == plVar3) {
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
      else {
        param_2[1] = (longlong)plVar4;
        if (plVar3 != (longlong *)0x0) {
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
      }
    }
    FUN_1469a2db4(&local_48);
    param_2 = local_38;
    break;
  case 10:
    plVar4 = (longlong *)FUN_1469a3699();
    local_48 = plVar4 + 2;
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      *param_2 = 0x10;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar3 = (longlong *)param_2[1];
      *param_2 = (longlong)local_48;
      if (plVar4 == plVar3) {
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
      else {
        param_2[1] = (longlong)plVar4;
        if (plVar3 != (longlong *)0x0) {
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
      }
    }
    FUN_1469a2e0c(&local_48);
    param_2 = local_38;
    break;
  case 0xb:
    plVar4 = (longlong *)FUN_1469a2f6f();
    local_48 = plVar4 + 2;
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
LAB_1428f0f97:
      *param_2 = (longlong)local_48;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      plVar3 = (longlong *)param_2[1];
      *param_2 = (longlong)local_48;
      if (plVar4 == plVar3) {
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
      else {
        param_2[1] = (longlong)plVar4;
        if (plVar3 != (longlong *)0x0) {
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
      }
    }
    goto LAB_1428f0f9a;
  case 0xc:
    plVar4 = (longlong *)FUN_1469a3017();
    local_48 = plVar4 + 2;
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) goto LAB_1428f0f97;
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    *param_2 = (longlong)local_48;
    if (plVar4 == plVar3) {
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
    else {
      param_2[1] = (longlong)plVar4;
      if (plVar3 != (longlong *)0x0) {
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
    }
LAB_1428f0f9a:
    FUN_1469a2b4c(&local_48);
    param_2 = local_38;
  }
  if (param_4 != 0) {
    *(longlong *)(*param_2 + 8) = param_4;
  }
  return param_2;
}



// FUNCTION 1428f14aa Unwind@1428f14aa body=24 status=ok
// SIG undefined Unwind@1428f14aa(void)

void Unwind_1428f14aa(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428f14c4 Unwind@1428f14c4 body=40 status=ok
// SIG undefined Unwind@1428f14c4(void)

void Unwind_1428f14c4(undefined8 param_1,longlong param_2)

{
  FUN_1469a2d5c(param_2 + 0x30);
  return;
}



// FUNCTION 1428f14ec Unwind@1428f14ec body=40 status=ok
// SIG undefined Unwind@1428f14ec(void)

void Unwind_1428f14ec(undefined8 param_1,longlong param_2)

{
  FUN_1469a2b4c(param_2 + 0x30);
  return;
}



// FUNCTION 1428f1514 Unwind@1428f1514 body=40 status=ok
// SIG undefined Unwind@1428f1514(void)

void Unwind_1428f1514(undefined8 param_1,longlong param_2)

{
  FUN_1469a2ba4(param_2 + 0x30);
  return;
}



// FUNCTION 1428f153c Unwind@1428f153c body=40 status=ok
// SIG undefined Unwind@1428f153c(void)

void Unwind_1428f153c(undefined8 param_1,longlong param_2)

{
  FUN_1469a2e0c(param_2 + 0x30);
  return;
}



// FUNCTION 1428f1564 Unwind@1428f1564 body=40 status=ok
// SIG undefined Unwind@1428f1564(void)

void Unwind_1428f1564(undefined8 param_1,longlong param_2)

{
  FUN_1469a2bfc(param_2 + 0x30);
  return;
}



// FUNCTION 1428f158c Unwind@1428f158c body=40 status=ok
// SIG undefined Unwind@1428f158c(void)

void Unwind_1428f158c(undefined8 param_1,longlong param_2)

{
  FUN_1469a2c54(param_2 + 0x30);
  return;
}



// FUNCTION 1428f15b4 Unwind@1428f15b4 body=40 status=ok
// SIG undefined Unwind@1428f15b4(void)

void Unwind_1428f15b4(undefined8 param_1,longlong param_2)

{
  FUN_1469a2cac(param_2 + 0x30);
  return;
}



// FUNCTION 1428f15dc Unwind@1428f15dc body=40 status=ok
// SIG undefined Unwind@1428f15dc(void)

void Unwind_1428f15dc(undefined8 param_1,longlong param_2)

{
  FUN_1469a2b4c(param_2 + 0x30);
  return;
}



// FUNCTION 1428f1604 Unwind@1428f1604 body=40 status=ok
// SIG undefined Unwind@1428f1604(void)

void Unwind_1428f1604(undefined8 param_1,longlong param_2)

{
  FUN_1469a2db4(param_2 + 0x30);
  return;
}



// FUNCTION 1428f162c Unwind@1428f162c body=40 status=ok
// SIG undefined Unwind@1428f162c(void)

void Unwind_1428f162c(undefined8 param_1,longlong param_2)

{
  FUN_1469a2af4(param_2 + 0x30);
  return;
}



// FUNCTION 1428f1654 Unwind@1428f1654 body=40 status=ok
// SIG undefined Unwind@1428f1654(void)

void Unwind_1428f1654(undefined8 param_1,longlong param_2)

{
  FUN_1469a2af4(param_2 + 0x30);
  return;
}



// FUNCTION 1428f167c Unwind@1428f167c body=40 status=ok
// SIG undefined Unwind@1428f167c(void)

void Unwind_1428f167c(undefined8 param_1,longlong param_2)

{
  FUN_1469a2d04(param_2 + 0x30);
  return;
}



// FUNCTION 1428f16a4 Unwind@1428f16a4 body=68 status=ok
// SIG undefined Unwind@1428f16a4(void)

void Unwind_1428f16a4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x28);
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
  return;
}



// FUNCTION 1428f16e8 Unwind@1428f16e8 body=24 status=ok
// SIG undefined Unwind@1428f16e8(void)

void Unwind_1428f16e8(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428f1702 Unwind@1428f1702 body=24 status=ok
// SIG undefined Unwind@1428f1702(void)

void Unwind_1428f1702(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428f171c Unwind@1428f171c body=24 status=ok
// SIG undefined Unwind@1428f171c(void)

void Unwind_1428f171c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428f1736 Unwind@1428f1736 body=24 status=ok
// SIG undefined Unwind@1428f1736(void)

void Unwind_1428f1736(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428f1750 Unwind@1428f1750 body=24 status=ok
// SIG undefined Unwind@1428f1750(void)

void Unwind_1428f1750(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428f176a Unwind@1428f176a body=24 status=ok
// SIG undefined Unwind@1428f176a(void)

void Unwind_1428f176a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428f1784 Unwind@1428f1784 body=24 status=ok
// SIG undefined Unwind@1428f1784(void)

void Unwind_1428f1784(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428f179e Unwind@1428f179e body=24 status=ok
// SIG undefined Unwind@1428f179e(void)

void Unwind_1428f179e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428f17b8 Unwind@1428f17b8 body=24 status=ok
// SIG undefined Unwind@1428f17b8(void)

void Unwind_1428f17b8(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428f17d2 Unwind@1428f17d2 body=24 status=ok
// SIG undefined Unwind@1428f17d2(void)

void Unwind_1428f17d2(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428f17ec Unwind@1428f17ec body=24 status=ok
// SIG undefined Unwind@1428f17ec(void)

void Unwind_1428f17ec(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428f1806 Unwind@1428f1806 body=24 status=ok
// SIG undefined Unwind@1428f1806(void)

void Unwind_1428f1806(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428f1820 Unwind@1428f1820 body=24 status=ok
// SIG undefined Unwind@1428f1820(void)

void Unwind_1428f1820(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428f183a Unwind@1428f183a body=74 status=ok
// SIG undefined Unwind@1428f183a(void)

void Unwind_1428f183a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*(longlong *)(param_2 + 0x40) + 8);
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
  return;
}



// FUNCTION 1428f1884 FUN_1428f1884 body=489 status=ok
// SIG undefined FUN_1428f1884(void)

byte FUN_1428f1884(undefined8 param_1,char *param_2,ulonglong param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  if (7 < (longlong)param_3) {
    lVar4 = 0;
    while (param_2[lVar4] == (&DAT_149ef8088)[lVar4]) {
      lVar4 = lVar4 + 1;
      if (lVar4 == 8) {
        return 0;
      }
    }
  }
  bVar2 = true;
  bVar1 = true;
  if (2 < (longlong)param_3) {
    lVar4 = 0;
    while (param_2[lVar4] == (&DAT_149ef8090)[lVar4]) {
      lVar4 = lVar4 + 1;
      if (lVar4 == 3) {
        return 1;
      }
    }
    bVar1 = true;
    if (5 < (longlong)param_3) {
      lVar4 = 0;
      while (param_2[lVar4] == (&DAT_149ef8093)[lVar4]) {
        lVar4 = lVar4 + 1;
        if (lVar4 == 6) {
          return 0xb;
        }
      }
      bVar1 = false;
    }
  }
  if (1 < (longlong)param_3) {
    if ((*param_2 == 'B') && (param_2[1] == 'M')) {
      return 3;
    }
    if (3 < param_3) {
      lVar4 = 0;
      while (param_2[lVar4] == (&DAT_149ef8099)[lVar4]) {
        lVar4 = lVar4 + 1;
        if (lVar4 == 4) {
          return 4;
        }
      }
      lVar4 = 0;
      while (param_2[lVar4] == (&DAT_149ef809d)[lVar4]) {
        lVar4 = lVar4 + 1;
        if (lVar4 == 4) {
          return 5;
        }
      }
      lVar4 = 0;
      while (param_2[lVar4] == "icns#?RADIANCE\n#?RGBEII*"[lVar4]) {
        lVar4 = lVar4 + 1;
        if (lVar4 == 4) {
          return 6;
        }
      }
      if (10 < (longlong)param_3) {
        lVar4 = 0;
        while (param_2[lVar4] == "icns#?RADIANCE\n#?RGBEII*"[lVar4 + 4]) {
          lVar4 = lVar4 + 1;
          if (lVar4 == 0xb) {
            return 8;
          }
        }
      }
      bVar2 = false;
    }
  }
  if (!bVar1) {
    lVar4 = 0;
    while (param_2[lVar4] == "icns#?RADIANCE\n#?RGBEII*"[lVar4 + 0xf]) {
      lVar4 = lVar4 + 1;
      if (lVar4 == 6) {
        return 8;
      }
    }
  }
  if (!bVar2) {
    lVar4 = 0;
    while (param_2[lVar4] == "icns#?RADIANCE\n#?RGBEII*"[lVar4 + 0x15]) {
      lVar4 = lVar4 + 1;
      if (lVar4 == 4) {
        return 9;
      }
    }
    lVar4 = 0;
    while (param_2[lVar4] == (&DAT_149ef80ba)[lVar4]) {
      lVar4 = lVar4 + 1;
      if (lVar4 == 4) {
        return 9;
      }
    }
  }
  cVar3 = FUN_14698745c(param_2,param_3);
  if (cVar3 != '\0') {
    return 10;
  }
  cVar3 = FUN_14698ab8e(param_2,param_3);
  return cVar3 - 1U | 7;
}



// FUNCTION 1428f1a6d FUN_1428f1a6d body=102 status=ok
// SIG undefined FUN_1428f1a6d(void)

void FUN_1428f1a6d(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x8000000149ef632e;
  local_14 = 0xc;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1460159a8(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428f1ad4 FUN_1428f1ad4 body=55 status=ok
// SIG undefined FUN_1428f1ad4(void)

void FUN_1428f1ad4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98e288 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98e288 = FUN_14171c317(FUN_14627e6e4,uVar1,L"EVirtualKeyboardTrigger");
  }
  return;
}



// FUNCTION 1428f1b0b FUN_1428f1b0b body=55 status=ok
// SIG undefined FUN_1428f1b0b(void)

void FUN_1428f1b0b(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98e2a0 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98e2a0 = FUN_14171c317(FUN_14627e713,uVar1,L"EVirtualKeyboardDismissAction");
  }
  return;
}



// FUNCTION 1428f1b42 FUN_1428f1b42 body=55 status=ok
// SIG undefined FUN_1428f1b42(void)

void FUN_1428f1b42(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98e2b8 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98e2b8 = FUN_14171c317(FUN_14627e744,uVar1,L"ESelectionMode");
  }
  return;
}



// FUNCTION 1428f1b79 FUN_1428f1b79 body=55 status=ok
// SIG undefined FUN_1428f1b79(void)

void FUN_1428f1b79(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98e2d0 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98e2d0 = FUN_14171c317(FUN_14627e773,uVar1,L"ETableViewMode");
  }
  return;
}



// FUNCTION 1428f1bb0 FUN_1428f1bb0 body=55 status=ok
// SIG undefined FUN_1428f1bb0(void)

void FUN_1428f1bb0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98e300 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98e300 = FUN_14171c317(FUN_14627e83a,uVar1,L"EMultiBoxType");
  }
  return;
}



// FUNCTION 1428f1be7 FUN_1428f1be7 body=55 status=ok
// SIG undefined FUN_1428f1be7(void)

void FUN_1428f1be7(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98e318 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98e318 = FUN_14171c317(FUN_14627e86b,uVar1,L"EMultiBlockType");
  }
  return;
}



// FUNCTION 1428f1c1e FUN_1428f1c1e body=55 status=ok
// SIG undefined FUN_1428f1c1e(void)

void FUN_1428f1c1e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98e348 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98e348 = FUN_14171c317(FUN_14627e89a,uVar1,L"EInputPreProcessorType");
  }
  return;
}



// FUNCTION 1428f1c55 FUN_1428f1c55 body=55 status=ok
// SIG undefined FUN_1428f1c55(void)

void FUN_1428f1c55(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98e378 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98e378 = FUN_14171c317(FUN_14627e960,uVar1,L"EDescendantScrollDestination");
  }
  return;
}



// FUNCTION 1428f1c8c FUN_1428f1c8c body=55 status=ok
// SIG undefined FUN_1428f1c8c(void)

void FUN_1428f1c8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98e390 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98e390 = FUN_14171c317(FUN_14627e991,uVar1,L"EScrollWhenFocusChanges");
  }
  return;
}



// FUNCTION 1428f1cc3 FUN_1428f1cc3 body=55 status=ok
// SIG undefined FUN_1428f1cc3(void)

void FUN_1428f1cc3(void)

{
  undefined8 uVar1;
  
  if (DAT_14c98e3a8 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c98e3a8 = FUN_14171c317(FUN_14627e9c0,uVar1,L"ECustomizedToolMenuVisibility");
  }
  return;
}



// FUNCTION 1428f1cfa FUN_1428f1cfa body=49 status=ok
// SIG undefined FUN_1428f1cfa(void)

void FUN_1428f1cfa(void)

{
  FUN_1469b21b1(DAT_14c98e448,DAT_14c98e450);
  if (DAT_14c98e448 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1428f1d2c FUN_1428f1d2c body=30 status=ok
// SIG undefined FUN_1428f1d2c(void)

undefined8 FUN_1428f1d2c(undefined8 param_1,undefined8 param_2)

{
  (**(code **)(*DAT_14c968088 + 0x58))();
  return param_2;
}



// FUNCTION 1428f1d4a FUN_1428f1d4a body=8 status=ok
// SIG undefined FUN_1428f1d4a(void)

longlong FUN_1428f1d4a(longlong param_1)

{
  return param_1 + 0x150;
}



// FUNCTION 1428f1d52 FUN_1428f1d52 body=91 status=ok
// SIG undefined FUN_1428f1d52(void)

void FUN_1428f1d52(void)

{
  if (DAT_14c98e470 != 0) {
    if (DAT_14c98e468 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c98e468)(DAT_14c98e468,0);
    FUN_1446efa72(&DAT_14c98e468,0,0,0x10);
    DAT_14c98e470 = 0;
  }
  if (DAT_14c98e468 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1428f1dae FUN_1428f1dae body=1474 status=ok
// SIG undefined FUN_1428f1dae(void)

void FUN_1428f1dae(longlong param_1,longlong *param_2,longlong *param_3,char param_4,char param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  longlong **pplVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auStack_d8 [47];
  char local_a9;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  longlong **local_68;
  longlong *local_60;
  longlong **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_2 == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = -1;
    if ((longlong)*(int *)(param_1 + 0x68) != 0) {
      lVar8 = 0;
      iVar9 = 0;
      do {
        iVar11 = iVar9;
        if (*(longlong *)(*(longlong *)(param_1 + 0x60) + lVar8) == *param_2) break;
        iVar9 = iVar9 + 1;
        lVar8 = lVar8 + 0x10;
        iVar11 = -1;
      } while ((longlong)*(int *)(param_1 + 0x68) * 0x10 != lVar8);
    }
    iVar11 = iVar11 + 1;
  }
  iVar9 = iVar11;
  if (param_5 == '\0') {
    local_60 = (longlong *)*param_3;
    local_58 = (longlong **)param_3[1];
    if (local_58 != (longlong **)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    local_a9 = param_4;
    FUN_1469a8906(param_1 + 0x60,&local_60,iVar11);
    pplVar4 = local_58;
    if (local_58 != (longlong **)0x0) {
      LOCK();
      plVar6 = (longlong *)(local_58 + 1);
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (*(code *)**local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)pplVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)((longlong)*pplVar4 + 0x10))(pplVar4);
        }
      }
    }
    local_70 = (longlong *)*param_3;
    local_68 = (longlong **)param_3[1];
    plVar6 = local_70;
    if (local_68 != (longlong **)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
      UNLOCK();
      plVar6 = (longlong *)*param_3;
    }
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_90);
    local_80 = local_90;
    local_78 = local_88;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_88 + 1) = (int)local_88[1] + 1;
      UNLOCK();
    }
    local_60 = &local_80;
    local_58 = &local_70;
    FUN_1469b2808(param_1 + 0x70,local_4c);
    plVar6 = local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_78 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    plVar6 = local_88;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_88 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    pplVar4 = local_68;
    if (local_68 != (longlong **)0x0) {
      LOCK();
      pplVar3 = local_68 + 1;
      *(int *)pplVar3 = *(int *)pplVar3 + -1;
      UNLOCK();
      if (*(int *)pplVar3 == 0) {
        (*(code *)**local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)pplVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pplVar4)[2])(pplVar4);
        }
      }
    }
    iVar9 = iVar11 + 1;
    param_4 = local_a9;
  }
  plVar6 = (longlong *)(param_1 + 0x60);
  if (iVar9 < *(int *)(param_1 + 0x68)) {
    local_98 = (longlong)iVar9;
    local_60 = *(longlong **)(*plVar6 + local_98 * 0x10);
    pplVar4 = *(longlong ***)(*plVar6 + 8 + local_98 * 0x10);
    local_a9 = param_4;
    local_a0 = param_3;
    local_58 = pplVar4;
    if (pplVar4 == (longlong **)0x0) {
      FUN_1469a8986(param_1,&local_60);
    }
    else {
      LOCK();
      *(int *)(pplVar4 + 1) = *(int *)(pplVar4 + 1) + 1;
      UNLOCK();
      FUN_1469a8986(param_1);
      if (pplVar4 != (longlong **)0x0) {
        LOCK();
        pplVar3 = pplVar4 + 1;
        *(int *)pplVar3 = *(int *)pplVar3 + -1;
        UNLOCK();
        if (*(int *)pplVar3 == 0) {
          (*(code *)**pplVar4)(pplVar4);
          LOCK();
          piVar2 = (int *)((longlong)pplVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pplVar4)[2])(pplVar4);
          }
        }
      }
    }
    iVar10 = *(int *)(param_1 + 0x68);
    lVar8 = (longlong)iVar10;
    param_3 = local_a0;
    param_4 = local_a9;
    if (iVar9 < iVar10) {
      local_a8 = param_1 + 0x70;
      lVar7 = lVar8 << 4;
      do {
        iVar10 = iVar10 + -1;
        lVar7 = lVar7 + -0x10;
        (**(code **)(**(longlong **)(*plVar6 + lVar7) + 0x20))
                  (*(longlong **)(*plVar6 + lVar7),&local_70);
        pplVar4 = local_68;
        if (local_68 == (longlong **)0x0) {
          local_60 = local_70;
          local_58 = (longlong **)0x0;
          FUN_1469b2eda(local_a8,&local_60);
        }
        else {
          LOCK();
          *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
          UNLOCK();
          local_60 = local_70;
          local_58 = local_68;
          LOCK();
          *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
          UNLOCK();
          FUN_1469b2eda(local_a8,&local_60);
          LOCK();
          pplVar3 = pplVar4 + 1;
          *(int *)pplVar3 = *(int *)pplVar3 + -1;
          UNLOCK();
          if (*(int *)pplVar3 == 0) {
            (*(code *)**pplVar4)(pplVar4);
            LOCK();
            piVar2 = (int *)((longlong)pplVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (*(code *)(*pplVar4)[2])(pplVar4);
            }
          }
        }
        pplVar4 = local_68;
        if (local_68 != (longlong **)0x0) {
          LOCK();
          pplVar3 = local_68 + 1;
          *(int *)pplVar3 = *(int *)pplVar3 + -1;
          UNLOCK();
          if (*(int *)pplVar3 == 0) {
            (*(code *)**local_68)(local_68);
            LOCK();
            piVar2 = (int *)((longlong)pplVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (*(code *)(*pplVar4)[2])(pplVar4);
            }
          }
        }
        lVar8 = lVar8 + -1;
        FUN_1469b30d8(plVar6,iVar10);
        FUN_1469b314e(plVar6);
        param_3 = local_a0;
        param_4 = local_a9;
      } while (local_98 < lVar8);
    }
  }
  if (param_5 != '\0') {
    if ((iVar11 != *(int *)(param_1 + 0x68)) &&
       (DAT_14c98e468 != (longlong *)0x0 && DAT_14c98e470 != 0)) {
      (**(code **)(*DAT_14c98e468 + 0x60))();
    }
    lVar8 = *param_3;
    lVar7 = param_3[1];
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    iVar11 = *(int *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x68) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0x6c) < iVar11 + 1U) {
      FUN_1469b2782(plVar6,iVar11);
    }
    lVar5 = *(longlong *)(param_1 + 0x60);
    *(longlong *)(lVar5 + (longlong)iVar11 * 0x10) = lVar8;
    *(longlong *)(lVar5 + 8 + (longlong)iVar11 * 0x10) = lVar7;
    local_70 = (longlong *)*param_3;
    local_68 = (longlong **)param_3[1];
    plVar6 = local_70;
    if (local_68 != (longlong **)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
      UNLOCK();
      plVar6 = (longlong *)*param_3;
    }
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_90);
    local_80 = local_90;
    local_78 = local_88;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_88 + 1) = (int)local_88[1] + 1;
      UNLOCK();
    }
    local_60 = &local_80;
    local_58 = &local_70;
    FUN_1469b2808(param_1 + 0x70,local_4c);
    plVar6 = local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_78 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_88 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar2 = (int *)((longlong)local_88 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_88 + 0x10))(local_88);
        }
      }
    }
    pplVar4 = local_68;
    if (local_68 != (longlong **)0x0) {
      LOCK();
      pplVar3 = local_68 + 1;
      *(int *)pplVar3 = *(int *)pplVar3 + -1;
      UNLOCK();
      if (*(int *)pplVar3 == 0) {
        (*(code *)**local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)pplVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pplVar4)[2])(pplVar4);
        }
      }
    }
  }
  if ((param_4 == '\x01') && (*(int *)(param_1 + 0xc0) == -1)) {
    lVar8 = FUN_14171dbb4();
    iVar11 = *(int *)(lVar8 + 0x18) + 1;
    *(int *)(lVar8 + 0x18) = iVar11;
    *(int *)(param_1 + 0xc0) = iVar11;
  }
  plVar6 = (longlong *)param_2[1];
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
  plVar6 = (longlong *)param_3[1];
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
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428f2371 FUN_1428f2371 body=69 status=ok
// SIG undefined FUN_1428f2371(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f2371(void)

{
  _DAT_14c98e478 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428f23b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e480,1);
  return;
}



// FUNCTION 1428f23b6 FUN_1428f23b6 body=69 status=ok
// SIG undefined FUN_1428f23b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f23b6(void)

{
  _DAT_14c98e488 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428f23f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e490,1);
  return;
}



// FUNCTION 1428f23fb FUN_1428f23fb body=69 status=ok
// SIG undefined FUN_1428f23fb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f23fb(void)

{
  _DAT_14c98e498 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428f243d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e4a0,1);
  return;
}



// FUNCTION 1428f2440 FUN_1428f2440 body=69 status=ok
// SIG undefined FUN_1428f2440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f2440(void)

{
  _DAT_14c98e4a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428f2482. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e4b0,1);
  return;
}



// FUNCTION 1428f2485 FUN_1428f2485 body=69 status=ok
// SIG undefined FUN_1428f2485(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f2485(void)

{
  _DAT_14c98e4c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428f24c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e4c8,1);
  return;
}



// FUNCTION 1428f24ca FUN_1428f24ca body=47 status=ok
// SIG undefined FUN_1428f24ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f24ca(void)

{
  _DAT_14c98e528 = 0;
  if (DAT_14c98e520 != 0) {
    FUN_1400020a8();
  }
  FUN_1405535a6(&DAT_14c98e4e0);
  return;
}



// FUNCTION 1428f24f9 FUN_1428f24f9 body=69 status=ok
// SIG undefined FUN_1428f24f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f24f9(void)

{
  _DAT_14c98e530 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428f253b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e538,1);
  return;
}



// FUNCTION 1428f253e FUN_1428f253e body=69 status=ok
// SIG undefined FUN_1428f253e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f253e(void)

{
  _DAT_14c98e548 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428f2580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e550,1);
  return;
}



// FUNCTION 1428f2583 FUN_1428f2583 body=69 status=ok
// SIG undefined FUN_1428f2583(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f2583(void)

{
  _DAT_14c98e560 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428f25c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e568,1);
  return;
}



// FUNCTION 1428f25c8 FUN_1428f25c8 body=69 status=ok
// SIG undefined FUN_1428f25c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f25c8(void)

{
  _DAT_14c98e578 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428f260a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e580,1);
  return;
}



// FUNCTION 1428f260d FUN_1428f260d body=69 status=ok
// SIG undefined FUN_1428f260d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f260d(void)

{
  _DAT_14c98e590 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428f264f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e598,1);
  return;
}



// FUNCTION 1428f2652 FUN_1428f2652 body=69 status=ok
// SIG undefined FUN_1428f2652(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f2652(void)

{
  _DAT_14c98e5a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428f2694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e5b0,1);
  return;
}



// FUNCTION 1428f2697 FUN_1428f2697 body=69 status=ok
// SIG undefined FUN_1428f2697(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f2697(void)

{
  _DAT_14c98e5b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001428f26d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c98e5c0,1);
  return;
}



// FUNCTION 1428f26dc FUN_1428f26dc body=59 status=ok
// SIG undefined FUN_1428f26dc(void)

void FUN_1428f26dc(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c98e620;
  if (DAT_14c98e620 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c98e620 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428f270c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428f2718 FUN_1428f2718 body=2213 status=ok
// SIG undefined FUN_1428f2718(void)

void FUN_1428f2718(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_238 [40];
  longlong *local_210;
  undefined8 local_208;
  LPCRITICAL_SECTION local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong *plStack_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [288];
  undefined1 *local_80;
  ulonglong local_78;
  undefined1 local_70;
  undefined8 local_68;
  longlong *plStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (DAT_14c75ef43 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar3 = DAT_14c8442b8;
    if (DAT_14c872bf0 == '\x01') {
      if (DAT_14c872bf1 != '\x01') goto LAB_1428f2ca3;
      bVar3 = DAT_14c8442b8 & 1;
    }
    if (bVar3 != 0) goto LAB_1428f2ca3;
  }
  local_200 = (LPCRITICAL_SECTION)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x160))();
  EnterCriticalSection(local_200);
  local_1a8[0] = DAT_14c96b238;
  local_80 = (undefined1 *)0x0;
  local_78 = 0x400000000;
  local_70 = 0;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  lVar12 = *param_2;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  local_1b8 = 0;
  local_1b0 = *(longlong **)(param_1 + 0x360);
  if (local_1b0 != (longlong *)0x0) {
    iVar10 = (int)local_1b0[1];
    do {
      if (iVar10 == 0) {
        local_1b0 = (longlong *)0x0;
        goto LAB_1428f2870;
      }
      LOCK();
      iVar9 = (int)local_1b0[1];
      bVar16 = iVar10 == iVar9;
      if (bVar16) {
        *(int *)(local_1b0 + 1) = iVar10 + 1;
        iVar9 = iVar10;
      }
      iVar10 = iVar9;
      UNLOCK();
    } while (!bVar16);
    if (local_1b0 != (longlong *)0x0) {
      local_1b8 = *(undefined8 *)(param_1 + 0x358);
    }
  }
LAB_1428f2870:
  if ((longlong)*(int *)(param_1 + 0x1e8) < 1) {
LAB_1428f28c2:
    plVar15 = (longlong *)0x0;
LAB_1428f28c5:
    if (lVar12 == 0) {
      if ((longlong)*(int *)(param_1 + 0x1b8) != 0) {
        plVar13 = *(longlong **)(param_1 + 0x1b0);
        plVar11 = plVar13 + (longlong)*(int *)(param_1 + 0x1b8) * 2;
        local_210 = param_2;
        do {
          local_1c8 = *plVar13;
          plStack_1c0 = (longlong *)plVar13[1];
          if (plStack_1c0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_1c0 + 1) = (int)plStack_1c0[1] + 1;
            UNLOCK();
          }
          FUN_1428f33d0(&local_1c8,&local_1b8,param_1 + 0x348);
          plVar13 = plVar13 + 2;
          param_2 = local_210;
        } while (plVar13 != plVar11);
      }
    }
    else {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
        UNLOCK();
      }
      local_1c8 = lVar12;
      plStack_1c0 = plVar2;
      FUN_1428f33d0(&local_1c8,&local_1b8,param_1 + 0x348);
    }
  }
  else {
    lVar8 = (longlong)*(int *)(param_1 + 0x1e8) * 0x10;
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + -0x10 + lVar8);
    plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x1e0) + -8 + lVar8);
    if (plVar15 == (longlong *)0x0) {
      if (lVar14 == 0) goto LAB_1428f28c2;
      plStack_1c0 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      if (lVar14 == 0) goto LAB_1428f28c5;
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      plStack_1c0 = plVar15;
    }
    lVar12 = param_1 + 0x348;
    local_210 = param_2;
    local_1c8 = lVar14;
    FUN_1428f33d0(&local_1c8,&local_1b8,lVar12);
    iVar10 = *(int *)(param_1 + 0x1b8);
    if (0 < iVar10) {
      iVar9 = 0;
      lVar14 = 8;
      do {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + -8 + lVar14);
        if ((*(byte *)(lVar8 + 0x368) & 4) != 0) {
          local_1d0 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + lVar14);
          if (local_1d0 != 0) {
            LOCK();
            *(int *)(local_1d0 + 8) = *(int *)(local_1d0 + 8) + 1;
            UNLOCK();
          }
          local_1d8 = lVar8;
          FUN_1428f33d0(&local_1d8,&local_1b8,lVar12);
          iVar10 = *(int *)(param_1 + 0x1b8);
        }
        iVar9 = iVar9 + 1;
        lVar14 = lVar14 + 0x10;
      } while (iVar9 < iVar10);
    }
    local_1e8 = 0;
    uStack_1e0 = 0;
    uVar5 = FUN_1413f66b6();
    FUN_146a1e2fa(uVar5,&local_1e8);
    if (0 < (int)uStack_1e0) {
      iVar10 = 0;
      lVar14 = 8;
      do {
        local_1f8 = *(undefined8 *)(local_1e8 + -8 + lVar14);
        local_1f0 = *(longlong *)(local_1e8 + lVar14);
        if (local_1f0 != 0) {
          LOCK();
          *(int *)(local_1f0 + 8) = *(int *)(local_1f0 + 8) + 1;
          UNLOCK();
        }
        FUN_1428f33d0(&local_1f8,&local_1b8,lVar12);
        iVar10 = iVar10 + 1;
        lVar14 = lVar14 + 0x10;
      } while (iVar10 < (int)uStack_1e0);
    }
    FUN_1401b439d(local_1e8);
    param_2 = local_210;
    if (local_1e8 != 0) {
      FUN_1400020a8();
    }
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar15 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  plVar15 = local_1b0;
  if (local_1b0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1b0 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_1b0)(local_1b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar2 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  plVar2 = *(longlong **)(param_1 + 0x20);
  uVar5 = (**(code **)(*plVar2 + 0x10))(plVar2);
  local_1b0 = (longlong *)local_1a8;
  local_1b8 = uVar5;
  if ((longlong)*(int *)(param_1 + 0x1e8) < 1) {
LAB_1428f2a51:
    plVar15 = (longlong *)0x0;
LAB_1428f2a54:
    lVar12 = *param_2;
    if (lVar12 == 0) {
      if (0 < *(int *)(param_1 + 0x1b8)) {
        iVar10 = 0;
        lVar12 = 8;
        local_210 = param_2;
        local_208 = uVar5;
        do {
          local_1c8 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + -8 + lVar12);
          plStack_1c0 = *(longlong **)(*(longlong *)(param_1 + 0x1b0) + lVar12);
          if (plStack_1c0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_1c0 + 1) = (int)plStack_1c0[1] + 1;
            UNLOCK();
          }
          if ((*(char *)(param_1 + 0x1a2) != '\0') ||
             ((*(longlong **)(local_1c8 + 0x510) != (longlong *)0x0 &&
              (cVar4 = (**(code **)(**(longlong **)(local_1c8 + 0x510) + 0x80))(), cVar4 != '\0'))))
          {
            FUN_1428f2fbe(param_1,&local_1c8,&local_1b8);
          }
          plVar13 = plStack_1c0;
          if (plStack_1c0 != (longlong *)0x0) {
            LOCK();
            plVar11 = plStack_1c0 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*plStack_1c0)(plStack_1c0);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
          iVar10 = iVar10 + 1;
          lVar12 = lVar12 + 0x10;
          param_2 = local_210;
          uVar5 = local_208;
        } while (iVar10 < *(int *)(param_1 + 0x1b8));
      }
    }
    else {
      plStack_1c0 = (longlong *)param_2[1];
      if (plStack_1c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_1c0 + 1) = (int)plStack_1c0[1] + 1;
        UNLOCK();
      }
      local_1c8 = lVar12;
      FUN_1428f2fbe(param_1,&local_1c8,&local_1b8);
      plVar13 = plStack_1c0;
      if (plStack_1c0 != (longlong *)0x0) {
        LOCK();
        plVar11 = plStack_1c0 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plStack_1c0)(plStack_1c0);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
  }
  else {
    lVar14 = (longlong)*(int *)(param_1 + 0x1e8) * 0x10;
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + -0x10 + lVar14);
    plVar15 = *(longlong **)(*(longlong *)(param_1 + 0x1e0) + -8 + lVar14);
    if (plVar15 == (longlong *)0x0) {
      if (lVar12 == 0) goto LAB_1428f2a51;
      plStack_1c0 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      if (lVar12 == 0) goto LAB_1428f2a54;
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      plStack_1c0 = plVar15;
    }
    local_1c8 = lVar12;
    FUN_1428f2fbe(param_1,&local_1c8,&local_1b8);
    plVar13 = plStack_1c0;
    if (plStack_1c0 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_1c0 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plStack_1c0)(plStack_1c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    iVar10 = *(int *)(param_1 + 0x1b8);
    if (0 < iVar10) {
      lVar12 = 0;
      iVar9 = 0;
      do {
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + lVar12) + 0x304) == 2) {
          FUN_1428f2fbe(param_1,*(longlong *)(param_1 + 0x1b0) + lVar12,&local_1b8);
          iVar10 = *(int *)(param_1 + 0x1b8);
        }
        iVar9 = iVar9 + 1;
        lVar12 = lVar12 + 0x10;
      } while (iVar9 < iVar10);
    }
    local_1c8 = 0;
    plStack_1c0 = (longlong *)0x0;
    uVar6 = FUN_1413f66b6();
    FUN_146a1e2fa(uVar6,&local_1c8);
    if (0 < (int)plStack_1c0) {
      lVar12 = 0;
      iVar10 = 0;
      do {
        FUN_1428f2fbe(param_1,local_1c8 + lVar12,&local_1b8);
        iVar10 = iVar10 + 1;
        lVar12 = lVar12 + 0x10;
      } while (iVar10 < (int)plStack_1c0);
    }
    FUN_1401b439d(local_1c8);
    if (local_1c8 != 0) {
      FUN_1400020a8();
    }
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar15 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  uVar6 = local_1b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 4) {
    FUN_14022c211(&local_1c8,param_1 + 0x1b0);
    uVar6 = local_1b8;
    FUN_142873094(local_1b8,&local_1c8);
    if (local_1c8 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),uVar6);
  (**(code **)(*plVar2 + 0x18))(plVar2,uVar5);
  FUN_1447fa2ac(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  plVar2 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar15 = plStack_60 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  puVar7 = local_80;
  if (local_80 == (undefined1 *)0x0) {
    puVar7 = local_1a0;
  }
  FUN_1447157bd(puVar7,local_78 & 0xffffffff);
  if (local_80 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_200 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(local_200);
  }
LAB_1428f2ca3:
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar2 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428f2fbe FUN_1428f2fbe body=947 status=ok
// SIG undefined FUN_1428f2fbe(void)

void FUN_1428f2fbe(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined1 auStack_f8 [32];
  undefined1 **local_d8;
  undefined1 local_d0;
  undefined1 *local_c8;
  undefined1 *puStack_c0;
  undefined1 *local_b8;
  undefined1 *puStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_8c;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar5 = (longlong *)param_1[0x6c];
  if (plVar5 != (longlong *)0x0) {
    iVar10 = (int)plVar5[1];
    do {
      if (iVar10 == 0) goto LAB_1428f3052;
      LOCK();
      iVar8 = (int)plVar5[1];
      bVar16 = iVar10 == iVar8;
      if (bVar16) {
        *(int *)(plVar5 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar16);
    lVar13 = param_1[0x6b];
    lVar15 = *param_2;
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
    if (lVar13 == lVar15 && lVar13 != 0) goto LAB_1428f333c;
  }
LAB_1428f3052:
  lVar13 = *param_2;
  if (*(char *)((longlong)param_1 + 0x1a2) == '\0') {
    if ((*(longlong **)(lVar13 + 0x510) == (longlong *)0x0) ||
       (cVar9 = (**(code **)(**(longlong **)(lVar13 + 0x510) + 0x80))(), cVar9 == '\0'))
    goto LAB_1428f333c;
    lVar13 = *param_2;
    if (*(longlong **)(lVar13 + 0x510) != (longlong *)0x0) {
      cVar9 = (**(code **)(**(longlong **)(lVar13 + 0x510) + 0x78))();
      if (cVar9 != '\0') goto LAB_1428f333c;
      lVar13 = *param_2;
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
  }
  local_78 = param_1 + 0x69;
  local_70 = param_1[0x69];
  local_68 = param_1[0x6a];
  if (local_68 != 0) {
    LOCK();
    *(int *)(local_68 + 0xc) = *(int *)(local_68 + 0xc) + 1;
    UNLOCK();
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)param_1[0x6a];
  *local_78 = lVar13;
  param_1[0x6a] = (longlong)plVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    uVar11 = *param_3;
    local_88 = *param_2;
    local_80 = 0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
    local_88 = *param_2;
    local_80 = param_2[1];
    uVar11 = *param_3;
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
  }
  uVar11 = FUN_1405d2af8(uVar11,&local_88);
  lVar13 = *param_2;
  uVar4 = *(undefined1 *)(lVar13 + 0x3a);
  local_c8 = &DAT_3f8000003f800000;
  puStack_c0 = &DAT_3f8000003f800000;
  local_b8 = &DAT_3f8000003f800000;
  puStack_b0 = &DAT_3f8000003f800000;
  local_a8 = 0x3f19999a3f19999a;
  uStack_a0 = 0x3f19999a3f19999a;
  dVar2 = (double)param_1[0x7c];
  dVar3 = (double)param_1[0x7d];
  uVar17 = (**(code **)(*param_1 + 0x60))(param_1);
  local_d8 = &local_c8;
  local_d0 = uVar4;
  local_8c = FUN_14020df20(lVar13,uVar17,(float)(dVar2 - dVar3),uVar11);
  lVar13 = param_1[99];
  if ((longlong)(int)lVar13 != 0) {
    lVar15 = param_1[0x62];
    lVar14 = 0;
    do {
      lVar7 = *(longlong *)(lVar15 + lVar14);
      if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x20) != 0)) {
        FUN_1428f6912(lVar7,param_2,uVar11,&local_8c);
      }
      lVar14 = lVar14 + 0x10;
    } while ((longlong)(int)lVar13 * 0x10 != lVar14);
    lVar13 = param_1[99];
    if ((longlong)(int)lVar13 != 0) {
      lVar15 = param_1[0x62];
      lVar14 = 0;
      do {
        lVar7 = *(longlong *)(lVar15 + lVar14);
        if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x20) != 0)) {
          FUN_1428f6d80(lVar7,param_2,uVar11,&local_8c);
        }
        lVar14 = lVar14 + 0x10;
      } while ((longlong)(int)lVar13 * 0x10 != lVar14);
    }
  }
  FUN_1428f3372(&local_78);
  local_c8 = (undefined1 *)0x0;
  iVar10 = *(int *)(*param_2 + 0x608);
  uVar11 = *(undefined8 *)(*param_2 + 0x600);
  puStack_c0 = (undefined1 *)CONCAT44(puStack_c0._4_4_,iVar10);
  if (iVar10 == 0) {
    puStack_c0 = (undefined1 *)0x0;
    uVar12 = 0;
  }
  else {
    FUN_1401b4740(&local_c8,iVar10);
    FUN_1401b4712(local_c8,uVar11,iVar10);
    uVar12 = (ulonglong)puStack_c0 & 0xffffffff;
    if (0 < (int)puStack_c0) {
      lVar13 = 0;
      lVar15 = 0;
      do {
        FUN_1428f2fbe(param_1,local_c8 + lVar13,param_3);
        lVar15 = lVar15 + 1;
        uVar12 = (ulonglong)(int)puStack_c0;
        lVar13 = lVar13 + 0x10;
      } while (lVar15 < (longlong)uVar12);
    }
  }
  FUN_1401b439d(local_c8,uVar12);
  if (local_c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_1428f333c:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428f3372 FUN_1428f3372 body=94 status=ok
// SIG undefined FUN_1428f3372(void)

void FUN_1428f3372(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = param_1[1];
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)plVar2[1];
  *plVar2 = lVar3;
  plVar2[1] = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001428f33c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1428f33d0 FUN_1428f33d0 body=961 status=ok
// SIG undefined FUN_1428f33d0(void)

void FUN_1428f33d0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong local_98;
  undefined8 *local_90;
  int local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = *param_1;
  if (*param_2 != 0 && *param_2 == lVar6) goto LAB_1428f3628;
  if (*(longlong **)(lVar6 + 0x510) == (longlong *)0x0) {
LAB_1428f3453:
    local_60 = param_1[1];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    local_68 = lVar6;
    cVar5 = FUN_1428f583d(&local_68);
    if (cVar5 == '\0') goto LAB_1428f3628;
    lVar6 = *param_1;
    bVar4 = false;
  }
  else {
    cVar5 = (**(code **)(**(longlong **)(lVar6 + 0x510) + 0x80))();
    lVar6 = *param_1;
    if (cVar5 == '\0') goto LAB_1428f3453;
    bVar4 = true;
    if (*(longlong **)(lVar6 + 0x510) != (longlong *)0x0) {
      cVar5 = (**(code **)(**(longlong **)(lVar6 + 0x510) + 0x78))();
      lVar6 = *param_1;
      if (cVar5 != '\0') goto LAB_1428f3453;
    }
  }
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
    UNLOCK();
  }
  local_78 = *param_3;
  local_70 = param_3[1];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 0xc) = *(int *)(local_70 + 0xc) + 1;
    UNLOCK();
  }
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar1 + 0xc) = *(int *)((longlong)plVar1 + 0xc) + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)param_3[1];
  *param_3 = lVar6;
  param_3[1] = (longlong)plVar1;
  local_80 = param_3;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar11 = (int *)((longlong)plVar2 + 0xc);
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (*piVar11 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar11 = (int *)((longlong)plVar1 + 0xc);
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (*piVar11 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  plVar1 = (longlong *)param_1[1];
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar11 = (int *)((longlong)plVar1 + 0xc);
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = (longlong *)*param_1;
  cVar5 = (**(code **)(*plVar1 + 0x208))(plVar1);
  if (cVar5 != '\0') {
    FUN_142860bc8(plVar1 + 0x4d);
  }
  lVar6 = *param_1;
  fVar12 = (float)(**(code **)(*DAT_14c98e618 + 0x58))();
  plVar1 = *(longlong **)(*param_1 + 0x510);
  plVar2 = *(longlong **)(*param_1 + 0x518);
  if (plVar2 == (longlong *)0x0) {
    fVar13 = (float)(**(code **)(*plVar1 + 0xf8))();
    FUN_1405d299c(lVar6,fVar12 * fVar13);
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    fVar13 = (float)(**(code **)(*plVar1 + 0xf8))();
    FUN_1405d299c(lVar6,fVar12 * fVar13);
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar11 = (int *)((longlong)plVar2 + 0xc);
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  lVar6 = *param_1;
  if ((bVar4) && (*(char *)(lVar6 + 0x360) == '\x01')) {
    puVar7 = &DAT_14c84635c;
    if ((*(byte *)(lVar6 + 0x31) & 0x20) != 0) {
      puVar7 = (undefined8 *)(lVar6 + 0x168);
    }
    local_54 = 0;
    FUN_1402bad2e(lVar6,&local_90,*puVar7);
    FUN_1402baeb8(lVar6,local_90);
    lVar6 = *param_1;
  }
  local_90 = (undefined8 *)0x0;
  iVar8 = *(int *)(lVar6 + 0x608);
  uVar3 = *(undefined8 *)(lVar6 + 0x600);
  local_88 = iVar8;
  if (iVar8 == 0) {
    FUN_1401b439d(0,0);
  }
  else {
    FUN_1469b1e1e(&local_90,iVar8);
    puVar7 = local_90;
    FUN_1401b4712(local_90,uVar3,iVar8);
    if ((longlong)local_88 == 0) {
      puVar10 = puVar7;
      iVar8 = 0;
    }
    else {
      puVar9 = puVar7 + (longlong)local_88 * 2;
      do {
        local_a0 = *puVar7;
        local_98 = puVar7[1];
        if (local_98 != 0) {
          LOCK();
          *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
          UNLOCK();
        }
        FUN_1428f33d0(&local_a0,param_2,param_3);
        puVar7 = puVar7 + 2;
        puVar10 = local_90;
        iVar8 = local_88;
      } while (puVar7 != puVar9);
    }
    FUN_1401b439d(puVar10,iVar8);
    if (puVar10 != (undefined8 *)0x0) {
      piVar11 = (int *)((longlong)puVar10 + (-8 - (ulonglong)*(uint *)(puVar10 + -1)));
      LOCK();
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        if (*(longlong *)(piVar11 + 0x10) - (longlong)piVar11 == 0x10000) {
          lVar6 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar6 = FUN_145bdc178();
          }
          FUN_140028df4(lVar6,piVar11);
        }
        else {
          FUN_144705e74(piVar11);
        }
      }
    }
  }
  FUN_1428f3372(&local_80);
LAB_1428f3628:
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    piVar11 = (int *)(puVar7 + 1);
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (*piVar11 == 0) {
      (**(code **)*puVar7)(puVar7);
      LOCK();
      piVar11 = (int *)((longlong)puVar7 + 0xc);
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428f37b6 FUN_1428f37b6 body=87 status=ok
// SIG undefined FUN_1428f37b6(void)

void FUN_1428f37b6(longlong *param_1)

{
  char cVar1;
  
  if ((int)param_1[0x3d] != 0) {
    return;
  }
  if ((DAT_14c98e5a0 == '\x01') && (cVar1 = (**(code **)(*param_1 + 8))(param_1), cVar1 == '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001428f37f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c968088 + 0x18))
            (DAT_14c968088,(float)((double)param_1[0x7c] - (double)param_1[0x7d]));
  return;
}



// FUNCTION 1428f380e FUN_1428f380e body=775 status=ok
// SIG undefined FUN_1428f380e(void)

void FUN_1428f380e(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  char cVar8;
  byte bVar9;
  undefined4 uVar10;
  byte *pbVar11;
  longlong *plVar12;
  byte bVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong *local_b0;
  LARGE_INTEGER local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar4 = *(undefined8 *)(param_1 + 200);
  plVar12 = *(longlong **)(param_1 + 0xd0);
  if (plVar12 == (longlong *)0x0) {
    FUN_142878270(uVar4);
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    FUN_142878270(uVar4);
    LOCK();
    plVar15 = plVar12 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if (((0 < *(int *)(param_1 + 0x1e8)) &&
      ((**(code **)(*DAT_14c968088 + 0x20))(DAT_14c968088,param_2),
      DAT_14c8674d8 != (longlong *)0x0 && DAT_14c8674e0 != 0)) &&
     (cVar8 = (**(code **)(*DAT_14c8674d8 + 0x30))(), cVar8 != '\0')) {
    plVar12 = DAT_14c8674d8;
    if (DAT_14c8674e0 == 0) {
      plVar12 = (longlong *)0x0;
    }
    (**(code **)(*plVar12 + 0x58))();
  }
  (**(code **)(*DAT_14c968088 + 0x30))(DAT_14c968088,param_2);
  (**(code **)(*DAT_14c968088 + 0x28))(DAT_14c968088,param_2);
  uVar10 = (**(code **)(*DAT_14c968088 + 0x60))();
  iVar3 = *(int *)(param_1 + 0x318);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x310);
    lVar14 = 0;
    do {
      lVar6 = *(longlong *)(lVar5 + lVar14);
      if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x20) != 0)) {
        FUN_14096fa74(lVar6);
        FUN_1428f73a4(lVar6,param_1 + 0x200,uVar10);
      }
      lVar14 = lVar14 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar14);
    iVar3 = *(int *)(param_1 + 0x318);
    if ((longlong)iVar3 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x310);
      lVar14 = 0;
      bVar13 = 0;
      do {
        lVar6 = *(longlong *)(lVar5 + lVar14);
        if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x20) != 0)) {
          bVar9 = FUN_140553226();
          bVar13 = bVar13 | bVar9;
        }
        lVar14 = lVar14 + 0x10;
      } while ((longlong)iVar3 * 0x10 != lVar14);
      plVar12 = *(longlong **)(param_1 + 0x310);
      *(byte *)(param_1 + 0x63c) = bVar13;
      if ((longlong)*(int *)(param_1 + 0x318) != 0) {
        plVar15 = plVar12 + (longlong)*(int *)(param_1 + 0x318) * 2;
        local_b0 = (longlong *)(param_1 + 0x148);
        do {
          lVar5 = *plVar12;
          if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0x20) != 0)) {
            pbVar11 = *(byte **)(param_1 + 0x540);
            if (*(byte **)(param_1 + 0x540) == (byte *)0x0) {
              pbVar11 = (byte *)(param_1 + 0x530);
            }
            if ((*pbVar11 & 0x20) != 0) {
              QueryPerformanceCounter(&local_a8);
              dVar7 = (double)local_a8.QuadPart * DAT_14c83f420;
              lVar14 = 0;
              do {
                if ((*(char *)(lVar5 + 0x2f0 + lVar14) == '\x01') &&
                   (0.800000011920929 <= (dVar7 + 16777216.0) - *(double *)(lVar5 + 0x2e8 + lVar14))
                   ) {
                  local_a8.QuadPart = 0;
                  uStack_a0 = 0;
                  local_b8 = 0;
                  (**(code **)(*local_b0 + 200))(local_b0,5,&local_a8,0);
                  if (*(char *)(lVar5 + 0x2f0 + lVar14) == '\x01') {
                    *(undefined1 *)(lVar5 + 0x2f0 + lVar14) = 0;
                  }
                  puVar2 = (undefined8 *)(lVar5 + 0x2f8 + lVar14);
                  *puVar2 = 0;
                  puVar2[1] = 0;
                }
                lVar14 = lVar14 + 0x20;
              } while (lVar14 != 0x160);
            }
          }
          plVar12 = plVar12 + 2;
        } while (plVar12 != plVar15);
      }
      goto LAB_1428f3ad2;
    }
  }
  *(undefined1 *)(param_1 + 0x63c) = 0;
LAB_1428f3ad2:
  if ((local_90 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428f3b16 FUN_1428f3b16 body=158 status=ok
// SIG undefined FUN_1428f3b16(void)

void FUN_1428f3b16(longlong param_1)

{
  double dVar1;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_1 + 1000) = *(undefined8 *)(param_1 + 0x3e0);
  QueryPerformanceCounter(&local_20);
  dVar1 = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
  *(double *)(param_1 + 0x3e0) = dVar1;
  if (0.125 < (float)(dVar1 - *(double *)(param_1 + 1000))) {
    *(double *)(param_1 + 1000) = dVar1 + -0.125;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428f3bb6 FUN_1428f3bb6 body=1771 status=ok
// SIG undefined FUN_1428f3bb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1428f3bb6(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  double dVar8;
  char cVar9;
  DWORD DVar10;
  DWORD DVar11;
  int *piVar12;
  undefined8 uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  longlong **pplVar17;
  longlong lVar18;
  longlong *plVar19;
  float fVar20;
  undefined1 auStack_238 [32];
  undefined1 local_218;
  undefined4 local_210;
  undefined8 local_208;
  longlong local_200 [2];
  float local_1f0;
  float fStack_1ec;
  longlong local_1e8;
  longlong *aplStack_1e0 [36];
  longlong **local_c0;
  int local_b8;
  longlong *local_a0;
  longlong local_98;
  undefined4 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x100))();
  }
  FUN_14485dd80(param_1 + 0xaa,param_2);
  *(float *)(param_1 + 0x7e) =
       *(float *)(param_1 + 0x7e) * 0.9 +
       (float)((double)param_1[0x7c] - (double)param_1[0x7d]) * 0.1;
  piVar12 = (int *)FUN_14171dbb4();
  if (((piVar12[6] == 0) || (*piVar12 == 0)) || (0 < piVar12[7])) {
    fVar20 = (float)((double)param_1[0x7c] - (double)param_1[0x7d]);
    if (1.0 <= fVar20) {
      fVar20 = 1.0;
    }
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    *(float *)((longlong)param_1 + 0x3f4) =
         *(float *)((longlong)param_1 + 0x3f4) * 0.9 + fVar20 * 0.1;
  }
  lVar14 = DAT_14c98e540;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar15 = *(int *)(lVar5 + 0xc60);
  if (((iVar15 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar15 == 2)) {
    uVar16 = 0;
  }
  else if (iVar15 == 1) {
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    uVar16 = (ulonglong)(DVar10 != DVar11);
  }
  else {
    uVar16 = 1;
  }
  if (*(int *)(lVar14 + uVar16 * 4) != 0) {
    (**(code **)(*param_1 + 0x68))(param_1,&local_1f0);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c98e5d0) && (FUN_144b3d300(), DAT_14c98e5d0 == -1)) {
      (**(code **)(*param_1 + 0x68))(param_1);
      _DAT_14c98e5c8 = local_1e8;
      _Init_thread_footer();
    }
    if ((local_1f0 != DAT_14c98e5c8) || (NAN(local_1f0) || NAN(DAT_14c98e5c8))) {
LAB_1428f4043:
      if ((DAT_14c98e5d4 != '\0') ||
         (4.0 <= (local_1f0 - DAT_14c98e5c8) * (local_1f0 - DAT_14c98e5c8) +
                 (fStack_1ec - DAT_14c98e5cc) * (fStack_1ec - DAT_14c98e5cc))) {
        DAT_14c98e5d4 = '\x01';
        lVar14 = (**(code **)(*param_1 + 0x60))();
        param_1[0x73] = lVar14;
        _DAT_14c98e5c8 = CONCAT44(fStack_1ec,local_1f0);
      }
    }
    else if ((fStack_1ec != DAT_14c98e5cc) || (NAN(fStack_1ec) || NAN(DAT_14c98e5cc)))
    goto LAB_1428f4043;
    dVar2 = (double)param_1[0x7c];
    if (0.10000000149011612 <= dVar2 - (double)param_1[0x73]) {
      DAT_14c98e5d4 = '\0';
      _DAT_14c98e5c8 = CONCAT44(fStack_1ec,local_1f0);
    }
    else {
      dVar3 = (double)param_1[0x6f];
      (**(code **)(*param_1 + 0x30))();
      plVar19 = aplStack_1e0[0];
      lVar14 = local_1e8;
      if (aplStack_1e0[0] != (longlong *)0x0) {
        LOCK();
        plVar1 = aplStack_1e0[0] + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*aplStack_1e0[0])();
          LOCK();
          piVar12 = (int *)((longlong)plVar19 + 0xc);
          *piVar12 = *piVar12 + -1;
          UNLOCK();
          if (*piVar12 == 0) {
            (**(code **)(*plVar19 + 0x10))();
          }
        }
      }
      if (((lVar14 != 0) && (1.0 < dVar2 - dVar3)) &&
         (cVar9 = (**(code **)(*param_1 + 0xd0))(), cVar9 == '\0')) {
        FUN_1401b43e8(param_1,local_200);
        (**(code **)(*param_1 + 0x68))(param_1,&local_208);
        local_210 = 0xffffffff;
        local_218 = 0;
        (**(code **)(*param_1 + 0x108))(param_1,&local_1e8,local_208,local_200);
        iVar15 = local_b8;
        FUN_1447fa2ac(local_98,local_90);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar19 = local_a0 + 1;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)*plVar19 == 0) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar12 = (int *)((longlong)local_a0 + 0xc);
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (*piVar12 == 0) {
              (**(code **)(*local_a0 + 0x10))(local_a0);
            }
          }
        }
        pplVar17 = local_c0;
        if (local_c0 == (longlong **)0x0) {
          pplVar17 = aplStack_1e0;
        }
        FUN_1447157bd(pplVar17,local_b8);
        if (local_c0 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        FUN_1401b439d(local_200[0]);
        if (local_200[0] != 0) {
          FUN_1400020a8();
        }
        if (0 < iVar15) {
          if (*(int *)((longlong)param_1 + 0x36c) == -1) {
            lVar14 = FUN_14171dbb4();
            iVar15 = *(int *)(lVar14 + 0x18) + 1;
            *(int *)(lVar14 + 0x18) = iVar15;
            *(int *)((longlong)param_1 + 0x36c) = iVar15;
          }
          goto LAB_1428f3d18;
        }
      }
    }
  }
  if ((*(int *)((longlong)param_1 + 0x36c) != -1) &&
     (lVar14 = FUN_14171dbb4(), *(int *)((longlong)param_1 + 0x36c) != -1)) {
    *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + -1;
    *(undefined4 *)((longlong)param_1 + 0x36c) = 0xffffffff;
  }
LAB_1428f3d18:
  piVar12 = (int *)(lVar5 + 0xc60);
  if (((longlong)(int)param_1[0x3d] < 1) ||
     (plVar19 = *(longlong **)(param_1[0x3c] + -8 + (longlong)(int)param_1[0x3d] * 0x10),
     plVar19 == (longlong *)0x0)) {
    plVar19 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    UNLOCK();
  }
  lVar5 = DAT_14c98e588;
  iVar15 = *piVar12;
  if (((iVar15 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar15 == 2)) {
    uVar16 = 0;
  }
  else if (iVar15 == 1) {
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    uVar16 = (ulonglong)(DVar10 != DVar11);
  }
  else {
    uVar16 = 1;
  }
  dVar2 = (double)param_1[0x7d];
  dVar3 = (double)param_1[0x6e];
  dVar4 = (double)param_1[0x73];
  dVar8 = (double)*(float *)(lVar5 + uVar16 * 4);
  FUN_14286002c();
  *(undefined1 *)(param_1 + 0x26) = 1;
  lVar5 = DAT_14c98e570;
  iVar15 = *piVar12;
  if (((iVar15 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar15 == 2)) {
    uVar16 = 0;
  }
  else if (iVar15 == 1) {
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    uVar16 = (ulonglong)(DVar10 != DVar11);
  }
  else {
    uVar16 = 1;
  }
  if (((*(int *)(lVar5 + uVar16 * 4) == 0) || (*(char *)((longlong)param_1 + 0x144) != '\0')) ||
     ((dVar2 - dVar3 <= dVar8 ||
      ((dVar2 - dVar4 <= dVar8 || (*(char *)((longlong)param_1 + 0x63c) == '\x01')))))) {
    if ((*(char *)((longlong)param_1 + 0x63c) == '\0') &&
       (lVar5 = param_1[99], (longlong)(int)lVar5 != 0)) {
      lVar14 = param_1[0x62];
      lVar18 = 0;
      do {
        lVar6 = *(longlong *)(lVar14 + lVar18);
        if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x20) != 0)) {
          *(undefined4 *)(lVar6 + 0x4c) = 2;
        }
        lVar18 = lVar18 + 0x10;
      } while ((longlong)(int)lVar5 * 0x10 != lVar18);
    }
    *(undefined1 *)(param_1 + 0x26) = 0;
    uVar13 = FUN_1413f66b6();
    FUN_14033775a(uVar13);
    local_1e8 = 0;
    aplStack_1e0[0] = (longlong *)0x0;
    FUN_1428f2718(param_1);
    FUN_142878890(param_1[0x19]);
  }
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar19 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar12 = (int *)((longlong)plVar19 + 0xc);
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (*piVar12 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  FUN_14485dd80(param_1 + 0xad,param_2);
  lVar5 = param_1[0x19];
  puVar7 = (undefined8 *)param_1[0x1a];
  if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_238);
  }
  LOCK();
  *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
  UNLOCK();
  FUN_142878270(lVar5);
  LOCK();
  piVar12 = (int *)(puVar7 + 1);
  *piVar12 = *piVar12 + -1;
  UNLOCK();
  if (*piVar12 == 0) {
    (**(code **)*puVar7)(puVar7);
    LOCK();
    piVar12 = (int *)((longlong)puVar7 + 0xc);
    *piVar12 = *piVar12 + -1;
    UNLOCK();
    if (*piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_238);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428f4316 FUN_1428f4316 body=1943 status=ok
// SIG undefined FUN_1428f4316(void)

void FUN_1428f4316(longlong *param_1,longlong *param_2,longlong *param_3,uint param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  longlong **pplVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  float fVar13;
  undefined1 auStack_2b8 [32];
  undefined1 local_298;
  longlong local_288;
  longlong local_280;
  undefined1 local_278 [8];
  longlong *local_270;
  longlong local_268;
  longlong local_260;
  undefined1 local_258 [8];
  longlong *local_250;
  longlong local_248;
  longlong local_240;
  longlong *local_238;
  longlong *local_230;
  undefined1 local_228 [8];
  longlong *local_220;
  longlong local_218;
  longlong local_210;
  LARGE_INTEGER local_208;
  longlong *aplStack_200 [7];
  longlong *local_1c8;
  longlong *local_1c0 [28];
  longlong **local_e0;
  ulonglong local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    cVar7 = (**(code **)(*(longlong *)param_1[4] + 0xf0))();
    if (cVar7 != '\0') {
      plVar3 = param_1 + 0x3c;
      local_208.QuadPart = *param_2;
      aplStack_200[0] = (longlong *)param_2[1];
      if (aplStack_200[0] != (longlong *)0x0) {
        LOCK();
        *(int *)(aplStack_200[0] + 1) = (int)aplStack_200[0][1] + 1;
        UNLOCK();
      }
      FUN_1469b5e12(plVar3,&local_208);
      plVar12 = aplStack_200[0];
      if (aplStack_200[0] != (longlong *)0x0) {
        LOCK();
        plVar2 = aplStack_200[0] + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*aplStack_200[0])(aplStack_200[0]);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      lVar6 = param_1[99];
      if ((longlong)(int)lVar6 != 0) {
        lVar10 = param_1[0x62];
        lVar11 = 0;
        do {
          if ((*(longlong *)(lVar10 + lVar11) != 0) &&
             (*(longlong *)(*(longlong *)(lVar10 + lVar11) + 0x20) != 0)) {
            FUN_14589483e();
          }
          lVar11 = lVar11 + 0x10;
        } while ((longlong)(int)lVar6 * 0x10 != lVar11);
      }
      *(byte *)(*param_2 + 0x369) = *(byte *)(*param_2 + 0x369) & 0xa7 | 0x40;
      (**(code **)(*(longlong *)param_1[4] + 0xc0))();
      uVar8 = param_4 ^ 1;
      lVar6 = *param_3;
      if (lVar6 == 0) {
        local_288 = *param_2;
        local_280 = param_2[1];
        if (local_280 != 0) {
          LOCK();
          *(int *)(local_280 + 8) = *(int *)(local_280 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*param_1 + 0x10))(param_1,local_278,&local_288,uVar8);
        if (local_270 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_270 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*local_270)(local_270);
            LOCK();
            piVar1 = (int *)((longlong)local_270 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_270 + 0x10))(local_270);
            }
          }
        }
      }
      else {
        local_208.s.LowPart._0_1_ = DAT_14c96b238;
        local_e0 = (longlong **)0x0;
        local_d8 = 0x400000000;
        local_d0 = 0;
        local_c8 = 0;
        plStack_c0 = (longlong *)0x0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_210 = param_3[1];
        if (local_210 != 0) {
          LOCK();
          *(int *)(local_210 + 8) = *(int *)(local_210 + 8) + 1;
          UNLOCK();
        }
        local_218 = lVar6;
        cVar7 = FUN_1407c4cd2(param_1,&local_218,&local_208);
        if (cVar7 == '\0') {
          local_268 = *param_2;
          local_260 = param_2[1];
          if (local_260 != 0) {
            LOCK();
            *(int *)(local_260 + 8) = *(int *)(local_260 + 8) + 1;
            UNLOCK();
          }
          (**(code **)(*param_1 + 0x10))(param_1,local_258,&local_268,uVar8);
          plVar12 = local_250;
        }
        else {
          pplVar9 = local_e0 + 7;
          if (local_e0 == (longlong **)0x0) {
            pplVar9 = &local_1c8;
          }
          local_238 = *pplVar9;
          pplVar9 = local_1c0;
          if (local_e0 != (longlong **)0x0) {
            pplVar9 = local_e0 + 8;
          }
          local_230 = *pplVar9;
          if (local_230 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_230 + 1) = (int)local_230[1] + 1;
            UNLOCK();
          }
          local_248 = *param_2;
          local_240 = param_2[1];
          if (local_240 != 0) {
            LOCK();
            *(int *)(local_240 + 8) = *(int *)(local_240 + 8) + 1;
            UNLOCK();
          }
          local_298 = (undefined1)uVar8;
          FUN_1469a8322(param_1,local_228,&local_248,&local_238);
          plVar12 = local_220;
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar12 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        FUN_1447fa2ac(local_b8,uStack_b0 & 0xffffffff);
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        plVar12 = plStack_c0;
        if (plStack_c0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_c0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_c0)(plStack_c0);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        pplVar9 = local_e0;
        if (local_e0 == (longlong **)0x0) {
          pplVar9 = aplStack_200;
        }
        FUN_1447157bd(pplVar9,local_d8 & 0xffffffff);
        if (local_e0 != (longlong **)0x0) {
          FUN_1400020a8();
        }
      }
      if ((((int)param_1[0x3d] == 1) && ((int)param_1[0x92] != 0)) &&
         ((longlong *)param_1[0x91] != (longlong *)0x0)) {
        (**(code **)(*(longlong *)param_1[0x91] + 0x60))();
      }
      lVar6 = param_1[99];
      if ((longlong)(int)lVar6 != 0) {
        lVar10 = param_1[0x62];
        lVar11 = 0;
        do {
          if ((*(longlong *)(lVar10 + lVar11) != 0) &&
             (*(longlong *)(*(longlong *)(lVar10 + lVar11) + 0x20) != 0)) {
            FUN_14596c952();
          }
          lVar11 = lVar11 + 0x10;
        } while ((longlong)(int)lVar6 * 0x10 != lVar11);
      }
      FUN_1469a9f40(param_1 + 0x2a);
      local_208.QuadPart = 0;
      aplStack_200[0] = (longlong *)0x0;
      (**(code **)(*DAT_14c968088 + 0x48))(DAT_14c968088,&local_208);
      plVar12 = aplStack_200[0];
      if (aplStack_200[0] != (longlong *)0x0) {
        LOCK();
        plVar2 = aplStack_200[0] + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*aplStack_200[0])(aplStack_200[0]);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      local_208.QuadPart = 0;
      aplStack_200[0] = (longlong *)0x0;
      (**(code **)(*DAT_14c968088 + 0x78))(DAT_14c968088,0,&local_208);
      plVar12 = aplStack_200[0];
      if (aplStack_200[0] != (longlong *)0x0) {
        LOCK();
        plVar2 = aplStack_200[0] + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*aplStack_200[0])(aplStack_200[0]);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      if ((char)param_4 == '\0') {
        plVar12 = (longlong *)DAT_14c968088[1];
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x48))(plVar12,1);
        }
        (**(code **)(*(longlong *)param_1[4] + 0xd8))();
        QueryPerformanceCounter(&local_208);
        uVar8 = *(uint *)(param_1 + 0x3d);
        if (0 < (int)uVar8) {
          dVar5 = (double)local_208.QuadPart * DAT_14c83f420 + 16777216.0;
          do {
            lVar6 = *(longlong *)(*plVar3 + -0x10 + (ulonglong)uVar8 * 0x10);
            plVar12 = *(longlong **)(*plVar3 + -8 + (ulonglong)uVar8 * 0x10);
            if (plVar12 == (longlong *)0x0) {
              if ((lVar6 == 0) || (lVar6 != *param_2)) break;
            }
            else {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
              lVar10 = *param_2;
              LOCK();
              plVar2 = plVar12 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
              if (lVar6 != lVar10 || lVar6 == 0) break;
            }
            QueryPerformanceCounter(&local_208);
            dVar4 = (double)local_208.QuadPart * DAT_14c83f420 + 16777216.0;
            if (0.0 < (float)((dVar5 - dVar4) + 0.016666666666666666)) {
              FUN_14000f986();
            }
            fVar13 = (float)((double)param_1[0x7c] - (double)param_1[0x7d]);
            FUN_14485dd80(param_1 + 0xbc,fVar13);
            FUN_1428f380e(param_1,fVar13);
            if ((longlong)(int)param_1[0x3d] < 1) break;
            lVar10 = (longlong)(int)param_1[0x3d] * 0x10;
            lVar6 = *(longlong *)(*plVar3 + -0x10 + lVar10);
            plVar12 = *(longlong **)(*plVar3 + -8 + lVar10);
            if (plVar12 == (longlong *)0x0) {
              if ((lVar6 == 0) || (lVar6 != *param_2)) break;
            }
            else {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
              lVar10 = *param_2;
              LOCK();
              plVar2 = plVar12 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
              if (lVar6 != lVar10 || lVar6 == 0) break;
            }
            (**(code **)(*(longlong *)param_1[4] + 0xd0))();
            FUN_1428f3b16(param_1);
            FUN_1428f3bb6(param_1,fVar13);
            (**(code **)(*(longlong *)param_1[4] + 0xd8))();
            (**(code **)(*(longlong *)param_1[4] + 200))();
            uVar8 = *(uint *)(param_1 + 0x3d);
            dVar5 = dVar4;
            if ((int)uVar8 < 1) break;
          } while( true );
        }
        (**(code **)(*(longlong *)param_1[4] + 0xd0))();
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar3 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar3 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  if ((local_a0 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428f4aae FUN_1428f4aae body=797 status=ok
// SIG undefined FUN_1428f4aae(void)

undefined8 *
FUN_1428f4aae(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined1 *param_10,undefined1 param_11)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  char cVar4;
  longlong **pplVar5;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined8 local_200;
  undefined1 local_1f8;
  undefined8 local_1f0;
  undefined1 *local_1e8;
  undefined1 local_1e0;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  undefined1 local_1ac;
  char local_1ab;
  undefined1 local_1aa;
  char local_1a9;
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  longlong *local_1a0 [36];
  longlong **local_80;
  ulonglong local_78;
  undefined1 local_70;
  undefined8 local_68;
  longlong *plStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (*(int *)(param_4 + 0x130) < 1) {
    local_1a8 = DAT_14c96b238;
    local_80 = (longlong **)0x0;
    local_78 = 0x400000000;
    local_70 = 0;
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    local_58 = 0;
    uStack_50 = 0;
    local_1c0 = *param_3;
    local_1b8 = param_3[1];
    if (local_1b8 != 0) {
      LOCK();
      *(int *)(local_1b8 + 8) = *(int *)(local_1b8 + 8) + 1;
      UNLOCK();
    }
    cVar4 = FUN_1407c4cd2(param_1,&local_1c0,&local_1a8);
    if (cVar4 == '\0') {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      local_1ab = param_10[1];
      if (local_1ab == '\x01') {
        local_1ac = *param_10;
      }
      local_1e0 = param_11;
      local_1e8 = &local_1ac;
      local_1f0 = param_9;
      local_1f8 = param_8;
      local_200 = param_7;
      local_208 = param_6;
      FUN_1469a5808(param_1 + 0x200,&local_1d0,&local_1a8,param_5);
      *param_2 = local_1d0;
      param_2[1] = local_1c8;
      if (local_1c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
        UNLOCK();
        if (local_1c8 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_1c8 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_1c8)(local_1c8);
            LOCK();
            piVar3 = (int *)((longlong)local_1c8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_1c8 + 0x10))(local_1c8);
            }
          }
        }
      }
    }
    FUN_1447fa2ac(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    plVar2 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    pplVar5 = local_80;
    if (local_80 == (longlong **)0x0) {
      pplVar5 = local_1a0;
    }
    FUN_1447157bd(pplVar5,local_78 & 0xffffffff);
    if (local_80 != (longlong **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_1a9 = param_10[1];
    if (local_1a9 == '\x01') {
      local_1aa = *param_10;
    }
    local_1e0 = param_11;
    local_1e8 = &local_1aa;
    local_1f0 = param_9;
    local_1f8 = param_8;
    local_200 = param_7;
    local_208 = param_6;
    FUN_1469a5808(param_1 + 0x200,&local_1a8,param_4,param_5);
    *param_2 = CONCAT71(uStack_1a7,local_1a8);
    param_2[1] = local_1a0[0];
    if (local_1a0[0] != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1a0[0] + 1) = (int)local_1a0[0][1] + 1;
      UNLOCK();
      if (local_1a0[0] != (longlong *)0x0) {
        LOCK();
        plVar2 = local_1a0[0] + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_1a0[0])(local_1a0[0]);
          LOCK();
          piVar3 = (int *)((longlong)local_1a0[0] + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*local_1a0[0] + 0x10))(local_1a0[0]);
          }
        }
      }
    }
  }
  if (param_10[1] == '\x01') {
    param_10[1] = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1428f4dd8 FUN_1428f4dd8 body=211 status=ok
// SIG undefined FUN_1428f4dd8(void)

void FUN_1428f4dd8(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_1;
  if (0 < *(int *)(lVar3 + 0x608)) {
    lVar6 = 8;
    lVar5 = 0;
    do {
      local_48 = *(undefined8 *)(*(longlong *)(lVar3 + 0x600) + -8 + lVar6);
      local_40 = *(longlong *)(*(longlong *)(lVar3 + 0x600) + lVar6);
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      FUN_1428f4dd8(&local_48,param_2);
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar5 < *(int *)(lVar3 + 0x608));
  }
  FUN_140761c9a(param_2,param_1);
  plVar4 = (longlong *)param_1[1];
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
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428f4eac FUN_1428f4eac body=7 status=ok
// SIG undefined FUN_1428f4eac(void)

undefined1 FUN_1428f4eac(void)

{
  return DAT_14c75ef44;
}



// FUNCTION 1428f4eb4 FUN_1428f4eb4 body=691 status=ok
// SIG undefined FUN_1428f4eb4(void)

void FUN_1428f4eb4(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = *(longlong *)(param_2 + 0x128);
  if (*(longlong *)(param_2 + 0x128) == 0) {
    lVar7 = param_2 + 8;
  }
  lVar2 = *(longlong *)(lVar7 + 0x38);
  plVar12 = *(longlong **)(lVar7 + 0x40);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  plVar10 = *(longlong **)(lVar2 + 0x3a8);
  bVar3 = true;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    plVar13 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar10[1];
    plVar13 = (longlong *)0x0;
    do {
      if (iVar6 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_1428f4f3a;
      }
      LOCK();
      iVar4 = (int)plVar10[1];
      bVar14 = iVar6 == iVar4;
      if (bVar14) {
        *(int *)(plVar10 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar14);
    plVar13 = *(longlong **)(lVar2 + 0x3a0);
    bVar3 = false;
  }
LAB_1428f4f3a:
  local_70 = param_1;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar12 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if ((plVar13 != (longlong *)0x0) &&
     ((**(code **)(*plVar13 + 0x158))(plVar13,&local_58), local_50 != (longlong *)0x0)) {
    iVar6 = (int)local_50[1];
    do {
      if (iVar6 == 0) {
        plVar12 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_50[1];
      bVar14 = iVar6 == iVar4;
      if (bVar14) {
        *(int *)(local_50 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
      plVar12 = local_50;
    } while (!bVar14);
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
    if (plVar12 != (longlong *)0x0) {
      if ((local_58 == 0) || (uVar8 = (ulonglong)*(int *)(param_2 + 0x130), (longlong)uVar8 < 1)) {
LAB_1428f5090:
        cVar5 = '\0';
      }
      else {
        lVar7 = param_2 + 8;
        if (*(longlong *)(param_2 + 0x128) != 0) {
          lVar7 = *(longlong *)(param_2 + 0x128);
        }
        if (*(longlong *)(lVar7 + 0x38) != local_58) {
          uVar9 = 0;
          plVar11 = (longlong *)(lVar7 + 0x80);
          do {
            if (uVar8 - 1 == uVar9) goto LAB_1428f5090;
            uVar9 = uVar9 + 1;
            lVar7 = *plVar11;
            plVar11 = plVar11 + 9;
          } while (lVar7 != local_58);
          if (uVar8 <= uVar9) goto LAB_1428f5090;
        }
        local_68 = *param_3;
        local_60 = param_3[1];
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
          UNLOCK();
        }
        cVar5 = (**(code **)(*plVar13 + 0x138))(plVar13,param_4,&local_68);
      }
      LOCK();
      plVar13 = plVar12 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      if (cVar5 != '\0') goto LAB_1428f504c;
    }
  }
  if (*param_3 != 0) {
    FUN_1410a3d58(local_70,param_4,param_3,1);
  }
LAB_1428f504c:
  if (!bVar3) {
    LOCK();
    plVar12 = plVar10 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  plVar12 = (longlong *)param_3[1];
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar12 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1428f5168 FUN_1428f5168 body=194 status=ok
// SIG undefined FUN_1428f5168(void)

void FUN_1428f5168(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x4b8);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)FUN_14001cc68(8,0x10);
    *plVar3 = (longlong)&PTR_FUN_149efda40;
    *(longlong **)(param_1 + 0x4b8) = plVar3;
  }
  local_38 = *param_4;
  local_30 = param_4[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar3 + 8))(plVar3,param_2,param_3,&local_38);
  plVar3 = (longlong *)param_4[1];
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428f522c FUN_1428f522c body=179 status=ok
// SIG undefined FUN_1428f522c(void)

longlong * FUN_1428f522c(longlong param_1,longlong *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_3 != 0xffffffff) {
    uVar5 = param_3;
  }
  if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x318))) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x310) + (ulonglong)uVar5 * 0x10);
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x310) + 8 + (ulonglong)uVar5 * 0x10);
    if (plVar4 == (longlong *)0x0) {
      if (lVar3 != 0) {
        *param_2 = lVar3;
        param_2[1] = 0;
        return param_2;
      }
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      if (lVar3 != 0) {
        *param_2 = lVar3;
        param_2[1] = (longlong)plVar4;
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
      if (lVar3 != 0) {
        return param_2;
      }
    }
  }
  FUN_141370954(param_1,param_2,param_3,0);
  return param_2;
}



// FUNCTION 1428f52e0 FUN_1428f52e0 body=390 status=ok
// SIG undefined FUN_1428f52e0(void)

void FUN_1428f52e0(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_1a8 [40];
  undefined1 local_180 [8];
  undefined1 local_178 [288];
  undefined1 *local_58;
  ulonglong local_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong *plStack_38;
  longlong local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((int)param_2 < (int)param_1[99]) {
    local_180[0] = DAT_14c96b238;
    local_58 = (undefined1 *)0x0;
    local_50 = 0x400000000;
    local_48 = 0;
    local_40 = 0;
    plStack_38 = (longlong *)0x0;
    local_30 = 0;
    uStack_28 = 0;
    (**(code **)(*param_1 + 0x150))(0,param_2,local_180,2);
    FUN_1447fa2ac(local_30,uStack_28 & 0xffffffff);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    plVar4 = plStack_38;
    if (plStack_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_38)(plStack_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    puVar5 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar5 = local_178;
    }
    FUN_1447157bd(puVar5,local_50 & 0xffffffff);
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    lVar3 = param_1[0x62];
    lVar6 = (longlong)(int)param_2 * 0x10;
    *(undefined8 *)(lVar3 + lVar6) = 0;
    plVar4 = *(longlong **)(lVar3 + 8 + lVar6);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(lVar3 + lVar6 + 8) = 0;
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
    (**(code **)(*(longlong *)param_1[0xa4] + 0x28))((longlong *)param_1[0xa4],param_2 & 0xffffffff)
    ;
  }
  if ((local_20 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428f5468 FUN_1428f5468 body=88 status=ok
// SIG undefined FUN_1428f5468(void)

undefined8 FUN_1428f5468(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x1d0) < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = **(longlong **)(param_1 + 0x1c8);
    plVar3 = (longlong *)(*(longlong **)(param_1 + 0x1c8))[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *(undefined1 *)(lVar4 + 0x49) = 1;
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) {
        return 1;
      }
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) {
        return 1;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3);
      return 1;
    }
  }
  *(undefined1 *)(lVar4 + 0x49) = 1;
  return 1;
}



// FUNCTION 1428f54c0 FUN_1428f54c0 body=460 status=ok
// SIG undefined FUN_1428f54c0(void)

undefined8 FUN_1428f54c0(longlong param_1,undefined8 param_2,int param_3,int param_4,char param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14054cb04(&local_40,param_1 + 0x68,param_2);
  if (local_40 != 0) {
    FUN_1402bb070(local_40,CONCAT44((float)param_4,(float)param_3));
    (**(code **)(**(longlong **)(param_1 + -0x128) + 0x38))
              (*(longlong **)(param_1 + -0x128),&local_40,param_3,param_4);
    if (param_5 == '\0') {
      if (((((*(byte *)(local_40 + 0x368) & 2) == 0) && (*(int *)(local_40 + 0x304) != 2)) &&
          (*(int *)(local_40 + 0x304) != 4)) &&
         (((*(byte *)(local_40 + 0x369) & 1) == 0 &&
          (*(longlong **)(local_40 + 0x510) != (longlong *)0x0)))) {
        cVar3 = (**(code **)(**(longlong **)(local_40 + 0x510) + 0x80))();
        if ((cVar3 != '\0') && (*(char *)(local_40 + 0x660) == '\x01')) {
          local_50 = local_40;
          local_48 = local_38;
          if (local_38 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_38 + 1) = (int)local_38[1] + 1;
            UNLOCK();
          }
          FUN_1428f2718(param_1 + -0x148,&local_50);
        }
      }
      if (*(longlong **)(local_40 + 0x510) != (longlong *)0x0) {
        cVar3 = (**(code **)(**(longlong **)(local_40 + 0x510) + 0x80))();
        if (((cVar3 != '\0') && ((*(byte *)(local_40 + 0x368) & 2) == 0)) &&
           ((*(int *)(local_40 + 0x304) != 2 &&
            ((*(int *)(local_40 + 0x304) != 4 && (*(char *)(local_40 + 0x360) == '\x01')))))) {
          (**(code **)(**(longlong **)(param_1 + -0x128) + 0xc0))();
        }
      }
    }
    uVar4 = FUN_1413f66b6();
    local_60 = local_40;
    local_58 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    FUN_14596cc86(uVar4,&local_60);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1428f56c6 FUN_1428f56c6 body=101 status=ok
// SIG undefined FUN_1428f56c6(void)

void FUN_1428f56c6(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
  plVar3 = *(longlong **)(param_3 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001428f570e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1428f57d4 FUN_1428f57d4 body=105 status=ok
// SIG undefined FUN_1428f57d4(void)

undefined1 * FUN_1428f57d4(undefined1 *param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = *param_2;
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    plVar2 = *(longlong **)(param_2 + 0x10);
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar2 != plVar3) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(longlong **)(param_1 + 0x10) = plVar2;
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
    }
  }
  return param_1;
}



// FUNCTION 1428f583d FUN_1428f583d body=219 status=ok
// SIG undefined FUN_1428f583d(void)

byte FUN_1428f583d(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  byte unaff_BL;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = *(int *)(*param_1 + 0x608);
  if (iVar3 == 0) goto LAB_1428f58cb;
  plVar4 = *(longlong **)(*param_1 + 0x600);
  lVar6 = *plVar4;
  if (*(longlong **)(lVar6 + 0x510) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(lVar6 + 0x510) + 0x80))();
    lVar6 = *plVar4;
    if (cVar5 != '\0') {
      unaff_BL = 1;
      if (*(longlong **)(lVar6 + 0x510) == (longlong *)0x0) goto LAB_1428f58cb;
      cVar5 = (**(code **)(**(longlong **)(lVar6 + 0x510) + 0x78))();
      if (cVar5 == '\0') goto LAB_1428f58cb;
      lVar6 = *plVar4;
    }
  }
  local_30 = plVar4[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  local_38 = lVar6;
  unaff_BL = FUN_1428f583d(&local_38);
LAB_1428f58cb:
  plVar4 = (longlong *)param_1[1];
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar3 != 0 & unaff_BL;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


