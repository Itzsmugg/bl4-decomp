// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142895852 Unwind@142895852 body=95 status=ok
// SIG undefined Unwind@142895852(void)

void Unwind_142895852(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428958b2 Unwind@1428958b2 body=95 status=ok
// SIG undefined Unwind@1428958b2(void)

void Unwind_1428958b2(undefined8 param_1,longlong param_2)

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



// FUNCTION 142895912 Unwind@142895912 body=67 status=ok
// SIG undefined Unwind@142895912(void)

void Unwind_142895912(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x110);
  return;
}



// FUNCTION 142895956 Unwind@142895956 body=67 status=ok
// SIG undefined Unwind@142895956(void)

void Unwind_142895956(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 14289599a Unwind@14289599a body=38 status=ok
// SIG undefined Unwind@14289599a(void)

void Unwind_14289599a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428959c2 Unwind@1428959c2 body=130 status=ok
// SIG undefined Unwind@1428959c2(void)

void Unwind_1428959c2(undefined8 param_1,longlong param_2)

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



// FUNCTION 142895a44 Unwind@142895a44 body=73 status=ok
// SIG undefined Unwind@142895a44(void)

void Unwind_142895a44(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xb0);
  FUN_14698d9aa(param_2 + 0xf8);
  return;
}



// FUNCTION 142895a8e FUN_142895a8e body=3585 status=ok
// SIG undefined FUN_142895a8e(void)

void FUN_142895a8e(longlong *param_1)

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
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong *local_1b8;
  undefined4 *local_1b0;
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
  local_1c8 = (undefined4)param_1[0x13];
  uStack_1c4 = *(undefined4 *)((longlong)param_1 + 0x9c);
  uStack_1c0 = (undefined4)param_1[0x14];
  uStack_1bc = *(undefined4 *)((longlong)param_1 + 0xa4);
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
    if (iVar6 != 1) goto LAB_142895bd4;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_142895bd4;
  }
  uVar7 = 1;
LAB_142895bd4:
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
  if (local_138 < (ulonglong)bVar26 * param_1[0x11] * (longlong)(int)uVar20) {
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
          if (puVar15 != (uint *)0x0) goto LAB_14289646e;
LAB_14289640b:
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
LAB_14289646e:
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
              *puVar16 = &PTR_LAB_149ef6bc0;
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
                if (local_128 != 0) goto LAB_1428965f4;
              }
              else {
                puVar17[0x16] = &LAB_146990db6;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428965f4:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_142896627;
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
LAB_142896627:
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
              goto LAB_142896744;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_14289640b;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
LAB_1428967e3:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        break;
      }
      uVar24 = 0;
LAB_142895cc1:
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
          if (puVar15 != (uint *)0x0) goto LAB_142895f03;
LAB_142895e9c:
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
LAB_142895f03:
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
              *puVar16 = &PTR_LAB_149ef6ba0;
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
                if (local_128 != 0) goto LAB_14289608c;
              }
              else {
                puVar17[0x16] = &LAB_146990b4e;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_14289608c:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428960bf;
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
LAB_1428960bf:
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
              goto LAB_142895cc1;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_142895e9c;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
        goto LAB_1428967e3;
      }
LAB_142896744:
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



// FUNCTION 142896890 Unwind@142896890 body=38 status=ok
// SIG undefined Unwind@142896890(void)

void Unwind_142896890(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428968b8 Unwind@1428968b8 body=193 status=ok
// SIG undefined Unwind@1428968b8(void)

void Unwind_1428968b8(undefined8 param_1,longlong param_2)

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



// FUNCTION 14289697a Unwind@14289697a body=83 status=ok
// SIG undefined Unwind@14289697a(void)

void Unwind_14289697a(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428969ce Unwind@1428969ce body=83 status=ok
// SIG undefined Unwind@1428969ce(void)

void Unwind_1428969ce(undefined8 param_1,longlong param_2)

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



// FUNCTION 142896a22 Unwind@142896a22 body=67 status=ok
// SIG undefined Unwind@142896a22(void)

void Unwind_142896a22(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x138);
  return;
}



// FUNCTION 142896a66 Unwind@142896a66 body=67 status=ok
// SIG undefined Unwind@142896a66(void)

void Unwind_142896a66(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 142896aaa Unwind@142896aaa body=38 status=ok
// SIG undefined Unwind@142896aaa(void)

void Unwind_142896aaa(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142896ad2 Unwind@142896ad2 body=193 status=ok
// SIG undefined Unwind@142896ad2(void)

void Unwind_142896ad2(undefined8 param_1,longlong param_2)

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



// FUNCTION 142896b94 Unwind@142896b94 body=95 status=ok
// SIG undefined Unwind@142896b94(void)

void Unwind_142896b94(undefined8 param_1,longlong param_2)

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



// FUNCTION 142896bf4 Unwind@142896bf4 body=95 status=ok
// SIG undefined Unwind@142896bf4(void)

void Unwind_142896bf4(undefined8 param_1,longlong param_2)

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



// FUNCTION 142896c54 Unwind@142896c54 body=67 status=ok
// SIG undefined Unwind@142896c54(void)

void Unwind_142896c54(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  return;
}



// FUNCTION 142896c98 Unwind@142896c98 body=67 status=ok
// SIG undefined Unwind@142896c98(void)

void Unwind_142896c98(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 142896cdc Unwind@142896cdc body=38 status=ok
// SIG undefined Unwind@142896cdc(void)

void Unwind_142896cdc(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142896d04 Unwind@142896d04 body=130 status=ok
// SIG undefined Unwind@142896d04(void)

void Unwind_142896d04(undefined8 param_1,longlong param_2)

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



// FUNCTION 142896d86 Unwind@142896d86 body=76 status=ok
// SIG undefined Unwind@142896d86(void)

void Unwind_142896d86(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 142896dd2 Unwind@142896dd2 body=76 status=ok
// SIG undefined Unwind@142896dd2(void)

void Unwind_142896dd2(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 142896e1e FUN_142896e1e body=2838 status=ok
// SIG undefined FUN_142896e1e(void)

void FUN_142896e1e(longlong ******param_1,undefined1 param_2)

{
  longlong *******ppppppplVar1;
  int *piVar2;
  undefined8 *puVar3;
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
  int iVar25;
  undefined1 uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  undefined4 in_stack_fffffffffffffdd0;
  undefined2 uVar31;
  undefined1 local_218 [48];
  undefined8 local_1e8;
  undefined4 local_1e0 [2];
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
  int local_9c;
  longlong ******local_98;
  longlong ******pppppplStack_90;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined8 *local_70;
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
  ppppplVar4 = param_1[0xe];
  FUN_14698abc6(local_218,ppppplVar4);
  local_1e8 = 0;
  local_1e0[0] = 0;
  local_1e8 = FUN_144b77940(ppppplVar4);
  FUN_144b77e20(ppppplVar4,0x100,local_1e0);
  local_1d0 = (longlong *****)&local_170;
  local_1c4 = local_7c;
  local_1c0 = local_74;
  local_1b8 = local_218;
  uVar27 = 1;
  if (sVar8 == 2) {
    uVar27 = (uint)*(ushort *)((longlong)param_1 + 0x7e);
  }
  local_1d8 = (longlong *****)param_1;
  local_1c8 = param_2;
  local_1c7 = uVar26;
  local_1c6 = bVar23;
  local_61 = param_2;
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
    if (iVar11 != 1) goto LAB_142897034;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_142897034;
  }
  uVar30 = 1;
LAB_142897034:
  local_1a8 = FUN_144b7ac40(param_1[0xe]);
  if (local_1a8 < (ulonglong)(longlong)(int)((uint)bVar23 * local_74 * local_7c) >> 3) {
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
    if ((int)local_178._4_4_ < iVar11) {
      FUN_14473dbc4(local_1a0,iVar11);
    }
    local_c4 = uVar27 & 0xff;
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar16 + 0x308);
    local_c0 = (undefined8 *)(lVar16 + 0x310);
    local_120 = (int *)(lVar16 + 0xc60);
    for (local_128 = 0; local_c8 = (uint)local_128 & 0xff, local_c8 < local_c4;
        local_128 = CONCAT71((int7)((ulonglong)local_128 >> 8),(char)local_128 + '\x01')) {
      local_9c = 0;
      for (iVar11 = 0; ppppplVar4 = param_1[0x12], (longlong)iVar11 < (longlong)ppppplVar4;
          iVar11 = iVar11 + local_74) {
        iVar7 = (int)ppppplVar4 - iVar11;
        if ((longlong)(local_74 + iVar11) <= (longlong)ppppplVar4) {
          iVar7 = local_74;
        }
        iVar25 = 0;
        iVar24 = 0;
LAB_142897139:
        uVar31 = (undefined2)((uint)in_stack_fffffffffffffdd0 >> 0x10);
        if ((longlong)iVar25 < (longlong)param_1[0x11]) {
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
              ppppppplVar1 = (longlong *******)(pppppplStack_90 + 1);
              *(int *)ppppppplVar1 = *(int *)ppppppplVar1 + -1;
              UNLOCK();
              if (*(int *)ppppppplVar1 == 0) {
                pppppplVar5 = (longlong ******)*pppppplStack_90;
                pppppplStack_90 = (longlong ******)ppppppplVar15;
                (*(code *)*pppppplVar5)(pppppplVar6);
                LOCK();
                piVar2 = (int *)((longlong)pppppplVar6 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                ppppppplVar9 = (longlong *******)pppppplStack_90;
                if (*piVar2 == 0) {
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
          in_stack_fffffffffffffdd0 = CONCAT22(uVar31,(short)local_c8);
          lVar16 = FUN_144b82d60(param_1[0xe],*local_98,iVar25,iVar11,0,in_stack_fffffffffffffdd0);
          if (-1 < lVar16) {
            local_150 = (int)param_1[0x11] - iVar25;
            if ((longlong)(local_7c + iVar25) <= (longlong)param_1[0x11]) {
              local_150 = local_7c;
            }
            local_160 = &local_b8;
            local_148 = local_98;
            pppppplStack_140 = pppppplStack_90;
            if ((longlong *******)pppppplStack_90 != (longlong *******)0x0) {
              LOCK();
              *(int *)(pppppplStack_90 + 1) = *(int *)(pppppplStack_90 + 1) + 1;
              UNLOCK();
            }
            local_138 = CONCAT31(local_138._1_3_,(char)local_128);
            local_130 = local_9c;
            puVar18 = (uint *)*puVar3;
            pppppplStack_158 = &local_1d8;
            iStack_14c = iVar7;
            iStack_134 = iVar24;
            if (puVar18 != (uint *)0x0) goto LAB_14289739a;
LAB_14289732e:
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
            *puVar3 = puVar17;
            FUN_140217a48(puVar3);
            puVar18 = (uint *)*puVar3;
LAB_14289739a:
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
                *puVar19 = &PTR_LAB_149ef6ce0;
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
                  if (local_118 != 0) goto LAB_14289753e;
                }
                else {
                  puVar20[0x16] = &LAB_146990ea6;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_14289753e:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_142897577;
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
LAB_142897577:
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
                iVar25 = iVar25 + local_7c;
                iVar24 = iVar24 + 1;
                goto LAB_142897139;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_14289732e;
              puVar18 = (uint *)*puVar3;
              *puVar18 = 0xffffffff;
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
              puVar18[0x12] = 0;
              *puVar3 = puVar18;
              uVar29 = (longlong)puVar18 + 0x67;
              uVar27 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0xb,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_98);
          uVar30 = local_78;
          goto LAB_1428977ae;
        }
        local_9c = local_9c + 1;
      }
    }
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
    local_160 = (longlong ******)&LAB_146991188;
    pppppplStack_158 = (longlong ******)&local_98;
    FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
    uVar30 = local_78;
  }
LAB_1428977ae:
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



// FUNCTION 142897934 Unwind@142897934 body=38 status=ok
// SIG undefined Unwind@142897934(void)

void Unwind_142897934(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14289795c Unwind@14289795c body=196 status=ok
// SIG undefined Unwind@14289795c(void)

void Unwind_14289795c(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1e8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xa8) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 0x198);
        **(undefined8 **)(param_2 + 0x198) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 142897a20 Unwind@142897a20 body=95 status=ok
// SIG undefined Unwind@142897a20(void)

void Unwind_142897a20(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1e8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1e8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1e8))(*(undefined8 **)(param_2 + 0x1e8),1);
    }
  }
  return;
}



// FUNCTION 142897a80 Unwind@142897a80 body=95 status=ok
// SIG undefined Unwind@142897a80(void)

void Unwind_142897a80(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1e8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1e8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1e8))(*(undefined8 **)(param_2 + 0x1e8),1);
    }
  }
  return;
}



// FUNCTION 142897ae0 Unwind@142897ae0 body=67 status=ok
// SIG undefined Unwind@142897ae0(void)

void Unwind_142897ae0(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x110);
  return;
}



// FUNCTION 142897b24 Unwind@142897b24 body=67 status=ok
// SIG undefined Unwind@142897b24(void)

void Unwind_142897b24(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x1c0);
  return;
}



// FUNCTION 142897b68 Unwind@142897b68 body=131 status=ok
// SIG undefined Unwind@142897b68(void)

void Unwind_142897b68(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0xb8,*(undefined4 *)(param_2 + 0x1e0));
  FUN_14588b8d6(param_2 + 0xb8);
  while (puVar1 = *(undefined8 **)(param_2 + 0x1a8), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x1a8) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 142897bec Unwind@142897bec body=76 status=ok
// SIG undefined Unwind@142897bec(void)

void Unwind_142897bec(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x140);
  FUN_14698d9aa(param_2 + 0xf8);
  return;
}



// FUNCTION 142897c38 Unwind@142897c38 body=38 status=ok
// SIG undefined Unwind@142897c38(void)

void Unwind_142897c38(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142897c60 FUN_142897c60 body=4173 status=ok
// SIG undefined FUN_142897c60(void)

void FUN_142897c60(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  short sVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  byte bVar26;
  longlong lVar27;
  undefined1 local_1f8 [48];
  undefined8 local_1c8;
  undefined4 local_1c0 [2];
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a7;
  byte local_1a6;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 *local_198;
  longlong local_190;
  longlong local_188;
  ulonglong local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  short local_146;
  uint local_144;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  undefined8 *local_128;
  longlong *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  uint local_108;
  undefined4 uStack_104;
  longlong *plStack_100;
  longlong *plStack_f8;
  int local_f0;
  undefined1 local_ec;
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
  longlong *local_a8;
  longlong *local_a0;
  int *local_98;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  ushort local_72;
  undefined8 *local_70;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_190 = FUN_144b77940(param_1[0xe]);
  local_130 = FUN_144b77ad0(param_1[0xe]);
  local_188 = param_1[0x13];
  local_180 = (ulonglong)param_1[0x14] >> 1;
  local_146 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_146);
  sVar4 = local_146;
  bVar26 = 1;
  local_98 = (int *)CONCAT44(local_98._4_4_,1);
  local_1a7 = param_2;
  if (local_146 != 2) {
    bVar26 = *(byte *)((longlong)param_1 + 0x7e);
    local_1a7 = 1;
  }
  local_70 = (undefined8 *)CONCAT44(local_70._4_4_,(int)param_1[0x11]);
  local_138 = CONCAT44(local_138._4_4_,(int)param_1[0x12]);
  lVar14 = param_1[0xe];
  local_61 = param_2;
  FUN_14698abc6(local_1f8,lVar14);
  local_1c8 = 0;
  local_1c0[0] = 0;
  local_1c8 = FUN_144b77940(lVar14);
  FUN_144b77e20(lVar14,0x100,local_1c0);
  local_1b0 = &local_188;
  local_1a8 = local_61;
  local_1a4 = local_70._0_4_;
  local_1a0 = (undefined4)local_138;
  if (sVar4 == 2) {
    local_98 = (int *)CONCAT44(local_98._4_4_,(uint)*(ushort *)((longlong)param_1 + 0x7e));
  }
  local_1b8 = param_1;
  local_1a6 = bVar26;
  local_198 = local_1f8;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar7 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar7 != 2)) {
    uVar8 = 0xff;
    if (iVar7 != 1) goto LAB_142897e27;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_142897e27;
  }
  uVar8 = 1;
LAB_142897e27:
  local_72 = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_72);
  uVar12 = (ulonglong)local_72;
  uVar25 = param_1[0x12];
  uVar21 = uVar12;
  if ((longlong)uVar25 < (longlong)uVar12) {
    uVar21 = uVar25;
  }
  if (uVar12 == 0) {
    uVar21 = uVar25;
  }
  if (local_130 < (ulonglong)bVar26 * param_1[0x11] * (longlong)(int)uVar21 >> 3) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar8;
    iVar7 = FUN_144b77d80(param_1[0xe]);
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if ((int)local_150._4_4_ < iVar7) {
      FUN_14473dbc4(local_178,iVar7);
    }
    local_144 = (uint)(byte)local_98;
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    local_128 = (undefined8 *)(lVar14 + 0x310);
    local_98 = (int *)(lVar14 + 0xc60);
    uVar25 = 0;
    while( true ) {
      uVar21 = uVar25 & 0xff;
      if (local_144 <= (uint)uVar21) break;
      local_138 = uVar25;
      if (local_72 == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar6 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar6 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_120 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_118._0_4_ = SUB84(local_e0,0);
          uStack_118._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar13 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_120;
          plVar5 = plStack_80;
          if ((plVar13 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar5 = plVar13, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar13;
              (*(code *)*puVar18)(plVar20);
              LOCK();
              piVar2 = (int *)((longlong)plVar20 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar5 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar5 = plStack_80;
              }
            }
          }
          plStack_80 = plVar5;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_120);
          lVar14 = local_88[1];
          local_88[1] = lVar14 + local_130;
          if ((ulonglong)(local_88[2] - lVar14) < local_130) {
            FUN_14112c458();
          }
        }
        lVar14 = FUN_144b82e30(param_1[0xe],uVar21,*local_88,local_130);
        puVar18 = local_128;
        if (lVar14 != -1) {
          uStack_118 = &local_a8;
          local_108 = (uint)local_88;
          uStack_104 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_100 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_f8 = (longlong *)CONCAT71(plStack_f8._1_7_,(char)uVar25);
          puVar16 = (uint *)*puVar3;
          local_120 = param_1;
          local_110 = &local_1b8;
          if (puVar16 != (uint *)0x0) goto LAB_142898743;
LAB_1428986de:
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar15 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar3 = puVar15;
          FUN_140217a48(puVar3);
          puVar16 = (uint *)*puVar3;
LAB_142898743:
          uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
          uVar23 = puVar16[0x12];
          do {
            puVar17 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
            if (puVar17 + 0x20 <= puVar16 + 0x4000) {
              *(undefined8 **)(puVar16 + 0x10) = puVar17 + 0x20;
              puVar16[0x12] = uVar23 + 1;
              local_140 = uVar25;
              local_70 = puVar17;
              FUN_1447247dc(puVar17,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar17 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar17 = &PTR_LAB_149ef6d20;
              puVar17[1] = local_120;
              puVar17[2] = uStack_118;
              puVar17[3] = local_110;
              puVar17[4] = CONCAT44(uStack_104,local_108);
              puVar17[5] = plStack_100;
              local_108 = 0;
              uStack_104 = 0;
              plStack_100 = (longlong *)0x0;
              *(undefined1 *)(puVar17 + 6) = plStack_f8._0_1_;
              if (puVar17 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_1428988e0;
              }
              else {
                puVar18[0x16] = &LAB_146991448;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428988e0:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_98 != 2)) {
                uVar25 = 0x8ff;
                if (*local_98 != 1) goto LAB_142898919;
                DVar10 = FUN_140ad26c0();
                DVar11 = GetCurrentThreadId();
                uVar23 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                uVar25 = (ulonglong)uVar23;
                *(uint *)(puVar18 + 0x1e) = uVar23;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar25 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar25 = 0x6ff;
LAB_142898919:
                *(int *)(puVar18 + 0x1e) = (int)uVar25;
              }
              uVar23 = (uint)uVar25;
              if ((uVar23 & 0xff) == 0xff) {
                uVar9 = (uint)(uVar25 >> 10) & 3;
                iVar7 = 0;
                if ((uVar23 >> 9 & 1) == 0 || uVar9 < 2) {
                  uVar22 = (&DAT_149e38edc)[uVar9];
                }
                else {
                  uVar22 = 2;
                }
              }
              else {
                iVar7 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                uVar22 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar7,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              iVar7 = (int)local_150;
              uVar25 = local_150 & 0xffffffff;
              uVar23 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar23);
              if (local_150._4_4_ < uVar23) {
                FUN_14476a5c8(local_178,uVar25);
              }
              puVar19 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar19 = local_178;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar7 * 8) = local_70;
              FUN_14698d952(&local_108);
              FUN_14698d952(&local_88);
              goto LAB_142898a3e;
            }
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar9 = *puVar16;
            *puVar16 = *puVar16 + uVar23 + 1;
            UNLOCK();
            if ((uVar9 ^ uVar23) != 0xffffffff) goto LAB_1428986de;
            puVar16 = (uint *)*puVar3;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar3 = puVar16;
            uVar25 = (longlong)puVar16 + 0x67;
            uVar23 = 0;
          } while( true );
        }
LAB_142898ae9:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar8 = local_8c;
        goto LAB_142898b0e;
      }
      uVar25 = 0;
LAB_142897f28:
      iVar7 = (int)uVar25;
      if ((longlong)uVar25 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar6 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar6 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_120 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_118._0_4_ = SUB84(local_e0,0);
          uStack_118._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar13 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_120;
          plVar5 = plStack_80;
          if ((plVar13 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar5 = plVar13, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar13;
              (*(code *)*puVar18)(plVar20);
              LOCK();
              piVar2 = (int *)((longlong)plVar20 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar5 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar5 = plStack_80;
              }
            }
          }
          plStack_80 = plVar5;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_120);
          lVar14 = local_88[1];
          local_88[1] = lVar14 + local_130;
          if ((ulonglong)(local_88[2] - lVar14) < local_130) {
            FUN_14112c458();
          }
        }
        uVar23 = (int)param_1[0x12] - iVar7;
        if ((longlong)(ulonglong)(iVar7 + (uint)local_72) <= param_1[0x12]) {
          uVar23 = (uint)local_72;
        }
        lVar14 = *local_88;
        lVar27 = (int)uVar23 * local_190;
        uVar8 = FUN_144b77d20(param_1[0xe],uVar25,uVar21);
        lVar14 = FUN_144b82e30(param_1[0xe],uVar8,lVar14,lVar27);
        if (lVar14 != -1) {
          local_110 = &local_a8;
          plStack_100 = local_88;
          plStack_f8 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_ec = (undefined1)local_138;
          puVar16 = (uint *)*puVar3;
          local_120 = param_1;
          local_108 = uVar23;
          local_f0 = iVar7;
          uStack_118 = &local_1b8;
          if (puVar16 != (uint *)0x0) goto LAB_14289818a;
LAB_14289811e:
          puVar18 = local_128;
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar15 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar3 = puVar15;
          FUN_140217a48(puVar3);
          puVar16 = (uint *)*puVar3;
LAB_14289818a:
          uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
          uVar23 = puVar16[0x12];
          do {
            puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
            if (puVar18 + 0x20 <= puVar16 + 0x4000) {
              *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
              puVar16[0x12] = uVar23 + 1;
              local_140 = uVar25;
              local_70 = puVar18;
              FUN_1447247dc(puVar18,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar17 = &PTR_LAB_149ef6d00;
              puVar17[1] = local_120;
              puVar17[2] = uStack_118;
              *(ulonglong *)((longlong)puVar17 + 0x14) =
                   CONCAT44((undefined4)local_110,uStack_118._4_4_);
              *(ulonglong *)((longlong)puVar17 + 0x1c) = CONCAT44(local_108,local_110._4_4_);
              puVar17[5] = plStack_100;
              puVar17[6] = plStack_f8;
              plStack_100 = (longlong *)0x0;
              plStack_f8 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar17 + 0x3c) = local_ec;
              *(int *)(puVar17 + 7) = local_f0;
              if (puVar17 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_14289832a;
              }
              else {
                puVar18[0x16] = &LAB_1469911a4;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_14289832a:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_98 != 2)) {
                uVar25 = 0x8ff;
                if (*local_98 != 1) goto LAB_142898363;
                DVar10 = FUN_140ad26c0();
                DVar11 = GetCurrentThreadId();
                uVar23 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                uVar25 = (ulonglong)uVar23;
                *(uint *)(puVar18 + 0x1e) = uVar23;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar25 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar25 = 0x6ff;
LAB_142898363:
                *(int *)(puVar18 + 0x1e) = (int)uVar25;
              }
              uVar23 = (uint)uVar25;
              if ((uVar23 & 0xff) == 0xff) {
                uVar9 = (uint)(uVar25 >> 10) & 3;
                iVar24 = 0;
                if ((uVar23 >> 9 & 1) == 0 || uVar9 < 2) {
                  uVar22 = (&DAT_149e38edc)[uVar9];
                }
                else {
                  uVar22 = 2;
                }
              }
              else {
                iVar24 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                         *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                uVar22 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar24,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              uVar25 = local_150;
              iVar24 = (int)local_150;
              uVar23 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar23);
              if (local_150._4_4_ < uVar23) {
                FUN_14476a5c8(local_178,uVar25 & 0xffffffff);
              }
              puVar19 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar19 = local_178;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = local_70;
              FUN_14698d952(&plStack_100);
              FUN_14698d952(&local_88);
              uVar25 = (ulonglong)(iVar7 + (uint)local_72);
              goto LAB_142897f28;
            }
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar9 = *puVar16;
            *puVar16 = *puVar16 + uVar23 + 1;
            UNLOCK();
            if ((uVar9 ^ uVar23) != 0xffffffff) goto LAB_14289811e;
            puVar16 = (uint *)*puVar3;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar3 = puVar16;
            uVar25 = (longlong)puVar16 + 0x67;
            uVar23 = 0;
          } while( true );
        }
        goto LAB_142898ae9;
      }
LAB_142898a3e:
      uVar25 = CONCAT71((int7)(local_138 >> 8),(char)local_138 + '\x01');
    }
    (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,local_8c);
    FUN_14698da02();
    if ((DAT_14c86a9f8 == '\x01') && (*local_98 != 2)) {
      if (*local_98 == 1) {
        FUN_140ad26c0();
        GetCurrentThreadId();
        local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
      }
      else {
        local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
      }
    }
    else {
      local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
    }
    plStack_80 = &local_188;
    local_e8 = 0;
    local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
    local_120 = (longlong *)&LAB_14699152a;
    uStack_118 = &local_88;
    FUN_1401f8d10(L"ParallelFor Task",(int)param_1[0x12] * (int)param_1[0x11],1);
    uVar8 = local_8c;
  }
LAB_142898b0e:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,uVar8);
  FUN_14588b8d6(local_178);
  while (plVar20 = local_a0, local_a0 != (longlong *)0x0) {
    plVar13 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar13);
    FUN_1400020a8(plVar20);
  }
  return;
}



// FUNCTION 142898cae Unwind@142898cae body=38 status=ok
// SIG undefined Unwind@142898cae(void)

void Unwind_142898cae(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142898cd6 Unwind@142898cd6 body=196 status=ok
// SIG undefined Unwind@142898cd6(void)

void Unwind_142898cd6(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xf8) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 0x110);
        **(undefined8 **)(param_2 + 0x110) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 142898d9a Unwind@142898d9a body=83 status=ok
// SIG undefined Unwind@142898d9a(void)

void Unwind_142898d9a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1c8);
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



// FUNCTION 142898dee Unwind@142898dee body=83 status=ok
// SIG undefined Unwind@142898dee(void)

void Unwind_142898dee(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1c8);
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



// FUNCTION 142898e42 Unwind@142898e42 body=67 status=ok
// SIG undefined Unwind@142898e42(void)

void Unwind_142898e42(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x138);
  return;
}



// FUNCTION 142898e86 Unwind@142898e86 body=67 status=ok
// SIG undefined Unwind@142898e86(void)

void Unwind_142898e86(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x1b0);
  return;
}



// FUNCTION 142898eca Unwind@142898eca body=38 status=ok
// SIG undefined Unwind@142898eca(void)

void Unwind_142898eca(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142898ef2 Unwind@142898ef2 body=196 status=ok
// SIG undefined Unwind@142898ef2(void)

void Unwind_142898ef2(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xf8) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 0x110);
        **(undefined8 **)(param_2 + 0x110) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 142898fb6 Unwind@142898fb6 body=95 status=ok
// SIG undefined Unwind@142898fb6(void)

void Unwind_142898fb6(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1c8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1c8))(*(undefined8 **)(param_2 + 0x1c8),1);
    }
  }
  return;
}



// FUNCTION 142899016 Unwind@142899016 body=95 status=ok
// SIG undefined Unwind@142899016(void)

void Unwind_142899016(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1c8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1c8))(*(undefined8 **)(param_2 + 0x1c8),1);
    }
  }
  return;
}



// FUNCTION 142899076 Unwind@142899076 body=67 status=ok
// SIG undefined Unwind@142899076(void)

void Unwind_142899076(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  return;
}



// FUNCTION 1428990ba Unwind@1428990ba body=67 status=ok
// SIG undefined Unwind@1428990ba(void)

void Unwind_1428990ba(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x1b0);
  return;
}



// FUNCTION 1428990fe Unwind@1428990fe body=131 status=ok
// SIG undefined Unwind@1428990fe(void)

void Unwind_1428990fe(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0xc0,*(undefined4 *)(param_2 + 0x1ac));
  FUN_14588b8d6(param_2 + 0xc0);
  while (puVar1 = *(undefined8 **)(param_2 + 0x198), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x198) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 142899182 Unwind@142899182 body=79 status=ok
// SIG undefined Unwind@142899182(void)

void Unwind_142899182(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x150);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428991d2 Unwind@1428991d2 body=79 status=ok
// SIG undefined Unwind@1428991d2(void)

void Unwind_1428991d2(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x150);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 142899222 Unwind@142899222 body=38 status=ok
// SIG undefined Unwind@142899222(void)

void Unwind_142899222(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14289924a FUN_14289924a body=2838 status=ok
// SIG undefined FUN_14289924a(void)

void FUN_14289924a(longlong ******param_1,undefined1 param_2)

{
  longlong *******ppppppplVar1;
  int *piVar2;
  undefined8 *puVar3;
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
  int iVar25;
  undefined1 uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  undefined4 in_stack_fffffffffffffdd0;
  undefined2 uVar31;
  undefined1 local_218 [48];
  undefined8 local_1e8;
  undefined4 local_1e0 [2];
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
  int local_9c;
  longlong ******local_98;
  longlong ******pppppplStack_90;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined8 *local_70;
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
  ppppplVar4 = param_1[0xe];
  FUN_14698abc6(local_218,ppppplVar4);
  local_1e8 = 0;
  local_1e0[0] = 0;
  local_1e8 = FUN_144b77940(ppppplVar4);
  FUN_144b77e20(ppppplVar4,0x100,local_1e0);
  local_1d0 = (longlong *****)&local_170;
  local_1c4 = local_7c;
  local_1c0 = local_74;
  local_1b8 = local_218;
  uVar27 = 1;
  if (sVar8 == 2) {
    uVar27 = (uint)*(ushort *)((longlong)param_1 + 0x7e);
  }
  local_1d8 = (longlong *****)param_1;
  local_1c8 = param_2;
  local_1c7 = uVar26;
  local_1c6 = bVar23;
  local_61 = param_2;
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
    if (iVar11 != 1) goto LAB_142899460;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_142899460;
  }
  uVar30 = 1;
LAB_142899460:
  local_1a8 = FUN_144b7ac40(param_1[0xe]);
  if (local_1a8 < (ulonglong)(longlong)(int)((uint)bVar23 * local_74 * local_7c) >> 2) {
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
    if ((int)local_178._4_4_ < iVar11) {
      FUN_14473dbc4(local_1a0,iVar11);
    }
    local_c4 = uVar27 & 0xff;
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar16 + 0x308);
    local_c0 = (undefined8 *)(lVar16 + 0x310);
    local_120 = (int *)(lVar16 + 0xc60);
    for (local_128 = 0; local_c8 = (uint)local_128 & 0xff, local_c8 < local_c4;
        local_128 = CONCAT71((int7)((ulonglong)local_128 >> 8),(char)local_128 + '\x01')) {
      local_9c = 0;
      for (iVar11 = 0; ppppplVar4 = param_1[0x12], (longlong)iVar11 < (longlong)ppppplVar4;
          iVar11 = iVar11 + local_74) {
        iVar7 = (int)ppppplVar4 - iVar11;
        if ((longlong)(local_74 + iVar11) <= (longlong)ppppplVar4) {
          iVar7 = local_74;
        }
        iVar25 = 0;
        iVar24 = 0;
LAB_142899565:
        uVar31 = (undefined2)((uint)in_stack_fffffffffffffdd0 >> 0x10);
        if ((longlong)iVar25 < (longlong)param_1[0x11]) {
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
              ppppppplVar1 = (longlong *******)(pppppplStack_90 + 1);
              *(int *)ppppppplVar1 = *(int *)ppppppplVar1 + -1;
              UNLOCK();
              if (*(int *)ppppppplVar1 == 0) {
                pppppplVar5 = (longlong ******)*pppppplStack_90;
                pppppplStack_90 = (longlong ******)ppppppplVar15;
                (*(code *)*pppppplVar5)(pppppplVar6);
                LOCK();
                piVar2 = (int *)((longlong)pppppplVar6 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                ppppppplVar9 = (longlong *******)pppppplStack_90;
                if (*piVar2 == 0) {
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
          in_stack_fffffffffffffdd0 = CONCAT22(uVar31,(short)local_c8);
          lVar16 = FUN_144b82d60(param_1[0xe],*local_98,iVar25,iVar11,0,in_stack_fffffffffffffdd0);
          if (-1 < lVar16) {
            local_150 = (int)param_1[0x11] - iVar25;
            if ((longlong)(local_7c + iVar25) <= (longlong)param_1[0x11]) {
              local_150 = local_7c;
            }
            local_160 = &local_b8;
            local_148 = local_98;
            pppppplStack_140 = pppppplStack_90;
            if ((longlong *******)pppppplStack_90 != (longlong *******)0x0) {
              LOCK();
              *(int *)(pppppplStack_90 + 1) = *(int *)(pppppplStack_90 + 1) + 1;
              UNLOCK();
            }
            local_138 = CONCAT31(local_138._1_3_,(char)local_128);
            local_130 = local_9c;
            puVar18 = (uint *)*puVar3;
            pppppplStack_158 = &local_1d8;
            iStack_14c = iVar7;
            iStack_134 = iVar24;
            if (puVar18 != (uint *)0x0) goto LAB_1428997c6;
LAB_14289975a:
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
            *puVar3 = puVar17;
            FUN_140217a48(puVar3);
            puVar18 = (uint *)*puVar3;
LAB_1428997c6:
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
                *puVar19 = &PTR_LAB_149ef6d40;
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
                  if (local_118 != 0) goto LAB_14289996a;
                }
                else {
                  puVar20[0x16] = &LAB_146991546;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_14289996a:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_1428999a3;
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
LAB_1428999a3:
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
                iVar25 = iVar25 + local_7c;
                iVar24 = iVar24 + 1;
                goto LAB_142899565;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_14289975a;
              puVar18 = (uint *)*puVar3;
              *puVar18 = 0xffffffff;
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
              puVar18[0x12] = 0;
              *puVar3 = puVar18;
              uVar29 = (longlong)puVar18 + 0x67;
              uVar27 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0xb,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_98);
          uVar30 = local_78;
          goto LAB_142899bda;
        }
        local_9c = local_9c + 1;
      }
    }
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
    local_160 = (longlong ******)&LAB_146991828;
    pppppplStack_158 = (longlong ******)&local_98;
    FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
    uVar30 = local_78;
  }
LAB_142899bda:
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



// FUNCTION 142899d60 Unwind@142899d60 body=38 status=ok
// SIG undefined Unwind@142899d60(void)

void Unwind_142899d60(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 142899d88 Unwind@142899d88 body=196 status=ok
// SIG undefined Unwind@142899d88(void)

void Unwind_142899d88(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1e8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xa8) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 0x198);
        **(undefined8 **)(param_2 + 0x198) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 142899e4c Unwind@142899e4c body=95 status=ok
// SIG undefined Unwind@142899e4c(void)

void Unwind_142899e4c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1e8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1e8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1e8))(*(undefined8 **)(param_2 + 0x1e8),1);
    }
  }
  return;
}



// FUNCTION 142899eac Unwind@142899eac body=95 status=ok
// SIG undefined Unwind@142899eac(void)

void Unwind_142899eac(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1e8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1e8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1e8))(*(undefined8 **)(param_2 + 0x1e8),1);
    }
  }
  return;
}



// FUNCTION 142899f0c Unwind@142899f0c body=67 status=ok
// SIG undefined Unwind@142899f0c(void)

void Unwind_142899f0c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x110);
  return;
}



// FUNCTION 142899f50 Unwind@142899f50 body=67 status=ok
// SIG undefined Unwind@142899f50(void)

void Unwind_142899f50(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x1c0);
  return;
}



// FUNCTION 142899f94 Unwind@142899f94 body=131 status=ok
// SIG undefined Unwind@142899f94(void)

void Unwind_142899f94(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0xb8,*(undefined4 *)(param_2 + 0x1e0));
  FUN_14588b8d6(param_2 + 0xb8);
  while (puVar1 = *(undefined8 **)(param_2 + 0x1a8), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x1a8) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 14289a018 Unwind@14289a018 body=76 status=ok
// SIG undefined Unwind@14289a018(void)

void Unwind_14289a018(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x140);
  FUN_14698d9aa(param_2 + 0xf8);
  return;
}



// FUNCTION 14289a064 Unwind@14289a064 body=38 status=ok
// SIG undefined Unwind@14289a064(void)

void Unwind_14289a064(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14289a08c FUN_14289a08c body=4173 status=ok
// SIG undefined FUN_14289a08c(void)

void FUN_14289a08c(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  short sVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  byte bVar26;
  longlong lVar27;
  undefined1 local_1f8 [48];
  undefined8 local_1c8;
  undefined4 local_1c0 [2];
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a7;
  byte local_1a6;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 *local_198;
  longlong local_190;
  longlong local_188;
  ulonglong local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  short local_146;
  uint local_144;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  undefined8 *local_128;
  longlong *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  uint local_108;
  undefined4 uStack_104;
  longlong *plStack_100;
  longlong *plStack_f8;
  int local_f0;
  undefined1 local_ec;
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
  longlong *local_a8;
  longlong *local_a0;
  int *local_98;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  ushort local_72;
  undefined8 *local_70;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_190 = FUN_144b77940(param_1[0xe]);
  local_130 = FUN_144b77ad0(param_1[0xe]);
  local_188 = param_1[0x13];
  local_180 = (ulonglong)param_1[0x14] >> 1;
  local_146 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_146);
  sVar4 = local_146;
  bVar26 = 1;
  local_98 = (int *)CONCAT44(local_98._4_4_,1);
  local_1a7 = param_2;
  if (local_146 != 2) {
    bVar26 = *(byte *)((longlong)param_1 + 0x7e);
    local_1a7 = 1;
  }
  local_70 = (undefined8 *)CONCAT44(local_70._4_4_,(int)param_1[0x11]);
  local_138 = CONCAT44(local_138._4_4_,(int)param_1[0x12]);
  lVar14 = param_1[0xe];
  local_61 = param_2;
  FUN_14698abc6(local_1f8,lVar14);
  local_1c8 = 0;
  local_1c0[0] = 0;
  local_1c8 = FUN_144b77940(lVar14);
  FUN_144b77e20(lVar14,0x100,local_1c0);
  local_1b0 = &local_188;
  local_1a8 = local_61;
  local_1a4 = local_70._0_4_;
  local_1a0 = (undefined4)local_138;
  if (sVar4 == 2) {
    local_98 = (int *)CONCAT44(local_98._4_4_,(uint)*(ushort *)((longlong)param_1 + 0x7e));
  }
  local_1b8 = param_1;
  local_1a6 = bVar26;
  local_198 = local_1f8;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar7 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar7 != 2)) {
    uVar8 = 0xff;
    if (iVar7 != 1) goto LAB_14289a253;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_14289a253;
  }
  uVar8 = 1;
LAB_14289a253:
  local_72 = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_72);
  uVar12 = (ulonglong)local_72;
  uVar25 = param_1[0x12];
  uVar21 = uVar12;
  if ((longlong)uVar25 < (longlong)uVar12) {
    uVar21 = uVar25;
  }
  if (uVar12 == 0) {
    uVar21 = uVar25;
  }
  if (local_130 < (ulonglong)bVar26 * param_1[0x11] * (longlong)(int)uVar21 >> 2) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar8;
    iVar7 = FUN_144b77d80(param_1[0xe]);
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if ((int)local_150._4_4_ < iVar7) {
      FUN_14473dbc4(local_178,iVar7);
    }
    local_144 = (uint)(byte)local_98;
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    local_128 = (undefined8 *)(lVar14 + 0x310);
    local_98 = (int *)(lVar14 + 0xc60);
    uVar25 = 0;
    while( true ) {
      uVar21 = uVar25 & 0xff;
      if (local_144 <= (uint)uVar21) break;
      local_138 = uVar25;
      if (local_72 == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar6 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar6 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_120 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_118._0_4_ = SUB84(local_e0,0);
          uStack_118._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar13 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_120;
          plVar5 = plStack_80;
          if ((plVar13 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar5 = plVar13, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar13;
              (*(code *)*puVar18)(plVar20);
              LOCK();
              piVar2 = (int *)((longlong)plVar20 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar5 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar5 = plStack_80;
              }
            }
          }
          plStack_80 = plVar5;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_120);
          lVar14 = local_88[1];
          local_88[1] = lVar14 + local_130;
          if ((ulonglong)(local_88[2] - lVar14) < local_130) {
            FUN_14112c458();
          }
        }
        lVar14 = FUN_144b82e30(param_1[0xe],uVar21,*local_88,local_130);
        puVar18 = local_128;
        if (lVar14 != -1) {
          uStack_118 = &local_a8;
          local_108 = (uint)local_88;
          uStack_104 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_100 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_f8 = (longlong *)CONCAT71(plStack_f8._1_7_,(char)uVar25);
          puVar16 = (uint *)*puVar3;
          local_120 = param_1;
          local_110 = &local_1b8;
          if (puVar16 != (uint *)0x0) goto LAB_14289ab6f;
LAB_14289ab0a:
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar15 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar3 = puVar15;
          FUN_140217a48(puVar3);
          puVar16 = (uint *)*puVar3;
LAB_14289ab6f:
          uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
          uVar23 = puVar16[0x12];
          do {
            puVar17 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
            if (puVar17 + 0x20 <= puVar16 + 0x4000) {
              *(undefined8 **)(puVar16 + 0x10) = puVar17 + 0x20;
              puVar16[0x12] = uVar23 + 1;
              local_140 = uVar25;
              local_70 = puVar17;
              FUN_1447247dc(puVar17,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar17 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar17 = &PTR_LAB_149ef6d80;
              puVar17[1] = local_120;
              puVar17[2] = uStack_118;
              puVar17[3] = local_110;
              puVar17[4] = CONCAT44(uStack_104,local_108);
              puVar17[5] = plStack_100;
              local_108 = 0;
              uStack_104 = 0;
              plStack_100 = (longlong *)0x0;
              *(undefined1 *)(puVar17 + 6) = plStack_f8._0_1_;
              if (puVar17 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_14289ad0c;
              }
              else {
                puVar18[0x16] = &LAB_146991ae8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_14289ad0c:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_98 != 2)) {
                uVar25 = 0x8ff;
                if (*local_98 != 1) goto LAB_14289ad45;
                DVar10 = FUN_140ad26c0();
                DVar11 = GetCurrentThreadId();
                uVar23 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                uVar25 = (ulonglong)uVar23;
                *(uint *)(puVar18 + 0x1e) = uVar23;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar25 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar25 = 0x6ff;
LAB_14289ad45:
                *(int *)(puVar18 + 0x1e) = (int)uVar25;
              }
              uVar23 = (uint)uVar25;
              if ((uVar23 & 0xff) == 0xff) {
                uVar9 = (uint)(uVar25 >> 10) & 3;
                iVar7 = 0;
                if ((uVar23 >> 9 & 1) == 0 || uVar9 < 2) {
                  uVar22 = (&DAT_149e38edc)[uVar9];
                }
                else {
                  uVar22 = 2;
                }
              }
              else {
                iVar7 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                uVar22 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar7,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              iVar7 = (int)local_150;
              uVar25 = local_150 & 0xffffffff;
              uVar23 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar23);
              if (local_150._4_4_ < uVar23) {
                FUN_14476a5c8(local_178,uVar25);
              }
              puVar19 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar19 = local_178;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar7 * 8) = local_70;
              FUN_14698d952(&local_108);
              FUN_14698d952(&local_88);
              goto LAB_14289ae6a;
            }
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar9 = *puVar16;
            *puVar16 = *puVar16 + uVar23 + 1;
            UNLOCK();
            if ((uVar9 ^ uVar23) != 0xffffffff) goto LAB_14289ab0a;
            puVar16 = (uint *)*puVar3;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar3 = puVar16;
            uVar25 = (longlong)puVar16 + 0x67;
            uVar23 = 0;
          } while( true );
        }
LAB_14289af15:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar8 = local_8c;
        goto LAB_14289af3a;
      }
      uVar25 = 0;
LAB_14289a354:
      iVar7 = (int)uVar25;
      if ((longlong)uVar25 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar6 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar6 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_120 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_118._0_4_ = SUB84(local_e0,0);
          uStack_118._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar13 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_120;
          plVar5 = plStack_80;
          if ((plVar13 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar5 = plVar13, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar13;
              (*(code *)*puVar18)(plVar20);
              LOCK();
              piVar2 = (int *)((longlong)plVar20 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar5 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar5 = plStack_80;
              }
            }
          }
          plStack_80 = plVar5;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_120);
          lVar14 = local_88[1];
          local_88[1] = lVar14 + local_130;
          if ((ulonglong)(local_88[2] - lVar14) < local_130) {
            FUN_14112c458();
          }
        }
        uVar23 = (int)param_1[0x12] - iVar7;
        if ((longlong)(ulonglong)(iVar7 + (uint)local_72) <= param_1[0x12]) {
          uVar23 = (uint)local_72;
        }
        lVar14 = *local_88;
        lVar27 = (int)uVar23 * local_190;
        uVar8 = FUN_144b77d20(param_1[0xe],uVar25,uVar21);
        lVar14 = FUN_144b82e30(param_1[0xe],uVar8,lVar14,lVar27);
        if (lVar14 != -1) {
          local_110 = &local_a8;
          plStack_100 = local_88;
          plStack_f8 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_ec = (undefined1)local_138;
          puVar16 = (uint *)*puVar3;
          local_120 = param_1;
          local_108 = uVar23;
          local_f0 = iVar7;
          uStack_118 = &local_1b8;
          if (puVar16 != (uint *)0x0) goto LAB_14289a5b6;
LAB_14289a54a:
          puVar18 = local_128;
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar15 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar3 = puVar15;
          FUN_140217a48(puVar3);
          puVar16 = (uint *)*puVar3;
LAB_14289a5b6:
          uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
          uVar23 = puVar16[0x12];
          do {
            puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
            if (puVar18 + 0x20 <= puVar16 + 0x4000) {
              *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
              puVar16[0x12] = uVar23 + 1;
              local_140 = uVar25;
              local_70 = puVar18;
              FUN_1447247dc(puVar18,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar17 = &PTR_LAB_149ef6d60;
              puVar17[1] = local_120;
              puVar17[2] = uStack_118;
              *(ulonglong *)((longlong)puVar17 + 0x14) =
                   CONCAT44((undefined4)local_110,uStack_118._4_4_);
              *(ulonglong *)((longlong)puVar17 + 0x1c) = CONCAT44(local_108,local_110._4_4_);
              puVar17[5] = plStack_100;
              puVar17[6] = plStack_f8;
              plStack_100 = (longlong *)0x0;
              plStack_f8 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar17 + 0x3c) = local_ec;
              *(int *)(puVar17 + 7) = local_f0;
              if (puVar17 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_14289a756;
              }
              else {
                puVar18[0x16] = &LAB_146991844;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_14289a756:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_98 != 2)) {
                uVar25 = 0x8ff;
                if (*local_98 != 1) goto LAB_14289a78f;
                DVar10 = FUN_140ad26c0();
                DVar11 = GetCurrentThreadId();
                uVar23 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                uVar25 = (ulonglong)uVar23;
                *(uint *)(puVar18 + 0x1e) = uVar23;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar25 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar25 = 0x6ff;
LAB_14289a78f:
                *(int *)(puVar18 + 0x1e) = (int)uVar25;
              }
              uVar23 = (uint)uVar25;
              if ((uVar23 & 0xff) == 0xff) {
                uVar9 = (uint)(uVar25 >> 10) & 3;
                iVar24 = 0;
                if ((uVar23 >> 9 & 1) == 0 || uVar9 < 2) {
                  uVar22 = (&DAT_149e38edc)[uVar9];
                }
                else {
                  uVar22 = 2;
                }
              }
              else {
                iVar24 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                         *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                uVar22 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar24,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              uVar25 = local_150;
              iVar24 = (int)local_150;
              uVar23 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar23);
              if (local_150._4_4_ < uVar23) {
                FUN_14476a5c8(local_178,uVar25 & 0xffffffff);
              }
              puVar19 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar19 = local_178;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = local_70;
              FUN_14698d952(&plStack_100);
              FUN_14698d952(&local_88);
              uVar25 = (ulonglong)(iVar7 + (uint)local_72);
              goto LAB_14289a354;
            }
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar9 = *puVar16;
            *puVar16 = *puVar16 + uVar23 + 1;
            UNLOCK();
            if ((uVar9 ^ uVar23) != 0xffffffff) goto LAB_14289a54a;
            puVar16 = (uint *)*puVar3;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar3 = puVar16;
            uVar25 = (longlong)puVar16 + 0x67;
            uVar23 = 0;
          } while( true );
        }
        goto LAB_14289af15;
      }
LAB_14289ae6a:
      uVar25 = CONCAT71((int7)(local_138 >> 8),(char)local_138 + '\x01');
    }
    (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,local_8c);
    FUN_14698da02();
    if ((DAT_14c86a9f8 == '\x01') && (*local_98 != 2)) {
      if (*local_98 == 1) {
        FUN_140ad26c0();
        GetCurrentThreadId();
        local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
      }
      else {
        local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
      }
    }
    else {
      local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
    }
    plStack_80 = &local_188;
    local_e8 = 0;
    local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
    local_120 = (longlong *)&LAB_146991bca;
    uStack_118 = &local_88;
    FUN_1401f8d10(L"ParallelFor Task",(int)param_1[0x12] * (int)param_1[0x11],1);
    uVar8 = local_8c;
  }
LAB_14289af3a:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,uVar8);
  FUN_14588b8d6(local_178);
  while (plVar20 = local_a0, local_a0 != (longlong *)0x0) {
    plVar13 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar13);
    FUN_1400020a8(plVar20);
  }
  return;
}



// FUNCTION 14289b0da Unwind@14289b0da body=38 status=ok
// SIG undefined Unwind@14289b0da(void)

void Unwind_14289b0da(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14289b102 Unwind@14289b102 body=196 status=ok
// SIG undefined Unwind@14289b102(void)

void Unwind_14289b102(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xf8) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 0x110);
        **(undefined8 **)(param_2 + 0x110) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 14289b1c6 Unwind@14289b1c6 body=83 status=ok
// SIG undefined Unwind@14289b1c6(void)

void Unwind_14289b1c6(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1c8);
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



// FUNCTION 14289b21a Unwind@14289b21a body=83 status=ok
// SIG undefined Unwind@14289b21a(void)

void Unwind_14289b21a(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1c8);
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



// FUNCTION 14289b26e Unwind@14289b26e body=67 status=ok
// SIG undefined Unwind@14289b26e(void)

void Unwind_14289b26e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x138);
  return;
}



// FUNCTION 14289b2b2 Unwind@14289b2b2 body=67 status=ok
// SIG undefined Unwind@14289b2b2(void)

void Unwind_14289b2b2(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x1b0);
  return;
}



// FUNCTION 14289b2f6 Unwind@14289b2f6 body=38 status=ok
// SIG undefined Unwind@14289b2f6(void)

void Unwind_14289b2f6(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14289b31e Unwind@14289b31e body=196 status=ok
// SIG undefined Unwind@14289b31e(void)

void Unwind_14289b31e(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xf8) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 0x110);
        **(undefined8 **)(param_2 + 0x110) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 14289b3e2 Unwind@14289b3e2 body=95 status=ok
// SIG undefined Unwind@14289b3e2(void)

void Unwind_14289b3e2(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1c8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1c8))(*(undefined8 **)(param_2 + 0x1c8),1);
    }
  }
  return;
}



// FUNCTION 14289b442 Unwind@14289b442 body=95 status=ok
// SIG undefined Unwind@14289b442(void)

void Unwind_14289b442(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1c8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1c8))(*(undefined8 **)(param_2 + 0x1c8),1);
    }
  }
  return;
}



// FUNCTION 14289b4a2 Unwind@14289b4a2 body=67 status=ok
// SIG undefined Unwind@14289b4a2(void)

void Unwind_14289b4a2(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  return;
}



// FUNCTION 14289b4e6 Unwind@14289b4e6 body=67 status=ok
// SIG undefined Unwind@14289b4e6(void)

void Unwind_14289b4e6(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x1b0);
  return;
}



// FUNCTION 14289b52a Unwind@14289b52a body=131 status=ok
// SIG undefined Unwind@14289b52a(void)

void Unwind_14289b52a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0xc0,*(undefined4 *)(param_2 + 0x1ac));
  FUN_14588b8d6(param_2 + 0xc0);
  while (puVar1 = *(undefined8 **)(param_2 + 0x198), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x198) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 14289b5ae Unwind@14289b5ae body=79 status=ok
// SIG undefined Unwind@14289b5ae(void)

void Unwind_14289b5ae(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x150);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 14289b5fe Unwind@14289b5fe body=79 status=ok
// SIG undefined Unwind@14289b5fe(void)

void Unwind_14289b5fe(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x150);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 14289b64e Unwind@14289b64e body=38 status=ok
// SIG undefined Unwind@14289b64e(void)

void Unwind_14289b64e(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14289b676 FUN_14289b676 body=2837 status=ok
// SIG undefined FUN_14289b676(void)

void FUN_14289b676(longlong ******param_1,undefined1 param_2)

{
  longlong *******ppppppplVar1;
  int *piVar2;
  undefined8 *puVar3;
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
  int iVar25;
  undefined1 uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  undefined4 in_stack_fffffffffffffdd0;
  undefined2 uVar31;
  undefined1 local_218 [48];
  undefined8 local_1e8;
  undefined4 local_1e0 [2];
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
  int local_9c;
  longlong ******local_98;
  longlong ******pppppplStack_90;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined8 *local_70;
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
  ppppplVar4 = param_1[0xe];
  FUN_14698abc6(local_218,ppppplVar4);
  local_1e8 = 0;
  local_1e0[0] = 0;
  local_1e8 = FUN_144b77940(ppppplVar4);
  FUN_144b77e20(ppppplVar4,0x100,local_1e0);
  local_1d0 = (longlong *****)&local_170;
  local_1c4 = local_7c;
  local_1c0 = local_74;
  local_1b8 = local_218;
  uVar27 = 1;
  if (sVar8 == 2) {
    uVar27 = (uint)*(ushort *)((longlong)param_1 + 0x7e);
  }
  local_1d8 = (longlong *****)param_1;
  local_1c8 = param_2;
  local_1c7 = uVar26;
  local_1c6 = bVar23;
  local_61 = param_2;
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
    if (iVar11 != 1) goto LAB_14289b88c;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_14289b88c;
  }
  uVar30 = 1;
LAB_14289b88c:
  local_1a8 = FUN_144b7ac40(param_1[0xe]);
  if (local_1a8 < (ulonglong)(longlong)(int)((uint)bVar23 * local_74 * local_7c) >> 1) {
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
    if ((int)local_178._4_4_ < iVar11) {
      FUN_14473dbc4(local_1a0,iVar11);
    }
    local_c4 = uVar27 & 0xff;
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar16 + 0x308);
    local_c0 = (undefined8 *)(lVar16 + 0x310);
    local_120 = (int *)(lVar16 + 0xc60);
    for (local_128 = 0; local_c8 = (uint)local_128 & 0xff, local_c8 < local_c4;
        local_128 = CONCAT71((int7)((ulonglong)local_128 >> 8),(char)local_128 + '\x01')) {
      local_9c = 0;
      for (iVar11 = 0; ppppplVar4 = param_1[0x12], (longlong)iVar11 < (longlong)ppppplVar4;
          iVar11 = iVar11 + local_74) {
        iVar7 = (int)ppppplVar4 - iVar11;
        if ((longlong)(local_74 + iVar11) <= (longlong)ppppplVar4) {
          iVar7 = local_74;
        }
        iVar25 = 0;
        iVar24 = 0;
LAB_14289b990:
        uVar31 = (undefined2)((uint)in_stack_fffffffffffffdd0 >> 0x10);
        if ((longlong)iVar25 < (longlong)param_1[0x11]) {
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
              ppppppplVar1 = (longlong *******)(pppppplStack_90 + 1);
              *(int *)ppppppplVar1 = *(int *)ppppppplVar1 + -1;
              UNLOCK();
              if (*(int *)ppppppplVar1 == 0) {
                pppppplVar5 = (longlong ******)*pppppplStack_90;
                pppppplStack_90 = (longlong ******)ppppppplVar15;
                (*(code *)*pppppplVar5)(pppppplVar6);
                LOCK();
                piVar2 = (int *)((longlong)pppppplVar6 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                ppppppplVar9 = (longlong *******)pppppplStack_90;
                if (*piVar2 == 0) {
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
          in_stack_fffffffffffffdd0 = CONCAT22(uVar31,(short)local_c8);
          lVar16 = FUN_144b82d60(param_1[0xe],*local_98,iVar25,iVar11,0,in_stack_fffffffffffffdd0);
          if (-1 < lVar16) {
            local_150 = (int)param_1[0x11] - iVar25;
            if ((longlong)(local_7c + iVar25) <= (longlong)param_1[0x11]) {
              local_150 = local_7c;
            }
            local_160 = &local_b8;
            local_148 = local_98;
            pppppplStack_140 = pppppplStack_90;
            if ((longlong *******)pppppplStack_90 != (longlong *******)0x0) {
              LOCK();
              *(int *)(pppppplStack_90 + 1) = *(int *)(pppppplStack_90 + 1) + 1;
              UNLOCK();
            }
            local_138 = CONCAT31(local_138._1_3_,(char)local_128);
            local_130 = local_9c;
            puVar18 = (uint *)*puVar3;
            pppppplStack_158 = &local_1d8;
            iStack_14c = iVar7;
            iStack_134 = iVar24;
            if (puVar18 != (uint *)0x0) goto LAB_14289bbf1;
LAB_14289bb85:
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
            *puVar3 = puVar17;
            FUN_140217a48(puVar3);
            puVar18 = (uint *)*puVar3;
LAB_14289bbf1:
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
                *puVar19 = &PTR_LAB_149ef6da0;
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
                  if (local_118 != 0) goto LAB_14289bd95;
                }
                else {
                  puVar20[0x16] = &LAB_146991be6;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_14289bd95:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_14289bdce;
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
LAB_14289bdce:
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
                iVar25 = iVar25 + local_7c;
                iVar24 = iVar24 + 1;
                goto LAB_14289b990;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_14289bb85;
              puVar18 = (uint *)*puVar3;
              *puVar18 = 0xffffffff;
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
              puVar18[0x12] = 0;
              *puVar3 = puVar18;
              uVar29 = (longlong)puVar18 + 0x67;
              uVar27 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0xb,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_98);
          uVar30 = local_78;
          goto LAB_14289c005;
        }
        local_9c = local_9c + 1;
      }
    }
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
    local_160 = (longlong ******)&LAB_146991ecc;
    pppppplStack_158 = (longlong ******)&local_98;
    FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
    uVar30 = local_78;
  }
LAB_14289c005:
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



// FUNCTION 14289c18c Unwind@14289c18c body=38 status=ok
// SIG undefined Unwind@14289c18c(void)

void Unwind_14289c18c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14289c1b4 Unwind@14289c1b4 body=196 status=ok
// SIG undefined Unwind@14289c1b4(void)

void Unwind_14289c1b4(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1e8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xa8) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 0x198);
        **(undefined8 **)(param_2 + 0x198) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 14289c278 Unwind@14289c278 body=95 status=ok
// SIG undefined Unwind@14289c278(void)

void Unwind_14289c278(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1e8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1e8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1e8))(*(undefined8 **)(param_2 + 0x1e8),1);
    }
  }
  return;
}



// FUNCTION 14289c2d8 Unwind@14289c2d8 body=95 status=ok
// SIG undefined Unwind@14289c2d8(void)

void Unwind_14289c2d8(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1e8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1e8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1e8))(*(undefined8 **)(param_2 + 0x1e8),1);
    }
  }
  return;
}



// FUNCTION 14289c338 Unwind@14289c338 body=67 status=ok
// SIG undefined Unwind@14289c338(void)

void Unwind_14289c338(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x110);
  return;
}



// FUNCTION 14289c37c Unwind@14289c37c body=67 status=ok
// SIG undefined Unwind@14289c37c(void)

void Unwind_14289c37c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x1c0);
  return;
}



// FUNCTION 14289c3c0 Unwind@14289c3c0 body=131 status=ok
// SIG undefined Unwind@14289c3c0(void)

void Unwind_14289c3c0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0xb8,*(undefined4 *)(param_2 + 0x1e0));
  FUN_14588b8d6(param_2 + 0xb8);
  while (puVar1 = *(undefined8 **)(param_2 + 0x1a8), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x1a8) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 14289c444 Unwind@14289c444 body=76 status=ok
// SIG undefined Unwind@14289c444(void)

void Unwind_14289c444(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x140);
  FUN_14698d9aa(param_2 + 0xf8);
  return;
}



// FUNCTION 14289c490 Unwind@14289c490 body=38 status=ok
// SIG undefined Unwind@14289c490(void)

void Unwind_14289c490(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14289c4b8 FUN_14289c4b8 body=4172 status=ok
// SIG undefined FUN_14289c4b8(void)

void FUN_14289c4b8(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  short sVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  byte bVar26;
  longlong lVar27;
  undefined1 local_1f8 [48];
  undefined8 local_1c8;
  undefined4 local_1c0 [2];
  longlong *local_1b8;
  longlong *local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a7;
  byte local_1a6;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 *local_198;
  longlong local_190;
  longlong local_188;
  ulonglong local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  short local_146;
  uint local_144;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  undefined8 *local_128;
  longlong *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  uint local_108;
  undefined4 uStack_104;
  longlong *plStack_100;
  longlong *plStack_f8;
  int local_f0;
  undefined1 local_ec;
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
  longlong *local_a8;
  longlong *local_a0;
  int *local_98;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  ushort local_72;
  undefined8 *local_70;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_190 = FUN_144b77940(param_1[0xe]);
  local_130 = FUN_144b77ad0(param_1[0xe]);
  local_188 = param_1[0x13];
  local_180 = (ulonglong)param_1[0x14] >> 1;
  local_146 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_146);
  sVar4 = local_146;
  bVar26 = 1;
  local_98 = (int *)CONCAT44(local_98._4_4_,1);
  local_1a7 = param_2;
  if (local_146 != 2) {
    bVar26 = *(byte *)((longlong)param_1 + 0x7e);
    local_1a7 = 1;
  }
  local_70 = (undefined8 *)CONCAT44(local_70._4_4_,(int)param_1[0x11]);
  local_138 = CONCAT44(local_138._4_4_,(int)param_1[0x12]);
  lVar14 = param_1[0xe];
  local_61 = param_2;
  FUN_14698abc6(local_1f8,lVar14);
  local_1c8 = 0;
  local_1c0[0] = 0;
  local_1c8 = FUN_144b77940(lVar14);
  FUN_144b77e20(lVar14,0x100,local_1c0);
  local_1b0 = &local_188;
  local_1a8 = local_61;
  local_1a4 = local_70._0_4_;
  local_1a0 = (undefined4)local_138;
  if (sVar4 == 2) {
    local_98 = (int *)CONCAT44(local_98._4_4_,(uint)*(ushort *)((longlong)param_1 + 0x7e));
  }
  local_1b8 = param_1;
  local_1a6 = bVar26;
  local_198 = local_1f8;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar7 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar7 != 2)) {
    uVar8 = 0xff;
    if (iVar7 != 1) goto LAB_14289c67f;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_14289c67f;
  }
  uVar8 = 1;
LAB_14289c67f:
  local_72 = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_72);
  uVar12 = (ulonglong)local_72;
  uVar25 = param_1[0x12];
  uVar21 = uVar12;
  if ((longlong)uVar25 < (longlong)uVar12) {
    uVar21 = uVar25;
  }
  if (uVar12 == 0) {
    uVar21 = uVar25;
  }
  if (local_130 < (ulonglong)bVar26 * param_1[0x11] * (longlong)(int)uVar21 >> 1) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar8;
    iVar7 = FUN_144b77d80(param_1[0xe]);
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if ((int)local_150._4_4_ < iVar7) {
      FUN_14473dbc4(local_178,iVar7);
    }
    local_144 = (uint)(byte)local_98;
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    local_128 = (undefined8 *)(lVar14 + 0x310);
    local_98 = (int *)(lVar14 + 0xc60);
    uVar25 = 0;
    while( true ) {
      uVar21 = uVar25 & 0xff;
      if (local_144 <= (uint)uVar21) break;
      local_138 = uVar25;
      if (local_72 == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar6 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar6 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_120 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_118._0_4_ = SUB84(local_e0,0);
          uStack_118._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar13 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_120;
          plVar5 = plStack_80;
          if ((plVar13 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar5 = plVar13, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar13;
              (*(code *)*puVar18)(plVar20);
              LOCK();
              piVar2 = (int *)((longlong)plVar20 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar5 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar5 = plStack_80;
              }
            }
          }
          plStack_80 = plVar5;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_120);
          lVar14 = local_88[1];
          local_88[1] = lVar14 + local_130;
          if ((ulonglong)(local_88[2] - lVar14) < local_130) {
            FUN_14112c458();
          }
        }
        lVar14 = FUN_144b82e30(param_1[0xe],uVar21,*local_88,local_130);
        puVar18 = local_128;
        if (lVar14 != -1) {
          uStack_118 = &local_a8;
          local_108 = (uint)local_88;
          uStack_104 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_100 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_f8 = (longlong *)CONCAT71(plStack_f8._1_7_,(char)uVar25);
          puVar16 = (uint *)*puVar3;
          local_120 = param_1;
          local_110 = &local_1b8;
          if (puVar16 != (uint *)0x0) goto LAB_14289cf9a;
LAB_14289cf35:
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar15 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar3 = puVar15;
          FUN_140217a48(puVar3);
          puVar16 = (uint *)*puVar3;
LAB_14289cf9a:
          uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
          uVar23 = puVar16[0x12];
          do {
            puVar17 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
            if (puVar17 + 0x20 <= puVar16 + 0x4000) {
              *(undefined8 **)(puVar16 + 0x10) = puVar17 + 0x20;
              puVar16[0x12] = uVar23 + 1;
              local_140 = uVar25;
              local_70 = puVar17;
              FUN_1447247dc(puVar17,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar17 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar17 = &PTR_LAB_149ef6de0;
              puVar17[1] = local_120;
              puVar17[2] = uStack_118;
              puVar17[3] = local_110;
              puVar17[4] = CONCAT44(uStack_104,local_108);
              puVar17[5] = plStack_100;
              local_108 = 0;
              uStack_104 = 0;
              plStack_100 = (longlong *)0x0;
              *(undefined1 *)(puVar17 + 6) = plStack_f8._0_1_;
              if (puVar17 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_14289d137;
              }
              else {
                puVar18[0x16] = &LAB_146992190;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_14289d137:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_98 != 2)) {
                uVar25 = 0x8ff;
                if (*local_98 != 1) goto LAB_14289d170;
                DVar10 = FUN_140ad26c0();
                DVar11 = GetCurrentThreadId();
                uVar23 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                uVar25 = (ulonglong)uVar23;
                *(uint *)(puVar18 + 0x1e) = uVar23;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar25 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar25 = 0x6ff;
LAB_14289d170:
                *(int *)(puVar18 + 0x1e) = (int)uVar25;
              }
              uVar23 = (uint)uVar25;
              if ((uVar23 & 0xff) == 0xff) {
                uVar9 = (uint)(uVar25 >> 10) & 3;
                iVar7 = 0;
                if ((uVar23 >> 9 & 1) == 0 || uVar9 < 2) {
                  uVar22 = (&DAT_149e38edc)[uVar9];
                }
                else {
                  uVar22 = 2;
                }
              }
              else {
                iVar7 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                uVar22 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar7,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              iVar7 = (int)local_150;
              uVar25 = local_150 & 0xffffffff;
              uVar23 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar23);
              if (local_150._4_4_ < uVar23) {
                FUN_14476a5c8(local_178,uVar25);
              }
              puVar19 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar19 = local_178;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar7 * 8) = local_70;
              FUN_14698d952(&local_108);
              FUN_14698d952(&local_88);
              goto LAB_14289d295;
            }
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar9 = *puVar16;
            *puVar16 = *puVar16 + uVar23 + 1;
            UNLOCK();
            if ((uVar9 ^ uVar23) != 0xffffffff) goto LAB_14289cf35;
            puVar16 = (uint *)*puVar3;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar3 = puVar16;
            uVar25 = (longlong)puVar16 + 0x67;
            uVar23 = 0;
          } while( true );
        }
LAB_14289d340:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar8 = local_8c;
        goto LAB_14289d365;
      }
      uVar25 = 0;
LAB_14289c77f:
      iVar7 = (int)uVar25;
      if ((longlong)uVar25 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar6 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar6 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_120 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_118._0_4_ = SUB84(local_e0,0);
          uStack_118._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar13 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_120;
          plVar5 = plStack_80;
          if ((plVar13 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar5 = plVar13, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar13;
              (*(code *)*puVar18)(plVar20);
              LOCK();
              piVar2 = (int *)((longlong)plVar20 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar5 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar5 = plStack_80;
              }
            }
          }
          plStack_80 = plVar5;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_120);
          lVar14 = local_88[1];
          local_88[1] = lVar14 + local_130;
          if ((ulonglong)(local_88[2] - lVar14) < local_130) {
            FUN_14112c458();
          }
        }
        uVar23 = (int)param_1[0x12] - iVar7;
        if ((longlong)(ulonglong)(iVar7 + (uint)local_72) <= param_1[0x12]) {
          uVar23 = (uint)local_72;
        }
        lVar14 = *local_88;
        lVar27 = (int)uVar23 * local_190;
        uVar8 = FUN_144b77d20(param_1[0xe],uVar25,uVar21);
        lVar14 = FUN_144b82e30(param_1[0xe],uVar8,lVar14,lVar27);
        if (lVar14 != -1) {
          local_110 = &local_a8;
          plStack_100 = local_88;
          plStack_f8 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_ec = (undefined1)local_138;
          puVar16 = (uint *)*puVar3;
          local_120 = param_1;
          local_108 = uVar23;
          local_f0 = iVar7;
          uStack_118 = &local_1b8;
          if (puVar16 != (uint *)0x0) goto LAB_14289c9e1;
LAB_14289c975:
          puVar18 = local_128;
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar15 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar3 = puVar15;
          FUN_140217a48(puVar3);
          puVar16 = (uint *)*puVar3;
LAB_14289c9e1:
          uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
          uVar23 = puVar16[0x12];
          do {
            puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
            if (puVar18 + 0x20 <= puVar16 + 0x4000) {
              *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
              puVar16[0x12] = uVar23 + 1;
              local_140 = uVar25;
              local_70 = puVar18;
              FUN_1447247dc(puVar18,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar17 = &PTR_LAB_149ef6dc0;
              puVar17[1] = local_120;
              puVar17[2] = uStack_118;
              *(ulonglong *)((longlong)puVar17 + 0x14) =
                   CONCAT44((undefined4)local_110,uStack_118._4_4_);
              *(ulonglong *)((longlong)puVar17 + 0x1c) = CONCAT44(local_108,local_110._4_4_);
              puVar17[5] = plStack_100;
              puVar17[6] = plStack_f8;
              plStack_100 = (longlong *)0x0;
              plStack_f8 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar17 + 0x3c) = local_ec;
              *(int *)(puVar17 + 7) = local_f0;
              if (puVar17 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_14289cb81;
              }
              else {
                puVar18[0x16] = &LAB_146991ee8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_14289cb81:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_98 != 2)) {
                uVar25 = 0x8ff;
                if (*local_98 != 1) goto LAB_14289cbba;
                DVar10 = FUN_140ad26c0();
                DVar11 = GetCurrentThreadId();
                uVar23 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                uVar25 = (ulonglong)uVar23;
                *(uint *)(puVar18 + 0x1e) = uVar23;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar25 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar25 = 0x6ff;
LAB_14289cbba:
                *(int *)(puVar18 + 0x1e) = (int)uVar25;
              }
              uVar23 = (uint)uVar25;
              if ((uVar23 & 0xff) == 0xff) {
                uVar9 = (uint)(uVar25 >> 10) & 3;
                iVar24 = 0;
                if ((uVar23 >> 9 & 1) == 0 || uVar9 < 2) {
                  uVar22 = (&DAT_149e38edc)[uVar9];
                }
                else {
                  uVar22 = 2;
                }
              }
              else {
                iVar24 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                         *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                uVar22 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar24,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              uVar25 = local_150;
              iVar24 = (int)local_150;
              uVar23 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar23);
              if (local_150._4_4_ < uVar23) {
                FUN_14476a5c8(local_178,uVar25 & 0xffffffff);
              }
              puVar19 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar19 = local_178;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = local_70;
              FUN_14698d952(&plStack_100);
              FUN_14698d952(&local_88);
              uVar25 = (ulonglong)(iVar7 + (uint)local_72);
              goto LAB_14289c77f;
            }
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar9 = *puVar16;
            *puVar16 = *puVar16 + uVar23 + 1;
            UNLOCK();
            if ((uVar9 ^ uVar23) != 0xffffffff) goto LAB_14289c975;
            puVar16 = (uint *)*puVar3;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar3 = puVar16;
            uVar25 = (longlong)puVar16 + 0x67;
            uVar23 = 0;
          } while( true );
        }
        goto LAB_14289d340;
      }
LAB_14289d295:
      uVar25 = CONCAT71((int7)(local_138 >> 8),(char)local_138 + '\x01');
    }
    (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,local_8c);
    FUN_14698da02();
    if ((DAT_14c86a9f8 == '\x01') && (*local_98 != 2)) {
      if (*local_98 == 1) {
        FUN_140ad26c0();
        GetCurrentThreadId();
        local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
      }
      else {
        local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
      }
    }
    else {
      local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
    }
    plStack_80 = &local_188;
    local_e8 = 0;
    local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
    local_120 = (longlong *)&LAB_146992272;
    uStack_118 = &local_88;
    FUN_1401f8d10(L"ParallelFor Task",(int)param_1[0x12] * (int)param_1[0x11],1);
    uVar8 = local_8c;
  }
LAB_14289d365:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,uVar8);
  FUN_14588b8d6(local_178);
  while (plVar20 = local_a0, local_a0 != (longlong *)0x0) {
    plVar13 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar13);
    FUN_1400020a8(plVar20);
  }
  return;
}



// FUNCTION 14289d504 Unwind@14289d504 body=38 status=ok
// SIG undefined Unwind@14289d504(void)

void Unwind_14289d504(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14289d52c Unwind@14289d52c body=196 status=ok
// SIG undefined Unwind@14289d52c(void)

void Unwind_14289d52c(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xf8) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 0x110);
        **(undefined8 **)(param_2 + 0x110) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 14289d5f0 Unwind@14289d5f0 body=83 status=ok
// SIG undefined Unwind@14289d5f0(void)

void Unwind_14289d5f0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1c8);
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



// FUNCTION 14289d644 Unwind@14289d644 body=83 status=ok
// SIG undefined Unwind@14289d644(void)

void Unwind_14289d644(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1c8);
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



// FUNCTION 14289d698 Unwind@14289d698 body=67 status=ok
// SIG undefined Unwind@14289d698(void)

void Unwind_14289d698(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x138);
  return;
}



// FUNCTION 14289d6dc Unwind@14289d6dc body=67 status=ok
// SIG undefined Unwind@14289d6dc(void)

void Unwind_14289d6dc(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x1b0);
  return;
}



// FUNCTION 14289d720 Unwind@14289d720 body=38 status=ok
// SIG undefined Unwind@14289d720(void)

void Unwind_14289d720(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14289d748 Unwind@14289d748 body=196 status=ok
// SIG undefined Unwind@14289d748(void)

void Unwind_14289d748(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xf8) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 0x110);
        **(undefined8 **)(param_2 + 0x110) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 14289d80c Unwind@14289d80c body=95 status=ok
// SIG undefined Unwind@14289d80c(void)

void Unwind_14289d80c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1c8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1c8))(*(undefined8 **)(param_2 + 0x1c8),1);
    }
  }
  return;
}



// FUNCTION 14289d86c Unwind@14289d86c body=95 status=ok
// SIG undefined Unwind@14289d86c(void)

void Unwind_14289d86c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1c8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1c8))(*(undefined8 **)(param_2 + 0x1c8),1);
    }
  }
  return;
}



// FUNCTION 14289d8cc Unwind@14289d8cc body=67 status=ok
// SIG undefined Unwind@14289d8cc(void)

void Unwind_14289d8cc(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  return;
}



// FUNCTION 14289d910 Unwind@14289d910 body=67 status=ok
// SIG undefined Unwind@14289d910(void)

void Unwind_14289d910(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x1b0);
  return;
}



// FUNCTION 14289d954 Unwind@14289d954 body=131 status=ok
// SIG undefined Unwind@14289d954(void)

void Unwind_14289d954(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0xc0,*(undefined4 *)(param_2 + 0x1ac));
  FUN_14588b8d6(param_2 + 0xc0);
  while (puVar1 = *(undefined8 **)(param_2 + 0x198), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x198) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 14289d9d8 Unwind@14289d9d8 body=79 status=ok
// SIG undefined Unwind@14289d9d8(void)

void Unwind_14289d9d8(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x150);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 14289da28 Unwind@14289da28 body=79 status=ok
// SIG undefined Unwind@14289da28(void)

void Unwind_14289da28(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x150);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 14289da78 Unwind@14289da78 body=38 status=ok
// SIG undefined Unwind@14289da78(void)

void Unwind_14289da78(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14289daa0 FUN_14289daa0 body=2763 status=ok
// SIG undefined FUN_14289daa0(void)

void FUN_14289daa0(longlong ******param_1,undefined1 param_2)

{
  longlong *******ppppppplVar1;
  int *piVar2;
  undefined8 *puVar3;
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
  int iVar25;
  undefined1 uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  undefined4 in_stack_fffffffffffffde0;
  undefined2 uVar31;
  undefined1 local_208 [48];
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
  int local_9c;
  longlong ******local_98;
  longlong ******pppppplStack_90;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined8 *local_70;
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
  FUN_14698abc6(local_208,param_1[0xe]);
  local_1d0 = (longlong *****)&local_170;
  local_1c4 = local_7c;
  local_1c0 = local_74;
  uVar27 = 1;
  if (sVar8 == 2) {
    uVar27 = (uint)*(ushort *)((longlong)param_1 + 0x7e);
  }
  local_1d8 = (longlong *****)param_1;
  local_1c8 = param_2;
  local_1c7 = uVar26;
  local_1c6 = bVar23;
  local_1b8 = local_208;
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
    if (iVar11 != 1) goto LAB_14289dc76;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_14289dc76;
  }
  uVar30 = 1;
LAB_14289dc76:
  local_1a8 = FUN_144b7ac40(param_1[0xe]);
  if (local_1a8 < (ulonglong)(longlong)(int)((uint)bVar23 * local_74 * local_7c)) {
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
    local_61 = param_2;
    if ((int)local_178._4_4_ < iVar11) {
      FUN_14473dbc4(local_1a0,iVar11);
    }
    local_c4 = uVar27 & 0xff;
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar16 + 0x308);
    local_c0 = (undefined8 *)(lVar16 + 0x310);
    local_120 = (int *)(lVar16 + 0xc60);
    for (local_128 = 0; local_c8 = (uint)local_128 & 0xff, local_c8 < local_c4;
        local_128 = CONCAT71((int7)((ulonglong)local_128 >> 8),(char)local_128 + '\x01')) {
      local_9c = 0;
      for (iVar11 = 0; ppppplVar4 = param_1[0x12], (longlong)iVar11 < (longlong)ppppplVar4;
          iVar11 = iVar11 + local_74) {
        iVar7 = (int)ppppplVar4 - iVar11;
        if ((longlong)(local_74 + iVar11) <= (longlong)ppppplVar4) {
          iVar7 = local_74;
        }
        iVar25 = 0;
        iVar24 = 0;
LAB_14289dd7e:
        uVar31 = (undefined2)((uint)in_stack_fffffffffffffde0 >> 0x10);
        if ((longlong)iVar25 < (longlong)param_1[0x11]) {
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
              ppppppplVar1 = (longlong *******)(pppppplStack_90 + 1);
              *(int *)ppppppplVar1 = *(int *)ppppppplVar1 + -1;
              UNLOCK();
              if (*(int *)ppppppplVar1 == 0) {
                pppppplVar5 = (longlong ******)*pppppplStack_90;
                pppppplStack_90 = (longlong ******)ppppppplVar15;
                (*(code *)*pppppplVar5)(pppppplVar6);
                LOCK();
                piVar2 = (int *)((longlong)pppppplVar6 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                ppppppplVar9 = (longlong *******)pppppplStack_90;
                if (*piVar2 == 0) {
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
          in_stack_fffffffffffffde0 = CONCAT22(uVar31,(short)local_c8);
          lVar16 = FUN_144b82d60(param_1[0xe],*local_98,iVar25,iVar11,0,in_stack_fffffffffffffde0);
          if (-1 < lVar16) {
            local_150 = (int)param_1[0x11] - iVar25;
            if ((longlong)(local_7c + iVar25) <= (longlong)param_1[0x11]) {
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
            local_130 = local_9c;
            puVar18 = (uint *)*puVar3;
            iStack_14c = iVar7;
            iStack_134 = iVar24;
            if (puVar18 != (uint *)0x0) goto LAB_14289dfd4;
LAB_14289df68:
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
            *puVar3 = puVar17;
            FUN_140217a48(puVar3);
            puVar18 = (uint *)*puVar3;
LAB_14289dfd4:
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
                *puVar19 = &PTR_LAB_149ef6e00;
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
                  if (local_118 != 0) goto LAB_14289e175;
                }
                else {
                  puVar20[0x16] = &LAB_14699228e;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_14289e175:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_14289e1ae;
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
LAB_14289e1ae:
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
                iVar25 = iVar25 + local_7c;
                iVar24 = iVar24 + 1;
                goto LAB_14289dd7e;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_14289df68;
              puVar18 = (uint *)*puVar3;
              *puVar18 = 0xffffffff;
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
              puVar18[0x12] = 0;
              *puVar3 = puVar18;
              uVar29 = (longlong)puVar18 + 0x67;
              uVar27 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0xb,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_98);
          uVar30 = local_78;
          goto LAB_14289e3e5;
        }
        local_9c = local_9c + 1;
      }
    }
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
    local_160 = (longlong ******)&LAB_146992542;
    pppppplStack_158 = (longlong ******)&local_98;
    FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
    uVar30 = local_78;
  }
LAB_14289e3e5:
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



// FUNCTION 14289e56c Unwind@14289e56c body=38 status=ok
// SIG undefined Unwind@14289e56c(void)

void Unwind_14289e56c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14289e594 Unwind@14289e594 body=196 status=ok
// SIG undefined Unwind@14289e594(void)

void Unwind_14289e594(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1d8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x98) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 0x188);
        **(undefined8 **)(param_2 + 0x188) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 14289e658 Unwind@14289e658 body=95 status=ok
// SIG undefined Unwind@14289e658(void)

void Unwind_14289e658(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1d8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1d8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1d8))(*(undefined8 **)(param_2 + 0x1d8),1);
    }
  }
  return;
}



// FUNCTION 14289e6b8 Unwind@14289e6b8 body=95 status=ok
// SIG undefined Unwind@14289e6b8(void)

void Unwind_14289e6b8(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1d8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1d8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1d8))(*(undefined8 **)(param_2 + 0x1d8),1);
    }
  }
  return;
}



// FUNCTION 14289e718 Unwind@14289e718 body=67 status=ok
// SIG undefined Unwind@14289e718(void)

void Unwind_14289e718(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  return;
}



// FUNCTION 14289e75c Unwind@14289e75c body=67 status=ok
// SIG undefined Unwind@14289e75c(void)

void Unwind_14289e75c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x1b0);
  return;
}



// FUNCTION 14289e7a0 Unwind@14289e7a0 body=131 status=ok
// SIG undefined Unwind@14289e7a0(void)

void Unwind_14289e7a0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0xa8,*(undefined4 *)(param_2 + 0x1d0));
  FUN_14588b8d6(param_2 + 0xa8);
  while (puVar1 = *(undefined8 **)(param_2 + 0x198), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x198) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 14289e824 Unwind@14289e824 body=76 status=ok
// SIG undefined Unwind@14289e824(void)

void Unwind_14289e824(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  FUN_14698d9aa(param_2 + 0xe8);
  return;
}



// FUNCTION 14289e870 Unwind@14289e870 body=38 status=ok
// SIG undefined Unwind@14289e870(void)

void Unwind_14289e870(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14289e898 FUN_14289e898 body=4098 status=ok
// SIG undefined FUN_14289e898(void)

void FUN_14289e898(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  short sVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined8 uVar23;
  undefined1 uVar24;
  uint uVar25;
  int iVar26;
  ulonglong uVar27;
  byte bVar28;
  undefined1 local_1f8 [48];
  longlong *local_1c8;
  longlong *local_1c0;
  undefined1 local_1b8;
  undefined1 local_1b7;
  byte local_1b6;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined1 *local_1a8;
  longlong local_1a0;
  ulonglong local_198;
  longlong local_190;
  ulonglong local_188;
  undefined8 local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  short local_146;
  uint local_144;
  int *local_140;
  undefined8 local_138;
  ulonglong local_130;
  undefined8 *local_128;
  longlong *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  uint local_108;
  undefined4 uStack_104;
  longlong *plStack_100;
  longlong *plStack_f8;
  int local_f0;
  undefined1 local_ec;
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
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  ushort local_72;
  undefined8 *local_70;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_1a0 = FUN_144b77940(param_1[0xe]);
  local_130 = FUN_144b77ad0(param_1[0xe]);
  local_190 = param_1[0x13];
  local_188 = (ulonglong)param_1[0x14] >> 1;
  local_146 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_146);
  sVar4 = local_146;
  bVar28 = 1;
  local_70 = (undefined8 *)CONCAT44(local_70._4_4_,1);
  local_1b7 = param_2;
  if (local_146 != 2) {
    bVar28 = *(byte *)((longlong)param_1 + 0x7e);
    local_1b7 = 1;
  }
  lVar14 = param_1[0x11];
  lVar22 = param_1[0x12];
  local_61 = param_2;
  FUN_14698abc6(local_1f8,param_1[0xe]);
  local_1c0 = &local_190;
  local_1b8 = local_61;
  if (sVar4 == 2) {
    local_70 = (undefined8 *)CONCAT44(local_70._4_4_,(uint)*(ushort *)((longlong)param_1 + 0x7e));
  }
  local_1c8 = param_1;
  local_1b6 = bVar28;
  local_1b4 = (int)lVar14;
  local_1b0 = (int)lVar22;
  local_1a8 = local_1f8;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar7 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar7 != 2)) {
    uVar8 = 0xff;
    if (iVar7 != 1) goto LAB_14289ea17;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_14289ea17;
  }
  uVar8 = 1;
LAB_14289ea17:
  local_72 = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_72);
  uVar12 = (ulonglong)local_72;
  uVar27 = param_1[0x12];
  uVar21 = uVar12;
  if ((longlong)uVar27 < (longlong)uVar12) {
    uVar21 = uVar27;
  }
  if (uVar12 == 0) {
    uVar21 = uVar27;
  }
  if (local_130 < (ulonglong)bVar28 * param_1[0x11] * (longlong)(int)uVar21) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar8;
    iVar7 = FUN_144b77d80(param_1[0xe]);
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if ((int)local_150._4_4_ < iVar7) {
      FUN_14473dbc4(local_178,iVar7);
    }
    local_144 = (uint)(byte)local_70;
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    local_128 = (undefined8 *)(lVar14 + 0x310);
    local_140 = (int *)(lVar14 + 0xc60);
    uVar23 = 0;
    while( true ) {
      local_138 = CONCAT44(local_138._4_4_,(uint)uVar23) & 0xffffffff000000ff;
      if (local_144 <= ((uint)uVar23 & 0xff)) break;
      local_180 = uVar23;
      if (local_72 == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar6 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar6 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_120 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_118._0_4_ = SUB84(local_e0,0);
          uStack_118._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar13 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_120;
          plVar5 = plStack_80;
          if ((plVar13 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar5 = plVar13, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar13;
              (*(code *)*puVar18)(plVar20);
              LOCK();
              piVar2 = (int *)((longlong)plVar20 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar5 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar5 = plStack_80;
              }
            }
          }
          plStack_80 = plVar5;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_120);
          lVar14 = local_88[1];
          local_88[1] = lVar14 + local_130;
          if ((ulonglong)(local_88[2] - lVar14) < local_130) {
            FUN_14112c458();
          }
        }
        lVar14 = FUN_144b82e30(param_1[0xe],local_138 & 0xffffffff,*local_88,local_130);
        puVar18 = local_128;
        if (lVar14 != -1) {
          uStack_118 = &local_a8;
          local_110 = &local_1c8;
          local_108 = (uint)local_88;
          uStack_104 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_100 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_f8 = (longlong *)CONCAT71(plStack_f8._1_7_,(char)uVar23);
          puVar16 = (uint *)*puVar3;
          local_120 = param_1;
          if (puVar16 != (uint *)0x0) goto LAB_14289f340;
LAB_14289f2db:
          uVar25 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar25 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar25 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar15 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar3 = puVar15;
          FUN_140217a48(puVar3);
          puVar16 = (uint *)*puVar3;
LAB_14289f340:
          uVar27 = *(longlong *)(puVar16 + 0x10) + 0xf;
          uVar25 = puVar16[0x12];
          do {
            puVar17 = (undefined8 *)(uVar27 & 0xfffffffffffffff0);
            if (puVar17 + 0x20 <= puVar16 + 0x4000) {
              *(undefined8 **)(puVar16 + 0x10) = puVar17 + 0x20;
              puVar16[0x12] = uVar25 + 1;
              local_138 = uVar27;
              local_70 = puVar17;
              FUN_1447247dc(puVar17,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar17 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar17 = &PTR_LAB_149ef6e40;
              puVar17[1] = local_120;
              puVar17[2] = uStack_118;
              puVar17[3] = local_110;
              puVar17[4] = CONCAT44(uStack_104,local_108);
              puVar17[5] = plStack_100;
              local_108 = 0;
              uStack_104 = 0;
              plStack_100 = (longlong *)0x0;
              *(undefined1 *)(puVar17 + 6) = plStack_f8._0_1_;
              if (puVar17 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_14289f4e0;
              }
              else {
                puVar18[0x16] = &LAB_1469927d0;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_14289f4e0:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_140 != 2)) {
                uVar27 = 0x8ff;
                if (*local_140 != 1) goto LAB_14289f516;
                DVar10 = FUN_140ad26c0();
                DVar11 = GetCurrentThreadId();
                uVar25 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                uVar27 = (ulonglong)uVar25;
                *(uint *)(puVar18 + 0x1e) = uVar25;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar27 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar27 = 0x6ff;
LAB_14289f516:
                *(int *)(puVar18 + 0x1e) = (int)uVar27;
              }
              uVar25 = (uint)uVar27;
              if ((uVar25 & 0xff) == 0xff) {
                uVar9 = (uint)(uVar27 >> 10) & 3;
                iVar7 = 0;
                if ((uVar25 >> 9 & 1) == 0 || uVar9 < 2) {
                  uVar24 = (&DAT_149e38edc)[uVar9];
                }
                else {
                  uVar24 = 2;
                }
              }
              else {
                iVar7 = (uVar25 >> 7 & 2 | (uint)(uVar27 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar25 & 0xff) * 4);
                uVar24 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar24,iVar7,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              uVar27 = local_150;
              iVar7 = (int)local_150;
              uVar25 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar25);
              if (local_150._4_4_ < uVar25) {
                FUN_14476a5c8(local_178,uVar27 & 0xffffffff);
              }
              puVar19 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar19 = local_178;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar7 * 8) = local_70;
              FUN_14698d952(&local_108);
              FUN_14698d952(&local_88);
              goto LAB_14289f637;
            }
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar9 = *puVar16;
            *puVar16 = *puVar16 + uVar25 + 1;
            UNLOCK();
            if ((uVar9 ^ uVar25) != 0xffffffff) goto LAB_14289f2db;
            puVar16 = (uint *)*puVar3;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar3 = puVar16;
            uVar27 = (longlong)puVar16 + 0x67;
            uVar25 = 0;
          } while( true );
        }
LAB_14289f6e0:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar8 = local_8c;
        goto LAB_14289f705;
      }
      uVar27 = 0;
LAB_14289eb1a:
      iVar7 = (int)uVar27;
      if ((longlong)uVar27 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar6 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar6 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_120 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_118._0_4_ = SUB84(local_e0,0);
          uStack_118._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar13 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_120;
          plVar5 = plStack_80;
          if ((plVar13 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar5 = plVar13, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar13;
              (*(code *)*puVar18)(plVar20);
              LOCK();
              piVar2 = (int *)((longlong)plVar20 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar5 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar5 = plStack_80;
              }
            }
          }
          plStack_80 = plVar5;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_120);
          lVar14 = local_88[1];
          local_88[1] = lVar14 + local_130;
          if ((ulonglong)(local_88[2] - lVar14) < local_130) {
            FUN_14112c458();
          }
        }
        uVar25 = (int)param_1[0x12] - iVar7;
        if ((longlong)(ulonglong)(iVar7 + (uint)local_72) <= param_1[0x12]) {
          uVar25 = (uint)local_72;
        }
        lVar14 = *local_88;
        lVar22 = (int)uVar25 * local_1a0;
        uVar8 = FUN_144b77d20(param_1[0xe],uVar27,local_138 & 0xffffffff);
        lVar14 = FUN_144b82e30(param_1[0xe],uVar8,lVar14,lVar22);
        if (lVar14 != -1) {
          uStack_118 = &local_1c8;
          local_110 = &local_a8;
          plStack_100 = local_88;
          plStack_f8 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_ec = (undefined1)local_180;
          puVar16 = (uint *)*puVar3;
          local_120 = param_1;
          local_108 = uVar25;
          local_f0 = iVar7;
          if (puVar16 != (uint *)0x0) goto LAB_14289ed80;
LAB_14289ed14:
          puVar18 = local_128;
          uVar25 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar25 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar25 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar15 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar3 = puVar15;
          FUN_140217a48(puVar3);
          puVar16 = (uint *)*puVar3;
LAB_14289ed80:
          uVar27 = *(longlong *)(puVar16 + 0x10) + 0xf;
          uVar25 = puVar16[0x12];
          do {
            puVar18 = (undefined8 *)(uVar27 & 0xfffffffffffffff0);
            if (puVar18 + 0x20 <= puVar16 + 0x4000) {
              *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
              puVar16[0x12] = uVar25 + 1;
              local_198 = uVar27;
              local_70 = puVar18;
              FUN_1447247dc(puVar18,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar17 = &PTR_LAB_149ef6e20;
              puVar17[1] = local_120;
              puVar17[2] = uStack_118;
              *(ulonglong *)((longlong)puVar17 + 0x14) =
                   CONCAT44((undefined4)local_110,uStack_118._4_4_);
              *(ulonglong *)((longlong)puVar17 + 0x1c) = CONCAT44(local_108,local_110._4_4_);
              puVar17[5] = plStack_100;
              puVar17[6] = plStack_f8;
              plStack_100 = (longlong *)0x0;
              plStack_f8 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar17 + 0x3c) = local_ec;
              *(int *)(puVar17 + 7) = local_f0;
              if (puVar17 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_14289ef24;
              }
              else {
                puVar18[0x16] = &LAB_14699255e;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_14289ef24:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_140 != 2)) {
                uVar27 = 0x8ff;
                if (*local_140 != 1) goto LAB_14289ef5a;
                DVar10 = FUN_140ad26c0();
                DVar11 = GetCurrentThreadId();
                uVar25 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                uVar27 = (ulonglong)uVar25;
                *(uint *)(puVar18 + 0x1e) = uVar25;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar27 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar27 = 0x6ff;
LAB_14289ef5a:
                *(int *)(puVar18 + 0x1e) = (int)uVar27;
              }
              uVar25 = (uint)uVar27;
              if ((uVar25 & 0xff) == 0xff) {
                uVar9 = (uint)(uVar27 >> 10) & 3;
                iVar26 = 0;
                if ((uVar25 >> 9 & 1) == 0 || uVar9 < 2) {
                  uVar24 = (&DAT_149e38edc)[uVar9];
                }
                else {
                  uVar24 = 2;
                }
              }
              else {
                iVar26 = (uVar25 >> 7 & 2 | (uint)(uVar27 >> 9) & 1) +
                         *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar25 & 0xff) * 4);
                uVar24 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar24,iVar26,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              uVar27 = local_150;
              iVar26 = (int)local_150;
              uVar25 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar25);
              if (local_150._4_4_ < uVar25) {
                FUN_14476a5c8(local_178,uVar27 & 0xffffffff);
              }
              puVar19 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar19 = local_178;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar26 * 8) = local_70;
              FUN_14698d952(&plStack_100);
              FUN_14698d952(&local_88);
              uVar27 = (ulonglong)(iVar7 + (uint)local_72);
              goto LAB_14289eb1a;
            }
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar9 = *puVar16;
            *puVar16 = *puVar16 + uVar25 + 1;
            UNLOCK();
            if ((uVar9 ^ uVar25) != 0xffffffff) goto LAB_14289ed14;
            puVar16 = (uint *)*puVar3;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar3 = puVar16;
            uVar27 = (longlong)puVar16 + 0x67;
            uVar25 = 0;
          } while( true );
        }
        goto LAB_14289f6e0;
      }
LAB_14289f637:
      uVar23 = CONCAT71((int7)((ulonglong)local_180 >> 8),(char)local_180 + '\x01');
    }
    (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,local_8c);
    FUN_14698da02();
    if ((DAT_14c86a9f8 == '\x01') && (*local_140 != 2)) {
      if (*local_140 == 1) {
        FUN_140ad26c0();
        GetCurrentThreadId();
        local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
      }
      else {
        local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
      }
    }
    else {
      local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
    }
    plStack_80 = &local_190;
    local_e8 = 0;
    local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
    local_120 = (longlong *)&LAB_1469928b2;
    uStack_118 = &local_88;
    FUN_1401f8d10(L"ParallelFor Task",(int)param_1[0x12] * (int)param_1[0x11],1);
    uVar8 = local_8c;
  }
LAB_14289f705:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,uVar8);
  FUN_14588b8d6(local_178);
  while (plVar20 = local_a0, local_a0 != (longlong *)0x0) {
    plVar13 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar13);
    FUN_1400020a8(plVar20);
  }
  return;
}



// FUNCTION 14289f89a Unwind@14289f89a body=38 status=ok
// SIG undefined Unwind@14289f89a(void)

void Unwind_14289f89a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14289f8c2 Unwind@14289f8c2 body=196 status=ok
// SIG undefined Unwind@14289f8c2(void)

void Unwind_14289f8c2(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xa0) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 0x110);
        **(undefined8 **)(param_2 + 0x110) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 14289f986 Unwind@14289f986 body=83 status=ok
// SIG undefined Unwind@14289f986(void)

void Unwind_14289f986(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1c8);
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



// FUNCTION 14289f9da Unwind@14289f9da body=83 status=ok
// SIG undefined Unwind@14289f9da(void)

void Unwind_14289f9da(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1c8);
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



// FUNCTION 14289fa2e Unwind@14289fa2e body=67 status=ok
// SIG undefined Unwind@14289fa2e(void)

void Unwind_14289fa2e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x138);
  return;
}



// FUNCTION 14289fa72 Unwind@14289fa72 body=67 status=ok
// SIG undefined Unwind@14289fa72(void)

void Unwind_14289fa72(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x1b0);
  return;
}



// FUNCTION 14289fab6 Unwind@14289fab6 body=38 status=ok
// SIG undefined Unwind@14289fab6(void)

void Unwind_14289fab6(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14289fade Unwind@14289fade body=199 status=ok
// SIG undefined Unwind@14289fade(void)

void Unwind_14289fade(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x100) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 0x110);
        **(undefined8 **)(param_2 + 0x110) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 14289fba6 Unwind@14289fba6 body=95 status=ok
// SIG undefined Unwind@14289fba6(void)

void Unwind_14289fba6(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1c8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1c8))(*(undefined8 **)(param_2 + 0x1c8),1);
    }
  }
  return;
}



// FUNCTION 14289fc06 Unwind@14289fc06 body=95 status=ok
// SIG undefined Unwind@14289fc06(void)

void Unwind_14289fc06(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1c8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1c8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1c8))(*(undefined8 **)(param_2 + 0x1c8),1);
    }
  }
  return;
}



// FUNCTION 14289fc66 Unwind@14289fc66 body=67 status=ok
// SIG undefined Unwind@14289fc66(void)

void Unwind_14289fc66(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  return;
}



// FUNCTION 14289fcaa Unwind@14289fcaa body=67 status=ok
// SIG undefined Unwind@14289fcaa(void)

void Unwind_14289fcaa(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x1b0);
  return;
}



// FUNCTION 14289fcee Unwind@14289fcee body=131 status=ok
// SIG undefined Unwind@14289fcee(void)

void Unwind_14289fcee(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0xc0,*(undefined4 *)(param_2 + 0x1ac));
  FUN_14588b8d6(param_2 + 0xc0);
  while (puVar1 = *(undefined8 **)(param_2 + 0x198), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x198) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 14289fd72 Unwind@14289fd72 body=79 status=ok
// SIG undefined Unwind@14289fd72(void)

void Unwind_14289fd72(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x150);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 14289fdc2 Unwind@14289fdc2 body=79 status=ok
// SIG undefined Unwind@14289fdc2(void)

void Unwind_14289fdc2(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x150);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 14289fe12 Unwind@14289fe12 body=38 status=ok
// SIG undefined Unwind@14289fe12(void)

void Unwind_14289fe12(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14289fe3a FUN_14289fe3a body=2766 status=ok
// SIG undefined FUN_14289fe3a(void)

void FUN_14289fe3a(longlong ******param_1,undefined1 param_2)

{
  longlong *******ppppppplVar1;
  int *piVar2;
  undefined8 *puVar3;
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
  int iVar25;
  undefined1 uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  undefined4 in_stack_fffffffffffffde0;
  undefined2 uVar31;
  undefined1 local_208 [48];
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
  int local_9c;
  longlong ******local_98;
  longlong ******pppppplStack_90;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined8 *local_70;
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
  FUN_14698ac92(local_208,param_1[0xe]);
  local_1d0 = (longlong *****)&local_170;
  local_1c4 = local_7c;
  local_1c0 = local_74;
  uVar27 = 1;
  if (sVar8 == 2) {
    uVar27 = (uint)*(ushort *)((longlong)param_1 + 0x7e);
  }
  local_1d8 = (longlong *****)param_1;
  local_1c8 = param_2;
  local_1c7 = uVar26;
  local_1c6 = bVar23;
  local_1b8 = local_208;
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
    if (iVar11 != 1) goto LAB_1428a0010;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_1428a0010;
  }
  uVar30 = 1;
LAB_1428a0010:
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
    local_61 = param_2;
    if ((int)local_178._4_4_ < iVar11) {
      FUN_14473dbc4(local_1a0,iVar11);
    }
    local_c4 = uVar27 & 0xff;
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar16 + 0x308);
    local_c0 = (undefined8 *)(lVar16 + 0x310);
    local_120 = (int *)(lVar16 + 0xc60);
    for (local_128 = 0; local_c8 = (uint)local_128 & 0xff, local_c8 < local_c4;
        local_128 = CONCAT71((int7)((ulonglong)local_128 >> 8),(char)local_128 + '\x01')) {
      local_9c = 0;
      for (iVar11 = 0; ppppplVar4 = param_1[0x12], (longlong)iVar11 < (longlong)ppppplVar4;
          iVar11 = iVar11 + local_74) {
        iVar7 = (int)ppppplVar4 - iVar11;
        if ((longlong)(local_74 + iVar11) <= (longlong)ppppplVar4) {
          iVar7 = local_74;
        }
        iVar25 = 0;
        iVar24 = 0;
LAB_1428a011b:
        uVar31 = (undefined2)((uint)in_stack_fffffffffffffde0 >> 0x10);
        if ((longlong)iVar25 < (longlong)param_1[0x11]) {
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
              ppppppplVar1 = (longlong *******)(pppppplStack_90 + 1);
              *(int *)ppppppplVar1 = *(int *)ppppppplVar1 + -1;
              UNLOCK();
              if (*(int *)ppppppplVar1 == 0) {
                pppppplVar5 = (longlong ******)*pppppplStack_90;
                pppppplStack_90 = (longlong ******)ppppppplVar15;
                (*(code *)*pppppplVar5)(pppppplVar6);
                LOCK();
                piVar2 = (int *)((longlong)pppppplVar6 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                ppppppplVar9 = (longlong *******)pppppplStack_90;
                if (*piVar2 == 0) {
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
          in_stack_fffffffffffffde0 = CONCAT22(uVar31,(short)local_c8);
          lVar16 = FUN_144b82d60(param_1[0xe],*local_98,iVar25,iVar11,0,in_stack_fffffffffffffde0);
          if (-1 < lVar16) {
            local_150 = (int)param_1[0x11] - iVar25;
            if ((longlong)(local_7c + iVar25) <= (longlong)param_1[0x11]) {
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
            local_130 = local_9c;
            puVar18 = (uint *)*puVar3;
            iStack_14c = iVar7;
            iStack_134 = iVar24;
            if (puVar18 != (uint *)0x0) goto LAB_1428a0371;
LAB_1428a0305:
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
            *puVar3 = puVar17;
            FUN_140217a48(puVar3);
            puVar18 = (uint *)*puVar3;
LAB_1428a0371:
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
                *puVar19 = &PTR_LAB_149ef6e60;
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
                  if (local_118 != 0) goto LAB_1428a0512;
                }
                else {
                  puVar20[0x16] = &LAB_1469928ce;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_1428a0512:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_1428a054b;
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
LAB_1428a054b:
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
                iVar25 = iVar25 + local_7c;
                iVar24 = iVar24 + 1;
                goto LAB_1428a011b;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_1428a0305;
              puVar18 = (uint *)*puVar3;
              *puVar18 = 0xffffffff;
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
              puVar18[0x12] = 0;
              *puVar3 = puVar18;
              uVar29 = (longlong)puVar18 + 0x67;
              uVar27 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0xb,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_98);
          uVar30 = local_78;
          goto LAB_1428a0782;
        }
        local_9c = local_9c + 1;
      }
    }
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
    local_160 = (longlong ******)&LAB_146992b8e;
    pppppplStack_158 = (longlong ******)&local_98;
    FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
    uVar30 = local_78;
  }
LAB_1428a0782:
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



// FUNCTION 1428a0908 Unwind@1428a0908 body=38 status=ok
// SIG undefined Unwind@1428a0908(void)

void Unwind_1428a0908(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a0930 Unwind@1428a0930 body=196 status=ok
// SIG undefined Unwind@1428a0930(void)

void Unwind_1428a0930(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1d8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x98) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 0x188);
        **(undefined8 **)(param_2 + 0x188) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428a09f4 Unwind@1428a09f4 body=95 status=ok
// SIG undefined Unwind@1428a09f4(void)

void Unwind_1428a09f4(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1d8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1d8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1d8))(*(undefined8 **)(param_2 + 0x1d8),1);
    }
  }
  return;
}



// FUNCTION 1428a0a54 Unwind@1428a0a54 body=95 status=ok
// SIG undefined Unwind@1428a0a54(void)

void Unwind_1428a0a54(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1d8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1d8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1d8))(*(undefined8 **)(param_2 + 0x1d8),1);
    }
  }
  return;
}



// FUNCTION 1428a0ab4 Unwind@1428a0ab4 body=67 status=ok
// SIG undefined Unwind@1428a0ab4(void)

void Unwind_1428a0ab4(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  return;
}



// FUNCTION 1428a0af8 Unwind@1428a0af8 body=67 status=ok
// SIG undefined Unwind@1428a0af8(void)

void Unwind_1428a0af8(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x1b0);
  return;
}



// FUNCTION 1428a0b3c Unwind@1428a0b3c body=131 status=ok
// SIG undefined Unwind@1428a0b3c(void)

void Unwind_1428a0b3c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0xa8,*(undefined4 *)(param_2 + 0x1d0));
  FUN_14588b8d6(param_2 + 0xa8);
  while (puVar1 = *(undefined8 **)(param_2 + 0x198), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x198) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428a0bc0 Unwind@1428a0bc0 body=76 status=ok
// SIG undefined Unwind@1428a0bc0(void)

void Unwind_1428a0bc0(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  FUN_14698d9aa(param_2 + 0xe8);
  return;
}



// FUNCTION 1428a0c0c Unwind@1428a0c0c body=38 status=ok
// SIG undefined Unwind@1428a0c0c(void)

void Unwind_1428a0c0c(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a0c34 FUN_1428a0c34 body=4065 status=ok
// SIG undefined FUN_1428a0c34(void)

void FUN_1428a0c34(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  short sVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  byte bVar26;
  longlong lVar27;
  undefined1 local_1f0 [48];
  longlong *local_1c0;
  longlong *local_1b8;
  undefined1 local_1b0;
  undefined1 local_1af;
  byte local_1ae;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined1 *local_1a0;
  longlong local_198;
  longlong local_190;
  ulonglong local_188;
  ulonglong local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  short local_146;
  uint local_144;
  int *local_140;
  ulonglong local_138;
  ulonglong local_130;
  undefined8 *local_128;
  longlong *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  uint local_108;
  undefined4 uStack_104;
  longlong *plStack_100;
  longlong *plStack_f8;
  int local_f0;
  undefined1 local_ec;
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
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  ushort local_72;
  undefined8 *local_70;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_198 = FUN_144b77940(param_1[0xe]);
  local_130 = FUN_144b77ad0(param_1[0xe]);
  local_190 = param_1[0x13];
  local_188 = (ulonglong)param_1[0x14] >> 1;
  local_146 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_146);
  sVar4 = local_146;
  bVar26 = 1;
  local_70 = (undefined8 *)CONCAT44(local_70._4_4_,1);
  local_1af = param_2;
  if (local_146 != 2) {
    bVar26 = *(byte *)((longlong)param_1 + 0x7e);
    local_1af = 1;
  }
  lVar14 = param_1[0x11];
  lVar27 = param_1[0x12];
  local_61 = param_2;
  FUN_14698ac92(local_1f0,param_1[0xe]);
  local_1b8 = &local_190;
  local_1b0 = local_61;
  if (sVar4 == 2) {
    local_70 = (undefined8 *)CONCAT44(local_70._4_4_,(uint)*(ushort *)((longlong)param_1 + 0x7e));
  }
  local_1c0 = param_1;
  local_1ae = bVar26;
  local_1ac = (int)lVar14;
  local_1a8 = (int)lVar27;
  local_1a0 = local_1f0;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar7 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar7 != 2)) {
    uVar8 = 0xff;
    if (iVar7 != 1) goto LAB_1428a0db0;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_1428a0db0;
  }
  uVar8 = 1;
LAB_1428a0db0:
  local_72 = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_72);
  uVar12 = (ulonglong)local_72;
  uVar25 = param_1[0x12];
  uVar21 = uVar12;
  if ((longlong)uVar25 < (longlong)uVar12) {
    uVar21 = uVar25;
  }
  if (uVar12 == 0) {
    uVar21 = uVar25;
  }
  if (local_130 < (ulonglong)((uint)bVar26 * 2) * param_1[0x11] * (longlong)(int)uVar21) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar8;
    iVar7 = FUN_144b77d80(param_1[0xe]);
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if ((int)local_150._4_4_ < iVar7) {
      FUN_14473dbc4(local_178,iVar7);
    }
    local_144 = (uint)(byte)local_70;
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    local_128 = (undefined8 *)(lVar14 + 0x310);
    local_140 = (int *)(lVar14 + 0xc60);
    uVar25 = 0;
    while( true ) {
      uVar21 = uVar25 & 0xff;
      if (local_144 <= (uint)uVar21) break;
      local_180 = uVar25;
      if (local_72 == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar6 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar6 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_120 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_118._0_4_ = SUB84(local_e0,0);
          uStack_118._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar13 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_120;
          plVar5 = plStack_80;
          if ((plVar13 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar5 = plVar13, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar13;
              (*(code *)*puVar18)(plVar20);
              LOCK();
              piVar2 = (int *)((longlong)plVar20 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar5 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar5 = plStack_80;
              }
            }
          }
          plStack_80 = plVar5;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_120);
          lVar14 = local_88[1];
          local_88[1] = lVar14 + local_130;
          if ((ulonglong)(local_88[2] - lVar14) < local_130) {
            FUN_14112c458();
          }
        }
        lVar14 = FUN_144b82e30(param_1[0xe],uVar21,*local_88,local_130);
        puVar18 = local_128;
        if (lVar14 != -1) {
          uStack_118 = &local_a8;
          local_110 = &local_1c0;
          local_108 = (uint)local_88;
          uStack_104 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_100 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_f8 = (longlong *)CONCAT71(plStack_f8._1_7_,(char)uVar25);
          puVar16 = (uint *)*puVar3;
          local_120 = param_1;
          if (puVar16 != (uint *)0x0) goto LAB_1428a16b4;
LAB_1428a164f:
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar15 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar3 = puVar15;
          FUN_140217a48(puVar3);
          puVar16 = (uint *)*puVar3;
LAB_1428a16b4:
          uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
          uVar23 = puVar16[0x12];
          do {
            puVar17 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
            if (puVar17 + 0x20 <= puVar16 + 0x4000) {
              *(undefined8 **)(puVar16 + 0x10) = puVar17 + 0x20;
              puVar16[0x12] = uVar23 + 1;
              local_138 = uVar25;
              local_70 = puVar17;
              FUN_1447247dc(puVar17,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar17 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar17 = &PTR_LAB_149ef6ea0;
              puVar17[1] = local_120;
              puVar17[2] = uStack_118;
              puVar17[3] = local_110;
              puVar17[4] = CONCAT44(uStack_104,local_108);
              puVar17[5] = plStack_100;
              local_108 = 0;
              uStack_104 = 0;
              plStack_100 = (longlong *)0x0;
              *(undefined1 *)(puVar17 + 6) = plStack_f8._0_1_;
              if (puVar17 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_1428a1851;
              }
              else {
                puVar18[0x16] = &LAB_146992e2c;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428a1851:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_140 != 2)) {
                uVar25 = 0x8ff;
                if (*local_140 != 1) goto LAB_1428a1887;
                DVar10 = FUN_140ad26c0();
                DVar11 = GetCurrentThreadId();
                uVar23 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                uVar25 = (ulonglong)uVar23;
                *(uint *)(puVar18 + 0x1e) = uVar23;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar25 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar25 = 0x6ff;
LAB_1428a1887:
                *(int *)(puVar18 + 0x1e) = (int)uVar25;
              }
              uVar23 = (uint)uVar25;
              if ((uVar23 & 0xff) == 0xff) {
                uVar9 = (uint)(uVar25 >> 10) & 3;
                iVar7 = 0;
                if ((uVar23 >> 9 & 1) == 0 || uVar9 < 2) {
                  uVar22 = (&DAT_149e38edc)[uVar9];
                }
                else {
                  uVar22 = 2;
                }
              }
              else {
                iVar7 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                uVar22 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar7,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              iVar7 = (int)local_150;
              uVar25 = local_150 & 0xffffffff;
              uVar23 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar23);
              if (local_150._4_4_ < uVar23) {
                FUN_14476a5c8(local_178,uVar25);
              }
              puVar19 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar19 = local_178;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar7 * 8) = local_70;
              FUN_14698d952(&local_108);
              FUN_14698d952(&local_88);
              goto LAB_1428a19ac;
            }
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar9 = *puVar16;
            *puVar16 = *puVar16 + uVar23 + 1;
            UNLOCK();
            if ((uVar9 ^ uVar23) != 0xffffffff) goto LAB_1428a164f;
            puVar16 = (uint *)*puVar3;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar3 = puVar16;
            uVar25 = (longlong)puVar16 + 0x67;
            uVar23 = 0;
          } while( true );
        }
LAB_1428a1a54:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar8 = local_8c;
        goto LAB_1428a1a79;
      }
      uVar25 = 0;
LAB_1428a0ea6:
      iVar7 = (int)uVar25;
      if ((longlong)uVar25 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar6 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar6 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_120 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_118._0_4_ = SUB84(local_e0,0);
          uStack_118._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar13 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_120;
          plVar5 = plStack_80;
          if ((plVar13 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar5 = plVar13, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar13;
              (*(code *)*puVar18)(plVar20);
              LOCK();
              piVar2 = (int *)((longlong)plVar20 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar5 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar5 = plStack_80;
              }
            }
          }
          plStack_80 = plVar5;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_120);
          lVar14 = local_88[1];
          local_88[1] = lVar14 + local_130;
          if ((ulonglong)(local_88[2] - lVar14) < local_130) {
            FUN_14112c458();
          }
        }
        uVar23 = (int)param_1[0x12] - iVar7;
        if ((longlong)(ulonglong)(iVar7 + (uint)local_72) <= param_1[0x12]) {
          uVar23 = (uint)local_72;
        }
        lVar14 = *local_88;
        lVar27 = (int)uVar23 * local_198;
        uVar8 = FUN_144b77d20(param_1[0xe],uVar25,uVar21);
        lVar14 = FUN_144b82e30(param_1[0xe],uVar8,lVar14,lVar27);
        if (lVar14 != -1) {
          uStack_118 = &local_1c0;
          local_110 = &local_a8;
          plStack_100 = local_88;
          plStack_f8 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_ec = (undefined1)local_180;
          puVar16 = (uint *)*puVar3;
          local_120 = param_1;
          local_108 = uVar23;
          local_f0 = iVar7;
          if (puVar16 != (uint *)0x0) goto LAB_1428a1103;
LAB_1428a1097:
          puVar18 = local_128;
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar15 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar3 = puVar15;
          FUN_140217a48(puVar3);
          puVar16 = (uint *)*puVar3;
LAB_1428a1103:
          uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
          uVar23 = puVar16[0x12];
          do {
            puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
            if (puVar18 + 0x20 <= puVar16 + 0x4000) {
              *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
              puVar16[0x12] = uVar23 + 1;
              local_138 = uVar25;
              local_70 = puVar18;
              FUN_1447247dc(puVar18,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar17 = &PTR_LAB_149ef6e80;
              puVar17[1] = local_120;
              puVar17[2] = uStack_118;
              *(ulonglong *)((longlong)puVar17 + 0x14) =
                   CONCAT44((undefined4)local_110,uStack_118._4_4_);
              *(ulonglong *)((longlong)puVar17 + 0x1c) = CONCAT44(local_108,local_110._4_4_);
              puVar17[5] = plStack_100;
              puVar17[6] = plStack_f8;
              plStack_100 = (longlong *)0x0;
              plStack_f8 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar17 + 0x3c) = local_ec;
              *(int *)(puVar17 + 7) = local_f0;
              if (puVar17 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_1428a12a3;
              }
              else {
                puVar18[0x16] = &LAB_146992baa;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428a12a3:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_140 != 2)) {
                uVar25 = 0x8ff;
                if (*local_140 != 1) goto LAB_1428a12d9;
                DVar10 = FUN_140ad26c0();
                DVar11 = GetCurrentThreadId();
                uVar23 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                uVar25 = (ulonglong)uVar23;
                *(uint *)(puVar18 + 0x1e) = uVar23;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar25 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar25 = 0x6ff;
LAB_1428a12d9:
                *(int *)(puVar18 + 0x1e) = (int)uVar25;
              }
              uVar23 = (uint)uVar25;
              if ((uVar23 & 0xff) == 0xff) {
                uVar9 = (uint)(uVar25 >> 10) & 3;
                iVar24 = 0;
                if ((uVar23 >> 9 & 1) == 0 || uVar9 < 2) {
                  uVar22 = (&DAT_149e38edc)[uVar9];
                }
                else {
                  uVar22 = 2;
                }
              }
              else {
                iVar24 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                         *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                uVar22 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar24,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              uVar25 = local_150;
              iVar24 = (int)local_150;
              uVar23 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar23);
              if (local_150._4_4_ < uVar23) {
                FUN_14476a5c8(local_178,uVar25 & 0xffffffff);
              }
              puVar19 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar19 = local_178;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = local_70;
              FUN_14698d952(&plStack_100);
              FUN_14698d952(&local_88);
              uVar25 = (ulonglong)(iVar7 + (uint)local_72);
              goto LAB_1428a0ea6;
            }
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar9 = *puVar16;
            *puVar16 = *puVar16 + uVar23 + 1;
            UNLOCK();
            if ((uVar9 ^ uVar23) != 0xffffffff) goto LAB_1428a1097;
            puVar16 = (uint *)*puVar3;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar3 = puVar16;
            uVar25 = (longlong)puVar16 + 0x67;
            uVar23 = 0;
          } while( true );
        }
        goto LAB_1428a1a54;
      }
LAB_1428a19ac:
      uVar25 = CONCAT71((int7)(local_180 >> 8),(char)local_180 + '\x01');
    }
    (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,local_8c);
    FUN_14698da02();
    if ((DAT_14c86a9f8 == '\x01') && (*local_140 != 2)) {
      if (*local_140 == 1) {
        FUN_140ad26c0();
        GetCurrentThreadId();
        local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
      }
      else {
        local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
      }
    }
    else {
      local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
    }
    plStack_80 = &local_190;
    local_e8 = 0;
    local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
    local_120 = (longlong *)&LAB_146992f0e;
    uStack_118 = &local_88;
    FUN_1401f8d10(L"ParallelFor Task",(int)param_1[0x12] * (int)param_1[0x11],1);
    uVar8 = local_8c;
  }
LAB_1428a1a79:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,uVar8);
  FUN_14588b8d6(local_178);
  while (plVar20 = local_a0, local_a0 != (longlong *)0x0) {
    plVar13 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar13);
    FUN_1400020a8(plVar20);
  }
  return;
}



// FUNCTION 1428a1c16 Unwind@1428a1c16 body=38 status=ok
// SIG undefined Unwind@1428a1c16(void)

void Unwind_1428a1c16(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a1c3e Unwind@1428a1c3e body=196 status=ok
// SIG undefined Unwind@1428a1c3e(void)

void Unwind_1428a1c3e(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xf0) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 0x100);
        **(undefined8 **)(param_2 + 0x100) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428a1d02 Unwind@1428a1d02 body=83 status=ok
// SIG undefined Unwind@1428a1d02(void)

void Unwind_1428a1d02(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1b8);
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



// FUNCTION 1428a1d56 Unwind@1428a1d56 body=83 status=ok
// SIG undefined Unwind@1428a1d56(void)

void Unwind_1428a1d56(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1b8);
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



// FUNCTION 1428a1daa Unwind@1428a1daa body=67 status=ok
// SIG undefined Unwind@1428a1daa(void)

void Unwind_1428a1daa(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x128);
  return;
}



// FUNCTION 1428a1dee Unwind@1428a1dee body=67 status=ok
// SIG undefined Unwind@1428a1dee(void)

void Unwind_1428a1dee(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x1a0);
  return;
}



// FUNCTION 1428a1e32 Unwind@1428a1e32 body=38 status=ok
// SIG undefined Unwind@1428a1e32(void)

void Unwind_1428a1e32(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a1e5a Unwind@1428a1e5a body=196 status=ok
// SIG undefined Unwind@1428a1e5a(void)

void Unwind_1428a1e5a(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xf0) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 0x100);
        **(undefined8 **)(param_2 + 0x100) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428a1f1e Unwind@1428a1f1e body=95 status=ok
// SIG undefined Unwind@1428a1f1e(void)

void Unwind_1428a1f1e(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1b8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1b8))(*(undefined8 **)(param_2 + 0x1b8),1);
    }
  }
  return;
}



// FUNCTION 1428a1f7e Unwind@1428a1f7e body=95 status=ok
// SIG undefined Unwind@1428a1f7e(void)

void Unwind_1428a1f7e(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1b8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1b8))(*(undefined8 **)(param_2 + 0x1b8),1);
    }
  }
  return;
}



// FUNCTION 1428a1fde Unwind@1428a1fde body=67 status=ok
// SIG undefined Unwind@1428a1fde(void)

void Unwind_1428a1fde(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  return;
}



// FUNCTION 1428a2022 Unwind@1428a2022 body=67 status=ok
// SIG undefined Unwind@1428a2022(void)

void Unwind_1428a2022(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x1a0);
  return;
}



// FUNCTION 1428a2066 Unwind@1428a2066 body=131 status=ok
// SIG undefined Unwind@1428a2066(void)

void Unwind_1428a2066(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0xb0,*(undefined4 *)(param_2 + 0x19c));
  FUN_14588b8d6(param_2 + 0xb0);
  while (puVar1 = *(undefined8 **)(param_2 + 0x188), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x188) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428a20ea Unwind@1428a20ea body=79 status=ok
// SIG undefined Unwind@1428a20ea(void)

void Unwind_1428a20ea(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x140);
  FUN_14698d9aa(param_2 + 0x108);
  return;
}



// FUNCTION 1428a213a Unwind@1428a213a body=79 status=ok
// SIG undefined Unwind@1428a213a(void)

void Unwind_1428a213a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x140);
  FUN_14698d9aa(param_2 + 0x108);
  return;
}



// FUNCTION 1428a218a Unwind@1428a218a body=38 status=ok
// SIG undefined Unwind@1428a218a(void)

void Unwind_1428a218a(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a21b2 FUN_1428a21b2 body=2767 status=ok
// SIG undefined FUN_1428a21b2(void)

void FUN_1428a21b2(longlong ******param_1,undefined1 param_2)

{
  longlong *******ppppppplVar1;
  int *piVar2;
  undefined8 *puVar3;
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
  int iVar25;
  undefined1 uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined4 uVar30;
  undefined4 in_stack_fffffffffffffde0;
  undefined2 uVar31;
  undefined1 local_208 [48];
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
  int local_9c;
  longlong ******local_98;
  longlong ******pppppplStack_90;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined8 *local_70;
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
  FUN_14698ad5e(local_208,param_1[0xe]);
  local_1d0 = (longlong *****)&local_170;
  local_1c4 = local_7c;
  local_1c0 = local_74;
  uVar27 = 1;
  if (sVar8 == 2) {
    uVar27 = (uint)*(ushort *)((longlong)param_1 + 0x7e);
  }
  local_1d8 = (longlong *****)param_1;
  local_1c8 = param_2;
  local_1c7 = uVar26;
  local_1c6 = bVar23;
  local_1b8 = local_208;
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
    if (iVar11 != 1) goto LAB_1428a2388;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_1428a2388;
  }
  uVar30 = 1;
LAB_1428a2388:
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
    local_61 = param_2;
    if ((int)local_178._4_4_ < iVar11) {
      FUN_14473dbc4(local_1a0,iVar11);
    }
    local_c4 = uVar27 & 0xff;
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar16 + 0x308);
    local_c0 = (undefined8 *)(lVar16 + 0x310);
    local_120 = (int *)(lVar16 + 0xc60);
    for (local_128 = 0; local_c8 = (uint)local_128 & 0xff, local_c8 < local_c4;
        local_128 = CONCAT71((int7)((ulonglong)local_128 >> 8),(char)local_128 + '\x01')) {
      local_9c = 0;
      for (iVar11 = 0; ppppplVar4 = param_1[0x12], (longlong)iVar11 < (longlong)ppppplVar4;
          iVar11 = iVar11 + local_74) {
        iVar7 = (int)ppppplVar4 - iVar11;
        if ((longlong)(local_74 + iVar11) <= (longlong)ppppplVar4) {
          iVar7 = local_74;
        }
        iVar25 = 0;
        iVar24 = 0;
LAB_1428a2494:
        uVar31 = (undefined2)((uint)in_stack_fffffffffffffde0 >> 0x10);
        if ((longlong)iVar25 < (longlong)param_1[0x11]) {
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
              ppppppplVar1 = (longlong *******)(pppppplStack_90 + 1);
              *(int *)ppppppplVar1 = *(int *)ppppppplVar1 + -1;
              UNLOCK();
              if (*(int *)ppppppplVar1 == 0) {
                pppppplVar5 = (longlong ******)*pppppplStack_90;
                pppppplStack_90 = (longlong ******)ppppppplVar15;
                (*(code *)*pppppplVar5)(pppppplVar6);
                LOCK();
                piVar2 = (int *)((longlong)pppppplVar6 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                ppppppplVar9 = (longlong *******)pppppplStack_90;
                if (*piVar2 == 0) {
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
          in_stack_fffffffffffffde0 = CONCAT22(uVar31,(short)local_c8);
          lVar16 = FUN_144b82d60(param_1[0xe],*local_98,iVar25,iVar11,0,in_stack_fffffffffffffde0);
          if (-1 < lVar16) {
            local_150 = (int)param_1[0x11] - iVar25;
            if ((longlong)(local_7c + iVar25) <= (longlong)param_1[0x11]) {
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
            local_130 = local_9c;
            puVar18 = (uint *)*puVar3;
            iStack_14c = iVar7;
            iStack_134 = iVar24;
            if (puVar18 != (uint *)0x0) goto LAB_1428a26ea;
LAB_1428a267e:
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
            *puVar3 = puVar17;
            FUN_140217a48(puVar3);
            puVar18 = (uint *)*puVar3;
LAB_1428a26ea:
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
                *puVar19 = &PTR_LAB_149ef6ec0;
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
                  if (local_118 != 0) goto LAB_1428a288b;
                }
                else {
                  puVar20[0x16] = &LAB_146992f2a;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_1428a288b:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_1428a28c4;
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
LAB_1428a28c4:
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
                iVar25 = iVar25 + local_7c;
                iVar24 = iVar24 + 1;
                goto LAB_1428a2494;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_1428a267e;
              puVar18 = (uint *)*puVar3;
              *puVar18 = 0xffffffff;
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
              puVar18[0x12] = 0;
              *puVar3 = puVar18;
              uVar29 = (longlong)puVar18 + 0x67;
              uVar27 = 0;
            } while( true );
          }
          FUN_14020fad6(param_1 + 0xb,
                        L"Couldn\'t open Tiff tile. This is generally caused by a compression format that UE don\'t support."
                       );
          FUN_14698d952(&local_98);
          uVar30 = local_78;
          goto LAB_1428a2afb;
        }
        local_9c = local_9c + 1;
      }
    }
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
    local_160 = (longlong ******)&LAB_1469931e8;
    pppppplStack_158 = (longlong ******)&local_98;
    FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
    uVar30 = local_78;
  }
LAB_1428a2afb:
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



// FUNCTION 1428a2c82 Unwind@1428a2c82 body=38 status=ok
// SIG undefined Unwind@1428a2c82(void)

void Unwind_1428a2c82(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a2caa Unwind@1428a2caa body=196 status=ok
// SIG undefined Unwind@1428a2caa(void)

void Unwind_1428a2caa(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1d8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0x98) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 0x188);
        **(undefined8 **)(param_2 + 0x188) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428a2d6e Unwind@1428a2d6e body=95 status=ok
// SIG undefined Unwind@1428a2d6e(void)

void Unwind_1428a2d6e(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1d8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1d8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1d8))(*(undefined8 **)(param_2 + 0x1d8),1);
    }
  }
  return;
}



// FUNCTION 1428a2dce Unwind@1428a2dce body=95 status=ok
// SIG undefined Unwind@1428a2dce(void)

void Unwind_1428a2dce(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1d8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1d8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1d8))(*(undefined8 **)(param_2 + 0x1d8),1);
    }
  }
  return;
}



// FUNCTION 1428a2e2e Unwind@1428a2e2e body=67 status=ok
// SIG undefined Unwind@1428a2e2e(void)

void Unwind_1428a2e2e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  return;
}



// FUNCTION 1428a2e72 Unwind@1428a2e72 body=67 status=ok
// SIG undefined Unwind@1428a2e72(void)

void Unwind_1428a2e72(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x1b0);
  return;
}



// FUNCTION 1428a2eb6 Unwind@1428a2eb6 body=131 status=ok
// SIG undefined Unwind@1428a2eb6(void)

void Unwind_1428a2eb6(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0xa8,*(undefined4 *)(param_2 + 0x1d0));
  FUN_14588b8d6(param_2 + 0xa8);
  while (puVar1 = *(undefined8 **)(param_2 + 0x198), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x198) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428a2f3a Unwind@1428a2f3a body=76 status=ok
// SIG undefined Unwind@1428a2f3a(void)

void Unwind_1428a2f3a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  FUN_14698d9aa(param_2 + 0xe8);
  return;
}



// FUNCTION 1428a2f86 Unwind@1428a2f86 body=38 status=ok
// SIG undefined Unwind@1428a2f86(void)

void Unwind_1428a2f86(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a2fae FUN_1428a2fae body=4066 status=ok
// SIG undefined FUN_1428a2fae(void)

void FUN_1428a2fae(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  short sVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  byte bVar26;
  longlong lVar27;
  undefined1 local_1f0 [48];
  longlong *local_1c0;
  longlong *local_1b8;
  undefined1 local_1b0;
  undefined1 local_1af;
  byte local_1ae;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined1 *local_1a0;
  longlong local_198;
  longlong local_190;
  ulonglong local_188;
  ulonglong local_180;
  undefined1 local_178 [32];
  undefined1 *local_158;
  undefined8 local_150;
  short local_146;
  uint local_144;
  int *local_140;
  ulonglong local_138;
  ulonglong local_130;
  undefined8 *local_128;
  longlong *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  uint local_108;
  undefined4 uStack_104;
  longlong *plStack_100;
  longlong *plStack_f8;
  int local_f0;
  undefined1 local_ec;
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
  longlong *local_a8;
  longlong *local_a0;
  undefined4 local_8c;
  longlong *local_88;
  longlong *plStack_80;
  ushort local_72;
  undefined8 *local_70;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_198 = FUN_144b77940(param_1[0xe]);
  local_130 = FUN_144b77ad0(param_1[0xe]);
  local_190 = param_1[0x13];
  local_188 = (ulonglong)param_1[0x14] >> 1;
  local_146 = 0;
  FUN_144b7a120(param_1[0xe],0x11c,&local_146);
  sVar4 = local_146;
  bVar26 = 1;
  local_70 = (undefined8 *)CONCAT44(local_70._4_4_,1);
  local_1af = param_2;
  if (local_146 != 2) {
    bVar26 = *(byte *)((longlong)param_1 + 0x7e);
    local_1af = 1;
  }
  lVar14 = param_1[0x11];
  lVar27 = param_1[0x12];
  local_61 = param_2;
  FUN_14698ad5e(local_1f0,param_1[0xe]);
  local_1b8 = &local_190;
  local_1b0 = local_61;
  if (sVar4 == 2) {
    local_70 = (undefined8 *)CONCAT44(local_70._4_4_,(uint)*(ushort *)((longlong)param_1 + 0x7e));
  }
  local_1c0 = param_1;
  local_1ae = bVar26;
  local_1ac = (int)lVar14;
  local_1a8 = (int)lVar27;
  local_1a0 = local_1f0;
  local_a8 = (longlong *)FUN_14001cc68(0x18,0x10);
  *local_a8 = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_158 = (undefined1 *)0x0;
  local_150 = 0x400000000;
  local_a0 = local_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar7 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar7 != 2)) {
    uVar8 = 0xff;
    if (iVar7 != 1) goto LAB_1428a312a;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_1428a312a;
  }
  uVar8 = 1;
LAB_1428a312a:
  local_72 = 0;
  FUN_144b77e20(param_1[0xe],0x116,&local_72);
  uVar12 = (ulonglong)local_72;
  uVar25 = param_1[0x12];
  uVar21 = uVar12;
  if ((longlong)uVar25 < (longlong)uVar12) {
    uVar21 = uVar25;
  }
  if (uVar12 == 0) {
    uVar21 = uVar25;
  }
  if (local_130 < (ulonglong)bVar26 * 4 * param_1[0x11] * (longlong)(int)uVar21) {
    FUN_14020fad6(param_1 + 0xb,
                  L"Tiff strips are smaller then expected. This generaly due to channels of different size which is not supported by UE"
                 );
  }
  else {
    local_8c = uVar8;
    iVar7 = FUN_144b77d80(param_1[0xe]);
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if ((int)local_150._4_4_ < iVar7) {
      FUN_14473dbc4(local_178,iVar7);
    }
    local_144 = (uint)(byte)local_70;
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar3 = (undefined8 *)(lVar14 + 0x308);
    local_128 = (undefined8 *)(lVar14 + 0x310);
    local_140 = (int *)(lVar14 + 0xc60);
    uVar25 = 0;
    while( true ) {
      uVar21 = uVar25 & 0xff;
      if (local_144 <= (uint)uVar21) break;
      local_180 = uVar25;
      if (local_72 == 0) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar6 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar6 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_120 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_118._0_4_ = SUB84(local_e0,0);
          uStack_118._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar13 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_120;
          plVar5 = plStack_80;
          if ((plVar13 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar5 = plVar13, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar13;
              (*(code *)*puVar18)(plVar20);
              LOCK();
              piVar2 = (int *)((longlong)plVar20 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar5 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar5 = plStack_80;
              }
            }
          }
          plStack_80 = plVar5;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_120);
          lVar14 = local_88[1];
          local_88[1] = lVar14 + local_130;
          if ((ulonglong)(local_88[2] - lVar14) < local_130) {
            FUN_14112c458();
          }
        }
        lVar14 = FUN_144b82e30(param_1[0xe],uVar21,*local_88,local_130);
        puVar18 = local_128;
        if (lVar14 != -1) {
          uStack_118 = &local_a8;
          local_110 = &local_1c0;
          local_108 = (uint)local_88;
          uStack_104 = (undefined4)((ulonglong)local_88 >> 0x20);
          plStack_100 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          plStack_f8 = (longlong *)CONCAT71(plStack_f8._1_7_,(char)uVar25);
          puVar16 = (uint *)*puVar3;
          local_120 = param_1;
          if (puVar16 != (uint *)0x0) goto LAB_1428a3a2f;
LAB_1428a39ca:
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar15 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar3 = puVar15;
          FUN_140217a48(puVar3);
          puVar16 = (uint *)*puVar3;
LAB_1428a3a2f:
          uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
          uVar23 = puVar16[0x12];
          do {
            puVar17 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
            if (puVar17 + 0x20 <= puVar16 + 0x4000) {
              *(undefined8 **)(puVar16 + 0x10) = puVar17 + 0x20;
              puVar16[0x12] = uVar23 + 1;
              local_138 = uVar25;
              local_70 = puVar17;
              FUN_1447247dc(puVar17,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar17 = (undefined8 *)FUN_14001cc68(0x38,8);
              *puVar17 = &PTR_LAB_149ef6f00;
              puVar17[1] = local_120;
              puVar17[2] = uStack_118;
              puVar17[3] = local_110;
              puVar17[4] = CONCAT44(uStack_104,local_108);
              puVar17[5] = plStack_100;
              local_108 = 0;
              uStack_104 = 0;
              plStack_100 = (longlong *)0x0;
              *(undefined1 *)(puVar17 + 6) = plStack_f8._0_1_;
              if (puVar17 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_1428a3bcc;
              }
              else {
                puVar18[0x16] = &LAB_146993480;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428a3bcc:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_140 != 2)) {
                uVar25 = 0x8ff;
                if (*local_140 != 1) goto LAB_1428a3c02;
                DVar10 = FUN_140ad26c0();
                DVar11 = GetCurrentThreadId();
                uVar23 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                uVar25 = (ulonglong)uVar23;
                *(uint *)(puVar18 + 0x1e) = uVar23;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar25 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar25 = 0x6ff;
LAB_1428a3c02:
                *(int *)(puVar18 + 0x1e) = (int)uVar25;
              }
              uVar23 = (uint)uVar25;
              if ((uVar23 & 0xff) == 0xff) {
                uVar9 = (uint)(uVar25 >> 10) & 3;
                iVar7 = 0;
                if ((uVar23 >> 9 & 1) == 0 || uVar9 < 2) {
                  uVar22 = (&DAT_149e38edc)[uVar9];
                }
                else {
                  uVar22 = 2;
                }
              }
              else {
                iVar7 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                        *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                uVar22 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar7,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              iVar7 = (int)local_150;
              uVar25 = local_150 & 0xffffffff;
              uVar23 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar23);
              if (local_150._4_4_ < uVar23) {
                FUN_14476a5c8(local_178,uVar25);
              }
              puVar19 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar19 = local_178;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar7 * 8) = local_70;
              FUN_14698d952(&local_108);
              FUN_14698d952(&local_88);
              goto LAB_1428a3d27;
            }
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar9 = *puVar16;
            *puVar16 = *puVar16 + uVar23 + 1;
            UNLOCK();
            if ((uVar9 ^ uVar23) != 0xffffffff) goto LAB_1428a39ca;
            puVar16 = (uint *)*puVar3;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar3 = puVar16;
            uVar25 = (longlong)puVar16 + 0x67;
            uVar23 = 0;
          } while( true );
        }
LAB_1428a3dcf:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar8 = local_8c;
        goto LAB_1428a3df4;
      }
      uVar25 = 0;
LAB_1428a3221:
      iVar7 = (int)uVar25;
      if ((longlong)uVar25 < param_1[0x12]) {
        local_88 = (longlong *)0x0;
        plStack_80 = (longlong *)0x0;
        cVar6 = FUN_14698d83a(&local_a8,&local_88);
        if (cVar6 == '\0') {
          local_e0 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar20 = plStack_80;
          local_e0[1] = (longlong)&DAT_100000001;
          *local_e0 = (longlong)&PTR_LAB_149ef6700;
          local_120 = local_e0 + 2;
          local_e0[2] = 0;
          local_e0[3] = 0;
          local_e0[4] = 0;
          uStack_118._0_4_ = SUB84(local_e0,0);
          uStack_118._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
          if (local_e0 == (longlong *)0x0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
            plVar13 = local_e0;
          }
          local_e8 = 0;
          local_88 = local_120;
          plVar5 = plStack_80;
          if ((plVar13 != plStack_80) &&
             (local_e0 = (longlong *)0x0, plVar5 = plVar13, plStack_80 != (longlong *)0x0)) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              puVar18 = (undefined8 *)*plStack_80;
              plStack_80 = plVar13;
              (*(code *)*puVar18)(plVar20);
              LOCK();
              piVar2 = (int *)((longlong)plVar20 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar5 = plStack_80;
              if (*piVar2 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                plVar5 = plStack_80;
              }
            }
          }
          plStack_80 = plVar5;
          FUN_14698d952(&local_e8);
          FUN_14698d9aa(&local_120);
          lVar14 = local_88[1];
          local_88[1] = lVar14 + local_130;
          if ((ulonglong)(local_88[2] - lVar14) < local_130) {
            FUN_14112c458();
          }
        }
        uVar23 = (int)param_1[0x12] - iVar7;
        if ((longlong)(ulonglong)(iVar7 + (uint)local_72) <= param_1[0x12]) {
          uVar23 = (uint)local_72;
        }
        lVar14 = *local_88;
        lVar27 = (int)uVar23 * local_198;
        uVar8 = FUN_144b77d20(param_1[0xe],uVar25,uVar21);
        lVar14 = FUN_144b82e30(param_1[0xe],uVar8,lVar14,lVar27);
        if (lVar14 != -1) {
          uStack_118 = &local_1c0;
          local_110 = &local_a8;
          plStack_100 = local_88;
          plStack_f8 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
            UNLOCK();
          }
          local_ec = (undefined1)local_180;
          puVar16 = (uint *)*puVar3;
          local_120 = param_1;
          local_108 = uVar23;
          local_f0 = iVar7;
          if (puVar16 != (uint *)0x0) goto LAB_1428a347e;
LAB_1428a3412:
          puVar18 = local_128;
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_142885ccb);
          }
          puVar15 = (undefined4 *)*puVar18;
          *puVar18 = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar3 = puVar15;
          FUN_140217a48(puVar3);
          puVar16 = (uint *)*puVar3;
LAB_1428a347e:
          uVar25 = *(longlong *)(puVar16 + 0x10) + 0xf;
          uVar23 = puVar16[0x12];
          do {
            puVar18 = (undefined8 *)(uVar25 & 0xfffffffffffffff0);
            if (puVar18 + 0x20 <= puVar16 + 0x4000) {
              *(undefined8 **)(puVar16 + 0x10) = puVar18 + 0x20;
              puVar16[0x12] = uVar23 + 1;
              local_138 = uVar25;
              local_70 = puVar18;
              FUN_1447247dc(puVar18,0);
              puVar18 = local_70;
              *local_70 = &PTR_FUN_149ef6718;
              local_e8 = 0;
              local_d8 = (longlong *)0x0;
              puVar17 = (undefined8 *)FUN_14001cc68(0x40,8);
              *puVar17 = &PTR_LAB_149ef6ee0;
              puVar17[1] = local_120;
              puVar17[2] = uStack_118;
              *(ulonglong *)((longlong)puVar17 + 0x14) =
                   CONCAT44((undefined4)local_110,uStack_118._4_4_);
              *(ulonglong *)((longlong)puVar17 + 0x1c) = CONCAT44(local_108,local_110._4_4_);
              puVar17[5] = plStack_100;
              puVar17[6] = plStack_f8;
              plStack_100 = (longlong *)0x0;
              plStack_f8 = (longlong *)0x0;
              *(undefined1 *)((longlong)puVar17 + 0x3c) = local_ec;
              *(int *)(puVar17 + 7) = local_f0;
              if (puVar17 + 1 == (undefined8 *)0x0) {
                puVar18[0x16] = local_e8;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
                if (local_e8 != 0) goto LAB_1428a361e;
              }
              else {
                puVar18[0x16] = &LAB_146993204;
                puVar18[0x18] = puVar17;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428a361e:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_140 != 2)) {
                uVar25 = 0x8ff;
                if (*local_140 != 1) goto LAB_1428a3654;
                DVar10 = FUN_140ad26c0();
                DVar11 = GetCurrentThreadId();
                uVar23 = (uint)(DVar10 != DVar11) * 0x200 + 0x6ff;
                uVar25 = (ulonglong)uVar23;
                *(uint *)(puVar18 + 0x1e) = uVar23;
                if (local_e8 != 0) {
                  plVar20 = local_d8;
                  if (local_d8 == (longlong *)0x0) {
                    plVar20 = (longlong *)&local_c8;
                  }
                  (**(code **)(*plVar20 + 0x10))();
                  uVar25 = (ulonglong)*(uint *)(puVar18 + 0x1e);
                }
              }
              else {
                uVar25 = 0x6ff;
LAB_1428a3654:
                *(int *)(puVar18 + 0x1e) = (int)uVar25;
              }
              uVar23 = (uint)uVar25;
              if ((uVar23 & 0xff) == 0xff) {
                uVar9 = (uint)(uVar25 >> 10) & 3;
                iVar24 = 0;
                if ((uVar23 >> 9 & 1) == 0 || uVar9 < 2) {
                  uVar22 = (&DAT_149e38edc)[uVar9];
                }
                else {
                  uVar22 = 2;
                }
              }
              else {
                iVar24 = (uVar23 >> 7 & 2 | (uint)(uVar25 >> 9) & 1) +
                         *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar23 & 0xff) * 4);
                uVar22 = 5;
              }
              FUN_144a24082(puVar18,L"GraphTask",uVar22,iVar24,0);
              if (puVar18 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                UNLOCK();
              }
              local_e8 = CONCAT71(local_e8._1_7_,1);
              FUN_1447439e4(puVar18,&local_e8);
              uVar25 = local_150;
              iVar24 = (int)local_150;
              uVar23 = (int)local_150 + 1;
              local_150 = CONCAT44(local_150._4_4_,uVar23);
              if (local_150._4_4_ < uVar23) {
                FUN_14476a5c8(local_178,uVar25 & 0xffffffff);
              }
              puVar19 = local_158;
              if (local_158 == (undefined1 *)0x0) {
                puVar19 = local_178;
              }
              *(undefined8 **)(puVar19 + (longlong)iVar24 * 8) = local_70;
              FUN_14698d952(&plStack_100);
              FUN_14698d952(&local_88);
              uVar25 = (ulonglong)(iVar7 + (uint)local_72);
              goto LAB_1428a3221;
            }
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar9 = *puVar16;
            *puVar16 = *puVar16 + uVar23 + 1;
            UNLOCK();
            if ((uVar9 ^ uVar23) != 0xffffffff) goto LAB_1428a3412;
            puVar16 = (uint *)*puVar3;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar3 = puVar16;
            uVar25 = (longlong)puVar16 + 0x67;
            uVar23 = 0;
          } while( true );
        }
        goto LAB_1428a3dcf;
      }
LAB_1428a3d27:
      uVar25 = CONCAT71((int7)(local_180 >> 8),(char)local_180 + '\x01');
    }
    (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,local_8c);
    FUN_14698da02();
    if ((DAT_14c86a9f8 == '\x01') && (*local_140 != 2)) {
      if (*local_140 == 1) {
        FUN_140ad26c0();
        GetCurrentThreadId();
        local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
      }
      else {
        local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
      }
    }
    else {
      local_88 = (longlong *)CONCAT71(local_88._1_7_,local_61);
    }
    plStack_80 = &local_190;
    local_e8 = 0;
    local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffff00000000);
    local_120 = (longlong *)&LAB_146993562;
    uStack_118 = &local_88;
    FUN_1401f8d10(L"ParallelFor Task",(int)param_1[0x12] * (int)param_1[0x11],1);
    uVar8 = local_8c;
  }
LAB_1428a3df4:
  (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_178,uVar8);
  FUN_14588b8d6(local_178);
  while (plVar20 = local_a0, local_a0 != (longlong *)0x0) {
    plVar13 = local_a0 + 1;
    local_a0 = (longlong *)*local_a0;
    FUN_14698d952(plVar13);
    FUN_1400020a8(plVar20);
  }
  return;
}



// FUNCTION 1428a3f90 Unwind@1428a3f90 body=38 status=ok
// SIG undefined Unwind@1428a3f90(void)

void Unwind_1428a3f90(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a3fb8 Unwind@1428a3fb8 body=196 status=ok
// SIG undefined Unwind@1428a3fb8(void)

void Unwind_1428a3fb8(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xf0) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 0x100);
        **(undefined8 **)(param_2 + 0x100) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428a407c Unwind@1428a407c body=83 status=ok
// SIG undefined Unwind@1428a407c(void)

void Unwind_1428a407c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1b8);
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



// FUNCTION 1428a40d0 Unwind@1428a40d0 body=83 status=ok
// SIG undefined Unwind@1428a40d0(void)

void Unwind_1428a40d0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1b8);
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



// FUNCTION 1428a4124 Unwind@1428a4124 body=67 status=ok
// SIG undefined Unwind@1428a4124(void)

void Unwind_1428a4124(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x128);
  return;
}



// FUNCTION 1428a4168 Unwind@1428a4168 body=67 status=ok
// SIG undefined Unwind@1428a4168(void)

void Unwind_1428a4168(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x1a0);
  return;
}



// FUNCTION 1428a41ac Unwind@1428a41ac body=38 status=ok
// SIG undefined Unwind@1428a41ac(void)

void Unwind_1428a41ac(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a41d4 Unwind@1428a41d4 body=196 status=ok
// SIG undefined Unwind@1428a41d4(void)

void Unwind_1428a41d4(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int *piVar2;
  int *_Memory;
  
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    piVar2 = (int *)(*(ulonglong *)(param_2 + 0xf0) & 0xffffffffffff0000);
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
        _Memory = (int *)**(undefined8 **)(param_2 + 0x100);
        **(undefined8 **)(param_2 + 0x100) = piVar2;
        if (_Memory == (int *)0x0) {
          return;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return;
}



// FUNCTION 1428a4298 Unwind@1428a4298 body=95 status=ok
// SIG undefined Unwind@1428a4298(void)

void Unwind_1428a4298(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1b8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1b8))(*(undefined8 **)(param_2 + 0x1b8),1);
    }
  }
  return;
}



// FUNCTION 1428a42f8 Unwind@1428a42f8 body=95 status=ok
// SIG undefined Unwind@1428a42f8(void)

void Unwind_1428a42f8(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  if (*(longlong *)(param_2 + 0x1b8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x1b8) + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)**(undefined8 **)(param_2 + 0x1b8))(*(undefined8 **)(param_2 + 0x1b8),1);
    }
  }
  return;
}



// FUNCTION 1428a4358 Unwind@1428a4358 body=67 status=ok
// SIG undefined Unwind@1428a4358(void)

void Unwind_1428a4358(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  return;
}



// FUNCTION 1428a439c Unwind@1428a439c body=67 status=ok
// SIG undefined Unwind@1428a439c(void)

void Unwind_1428a439c(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x1a0);
  return;
}



// FUNCTION 1428a43e0 Unwind@1428a43e0 body=131 status=ok
// SIG undefined Unwind@1428a43e0(void)

void Unwind_1428a43e0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(*DAT_14c82b500 + 0x60))
            (DAT_14c82b500,param_2 + 0xb0,*(undefined4 *)(param_2 + 0x19c));
  FUN_14588b8d6(param_2 + 0xb0);
  while (puVar1 = *(undefined8 **)(param_2 + 0x188), puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + 0x188) = *puVar1;
    FUN_14698d952(puVar1 + 1);
    FUN_1400020a8(puVar1);
  }
  return;
}



// FUNCTION 1428a4464 Unwind@1428a4464 body=79 status=ok
// SIG undefined Unwind@1428a4464(void)

void Unwind_1428a4464(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x140);
  FUN_14698d9aa(param_2 + 0x108);
  return;
}



// FUNCTION 1428a44b4 Unwind@1428a44b4 body=79 status=ok
// SIG undefined Unwind@1428a44b4(void)

void Unwind_1428a44b4(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x140);
  FUN_14698d9aa(param_2 + 0x108);
  return;
}



// FUNCTION 1428a4504 Unwind@1428a4504 body=38 status=ok
// SIG undefined Unwind@1428a4504(void)

void Unwind_1428a4504(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a452c FUN_1428a452c body=2751 status=ok
// SIG undefined FUN_1428a452c(void)

void FUN_1428a452c(longlong ******param_1,undefined1 param_2,char param_3)

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
    if (iVar11 != 1) goto LAB_1428a46f9;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_1428a46f9;
  }
  uVar30 = 1;
LAB_1428a46f9:
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
LAB_1428a4804:
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
            if (puVar18 != (uint *)0x0) goto LAB_1428a4a4a;
LAB_1428a49de:
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
LAB_1428a4a4a:
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
                *puVar19 = &PTR_LAB_149ef6f20;
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
                  if (local_118 != 0) goto LAB_1428a4bea;
                }
                else {
                  puVar20[0x16] = &LAB_1469935f2;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_1428a4bea:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_1428a4c20;
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
LAB_1428a4c20:
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
                goto LAB_1428a4804;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_1428a49de;
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
          goto LAB_1428a4e5a;
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
      local_160 = (longlong ******)&LAB_14699387a;
      pppppplStack_158 = (longlong ******)&local_98;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
      uVar30 = local_78;
    }
  }
LAB_1428a4e5a:
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



// FUNCTION 1428a4fec Unwind@1428a4fec body=38 status=ok
// SIG undefined Unwind@1428a4fec(void)

void Unwind_1428a4fec(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a5014 Unwind@1428a5014 body=196 status=ok
// SIG undefined Unwind@1428a5014(void)

void Unwind_1428a5014(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a50d8 Unwind@1428a50d8 body=95 status=ok
// SIG undefined Unwind@1428a50d8(void)

void Unwind_1428a50d8(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a5138 Unwind@1428a5138 body=95 status=ok
// SIG undefined Unwind@1428a5138(void)

void Unwind_1428a5138(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a5198 Unwind@1428a5198 body=64 status=ok
// SIG undefined Unwind@1428a5198(void)

void Unwind_1428a5198(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  return;
}



// FUNCTION 1428a51d8 Unwind@1428a51d8 body=67 status=ok
// SIG undefined Unwind@1428a51d8(void)

void Unwind_1428a51d8(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428a521c Unwind@1428a521c body=131 status=ok
// SIG undefined Unwind@1428a521c(void)

void Unwind_1428a521c(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a52a0 Unwind@1428a52a0 body=76 status=ok
// SIG undefined Unwind@1428a52a0(void)

void Unwind_1428a52a0(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  FUN_14698d9aa(param_2 + 0xb8);
  return;
}



// FUNCTION 1428a52ec Unwind@1428a52ec body=38 status=ok
// SIG undefined Unwind@1428a52ec(void)

void Unwind_1428a52ec(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a5314 FUN_1428a5314 body=4057 status=ok
// SIG undefined FUN_1428a5314(void)

void FUN_1428a5314(longlong *param_1,undefined1 param_2,char param_3)

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
    if (iVar6 != 1) goto LAB_1428a547a;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428a547a;
  }
  uVar7 = 1;
LAB_1428a547a:
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
          if (puVar15 != (uint *)0x0) goto LAB_1428a5d9c;
LAB_1428a5d39:
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
LAB_1428a5d9c:
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
              *puVar16 = &PTR_LAB_149ef6f60;
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
                if (local_e8 != 0) goto LAB_1428a5f2f;
              }
              else {
                puVar18[0x16] = &LAB_146993ad8;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428a5f2f:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428a5f65;
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
LAB_1428a5f65:
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
              goto LAB_1428a6088;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428a5d39;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            puVar16 = (undefined8 *)((longlong)puVar15 + 0x67);
            uVar27 = 0;
          } while( true );
        }
LAB_1428a6134:
        FUN_14020fad6(plVar20 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        goto LAB_1428a615a;
      }
      puVar18 = (undefined8 *)0x0;
LAB_1428a5595:
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
          if (puVar15 != (uint *)0x0) goto LAB_1428a57f6;
LAB_1428a578f:
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
LAB_1428a57f6:
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
              *puVar16 = &PTR_LAB_149ef6f40;
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
                if (local_e8 != 0) goto LAB_1428a5995;
              }
              else {
                puVar18[0x16] = &LAB_146993896;
                puVar18[0x18] = puVar16;
                *(undefined4 *)(puVar18 + 0x1c) = local_b8;
                *(undefined4 *)((longlong)puVar18 + 0xe4) = uStack_b4;
                *(undefined4 *)(puVar18 + 0x1d) = uStack_b0;
                *(undefined4 *)((longlong)puVar18 + 0xec) = uStack_ac;
                *(undefined4 *)(puVar18 + 0x1a) = local_c8;
                *(undefined4 *)((longlong)puVar18 + 0xd4) = uStack_c4;
                *(undefined4 *)(puVar18 + 0x1b) = uStack_c0;
                *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_bc;
LAB_1428a5995:
                local_e8 = 0;
              }
              local_d8 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_148 != 2)) {
                uVar28 = 0x8ff;
                if (*local_148 != 1) goto LAB_1428a59cb;
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
LAB_1428a59cb:
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
              goto LAB_1428a5595;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar27 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar27) != 0xffffffff) goto LAB_1428a578f;
            puVar15 = (uint *)*puVar2;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar2 = puVar15;
            uVar28 = (longlong)puVar15 + 0x67;
            uVar27 = 0;
          } while( true );
        }
        goto LAB_1428a6134;
      }
LAB_1428a6088:
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
      local_130 = (longlong *)&LAB_146993bba;
      plStack_80 = &local_1c8;
      uStack_128 = &local_88;
      FUN_1401f8d10(L"ParallelFor Task",(int)plVar20[0x12] * (int)plVar20[0x11],1);
      uVar7 = local_8c;
    }
  }
LAB_1428a615a:
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



// FUNCTION 1428a62ee Unwind@1428a62ee body=38 status=ok
// SIG undefined Unwind@1428a62ee(void)

void Unwind_1428a62ee(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a6316 Unwind@1428a6316 body=193 status=ok
// SIG undefined Unwind@1428a6316(void)

void Unwind_1428a6316(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a63d8 Unwind@1428a63d8 body=83 status=ok
// SIG undefined Unwind@1428a63d8(void)

void Unwind_1428a63d8(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a642c Unwind@1428a642c body=83 status=ok
// SIG undefined Unwind@1428a642c(void)

void Unwind_1428a642c(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a6480 Unwind@1428a6480 body=64 status=ok
// SIG undefined Unwind@1428a6480(void)

void Unwind_1428a6480(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf8);
  return;
}



// FUNCTION 1428a64c0 Unwind@1428a64c0 body=67 status=ok
// SIG undefined Unwind@1428a64c0(void)

void Unwind_1428a64c0(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428a6504 Unwind@1428a6504 body=38 status=ok
// SIG undefined Unwind@1428a6504(void)

void Unwind_1428a6504(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a652c Unwind@1428a652c body=196 status=ok
// SIG undefined Unwind@1428a652c(void)

void Unwind_1428a652c(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a65f0 Unwind@1428a65f0 body=95 status=ok
// SIG undefined Unwind@1428a65f0(void)

void Unwind_1428a65f0(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a6650 Unwind@1428a6650 body=95 status=ok
// SIG undefined Unwind@1428a6650(void)

void Unwind_1428a6650(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a66b0 Unwind@1428a66b0 body=64 status=ok
// SIG undefined Unwind@1428a66b0(void)

void Unwind_1428a66b0(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xf0);
  return;
}



// FUNCTION 1428a66f0 Unwind@1428a66f0 body=67 status=ok
// SIG undefined Unwind@1428a66f0(void)

void Unwind_1428a66f0(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428a6734 Unwind@1428a6734 body=131 status=ok
// SIG undefined Unwind@1428a6734(void)

void Unwind_1428a6734(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a67b8 Unwind@1428a67b8 body=76 status=ok
// SIG undefined Unwind@1428a67b8(void)

void Unwind_1428a67b8(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428a6804 Unwind@1428a6804 body=76 status=ok
// SIG undefined Unwind@1428a6804(void)

void Unwind_1428a6804(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x120);
  FUN_14698d9aa(param_2 + 0xd8);
  return;
}



// FUNCTION 1428a6850 Unwind@1428a6850 body=38 status=ok
// SIG undefined Unwind@1428a6850(void)

void Unwind_1428a6850(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a6878 FUN_1428a6878 body=2405 status=ok
// SIG undefined FUN_1428a6878(void)

void FUN_1428a6878(longlong param_1)

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
    if (iVar8 != 1) goto LAB_1428a6a44;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 != DVar11) goto LAB_1428a6a44;
  }
  local_74 = 1;
LAB_1428a6a44:
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
LAB_1428a6b3d:
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
            if (puVar15 != (uint *)0x0) goto LAB_1428a6d86;
LAB_1428a6d1c:
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
LAB_1428a6d86:
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
                *puVar16 = &PTR_LAB_149ef6f80;
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
                  if (local_148 != 0) goto LAB_1428a6f12;
                }
                else {
                  puVar17[0x16] = &LAB_146993bd6;
                  puVar17[0x18] = puVar16;
                  *(undefined4 *)(puVar17 + 0x1c) = local_118;
                  *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_114;
                  *(undefined4 *)(puVar17 + 0x1d) = uStack_110;
                  *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_10c;
                  *(undefined4 *)(puVar17 + 0x1a) = local_128;
                  *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_124;
                  *(undefined4 *)(puVar17 + 0x1b) = uStack_120;
                  *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_11c;
LAB_1428a6f12:
                  local_148 = 0;
                }
                local_138 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_190 != 2)) {
                  uVar24 = 0x8ff;
                  if (*local_190 != 1) goto LAB_1428a6f45;
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
LAB_1428a6f45:
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
                goto LAB_1428a6b3d;
              }
              *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
              LOCK();
              uVar9 = *puVar15;
              *puVar15 = *puVar15 + uVar22 + 1;
              UNLOCK();
              if ((uVar9 ^ uVar22) != 0xffffffff) goto LAB_1428a6d1c;
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
          goto LAB_1428a7166;
        }
        local_8c = local_8c + 1;
      }
    }
  }
LAB_1428a7166:
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



// FUNCTION 1428a71de Unwind@1428a71de body=38 status=ok
// SIG undefined Unwind@1428a71de(void)

void Unwind_1428a71de(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a7206 Unwind@1428a7206 body=196 status=ok
// SIG undefined Unwind@1428a7206(void)

void Unwind_1428a7206(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a72ca Unwind@1428a72ca body=95 status=ok
// SIG undefined Unwind@1428a72ca(void)

void Unwind_1428a72ca(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a732a Unwind@1428a732a body=95 status=ok
// SIG undefined Unwind@1428a732a(void)

void Unwind_1428a732a(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a738a Unwind@1428a738a body=67 status=ok
// SIG undefined Unwind@1428a738a(void)

void Unwind_1428a738a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x110);
  return;
}



// FUNCTION 1428a73ce Unwind@1428a73ce body=67 status=ok
// SIG undefined Unwind@1428a73ce(void)

void Unwind_1428a73ce(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428a7412 Unwind@1428a7412 body=38 status=ok
// SIG undefined Unwind@1428a7412(void)

void Unwind_1428a7412(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a743a Unwind@1428a743a body=130 status=ok
// SIG undefined Unwind@1428a743a(void)

void Unwind_1428a743a(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a74bc Unwind@1428a74bc body=73 status=ok
// SIG undefined Unwind@1428a74bc(void)

void Unwind_1428a74bc(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xb0);
  FUN_14698d9aa(param_2 + 0xf8);
  return;
}



// FUNCTION 1428a7506 FUN_1428a7506 body=3601 status=ok
// SIG undefined FUN_1428a7506(void)

void FUN_1428a7506(longlong *param_1)

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
    if (iVar6 != 1) goto LAB_1428a765a;
    DVar9 = FUN_140ad26c0();
    DVar10 = GetCurrentThreadId();
    if (DVar9 != DVar10) goto LAB_1428a765a;
  }
  uVar7 = 1;
LAB_1428a765a:
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
          if (puVar15 != (uint *)0x0) goto LAB_1428a7ef6;
LAB_1428a7e93:
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
LAB_1428a7ef6:
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
              *puVar16 = &PTR_LAB_149ef6fc0;
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
                if (local_128 != 0) goto LAB_1428a807c;
              }
              else {
                puVar17[0x16] = &LAB_14699410c;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428a807c:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428a80af;
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
LAB_1428a80af:
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
              goto LAB_1428a81cc;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428a7e93;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
LAB_1428a826b:
        FUN_14020fad6(param_1 + 0xb,
                      L"Couldn\'t open Tiff strip. This is generally caused by a compression format that UE don\'t support."
                     );
        FUN_14698d952(&local_88);
        uVar7 = local_8c;
        break;
      }
      uVar24 = 0;
LAB_1428a7749:
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
          if (puVar15 != (uint *)0x0) goto LAB_1428a798b;
LAB_1428a7924:
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
LAB_1428a798b:
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
              *puVar16 = &PTR_LAB_149ef6fa0;
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
                if (local_128 != 0) goto LAB_1428a7b14;
              }
              else {
                puVar17[0x16] = &LAB_146993e92;
                puVar17[0x18] = puVar16;
                *(undefined4 *)(puVar17 + 0x1c) = local_f8;
                *(undefined4 *)((longlong)puVar17 + 0xe4) = uStack_f4;
                *(undefined4 *)(puVar17 + 0x1d) = uStack_f0;
                *(undefined4 *)((longlong)puVar17 + 0xec) = uStack_ec;
                *(undefined4 *)(puVar17 + 0x1a) = local_108;
                *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_104;
                *(undefined4 *)(puVar17 + 0x1b) = uStack_100;
                *(undefined4 *)((longlong)puVar17 + 0xdc) = uStack_fc;
LAB_1428a7b14:
                local_128 = 0;
              }
              local_118 = (longlong *)0x0;
              if ((DAT_14c86a9f8 == '\x01') && (*local_180 != 2)) {
                uVar24 = 0x8ff;
                if (*local_180 != 1) goto LAB_1428a7b47;
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
LAB_1428a7b47:
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
              goto LAB_1428a7749;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar8 = *puVar15;
            *puVar15 = *puVar15 + uVar22 + 1;
            UNLOCK();
            if ((uVar8 ^ uVar22) != 0xffffffff) goto LAB_1428a7924;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar24 = (longlong)puVar15 + 0x67;
            uVar22 = 0;
          } while( true );
        }
        goto LAB_1428a826b;
      }
LAB_1428a81cc:
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



// FUNCTION 1428a8318 Unwind@1428a8318 body=38 status=ok
// SIG undefined Unwind@1428a8318(void)

void Unwind_1428a8318(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a8340 Unwind@1428a8340 body=193 status=ok
// SIG undefined Unwind@1428a8340(void)

void Unwind_1428a8340(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a8402 Unwind@1428a8402 body=83 status=ok
// SIG undefined Unwind@1428a8402(void)

void Unwind_1428a8402(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a8456 Unwind@1428a8456 body=83 status=ok
// SIG undefined Unwind@1428a8456(void)

void Unwind_1428a8456(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a84aa Unwind@1428a84aa body=67 status=ok
// SIG undefined Unwind@1428a84aa(void)

void Unwind_1428a84aa(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x138);
  return;
}



// FUNCTION 1428a84ee Unwind@1428a84ee body=67 status=ok
// SIG undefined Unwind@1428a84ee(void)

void Unwind_1428a84ee(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428a8532 Unwind@1428a8532 body=38 status=ok
// SIG undefined Unwind@1428a8532(void)

void Unwind_1428a8532(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a855a Unwind@1428a855a body=193 status=ok
// SIG undefined Unwind@1428a855a(void)

void Unwind_1428a855a(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a861c Unwind@1428a861c body=95 status=ok
// SIG undefined Unwind@1428a861c(void)

void Unwind_1428a861c(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a867c Unwind@1428a867c body=95 status=ok
// SIG undefined Unwind@1428a867c(void)

void Unwind_1428a867c(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a86dc Unwind@1428a86dc body=67 status=ok
// SIG undefined Unwind@1428a86dc(void)

void Unwind_1428a86dc(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x130);
  return;
}



// FUNCTION 1428a8720 Unwind@1428a8720 body=67 status=ok
// SIG undefined Unwind@1428a8720(void)

void Unwind_1428a8720(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x170);
  return;
}



// FUNCTION 1428a8764 Unwind@1428a8764 body=38 status=ok
// SIG undefined Unwind@1428a8764(void)

void Unwind_1428a8764(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a878c Unwind@1428a878c body=130 status=ok
// SIG undefined Unwind@1428a878c(void)

void Unwind_1428a878c(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a880e Unwind@1428a880e body=76 status=ok
// SIG undefined Unwind@1428a880e(void)

void Unwind_1428a880e(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428a885a Unwind@1428a885a body=76 status=ok
// SIG undefined Unwind@1428a885a(void)

void Unwind_1428a885a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  FUN_14698d9aa(param_2 + 0x118);
  return;
}



// FUNCTION 1428a88a6 FUN_1428a88a6 body=2752 status=ok
// SIG undefined FUN_1428a88a6(void)

void FUN_1428a88a6(longlong ******param_1,undefined1 param_2,char param_3)

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
    if (iVar11 != 1) goto LAB_1428a8a73;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_1428a8a73;
  }
  uVar30 = 1;
LAB_1428a8a73:
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
LAB_1428a8b7f:
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
            if (puVar18 != (uint *)0x0) goto LAB_1428a8dc5;
LAB_1428a8d59:
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
LAB_1428a8dc5:
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
                *puVar19 = &PTR_LAB_149ef6fe0;
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
                  if (local_118 != 0) goto LAB_1428a8f65;
                }
                else {
                  puVar20[0x16] = &LAB_146994262;
                  puVar20[0x18] = puVar19;
                  *(undefined4 *)(puVar20 + 0x1c) = local_e8;
                  *(undefined4 *)((longlong)puVar20 + 0xe4) = uStack_e4;
                  *(undefined4 *)(puVar20 + 0x1d) = uStack_e0;
                  *(undefined4 *)((longlong)puVar20 + 0xec) = uStack_dc;
                  *(undefined4 *)(puVar20 + 0x1a) = local_f8;
                  *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_f4;
                  *(undefined4 *)(puVar20 + 0x1b) = uStack_f0;
                  *(undefined4 *)((longlong)puVar20 + 0xdc) = uStack_ec;
LAB_1428a8f65:
                  local_118 = 0;
                }
                local_108 = (longlong *)0x0;
                if ((DAT_14c86a9f8 == '\x01') && (*local_120 != 2)) {
                  uVar29 = 0x8ff;
                  if (*local_120 != 1) goto LAB_1428a8f9b;
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
LAB_1428a8f9b:
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
                goto LAB_1428a8b7f;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar12 = *puVar18;
              *puVar18 = *puVar18 + uVar27 + 1;
              UNLOCK();
              if ((uVar12 ^ uVar27) != 0xffffffff) goto LAB_1428a8d59;
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
          goto LAB_1428a91d5;
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
      local_160 = (longlong ******)&LAB_14699451e;
      pppppplStack_158 = (longlong ******)&local_98;
      FUN_1401f8d10(L"ParallelFor Task",*(int *)(param_1 + 0x12) * *(int *)(param_1 + 0x11),1);
      uVar30 = local_78;
    }
  }
LAB_1428a91d5:
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



// FUNCTION 1428a9366 Unwind@1428a9366 body=38 status=ok
// SIG undefined Unwind@1428a9366(void)

void Unwind_1428a9366(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 1428a938e Unwind@1428a938e body=196 status=ok
// SIG undefined Unwind@1428a938e(void)

void Unwind_1428a938e(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a9452 Unwind@1428a9452 body=95 status=ok
// SIG undefined Unwind@1428a9452(void)

void Unwind_1428a9452(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a94b2 Unwind@1428a94b2 body=95 status=ok
// SIG undefined Unwind@1428a94b2(void)

void Unwind_1428a94b2(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a9512 Unwind@1428a9512 body=64 status=ok
// SIG undefined Unwind@1428a9512(void)

void Unwind_1428a9512(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0xd0);
  return;
}



// FUNCTION 1428a9552 Unwind@1428a9552 body=67 status=ok
// SIG undefined Unwind@1428a9552(void)

void Unwind_1428a9552(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x180);
  return;
}



// FUNCTION 1428a9596 Unwind@1428a9596 body=131 status=ok
// SIG undefined Unwind@1428a9596(void)

void Unwind_1428a9596(undefined8 param_1,longlong param_2)

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



// FUNCTION 1428a961a Unwind@1428a961a body=76 status=ok
// SIG undefined Unwind@1428a961a(void)

void Unwind_1428a961a(undefined8 param_1,longlong param_2)

{
  FUN_14698d952(param_2 + 0x100);
  FUN_14698d9aa(param_2 + 0xb8);
  return;
}



// FUNCTION 1428a9666 Unwind@1428a9666 body=38 status=ok
// SIG undefined Unwind@1428a9666(void)

void Unwind_1428a9666(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}


