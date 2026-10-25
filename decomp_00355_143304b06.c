// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143304b06 FUN_143304b06 body=342 status=ok
// SIG undefined FUN_143304b06(void)

void FUN_143304b06(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_188 [32];
  ushort *local_168;
  code **local_160;
  undefined1 local_14c [4];
  undefined2 *local_148;
  undefined1 *local_140;
  undefined2 local_138;
  undefined2 local_136;
  undefined2 local_134;
  undefined1 local_12f;
  undefined4 local_12c;
  undefined1 local_128;
  ushort local_124;
  undefined2 local_122;
  undefined1 local_120 [8];
  ushort local_118;
  longlong local_b8;
  code *local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar1 = FUN_14009d2a0();
  lVar2 = FUN_14038fb82();
  lVar3 = 0;
  do {
    local_138 = *(undefined2 *)(lVar1 + 0x56);
    local_136 = *(undefined2 *)(lVar2 + 0xe2);
    local_134 = *(undefined2 *)(lVar1 + 0xbc + lVar3 * 2);
    local_12f = 0;
    local_12c = 0x6ff;
    local_128 = 0;
    local_122 = *(undefined2 *)(lVar1 + 0x130);
    local_148 = &local_122;
    local_140 = local_120;
    FUN_147655e76(&local_138,local_120,&local_148);
    local_124 = local_118 & 0xfdff;
    local_58 = FUN_147668318;
    local_50 = 3;
    local_160 = &local_58;
    local_168 = &local_124;
    FUN_1476680d2(local_120,local_14c,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 9);
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143304c5e FUN_143304c5e body=1996 status=ok
// SIG undefined FUN_143304c5e(void)

void FUN_143304c5e(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  ushort uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  undefined8 *puVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 auStack_298 [40];
  undefined8 local_270;
  longlong local_268;
  undefined8 *local_260;
  longlong local_258;
  longlong local_250;
  undefined1 *local_248;
  longlong local_240;
  longlong *local_238;
  undefined8 *local_230;
  undefined2 *local_228;
  undefined2 *local_220;
  undefined8 *local_218;
  undefined2 *local_210;
  undefined2 *local_208;
  undefined1 local_1ff;
  undefined2 local_1fe;
  undefined2 local_1fc;
  undefined2 local_1fa;
  undefined2 local_1f8;
  undefined1 local_1f3;
  undefined4 local_1f0;
  undefined1 local_1ec;
  short local_1e8;
  short local_1e6;
  short local_1e4;
  undefined1 local_1df;
  undefined4 local_1dc;
  undefined1 local_1d8;
  longlong local_180;
  undefined1 local_120 [32];
  undefined1 *local_100;
  ulonglong local_f8;
  uint local_e0 [8];
  int local_c0;
  int local_bc;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar10 = FUN_14009d2a0();
  local_250 = FUN_14038fb82();
  lVar23 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x5d8);
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x5e0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  cVar8 = *(char *)(lVar23 + 0x7c);
  local_258 = param_1;
  if (cVar8 == '\x04') {
    lVar23 = 0;
    do {
      local_1e8 = *(short *)(lVar10 + 0xe2);
      local_1e6 = *(short *)(local_250 + 0xe2);
      local_1e4 = *(short *)(lVar10 + 0xce + lVar23 * 2);
      local_1df = 0;
      local_1dc = 0x6ff;
      local_1d8 = 0;
      local_1fc = *(undefined2 *)(lVar10 + 0x11a);
      local_210 = &local_1fc;
      local_208 = &local_1fa;
      FUN_147655f08(&local_1e8,local_120,&local_210);
      iVar21 = local_c0;
      uVar4 = *(ushort *)(lVar10 + 0x130);
      iVar16 = uVar4 + 1;
      iVar22 = iVar16 - local_c0;
      if (iVar22 != 0 && local_c0 <= iVar16) {
        if (local_c0 == 0) {
LAB_143305309:
          if (local_bc <= (int)(uint)uVar4) {
            local_bc = 0x100;
            FUN_14497ddce(local_e0,local_c0);
            iVar16 = local_c0 + iVar22;
          }
          iVar18 = iVar16 + 0x1f;
          if (-1 < iVar16) {
            iVar18 = iVar16;
          }
          local_c0 = iVar16;
          iVar16 = local_c0;
          if (iVar16 % 0x20 != 0) {
            bVar14 = -(char)(iVar16 % 0x20);
            local_e0[iVar18 >> 5] = (local_e0[iVar18 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
            iVar16 = local_c0;
          }
        }
        else {
          iVar18 = local_c0 + 0x1e;
          if (-1 < local_c0 + -1) {
            iVar18 = local_c0 + -1;
          }
          if (iVar18 >> 5 != (uint)(uVar4 >> 5)) goto LAB_143305309;
        }
        local_c0 = iVar16;
        FUN_1447c45ca(local_e0,iVar21,iVar22,0);
      }
      local_e0[uVar4 >> 5] = local_e0[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
      FUN_147655f9c(local_120,*(longlong *)(local_258 + 0x28) + 0x28);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 != 9);
  }
  else if (cVar8 == '\x10') {
    lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_230 = (undefined8 *)(lVar23 + 0x308);
    local_260 = (undefined8 *)(lVar23 + 0x310);
    local_238 = (longlong *)(lVar23 + 0x2b8);
    lVar23 = 0;
    do {
      local_1fc = *(undefined2 *)(lVar10 + 0x56);
      local_1fa = *(undefined2 *)(local_250 + 0xe2);
      local_1f8 = *(undefined2 *)(lVar10 + 0xbc + lVar23 * 2);
      local_1f3 = 0;
      local_1f0 = 0x6ff;
      local_1ec = 0;
      local_1fe = *(undefined2 *)(lVar10 + 0x130);
      local_228 = &local_1fe;
      local_220 = &local_1fc;
      FUN_147655e76(&local_1fc,&local_1e8,&local_228);
      if (((local_1e8 == -1) || (local_1e6 == -1)) || (local_1e4 == -1)) {
        local_218 = (undefined8 *)0x0;
      }
      else {
        lVar6 = *(longlong *)(local_258 + 0x28);
        lVar1 = lVar6 + 0x28;
        local_270 = param_2;
        cVar8 = FUN_1476683a4(&local_1e8,lVar1);
        if (cVar8 != '\0') {
          if ((*(int *)(lVar6 + 0x29c) == 0) && (*(char *)(lVar6 + 0x298) != '\0')) {
            local_100 = (undefined1 *)0x0;
            local_f8 = 0x400000000;
            local_240 = lVar1;
            FUN_1476688cc(&local_1e8,local_270,local_120);
            puVar7 = local_230;
            local_248 = local_120;
            if ((int)local_f8 == 0) {
              local_248 = (undefined1 *)0x0;
            }
            puVar12 = (uint *)*local_230;
            if (puVar12 != (uint *)0x0) goto LAB_143304f4d;
            while( true ) {
              uVar15 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar15 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar15 | 1;
                __tlregdtor(&LAB_143311b0b);
              }
              puVar11 = (undefined4 *)*local_260;
              *local_260 = 0;
              if (puVar11 == (undefined4 *)0x0) {
                puVar11 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar11 = 0xffffffff;
              *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
              puVar11[0x12] = 0;
              *puVar7 = puVar11;
              FUN_140217a48(puVar7);
              puVar12 = (uint *)*puVar7;
LAB_143304f4d:
              puVar20 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
              puVar19 = (uint *)(puVar20 + 0x31);
              uVar15 = puVar12[0x12];
              if (puVar19 <= puVar12 + 0x4000) break;
              while( true ) {
                *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
                LOCK();
                uVar9 = *puVar12;
                *puVar12 = *puVar12 + uVar15 + 1;
                UNLOCK();
                if ((uVar9 ^ uVar15) != 0xffffffff) break;
                puVar12 = (uint *)*puVar7;
                *puVar12 = 0xffffffff;
                *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
                puVar12[0x12] = 0;
                *puVar7 = puVar12;
                puVar20 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
                puVar19 = (uint *)(puVar20 + 0x31);
                uVar15 = 0;
                if (puVar19 <= puVar12 + 0x4000) {
                  uVar15 = 1;
                  goto LAB_143304fcd;
                }
              }
            }
            uVar15 = uVar15 + 1;
LAB_143304fcd:
            *(uint **)(puVar12 + 0x10) = puVar19;
            puVar12[0x12] = uVar15;
            FUN_1447247dc(puVar20,local_248);
            *puVar20 = &PTR_FUN_14a4d6fd0;
            FUN_1476685f2(puVar20 + 0x15,local_240,&local_1e8);
            uVar15 = *(uint *)((longlong)puVar20 + 0xb4);
            if (((ulonglong)uVar15 & 0xff) == 0xff) {
              uVar9 = uVar15 >> 10 & 3;
              iVar21 = 0;
              if ((uVar15 >> 9 & 1) == 0 || uVar9 < 2) {
                uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar9];
                iVar21 = 0;
              }
              else {
                uVar24 = 2;
              }
            }
            else {
              iVar21 = (uVar15 >> 7 & 2 | uVar15 >> 9 & 1) +
                       *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar15 & 0xff) * 4);
              uVar24 = 5;
            }
            local_268 = param_3;
            if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
            }
            param_3 = local_268;
            puVar20[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar20[9] = puVar20;
            puVar20[10] = puVar20;
            lVar1 = *local_238;
            if (lVar1 == 0) {
              if ((char)uVar24 == '\x06') {
                uVar24 = 1;
              }
              uVar13 = 0;
            }
            else {
              if ((char)uVar24 == '\x06') {
                uVar24 = *(ulonglong *)(lVar1 + 0x38) >> 0x3b;
              }
              uVar13 = *(undefined8 *)(lVar1 + 0x30);
            }
            puVar20[0xf] = uVar13;
            puVar20[0x10] = uVar24 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar20 + 0x1c) = iVar21;
            if (puVar20 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
              UNLOCK();
            }
            local_1ff = 1;
            local_218 = puVar20;
            FUN_1447439e4(puVar20,&local_1ff);
            param_2 = local_270;
            if (param_3 != 0) {
              FUN_1476689a8(&local_1e8,&local_218,param_3);
            }
            puVar17 = local_100;
            if (local_100 == (undefined1 *)0x0) {
              puVar17 = local_120;
            }
            FUN_144717c65(puVar17,local_f8 & 0xffffffff);
            if (local_100 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            if (puVar20 != (undefined8 *)0x0) {
              LOCK();
              piVar3 = (int *)(puVar20 + 1);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)*puVar20)(puVar20,1);
              }
            }
            goto LAB_143304de5;
          }
          FUN_1476685f2(local_120,lVar1,&local_1e8);
          FUN_1433121e2(local_120);
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
        }
        local_218 = (undefined8 *)0x0;
        param_2 = local_270;
      }
LAB_143304de5:
      if (local_180 != 0) {
        FUN_1400020a8();
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 != 9);
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14330543c FUN_14330543c body=2532 status=ok
// SIG undefined FUN_14330543c(void)

void FUN_14330543c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  ushort uVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  undefined2 *puVar13;
  uint uVar14;
  int iVar15;
  undefined2 *puVar16;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  code **local_220;
  undefined1 *local_218;
  uint *local_210;
  uint *local_208;
  undefined2 *local_1f8;
  undefined8 local_1f0;
  int local_1e4;
  undefined2 *local_1e0;
  undefined4 *local_1d8;
  undefined2 local_1cc;
  undefined2 local_1ca;
  undefined4 local_1c8;
  undefined1 local_1c3;
  undefined4 local_1c0;
  undefined1 local_1bc;
  ushort local_1b6;
  int local_1b4;
  longlong *local_1b0;
  longlong *local_1a8;
  code *local_1a0;
  undefined4 **local_198;
  undefined4 *local_190;
  undefined2 local_182;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined1 local_168 [80];
  longlong local_118;
  undefined1 local_108 [32];
  int local_e8;
  undefined1 local_e0 [32];
  int local_c0;
  code *local_b8;
  byte local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  uint local_98 [8];
  undefined8 local_78;
  uint local_70 [8];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar8 = FUN_14009d2a0();
  puVar13 = &DAT_14cab5a90;
  if (DAT_14cab5aa8 != (undefined2 *)0x0) {
    puVar13 = DAT_14cab5aa8;
  }
  if ((longlong)DAT_14cab5ab0 != 0) {
    puVar16 = puVar13 + (longlong)DAT_14cab5ab0 * 3;
    local_1f8 = puVar16;
    local_1f0 = param_2;
    do {
      local_1d8 = &local_180;
      local_1cc = *puVar13;
      local_1ca = *(undefined2 *)(lVar8 + 0x54);
      local_1c8 = *(undefined4 *)(puVar13 + 1);
      local_1c3 = 0;
      local_1c0 = 0x6ff;
      local_1bc = 0;
      local_182 = *(undefined2 *)(lVar8 + 0x130);
      local_1e0 = &local_182;
      FUN_1417a329c(&local_1cc,&local_180,&local_1e0);
      local_1b6 = (ushort)uStack_178 & 0xfdff;
      local_b8 = FUN_14017c1dc;
      local_b0 = 3;
      if (((((ushort)local_180 != -1) && (local_180._2_2_ != -1)) && ((ushort)uStack_17c != -1)) &&
         ((uStack_17c._2_2_ != -1 &&
          (cVar6 = FUN_1417a592c(&local_180,*(longlong *)(param_1 + 0x28) + 0x28), cVar6 != '\0'))))
      {
        plVar9 = (longlong *)FUN_14001cc68(0x30,0x10);
        plVar9[1] = (longlong)&DAT_100000001;
        *plVar9 = (longlong)&PTR_FUN_14a4d6fe0;
        plVar9[2] = (longlong)&PTR_FUN_14a4d6ff8;
        *(uint *)((longlong)plVar9 + 0x1c) = local_180;
        *(uint *)(plVar9 + 4) = uStack_17c;
        *(undefined4 *)((longlong)plVar9 + 0x24) = uStack_178;
        *(undefined4 *)(plVar9 + 5) = uStack_174;
        *(undefined4 *)((longlong)plVar9 + 0x2c) = local_170;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
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
        local_50 = 0;
        uVar7 = local_e8 + 0x1fU & 0xffffffe0;
        if (0 < (int)uVar7) {
          if (uVar7 < 0x101) {
            uVar7 = 0x100;
          }
          local_50 = (ulonglong)uVar7 << 0x20;
          FUN_14497ddce(local_70,0);
        }
        local_50 = CONCAT44(local_50._4_4_,local_e8);
        if (local_e8 != 0) {
          memcpy(local_70,local_108,(ulonglong)(local_e8 + 0x1fU >> 3 & 0xfffffffc));
        }
        local_78 = 0;
        uVar7 = local_c0 + 0x1fU & 0xffffffe0;
        if (0 < (int)uVar7) {
          if (uVar7 < 0x101) {
            uVar7 = 0x100;
          }
          local_78 = (ulonglong)uVar7 << 0x20;
          FUN_14497ddce(local_98,0);
        }
        local_78 = CONCAT44(local_78._4_4_,local_c0);
        if (local_c0 != 0) {
          memcpy(local_98,local_e0,(ulonglong)(local_c0 + 0x1fU >> 3 & 0xfffffffc));
        }
        uVar5 = local_50;
        uVar7 = local_180;
        uVar4 = (ushort)local_180;
        iVar11 = (local_180 & 0xffff) + 1;
        iVar15 = iVar11 - (int)local_50;
        if (iVar15 != 0 && (int)local_50 <= iVar11) {
          if ((int)local_50 == 0) {
LAB_143305747:
            if (local_50._4_4_ <= (int)(local_180 & 0xffff)) {
              local_50 = CONCAT44(0x100,(int)local_50);
              FUN_14497ddce(local_70,uVar5 & 0xffffffff);
              iVar11 = (int)local_50 + iVar15;
            }
            iVar12 = iVar11 + 0x1f;
            if (-1 < iVar11) {
              iVar12 = iVar11;
            }
            local_50 = CONCAT44(local_50._4_4_,iVar11);
            if (iVar11 % 0x20 != 0) {
              bVar10 = -(char)(iVar11 % 0x20);
              local_70[iVar12 >> 5] = (local_70[iVar12 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
            }
          }
          else {
            iVar12 = (int)local_50 + 0x1e;
            if (-1 < (int)local_50 + -1) {
              iVar12 = (int)local_50 + -1;
            }
            if (iVar12 >> 5 != (uint)((ushort)local_180 >> 5)) goto LAB_143305747;
            local_50 = CONCAT44(local_50._4_4_,iVar11);
          }
          FUN_1447c45ca(local_70,uVar5 & 0xffffffff,iVar15,0);
        }
        uVar14 = local_180;
        local_70[uVar4 >> 5] = local_70[uVar4 >> 5] | 1 << ((byte)uVar7 & 0x1f);
        uVar5 = local_50;
        uVar4 = local_180._2_2_;
        iVar11 = local_180._2_2_ + 1;
        iVar15 = iVar11 - (int)local_50;
        if (iVar15 != 0 && (int)local_50 <= iVar11) {
          if ((int)local_50 == 0) {
LAB_1433057f2:
            if (local_50._4_4_ <= (int)(uint)local_180._2_2_) {
              local_50 = CONCAT44(0x100,(int)local_50);
              FUN_14497ddce(local_70,uVar5 & 0xffffffff);
              iVar11 = (int)local_50 + iVar15;
            }
            iVar12 = iVar11 + 0x1f;
            if (-1 < iVar11) {
              iVar12 = iVar11;
            }
            local_50 = CONCAT44(local_50._4_4_,iVar11);
            if (iVar11 % 0x20 != 0) {
              bVar10 = -(char)(iVar11 % 0x20);
              local_70[iVar12 >> 5] = (local_70[iVar12 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
            }
          }
          else {
            iVar12 = (int)local_50 + 0x1e;
            if (-1 < (int)local_50 + -1) {
              iVar12 = (int)local_50 + -1;
            }
            if (iVar12 >> 5 != (uint)(local_180._2_2_ >> 5)) goto LAB_1433057f2;
            local_50 = CONCAT44(local_50._4_4_,iVar11);
          }
          FUN_1447c45ca(local_70,uVar5 & 0xffffffff,iVar15,0);
        }
        uVar7 = uStack_17c;
        local_70[uVar4 >> 5] = local_70[uVar4 >> 5] | 1 << ((byte)(uVar14 >> 0x10) & 0x1f);
        uVar5 = local_50;
        uVar4 = (ushort)uStack_17c;
        uVar14 = uStack_17c & 0xffff;
        iVar11 = (uStack_17c & 0xffff) + 1;
        iVar15 = iVar11 - (int)local_50;
        if (iVar15 != 0 && (int)local_50 <= iVar11) {
          if ((int)local_50 == 0) {
LAB_1433058a2:
            if (local_50._4_4_ <= (int)uVar14) {
              local_50 = CONCAT44(0x100,(int)local_50);
              FUN_14497ddce(local_70,uVar5 & 0xffffffff);
              iVar11 = (int)local_50 + iVar15;
            }
            iVar12 = iVar11 + 0x1f;
            if (-1 < iVar11) {
              iVar12 = iVar11;
            }
            local_50 = CONCAT44(local_50._4_4_,iVar11);
            if (iVar11 % 0x20 != 0) {
              bVar10 = -(char)(iVar11 % 0x20);
              local_70[iVar12 >> 5] = (local_70[iVar12 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
            }
          }
          else {
            iVar12 = (int)local_50 + 0x1e;
            if (-1 < (int)local_50 + -1) {
              iVar12 = (int)local_50 + -1;
            }
            if (iVar12 >> 5 != (uint)((ushort)uStack_17c >> 5)) goto LAB_1433058a2;
            local_50 = CONCAT44(local_50._4_4_,iVar11);
          }
          FUN_1447c45ca(local_70,uVar5 & 0xffffffff,iVar15,0);
          uVar14 = uStack_17c & 0xffff;
          iVar11 = (uStack_17c & 0xffff) + 1;
        }
        uVar5 = local_78;
        local_70[uVar4 >> 5] = local_70[uVar4 >> 5] | 1 << ((byte)uVar7 & 0x1f);
        iVar15 = iVar11 - (int)local_78;
        if (iVar15 != 0 && (int)local_78 <= iVar11) {
          if ((int)local_78 == 0) {
LAB_14330596a:
            if (local_78._4_4_ <= (int)uVar14) {
              local_78 = CONCAT44(0x100,(int)local_78);
              FUN_14497ddce(local_98,uVar5 & 0xffffffff);
              iVar11 = (int)local_78 + iVar15;
            }
            iVar12 = iVar11 + 0x1f;
            if (-1 < iVar11) {
              iVar12 = iVar11;
            }
            local_78 = CONCAT44(local_78._4_4_,iVar11);
            if (iVar11 % 0x20 != 0) {
              bVar10 = -(char)(iVar11 % 0x20);
              local_98[iVar12 >> 5] = (local_98[iVar12 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
            }
          }
          else {
            iVar12 = (int)local_78 + 0x1e;
            if (-1 < (int)local_78 + -1) {
              iVar12 = (int)local_78 + -1;
            }
            if (iVar12 >> 5 != (uint)((ushort)uStack_17c >> 5)) goto LAB_14330596a;
            local_78 = CONCAT44(local_78._4_4_,iVar11);
          }
          FUN_1447c45ca(local_98,uVar5 & 0xffffffff,iVar15,0);
        }
        uVar7 = uStack_17c;
        local_98[uVar14 >> 5] = local_98[uVar14 >> 5] | 1 << ((byte)uVar14 & 0x1f);
        uVar5 = local_50;
        uVar4 = uStack_17c._2_2_;
        uVar14 = (uint)uStack_17c._2_2_;
        iVar11 = uStack_17c._2_2_ + 1;
        iVar15 = iVar11 - (int)local_50;
        if (iVar15 != 0 && (int)local_50 <= iVar11) {
          if ((int)local_50 == 0) {
LAB_143305a1f:
            if (local_50._4_4_ <= (int)uVar14) {
              local_50 = CONCAT44(0x100,(int)local_50);
              FUN_14497ddce(local_70,uVar5 & 0xffffffff);
              iVar11 = (int)local_50 + iVar15;
            }
            iVar12 = iVar11 + 0x1f;
            if (-1 < iVar11) {
              iVar12 = iVar11;
            }
            local_50 = CONCAT44(local_50._4_4_,iVar11);
            if (iVar11 % 0x20 != 0) {
              bVar10 = -(char)(iVar11 % 0x20);
              local_70[iVar12 >> 5] = (local_70[iVar12 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
            }
          }
          else {
            iVar12 = (int)local_50 + 0x1e;
            if (-1 < (int)local_50 + -1) {
              iVar12 = (int)local_50 + -1;
            }
            if (iVar12 >> 5 != (uint)(uStack_17c._2_2_ >> 5)) goto LAB_143305a1f;
            local_50 = CONCAT44(local_50._4_4_,iVar11);
          }
          FUN_1447c45ca(local_70,uVar5 & 0xffffffff,iVar15,0);
          uVar14 = (uint)uStack_17c._2_2_;
          iVar11 = uStack_17c._2_2_ + 1;
        }
        uVar5 = local_78;
        local_70[uVar4 >> 5] = local_70[uVar4 >> 5] | 1 << ((byte)(uVar7 >> 0x10) & 0x1f);
        iVar15 = iVar11 - (int)local_78;
        if (iVar15 != 0 && (int)local_78 <= iVar11) {
          if ((int)local_78 == 0) {
LAB_143305ae5:
            if (local_78._4_4_ <= (int)uVar14) {
              local_78 = CONCAT44(0x100,(int)local_78);
              FUN_14497ddce(local_98,uVar5 & 0xffffffff);
              iVar11 = (int)local_78 + iVar15;
            }
            iVar12 = iVar11 + 0x1f;
            if (-1 < iVar11) {
              iVar12 = iVar11;
            }
            local_78 = CONCAT44(local_78._4_4_,iVar11);
            if (iVar11 % 0x20 != 0) {
              bVar10 = -(char)(iVar11 % 0x20);
              local_98[iVar12 >> 5] = (local_98[iVar12 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
            }
          }
          else {
            iVar12 = (int)local_78 + 0x1e;
            if (-1 < (int)local_78 + -1) {
              iVar12 = (int)local_78 + -1;
            }
            if (iVar12 >> 5 != (uint)(uStack_17c._2_2_ >> 5)) goto LAB_143305ae5;
            local_78 = CONCAT44(local_78._4_4_,iVar11);
          }
          FUN_1447c45ca(local_98,uVar5 & 0xffffffff,iVar15,0);
        }
        local_98[uVar14 >> 5] = local_98[uVar14 >> 5] | 1 << ((byte)uVar14 & 0x1f);
        local_198 = &local_190;
        local_1a0 = FUN_1417a5a3c;
        local_a0 = local_b0;
        local_190 = &local_180;
        (*(code *)(&PTR_LAB_14a475bc0)[local_b0])(local_a8,&local_b8);
        uVar3 = local_1f0;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        local_208 = local_98;
        local_210 = local_70;
        local_218 = local_168;
        local_220 = &local_1a0;
        local_228 = local_a8;
        local_1b0 = plVar9 + 2;
        local_1a8 = plVar9;
        FUN_1406ac01c(local_1f0,&local_1e4,&local_1b6);
        puVar16 = local_1f8;
        if (local_1e4 == -1) {
          if ((local_1b6 & 0x400) != 0) {
            FUN_145c71394(uVar3,&local_1b4);
            local_1e4 = local_1b4;
            if (local_1b4 != -1) goto LAB_143305c4c;
          }
        }
        else {
LAB_143305c4c:
          FUN_1407ce0e2(uVar3,local_1e4,0xffffffff);
          FUN_1407cdf34(uVar3,local_1e4,0xffffffff);
        }
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
      }
      if (local_118 != 0) {
        FUN_1400020a8();
      }
      puVar13 = puVar13 + 3;
    } while (puVar13 != puVar16);
  }
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143305e22 FUN_143305e22 body=2237 status=ok
// SIG undefined FUN_143305e22(void)

void FUN_143305e22(longlong param_1,undefined8 param_2,ushort *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  ushort uVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  ushort *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  undefined1 auStack_288 [32];
  ushort *local_268;
  undefined8 *local_260;
  longlong local_258;
  longlong local_250;
  longlong *local_248;
  undefined8 local_240;
  longlong *local_238;
  undefined2 *local_230;
  ushort *local_228;
  undefined8 *local_220;
  undefined1 local_217;
  undefined2 local_216;
  ushort local_214 [2];
  undefined4 local_210;
  undefined1 local_20b;
  undefined4 local_208;
  undefined1 local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  ushort local_1f4;
  longlong local_198;
  uint local_138 [8];
  undefined8 local_118;
  ulonglong local_110 [4];
  undefined8 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x5d8);
  local_238 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x5e0);
  if (local_238 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_238 + 1) = (int)local_238[1] + 1;
    UNLOCK();
  }
  local_258 = param_1;
  lVar10 = FUN_14009d2a0();
  cVar8 = *(char *)(lVar22 + 0x7c);
  if (cVar8 == '\x10') {
    puVar21 = &DAT_14cab5a90;
    if (DAT_14cab5aa8 != (ushort *)0x0) {
      puVar21 = DAT_14cab5aa8;
    }
    local_268 = param_3;
    local_240 = param_2;
    if ((longlong)DAT_14cab5ab0 != 0) {
      puVar4 = puVar21 + (longlong)DAT_14cab5ab0 * 3;
      lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar3 = (undefined8 *)(lVar22 + 0x308);
      local_260 = (undefined8 *)(lVar22 + 0x310);
      local_248 = (longlong *)(lVar22 + 0x2b8);
      local_250 = 0x527800b400;
      do {
        local_214[0] = *puVar21;
        local_214[1] = *(ushort *)(lVar10 + 0x54);
        local_210 = *(undefined4 *)(puVar21 + 1);
        local_20b = 0;
        local_208 = 0x6ff;
        local_204 = 0;
        local_216 = *(undefined2 *)(lVar10 + 0x130);
        local_230 = &local_216;
        local_228 = local_214;
        FUN_1417a329c(local_214,&local_200,&local_230);
        if (((((short)local_200 == -1) || (local_200._2_2_ == -1)) || (local_200._4_2_ == -1)) ||
           (local_200._6_2_ == -1)) {
          local_220 = (undefined8 *)0x0;
        }
        else {
          lVar6 = *(longlong *)(local_258 + 0x28);
          lVar22 = lVar6 + 0x28;
          cVar8 = FUN_1417a592c(&local_200,lVar22);
          if (cVar8 != '\0') {
            if ((*(int *)(lVar6 + 0x29c) == 0) && (*(char *)(lVar6 + 0x298) != '\0')) {
              local_118 = (uint *)0x0;
              local_110[0] = 0x400000000;
              FUN_147668ac2(&local_200,local_240,local_138);
              puVar17 = local_138;
              if ((int)local_110[0] == 0) {
                puVar17 = (uint *)0x0;
              }
              puVar12 = (uint *)*puVar3;
              if (puVar12 != (uint *)0x0) goto LAB_1433063ac;
              while( true ) {
                uVar16 = *(uint *)(*(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8
                                    ) + 0x318);
                if ((uVar16 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar16 | 1;
                  __tlregdtor(&LAB_143311b0b);
                }
                puVar11 = (undefined4 *)*local_260;
                *local_260 = 0;
                if (puVar11 == (undefined4 *)0x0) {
                  puVar11 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar11 = 0xffffffff;
                *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
                puVar11[0x12] = 0;
                *puVar3 = puVar11;
                FUN_140217a48(puVar3);
                puVar12 = (uint *)*puVar3;
LAB_1433063ac:
                puVar24 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
                puVar19 = (uint *)(puVar24 + 0x31);
                uVar16 = puVar12[0x12];
                if (puVar19 <= puVar12 + 0x4000) break;
                while( true ) {
                  *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
                  LOCK();
                  uVar9 = *puVar12;
                  *puVar12 = *puVar12 + uVar16 + 1;
                  UNLOCK();
                  if ((uVar9 ^ uVar16) != 0xffffffff) break;
                  puVar12 = (uint *)*puVar3;
                  *puVar12 = 0xffffffff;
                  *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
                  puVar12[0x12] = 0;
                  *puVar3 = puVar12;
                  puVar24 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
                  puVar19 = (uint *)(puVar24 + 0x31);
                  uVar16 = 0;
                  if (puVar19 <= puVar12 + 0x4000) {
                    uVar16 = 1;
                    goto LAB_14330642e;
                  }
                }
              }
              uVar16 = uVar16 + 1;
LAB_14330642e:
              *(uint **)(puVar12 + 0x10) = puVar19;
              puVar12[0x12] = uVar16;
              FUN_1447247dc(puVar24,puVar17);
              *puVar24 = &PTR_FUN_14a4d7000;
              FUN_147668a44(puVar24 + 0x15,lVar22,&local_200);
              uVar16 = *(uint *)((longlong)puVar24 + 0xb4);
              if (((ulonglong)uVar16 & 0xff) == 0xff) {
                uVar9 = uVar16 >> 10 & 3;
                iVar15 = 0;
                if ((uVar16 >> 9 & 1) == 0 || uVar9 < 2) {
                  uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar9];
                  iVar15 = 0;
                }
                else {
                  uVar23 = 2;
                }
              }
              else {
                iVar15 = (uVar16 >> 7 & 2 | uVar16 >> 9 & 1) +
                         *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar16 & 0xff) * 4);
                uVar23 = 5;
              }
              if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
              }
              puVar24[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar24[9] = puVar24;
              puVar24[10] = puVar24;
              lVar22 = *local_248;
              if (lVar22 == 0) {
                if ((char)uVar23 == '\x06') {
                  uVar23 = 1;
                }
                uVar13 = 0;
              }
              else {
                if ((char)uVar23 == '\x06') {
                  uVar23 = *(ulonglong *)(lVar22 + 0x38) >> 0x3b;
                }
                uVar13 = *(undefined8 *)(lVar22 + 0x30);
              }
              puVar24[0xf] = uVar13;
              puVar24[0x10] = (uVar23 << 0x3b) + local_250 | 0xc000000000000000;
              *(int *)((longlong)puVar24 + 0x1c) = iVar15;
              if (puVar24 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
                UNLOCK();
              }
              local_217 = 1;
              local_220 = puVar24;
              FUN_1447439e4(puVar24,&local_217);
              if (local_268 != (ushort *)0x0) {
                FUN_147668bc2(&local_200,&local_220,local_268);
              }
              puVar17 = local_118;
              if (local_118 == (uint *)0x0) {
                puVar17 = local_138;
              }
              FUN_144717c65(puVar17,local_110[0] & 0xffffffff);
              if (local_118 != (uint *)0x0) {
                FUN_1400020a8();
              }
              if (puVar24 != (undefined8 *)0x0) {
                LOCK();
                piVar2 = (int *)(puVar24 + 1);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)*puVar24)(puVar24,1);
                }
              }
              goto LAB_14330627d;
            }
            FUN_147668a44(local_138,lVar22,&local_200);
            FUN_143312482(local_138);
            if (local_d0 != 0) {
              FUN_1400020a8();
            }
          }
          local_220 = (undefined8 *)0x0;
        }
LAB_14330627d:
        if (local_198 != 0) {
          FUN_1400020a8();
        }
        puVar21 = puVar21 + 3;
      } while (puVar21 != puVar4);
    }
  }
  else if (cVar8 == '\x04') {
    puVar21 = &DAT_14cab5a90;
    if (DAT_14cab5aa8 != (ushort *)0x0) {
      puVar21 = DAT_14cab5aa8;
    }
    if ((longlong)DAT_14cab5ab0 != 0) {
      local_268 = puVar21 + (longlong)DAT_14cab5ab0 * 3;
      do {
        local_200 = &PTR_FUN_14a4d6b20;
        local_1f4 = puVar21[2];
        local_1f8 = *(undefined4 *)puVar21;
        local_118 = (uint *)0x10000000000;
        local_f0 = 0x10000000000;
        local_e8 = 0;
        uStack_e0 = 0;
        local_214[0] = *puVar21;
        local_214[1] = puVar21[2];
        local_210 = CONCAT22(local_210._2_2_,*(undefined2 *)(lVar10 + 0x11a));
        lVar22 = 0;
        do {
          puVar17 = local_118;
          uVar5 = *(ushort *)((longlong)local_214 + lVar22);
          iVar15 = uVar5 + 1;
          iVar20 = iVar15 - (int)local_118;
          if (iVar20 != 0 && (int)local_118 <= iVar15) {
            if ((int)local_118 == 0) {
LAB_143305f74:
              if (local_118._4_4_ <= (int)(uint)uVar5) {
                local_118 = (uint *)CONCAT44(0x100,(int)local_118);
                FUN_14497ddce(local_138,(ulonglong)puVar17 & 0xffffffff);
                iVar15 = (int)local_118 + iVar20;
              }
              iVar18 = iVar15 + 0x1f;
              if (-1 < iVar15) {
                iVar18 = iVar15;
              }
              local_118 = (uint *)CONCAT44(local_118._4_4_,iVar15);
              if (iVar15 % 0x20 != 0) {
                bVar14 = -(char)(iVar15 % 0x20);
                local_138[iVar18 >> 5] =
                     (local_138[iVar18 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
              }
            }
            else {
              iVar18 = (int)local_118 + 0x1e;
              if (-1 < (int)local_118 + -1) {
                iVar18 = (int)local_118 + -1;
              }
              if (iVar18 >> 5 != (uint)(uVar5 >> 5)) goto LAB_143305f74;
              local_118 = (uint *)CONCAT44(local_118._4_4_,iVar15);
            }
            FUN_1447c45ca(local_138,(ulonglong)puVar17 & 0xffffffff,iVar20,0);
          }
          local_138[uVar5 >> 5] = local_138[uVar5 >> 5] | 1 << ((byte)uVar5 & 0x1f);
          uVar23 = local_f0;
          lVar22 = lVar22 + 2;
        } while (lVar22 != 6);
        uVar5 = *(ushort *)(lVar10 + 0x134);
        iVar15 = uVar5 + 1;
        iVar20 = iVar15 - (int)local_f0;
        if (iVar20 != 0 && (int)local_f0 <= iVar15) {
          if ((int)local_f0 == 0) {
LAB_143306045:
            if (local_f0._4_4_ <= (int)(uint)uVar5) {
              local_f0 = CONCAT44(0x100,(int)local_f0);
              FUN_14497ddce(local_110,uVar23 & 0xffffffff);
              iVar15 = (int)local_f0 + iVar20;
            }
            iVar18 = iVar15 + 0x1f;
            if (-1 < iVar15) {
              iVar18 = iVar15;
            }
            local_f0 = CONCAT44(local_f0._4_4_,iVar15);
            if (iVar15 % 0x20 != 0) {
              bVar14 = -(char)(iVar15 % 0x20);
              *(uint *)((longlong)local_110 + (longlong)(iVar18 >> 5) * 4) =
                   (uint)(*(int *)((longlong)local_110 + (longlong)(iVar18 >> 5) * 4) <<
                         (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
            }
          }
          else {
            iVar18 = (int)local_f0 + 0x1e;
            if (-1 < (int)local_f0 + -1) {
              iVar18 = (int)local_f0 + -1;
            }
            if (iVar18 >> 5 != (uint)(uVar5 >> 5)) goto LAB_143306045;
            local_f0 = CONCAT44(local_f0._4_4_,iVar15);
          }
          FUN_1447c45ca(local_110,uVar23 & 0xffffffff,iVar20,0);
        }
        puVar17 = (uint *)((longlong)local_110 + (ulonglong)(uVar5 >> 5) * 4);
        *puVar17 = *puVar17 | 1 << ((byte)uVar5 & 0x1f);
        FUN_1410fbbac(*(longlong *)(local_258 + 0x28) + 0x28,local_138,&local_200);
        if (local_e8 != 0) {
          FUN_1400020a8();
        }
        puVar21 = puVar21 + 3;
      } while (puVar21 != local_268);
    }
  }
  plVar7 = local_238;
  if (local_238 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_238 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_238)(local_238);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433066e0 FUN_1433066e0 body=342 status=ok
// SIG undefined FUN_1433066e0(void)

void FUN_1433066e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_188 [32];
  ushort *local_168;
  code **local_160;
  undefined1 local_14c [4];
  undefined2 *local_148;
  undefined1 *local_140;
  undefined2 local_138;
  undefined2 local_136;
  undefined2 local_134;
  undefined1 local_12f;
  undefined4 local_12c;
  undefined1 local_128;
  ushort local_124;
  undefined2 local_122;
  undefined1 local_120 [8];
  ushort local_118;
  longlong local_b8;
  code *local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar1 = FUN_14009d2a0();
  lVar2 = FUN_14038fb82();
  lVar3 = 0;
  do {
    local_138 = *(undefined2 *)(lVar1 + 0x56);
    local_136 = *(undefined2 *)(lVar2 + 0xe0);
    local_134 = *(undefined2 *)(lVar1 + 0xbc + lVar3 * 2);
    local_12f = 0;
    local_12c = 0x6ff;
    local_128 = 0;
    local_122 = *(undefined2 *)(lVar1 + 0x130);
    local_148 = &local_122;
    local_140 = local_120;
    FUN_147655e76(&local_138,local_120,&local_148);
    local_124 = local_118 & 0xfdff;
    local_58 = FUN_1476691d4;
    local_50 = 3;
    local_160 = &local_58;
    local_168 = &local_124;
    FUN_147668f8e(local_120,local_14c,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 9);
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143306838 FUN_143306838 body=1996 status=ok
// SIG undefined FUN_143306838(void)

void FUN_143306838(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  ushort uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  undefined8 *puVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 auStack_298 [40];
  undefined8 local_270;
  longlong local_268;
  undefined8 *local_260;
  longlong local_258;
  longlong local_250;
  undefined1 *local_248;
  longlong local_240;
  longlong *local_238;
  undefined8 *local_230;
  undefined2 *local_228;
  undefined2 *local_220;
  undefined8 *local_218;
  undefined2 *local_210;
  undefined2 *local_208;
  undefined1 local_1ff;
  undefined2 local_1fe;
  undefined2 local_1fc;
  undefined2 local_1fa;
  undefined2 local_1f8;
  undefined1 local_1f3;
  undefined4 local_1f0;
  undefined1 local_1ec;
  short local_1e8;
  short local_1e6;
  short local_1e4;
  undefined1 local_1df;
  undefined4 local_1dc;
  undefined1 local_1d8;
  longlong local_180;
  undefined1 local_120 [32];
  undefined1 *local_100;
  ulonglong local_f8;
  uint local_e0 [8];
  int local_c0;
  int local_bc;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar10 = FUN_14009d2a0();
  local_250 = FUN_14038fb82();
  lVar23 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x5d8);
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x5e0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  cVar8 = *(char *)(lVar23 + 0x7c);
  local_258 = param_1;
  if (cVar8 == '\x04') {
    lVar23 = 0;
    do {
      local_1e8 = *(short *)(lVar10 + 0xe2);
      local_1e6 = *(short *)(local_250 + 0xe0);
      local_1e4 = *(short *)(lVar10 + 0xce + lVar23 * 2);
      local_1df = 0;
      local_1dc = 0x6ff;
      local_1d8 = 0;
      local_1fc = *(undefined2 *)(lVar10 + 0x11a);
      local_210 = &local_1fc;
      local_208 = &local_1fa;
      FUN_147655f08(&local_1e8,local_120,&local_210);
      iVar21 = local_c0;
      uVar4 = *(ushort *)(lVar10 + 0x130);
      iVar16 = uVar4 + 1;
      iVar22 = iVar16 - local_c0;
      if (iVar22 != 0 && local_c0 <= iVar16) {
        if (local_c0 == 0) {
LAB_143306ee3:
          if (local_bc <= (int)(uint)uVar4) {
            local_bc = 0x100;
            FUN_14497ddce(local_e0,local_c0);
            iVar16 = local_c0 + iVar22;
          }
          iVar18 = iVar16 + 0x1f;
          if (-1 < iVar16) {
            iVar18 = iVar16;
          }
          local_c0 = iVar16;
          iVar16 = local_c0;
          if (iVar16 % 0x20 != 0) {
            bVar14 = -(char)(iVar16 % 0x20);
            local_e0[iVar18 >> 5] = (local_e0[iVar18 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
            iVar16 = local_c0;
          }
        }
        else {
          iVar18 = local_c0 + 0x1e;
          if (-1 < local_c0 + -1) {
            iVar18 = local_c0 + -1;
          }
          if (iVar18 >> 5 != (uint)(uVar4 >> 5)) goto LAB_143306ee3;
        }
        local_c0 = iVar16;
        FUN_1447c45ca(local_e0,iVar21,iVar22,0);
      }
      local_e0[uVar4 >> 5] = local_e0[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
      FUN_14765601e(local_120,*(longlong *)(local_258 + 0x28) + 0x28);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 != 9);
  }
  else if (cVar8 == '\x10') {
    lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_230 = (undefined8 *)(lVar23 + 0x308);
    local_260 = (undefined8 *)(lVar23 + 0x310);
    local_238 = (longlong *)(lVar23 + 0x2b8);
    lVar23 = 0;
    do {
      local_1fc = *(undefined2 *)(lVar10 + 0x56);
      local_1fa = *(undefined2 *)(local_250 + 0xe0);
      local_1f8 = *(undefined2 *)(lVar10 + 0xbc + lVar23 * 2);
      local_1f3 = 0;
      local_1f0 = 0x6ff;
      local_1ec = 0;
      local_1fe = *(undefined2 *)(lVar10 + 0x130);
      local_228 = &local_1fe;
      local_220 = &local_1fc;
      FUN_147655e76(&local_1fc,&local_1e8,&local_228);
      if (((local_1e8 == -1) || (local_1e6 == -1)) || (local_1e4 == -1)) {
        local_218 = (undefined8 *)0x0;
      }
      else {
        lVar6 = *(longlong *)(local_258 + 0x28);
        lVar1 = lVar6 + 0x28;
        local_270 = param_2;
        cVar8 = FUN_1476683a4(&local_1e8,lVar1);
        if (cVar8 != '\0') {
          if ((*(int *)(lVar6 + 0x29c) == 0) && (*(char *)(lVar6 + 0x298) != '\0')) {
            local_100 = (undefined1 *)0x0;
            local_f8 = 0x400000000;
            local_240 = lVar1;
            FUN_1476688cc(&local_1e8,local_270,local_120);
            puVar7 = local_230;
            local_248 = local_120;
            if ((int)local_f8 == 0) {
              local_248 = (undefined1 *)0x0;
            }
            puVar12 = (uint *)*local_230;
            if (puVar12 != (uint *)0x0) goto LAB_143306b27;
            while( true ) {
              uVar15 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar15 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar15 | 1;
                __tlregdtor(&LAB_143311b0b);
              }
              puVar11 = (undefined4 *)*local_260;
              *local_260 = 0;
              if (puVar11 == (undefined4 *)0x0) {
                puVar11 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar11 = 0xffffffff;
              *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
              puVar11[0x12] = 0;
              *puVar7 = puVar11;
              FUN_140217a48(puVar7);
              puVar12 = (uint *)*puVar7;
LAB_143306b27:
              puVar20 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
              puVar19 = (uint *)(puVar20 + 0x31);
              uVar15 = puVar12[0x12];
              if (puVar19 <= puVar12 + 0x4000) break;
              while( true ) {
                *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
                LOCK();
                uVar9 = *puVar12;
                *puVar12 = *puVar12 + uVar15 + 1;
                UNLOCK();
                if ((uVar9 ^ uVar15) != 0xffffffff) break;
                puVar12 = (uint *)*puVar7;
                *puVar12 = 0xffffffff;
                *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
                puVar12[0x12] = 0;
                *puVar7 = puVar12;
                puVar20 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
                puVar19 = (uint *)(puVar20 + 0x31);
                uVar15 = 0;
                if (puVar19 <= puVar12 + 0x4000) {
                  uVar15 = 1;
                  goto LAB_143306ba7;
                }
              }
            }
            uVar15 = uVar15 + 1;
LAB_143306ba7:
            *(uint **)(puVar12 + 0x10) = puVar19;
            puVar12[0x12] = uVar15;
            FUN_1447247dc(puVar20,local_248);
            *puVar20 = &PTR_FUN_14a4d7030;
            FUN_1476692f8(puVar20 + 0x15,local_240,&local_1e8);
            uVar15 = *(uint *)((longlong)puVar20 + 0xb4);
            if (((ulonglong)uVar15 & 0xff) == 0xff) {
              uVar9 = uVar15 >> 10 & 3;
              iVar21 = 0;
              if ((uVar15 >> 9 & 1) == 0 || uVar9 < 2) {
                uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar9];
                iVar21 = 0;
              }
              else {
                uVar24 = 2;
              }
            }
            else {
              iVar21 = (uVar15 >> 7 & 2 | uVar15 >> 9 & 1) +
                       *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar15 & 0xff) * 4);
              uVar24 = 5;
            }
            local_268 = param_3;
            if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
            }
            param_3 = local_268;
            puVar20[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar20[9] = puVar20;
            puVar20[10] = puVar20;
            lVar1 = *local_238;
            if (lVar1 == 0) {
              if ((char)uVar24 == '\x06') {
                uVar24 = 1;
              }
              uVar13 = 0;
            }
            else {
              if ((char)uVar24 == '\x06') {
                uVar24 = *(ulonglong *)(lVar1 + 0x38) >> 0x3b;
              }
              uVar13 = *(undefined8 *)(lVar1 + 0x30);
            }
            puVar20[0xf] = uVar13;
            puVar20[0x10] = uVar24 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar20 + 0x1c) = iVar21;
            if (puVar20 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
              UNLOCK();
            }
            local_1ff = 1;
            local_218 = puVar20;
            FUN_1447439e4(puVar20,&local_1ff);
            param_2 = local_270;
            if (param_3 != 0) {
              FUN_1476689a8(&local_1e8,&local_218,param_3);
            }
            puVar17 = local_100;
            if (local_100 == (undefined1 *)0x0) {
              puVar17 = local_120;
            }
            FUN_144717c65(puVar17,local_f8 & 0xffffffff);
            if (local_100 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            if (puVar20 != (undefined8 *)0x0) {
              LOCK();
              piVar3 = (int *)(puVar20 + 1);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)*puVar20)(puVar20,1);
              }
            }
            goto LAB_1433069bf;
          }
          FUN_1476692f8(local_120,lVar1,&local_1e8);
          FUN_143312720(local_120);
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
        }
        local_218 = (undefined8 *)0x0;
        param_2 = local_270;
      }
LAB_1433069bf:
      if (local_180 != 0) {
        FUN_1400020a8();
      }
      lVar23 = lVar23 + 1;
    } while (lVar23 != 9);
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143307006 FUN_143307006 body=257 status=ok
// SIG undefined FUN_143307006(void)

void FUN_143307006(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_158 [32];
  ushort *local_138;
  code **local_130;
  undefined1 local_124 [4];
  undefined2 *local_120;
  undefined1 *local_118;
  undefined2 local_110;
  undefined2 local_10e;
  undefined2 local_10c;
  undefined1 local_107;
  undefined4 local_104;
  undefined1 local_100;
  ushort local_fc;
  undefined2 local_fa;
  undefined1 local_f8 [8];
  ushort local_f0;
  longlong local_90;
  code *local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar1 = FUN_14009d2a0();
  local_10e = *(undefined2 *)(lVar1 + 0x54);
  local_110 = *(undefined2 *)(lVar1 + 0x76);
  local_10c = *(undefined2 *)(lVar1 + 0x78);
  local_107 = 0;
  local_104 = 0x6ff;
  local_100 = 0;
  local_fa = *(undefined2 *)(lVar1 + 0x130);
  local_120 = &local_fa;
  local_118 = local_f8;
  FUN_1456ca526(&local_110,local_f8);
  local_138 = &local_fc;
  local_fc = local_f0 & 0xfdff;
  local_130 = &local_30;
  local_30 = FUN_147669548;
  local_28 = 3;
  FUN_145a2cf6e(local_f8,local_124,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143307108 FUN_143307108 body=1291 status=ok
// SIG undefined FUN_143307108(void)

void FUN_143307108(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_238 [40];
  undefined2 *local_210;
  short *local_208;
  undefined2 local_1fc;
  undefined2 local_1fa;
  undefined2 local_1f8;
  undefined1 local_1f3;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined8 *local_1e8;
  undefined1 local_1db;
  undefined2 local_1da;
  short local_1d8;
  short local_1d6;
  short local_1d4;
  longlong local_170;
  undefined1 local_110 [32];
  undefined1 *local_f0;
  ulonglong local_e8;
  longlong local_a8;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar7 = FUN_14009d2a0();
  local_1fa = *(undefined2 *)(lVar7 + 0x54);
  local_1fc = *(undefined2 *)(lVar7 + 0x76);
  local_1f8 = *(undefined2 *)(lVar7 + 0x78);
  local_1f3 = 0;
  local_1f0 = 0x6ff;
  local_1ec = 0;
  local_1da = *(undefined2 *)(lVar7 + 0x130);
  local_210 = &local_1da;
  local_208 = &local_1d8;
  FUN_1456ca526(&local_1fc,&local_1d8);
  if (((local_1d8 != -1) && (local_1d6 != -1)) && (local_1d4 != -1)) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar7 = lVar3 + 0x28;
    cVar5 = FUN_145a2d1b8(&local_1d8,lVar7);
    if (cVar5 != '\0') {
      if ((*(int *)(lVar3 + 0x29c) == 0) && (*(char *)(lVar3 + 0x298) != '\0')) {
        local_f0 = (undefined1 *)0x0;
        local_e8 = 0x400000000;
        FUN_147669844(&local_1d8,param_2,local_110);
        puVar14 = (undefined1 *)0x0;
        if ((int)local_e8 != 0) {
          puVar14 = local_110;
        }
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar9 = (uint *)*puVar2;
        if (puVar9 != (uint *)0x0) goto LAB_143307326;
        while( true ) {
          uVar11 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar11 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar11 | 1;
            __tlregdtor(&LAB_143311b0b);
          }
          lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar8 = *(undefined4 **)(lVar3 + 0x310);
          *(undefined8 *)(lVar3 + 0x310) = 0;
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar8 = 0xffffffff;
          *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
          puVar8[0x12] = 0;
          *puVar2 = puVar8;
          FUN_140217a48(puVar2);
          puVar9 = (uint *)*puVar2;
LAB_143307326:
          puVar13 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar12 = (uint *)(puVar13 + 0x31);
          uVar11 = puVar9[0x12];
          if (puVar12 <= puVar9 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
            LOCK();
            uVar6 = *puVar9;
            *puVar9 = *puVar9 + uVar11 + 1;
            UNLOCK();
            if ((uVar6 ^ uVar11) != 0xffffffff) break;
            puVar9 = (uint *)*puVar2;
            *puVar9 = 0xffffffff;
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar2 = puVar9;
            puVar13 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
            puVar12 = (uint *)(puVar13 + 0x31);
            uVar11 = 0;
            if (puVar12 <= puVar9 + 0x4000) {
              uVar11 = 1;
              goto LAB_1433073a8;
            }
          }
        }
        uVar11 = uVar11 + 1;
LAB_1433073a8:
        *(uint **)(puVar9 + 0x10) = puVar12;
        puVar9[0x12] = uVar11;
        FUN_1447247dc(puVar13,puVar14);
        *puVar13 = &PTR_FUN_14a4d7060;
        FUN_1476697c6(puVar13 + 0x15,lVar7,&local_1d8);
        uVar11 = *(uint *)((longlong)puVar13 + 0xb4);
        if (((ulonglong)uVar11 & 0xff) == 0xff) {
          uVar6 = uVar11 >> 10 & 3;
          iVar15 = 0;
          if ((uVar11 >> 9 & 1) == 0 || uVar6 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar6];
            iVar15 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar15 = (uVar11 >> 7 & 2 | uVar11 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar11 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
        }
        puVar13[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar13[9] = puVar13;
        puVar13[10] = puVar13;
        lVar7 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar7 == 0) {
          uVar4 = 1;
          if ((char)uVar16 != '\x06') {
            uVar4 = uVar16;
          }
          uVar16 = uVar4;
          uVar10 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar7 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar7 + 0x30);
        }
        puVar13[0xf] = uVar10;
        puVar13[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar13 + 0x1c) = iVar15;
        if (puVar13 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
          UNLOCK();
        }
        local_1db = 1;
        local_1e8 = puVar13;
        FUN_1447439e4(puVar13);
        if (param_3 != 0) {
          FUN_147669920(&local_1d8,&local_1e8,param_3);
        }
        puVar14 = local_110;
        if (local_f0 != (undefined1 *)0x0) {
          puVar14 = local_f0;
        }
        FUN_144717c65(puVar14,local_e8 & 0xffffffff);
        if (local_f0 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (puVar13 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar13 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar13)(puVar13,1);
          }
        }
      }
      else {
        FUN_1476697c6(local_110,lVar7,&local_1d8);
        FUN_1433129be(local_110);
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (local_170 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143307614 FUN_143307614 body=69 status=ok
// SIG undefined FUN_143307614(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143307614(void)

{
  _DAT_14cab5b18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143307656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab5b20,1);
  return;
}



// FUNCTION 143307659 FUN_143307659 body=69 status=ok
// SIG undefined FUN_143307659(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143307659(void)

{
  _DAT_14cab5b28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014330769b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab5b30,1);
  return;
}



// FUNCTION 14330769e FUN_14330769e body=69 status=ok
// SIG undefined FUN_14330769e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14330769e(void)

{
  _DAT_14cab5b38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433076e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab5b40,1);
  return;
}



// FUNCTION 1433076e3 FUN_1433076e3 body=69 status=ok
// SIG undefined FUN_1433076e3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433076e3(void)

{
  _DAT_14cab5b50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143307725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab5b58,1);
  return;
}



// FUNCTION 143307728 FUN_143307728 body=1097 status=ok
// SIG undefined FUN_143307728(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143307728(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint *puVar21;
  
  iVar2 = *(int *)(param_1 + 0x68);
  if (iVar2 == 0) {
    uVar12 = 1;
    uVar20 = 0;
    iVar13 = 0;
    iVar3 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x60);
    if (*(uint **)(param_1 + 0x60) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x50);
    }
    uVar17 = *puVar4;
    if (uVar17 == 0) {
      iVar13 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar13 = iVar2 + -1;
      }
      uVar20 = 0;
      uVar12 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar12 = uVar20;
      }
      iVar13 = 0;
      do {
        if (uVar12 == uVar20) goto LAB_1433077c4;
        iVar13 = iVar13 + 0x20;
        uVar17 = puVar4[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar20 = 0;
      iVar13 = 0;
    }
    uVar12 = (ulonglong)(-uVar17 & uVar17);
    uVar15 = uVar12 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar3 = (iVar13 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 != iVar2) {
    puVar4 = (uint *)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x60) != (uint *)0x0) {
      puVar4 = *(uint **)(param_1 + 0x60);
    }
    iVar7 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar7 = iVar2 + -1;
    }
    iVar7 = iVar7 >> 5;
    uVar17 = 0xffffffff;
    do {
      lVar6 = *(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 0x60;
      lVar19 = *(longlong *)(param_1 + 0x40) + (longlong)iVar3 * 0x60;
      puVar21 = (uint *)(lVar19 + 0x18);
      iVar3 = *(int *)(lVar19 + 0x30);
      if (iVar3 == 0) {
        uVar18 = 1;
        uVar15 = 0;
        iVar11 = 0;
        iVar8 = 0;
      }
      else {
        puVar5 = *(uint **)(lVar6 + 0x28);
        if (puVar5 == (uint *)0x0) {
          puVar5 = puVar21;
        }
        uVar16 = *puVar5;
        if (uVar16 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          uVar15 = 0;
          uVar18 = (ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            uVar18 = uVar15;
          }
          iVar11 = 0;
          do {
            if (uVar18 == uVar15) goto LAB_143307a69;
            iVar11 = iVar11 + 0x20;
            uVar16 = puVar5[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar16 == 0);
        }
        else {
          uVar15 = 0;
          iVar11 = 0;
        }
        uVar18 = (ulonglong)(-uVar16 & uVar16);
        uVar1 = uVar18 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        iVar8 = (iVar11 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar8) {
          iVar8 = iVar3;
        }
      }
      if (iVar8 != iVar3) {
        puVar5 = *(uint **)(lVar6 + 0x28);
        if (puVar5 != (uint *)0x0) {
          puVar21 = puVar5;
        }
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        uVar16 = 0xffffffff;
        do {
          uVar16 = uVar16 & ~(uint)uVar18;
          iVar14 = (int)uVar15;
          lVar6 = (longlong)iVar14;
          uVar9 = puVar21[lVar6] & uVar16;
          if (uVar9 == 0) {
            iVar10 = iVar8;
            if (iVar8 < iVar14) {
              iVar10 = iVar14;
            }
            if (iVar8 <= iVar14) break;
            lVar19 = 0;
            while( true ) {
              iVar11 = iVar11 + 0x20;
              uVar9 = puVar21[lVar6 + lVar19 + 1];
              if (uVar9 != 0) break;
              lVar19 = lVar19 + 1;
              if (iVar10 - lVar6 == lVar19) goto LAB_143307a69;
            }
            uVar15 = (ulonglong)(iVar14 + (int)lVar19 + 1);
            uVar16 = 0xffffffff;
          }
          uVar18 = (ulonglong)(-uVar9 & uVar9);
          uVar1 = uVar18 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
        } while ((int)((iVar11 - ((uint)lVar6 ^ 0x3f)) + 0x3e) < iVar3);
      }
LAB_143307a69:
      uVar17 = uVar17 & ~(uint)uVar12;
      iVar3 = (int)uVar20;
      lVar6 = (longlong)iVar3;
      uVar16 = puVar4[lVar6] & uVar17;
      if (uVar16 == 0) {
        iVar8 = iVar7;
        if (iVar7 < iVar3) {
          iVar8 = iVar3;
        }
        if (iVar7 <= iVar3) break;
        lVar19 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar16 = puVar4[lVar6 + lVar19 + 1];
          if (uVar16 != 0) break;
          lVar19 = lVar19 + 1;
          if (iVar8 - lVar6 == lVar19) goto LAB_1433077c4;
        }
        uVar20 = (ulonglong)(iVar3 + (int)lVar19 + 1);
        uVar17 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar16 & uVar16);
      uVar15 = uVar12 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar3 = (iVar13 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar2);
  }
LAB_1433077c4:
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    FUN_14766b66c(param_1 + 0x40);
    FUN_14766b7b4(param_1 + 0x40);
  }
  if (*(int *)(param_1 + 0x98) == *(int *)(param_1 + 0xc4)) {
    return;
  }
  FUN_14766b8f4(param_1 + 0x90);
  FUN_14766ba3e(param_1 + 0x90);
  return;
}



// FUNCTION 143307b72 FUN_143307b72 body=1333 status=ok
// SIG undefined FUN_143307b72(void)

undefined8 *
FUN_143307b72(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  char cVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined8 uVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 *puStack_118;
  ulonglong uStack_110;
  undefined1 local_108 [32];
  undefined8 local_e8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_88;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) &&
     (cVar12 = FUN_14766be7a(param_1,param_3), cVar12 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      puStack_118 = (undefined8 *)0x0;
      uStack_110 = 0x400000000;
      FUN_14766f33a(param_1,param_4,&local_138);
      puVar20 = (undefined8 *)0x0;
      if ((int)uStack_110 != 0) {
        puVar20 = &local_138;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar15 = (uint *)*puVar1;
      if (puVar15 != (uint *)0x0) goto LAB_143307d91;
      while( true ) {
        uVar17 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar17 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar17 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar14 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar14 = 0xffffffff;
        *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
        puVar14[0x12] = 0;
        *puVar1 = puVar14;
        FUN_140217a48(puVar1);
        puVar15 = (uint *)*puVar1;
LAB_143307d91:
        puVar21 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar18 = (uint *)(puVar21 + 0x34);
        uVar17 = puVar15[0x12];
        if (puVar18 <= puVar15 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
          LOCK();
          uVar13 = *puVar15;
          *puVar15 = *puVar15 + uVar17 + 1;
          UNLOCK();
          if ((uVar13 ^ uVar17) != 0xffffffff) break;
          puVar15 = (uint *)*puVar1;
          *puVar15 = 0xffffffff;
          *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar1 = puVar15;
          puVar21 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar21 + 0x34);
          uVar17 = 0;
          if (puVar18 <= puVar15 + 0x4000) {
            uVar17 = 1;
            goto LAB_143307e13;
          }
        }
      }
      uVar17 = uVar17 + 1;
LAB_143307e13:
      *(uint **)(puVar15 + 0x10) = puVar18;
      puVar15[0x12] = uVar17;
      FUN_1447247dc(puVar21,puVar20);
      *puVar21 = &PTR_FUN_14a4d7260;
      uVar16 = *(undefined8 *)(param_1 + 4);
      uVar3 = *(undefined4 *)(param_1 + 8);
      uVar4 = *(undefined4 *)(param_1 + 10);
      uVar5 = *(undefined4 *)(param_1 + 0xc);
      uVar6 = *(undefined4 *)(param_1 + 0xe);
      uVar7 = *(undefined4 *)(param_1 + 0xe);
      uVar8 = *(undefined4 *)(param_1 + 0x10);
      uVar9 = *(undefined4 *)(param_1 + 0x12);
      uVar10 = *(undefined4 *)(param_1 + 0x14);
      puVar21[0x15] = *(undefined8 *)param_1;
      puVar21[0x16] = uVar16;
      *(undefined4 *)(puVar21 + 0x17) = uVar3;
      *(undefined4 *)((longlong)puVar21 + 0xbc) = uVar4;
      *(undefined4 *)(puVar21 + 0x18) = uVar5;
      *(undefined4 *)((longlong)puVar21 + 0xc4) = uVar6;
      *(undefined4 *)((longlong)puVar21 + 0xc4) = uVar7;
      *(undefined4 *)(puVar21 + 0x19) = uVar8;
      *(undefined4 *)((longlong)puVar21 + 0xcc) = uVar9;
      *(undefined4 *)(puVar21 + 0x1a) = uVar10;
      puVar21[0x1f] = 0x10000000000;
      puVar21[0x24] = 0x10000000000;
      puVar21[0x2b] = 0x10000000000;
      puVar21[0x25] = 0;
      puVar21[0x26] = 0;
      puVar21[0x30] = 0x10000000000;
      FUN_14766bf7c(puVar21 + 0x15,puVar21 + 0x1b);
      puVar21[0x31] = param_3;
      puVar21[0x32] = *(undefined8 *)(param_3 + 0x248);
      puVar21[0x33] = *param_5;
      uVar17 = *(uint *)((longlong)puVar21 + 0xcc);
      if (((ulonglong)uVar17 & 0xff) == 0xff) {
        uVar13 = uVar17 >> 10 & 3;
        iVar19 = 0;
        if ((uVar17 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
          iVar19 = 0;
        }
        else {
          uVar22 = 2;
        }
      }
      else {
        iVar19 = (uVar17 >> 7 & 2 | uVar17 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar17 & 0xff) * 4);
        uVar22 = 5;
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
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar11 = 1;
        if ((char)uVar22 != '\x06') {
          uVar11 = uVar22;
        }
        uVar22 = uVar11;
        uVar16 = 0;
      }
      else {
        if ((char)uVar22 == '\x06') {
          uVar22 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar16 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar21[0xf] = uVar16;
      puVar21[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar21 + 0x1c) = iVar19;
      *param_2 = puVar21;
      if (puVar21 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
        UNLOCK();
      }
      local_140 = CONCAT71(local_140._1_7_,1);
      FUN_1447439e4();
      puVar20 = &local_138;
      if (puStack_118 != (undefined8 *)0x0) {
        puVar20 = puStack_118;
      }
      FUN_144717c65(puVar20,uStack_110 & 0xffffffff);
      if (puStack_118 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143307bb9;
    }
    local_140 = *param_5;
    local_138 = *(undefined8 *)param_1;
    uStack_130 = *(undefined8 *)(param_1 + 4);
    local_128 = *(undefined4 *)(param_1 + 8);
    uStack_124 = *(undefined4 *)(param_1 + 10);
    uStack_120 = *(undefined4 *)(param_1 + 0xc);
    uStack_11c = *(undefined4 *)(param_1 + 0xe);
    puStack_118 = *(undefined8 **)(param_1 + 0x10);
    uStack_110 = CONCAT44(uStack_110._4_4_,*(undefined4 *)(param_1 + 0x14));
    local_e8 = 0x10000000000;
    local_c0 = 0x10000000000;
    local_88 = 0x10000000000;
    local_b8 = 0;
    uStack_b0 = 0;
    local_60 = 0x10000000000;
    FUN_14766bf7c(&local_138,local_108);
    local_50 = *(undefined8 *)(param_3 + 0x248);
    local_58 = param_3;
    FUN_1433136ac(&local_138,&local_140);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_143307bb9:
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1433080a8 FUN_1433080a8 body=1300 status=ok
// SIG undefined FUN_1433080a8(void)

undefined8 *
FUN_1433080a8(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 *local_108;
  ulonglong local_100;
  undefined8 local_f0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined8 local_90;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) &&
     (cVar4 = FUN_14766d2b0(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_108 = (undefined8 *)0x0;
      local_100 = 0x400000000;
      FUN_1476700c2(param_1,param_4,&local_128);
      puVar12 = (undefined8 *)0x0;
      if ((int)local_100 != 0) {
        puVar12 = &local_128;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1433082b5;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1433082b5:
        puVar13 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar13 + 0x31);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar13 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar13 + 0x31);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_143308337;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_143308337:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar13,puVar12);
      *puVar13 = &PTR_FUN_14a4d7270;
      uVar8 = *(undefined8 *)(param_1 + 4);
      puVar13[0x15] = *(undefined8 *)param_1;
      puVar13[0x16] = uVar8;
      *(undefined4 *)(puVar13 + 0x17) = *(undefined4 *)(param_1 + 8);
      puVar13[0x1c] = 0x10000000000;
      puVar13[0x21] = 0x10000000000;
      puVar13[0x28] = 0x10000000000;
      puVar13[0x22] = 0;
      puVar13[0x23] = 0;
      puVar13[0x2d] = 0x10000000000;
      FUN_14766d35a(puVar13 + 0x15,puVar13 + 0x18);
      puVar13[0x2e] = param_3;
      puVar13[0x2f] = *(undefined8 *)(param_3 + 0x248);
      puVar13[0x30] = *param_5;
      uVar9 = *(uint *)((longlong)puVar13 + 0xb4);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar14 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar14 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar14 = 5;
      }
      if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
      }
      puVar13[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar13[9] = puVar13;
      puVar13[10] = puVar13;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar14 != '\x06') {
          uVar3 = uVar14;
        }
        uVar14 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar14 == '\x06') {
          uVar14 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar13[0xf] = uVar8;
      puVar13[0x10] = uVar14 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar13 + 0x1c) = iVar11;
      *param_2 = puVar13;
      if (puVar13 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
        UNLOCK();
      }
      local_130 = CONCAT71(local_130._1_7_,1);
      FUN_1447439e4();
      puVar12 = &local_128;
      if (local_108 != (undefined8 *)0x0) {
        puVar12 = local_108;
      }
      FUN_144717c65(puVar12,local_100 & 0xffffffff);
      if (local_108 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1433080ef;
    }
    local_130 = *param_5;
    local_118 = *(undefined4 *)(param_1 + 8);
    local_128 = *(undefined8 *)param_1;
    uStack_120 = *(undefined8 *)(param_1 + 4);
    local_f0 = 0x10000000000;
    local_c8 = 0x10000000000;
    local_90 = 0x10000000000;
    local_c0 = 0;
    uStack_b8 = 0;
    local_68 = 0x10000000000;
    FUN_14766d35a(&local_128);
    local_58 = *(undefined8 *)(param_3 + 0x248);
    local_60 = param_3;
    FUN_143313950(&local_128,&local_130);
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1433080ef:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1433085be FUN_1433085be body=1279 status=ok
// SIG undefined FUN_1433085be(void)

longlong *
FUN_1433085be(undefined8 *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 *local_108;
  ulonglong local_100;
  undefined8 local_e8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_88;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((((*(short *)((longlong)param_1 + 2) != -1) && (*(short *)((longlong)param_1 + 4) != -1)) &&
       (*(short *)((longlong)param_1 + 6) != -1)) &&
      ((*(short *)(param_1 + 1) != -1 && (*(short *)((longlong)param_1 + 10) != -1)))) &&
     (cVar3 = FUN_14766da00(param_1,param_3), cVar3 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_108 = (undefined8 *)0x0;
      local_100 = 0x400000000;
      FUN_14767040c(param_1,param_4,&local_128);
      puVar12 = (undefined8 *)0x0;
      if ((int)local_100 != 0) {
        puVar12 = &local_128;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar6 = (uint *)*puVar1;
      if (puVar6 != (uint *)0x0) goto LAB_1433087e7;
      while( true ) {
        uVar8 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar8 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar8 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar5 = *(undefined4 **)(lVar11 + 0x310);
        *(undefined8 *)(lVar11 + 0x310) = 0;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar5 = 0xffffffff;
        *(undefined4 **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        FUN_140217a48(puVar1);
        puVar6 = (uint *)*puVar1;
LAB_1433087e7:
        puVar13 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar9 = (uint *)(puVar13 + 0x33);
        uVar8 = puVar6[0x12];
        if (puVar9 <= puVar6 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
          LOCK();
          uVar4 = *puVar6;
          *puVar6 = *puVar6 + uVar8 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar8) != 0xffffffff) break;
          puVar6 = (uint *)*puVar1;
          *puVar6 = 0xffffffff;
          *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
          puVar6[0x12] = 0;
          *puVar1 = puVar6;
          puVar13 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
          puVar9 = (uint *)(puVar13 + 0x33);
          uVar8 = 0;
          if (puVar9 <= puVar6 + 0x4000) {
            uVar8 = 1;
            goto LAB_143308869;
          }
        }
      }
      uVar8 = uVar8 + 1;
LAB_143308869:
      *(uint **)(puVar6 + 0x10) = puVar9;
      puVar6[0x12] = uVar8;
      FUN_1447247dc(puVar13,puVar12);
      *puVar13 = &PTR_FUN_14a4d7280;
      FUN_1476709c0(puVar13 + 0x15,param_3,param_1,param_6);
      uVar8 = *(uint *)((longlong)puVar13 + 0xbc);
      if (((ulonglong)uVar8 & 0xff) == 0xff) {
        uVar4 = uVar8 >> 10 & 3;
        iVar10 = 0;
        if ((uVar8 >> 9 & 1) == 0 || uVar4 < 2) {
          uVar14 = (ulonglong)(byte)(&DAT_149e38edc)[uVar4];
          iVar10 = 0;
        }
        else {
          uVar14 = 2;
        }
      }
      else {
        iVar10 = (uVar8 >> 7 & 2 | uVar8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar8 & 0xff) * 4);
        uVar14 = 5;
      }
      if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
      }
      puVar13[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar13[9] = puVar13;
      puVar13[10] = puVar13;
      lVar11 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar11 == 0) {
        uVar2 = 1;
        if ((char)uVar14 != '\x06') {
          uVar2 = uVar14;
        }
        uVar14 = uVar2;
        uVar7 = 0;
      }
      else {
        if ((char)uVar14 == '\x06') {
          uVar14 = *(ulonglong *)(lVar11 + 0x38) >> 0x3b;
        }
        uVar7 = *(undefined8 *)(lVar11 + 0x30);
      }
      puVar13[0xf] = uVar7;
      puVar13[0x10] = uVar14 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar13 + 0x1c) = iVar10;
      *param_2 = (longlong)puVar13;
      if (puVar13 == (undefined8 *)0x0) {
        lVar11 = 0;
      }
      else {
        LOCK();
        *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
        UNLOCK();
        lVar11 = *param_2;
      }
      local_138 = CONCAT71(local_138._1_7_,1);
      FUN_1447439e4(lVar11);
      if (param_5 != 0) {
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          UNLOCK();
        }
        local_138 = lVar11;
        FUN_1432da764(param_5,&local_138);
      }
      puVar12 = &local_128;
      if (local_108 != (undefined8 *)0x0) {
        puVar12 = local_108;
      }
      FUN_144717c65(puVar12,local_100 & 0xffffffff);
      if (local_108 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143308616;
    }
    local_138 = *param_6;
    local_130 = *(undefined8 *)(*(longlong *)(local_138 + 0x28) + 0x548);
    local_128 = *param_1;
    uStack_120 = param_1[1];
    uStack_118 = *(undefined4 *)(param_1 + 2);
    uStack_114 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_110 = *(undefined4 *)(param_1 + 3);
    local_e8 = 0x10000000000;
    local_c0 = 0x10000000000;
    local_88 = 0x10000000000;
    local_b8 = 0;
    uStack_b0 = 0;
    local_60 = 0x10000000000;
    FUN_14766db76(&local_128);
    local_50 = *(undefined8 *)(param_3 + 0x248);
    local_58 = param_3;
    FUN_143313bf4(&local_128,&local_138);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_143308616:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143308abe FUN_143308abe body=1746 status=ok
// SIG undefined FUN_143308abe(void)

longlong FUN_143308abe(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  code **local_130;
  code *local_128;
  code *local_120;
  undefined4 local_110;
  uint uStack_10c;
  int iStack_108;
  undefined8 local_100;
  undefined4 *local_f8;
  int local_ec;
  code *local_e8 [2];
  undefined1 local_d8 [64];
  longlong local_98;
  undefined4 local_90;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_100 = 0;
  uVar12 = 0;
  uVar3 = 0;
  uVar4 = 0;
  if (param_4 != 0) {
    uVar3 = *(uint *)(param_4 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar4 = *(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      uVar4 = *(uint *)(lVar11 + 0x10);
      bVar16 = uVar4 == 0;
      if (bVar16) {
        *(uint *)(lVar11 + 0x10) = uVar10;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar16) {
        uVar4 = uVar10;
      }
    }
  }
  local_100 = CONCAT44(uVar4,uVar3);
  iVar5 = 0;
  if (param_3 != 0) {
    uVar12 = *(uint *)(param_3 + 0xc);
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar5 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar5 = *(int *)(lVar11 + 0x10);
      bVar16 = iVar5 == 0;
      if (bVar16) {
        *(int *)(lVar11 + 0x10) = iVar14;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar16) {
        iVar5 = iVar14;
      }
    }
  }
  uVar3 = uVar4 >> 0xd ^ uVar3 - uVar4;
  uVar10 = uVar3 << 8 ^ (-0x61c88647 - uVar4) - uVar3;
  uVar15 = uVar10 >> 0xd ^ (uVar4 - uVar3) - uVar10;
  uVar3 = uVar15 >> 0xc ^ (uVar3 - uVar10) - uVar15;
  uVar4 = uVar3 << 0x10 ^ (uVar10 - uVar15) - uVar3;
  uVar10 = uVar4 >> 5 ^ (uVar15 - uVar3) - uVar4;
  uVar3 = uVar10 >> 3 ^ (uVar3 - uVar4) - uVar10;
  uVar4 = uVar3 << 10 ^ (uVar4 - uVar10) - uVar3;
  plVar6 = (longlong *)
           FUN_1476710f2(param_1 + 0x40,uVar4 >> 0xf ^ uVar10 - (uVar3 + uVar4),&local_100);
  lVar11 = FUN_147656b30(param_1,param_2,local_100,CONCAT44(iVar5,uVar12));
  if (lVar11 == 0) {
    uVar7 = FUN_147656e1e(DAT_14c951640);
    if (DAT_14cac9ca8 == 0) {
      local_130 = local_e8;
      local_e8[0] = FUN_141030f22;
      local_120 = FUN_14081d0ea;
      local_128 = FUN_14081d0ea;
      local_138 = &LAB_1478c0a72;
      local_140 = &LAB_1417b2375;
      local_148 = L"Engine";
      local_150 = 0x1000000000;
      local_158 = 0x10000004;
      local_160 = 8;
      local_168 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    lVar11 = *(longlong *)(param_4 + 0x10);
    iVar14 = *(int *)(lVar11 + 0x38);
    if ((iVar14 < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
        != DAT_14cac9ca8 + 0x30)) {
      if (DAT_14cad00c8 == 0) {
        local_130 = local_e8;
        local_e8[0] = FUN_144a7958c;
        local_120 = FUN_14081d0ea;
        local_128 = FUN_14081d0ea;
        local_138 = &LAB_1479b7a0c;
        local_140 = &LAB_1463b464e;
        local_148 = L"Engine";
        local_150 = 0;
        local_158 = 0x10000005;
        local_160 = 8;
        local_168 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        lVar11 = *(longlong *)(param_4 + 0x10);
        iVar14 = *(int *)(lVar11 + 0x38);
      }
      if ((iVar14 < *(int *)(DAT_14cad00c8 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
          != DAT_14cad00c8 + 0x30)) {
        lVar11 = 0;
        goto LAB_143308c5a;
      }
      lVar1 = *(longlong *)(param_4 + 0xa8);
      if (DAT_14cac7648 == 0) {
        local_130 = local_e8;
        local_e8[0] = FUN_144a7958c;
        local_120 = FUN_14081d0ea;
        local_128 = FUN_143242436;
        local_138 = &LAB_14789ef1f;
        local_140 = &LAB_1417b008f;
        local_148 = L"Engine";
        local_150 = 0x8000000000;
        local_158 = 0x10000004;
        local_160 = 0x10;
        local_168 = 0x2b0;
        FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
        lVar11 = *(longlong *)(param_4 + 0x10);
        iVar14 = *(int *)(lVar11 + 0x38);
      }
      if (iVar14 < *(int *)(DAT_14cac7648 + 0x38)) {
        lVar13 = 0;
      }
      else {
        lVar13 = 0;
        if (*(longlong *)
             (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) ==
            DAT_14cac7648 + 0x30) {
          lVar13 = param_4;
        }
      }
      local_110 = (undefined4)*(undefined8 *)(param_4 + 0x18);
      uStack_10c = (uint)((ulonglong)*(undefined8 *)(param_4 + 0x18) >> 0x20);
      FUN_1400021e4(&local_110,local_e8);
      param_4 = lVar1;
    }
    else {
      lVar13 = *(longlong *)(param_4 + 0x1c8);
      local_110 = (undefined4)*(undefined8 *)(param_4 + 0x18);
      uStack_10c = (uint)((ulonglong)*(undefined8 *)(param_4 + 0x18) >> 0x20);
      FUN_1400021e4(&local_110,local_e8);
    }
    pcVar2 = local_e8[0];
    if (lVar13 == 0 || param_4 == 0) {
      lVar11 = 0;
    }
    else {
      uVar8 = FUN_1447210f0(param_4);
      FUN_147963094(local_e8,uVar8,param_4);
      plVar9 = (longlong *)FUN_143406a2c(uVar7,local_e8);
      if (plVar9 == (longlong *)0x0) {
        lVar11 = 0;
      }
      else {
        FUN_144757f48(plVar9,0x40);
        lVar11 = 0;
        (**(code **)(*plVar9 + 0x490))(plVar9,lVar13,&DAT_14cadad98,0);
        local_f8 = &local_110;
        local_110 = param_2;
        uStack_10c = uVar12;
        iStack_108 = iVar5;
        FUN_147671966(plVar6,&local_ec);
        lVar1 = *plVar6;
        uVar4 = *(uint *)((longlong)plVar9 + 0xc);
        *(uint *)(lVar1 + 0x10 + (longlong)local_ec * 0x40) = uVar4;
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        iVar5 = *(int *)(lVar11 + 0x10);
        if (*(int *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar14 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar14);
          }
          LOCK();
          iVar5 = *(int *)(lVar11 + 0x10);
          bVar16 = iVar5 == 0;
          if (bVar16) {
            *(int *)(lVar11 + 0x10) = iVar14;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar16) {
            iVar5 = iVar14;
          }
        }
        lVar1 = lVar1 + (longlong)local_ec * 0x40;
        lVar11 = lVar1 + 0x10;
        *(int *)(lVar1 + 0x14) = iVar5;
      }
      local_90 = 0;
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      FUN_14766440c(local_d8);
    }
    if (pcVar2 != (code *)0x0) {
      FUN_1400020a8(pcVar2);
    }
  }
LAB_143308c5a:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar11;
}



// FUNCTION 143309192 FUN_143309192 body=612 status=ok
// SIG undefined FUN_143309192(void)

longlong FUN_143309192(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_138 [44];
  undefined4 local_10c;
  ulonglong local_108;
  undefined8 local_100;
  undefined4 *local_f8;
  int local_ec;
  undefined1 local_e8 [16];
  undefined1 local_d8 [64];
  longlong local_98;
  undefined4 local_90;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_100 = 0;
  if (param_3 == 0) {
    uVar11 = 0;
    uVar10 = 0;
  }
  else {
    uVar11 = *(uint *)(param_3 + 0xc);
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar10 = (ulonglong)*(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar2 = *(uint *)(lVar9 + 0x10);
      bVar12 = uVar2 == 0;
      if (bVar12) {
        *(uint *)(lVar9 + 0x10) = uVar7;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar12) {
        uVar2 = uVar7;
      }
      uVar10 = (ulonglong)uVar2;
    }
  }
  uVar10 = uVar10 << 0x20 | (ulonglong)uVar11;
  plVar3 = (longlong *)FUN_1476710f2(param_1 + 0x40,0xbd49d10d,&local_100);
  lVar9 = FUN_147656b30(param_1,param_2,local_100,uVar10);
  if (lVar9 == 0) {
    uVar4 = FUN_147656e1e(DAT_14c951640);
    lVar9 = 0;
    FUN_147963094(local_e8,param_4,0);
    lVar5 = FUN_143406a2c(uVar4,local_e8);
    if (lVar5 != 0) {
      FUN_144757f48(lVar5,0x40);
      local_f8 = &local_10c;
      local_10c = param_2;
      local_108 = uVar10;
      FUN_147671966(plVar3,&local_ec);
      lVar6 = *plVar3;
      uVar11 = *(uint *)(lVar5 + 0xc);
      *(uint *)(lVar6 + 0x10 + (longlong)local_ec * 0x40) = uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar1 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar1 = *(int *)(lVar9 + 0x10);
        bVar12 = iVar1 == 0;
        if (bVar12) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar1 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar1 = iVar8;
        }
      }
      lVar6 = (longlong)local_ec * 0x40 + lVar6;
      lVar9 = lVar6 + 0x10;
      *(int *)(lVar6 + 0x14) = iVar1;
    }
    local_90 = 0;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_14766440c(local_d8);
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9;
}



// FUNCTION 14330940a FUN_14330940a body=1349 status=ok
// SIG undefined FUN_14330940a(void)

/* WARNING: Type propagation algorithm not settling */

longlong *
FUN_14330940a(short *param_1,longlong *param_2,longlong param_3,undefined8 param_4,longlong param_5,
             longlong *param_6)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 *local_158;
  ulonglong local_150;
  undefined8 local_140;
  undefined8 local_118;
  longlong local_110;
  undefined8 uStack_108;
  undefined8 local_e0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0 [5];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((((*param_1 == -1) || (param_1[1] == -1)) || (param_1[2] == -1)) ||
     ((param_1[3] == -1 || (cVar3 = FUN_147677f94(param_1,param_3), cVar3 == '\0')))) {
    *param_2 = 0;
  }
  else if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
    local_158 = (undefined4 *)0x0;
    local_150 = 0x400000000;
    FUN_147678074(param_1,param_4,&local_178);
    puVar12 = (undefined4 *)0x0;
    if ((int)local_150 != 0) {
      puVar12 = &local_178;
    }
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar6 = (uint *)*puVar1;
    if (puVar6 != (uint *)0x0) goto LAB_143309670;
    while( true ) {
      uVar8 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar8 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar8 | 1;
        __tlregdtor(&LAB_143311b0b);
      }
      lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar5 = *(undefined4 **)(lVar11 + 0x310);
      *(undefined8 *)(lVar11 + 0x310) = 0;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar5 = 0xffffffff;
      *(undefined4 **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      FUN_140217a48(puVar1);
      puVar6 = (uint *)*puVar1;
LAB_143309670:
      puVar13 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar9 = (uint *)(puVar13 + 0x3b);
      uVar8 = puVar6[0x12];
      if (puVar9 <= puVar6 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
        LOCK();
        uVar4 = *puVar6;
        *puVar6 = *puVar6 + uVar8 + 1;
        UNLOCK();
        if ((uVar4 ^ uVar8) != 0xffffffff) break;
        puVar6 = (uint *)*puVar1;
        *puVar6 = 0xffffffff;
        *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        puVar13 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
        puVar9 = (uint *)(puVar13 + 0x3b);
        uVar8 = 0;
        if (puVar9 <= puVar6 + 0x4000) {
          uVar8 = 1;
          goto LAB_1433096f2;
        }
      }
    }
    uVar8 = uVar8 + 1;
LAB_1433096f2:
    *(uint **)(puVar6 + 0x10) = puVar9;
    puVar6[0x12] = uVar8;
    FUN_1447247dc(puVar13,puVar12);
    *puVar13 = &PTR_FUN_14a4d7678;
    FUN_14767a542(puVar13 + 0x15,param_3,param_1,param_6);
    uVar8 = *(uint *)((longlong)puVar13 + 0xb4);
    if (((ulonglong)uVar8 & 0xff) == 0xff) {
      uVar4 = uVar8 >> 10 & 3;
      iVar10 = 0;
      if ((uVar8 >> 9 & 1) == 0 || uVar4 < 2) {
        uVar14 = (ulonglong)(byte)(&DAT_149e38edc)[uVar4];
        iVar10 = 0;
      }
      else {
        uVar14 = 2;
      }
    }
    else {
      iVar10 = (uVar8 >> 7 & 2 | uVar8 >> 9 & 1) +
               *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar8 & 0xff) * 4);
      uVar14 = 5;
    }
    if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
    }
    puVar13[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar13[9] = puVar13;
    puVar13[10] = puVar13;
    lVar11 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar11 == 0) {
      uVar2 = 1;
      if ((char)uVar14 != '\x06') {
        uVar2 = uVar14;
      }
      uVar14 = uVar2;
      uVar7 = 0;
    }
    else {
      if ((char)uVar14 == '\x06') {
        uVar14 = *(ulonglong *)(lVar11 + 0x38) >> 0x3b;
      }
      uVar7 = *(undefined8 *)(lVar11 + 0x30);
    }
    puVar13[0xf] = uVar7;
    puVar13[0x10] = uVar14 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar13 + 0x1c) = iVar10;
    *param_2 = (longlong)puVar13;
    if (puVar13 == (undefined8 *)0x0) {
      lVar11 = 0;
    }
    else {
      LOCK();
      *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
      UNLOCK();
      lVar11 = *param_2;
    }
    local_a0[0] = CONCAT71(local_a0[0]._1_7_,1);
    FUN_1447439e4(lVar11);
    if (param_5 != 0) {
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
      }
      local_a0[0] = lVar11;
      FUN_1432da764(param_5,local_a0);
    }
    puVar12 = &local_178;
    if (local_158 != (undefined4 *)0x0) {
      puVar12 = local_158;
    }
    FUN_144717c65(puVar12,local_150 & 0xffffffff);
    if (local_158 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_a0[0] = *(longlong *)(*param_6 + 0x548);
    local_78 = 0;
    local_70 = 0;
    local_a0[1] = 0;
    local_a0[2] = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_168 = *(undefined4 *)(param_1 + 8);
    local_178 = *(undefined4 *)param_1;
    uStack_174 = *(undefined4 *)(param_1 + 2);
    uStack_170 = *(undefined4 *)(param_1 + 4);
    uStack_16c = *(undefined4 *)(param_1 + 6);
    local_140 = 0x10000000000;
    local_118 = 0x10000000000;
    local_e0 = 0x10000000000;
    local_110 = 0;
    uStack_108 = 0;
    local_b8 = 0x10000000000;
    FUN_147678174(&local_178);
    local_a8 = *(undefined8 *)(param_3 + 0x248);
    local_b0 = param_3;
    FUN_14331448a(&local_178,local_a0);
    if (local_110 != 0) {
      FUN_1400020a8();
    }
    *param_2 = 0;
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14767a3d2(local_a0 + 1);
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143309950 FUN_143309950 body=1691 status=ok
// SIG undefined FUN_143309950(void)

void FUN_143309950(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  char local_291;
  longlong *local_290;
  longlong *local_288;
  longlong local_280;
  int local_278;
  int local_274;
  longlong *local_270;
  undefined8 local_268;
  longlong local_260;
  longlong local_258;
  undefined8 local_250;
  longlong *local_248;
  longlong *local_240;
  undefined8 local_238;
  longlong *local_230;
  longlong local_228;
  longlong local_220;
  int local_218;
  undefined1 local_209;
  undefined8 local_208;
  uint local_200;
  longlong local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8 [4];
  undefined1 local_1e4;
  undefined8 local_1e0;
  uint local_1d8;
  undefined1 local_1c9;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 *local_1b8;
  int local_1b0;
  undefined8 local_1a8;
  undefined8 *local_1a0;
  int local_198;
  undefined8 local_190;
  undefined8 *local_188;
  int local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined1 local_158 [32];
  undefined8 local_138;
  undefined1 local_130 [32];
  undefined8 local_110;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_d8;
  undefined8 local_b0;
  undefined1 local_a8 [32];
  undefined8 local_88;
  undefined1 local_80 [32];
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if (**(int **)(param_2 + 0x10) != 0) {
    lVar10 = FUN_14038fb82();
    lVar11 = FUN_14009d2a0();
    local_168 = (longlong)&local_1c0 + 2;
    local_1c0 = CONCAT62(local_1c0._2_6_,*(undefined2 *)(lVar10 + 0xda));
    local_60 = 0x10000000000;
    local_170 = &local_1c0;
    FUN_1447c44f6();
    if (*(char *)(*(longlong *)(param_2 + 0x10) + 0x110) == '\0') {
      FUN_140dba9e6(local_80,*(undefined2 *)(lVar11 + 0x11a));
    }
    uVar6 = local_1c0;
    local_168 = (longlong)&local_1c0 + 6;
    local_1c0._6_2_ = SUB82(uVar6,6);
    local_1c0._0_6_ =
         CONCAT24(*(undefined2 *)(lVar11 + 0x130),
                  CONCAT22(*(undefined2 *)(lVar11 + 0x12e),*(undefined2 *)(lVar11 + 0x11c)));
    local_88 = 0x10000000000;
    local_170 = &local_1c0;
    FUN_1447c44f6(local_a8,&local_170);
    FUN_140732858(*(undefined8 *)(param_2 + 0x10));
    FUN_14104f24c(*(undefined8 *)(param_2 + 0x10),&local_238,DAT_14cab58a4);
    FUN_14767abfc(*(undefined8 *)(param_2 + 0x10),&local_248,DAT_14cab5c38);
    local_170 = (undefined8 *)
                CONCAT26(*(undefined2 *)(lVar10 + 0xdc),
                         CONCAT24(*(undefined2 *)(lVar11 + 0x4a),
                                  CONCAT22(*(undefined2 *)(lVar11 + 0x50),(undefined2)local_170)));
    local_168._0_2_ = (ushort)(byte)local_168;
    local_168 = CONCAT44(0x6ff,(undefined4)local_168);
    local_160 = 0;
    local_138 = 0x10000000000;
    local_110 = 0x10000000000;
    local_d8 = 0x10000000000;
    local_108 = 0;
    uStack_100 = 0;
    local_b0 = 0x10000000000;
    FUN_14767c6de(&local_170,local_158);
    FUN_14010b303(local_80,local_158,1,&local_1c0);
    FUN_14010b303(local_a8,local_130,1,&local_1c0);
    local_250 = local_238;
    local_288 = local_230;
    if (local_230 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_230 + 1) = (int)local_230[1] + 1;
      UNLOCK();
    }
    local_270 = local_248;
    local_290 = local_240;
    if (local_240 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_240 + 1) = (int)local_240[1] + 1;
      UNLOCK();
    }
    if (((local_170._2_2_ != -1) && (local_170._4_2_ != -1)) && (local_170._6_2_ != -1)) {
      lVar10 = *(longlong *)(param_1 + -0x18);
      local_291 = *(char *)(lVar10 + 0x298);
      FUN_14150e78a(&local_228,lVar10 + 0x28,local_158);
      local_278 = *(int *)(lVar10 + 0x38);
      if (local_218 != local_278) {
        local_270 = local_270 + 0x1b;
        do {
          local_258 = local_220;
          local_260 = (longlong)local_218;
          lVar10 = *(longlong *)(*(longlong *)(local_220 + 0x60) + local_260 * 8);
          if (local_291 == '\0') {
            *(undefined4 *)(lVar10 + 0x14) = 0;
            local_280 = lVar10;
          }
          else {
            local_280 = 0;
          }
          if (*(ushort *)(lVar10 + 0xc) != 0) {
            puVar12 = *(undefined8 **)(lVar10 + 0x28);
            lVar11 = (ulonglong)*(ushort *)(lVar10 + 0xc) << 5;
            do {
              if (*(short *)((longlong)puVar12 + 0x1e) == local_170._6_2_) goto LAB_143309d57;
              puVar12 = puVar12 + 4;
              lVar11 = lVar11 + -0x20;
            } while (lVar11 != 0);
          }
          puVar12 = (undefined8 *)0x0;
LAB_143309d57:
          local_274 = *(int *)(lVar10 + 0x14);
          if (local_274 == 1) {
            AcquireSRWLockShared((PSRWLOCK)(puVar12 + 1));
          }
          LOCK();
          *(int *)(puVar12 + 3) = *(int *)(puVar12 + 3) + 1;
          UNLOCK();
          local_268 = *puVar12;
          if (*(ushort *)(lVar10 + 0xc) != 0) {
            puVar14 = *(undefined8 **)(lVar10 + 0x28);
            lVar11 = (ulonglong)*(ushort *)(lVar10 + 0xc) << 5;
            do {
              if (*(short *)((longlong)puVar14 + 0x1e) == local_170._4_2_) goto LAB_143309d8b;
              puVar14 = puVar14 + 4;
              lVar11 = lVar11 + -0x20;
            } while (lVar11 != 0);
          }
          puVar14 = (undefined8 *)0x0;
LAB_143309d8b:
          iVar4 = *(int *)(lVar10 + 0x14);
          if (iVar4 == 1) {
            AcquireSRWLockShared((PSRWLOCK)(puVar14 + 1));
          }
          LOCK();
          *(int *)(puVar14 + 3) = *(int *)(puVar14 + 3) + 1;
          UNLOCK();
          uVar6 = *puVar14;
          if (*(ushort *)(lVar10 + 0xc) != 0) {
            puVar15 = *(undefined8 **)(lVar10 + 0x28);
            lVar11 = (ulonglong)*(ushort *)(lVar10 + 0xc) << 5;
            do {
              if (*(short *)((longlong)puVar15 + 0x1e) == local_170._2_2_) goto LAB_143309db5;
              puVar15 = puVar15 + 4;
              lVar11 = lVar11 + -0x20;
            } while (lVar11 != 0);
          }
          puVar15 = (undefined8 *)0x0;
LAB_143309db5:
          iVar5 = *(int *)(lVar10 + 0x14);
          if (iVar5 == 1) {
            AcquireSRWLockShared((PSRWLOCK)(puVar15 + 1));
          }
          lVar9 = local_258;
          lVar11 = local_260;
          LOCK();
          *(int *)(puVar15 + 3) = *(int *)(puVar15 + 3) + 1;
          UNLOCK();
          uVar7 = *puVar15;
          uVar8 = *(undefined8 *)(lVar10 + 0x18);
          local_180 = local_274;
          local_178 = local_268;
          local_1c8 = local_268;
          local_1c9 = 1;
          local_58 = &LAB_1433148a4;
          local_50 = &local_1c8;
          uVar13 = (uint)*(ushort *)
                          (*(longlong *)(*(longlong *)(local_258 + 0x60) + local_260 * 8) + 0xe);
          local_1e0 = uVar6;
          local_1d8 = uVar13;
          local_1c0 = uVar8;
          local_1b8 = puVar15;
          local_1b0 = iVar5;
          local_1a8 = uVar7;
          local_1a0 = puVar14;
          local_198 = iVar4;
          local_190 = uVar6;
          local_188 = puVar12;
          FUN_1475b9738(local_250,&local_1c9,&local_1e0,&local_58);
          local_1f8 = lVar9;
          local_1f0 = (undefined4)lVar11;
          FUN_140cd6274(local_1e8,&local_1f8);
          plVar3 = local_270;
          local_1e4 = 0;
          local_2a8 = uVar6;
          (**(code **)*local_270)(local_270,local_1e8,uVar8,uVar7);
          local_209 = 0;
          local_208 = uVar6;
          local_200 = uVar13;
          (**(code **)(*plVar3 + 0x10))(plVar3,&local_209,&local_208);
          FUN_14767c786(&local_1c0);
          if (local_280 != 0) {
            *(undefined4 *)(local_280 + 0x14) = 1;
          }
          local_218 = FUN_1403b8464(&local_228,local_218 + 1);
        } while (local_218 != local_278);
      }
      if (local_228 != 0) {
        if (*(char *)(local_220 + 0x270) == '\0') {
          *(int *)(local_220 + 0x264) = *(int *)(local_220 + 0x264) + -1;
        }
        else {
          LOCK();
          *(int *)(local_220 + 0x264) = *(int *)(local_220 + 0x264) + -1;
          UNLOCK();
        }
      }
    }
    plVar3 = local_290;
    if (local_290 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_290 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_290)(local_290);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_290 + 0x10))();
        }
      }
    }
    plVar3 = local_288;
    if (local_288 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_288 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_288)(local_288);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_288 + 0x10))();
        }
      }
    }
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    if (local_240 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_240 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_240)(local_240);
        LOCK();
        piVar2 = (int *)((longlong)local_240 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_240 + 0x10))(local_240);
        }
      }
    }
    if (local_230 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_230 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_230)(local_230);
        LOCK();
        piVar2 = (int *)((longlong)local_230 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_230 + 0x10))(local_230);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143309fee FUN_143309fee body=1359 status=ok
// SIG undefined FUN_143309fee(void)

longlong *
FUN_143309fee(short *param_1,longlong *param_2,longlong param_3,undefined8 param_4,longlong param_5,
             longlong *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined8 *local_160;
  longlong local_150;
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 *local_108;
  ulonglong local_100;
  undefined8 local_f0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined8 local_90;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) &&
     ((param_1[3] != -1 && (cVar3 = FUN_14767e146(param_1,param_3), cVar3 != '\0')))) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_108 = (undefined8 *)0x0;
      local_100 = 0x400000000;
      FUN_147680c64(param_1,param_4,&local_128);
      puVar12 = (undefined8 *)0x0;
      if ((int)local_100 != 0) {
        puVar12 = &local_128;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar6 = (uint *)*puVar1;
      if (puVar6 != (uint *)0x0) goto LAB_14330a223;
      while( true ) {
        uVar8 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar8 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar8 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar5 = *(undefined4 **)(lVar11 + 0x310);
        *(undefined8 *)(lVar11 + 0x310) = 0;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar5 = 0xffffffff;
        *(undefined4 **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        FUN_140217a48(puVar1);
        puVar6 = (uint *)*puVar1;
LAB_14330a223:
        puVar13 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar9 = (uint *)(puVar13 + 0x34);
        uVar8 = puVar6[0x12];
        if (puVar9 <= puVar6 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
          LOCK();
          uVar4 = *puVar6;
          *puVar6 = *puVar6 + uVar8 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar8) != 0xffffffff) break;
          puVar6 = (uint *)*puVar1;
          *puVar6 = 0xffffffff;
          *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
          puVar6[0x12] = 0;
          *puVar1 = puVar6;
          puVar13 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
          puVar9 = (uint *)(puVar13 + 0x34);
          uVar8 = 0;
          if (puVar9 <= puVar6 + 0x4000) {
            uVar8 = 1;
            goto LAB_14330a2a5;
          }
        }
      }
      uVar8 = uVar8 + 1;
LAB_14330a2a5:
      *(uint **)(puVar6 + 0x10) = puVar9;
      puVar6[0x12] = uVar8;
      FUN_1447247dc(puVar13,puVar12);
      *puVar13 = &PTR_FUN_14a4d7e88;
      local_160 = param_8;
      local_168 = param_7;
      FUN_147681054(puVar13 + 0x15,param_3,param_1,param_6);
      uVar8 = *(uint *)((longlong)puVar13 + 0xb4);
      if (((ulonglong)uVar8 & 0xff) == 0xff) {
        uVar4 = uVar8 >> 10 & 3;
        iVar10 = 0;
        if ((uVar8 >> 9 & 1) == 0 || uVar4 < 2) {
          uVar14 = (ulonglong)(byte)(&DAT_149e38edc)[uVar4];
          iVar10 = 0;
        }
        else {
          uVar14 = 2;
        }
      }
      else {
        iVar10 = (uVar8 >> 7 & 2 | uVar8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar8 & 0xff) * 4);
        uVar14 = 5;
      }
      if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
      }
      puVar13[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar13[9] = puVar13;
      puVar13[10] = puVar13;
      lVar11 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar11 == 0) {
        uVar2 = 1;
        if ((char)uVar14 != '\x06') {
          uVar2 = uVar14;
        }
        uVar14 = uVar2;
        uVar7 = 0;
      }
      else {
        if ((char)uVar14 == '\x06') {
          uVar14 = *(ulonglong *)(lVar11 + 0x38) >> 0x3b;
        }
        uVar7 = *(undefined8 *)(lVar11 + 0x30);
      }
      puVar13[0xf] = uVar7;
      puVar13[0x10] = uVar14 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar13 + 0x1c) = iVar10;
      *param_2 = (longlong)puVar13;
      if (puVar13 == (undefined8 *)0x0) {
        lVar11 = 0;
      }
      else {
        LOCK();
        *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
        UNLOCK();
        lVar11 = *param_2;
      }
      local_148 = CONCAT71(local_148._1_7_,1);
      FUN_1447439e4(lVar11);
      if (param_5 != 0) {
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
          UNLOCK();
        }
        local_148 = lVar11;
        FUN_1432da764(param_5,&local_148);
        local_150 = *param_2;
        if (local_150 != 0) {
          LOCK();
          *(int *)(local_150 + 8) = *(int *)(local_150 + 8) + 1;
          UNLOCK();
        }
        FUN_1432da764(param_5,&local_150);
      }
      puVar12 = &local_128;
      if (local_108 != (undefined8 *)0x0) {
        puVar12 = local_108;
      }
      FUN_144717c65(puVar12,local_100 & 0xffffffff);
      if (local_108 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14330a03d;
    }
    local_148 = *param_6;
    local_140 = *param_7;
    local_130 = *param_8;
    local_138 = 0;
    local_118 = *(undefined4 *)(param_1 + 8);
    local_128 = *(undefined8 *)param_1;
    uStack_120 = *(undefined8 *)(param_1 + 4);
    local_f0 = 0x10000000000;
    local_c8 = 0x10000000000;
    local_90 = 0x10000000000;
    local_c0 = 0;
    uStack_b8 = 0;
    local_68 = 0x10000000000;
    FUN_14767e268(&local_128);
    local_58 = *(undefined8 *)(param_3 + 0x248);
    local_60 = param_3;
    FUN_143314b4e(&local_128,&local_148);
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_14330a03d:
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14330a53e FUN_14330a53e body=1165 status=ok
// SIG undefined FUN_14330a53e(void)

longlong *
FUN_14330a53e(short *param_1,longlong *param_2,longlong param_3,undefined8 param_4,longlong param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined1 local_120 [32];
  undefined1 *local_100;
  ulonglong local_f8;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) &&
     (cVar3 = FUN_147687bbc(param_1,param_3), cVar3 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x400000000;
      FUN_147687f10(param_1,param_4,local_120);
      puVar10 = (undefined1 *)0x0;
      if ((int)local_f8 != 0) {
        puVar10 = local_120;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar6 = (uint *)*puVar1;
      if (puVar6 != (uint *)0x0) goto LAB_14330a6f0;
      while( true ) {
        uVar8 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar8 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar8 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar5 = *(undefined4 **)(lVar13 + 0x310);
        *(undefined8 *)(lVar13 + 0x310) = 0;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar5 = 0xffffffff;
        *(undefined4 **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        FUN_140217a48(puVar1);
        puVar6 = (uint *)*puVar1;
LAB_14330a6f0:
        puVar11 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar9 = (uint *)(puVar11 + 0x31);
        uVar8 = puVar6[0x12];
        if (puVar9 <= puVar6 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
          LOCK();
          uVar4 = *puVar6;
          *puVar6 = *puVar6 + uVar8 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar8) != 0xffffffff) break;
          puVar6 = (uint *)*puVar1;
          *puVar6 = 0xffffffff;
          *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
          puVar6[0x12] = 0;
          *puVar1 = puVar6;
          puVar11 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
          puVar9 = (uint *)(puVar11 + 0x31);
          uVar8 = 0;
          if (puVar9 <= puVar6 + 0x4000) {
            uVar8 = 1;
            goto LAB_14330a774;
          }
        }
      }
      uVar8 = uVar8 + 1;
LAB_14330a774:
      *(uint **)(puVar6 + 0x10) = puVar9;
      puVar6[0x12] = uVar8;
      FUN_1447247dc(puVar11,puVar10);
      *puVar11 = &PTR_FUN_14a4d80c0;
      FUN_147687e92(puVar11 + 0x15,param_3,param_1);
      uVar8 = *(uint *)((longlong)puVar11 + 0xb4);
      if (((ulonglong)uVar8 & 0xff) == 0xff) {
        uVar4 = uVar8 >> 10 & 3;
        iVar12 = 0;
        if ((uVar8 >> 9 & 1) == 0 || uVar4 < 2) {
          uVar14 = (ulonglong)(byte)(&DAT_149e38edc)[uVar4];
          iVar12 = 0;
        }
        else {
          uVar14 = 2;
        }
      }
      else {
        iVar12 = (uVar8 >> 7 & 2 | uVar8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar8 & 0xff) * 4);
        uVar14 = 5;
      }
      if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
      }
      puVar11[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar11[9] = puVar11;
      puVar11[10] = puVar11;
      lVar13 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar13 == 0) {
        uVar2 = 1;
        if ((char)uVar14 != '\x06') {
          uVar2 = uVar14;
        }
        uVar14 = uVar2;
        uVar7 = 0;
      }
      else {
        if ((char)uVar14 == '\x06') {
          uVar14 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
        }
        uVar7 = *(undefined8 *)(lVar13 + 0x30);
      }
      puVar11[0xf] = uVar7;
      puVar11[0x10] = uVar14 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar11 + 0x1c) = iVar12;
      *param_2 = (longlong)puVar11;
      if (puVar11 == (undefined8 *)0x0) {
        lVar13 = 0;
      }
      else {
        LOCK();
        *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
        UNLOCK();
        lVar13 = *param_2;
      }
      local_128 = CONCAT71(local_128._1_7_,1);
      FUN_1447439e4(lVar13);
      if (param_5 != 0) {
        if (lVar13 != 0) {
          LOCK();
          *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
          UNLOCK();
        }
        local_128 = lVar13;
        FUN_1432da764(param_5,&local_128);
      }
      puVar10 = local_120;
      if (local_100 != (undefined1 *)0x0) {
        puVar10 = local_100;
      }
      FUN_144717c65(puVar10,local_f8 & 0xffffffff);
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14330a585;
    }
    FUN_147687e92(local_120,param_3,param_1);
    FUN_143314dfa(local_120);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_14330a585:
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14330a9cc FUN_14330a9cc body=811 status=ok
// SIG undefined FUN_14330a9cc(void)

uint FUN_14330a9cc(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  undefined8 uVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined7 uVar18;
  uint uVar19;
  uint local_60;
  
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar17 = 1;
    uVar15 = 0;
    iVar16 = 0;
    iVar12 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar19 = *puVar10;
    if (uVar19 == 0) {
      iVar12 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar12 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar17 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar17 = uVar15;
      }
      iVar16 = 0;
      do {
        if (uVar17 == uVar15) goto LAB_14330acd1;
        iVar16 = iVar16 + 0x20;
        uVar19 = puVar10[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar15 = 0;
      iVar16 = 0;
    }
    uVar17 = (ulonglong)(-uVar19 & uVar19);
    uVar1 = uVar17 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar12 = (iVar16 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar12) {
      iVar12 = iVar2;
    }
  }
  if (iVar12 < iVar2) {
    uVar19 = 0xffffffff;
    local_60 = 0;
    do {
      lVar14 = *param_1;
      lVar4 = (longlong)iVar12;
      iVar2 = *(int *)(lVar14 + 0xc + lVar4 * 0x24);
      iVar12 = *(int *)(lVar14 + 0x10 + lVar4 * 0x24);
      iVar8 = *(int *)(lVar14 + 0x14 + lVar4 * 0x24);
      if (iVar12 + iVar2 + iVar8 == 0) {
        FUN_147688bc6(param_1);
      }
      else {
        uVar18 = (undefined7)((ulonglong)param_4 >> 8);
        uVar7 = (uint)CONCAT71(uVar18,2);
        if ((iVar8 < 1) && (uVar7 = (uint)CONCAT71(uVar18,1), iVar12 < 1)) {
          if (iVar2 < 1) goto LAB_14330ab21;
          uVar7 = 0;
        }
        uVar1 = *(ulonglong *)(lVar14 + lVar4 * 0x24);
        if (((((uVar1 >> 0x20 != 0) && (uVar6 = (uint)uVar1, -1 < (int)uVar6)) &&
             ((int)uVar6 < DAT_14c9647dc)) &&
            ((plVar13 = (longlong *)
                        ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0xd & 0x3fff8))),
             plVar13 != (longlong *)0x0 && ((int)plVar13[2] == (int)(uVar1 >> 0x20))))) &&
           (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 &&
            (plVar13 = (longlong *)*plVar13, plVar13 != (longlong *)0x0)))) {
          if (param_2 != 0) {
            FUN_14765aee8(param_2,plVar13);
          }
          FUN_14765ac96(plVar13);
          lVar5 = (**(code **)(*plVar13 + 0x2a0))(plVar13);
          if (*(longlong *)(lVar5 + 0x30) == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = *(undefined8 *)(*(longlong *)(lVar5 + 0x30) + 0x2b8);
          }
          cVar3 = FUN_1411ada6c(uVar11,plVar13,uVar7,0);
          if (cVar3 != '\0') {
            if ((char)uVar7 == '\0') {
              lVar5 = 0x10;
            }
            else {
              if ((uVar7 & 0xff) != 2) goto LAB_14330ab21;
              lVar5 = 0x11;
            }
            if ((*(char *)(lVar4 * 0x24 + 8 + lVar14 + lVar5) == '\x01') &&
               (cVar3 = FUN_14330acf8(plVar13,uVar7,1), cVar3 == '\0')) {
              if ((iVar8 < 1) || (cVar3 = FUN_14330acf8(plVar13,1,0), cVar3 != '\0')) {
                local_60 = local_60 | 1;
              }
              else {
                local_60 = local_60 | 2;
              }
            }
          }
        }
      }
LAB_14330ab21:
      uVar19 = uVar19 & ~(uint)uVar17;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar2 = (int)param_1[5];
      iVar12 = (int)uVar15;
      param_4 = (longlong)iVar12;
      uVar7 = puVar10[param_4] & uVar19;
      if (uVar7 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return local_60;
        }
        lVar14 = 0;
        while( true ) {
          iVar16 = iVar16 + 0x20;
          uVar7 = puVar10[param_4 + lVar14 + 1];
          if (uVar7 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar9 - param_4 == lVar14) {
            return local_60;
          }
        }
        uVar15 = (ulonglong)(iVar12 + (int)lVar14 + 1);
        uVar19 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar7 & uVar7);
      uVar1 = uVar17 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar12 = (iVar16 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar2);
  }
  else {
LAB_14330acd1:
    local_60 = 0;
  }
  return local_60;
}



// FUNCTION 14330acf8 FUN_14330acf8 body=487 status=ok
// SIG undefined FUN_14330acf8(void)

undefined4 FUN_14330acf8(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_298 [40];
  undefined8 *local_270;
  undefined8 *local_268;
  longlong local_260;
  undefined4 local_258;
  undefined8 local_250 [33];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined1 local_12c;
  undefined8 *local_128;
  undefined8 uStack_120;
  undefined2 local_118;
  undefined8 local_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_138 = DAT_14c8464f0;
  local_148 = DAT_14c8464e0;
  uStack_140 = DAT_14c8464e8;
  uVar3 = 0;
  local_130 = 0;
  local_12c = 1;
  local_128 = (undefined8 *)0x0;
  uStack_120 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_107 = 0;
  uStack_100 = 0;
  uStack_ff = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c4 = 0xffffffff00000080;
  local_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_118 = 1;
  (**(code **)(*param_1 + 0x310))(0,local_250);
  uStack_120 = CONCAT44(uStack_120._4_4_,1);
  FUN_1446f84a2(&local_128,0);
  *local_128 = local_250[0];
  lVar2 = (**(code **)(*param_1 + 0x2a0))(param_1);
  if (*(longlong *)(lVar2 + 0x30) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x2b0);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar2 + 0x3f0);
    }
  }
  FUN_1406d359e(local_250,&local_148);
  local_268 = &local_148;
  local_270 = local_250;
  FUN_147664532(&local_260);
  uVar1 = FUN_1406d351e(uVar3,param_2,&local_260,param_3);
  FUN_1406d33ae(local_260,local_258);
  if (local_260 != 0) {
    FUN_1400020a8();
  }
  FUN_1406d3414(local_250);
  FUN_1406d3414(&local_148);
  if ((local_38 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14330aee0 FUN_14330aee0 body=282 status=ok
// SIG undefined FUN_14330aee0(void)

void FUN_14330aee0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar9 = (**(code **)(*param_1 + 0x180))();
  if ((lVar9 != 0) && (cVar6 = FUN_147546242(param_1 + 8,param_1[5] + 0x28), cVar6 != '\0')) {
    FUN_14765b3e8(param_1);
    lVar10 = FUN_14011c706(lVar9);
    if (lVar10 != 0) {
      lVar3 = param_1[0x16];
      plVar4 = (longlong *)param_1[0x19];
      if (plVar4 == (longlong *)0x0) {
LAB_14330afaf:
        uVar8 = FUN_14330a9cc(lVar3,0);
      }
      else {
        iVar7 = (int)plVar4[1];
        do {
          if (iVar7 == 0) goto LAB_14330afaf;
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar11 = iVar7 == iVar5;
          if (bVar11) {
            *(int *)(plVar4 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar11);
        uVar8 = FUN_14330a9cc(lVar3,param_1[0x18]);
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
      QueryPerformanceCounter(&local_30);
      if ((uVar8 & 2) == 0) {
        if ((uVar8 & 1) != 0) {
          (**(code **)(*(longlong *)(lVar10 + 0x40) + 0x10))(lVar10 + 0x40);
          FUN_143786ce4(lVar9,2);
        }
      }
      else {
        FUN_14051e3d2(lVar9);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14330affb FUN_14330affb body=69 status=ok
// SIG undefined FUN_14330affb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14330affb(void)

{
  _DAT_14cab5d28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014330b03d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab5d30,1);
  return;
}



// FUNCTION 14330b040 FUN_14330b040 body=69 status=ok
// SIG undefined FUN_14330b040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14330b040(void)

{
  _DAT_14cab5d40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014330b082. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab5d48,1);
  return;
}



// FUNCTION 14330b086 FUN_14330b086 body=128 status=ok
// SIG undefined FUN_14330b086(void)

bool FUN_14330b086(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (DAT_14cab5d20 == '\x01') {
    lVar2 = FUN_14038fb82();
    uVar1 = *(ushort *)(lVar2 + 0x84);
    lVar3 = FUN_14482820e(param_2 + 0x28);
    if (((uVar1 != 0xffff) &&
        (*(uint *)(lVar3 + 0x20) != (uint)uVar1 && (int)(uint)uVar1 <= (int)*(uint *)(lVar3 + 0x20))
        ) && ((*(uint *)(lVar3 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0)) {
      return true;
    }
    uVar1 = *(ushort *)(lVar2 + 0xda);
    lVar2 = FUN_14482820e(param_2 + 0x28);
    if ((uVar1 != 0xffff) &&
       (*(uint *)(lVar2 + 0x20) != (uint)uVar1 && (int)(uint)uVar1 <= (int)*(uint *)(lVar2 + 0x20)))
    {
      return (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
    }
  }
  return false;
}



// FUNCTION 14330b106 FUN_14330b106 body=719 status=ok
// SIG undefined FUN_14330b106(void)

void FUN_14330b106(short *param_1,longlong param_2,undefined8 *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  char local_7d;
  int local_7c;
  longlong local_78;
  short *local_70;
  short *local_68;
  longlong local_60;
  int local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*param_1 != -1) {
    local_68 = param_1 + 8;
    local_7d = *(char *)(param_2 + 0x270);
    if (local_7d == '\0') {
      *(int *)(param_2 + 0x264) = *(int *)(param_2 + 0x264) + 1;
    }
    else {
      LOCK();
      *(int *)(param_2 + 0x264) = *(int *)(param_2 + 0x264) + 1;
      UNLOCK();
    }
    local_70 = param_1;
    local_60 = param_2;
    local_58 = FUN_1403b8464(&local_68,0);
    local_7c = *(int *)(param_2 + 0x10);
    if (local_58 != local_7c) {
      do {
        lVar3 = *(longlong *)(*(longlong *)(local_60 + 0x60) + (longlong)local_58 * 8);
        if (local_7d == '\0') {
          *(undefined4 *)(lVar3 + 0x14) = 0;
          local_78 = lVar3;
        }
        else {
          local_78 = 0;
        }
        if (*(ushort *)(lVar3 + 0xc) != 0) {
          plVar7 = *(longlong **)(lVar3 + 0x28);
          lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar7 + 0x1e) == *local_70) goto LAB_14330b1f7;
            plVar7 = plVar7 + 4;
            lVar5 = lVar5 + -0x20;
          } while (lVar5 != 0);
        }
        plVar7 = (longlong *)0x0;
LAB_14330b1f7:
        iVar2 = *(int *)(lVar3 + 0x14);
        if (iVar2 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
        }
        LOCK();
        *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
        UNLOCK();
        uVar1 = *(ushort *)(lVar3 + 0xe);
        if ((ulonglong)uVar1 != 0) {
          lVar3 = *plVar7;
          uVar6 = 0;
          do {
            lVar5 = *(longlong *)(lVar3 + uVar6 * 8);
            if (lVar5 != 0) {
              uVar4 = *param_3;
              if (DAT_14cac7648 == 0) {
                local_50 = FUN_144a7958c;
                local_90 = FUN_14081d0ea;
                local_98 = FUN_143242436;
                local_a0 = &local_50;
                local_a8 = &LAB_14789ef1f;
                local_b0 = &LAB_1417b008f;
                local_b8 = L"Engine";
                local_c0 = 0x8000000000;
                local_c8 = 0x10000004;
                local_d0 = 0x10;
                local_d8 = 0x2b0;
                FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
              }
              if ((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38))
                 && (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)) {
                FUN_14765bee0(uVar4,lVar5);
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar1 != uVar6);
        }
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
          UNLOCK();
          if (iVar2 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
          }
        }
        if (local_78 != 0) {
          *(undefined4 *)(local_78 + 0x14) = 1;
        }
        local_58 = FUN_1403b8464(&local_68,local_58 + 1);
      } while (local_58 != local_7c);
    }
    if (local_68 != (short *)0x0) {
      if (*(char *)(local_60 + 0x270) == '\0') {
        *(int *)(local_60 + 0x264) = *(int *)(local_60 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_60 + 0x264) = *(int *)(local_60 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14330b3e0 FUN_14330b3e0 body=47 status=ok
// SIG undefined FUN_14330b3e0(void)

void FUN_14330b3e0(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) == *(int *)(param_1 + 0x74)) {
    return;
  }
  FUN_143315276(param_1 + 0x40);
  FUN_14768a31a(param_1 + 0x40);
  return;
}



// FUNCTION 14330b410 FUN_14330b410 body=1400 status=ok
// SIG undefined FUN_14330b410(void)

longlong *
FUN_14330b410(undefined8 *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,longlong *param_6,undefined8 *param_7)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  longlong local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 *local_108;
  ulonglong local_100;
  undefined8 local_f0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined8 local_90;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((((*(short *)((longlong)param_1 + 2) == -1) || (*(short *)((longlong)param_1 + 4) == -1)) ||
      (*(short *)((longlong)param_1 + 6) == -1)) ||
     (cVar6 = FUN_1461f2866(param_1,param_3), cVar6 == '\0')) {
    *param_2 = 0;
  }
  else if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
    local_108 = (undefined8 *)0x0;
    local_100 = 0x400000000;
    FUN_14768b554(param_1,param_4,&local_128);
    puVar15 = (undefined8 *)0x0;
    if ((int)local_100 != 0) {
      puVar15 = &local_128;
    }
    puVar3 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar9 = (uint *)*puVar3;
    if (puVar9 != (uint *)0x0) goto LAB_14330b6a5;
    while( true ) {
      uVar11 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar11 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar11 | 1;
        __tlregdtor(&LAB_143311b0b);
      }
      lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar8 = *(undefined4 **)(lVar14 + 0x310);
      *(undefined8 *)(lVar14 + 0x310) = 0;
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar8 = 0xffffffff;
      *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
      puVar8[0x12] = 0;
      *puVar3 = puVar8;
      FUN_140217a48(puVar3);
      puVar9 = (uint *)*puVar3;
LAB_14330b6a5:
      puVar16 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar12 = (uint *)(puVar16 + 0x33);
      uVar11 = puVar9[0x12];
      if (puVar12 <= puVar9 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
        LOCK();
        uVar7 = *puVar9;
        *puVar9 = *puVar9 + uVar11 + 1;
        UNLOCK();
        if ((uVar7 ^ uVar11) != 0xffffffff) break;
        puVar9 = (uint *)*puVar3;
        *puVar9 = 0xffffffff;
        *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar3 = puVar9;
        puVar16 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
        puVar12 = (uint *)(puVar16 + 0x33);
        uVar11 = 0;
        if (puVar12 <= puVar9 + 0x4000) {
          uVar11 = 1;
          goto LAB_14330b727;
        }
      }
    }
    uVar11 = uVar11 + 1;
LAB_14330b727:
    *(uint **)(puVar9 + 0x10) = puVar12;
    puVar9[0x12] = uVar11;
    FUN_1447247dc(puVar16,puVar15);
    *puVar16 = &PTR_FUN_14a4d8320;
    local_148 = param_7;
    FUN_14768b88a(puVar16 + 0x15,param_3,param_1,param_6);
    uVar11 = *(uint *)((longlong)puVar16 + 0xb4);
    if (((ulonglong)uVar11 & 0xff) == 0xff) {
      uVar7 = uVar11 >> 10 & 3;
      iVar13 = 0;
      if ((uVar11 >> 9 & 1) == 0 || uVar7 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar7];
        iVar13 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar13 = (uVar11 >> 7 & 2 | uVar11 >> 9 & 1) +
               *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar11 & 0xff) * 4);
      uVar17 = 5;
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
    lVar14 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar14 == 0) {
      uVar5 = 1;
      if ((char)uVar17 != '\x06') {
        uVar5 = uVar17;
      }
      uVar17 = uVar5;
      uVar10 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar14 + 0x38) >> 0x3b;
      }
      uVar10 = *(undefined8 *)(lVar14 + 0x30);
    }
    puVar16[0xf] = uVar10;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar13;
    *param_2 = (longlong)puVar16;
    if (puVar16 == (undefined8 *)0x0) {
      lVar14 = 0;
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      lVar14 = *param_2;
    }
    local_140 = CONCAT71(local_140._1_7_,1);
    FUN_1447439e4(lVar14);
    if (param_5 != 0) {
      if (lVar14 != 0) {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
      }
      local_140 = lVar14;
      FUN_1432da764(param_5,&local_140);
    }
    puVar15 = &local_128;
    if (local_108 != (undefined8 *)0x0) {
      puVar15 = local_108;
    }
    FUN_144717c65(puVar15,local_100 & 0xffffffff);
    if (local_108 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_140 = *param_6;
    local_138 = *param_7;
    plVar4 = (longlong *)param_7[1];
    if (plVar4 == (longlong *)0x0) {
      local_130 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      local_130 = plVar4;
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
    local_118 = *(undefined4 *)(param_1 + 2);
    local_128 = *param_1;
    uStack_120 = param_1[1];
    local_f0 = 0x10000000000;
    local_c8 = 0x10000000000;
    local_90 = 0x10000000000;
    local_c0 = 0;
    uStack_b8 = 0;
    local_68 = 0x10000000000;
    FUN_1461f27be(&local_128);
    local_58 = *(undefined8 *)(param_3 + 0x248);
    local_60 = param_3;
    FUN_143315580(&local_128,&local_140);
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
    plVar4 = local_130;
    *param_2 = 0;
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_130 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_130)(local_130);
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
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14330b98d FUN_14330b98d body=69 status=ok
// SIG undefined FUN_14330b98d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14330b98d(void)

{
  _DAT_14cab5ef0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014330b9cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab5ef8,1);
  return;
}



// FUNCTION 14330b9d2 FUN_14330b9d2 body=69 status=ok
// SIG undefined FUN_14330b9d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14330b9d2(void)

{
  _DAT_14cab5f08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014330ba14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab5f10,1);
  return;
}



// FUNCTION 14330ba18 FUN_14330ba18 body=1150 status=ok
// SIG undefined FUN_14330ba18(void)

longlong *
FUN_14330ba18(short *param_1,longlong *param_2,longlong param_3,undefined8 param_4,longlong param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined1 local_120 [32];
  undefined1 *local_100;
  ulonglong local_f8;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((*param_1 != -1) && (param_1[3] != -1)) &&
     (cVar3 = FUN_1411bfcfa(param_1,param_3), cVar3 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x400000000;
      FUN_147691e88(param_1,param_4,local_120);
      puVar10 = (undefined1 *)0x0;
      if ((int)local_f8 != 0) {
        puVar10 = local_120;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar6 = (uint *)*puVar1;
      if (puVar6 != (uint *)0x0) goto LAB_14330bbbb;
      while( true ) {
        uVar8 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar8 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar8 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar5 = *(undefined4 **)(lVar13 + 0x310);
        *(undefined8 *)(lVar13 + 0x310) = 0;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar5 = 0xffffffff;
        *(undefined4 **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        FUN_140217a48(puVar1);
        puVar6 = (uint *)*puVar1;
LAB_14330bbbb:
        puVar11 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar9 = (uint *)(puVar11 + 0x31);
        uVar8 = puVar6[0x12];
        if (puVar9 <= puVar6 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
          LOCK();
          uVar4 = *puVar6;
          *puVar6 = *puVar6 + uVar8 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar8) != 0xffffffff) break;
          puVar6 = (uint *)*puVar1;
          *puVar6 = 0xffffffff;
          *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
          puVar6[0x12] = 0;
          *puVar1 = puVar6;
          puVar11 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
          puVar9 = (uint *)(puVar11 + 0x31);
          uVar8 = 0;
          if (puVar9 <= puVar6 + 0x4000) {
            uVar8 = 1;
            goto LAB_14330bc3f;
          }
        }
      }
      uVar8 = uVar8 + 1;
LAB_14330bc3f:
      *(uint **)(puVar6 + 0x10) = puVar9;
      puVar6[0x12] = uVar8;
      FUN_1447247dc(puVar11,puVar10);
      *puVar11 = &PTR_FUN_14a4d8790;
      FUN_147691e0a(puVar11 + 0x15,param_3,param_1);
      uVar8 = *(uint *)((longlong)puVar11 + 0xb4);
      if (((ulonglong)uVar8 & 0xff) == 0xff) {
        uVar4 = uVar8 >> 10 & 3;
        iVar12 = 0;
        if ((uVar8 >> 9 & 1) == 0 || uVar4 < 2) {
          uVar14 = (ulonglong)(byte)(&DAT_149e38edc)[uVar4];
          iVar12 = 0;
        }
        else {
          uVar14 = 2;
        }
      }
      else {
        iVar12 = (uVar8 >> 7 & 2 | uVar8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar8 & 0xff) * 4);
        uVar14 = 5;
      }
      if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
      }
      puVar11[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar11[9] = puVar11;
      puVar11[10] = puVar11;
      lVar13 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar13 == 0) {
        uVar2 = 1;
        if ((char)uVar14 != '\x06') {
          uVar2 = uVar14;
        }
        uVar14 = uVar2;
        uVar7 = 0;
      }
      else {
        if ((char)uVar14 == '\x06') {
          uVar14 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
        }
        uVar7 = *(undefined8 *)(lVar13 + 0x30);
      }
      puVar11[0xf] = uVar7;
      puVar11[0x10] = uVar14 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar11 + 0x1c) = iVar12;
      *param_2 = (longlong)puVar11;
      if (puVar11 == (undefined8 *)0x0) {
        lVar13 = 0;
      }
      else {
        LOCK();
        *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
        UNLOCK();
        lVar13 = *param_2;
      }
      local_128 = CONCAT71(local_128._1_7_,1);
      FUN_1447439e4(lVar13);
      if (param_5 != 0) {
        if (lVar13 != 0) {
          LOCK();
          *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
          UNLOCK();
        }
        local_128 = lVar13;
        FUN_1432da764(param_5,&local_128);
      }
      puVar10 = local_120;
      if (local_100 != (undefined1 *)0x0) {
        puVar10 = local_100;
      }
      FUN_144717c65(puVar10,local_f8 & 0xffffffff);
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14330ba6c;
    }
    FUN_147691e0a(local_120,param_3,param_1);
    FUN_14331588e(local_120);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_14330ba6c:
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14330be98 FUN_14330be98 body=1140 status=ok
// SIG undefined FUN_14330be98(void)

longlong *
FUN_14330be98(short *param_1,longlong *param_2,longlong param_3,undefined8 param_4,longlong param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint uVar8;
  uint *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_158 [40];
  longlong local_130;
  undefined1 local_128 [32];
  undefined1 *local_108;
  ulonglong local_100;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((*param_1 != -1) && (cVar3 = FUN_1411bfcc4(param_1,param_3), cVar3 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_108 = (undefined1 *)0x0;
      local_100 = 0x400000000;
      FUN_147692356(param_1,param_4,local_128);
      puVar10 = (undefined1 *)0x0;
      if ((int)local_100 != 0) {
        puVar10 = local_128;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar6 = (uint *)*puVar1;
      if (puVar6 != (uint *)0x0) goto LAB_14330c031;
      while( true ) {
        uVar8 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar8 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar8 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar5 = *(undefined4 **)(lVar13 + 0x310);
        *(undefined8 *)(lVar13 + 0x310) = 0;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar5 = 0xffffffff;
        *(undefined4 **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        FUN_140217a48(puVar1);
        puVar6 = (uint *)*puVar1;
LAB_14330c031:
        puVar11 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar9 = (uint *)(puVar11 + 0x32);
        uVar8 = puVar6[0x12];
        if (puVar9 <= puVar6 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
          LOCK();
          uVar4 = *puVar6;
          *puVar6 = *puVar6 + uVar8 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar8) != 0xffffffff) break;
          puVar6 = (uint *)*puVar1;
          *puVar6 = 0xffffffff;
          *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
          puVar6[0x12] = 0;
          *puVar1 = puVar6;
          puVar11 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
          puVar9 = (uint *)(puVar11 + 0x32);
          uVar8 = 0;
          if (puVar9 <= puVar6 + 0x4000) {
            uVar8 = 1;
            goto LAB_14330c0b5;
          }
        }
      }
      uVar8 = uVar8 + 1;
LAB_14330c0b5:
      *(uint **)(puVar6 + 0x10) = puVar9;
      puVar6[0x12] = uVar8;
      FUN_1447247dc(puVar11,puVar10);
      *puVar11 = &PTR_FUN_14a4d87a0;
      FUN_1476922ce(puVar11 + 0x15,param_3,param_1);
      uVar8 = *(uint *)(puVar11 + 0x18);
      if (((ulonglong)uVar8 & 0xff) == 0xff) {
        uVar4 = uVar8 >> 10 & 3;
        iVar12 = 0;
        if ((uVar8 >> 9 & 1) == 0 || uVar4 < 2) {
          uVar14 = (ulonglong)(byte)(&DAT_149e38edc)[uVar4];
          iVar12 = 0;
        }
        else {
          uVar14 = 2;
        }
      }
      else {
        iVar12 = (uVar8 >> 7 & 2 | uVar8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar8 & 0xff) * 4);
        uVar14 = 5;
      }
      if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
      }
      puVar11[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar11[9] = puVar11;
      puVar11[10] = puVar11;
      lVar13 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar13 == 0) {
        uVar2 = 1;
        if ((char)uVar14 != '\x06') {
          uVar2 = uVar14;
        }
        uVar14 = uVar2;
        uVar7 = 0;
      }
      else {
        if ((char)uVar14 == '\x06') {
          uVar14 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
        }
        uVar7 = *(undefined8 *)(lVar13 + 0x30);
      }
      puVar11[0xf] = uVar7;
      puVar11[0x10] = uVar14 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar11 + 0x1c) = iVar12;
      *param_2 = (longlong)puVar11;
      if (puVar11 == (undefined8 *)0x0) {
        lVar13 = 0;
      }
      else {
        LOCK();
        *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
        UNLOCK();
        lVar13 = *param_2;
      }
      local_130 = CONCAT71(local_130._1_7_,1);
      FUN_1447439e4(lVar13);
      if (param_5 != 0) {
        if (lVar13 != 0) {
          LOCK();
          *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
          UNLOCK();
        }
        local_130 = lVar13;
        FUN_1432da764(param_5,&local_130);
      }
      puVar10 = local_128;
      if (local_108 != (undefined1 *)0x0) {
        puVar10 = local_108;
      }
      FUN_144717c65(puVar10,local_100 & 0xffffffff);
      if (local_108 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14330bee2;
    }
    FUN_1476922ce(local_128,param_3,param_1);
    FUN_143315b28(local_128);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_14330bee2:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14330c30d FUN_14330c30d body=69 status=ok
// SIG undefined FUN_14330c30d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14330c30d(void)

{
  _DAT_14cab5f18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014330c34f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab5f20,1);
  return;
}



// FUNCTION 14330c35e FUN_14330c35e body=6637 status=ok
// SIG undefined FUN_14330c35e(void)

void FUN_14330c35e(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined2 *puVar21;
  uint *puVar22;
  undefined1 auStack_248 [32];
  ulonglong *local_228;
  undefined8 *local_220;
  ulonglong *local_218;
  undefined8 *local_210;
  ulonglong *local_208;
  undefined8 local_200;
  ulonglong local_1f8;
  longlong *local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  uint local_1d4;
  uint *local_1d0;
  uint *local_1c8;
  ulonglong local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined4 *local_1a8;
  longlong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined1 local_17c;
  undefined8 *local_178;
  longlong local_170;
  uint local_164;
  undefined4 local_160;
  ushort local_15a;
  undefined8 local_158;
  undefined2 local_14e;
  undefined4 local_14c;
  undefined8 local_148;
  undefined1 local_140;
  undefined1 local_13f;
  undefined4 local_13c;
  undefined1 local_138;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  uint local_110 [8];
  int local_f0;
  int local_ec;
  uint local_e8 [8];
  int local_c8;
  int local_c4;
  int local_c0;
  int iStack_bc;
  longlong local_b8;
  undefined1 local_b0 [8];
  undefined1 local_a8 [32];
  uint local_88 [8];
  int local_68;
  int local_64;
  undefined8 local_58;
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_14633bf66();
  if (*(int *)(param_1 + 0x58) == 0) goto LAB_14330c394;
  lVar13 = *(longlong *)(param_1 + 0x28);
  FUN_1460202b0(param_1);
  if ((((*(int *)(param_1 + 0x78) == 0) && (*(int *)(param_1 + 0x88) == 0)) &&
      (*(int *)(param_1 + 0x98) == 0)) &&
     ((*(int *)(param_1 + 0xa8) == 0 && (*(int *)(param_1 + 0xb8) == 0)))) goto LAB_14330c394;
  local_1e8 = lVar13 + 0x28;
  local_1b0 = lVar13;
  plVar7 = (longlong *)FUN_14009d2a0();
  local_148._0_2_ = (ushort)(byte)local_148;
  local_228 = &local_120;
  local_120 = FUN_146020d24;
  local_118 = 0;
  FUN_14634b10e(param_2,&local_160,&local_148,param_1);
  FUN_145c71394(param_2,&local_164);
  local_1f0 = plVar7;
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    puVar21 = *(undefined2 **)(param_1 + 0x70);
    local_200 = puVar21 + (longlong)*(int *)(param_1 + 0x78) * 0xc;
    local_1f8 = param_1 + 0xc0;
    do {
      pcVar3 = local_148;
      local_148._0_4_ = CONCAT22(*(undefined2 *)((longlong)plVar7 + 0x5a),*puVar21);
      local_148._6_2_ = SUB82(pcVar3,6);
      local_148._0_6_ = CONCAT24(*(undefined2 *)((longlong)plVar7 + 0xf4),(undefined4)local_148);
      local_13f = 0;
      local_13c = 0x6ff;
      local_138 = 0;
      local_158._0_4_ = CONCAT22(*(undefined2 *)(param_1 + 0x66),(short)plVar7[0x22]);
      FUN_14634b910(&local_120,&local_148);
      lVar13 = 0;
      do {
        uVar19 = local_e8[0];
        uVar1 = *(ushort *)((longlong)&local_158 + lVar13);
        uVar9 = uVar1 + 1;
        iVar16 = uVar9 - local_e8[0];
        if (iVar16 != 0 && (int)local_e8[0] <= (int)uVar9) {
          if (local_e8[0] == 0) {
LAB_14330c53e:
            if ((int)local_e8[1] <= (int)(uint)uVar1) {
              local_e8[1] = 0x100;
              FUN_14497ddce(local_110 + 2,local_e8[0]);
              uVar9 = local_e8[0] + iVar16;
            }
            uVar6 = uVar9 + 0x1f;
            if (-1 < (int)uVar9) {
              uVar6 = uVar9;
            }
            local_e8[0] = uVar9;
            uVar9 = local_e8[0];
            if ((int)uVar9 % 0x20 != 0) {
              bVar8 = -(char)((int)uVar9 % 0x20);
              local_110[(longlong)((int)uVar6 >> 5) + 2] =
                   (local_110[(longlong)((int)uVar6 >> 5) + 2] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
              uVar9 = local_e8[0];
            }
          }
          else {
            iVar10 = local_e8[0] + 0x1e;
            if (-1 < (int)(local_e8[0] - 1)) {
              iVar10 = local_e8[0] - 1;
            }
            if (iVar10 >> 5 != (uint)(uVar1 >> 5)) goto LAB_14330c53e;
          }
          local_e8[0] = uVar9;
          FUN_1447c45ca(local_110 + 2,uVar19,iVar16,0);
        }
        local_110[(ulonglong)(uVar1 >> 5) + 2] =
             local_110[(ulonglong)(uVar1 >> 5) + 2] | 1 << ((byte)uVar1 & 0x1f);
        lVar13 = lVar13 + 2;
      } while (lVar13 != 4);
      FUN_140dad9c2(local_110 + 2,local_1f8,2);
      iVar16 = local_c0;
      plVar7 = local_1f0;
      uVar1 = *(ushort *)(local_1f0 + 0x26);
      iVar10 = uVar1 + 1;
      iVar17 = iVar10 - local_c0;
      if (iVar17 != 0 && local_c0 <= iVar10) {
        if (local_c0 == 0) {
LAB_14330c633:
          if (iStack_bc <= (int)(uint)uVar1) {
            iStack_bc = 0x100;
            FUN_14497ddce(local_e8 + 2,local_c0);
            iVar10 = local_c0 + iVar17;
          }
          iVar12 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar12 = iVar10;
          }
          local_c0 = iVar10;
          iVar10 = local_c0;
          if (iVar10 % 0x20 != 0) {
            bVar8 = -(char)(iVar10 % 0x20);
            local_e8[(longlong)(iVar12 >> 5) + 2] =
                 (local_e8[(longlong)(iVar12 >> 5) + 2] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
            iVar10 = local_c0;
          }
        }
        else {
          iVar12 = local_c0 + 0x1e;
          if (-1 < local_c0 + -1) {
            iVar12 = local_c0 + -1;
          }
          if (iVar12 >> 5 != (uint)(uVar1 >> 5)) goto LAB_14330c633;
        }
        local_c0 = iVar10;
        FUN_1447c45ca(local_e8 + 2,iVar16,iVar17,0);
      }
      local_e8[(ulonglong)(uVar1 >> 5) + 2] =
           local_e8[(ulonglong)(uVar1 >> 5) + 2] | 1 << ((byte)uVar1 & 0x1f);
      FUN_14010b303(local_1f8,local_a8,1,&local_58);
      local_188 = puVar21 + 4;
      local_198 = CONCAT62(local_198._2_6_,(undefined2)local_118) | 0x200;
      local_58 = FUN_145c98ec2;
      local_50 = (undefined4 *)CONCAT71(local_50._1_7_,3);
      local_218 = &local_188;
      local_228 = &local_198;
      local_220 = &local_58;
      FUN_14602e028(&local_120,&local_190,local_1e8);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      FUN_1406adae8(param_2,local_160,local_190 & 0xffffffff);
      FUN_1406adae8(param_2,local_190 & 0xffffffff,local_164);
      puVar21 = puVar21 + 0xc;
    } while (puVar21 != local_200);
  }
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    puVar21 = *(undefined2 **)(param_1 + 0x80);
    local_200 = puVar21 + (longlong)*(int *)(param_1 + 0x88) * 0xc;
    local_1f8 = param_1 + 0xc0;
    do {
      pcVar3 = local_148;
      local_148._0_4_ = CONCAT22(*(undefined2 *)((longlong)plVar7 + 0x5a),*puVar21);
      local_148._6_2_ = SUB82(pcVar3,6);
      local_148._0_6_ = CONCAT24(*(undefined2 *)((longlong)plVar7 + 0xf4),(undefined4)local_148);
      local_13f = 0;
      local_13c = 0x6ff;
      local_138 = 0;
      local_158._0_4_ =
           CONCAT22(*(undefined2 *)(param_1 + 0x66),*(undefined2 *)((longlong)plVar7 + 0x112));
      FUN_14634b910(&local_120,&local_148);
      lVar13 = 0;
      do {
        uVar19 = local_e8[0];
        uVar1 = *(ushort *)((longlong)&local_158 + lVar13);
        uVar9 = uVar1 + 1;
        iVar16 = uVar9 - local_e8[0];
        if (iVar16 != 0 && (int)local_e8[0] <= (int)uVar9) {
          if (local_e8[0] == 0) {
LAB_14330c89b:
            if ((int)local_e8[1] <= (int)(uint)uVar1) {
              local_e8[1] = 0x100;
              FUN_14497ddce(local_110 + 2,local_e8[0]);
              uVar9 = local_e8[0] + iVar16;
            }
            uVar6 = uVar9 + 0x1f;
            if (-1 < (int)uVar9) {
              uVar6 = uVar9;
            }
            local_e8[0] = uVar9;
            uVar9 = local_e8[0];
            if ((int)uVar9 % 0x20 != 0) {
              bVar8 = -(char)((int)uVar9 % 0x20);
              local_110[(longlong)((int)uVar6 >> 5) + 2] =
                   (local_110[(longlong)((int)uVar6 >> 5) + 2] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
              uVar9 = local_e8[0];
            }
          }
          else {
            iVar10 = local_e8[0] + 0x1e;
            if (-1 < (int)(local_e8[0] - 1)) {
              iVar10 = local_e8[0] - 1;
            }
            if (iVar10 >> 5 != (uint)(uVar1 >> 5)) goto LAB_14330c89b;
          }
          local_e8[0] = uVar9;
          FUN_1447c45ca(local_110 + 2,uVar19,iVar16,0);
        }
        local_110[(ulonglong)(uVar1 >> 5) + 2] =
             local_110[(ulonglong)(uVar1 >> 5) + 2] | 1 << ((byte)uVar1 & 0x1f);
        lVar13 = lVar13 + 2;
      } while (lVar13 != 4);
      FUN_140dad9c2(local_110 + 2,local_1f8,2);
      iVar16 = local_c0;
      plVar7 = local_1f0;
      uVar1 = *(ushort *)(local_1f0 + 0x26);
      iVar10 = uVar1 + 1;
      iVar17 = iVar10 - local_c0;
      if (iVar17 != 0 && local_c0 <= iVar10) {
        if (local_c0 == 0) {
LAB_14330c990:
          if (iStack_bc <= (int)(uint)uVar1) {
            iStack_bc = 0x100;
            FUN_14497ddce(local_e8 + 2,local_c0);
            iVar10 = local_c0 + iVar17;
          }
          iVar12 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar12 = iVar10;
          }
          local_c0 = iVar10;
          iVar10 = local_c0;
          if (iVar10 % 0x20 != 0) {
            bVar8 = -(char)(iVar10 % 0x20);
            local_e8[(longlong)(iVar12 >> 5) + 2] =
                 (local_e8[(longlong)(iVar12 >> 5) + 2] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
            iVar10 = local_c0;
          }
        }
        else {
          iVar12 = local_c0 + 0x1e;
          if (-1 < local_c0 + -1) {
            iVar12 = local_c0 + -1;
          }
          if (iVar12 >> 5 != (uint)(uVar1 >> 5)) goto LAB_14330c990;
        }
        local_c0 = iVar10;
        FUN_1447c45ca(local_e8 + 2,iVar16,iVar17,0);
      }
      local_e8[(ulonglong)(uVar1 >> 5) + 2] =
           local_e8[(ulonglong)(uVar1 >> 5) + 2] | 1 << ((byte)uVar1 & 0x1f);
      FUN_14010b303(local_1f8,local_a8,1,&local_58);
      local_188 = puVar21 + 4;
      local_198 = CONCAT62(local_198._2_6_,(undefined2)local_118) | 0x200;
      local_58 = FUN_145c98ec2;
      local_50 = (undefined4 *)CONCAT71(local_50._1_7_,3);
      local_218 = &local_188;
      local_228 = &local_198;
      local_220 = &local_58;
      FUN_14602e028(&local_120,&local_190,local_1e8);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      FUN_1406adae8(param_2,local_160,local_190 & 0xffffffff);
      FUN_1406adae8(param_2,local_190 & 0xffffffff,local_164);
      puVar21 = puVar21 + 0xc;
    } while (puVar21 != local_200);
  }
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    puVar21 = *(undefined2 **)(param_1 + 0x90);
    local_200 = puVar21 + (longlong)*(int *)(param_1 + 0x98) * 0xc;
    local_1f8 = param_1 + 0xc0;
    do {
      pcVar3 = local_148;
      local_148._0_4_ = CONCAT22(*(undefined2 *)((longlong)plVar7 + 0x5a),*puVar21);
      local_148._6_2_ = SUB82(pcVar3,6);
      local_148._0_6_ = CONCAT24(*(undefined2 *)((longlong)plVar7 + 0xf4),(undefined4)local_148);
      local_13f = 0;
      local_13c = 0x6ff;
      local_138 = 0;
      local_158._0_4_ =
           CONCAT22(*(undefined2 *)(param_1 + 0x66),*(undefined2 *)((longlong)plVar7 + 0x114));
      FUN_14634b910(&local_120,&local_148);
      lVar13 = 0;
      do {
        uVar19 = local_e8[0];
        uVar1 = *(ushort *)((longlong)&local_158 + lVar13);
        uVar9 = uVar1 + 1;
        iVar16 = uVar9 - local_e8[0];
        if (iVar16 != 0 && (int)local_e8[0] <= (int)uVar9) {
          if (local_e8[0] == 0) {
LAB_14330cbf8:
            if ((int)local_e8[1] <= (int)(uint)uVar1) {
              local_e8[1] = 0x100;
              FUN_14497ddce(local_110 + 2,local_e8[0]);
              uVar9 = local_e8[0] + iVar16;
            }
            uVar6 = uVar9 + 0x1f;
            if (-1 < (int)uVar9) {
              uVar6 = uVar9;
            }
            local_e8[0] = uVar9;
            uVar9 = local_e8[0];
            if ((int)uVar9 % 0x20 != 0) {
              bVar8 = -(char)((int)uVar9 % 0x20);
              local_110[(longlong)((int)uVar6 >> 5) + 2] =
                   (local_110[(longlong)((int)uVar6 >> 5) + 2] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
              uVar9 = local_e8[0];
            }
          }
          else {
            iVar10 = local_e8[0] + 0x1e;
            if (-1 < (int)(local_e8[0] - 1)) {
              iVar10 = local_e8[0] - 1;
            }
            if (iVar10 >> 5 != (uint)(uVar1 >> 5)) goto LAB_14330cbf8;
          }
          local_e8[0] = uVar9;
          FUN_1447c45ca(local_110 + 2,uVar19,iVar16,0);
        }
        local_110[(ulonglong)(uVar1 >> 5) + 2] =
             local_110[(ulonglong)(uVar1 >> 5) + 2] | 1 << ((byte)uVar1 & 0x1f);
        lVar13 = lVar13 + 2;
      } while (lVar13 != 4);
      FUN_140dad9c2(local_110 + 2,local_1f8,2);
      iVar16 = local_c0;
      plVar7 = local_1f0;
      uVar1 = *(ushort *)(local_1f0 + 0x26);
      iVar10 = uVar1 + 1;
      iVar17 = iVar10 - local_c0;
      if (iVar17 != 0 && local_c0 <= iVar10) {
        if (local_c0 == 0) {
LAB_14330cced:
          if (iStack_bc <= (int)(uint)uVar1) {
            iStack_bc = 0x100;
            FUN_14497ddce(local_e8 + 2,local_c0);
            iVar10 = local_c0 + iVar17;
          }
          iVar12 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar12 = iVar10;
          }
          local_c0 = iVar10;
          iVar10 = local_c0;
          if (iVar10 % 0x20 != 0) {
            bVar8 = -(char)(iVar10 % 0x20);
            local_e8[(longlong)(iVar12 >> 5) + 2] =
                 (local_e8[(longlong)(iVar12 >> 5) + 2] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
            iVar10 = local_c0;
          }
        }
        else {
          iVar12 = local_c0 + 0x1e;
          if (-1 < local_c0 + -1) {
            iVar12 = local_c0 + -1;
          }
          if (iVar12 >> 5 != (uint)(uVar1 >> 5)) goto LAB_14330cced;
        }
        local_c0 = iVar10;
        FUN_1447c45ca(local_e8 + 2,iVar16,iVar17,0);
      }
      local_e8[(ulonglong)(uVar1 >> 5) + 2] =
           local_e8[(ulonglong)(uVar1 >> 5) + 2] | 1 << ((byte)uVar1 & 0x1f);
      FUN_14010b303(local_1f8,local_a8,1,&local_58);
      local_188 = puVar21 + 4;
      local_198 = CONCAT62(local_198._2_6_,(undefined2)local_118) | 0x200;
      local_58 = FUN_145c98ec2;
      local_50 = (undefined4 *)CONCAT71(local_50._1_7_,3);
      local_218 = &local_188;
      local_228 = &local_198;
      local_220 = &local_58;
      FUN_14602e028(&local_120,&local_190,local_1e8);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      FUN_1406adae8(param_2,local_160,local_190 & 0xffffffff);
      FUN_1406adae8(param_2,local_190 & 0xffffffff,local_164);
      puVar21 = puVar21 + 0xc;
    } while (puVar21 != local_200);
  }
  pcVar3 = local_58;
  if (*(int *)(param_1 + 0xa8) != 0) {
    local_58._0_4_ =
         CONCAT22(*(undefined2 *)((longlong)plVar7 + 0xf4),*(undefined2 *)((longlong)plVar7 + 0x5a))
    ;
    uVar5 = local_58;
    local_58._6_2_ = SUB82(pcVar3,6);
    local_58._0_5_ = (uint5)uVar5;
    local_58._0_6_ = (uint6)(uint5)local_58;
    local_50 = (undefined4 *)CONCAT35(local_50._5_3_,0x6ff);
    local_178 = &local_158;
    local_158._0_4_ =
         CONCAT22(*(undefined2 *)(param_1 + 0x66),*(undefined2 *)((longlong)plVar7 + 0x116));
    local_170 = (longlong)&local_158 + 4;
    FUN_147662af4(&local_58,&local_120);
    FUN_140dad9c2(local_110,param_1 + 0xc0,2);
    iVar16 = local_c8;
    uVar1 = *(ushort *)(plVar7 + 0x26);
    iVar10 = uVar1 + 1;
    iVar17 = iVar10 - local_c8;
    if (iVar17 != 0 && local_c8 <= iVar10) {
      if (local_c8 == 0) {
LAB_14330d05e:
        if (local_c4 <= (int)(uint)uVar1) {
          local_c4 = 0x100;
          FUN_14497ddce(local_e8,local_c8);
          iVar10 = local_c8 + iVar17;
        }
        iVar12 = iVar10 + 0x1f;
        if (-1 < iVar10) {
          iVar12 = iVar10;
        }
        local_c8 = iVar10;
        iVar10 = local_c8;
        if (iVar10 % 0x20 != 0) {
          bVar8 = -(char)(iVar10 % 0x20);
          local_e8[iVar12 >> 5] = (local_e8[iVar12 >> 5] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
          iVar10 = local_c8;
        }
      }
      else {
        iVar12 = local_c8 + 0x1e;
        if (-1 < local_c8 + -1) {
          iVar12 = local_c8 + -1;
        }
        if (iVar12 >> 5 != (uint)(uVar1 >> 5)) goto LAB_14330d05e;
      }
      local_c8 = iVar10;
      FUN_1447c45ca(local_e8,iVar16,iVar17,0);
    }
    local_e8[uVar1 >> 5] = local_e8[uVar1 >> 5] | 1 << ((byte)uVar1 & 0x1f);
    FUN_14010b303(param_1 + 0xc0,local_b0,1,&local_148);
    local_218 = &local_188;
    local_228 = &local_198;
    local_198 = CONCAT62(local_198._2_6_,local_120._4_2_) | 0x200;
    local_148 = FUN_14769595c;
    local_140 = 3;
    local_220 = &local_148;
    local_188 = (undefined2 *)(param_1 + 0xa0);
    FUN_1476956f4(&local_120,&local_190,local_1e8,param_2);
    if (CONCAT44(iStack_bc,local_c0) != 0) {
      FUN_1400020a8();
    }
    FUN_1406adae8(param_2,local_160,local_190 & 0xffffffff);
    FUN_1406adae8(param_2,local_190 & 0xffffffff,local_164);
    plVar7 = local_1f0;
  }
  pcVar3 = local_148;
  if (*(int *)(param_1 + 0xb8) != 0) {
    local_148._0_4_ = CONCAT22((short)plVar7[0x1f],*(undefined2 *)((longlong)plVar7 + 0x5a));
    local_148._6_2_ = SUB82(pcVar3,6);
    local_148._0_6_ = CONCAT24(*(undefined2 *)((longlong)plVar7 + 0xf4),(undefined4)local_148);
    local_13f = 0;
    local_13c = 0x6ff;
    local_138 = 0;
    uVar1 = *(ushort *)(param_1 + 0x66);
    FUN_147695e0e(&local_120);
    uVar19 = local_e8[0];
    uVar9 = uVar1 + 1;
    iVar16 = uVar9 - local_e8[0];
    if (iVar16 != 0 && (int)local_e8[0] <= (int)uVar9) {
      if (local_e8[0] == 0) {
LAB_14330d12b:
        if ((int)local_e8[1] <= (int)(uint)uVar1) {
          local_e8[1] = 0x100;
          FUN_14497ddce(local_110 + 2,local_e8[0]);
          uVar9 = local_e8[0] + iVar16;
        }
        uVar6 = uVar9 + 0x1f;
        if (-1 < (int)uVar9) {
          uVar6 = uVar9;
        }
        local_e8[0] = uVar9;
        uVar9 = local_e8[0];
        if ((int)uVar9 % 0x20 != 0) {
          bVar8 = -(char)((int)uVar9 % 0x20);
          local_110[(longlong)((int)uVar6 >> 5) + 2] =
               (local_110[(longlong)((int)uVar6 >> 5) + 2] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
          uVar9 = local_e8[0];
        }
      }
      else {
        iVar10 = local_e8[0] + 0x1e;
        if (-1 < (int)(local_e8[0] - 1)) {
          iVar10 = local_e8[0] - 1;
        }
        if (iVar10 >> 5 != (uint)(uVar1 >> 5)) goto LAB_14330d12b;
      }
      local_e8[0] = uVar9;
      FUN_1447c45ca(local_110 + 2,uVar19,iVar16,0);
    }
    local_110[(ulonglong)(uVar1 >> 5) + 2] =
         local_110[(ulonglong)(uVar1 >> 5) + 2] | 1 << ((byte)uVar1 & 0x1f);
    uVar1 = *(ushort *)(local_1f0 + 0x23);
    uVar2 = *(ushort *)((longlong)local_1f0 + 0x114);
    lVar13 = param_1 + 0xc0;
    iVar10 = uVar2 + 1;
    iVar16 = *(int *)(param_1 + 0xe0);
    iVar17 = iVar10 - iVar16;
    if (iVar17 != 0 && iVar16 <= iVar10) {
      if (iVar16 == 0) {
LAB_14330d9f9:
        if (*(int *)(param_1 + 0xe4) <= (int)(uint)uVar2) {
          *(undefined4 *)(param_1 + 0xe4) = 0x100;
          FUN_14497ddce(lVar13,iVar16);
          iVar10 = *(int *)(param_1 + 0xe0) + iVar17;
        }
        iVar12 = iVar10 + 0x1f;
        if (-1 < iVar10) {
          iVar12 = iVar10;
        }
        *(int *)(param_1 + 0xe0) = iVar10;
        if (iVar10 % 0x20 != 0) {
          bVar8 = -(char)(iVar10 % 0x20);
          *(uint *)(lVar13 + (longlong)(iVar12 >> 5) * 4) =
               (uint)(*(int *)(lVar13 + (longlong)(iVar12 >> 5) * 4) << (bVar8 & 0x1f)) >>
               (bVar8 & 0x1f);
        }
      }
      else {
        iVar12 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar12 = iVar16 + -1;
        }
        if (iVar12 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14330d9f9;
        *(int *)(param_1 + 0xe0) = iVar10;
      }
      FUN_1447c45ca(lVar13,iVar16,iVar17,0);
    }
    puVar22 = (uint *)(param_1 + 0xc0 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar22 = *puVar22 | 1 << ((byte)uVar2 & 0x1f);
    iVar10 = uVar1 + 1;
    iVar16 = *(int *)(param_1 + 0xe0);
    iVar17 = iVar10 - iVar16;
    if (iVar17 != 0 && iVar16 <= iVar10) {
      if (iVar16 == 0) {
LAB_14330da8a:
        if (*(int *)(param_1 + 0xe4) <= (int)(uint)uVar1) {
          *(undefined4 *)(param_1 + 0xe4) = 0x100;
          FUN_14497ddce(lVar13,iVar16);
          iVar10 = *(int *)(param_1 + 0xe0) + iVar17;
        }
        iVar12 = iVar10 + 0x1f;
        if (-1 < iVar10) {
          iVar12 = iVar10;
        }
        *(int *)(param_1 + 0xe0) = iVar10;
        if (iVar10 % 0x20 != 0) {
          bVar8 = -(char)(iVar10 % 0x20);
          *(uint *)(lVar13 + (longlong)(iVar12 >> 5) * 4) =
               (uint)(*(int *)(lVar13 + (longlong)(iVar12 >> 5) * 4) << (bVar8 & 0x1f)) >>
               (bVar8 & 0x1f);
        }
      }
      else {
        iVar12 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar12 = iVar16 + -1;
        }
        if (iVar12 >> 5 != (uint)(uVar1 >> 5)) goto LAB_14330da8a;
        *(int *)(param_1 + 0xe0) = iVar10;
      }
      FUN_1447c45ca(lVar13,iVar16,iVar17,0);
    }
    puVar22 = (uint *)(lVar13 + (ulonglong)(uVar1 >> 5) * 4);
    *puVar22 = *puVar22 | 1 << ((byte)uVar1 & 0x1f);
    FUN_140dad9c2(local_110 + 2,lVar13,2);
    iVar16 = local_c0;
    uVar1 = *(ushort *)(local_1f0 + 0x26);
    iVar10 = uVar1 + 1;
    iVar17 = iVar10 - local_c0;
    if (iVar17 != 0 && local_c0 <= iVar10) {
      if (local_c0 == 0) {
LAB_14330db59:
        if (iStack_bc <= (int)(uint)uVar1) {
          iStack_bc = 0x100;
          FUN_14497ddce(local_e8 + 2,local_c0);
          iVar10 = local_c0 + iVar17;
        }
        iVar12 = iVar10 + 0x1f;
        if (-1 < iVar10) {
          iVar12 = iVar10;
        }
        local_c0 = iVar10;
        iVar10 = local_c0;
        if (iVar10 % 0x20 != 0) {
          bVar8 = -(char)(iVar10 % 0x20);
          local_e8[(longlong)(iVar12 >> 5) + 2] =
               (local_e8[(longlong)(iVar12 >> 5) + 2] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
          iVar10 = local_c0;
        }
      }
      else {
        iVar12 = local_c0 + 0x1e;
        if (-1 < local_c0 + -1) {
          iVar12 = local_c0 + -1;
        }
        if (iVar12 >> 5 != (uint)(uVar1 >> 5)) goto LAB_14330db59;
      }
      local_c0 = iVar10;
      FUN_1447c45ca(local_e8 + 2,iVar16,iVar17,0);
    }
    local_e8[(ulonglong)(uVar1 >> 5) + 2] =
         local_e8[(ulonglong)(uVar1 >> 5) + 2] | 1 << ((byte)uVar1 & 0x1f);
    FUN_14010b303(lVar13,local_a8,1,&local_58);
    local_218 = &local_188;
    local_228 = &local_158;
    local_158 = CONCAT62(local_158._2_6_,(undefined2)local_118) | 0x200;
    local_58 = FUN_14769611c;
    local_50 = (undefined4 *)CONCAT71(local_50._1_7_,3);
    local_220 = &local_58;
    local_188 = (undefined2 *)(param_1 + 0xb0);
    FUN_147695ece(&local_120,&local_190,local_1e8,param_2);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_1406adae8(param_2,local_160,local_190 & 0xffffffff);
    FUN_1406adae8(param_2,local_190 & 0xffffffff,local_164);
    plVar7 = local_1f0;
  }
  uVar18 = param_1 + 0x70;
  puVar22 = (uint *)(param_1 + 0xe8);
  uVar19 = *(int *)(param_1 + 0x108) + 0x1f;
  if (0x1f < uVar19) {
    lVar13 = 0;
    puVar11 = puVar22;
LAB_14330ceb4:
    uVar9 = *puVar11;
    if (uVar9 == 0) goto code_r0x00014330cebc;
    iVar16 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> iVar16 & 1) == 0; iVar16 = iVar16 + 1) {
      }
    }
    if (iVar16 + 1 != (int)lVar13 && iVar16 - (int)lVar13 < *(int *)(param_1 + 0x108)) {
      iVar16 = *(int *)(param_1 + 0x130);
      if (iVar16 == 0) {
        local_1e0 = 1;
        local_1f8 = 0;
        local_200 = (undefined2 *)((ulonglong)local_200._4_4_ << 0x20);
        iVar10 = 0;
      }
      else {
        puVar11 = *(uint **)(param_1 + 0x128);
        if (*(uint **)(param_1 + 0x128) == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 0x118);
        }
        uVar19 = *puVar11;
        if (uVar19 == 0) {
          iVar10 = iVar16 + 0x1e;
          if (-1 < iVar16 + -1) {
            iVar10 = iVar16 + -1;
          }
          uVar20 = 0;
          uVar14 = (ulonglong)(uint)(iVar10 >> 5);
          if (iVar10 >> 5 < 1) {
            uVar14 = uVar20;
          }
          local_200 = (undefined2 *)((ulonglong)local_200 & 0xffffffff00000000);
          do {
            if (uVar14 == uVar20) goto LAB_14330d622;
            local_200 = (undefined2 *)CONCAT44(local_200._4_4_,(int)local_200 + 0x20);
            uVar19 = puVar11[uVar20 + 1];
            uVar20 = uVar20 + 1;
          } while (uVar19 == 0);
        }
        else {
          uVar20 = 0;
          local_200 = (undefined2 *)((ulonglong)local_200._4_4_ << 0x20);
        }
        local_1e0 = (ulonglong)(-uVar19 & uVar19);
        uVar14 = local_1e0 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar10 = ((int)local_200 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        local_1f8 = uVar20;
        if (iVar16 <= iVar10) {
          iVar10 = iVar16;
        }
      }
      if (iVar10 < iVar16) {
        uVar19 = 0xffffffff;
        local_1d0 = (uint *)(param_1 + 0x118);
        local_1c8 = puVar22;
        local_1c0 = uVar18;
        local_1b8 = param_2;
        do {
          lVar13 = *plVar7;
          lVar15 = (longlong)iVar10 * 0x58;
          uVar20 = lVar13 + lVar15;
          uVar1 = *(ushort *)(lVar13 + 0x10 + lVar15);
          uVar18 = (ulonglong)*(ushort *)(lVar13 + 0x12 + lVar15);
          lVar13 = plVar7[2];
          local_128 = 0x10000000000;
          local_1d4 = uVar19;
          if (uVar18 != 0) {
            uVar14 = 0;
            do {
              uVar4 = local_128;
              if ((*(uint *)(uVar20 + 0xc) >> ((uint)uVar14 & 0x1f) & 1) != 0) {
                uVar2 = *(ushort *)((ulonglong)uVar1 * 4 + lVar13 + uVar14 * 4);
                iVar16 = uVar2 + 1;
                iVar10 = iVar16 - (int)local_128;
                if (iVar10 != 0 && (int)local_128 <= iVar16) {
                  if ((int)local_128 == 0) {
LAB_14330d31c:
                    if (local_128._4_4_ <= (int)(uint)uVar2) {
                      local_128 = CONCAT44(0x100,(int)local_128);
                      FUN_14497ddce(&local_148,uVar4 & 0xffffffff);
                      iVar16 = (int)local_128 + iVar10;
                    }
                    iVar17 = iVar16 + 0x1f;
                    if (-1 < iVar16) {
                      iVar17 = iVar16;
                    }
                    local_128 = CONCAT44(local_128._4_4_,iVar16);
                    if (iVar16 % 0x20 != 0) {
                      bVar8 = -(char)(iVar16 % 0x20);
                      *(uint *)((longlong)&local_148 + (longlong)(iVar17 >> 5) * 4) =
                           (uint)(*(int *)((longlong)&local_148 + (longlong)(iVar17 >> 5) * 4) <<
                                 (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
                    }
                  }
                  else {
                    iVar17 = (int)local_128 + 0x1e;
                    if (-1 < (int)local_128 + -1) {
                      iVar17 = (int)local_128 + -1;
                    }
                    if (iVar17 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14330d31c;
                    local_128 = CONCAT44(local_128._4_4_,iVar16);
                  }
                  FUN_1447c45ca(&local_148,uVar4 & 0xffffffff,iVar10,0);
                }
                puVar22 = (uint *)((longlong)&local_148 + (ulonglong)(uVar2 >> 5) * 4);
                *puVar22 = *puVar22 | 1 << ((byte)uVar2 & 0x1f);
              }
              uVar14 = uVar14 + 1;
            } while (uVar18 != uVar14);
          }
          puVar21 = local_188;
          plVar7 = local_1f0;
          local_188._0_4_ =
               CONCAT22(*(undefined2 *)(uVar20 + 0x16),*(undefined2 *)((longlong)local_1f0 + 0x5c));
          uVar18 = (ulonglong)local_188;
          local_188._6_2_ = SUB82(puVar21,6);
          local_188._0_6_ = (uint6)(uint5)uVar18;
          local_180 = 0x6ff;
          local_17c = 0;
          uVar1 = *(ushort *)(param_1 + 0x66);
          FUN_14634b9ee(&local_120,&local_188);
          iVar16 = local_f0;
          param_2 = local_1b8;
          puVar22 = local_1d0;
          iVar10 = uVar1 + 1;
          iVar17 = iVar10 - local_f0;
          if (iVar17 != 0 && local_f0 <= iVar10) {
            if (local_f0 == 0) {
LAB_14330d291:
              if (local_ec <= (int)(uint)uVar1) {
                local_ec = 0x100;
                FUN_14497ddce(local_110,local_f0);
                iVar10 = local_f0 + iVar17;
              }
              iVar12 = iVar10 + 0x1f;
              if (-1 < iVar10) {
                iVar12 = iVar10;
              }
              local_f0 = iVar10;
              iVar10 = local_f0;
              if (iVar10 % 0x20 != 0) {
                bVar8 = -(char)(iVar10 % 0x20);
                local_110[iVar12 >> 5] =
                     (local_110[iVar12 >> 5] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
                iVar10 = local_f0;
              }
            }
            else {
              iVar12 = local_f0 + 0x1e;
              if (-1 < local_f0 + -1) {
                iVar12 = local_f0 + -1;
              }
              if (iVar12 >> 5 != (uint)(uVar1 >> 5)) goto LAB_14330d291;
            }
            local_f0 = iVar10;
            FUN_1447c45ca(local_110,iVar16,iVar17,0);
          }
          local_110[uVar1 >> 5] = local_110[uVar1 >> 5] | 1 << ((byte)uVar1 & 0x1f);
          local_14e = *(undefined2 *)(uVar20 + 0x14);
          local_58 = (code *)&local_14e;
          local_50 = &local_14c;
          FUN_1403b5126(local_110,&local_58,2);
          FUN_14010b303(&local_148,local_88,1,&local_58);
          uVar18 = local_1c0;
          local_158 = local_1c0;
          local_198 = local_1e8;
          local_15a = local_120._4_2_ & 0xfdff;
          local_58 = FUN_145f93ca6;
          local_50 = (undefined4 *)CONCAT71(local_50._1_7_,3);
          local_208 = &local_190;
          local_210 = &local_158;
          local_218 = &local_198;
          local_228 = (ulonglong *)&local_15a;
          local_220 = &local_58;
          local_190 = uVar20;
          FUN_1462104d6(&local_120,&local_14c,local_1e8,param_2);
          if (CONCAT44(iStack_bc,local_c0) != 0) {
            FUN_1400020a8();
          }
          FUN_1406adae8(param_2,local_164,local_14c);
          uVar19 = local_1d4 & ~(uint)local_1e0;
          puVar11 = *(uint **)(param_1 + 0x128);
          if (*(uint **)(param_1 + 0x128) == (uint *)0x0) {
            puVar11 = puVar22;
          }
          iVar16 = *(int *)(param_1 + 0x130);
          iVar10 = (int)local_1f8;
          lVar13 = (longlong)iVar10;
          uVar9 = puVar11[lVar13] & uVar19;
          puVar22 = local_1c8;
          if (uVar9 == 0) {
            iVar17 = iVar16 + 0x1e;
            if (-1 < iVar16 + -1) {
              iVar17 = iVar16 + -1;
            }
            iVar17 = iVar17 >> 5;
            iVar12 = iVar17;
            if (iVar17 < iVar10) {
              iVar12 = iVar10;
            }
            if (iVar17 <= iVar10) break;
            local_200 = (undefined2 *)CONCAT44(local_200._4_4_,(int)local_200 + 0x20);
            lVar15 = 0;
            while (uVar9 = puVar11[lVar13 + lVar15 + 1], uVar9 == 0) {
              local_200 = (undefined2 *)CONCAT44(local_200._4_4_,(int)local_200 + 0x20);
              lVar15 = lVar15 + 1;
              if (iVar12 - lVar13 == lVar15) goto LAB_14330d622;
            }
            local_1f8 = (ulonglong)(iVar10 + (int)lVar15 + 1);
            uVar19 = 0xffffffff;
          }
          local_1e0 = (ulonglong)(-uVar9 & uVar9);
          uVar20 = local_1e0 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar10 = ((int)local_200 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        } while (iVar10 < iVar16);
      }
    }
  }
LAB_14330d622:
  pcVar3 = local_58;
  if (*(char *)(param_1 + 0x138) == '\x01') {
    local_58 = (code *)CONCAT62(local_58._2_6_,*(undefined2 *)((longlong)plVar7 + 0x5c));
    uVar5 = local_58;
    local_58._6_2_ = SUB82(pcVar3,6);
    local_58._0_5_ = (uint5)uVar5;
    local_58._0_6_ = (uint6)(uint5)local_58;
    local_50 = (undefined4 *)CONCAT35(local_50._5_3_,0x6ff);
    local_1a8 = &local_14c;
    local_14c = CONCAT22(local_14c._2_2_,*(undefined2 *)(param_1 + 0x66));
    local_1a0 = (longlong)&local_14c + 2;
    FUN_147662ba4(&local_58,&local_120);
    FUN_140dad9c2(local_110,param_1 + 0xc0,2);
    FUN_14010b303(puVar22,local_e8,1,&local_148);
    lVar13 = FUN_14009d2a0();
    lVar15 = -0x12;
    do {
      iVar16 = local_68;
      uVar1 = *(ushort *)(lVar13 + 0xce + lVar15);
      iVar10 = uVar1 + 1;
      iVar17 = iVar10 - local_68;
      if (iVar17 != 0 && local_68 <= iVar10) {
        if (local_68 == 0) {
LAB_14330d70f:
          if (local_64 <= (int)(uint)uVar1) {
            local_64 = 0x100;
            FUN_14497ddce(local_88,local_68);
            iVar10 = local_68 + iVar17;
          }
          iVar12 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar12 = iVar10;
          }
          local_68 = iVar10;
          iVar10 = local_68;
          if (iVar10 % 0x20 != 0) {
            bVar8 = -(char)(iVar10 % 0x20);
            local_88[iVar12 >> 5] = (local_88[iVar12 >> 5] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
            iVar10 = local_68;
          }
        }
        else {
          iVar12 = local_68 + 0x1e;
          if (-1 < local_68 + -1) {
            iVar12 = local_68 + -1;
          }
          if (iVar12 >> 5 != (uint)(uVar1 >> 5)) goto LAB_14330d70f;
        }
        local_68 = iVar10;
        FUN_1447c45ca(local_88,iVar16,iVar17,0);
      }
      local_88[uVar1 >> 5] = local_88[uVar1 >> 5] | 1 << ((byte)uVar1 & 0x1f);
      lVar15 = lVar15 + 2;
    } while (lVar15 != 0);
    local_188 = *(undefined2 **)(local_1b0 + 0x270);
    local_210 = &local_188;
    local_218 = &local_190;
    local_228 = &local_198;
    local_198 = CONCAT62(local_198._2_6_,local_120._4_2_) & 0xfffffffffffffdff;
    local_148 = FUN_147696b0e;
    local_140 = 3;
    local_220 = &local_148;
    local_190 = uVar18;
    FUN_1476968ac(&local_120,&local_158,local_1e8,param_2);
    if (CONCAT44(iStack_bc,local_c0) != 0) {
      FUN_1400020a8();
    }
    FUN_1406adae8(param_2,local_164,local_158 & 0xffffffff);
  }
LAB_14330c394:
  if ((local_48 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014330cebc:
  lVar13 = lVar13 + -0x20;
  puVar11 = puVar11 + 1;
  if ((ulonglong)(uVar19 & 0xffffffe0) + lVar13 == 0) goto LAB_14330d622;
  goto LAB_14330ceb4;
}



// FUNCTION 14330dd4c FUN_14330dd4c body=9068 status=ok
// SIG undefined FUN_14330dd4c(void)

void FUN_14330dd4c(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined1 *puVar19;
  int iVar20;
  uint *puVar21;
  int iVar22;
  void *pvVar23;
  undefined8 *puVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined1 auStack_3a8 [32];
  undefined8 **local_388;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  longlong local_360;
  undefined8 *local_358;
  void *local_350;
  undefined8 *local_348;
  longlong local_340;
  longlong *local_338;
  undefined8 *local_330;
  undefined8 *local_328;
  undefined2 *local_320;
  undefined2 *local_318;
  undefined2 *local_310;
  undefined2 *local_308;
  undefined8 *local_300;
  undefined4 local_2f8;
  undefined1 local_2f4;
  undefined2 *local_2f0;
  undefined8 *local_2e8;
  undefined8 *local_2e0;
  longlong local_2d8;
  undefined8 *local_2d0;
  longlong local_2c8;
  undefined8 *local_2c0;
  longlong local_2b8;
  undefined2 local_2ac;
  undefined2 local_2aa;
  undefined8 local_2a8;
  ushort local_2a0;
  short local_29e;
  undefined1 local_29b;
  undefined4 local_298;
  undefined1 local_294;
  undefined1 local_290 [8];
  uint local_288 [8];
  uint local_268 [8];
  int local_248;
  int local_244;
  int local_240;
  int iStack_23c;
  longlong local_238;
  undefined8 local_228 [10];
  undefined1 local_1d8 [64];
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188 [32];
  undefined1 *local_168;
  ulonglong local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 *local_138;
  ulonglong local_130;
  uint local_120 [8];
  int local_100;
  int local_fc;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  longlong lStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  FUN_14633bf66();
  if (*(int *)(param_1 + 0x58) == 0) goto LAB_14330dd85;
  lVar7 = *(longlong *)(param_1 + 0x28);
  if ((*(ulonglong *)(param_1 + 0x110) == 0) ||
     (*(ulonglong *)(param_1 + 0x110) < *(ulonglong *)(lVar7 + 0x278))) {
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(lVar7 + 0x270);
    FUN_1460202b0(param_1);
  }
  else {
    FUN_146020d24(param_1);
  }
  if ((((*(int *)(param_1 + 0x78) == 0) && (*(int *)(param_1 + 0x88) == 0)) &&
      (*(int *)(param_1 + 0x98) == 0)) &&
     ((*(int *)(param_1 + 0xa8) == 0 && (*(int *)(param_1 + 0xb8) == 0)))) goto LAB_14330dd85;
  local_378 = lVar7 + 0x28;
  puVar17 = (undefined8 *)(param_1 + 0x70);
  local_370 = lVar7;
  lVar7 = FUN_14009d2a0();
  local_198 = 0;
  local_190 = 0x400000000;
  local_168 = (undefined1 *)0x0;
  local_160 = 0x400000000;
  local_368 = lVar7;
  if (*(int *)(param_1 + 0x78) != 0) {
    local_2a0 = *(ushort *)(lVar7 + 0x5a);
    local_29e = *(short *)(lVar7 + 0xf4);
    local_29b = 0;
    local_298 = 0x6ff;
    local_294 = 0;
    local_2c0 = &local_2a8;
    local_2a8._0_4_ = CONCAT22(*(undefined2 *)(param_1 + 0x66),*(undefined2 *)(lVar7 + 0x110));
    local_2b8 = (longlong)&local_2a8 + 4;
    FUN_147662af4(&local_2a0,local_158);
    FUN_140dad9c2(local_148,param_1 + 0xc0,2);
    iVar22 = local_100;
    uVar2 = *(ushort *)(lVar7 + 0x130);
    iVar15 = uVar2 + 1;
    iVar25 = iVar15 - local_100;
    if (iVar25 != 0 && local_100 <= iVar15) {
      if (local_100 == 0) {
LAB_14330e8cb:
        if (local_fc <= (int)(uint)uVar2) {
          local_fc = 0x100;
          FUN_14497ddce(local_120,local_100);
          iVar15 = local_100 + iVar25;
        }
        iVar20 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar20 = iVar15;
        }
        local_100 = iVar15;
        iVar15 = local_100;
        if (iVar15 % 0x20 != 0) {
          bVar13 = -(char)(iVar15 % 0x20);
          local_120[iVar20 >> 5] = (local_120[iVar20 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
          iVar15 = local_100;
        }
      }
      else {
        iVar20 = local_100 + 0x1e;
        if (-1 < local_100 + -1) {
          iVar20 = local_100 + -1;
        }
        if (iVar20 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14330e8cb;
      }
      local_100 = iVar15;
      FUN_1447c45ca(local_120,iVar22,iVar25,0);
    }
    local_120[uVar2 >> 5] = local_120[uVar2 >> 5] | 1 << ((byte)uVar2 & 0x1f);
    local_388 = &local_300;
    local_300 = puVar17;
    FUN_1433100ba(local_158,&local_80,local_378,param_2);
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    puVar24 = local_80;
    lVar7 = local_368;
    if (local_80 != (undefined8 *)0x0) {
      FUN_147552ffc(local_1d8,0xffff,&local_80);
      LOCK();
      piVar1 = (int *)(puVar24 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar24)(puVar24,1);
      }
    }
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    local_2a0 = *(ushort *)(lVar7 + 0x5a);
    local_29e = *(short *)(lVar7 + 0xf4);
    local_29b = 0;
    local_298 = 0x6ff;
    local_294 = 0;
    local_2d0 = &local_2a8;
    local_2a8._0_4_ = CONCAT22(*(undefined2 *)(param_1 + 0x66),*(undefined2 *)(lVar7 + 0x112));
    local_2c8 = (longlong)&local_2a8 + 4;
    FUN_147662af4(&local_2a0,local_158);
    FUN_140dad9c2(local_148,param_1 + 0xc0,2);
    iVar22 = local_100;
    uVar2 = *(ushort *)(lVar7 + 0x130);
    iVar15 = uVar2 + 1;
    iVar25 = iVar15 - local_100;
    if (iVar25 != 0 && local_100 <= iVar15) {
      if (local_100 == 0) {
LAB_14330e9e0:
        if (local_fc <= (int)(uint)uVar2) {
          local_fc = 0x100;
          FUN_14497ddce(local_120,local_100);
          iVar15 = local_100 + iVar25;
        }
        iVar20 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar20 = iVar15;
        }
        local_100 = iVar15;
        iVar15 = local_100;
        if (iVar15 % 0x20 != 0) {
          bVar13 = -(char)(iVar15 % 0x20);
          local_120[iVar20 >> 5] = (local_120[iVar20 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
          iVar15 = local_100;
        }
      }
      else {
        iVar20 = local_100 + 0x1e;
        if (-1 < local_100 + -1) {
          iVar20 = local_100 + -1;
        }
        if (iVar20 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14330e9e0;
      }
      local_100 = iVar15;
      FUN_1447c45ca(local_120,iVar22,iVar25,0);
    }
    local_120[uVar2 >> 5] = local_120[uVar2 >> 5] | 1 << ((byte)uVar2 & 0x1f);
    local_300 = (undefined8 *)(param_1 + 0x80);
    local_388 = &local_300;
    FUN_1433100ba(local_158,&local_80,local_378,param_2);
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    puVar24 = local_80;
    lVar7 = local_368;
    if (local_80 != (undefined8 *)0x0) {
      FUN_147552ffc(local_1d8,0xffff,&local_80);
      LOCK();
      piVar1 = (int *)(puVar24 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar24)(puVar24,1);
      }
    }
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    local_2a0 = *(ushort *)(lVar7 + 0x5a);
    local_29e = *(short *)(lVar7 + 0xf4);
    local_29b = 0;
    local_298 = 0x6ff;
    local_294 = 0;
    local_2e0 = &local_2a8;
    local_2a8._0_4_ = CONCAT22(*(undefined2 *)(param_1 + 0x66),*(undefined2 *)(lVar7 + 0x114));
    local_2d8 = (longlong)&local_2a8 + 4;
    FUN_147662af4(&local_2a0,local_158);
    FUN_140dad9c2(local_148,param_1 + 0xc0,2);
    iVar22 = local_100;
    uVar2 = *(ushort *)(lVar7 + 0x130);
    iVar15 = uVar2 + 1;
    iVar25 = iVar15 - local_100;
    if (iVar25 != 0 && local_100 <= iVar15) {
      if (local_100 == 0) {
LAB_14330eaf5:
        if (local_fc <= (int)(uint)uVar2) {
          local_fc = 0x100;
          FUN_14497ddce(local_120,local_100);
          iVar15 = local_100 + iVar25;
        }
        iVar20 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar20 = iVar15;
        }
        local_100 = iVar15;
        iVar15 = local_100;
        if (iVar15 % 0x20 != 0) {
          bVar13 = -(char)(iVar15 % 0x20);
          local_120[iVar20 >> 5] = (local_120[iVar20 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
          iVar15 = local_100;
        }
      }
      else {
        iVar20 = local_100 + 0x1e;
        if (-1 < local_100 + -1) {
          iVar20 = local_100 + -1;
        }
        if (iVar20 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14330eaf5;
      }
      local_100 = iVar15;
      FUN_1447c45ca(local_120,iVar22,iVar25,0);
    }
    local_120[uVar2 >> 5] = local_120[uVar2 >> 5] | 1 << ((byte)uVar2 & 0x1f);
    local_300 = (undefined8 *)(param_1 + 0x90);
    local_388 = &local_300;
    FUN_1433100ba(local_158,&local_80,local_378,param_2);
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    puVar24 = local_80;
    lVar7 = local_368;
    if (local_80 != (undefined8 *)0x0) {
      FUN_147552ffc(local_1d8,0xffff,&local_80);
      LOCK();
      piVar1 = (int *)(puVar24 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar24)(puVar24,1);
      }
    }
  }
  local_360 = param_3;
  local_358 = puVar17;
  if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
    local_348 = (undefined8 *)(param_1 + 0xb0);
    pvVar23 = *(void **)(param_1 + 0xb0);
    local_350 = (void *)((longlong)pvVar23 + (longlong)*(int *)(param_1 + 0xb8) * 0x18);
    lVar26 = param_1 + 0xc0;
    lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_330 = (undefined8 *)(lVar18 + 0x308);
    local_328 = (undefined8 *)(lVar18 + 0x310);
    local_338 = (longlong *)(lVar18 + 0x2b8);
    local_340 = 0x527800b400;
    do {
      puVar17 = local_80;
      local_80._0_4_ = CONCAT22(*(undefined2 *)(lVar7 + 0xf8),*(undefined2 *)(lVar7 + 0x5a));
      local_80._6_2_ = SUB82(puVar17,6);
      local_80._0_6_ = CONCAT24(*(undefined2 *)(lVar7 + 0xf4),(undefined4)local_80);
      local_78._0_2_ = (ushort)(byte)local_78;
      local_78 = CONCAT44(0x6ff,(undefined4)local_78);
      local_70 = (undefined8 *)((ulonglong)local_70 & 0xffffffffffffff00);
      uVar2 = *(ushort *)(param_1 + 0x66);
      FUN_147695e0e(&local_2a0,&local_80);
      uVar16 = local_268[0];
      uVar14 = uVar2 + 1;
      iVar22 = uVar14 - local_268[0];
      if (iVar22 != 0 && (int)local_268[0] <= (int)uVar14) {
        if (local_268[0] == 0) {
LAB_14330dfb5:
          if ((int)local_268[1] <= (int)(uint)uVar2) {
            local_268[1] = 0x100;
            FUN_14497ddce(local_288,local_268[0]);
            uVar14 = local_268[0] + iVar22;
          }
          uVar6 = uVar14 + 0x1f;
          if (-1 < (int)uVar14) {
            uVar6 = uVar14;
          }
          local_268[0] = uVar14;
          uVar14 = local_268[0];
          if ((int)uVar14 % 0x20 != 0) {
            bVar13 = -(char)((int)uVar14 % 0x20);
            local_288[(int)uVar6 >> 5] =
                 (local_288[(int)uVar6 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
            uVar14 = local_268[0];
          }
        }
        else {
          iVar15 = local_268[0] + 0x1e;
          if (-1 < (int)(local_268[0] - 1)) {
            iVar15 = local_268[0] - 1;
          }
          if (iVar15 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14330dfb5;
        }
        local_268[0] = uVar14;
        FUN_1447c45ca(local_288,uVar16,iVar22,0);
      }
      local_288[uVar2 >> 5] = local_288[uVar2 >> 5] | 1 << ((byte)uVar2 & 0x1f);
      uVar2 = *(ushort *)(lVar7 + 0x118);
      uVar3 = *(ushort *)(lVar7 + 0x114);
      iVar15 = uVar3 + 1;
      iVar22 = *(int *)(param_1 + 0xe0);
      iVar25 = iVar15 - iVar22;
      if (iVar25 != 0 && iVar22 <= iVar15) {
        if (iVar22 == 0) {
LAB_14330e067:
          if (*(int *)(param_1 + 0xe4) <= (int)(uint)uVar3) {
            *(undefined4 *)(param_1 + 0xe4) = 0x100;
            FUN_14497ddce(lVar26,iVar22);
            iVar15 = *(int *)(param_1 + 0xe0) + iVar25;
          }
          iVar20 = iVar15 + 0x1f;
          if (-1 < iVar15) {
            iVar20 = iVar15;
          }
          *(int *)(param_1 + 0xe0) = iVar15;
          if (iVar15 % 0x20 != 0) {
            bVar13 = -(char)(iVar15 % 0x20);
            *(uint *)(lVar26 + (longlong)(iVar20 >> 5) * 4) =
                 (uint)(*(int *)(lVar26 + (longlong)(iVar20 >> 5) * 4) << (bVar13 & 0x1f)) >>
                 (bVar13 & 0x1f);
          }
        }
        else {
          iVar20 = iVar22 + 0x1e;
          if (-1 < iVar22 + -1) {
            iVar20 = iVar22 + -1;
          }
          if (iVar20 >> 5 != (uint)(uVar3 >> 5)) goto LAB_14330e067;
          *(int *)(param_1 + 0xe0) = iVar15;
        }
        FUN_1447c45ca(lVar26,iVar22,iVar25,0);
      }
      lVar7 = local_368;
      puVar8 = (uint *)(param_1 + 0xc0 + (ulonglong)(uVar3 >> 5) * 4);
      *puVar8 = *puVar8 | 1 << ((byte)uVar3 & 0x1f);
      iVar15 = uVar2 + 1;
      iVar22 = *(int *)(param_1 + 0xe0);
      iVar25 = iVar15 - iVar22;
      if (iVar25 != 0 && iVar22 <= iVar15) {
        if (iVar22 == 0) {
LAB_14330e0ff:
          if (*(int *)(param_1 + 0xe4) <= (int)(uint)uVar2) {
            *(undefined4 *)(param_1 + 0xe4) = 0x100;
            FUN_14497ddce(lVar26,iVar22);
            iVar15 = *(int *)(param_1 + 0xe0) + iVar25;
          }
          iVar20 = iVar15 + 0x1f;
          if (-1 < iVar15) {
            iVar20 = iVar15;
          }
          *(int *)(param_1 + 0xe0) = iVar15;
          if (iVar15 % 0x20 != 0) {
            bVar13 = -(char)(iVar15 % 0x20);
            *(uint *)(lVar26 + (longlong)(iVar20 >> 5) * 4) =
                 (uint)(*(int *)(lVar26 + (longlong)(iVar20 >> 5) * 4) << (bVar13 & 0x1f)) >>
                 (bVar13 & 0x1f);
          }
        }
        else {
          iVar20 = iVar22 + 0x1e;
          if (-1 < iVar22 + -1) {
            iVar20 = iVar22 + -1;
          }
          if (iVar20 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14330e0ff;
          *(int *)(param_1 + 0xe0) = iVar15;
        }
        FUN_1447c45ca(lVar26,iVar22,iVar25,0);
      }
      puVar8 = (uint *)(lVar26 + (ulonglong)(uVar2 >> 5) * 4);
      *puVar8 = *puVar8 | 1 << ((byte)uVar2 & 0x1f);
      FUN_140dad9c2(local_288,lVar26,2);
      iVar22 = local_240;
      uVar2 = *(ushort *)(lVar7 + 0x130);
      iVar15 = uVar2 + 1;
      iVar25 = iVar15 - local_240;
      if (iVar25 != 0 && local_240 <= iVar15) {
        if (local_240 == 0) {
LAB_14330e1ad:
          if (iStack_23c <= (int)(uint)uVar2) {
            iStack_23c = 0x100;
            FUN_14497ddce(local_268 + 2,local_240);
            iVar15 = local_240 + iVar25;
          }
          iVar20 = iVar15 + 0x1f;
          if (-1 < iVar15) {
            iVar20 = iVar15;
          }
          local_240 = iVar15;
          iVar15 = local_240;
          if (iVar15 % 0x20 != 0) {
            bVar13 = -(char)(iVar15 % 0x20);
            local_268[(longlong)(iVar20 >> 5) + 2] =
                 (local_268[(longlong)(iVar20 >> 5) + 2] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
            iVar15 = local_240;
          }
        }
        else {
          iVar20 = local_240 + 0x1e;
          if (-1 < local_240 + -1) {
            iVar20 = local_240 + -1;
          }
          if (iVar20 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14330e1ad;
        }
        local_240 = iVar15;
        FUN_1447c45ca(local_268 + 2,iVar22,iVar25,0);
      }
      local_268[(ulonglong)(uVar2 >> 5) + 2] =
           local_268[(ulonglong)(uVar2 >> 5) + 2] | 1 << ((byte)uVar2 & 0x1f);
      FUN_14010b303(lVar26,local_228,1);
      if (((local_2a0 == 0xffff) || (local_29e == -1)) ||
         (cVar5 = FUN_1476961c4(&local_2a0,local_378), cVar5 == '\0')) {
LAB_14330e251:
        local_2a8 = (undefined8 *)0x0;
      }
      else {
        if ((*(int *)(local_370 + 0x29c) != 0) || (*(char *)(local_370 + 0x298) == '\0')) {
          local_300 = local_348;
          FUN_14769739c(local_158,local_378,&local_2a0);
          FUN_143317f5a(local_158,&local_300);
          if (local_f0 != 0) {
            FUN_1400020a8();
          }
          goto LAB_14330e251;
        }
        local_138 = (undefined1 *)0x0;
        local_130 = 0x400000000;
        FUN_14769741a(&local_2a0,param_2,local_158);
        puVar17 = local_330;
        puVar19 = local_158;
        if ((int)local_130 == 0) {
          puVar19 = (undefined1 *)0x0;
        }
        puVar8 = (uint *)*local_330;
        if (puVar8 != (uint *)0x0) goto LAB_14330e4a6;
        while( true ) {
          uVar16 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar16 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar16 | 1;
            __tlregdtor(&LAB_143311b0b);
          }
          puVar10 = (undefined4 *)*local_328;
          *local_328 = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar17 = puVar10;
          FUN_140217a48(puVar17);
          puVar8 = (uint *)*puVar17;
LAB_14330e4a6:
          puVar24 = (undefined8 *)(*(longlong *)(puVar8 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar11 = (uint *)(puVar24 + 0x31);
          uVar16 = puVar8[0x12];
          if (puVar11 <= puVar8 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
            LOCK();
            uVar14 = *puVar8;
            *puVar8 = *puVar8 + uVar16 + 1;
            UNLOCK();
            if ((uVar14 ^ uVar16) != 0xffffffff) break;
            puVar8 = (uint *)*puVar17;
            *puVar8 = 0xffffffff;
            *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
            puVar8[0x12] = 0;
            *puVar17 = puVar8;
            puVar24 = (undefined8 *)((longlong)puVar8 + 0x5fU & 0xfffffffffffffff8);
            puVar11 = (uint *)(puVar24 + 0x31);
            uVar16 = 0;
            if (puVar11 <= puVar8 + 0x4000) {
              uVar16 = 1;
              goto LAB_14330e526;
            }
          }
        }
        uVar16 = uVar16 + 1;
LAB_14330e526:
        *(uint **)(puVar8 + 0x10) = puVar11;
        puVar8[0x12] = uVar16;
        FUN_1447247dc(puVar24,puVar19);
        *puVar24 = &PTR_FUN_14a4d8970;
        FUN_14769739c(puVar24 + 0x15,local_378,&local_2a0);
        puVar24[0x30] = local_348;
        uVar16 = *(uint *)((longlong)puVar24 + 0xb4);
        if (((ulonglong)uVar16 & 0xff) == 0xff) {
          uVar14 = uVar16 >> 10 & 3;
          iVar22 = 0;
          if ((uVar16 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar27 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar22 = 0;
          }
          else {
            uVar27 = 2;
          }
        }
        else {
          iVar22 = (uVar16 >> 7 & 2 | uVar16 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar16 & 0xff) * 4);
          uVar27 = 5;
        }
        if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
        }
        puVar24[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar24[9] = puVar24;
        puVar24[10] = puVar24;
        lVar7 = *local_338;
        if (lVar7 == 0) {
          if ((char)uVar27 == '\x06') {
            uVar27 = 1;
          }
          uVar9 = 0;
        }
        else {
          if ((char)uVar27 == '\x06') {
            uVar27 = *(ulonglong *)(lVar7 + 0x38) >> 0x3b;
          }
          uVar9 = *(undefined8 *)(lVar7 + 0x30);
        }
        puVar24[0xf] = uVar9;
        puVar24[0x10] = (uVar27 << 0x3b) + local_340 | 0xc000000000000000;
        *(int *)((longlong)puVar24 + 0x1c) = iVar22;
        if (puVar24 == (undefined8 *)0x0) {
          puVar17 = (undefined8 *)0x0;
        }
        else {
          LOCK();
          *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
          UNLOCK();
          puVar17 = puVar24;
        }
        local_300 = (undefined8 *)CONCAT71(local_300._1_7_,1);
        local_2a8 = puVar24;
        FUN_1447439e4(puVar17,&local_300);
        puVar19 = local_138;
        if (local_138 == (undefined1 *)0x0) {
          puVar19 = local_158;
        }
        FUN_144717c65(puVar19,local_130 & 0xffffffff);
        lVar7 = local_368;
        if (local_138 != (undefined1 *)0x0) {
          FUN_1400020a8();
          lVar7 = local_368;
        }
      }
      if (local_238 != 0) {
        FUN_1400020a8();
      }
      puVar17 = local_2a8;
      if (local_2a8 != (undefined8 *)0x0) {
        FUN_147552ffc(local_1d8,0xffff,&local_2a8);
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
      pvVar23 = (void *)((longlong)pvVar23 + 0x18);
    } while (pvVar23 != local_350);
  }
  puVar17 = local_80;
  lVar26 = local_370;
  if (*(int *)(param_1 + 0xa8) != 0) {
    local_80._0_4_ = CONCAT22(*(undefined2 *)(lVar7 + 0xf4),*(undefined2 *)(lVar7 + 0x5a));
    uVar9 = local_80;
    local_80._6_2_ = SUB82(puVar17,6);
    local_80._0_6_ = (uint6)(uint5)uVar9;
    local_78 = CONCAT35(local_78._5_3_,0x6ff);
    local_2ac = *(undefined2 *)(lVar7 + 0x116);
    local_2f0 = &local_2ac;
    local_2aa = *(undefined2 *)(param_1 + 0x66);
    local_2e8 = &local_2a8;
    FUN_147662af4(&local_80,&local_2a0);
    FUN_140dad9c2(local_290,param_1 + 0xc0,2);
    iVar22 = local_248;
    uVar2 = *(ushort *)(lVar7 + 0x130);
    iVar15 = uVar2 + 1;
    iVar25 = iVar15 - local_248;
    if (iVar25 != 0 && local_248 <= iVar15) {
      if (local_248 == 0) {
LAB_14330ec0a:
        if (local_244 <= (int)(uint)uVar2) {
          local_244 = 0x100;
          FUN_14497ddce(local_268,local_248);
          iVar15 = local_248 + iVar25;
        }
        iVar20 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar20 = iVar15;
        }
        local_248 = iVar15;
        iVar15 = local_248;
        if (iVar15 % 0x20 != 0) {
          bVar13 = -(char)(iVar15 % 0x20);
          local_268[iVar20 >> 5] = (local_268[iVar20 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
          iVar15 = local_248;
        }
      }
      else {
        iVar20 = local_248 + 0x1e;
        if (-1 < local_248 + -1) {
          iVar20 = local_248 + -1;
        }
        if (iVar20 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14330ec0a;
      }
      local_248 = iVar15;
      FUN_1447c45ca(local_268,iVar22,iVar25,0);
    }
    uVar3 = local_2a0;
    local_268[uVar2 >> 5] = local_268[uVar2 >> 5] | 1 << ((byte)uVar2 & 0x1f);
    uVar16 = (uint)local_2a0;
    if (uVar16 == 0xffff) {
      local_2a8 = (undefined8 *)0x0;
    }
    else {
      lVar7 = FUN_14482820e(local_378);
      if ((*(uint *)(lVar7 + 0x20) == (uint)uVar3 || (int)*(uint *)(lVar7 + 0x20) < (int)uVar16) ||
         ((*(uint *)(lVar7 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) == 0)) {
        local_2a8 = (undefined8 *)0x0;
      }
      else if ((*(int *)(lVar26 + 0x29c) == 0) && (*(char *)(local_370 + 0x298) != '\0')) {
        local_138 = (undefined1 *)0x0;
        local_130 = 0x400000000;
        FUN_147696eec(&local_2a0,param_2,local_158);
        puVar19 = (undefined1 *)0x0;
        if ((int)local_130 != 0) {
          puVar19 = local_158;
        }
        puVar17 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar8 = (uint *)*puVar17;
        if (puVar8 != (uint *)0x0) goto LAB_14330f64f;
        while( true ) {
          uVar16 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar16 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar16 | 1;
            __tlregdtor(&LAB_143311b0b);
          }
          lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar7 + 0x310);
          *(undefined8 *)(lVar7 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar17 = puVar10;
          FUN_140217a48(puVar17);
          puVar8 = (uint *)*puVar17;
LAB_14330f64f:
          puVar24 = (undefined8 *)(*(longlong *)(puVar8 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar11 = (uint *)(puVar24 + 0x30);
          uVar16 = puVar8[0x12];
          if (puVar11 <= puVar8 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
            LOCK();
            uVar14 = *puVar8;
            *puVar8 = *puVar8 + uVar16 + 1;
            UNLOCK();
            if ((uVar14 ^ uVar16) != 0xffffffff) break;
            puVar8 = (uint *)*puVar17;
            *puVar8 = 0xffffffff;
            *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
            puVar8[0x12] = 0;
            *puVar17 = puVar8;
            puVar24 = (undefined8 *)((longlong)puVar8 + 0x5fU & 0xfffffffffffffff8);
            puVar11 = (uint *)(puVar24 + 0x30);
            uVar16 = 0;
            if (puVar11 <= puVar8 + 0x4000) {
              uVar16 = 1;
              goto LAB_14330f6d1;
            }
          }
        }
        uVar16 = uVar16 + 1;
LAB_14330f6d1:
        *(uint **)(puVar8 + 0x10) = puVar11;
        puVar8[0x12] = uVar16;
        FUN_1447247dc(puVar24,puVar19);
        *puVar24 = &PTR_FUN_14a4d8980;
        FUN_147697704(puVar24 + 0x15,local_378,&local_2a0);
        puVar24[0x2f] = (undefined8 *)(param_1 + 0xa0);
        uVar16 = *(uint *)(puVar24 + 0x16);
        if (((ulonglong)uVar16 & 0xff) == 0xff) {
          uVar14 = uVar16 >> 10 & 3;
          iVar22 = 0;
          if ((uVar16 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar27 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar22 = 0;
          }
          else {
            uVar27 = 2;
          }
        }
        else {
          iVar22 = (uVar16 >> 7 & 2 | uVar16 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar16 & 0xff) * 4);
          uVar27 = 5;
        }
        if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
        }
        puVar24[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar24[9] = puVar24;
        puVar24[10] = puVar24;
        lVar7 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar7 == 0) {
          uVar4 = 1;
          if ((char)uVar27 != '\x06') {
            uVar4 = uVar27;
          }
          uVar27 = uVar4;
          uVar9 = 0;
        }
        else {
          if ((char)uVar27 == '\x06') {
            uVar27 = *(ulonglong *)(lVar7 + 0x38) >> 0x3b;
          }
          uVar9 = *(undefined8 *)(lVar7 + 0x30);
        }
        puVar24[0xf] = uVar9;
        puVar24[0x10] = uVar27 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar24 + 0x1c) = iVar22;
        if (puVar24 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
          UNLOCK();
        }
        local_300 = (undefined8 *)CONCAT71(local_300._1_7_,1);
        local_2a8 = puVar24;
        FUN_1447439e4();
        puVar19 = local_158;
        if (local_138 != (undefined1 *)0x0) {
          puVar19 = local_138;
        }
        FUN_144717c65(puVar19,local_130 & 0xffffffff);
        lVar26 = local_370;
        if (local_138 != (undefined1 *)0x0) {
          FUN_1400020a8();
          lVar26 = local_370;
        }
      }
      else {
        local_300 = (undefined8 *)(param_1 + 0xa0);
        FUN_147697704(local_158,local_378,&local_2a0);
        FUN_1433181fe(local_158,&local_300);
        if (local_f8 != 0) {
          FUN_1400020a8();
        }
        local_2a8 = (undefined8 *)0x0;
        lVar26 = local_370;
      }
    }
    lVar7 = local_368;
    if (CONCAT44(iStack_23c,local_240) != 0) {
      FUN_1400020a8();
    }
    puVar17 = local_2a8;
    if (local_2a8 != (undefined8 *)0x0) {
      FUN_147552ffc(local_1d8,0xffff,&local_2a8);
      LOCK();
      piVar1 = (int *)(puVar17 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar17)(puVar17,1);
      }
    }
  }
  puVar17 = local_300;
  puVar8 = (uint *)(param_1 + 0xe8);
  uVar16 = *(int *)(param_1 + 0x108) + 0x1f;
  if (0x1f < uVar16) {
    lVar18 = 0;
    puVar11 = puVar8;
LAB_14330e77f:
    uVar14 = *puVar11;
    if (uVar14 == 0) goto code_r0x00014330e787;
    iVar22 = 0;
    if (uVar14 != 0) {
      for (; (uVar14 >> iVar22 & 1) == 0; iVar22 = iVar22 + 1) {
      }
    }
    if (iVar22 + 1 != (int)lVar18 && iVar22 - (int)lVar18 < *(int *)(param_1 + 0x108)) {
      local_300 = (undefined8 *)CONCAT62(local_300._2_6_,*(undefined2 *)(lVar7 + 0x5c));
      puVar24 = local_300;
      local_300._6_2_ = SUB82(puVar17,6);
      local_300._0_5_ = (uint5)puVar24;
      local_300._0_6_ = (uint6)(uint5)local_300;
      local_2f8 = 0x6ff;
      local_2f4 = 0;
      local_2ac = *(undefined2 *)(param_1 + 0x66);
      local_310 = &local_2ac;
      local_308 = &local_2aa;
      FUN_147662ba4(&local_300,&local_2a0);
      FUN_140dad9c2(local_290,puVar8,2);
      uVar2 = local_2a0;
      uVar16 = (uint)local_2a0;
      if (uVar16 != 0xffff) {
        uVar9 = *(undefined8 *)(lVar26 + 0x270);
        lVar7 = FUN_14482820e(local_378);
        if ((*(uint *)(lVar7 + 0x20) != (uint)uVar2 && (int)uVar16 <= (int)*(uint *)(lVar7 + 0x20))
           && ((*(uint *)(lVar7 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0)) {
          local_350 = (void *)(param_1 + 0x118);
          if ((*(int *)(lVar26 + 0x29c) == 0) && (*(char *)(local_370 + 0x298) != '\0')) {
            local_138 = (undefined1 *)0x0;
            local_130 = 0x400000000;
            local_2a8._0_2_ = 0xffff;
            local_80 = &local_2a8;
            local_78 = (longlong)&local_2a8 + 2;
            FUN_147552f5e(local_1d8,local_158,&local_80);
            local_2a8 = (undefined8 *)CONCAT62(local_2a8._2_6_,local_2a0);
            local_80 = &local_2a8;
            local_78 = (longlong)&local_2a8 + 2;
            FUN_147552f5e(local_1d8,local_158,&local_80);
            puVar19 = (undefined1 *)0x0;
            if ((int)local_130 != 0) {
              puVar19 = local_158;
            }
            puVar17 = (undefined8 *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
            puVar11 = (uint *)*puVar17;
            if (puVar11 != (uint *)0x0) goto LAB_14330fbae;
            while( true ) {
              uVar16 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar16 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar16 | 1;
                __tlregdtor(&LAB_143311b0b);
              }
              lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
              ;
              puVar10 = *(undefined4 **)(lVar7 + 0x310);
              *(undefined8 *)(lVar7 + 0x310) = 0;
              if (puVar10 == (undefined4 *)0x0) {
                puVar10 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar10 = 0xffffffff;
              *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
              puVar10[0x12] = 0;
              *puVar17 = puVar10;
              FUN_140217a48(puVar17);
              puVar11 = (uint *)*puVar17;
LAB_14330fbae:
              puVar24 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
              puVar21 = (uint *)(puVar24 + 0x36);
              uVar16 = puVar11[0x12];
              if (puVar21 <= puVar11 + 0x4000) break;
              while( true ) {
                *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
                LOCK();
                uVar14 = *puVar11;
                *puVar11 = *puVar11 + uVar16 + 1;
                UNLOCK();
                if ((uVar14 ^ uVar16) != 0xffffffff) break;
                puVar11 = (uint *)*puVar17;
                *puVar11 = 0xffffffff;
                *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
                puVar11[0x12] = 0;
                *puVar17 = puVar11;
                puVar24 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
                puVar21 = (uint *)(puVar24 + 0x36);
                uVar16 = 0;
                if (puVar21 <= puVar11 + 0x4000) {
                  uVar16 = 1;
                  goto LAB_14330fc32;
                }
              }
            }
            uVar16 = uVar16 + 1;
LAB_14330fc32:
            *(uint **)(puVar11 + 0x10) = puVar21;
            puVar11[0x12] = uVar16;
            FUN_1447247dc(puVar24,puVar19);
            *puVar24 = &PTR_FUN_14a4d8990;
            FUN_147697880(puVar24 + 0x15,local_378,&local_2a0);
            puVar24[0x31] = 0;
            puVar24[0x32] = 0;
            iVar22 = *(int *)(param_1 + 0x130);
            uVar16 = iVar22 + 0x1fU & 0xffffffe0;
            if (0 < (int)uVar16) {
              uVar14 = 0x80;
              if (0x80 < uVar16) {
                uVar14 = uVar16;
              }
              *(uint *)((longlong)puVar24 + 0x194) = uVar14;
              FUN_1446efbd8(puVar24 + 0x2f,0);
              iVar22 = *(int *)(param_1 + 0x130);
            }
            *(int *)(puVar24 + 0x32) = iVar22;
            if (iVar22 != 0) {
              pvVar23 = local_350;
              if (*(void **)(param_1 + 0x128) != (void *)0x0) {
                pvVar23 = *(void **)(param_1 + 0x128);
              }
              puVar17 = puVar24 + 0x2f;
              if ((undefined8 *)puVar24[0x31] != (undefined8 *)0x0) {
                puVar17 = (undefined8 *)puVar24[0x31];
              }
              memcpy(puVar17,pvVar23,(ulonglong)(iVar22 + 0x1fU >> 3 & 0xfffffffc));
            }
            uVar12 = FUN_14009d2a0();
            puVar24[0x33] = uVar12;
            puVar24[0x34] = local_358;
            puVar24[0x35] = uVar9;
            uVar16 = *(uint *)(puVar24 + 0x16);
            if (((ulonglong)uVar16 & 0xff) == 0xff) {
              uVar14 = uVar16 >> 10 & 3;
              iVar22 = 0;
              if ((uVar16 >> 9 & 1) == 0 || uVar14 < 2) {
                uVar27 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
                iVar22 = 0;
              }
              else {
                uVar27 = 2;
              }
            }
            else {
              iVar22 = (uVar16 >> 7 & 2 | uVar16 >> 9 & 1) +
                       *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar16 & 0xff) * 4);
              uVar27 = 5;
            }
            if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
            }
            puVar24[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar24[9] = puVar24;
            puVar24[10] = puVar24;
            lVar7 = *(longlong *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x2b8);
            if (lVar7 == 0) {
              uVar4 = 1;
              if ((char)uVar27 != '\x06') {
                uVar4 = uVar27;
              }
              uVar27 = uVar4;
              uVar9 = 0;
            }
            else {
              if ((char)uVar27 == '\x06') {
                uVar27 = *(ulonglong *)(lVar7 + 0x38) >> 0x3b;
              }
              uVar9 = *(undefined8 *)(lVar7 + 0x30);
            }
            puVar24[0xf] = uVar9;
            puVar24[0x10] = uVar27 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar24 + 0x1c) = iVar22;
            if (puVar24 == (undefined8 *)0x0) {
              puVar17 = (undefined8 *)0x0;
            }
            else {
              LOCK();
              *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
              UNLOCK();
              puVar17 = puVar24;
            }
            local_80 = (undefined8 *)CONCAT71(local_80._1_7_,1);
            FUN_1447439e4(puVar17);
            if (local_360 != 0) {
              if (puVar17 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                UNLOCK();
              }
              local_80 = puVar17;
              FUN_1432da764(local_360,&local_80);
            }
            puVar19 = local_158;
            if (local_138 != (undefined1 *)0x0) {
              puVar19 = local_138;
            }
            FUN_144717c65(puVar19,local_130 & 0xffffffff);
            if (local_138 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            lVar26 = local_370;
            if (puVar24 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar24 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar24)(puVar24,1);
              }
            }
          }
          else {
            local_70 = (undefined8 *)0x0;
            lStack_68 = 0;
            iVar22 = *(int *)(param_1 + 0x130);
            uVar16 = iVar22 + 0x1fU & 0xffffffe0;
            if (0 < (int)uVar16) {
              uVar14 = 0x80;
              if (0x80 < uVar16) {
                uVar14 = uVar16;
              }
              lStack_68 = (ulonglong)uVar14 << 0x20;
              FUN_1446efbd8(&local_80,0);
              iVar22 = *(int *)(param_1 + 0x130);
            }
            lStack_68 = CONCAT44(lStack_68._4_4_,iVar22);
            if (iVar22 != 0) {
              pvVar23 = local_350;
              if (*(void **)(param_1 + 0x128) != (void *)0x0) {
                pvVar23 = *(void **)(param_1 + 0x128);
              }
              puVar17 = local_70;
              if (local_70 == (undefined8 *)0x0) {
                puVar17 = &local_80;
              }
              memcpy(puVar17,pvVar23,(ulonglong)(iVar22 + 0x1fU >> 3 & 0xfffffffc));
            }
            local_60 = FUN_14009d2a0();
            local_58 = local_358;
            local_50 = uVar9;
            FUN_147697880(local_158,local_378,&local_2a0);
            FUN_1433184a2(local_158,&local_80);
            if (local_f8 != 0) {
              FUN_1400020a8();
            }
            lVar26 = local_370;
            if (local_70 != (undefined8 *)0x0) {
              FUN_1400020a8();
              lVar26 = local_370;
            }
          }
        }
      }
      lVar7 = local_368;
      if (CONCAT44(iStack_23c,local_240) != 0) {
        FUN_1400020a8();
        lVar7 = local_368;
      }
    }
  }
LAB_14330e7b6:
  puVar17 = local_300;
  if (*(char *)(param_1 + 0x138) == '\x01') {
    local_300 = (undefined8 *)CONCAT62(local_300._2_6_,*(undefined2 *)(lVar7 + 0x5c));
    puVar24 = local_300;
    local_300._6_2_ = SUB82(puVar17,6);
    local_300._0_5_ = (uint5)puVar24;
    local_300._0_6_ = (uint6)(uint5)local_300;
    local_2f8 = 0x6ff;
    local_2f4 = 0;
    local_2ac = *(undefined2 *)(param_1 + 0x66);
    local_320 = &local_2ac;
    local_318 = &local_2aa;
    FUN_147662ba4(&local_300,&local_2a0);
    FUN_140dad9c2(local_290,param_1 + 0xc0,2);
    FUN_14010b303(puVar8,local_268,1,local_158);
    uVar2 = local_2a0;
    uVar16 = (uint)local_2a0;
    if (uVar16 != 0xffff) {
      lVar7 = *(longlong *)(lVar26 + 0x270);
      lVar18 = FUN_14482820e(local_378);
      if ((*(uint *)(lVar18 + 0x20) != (uint)uVar2 && (int)uVar16 <= (int)*(uint *)(lVar18 + 0x20))
         && ((*(uint *)(lVar18 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0)) {
        if ((*(int *)(lVar26 + 0x29c) == 0) && (*(char *)(local_370 + 0x298) != '\0')) {
          local_138 = (undefined1 *)0x0;
          local_130 = 0x400000000;
          local_2a8._0_2_ = 0xffff;
          local_80 = &local_2a8;
          local_78 = (longlong)&local_2a8 + 2;
          FUN_147552f5e(local_1d8,local_158,&local_80);
          local_2a8 = (undefined8 *)CONCAT62(local_2a8._2_6_,local_2a0);
          local_80 = &local_2a8;
          local_78 = (longlong)&local_2a8 + 2;
          FUN_147552f5e(local_1d8,local_158,&local_80);
          puVar19 = (undefined1 *)0x0;
          if ((int)local_130 != 0) {
            puVar19 = local_158;
          }
          puVar17 = (undefined8 *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x308);
          puVar8 = (uint *)*puVar17;
          if (puVar8 != (uint *)0x0) goto LAB_14330f45f;
          while( true ) {
            uVar16 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar16 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar16 | 1;
              __tlregdtor(&LAB_143311b0b);
            }
            lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar10 = *(undefined4 **)(lVar26 + 0x310);
            *(undefined8 *)(lVar26 + 0x310) = 0;
            if (puVar10 == (undefined4 *)0x0) {
              puVar10 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar10 = 0xffffffff;
            *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar17 = puVar10;
            FUN_140217a48(puVar17);
            puVar8 = (uint *)*puVar17;
LAB_14330f45f:
            puVar24 = (undefined8 *)(*(longlong *)(puVar8 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar11 = (uint *)(puVar24 + 0x31);
            uVar16 = puVar8[0x12];
            if (puVar11 <= puVar8 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
              LOCK();
              uVar14 = *puVar8;
              *puVar8 = *puVar8 + uVar16 + 1;
              UNLOCK();
              if ((uVar14 ^ uVar16) != 0xffffffff) break;
              puVar8 = (uint *)*puVar17;
              *puVar8 = 0xffffffff;
              *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
              puVar8[0x12] = 0;
              *puVar17 = puVar8;
              puVar24 = (undefined8 *)((longlong)puVar8 + 0x5fU & 0xfffffffffffffff8);
              puVar11 = (uint *)(puVar24 + 0x31);
              uVar16 = 0;
              if (puVar11 <= puVar8 + 0x4000) {
                uVar16 = 1;
                goto LAB_14330f4df;
              }
            }
          }
          uVar16 = uVar16 + 1;
LAB_14330f4df:
          *(uint **)(puVar8 + 0x10) = puVar11;
          puVar8[0x12] = uVar16;
          FUN_1447247dc(puVar24,puVar19);
          *puVar24 = &PTR_FUN_14a4d89a0;
          FUN_147697e32(puVar24 + 0x15,local_378,&local_2a0);
          puVar24[0x2f] = local_358;
          puVar24[0x30] = lVar7;
          uVar16 = *(uint *)(puVar24 + 0x16);
          if (((ulonglong)uVar16 & 0xff) == 0xff) {
            uVar14 = uVar16 >> 10 & 3;
            iVar22 = 0;
            if ((uVar16 >> 9 & 1) == 0 || uVar14 < 2) {
              uVar27 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
              iVar22 = 0;
            }
            else {
              uVar27 = 2;
            }
          }
          else {
            iVar22 = (uVar16 >> 7 & 2 | uVar16 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar16 & 0xff) * 4);
            uVar27 = 5;
          }
          if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
          }
          puVar24[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar24[9] = puVar24;
          puVar24[10] = puVar24;
          lVar7 = *(longlong *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x2b8);
          if (lVar7 == 0) {
            uVar4 = 1;
            if ((char)uVar27 != '\x06') {
              uVar4 = uVar27;
            }
            uVar27 = uVar4;
            uVar9 = 0;
          }
          else {
            if ((char)uVar27 == '\x06') {
              uVar27 = *(ulonglong *)(lVar7 + 0x38) >> 0x3b;
            }
            uVar9 = *(undefined8 *)(lVar7 + 0x30);
          }
          puVar24[0xf] = uVar9;
          puVar24[0x10] = uVar27 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar24 + 0x1c) = iVar22;
          if (puVar24 == (undefined8 *)0x0) {
            puVar17 = (undefined8 *)0x0;
          }
          else {
            LOCK();
            *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
            UNLOCK();
            puVar17 = puVar24;
          }
          local_80 = (undefined8 *)CONCAT71(local_80._1_7_,1);
          FUN_1447439e4(puVar17);
          if (local_360 != 0) {
            if (puVar17 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
              UNLOCK();
            }
            local_80 = puVar17;
            FUN_1432da764(local_360,&local_80);
          }
          puVar19 = local_158;
          if (local_138 != (undefined1 *)0x0) {
            puVar19 = local_138;
          }
          FUN_144717c65(puVar19,local_130 & 0xffffffff);
          if (local_138 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          if (puVar24 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar24 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar24)(puVar24,1);
            }
          }
        }
        else {
          local_80 = local_358;
          local_78 = lVar7;
          FUN_147697e32(local_158,local_378,&local_2a0);
          FUN_143318756(local_158,&local_80);
          if (local_f8 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
    if (CONCAT44(iStack_23c,local_240) != 0) {
      FUN_1400020a8();
    }
  }
  puVar19 = local_168;
  if (local_168 == (undefined1 *)0x0) {
    puVar19 = local_188;
  }
  FUN_144717c65(puVar19,local_160 & 0xffffffff);
  if (local_168 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14009d40c(local_1d8);
LAB_14330dd85:
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014330e787:
  lVar18 = lVar18 + -0x20;
  puVar11 = puVar11 + 1;
  if ((ulonglong)(uVar16 & 0xffffffe0) + lVar18 == 0) goto LAB_14330e7b6;
  goto LAB_14330e77f;
}



// FUNCTION 1433100ba FUN_1433100ba body=1131 status=ok
// SIG undefined FUN_1433100ba(void)

undefined8 *
FUN_1433100ba(ushort *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined1 local_118 [32];
  undefined1 *local_f8;
  ulonglong local_f0;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar2 = *param_1;
  if (uVar2 != 0xffff) {
    lVar5 = FUN_14482820e(param_3);
    if ((*(uint *)(lVar5 + 0x20) != (uint)uVar2 && (int)(uint)uVar2 <= (int)*(uint *)(lVar5 + 0x20))
       && ((*(uint *)(lVar5 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0)) {
      if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
        local_f8 = (undefined1 *)0x0;
        local_f0 = 0x400000000;
        FUN_147696eec(param_1,param_4,local_118);
        puVar12 = (undefined1 *)0x0;
        if ((int)local_f0 != 0) {
          puVar12 = local_118;
        }
        puVar1 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar7 = (uint *)*puVar1;
        if (puVar7 != (uint *)0x0) goto LAB_14331027c;
        while( true ) {
          uVar9 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar9 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar9 | 1;
            __tlregdtor(&LAB_143311b0b);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar6 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar6 = 0xffffffff;
          *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
          puVar6[0x12] = 0;
          *puVar1 = puVar6;
          FUN_140217a48(puVar1);
          puVar7 = (uint *)*puVar1;
LAB_14331027c:
          puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x30);
          uVar9 = puVar7[0x12];
          if (puVar10 <= puVar7 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
            LOCK();
            uVar4 = *puVar7;
            *puVar7 = *puVar7 + uVar9 + 1;
            UNLOCK();
            if ((uVar4 ^ uVar9) != 0xffffffff) break;
            puVar7 = (uint *)*puVar1;
            *puVar7 = 0xffffffff;
            *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
            puVar7[0x12] = 0;
            *puVar1 = puVar7;
            puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
            puVar10 = (uint *)(puVar14 + 0x30);
            uVar9 = 0;
            if (puVar10 <= puVar7 + 0x4000) {
              uVar9 = 1;
              goto LAB_1433102fe;
            }
          }
        }
        uVar9 = uVar9 + 1;
LAB_1433102fe:
        *(uint **)(puVar7 + 0x10) = puVar10;
        puVar7[0x12] = uVar9;
        FUN_1447247dc(puVar14,puVar12);
        *puVar14 = &PTR_FUN_14a4d8960;
        FUN_147696e74(puVar14 + 0x15,param_3,param_1);
        puVar14[0x2f] = *param_5;
        uVar9 = *(uint *)(puVar14 + 0x16);
        if (((ulonglong)uVar9 & 0xff) == 0xff) {
          uVar4 = uVar9 >> 10 & 3;
          iVar11 = 0;
          if ((uVar9 >> 9 & 1) == 0 || uVar4 < 2) {
            uVar13 = (ulonglong)(byte)(&DAT_149e38edc)[uVar4];
            iVar11 = 0;
          }
          else {
            uVar13 = 2;
          }
        }
        else {
          iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
          uVar13 = 5;
        }
        if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
        }
        puVar14[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar14[9] = puVar14;
        puVar14[10] = puVar14;
        lVar5 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar5 == 0) {
          uVar3 = 1;
          if ((char)uVar13 != '\x06') {
            uVar3 = uVar13;
          }
          uVar13 = uVar3;
          uVar8 = 0;
        }
        else {
          if ((char)uVar13 == '\x06') {
            uVar13 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
          }
          uVar8 = *(undefined8 *)(lVar5 + 0x30);
        }
        puVar14[0xf] = uVar8;
        puVar14[0x10] = uVar13 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar14 + 0x1c) = iVar11;
        *param_2 = puVar14;
        if (puVar14 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
        }
        local_120 = CONCAT71(local_120._1_7_,1);
        FUN_1447439e4();
        puVar12 = local_118;
        if (local_f8 != (undefined1 *)0x0) {
          puVar12 = local_f8;
        }
        FUN_144717c65(puVar12,local_f0 & 0xffffffff);
        if (local_f8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_143310117;
      }
      local_120 = *param_5;
      FUN_147696e74(local_118,param_3,param_1);
      FUN_143317cb6(local_118,&local_120);
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  *param_2 = 0;
LAB_143310117:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143310526 FUN_143310526 body=2949 status=ok
// SIG undefined FUN_143310526(void)

undefined8 * FUN_143310526(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined2 *puVar16;
  int iVar17;
  uint *puVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined1 auStack_2e8 [32];
  ushort *local_2c8;
  ushort *local_2c0;
  ushort local_2b4 [4];
  undefined2 local_2ac;
  undefined2 local_2aa;
  undefined2 local_2a8;
  undefined2 local_2a6;
  undefined1 local_2a3;
  undefined4 local_2a0;
  undefined1 local_29c;
  undefined1 local_298 [64];
  undefined8 local_258;
  undefined8 local_250;
  undefined1 local_248 [32];
  undefined1 *local_228;
  ulonglong local_220;
  short local_218;
  short local_216;
  short local_214;
  uint local_200 [8];
  int local_1e0;
  int local_1dc;
  longlong local_1b0;
  undefined2 local_150 [16];
  undefined2 *local_130;
  undefined8 local_128;
  longlong local_e8;
  undefined1 local_78 [16];
  undefined2 *local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (*(short *)(param_3 + 0x24) == -1) {
    *param_2 = 0;
    goto LAB_14331055d;
  }
  lVar8 = FUN_14009d2a0();
  uVar2 = *(undefined2 *)(param_3 + 0x24);
  FUN_147545612(lVar8,local_150,param_3 + 0x24);
  local_2ac = uVar2;
  if (*(char *)(param_3 + 0x10) == '\x01') {
    local_2b4[2] = *(undefined2 *)(lVar8 + 0x48);
    local_2b4[3] = *(undefined2 *)(lVar8 + 0x5a);
    local_2aa = *(undefined2 *)(lVar8 + 0xf8);
    local_2a6 = *(undefined2 *)(lVar8 + 0xf4);
    local_2a8 = local_150[0];
    local_2a3 = 0;
    local_2a0 = 0x6ff;
    local_29c = 0;
    local_2b4[0] = *(ushort *)(param_3 + 0x26);
    local_2c8 = local_2b4;
    local_2b4[1] = *(undefined2 *)(param_1 + -2);
    local_2c0 = local_2b4 + 2;
    FUN_147662cce(local_2b4 + 2,&local_218);
    local_258 = 0;
    local_250 = 0x400000000;
    local_228 = (undefined1 *)0x0;
    local_220 = 0x400000000;
    if (((local_218 == -1) || (local_216 == -1)) || (local_214 == -1)) goto LAB_1433108a0;
    lVar4 = *(longlong *)(param_1 + -0x40);
    lVar8 = lVar4 + 0x28;
    cVar6 = FUN_14769849e(&local_218,lVar8);
    if (cVar6 == '\0') goto LAB_1433108a0;
    if ((*(int *)(lVar4 + 0x29c) == 0) && (*(char *)(lVar4 + 0x298) != '\0')) {
      local_130 = (undefined2 *)0x0;
      local_128 = 0x400000000;
      FUN_147698548(&local_218,local_298,local_150);
      puVar16 = (undefined2 *)0x0;
      if ((int)local_128 != 0) {
        puVar16 = local_150;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar9 = (uint *)*puVar1;
      if (puVar9 != (uint *)0x0) goto LAB_143310c64;
      while( true ) {
        uVar14 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar14 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar14 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar1 = puVar10;
        FUN_140217a48(puVar1);
        puVar9 = (uint *)*puVar1;
LAB_143310c64:
        puVar22 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar18 = (uint *)(puVar22 + 0x36);
        uVar14 = puVar9[0x12];
        if (puVar18 <= puVar9 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
          LOCK();
          uVar7 = *puVar9;
          *puVar9 = *puVar9 + uVar14 + 1;
          UNLOCK();
          if ((uVar7 ^ uVar14) != 0xffffffff) break;
          puVar9 = (uint *)*puVar1;
          *puVar9 = 0xffffffff;
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar1 = puVar9;
          puVar22 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar22 + 0x36);
          uVar14 = 0;
          if (puVar18 <= puVar9 + 0x4000) {
            uVar14 = 1;
            goto LAB_143310ce6;
          }
        }
      }
      uVar14 = uVar14 + 1;
LAB_143310ce6:
      *(uint **)(puVar9 + 0x10) = puVar18;
      puVar9[0x12] = uVar14;
      FUN_1447247dc(puVar22,puVar16);
      *puVar22 = &PTR_FUN_14a4d89b0;
      FUN_143318ab2(puVar22 + 0x15,lVar8,&local_218);
      FUN_1433189fa(puVar22 + 0x30,param_3,param_4);
      uVar14 = *(uint *)(puVar22 + 0x17);
      if (((ulonglong)uVar14 & 0xff) == 0xff) {
        uVar7 = uVar14 >> 10 & 3;
        iVar21 = 0;
        if ((uVar14 >> 9 & 1) == 0 || uVar7 < 2) {
          uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar7];
          iVar21 = 0;
        }
        else {
          uVar19 = 2;
        }
      }
      else {
        iVar21 = (uVar14 >> 7 & 2 | uVar14 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar14 & 0xff) * 4);
        uVar19 = 5;
      }
      if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
      }
      puVar22[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar22[9] = puVar22;
      puVar22[10] = puVar22;
      lVar8 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar8 == 0) {
        uVar5 = 1;
        if ((char)uVar19 != '\x06') {
          uVar5 = uVar19;
        }
        uVar19 = uVar5;
        uVar11 = 0;
      }
      else {
        if ((char)uVar19 == '\x06') {
          uVar19 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar8 + 0x30);
      }
      puVar22[0xf] = uVar11;
      puVar22[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar22 + 0x1c) = iVar21;
      *param_2 = puVar22;
      uVar11 = 0;
      if (puVar22 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
        UNLOCK();
        uVar11 = *param_2;
      }
      local_78[0] = 1;
      FUN_1447439e4(uVar11);
      goto LAB_143310fe8;
    }
    FUN_1433189fa(local_78,param_3,param_4);
    FUN_143318ab2(local_150,lVar8,&local_218);
    FUN_143318bdc(local_150,local_78);
LAB_14331095e:
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    *param_2 = 0;
LAB_14331097b:
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_2aa = *(undefined2 *)(lVar8 + 0xf8);
    local_2b4[3] = *(undefined2 *)(lVar8 + 0x5a);
    local_2a6 = *(undefined2 *)(lVar8 + 0xf4);
    local_2a8 = local_150[0];
    local_2a3 = 0;
    local_2a0 = 0x6ff;
    local_29c = 0;
    local_2b4[0] = *(ushort *)(param_3 + 0x26);
    local_2b4[1] = *(undefined2 *)(param_1 + -2);
    FUN_147698892(&local_218);
    lVar8 = 0;
    do {
      iVar21 = local_1e0;
      uVar3 = *(ushort *)((longlong)local_2b4 + lVar8);
      iVar13 = uVar3 + 1;
      iVar20 = iVar13 - local_1e0;
      if (iVar20 != 0 && local_1e0 <= iVar13) {
        if (local_1e0 == 0) {
LAB_1433107b8:
          if (local_1dc <= (int)(uint)uVar3) {
            local_1dc = 0x100;
            FUN_14497ddce(local_200,local_1e0);
            iVar13 = local_1e0 + iVar20;
          }
          iVar17 = iVar13 + 0x1f;
          if (-1 < iVar13) {
            iVar17 = iVar13;
          }
          local_1e0 = iVar13;
          iVar13 = local_1e0;
          if (iVar13 % 0x20 != 0) {
            bVar12 = -(char)(iVar13 % 0x20);
            local_200[iVar17 >> 5] = (local_200[iVar17 >> 5] << (bVar12 & 0x1f)) >> (bVar12 & 0x1f);
            iVar13 = local_1e0;
          }
        }
        else {
          iVar17 = local_1e0 + 0x1e;
          if (-1 < local_1e0 + -1) {
            iVar17 = local_1e0 + -1;
          }
          if (iVar17 >> 5 != (uint)(uVar3 >> 5)) goto LAB_1433107b8;
        }
        local_1e0 = iVar13;
        FUN_1447c45ca(local_200,iVar21,iVar20,0);
      }
      local_200[uVar3 >> 5] = local_200[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
      lVar8 = lVar8 + 2;
    } while (lVar8 != 4);
    local_258 = 0;
    local_250 = 0x400000000;
    local_228 = (undefined1 *)0x0;
    local_220 = 0x400000000;
    if ((local_216 != -1) && (local_214 != -1)) {
      lVar4 = *(longlong *)(param_1 + -0x40);
      lVar8 = lVar4 + 0x28;
      cVar6 = FUN_147698954(&local_218,lVar8);
      if (cVar6 != '\0') {
        if ((*(int *)(lVar4 + 0x29c) != 0) || (*(char *)(lVar4 + 0x298) == '\0')) {
          FUN_1433189fa(local_78,param_3,param_4);
          FUN_1433195e6(local_150,lVar8,&local_218);
          FUN_143319710(local_150,local_78);
          goto LAB_14331095e;
        }
        local_130 = (undefined2 *)0x0;
        local_128 = 0x400000000;
        FUN_1476989c6(&local_218,local_298,local_150);
        puVar16 = (undefined2 *)0x0;
        if ((int)local_128 != 0) {
          puVar16 = local_150;
        }
        puVar1 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar9 = (uint *)*puVar1;
        if (puVar9 != (uint *)0x0) goto LAB_143310a7a;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143311b0b);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar1 = puVar10;
          FUN_140217a48(puVar1);
          puVar9 = (uint *)*puVar1;
LAB_143310a7a:
          puVar22 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar22 + 0x36);
          uVar14 = puVar9[0x12];
          if (puVar18 <= puVar9 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
            LOCK();
            uVar7 = *puVar9;
            *puVar9 = *puVar9 + uVar14 + 1;
            UNLOCK();
            if ((uVar7 ^ uVar14) != 0xffffffff) break;
            puVar9 = (uint *)*puVar1;
            *puVar9 = 0xffffffff;
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar1 = puVar9;
            puVar22 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar22 + 0x36);
            uVar14 = 0;
            if (puVar18 <= puVar9 + 0x4000) {
              uVar14 = 1;
              goto LAB_143310afc;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_143310afc:
        *(uint **)(puVar9 + 0x10) = puVar18;
        puVar9[0x12] = uVar14;
        FUN_1447247dc(puVar22,puVar16);
        *puVar22 = &PTR_FUN_14a4d89c0;
        FUN_1433195e6(puVar22 + 0x15,lVar8,&local_218);
        FUN_1433189fa(puVar22 + 0x30,param_3,param_4);
        uVar14 = *(uint *)(puVar22 + 0x17);
        if (((ulonglong)uVar14 & 0xff) == 0xff) {
          uVar7 = uVar14 >> 10 & 3;
          iVar21 = 0;
          if ((uVar14 >> 9 & 1) == 0 || uVar7 < 2) {
            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar7];
            iVar21 = 0;
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          iVar21 = (uVar14 >> 7 & 2 | uVar14 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar14 & 0xff) * 4);
          uVar19 = 5;
        }
        if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
        }
        puVar22[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar22[9] = puVar22;
        puVar22[10] = puVar22;
        lVar8 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar8 == 0) {
          uVar5 = 1;
          if ((char)uVar19 != '\x06') {
            uVar5 = uVar19;
          }
          uVar19 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar19 == '\x06') {
            uVar19 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar8 + 0x30);
        }
        puVar22[0xf] = uVar11;
        puVar22[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar22 + 0x1c) = iVar21;
        *param_2 = puVar22;
        uVar11 = 0;
        if (puVar22 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
          UNLOCK();
          uVar11 = *param_2;
        }
        local_78[0] = 1;
        FUN_1447439e4(uVar11);
LAB_143310fe8:
        puVar16 = local_150;
        if (local_130 != (undefined2 *)0x0) {
          puVar16 = local_130;
        }
        FUN_144717c65(puVar16,(int)local_128);
        local_68 = local_130;
        goto LAB_14331097b;
      }
    }
LAB_1433108a0:
    *param_2 = 0;
  }
  puVar15 = local_228;
  if (local_228 == (undefined1 *)0x0) {
    puVar15 = local_248;
  }
  FUN_144717c65(puVar15,local_220 & 0xffffffff);
  if (local_228 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14009d40c(local_298);
  if (local_1b0 != 0) {
    FUN_1400020a8();
  }
LAB_14331055d:
  if ((local_48 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433110ac FUN_1433110ac body=45 status=ok
// SIG undefined FUN_1433110ac(void)

longlong FUN_1433110ac(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433110da FUN_1433110da body=45 status=ok
// SIG undefined FUN_1433110da(void)

longlong FUN_1433110da(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143311108 FUN_143311108 body=45 status=ok
// SIG undefined FUN_143311108(void)

longlong FUN_143311108(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143311136 FUN_143311136 body=45 status=ok
// SIG undefined FUN_143311136(void)

longlong FUN_143311136(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143311164 FUN_143311164 body=45 status=ok
// SIG undefined FUN_143311164(void)

longlong FUN_143311164(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_145a18a12(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14331119c FUN_14331119c body=45 status=ok
// SIG undefined FUN_14331119c(void)

longlong FUN_14331119c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_14094e6de(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433111ca FUN_1433111ca body=45 status=ok
// SIG undefined FUN_1433111ca(void)

longlong FUN_1433111ca(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433111f8 FUN_1433111f8 body=45 status=ok
// SIG undefined FUN_1433111f8(void)

longlong FUN_1433111f8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143311226 FUN_143311226 body=45 status=ok
// SIG undefined FUN_143311226(void)

longlong FUN_143311226(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143311254 FUN_143311254 body=45 status=ok
// SIG undefined FUN_143311254(void)

longlong FUN_143311254(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143311282 FUN_143311282 body=45 status=ok
// SIG undefined FUN_143311282(void)

longlong FUN_143311282(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433112b0 FUN_1433112b0 body=45 status=ok
// SIG undefined FUN_1433112b0(void)

longlong FUN_1433112b0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433112de FUN_1433112de body=45 status=ok
// SIG undefined FUN_1433112de(void)

longlong FUN_1433112de(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_145c5215c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14331130c FUN_14331130c body=45 status=ok
// SIG undefined FUN_14331130c(void)

longlong FUN_14331130c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14331133a FUN_14331133a body=45 status=ok
// SIG undefined FUN_14331133a(void)

longlong FUN_14331133a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x68;
  FUN_1458ea2d8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143311402 FUN_143311402 body=73 status=ok
// SIG undefined FUN_143311402(void)

undefined8 * FUN_143311402(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d6d60;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_147664bd8(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14331144c FUN_14331144c body=181 status=ok
// SIG undefined FUN_14331144c(void)

void FUN_14331144c(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x18) + 0xfa);
  iVar5 = uVar2 + 1;
  iVar3 = *(int *)(param_3 + 0x20);
  iVar7 = iVar5 - iVar3;
  if (iVar7 == 0 || iVar5 < iVar3) goto LAB_1433114cf;
  if (iVar3 == 0) {
LAB_14331148f:
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
    if (iVar6 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14331148f;
    *(int *)(param_3 + 0x20) = iVar5;
  }
  FUN_1447c45ca(param_3,iVar3,iVar7,0);
LAB_1433114cf:
  puVar1 = (uint *)(param_3 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 143311502 FUN_143311502 body=1164 status=ok
// SIG undefined FUN_143311502(void)

void FUN_143311502(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  int local_dc;
  int local_d8;
  int local_d4;
  longlong local_d0;
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  int local_a0;
  longlong local_90;
  int local_88;
  longlong local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0xfa))
      goto LAB_143311563;
      plVar9 = plVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_143311563:
  local_d4 = *(int *)(param_2 + 0x14);
  if (local_d4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar12 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar12 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x18) + 0xfc))
      goto LAB_1433115af;
      plVar12 = plVar12 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar12 = (longlong *)0x0;
LAB_1433115af:
  local_d0 = *plVar9;
  local_d8 = *(int *)(param_2 + 0x14);
  if (local_d8 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar12 + 1));
  }
  LOCK();
  *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar14 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar14 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x10) + 0x4e))
      goto LAB_143311607;
      plVar14 = plVar14 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar14 = (longlong *)0x0;
LAB_143311607:
  lVar6 = *plVar12;
  local_dc = *(int *)(param_2 + 0x14);
  local_c8 = plVar9;
  if (local_dc == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar14 + 1));
  }
  LOCK();
  *(int *)(plVar14 + 3) = (int)plVar14[3] + 1;
  UNLOCK();
  local_c0 = *plVar14;
  FUN_140fc2f5e(param_2,&local_78,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0xea));
  FUN_140fc2f5e(param_2,&local_90,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0xee));
  FUN_140fc2f5e(param_2,&local_a8,*(undefined2 *)(*(longlong *)(param_1 + 0x18) + 0xf0));
  local_e8 = (ulonglong)*(ushort *)(param_2 + 0xe);
  if (local_e8 != 0) {
    local_e8 = (ulonglong)((uint)*(ushort *)(param_2 + 0xe) * 2);
    uVar15 = 0;
    do {
      puVar11 = (undefined8 *)(local_d0 + uVar15 * 8);
      *puVar11 = 0;
      puVar11[1] = 0;
      iVar3 = *(int *)(lVar6 + 4 + uVar15 * 4);
      if ((iVar3 == 0) || (uVar4 = *(uint *)(lVar6 + uVar15 * 4), (int)uVar4 < 0)) {
LAB_14331185f:
        lVar13 = 0;
      }
      else {
        lVar13 = 0;
        if ((int)uVar4 < DAT_14c9647dc) {
          plVar9 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if (((plVar9 == (longlong *)0x0) || ((int)plVar9[2] != iVar3)) ||
             ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) goto LAB_14331185f;
          lVar13 = *plVar9;
        }
      }
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
      lVar8 = (ulonglong)*(ushort *)(local_c0 + uVar15 * 2) * 0x128;
      lVar5 = *(longlong *)(lVar7 + 0x100 + lVar8);
      plVar9 = *(longlong **)(lVar7 + 0x108 + lVar8);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
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
      iVar3 = *(int *)(lVar5 + 0x1c);
      if ((iVar3 == 0) || (uVar4 = *(uint *)(lVar5 + 0x18), (int)uVar4 < 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        if ((int)uVar4 < DAT_14c9647dc) {
          puVar11 = (undefined8 *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if (((puVar11 == (undefined8 *)0x0) || (*(int *)(puVar11 + 2) != iVar3)) ||
             ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) {
            uVar10 = 0;
          }
          else {
            uVar10 = *puVar11;
          }
        }
      }
      lVar7 = FUN_1402ad3be(DAT_14cb0d2b0,uVar10,1);
      if ((lVar13 != 0) && (lVar7 != 0)) {
        uVar10 = FUN_1448e494c(lVar7,lVar13);
        FUN_140ca0f3c(&local_b8,uVar10);
        lVar13 = local_b8;
        if (DAT_14c950c29 == '\x01') {
          if (local_b8 == 0) {
            lVar13 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar13 = local_b8;
          }
        }
        *(longlong *)(local_d0 + uVar15 * 8) = lVar13;
        *(undefined8 *)(local_d0 + 8 + uVar15 * 8) = local_b0;
      }
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
      uVar15 = uVar15 + 2;
    } while (local_e8 != uVar15);
  }
  if (local_a8 != 0) {
    LOCK();
    *(int *)(local_a8 + 0x18) = *(int *)(local_a8 + 0x18) + -1;
    UNLOCK();
    if (local_a0 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_a8 + 8));
    }
  }
  plVar9 = local_c8;
  if (local_90 != 0) {
    LOCK();
    *(int *)(local_90 + 0x18) = *(int *)(local_90 + 0x18) + -1;
    UNLOCK();
    if (local_88 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_90 + 8));
    }
  }
  if (local_78 != 0) {
    LOCK();
    *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + -1;
    UNLOCK();
    if (local_70 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_78 + 8));
    }
  }
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 3) = (int)plVar14[3] + -1;
    UNLOCK();
    if (local_dc == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar14 + 1));
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 3) = (int)plVar12[3] + -1;
    UNLOCK();
    if (local_d8 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar12 + 1));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (local_d4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar9 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143311990 FUN_143311990 body=77 status=ok
// SIG undefined FUN_143311990(void)

undefined8 * FUN_143311990(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a4d6ae0;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x25) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433119de FUN_1433119de body=300 status=ok
// SIG undefined FUN_1433119de(void)

void FUN_1433119de(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_58 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_50 = lVar3;
  iVar5 = FUN_1403b8464(&local_58,0);
  lVar4 = local_50;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_48 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_48 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_14766731c(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_14766731c(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
      }
      iVar5 = FUN_1403b8464(&local_58,iVar5 + 1);
      local_48 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_58 != 0) {
    if (*(char *)(local_50 + 0x270) == '\0') {
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143311b32 FUN_143311b32 body=282 status=ok
// SIG undefined FUN_143311b32(void)

undefined8 * FUN_143311b32(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143311c4c FUN_143311c4c body=86 status=ok
// SIG undefined FUN_143311c4c(void)

void FUN_143311c4c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1433119de(param_1 + 0x15);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143311c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143311ca2 FUN_143311ca2 body=1 status=ok
// SIG undefined FUN_143311ca2(void)

void FUN_143311ca2(void)

{
  return;
}



// FUNCTION 143311ca4 FUN_143311ca4 body=300 status=ok
// SIG undefined FUN_143311ca4(void)

void FUN_143311ca4(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_58 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_50 = lVar3;
  iVar5 = FUN_1403b8464(&local_58,0);
  lVar4 = local_50;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_48 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_48 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_147667778(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_147667778(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
      }
      iVar5 = FUN_1403b8464(&local_58,iVar5 + 1);
      local_48 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_58 != 0) {
    if (*(char *)(local_50 + 0x270) == '\0') {
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143311dd2 FUN_143311dd2 body=282 status=ok
// SIG undefined FUN_143311dd2(void)

undefined8 * FUN_143311dd2(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143311eec FUN_143311eec body=86 status=ok
// SIG undefined FUN_143311eec(void)

void FUN_143311eec(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143311ca4(param_1 + 0x15);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143311f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143311f42 FUN_143311f42 body=1 status=ok
// SIG undefined FUN_143311f42(void)

void FUN_143311f42(void)

{
  return;
}



// FUNCTION 143311f44 FUN_143311f44 body=300 status=ok
// SIG undefined FUN_143311f44(void)

void FUN_143311f44(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_58 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_50 = lVar3;
  iVar5 = FUN_1403b8464(&local_58,0);
  lVar4 = local_50;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_48 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_48 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_147667d04(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_147667d04(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
      }
      iVar5 = FUN_1403b8464(&local_58,iVar5 + 1);
      local_48 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_58 != 0) {
    if (*(char *)(local_50 + 0x270) == '\0') {
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143312072 FUN_143312072 body=282 status=ok
// SIG undefined FUN_143312072(void)

undefined8 * FUN_143312072(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14331218c FUN_14331218c body=86 status=ok
// SIG undefined FUN_14331218c(void)

void FUN_14331218c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143311f44(param_1 + 0x15);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001433121d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1433121e2 FUN_1433121e2 body=300 status=ok
// SIG undefined FUN_1433121e2(void)

void FUN_1433121e2(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_58 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_50 = lVar3;
  iVar5 = FUN_1403b8464(&local_58,0);
  lVar4 = local_50;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_48 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_48 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_147668670(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_147668670(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
      }
      iVar5 = FUN_1403b8464(&local_58,iVar5 + 1);
      local_48 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_58 != 0) {
    if (*(char *)(local_50 + 0x270) == '\0') {
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143312310 FUN_143312310 body=282 status=ok
// SIG undefined FUN_143312310(void)

undefined8 * FUN_143312310(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14331242a FUN_14331242a body=86 status=ok
// SIG undefined FUN_14331242a(void)

void FUN_14331242a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1433121e2(param_1 + 0x15);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143312476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143312480 FUN_143312480 body=1 status=ok
// SIG undefined FUN_143312480(void)

void FUN_143312480(void)

{
  return;
}



// FUNCTION 143312482 FUN_143312482 body=300 status=ok
// SIG undefined FUN_143312482(void)

void FUN_143312482(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_58 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_50 = lVar3;
  iVar5 = FUN_1403b8464(&local_58,0);
  lVar4 = local_50;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_48 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_48 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_147668c68(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_147668c68(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
      }
      iVar5 = FUN_1403b8464(&local_58,iVar5 + 1);
      local_48 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_58 != 0) {
    if (*(char *)(local_50 + 0x270) == '\0') {
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433125b0 FUN_1433125b0 body=282 status=ok
// SIG undefined FUN_1433125b0(void)

undefined8 * FUN_1433125b0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1433126ca FUN_1433126ca body=86 status=ok
// SIG undefined FUN_1433126ca(void)

void FUN_1433126ca(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143312482(param_1 + 0x15);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143312716. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143312720 FUN_143312720 body=300 status=ok
// SIG undefined FUN_143312720(void)

void FUN_143312720(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_58 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_50 = lVar3;
  iVar5 = FUN_1403b8464(&local_58,0);
  lVar4 = local_50;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_48 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_48 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_147669376(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_147669376(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
      }
      iVar5 = FUN_1403b8464(&local_58,iVar5 + 1);
      local_48 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_58 != 0) {
    if (*(char *)(local_50 + 0x270) == '\0') {
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14331284e FUN_14331284e body=282 status=ok
// SIG undefined FUN_14331284e(void)

undefined8 * FUN_14331284e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143312968 FUN_143312968 body=86 status=ok
// SIG undefined FUN_143312968(void)

void FUN_143312968(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143312720(param_1 + 0x15);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001433129b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1433129be FUN_1433129be body=300 status=ok
// SIG undefined FUN_1433129be(void)

void FUN_1433129be(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_58 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_50 = lVar3;
  iVar5 = FUN_1403b8464(&local_58,0);
  lVar4 = local_50;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_48 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_48 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_14766999e(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_14766999e(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
      }
      iVar5 = FUN_1403b8464(&local_58,iVar5 + 1);
      local_48 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_58 != 0) {
    if (*(char *)(local_50 + 0x270) == '\0') {
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143312aec FUN_143312aec body=282 status=ok
// SIG undefined FUN_143312aec(void)

undefined8 * FUN_143312aec(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143312c06 FUN_143312c06 body=86 status=ok
// SIG undefined FUN_143312c06(void)

void FUN_143312c06(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1433129be(param_1 + 0x15);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143312c52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143312c5c FUN_143312c5c body=2638 status=ok
// SIG undefined FUN_143312c5c(void)

void FUN_143312c5c(longlong *param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  uint *param_5,longlong param_6,longlong *param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  double *pdVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  undefined8 unaff_RBP;
  undefined7 uVar16;
  longlong *plVar17;
  code **ppcVar18;
  ulonglong uVar19;
  int *piVar20;
  byte bVar21;
  uint uVar22;
  longlong lVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  double dVar28;
  float fVar29;
  undefined4 unaff_XMM6_Db;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  code *local_170;
  undefined1 *local_168;
  code **local_160;
  code *local_158;
  code *local_150;
  undefined4 local_13c;
  longlong local_138;
  longlong local_130;
  code *local_128 [12];
  undefined4 local_c4;
  ulonglong local_c0;
  code *local_b8 [2];
  undefined8 *local_a8;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_5[1] == 0) {
LAB_143312d13:
    plVar14 = (longlong *)0x0;
  }
  else {
    uVar22 = *param_5;
    plVar14 = (longlong *)0x0;
    if ((-1 < (int)uVar22) && ((int)uVar22 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar12 + 2) != param_5[1] || ((*(uint *)(puVar12 + 1) & 0x10200000) != 0))))
      goto LAB_143312d13;
      plVar14 = (longlong *)*puVar12;
    }
  }
  local_128[0] = (code *)((ulonglong)local_128[0] & 0xffffffffffffff00);
  FUN_14766eb1e(*(undefined8 *)(*param_1 + 0xe0),local_128,plVar14);
  dVar28 = *(double *)(param_5 + 2);
  if ((dVar28 != (double)*(float *)(plVar14 + 0x96)) ||
     (NAN(dVar28) || NAN((double)*(float *)(plVar14 + 0x96)))) {
    FUN_14342e4a4(plVar14,(float)dVar28);
  }
  dVar28 = *(double *)(param_5 + 4);
  if ((dVar28 != (double)*(float *)(plVar14 + 0x9a)) ||
     (NAN(dVar28) || NAN((double)*(float *)(plVar14 + 0x9a)))) {
    FUN_14342df16(plVar14,(float)dVar28);
  }
  *(byte *)((longlong)plVar14 + 0x491) =
       *(byte *)((longlong)plVar14 + 0x491) & 0xfb | *(char *)(param_4 + 0x5f1) << 2;
  uVar16 = (undefined7)((ulonglong)unaff_RBP >> 8);
  lVar9 = CONCAT71(uVar16,1);
  if (param_2 == 0) {
    lVar9 = CONCAT71(uVar16,plVar14[0x24] != 0);
  }
  lVar8 = *param_1;
  if (param_4 == 0) {
    uVar22 = 0;
    uVar10 = 0;
  }
  else {
    uVar22 = *(uint *)(param_4 + 0xc);
    if ((int)uVar22 < DAT_14c9647dc) {
      lVar23 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
    }
    else {
      lVar23 = 0;
    }
    uVar10 = (ulonglong)*(uint *)(lVar23 + 0x10);
    if (*(uint *)(lVar23 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      uVar15 = DAT_14c964868 + 1;
      bVar24 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      local_130 = lVar9;
      if (bVar24) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar15);
      }
      LOCK();
      uVar7 = *(uint *)(lVar23 + 0x10);
      bVar24 = uVar7 == 0;
      if (bVar24) {
        *(uint *)(lVar23 + 0x10) = uVar15;
        uVar7 = 0;
      }
      UNLOCK();
      if (bVar24) {
        uVar7 = uVar15;
      }
      uVar10 = (ulonglong)uVar7;
      lVar9 = local_130;
    }
  }
  local_c0 = (ulonglong)uVar22 | uVar10 << 0x20;
  local_c4 = param_3;
  iVar6 = FUN_14766c6a4((longlong *)(lVar8 + 0x90));
  if (iVar6 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar6 * 0x168 + *(longlong *)(lVar8 + 0x90);
  }
  lVar23 = lVar8 + 0x10;
  if (lVar8 == 0) {
    lVar23 = 0;
  }
  local_130 = lVar23;
  if (lVar23 != 0) {
    plVar17 = plVar14 + 0x55;
    FUN_14766ec20(lVar23,plVar17);
    FUN_14766ed28(lVar23 + 0x50,plVar17);
    FUN_14766ee5a(lVar23 + 0xa0,plVar17);
    FUN_14766ef62(lVar23 + 0xf0);
  }
  uVar10 = *(ulonglong *)(param_4 + 0x98);
  uVar19 = uVar10 & 0xff;
  lVar8 = FUN_14073751e();
  if (DAT_14c951858 == 0) {
    local_128[0] = FUN_1449e2820;
    local_150 = FUN_14081d0ea;
    local_158 = FUN_14081d0ea;
    local_168 = &LAB_1468c5283;
    local_170 = FUN_142809da0;
    local_178 = L"Engine";
    local_180 = 0x400000000;
    local_188 = 0x10000000;
    local_190 = 8;
    local_198 = 0x50;
    local_160 = local_128;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar23 = *(longlong *)(param_4 + 0x20);
  if (lVar23 == 0) {
    lVar13 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
         (lVar13 = lVar23,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8
          ) != lVar8 + 0x30)) {
        lVar13 = 0;
      }
    } while ((lVar13 == 0) && (lVar23 = *(longlong *)(lVar23 + 0x20), lVar23 != 0));
  }
  lVar8 = *(longlong *)(lVar13 + 0x118);
  lVar23 = 0;
  if ((int)uVar19 != 2) {
    lVar23 = (longlong)(((ulonglong)(uVar19 != 1) << 0x20) + uVar10) >> 0x20;
  }
  plVar17 = *(longlong **)(param_4 + 0x100);
  lVar13 = *(longlong *)(param_6 + 0x18);
  iVar6 = *(int *)(param_6 + 0x24);
  fVar29 = 0.0;
  if (SBORROW4(0,iVar6)) {
    piVar20 = (int *)(param_6 + 4);
    if (*(int *)(param_6 + 0x20) == 0) {
      piVar20 = (int *)(param_6 + 0x10);
    }
    iVar6 = *piVar20;
    fVar29 = (float)piVar20[1];
  }
  dVar28 = (double)(int)((ulonglong)lVar13 >> 0x20);
  fVar29 = (float)((double)(float)(((double)((lVar13 >> 0x20) * (longlong)*(int *)(param_4 + 0x108))
                                   + (double)((ulonglong)dVar28 & 0x8000000000000000)) /
                                  (double)(int)lVar13) +
                  (((double)((longlong)iVar6 * (lVar13 >> 0x20)) + (double)fVar29 * dVar28) /
                   (double)(int)lVar13 -
                  (double)(float)(((double)((lVar8 >> 0x20) * lVar23) +
                                  (double)((ulonglong)(double)(int)((ulonglong)lVar8 >> 0x20) &
                                          0x8000000000000000)) / (double)(int)lVar8)));
  if (plVar17 != (longlong *)0x0 && 0.0 <= fVar29) {
    fVar25 = (float)(**(code **)(*plVar17 + 0x2c8))(plVar17);
    fVar26 = 0.0;
    if (0.0 <= fVar25) {
      fVar26 = fVar25;
    }
    if (((*(char *)(param_4 + 0x5f0) == '\0') && (fVar26 < fVar29)) &&
       ((fVar26 != 0.0 || (NAN(fVar26))))) {
      (**(code **)(*plVar14 + 0x600))(plVar14);
      goto LAB_143313494;
    }
    if (0.0 < fVar26) {
      uVar27 = FUN_1447c7e44(CONCAT44(unaff_XMM6_Db,fVar29));
      fVar29 = (float)uVar27;
      unaff_XMM6_Db = (undefined4)((ulonglong)uVar27 >> 0x20);
    }
  }
  plVar1 = plVar14 + 0x55;
  uVar27 = (**(code **)(plVar14[0x55] + 0xa8))(plVar1);
  plVar2 = (longlong *)plVar14[0x8c];
  local_13c = (undefined4)CONCAT71((int7)((ulonglong)uVar27 >> 8),1);
  if ((param_7 == (longlong *)0x0) || (lVar8 = (**(code **)(*param_7 + 0x180))(param_7), lVar8 == 0)
     ) {
    local_138 = 0;
LAB_143313201:
    if (((byte)uVar27 & plVar2 == plVar17) == 0) {
      bVar21 = 0;
      goto LAB_143313213;
    }
  }
  else {
    local_138 = lVar8;
    if (((*(longlong *)(lVar8 + 0x30) == 0) ||
        (plVar3 = *(longlong **)(*(longlong *)(lVar8 + 0x30) + 0x2b0), plVar3 == (longlong *)0x0))
       || ((fVar26 = (float)(**(code **)(*plVar3 + 0x668))(), 1e-08 < ABS(fVar26 + -1.0) &&
           ((DAT_14c76101c & 1) != 0)))) {
LAB_1433131f9:
      local_13c = 0;
      goto LAB_143313201;
    }
    if (*(longlong *)(lVar8 + 0x1d8) == 0) {
      if ((DAT_14cb0d2b0 == 0) || (*(longlong *)(DAT_14cb0d2b0 + 0xf50) == 0)) {
        lVar23 = 0;
      }
      else {
        if (*(longlong *)(DAT_14cb0d2b0 + 0xf60) != 0) {
          lVar8 = *(longlong *)(DAT_14cb0d2b0 + 0xf50) + 0x90;
          goto LAB_143313671;
        }
        lVar23 = 0;
        lVar8 = local_138;
      }
    }
    else {
      lVar8 = lVar8 + 0x1d0;
LAB_143313671:
      lVar23 = FUN_1479735a4(lVar8);
      lVar8 = local_138;
    }
    pdVar11 = (double *)(lVar23 + 0x5a0);
    if (DAT_14cab5b48 == 0) {
      pdVar11 = (double *)(lVar8 + 0x6e8);
    }
    if (lVar23 == 0) {
      pdVar11 = (double *)(lVar8 + 0x6e8);
    }
    if (((char)param_5[7] != '\x01') || (ABS(DAT_14c761018) <= 1e-08)) goto LAB_1433131f9;
    bVar21 = 1;
    local_13c = 0;
    if (ABS(((float)param_5[6] + fVar29) - (float)*pdVar11) <= DAT_14c761018) goto LAB_143313201;
LAB_143313213:
    *(byte *)(plVar14 + 0x92) = *(byte *)(plVar14 + 0x92) & 0xf7 | (char)lVar9 * '\b';
    if (*(char *)(param_4 + 0x5f2) == '\x01') {
      lVar8 = *(longlong *)(param_4 + 0x5f8);
      if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar8);
      }
      plVar14[0x9c] = lVar8;
    }
    bVar4 = (**(code **)(*plVar1 + 0xa8))(plVar1);
    if ((bVar21 | bVar4) == 1) {
      (**(code **)(*plVar14 + 0x600))(plVar14);
    }
    if ((longlong *)plVar14[0x8c] != plVar17) {
      FUN_1479bcde8(plVar14,plVar17);
    }
    *(byte *)(plVar14 + 0x92) = *(byte *)(plVar14 + 0x92) & 0xbf;
    if (0.0 <= fVar29) {
      (**(code **)(*plVar14 + 0x5e8))(plVar14,CONCAT44(unaff_XMM6_Db,fVar29));
      if ((char)local_13c == '\0') {
        if (*(longlong *)(local_138 + 0x1d8) == 0) {
          if ((DAT_14cb0d2b0 == 0) || (*(longlong *)(DAT_14cb0d2b0 + 0xf50) == 0)) {
            lVar8 = 0;
          }
          else {
            if (*(longlong *)(DAT_14cb0d2b0 + 0xf60) != 0) {
              lVar8 = *(longlong *)(DAT_14cb0d2b0 + 0xf50) + 0x90;
              goto LAB_14331363c;
            }
            lVar8 = 0;
          }
        }
        else {
          lVar8 = local_138 + 0x1d0;
LAB_14331363c:
          lVar8 = FUN_1479735a4(lVar8);
        }
        pdVar11 = (double *)(lVar8 + 0x5a0);
        if (DAT_14cab5b48 == 0) {
          pdVar11 = (double *)(local_138 + 0x6e8);
        }
        if (lVar8 == 0) {
          pdVar11 = (double *)(local_138 + 0x6e8);
        }
        param_5[6] = (uint)(float)(*pdVar11 - (double)fVar29);
        *(undefined1 *)(param_5 + 7) = 1;
      }
    }
  }
  lVar8 = local_130;
  if (*(int *)(param_6 + 0x70) != 1) {
    lVar23 = (**(code **)(*plVar1 + 0x88))(plVar1);
    if (lVar23 == 0) {
      fVar29 = 0.05;
    }
    else {
      fVar26 = (float)DAT_14c759090;
      if (0.5 <= fVar26) {
        fVar26 = 0.5;
      }
      fVar29 = 0.05;
      if (0.05 <= fVar26 * 1.5) {
        fVar29 = fVar26 * 1.5;
      }
    }
    FUN_14342e55e(plVar14,fVar29);
  }
  cVar5 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  if (((lVar8 != 0) && (cVar5 != '\0')) && (iVar6 = *(int *)(lVar8 + 0x148), (longlong)iVar6 != 0))
  {
    lVar8 = *(longlong *)(lVar8 + 0x140);
    lVar23 = 0;
    do {
      (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(lVar8 + lVar23));
      lVar23 = lVar23 + 8;
    } while ((longlong)iVar6 * 8 != lVar23);
  }
  if (((char)lVar9 != '\0') && (lVar9 = (**(code **)(*plVar1 + 0x88))(plVar1), lVar9 != 0)) {
    plVar17 = plVar14 + 0x48;
    ppcVar18 = local_128;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *ppcVar18 = (code *)*plVar17;
      plVar17 = plVar17 + 1;
      ppcVar18 = ppcVar18 + 1;
    }
    local_b8[0] = (code *)0x0;
    local_a8 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    *local_a8 = &PTR_LAB_14a4d7240;
    ppcVar18 = local_128;
    plVar17 = local_a8 + 2;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *plVar17 = (longlong)*ppcVar18;
      ppcVar18 = ppcVar18 + 1;
      plVar17 = plVar17 + 1;
    }
    if (local_a8 + 2 != (longlong *)0x0) {
      local_b8[0] = FUN_14766f2d6;
    }
    FUN_147962214(lVar9,plVar14[0x175],local_b8);
  }
LAB_143313494:
  if ((local_70 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433136ac FUN_1433136ac body=299 status=ok
// SIG undefined FUN_1433136ac(void)

void FUN_1433136ac(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xe0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x30;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_14766f454(param_2,&local_70,param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433137d8 FUN_1433137d8 body=282 status=ok
// SIG undefined FUN_1433137d8(void)

undefined8 * FUN_1433137d8(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1433138f2 FUN_1433138f2 body=93 status=ok
// SIG undefined FUN_1433138f2(void)

void FUN_1433138f2(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1433136ac(param_1 + 0x15,param_1 + 0x33);
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143313945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143313950 FUN_143313950 body=299 status=ok
// SIG undefined FUN_143313950(void)

void FUN_143313950(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_14767019e(param_2,&local_70,param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143313a7c FUN_143313a7c body=282 status=ok
// SIG undefined FUN_143313a7c(void)

undefined8 * FUN_143313a7c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143313b96 FUN_143313b96 body=93 status=ok
// SIG undefined FUN_143313b96(void)

void FUN_143313b96(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143313950(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143313be9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143313bf4 FUN_143313bf4 body=299 status=ok
// SIG undefined FUN_143313bf4(void)

void FUN_143313bf4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x20;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_14767055a(param_2,&local_70,param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143313d20 FUN_143313d20 body=282 status=ok
// SIG undefined FUN_143313d20(void)

undefined8 * FUN_143313d20(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143313e3a FUN_143313e3a body=93 status=ok
// SIG undefined FUN_143313e3a(void)

void FUN_143313e3a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143313bf4(param_1 + 0x15,param_1 + 0x31);
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143313e8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143313e98 FUN_143313e98 body=313 status=ok
// SIG undefined FUN_143313e98(void)

void FUN_143313e98(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar3;
  iVar5 = FUN_1403b8464(&local_60,0);
  lVar4 = local_58;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_50 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_50 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_147671b6c(param_2,lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_147671b6c(param_2,lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
      }
      iVar5 = FUN_1403b8464(&local_60,iVar5 + 1);
      local_50 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143313fd2 FUN_143313fd2 body=300 status=ok
// SIG undefined FUN_143313fd2(void)

void FUN_143313fd2(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_58 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_50 = lVar3;
  iVar5 = FUN_1403b8464(&local_58,0);
  lVar4 = local_50;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_48 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_48 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_147671e98(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_147671e98(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
      }
      iVar5 = FUN_1403b8464(&local_58,iVar5 + 1);
      local_48 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_58 != 0) {
    if (*(char *)(local_50 + 0x270) == '\0') {
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143314100 FUN_143314100 body=300 status=ok
// SIG undefined FUN_143314100(void)

void FUN_143314100(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_58 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_50 = lVar3;
  iVar5 = FUN_1403b8464(&local_58,0);
  lVar4 = local_50;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_48 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_48 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_1476720ea(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_1476720ea(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
      }
      iVar5 = FUN_1403b8464(&local_58,iVar5 + 1);
      local_48 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_58 != 0) {
    if (*(char *)(local_50 + 0x270) == '\0') {
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14331422e FUN_14331422e body=300 status=ok
// SIG undefined FUN_14331422e(void)

void FUN_14331422e(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_58 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_50 = lVar3;
  iVar5 = FUN_1403b8464(&local_58,0);
  lVar4 = local_50;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_48 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_48 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_1476723ec(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_1476723ec(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
      }
      iVar5 = FUN_1403b8464(&local_58,iVar5 + 1);
      local_48 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_58 != 0) {
    if (*(char *)(local_50 + 0x270) == '\0') {
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14331435c FUN_14331435c body=300 status=ok
// SIG undefined FUN_14331435c(void)

void FUN_14331435c(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_58 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_50 = lVar3;
  iVar5 = FUN_1403b8464(&local_58,0);
  lVar4 = local_50;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_48 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_48 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_1476727a6(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_1476727a6(lVar3,*(undefined8 *)(param_1 + 0xd0),param_1);
      }
      iVar5 = FUN_1403b8464(&local_58,iVar5 + 1);
      local_48 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_58 != 0) {
    if (*(char *)(local_50 + 0x270) == '\0') {
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_50 + 0x264) = *(int *)(local_50 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14331448a FUN_14331448a body=311 status=ok
// SIG undefined FUN_14331448a(void)

void FUN_14331448a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_14767823a(param_2,&local_70,param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_14767a242(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433145c2 FUN_1433145c2 body=268 status=ok
// SIG undefined FUN_1433145c2(void)

void FUN_1433145c2(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x1260;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1260)) {
      uVar5 = uVar4 / 0x1260 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1260,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1433146ce FUN_1433146ce body=48 status=ok
// SIG undefined FUN_1433146ce(void)

void FUN_1433146ce(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x1260,0x10);
  }
  return;
}



// FUNCTION 1433146fe FUN_1433146fe body=282 status=ok
// SIG undefined FUN_1433146fe(void)

undefined8 * FUN_1433146fe(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143314818 FUN_143314818 body=116 status=ok
// SIG undefined FUN_143314818(void)

void FUN_143314818(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14331448a(0xa8,0x180);
    FUN_14767a606(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14331448a(param_1 + 0x15,param_1 + 0x30);
  FUN_14767a606(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143314881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1433148e2 FUN_1433148e2 body=31 status=ok
// SIG undefined FUN_1433148e2(void)

undefined8 FUN_1433148e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14331490a FUN_14331490a body=390 status=ok
// SIG undefined FUN_14331490a(void)

void FUN_14331490a(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == *(short *)(*(longlong *)(param_1 + 0x10) + 0xfa))
      goto LAB_14331494d;
      puVar7 = puVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_14331494d:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(puVar7 + 1));
  }
  LOCK();
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    lVar4 = *(longlong *)(param_2 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)(lVar4 + 0x1e) == *(short *)(param_1 + 0x1a)) goto LAB_143314984;
      lVar4 = lVar4 + 0x20;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  lVar4 = 0;
LAB_143314984:
  _Dst = (void *)*puVar7;
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(lVar4 + 8));
  }
  LOCK();
  *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    lVar5 = *(longlong *)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)(lVar5 + 0x1e) == *(short *)(param_1 + 0x18)) goto LAB_1433149c2;
      lVar5 = lVar5 + 0x20;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  lVar5 = 0;
LAB_1433149c2:
  iVar3 = *(int *)(param_2 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(lVar5 + 8));
  }
  LOCK();
  *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xe) != 0) {
    memset(_Dst,0,(ulonglong)*(ushort *)(param_2 + 0xe) << 4);
  }
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0x18) = *(int *)(lVar5 + 0x18) + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(lVar5 + 8));
    }
  }
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 8));
    }
  }
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000143314a89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 143314a90 FUN_143314a90 body=31 status=ok
// SIG undefined FUN_143314a90(void)

undefined8 FUN_143314a90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143314ab8 FUN_143314ab8 body=31 status=ok
// SIG undefined FUN_143314ab8(void)

undefined8 FUN_143314ab8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143314aeb FUN_143314aeb body=98 status=ok
// SIG undefined FUN_143314aeb(void)

longlong FUN_143314aeb(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x108);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  else if (lVar1 == 0) {
    return 0;
  }
  FUN_14759464c(param_1);
  lVar2 = FUN_147593d5c(param_1,lVar1 + 0x2c);
  if (lVar2 == 0) {
    FUN_147592202(param_1,lVar1);
  }
  return lVar1;
}



// FUNCTION 143314b4e FUN_143314b4e body=307 status=ok
// SIG undefined FUN_143314b4e(void)

void FUN_143314b4e(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14767e4d8(param_2);
  lVar3 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar3;
  iVar5 = FUN_1403b8464(&local_60,0);
  lVar4 = local_58;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_50 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_50 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_147680d64(param_2,lVar3,param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_147680d64(param_2,lVar3,param_1);
      }
      iVar5 = FUN_1403b8464(&local_60,iVar5 + 1);
      local_50 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143314c82 FUN_143314c82 body=282 status=ok
// SIG undefined FUN_143314c82(void)

undefined8 * FUN_143314c82(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143314d9c FUN_143314d9c body=93 status=ok
// SIG undefined FUN_143314d9c(void)

void FUN_143314d9c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143314b4e(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143314def. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143314dfa FUN_143314dfa body=296 status=ok
// SIG undefined FUN_143314dfa(void)

void FUN_143314dfa(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_147687fec(&local_70,param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143314f24 FUN_143314f24 body=282 status=ok
// SIG undefined FUN_143314f24(void)

undefined8 * FUN_143314f24(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14331503e FUN_14331503e body=86 status=ok
// SIG undefined FUN_14331503e(void)

void FUN_14331503e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143314dfa(param_1 + 0x15);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014331508a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143315094 FUN_143315094 body=395 status=ok
// SIG undefined FUN_143315094(void)

void FUN_143315094(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar4 = 0;
  if ((ulonglong)*(uint *)*param_2 != 0xffffffff) {
    lVar4 = *(longlong *)(lVar1 + 0x20) + (ulonglong)*(uint *)*param_2;
  }
  uVar2 = (ulonglong)*(ushort *)(lVar1 + 0xe);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      lVar1 = *(longlong *)(lVar4 + uVar3 * 8);
      if (lVar1 != 0) {
        if (DAT_14cac7648 == 0) {
          local_50 = FUN_144a7958c;
          local_60 = FUN_14081d0ea;
          local_68 = FUN_143242436;
          local_70 = &local_50;
          local_78 = &LAB_14789ef1f;
          local_80 = &LAB_1417b008f;
          local_88 = L"Engine";
          local_90 = 0x8000000000;
          local_98 = 0x10000004;
          local_a0 = 0x10;
          local_a8 = 0x2b0;
          FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
        }
        if ((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)) {
          FUN_14765bee0(*(undefined8 *)(param_3 + 8),lVar1);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143315220 FUN_143315220 body=1 status=ok
// SIG undefined FUN_143315220(void)

void FUN_143315220(void)

{
  return;
}



// FUNCTION 143315222 FUN_143315222 body=29 status=ok
// SIG undefined FUN_143315222(void)

undefined8 FUN_143315222(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143315240 FUN_143315240 body=29 status=ok
// SIG undefined FUN_143315240(void)

undefined8 FUN_143315240(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143315276 FUN_143315276 body=325 status=ok
// SIG undefined FUN_143315276(void)

void FUN_143315276(longlong *param_1)

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



// FUNCTION 1433153bc FUN_1433153bc body=94 status=ok
// SIG undefined FUN_1433153bc(void)

void FUN_1433153bc(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
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
    FUN_140ee3645(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 14331541a FUN_14331541a body=248 status=ok
// SIG undefined FUN_14331541a(void)

void FUN_14331541a(longlong param_1,int param_2)

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
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143315512 FUN_143315512 body=31 status=ok
// SIG undefined FUN_143315512(void)

undefined8 FUN_143315512(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143315580 FUN_143315580 body=299 status=ok
// SIG undefined FUN_143315580(void)

void FUN_143315580(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_14768b632(param_2,&local_70,param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433156ac FUN_1433156ac body=282 status=ok
// SIG undefined FUN_1433156ac(void)

undefined8 * FUN_1433156ac(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1433157c6 FUN_1433157c6 body=116 status=ok
// SIG undefined FUN_1433157c6(void)

void FUN_1433157c6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143315580(0xa8,0x180);
    FUN_14768b966(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143315580(param_1 + 0x15,param_1 + 0x30);
  FUN_14768b966(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014331582f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14331583e FUN_14331583e body=31 status=ok
// SIG undefined FUN_14331583e(void)

undefined8 FUN_14331583e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143315866 FUN_143315866 body=31 status=ok
// SIG undefined FUN_143315866(void)

undefined8 FUN_143315866(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14331588e FUN_14331588e body=296 status=ok
// SIG undefined FUN_14331588e(void)

void FUN_14331588e(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_147691f80(&local_70,param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433159b8 FUN_1433159b8 body=282 status=ok
// SIG undefined FUN_1433159b8(void)

undefined8 * FUN_1433159b8(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143315ad2 FUN_143315ad2 body=86 status=ok
// SIG undefined FUN_143315ad2(void)

void FUN_143315ad2(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14331588e(param_1 + 0x15);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143315b1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143315b28 FUN_143315b28 body=296 status=ok
// SIG undefined FUN_143315b28(void)

void FUN_143315b28(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x20;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_147692466(&local_70,param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143315c52 FUN_143315c52 body=282 status=ok
// SIG undefined FUN_143315c52(void)

undefined8 * FUN_143315c52(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143315d6c FUN_143315d6c body=86 status=ok
// SIG undefined FUN_143315d6c(void)

void FUN_143315d6c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143315b28(param_1 + 0x15);
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143315db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143315dc2 FUN_143315dc2 body=29 status=ok
// SIG undefined FUN_143315dc2(void)

undefined8 FUN_143315dc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143315df4 FUN_143315df4 body=93 status=ok
// SIG undefined FUN_143315df4(void)

void FUN_143315df4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4d87b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143315e52 FUN_143315e52 body=93 status=ok
// SIG undefined FUN_143315e52(void)

void FUN_143315e52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4d87b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143315eb0 FUN_143315eb0 body=126 status=ok
// SIG undefined FUN_143315eb0(void)

void FUN_143315eb0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a4d87b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143315f1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143315f2e FUN_143315f2e body=39 status=ok
// SIG undefined FUN_143315f2e(void)

void FUN_143315f2e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0x92) == '\x01') {
    FUN_14765ecf2(lVar1);
  }
  FUN_14765fb6a(lVar1);
  return;
}



// FUNCTION 143315f56 FUN_143315f56 body=42 status=ok
// SIG undefined FUN_143315f56(void)

undefined1 FUN_143315f56(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(lVar1 + 0x92) == '\x01') {
    FUN_14765ecf2(lVar1);
  }
  FUN_14765fb6a(lVar1);
  return 1;
}



// FUNCTION 143315f80 FUN_143315f80 body=1146 status=ok
// SIG undefined FUN_143315f80(void)

undefined8 *
FUN_143315f80(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined1 *param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [32];
  undefined1 *local_f8;
  ulonglong local_f0;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((*param_1 != -1) && (param_1[1] != -1)) &&
     (cVar4 = FUN_147693e5c(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_f8 = (undefined1 *)0x0;
      local_f0 = 0x400000000;
      FUN_147694564(param_1,param_4,local_118);
      puVar12 = (undefined1 *)0x0;
      if ((int)local_f0 != 0) {
        puVar12 = local_118;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_143316143;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_143316143:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x31);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x31);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1433161c5;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1433161c5:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar12);
      *puVar14 = &PTR_FUN_14a4d8880;
      FUN_1476944ec(puVar14 + 0x15,param_3,param_1);
      *(undefined1 *)(puVar14 + 0x2f) = *param_5;
      puVar14[0x30] = param_6;
      uVar9 = *(uint *)(puVar14 + 0x16);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar13 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar13 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar13 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar13 != '\x06') {
          uVar3 = uVar13;
        }
        uVar13 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar13 == '\x06') {
          uVar13 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar13 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
      }
      local_128[0] = 1;
      FUN_1447439e4();
      puVar12 = local_118;
      if (local_f8 != (undefined1 *)0x0) {
        puVar12 = local_f8;
      }
      FUN_144717c65(puVar12,local_f0 & 0xffffffff);
      if (local_f8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143315fbf;
    }
    local_128[0] = *param_5;
    local_120 = param_6;
    FUN_1476944ec(local_118,param_3,param_1);
    FUN_1433168a0(local_118,local_128);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_143315fbf:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1433163fc FUN_1433163fc body=1187 status=ok
// SIG undefined FUN_1433163fc(void)

undefined8 *
FUN_1433163fc(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined1 *param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [32];
  undefined1 *local_f8;
  ulonglong local_f0;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((*param_1 != -1) && (param_1[1] != -1)) &&
     (cVar4 = FUN_14769436c(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_f8 = (undefined1 *)0x0;
      local_f0 = 0x400000000;
      FUN_147694830(param_1,param_4,local_118);
      puVar11 = (undefined1 *)0x0;
      if ((int)local_f0 != 0) {
        puVar11 = local_118;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1433165c1;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1433165c1:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x31);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x31);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_143316643;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_143316643:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar11);
      *puVar14 = &PTR_FUN_14a4d8890;
      FUN_1476947b8(puVar14 + 0x15,param_3,param_1);
      *(undefined1 *)(puVar14 + 0x2f) = *param_6;
      puVar14[0x30] = param_7;
      uVar9 = *(uint *)(puVar14 + 0x16);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar13 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar12 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar13 = 0;
        }
        else {
          uVar12 = 2;
        }
      }
      else {
        iVar13 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar12 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar12 != '\x06') {
          uVar3 = uVar12;
        }
        uVar12 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar12 == '\x06') {
          uVar12 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar12 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar13;
      *param_2 = puVar14;
      uVar8 = 0;
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        uVar8 = *param_2;
      }
      local_128[0] = 1;
      FUN_1447439e4(uVar8);
      if (param_5 != 0) {
        FUN_1476948e8(param_1,param_2,param_5);
      }
      puVar11 = local_118;
      if (local_f8 != (undefined1 *)0x0) {
        puVar11 = local_f8;
      }
      FUN_144717c65(puVar11,local_f0 & 0xffffffff);
      if (local_f8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14331643b;
    }
    local_128[0] = *param_6;
    local_120 = param_7;
    FUN_1476947b8(local_118,param_3,param_1);
    FUN_143316b44(local_118,local_128);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_14331643b:
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433168a0 FUN_1433168a0 body=299 status=ok
// SIG undefined FUN_1433168a0(void)

void FUN_1433168a0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_60 = param_1 + 0x10;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar3;
  iVar5 = FUN_1403b8464(&local_60,0);
  lVar4 = local_58;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_50 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_50 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_14769461c(param_2,lVar3,param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_14769461c(param_2,lVar3,param_1);
      }
      iVar5 = FUN_1403b8464(&local_60,iVar5 + 1);
      local_50 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433169cc FUN_1433169cc body=282 status=ok
// SIG undefined FUN_1433169cc(void)

undefined8 * FUN_1433169cc(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143316ae6 FUN_143316ae6 body=93 status=ok
// SIG undefined FUN_143316ae6(void)

void FUN_143316ae6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1433168a0(param_1 + 0x15,param_1 + 0x2f);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143316b39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143316b44 FUN_143316b44 body=313 status=ok
// SIG undefined FUN_143316b44(void)

void FUN_143316b44(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_60 = param_1 + 0x10;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar3;
  iVar5 = FUN_1403b8464(&local_60,0);
  lVar4 = local_58;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_50 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_50 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_147694966(param_2,lVar3,*(undefined8 *)(param_1 + 200),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_147694966(param_2,lVar3,*(undefined8 *)(param_1 + 200),param_1);
      }
      iVar5 = FUN_1403b8464(&local_60,iVar5 + 1);
      local_50 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143316c7e FUN_143316c7e body=282 status=ok
// SIG undefined FUN_143316c7e(void)

undefined8 * FUN_143316c7e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143316d98 FUN_143316d98 body=93 status=ok
// SIG undefined FUN_143316d98(void)

void FUN_143316d98(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143316b44(param_1 + 0x15,param_1 + 0x2f);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143316deb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143316df6 FUN_143316df6 body=1207 status=ok
// SIG undefined FUN_143316df6(void)

longlong *
FUN_143316df6(short *param_1,longlong *param_2,longlong param_3,undefined8 param_4,longlong param_5,
             undefined1 *param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined8 local_120;
  undefined1 local_118 [32];
  undefined1 *local_f8;
  ulonglong local_f0;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((*param_1 != -1) && (param_1[1] != -1)) &&
     (cVar3 = FUN_147694ddc(param_1,param_3), cVar3 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_f8 = (undefined1 *)0x0;
      local_f0 = 0x400000000;
      FUN_147694ec4(param_1,param_4,local_118);
      puVar11 = (undefined1 *)0x0;
      if ((int)local_f0 != 0) {
        puVar11 = local_118;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar6 = (uint *)*puVar1;
      if (puVar6 != (uint *)0x0) goto LAB_143316fb8;
      while( true ) {
        uVar8 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar8 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar8 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar5 = *(undefined4 **)(lVar13 + 0x310);
        *(undefined8 *)(lVar13 + 0x310) = 0;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar5 = 0xffffffff;
        *(undefined4 **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        FUN_140217a48(puVar1);
        puVar6 = (uint *)*puVar1;
LAB_143316fb8:
        puVar12 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar9 = (uint *)(puVar12 + 0x31);
        uVar8 = puVar6[0x12];
        if (puVar9 <= puVar6 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
          LOCK();
          uVar4 = *puVar6;
          *puVar6 = *puVar6 + uVar8 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar8) != 0xffffffff) break;
          puVar6 = (uint *)*puVar1;
          *puVar6 = 0xffffffff;
          *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
          puVar6[0x12] = 0;
          *puVar1 = puVar6;
          puVar12 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
          puVar9 = (uint *)(puVar12 + 0x31);
          uVar8 = 0;
          if (puVar9 <= puVar6 + 0x4000) {
            uVar8 = 1;
            goto LAB_14331703c;
          }
        }
      }
      uVar8 = uVar8 + 1;
LAB_14331703c:
      *(uint **)(puVar6 + 0x10) = puVar9;
      puVar6[0x12] = uVar8;
      FUN_1447247dc(puVar12,puVar11);
      *puVar12 = &PTR_FUN_14a4d89d8;
      FUN_147694e4c(puVar12 + 0x15,param_3,param_1);
      *(undefined1 *)(puVar12 + 0x2f) = *param_6;
      puVar12[0x30] = param_7;
      uVar8 = *(uint *)(puVar12 + 0x16);
      if (((ulonglong)uVar8 & 0xff) == 0xff) {
        uVar4 = uVar8 >> 10 & 3;
        iVar10 = 0;
        if ((uVar8 >> 9 & 1) == 0 || uVar4 < 2) {
          uVar14 = (ulonglong)(byte)(&DAT_149e38edc)[uVar4];
          iVar10 = 0;
        }
        else {
          uVar14 = 2;
        }
      }
      else {
        iVar10 = (uVar8 >> 7 & 2 | uVar8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar8 & 0xff) * 4);
        uVar14 = 5;
      }
      if (*(code **)(puVar12[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar12[0xe] + 0x18))(puVar12 + 0xe,puVar12 + 9);
      }
      puVar12[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar12[9] = puVar12;
      puVar12[10] = puVar12;
      lVar13 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar13 == 0) {
        uVar2 = 1;
        if ((char)uVar14 != '\x06') {
          uVar2 = uVar14;
        }
        uVar14 = uVar2;
        uVar7 = 0;
      }
      else {
        if ((char)uVar14 == '\x06') {
          uVar14 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
        }
        uVar7 = *(undefined8 *)(lVar13 + 0x30);
      }
      puVar12[0xf] = uVar7;
      puVar12[0x10] = uVar14 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar12 + 0x1c) = iVar10;
      *param_2 = (longlong)puVar12;
      if (puVar12 == (undefined8 *)0x0) {
        lVar13 = 0;
      }
      else {
        LOCK();
        *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
        UNLOCK();
        lVar13 = *param_2;
      }
      local_128 = CONCAT71(local_128._1_7_,1);
      FUN_1447439e4(lVar13);
      if (param_5 != 0) {
        if (lVar13 != 0) {
          LOCK();
          *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
          UNLOCK();
        }
        local_128 = lVar13;
        FUN_1432da764(param_5,&local_128);
      }
      puVar11 = local_118;
      if (local_f8 != (undefined1 *)0x0) {
        puVar11 = local_f8;
      }
      FUN_144717c65(puVar11,local_f0 & 0xffffffff);
      if (local_f8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143316e35;
    }
    local_128 = CONCAT71(local_128._1_7_,*param_6);
    local_120 = param_7;
    FUN_147694e4c(local_118,param_3,param_1);
    FUN_143317752(local_118,&local_128);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_143316e35:
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433172ae FUN_1433172ae body=1187 status=ok
// SIG undefined FUN_1433172ae(void)

undefined8 *
FUN_1433172ae(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined1 *param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined1 auStack_148 [32];
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined1 local_118 [32];
  undefined1 *local_f8;
  ulonglong local_f0;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((*param_1 != -1) && (param_1[1] != -1)) &&
     (cVar4 = FUN_1476951d2(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_f8 = (undefined1 *)0x0;
      local_f0 = 0x400000000;
      FUN_1476952ba(param_1,param_4,local_118);
      puVar11 = (undefined1 *)0x0;
      if ((int)local_f0 != 0) {
        puVar11 = local_118;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_143317473;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_143317473:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x31);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x31);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1433174f5;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1433174f5:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar11);
      *puVar14 = &PTR_FUN_14a4d89e8;
      FUN_147695242(puVar14 + 0x15,param_3,param_1);
      *(undefined1 *)(puVar14 + 0x2f) = *param_6;
      puVar14[0x30] = param_7;
      uVar9 = *(uint *)(puVar14 + 0x16);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar13 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar12 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar13 = 0;
        }
        else {
          uVar12 = 2;
        }
      }
      else {
        iVar13 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar12 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar12 != '\x06') {
          uVar3 = uVar12;
        }
        uVar12 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar12 == '\x06') {
          uVar12 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar12 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar13;
      *param_2 = puVar14;
      uVar8 = 0;
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        uVar8 = *param_2;
      }
      local_128[0] = 1;
      FUN_1447439e4(uVar8);
      if (param_5 != 0) {
        FUN_147695372(param_1,param_2,param_5);
      }
      puVar11 = local_118;
      if (local_f8 != (undefined1 *)0x0) {
        puVar11 = local_f8;
      }
      FUN_144717c65(puVar11,local_f0 & 0xffffffff);
      if (local_f8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1433172ed;
    }
    local_128[0] = *param_6;
    local_120 = param_7;
    FUN_147695242(local_118,param_3,param_1);
    FUN_143317a04(local_118,local_128);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_1433172ed:
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143317752 FUN_143317752 body=313 status=ok
// SIG undefined FUN_143317752(void)

void FUN_143317752(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_60 = param_1 + 0x10;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar3;
  iVar5 = FUN_1403b8464(&local_60,0);
  lVar4 = local_58;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_50 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_50 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_147694f7c(param_2,lVar3,*(undefined8 *)(param_1 + 200),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_147694f7c(param_2,lVar3,*(undefined8 *)(param_1 + 200),param_1);
      }
      iVar5 = FUN_1403b8464(&local_60,iVar5 + 1);
      local_50 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14331788c FUN_14331788c body=282 status=ok
// SIG undefined FUN_14331788c(void)

undefined8 * FUN_14331788c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1433179a6 FUN_1433179a6 body=93 status=ok
// SIG undefined FUN_1433179a6(void)

void FUN_1433179a6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143317752(param_1 + 0x15,param_1 + 0x2f);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001433179f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143317a04 FUN_143317a04 body=313 status=ok
// SIG undefined FUN_143317a04(void)

void FUN_143317a04(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_60 = param_1 + 0x10;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar3;
  iVar5 = FUN_1403b8464(&local_60,0);
  lVar4 = local_58;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_50 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_50 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_1476953f0(param_2,lVar3,*(undefined8 *)(param_1 + 200),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_1476953f0(param_2,lVar3,*(undefined8 *)(param_1 + 200),param_1);
      }
      iVar5 = FUN_1403b8464(&local_60,iVar5 + 1);
      local_50 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143317b3e FUN_143317b3e body=282 status=ok
// SIG undefined FUN_143317b3e(void)

undefined8 * FUN_143317b3e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143317c58 FUN_143317c58 body=93 status=ok
// SIG undefined FUN_143317c58(void)

void FUN_143317c58(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143317a04(param_1 + 0x15,param_1 + 0x2f);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143317cab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143317cb6 FUN_143317cb6 body=299 status=ok
// SIG undefined FUN_143317cb6(void)

void FUN_143317cb6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xc0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x10;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_147696fa8(param_2,&local_70,param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143317de2 FUN_143317de2 body=282 status=ok
// SIG undefined FUN_143317de2(void)

undefined8 * FUN_143317de2(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143317efc FUN_143317efc body=93 status=ok
// SIG undefined FUN_143317efc(void)

void FUN_143317efc(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143317cb6(param_1 + 0x15,param_1 + 0x2f);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143317f4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143317f5a FUN_143317f5a body=299 status=ok
// SIG undefined FUN_143317f5a(void)

void FUN_143317f5a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1476974fa(param_2,&local_70,param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143318086 FUN_143318086 body=282 status=ok
// SIG undefined FUN_143318086(void)

undefined8 * FUN_143318086(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1433181a0 FUN_1433181a0 body=93 status=ok
// SIG undefined FUN_1433181a0(void)

void FUN_1433181a0(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143317f5a(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001433181f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1433181fe FUN_1433181fe body=299 status=ok
// SIG undefined FUN_1433181fe(void)

void FUN_1433181fe(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xc0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x10;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_14769777c(param_2,&local_70,param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14331832a FUN_14331832a body=282 status=ok
// SIG undefined FUN_14331832a(void)

undefined8 * FUN_14331832a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143318444 FUN_143318444 body=93 status=ok
// SIG undefined FUN_143318444(void)

void FUN_143318444(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1433181fe(param_1 + 0x15,param_1 + 0x2f);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143318497. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1433184a2 FUN_1433184a2 body=299 status=ok
// SIG undefined FUN_1433184a2(void)

void FUN_1433184a2(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xc0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x10;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1476978f8(param_2,&local_70,param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433185ce FUN_1433185ce body=282 status=ok
// SIG undefined FUN_1433185ce(void)

undefined8 * FUN_1433185ce(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1433186e8 FUN_1433186e8 body=110 status=ok
// SIG undefined FUN_1433186e8(void)

void FUN_1433186e8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1433184a2(param_1 + 0x15,param_1 + 0x2f);
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014331874c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143318756 FUN_143318756 body=299 status=ok
// SIG undefined FUN_143318756(void)

void FUN_143318756(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xc0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x10;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_147697eaa(param_2,&local_70,param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143318882 FUN_143318882 body=282 status=ok
// SIG undefined FUN_143318882(void)

undefined8 * FUN_143318882(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14331899c FUN_14331899c body=93 status=ok
// SIG undefined FUN_14331899c(void)

void FUN_14331899c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143318756(param_1 + 0x15,param_1 + 0x2f);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001433189ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1433189fa FUN_1433189fa body=184 status=ok
// SIG undefined FUN_1433189fa(void)

longlong FUN_1433189fa(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x800000000;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 4);
  lVar3 = FUN_14009d2a0();
  *(undefined2 *)(param_1 + 0x2a) = *(undefined2 *)(lVar3 + 0x114);
  lVar3 = FUN_14009d2a0();
  *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(lVar3 + 0x116);
  lVar3 = FUN_14009d2a0();
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(lVar3 + 0x118);
  uVar1 = *(uint *)(param_2 + 1);
  _Src = (void *)*param_2;
  iVar2 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar2 + uVar1;
  if ((uint)(*(int *)(param_1 + 0x1c) - iVar2) < uVar1) {
    FUN_1475b3a76(param_1,iVar2);
  }
  else if (uVar1 == 0) {
    return param_1;
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar3 = param_1;
  }
  memcpy((void *)(lVar3 + (longlong)iVar2 * 2),_Src,(longlong)(int)uVar1 * 2);
  return param_1;
}



// FUNCTION 143318ab2 FUN_143318ab2 body=298 status=ok
// SIG undefined FUN_143318ab2(void)

undefined4 * FUN_143318ab2(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  iVar6 = param_3[0x26];
  uVar4 = iVar6 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar4) {
    uVar5 = 0x100;
    if (0x100 < uVar4) {
      uVar5 = uVar4;
    }
    param_1[0x27] = uVar5;
    FUN_14497ddce(param_1 + 0x1e,0);
    iVar6 = param_3[0x26];
  }
  param_1[0x26] = iVar6;
  if (iVar6 != 0) {
    memcpy(param_1 + 0x1e,param_3 + 0x1e,(ulonglong)(iVar6 + 0x1fU >> 3 & 0xfffffffc));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar6 = param_3[0x30];
  uVar4 = iVar6 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar4) {
    uVar5 = 0x100;
    if (0x100 < uVar4) {
      uVar5 = uVar4;
    }
    param_1[0x31] = uVar5;
    FUN_14497ddce(param_1 + 0x28,0);
    iVar6 = param_3[0x30];
  }
  param_1[0x30] = iVar6;
  if (iVar6 != 0) {
    memcpy(param_1 + 0x28,param_3 + 0x28,(ulonglong)(iVar6 + 0x1fU >> 3 & 0xfffffffc));
  }
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 143318bdc FUN_143318bdc body=949 status=ok
// SIG undefined FUN_143318bdc(void)

void FUN_143318bdc(short *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  short *psVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  char local_165;
  int local_164;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  short *local_148;
  undefined8 local_140;
  short *local_138;
  longlong local_130;
  int local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar12 = *(longlong *)(param_1 + 100);
  local_165 = *(char *)(lVar12 + 0x270);
  local_138 = param_1 + 0xc;
  if (local_165 == '\0') {
    *(int *)(lVar12 + 0x264) = *(int *)(lVar12 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar12 + 0x264) = *(int *)(lVar12 + 0x264) + 1;
    UNLOCK();
  }
  local_140 = param_2;
  local_130 = lVar12;
  local_128 = FUN_1403b8464(&local_138,0);
  local_164 = *(int *)(lVar12 + 0x10);
  psVar7 = param_1;
  if (local_128 != local_164) {
    do {
      local_148 = psVar7;
      lVar12 = local_130;
      psVar7 = local_148;
      if (local_165 == '\0') {
        local_160 = *(longlong *)(*(longlong *)(local_130 + 0x60) + (longlong)local_128 * 8);
        *(undefined4 *)(local_160 + 0x14) = 0;
      }
      else {
        local_160 = 0;
      }
      lVar13 = (longlong)local_128;
      FUN_1475b4978(*(undefined8 *)(*(longlong *)(local_130 + 0x60) + lVar13 * 8),&local_f0,
                    local_148[5]);
      FUN_1475b4978(*(undefined8 *)(*(longlong *)(lVar12 + 0x60) + lVar13 * 8),&local_108,psVar7[4])
      ;
      FUN_14762f08e(*(undefined8 *)(*(longlong *)(lVar12 + 0x60) + lVar13 * 8),&local_120,psVar7[3])
      ;
      lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x60) + lVar13 * 8);
      if (*(ushort *)(lVar4 + 0xc) != 0) {
        puVar9 = *(undefined8 **)(lVar4 + 0x28);
        lVar8 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
        do {
          if (*(short *)((longlong)puVar9 + 0x1e) == psVar7[2]) goto LAB_143318d09;
          puVar9 = puVar9 + 4;
          lVar8 = lVar8 + -0x20;
        } while (lVar8 != 0);
      }
      puVar9 = (undefined8 *)0x0;
LAB_143318d09:
      iVar1 = *(int *)(lVar4 + 0x14);
      if (iVar1 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(puVar9 + 1));
      }
      LOCK();
      *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
      UNLOCK();
      uVar5 = *puVar9;
      lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x60) + lVar13 * 8);
      if (*(ushort *)(lVar4 + 0xc) != 0) {
        puVar11 = *(undefined8 **)(lVar4 + 0x28);
        lVar8 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
        do {
          if (*(short *)((longlong)puVar11 + 0x1e) == psVar7[1]) goto LAB_143318d53;
          puVar11 = puVar11 + 4;
          lVar8 = lVar8 + -0x20;
        } while (lVar8 != 0);
      }
      puVar11 = (undefined8 *)0x0;
LAB_143318d53:
      iVar2 = *(int *)(lVar4 + 0x14);
      if (iVar2 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(puVar11 + 1));
      }
      LOCK();
      *(int *)(puVar11 + 3) = *(int *)(puVar11 + 3) + 1;
      UNLOCK();
      uVar6 = *puVar11;
      lVar4 = *(longlong *)(*(longlong *)(lVar12 + 0x60) + lVar13 * 8);
      if (*(ushort *)(lVar4 + 0xc) != 0) {
        puVar10 = *(undefined8 **)(lVar4 + 0x28);
        lVar8 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
        do {
          if (*(short *)((longlong)puVar10 + 0x1e) == *psVar7) goto LAB_143318da5;
          puVar10 = puVar10 + 4;
          lVar8 = lVar8 + -0x20;
        } while (lVar8 != 0);
      }
      puVar10 = (undefined8 *)0x0;
LAB_143318da5:
      iVar3 = *(int *)(lVar4 + 0x14);
      if (iVar3 == 1) {
        local_158 = lVar12;
        local_150 = lVar13;
        AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
        lVar12 = local_158;
        lVar13 = local_150;
      }
      LOCK();
      *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
      UNLOCK();
      local_c8 = *puVar10;
      local_90 = local_120;
      local_88 = local_118;
      local_120 = 0;
      local_80 = local_110;
      local_78 = local_108;
      local_70 = local_100;
      local_68 = local_f8;
      local_60 = local_f0;
      local_58 = local_e8;
      local_50 = local_e0;
      local_170 = local_e0;
      local_178 = local_f8;
      local_180 = local_110;
      local_188 = uVar5;
      local_d8 = puVar10;
      local_d0 = iVar3;
      local_c0 = puVar11;
      local_b8 = iVar2;
      local_b0 = uVar6;
      local_a8 = puVar9;
      local_a0 = iVar1;
      local_98 = uVar5;
      FUN_143318f92(local_140,*(undefined8 *)(*(longlong *)(lVar12 + 0x60) + lVar13 * 8));
      FUN_14769869c(&local_d8);
      if (local_160 != 0) {
        *(undefined4 *)(local_160 + 0x14) = 1;
      }
      local_128 = FUN_1403b8464(&local_138,local_128 + 1);
      psVar7 = local_148;
    } while (local_128 != local_164);
  }
  if (local_138 != (short *)0x0) {
    if (*(char *)(local_130 + 0x270) == '\0') {
      *(int *)(local_130 + 0x264) = *(int *)(local_130 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_130 + 0x264) = *(int *)(local_130 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143318f92 FUN_143318f92 body=1228 status=ok
// SIG undefined FUN_143318f92(void)

void FUN_143318f92(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8)

{
  undefined8 uVar1;
  double dVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  double dVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab5fec) && (FUN_144b3d300(&DAT_14cab5fec), DAT_14cab5fec == -1)) {
    plVar7 = (longlong *)FUN_14099c56c();
    lVar8 = plVar7[0x22];
    if (lVar8 == 0) {
      (**(code **)(*plVar7 + 1000))(plVar7);
      lVar8 = plVar7[0x22];
    }
    DAT_14cab5fe8 = *(undefined1 *)(lVar8 + 100);
    _Init_thread_footer(&DAT_14cab5fec);
  }
  uVar3 = *(ushort *)(param_2 + 0xc);
  if (uVar3 == 0) {
    bVar16 = false;
    bVar17 = true;
    bVar15 = false;
  }
  else {
    lVar8 = *(longlong *)(param_2 + 0x28);
    lVar10 = (ulonglong)uVar3 << 5;
    lVar11 = lVar8;
    do {
      if (*(short *)(lVar11 + 0x1e) == *(short *)(param_1 + 0x2e)) goto LAB_14331901b;
      lVar11 = lVar11 + 0x20;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
    lVar11 = 0;
LAB_14331901b:
    bVar15 = lVar11 != 0;
    lVar10 = (ulonglong)uVar3 << 5;
    lVar11 = lVar8;
    do {
      if (*(short *)(lVar11 + 0x1e) == *(short *)(param_1 + 0x2a)) goto LAB_143319044;
      lVar11 = lVar11 + 0x20;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
    lVar11 = 0;
LAB_143319044:
    bVar16 = lVar11 != 0;
    lVar11 = (ulonglong)uVar3 << 5;
    do {
      if (*(short *)(lVar8 + 0x1e) == *(short *)(param_1 + 0x2c)) goto LAB_143319064;
      lVar8 = lVar8 + 0x20;
      lVar11 = lVar11 + -0x20;
    } while (lVar11 != 0);
    lVar8 = 0;
LAB_143319064:
    bVar17 = lVar8 == 0;
  }
  uVar3 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar3 != 0) {
    bVar12 = bVar15 | bVar16;
    uVar9 = 0;
    do {
      if (*(short *)(param_4 + 2 + uVar9 * 4) == *(short *)(param_1 + 0x28)) {
        if (param_7 == 0) {
          uVar20 = 0;
          uVar21 = 0;
        }
        else {
          uVar1 = *(undefined8 *)(param_7 + uVar9 * 8);
          uVar20 = (undefined4)uVar1;
          uVar21 = (undefined4)((ulonglong)uVar1 >> 0x20);
        }
        dVar18 = 1.0;
        if (param_8 != 0) {
          dVar18 = *(double *)(param_8 + uVar9 * 8);
        }
        sVar4 = *(short *)(param_3 + uVar9 * 2);
        dVar2 = *(double *)(param_5 + uVar9 * 8);
        fVar19 = (float)dVar18;
        if (param_6 == 0) {
          bVar15 = false;
          iVar13 = -1;
        }
        else {
          iVar13 = *(int *)(param_6 + uVar9 * 4);
          if (iVar13 == -1 || bVar12 != 1) {
            bVar15 = false;
          }
          else {
            lVar8 = *(longlong *)(param_1 + 0x20);
            iVar5 = *(int *)(lVar8 + 0x20);
            *(uint *)(lVar8 + 0x20) = iVar5 + 1U;
            if (*(uint *)(lVar8 + 0x24) < iVar5 + 1U) {
              FUN_147698778((longlong *)(lVar8 + 0x18),iVar5);
            }
            lVar8 = *(longlong *)(lVar8 + 0x18);
            lVar11 = (longlong)iVar5 * 0x20;
            *(double *)(lVar8 + lVar11) = dVar2;
            *(float *)(lVar8 + 8 + lVar11) = fVar19;
            *(undefined8 *)(lVar8 + 0x10 + lVar11) = 0;
            *(int *)(lVar8 + 0x18 + lVar11) = iVar13;
            *(bool *)(lVar8 + 0x1c + lVar11) = bVar16;
            bVar15 = true;
          }
        }
        lVar8 = *(longlong *)(param_1 + 0x10);
        if (*(longlong *)(param_1 + 0x10) == 0) {
          lVar8 = param_1;
        }
        if ((longlong)*(int *)(param_1 + 0x18) != 0) {
          lVar11 = 0;
          do {
            if (*(short *)(lVar8 + lVar11) == sVar4) {
              lVar8 = *(longlong *)(param_1 + 0x20);
              if (bVar15) {
                iVar5 = *(int *)(lVar8 + 0x50);
                lVar11 = (longlong)iVar5;
                *(uint *)(lVar8 + 0x50) = iVar5 + 1U;
                if (*(uint *)(lVar8 + 0x54) < iVar5 + 1U) {
                  FUN_1476987fe((longlong *)(lVar8 + 0x48),iVar5);
                }
                lVar8 = *(longlong *)(lVar8 + 0x48);
                *(short *)(lVar8 + lVar11 * 0x28) = sVar4;
                *(double *)(lVar8 + 8 + lVar11 * 0x28) = dVar2;
                *(float *)(lVar8 + 0x10 + lVar11 * 0x28) = fVar19;
                *(undefined8 *)(lVar8 + 0x18 + lVar11 * 0x28) = 0;
                *(int *)(lVar8 + 0x20 + lVar11 * 0x28) = iVar13;
                *(bool *)(lVar8 + 0x24 + lVar11 * 0x28) = bVar16;
              }
              else {
                if (bVar16 == false) {
                  if (bVar17) {
                    plVar7 = (longlong *)(lVar8 + 0x28);
                    uVar14 = (ulonglong)*(int *)(lVar8 + 0x30);
                    uVar6 = *(int *)(lVar8 + 0x30) + 1;
                    *(uint *)(lVar8 + 0x30) = uVar6;
                    if (*(uint *)(lVar8 + 0x34) < uVar6) goto LAB_1433192b7;
                    goto LAB_143319279;
                  }
                  iVar13 = *(int *)(lVar8 + 0x40);
                  uVar14 = (ulonglong)iVar13;
                  *(uint *)(lVar8 + 0x40) = iVar13 + 1U;
                  if (*(uint *)(lVar8 + 0x44) < iVar13 + 1U) {
                    FUN_1476987fe((longlong *)(lVar8 + 0x38),iVar13);
                    bVar16 = false;
                  }
                  lVar8 = *(longlong *)(lVar8 + 0x38);
                  *(short *)(lVar8 + uVar14 * 0x28) = sVar4;
                  *(double *)(lVar8 + 8 + uVar14 * 0x28) = dVar2;
                  *(float *)(lVar8 + 0x10 + uVar14 * 0x28) = fVar19;
                  *(ulonglong *)(lVar8 + 0x18 + uVar14 * 0x28) = CONCAT44(uVar21,uVar20);
                }
                else {
                  plVar7 = (longlong *)(lVar8 + 0x38);
                  uVar14 = (ulonglong)*(int *)(lVar8 + 0x40);
                  uVar6 = *(int *)(lVar8 + 0x40) + 1;
                  *(uint *)(lVar8 + 0x40) = uVar6;
                  if (*(uint *)(lVar8 + 0x44) < uVar6) {
LAB_1433192b7:
                    FUN_1476987fe(plVar7,uVar14 & 0xffffffff);
                  }
LAB_143319279:
                  lVar8 = *plVar7;
                  *(short *)(lVar8 + uVar14 * 0x28) = sVar4;
                  *(double *)(lVar8 + 8 + uVar14 * 0x28) = dVar2;
                  *(float *)(lVar8 + 0x10 + uVar14 * 0x28) = fVar19;
                  *(undefined8 *)(lVar8 + 0x18 + uVar14 * 0x28) = 0;
                }
                *(undefined4 *)(lVar8 + 0x20 + uVar14 * 0x28) = 0xffffffff;
                *(undefined1 *)(lVar8 + 0x24 + uVar14 * 0x28) = 1;
              }
              goto LAB_14331933a;
            }
            lVar11 = lVar11 + 2;
          } while ((longlong)*(int *)(param_1 + 0x18) * 2 != lVar11);
        }
        dVar18 = (double)fVar19;
        if (bVar16 == false) {
          if (bVar17) {
            **(double **)(param_1 + 0x20) = dVar2 * dVar18 + **(double **)(param_1 + 0x20);
            *(float *)(*(longlong *)(param_1 + 0x20) + 8) =
                 fVar19 + *(float *)(*(longlong *)(param_1 + 0x20) + 8);
          }
          else {
            *(double *)(*(longlong *)(param_1 + 0x20) + 0x10) =
                 (dVar2 - (double)CONCAT44(uVar21,uVar20)) * dVar18 +
                 *(double *)(*(longlong *)(param_1 + 0x20) + 0x10);
          }
        }
        else {
          *(double *)(*(longlong *)(param_1 + 0x20) + 0x10) =
               dVar2 * dVar18 + *(double *)(*(longlong *)(param_1 + 0x20) + 0x10);
        }
      }
LAB_14331933a:
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar3);
  }
  return;
}



// FUNCTION 14331945e FUN_14331945e body=282 status=ok
// SIG undefined FUN_14331945e(void)

undefined8 * FUN_14331945e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143319578 FUN_143319578 body=110 status=ok
// SIG undefined FUN_143319578(void)

void FUN_143319578(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143318bdc(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001433195dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1433195e6 FUN_1433195e6 body=298 status=ok
// SIG undefined FUN_1433195e6(void)

undefined4 * FUN_1433195e6(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 6,param_3 + 6);
  *(undefined8 *)(param_1 + 0x26) = 0;
  iVar6 = param_3[0x26];
  uVar4 = iVar6 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar4) {
    uVar5 = 0x100;
    if (0x100 < uVar4) {
      uVar5 = uVar4;
    }
    param_1[0x27] = uVar5;
    FUN_14497ddce(param_1 + 0x1e,0);
    iVar6 = param_3[0x26];
  }
  param_1[0x26] = iVar6;
  if (iVar6 != 0) {
    memcpy(param_1 + 0x1e,param_3 + 0x1e,(ulonglong)(iVar6 + 0x1fU >> 3 & 0xfffffffc));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  iVar6 = param_3[0x30];
  uVar4 = iVar6 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar4) {
    uVar5 = 0x100;
    if (0x100 < uVar4) {
      uVar5 = uVar4;
    }
    param_1[0x31] = uVar5;
    FUN_14497ddce(param_1 + 0x28,0);
    iVar6 = param_3[0x30];
  }
  param_1[0x30] = iVar6;
  if (iVar6 != 0) {
    memcpy(param_1 + 0x28,param_3 + 0x28,(ulonglong)(iVar6 + 0x1fU >> 3 & 0xfffffffc));
  }
  *(longlong *)(param_1 + 0x32) = param_2;
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 143319710 FUN_143319710 body=808 status=ok
// SIG undefined FUN_143319710(void)

void FUN_143319710(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  char local_13d;
  int local_13c;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  longlong local_120;
  int local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar3 = *(longlong *)(param_1 + 200);
  local_13d = *(char *)(lVar3 + 0x270);
  local_128 = param_1 + 0x18;
  if (local_13d == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_130 = param_2;
  local_120 = lVar3;
  local_118 = FUN_1403b8464(&local_128,0);
  local_13c = *(int *)(lVar3 + 0x10);
  if (local_118 != local_13c) {
    do {
      lVar3 = local_120;
      if (local_13d == '\0') {
        local_138 = *(longlong *)(*(longlong *)(local_120 + 0x60) + (longlong)local_118 * 8);
        *(undefined4 *)(local_138 + 0x14) = 0;
      }
      else {
        local_138 = 0;
      }
      lVar9 = (longlong)local_118;
      FUN_1475b4978(*(undefined8 *)(*(longlong *)(local_120 + 0x60) + lVar9 * 8),&local_e0,
                    *(undefined2 *)(param_1 + 10));
      FUN_1475b4978(*(undefined8 *)(*(longlong *)(lVar3 + 0x60) + lVar9 * 8),&local_f8,
                    *(undefined2 *)(param_1 + 8));
      FUN_14762f08e(*(undefined8 *)(*(longlong *)(lVar3 + 0x60) + lVar9 * 8),&local_110,
                    *(undefined2 *)(param_1 + 6));
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + lVar9 * 8);
      if (*(ushort *)(lVar4 + 0xc) != 0) {
        puVar8 = *(undefined8 **)(lVar4 + 0x28);
        lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
        do {
          if (*(short *)((longlong)puVar8 + 0x1e) == *(short *)(param_1 + 4)) goto LAB_143319835;
          puVar8 = puVar8 + 4;
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != 0);
      }
      puVar8 = (undefined8 *)0x0;
LAB_143319835:
      iVar1 = *(int *)(lVar4 + 0x14);
      if (iVar1 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
      }
      LOCK();
      *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
      UNLOCK();
      uVar5 = *puVar8;
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + lVar9 * 8);
      if (*(ushort *)(lVar4 + 0xc) != 0) {
        puVar7 = *(undefined8 **)(lVar4 + 0x28);
        lVar6 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
        do {
          if (*(short *)((longlong)puVar7 + 0x1e) == *(short *)(param_1 + 2)) goto LAB_14331987c;
          puVar7 = puVar7 + 4;
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != 0);
      }
      puVar7 = (undefined8 *)0x0;
LAB_14331987c:
      iVar2 = *(int *)(lVar4 + 0x14);
      if (iVar2 == 1) {
        AcquireSRWLockShared((PSRWLOCK)(puVar7 + 1));
      }
      LOCK();
      *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
      UNLOCK();
      local_b0 = *puVar7;
      local_c8 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar3 + 0x60) + lVar9 * 8) + 0x18);
      local_90 = local_110;
      local_88 = local_108;
      local_110 = 0;
      local_80 = local_100;
      local_78 = local_f8;
      local_70 = local_f0;
      local_f8 = 0;
      local_68 = local_e8;
      local_60 = local_e0;
      local_58 = local_d8;
      local_e0 = 0;
      local_50 = local_d0;
      local_150 = local_d0;
      local_158 = local_e8;
      local_160 = local_100;
      local_168 = uVar5;
      local_c0 = puVar7;
      local_b8 = iVar2;
      local_a8 = puVar8;
      local_a0 = iVar1;
      local_98 = uVar5;
      FUN_143318f92(local_130,*(undefined8 *)(*(longlong *)(lVar3 + 0x60) + lVar9 * 8));
      FUN_147698af8(&local_c8);
      if (local_138 != 0) {
        *(undefined4 *)(local_138 + 0x14) = 1;
      }
      local_118 = FUN_1403b8464(&local_128,local_118 + 1);
    } while (local_118 != local_13c);
  }
  if (local_128 != 0) {
    if (*(char *)(local_120 + 0x270) == '\0') {
      *(int *)(local_120 + 0x264) = *(int *)(local_120 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_120 + 0x264) = *(int *)(local_120 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143319a3a FUN_143319a3a body=282 status=ok
// SIG undefined FUN_143319a3a(void)

undefined8 * FUN_143319a3a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143311b0b);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143319b54 FUN_143319b54 body=110 status=ok
// SIG undefined FUN_143319b54(void)

void FUN_143319b54(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143319710(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143319bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143319bc2 FUN_143319bc2 body=2353 status=ok
// SIG undefined FUN_143319bc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143319bc2(void)

{
  char cVar1;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _DAT_14cab58ac = 0xffffffff;
  DAT_14cab58b0 = 0;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4c85d0,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4c8a90,1,0);
  uStack_50 = 0;
  local_48 = 0;
  local_58 = 8;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4c9c90,2,&PTR_FUN_14a4c9b50);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4ca130,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4ca4d0,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4ca870,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4cac20,1,0);
  DAT_14cab5a50 = 0;
  _DAT_14cab5a58 = 0x400000000;
  atexit((_func_5014 *)&LAB_143303859);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4cafe0,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4cb390,1,0);
  DAT_14cab5aa8 = 0;
  _DAT_14cab5ab0 = 0x400000000;
  atexit((_func_5014 *)&LAB_14330542b);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4cb750,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4cbb00,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4cbee0,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4cc280,1,0);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cab5b18,L"Sequencer.Audio.MaxDesyncTolerance",&DAT_14c761018,
                L"Controls how many seconds an audio track can be out of sync in a Sequence before we attempt a time correction.\n"
               );
  atexit(FUN_143307614);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cab5b28,L"Sequencer.Audio.IgnoreAudioSyncDuringWorldTimeDilation",
                &DAT_14c76101c,L"Ignore correcting audio if there is world time dilation.\n");
  atexit(FUN_143307659);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cab5b38,L"Sequencer.Audio.UseAudioClockForAudioDesync",&DAT_14cab5b48,
                L"When set to 1, we will use the audio render thread directly to query whether audio has went out of sync with the sequence.\n"
               );
  atexit(FUN_14330769e);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cab5b50,L"Sequencer.Audio.PlayAudioWhenPlaybackJumps",&DAT_14cab5b60,
                L"Play audio when playback jumps.\n");
  atexit(FUN_1433076e3);
  DAT_14cab3268 = DAT_14cab3268 + 1;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  DAT_14cab5b64 = DAT_14cab3268;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4cca20,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4ccdf0,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4cd1c0,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4cd910,2,0);
  DAT_14cab5be0 = DAT_14cab3268 + 1;
  DAT_14cab5be4 = DAT_14cab3268 + 2;
  DAT_14cab3268 = DAT_14cab3268 + 3;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  DAT_14cab5be8 = DAT_14cab3268;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4cdd00,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4ce490,2,0);
  DAT_14cab3268 = DAT_14cab3268 + 1;
  DAT_14cab5c38 = DAT_14cab3268;
  FUN_1400b22c2(local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(local_40,&DAT_14cab5c3c);
  if (cVar1 == '\0') {
    _DAT_14cab5c3c = 0;
    uRam000000014cab5c44 = 0;
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4ce8a0,1,0);
  DAT_14cab5c68 = DAT_14cab3268 + 1;
  DAT_14cab3268 = DAT_14cab3268 + 2;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  DAT_14cab5c6c = DAT_14cab3268;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4cec80,1,0);
  DAT_14cab3268 = DAT_14cab3268 + 1;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  DAT_14cab5c88 = DAT_14cab3268;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4cf050,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4cf3f0,1,0);
  DAT_14cab3268 = DAT_14cab3268 + 1;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  DAT_14cab5cc0 = DAT_14cab3268;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4cf800,1,0);
  DAT_14cab3268 = DAT_14cab3268 + 1;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  DAT_14cab5ce0 = DAT_14cab3268;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4cfba0,1,0);
  DAT_14cab3268 = DAT_14cab3268 + 1;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  DAT_14cab5d00 = DAT_14cab3268;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4cff60,1,0);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cab5d28,L"Sequencer.DeferMovementUpdates",&DAT_14cab5d20,
                L"(Default: false) Enables deferring all Scene Component movement updates to the end of a sequencer evaluation to avoid excessive calls to UpdateOverlaps or cascading transform updates for attached components.\n"
               );
  atexit(FUN_14330affb);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cab5d40,L"Sequencer.OutputDeferredMovementMode",&DAT_14cab5d38,
                L"Integer value specifying how to output Scene Components with deferred movement updates from Sequencer: (0 - Default) No output, (1 - Dump Once) Request a single output on the next evaluation, (2 - Dump every frame) Dump all movement updates every frame"
               );
  atexit(FUN_14330b040);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4d0750,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4d0b20,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4d0f00,1,0);
  uStack_50 = 0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4d1e70,4,&PTR_FUN_14a4d1e40);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4d2700,1,0);
  DAT_14cab3268 = DAT_14cab3268 + 1;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  DAT_14cab5e28 = DAT_14cab3268;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4d2ad0,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4d2ee0,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4d3290,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4d3660,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4d3a40,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4d3e10,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4d45c0,2,0);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cab5ef0,L"Sequencer.MaterialParameterBlending",&DAT_14c76101d,
                L"(Default: true) Defines whether material parameter blending should be enabled or not.\n"
               );
  atexit(FUN_14330b98d);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cab5f08,L"Sequencer.MaterialParameterEntityLifetimeTracking",&DAT_14cab5f00,
                L"(Default: false) Ensure on destruction that all entities have been cleaned up. This can report false positives (when the linker and material system are both cleaned up together) so is not enabled by default.\n"
               );
  atexit(FUN_14330b9d2);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cab5f18,L"Sequencer.UseSoftObjectPtrsForPreAnimatedMaterial",&DAT_14c76101e,
                L"Defines whether to use soft-object-ptrs for referencing pre-animated state (default), or strong TObjectPtrs.\n"
               );
  atexit(FUN_14330c30d);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4d4de0,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4d51b0,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4d5570,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4d5930,1,0);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_14282b410(L"/Script/MovieSceneTracks",&PTR_FUN_14a4d5d20,1,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14331a4f4 FUN_14331a4f4 body=1122 status=ok
// SIG undefined FUN_14331a4f4(void)

undefined8 *
FUN_14331a4f4(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_120 [32];
  undefined1 *local_100;
  ulonglong local_f8;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((*param_1 != -1) && (param_1[1] != -1)) &&
     (cVar4 = FUN_1476961c4(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x400000000;
      FUN_14769741a(param_1,param_4,local_120);
      puVar12 = (undefined1 *)0x0;
      if ((int)local_f8 != 0) {
        puVar12 = local_120;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_14331a6ad;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_143327e59);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_14331a6ad:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x31);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x31);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_14331a72f;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_14331a72f:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar12);
      *puVar14 = &PTR_FUN_14a4e0450;
      FUN_1476a6adc(puVar14 + 0x15,param_3,param_1);
      puVar14[0x30] = *param_5;
      uVar9 = *(uint *)((longlong)puVar14 + 0xb4);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar13 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar13 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar13 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar13 != '\x06') {
          uVar3 = uVar13;
        }
        uVar13 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar13 == '\x06') {
          uVar13 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar13 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
      }
      local_128 = CONCAT71(local_128._1_7_,1);
      FUN_1447439e4();
      puVar12 = local_120;
      if (local_100 != (undefined1 *)0x0) {
        puVar12 = local_100;
      }
      FUN_144717c65(puVar12,local_f8 & 0xffffffff);
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14331a533;
    }
    local_128 = *param_5;
    FUN_1476a6adc(local_120,param_3,param_1);
    FUN_143327e9c(local_120,&local_128);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_14331a533:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14331a958 FUN_14331a958 body=1129 status=ok
// SIG undefined FUN_14331a958(void)

undefined8 *
FUN_14331a958(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_120 [32];
  undefined1 *local_100;
  ulonglong local_f8;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) &&
     (cVar4 = FUN_1476a5d92(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x400000000;
      FUN_1476a6d70(param_1,param_4,local_120);
      puVar12 = (undefined1 *)0x0;
      if ((int)local_f8 != 0) {
        puVar12 = local_120;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_14331ab18;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_143327e59);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_14331ab18:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x31);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x31);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_14331ab9a;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_14331ab9a:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar12);
      *puVar14 = &PTR_FUN_14a4e0460;
      FUN_1476a6cf2(puVar14 + 0x15,param_3,param_1);
      puVar14[0x30] = *param_5;
      uVar9 = *(uint *)((longlong)puVar14 + 0xb4);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar13 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar13 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar13 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar13 != '\x06') {
          uVar3 = uVar13;
        }
        uVar13 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar13 == '\x06') {
          uVar13 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar13 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
      }
      local_128 = CONCAT71(local_128._1_7_,1);
      FUN_1447439e4();
      puVar12 = local_120;
      if (local_100 != (undefined1 *)0x0) {
        puVar12 = local_100;
      }
      FUN_144717c65(puVar12,local_f8 & 0xffffffff);
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14331a99e;
    }
    local_128 = *param_5;
    FUN_1476a6cf2(local_120,param_3,param_1);
    FUN_143328140(local_120,&local_128);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_14331a99e:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14331adc2 FUN_14331adc2 body=1161 status=ok
// SIG undefined FUN_14331adc2(void)

undefined8 *
FUN_14331adc2(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_120 [32];
  undefined1 *local_100;
  ulonglong local_f8;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((*param_1 != -1) && (param_1[2] != -1)) &&
     (cVar4 = FUN_1476a6576(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_100 = (undefined1 *)0x0;
      local_f8 = 0x400000000;
      FUN_1476a71c0(param_1,param_4,local_120);
      puVar11 = (undefined1 *)0x0;
      if ((int)local_f8 != 0) {
        puVar11 = local_120;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_14331af7c;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_143327e59);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_14331af7c:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x31);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x31);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_14331affe;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_14331affe:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar11);
      *puVar14 = &PTR_FUN_14a4e0470;
      FUN_1476a7142(puVar14 + 0x15,param_3,param_1);
      puVar14[0x30] = *param_6;
      uVar9 = *(uint *)((longlong)puVar14 + 0xb4);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar13 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar12 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar13 = 0;
        }
        else {
          uVar12 = 2;
        }
      }
      else {
        iVar13 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar12 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar12 != '\x06') {
          uVar3 = uVar12;
        }
        uVar12 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar12 == '\x06') {
          uVar12 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar12 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar13;
      *param_2 = puVar14;
      uVar8 = 0;
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        uVar8 = *param_2;
      }
      local_128 = CONCAT71(local_128._1_7_,1);
      FUN_1447439e4(uVar8);
      if (param_5 != 0) {
        FUN_1476a729a(param_1,param_2,param_5);
      }
      puVar11 = local_120;
      if (local_100 != (undefined1 *)0x0) {
        puVar11 = local_100;
      }
      FUN_144717c65(puVar11,local_f8 & 0xffffffff);
      if (local_100 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14331ae01;
    }
    local_128 = *param_6;
    FUN_1476a7142(local_120,param_3,param_1);
    FUN_1433283fe(local_120,&local_128);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_14331ae01:
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14331b25c FUN_14331b25c body=5031 status=ok
// SIG undefined FUN_14331b25c(void)

void FUN_14331b25c(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined2 uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [8];
  undefined1 auVar16 [8];
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint *puVar20;
  byte bVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined **ppuVar25;
  int iVar26;
  undefined1 *puVar27;
  ulonglong uVar28;
  longlong *plVar29;
  longlong lVar30;
  int iVar31;
  int iVar32;
  undefined **ppuVar33;
  byte bVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong *plVar37;
  uint uVar38;
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined4 local_270;
  undefined4 local_268;
  undefined8 local_260;
  wchar_t *local_258;
  undefined1 *local_250;
  undefined1 *local_248;
  undefined8 *local_240;
  code *local_238;
  code *local_230;
  char local_219;
  undefined **local_218;
  int local_20c;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  undefined **local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_194 [4];
  undefined8 local_190;
  longlong local_188;
  int local_180;
  undefined **local_178;
  undefined8 uStack_170;
  undefined *local_168;
  longlong *local_160;
  undefined **local_158;
  int local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  int iStack_144;
  undefined1 local_140 [8];
  undefined1 *local_138;
  int local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int iStack_f8;
  int iStack_f4;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar30 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x5d8);
  plVar29 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x5e0);
  if (plVar29 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar29 + 1) = (int)plVar29[1] + 1;
    UNLOCK();
  }
  cVar5 = *(char *)(lVar30 + 0x7c);
  if (cVar5 == ' ') {
    if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
      local_218 = (undefined **)(param_1 + 0xe0);
      lVar30 = 0;
      bVar34 = 0;
      bVar21 = 0;
      do {
        bVar34 = bVar34 & 1 | *(byte *)(*(longlong *)(*local_218 + lVar30) + 0x7c);
        bVar21 = bVar21 & 1 | *(byte *)(*(longlong *)(*local_218 + lVar30) + 0x7c) ^ 1;
        lVar30 = lVar30 + 8;
      } while ((longlong)*(int *)(param_1 + 0xe8) * 8 != lVar30);
      local_108 = 0;
      uStack_100 = 0;
      local_128 = (code *)0x0;
      uStack_120 = 0;
      uStack_fc = 0x80;
      iStack_f8 = -1;
      iStack_f4 = 0;
      local_158 = (undefined **)0x0;
      local_150 = 0;
      local_178 = (undefined **)0x0;
      uStack_170 = 0;
      uStack_14c = 0x80;
      local_148 = 0xffffffff;
      iStack_144 = 0;
      if (bVar21 != 0) {
        FUN_1475a80f8(param_1 + 0x40,*(undefined8 *)(param_1 + 0x28),&local_178);
      }
      local_1f0 = plVar29;
      if (bVar34 != 0) {
        FUN_1475a7cd4(param_1 + 0x40,*(undefined8 *)(param_1 + 0x28),&local_128);
      }
      iVar22 = *(int *)(param_1 + 0xe8);
      if ((longlong)iVar22 != 0) {
        lVar30 = *(longlong *)(param_1 + 0xe0);
        lVar17 = 0;
        do {
          lVar35 = *(longlong *)(lVar30 + lVar17);
          if (*(char *)(lVar35 + 0x7c) == '\x01') {
            FUN_14769af32(lVar35,param_1 + 0x40,&local_128);
          }
          else {
            FUN_14769b04a(lVar35,param_1 + 0x40,&local_178);
          }
          FUN_14769b202(lVar35,*(undefined8 *)(param_1 + 0x28));
          lVar17 = lVar17 + 8;
        } while ((longlong)iVar22 * 8 != lVar17);
      }
      lVar30 = *(longlong *)(param_1 + 0x28);
      *(undefined8 *)(lVar30 + 0x278) = *(undefined8 *)(lVar30 + 0x270);
      *(undefined1 *)(lVar30 + 0x289) = 1;
      *(undefined4 *)(param_1 + 0xe8) = 0;
      if (*(int *)(param_1 + 0xec) != 0) {
        FUN_1476a7682(local_218);
      }
      FUN_1475a7738(param_1 + 0x40);
      FUN_14769bb24(&local_178);
      FUN_1475b463e(&local_128);
      plVar29 = local_1f0;
    }
    goto LAB_14331c4cf;
  }
  if (cVar5 != '\x04') {
    if ((cVar5 == '\x02') && (*(int *)(param_1 + 0xd8) != 0)) {
      lVar30 = *(longlong *)(param_1 + 0xe0);
      uVar2 = *(undefined8 *)(param_1 + 0xe8);
      *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0xd0);
      *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0xd8);
      local_128._0_4_ = (undefined4)lVar30;
      local_128._4_4_ = (undefined4)((ulonglong)lVar30 >> 0x20);
      uStack_120._0_4_ = (undefined4)uVar2;
      uStack_120._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      *(undefined4 *)(param_1 + 0xd0) = (undefined4)local_128;
      *(undefined4 *)(param_1 + 0xd4) = local_128._4_4_;
      *(undefined4 *)(param_1 + 0xd8) = (undefined4)uStack_120;
      *(undefined4 *)(param_1 + 0xdc) = uStack_120._4_4_;
      *(undefined4 *)(param_1 + 0xd8) = 0;
      local_128 = (code *)lVar30;
      uStack_120 = uVar2;
      if (*(int *)(param_1 + 0xdc) != 0) {
        FUN_1476a7682();
      }
      iVar22 = *(int *)(param_1 + 0xe8);
      if (0 < iVar22) {
        lVar30 = 0;
        do {
          lVar17 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + lVar30 * 8);
          if (*(longlong *)(lVar17 + 0x68) != 0) {
            FUN_14769b28a(lVar17,param_1 + 0x40);
            iVar22 = *(int *)(param_1 + 0xe8);
          }
          lVar30 = lVar30 + 1;
        } while (lVar30 < iVar22);
      }
      lVar30 = *(longlong *)(param_1 + 0x28);
      uStack_100 = 0;
      uStack_fc = 0;
      iStack_f8 = 0;
      iStack_f4 = 0;
      uStack_f0 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = (code *)0x0;
      uStack_120 = 0;
      local_e8 = 0;
      local_108 = 0x10000000000;
      local_e0 = 0x10000000000;
      local_d8 = 0;
      uStack_d0 = 0;
      lVar17 = FUN_14009d2a0();
      uVar7 = *(ushort *)(lVar17 + 0x13a);
      iVar31 = uVar7 + 1;
      iVar22 = iVar31;
      if (0xff < uVar7) {
        local_108 = CONCAT44(0x100,(int)local_108);
        FUN_14497ddce(&local_128,0);
        iVar22 = (int)local_108 + iVar31;
      }
      iVar32 = iVar22 + 0x1f;
      if (-1 < iVar22) {
        iVar32 = iVar22;
      }
      local_108 = CONCAT44(local_108._4_4_,iVar22);
      if (iVar22 % 0x20 != 0) {
        bVar21 = -(char)(iVar22 % 0x20);
        *(uint *)((longlong)&local_128 + (longlong)(iVar32 >> 5) * 4) =
             (uint)(*(int *)((longlong)&local_128 + (longlong)(iVar32 >> 5) * 4) << (bVar21 & 0x1f))
             >> (bVar21 & 0x1f);
      }
      FUN_1447c45ca(&local_128,0,iVar31,0);
      puVar20 = (uint *)((longlong)&local_128 + (ulonglong)(uVar7 >> 5) * 4);
      *puVar20 = *puVar20 | 1 << ((byte)uVar7 & 0x1f);
      local_178 = &PTR_FUN_14a473cf0;
      FUN_140857d6a(lVar30 + 0x28,&local_128,&local_178,3);
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
    }
    goto LAB_14331c4cf;
  }
  if (*(int *)(param_1 + 0xe8) == 0) goto LAB_14331c4cf;
  lVar30 = *(longlong *)(param_1 + 0xc0);
  local_200 = param_1;
  local_1f0 = plVar29;
  lVar17 = FUN_14009d2a0();
  uVar6 = *(undefined2 *)(lVar17 + 0x13a);
  lVar17 = FUN_14009d2a0();
  local_190._0_4_ = CONCAT22(*(undefined2 *)(lVar17 + 0x54),uVar6);
  uVar2 = local_190;
  local_190._0_6_ = (uint6)(uint5)uVar2;
  local_188 = CONCAT35(local_188._5_3_,0x6ff);
  lVar17 = FUN_14009d2a0();
  uVar7 = *(ushort *)(lVar17 + 0x128);
  FUN_1475b57fe(&local_128,&local_190);
  uVar24 = uStack_d0;
  iVar22 = uVar7 + 1;
  iVar31 = iVar22 - (int)uStack_d0;
  if (iVar31 != 0 && (int)uStack_d0 <= iVar22) {
    if ((int)uStack_d0 == 0) {
LAB_14331b41b:
      if (uStack_d0._4_4_ <= (int)(uint)uVar7) {
        uStack_d0 = CONCAT44(0x100,(int)uStack_d0);
        FUN_14497ddce(&uStack_f0,uVar24 & 0xffffffff);
        iVar22 = (int)uStack_d0 + iVar31;
      }
      iVar32 = iVar22 + 0x1f;
      if (-1 < iVar22) {
        iVar32 = iVar22;
      }
      uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar22);
      if (iVar22 % 0x20 != 0) {
        bVar21 = -(char)(iVar22 % 0x20);
        *(uint *)((longlong)&uStack_f0 + (longlong)(iVar32 >> 5) * 4) =
             (uint)(*(int *)((longlong)&uStack_f0 + (longlong)(iVar32 >> 5) * 4) << (bVar21 & 0x1f))
             >> (bVar21 & 0x1f);
      }
    }
    else {
      iVar32 = (int)uStack_d0 + 0x1e;
      if (-1 < (int)uStack_d0 + -1) {
        iVar32 = (int)uStack_d0 + -1;
      }
      if (iVar32 >> 5 != (uint)(uVar7 >> 5)) goto LAB_14331b41b;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar22);
    }
    FUN_1447c45ca(&uStack_f0,uVar24 & 0xffffffff,iVar31,0);
  }
  puVar20 = (uint *)((longlong)&uStack_f0 + (ulonglong)(uVar7 >> 5) * 4);
  *puVar20 = *puVar20 | 1 << ((byte)uVar7 & 0x1f);
  if (((short)local_128 != -1) && (local_128._2_2_ != -1)) {
    lVar17 = *(longlong *)(local_200 + 0x28);
    local_1e0 = lVar17 + 0x28;
    local_1e8 = &local_118;
    local_218 = *(undefined ***)(lVar17 + 0x270);
    local_1f8 = CONCAT71(local_1f8._1_7_,*(char *)(lVar17 + 0x298));
    if (*(char *)(lVar17 + 0x298) == '\0') {
      *(int *)(lVar17 + 0x28c) = *(int *)(lVar17 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(lVar17 + 0x28c) = *(int *)(lVar17 + 0x28c) + 1;
      UNLOCK();
    }
    iVar22 = FUN_1403b8464(&local_1e8,0);
    local_1d8 = CONCAT44(local_1d8._4_4_,iVar22);
    local_208 = CONCAT44(local_208._4_4_,*(int *)(lVar17 + 0x38));
    if (iVar22 != *(int *)(lVar17 + 0x38)) {
      do {
        lVar17 = *(longlong *)(*(longlong *)(local_1e0 + 0x60) + (longlong)iVar22 * 8);
        if ((char)local_1f8 == '\0') {
          *(undefined4 *)(lVar17 + 0x14) = 0;
          lVar35 = lVar17;
        }
        else {
          lVar35 = 0;
        }
        if (*(ushort *)(lVar17 + 0xc) != 0) {
          plVar29 = *(longlong **)(lVar17 + 0x28);
          lVar18 = (ulonglong)*(ushort *)(lVar17 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar29 + 0x1e) == local_128._2_2_) goto LAB_14331b866;
            plVar29 = plVar29 + 4;
            lVar18 = lVar18 + -0x20;
          } while (lVar18 != 0);
        }
        plVar29 = (longlong *)0x0;
LAB_14331b866:
        iVar22 = *(int *)(lVar17 + 0x14);
        if (iVar22 == 1) {
          AcquireSRWLockExclusive((PSRWLOCK)(plVar29 + 1));
        }
        LOCK();
        *(int *)(plVar29 + 3) = (int)plVar29[3] + 1;
        UNLOCK();
        lVar18 = *plVar29;
        if (*(ushort *)(lVar17 + 0xc) != 0) {
          ppuVar25 = *(undefined ***)(lVar17 + 0x28);
          lVar19 = (ulonglong)*(ushort *)(lVar17 + 0xc) << 5;
          do {
            if (*(short *)((longlong)ppuVar25 + 0x1e) == (short)local_128) goto LAB_14331b8ab;
            ppuVar25 = ppuVar25 + 4;
            lVar19 = lVar19 + -0x20;
          } while (lVar19 != 0);
        }
        ppuVar25 = (undefined **)0x0;
LAB_14331b8ab:
        iVar31 = *(int *)(lVar17 + 0x14);
        if (iVar31 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(ppuVar25 + 1));
        }
        LOCK();
        *(int *)(ppuVar25 + 3) = *(int *)(ppuVar25 + 3) + 1;
        UNLOCK();
        local_168 = *ppuVar25;
        uStack_170 = CONCAT44(uStack_170._4_4_,iVar31);
        local_158 = local_218;
        local_148 = (undefined4)lVar18;
        iStack_144 = (int)((ulonglong)lVar18 >> 0x20);
        uVar7 = *(ushort *)(lVar17 + 0xe);
        if ((ulonglong)uVar7 != 0) {
          uVar24 = 0;
          do {
            *(undefined8 *)(lVar18 + uVar24 * 8) =
                 *(undefined8 *)(lVar30 + (longlong)*(int *)(local_168 + uVar24 * 8 + 4) * 8);
            uVar24 = uVar24 + 1;
          } while (uVar7 != uVar24);
        }
        local_178 = ppuVar25;
        local_160 = plVar29;
        local_150 = iVar22;
        FUN_1475b58b8(&local_178);
        if (lVar35 != 0) {
          *(undefined4 *)(lVar35 + 0x14) = 1;
        }
        iVar22 = FUN_1403b8464(&local_1e8,(int)local_1d8 + 1);
        local_1d8 = CONCAT44(local_1d8._4_4_,iVar22);
      } while (iVar22 != (int)local_208);
    }
    if (local_1e8 != (longlong *)0x0) {
      if (*(char *)(local_1e0 + 0x270) == '\0') {
        *(int *)(local_1e0 + 0x264) = *(int *)(local_1e0 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_1e0 + 0x264) = *(int *)(local_1e0 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  local_158 = (undefined **)0x0;
  local_150 = 0;
  local_178 = (undefined **)0x0;
  uStack_170 = 0;
  uStack_14c = 0x80;
  local_148 = 0xffffffff;
  iStack_144 = 0;
  local_138 = (undefined1 *)0x0;
  local_130 = 0;
  lVar30 = FUN_14009d2a0();
  uVar7 = *(ushort *)(lVar30 + 0x13e);
  lVar30 = FUN_14038fb82();
  iVar31 = uVar7 + 1;
  uVar8 = *(ushort *)(lVar30 + 0x86);
  lVar30 = *(longlong *)(local_200 + 0x28);
  local_108 = 0x10000000000;
  local_e0 = 0x10000000000;
  local_d8 = 0;
  uStack_d0 = 0;
  iVar22 = iVar31;
  if (0xff < uVar7) {
    FUN_14497ddce(&local_128,0);
    iVar22 = (int)local_108 + iVar31;
  }
  iVar32 = iVar22 + 0x1f;
  if (-1 < iVar22) {
    iVar32 = iVar22;
  }
  local_108 = CONCAT44(local_108._4_4_,iVar22);
  if (iVar22 % 0x20 != 0) {
    bVar21 = -(char)(iVar22 % 0x20);
    *(uint *)((longlong)&local_128 + (longlong)(iVar32 >> 5) * 4) =
         (uint)(*(int *)((longlong)&local_128 + (longlong)(iVar32 >> 5) * 4) << (bVar21 & 0x1f)) >>
         (bVar21 & 0x1f);
  }
  FUN_1447c45ca(&local_128,0,iVar31,0);
  puVar20 = (uint *)((longlong)&local_128 + (ulonglong)(uVar7 >> 5) * 4);
  *puVar20 = *puVar20 | 1 << ((byte)uVar7 & 0x1f);
  uVar24 = local_108;
  iVar22 = uVar8 + 1;
  iVar31 = iVar22 - (int)local_108;
  if (iVar31 != 0 && (int)local_108 <= iVar22) {
    if ((int)local_108 == 0) {
LAB_14331bae0:
      if (local_108._4_4_ <= (int)(uint)uVar8) {
        local_108 = CONCAT44(0x100,(int)local_108);
        FUN_14497ddce(&local_128,uVar24 & 0xffffffff);
        iVar22 = (int)local_108 + iVar31;
      }
      iVar32 = iVar22 + 0x1f;
      if (-1 < iVar22) {
        iVar32 = iVar22;
      }
      local_108 = CONCAT44(local_108._4_4_,iVar22);
      if (iVar22 % 0x20 != 0) {
        bVar21 = -(char)(iVar22 % 0x20);
        *(uint *)((longlong)&local_128 + (longlong)(iVar32 >> 5) * 4) =
             (uint)(*(int *)((longlong)&local_128 + (longlong)(iVar32 >> 5) * 4) << (bVar21 & 0x1f))
             >> (bVar21 & 0x1f);
      }
    }
    else {
      iVar32 = (int)local_108 + 0x1e;
      if (-1 < (int)local_108 + -1) {
        iVar32 = (int)local_108 + -1;
      }
      if (iVar32 >> 5 != (uint)(uVar8 >> 5)) goto LAB_14331bae0;
      local_108 = CONCAT44(local_108._4_4_,iVar22);
    }
    FUN_1447c45ca(&local_128,uVar24 & 0xffffffff,iVar31,0);
  }
  puVar20 = (uint *)((longlong)&local_128 + (ulonglong)(uVar8 >> 5) * 4);
  *puVar20 = *puVar20 | 1 << ((byte)uVar8 & 0x1f);
  if ((uVar7 != 0xffff) && (uVar8 != 0xffff)) {
    local_188 = lVar30 + 0x28;
    local_208 = *(longlong *)(lVar30 + 0x270);
    local_219 = *(char *)(lVar30 + 0x298);
    if (local_219 == '\0') {
      *(int *)(lVar30 + 0x28c) = *(int *)(lVar30 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(lVar30 + 0x28c) = *(int *)(lVar30 + 0x28c) + 1;
      UNLOCK();
    }
    local_190 = &local_128;
    local_180 = FUN_1403b8464(&local_190,0);
    local_20c = *(int *)(lVar30 + 0x38);
    if (local_180 != local_20c) {
      do {
        ppuVar25 = *(undefined ***)(*(longlong *)(local_188 + 0x60) + (longlong)local_180 * 8);
        if (local_219 == '\0') {
          *(int *)((longlong)ppuVar25 + 0x14) = 0;
          ppuVar33 = ppuVar25;
        }
        else {
          ppuVar33 = (undefined **)0x0;
        }
        if (*(ushort *)((longlong)ppuVar25 + 0xc) != 0) {
          plVar29 = (longlong *)ppuVar25[5];
          lVar30 = (ulonglong)*(ushort *)((longlong)ppuVar25 + 0xc) << 5;
          do {
            if (*(ushort *)((longlong)plVar29 + 0x1e) == uVar8) goto LAB_14331bc17;
            plVar29 = plVar29 + 4;
            lVar30 = lVar30 + -0x20;
          } while (lVar30 != 0);
        }
        plVar29 = (longlong *)0x0;
LAB_14331bc17:
        local_1f8 = CONCAT44(local_1f8._4_4_,*(int *)((longlong)ppuVar25 + 0x14));
        if (*(int *)((longlong)ppuVar25 + 0x14) == 1) {
          AcquireSRWLockExclusive((PSRWLOCK)(plVar29 + 1));
        }
        LOCK();
        *(int *)(plVar29 + 3) = (int)plVar29[3] + 1;
        UNLOCK();
        lVar30 = *plVar29;
        if (*(ushort *)((longlong)ppuVar25 + 0xc) != 0) {
          plVar37 = (longlong *)ppuVar25[5];
          lVar17 = (ulonglong)*(ushort *)((longlong)ppuVar25 + 0xc) << 5;
          do {
            if (*(ushort *)((longlong)plVar37 + 0x1e) == uVar7) goto LAB_14331bc65;
            plVar37 = plVar37 + 4;
            lVar17 = lVar17 + -0x20;
          } while (lVar17 != 0);
        }
        plVar37 = (longlong *)0x0;
LAB_14331bc65:
        iVar22 = *(int *)((longlong)ppuVar25 + 0x14);
        local_218 = ppuVar33;
        if (iVar22 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar37 + 1));
        }
        LOCK();
        *(int *)(plVar37 + 3) = (int)plVar37[3] + 1;
        UNLOCK();
        lVar17 = *plVar37;
        local_1e0 = CONCAT44(local_1e0._4_4_,iVar22);
        local_1c0 = (undefined **)CONCAT44(local_1c0._4_4_,(undefined4)local_1f8);
        local_1b8 = lVar30;
        local_1d8 = lVar17;
        local_1d0 = plVar29;
        local_1e8 = plVar37;
        local_1c8 = local_208;
        for (uVar24 = (ulonglong)*(ushort *)((longlong)ppuVar25 + 0xe); uVar24 != 0;
            uVar24 = uVar24 - 1) {
          local_1a0 = &local_1b0;
          local_1b0 = lVar30;
          local_1a8 = (undefined1  [8])lVar17;
          FUN_1476a771e(&local_178,local_194,local_1a8);
          lVar17 = lVar17 + 8;
          lVar30 = lVar30 + 0x48;
        }
        FUN_1476a76b2(&local_1e8);
        if (local_218 != (undefined **)0x0) {
          *(int *)((longlong)local_218 + 0x14) = 1;
        }
        local_180 = FUN_1403b8464(&local_190,local_180 + 1);
      } while (local_180 != local_20c);
    }
    if (local_190 != (longlong *)0x0) {
      if (*(char *)(local_188 + 0x270) == '\0') {
        *(int *)(local_188 + 0x264) = *(int *)(local_188 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_188 + 0x264) = *(int *)(local_188 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (iStack_144 < (int)uStack_170) {
    lVar30 = FUN_14009d2a0();
    uVar6 = *(undefined2 *)(lVar30 + 0x4a);
    lVar30 = FUN_14038fb82();
    auVar15 = local_1a8;
    local_1a8._2_2_ = *(undefined2 *)(lVar30 + 0x86);
    local_1a8._0_2_ = uVar6;
    auVar16 = local_1a8;
    local_1a8._6_2_ = auVar15._6_2_;
    local_1a8._0_5_ = auVar16._0_5_;
    local_1a8[5] = 0;
    local_1a0 = (longlong *)CONCAT35(local_1a0._5_3_,0x6ff);
    lVar30 = FUN_14009d2a0();
    uVar7 = *(ushort *)(lVar30 + 0x5c);
    FUN_1476a7aa0(&local_128,local_1a8);
    iVar22 = iStack_f8;
    lVar30 = local_200;
    iVar31 = uVar7 + 1;
    iVar32 = iVar31 - iStack_f8;
    if (iVar32 != 0 && iStack_f8 <= iVar31) {
      if (iStack_f8 == 0) {
LAB_14331be44:
        if (iStack_f4 <= (int)(uint)uVar7) {
          iStack_f4 = 0x100;
          FUN_14497ddce(&local_118,iStack_f8);
          iVar31 = iStack_f8 + iVar32;
        }
        iVar26 = iVar31 + 0x1f;
        if (-1 < iVar31) {
          iVar26 = iVar31;
        }
        iStack_f8 = iVar31;
        iVar31 = iStack_f8;
        if (iVar31 % 0x20 != 0) {
          bVar21 = -(char)(iVar31 % 0x20);
          *(uint *)((longlong)&local_118 + (longlong)(iVar26 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_118 + (longlong)(iVar26 >> 5) * 4) <<
                     (bVar21 & 0x1f)) >> (bVar21 & 0x1f);
          iVar31 = iStack_f8;
        }
      }
      else {
        iVar26 = iStack_f8 + 0x1e;
        if (-1 < iStack_f8 + -1) {
          iVar26 = iStack_f8 + -1;
        }
        if (iVar26 >> 5 != (uint)(uVar7 >> 5)) goto LAB_14331be44;
      }
      iStack_f8 = iVar31;
      FUN_1447c45ca(&local_118,iVar22,iVar32,0);
    }
    puVar20 = (uint *)((longlong)&local_118 + (ulonglong)(uVar7 >> 5) * 4);
    *puVar20 = *puVar20 | 1 << ((byte)uVar7 & 0x1f);
    if (((short)local_128 != -1) && (local_128._2_2_ != -1)) {
      lVar17 = *(longlong *)(lVar30 + 0x28);
      local_188 = lVar17 + 0x28;
      local_219 = *(char *)(lVar17 + 0x298);
      if (local_219 == '\0') {
        *(int *)(lVar17 + 0x28c) = *(int *)(lVar17 + 0x28c) + 1;
      }
      else {
        LOCK();
        *(int *)(lVar17 + 0x28c) = *(int *)(lVar17 + 0x28c) + 1;
        UNLOCK();
      }
      local_190 = &local_118;
      local_180 = FUN_1403b8464(&local_190,0);
      local_20c = *(int *)(lVar17 + 0x38);
      if (local_180 != local_20c) {
        local_1f8 = lVar30 + 0x40;
        do {
          lVar30 = *(longlong *)(*(longlong *)(local_188 + 0x60) + (longlong)local_180 * 8);
          if (local_219 == '\0') {
            *(undefined4 *)(lVar30 + 0x14) = 0;
            local_208 = lVar30;
          }
          else {
            local_208 = 0;
          }
          if (*(ushort *)(lVar30 + 0xc) != 0) {
            plVar29 = *(longlong **)(lVar30 + 0x28);
            lVar17 = (ulonglong)*(ushort *)(lVar30 + 0xc) << 5;
            do {
              if (*(short *)((longlong)plVar29 + 0x1e) == local_128._2_2_) goto LAB_14331bf90;
              plVar29 = plVar29 + 4;
              lVar17 = lVar17 + -0x20;
            } while (lVar17 != 0);
          }
          plVar29 = (longlong *)0x0;
LAB_14331bf90:
          iVar22 = *(int *)(lVar30 + 0x14);
          if (iVar22 == 1) {
            AcquireSRWLockShared((PSRWLOCK)(plVar29 + 1));
          }
          LOCK();
          *(int *)(plVar29 + 3) = (int)plVar29[3] + 1;
          UNLOCK();
          local_218 = (undefined **)*plVar29;
          if (*(ushort *)(lVar30 + 0xc) != 0) {
            plVar37 = *(longlong **)(lVar30 + 0x28);
            lVar17 = (ulonglong)*(ushort *)(lVar30 + 0xc) << 5;
            do {
              if (*(short *)((longlong)plVar37 + 0x1e) == (short)local_128) goto LAB_14331bfdd;
              plVar37 = plVar37 + 4;
              lVar17 = lVar17 + -0x20;
            } while (lVar17 != 0);
          }
          plVar37 = (longlong *)0x0;
LAB_14331bfdd:
          iVar31 = *(int *)(lVar30 + 0x14);
          if (iVar31 == 1) {
            AcquireSRWLockShared((PSRWLOCK)(plVar37 + 1));
          }
          LOCK();
          *(int *)(plVar37 + 3) = (int)plVar37[3] + 1;
          UNLOCK();
          lVar17 = *plVar37;
          local_1e0 = CONCAT44(local_1e0._4_4_,iVar31);
          local_1c8 = CONCAT44(local_1c8._4_4_,iVar22);
          local_1c0 = local_218;
          uVar7 = *(ushort *)(lVar30 + 0xe);
          local_1e8 = plVar37;
          local_1d8 = lVar17;
          local_1d0 = plVar29;
          if ((ulonglong)uVar7 != 0) {
            uVar24 = 0;
            do {
              FUN_1475a79fa(local_1f8,&local_1b0,*(undefined8 *)(lVar17 + uVar24 * 8));
              uVar38 = (uint)local_1b0;
              if (((uint)local_1b0 != 0xffffffff) && (local_130 != 0)) {
                ppuVar25 = local_218 + uVar24 * 9;
                puVar27 = local_138;
                if (local_138 == (undefined1 *)0x0) {
                  puVar27 = local_140;
                }
                iVar22 = *(int *)(puVar27 + (longlong)(int)(local_130 - 1U & (uint)local_1b0) * 4);
                while (iVar31 = iVar22, iVar31 != -1) {
                  iVar22 = *(int *)(local_178 + (longlong)iVar31 * 3 + 2);
                  if (*(uint *)(local_178 + (longlong)iVar31 * 3) == (uint)local_1b0) {
                    do {
                      ppuVar33 = ppuVar25;
                      plVar29 = (longlong *)local_178[(longlong)iVar31 * 3 + 1];
                      for (lVar30 = 9; lVar30 != 0; lVar30 = lVar30 + -1) {
                        *plVar29 = (longlong)*ppuVar33;
                        ppuVar33 = ppuVar33 + 1;
                        plVar29 = plVar29 + 1;
                      }
                      FUN_1476a7bb0(&local_178);
                      do {
                        iVar31 = iVar22;
                        if (iVar31 == -1) goto LAB_14331c116;
                        iVar22 = *(int *)(local_178 + (longlong)iVar31 * 3 + 2);
                      } while (*(uint *)(local_178 + (longlong)iVar31 * 3) != uVar38);
                    } while( true );
                  }
                }
              }
LAB_14331c116:
              uVar24 = uVar24 + 1;
            } while (uVar24 != uVar7);
          }
          FUN_1476a7b5a(&local_1e8);
          if (local_208 != 0) {
            *(undefined4 *)(local_208 + 0x14) = 1;
          }
          local_180 = FUN_1403b8464(&local_190,local_180 + 1);
        } while (local_180 != local_20c);
      }
      if (local_190 != (longlong *)0x0) {
        if (*(char *)(local_188 + 0x270) == '\0') {
          *(int *)(local_188 + 0x264) = *(int *)(local_188 + 0x264) + -1;
        }
        else {
          LOCK();
          *(int *)(local_188 + 0x264) = *(int *)(local_188 + 0x264) + -1;
          UNLOCK();
        }
      }
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (local_150 == 0) {
      uVar36 = 1;
      uVar24 = 0;
      iVar22 = 0;
      iVar31 = 0;
    }
    else {
      ppuVar25 = local_158;
      if (local_158 == (undefined **)0x0) {
        ppuVar25 = &local_168;
      }
      uVar38 = *(uint *)ppuVar25;
      if (uVar38 == 0) {
        iVar22 = local_150 + 0x1e;
        if (-1 < local_150 + -1) {
          iVar22 = local_150 + -1;
        }
        uVar24 = 0;
        uVar28 = (ulonglong)(uint)(iVar22 >> 5);
        if (iVar22 >> 5 < 1) {
          uVar28 = uVar24;
        }
        iVar22 = 0;
        do {
          if (uVar28 == uVar24) goto LAB_14331c49d;
          iVar22 = iVar22 + 0x20;
          uVar38 = *(uint *)((longlong)ppuVar25 + (uVar24 + 1) * 4);
          uVar24 = uVar24 + 1;
        } while (uVar38 == 0);
      }
      else {
        uVar24 = 0;
        iVar22 = 0;
      }
      uVar36 = (ulonglong)(-uVar38 & uVar38);
      uVar28 = uVar36 * 2 + 1;
      lVar30 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      iVar31 = (iVar22 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
      if (local_150 <= iVar31) {
        iVar31 = local_150;
      }
    }
    if (iVar31 < local_150) {
      local_200 = local_200 + 0x90;
      uVar38 = 0xffffffff;
      do {
        puVar20 = (uint *)FUN_14769bac6(local_200,*(undefined4 *)(local_178 + (longlong)iVar31 * 3))
        ;
        if (((((puVar20[1] != 0) && (uVar23 = *puVar20, -1 < (int)uVar23)) &&
             ((int)uVar23 < DAT_14c9647dc)) &&
            ((plVar29 = (longlong *)
                        ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
             plVar29 != (longlong *)0x0 && (*(uint *)(plVar29 + 2) == puVar20[1])))) &&
           (((*(uint *)(plVar29 + 1) & 0x10200000) == 0 && (lVar30 = *plVar29, lVar30 != 0)))) {
          if (DAT_14cac7648 == 0) {
            local_128 = FUN_144a7958c;
            local_230 = FUN_14081d0ea;
            local_238 = FUN_143242436;
            local_240 = &local_128;
            local_248 = &LAB_14789ef1f;
            local_250 = &LAB_1417b008f;
            local_258 = L"Engine";
            local_260 = 0x8000000000;
            local_268 = 0x10000004;
            local_270 = 0x10;
            local_278 = 0x2b0;
            FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
          }
          if ((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(*(longlong *)(lVar30 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar30 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)) {
            uVar2 = *(undefined8 *)(lVar30 + 0x1c8);
            uVar10 = *(undefined8 *)(lVar30 + 0x1d0);
            uVar11 = *(undefined8 *)(lVar30 + 0x1d8);
            uVar12 = *(undefined8 *)(lVar30 + 0x1b0);
            uVar13 = *(undefined8 *)(lVar30 + 0x1b8);
            uVar3 = *(undefined8 *)(lVar30 + 0x1c0);
            uVar14 = *(undefined8 *)(lVar30 + 0x1a0);
            uVar4 = *(undefined8 *)(lVar30 + 0x1a8);
            puVar9 = (undefined8 *)local_178[(longlong)iVar31 * 3 + 1];
            *puVar9 = *(undefined8 *)(lVar30 + 0x198);
            puVar9[1] = uVar14;
            puVar9[2] = uVar4;
            puVar9[3] = uVar3;
            puVar9[4] = uVar12;
            puVar9[5] = uVar13;
            puVar9[6] = uVar2;
            puVar9[7] = uVar10;
            puVar9[8] = uVar11;
          }
        }
        uVar38 = uVar38 & ~(uint)uVar36;
        ppuVar25 = local_158;
        if (local_158 == (undefined **)0x0) {
          ppuVar25 = &local_168;
        }
        iVar31 = (int)uVar24;
        lVar30 = (longlong)iVar31;
        uVar23 = *(uint *)((longlong)ppuVar25 + lVar30 * 4) & uVar38;
        if (uVar23 == 0) {
          iVar32 = local_150 + 0x1e;
          if (-1 < local_150 + -1) {
            iVar32 = local_150 + -1;
          }
          iVar32 = iVar32 >> 5;
          iVar26 = iVar32;
          if (iVar32 < iVar31) {
            iVar26 = iVar31;
          }
          if (iVar32 <= iVar31) break;
          lVar17 = 0;
          while( true ) {
            iVar22 = iVar22 + 0x20;
            uVar23 = *(uint *)((longlong)ppuVar25 + (lVar30 + lVar17 + 1) * 4);
            if (uVar23 != 0) break;
            lVar17 = lVar17 + 1;
            if (iVar26 - lVar30 == lVar17) goto LAB_14331c49d;
          }
          uVar24 = (ulonglong)(iVar31 + (int)lVar17 + 1);
          uVar38 = 0xffffffff;
        }
        uVar36 = (ulonglong)(-uVar23 & uVar23);
        uVar28 = uVar36 * 2 + 1;
        lVar30 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar30 == 0; lVar30 = lVar30 + -1) {
          }
        }
        iVar31 = (iVar22 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
      } while (iVar31 < local_150);
    }
  }
LAB_14331c49d:
  local_130 = 0;
  if (local_138 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1476a2bb4(&local_178);
  plVar29 = local_1f0;
LAB_14331c4cf:
  if (plVar29 != (longlong *)0x0) {
    LOCK();
    plVar37 = plVar29 + 1;
    *(int *)plVar37 = (int)*plVar37 + -1;
    UNLOCK();
    if ((int)*plVar37 == 0) {
      (**(code **)*plVar29)(plVar29);
      LOCK();
      piVar1 = (int *)((longlong)plVar29 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14331c604 FUN_14331c604 body=267 status=ok
// SIG undefined FUN_14331c604(void)

longlong * FUN_14331c604(longlong param_1,longlong *param_2,ushort param_3,ushort param_4)

{
  int *piVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (param_4 != 0xffff) {
    uVar5 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x98) + (ulonglong)param_3 * 8);
    if (((uVar5 != 0xffff) &&
        ((int)(uint)param_4 < *(int *)(*(longlong *)(param_1 + 8) + 0x20 + uVar5 * 0x28))) &&
       ((*(uint *)(*(longlong *)(param_1 + 8) + uVar5 * 0x28 + (ulonglong)(param_4 >> 5) * 4) >>
         (param_4 & 0x1f) & 1) != 0)) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x60) + uVar5 * 8);
      cVar2 = *(char *)(param_1 + 0x270);
      uVar3 = *(ushort *)(lVar6 + 0xc);
      if (uVar3 != 0) {
        uVar4 = *(ushort *)(*(longlong *)(param_1 + 0x98) + 2 + (ulonglong)param_3 * 8);
        plVar7 = *(longlong **)(lVar6 + 0x28);
        lVar6 = (ulonglong)uVar3 << 5;
        do {
          if (*(ushort *)((longlong)plVar7 + 0x1e) == param_4) {
            *param_2 = 0;
            param_2[2] = 0;
            if (plVar7 == (longlong *)0x0) {
              return param_2;
            }
            if (cVar2 != '\0') {
              AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
            }
            LOCK();
            *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
            UNLOCK();
            if (*param_2 != 0) {
              LOCK();
              piVar1 = (int *)(*param_2 + 0x18);
              *piVar1 = *piVar1 + 1;
              UNLOCK();
              if ((int)param_2[1] == 1) {
                ReleaseSRWLockShared((PSRWLOCK)(*param_2 + 8));
              }
            }
            *param_2 = (longlong)plVar7;
            *(uint *)(param_2 + 1) = (uint)(cVar2 != '\0');
            param_2[2] = (ulonglong)((uint)uVar4 * 0xc) + *plVar7;
            return param_2;
          }
          plVar7 = plVar7 + 4;
          lVar6 = lVar6 + -0x20;
        } while (lVar6 != 0);
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 14331c712 FUN_14331c712 body=1178 status=ok
// SIG undefined FUN_14331c712(void)

undefined8 *
FUN_14331c712(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined1 local_130 [32];
  undefined1 *local_110;
  ulonglong local_108;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((((((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) &&
        ((param_1[3] != -1 && (param_1[4] != -1)))) &&
       ((param_1[5] != -1 && ((param_1[6] != -1 && (param_1[7] != -1)))))) && (param_1[8] != -1)) &&
     ((param_1[9] != -1 && (cVar4 = FUN_1476a8de4(param_1,param_3), cVar4 != '\0')))) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_110 = (undefined1 *)0x0;
      local_108 = 0x400000000;
      FUN_1476abb28(param_1,param_4,local_130);
      puVar12 = (undefined1 *)0x0;
      if ((int)local_108 != 0) {
        puVar12 = local_130;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_14331c903;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_143327e59);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_14331c903:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x33);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x33);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_14331c985;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_14331c985:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar12);
      *puVar14 = &PTR_FUN_14a4e06d0;
      FUN_1476aba9a(puVar14 + 0x15,param_3,param_1);
      puVar14[0x32] = *param_5;
      uVar9 = *(uint *)((longlong)puVar14 + 0xc4);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar13 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar13 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar13 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar13 != '\x06') {
          uVar3 = uVar13;
        }
        uVar13 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar13 == '\x06') {
          uVar13 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar13 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
      }
      local_138 = CONCAT71(local_138._1_7_,1);
      FUN_1447439e4();
      puVar12 = local_130;
      if (local_110 != (undefined1 *)0x0) {
        puVar12 = local_110;
      }
      FUN_144717c65(puVar12,local_108 & 0xffffffff);
      if (local_110 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14331c789;
    }
    local_138 = *param_5;
    FUN_1476aba9a(local_130,param_3,param_1);
    FUN_1433289b6(local_130,&local_138);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_14331c789:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14331cbae FUN_14331cbae body=1122 status=ok
// SIG undefined FUN_14331cbae(void)

undefined8 *
FUN_14331cbae(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined1 local_118 [32];
  undefined1 *local_f8;
  ulonglong local_f0;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((*param_1 != -1) && (param_1[1] != -1)) &&
     (cVar4 = FUN_1476a9cfe(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_f8 = (undefined1 *)0x0;
      local_f0 = 0x400000000;
      FUN_1476ac6d0(param_1,param_4,local_118);
      puVar12 = (undefined1 *)0x0;
      if ((int)local_f0 != 0) {
        puVar12 = local_118;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_14331cd67;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_143327e59);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_14331cd67:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x30);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x30);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_14331cde9;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_14331cde9:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar12);
      *puVar14 = &PTR_FUN_14a4e06e0;
      FUN_1476ac658(puVar14 + 0x15,param_3,param_1);
      puVar14[0x2f] = *param_5;
      uVar9 = *(uint *)(puVar14 + 0x16);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar13 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar13 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar13 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar13 != '\x06') {
          uVar3 = uVar13;
        }
        uVar13 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar13 == '\x06') {
          uVar13 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar13 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
      }
      local_120 = CONCAT71(local_120._1_7_,1);
      FUN_1447439e4();
      puVar12 = local_118;
      if (local_f8 != (undefined1 *)0x0) {
        puVar12 = local_f8;
      }
      FUN_144717c65(puVar12,local_f0 & 0xffffffff);
      if (local_f8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14331cbed;
    }
    local_120 = *param_5;
    FUN_1476ac658(local_118,param_3,param_1);
    FUN_143328c5a(local_118,&local_120);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_14331cbed:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14331d012 FUN_14331d012 body=1178 status=ok
// SIG undefined FUN_14331d012(void)

undefined8 *
FUN_14331d012(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined1 local_130 [32];
  undefined1 *local_110;
  ulonglong local_108;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((((((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) &&
        ((param_1[3] != -1 && (param_1[4] != -1)))) &&
       ((param_1[5] != -1 && ((param_1[6] != -1 && (param_1[7] != -1)))))) && (param_1[8] != -1)) &&
     ((param_1[9] != -1 && (cVar4 = FUN_1476a8de4(param_1,param_3), cVar4 != '\0')))) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_110 = (undefined1 *)0x0;
      local_108 = 0x400000000;
      FUN_1476abb28(param_1,param_4,local_130);
      puVar12 = (undefined1 *)0x0;
      if ((int)local_108 != 0) {
        puVar12 = local_130;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_14331d203;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_143327e59);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_14331d203:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x33);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x33);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_14331d285;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_14331d285:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar12);
      *puVar14 = &PTR_FUN_14a4e06f0;
      FUN_1476ac91a(puVar14 + 0x15,param_3,param_1);
      puVar14[0x32] = *param_5;
      uVar9 = *(uint *)((longlong)puVar14 + 0xc4);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar11 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar13 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar11 = 0;
        }
        else {
          uVar13 = 2;
        }
      }
      else {
        iVar11 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar13 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar13 != '\x06') {
          uVar3 = uVar13;
        }
        uVar13 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar13 == '\x06') {
          uVar13 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar13 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar11;
      *param_2 = puVar14;
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
      }
      local_138 = CONCAT71(local_138._1_7_,1);
      FUN_1447439e4();
      puVar12 = local_130;
      if (local_110 != (undefined1 *)0x0) {
        puVar12 = local_110;
      }
      FUN_144717c65(puVar12,local_108 & 0xffffffff);
      if (local_110 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14331d089;
    }
    local_138 = *param_5;
    FUN_1476ac91a(local_130,param_3,param_1);
    FUN_143328efe(local_130,&local_138);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_14331d089:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14331d4ae FUN_14331d4ae body=1231 status=ok
// SIG undefined FUN_14331d4ae(void)

undefined8 *
FUN_14331d4ae(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined1 local_130 [32];
  undefined1 *local_110;
  ulonglong local_108;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((((((*param_1 != -1) && (param_1[1] != -1)) && (param_1[2] != -1)) &&
        ((param_1[3] != -1 && (param_1[4] != -1)))) &&
       ((param_1[5] != -1 && ((param_1[6] != -1 && (param_1[7] != -1)))))) && (param_1[8] != -1)) &&
     ((param_1[9] != -1 && (cVar4 = FUN_1476aad34(param_1,param_3), cVar4 != '\0')))) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_110 = (undefined1 *)0x0;
      local_108 = 0x400000000;
      FUN_1476ad1b8(param_1,param_4,local_130);
      puVar11 = (undefined1 *)0x0;
      if ((int)local_108 != 0) {
        puVar11 = local_130;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_14331d69e;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_143327e59);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_14331d69e:
        puVar12 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar12 + 0x33);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar12 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar12 + 0x33);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_14331d722;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_14331d722:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar12,puVar11);
      *puVar12 = &PTR_FUN_14a4e0700;
      FUN_1476ad12a(puVar12 + 0x15,param_3,param_1);
      puVar12[0x32] = *param_6;
      uVar9 = *(uint *)((longlong)puVar12 + 0xc4);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar13 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar14 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar13 = 0;
        }
        else {
          uVar14 = 2;
        }
      }
      else {
        iVar13 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar14 = 5;
      }
      if (*(code **)(puVar12[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar12[0xe] + 0x18))(puVar12 + 0xe,puVar12 + 9);
      }
      puVar12[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar12[9] = puVar12;
      puVar12[10] = puVar12;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar14 != '\x06') {
          uVar3 = uVar14;
        }
        uVar14 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar14 == '\x06') {
          uVar14 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar12[0xf] = uVar8;
      puVar12[0x10] = uVar14 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar12 + 0x1c) = iVar13;
      *param_2 = puVar12;
      uVar8 = 0;
      if (puVar12 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
        UNLOCK();
        uVar8 = *param_2;
      }
      local_138 = CONCAT71(local_138._1_7_,1);
      FUN_1447439e4(uVar8);
      if (param_5 != 0) {
        FUN_1476ad3b8(param_1,param_2);
      }
      puVar11 = local_130;
      if (local_110 != (undefined1 *)0x0) {
        puVar11 = local_110;
      }
      FUN_144717c65(puVar11,local_108 & 0xffffffff);
      if (local_110 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14331d525;
    }
    local_138 = *param_6;
    FUN_1476ad12a(local_130,param_3,param_1);
    FUN_1433291a2(local_130,&local_138);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_14331d525:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14331d97e FUN_14331d97e body=2696 status=ok
// SIG undefined FUN_14331d97e(void)

void FUN_14331d97e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  ushort uVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_1d8 [32];
  undefined1 *local_1b8;
  code **local_1b0;
  uint *local_1a8;
  uint *local_1a0;
  uint *local_198;
  uint local_190;
  int local_18c;
  ulonglong local_188;
  longlong *local_180;
  undefined8 local_178;
  int local_16c;
  ushort local_166;
  int local_164;
  longlong *local_160;
  longlong *local_158;
  code *local_150;
  undefined4 **local_148;
  undefined4 *local_140;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  uint uStack_128;
  undefined4 local_124;
  undefined4 local_120;
  uint local_11c;
  code *local_118;
  byte local_110;
  undefined1 local_108 [8];
  byte local_100;
  uint local_f8 [8];
  undefined8 local_d8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  uint local_98 [8];
  undefined8 local_78;
  uint local_70 [8];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar10 = FUN_14009d2a0();
  lVar11 = FUN_14038fb82();
  uStack_130 = *(undefined4 *)(lVar11 + 0xce);
  uStack_12c = *(uint *)(lVar10 + 0xc2);
  local_134 = CONCAT22(*(undefined2 *)(lVar11 + 0xcc),*(short *)(lVar10 + 0x54));
  uStack_128 = CONCAT22(uStack_128._2_2_,*(undefined2 *)(lVar10 + 0xc6));
  local_124._0_2_ = (ushort)(byte)local_124;
  local_120 = 0x6ff;
  local_11c = local_11c & 0xffffff00;
  local_166 = (ushort)local_124;
  local_118 = FUN_14052e862;
  local_110 = 3;
  if ((*(short *)(lVar10 + 0x54) == -1) ||
     (cVar8 = FUN_1417a7d68(&local_134,*(longlong *)(param_1 + 0x28) + 0x28), cVar8 == '\0'))
  goto LAB_14331e24a;
  plVar12 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14a4e0710;
  plVar12[2] = (longlong)&PTR_FUN_14a4e0728;
  *(uint *)((longlong)plVar12 + 0x1c) = local_134;
  *(undefined4 *)(plVar12 + 4) = uStack_130;
  *(uint *)((longlong)plVar12 + 0x24) = uStack_12c;
  *(uint *)(plVar12 + 5) = uStack_128;
  *(uint *)(plVar12 + 5) = uStack_128;
  *(undefined4 *)((longlong)plVar12 + 0x2c) = local_124;
  *(undefined4 *)(plVar12 + 6) = local_120;
  *(uint *)((longlong)plVar12 + 0x34) = local_11c;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
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
  uVar18 = local_134;
  local_50 = 0x10000000000;
  local_78 = 0x10000000000;
  uVar6 = (ushort)local_134;
  iVar16 = (local_134 & 0xffff) + 1;
  iVar14 = iVar16;
  if (0xff < (ushort)local_134) {
    local_50 = 0x10000000000;
    FUN_14497ddce(local_70,0);
    iVar14 = (int)local_50 + iVar16;
  }
  iVar15 = iVar14 + 0x1f;
  if (-1 < iVar14) {
    iVar15 = iVar14;
  }
  local_50 = CONCAT44(local_50._4_4_,iVar14);
  if (iVar14 % 0x20 != 0) {
    bVar13 = -(char)(iVar14 % 0x20);
    local_70[iVar15 >> 5] = (local_70[iVar15 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
  }
  local_180 = plVar12 + 2;
  local_18c = iVar16;
  local_178 = param_2;
  FUN_1447c45ca(local_70,0,iVar16,0);
  local_190 = 1 << ((byte)uVar18 & 0x1f);
  local_188 = (ulonglong)(uVar6 >> 5);
  local_70[local_188] = local_70[local_188] | local_190;
  lVar10 = 1;
  do {
    uVar7 = local_50;
    uVar3 = *(ushort *)((longlong)&local_134 + lVar10 * 2);
    if (uVar3 != 0xffff) {
      iVar14 = uVar3 + 1;
      iVar16 = iVar14 - (int)local_50;
      if (iVar16 != 0 && (int)local_50 <= iVar14) {
        if ((int)local_50 == 0) {
LAB_14331dbca:
          if (local_50._4_4_ <= (int)(uint)uVar3) {
            local_50 = CONCAT44(0x100,(int)local_50);
            FUN_14497ddce(local_70,uVar7 & 0xffffffff);
            iVar14 = (int)local_50 + iVar16;
          }
          iVar15 = iVar14 + 0x1f;
          if (-1 < iVar14) {
            iVar15 = iVar14;
          }
          local_50 = CONCAT44(local_50._4_4_,iVar14);
          if (iVar14 % 0x20 != 0) {
            bVar13 = -(char)(iVar14 % 0x20);
            local_70[iVar15 >> 5] = (local_70[iVar15 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
          }
        }
        else {
          iVar15 = (int)local_50 + 0x1e;
          if (-1 < (int)local_50 + -1) {
            iVar15 = (int)local_50 + -1;
          }
          if (iVar15 >> 5 != (uint)(uVar3 >> 5)) goto LAB_14331dbca;
          local_50 = CONCAT44(local_50._4_4_,iVar14);
        }
        FUN_1447c45ca(local_70,uVar7 & 0xffffffff,iVar16,0);
      }
      local_70[uVar3 >> 5] = local_70[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
    }
    uVar7 = local_50;
    uVar18 = uStack_12c;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 4);
  uVar3 = (ushort)uStack_12c;
  uVar17 = uStack_12c & 0xffff;
  if ((ushort)uStack_12c != 0xffff) {
    iVar16 = (uStack_12c & 0xffff) + 1;
    iVar14 = iVar16 - (int)local_50;
    if (iVar14 != 0 && (int)local_50 <= iVar16) {
      if ((int)local_50 == 0) {
LAB_14331dcb8:
        iVar15 = iVar16;
        if (local_50._4_4_ <= (int)uVar17) {
          local_50 = CONCAT44(0x100,(int)local_50);
          FUN_14497ddce(local_70,uVar7 & 0xffffffff);
          iVar15 = (int)local_50 + iVar14;
        }
        iVar9 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar9 = iVar15;
        }
        local_50 = CONCAT44(local_50._4_4_,iVar15);
        if (iVar15 % 0x20 != 0) {
          bVar13 = -(char)(iVar15 % 0x20);
          local_70[iVar9 >> 5] = (local_70[iVar9 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
        }
      }
      else {
        iVar15 = (int)local_50 + 0x1e;
        if (-1 < (int)local_50 + -1) {
          iVar15 = (int)local_50 + -1;
        }
        if (iVar15 >> 5 != (uint)((ushort)uStack_12c >> 5)) goto LAB_14331dcb8;
        local_50 = CONCAT44(local_50._4_4_,iVar16);
      }
      FUN_1447c45ca(local_70,uVar7 & 0xffffffff,iVar14,0);
    }
    uVar7 = local_78;
    uVar18 = 1 << ((byte)uVar18 & 0x1f);
    uVar4 = uVar3 >> 5;
    local_70[uVar4] = local_70[uVar4] | uVar18;
    iVar14 = iVar16 - (int)local_78;
    if (iVar14 != 0 && (int)local_78 <= iVar16) {
      if ((int)local_78 == 0) {
LAB_14331dd63:
        if (local_78._4_4_ <= (int)uVar17) {
          local_78 = CONCAT44(0x100,(int)local_78);
          FUN_14497ddce(local_98,uVar7 & 0xffffffff);
          iVar16 = (int)local_78 + iVar14;
        }
        iVar15 = iVar16 + 0x1f;
        if (-1 < iVar16) {
          iVar15 = iVar16;
        }
        local_78 = CONCAT44(local_78._4_4_,iVar16);
        if (iVar16 % 0x20 != 0) {
          bVar13 = -(char)(iVar16 % 0x20);
          local_98[iVar15 >> 5] = (local_98[iVar15 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
        }
      }
      else {
        iVar15 = (int)local_78 + 0x1e;
        if (-1 < (int)local_78 + -1) {
          iVar15 = (int)local_78 + -1;
        }
        if (iVar15 >> 5 != (uint)(uVar3 >> 5)) goto LAB_14331dd63;
        local_78 = CONCAT44(local_78._4_4_,iVar16);
      }
      FUN_1447c45ca(local_98,uVar7 & 0xffffffff,iVar14,0);
    }
    local_98[uVar4] = local_98[uVar4] | uVar18;
  }
  uVar7 = local_50;
  uVar18 = uStack_12c;
  uVar3 = uStack_12c._2_2_;
  uVar17 = (uint)uStack_12c._2_2_;
  if (uStack_12c._2_2_ != 0xffff) {
    iVar16 = uStack_12c._2_2_ + 1;
    iVar14 = iVar16 - (int)local_50;
    if (iVar14 != 0 && (int)local_50 <= iVar16) {
      if ((int)local_50 == 0) {
LAB_14331de1f:
        iVar15 = iVar16;
        if (local_50._4_4_ <= (int)uVar17) {
          local_50 = CONCAT44(0x100,(int)local_50);
          FUN_14497ddce(local_70,uVar7 & 0xffffffff);
          iVar15 = (int)local_50 + iVar14;
        }
        iVar9 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar9 = iVar15;
        }
        local_50 = CONCAT44(local_50._4_4_,iVar15);
        if (iVar15 % 0x20 != 0) {
          bVar13 = -(char)(iVar15 % 0x20);
          local_70[iVar9 >> 5] = (local_70[iVar9 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
        }
      }
      else {
        iVar15 = (int)local_50 + 0x1e;
        if (-1 < (int)local_50 + -1) {
          iVar15 = (int)local_50 + -1;
        }
        if (iVar15 >> 5 != (uint)(uStack_12c._2_2_ >> 5)) goto LAB_14331de1f;
        local_50 = CONCAT44(local_50._4_4_,iVar16);
      }
      FUN_1447c45ca(local_70,uVar7 & 0xffffffff,iVar14,0);
    }
    uVar7 = local_78;
    uVar18 = 1 << ((byte)(uVar18 >> 0x10) & 0x1f);
    uVar4 = uVar3 >> 5;
    local_70[uVar4] = local_70[uVar4] | uVar18;
    iVar14 = iVar16 - (int)local_78;
    if (iVar14 != 0 && (int)local_78 <= iVar16) {
      if ((int)local_78 == 0) {
LAB_14331decb:
        if (local_78._4_4_ <= (int)uVar17) {
          local_78 = CONCAT44(0x100,(int)local_78);
          FUN_14497ddce(local_98,uVar7 & 0xffffffff);
          iVar16 = (int)local_78 + iVar14;
        }
        iVar15 = iVar16 + 0x1f;
        if (-1 < iVar16) {
          iVar15 = iVar16;
        }
        local_78 = CONCAT44(local_78._4_4_,iVar16);
        if (iVar16 % 0x20 != 0) {
          bVar13 = -(char)(iVar16 % 0x20);
          local_98[iVar15 >> 5] = (local_98[iVar15 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
        }
      }
      else {
        iVar15 = (int)local_78 + 0x1e;
        if (-1 < (int)local_78 + -1) {
          iVar15 = (int)local_78 + -1;
        }
        if (iVar15 >> 5 != (uint)(uVar3 >> 5)) goto LAB_14331decb;
        local_78 = CONCAT44(local_78._4_4_,iVar16);
      }
      FUN_1447c45ca(local_98,uVar7 & 0xffffffff,iVar14,0);
    }
    local_98[uVar4] = local_98[uVar4] | uVar18;
  }
  uVar7 = local_50;
  uVar18 = uStack_128;
  uVar3 = (ushort)uStack_128;
  uVar17 = uStack_128 & 0xffff;
  if ((ushort)uStack_128 != 0xffff) {
    iVar16 = (uStack_128 & 0xffff) + 1;
    iVar14 = iVar16 - (int)local_50;
    if (iVar14 != 0 && (int)local_50 <= iVar16) {
      if ((int)local_50 == 0) {
LAB_14331df87:
        iVar15 = iVar16;
        if (local_50._4_4_ <= (int)uVar17) {
          local_50 = CONCAT44(0x100,(int)local_50);
          FUN_14497ddce(local_70,uVar7 & 0xffffffff);
          iVar15 = (int)local_50 + iVar14;
        }
        iVar9 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar9 = iVar15;
        }
        local_50 = CONCAT44(local_50._4_4_,iVar15);
        if (iVar15 % 0x20 != 0) {
          bVar13 = -(char)(iVar15 % 0x20);
          local_70[iVar9 >> 5] = (local_70[iVar9 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
        }
      }
      else {
        iVar15 = (int)local_50 + 0x1e;
        if (-1 < (int)local_50 + -1) {
          iVar15 = (int)local_50 + -1;
        }
        if (iVar15 >> 5 != (uint)((ushort)uStack_128 >> 5)) goto LAB_14331df87;
        local_50 = CONCAT44(local_50._4_4_,iVar16);
      }
      FUN_1447c45ca(local_70,uVar7 & 0xffffffff,iVar14,0);
    }
    uVar7 = local_78;
    uVar18 = 1 << ((byte)uVar18 & 0x1f);
    uVar4 = uVar3 >> 5;
    local_70[uVar4] = local_70[uVar4] | uVar18;
    iVar14 = iVar16 - (int)local_78;
    if (iVar14 != 0 && (int)local_78 <= iVar16) {
      if ((int)local_78 == 0) {
LAB_14331e033:
        if (local_78._4_4_ <= (int)uVar17) {
          local_78 = CONCAT44(0x100,(int)local_78);
          FUN_14497ddce(local_98,uVar7 & 0xffffffff);
          iVar16 = (int)local_78 + iVar14;
        }
        iVar15 = iVar16 + 0x1f;
        if (-1 < iVar16) {
          iVar15 = iVar16;
        }
        local_78 = CONCAT44(local_78._4_4_,iVar16);
        if (iVar16 % 0x20 != 0) {
          bVar13 = -(char)(iVar16 % 0x20);
          local_98[iVar15 >> 5] = (local_98[iVar15 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
        }
      }
      else {
        iVar15 = (int)local_78 + 0x1e;
        if (-1 < (int)local_78 + -1) {
          iVar15 = (int)local_78 + -1;
        }
        if (iVar15 >> 5 != (uint)(uVar3 >> 5)) goto LAB_14331e033;
        local_78 = CONCAT44(local_78._4_4_,iVar16);
      }
      FUN_1447c45ca(local_98,uVar7 & 0xffffffff,iVar14,0);
    }
    local_98[uVar4] = local_98[uVar4] | uVar18;
  }
  iVar14 = local_18c;
  local_d8 = 0x10000000000;
  local_b0 = 0x10000000000;
  local_a8 = 0;
  uStack_a0 = 0;
  iVar16 = local_18c;
  if (0xff < uVar6) {
    FUN_14497ddce(local_f8,0);
    iVar16 = (int)local_d8 + iVar14;
  }
  uVar5 = local_178;
  iVar15 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar15 = iVar16;
  }
  local_d8 = CONCAT44(local_d8._4_4_,iVar16);
  local_140 = &local_134;
  if (iVar16 % 0x20 != 0) {
    bVar13 = -(char)(iVar16 % 0x20);
    local_f8[iVar15 >> 5] = (local_f8[iVar15 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
  }
  FUN_1447c45ca(local_f8,0,iVar14,0);
  local_f8[local_188] = local_f8[local_188] | local_190;
  FUN_1417a7dbb((longlong)&local_134 + 2,local_f8);
  local_148 = &local_140;
  local_150 = FUN_1417a7ef6;
  local_100 = local_110;
  (*(code *)(&PTR_LAB_14a475bc0)[local_110])(local_108);
  local_160 = local_180;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_198 = local_98;
  local_1a0 = local_70;
  local_1b0 = &local_150;
  local_1b8 = local_108;
  local_1a8 = local_f8;
  local_158 = plVar12;
  FUN_1406ac01c(uVar5,&local_16c,&local_166,&local_160);
  if (local_16c == -1) {
    if ((local_166 & 0x400) != 0) {
      FUN_145c71394(uVar5,&local_164);
      local_16c = local_164;
      if (local_164 != -1) goto LAB_14331e209;
    }
  }
  else {
LAB_14331e209:
    FUN_1407ce0e2(uVar5,local_16c,0xffffffff);
    FUN_1407cdf34(uVar5,local_16c,0xffffffff);
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (plVar12 != (longlong *)0x0) {
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
LAB_14331e24a:
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14331e408 FUN_14331e408 body=1268 status=ok
// SIG undefined FUN_14331e408(void)

void FUN_14331e408(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined1 local_13d;
  short local_13c;
  undefined2 local_13a;
  undefined4 local_138;
  undefined4 local_134;
  undefined2 local_130;
  undefined1 local_12b;
  undefined4 local_128;
  undefined1 local_124;
  undefined1 local_120 [32];
  undefined1 *local_100;
  ulonglong local_f8;
  longlong local_b0;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar7 = FUN_14009d2a0();
  lVar8 = FUN_14038fb82();
  local_13c = *(short *)(lVar7 + 0x54);
  local_138 = *(undefined4 *)(lVar8 + 0xce);
  local_13a = *(undefined2 *)(lVar8 + 0xcc);
  local_134 = *(undefined4 *)(lVar7 + 0xc2);
  local_130 = *(undefined2 *)(lVar7 + 0xc6);
  local_12b = 0;
  local_128 = 0x6ff;
  local_124 = 0;
  if (local_13c != -1) {
    lVar8 = *(longlong *)(param_1 + 0x28);
    lVar7 = lVar8 + 0x28;
    cVar5 = FUN_1417a7d68(&local_13c,lVar7);
    if (cVar5 != '\0') {
      if ((*(int *)(lVar8 + 0x29c) == 0) && (*(char *)(lVar8 + 0x298) != '\0')) {
        local_100 = (undefined1 *)0x0;
        local_f8 = 0x400000000;
        FUN_1476ae02a(&local_13c,param_2,local_120);
        puVar15 = (undefined1 *)0x0;
        if ((int)local_f8 != 0) {
          puVar15 = local_120;
        }
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_14331e606;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143327e59);
          }
          lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar3 + 0x310);
          *(undefined8 *)(lVar3 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_14331e606:
          puVar14 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar13 = (uint *)(puVar14 + 0x32);
          uVar12 = puVar10[0x12];
          if (puVar13 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar6 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar6 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar14 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar13 = (uint *)(puVar14 + 0x32);
            uVar12 = 0;
            if (puVar13 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_14331e688;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_14331e688:
        *(uint **)(puVar10 + 0x10) = puVar13;
        puVar10[0x12] = uVar12;
        FUN_1447247dc(puVar14,puVar15);
        *puVar14 = &PTR_FUN_14a4e0730;
        FUN_1476ae258(puVar14 + 0x15,&local_13c);
        puVar14[0x2f] = lVar7;
        puVar14[0x30] = *(undefined8 *)(lVar8 + 0x270);
        uVar12 = *(uint *)((longlong)puVar14 + 0xbc);
        if (((ulonglong)uVar12 & 0xff) == 0xff) {
          uVar6 = uVar12 >> 10 & 3;
          iVar16 = 0;
          if ((uVar12 >> 9 & 1) == 0 || uVar6 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar6];
            iVar16 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar16 = (uVar12 >> 7 & 2 | uVar12 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar12 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
        }
        puVar14[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar14[9] = puVar14;
        puVar14[10] = puVar14;
        lVar7 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar7 == 0) {
          uVar4 = 1;
          if ((char)uVar17 != '\x06') {
            uVar4 = uVar17;
          }
          uVar17 = uVar4;
          uVar11 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar7 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar7 + 0x30);
        }
        puVar14[0xf] = uVar11;
        puVar14[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar14 + 0x1c) = iVar16;
        if (puVar14 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
        }
        local_13d = 1;
        local_148 = puVar14;
        FUN_1447439e4(puVar14);
        if (param_3 != 0) {
          FUN_1476ae178(&local_13c,&local_148,param_3);
        }
        puVar15 = local_120;
        if (local_100 != (undefined1 *)0x0) {
          puVar15 = local_100;
        }
        FUN_144717c65(puVar15,local_f8 & 0xffffffff);
        if (local_100 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (puVar14 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar14 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
        }
      }
      else {
        FUN_1476ae258(local_120,&local_13c);
        local_48 = *(undefined8 *)(lVar8 + 0x270);
        local_50 = lVar7;
        FUN_143329456(local_120);
        if (local_b0 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14331e8fd FUN_14331e8fd body=69 status=ok
// SIG undefined FUN_14331e8fd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14331e8fd(void)

{
  _DAT_14cab6118 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014331e93f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cab6120,1);
  return;
}



// FUNCTION 14331e942 FUN_14331e942 body=9162 status=ok
// SIG undefined FUN_14331e942(void)

void FUN_14331e942(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  byte bVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  undefined1 auStack_288 [32];
  undefined1 **local_268;
  code **local_260;
  uint *local_258;
  longlong **local_250;
  uint *local_248;
  undefined8 local_238;
  longlong local_230;
  longlong local_228;
  undefined2 *local_220;
  undefined8 *local_218;
  int local_20c;
  int local_208;
  int local_204;
  ushort local_1fe;
  undefined4 local_1fc;
  longlong *local_1f8;
  longlong *local_1f0;
  undefined8 *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  undefined2 local_1ca;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b7;
  undefined4 local_1b4;
  undefined1 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  uint local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  uint uStack_18c;
  uint local_188 [8];
  undefined8 local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined1 local_128 [32];
  undefined8 local_108;
  undefined1 local_100 [32];
  undefined8 local_e0;
  code *local_d8;
  byte local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  code *local_b8;
  undefined8 **local_b0;
  uint local_a8 [8];
  undefined8 local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_60;
  undefined1 *local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_238 = param_2;
  lVar15 = FUN_14009d2a0();
  lVar16 = FUN_14038fb82();
  puVar10 = (undefined1 *)local_c8;
  uVar4 = *(ushort *)(lVar15 + 0xea);
  local_c8._0_6_ = (uint6)(uint5)local_c8;
  local_c8 = (undefined8 *)CONCAT62(local_c8._2_6_,uVar4);
  uStack_c0 = 0x6ff;
  uStack_bc = uStack_bc & 0xffffff00;
  local_1e8._0_2_ = (ushort)(byte)((ulonglong)puVar10 >> 0x20);
  local_b8 = (code *)&DAT_143329882;
  local_b0 = (undefined8 **)CONCAT71(local_b0._1_7_,3);
  local_230 = lVar16;
  local_228 = param_1;
  if (((uVar4 == 0xffff) || (lVar17 = FUN_14482820e(), *(int *)(lVar17 + 0x20) <= (int)(uint)uVar4))
     || ((*(uint *)(lVar17 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) == 0)) {
    local_204 = -1;
  }
  else {
    plVar18 = (longlong *)FUN_14001cc68(0x30,0x10);
    plVar18[1] = (longlong)&DAT_100000001;
    *plVar18 = (longlong)&PTR_FUN_14a4e0890;
    plVar18[2] = (longlong)&PTR_FUN_14a4e08a8;
    *(undefined4 *)((longlong)plVar18 + 0x1c) = (undefined4)local_c8;
    *(undefined4 *)(plVar18 + 4) = local_c8._4_4_;
    *(undefined4 *)((longlong)plVar18 + 0x24) = uStack_c0;
    *(uint *)(plVar18 + 5) = uStack_bc;
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
    puVar10 = (undefined1 *)local_c8;
    local_60 = 0x10000000000;
    local_88 = 0x10000000000;
    uVar4 = (ushort)local_c8;
    iVar20 = (ushort)local_c8 + 1;
    iVar21 = iVar20;
    if (0xff < (ushort)local_c8) {
      local_60 = 0x10000000000;
      FUN_14497ddce(&local_80,0);
      iVar21 = (int)local_60 + iVar20;
    }
    iVar13 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar13 = iVar21;
    }
    local_60 = CONCAT44(local_60._4_4_,iVar21);
    if (iVar21 % 0x20 != 0) {
      bVar19 = -(char)(iVar21 % 0x20);
      *(uint *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) =
           (uint)(*(int *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) << (bVar19 & 0x1f)) >>
           (bVar19 & 0x1f);
    }
    FUN_1447c45ca(&local_80,0,iVar20,0);
    uVar8 = local_88;
    puVar11 = (undefined1 *)local_c8;
    puVar3 = (uint *)((longlong)&local_80 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)puVar10 & 0x1f);
    uVar4 = (ushort)local_c8;
    uVar14 = (uint)(ushort)local_c8;
    iVar20 = (ushort)local_c8 + 1;
    iVar21 = iVar20 - (int)local_88;
    if (iVar21 != 0 && (int)local_88 <= iVar20) {
      if ((int)local_88 == 0) {
LAB_14331eb5d:
        if (local_88._4_4_ <= (int)uVar14) {
          local_88 = CONCAT44(0x100,(int)local_88);
          FUN_14497ddce(local_a8,uVar8 & 0xffffffff);
          iVar20 = (int)local_88 + iVar21;
        }
        iVar13 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar13 = iVar20;
        }
        local_88 = CONCAT44(local_88._4_4_,iVar20);
        if (iVar20 % 0x20 != 0) {
          bVar19 = -(char)(iVar20 % 0x20);
          local_a8[iVar13 >> 5] = (local_a8[iVar13 >> 5] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_88 + 0x1e;
        if (-1 < (int)local_88 + -1) {
          iVar13 = (int)local_88 + -1;
        }
        if (iVar13 >> 5 != (uint)((ushort)local_c8 >> 5)) goto LAB_14331eb5d;
        local_88 = CONCAT44(local_88._4_4_,iVar20);
      }
      FUN_1447c45ca(local_a8,uVar8 & 0xffffffff,iVar21,0);
      uVar14 = (uint)(ushort)local_c8;
      iVar20 = (ushort)local_c8 + 1;
    }
    local_a8[uVar4 >> 5] = local_a8[uVar4 >> 5] | 1 << ((byte)puVar11 & 0x1f);
    local_188[0] = 0;
    local_188[1] = 0x100;
    local_160 = 0x10000000000;
    local_158 = 0;
    uStack_150 = 0;
    iVar21 = iVar20;
    if (0xff < uVar14) {
      FUN_14497ddce(&local_1a8,0);
      iVar21 = local_188[0] + iVar20;
    }
    local_1e0 = plVar18 + 2;
    iVar13 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar13 = iVar21;
    }
    local_188[0] = iVar21;
    if (iVar21 % 0x20 != 0) {
      bVar19 = -(char)(iVar21 % 0x20);
      *(uint *)((longlong)&local_1a8 + (longlong)(iVar13 >> 5) * 4) =
           (uint)(*(int *)((longlong)&local_1a8 + (longlong)(iVar13 >> 5) * 4) << (bVar19 & 0x1f))
           >> (bVar19 & 0x1f);
    }
    FUN_1447c45ca(&local_1a8,0,iVar20,0);
    puVar3 = (uint *)((longlong)&local_1a8 + (ulonglong)(uVar14 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar14 & 0x1f);
    local_1f8 = &local_c8;
    local_1c0 = &local_1f8;
    local_1c8 = (code *)&LAB_1433298c2;
    local_50 = local_b0._0_1_;
    (*(code *)(&PTR_LAB_14a475bc0)[(ulonglong)local_b0 & 0xff])(&local_58);
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
    }
    local_248 = local_a8;
    local_250 = &local_80;
    local_260 = (code **)&local_1c8;
    local_268 = &local_58;
    local_258 = (uint *)&local_1a8;
    local_1d8 = plVar18;
    FUN_1406ac01c(local_238,&local_204,&local_1e8,&local_1e0);
    if (local_204 == -1) {
      if (((ulonglong)local_1e8 & 0x400) != 0) {
        FUN_145c71394(local_238,&local_d8);
        local_204 = (int)local_d8;
        if ((int)local_d8 != -1) goto LAB_143320b27;
      }
    }
    else {
LAB_143320b27:
      uVar5 = local_238;
      FUN_1407ce0e2(local_238,local_204,0xffffffff);
      FUN_1407cdf34(uVar5,local_204,0xffffffff);
    }
    lVar16 = local_230;
    if (local_158 != 0) {
      FUN_1400020a8();
    }
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar18 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar18)();
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar18 + 0x10))();
        }
      }
    }
  }
  uVar4 = *(ushort *)(lVar16 + 0x84);
  iVar20 = uVar4 + 1;
  local_1a8 = (undefined1 *)*(undefined8 *)(lVar15 + 0xbc);
  uStack_1a0 = *(ulonglong *)(lVar15 + 0xc4);
  local_198 = CONCAT22(local_198._2_2_,*(undefined2 *)(lVar15 + 0xcc));
  uStack_194._0_2_ = (ushort)(byte)uStack_194;
  uStack_190 = 0x6ff;
  uStack_18c = uStack_18c & 0xffffff00;
  local_168 = 0x10000000000;
  local_140 = 0x10000000000;
  local_108 = 0x10000000000;
  local_138 = 0;
  uStack_130 = 0;
  local_e0 = 0x10000000000;
  iVar21 = iVar20;
  if (0xff < uVar4) {
    FUN_14497ddce(local_188,0);
    iVar21 = (int)local_168 + iVar20;
  }
  iVar13 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar13 = iVar21;
  }
  local_168 = CONCAT44(local_168._4_4_,iVar21);
  if (iVar21 % 0x20 != 0) {
    bVar19 = -(char)(iVar21 % 0x20);
    local_188[iVar13 >> 5] = (local_188[iVar13 >> 5] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
  }
  FUN_1447c45ca(local_188,0,iVar20,0);
  local_188[uVar4 >> 5] = local_188[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
  local_d8 = (code *)(CONCAT62(local_d8._2_6_,(ushort)uStack_194) | 0x200);
  local_b8 = (code *)&DAT_1433298da;
  local_b0 = (undefined8 **)CONCAT71(local_b0._1_7_,3);
  plVar18 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar18[1] = (longlong)&DAT_100000001;
  *plVar18 = (longlong)&PTR_FUN_14a4e08b0;
  plVar18[2] = (longlong)&PTR_FUN_14a4e08c8;
  *(undefined4 *)((longlong)plVar18 + 0x1c) = (undefined4)local_1a8;
  *(undefined4 *)(plVar18 + 4) = local_1a8._4_4_;
  *(undefined4 *)((longlong)plVar18 + 0x24) = (undefined4)uStack_1a0;
  *(undefined4 *)(plVar18 + 5) = uStack_1a0._4_4_;
  *(uint *)((longlong)plVar18 + 0x2c) = local_198;
  *(undefined4 *)(plVar18 + 6) = uStack_194;
  *(undefined4 *)((longlong)plVar18 + 0x34) = uStack_190;
  *(uint *)(plVar18 + 7) = uStack_18c;
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  local_60 = 0;
  uVar14 = (int)local_108 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar14) {
    uVar22 = 0x100;
    if (0x100 < uVar14) {
      uVar22 = uVar14;
    }
    local_60 = (ulonglong)uVar22 << 0x20;
    FUN_14497ddce(&local_80,0);
  }
  local_60 = CONCAT44(local_60._4_4_,(int)local_108);
  if ((int)local_108 != 0) {
    memcpy(&local_80,local_128,(ulonglong)((int)local_108 + 0x1fU >> 3 & 0xfffffffc));
  }
  local_88 = 0;
  uVar14 = (int)local_e0 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar14) {
    uVar22 = 0x100;
    if (0x100 < uVar14) {
      uVar22 = uVar14;
    }
    local_88 = (ulonglong)uVar22 << 0x20;
    FUN_14497ddce(local_a8,0);
  }
  local_88 = CONCAT44(local_88._4_4_,(int)local_e0);
  if ((int)local_e0 != 0) {
    memcpy(local_a8,local_100,(ulonglong)((int)local_e0 + 0x1fU >> 3 & 0xfffffffc));
  }
  uVar8 = local_60;
  uVar5 = local_1a8;
  uVar4 = (ushort)local_1a8;
  uVar14 = (uint)(ushort)local_1a8;
  if (uVar14 != 0xffff) {
    iVar21 = (ushort)local_1a8 + 1;
    iVar20 = iVar21 - (int)local_60;
    if (iVar20 != 0 && (int)local_60 <= iVar21) {
      if ((int)local_60 == 0) {
LAB_14331ee55:
        if (local_60._4_4_ <= (int)(uint)(ushort)local_1a8) {
          local_60 = CONCAT44(0x100,(int)local_60);
          FUN_14497ddce(&local_80,uVar8 & 0xffffffff);
          iVar21 = (int)local_60 + iVar20;
        }
        iVar13 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar13 = iVar21;
        }
        local_60 = CONCAT44(local_60._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar19 = -(char)(iVar21 % 0x20);
          *(uint *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) << (bVar19 & 0x1f)
                     ) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_60 + 0x1e;
        if (-1 < (int)local_60 + -1) {
          iVar13 = (int)local_60 + -1;
        }
        if (iVar13 >> 5 != (uint)((ushort)local_1a8 >> 5)) goto LAB_14331ee55;
        local_60 = CONCAT44(local_60._4_4_,iVar21);
      }
      FUN_1447c45ca(&local_80,uVar8 & 0xffffffff,iVar20,0);
      uVar14 = (uint)(ushort)local_1a8;
      iVar21 = uVar14 + 1;
    }
    uVar8 = local_88;
    puVar3 = (uint *)((longlong)&local_80 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar5 & 0x1f);
    iVar20 = iVar21 - (int)local_88;
    if (iVar20 != 0 && (int)local_88 <= iVar21) {
      if ((int)local_88 == 0) {
LAB_14331ef1c:
        if (local_88._4_4_ <= (int)uVar14) {
          local_88 = CONCAT44(0x100,(int)local_88);
          FUN_14497ddce(local_a8,uVar8 & 0xffffffff);
          iVar21 = (int)local_88 + iVar20;
        }
        iVar13 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar13 = iVar21;
        }
        local_88 = CONCAT44(local_88._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar19 = -(char)(iVar21 % 0x20);
          local_a8[iVar13 >> 5] = (local_a8[iVar13 >> 5] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_88 + 0x1e;
        if (-1 < (int)local_88 + -1) {
          iVar13 = (int)local_88 + -1;
        }
        if (iVar13 >> 5 != (uint)((ushort)local_1a8 >> 5)) goto LAB_14331ef1c;
        local_88 = CONCAT44(local_88._4_4_,iVar21);
      }
      FUN_1447c45ca(local_a8,uVar8 & 0xffffffff,iVar20,0);
    }
    local_a8[uVar14 >> 5] = local_a8[uVar14 >> 5] | 1 << ((byte)uVar14 & 0x1f);
  }
  uVar8 = local_60;
  uVar5 = local_1a8;
  uVar4 = local_1a8._2_2_;
  uVar14 = (uint)local_1a8._2_2_;
  if (uVar14 != 0xffff) {
    iVar21 = local_1a8._2_2_ + 1;
    iVar20 = iVar21 - (int)local_60;
    if (iVar20 != 0 && (int)local_60 <= iVar21) {
      if ((int)local_60 == 0) {
LAB_14331efd5:
        if (local_60._4_4_ <= (int)(uint)local_1a8._2_2_) {
          local_60 = CONCAT44(0x100,(int)local_60);
          FUN_14497ddce(&local_80,uVar8 & 0xffffffff);
          iVar21 = (int)local_60 + iVar20;
        }
        iVar13 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar13 = iVar21;
        }
        local_60 = CONCAT44(local_60._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar19 = -(char)(iVar21 % 0x20);
          *(uint *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) << (bVar19 & 0x1f)
                     ) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_60 + 0x1e;
        if (-1 < (int)local_60 + -1) {
          iVar13 = (int)local_60 + -1;
        }
        if (iVar13 >> 5 != (uint)(local_1a8._2_2_ >> 5)) goto LAB_14331efd5;
        local_60 = CONCAT44(local_60._4_4_,iVar21);
      }
      FUN_1447c45ca(&local_80,uVar8 & 0xffffffff,iVar20,0);
      uVar14 = (uint)local_1a8._2_2_;
      iVar21 = uVar14 + 1;
    }
    uVar8 = local_88;
    puVar3 = (uint *)((longlong)&local_80 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)((ulonglong)uVar5 >> 0x10) & 0x1f);
    iVar20 = iVar21 - (int)local_88;
    if (iVar20 != 0 && (int)local_88 <= iVar21) {
      if ((int)local_88 == 0) {
LAB_14331f09c:
        if (local_88._4_4_ <= (int)uVar14) {
          local_88 = CONCAT44(0x100,(int)local_88);
          FUN_14497ddce(local_a8,uVar8 & 0xffffffff);
          iVar21 = (int)local_88 + iVar20;
        }
        iVar13 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar13 = iVar21;
        }
        local_88 = CONCAT44(local_88._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar19 = -(char)(iVar21 % 0x20);
          local_a8[iVar13 >> 5] = (local_a8[iVar13 >> 5] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_88 + 0x1e;
        if (-1 < (int)local_88 + -1) {
          iVar13 = (int)local_88 + -1;
        }
        if (iVar13 >> 5 != (uint)(local_1a8._2_2_ >> 5)) goto LAB_14331f09c;
        local_88 = CONCAT44(local_88._4_4_,iVar21);
      }
      FUN_1447c45ca(local_a8,uVar8 & 0xffffffff,iVar20,0);
    }
    local_a8[uVar14 >> 5] = local_a8[uVar14 >> 5] | 1 << ((byte)uVar14 & 0x1f);
  }
  uVar8 = local_60;
  uVar5 = local_1a8;
  uVar4 = local_1a8._4_2_;
  uVar14 = (uint)local_1a8._4_2_;
  if (uVar14 != 0xffff) {
    iVar21 = local_1a8._4_2_ + 1;
    iVar20 = iVar21 - (int)local_60;
    if (iVar20 != 0 && (int)local_60 <= iVar21) {
      if ((int)local_60 == 0) {
LAB_14331f155:
        if (local_60._4_4_ <= (int)(uint)local_1a8._4_2_) {
          local_60 = CONCAT44(0x100,(int)local_60);
          FUN_14497ddce(&local_80,uVar8 & 0xffffffff);
          iVar21 = (int)local_60 + iVar20;
        }
        iVar13 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar13 = iVar21;
        }
        local_60 = CONCAT44(local_60._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar19 = -(char)(iVar21 % 0x20);
          *(uint *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) << (bVar19 & 0x1f)
                     ) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_60 + 0x1e;
        if (-1 < (int)local_60 + -1) {
          iVar13 = (int)local_60 + -1;
        }
        if (iVar13 >> 5 != (uint)(local_1a8._4_2_ >> 5)) goto LAB_14331f155;
        local_60 = CONCAT44(local_60._4_4_,iVar21);
      }
      FUN_1447c45ca(&local_80,uVar8 & 0xffffffff,iVar20,0);
      uVar14 = (uint)local_1a8._4_2_;
      iVar21 = uVar14 + 1;
    }
    uVar8 = local_88;
    puVar3 = (uint *)((longlong)&local_80 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)((ulonglong)uVar5 >> 0x20) & 0x1f);
    iVar20 = iVar21 - (int)local_88;
    if (iVar20 != 0 && (int)local_88 <= iVar21) {
      if ((int)local_88 == 0) {
LAB_14331f21c:
        if (local_88._4_4_ <= (int)uVar14) {
          local_88 = CONCAT44(0x100,(int)local_88);
          FUN_14497ddce(local_a8,uVar8 & 0xffffffff);
          iVar21 = (int)local_88 + iVar20;
        }
        iVar13 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar13 = iVar21;
        }
        local_88 = CONCAT44(local_88._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar19 = -(char)(iVar21 % 0x20);
          local_a8[iVar13 >> 5] = (local_a8[iVar13 >> 5] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_88 + 0x1e;
        if (-1 < (int)local_88 + -1) {
          iVar13 = (int)local_88 + -1;
        }
        if (iVar13 >> 5 != (uint)(local_1a8._4_2_ >> 5)) goto LAB_14331f21c;
        local_88 = CONCAT44(local_88._4_4_,iVar21);
      }
      FUN_1447c45ca(local_a8,uVar8 & 0xffffffff,iVar20,0);
    }
    local_a8[uVar14 >> 5] = local_a8[uVar14 >> 5] | 1 << ((byte)uVar14 & 0x1f);
  }
  uVar8 = local_60;
  uVar5 = local_1a8;
  uVar4 = local_1a8._6_2_;
  uVar14 = (uint)local_1a8._6_2_;
  if (uVar14 != 0xffff) {
    iVar21 = local_1a8._6_2_ + 1;
    iVar20 = iVar21 - (int)local_60;
    if (iVar20 != 0 && (int)local_60 <= iVar21) {
      if ((int)local_60 == 0) {
LAB_14331f2d5:
        if (local_60._4_4_ <= (int)(uint)local_1a8._6_2_) {
          local_60 = CONCAT44(0x100,(int)local_60);
          FUN_14497ddce(&local_80,uVar8 & 0xffffffff);
          iVar21 = (int)local_60 + iVar20;
        }
        iVar13 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar13 = iVar21;
        }
        local_60 = CONCAT44(local_60._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar19 = -(char)(iVar21 % 0x20);
          *(uint *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) << (bVar19 & 0x1f)
                     ) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_60 + 0x1e;
        if (-1 < (int)local_60 + -1) {
          iVar13 = (int)local_60 + -1;
        }
        if (iVar13 >> 5 != (uint)(local_1a8._6_2_ >> 5)) goto LAB_14331f2d5;
        local_60 = CONCAT44(local_60._4_4_,iVar21);
      }
      FUN_1447c45ca(&local_80,uVar8 & 0xffffffff,iVar20,0);
      uVar14 = (uint)local_1a8._6_2_;
      iVar21 = uVar14 + 1;
    }
    uVar8 = local_88;
    puVar3 = (uint *)((longlong)&local_80 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)((ulonglong)uVar5 >> 0x30) & 0x1f);
    iVar20 = iVar21 - (int)local_88;
    if (iVar20 != 0 && (int)local_88 <= iVar21) {
      if ((int)local_88 == 0) {
LAB_14331f39c:
        if (local_88._4_4_ <= (int)uVar14) {
          local_88 = CONCAT44(0x100,(int)local_88);
          FUN_14497ddce(local_a8,uVar8 & 0xffffffff);
          iVar21 = (int)local_88 + iVar20;
        }
        iVar13 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar13 = iVar21;
        }
        local_88 = CONCAT44(local_88._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar19 = -(char)(iVar21 % 0x20);
          local_a8[iVar13 >> 5] = (local_a8[iVar13 >> 5] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_88 + 0x1e;
        if (-1 < (int)local_88 + -1) {
          iVar13 = (int)local_88 + -1;
        }
        if (iVar13 >> 5 != (uint)(local_1a8._6_2_ >> 5)) goto LAB_14331f39c;
        local_88 = CONCAT44(local_88._4_4_,iVar21);
      }
      FUN_1447c45ca(local_a8,uVar8 & 0xffffffff,iVar20,0);
    }
    local_a8[uVar14 >> 5] = local_a8[uVar14 >> 5] | 1 << ((byte)uVar14 & 0x1f);
  }
  uVar9 = local_60;
  uVar8 = uStack_1a0;
  uVar4 = (ushort)uStack_1a0;
  uVar14 = (uint)(ushort)uStack_1a0;
  if (uVar14 != 0xffff) {
    iVar21 = (ushort)uStack_1a0 + 1;
    iVar20 = iVar21 - (int)local_60;
    if (iVar20 != 0 && (int)local_60 <= iVar21) {
      if ((int)local_60 == 0) {
LAB_14331f455:
        if (local_60._4_4_ <= (int)(uint)(ushort)uStack_1a0) {
          local_60 = CONCAT44(0x100,(int)local_60);
          FUN_14497ddce(&local_80,uVar9 & 0xffffffff);
          iVar21 = (int)local_60 + iVar20;
        }
        iVar13 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar13 = iVar21;
        }
        local_60 = CONCAT44(local_60._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar19 = -(char)(iVar21 % 0x20);
          *(uint *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) << (bVar19 & 0x1f)
                     ) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_60 + 0x1e;
        if (-1 < (int)local_60 + -1) {
          iVar13 = (int)local_60 + -1;
        }
        if (iVar13 >> 5 != (uint)((ushort)uStack_1a0 >> 5)) goto LAB_14331f455;
        local_60 = CONCAT44(local_60._4_4_,iVar21);
      }
      FUN_1447c45ca(&local_80,uVar9 & 0xffffffff,iVar20,0);
      uVar14 = (uint)(ushort)uStack_1a0;
      iVar21 = uVar14 + 1;
    }
    uVar9 = local_88;
    puVar3 = (uint *)((longlong)&local_80 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar8 & 0x1f);
    iVar20 = iVar21 - (int)local_88;
    if (iVar20 != 0 && (int)local_88 <= iVar21) {
      if ((int)local_88 == 0) {
LAB_14331f51c:
        if (local_88._4_4_ <= (int)uVar14) {
          local_88 = CONCAT44(0x100,(int)local_88);
          FUN_14497ddce(local_a8,uVar9 & 0xffffffff);
          iVar21 = (int)local_88 + iVar20;
        }
        iVar13 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar13 = iVar21;
        }
        local_88 = CONCAT44(local_88._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar19 = -(char)(iVar21 % 0x20);
          local_a8[iVar13 >> 5] = (local_a8[iVar13 >> 5] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_88 + 0x1e;
        if (-1 < (int)local_88 + -1) {
          iVar13 = (int)local_88 + -1;
        }
        if (iVar13 >> 5 != (uint)((ushort)uStack_1a0 >> 5)) goto LAB_14331f51c;
        local_88 = CONCAT44(local_88._4_4_,iVar21);
      }
      FUN_1447c45ca(local_a8,uVar9 & 0xffffffff,iVar20,0);
    }
    local_a8[uVar14 >> 5] = local_a8[uVar14 >> 5] | 1 << ((byte)uVar14 & 0x1f);
  }
  uVar9 = local_60;
  uVar8 = uStack_1a0;
  uVar4 = uStack_1a0._2_2_;
  uVar14 = (uint)uStack_1a0._2_2_;
  if (uVar14 != 0xffff) {
    iVar21 = uStack_1a0._2_2_ + 1;
    iVar20 = iVar21 - (int)local_60;
    if (iVar20 != 0 && (int)local_60 <= iVar21) {
      if ((int)local_60 == 0) {
LAB_14331f5d5:
        if (local_60._4_4_ <= (int)(uint)uStack_1a0._2_2_) {
          local_60 = CONCAT44(0x100,(int)local_60);
          FUN_14497ddce(&local_80,uVar9 & 0xffffffff);
          iVar21 = (int)local_60 + iVar20;
        }
        iVar13 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar13 = iVar21;
        }
        local_60 = CONCAT44(local_60._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar19 = -(char)(iVar21 % 0x20);
          *(uint *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) << (bVar19 & 0x1f)
                     ) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_60 + 0x1e;
        if (-1 < (int)local_60 + -1) {
          iVar13 = (int)local_60 + -1;
        }
        if (iVar13 >> 5 != (uint)(uStack_1a0._2_2_ >> 5)) goto LAB_14331f5d5;
        local_60 = CONCAT44(local_60._4_4_,iVar21);
      }
      FUN_1447c45ca(&local_80,uVar9 & 0xffffffff,iVar20,0);
      uVar14 = (uint)uStack_1a0._2_2_;
      iVar21 = uVar14 + 1;
    }
    uVar9 = local_88;
    puVar3 = (uint *)((longlong)&local_80 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)(uVar8 >> 0x10) & 0x1f);
    iVar20 = iVar21 - (int)local_88;
    if (iVar20 != 0 && (int)local_88 <= iVar21) {
      if ((int)local_88 == 0) {
LAB_14331f69c:
        if (local_88._4_4_ <= (int)uVar14) {
          local_88 = CONCAT44(0x100,(int)local_88);
          FUN_14497ddce(local_a8,uVar9 & 0xffffffff);
          iVar21 = (int)local_88 + iVar20;
        }
        iVar13 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar13 = iVar21;
        }
        local_88 = CONCAT44(local_88._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar19 = -(char)(iVar21 % 0x20);
          local_a8[iVar13 >> 5] = (local_a8[iVar13 >> 5] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_88 + 0x1e;
        if (-1 < (int)local_88 + -1) {
          iVar13 = (int)local_88 + -1;
        }
        if (iVar13 >> 5 != (uint)(uStack_1a0._2_2_ >> 5)) goto LAB_14331f69c;
        local_88 = CONCAT44(local_88._4_4_,iVar21);
      }
      FUN_1447c45ca(local_a8,uVar9 & 0xffffffff,iVar20,0);
    }
    local_a8[uVar14 >> 5] = local_a8[uVar14 >> 5] | 1 << ((byte)uVar14 & 0x1f);
  }
  uVar9 = local_60;
  uVar8 = uStack_1a0;
  uVar4 = uStack_1a0._4_2_;
  uVar14 = (uint)uStack_1a0._4_2_;
  if (uVar14 != 0xffff) {
    iVar21 = uStack_1a0._4_2_ + 1;
    iVar20 = iVar21 - (int)local_60;
    if (iVar20 != 0 && (int)local_60 <= iVar21) {
      if ((int)local_60 == 0) {
LAB_14331f755:
        if (local_60._4_4_ <= (int)(uint)uStack_1a0._4_2_) {
          local_60 = CONCAT44(0x100,(int)local_60);
          FUN_14497ddce(&local_80,uVar9 & 0xffffffff);
          iVar21 = (int)local_60 + iVar20;
        }
        iVar13 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar13 = iVar21;
        }
        local_60 = CONCAT44(local_60._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar19 = -(char)(iVar21 % 0x20);
          *(uint *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) << (bVar19 & 0x1f)
                     ) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_60 + 0x1e;
        if (-1 < (int)local_60 + -1) {
          iVar13 = (int)local_60 + -1;
        }
        if (iVar13 >> 5 != (uint)(uStack_1a0._4_2_ >> 5)) goto LAB_14331f755;
        local_60 = CONCAT44(local_60._4_4_,iVar21);
      }
      FUN_1447c45ca(&local_80,uVar9 & 0xffffffff,iVar20,0);
      uVar14 = (uint)uStack_1a0._4_2_;
      iVar21 = uVar14 + 1;
    }
    uVar9 = local_88;
    puVar3 = (uint *)((longlong)&local_80 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)(uVar8 >> 0x20) & 0x1f);
    iVar20 = iVar21 - (int)local_88;
    if (iVar20 != 0 && (int)local_88 <= iVar21) {
      if ((int)local_88 == 0) {
LAB_14331f81c:
        if (local_88._4_4_ <= (int)uVar14) {
          local_88 = CONCAT44(0x100,(int)local_88);
          FUN_14497ddce(local_a8,uVar9 & 0xffffffff);
          iVar21 = (int)local_88 + iVar20;
        }
        iVar13 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar13 = iVar21;
        }
        local_88 = CONCAT44(local_88._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar19 = -(char)(iVar21 % 0x20);
          local_a8[iVar13 >> 5] = (local_a8[iVar13 >> 5] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_88 + 0x1e;
        if (-1 < (int)local_88 + -1) {
          iVar13 = (int)local_88 + -1;
        }
        if (iVar13 >> 5 != (uint)(uStack_1a0._4_2_ >> 5)) goto LAB_14331f81c;
        local_88 = CONCAT44(local_88._4_4_,iVar21);
      }
      FUN_1447c45ca(local_a8,uVar9 & 0xffffffff,iVar20,0);
    }
    local_a8[uVar14 >> 5] = local_a8[uVar14 >> 5] | 1 << ((byte)uVar14 & 0x1f);
  }
  uVar9 = local_60;
  uVar8 = uStack_1a0;
  uVar4 = uStack_1a0._6_2_;
  uVar14 = (uint)uStack_1a0._6_2_;
  if (uVar14 != 0xffff) {
    iVar21 = uStack_1a0._6_2_ + 1;
    iVar20 = iVar21 - (int)local_60;
    if (iVar20 != 0 && (int)local_60 <= iVar21) {
      if ((int)local_60 == 0) {
LAB_14331f8d5:
        if (local_60._4_4_ <= (int)(uint)uStack_1a0._6_2_) {
          local_60 = CONCAT44(0x100,(int)local_60);
          FUN_14497ddce(&local_80,uVar9 & 0xffffffff);
          iVar21 = (int)local_60 + iVar20;
        }
        iVar13 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar13 = iVar21;
        }
        local_60 = CONCAT44(local_60._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar19 = -(char)(iVar21 % 0x20);
          *(uint *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) << (bVar19 & 0x1f)
                     ) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_60 + 0x1e;
        if (-1 < (int)local_60 + -1) {
          iVar13 = (int)local_60 + -1;
        }
        if (iVar13 >> 5 != (uint)(uStack_1a0._6_2_ >> 5)) goto LAB_14331f8d5;
        local_60 = CONCAT44(local_60._4_4_,iVar21);
      }
      FUN_1447c45ca(&local_80,uVar9 & 0xffffffff,iVar20,0);
      uVar14 = (uint)uStack_1a0._6_2_;
      iVar21 = uVar14 + 1;
    }
    uVar9 = local_88;
    puVar3 = (uint *)((longlong)&local_80 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)(uVar8 >> 0x30) & 0x1f);
    iVar20 = iVar21 - (int)local_88;
    if (iVar20 != 0 && (int)local_88 <= iVar21) {
      if ((int)local_88 == 0) {
LAB_14331f99c:
        if (local_88._4_4_ <= (int)uVar14) {
          local_88 = CONCAT44(0x100,(int)local_88);
          FUN_14497ddce(local_a8,uVar9 & 0xffffffff);
          iVar21 = (int)local_88 + iVar20;
        }
        iVar13 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar13 = iVar21;
        }
        local_88 = CONCAT44(local_88._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar19 = -(char)(iVar21 % 0x20);
          local_a8[iVar13 >> 5] = (local_a8[iVar13 >> 5] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_88 + 0x1e;
        if (-1 < (int)local_88 + -1) {
          iVar13 = (int)local_88 + -1;
        }
        if (iVar13 >> 5 != (uint)(uStack_1a0._6_2_ >> 5)) goto LAB_14331f99c;
        local_88 = CONCAT44(local_88._4_4_,iVar21);
      }
      FUN_1447c45ca(local_a8,uVar9 & 0xffffffff,iVar20,0);
    }
    local_a8[uVar14 >> 5] = local_a8[uVar14 >> 5] | 1 << ((byte)uVar14 & 0x1f);
  }
  uVar8 = local_60;
  uVar14 = local_198;
  uVar4 = (ushort)local_198;
  uVar22 = local_198 & 0xffff;
  if (uVar22 != 0xffff) {
    iVar21 = (local_198 & 0xffff) + 1;
    iVar20 = iVar21 - (int)local_60;
    if (iVar20 != 0 && (int)local_60 <= iVar21) {
      if ((int)local_60 == 0) {
LAB_14331fa5a:
        if (local_60._4_4_ <= (int)(local_198 & 0xffff)) {
          local_60 = CONCAT44(0x100,(int)local_60);
          FUN_14497ddce(&local_80,uVar8 & 0xffffffff);
          iVar21 = (int)local_60 + iVar20;
        }
        iVar13 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar13 = iVar21;
        }
        local_60 = CONCAT44(local_60._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar19 = -(char)(iVar21 % 0x20);
          *(uint *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) << (bVar19 & 0x1f)
                     ) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_60 + 0x1e;
        if (-1 < (int)local_60 + -1) {
          iVar13 = (int)local_60 + -1;
        }
        if (iVar13 >> 5 != (uint)((ushort)local_198 >> 5)) goto LAB_14331fa5a;
        local_60 = CONCAT44(local_60._4_4_,iVar21);
      }
      FUN_1447c45ca(&local_80,uVar8 & 0xffffffff,iVar20,0);
      uVar22 = local_198 & 0xffff;
      iVar21 = uVar22 + 1;
    }
    uVar8 = local_88;
    puVar3 = (uint *)((longlong)&local_80 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar14 & 0x1f);
    iVar20 = iVar21 - (int)local_88;
    if (iVar20 != 0 && (int)local_88 <= iVar21) {
      if ((int)local_88 == 0) {
LAB_14331fb22:
        if (local_88._4_4_ <= (int)uVar22) {
          local_88 = CONCAT44(0x100,(int)local_88);
          FUN_14497ddce(local_a8,uVar8 & 0xffffffff);
          iVar21 = (int)local_88 + iVar20;
        }
        iVar13 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar13 = iVar21;
        }
        local_88 = CONCAT44(local_88._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar19 = -(char)(iVar21 % 0x20);
          local_a8[iVar13 >> 5] = (local_a8[iVar13 >> 5] << (bVar19 & 0x1f)) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_88 + 0x1e;
        if (-1 < (int)local_88 + -1) {
          iVar13 = (int)local_88 + -1;
        }
        if (iVar13 >> 5 != (uint)((ushort)local_198 >> 5)) goto LAB_14331fb22;
        local_88 = CONCAT44(local_88._4_4_,iVar21);
      }
      FUN_1447c45ca(local_a8,uVar8 & 0xffffffff,iVar20,0);
    }
    local_a8[uVar22 >> 5] = local_a8[uVar22 >> 5] | 1 << ((byte)uVar22 & 0x1f);
  }
  local_c8 = &local_1a8;
  local_1c0 = (longlong **)&local_c8;
  local_1c8 = FUN_14332991a;
  local_50 = local_b0._0_1_;
  (*(code *)(&PTR_LAB_14a475bc0)[(ulonglong)local_b0 & 0xff])(&local_58);
  lVar16 = local_230;
  uVar5 = local_238;
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
  }
  local_248 = local_a8;
  local_250 = &local_80;
  local_258 = local_188;
  local_260 = (code **)&local_1c8;
  local_268 = &local_58;
  local_1e0 = plVar18 + 2;
  local_1d8 = plVar18;
  FUN_1406ac01c(local_238,&local_208,&local_d8,&local_1e0);
  if (local_208 == -1) {
    if (((ulonglong)local_d8 & 0x400) != 0) {
      FUN_145c71394(uVar5,&local_1f8);
      local_208 = (int)local_1f8;
      if ((int)local_1f8 != -1) goto LAB_14331fc70;
    }
  }
  else {
LAB_14331fc70:
    FUN_1407ce0e2(uVar5,local_208,0xffffffff);
    FUN_1407cdf34(uVar5,local_208,0xffffffff);
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  puVar6 = local_1c0;
  local_1c8 = (code *)CONCAT26(*(undefined2 *)(lVar15 + 0x4a),
                               CONCAT24(*(undefined2 *)(lVar15 + 0x4e),
                                        CONCAT22(*(undefined2 *)(lVar15 + 0x50),
                                                 (undefined2)local_1c8)));
  local_1c0._6_2_ = SUB82(puVar6,6);
  local_1c0._0_6_ =
       CONCAT24(*(undefined2 *)(lVar15 + 0xf4),
                CONCAT22(*(undefined2 *)(lVar15 + 0x54),*(undefined2 *)(lVar16 + 0xe4)));
  local_1b7 = 0;
  local_1b4 = 0x6ff;
  local_1b0 = 0;
  local_1ca = *(undefined2 *)(lVar15 + 0x130);
  local_220 = &local_1ca;
  local_218 = &local_1c8;
  FUN_1417a6d08(&local_1c8,&local_1a8);
  lVar16 = local_228 + 0x40;
  lVar15 = *(longlong *)(*(longlong *)(local_228 + 0x28) + 0x548);
  local_1fe = (ushort)local_198 | 0x200;
  local_d8 = FUN_1406b7cc4;
  local_d0 = 3;
  if (((local_1a8._2_2_ == -1) || (local_1a8._4_2_ == -1)) ||
     ((local_1a8._6_2_ == -1 ||
      (((ushort)uStack_1a0 == -1 ||
       (cVar12 = FUN_1417a80cc(&local_1a8,*(longlong *)(local_228 + 0x28) + 0x28), cVar12 == '\0')))
      ))) {
    local_20c = -1;
    goto LAB_1433204bf;
  }
  plVar18 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar18[1] = (longlong)&DAT_100000001;
  *plVar18 = (longlong)&PTR_FUN_14a4e08d0;
  plVar18[2] = (longlong)&PTR_FUN_14a4e08e8;
  plVar18[3] = lVar15;
  plVar18[4] = lVar16;
  *(undefined4 *)(plVar18 + 5) = (undefined4)local_1a8;
  *(undefined4 *)((longlong)plVar18 + 0x2c) = local_1a8._4_4_;
  *(undefined4 *)(plVar18 + 6) = (undefined4)uStack_1a0;
  *(undefined4 *)((longlong)plVar18 + 0x34) = uStack_1a0._4_4_;
  *(undefined4 *)((longlong)plVar18 + 0x34) = uStack_1a0._4_4_;
  *(uint *)(plVar18 + 7) = local_198;
  *(undefined4 *)((longlong)plVar18 + 0x3c) = uStack_194;
  *(undefined4 *)(plVar18 + 8) = uStack_190;
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  local_60 = 0;
  uVar14 = (int)local_108 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar14) {
    uVar22 = 0x100;
    if (0x100 < uVar14) {
      uVar22 = uVar14;
    }
    local_60 = (ulonglong)uVar22 << 0x20;
    FUN_14497ddce(&local_80,0);
  }
  local_60 = CONCAT44(local_60._4_4_,(int)local_108);
  if ((int)local_108 != 0) {
    memcpy(&local_80,local_128,(ulonglong)((int)local_108 + 0x1fU >> 3 & 0xfffffffc));
  }
  local_88 = 0;
  uVar14 = (int)local_e0 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar14) {
    uVar22 = 0x100;
    if (0x100 < uVar14) {
      uVar22 = uVar14;
    }
    local_88 = (ulonglong)uVar22 << 0x20;
    FUN_14497ddce(local_a8,0);
  }
  local_88 = CONCAT44(local_88._4_4_,(int)local_e0);
  if ((int)local_e0 != 0) {
    memcpy(local_a8,local_100,(ulonglong)((int)local_e0 + 0x1fU >> 3 & 0xfffffffc));
  }
  uVar8 = local_60;
  uVar5 = local_1a8;
  uVar4 = local_1a8._2_2_;
  iVar21 = local_1a8._2_2_ + 1;
  iVar20 = iVar21 - (int)local_60;
  if (iVar20 != 0 && (int)local_60 <= iVar21) {
    if ((int)local_60 == 0) {
LAB_14331ffaa:
      if (local_60._4_4_ <= (int)(uint)local_1a8._2_2_) {
        local_60 = CONCAT44(0x100,(int)local_60);
        FUN_14497ddce(&local_80,uVar8 & 0xffffffff);
        iVar21 = (int)local_60 + iVar20;
      }
      iVar13 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar13 = iVar21;
      }
      local_60 = CONCAT44(local_60._4_4_,iVar21);
      if (iVar21 % 0x20 != 0) {
        bVar19 = -(char)(iVar21 % 0x20);
        *(uint *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) =
             (uint)(*(int *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) << (bVar19 & 0x1f))
             >> (bVar19 & 0x1f);
      }
    }
    else {
      iVar13 = (int)local_60 + 0x1e;
      if (-1 < (int)local_60 + -1) {
        iVar13 = (int)local_60 + -1;
      }
      if (iVar13 >> 5 != (uint)(local_1a8._2_2_ >> 5)) goto LAB_14331ffaa;
      local_60 = CONCAT44(local_60._4_4_,iVar21);
    }
    FUN_1447c45ca(&local_80,uVar8 & 0xffffffff,iVar20,0);
  }
  uVar7 = local_1a8;
  puVar3 = (uint *)((longlong)&local_80 + (ulonglong)(uVar4 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)((ulonglong)uVar5 >> 0x10) & 0x1f);
  uVar8 = local_60;
  uVar4 = local_1a8._4_2_;
  iVar21 = local_1a8._4_2_ + 1;
  iVar20 = iVar21 - (int)local_60;
  if (iVar20 != 0 && (int)local_60 <= iVar21) {
    if ((int)local_60 == 0) {
LAB_143320051:
      if (local_60._4_4_ <= (int)(uint)local_1a8._4_2_) {
        local_60 = CONCAT44(0x100,(int)local_60);
        FUN_14497ddce(&local_80,uVar8 & 0xffffffff);
        iVar21 = (int)local_60 + iVar20;
      }
      iVar13 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar13 = iVar21;
      }
      local_60 = CONCAT44(local_60._4_4_,iVar21);
      if (iVar21 % 0x20 != 0) {
        bVar19 = -(char)(iVar21 % 0x20);
        *(uint *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) =
             (uint)(*(int *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) << (bVar19 & 0x1f))
             >> (bVar19 & 0x1f);
      }
    }
    else {
      iVar13 = (int)local_60 + 0x1e;
      if (-1 < (int)local_60 + -1) {
        iVar13 = (int)local_60 + -1;
      }
      if (iVar13 >> 5 != (uint)(local_1a8._4_2_ >> 5)) goto LAB_143320051;
      local_60 = CONCAT44(local_60._4_4_,iVar21);
    }
    FUN_1447c45ca(&local_80,uVar8 & 0xffffffff,iVar20,0);
  }
  uVar5 = local_1a8;
  puVar3 = (uint *)((longlong)&local_80 + (ulonglong)(uVar4 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)((ulonglong)uVar7 >> 0x20) & 0x1f);
  uVar8 = local_60;
  uVar4 = local_1a8._6_2_;
  iVar21 = local_1a8._6_2_ + 1;
  iVar20 = iVar21 - (int)local_60;
  if (iVar20 != 0 && (int)local_60 <= iVar21) {
    if ((int)local_60 == 0) {
LAB_1433200ee:
      if (local_60._4_4_ <= (int)(uint)local_1a8._6_2_) {
        local_60 = CONCAT44(0x100,(int)local_60);
        FUN_14497ddce(&local_80,uVar8 & 0xffffffff);
        iVar21 = (int)local_60 + iVar20;
      }
      iVar13 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar13 = iVar21;
      }
      local_60 = CONCAT44(local_60._4_4_,iVar21);
      if (iVar21 % 0x20 != 0) {
        bVar19 = -(char)(iVar21 % 0x20);
        *(uint *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) =
             (uint)(*(int *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) << (bVar19 & 0x1f))
             >> (bVar19 & 0x1f);
      }
    }
    else {
      iVar13 = (int)local_60 + 0x1e;
      if (-1 < (int)local_60 + -1) {
        iVar13 = (int)local_60 + -1;
      }
      if (iVar13 >> 5 != (uint)(local_1a8._6_2_ >> 5)) goto LAB_1433200ee;
      local_60 = CONCAT44(local_60._4_4_,iVar21);
    }
    FUN_1447c45ca(&local_80,uVar8 & 0xffffffff,iVar20,0);
  }
  uVar8 = uStack_1a0;
  puVar3 = (uint *)((longlong)&local_80 + (ulonglong)(uVar4 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)((ulonglong)uVar5 >> 0x30) & 0x1f);
  uVar9 = local_60;
  uVar4 = (ushort)uStack_1a0;
  iVar21 = (ushort)uStack_1a0 + 1;
  iVar20 = iVar21 - (int)local_60;
  if (iVar20 != 0 && (int)local_60 <= iVar21) {
    if ((int)local_60 == 0) {
LAB_143320195:
      if (local_60._4_4_ <= (int)(uint)(ushort)uStack_1a0) {
        local_60 = CONCAT44(0x100,(int)local_60);
        FUN_14497ddce(&local_80,uVar9 & 0xffffffff);
        iVar21 = (int)local_60 + iVar20;
      }
      iVar13 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar13 = iVar21;
      }
      local_60 = CONCAT44(local_60._4_4_,iVar21);
      if (iVar21 % 0x20 != 0) {
        bVar19 = -(char)(iVar21 % 0x20);
        *(uint *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) =
             (uint)(*(int *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) << (bVar19 & 0x1f))
             >> (bVar19 & 0x1f);
      }
    }
    else {
      iVar13 = (int)local_60 + 0x1e;
      if (-1 < (int)local_60 + -1) {
        iVar13 = (int)local_60 + -1;
      }
      if (iVar13 >> 5 != (uint)((ushort)uStack_1a0 >> 5)) goto LAB_143320195;
      local_60 = CONCAT44(local_60._4_4_,iVar21);
    }
    FUN_1447c45ca(&local_80,uVar9 & 0xffffffff,iVar20,0);
  }
  uVar9 = uStack_1a0;
  puVar3 = (uint *)((longlong)&local_80 + (ulonglong)(uVar4 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)uVar8 & 0x1f);
  uVar8 = local_60;
  uVar4 = uStack_1a0._2_2_;
  if (uStack_1a0._2_2_ != 0xffff) {
    iVar21 = uStack_1a0._2_2_ + 1;
    iVar20 = iVar21 - (int)local_60;
    if (iVar20 != 0 && (int)local_60 <= iVar21) {
      if ((int)local_60 == 0) {
LAB_14332023e:
        if (local_60._4_4_ <= (int)(uint)uStack_1a0._2_2_) {
          local_60 = CONCAT44(0x100,(int)local_60);
          FUN_14497ddce(&local_80,uVar8 & 0xffffffff);
          iVar21 = (int)local_60 + iVar20;
        }
        iVar13 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar13 = iVar21;
        }
        local_60 = CONCAT44(local_60._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar19 = -(char)(iVar21 % 0x20);
          *(uint *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) << (bVar19 & 0x1f)
                     ) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_60 + 0x1e;
        if (-1 < (int)local_60 + -1) {
          iVar13 = (int)local_60 + -1;
        }
        if (iVar13 >> 5 != (uint)(uStack_1a0._2_2_ >> 5)) goto LAB_14332023e;
        local_60 = CONCAT44(local_60._4_4_,iVar21);
      }
      FUN_1447c45ca(&local_80,uVar8 & 0xffffffff,iVar20,0);
    }
    puVar3 = (uint *)((longlong)&local_80 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)(uVar9 >> 0x10) & 0x1f);
  }
  uVar9 = local_60;
  uVar8 = uStack_1a0;
  uVar4 = uStack_1a0._4_2_;
  if (uStack_1a0._4_2_ != 0xffff) {
    iVar21 = uStack_1a0._4_2_ + 1;
    iVar20 = iVar21 - (int)local_60;
    if (iVar20 != 0 && (int)local_60 <= iVar21) {
      if ((int)local_60 == 0) {
LAB_1433202f1:
        if (local_60._4_4_ <= (int)(uint)uStack_1a0._4_2_) {
          local_60 = CONCAT44(0x100,(int)local_60);
          FUN_14497ddce(&local_80,uVar9 & 0xffffffff);
          iVar21 = (int)local_60 + iVar20;
        }
        iVar13 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar13 = iVar21;
        }
        local_60 = CONCAT44(local_60._4_4_,iVar21);
        if (iVar21 % 0x20 != 0) {
          bVar19 = -(char)(iVar21 % 0x20);
          *(uint *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_80 + (longlong)(iVar13 >> 5) * 4) << (bVar19 & 0x1f)
                     ) >> (bVar19 & 0x1f);
        }
      }
      else {
        iVar13 = (int)local_60 + 0x1e;
        if (-1 < (int)local_60 + -1) {
          iVar13 = (int)local_60 + -1;
        }
        if (iVar13 >> 5 != (uint)(uStack_1a0._4_2_ >> 5)) goto LAB_1433202f1;
        local_60 = CONCAT44(local_60._4_4_,iVar21);
      }
      FUN_1447c45ca(&local_80,uVar9 & 0xffffffff,iVar20,0);
    }
    puVar3 = (uint *)((longlong)&local_80 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)(uVar8 >> 0x20) & 0x1f);
  }
  local_b0 = &local_1e8;
  local_1e8 = &local_1a8;
  local_b8 = FUN_1417a81de;
  uStack_c0 = CONCAT31(uStack_c0._1_3_,local_d0);
  (*(code *)(&PTR_LAB_14a475bc0)[local_d0])(&local_c8);
  local_260 = &local_b8;
  local_248 = local_a8;
  local_250 = &local_80;
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
  }
  local_258 = local_188;
  local_268 = (undefined1 **)&local_c8;
  local_1f8 = plVar18 + 2;
  local_1f0 = plVar18;
  FUN_1406ac01c(local_238,&local_20c,&local_1fe,&local_1f8);
  if (local_20c == -1) {
    if ((local_1fe & 0x400) != 0) {
      FUN_145c71394(local_238,&local_58);
      local_20c = (int)local_58;
      if ((int)local_58 != -1) goto LAB_14332042e;
    }
  }
  else {
LAB_14332042e:
    uVar5 = local_238;
    local_50 = 0;
    local_58 = &LAB_143329c22;
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
    }
    local_268 = &local_58;
    local_1e0 = plVar18 + 2;
    local_1d8 = plVar18;
    FUN_1406abf4a(local_238,&local_1fc,&local_1fe,&local_1e0);
    FUN_1407ce0e2(uVar5,local_20c,local_1fc);
    FUN_1407cdf34(uVar5,local_20c,0xffffffff);
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
LAB_1433204bf:
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  local_1c8._0_2_ = CONCAT11((local_1c8._1_1_ & 0xe4) + 1,(undefined1)local_1c8);
  uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
  local_1a8 = &LAB_140732588;
  plVar18 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar18[1] = (longlong)&DAT_100000001;
  *plVar18 = (longlong)&PTR_FUN_14a4e08f0;
  plVar18[2] = (longlong)&PTR_FUN_14a4e0908;
  FUN_140dd5b4c(plVar18 + 3,*(undefined8 *)(local_228 + 0x28),lVar16);
  uVar5 = local_238;
  local_268 = (undefined1 **)&local_1a8;
  local_80 = plVar18 + 2;
  local_78 = plVar18;
  if (plVar18 == (longlong *)0x0) {
    FUN_1406abf4a(local_238,local_a8,&local_1c8,&local_80);
  }
  else {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
    FUN_1406abf4a(local_238,local_a8,&local_1c8,&local_80);
    LOCK();
    plVar1 = plVar18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  FUN_1406adae8(uVar5,local_20c,local_a8[0]);
  FUN_1406adae8(uVar5,local_208,local_a8[0]);
  FUN_1406adae8(uVar5,local_204,local_a8[0]);
  if ((local_48 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143320d0e FUN_143320d0e body=5692 status=ok
// SIG undefined FUN_143320d0e(void)

void FUN_143320d0e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  ushort uVar4;
  undefined2 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  ushort *puVar16;
  int iVar17;
  longlong lVar18;
  uint *puVar19;
  ulonglong uVar20;
  int iVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  int iVar24;
  int iVar25;
  longlong *plVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  uint uVar30;
  ulonglong *puVar31;
  ulonglong uVar32;
  bool bVar33;
  undefined1 auStack_378 [38];
  char local_352;
  byte local_351;
  longlong *local_350;
  ulonglong local_348;
  longlong local_340;
  int local_334;
  ulonglong local_330;
  undefined8 *local_328;
  int local_31c;
  longlong *local_318;
  undefined8 local_310;
  ulonglong local_308;
  longlong local_300;
  undefined2 *local_2f8;
  undefined2 *local_2f0;
  longlong local_2e8;
  longlong *local_2e0;
  undefined8 *local_2d8;
  longlong local_2d0;
  int local_2c8;
  undefined8 local_2bc;
  ulonglong local_2b4;
  undefined4 local_2ac;
  longlong local_2a8;
  int local_2a0;
  uint local_294;
  byte local_290;
  undefined2 local_28c;
  undefined2 local_28a;
  undefined2 local_288;
  undefined1 local_283;
  undefined4 local_280;
  undefined1 local_27c;
  undefined8 local_278;
  undefined8 local_270;
  byte local_268;
  undefined7 uStack_267;
  undefined8 local_258;
  short local_250 [8];
  longlong *local_240;
  undefined8 *local_238;
  longlong *local_230;
  undefined1 local_228 [8];
  longlong *local_220;
  longlong local_208;
  longlong local_200;
  int local_1f8;
  undefined4 local_1f4;
  longlong local_1e8;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_177;
  undefined4 local_174;
  undefined1 local_170;
  undefined8 local_168;
  undefined1 local_160 [32];
  undefined8 local_140;
  longlong local_138;
  ulonglong uStack_130;
  ushort local_128 [12];
  undefined8 local_110;
  ushort *local_108;
  ulonglong local_100;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [24];
  longlong local_c0;
  undefined1 *local_b8;
  ulonglong local_b0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  lVar7 = FUN_14009d2a0();
  lVar8 = FUN_14038fb82();
  lVar18 = local_180;
  lVar27 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x5d8);
  plVar22 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x5e0);
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
    UNLOCK();
  }
  if (*(char *)(lVar27 + 0x7c) == '\x04') {
    if (DAT_14cab6110 == '\x01') {
      FUN_140dd66ec(*(longlong *)(param_1 + 0x28) + 0x430,&local_2e8,DAT_14cab6128);
      local_168 = 0x10000000000;
      local_140 = 0x10000000000;
      local_138 = 0;
      uStack_130 = 0;
      local_128[0] = *(ushort *)(lVar8 + 0xe4);
      local_128[1] = *(short *)(lVar7 + 0x11a);
      lVar27 = 0;
      do {
        uVar32 = local_168;
        uVar4 = *(ushort *)((longlong)local_128 + lVar27);
        iVar14 = uVar4 + 1;
        iVar21 = iVar14 - (int)local_168;
        if (iVar21 != 0 && (int)local_168 <= iVar14) {
          if ((int)local_168 == 0) {
LAB_143321236:
            if (local_168._4_4_ <= (int)(uint)uVar4) {
              local_168 = CONCAT44(0x100,(int)local_168);
              FUN_14497ddce(&local_188,uVar32 & 0xffffffff);
              iVar14 = (int)local_168 + iVar21;
            }
            iVar17 = iVar14 + 0x1f;
            if (-1 < iVar14) {
              iVar17 = iVar14;
            }
            local_168 = CONCAT44(local_168._4_4_,iVar14);
            if (iVar14 % 0x20 != 0) {
              bVar12 = -(char)(iVar14 % 0x20);
              *(uint *)((longlong)&local_188 + (longlong)(iVar17 >> 5) * 4) =
                   (uint)(*(int *)((longlong)&local_188 + (longlong)(iVar17 >> 5) * 4) <<
                         (bVar12 & 0x1f)) >> (bVar12 & 0x1f);
            }
          }
          else {
            iVar17 = (int)local_168 + 0x1e;
            if (-1 < (int)local_168 + -1) {
              iVar17 = (int)local_168 + -1;
            }
            if (iVar17 >> 5 != (uint)(uVar4 >> 5)) goto LAB_143321236;
            local_168 = CONCAT44(local_168._4_4_,iVar14);
          }
          FUN_1447c45ca(&local_188,uVar32 & 0xffffffff,iVar21,0);
        }
        puVar11 = (uint *)((longlong)&local_188 + (ulonglong)(uVar4 >> 5) * 4);
        *puVar11 = *puVar11 | 1 << ((byte)uVar4 & 0x1f);
        lVar27 = lVar27 + 2;
      } while (lVar27 != 4);
      uVar5 = *(undefined2 *)(lVar7 + 0x4a);
      lVar27 = *(longlong *)(param_1 + 0x28);
      local_258 = local_2e8;
      local_230 = (longlong *)0x0;
      uVar30 = (int)local_168 + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar30) {
        uVar13 = 0x100;
        if (0x100 < uVar30) {
          uVar13 = uVar30;
        }
        local_230 = (longlong *)((ulonglong)uVar13 << 0x20);
        FUN_14497ddce(local_250,0);
      }
      local_230 = (longlong *)CONCAT44(local_230._4_4_,(int)local_168);
      if ((int)local_168 != 0) {
        memcpy(local_250,&local_188,(ulonglong)((int)local_168 + 0x1fU >> 3 & 0xfffffffc));
      }
      local_208 = 0;
      uVar30 = (int)local_140 + 0x1fU & 0xffffffe0;
      if (0 < (int)uVar30) {
        uVar13 = 0x100;
        if (0x100 < uVar30) {
          uVar13 = uVar30;
        }
        local_208 = (ulonglong)uVar13 << 0x20;
        FUN_14497ddce(local_228,0);
      }
      local_208 = CONCAT44(local_208._4_4_,(int)local_140);
      if ((int)local_140 != 0) {
        memcpy(local_228,local_160,(ulonglong)((int)local_140 + 0x1fU >> 3 & 0xfffffffc));
      }
      uVar32 = uStack_130;
      lVar18 = local_138;
      local_200 = 0;
      local_1f8 = (int)uStack_130;
      if ((int)uStack_130 == 0) {
        local_1f4 = 0;
      }
      else {
        FUN_1403b8c86(&local_200,uStack_130 & 0xffffffff,0);
        FUN_1403b8bfd(local_200,lVar18,uVar32 & 0xffffffff);
      }
      lVar18 = FUN_14009d2a0();
      local_28a = *(undefined2 *)(lVar18 + 0x50);
      local_283 = 0;
      local_280 = 0x6ff;
      local_27c = 0;
      local_288 = uVar5;
      FUN_1476b05c4(local_128,&local_28c,&local_188);
      if ((local_128[1] != -1) && (local_128[2] != -1)) {
        local_2d0 = lVar27 + 0x28;
        local_2d8 = &local_110;
        local_352 = *(char *)(lVar27 + 0x298);
        if (local_352 == '\0') {
          *(int *)(lVar27 + 0x28c) = *(int *)(lVar27 + 0x28c) + 1;
        }
        else {
          LOCK();
          *(int *)(lVar27 + 0x28c) = *(int *)(lVar27 + 0x28c) + 1;
          UNLOCK();
        }
        iVar14 = FUN_1403b8464(&local_2d8);
        local_31c = *(int *)(lVar27 + 0x38);
        lVar27 = param_1;
        plVar26 = plVar22;
        local_2c8 = iVar14;
        if (iVar14 != local_31c) {
          do {
            local_318 = plVar26;
            local_340 = lVar27;
            lVar18 = local_2d0;
            lVar27 = *(longlong *)(*(longlong *)(local_2d0 + 0x60) + (longlong)iVar14 * 8);
            if (local_352 == '\0') {
              *(undefined4 *)(lVar27 + 0x14) = 0;
              lVar7 = lVar27;
            }
            else {
              lVar7 = 0;
            }
            if (*(ushort *)(lVar27 + 0xc) != 0) {
              plVar26 = *(longlong **)(lVar27 + 0x28);
              lVar8 = (ulonglong)*(ushort *)(lVar27 + 0xc) << 5;
              do {
                if (*(short *)((longlong)plVar26 + 0x1e) == local_128[2]) goto LAB_1433218d2;
                plVar26 = plVar26 + 4;
                lVar8 = lVar8 + -0x20;
              } while (lVar8 != 0);
            }
            plVar26 = (longlong *)0x0;
LAB_1433218d2:
            local_348 = CONCAT44(local_348._4_4_,*(int *)(lVar27 + 0x14));
            local_2c8 = iVar14;
            if (*(int *)(lVar27 + 0x14) == 1) {
              AcquireSRWLockShared((PSRWLOCK)(plVar26 + 1));
            }
            LOCK();
            *(int *)(plVar26 + 3) = (int)plVar26[3] + 1;
            UNLOCK();
            local_350 = (longlong *)*plVar26;
            if (*(ushort *)(lVar27 + 0xc) != 0) {
              puVar31 = *(ulonglong **)(lVar27 + 0x28);
              lVar8 = (ulonglong)*(ushort *)(lVar27 + 0xc) << 5;
              do {
                if (*(short *)((longlong)puVar31 + 0x1e) == local_128[1]) goto LAB_143321925;
                puVar31 = puVar31 + 4;
                lVar8 = lVar8 + -0x20;
              } while (lVar8 != 0);
            }
            puVar31 = (ulonglong *)0x0;
LAB_143321925:
            local_328 = (undefined8 *)CONCAT44(local_328._4_4_,*(int *)(lVar27 + 0x14));
            if (*(int *)(lVar27 + 0x14) == 1) {
              AcquireSRWLockShared((PSRWLOCK)(puVar31 + 1));
            }
            lVar8 = local_258;
            LOCK();
            *(int *)(puVar31 + 3) = (int)puVar31[3] + 1;
            UNLOCK();
            local_330 = *puVar31;
            local_300 = *(longlong *)(lVar27 + 0x18);
            local_2a8 = lVar18;
            local_2a0 = iVar14;
            FUN_140cd6274(&local_294,&local_2a8);
            uVar30 = local_294;
            local_351 = local_290;
            if (**(int **)(lVar8 + 0xb0) != 0 || (local_290 & 1) != 0) {
              uVar32 = (ulonglong)local_294;
              local_310 = FUN_140732858();
              local_308 = uVar32;
              if (0 < (int)uVar30) {
                uVar32 = 0;
                do {
                  local_278 = local_350[uVar32];
                  FUN_1476b0680(lVar8,&local_2b4,&local_278);
                  local_2bc = CONCAT62(local_2bc._2_6_,*(undefined2 *)(local_300 + uVar32 * 2));
                  local_278 = local_2b4;
                  local_270 = CONCAT44(*(undefined4 *)(local_330 + uVar32 * 4),local_2ac);
                  local_268 = local_351;
                  FUN_1449da5a2(local_310,&local_2bc,&local_278);
                  lVar27 = FUN_1400e4054(*(undefined8 *)(lVar8 + 0xb0),&local_2b4);
                  if (lVar27 == 0) {
                    uVar20 = 0;
                  }
                  else {
                    uVar20 = CONCAT71((int7)((ulonglong)&local_2b4 >> 8),
                                      '\x02' - (*(short *)(lVar27 + 0xe) == 0));
                  }
                  cVar6 = FUN_1407338de(lVar8,local_2ac,uVar20 & 0xffffffff);
                  param_1 = local_340;
                  if (cVar6 == '\0') {
                    local_2bc = 0;
                    if (local_350[uVar32] != 0) {
                      uVar30 = *(uint *)(local_350[uVar32] + 0xc);
                      if ((int)uVar30 < DAT_14c9647dc) {
                        lVar27 = (ulonglong)((uVar30 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8);
                      }
                      else {
                        lVar27 = 0;
                      }
                      iVar14 = *(int *)(lVar27 + 0x10);
                      if (*(int *)(lVar27 + 0x10) == 0) {
                        LOCK();
                        iVar14 = DAT_14c964868 + 1;
                        UNLOCK();
                        iVar21 = DAT_14c964868 + 1;
                        bVar33 = DAT_14c964868 < 1000;
                        DAT_14c964868 = iVar14;
                        if (bVar33) {
                          local_334 = iVar21;
                          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                        0x23d,
                                        L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                        ,iVar21);
                          iVar21 = local_334;
                        }
                        LOCK();
                        iVar14 = *(int *)(lVar27 + 0x10);
                        bVar33 = iVar14 == 0;
                        if (bVar33) {
                          *(int *)(lVar27 + 0x10) = iVar21;
                          iVar14 = 0;
                        }
                        UNLOCK();
                        if (bVar33) {
                          iVar14 = iVar21;
                        }
                      }
                      local_2bc = CONCAT44(iVar14,uVar30);
                    }
                    param_1 = local_340;
                    FUN_140739a14(&local_278,&local_2bc);
                    FUN_140739902(lVar8,local_2ac,uVar20 & 0xffffffff,&local_278);
                    if (CONCAT71(uStack_267,local_268) != 0) {
                      FUN_1400020a8();
                    }
                    plVar22 = local_318;
                    if ((local_270 != 0) && (DAT_14c872a72 == '\0')) {
                      FUN_140113f48();
                    }
                  }
                  uVar32 = uVar32 + 1;
                } while (local_308 != uVar32);
              }
            }
            if (plVar26 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar26 + 3) = (int)plVar26[3] + -1;
              UNLOCK();
              if ((int)local_348 == 1) {
                ReleaseSRWLockShared((PSRWLOCK)(plVar26 + 1));
              }
            }
            if (puVar31 != (ulonglong *)0x0) {
              LOCK();
              *(int *)(puVar31 + 3) = (int)puVar31[3] + -1;
              UNLOCK();
              if ((int)local_328 == 1) {
                ReleaseSRWLockShared((PSRWLOCK)(puVar31 + 1));
              }
            }
            if (lVar7 != 0) {
              *(undefined4 *)(lVar7 + 0x14) = 1;
            }
            iVar14 = FUN_1403b8464(&local_2d8);
            lVar27 = local_340;
            plVar26 = local_318;
            local_2c8 = iVar14;
          } while (iVar14 != local_31c);
        }
        if (local_2d8 != (undefined8 *)0x0) {
          if (*(char *)(local_2d0 + 0x270) == '\0') {
            *(int *)(local_2d0 + 0x264) = *(int *)(local_2d0 + 0x264) + -1;
          }
          else {
            LOCK();
            *(int *)(local_2d0 + 0x264) = *(int *)(local_2d0 + 0x264) + -1;
            UNLOCK();
          }
        }
      }
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
      if (local_200 != 0) {
        FUN_1400020a8();
      }
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      if (local_2e0 != (longlong *)0x0) {
        LOCK();
        plVar26 = local_2e0 + 1;
        *(int *)plVar26 = (int)*plVar26 + -1;
        UNLOCK();
        if ((int)*plVar26 == 0) {
          (**(code **)*local_2e0)(local_2e0);
          LOCK();
          piVar2 = (int *)((longlong)local_2e0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_2e0 + 0x10))(local_2e0);
          }
        }
      }
    }
    FUN_1417a6684(param_1 + 0x40);
    iVar14 = *(int *)(param_1 + 0xb8);
    if (iVar14 == 0) {
      uVar28 = 1;
      uVar32 = 0;
      iVar21 = 0;
      iVar17 = 0;
    }
    else {
      puVar11 = *(uint **)(param_1 + 0xb0);
      if (*(uint **)(param_1 + 0xb0) == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 0xa0);
      }
      uVar30 = *puVar11;
      if (uVar30 == 0) {
        iVar21 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar21 = iVar14 + -1;
        }
        uVar32 = 0;
        uVar20 = (ulonglong)(uint)(iVar21 >> 5);
        if (iVar21 >> 5 < 1) {
          uVar20 = uVar32;
        }
        iVar21 = 0;
        do {
          if (uVar20 == uVar32) goto LAB_143321148;
          iVar21 = iVar21 + 0x20;
          uVar30 = puVar11[uVar32 + 1];
          uVar32 = uVar32 + 1;
        } while (uVar30 == 0);
      }
      else {
        uVar32 = 0;
        iVar21 = 0;
      }
      uVar28 = (ulonglong)(-uVar30 & uVar30);
      uVar20 = uVar28 * 2 + 1;
      lVar27 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar27 == 0; lVar27 = lVar27 + -1) {
        }
      }
      iVar17 = (iVar21 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
      if (iVar14 <= iVar17) {
        iVar17 = iVar14;
      }
    }
    if (iVar17 < iVar14) {
      local_350 = (longlong *)(param_1 + 0x90);
      uVar30 = 0xffffffff;
      do {
        iVar24 = *(int *)(*local_350 + 4 + (longlong)iVar17 * 0x60);
        if (((((iVar24 == 0) ||
              (uVar13 = *(uint *)(*local_350 + (longlong)iVar17 * 0x60), (int)uVar13 < 0)) ||
             (DAT_14c9647dc <= (int)uVar13)) ||
            ((plVar26 = (longlong *)
                        ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
             plVar26 == (longlong *)0x0 || ((int)plVar26[2] != iVar24)))) ||
           (((*(uint *)(plVar26 + 1) & 0x10200000) != 0 || (*plVar26 == 0)))) {
          FUN_1476b0e58(local_350);
          iVar14 = *(int *)(param_1 + 0xb8);
        }
        uVar30 = uVar30 & ~(uint)uVar28;
        puVar11 = *(uint **)(param_1 + 0xb0);
        if (*(uint **)(param_1 + 0xb0) == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 0xa0);
        }
        iVar17 = (int)uVar32;
        lVar27 = (longlong)iVar17;
        uVar13 = puVar11[lVar27] & uVar30;
        if (uVar13 == 0) {
          iVar24 = iVar14 + 0x1e;
          if (-1 < iVar14 + -1) {
            iVar24 = iVar14 + -1;
          }
          iVar25 = iVar24 >> 5;
          if (iVar24 >> 5 < iVar17) {
            iVar25 = iVar17;
          }
          lVar18 = 0;
          do {
            if (iVar25 - lVar27 == lVar18) goto LAB_143321148;
            iVar21 = iVar21 + 0x20;
            uVar13 = puVar11[lVar27 + lVar18 + 1];
            lVar18 = lVar18 + 1;
          } while (uVar13 == 0);
          uVar32 = (ulonglong)(uint)(iVar17 + (int)lVar18);
          uVar30 = 0xffffffff;
        }
        uVar28 = (ulonglong)(-uVar13 & uVar13);
        uVar20 = uVar28 * 2 + 1;
        lVar27 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        iVar17 = (iVar21 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
      } while (iVar17 < iVar14);
    }
    goto LAB_143321148;
  }
  local_188 = (undefined8 *)
              CONCAT26(*(undefined2 *)(lVar7 + 0x4a),
                       CONCAT24(*(undefined2 *)(lVar7 + 0x4e),
                                CONCAT22(*(undefined2 *)(lVar7 + 0x50),(undefined2)local_188)));
  local_180._6_2_ = SUB82(lVar18,6);
  local_180._0_6_ =
       CONCAT24(*(undefined2 *)(lVar7 + 0xf4),
                CONCAT22(*(undefined2 *)(lVar7 + 0x54),*(undefined2 *)(lVar8 + 0xe4)));
  local_177 = 0;
  local_174 = 0x6ff;
  local_170 = 0;
  local_28c = *(undefined2 *)(lVar7 + 0x130);
  local_2f8 = &local_28c;
  local_2f0 = &local_28a;
  FUN_1417a6d08(&local_188,&local_258);
  lVar27 = param_1 + 0x40;
  if (((local_258._2_2_ == -1) || (local_258._4_2_ == -1)) ||
     ((local_258._6_2_ == -1 || (local_250[0] == -1)))) {
    local_2d8 = (undefined8 *)0x0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x28);
    uVar32 = *(ulonglong *)(lVar7 + 0x548);
    lVar18 = lVar7 + 0x28;
    local_350 = param_3;
    local_340 = param_1;
    cVar6 = FUN_1417a80cc(&local_258,lVar18);
    if (cVar6 != '\0') {
      local_348 = uVar32;
      if ((*(int *)(lVar7 + 0x29c) == 0) && (*(char *)(lVar7 + 0x298) != '\0')) {
        local_108 = (ushort *)0x0;
        local_100 = 0x400000000;
        FUN_1476b07b4(&local_258,param_2,local_128);
        puVar16 = (ushort *)0x0;
        if ((int)local_100 != 0) {
          puVar16 = local_128;
        }
        puVar23 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar11 = (uint *)*puVar23;
        if (puVar11 != (uint *)0x0) goto LAB_143321ee8;
        while( true ) {
          uVar30 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar30 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar30 | 1;
            __tlregdtor(&LAB_143327e59);
          }
          lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar7 + 0x310);
          *(undefined8 *)(lVar7 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar23 = puVar9;
          FUN_140217a48(puVar23);
          puVar11 = (uint *)*puVar23;
LAB_143321ee8:
          puVar29 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar19 = (uint *)(puVar29 + 0x33);
          uVar30 = puVar11[0x12];
          if (puVar19 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar13 = *puVar11;
            *puVar11 = *puVar11 + uVar30 + 1;
            UNLOCK();
            if ((uVar13 ^ uVar30) != 0xffffffff) break;
            puVar11 = (uint *)*puVar23;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar23 = puVar11;
            puVar29 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar19 = (uint *)(puVar29 + 0x33);
            uVar30 = 0;
            if (puVar19 <= puVar11 + 0x4000) {
              uVar30 = 1;
              goto LAB_143321f6a;
            }
          }
        }
        uVar30 = uVar30 + 1;
LAB_143321f6a:
        *(uint **)(puVar11 + 0x10) = puVar19;
        puVar11[0x12] = uVar30;
        FUN_1447247dc(puVar29,puVar16);
        *puVar29 = &PTR_FUN_14a4e0aa8;
        FUN_1476b072c(puVar29 + 0x15,lVar18,&local_258);
        param_1 = local_340;
        puVar29[0x31] = local_348;
        puVar29[0x32] = lVar27;
        uVar30 = *(uint *)((longlong)puVar29 + 0xbc);
        if (((ulonglong)uVar30 & 0xff) == 0xff) {
          uVar13 = uVar30 >> 10 & 3;
          iVar14 = 0;
          if ((uVar30 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar32 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar14 = 0;
          }
          else {
            uVar32 = 2;
          }
        }
        else {
          iVar14 = (uVar30 >> 7 & 2 | uVar30 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar30 & 0xff) * 4);
          uVar32 = 5;
        }
        if (*(code **)(puVar29[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar29[0xe] + 0x18))(puVar29 + 0xe,puVar29 + 9);
        }
        param_3 = local_350;
        puVar29[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar29[9] = puVar29;
        puVar29[10] = puVar29;
        lVar18 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar18 == 0) {
          uVar20 = 1;
          if ((char)uVar32 != '\x06') {
            uVar20 = uVar32;
          }
          uVar32 = uVar20;
          uVar10 = 0;
        }
        else {
          if ((char)uVar32 == '\x06') {
            uVar32 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar18 + 0x30);
        }
        puVar29[0xf] = uVar10;
        puVar29[0x10] = uVar32 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar29 + 0x1c) = iVar14;
        if (puVar29 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar29 + 1) = *(int *)(puVar29 + 1) + 1;
          UNLOCK();
        }
        local_278 = CONCAT71(local_278._1_7_,1);
        local_2d8 = puVar29;
        FUN_1447439e4();
        puVar16 = local_128;
        if (local_108 != (ushort *)0x0) {
          puVar16 = local_108;
        }
        FUN_144717c65(puVar16,local_100 & 0xffffffff);
        if (local_108 != (ushort *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_143321023;
      }
      local_278 = uVar32;
      local_270 = lVar27;
      FUN_1476b072c(local_128,lVar18,&local_258);
      FUN_143329cc8(local_128,&local_278);
      if (local_b8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    local_2d8 = (undefined8 *)0x0;
    param_3 = local_350;
    param_1 = local_340;
  }
LAB_143321023:
  if (local_1e8 != 0) {
    FUN_1400020a8();
  }
  local_e8 = 0;
  local_e0 = 0x400000000;
  local_b8 = (undefined1 *)0x0;
  local_b0 = 0x400000000;
  if (local_2d8 != (undefined8 *)0x0) {
    FUN_147552ffc(local_128,0xffff,&local_2d8);
  }
  lVar18 = *(longlong *)(param_1 + 0x28);
  uVar30 = *(uint *)(lVar18 + 0x290);
  if ((*(int *)(lVar18 + 0x29c) == 0) && (*(char *)(lVar18 + 0x298) != '\0')) {
    local_348 = (ulonglong)uVar30;
    local_238 = (undefined8 *)0x0;
    local_230 = (longlong *)0x400000000;
    local_188 = &local_278;
    local_278 = CONCAT62(local_278._2_6_,0xffff);
    local_180 = (longlong)&local_278 + 2;
    local_350 = param_3;
    local_330 = local_348;
    FUN_147552f5e(local_128,&local_258);
    local_328 = (undefined8 *)0x0;
    if ((int)local_230 != 0) {
      local_328 = &local_258;
    }
    puVar23 = (undefined8 *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x308);
    puVar11 = (uint *)*puVar23;
    if (puVar11 != (uint *)0x0) goto LAB_14332172e;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_143327e59);
      }
      lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar9 = *(undefined4 **)(lVar18 + 0x310);
      *(undefined8 *)(lVar18 + 0x310) = 0;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar9 = 0xffffffff;
      *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
      puVar9[0x12] = 0;
      *puVar23 = puVar9;
      FUN_140217a48(puVar23);
      puVar11 = (uint *)*puVar23;
LAB_14332172e:
      puVar29 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar19 = (uint *)(puVar29 + 0x1f);
      uVar13 = puVar11[0x12];
      if (puVar19 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar23;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar23 = puVar11;
        puVar29 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar19 = (uint *)(puVar29 + 0x1f);
        uVar13 = 0;
        if (puVar19 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_1433217b2;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_1433217b2:
    *(uint **)(puVar11 + 0x10) = puVar19;
    puVar11[0x12] = uVar13;
    FUN_1447247dc(puVar29,local_328);
    *puVar29 = &PTR_FUN_14a4e0ab8;
    FUN_140dd5b4c(puVar29 + 0x15,*(undefined8 *)(param_1 + 0x28),lVar27);
    plVar26 = local_350;
    *(bool *)((longlong)puVar29 + 0xe9) = (uVar30 & 0xfffffeff) == 1;
    *(uint *)((longlong)puVar29 + 0xec) = uVar30;
    *(undefined1 *)(puVar29 + 0x1e) = 0;
    *(undefined2 *)((longlong)puVar29 + 0xf1) = (undefined2)local_278;
    *(undefined1 *)((longlong)puVar29 + 0xf3) = local_278._2_1_;
    if ((local_348 & 0xff) == 0xff) {
      uVar13 = (uint)(local_330 >> 10) & 3;
      iVar14 = 0;
      if ((uVar30 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar32 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
      }
      else {
        uVar32 = 2;
      }
    }
    else {
      iVar14 = (uVar30 >> 7 & 2 | uVar30 >> 9 & 1) +
               *(int *)(&DAT_149e38ed0 + (local_348 & 0xff) * 4);
      uVar32 = 5;
    }
    if (*(code **)(puVar29[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar29[0xe] + 0x18))(puVar29 + 0xe,puVar29 + 9);
    }
    puVar29[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar29[9] = puVar29;
    puVar29[10] = puVar29;
    lVar27 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar27 == 0) {
      uVar20 = 1;
      if ((char)uVar32 != '\x06') {
        uVar20 = uVar32;
      }
      uVar32 = uVar20;
      uVar10 = 0;
    }
    else {
      if ((char)uVar32 == '\x06') {
        uVar32 = *(ulonglong *)(lVar27 + 0x38) >> 0x3b;
      }
      uVar10 = *(undefined8 *)(lVar27 + 0x30);
    }
    puVar29[0xf] = uVar10;
    puVar29[0x10] = uVar32 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar29 + 0x1c) = iVar14;
    if (puVar29 == (undefined8 *)0x0) {
      puVar23 = (undefined8 *)0x0;
    }
    else {
      LOCK();
      *(int *)(puVar29 + 1) = *(int *)(puVar29 + 1) + 1;
      UNLOCK();
      puVar23 = puVar29;
    }
    local_188 = (undefined8 *)CONCAT71(local_188._1_7_,1);
    FUN_1447439e4(puVar23);
    if (plVar26 != (longlong *)0x0) {
      if (puVar23 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
        UNLOCK();
      }
      local_188 = puVar23;
      FUN_1432da764(plVar26,&local_188);
    }
    puVar23 = &local_258;
    if (local_238 != (undefined8 *)0x0) {
      puVar23 = local_238;
    }
    FUN_144717c65(puVar23,(ulonglong)local_230 & 0xffffffff);
    if (local_238 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (puVar29 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar29 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar29)(puVar29,1);
      }
    }
  }
  else {
    FUN_140dd5b4c(&local_258,lVar18,lVar27);
    FUN_144a28284(&local_258);
    if (local_220 != (longlong *)0x0) {
      LOCK();
      plVar26 = local_220 + 1;
      *(int *)plVar26 = (int)*plVar26 + -1;
      UNLOCK();
      if ((int)*plVar26 == 0) {
        (**(code **)*local_220)(local_220);
        LOCK();
        piVar2 = (int *)((longlong)local_220 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_220 + 0x10))(local_220);
        }
      }
    }
    plVar26 = local_230;
    if (local_230 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_230 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_230)(local_230);
        LOCK();
        piVar2 = (int *)((longlong)plVar26 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
        }
      }
    }
    if (local_240 != (longlong *)0x0) {
      LOCK();
      plVar26 = local_240 + 1;
      *(int *)plVar26 = (int)*plVar26 + -1;
      UNLOCK();
      if ((int)*plVar26 == 0) {
        (**(code **)*local_240)(local_240);
        LOCK();
        piVar2 = (int *)((longlong)local_240 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_240 + 0x10))(local_240);
        }
      }
    }
  }
  puVar15 = local_b8;
  if (local_b8 == (undefined1 *)0x0) {
    puVar15 = local_d8;
  }
  FUN_144717c65(puVar15,local_b0 & 0xffffffff);
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14009d40c(local_128);
  if (local_2d8 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_2d8 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_2d8)(local_2d8,1);
    }
  }
LAB_143321148:
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    plVar26 = plVar22 + 1;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)*plVar26 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14332234c FUN_14332234c body=1182 status=ok
// SIG undefined FUN_14332234c(void)

longlong *
FUN_14332234c(short *param_1,longlong *param_2,longlong param_3,undefined8 param_4,longlong param_5,
             longlong *param_6)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_148 [40];
  longlong local_120;
  undefined1 local_118 [32];
  undefined1 *local_f8;
  ulonglong local_f0;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((*param_1 != -1) && (param_1[1] != -1)) &&
     (cVar3 = FUN_1476b223c(param_1,param_3), cVar3 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_f8 = (undefined1 *)0x0;
      local_f0 = 0x400000000;
      FUN_1476b24ec(param_1,param_4,local_118);
      puVar11 = (undefined1 *)0x0;
      if ((int)local_f0 != 0) {
        puVar11 = local_118;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar6 = (uint *)*puVar1;
      if (puVar6 != (uint *)0x0) goto LAB_143322504;
      while( true ) {
        uVar8 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar8 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar8 | 1;
          __tlregdtor(&LAB_143327e59);
        }
        lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar5 = *(undefined4 **)(lVar13 + 0x310);
        *(undefined8 *)(lVar13 + 0x310) = 0;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar5 = 0xffffffff;
        *(undefined4 **)(puVar5 + 0x10) = puVar5 + 0x16;
        puVar5[0x12] = 0;
        *puVar1 = puVar5;
        FUN_140217a48(puVar1);
        puVar6 = (uint *)*puVar1;
LAB_143322504:
        puVar12 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar9 = (uint *)(puVar12 + 0x30);
        uVar8 = puVar6[0x12];
        if (puVar9 <= puVar6 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
          LOCK();
          uVar4 = *puVar6;
          *puVar6 = *puVar6 + uVar8 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar8) != 0xffffffff) break;
          puVar6 = (uint *)*puVar1;
          *puVar6 = 0xffffffff;
          *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
          puVar6[0x12] = 0;
          *puVar1 = puVar6;
          puVar12 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
          puVar9 = (uint *)(puVar12 + 0x30);
          uVar8 = 0;
          if (puVar9 <= puVar6 + 0x4000) {
            uVar8 = 1;
            goto LAB_143322588;
          }
        }
      }
      uVar8 = uVar8 + 1;
LAB_143322588:
      *(uint **)(puVar6 + 0x10) = puVar9;
      puVar6[0x12] = uVar8;
      FUN_1447247dc(puVar12,puVar11);
      *puVar12 = &PTR_FUN_14a4e0bb0;
      FUN_1476b2474(puVar12 + 0x15,param_3,param_1);
      puVar12[0x2f] = *param_6;
      uVar8 = *(uint *)(puVar12 + 0x16);
      if (((ulonglong)uVar8 & 0xff) == 0xff) {
        uVar4 = uVar8 >> 10 & 3;
        iVar10 = 0;
        if ((uVar8 >> 9 & 1) == 0 || uVar4 < 2) {
          uVar14 = (ulonglong)(byte)(&DAT_149e38edc)[uVar4];
          iVar10 = 0;
        }
        else {
          uVar14 = 2;
        }
      }
      else {
        iVar10 = (uVar8 >> 7 & 2 | uVar8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar8 & 0xff) * 4);
        uVar14 = 5;
      }
      if (*(code **)(puVar12[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar12[0xe] + 0x18))(puVar12 + 0xe,puVar12 + 9);
      }
      puVar12[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar12[9] = puVar12;
      puVar12[10] = puVar12;
      lVar13 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar13 == 0) {
        uVar2 = 1;
        if ((char)uVar14 != '\x06') {
          uVar2 = uVar14;
        }
        uVar14 = uVar2;
        uVar7 = 0;
      }
      else {
        if ((char)uVar14 == '\x06') {
          uVar14 = *(ulonglong *)(lVar13 + 0x38) >> 0x3b;
        }
        uVar7 = *(undefined8 *)(lVar13 + 0x30);
      }
      puVar12[0xf] = uVar7;
      puVar12[0x10] = uVar14 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar12 + 0x1c) = iVar10;
      *param_2 = (longlong)puVar12;
      if (puVar12 == (undefined8 *)0x0) {
        lVar13 = 0;
      }
      else {
        LOCK();
        *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
        UNLOCK();
        lVar13 = *param_2;
      }
      local_120 = CONCAT71(local_120._1_7_,1);
      FUN_1447439e4(lVar13);
      if (param_5 != 0) {
        if (lVar13 != 0) {
          LOCK();
          *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
          UNLOCK();
        }
        local_120 = lVar13;
        FUN_1432da764(param_5,&local_120);
      }
      puVar11 = local_118;
      if (local_f8 != (undefined1 *)0x0) {
        puVar11 = local_f8;
      }
      FUN_144717c65(puVar11,local_f0 & 0xffffffff);
      if (local_f8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14332238b;
    }
    local_120 = *param_6;
    FUN_1476b2474(local_118,param_3,param_1);
    FUN_14332a090(local_118,&local_120);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_14332238b:
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433227ec FUN_1433227ec body=1161 status=ok
// SIG undefined FUN_1433227ec(void)

undefined8 *
FUN_1433227ec(short *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
             longlong param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  undefined1 local_128 [32];
  undefined1 *local_108;
  ulonglong local_100;
  longlong local_b8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (((*param_1 != -1) && (param_1[1] != -1)) &&
     (cVar4 = FUN_1406abeda(param_1,param_3), cVar4 != '\0')) {
    if ((*(int *)(param_3 + 0x274) == 0) && (*(char *)(param_3 + 0x270) != '\0')) {
      local_108 = (undefined1 *)0x0;
      local_100 = 0x400000000;
      FUN_1476b36f6(param_1,param_4,local_128);
      puVar11 = (undefined1 *)0x0;
      if ((int)local_100 != 0) {
        puVar11 = local_128;
      }
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar1;
      if (puVar7 != (uint *)0x0) goto LAB_1433229a6;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_143327e59);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar1 = puVar6;
        FUN_140217a48(puVar1);
        puVar7 = (uint *)*puVar1;
LAB_1433229a6:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar14 + 0x32);
        uVar9 = puVar7[0x12];
        if (puVar10 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar5 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar5 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar1;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar1 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar14 + 0x32);
          uVar9 = 0;
          if (puVar10 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_143322a28;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_143322a28:
      *(uint **)(puVar7 + 0x10) = puVar10;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,puVar11);
      *puVar14 = &PTR_FUN_14a4e0c20;
      FUN_1476b366e(puVar14 + 0x15,param_3,param_1);
      puVar14[0x31] = *param_6;
      uVar9 = *(uint *)((longlong)puVar14 + 0xbc);
      if (((ulonglong)uVar9 & 0xff) == 0xff) {
        uVar5 = uVar9 >> 10 & 3;
        iVar13 = 0;
        if ((uVar9 >> 9 & 1) == 0 || uVar5 < 2) {
          uVar12 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
          iVar13 = 0;
        }
        else {
          uVar12 = 2;
        }
      }
      else {
        iVar13 = (uVar9 >> 7 & 2 | uVar9 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar9 & 0xff) * 4);
        uVar12 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar2 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar2 == 0) {
        uVar3 = 1;
        if ((char)uVar12 != '\x06') {
          uVar3 = uVar12;
        }
        uVar12 = uVar3;
        uVar8 = 0;
      }
      else {
        if ((char)uVar12 == '\x06') {
          uVar12 = *(ulonglong *)(lVar2 + 0x38) >> 0x3b;
        }
        uVar8 = *(undefined8 *)(lVar2 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = uVar12 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar13;
      *param_2 = puVar14;
      uVar8 = 0;
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        uVar8 = *param_2;
      }
      local_130 = CONCAT71(local_130._1_7_,1);
      FUN_1447439e4(uVar8);
      if (param_5 != 0) {
        FUN_1476b38c0(param_1,param_2,param_5);
      }
      puVar11 = local_128;
      if (local_108 != (undefined1 *)0x0) {
        puVar11 = local_108;
      }
      FUN_144717c65(puVar11,local_100 & 0xffffffff);
      if (local_108 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143322840;
    }
    local_130 = *param_6;
    FUN_1476b366e(local_128,param_3,param_1);
    FUN_14332add8(local_128,&local_130);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
LAB_143322840:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143322c76 FUN_143322c76 body=71 status=ok
// SIG undefined FUN_143322c76(void)

void FUN_143322c76(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000143322cb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143322cbe FUN_143322cbe body=263 status=ok
// SIG undefined FUN_143322cbe(void)

void FUN_143322cbe(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_158 [32];
  ushort *local_138;
  code **local_130;
  undefined1 local_124 [4];
  undefined2 *local_120;
  undefined1 *local_118;
  undefined2 local_110;
  undefined2 local_10e;
  undefined2 local_10c;
  undefined1 local_107;
  undefined4 local_104;
  undefined1 local_100;
  ushort local_fc;
  undefined2 local_fa;
  undefined1 local_f8 [8];
  ushort local_f0;
  longlong local_90;
  code *local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar1 = FUN_14009d2a0();
  local_10e = *(undefined2 *)(lVar1 + 0x54);
  local_110 = *(undefined2 *)(lVar1 + 0xba);
  local_10c = *(undefined2 *)(lVar1 + 0xea);
  local_107 = 0;
  local_104 = 0x6ff;
  local_100 = 0;
  local_fa = *(undefined2 *)(lVar1 + 0x130);
  local_120 = &local_fa;
  local_118 = local_f8;
  FUN_145c8eb36(&local_110,local_f8);
  local_138 = &local_fc;
  local_fc = local_f0 & 0xfdff;
  local_130 = &local_30;
  local_30 = FUN_140cc209e;
  local_28 = 3;
  FUN_145d5a3c8(local_f8,local_124,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143322dc6 FUN_143322dc6 body=1297 status=ok
// SIG undefined FUN_143322dc6(void)

void FUN_143322dc6(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_238 [40];
  undefined2 *local_210;
  short *local_208;
  undefined2 local_1fc;
  undefined2 local_1fa;
  undefined2 local_1f8;
  undefined1 local_1f3;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined8 *local_1e8;
  undefined1 local_1db;
  undefined2 local_1da;
  short local_1d8;
  short local_1d6;
  short local_1d4;
  longlong local_170;
  undefined1 local_110 [32];
  undefined1 *local_f0;
  ulonglong local_e8;
  longlong local_a8;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar7 = FUN_14009d2a0();
  local_1fa = *(undefined2 *)(lVar7 + 0x54);
  local_1fc = *(undefined2 *)(lVar7 + 0xba);
  local_1f8 = *(undefined2 *)(lVar7 + 0xea);
  local_1f3 = 0;
  local_1f0 = 0x6ff;
  local_1ec = 0;
  local_1da = *(undefined2 *)(lVar7 + 0x130);
  local_210 = &local_1da;
  local_208 = &local_1d8;
  FUN_145c8eb36(&local_1fc,&local_1d8);
  if (((local_1d8 != -1) && (local_1d6 != -1)) && (local_1d4 != -1)) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar7 = lVar3 + 0x28;
    cVar5 = FUN_145d5a67a(&local_1d8,lVar7);
    if (cVar5 != '\0') {
      if ((*(int *)(lVar3 + 0x29c) == 0) && (*(char *)(lVar3 + 0x298) != '\0')) {
        local_f0 = (undefined1 *)0x0;
        local_e8 = 0x400000000;
        FUN_1476b44ac(&local_1d8,param_2,local_110);
        puVar14 = (undefined1 *)0x0;
        if ((int)local_e8 != 0) {
          puVar14 = local_110;
        }
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar9 = (uint *)*puVar2;
        if (puVar9 != (uint *)0x0) goto LAB_143322fea;
        while( true ) {
          uVar11 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar11 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar11 | 1;
            __tlregdtor(&LAB_143327e59);
          }
          lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar8 = *(undefined4 **)(lVar3 + 0x310);
          *(undefined8 *)(lVar3 + 0x310) = 0;
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar8 = 0xffffffff;
          *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
          puVar8[0x12] = 0;
          *puVar2 = puVar8;
          FUN_140217a48(puVar2);
          puVar9 = (uint *)*puVar2;
LAB_143322fea:
          puVar13 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar12 = (uint *)(puVar13 + 0x31);
          uVar11 = puVar9[0x12];
          if (puVar12 <= puVar9 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
            LOCK();
            uVar6 = *puVar9;
            *puVar9 = *puVar9 + uVar11 + 1;
            UNLOCK();
            if ((uVar6 ^ uVar11) != 0xffffffff) break;
            puVar9 = (uint *)*puVar2;
            *puVar9 = 0xffffffff;
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar2 = puVar9;
            puVar13 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
            puVar12 = (uint *)(puVar13 + 0x31);
            uVar11 = 0;
            if (puVar12 <= puVar9 + 0x4000) {
              uVar11 = 1;
              goto LAB_14332306c;
            }
          }
        }
        uVar11 = uVar11 + 1;
LAB_14332306c:
        *(uint **)(puVar9 + 0x10) = puVar12;
        puVar9[0x12] = uVar11;
        FUN_1447247dc(puVar13,puVar14);
        *puVar13 = &PTR_FUN_14a4e0d30;
        FUN_1476b442e(puVar13 + 0x15,lVar7,&local_1d8);
        uVar11 = *(uint *)((longlong)puVar13 + 0xb4);
        if (((ulonglong)uVar11 & 0xff) == 0xff) {
          uVar6 = uVar11 >> 10 & 3;
          iVar15 = 0;
          if ((uVar11 >> 9 & 1) == 0 || uVar6 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar6];
            iVar15 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar15 = (uVar11 >> 7 & 2 | uVar11 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar11 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
        }
        puVar13[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar13[9] = puVar13;
        puVar13[10] = puVar13;
        lVar7 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar7 == 0) {
          uVar4 = 1;
          if ((char)uVar16 != '\x06') {
            uVar4 = uVar16;
          }
          uVar16 = uVar4;
          uVar10 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar7 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar7 + 0x30);
        }
        puVar13[0xf] = uVar10;
        puVar13[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar13 + 0x1c) = iVar15;
        if (puVar13 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
          UNLOCK();
        }
        local_1db = 1;
        local_1e8 = puVar13;
        FUN_1447439e4(puVar13);
        if (param_3 != 0) {
          FUN_1476b4588(&local_1d8,&local_1e8,param_3);
        }
        puVar14 = local_110;
        if (local_f0 != (undefined1 *)0x0) {
          puVar14 = local_f0;
        }
        FUN_144717c65(puVar14,local_e8 & 0xffffffff);
        if (local_f0 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (puVar13 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar13 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar13)(puVar13,1);
          }
        }
      }
      else {
        FUN_1476b442e(local_110,lVar7,&local_1d8);
        FUN_14332b086(local_110);
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (local_170 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433232d8 FUN_1433232d8 body=263 status=ok
// SIG undefined FUN_1433232d8(void)

void FUN_1433232d8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_158 [32];
  ushort *local_138;
  code **local_130;
  undefined1 local_124 [4];
  undefined2 *local_120;
  undefined1 *local_118;
  undefined2 local_110;
  undefined2 local_10e;
  undefined2 local_10c;
  undefined1 local_107;
  undefined4 local_104;
  undefined1 local_100;
  ushort local_fc;
  undefined2 local_fa;
  undefined1 local_f8 [8];
  ushort local_f0;
  longlong local_90;
  code *local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar1 = FUN_14009d2a0();
  local_10e = *(undefined2 *)(lVar1 + 0x54);
  local_110 = *(undefined2 *)(lVar1 + 0xa2);
  local_10c = *(undefined2 *)(lVar1 + 0xe8);
  local_107 = 0;
  local_104 = 0x6ff;
  local_100 = 0;
  local_fa = *(undefined2 *)(lVar1 + 0x130);
  local_120 = &local_fa;
  local_118 = local_f8;
  FUN_14769f92a(&local_110,local_f8);
  local_138 = &local_fc;
  local_fc = local_f0 & 0xfdff;
  local_130 = &local_30;
  local_30 = FUN_1476b4b4e;
  local_28 = 3;
  FUN_1476b4908(local_f8,local_124,*(longlong *)(param_1 + 0x28) + 0x28,param_2);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433233e0 FUN_1433233e0 body=1297 status=ok
// SIG undefined FUN_1433233e0(void)

void FUN_1433233e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_238 [40];
  undefined2 *local_210;
  short *local_208;
  undefined2 local_1fc;
  undefined2 local_1fa;
  undefined2 local_1f8;
  undefined1 local_1f3;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined8 *local_1e8;
  undefined1 local_1db;
  undefined2 local_1da;
  short local_1d8;
  short local_1d6;
  short local_1d4;
  longlong local_170;
  undefined1 local_110 [32];
  undefined1 *local_f0;
  ulonglong local_e8;
  longlong local_a8;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar7 = FUN_14009d2a0();
  local_1fa = *(undefined2 *)(lVar7 + 0x54);
  local_1fc = *(undefined2 *)(lVar7 + 0xa2);
  local_1f8 = *(undefined2 *)(lVar7 + 0xe8);
  local_1f3 = 0;
  local_1f0 = 0x6ff;
  local_1ec = 0;
  local_1da = *(undefined2 *)(lVar7 + 0x130);
  local_210 = &local_1da;
  local_208 = &local_1d8;
  FUN_14769f92a(&local_1fc,&local_1d8);
  if (((local_1d8 != -1) && (local_1d6 != -1)) && (local_1d4 != -1)) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar7 = lVar3 + 0x28;
    cVar5 = FUN_1476b4b9c(&local_1d8,lVar7);
    if (cVar5 != '\0') {
      if ((*(int *)(lVar3 + 0x29c) == 0) && (*(char *)(lVar3 + 0x298) != '\0')) {
        local_f0 = (undefined1 *)0x0;
        local_e8 = 0x400000000;
        FUN_1476b4f1c(&local_1d8,param_2,local_110);
        puVar14 = (undefined1 *)0x0;
        if ((int)local_e8 != 0) {
          puVar14 = local_110;
        }
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar9 = (uint *)*puVar2;
        if (puVar9 != (uint *)0x0) goto LAB_143323604;
        while( true ) {
          uVar11 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar11 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar11 | 1;
            __tlregdtor(&LAB_143327e59);
          }
          lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar8 = *(undefined4 **)(lVar3 + 0x310);
          *(undefined8 *)(lVar3 + 0x310) = 0;
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar8 = 0xffffffff;
          *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
          puVar8[0x12] = 0;
          *puVar2 = puVar8;
          FUN_140217a48(puVar2);
          puVar9 = (uint *)*puVar2;
LAB_143323604:
          puVar13 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar12 = (uint *)(puVar13 + 0x31);
          uVar11 = puVar9[0x12];
          if (puVar12 <= puVar9 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
            LOCK();
            uVar6 = *puVar9;
            *puVar9 = *puVar9 + uVar11 + 1;
            UNLOCK();
            if ((uVar6 ^ uVar11) != 0xffffffff) break;
            puVar9 = (uint *)*puVar2;
            *puVar9 = 0xffffffff;
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar2 = puVar9;
            puVar13 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
            puVar12 = (uint *)(puVar13 + 0x31);
            uVar11 = 0;
            if (puVar12 <= puVar9 + 0x4000) {
              uVar11 = 1;
              goto LAB_143323686;
            }
          }
        }
        uVar11 = uVar11 + 1;
LAB_143323686:
        *(uint **)(puVar9 + 0x10) = puVar12;
        puVar9[0x12] = uVar11;
        FUN_1447247dc(puVar13,puVar14);
        *puVar13 = &PTR_FUN_14a4e0d60;
        FUN_1476b4e9e(puVar13 + 0x15,lVar7,&local_1d8);
        uVar11 = *(uint *)((longlong)puVar13 + 0xb4);
        if (((ulonglong)uVar11 & 0xff) == 0xff) {
          uVar6 = uVar11 >> 10 & 3;
          iVar15 = 0;
          if ((uVar11 >> 9 & 1) == 0 || uVar6 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar6];
            iVar15 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar15 = (uVar11 >> 7 & 2 | uVar11 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar11 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
        }
        puVar13[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar13[9] = puVar13;
        puVar13[10] = puVar13;
        lVar7 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar7 == 0) {
          uVar4 = 1;
          if ((char)uVar16 != '\x06') {
            uVar4 = uVar16;
          }
          uVar16 = uVar4;
          uVar10 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar7 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar7 + 0x30);
        }
        puVar13[0xf] = uVar10;
        puVar13[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar13 + 0x1c) = iVar15;
        if (puVar13 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
          UNLOCK();
        }
        local_1db = 1;
        local_1e8 = puVar13;
        FUN_1447439e4(puVar13);
        if (param_3 != 0) {
          FUN_1476b4ff8(&local_1d8,&local_1e8,param_3);
        }
        puVar14 = local_110;
        if (local_f0 != (undefined1 *)0x0) {
          puVar14 = local_f0;
        }
        FUN_144717c65(puVar14,local_e8 & 0xffffffff);
        if (local_f0 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (puVar13 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar13 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar13)(puVar13,1);
          }
        }
      }
      else {
        FUN_1476b4e9e(local_110,lVar7,&local_1d8);
        FUN_14332b324(local_110);
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (local_170 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433238f2 FUN_1433238f2 body=45 status=ok
// SIG undefined FUN_1433238f2(void)

void FUN_1433238f2(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_1476b5364(param_1 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  return;
}



// FUNCTION 143323920 FUN_143323920 body=45 status=ok
// SIG undefined FUN_143323920(void)

void FUN_143323920(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_1476b5364(param_1 + 0x40);
  }
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  return;
}



// FUNCTION 14332394e FUN_14332394e body=5112 status=ok
// SIG undefined FUN_14332394e(void)

void FUN_14332394e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  ushort uVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  longlong lVar12;
  longlong *plVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  int iVar20;
  ushort *puVar21;
  undefined1 auStack_238 [32];
  code **local_218;
  code **local_210;
  code *local_208;
  code **local_200;
  undefined4 *local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  longlong *local_1d8;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  ushort local_1be;
  uint local_1bc;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  uint local_1a0;
  undefined1 local_198 [4];
  undefined2 local_194;
  uint local_188 [4];
  undefined8 local_178;
  int local_168;
  int local_164;
  uint local_160 [4];
  undefined8 local_150;
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  longlong *local_c8;
  longlong *local_c0;
  code *local_b8;
  longlong *local_b0;
  code *local_a8;
  undefined8 **local_a0;
  undefined4 local_98;
  undefined1 local_93;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_78;
  code *local_70;
  undefined1 local_68;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1e0 = FUN_14009d2a0();
  uVar5 = local_d8;
  uVar4 = *(ushort *)(local_1e0 + 0xf4);
  local_d8._0_6_ = (uint6)(uint5)local_d8;
  local_d8 = (code *)CONCAT62(local_d8._2_6_,uVar4);
  uStack_d0 = 0x6ff;
  uStack_cc = uStack_cc & 0xffffff00;
  local_1c8._0_2_ = (ushort)(byte)((ulonglong)uVar5 >> 0x20);
  local_c8 = (longlong *)&LAB_14332b79e;
  local_c0 = (longlong *)CONCAT71(local_c0._1_7_,3);
  local_1f0 = param_1;
  if (((uVar4 == 0xffff) ||
      (lVar12 = FUN_14482820e(*(longlong *)(param_1 + 0x28) + 0x28),
      *(int *)(lVar12 + 0x20) <= (int)(uint)uVar4)) ||
     ((*(uint *)(lVar12 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) == 0)) {
    local_1c4 = 0xffffffff;
    lVar12 = local_1f0;
  }
  else {
    plVar13 = (longlong *)FUN_14001cc68(0x30,0x10);
    plVar13[1] = (longlong)&DAT_100000001;
    *plVar13 = (longlong)&PTR_FUN_14a4e0d70;
    plVar13[2] = (longlong)&PTR_FUN_14a4e0d88;
    *(undefined4 *)((longlong)plVar13 + 0x1c) = (undefined4)local_d8;
    *(undefined4 *)(plVar13 + 4) = local_d8._4_4_;
    *(undefined4 *)((longlong)plVar13 + 0x24) = uStack_d0;
    *(uint *)(plVar13 + 5) = uStack_cc;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
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
    uVar5 = local_d8;
    local_50 = 0x10000000000;
    local_78 = 0x10000000000;
    uVar4 = (ushort)local_d8;
    iVar17 = (ushort)local_d8 + 1;
    iVar15 = iVar17;
    if (0xff < (ushort)local_d8) {
      local_50 = 0x10000000000;
      FUN_14497ddce(&local_70,0);
      iVar15 = (int)local_50 + iVar17;
    }
    iVar20 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar20 = iVar15;
    }
    local_50 = CONCAT44(local_50._4_4_,iVar15);
    if (iVar15 % 0x20 != 0) {
      bVar14 = -(char)(iVar15 % 0x20);
      *(uint *)((longlong)&local_70 + (longlong)(iVar20 >> 5) * 4) =
           (uint)(*(int *)((longlong)&local_70 + (longlong)(iVar20 >> 5) * 4) << (bVar14 & 0x1f)) >>
           (bVar14 & 0x1f);
    }
    FUN_1447c45ca(&local_70,0,iVar17,0);
    uVar9 = local_d8;
    puVar3 = (uint *)((longlong)&local_70 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)uVar5 & 0x1f);
    uVar4 = (ushort)local_d8;
    iVar17 = (ushort)local_d8 + 1;
    iVar15 = iVar17;
    if (0xff < (ushort)local_d8) {
      local_78 = CONCAT44(0x100,(int)local_78);
      FUN_14497ddce(&local_98,0);
      iVar15 = (int)local_78 + iVar17;
    }
    iVar20 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar20 = iVar15;
    }
    local_78 = CONCAT44(local_78._4_4_,iVar15);
    if (iVar15 % 0x20 != 0) {
      bVar14 = -(char)(iVar15 % 0x20);
      (&local_98)[iVar20 >> 5] =
           (uint)((&local_98)[iVar20 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
    }
    FUN_1447c45ca(&local_98,0,iVar17,0);
    uVar5 = local_d8;
    (&local_98)[uVar4 >> 5] = (&local_98)[uVar4 >> 5] | 1 << ((byte)uVar9 & 0x1f);
    uVar4 = (ushort)local_d8;
    iVar17 = (ushort)local_d8 + 1;
    local_178 = 0x10000000000;
    local_150 = 0x10000000000;
    local_148 = 0;
    uStack_140 = 0;
    iVar15 = iVar17;
    if (0xff < (ushort)local_d8) {
      FUN_14497ddce(local_198,0);
      iVar15 = (int)local_178 + iVar17;
    }
    iVar20 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar20 = iVar15;
    }
    local_178 = CONCAT44(local_178._4_4_,iVar15);
    if (iVar15 % 0x20 != 0) {
      bVar14 = -(char)(iVar15 % 0x20);
      *(uint *)(local_198 + (longlong)(iVar20 >> 5) * 4) =
           (uint)(*(int *)(local_198 + (longlong)(iVar20 >> 5) * 4) << (bVar14 & 0x1f)) >>
           (bVar14 & 0x1f);
    }
    FUN_1447c45ca(local_198,0,iVar17,0);
    *(uint *)(local_198 + (ulonglong)(uVar4 >> 5) * 4) =
         *(uint *)(local_198 + (ulonglong)(uVar4 >> 5) * 4) | 1 << ((byte)uVar5 & 0x1f);
    local_1b8 = &local_d8;
    uStack_1a8 = &local_1b8;
    local_1b0 = FUN_1417a84d0;
    local_a0 = (undefined8 **)CONCAT71(local_a0._1_7_,local_c0._0_1_);
    (*(code *)(&PTR_LAB_14a475bc0)[(ulonglong)local_c0 & 0xff])(&local_a8);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_210 = (code **)&local_1b0;
    local_218 = &local_a8;
    local_208 = (code *)local_198;
    local_200 = &local_70;
    local_1f8 = &local_98;
    local_b8 = (code *)(plVar13 + 2);
    local_b0 = plVar13;
    FUN_1406ac01c(param_2,&local_1c4,&local_1c8,&local_b8);
    lVar12 = local_1f0;
    if (local_1c4 == 0xffffffff) {
      if ((local_1c8 & 0x400) != 0) {
        FUN_145c71394(param_2,&local_1bc);
        local_1c4 = local_1bc;
        if (local_1bc != 0xffffffff) goto LAB_143323cc3;
      }
    }
    else {
LAB_143323cc3:
      FUN_1407ce0e2(param_2,local_1c4,0xffffffff);
      FUN_1407cdf34(param_2,local_1c4,0xffffffff);
    }
    if (local_148 != 0) {
      FUN_1400020a8();
    }
    if (plVar13 != (longlong *)0x0) {
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
  pcVar6 = local_1b0;
  local_1b0._0_4_ = CONCAT22(*(short *)(local_1e0 + 0xec),*(short *)(local_1e0 + 0x54));
  local_1b0._6_2_ = SUB82(pcVar6,6);
  local_1b0._0_6_ = CONCAT24(*(short *)(local_1e0 + 0xe6),(undefined4)local_1b0);
  uStack_1a8._0_2_ = (ushort)(byte)uStack_1a8;
  uVar4 = (ushort)uStack_1a8;
  uStack_1a8 = (undefined8 **)CONCAT44(0x6ff,(undefined4)uStack_1a8);
  local_1a0 = local_1a0 & 0xffffff00;
  local_1cc = CONCAT22(local_1cc._2_2_,uVar4);
  local_d8 = FUN_140cf08da;
  uStack_d0 = CONCAT31(uStack_d0._1_3_,3);
  local_1e8 = param_2;
  if (((*(short *)(local_1e0 + 0x54) == -1) || (*(short *)(local_1e0 + 0xec) == -1)) ||
     (*(short *)(local_1e0 + 0xe6) == -1)) {
LAB_143323f34:
    local_1c8 = 0xffffffff;
  }
  else {
    cVar11 = FUN_1417a8544(&local_1b0,*(longlong *)(lVar12 + 0x28) + 0x28);
    if (cVar11 == '\0') goto LAB_143323f34;
    plVar13 = (longlong *)FUN_14001cc68(0x30,0x10);
    plVar13[1] = (longlong)&DAT_100000001;
    *plVar13 = (longlong)&PTR_FUN_14a4e0d90;
    plVar13[2] = (longlong)&PTR_FUN_14a4e0da8;
    *(undefined4 *)((longlong)plVar13 + 0x1c) = (undefined4)local_1b0;
    *(undefined4 *)(plVar13 + 4) = local_1b0._4_4_;
    *(undefined4 *)((longlong)plVar13 + 0x24) = (undefined4)uStack_1a8;
    *(undefined4 *)(plVar13 + 5) = uStack_1a8._4_4_;
    *(uint *)((longlong)plVar13 + 0x2c) = local_1a0;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
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
    pcVar6 = local_1b0;
    local_50 = 0x10000000000;
    local_78 = 0x10000000000;
    uVar4 = (ushort)local_1b0;
    iVar17 = (ushort)local_1b0 + 1;
    iVar15 = iVar17;
    if (0xff < (ushort)local_1b0) {
      local_50 = 0x10000000000;
      FUN_14497ddce(&local_70,0);
      iVar15 = (int)local_50 + iVar17;
    }
    iVar20 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar20 = iVar15;
    }
    local_50 = CONCAT44(local_50._4_4_,iVar15);
    if (iVar15 % 0x20 != 0) {
      bVar14 = -(char)(iVar15 % 0x20);
      *(uint *)((longlong)&local_70 + (longlong)(iVar20 >> 5) * 4) =
           (uint)(*(int *)((longlong)&local_70 + (longlong)(iVar20 >> 5) * 4) << (bVar14 & 0x1f)) >>
           (bVar14 & 0x1f);
    }
    FUN_1447c45ca(&local_70,0,iVar17,0);
    pcVar7 = local_1b0;
    puVar3 = (uint *)((longlong)&local_70 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)pcVar6 & 0x1f);
    uVar8 = local_50;
    uVar4 = local_1b0._2_2_;
    iVar15 = local_1b0._2_2_ + 1;
    iVar17 = iVar15 - (int)local_50;
    if (iVar17 != 0 && (int)local_50 <= iVar15) {
      if ((int)local_50 == 0) {
LAB_143323eef:
        if (local_50._4_4_ <= (int)(uint)local_1b0._2_2_) {
          local_50 = CONCAT44(0x100,(int)local_50);
          FUN_14497ddce(&local_70,uVar8 & 0xffffffff);
          iVar15 = (int)local_50 + iVar17;
        }
        iVar20 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar20 = iVar15;
        }
        local_50 = CONCAT44(local_50._4_4_,iVar15);
        if (iVar15 % 0x20 != 0) {
          bVar14 = -(char)(iVar15 % 0x20);
          *(uint *)((longlong)&local_70 + (longlong)(iVar20 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_70 + (longlong)(iVar20 >> 5) * 4) << (bVar14 & 0x1f)
                     ) >> (bVar14 & 0x1f);
        }
      }
      else {
        iVar20 = (int)local_50 + 0x1e;
        if (-1 < (int)local_50 + -1) {
          iVar20 = (int)local_50 + -1;
        }
        if (iVar20 >> 5 != (uint)(local_1b0._2_2_ >> 5)) goto LAB_143323eef;
        local_50 = CONCAT44(local_50._4_4_,iVar15);
      }
      FUN_1447c45ca(&local_70,uVar8 & 0xffffffff,iVar17,0);
    }
    pcVar6 = local_1b0;
    puVar3 = (uint *)((longlong)&local_70 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)((ulonglong)pcVar7 >> 0x10) & 0x1f);
    uVar8 = local_50;
    uVar4 = local_1b0._4_2_;
    uVar18 = (uint)local_1b0._4_2_;
    iVar17 = local_1b0._4_2_ + 1;
    iVar15 = iVar17 - (int)local_50;
    if (iVar15 != 0 && (int)local_50 <= iVar17) {
      if ((int)local_50 == 0) {
LAB_14332400c:
        if (local_50._4_4_ <= (int)uVar18) {
          local_50 = CONCAT44(0x100,(int)local_50);
          FUN_14497ddce(&local_70,uVar8 & 0xffffffff);
          iVar17 = (int)local_50 + iVar15;
        }
        iVar20 = iVar17 + 0x1f;
        if (-1 < iVar17) {
          iVar20 = iVar17;
        }
        local_50 = CONCAT44(local_50._4_4_,iVar17);
        if (iVar17 % 0x20 != 0) {
          bVar14 = -(char)(iVar17 % 0x20);
          *(uint *)((longlong)&local_70 + (longlong)(iVar20 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_70 + (longlong)(iVar20 >> 5) * 4) << (bVar14 & 0x1f)
                     ) >> (bVar14 & 0x1f);
        }
      }
      else {
        iVar20 = (int)local_50 + 0x1e;
        if (-1 < (int)local_50 + -1) {
          iVar20 = (int)local_50 + -1;
        }
        if (iVar20 >> 5 != (uint)(local_1b0._4_2_ >> 5)) goto LAB_14332400c;
        local_50 = CONCAT44(local_50._4_4_,iVar17);
      }
      FUN_1447c45ca(&local_70,uVar8 & 0xffffffff,iVar15,0);
      uVar18 = (uint)local_1b0._4_2_;
      iVar17 = local_1b0._4_2_ + 1;
    }
    puVar3 = (uint *)((longlong)&local_70 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)((ulonglong)pcVar6 >> 0x20) & 0x1f);
    iVar15 = iVar17;
    if (0xff < uVar18) {
      local_78 = CONCAT44(0x100,(int)local_78);
      FUN_14497ddce(&local_98,0);
      iVar15 = (int)local_78 + iVar17;
    }
    param_2 = local_1e8;
    iVar20 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar20 = iVar15;
    }
    local_78 = CONCAT44(local_78._4_4_,iVar15);
    if (iVar15 % 0x20 != 0) {
      bVar14 = -(char)(iVar15 % 0x20);
      (&local_98)[iVar20 >> 5] =
           (uint)((&local_98)[iVar20 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
    }
    FUN_1447c45ca(&local_98,0,iVar17,0);
    (&local_98)[uVar18 >> 5] = (&local_98)[uVar18 >> 5] | 1 << ((byte)uVar18 & 0x1f);
    local_178 = 0x10000000000;
    local_150 = 0x10000000000;
    local_148 = 0;
    uStack_140 = 0;
    FUN_1417a85ee(&local_1b0,local_198);
    local_a0 = &local_1b8;
    local_a8 = FUN_1417a8818;
    local_b0 = (longlong *)CONCAT71(local_b0._1_7_,(byte)uStack_d0);
    local_1b8 = &local_1b0;
    (*(code *)(&PTR_LAB_14a475bc0)[(byte)uStack_d0])(&local_b8);
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_210 = &local_a8;
    local_218 = &local_b8;
    local_208 = (code *)local_198;
    local_200 = &local_70;
    local_1f8 = &local_98;
    local_c8 = plVar13 + 2;
    local_c0 = plVar13;
    FUN_1406ac01c(param_2,&local_1c8,&local_1cc,&local_c8);
    lVar12 = local_1f0;
    if (local_1c8 == 0xffffffff) {
      if ((local_1cc & 0x400) != 0) {
        FUN_145c71394(param_2,&local_1bc);
        local_1c8 = local_1bc;
        if (local_1bc != 0xffffffff) goto LAB_1433241e5;
      }
    }
    else {
LAB_1433241e5:
      FUN_1407ce0e2(param_2,local_1c8,0xffffffff);
      FUN_1407cdf34(param_2,local_1c8,0xffffffff);
    }
    if (local_148 != 0) {
      FUN_1400020a8();
    }
    if (plVar13 != (longlong *)0x0) {
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
  local_1b0._0_6_ = CONCAT24(*(short *)(local_1e0 + 0xf4),*(undefined4 *)(local_1e0 + 0xe4));
  uStack_1a8._0_2_ = (ushort)(byte)uStack_1a8;
  local_1be = (ushort)uStack_1a8;
  uStack_1a8._4_4_ = 0x6ff;
  local_1a0 = local_1a0 & 0xffffff00;
  local_d8 = FUN_14332b864;
  uStack_d0 = CONCAT31(uStack_d0._1_3_,3);
  if (*(short *)(local_1e0 + 0xf4) == -1) {
LAB_143324bd3:
    local_1cc = 0xffffffff;
  }
  else {
    cVar11 = FUN_1417a8932(&local_1b0,*(longlong *)(lVar12 + 0x28) + 0x28);
    if (cVar11 == '\0') goto LAB_143324bd3;
    plVar13 = (longlong *)FUN_14001cc68(0x30,0x10);
    plVar13[1] = (longlong)&DAT_100000001;
    *plVar13 = (longlong)&PTR_FUN_14a4e0db0;
    plVar13[2] = (longlong)&PTR_FUN_14a4e0dc8;
    *(undefined4 *)((longlong)plVar13 + 0x1c) = (undefined4)local_1b0;
    *(undefined4 *)(plVar13 + 4) = local_1b0._4_4_;
    *(undefined4 *)((longlong)plVar13 + 0x24) = (undefined4)uStack_1a8;
    *(undefined4 *)(plVar13 + 5) = uStack_1a8._4_4_;
    *(uint *)((longlong)plVar13 + 0x2c) = local_1a0;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
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
    local_1d8 = plVar13 + 2;
    local_50 = 0x10000000000;
    local_78 = 0x10000000000;
    puVar21 = (ushort *)&local_1b0;
    bVar10 = true;
    do {
      bVar19 = bVar10;
      uVar8 = local_50;
      uVar4 = *puVar21;
      if (uVar4 != 0xffff) {
        iVar15 = uVar4 + 1;
        iVar17 = iVar15 - (int)local_50;
        if (iVar17 != 0 && (int)local_50 <= iVar15) {
          if ((int)local_50 == 0) {
LAB_143324382:
            if (local_50._4_4_ <= (int)(uint)uVar4) {
              local_50 = CONCAT44(0x100,(int)local_50);
              FUN_14497ddce(&local_70,uVar8 & 0xffffffff);
              iVar15 = (int)local_50 + iVar17;
            }
            iVar20 = iVar15 + 0x1f;
            if (-1 < iVar15) {
              iVar20 = iVar15;
            }
            local_50 = CONCAT44(local_50._4_4_,iVar15);
            if (iVar15 % 0x20 != 0) {
              bVar14 = -(char)(iVar15 % 0x20);
              *(uint *)((longlong)&local_70 + (longlong)(iVar20 >> 5) * 4) =
                   (uint)(*(int *)((longlong)&local_70 + (longlong)(iVar20 >> 5) * 4) <<
                         (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
            }
          }
          else {
            iVar20 = (int)local_50 + 0x1e;
            if (-1 < (int)local_50 + -1) {
              iVar20 = (int)local_50 + -1;
            }
            if (iVar20 >> 5 != (uint)(uVar4 >> 5)) goto LAB_143324382;
            local_50 = CONCAT44(local_50._4_4_,iVar15);
          }
          FUN_1447c45ca(&local_70,uVar8 & 0xffffffff,iVar17,0);
        }
        puVar3 = (uint *)((longlong)&local_70 + (ulonglong)(uVar4 >> 5) * 4);
        *puVar3 = *puVar3 | 1 << ((byte)uVar4 & 0x1f);
      }
      uVar8 = local_50;
      pcVar6 = local_1b0;
      puVar21 = (ushort *)((longlong)&local_1b0 + 2);
      bVar10 = false;
    } while (bVar19);
    uVar4 = local_1b0._4_2_;
    uVar18 = (uint)local_1b0._4_2_;
    iVar17 = local_1b0._4_2_ + 1;
    iVar15 = iVar17 - (int)local_50;
    if (iVar15 != 0 && (int)local_50 <= iVar17) {
      if ((int)local_50 == 0) {
LAB_14332445b:
        if (local_50._4_4_ <= (int)uVar18) {
          local_50 = CONCAT44(0x100,(int)local_50);
          FUN_14497ddce(&local_70,uVar8 & 0xffffffff);
          iVar17 = (int)local_50 + iVar15;
        }
        iVar20 = iVar17 + 0x1f;
        if (-1 < iVar17) {
          iVar20 = iVar17;
        }
        local_50 = CONCAT44(local_50._4_4_,iVar17);
        if (iVar17 % 0x20 != 0) {
          bVar14 = -(char)(iVar17 % 0x20);
          *(uint *)((longlong)&local_70 + (longlong)(iVar20 >> 5) * 4) =
               (uint)(*(int *)((longlong)&local_70 + (longlong)(iVar20 >> 5) * 4) << (bVar14 & 0x1f)
                     ) >> (bVar14 & 0x1f);
        }
      }
      else {
        iVar20 = (int)local_50 + 0x1e;
        if (-1 < (int)local_50 + -1) {
          iVar20 = (int)local_50 + -1;
        }
        if (iVar20 >> 5 != (uint)(local_1b0._4_2_ >> 5)) goto LAB_14332445b;
        local_50 = CONCAT44(local_50._4_4_,iVar17);
      }
      FUN_1447c45ca(&local_70,uVar8 & 0xffffffff,iVar15,0);
      uVar18 = (uint)local_1b0._4_2_;
      iVar17 = local_1b0._4_2_ + 1;
    }
    puVar3 = (uint *)((longlong)&local_70 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)((ulonglong)pcVar6 >> 0x20) & 0x1f);
    iVar15 = iVar17;
    if (local_78._4_4_ <= (int)uVar18) {
      local_78 = CONCAT44(0x100,(int)local_78);
      FUN_14497ddce(&local_98,0);
      iVar15 = (int)local_78 + iVar17;
    }
    iVar20 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar20 = iVar15;
    }
    local_78 = CONCAT44(local_78._4_4_,iVar15);
    if (iVar15 % 0x20 != 0) {
      bVar14 = -(char)(iVar15 % 0x20);
      (&local_98)[iVar20 >> 5] =
           (uint)((&local_98)[iVar20 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
    }
    FUN_1447c45ca(&local_98,0,iVar17,0);
    (&local_98)[uVar18 >> 5] = (&local_98)[uVar18 >> 5] | 1 << ((byte)uVar18 & 0x1f);
    local_178 = 0x10000000000;
    local_150 = 0x10000000000;
    local_148 = 0;
    uStack_140 = 0;
    FUN_1417a8985(&local_1b0,local_198);
    uVar8 = local_178;
    pcVar6 = local_1b0;
    uVar4 = local_1b0._4_2_;
    iVar15 = local_1b0._4_2_ + 1;
    iVar17 = iVar15 - (int)local_178;
    if (iVar17 != 0 && (int)local_178 <= iVar15) {
      if ((int)local_178 == 0) {
LAB_1433245bf:
        if (local_178._4_4_ <= (int)(uint)local_1b0._4_2_) {
          local_178 = CONCAT44(0x100,(int)local_178);
          FUN_14497ddce(local_198,uVar8 & 0xffffffff);
          iVar15 = (int)local_178 + iVar17;
        }
        iVar20 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar20 = iVar15;
        }
        local_178 = CONCAT44(local_178._4_4_,iVar15);
        if (iVar15 % 0x20 != 0) {
          bVar14 = -(char)(iVar15 % 0x20);
          *(uint *)(local_198 + (longlong)(iVar20 >> 5) * 4) =
               (uint)(*(int *)(local_198 + (longlong)(iVar20 >> 5) * 4) << (bVar14 & 0x1f)) >>
               (bVar14 & 0x1f);
        }
      }
      else {
        iVar20 = (int)local_178 + 0x1e;
        if (-1 < (int)local_178 + -1) {
          iVar20 = (int)local_178 + -1;
        }
        if (iVar20 >> 5 != (uint)(local_1b0._4_2_ >> 5)) goto LAB_1433245bf;
        local_178 = CONCAT44(local_178._4_4_,iVar15);
      }
      FUN_1447c45ca(local_198,uVar8 & 0xffffffff,iVar17,0);
    }
    *(uint *)(local_198 + (ulonglong)(uVar4 >> 5) * 4) =
         *(uint *)(local_198 + (ulonglong)(uVar4 >> 5) * 4) |
         1 << ((byte)((ulonglong)pcVar6 >> 0x20) & 0x1f);
    local_a0 = &local_1b8;
    local_a8 = FUN_1417a8aca;
    local_b0 = (longlong *)CONCAT71(local_b0._1_7_,(byte)uStack_d0);
    local_1b8 = &local_1b0;
    (*(code *)(&PTR_LAB_14a475bc0)[(byte)uStack_d0])(&local_b8);
    param_2 = local_1e8;
    local_c8 = local_1d8;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    local_200 = &local_70;
    local_210 = &local_a8;
    local_218 = &local_b8;
    local_208 = (code *)local_198;
    local_1f8 = &local_98;
    local_c0 = plVar13;
    FUN_1406ac01c(local_1e8,&local_1cc,&local_1be,&local_c8);
    lVar12 = local_1f0;
    if (local_1cc == 0xffffffff) {
      if ((local_1be & 0x400) != 0) {
        FUN_145c71394(param_2,&local_1bc);
        local_1cc = local_1bc;
        if (local_1bc != 0xffffffff) goto LAB_1433246eb;
      }
    }
    else {
LAB_1433246eb:
      FUN_1407ce0e2(param_2,local_1cc,0xffffffff);
      FUN_1407cdf34(param_2,local_1cc,0xffffffff);
    }
    if (local_148 != 0) {
      FUN_1400020a8();
    }
    if (plVar13 != (longlong *)0x0) {
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
  FUN_1406adae8(param_2,local_1c4,local_1cc);
  FUN_1406adae8(param_2,local_1c8,local_1cc);
  if (*(int *)(lVar12 + 0x48) == 0) goto LAB_143324755;
  local_98._2_2_ = *(undefined2 *)(local_1e0 + 0xee);
  local_98._0_2_ = *(undefined2 *)(local_1e0 + 0xf4);
  local_93 = 0;
  local_90 = 0x6ff;
  local_8c = 0;
  uVar4 = *(ushort *)(local_1e0 + 0xf0);
  FUN_1476b6a4c(local_198);
  iVar15 = local_168;
  iVar17 = uVar4 + 1;
  iVar20 = iVar17 - local_168;
  if (iVar20 != 0 && local_168 <= iVar17) {
    if (local_168 == 0) {
LAB_14332482f:
      if (local_164 <= (int)(uint)uVar4) {
        local_164 = 0x100;
        FUN_14497ddce(local_188,local_168);
        iVar17 = local_168 + iVar20;
      }
      iVar16 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar16 = iVar17;
      }
      local_168 = iVar17;
      iVar17 = local_168;
      if (iVar17 % 0x20 != 0) {
        bVar14 = -(char)(iVar17 % 0x20);
        local_188[iVar16 >> 5] = (local_188[iVar16 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
        iVar17 = local_168;
      }
    }
    else {
      iVar16 = local_168 + 0x1e;
      if (-1 < local_168 + -1) {
        iVar16 = local_168 + -1;
      }
      if (iVar16 >> 5 != (uint)(uVar4 >> 5)) goto LAB_14332482f;
    }
    local_168 = iVar17;
    FUN_1447c45ca(local_188,iVar15,iVar20,0);
  }
  local_188[uVar4 >> 5] = local_188[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
  local_194 = 0x400;
  local_208 = (code *)&local_1b0;
  local_b8 = (code *)CONCAT62(local_b8._2_6_,0x600);
  local_70 = FUN_1476b6dfe;
  local_68 = 3;
  local_218 = &local_b8;
  local_210 = &local_70;
  local_1b0 = (code *)(lVar12 + 0x40);
  FUN_1476b6b06(local_198,&local_a8,*(longlong *)(lVar12 + 0x28) + 0x28,local_1e8);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  local_98._0_2_ = *(undefined2 *)(local_1e0 + 0xee);
  local_98._2_2_ = *(undefined2 *)(local_1e0 + 0xf4);
  local_93 = 0;
  local_90 = 0x6ff;
  local_8c = 0;
  uVar4 = *(ushort *)(local_1e0 + 0xf0);
  FUN_1476b7102(local_198);
  uVar8 = uStack_140;
  iVar15 = uVar4 + 1;
  iVar17 = iVar15 - (int)uStack_140;
  if (iVar17 != 0 && (int)uStack_140 <= iVar15) {
    if ((int)uStack_140 == 0) {
LAB_143324a7f:
      if (uStack_140._4_4_ <= (int)(uint)uVar4) {
        uStack_140 = CONCAT44(0x100,(int)uStack_140);
        FUN_14497ddce(local_160,uVar8 & 0xffffffff);
        iVar15 = (int)uStack_140 + iVar17;
      }
      iVar20 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar20 = iVar15;
      }
      uStack_140 = CONCAT44(uStack_140._4_4_,iVar15);
      if (iVar15 % 0x20 != 0) {
        bVar14 = -(char)(iVar15 % 0x20);
        local_160[iVar20 >> 5] = (local_160[iVar20 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
      }
    }
    else {
      iVar20 = (int)uStack_140 + 0x1e;
      if (-1 < (int)uStack_140 + -1) {
        iVar20 = (int)uStack_140 + -1;
      }
      if (iVar20 >> 5 != (uint)(uVar4 >> 5)) goto LAB_143324a7f;
      uStack_140 = CONCAT44(uStack_140._4_4_,iVar15);
    }
    FUN_1447c45ca(local_160,uVar8 & 0xffffffff,iVar17,0);
  }
  uVar5 = local_1e8;
  local_160[uVar4 >> 5] = local_160[uVar4 >> 5] | 1 << ((byte)uVar4 & 0x1f);
  local_b8 = (code *)(CONCAT62(local_b8._2_6_,local_194) & 0xfffffffffffffdff);
  local_70 = FUN_1476b7424;
  local_68 = 3;
  local_218 = &local_b8;
  local_210 = &local_70;
  local_208 = (code *)(lVar12 + 0x40);
  FUN_1476b71bc(local_198,&local_1b0,*(longlong *)(lVar12 + 0x28) + 0x28,local_1e8);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  FUN_1406adae8(uVar5,(ulonglong)local_a8 & 0xffffffff,(ulonglong)local_1b0 & 0xffffffff);
LAB_143324755:
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143324d48 FUN_143324d48 body=7765 status=ok
// SIG undefined FUN_143324d48(void)

void FUN_143324d48(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [8];
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  uint *puVar20;
  int iVar21;
  undefined8 *puVar22;
  int iVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  undefined1 auStack_3e8 [32];
  longlong local_3c8;
  longlong local_3c0;
  longlong local_3b8;
  undefined2 local_3b0;
  undefined2 local_3ae;
  undefined1 local_3ab;
  undefined4 local_3a8;
  undefined1 local_3a4;
  undefined8 *local_3a0;
  undefined8 *local_398;
  undefined8 *local_390;
  undefined8 *local_388;
  undefined8 *local_380;
  undefined1 local_378 [8];
  undefined4 local_370;
  undefined1 local_36c;
  undefined8 local_368;
  undefined4 local_360;
  undefined8 local_328;
  undefined1 local_318 [32];
  undefined1 *local_2f8;
  int local_2f0;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  uint local_2d8 [8];
  int local_2b8;
  int local_2b4;
  uint local_2b0 [8];
  int local_290;
  int local_28c;
  longlong local_288;
  undefined8 local_228;
  undefined8 local_1e8;
  undefined1 local_1d8 [32];
  undefined1 *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  ushort local_1a8 [2];
  undefined1 local_1a3;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined8 local_168;
  undefined1 local_158 [32];
  undefined1 *local_138;
  int local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  uint local_118;
  undefined8 *local_108;
  ulonglong local_100;
  undefined8 local_f0;
  longlong local_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined8 local_90;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  lVar8 = FUN_14009d2a0();
  uVar2 = *(ushort *)(lVar8 + 0xf4);
  local_1a3 = 0;
  local_1a0 = 0x6ff;
  local_19c = 0;
  local_3c8 = param_1;
  local_1a8[0] = uVar2;
  if (uVar2 == 0xffff) {
LAB_143324e1e:
    local_380 = (undefined8 *)0x0;
  }
  else {
    lVar19 = *(longlong *)(param_1 + 0x28);
    lVar18 = lVar19 + 0x28;
    lVar9 = FUN_14482820e(lVar18);
    if ((*(int *)(lVar9 + 0x20) <= (int)(uint)uVar2) ||
       ((*(uint *)(lVar9 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0))
    goto LAB_143324e1e;
    if ((*(int *)(lVar19 + 0x29c) != 0) || (*(char *)(lVar19 + 0x298) == '\0')) {
      FUN_1476b766c(&local_128,lVar18,local_1a8);
      FUN_14332b92e(&local_128);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      goto LAB_143324e1e;
    }
    local_108 = (undefined8 *)0x0;
    local_100 = 0x400000000;
    local_228._0_2_ = 0xffff;
    local_3c0 = param_3;
    local_2e8 = &local_228;
    uStack_2e0 = (longlong)&local_228 + 2;
    FUN_147552f5e(param_2,&local_128,&local_2e8);
    local_228 = (undefined8 *)CONCAT62(local_228._2_6_,uVar2);
    local_2e8 = &local_228;
    uStack_2e0 = (longlong)&local_228 + 2;
    FUN_147552f5e(param_2,&local_128,&local_2e8);
    puVar22 = (undefined8 *)0x0;
    if ((int)local_100 != 0) {
      puVar22 = &local_128;
    }
    puVar24 = (undefined8 *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x308);
    puVar12 = (uint *)*puVar24;
    if (puVar12 != (uint *)0x0) goto LAB_143325586;
    while( true ) {
      uVar15 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar15 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar15 | 1;
        __tlregdtor(&LAB_143327e59);
      }
      lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar11 = *(undefined4 **)(lVar19 + 0x310);
      *(undefined8 *)(lVar19 + 0x310) = 0;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar11 = 0xffffffff;
      *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
      puVar11[0x12] = 0;
      *puVar24 = puVar11;
      FUN_140217a48(puVar24);
      puVar12 = (uint *)*puVar24;
LAB_143325586:
      puVar26 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar20 = (uint *)(puVar26 + 0x30);
      uVar15 = puVar12[0x12];
      if (puVar20 <= puVar12 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
        LOCK();
        uVar7 = *puVar12;
        *puVar12 = *puVar12 + uVar15 + 1;
        UNLOCK();
        if ((uVar7 ^ uVar15) != 0xffffffff) break;
        puVar12 = (uint *)*puVar24;
        *puVar12 = 0xffffffff;
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar24 = puVar12;
        puVar26 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
        puVar20 = (uint *)(puVar26 + 0x30);
        uVar15 = 0;
        if (puVar20 <= puVar12 + 0x4000) {
          uVar15 = 1;
          goto LAB_14332560a;
        }
      }
    }
    uVar15 = uVar15 + 1;
LAB_14332560a:
    *(uint **)(puVar12 + 0x10) = puVar20;
    puVar12[0x12] = uVar15;
    FUN_1447247dc(puVar26,puVar22);
    *puVar26 = &PTR_FUN_14a4e0e10;
    FUN_1476b766c(puVar26 + 0x15,lVar18,local_1a8);
    param_3 = local_3c0;
    uVar15 = *(uint *)(puVar26 + 0x16);
    if (((ulonglong)uVar15 & 0xff) == 0xff) {
      uVar7 = uVar15 >> 10 & 3;
      iVar23 = 0;
      if ((uVar15 >> 9 & 1) == 0 || uVar7 < 2) {
        uVar25 = (ulonglong)(byte)(&DAT_149e38edc)[uVar7];
        iVar23 = 0;
      }
      else {
        uVar25 = 2;
      }
    }
    else {
      iVar23 = (uVar15 >> 7 & 2 | uVar15 >> 9 & 1) +
               *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar15 & 0xff) * 4);
      uVar25 = 5;
    }
    if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
    }
    puVar26[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar26[9] = puVar26;
    puVar26[10] = puVar26;
    lVar18 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar18 == 0) {
      uVar5 = 1;
      if ((char)uVar25 != '\x06') {
        uVar5 = uVar25;
      }
      uVar25 = uVar5;
      uVar10 = 0;
    }
    else {
      if ((char)uVar25 == '\x06') {
        uVar25 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
      }
      uVar10 = *(undefined8 *)(lVar18 + 0x30);
    }
    puVar26[0xf] = uVar10;
    puVar26[0x10] = uVar25 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar26 + 0x1c) = iVar23;
    if (puVar26 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
      UNLOCK();
    }
    local_2e8 = (undefined8 *)CONCAT71(local_2e8._1_7_,1);
    local_380 = puVar26;
    FUN_1447439e4(puVar26);
    if (param_3 != 0) {
      FUN_1476b7712(local_1a8,&local_380,param_3);
      if (puVar26 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
        UNLOCK();
      }
      local_2e8 = puVar26;
      FUN_1432da764(param_3,&local_2e8);
    }
    puVar22 = &local_128;
    if (local_108 != (undefined8 *)0x0) {
      puVar22 = local_108;
    }
    FUN_144717c65(puVar22,local_100 & 0xffffffff);
    if (local_108 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  local_168 = 0;
  lVar18 = *(longlong *)(param_2 + 0x40);
  if (*(longlong *)(param_2 + 0x40) == 0) {
    lVar18 = param_2;
  }
  FUN_1476a3cb0(local_1a8,lVar18,*(undefined4 *)(param_2 + 0x48));
  local_3b8 = param_2 + 0x50;
  local_138 = (undefined1 *)0x0;
  iVar23 = *(int *)(param_2 + 0x78);
  local_130 = iVar23;
  if (iVar23 == 0) {
    local_12c = 4;
  }
  else {
    lVar18 = *(longlong *)(param_2 + 0x70);
    if (*(longlong *)(param_2 + 0x70) == 0) {
      lVar18 = local_3b8;
    }
    FUN_144727e94(local_158,iVar23,0);
    puVar16 = local_138;
    if (local_138 == (undefined1 *)0x0) {
      puVar16 = local_158;
    }
    FUN_144727e6e(puVar16,lVar18,iVar23);
  }
  lVar18 = local_3c8;
  FUN_147552ffc(local_1a8,*(undefined2 *)(lVar8 + 0xf4));
  puVar22 = local_2e8;
  local_2e8._6_2_ = SUB82(puVar22,6);
  local_2e8._0_6_ =
       CONCAT24(*(short *)(lVar8 + 0xe6),CONCAT22(*(short *)(lVar8 + 0xec),*(short *)(lVar8 + 0x54))
               );
  uStack_2e0._0_2_ = (ushort)(byte)uStack_2e0;
  uStack_2e0 = CONCAT44(0x6ff,(undefined4)uStack_2e0);
  local_2d8[0] = local_2d8[0] & 0xffffff00;
  if ((*(short *)(lVar8 + 0xec) == -1 || *(short *)(lVar8 + 0x54) == -1) ||
      *(short *)(lVar8 + 0xe6) == -1) {
LAB_143324ffb:
    local_388 = (undefined8 *)0x0;
  }
  else {
    lVar9 = *(longlong *)(lVar18 + 0x28);
    lVar19 = lVar9 + 0x28;
    cVar6 = FUN_1417a8544(&local_2e8,lVar19);
    if (cVar6 == '\0') goto LAB_143324ffb;
    if ((*(int *)(lVar9 + 0x29c) == 0) && (*(char *)(lVar9 + 0x298) != '\0')) {
      local_108 = (undefined8 *)0x0;
      local_100 = 0x400000000;
      local_3c0 = param_3;
      FUN_1476b78b2(&local_2e8,local_1a8,&local_128);
      puVar22 = (undefined8 *)0x0;
      if ((int)local_100 != 0) {
        puVar22 = &local_128;
      }
      puVar24 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar12 = (uint *)*puVar24;
      if (puVar12 != (uint *)0x0) goto LAB_143325236;
      while( true ) {
        uVar15 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar15 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar15 | 1;
          __tlregdtor(&LAB_143327e59);
        }
        lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar11 = *(undefined4 **)(lVar18 + 0x310);
        *(undefined8 *)(lVar18 + 0x310) = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar11 = 0xffffffff;
        *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar24 = puVar11;
        FUN_140217a48(puVar24);
        puVar12 = (uint *)*puVar24;
LAB_143325236:
        puVar26 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar20 = (uint *)(puVar26 + 0x31);
        uVar15 = puVar12[0x12];
        if (puVar20 <= puVar12 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
          LOCK();
          uVar7 = *puVar12;
          *puVar12 = *puVar12 + uVar15 + 1;
          UNLOCK();
          if ((uVar7 ^ uVar15) != 0xffffffff) break;
          puVar12 = (uint *)*puVar24;
          *puVar12 = 0xffffffff;
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar24 = puVar12;
          puVar26 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
          puVar20 = (uint *)(puVar26 + 0x31);
          uVar15 = 0;
          if (puVar20 <= puVar12 + 0x4000) {
            uVar15 = 1;
            goto LAB_1433252b8;
          }
        }
      }
      uVar15 = uVar15 + 1;
LAB_1433252b8:
      *(uint **)(puVar12 + 0x10) = puVar20;
      puVar12[0x12] = uVar15;
      FUN_1447247dc(puVar26,puVar22);
      *puVar26 = &PTR_FUN_14a4e0e20;
      puVar26[0x15] = local_2e8;
      puVar26[0x16] = uStack_2e0;
      *(uint *)(puVar26 + 0x17) = local_2d8[0];
      puVar26[0x1c] = 0x10000000000;
      puVar26[0x21] = 0x10000000000;
      puVar26[0x28] = 0x10000000000;
      puVar26[0x22] = 0;
      puVar26[0x23] = 0;
      puVar26[0x2d] = 0x10000000000;
      FUN_1417a85ee(puVar26 + 0x15,puVar26 + 0x18);
      param_3 = local_3c0;
      lVar18 = local_3c8;
      puVar26[0x2e] = lVar19;
      puVar26[0x2f] = *(undefined8 *)(lVar9 + 0x270);
      uVar15 = *(uint *)((longlong)puVar26 + 0xb4);
      if (((ulonglong)uVar15 & 0xff) == 0xff) {
        uVar7 = uVar15 >> 10 & 3;
        iVar23 = 0;
        if ((uVar15 >> 9 & 1) == 0 || uVar7 < 2) {
          uVar25 = (ulonglong)(byte)(&DAT_149e38edc)[uVar7];
        }
        else {
          uVar25 = 2;
        }
      }
      else {
        iVar23 = (uVar15 >> 7 & 2 | uVar15 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar15 & 0xff) * 4);
        uVar25 = 5;
      }
      if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
      }
      puVar26[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar26[9] = puVar26;
      puVar26[10] = puVar26;
      lVar19 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar19 == 0) {
        uVar5 = 1;
        if ((char)uVar25 != '\x06') {
          uVar5 = uVar25;
        }
        uVar25 = uVar5;
        uVar10 = 0;
      }
      else {
        if ((char)uVar25 == '\x06') {
          uVar25 = *(ulonglong *)(lVar19 + 0x38) >> 0x3b;
        }
        uVar10 = *(undefined8 *)(lVar19 + 0x30);
      }
      puVar26[0xf] = uVar10;
      puVar26[0x10] = uVar25 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar26 + 0x1c) = iVar23;
      if (puVar26 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
        UNLOCK();
      }
      local_228 = (undefined8 *)CONCAT71(local_228._1_7_,1);
      local_388 = puVar26;
      FUN_1447439e4(puVar26);
      if (param_3 != 0) {
        FUN_1476b798e(&local_2e8,&local_388,param_3);
        if (puVar26 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
          UNLOCK();
        }
        local_228 = puVar26;
        FUN_1432da764(param_3,&local_228);
      }
      puVar22 = &local_128;
      if (local_108 != (undefined8 *)0x0) {
        puVar22 = local_108;
      }
      FUN_144717c65(puVar22,local_100 & 0xffffffff);
      if (local_108 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      local_118 = local_2d8[0];
      local_128 = local_2e8;
      uStack_120 = uStack_2e0;
      local_f0 = 0x10000000000;
      local_c8 = 0x10000000000;
      local_90 = 0x10000000000;
      local_c0 = 0;
      uStack_b8 = 0;
      local_68 = 0x10000000000;
      FUN_1417a85ee(&local_128);
      local_58 = *(undefined8 *)(lVar9 + 0x270);
      local_60 = lVar19;
      FUN_14332bbcc(&local_128);
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
      local_388 = (undefined8 *)0x0;
      lVar18 = local_3c8;
    }
  }
  FUN_147552ffc(local_1a8,*(undefined2 *)(lVar8 + 0xe6),&local_388);
  local_2e8._0_6_ = CONCAT24(*(short *)(lVar8 + 0xf4),*(undefined4 *)(lVar8 + 0xe4));
  uStack_2e0._0_2_ = (ushort)(byte)uStack_2e0;
  uStack_2e0 = CONCAT44(0x6ff,(undefined4)uStack_2e0);
  local_2d8[0] = local_2d8[0] & 0xffffff00;
  if (*(short *)(lVar8 + 0xf4) == -1) {
LAB_14332507e:
    local_390 = (undefined8 *)0x0;
    puVar22 = (undefined8 *)0x0;
  }
  else {
    lVar9 = *(longlong *)(lVar18 + 0x28);
    lVar19 = lVar9 + 0x28;
    cVar6 = FUN_1417a8932(&local_2e8,lVar19);
    if (cVar6 == '\0') goto LAB_14332507e;
    if ((*(int *)(lVar9 + 0x29c) == 0) && (*(char *)(lVar9 + 0x298) != '\0')) {
      local_108 = (undefined8 *)0x0;
      local_100 = 0x400000000;
      local_3c0 = param_3;
      FUN_1476b7c84(&local_2e8,local_1a8,&local_128);
      puVar24 = (undefined8 *)0x0;
      if ((int)local_100 != 0) {
        puVar24 = &local_128;
      }
      puVar26 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar12 = (uint *)*puVar26;
      if (puVar12 != (uint *)0x0) goto LAB_143325f58;
      while( true ) {
        uVar15 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar15 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar15 | 1;
          __tlregdtor(&LAB_143327e59);
        }
        lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar11 = *(undefined4 **)(lVar18 + 0x310);
        *(undefined8 *)(lVar18 + 0x310) = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar11 = 0xffffffff;
        *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar26 = puVar11;
        FUN_140217a48(puVar26);
        puVar12 = (uint *)*puVar26;
LAB_143325f58:
        puVar22 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar20 = (uint *)(puVar22 + 0x31);
        uVar15 = puVar12[0x12];
        if (puVar20 <= puVar12 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
          LOCK();
          uVar7 = *puVar12;
          *puVar12 = *puVar12 + uVar15 + 1;
          UNLOCK();
          if ((uVar7 ^ uVar15) != 0xffffffff) break;
          puVar12 = (uint *)*puVar26;
          *puVar12 = 0xffffffff;
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar26 = puVar12;
          puVar22 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
          puVar20 = (uint *)(puVar22 + 0x31);
          uVar15 = 0;
          if (puVar20 <= puVar12 + 0x4000) {
            uVar15 = 1;
            goto LAB_143325fda;
          }
        }
      }
      uVar15 = uVar15 + 1;
LAB_143325fda:
      *(uint **)(puVar12 + 0x10) = puVar20;
      puVar12[0x12] = uVar15;
      FUN_1447247dc(puVar22,puVar24);
      *puVar22 = &PTR_FUN_14a4e0e30;
      FUN_1476b7dd8(puVar22 + 0x15,&local_2e8);
      param_3 = local_3c0;
      lVar18 = local_3c8;
      puVar22[0x2e] = lVar19;
      puVar22[0x2f] = *(undefined8 *)(lVar9 + 0x270);
      uVar15 = *(uint *)((longlong)puVar22 + 0xb4);
      if (((ulonglong)uVar15 & 0xff) == 0xff) {
        uVar7 = uVar15 >> 10 & 3;
        iVar23 = 0;
        if ((uVar15 >> 9 & 1) == 0 || uVar7 < 2) {
          uVar25 = (ulonglong)(byte)(&DAT_149e38edc)[uVar7];
        }
        else {
          uVar25 = 2;
        }
      }
      else {
        iVar23 = (uVar15 >> 7 & 2 | uVar15 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar15 & 0xff) * 4);
        uVar25 = 5;
      }
      if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
      }
      puVar22[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar22[9] = puVar22;
      puVar22[10] = puVar22;
      lVar19 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar19 == 0) {
        uVar5 = 1;
        if ((char)uVar25 != '\x06') {
          uVar5 = uVar25;
        }
        uVar25 = uVar5;
        uVar10 = 0;
      }
      else {
        if ((char)uVar25 == '\x06') {
          uVar25 = *(ulonglong *)(lVar19 + 0x38) >> 0x3b;
        }
        uVar10 = *(undefined8 *)(lVar19 + 0x30);
      }
      puVar22[0xf] = uVar10;
      puVar22[0x10] = uVar25 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar22 + 0x1c) = iVar23;
      if (puVar22 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
        UNLOCK();
      }
      local_228 = (undefined8 *)CONCAT71(local_228._1_7_,1);
      local_390 = puVar22;
      FUN_1447439e4(puVar22);
      if (param_3 != 0) {
        FUN_1476b7d5a(&local_2e8,&local_390,param_3);
      }
      puVar24 = &local_128;
      if (local_108 != (undefined8 *)0x0) {
        puVar24 = local_108;
      }
      FUN_144717c65(puVar24,local_100 & 0xffffffff);
      if (local_108 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_1476b7dd8(&local_128,&local_2e8);
      local_58 = *(undefined8 *)(lVar9 + 0x270);
      local_60 = lVar19;
      FUN_14332be6a(&local_128);
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
      local_390 = (undefined8 *)0x0;
      puVar22 = (undefined8 *)0x0;
      lVar18 = local_3c8;
    }
  }
  if (*(int *)(lVar18 + 0x48) == 0) goto LAB_143325095;
  local_1e8 = 0;
  lVar18 = *(longlong *)(param_2 + 0x40);
  if (*(longlong *)(param_2 + 0x40) == 0) {
    lVar18 = param_2;
  }
  FUN_1476a3cb0(&local_228,lVar18,*(undefined4 *)(param_2 + 0x48));
  local_1b8 = (undefined1 *)0x0;
  iVar23 = *(int *)(param_2 + 0x78);
  local_1b0 = iVar23;
  if (iVar23 == 0) {
    local_1ac = 4;
  }
  else {
    lVar18 = *(longlong *)(param_2 + 0x70);
    if (*(longlong *)(param_2 + 0x70) == 0) {
      lVar18 = local_3b8;
    }
    FUN_144727e94(local_1d8,iVar23,0);
    puVar16 = local_1b8;
    if (local_1b8 == (undefined1 *)0x0) {
      puVar16 = local_1d8;
    }
    FUN_144727e6e(puVar16,lVar18,iVar23);
  }
  FUN_147552ffc(&local_228,*(undefined2 *)(lVar8 + 0xf4),&local_388);
  FUN_147552ffc(&local_228,*(undefined2 *)(lVar8 + 0xf4),&local_390);
  local_378._2_2_ = *(undefined2 *)(lVar8 + 0xee);
  local_378._0_2_ = *(undefined2 *)(lVar8 + 0xf4);
  auVar4 = local_378;
  local_378._0_5_ = auVar4._0_5_;
  local_378[5] = 0;
  local_370 = 0x6ff;
  local_36c = 0;
  uVar2 = *(ushort *)(lVar8 + 0xf0);
  FUN_1476b6a4c(&local_2e8);
  iVar23 = local_2b8;
  iVar14 = uVar2 + 1;
  iVar21 = iVar14 - local_2b8;
  if (iVar21 != 0 && local_2b8 <= iVar14) {
    if (local_2b8 == 0) {
LAB_14332591a:
      if (local_2b4 <= (int)(uint)uVar2) {
        local_2b4 = 0x100;
        FUN_14497ddce(local_2d8,local_2b8);
        iVar14 = local_2b8 + iVar21;
      }
      iVar17 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar17 = iVar14;
      }
      local_2b8 = iVar14;
      iVar14 = local_2b8;
      if (iVar14 % 0x20 != 0) {
        bVar13 = -(char)(iVar14 % 0x20);
        local_2d8[iVar17 >> 5] = (local_2d8[iVar17 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
        iVar14 = local_2b8;
      }
    }
    else {
      iVar17 = local_2b8 + 0x1e;
      if (-1 < local_2b8 + -1) {
        iVar17 = local_2b8 + -1;
      }
      if (iVar17 >> 5 != (uint)(uVar2 >> 5)) goto LAB_14332591a;
    }
    local_2b8 = iVar14;
    FUN_1447c45ca(local_2d8,iVar23,iVar21,0);
  }
  lVar18 = local_3c8;
  local_2d8[uVar2 >> 5] = local_2d8[uVar2 >> 5] | 1 << ((byte)uVar2 & 0x1f);
  if (((short)local_2e8 == -1) || (local_2e8._2_2_ == -1)) {
LAB_143325beb:
    local_398 = (undefined8 *)0x0;
    lVar18 = local_3c8;
  }
  else {
    lVar9 = *(longlong *)(local_3c8 + 0x28);
    lVar19 = lVar9 + 0x28;
    cVar6 = FUN_1476b6e88(&local_2e8,lVar19);
    if (cVar6 == '\0') {
      local_398 = (undefined8 *)0x0;
    }
    else {
      if ((*(int *)(lVar9 + 0x29c) != 0) || (*(char *)(lVar9 + 0x298) == '\0')) {
        local_368 = *(undefined8 *)(lVar18 + 0x40);
        local_360 = *(undefined4 *)(lVar18 + 0x48);
        FUN_1476b8172(&local_128,lVar19,&local_2e8);
        FUN_14332c10a(&local_128,&local_368);
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        goto LAB_143325beb;
      }
      local_108 = (undefined8 *)0x0;
      local_100 = 0x400000000;
      FUN_1476b81ea(&local_2e8,&local_228,&local_128);
      puVar22 = (undefined8 *)0x0;
      if ((int)local_100 != 0) {
        puVar22 = &local_128;
      }
      puVar24 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar12 = (uint *)*puVar24;
      if (puVar12 != (uint *)0x0) goto LAB_1433262c4;
      while( true ) {
        uVar15 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar15 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar15 | 1;
          __tlregdtor(&LAB_143327e59);
        }
        lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar11 = *(undefined4 **)(lVar18 + 0x310);
        *(undefined8 *)(lVar18 + 0x310) = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar11 = 0xffffffff;
        *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar24 = puVar11;
        FUN_140217a48(puVar24);
        puVar12 = (uint *)*puVar24;
LAB_1433262c4:
        puVar26 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar20 = (uint *)(puVar26 + 0x31);
        uVar15 = puVar12[0x12];
        if (puVar20 <= puVar12 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
          LOCK();
          uVar7 = *puVar12;
          *puVar12 = *puVar12 + uVar15 + 1;
          UNLOCK();
          if ((uVar7 ^ uVar15) != 0xffffffff) break;
          puVar12 = (uint *)*puVar24;
          *puVar12 = 0xffffffff;
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar24 = puVar12;
          puVar26 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
          puVar20 = (uint *)(puVar26 + 0x31);
          uVar15 = 0;
          if (puVar20 <= puVar12 + 0x4000) {
            uVar15 = 1;
            goto LAB_143326346;
          }
        }
      }
      uVar15 = uVar15 + 1;
LAB_143326346:
      *(uint **)(puVar12 + 0x10) = puVar20;
      puVar12[0x12] = uVar15;
      FUN_1447247dc(puVar26,puVar22);
      *puVar26 = &PTR_FUN_14a4e0e40;
      FUN_1476b8172(puVar26 + 0x15,lVar19,&local_2e8);
      puVar26[0x2f] = *(undefined8 *)(local_3c8 + 0x40);
      *(undefined4 *)(puVar26 + 0x30) = *(undefined4 *)(local_3c8 + 0x48);
      uVar15 = *(uint *)(puVar26 + 0x16);
      if (((ulonglong)uVar15 & 0xff) == 0xff) {
        uVar7 = uVar15 >> 10 & 3;
        iVar23 = 0;
        if ((uVar15 >> 9 & 1) == 0 || uVar7 < 2) {
          uVar25 = (ulonglong)(byte)(&DAT_149e38edc)[uVar7];
          iVar23 = 0;
        }
        else {
          uVar25 = 2;
        }
      }
      else {
        iVar23 = (uVar15 >> 7 & 2 | uVar15 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar15 & 0xff) * 4);
        uVar25 = 5;
      }
      if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
      }
      lVar18 = local_3c8;
      puVar26[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar26[9] = puVar26;
      puVar26[10] = puVar26;
      lVar19 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar19 == 0) {
        uVar5 = 1;
        if ((char)uVar25 != '\x06') {
          uVar5 = uVar25;
        }
        uVar25 = uVar5;
        uVar10 = 0;
      }
      else {
        if ((char)uVar25 == '\x06') {
          uVar25 = *(ulonglong *)(lVar19 + 0x38) >> 0x3b;
        }
        uVar10 = *(undefined8 *)(lVar19 + 0x30);
      }
      puVar26[0xf] = uVar10;
      puVar26[0x10] = uVar25 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar26 + 0x1c) = iVar23;
      if (puVar26 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
        UNLOCK();
      }
      local_368 = CONCAT71(local_368._1_7_,1);
      local_398 = puVar26;
      FUN_1447439e4();
      puVar22 = &local_128;
      if (local_108 != (undefined8 *)0x0) {
        puVar22 = local_108;
      }
      FUN_144717c65(puVar22,local_100 & 0xffffffff);
      if (local_108 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (local_288 != 0) {
    FUN_1400020a8();
  }
  local_328 = 0;
  lVar19 = *(longlong *)(param_2 + 0x40);
  if (*(longlong *)(param_2 + 0x40) == 0) {
    lVar19 = param_2;
  }
  FUN_1476a3cb0(&local_368,lVar19,*(undefined4 *)(param_2 + 0x48));
  local_2f8 = (undefined1 *)0x0;
  iVar23 = *(int *)(param_2 + 0x78);
  local_2f0 = iVar23;
  if (iVar23 == 0) {
    local_2ec = 4;
  }
  else {
    lVar19 = local_3b8;
    if (*(longlong *)(param_2 + 0x70) != 0) {
      lVar19 = *(longlong *)(param_2 + 0x70);
    }
    FUN_144727e94(local_318,iVar23,0);
    puVar16 = local_2f8;
    if (local_2f8 == (undefined1 *)0x0) {
      puVar16 = local_318;
    }
    FUN_144727e6e(puVar16,lVar19,iVar23);
  }
  FUN_147552ffc(&local_368,0xffff,&local_398);
  local_3b0 = *(undefined2 *)(lVar8 + 0xee);
  local_3ae = *(undefined2 *)(lVar8 + 0xf4);
  local_3ab = 0;
  local_3a8 = 0x6ff;
  local_3a4 = 0;
  uVar2 = *(ushort *)(lVar8 + 0xf0);
  FUN_1476b7102(&local_2e8);
  iVar23 = local_290;
  iVar14 = uVar2 + 1;
  iVar21 = iVar14 - local_290;
  if (iVar21 != 0 && local_290 <= iVar14) {
    if (local_290 == 0) {
LAB_143325d25:
      if (local_28c <= (int)(uint)uVar2) {
        local_28c = 0x100;
        FUN_14497ddce(local_2b0,local_290);
        iVar14 = local_290 + iVar21;
      }
      iVar17 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar17 = iVar14;
      }
      local_290 = iVar14;
      iVar14 = local_290;
      if (iVar14 % 0x20 != 0) {
        bVar13 = -(char)(iVar14 % 0x20);
        local_2b0[iVar17 >> 5] = (local_2b0[iVar17 >> 5] << (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
        iVar14 = local_290;
      }
    }
    else {
      iVar17 = local_290 + 0x1e;
      if (-1 < local_290 + -1) {
        iVar17 = local_290 + -1;
      }
      if (iVar17 >> 5 != (uint)(uVar2 >> 5)) goto LAB_143325d25;
    }
    local_290 = iVar14;
    FUN_1447c45ca(local_2b0,iVar23,iVar21,0);
    lVar18 = local_3c8;
  }
  local_2b0[uVar2 >> 5] = local_2b0[uVar2 >> 5] | 1 << ((byte)uVar2 & 0x1f);
  if (((short)local_2e8 == -1) || (local_2e8._2_2_ == -1)) {
LAB_143325daf:
    local_3a0 = (undefined8 *)0x0;
  }
  else {
    lVar19 = *(longlong *)(lVar18 + 0x28);
    lVar8 = lVar19 + 0x28;
    cVar6 = FUN_1476b7476(&local_2e8,lVar8);
    if (cVar6 == '\0') goto LAB_143325daf;
    if ((*(int *)(lVar19 + 0x29c) != 0) || (*(char *)(lVar19 + 0x298) == '\0')) {
      local_378 = *(undefined1 (*) [8])(lVar18 + 0x40);
      local_370 = *(undefined4 *)(lVar18 + 0x48);
      FUN_1476b8454(&local_128,lVar8,&local_2e8);
      FUN_14332c3e4(&local_128,local_378);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      goto LAB_143325daf;
    }
    local_108 = (undefined8 *)0x0;
    local_100 = 0x400000000;
    FUN_1476b84cc(&local_2e8,&local_368,&local_128);
    puVar22 = (undefined8 *)0x0;
    if ((int)local_100 != 0) {
      puVar22 = &local_128;
    }
    puVar24 = (undefined8 *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x308);
    puVar12 = (uint *)*puVar24;
    if (puVar12 != (uint *)0x0) goto LAB_14332678f;
    while( true ) {
      uVar15 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar15 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar15 | 1;
        __tlregdtor(&LAB_143327e59);
      }
      lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar11 = *(undefined4 **)(lVar18 + 0x310);
      *(undefined8 *)(lVar18 + 0x310) = 0;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar11 = 0xffffffff;
      *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
      puVar11[0x12] = 0;
      *puVar24 = puVar11;
      FUN_140217a48(puVar24);
      puVar12 = (uint *)*puVar24;
LAB_14332678f:
      puVar26 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar20 = (uint *)(puVar26 + 0x31);
      uVar15 = puVar12[0x12];
      if (puVar20 <= puVar12 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
        LOCK();
        uVar7 = *puVar12;
        *puVar12 = *puVar12 + uVar15 + 1;
        UNLOCK();
        if ((uVar7 ^ uVar15) != 0xffffffff) break;
        puVar12 = (uint *)*puVar24;
        *puVar12 = 0xffffffff;
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar24 = puVar12;
        puVar26 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
        puVar20 = (uint *)(puVar26 + 0x31);
        uVar15 = 0;
        if (puVar20 <= puVar12 + 0x4000) {
          uVar15 = 1;
          goto LAB_14332680f;
        }
      }
    }
    uVar15 = uVar15 + 1;
LAB_14332680f:
    *(uint **)(puVar12 + 0x10) = puVar20;
    puVar12[0x12] = uVar15;
    FUN_1447247dc(puVar26,puVar22);
    *puVar26 = &PTR_FUN_14a4e0e50;
    FUN_1476b8454(puVar26 + 0x15,lVar8,&local_2e8);
    uVar3 = *(undefined4 *)(local_3c8 + 0x48);
    puVar26[0x2f] = *(undefined8 *)(local_3c8 + 0x40);
    *(undefined4 *)(puVar26 + 0x30) = uVar3;
    uVar15 = *(uint *)(puVar26 + 0x16);
    if (((ulonglong)uVar15 & 0xff) == 0xff) {
      uVar7 = uVar15 >> 10 & 3;
      iVar23 = 0;
      if ((uVar15 >> 9 & 1) == 0 || uVar7 < 2) {
        uVar25 = (ulonglong)(byte)(&DAT_149e38edc)[uVar7];
        iVar23 = 0;
      }
      else {
        uVar25 = 2;
      }
    }
    else {
      iVar23 = (uVar15 >> 7 & 2 | uVar15 >> 9 & 1) +
               *(int *)(&DAT_149e38ed0 + ((ulonglong)uVar15 & 0xff) * 4);
      uVar25 = 5;
    }
    if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
    }
    puVar26[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar26[9] = puVar26;
    puVar26[10] = puVar26;
    lVar8 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar8 == 0) {
      uVar5 = 1;
      if ((char)uVar25 != '\x06') {
        uVar5 = uVar25;
      }
      uVar25 = uVar5;
      uVar10 = 0;
    }
    else {
      if ((char)uVar25 == '\x06') {
        uVar25 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
      }
      uVar10 = *(undefined8 *)(lVar8 + 0x30);
    }
    puVar26[0xf] = uVar10;
    puVar26[0x10] = uVar25 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar26 + 0x1c) = iVar23;
    if (puVar26 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
      UNLOCK();
    }
    local_378[0] = 1;
    local_3a0 = puVar26;
    FUN_1447439e4(puVar26);
    if (param_3 != 0) {
      FUN_1476b8584(&local_2e8,&local_3a0,param_3);
    }
    puVar22 = &local_128;
    if (local_108 != (undefined8 *)0x0) {
      puVar22 = local_108;
    }
    FUN_144717c65(puVar22,local_100 & 0xffffffff);
    if (local_108 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (puVar26 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar26 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar26)(puVar26,1);
      }
    }
  }
  if (local_288 != 0) {
    FUN_1400020a8();
  }
  puVar16 = local_318;
  if (local_2f8 != (undefined1 *)0x0) {
    puVar16 = local_2f8;
  }
  FUN_144717c65(puVar16,local_2f0);
  if (local_2f8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14009d40c(&local_368);
  if (local_398 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_398 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_398)(local_398,1);
    }
  }
  puVar16 = local_1d8;
  if (local_1b8 != (undefined1 *)0x0) {
    puVar16 = local_1b8;
  }
  FUN_144717c65(puVar16,local_1b0);
  if (local_1b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14009d40c(&local_228);
  puVar22 = local_390;
LAB_143325095:
  if (puVar22 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar22 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar22)(puVar22,1);
    }
  }
  if (local_388 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_388 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_388)(local_388,1);
    }
  }
  puVar16 = local_158;
  if (local_138 != (undefined1 *)0x0) {
    puVar16 = local_138;
  }
  FUN_144717c65(puVar16,local_130);
  if (local_138 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14009d40c(local_1a8);
  if (local_380 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_380 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_380)(local_380,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143326b9e FUN_143326b9e body=4547 status=ok
// SIG undefined FUN_143326b9e(void)

void FUN_143326b9e(longlong param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  void *pvVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined2 *puVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  int iVar27;
  longlong lVar28;
  undefined1 auStack_138 [40];
  longlong *local_110;
  int local_108;
  uint local_104;
  longlong local_100;
  ulonglong local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  void *local_c0;
  undefined8 local_b8;
  int local_b0;
  longlong *local_a8;
  int local_a0;
  longlong local_98;
  undefined8 uStack_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  uint local_6c;
  uint uStack_68;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_e8 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x548);
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x40);
    local_f0 = plVar9 + (longlong)*(int *)(param_1 + 0x48) * 2;
    local_d0 = param_1 + 0x88;
    local_100 = param_1;
    do {
      local_108 = *(int *)(*(longlong *)(local_e8 + 8) + 0xe0 +
                          (ulonglong)*(ushort *)(plVar9 + 1) * 0x128);
      lVar25 = *plVar9;
      local_e0 = plVar9;
      FUN_1468b322a(lVar25 + 0x110,&local_a8);
      iVar6 = *(int *)(lVar25 + 0x108);
      if ((longlong)iVar6 != 0) {
        lVar25 = *(longlong *)(lVar25 + 0x100);
        lVar28 = 0;
        do {
          if ((*(longlong *)(lVar25 + lVar28) != 0) &&
             (plVar9 = *(longlong **)(lVar25 + 8 + lVar28), plVar9 != (longlong *)0x0)) {
            (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined1 *)(lVar25 + 0x10 + lVar28),&local_a8);
          }
          lVar28 = lVar28 + 0x18;
        } while ((longlong)iVar6 * 0x18 != lVar28);
      }
      if ((longlong)local_a0 == 0) {
        iVar6 = 0;
      }
      else {
        local_c8 = local_a8 + (longlong)local_a0 * 4;
        plVar9 = local_a8;
        lVar25 = local_100;
        do {
          iVar6 = (int)plVar9[1];
          iVar11 = iVar6 + -1;
          if (iVar6 == 0) {
            iVar11 = 0;
          }
          local_110 = plVar9;
          if (*(int *)(lVar25 + 0x58) == *(int *)(lVar25 + 0x84)) {
LAB_143326d2d:
            if (iVar11 < 1) {
              uVar26 = 0;
            }
            else {
              puVar21 = &DAT_149dfb77a;
              if (iVar6 != 0) {
                puVar21 = (undefined2 *)*plVar9;
              }
              lVar28 = 0;
              uVar26 = 0;
              do {
                uVar14 = ((uint)(0x19 < (ushort)puVar21[lVar28] - 0x61) * 0x20 +
                         (uint)(ushort)puVar21[lVar28]) - 0x20;
                uVar23 = (uint)(uVar26 >> 8) ^
                         *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar26 ^ uVar14) & 0xff) * 4)
                ;
                uVar26 = (ulonglong)
                         (uVar23 >> 8 ^
                         *(uint *)(&DAT_14c75d150 +
                                  (ulonglong)(uVar23 & 0xff ^ uVar14 >> 8 & 0xff) * 4));
                lVar28 = lVar28 + 1;
              } while (iVar11 != (int)lVar28);
            }
            iVar6 = FUN_14332c75c(&local_98,uVar26,plVar9);
            plVar18 = (longlong *)0x0;
            if (iVar6 != -1) {
              plVar18 = (longlong *)((longlong)iVar6 * 0x30 + local_98);
            }
            if (plVar18 == (longlong *)0x0) {
              local_c0 = (void *)0x0;
              uVar14 = *(uint *)(plVar9 + 3);
              pvVar4 = (void *)plVar9[2];
              local_b8 = CONCAT44(local_b8._4_4_,uVar14);
              if ((longlong)(int)uVar14 == 0) {
                local_b8 = (ulonglong)uVar14;
              }
              else {
                FUN_1446dd670(&local_c0,uVar14,0);
                memcpy(local_c0,pvVar4,(longlong)(int)uVar14 * 2);
              }
              uVar26 = uStack_90;
              local_b0 = local_108;
              if (local_64 == 0) {
                iVar6 = (int)uStack_90;
                uVar20 = uStack_90 & 0xffffffff;
                uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 + 1);
                if (uStack_90._4_4_ == iVar6) {
                  FUN_140044672(&local_98,uVar26 & 0xffffffff);
                }
                iVar11 = local_70;
                if (local_70 == 0) {
                  iVar16 = -1;
                }
                else {
                  iVar16 = local_70 + 0x1e;
                  if (-1 < local_70 + -1) {
                    iVar16 = local_70 + -1;
                  }
                  iVar16 = iVar16 >> 5;
                }
                iVar12 = local_70 + 1;
                iVar27 = local_70 + 0x1f;
                if (-1 < local_70) {
                  iVar27 = local_70;
                }
                if (iVar27 >> 5 == iVar16) {
                  local_70 = iVar12;
                }
                else {
                  if ((int)local_6c <= local_70) {
                    if (local_70 + 0x20U < 0xa0) {
                      local_6c = 0x80;
                    }
                    else {
                      uVar14 = local_70 + 0x20U >> 5;
                      if (local_6c + 0x1f < 0xa0) {
                        uVar23 = 4;
                        if (4 < uVar14) {
                          uVar23 = uVar14;
                        }
                      }
                      else {
                        uVar23 = uVar14 + (uVar14 * 3 >> 3) + 0x10;
                      }
                      uVar26 = (ulonglong)(uVar23 * 4);
                      if (DAT_14c872d28 != (longlong *)0x0) {
                        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                          uVar15 = (uint)(uVar26 + 0xf);
                          if (uVar23 < 0x1ffd) {
                            uVar26 = (ulonglong)
                                     (ushort)(&DAT_14c841d90)
                                             [0x32 - (byte)(&DAT_14c841e00)[uVar26 + 0xf >> 4]];
                          }
                          else {
                            uVar17 = (ulonglong)(uVar15 & 0xfffffff0);
                            if (uVar17 < 0x7ff1) {
                              bVar10 = (&DAT_14c841e00)[uVar15 >> 4];
                              uVar13 = 0x32;
                              if (0x32 < bVar10) {
                                uVar13 = (ulonglong)bVar10;
                              }
                              uVar22 = 0x32 - (ulonglong)bVar10;
                              do {
                                uVar26 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar22 & 0xffffffff];
                                if (((&DAT_14c841d90)[uVar22 & 0xffffffff] & 0xf) == 0)
                                goto LAB_1433277c9;
                                lVar25 = uVar13 + 1 + uVar22;
                                uVar22 = uVar22 - 1;
                              } while (lVar25 != 0x33);
                            }
                            uVar26 = (ulonglong)DAT_14c841df8;
                            if (DAT_14c841df8 < 0x11) {
                              uVar26 = 0x10;
                            }
                            uVar26 = -uVar26 & (uVar17 + uVar26) - 1;
                          }
                        }
                        else {
                          uVar26 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar26,0);
                        }
                      }
LAB_1433277c9:
                      iVar16 = (int)(uVar26 >> 2);
                      local_6c = iVar16 << 5;
                      if (iVar16 < (int)uVar14) {
                        local_6c = 0xffffffe0;
                      }
                    }
                    FUN_1446efbd8(local_88,local_70);
                    iVar12 = local_70 + 1;
                    plVar9 = local_110;
                  }
                  iVar16 = iVar12 + 0x1f;
                  if (-1 < iVar12) {
                    iVar16 = iVar12;
                  }
                  local_70 = iVar12;
                  if (iVar12 % 0x20 != 0) {
                    puVar7 = local_78;
                    if (local_78 == (uint *)0x0) {
                      puVar7 = local_88;
                    }
                    bVar10 = -(char)(iVar12 % 0x20);
                    puVar7[iVar16 >> 5] =
                         (puVar7[iVar16 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
                  }
                }
                lVar25 = (longlong)iVar6;
                puVar7 = local_78;
                if (local_78 == (uint *)0x0) {
                  puVar7 = local_88;
                }
                bVar10 = (byte)iVar11 & 0x1f;
                puVar7[iVar27 >> 5] =
                     puVar7[iVar27 >> 5] & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
              }
              else {
                uVar20 = (ulonglong)uStack_68;
                lVar25 = (longlong)(int)uStack_68;
                uStack_68 = *(uint *)(local_98 + 4 + lVar25 * 0x30);
                local_64 = local_64 + -1;
                if (local_64 != 0) {
                  *(undefined4 *)(local_98 + (longlong)(int)uStack_68 * 0x30) = 0xffffffff;
                }
              }
              iVar6 = (int)uVar20;
              local_104 = 1 << ((byte)uVar20 & 0x1f);
              puVar7 = local_78;
              if (local_78 == (uint *)0x0) {
                puVar7 = local_88;
              }
              iVar11 = iVar6 + 0x1f;
              if (-1 < iVar6) {
                iVar11 = iVar6;
              }
              local_d8 = (longlong)(iVar11 >> 5);
              puVar7[local_d8] = puVar7[local_d8] | local_104;
              lVar25 = lVar25 * 0x30;
              plVar18 = (longlong *)(local_98 + lVar25);
              *(undefined8 *)(local_98 + lVar25) = 0;
              iVar6 = (int)plVar9[1];
              pvVar4 = (void *)*plVar9;
              *(int *)(local_98 + 8 + lVar25) = iVar6;
              local_f8 = uVar20;
              if ((longlong)iVar6 == 0) {
                *(undefined4 *)((longlong)plVar18 + 0xc) = 0;
              }
              else {
                FUN_1446dd670(plVar18,iVar6,0);
                memcpy((void *)*plVar18,pvVar4,(longlong)iVar6 * 2);
              }
              uVar26 = 0;
              plVar18[2] = 0;
              plVar18[2] = (longlong)local_c0;
              local_c0 = (void *)0x0;
              *(undefined4 *)(plVar18 + 3) = (undefined4)local_b8;
              *(undefined4 *)((longlong)plVar18 + 0x1c) = local_b8._4_4_;
              local_b8 = 0;
              *(int *)(plVar18 + 4) = local_b0;
              *(undefined4 *)(plVar18 + 5) = 0xffffffff;
              iVar6 = (int)plVar18[1];
              iVar11 = iVar6 + -1;
              if (iVar6 == 0) {
                iVar11 = 0;
              }
              if (0 < iVar11) {
                puVar21 = &DAT_149dfb77a;
                if (iVar6 != 0) {
                  puVar21 = (undefined2 *)*plVar18;
                }
                lVar28 = 0;
                uVar26 = 0;
                do {
                  uVar14 = ((uint)(0x19 < (ushort)puVar21[lVar28] - 0x61) * 0x20 +
                           (uint)(ushort)puVar21[lVar28]) - 0x20;
                  uVar23 = (uint)(uVar26 >> 8) ^
                           *(uint *)(&DAT_14c75d150 +
                                    (ulonglong)(((uint)uVar26 ^ uVar14) & 0xff) * 4);
                  uVar26 = (ulonglong)
                           (uVar23 >> 8 ^
                           *(uint *)(&DAT_14c75d150 +
                                    (ulonglong)(uVar23 & 0xff ^ uVar14 >> 8 & 0xff) * 4));
                  lVar28 = lVar28 + 1;
                } while (iVar11 != (int)lVar28);
              }
              uVar14 = (int)uStack_90 - local_64;
              uVar23 = 1;
              if (uVar14 == 1) {
LAB_143327213:
                if (((int)uVar14 < 1) || ((int)uVar23 <= (int)local_50)) {
                  uVar14 = local_50 - 1 & (uint)uVar26;
                  *(uint *)((longlong)plVar18 + 0x2c) = uVar14;
                  puVar8 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar8 = local_60;
                  }
                  *(undefined4 *)(plVar18 + 5) =
                       *(undefined4 *)
                        (puVar8 + ((longlong)(int)local_50 - 1U & (longlong)(int)uVar14) * 4);
                  puVar8 = local_58;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar8 = local_60;
                  }
                  *(int *)(puVar8 + ((longlong)(int)local_50 - 1U & (longlong)(int)uVar14) * 4) =
                       (int)local_f8;
                }
                else {
                  local_50 = uVar23;
                  if (local_58 == (undefined1 *)0x0) {
                    puVar8 = (undefined1 *)0x0;
                  }
                  else {
                    FUN_1446efa72(&local_58,0,0);
                    puVar8 = local_58;
                    if (local_50 == 0) goto LAB_1433276b3;
                  }
                  uVar14 = local_50;
                  if ((1 < local_50) || (puVar8 != (undefined1 *)0x0)) {
                    uVar23 = 0;
                    if (1 < local_50) {
                      uVar23 = local_50;
                    }
                    FUN_1446efa72(&local_58,0,uVar23,4);
                  }
                  if (0 < (int)uVar14) {
                    uVar23 = 0;
                    do {
                      puVar8 = local_58;
                      if (local_58 == (undefined1 *)0x0) {
                        puVar8 = local_60;
                      }
                      *(undefined4 *)(puVar8 + (ulonglong)(local_50 + 0x7fffffff & uVar23) * 4) =
                           0xffffffff;
                      uVar23 = uVar23 + 1;
                    } while (uVar14 != uVar23);
                  }
                  if (local_70 == 0) {
                    uVar20 = 1;
                    uVar26 = 0;
                    iVar11 = 0;
                    iVar6 = 0;
                  }
                  else {
                    puVar7 = local_78;
                    if (local_78 == (uint *)0x0) {
                      puVar7 = local_88;
                    }
                    uVar14 = *puVar7;
                    if (uVar14 == 0) {
                      iVar6 = local_70 + 0x1e;
                      if (-1 < local_70 + -1) {
                        iVar6 = local_70 + -1;
                      }
                      uVar26 = 0;
                      uVar23 = iVar6 >> 5;
                      if (iVar6 >> 5 < 1) {
                        uVar23 = 0;
                      }
                      iVar11 = 0;
                      do {
                        if (uVar23 == uVar26) goto LAB_1433276b3;
                        iVar11 = iVar11 + 0x20;
                        uVar14 = puVar7[uVar26 + 1];
                        uVar26 = uVar26 + 1;
                      } while (uVar14 == 0);
                    }
                    else {
                      uVar26 = 0;
                      iVar11 = 0;
                    }
                    uVar20 = (ulonglong)(-uVar14 & uVar14);
                    uVar17 = uVar20 * 2 + 1;
                    lVar25 = 0x3f;
                    if (uVar17 != 0) {
                      for (; uVar17 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                      }
                    }
                    iVar6 = (iVar11 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
                    if (local_70 <= iVar6) {
                      iVar6 = local_70;
                    }
                  }
                  if (iVar6 < local_70) {
                    uVar14 = 0xffffffff;
                    do {
                      puVar1 = (undefined8 *)(local_98 + (longlong)iVar6 * 0x30);
                      iVar16 = *(int *)(local_98 + 8 + (longlong)iVar6 * 0x30);
                      uVar23 = 0;
                      iVar12 = iVar16 + -1;
                      if (iVar16 == 0) {
                        iVar12 = 0;
                      }
                      if (0 < iVar12) {
                        puVar21 = &DAT_149dfb77a;
                        if (iVar16 != 0) {
                          puVar21 = (undefined2 *)*puVar1;
                        }
                        lVar25 = 0;
                        do {
                          uVar15 = ((uint)(ushort)puVar21[lVar25] +
                                   (uint)(0x19 < (ushort)puVar21[lVar25] - 0x61) * 0x20) - 0x20;
                          uVar23 = uVar23 >> 8 ^
                                   *(uint *)(&DAT_14c75d150 +
                                            (ulonglong)((uVar23 ^ uVar15) & 0xff) * 4);
                          uVar23 = uVar23 >> 8 ^
                                   *(uint *)(&DAT_14c75d150 +
                                            (ulonglong)(uVar23 & 0xff ^ uVar15 >> 8 & 0xff) * 4);
                          lVar25 = lVar25 + 1;
                        } while (iVar12 != (int)lVar25);
                      }
                      uVar17 = (longlong)(int)uVar23 & (longlong)(int)local_50 - 1U;
                      iVar16 = (int)uVar17;
                      *(int *)((longlong)puVar1 + 0x2c) = iVar16;
                      puVar8 = local_58;
                      if (local_58 == (undefined1 *)0x0) {
                        puVar8 = local_60;
                      }
                      *(undefined4 *)(puVar1 + 5) =
                           *(undefined4 *)(puVar8 + ((longlong)(int)local_50 - 1U & uVar17) * 4);
                      puVar8 = local_58;
                      if (local_58 == (undefined1 *)0x0) {
                        puVar8 = local_60;
                      }
                      *(int *)(puVar8 + ((longlong)iVar16 & (longlong)(int)local_50 - 1U) * 4) =
                           iVar6;
                      uVar14 = uVar14 & ~(uint)uVar20;
                      puVar7 = local_78;
                      if (local_78 == (uint *)0x0) {
                        puVar7 = local_88;
                      }
                      iVar6 = (int)uVar26;
                      lVar25 = (longlong)iVar6;
                      uVar23 = puVar7[lVar25] & uVar14;
                      if (uVar23 == 0) {
                        iVar16 = local_70 + 0x1e;
                        if (-1 < local_70 + -1) {
                          iVar16 = local_70 + -1;
                        }
                        iVar16 = iVar16 >> 5;
                        iVar12 = iVar16;
                        if (iVar16 < iVar6) {
                          iVar12 = iVar6;
                        }
                        if (iVar16 <= iVar6) break;
                        lVar28 = 0;
                        while( true ) {
                          iVar11 = iVar11 + 0x20;
                          uVar23 = puVar7[lVar25 + lVar28 + 1];
                          if (uVar23 != 0) break;
                          lVar28 = lVar28 + 1;
                          if (iVar12 - lVar25 == lVar28) goto LAB_1433276b3;
                        }
                        uVar26 = (ulonglong)(iVar6 + (int)lVar28 + 1);
                        uVar14 = 0xffffffff;
                      }
                      uVar20 = (ulonglong)(-uVar23 & uVar23);
                      uVar17 = uVar20 * 2 + 1;
                      lVar25 = 0x3f;
                      if (uVar17 != 0) {
                        for (; uVar17 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                        }
                      }
                      iVar6 = (iVar11 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
                    } while (iVar6 < local_70);
                  }
                }
              }
              else {
                iVar6 = FUN_14332c75c(&local_98,uVar26,plVar18);
                lVar28 = local_98;
                if (iVar6 == -1) {
                  if (3 < uVar14) {
                    uVar20 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
                    lVar25 = 0x3f;
                    if (uVar20 != 0) {
                      for (; uVar20 >> lVar25 == 0; lVar25 = lVar25 + -1) {
                      }
                    }
                    uVar23 = 1 << ((byte)lVar25 & 0x1f);
                  }
                  goto LAB_143327213;
                }
                if (*(longlong *)(local_98 + 0x10 + (longlong)iVar6 * 0x30) != 0) {
                  FUN_1400020a8();
                }
                uVar26 = local_f8;
                plVar9 = (longlong *)(lVar28 + (longlong)iVar6 * 0x30);
                if (*plVar9 != 0) {
                  FUN_1400020a8();
                }
                lVar28 = *plVar18;
                lVar24 = plVar18[1];
                lVar19 = plVar18[2];
                lVar5 = plVar18[3];
                plVar9[4] = plVar18[4];
                plVar9[2] = lVar19;
                plVar9[3] = lVar5;
                *plVar9 = lVar28;
                plVar9[1] = lVar24;
                if (local_64 != 0) {
                  *(uint *)(local_98 + (longlong)(int)uStack_68 * 0x30) = (uint)uVar26;
                }
                *(undefined4 *)(local_98 + lVar25) = 0xffffffff;
                uVar14 = 0xffffffff;
                if (0 < local_64) {
                  uVar14 = uStack_68;
                }
                *(uint *)(local_98 + 4 + lVar25) = uVar14;
                uStack_68 = (uint)uVar26;
                local_64 = local_64 + 1;
                puVar7 = local_78;
                if (local_78 == (uint *)0x0) {
                  puVar7 = local_88;
                }
                puVar7[local_d8] = puVar7[local_d8] & (local_104 ^ 0xffffffff);
              }
LAB_1433276b3:
              plVar9 = local_110;
              lVar25 = local_100;
              if (local_c0 != (void *)0x0) {
                FUN_1400020a8();
                plVar9 = local_110;
                lVar25 = local_100;
              }
            }
            else if ((plVar18 != plVar9) && ((int)plVar18[4] < local_108)) {
              iVar6 = (int)plVar9[3];
              pvVar4 = (void *)plVar9[2];
              *(int *)(plVar18 + 3) = iVar6;
              if (iVar6 == 0 && *(int *)((longlong)plVar18 + 0x1c) == 0) {
                *(undefined4 *)((longlong)plVar18 + 0x1c) = 0;
              }
              else {
                FUN_1446dd670(plVar18 + 2,iVar6);
                if (iVar6 != 0) {
                  memcpy((void *)plVar18[2],pvVar4,(longlong)iVar6 * 2);
                }
              }
            }
          }
          else {
            if (iVar11 < 1) {
              uVar14 = 0;
            }
            else {
              puVar21 = &DAT_149dfb77a;
              if (iVar6 != 0) {
                puVar21 = (undefined2 *)*plVar9;
              }
              lVar28 = 0;
              uVar14 = 0;
              do {
                uVar23 = ((uint)(0x19 < (ushort)puVar21[lVar28] - 0x61) * 0x20 +
                         (uint)(ushort)puVar21[lVar28]) - 0x20;
                uVar14 = uVar14 >> 8 ^
                         *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar14 ^ uVar23) & 0xff) * 4);
                uVar14 = uVar14 >> 8 ^
                         *(uint *)(&DAT_14c75d150 +
                                  (ulonglong)(uVar14 & 0xff ^ uVar23 >> 8 & 0xff) * 4);
                lVar28 = lVar28 + 1;
              } while (iVar11 != (int)lVar28);
            }
            lVar28 = *(longlong *)(lVar25 + 0x90);
            if (*(longlong *)(lVar25 + 0x90) == 0) {
              lVar28 = local_d0;
            }
            iVar16 = *(int *)(lVar28 + (ulonglong)(*(int *)(lVar25 + 0x98) - 1U & uVar14) * 4);
            if (iVar16 != -1) {
              lVar28 = *(longlong *)(lVar25 + 0x50);
LAB_143326ec5:
              lVar24 = (longlong)iVar16;
              iVar16 = *(int *)(lVar28 + 8 + lVar24 * 0x18);
              if (iVar16 == iVar6) {
                if (1 < iVar6) {
                  lVar19 = 0;
                  do {
                    uVar2 = *(ushort *)(*(longlong *)(lVar28 + lVar24 * 0x18) + lVar19);
                    uVar3 = *(ushort *)(*plVar9 + lVar19);
                    if (uVar2 == uVar3) {
                      if (uVar2 == 0) {
                        iVar6 = 1;
                        break;
                      }
                    }
                    else {
                      if (0x7f < (uVar3 | uVar2)) {
                        iVar16 = (uint)uVar2 - (uint)uVar3;
                        goto LAB_143326f49;
                      }
                      if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                      goto code_r0x000143326f47;
                    }
                    lVar19 = lVar19 + 2;
                  } while( true );
                }
              }
              else if (iVar16 + iVar6 != 1) goto LAB_143326ee3;
              goto LAB_143326d2d;
            }
          }
LAB_1433276cc:
          plVar9 = plVar9 + 4;
          iVar6 = local_a0;
        } while (plVar9 != local_c8);
      }
      FUN_141535be2(local_a8,iVar6);
      if (local_a8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      plVar9 = local_e0 + 2;
    } while (plVar9 != local_f0);
  }
  local_110 = DAT_14c8407a8;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  iVar6 = local_70;
  local_110 = DAT_14c8407a8;
  if (local_70 == 0) {
    uVar20 = 1;
    iVar16 = 0;
    uVar26 = 0;
    iVar11 = 0;
  }
  else {
    puVar7 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar7 = local_88;
    }
    uVar14 = *puVar7;
    if (uVar14 == 0) {
      iVar11 = local_70 + 0x1e;
      if (-1 < local_70 + -1) {
        iVar11 = local_70 + -1;
      }
      uVar26 = 0;
      uVar20 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar20 = uVar26;
      }
      iVar16 = 0;
      do {
        if (uVar20 == uVar26) goto LAB_1433279d8;
        iVar16 = iVar16 + 0x20;
        uVar14 = puVar7[uVar26 + 1];
        uVar26 = uVar26 + 1;
      } while (uVar14 == 0);
    }
    else {
      iVar16 = 0;
      uVar26 = 0;
    }
    uVar20 = (ulonglong)(-uVar14 & uVar14);
    uVar17 = uVar20 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    iVar11 = (iVar16 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
    if (local_70 <= iVar11) {
      iVar11 = local_70;
    }
  }
  if (iVar11 != local_70) {
    uVar14 = 0xffffffff;
    do {
      puVar1 = (undefined8 *)(local_98 + (longlong)iVar11 * 0x30);
      puVar21 = &DAT_149dfb77a;
      if (*(int *)(local_98 + 8 + (longlong)iVar11 * 0x30) != 0) {
        puVar21 = (undefined2 *)*puVar1;
      }
      plVar9 = (longlong *)(**(code **)(*local_110 + 200))(local_110,puVar21,1);
      if (plVar9 != (longlong *)0x0) {
        puVar21 = &DAT_149dfb77a;
        if (*(int *)(puVar1 + 3) != 0) {
          puVar21 = (undefined2 *)puVar1[2];
        }
        uVar23 = (**(code **)(*plVar9 + 0x18))(plVar9);
        (**(code **)(*plVar9 + 0x98))(plVar9,puVar21,uVar23 & 0xff000000,0);
      }
      uVar14 = uVar14 & ~(uint)uVar20;
      puVar7 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar7 = local_88;
      }
      iVar11 = (int)uVar26;
      lVar25 = (longlong)iVar11;
      uVar23 = puVar7[lVar25] & uVar14;
      if (uVar23 == 0) {
        iVar12 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar12 = local_70 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar27 = iVar12;
        if (iVar12 < iVar11) {
          iVar27 = iVar11;
        }
        if (iVar11 < iVar12) {
          lVar28 = 0;
          do {
            uVar23 = puVar7[lVar25 + lVar28 + 1];
            if (uVar23 != 0) {
              uVar26 = (ulonglong)(iVar11 + (int)lVar28 + 1);
              uVar14 = 0xffffffff;
              goto LAB_143327b82;
            }
            iVar16 = iVar16 + 0x20;
            lVar28 = lVar28 + 1;
          } while (iVar27 - lVar25 != lVar28);
          uVar14 = 0xffffffff;
          lVar25 = (longlong)iVar27;
        }
        uVar26 = lVar25 + 1U & 0xffffffff;
        iVar11 = local_70;
      }
      else {
LAB_143327b82:
        uVar20 = (ulonglong)(-uVar23 & uVar23);
        uVar17 = uVar20 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        iVar11 = (iVar16 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
        if (local_70 <= iVar11) {
          iVar11 = local_70;
        }
      }
    } while (iVar11 != iVar6);
  }
LAB_1433279d8:
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 == 0) {
    uVar26 = 1;
    uVar20 = 0;
    iVar11 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar7 = local_88;
    }
    uVar14 = *puVar7;
    if (uVar14 == 0) {
      iVar6 = local_70 + 0x1e;
      if (-1 < local_70 + -1) {
        iVar6 = local_70 + -1;
      }
      uVar20 = 0;
      uVar26 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar26 = uVar20;
      }
      iVar11 = 0;
      do {
        if (uVar26 == uVar20) goto LAB_143327c9f;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar7[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar20 = 0;
      iVar11 = 0;
    }
    uVar26 = (ulonglong)(-uVar14 & uVar14);
    uVar17 = uVar26 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
    if (local_70 <= iVar6) {
      iVar6 = local_70;
    }
  }
  if (iVar6 < local_70) {
    uVar14 = 0xffffffff;
    do {
      lVar25 = local_98;
      if (*(longlong *)(local_98 + 0x10 + (longlong)iVar6 * 0x30) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar25 + (longlong)iVar6 * 0x30) != 0) {
        FUN_1400020a8();
      }
      uVar14 = uVar14 & ~(uint)uVar26;
      puVar7 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar7 = local_88;
      }
      iVar6 = (int)uVar20;
      lVar25 = (longlong)iVar6;
      uVar23 = puVar7[lVar25] & uVar14;
      if (uVar23 == 0) {
        iVar16 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar16 = local_70 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar12 = iVar16;
        if (iVar16 < iVar6) {
          iVar12 = iVar6;
        }
        if (iVar16 <= iVar6) break;
        lVar28 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar23 = puVar7[lVar25 + lVar28 + 1];
          if (uVar23 != 0) break;
          lVar28 = lVar28 + 1;
          if (iVar12 - lVar25 == lVar28) goto LAB_143327c9f;
        }
        uVar20 = (ulonglong)(iVar6 + (int)lVar28 + 1);
        uVar14 = 0xffffffff;
      }
      uVar26 = (ulonglong)(-uVar23 & uVar23);
      uVar17 = uVar26 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
    } while (iVar6 < local_70);
  }
LAB_143327c9f:
  uVar26 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar26 != 0) {
    FUN_14494313c(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143326f47:
  iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_143326f49:
  if (iVar16 == 0) {
    iVar6 = 1;
    goto LAB_143326d2d;
  }
LAB_143326ee3:
  iVar16 = *(int *)(lVar28 + 0x10 + lVar24 * 0x18);
  if (iVar16 == -1) goto LAB_1433276cc;
  goto LAB_143326ec5;
}



// FUNCTION 143327d6a FUN_143327d6a body=45 status=ok
// SIG undefined FUN_143327d6a(void)

longlong FUN_143327d6a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143327da2 FUN_143327da2 body=45 status=ok
// SIG undefined FUN_143327da2(void)

longlong FUN_143327da2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_145cbafc2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143327dd0 FUN_143327dd0 body=45 status=ok
// SIG undefined FUN_143327dd0(void)

longlong FUN_143327dd0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143327dfe FUN_143327dfe body=45 status=ok
// SIG undefined FUN_143327dfe(void)

longlong FUN_143327dfe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143327e2c FUN_143327e2c body=45 status=ok
// SIG undefined FUN_143327e2c(void)

longlong FUN_143327e2c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143327e9c FUN_143327e9c body=299 status=ok
// SIG undefined FUN_143327e9c(void)

void FUN_143327e9c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1476a6b5a(param_2,&local_70,param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143327fc8 FUN_143327fc8 body=282 status=ok
// SIG undefined FUN_143327fc8(void)

undefined8 * FUN_143327fc8(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143327e59);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1433280e2 FUN_1433280e2 body=93 status=ok
// SIG undefined FUN_1433280e2(void)

void FUN_1433280e2(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143327e9c(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143328135. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143328140 FUN_143328140 body=325 status=ok
// SIG undefined FUN_143328140(void)

void FUN_143328140(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = (longlong)*(int *)((undefined8 *)*param_2 + 1);
  if (0 < lVar5) {
    memset(*(void **)*param_2,0,lVar5 << 4);
  }
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1476a6e74(param_2,&local_70,param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143328286 FUN_143328286 body=282 status=ok
// SIG undefined FUN_143328286(void)

undefined8 * FUN_143328286(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143327e59);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1433283a0 FUN_1433283a0 body=93 status=ok
// SIG undefined FUN_1433283a0(void)

void FUN_1433283a0(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143328140(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001433283f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1433283fe FUN_1433283fe body=306 status=ok
// SIG undefined FUN_1433283fe(void)

void FUN_1433283fe(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 200);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x18;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1476a7318(param_2,&local_70,*(undefined8 *)(param_1 + 0xd0),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143328532 FUN_143328532 body=282 status=ok
// SIG undefined FUN_143328532(void)

undefined8 * FUN_143328532(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143327e59);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14332864c FUN_14332864c body=93 status=ok
// SIG undefined FUN_14332864c(void)

void FUN_14332864c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1433283fe(param_1 + 0x15,param_1 + 0x30);
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014332869f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1433286aa FUN_1433286aa body=649 status=ok
// SIG undefined FUN_1433286aa(void)

undefined8 FUN_1433286aa(longlong *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int *piVar9;
  undefined1 auStack_f8 [38];
  undefined2 local_d2;
  longlong local_d0;
  int *local_c8;
  uint local_c0;
  longlong local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined1 local_90 [72];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((param_2[1] != 0) && (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar8 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar8 != (longlong *)0x0) && (*(uint *)(plVar8 + 2) == param_2[1])) {
      lVar3 = *param_1;
      if (((*(uint *)(plVar8 + 1) & 0x10200000) == 0) && (lVar4 = *plVar8, lVar4 != 0)) {
        lVar6 = FUN_145b33f78();
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
          cVar5 = FUN_14756ff02(lVar4);
          if ((cVar5 != '\0') && ((longlong)(int)param_2[3] != -1)) {
            piVar9 = (int *)((longlong)(int)param_2[3] * 0x10 + *(longlong *)(param_1[7] + 0xe0));
            if ((((piVar9 != (int *)0x0) && (*piVar9 == *(int *)((longlong)param_1 + 0x24))) &&
                (piVar9[1] == (int)param_1[5])) &&
               ((piVar9[2] == *(int *)((longlong)param_1 + 0x2c) && (piVar9[3] == (int)param_1[6])))
               ) {
              if ((param_2[1] != 0) &&
                 ((uVar1 = *param_2, -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
                plVar8 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                if ((plVar8 != (longlong *)0x0) &&
                   (((*(uint *)(plVar8 + 2) == param_2[1] &&
                     ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) && (lVar6 = *plVar8, lVar6 != 0)))
                   ) {
                  uVar7 = FUN_14055f060();
                  plVar8 = (longlong *)FUN_144718840(lVar6,uVar7);
                  if (plVar8 != (longlong *)0x0) {
                    local_b0 = 0;
                    local_a8 = (undefined4)param_1[2];
                    uStack_a4 = *(undefined4 *)((longlong)param_1 + 0x14);
                    uStack_a0 = (undefined4)param_1[3];
                    uStack_9c = *(undefined4 *)((longlong)param_1 + 0x1c);
                    local_98 = (undefined4)param_1[4];
                    local_c0 = param_2[2];
                    if ((longlong)(int)param_2[4] == -1) {
                      local_d0 = 0;
                    }
                    else {
                      local_d0 = (longlong)(int)param_2[4] * 0x40 + *(longlong *)(param_1[7] + 0xd0)
                      ;
                    }
                    local_bc = param_1[8];
                    local_48 = 0;
                    local_40 = 0x100000000;
                    local_c8 = piVar9;
                    (**(code **)(*plVar8 + 0x18))(plVar8,param_1[1],&local_d0,local_90);
                    if ((int)local_40 != 0) {
                      FUN_14056101a(lVar4,param_1[1],&local_d0,local_90);
                      FUN_14055fcce(local_90,&local_d2,&local_d0,param_1[1] + 0x28);
                      iVar2 = *(int *)(lVar3 + 0x58);
                      *(uint *)(lVar3 + 0x58) = iVar2 + 1U;
                      if (*(uint *)(lVar3 + 0x5c) < iVar2 + 1U) {
                        FUN_1405e07ae((longlong *)(lVar3 + 0x50),iVar2);
                      }
                      *(undefined2 *)(*(longlong *)(lVar3 + 0x50) + (longlong)iVar2 * 2) = local_d2;
                      *(int *)param_1[9] = *(int *)param_1[9] + 1;
                    }
                    FUN_14055efc8(local_90);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143328934 FUN_143328934 body=31 status=ok
// SIG undefined FUN_143328934(void)

undefined8 FUN_143328934(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14332895e FUN_14332895e body=88 status=ok
// SIG undefined FUN_14332895e(void)

void FUN_14332895e(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001433289af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1433289b6 FUN_1433289b6 body=299 status=ok
// SIG undefined FUN_1433289b6(void)

void FUN_1433289b6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0xd8);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_60 = param_1 + 0x28;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar3;
  iVar5 = FUN_1403b8464(&local_60,0);
  lVar4 = local_58;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_50 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_50 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_1476abd28(param_2,lVar3,param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_1476abd28(param_2,lVar3,param_1);
      }
      iVar5 = FUN_1403b8464(&local_60,iVar5 + 1);
      local_50 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143328ae2 FUN_143328ae2 body=282 status=ok
// SIG undefined FUN_143328ae2(void)

undefined8 * FUN_143328ae2(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143327e59);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143328bfc FUN_143328bfc body=93 status=ok
// SIG undefined FUN_143328bfc(void)

void FUN_143328bfc(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1433289b6(param_1 + 0x15,param_1 + 0x32);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143328c4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143328c5a FUN_143328c5a body=299 status=ok
// SIG undefined FUN_143328c5a(void)

void FUN_143328c5a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0xc0);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_60 = param_1 + 0x10;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar3;
  iVar5 = FUN_1403b8464(&local_60,0);
  lVar4 = local_58;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_50 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_50 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_1476ac788(param_2,lVar3,param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_1476ac788(param_2,lVar3,param_1);
      }
      iVar5 = FUN_1403b8464(&local_60,iVar5 + 1);
      local_50 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143328d86 FUN_143328d86 body=282 status=ok
// SIG undefined FUN_143328d86(void)

undefined8 * FUN_143328d86(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143327e59);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143328ea0 FUN_143328ea0 body=93 status=ok
// SIG undefined FUN_143328ea0(void)

void FUN_143328ea0(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143328c5a(param_1 + 0x15,param_1 + 0x2f);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143328ef3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143328efe FUN_143328efe body=299 status=ok
// SIG undefined FUN_143328efe(void)

void FUN_143328efe(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0xd8);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_60 = param_1 + 0x28;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar3;
  iVar5 = FUN_1403b8464(&local_60,0);
  lVar4 = local_58;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_50 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_50 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_1476ac9a8(param_2,lVar3,param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_1476ac9a8(param_2,lVar3,param_1);
      }
      iVar5 = FUN_1403b8464(&local_60,iVar5 + 1);
      local_50 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14332902a FUN_14332902a body=282 status=ok
// SIG undefined FUN_14332902a(void)

undefined8 * FUN_14332902a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143327e59);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 143329144 FUN_143329144 body=93 status=ok
// SIG undefined FUN_143329144(void)

void FUN_143329144(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143328efe(param_1 + 0x15,param_1 + 0x32);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143329197. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1433291a2 FUN_1433291a2 body=313 status=ok
// SIG undefined FUN_1433291a2(void)

void FUN_1433291a2(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0xd8);
  cVar1 = *(char *)(lVar3 + 0x270);
  local_60 = param_1 + 0x28;
  if (cVar1 == '\0') {
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar3 + 0x264) = *(int *)(lVar3 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar3;
  iVar5 = FUN_1403b8464(&local_60,0);
  lVar4 = local_58;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_50 = iVar5;
  if (iVar5 != iVar2) {
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + (longlong)iVar5 * 8);
      local_50 = iVar5;
      if (cVar1 == '\0') {
        *(undefined4 *)(lVar3 + 0x14) = 0;
        FUN_1476ad552(param_2,lVar3,*(undefined8 *)(param_1 + 0xe0),param_1);
        if (lVar3 != 0) {
          *(undefined4 *)(lVar3 + 0x14) = 1;
        }
      }
      else {
        FUN_1476ad552(param_2,lVar3,*(undefined8 *)(param_1 + 0xe0),param_1);
      }
      iVar5 = FUN_1403b8464(&local_60,iVar5 + 1);
      local_50 = iVar5;
    } while (iVar5 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433292dc FUN_1433292dc body=282 status=ok
// SIG undefined FUN_1433292dc(void)

undefined8 * FUN_1433292dc(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143327e59);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1433293f6 FUN_1433293f6 body=93 status=ok
// SIG undefined FUN_1433293f6(void)

void FUN_1433293f6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1433291a2(param_1 + 0x15,param_1 + 0x32);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143329449. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143329454 FUN_143329454 body=1 status=ok
// SIG undefined FUN_143329454(void)

void FUN_143329454(void)

{
  return;
}



// FUNCTION 143329456 FUN_143329456 body=303 status=ok
// SIG undefined FUN_143329456(void)

void FUN_143329456(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0xd0);
  cVar1 = *(char *)(lVar5 + 0x270);
  local_60 = param_1 + 0x20;
  if (cVar1 == '\0') {
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(lVar5 + 0x264) = *(int *)(lVar5 + 0x264) + 1;
    UNLOCK();
  }
  local_58 = lVar5;
  iVar4 = FUN_1403b8464(&local_60,0);
  lVar3 = local_58;
  iVar2 = *(int *)(lVar5 + 0x10);
  local_50 = iVar4;
  if (iVar4 != iVar2) {
    do {
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar4 * 8);
        *(undefined4 *)(lVar5 + 0x14) = 0;
      }
      else {
        lVar5 = 0;
      }
      local_70 = lVar3;
      local_68 = iVar4;
      local_50 = iVar4;
      FUN_1476ae2fc(&local_70,*(undefined8 *)(param_1 + 0xd8),param_1);
      if (lVar5 != 0) {
        *(undefined4 *)(lVar5 + 0x14) = 1;
      }
      iVar4 = FUN_1403b8464(&local_60,iVar4 + 1);
      local_50 = iVar4;
    } while (iVar4 != iVar2);
  }
  if (local_60 != 0) {
    if (*(char *)(local_58 + 0x270) == '\0') {
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143329586 FUN_143329586 body=282 status=ok
// SIG undefined FUN_143329586(void)

undefined8 * FUN_143329586(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_143327e59);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1433296a0 FUN_1433296a0 body=86 status=ok
// SIG undefined FUN_1433296a0(void)

void FUN_1433296a0(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_143329456(param_1 + 0x15);
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001433296ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1433296f6 FUN_1433296f6 body=29 status=ok
// SIG undefined FUN_1433296f6(void)

undefined8 FUN_1433296f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143329728 FUN_143329728 body=93 status=ok
// SIG undefined FUN_143329728(void)

void FUN_143329728(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4e0740;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143329786 FUN_143329786 body=93 status=ok
// SIG undefined FUN_143329786(void)

void FUN_143329786(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4e0740;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1433297e4 FUN_1433297e4 body=126 status=ok
// SIG undefined FUN_1433297e4(void)

void FUN_1433297e4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a4e0740;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143329853. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14332986c FUN_14332986c body=20 status=ok
// SIG undefined FUN_14332986c(void)

undefined1 FUN_14332986c(longlong param_1)

{
  FUN_14769d6a2(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143329884 FUN_143329884 body=1 status=ok
// SIG undefined FUN_143329884(void)

void FUN_143329884(void)

{
  return;
}



// FUNCTION 143329886 FUN_143329886 body=29 status=ok
// SIG undefined FUN_143329886(void)

undefined8 FUN_143329886(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433298a4 FUN_1433298a4 body=29 status=ok
// SIG undefined FUN_1433298a4(void)

undefined8 FUN_1433298a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433298dc FUN_1433298dc body=1 status=ok
// SIG undefined FUN_1433298dc(void)

void FUN_1433298dc(void)

{
  return;
}



// FUNCTION 1433298de FUN_1433298de body=29 status=ok
// SIG undefined FUN_1433298de(void)

undefined8 FUN_1433298de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


