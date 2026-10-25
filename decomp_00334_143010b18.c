// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143010b18 FUN_143010b18 body=701 status=ok
// SIG undefined FUN_143010b18(void)

void FUN_143010b18(longlong *param_1,longlong param_2,byte param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x400000000;
  uVar1 = *(uint *)(param_1 + 2);
  if ((int)uVar1 < 1) {
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4();
    }
  }
  else {
    local_68 = CONCAT44(4,uVar1);
    if ((uVar1 < 5) || (FUN_1400c4ccc(local_80,0), 0 < (int)param_1[2])) {
      lVar5 = 0;
      do {
        plVar7 = (longlong *)param_1[0x175];
        if ((longlong *)param_1[0x175] == (longlong *)0x0) {
          plVar7 = param_1 + 0x173;
        }
        puVar6 = local_70;
        if (local_70 == (undefined1 *)0x0) {
          puVar6 = local_80;
        }
        *(undefined4 *)(puVar6 + lVar5 * 4) = *(undefined4 *)(plVar7[lVar5] + 8);
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)param_1[2]);
    }
  }
  uVar2 = *(undefined4 *)(param_2 + 0x138);
  param_1[0x18e] = *(longlong *)(param_2 + 8);
  iVar4 = (int)param_1[0x17d];
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      plVar7 = (longlong *)param_1[0x17c];
      if ((longlong *)param_1[0x17c] == (longlong *)0x0) {
        plVar7 = param_1 + 0x17a;
      }
      if (plVar7[lVar5] != 0) {
        *(undefined4 *)(plVar7[lVar5] + 0x550) = uVar2;
        iVar4 = (int)param_1[0x17d];
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  if (0 < (int)param_1[0x184]) {
    lVar5 = 0;
    do {
      plVar7 = (longlong *)param_1[0x183];
      if ((longlong *)param_1[0x183] == (longlong *)0x0) {
        plVar7 = param_1 + 0x182;
      }
      *(undefined2 *)((longlong)plVar7 + lVar5 * 2) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[0x184]);
  }
  iVar4 = (int)param_1[8];
  plVar7 = *(longlong **)(param_2 + 8);
  if (((longlong)iVar4 == 1) || ((*(byte *)((longlong)plVar7 + 0x6f) & 1) != 0)) {
    local_88 = param_1 + 0x170;
    (**(code **)(*plVar7 + 0xa0))(plVar7,*param_1 + 0x18,*param_1,param_3);
  }
  else {
    plVar7 = param_1 + 5;
    if ((longlong *)param_1[7] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[7];
    }
    if (iVar4 != 0) {
      lVar5 = 0;
      do {
        if ((*(byte *)((longlong)plVar7 + lVar5 + 8) & param_3) != 0) {
          local_88 = param_1 + 0x170;
          (**(code **)(**(longlong **)(param_2 + 8) + 0xa0))
                    (*(longlong **)(param_2 + 8),*param_1 + 0x18,
                     *(undefined8 *)((longlong)plVar7 + lVar5));
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)iVar4 * 0x10 != lVar5);
    }
  }
  iVar4 = (int)param_1[2];
  if (0 < iVar4) {
    lVar5 = 0;
    do {
      if ((param_3 >> ((uint)lVar5 & 0x1f) & 1) != 0) {
        iVar4 = (int)param_1[0x16f];
        *(uint *)(param_1 + 0x16f) = iVar4 + 1U;
        if (*(uint *)((longlong)param_1 + 0xb7c) < iVar4 + 1U) {
          FUN_1447a06ee(param_1 + 0x16e,iVar4);
        }
        lVar3 = param_1[0x16e];
        lVar8 = (longlong)iVar4 * 0x10;
        *(undefined8 *)(lVar3 + lVar8) = 0;
        ((undefined8 *)(lVar3 + lVar8))[1] = 0;
        *(undefined4 *)(lVar3 + lVar8) = *(undefined4 *)(param_2 + 0x158);
        *(uint *)(lVar3 + 4 + lVar8) = (uint)lVar5;
        puVar6 = local_70;
        if (local_70 == (undefined1 *)0x0) {
          puVar6 = local_80;
        }
        *(undefined4 *)(lVar3 + 8 + lVar8) = *(undefined4 *)(puVar6 + lVar5 * 4);
        plVar7 = (longlong *)param_1[0x175];
        if ((longlong *)param_1[0x175] == (longlong *)0x0) {
          plVar7 = param_1 + 0x173;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar8) = *(undefined4 *)(plVar7[lVar5] + 8);
        iVar4 = (int)param_1[2];
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143010dd6 FUN_143010dd6 body=168 status=ok
// SIG undefined FUN_143010dd6(void)

void FUN_143010dd6(longlong param_1)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(param_1 + 0x28);
  if (0 < iVar8) {
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar5 * 8);
      if (*(int *)(lVar3 + 0x1dd0) == 2) {
        lVar4 = *(longlong *)
                 (*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(lVar3 + 0x1dd8) * 8);
        uVar1 = *(int *)(lVar4 + 0x3130) + 0x3e;
        if (0x3e < uVar1) {
          uVar9 = *(int *)(lVar4 + 0x3130) + 0x1f;
          if ((int)uVar9 < 0) {
            uVar9 = uVar1;
          }
          uVar7 = 0;
          do {
            lVar6 = *(longlong *)(lVar3 + 0x3128);
            if (*(longlong *)(lVar3 + 0x3128) == 0) {
              lVar6 = lVar3 + 0x3118;
            }
            lVar10 = *(longlong *)(lVar4 + 0x3128);
            if (*(longlong *)(lVar4 + 0x3128) == 0) {
              lVar10 = lVar4 + 0x3118;
            }
            puVar2 = (uint *)(lVar10 + uVar7 * 4);
            *puVar2 = *puVar2 | *(uint *)(lVar6 + uVar7 * 4);
            uVar7 = uVar7 + 1;
          } while (((int)uVar9 >> 5) + (uint)((int)uVar9 >> 5 == 0) != uVar7);
          iVar8 = *(int *)(param_1 + 0x28);
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar8);
  }
  return;
}



// FUNCTION 143010e7e FUN_143010e7e body=2166 status=ok
// SIG undefined FUN_143010e7e(void)

void FUN_143010e7e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 **ppuVar2;
  byte bVar3;
  uint uVar4;
  undefined8 *puVar5;
  void *_Src;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  longlong local_110;
  uint local_104;
  longlong local_100;
  longlong *local_f8;
  undefined8 *local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  code *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined **local_98;
  code *local_90;
  longlong local_88;
  int local_80;
  undefined4 local_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_e8 = 0;
  uStack_e0 = 0;
  local_110 = param_1;
  if (*(int *)(param_1 + 0x80) < 2) {
    local_e8 = *param_2;
    iVar9 = (int)param_2[1];
    uStack_e0 = param_2[1];
    *param_2 = 0;
    local_b8 = (code *)0x0;
    param_2[1] = 0;
    local_b0 = 0;
    FUN_14008dfdc();
  }
  else {
    iVar9 = (int)param_2[1];
    if (iVar9 < 1) goto LAB_14301109f;
    lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x3358);
    lVar11 = 0;
    uVar17 = 0;
    do {
      uVar20 = uStack_e0;
      uVar4 = *(uint *)(*param_2 + (longlong)(int)uVar17 * 4);
      if (*(char *)(*(longlong *)(lVar19 + (ulonglong)(uVar4 & 0xffffff) * 8) + 0x6e) < '\0') {
        uVar17 = uVar17 + 1;
      }
      else {
        lVar21 = (longlong)(int)uStack_e0;
        uVar8 = (int)uStack_e0 + 1;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar8);
        if (uStack_e0._4_4_ < uVar8) {
          FUN_1447a8806(&local_e8,uVar20 & 0xffffffff);
          lVar11 = local_e8;
        }
        *(uint *)(lVar11 + lVar21 * 4) = uVar4;
        iVar9 = (int)param_2[1];
        iVar18 = ~uVar17 + iVar9;
        if (iVar18 != 0) {
          if (0 < iVar18) {
            iVar18 = 1;
          }
          memmove((void *)(*param_2 + (longlong)(int)uVar17 * 4),
                  (void *)(*param_2 + (longlong)(iVar9 - iVar18) * 4),(longlong)iVar18 << 2);
          iVar9 = (int)param_2[1];
        }
        iVar9 = iVar9 + -1;
        *(int *)(param_2 + 1) = iVar9;
      }
    } while ((int)uVar17 < iVar9);
    param_1 = local_110;
    iVar9 = (int)uStack_e0;
  }
  lVar19 = local_e8;
  if (iVar9 != 0) {
    local_d0 = *(code **)(*(longlong *)(param_1 + 0x78) +
                         (longlong)(*(int *)(param_1 + 0x80) + -1) * 8);
    local_7c = uStack_e0._4_4_;
    local_e8 = 0;
    uStack_e0 = 0;
    local_a8 = 0;
    local_98 = &PTR_LAB_14a2f9b20;
    local_88 = lVar19;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = FUN_143032a2e;
    local_118 = DAT_14c7585d4;
    local_90 = local_d0;
    local_80 = iVar9;
    FUN_14014aede(&local_f0,&local_b8,lVar19,0);
    FUN_14008dfdc(&local_c8);
    ppuVar2 = (undefined8 **)(param_1 + 0x3008);
    if (ppuVar2 != &local_f0) {
      puVar5 = *ppuVar2;
      *ppuVar2 = local_f0;
      local_f0 = (undefined8 *)0x0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_14301109f;
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    if (local_f0 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_f0 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_f0)(local_f0,1);
      }
    }
  }
LAB_14301109f:
  if ((int)param_2[1] != 0) {
    puVar5 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8
             );
    puVar10 = (uint *)*puVar5;
    if (puVar10 != (uint *)0x0) goto LAB_1430110d6;
    while( true ) {
      FUN_14472e504(puVar5);
      puVar10 = (uint *)*puVar5;
LAB_1430110d6:
      puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      uVar17 = puVar10[0x12];
      if (puVar16 + 5 <= puVar10 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar4 = *puVar10;
        *puVar10 = *puVar10 + uVar17 + 1;
        UNLOCK();
        if ((uVar4 ^ uVar17) != 0xffffffff) break;
        puVar10 = (uint *)*puVar5;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar5 = puVar10;
        puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        uVar17 = 0;
        if (puVar16 + 5 <= puVar10 + 0x4000) {
          uVar17 = 1;
          goto LAB_14301114c;
        }
      }
    }
    uVar17 = uVar17 + 1;
LAB_14301114c:
    *(undefined8 **)(puVar10 + 0x10) = puVar16 + 6;
    puVar10[0x12] = uVar17;
    *(int *)(puVar16 + -1) = ((int)puVar16 + -8) - (int)puVar10;
    *(undefined4 *)((longlong)puVar16 + -4) = 0x28;
    puVar16[1] = 0;
    *puVar16 = &PTR_FUN_14a2f9c38;
    lVar19 = *(longlong *)(param_1 + 0x40);
    do {
      puVar16[1] = lVar19;
      LOCK();
      lVar11 = *(longlong *)(param_1 + 0x40);
      bVar23 = lVar19 == lVar11;
      if (bVar23) {
        *(longlong *)(param_1 + 0x40) = (longlong)puVar16;
        lVar11 = lVar19;
      }
      UNLOCK();
      lVar19 = lVar11;
    } while (!bVar23);
    puVar5 = puVar16 + 2;
    puVar16[2] = 0;
    iVar9 = (int)param_2[1];
    _Src = (void *)*param_2;
    *(int *)(puVar16 + 3) = iVar9;
    if ((longlong)iVar9 == 0) {
      *(undefined4 *)((longlong)puVar16 + 0x1c) = 0;
    }
    else {
      FUN_1417803da(puVar5,iVar9);
      memcpy((void *)*puVar5,_Src,(longlong)iVar9 << 2);
    }
    *(undefined4 *)(puVar16 + 4) = 0;
    if (1 < *(int *)(param_1 + 0x80)) {
      local_f8 = (longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
      local_100 = 0x528bd63500;
      lVar19 = 0;
      do {
        bVar3 = *(byte *)(param_1 + 0x3064);
        uVar20 = (ulonglong)bVar3;
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x78) + lVar19 * 8);
        puVar16 = TlsGetValue(DAT_14c896140);
        if (puVar16 == (undefined8 *)0x0) {
          puVar16 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          *puVar16 = 0;
          puVar16[1] = 0;
          *(undefined4 *)(puVar16 + 2) = 0;
          TlsSetValue(DAT_14c896140,puVar16);
        }
        puVar14 = (undefined8 *)puVar16[1];
        if (puVar14 == (undefined8 *)0x0) {
          puVar14 = (undefined8 *)*puVar16;
          if (puVar14 == (undefined8 *)0x0) {
            uVar17 = (uint)DAT_14c896180;
            pcVar6 = DAT_14c896180;
            uVar4 = local_104;
            while (DAT_14c896180 = pcVar6, local_b8 = pcVar6, ((ulonglong)pcVar6 & 0x3ffffff) != 0)
            {
              local_104 = uVar17 & 0x3ffffff;
              local_d0 = (code *)(((ulonglong)pcVar6 & 0xfffffffffc000000) + 0x4000000);
              uVar17 = local_104;
              if ((ulonglong)local_d0 >> 0x1a < (ulonglong)pcVar6 >> 0x1a) {
                FUN_14000f986(0x3a83126f);
                uVar4 = local_104;
                uVar17 = local_104;
              }
              local_104 = uVar4;
              uVar22 = (ulonglong)((uint)pcVar6 & 0x3fff);
              local_d0 = (code *)((ulonglong)local_d0 & 0xfffffffffc000000 |
                                 (ulonglong)
                                 *(uint *)(*(longlong *)
                                            (&DAT_14c833b00 + (ulonglong)(uVar17 >> 0xe) * 8) + 0x10
                                          + uVar22 * 0x18));
              LOCK();
              bVar23 = local_b8 == DAT_14c896180;
              pcVar6 = local_d0;
              if (!bVar23) {
                pcVar6 = DAT_14c896180;
              }
              DAT_14c896180 = pcVar6;
              UNLOCK();
              if (bVar23) {
                *(undefined4 *)
                 (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar17 >> 0xe) * 8) + uVar22 * 0x18 +
                 0x10) = 0;
                puVar14 = *(undefined8 **)
                           (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar17 >> 0xe) * 8) + 8 +
                           (ulonglong)(uVar17 & 0x3fff) * 0x18);
                FUN_1447d080c();
                puVar16[1] = puVar14;
                if (puVar14 == (undefined8 *)0x0) goto LAB_143011609;
                goto LAB_143011491;
              }
              uVar17 = (uint)DAT_14c896180;
              pcVar6 = DAT_14c896180;
              uVar4 = local_104;
            }
            puVar16[1] = 0;
            local_104 = uVar4;
LAB_143011609:
            puVar14 = (undefined8 *)FUN_14001cc68(0x10000,0);
            puVar16[1] = puVar14;
            iVar9 = 0xff;
            puVar15 = puVar14;
            do {
              puVar13 = puVar15 + 0x20;
              *puVar15 = puVar13;
              iVar9 = iVar9 + -1;
              puVar15 = puVar13;
            } while (iVar9 != 0);
          }
          else {
            puVar16[1] = puVar14;
            puVar13 = puVar16;
          }
          *puVar13 = 0;
LAB_143011491:
          *(undefined4 *)(puVar16 + 2) = 0x100;
          iVar9 = 0xff;
        }
        else {
          iVar9 = *(int *)(puVar16 + 2) + -1;
        }
        puVar16[1] = *puVar14;
        *(int *)(puVar16 + 2) = iVar9;
        *puVar14 = UE::Tasks::Private::FTaskBase::vftable;
        puVar14[1] = &DAT_100000002;
        puVar14[2] = 0;
        *(undefined4 *)(puVar14 + 3) = 0;
        *(undefined4 *)(puVar14 + 4) = 0xffffffff;
        puVar14[6] = 0;
        puVar14[7] = 0x100000000;
        *(undefined1 *)(puVar14 + 8) = 1;
        puVar14[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateDummy::vftable;
        puVar14[0xf] = 0;
        puVar14[0x10] = 0xe800000000000020;
        puVar14[0x12] = 0;
        puVar14[0x13] = 0x100000000;
        *(undefined2 *)(puVar14 + 0x14) = 0;
        LOCK();
        bVar23 = *(char *)(puVar14 + 8) == '\x01';
        if (bVar23) {
          *(char *)(puVar14 + 8) = '\0';
        }
        UNLOCK();
        if (!bVar23) {
          FUN_14008cdb0(puVar14 + 8);
        }
        param_1 = local_110;
        *puVar14 = &PTR_FUN_14a2f9b50;
        if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
        }
        puVar14[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar14[9] = puVar14;
        puVar14[10] = puVar14;
        lVar21 = *local_f8;
        if (lVar21 == 0) {
          uVar20 = (ulonglong)bVar3;
          if (bVar3 == 6) {
            uVar20 = 1;
          }
          uVar12 = 0;
        }
        else {
          if (bVar3 == 6) {
            uVar20 = *(ulonglong *)(lVar21 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar21 + 0x30);
        }
        puVar14[0xf] = uVar12;
        puVar14[0x10] = (uVar20 << 0x3b) + local_100 | 0xc000000000000000;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
        puVar14[0x15] = lVar11;
        puVar14[0x16] = puVar5;
        *puVar14 = &PTR_FUN_14a2f9b40;
        LOCK();
        *(longlong *)(lVar11 + 0xd18) = *(longlong *)(lVar11 + 0xd18) + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)puVar14 + 0xc) = *(int *)((longlong)puVar14 + 0xc) + 1;
        UNLOCK();
        puVar14[2] = lVar11 + 0xd10;
        local_b8 = (code *)CONCAT71(local_b8._1_7_,1);
        FUN_1447439e4(puVar14,&local_b8);
        if (puVar14 != (undefined8 *)0x0) {
          lVar11 = *(longlong *)(param_1 + 0x3040);
          LOCK();
          *(int *)(lVar11 + 0xc) = *(int *)(lVar11 + 0xc) + 1;
          UNLOCK();
          cVar7 = FUN_1456bb142(puVar14 + 0x11,lVar11);
          if (cVar7 == '\0') {
            LOCK();
            *(int *)(lVar11 + 0xc) = *(int *)(lVar11 + 0xc) + -1;
            UNLOCK();
          }
          else {
            LOCK();
            *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
            UNLOCK();
            FUN_1456bb1d4(lVar11 + 0x28,puVar14);
          }
          param_1 = local_110;
          LOCK();
          piVar1 = (int *)(puVar14 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
        }
        lVar19 = lVar19 + 1;
      } while (lVar19 < (longlong)*(int *)(param_1 + 0x80) + -1);
    }
  }
  FUN_14008dfdc(&local_e8);
  if ((local_70 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430116f6 FUN_1430116f6 body=508 status=ok
// SIG undefined FUN_1430116f6(void)

void FUN_1430116f6(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78;
  undefined8 uStack_70;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x3038);
  if (lVar2 == 0) goto LAB_143011761;
  if (DAT_14c87e718 == '\0') {
    iVar1 = *(int *)(lVar2 + 0x1c);
    if ((2 < iVar1) && (bVar5 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar5 < 3)) {
      local_78.QuadPart = 0x20100000001;
      uStack_70 = 0x30100000101;
      local_68 = DAT_14c7585c8;
      local_64 = DAT_14c7585c8 | 0x200;
      local_60 = DAT_14c7585c8 | 0x100;
      local_5c = DAT_14c7585c8 | 0x300;
      local_58 = 0;
      uStack_54 = 0x200;
      uStack_50 = 0x100;
      uStack_4c = 0x300;
      if (*(byte *)((longlong)&local_78 + (ulonglong)(iVar1 - 3) * 4) == bVar5) goto LAB_1430118e6;
    }
    QueryPerformanceCounter(&local_78);
    uStack_70 = 0xffffffffffffffff;
    FUN_140056092(lVar2,&local_78);
  }
  else {
LAB_1430118e6:
    FUN_140082318(lVar2);
  }
LAB_143011761:
  local_78.QuadPart = 0;
  uStack_70 = 0;
  FUN_1472e87c0();
  lVar2 = param_2[1];
  if (0 < (longlong)(int)lVar2) {
    lVar9 = 0;
    do {
      uVar4 = uStack_70;
      bVar5 = *(byte *)(*param_2 + lVar9);
      if (bVar5 != 0) {
        bVar7 = bVar5;
        if (0 < (longlong)*(int *)(param_1 + 0x28)) {
          lVar8 = 0;
          do {
            if (((bVar5 >> ((uint)lVar8 & 0x1f) & 1) != 0) &&
               (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar8 * 8),
               *(int *)(lVar3 + 0x1dd0) == 2)) {
              bVar7 = bVar7 | (byte)(1 << (*(byte *)(lVar3 + 0x1dd8) & 0x1f));
            }
            lVar8 = lVar8 + 1;
          } while (*(int *)(param_1 + 0x28) != lVar8);
        }
        lVar8 = (longlong)(int)uStack_70;
        uVar6 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
        if (uStack_70._4_4_ < uVar6) {
          FUN_1447a8806(&local_78,uVar4 & 0xffffffff);
        }
        *(uint *)(local_78.QuadPart + lVar8 * 4) = (uint)bVar7 << 0x18 | (uint)lVar9 & 0xffffff;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != (int)lVar2);
  }
  FUN_143010e7e(param_1,&local_78);
  FUN_1400daade(param_1 + 0x3040);
  FUN_14008dfdc(&local_78);
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430118f4 FUN_1430118f4 body=2408 status=ok
// SIG undefined FUN_1430118f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1430118f4(longlong *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  void *pvVar21;
  bool bVar22;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  longlong local_a0;
  uint *local_98;
  void *local_90;
  longlong *local_88;
  longlong local_80;
  LARGE_INTEGER local_78;
  undefined8 uStack_70;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 8))();
  if ((int)param_1[0x60c] == 0) {
    local_a8 = (ulonglong)*(uint *)((longlong)param_1 + 0x306c);
    if ((longlong)(int)param_1[10] != 0) {
      lVar16 = param_1[9];
      lVar13 = (longlong)(int)param_1[10] * 0x260 + lVar16;
      lVar12 = local_a8 << 0x20;
      do {
        FUN_14300d356(lVar16);
        FUN_14301225d(param_1[3],*(undefined8 *)(lVar16 + 0x18),*(undefined8 *)(lVar16 + 0x20),
                      lVar12);
        lVar16 = lVar16 + 0x260;
      } while (lVar16 != lVar13);
    }
    FUN_142fe07b6(param_1[2],param_1[1]);
    local_88 = param_1;
    if ((longlong)(int)param_1[10] != 0) {
      lVar16 = param_1[9];
      lVar13 = (longlong)(int)param_1[10] * 0x260 + lVar16;
      lVar12 = local_a8 << 0x20;
      do {
        iVar4 = FUN_14301260e(lVar16,lVar12);
        lVar11 = *(longlong *)(lVar16 + 0x60);
        if (lVar11 != 0) {
          lVar20 = param_1[1];
          FUN_1401f5ed8(lVar11,lVar20);
          *(longlong *)(lVar11 + 8) = lVar20;
          FUN_14300d116(*(undefined8 *)(lVar16 + 0x60),lVar12);
          lVar11 = *(longlong *)(lVar16 + 0x60);
          lVar20 = param_1[1];
          lVar19 = *(longlong *)(lVar11 + 8);
          if (lVar19 != 0) {
            uVar18 = *(uint *)(lVar11 + 0x18);
            if ((longlong)(int)uVar18 != 0) {
              local_90 = *(void **)(lVar11 + 0x10);
              local_98 = (uint *)((longlong)(int)uVar18 * 8);
              puVar8 = (uint *)0x0;
              local_a0 = lVar20;
              do {
                FUN_140152f5c(*(undefined8 *)((longlong)local_90 + (longlong)puVar8),lVar19);
                puVar8 = puVar8 + 2;
              } while (local_98 != puVar8);
              LOCK();
              bVar22 = DAT_14ca8c140 == '\0';
              if (bVar22) {
                DAT_14ca8c140 = '\x01';
              }
              UNLOCK();
              if (!bVar22) {
                FUN_1447d2058(&DAT_14ca8c140);
              }
              lVar20 = local_a0;
              iVar9 = DAT_14ca8c180;
              lVar19 = (longlong)DAT_14ca8c180;
              iVar14 = DAT_14ca8c180 + uVar18;
              uVar7 = DAT_14ca8c184 - DAT_14ca8c180;
              DAT_14ca8c180 = iVar14;
              if (uVar7 < uVar18) {
                FUN_1400f7990(&DAT_14ca8c178,iVar9);
              }
              memcpy((void *)(lVar19 * 8 + _DAT_14ca8c178),local_90,(size_t)local_98);
              LOCK();
              bVar22 = DAT_14ca8c140 == '\x01';
              if (bVar22) {
                DAT_14ca8c140 = '\0';
              }
              UNLOCK();
              if (!bVar22) {
                FUN_14008cdb0(&DAT_14ca8c140);
              }
            }
            *(undefined4 *)(lVar11 + 0x18) = 0;
            if (*(int *)(lVar11 + 0x1c) < 0) {
              FUN_145ccb7b2(lVar11 + 0x10,0);
            }
          }
          FUN_1472e1b76(lVar11 + 0xd0);
          uVar2 = *(undefined8 *)(lVar11 + 0x100);
          lVar19 = *(longlong *)(*(longlong *)(lVar11 + 0x50) + 8);
          LOCK();
          piVar1 = (int *)(lVar19 + 0x58);
          *piVar1 = *piVar1 + (int)uVar2;
          UNLOCK();
          LOCK();
          piVar1 = (int *)(lVar19 + 0x5c);
          *piVar1 = *piVar1 + (int)((ulonglong)uVar2 >> 0x20);
          UNLOCK();
          FUN_1403376bc(lVar11,lVar20);
          param_1 = local_88;
        }
        if (0 < iVar4) {
          LOCK();
          *(int *)(param_1 + 0x617) = (int)param_1[0x617] + iVar4;
          UNLOCK();
        }
        FUN_1400daade(lVar16 + 0x240);
        lVar16 = lVar16 + 0x260;
      } while (lVar16 != lVar13);
    }
    FUN_143010dd6(param_1);
    lVar16 = *(longlong *)(param_1[3] + 0x5648);
    if (lVar16 != 0) {
      if (DAT_14c87e718 == '\0') {
        iVar4 = *(int *)(lVar16 + 0x1c);
        if ((2 < iVar4) &&
           (bVar3 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar3 < 3)) {
          local_78.QuadPart = 0x20100000001;
          uStack_70 = 0x30100000101;
          local_68 = DAT_14c7585c8;
          local_64 = DAT_14c7585c8 | 0x200;
          local_60 = DAT_14c7585c8 | 0x100;
          local_5c = DAT_14c7585c8 | 0x300;
          local_58 = 0;
          uStack_54 = 0x200;
          uStack_50 = 0x100;
          uStack_4c = 0x300;
          if (*(byte *)((longlong)&local_78 + (ulonglong)(iVar4 - 3) * 4) == bVar3)
          goto LAB_1430121c6;
        }
        QueryPerformanceCounter(&local_78);
        uStack_70 = 0xffffffffffffffff;
        FUN_140056092(lVar16,&local_78);
      }
      else {
LAB_1430121c6:
        FUN_140082318(lVar16);
      }
    }
    if ((longlong)(int)param_1[10] != 0) {
      lVar16 = local_88[9];
      local_80 = (longlong)(int)param_1[10] * 0x260 + lVar16;
      do {
        lVar12 = *(longlong *)(lVar16 + 0x18);
        iVar4 = *(int *)(lVar12 + 0x3130);
        uVar15 = 1;
        if (iVar4 == 0) {
          pvVar21 = (void *)0x0;
          iVar9 = 0;
          iVar14 = 0;
        }
        else {
          puVar8 = *(uint **)(lVar12 + 0x3128);
          if (*(uint **)(lVar12 + 0x3128) == (uint *)0x0) {
            puVar8 = (uint *)(lVar12 + 0x3118);
          }
          uVar18 = *puVar8;
          if (uVar18 == 0) {
            iVar9 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar9 = iVar4 + -1;
            }
            uVar17 = 0;
            uVar10 = (ulonglong)(uint)(iVar9 >> 5);
            if (iVar9 >> 5 < 1) {
              uVar10 = uVar17;
            }
            pvVar21 = (void *)(ulonglong)((int)uVar10 + 1);
            iVar5 = 0;
            do {
              iVar9 = iVar4;
              iVar14 = (int)uVar10 * 0x20 + 0x20;
              if (uVar10 == uVar17) goto LAB_143011cc8;
              iVar5 = iVar5 + 0x20;
              uVar18 = puVar8[uVar17 + 1];
              uVar17 = uVar17 + 1;
            } while (uVar18 == 0);
            pvVar21 = (void *)(uVar17 & 0xffffffff);
          }
          else {
            iVar5 = 0;
            pvVar21 = (void *)0x0;
          }
          uVar15 = (ulonglong)(-uVar18 & uVar18);
          uVar10 = uVar15 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar9 = (iVar5 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          iVar14 = iVar5;
          if (iVar4 <= iVar9) {
            iVar9 = iVar4;
          }
        }
LAB_143011cc8:
        if (iVar9 < (int)local_a8) {
          uVar18 = 0xffffffff;
          uVar10 = local_a8;
          local_a0 = lVar16;
          local_98 = (uint *)(lVar12 + 0x3118);
          do {
            lVar13 = *(longlong *)(lVar16 + 0x140);
            lVar11 = *(longlong *)
                      (*(longlong *)(lVar13 + 0x80) + (longlong)(*(int *)(lVar13 + 0x88) + -1) * 8);
            iVar4 = *(int *)(lVar11 + 0x60);
            local_90 = pvVar21;
            if (iVar4 == 0) {
              iVar4 = *(int *)(lVar11 + 0x68);
              if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar4);
              }
              if (*(int *)(lVar11 + 100) < iVar4) {
                FUN_1447a0e40(lVar11 + 0x58);
                iVar4 = *(int *)(lVar11 + 0x60);
                uVar10 = local_a8;
                lVar16 = local_a0;
              }
              else {
                iVar4 = 0;
                uVar10 = local_a8;
                lVar16 = local_a0;
              }
            }
            *(uint *)(lVar11 + 0x60) = iVar4 + 1U;
            if (*(uint *)(lVar11 + 100) < iVar4 + 1U) {
              FUN_144a78748(lVar11 + 0x58,iVar4);
              uVar10 = local_a8;
              lVar16 = local_a0;
            }
            *(int *)(*(longlong *)(lVar11 + 0x58) + (longlong)iVar4 * 4) = iVar9;
            if (*(int *)(lVar11 + 0x68) <= *(int *)(lVar11 + 0x60)) {
              if (*(char *)(lVar13 + 0x98) == '\x01') {
                FUN_14008d6fe(lVar11);
              }
              FUN_14008d3e6(lVar13);
              uVar10 = local_a8;
            }
            uVar18 = uVar18 & ~(uint)uVar15;
            puVar8 = *(uint **)(lVar12 + 0x3128);
            if (*(uint **)(lVar12 + 0x3128) == (uint *)0x0) {
              puVar8 = local_98;
            }
            iVar4 = *(int *)(lVar12 + 0x3130);
            iVar9 = (int)local_90;
            lVar13 = (longlong)iVar9;
            uVar7 = puVar8[lVar13] & uVar18;
            pvVar21 = local_90;
            if (uVar7 == 0) {
              iVar5 = iVar4 + 0x1e;
              if (-1 < iVar4 + -1) {
                iVar5 = iVar4 + -1;
              }
              iVar5 = iVar5 >> 5;
              iVar14 = iVar14 + 0x20;
              iVar6 = iVar5;
              if (iVar5 < iVar9) {
                iVar6 = iVar9;
              }
              if (iVar9 < iVar5) {
                lVar11 = 0;
                do {
                  uVar7 = puVar8[lVar13 + lVar11 + 1];
                  if (uVar7 != 0) {
                    pvVar21 = (void *)(ulonglong)(iVar9 + (int)lVar11 + 1);
                    uVar18 = 0xffffffff;
                    goto LAB_143011dcc;
                  }
                  iVar14 = iVar14 + 0x20;
                  lVar11 = lVar11 + 1;
                } while (iVar6 - lVar13 != lVar11);
                uVar18 = 0xffffffff;
                iVar9 = iVar6;
              }
              pvVar21 = (void *)(ulonglong)(iVar9 + 1);
              iVar9 = iVar4;
            }
            else {
LAB_143011dcc:
              uVar15 = (ulonglong)(-uVar7 & uVar7);
              uVar17 = uVar15 * 2 + 1;
              lVar13 = 0x3f;
              if (uVar17 != 0) {
                for (; uVar17 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              iVar9 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
              if (iVar4 <= iVar9) {
                iVar9 = iVar4;
              }
            }
          } while (iVar9 < (int)uVar10);
        }
        FUN_14300b7f2(*(undefined8 *)(lVar16 + 0x140));
        FUN_1400daade(lVar16 + 0x248);
        lVar16 = lVar16 + 0x260;
      } while (lVar16 != local_80);
    }
    param_1 = local_88;
    *(undefined1 *)((longlong)local_88 + 0x3059) = 1;
    FUN_1430116f6(local_88,local_88[0xc]);
  }
  else {
    if (param_1[0xb] == 0) {
      lVar16 = param_1[0x606];
      if (lVar16 != 0) {
        if (DAT_14c87e718 == '\0') {
          iVar4 = *(int *)(lVar16 + 0x1c);
          if ((2 < iVar4) &&
             (bVar3 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar3 < 3)) {
            local_78.QuadPart = 0x20100000001;
            uStack_70 = 0x30100000101;
            local_68 = DAT_14c7585c8;
            local_64 = DAT_14c7585c8 | 0x200;
            local_60 = DAT_14c7585c8 | 0x100;
            local_5c = DAT_14c7585c8 | 0x300;
            local_58 = 0;
            uStack_54 = 0x200;
            uStack_50 = 0x100;
            uStack_4c = 0x300;
            if (*(byte *)((longlong)&local_78 + (ulonglong)(iVar4 - 3) * 4) == bVar3)
            goto LAB_143012250;
          }
          QueryPerformanceCounter(&local_78);
          uStack_70 = 0xffffffffffffffff;
          FUN_140056092(lVar16,&local_78);
        }
        else {
LAB_143012250:
          FUN_140082318(lVar16);
        }
      }
      FUN_1430116f6(param_1,param_1[0xc]);
    }
    else {
      FUN_1447832fa(param_1[0x600],DAT_14c7585d4);
    }
    lVar16 = param_1[10];
    if ((longlong)(int)lVar16 != 0) {
      lVar12 = param_1[9];
      lVar13 = 0;
      do {
        lVar11 = *(longlong *)(lVar12 + 0x68 + lVar13);
        if (lVar11 != 0) {
          FUN_140337522(lVar11,param_1[1]);
        }
        lVar13 = lVar13 + 0x260;
      } while ((longlong)(int)lVar16 * 0x260 - lVar13 != 0);
    }
  }
  if (param_1[0x601] != 0) {
    FUN_1447832fa(param_1[0x601],DAT_14c7585d4);
  }
  lVar16 = param_1[0x602];
  if (lVar16 != 0) {
    if (DAT_14c87e718 == '\0') {
      iVar4 = *(int *)(lVar16 + 0x1c);
      if ((2 < iVar4) && (bVar3 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar3 < 3))
      {
        local_78.QuadPart = 0x20100000001;
        uStack_70 = 0x30100000101;
        local_68 = DAT_14c7585c8;
        local_64 = DAT_14c7585c8 | 0x200;
        local_60 = DAT_14c7585c8 | 0x100;
        local_5c = DAT_14c7585c8 | 0x300;
        local_58 = 0;
        uStack_54 = 0x200;
        uStack_50 = 0x100;
        uStack_4c = 0x300;
        if (*(byte *)((longlong)&local_78 + (ulonglong)(iVar4 - 3) * 4) == bVar3)
        goto LAB_1430120b2;
      }
      QueryPerformanceCounter(&local_78);
      uStack_70 = 0xffffffffffffffff;
      FUN_140056092(lVar16,&local_78);
    }
    else {
LAB_1430120b2:
      FUN_140082318(lVar16);
    }
  }
  lVar16 = param_1[0x609];
  if (lVar16 == 0) goto LAB_143011fff;
  if (DAT_14c87e718 == '\0') {
    iVar4 = *(int *)(lVar16 + 0x1c);
    if ((2 < iVar4) && (bVar3 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar3 < 3)) {
      local_78.QuadPart = 0x20100000001;
      uStack_70 = 0x30100000101;
      local_68 = DAT_14c7585c8;
      local_64 = DAT_14c7585c8 | 0x200;
      local_60 = DAT_14c7585c8 | 0x100;
      local_5c = DAT_14c7585c8 | 0x300;
      local_58 = 0;
      uStack_54 = 0x200;
      uStack_50 = 0x100;
      uStack_4c = 0x300;
      if (*(byte *)((longlong)&local_78 + (ulonglong)(iVar4 - 3) * 4) == bVar3) goto LAB_14301213c;
    }
    QueryPerformanceCounter(&local_78);
    uStack_70 = 0xffffffffffffffff;
    FUN_140056092(lVar16,&local_78);
  }
  else {
LAB_14301213c:
    FUN_140082318(lVar16);
  }
LAB_143011fff:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14301225d FUN_14301225d body=945 status=ok
// SIG undefined FUN_14301225d(void)

void FUN_14301225d(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  
  if (param_3 != 0) {
    cVar3 = FUN_144785782(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2)
                         );
    if ((cVar3 == '\0') || (*(char *)(param_2 + 0x3098) != '\x01')) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
      if (*(char *)(param_2 + 0x23e8) == '\x01') {
        cVar3 = *(char *)(param_2 + 0x23ea);
      }
    }
    if ((DAT_14ca4b530 == 0) && (*(char *)(param_2 + 0x23fe) == '\0')) {
      uVar10 = (uint)param_4;
      uVar19 = (int)uVar10 >> 5;
      uVar8 = (ulonglong)uVar19;
      uVar13 = (ulonglong)(uint)(1 << ((byte)param_4 & 0x1f));
      uVar15 = -1 << ((byte)param_4 & 0x1f);
      uVar18 = uVar10 & 0xffffffe0;
      uVar5 = *(uint *)(param_2 + 0x3190);
      uVar17 = (ulonglong)uVar5;
      if (uVar5 == uVar10) {
        uVar17 = param_4 & 0xffffffff;
      }
      else {
        lVar7 = *(longlong *)(param_2 + 0x3188);
        if (*(longlong *)(param_2 + 0x3188) == 0) {
          lVar7 = param_2 + 0x3178;
        }
        lVar14 = (longlong)(int)uVar19;
        uVar10 = *(uint *)(lVar7 + lVar14 * 4) & uVar15;
        if (uVar10 == 0) {
          iVar16 = uVar5 + 0x1e;
          if (-1 < (int)(uVar5 - 1)) {
            iVar16 = uVar5 - 1;
          }
          uVar10 = iVar16 >> 5;
          uVar8 = lVar14 + 1;
          uVar18 = uVar18 + 0x20;
          uVar2 = uVar10;
          if ((int)uVar10 < (int)uVar19) {
            uVar2 = uVar19;
          }
          if ((int)uVar19 < (int)uVar10) {
            lVar14 = (int)uVar2 - lVar14;
            do {
              uVar10 = *(uint *)(lVar7 + uVar8 * 4);
              if (uVar10 != 0) {
                uVar15 = 0xffffffff;
                uVar8 = uVar8 & 0xffffffff;
                goto LAB_14301238e;
              }
              uVar8 = uVar8 + 1;
              uVar18 = uVar18 + 0x20;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
            uVar15 = 0xffffffff;
            uVar8 = (longlong)(int)uVar2 + 1;
          }
        }
        else {
LAB_14301238e:
          uVar13 = (ulonglong)(-uVar10 & uVar10);
          uVar17 = uVar13 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          uVar19 = (uVar18 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
          if ((int)uVar5 <= (int)uVar19) {
            uVar19 = uVar5;
          }
          uVar17 = (ulonglong)uVar19;
        }
      }
      iVar16 = (int)(param_4 >> 0x20);
      if ((int)uVar17 < iVar16) {
        do {
          lVar7 = *(longlong *)(param_2 + 0x3128);
          if (*(longlong *)(param_2 + 0x3128) == 0) {
            lVar7 = param_2 + 0x3118;
          }
          iVar20 = (int)uVar8;
          lVar14 = (longlong)iVar20;
          uVar5 = *(uint *)(lVar7 + lVar14 * 4);
          uVar19 = (uint)uVar13;
          iVar6 = (int)uVar17;
          lVar7 = FUN_1472e6faa(param_3 + 0x4d0,
                                *(undefined4 *)
                                 (*(longlong *)(param_1 + 0x33d8) + (longlong)iVar6 * 4));
          FUN_1430090b6(lVar7,param_2,CONCAT71((int7)(uVar13 >> 8),(uVar5 & uVar19) != 0));
          lVar7 = *(longlong *)(lVar7 + 0x10);
          if (((uVar5 & uVar19) == 0) && (lVar7 != 0)) {
            lVar12 = *(longlong *)(param_2 + 0x3128);
            if (*(longlong *)(param_2 + 0x3128) == 0) {
              lVar12 = param_2 + 0x3118;
            }
            puVar1 = (uint *)(lVar12 + lVar14 * 4);
            *puVar1 = *puVar1 | uVar19;
            if ((cVar3 != '\0') && (cVar4 = FUN_1472e598d(param_1,param_2,uVar17), cVar4 == '\0')) {
              lVar12 = *(longlong *)(param_2 + 0x3148);
              if (*(longlong *)(param_2 + 0x3148) == 0) {
                lVar12 = param_2 + 0x3138;
              }
              puVar1 = (uint *)(lVar12 + lVar14 * 4);
              *puVar1 = *puVar1 | uVar19;
            }
          }
          *(longlong *)(*(longlong *)(param_2 + 0x3198) + (longlong)iVar6 * 8) = lVar7;
          uVar5 = 1 << ((byte)uVar17 & 0x1f);
          puVar9 = *(undefined1 **)(param_2 + 0x31b8);
          if (*(undefined1 **)(param_2 + 0x31b8) == (undefined1 *)0x0) {
            puVar9 = &DAT_000031a8 + param_2;
          }
          iVar11 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar11 = iVar6;
          }
          lVar12 = (longlong)(iVar11 >> 5);
          if (lVar7 == 0) {
            uVar5 = ~uVar5 & *(uint *)(puVar9 + lVar12 * 4);
          }
          else {
            uVar5 = uVar5 | *(uint *)(puVar9 + lVar12 * 4);
          }
          *(uint *)(puVar9 + lVar12 * 4) = uVar5;
          uVar15 = uVar15 & ~uVar19;
          lVar7 = *(longlong *)(param_2 + 0x3188);
          if (*(longlong *)(param_2 + 0x3188) == 0) {
            lVar7 = param_2 + 0x3178;
          }
          uVar5 = *(uint *)(param_2 + 0x3190);
          uVar19 = *(uint *)(lVar7 + lVar14 * 4) & uVar15;
          if (uVar19 == 0) {
            iVar6 = uVar5 + 0x1e;
            if (-1 < (int)(uVar5 - 1)) {
              iVar6 = uVar5 - 1;
            }
            iVar6 = iVar6 >> 5;
            uVar18 = uVar18 + 0x20;
            iVar11 = iVar6;
            if (iVar6 < iVar20) {
              iVar11 = iVar20;
            }
            if (iVar20 < iVar6) {
              lVar12 = 0;
              do {
                uVar19 = *(uint *)(lVar7 + lVar14 * 4 + 4 + lVar12 * 4);
                if (uVar19 != 0) {
                  uVar8 = (ulonglong)(iVar20 + (int)lVar12 + 1);
                  uVar15 = 0xffffffff;
                  goto LAB_14301257a;
                }
                uVar18 = uVar18 + 0x20;
                lVar12 = lVar12 + 1;
              } while (iVar11 - lVar14 != lVar12);
              uVar15 = 0xffffffff;
              iVar20 = iVar11;
            }
            uVar8 = (ulonglong)(iVar20 + 1);
            uVar19 = uVar5;
          }
          else {
LAB_14301257a:
            uVar13 = (ulonglong)(-uVar19 & uVar19);
            uVar17 = uVar13 * 2 + 1;
            lVar7 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            uVar19 = (uVar18 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
            if ((int)uVar5 <= (int)uVar19) {
              uVar19 = uVar5;
            }
          }
          uVar17 = (ulonglong)uVar19;
        } while ((int)uVar19 < iVar16);
      }
    }
  }
  return;
}



// FUNCTION 14301260e FUN_14301260e body=1039 status=ok
// SIG undefined FUN_14301260e(void)

int FUN_14301260e(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined1 local_f8;
  int local_e4;
  longlong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(lVar4 + 0x13698) == 0) {
    local_e4 = 0;
  }
  else {
    local_e0 = lVar4 + 0x3118;
    uVar12 = (uint)param_2;
    uVar20 = (int)uVar12 >> 5;
    uVar13 = (ulonglong)uVar20;
    uVar15 = (ulonglong)(uint)(1 << ((byte)param_2 & 0x1f));
    uVar17 = -1 << ((byte)param_2 & 0x1f);
    uVar16 = uVar12 & 0xffffffe0;
    uVar7 = *(uint *)(lVar4 + 0x3130);
    uVar14 = param_2;
    if (uVar7 != uVar12) {
      lVar10 = *(longlong *)(lVar4 + 0x3128);
      if (*(longlong *)(lVar4 + 0x3128) == 0) {
        lVar10 = local_e0;
      }
      lVar11 = (longlong)(int)uVar20;
      uVar12 = *(uint *)(lVar10 + lVar11 * 4) & uVar17;
      if (uVar12 == 0) {
        iVar21 = uVar7 + 0x1e;
        if (-1 < (int)(uVar7 - 1)) {
          iVar21 = uVar7 - 1;
        }
        uVar12 = iVar21 >> 5;
        uVar13 = lVar11 + 1;
        uVar16 = uVar16 + 0x20;
        uVar6 = uVar12;
        if ((int)uVar12 < (int)uVar20) {
          uVar6 = uVar20;
        }
        if ((int)uVar20 < (int)uVar12) {
          lVar11 = (int)uVar6 - lVar11;
          do {
            uVar12 = *(uint *)(lVar10 + uVar13 * 4);
            if (uVar12 != 0) {
              uVar17 = 0xffffffff;
              uVar13 = uVar13 & 0xffffffff;
              goto LAB_14301273b;
            }
            uVar13 = uVar13 + 1;
            uVar16 = uVar16 + 0x20;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          uVar17 = 0xffffffff;
          uVar13 = (longlong)(int)uVar6 + 1;
        }
        uVar14 = (ulonglong)uVar7;
      }
      else {
LAB_14301273b:
        uVar15 = (ulonglong)(-uVar12 & uVar12);
        uVar14 = uVar15 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar12 = (uVar16 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        uVar14 = (ulonglong)uVar12;
        if ((int)uVar7 <= (int)uVar12) {
          uVar14 = (ulonglong)uVar7;
        }
      }
    }
    local_e4 = 0;
    local_d8._0_4_ = (int)(param_2 >> 0x20);
    bVar5 = (int)uVar14 < (int)local_d8;
    local_d8 = param_2 >> 0x20;
    if (bVar5) {
      lVar10 = *(longlong *)(param_1 + 0x10);
      param_1 = param_1 + 0x30;
      local_e4 = 0;
      do {
        uVar12 = (uint)uVar14;
        lVar11 = (longlong)(int)uVar12;
        iVar21 = (int)uVar13;
        lVar19 = (longlong)iVar21;
        if (((~*(byte *)(*(longlong *)(lVar10 + 0x33b0) + lVar11) & 9) == 0) &&
           (iVar8 = *(int *)(*(longlong *)(lVar10 + 0x3390) + lVar11 * 8),
           (*(byte *)(*(longlong *)(lVar10 + 0x3390) + 4 + lVar11 * 8) &
           *(byte *)(*(longlong *)(lVar4 + 0x13698) + (longlong)iVar8)) == 0)) {
          if (DAT_14ca4b410 != 0) {
            uVar7 = uVar12 + 0x3ff;
            if (-1 < (int)uVar12) {
              uVar7 = uVar12;
            }
            lVar11 = **(longlong **)
                       (*(longlong *)(lVar10 + 0x33c0) + (longlong)((int)uVar7 >> 10) * 8);
            lVar18 = (longlong)(int)(uVar12 - (uVar7 & 0xfffffc00)) * 0x38;
            local_90 = DAT_14c758df0;
            local_8c = DAT_14c758d28;
            local_88 = DAT_14c758d28;
            local_84 = 0x3f800000;
            local_b8 = *(double *)(lVar11 + 0x10 + lVar18);
            dVar2 = *(double *)(lVar11 + 0x28 + lVar18);
            local_a0 = local_b8 + dVar2;
            local_c0 = *(double *)(lVar11 + 8 + lVar18);
            dVar3 = *(double *)(lVar11 + 0x20 + lVar18);
            local_a8 = local_c0 + dVar3;
            local_c8 = *(double *)(lVar11 + 0x18 + lVar18);
            local_b0 = *(double *)(lVar11 + lVar18) + local_c8;
            local_b8 = local_b8 - dVar2;
            local_c0 = local_c0 - dVar3;
            local_c8 = *(double *)(lVar11 + lVar18) - local_c8;
            local_98 = 1;
            local_100 = 0;
            local_108 = 0;
            local_f8 = 0;
            local_d0 = param_1;
            FUN_147cb7407(param_1,&local_c8,&local_90,CONCAT71((int7)(int3)((uint)iVar8 >> 8),1));
            param_1 = local_d0;
          }
          lVar11 = *(longlong *)(lVar4 + 0x3128);
          if (*(longlong *)(lVar4 + 0x3128) == 0) {
            lVar11 = local_e0;
          }
          puVar1 = (uint *)(lVar11 + lVar19 * 4);
          *puVar1 = *puVar1 & ~(uint)uVar15;
          local_e4 = local_e4 + 1;
          uVar7 = *(uint *)(lVar4 + 0x3130);
        }
        uVar17 = uVar17 & ~(uint)uVar15;
        lVar11 = *(longlong *)(lVar4 + 0x3128);
        if (*(longlong *)(lVar4 + 0x3128) == 0) {
          lVar11 = local_e0;
        }
        uVar12 = *(uint *)(lVar11 + lVar19 * 4) & uVar17;
        if (uVar12 == 0) {
          iVar8 = uVar7 + 0x1e;
          if (-1 < (int)(uVar7 - 1)) {
            iVar8 = uVar7 - 1;
          }
          iVar8 = iVar8 >> 5;
          uVar16 = uVar16 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar21) {
            iVar9 = iVar21;
          }
          if (iVar21 < iVar8) {
            lVar18 = 0;
            do {
              uVar12 = *(uint *)(lVar11 + lVar19 * 4 + 4 + lVar18 * 4);
              if (uVar12 != 0) {
                uVar13 = (ulonglong)(iVar21 + (int)lVar18 + 1);
                uVar17 = 0xffffffff;
                goto LAB_143012834;
              }
              uVar16 = uVar16 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar9 - lVar19 != lVar18);
            uVar17 = 0xffffffff;
            iVar21 = iVar9;
          }
          uVar14 = (ulonglong)uVar7;
          uVar13 = (ulonglong)(iVar21 + 1);
        }
        else {
LAB_143012834:
          uVar15 = (ulonglong)(-uVar12 & uVar12);
          uVar14 = uVar15 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          uVar12 = (uVar16 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          uVar14 = (ulonglong)uVar12;
          if ((int)uVar7 <= (int)uVar12) {
            uVar14 = (ulonglong)uVar7;
          }
        }
      } while ((int)uVar14 < (int)local_d8);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_e4;
}



// FUNCTION 143012a1e FUN_143012a1e body=1977 status=ok
// SIG undefined FUN_143012a1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143012a1e(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  size_t _Size;
  longlong lVar3;
  void *_Src;
  LARGE_INTEGER LVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  size_t sVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *plVar21;
  bool bVar22;
  undefined1 auStack_e8 [44];
  undefined4 local_bc;
  longlong local_b8;
  undefined8 local_b0;
  LARGE_INTEGER local_a8;
  undefined4 local_a0;
  LARGE_INTEGER local_98;
  undefined8 uStack_90;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_bc = param_2;
  FUN_14312c4f0(DAT_14ca712d8,param_4);
  lVar3 = *(longlong *)(param_1 + 0x3040);
  if (lVar3 == 0) goto LAB_143012aab;
  if (DAT_14c87e718 == '\0') {
    iVar9 = *(int *)(lVar3 + 0x1c);
    if ((2 < iVar9) && (bVar5 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar5 < 3)) {
      local_98.QuadPart = 0x20100000001;
      uStack_90 = 0x30100000101;
      local_88 = DAT_14c7585c8;
      local_84 = DAT_14c7585c8 | 0x200;
      local_80 = DAT_14c7585c8 | 0x100;
      local_7c = DAT_14c7585c8 | 0x300;
      local_78 = 0;
      uStack_74 = 0x200;
      uStack_70 = 0x100;
      uStack_6c = 0x300;
      if (*(byte *)((longlong)&local_98 + (ulonglong)(iVar9 - 3) * 4) == bVar5) goto LAB_1430131be;
    }
    QueryPerformanceCounter(&local_98);
    uStack_90 = 0xffffffffffffffff;
    FUN_140056092(lVar3,&local_98);
  }
  else {
LAB_1430131be:
    FUN_140082318();
  }
LAB_143012aab:
  if ((longlong)*(int *)(param_1 + 0x80) != 0) {
    plVar21 = *(longlong **)(param_1 + 0x78);
    plVar2 = plVar21 + *(int *)(param_1 + 0x80);
    do {
      lVar3 = *plVar21;
      FUN_1436a12c2(lVar3 + 0xb80);
      FUN_144b27220(lVar3 + 0xb80);
      *(undefined8 *)(lVar3 + 0xc88) = 0;
      *(undefined8 *)(lVar3 + 0xc90) = 0;
      *(undefined8 *)(lVar3 + 0xc78) = 0;
      *(undefined8 *)(lVar3 + 0xc80) = 0;
      lVar19 = *(longlong *)(lVar3 + 0xcd0);
      if (lVar19 != 0) {
        uVar8 = *(uint *)(lVar3 + 0xce0);
        if ((longlong)(int)uVar8 != 0) {
          _Src = *(void **)(lVar3 + 0xcd8);
          _Size = (longlong)(int)uVar8 * 8;
          sVar17 = 0;
          local_b8 = param_1;
          local_b0 = param_3;
          do {
            FUN_140152f5c(*(undefined8 *)((longlong)_Src + sVar17),lVar19);
            sVar17 = sVar17 + 8;
          } while (_Size != sVar17);
          LOCK();
          bVar22 = DAT_14ca8c140 == '\0';
          if (bVar22) {
            DAT_14ca8c140 = '\x01';
          }
          UNLOCK();
          if (!bVar22) {
            FUN_1447d2058(&DAT_14ca8c140);
          }
          param_3 = local_b0;
          iVar9 = DAT_14ca8c180;
          lVar19 = (longlong)DAT_14ca8c180;
          iVar6 = DAT_14ca8c180 + uVar8;
          uVar7 = DAT_14ca8c184 - DAT_14ca8c180;
          DAT_14ca8c180 = iVar6;
          if (uVar7 < uVar8) {
            FUN_1400f7990(&DAT_14ca8c178,iVar9);
          }
          memcpy((void *)(lVar19 * 8 + _DAT_14ca8c178),_Src,_Size);
          param_1 = local_b8;
          LOCK();
          bVar22 = DAT_14ca8c140 == '\x01';
          if (bVar22) {
            DAT_14ca8c140 = '\0';
          }
          UNLOCK();
          if (!bVar22) {
            FUN_14008cdb0(&DAT_14ca8c140);
          }
        }
        *(undefined4 *)(lVar3 + 0xce0) = 0;
        if (*(int *)(lVar3 + 0xce4) < 0) {
          FUN_145ccb7b2(lVar3 + 0xcd8,0);
        }
      }
      FUN_1447609e4(lVar3 + 0xce8);
      FUN_1447850c6(*(undefined8 *)(lVar3 + 0xcc8));
      FUN_140215426();
      plVar21 = plVar21 + 1;
    } while (plVar21 != plVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x88);
  uVar18 = (ulonglong)*(uint *)(param_1 + 0x90);
  local_98.QuadPart = 0;
  uStack_90 = 0;
  if ((int)*(uint *)(param_1 + 0x90) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar18);
  }
  if (uVar18 == 0) {
    uStack_90._0_4_ = 0;
  }
  else {
    FUN_144775d28(&local_98,uVar18);
    lVar19 = 0;
    do {
      uVar15 = uStack_90;
      lVar16 = (longlong)(int)uStack_90;
      uVar8 = (int)uStack_90 + 1;
      uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
      if (uStack_90._4_4_ < uVar8) {
        FUN_14741464c(&local_98,uVar15 & 0xffffffff);
      }
      *(undefined8 *)(local_98.QuadPart + lVar16 * 8) = *(undefined8 *)(lVar3 + lVar19);
      lVar19 = lVar19 + 8;
    } while (uVar18 << 3 != lVar19);
  }
  local_a8 = local_98;
  local_a0 = (int)uStack_90;
  FUN_14007658c(&DAT_14ca850c8,&local_a8,0);
  if (local_98.QuadPart != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_1400bd2dc(param_1 + 0x88,0);
  }
  bVar5 = *(byte *)(param_1 + 0x3064);
  uVar18 = (ulonglong)bVar5;
  puVar10 = TlsGetValue(DAT_14c896140);
  if (puVar10 == (undefined8 *)0x0) {
    puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined4 *)(puVar10 + 2) = 0;
    TlsSetValue(DAT_14c896140,puVar10);
  }
  puVar13 = (undefined8 *)puVar10[1];
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)*puVar10;
    if (puVar13 == (undefined8 *)0x0) {
      uVar8 = DAT_14c896180.s.LowPart;
      LVar4 = DAT_14c896180;
      while (DAT_14c896180 = LVar4, local_98 = LVar4, (LVar4.QuadPart & 0x3ffffffU) != 0) {
        local_a8.QuadPart = (LVar4.QuadPart & 0xfffffffffc000000U) + 0x4000000;
        if ((ulonglong)local_a8.QuadPart >> 0x1a < (ulonglong)LVar4.QuadPart >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        uVar15 = (ulonglong)((uVar8 & 0x3ffffff) >> 0xe);
        uVar20 = (ulonglong)(LVar4.s.LowPart & 0x3fff);
        local_a8.QuadPart =
             local_a8.QuadPart & 0xfffffffffc000000U |
             (ulonglong)*(uint *)(*(longlong *)(&DAT_14c833b00 + uVar15 * 8) + 0x10 + uVar20 * 0x18)
        ;
        LOCK();
        bVar22 = local_98.QuadPart == DAT_14c896180.QuadPart;
        LVar4.QuadPart = local_a8.QuadPart;
        if (!bVar22) {
          LVar4 = DAT_14c896180;
        }
        DAT_14c896180 = LVar4;
        UNLOCK();
        if (bVar22) {
          *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar15 * 8) + uVar20 * 0x18 + 0x10) = 0;
          puVar13 = *(undefined8 **)
                     (*(longlong *)(&DAT_14c833b00 + uVar15 * 8) + 8 +
                     (ulonglong)(uVar8 & 0x3fff) * 0x18);
          FUN_1447d080c(uVar8 & 0x3ffffff);
          puVar10[1] = puVar13;
          if (puVar13 != (undefined8 *)0x0) goto LAB_143012ea2;
          goto LAB_1430130ef;
        }
        uVar8 = DAT_14c896180.s.LowPart;
        LVar4 = DAT_14c896180;
      }
      puVar10[1] = 0;
LAB_1430130ef:
      puVar13 = (undefined8 *)FUN_14001cc68(0x10000,0);
      puVar10[1] = puVar13;
      iVar9 = 0xff;
      puVar14 = puVar13;
      do {
        puVar11 = puVar14 + 0x20;
        *puVar14 = puVar11;
        iVar9 = iVar9 + -1;
        puVar14 = puVar11;
      } while (iVar9 != 0);
    }
    else {
      puVar10[1] = puVar13;
      puVar11 = puVar10;
    }
    *puVar11 = 0;
LAB_143012ea2:
    *(undefined4 *)(puVar10 + 2) = 0x100;
    iVar9 = 0xff;
  }
  else {
    iVar9 = *(int *)(puVar10 + 2) + -1;
  }
  puVar10[1] = *puVar13;
  *(int *)(puVar10 + 2) = iVar9;
  *puVar13 = UE::Tasks::Private::FTaskBase::vftable;
  puVar13[1] = &DAT_100000002;
  puVar13[2] = 0;
  *(undefined4 *)(puVar13 + 3) = 0;
  *(undefined4 *)(puVar13 + 4) = 0xffffffff;
  puVar13[6] = 0;
  puVar13[7] = 0x100000000;
  *(undefined1 *)(puVar13 + 8) = 1;
  puVar13[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
  puVar13[0xf] = 0;
  puVar13[0x10] = 0xe800000000000020;
  puVar13[0x12] = 0;
  puVar13[0x13] = 0x100000000;
  *(undefined2 *)(puVar13 + 0x14) = 0;
  LOCK();
  bVar22 = *(char *)(puVar13 + 8) == '\x01';
  if (bVar22) {
    *(char *)(puVar13 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar22) {
    FUN_14008cdb0(puVar13 + 8);
  }
  *puVar13 = &PTR_FUN_14a2f9c50;
  if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
  }
  puVar13[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar13[9] = puVar13;
  puVar13[10] = puVar13;
  lVar3 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar3 == 0) {
    uVar18 = 1;
    if (bVar5 != 6) {
      uVar18 = (ulonglong)bVar5;
    }
    uVar12 = 0;
  }
  else {
    if (bVar5 == 6) {
      uVar18 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
    }
    uVar12 = *(undefined8 *)(lVar3 + 0x30);
  }
  puVar13[0xf] = uVar12;
  puVar13[0x10] = uVar18 << 0x3b | 0xc00000528bd6db00;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = 0;
  puVar13[0x15] = param_1;
  *(undefined4 *)(puVar13 + 0x16) = local_bc;
  puVar13[0x17] = param_3;
  *puVar13 = &PTR_FUN_14a2f9c40;
  local_98.s.LowPart._0_1_ = 1;
  FUN_1447439e4(puVar13);
  puVar10 = *(undefined8 **)(param_1 + 0x3050);
  *(undefined8 **)(param_1 + 0x3050) = puVar13;
  if (puVar10 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar10 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar10)(puVar10,1);
    }
  }
  FUN_1400d0e8a(&DAT_14ca475a8,*(undefined8 *)(param_1 + 8));
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430131d8 FUN_1430131d8 body=1064 status=ok
// SIG undefined FUN_1430131d8(void)

void FUN_1430131d8(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  undefined8 uStack_50;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(param_1 + 0x3030);
  if (lVar4 != 0) {
    if (DAT_14c87e718 == '\0') {
      iVar1 = *(int *)(lVar4 + 0x1c);
      if (2 < iVar1) {
        bVar3 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
        if (bVar3 < 3) {
          local_58.QuadPart = 0x20100000001;
          uStack_50 = 0x30100000101;
          local_48 = DAT_14c7585c8;
          local_44 = DAT_14c7585c8 | 0x200;
          local_40 = DAT_14c7585c8 | 0x100;
          local_3c = DAT_14c7585c8 | 0x300;
          local_38 = 0;
          uStack_34 = 0x200;
          uStack_30 = 0x100;
          uStack_2c = 0x300;
          if (*(byte *)((longlong)&local_58 + (ulonglong)(iVar1 - 3) * 4) == bVar3)
          goto LAB_143013456;
        }
      }
      QueryPerformanceCounter(&local_58);
      uStack_50 = 0xffffffffffffffff;
      FUN_140056092(lVar4,&local_58);
    }
    else {
LAB_143013456:
      FUN_140082318(lVar4);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x3048);
  if (lVar4 != 0) {
    if (DAT_14c87e718 == '\0') {
      iVar1 = *(int *)(lVar4 + 0x1c);
      if (2 < iVar1) {
        bVar3 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
        if (bVar3 < 3) {
          local_58.QuadPart = 0x20100000001;
          uStack_50 = 0x30100000101;
          local_48 = DAT_14c7585c8;
          local_44 = DAT_14c7585c8 | 0x200;
          local_40 = DAT_14c7585c8 | 0x100;
          local_3c = DAT_14c7585c8 | 0x300;
          local_38 = 0;
          uStack_34 = 0x200;
          uStack_30 = 0x100;
          uStack_2c = 0x300;
          if (*(byte *)((longlong)&local_58 + (ulonglong)(iVar1 - 3) * 4) == bVar3)
          goto LAB_1430134e0;
        }
      }
      QueryPerformanceCounter(&local_58);
      uStack_50 = 0xffffffffffffffff;
      FUN_140056092(lVar4,&local_58);
    }
    else {
LAB_1430134e0:
      FUN_140082318(lVar4);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x3040);
  if (lVar4 != 0) {
    if (DAT_14c87e718 == '\0') {
      iVar1 = *(int *)(lVar4 + 0x1c);
      if (2 < iVar1) {
        bVar3 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
        if (bVar3 < 3) {
          local_58.QuadPart = 0x20100000001;
          uStack_50 = 0x30100000101;
          local_48 = DAT_14c7585c8;
          local_44 = DAT_14c7585c8 | 0x200;
          local_40 = DAT_14c7585c8 | 0x100;
          local_3c = DAT_14c7585c8 | 0x300;
          local_38 = 0;
          uStack_34 = 0x200;
          uStack_30 = 0x100;
          uStack_2c = 0x300;
          if (*(byte *)((longlong)&local_58 + (ulonglong)(iVar1 - 3) * 4) == bVar3)
          goto LAB_14301356a;
        }
      }
      QueryPerformanceCounter(&local_58);
      uStack_50 = 0xffffffffffffffff;
      FUN_140056092(lVar4,&local_58);
    }
    else {
LAB_14301356a:
      FUN_140082318(lVar4);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x3050);
  if (lVar4 == 0) goto LAB_143013309;
  if (DAT_14c87e718 == '\0') {
    iVar1 = *(int *)(lVar4 + 0x1c);
    if (2 < iVar1) {
      bVar3 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar3 < 3) {
        local_58.QuadPart = 0x20100000001;
        uStack_50 = 0x30100000101;
        local_48 = DAT_14c7585c8;
        local_44 = DAT_14c7585c8 | 0x200;
        local_40 = DAT_14c7585c8 | 0x100;
        local_3c = DAT_14c7585c8 | 0x300;
        local_38 = 0;
        uStack_34 = 0x200;
        uStack_30 = 0x100;
        uStack_2c = 0x300;
        if (*(byte *)((longlong)&local_58 + (ulonglong)(iVar1 - 3) * 4) == bVar3)
        goto LAB_1430135f4;
      }
    }
    QueryPerformanceCounter(&local_58);
    uStack_50 = 0xffffffffffffffff;
    FUN_140056092(lVar4,&local_58);
  }
  else {
LAB_1430135f4:
    FUN_140082318(lVar4);
  }
LAB_143013309:
  FUN_140215215(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_1401b960e(param_1 + 0x48,0);
  }
  *(undefined4 *)(param_1 + 0x2fd8) = 0;
  if (*(int *)(param_1 + 0x2fdc) != 0) {
    FUN_1417802d0(param_1 + 0x2fd0,0);
  }
  LOCK();
  puVar5 = *(undefined8 **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  UNLOCK();
  while (puVar5 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)puVar5[1];
    (**(code **)*puVar5)(puVar5,0);
    piVar6 = (int *)((longlong)puVar5 + (-8 - (ulonglong)*(uint *)(puVar5 + -1)));
    LOCK();
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    puVar5 = puVar2;
    if (*piVar6 == 0) {
      if (*(longlong *)(piVar6 + 0x10) - (longlong)piVar6 == 0x10000) {
        lVar4 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar4 = FUN_145bdc178();
        }
        FUN_140028df4(lVar4);
      }
      else {
        FUN_144705e74(piVar6);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x30d2) = 1;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143013602 FUN_143013602 body=1177 status=ok
// SIG undefined FUN_143013602(void)

void FUN_143013602(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  byte bVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 uStack_fc;
  longlong local_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong lStack_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_90 [5];
  LARGE_INTEGER local_68;
  undefined8 uStack_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(char *)(*(longlong *)(param_1 + 1000) + 0x23e8) == '\x01') {
    iVar2 = *(int *)(param_1 + 0x16c);
    if (iVar2 == 4) {
      if (DAT_14ca46038 != 0) goto LAB_1430138bf;
    }
    else {
      if ((iVar2 == 5) && (DAT_14ca46038 != 0)) goto LAB_1430138bf;
      if (((iVar2 == 7) || (iVar2 == 6)) && (DAT_14ca46050 != 0)) {
        uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(*(longlong *)(param_1 + 8) + 8) * 2)
        ;
        puVar10 = &DAT_14ca96aa8;
        if (DAT_14ca96af8 != (undefined4 *)0x0) {
          puVar10 = DAT_14ca96af8;
        }
        if (((((uint)puVar10[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) ||
            ((int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3)) &&
           (cVar8 = FUN_142bb1437(param_1 + 0x98), cVar8 == '\0')) goto LAB_1430138bf;
      }
    }
  }
  if (0 < *(int *)(param_1 + 0x3f0)) {
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0xffffffff;
    local_104 = 0;
    uStack_fc = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    lStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90[0] = 0;
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[3] = 0;
    FUN_1400f6b1e(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 1000),&local_118,0);
    FUN_1400f698c(local_90,param_1 + 0x418);
    local_c0 = FUN_14010a6cd(param_2,*(undefined8 *)(param_1 + 8));
    if (((lStack_b8 != 0) && (0 < *(int *)(lStack_b8 + 8))) && (*(longlong *)(param_1 + 8) != 0)) {
      cVar8 = FUN_144b0f89b(4,*(undefined2 *)
                               (&DAT_14ca85070 +
                               (longlong)*(int *)(*(longlong *)(param_1 + 8) + 8) * 2));
      if (cVar8 != '\0') {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x5640);
        if (lVar3 != 0) {
          if (DAT_14c87e718 == '\0') {
            iVar2 = *(int *)(lVar3 + 0x1c);
            if (2 < iVar2) {
              bVar9 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
              if (bVar9 < 3) {
                local_68.QuadPart = 0x20100000001;
                uStack_60 = 0x30100000101;
                local_58 = DAT_14c7585c8;
                local_54 = DAT_14c7585c8 | 0x200;
                local_50 = DAT_14c7585c8 | 0x100;
                local_4c = DAT_14c7585c8 | 0x300;
                local_48 = 0;
                uStack_44 = 0x200;
                uStack_40 = 0x100;
                uStack_3c = 0x300;
                if (*(byte *)((longlong)&local_68 + (ulonglong)(iVar2 - 3) * 4) == bVar9)
                goto LAB_143013a62;
              }
            }
            QueryPerformanceCounter(&local_68);
            uStack_60 = 0xffffffffffffffff;
            FUN_140056092(lVar3,&local_68);
          }
          else {
LAB_143013a62:
            FUN_140082318(lVar3);
          }
        }
        if (DAT_14c9d2488 != (code *)0x0) {
          (*DAT_14c9d2488)(param_2,2,&local_118);
        }
        lVar3 = *(longlong *)(param_1 + 1000);
        if (((*(char *)(lVar3 + 0x30e9) != '\0') ||
            (((*(char *)(lVar3 + 0x23ec) == '\0' && (*(char *)(lVar3 + 0x23e8) == '\0')) &&
             (*(char *)(lVar3 + 0x23eb) == '\0')))) && (DAT_14c9d2488 != (code *)0x0)) {
          (*DAT_14c9d2488)(param_2,3,&local_118);
        }
      }
    }
    if (local_90[0] != 0) {
      FUN_1400020a8();
    }
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    if (local_e0 != 0) {
      FUN_1400020a8();
    }
    if (local_f0 != 0) {
      FUN_1400020a8();
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x908);
  if ((plVar4 != (longlong *)0x0) && (0 < *(int *)(param_1 + 0x3f0))) {
    local_128 = param_1 + 0x98;
    local_118 = *(undefined8 *)(param_1 + 0x428);
    uStack_110 = CONCAT44(uStack_110._4_4_,*(undefined4 *)(param_1 + 0x430));
    lVar3 = *(longlong *)(param_1 + 1000);
    bVar9 = 1;
    if (*(char *)(lVar3 + 0x30e9) == '\0') {
      if ((*(char *)(lVar3 + 0x23ec) == '\0') && (*(char *)(lVar3 + 0x23e8) == '\0')) {
        bVar9 = *(byte *)(lVar3 + 0x23eb) ^ 1;
      }
      else {
        bVar9 = 0;
      }
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,param_2,bVar9,&local_118);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  if ((lVar3 != 0) && (*(int *)(param_1 + 0x3f0) != 0)) {
    lVar11 = *(longlong *)(param_1 + 1000);
    *(undefined8 *)(lVar3 + 0x4300) = *(undefined8 *)(lVar11 + 0x1040);
    uVar5 = *(undefined4 *)(lVar11 + 0x1034);
    uVar6 = *(undefined4 *)(lVar11 + 0x1038);
    uVar7 = *(undefined4 *)(lVar11 + 0x103c);
    *(undefined4 *)(lVar3 + 0x42f0) = *(undefined4 *)(lVar11 + 0x1030);
    *(undefined4 *)(lVar3 + 0x42f4) = uVar5;
    *(undefined4 *)(lVar3 + 0x42f8) = uVar6;
    *(undefined4 *)(lVar3 + 0x42fc) = uVar7;
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x42e8) = 0;
  }
LAB_1430138bf:
  iVar2 = *(int *)(param_1 + 0x198);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 400);
    lVar11 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar11);
      (**(code **)(*plVar4 + 0x58))(plVar4,param_2);
      lVar11 = lVar11 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar11);
  }
  if ((local_30 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143013a9c FUN_143013a9c body=8233 status=ok
// SIG undefined FUN_143013a9c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143013a9c(longlong param_1,longlong param_2)

{
  uint *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  longlong lVar16;
  longlong *plVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  char cVar21;
  char cVar22;
  uint uVar23;
  int iVar24;
  DWORD DVar25;
  DWORD DVar26;
  longlong *plVar27;
  longlong *plVar28;
  ulonglong uVar29;
  longlong *plVar30;
  int iVar31;
  longlong lVar32;
  undefined4 *puVar33;
  byte bVar34;
  uint uVar35;
  uint uVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  longlong lVar39;
  bool bVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  double dVar44;
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  undefined1 auStack_12d8 [32];
  undefined4 local_12b8;
  longlong local_12b0;
  void *local_12a8;
  undefined8 *local_12a0;
  DWORD local_1298;
  int local_1294;
  int *local_1290;
  longlong local_1288;
  longlong local_1280;
  undefined8 local_1278;
  undefined8 uStack_1270;
  undefined8 local_1268;
  longlong local_1260 [3];
  double local_1248;
  double dStack_1240;
  double local_1238;
  double dStack_1230;
  double local_1228;
  double local_1220;
  double local_1218;
  double local_1210;
  double local_1208;
  double local_1200;
  double local_11f8;
  double local_11f0;
  double local_11e8;
  double local_11e0;
  double local_11d8;
  double local_11d0;
  double local_11c8;
  double dStack_11c0;
  undefined8 local_11b8;
  undefined8 local_11b0;
  undefined8 uStack_11a8;
  undefined8 local_11a0;
  undefined8 uStack_1198;
  undefined8 local_1190;
  undefined8 local_1188;
  undefined8 uStack_1180;
  undefined8 local_1178;
  undefined8 uStack_1170;
  undefined8 local_1168;
  undefined8 local_1160;
  undefined8 uStack_1158;
  undefined8 local_1150;
  undefined8 uStack_1148;
  undefined8 local_1140;
  undefined8 local_1138;
  undefined8 local_1130;
  undefined8 uStack_1128;
  undefined8 local_1120;
  undefined8 uStack_1118;
  undefined8 local_1110;
  undefined8 local_1108;
  undefined8 uStack_1100;
  undefined8 local_10f8;
  undefined8 uStack_10f0;
  undefined8 local_10e8;
  undefined8 local_10e0;
  undefined8 uStack_10d8;
  undefined8 local_10d0;
  undefined8 uStack_10c8;
  undefined8 local_10c0;
  undefined8 local_10b8;
  undefined8 local_10b0;
  undefined8 uStack_10a8;
  undefined8 local_10a0;
  undefined8 uStack_1098;
  undefined8 local_1090;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  undefined8 local_1060;
  undefined8 uStack_1058;
  undefined8 local_1050;
  undefined8 uStack_1048;
  undefined8 local_1040;
  undefined8 local_1038;
  undefined8 local_1030;
  undefined8 uStack_1028;
  undefined8 local_1020;
  undefined8 uStack_1018;
  undefined8 local_1010;
  undefined8 local_1008;
  undefined8 uStack_1000;
  undefined8 local_ff8;
  undefined8 uStack_ff0;
  undefined8 local_fe8;
  undefined8 local_fe0;
  undefined8 uStack_fd8;
  undefined8 local_fd0;
  undefined8 uStack_fc8;
  undefined8 local_fc0;
  undefined8 local_fb8;
  undefined8 local_fb0;
  undefined8 uStack_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined8 local_f90;
  undefined8 local_f88;
  undefined8 uStack_f80;
  undefined8 local_f78;
  undefined8 uStack_f70;
  undefined8 local_f68;
  undefined8 local_f60;
  undefined8 uStack_f58;
  undefined8 local_f50;
  undefined8 uStack_f48;
  undefined8 local_f40;
  undefined8 local_f38;
  undefined8 local_f30;
  undefined8 uStack_f28;
  undefined8 local_f20;
  undefined8 uStack_f18;
  undefined8 local_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined8 local_ef8;
  undefined8 uStack_ef0;
  undefined8 local_ee8;
  undefined8 local_ee0;
  undefined8 uStack_ed8;
  undefined8 local_ed0;
  undefined8 uStack_ec8;
  undefined8 local_ec0;
  undefined8 local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  undefined8 local_ea0;
  undefined8 uStack_e98;
  undefined8 local_e90;
  undefined8 uStack_e88;
  undefined8 local_e80;
  undefined8 uStack_e78;
  undefined8 local_e70;
  undefined8 uStack_e68;
  undefined8 local_e60;
  undefined8 local_e58;
  undefined8 uStack_e50;
  undefined8 local_e48;
  undefined8 uStack_e40;
  undefined8 local_e38;
  undefined8 local_e30;
  undefined8 uStack_e28;
  undefined8 local_e20;
  undefined8 uStack_e18;
  undefined8 local_e10;
  undefined8 uStack_e08;
  undefined8 local_e00;
  undefined8 uStack_df8;
  undefined8 local_df0;
  undefined8 uStack_de8;
  undefined8 local_de0;
  undefined8 local_dd8;
  undefined8 uStack_dd0;
  undefined8 local_dc8;
  undefined8 uStack_dc0;
  undefined8 local_db8;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 local_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 local_d88;
  undefined8 local_d80;
  undefined8 uStack_d78;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 local_d60;
  undefined8 local_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined8 uStack_d40;
  undefined8 local_d38;
  undefined8 local_d30;
  undefined8 uStack_d28;
  undefined8 local_d20;
  undefined8 uStack_d18;
  undefined8 local_d10;
  undefined8 local_d08;
  undefined8 local_d00;
  undefined8 uStack_cf8;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined8 local_ce0;
  undefined8 local_cd8;
  undefined8 uStack_cd0;
  undefined8 local_cc8;
  undefined8 uStack_cc0;
  undefined8 local_cb8;
  undefined8 local_cb0;
  undefined8 uStack_ca8;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined8 local_c90;
  undefined8 local_c88;
  undefined8 local_c80;
  undefined8 uStack_c78;
  undefined8 local_c70;
  undefined8 uStack_c68;
  undefined8 local_c60;
  undefined8 local_c58;
  undefined8 uStack_c50;
  undefined8 local_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 local_c30;
  undefined8 uStack_c28;
  undefined8 local_c20;
  undefined8 uStack_c18;
  undefined8 local_c10;
  undefined8 uStack_c08;
  undefined8 local_c00;
  undefined8 uStack_bf8;
  undefined8 local_bf0;
  undefined8 uStack_be8;
  undefined8 local_be0;
  undefined8 local_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  undefined8 local_bb8;
  undefined8 local_bb0;
  undefined8 uStack_ba8;
  undefined8 local_ba0;
  undefined8 uStack_b98;
  undefined8 local_b90;
  undefined8 local_b88;
  undefined8 local_b80;
  undefined8 uStack_b78;
  undefined8 local_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 local_b38;
  undefined8 local_b30;
  undefined8 uStack_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined8 local_b10;
  undefined8 local_b08;
  undefined8 local_b00;
  undefined8 uStack_af8;
  undefined8 local_af0;
  undefined8 uStack_ae8;
  undefined8 local_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined8 local_ab0;
  undefined8 uStack_aa8;
  undefined8 local_aa0;
  undefined8 uStack_a98;
  undefined8 local_a90;
  undefined8 local_a88;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 local_a30;
  undefined8 uStack_a28;
  undefined8 local_a20;
  undefined8 uStack_a18;
  undefined8 local_a10;
  undefined8 local_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  undefined8 local_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  undefined8 local_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 local_980;
  undefined8 uStack_978;
  undefined8 local_970;
  undefined8 uStack_968;
  undefined8 local_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined8 local_948;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 local_930;
  undefined8 uStack_928;
  undefined8 local_920;
  undefined8 uStack_918;
  undefined8 local_910;
  undefined8 local_908;
  undefined8 local_900;
  undefined8 uStack_8f8;
  undefined8 local_8f0;
  undefined8 uStack_8e8;
  undefined8 local_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 local_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 local_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 local_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 local_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 local_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined4 local_620;
  undefined4 local_618;
  undefined1 local_614;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined4 local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined4 local_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined4 local_538;
  undefined1 *local_534;
  undefined8 uStack_52c;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined4 local_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined4 local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined4 local_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined4 local_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined4 local_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined4 local_3b8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined4 local_394;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_360;
  undefined4 local_358;
  undefined4 local_354;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_320;
  undefined4 local_318;
  undefined4 local_314;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_280;
  undefined4 local_278;
  undefined4 local_274;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_240;
  undefined4 local_238;
  undefined4 local_234;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  ulonglong local_f0;
  undefined8 uStack_48;
  
  uStack_48 = 0x143013ab2;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_12d8;
  local_1294 = *(int *)(*(longlong *)(param_1 + 8) + 0x35fc);
  local_1288 = param_2;
  if (0 < *(int *)(param_1 + 0x410)) {
    local_1290 = (int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
    ;
    lVar32 = 0;
    local_12b0 = param_1;
    do {
      lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x408) + lVar32 * 8);
      plVar17 = *(longlong **)(lVar16 + 0x3108);
      uVar41 = 0;
      local_1280 = lVar32;
      if (*(longlong **)(lVar16 + 0x10) != (longlong *)0x0) {
        uVar41 = (**(code **)(**(longlong **)(lVar16 + 0x10) + 0x50))();
      }
      local_11c8 = (double)CONCAT44(local_11c8._4_4_,uVar41);
      FUN_14160b40c(&local_1248,&local_11c8,1,1);
      pdVar2 = (double *)(lVar16 + 0x31d0);
      if (pdVar2 == &local_1248) {
LAB_143013c78:
        dVar18 = local_1248;
        if (local_1248 != 0.0) {
          LOCK();
          puVar1 = (uint *)((longlong)local_1248 + 8);
          uVar23 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar23 & 0x3fffffff) == 1) {
            puVar1 = (uint *)((longlong)local_1248 + 8);
            LOCK();
            uVar23 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar23 >> 0x1e & 1) == 0) {
              bVar34 = *(byte *)((longlong)local_1248 + 0xd);
              plVar27 = (longlong *)FUN_14001cc68(0x10,8);
              plVar27[1] = (longlong)dVar18;
              plVar30 = DAT_14ca843c0;
              plVar28 = DAT_14ca843c8;
              if ((bVar34 & 2) == 0) {
                do {
                  *plVar27 = (longlong)plVar30;
                  LOCK();
                  bVar40 = plVar30 != DAT_14ca843c0;
                  plVar28 = plVar27;
                  if (bVar40) {
                    plVar30 = DAT_14ca843c0;
                    plVar28 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar28;
                  UNLOCK();
                } while (bVar40);
              }
              else {
                do {
                  *plVar27 = (longlong)plVar28;
                  LOCK();
                  bVar40 = plVar28 != DAT_14ca843c8;
                  plVar30 = plVar27;
                  if (bVar40) {
                    plVar28 = DAT_14ca843c8;
                    plVar30 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar30;
                  UNLOCK();
                } while (bVar40);
              }
            }
          }
        }
      }
      else {
        dVar18 = *pdVar2;
        *pdVar2 = local_1248;
        local_1248 = 0.0;
        if (dVar18 != 0.0) {
          LOCK();
          puVar1 = (uint *)((longlong)dVar18 + 8);
          uVar23 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar23 & 0x3fffffff) == 1) {
            puVar1 = (uint *)((longlong)dVar18 + 8);
            LOCK();
            uVar23 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar23 >> 0x1e & 1) == 0) {
              bVar34 = *(byte *)((longlong)dVar18 + 0xd);
              plVar27 = (longlong *)FUN_14001cc68(0x10,8);
              plVar27[1] = (longlong)dVar18;
              plVar30 = DAT_14ca843c0;
              plVar28 = DAT_14ca843c8;
              if ((bVar34 & 2) == 0) {
                do {
                  *plVar27 = (longlong)plVar30;
                  LOCK();
                  bVar40 = plVar30 != DAT_14ca843c0;
                  plVar28 = plVar27;
                  if (bVar40) {
                    plVar30 = DAT_14ca843c0;
                    plVar28 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar28;
                  UNLOCK();
                } while (bVar40);
              }
              else {
                do {
                  *plVar27 = (longlong)plVar28;
                  LOCK();
                  bVar40 = plVar28 != DAT_14ca843c8;
                  plVar30 = plVar27;
                  if (bVar40) {
                    plVar28 = DAT_14ca843c8;
                    plVar30 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar30;
                  UNLOCK();
                } while (bVar40);
              }
            }
          }
          goto LAB_143013c78;
        }
      }
      if (*(longlong **)(lVar16 + 0x10) == (longlong *)0x0) {
        fVar42 = 0.0;
      }
      else {
        fVar42 = (float)(**(code **)(**(longlong **)(lVar16 + 0x10) + 0x50))();
      }
      local_11c8 = (double)CONCAT44(local_11c8._4_4_,fVar42 + -1.0);
      FUN_14160b40c(&local_1248,&local_11c8,1,1);
      pdVar2 = (double *)(lVar16 + 0x31c8);
      if (pdVar2 == &local_1248) {
LAB_143013daf:
        dVar18 = local_1248;
        if (local_1248 != 0.0) {
          LOCK();
          puVar1 = (uint *)((longlong)local_1248 + 8);
          uVar23 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar23 & 0x3fffffff) == 1) {
            puVar1 = (uint *)((longlong)local_1248 + 8);
            LOCK();
            uVar23 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar23 >> 0x1e & 1) == 0) {
              bVar34 = *(byte *)((longlong)local_1248 + 0xd);
              plVar27 = (longlong *)FUN_14001cc68(0x10,8);
              plVar27[1] = (longlong)dVar18;
              plVar30 = DAT_14ca843c0;
              plVar28 = DAT_14ca843c8;
              if ((bVar34 & 2) == 0) {
                do {
                  *plVar27 = (longlong)plVar30;
                  LOCK();
                  bVar40 = plVar30 != DAT_14ca843c0;
                  plVar28 = plVar27;
                  if (bVar40) {
                    plVar30 = DAT_14ca843c0;
                    plVar28 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar28;
                  UNLOCK();
                } while (bVar40);
              }
              else {
                do {
                  *plVar27 = (longlong)plVar28;
                  LOCK();
                  bVar40 = plVar28 != DAT_14ca843c8;
                  plVar30 = plVar27;
                  if (bVar40) {
                    plVar28 = DAT_14ca843c8;
                    plVar30 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar30;
                  UNLOCK();
                } while (bVar40);
              }
            }
          }
        }
      }
      else {
        dVar18 = *pdVar2;
        *pdVar2 = local_1248;
        local_1248 = 0.0;
        if (dVar18 != 0.0) {
          LOCK();
          puVar1 = (uint *)((longlong)dVar18 + 8);
          uVar23 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar23 & 0x3fffffff) == 1) {
            puVar1 = (uint *)((longlong)dVar18 + 8);
            LOCK();
            uVar23 = *puVar1;
            *puVar1 = *puVar1 | 0x40000000;
            UNLOCK();
            if ((uVar23 >> 0x1e & 1) == 0) {
              bVar34 = *(byte *)((longlong)dVar18 + 0xd);
              plVar27 = (longlong *)FUN_14001cc68(0x10,8);
              plVar27[1] = (longlong)dVar18;
              plVar30 = DAT_14ca843c0;
              plVar28 = DAT_14ca843c8;
              if ((bVar34 & 2) == 0) {
                do {
                  *plVar27 = (longlong)plVar30;
                  LOCK();
                  bVar40 = plVar30 != DAT_14ca843c0;
                  plVar28 = plVar27;
                  if (bVar40) {
                    plVar30 = DAT_14ca843c0;
                    plVar28 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar28;
                  UNLOCK();
                } while (bVar40);
              }
              else {
                do {
                  *plVar27 = (longlong)plVar28;
                  LOCK();
                  bVar40 = plVar28 != DAT_14ca843c8;
                  plVar30 = plVar27;
                  if (bVar40) {
                    plVar28 = DAT_14ca843c8;
                    plVar30 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar30;
                  UNLOCK();
                } while (bVar40);
              }
            }
          }
          goto LAB_143013daf;
        }
      }
      if (plVar17 != (longlong *)0x0) {
        *(int *)(plVar17 + 0x99) = (int)plVar17[0x99] + 1;
      }
      if ((DAT_14c867cf1 != '\0') || (DAT_14c7609fc == '\0')) {
        *(byte *)(lVar16 + 0x125b0) = *(byte *)(lVar16 + 0x125b0) | 0x30;
      }
      fVar42 = 1.0;
      if (DAT_14ca45948 != 0) {
        fVar42 = 1.0 / (float)(uint)(*(int *)(local_1288 + 0x20) * *(int *)(local_1288 + 0x20));
      }
      local_12a0 = (undefined8 *)(lVar16 + 0x8b0);
      fVar42 = (float)((*(int *)(lVar16 + 0x3104) - *(int *)(lVar16 + 0x30fc)) *
                      (*(int *)(lVar16 + 0x3100) - *(int *)(lVar16 + 0x30f8))) * fVar42;
      *(uint *)(lVar16 + 0x137d0) = -(uint)(0.0 < fVar42) & (uint)(1.0 / fVar42);
      puVar37 = (undefined8 *)(lVar16 + 0x830);
      puVar38 = local_12a0;
      for (lVar32 = 0x10; lVar32 != 0; lVar32 = lVar32 + -1) {
        *puVar38 = *puVar37;
        puVar37 = puVar37 + 1;
        puVar38 = puVar38 + 1;
      }
      if (plVar17 != (longlong *)0x0) {
        uVar23 = *(uint *)(lVar16 + 0x125b0) & 0xfffffffe | (uint)*(byte *)(param_1 + 0x177);
        *(uint *)(lVar16 + 0x125b0) = uVar23;
        iVar31 = (*(byte *)(param_1 + 0x177) ^ 1) + *(int *)((longlong)plVar17 + 0x6d4);
        if ((iVar31 < 4 & *(byte *)(param_1 + 0x177)) == 0) {
          if (3 < iVar31) {
            iVar31 = 0;
          }
          *(int *)((longlong)plVar17 + 0x6d4) = iVar31;
          uVar23 = *(uint *)(lVar16 + 0x125b0);
        }
        if ((uVar23 & 1) == 0) {
          *(int *)(plVar17 + 0xdc) = (int)plVar17[0xdc] + 1;
        }
        if (*(char *)(lVar16 + 0x2450) == '\x01') {
          *(undefined4 *)(plVar17 + 0xdc) = *(undefined4 *)(lVar16 + 0x244c);
        }
        plVar30 = plVar17 + 0xdc;
        if (*(char *)(lVar16 + 0x2458) != '\0') {
          plVar30 = (longlong *)(lVar16 + 0x2454);
        }
        *(int *)((longlong)plVar17 + 0x6e4) = (int)*plVar30;
      }
      local_12a8 = (void *)(lVar16 + 0x500);
      uVar23 = *(uint *)(DAT_14ca4b388 + 4);
      iVar31 = *(int *)(DAT_14ca4b3a0 + 4);
      lVar32 = *(longlong *)(lVar16 + 0x12590);
      if (*(longlong *)(lVar16 + 0x12590) == 0) {
        lVar32 = lVar16;
      }
      lVar39 = *(longlong *)(lVar32 + 0x3108);
      cVar21 = FUN_1401431b7(lVar32);
      iVar24 = *(int *)(lVar32 + 0x3024);
      if (((((*(int *)(lVar32 + 0x3020) - 2U & 0xfffffffd) != 0) || (lVar39 == 0)) ||
          ((int)uVar23 < 1 && iVar24 != 1)) || (*(char *)(lVar32 + 0x1f38) != '\x01'))
      goto LAB_143014384;
      uVar35 = 8;
      if (cVar21 != '\x02') {
        uVar35 = 0xff;
        if ((int)uVar23 < 0xff) {
          uVar35 = uVar23;
        }
        if ((int)uVar35 < 2) {
          uVar35 = 1;
        }
      }
      fVar42 = (float)(*(int *)(lVar32 + 0x4e0) - *(int *)(lVar32 + 0x4d8)) *
               *(float *)(*(longlong *)(lVar32 + 8) + 0x110) * *(float *)(lVar32 + 0x45c);
      fVar42 = (float)(*(int *)(lVar16 + 0x3100) - *(int *)(lVar16 + 0x30f8)) /
               (float)-((int)ROUND(-0.5 - (fVar42 + fVar42)) >> 1);
      if ((iVar31 == 0) || (iVar24 != 1)) {
        if (uVar23 == 5) {
          uVar35 = 4;
        }
      }
      else {
        fVar46 = 1.0 / (fVar42 * fVar42);
        fVar47 = 1.0;
        if (1.0 <= fVar46) {
          fVar47 = fVar46;
        }
        uVar35 = (int)ROUND(fVar47 * (float)(int)uVar35 + fVar47 * (float)(int)uVar35 + 0.5) >> 1;
      }
      uVar36 = uVar35;
      if ((cVar21 == '\x02') && ((int)uVar35 < 0x10f)) {
        uVar36 = (int)(uVar35 - 1) / 5;
        uVar29 = (ulonglong)uVar36;
        if ((int)uVar36 < 5) {
          uVar29 = 4;
        }
        do {
          uVar36 = (uint)(byte)(&DAT_14a2f5be0)[uVar29];
          if ((int)uVar35 <= (int)(uint)(byte)(&DAT_14a2f5be0)[uVar29]) break;
          uVar29 = uVar29 + 1;
          uVar36 = uVar35;
        } while (uVar29 != 0x36);
      }
      iVar31 = *(int *)(lVar39 + 0x6dc);
      if (*(longlong *)(lVar16 + 0x12590) == 0) {
        iVar31 = iVar31 + 1;
        if (((int)uVar36 <= iVar31) || (*(char *)(lVar16 + 0x23cc) == '\x01')) {
          iVar31 = 0;
        }
        if ((*(byte *)(lVar16 + 0x125b0) & 1) == 0) {
          *(int *)(lVar39 + 0x6dc) = iVar31;
          iVar24 = *(int *)(lVar32 + 0x3024);
        }
      }
      if (iVar24 == 1) {
        if (iVar31 < 0) {
          fVar46 = 0.0;
          fVar47 = -0.5;
        }
        else {
          fVar47 = 0.0;
          fVar46 = 0.5;
          uVar23 = iVar31 + 1U;
          do {
            fVar47 = fVar47 + (float)(uVar23 & 1) * fVar46;
            fVar46 = fVar46 * 0.5;
            bVar40 = 1 < uVar23;
            uVar23 = uVar23 >> 1;
          } while (bVar40);
          fVar46 = 0.0;
          auVar45._0_12_ = ZEXT812(0x3eaaaaab);
          auVar45._12_4_ = 0;
          uVar23 = iVar31 + 1U;
          do {
            fVar46 = fVar46 + (float)(uVar23 % 3) * auVar45._0_4_;
            auVar45._0_4_ = auVar45._0_4_ * 0.33333334;
            bVar40 = 2 < uVar23;
            uVar23 = uVar23 / 3;
          } while (bVar40);
          fVar47 = fVar47 + -0.5;
        }
        fVar46 = fVar46 + -0.5;
        fVar42 = logf(fVar42);
        fVar42 = fVar42 * -1.442695;
        if (fVar42 <= 0.0) {
          fVar42 = 0.0;
        }
        fVar42 = *(float *)(DAT_14ca4b468 + 4) - fVar42;
        *(float *)(lVar16 + 0x1e90) = fVar42;
        if (fVar42 <= *(float *)(DAT_14ca4b450 + 4)) {
          fVar42 = *(float *)(DAT_14ca4b450 + 4);
        }
        *(float *)(lVar16 + 0x1e90) = fVar42;
        goto LAB_1430142c1;
      }
      switch(uVar23) {
      case 2:
        fVar47 = (float)(&DAT_14a2f5c18)[iVar31];
        fVar46 = fVar47;
        goto LAB_1430142c1;
      case 3:
        fVar47 = (float)(&DAT_14a2f5c20)[iVar31];
        puVar33 = &DAT_14a2f5c2c;
        break;
      case 4:
        fVar47 = (float)(&DAT_14a2f5c40)[iVar31];
        puVar33 = &DAT_14a2f5c50;
        break;
      case 5:
        fVar47 = (float)(&DAT_14a2f5c60)[iVar31];
        puVar33 = &DAT_14a2f5c70;
        break;
      default:
        fVar46 = 0.0;
        fVar47 = 0.0;
        if (*(double *)(lVar16 + 0x8a8) <= 1.0 && *(double *)(lVar16 + 0x8a8) != 1.0) {
          if (-1 < iVar31) {
            fVar42 = 0.5;
            uVar23 = iVar31 + 1U;
            do {
              fVar47 = fVar47 + (float)(uVar23 & 1) * fVar42;
              fVar42 = fVar42 * 0.5;
              bVar40 = 1 < uVar23;
              uVar23 = uVar23 >> 1;
            } while (bVar40);
            fVar46 = 0.0;
            fVar42 = 0.33333334;
            uVar23 = iVar31 + 1U;
            do {
              fVar46 = fVar46 + (float)(uVar23 % 3) * fVar42;
              fVar42 = fVar42 * 0.33333334;
              bVar40 = 2 < uVar23;
              uVar23 = uVar23 / 3;
            } while (bVar40);
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14ca4b648) && (FUN_144b3d300(&DAT_14ca4b648), DAT_14ca4b648 == -1)) {
            if (DAT_14c8407a8 == (longlong *)0x0) {
              FUN_1414b00ea();
            }
            DAT_14ca4b640 =
                 (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.TemporalAAFilterSize",1);
            _Init_thread_footer(&DAT_14ca4b648);
          }
          fVar42 = (float)(**(code **)(*DAT_14ca4b640 + 0xb8))();
          fVar43 = 0.5 / (fVar42 * 0.47);
          dVar18 = exp((double)(fVar43 * fVar43) * -0.5);
          fVar43 = logf((1.0 - fVar47) * (float)dVar18 + fVar47);
          fVar43 = fVar43 * -2.0;
          if (fVar43 < 0.0) {
            fVar43 = sqrtf(fVar43);
          }
          else {
            fVar43 = SQRT(fVar43);
          }
          fVar43 = fVar42 * 0.47 * fVar43;
          fVar47 = cosf(fVar46 * 6.2831855);
          fVar47 = fVar47 * fVar43;
          fVar46 = sinf(fVar46 * 6.2831855);
          fVar46 = fVar46 * fVar43;
        }
        goto LAB_1430142c1;
      }
      fVar46 = (float)puVar33[iVar31];
LAB_1430142c1:
      if (*(int *)(DAT_14ca4b3b8 + 4) != 0) {
        fVar47 = -fVar47;
      }
      if (*(int *)(DAT_14ca4b3d0 + 4) != 0) {
        fVar46 = -fVar46;
      }
      *(uint *)(lVar16 + 0x12598) = uVar36;
      *(int *)(lVar16 + 0x1259c) = iVar31;
      *(double *)(lVar16 + 0x125a0) = (double)fVar47;
      *(double *)(lVar16 + 0x125a8) = (double)fVar46;
      dStack_11c0 = (double)((fVar46 * -2.0) /
                            (float)(*(int *)(lVar16 + 0x3104) - *(int *)(lVar16 + 0x30fc)));
      local_11c8 = (double)((fVar47 + fVar47) /
                           (float)(*(int *)(lVar16 + 0x3100) - *(int *)(lVar16 + 0x30f8)));
      FUN_14054fa8c(local_12a8,&local_11c8);
LAB_143014384:
      local_11b8 = 0x3ff0000000000000;
      local_11a0 = 0;
      uStack_1198 = 0;
      local_11b0 = 0;
      uStack_11a8 = 0;
      local_1190 = 0x3ff0000000000000;
      local_1178 = 0;
      uStack_1170 = 0;
      local_1188 = 0;
      uStack_1180 = 0;
      local_1168 = 0x3ff0000000000000;
      local_1150 = 0;
      uStack_1148 = 0;
      local_1160 = 0;
      uStack_1158 = 0;
      local_1140 = 0x3ff0000000000000;
      local_1138 = 0x3ff0000000000000;
      local_1120 = 0;
      uStack_1118 = 0;
      local_1130 = 0;
      uStack_1128 = 0;
      local_1110 = 0x3ff0000000000000;
      local_10f8 = 0;
      uStack_10f0 = 0;
      local_1108 = 0;
      uStack_1100 = 0;
      local_10e8 = 0x3ff0000000000000;
      local_10d0 = 0;
      uStack_10c8 = 0;
      local_10e0 = 0;
      uStack_10d8 = 0;
      local_10c0 = 0x3ff0000000000000;
      local_10b8 = 0x3ff0000000000000;
      local_10a0 = 0;
      uStack_1098 = 0;
      local_10b0 = 0;
      uStack_10a8 = 0;
      local_1090 = 0x3ff0000000000000;
      local_1078 = 0;
      uStack_1070 = 0;
      local_1088 = 0;
      uStack_1080 = 0;
      local_1068 = 0x3ff0000000000000;
      local_1050 = 0;
      uStack_1048 = 0;
      local_1060 = 0;
      uStack_1058 = 0;
      local_1040 = 0x3ff0000000000000;
      local_1038 = 0x3ff0000000000000;
      local_1020 = 0;
      uStack_1018 = 0;
      local_1030 = 0;
      uStack_1028 = 0;
      local_1010 = 0x3ff0000000000000;
      local_ff8 = 0;
      uStack_ff0 = 0;
      local_1008 = 0;
      uStack_1000 = 0;
      local_fe8 = 0x3ff0000000000000;
      local_fd0 = 0;
      uStack_fc8 = 0;
      local_fe0 = 0;
      uStack_fd8 = 0;
      local_fc0 = 0x3ff0000000000000;
      local_fb8 = 0x3ff0000000000000;
      local_fa0 = 0;
      uStack_f98 = 0;
      local_fb0 = 0;
      uStack_fa8 = 0;
      local_f90 = 0x3ff0000000000000;
      local_f78 = 0;
      uStack_f70 = 0;
      local_f88 = 0;
      uStack_f80 = 0;
      local_f68 = 0x3ff0000000000000;
      local_f50 = 0;
      uStack_f48 = 0;
      local_f60 = 0;
      uStack_f58 = 0;
      local_f40 = 0x3ff0000000000000;
      local_f38 = 0x3ff0000000000000;
      local_f20 = 0;
      uStack_f18 = 0;
      local_f30 = 0;
      uStack_f28 = 0;
      local_f10 = 0x3ff0000000000000;
      local_ef8 = 0;
      uStack_ef0 = 0;
      local_f08 = 0;
      uStack_f00 = 0;
      local_ee8 = 0x3ff0000000000000;
      local_ed0 = 0;
      uStack_ec8 = 0;
      local_ee0 = 0;
      uStack_ed8 = 0;
      local_ec0 = 0x3ff0000000000000;
      local_ea8 = DAT_14c8464f0;
      local_eb8 = DAT_14c8464e0;
      uStack_eb0 = DAT_14c8464e8;
      local_e90 = DAT_14c8464f0;
      local_ea0 = DAT_14c8464e0;
      uStack_e98 = DAT_14c8464e8;
      uStack_e88 = 0x3ff0000000000000;
      local_e70 = 0;
      uStack_e68 = 0;
      local_e80 = 0;
      uStack_e78 = 0;
      local_e60 = 0x3ff0000000000000;
      local_e48 = 0;
      uStack_e40 = 0;
      local_e58 = 0;
      uStack_e50 = 0;
      local_e38 = 0x3ff0000000000000;
      local_e20 = 0;
      uStack_e18 = 0;
      local_e30 = 0;
      uStack_e28 = 0;
      local_e10 = 0x3ff0000000000000;
      uStack_e08 = 0x3ff0000000000000;
      local_df0 = 0;
      uStack_de8 = 0;
      local_e00 = 0;
      uStack_df8 = 0;
      local_de0 = 0x3ff0000000000000;
      local_dc8 = 0;
      uStack_dc0 = 0;
      local_dd8 = 0;
      uStack_dd0 = 0;
      local_db8 = 0x3ff0000000000000;
      local_da0 = 0;
      uStack_d98 = 0;
      local_db0 = 0;
      uStack_da8 = 0;
      uStack_d90 = 0x3ff0000000000000;
      local_d88 = 0x3ff0000000000000;
      local_d70 = 0;
      uStack_d68 = 0;
      local_d80 = 0;
      uStack_d78 = 0;
      local_d60 = 0x3ff0000000000000;
      local_d48 = 0;
      uStack_d40 = 0;
      local_d58 = 0;
      uStack_d50 = 0;
      local_d38 = 0x3ff0000000000000;
      local_d20 = 0;
      uStack_d18 = 0;
      local_d30 = 0;
      uStack_d28 = 0;
      local_d10 = 0x3ff0000000000000;
      local_d08 = 0x3ff0000000000000;
      local_cf0 = 0;
      uStack_ce8 = 0;
      local_d00 = 0;
      uStack_cf8 = 0;
      local_ce0 = 0x3ff0000000000000;
      local_cc8 = 0;
      uStack_cc0 = 0;
      local_cd8 = 0;
      uStack_cd0 = 0;
      local_cb8 = 0x3ff0000000000000;
      local_ca0 = 0;
      uStack_c98 = 0;
      local_cb0 = 0;
      uStack_ca8 = 0;
      local_c90 = 0x3ff0000000000000;
      local_c88 = 0x3ff0000000000000;
      local_c70 = 0;
      uStack_c68 = 0;
      local_c80 = 0;
      uStack_c78 = 0;
      local_c60 = 0x3ff0000000000000;
      local_c48 = 0;
      uStack_c40 = 0;
      local_c58 = 0;
      uStack_c50 = 0;
      uStack_c38 = 0x3ff0000000000000;
      local_c20 = 0;
      uStack_c18 = 0;
      local_c30 = 0;
      uStack_c28 = 0;
      local_c10 = 0x3ff0000000000000;
      uStack_c08 = 0x3ff0000000000000;
      local_bf0 = 0;
      uStack_be8 = 0;
      local_c00 = 0;
      uStack_bf8 = 0;
      local_be0 = 0x3ff0000000000000;
      local_bc8 = 0;
      uStack_bc0 = 0;
      local_bd8 = 0;
      uStack_bd0 = 0;
      local_bb8 = 0x3ff0000000000000;
      local_ba0 = 0;
      uStack_b98 = 0;
      local_bb0 = 0;
      uStack_ba8 = 0;
      local_b90 = 0x3ff0000000000000;
      local_b88 = 0x3ff0000000000000;
      local_b70 = 0;
      uStack_b68 = 0;
      local_b80 = 0;
      uStack_b78 = 0;
      uStack_b60 = 0x3ff0000000000000;
      local_b48 = 0;
      uStack_b40 = 0;
      local_b58 = 0;
      uStack_b50 = 0;
      local_b38 = 0x3ff0000000000000;
      local_b20 = 0;
      uStack_b18 = 0;
      local_b30 = 0;
      uStack_b28 = 0;
      local_b10 = 0x3ff0000000000000;
      local_b08 = 0x3ff0000000000000;
      local_af0 = 0;
      uStack_ae8 = 0;
      local_b00 = 0;
      uStack_af8 = 0;
      local_ae0 = 0x3ff0000000000000;
      local_ac8 = 0;
      uStack_ac0 = 0;
      local_ad8 = 0;
      uStack_ad0 = 0;
      local_ab8 = 0x3ff0000000000000;
      local_aa0 = 0;
      uStack_a98 = 0;
      local_ab0 = 0;
      uStack_aa8 = 0;
      local_a90 = 0x3ff0000000000000;
      local_a88 = 0x3ff0000000000000;
      local_a70 = 0;
      uStack_a68 = 0;
      local_a80 = 0;
      uStack_a78 = 0;
      local_a60 = 0x3ff0000000000000;
      local_a48 = 0;
      uStack_a40 = 0;
      local_a58 = 0;
      uStack_a50 = 0;
      local_a38 = 0x3ff0000000000000;
      local_a20 = 0;
      uStack_a18 = 0;
      local_a30 = 0;
      uStack_a28 = 0;
      local_a10 = 0x3ff0000000000000;
      local_a08 = 0x3ff0000000000000;
      local_9f0 = 0;
      uStack_9e8 = 0;
      local_a00 = 0;
      uStack_9f8 = 0;
      local_9e0 = 0x3ff0000000000000;
      local_9c8 = 0;
      uStack_9c0 = 0;
      local_9d8 = 0;
      uStack_9d0 = 0;
      local_9b8 = 0x3ff0000000000000;
      local_9a0 = 0;
      uStack_998 = 0;
      local_9b0 = 0;
      uStack_9a8 = 0;
      uStack_990 = 0x3ff0000000000000;
      local_988 = 0x3ff0000000000000;
      local_970 = 0;
      uStack_968 = 0;
      local_980 = 0;
      uStack_978 = 0;
      local_960 = 0x3ff0000000000000;
      local_948 = 0;
      uStack_940 = 0;
      local_958 = 0;
      uStack_950 = 0;
      local_938 = 0x3ff0000000000000;
      local_920 = 0;
      uStack_918 = 0;
      local_930 = 0;
      uStack_928 = 0;
      local_910 = 0x3ff0000000000000;
      local_908 = 0x3ff0000000000000;
      local_8f0 = 0;
      uStack_8e8 = 0;
      local_900 = 0;
      uStack_8f8 = 0;
      local_8e0 = 0x3ff0000000000000;
      local_8c8 = 0;
      uStack_8c0 = 0;
      local_8d8 = 0;
      uStack_8d0 = 0;
      local_8b8 = 0x3ff0000000000000;
      local_8a0 = 0;
      uStack_898 = 0;
      local_8b0 = 0;
      uStack_8a8 = 0;
      local_890 = 0x3ff0000000000000;
      local_888 = 0x3ff0000000000000;
      local_870 = 0;
      uStack_868 = 0;
      local_880 = 0;
      uStack_878 = 0;
      local_860 = 0x3ff0000000000000;
      local_848 = 0;
      uStack_840 = 0;
      local_858 = 0;
      uStack_850 = 0;
      local_838 = 0x3ff0000000000000;
      local_820 = 0;
      uStack_818 = 0;
      local_830 = 0;
      uStack_828 = 0;
      local_810 = 0x3ff0000000000000;
      local_808 = 0x3ff0000000000000;
      local_7f0 = 0;
      uStack_7e8 = 0;
      local_800 = 0;
      uStack_7f8 = 0;
      local_7e0 = 0x3ff0000000000000;
      local_7c8 = 0;
      uStack_7c0 = 0;
      local_7d8 = 0;
      uStack_7d0 = 0;
      local_7b8 = 0x3ff0000000000000;
      local_7a0 = 0;
      uStack_798 = 0;
      local_7b0 = 0;
      uStack_7a8 = 0;
      local_790 = 0x3ff0000000000000;
      local_788 = 0x3ff0000000000000;
      local_770 = 0;
      uStack_768 = 0;
      local_780 = 0;
      uStack_778 = 0;
      local_760 = 0x3ff0000000000000;
      local_748 = 0;
      uStack_740 = 0;
      local_758 = 0;
      uStack_750 = 0;
      local_738 = 0x3ff0000000000000;
      local_720 = 0;
      uStack_718 = 0;
      local_730 = 0;
      uStack_728 = 0;
      uStack_710 = 0x3ff0000000000000;
      local_708 = 0x3ff0000000000000;
      local_6f0 = 0;
      uStack_6e8 = 0;
      local_700 = 0;
      uStack_6f8 = 0;
      local_6e0 = 0x3ff0000000000000;
      local_6c8 = 0;
      uStack_6c0 = 0;
      local_6d8 = 0;
      uStack_6d0 = 0;
      uStack_6b8 = 0x3ff0000000000000;
      local_6a0 = 0;
      uStack_698 = 0;
      local_6b0 = 0;
      uStack_6a8 = 0;
      local_690 = 0x3ff0000000000000;
      local_678 = DAT_14c8464f0;
      local_688 = DAT_14c8464e0;
      uStack_680 = DAT_14c8464e8;
      local_660 = DAT_14c8464f0;
      local_670 = DAT_14c8464e0;
      uStack_668 = DAT_14c8464e8;
      local_648 = DAT_14c8464f0;
      local_658 = DAT_14c8464e0;
      uStack_650 = DAT_14c8464e8;
      local_640 = DAT_14c8463f0;
      uStack_638 = DAT_14c8463f8;
      local_630 = DAT_14c8463f0;
      uStack_628 = DAT_14c8463f8;
      local_620 = 0x3f800000;
      local_618 = 0x3f800000;
      local_614 = 0;
      local_5d0 = 0;
      local_5e0 = 0;
      uStack_5d8 = 0;
      local_5f0 = 0;
      uStack_5e8 = 0;
      local_600 = 0;
      uStack_5f8 = 0;
      local_610 = 0;
      uStack_608 = 0;
      local_5a8 = 0;
      uStack_5a0 = 0;
      local_5b8 = 0;
      uStack_5b0 = 0;
      local_5c8 = 0;
      uStack_5c0 = 0;
      local_580 = 0;
      local_590 = 0;
      uStack_588 = 0;
      local_538 = 0;
      local_548 = 0;
      uStack_540 = 0;
      local_558 = 0;
      uStack_550 = 0;
      local_568 = 0;
      uStack_560 = 0;
      local_578 = 0;
      uStack_570 = 0;
      local_534 = &DAT_100000001;
      uStack_52c = 1;
      local_4a0 = 0;
      uStack_498 = 0;
      local_470 = 0;
      uStack_468 = 0;
      local_440 = 0;
      uStack_438 = 0;
      local_410 = 0;
      uStack_408 = 0;
      local_3e0 = 0;
      uStack_3d8 = 0;
      local_3a0 = 0;
      local_398 = 0;
      local_4d0 = 0;
      uStack_4c8 = 0;
      local_4e0 = 0;
      uStack_4d8 = 0;
      local_4f0 = 0;
      uStack_4e8 = 0;
      local_500 = 0;
      uStack_4f8 = 0;
      local_510 = 0;
      uStack_508 = 0;
      local_520 = 0;
      uStack_518 = 0;
      local_4a8 = 0;
      local_4b8 = 0;
      uStack_4b0 = 0;
      local_478 = 0;
      local_488 = 0;
      uStack_480 = 0;
      local_448 = 0;
      local_458 = 0;
      uStack_450 = 0;
      local_418 = 0;
      local_428 = 0;
      uStack_420 = 0;
      local_3e8 = 0;
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_3b8 = 0;
      local_3c8 = 0;
      uStack_3c0 = 0;
      local_394 = 1;
      local_360 = 0;
      local_358 = 0;
      local_380 = 0;
      uStack_378 = 0;
      local_390 = 0;
      uStack_388 = 0;
      local_354 = 1;
      local_320 = 0;
      local_318 = 0;
      local_340 = 0;
      uStack_338 = 0;
      local_350 = 0;
      uStack_348 = 0;
      local_314 = 1;
      local_2c0 = 0;
      local_2b8 = 0;
      local_2f0 = 0;
      local_300 = 0;
      uStack_2f8 = 0;
      local_310 = 0;
      uStack_308 = 0;
      local_2e0 = 0;
      uStack_2d8 = 0;
      local_2b4 = 1;
      local_280 = 0;
      local_278 = 0;
      local_2a0 = 0;
      uStack_298 = 0;
      local_2b0 = 0;
      uStack_2a8 = 0;
      local_274 = 1;
      local_240 = 0;
      local_238 = 0;
      local_260 = 0;
      uStack_258 = 0;
      local_270 = 0;
      uStack_268 = 0;
      local_234 = 1;
      local_1f0 = 0;
      local_1e8 = 0;
      local_210 = 0;
      uStack_208 = 0;
      local_220 = 0;
      uStack_218 = 0;
      local_230 = 0;
      uStack_228 = 0;
      local_1e4 = 0xffffffff00000080;
      local_1dc = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1b0 = 0;
      local_1a8 = 0x100000000;
      local_148 = 0;
      local_140 = 0;
      local_160 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_180 = 0;
      uStack_178 = 0;
      local_190 = 0;
      uStack_188 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      local_13c = 0x3f800000;
      local_108 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_11c8 = *(double *)(lVar16 + 0x30f8);
      dStack_11c0 = *(double *)(lVar16 + 0x3100);
      memcpy(&local_11b8,local_12a8,0xba0);
      if (plVar17 == (longlong *)0x0) {
        FUN_144881814(lVar16 + 0x125c0,&local_11c8);
        param_1 = local_12b0;
      }
      else {
        if ((((*(double *)(lVar16 + 0x23b0) != 0.0) || (*(double *)(lVar16 + 0x23b8) != 0.0)) ||
            (*(double *)(lVar16 + 0x23c0) != 0.0)) || (NAN(*(double *)(lVar16 + 0x23c0)))) {
          FUN_1472e3166(plVar17 + 0xe0,lVar16 + 0x23b0);
        }
        uVar23 = -(uint)((float)(*(double *)(*(longlong *)(lVar16 + 8) + 0x88) -
                                (double)*(float *)((longlong)plVar17 + 0x45c)) < -0.0001 ||
                        *(float *)((longlong)plVar17 + 0x45c) < 0.0001);
        local_12b8 = DAT_14c7609e4;
        cVar22 = FUN_143015ac6(lVar16,plVar17 + 0x176,plVar17 + 0x249,0x42960000);
        cVar21 = '\x01';
        local_12a8 = (void *)CONCAT44(local_12a8._4_4_,uVar23);
        if (((uVar23 & 1) == 0) && (cVar22 == '\0' && *(char *)(lVar16 + 0x23cc) == '\0')) {
          cVar21 = *(char *)(lVar16 + 0x23fc);
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14ca4b658) &&
           (FUN_144b3d300(&DAT_14ca4b658), DAT_14ca4b658 == -1)) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          plVar30 = (longlong *)
                    (**(code **)(*DAT_14c8407a8 + 200))
                              (DAT_14c8407a8,L"r.PathTracing.TemporalDenoiser.mode",1);
          if (plVar30 == (longlong *)0x0) {
            DAT_14ca4b650 = 0;
          }
          else {
            DAT_14ca4b650 = (**(code **)(*plVar30 + 0x68))(plVar30);
          }
          _Init_thread_footer(&DAT_14ca4b658);
        }
        lVar32 = DAT_14ca4b650;
        if (DAT_14ca4b650 == 0) {
          iVar31 = 0;
        }
        else {
          iVar31 = *local_1290;
          if (iVar31 == 0x40000002) {
            uVar29 = 0;
          }
          else {
            bVar40 = true;
            if ((DAT_14c86a9f8 == '\x01') && (iVar31 != 2)) {
              if (iVar31 == 1) {
                local_1298 = FUN_140ad26c0();
                DVar25 = GetCurrentThreadId();
                bVar40 = local_1298 == DVar25;
              }
              else {
                bVar40 = false;
              }
            }
            uVar29 = (ulonglong)(bVar40 ^ 1);
          }
          iVar31 = *(int *)(lVar32 + uVar29 * 4);
        }
        if (*(char *)(lVar16 + 0x23ee) == '\x01') {
          if ((*(byte *)(lVar16 + 0x23cc) != 0) || (*(char *)(lVar16 + 0x23fd) == '\x01')) {
            bVar34 = iVar31 != 1 | *(byte *)(lVar16 + 0x23cc);
LAB_1430150a7:
            FUN_142e73f6a(plVar17,bVar34);
          }
        }
        else {
          local_12b8 = 0x3dcccccd;
          cVar22 = FUN_143015ac6(lVar16,plVar17 + 0x176,plVar17 + 0x249,0x3e3851ec);
          lVar32 = *(longlong *)(lVar16 + 0x3108) + 0xab0;
          bVar40 = true;
          uVar29 = 0;
          puVar37 = local_12a0;
          do {
            lVar39 = 0;
            do {
              pdVar2 = (double *)(lVar32 + lVar39 * 8);
              if (((double)puVar37[lVar39] != *pdVar2) ||
                 (NAN((double)puVar37[lVar39]) || NAN(*pdVar2))) goto LAB_14301505f;
              lVar39 = lVar39 + 1;
            } while (lVar39 != 4);
            bVar40 = uVar29 < 3;
            uVar29 = uVar29 + 1;
            lVar32 = lVar32 + 0x20;
            puVar37 = puVar37 + 4;
          } while (uVar29 != 4);
LAB_14301505f:
          lVar32 = plVar17[0x3af];
          *(int *)(plVar17 + 0x3af) = local_1294;
          if ((((bVar40) || (cVar22 != '\0' || (int)lVar32 != local_1294)) ||
              (*(char *)(lVar16 + 0x23cc) != '\0')) ||
             ((*(char *)(lVar16 + 0x23fc) != '\0' || (*(char *)(lVar16 + 0x23fd) == '\x01')))) {
            bVar34 = 1;
            if (iVar31 == 2) {
              bVar34 = *(byte *)(lVar16 + 0x23cc);
            }
            goto LAB_1430150a7;
          }
        }
        if (cVar21 == '\0') {
          FUN_144881814(lVar16 + 0x125c0,plVar17 + 0xde);
          uVar23 = *(uint *)(lVar16 + 0x125b0);
        }
        else {
          FUN_144881814(lVar16 + 0x125c0,&local_11c8);
          uVar23 = *(uint *)(lVar16 + 0x125b0) | 8;
          *(uint *)(lVar16 + 0x125b0) = uVar23;
        }
        param_1 = local_12b0;
        if ((uVar23 & 1) == 0) {
          FUN_144881814(plVar17 + 0xde,&local_11c8);
        }
        if (*(char *)(lVar16 + 0x1170) == '\x01') {
          local_1248 = *(double *)(lVar16 + 0x1110);
          dStack_1240 = *(double *)(lVar16 + 0x1118);
          local_1238 = *(double *)(lVar16 + 0x1120);
          dStack_1230 = *(double *)(lVar16 + 0x1128);
          FUN_1448052ee(&local_1248,local_1260);
          local_1278 = *(undefined8 *)(lVar16 + 0x1130);
          uStack_1270 = *(undefined8 *)(lVar16 + 0x1138);
          local_1268 = *(undefined8 *)(lVar16 + 0x1140);
          FUN_1436a30e4(lVar16 + 0x125d0,&local_1278,local_1260);
        }
        if ((((((ulonglong)local_12a8 & 1) != 0) ||
             ((double)(*(float *)((longlong)plVar17 + 0x45c) + *(float *)(DAT_14cb0d2b0 + 0xd8c)) <
              *(double *)(*(longlong *)(lVar16 + 8) + 0x88))) ||
            (*(char *)(lVar16 + 0x23cc) != '\0')) || (*(char *)(lVar16 + 0x23fc) != '\0')) {
LAB_143015331:
          *(byte *)(lVar16 + 0x125b0) = *(byte *)(lVar16 + 0x125b0) | 0x10;
          *(undefined1 *)(lVar16 + 0x23fe) = 1;
        }
        else {
          local_1248 = (double)*(float *)(plVar17 + 0x8e);
          local_12b8 = *(undefined4 *)(DAT_14cb0d2b0 + 0xd88);
          dStack_1240 = (double)*(float *)((longlong)plVar17 + 0x474);
          local_1238 = (double)*(float *)(plVar17 + 0x8f);
          dStack_1230 = (double)*(float *)((longlong)plVar17 + 0x47c);
          local_1228 = (double)*(float *)(plVar17 + 0x90);
          local_1220 = (double)*(float *)((longlong)plVar17 + 0x484);
          local_1218 = (double)*(float *)(plVar17 + 0x91);
          local_1210 = (double)*(float *)((longlong)plVar17 + 0x48c);
          local_1208 = (double)*(float *)(plVar17 + 0x92);
          local_1200 = (double)*(float *)((longlong)plVar17 + 0x494);
          local_11f8 = (double)*(float *)(plVar17 + 0x93);
          local_11f0 = (double)*(float *)((longlong)plVar17 + 0x49c);
          local_11e8 = (double)*(float *)(plVar17 + 0x94);
          local_11e0 = (double)*(float *)((longlong)plVar17 + 0x4a4);
          local_11d8 = (double)*(float *)(plVar17 + 0x95);
          local_11d0 = (double)*(float *)((longlong)plVar17 + 0x4ac);
          cVar21 = FUN_143015ac6(lVar16,&local_1248,plVar17 + 0x96,
                                 *(undefined4 *)(DAT_14cb0d2b0 + 0xd84));
          if (cVar21 != '\0') goto LAB_143015331;
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14ca4b668) &&
           (FUN_144b3d300(&DAT_14ca4b668), DAT_14ca4b668 == -1)) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          plVar30 = (longlong *)
                    (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"vr.RoundRobinOcclusion",1);
          if (plVar30 == (longlong *)0x0) {
            DAT_14ca4b660 = 0;
          }
          else {
            DAT_14ca4b660 = (**(code **)(*plVar30 + 0x68))(plVar30);
          }
          _Init_thread_footer(&DAT_14ca4b668);
          param_1 = local_12b0;
        }
        lVar32 = DAT_14ca4b660;
        if (DAT_14ca4b660 == 0) {
          if (*(char *)((longlong)plVar17 + 0x6d9) != '\0') {
            bVar40 = false;
            goto LAB_1430153dd;
          }
        }
        else {
          iVar31 = *local_1290;
          if (iVar31 == 0x40000002) {
            uVar29 = 0;
          }
          else {
            bVar40 = true;
            if ((DAT_14c86a9f8 == '\x01') && (iVar31 != 2)) {
              if (iVar31 == 1) {
                DVar25 = FUN_140ad26c0();
                DVar26 = GetCurrentThreadId();
                bVar40 = DVar25 == DVar26;
              }
              else {
                bVar40 = false;
              }
            }
            uVar29 = (ulonglong)(bVar40 ^ 1);
          }
          bVar40 = *(int *)(lVar32 + uVar29 * 4) != 0;
          if (bVar40 != (bool)*(char *)((longlong)plVar17 + 0x6d9)) {
LAB_1430153dd:
            *(bool *)((longlong)plVar17 + 0x6d9) = bVar40;
            *(byte *)(lVar16 + 0x125b0) = *(byte *)(lVar16 + 0x125b0) | 0x10;
          }
        }
        local_12a0 = (undefined8 *)CONCAT44(local_12a0._4_4_,(float)*(double *)(lVar16 + 0x9b0));
        dVar18 = *(double *)(lVar16 + 0x9b8);
        dVar44 = *(double *)(lVar16 + 0x9c0);
        dVar3 = *(double *)(lVar16 + 0x9c8);
        dVar4 = *(double *)(lVar16 + 0x9d0);
        dVar5 = *(double *)(lVar16 + 0x9d8);
        dVar6 = *(double *)(lVar16 + 0x9e0);
        dVar7 = *(double *)(lVar16 + 0x9e8);
        dVar8 = *(double *)(lVar16 + 0x9f0);
        dVar9 = *(double *)(lVar16 + 0x9f8);
        dVar10 = *(double *)(lVar16 + 0xa00);
        dVar11 = *(double *)(lVar16 + 0xa08);
        dVar12 = *(double *)(lVar16 + 0xa10);
        dVar13 = *(double *)(lVar16 + 0xa18);
        dVar14 = *(double *)(lVar16 + 0xa20);
        dVar15 = *(double *)(lVar16 + 0xa28);
        local_12a8 = (void *)CONCAT44(local_12a8._4_4_,(float)dVar15);
        *(float *)(plVar17 + 0x8e) = (float)*(double *)(lVar16 + 0x9b0);
        *(float *)((longlong)plVar17 + 0x474) = (float)dVar18;
        *(float *)(plVar17 + 0x8f) = (float)dVar44;
        *(float *)((longlong)plVar17 + 0x47c) = (float)dVar3;
        *(float *)(plVar17 + 0x90) = (float)dVar4;
        *(float *)((longlong)plVar17 + 0x484) = (float)dVar5;
        *(float *)(plVar17 + 0x91) = (float)dVar6;
        *(float *)((longlong)plVar17 + 0x48c) = (float)dVar7;
        *(float *)(plVar17 + 0x92) = (float)dVar8;
        *(float *)((longlong)plVar17 + 0x494) = (float)dVar9;
        *(float *)(plVar17 + 0x93) = (float)dVar10;
        *(float *)((longlong)plVar17 + 0x49c) = (float)dVar11;
        *(float *)(plVar17 + 0x94) = (float)dVar12;
        *(float *)((longlong)plVar17 + 0x4a4) = (float)dVar13;
        *(float *)(plVar17 + 0x95) = (float)dVar14;
        *(float *)((longlong)plVar17 + 0x4ac) = (float)dVar15;
        plVar17[0x98] = *(longlong *)(lVar16 + 0x1058);
        uVar41 = *(undefined4 *)(lVar16 + 0x104c);
        uVar19 = *(undefined4 *)(lVar16 + 0x1050);
        uVar20 = *(undefined4 *)(lVar16 + 0x1054);
        *(undefined4 *)(plVar17 + 0x96) = *(undefined4 *)(lVar16 + 0x1048);
        *(undefined4 *)((longlong)plVar17 + 0x4b4) = uVar41;
        *(undefined4 *)(plVar17 + 0x97) = uVar19;
        *(undefined4 *)((longlong)plVar17 + 0x4bc) = uVar20;
        if ((*(char *)(param_1 + 0x177) != '\x01') || (*(char *)(lVar16 + 0x23ee) == '\x01')) {
          iVar31 = *(int *)(lVar16 + 0x2b90);
          fVar42 = *(float *)(*(longlong *)(lVar16 + 8) + 0x98);
          if (fVar42 <= 1e-08) {
            fVar42 = 1e-08;
          }
          iVar24 = (**(code **)(*plVar17 + 0x98))(plVar17);
          if (iVar31 < 1) {
            param_1 = local_12b0;
            if (iVar24 == 1) {
              *(float *)(plVar17 + 0x8d) = fVar42;
              fVar47 = fVar42;
            }
            else {
              fVar47 = (fVar42 - *(float *)(plVar17 + 0x8d)) * 0.1 + *(float *)(plVar17 + 0x8d);
              *(float *)(plVar17 + 0x8d) = fVar47;
            }
          }
          else {
            fVar47 = 0.016666668;
            if (iVar24 != 1) {
              fVar47 = fVar42;
            }
            fVar42 = fVar47;
            fVar47 = 1.0 / (float)iVar31;
            *(float *)(plVar17 + 0x8d) = fVar47;
          }
          *(float *)((longlong)plVar17 + 0x464) = fVar47 / fVar42;
        }
        *(undefined4 *)(plVar17 + 0x8b) = *(undefined4 *)((longlong)plVar17 + 0x454);
        *(undefined4 *)((longlong)plVar17 + 0x454) =
             *(undefined4 *)(*(longlong *)(lVar16 + 8) + 0xac);
        lVar32 = *(longlong *)(lVar16 + 8);
        dVar18 = *(double *)(lVar32 + 0x88);
        dVar44 = (double)*(float *)((longlong)plVar17 + 0x45c);
        if ((dVar18 != dVar44) || (NAN(dVar18) || NAN(dVar44))) {
          *(float *)(plVar17 + 0x8c) = (float)(dVar18 - dVar44);
          *(float *)((longlong)plVar17 + 0x45c) = (float)*(double *)(lVar32 + 0x88);
        }
        FUN_1436a1154(plVar17 + 0x3c7,lVar16);
      }
      FUN_144734798(&local_11c8);
      lVar32 = local_1280 + 1;
    } while (lVar32 < *(int *)(param_1 + 0x410));
  }
  if ((local_f0 ^ (ulonglong)auStack_12d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143015ac6 FUN_143015ac6 body=303 status=ok
// SIG undefined FUN_143015ac6(void)

bool FUN_143015ac6(longlong param_1,double *param_2,double *param_3,float param_4,float param_5)

{
  bool bVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  fVar2 = cosf(param_4 * 0.017453292);
  bVar1 = true;
  if (((fVar2 <= (float)(*(double *)(param_1 + 0x9f0) * param_2[8] +
                        *(double *)(param_1 + 0x9b0) * *param_2 +
                        *(double *)(param_1 + 0x9d0) * param_2[4])) &&
      (fVar2 <= (float)(*(double *)(param_1 + 0x9f8) * param_2[9] +
                       *(double *)(param_1 + 0x9b8) * param_2[1] +
                       *(double *)(param_1 + 0x9d8) * param_2[5]))) &&
     (fVar2 <= (float)(*(double *)(param_1 + 0xa00) * param_2[10] +
                      *(double *)(param_1 + 0x9c0) * param_2[2] +
                      *(double *)(param_1 + 0x9e0) * param_2[6]))) {
    dVar3 = *(double *)(param_1 + 0x1048) - *param_3;
    dVar4 = *(double *)(param_1 + 0x1050) - param_3[1];
    dVar5 = *(double *)(param_1 + 0x1058) - param_3[2];
    bVar1 = (double)(param_5 * param_5) < dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4;
  }
  return bVar1;
}



// FUNCTION 143015bf6 FUN_143015bf6 body=5301 status=ok
// SIG undefined FUN_143015bf6(void)

void FUN_143015bf6(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ushort uVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  DWORD DVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint *puVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  longlong lVar18;
  double *pdVar19;
  longlong lVar20;
  double *pdVar21;
  int iVar22;
  uint *puVar23;
  longlong lVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auStack_3d8 [32];
  double *local_3b8;
  double local_3b0;
  double local_3a8;
  uint local_3a0;
  double local_398;
  undefined1 local_390;
  DWORD local_37c;
  double local_378;
  undefined8 uStack_370;
  double local_368;
  undefined8 uStack_360;
  double local_358;
  undefined8 uStack_350;
  double local_340;
  longlong *local_338;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  longlong local_308;
  longlong *local_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined **local_298;
  longlong local_290;
  longlong local_288;
  undefined8 *local_280;
  undefined8 uStack_278;
  longlong local_270;
  longlong local_268;
  undefined8 local_260;
  float local_258;
  float local_254;
  double local_250 [3];
  undefined1 local_238 [24];
  float local_220;
  undefined8 local_21c;
  float local_214;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1d8;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178 [4];
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  if (*(char *)(*(longlong *)(param_1 + 1000) + 0x23e8) == '\x01') {
    iVar22 = *(int *)(param_1 + 0x16c);
    if (iVar22 == 4) {
      if (DAT_14ca46038 != 0) goto LAB_143017010;
    }
    else {
      if ((iVar22 == 5) && (DAT_14ca46038 != 0)) goto LAB_143017010;
      if (((iVar22 == 7) || (iVar22 == 6)) && (DAT_14ca46050 != 0)) {
        uVar4 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(*(longlong *)(param_1 + 8) + 8) * 2)
        ;
        puVar16 = &DAT_14ca96aa8;
        if (DAT_14ca96af8 != (undefined4 *)0x0) {
          puVar16 = DAT_14ca96af8;
        }
        if (((((uint)puVar16[uVar4 >> 5] >> (uVar4 & 0x1f) & 1) == 0) ||
            ((int)(&DAT_14ca814b8)[(ulonglong)uVar4 * 0xf] < 3)) &&
           (cVar6 = FUN_142bb1437(param_1 + 0x98), cVar6 == '\0')) goto LAB_143017010;
      }
    }
  }
  iVar22 = *(int *)(param_1 + 0x3f0);
  uVar9 = (ulonglong)iVar22;
  uVar14 = uVar9;
  if (0 < (longlong)uVar9) {
    lVar18 = 0x10;
    lVar20 = 0;
    do {
      lVar24 = *(longlong *)(*(longlong *)(param_1 + 1000) + lVar18);
      if (lVar24 != 0) {
        FUN_144a6533a(lVar24,*(undefined8 *)(param_1 + 8));
        uVar9 = (ulonglong)*(uint *)(param_1 + 0x3f0);
      }
      lVar20 = lVar20 + 1;
      iVar22 = (int)uVar9;
      uVar14 = (ulonglong)iVar22;
      lVar18 = lVar18 + 0x13c10;
    } while (lVar20 < (longlong)uVar14);
  }
  if (iVar22 != 0) {
    lVar18 = *(longlong *)(param_1 + 1000);
    lVar24 = uVar14 * 0x13c10 + lVar18;
    lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      if ((longlong)*(int *)(lVar18 + 0x3798) != 0) {
        local_338 = *(longlong **)(lVar18 + 0x3790);
        local_300 = local_338 + *(int *)(lVar18 + 0x3798);
        local_308 = lVar18 + 0x13b98;
        do {
          plVar5 = (longlong *)*local_338;
          local_180 = (double)plVar5[0x28];
          local_190 = (double)plVar5[0x26];
          local_188 = (double)plVar5[0x27];
          local_368 = local_180 - *(double *)(lVar18 + 0x1058);
          local_358 = local_188 - *(double *)(lVar18 + 0x1050);
          local_378 = local_190 - *(double *)(lVar18 + 0x1048);
          uStack_370 = 0;
          uStack_350 = 0;
          uStack_360 = 0;
          local_1a8 = local_378;
          local_1a0 = local_358;
          local_198 = local_368;
          (**(code **)(*plVar5 + 0x18))(plVar5);
          (**(code **)(*plVar5 + 0x78))(plVar5,local_238,0);
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          plVar10 = (longlong *)
                    (**(code **)(*DAT_14c8407a8 + 200))
                              (DAT_14c8407a8,L"r.ReflectionCaptureResolution",1);
          if (plVar10 == (longlong *)0x0) {
            lVar11 = 0;
          }
          else {
            lVar11 = (**(code **)(*plVar10 + 0x68))(plVar10);
          }
          iVar22 = *(int *)(lVar20 + 0xc60);
          if (iVar22 == 0x40000002) {
            uVar14 = 0;
          }
          else {
            bVar25 = true;
            if ((DAT_14c86a9f8 == '\x01') && (iVar22 != 2)) {
              if (iVar22 == 1) {
                local_37c = FUN_140ad26c0();
                DVar8 = GetCurrentThreadId();
                bVar25 = local_37c == DVar8;
              }
              else {
                bVar25 = false;
              }
            }
            uVar14 = (ulonglong)(bVar25 ^ 1);
          }
          fVar27 = (float)(local_368 * local_368 + local_378 * local_378 + local_358 * local_358);
          fVar26 = (float)*(int *)(lVar11 + uVar14 * 4);
          local_340 = (double)CONCAT44(local_340._4_4_,fVar27);
          fVar27 = (SQRT(fVar27) * 0.75) / fVar26;
          if (fVar27 <= local_1e8) {
            fVar27 = local_1e8;
          }
          local_250[2] = ABS(local_368);
          local_250[0] = ABS(local_378);
          local_250[1] = ABS(local_358);
          uVar17 = (local_250[1] <= local_250[2]) + 1;
          if (local_250[1] < local_250[0]) {
            uVar17 = (uint)(local_250[0] <= local_250[2]) * 2;
          }
          uVar14 = (ulonglong)uVar17;
          dVar28 = *(double *)((longlong)local_250 + (ulonglong)(uVar17 << 3));
          fVar26 = fVar26 * 0.5;
          lVar11 = (longlong)&local_1a0 + (ulonglong)(uVar17 << 3);
          iVar22 = 2;
          do {
            uVar14 = uVar14 + 1;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar14;
            uVar9 = SUB168(auVar32 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0x3ffffffffffffffe;
            dVar29 = *(double *)(lVar11 + uVar9 * -0xc) / dVar28;
            auVar31._0_4_ = (float)dVar29 * fVar26 + -0.5 + 0.5;
            auVar31._4_4_ = (int)((ulonglong)dVar29 >> 0x20);
            auVar31._8_8_ = 0;
            auVar32 = blendps(auVar31,ZEXT816(0),0xe);
            auVar32 = roundps(auVar32,auVar32,1);
            *(double *)(lVar11 + uVar9 * -0xc) = (double)((auVar32._0_4_ + 0.5) / fVar26) * dVar28;
            lVar11 = lVar11 + 8;
            iVar22 = iVar22 + -1;
          } while (iVar22 != 0);
          local_378 = local_198;
          local_180 = *(double *)(lVar18 + 0x1058) + local_198;
          local_358 = local_1a0;
          local_188 = *(double *)(lVar18 + 0x1050) + local_1a0;
          local_368 = local_1a8;
          local_190 = *(double *)(lVar18 + 0x1048) + local_1a8;
          local_260 = local_21c;
          local_258 = local_214;
          local_254 = local_20c;
          local_1e8 = fVar27;
          cVar6 = (**(code **)(*plVar5 + 0x38))(plVar5);
          local_37c = CONCAT31(local_37c._1_3_,cVar6);
          if (cVar6 == '\0') {
            fVar27 = 4.0 / (local_1e8 * 6.2831855 * local_1d8 + local_1e8 * local_1e8 * 12.566371);
            local_260 = CONCAT44(local_260._4_4_ * fVar27,(float)local_260 * fVar27);
            local_258 = local_258 * fVar27;
            local_254 = fVar27 * local_254;
          }
          cVar6 = (**(code **)(*plVar5 + 0x30))(plVar5);
          if (cVar6 == '\0') {
            fVar27 = local_340._0_4_ + 1.0;
            local_260 = CONCAT44(local_260._4_4_ * fVar27,(float)local_260 * fVar27);
            local_258 = fVar27 * local_258;
            fVar27 = powf(1.0 - local_220 * local_220 * local_340._0_4_,local_20c);
          }
          else {
            fVar27 = local_220 * local_220 * local_340._0_4_;
            fVar27 = 1.0 - fVar27 * fVar27;
            fVar27 = fVar27 * fVar27;
          }
          dVar28 = local_378 * local_378 + local_368 * local_368 + local_358 * local_358;
          if ((dVar28 != 1.0) || (NAN(dVar28))) {
            if (9.99999993922529e-09 <= dVar28) {
              dVar28 = 1.0 / SQRT(dVar28);
              local_378 = local_378 * dVar28;
              local_358 = local_358 * dVar28;
              local_368 = local_368 * dVar28;
            }
            else {
              local_368 = DAT_14c8464e0;
              local_358 = DAT_14c8464e8;
              local_378 = DAT_14c8464f0;
            }
          }
          dVar29 = (double)local_208 * local_368 + (double)local_204 * local_358 +
                   (double)local_200 * local_378;
          dVar28 = (double)local_1e0 * (dVar29 - (double)local_1e4);
          if (1.0 <= dVar28) {
            dVar28 = 1.0;
          }
          if (dVar28 <= 0.0) {
            dVar28 = 0.0;
          }
          local_254 = (float)((double)fVar27 * dVar28 * dVar28) * local_1fc;
          if ((char)local_37c == '\0') {
            local_268 = 0;
LAB_1430163c6:
            local_178[0] = (double)(**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0x4d8) + 0x2f0))();
            local_368 = (double)FUN_147225294(param_1 + 0x90,local_178,&local_260,&DAT_14a289db8);
LAB_143016445:
            pdVar19 = (double *)(plVar5 + 0x1a);
            pdVar21 = local_178;
            for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
              *pdVar21 = *pdVar19;
              pdVar19 = pdVar19 + 1;
              pdVar21 = pdVar21 + 1;
            }
            local_310 = local_178[0];
            local_358 = local_178[2];
            dVar28 = local_178[2] * local_178[2] +
                     local_178[0] * local_178[0] + local_178[1] * local_178[1];
            local_328 = local_158;
            local_340 = local_150;
            local_318 = local_148;
            dVar29 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
            local_320 = local_130;
            local_330 = local_128;
            dVar33 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
            uVar14 = -(ulonglong)(0.0 <= dVar28 + -9.99999993922529e-09);
            dVar30 = (double)(~uVar14 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar28)) & uVar14);
            uVar14 = -(ulonglong)(0.0 <= dVar29 + -9.99999993922529e-09);
            dVar28 = (double)(~uVar14 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar29)) & uVar14);
            uVar14 = -(ulonglong)(0.0 <= dVar33 + -9.99999993922529e-09);
            dVar29 = (double)(~uVar14 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar33)) & uVar14);
            local_178[0] = local_178[0] * dVar30;
            local_178[1] = local_178[1] * dVar30;
            local_178[2] = dVar30 * local_178[2];
            local_158 = local_158 * dVar28;
            local_150 = local_150 * dVar28;
            local_148 = dVar28 * local_148;
            local_138 = local_138 * dVar29;
            local_130 = local_130 * dVar29;
            local_128 = dVar29 * local_128;
            local_298 = &PTR_FUN_14a217cb0;
            local_280 = (undefined8 *)0x0;
            uStack_278 = 0;
            local_270 = local_308;
            local_378 = local_138;
            local_290 = lVar18;
            local_288 = lVar18;
            if ((char)local_37c == '\0') {
              local_3a8 = local_368;
              if (local_1d8 <= 0.0) {
                local_2b8 = (double)local_1e8;
                local_2a8 = DAT_14c846520 * local_2b8;
                dStack_2b0 = DAT_14c846518 * local_2b8;
                local_2b8 = local_2b8 * DAT_14c846510;
                local_398 = (double)((ulonglong)local_398._1_7_ << 8);
                local_3a0 = (uint)local_3a0._1_3_ << 8;
                local_3b0 = (double)CONCAT44(local_3b0._4_4_,0x18);
                local_3b8 = (double *)CONCAT44(local_3b8._4_4_,0x24);
                FUN_147cb3c8b(&local_298,&local_190,&DAT_14c8464f8,&local_2b8);
              }
              else {
                local_2b8 = (double)local_1e8;
                local_2a8 = DAT_14c846520 * local_2b8;
                dStack_2b0 = DAT_14c846518 * local_2b8;
                local_2b8 = local_2b8 * DAT_14c846510;
                dVar28 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
                if ((dVar28 != 1.0) || (dVar29 = local_130, dVar30 = local_128, NAN(dVar28))) {
                  if (9.99999993922529e-09 <= dVar28) {
                    local_378 = 1.0 / SQRT(dVar28);
                    dVar30 = local_128 * local_378;
                    dVar29 = local_130 * local_378;
                    local_378 = local_138 * local_378;
                  }
                  else {
                    local_378 = DAT_14c8464e0;
                    dVar29 = DAT_14c8464e8;
                    dVar30 = DAT_14c8464f0;
                  }
                }
                dVar28 = (double)(local_1d8 * 0.5);
                local_2c8 = dVar30 * dVar28 + local_180;
                dStack_2d0 = dVar29 * dVar28 + local_188;
                local_2d8 = local_378 * dVar28 + local_190;
                local_398 = (double)((ulonglong)local_398._1_7_ << 8);
                local_3a0 = (uint)local_3a0._1_3_ << 8;
                local_3b0._0_4_ = 0x18;
                local_3b8._0_4_ = 0x24;
                FUN_147cb3c8b(&local_298,&local_2d8,&DAT_14c8464f8,&local_2b8);
                local_2b8 = (double)local_1e8;
                local_2a8 = DAT_14c846520 * local_2b8;
                dStack_2b0 = DAT_14c846518 * local_2b8;
                local_2b8 = local_2b8 * DAT_14c846510;
                dVar28 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
                if (((dVar28 != 1.0) ||
                    (dVar30 = local_128, dVar33 = local_130, dVar29 = local_138, NAN(dVar28))) &&
                   (dVar30 = DAT_14c8464f0, dVar33 = DAT_14c8464e8, dVar29 = DAT_14c8464e0,
                   9.99999993922529e-09 <= dVar28)) {
                  dVar29 = 1.0 / SQRT(dVar28);
                  dVar30 = local_128 * dVar29;
                  dVar33 = local_130 * dVar29;
                  dVar29 = local_138 * dVar29;
                }
                dVar28 = (double)(local_1d8 * 0.5);
                local_2c8 = local_180 - dVar30 * dVar28;
                local_2d8 = local_190 - dVar29 * dVar28;
                dStack_2d0 = local_188 - dVar33 * dVar28;
                local_398 = (double)((ulonglong)local_398 & 0xffffffffffffff00);
                local_3a0 = local_3a0 & 0xffffff00;
                local_3a8 = local_368;
                local_3b0 = (double)CONCAT44(local_3b0._4_4_,0x18);
                local_3b8 = (double *)CONCAT44(local_3b8._4_4_,0x24);
                FUN_147cb3c8b(&local_298,&local_2d8,&DAT_14c8464f8,&local_2b8);
                local_358 = (double)CONCAT44(local_358._4_4_,local_1d8 * 0.5);
                local_3b0 = (double)local_1e8;
                dVar28 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
                if ((dVar28 != 1.0) ||
                   (local_2b8 = local_138, dStack_2b0 = local_130, local_2a8 = local_128,
                   NAN(dVar28))) {
                  if (9.99999993922529e-09 <= dVar28) {
                    local_2b8 = 1.0 / SQRT(dVar28);
                    local_2a8 = local_128 * local_2b8;
                    dStack_2b0 = local_130 * local_2b8;
                    local_2b8 = local_138 * local_2b8;
                  }
                  else {
                    local_2a8 = DAT_14c8464f0;
                    local_2b8 = DAT_14c8464e0;
                    dStack_2b0 = DAT_14c8464e8;
                  }
                }
                dVar28 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
                if ((dVar28 != 1.0) ||
                   (local_2d8 = local_158, dStack_2d0 = local_150, local_2c8 = local_148,
                   NAN(dVar28))) {
                  if (9.99999993922529e-09 <= dVar28) {
                    local_2d8 = 1.0 / SQRT(dVar28);
                    local_2c8 = local_148 * local_2d8;
                    dStack_2d0 = local_150 * local_2d8;
                    local_2d8 = local_158 * local_2d8;
                  }
                  else {
                    local_2c8 = DAT_14c8464f0;
                    local_2d8 = DAT_14c8464e0;
                    dStack_2d0 = DAT_14c8464e8;
                  }
                }
                dVar28 = local_178[2] * local_178[2] +
                         local_178[0] * local_178[0] + local_178[1] * local_178[1];
                if ((dVar28 != 1.0) ||
                   (local_2f8 = local_178[0], dStack_2f0 = local_178[1], local_2e8 = local_178[2],
                   NAN(dVar28))) {
                  if (9.99999993922529e-09 <= dVar28) {
                    local_2f8 = 1.0 / SQRT(dVar28);
                    local_2e8 = local_178[2] * local_2f8;
                    dStack_2f0 = local_178[1] * local_2f8;
                    local_2f8 = local_178[0] * local_2f8;
                  }
                  else {
                    local_2e8 = DAT_14c8464f0;
                    local_2f8 = DAT_14c8464e0;
                    dStack_2f0 = DAT_14c8464e8;
                  }
                }
                local_3a8 = (double)(local_1d8 * 0.5);
                local_398 = local_368;
                local_3b8 = &local_2b8;
                local_390 = 0;
                local_3a0 = 0x24;
                local_378 = local_3b0;
                FUN_147cb64d8(&local_298,&local_190,&local_2f8,&local_2d8);
              }
            }
            else {
              local_2a8 = (double)local_1d8;
              dStack_2b0 = (double)local_1e8;
              local_2b8 = 0.0;
              local_3b8 = (double *)((ulonglong)local_3b8 & 0xffffffffffffff00);
              FUN_147cb2f0b(&local_298,local_178,&local_2b8,local_368);
            }
            local_298 = &PTR_FUN_14a217cb0;
            if (local_280 != (undefined8 *)0x0) {
              piVar1 = (int *)(local_280 + 1);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                (**(code **)*local_280)(local_280,1);
              }
            }
          }
          else if (0.0 <= dVar29) {
            local_268 = plVar5[0x59];
            if (local_268 == 0) goto LAB_1430163c6;
            local_178[0] = (double)(**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0x4d8) + 0x2f0))();
            local_368 = (double)FUN_1472e3312(param_1 + 0x90,local_178,&local_260,&local_268);
            goto LAB_143016445;
          }
          local_338 = local_338 + 1;
        } while (local_338 != local_300);
      }
      *(undefined4 *)(lVar18 + 0x3798) = 0;
      if (*(int *)(lVar18 + 0x379c) != 0) {
        FUN_1472e88fe(lVar18 + 0x3790);
      }
      lVar18 = lVar18 + 0x13c10;
    } while (lVar18 != lVar24);
  }
  if ((0 < *(int *)(*(longlong *)(param_1 + 8) + 0x3928)) && (DAT_14c7609d8 != 0)) {
    if (DAT_14c846b14 == '\x01') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1))
      {
        uVar13 = FUN_14118da1c();
        bVar7 = FUN_14054d46e(uVar13,L"nothreading");
        DAT_14c83f0f8 = bVar7 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
      if (DAT_14c83f0f8 != 1) goto LAB_143017010;
    }
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8
             );
    puVar12 = (uint *)*puVar2;
    if (puVar12 != (uint *)0x0) goto LAB_143016df9;
    while( true ) {
      FUN_14472e504(puVar2);
      puVar12 = (uint *)*puVar2;
LAB_143016df9:
      puVar15 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar23 = puVar12 + 0x4000;
      uVar17 = puVar12[0x12];
      if (puVar15 + 0x11 <= puVar23) break;
      while( true ) {
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
        LOCK();
        uVar3 = *puVar12;
        *puVar12 = *puVar12 + uVar17 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar17) != 0xffffffff) break;
        puVar12 = (uint *)*puVar2;
        *puVar12 = 0xffffffff;
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar2 = puVar12;
        puVar15 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
        puVar23 = puVar12 + 0x4000;
        uVar17 = 0;
        if (puVar15 + 0x11 <= puVar23) {
          uVar17 = 1;
          goto LAB_143016e75;
        }
      }
    }
    uVar17 = uVar17 + 1;
LAB_143016e75:
    *(undefined8 **)(puVar12 + 0x10) = puVar15 + 0x12;
    puVar12[0x12] = uVar17;
    *(int *)(puVar15 + -1) = ((int)puVar15 + -8) - (int)puVar12;
    *(undefined4 *)((longlong)puVar15 + -4) = 0x88;
    puVar15[1] = 0;
    *puVar15 = &PTR_FUN_14a2f9c68;
    lVar18 = *(longlong *)(param_1 + 0x90);
    do {
      puVar15[1] = lVar18;
      LOCK();
      lVar20 = *(longlong *)(param_1 + 0x90);
      bVar25 = lVar18 == lVar20;
      if (bVar25) {
        *(longlong *)(param_1 + 0x90) = (longlong)puVar15;
        lVar20 = lVar18;
      }
      UNLOCK();
      lVar18 = lVar20;
    } while (!bVar25);
    local_3b8 = (double *)(puVar15 + 2);
    puVar15[8] = 0;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[6] = 0;
    puVar15[7] = 0;
    puVar15[4] = 0;
    puVar15[5] = 0;
    puVar15[2] = 0;
    puVar15[3] = 0;
    puVar15[0xc] = 0;
    *(undefined8 *)((longlong)puVar15 + 0x44) = 0xffffffff00000080;
    puVar15[0xd] = 0;
    puVar15[0xe] = 0;
    puVar15[0xf] = 0;
    puVar15[0x10] = 0;
    *param_2 = (longlong)local_3b8;
    FUN_142cbde22(*(longlong *)(param_1 + 8) + 0x3930,*(longlong *)(param_1 + 8),param_1,
                  CONCAT71((int7)((ulonglong)puVar23 >> 8),1));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_3d8);
  }
LAB_143017010:
  if ((local_f0 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430170b2 FUN_1430170b2 body=1287 status=ok
// SIG undefined FUN_1430170b2(void)

void FUN_1430170b2(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(*(longlong *)(param_1 + 1000) + 0x23e8) == '\x01') {
    iVar3 = *(int *)(param_1 + 0x16c);
    if (iVar3 == 4) {
      local_64 = 1;
      if (DAT_14ca46038 != 0) goto LAB_1430170f6;
    }
    else {
      local_64 = (undefined4)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      if ((iVar3 == 5) && (DAT_14ca46038 != 0)) goto LAB_1430170f6;
      if (((iVar3 == 7) || (iVar3 == 6)) && (DAT_14ca46050 != 0)) {
        uVar2 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(*(longlong *)(param_1 + 8) + 8) * 2)
        ;
        puVar12 = &DAT_14ca96aa8;
        if (DAT_14ca96af8 != (undefined4 *)0x0) {
          puVar12 = DAT_14ca96af8;
        }
        if (((((uint)puVar12[uVar2 >> 5] >> (uVar2 & 0x1f) & 1) == 0) ||
            ((int)(&DAT_14ca814b8)[(ulonglong)uVar2 * 0xf] < 3)) &&
           (cVar6 = FUN_142bb1437(param_1 + 0x98), cVar6 == '\0')) goto LAB_1430170f6;
      }
    }
  }
  local_64 = 0;
LAB_1430170f6:
  if (0 < *(int *)(param_1 + 0x3f0)) {
    uVar1 = *(undefined1 *)(param_1 + 0xd45);
    lVar11 = 0x13821;
    lVar13 = 0;
    do {
      *(undefined1 *)(*(longlong *)(param_1 + 1000) + lVar11) = uVar1;
      lVar13 = lVar13 + 1;
      lVar11 = lVar11 + 0x13c10;
    } while (lVar13 < *(int *)(param_1 + 0x3f0));
  }
  FUN_143013602(param_1,param_2);
  (**(code **)(*(longlong *)*param_6 + 8))();
  if ((char)local_64 == '\0') {
    FUN_142bb13ce(param_1,param_2,param_6,param_4);
  }
  local_60 = *(undefined8 *)(param_2 + 0x18);
  if (((*(char *)(param_4 + 0x60) == '\x01') &&
      (plVar4 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x5358), plVar4 != (longlong *)0x0)) &&
     (*plVar4 != 0)) {
    uVar10 = FUN_144735dd8(param_2,plVar4,0);
    *(undefined8 *)(param_4 + 0x18) = uVar10;
    *(undefined1 *)(param_4 + 0x20) =
         *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x5358) + 8);
  }
  FUN_140171dce(param_4,*(undefined4 *)(param_1 + 0x410));
  iVar3 = *(int *)(param_1 + 0x410);
  if ((longlong)iVar3 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x408);
    lVar13 = 0;
    do {
      lVar16 = *(longlong *)(lVar11 + lVar13);
      uVar7 = FUN_1402afc0e(param_4,lVar16);
      *(undefined4 *)(lVar16 + 0x13b84) = uVar7;
      iVar8 = 1;
      if (((*(char *)(lVar16 + 0x23f2) == '\x01') && (*(int *)(lVar16 + 0x1dd0) != 0)) &&
         (plVar4 = *(longlong **)(DAT_14cb0d2b0 + 0xfd0), plVar4 != (longlong *)0x0)) {
        iVar8 = (**(code **)(*plVar4 + 0x20))(plVar4,1);
      }
      *(uint *)(lVar16 + 0x3094) = iVar8 + (uint)(iVar8 == 0);
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar3 * 8 != lVar13);
  }
  if (((*(longlong **)(param_1 + 0x908) != (longlong *)0x0) &&
      (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x908) + 0x78))(), cVar6 != '\0')) &&
     (0 < *(int *)(param_1 + 0x3f0) && (char)local_64 == '\0')) {
    uVar9 = (**(code **)(**(longlong **)(param_1 + 0x908) + 0xb0))();
    uVar9 = uVar9 | 1;
    do {
      uVar5 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      if ((int)uVar5 < *(int *)(param_1 + 0x3f0)) {
        lVar13 = *(longlong *)(param_1 + 1000);
        lVar16 = (ulonglong)uVar5 * 0x13c10;
        lVar11 = lVar13 + lVar16;
        if (((*(char *)(lVar13 + 0x23f4 + lVar16) != '\0') || (*(char *)(lVar11 + 0x23f5) == '\x01')
            ) && ((*(int *)(lVar11 + 0x1dd0) != 0 &&
                  (lVar14 = *(longlong *)(lVar11 + 8), lVar14 != 0)))) {
          iVar3 = *(int *)(lVar11 + 0x1dd8);
          if ((((-2 < (longlong)iVar3) && (iVar3 + 1 < *(int *)(lVar14 + 0x10))) &&
              (lVar11 = *(longlong *)(*(longlong *)(lVar14 + 8) + 8 + (longlong)iVar3 * 8),
              lVar11 != 0)) && (*(int *)(lVar11 + 0x1dd0) == 2)) {
            FUN_1400eb35c(lVar11,0);
            lVar13 = *(longlong *)(param_1 + 1000);
          }
        }
        FUN_1400eb35c(lVar13 + lVar16,0);
      }
      bVar17 = 1 << ((byte)uVar5 & 0x1f) != uVar9;
      uVar9 = uVar9 ^ 1 << (uVar5 & 0x1f);
    } while (bVar17);
    local_58 = *(undefined8 *)(param_1 + 1000);
    local_4c = *(undefined4 *)(param_1 + 0x3f0);
    local_50 = 0x13c10;
    (**(code **)(**(longlong **)(param_1 + 0x908) + 0x60))
              (*(longlong **)(param_1 + 0x908),param_2,&local_58,1);
  }
  FUN_14176e1f2(param_1);
  FUN_142f84a2e(param_2,param_1 + 0xe0,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x3608),
                *(longlong *)(param_1 + 8) + 0x3610);
  plVar4 = *(longlong **)(param_1 + 8);
  if (((plVar4 != (longlong *)0x0) && (plVar4[0x9a4] != 0)) &&
     ((*(byte *)(param_1 + 0xf2) & 2) != 0)) {
    if (*(code **)(*plVar4 + 0x2c0) != (code *)&LAB_1447ccd94) {
      (**(code **)(*plVar4 + 0x2c0))();
    }
    if ((DAT_14c760dd5 == '\x01') && (0 < *(int *)(DAT_14ca5c7b8 + 4))) {
      FUN_14024332a(param_1,local_60,param_2);
    }
  }
  lVar11 = (longlong)*(int *)(param_1 + 0x3f0);
  if (0 < lVar11) {
    lVar13 = lVar11 * 0x13c10;
    uVar15 = lVar11 + 1;
    do {
      lVar13 = lVar13 + -0x13c10;
      lVar11 = *(longlong *)(param_1 + 1000) + lVar13;
      FUN_142ebc2f0(lVar11);
      FUN_1406d601c(param_2,lVar11,0,0);
      FUN_1400eb35c(lVar11,0);
      uVar15 = uVar15 - 1;
    } while (1 < uVar15);
  }
  if ((longlong)*(int *)(param_1 + 0x400) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x3f8);
    lVar13 = (longlong)*(int *)(param_1 + 0x400) * 0x3c0 + lVar11;
    do {
      if ((longlong)*(int *)(lVar11 + 0x360) != 0) {
        lVar16 = *(longlong *)(lVar11 + 0x358);
        lVar14 = (longlong)*(int *)(lVar11 + 0x360) * 0x13c10;
        do {
          FUN_1400eb35c(lVar16,0);
          lVar16 = lVar16 + 0x13c10;
          lVar14 = lVar14 + -0x13c10;
        } while (lVar14 != 0);
      }
      lVar11 = lVar11 + 0x3c0;
    } while (lVar11 != lVar13);
  }
  (**(code **)(*(longlong *)*param_6 + 0x10))();
  if ((char)local_64 == '\0') {
    FUN_142bb13ce(param_1,param_2,param_6,param_4);
  }
  FUN_143015bf6(param_1,param_6 + 1);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430175ba FUN_1430175ba body=551 status=ok
// SIG undefined FUN_1430175ba(void)

void FUN_1430175ba(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  
  if (0 < *(int *)(param_1 + 0x3f0)) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar7 = 0;
    do {
      lVar8 = lVar7 * 0x13c10 + *(longlong *)(param_1 + 1000);
      if ((&DAT_14ca814b8)[(ulonglong)*(ushort *)(param_1 + 0x8a8) * 0xf] == 1) {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x3860);
        lVar6 = *(longlong *)(lVar8 + 0x13718);
        if (lVar6 != lVar5) {
          *(longlong *)(lVar8 + 0x13718) = lVar5;
          goto LAB_143017636;
        }
      }
      else {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x3858);
        lVar6 = *(longlong *)(lVar8 + 0x13710);
        if (lVar6 != lVar5) {
          *(longlong *)(lVar8 + 0x13710) = lVar5;
LAB_143017636:
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
          if (lVar6 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar6 + 8);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar2 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
        }
      }
      *(undefined8 *)(lVar8 + 0x13700) = 0;
      *(undefined4 *)(lVar8 + 0x13708) = 0;
      if (((*(byte *)(*(longlong *)(lVar8 + 8) + 0x50) & 1) != 0) &&
         (*(char *)(lVar8 + 0x23eb) == '\0')) {
        *(undefined4 *)(lVar8 + 0x13700) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x3850);
        *(undefined4 *)(lVar8 + 0x13704) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x3854);
        if (0 < *(int *)(lVar3 + 0x3848)) {
          fVar9 = 0.0;
          lVar5 = 0;
          lVar6 = 0;
          do {
            lVar4 = *(longlong *)(lVar3 + 0x3840);
            fVar10 = (float)(((double)*(float *)(lVar4 + 0x14 + lVar5) +
                             (double)*(float *)(lVar4 + 8 + lVar5)) * *(double *)(lVar8 + 0xa00) +
                             ((double)*(float *)(lVar4 + 0x10 + lVar5) +
                             (double)*(float *)(lVar4 + 4 + lVar5)) * *(double *)(lVar8 + 0x9e0) +
                             ((double)*(float *)(lVar4 + 0xc + lVar5) +
                             (double)*(float *)(lVar4 + lVar5)) * *(double *)(lVar8 + 0x9c0) +
                             *(double *)(lVar8 + 0xa20) + (double)*(float *)(lVar4 + 0x68 + lVar5));
            if (fVar9 <= fVar10) {
              fVar9 = fVar10;
            }
            *(float *)(lVar8 + 0x13708) = fVar9;
            lVar6 = lVar6 + 1;
            lVar5 = lVar5 + 0xb0;
          } while (lVar6 < *(int *)(lVar3 + 0x3848));
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 0x3f0));
  }
  return;
}



// FUNCTION 1430177e2 FUN_1430177e2 body=491 status=ok
// SIG undefined FUN_1430177e2(void)

void FUN_1430177e2(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  ushort uVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*(longlong *)*param_5 + 0x20))();
  if (param_5[3] != 0) {
    FUN_1400daade(param_5[3] + 0x198);
  }
  lVar6 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar6 + 0x3928) < 1) goto LAB_143017892;
  if (DAT_14c7609d8 != 0) {
    if (DAT_14c846b14 != '\x01') goto LAB_143017892;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        uVar4 = FUN_14118da1c();
        bVar3 = FUN_14054d46e(uVar4,L"nothreading");
        DAT_14c83f0f8 = bVar3 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    if (DAT_14c83f0f8 != 0) goto LAB_143017892;
    lVar6 = *(longlong *)(param_1 + 8);
  }
  FUN_142cbf182(lVar6 + 0x3930,lVar6,param_1,1);
LAB_143017892:
  lVar6 = param_5[1];
  if (lVar6 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    FUN_14009fd82(DAT_14c82b500,lVar6,DAT_14c7585d4);
    local_60 = lVar6 + 0x68;
    local_68 = lVar6 + 0x58;
    FUN_142cbe1b6(lVar2 + 0x3930,lVar2,param_1,lVar6 + 8);
  }
  FUN_14482dc26(param_1,*(undefined8 *)(param_2 + 0x18));
  FUN_1430b1c07(&local_50,param_1);
  *(undefined4 *)(param_1 + 0xe78) = local_50;
  *(undefined4 *)(param_1 + 0xe7c) = uStack_4c;
  *(undefined4 *)(param_1 + 0xe80) = uStack_48;
  *(undefined4 *)(param_1 + 0xe84) = uStack_44;
  FUN_1430175ba(param_1);
  uVar1 = *(ushort *)(param_1 + 0x8a8);
  puVar5 = &DAT_14ca96aa8;
  if (DAT_14ca96af8 != (undefined4 *)0x0) {
    puVar5 = DAT_14ca96af8;
  }
  if ((((uint)puVar5[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) != 0) &&
     (2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf])) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430179fa FUN_1430179fa body=66 status=ok
// SIG undefined FUN_1430179fa(void)

longlong FUN_1430179fa(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_2 + 0x38) + 0x10))();
    if (*plVar1 != 0) {
      lVar2 = FUN_1447ebf30(param_1,*plVar1,L"ViewFamilyDepthTexture",0);
      *(undefined4 *)(lVar2 + 0x58) = 0x8000;
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 143017a3c FUN_143017a3c body=643 status=ok
// SIG undefined FUN_143017a3c(void)

ulonglong * FUN_143017a3c(ulonglong *param_1,longlong param_2,longlong *param_3,ulonglong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  longlong local_74;
  undefined4 uStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 uStack_60;
  uint local_5c;
  int6 local_58;
  undefined2 uStack_52;
  undefined8 uStack_50;
  uint local_48;
  ulonglong local_40;
  
  uVar3 = uStack_50;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_3;
  if (lVar1 == 0) {
    *param_1 = *param_4;
    param_1[1] = param_4[1];
    param_1[2] = param_4[2];
    goto LAB_143017c5a;
  }
  uVar2 = *(ulonglong *)(lVar1 + 0x38);
  uVar8 = *param_4;
  if (*(char *)(uVar2 + 0x92) == '\0') {
    if ((uVar8 != 0) &&
       (((int)param_4[2] != (int)param_4[1] ||
        (*(int *)((longlong)param_4 + 0x14) != *(int *)((longlong)param_4 + 0xc)))))
    goto LAB_143017bdf;
    uVar9 = (undefined4)param_3[1];
    uVar10 = *(undefined4 *)((longlong)param_3 + 0xc);
    uVar11 = (undefined4)param_3[2];
    uVar12 = *(undefined4 *)((longlong)param_3 + 0x14);
    *param_1 = uVar2;
  }
  else {
    if (uVar8 == 0) {
      local_78 = *(undefined4 *)(uVar2 + 0x68);
      local_74 = *(undefined8 *)(uVar2 + 0x6c);
      uStack_6c = *(undefined4 *)(uVar2 + 0x74);
      iStack_68 = *(undefined4 *)(uVar2 + 0x78);
      local_80 = *(ulonglong *)(uVar2 + 0x60) | 1;
      uStack_50 = (ulonglong)*(ushort *)(uVar2 + 0x93) << 0x18;
      _local_58 = CONCAT26(1,(uint6)*(ushort *)(uVar2 + 0x8c) << 0x20);
      uStack_50 = CONCAT62(uStack_50._2_6_,*(undefined2 *)(uVar2 + 0x90));
      uVar4 = uStack_50;
      uStack_50._6_2_ = SUB82(uVar3,6);
      uStack_50._0_6_ = CONCAT15(*(undefined1 *)(uVar2 + 0x95),(int5)uVar4);
      iVar5 = (int)*(undefined8 *)(uVar2 + 0x84);
      local_5c = DAT_14ca84e40;
      if (iVar5 < DAT_14ca84e40) {
        local_5c = iVar5;
      }
      if ((int)local_5c < 2) {
        local_5c = 1;
      }
      iVar6 = (int)((ulonglong)*(undefined8 *)(uVar2 + 0x84) >> 0x20);
      iVar5 = DAT_14ca84e40;
      if (iVar6 < DAT_14ca84e40) {
        iVar5 = iVar6;
      }
      iStack_64 = (int)*(undefined8 *)(uVar2 + 0x7c);
      uStack_60 = (undefined4)((ulonglong)*(undefined8 *)(uVar2 + 0x7c) >> 0x20);
      if (iVar5 < 2) {
        iVar5 = 1;
      }
      _local_58 = CONCAT44(stack0xffffffffffffffac,iVar5);
      uVar8 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar7 = uVar8 + 0x120;
      if (*(ulonglong *)(param_2 + 0x78) < uVar7) {
        FUN_140023dd8((longlong *)(param_2 + 0x70),0x128);
        uVar8 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar7 = uVar8 + 0x120;
      }
      *(ulonglong *)(param_2 + 0x70) = uVar7;
      FUN_1456bbb8c(uVar8,L"CopyToScreenPassTexture2D",&local_80,0);
      iVar5 = *(int *)(param_2 + 0x180);
      *(uint *)(param_2 + 0x180) = iVar5 + 1U;
      if (*(uint *)(param_2 + 0x184) < iVar5 + 1U) {
        FUN_14472c0f6(param_2 + 0x178,iVar5);
      }
      *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar5 * 8) = uVar8;
      *(int *)(uVar8 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
    }
LAB_143017bdf:
    iStack_68 = (int)param_3[1];
    iStack_64 = *(int *)((longlong)param_3 + 0xc);
    local_74 = param_3[1];
    _local_58 = 0x100000000;
    uStack_50 = 0;
    local_5c = (uint)*(ushort *)(lVar1 + 0x2c);
    local_48 = (uint)*(byte *)(uVar2 + 0x90);
    uStack_60 = 0;
    uStack_6c = 0;
    local_80 = CONCAT44(*(int *)((longlong)param_3 + 0x14) - iStack_64,(int)param_3[2] - iStack_68);
    local_78 = 1;
    FUN_1400e8d41(param_2,uVar2,uVar8);
    uVar9 = (undefined4)param_3[1];
    uVar10 = *(undefined4 *)((longlong)param_3 + 0xc);
    uVar11 = (undefined4)param_3[2];
    uVar12 = *(undefined4 *)((longlong)param_3 + 0x14);
    *param_1 = uVar8;
  }
  *(undefined4 *)(param_1 + 1) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar10;
  *(undefined4 *)(param_1 + 2) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar12;
LAB_143017c5a:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143017cc0 FUN_143017cc0 body=421 status=ok
// SIG undefined FUN_143017cc0(void)

ulonglong *
FUN_143017cc0(ulonglong *param_1,longlong param_2,longlong *param_3,undefined1 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 local_64;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined4 local_4e;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_3;
  uVar2 = param_3[1];
  local_4e = *(undefined4 *)(lVar1 + 0x92);
  local_54 = *(undefined4 *)(lVar1 + 0x8c);
  local_50 = *(undefined1 *)(lVar1 + 0x90);
  local_78 = *(undefined4 *)(lVar1 + 0x68);
  local_74 = *(undefined4 *)(lVar1 + 0x6c);
  uStack_70 = *(undefined4 *)(lVar1 + 0x70);
  uStack_6c = *(undefined4 *)(lVar1 + 0x74);
  uStack_68 = *(undefined4 *)(lVar1 + 0x78);
  local_64 = *(undefined8 *)(lVar1 + 0x7c);
  local_80 = (*(ulonglong *)(lVar1 + 0x60) & 0xfffffffff7fdeffc) + 1;
  uVar3 = param_3[2];
  local_4f = 1;
  iVar4 = (int)*(undefined8 *)(lVar1 + 0x84);
  local_5c = DAT_14ca84e40;
  if (iVar4 < DAT_14ca84e40) {
    local_5c = iVar4;
  }
  if (local_5c < 2) {
    local_5c = 1;
  }
  iVar4 = (int)((ulonglong)*(undefined8 *)(lVar1 + 0x84) >> 0x20);
  local_58 = DAT_14ca84e40;
  if (iVar4 < DAT_14ca84e40) {
    local_58 = iVar4;
  }
  if (local_58 < 2) {
    local_58 = 1;
  }
  uVar6 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar5 = uVar6 + 0x120;
  if (*(ulonglong *)(param_2 + 0x78) < uVar5) {
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x128);
    uVar6 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar5 = uVar6 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar5;
  FUN_1456bbb8c(uVar6,param_5,&local_80,0);
  iVar4 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar4 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar4 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar4);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar4 * 8) = uVar6;
  *(int *)(uVar6 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  *param_1 = uVar6;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  *(undefined1 *)(param_1 + 3) = param_4;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143017e66 FUN_143017e66 body=166 status=ok
// SIG undefined FUN_143017e66(void)

void FUN_143017e66(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 uVar5;
  
  if (param_2 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar4 = (longlong *)(param_3 + 0x4d8);
    if (*(int *)(param_3 + 0x3024) == 2) {
      plVar4 = (longlong *)(param_3 + 0x30f8);
    }
    lVar1 = *plVar4;
    lVar2 = plVar4[1];
    uVar5 = 1;
    if ((**(longlong **)(*(longlong *)(param_3 + 8) + 8) == param_3) &&
       (*(char *)(*(longlong *)(param_3 + 8) + 200) == '\0')) {
      if (((int)DAT_14c967818 == (int)lVar1) &&
         (((iVar3 = (int)((ulonglong)lVar1 >> 0x20), DAT_14c967818._4_4_ == iVar3 &&
           ((int)lVar2 - (int)lVar1 == *(int *)(param_2 + 0x84))) &&
          ((int)((ulonglong)lVar2 >> 0x20) - iVar3 == *(int *)(param_2 + 0x88))))) {
        uVar5 = 0;
      }
      else {
        uVar5 = 2;
      }
    }
    *param_1 = param_2;
    param_1[1] = lVar1;
    param_1[2] = lVar2;
    *(undefined1 *)(param_1 + 3) = uVar5;
  }
  return;
}



// FUNCTION 143017f0c FUN_143017f0c body=2368 status=ok
// SIG undefined FUN_143017f0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143017f0c(longlong param_1,int *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7,ulonglong param_8)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  ushort *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar26;
  bool bVar27;
  undefined1 in_XMM0 [16];
  undefined1 auVar28 [16];
  undefined1 auStack_1e8 [32];
  wchar_t *local_1c8;
  wchar_t *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  code *local_1a8;
  code *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  undefined8 local_170;
  longlong local_160;
  undefined8 local_158;
  longlong local_150;
  longlong local_148;
  ulonglong *local_140;
  ulonglong local_138;
  ulonglong *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_f9;
  undefined8 local_f8;
  int local_f0;
  int local_e8;
  int iStack_e4;
  undefined4 local_e0;
  int iStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  iVar22 = (int)param_6;
  iVar17 = (int)((ulonglong)param_6 >> 0x20);
  iVar19 = (int)param_5;
  iVar14 = (int)((ulonglong)param_5 >> 0x20);
  local_160 = param_1;
  if ((*(char *)(param_3 + 0x93) == *(char *)(param_4 + 0x93)) &&
     (iVar17 == (int)(param_8 >> 0x20) && iVar22 == (int)param_8)) {
    local_e0 = DAT_14c9a52a0;
    local_e8 = (int)DAT_14c9a5298;
    iStack_e4 = (int)((ulonglong)DAT_14c9a5298 >> 0x20);
    uStack_d4 = DAT_14c9a52a0;
    local_c8 = DAT_14c9a52a0;
    auVar28 = pmovsxbq(in_XMM0,0x100);
    uStack_c4 = auVar28._0_4_;
    uStack_c0 = auVar28._4_8_;
    iStack_b8 = auVar28._12_4_;
    iStack_b4 = 0;
    iStack_b0 = 1;
    local_d0 = param_7;
    if (((int)DAT_14c967818 != iVar22) || (DAT_14c967818._4_4_ != iVar17)) {
      local_e0 = 1;
      local_e8 = iVar22;
      iStack_e4 = iVar17;
    }
    iStack_dc = iVar19;
    iStack_d8 = iVar14;
    FUN_1400e8d41(param_1,param_3,param_4,&local_e8);
  }
  else {
    if (DAT_14c967818._4_4_ == iVar17 && (int)DAT_14c967818 == iVar22) {
      param_6 = *(undefined8 *)(param_3 + 0x84);
    }
    bVar27 = true;
    iVar17 = (int)((ulonglong)param_6 >> 0x20);
    if ((DAT_14c967818._4_4_ == (int)((ulonglong)param_7 >> 0x20) &&
         (int)DAT_14c967818 == (int)param_7) && ((int)param_6 == *(int *)(param_4 + 0x84))) {
      bVar27 = iVar17 != *(int *)(param_4 + 0x88);
    }
    local_158 = CONCAT71(local_158._1_7_,bVar27);
    local_108 = *(undefined8 *)(param_3 + 0x84);
    local_138 = (param_8 & 0xffffffff00000000) + param_7 & 0xffffffff00000000;
    local_110 = *(undefined8 *)(param_4 + 0x84);
    uVar13 = *(undefined8 *)
              (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*param_2 * 2) * 8)
    ;
    local_150 = param_3;
    local_148 = param_4;
    uVar9 = FUN_1415d5ab2();
    FUN_1448e935e(uVar13,&local_e8,uVar9);
    FUN_1415d5ab2();
    lVar8 = CONCAT44(iStack_e4,local_e8);
    local_118 = CONCAT44(iStack_dc,local_e0);
    puVar1 = (ulonglong *)(local_160 + 0x70);
    puVar23 = (undefined8 *)(*(longlong *)(local_160 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar10 = puVar23 + 0x24;
    if (*(undefined8 **)(local_160 + 0x78) < puVar10) {
      FUN_140023dd8(puVar1,0x130);
      puVar23 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar10 = puVar23 + 0x24;
    }
    lVar12 = local_150;
    local_138 = local_138 + (uint)((int)param_8 + (int)param_7);
    *puVar1 = (ulonglong)puVar10;
    *puVar23 = &PTR_FUN_14a241a78;
    puVar10 = puVar23 + 2;
    *(undefined1 (*) [16])(puVar23 + 2) = (undefined1  [16])0x0;
    lVar11 = 0x32;
    do {
      *(undefined1 (*) [16])((longlong)puVar23 + lVar11 + -0x12) = (undefined1  [16])0x0;
      *(undefined4 *)((longlong)puVar23 + lVar11 + -2) = 0xffff0000;
      lVar11 = lVar11 + 0x18;
    } while (lVar11 != 0xf2);
    *(undefined4 *)((longlong)puVar23 + 0xf4) = 0;
    *(undefined1 (*) [16])(puVar23 + 0x1c) = (undefined1  [16])0x0;
    *(undefined2 *)(puVar23 + 0x1e) = 0;
    *(undefined4 *)(puVar23 + 0x1f) = 0xffffffff;
    *(undefined4 *)((longlong)puVar23 + 0xfc) = 0xffffffff;
    *(undefined4 *)(puVar23 + 0x20) = 0xffffffff;
    *(undefined4 *)((longlong)puVar23 + 0x104) = 0xffffffff;
    *(undefined4 *)(puVar23 + 0x21) = 0;
    *(undefined2 *)((longlong)puVar23 + 0x10c) = 0;
    puVar23[0x22] = 0;
    plVar2 = (longlong *)(local_160 + 0x98);
    iVar22 = *(int *)(local_160 + 0xa0);
    *(uint *)(local_160 + 0xa0) = iVar22 + 1U;
    if (*(uint *)(local_160 + 0xa4) < iVar22 + 1U) {
      FUN_1448cfae8(plVar2,iVar22);
    }
    *(undefined8 **)(*plVar2 + (longlong)iVar22 * 8) = puVar23;
    puVar23[2] = lVar12;
    puVar23[3] = DAT_14c9c0d80;
    puVar23[4] = local_148;
    puVar23[5] = 0;
    *(undefined1 *)(puVar23 + 6) = (undefined1)local_158;
    *(undefined1 *)((longlong)puVar23 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar23 + 0x32) = 0xffff;
    local_148 = (longlong)*param_2;
    local_f0 = param_2[3];
    local_f8 = *(undefined8 *)(param_2 + 1);
    uVar13 = *(undefined8 *)
              (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + local_148 * 2) * 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
      FUN_145e1a792();
      local_180 = &LAB_14712ac08;
      local_188 = &LAB_14712ac0c;
      local_190 = &LAB_1472e3912;
      local_198 = &LAB_1472e3916;
      local_1a0 = FUN_1472e391a;
      local_1a8 = FUN_1472e3942;
      local_1c0 = L"ScreenPassVS";
      local_1c8 = L"/Engine/Private/ScreenPass.usf";
      local_170 = 0;
      local_178 = 0xe0;
      local_1b0 = 1;
      local_1b8 = 0;
      FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670);
      _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430179ee);
      _Init_thread_footer(&DAT_14ca4b780);
    }
    FUN_1448e935e(uVar13,&local_e8,&DAT_14ca4b6d8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
      FUN_145e1a792();
      local_180 = &LAB_14712ac08;
      local_188 = &LAB_14712ac0c;
      local_190 = &LAB_1472e3912;
      local_198 = &LAB_1472e3916;
      local_1a0 = FUN_1472e391a;
      local_1a8 = FUN_1472e3942;
      local_1c0 = L"ScreenPassVS";
      local_1c8 = L"/Engine/Private/ScreenPass.usf";
      local_170 = 0;
      local_178 = 0xe0;
      local_1b0 = 1;
      local_1b8 = 0;
      FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670);
      _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430179ee);
      _Init_thread_footer(&DAT_14ca4b780);
    }
    local_128 = CONCAT44(iStack_e4,local_e8);
    local_120 = CONCAT44(iStack_dc,local_e0);
    local_150 = DAT_14c9c0d50;
    local_158 = DAT_14c9c0d98;
    lVar12 = FUN_1404e1e84();
    lVar12 = *(longlong *)(lVar12 + 0x48);
    lVar11 = (longlong)*(int *)(lVar12 + 0x38);
    if (0 < lVar11) {
      local_130 = (ulonglong *)(lVar8 + 0x30);
      local_140 = (ulonglong *)(lVar8 + 0x20);
      lVar20 = 0;
      iVar22 = 0;
      iVar26 = 0;
      iVar15 = 0;
      do {
        lVar6 = *(longlong *)(lVar12 + 0x30);
        bVar3 = *(byte *)(lVar6 + 2 + lVar20 * 4);
        if (bVar3 < 0x14) {
          uVar4 = *(ushort *)(lVar6 + lVar20 * 4);
          uVar24 = (ulonglong)uVar4;
          iVar25 = iVar26;
          if ((0x67200U >> (bVar3 & 0x1f) & 1) == 0) {
            if (bVar3 == 0x13) {
              if (iVar15 < *(int *)(lVar8 + 0x38)) {
                uVar7 = *local_130;
                uVar21 = ((longlong)uVar7 >> 0x18) + (longlong)local_130;
                if ((uVar7 & 1) == 0) {
                  uVar21 = uVar7;
                }
                if (uVar4 == *(ushort *)(uVar21 + 2 + (longlong)iVar15 * 4)) {
                  iVar15 = iVar15 + 1;
                  goto LAB_143018438;
                }
              }
              if ((*(longlong *)((longlong)puVar10 + uVar24) != 0) &&
                 ((*(byte *)((longlong)puVar23 + uVar24 + 0x18) & 2) == 0)) goto LAB_143018430;
            }
          }
          else {
            iVar5 = *(int *)(lVar8 + 0x18);
            if (iVar22 < iVar5) {
              uVar7 = *(ulonglong *)(lVar8 + 0x10);
              uVar21 = ((longlong)uVar7 >> 0x18) + lVar8 + 0x10;
              if ((uVar7 & 1) == 0) {
                uVar21 = uVar7;
              }
              puVar16 = (ushort *)((longlong)iVar22 * 4 + uVar21);
              iVar18 = iVar22;
              do {
                if (uVar4 <= *puVar16) {
                  iVar22 = iVar18;
                  if (*puVar16 == uVar4) goto LAB_143018438;
                  break;
                }
                iVar18 = iVar18 + 1;
                puVar16 = puVar16 + 2;
                iVar22 = iVar5;
              } while (iVar5 != iVar18);
            }
            iVar5 = *(int *)(lVar8 + 0x28);
            if (iVar26 < iVar5) {
              uVar7 = *local_140;
              uVar21 = ((longlong)uVar7 >> 0x18) + (longlong)local_140;
              if ((uVar7 & 1) == 0) {
                uVar21 = uVar7;
              }
              puVar16 = (ushort *)((longlong)iVar26 * 6 + uVar21);
              do {
                if (uVar4 <= *puVar16) {
                  iVar25 = iVar26;
                  if (*puVar16 == uVar4) goto LAB_143018438;
                  break;
                }
                iVar26 = iVar26 + 1;
                puVar16 = puVar16 + 3;
                iVar25 = iVar5;
              } while (iVar5 != iVar26);
            }
LAB_143018430:
            *(undefined8 *)((longlong)puVar10 + uVar24) = 0;
            iVar26 = iVar25;
          }
        }
LAB_143018438:
        lVar20 = lVar20 + 1;
      } while (lVar20 != lVar11);
    }
    local_e8 = (int)local_148;
    iStack_e4 = (int)local_f8;
    local_e0 = (undefined4)((ulonglong)local_f8 >> 0x20);
    iStack_dc = local_f0;
    iStack_d8 = (int)local_110;
    uStack_d4 = (undefined4)((ulonglong)local_110 >> 0x20);
    local_d0 = param_7;
    local_c8 = (undefined4)local_138;
    uStack_c4 = (undefined4)(local_138 >> 0x20);
    uStack_c0 = local_108;
    local_a8 = local_128;
    local_a0 = local_120;
    local_90 = local_118;
    local_88 = local_150;
    local_80 = local_158;
    local_78 = DAT_14ca94df8;
    local_70 = 0;
    local_60 = local_118;
    local_50 = 0;
    iStack_b8 = iVar19;
    iStack_b4 = iVar14;
    iStack_b0 = (int)param_6 + iVar19;
    iStack_ac = iVar17 + iVar14;
    local_58 = puVar10;
    uVar13 = FUN_1404e1e84();
    local_1c0 = (wchar_t *)&local_e8;
    local_1c8 = (wchar_t *)CONCAT62(local_1c8._2_6_,1);
    FUN_1403d83cc(local_160,&local_f9,uVar13,puVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14301884d FUN_14301884d body=1949 status=ok
// SIG undefined FUN_14301884d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301884d(longlong param_1,int *param_2,longlong *param_3,longlong *param_4,
                  undefined1 param_5)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  ushort *puVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  undefined1 auStack_1f8 [32];
  wchar_t *local_1d8;
  wchar_t *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  code *local_1b8;
  code *local_1b0;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 *local_178;
  longlong local_170;
  ulonglong *local_168;
  ulonglong *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  undefined1 local_f9;
  undefined8 local_f8;
  int local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  int iStack_dc;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_108 = param_3[1];
  local_110 = param_3[2];
  local_118 = *(undefined8 *)(*param_3 + 0x84);
  local_120 = param_4[1];
  local_128 = param_4[2];
  local_130 = *(undefined8 *)(*param_4 + 0x84);
  uVar12 = *(undefined8 *)
            (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*param_2 * 2) * 8);
  uVar9 = FUN_1415d5ab2();
  FUN_1448e935e(uVar12,&local_e8,uVar9);
  FUN_1415d5ab2();
  lVar8 = CONCAT44(uStack_e4,local_e8);
  local_138 = CONCAT44(iStack_dc,local_e0);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar16 + 0x24;
  local_170 = param_1;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(puVar1,0x130);
    puVar16 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar16 + 0x24;
  }
  *puVar1 = (ulonglong)puVar10;
  *puVar16 = &PTR_FUN_14a241a78;
  puVar10 = puVar16 + 2;
  *(undefined1 (*) [16])(puVar16 + 2) = (undefined1  [16])0x0;
  lVar11 = 0x32;
  do {
    *(undefined1 (*) [16])((longlong)puVar16 + lVar11 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar16 + lVar11 + -2) = 0xffff0000;
    lVar11 = lVar11 + 0x18;
  } while (lVar11 != 0xf2);
  *(undefined4 *)((longlong)puVar16 + 0xf4) = 0;
  *(undefined1 (*) [16])(puVar16 + 0x1c) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar16 + 0x1e) = 0;
  *(undefined4 *)(puVar16 + 0x1f) = 0xffffffff;
  *(undefined4 *)((longlong)puVar16 + 0xfc) = 0xffffffff;
  *(undefined4 *)(puVar16 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)puVar16 + 0x104) = 0xffffffff;
  *(undefined4 *)(puVar16 + 0x21) = 0;
  *(undefined2 *)((longlong)puVar16 + 0x10c) = 0;
  puVar16[0x22] = 0;
  plVar2 = (longlong *)(local_170 + 0x98);
  iVar17 = *(int *)(local_170 + 0xa0);
  *(uint *)(local_170 + 0xa0) = iVar17 + 1U;
  if (*(uint *)(local_170 + 0xa4) < iVar17 + 1U) {
    FUN_1448cfae8(plVar2,iVar17);
  }
  *(undefined8 **)(*plVar2 + (longlong)iVar17 * 8) = puVar16;
  puVar16[2] = *param_3;
  puVar16[3] = DAT_14c9c0d80;
  lVar11 = param_4[3];
  puVar16[4] = *param_4;
  puVar16[5] = 0;
  *(char *)(puVar16 + 6) = (char)lVar11;
  *(undefined1 *)((longlong)puVar16 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar16 + 0x32) = 0xffff;
  *(undefined1 *)((longlong)puVar16 + 0x10d) = param_5;
  local_140 = (longlong)*param_2;
  local_f0 = param_2[3];
  local_f8 = *(undefined8 *)(param_2 + 1);
  uVar12 = *(undefined8 *)
            (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + local_140 * 2) * 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
    FUN_145e1a792();
    local_190 = &LAB_14712ac08;
    local_198 = &LAB_14712ac0c;
    local_1a0 = &LAB_1472e3912;
    local_1a8 = &LAB_1472e3916;
    local_1b0 = FUN_1472e391a;
    local_1b8 = FUN_1472e3942;
    local_1d0 = L"ScreenPassVS";
    local_1d8 = L"/Engine/Private/ScreenPass.usf";
    local_180 = 0;
    local_188 = 0xe0;
    local_1c0 = 1;
    local_1c8 = 0;
    FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670);
    _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1430179ee);
    _Init_thread_footer(&DAT_14ca4b780);
  }
  FUN_1448e935e(uVar12,&local_e8,&DAT_14ca4b6d8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
    FUN_145e1a792();
    local_190 = &LAB_14712ac08;
    local_198 = &LAB_14712ac0c;
    local_1a0 = &LAB_1472e3912;
    local_1a8 = &LAB_1472e3916;
    local_1b0 = FUN_1472e391a;
    local_1b8 = FUN_1472e3942;
    local_1d0 = L"ScreenPassVS";
    local_1d8 = L"/Engine/Private/ScreenPass.usf";
    local_180 = 0;
    local_188 = 0xe0;
    local_1c0 = 1;
    local_1c8 = 0;
    FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670);
    _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1430179ee);
    _Init_thread_footer(&DAT_14ca4b780);
  }
  local_158 = CONCAT44(uStack_e4,local_e8);
  local_148 = DAT_14c9c0d50;
  local_150 = DAT_14c9c0d98;
  lVar11 = FUN_1404e1e84();
  lVar11 = *(longlong *)(lVar11 + 0x48);
  lVar13 = (longlong)*(int *)(lVar11 + 0x38);
  if (0 < lVar13) {
    local_160 = (ulonglong *)(lVar8 + 0x30);
    local_168 = (ulonglong *)(lVar8 + 0x20);
    lVar19 = 0;
    iVar17 = 0;
    iVar23 = 0;
    iVar14 = 0;
    do {
      lVar6 = *(longlong *)(lVar11 + 0x30);
      bVar3 = *(byte *)(lVar6 + 2 + lVar19 * 4);
      if (bVar3 < 0x14) {
        uVar4 = *(ushort *)(lVar6 + lVar19 * 4);
        uVar21 = (ulonglong)uVar4;
        iVar22 = iVar23;
        if ((0x67200U >> (bVar3 & 0x1f) & 1) == 0) {
          if (bVar3 == 0x13) {
            if (iVar14 < *(int *)(lVar8 + 0x38)) {
              uVar7 = *local_160;
              uVar15 = ((longlong)uVar7 >> 0x18) + (longlong)local_160;
              if ((uVar7 & 1) == 0) {
                uVar15 = uVar7;
              }
              if (uVar4 == *(ushort *)(uVar15 + 2 + (longlong)iVar14 * 4)) {
                iVar14 = iVar14 + 1;
                goto LAB_143018be7;
              }
            }
            if ((*(longlong *)((longlong)puVar10 + uVar21) != 0) &&
               ((*(byte *)((longlong)puVar16 + uVar21 + 0x18) & 2) == 0)) goto LAB_143018bdf;
          }
        }
        else {
          iVar5 = *(int *)(lVar8 + 0x18);
          if (iVar17 < iVar5) {
            uVar7 = *(ulonglong *)(lVar8 + 0x10);
            uVar15 = ((longlong)uVar7 >> 0x18) + lVar8 + 0x10;
            if ((uVar7 & 1) == 0) {
              uVar15 = uVar7;
            }
            puVar20 = (ushort *)(uVar15 + (longlong)iVar17 * 4);
            iVar18 = iVar17;
            do {
              if (uVar4 <= *puVar20) {
                iVar17 = iVar18;
                if (*puVar20 == uVar4) goto LAB_143018be7;
                break;
              }
              iVar18 = iVar18 + 1;
              puVar20 = puVar20 + 2;
              iVar17 = iVar5;
            } while (iVar5 != iVar18);
          }
          iVar5 = *(int *)(lVar8 + 0x28);
          if (iVar23 < iVar5) {
            uVar7 = *local_168;
            uVar15 = ((longlong)uVar7 >> 0x18) + (longlong)local_168;
            if ((uVar7 & 1) == 0) {
              uVar15 = uVar7;
            }
            puVar20 = (ushort *)(uVar15 + (longlong)iVar23 * 6);
            do {
              local_178 = puVar10;
              if (uVar4 <= *puVar20) {
                iVar22 = iVar23;
                if (*puVar20 == uVar4) goto LAB_143018be7;
                break;
              }
              iVar23 = iVar23 + 1;
              puVar20 = puVar20 + 3;
              iVar22 = iVar5;
            } while (iVar5 != iVar23);
          }
LAB_143018bdf:
          *(undefined8 *)((longlong)puVar10 + uVar21) = 0;
          iVar23 = iVar22;
        }
      }
LAB_143018be7:
      lVar19 = lVar19 + 1;
    } while (lVar19 != lVar13);
  }
  local_e8 = (undefined4)local_140;
  uStack_e4 = (undefined4)local_f8;
  local_e0 = (undefined4)((ulonglong)local_f8 >> 0x20);
  iStack_dc = local_f0;
  local_d8 = local_130;
  local_d0 = local_120;
  local_c8 = local_128;
  local_c0 = local_118;
  local_b8 = local_108;
  local_b0 = local_110;
  local_a8 = local_158;
  local_90 = local_138;
  local_88 = local_148;
  local_80 = local_150;
  local_78 = DAT_14ca94df8;
  local_70 = 0;
  local_60 = local_138;
  local_50 = 0;
  local_58 = puVar10;
  uVar12 = FUN_1404e1e84();
  local_1d0 = (wchar_t *)&local_e8;
  local_1d8 = (wchar_t *)CONCAT62(local_1d8._2_6_,1);
  FUN_1403d83cc(local_170,&local_f9,uVar12,puVar10);
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143018feb FUN_143018feb body=1907 status=ok
// SIG undefined FUN_143018feb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143018feb(longlong param_1,int *param_2,longlong *param_3,longlong *param_4)

{
  ulonglong *puVar1;
  longlong *plVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  ushort *puVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  undefined1 auStack_1f8 [32];
  wchar_t *local_1d8;
  wchar_t *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  code *local_1b8;
  code *local_1b0;
  undefined1 *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined8 local_180;
  ulonglong *local_170;
  longlong local_168;
  ulonglong *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  undefined1 local_f9;
  undefined8 local_f8;
  int local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  int iStack_dc;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_108 = param_3[1];
  local_110 = param_3[2];
  local_118 = *(undefined8 *)(*(longlong *)(*param_3 + 0x38) + 0x84);
  local_120 = param_4[1];
  local_128 = param_4[2];
  local_130 = *(undefined8 *)(*param_4 + 0x84);
  uVar12 = *(undefined8 *)
            (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*param_2 * 2) * 8);
  uVar9 = FUN_145eb8030();
  FUN_1448e935e(uVar12,&local_e8,uVar9);
  FUN_145eb8030();
  lVar8 = CONCAT44(uStack_e4,local_e8);
  local_138 = CONCAT44(iStack_dc,local_e0);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar16 + 0x24;
  local_168 = param_1;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(puVar1,0x130);
    puVar16 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar16 + 0x24;
  }
  *puVar1 = (ulonglong)puVar10;
  *puVar16 = &PTR_FUN_14a2f9c90;
  puVar10 = puVar16 + 2;
  *(undefined1 (*) [16])(puVar16 + 2) = (undefined1  [16])0x0;
  lVar11 = 0x32;
  do {
    *(undefined1 (*) [16])((longlong)puVar16 + lVar11 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar16 + lVar11 + -2) = 0xffff0000;
    lVar11 = lVar11 + 0x18;
  } while (lVar11 != 0xf2);
  *(undefined4 *)((longlong)puVar16 + 0xf4) = 0;
  *(undefined1 (*) [16])(puVar16 + 0x1c) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar16 + 0x1e) = 0;
  *(undefined4 *)(puVar16 + 0x1f) = 0xffffffff;
  *(undefined4 *)((longlong)puVar16 + 0xfc) = 0xffffffff;
  *(undefined4 *)(puVar16 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)puVar16 + 0x104) = 0xffffffff;
  *(undefined4 *)(puVar16 + 0x21) = 0;
  *(undefined2 *)((longlong)puVar16 + 0x10c) = 0;
  puVar16[0x22] = 0;
  plVar2 = (longlong *)(local_168 + 0x98);
  iVar17 = *(int *)(local_168 + 0xa0);
  *(uint *)(local_168 + 0xa0) = iVar17 + 1U;
  if (*(uint *)(local_168 + 0xa4) < iVar17 + 1U) {
    FUN_1448cfae8(plVar2,iVar17);
  }
  *(undefined8 **)(*plVar2 + (longlong)iVar17 * 8) = puVar16;
  puVar16[2] = *param_3;
  puVar16[3] = DAT_14c9c0d80;
  lVar11 = param_4[3];
  puVar16[4] = *param_4;
  puVar16[5] = 0;
  *(char *)(puVar16 + 6) = (char)lVar11;
  *(undefined1 *)((longlong)puVar16 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar16 + 0x32) = 0xffff;
  local_140 = (longlong)*param_2;
  local_f0 = param_2[3];
  local_f8 = *(undefined8 *)(param_2 + 1);
  uVar12 = *(undefined8 *)
            (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + local_140 * 2) * 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
    FUN_145e1a792();
    local_190 = &LAB_14712ac08;
    local_198 = &LAB_14712ac0c;
    local_1a0 = &LAB_1472e3912;
    local_1a8 = &LAB_1472e3916;
    local_1b0 = FUN_1472e391a;
    local_1b8 = FUN_1472e3942;
    local_1d0 = L"ScreenPassVS";
    local_1d8 = L"/Engine/Private/ScreenPass.usf";
    local_180 = 0;
    local_188 = 0xe0;
    local_1c0 = 1;
    local_1c8 = 0;
    FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670);
    _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1430179ee);
    _Init_thread_footer(&DAT_14ca4b780);
  }
  FUN_1448e935e(uVar12,&local_e8,&DAT_14ca4b6d8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
    FUN_145e1a792();
    local_190 = &LAB_14712ac08;
    local_198 = &LAB_14712ac0c;
    local_1a0 = &LAB_1472e3912;
    local_1a8 = &LAB_1472e3916;
    local_1b0 = FUN_1472e391a;
    local_1b8 = FUN_1472e3942;
    local_1d0 = L"ScreenPassVS";
    local_1d8 = L"/Engine/Private/ScreenPass.usf";
    local_180 = 0;
    local_188 = 0xe0;
    local_1c0 = 1;
    local_1c8 = 0;
    FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670);
    _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1430179ee);
    _Init_thread_footer(&DAT_14ca4b780);
  }
  local_158 = CONCAT44(uStack_e4,local_e8);
  local_148 = DAT_14c9c0d50;
  local_150 = DAT_14c9c0d98;
  lVar11 = FUN_145eb82a6();
  lVar11 = *(longlong *)(lVar11 + 0x48);
  lVar13 = (longlong)*(int *)(lVar11 + 0x38);
  if (0 < lVar13) {
    local_160 = (ulonglong *)(lVar8 + 0x30);
    local_170 = (ulonglong *)(lVar8 + 0x20);
    lVar19 = 0;
    iVar17 = 0;
    iVar23 = 0;
    iVar14 = 0;
    do {
      lVar6 = *(longlong *)(lVar11 + 0x30);
      bVar3 = *(byte *)(lVar6 + 2 + lVar19 * 4);
      if (bVar3 < 0x14) {
        uVar4 = *(ushort *)(lVar6 + lVar19 * 4);
        uVar21 = (ulonglong)uVar4;
        iVar22 = iVar23;
        if ((0x67200U >> (bVar3 & 0x1f) & 1) == 0) {
          if (bVar3 == 0x13) {
            if (iVar14 < *(int *)(lVar8 + 0x38)) {
              uVar7 = *local_160;
              uVar15 = ((longlong)uVar7 >> 0x18) + (longlong)local_160;
              if ((uVar7 & 1) == 0) {
                uVar15 = uVar7;
              }
              if (uVar4 == *(ushort *)(uVar15 + 2 + (longlong)iVar14 * 4)) {
                iVar14 = iVar14 + 1;
                goto LAB_143019375;
              }
            }
            if ((*(longlong *)((longlong)puVar10 + uVar21) != 0) &&
               ((*(byte *)((longlong)puVar16 + uVar21 + 0x18) & 2) == 0)) goto LAB_14301936d;
          }
        }
        else {
          iVar5 = *(int *)(lVar8 + 0x18);
          if (iVar17 < iVar5) {
            uVar7 = *(ulonglong *)(lVar8 + 0x10);
            uVar15 = ((longlong)uVar7 >> 0x18) + lVar8 + 0x10;
            if ((uVar7 & 1) == 0) {
              uVar15 = uVar7;
            }
            puVar20 = (ushort *)(uVar15 + (longlong)iVar17 * 4);
            iVar18 = iVar17;
            do {
              if (uVar4 <= *puVar20) {
                iVar17 = iVar18;
                if (*puVar20 == uVar4) goto LAB_143019375;
                break;
              }
              iVar18 = iVar18 + 1;
              puVar20 = puVar20 + 2;
              iVar17 = iVar5;
            } while (iVar5 != iVar18);
          }
          iVar5 = *(int *)(lVar8 + 0x28);
          if (iVar23 < iVar5) {
            uVar7 = *local_170;
            uVar15 = ((longlong)uVar7 >> 0x18) + (longlong)local_170;
            if ((uVar7 & 1) == 0) {
              uVar15 = uVar7;
            }
            puVar20 = (ushort *)(uVar15 + (longlong)iVar23 * 6);
            do {
              if (uVar4 <= *puVar20) {
                iVar22 = iVar23;
                if (*puVar20 == uVar4) goto LAB_143019375;
                break;
              }
              iVar23 = iVar23 + 1;
              puVar20 = puVar20 + 3;
              iVar22 = iVar5;
            } while (iVar5 != iVar23);
          }
LAB_14301936d:
          *(undefined8 *)((longlong)puVar10 + uVar21) = 0;
          iVar23 = iVar22;
        }
      }
LAB_143019375:
      lVar19 = lVar19 + 1;
    } while (lVar19 != lVar13);
  }
  local_e8 = (undefined4)local_140;
  uStack_e4 = (undefined4)local_f8;
  local_e0 = (undefined4)((ulonglong)local_f8 >> 0x20);
  iStack_dc = local_f0;
  local_d8 = local_130;
  local_d0 = local_120;
  local_c8 = local_128;
  local_c0 = local_118;
  local_b8 = local_108;
  local_b0 = local_110;
  local_a8 = local_158;
  local_90 = local_138;
  local_88 = local_148;
  local_80 = local_150;
  local_78 = DAT_14ca94df8;
  local_70 = 0;
  local_60 = local_138;
  local_50 = 0;
  local_58 = puVar10;
  uVar12 = FUN_145eb82a6();
  local_1d8 = (wchar_t *)&local_e8;
  FUN_1472e9650(local_168,&local_f9,uVar12,puVar10);
  if ((local_48 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14301976b FUN_14301976b body=2628 status=ok
// SIG undefined FUN_14301976b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301976b(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,int param_5
                  )

{
  undefined1 uVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  ushort *puVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  float fVar24;
  undefined1 auStack_1a8 [32];
  wchar_t *local_188;
  wchar_t *local_180;
  undefined4 local_178;
  undefined4 local_170;
  code *local_168;
  code *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined1 local_121;
  undefined8 local_120;
  longlong *local_118;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  ulonglong *local_100;
  undefined8 local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong local_d0;
  ulonglong *local_c8;
  ulonglong *local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined1 local_99;
  undefined8 *local_98;
  longlong local_90;
  undefined *local_88;
  undefined4 local_7a;
  undefined3 uStack_76;
  undefined2 local_73;
  undefined1 local_71;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_d0 = param_3[1];
  local_d8 = param_3[2];
  local_e0 = *(undefined8 *)(*param_3 + 0x84);
  local_e8 = param_4[1];
  local_f0 = param_4[2];
  local_f8 = *(undefined8 *)(*param_4 + 0x84);
  uVar6 = *(undefined8 *)(param_2 + 0x13818);
  local_118 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
    FUN_145e1a792();
    local_140 = &LAB_14712ac08;
    local_148 = &LAB_14712ac0c;
    local_150 = &LAB_1472e3912;
    local_158 = &LAB_1472e3916;
    local_160 = FUN_1472e391a;
    local_168 = FUN_1472e3942;
    local_180 = L"ScreenPassVS";
    local_188 = L"/Engine/Private/ScreenPass.usf";
    local_130 = 0;
    local_138 = 0xe0;
    local_170 = 1;
    local_178 = 0;
    FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
    _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1430179ee);
    _Init_thread_footer(&DAT_14ca4b780);
  }
  FUN_1448e935e(uVar6,&local_98,&DAT_14ca4b6d8,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
    FUN_145e1a792();
    local_140 = &LAB_14712ac08;
    local_148 = &LAB_14712ac0c;
    local_150 = &LAB_1472e3912;
    local_158 = &LAB_1472e3916;
    local_160 = FUN_1472e391a;
    local_168 = FUN_1472e3942;
    local_180 = L"ScreenPassVS";
    local_188 = L"/Engine/Private/ScreenPass.usf";
    local_130 = 0;
    local_138 = 0xe0;
    local_170 = 1;
    local_178 = 0;
    FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
    _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1430179ee);
    _Init_thread_footer(&DAT_14ca4b780);
  }
  local_b0 = local_98;
  local_a8 = local_90;
  local_120 = CONCAT44(local_120._4_4_,param_5);
  uVar6 = *(undefined8 *)(param_2 + 0x13818);
  FUN_141597d90();
  FUN_1448e935e(uVar6,&local_98,&DAT_14ca4b800,param_5 == 3);
  FUN_141597d90();
  puVar9 = local_98;
  local_b8 = local_90;
  local_c0 = (ulonglong *)(param_1 + 0x70);
  puVar22 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar22 + 0x2e;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_c0,0x180);
    puVar22 = (undefined8 *)(*local_c0 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar22 + 0x2e;
  }
  *local_c0 = (ulonglong)puVar10;
  *puVar22 = &PTR_FUN_14a2f9cb8;
  puVar10 = puVar22 + 2;
  puVar22[2] = 0;
  *(undefined1 *)(puVar22 + 3) = 1;
  puVar22[4] = 0;
  lVar11 = 0x82;
  do {
    *(undefined1 (*) [16])((longlong)puVar22 + lVar11 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar22 + lVar11 + -2) = 0xffff0000;
    lVar11 = lVar11 + 0x18;
  } while (lVar11 != 0x142);
  *(undefined4 *)((longlong)puVar22 + 0x144) = 0;
  *(undefined1 (*) [16])(puVar22 + 0x26) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar22 + 0x28) = 0;
  *(undefined4 *)(puVar22 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)puVar22 + 0x14c) = 0xffffffff;
  *(undefined4 *)(puVar22 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)puVar22 + 0x154) = 0xffffffff;
  *(undefined4 *)(puVar22 + 0x2b) = 0;
  *(undefined2 *)((longlong)puVar22 + 0x15c) = 0;
  puVar22[0x2c] = 0;
  iVar4 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar22;
  lVar11 = FUN_1447e4f80();
  cVar12 = '\x02';
  if (*(char *)(lVar11 + 0x41) != '\x03') {
    cVar12 = *(char *)(lVar11 + 0x41);
  }
  fVar24 = (float)(int)((ulonglong)local_e0 >> 0x20);
  iVar18 = (int)((ulonglong)local_f0 >> 0x20);
  iVar13 = (int)((ulonglong)local_e8 >> 0x20);
  puVar22[2] = *(undefined8 *)(param_2 + 0x18);
  *(char *)(puVar22 + 3) = cVar12;
  puVar22[4] = *local_118;
  *(float *)(puVar22 + 5) = (float)(int)local_e0 / (float)(int)local_f8;
  *(float *)((longlong)puVar22 + 0x2c) = fVar24 / (float)(int)((ulonglong)local_f8 >> 0x20);
  iVar4 = *(int *)(param_2 + 0x3104);
  *(float *)(puVar22 + 6) =
       ((float)*(int *)(param_2 + 0x3100) + -1.0 + -0.51) / (float)(int)local_e0;
  *(float *)((longlong)puVar22 + 0x34) = ((float)iVar4 + -1.0 + -0.51) / fVar24;
  *(int *)(puVar22 + 8) = (int)local_120;
  *(float *)(puVar22 + 7) = (float)((int)local_f0 - (int)local_e8);
  *(float *)((longlong)puVar22 + 0x3c) = (float)(iVar18 - iVar13);
  *(int *)(puVar22 + 10) = (int)local_e8;
  *(int *)((longlong)puVar22 + 0x54) = iVar13;
  *(int *)(puVar22 + 0xb) = (int)local_f0 + -1;
  *(int *)((longlong)puVar22 + 0x5c) = iVar18 + -1;
  *(int *)(puVar22 + 0xc) = (int)local_d0;
  *(int *)((longlong)puVar22 + 100) = (int)((ulonglong)local_d0 >> 0x20);
  *(int *)(puVar22 + 0xd) = (int)local_d8 + -1;
  *(int *)((longlong)puVar22 + 0x6c) = (int)((ulonglong)local_d8 >> 0x20) + -1;
  uVar1 = (undefined1)param_4[3];
  if ((int)local_120 == 3) {
    local_120 = DAT_14c9c0d98;
    puVar22[0xe] = *param_4;
    puVar22[0xf] = 0;
    *(undefined1 *)(puVar22 + 0x10) = uVar1;
    *(undefined1 *)((longlong)puVar22 + 0x81) = 0;
    *(undefined2 *)((longlong)puVar22 + 0x82) = 0xffff;
  }
  else {
    local_120 = DAT_14c9c0c60;
    puVar22[0x26] = *param_4;
    puVar22[0x27] = 0;
    *(undefined1 *)(puVar22 + 0x28) = uVar1;
    *(undefined1 *)((longlong)puVar22 + 0x141) = uVar1;
    *(undefined4 *)((longlong)puVar22 + 0x144) = 0x22;
  }
  local_104 = *(undefined4 *)(param_2 + 0x3090);
  local_108 = *(undefined4 *)(param_2 + 0x1dd4);
  local_10c = *(undefined4 *)(param_2 + 0x3094);
  local_121 = (&DAT_00001de6)[param_2];
  local_118 = (longlong *)DAT_14c9c0d50;
  FUN_141597eb2();
  lVar11 = DAT_14ca4bd18;
  iVar4 = *(int *)(DAT_14ca4bd18 + 0x38);
  if (0 < (longlong)iVar4) {
    local_c8 = local_98 + 6;
    local_100 = local_98 + 4;
    lVar17 = 0;
    iVar13 = 0;
    iVar18 = 0;
    iVar16 = 0;
    do {
      bVar2 = *(byte *)(*(longlong *)(lVar11 + 0x30) + 2 + lVar17 * 4);
      if (bVar2 < 0x14) {
        uVar3 = *(ushort *)(*(longlong *)(lVar11 + 0x30) + lVar17 * 4);
        uVar23 = (ulonglong)uVar3;
        iVar19 = iVar18;
        if ((0x67200U >> (bVar2 & 0x1f) & 1) == 0) {
          if (bVar2 == 0x13) {
            if (iVar16 < *(int *)(local_98 + 7)) {
              uVar7 = *local_c8;
              uVar20 = ((longlong)uVar7 >> 0x18) + (longlong)local_c8;
              if ((uVar7 & 1) == 0) {
                uVar20 = uVar7;
              }
              if (uVar3 == *(ushort *)(uVar20 + 2 + (longlong)iVar16 * 4)) {
                iVar16 = iVar16 + 1;
                goto LAB_143019cae;
              }
            }
            if ((*(longlong *)((longlong)puVar10 + uVar23) != 0) &&
               ((*(byte *)((longlong)puVar22 + uVar23 + 0x18) & 2) == 0)) goto LAB_143019ca6;
          }
        }
        else {
          iVar5 = *(int *)(local_98 + 3);
          if (iVar13 < iVar5) {
            uVar7 = local_98[2];
            uVar20 = ((longlong)uVar7 >> 0x18) + (longlong)(local_98 + 2);
            if ((uVar7 & 1) == 0) {
              uVar20 = uVar7;
            }
            puVar21 = (ushort *)(uVar20 + (longlong)iVar13 * 4);
            iVar14 = iVar13;
            do {
              if (uVar3 <= *puVar21) {
                iVar13 = iVar14;
                if (*puVar21 == uVar3) goto LAB_143019cae;
                break;
              }
              iVar14 = iVar14 + 1;
              puVar21 = puVar21 + 2;
              iVar13 = iVar5;
            } while (iVar5 != iVar14);
          }
          iVar5 = *(int *)(local_98 + 5);
          if (iVar18 < iVar5) {
            uVar7 = *local_100;
            uVar20 = ((longlong)uVar7 >> 0x18) + (longlong)local_100;
            if ((uVar7 & 1) == 0) {
              uVar20 = uVar7;
            }
            puVar21 = (ushort *)(uVar20 + (longlong)iVar18 * 6);
            do {
              if (uVar3 <= *puVar21) {
                iVar19 = iVar18;
                if (*puVar21 == uVar3) goto LAB_143019cae;
                break;
              }
              iVar18 = iVar18 + 1;
              puVar21 = puVar21 + 3;
              iVar19 = iVar5;
            } while (iVar5 != iVar18);
          }
LAB_143019ca6:
          *(undefined8 *)((longlong)puVar10 + uVar23) = 0;
          iVar18 = iVar19;
        }
      }
LAB_143019cae:
      lVar17 = lVar17 + 1;
    } while (lVar17 != iVar4);
  }
  uVar6 = DAT_14ca94df8;
  FUN_141597eb2();
  FUN_140069376(param_1);
  puVar8 = local_c0;
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar22 = puVar15 + 0x4b;
  if (*(undefined8 **)(param_1 + 0x78) < puVar22) {
    FUN_140023dd8(local_c0,0x260);
    puVar15 = (undefined8 *)(*puVar8 + 7 & 0xfffffffffffffff8);
    puVar22 = puVar15 + 0x4b;
  }
  *puVar8 = (ulonglong)puVar22;
  local_90 = DAT_14ca4bd18;
  if (DAT_14ca4bd18 != 0) {
    LOCK();
    *(int *)(DAT_14ca4bd18 + 8) = *(int *)(DAT_14ca4bd18 + 8) + 1;
    UNLOCK();
  }
  local_88 = &DAT_14ca4bcd0;
  local_188 = (wchar_t *)CONCAT71(local_188._1_7_,2);
  local_98 = puVar10;
  FUN_140068f1a(puVar15,&local_99,&local_98,1);
  *puVar15 = &PTR_FUN_14a2f9cc0;
  *(undefined4 *)(puVar15 + 0x37) = local_104;
  *(undefined4 *)((longlong)puVar15 + 0x1bc) = local_108;
  *(undefined4 *)(puVar15 + 0x38) = local_10c;
  *(undefined1 *)((longlong)puVar15 + 0x1c4) = local_121;
  *(undefined2 *)((longlong)puVar15 + 0x1c5) = local_73;
  *(undefined1 *)((longlong)puVar15 + 0x1c7) = local_71;
  puVar15[0x39] = local_f8;
  puVar15[0x3a] = local_e8;
  puVar15[0x3b] = local_f0;
  puVar15[0x3c] = local_e0;
  puVar15[0x3d] = local_d0;
  puVar15[0x3e] = local_d8;
  puVar15[0x3f] = local_b0;
  puVar15[0x40] = local_a8;
  puVar15[0x41] = puVar9;
  puVar15[0x42] = local_b8;
  puVar15[0x43] = local_118;
  puVar15[0x44] = local_120;
  puVar15[0x45] = uVar6;
  *(undefined1 *)(puVar15 + 0x46) = 0;
  *(uint *)((longlong)puVar15 + 0x234) = CONCAT31(uStack_76,local_7a._3_1_);
  *(undefined4 *)((longlong)puVar15 + 0x231) = local_7a;
  puVar15[0x47] = puVar9;
  puVar15[0x48] = local_b8;
  puVar15[0x49] = puVar10;
  *(undefined1 *)(puVar15 + 0x4a) = 0;
  iVar4 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar4 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar4 * 8) = puVar15;
  *(int *)((longlong)puVar15 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_70 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140069100(param_1,puVar15);
  return;
}



// FUNCTION 14301a1b0 FUN_14301a1b0 body=69 status=ok
// SIG undefined FUN_14301a1b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301a1b0(void)

{
  _DAT_14ca4b8c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014301a1f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca4b8c8,1);
  return;
}



// FUNCTION 14301a1f5 FUN_14301a1f5 body=69 status=ok
// SIG undefined FUN_14301a1f5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301a1f5(void)

{
  _DAT_14ca4b8d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014301a237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca4b8e0,1);
  return;
}



// FUNCTION 14301a23a FUN_14301a23a body=69 status=ok
// SIG undefined FUN_14301a23a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301a23a(void)

{
  _DAT_14ca4b8f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014301a27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca4b8f8,1);
  return;
}



// FUNCTION 14301a27f FUN_14301a27f body=69 status=ok
// SIG undefined FUN_14301a27f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301a27f(void)

{
  _DAT_14ca4b908 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014301a2c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca4b910,1);
  return;
}



// FUNCTION 14301a2c4 FUN_14301a2c4 body=69 status=ok
// SIG undefined FUN_14301a2c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301a2c4(void)

{
  _DAT_14ca4b920 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014301a306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca4b928,1);
  return;
}



// FUNCTION 14301a309 FUN_14301a309 body=69 status=ok
// SIG undefined FUN_14301a309(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301a309(void)

{
  _DAT_14ca4b938 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014301a34b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca4b940,1);
  return;
}



// FUNCTION 14301a34e FUN_14301a34e body=69 status=ok
// SIG undefined FUN_14301a34e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301a34e(void)

{
  _DAT_14ca4b950 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014301a390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca4b958,1);
  return;
}



// FUNCTION 14301a393 FUN_14301a393 body=69 status=ok
// SIG undefined FUN_14301a393(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301a393(void)

{
  _DAT_14ca4b968 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014301a3d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca4b970,1);
  return;
}



// FUNCTION 14301a3d8 FUN_14301a3d8 body=69 status=ok
// SIG undefined FUN_14301a3d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301a3d8(void)

{
  _DAT_14ca4b980 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014301a41a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca4b988,1);
  return;
}



// FUNCTION 14301a41d FUN_14301a41d body=69 status=ok
// SIG undefined FUN_14301a41d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301a41d(void)

{
  _DAT_14ca4b998 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014301a45f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca4b9a0,1);
  return;
}



// FUNCTION 14301a462 FUN_14301a462 body=69 status=ok
// SIG undefined FUN_14301a462(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301a462(void)

{
  _DAT_14ca4b9b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014301a4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca4b9b8,1);
  return;
}



// FUNCTION 14301a4a7 FUN_14301a4a7 body=69 status=ok
// SIG undefined FUN_14301a4a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301a4a7(void)

{
  _DAT_14ca4b9c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014301a4e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca4b9d0,1);
  return;
}



// FUNCTION 14301a4ec FUN_14301a4ec body=69 status=ok
// SIG undefined FUN_14301a4ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301a4ec(void)

{
  _DAT_14ca4b9e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014301a52e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca4b9e8,1);
  return;
}



// FUNCTION 14301a531 FUN_14301a531 body=69 status=ok
// SIG undefined FUN_14301a531(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301a531(void)

{
  _DAT_14ca4b9f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014301a573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca4ba00,1);
  return;
}



// FUNCTION 14301a576 FUN_14301a576 body=69 status=ok
// SIG undefined FUN_14301a576(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301a576(void)

{
  _DAT_14ca4ba10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014301a5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca4ba18,1);
  return;
}



// FUNCTION 14301a5bb FUN_14301a5bb body=69 status=ok
// SIG undefined FUN_14301a5bb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301a5bb(void)

{
  _DAT_14ca4ba28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014301a5fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca4ba30,1);
  return;
}



// FUNCTION 14301a600 FUN_14301a600 body=69 status=ok
// SIG undefined FUN_14301a600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301a600(void)

{
  _DAT_14ca4ba40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014301a642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca4ba48,1);
  return;
}



// FUNCTION 14301a645 FUN_14301a645 body=69 status=ok
// SIG undefined FUN_14301a645(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301a645(void)

{
  _DAT_14ca4ba58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014301a687. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca4ba60,1);
  return;
}



// FUNCTION 14301a68a FUN_14301a68a body=69 status=ok
// SIG undefined FUN_14301a68a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301a68a(void)

{
  _DAT_14ca4ba70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014301a6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca4ba78,1);
  return;
}



// FUNCTION 14301a6d0 FUN_14301a6d0 body=576 status=ok
// SIG undefined FUN_14301a6d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14301a6d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4be00) {
    FUN_144b3d300(&DAT_14ca4be00);
    if (DAT_14ca4be00 == -1) {
      FUN_143022f56();
      if ((DAT_14ca4bf7f & 2) == 0) {
        DAT_14ca4bf7f = DAT_14ca4bf7f | 2;
        _DAT_14ca4bf20 = L"FSSDCompressMetadataCS";
        _DAT_14ca4bf38 = FUN_146826540;
        _DAT_14ca4bf40 = FUN_146825d77;
        _DAT_14ca4bf48 = FUN_146825fd6;
        _DAT_14ca4bf50 = FUN_1407e02ea;
        _DAT_14ca4bf58 = FUN_146826273;
        _DAT_14ca4bf30 = FUN_143023c08;
        _DAT_14ca4bf70 = 0xffffffff000000e0;
        _DAT_14ca4bf78 = 8;
        DAT_14ca4bf7c = 0;
        _DAT_14ca4bf60 = &LAB_143023c34;
        _DAT_14ca4bf80 = L"BASE";
        DAT_14ca4bfaa = 4;
        _DAT_14ca4bf88 = FUN_140b35ae4();
        _DAT_14ca4bf90 = DAT_14ca4bf28;
        _DAT_14ca4bf98 = &LAB_14682652b;
        DAT_14ca4bf28 = &DAT_14ca4bf80;
        DAT_14ca4bf7d = DAT_14ca4bf7d + '\x01';
        _DAT_14ca4bfa0 = 0x100000000;
        if (*(char *)(_DAT_14ca4bf88 + 100) != '\0') {
          DAT_14ca4bf7e = DAT_14ca4bf7e + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca4bf18);
      }
      FUN_140db5666(&DAT_14ca4bd58,0,&DAT_14ca4bf18,L"FSSDCompressMetadataCS",
                    L"/Engine/Private/ScreenSpaceDenoise/SSDCompressMetadata.usf",L"MainCS",5,4,
                    FUN_143022ec0,FUN_143022e60,&LAB_143022e22,&LAB_143022e1e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca4be08);
      _DAT_14ca4bd58 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143022f4a);
      _Init_thread_footer(&DAT_14ca4be00);
    }
  }
  return &DAT_14ca4bd58;
}



// FUNCTION 14301a910 FUN_14301a910 body=576 status=ok
// SIG undefined FUN_14301a910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14301a910(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4c058) {
    FUN_144b3d300(&DAT_14ca4c058);
    if (DAT_14ca4c058 == -1) {
      FUN_143023d6a();
      if ((DAT_14ca4c25f & 2) == 0) {
        DAT_14ca4c25f = DAT_14ca4c25f | 2;
        _DAT_14ca4c200 = L"FSSDInjestCS";
        _DAT_14ca4c218 = FUN_146826540;
        _DAT_14ca4c220 = FUN_146825d77;
        _DAT_14ca4c228 = FUN_146825fd6;
        _DAT_14ca4c230 = FUN_1407e02ea;
        _DAT_14ca4c238 = FUN_146826273;
        _DAT_14ca4c210 = FUN_143024830;
        _DAT_14ca4c250 = 0xffffffff000000e0;
        _DAT_14ca4c258 = 8;
        DAT_14ca4c25c = 0;
        _DAT_14ca4c240 = &LAB_14302485c;
        _DAT_14ca4c260 = L"BASE";
        DAT_14ca4c28a = 4;
        _DAT_14ca4c268 = FUN_140b35ae4();
        _DAT_14ca4c270 = DAT_14ca4c208;
        _DAT_14ca4c278 = &LAB_14682652b;
        DAT_14ca4c208 = &DAT_14ca4c260;
        DAT_14ca4c25d = DAT_14ca4c25d + '\x01';
        _DAT_14ca4c280 = 0x100000000;
        if (*(char *)(_DAT_14ca4c268 + 100) != '\0') {
          DAT_14ca4c25e = DAT_14ca4c25e + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca4c1f8);
      }
      FUN_140db5666(&DAT_14ca4bfb0,0,&DAT_14ca4c1f8,L"FSSDInjestCS",
                    L"/Engine/Private/ScreenSpaceDenoise/SSDInjest.usf",L"MainCS",5,0x40,
                    FUN_143023cd4,FUN_143023c74,&LAB_143023c3c,&LAB_143023c38,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca4c060);
      _DAT_14ca4bfb0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143023d5e);
      _Init_thread_footer(&DAT_14ca4c058);
    }
  }
  return &DAT_14ca4bfb0;
}



// FUNCTION 14301ab50 FUN_14301ab50 body=576 status=ok
// SIG undefined FUN_14301ab50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14301ab50(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4c338) {
    FUN_144b3d300(&DAT_14ca4c338);
    if (DAT_14ca4c338 == -1) {
      FUN_143024aca();
      if ((DAT_14ca4c4b7 & 2) == 0) {
        DAT_14ca4c4b7 = DAT_14ca4c4b7 | 2;
        _DAT_14ca4c458 = L"FSSDSpatialAccumulationCS";
        _DAT_14ca4c470 = FUN_146826540;
        _DAT_14ca4c478 = FUN_146825d77;
        _DAT_14ca4c480 = FUN_146825fd6;
        _DAT_14ca4c488 = FUN_1407e02ea;
        _DAT_14ca4c490 = FUN_146826273;
        _DAT_14ca4c468 = FUN_143025560;
        _DAT_14ca4c4a8 = 0xffffffff000000e0;
        _DAT_14ca4c4b0 = 8;
        DAT_14ca4c4b4 = 0;
        _DAT_14ca4c498 = &LAB_14302558c;
        _DAT_14ca4c4b8 = L"BASE";
        DAT_14ca4c4e2 = 4;
        _DAT_14ca4c4c0 = FUN_140b35ae4();
        _DAT_14ca4c4c8 = DAT_14ca4c460;
        _DAT_14ca4c4d0 = &LAB_14682652b;
        DAT_14ca4c460 = &DAT_14ca4c4b8;
        DAT_14ca4c4b5 = DAT_14ca4c4b5 + '\x01';
        _DAT_14ca4c4d8 = 0x100000000;
        if (*(char *)(_DAT_14ca4c4c0 + 100) != '\0') {
          DAT_14ca4c4b6 = DAT_14ca4c4b6 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca4c450);
      }
      FUN_140db5666(&DAT_14ca4c290,0,&DAT_14ca4c450,L"FSSDSpatialAccumulationCS",
                    L"/Engine/Private/ScreenSpaceDenoise/SSDSpatialAccumulation.usf",L"MainCS",5,
                    0x280,FUN_143024a34,FUN_1430249d4,FUN_143024864,&LAB_143024860,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca4c340);
      _DAT_14ca4c290 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143024abe);
      _Init_thread_footer(&DAT_14ca4c338);
    }
  }
  return &DAT_14ca4c290;
}



// FUNCTION 14301ad90 FUN_14301ad90 body=576 status=ok
// SIG undefined FUN_14301ad90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14301ad90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4c590) {
    FUN_144b3d300(&DAT_14ca4c590);
    if (DAT_14ca4c590 == -1) {
      FUN_1430256ce();
      if ((DAT_14ca4c687 & 2) == 0) {
        DAT_14ca4c687 = DAT_14ca4c687 | 2;
        _DAT_14ca4c628 = L"FSSDTemporalAccumulationCS";
        _DAT_14ca4c640 = FUN_146826540;
        _DAT_14ca4c648 = FUN_146825d77;
        _DAT_14ca4c650 = FUN_146825fd6;
        _DAT_14ca4c658 = FUN_1407e02ea;
        _DAT_14ca4c660 = FUN_146826273;
        _DAT_14ca4c638 = FUN_143026250;
        _DAT_14ca4c678 = 0xffffffff000000e0;
        _DAT_14ca4c680 = 8;
        DAT_14ca4c684 = 0;
        _DAT_14ca4c668 = &LAB_14302627c;
        _DAT_14ca4c688 = L"BASE";
        DAT_14ca4c6b2 = 4;
        _DAT_14ca4c690 = FUN_140b35ae4();
        _DAT_14ca4c698 = DAT_14ca4c630;
        _DAT_14ca4c6a0 = &LAB_14682652b;
        DAT_14ca4c630 = &DAT_14ca4c688;
        DAT_14ca4c685 = DAT_14ca4c685 + '\x01';
        _DAT_14ca4c6a8 = 0x100000000;
        if (*(char *)(_DAT_14ca4c690 + 100) != '\0') {
          DAT_14ca4c686 = DAT_14ca4c686 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca4c620);
      }
      FUN_140db5666(&DAT_14ca4c4e8,0,&DAT_14ca4c620,L"FSSDTemporalAccumulationCS",
                    L"/Engine/Private/ScreenSpaceDenoise/SSDTemporalAccumulation.usf",L"MainCS",5,
                    0x20,FUN_143025638,FUN_1430255d8,&LAB_143025594,&LAB_143025590,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca4c598);
      _DAT_14ca4c4e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430256c2);
      _Init_thread_footer(&DAT_14ca4c590);
    }
  }
  return &DAT_14ca4c4e8;
}



// FUNCTION 14301afd0 FUN_14301afd0 body=576 status=ok
// SIG undefined FUN_14301afd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14301afd0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4c760) {
    FUN_144b3d300(&DAT_14ca4c760);
    if (DAT_14ca4c760 == -1) {
      FUN_14302637e();
      if ((DAT_14ca4c857 & 2) == 0) {
        DAT_14ca4c857 = DAT_14ca4c857 | 2;
        _DAT_14ca4c7f8 = L"FSSDComposeHarmonicsCS";
        _DAT_14ca4c810 = FUN_146826540;
        _DAT_14ca4c818 = FUN_146825d77;
        _DAT_14ca4c820 = FUN_146825fd6;
        _DAT_14ca4c828 = FUN_1407e02ea;
        _DAT_14ca4c830 = FUN_146826273;
        _DAT_14ca4c808 = FUN_14302680a;
        _DAT_14ca4c848 = 0xffffffff000000e0;
        _DAT_14ca4c850 = 8;
        DAT_14ca4c854 = 0;
        _DAT_14ca4c838 = &LAB_143026836;
        _DAT_14ca4c858 = L"BASE";
        DAT_14ca4c882 = 4;
        _DAT_14ca4c860 = FUN_140b35ae4();
        _DAT_14ca4c868 = DAT_14ca4c800;
        _DAT_14ca4c870 = &LAB_14682652b;
        DAT_14ca4c800 = &DAT_14ca4c858;
        DAT_14ca4c855 = DAT_14ca4c855 + '\x01';
        _DAT_14ca4c878 = 0x100000000;
        if (*(char *)(_DAT_14ca4c860 + 100) != '\0') {
          DAT_14ca4c856 = DAT_14ca4c856 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca4c7f0);
      }
      FUN_140db5666(&DAT_14ca4c6b8,0,&DAT_14ca4c7f0,L"FSSDComposeHarmonicsCS",
                    L"/Engine/Private/ScreenSpaceDenoise/SSDComposeHarmonics.usf",L"MainCS",5,1,
                    FUN_1430262e8,FUN_143026288,&LAB_143026284,&LAB_143026280,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca4c768);
      _DAT_14ca4c6b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143026372);
      _Init_thread_footer(&DAT_14ca4c760);
    }
  }
  return &DAT_14ca4c6b8;
}



// FUNCTION 14301b210 FUN_14301b210 body=539 status=ok
// SIG undefined FUN_14301b210(void)

void FUN_14301b210(longlong param_1,longlong *param_2,ulonglong *param_3,float param_4,
                  float *param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar1 = *(int *)(*param_2 + 0x84);
  iVar2 = *(int *)(*param_2 + 0x88);
  uVar3 = *param_3;
  uVar6 = param_3[1];
  iVar5 = iVar1;
  iVar4 = iVar2;
  if ((param_4 == 0.5) && (!NAN(param_4))) {
    iVar5 = (int)(uVar6 >> 0x20);
    uVar3 = CONCAT44((int)(uVar3 >> 0x20) / 2,(int)(((uint)(uVar3 >> 0x1f) & 1) + (int)uVar3) >> 1);
    uVar6 = CONCAT44((iVar5 - (iVar5 + 1 >> 0x1f)) + 1 >> 1,
                     ((int)uVar6 - ((int)uVar6 + 1 >> 0x1f)) + 1 >> 1);
    iVar5 = iVar1 / 2;
    iVar4 = iVar2 / 2;
  }
  fVar8 = (float)iVar4;
  fVar7 = (float)iVar5;
  *param_5 = fVar7;
  param_5[1] = fVar8;
  param_5[2] = 1.0 / fVar7;
  param_5[3] = 1.0 / fVar8;
  fVar9 = (float)iVar1 / (float)(*(int *)(param_1 + 0x3100) - *(int *)(param_1 + 0x30f8));
  param_5[8] = fVar9 + fVar9;
  fVar9 = -(float)iVar2 / (float)(*(int *)(param_1 + 0x3104) - *(int *)(param_1 + 0x30fc));
  param_5[9] = fVar9 + fVar9;
  fVar9 = (float)*(int *)(param_1 + 0x30f8) /
          (float)(*(int *)(param_1 + 0x3100) - *(int *)(param_1 + 0x30f8));
  param_5[10] = -1.0 - (fVar9 + fVar9);
  fVar9 = (float)*(int *)(param_1 + 0x30fc) /
          (float)(*(int *)(param_1 + 0x3104) - *(int *)(param_1 + 0x30fc));
  param_5[0xb] = fVar9 + fVar9 + 1.0;
  param_5[4] = ((float)(int)uVar3 + 0.5) / fVar7;
  param_5[5] = ((float)(int)(uVar3 >> 0x20) + 0.5) / fVar8;
  param_5[6] = ((float)(int)uVar6 + -0.5) / fVar7;
  param_5[7] = ((float)(int)(uVar6 >> 0x20) + -0.5) / fVar8;
  return;
}



// FUNCTION 14301b42b FUN_14301b42b body=26022 status=ok
// SIG undefined FUN_14301b42b(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14301b42b(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  undefined8 *param_5,uint *param_6,longlong param_7,longlong param_8,
                  undefined8 *param_9)

{
  char *pcVar1;
  double dVar2;
  byte bVar4;
  ushort uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
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
  char cVar35;
  undefined4 uVar36;
  uint uVar37;
  int iVar38;
  longlong lVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined8 uVar42;
  undefined1 *puVar43;
  longlong *plVar44;
  undefined8 *puVar45;
  int iVar46;
  uint uVar47;
  longlong lVar48;
  undefined7 uVar50;
  longlong lVar49;
  ulonglong *puVar51;
  ushort *puVar52;
  ulonglong *puVar53;
  undefined6 uVar55;
  longlong *plVar54;
  bool bVar56;
  int iVar57;
  undefined4 *puVar58;
  undefined1 *puVar59;
  ulonglong *puVar60;
  ulonglong uVar61;
  ulonglong uVar62;
  undefined2 *puVar63;
  undefined1 *puVar64;
  longlong lVar65;
  uint uVar66;
  undefined8 *puVar67;
  undefined1 uVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  ulonglong *puVar73;
  undefined8 *puVar74;
  undefined8 *puVar75;
  ulonglong uVar76;
  longlong *plVar77;
  int iVar78;
  undefined8 *puVar79;
  bool bVar80;
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  double dVar84;
  undefined1 in_XMM2 [16];
  undefined1 auVar86 [12];
  undefined1 auVar85 [16];
  float fVar87;
  float fVar88;
  undefined1 in_XMM3 [16];
  undefined1 auVar90 [12];
  undefined1 auVar89 [16];
  float fVar91;
  float fVar92;
  undefined1 in_XMM4 [16];
  undefined1 auVar93 [16];
  float fVar94;
  undefined1 in_XMM5 [16];
  undefined1 auVar95 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar96 [16];
  double dVar97;
  double dVar98;
  undefined1 unaff_XMM7 [16];
  double dVar100;
  double dVar101;
  undefined1 auVar99 [16];
  float fVar102;
  double dVar103;
  double dVar104;
  undefined1 unaff_XMM8 [16];
  double dVar106;
  double dVar107;
  undefined1 auVar105 [16];
  float fVar108;
  double dVar109;
  double dVar110;
  double dVar111;
  double dVar112;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar113 [16];
  longlong lVar114;
  double dVar115;
  double dVar117;
  undefined1 auVar116 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  float fVar128;
  float fVar129;
  undefined1 auStack_12f8 [32];
  ulonglong *local_12d8;
  undefined8 *local_12d0;
  ulonglong *local_12c8;
  longlong local_12c0;
  ulonglong *local_12b8;
  undefined8 *local_12b0;
  ulonglong *local_12a8;
  ulonglong *local_12a0;
  ulonglong *local_1298;
  longlong *local_1290;
  undefined4 local_1284;
  ulonglong *local_1280;
  ulonglong local_1278;
  ulonglong *local_1270;
  longlong *local_1268;
  longlong *local_1260;
  ulonglong *local_1258;
  uint local_124c;
  longlong *local_1248;
  undefined8 local_1240;
  ulonglong *local_1238;
  ulonglong local_1230;
  longlong *local_1228;
  ulonglong *local_1220;
  ulonglong local_1218;
  uint local_1210;
  int local_120c;
  longlong local_1208;
  ulonglong *local_1200;
  longlong *local_11f8;
  longlong local_11f0;
  ulonglong local_11e8;
  longlong *local_11e0;
  longlong local_11d8;
  longlong local_11d0;
  longlong local_11c8;
  ulonglong local_11c0;
  int local_11b8;
  int local_11b4;
  undefined4 local_11b0;
  int local_11ac;
  int local_11a8;
  undefined4 local_11a4;
  undefined1 local_119d;
  int local_119c;
  int local_1198;
  undefined4 local_1194;
  int local_1190;
  int local_118c;
  undefined4 local_1188;
  int local_1184;
  undefined1 local_1180 [4];
  undefined4 local_117c;
  undefined1 local_1178 [8];
  undefined1 local_1170 [8];
  undefined1 local_1168 [16];
  undefined1 local_1158 [16];
  undefined8 local_1148;
  undefined8 uStack_1140;
  undefined1 local_1138;
  undefined7 uStack_1137;
  undefined4 uStack_1130;
  uint uStack_112c;
  longlong local_1128;
  uint uStack_1120;
  undefined4 uStack_111c;
  undefined2 uStack_1118;
  undefined1 uStack_1116;
  undefined1 auStack_1115 [3];
  undefined2 uStack_1112;
  undefined8 uStack_1110;
  uint local_10f8;
  undefined4 local_10e8;
  undefined1 auStack_10dd [56];
  undefined1 auStack_10a5 [56];
  undefined1 auStack_106d [5];
  undefined1 local_1068 [16];
  undefined1 local_1058 [16];
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined1 local_1038 [16];
  undefined1 local_1028 [43];
  undefined1 auStack_ffd [56];
  undefined1 auStack_fc5 [56];
  undefined1 auStack_f8d [56];
  undefined1 auStack_f55 [56];
  undefined1 auStack_f1d [56];
  undefined1 auStack_ee5 [56];
  undefined1 auStack_ead [56];
  undefined1 auStack_e75 [56];
  undefined1 auStack_e3d [56];
  undefined1 auStack_e05 [56];
  undefined1 auStack_dcd [357];
  undefined1 *local_c68;
  undefined8 local_c58;
  undefined1 local_c48 [2112];
  undefined1 *local_408;
  undefined1 auStack_3fd [5];
  undefined1 local_3f8 [4];
  undefined4 uStack_3f4;
  undefined1 auStack_3ed [8];
  uint uStack_3e5;
  undefined1 auStack_3e0 [8];
  undefined4 local_3d8;
  undefined1 auStack_3d1 [4];
  undefined2 uStack_3cd;
  undefined1 uStack_3cb;
  undefined2 uStack_3ca;
  undefined1 local_3c8 [51];
  undefined1 local_395;
  undefined1 local_35d;
  undefined1 local_325;
  undefined8 auStack_31d [3];
  uint auStack_305 [3];
  ulonglong uStack_2f9;
  undefined4 uStack_2f1;
  undefined2 uStack_2ed;
  undefined1 uStack_2eb;
  undefined2 uStack_2ea;
  undefined2 local_2e8 [25];
  undefined1 local_2b5;
  undefined1 local_27d;
  undefined1 local_245;
  undefined8 auStack_23d [3];
  uint auStack_225 [3];
  ulonglong uStack_219;
  undefined4 uStack_211;
  undefined1 local_20d [2];
  undefined4 uStack_20b;
  undefined1 auStack_1d5 [173];
  undefined1 local_128 [12];
  uint uStack_11c;
  undefined1 local_118 [16];
  undefined4 local_108;
  uint local_104;
  uint local_100;
  undefined8 local_fc;
  undefined1 local_f4;
  undefined1 local_f3;
  ulonglong local_f0;
  double dVar3;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_12f8;
  if (0 < (int)param_2[1]) {
    lVar39 = 0x58;
    lVar48 = 0;
    do {
      puVar79 = (undefined8 *)(*(longlong *)(param_6 + 0x1a) + -0x58 + lVar39);
      uVar42 = puVar79[1];
      puVar67 = (undefined8 *)(*(longlong *)(param_6 + 0x1a) + -8 + lVar39);
      *puVar67 = *puVar79;
      puVar67[1] = uVar42;
      lVar48 = lVar48 + 1;
      lVar39 = lVar39 + 0x60;
    } while (lVar48 < (int)param_2[1]);
  }
  local_1260 = (longlong *)CONCAT44(local_1260._4_4_,param_6[3]);
  uVar37 = *(uint *)(*param_3 + 0x84);
  uVar41 = (ulonglong)uVar37;
  uVar47 = *(uint *)(*param_3 + 0x88);
  uVar76 = (ulonglong)uVar47;
  if (((float)param_6[5] == 0.5) && (!NAN((float)param_6[5]))) {
    uVar41 = (ulonglong)(uint)((int)uVar37 / 2);
    uVar76 = (ulonglong)(uint)((int)uVar47 / 2);
    uVar66 = param_6[0x1c];
    if ((longlong)(int)uVar66 != 0) {
      lVar39 = *(longlong *)(param_6 + 0x1a);
      lVar48 = 0;
      do {
        uVar40 = *(ulonglong *)(lVar39 + 0x50 + lVar48);
        uVar42 = *(undefined8 *)(lVar39 + 0x58 + lVar48);
        iVar69 = (int)uVar42;
        iVar46 = (int)((ulonglong)uVar42 >> 0x20);
        *(ulonglong *)(lVar39 + 0x50 + lVar48) =
             CONCAT44((int)(uVar40 >> 0x20) / 2,
                      (int)(((uint)(uVar40 >> 0x1f) & 1) + (int)uVar40) >> 1);
        *(ulonglong *)(lVar39 + 0x58 + lVar48) =
             CONCAT44((iVar46 - (iVar46 + 1 >> 0x1f)) + 1 >> 1,
                      (iVar69 - (iVar69 + 1 >> 0x1f)) + 1 >> 1);
        lVar48 = lVar48 + 0x60;
      } while ((longlong)(int)uVar66 * 0x60 != lVar48);
    }
  }
  local_1208 = param_4;
  local_11f8 = param_3;
  FUN_1472e5edc(local_20d + 5);
  FUN_1472e5edc(local_2e8);
  FUN_1472e5edc(auStack_3d1 + 9);
  local_124c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  uVar40 = uVar41 | uVar76 << 0x20;
  stack0xfffffffffffffc18 = _DAT_14ca83a30;
  auStack_3e0 = (undefined1  [8])_DAT_14ca83a38;
  local_3d8 = DAT_14ca83a40;
  lVar39 = 0x35;
  do {
    *(undefined4 *)(local_20d + lVar39 + 2) = 0xff000000;
    *(undefined8 *)((longlong)auStack_23d + lVar39) = 0x20009;
    *(ulonglong *)((longlong)&uStack_219 + lVar39) = uVar40;
    *(undefined4 *)((longlong)&uStack_211 + lVar39) = 0x10001;
    *(undefined2 *)(local_20d + lVar39) = 0x101;
    *(ulonglong **)((longlong)auStack_23d + lVar39 + 8) = _DAT_14ca83a30;
    *(undefined8 *)((longlong)auStack_23d + lVar39 + 0x10) = _DAT_14ca83a38;
    *(undefined4 *)((longlong)auStack_225 + lVar39) = DAT_14ca83a40;
    *(undefined4 *)((longlong)auStack_225 + lVar39 + 8) = 0;
    *(uint *)((longlong)auStack_225 + lVar39 + 4) = local_124c;
    (&uStack_2eb)[lVar39] = 0;
    *(undefined8 *)((longlong)auStack_31d + lVar39) = 0x20009;
    *(undefined2 *)((longlong)local_2e8 + lVar39 + -2) = 0;
    *(ulonglong *)((longlong)&uStack_2f9 + lVar39) = uVar40;
    *(undefined4 *)((longlong)&uStack_2f1 + lVar39) = 0x10001;
    *(undefined2 *)((longlong)&uStack_2ed + lVar39) = 0x101;
    *(undefined4 *)((longlong)auStack_305 + lVar39) = DAT_14ca83a40;
    *(ulonglong **)((longlong)auStack_31d + lVar39 + 8) = _DAT_14ca83a30;
    *(undefined8 *)((longlong)auStack_31d + lVar39 + 0x10) = _DAT_14ca83a38;
    *(undefined4 *)((longlong)auStack_305 + lVar39 + 8) = 0;
    *(undefined1 *)((longlong)local_2e8 + lVar39) = 0xff;
    *(uint *)((longlong)auStack_305 + lVar39 + 4) = local_124c;
    auStack_3d1[lVar39 + 6] = 0;
    *(undefined8 *)(auStack_3fd + lVar39) = 0x20009;
    *(undefined2 *)(auStack_3d1 + lVar39 + 7) = 0;
    *(ulonglong *)(auStack_3e0 + lVar39 + 7) = uVar40;
    *(undefined4 *)(auStack_3d1 + lVar39) = 0x10001;
    *(undefined2 *)(auStack_3d1 + lVar39 + 4) = 0x101;
    *(ulonglong **)(local_3f8 + lVar39 + 3) = _DAT_14ca83a30;
    *(undefined8 *)(auStack_3ed + lVar39) = _DAT_14ca83a38;
    *(undefined4 *)((longlong)&uStack_3e5 + lVar39) = DAT_14ca83a40;
    *(undefined4 *)(auStack_3e0 + lVar39 + 3) = 0;
    auStack_3d1[lVar39 + 9] = 0xff;
    *(uint *)(local_3c8 + lVar39 + -0x19) = local_124c;
    lVar39 = lVar39 + 0x38;
  } while (lVar39 != 0x115);
  local_11c0 = (ulonglong)*param_6;
  local_1228 = (longlong *)CONCAT44(local_1228._4_4_,(int)uVar41);
  uVar50 = (undefined7)
           ((ulonglong)
            ((longlong)&switchD_14301b7b9::switchdataD_14a2fa19c +
            (longlong)(int)(&switchD_14301b7b9::switchdataD_14a2fa19c)[local_11c0]) >> 8);
  local_1230 = uVar76;
  switch(local_11c0) {
  case 0:
    local_1278 = (ulonglong)param_6[1];
    if (0 < (int)param_6[1]) {
      lVar39 = 0x33;
      uVar41 = 0;
      do {
        uVar68 = 0x44;
        if ((uVar41 & 1) == 0) {
          uVar68 = 0x1c;
        }
        uVar76 = uVar41 >> 1 & 0x7fffffff;
        auStack_1d5[uVar76 * 0x38] = uVar68;
        *(undefined1 *)((longlong)local_2e8 + lVar39) = 10;
        auStack_3d1[lVar39 + 9] = 10;
        uVar41 = uVar41 + 1;
        lVar39 = lVar39 + 0x38;
      } while (local_1278 != uVar41);
      local_1248 = (longlong *)(ulonglong)((int)uVar76 + 1);
      local_11e8 = 1;
      local_1284 = (undefined4)CONCAT71((int7)(uVar41 >> 8),1);
      local_11c0 = 0;
      local_1240 = local_1240 & 0xffffffff00000000;
      goto LAB_14301b9a5;
    }
    local_11e8 = 1;
    local_1284 = (undefined4)CONCAT71(uVar50,1);
    local_11c0 = 0;
    local_1240 = (ulonglong)local_1240._4_4_ << 0x20;
    goto LAB_14301b999;
  case 1:
    local_2b5 = 10;
    local_27d = 10;
    local_245 = 10;
    local_20d[0] = 10;
    local_395 = 10;
    local_35d = 10;
    local_1240 = (ulonglong)local_1240._4_4_ << 0x20;
    local_1278 = 4;
    local_11e8 = 2;
    local_1284 = (undefined4)CONCAT71(uVar50,1);
    local_11c0 = 1;
    goto LAB_14301b999;
  case 2:
    local_395 = 10;
    local_2b5 = 10;
    local_35d = 0xf;
    local_27d = 0xf;
    local_1240 = (ulonglong)local_1240._4_4_ << 0x20;
    local_1284 = 0x4a2fa101;
    local_11c0 = 2;
    break;
  case 3:
    local_395 = 10;
    local_2b5 = 10;
    local_1240 = (ulonglong)local_1240._4_4_ << 0x20;
    local_11e8 = 1;
    local_1284 = (undefined4)CONCAT71(uVar50,1);
    local_11c0 = 3;
    local_1278 = 1;
    goto LAB_14301b999;
  case 4:
    local_2b5 = 10;
    local_27d = 0x15;
    local_395 = 10;
    local_35d = 0x15;
    local_1240 = (ulonglong)local_1240._4_4_ << 0x20;
    local_1284 = (undefined4)CONCAT71(uVar50,1);
    local_11c0 = 4;
    break;
  case 5:
    local_2b5 = 10;
    local_27d = 10;
    puVar64 = auStack_3d1 + 9;
    FUN_1472e5f3e(puVar64);
    local_1240 = (ulonglong)local_1240._4_4_ << 0x20;
    local_1284 = (undefined4)CONCAT71((int7)((ulonglong)puVar64 >> 8),1);
    local_11c0 = 5;
    break;
  case 6:
    local_2b5 = 0x1a;
    local_395 = 0x1a;
    local_27d = 0x28;
    local_35d = 0x28;
    local_1240 = (ulonglong)local_1240._4_4_ << 0x20;
    local_1284 = (undefined4)CONCAT71(uVar50,1);
    local_11c0 = 6;
    break;
  case 7:
    local_1248 = (longlong *)0x0;
    local_2b5 = 0x1a;
    local_27d = 0x1a;
    local_245 = 0x47;
    local_395 = 0x1a;
    local_35d = 0x1a;
    local_325 = 0x47;
    local_11e8 = 3;
    local_1240 = CONCAT44(local_1240._4_4_,(int)CONCAT71(uVar50,1));
    local_11c0 = 7;
    local_1284 = (undefined4)CONCAT71(uVar50,1);
    local_1278 = 3;
    goto LAB_14301b9a5;
  default:
    local_1248 = (longlong *)0x0;
    local_1240 = (ulonglong)local_1240._4_4_ << 0x20;
    local_1284 = 0;
    local_11e8 = 0;
    local_1278 = 0;
    goto LAB_14301b9a5;
  }
  local_11e8 = 2;
  local_1278 = 2;
LAB_14301b999:
  local_1248 = (longlong *)0x0;
LAB_14301b9a5:
  local_1210 = param_6[1] * (int)local_11e8;
  local_120c = 2;
  if ((int)local_11c0 != 6) {
    local_120c = (uint)((int)local_11c0 == 7) * 3;
  }
  uVar41 = 0;
  local_408 = (undefined1 *)0x0;
  _local_3f8 = 0x600000000;
  local_c68 = (undefined1 *)0x0;
  local_c58 = 0x600000000;
  uVar66 = *(uint *)(param_2 + 1);
  local_12c0 = param_1;
  local_1290 = param_2;
  if ((int)uVar66 < 1) {
    if ((int)uVar66 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar66);
    }
  }
  else {
    _local_3f8 = CONCAT44(6,uVar66);
    if (6 < uVar66) {
      FUN_143026dda(local_c48);
    }
    puVar64 = local_408;
    if (local_408 == (undefined1 *)0x0) {
      puVar64 = local_c48;
    }
    FUN_143026d5b(puVar64);
    uVar41 = local_c58;
    plVar54 = local_1290;
    iVar69 = (int)local_1290[1];
    iVar46 = (int)local_c58;
    lVar39 = (longlong)(int)local_c58;
    if ((int)local_c58 < iVar69) {
      local_c58 = CONCAT44(local_c58._4_4_,iVar69);
      if ((uint)(local_c58._4_4_ - iVar46) < (uint)(iVar69 - iVar46)) {
        FUN_143026f4e(local_1028,uVar41 & 0xffffffff);
      }
      puVar64 = local_c68;
      if (local_c68 == (undefined1 *)0x0) {
        puVar64 = local_1028;
      }
      FUN_143026f10(puVar64 + lVar39 * 0xa0);
    }
    else {
      if (iVar69 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar69);
      }
      if (iVar69 < (int)local_c58) {
        local_c58 = CONCAT44(local_c58._4_4_,iVar69);
        FUN_1430270e6();
      }
    }
    uVar41 = (ulonglong)*(uint *)(plVar54 + 1);
    if (0 < (int)*(uint *)(plVar54 + 1)) {
      local_11f0 = param_1 + 0x198;
      local_1220 = (ulonglong *)(param_1 + 0x70);
      local_1258 = (ulonglong *)CONCAT44(local_1258._4_4_,(float)(int)uVar37);
      local_12a0 = (ulonglong *)(double)(int)uVar37;
      local_1218 = CONCAT44(local_1218._4_4_,(float)(int)(uint)local_1228);
      local_12b0 = (undefined8 *)CONCAT44(local_12b0._4_4_,(float)(int)uVar47);
      local_1238 = (ulonglong *)(double)(int)uVar47;
      local_1200 = (ulonglong *)CONCAT44(local_1200._4_4_,(float)(int)local_1230);
      local_11d8 = param_1 + 0x178;
      local_11e0 = (longlong *)(param_1 + 0x98);
      local_11d0 = param_1 + 0x168;
      local_1268 = (longlong *)&DAT_0000004c;
      puVar51 = (ulonglong *)0x0;
      do {
        plVar54 = local_11f8;
        local_1270 = (ulonglong *)*local_1290;
        local_12b8 = local_1270 + (longlong)puVar51 * 0x2782;
        puVar64 = local_408;
        if (local_408 == (undefined1 *)0x0) {
          puVar64 = local_c48;
        }
        lVar39 = (longlong)puVar51 * 0x160;
        local_12d8 = (ulonglong *)(puVar64 + lVar39);
        puVar59 = local_c68;
        if (local_c68 == (undefined1 *)0x0) {
          puVar59 = local_1028;
        }
        lVar48 = *(longlong *)(param_6 + 0x1a);
        puVar73 = (ulonglong *)((longlong)puVar51 * 0x60);
        local_1178 = *(undefined1 (*) [8])(lVar48 + (longlong)puVar73);
        local_1170 = *(undefined1 (*) [8])(lVar48 + 8 + (longlong)puVar73);
        local_12c8 = local_12d8;
        local_1298 = puVar51;
        FUN_14301b210(local_12b8,local_11f8,local_1178);
        puVar60 = local_1270;
        *(undefined8 *)(puVar64 + lVar39 + 0x30) =
             *(undefined8 *)(lVar48 + 0x50 + (longlong)puVar73);
        *(undefined8 *)(puVar64 + lVar39 + 0x38) =
             *(undefined8 *)(lVar48 + 0x58 + (longlong)puVar73);
        plVar44 = (longlong *)(puVar64 + lVar39 + 0xb0);
        for (lVar49 = 0xc; lVar49 != 0; lVar49 = lVar49 + -1) {
          *plVar44 = *plVar54;
          plVar54 = plVar54 + 1;
          plVar44 = plVar44 + 1;
        }
        uVar41 = local_1270[(longlong)puVar51 * 0x2782 + 0x231a];
        local_12a8 = (ulonglong *)lVar48;
        local_1280 = puVar73;
        lVar48 = FUN_144a2c9be();
        cVar35 = *(char *)(lVar48 + 0x41);
        if (*(char *)(lVar48 + 0x41) == '\x03') {
          cVar35 = '\x02';
        }
        *(ulonglong *)(puVar64 + lVar39 + 0x110) = uVar41;
        puVar64[lVar39 + 0x118] = cVar35;
        lVar49 = FUN_1447e4f80();
        lVar48 = local_12c0;
        cVar35 = *(char *)(lVar49 + 0x41);
        if (cVar35 == '\x03') {
          cVar35 = '\x02';
        }
        *(ulonglong *)(puVar64 + lVar39 + 0x140) = puVar60[(longlong)puVar51 * 0x2782 + 3];
        puVar64[lVar39 + 0x148] = cVar35;
        plVar54 = (longlong *)puVar60[(longlong)puVar51 * 0x2782 + 0x61b];
        if ((plVar54 == (longlong *)0x0) || ((*(byte *)(plVar54 + 1) & 2) == 0)) {
          local_1148 = (ulonglong *)&DAT_3f8000003f800000;
          uStack_1140 = (ulonglong *)&DAT_3f8000003f800000;
          local_12d0 = &local_1148;
          local_12d8 = (ulonglong *)CONCAT44(local_12d8._4_4_,1);
          lVar39 = FUN_1449cc94d(local_12c0,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
          puVar51 = local_12b8;
        }
        else {
          if (*(code **)(*plVar54 + 0x80) == (code *)&LAB_144b15db6) {
            local_1148 = (ulonglong *)plVar54[(ulonglong)*(uint *)(plVar54 + 0xcd) + 0xd1];
          }
          else {
            local_1148 = (ulonglong *)(**(code **)(*plVar54 + 0x80))();
          }
          puVar51 = local_12b8;
          if (local_1148 != (ulonglong *)0x0) {
            LOCK();
            *(int *)(local_1148 + 1) = (int)local_1148[1] + 1;
            UNLOCK();
          }
          lVar39 = FUN_144735dd8(lVar48,&local_1148);
          if (local_1148 != (ulonglong *)0x0) {
            LOCK();
            puVar60 = local_1148 + 1;
            *(int *)puVar60 = (int)*puVar60 + -1;
            UNLOCK();
            if ((int)*puVar60 == 0) {
              (**(code **)*local_1148)(local_1148,1);
            }
          }
        }
        puVar60 = local_1220;
        cVar35 = *(char *)(lVar39 + 0x68);
        puVar67 = (undefined8 *)(*(longlong *)(lVar48 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar79 = puVar67 + 9;
        if (*(undefined8 **)(lVar48 + 0x78) < puVar79) {
          FUN_140023dd8(local_1220,0x50);
          puVar67 = (undefined8 *)(*puVar60 + 7 & 0xfffffffffffffff8);
          puVar79 = puVar67 + 9;
        }
        *(undefined8 **)(lVar48 + 0x70) = puVar79;
        puVar67[1] = *(undefined8 *)(lVar39 + 8);
        puVar67[2] = 0;
        *(undefined1 *)(puVar67 + 3) = 3;
        *(undefined8 *)((longlong)puVar67 + 0x1c) = 0xffffffffffffffff;
        *puVar67 = &PTR_FUN_14a1fb168;
        *(byte *)(puVar67 + 5) = cVar35 >> 7 & 0x1c;
        *(undefined2 *)((longlong)puVar67 + 0x29) = (undefined2)local_1148;
        *(undefined1 *)((longlong)puVar67 + 0x2b) = local_1148._2_1_;
        *(undefined8 *)((longlong)puVar67 + 0x2c) = 0xffffffff00000000;
        puVar67[7] = 0;
        puVar67[8] = lVar39;
        iVar69 = *(int *)(lVar48 + 0x1a0);
        *(uint *)(lVar48 + 0x1a0) = iVar69 + 1U;
        if (*(uint *)(lVar48 + 0x1a4) < iVar69 + 1U) {
          FUN_1447568fc(local_11f0,iVar69);
        }
        *(undefined8 **)(*(longlong *)(lVar48 + 0x198) + (longlong)iVar69 * 8) = puVar67;
        *(int *)((longlong)puVar67 + 0x1c) = *(int *)(lVar48 + 0x1a0) + -1;
        local_12c8[0x26] = (ulonglong)puVar67;
        if ((*(char *)((longlong)puVar51 + 0x23cc) != '\0') || (local_12c8[0x21] == 0)) {
          uVar41 = FUN_14473c272(lVar48,&DAT_14ca63b28);
          local_12c8[0x21] = uVar41;
        }
        local_12a8 = (ulonglong *)((longlong)local_12a8 + (longlong)local_1280);
        fVar81 = 1.0 / (float)param_6[5];
        *(float *)(local_12c8 + 8) = fVar81 / local_1258._0_4_;
        *(float *)((longlong)local_12c8 + 0x44) = fVar81 / local_12b0._0_4_;
        *(float *)(local_12c8 + 9) =
             (float)(((double)((float)(int)local_12a8[10] * fVar81) + 0.5) / (double)local_12a0);
        *(float *)((longlong)local_12c8 + 0x4c) =
             (float)(((double)((float)*(int *)((longlong)local_12a8 + 0x54) * fVar81) + 0.5) /
                    (double)local_1238);
        *(undefined4 *)(local_12c8 + 10) = (undefined4)local_1218;
        *(undefined4 *)((longlong)local_12c8 + 0x54) = local_1200._0_4_;
        dVar23 = (double)puVar51[0x128];
        dVar24 = (double)puVar51[0x129];
        dVar25 = (double)puVar51[0x12a];
        dVar26 = (double)puVar51[299];
        dVar27 = (double)puVar51[300];
        dVar28 = (double)puVar51[0x12d];
        dVar29 = (double)puVar51[0x12e];
        dVar30 = (double)puVar51[0x12f];
        dVar31 = (double)puVar51[0x130];
        dVar32 = (double)puVar51[0x131];
        unaff_XMM14 = ZEXT816(0);
        dVar103 = dVar25 * 0.0;
        dVar106 = dVar26 * 0.0;
        dVar21 = dVar27 * 0.0;
        dVar22 = dVar28 * 0.0;
        dVar97 = (double)puVar51[0x126] * 0.0;
        dVar100 = (double)puVar51[0x127] * 0.0;
        dVar84 = (double)puVar51[0x3ae];
        dVar115 = (double)puVar51[0x3ae];
        dVar2 = (double)puVar51[0x3b2];
        dVar3 = (double)puVar51[0x3b2];
        dVar109 = dVar23 * 0.0;
        dVar111 = dVar24 * 0.0;
        dVar98 = dVar97 + dVar103;
        dVar101 = dVar100 + dVar106;
        dVar33 = (double)puVar51[0x132];
        dVar110 = dVar109 + dVar21;
        dVar112 = dVar111 + dVar22;
        dVar34 = (double)puVar51[0x134];
        unaff_XMM6._8_8_ = dVar115 * dVar30 + dVar101 + (double)puVar51[0x133];
        dVar104 = dVar33 * 0.0;
        dVar107 = (double)puVar51[0x133] * 0.0;
        in_XMM5._8_8_ = dVar115 * dVar32 + dVar112 + (double)puVar51[0x135];
        dVar115 = dVar34 * 0.0;
        dVar117 = (double)puVar51[0x135] * 0.0;
        unaff_XMM11._8_8_ = (double)puVar51[0x127] + dVar106 + dVar30 * 0.0 + dVar107;
        unaff_XMM11._0_8_ = unaff_XMM11._8_8_;
        *(float *)(local_12c8 + 0xc) =
             (float)((double)puVar51[0x126] + dVar103 + dVar29 * 0.0 + dVar104);
        *(float *)((longlong)local_12c8 + 100) = (float)unaff_XMM11._8_8_;
        *(float *)(local_12c8 + 0xd) = (float)(dVar23 + dVar21 + dVar31 * 0.0 + dVar115);
        *(float *)((longlong)local_12c8 + 0x6c) = (float)(dVar24 + dVar22 + dVar32 * 0.0 + dVar117);
        *(float *)(local_12c8 + 0xe) = (float)(dVar25 + dVar97 + dVar29 * 0.0 + dVar104);
        unaff_XMM6._0_8_ = unaff_XMM6._8_8_;
        *(float *)((longlong)local_12c8 + 0x74) = (float)(dVar26 + dVar100 + dVar30 * 0.0 + dVar107)
        ;
        *(float *)(local_12c8 + 0xf) = (float)(dVar27 + dVar109 + dVar31 * 0.0 + dVar115);
        fVar87 = (float)(dVar84 * dVar31 + dVar110 + dVar34);
        in_XMM3 = ZEXT416((uint)fVar87);
        *(float *)((longlong)local_12c8 + 0x7c) = (float)(dVar28 + dVar111 + dVar32 * 0.0 + dVar117)
        ;
        in_XMM5._0_8_ = in_XMM5._8_8_;
        *(float *)(local_12c8 + 0x10) = (float)(dVar84 * dVar29 + dVar98 + dVar33);
        *(float *)((longlong)local_12c8 + 0x84) = (float)unaff_XMM6._8_8_;
        fVar91 = (float)(dVar29 * dVar2 + dVar98 + dVar104);
        in_XMM4 = ZEXT416((uint)fVar91);
        *(float *)(local_12c8 + 0x11) = fVar87;
        *(float *)((longlong)local_12c8 + 0x8c) = (float)in_XMM5._8_8_;
        *(float *)(local_12c8 + 0x12) = fVar91;
        *(float *)((longlong)local_12c8 + 0x94) = (float)(dVar30 * dVar3 + dVar101 + dVar107);
        *(float *)(local_12c8 + 0x13) = (float)(dVar2 * dVar31 + dVar110 + dVar115);
        dVar115 = (double)(fVar81 * 0.5) + -0.5;
        dVar84 = dVar115 / (double)local_12a0;
        in_XMM2._0_4_ = (float)dVar84;
        in_XMM2._4_8_ = (ulonglong)dVar84 >> 0x20;
        in_XMM2._12_4_ = 0;
        *(float *)((longlong)local_12c8 + 0x9c) = (float)(dVar3 * dVar32 + dVar112 + dVar117);
        *(float *)(local_12c8 + 0x14) = in_XMM2._0_4_;
        *(float *)((longlong)local_12c8 + 0xa4) = (float)(dVar115 / (double)local_1238);
        if (puVar51[0x621] == 0) {
          uVar36 = 0;
        }
        else {
          uVar36 = *(undefined4 *)(puVar51[0x621] + 0x6e0);
        }
        unaff_XMM8._0_12_ = ZEXT812(0x3c8efa35);
        unaff_XMM8._12_4_ = 0;
        *(undefined4 *)(local_12c8 + 0x2a) = uVar36;
        if ((*param_6 == 0) && (0 < (int)param_6[1])) {
          lVar48 = (longlong)local_1298 * 0xa0;
          lVar39 = (longlong)local_1298 * 0xa0;
          puVar58 = (undefined4 *)(puVar59 + (longlong)local_1268);
          uVar41 = 0;
          do {
            plVar54 = *(longlong **)(*(longlong *)(param_6 + uVar41 * 2 + 0xe) + 0x28);
            (**(code **)(*plVar54 + 0x78))(plVar54,&local_1148);
            dVar115 = (double)puVar51[0x208];
            in_XMM2._0_4_ = (float)((double)puVar51[0x207] + (double)uStack_1140);
            in_XMM2._4_4_ = (int)((ulonglong)((double)puVar51[0x207] + (double)uStack_1140) >> 0x20)
            ;
            in_XMM2._8_8_ = 0;
            in_XMM3 = ZEXT416(local_10f8);
            puVar58[-0x13] = (float)((double)puVar51[0x206] + (double)local_1148);
            puVar58[-0x12] = in_XMM2._0_4_;
            puVar58[-0x11] = (float)(dVar115 + (double)CONCAT71(uStack_1137,local_1138));
            puVar58[-0x10] = local_10f8;
            *(ulonglong *)(puVar58 + -3) =
                 CONCAT26(uStack_1112,
                          CONCAT15(auStack_1115[2],
                                   CONCAT14(auStack_1115[1],
                                            CONCAT13(auStack_1115[0],
                                                     CONCAT12(uStack_1116,uStack_1118)))));
            puVar58[-1] = (undefined4)uStack_1110;
            *puVar58 = local_10e8;
            fVar81 = (float)(**(code **)(*plVar54 + 0x50))(plVar54);
            unaff_XMM6._0_8_ = (double)(fVar81 * 0.017453292) * 0.5;
            unaff_XMM6._8_8_ = 0.0;
            fVar81 = (float)(**(code **)(*plVar54 + 0x58))(plVar54);
            dVar115 = tan((double)fVar81 * unaff_XMM6._0_8_);
            lVar49 = (uVar41 >> 2 & 0x3fffffff) * 0x10;
            uVar76 = (ulonglong)(((uint)uVar41 & 3) << 2);
            *(float *)(puVar59 + uVar76 + lVar49 + lVar48 + 0x80) = (float)dVar115;
            *(uint *)(puVar59 + uVar76 + lVar49 + lVar39 + 0x90) = (uint)*(byte *)(plVar54 + 0x3d);
            uVar41 = uVar41 + 1;
            puVar58 = puVar58 + 4;
          } while ((longlong)uVar41 < (longlong)(int)param_6[1]);
        }
        puVar60 = local_1220;
        lVar39 = local_12c0;
        param_1 = local_12c0;
        if (local_120c != 0) {
          if (local_120c == 3) {
            local_12c8[0x24] = *(ulonglong *)(param_6 + 0x16);
            local_12c8[0x25] = *(ulonglong *)(param_6 + 0x18);
          }
          else {
            uStack_1130 = DAT_14ca83a40;
            uStack_1140 = _DAT_14ca83a30;
            local_1138 = (undefined1)_DAT_14ca83a38;
            uStack_1137 = (undefined7)((ulonglong)_DAT_14ca83a38 >> 8);
            uStack_112c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
            uStack_1116 = 0;
            local_1148 = (ulonglong *)0x20009;
            auStack_1115[0] = 0x1c;
            auStack_1115[1] = 0;
            uStack_111c = 0x10001;
            uStack_1118 = 0x101;
            uVar37 = DAT_14ca84e40;
            if ((int)(uint)local_1228 < (int)DAT_14ca84e40) {
              uVar37 = (uint)local_1228;
            }
            if ((int)uVar37 < 2) {
              uVar37 = 1;
            }
            auStack_1115[2] = 0xff;
            uStack_1120 = DAT_14ca84e40;
            if ((int)(uint)local_1230 < (int)DAT_14ca84e40) {
              uStack_1120 = (uint)local_1230;
            }
            if ((int)uStack_1120 < 2) {
              uStack_1120 = 1;
            }
            local_1128 = (ulonglong)uVar37 << 0x20;
            uVar76 = *(longlong *)(local_12c0 + 0x70) + 7U & 0xfffffffffffffff8;
            uVar41 = uVar76 + 0x120;
            if (*(ulonglong *)(local_12c0 + 0x78) < uVar41) {
              FUN_140023dd8(local_1220,0x128);
              uVar76 = *puVar60 + 7 & 0xfffffffffffffff8;
              uVar41 = uVar76 + 0x120;
            }
            *(ulonglong *)(lVar39 + 0x70) = uVar41;
            FUN_1456bbb8c(uVar76,L"DenoiserMetadata0",&local_1148,0);
            iVar69 = *(int *)(lVar39 + 0x180);
            *(uint *)(lVar39 + 0x180) = iVar69 + 1U;
            if (*(uint *)(lVar39 + 0x184) < iVar69 + 1U) {
              FUN_14472c0f6(local_11d8,iVar69);
            }
            puVar60 = local_1220;
            *(ulonglong *)(*(longlong *)(lVar39 + 0x178) + (longlong)iVar69 * 8) = uVar76;
            *(int *)(uVar76 + 0x9c) = *(int *)(lVar39 + 0x180) + -1;
            local_12c8[0x24] = uVar76;
            local_12c8[0x25] = 0;
            puVar67 = (undefined8 *)(*(longlong *)(lVar39 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar79 = puVar67 + 0x30;
            if (*(undefined8 **)(lVar39 + 0x78) < puVar79) {
              FUN_140023dd8(local_1220,400);
              puVar67 = (undefined8 *)(*puVar60 + 0xf & 0xfffffffffffffff0);
              puVar79 = puVar67 + 0x30;
            }
            *(undefined8 **)(lVar39 + 0x70) = puVar79;
            *puVar67 = &PTR_FUN_14a2f7f38;
            puVar67[2] = 0;
            puVar67[3] = 0x3f80000000000000;
            puVar67[4] = 0;
            puVar67[5] = 0x3f80000000000000;
            puVar67[6] = 0;
            puVar67[7] = 0x3f80000000000000;
            puVar67[10] = 0;
            puVar67[0xb] = 0x3f80000000000000;
            puVar67[0x18] = 0;
            puVar67[0x19] = 0;
            puVar67[0x1a] = 0;
            puVar67[0x1b] = 0;
            puVar67[0x1c] = 0;
            puVar67[0x1d] = 0;
            puVar67[0x1e] = 0;
            puVar67[0x1f] = 0;
            puVar67[0x20] = 0;
            puVar67[0x21] = 0;
            puVar67[0x22] = 0;
            puVar67[0x23] = 0;
            puVar67[0x24] = 0;
            *(undefined1 *)(puVar67 + 0x25) = 1;
            puVar67[0x2a] = 0;
            puVar67[0x28] = 0;
            puVar67[0x29] = 0;
            puVar67[0x26] = 0;
            puVar67[0x27] = 0;
            *(undefined1 *)(puVar67 + 0x2b) = 1;
            puVar67[0x2e] = 0;
            puVar67[0x2f] = 0;
            iVar69 = *(int *)(lVar39 + 0xa0);
            *(uint *)(lVar39 + 0xa0) = iVar69 + 1U;
            if (*(uint *)(lVar39 + 0xa4) < iVar69 + 1U) {
              FUN_1448cfae8(local_11e0,iVar69);
            }
            puVar60 = local_12c8;
            local_12b8 = puVar67 + 2;
            *(undefined8 **)(*local_11e0 + (longlong)iVar69 * 8) = puVar67;
            memcpy(local_12b8,local_12c8,0x158);
            lVar39 = 0;
            bVar80 = true;
            do {
              bVar56 = bVar80;
              puVar73 = local_1220;
              lVar48 = local_12c0;
              uVar41 = puVar60[lVar39 + 0x24];
              if (uVar41 == 0) {
                puVar79 = (undefined8 *)0x0;
              }
              else {
                uVar68 = *(undefined1 *)(uVar41 + 0x94);
                puVar79 = (undefined8 *)(*(longlong *)(local_12c0 + 0x70) + 7U & 0xfffffffffffffff8)
                ;
                puVar74 = puVar79 + 9;
                if (*(undefined8 **)(local_12c0 + 0x78) < puVar74) {
                  FUN_140023dd8(local_1220,0x50);
                  puVar79 = (undefined8 *)(*puVar73 + 7 & 0xfffffffffffffff8);
                  puVar74 = puVar79 + 9;
                  puVar60 = local_12c8;
                }
                *(undefined8 **)(lVar48 + 0x70) = puVar74;
                puVar79[1] = *(undefined8 *)(uVar41 + 8);
                puVar79[2] = 0;
                *(undefined1 *)(puVar79 + 3) = 0;
                *(undefined8 *)((longlong)puVar79 + 0x1c) = 0xffffffffffffffff;
                *(undefined1 *)(puVar79 + 5) = 0;
                *puVar79 = &PTR_FUN_14a1fb948;
                *(undefined1 *)(puVar79 + 6) = uVar68;
                *(undefined1 *)(puVar79 + 7) = 0;
                *(undefined4 *)((longlong)puVar79 + 0x31) = 0;
                *(undefined2 *)((longlong)puVar79 + 0x35) = 0;
                puVar79[8] = uVar41;
                iVar69 = *(int *)(lVar48 + 0x1a0);
                *(uint *)(lVar48 + 0x1a0) = iVar69 + 1U;
                if (*(uint *)(lVar48 + 0x1a4) < iVar69 + 1U) {
                  FUN_1447568fc(local_11f0,iVar69);
                  puVar60 = local_12c8;
                }
                *(undefined8 **)(*(longlong *)(lVar48 + 0x198) + (longlong)iVar69 * 8) = puVar79;
                *(int *)((longlong)puVar79 + 0x1c) = *(int *)(lVar48 + 0x1a0) + -1;
              }
              puVar67[lVar39 + 0x2e] = puVar79;
              lVar39 = 1;
              bVar80 = false;
            } while (bVar56);
            uVar41 = puVar51[0x2703];
            FUN_14301a6d0();
            FUN_1448e935e(uVar41,&local_1148,&DAT_14ca4bd58,local_120c);
            FUN_14301a6d0();
            lVar39 = (longlong)local_1148;
            local_12c8 = uStack_1140;
            iVar46 = *(int *)((longlong)local_12a8 + 0x5c) - *(int *)((longlong)local_12a8 + 0x54);
            iVar69 = iVar46 + 7;
            iVar46 = iVar46 + 0xe;
            if (-1 < iVar69) {
              iVar46 = iVar69;
            }
            iVar38 = (int)local_12a8[0xb] - (int)local_12a8[10];
            iVar69 = iVar38 + 7;
            iVar38 = iVar38 + 0xe;
            if (-1 < iVar69) {
              iVar38 = iVar69;
            }
            FUN_143022f56();
            param_1 = local_12c0;
            puVar51 = DAT_14ca4be50;
            uVar76 = DAT_14ca4be50[7];
            if (0 < (longlong)(int)uVar76) {
              local_12a8 = (ulonglong *)(lVar39 + 0x20);
              lVar48 = 0;
              iVar78 = 0;
              iVar69 = 0;
              uVar41 = 0;
              do {
                bVar4 = *(byte *)(puVar51[6] + 2 + lVar48 * 4);
                if (bVar4 < 0x14) {
                  uVar5 = *(ushort *)(puVar51[6] + lVar48 * 4);
                  uVar40 = (ulonglong)uVar5;
                  iVar57 = iVar69;
                  if ((0x67200U >> (bVar4 & 0x1f) & 1) == 0) {
                    if (bVar4 == 0x13) {
                      iVar71 = (int)uVar41;
                      if (iVar71 < *(int *)(lVar39 + 0x38)) {
                        uVar62 = *(ulonglong *)(lVar39 + 0x30);
                        uVar61 = ((longlong)uVar62 >> 0x18) + lVar39 + 0x30;
                        if ((uVar62 & 1) == 0) {
                          uVar61 = uVar62;
                        }
                        if (uVar5 == *(ushort *)(uVar61 + 2 + (longlong)iVar71 * 4)) {
                          uVar41 = (ulonglong)(iVar71 + 1);
                          goto LAB_14301c81a;
                        }
                      }
                      if ((*(longlong *)((longlong)local_12b8 + uVar40) != 0) &&
                         ((*(byte *)((longlong)local_12b8 + uVar40 + 8) & 2) == 0))
                      goto LAB_14301c80a;
                    }
                  }
                  else {
                    iVar71 = *(int *)(lVar39 + 0x18);
                    if (iVar78 < iVar71) {
                      uVar62 = *(ulonglong *)(lVar39 + 0x10);
                      uVar61 = ((longlong)uVar62 >> 0x18) + lVar39 + 0x10;
                      if ((uVar62 & 1) == 0) {
                        uVar61 = uVar62;
                      }
                      puVar52 = (ushort *)(uVar61 + (longlong)iVar78 * 4);
                      iVar70 = iVar78;
                      do {
                        if (uVar5 <= *puVar52) {
                          iVar78 = iVar70;
                          if (*puVar52 == uVar5) goto LAB_14301c81a;
                          break;
                        }
                        iVar70 = iVar70 + 1;
                        puVar52 = puVar52 + 2;
                        iVar78 = iVar71;
                      } while (iVar71 != iVar70);
                    }
                    iVar71 = *(int *)(lVar39 + 0x28);
                    if (iVar69 < iVar71) {
                      uVar62 = *local_12a8;
                      uVar61 = ((longlong)uVar62 >> 0x18) + (longlong)local_12a8;
                      if ((uVar62 & 1) == 0) {
                        uVar61 = uVar62;
                      }
                      puVar52 = (ushort *)(uVar61 + (longlong)iVar69 * 6);
                      do {
                        if (uVar5 <= *puVar52) {
                          iVar57 = iVar69;
                          if (*puVar52 == uVar5) goto LAB_14301c81a;
                          break;
                        }
                        iVar69 = iVar69 + 1;
                        puVar52 = puVar52 + 3;
                        iVar57 = iVar71;
                      } while (iVar71 != iVar69);
                    }
LAB_14301c80a:
                    *(undefined8 *)((longlong)local_12b8 + uVar40) = 0;
                    iVar69 = iVar57;
                  }
                }
LAB_14301c81a:
                lVar48 = lVar48 + 1;
              } while (lVar48 != (int)uVar76);
            }
            FUN_140069376(local_12c0);
            puVar51 = local_1220;
            uVar55 = (undefined6)(uVar41 >> 0x10);
            uVar41 = CONCAT62(uVar55,2);
            if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
               ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
              uVar41 = CONCAT62(uVar55,4);
            }
            puVar67 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar79 = puVar67 + 0x3d;
            if (*(undefined8 **)(param_1 + 0x78) < puVar79) {
              FUN_140023dd8(local_1220,0x1f0);
              puVar67 = (undefined8 *)(*puVar51 + 7 & 0xfffffffffffffff8);
              puVar79 = puVar67 + 0x3d;
            }
            *local_1220 = (ulonglong)puVar79;
            local_1148 = local_12b8;
            uStack_1140 = DAT_14ca4be50;
            if (DAT_14ca4be50 != (ulonglong *)0x0) {
              LOCK();
              *(int *)(DAT_14ca4be50 + 1) = (int)DAT_14ca4be50[1] + 1;
              UNLOCK();
            }
            local_1138 = 8;
            uStack_1137 = 0x14ca4be;
            local_12d8 = (ulonglong *)CONCAT71(local_12d8._1_7_,2);
            FUN_140068f1a(puVar67,local_128,&local_1148,uVar41 & 0xffffffff);
            *puVar67 = &PTR_FUN_14a2f7f40;
            puVar67[0x37] = &DAT_14ca4be08;
            puVar67[0x38] = local_12b8;
            puVar67[0x39] = lVar39;
            puVar67[0x3a] = local_12c8;
            *(int *)(puVar67 + 0x3b) = iVar38 >> 3;
            *(int *)((longlong)puVar67 + 0x1dc) = iVar46 >> 3;
            *(undefined4 *)(puVar67 + 0x3c) = 1;
            iVar69 = *(int *)(param_1 + 0x170);
            *(uint *)(param_1 + 0x170) = iVar69 + 1U;
            if (*(uint *)(param_1 + 0x174) < iVar69 + 1U) {
              FUN_14470e57a(local_11d0,iVar69);
            }
            *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar69 * 8) = puVar67;
            *(int *)((longlong)puVar67 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
            FUN_140069100(param_1,puVar67);
          }
        }
        unaff_XMM7 = ZEXT816(0x3fe0000000000000);
        puVar51 = (ulonglong *)((longlong)local_1298 + 1);
        uVar41 = (ulonglong)(int)local_1290[1];
        local_1268 = local_1268 + 0x14;
      } while ((longlong)puVar51 < (longlong)uVar41);
    }
  }
  local_1038 = *(undefined1 (*) [16])(param_5 + 2);
  local_1048 = *param_5;
  uStack_1040 = param_5[1];
  if (*param_6 == 0) {
    local_118 = ZEXT816(0);
    _local_128 = ZEXT816(0);
    if (0 < (int)local_1248) {
      uVar41 = (ulonglong)local_1248 & 0xffffffff;
      lVar39 = 0;
      puVar64 = local_20d + 5;
      do {
        uVar42 = FUN_14472bf7a(param_1,puVar64,
                               *(undefined8 *)
                                ((longlong)&PTR_u_Shadow_Denoiser_Injest0_14a2f7fc0 + lVar39),0);
        *(undefined8 *)(local_128 + lVar39) = uVar42;
        lVar39 = lVar39 + 8;
        puVar64 = puVar64 + 0x38;
      } while (uVar41 << 3 != lVar39);
      uVar41 = (ulonglong)*(uint *)(local_1290 + 1);
    }
    auVar113 = _DAT_149932320;
    if (0 < (int)uVar41) {
      puVar51 = (ulonglong *)(param_1 + 0x70);
      local_1270 = (ulonglong *)(param_1 + 0x98);
      local_12b0 = (undefined8 *)(param_1 + 0x198);
      local_1268 = (longlong *)(param_1 + 0x168);
      local_1258 = (ulonglong *)(param_1 + 0x178);
      unaff_XMM7 = ZEXT816(0);
      puVar60 = (ulonglong *)0x0;
      local_12b8 = puVar51;
      do {
        puVar64 = local_408;
        if (local_408 == (undefined1 *)0x0) {
          puVar64 = local_c48;
        }
        puVar59 = local_c68;
        if (local_c68 == (undefined1 *)0x0) {
          puVar59 = local_1028;
        }
        local_1298 = (ulonglong *)*local_1290;
        local_12a0 = *(ulonglong **)(param_6 + 0x1a);
        puVar67 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar79 = puVar67 + 0x4c;
        if (*(undefined8 **)(param_1 + 0x78) < puVar79) {
          FUN_140023dd8(puVar51,0x270);
          puVar67 = (undefined8 *)(*puVar51 + 0xf & 0xfffffffffffffff0);
          puVar79 = puVar67 + 0x4c;
        }
        *(undefined8 **)(local_12c0 + 0x70) = puVar79;
        *puVar67 = &PTR_FUN_14a2f80c0;
        *(undefined1 (*) [16])(puVar67 + 2) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 4) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 6) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 10) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x18) = unaff_XMM7;
        *(undefined1 (*) [16])(puVar67 + 0x1a) = unaff_XMM7;
        *(undefined1 (*) [16])(puVar67 + 0x1c) = unaff_XMM7;
        *(undefined1 (*) [16])(puVar67 + 0x1e) = unaff_XMM7;
        *(undefined1 (*) [16])(puVar67 + 0x20) = unaff_XMM7;
        *(undefined1 (*) [16])(puVar67 + 0x22) = unaff_XMM7;
        puVar67[0x24] = 0;
        *(undefined1 *)(puVar67 + 0x25) = 1;
        puVar67[0x2a] = 0;
        *(undefined1 (*) [16])(puVar67 + 0x28) = unaff_XMM7;
        *(undefined1 (*) [16])(puVar67 + 0x26) = unaff_XMM7;
        *(undefined1 *)(puVar67 + 0x2b) = 1;
        *(undefined1 (*) [16])(puVar67 + 0x30) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x2e) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x34) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x32) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x38) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x36) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x3c) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x3a) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x3e) = auVar113;
        puVar67[0x4a] = 0;
        *(undefined1 (*) [16])(puVar67 + 0x48) = unaff_XMM7;
        *(undefined1 (*) [16])(puVar67 + 0x46) = unaff_XMM7;
        *(undefined1 (*) [16])(puVar67 + 0x44) = unaff_XMM7;
        *(undefined1 (*) [16])(puVar67 + 0x42) = unaff_XMM7;
        iVar69 = *(int *)(local_12c0 + 0xa0);
        *(uint *)(local_12c0 + 0xa0) = iVar69 + 1U;
        if (*(uint *)(local_12c0 + 0xa4) < iVar69 + 1U) {
          FUN_1448cfae8(local_1270,iVar69);
        }
        lVar39 = local_12c0;
        local_12c8 = puVar67 + 2;
        *(undefined8 **)(*(longlong *)(local_12c0 + 0x98) + (longlong)iVar69 * 8) = puVar67;
        local_12a8 = puVar60;
        memcpy(local_12c8,puVar64 + (longlong)puVar60 * 0x160,0x158);
        memcpy(puVar67 + 0x2e,puVar59 + (longlong)puVar60 * 0xa0,0xa0);
        puVar67[0x42] = local_1048;
        puVar67[0x43] = uStack_1040;
        puVar67[0x44] = local_1038._0_8_;
        puVar67[0x45] = local_1038._8_8_;
        FUN_143026839(&local_1148,lVar39,local_128);
        puVar51 = local_12b8;
        puVar67[0x48] = CONCAT71(uStack_1137,local_1138);
        puVar67[0x49] = CONCAT44(uStack_112c,uStack_1130);
        puVar67[0x46] = local_1148;
        puVar67[0x47] = uStack_1140;
        local_1148 = (ulonglong *)0x20009;
        auStack_1115[1] = 0;
        uStack_111c = 0x10001;
        uStack_1118 = 0x101;
        uStack_1116 = 0;
        auStack_1115[0] = 10;
        uStack_1130 = local_3d8;
        uStack_1140 = stack0xfffffffffffffc18;
        local_1138 = auStack_3e0[0];
        uStack_1137 = auStack_3e0._1_7_;
        uVar37 = DAT_14ca84e40;
        if ((int)(uint)local_1228 < (int)DAT_14ca84e40) {
          uVar37 = (uint)local_1228;
        }
        if ((int)uVar37 < 2) {
          uVar37 = 1;
        }
        auStack_1115[2] = 0xff;
        uStack_1120 = DAT_14ca84e40;
        if ((int)(uint)local_1230 < (int)DAT_14ca84e40) {
          uStack_1120 = (uint)local_1230;
        }
        uStack_112c = local_124c;
        if ((int)uStack_1120 < 2) {
          uStack_1120 = 1;
        }
        local_1128 = (ulonglong)uVar37 << 0x20;
        uVar76 = *(longlong *)(lVar39 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar41 = uVar76 + 0x120;
        if (*(ulonglong *)(lVar39 + 0x78) < uVar41) {
          FUN_140023dd8(local_12b8,0x128);
          uVar76 = *puVar51 + 7 & 0xfffffffffffffff8;
          uVar41 = uVar76 + 0x120;
        }
        *(ulonglong *)(lVar39 + 0x70) = uVar41;
        FUN_1456bbb8c(uVar76,L"DebugDenoiserInjest",&local_1148,0);
        iVar69 = *(int *)(lVar39 + 0x180);
        *(uint *)(lVar39 + 0x180) = iVar69 + 1U;
        if (*(uint *)(lVar39 + 0x184) < iVar69 + 1U) {
          FUN_14472c0f6(local_1258,iVar69);
        }
        *(ulonglong *)(*(longlong *)(lVar39 + 0x178) + (longlong)iVar69 * 8) = uVar76;
        *(int *)(uVar76 + 0x9c) = *(int *)(lVar39 + 0x180) + -1;
        uVar68 = *(undefined1 *)(uVar76 + 0x94);
        puVar74 = (undefined8 *)(*(longlong *)(lVar39 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar79 = puVar74 + 9;
        if (*(undefined8 **)(lVar39 + 0x78) < puVar79) {
          FUN_140023dd8(puVar51,0x50);
          puVar74 = (undefined8 *)(*puVar51 + 7 & 0xfffffffffffffff8);
          puVar79 = puVar74 + 9;
        }
        *(undefined8 **)(lVar39 + 0x70) = puVar79;
        puVar74[1] = *(undefined8 *)(uVar76 + 8);
        puVar74[2] = 0;
        *(undefined1 *)(puVar74 + 3) = 0;
        *(undefined8 *)((longlong)puVar74 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar74 + 5) = 0;
        *puVar74 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar74 + 6) = uVar68;
        *(undefined4 *)((longlong)puVar74 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar74 + 0x35) = 0;
        *(undefined1 *)(puVar74 + 7) = 0;
        puVar74[8] = uVar76;
        iVar69 = *(int *)(lVar39 + 0x1a0);
        *(uint *)(lVar39 + 0x1a0) = iVar69 + 1U;
        if (*(uint *)(lVar39 + 0x1a4) < iVar69 + 1U) {
          FUN_1447568fc(local_12b0,iVar69);
        }
        puVar51 = local_12a8;
        *(undefined8 **)(*(longlong *)(lVar39 + 0x198) + (longlong)iVar69 * 8) = puVar74;
        *(int *)((longlong)puVar74 + 0x1c) = *(int *)(lVar39 + 0x1a0) + -1;
        puVar67[0x4a] = puVar74;
        uVar42 = *(undefined8 *)((longlong)local_1298 + 0x13818 + (longlong)local_12a8 * 0x13c10);
        FUN_14301a910();
        FUN_1448e935e(uVar42,&local_1148,&DAT_14ca4bfb0);
        FUN_14301a910();
        lVar39 = (longlong)local_1148;
        local_1298 = uStack_1140;
        iVar46 = *(int *)((longlong)local_12a0 + (longlong)puVar51 * 0x60 + 0x5c) -
                 *(int *)((longlong)local_12a0 + (longlong)puVar51 * 0x60 + 0x54);
        iVar69 = iVar46 + 7;
        iVar46 = iVar46 + 0xe;
        if (-1 < iVar69) {
          iVar46 = iVar69;
        }
        iVar38 = (int)local_12a0[(longlong)puVar51 * 0xc + 0xb] -
                 (int)local_12a0[(longlong)puVar51 * 0xc + 10];
        iVar69 = iVar38 + 7;
        iVar38 = iVar38 + 0xe;
        if (-1 < iVar69) {
          iVar38 = iVar69;
        }
        FUN_143023d6a();
        puVar51 = DAT_14ca4c0a8;
        uVar41 = DAT_14ca4c0a8[7];
        if (0 < (longlong)(int)uVar41) {
          local_12a0 = (ulonglong *)(lVar39 + 0x30);
          local_1280 = (ulonglong *)(lVar39 + 0x20);
          lVar48 = 0;
          iVar78 = 0;
          iVar69 = 0;
          iVar57 = 0;
          do {
            bVar4 = *(byte *)(puVar51[6] + 2 + lVar48 * 4);
            if (bVar4 < 0x14) {
              uVar5 = *(ushort *)(puVar51[6] + lVar48 * 4);
              uVar76 = (ulonglong)uVar5;
              iVar71 = iVar69;
              if ((0x67200U >> (bVar4 & 0x1f) & 1) == 0) {
                if (bVar4 == 0x13) {
                  if (iVar57 < *(int *)(lVar39 + 0x38)) {
                    uVar40 = *local_12a0;
                    uVar62 = ((longlong)uVar40 >> 0x18) + (longlong)local_12a0;
                    if ((uVar40 & 1) == 0) {
                      uVar62 = uVar40;
                    }
                    if (uVar5 == *(ushort *)(uVar62 + 2 + (longlong)iVar57 * 4)) {
                      iVar57 = iVar57 + 1;
                      goto LAB_14301d212;
                    }
                  }
                  if ((*(longlong *)((longlong)local_12c8 + uVar76) != 0) &&
                     ((*(byte *)((longlong)local_12c8 + uVar76 + 8) & 2) == 0)) goto LAB_14301d205;
                }
              }
              else {
                iVar70 = *(int *)(lVar39 + 0x18);
                if (iVar78 < iVar70) {
                  uVar40 = *(ulonglong *)(lVar39 + 0x10);
                  uVar62 = ((longlong)uVar40 >> 0x18) + lVar39 + 0x10;
                  if ((uVar40 & 1) == 0) {
                    uVar62 = uVar40;
                  }
                  puVar52 = (ushort *)(uVar62 + (longlong)iVar78 * 4);
                  iVar72 = iVar78;
                  do {
                    if (uVar5 <= *puVar52) {
                      iVar78 = iVar72;
                      if (*puVar52 == uVar5) goto LAB_14301d212;
                      break;
                    }
                    iVar72 = iVar72 + 1;
                    puVar52 = puVar52 + 2;
                    iVar78 = iVar70;
                  } while (iVar70 != iVar72);
                }
                iVar70 = *(int *)(lVar39 + 0x28);
                if (iVar69 < iVar70) {
                  uVar40 = *local_1280;
                  uVar62 = ((longlong)uVar40 >> 0x18) + (longlong)local_1280;
                  if ((uVar40 & 1) == 0) {
                    uVar62 = uVar40;
                  }
                  puVar52 = (ushort *)(uVar62 + (longlong)iVar69 * 6);
                  do {
                    if (uVar5 <= *puVar52) {
                      iVar71 = iVar69;
                      if (*puVar52 == uVar5) goto LAB_14301d212;
                      break;
                    }
                    iVar69 = iVar69 + 1;
                    puVar52 = puVar52 + 3;
                    iVar71 = iVar70;
                  } while (iVar70 != iVar69);
                }
LAB_14301d205:
                *(undefined8 *)((longlong)local_12c8 + uVar76) = 0;
                iVar69 = iVar71;
              }
            }
LAB_14301d212:
            lVar48 = lVar48 + 1;
          } while (lVar48 != (int)uVar41);
        }
        FUN_140069376(local_12c0);
        puVar51 = local_12b8;
        puVar60 = local_12c8;
        puVar67 = (undefined8 *)(*(longlong *)(local_12c0 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar79 = puVar67 + 0x3d;
        if (*(undefined8 **)(local_12c0 + 0x78) < puVar79) {
          FUN_140023dd8(local_12b8,0x1f0);
          puVar67 = (undefined8 *)(*puVar51 + 7 & 0xfffffffffffffff8);
          puVar79 = puVar67 + 0x3d;
        }
        *puVar51 = (ulonglong)puVar79;
        local_1148 = puVar60;
        uStack_1140 = DAT_14ca4c0a8;
        if (DAT_14ca4c0a8 != (ulonglong *)0x0) {
          LOCK();
          *(int *)(DAT_14ca4c0a8 + 1) = (int)DAT_14ca4c0a8[1] + 1;
          UNLOCK();
        }
        local_1138 = 0x60;
        uStack_1137 = 0x14ca4c0;
        local_12d8 = (ulonglong *)CONCAT71(local_12d8._1_7_,2);
        FUN_140068f1a(puVar67,local_1068);
        param_1 = local_12c0;
        *puVar67 = &PTR_FUN_14a2f80d0;
        puVar67[0x37] = &DAT_14ca4c060;
        puVar67[0x38] = puVar60;
        puVar67[0x39] = lVar39;
        puVar67[0x3a] = local_1298;
        *(int *)(puVar67 + 0x3b) = iVar38 >> 3;
        *(int *)((longlong)puVar67 + 0x1dc) = iVar46 >> 3;
        *(undefined4 *)(puVar67 + 0x3c) = 1;
        iVar69 = *(int *)(local_12c0 + 0x170);
        *(uint *)(local_12c0 + 0x170) = iVar69 + 1U;
        if (*(uint *)(local_12c0 + 0x174) < iVar69 + 1U) {
          FUN_14470e57a(local_1268,iVar69);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar69 * 8) = puVar67;
        *(int *)((longlong)puVar67 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
        FUN_140069100(param_1);
        puVar60 = (ulonglong *)((longlong)local_12a8 + 1);
        uVar41 = (ulonglong)(int)local_1290[1];
        unaff_XMM6 = auVar113;
      } while ((longlong)puVar60 < (longlong)uVar41);
    }
    local_1038 = local_118;
    local_1048 = local_128._0_8_;
    uStack_1040 = stack0xfffffffffffffee0;
  }
  if ((char)param_6[6] == '\x01') {
    uVar37 = *param_6;
    local_118 = ZEXT816(0);
    _local_128 = ZEXT816(0);
    if (0 < (int)local_1278) {
      uVar41 = local_1278 & 0xffffffff;
      puVar63 = local_2e8;
      uVar76 = 0;
      do {
        uVar42 = FUN_14472bf7a(param_1,puVar63,
                               (&PTR_u_Shadow_Denoiser_Reconstruction0_14a2f7c00)
                               [(longlong)(int)(uVar37 << 2) + uVar76],0);
        *(undefined8 *)(local_128 + uVar76 * 8) = uVar42;
        uVar76 = uVar76 + 1;
        puVar63 = puVar63 + 0x1c;
      } while (uVar41 != uVar76);
      uVar41 = (ulonglong)*(uint *)(local_1290 + 1);
    }
    auVar113 = _DAT_149932320;
    if (0 < (int)uVar41) {
      fVar81 = (float)(int)local_1230;
      unaff_XMM6 = ZEXT416((uint)fVar81);
      local_12a0 = (ulonglong *)(param_1 + 0x70);
      fVar87 = (float)(int)(uint)local_1228;
      unaff_XMM7 = ZEXT416((uint)fVar87);
      local_1298 = (ulonglong *)(param_1 + 0x98);
      local_1270 = (ulonglong *)(param_1 + 0x198);
      local_1280 = (ulonglong *)(param_1 + 0x178);
      local_12b8 = (ulonglong *)&DAT_00000018;
      unaff_XMM11._0_12_ = ZEXT812(0x3f000000);
      unaff_XMM11._12_4_ = 0;
      lVar39 = 0;
      do {
        puVar51 = local_12a0;
        puVar64 = local_408;
        if (local_408 == (undefined1 *)0x0) {
          puVar64 = local_c48;
        }
        puVar59 = local_c68;
        if (local_c68 == (undefined1 *)0x0) {
          puVar59 = local_1028;
        }
        local_12a8 = (ulonglong *)*local_1290;
        puVar60 = *(ulonglong **)(param_6 + 0x1a);
        puVar67 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar79 = puVar67 + 0x5c;
        if (*(undefined8 **)(param_1 + 0x78) < puVar79) {
          FUN_140023dd8(local_12a0,0x2f0);
          puVar67 = (undefined8 *)(*puVar51 + 0xf & 0xfffffffffffffff0);
          puVar79 = puVar67 + 0x5c;
        }
        *(undefined8 **)(local_12c0 + 0x70) = puVar79;
        *puVar67 = &PTR_FUN_14a2f8608;
        *(undefined1 (*) [16])(puVar67 + 4) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 2) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 8) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 6) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0xe) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x10) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x12) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x16) = auVar113;
        *(undefined4 *)(puVar67 + 0x24) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x124) = 0;
        *(undefined4 *)(puVar67 + 0x25) = 0;
        *(undefined4 *)((longlong)puVar67 + 300) = 0;
        *(undefined4 *)(puVar67 + 0x26) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x134) = 0;
        *(undefined4 *)(puVar67 + 0x27) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x13c) = 0;
        *(undefined4 *)(puVar67 + 0x28) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x144) = 0;
        *(undefined4 *)(puVar67 + 0x29) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x14c) = 0;
        *(undefined4 *)(puVar67 + 0x2a) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x154) = 0;
        *(undefined4 *)(puVar67 + 0x2b) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x15c) = 0;
        *(undefined4 *)(puVar67 + 0x2c) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x164) = 0;
        *(undefined4 *)(puVar67 + 0x2d) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x16c) = 0;
        *(undefined4 *)(puVar67 + 0x2e) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x174) = 0;
        *(undefined4 *)(puVar67 + 0x2f) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x17c) = 0;
        puVar67[0x30] = 0;
        *(undefined1 *)(puVar67 + 0x31) = 1;
        puVar67[0x36] = 0;
        *(undefined4 *)(puVar67 + 0x34) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x1a4) = 0;
        *(undefined4 *)(puVar67 + 0x35) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x1ac) = 0;
        *(undefined4 *)(puVar67 + 0x32) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x194) = 0;
        *(undefined4 *)(puVar67 + 0x33) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x19c) = 0;
        *(undefined1 *)(puVar67 + 0x37) = 1;
        *(undefined1 (*) [16])(puVar67 + 0x3c) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x3a) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x40) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x3e) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x44) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x42) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x48) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x46) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x4a) = auVar113;
        *(undefined4 *)(puVar67 + 0x4e) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x274) = 0;
        *(undefined4 *)(puVar67 + 0x4f) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x27c) = 0;
        *(undefined4 *)(puVar67 + 0x50) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x284) = 0;
        *(undefined4 *)(puVar67 + 0x51) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x28c) = 0;
        *(undefined4 *)(puVar67 + 0x52) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x294) = 0;
        *(undefined4 *)(puVar67 + 0x53) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x29c) = 0;
        *(undefined4 *)(puVar67 + 0x54) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x2a4) = 0;
        *(undefined4 *)(puVar67 + 0x55) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x2ac) = 0;
        *(undefined4 *)(puVar67 + 0x56) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x2b4) = 0;
        *(undefined4 *)(puVar67 + 0x57) = 0;
        *(undefined4 *)((longlong)puVar67 + 700) = 0;
        *(undefined4 *)(puVar67 + 0x58) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x2c4) = 0;
        *(undefined4 *)(puVar67 + 0x59) = 0;
        *(undefined4 *)((longlong)puVar67 + 0x2cc) = 0;
        puVar67[0x5a] = 0;
        iVar69 = *(int *)(local_12c0 + 0xa0);
        uVar37 = iVar69 + 1;
        *(uint *)(local_12c0 + 0xa0) = uVar37;
        if (*(uint *)(local_12c0 + 0xa4) < uVar37) {
          FUN_1448cfae8();
        }
        *(undefined8 **)(*local_1298 + (longlong)iVar69 * 8) = puVar67;
        if (0 < (int)param_6[1]) {
          puVar43 = (undefined1 *)((longlong)local_12b8 + (longlong)puVar60);
          lVar48 = 0;
          lVar49 = 0;
          do {
            uVar42 = *(undefined8 *)(puVar43 + lVar48 + -8);
            uVar6 = *(undefined8 *)(puVar43 + lVar48);
            fVar88 = ((float)(int)((ulonglong)uVar42 >> 0x20) + 0.5) / fVar81;
            in_XMM3 = ZEXT416((uint)fVar88);
            fVar91 = ((float)(int)uVar42 + 0.5) / fVar87;
            in_XMM2 = ZEXT416((uint)fVar91);
            *(float *)((longlong)puVar67 + lVar48 + 0x10) = fVar91;
            *(float *)((longlong)puVar67 + lVar48 + 0x14) = fVar88;
            *(float *)((longlong)puVar67 + lVar48 + 0x18) = ((float)(int)uVar6 + -0.5) / fVar87;
            *(float *)((longlong)puVar67 + lVar48 + 0x1c) =
                 ((float)(int)((ulonglong)uVar6 >> 0x20) + -0.5) / fVar81;
            lVar49 = lVar49 + 1;
            lVar48 = lVar48 + 0x10;
          } while (lVar49 < (int)param_6[1]);
        }
        *(uint *)(puVar67 + 10) = param_6[7];
        *(undefined4 *)((longlong)puVar67 + 0x54) = 1;
        *(int *)(puVar67 + 0xb) = (int)((float)param_6[5] / (float)param_6[4]);
        *(uint *)(puVar67 + 0xc) = param_6[2];
        local_12c8 = puVar60;
        memcpy(puVar67 + 0xe,puVar64 + lVar39 * 0x160,0x158);
        memcpy(puVar67 + 0x3a,puVar59 + lVar39 * 0xa0,0xa0);
        param_1 = local_12c0;
        puVar67[0x4e] = local_1048;
        puVar67[0x4f] = uStack_1040;
        puVar67[0x50] = local_1038._0_8_;
        puVar67[0x51] = local_1038._8_8_;
        FUN_143026839(&local_1148,local_12c0,local_128);
        puVar51 = local_12a0;
        puVar67[0x58] = CONCAT71(uStack_1137,local_1138);
        puVar67[0x59] = CONCAT44(uStack_112c,uStack_1130);
        puVar67[0x56] = local_1148;
        puVar67[0x57] = uStack_1140;
        local_1148 = (ulonglong *)0x20009;
        auStack_1115[1] = 0;
        uStack_111c = 0x10001;
        uStack_1118 = 0x101;
        uStack_1116 = 0;
        auStack_1115[0] = 10;
        uStack_1130 = local_3d8;
        uStack_1140 = stack0xfffffffffffffc18;
        local_1138 = auStack_3e0[0];
        uStack_1137 = auStack_3e0._1_7_;
        uVar37 = DAT_14ca84e40;
        if ((int)(uint)local_1228 < (int)DAT_14ca84e40) {
          uVar37 = (uint)local_1228;
        }
        if ((int)uVar37 < 2) {
          uVar37 = 1;
        }
        auStack_1115[2] = 0xff;
        uStack_1120 = DAT_14ca84e40;
        if ((int)(uint)local_1230 < (int)DAT_14ca84e40) {
          uStack_1120 = (uint)local_1230;
        }
        uStack_112c = local_124c;
        if ((int)uStack_1120 < 2) {
          uStack_1120 = 1;
        }
        local_1128 = (ulonglong)uVar37 << 0x20;
        uVar76 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar41 = uVar76 + 0x120;
        if (*(ulonglong *)(param_1 + 0x78) < uVar41) {
          FUN_140023dd8(local_12a0,0x128);
          uVar76 = *puVar51 + 7 & 0xfffffffffffffff8;
          uVar41 = uVar76 + 0x120;
        }
        *(ulonglong *)(param_1 + 0x70) = uVar41;
        FUN_1456bbb8c(uVar76,L"DebugDenoiserReconstruction",&local_1148,0);
        iVar69 = *(int *)(param_1 + 0x180);
        *(uint *)(param_1 + 0x180) = iVar69 + 1U;
        if (*(uint *)(param_1 + 0x184) < iVar69 + 1U) {
          FUN_14472c0f6(local_1280,iVar69);
        }
        puVar51 = local_12a0;
        *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar69 * 8) = uVar76;
        *(int *)(uVar76 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
        uVar68 = *(undefined1 *)(uVar76 + 0x94);
        puVar74 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar79 = puVar74 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar79) {
          FUN_140023dd8(local_12a0,0x50);
          puVar74 = (undefined8 *)(*puVar51 + 7 & 0xfffffffffffffff8);
          puVar79 = puVar74 + 9;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar79;
        puVar74[1] = *(undefined8 *)(uVar76 + 8);
        puVar74[2] = 0;
        *(undefined1 *)(puVar74 + 3) = 0;
        *(undefined8 *)((longlong)puVar74 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar74 + 5) = 0;
        *puVar74 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar74 + 6) = uVar68;
        *(undefined4 *)((longlong)puVar74 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar74 + 0x35) = 0;
        *(undefined1 *)(puVar74 + 7) = 0;
        puVar74[8] = uVar76;
        iVar69 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar69 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar69 + 1U) {
          FUN_1447568fc(local_1270,iVar69);
        }
        puVar51 = local_12c8;
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar69 * 8) = puVar74;
        *(int *)((longlong)puVar74 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar67[0x5a] = puVar74;
        uStack_1140 = (ulonglong *)CONCAT44(param_6[1],(undefined4)uStack_1140);
        uStack_1140 = (ulonglong *)CONCAT71(uStack_1140._1_7_,*(int *)(puVar67 + 0xb) != 1);
        local_1138 = *param_6 != 4 || 1 < (int)local_1260;
        local_1148 = (ulonglong *)(ulonglong)*param_6;
        FUN_14302699a(local_1068,local_12a8[lVar39 * 0x2782 + 0x2703],&local_1148);
        iVar46 = *(int *)((longlong)puVar51 + lVar39 * 0x60 + 0x5c) -
                 *(int *)((longlong)puVar51 + lVar39 * 0x60 + 0x54);
        iVar69 = iVar46 + 7;
        iVar46 = iVar46 + 0xe;
        if (-1 < iVar69) {
          iVar46 = iVar69;
        }
        local_1180 = (undefined1  [4])(iVar46 >> 3);
        iVar46 = (int)puVar51[lVar39 * 0xc + 0xb] - (int)puVar51[lVar39 * 0xc + 10];
        iVar69 = iVar46 + 7;
        local_1184 = iVar46 + 0xe;
        if (-1 < iVar69) {
          local_1184 = iVar69;
        }
        local_1184 = local_1184 >> 3;
        local_117c = 1;
        local_12d8 = (ulonglong *)&local_1184;
        FUN_143026a2b(param_1);
        lVar39 = lVar39 + 1;
        uVar41 = (ulonglong)(int)local_1290[1];
        local_12b8 = local_12b8 + 0xc;
        unaff_XMM8 = auVar113;
      } while (lVar39 < (longlong)uVar41);
    }
    local_1038 = local_118;
    local_1048 = local_128._0_8_;
    uStack_1040 = stack0xfffffffffffffee0;
  }
  auVar113 = _DAT_149932320;
  iVar69 = (int)uVar41;
  plVar54 = local_1290;
  if (0 < (int)param_6[8]) {
    local_1260 = (longlong *)(param_1 + 0x70);
    local_1268 = (longlong *)(param_1 + 0x98);
    local_1238 = (ulonglong *)(param_1 + 0x198);
    puVar79 = (undefined8 *)(local_1278 & 0xffffffff);
    local_1218 = param_1 + 0x178;
    unaff_XMM7 = ZEXT816(0);
    iVar46 = 0;
    local_12b0 = puVar79;
    do {
      uVar37 = *param_6;
      local_118 = unaff_XMM7;
      _local_128 = unaff_XMM7;
      if (0 < (int)local_1278) {
        puVar63 = local_2e8;
        puVar67 = (undefined8 *)0x0;
        do {
          uVar42 = FUN_14472bf7a(param_1,puVar63,
                                 (&PTR_u_Shadow_Denoiser_PreConvolution0_14a2f8870)
                                 [(longlong)(int)(uVar37 << 2) + (longlong)puVar67],0);
          *(undefined8 *)(local_128 + (longlong)puVar67 * 8) = uVar42;
          puVar67 = (undefined8 *)((longlong)puVar67 + 1);
          puVar63 = puVar63 + 0x1c;
        } while (puVar79 != puVar67);
        uVar41 = (ulonglong)*(uint *)(local_1290 + 1);
        plVar54 = local_1290;
      }
      iVar38 = iVar46 + 1;
      if (0 < (int)uVar41) {
        local_1258 = (ulonglong *)CONCAT44(local_1258._4_4_,iVar38);
        unaff_XMM6._0_4_ = (float)iVar38;
        puVar51 = (ulonglong *)&DAT_0000005c;
        puVar73 = (ulonglong *)0x13818;
        local_12c8 = (ulonglong *)0x0;
        local_12a8 = (ulonglong *)0x0;
        puVar60 = (ulonglong *)0x0;
        do {
          plVar44 = local_1260;
          puVar64 = local_408;
          if (local_408 == (undefined1 *)0x0) {
            puVar64 = local_c48;
          }
          puVar59 = local_c68;
          if (local_c68 == (undefined1 *)0x0) {
            puVar59 = local_1028;
          }
          local_1270 = (ulonglong *)*plVar54;
          local_1280 = *(ulonglong **)(param_6 + 0x1a);
          puVar67 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar79 = puVar67 + 0x5c;
          local_12b8 = puVar51;
          local_12a0 = puVar60;
          local_1298 = puVar73;
          if (*(undefined8 **)(param_1 + 0x78) < puVar79) {
            FUN_140023dd8(local_1260,0x2f0);
            puVar67 = (undefined8 *)(*plVar44 + 0xfU & 0xfffffffffffffff0);
            puVar79 = puVar67 + 0x5c;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar79;
          *puVar67 = &PTR_FUN_14a2f8608;
          *(undefined1 (*) [16])(puVar67 + 4) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 2) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 8) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 6) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0xe) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x10) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x12) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x16) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x24) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x26) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x28) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x2a) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x2c) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x2e) = unaff_XMM7;
          puVar67[0x30] = 0;
          *(undefined1 *)(puVar67 + 0x31) = 1;
          puVar67[0x36] = 0;
          *(undefined1 (*) [16])(puVar67 + 0x34) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x32) = unaff_XMM7;
          *(undefined1 *)(puVar67 + 0x37) = 1;
          *(undefined1 (*) [16])(puVar67 + 0x3c) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x3a) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x40) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x3e) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x44) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x42) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x48) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x46) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x4a) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x4e) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x50) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x52) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x54) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x56) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x58) = unaff_XMM7;
          puVar67[0x5a] = 0;
          iVar69 = *(int *)(param_1 + 0xa0);
          *(uint *)(param_1 + 0xa0) = iVar69 + 1U;
          if (*(uint *)(param_1 + 0xa4) < iVar69 + 1U) {
            FUN_1448cfae8(local_1268,iVar69);
          }
          param_1 = local_12c0;
          puVar59 = puVar59 + (longlong)local_12a8;
          *(undefined8 **)(*(longlong *)(local_12c0 + 0x98) + (longlong)iVar69 * 8) = puVar67;
          memcpy(puVar67 + 0xe,puVar64 + (longlong)local_12c8,0x158);
          memcpy(puVar67 + 0x3a,puVar59,0xa0);
          uVar37 = param_6[7];
          *(uint *)(puVar67 + 10) = uVar37;
          fVar81 = powf((float)uVar37,unaff_XMM6._0_4_);
          *(int *)((longlong)puVar67 + 0x54) = (int)(longlong)fVar81;
          *(float *)((longlong)puVar67 + 0x5c) =
               (float)param_6[9] * (float)(1 << ((byte)iVar46 & 0x1f));
          puVar67[0x50] = local_1038._0_8_;
          puVar67[0x51] = local_1038._8_8_;
          puVar67[0x4e] = local_1048;
          puVar67[0x4f] = uStack_1040;
          FUN_143026839(&local_1148,param_1,local_128);
          plVar54 = local_1260;
          puVar67[0x58] = CONCAT71(uStack_1137,local_1138);
          puVar67[0x59] = CONCAT44(uStack_112c,uStack_1130);
          puVar67[0x56] = local_1148;
          puVar67[0x57] = uStack_1140;
          local_1148 = (ulonglong *)0x20009;
          auStack_1115[1] = 0;
          uStack_111c = 0x10001;
          uStack_1118 = 0x101;
          uStack_1116 = 0;
          auStack_1115[0] = 10;
          uStack_1130 = local_3d8;
          uStack_1140 = stack0xfffffffffffffc18;
          local_1138 = auStack_3e0[0];
          uStack_1137 = auStack_3e0._1_7_;
          uVar37 = DAT_14ca84e40;
          if ((int)(uint)local_1228 < (int)DAT_14ca84e40) {
            uVar37 = (uint)local_1228;
          }
          if ((int)uVar37 < 2) {
            uVar37 = 1;
          }
          auStack_1115[2] = 0xff;
          uStack_1120 = DAT_14ca84e40;
          if ((int)(uint)local_1230 < (int)DAT_14ca84e40) {
            uStack_1120 = (uint)local_1230;
          }
          uStack_112c = local_124c;
          if ((int)uStack_1120 < 2) {
            uStack_1120 = 1;
          }
          local_1128 = (ulonglong)uVar37 << 0x20;
          uVar76 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
          uVar41 = uVar76 + 0x120;
          if (*(ulonglong *)(param_1 + 0x78) < uVar41) {
            FUN_140023dd8(local_1260,0x128);
            uVar76 = *plVar54 + 7U & 0xfffffffffffffff8;
            uVar41 = uVar76 + 0x120;
          }
          *(ulonglong *)(param_1 + 0x70) = uVar41;
          FUN_1456bbb8c(uVar76,L"DebugDenoiserPreConvolution",&local_1148,0);
          iVar69 = *(int *)(param_1 + 0x180);
          *(uint *)(param_1 + 0x180) = iVar69 + 1U;
          if (*(uint *)(param_1 + 0x184) < iVar69 + 1U) {
            FUN_14472c0f6(local_1218,iVar69);
          }
          plVar54 = local_1260;
          *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar69 * 8) = uVar76;
          *(int *)(uVar76 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
          uVar68 = *(undefined1 *)(uVar76 + 0x94);
          puVar74 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar79 = puVar74 + 9;
          if (*(undefined8 **)(param_1 + 0x78) < puVar79) {
            FUN_140023dd8(local_1260,0x50);
            puVar74 = (undefined8 *)(*plVar54 + 7U & 0xfffffffffffffff8);
            puVar79 = puVar74 + 9;
          }
          puVar73 = local_1298;
          puVar60 = local_12a0;
          puVar51 = local_12b8;
          *(undefined8 **)(param_1 + 0x70) = puVar79;
          puVar74[1] = *(undefined8 *)(uVar76 + 8);
          puVar74[2] = 0;
          *(undefined1 *)(puVar74 + 3) = 0;
          *(undefined8 *)((longlong)puVar74 + 0x1c) = 0xffffffffffffffff;
          *(undefined1 *)(puVar74 + 5) = 0;
          *puVar74 = &PTR_FUN_14a1fb948;
          *(undefined1 *)(puVar74 + 6) = uVar68;
          *(undefined4 *)((longlong)puVar74 + 0x31) = 0;
          *(undefined2 *)((longlong)puVar74 + 0x35) = 0;
          *(undefined1 *)(puVar74 + 7) = 0;
          puVar74[8] = uVar76;
          iVar69 = *(int *)(param_1 + 0x1a0);
          *(uint *)(param_1 + 0x1a0) = iVar69 + 1U;
          if (*(uint *)(param_1 + 0x1a4) < iVar69 + 1U) {
            FUN_1447568fc(local_1238,iVar69);
          }
          *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar69 * 8) = puVar74;
          *(int *)((longlong)puVar74 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
          puVar67[0x5a] = puVar74;
          uStack_1140 = (ulonglong *)(CONCAT44(param_6[1],(int)uStack_1140) & 0xffffffffffffff00);
          local_1148 = (ulonglong *)CONCAT44(1,*param_6);
          local_1138 = 1;
          FUN_14302699a(local_1068,*(undefined8 *)((longlong)local_1270 + (longlong)puVar73),
                        &local_1148);
          iVar38 = *(int *)((longlong)local_1280 + (longlong)puVar51) -
                   *(int *)((longlong)(local_1280 + -1) + (longlong)puVar51);
          iVar69 = iVar38 + 7;
          local_118c = iVar38 + 0xe;
          if (-1 < iVar69) {
            local_118c = iVar69;
          }
          local_118c = local_118c >> 3;
          iVar38 = *(int *)((longlong)local_1280 + -4 + (longlong)puVar51) -
                   *(int *)((longlong)local_1280 + -0xc + (longlong)puVar51);
          iVar69 = iVar38 + 7;
          local_1190 = iVar38 + 0xe;
          if (-1 < iVar69) {
            local_1190 = iVar69;
          }
          local_1190 = local_1190 >> 3;
          local_1188 = 1;
          local_12d8 = (ulonglong *)&local_1190;
          FUN_143026a2b(param_1);
          puVar60 = (ulonglong *)((longlong)puVar60 + 1);
          uVar41 = (ulonglong)(int)local_1290[1];
          puVar51 = puVar51 + 0xc;
          puVar73 = puVar73 + 0x2782;
          local_12a8 = local_12a8 + 0x14;
          local_12c8 = local_12c8 + 0x2c;
          plVar54 = local_1290;
        } while ((longlong)puVar60 < (longlong)uVar41);
        puVar79 = local_12b0;
        iVar38 = (int)local_1258._0_4_;
      }
      iVar69 = (int)uVar41;
      local_1038 = local_118;
      local_1048 = local_128._0_8_;
      uStack_1040 = stack0xfffffffffffffee0;
      unaff_XMM8 = auVar113;
      iVar46 = iVar38;
    } while (iVar38 < (int)param_6[8]);
  }
  uVar37 = local_1210;
  if (((char)local_1240 == '\0') && ((char)param_6[10] != '\x01')) {
    uVar36 = 0;
    uVar41 = 0;
    uVar76 = 0;
  }
  else {
    unaff_XMM6 = ZEXT816(0);
    local_1058 = unaff_XMM6;
    local_1068 = unaff_XMM6;
    if (*param_6 == 3) {
      FUN_1472e5edc(&local_1148);
      lVar39 = 0x35;
      do {
        local_1158[lVar39 + 0xd] = auStack_3d1[lVar39 + 6];
        *(undefined8 *)(local_1180 + lVar39 + 3) = *(undefined8 *)(auStack_3fd + lVar39);
        *(undefined2 *)(local_1158 + lVar39 + 0xe) = *(undefined2 *)(auStack_3d1 + lVar39 + 7);
        *(undefined8 *)(local_1168 + lVar39 + 0xf) = *(undefined8 *)(auStack_3e0 + lVar39 + 7);
        *(undefined2 *)(local_1158 + lVar39 + 7) = *(undefined2 *)(auStack_3d1 + lVar39);
        *(undefined4 *)(local_1158 + lVar39 + 9) = *(undefined4 *)(auStack_3d1 + lVar39 + 2);
        uVar42 = *(undefined8 *)(auStack_3ed + lVar39);
        *(undefined8 *)(local_1178 + lVar39 + 3) = *(undefined8 *)(local_3f8 + lVar39 + 3);
        *(undefined8 *)(local_1168 + lVar39 + -5) = uVar42;
        *(undefined4 *)(local_1168 + lVar39 + 3) = *(undefined4 *)((longlong)&uStack_3e5 + lVar39);
        *(undefined4 *)(local_1168 + lVar39 + 0xb) = *(undefined4 *)(auStack_3e0 + lVar39 + 3);
        *(undefined1 *)((longlong)&local_1148 + lVar39) = auStack_3d1[lVar39 + 9];
        *(undefined4 *)(local_1168 + lVar39 + 7) = *(undefined4 *)(local_3c8 + lVar39 + -0x19);
        lVar39 = lVar39 + 0x38;
      } while (lVar39 != 0x115);
      auStack_1115[0] = 10;
      unaff_XMM7 = ZEXT816(0);
      auVar113._8_8_ = 0;
      auVar113._0_8_ = local_118._8_8_;
      local_118 = auVar113 << 0x40;
      _local_128 = unaff_XMM7;
      local_1068._0_8_ =
           FUN_14472bf7a(param_1,&local_1148,L"AO.Denoiser.RejectionPreConvolution0",0);
      auVar113 = _DAT_149932320;
      iVar69 = (int)plVar54[1];
      local_1068._8_8_ = local_128._0_8_;
      local_1058._8_8_ = local_118._0_8_;
      local_1058._0_8_ = stack0xfffffffffffffee0;
      if (0 < iVar69) {
        local_1260 = (longlong *)(param_1 + 0x70);
        local_1268 = (longlong *)(param_1 + 0x98);
        local_1278 = param_1 + 0x198;
        local_1258 = (ulonglong *)(param_1 + 0x178);
        puVar51 = (ulonglong *)&DAT_0000005c;
        puVar73 = (ulonglong *)0x13818;
        local_12c8 = (ulonglong *)0x0;
        local_12a8 = (ulonglong *)0x0;
        puVar60 = (ulonglong *)0x0;
        do {
          plVar44 = local_1260;
          puVar64 = local_408;
          if (local_408 == (undefined1 *)0x0) {
            puVar64 = local_c48;
          }
          puVar59 = local_c68;
          if (local_c68 == (undefined1 *)0x0) {
            puVar59 = local_1028;
          }
          local_1270 = (ulonglong *)*plVar54;
          local_1280 = *(ulonglong **)(param_6 + 0x1a);
          puVar67 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar79 = puVar67 + 0x5c;
          local_12a0 = puVar60;
          local_1298 = puVar73;
          if (*(undefined8 **)(param_1 + 0x78) < puVar79) {
            FUN_140023dd8(local_1260,0x2f0);
            puVar67 = (undefined8 *)(*plVar44 + 0xfU & 0xfffffffffffffff0);
            puVar79 = puVar67 + 0x5c;
          }
          *(undefined8 **)(param_1 + 0x70) = puVar79;
          *puVar67 = &PTR_FUN_14a2f8608;
          *(undefined1 (*) [16])(puVar67 + 4) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 2) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 8) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 6) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0xe) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x10) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x12) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x16) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x24) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x26) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x28) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x2a) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x2c) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x2e) = unaff_XMM7;
          puVar67[0x30] = 0;
          *(undefined1 *)(puVar67 + 0x31) = 1;
          puVar67[0x36] = 0;
          *(undefined1 (*) [16])(puVar67 + 0x34) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x32) = unaff_XMM7;
          *(undefined1 *)(puVar67 + 0x37) = 1;
          *(undefined1 (*) [16])(puVar67 + 0x3c) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x3a) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x40) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x3e) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x44) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x42) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x48) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x46) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x4a) = auVar113;
          *(undefined1 (*) [16])(puVar67 + 0x4e) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x50) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x52) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x54) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x56) = unaff_XMM7;
          *(undefined1 (*) [16])(puVar67 + 0x58) = unaff_XMM7;
          puVar67[0x5a] = 0;
          iVar69 = *(int *)(param_1 + 0xa0);
          *(uint *)(param_1 + 0xa0) = iVar69 + 1U;
          local_12b8 = puVar51;
          if (*(uint *)(param_1 + 0xa4) < iVar69 + 1U) {
            FUN_1448cfae8(local_1268,iVar69);
          }
          param_1 = local_12c0;
          puVar59 = puVar59 + (longlong)local_12a8;
          *(undefined8 **)(*(longlong *)(local_12c0 + 0x98) + (longlong)iVar69 * 8) = puVar67;
          memcpy(puVar67 + 0xe,puVar64 + (longlong)local_12c8,0x158);
          memcpy(puVar67 + 0x3a,puVar59,0xa0);
          puVar67[0x4e] = local_1048;
          puVar67[0x4f] = uStack_1040;
          puVar67[0x50] = local_1038._0_8_;
          puVar67[0x51] = local_1038._8_8_;
          FUN_143026839(&local_1148,param_1,local_1068);
          plVar54 = local_1260;
          auVar116._1_7_ = uStack_1137;
          auVar116[0] = local_1138;
          auVar116._8_4_ = uStack_1130;
          auVar116._12_4_ = uStack_112c;
          *(undefined1 (*) [16])(puVar67 + 0x58) = auVar116;
          puVar67[0x56] = local_1148;
          puVar67[0x57] = uStack_1140;
          local_128[8] = 0;
          local_128._0_4_ = *param_6;
          uStack_11c = param_6[1];
          local_128._4_4_ = 2;
          local_118[0] = 1;
          local_1148 = (ulonglong *)0x20009;
          auStack_1115[1] = 0;
          uStack_111c = 0x10001;
          uStack_1118 = 0x101;
          uStack_1116 = 0;
          auStack_1115[0] = 10;
          uStack_1130 = local_3d8;
          uStack_1140 = stack0xfffffffffffffc18;
          local_1138 = auStack_3e0[0];
          uStack_1137 = auStack_3e0._1_7_;
          uVar37 = DAT_14ca84e40;
          if ((int)(uint)local_1228 < (int)DAT_14ca84e40) {
            uVar37 = (uint)local_1228;
          }
          if ((int)uVar37 < 2) {
            uVar37 = 1;
          }
          auStack_1115[2] = 0xff;
          uStack_1120 = DAT_14ca84e40;
          if ((int)(uint)local_1230 < (int)DAT_14ca84e40) {
            uStack_1120 = (uint)local_1230;
          }
          uStack_112c = local_124c;
          if ((int)uStack_1120 < 2) {
            uStack_1120 = 1;
          }
          local_1128 = (ulonglong)uVar37 << 0x20;
          uVar76 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
          uVar41 = uVar76 + 0x120;
          if (*(ulonglong *)(param_1 + 0x78) < uVar41) {
            FUN_140023dd8(local_1260,0x128);
            uVar76 = *plVar54 + 7U & 0xfffffffffffffff8;
            uVar41 = uVar76 + 0x120;
          }
          *(ulonglong *)(param_1 + 0x70) = uVar41;
          FUN_1456bbb8c(uVar76,L"DebugDenoiserRejectionPreConvolution",&local_1148,0);
          puVar73 = local_1298;
          iVar69 = *(int *)(param_1 + 0x180);
          *(uint *)(param_1 + 0x180) = iVar69 + 1U;
          if (*(uint *)(param_1 + 0x184) < iVar69 + 1U) {
            FUN_14472c0f6(local_1258,iVar69);
          }
          plVar54 = local_1260;
          *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar69 * 8) = uVar76;
          *(int *)(uVar76 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
          uVar68 = *(undefined1 *)(uVar76 + 0x94);
          puVar74 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar79 = puVar74 + 9;
          if (*(undefined8 **)(param_1 + 0x78) < puVar79) {
            FUN_140023dd8(local_1260,0x50);
            puVar74 = (undefined8 *)(*plVar54 + 7U & 0xfffffffffffffff8);
            puVar79 = puVar74 + 9;
          }
          puVar60 = local_12a0;
          puVar51 = local_12b8;
          *(undefined8 **)(param_1 + 0x70) = puVar79;
          puVar74[1] = *(undefined8 *)(uVar76 + 8);
          puVar74[2] = 0;
          *(undefined1 *)(puVar74 + 3) = 0;
          *(undefined8 *)((longlong)puVar74 + 0x1c) = 0xffffffffffffffff;
          *(undefined1 *)(puVar74 + 5) = 0;
          *puVar74 = &PTR_FUN_14a1fb948;
          *(undefined1 *)(puVar74 + 6) = uVar68;
          *(undefined4 *)((longlong)puVar74 + 0x31) = 0;
          *(undefined2 *)((longlong)puVar74 + 0x35) = 0;
          *(undefined1 *)(puVar74 + 7) = 0;
          puVar74[8] = uVar76;
          iVar69 = *(int *)(param_1 + 0x1a0);
          *(uint *)(param_1 + 0x1a0) = iVar69 + 1U;
          if (*(uint *)(param_1 + 0x1a4) < iVar69 + 1U) {
            FUN_1447568fc(local_1278,iVar69);
          }
          *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar69 * 8) = puVar74;
          *(int *)((longlong)puVar74 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
          puVar67[0x5a] = puVar74;
          FUN_14302699a(&local_1148,*(undefined8 *)((longlong)local_1270 + (longlong)puVar73),
                        local_128);
          iVar46 = *(int *)((longlong)local_1280 + (longlong)puVar51) -
                   *(int *)((longlong)(local_1280 + -1) + (longlong)puVar51);
          iVar69 = iVar46 + 7;
          local_1198 = iVar46 + 0xe;
          if (-1 < iVar69) {
            local_1198 = iVar69;
          }
          local_1198 = local_1198 >> 3;
          iVar46 = *(int *)((longlong)local_1280 + -4 + (longlong)puVar51) -
                   *(int *)((longlong)local_1280 + -0xc + (longlong)puVar51);
          iVar69 = iVar46 + 7;
          local_119c = iVar46 + 0xe;
          if (-1 < iVar69) {
            local_119c = iVar69;
          }
          local_119c = local_119c >> 3;
          local_1194 = 1;
          local_12d8 = (ulonglong *)&local_119c;
          FUN_143026a2b(param_1);
          puVar60 = (ulonglong *)((longlong)puVar60 + 1);
          iVar69 = (int)local_1290[1];
          puVar51 = puVar51 + 0xc;
          puVar73 = puVar73 + 0x2782;
          local_12a8 = local_12a8 + 0x14;
          local_12c8 = local_12c8 + 0x2c;
          plVar54 = local_1290;
          unaff_XMM8 = auVar113;
          uVar37 = local_1210;
        } while ((longlong)puVar60 < (longlong)iVar69);
      }
    }
    uVar47 = *param_6;
    local_1168 = unaff_XMM6;
    local_1158 = unaff_XMM6;
    if (0 < (int)uVar37) {
      puVar64 = auStack_3d1 + 9;
      uVar41 = 0;
      do {
        uVar42 = FUN_14472bf7a(param_1,puVar64,
                               (&PTR_u_Shadow_Denoiser_TemporalAccumula_14a2f7dc0)
                               [(longlong)(int)(uVar47 << 2) + uVar41],0);
        *(undefined8 *)(local_1168 + uVar41 * 8) = uVar42;
        uVar41 = uVar41 + 1;
        puVar64 = puVar64 + 0x38;
      } while (uVar37 != uVar41);
      iVar69 = (int)local_1290[1];
      plVar54 = local_1290;
    }
    auVar113 = _DAT_149932320;
    if (iVar69 < 1) {
      uVar36 = 0;
      uVar41 = 0;
      uVar76 = 0;
    }
    else {
      local_1258 = (ulonglong *)(ulonglong)(iVar69 - 1);
      local_1238 = (ulonglong *)(param_1 + 0x70);
      local_1240 = param_1 + 0x98;
      local_11e0 = (longlong *)(local_1208 + 8);
      local_11d0 = local_1208 + 0x10;
      local_1248 = (longlong *)(local_1208 + 0x18);
      local_11c8 = param_1 + 0x198;
      local_11f0 = param_1 + 0x168;
      iVar69 = (int)local_11e8;
      local_11d8 = param_1 + 0x178;
      local_1268 = (longlong *)(ulonglong)((iVar69 + (uint)(iVar69 == 0)) * 8);
      local_1278 = (ulonglong)(uint)(iVar69 * 8);
      unaff_XMM11._0_12_ = ZEXT812(0x3f000000);
      unaff_XMM11._12_4_ = 0;
      puVar51 = (ulonglong *)0x0;
      do {
        lVar39 = *plVar54;
        local_12c8 = (ulonglong *)local_408;
        if (local_408 == (undefined1 *)0x0) {
          local_12c8 = (ulonglong *)local_c48;
        }
        puVar64 = local_c68;
        if (local_c68 == (undefined1 *)0x0) {
          puVar64 = local_1028;
        }
        local_1220 = *(ulonglong **)(param_6 + 0x1a);
        uVar37 = *param_6;
        uVar47 = param_6[1];
        uVar42 = *(undefined8 *)(lVar39 + 0x13818 + (longlong)puVar51 * 0x13c10);
        local_1280 = puVar51;
        FUN_14301ad90();
        uVar41 = (ulonglong)((uVar37 + uVar47 * 8) - 8);
        FUN_1448e935e(uVar42,&local_1148,&DAT_14ca4c4e8,uVar41);
        FUN_14301ad90();
        puVar60 = local_1238;
        local_1298 = local_1148;
        local_1200 = uStack_1140;
        puVar67 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar79 = puVar67 + 0x6c;
        if (*(undefined8 **)(param_1 + 0x78) < puVar79) {
          FUN_140023dd8(local_1238,0x370);
          puVar67 = (undefined8 *)(*puVar60 + 0xf & 0xfffffffffffffff0);
          puVar79 = puVar67 + 0x6c;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar79;
        *puVar67 = &PTR_FUN_14a2f8fa8;
        *(undefined1 (*) [16])(puVar67 + 6) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 8) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 10) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0xe) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0xc) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x12) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x10) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x14) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x16) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x18) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x1a) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x1e) = auVar113;
        puVar67[0x2c] = 0;
        puVar67[0x2d] = 0;
        puVar67[0x2e] = 0;
        puVar67[0x2f] = 0;
        puVar67[0x30] = 0;
        puVar67[0x31] = 0;
        puVar67[0x32] = 0;
        puVar67[0x33] = 0;
        puVar67[0x34] = 0;
        puVar67[0x35] = 0;
        puVar67[0x36] = 0;
        puVar67[0x37] = 0;
        puVar67[0x38] = 0;
        *(undefined1 *)(puVar67 + 0x39) = 1;
        puVar67[0x3a] = 0;
        puVar67[0x3b] = 0;
        puVar67[0x3c] = 0;
        puVar67[0x3d] = 0;
        puVar67[0x3e] = 0;
        *(undefined1 *)(puVar67 + 0x3f) = 1;
        *(undefined1 (*) [16])(puVar67 + 0x42) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x44) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x46) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x48) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x4a) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x4c) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x4e) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x50) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x52) = auVar113;
        local_12a8 = puVar67 + 0x56;
        local_12b0 = puVar67;
        memset(local_12a8,0,0xb0);
        iVar69 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar69 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar69 + 1U) {
          FUN_1448cfae8(local_1240,iVar69);
        }
        puVar74 = local_12b0;
        lVar48 = local_12c0;
        puVar51 = (ulonglong *)(lVar39 + (longlong)puVar51 * 0x13c10);
        puVar59 = (undefined1 *)((longlong)local_12c8 + (longlong)local_1280 * 0x160);
        lVar39 = (longlong)local_1280 * 0xa0;
        puVar79 = local_12b0 + 0x42;
        puVar67 = local_12b0 + 0x5a;
        local_12c8 = local_12b0 + 0x5e;
        *(undefined8 **)(*(longlong *)(local_12c0 + 0x98) + (longlong)iVar69 * 8) = local_12b0;
        memcpy(local_12b0 + 0x16,puVar59,0x158);
        memcpy(puVar79,puVar64 + lVar39,0xa0);
        *(float *)(puVar74 + 4) =
             *(float *)((longlong)puVar51 + 0x13694) / *(float *)(puVar51 + 0x262e);
        local_12a8[2] = local_1038._0_8_;
        local_12a8[3] = local_1038._8_8_;
        *local_12a8 = local_1048;
        local_12a8[1] = uStack_1040;
        puVar74[0x5c] = local_1058._0_8_;
        puVar74[0x5d] = local_1058._8_8_;
        *puVar67 = local_1068._0_8_;
        puVar74[0x5b] = local_1068._8_8_;
        local_1270 = puVar51;
        FUN_143026839(&local_1148,lVar48,local_1168);
        local_12c8[2] = CONCAT71(uStack_1137,local_1138);
        local_12c8[3] = CONCAT44(uStack_112c,uStack_1130);
        *local_12c8 = (ulonglong)local_1148;
        local_12c8[1] = (ulonglong)uStack_1140;
        uVar42 = FUN_1400652f7(lVar48,local_1208,&DAT_14ca63b28);
        puVar74[0x66] = uVar42;
        uVar42 = FUN_1400652f7(lVar48,local_11e0,&DAT_14ca63b28);
        puVar74[0x67] = uVar42;
        uVar42 = FUN_1400652f7(lVar48,local_11d0,&DAT_14ca63b28);
        plVar54 = local_1290;
        puVar74[0x68] = uVar42;
        uVar50 = (undefined7)(uVar41 >> 8);
        if ((int)local_11c0 == 6) {
          if (*local_1248 == 0) {
            uVar42 = FUN_14476842e(lVar48,&DAT_14ca63c00,L"ZeroUIntDummy",CONCAT71(uVar50,2));
          }
          else {
            uVar42 = FUN_14473c272(lVar48,local_1248,0);
          }
          local_12b0[0x69] = uVar42;
          plVar44 = (longlong *)(*plVar54 + 0x131c0);
LAB_14301e9f2:
          bVar80 = *plVar44 == 0;
          puVar74 = local_12b0;
        }
        else {
          bVar80 = *(longlong *)(*local_1290 + 0x13178) == 0;
          if ((int)local_11c0 == 7) {
            uVar42 = FUN_1400652f7(lVar48,*local_1290 + 0x131c8,&DAT_14ca63b28);
            puVar74[0x69] = uVar42;
            if (*(longlong *)(*plVar54 + 0x131d0) == 0) {
              uVar42 = FUN_14476842e(lVar48,&DAT_14ca63c00,L"ZeroUIntDummy",CONCAT71(uVar50,2));
            }
            else {
              uVar42 = FUN_14473c272(lVar48,*plVar54 + 0x131d0,0);
            }
            local_12b0[0x6a] = uVar42;
            bVar80 = true;
            puVar74 = local_12b0;
            if (*(longlong *)(*plVar54 + 0x131c8) != 0) {
              plVar44 = (longlong *)(*plVar54 + 0x131d0);
              goto LAB_14301e9f2;
            }
          }
        }
        puVar51 = local_1280;
        if (0 < (longlong)(int)param_6[1]) {
          lVar39 = 0;
          do {
            lVar49 = *(longlong *)(param_7 + lVar39 * 8);
            if (lVar49 != 0) {
              bVar80 = (bool)(bVar80 | *(int *)(lVar49 + 0x18) != (int)plVar54[1]);
            }
            lVar39 = lVar39 + 1;
          } while ((int)param_6[1] != lVar39);
        }
        local_1218 = CONCAT71(local_1218._1_7_,bVar80);
        fVar81 = 1.0;
        fVar87 = unaff_XMM11._0_4_;
        if (bVar80 == false) {
          iVar69 = *(int *)((longlong)local_1270 + 0x125cc);
          uVar41 = local_1270[0x24b8];
          iVar46 = iVar69 - *(int *)((longlong)local_1270 + 0x125c4);
          uVar76 = local_1270[0x24b9];
          plVar44 = local_12b0 + 0x69;
          if (local_12b0[0x69] == 0) {
            plVar44 = local_12b0 + 0x66;
          }
          lVar39 = *plVar44;
          fVar94 = (float)*(int *)(lVar39 + 0x84);
          fVar88 = (float)*(int *)(lVar39 + 0x88);
          fVar91 = (float)iVar46;
          fVar128 = 1.0 / fVar94;
          fVar81 = (float)*(int *)((longlong)local_1270 + 0x125c4);
          fVar92 = (float)((int)uVar76 - (int)uVar41);
          *(float *)(local_12b0 + 6) = fVar92 * 0.5 * fVar128;
          fVar108 = 1.0 / fVar88;
          *(float *)((longlong)local_12b0 + 0x34) = (float)-iVar46 * 0.5 * fVar108;
          fVar102 = (float)(int)uVar41;
          *(float *)(local_12b0 + 7) = (fVar92 * 0.5 + fVar102) * fVar128;
          *(float *)((longlong)local_12b0 + 0x3c) = (fVar91 * 0.5 + fVar81) * fVar108;
          *(float *)(local_12b0 + 10) = (fVar102 + 0.5) * fVar128;
          *(float *)((longlong)local_12b0 + 0x54) = (fVar81 + 0.5) * fVar108;
          *(float *)(local_12b0 + 0xb) = ((float)(int)uVar76 + -0.5) * fVar128;
          *(float *)((longlong)local_12b0 + 0x5c) = ((float)iVar69 + -0.5) * fVar108;
          *(float *)(local_12b0 + 8) = fVar94;
          *(float *)((longlong)local_12b0 + 0x44) = fVar88;
          *(float *)(local_12b0 + 9) = fVar128;
          *(float *)((longlong)local_12b0 + 0x4c) = fVar108;
          *(float *)(local_12b0 + 0x14) = fVar94 / fVar92 + fVar94 / fVar92;
          *(float *)((longlong)local_12b0 + 0xa4) = -fVar88 / fVar91 + -fVar88 / fVar91;
          *(float *)(local_12b0 + 0x15) = -1.0 - (fVar102 / fVar92 + fVar102 / fVar92);
          *(float *)((longlong)local_12b0 + 0xac) = fVar81 / fVar91 + fVar81 / fVar91 + 1.0;
          iVar69 = *(int *)((longlong)local_1270 + 0x125cc);
          iVar78 = iVar69 - *(int *)((longlong)local_1270 + 0x125c4);
          uVar41 = local_1270[0x24b9];
          iVar46 = *(int *)(lVar39 + 0x84);
          fVar129 = (float)iVar46;
          iVar38 = *(int *)(lVar39 + 0x88);
          fVar94 = (float)iVar38;
          fVar92 = (float)iVar78;
          in_XMM3 = ZEXT416((uint)fVar92);
          fVar88 = (float)*(int *)((longlong)local_1270 + 0x125c4);
          fVar81 = 1.0 / fVar129;
          fVar128 = (float)((int)uVar41 - (int)local_1270[0x24b8]);
          unaff_XMM14 = ZEXT416((uint)fVar128);
          fVar102 = (float)(int)local_1270[0x24b8];
          *(float *)(local_12b0 + 6) = fVar128 * 0.5 * fVar81;
          fVar91 = 1.0 / fVar94;
          *(float *)((longlong)local_12b0 + 0x34) = (float)-iVar78 * fVar87 * fVar91;
          *(float *)(local_12b0 + 7) = (fVar128 * 0.5 + fVar102) * fVar81;
          *(float *)((longlong)local_12b0 + 0x3c) = (fVar92 * fVar87 + fVar88) * fVar91;
          *(float *)(local_12b0 + 10) = (fVar102 + fVar87) * fVar81;
          *(float *)((longlong)local_12b0 + 0x54) = (fVar88 + fVar87) * fVar91;
          *(float *)(local_12b0 + 0xb) = ((float)(int)uVar41 + -0.5) * fVar81;
          fVar108 = ((float)iVar69 + -0.5) * fVar91;
          unaff_XMM8 = ZEXT416((uint)fVar108);
          *(float *)((longlong)local_12b0 + 0x5c) = fVar108;
          *(float *)(local_12b0 + 8) = fVar129;
          *(float *)((longlong)local_12b0 + 0x44) = fVar94;
          *(float *)(local_12b0 + 0x14) = fVar129 / fVar128 + fVar129 / fVar128;
          *(float *)((longlong)local_12b0 + 0xa4) = -fVar94 / fVar92 + -fVar94 / fVar92;
          fVar94 = fVar102 / fVar128 + fVar102 / fVar128;
          in_XMM5 = ZEXT416((uint)fVar94);
          fVar94 = -1.0 - fVar94;
          in_XMM4 = ZEXT416((uint)fVar94);
          *(float *)(local_12b0 + 0x15) = fVar94;
          fVar88 = fVar88 / fVar92 + fVar88 / fVar92 + 1.0;
          in_XMM2 = ZEXT416((uint)fVar88);
          *(float *)((longlong)local_12b0 + 0xac) = fVar88;
          puVar74 = local_12b0;
        }
        else {
          puVar74[6] = &DAT_3f8000003f800000;
          puVar74[7] = &DAT_3f8000003f800000;
          puVar74[10] = 0;
          puVar74[0xb] = 0;
          puVar74[8] = &DAT_3f8000003f800000;
          iVar38 = 1;
          iVar46 = 1;
          fVar91 = 1.0;
        }
        local_12a0 = puVar74 + 2;
        *(float *)(puVar74 + 9) = fVar81;
        *(float *)((longlong)puVar74 + 0x4c) = fVar91;
        local_1138 = 0;
        uStack_1137 = 0;
        uStack_1130 = 0;
        uStack_112c = 1;
        uStack_1118 = 0;
        uStack_1116 = 0;
        auStack_1115[0] = 0;
        auStack_1115[1] = 0;
        auStack_1115[2] = 0;
        uStack_1112 = 0;
        uStack_1110 = 0;
        local_1128 = 0;
        uStack_1120 = 0;
        uStack_111c = 0;
        FUN_1472e5e12(&local_1148,(int)plVar54[1]);
        if (0 < (int)param_6[1]) {
          local_1260 = local_12b0 + 0xc;
          puVar79 = local_12b0 + 0x62;
          unaff_XMM14._0_4_ = (float)iVar38;
          puVar67 = (undefined8 *)0x0;
          do {
            plVar54 = local_1268;
            lVar48 = local_12c0;
            auVar90 = in_XMM3._4_12_;
            auVar86 = in_XMM2._4_12_;
            puVar74 = *(undefined8 **)(param_7 + (longlong)puVar67 * 8);
            puVar45 = puVar74;
            if (puVar74 == (undefined8 *)0x0) {
              puVar45 = &local_1148;
            }
            plVar44 = puVar74 + 4;
            if (puVar74 == (undefined8 *)0x0) {
              plVar44 = &local_1128;
            }
            local_12a8 = (ulonglong *)CONCAT44(local_12a8._4_4_,*(int *)(puVar45 + 3));
            local_12b8 = (ulonglong *)CONCAT44(local_12b8._4_4_,(int)local_1290[1]);
            puVar75 = &local_1148;
            if (*(int *)(puVar45 + 3) == (int)local_1290[1]) {
              puVar75 = puVar45;
            }
            uVar41 = (ulonglong)puVar67 >> 2 & 0x3fffffff;
            uVar37 = (uint)puVar67 & 3;
            *(uint *)((longlong)local_12a0 + (ulonglong)uVar37 * 4 + uVar41 * 0x10) =
                 (uint)(puVar45[4] == 0);
            if ((local_1270[0x621] == 0) || (((~(byte)param_6[10] | (byte)local_1218) & 1) != 0)) {
              *(undefined4 *)((longlong)local_12a0 + (ulonglong)uVar37 * 4 + uVar41 * 0x10) = 1;
            }
            local_12c8 = puVar67;
            if ((char)local_1284 != '\0') {
              plVar77 = (longlong *)0x0;
              do {
                uVar42 = FUN_1400652f7(lVar48,(undefined1 *)((longlong)plVar44 + (longlong)plVar77),
                                       &DAT_14ca63b28);
                auVar90 = in_XMM3._4_12_;
                auVar86 = in_XMM2._4_12_;
                *(undefined8 *)((longlong)puVar79 + (longlong)plVar77) = uVar42;
                plVar77 = plVar77 + 1;
              } while (plVar54 != plVar77);
            }
            puVar51 = local_1280;
            puVar67 = puVar74;
            if (puVar74 == (undefined8 *)0x0) {
              puVar67 = &local_1148;
            }
            if ((int)local_12a8 != (int)local_12b8) {
              puVar67 = &local_1148;
            }
            if ((undefined8 *)puVar67[2] != (undefined8 *)0x0) {
              puVar75 = (undefined8 *)puVar67[2];
            }
            iVar69 = *(int *)((longlong)puVar75 + (longlong)local_1280 * 0x10 + 0xc);
            iVar38 = *(int *)(puVar75 + (longlong)local_1280 * 2 + 1);
            in_XMM2._0_4_ =
                 ((float)*(int *)((longlong)puVar75 + (longlong)local_1280 * 0x10 + 4) + fVar87) /
                 unaff_XMM14._0_4_;
            in_XMM2._4_12_ = auVar86;
            in_XMM3._0_4_ =
                 ((float)*(int *)(puVar75 + (longlong)local_1280 * 2) + fVar87) / (float)iVar46;
            in_XMM3._4_12_ = auVar90;
            *(float *)(local_1260 + (longlong)local_12c8 * 2) = in_XMM3._0_4_;
            *(float *)((longlong)local_1260 + (longlong)local_12c8 * 0x10 + 4) = in_XMM2._0_4_;
            *(float *)(local_1260 + (longlong)local_12c8 * 2 + 1) =
                 ((float)iVar38 + -0.5) / (float)iVar46;
            *(float *)((longlong)local_1260 + (longlong)local_12c8 * 0x10 + 0xc) =
                 ((float)iVar69 + -0.5) / unaff_XMM14._0_4_;
            if (local_1280 == local_1258) {
              lVar39 = 0;
              do {
                plVar54 = (longlong *)plVar44[lVar39];
                if (plVar54 != (longlong *)0x0) {
                  plVar44[lVar39] = 0;
                  (**(code **)(*plVar54 + 0x38))();
                }
                lVar39 = lVar39 + 1;
              } while (lVar39 != 3);
              if (puVar74 == (undefined8 *)0x0) {
                puVar74 = &local_1148;
              }
              plVar54 = (longlong *)puVar74[7];
              if (plVar54 != (longlong *)0x0) {
                puVar74[7] = 0;
                (**(code **)(*plVar54 + 0x38))();
              }
            }
            puVar67 = (undefined8 *)((longlong)local_12c8 + 1);
            puVar79 = (undefined8 *)((longlong)puVar79 + local_1278);
          } while ((longlong)puVar67 < (longlong)(int)param_6[1]);
        }
        puVar60 = local_1238;
        local_f4 = 0;
        local_fc = 0xa00010100010001;
        local_118._8_4_ = local_3d8;
        stack0xfffffffffffffee0 = stack0xfffffffffffffc18;
        local_128._0_8_ = 0x20009;
        local_118._0_8_ = auStack_3e0;
        local_104 = DAT_14ca84e40;
        if ((int)(uint)local_1228 < (int)DAT_14ca84e40) {
          local_104 = (uint)local_1228;
        }
        local_108 = 0;
        if ((int)local_104 < 2) {
          local_104 = 1;
        }
        local_f3 = 0xff;
        local_100 = DAT_14ca84e40;
        if ((int)(uint)local_1230 < (int)DAT_14ca84e40) {
          local_100 = (uint)local_1230;
        }
        local_118._12_4_ = local_124c;
        if ((int)local_100 < 2) {
          local_100 = 1;
        }
        uVar76 = *(longlong *)(lVar48 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar41 = uVar76 + 0x120;
        if (*(ulonglong *)(lVar48 + 0x78) < uVar41) {
          FUN_140023dd8(local_1238,0x128);
          uVar76 = *puVar60 + 7 & 0xfffffffffffffff8;
          uVar41 = uVar76 + 0x120;
        }
        *(ulonglong *)(lVar48 + 0x70) = uVar41;
        FUN_1456bbb8c(uVar76,L"DebugDenoiserTemporalAccumulation",local_128,0);
        iVar69 = *(int *)(lVar48 + 0x180);
        *(uint *)(lVar48 + 0x180) = iVar69 + 1U;
        if (*(uint *)(lVar48 + 0x184) < iVar69 + 1U) {
          FUN_14472c0f6(local_11d8,iVar69);
        }
        puVar60 = local_1238;
        *(ulonglong *)(*(longlong *)(lVar48 + 0x178) + (longlong)iVar69 * 8) = uVar76;
        *(int *)(uVar76 + 0x9c) = *(int *)(lVar48 + 0x180) + -1;
        uVar68 = *(undefined1 *)(uVar76 + 0x94);
        puVar67 = (undefined8 *)(*(longlong *)(lVar48 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar79 = puVar67 + 9;
        if (*(undefined8 **)(lVar48 + 0x78) < puVar79) {
          FUN_140023dd8(local_1238,0x50);
          puVar67 = (undefined8 *)(*puVar60 + 7 & 0xfffffffffffffff8);
          puVar79 = puVar67 + 9;
        }
        *(undefined8 **)(lVar48 + 0x70) = puVar79;
        puVar67[1] = *(undefined8 *)(uVar76 + 8);
        puVar67[2] = 0;
        *(undefined1 *)(puVar67 + 3) = 0;
        *(undefined8 *)((longlong)puVar67 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar67 + 5) = 0;
        *puVar67 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar67 + 6) = uVar68;
        *(undefined4 *)((longlong)puVar67 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar67 + 0x35) = 0;
        *(undefined1 *)(puVar67 + 7) = 0;
        puVar67[8] = uVar76;
        iVar69 = *(int *)(lVar48 + 0x1a0);
        uVar41 = (ulonglong)iVar69;
        *(uint *)(lVar48 + 0x1a0) = iVar69 + 1U;
        if (*(uint *)(lVar48 + 0x1a4) < iVar69 + 1U) {
          FUN_1447568fc(local_11c8,iVar69);
        }
        *(undefined8 **)(*(longlong *)(lVar48 + 0x198) + uVar41 * 8) = puVar67;
        *(int *)((longlong)puVar67 + 0x1c) = *(int *)(lVar48 + 0x1a0) + -1;
        local_12b0[0x6b] = puVar67;
        FUN_1430256ce();
        lVar39 = DAT_14ca4c5e0;
        iVar69 = *(int *)(DAT_14ca4c5e0 + 0x38);
        if (0 < (longlong)iVar69) {
          lVar48 = 0;
          iVar38 = 0;
          iVar46 = 0;
          uVar41 = 0;
          do {
            bVar4 = *(byte *)(*(longlong *)(lVar39 + 0x30) + 2 + lVar48 * 4);
            if (bVar4 < 0x14) {
              uVar5 = *(ushort *)(*(longlong *)(lVar39 + 0x30) + lVar48 * 4);
              uVar76 = (ulonglong)uVar5;
              iVar78 = iVar46;
              if ((0x67200U >> (bVar4 & 0x1f) & 1) == 0) {
                if (bVar4 == 0x13) {
                  iVar57 = (int)uVar41;
                  if (iVar57 < (int)local_1298[7]) {
                    puVar64 = (undefined1 *)local_1298[6];
                    puVar59 = (undefined1 *)
                              (((longlong)puVar64 >> 0x18) + (longlong)(local_1298 + 6));
                    if (((ulonglong)puVar64 & 1) == 0) {
                      puVar59 = puVar64;
                    }
                    if (uVar5 == *(ushort *)(puVar59 + (longlong)iVar57 * 4 + 2)) {
                      uVar41 = (ulonglong)(iVar57 + 1);
                      goto LAB_14301f325;
                    }
                  }
                  if ((*(longlong *)((longlong)local_12a0 + uVar76) != 0) &&
                     ((*(byte *)((longlong)local_12a0 + uVar76 + 8) & 2) == 0)) goto LAB_14301f318;
                }
              }
              else {
                iVar57 = (int)local_1298[3];
                if (iVar38 < iVar57) {
                  puVar64 = (undefined1 *)local_1298[2];
                  puVar59 = (undefined1 *)(((longlong)puVar64 >> 0x18) + (longlong)(local_1298 + 2))
                  ;
                  if (((ulonglong)puVar64 & 1) == 0) {
                    puVar59 = puVar64;
                  }
                  puVar52 = (ushort *)(puVar59 + (longlong)iVar38 * 4);
                  iVar71 = iVar38;
                  do {
                    if (uVar5 <= *puVar52) {
                      iVar38 = iVar71;
                      if (*puVar52 == uVar5) goto LAB_14301f325;
                      break;
                    }
                    iVar71 = iVar71 + 1;
                    puVar52 = puVar52 + 2;
                    iVar38 = iVar57;
                  } while (iVar57 != iVar71);
                }
                iVar57 = (int)local_1298[5];
                if (iVar46 < iVar57) {
                  puVar64 = (undefined1 *)local_1298[4];
                  puVar59 = (undefined1 *)(((longlong)puVar64 >> 0x18) + (longlong)(local_1298 + 4))
                  ;
                  if (((ulonglong)puVar64 & 1) == 0) {
                    puVar59 = puVar64;
                  }
                  puVar52 = (ushort *)(puVar59 + (longlong)iVar46 * 6);
                  do {
                    puVar51 = local_1280;
                    if (uVar5 <= *puVar52) {
                      iVar78 = iVar46;
                      if (*puVar52 == uVar5) goto LAB_14301f325;
                      break;
                    }
                    iVar46 = iVar46 + 1;
                    puVar52 = puVar52 + 3;
                    iVar78 = iVar57;
                  } while (iVar57 != iVar46);
                }
LAB_14301f318:
                *(undefined8 *)((longlong)local_12a0 + uVar76) = 0;
                iVar46 = iVar78;
              }
            }
LAB_14301f325:
            lVar48 = lVar48 + 1;
          } while (lVar48 != iVar69);
        }
        local_12b8 = (ulonglong *)local_12b0[0x66];
        local_12a8 = (ulonglong *)local_12b0[0x67];
        local_12c8 = (ulonglong *)local_12b0[0x68];
        iVar46 = *(int *)((longlong)local_1220 + (longlong)puVar51 * 0x60 + 0x5c) -
                 *(int *)((longlong)local_1220 + (longlong)puVar51 * 0x60 + 0x54);
        iVar69 = iVar46 + 7;
        iVar46 = iVar46 + 0xe;
        if (-1 < iVar69) {
          iVar46 = iVar69;
        }
        iVar38 = (int)local_1220[(longlong)puVar51 * 0xc + 0xb] -
                 (int)local_1220[(longlong)puVar51 * 0xc + 10];
        iVar69 = iVar38 + 7;
        iVar38 = iVar38 + 0xe;
        if (-1 < iVar69) {
          iVar38 = iVar69;
        }
        FUN_1430256ce();
        lVar39 = DAT_14ca4c5e0;
        iVar69 = *(int *)(DAT_14ca4c5e0 + 0x38);
        if (0 < (longlong)iVar69) {
          local_1270 = local_1298 + 4;
          lVar48 = 0;
          iVar57 = 0;
          iVar78 = 0;
          uVar41 = 0;
          do {
            bVar4 = *(byte *)(*(longlong *)(lVar39 + 0x30) + 2 + lVar48 * 4);
            if (bVar4 < 0x14) {
              uVar5 = *(ushort *)(*(longlong *)(lVar39 + 0x30) + lVar48 * 4);
              uVar76 = (ulonglong)uVar5;
              iVar71 = iVar78;
              if ((0x67200U >> (bVar4 & 0x1f) & 1) == 0) {
                if (bVar4 == 0x13) {
                  iVar70 = (int)uVar41;
                  if (iVar70 < (int)local_1298[7]) {
                    puVar64 = (undefined1 *)local_1298[6];
                    puVar59 = (undefined1 *)
                              (((longlong)puVar64 >> 0x18) + (longlong)(local_1298 + 6));
                    if (((ulonglong)puVar64 & 1) == 0) {
                      puVar59 = puVar64;
                    }
                    if (uVar5 == *(ushort *)(puVar59 + (longlong)iVar70 * 4 + 2)) {
                      uVar41 = (ulonglong)(iVar70 + 1);
                      goto LAB_14301f543;
                    }
                  }
                  if ((*(longlong *)((longlong)local_12a0 + uVar76) != 0) &&
                     ((*(byte *)((longlong)local_12a0 + uVar76 + 8) & 2) == 0)) goto LAB_14301f536;
                }
              }
              else {
                iVar70 = (int)local_1298[3];
                if (iVar57 < iVar70) {
                  puVar64 = (undefined1 *)local_1298[2];
                  puVar59 = (undefined1 *)(((longlong)puVar64 >> 0x18) + (longlong)(local_1298 + 2))
                  ;
                  if (((ulonglong)puVar64 & 1) == 0) {
                    puVar59 = puVar64;
                  }
                  puVar52 = (ushort *)(puVar59 + (longlong)iVar57 * 4);
                  iVar72 = iVar57;
                  do {
                    if (uVar5 <= *puVar52) {
                      iVar57 = iVar72;
                      if (*puVar52 == uVar5) goto LAB_14301f543;
                      break;
                    }
                    iVar72 = iVar72 + 1;
                    puVar52 = puVar52 + 2;
                    iVar57 = iVar70;
                  } while (iVar70 != iVar72);
                }
                iVar70 = (int)local_1298[5];
                if (iVar78 < iVar70) {
                  puVar64 = (undefined1 *)*local_1270;
                  puVar59 = (undefined1 *)(((longlong)puVar64 >> 0x18) + (longlong)local_1270);
                  if (((ulonglong)puVar64 & 1) == 0) {
                    puVar59 = puVar64;
                  }
                  puVar52 = (ushort *)(puVar59 + (longlong)iVar78 * 6);
                  do {
                    if (uVar5 <= *puVar52) {
                      iVar71 = iVar78;
                      if (*puVar52 == uVar5) goto LAB_14301f543;
                      break;
                    }
                    iVar78 = iVar78 + 1;
                    puVar52 = puVar52 + 3;
                    iVar71 = iVar70;
                  } while (iVar70 != iVar78);
                }
LAB_14301f536:
                *(undefined8 *)((longlong)local_12a0 + uVar76) = 0;
                iVar78 = iVar71;
              }
            }
LAB_14301f543:
            lVar48 = lVar48 + 1;
          } while (lVar48 != iVar69);
        }
        unaff_XMM7 = ZEXT816(0);
        FUN_140069376(local_12c0);
        puVar51 = local_1238;
        uVar55 = (undefined6)(uVar41 >> 0x10);
        uVar36 = (undefined4)CONCAT62(uVar55,2);
        if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
           ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
          uVar36 = (undefined4)CONCAT62(uVar55,4);
        }
        puVar67 = (undefined8 *)(*(longlong *)(local_12c0 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar79 = puVar67 + 0x3d;
        if (*(undefined8 **)(local_12c0 + 0x78) < puVar79) {
          FUN_140023dd8(local_1238,0x1f0);
          puVar67 = (undefined8 *)(*puVar51 + 7 & 0xfffffffffffffff8);
          puVar79 = puVar67 + 0x3d;
        }
        *local_1238 = (ulonglong)puVar79;
        stack0xfffffffffffffee0 = DAT_14ca4c5e0;
        local_128._0_8_ = local_12a0;
        if (DAT_14ca4c5e0 != 0) {
          LOCK();
          *(int *)(DAT_14ca4c5e0 + 8) = *(int *)(DAT_14ca4c5e0 + 8) + 1;
          UNLOCK();
        }
        local_118._0_8_ = &DAT_14ca4c598;
        local_12d8 = (ulonglong *)CONCAT71(local_12d8._1_7_,2);
        puVar64 = local_128;
        FUN_140068f1a(puVar67,&local_119d,puVar64,uVar36);
        param_1 = local_12c0;
        *puVar67 = &PTR_FUN_14a2f8fb0;
        puVar67[0x37] = &DAT_14ca4c598;
        puVar67[0x38] = local_12a0;
        puVar67[0x39] = local_1298;
        puVar67[0x3a] = local_1200;
        *(int *)(puVar67 + 0x3b) = iVar38 >> 3;
        *(int *)((longlong)puVar67 + 0x1dc) = iVar46 >> 3;
        *(undefined4 *)(puVar67 + 0x3c) = 1;
        iVar69 = *(int *)(local_12c0 + 0x170);
        *(uint *)(local_12c0 + 0x170) = iVar69 + 1U;
        if (*(uint *)(local_12c0 + 0x174) < iVar69 + 1U) {
          FUN_14470e57a(local_11f0,iVar69);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar69 * 8) = puVar67;
        *(int *)((longlong)puVar67 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
        FUN_140069100(param_1,puVar67);
        FUN_1472e5ae6(&local_1148);
        puVar51 = (ulonglong *)((longlong)local_1280 + 1);
        iVar69 = (int)local_1290[1];
        plVar54 = local_1290;
      } while ((longlong)puVar51 < (longlong)iVar69);
      uVar76 = CONCAT71((int7)((ulonglong)puVar64 >> 8),local_12b8 != (ulonglong *)0x0);
      uVar41 = CONCAT71((int7)((ulonglong)puVar67 >> 8),local_12a8 != (ulonglong *)0x0);
      uVar36 = CONCAT31((int3)(iVar46 >> 0xb),local_12c8 != (ulonglong *)0x0);
      unaff_XMM6 = auVar113;
    }
    local_1038 = local_1158;
    local_1048 = local_1168._0_8_;
    uStack_1040 = local_1168._8_8_;
  }
  uVar37 = param_6[0xb];
  uVar47 = 0x38;
  if ((int)uVar37 < 0x38) {
    uVar47 = uVar37;
  }
  uVar66 = 1;
  if (1 < (int)uVar47) {
    uVar66 = uVar47;
  }
  if (1 < (int)uVar37) {
    local_1218 = CONCAT44(local_1218._4_4_,(int)uVar76);
    local_12b0 = (undefined8 *)CONCAT44(local_12b0._4_4_,(int)uVar41);
    local_1278 = CONCAT44(local_1278._4_4_,uVar36);
    uVar37 = *param_6;
    local_118 = ZEXT816(0);
    _local_128 = ZEXT816(0);
    if (0 < (int)local_1210) {
      uVar41 = (ulonglong)local_1210;
      uVar76 = 0;
      puVar64 = auStack_3d1 + 9;
      do {
        uVar42 = FUN_14472bf7a(param_1,puVar64,
                               (&PTR_u_Shadow_Denoiser_HistoryConvoluti_14a2f9280)
                               [(longlong)(int)(uVar37 << 2) + uVar76],0);
        *(undefined8 *)(local_128 + uVar76 * 8) = uVar42;
        uVar76 = uVar76 + 1;
        puVar64 = puVar64 + 0x38;
      } while (uVar41 != uVar76);
      iVar69 = (int)local_1290[1];
      plVar54 = local_1290;
    }
    auVar113 = _DAT_149932320;
    if (0 < iVar69) {
      local_1268 = (longlong *)(param_1 + 0x70);
      uVar37 = 0x38;
      if ((int)uVar66 < 0x38) {
        uVar37 = uVar66;
      }
      if ((int)uVar37 < 2) {
        uVar37 = 1;
      }
      local_1260 = (longlong *)CONCAT44(local_1260._4_4_,uVar37);
      local_1258 = (ulonglong *)(param_1 + 0x98);
      local_1200 = (ulonglong *)(param_1 + 0x198);
      local_1238 = (ulonglong *)(param_1 + 0x178);
      puVar51 = (ulonglong *)&DAT_0000005c;
      puVar73 = (ulonglong *)0x13818;
      unaff_XMM7 = ZEXT816(0);
      local_12c8 = (ulonglong *)0x0;
      local_12a8 = (ulonglong *)0x0;
      puVar60 = (ulonglong *)0x0;
      do {
        plVar44 = local_1268;
        puVar64 = local_408;
        if (local_408 == (undefined1 *)0x0) {
          puVar64 = local_c48;
        }
        puVar59 = local_c68;
        if (local_c68 == (undefined1 *)0x0) {
          puVar59 = local_1028;
        }
        local_1270 = (ulonglong *)*plVar54;
        local_1280 = *(ulonglong **)(param_6 + 0x1a);
        puVar67 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar79 = puVar67 + 0x5c;
        local_12a0 = puVar60;
        local_1298 = puVar73;
        if (*(undefined8 **)(param_1 + 0x78) < puVar79) {
          FUN_140023dd8(local_1268,0x2f0);
          puVar67 = (undefined8 *)(*plVar44 + 0xfU & 0xfffffffffffffff0);
          puVar79 = puVar67 + 0x5c;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar79;
        *puVar67 = &PTR_FUN_14a2f8608;
        *(undefined1 (*) [16])(puVar67 + 4) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 2) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 8) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 6) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0xe) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x10) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x12) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x16) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x24) = unaff_XMM7;
        *(undefined1 (*) [16])(puVar67 + 0x26) = unaff_XMM7;
        *(undefined1 (*) [16])(puVar67 + 0x28) = unaff_XMM7;
        *(undefined1 (*) [16])(puVar67 + 0x2a) = unaff_XMM7;
        *(undefined1 (*) [16])(puVar67 + 0x2c) = unaff_XMM7;
        *(undefined1 (*) [16])(puVar67 + 0x2e) = unaff_XMM7;
        puVar67[0x30] = 0;
        *(undefined1 *)(puVar67 + 0x31) = 1;
        puVar67[0x36] = 0;
        *(undefined1 (*) [16])(puVar67 + 0x34) = unaff_XMM7;
        *(undefined1 (*) [16])(puVar67 + 0x32) = unaff_XMM7;
        *(undefined1 *)(puVar67 + 0x37) = 1;
        *(undefined1 (*) [16])(puVar67 + 0x3c) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x3a) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x40) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x3e) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x44) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x42) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x48) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x46) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x4a) = auVar113;
        *(undefined1 (*) [16])(puVar67 + 0x4e) = unaff_XMM7;
        *(undefined1 (*) [16])(puVar67 + 0x50) = unaff_XMM7;
        *(undefined1 (*) [16])(puVar67 + 0x52) = unaff_XMM7;
        *(undefined1 (*) [16])(puVar67 + 0x54) = unaff_XMM7;
        *(undefined1 (*) [16])(puVar67 + 0x56) = unaff_XMM7;
        *(undefined1 (*) [16])(puVar67 + 0x58) = unaff_XMM7;
        puVar67[0x5a] = 0;
        iVar69 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar69 + 1U;
        local_12b8 = puVar51;
        if (*(uint *)(param_1 + 0xa4) < iVar69 + 1U) {
          FUN_1448cfae8(local_1258,iVar69);
        }
        param_1 = local_12c0;
        puVar59 = puVar59 + (longlong)local_12a8;
        *(undefined8 **)(*(longlong *)(local_12c0 + 0x98) + (longlong)iVar69 * 8) = puVar67;
        *(int *)(puVar67 + 10) = (int)local_1260;
        *(uint *)((longlong)puVar67 + 0x5c) = param_6[0xc];
        memcpy(puVar67 + 0xe,puVar64 + (longlong)local_12c8,0x158);
        memcpy(puVar67 + 0x3a,puVar59,0xa0);
        puVar67[0x4e] = local_1048;
        puVar67[0x4f] = uStack_1040;
        puVar67[0x50] = local_1038._0_8_;
        puVar67[0x51] = local_1038._8_8_;
        FUN_143026839(&local_1148,param_1,local_128);
        plVar54 = local_1268;
        puVar67[0x58] = CONCAT71(uStack_1137,local_1138);
        puVar67[0x59] = CONCAT44(uStack_112c,uStack_1130);
        puVar67[0x56] = local_1148;
        puVar67[0x57] = uStack_1140;
        local_1068[8] = 0;
        local_1068._0_4_ = *param_6;
        local_1068._12_4_ = param_6[1];
        local_1068._4_4_ = 3;
        local_1058[0] = 1;
        local_1148 = (ulonglong *)0x20009;
        auStack_1115[1] = 0;
        uStack_111c = 0x10001;
        uStack_1118 = 0x101;
        uStack_1116 = 0;
        auStack_1115[0] = 10;
        uStack_1130 = local_3d8;
        uStack_1140 = stack0xfffffffffffffc18;
        local_1138 = auStack_3e0[0];
        uStack_1137 = auStack_3e0._1_7_;
        uVar37 = DAT_14ca84e40;
        if ((int)(uint)local_1228 < (int)DAT_14ca84e40) {
          uVar37 = (uint)local_1228;
        }
        if ((int)uVar37 < 2) {
          uVar37 = 1;
        }
        auStack_1115[2] = 0xff;
        uStack_1120 = DAT_14ca84e40;
        if ((int)(uint)local_1230 < (int)DAT_14ca84e40) {
          uStack_1120 = (uint)local_1230;
        }
        uStack_112c = local_124c;
        if ((int)uStack_1120 < 2) {
          uStack_1120 = 1;
        }
        local_1128 = (ulonglong)uVar37 << 0x20;
        uVar76 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar41 = uVar76 + 0x120;
        if (*(ulonglong *)(param_1 + 0x78) < uVar41) {
          FUN_140023dd8(local_1268,0x128);
          uVar76 = *plVar54 + 7U & 0xfffffffffffffff8;
          uVar41 = uVar76 + 0x120;
        }
        *(ulonglong *)(param_1 + 0x70) = uVar41;
        FUN_1456bbb8c(uVar76,L"DebugDenoiserPostfilter",&local_1148,0);
        iVar69 = *(int *)(param_1 + 0x180);
        *(uint *)(param_1 + 0x180) = iVar69 + 1U;
        if (*(uint *)(param_1 + 0x184) < iVar69 + 1U) {
          FUN_14472c0f6(local_1238,iVar69);
        }
        plVar54 = local_1268;
        *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar69 * 8) = uVar76;
        *(int *)(uVar76 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
        uVar68 = *(undefined1 *)(uVar76 + 0x94);
        puVar74 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar79 = puVar74 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar79) {
          FUN_140023dd8(local_1268,0x50);
          puVar74 = (undefined8 *)(*plVar54 + 7U & 0xfffffffffffffff8);
          puVar79 = puVar74 + 9;
        }
        puVar73 = local_1298;
        puVar60 = local_12a0;
        puVar51 = local_12b8;
        *(undefined8 **)(param_1 + 0x70) = puVar79;
        puVar74[1] = *(undefined8 *)(uVar76 + 8);
        puVar74[2] = 0;
        *(undefined1 *)(puVar74 + 3) = 0;
        *(undefined8 *)((longlong)puVar74 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar74 + 5) = 0;
        *puVar74 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar74 + 6) = uVar68;
        *(undefined4 *)((longlong)puVar74 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar74 + 0x35) = 0;
        *(undefined1 *)(puVar74 + 7) = 0;
        puVar74[8] = uVar76;
        iVar69 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar69 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar69 + 1U) {
          FUN_1447568fc(local_1200,iVar69);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar69 * 8) = puVar74;
        *(int *)((longlong)puVar74 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar67[0x5a] = puVar74;
        FUN_14302699a(&local_1148,*(undefined8 *)((longlong)local_1270 + (longlong)puVar73),
                      local_1068);
        iVar46 = *(int *)((longlong)local_1280 + (longlong)puVar51) -
                 *(int *)((longlong)(local_1280 + -1) + (longlong)puVar51);
        iVar69 = iVar46 + 7;
        local_11a8 = iVar46 + 0xe;
        if (-1 < iVar69) {
          local_11a8 = iVar69;
        }
        local_11a8 = local_11a8 >> 3;
        iVar46 = *(int *)((longlong)local_1280 + -4 + (longlong)puVar51) -
                 *(int *)((longlong)local_1280 + -0xc + (longlong)puVar51);
        iVar69 = iVar46 + 7;
        local_11ac = iVar46 + 0xe;
        if (-1 < iVar69) {
          local_11ac = iVar69;
        }
        local_11ac = local_11ac >> 3;
        local_11a4 = 1;
        local_12d8 = (ulonglong *)&local_11ac;
        FUN_143026a2b(param_1,local_1168,&local_1148);
        puVar60 = (ulonglong *)((longlong)puVar60 + 1);
        puVar51 = puVar51 + 0xc;
        puVar73 = puVar73 + 0x2782;
        local_12a8 = local_12a8 + 0x14;
        local_12c8 = local_12c8 + 0x2c;
        plVar54 = local_1290;
        unaff_XMM6 = auVar113;
      } while ((longlong)puVar60 < (longlong)(int)local_1290[1]);
    }
    local_1038 = local_118;
    local_1048 = local_128._0_8_;
    uStack_1040 = stack0xfffffffffffffee0;
    uVar41 = (ulonglong)local_12b0 & 0xffffffff;
    uVar76 = local_1218 & 0xffffffff;
    uVar36 = (int)local_1278;
  }
  auVar113 = local_1038;
  if (((*(byte *)(*plVar54 + 0x125b0) & 1) == 0) && ((char)param_6[10] == '\x01')) {
    if ((char)uVar76 != '\0') {
      plVar54 = *(longlong **)(local_1208 + 0x20);
      lVar39 = *local_11f8;
      plVar44 = (longlong *)*plVar54;
      if (plVar44 != (longlong *)0x0) {
        *plVar54 = 0;
        (**(code **)(*plVar44 + 0x38))();
      }
      bVar4 = *(byte *)(lVar39 + 0x24);
      *(byte *)(lVar39 + 0x24) = bVar4 | 2;
      *(undefined1 *)(lVar39 + 0x26) = 1;
      plVar44 = (longlong *)(local_12c0 + 0x1b8);
      iVar69 = *(int *)(local_12c0 + 0x1c0);
      *(uint *)(local_12c0 + 0x1c0) = iVar69 + 1U;
      if (*(uint *)(local_12c0 + 0x1c4) < iVar69 + 1U) {
        FUN_14017e38e(plVar44,iVar69);
      }
      lVar49 = local_12c0;
      lVar48 = *plVar44;
      *(longlong *)(lVar48 + (longlong)iVar69 * 0x10) = lVar39;
      *(longlong **)(lVar48 + 8 + (longlong)iVar69 * 0x10) = plVar54;
      if ((bVar4 & 2) == 0) {
        pcVar1 = (char *)(local_12c0 + 0x4a8);
        LOCK();
        bVar80 = *(char *)(local_12c0 + 0x4a8) == '\0';
        if (bVar80) {
          *(char *)(local_12c0 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar80) {
          FUN_1447d2058();
        }
        iVar69 = *(int *)(lVar49 + 0x4b8);
        *(uint *)(lVar49 + 0x4b8) = iVar69 + 1U;
        if (*(uint *)(lVar49 + 0x4bc) < iVar69 + 1U) {
          FUN_1447f2dbc((longlong *)(lVar49 + 0x4b0),iVar69);
        }
        lVar48 = *(longlong *)(lVar49 + 0x4b0);
        *(undefined8 *)(lVar48 + (longlong)iVar69 * 0x10) = 2;
        *(longlong *)(lVar48 + 8 + (longlong)iVar69 * 0x10) = lVar39;
        LOCK();
        cVar35 = *pcVar1;
        if (cVar35 == '\x01') {
          *pcVar1 = '\0';
        }
        UNLOCK();
        if (cVar35 != '\x01') {
          FUN_14008cdb0(pcVar1);
        }
      }
    }
    if ((char)uVar41 != '\0') {
      plVar54 = *(longlong **)(local_1208 + 0x28);
      lVar39 = local_11f8[5];
      plVar44 = (longlong *)*plVar54;
      if (plVar44 != (longlong *)0x0) {
        *plVar54 = 0;
        (**(code **)(*plVar44 + 0x38))();
      }
      bVar4 = *(byte *)(lVar39 + 0x24);
      *(byte *)(lVar39 + 0x24) = bVar4 | 2;
      *(undefined1 *)(lVar39 + 0x26) = 1;
      plVar44 = (longlong *)(local_12c0 + 0x1b8);
      iVar69 = *(int *)(local_12c0 + 0x1c0);
      uVar37 = iVar69 + 1;
      *(uint *)(local_12c0 + 0x1c0) = uVar37;
      if (*(uint *)(local_12c0 + 0x1c4) < uVar37) {
        FUN_14017e38e(plVar44);
      }
      lVar49 = local_12c0;
      lVar65 = (longlong)iVar69 * 0x10;
      lVar48 = *plVar44;
      *(longlong *)(lVar48 + lVar65) = lVar39;
      *(longlong **)(lVar48 + 8 + lVar65) = plVar54;
      if ((bVar4 & 2) == 0) {
        pcVar1 = (char *)(local_12c0 + 0x4a8);
        LOCK();
        bVar80 = *(char *)(local_12c0 + 0x4a8) == '\0';
        if (bVar80) {
          *(char *)(local_12c0 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar80) {
          FUN_1447d2058();
        }
        iVar69 = *(int *)(lVar49 + 0x4b8);
        uVar37 = iVar69 + 1;
        *(uint *)(lVar49 + 0x4b8) = uVar37;
        if (*(uint *)(lVar49 + 0x4bc) < uVar37) {
          FUN_1447f2dbc();
        }
        lVar48 = *(longlong *)(lVar49 + 0x4b0);
        lVar49 = (longlong)iVar69 * 0x10;
        *(undefined8 *)(lVar48 + lVar49) = 2;
        *(longlong *)(lVar48 + 8 + lVar49) = lVar39;
        LOCK();
        cVar35 = *pcVar1;
        if (cVar35 == '\x01') {
          *pcVar1 = '\0';
        }
        UNLOCK();
        if (cVar35 != '\x01') {
          FUN_14008cdb0(pcVar1);
        }
      }
    }
    if ((char)uVar36 != '\0') {
      plVar54 = *(longlong **)(local_1208 + 0x30);
      lVar39 = local_11f8[6];
      plVar44 = (longlong *)*plVar54;
      if (plVar44 != (longlong *)0x0) {
        *plVar54 = 0;
        (**(code **)(*plVar44 + 0x38))();
      }
      bVar4 = *(byte *)(lVar39 + 0x24);
      *(byte *)(lVar39 + 0x24) = bVar4 | 2;
      *(undefined1 *)(lVar39 + 0x26) = 1;
      plVar44 = (longlong *)(local_12c0 + 0x1b8);
      iVar69 = *(int *)(local_12c0 + 0x1c0);
      uVar37 = iVar69 + 1;
      *(uint *)(local_12c0 + 0x1c0) = uVar37;
      if (*(uint *)(local_12c0 + 0x1c4) < uVar37) {
        FUN_14017e38e(plVar44);
      }
      lVar49 = local_12c0;
      lVar65 = (longlong)iVar69 * 0x10;
      lVar48 = *plVar44;
      *(longlong *)(lVar48 + lVar65) = lVar39;
      *(longlong **)(lVar48 + 8 + lVar65) = plVar54;
      if ((bVar4 & 2) == 0) {
        pcVar1 = (char *)(local_12c0 + 0x4a8);
        LOCK();
        bVar80 = *(char *)(local_12c0 + 0x4a8) == '\0';
        if (bVar80) {
          *(char *)(local_12c0 + 0x4a8) = '\x01';
        }
        UNLOCK();
        if (!bVar80) {
          FUN_1447d2058();
        }
        iVar69 = *(int *)(lVar49 + 0x4b8);
        uVar37 = iVar69 + 1;
        *(uint *)(lVar49 + 0x4b8) = uVar37;
        if (*(uint *)(lVar49 + 0x4bc) < uVar37) {
          FUN_1447f2dbc();
        }
        lVar48 = *(longlong *)(lVar49 + 0x4b0);
        lVar49 = (longlong)iVar69 * 0x10;
        *(undefined8 *)(lVar48 + lVar49) = 2;
        *(longlong *)(lVar48 + 8 + lVar49) = lVar39;
        LOCK();
        cVar35 = *pcVar1;
        if (cVar35 == '\x01') {
          *pcVar1 = '\0';
        }
        UNLOCK();
        if (cVar35 != '\x01') {
          FUN_14008cdb0(pcVar1);
        }
      }
    }
    local_12c8 = (ulonglong *)(local_12c0 + 0x1b8);
    pcVar1 = (char *)(local_12c0 + 0x4a8);
    local_12a8 = (ulonglong *)(local_12c0 + 0x4b0);
    lVar39 = 0;
    bVar80 = true;
    do {
      bVar56 = bVar80;
      if (local_120c == 3) {
        if (bVar56) {
          plVar54 = (longlong *)(*(longlong *)(*local_1290 + 0x3108) + 0x12f8);
        }
        else {
          plVar54 = (longlong *)(*(longlong *)(*local_1290 + 0x3108) + 0x1300);
        }
LAB_1430203a3:
        if (plVar54 != (longlong *)0x0) {
          puVar64 = local_408;
          if (local_408 == (undefined1 *)0x0) {
            puVar64 = local_c48;
          }
          lVar39 = *(longlong *)(puVar64 + lVar39 * 8 + 0x120);
          plVar44 = (longlong *)*plVar54;
          if (plVar44 != (longlong *)0x0) {
            *plVar54 = 0;
            (**(code **)(*plVar44 + 0x38))();
          }
          bVar4 = *(byte *)(lVar39 + 0x24);
          *(byte *)(lVar39 + 0x24) = bVar4 | 2;
          *(undefined1 *)(lVar39 + 0x26) = 1;
          iVar69 = *(int *)(local_12c0 + 0x1c0);
          uVar37 = iVar69 + 1;
          *(uint *)(local_12c0 + 0x1c0) = uVar37;
          if (*(uint *)(local_12c0 + 0x1c4) < uVar37) {
            FUN_14017e38e(local_12c8);
          }
          lVar48 = (longlong)iVar69 * 0x10;
          uVar41 = *local_12c8;
          *(longlong *)(uVar41 + lVar48) = lVar39;
          *(longlong **)(uVar41 + 8 + lVar48) = plVar54;
          if ((bVar4 & 2) == 0) {
            LOCK();
            cVar35 = *pcVar1;
            if (cVar35 == '\0') {
              *pcVar1 = '\x01';
            }
            UNLOCK();
            if (cVar35 != '\0') {
              FUN_1447d2058(pcVar1);
            }
            iVar69 = *(int *)(local_12c0 + 0x4b8);
            uVar37 = iVar69 + 1;
            *(uint *)(local_12c0 + 0x4b8) = uVar37;
            if (*(uint *)(local_12c0 + 0x4bc) < uVar37) {
              FUN_1447f2dbc(local_12a8);
            }
            uVar41 = *local_12a8;
            lVar48 = (longlong)iVar69 * 0x10;
            *(undefined8 *)(uVar41 + lVar48) = 2;
            *(longlong *)(uVar41 + 8 + lVar48) = lVar39;
            LOCK();
            cVar35 = *pcVar1;
            if (cVar35 == '\x01') {
              *pcVar1 = '\0';
            }
            UNLOCK();
            if (cVar35 != '\x01') {
              FUN_14008cdb0(pcVar1);
            }
          }
        }
      }
      else if (local_120c == 2) {
        if (bVar56) {
          plVar54 = *(longlong **)(local_1208 + 0x38);
          goto LAB_1430203a3;
        }
        break;
      }
      lVar39 = 1;
      bVar80 = false;
    } while (bVar56);
    param_1 = local_12c0;
    if (0 < (int)param_6[1]) {
      iVar69 = (int)local_11e8;
      local_12b8 = (ulonglong *)(ulonglong)((iVar69 + (uint)(iVar69 == 0)) * 8);
      local_11e8 = (ulonglong)(uint)(iVar69 << 3);
      puVar79 = &local_1048;
      puVar51 = (ulonglong *)0x0;
      do {
        local_1298 = *(ulonglong **)(param_8 + (longlong)puVar51 * 8);
        local_12a0 = puVar51;
        if ((char)local_1284 != '\0') {
          puVar51 = local_1298 + 4;
          puVar60 = (ulonglong *)0x0;
          do {
            puVar67 = (undefined8 *)((longlong)puVar60 + (longlong)puVar51);
            lVar39 = *(longlong *)((longlong)puVar79 + (longlong)puVar60);
            plVar54 = *(longlong **)((longlong)puVar51 + (longlong)puVar60);
            if (plVar54 != (longlong *)0x0) {
              *puVar67 = 0;
              (**(code **)(*plVar54 + 0x38))();
            }
            bVar4 = *(byte *)(lVar39 + 0x24);
            *(byte *)(lVar39 + 0x24) = bVar4 | 2;
            *(undefined1 *)(lVar39 + 0x26) = 1;
            iVar69 = *(int *)(local_12c0 + 0x1c0);
            *(uint *)(local_12c0 + 0x1c0) = iVar69 + 1U;
            if (*(uint *)(local_12c0 + 0x1c4) < iVar69 + 1U) {
              FUN_14017e38e(local_12c8,iVar69);
            }
            param_1 = local_12c0;
            uVar41 = *local_12c8;
            *(longlong *)(uVar41 + (longlong)iVar69 * 0x10) = lVar39;
            *(undefined8 **)(uVar41 + 8 + (longlong)iVar69 * 0x10) = puVar67;
            if ((bVar4 & 2) == 0) {
              LOCK();
              cVar35 = *pcVar1;
              if (cVar35 == '\0') {
                *pcVar1 = '\x01';
              }
              UNLOCK();
              if (cVar35 != '\0') {
                FUN_1447d2058();
              }
              iVar69 = *(int *)(param_1 + 0x4b8);
              *(uint *)(param_1 + 0x4b8) = iVar69 + 1U;
              if (*(uint *)(param_1 + 0x4bc) < iVar69 + 1U) {
                FUN_1447f2dbc(local_12a8,iVar69);
              }
              uVar41 = *local_12a8;
              *(undefined8 *)(uVar41 + (longlong)iVar69 * 0x10) = 2;
              *(longlong *)(uVar41 + 8 + (longlong)iVar69 * 0x10) = lVar39;
              LOCK();
              cVar35 = *pcVar1;
              if (cVar35 == '\x01') {
                *pcVar1 = '\0';
              }
              UNLOCK();
              if (cVar35 != '\x01') {
                FUN_14008cdb0(pcVar1);
              }
            }
            puVar60 = puVar60 + 1;
          } while (local_12b8 != puVar60);
        }
        plVar54 = local_1290;
        puVar51 = local_1298;
        FUN_1472e5e94(local_1298);
        if (0 < (int)plVar54[1]) {
          lVar39 = 8;
          lVar48 = 8;
          lVar49 = 0;
          do {
            lVar65 = *(longlong *)(param_6 + 0x1a);
            puVar60 = (ulonglong *)puVar51[2];
            if (puVar60 == (ulonglong *)0x0) {
              puVar60 = puVar51;
            }
            *(undefined8 *)((longlong)puVar60 + lVar48 + -8) = *(undefined8 *)(lVar65 + -8 + lVar39)
            ;
            *(undefined8 *)((longlong)puVar60 + lVar48) = *(undefined8 *)(lVar65 + lVar39);
            lVar49 = lVar49 + 1;
            lVar48 = lVar48 + 0x10;
            lVar39 = lVar39 + 0x60;
          } while (lVar49 < (int)plVar54[1]);
        }
        puVar51 = (ulonglong *)((longlong)local_12a0 + 1);
        puVar79 = (undefined8 *)((longlong)puVar79 + local_11e8);
      } while ((longlong)puVar51 < (longlong)(int)param_6[1]);
    }
  }
  if (*param_6 == 0) {
    puVar79 = &local_1148;
    FUN_1472e5edc(puVar79);
    lVar39 = 0x35;
    do {
      local_1158[lVar39 + 0xd] = auStack_3d1[lVar39 + 6];
      *(undefined8 *)(local_1180 + lVar39 + 3) = *(undefined8 *)(auStack_3fd + lVar39);
      *(undefined2 *)(local_1158 + lVar39 + 0xe) = *(undefined2 *)(auStack_3d1 + lVar39 + 7);
      *(undefined8 *)(local_1168 + lVar39 + 0xf) = *(undefined8 *)(auStack_3e0 + lVar39 + 7);
      *(undefined2 *)(local_1158 + lVar39 + 7) = *(undefined2 *)(auStack_3d1 + lVar39);
      *(undefined4 *)(local_1158 + lVar39 + 9) = *(undefined4 *)(auStack_3d1 + lVar39 + 2);
      uVar42 = *(undefined8 *)(auStack_3ed + lVar39);
      *(undefined8 *)(local_1178 + lVar39 + 3) = *(undefined8 *)(local_3f8 + lVar39 + 3);
      *(undefined8 *)(local_1168 + lVar39 + -5) = uVar42;
      *(undefined4 *)(local_1168 + lVar39 + 3) = *(undefined4 *)((longlong)&uStack_3e5 + lVar39);
      *(undefined4 *)(local_1168 + lVar39 + 0xb) = *(undefined4 *)(auStack_3e0 + lVar39 + 3);
      *(undefined1 *)((longlong)&local_1148 + lVar39) = auStack_3d1[lVar39 + 9];
      *(undefined4 *)(local_1168 + lVar39 + 7) = *(undefined4 *)(local_3c8 + lVar39 + -0x19);
      lVar39 = lVar39 + 0x38;
    } while (lVar39 != 0x115);
    uVar37 = param_6[1];
    lVar39 = (longlong)(int)uVar37;
    if (lVar39 < 1) {
      local_118 = ZEXT816(0);
      _local_128 = ZEXT816(0);
    }
    else {
      lVar48 = lVar39 + -1;
      auVar82._8_4_ = (int)lVar48;
      auVar82._0_8_ = lVar48;
      auVar82._12_4_ = (int)((ulonglong)lVar48 >> 0x20);
      auVar83 = pmovsxbq(auVar113,0xf0e);
      auVar85 = pmovsxbq(in_XMM2,0xd0c);
      auVar89 = pmovsxbq(in_XMM3,0xb0a);
      auVar93 = pmovsxbq(in_XMM4,0x908);
      auVar95 = pmovsxbq(in_XMM5,0x706);
      auVar96 = pmovsxbq(unaff_XMM6,0x504);
      auVar99 = pmovsxbq(unaff_XMM7,0x302);
      auVar105 = pmovsxbq(unaff_XMM8,0x100);
      lVar48 = 0;
      auVar113 = pmovsxbq(unaff_XMM11,0x1010);
      do {
        auVar116 = auVar82 ^ _DAT_149931e80;
        lVar49 = auVar116._0_8_;
        auVar118._0_8_ = -(ulonglong)(lVar49 < SUB168(auVar105 ^ _DAT_149931e80,0));
        lVar65 = auVar116._8_8_;
        auVar118._8_8_ = -(ulonglong)(lVar65 < SUB168(auVar105 ^ _DAT_149931e80,8));
        auVar126 = pshuflw(unaff_XMM14,auVar118,0xe8);
        auVar127._8_4_ = 0xffffffff;
        auVar127._0_8_ = 0xffffffffffffffff;
        auVar127._12_4_ = 0xffffffff;
        auVar127 = packssdw(auVar126 ^ auVar127,auVar126 ^ auVar127);
        if ((auVar127._0_4_ & 1) != 0) {
          auStack_1115[lVar48] = 10;
        }
        auVar118 = packssdw(auVar118,auVar118);
        auVar126._8_4_ = 0xffffffff;
        auVar126._0_8_ = 0xffffffffffffffff;
        auVar126._12_4_ = 0xffffffff;
        auVar118 = packssdw(auVar118 ^ auVar126,auVar118 ^ auVar126);
        auVar118 = packsswb(auVar118,auVar118);
        if ((auVar118[1] & 1) != 0) {
          auStack_10dd[lVar48] = 10;
        }
        auVar119._0_8_ = -(ulonglong)(lVar49 < SUB168(auVar99 ^ _DAT_149931e80,0));
        auVar119._8_8_ = -(ulonglong)(lVar65 < SUB168(auVar99 ^ _DAT_149931e80,8));
        auVar127 = packssdw(auVar127,auVar119);
        auVar7._8_4_ = 0xffffffff;
        auVar7._0_8_ = 0xffffffffffffffff;
        auVar7._12_4_ = 0xffffffff;
        auVar127 = packssdw(auVar127 ^ auVar7,auVar127 ^ auVar7);
        auVar127 = packsswb(auVar127,auVar127);
        if ((auVar127[2] & 1) != 0) {
          auStack_10a5[lVar48] = 10;
        }
        auVar118 = pshufhw(auVar119,auVar119,0x84);
        auVar8._8_4_ = 0xffffffff;
        auVar8._0_8_ = 0xffffffffffffffff;
        auVar8._12_4_ = 0xffffffff;
        auVar118 = packssdw(auVar118 ^ auVar8,auVar118 ^ auVar8);
        auVar118 = packsswb(auVar118,auVar118);
        if ((auVar118[3] & 1) != 0) {
          auStack_106d[lVar48] = 10;
        }
        auVar120._0_8_ = -(ulonglong)(lVar49 < SUB168(auVar96 ^ _DAT_149931e80,0));
        auVar120._8_8_ = -(ulonglong)(lVar65 < SUB168(auVar96 ^ _DAT_149931e80,8));
        auVar127 = pshuflw(auVar127,auVar120,0xe8);
        auVar9._8_4_ = 0xffffffff;
        auVar9._0_8_ = 0xffffffffffffffff;
        auVar9._12_4_ = 0xffffffff;
        auVar127 = packssdw(auVar127 ^ auVar9,auVar127 ^ auVar9);
        auVar127 = packsswb(auVar127,auVar127);
        if ((auVar127[4] & 1) != 0) {
          local_1038[lVar48 + 3] = 10;
        }
        auVar118 = packssdw(auVar120,auVar120);
        auVar10._8_4_ = 0xffffffff;
        auVar10._0_8_ = 0xffffffffffffffff;
        auVar10._12_4_ = 0xffffffff;
        auVar118 = packssdw(auVar118 ^ auVar10,auVar118 ^ auVar10);
        auVar118 = packsswb(auVar118,auVar118);
        if ((auVar118[5] & 1) != 0) {
          auStack_ffd[lVar48] = 10;
        }
        auVar121._0_8_ = -(ulonglong)(lVar49 < SUB168(auVar95 ^ _DAT_149931e80,0));
        auVar121._8_8_ = -(ulonglong)(lVar65 < SUB168(auVar95 ^ _DAT_149931e80,8));
        auVar127 = packssdw(auVar127,auVar121);
        auVar11._8_4_ = 0xffffffff;
        auVar11._0_8_ = 0xffffffffffffffff;
        auVar11._12_4_ = 0xffffffff;
        auVar127 = packssdw(auVar127 ^ auVar11,auVar127 ^ auVar11);
        auVar127 = packsswb(auVar127,auVar127);
        if ((auVar127[6] & 1) != 0) {
          auStack_fc5[lVar48] = 10;
        }
        auVar118 = pshufhw(auVar121,auVar121,0x84);
        auVar12._8_4_ = 0xffffffff;
        auVar12._0_8_ = 0xffffffffffffffff;
        auVar12._12_4_ = 0xffffffff;
        auVar118 = packssdw(auVar118 ^ auVar12,auVar118 ^ auVar12);
        auVar118 = packsswb(auVar118,auVar118);
        if ((auVar118[7] & 1) != 0) {
          auStack_f8d[lVar48] = 10;
        }
        auVar122._0_8_ = -(ulonglong)(lVar49 < SUB168(auVar93 ^ _DAT_149931e80,0));
        auVar122._8_8_ = -(ulonglong)(lVar65 < SUB168(auVar93 ^ _DAT_149931e80,8));
        auVar127 = pshuflw(auVar127,auVar122,0xe8);
        auVar13._8_4_ = 0xffffffff;
        auVar13._0_8_ = 0xffffffffffffffff;
        auVar13._12_4_ = 0xffffffff;
        auVar127 = packssdw(auVar127 ^ auVar13,auVar127 ^ auVar13);
        auVar127 = packsswb(auVar127,auVar127);
        if ((auVar127[8] & 1) != 0) {
          auStack_f55[lVar48] = 10;
        }
        auVar118 = packssdw(auVar122,auVar122);
        auVar14._8_4_ = 0xffffffff;
        auVar14._0_8_ = 0xffffffffffffffff;
        auVar14._12_4_ = 0xffffffff;
        auVar118 = packssdw(auVar118 ^ auVar14,auVar118 ^ auVar14);
        auVar118 = packsswb(auVar118,auVar118);
        if ((auVar118[9] & 1) != 0) {
          auStack_f1d[lVar48] = 10;
        }
        auVar123._0_8_ = -(ulonglong)(lVar49 < SUB168(auVar89 ^ _DAT_149931e80,0));
        auVar123._8_8_ = -(ulonglong)(lVar65 < SUB168(auVar89 ^ _DAT_149931e80,8));
        auVar127 = packssdw(auVar127,auVar123);
        auVar15._8_4_ = 0xffffffff;
        auVar15._0_8_ = 0xffffffffffffffff;
        auVar15._12_4_ = 0xffffffff;
        auVar127 = packssdw(auVar127 ^ auVar15,auVar127 ^ auVar15);
        auVar127 = packsswb(auVar127,auVar127);
        if ((auVar127[10] & 1) != 0) {
          auStack_ee5[lVar48] = 10;
        }
        auVar118 = pshufhw(auVar123,auVar123,0x84);
        auVar16._8_4_ = 0xffffffff;
        auVar16._0_8_ = 0xffffffffffffffff;
        auVar16._12_4_ = 0xffffffff;
        auVar118 = packssdw(auVar118 ^ auVar16,auVar118 ^ auVar16);
        auVar118 = packsswb(auVar118,auVar118);
        if ((auVar118[0xb] & 1) != 0) {
          auStack_ead[lVar48] = 10;
        }
        auVar124._0_8_ = -(ulonglong)(lVar49 < SUB168(auVar85 ^ _DAT_149931e80,0));
        auVar124._8_8_ = -(ulonglong)(lVar65 < SUB168(auVar85 ^ _DAT_149931e80,8));
        auVar127 = pshuflw(auVar127,auVar124,0xe8);
        auVar17._8_4_ = 0xffffffff;
        auVar17._0_8_ = 0xffffffffffffffff;
        auVar17._12_4_ = 0xffffffff;
        auVar127 = packssdw(auVar127 ^ auVar17,auVar127 ^ auVar17);
        unaff_XMM14 = packsswb(auVar127,auVar127);
        if ((unaff_XMM14[0xc] & 1) != 0) {
          auStack_e75[lVar48] = 10;
        }
        auVar127 = packssdw(auVar124,auVar124);
        auVar18._8_4_ = 0xffffffff;
        auVar18._0_8_ = 0xffffffffffffffff;
        auVar18._12_4_ = 0xffffffff;
        auVar127 = packssdw(auVar127 ^ auVar18,auVar127 ^ auVar18);
        auVar127 = packsswb(auVar127,auVar127);
        if ((auVar127[0xd] & 1) != 0) {
          auStack_e3d[lVar48] = 10;
        }
        auVar125._0_8_ = -(ulonglong)(lVar49 < SUB168(auVar83 ^ _DAT_149931e80,0));
        auVar125._8_8_ = -(ulonglong)(lVar65 < SUB168(auVar83 ^ _DAT_149931e80,8));
        auVar116 = packssdw(auVar116,auVar125);
        auVar19._8_4_ = 0xffffffff;
        auVar19._0_8_ = 0xffffffffffffffff;
        auVar19._12_4_ = 0xffffffff;
        auVar116 = packssdw(auVar116 ^ auVar19,auVar116 ^ auVar19);
        auVar116 = packsswb(auVar116,auVar116);
        if ((auVar116[0xe] & 1) != 0) {
          auStack_e05[lVar48] = 10;
        }
        auVar116 = pshufhw(auVar116,auVar125,0x84);
        auVar20._8_4_ = 0xffffffff;
        auVar20._0_8_ = 0xffffffffffffffff;
        auVar20._12_4_ = 0xffffffff;
        auVar116 = packssdw(auVar116 ^ auVar20,auVar116 ^ auVar20);
        auVar116 = packsswb(auVar116,auVar116);
        if ((auVar116[0xf] & 1) != 0) {
          auStack_dcd[lVar48] = 10;
        }
        lVar49 = auVar105._8_8_;
        lVar65 = auVar113._0_8_;
        auVar105._0_8_ = auVar105._0_8_ + lVar65;
        lVar114 = auVar113._8_8_;
        auVar105._8_8_ = lVar49 + lVar114;
        lVar49 = auVar99._8_8_;
        auVar99._0_8_ = auVar99._0_8_ + lVar65;
        auVar99._8_8_ = lVar49 + lVar114;
        lVar49 = auVar96._8_8_;
        auVar96._0_8_ = auVar96._0_8_ + lVar65;
        auVar96._8_8_ = lVar49 + lVar114;
        lVar49 = auVar95._8_8_;
        auVar95._0_8_ = auVar95._0_8_ + lVar65;
        auVar95._8_8_ = lVar49 + lVar114;
        lVar49 = auVar93._8_8_;
        auVar93._0_8_ = auVar93._0_8_ + lVar65;
        auVar93._8_8_ = lVar49 + lVar114;
        lVar49 = auVar89._8_8_;
        auVar89._0_8_ = auVar89._0_8_ + lVar65;
        auVar89._8_8_ = lVar49 + lVar114;
        lVar49 = auVar85._8_8_;
        auVar85._0_8_ = auVar85._0_8_ + lVar65;
        auVar85._8_8_ = lVar49 + lVar114;
        lVar49 = auVar83._8_8_;
        auVar83._0_8_ = auVar83._0_8_ + lVar65;
        auVar83._8_8_ = lVar49 + lVar114;
        lVar48 = lVar48 + 0x380;
      } while ((ulonglong)(uVar37 + 0xf >> 4) * 0x380 - lVar48 != 0);
      local_118 = (undefined1  [16])0x0;
      _local_128 = (undefined1  [16])0x0;
      lVar48 = 0;
      do {
        uVar42 = FUN_14472bf7a(param_1,puVar79,
                               *(undefined8 *)
                                ((longlong)&PTR_u_Shadow_Denoiser_DenoiserOutput0_14a2f9480 + lVar48
                                ),0);
        *(undefined8 *)(local_128 + lVar48) = uVar42;
        lVar48 = lVar48 + 8;
        puVar79 = puVar79 + 7;
      } while (lVar39 * 8 != lVar48);
    }
    param_9[2] = local_118._0_8_;
    param_9[3] = local_118._8_8_;
    *param_9 = local_128._0_8_;
    param_9[1] = stack0xfffffffffffffee0;
    if (0 < (int)local_1290[1]) {
      local_1228 = (longlong *)(param_1 + 0x70);
      local_1230 = param_1 + 0x98;
      lVar39 = 0x5c;
      puVar60 = (ulonglong *)0x13818;
      puVar51 = (ulonglong *)0x0;
      puVar73 = (ulonglong *)0x0;
      puVar53 = (ulonglong *)0x0;
      do {
        plVar54 = local_1228;
        puVar64 = local_408;
        if (local_408 == (undefined1 *)0x0) {
          puVar64 = local_c48;
        }
        puVar59 = local_c68;
        if (local_c68 == (undefined1 *)0x0) {
          puVar59 = local_1028;
        }
        local_12a0 = (ulonglong *)*local_1290;
        local_1298 = *(ulonglong **)(param_6 + 0x1a);
        puVar67 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar79 = puVar67 + 0x5c;
        local_12c8 = puVar73;
        local_12b8 = puVar53;
        if (*(undefined8 **)(param_1 + 0x78) < puVar79) {
          FUN_140023dd8(local_1228,0x2f0);
          puVar67 = (undefined8 *)(*plVar54 + 0xfU & 0xfffffffffffffff0);
          puVar79 = puVar67 + 0x5c;
        }
        puVar73 = local_12c8;
        *(undefined8 **)(local_12c0 + 0x70) = puVar79;
        *puVar67 = &PTR_FUN_14a2f8608;
        puVar67[4] = 0;
        puVar67[5] = 0x3f80000000000000;
        puVar67[2] = 0;
        puVar67[3] = 0x3f80000000000000;
        puVar67[8] = 0;
        puVar67[9] = 0x3f80000000000000;
        puVar67[6] = 0;
        puVar67[7] = 0x3f80000000000000;
        puVar67[0xe] = 0;
        puVar67[0xf] = 0x3f80000000000000;
        puVar67[0x10] = 0;
        puVar67[0x11] = 0x3f80000000000000;
        puVar67[0x12] = 0;
        puVar67[0x13] = 0x3f80000000000000;
        puVar67[0x16] = 0;
        puVar67[0x17] = 0x3f80000000000000;
        puVar67[0x24] = 0;
        puVar67[0x25] = 0;
        puVar67[0x26] = 0;
        puVar67[0x27] = 0;
        puVar67[0x28] = 0;
        puVar67[0x29] = 0;
        puVar67[0x2a] = 0;
        puVar67[0x2b] = 0;
        puVar67[0x2c] = 0;
        puVar67[0x2d] = 0;
        puVar67[0x2e] = 0;
        puVar67[0x2f] = 0;
        puVar67[0x30] = 0;
        *(undefined1 *)(puVar67 + 0x31) = 1;
        puVar67[0x36] = 0;
        puVar67[0x34] = 0;
        puVar67[0x35] = 0;
        puVar67[0x32] = 0;
        puVar67[0x33] = 0;
        *(undefined1 *)(puVar67 + 0x37) = 1;
        puVar67[0x3c] = 0;
        puVar67[0x3d] = 0x3f80000000000000;
        puVar67[0x3a] = 0;
        puVar67[0x3b] = 0x3f80000000000000;
        puVar67[0x40] = 0;
        puVar67[0x41] = 0x3f80000000000000;
        puVar67[0x3e] = 0;
        puVar67[0x3f] = 0x3f80000000000000;
        puVar67[0x44] = 0;
        puVar67[0x45] = 0x3f80000000000000;
        puVar67[0x42] = 0;
        puVar67[0x43] = 0x3f80000000000000;
        puVar67[0x48] = 0;
        puVar67[0x49] = 0x3f80000000000000;
        puVar67[0x46] = 0;
        puVar67[0x47] = 0x3f80000000000000;
        puVar67[0x4a] = 0;
        puVar67[0x4b] = 0x3f80000000000000;
        puVar67[0x4e] = 0;
        puVar67[0x4f] = 0;
        puVar67[0x50] = 0;
        puVar67[0x51] = 0;
        puVar67[0x52] = 0;
        puVar67[0x53] = 0;
        puVar67[0x54] = 0;
        puVar67[0x55] = 0;
        puVar67[0x56] = 0;
        puVar67[0x57] = 0;
        puVar67[0x58] = 0;
        puVar67[0x59] = 0;
        puVar67[0x5a] = 0;
        iVar69 = *(int *)(local_12c0 + 0xa0);
        *(uint *)(local_12c0 + 0xa0) = iVar69 + 1U;
        local_1280 = puVar60;
        if (*(uint *)(local_12c0 + 0xa4) < iVar69 + 1U) {
          FUN_1448cfae8(local_1230,iVar69);
        }
        param_1 = local_12c0;
        local_1270 = puVar67 + 2;
        *(undefined8 **)(*(longlong *)(local_12c0 + 0x98) + (longlong)iVar69 * 8) = puVar67;
        local_12a8 = puVar51;
        memcpy(puVar67 + 0xe,puVar64 + (longlong)puVar51,0x158);
        memcpy(puVar67 + 0x3a,puVar59 + (longlong)puVar73,0xa0);
        puVar67[0x4e] = local_1048;
        puVar67[0x4f] = uStack_1040;
        puVar67[0x50] = local_1038._0_8_;
        puVar67[0x51] = local_1038._8_8_;
        FUN_143026839(local_128,param_1,param_9);
        puVar60 = local_1280;
        puVar51 = local_12a8;
        puVar67[0x58] = local_118._0_8_;
        puVar67[0x59] = local_118._8_8_;
        puVar67[0x56] = local_128._0_8_;
        puVar67[0x57] = stack0xfffffffffffffee0;
        local_128[8] = 0;
        local_128._0_4_ = *param_6;
        uStack_11c = param_6[1];
        local_128._4_4_ = 4;
        local_118[0] = 1;
        FUN_14302699a(local_1068,*(undefined8 *)((longlong)local_12a0 + (longlong)local_1280),
                      local_128);
        iVar46 = *(int *)((longlong)local_1298 + lVar39) -
                 *(int *)((longlong)local_1298 + lVar39 + -8);
        iVar69 = iVar46 + 7;
        local_11b4 = iVar46 + 0xe;
        if (-1 < iVar69) {
          local_11b4 = iVar69;
        }
        local_11b4 = local_11b4 >> 3;
        iVar46 = *(int *)((longlong)local_1298 + lVar39 + -4) -
                 *(int *)((longlong)local_1298 + lVar39 + -0xc);
        iVar69 = iVar46 + 7;
        local_11b8 = iVar46 + 0xe;
        if (-1 < iVar69) {
          local_11b8 = iVar69;
        }
        local_11b8 = local_11b8 >> 3;
        local_11b0 = 1;
        local_12d8 = (ulonglong *)&local_11b8;
        FUN_143026a2b(param_1,local_1168,local_1068,local_1270);
        puVar53 = (ulonglong *)((longlong)local_12b8 + 1);
        lVar39 = lVar39 + 0x60;
        puVar60 = puVar60 + 0x2782;
        puVar73 = local_12c8 + 0x14;
        puVar51 = puVar51 + 0x2c;
      } while ((longlong)puVar53 < (longlong)(int)local_1290[1]);
    }
  }
  else {
    param_9[2] = local_1038._0_8_;
    param_9[3] = local_1038._8_8_;
    *param_9 = local_1048;
    param_9[1] = uStack_1040;
  }
  if (local_c68 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_408 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_12f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430219d2 FUN_1430219d2 body=719 status=ok
// SIG undefined FUN_1430219d2(void)

undefined8 *
FUN_1430219d2(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 auStack_478 [32];
  undefined8 *local_458;
  undefined1 **local_450;
  longlong *local_448;
  longlong *local_440;
  undefined8 *local_438;
  undefined1 local_425;
  undefined4 local_424;
  undefined8 local_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined1 *local_3c0;
  undefined4 local_3b8;
  int local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined1 local_3a8;
  int local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined1 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined1 *local_358;
  undefined4 local_350;
  longlong local_348 [4];
  longlong local_328 [4];
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [576];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_478;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_420 = param_2;
  FUN_1472e3b02(*param_3);
  local_88 = 0;
  uStack_80 = 0;
  local_98 = *param_6;
  local_90 = param_6[2];
  iVar5 = 0x38;
  if (*(int *)(DAT_14ca4ba20 + 4) < 0x38) {
    iVar5 = *(int *)(DAT_14ca4ba20 + 4);
  }
  iVar9 = 1;
  if (1 < iVar5) {
    iVar9 = iVar5;
  }
  local_424 = *(undefined4 *)(DAT_14ca4ba38 + 4);
  local_425 = *(int *)(DAT_14ca4ba50 + 4) != 0;
  uVar2 = *(undefined4 *)(DAT_14ca4ba68 + 4);
  uVar1 = *(undefined4 *)(DAT_14ca4ba80 + 4);
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0x600000000;
  FUN_1472e3c8c(local_2e8);
  if (0 < (int)param_3[1]) {
    lVar4 = 8;
    lVar6 = 0x3100;
    lVar7 = 0;
    do {
      lVar3 = *param_3;
      puVar8 = local_a8;
      if (local_a8 == (undefined1 *)0x0) {
        puVar8 = local_2e8;
      }
      *(undefined8 *)(puVar8 + lVar4 + -8) = *(undefined8 *)(lVar3 + -8 + lVar6);
      *(undefined8 *)(puVar8 + lVar4) = *(undefined8 *)(lVar3 + lVar6);
      lVar7 = lVar7 + 1;
      lVar4 = lVar4 + 0x60;
      lVar6 = lVar6 + 0x13c10;
    } while (lVar7 < (int)param_3[1]);
  }
  local_328[0] = *(longlong *)(*param_3 + 0x3108) + 0x1628;
  local_438 = &local_308;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  local_358 = local_2e8;
  if (local_a8 != (undefined1 *)0x0) {
    local_358 = local_a8;
  }
  local_348[0] = param_4 + 0xf38;
  if (*(longlong *)(*param_3 + 0x3108) == 0) {
    local_328[0] = 0;
  }
  local_440 = local_328;
  local_448 = local_348;
  local_450 = &local_3c0;
  local_3c0 = &DAT_100000004;
  local_3b8 = 0x3f800000;
  local_3b0 = (undefined4)param_7;
  local_3ac = 0x3f800000;
  local_3a8 = 1;
  local_3a0 = local_424;
  local_39c = 0x41000000;
  local_398 = local_425;
  local_368 = 0;
  uStack_360 = 0;
  local_350 = (undefined4)local_a0;
  local_418 = (undefined4)*param_3;
  uStack_414 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_410 = (undefined4)param_3[1];
  uStack_40c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_458 = &local_98;
  local_3b4 = (int)param_7._4_4_;
  local_3a4 = iVar9;
  local_394 = uVar2;
  local_390 = uVar1;
  FUN_14301b42b(local_420,&local_418,param_5,&local_408);
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = local_308;
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1472e3c00(&local_408);
  if ((local_70 ^ (ulonglong)auStack_478) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143021ca2 FUN_143021ca2 body=42 status=ok
// SIG undefined FUN_143021ca2(void)

void FUN_143021ca2(longlong param_1)

{
  if (*(char *)(param_1 + 0x3058) == '\0') {
    FUN_1400daade(param_1 + 0x3038);
    *(undefined1 *)(param_1 + 0x3058) = 1;
  }
  return;
}



// FUNCTION 143021d40 FUN_143021d40 body=1324 status=ok
// SIG undefined FUN_143021d40(void)

void FUN_143021d40(longlong param_1,ulonglong *param_2)

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



// FUNCTION 14302226e FUN_14302226e body=1418 status=ok
// SIG undefined FUN_14302226e(void)

void FUN_14302226e(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
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
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar7 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar7 = uStack_160;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_158,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar7,(longlong)(int)local_158);
  }
  puVar12[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar12 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_150;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_108,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar7,(longlong)iStack_108 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar12 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_f4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined4 *)(param_1 + 0x200);
  iVar2 = *(int *)(param_1 + 0x1e4);
  lVar8 = *(longlong *)(param_1 + 0x1f8);
  iVar3 = *(int *)(param_1 + 0x1e0);
  lVar9 = *(longlong *)(param_1 + 0x1f0);
  iVar4 = *(int *)(param_1 + 0x1dc);
  lVar11 = *(longlong *)(param_1 + 0x1e8);
  iVar5 = *(int *)(param_1 + 0x1d8);
  local_180 = *(undefined8 *)(param_1 + 0x1b8);
  uVar6 = *(undefined8 *)(param_1 + 0x1c0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar5;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar3;
  *(float *)(puVar12 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
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
  local_a0 = 1;
  local_98 = 0;
  local_178 = *(undefined8 *)(param_1 + 0x1c8);
  local_170 = *(undefined8 *)(param_1 + 0x1d0);
  FUN_1431f82c2(param_2,uVar6,&local_178,&local_168);
  if (lVar11 == 0) {
    lVar11 = local_138;
  }
  if (lVar9 == 0) {
    lVar9 = lStack_130;
  }
  if (lVar8 == 0) {
    lVar8 = local_128;
  }
  local_138 = lVar11;
  lStack_130 = lVar9;
  local_128 = lVar8;
  lVar8 = FUN_140028f18(param_2,&local_168);
  if ((lVar8 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar8;
    *(undefined4 *)(puVar12 + 3) = uVar1;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar9 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar11 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar8,lVar11,1);
    }
  }
  FUN_145dace8c();
  local_188 = local_180;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca4bae8);
  uVar6 = DAT_14ca89240;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = uVar6;
  *(undefined4 *)(puVar12 + 4) = 0;
  uVar6 = DAT_14ca89258;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 6;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x38);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 6;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb5b0;
  puVar12[2] = uVar6;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
  *(undefined4 *)(puVar12 + 4) = 3;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 6;
  puVar12[5] = &DAT_100000001;
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430227fa FUN_1430227fa body=99 status=ok
// SIG undefined FUN_1430227fa(void)

void FUN_1430227fa(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14302285e FUN_14302285e body=1459 status=ok
// SIG undefined FUN_14302285e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14302285e(longlong param_1,int param_2,int param_3,double *param_4,longlong *param_5)

{
  uint *puVar1;
  double dVar2;
  byte bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  double *pdVar11;
  uint uVar12;
  double *pdVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  ulonglong uVar24;
  undefined1 unaff_XMM6 [16];
  ulonglong uVar26;
  undefined1 auVar25 [16];
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  double local_188;
  double dStack_180;
  undefined1 local_172;
  char local_171;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  ulonglong local_f0;
  double dVar3;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (*(int *)(*(longlong *)(param_1 + 0x60) + 4 + (longlong)param_3 * 8) == 0) goto LAB_143022d22;
  if (param_2 == -1) {
LAB_143022946:
    lVar8 = *param_5;
    if (*(char *)(param_5[2] + 3) == '\x01') {
      lVar16 = lVar8 + 0x2020;
      if (*(longlong *)(lVar8 + 0x2120) != 0) {
        lVar16 = *(longlong *)(lVar8 + 0x2120);
      }
      local_158 = param_4[4];
      dStack_150 = param_4[5];
      local_148 = param_4[6];
      local_170 = *param_4;
      local_168 = param_4[1];
      local_160 = param_4[2];
      cVar7 = FUN_1472e4db2(&local_170,&local_158,lVar16);
      if (cVar7 == '\0') goto LAB_143022d22;
    }
    else if (0 < *(int *)(lVar8 + 0x2130)) {
      local_188 = *param_4;
      dStack_180 = *param_4;
      dVar2 = param_4[1];
      dVar3 = param_4[1];
      dVar18 = param_4[2];
      dVar20 = param_4[2];
      auVar23 = *(undefined1 (*) [16])(param_4 + 4) & _DAT_149931180;
      auVar25._0_8_ = auVar23._0_8_;
      auVar25._8_4_ = auVar23._0_4_;
      auVar25._12_4_ = auVar23._4_4_;
      auVar23._0_8_ = auVar23._8_8_;
      dVar21 = param_4[6];
      dVar22 = param_4[6];
      pdVar11 = (double *)(lVar8 + 0x2020);
      if (*(double **)(lVar8 + 0x2120) != (double *)0x0) {
        pdVar11 = *(double **)(lVar8 + 0x2120);
      }
      iVar9 = 0;
      pdVar13 = param_4;
      do {
        uVar24 = DAT_149931180;
        uVar26 = DAT_149931180._8_8_;
        lVar16 = -(ulonglong)
                  ((double)((ulonglong)(pdVar11[9] * dVar22) & uVar26) +
                   (double)((ulonglong)pdVar11[5] & uVar26) * auVar23._8_8_ +
                   (double)((ulonglong)pdVar11[1] & uVar26) * auVar25._8_8_ <
                  (dVar20 * pdVar11[9] + dVar3 * pdVar11[5] + dStack_180 * pdVar11[1]) -
                  pdVar11[0xd]);
        lVar17 = -(ulonglong)
                  ((double)((ulonglong)(pdVar11[0xb] * dVar22) & uVar26) +
                   (double)((ulonglong)pdVar11[7] & uVar26) * auVar23._8_8_ +
                   (double)((ulonglong)pdVar11[3] & uVar26) * auVar25._8_8_ <
                  (dVar20 * pdVar11[0xb] + dVar3 * pdVar11[7] + dStack_180 * pdVar11[3]) -
                  pdVar11[0xf]);
        auVar5._8_4_ = (int)lVar16;
        auVar5._0_8_ = -(ulonglong)
                        ((double)((ulonglong)(pdVar11[8] * dVar21) & uVar24) +
                         (double)((ulonglong)pdVar11[4] & uVar24) * auVar23._0_8_ +
                         (double)((ulonglong)*pdVar11 & uVar24) * auVar25._0_8_ <
                        (dVar18 * pdVar11[8] + dVar2 * pdVar11[4] + local_188 * *pdVar11) -
                        pdVar11[0xc]);
        auVar5._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
        param_2 = movmskpd(param_2,auVar5);
        auVar6._8_4_ = (int)lVar17;
        auVar6._0_8_ = -(ulonglong)
                        ((double)((ulonglong)(pdVar11[10] * dVar21) & uVar24) +
                         (double)((ulonglong)pdVar11[6] & uVar24) * auVar23._0_8_ +
                         (double)((ulonglong)pdVar11[2] & uVar24) * auVar25._0_8_ <
                        (dVar18 * pdVar11[10] + dVar2 * pdVar11[6] + local_188 * pdVar11[2]) -
                        pdVar11[0xe]);
        auVar6._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
        uVar12 = movmskpd((int)pdVar13,auVar6);
        if ((uVar12 & 0x3fffffff) != 0 || param_2 != 0) goto LAB_143022d22;
        pdVar11 = pdVar11 + 0x10;
        iVar9 = iVar9 + 4;
        pdVar13 = (double *)0x0;
        unaff_XMM6 = _DAT_149931180;
      } while (iVar9 < *(int *)(lVar8 + 0x2130));
    }
    uVar12 = param_3 * 2;
    lVar8 = *(longlong *)(param_5[1] + 0x10);
    if (lVar8 == 0) {
      lVar8 = param_5[1];
    }
    uVar14 = param_3 * 2 + 0x1f;
    if (-1 < (int)uVar12) {
      uVar14 = uVar12;
    }
    puVar1 = (uint *)(lVar8 + (longlong)((int)uVar14 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar12 & 0x1f);
    local_158 = param_4[4];
    dStack_150 = param_4[5];
    local_148 = param_4[6];
    local_170 = *param_4;
    local_168 = param_4[1];
    local_160 = param_4[2];
    FUN_144b22954(*param_5 + 8000,&local_172);
    uVar12 = uVar12 | 1;
    uVar14 = 1 << ((byte)uVar12 & 0x1f);
    lVar8 = *(longlong *)(param_5[1] + 0x10);
    if (lVar8 == 0) {
      lVar8 = param_5[1];
    }
    uVar10 = param_3 * 2 + 0x20;
    if (-1 < (int)uVar12) {
      uVar10 = uVar12;
    }
    lVar16 = (longlong)((int)uVar10 >> 5);
    if (local_171 == '\x01') {
      uVar14 = uVar14 | *(uint *)(lVar8 + lVar16 * 4);
    }
    else {
      uVar14 = ~uVar14 & *(uint *)(lVar8 + lVar16 * 4);
    }
    *(uint *)(lVar8 + lVar16 * 4) = uVar14;
  }
  else {
    uVar12 = param_2 * 2 + 1;
    lVar8 = *(longlong *)(param_5[1] + 0x10);
    if (lVar8 == 0) {
      lVar8 = param_5[1];
    }
    uVar14 = param_2 * 2 + 0x20;
    if (-1 < (int)uVar12) {
      uVar14 = uVar12;
    }
    if ((*(uint *)(lVar8 + (longlong)((int)uVar14 >> 5) * 4) >> (uVar12 & 0x1f) & 1) != 0)
    goto LAB_143022946;
    iVar9 = param_3 * 2;
    iVar15 = param_3 * 2 + 0x1f;
    if (-1 < iVar9) {
      iVar15 = iVar9;
    }
    puVar1 = (uint *)(lVar8 + (longlong)(iVar15 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
    iVar9 = param_3 * 2 + 1;
    lVar8 = *(longlong *)(param_5[1] + 0x10);
    if (lVar8 == 0) {
      lVar8 = param_5[1];
    }
    iVar15 = param_3 * 2 + 0x20;
    if (-1 < iVar9) {
      iVar15 = iVar9;
    }
    bVar4 = (byte)iVar9 & 0x1f;
    puVar1 = (uint *)(lVar8 + (longlong)(iVar15 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  iVar9 = *(int *)(*(longlong *)(param_1 + 0x60) + (longlong)param_3 * 8);
  if (iVar9 != -1) {
    iVar15 = 0;
    auVar25 = pmovsxbd(unaff_XMM6,0x8040201);
    do {
      auVar19._4_4_ = iVar15;
      auVar19._0_4_ = iVar15;
      auVar19._8_4_ = iVar15;
      auVar19._12_4_ = iVar15;
      auVar19 = auVar19 & auVar25;
      dVar3 = param_4[9];
      dVar2 = param_4[9];
      dVar21 = (double)(float)-(uint)(auVar19._0_4_ == auVar25._0_4_);
      dVar22 = (double)(float)-(uint)(auVar19._4_4_ == auVar25._4_4_);
      dVar18 = (double)(float)-(uint)(auVar19._8_4_ == auVar25._8_4_);
      dVar20 = (double)(float)-(uint)(auVar19._12_4_ == auVar25._12_4_);
      local_158 = (double)(~(ulonglong)dVar21 & (ulonglong)-dVar3 |
                          (ulonglong)dVar3 & (ulonglong)dVar21) + *param_4;
      dStack_150 = (double)(~(ulonglong)dVar22 & (ulonglong)-dVar2 |
                           (ulonglong)dVar2 & (ulonglong)dVar22) + param_4[1];
      local_148 = ((double)(~(ulonglong)dVar18 & (ulonglong)-dVar3 |
                           (ulonglong)dVar3 & (ulonglong)dVar18) + param_4[2]) * 1.0;
      dStack_140 = ((double)(~(ulonglong)dVar20 & (ulonglong)-dVar2 |
                            (ulonglong)dVar2 & (ulonglong)dVar20) + param_4[3]) * 0.0;
      local_138 = param_4[8];
      local_128 = local_138 * 1.0;
      dStack_120 = local_138 * 0.0;
      local_118 = local_138 * 0.5 * 1.0625;
      local_110 = local_138 - local_118;
      local_198 = param_5;
      dStack_130 = local_138;
      FUN_14302285e(param_1,param_3,iVar9 + iVar15,&local_158);
      iVar15 = iVar15 + 1;
    } while (iVar15 != 8);
  }
LAB_143022d22:
  if ((local_f0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143022e60 FUN_143022e60 body=96 status=ok
// SIG undefined FUN_143022e60(void)

undefined8 FUN_143022e60(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_143022f56();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca4be08,1);
  return uVar3;
}



// FUNCTION 143022ec0 FUN_143022ec0 body=138 status=ok
// SIG undefined FUN_143022ec0(void)

void * FUN_143022ec0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 143022f56 FUN_143022f56 body=445 status=ok
// SIG undefined FUN_143022f56(void)

void FUN_143022f56(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4be88) {
    FUN_144b3d300(&DAT_14ca4be88);
    if (DAT_14ca4be88 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_143023120;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x170;
      local_88 = 0x39a;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca4be08,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143023114);
      _Init_thread_footer(&DAT_14ca4be88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143023120 FUN_143023120 body=136 status=ok
// SIG undefined FUN_143023120(void)

code * FUN_143023120(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CompressedMetadataOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1600000039c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1430231a8;
}



// FUNCTION 1430231a8 FUN_1430231a8 body=138 status=ok
// SIG undefined FUN_1430231a8(void)

undefined1 * FUN_1430231a8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_143023232();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSSDCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x39b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca4be90;
  return &LAB_1430233f0;
}



// FUNCTION 143023232 FUN_143023232 body=445 status=ok
// SIG undefined FUN_143023232(void)

void FUN_143023232(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4bf10) {
    FUN_144b3d300(&DAT_14ca4bf10);
    if (DAT_14ca4bf10 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_143023400;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FSSDCommonParameters";
      local_68 = 0;
      local_80 = 0x160;
      local_88 = 0x31c;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca4be90,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430233f3);
      _Init_thread_footer(&DAT_14ca4bf10);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143023400 FUN_143023400 body=136 status=ok
// SIG undefined FUN_143023400(void)

code * FUN_143023400(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FrameIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1500000032e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_143023488;
}



// FUNCTION 143023488 FUN_143023488 body=142 status=ok
// SIG undefined FUN_143023488(void)

code * FUN_143023488(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ViewUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1400000032c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_143023516;
}



// FUNCTION 143023516 FUN_143023516 body=136 status=ok
// SIG undefined FUN_143023516(void)

code * FUN_143023516(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileClassificationTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1380000032b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14302359e;
}



// FUNCTION 14302359e FUN_14302359e body=136 status=ok
// SIG undefined FUN_14302359e(void)

code * FUN_14302359e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EyeAdaptationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1300000032a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_143023626;
}



// FUNCTION 143023626 FUN_143023626 body=136 status=ok
// SIG undefined FUN_143023626(void)

code * FUN_143023626(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CompressedMetadata";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12000000328;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1430236ae;
}



// FUNCTION 1430236ae FUN_1430236ae body=142 status=ok
// SIG undefined FUN_1430236ae(void)

code * FUN_1430236ae(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a2c9be();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Substrate";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSubstrateGlobalUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x11000000326;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14302373c;
}



// FUNCTION 14302373c FUN_14302373c body=142 status=ok
// SIG undefined FUN_14302373c(void)

code * FUN_14302373c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14127a7f2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xb000000325;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1430237ca;
}



// FUNCTION 1430237ca FUN_1430237ca body=136 status=ok
// SIG undefined FUN_1430237ca(void)

code * FUN_1430237ca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BufferUVBilinearCorrection";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000323;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_143023852;
}



// FUNCTION 143023852 FUN_143023852 body=136 status=ok
// SIG undefined FUN_143023852(void)

code * FUN_143023852(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenToView";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000322;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1430238da;
}



// FUNCTION 1430238da FUN_1430238da body=136 status=ok
// SIG undefined FUN_1430238da(void)

code * FUN_1430238da(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BufferUVToOutputPixelPosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000321;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_143023962;
}



// FUNCTION 143023962 FUN_143023962 body=136 status=ok
// SIG undefined FUN_143023962(void)

code * FUN_143023962(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ThreadIdToBufferUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000320;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1430239ea;
}



// FUNCTION 1430239ea FUN_1430239ea body=136 status=ok
// SIG undefined FUN_1430239ea(void)

code * FUN_1430239ea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewportMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000031f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_143023a72;
}



// FUNCTION 143023a72 FUN_143023a72 body=136 status=ok
// SIG undefined FUN_143023a72(void)

code * FUN_143023a72(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewportMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000031e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_143023afa;
}



// FUNCTION 143023afa FUN_143023afa body=136 status=ok
// SIG undefined FUN_143023afa(void)

undefined1 * FUN_143023afa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145dfda72();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"PublicCommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"Denoiser::FCommonShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x31d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_143023b82;
}



// FUNCTION 143023b85 FUN_143023b85 body=130 status=ok
// SIG undefined FUN_143023b85(void)

undefined8 FUN_143023b85(uint param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined7 uVar3;
  undefined8 uVar2;
  longlong lVar4;
  
  switch(param_1) {
  case 0:
  case 3:
  case 4:
    lVar4 = (param_2 & 0xffff) * 0x3c;
    uVar1 = CONCAT71((int7)((ulonglong)lVar4 >> 8),
                     *(undefined1 *)((longlong)&DAT_14ca814c8 + lVar4 + 2)) & 0xffffffffffffff40;
    return CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 >> 6);
  case 1:
    break;
  case 2:
    lVar4 = (param_2 & 0xffff) * 0x3c;
    if ((*(byte *)((longlong)&DAT_14ca814c8 + lVar4 + 2) & 0x40) != 0) {
      uVar1 = CONCAT71((int7)((ulonglong)lVar4 >> 8),
                       *(undefined1 *)((longlong)&DAT_14ca814d0 + lVar4 + 7)) & 0xffffffffffffff02;
      return CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 >> 1);
    }
    break;
  default:
    if ((param_1 & 0xfffffffd) == 5) {
      uVar2 = FUN_144880847(param_2 & 0xffffffff,0);
      return uVar2;
    }
    break;
  case 6:
    lVar4 = (param_2 & 0xffff) * 0x3c;
    uVar3 = (undefined7)((param_2 & 0xffff) >> 8);
    if ((*(byte *)((longlong)&DAT_14ca814d0 + lVar4) & 0x80) != 0) {
      return CONCAT71(uVar3,1);
    }
    uVar1 = CONCAT71(uVar3,(&DAT_14ca814cc)[lVar4]) & 0xffffffffffffff20;
    return CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 >> 5);
  }
  return 0;
}



// FUNCTION 143023c08 FUN_143023c08 body=44 status=ok
// SIG undefined FUN_143023c08(void)

void FUN_143023c08(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 143023c74 FUN_143023c74 body=96 status=ok
// SIG undefined FUN_143023c74(void)

undefined8 FUN_143023c74(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_143023d6a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca4c060,1);
  return uVar3;
}



// FUNCTION 143023cd4 FUN_143023cd4 body=138 status=ok
// SIG undefined FUN_143023cd4(void)

void * FUN_143023cd4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 143023d6a FUN_143023d6a body=445 status=ok
// SIG undefined FUN_143023d6a(void)

void FUN_143023d6a(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4c0e0) {
    FUN_144b3d300(&DAT_14ca4c0e0);
    if (DAT_14ca4c0e0 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_143023f34;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x250;
      local_88 = 0x3d4;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca4c060,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143023f28);
      _Init_thread_footer(&DAT_14ca4c0e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143023f34 FUN_143023f34 body=136 status=ok
// SIG undefined FUN_143023f34(void)

code * FUN_143023f34(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DebugOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x240000003da;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_143023fbc;
}



// FUNCTION 143023fbc FUN_143023fbc body=144 status=ok
// SIG undefined FUN_143023fbc(void)

code * FUN_143023fbc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14302404c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SignalOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSSDSignalUAVs";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x220000003d9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca4c0e8;
  return FUN_14302420a;
}



// FUNCTION 14302404c FUN_14302404c body=445 status=ok
// SIG undefined FUN_14302404c(void)

void FUN_14302404c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4c168) {
    FUN_144b3d300(&DAT_14ca4c168);
    if (DAT_14ca4c168 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_1430242a4;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FSSDSignalUAVs";
      local_68 = 0;
      local_80 = 0x20;
      local_88 = 0x335;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca4c0e8,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143024298);
      _Init_thread_footer(&DAT_14ca4c168);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14302420a FUN_14302420a body=142 status=ok
// SIG undefined FUN_14302420a(void)

code * FUN_14302420a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145ef99ec();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SignalInput";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSSDSignalTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x200000003d8;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14302432a;
}



// FUNCTION 1430242a4 FUN_1430242a4 body=130 status=ok
// SIG undefined FUN_1430242a4(void)

undefined1 * FUN_1430242a4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UAVs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x336;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_143024326;
}



// FUNCTION 14302432a FUN_14302432a body=144 status=ok
// SIG undefined FUN_14302432a(void)

code * FUN_14302432a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1430243ba();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ConvolutionMetaData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSSDConvolutionMetaData";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x160000003d6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca4c170;
  return FUN_143024578;
}



// FUNCTION 1430243ba FUN_1430243ba body=445 status=ok
// SIG undefined FUN_1430243ba(void)

void FUN_1430243ba(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4c1f0) {
    FUN_144b3d300(&DAT_14ca4c1f0);
    if (DAT_14ca4c1f0 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_14302460e;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FSSDConvolutionMetaData";
      local_68 = 0;
      local_80 = 0xa0;
      local_88 = 0x33a;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca4c170,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143024602);
      _Init_thread_footer(&DAT_14ca4c1f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143024578 FUN_143024578 body=138 status=ok
// SIG undefined FUN_143024578(void)

undefined1 * FUN_143024578(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_143023232();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSSDCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3d5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca4be90;
  return &LAB_14302482c;
}



// FUNCTION 14302460e FUN_14302460e body=136 status=ok
// SIG undefined FUN_14302460e(void)

code * FUN_14302460e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightType";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000033e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 1;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_143024696;
}



// FUNCTION 143024696 FUN_143024696 body=136 status=ok
// SIG undefined FUN_143024696(void)

code * FUN_143024696(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HitDistanceToWorldBluringRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000033d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 1;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14302471e;
}



// FUNCTION 14302471e FUN_14302471e body=136 status=ok
// SIG undefined FUN_14302471e(void)

code * FUN_14302471e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightDirectionAndLength";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000033c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1430247a6;
}



// FUNCTION 1430247a6 FUN_1430247a6 body=130 status=ok
// SIG undefined FUN_1430247a6(void)

undefined1 * FUN_1430247a6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightPositionAndRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x33b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_143024828;
}



// FUNCTION 143024830 FUN_143024830 body=44 status=ok
// SIG undefined FUN_143024830(void)

void FUN_143024830(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 143024864 FUN_143024864 body=368 status=ok
// SIG undefined FUN_143024864(void)

undefined8 FUN_143024864(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = *(int *)(param_1 + 2);
  iVar6 = iVar1 + 7;
  if (-1 < iVar1) {
    iVar6 = iVar1;
  }
  uVar4 = iVar1 % 8;
  if (7 < uVar4) {
    return 0;
  }
  iVar3 = iVar1 >> 0x1f;
  iVar2 = iVar1 / 0x50 + iVar3;
  uVar7 = iVar2 - iVar3;
  uVar8 = (iVar2 - iVar3) + 3;
  if (-1 < (int)uVar7) {
    uVar8 = uVar7;
  }
  if ((uVar4 != 0) && (0 < (int)(uVar7 - (uVar8 & 0xfffffffc)))) {
    return 0;
  }
  iVar6 = (iVar6 >> 3) % 5;
  uVar8 = iVar1 / 0x28 & 0x80000001;
  if (uVar8 == 1 && iVar6 != 0) {
    return 0;
  }
  if (uVar8 == 1) {
    if (uVar4 != 2) {
      if (uVar4 == 3) goto switchD_143024938_caseD_3;
      if (uVar4 != 4) {
        return 0;
      }
    }
switchD_143024938_caseD_0:
    if (iVar6 == 2) {
      return 0;
    }
LAB_143024968:
    if ((uVar4 < 5) && ((0x19U >> (uVar4 & 0x1f) & 1) != 0)) {
switchD_143024938_caseD_3:
      if (uVar4 != 0 && iVar6 == 4) {
        return 0;
      }
    }
    else {
      if (iVar6 == 3) {
        return 0;
      }
      if (uVar4 != 0 && iVar6 == 4) {
        return 0;
      }
    }
    if (((iVar1 / 0x140 & 0x80000001U) != 1) && (uVar4 != 4 || iVar6 != 0)) {
      return 0;
    }
    uVar5 = FUN_143023b85(uVar4,*param_1);
    return uVar5;
  }
  switch(uVar4) {
  case 0:
  case 2:
  case 4:
    goto switchD_143024938_caseD_0;
  default:
    if (iVar6 == 1) {
      return 0;
    }
    if (uVar4 != 3 && iVar6 == 2) {
      return 0;
    }
    goto LAB_143024968;
  case 3:
    goto switchD_143024938_caseD_3;
  }
}



// FUNCTION 1430249d4 FUN_1430249d4 body=96 status=ok
// SIG undefined FUN_1430249d4(void)

undefined8 FUN_1430249d4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_143024aca();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca4c340,1);
  return uVar3;
}



// FUNCTION 143024a34 FUN_143024a34 body=138 status=ok
// SIG undefined FUN_143024a34(void)

void * FUN_143024a34(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 143024aca FUN_143024aca body=445 status=ok
// SIG undefined FUN_143024aca(void)

void FUN_143024aca(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4c3c0) {
    FUN_144b3d300(&DAT_14ca4c3c0);
    if (DAT_14ca4c3c0 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_143024c94;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x2d0;
      local_88 = 0x464;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca4c340,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143024c88);
      _Init_thread_footer(&DAT_14ca4c3c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143024c94 FUN_143024c94 body=136 status=ok
// SIG undefined FUN_143024c94(void)

code * FUN_143024c94(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DebugOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c000000474;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_143024d1c;
}



// FUNCTION 143024d1c FUN_143024d1c body=144 status=ok
// SIG undefined FUN_143024d1c(void)

code * FUN_143024d1c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14302404c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SignalOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSSDSignalUAVs";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2a000000472;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca4c0e8;
  return FUN_143024dac;
}



// FUNCTION 143024dac FUN_143024dac body=581 status=ok
// SIG undefined FUN_143024dac(void)

code * FUN_143024dac(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4c448) {
    FUN_144b3d300(&DAT_14ca4c448);
    if (DAT_14ca4c448 == -1) {
      uVar12 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar9 = FUN_14302508c;
      do {
        pcVar9 = (code *)(*pcVar9)(uVar12,&local_58);
        uVar12 = extraout_XMM0_Da;
      } while (pcVar9 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar11 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar11 = lVar11 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar4 = *(undefined8 *)(local_58 + lVar11);
          uVar5 = ((undefined8 *)(local_58 + lVar11))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar11);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar11);
          uVar8 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          *(undefined8 *)(local_58 + lVar10) = uVar4;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar5;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar11);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar11);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar11) = local_48;
          ((undefined8 *)(local_58 + lVar11))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FSSDSignalSRVs";
      local_68 = 0;
      local_80 = 0x20;
      local_88 = 0x331;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca4c3c8,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143025080);
      _Init_thread_footer(&DAT_14ca4c448);
    }
  }
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_140870184(param_2,iVar3);
  }
  lVar11 = *param_2;
  lVar10 = (longlong)iVar3 * 0x30;
  *(wchar_t **)(lVar11 + lVar10) = L"SignalInputUint";
  *(wchar_t **)(lVar11 + 8 + lVar10) = L"FSSDSignalSRVs";
  *(undefined8 *)(lVar11 + 0x10 + lVar10) = 0x28000000471;
  *(undefined2 *)(lVar11 + 0x18 + lVar10) = 0x14;
  *(undefined1 **)(lVar11 + 0x1c + lVar10) = &DAT_100000001;
  *(undefined4 *)(lVar11 + 0x24 + lVar10) = 0;
  *(undefined **)(lVar11 + 0x28 + lVar10) = &DAT_14ca4c3c8;
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return FUN_143024ff2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143024ff2 FUN_143024ff2 body=142 status=ok
// SIG undefined FUN_143024ff2(void)

code * FUN_143024ff2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145ef99ec();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SignalInput";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSSDSignalTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x26000000470;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_143025112;
}



// FUNCTION 14302508c FUN_14302508c body=130 status=ok
// SIG undefined FUN_14302508c(void)

undefined1 * FUN_14302508c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Textures";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x332;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14302510e;
}



// FUNCTION 143025112 FUN_143025112 body=144 status=ok
// SIG undefined FUN_143025112(void)

code * FUN_143025112(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1430243ba();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ConvolutionMetaData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSSDConvolutionMetaData";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000046e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca4c170;
  return FUN_1430251a2;
}



// FUNCTION 1430251a2 FUN_1430251a2 body=144 status=ok
// SIG undefined FUN_1430251a2(void)

code * FUN_1430251a2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_143023232();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSSDCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000046d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca4be90;
  return FUN_143025232;
}



// FUNCTION 143025232 FUN_143025232 body=136 status=ok
// SIG undefined FUN_143025232(void)

code * FUN_143025232(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HarmonicPeriode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000046b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1430252ba;
}



// FUNCTION 1430252ba FUN_1430252ba body=136 status=ok
// SIG undefined FUN_1430252ba(void)

code * FUN_1430252ba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"KernelSpreadFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4c0000046a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_143025342;
}



// FUNCTION 143025342 FUN_143025342 body=136 status=ok
// SIG undefined FUN_143025342(void)

code * FUN_143025342(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UpscaleFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000469;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1430253ca;
}



// FUNCTION 1430253ca FUN_1430253ca body=136 status=ok
// SIG undefined FUN_1430253ca(void)

code * FUN_1430253ca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PreviousCumulativeMaxSampleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4400000468;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_143025452;
}



// FUNCTION 143025452 FUN_143025452 body=136 status=ok
// SIG undefined FUN_143025452(void)

code * FUN_143025452(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxSampleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000467;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1430254da;
}



// FUNCTION 1430254da FUN_1430254da body=130 status=ok
// SIG undefined FUN_1430254da(void)

undefined1 * FUN_1430254da(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputBufferUVMinMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x465;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14302555c;
}



// FUNCTION 143025560 FUN_143025560 body=44 status=ok
// SIG undefined FUN_143025560(void)

void FUN_143025560(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1430255d8 FUN_1430255d8 body=96 status=ok
// SIG undefined FUN_1430255d8(void)

undefined8 FUN_1430255d8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1430256ce();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca4c598,1);
  return uVar3;
}



// FUNCTION 143025638 FUN_143025638 body=138 status=ok
// SIG undefined FUN_143025638(void)

void * FUN_143025638(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1430256ce FUN_1430256ce body=445 status=ok
// SIG undefined FUN_1430256ce(void)

void FUN_1430256ce(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4c618) {
    FUN_144b3d300(&DAT_14ca4c618);
    if (DAT_14ca4c618 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_143025898;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x350;
      local_88 = 0x499;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca4c598,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14302588c);
      _Init_thread_footer(&DAT_14ca4c618);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143025898 FUN_143025898 body=136 status=ok
// SIG undefined FUN_143025898(void)

code * FUN_143025898(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DebugOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x348000004af;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_143025920;
}



// FUNCTION 143025920 FUN_143025920 body=136 status=ok
// SIG undefined FUN_143025920(void)

code * FUN_143025920(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevCompressedMetadata";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x338000004ad;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1430259a8;
}



// FUNCTION 1430259a8 FUN_1430259a8 body=136 status=ok
// SIG undefined FUN_1430259a8(void)

code * FUN_1430259a8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevGBufferB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x330000004ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_143025a30;
}



// FUNCTION 143025a30 FUN_143025a30 body=136 status=ok
// SIG undefined FUN_143025a30(void)

code * FUN_143025a30(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevGBufferA";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x328000004ab;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_143025ab8;
}



// FUNCTION 143025ab8 FUN_143025ab8 body=136 status=ok
// SIG undefined FUN_143025ab8(void)

code * FUN_143025ab8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevDepthBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x320000004aa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_143025b40;
}



// FUNCTION 143025b40 FUN_143025b40 body=142 status=ok
// SIG undefined FUN_143025b40(void)

code * FUN_143025b40(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145ef99ec();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"PrevHistory";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSSDSignalTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x300000004a9;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_143025bce;
}



// FUNCTION 143025bce FUN_143025bce body=144 status=ok
// SIG undefined FUN_143025bce(void)

code * FUN_143025bce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14302404c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SignalHistoryOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSSDSignalUAVs";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2e0000004a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca4c0e8;
  return FUN_143025c5e;
}



// FUNCTION 143025c5e FUN_143025c5e body=142 status=ok
// SIG undefined FUN_143025c5e(void)

code * FUN_143025c5e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145ef99ec();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"HistoryRejectionSignal";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSSDSignalTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2c0000004a6;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_143025cec;
}



// FUNCTION 143025cec FUN_143025cec body=142 status=ok
// SIG undefined FUN_143025cec(void)

code * FUN_143025cec(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145ef99ec();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SignalInput";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSSDSignalTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2a0000004a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_143025d7a;
}



// FUNCTION 143025d7a FUN_143025d7a body=144 status=ok
// SIG undefined FUN_143025d7a(void)

code * FUN_143025d7a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1430243ba();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ConvolutionMetaData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSSDConvolutionMetaData";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000004a3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca4c170;
  return FUN_143025e0a;
}



// FUNCTION 143025e0a FUN_143025e0a body=144 status=ok
// SIG undefined FUN_143025e0a(void)

code * FUN_143025e0a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_143023232();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSSDCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000004a2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca4be90;
  return FUN_143025e9a;
}



// FUNCTION 143025e9a FUN_143025e9a body=136 status=ok
// SIG undefined FUN_143025e9a(void)

code * FUN_143025e9a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevSceneBufferUVToScreenPosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000004a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_143025f22;
}



// FUNCTION 143025f22 FUN_143025f22 body=136 status=ok
// SIG undefined FUN_143025f22(void)

code * FUN_143025f22(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HistoryBufferScissorUVMinMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000049f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_143025faa;
}



// FUNCTION 143025faa FUN_143025faa body=136 status=ok
// SIG undefined FUN_143025faa(void)

code * FUN_143025faa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HistoryBufferUVMinMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000049e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_143026032;
}



// FUNCTION 143026032 FUN_143026032 body=136 status=ok
// SIG undefined FUN_143026032(void)

code * FUN_143026032(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HistoryBufferSizeAndInvSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000049d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1430260ba;
}



// FUNCTION 1430260ba FUN_1430260ba body=136 status=ok
// SIG undefined FUN_1430260ba(void)

code * FUN_1430260ba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenPosToHistoryBufferUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000049c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_143026142;
}



// FUNCTION 143026142 FUN_143026142 body=136 status=ok
// SIG undefined FUN_143026142(void)

code * FUN_143026142(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HistoryPreExposureCorrection";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000049b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1430261ca;
}



// FUNCTION 1430261ca FUN_1430261ca body=130 status=ok
// SIG undefined FUN_1430261ca(void)

undefined1 * FUN_1430261ca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bCameraCut";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x49a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 1;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14302624c;
}



// FUNCTION 143026250 FUN_143026250 body=44 status=ok
// SIG undefined FUN_143026250(void)

void FUN_143026250(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 143026288 FUN_143026288 body=96 status=ok
// SIG undefined FUN_143026288(void)

undefined8 FUN_143026288(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14302637e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca4c768,1);
  return uVar3;
}



// FUNCTION 1430262e8 FUN_1430262e8 body=138 status=ok
// SIG undefined FUN_1430262e8(void)

void * FUN_1430262e8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14302637e FUN_14302637e body=445 status=ok
// SIG undefined FUN_14302637e(void)

void FUN_14302637e(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4c7e8) {
    FUN_144b3d300(&DAT_14ca4c7e8);
    if (DAT_14ca4c7e8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_143026548;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x230;
      local_88 = 0x4bd;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca4c768,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14302653c);
      _Init_thread_footer(&DAT_14ca4c7e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143026548 FUN_143026548 body=136 status=ok
// SIG undefined FUN_143026548(void)

code * FUN_143026548(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DebugOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x220000004c3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1430265d0;
}



// FUNCTION 1430265d0 FUN_1430265d0 body=144 status=ok
// SIG undefined FUN_1430265d0(void)

code * FUN_1430265d0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14302404c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SignalOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSSDSignalUAVs";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000004c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca4c0e8;
  return FUN_143026660;
}



// FUNCTION 143026660 FUN_143026660 body=144 status=ok
// SIG undefined FUN_143026660(void)

code * FUN_143026660(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_143023232();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSSDCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000004c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca4be90;
  return FUN_1430266f0;
}



// FUNCTION 1430266f0 FUN_1430266f0 body=142 status=ok
// SIG undefined FUN_1430266f0(void)

code * FUN_1430266f0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145ef99ec();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SignalIntegrand";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSSDSignalTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x80000004bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14302677e;
}



// FUNCTION 14302677e FUN_14302677e body=136 status=ok
// SIG undefined FUN_14302677e(void)

undefined1 * FUN_14302677e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145ef99ec();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SignalHarmonics";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSSDSignalTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4be;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_143026806;
}



// FUNCTION 14302680a FUN_14302680a body=44 status=ok
// SIG undefined FUN_14302680a(void)

void FUN_14302680a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 143026839 FUN_143026839 body=353 status=ok
// SIG undefined FUN_143026839(void)

undefined8 * FUN_143026839(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar6 = 0;
  do {
    lVar3 = *(longlong *)(param_3 + lVar6 * 8);
    if (lVar3 != 0) {
      uVar1 = *(undefined1 *)(lVar3 + 0x94);
      puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 9;
      if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
        FUN_140023dd8((longlong *)(param_2 + 0x70),0x50);
        puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar4 = puVar5 + 9;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar4;
      puVar5[1] = *(undefined8 *)(lVar3 + 8);
      puVar5[2] = 0;
      *(undefined1 *)(puVar5 + 3) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar5 + 5) = 0;
      *puVar5 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar5 + 6) = uVar1;
      *(undefined1 *)(puVar5 + 7) = 0;
      *(undefined4 *)((longlong)puVar5 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar5 + 0x35) = 0;
      puVar5[8] = lVar3;
      iVar2 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
      if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
        FUN_1447568fc(param_2 + 0x198,iVar2);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar5;
      *(int *)((longlong)puVar5 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      param_1[lVar6] = puVar5;
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 4);
  return param_1;
}



// FUNCTION 14302699a FUN_14302699a body=144 status=ok
// SIG undefined FUN_14302699a(void)

undefined4 * FUN_14302699a(undefined4 *param_1,undefined8 param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = *param_3;
  bVar1 = *(byte *)(param_3 + 2);
  bVar2 = *(byte *)(param_3 + 4);
  iVar4 = param_3[3];
  iVar5 = param_3[1];
  FUN_14301ab50();
  FUN_1448e935e(param_2,&local_38,&DAT_14ca4c290,
                iVar3 + (((uint)bVar1 + ((uint)bVar2 * 4 + iVar4) * 2) * 5 + iVar5) * 8 + -0x50);
  FUN_14301ab50();
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143026a2b FUN_143026a2b body=815 status=ok
// SIG undefined FUN_143026a2b(void)

void FUN_143026a2b(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  undefined8 *param_5)

{
  ulonglong *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 unaff_RBP;
  ushort *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  int iVar21;
  int iVar22;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 local_a8;
  ulonglong *local_a0;
  longlong *local_98;
  ulonglong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  undefined6 uVar14;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = param_2;
  local_98 = param_3;
  FUN_143024aca();
  lVar8 = DAT_14ca4c388;
  local_80 = *(undefined4 *)(param_5 + 1);
  local_88 = *param_5;
  iVar4 = *(int *)(DAT_14ca4c388 + 0x38);
  if (0 < (longlong)iVar4) {
    lVar6 = *local_98;
    local_90 = (ulonglong *)(lVar6 + 0x30);
    local_a0 = (ulonglong *)(lVar6 + 0x20);
    lVar17 = 0;
    unaff_RBP = 0x67200;
    iVar21 = 0;
    iVar12 = 0;
    iVar18 = 0;
    do {
      bVar2 = *(byte *)(*(longlong *)(lVar8 + 0x30) + 2 + lVar17 * 4);
      if (bVar2 < 0x14) {
        uVar3 = *(ushort *)(*(longlong *)(lVar8 + 0x30) + lVar17 * 4);
        uVar16 = (ulonglong)uVar3;
        iVar11 = iVar12;
        if ((0x67200U >> (bVar2 & 0x1f) & 1) == 0) {
          if (bVar2 == 0x13) {
            if (iVar18 < *(int *)(lVar6 + 0x38)) {
              uVar7 = *local_90;
              uVar19 = ((longlong)uVar7 >> 0x18) + (longlong)local_90;
              if ((uVar7 & 1) == 0) {
                uVar19 = uVar7;
              }
              if (uVar3 == *(ushort *)(uVar19 + 2 + (longlong)iVar18 * 4)) {
                iVar18 = iVar18 + 1;
                goto LAB_143026b30;
              }
            }
            if ((*(longlong *)(param_4 + uVar16) != 0) &&
               ((*(byte *)(param_4 + 8 + uVar16) & 2) == 0)) goto LAB_143026b28;
          }
        }
        else {
          iVar5 = *(int *)(lVar6 + 0x18);
          if (iVar21 < iVar5) {
            uVar7 = *(ulonglong *)(lVar6 + 0x10);
            uVar19 = ((longlong)uVar7 >> 0x18) + lVar6 + 0x10;
            if ((uVar7 & 1) == 0) {
              uVar19 = uVar7;
            }
            puVar15 = (ushort *)(uVar19 + (longlong)iVar21 * 4);
            iVar22 = iVar21;
            do {
              if (uVar3 <= *puVar15) {
                iVar21 = iVar22;
                if (*puVar15 == uVar3) goto LAB_143026b30;
                break;
              }
              iVar22 = iVar22 + 1;
              puVar15 = puVar15 + 2;
              iVar21 = iVar5;
            } while (iVar5 != iVar22);
          }
          iVar5 = *(int *)(lVar6 + 0x28);
          if (iVar12 < iVar5) {
            uVar7 = *local_a0;
            uVar19 = ((longlong)uVar7 >> 0x18) + (longlong)local_a0;
            if ((uVar7 & 1) == 0) {
              uVar19 = uVar7;
            }
            puVar15 = (ushort *)(uVar19 + (longlong)iVar12 * 6);
            do {
              if (uVar3 <= *puVar15) {
                iVar11 = iVar12;
                if (*puVar15 == uVar3) goto LAB_143026b30;
                break;
              }
              iVar12 = iVar12 + 1;
              puVar15 = puVar15 + 3;
              iVar11 = iVar5;
            } while (iVar5 != iVar12);
          }
LAB_143026b28:
          *(undefined8 *)(param_4 + uVar16) = 0;
          iVar12 = iVar11;
        }
      }
LAB_143026b30:
      lVar17 = lVar17 + 1;
    } while (lVar17 != iVar4);
  }
  local_78 = (undefined4)*local_98;
  uStack_74 = *(undefined4 *)((longlong)local_98 + 4);
  uStack_70 = (undefined4)local_98[1];
  uStack_6c = *(undefined4 *)((longlong)local_98 + 0xc);
  FUN_140069376(param_1);
  uVar9 = local_a8;
  uVar14 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar13 = (undefined4)CONCAT62(uVar14,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar13 = (undefined4)CONCAT62(uVar14,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar20 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar20 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar20 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar10;
  local_58 = DAT_14ca4c388;
  if (DAT_14ca4c388 != 0) {
    LOCK();
    *(int *)(DAT_14ca4c388 + 8) = *(int *)(DAT_14ca4c388 + 8) + 1;
    UNLOCK();
  }
  local_50 = &DAT_14ca4c340;
  local_b8 = 2;
  local_60 = param_4;
  FUN_140068f1a(puVar20,uVar9,&local_60,uVar13);
  *puVar20 = &PTR_FUN_14a2f8610;
  puVar20[0x37] = &DAT_14ca4c340;
  puVar20[0x38] = param_4;
  *(undefined4 *)(puVar20 + 0x39) = local_78;
  *(undefined4 *)((longlong)puVar20 + 0x1cc) = uStack_74;
  *(undefined4 *)(puVar20 + 0x3a) = uStack_70;
  *(undefined4 *)((longlong)puVar20 + 0x1d4) = uStack_6c;
  *(undefined4 *)(puVar20 + 0x3c) = local_80;
  puVar20[0x3b] = local_88;
  iVar4 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar4 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar4 * 8) = puVar20;
  *(int *)((longlong)puVar20 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140069100(param_1,puVar20);
  return;
}



// FUNCTION 143026d5b FUN_143026d5b body=126 status=ok
// SIG undefined FUN_143026d5b(void)

void FUN_143026d5b(undefined8 *param_1,int param_2)

{
  do {
    *param_1 = 0;
    param_1[1] = 0x3f80000000000000;
    param_1[2] = 0;
    param_1[3] = 0x3f80000000000000;
    param_1[4] = 0;
    param_1[5] = 0x3f80000000000000;
    param_1[8] = 0;
    param_1[9] = 0x3f80000000000000;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    *(undefined1 *)(param_1 + 0x23) = 1;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x28] = 0;
    *(undefined1 *)(param_1 + 0x29) = 1;
    param_1 = param_1 + 0x2c;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 143026dda FUN_143026dda body=310 status=ok
// SIG undefined FUN_143026dda(void)

void FUN_143026dda(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x850);
  uVar4 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar4);
  }
  uVar5 = 6;
  if (6 < uVar1) {
    if (6 < *(uint *)(param_1 + 0x854)) {
      uVar4 = uVar4 + (uVar4 * 3 >> 3) + 0x10;
    }
    uVar2 = uVar4 * 0x160;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x5e) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0);
      }
    }
    uVar3 = (uint)(uVar2 / 0x160);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar5 = uVar3;
    }
  }
  *(uint *)(param_1 + 0x854) = uVar5;
  if ((uVar5 < 7) && (*(longlong *)(param_1 + 0x840) == 0)) {
    return;
  }
  if (uVar5 < 7) {
    uVar5 = 0;
  }
  FUN_1446efa72(param_1 + 0x840,0,uVar5,0x160);
  return;
}



// FUNCTION 143026f10 FUN_143026f10 body=61 status=ok
// SIG undefined FUN_143026f10(void)

void FUN_143026f10(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[2] = 0;
    param_1[3] = 0x3f80000000000000;
    *param_1 = 0;
    param_1[1] = 0x3f80000000000000;
    param_1[6] = 0;
    param_1[7] = 0x3f80000000000000;
    param_1[4] = 0;
    param_1[5] = 0x3f80000000000000;
    param_1[10] = 0;
    param_1[0xb] = 0x3f80000000000000;
    param_1[8] = 0;
    param_1[9] = 0x3f80000000000000;
    param_1[0xe] = 0;
    param_1[0xf] = 0x3f80000000000000;
    param_1[0xc] = 0;
    param_1[0xd] = 0x3f80000000000000;
    param_1[0x10] = 0;
    param_1[0x11] = 0x3f80000000000000;
    param_1 = param_1 + 0x14;
  }
  return;
}



// FUNCTION 143026f4e FUN_143026f4e body=258 status=ok
// SIG undefined FUN_143026f4e(void)

void FUN_143026f4e(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x3d0);
  if (param_2 <= (int)uVar1) {
    iVar6 = 6;
    if (6 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (6 < *(uint *)(param_1 + 0x3d4)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar5 = lVar2 * 0xa0;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar5 < 0x7ff1) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar4 & (uVar5 + uVar4) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
        }
      }
      iVar3 = (int)(uVar5 / 0xa0);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x3d4) = iVar6;
    FUN_143027050(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 143027050 FUN_143027050 body=149 status=ok
// SIG undefined FUN_143027050(void)

void FUN_143027050(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x3c0);
  if ((uint)param_3 < 7) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xa0);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x3c0,0,param_3,0xa0);
    memmove(*(void **)((longlong)param_1 + 0x3c0),param_1,(longlong)param_2 * 0xa0);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x3c0,param_2,param_3,0xa0);
  return;
}



// FUNCTION 1430270e6 FUN_1430270e6 body=300 status=ok
// SIG undefined FUN_1430270e6(void)

void FUN_1430270e6(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x3d0);
  uVar6 = *(uint *)(param_1 + 0x3d4);
  uVar5 = 6;
  if (6 < (ulonglong)uVar1) {
    iVar2 = uVar6 - uVar1;
    if ((ulonglong)((longlong)iVar2 * 0xa0) < 0x4000) {
      if (iVar2 < 0x41 || (int)(uVar6 * 2) <= (int)(uVar1 * 3)) {
        return;
      }
    }
    else if (iVar2 < 0x41) {
      return;
    }
    uVar5 = uVar1;
    if (0 < (int)uVar1) {
      uVar4 = (ulonglong)uVar1 * 0xa0;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0xcd) {
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
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
          uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
          uVar6 = *(uint *)(param_1 + 0x3d4);
        }
      }
      uVar5 = (uint)(uVar4 / 0xa0);
    }
  }
  if (uVar5 == uVar6) {
    return;
  }
  *(uint *)(param_1 + 0x3d4) = uVar5;
  FUN_143027050(param_1,*(undefined4 *)(param_1 + 0x3d0));
  return;
}



// FUNCTION 143027212 FUN_143027212 body=29 status=ok
// SIG undefined FUN_143027212(void)

undefined8 FUN_143027212(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143027230 FUN_143027230 body=38 status=ok
// SIG undefined FUN_143027230(void)

undefined8 FUN_143027230(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143027256 FUN_143027256 body=1294 status=ok
// SIG undefined FUN_143027256(void)

void FUN_143027256(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
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
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
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
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
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
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
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
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143027766 FUN_143027766 body=29 status=ok
// SIG undefined FUN_143027766(void)

undefined8 FUN_143027766(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143027784 FUN_143027784 body=38 status=ok
// SIG undefined FUN_143027784(void)

undefined8 FUN_143027784(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430277aa FUN_1430277aa body=1294 status=ok
// SIG undefined FUN_1430277aa(void)

void FUN_1430277aa(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
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
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
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
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
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
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
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
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143027cba FUN_143027cba body=29 status=ok
// SIG undefined FUN_143027cba(void)

undefined8 FUN_143027cba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143027cd8 FUN_143027cd8 body=38 status=ok
// SIG undefined FUN_143027cd8(void)

undefined8 FUN_143027cd8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143027cfe FUN_143027cfe body=1294 status=ok
// SIG undefined FUN_143027cfe(void)

void FUN_143027cfe(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
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
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
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
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
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
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
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
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14302820e FUN_14302820e body=29 status=ok
// SIG undefined FUN_14302820e(void)

undefined8 FUN_14302820e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14302822c FUN_14302822c body=38 status=ok
// SIG undefined FUN_14302822c(void)

undefined8 FUN_14302822c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143028252 FUN_143028252 body=1294 status=ok
// SIG undefined FUN_143028252(void)

void FUN_143028252(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
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
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
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
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
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
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
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
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143028762 FUN_143028762 body=1632 status=ok
// SIG undefined FUN_143028762(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_143028762(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,longlong param_6,uint param_7,longlong param_8)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auStack_2a8 [32];
  longlong *local_288;
  undefined4 *local_280;
  longlong *local_278;
  longlong *local_270;
  undefined8 *local_268;
  ulonglong local_258;
  undefined8 local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  undefined4 local_230;
  longlong local_228;
  ulonglong local_220 [10];
  undefined1 local_1cc [4];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8 [9];
  undefined8 local_160;
  undefined8 local_158;
  ulonglong auStack_150 [10];
  undefined4 local_100;
  uint local_fc;
  undefined4 local_f8;
  int local_f4;
  undefined1 *local_f0;
  undefined1 local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  longlong alStack_c8 [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined4 local_90;
  longlong local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_220[3] = 0;
  local_220[4] = 0;
  local_220[1] = 0;
  local_220[2] = 0;
  FUN_1472e3b02(param_3);
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_f8 = 0x3f800000;
  local_e8 = 1;
  local_dc = 0x41000000;
  local_d0 = 0x3f800000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_f0 = &DAT_3f8000003f800000;
  auStack_150[7] = 0;
  auStack_150[8] = 0;
  auStack_150[5] = 0;
  auStack_150[6] = 0;
  auStack_150[3] = 0;
  auStack_150[4] = 0;
  auStack_150[1] = 0;
  auStack_150[2] = 0;
  local_158 = 0;
  auStack_150[0] = 0;
  auStack_150[9] = 0;
  local_100 = 0;
  local_e4 = 0x38;
  if (*(int *)(DAT_14ca4b8d0 + 4) < 0x38) {
    local_e4 = *(int *)(DAT_14ca4b8d0 + 4);
  }
  local_f4 = 1;
  if (local_e4 < 2) {
    local_e4 = 1;
  }
  local_e0 = *(undefined4 *)(DAT_14ca4b8e8 + 4);
  local_d8 = *(int *)(DAT_14ca4b900 + 4) != 0;
  local_d4 = *(undefined4 *)(DAT_14ca4b918 + 4);
  local_fc = param_7;
  uVar12 = (ulonglong)param_7;
  if ((int)param_7 < 1) {
    local_f4 = 1;
    local_1a8[4] = 0;
    local_1a8[5] = 0;
    local_1a8[6] = 0;
    local_1a8[7] = 0;
    local_1a8[0] = 0;
    local_1a8[1] = 0;
    local_1a8[2] = 0;
    local_1a8[3] = 0;
    uVar3 = 0;
    uVar9 = 0;
  }
  else {
    lVar5 = 0;
    do {
      iVar4 = *(int *)(param_6 + 8 + lVar5);
      if (local_f4 < iVar4) {
        local_f4 = iVar4;
      }
      lVar5 = lVar5 + 0x20;
    } while (uVar12 << 5 != lVar5);
    local_1a8[4] = 0;
    local_1a8[5] = 0;
    local_1a8[6] = 0;
    local_1a8[7] = 0;
    local_1a8[0] = 0;
    local_1a8[1] = 0;
    local_1a8[2] = 0;
    local_1a8[3] = 0;
    local_240 = param_3 + 0x30f8;
    local_248 = param_4 + 0xff0;
    uVar13 = 0;
    uVar11 = 0;
    uVar8 = 0;
    uVar10 = 0;
    uVar14 = 0;
    local_258 = uVar12;
    local_250 = param_2;
    do {
      plVar7 = *(longlong **)(*(longlong *)(param_6 + uVar14 * 0x20) + 0x28);
      local_1c8 = (ulonglong *)0x0;
      uStack_1c0 = (longlong *)0x0;
      cVar2 = (**(code **)(*plVar7 + 0xe0))(plVar7,&local_1c8,param_3,local_240);
      if (cVar2 == '\0') {
        local_1c8 = *(ulonglong **)(param_3 + 0x30f8);
        uStack_1c0 = *(longlong **)(param_3 + 0x3100);
      }
      if (uVar14 == 0) {
        local_160 = (ulonglong)local_1c8;
        local_158 = (ulonglong)uStack_1c0;
        uVar8 = (ulonglong)local_1c8 >> 0x20;
        uVar13 = (ulonglong)uStack_1c0 >> 0x20;
        uVar10 = (ulonglong)local_1c8;
        uVar11 = (ulonglong)uStack_1c0;
      }
      else {
        uVar3 = (uint)local_1c8;
        if ((int)(uint)uVar10 < (int)(uint)local_1c8) {
          uVar3 = (uint)uVar10;
        }
        uVar9 = local_1c8._4_4_;
        if ((int)(uint)uVar8 < (int)local_1c8._4_4_) {
          uVar9 = (uint)uVar8;
        }
        local_160 = CONCAT44(uVar9,uVar3);
        if ((int)uVar11 < (int)uStack_1c0) {
          uVar11 = (ulonglong)uStack_1c0;
        }
        if ((int)uVar13 < (int)uStack_1c0._4_4_) {
          uVar13 = (ulonglong)uStack_1c0._4_4_;
        }
        local_158 = CONCAT44((int)uVar13,(int)uVar11);
        uVar8 = (ulonglong)uVar9;
        uVar10 = (ulonglong)uVar3;
        uVar11 = uVar11 & 0xffffffff;
      }
      plVar7 = (longlong *)(uVar14 * 0x20 + param_6);
      auStack_150[uVar14 * 2] = (ulonglong)local_1c8;
      auStack_150[uVar14 * 2 + 1] = (ulonglong)uStack_1c0;
      lVar5 = *plVar7;
      alStack_c8[uVar14] = lVar5;
      local_88[uVar14] = plVar7[2];
      local_220[0] = *(ulonglong *)(*(longlong *)(lVar5 + 0x28) + 8);
      if (*(int *)(param_4 + 0xfc0) != *(int *)(param_4 + 0xfec)) {
        uVar3 = ((uint)(local_220[0] >> 0x14) & 0xffff ^ (uint)(local_220[0] >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        lVar5 = *(longlong *)(param_4 + 0xff8);
        if (*(longlong *)(param_4 + 0xff8) == 0) {
          lVar5 = local_248;
        }
        iVar4 = *(int *)(lVar5 + (ulonglong)
                                 (*(int *)(param_4 + 0x1000) - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        if (iVar4 != -1) {
          do {
            lVar5 = *(longlong *)(param_4 + 0xfb8) + (longlong)iVar4 * 0x20;
            if (*(ulonglong *)(*(longlong *)(param_4 + 0xfb8) + (longlong)iVar4 * 0x20) ==
                local_220[0]) {
              if ((longlong *)(lVar5 + 8) != (longlong *)0x0 && lVar5 != 0) {
                lVar5 = *(longlong *)(lVar5 + 8);
                goto LAB_143028b1d;
              }
              break;
            }
            iVar4 = *(int *)(lVar5 + 0x18);
          } while (iVar4 != -1);
        }
      }
      lVar5 = 0;
LAB_143028b1d:
      local_1a8[uVar14 + 4] = lVar5;
      local_1a8[uVar14] = 0;
      if ((*(byte *)(param_3 + 0x125b0) & 1) == 0) {
        lVar5 = *(longlong *)(param_3 + 0x3108);
        if (*(int *)(lVar5 + 0x16b0) != *(int *)(lVar5 + 0x16dc)) {
          uVar3 = ((uint)(local_220[0] >> 0x14) & 0xffff ^ (uint)(local_220[0] >> 4)) * -0x7a143595;
          uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
          lVar6 = lVar5 + 0x16e0;
          if (*(longlong *)(lVar5 + 0x16e8) != 0) {
            lVar6 = *(longlong *)(lVar5 + 0x16e8);
          }
          iVar4 = *(int *)(lVar6 + (ulonglong)
                                   (*(int *)(lVar5 + 0x16f0) - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
          if (iVar4 != -1) {
            lVar6 = *(longlong *)(lVar5 + 0x16a8);
            do {
              lVar1 = lVar6 + (longlong)iVar4 * 0x20;
              if (*(ulonglong *)(lVar6 + (longlong)iVar4 * 0x20) == local_220[0]) {
                if ((lVar1 != 0) && ((longlong *)(lVar1 + 8) != (longlong *)0x0)) {
                  lVar5 = *(longlong *)(lVar1 + 8);
                  goto LAB_143028c65;
                }
                break;
              }
              iVar4 = *(int *)(lVar1 + 0x18);
            } while (iVar4 != -1);
          }
        }
        local_228 = FUN_14001cc68(0x40,0x10);
        *(undefined8 *)(local_228 + 0x10) = 0;
        *(undefined8 *)(local_228 + 0x18) = 0x100000000;
        *(undefined8 *)(local_228 + 0x20) = 0;
        *(undefined8 *)(local_228 + 0x28) = 0;
        *(undefined8 *)(local_228 + 0x30) = 0;
        *(undefined8 *)(local_228 + 0x38) = 0;
        local_1c8 = local_220;
        uStack_1c0 = &local_228;
        FUN_1472e61a8((longlong *)(lVar5 + 0x16a8),local_1cc,&local_1c8);
        lVar5 = local_228;
LAB_143028c65:
        local_1a8[uVar14] = lVar5;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != local_258);
    uVar9 = (uint)uVar10 & 0xfffffffe;
    uVar3 = (uint)uVar8 & 0xfffffffe;
    uVar12 = local_258;
    param_2 = local_250;
  }
  local_98 = &local_160;
  local_160 = CONCAT44(uVar3,uVar9);
  local_280 = &local_100;
  local_90 = 1;
  local_268 = &local_1c8;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = (ulonglong *)0x0;
  uStack_1c0 = (longlong *)0x0;
  local_230 = 1;
  local_270 = local_1a8;
  local_278 = local_1a8 + 4;
  local_288 = local_88;
  local_238 = param_3;
  FUN_14301b42b(param_2,&local_238,param_5,local_220 + 1);
  if (0 < (int)param_7) {
    lVar5 = 0;
    do {
      *(undefined8 *)(param_8 + lVar5 * 2) = *(undefined8 *)((longlong)&local_1c8 + lVar5);
      lVar5 = lVar5 + 8;
    } while (uVar12 * 8 != lVar5);
  }
  FUN_1472e3c00(local_220 + 1);
  if ((local_60 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143028dc4 FUN_143028dc4 body=4398 status=ok
// SIG undefined FUN_143028dc4(void)

undefined8 *
FUN_143028dc4(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4,
             longlong param_5,longlong *param_6,ulonglong *param_7)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  undefined8 *puVar18;
  int iVar19;
  ulonglong uVar20;
  longlong *plVar21;
  uint uVar22;
  int iVar23;
  undefined4 uVar24;
  longlong *plVar25;
  undefined8 *puVar26;
  undefined8 **ppuVar27;
  longlong lVar29;
  int iVar30;
  longlong lVar31;
  undefined8 **ppuVar32;
  undefined8 *puVar33;
  ulonglong uVar34;
  undefined1 *puVar35;
  ushort *puVar36;
  undefined1 auStack_438 [32];
  ulonglong *local_418;
  undefined1 **local_410;
  longlong *local_408;
  longlong *local_400;
  undefined8 *local_3f8;
  undefined8 local_3f0;
  undefined8 *local_3e8;
  ulonglong *local_3e0;
  longlong *local_3d8;
  undefined8 *local_3d0;
  longlong local_3c8;
  ulonglong *local_3c0;
  undefined8 *local_3b8;
  longlong local_3b0;
  undefined8 *local_3a8;
  longlong local_3a0;
  undefined4 local_398;
  longlong local_390;
  undefined4 local_388;
  longlong local_380;
  undefined4 local_378;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined1 *local_360;
  undefined1 local_358;
  undefined8 local_354;
  undefined4 local_34c;
  undefined1 local_348;
  undefined8 local_344;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 **local_308;
  undefined4 local_300;
  longlong local_2f8 [4];
  longlong local_2d8 [4];
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 *local_2a8;
  undefined1 local_2a0;
  undefined8 local_29c;
  undefined4 local_294;
  undefined1 local_290;
  undefined8 local_28c;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 **local_250;
  undefined4 local_248;
  undefined8 local_240 [4];
  undefined8 local_220 [4];
  undefined1 *local_200;
  float local_1f8;
  undefined4 local_1f4;
  undefined1 *local_1f0;
  undefined1 local_1e8;
  int local_1e4;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined8 local_1d4;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 **local_198;
  undefined4 local_190;
  undefined8 local_188 [4];
  undefined8 local_168 [4];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  ulonglong local_128;
  ulonglong uStack_120;
  ulonglong local_118;
  ulonglong uStack_110;
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_60;
  undefined6 uVar28;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_438;
  local_3a8 = param_2;
  local_3f0 = FUN_14473c272(param_3,&DAT_14ca63b28,0);
  FUN_14473c272(param_3,&DAT_14ca63b20,0);
  puVar1 = (ulonglong *)(param_3 + 0x70);
  puVar33 = (undefined8 *)(*(longlong *)(param_3 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar33 + 0x48;
  local_3e0 = puVar1;
  if (*(undefined8 **)(param_3 + 0x78) < puVar10) {
    FUN_140023dd8(puVar1);
    puVar33 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar33 + 0x48;
  }
  *(undefined8 **)(param_3 + 0x70) = puVar10;
  *puVar33 = &PTR_FUN_14a2f96e8;
  local_3e8 = puVar33 + 2;
  local_3b0 = param_4;
  memset(local_3e8,0,0xac);
  *(undefined8 *)((longlong)puVar33 + 0xbc) = 0x3f800000;
  *(undefined8 *)((longlong)puVar33 + 0xc4) = 0;
  *(undefined8 *)((longlong)puVar33 + 0xcc) = 0x3f800000;
  *(undefined8 *)((longlong)puVar33 + 0xd4) = 0;
  *(undefined4 *)((longlong)puVar33 + 0xdc) = 0x3f800000;
  *(undefined4 *)(puVar33 + 0x1e) = 0;
  *(undefined4 *)((longlong)puVar33 + 0xf4) = 0;
  *(undefined4 *)(puVar33 + 0x1f) = 0;
  *(undefined4 *)((longlong)puVar33 + 0xfc) = 0x3f800000;
  puVar33[0x2c] = 0;
  puVar33[0x2d] = 0;
  puVar33[0x2e] = 0;
  puVar33[0x2f] = 0;
  puVar33[0x30] = 0;
  puVar33[0x31] = 0;
  puVar33[0x32] = 0;
  puVar33[0x33] = 0;
  puVar33[0x34] = 0;
  puVar33[0x35] = 0;
  puVar33[0x36] = 0;
  puVar33[0x37] = 0;
  puVar33[0x38] = 0;
  *(undefined1 *)(puVar33 + 0x39) = 1;
  puVar33[0x3e] = 0;
  puVar33[0x3c] = 0;
  puVar33[0x3d] = 0;
  puVar33[0x3a] = 0;
  puVar33[0x3b] = 0;
  *(undefined1 *)(puVar33 + 0x3f) = 1;
  puVar33[0x46] = 0;
  puVar33[0x44] = 0;
  puVar33[0x45] = 0;
  puVar33[0x42] = 0;
  puVar33[0x43] = 0;
  iVar5 = *(int *)(param_3 + 0xa0);
  *(uint *)(param_3 + 0xa0) = iVar5 + 1U;
  local_3c8 = param_3;
  if (*(uint *)(param_3 + 0xa4) < iVar5 + 1U) {
    FUN_1448cfae8((longlong *)(param_3 + 0x98),iVar5);
  }
  lVar9 = local_3b0;
  local_3d0 = puVar33 + 0x12;
  local_3d8 = puVar33 + 0x2c;
  local_3c0 = puVar33 + 0x42;
  *(undefined8 **)(*(longlong *)(param_3 + 0x98) + (longlong)iVar5 * 8) = puVar33;
  puVar33[2] = *param_7;
  puVar33[3] = param_7[1];
  puVar33[4] = param_7[6];
  puVar33[5] = param_7[7];
  lVar31 = 0;
  lVar29 = 1;
  local_3b8 = puVar33;
  do {
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_1472e3b02(lVar9,&local_a8);
    local_1e4 = 1 << ((byte)lVar29 & 0x1f);
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    uStack_f8 = (undefined *)0x0;
    uStack_f0 = 0;
    local_108 = *(undefined8 **)(lVar9 + 0x30f8);
    uStack_100 = *(undefined8 *)(lVar9 + 0x3100);
    local_1f8 = (float)local_1e4;
    local_128 = param_7[lVar29];
    uStack_120 = param_7[lVar29 + 1];
    local_118 = param_7[lVar29 + 6];
    uStack_110 = param_7[lVar29 + 7];
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_1e4 = local_1e4 << ((byte)lVar29 & 0x1f);
    local_168[0] = 0;
    local_188[0] = 0;
    local_200 = &DAT_100000001;
    local_1f4 = 1;
    local_1f0 = &DAT_3f8000003f800000;
    local_1e8 = 1;
    local_1e0 = 0x4100000000000000;
    local_1d8 = 0;
    local_1d4 = 0x3f80000000000001;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = &local_108;
    local_190 = 1;
    local_380 = lVar9;
    local_378 = 1;
    local_3f8 = &local_148;
    local_400 = local_168;
    local_408 = local_188;
    local_410 = &local_200;
    local_418 = &local_128;
    FUN_14301b42b(local_3c8,&local_380,param_6,&local_a8);
    puVar10 = puVar33 + lVar31 + 8;
    *(undefined4 *)puVar10 = (undefined4)local_138;
    *(undefined4 *)((longlong)puVar10 + 4) = local_138._4_4_;
    *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_130._4_4_;
    puVar10 = puVar33 + lVar31 + 6;
    *(undefined4 *)puVar10 = (undefined4)local_148;
    *(undefined4 *)((longlong)puVar10 + 4) = local_148._4_4_;
    *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_140._4_4_;
    FUN_1472e3c00(&local_a8);
    lVar31 = lVar31 + 4;
    lVar29 = lVar29 + 1;
  } while (lVar31 != 0xc);
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1472e3b02(lVar9,&local_a8);
  lVar29 = local_3c8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_f8 = (undefined *)0x0;
  uStack_f0 = 0;
  local_108 = *(undefined8 **)(lVar9 + 0x30f8);
  uStack_100 = *(undefined8 *)(lVar9 + 0x3100);
  local_128 = *param_7;
  uStack_120 = local_3f0;
  local_118 = param_7[6];
  uStack_110 = local_3f0;
  local_400 = local_220;
  local_220[0] = 0;
  local_408 = local_240;
  local_240[0] = 0;
  local_410 = (undefined1 **)&local_2b8;
  local_2b8 = 1;
  uStack_2b4 = 1;
  uStack_2b0 = 0x41000000;
  uStack_2ac = 1;
  local_2a8 = &DAT_3f8000003f800000;
  local_2a0 = 1;
  local_29c = 0x40;
  local_294 = 0x41000000;
  local_290 = 0;
  local_28c = 0x3f80000000000001;
  local_260 = 0;
  uStack_258 = 0;
  local_250 = &local_108;
  local_248 = 1;
  local_390 = lVar9;
  local_388 = 1;
  local_3f8 = local_3d0;
  local_418 = &local_128;
  FUN_14301b42b(local_3c8,&local_390,param_6,&local_a8);
  FUN_1472e3c00(&local_a8);
  puVar1 = local_3e0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  uVar13 = *(uint *)(*param_6 + 0x84);
  uVar14 = *(uint *)(*param_6 + 0x88);
  local_98 = CONCAT44(local_98._4_4_,DAT_14ca83a40);
  local_a8 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  uStack_a0 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  uVar22 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_d8 = CONCAT26(local_d8._6_2_,0xff000a000000);
  local_108 = (undefined8 *)&DAT_00020008;
  local_d8 = CONCAT62(local_d8._2_6_,0x101);
  uVar15 = DAT_14ca84e40;
  if ((int)uVar13 < (int)DAT_14ca84e40) {
    uVar15 = uVar13;
  }
  uStack_100 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  uStack_f8 = (undefined *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  if ((int)uVar15 < 2) {
    uVar15 = 1;
  }
  uVar8 = DAT_14ca84e40;
  if ((int)uVar14 < (int)DAT_14ca84e40) {
    uVar8 = uVar14;
  }
  uStack_f0 = CONCAT44(uVar22,DAT_14ca83a40);
  if ((int)uVar8 < 2) {
    uVar8 = 1;
  }
  local_e8 = (ulonglong)uVar15 << 0x20;
  uStack_e0 = CONCAT44(0x10001,uVar8);
  uVar34 = *(longlong *)(lVar29 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar11 = uVar34 + 0x120;
  local_3f0._0_4_ = uVar13;
  if (*(ulonglong *)(lVar29 + 0x78) < uVar11) {
    FUN_140023dd8(local_3e0,0x128);
    uVar34 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar11 = uVar34 + 0x120;
  }
  local_3d0 = (undefined8 *)(lVar29 + 0x178);
  *(ulonglong *)(lVar29 + 0x70) = uVar11;
  FUN_1456bbb8c(uVar34,L"PolychromaticPenumbraComposition0",&local_108,0);
  iVar5 = *(int *)(lVar29 + 0x180);
  *(uint *)(lVar29 + 0x180) = iVar5 + 1U;
  if (*(uint *)(lVar29 + 0x184) < iVar5 + 1U) {
    FUN_14472c0f6(local_3d0,iVar5);
  }
  puVar1 = local_3e0;
  *(ulonglong *)(*(longlong *)(lVar29 + 0x178) + (longlong)iVar5 * 8) = uVar34;
  *(int *)(uVar34 + 0x9c) = *(int *)(lVar29 + 0x180) + -1;
  local_d8 = CONCAT26(local_d8._6_2_,0xff000a000000);
  local_108 = (undefined8 *)&DAT_00020008;
  local_d8 = CONCAT62(local_d8._2_6_,0x101);
  uStack_100 = local_a8;
  uStack_f8 = (undefined *)uStack_a0;
  uVar13 = DAT_14ca84e40;
  if ((int)(uint)local_3f0 < (int)DAT_14ca84e40) {
    uVar13 = (uint)local_3f0;
  }
  if ((int)uVar13 < 2) {
    uVar13 = 1;
  }
  uVar15 = DAT_14ca84e40;
  if ((int)uVar14 < (int)DAT_14ca84e40) {
    uVar15 = uVar14;
  }
  uStack_f0 = CONCAT44(uVar22,(int)local_98);
  if ((int)uVar15 < 2) {
    uVar15 = 1;
  }
  local_e8 = (ulonglong)uVar13 << 0x20;
  uStack_e0 = CONCAT44(0x10001,uVar15);
  uVar20 = *(longlong *)(lVar29 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar11 = uVar20 + 0x120;
  local_128 = uVar34;
  if (*(ulonglong *)(lVar29 + 0x78) < uVar11) {
    FUN_140023dd8(local_3e0,0x128);
    uVar20 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar11 = uVar20 + 0x120;
  }
  *(ulonglong *)(lVar29 + 0x70) = uVar11;
  FUN_1456bbb8c(uVar20,L"PolychromaticPenumbraComposition1",&local_108,0);
  iVar5 = *(int *)(lVar29 + 0x180);
  *(uint *)(lVar29 + 0x180) = iVar5 + 1U;
  if (*(uint *)(lVar29 + 0x184) < iVar5 + 1U) {
    FUN_14472c0f6(local_3d0,iVar5);
  }
  *(ulonglong *)(*(longlong *)(lVar29 + 0x178) + (longlong)iVar5 * 8) = uVar20;
  *(int *)(uVar20 + 0x9c) = *(int *)(lVar29 + 0x180) + -1;
  uStack_120 = uVar20;
  lVar31 = FUN_1447e4f80();
  puVar10 = local_3b8;
  cVar12 = '\x02';
  if (*(char *)(lVar31 + 0x41) != '\x03') {
    cVar12 = *(char *)(lVar31 + 0x41);
  }
  local_3b8[0x3e] = *(undefined8 *)(lVar9 + 0x18);
  *(char *)(local_3b8 + 0x3f) = cVar12;
  plVar21 = param_6;
  plVar25 = local_3d8;
  for (lVar31 = 0xc; lVar31 != 0; lVar31 = lVar31 + -1) {
    *plVar25 = *plVar21;
    plVar21 = plVar21 + 1;
    plVar25 = plVar25 + 1;
  }
  local_3b8[0x1c] = *(undefined8 *)(lVar9 + 0x30f8);
  local_3b8[0x1d] = *(undefined8 *)(lVar9 + 0x3100);
  iVar5 = *(int *)(lVar9 + 0x3104);
  iVar19 = *(int *)(lVar9 + 0x3100);
  iVar16 = *(int *)(lVar9 + 0x30fc);
  *(float *)(local_3b8 + 0x18) =
       ((float)*(int *)(lVar9 + 0x30f8) + 0.5) / (float)(int)(uint)local_3f0;
  *(float *)((longlong)local_3b8 + 0xc4) = ((float)iVar16 + 0.5) / (float)(int)uVar14;
  *(float *)(local_3b8 + 0x19) = ((float)iVar19 + -0.5) / (float)(int)(uint)local_3f0;
  *(float *)((longlong)local_3b8 + 0xcc) = ((float)iVar5 + -0.5) / (float)(int)uVar14;
  FUN_143026839(&local_108,lVar29,&local_128);
  puVar1 = local_3e0;
  *(undefined4 *)(local_3c0 + 2) = (undefined4)uStack_f8;
  *(undefined4 *)((longlong)local_3c0 + 0x14) = uStack_f8._4_4_;
  *(undefined4 *)(local_3c0 + 3) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)local_3c0 + 0x1c) = uStack_f0._4_4_;
  *local_3c0 = (ulonglong)local_108;
  local_3c0[1] = uStack_100;
  uStack_100 = CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
  uStack_f8 = (undefined *)CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
  uVar14 = (uint)*(undefined8 *)(*param_6 + 0x84);
  uVar13 = DAT_14ca84e40;
  if ((int)uVar14 < (int)DAT_14ca84e40) {
    uVar13 = uVar14;
  }
  if ((int)uVar13 < 2) {
    uVar13 = 1;
  }
  uVar15 = (uint)((ulonglong)*(undefined8 *)(*param_6 + 0x84) >> 0x20);
  uVar14 = DAT_14ca84e40;
  if ((int)uVar15 < (int)DAT_14ca84e40) {
    uVar14 = uVar15;
  }
  local_108 = (undefined8 *)&DAT_00020008;
  local_d8 = CONCAT26(local_d8._6_2_,0xff000a000101);
  uStack_f0 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
  if ((int)uVar14 < 2) {
    uVar14 = 1;
  }
  local_e8 = (ulonglong)uVar13 << 0x20;
  uStack_e0 = CONCAT44(0x10001,uVar14);
  uVar34 = *(longlong *)(lVar29 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar11 = uVar34 + 0x120;
  if (*(ulonglong *)(lVar29 + 0x78) < uVar11) {
    FUN_140023dd8(local_3e0,0x128);
    uVar34 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar11 = uVar34 + 0x120;
  }
  *(ulonglong *)(lVar29 + 0x70) = uVar11;
  FUN_1456bbb8c(uVar34,L"DebugHarmonicComposition",&local_108,0);
  iVar5 = *(int *)(lVar29 + 0x180);
  *(uint *)(lVar29 + 0x180) = iVar5 + 1U;
  if (*(uint *)(lVar29 + 0x184) < iVar5 + 1U) {
    FUN_14472c0f6(local_3d0,iVar5);
  }
  puVar1 = local_3e0;
  *(ulonglong *)(*(longlong *)(lVar29 + 0x178) + (longlong)iVar5 * 8) = uVar34;
  *(int *)(uVar34 + 0x9c) = *(int *)(lVar29 + 0x180) + -1;
  uVar2 = *(undefined1 *)(uVar34 + 0x94);
  puVar26 = (undefined8 *)(*(longlong *)(lVar29 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar33 = puVar26 + 9;
  if (*(undefined8 **)(lVar29 + 0x78) < puVar33) {
    FUN_140023dd8(local_3e0,0x50);
    puVar26 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar33 = puVar26 + 9;
  }
  *(undefined8 **)(lVar29 + 0x70) = puVar33;
  puVar26[1] = *(undefined8 *)(uVar34 + 8);
  puVar26[2] = 0;
  *(undefined1 *)(puVar26 + 3) = 0;
  *(undefined8 *)((longlong)puVar26 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar26 + 5) = 0;
  *puVar26 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar26 + 6) = uVar2;
  *(undefined1 *)(puVar26 + 7) = 0;
  *(undefined4 *)((longlong)puVar26 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar26 + 0x35) = 0;
  puVar26[8] = uVar34;
  iVar5 = *(int *)(lVar29 + 0x1a0);
  *(uint *)(lVar29 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(lVar29 + 0x1a4) < iVar5 + 1U) {
    FUN_1447568fc(lVar29 + 0x198,iVar5);
  }
  *(undefined8 **)(*(longlong *)(lVar29 + 0x198) + (longlong)iVar5 * 8) = puVar26;
  *(int *)((longlong)puVar26 + 0x1c) = *(int *)(lVar29 + 0x1a0) + -1;
  puVar10[0x46] = puVar26;
  uVar6 = *(undefined8 *)(lVar9 + 0x13818);
  FUN_14301afd0();
  ppuVar27 = &local_108;
  iVar16 = 0;
  FUN_1448e935e(uVar6,ppuVar27,&DAT_14ca4c6b8,0);
  FUN_14301afd0();
  puVar10 = local_108;
  local_3b8 = (undefined8 *)uStack_100;
  iVar19 = *(int *)(lVar9 + 0x3104) - *(int *)(lVar9 + 0x30fc);
  iVar5 = iVar19 + 7;
  iVar19 = iVar19 + 0xe;
  if (-1 < iVar5) {
    iVar19 = iVar5;
  }
  iVar30 = *(int *)(lVar9 + 0x3100) - *(int *)(lVar9 + 0x30f8);
  iVar5 = iVar30 + 7;
  iVar30 = iVar30 + 0xe;
  if (-1 < iVar5) {
    iVar30 = iVar5;
  }
  FUN_14302637e();
  lVar9 = DAT_14ca4c7b0;
  iVar5 = *(int *)(DAT_14ca4c7b0 + 0x38);
  if (0 < (longlong)iVar5) {
    local_3c0 = puVar10 + 6;
    plVar21 = puVar10 + 4;
    lVar29 = 0;
    local_3f0._0_4_ = 0;
    ppuVar32 = (undefined8 **)0x0;
    do {
      ppuVar27 = ppuVar32;
      bVar3 = *(byte *)(*(longlong *)(lVar9 + 0x30) + 2 + lVar29 * 4);
      ppuVar32 = ppuVar27;
      if (bVar3 < 0x14) {
        uVar4 = *(ushort *)(*(longlong *)(lVar9 + 0x30) + lVar29 * 4);
        uVar11 = (ulonglong)uVar4;
        uVar13 = (uint)local_3f0;
        if ((0x67200U >> (bVar3 & 0x1f) & 1) == 0) {
          if (bVar3 == 0x13) {
            iVar23 = (int)ppuVar27;
            if (iVar23 < *(int *)(puVar10 + 7)) {
              uVar34 = *local_3c0;
              uVar20 = ((longlong)uVar34 >> 0x18) + (longlong)local_3c0;
              if ((uVar34 & 1) == 0) {
                uVar20 = uVar34;
              }
              local_3d8 = plVar21;
              if (uVar4 == *(ushort *)(uVar20 + 2 + (longlong)iVar23 * 4)) {
                ppuVar32 = (undefined8 **)(ulonglong)(iVar23 + 1);
                goto LAB_1430299c8;
              }
            }
            if ((*(longlong *)((longlong)local_3e8 + uVar11) != 0) &&
               ((*(byte *)((longlong)local_3e8 + uVar11 + 8) & 2) == 0)) goto LAB_1430299c0;
          }
        }
        else {
          iVar23 = *(int *)(puVar10 + 3);
          if (iVar16 < iVar23) {
            puVar7 = (undefined1 *)puVar10[2];
            puVar35 = (undefined1 *)(((longlong)puVar7 >> 0x18) + (longlong)(puVar10 + 2));
            if (((ulonglong)puVar7 & 1) == 0) {
              puVar35 = puVar7;
            }
            puVar36 = (ushort *)(puVar35 + (longlong)iVar16 * 4);
            iVar17 = iVar16;
            do {
              if (uVar4 <= *puVar36) {
                iVar16 = iVar17;
                if (*puVar36 == uVar4) goto LAB_1430299c8;
                break;
              }
              iVar17 = iVar17 + 1;
              puVar36 = puVar36 + 2;
              iVar16 = iVar23;
            } while (iVar23 != iVar17);
          }
          uVar14 = *(uint *)(puVar10 + 5);
          if ((int)(uint)local_3f0 < (int)uVar14) {
            puVar7 = (undefined1 *)*plVar21;
            puVar35 = (undefined1 *)(((longlong)puVar7 >> 0x18) + (longlong)plVar21);
            if (((ulonglong)puVar7 & 1) == 0) {
              puVar35 = puVar7;
            }
            puVar36 = (ushort *)(puVar35 + (longlong)(int)(uint)local_3f0 * 6);
            do {
              if (uVar4 <= *puVar36) {
                local_3d8 = plVar21;
                uVar13 = (uint)local_3f0;
                if (*puVar36 == uVar4) goto LAB_1430299c8;
                break;
              }
              local_3f0._0_4_ = (uint)local_3f0 + 1;
              puVar36 = puVar36 + 3;
              local_3d8 = plVar21;
              uVar13 = uVar14;
            } while (uVar14 != (uint)local_3f0);
          }
LAB_1430299c0:
          local_3f0._0_4_ = uVar13;
          *(undefined8 *)((longlong)local_3e8 + uVar11) = 0;
        }
      }
LAB_1430299c8:
      lVar29 = lVar29 + 1;
    } while (lVar29 != iVar5);
  }
  FUN_140069376(local_3c8);
  puVar1 = local_3e0;
  puVar33 = local_3e8;
  uVar28 = (undefined6)((ulonglong)ppuVar27 >> 0x10);
  uVar24 = (undefined4)CONCAT62(uVar28,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar24 = (undefined4)CONCAT62(uVar28,4);
  }
  puVar18 = (undefined8 *)(*(longlong *)(local_3c8 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar26 = puVar18 + 0x3d;
  if (*(undefined8 **)(local_3c8 + 0x78) < puVar26) {
    FUN_140023dd8(local_3e0,0x1f0);
    puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar26 = puVar18 + 0x3d;
  }
  *local_3e0 = (ulonglong)puVar26;
  local_108 = puVar33;
  uStack_100 = DAT_14ca4c7b0;
  if (DAT_14ca4c7b0 != 0) {
    LOCK();
    *(int *)(DAT_14ca4c7b0 + 8) = *(int *)(DAT_14ca4c7b0 + 8) + 1;
    UNLOCK();
  }
  uStack_f8 = &DAT_14ca4c768;
  local_418 = (ulonglong *)CONCAT71(local_418._1_7_,2);
  FUN_140068f1a(puVar18,&local_a8,&local_108,uVar24);
  lVar9 = local_3c8;
  *puVar18 = &PTR_FUN_14a2f96f0;
  puVar18[0x37] = &DAT_14ca4c768;
  puVar18[0x38] = local_3e8;
  puVar18[0x39] = puVar10;
  puVar18[0x3a] = local_3b8;
  *(int *)(puVar18 + 0x3b) = iVar30 >> 3;
  *(int *)((longlong)puVar18 + 0x1dc) = iVar19 >> 3;
  *(undefined4 *)(puVar18 + 0x3c) = 1;
  iVar5 = *(int *)(local_3c8 + 0x170);
  *(uint *)(local_3c8 + 0x170) = iVar5 + 1U;
  if (*(uint *)(local_3c8 + 0x174) < iVar5 + 1U) {
    FUN_14470e57a(local_3c8 + 0x168,iVar5);
  }
  *(undefined8 **)(*(longlong *)(lVar9 + 0x168) + (longlong)iVar5 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x2c) = *(int *)(lVar9 + 0x170) + -1;
  FUN_140069100(lVar9,puVar18);
  lVar29 = local_3b0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1472e3b02(local_3b0,&local_a8);
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_f8 = (undefined *)0x0;
  uStack_f0 = 0;
  local_108 = *(undefined8 **)(lVar29 + 0x30f8);
  uStack_100 = *(undefined8 *)(lVar29 + 0x3100);
  local_2d8[0] = *(longlong *)(lVar29 + 0x3108) + 0x16f8;
  if (*(longlong *)(lVar29 + 0x3108) == 0) {
    local_2d8[0] = 0;
  }
  local_2f8[0] = param_5 + 0x1008;
  local_348 = *(int *)(DAT_14ca4b900 + 4) != 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_400 = local_2d8;
  local_408 = local_2f8;
  local_410 = (undefined1 **)&local_370;
  local_370 = 1;
  uStack_36c = 1;
  uStack_368 = 0x3f800000;
  uStack_364 = 1;
  local_360 = &DAT_3f8000003f800000;
  local_358 = 0;
  local_354 = 1;
  local_34c = 0x41000000;
  local_344 = 0x3f80000000000001;
  local_318 = 0;
  uStack_310 = 0;
  local_300 = 1;
  local_3a0 = lVar29;
  local_398 = 1;
  local_418 = &local_128;
  local_3f8 = &local_148;
  local_308 = &local_108;
  FUN_14301b42b(lVar9,&local_3a0,param_6,&local_a8);
  puVar10 = local_3a8;
  *local_3a8 = local_148;
  local_3a8[1] = uStack_140;
  FUN_1472e3c00(&local_a8);
  if ((local_60 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar10;
}



// FUNCTION 143029ef4 FUN_143029ef4 body=509 status=ok
// SIG undefined FUN_143029ef4(void)

undefined8 *
FUN_143029ef4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  undefined1 **local_240;
  longlong *local_238;
  longlong *local_230;
  undefined8 *local_228;
  longlong local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined1 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined1 local_198;
  undefined8 local_194;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 *local_158;
  undefined4 local_150;
  longlong local_148 [4];
  longlong local_128 [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  FUN_1472e3b02(param_4,&local_208);
  local_248 = &local_88;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = *param_7;
  local_80 = param_7[1];
  local_158 = &local_e8;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = *(undefined8 *)(param_4 + 0x30f8);
  local_e0 = *(undefined8 *)(param_4 + 0x3100);
  local_1a4 = *(undefined4 *)(DAT_14ca4b948 + 4);
  local_128[0] = *(longlong *)(param_4 + 0x3108) + 0x1508;
  if (*(longlong *)(param_4 + 0x3108) == 0) {
    local_128[0] = 0;
  }
  local_148[0] = param_5 + 0xe18;
  local_198 = *(int *)(DAT_14ca4b978 + 4) != 0;
  local_1a0 = *(undefined4 *)(DAT_14ca4b960 + 4);
  local_228 = &local_108;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_230 = local_128;
  local_238 = local_148;
  local_240 = &local_1c0;
  local_1c0 = &DAT_100000002;
  local_1b8 = 0x3f800000;
  local_1b4 = (undefined4)((ulonglong)param_8 >> 0x20);
  local_1b0 = (undefined4)param_8;
  local_1ac = 0x3f800000;
  local_1a8 = 1;
  local_19c = 0x41000000;
  local_194 = 0x3f80000000000001;
  local_168 = 0;
  uStack_160 = 0;
  local_150 = 1;
  local_210 = 1;
  local_218 = param_4;
  FUN_14301b42b(param_3,&local_218,param_6,&local_208);
  *param_2 = local_108;
  FUN_1472e3c00(&local_208);
  if ((local_60 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14302a0f2 FUN_14302a0f2 body=509 status=ok
// SIG undefined FUN_14302a0f2(void)

undefined8 *
FUN_14302a0f2(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  undefined1 **local_240;
  longlong *local_238;
  longlong *local_230;
  undefined8 *local_228;
  longlong local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined1 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined1 local_198;
  undefined8 local_194;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 *local_158;
  undefined4 local_150;
  longlong local_148 [4];
  longlong local_128 [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  FUN_1472e3b02(param_4,&local_208);
  local_248 = &local_88;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = *param_7;
  local_80 = param_7[1];
  local_158 = &local_e8;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = *(undefined8 *)(param_4 + 0x30f8);
  local_e0 = *(undefined8 *)(param_4 + 0x3100);
  local_1a4 = *(undefined4 *)(DAT_14ca4b948 + 4);
  local_128[0] = *(longlong *)(param_4 + 0x3108) + 0x1548;
  if (*(longlong *)(param_4 + 0x3108) == 0) {
    local_128[0] = 0;
  }
  local_148[0] = param_5 + 0xe58;
  local_198 = *(int *)(DAT_14ca4b978 + 4) != 0;
  local_1a0 = *(undefined4 *)(DAT_14ca4b960 + 4);
  local_228 = &local_108;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_230 = local_128;
  local_238 = local_148;
  local_240 = &local_1c0;
  local_1c0 = &DAT_100000002;
  local_1b8 = 0x3f800000;
  local_1b4 = (undefined4)((ulonglong)param_8 >> 0x20);
  local_1b0 = (undefined4)param_8;
  local_1ac = 0x3f800000;
  local_1a8 = 1;
  local_19c = 0x41000000;
  local_194 = 0x3f80000000000001;
  local_168 = 0;
  uStack_160 = 0;
  local_150 = 1;
  local_210 = 1;
  local_218 = param_4;
  FUN_14301b42b(param_3,&local_218,param_6,&local_208);
  *param_2 = local_108;
  FUN_1472e3c00(&local_208);
  if ((local_60 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14302a2f0 FUN_14302a2f0 body=569 status=ok
// SIG undefined FUN_14302a2f0(void)

undefined8 *
FUN_14302a2f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  undefined1 **local_240;
  longlong *local_238;
  longlong *local_230;
  undefined8 *local_228;
  undefined8 local_220;
  longlong local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 *local_1c0;
  undefined4 local_1b8;
  int local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined1 local_1a8;
  int local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined1 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 *local_158;
  undefined4 local_150;
  longlong local_148 [4];
  longlong local_128 [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_220 = param_3;
  FUN_1472e3b02(param_4,&local_208);
  local_248 = &local_88;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = *param_7;
  local_80 = param_7[1];
  local_158 = &local_e8;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = *(undefined8 *)(param_4 + 0x30f8);
  local_e0 = *(undefined8 *)(param_4 + 0x3100);
  local_1a0 = *(undefined4 *)(DAT_14ca4b9a8 + 4);
  local_19c = *(undefined4 *)(DAT_14ca4b9c0 + 4);
  local_194 = *(undefined4 *)(DAT_14ca4b9f0 + 4);
  local_128[0] = *(longlong *)(param_4 + 0x3108) + 0x1588;
  if (*(longlong *)(param_4 + 0x3108) == 0) {
    local_128[0] = 0;
  }
  local_148[0] = param_5 + 0xe98;
  local_1a4 = 0x38;
  if (*(int *)(DAT_14ca4b990 + 4) < 0x38) {
    local_1a4 = *(int *)(DAT_14ca4b990 + 4);
  }
  if (local_1a4 < 2) {
    local_1a4 = 1;
  }
  local_190 = *(undefined4 *)(DAT_14ca4ba08 + 4);
  local_198 = *(int *)(DAT_14ca4b9d8 + 4) != 0;
  local_228 = &local_108;
  local_f8 = 0;
  uStack_f0 = 0;
  local_1b4 = (int)param_8._4_4_;
  local_108 = 0;
  uStack_100 = 0;
  local_230 = local_128;
  local_238 = local_148;
  local_240 = &local_1c0;
  local_1c0 = &DAT_100000003;
  local_1b8 = 0x3f800000;
  local_1b0 = (undefined4)param_8;
  local_1ac = 0x3f800000;
  local_1a8 = 1;
  local_168 = 0;
  uStack_160 = 0;
  local_150 = 1;
  local_210 = 1;
  local_218 = param_4;
  FUN_14301b42b(local_220,&local_218,param_6,&local_208);
  *param_2 = local_108;
  FUN_1472e3c00(&local_208);
  if ((local_60 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14302a52a FUN_14302a52a body=541 status=ok
// SIG undefined FUN_14302a52a(void)

undefined8 *
FUN_14302a52a(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined1 auStack_248 [32];
  undefined8 *local_228;
  undefined1 **local_220;
  longlong *local_218;
  longlong *local_210;
  undefined8 *local_208;
  longlong local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 *local_1a0;
  undefined4 local_198;
  int local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined1 local_188;
  int local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 *local_138;
  undefined4 local_130;
  longlong local_128 [4];
  longlong local_108 [4];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  FUN_1472e3b02(param_4,&local_1e8);
  local_228 = &local_88;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = *param_7;
  local_80 = param_7[2];
  local_138 = &local_e8;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = *(undefined8 *)(param_4 + 0x30f8);
  local_e0 = *(undefined8 *)(param_4 + 0x3100);
  local_180 = *(undefined4 *)(DAT_14ca4ba38 + 4);
  local_174 = *(undefined4 *)(DAT_14ca4ba68 + 4);
  local_170 = *(undefined4 *)(DAT_14ca4ba80 + 4);
  local_108[0] = *(longlong *)(param_4 + 0x3108) + 0x15e8;
  if (*(longlong *)(param_4 + 0x3108) == 0) {
    local_108[0] = 0;
  }
  local_128[0] = param_5 + 0xef8;
  local_184 = 0x38;
  if (*(int *)(DAT_14ca4ba20 + 4) < 0x38) {
    local_184 = *(int *)(DAT_14ca4ba20 + 4);
  }
  if (local_184 < 2) {
    local_184 = 1;
  }
  local_178 = *(int *)(DAT_14ca4ba50 + 4) != 0;
  param_2[2] = 0;
  param_2[3] = 0;
  local_194 = (int)param_8._4_4_;
  *param_2 = 0;
  param_2[1] = 0;
  local_210 = local_108;
  local_218 = local_128;
  local_220 = &local_1a0;
  local_1a0 = &DAT_100000004;
  local_198 = 0x3f800000;
  local_190 = (undefined4)param_8;
  local_18c = 0x3f800000;
  local_188 = 1;
  local_17c = 0x41000000;
  local_148 = 0;
  uStack_140 = 0;
  local_130 = 1;
  local_1f0 = 1;
  local_208 = param_2;
  local_1f8 = param_4;
  FUN_14301b42b(param_3,&local_1f8,param_6,&local_1e8);
  FUN_1472e3c00(&local_1e8);
  if ((local_60 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14302a748 FUN_14302a748 body=518 status=ok
// SIG undefined FUN_14302a748(void)

undefined8 *
FUN_14302a748(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined8 param_6,undefined8 *param_7,longlong param_8)

{
  int iVar1;
  undefined1 auStack_238 [32];
  undefined8 *local_218;
  undefined8 *local_210;
  longlong *local_208;
  longlong *local_200;
  undefined8 *local_1f8;
  longlong local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  float local_180;
  float local_17c;
  undefined1 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined1 local_168;
  undefined8 local_164;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 *local_128;
  undefined4 local_120;
  longlong local_118 [4];
  longlong local_f8 [4];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  FUN_1472e3b02(param_4,&local_1d8);
  local_218 = &local_78;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = *param_7;
  uStack_70 = param_7[1];
  local_128 = &local_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = *(undefined8 *)(param_4 + 0x30f8);
  local_d0 = *(undefined8 *)(param_4 + 0x3100);
  local_f8[0] = *(longlong *)(param_4 + 0x3108) + 0x15e8;
  if (*(longlong *)(param_4 + 0x3108) == 0) {
    local_f8[0] = 0;
  }
  local_118[0] = param_5 + 0xef8;
  local_168 = *(int *)(DAT_14ca4ba50 + 4) != 0;
  local_174 = *(undefined4 *)(DAT_14ca4ba20 + 4);
  iVar1 = *(int *)(param_8 + 0x18);
  local_184 = *(undefined4 *)(param_8 + 0x1c);
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  local_180 = 1.0 / (float)iVar1;
  local_200 = local_f8;
  local_208 = local_118;
  local_210 = &local_190;
  local_190 = 0x100000005;
  local_188 = 0x3f800000;
  local_178 = 1;
  local_170 = 0x4100000000000000;
  local_164 = 0x3f80000000000001;
  local_138 = 0;
  uStack_130 = 0;
  local_120 = 1;
  local_1e0 = 1;
  local_1f8 = param_2;
  local_1e8 = param_4;
  local_17c = local_180;
  FUN_14301b42b(param_3,&local_1e8,param_6,&local_1d8);
  FUN_1472e3c00(&local_1d8);
  if ((local_50 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14302a950 FUN_14302a950 body=475 status=ok
// SIG undefined FUN_14302a950(void)

undefined8 *
FUN_14302a950(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined1 auStack_238 [32];
  undefined8 *local_218;
  undefined8 *local_210;
  longlong *local_208;
  longlong *local_200;
  undefined8 *local_1f8;
  longlong local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_190;
  undefined4 local_188;
  int local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 local_178;
  undefined8 local_174;
  undefined4 local_16c;
  undefined1 local_168;
  undefined8 local_164;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 *local_128;
  undefined4 local_120;
  longlong local_118 [4];
  longlong local_f8 [4];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  FUN_1472e3b02(param_4,&local_1d8);
  local_218 = &local_78;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = *param_7;
  local_70 = param_7[1];
  local_128 = &local_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = *(undefined8 *)(param_4 + 0x30f8);
  local_d0 = *(undefined8 *)(param_4 + 0x3100);
  local_f8[0] = *(longlong *)(param_4 + 0x3108) + 0x15e8;
  if (*(longlong *)(param_4 + 0x3108) == 0) {
    local_f8[0] = 0;
  }
  local_118[0] = param_5 + 0xef8;
  local_168 = *(int *)(DAT_14ca4ba50 + 4) != 0;
  local_184 = (int)param_8._4_4_;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  local_200 = local_f8;
  local_208 = local_118;
  local_210 = &local_190;
  local_190 = 0x100000006;
  local_188 = 0x3f800000;
  local_180 = (undefined4)param_8;
  local_17c = (undefined4)param_8;
  local_178 = 1;
  local_174 = 8;
  local_16c = 0x41000000;
  local_164 = 0x3f80000000000001;
  local_138 = 0;
  uStack_130 = 0;
  local_120 = 1;
  local_1e0 = 1;
  local_1f8 = param_2;
  local_1e8 = param_4;
  FUN_14301b42b(param_3,&local_1e8,param_6,&local_1d8);
  FUN_1472e3c00(&local_1d8);
  if ((local_50 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14302ab2c FUN_14302ab2c body=29 status=ok
// SIG undefined FUN_14302ab2c(void)

undefined8 FUN_14302ab2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14302ab4a FUN_14302ab4a body=38 status=ok
// SIG undefined FUN_14302ab4a(void)

undefined8 FUN_14302ab4a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14302ab70 FUN_14302ab70 body=1294 status=ok
// SIG undefined FUN_14302ab70(void)

void FUN_14302ab70(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
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
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
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
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
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
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
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
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14302b080 FUN_14302b080 body=31 status=ok
// SIG undefined FUN_14302b080(void)

undefined8 FUN_14302b080(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14302b0a0 FUN_14302b0a0 body=38 status=ok
// SIG undefined FUN_14302b0a0(void)

undefined8 FUN_14302b0a0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14302b0c6 FUN_14302b0c6 body=595 status=ok
// SIG undefined FUN_14302b0c6(void)

void FUN_14302b0c6(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  undefined1 local_98 [64];
  undefined1 *local_58;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = local_a0;
  if ((longlong)local_a0 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar11 = local_b0;
    if (local_a8 != (undefined1 *)0x0) {
      puVar11 = local_a8;
    }
    FUN_1446fe144(puVar12 + 2,local_a0,0);
    puVar6 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar6 = puVar12 + 2;
    }
    memcpy(puVar6,puVar11,(longlong)local_a0);
  }
  puVar12[0xd] = 0;
  *(int *)(puVar12 + 0xe) = local_50;
  if ((longlong)local_50 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    puVar11 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar11 = local_98;
    }
    FUN_1446fe1b8(puVar12 + 5,local_50,0);
    puVar6 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar6 = puVar12 + 5;
    }
    memcpy(puVar6,puVar11,(longlong)local_50 << 3);
  }
  *(undefined4 *)(puVar12 + 0xf) = local_48;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = uStack_44;
  *(undefined4 *)(puVar12 + 0x10) = uStack_40;
  *(undefined4 *)((longlong)puVar12 + 0x84) = uStack_3c;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8(local_58);
  }
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  lVar4 = *(longlong *)(param_1 + 0x1b8);
  if (*(int *)(param_1 + 0x1c8) == 1) {
    lVar5 = *(longlong *)(**(longlong **)(param_1 + 0x1c0) + 0x10);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    lVar10 = *(longlong *)(lVar4 + 0x28);
    *(longlong *)(lVar4 + 0x28) = lVar5;
  }
  else {
    lVar5 = *(longlong *)((*(longlong **)(param_1 + 0x1c0))[2] + 0x10);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    lVar10 = *(longlong *)(lVar4 + 0x30);
    *(longlong *)(lVar4 + 0x30) = lVar5;
  }
  if (lVar10 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar10 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      LOCK();
      puVar1 = (uint *)(lVar10 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar10 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar10;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar13 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar13) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar13 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar13) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar13);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14302b31a FUN_14302b31a body=31 status=ok
// SIG undefined FUN_14302b31a(void)

undefined8 FUN_14302b31a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14302b33a FUN_14302b33a body=31 status=ok
// SIG undefined FUN_14302b33a(void)

undefined8 FUN_14302b33a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14302b35a FUN_14302b35a body=547 status=ok
// SIG undefined FUN_14302b35a(void)

longlong * FUN_14302b35a(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 14302b57e FUN_14302b57e body=1481 status=ok
// SIG undefined FUN_14302b57e(void)

void FUN_14302b57e(longlong param_1)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *lpTlsValue;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong *plVar18;
  int iVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_a8 [40];
  ulonglong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = *(longlong *)(param_1 + 0xa8);
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar19 = *piVar1;
  if (iVar19 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar19 = *piVar1;
  }
  if ((iVar19 == 0x60000000) || (iVar19 == 0)) {
    *piVar1 = 0x40000010;
  }
  local_78 = 0;
  uStack_70 = 0;
  FUN_14300947e(lVar5);
  lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x58);
  if (lVar5 != 0) {
    if ((int)uStack_70 == 0) {
      LOCK();
      piVar3 = (int *)(lVar5 + 200);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if ((*piVar3 == 0) && (pcVar7 = *(code **)(lVar5 + 0x50), pcVar7 != (code *)0x0)) {
        plVar18 = (longlong *)(lVar5 + 0x70);
        if (*(longlong **)(lVar5 + 0x60) != (longlong *)0x0) {
          plVar18 = *(longlong **)(lVar5 + 0x60);
        }
        uVar11 = (**(code **)(*plVar18 + 8))(plVar18);
        (*pcVar7)(uVar11);
      }
    }
    else {
      pcVar2 = (char *)(lVar5 + 0x90);
      LOCK();
      bVar21 = *(char *)(lVar5 + 0x90) == '\0';
      if (bVar21) {
        *(char *)(lVar5 + 0x90) = '\x01';
      }
      UNLOCK();
      if (!bVar21) {
        FUN_1447d2058(pcVar2);
      }
      iVar9 = *(int *)(lVar5 + 0xa0);
      *(uint *)(lVar5 + 0xa0) = iVar9 + 1U;
      if (*(uint *)(lVar5 + 0xa4) < iVar9 + 1U) {
        FUN_144ab8188((longlong *)(lVar5 + 0x98),iVar9);
      }
      lVar6 = *(longlong *)(lVar5 + 0x98);
      lVar15 = (longlong)iVar9 * 0x10;
      *(undefined8 *)(lVar6 + lVar15) = local_78;
      local_78 = 0;
      *(int *)(lVar6 + 8 + lVar15) = (int)uStack_70;
      *(undefined4 *)(lVar6 + 0xc + lVar15) = uStack_70._4_4_;
      uStack_70 = 0;
      LOCK();
      cVar4 = *pcVar2;
      if (cVar4 == '\x01') {
        *pcVar2 = '\0';
      }
      UNLOCK();
      if (cVar4 != '\x01') {
        FUN_14008cdb0(pcVar2);
      }
      if (iVar9 == 0) {
        uVar10 = FUN_14480154e(lVar5 + 0xa8);
        lpTlsValue = TlsGetValue(DAT_14c896140);
        if (lpTlsValue == (undefined8 *)0x0) {
          lpTlsValue = (undefined8 *)FUN_14001cc68(0x18,0x10);
          *lpTlsValue = 0;
          lpTlsValue[1] = 0;
          *(undefined4 *)(lpTlsValue + 2) = 0;
          TlsSetValue(DAT_14c896140,lpTlsValue);
        }
        puVar13 = (undefined8 *)lpTlsValue[1];
        if (puVar13 == (undefined8 *)0x0) {
          puVar13 = (undefined8 *)*lpTlsValue;
          if (puVar13 == (undefined8 *)0x0) {
            uVar17 = (uint)DAT_14c896180;
            uVar8 = DAT_14c896180;
            while (DAT_14c896180 = uVar8, local_68 = uVar8, (uVar8 & 0x3ffffff) != 0) {
              local_80 = (uVar8 & 0xfffffffffc000000) + 0x4000000;
              if (local_80 >> 0x1a < uVar8 >> 0x1a) {
                FUN_14000f986(0x3a83126f);
              }
              uVar16 = (ulonglong)((uVar17 & 0x3ffffff) >> 0xe);
              uVar20 = (ulonglong)((uint)uVar8 & 0x3fff);
              local_80 = local_80 & 0xfffffffffc000000 |
                         (ulonglong)
                         *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar16 * 8) + 0x10 + uVar20 * 0x18
                                  );
              LOCK();
              bVar21 = local_68 == DAT_14c896180;
              uVar8 = local_80;
              if (!bVar21) {
                uVar8 = DAT_14c896180;
              }
              DAT_14c896180 = uVar8;
              UNLOCK();
              if (bVar21) {
                *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar16 * 8) + uVar20 * 0x18 + 0x10) =
                     0;
                puVar13 = *(undefined8 **)
                           (*(longlong *)(&DAT_14c833b00 + uVar16 * 8) + 8 +
                           (ulonglong)(uVar17 & 0x3fff) * 0x18);
                FUN_1447d080c(uVar17 & 0x3ffffff);
                lpTlsValue[1] = puVar13;
                if (puVar13 != (undefined8 *)0x0) goto LAB_14302b93d;
                goto LAB_14302bafe;
              }
              uVar17 = (uint)DAT_14c896180;
              uVar8 = DAT_14c896180;
            }
            lpTlsValue[1] = 0;
LAB_14302bafe:
            puVar13 = (undefined8 *)FUN_14001cc68(0x10000,0);
            lpTlsValue[1] = puVar13;
            iVar9 = 0xff;
            puVar14 = puVar13;
            do {
              puVar12 = puVar14 + 0x20;
              *puVar14 = puVar12;
              iVar9 = iVar9 + -1;
              puVar14 = puVar12;
            } while (iVar9 != 0);
          }
          else {
            lpTlsValue[1] = puVar13;
            puVar12 = lpTlsValue;
          }
          *puVar12 = 0;
LAB_14302b93d:
          *(undefined4 *)(lpTlsValue + 2) = 0x100;
          iVar9 = 0xff;
        }
        else {
          iVar9 = *(int *)(lpTlsValue + 2) + -1;
        }
        lpTlsValue[1] = *puVar13;
        *(int *)(lpTlsValue + 2) = iVar9;
        *puVar13 = UE::Tasks::Private::FTaskBase::vftable;
        puVar13[1] = &DAT_100000002;
        puVar13[2] = 0;
        *(undefined4 *)(puVar13 + 3) = 0;
        *(undefined4 *)(puVar13 + 4) = 0xffffffff;
        puVar13[6] = 0;
        puVar13[7] = 0x100000000;
        *(undefined1 *)(puVar13 + 8) = 1;
        puVar13[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateDummy::vftable;
        puVar13[0xf] = 0;
        puVar13[0x10] = 0xe800000000000020;
        puVar13[0x12] = 0;
        puVar13[0x13] = 0x100000000;
        *(undefined2 *)(puVar13 + 0x14) = 0;
        LOCK();
        bVar21 = *(char *)(puVar13 + 8) == '\x01';
        if (bVar21) {
          *(char *)(puVar13 + 8) = '\0';
        }
        UNLOCK();
        if (!bVar21) {
          FUN_14008cdb0(puVar13 + 8);
        }
        *puVar13 = &PTR_FUN_14a2f9800;
        if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
        }
        puVar13[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar13[9] = puVar13;
        puVar13[10] = puVar13;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar13[0xf] = uVar11;
        puVar13[0x10] = (uVar10 & 0x1fffffffffffff) << 6 | 0xc800000000000000;
        *(undefined4 *)((longlong)puVar13 + 0x1c) = 0;
        puVar13[0x15] = lVar5;
        *puVar13 = &PTR_FUN_14a2f97f0;
        LOCK();
        *(longlong *)(lVar5 + 0xb0) = *(longlong *)(lVar5 + 0xb0) + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)puVar13 + 0xc) = *(int *)((longlong)puVar13 + 0xc) + 1;
        UNLOCK();
        puVar13[2] = lVar5 + 0xa8;
        FUN_1400e88c2(puVar13,lVar5);
        local_68 = CONCAT71(local_68._1_7_,1);
        FUN_1447439e4(puVar13);
        if (puVar13 != (undefined8 *)0x0) {
          LOCK();
          piVar3 = (int *)(puVar13 + 1);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)*puVar13)(puVar13,1);
          }
        }
      }
    }
  }
  FUN_14008dfdc(&local_78);
  if ((iVar19 == 0x60000000) || (iVar19 == 0)) {
    *piVar1 = iVar19;
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14302bb48 FUN_14302bb48 body=110 status=ok
// SIG undefined FUN_14302bb48(void)

undefined8 * FUN_14302bb48(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14302bbb6 FUN_14302bbb6 body=188 status=ok
// SIG undefined FUN_14302bbb6(void)

void FUN_14302bbb6(longlong *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *param_2;
  lVar3 = *param_1;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar4 = *piVar1;
  if (iVar4 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar4 = *piVar1;
  }
  if ((iVar4 == 0x60000000) || (iVar4 == 0)) {
    *piVar1 = 0x40000010;
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_14300947e(*(undefined8 *)(*(longlong *)(lVar3 + 0x80) + (longlong)iVar2 * 8),&local_48);
  FUN_14008dfdc(&local_48);
  if ((iVar4 == 0x60000000) || (iVar4 == 0)) {
    *piVar1 = iVar4;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14302bc74 FUN_14302bc74 body=99 status=ok
// SIG undefined FUN_14302bc74(void)

void FUN_14302bc74(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14302bcd8 FUN_14302bcd8 body=450 status=ok
// SIG undefined FUN_14302bcd8(void)

void FUN_14302bcd8(undefined8 *param_1,uint param_2)

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
LAB_14302bdf3:
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
LAB_14302be30:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14302bd2e;
LAB_14302bd23:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14302bd2e:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x00014302bd5a;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14302bdb0:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14302be30;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14302bdf3;
code_r0x00014302bd5a:
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
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14302bdb0;
    }
  }
  goto LAB_14302bd23;
}



// FUNCTION 14302be9a FUN_14302be9a body=547 status=ok
// SIG undefined FUN_14302be9a(void)

longlong * FUN_14302be9a(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 14302c0be FUN_14302c0be body=5573 status=ok
// SIG undefined FUN_14302c0be(void)

/* WARNING: Removing unreachable block (ram,0x00014302c911) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14302c0be(longlong param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong *plVar6;
  double dVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  uint *puVar19;
  longlong *plVar20;
  undefined8 uVar21;
  byte bVar22;
  uint uVar23;
  longlong *plVar24;
  uint uVar25;
  int iVar26;
  longlong *plVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  int iVar32;
  ulonglong uVar33;
  int iVar34;
  undefined8 *puVar35;
  ulonglong uVar36;
  byte bVar37;
  ulonglong uVar38;
  ulonglong unaff_R14;
  ulonglong uVar39;
  undefined7 uVar40;
  byte bVar41;
  bool bVar42;
  bool bVar43;
  float fVar44;
  undefined1 auStack_228 [32];
  int local_208;
  ulonglong local_200;
  byte local_1f3;
  byte local_1f2;
  byte local_1f1;
  ulonglong local_1f0;
  int local_1e4;
  ulonglong local_1e0;
  int local_1d8;
  int local_1d4;
  uint local_1d0;
  int local_1cc;
  ulonglong local_1c8;
  uint local_1bc;
  ulonglong local_1b8;
  undefined8 *local_1b0;
  int local_1a4;
  int local_1a0;
  uint local_19c;
  longlong *local_198;
  longlong *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  ulonglong local_170;
  longlong local_168;
  longlong local_160;
  ulonglong local_158;
  int *local_150;
  longlong *local_148;
  ulonglong local_140;
  longlong *local_138;
  ulonglong local_130;
  longlong local_128;
  undefined8 uStack_120;
  uint local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  plVar6 = *(longlong **)(param_1 + 0xa8);
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_1a4 = *piVar1;
  if (local_1a4 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    local_1a4 = *piVar1;
  }
  if ((local_1a4 == 0x60000000) || (local_1a4 == 0)) {
    *piVar1 = 0x40000010;
  }
  local_128 = 0;
  uStack_120 = 0;
  iVar34 = (int)plVar6[0x13];
  if (iVar34 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar34);
  }
  local_1cc = 0;
  local_150 = piVar1;
  if (iVar34 == 0) {
    local_1d8 = 0;
  }
  else {
    FUN_1447a0e40(&local_128);
    local_1a0 = (int)plVar6[0x13];
    local_1d8 = 0;
    if (local_1a0 != 0) {
      plVar20 = (longlong *)plVar6[0x11];
      local_180 = plVar6 + 0x14;
      local_1b0 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xea8);
      local_188 = plVar6 + 0x1d;
      local_178 = plVar6 + 0x17;
      local_190 = plVar6 + 0x1b;
      local_198 = plVar6 + 0x19;
      local_1cc = 0;
      local_1d8 = 0;
      uVar38 = 0;
      iVar34 = 0;
      do {
        local_1d4 = (int)uVar38;
        uVar15 = *(uint *)(*plVar20 + uVar38 * 4);
        local_1c8 = (ulonglong)uVar15;
        lVar17 = plVar6[8];
        uVar38 = (ulonglong)(int)uVar15;
        bVar37 = *(byte *)(*(longlong *)(lVar17 + 0x33b0) + uVar38);
        local_1e4 = iVar34;
        local_140 = uVar38;
        local_138 = plVar20;
        if (((bVar37 & 0x10) == 0) || (*(char *)(plVar6[9] + 0xf) != '\x01')) {
          uVar39 = 1;
          plVar20 = (longlong *)0x0;
          local_1b8 = 0;
          uVar31 = 0;
LAB_14302c2de:
          uVar36 = (ulonglong)*(uint *)(*(longlong *)(lVar17 + 0x33d8) + uVar38 * 4);
          uVar15 = (uint)local_1c8;
          uVar25 = uVar15 + 0x1f;
          uVar23 = uVar15 + 0x3ff;
          if (-1 < (int)uVar15) {
            uVar25 = uVar15;
            uVar23 = uVar15;
          }
          local_168 = (longlong)((int)uVar23 >> 10);
          local_1bc = 1 << ((byte)local_1c8 & 0x1f);
          local_170 = (ulonglong)(int)(uVar15 - (uVar23 & 0xfffffc00));
          local_1f3 = (bVar37 & 4) == 0 | (byte)uVar31;
          bVar37 = (byte)local_1c8 & 0x1f;
          local_19c = -2 << bVar37 | 0xfffffffeU >> 0x20 - bVar37;
          local_160 = (longlong)((int)uVar25 >> 5);
          uVar15 = 1;
          uVar33 = 0;
          local_158 = uVar39;
LAB_14302c371:
          bVar37 = 1;
          bVar41 = 1;
          local_1d0 = uVar15;
          local_130 = uVar33;
          do {
            plVar18 = (longlong *)plVar6[6];
            uVar39 = uVar33 << 0x20 | uVar36;
            local_1f2 = bVar41;
            local_1f1 = bVar37;
            if ((int)plVar18[1] != *(int *)((longlong)plVar18 + 0x34)) {
              plVar27 = plVar18 + 7;
              if ((longlong *)plVar18[8] != (longlong *)0x0) {
                plVar27 = (longlong *)plVar18[8];
              }
              iVar34 = *(int *)((longlong)plVar27 +
                               (ulonglong)
                               ((int)plVar18[9] - 1U &
                               ((uint)(uVar33 >> 0x14) & 0xfff ^ (uint)uVar36)) * 4);
              if (iVar34 != -1) {
                lVar17 = *plVar18;
LAB_14302c3d0:
                lVar28 = (longlong)iVar34 * 0x68;
                lVar16 = lVar17 + lVar28;
                if (CONCAT44(*(undefined4 *)(lVar17 + 0x50 + lVar28),
                             *(undefined4 *)(lVar17 + lVar28)) != uVar39) goto code_r0x00014302c3f3;
                if (lVar16 != 0) {
                  uVar15 = *(uint *)(plVar6[1] + 0x125b0);
                  uVar30 = (ulonglong)uVar15;
                  local_200 = uVar36;
                  local_1f0 = uVar33;
                  local_1e0 = uVar31;
                  if ((uVar15 & 0x10) != 0) {
                    bVar37 = (byte)uVar15 >> 5 & 1;
                    uVar38 = 0;
                    goto LAB_14302c5ec;
                  }
                  if ((char)plVar6[0xf] == '\x01') {
                    local_118 = (uint)uVar36;
                    uStack_114 = (int)uVar33;
                    uVar15 = FUN_1472e782a(plVar6[5],&local_118);
                    uVar38 = (ulonglong)uVar15;
LAB_14302ce95:
                    bVar37 = 1;
                  }
                  else {
                    piVar1 = (int *)plVar6[9];
                    if (*(char *)((longlong)piVar1 + 0xd) == '\x01') {
                      cVar14 = FUN_1472d9f68(plVar6[4],*(undefined4 *)(lVar16 + 0x38));
                      if (cVar14 != '\0') {
                        uVar15 = FUN_1472da286(plVar6[4],*(undefined4 *)(lVar16 + 0x40));
                        uVar38 = (ulonglong)uVar15 ^ 1;
                        goto LAB_14302ce95;
                      }
                      uVar38 = 0;
                      bVar37 = 0;
                    }
                    else {
                      local_118 = 0;
                      uStack_114 = 0;
                      iVar34 = *piVar1;
                      uVar15 = piVar1[1];
                      iVar32 = (int)plVar6[0xd];
                      if (*(char *)(lVar16 + 0x59) == '\x01') {
                        if ((int)uVar15 < 1) goto LAB_14302ccf3;
                        uVar23 = 0xffffffff;
                        uVar36 = 0;
                        uVar31 = 0xffffffff;
                        do {
                          uVar25 = *(uint *)(lVar17 + lVar28 + 0x28 + uVar36 * 4);
                          uVar38 = (ulonglong)(iVar32 - uVar25 & 0xffffff00);
                          uVar30 = CONCAT71((int7)(uVar30 >> 8),uVar25 < uVar23);
                          if (((int)(iVar32 - uVar25) <= iVar34 &&
                              *(longlong *)(lVar17 + lVar28 + 8 + uVar36 * 8) != 0) &&
                              uVar25 < uVar23) {
                            uVar31 = uVar36 & 0xffffffff;
                            uVar23 = uVar25;
                          }
                          iVar26 = (int)uVar31;
                          uVar36 = uVar36 + 1;
                        } while (uVar15 != uVar36);
                      }
                      else {
                        iVar26 = iVar32 % (int)uVar15;
                      }
                      if (iVar26 == -1) {
LAB_14302ccf3:
                        if (((int)uVar15 < 2) && (DAT_14ca84e10 == 0x7fffffff)) {
                          uVar38 = CONCAT71((int7)(uVar38 >> 8),
                                            *(float *)(lVar16 + 0x44) +
                                            *(float *)(DAT_14cb0d2b0 + 0xd8c) <
                                            *(float *)(plVar6 + 0xe));
                          bVar37 = 1;
                        }
                        else {
                          uVar38 = CONCAT71((int7)(uVar30 >> 8),*(byte *)(lVar16 + 0x54) >> 6) &
                                   0xffffffffffffff01;
                          bVar37 = *(byte *)(lVar16 + 0x54) >> 7;
                        }
                        if ((char)uVar38 == '\0') {
                          *(undefined4 *)(lVar16 + 0x4c) = *(undefined4 *)(DAT_14cb0d2b0 + 0xd90);
                        }
                        else {
                          *(undefined4 *)(lVar16 + 0x4c) = 0;
                        }
                      }
                      else {
                        lVar28 = (longlong)iVar26;
                        lVar17 = *(longlong *)(lVar16 + 8 + lVar28 * 8);
                        if ((lVar17 == 0) ||
                           (iVar34 < iVar32 - *(int *)(lVar16 + 0x28 + lVar28 * 4)))
                        goto LAB_14302ccf3;
                        bVar41 = *(byte *)(lVar16 + 0x55 + lVar28);
                        if (*(code **)(*DAT_14ca83900 + 0x2b8) == FUN_144801764) {
                          if (DAT_14c760da4 < 2) {
                            lVar17 = *(longlong *)(lVar17 + 0x20);
                            lVar28 = *(longlong *)(lVar17 + 0x68);
                            if (lVar28 == 0) goto LAB_14302d0b2;
LAB_14302c9f6:
                            if (((*(byte *)(*(longlong *)(lVar28 + 0x28) + 0xa0) & 1) == 0) &&
                               ((*(byte *)(*(longlong *)(*(longlong *)(lVar17 + 0x68) + 0x28) + 0xa0
                                          ) & 1) == 0)) {
                              FUN_1402df4ac(DAT_14ca77418,
                                            *(undefined8 *)(*(longlong *)(lVar17 + 0x68) + 0x28));
                            }
                            puVar19 = *(uint **)(lVar17 + 0x70);
                            goto LAB_14302ca0b;
                          }
                          uVar15 = *(uint *)(lVar17 + 0x18);
                          if (uVar15 == 0) {
                            uVar23 = 0x20;
                          }
                          else {
                            uVar23 = 0;
                            if (uVar15 != 0) {
                              for (; (uVar15 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                              }
                            }
                          }
                          lVar17 = *(longlong *)(lVar17 + 0x20 + (ulonglong)uVar23 * 8);
                          lVar28 = *(longlong *)(lVar17 + 0x68);
                          if (lVar28 != 0) goto LAB_14302c9f6;
                          bVar37 = (byte)uVar23 & 0x1f;
                          uVar15 = uVar15 & (-2 << bVar37 | 0xfffffffeU >> 0x20 - bVar37);
                          if (uVar15 == 0) {
LAB_14302d0b2:
                            uVar38 = 0;
                            bVar37 = 0;
                          }
                          else {
                            uVar23 = 0;
                            if (uVar15 != 0) {
                              for (; (uVar15 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                              }
                            }
                            lVar17 = *(longlong *)(lVar17 + 0x20 + (ulonglong)uVar23 * 8);
                            if (lVar17 == 0) goto LAB_14302d0b2;
                            uVar21 = CONCAT44(uVar23,uVar15);
                            do {
                              lVar28 = *(longlong *)(lVar17 + 0x68);
                              if (lVar28 != 0) goto LAB_14302c9f6;
                              bVar37 = (byte)((ulonglong)uVar21 >> 0x20) & 0x1f;
                              uVar15 = (uint)uVar21 & (-2 << bVar37 | 0xfffffffeU >> 0x20 - bVar37);
                              if (uVar15 == 0) goto LAB_14302d0b2;
                              uVar23 = 0;
                              if (uVar15 != 0) {
                                for (; (uVar15 >> uVar23 & 1) == 0; uVar23 = uVar23 + 1) {
                                }
                              }
                              lVar17 = *(longlong *)(lVar17 + 0x20 + (ulonglong)uVar23 * 8);
                              uVar21 = CONCAT44(uVar23,uVar15);
                              uVar38 = 0;
                              bVar37 = 0;
                            } while (lVar17 != 0);
                          }
                        }
                        else {
                          local_208 = -1;
                          puVar19 = &local_118;
                          cVar14 = (**(code **)(*DAT_14ca83900 + 0x2b8))
                                             (DAT_14ca83900,lVar17,puVar19,
                                              CONCAT71((uint7)(uint3)((uint)iVar34 >> 8),1));
                          if (cVar14 == '\0') goto LAB_14302d0b2;
LAB_14302ca0b:
                          uVar15 = *puVar19;
                          fVar44 = 0.0;
                          uVar38 = CONCAT71((int7)(uVar38 >> 8),uVar15 == 0);
                          if (uVar15 != 0) {
                            fVar44 = (float)uVar15 * *(float *)(plVar6[1] + 0x137d0);
                          }
                          *(float *)(lVar16 + 0x4c) = fVar44;
                          bVar37 = bVar41 ^ 1;
                        }
                        local_1cc = local_1cc + 1;
                      }
                    }
                  }
                  uVar33 = local_1f0;
                  uVar31 = local_1e0;
                  uVar36 = local_200;
                  if ((DAT_14ca4b410 != 0) && ((char)uVar38 != '\0')) {
                    plVar18 = plVar20;
                    uVar31 = local_1f0;
                    if ((char)local_1e0 == '\0') {
                      plVar18 = *(longlong **)(*(longlong *)(plVar6[8] + 0x33c0) + local_168 * 8);
                      uVar31 = local_170;
                    }
                    lVar17 = *plVar18;
                    lVar28 = uVar31 * 0x38;
                    dVar11 = *(double *)(lVar17 + 0x10 + lVar28);
                    dVar7 = *(double *)(lVar17 + 0x28 + lVar28);
                    dVar9 = *(double *)(lVar17 + lVar28);
                    dVar10 = *(double *)(lVar17 + 8 + lVar28);
                    dVar12 = *(double *)(lVar17 + 0x20 + lVar28);
                    dVar4 = *(double *)(lVar17 + 0x18 + lVar28);
                    iVar34 = (int)plVar6[0x1e];
                    *(uint *)(plVar6 + 0x1e) = iVar34 + 1U;
                    if (*(uint *)((longlong)plVar6 + 0xf4) < iVar34 + 1U) {
                      FUN_1472e7942(local_188,iVar34);
                    }
                    lVar17 = *local_188;
                    lVar28 = (longlong)iVar34 * 0x38;
                    *(double *)(lVar17 + lVar28) = dVar9 - dVar4;
                    *(double *)(lVar17 + 8 + lVar28) = dVar10 - dVar12;
                    *(double *)(lVar17 + 0x10 + lVar28) = dVar11 - dVar7;
                    *(double *)(lVar17 + 0x18 + lVar28) = dVar9 + dVar4;
                    *(double *)(lVar17 + 0x20 + lVar28) = dVar10 + dVar12;
                    *(double *)(lVar17 + 0x28 + lVar28) = dVar11 + dVar7;
                    *(undefined1 *)(lVar17 + 0x30 + lVar28) = 1;
                    uVar33 = local_1f0;
                    uVar31 = local_1e0;
                    uVar36 = local_200;
                  }
                  goto LAB_14302c5ec;
                }
              }
            }
LAB_14302c3fb:
            uStack_104 = 0;
            uStack_100 = 0;
            uStack_fc = 0;
            uStack_f8 = 0;
            uStack_114 = 0;
            uStack_110 = 0;
            uStack_10c = 0;
            uStack_108 = 0;
            iVar34 = (int)plVar6[0x15];
            iVar32 = (int)plVar6[0x16];
            iVar26 = (iVar32 + 10) / 10;
            *(int *)(plVar6 + 0x16) = iVar32 + 1;
            if (iVar34 < iVar26) {
              do {
                local_148 = plVar20;
                local_1e0 = uVar31;
                local_200 = uVar36;
                lVar16 = FUN_14001cc68(0x3c0,0x10);
                lVar28 = 0;
                lVar17 = lVar16;
                do {
                  *(undefined4 *)(lVar16 + lVar28) = 0;
                  *(undefined8 *)(lVar16 + 0x38 + lVar28) = 0xffffffffffffffff;
                  *(undefined1 *)(lVar16 + 0x59 + lVar28) = 0;
                  puVar35 = (undefined8 *)(lVar16 + 0x40 + lVar28);
                  *puVar35 = 0;
                  puVar35[1] = 0;
                  *(undefined8 *)(lVar16 + 0x4d + lVar28) = 0;
                  lVar29 = -4;
                  do {
                    *(undefined8 *)(lVar17 + 0x28 + lVar29 * 8) = 0;
                    *(undefined4 *)(lVar17 + 0x38 + lVar29 * 4) = 0;
                    *(undefined1 *)(lVar17 + 0x59 + lVar29) = 0;
                    lVar29 = lVar29 + 1;
                  } while (lVar29 != 0);
                  lVar28 = lVar28 + 0x60;
                  lVar17 = lVar17 + 0x60;
                } while (lVar28 != 0x3c0);
                iVar5 = (int)plVar6[0x15];
                *(uint *)(plVar6 + 0x15) = iVar5 + 1U;
                if (*(uint *)((longlong)plVar6 + 0xac) < iVar5 + 1U) {
                  FUN_144800bbe(local_180,iVar5);
                }
                *(longlong *)(*local_180 + (longlong)iVar5 * 8) = lVar16;
                iVar34 = iVar34 + 1;
                uVar31 = local_1e0;
                uVar36 = local_200;
                plVar20 = local_148;
              } while (iVar34 != iVar26);
            }
            lVar17 = *(longlong *)(plVar6[0x14] + (longlong)(iVar32 / 10) * 8);
            lVar16 = (ulonglong)(uint)(iVar32 % 10) * 0x60;
            *(int *)(lVar17 + lVar16) = (int)uVar36;
            puVar35 = (undefined8 *)(lVar17 + 4 + lVar16);
            *puVar35 = CONCAT44(uStack_114,local_118);
            puVar35[1] = CONCAT44(uStack_10c,uStack_110);
            puVar35 = (undefined8 *)(lVar17 + 0x14 + lVar16);
            *puVar35 = CONCAT44(uStack_104,uStack_108);
            puVar35[1] = CONCAT44(uStack_fc,uStack_100);
            *(undefined4 *)(lVar17 + 0x24 + lVar16) = uStack_f8;
            puVar35 = (undefined8 *)(lVar17 + 0x28 + lVar16);
            *puVar35 = 0;
            puVar35[1] = 0;
            *(undefined8 *)(lVar17 + 0x38 + lVar16) = 0xffffffffffffffff;
            puVar35 = (undefined8 *)(lVar17 + 0x40 + lVar16);
            *puVar35 = 0;
            puVar35[1] = 0;
            *(int *)(lVar17 + 0x50 + lVar16) = (int)uVar33;
            uVar38 = 0;
            *(undefined1 *)(lVar17 + 0x54 + lVar16) = 0;
            *(undefined4 *)(lVar17 + 0x55 + lVar16) = 0;
            *(undefined1 *)(lVar17 + 0x59 + lVar16) = 0;
            iVar34 = ((int)plVar6[0x16] + -1) / 10;
            lVar16 = (ulonglong)(((int)plVar6[0x16] + iVar34 * -10) - 1) * 0x60 +
                     *(longlong *)(plVar6[0x14] + (longlong)iVar34 * 8);
            bVar37 = 0;
LAB_14302c5ec:
            if (*(char *)(plVar6[9] + 0xc) == '\x01') {
              if (*(char *)((longlong)plVar6 + 0x79) == '\x01') {
                bVar41 = *(byte *)(lVar16 + 0x54);
                if ((bVar41 & 0x3f) == 0) {
                  if (DAT_14c7609dc < (uint)((int)plVar6[0xd] - *(int *)(lVar16 + 0x3c))) {
                    bVar22 = DAT_14c7609e0 & 0x3f;
                    bVar41 = bVar41 | bVar22;
                    *(byte *)(lVar16 + 0x54) = bVar41;
                    if (bVar22 != 0) goto LAB_14302ca40;
                  }
                  bVar42 = false;
                }
                else {
LAB_14302ca40:
                  *(byte *)(lVar16 + 0x54) = bVar41 & 0xc0 | bVar41 - 1 & 0x3f;
                  bVar42 = true;
                }
              }
              else {
                bVar42 = false;
              }
              plVar18 = plVar20;
              uVar30 = uVar33;
              if ((char)uVar31 == '\0') {
                plVar18 = *(longlong **)(*(longlong *)(plVar6[8] + 0x33c0) + local_168 * 8);
                uVar30 = local_170;
              }
              lVar17 = *plVar18;
              if (bVar42) {
                dVar11 = (double)DAT_14ca4b4c0;
              }
              else {
                dVar11 = 0.0;
              }
              lVar28 = uVar30 * 0x38;
              dVar11 = (double)_DAT_14ca4b4d8 + dVar11;
              dVar9 = *(double *)(lVar17 + 0x30 + lVar28) + dVar11;
              dVar10 = *(double *)(lVar17 + 0x28 + lVar28) + dVar11;
              dVar12 = *(double *)(lVar17 + 0x20 + lVar28) + dVar11;
              dVar11 = dVar11 + *(double *)(lVar17 + 0x18 + lVar28);
              dVar4 = *(double *)(lVar17 + lVar28);
              dVar13 = ((double *)(lVar17 + lVar28))[1];
              local_118 = SUB84(dVar4,0);
              uStack_114 = (undefined4)((ulonglong)dVar4 >> 0x20);
              uStack_110 = SUB84(dVar13,0);
              uStack_10c = (undefined4)((ulonglong)dVar13 >> 0x20);
              dVar7 = *(double *)(lVar17 + 0x10 + lVar28);
              uStack_108 = SUB84(dVar7,0);
              uStack_104 = (undefined4)((ulonglong)dVar7 >> 0x20);
              if ((dVar7 - (double)plVar6[0xc]) * (dVar7 - (double)plVar6[0xc]) +
                  (dVar13 - (double)plVar6[0xb]) * (dVar13 - (double)plVar6[0xb]) +
                  (dVar4 - (double)plVar6[10]) * (dVar4 - (double)plVar6[10]) <
                  (double)*(float *)((longlong)plVar6 + 0x74)) {
LAB_14302cbf8:
                uVar38 = 0;
                bVar37 = 1;
              }
              else {
                lVar17 = plVar6[1];
                if (*(char *)(lVar17 + 0x2140) == '\x01') {
                  if (-(ABS(*(double *)(lVar17 + 0x2160) * dVar10) +
                       ABS(*(double *)(lVar17 + 0x2158) * dVar12) +
                       ABS(dVar11 * *(double *)(lVar17 + 0x2150))) <=
                      (*(double *)(lVar17 + 0x2160) * dVar7 +
                      *(double *)(lVar17 + 0x2150) * dVar4 + dVar13 * *(double *)(lVar17 + 0x2158))
                      - *(double *)(lVar17 + 0x2168)) goto LAB_14302cbf8;
                }
                else {
                  if (1.0 < *(double *)(lVar17 + 0x8a8) || *(double *)(lVar17 + 0x8a8) == 1.0) {
                    dVar9 = (dVar7 * *(double *)(lVar17 + 0xb00) +
                             dVar13 * *(double *)(lVar17 + 0xae0) +
                             dVar4 * *(double *)(lVar17 + 0xac0) + *(double *)(lVar17 + 0xb20)) -
                            dVar9 * *(double *)(lVar17 + 0x880);
                    bVar42 = dVar9 == 1.0;
                    bVar43 = 1.0 < dVar9;
                  }
                  else {
                    bVar42 = dVar9 == 4398046511104.0;
                    bVar43 = 4398046511104.0 < dVar9;
                  }
                  if (bVar43 || bVar42) goto LAB_14302cbf8;
                }
                *(int *)(lVar16 + 0x38) = (int)plVar6[0xd];
                if ((char)plVar6[0xf] == '\x01') {
                  lVar17 = plVar6[1];
                  dVar9 = *(double *)(lVar17 + 0x1040);
                  dVar2 = *(double *)(lVar17 + 0x1038);
                  dVar3 = *(double *)(lVar17 + 0x1030);
                  iVar34 = (int)plVar6[0x1a];
                  *(uint *)(plVar6 + 0x1a) = iVar34 + 1U;
                  local_200 = uVar36;
                  local_1f0 = uVar33;
                  local_1e0 = uVar31;
                  if (*(uint *)((longlong)plVar6 + 0xd4) < iVar34 + 1U) {
                    FUN_1472e7998(local_198,iVar34);
                  }
                  lVar17 = *local_198;
                  lVar28 = (longlong)iVar34 * 0x38;
                  *(ulonglong *)(lVar17 + lVar28) = uVar39;
                  *(double *)(lVar17 + 8 + lVar28) = dVar4 + dVar3;
                  *(double *)(lVar17 + 0x10 + lVar28) = dVar13 + dVar2;
                  *(double *)(lVar17 + 0x18 + lVar28) = dVar7 + dVar9;
                  *(double *)(lVar17 + 0x20 + lVar28) = dVar11;
                  *(double *)(lVar17 + 0x28 + lVar28) = dVar12;
                  *(double *)(lVar17 + 0x30 + lVar28) = dVar10;
                  uVar33 = local_1f0;
                  uVar31 = local_1e0;
                  uVar36 = local_200;
                }
                else if (*(char *)(plVar6[9] + 0xd) == '\x01') {
                  iVar34 = (int)plVar6[0x1c];
                  *(uint *)(plVar6 + 0x1c) = iVar34 + 1U;
                  local_200 = uVar36;
                  local_1f0 = uVar33;
                  if (*(uint *)((longlong)plVar6 + 0xe4) < iVar34 + 1U) {
                    FUN_1472e79ee(local_190,iVar34);
                  }
                  lVar17 = *local_190;
                  lVar28 = (longlong)iVar34 * 0x38;
                  *(longlong *)(lVar17 + lVar28) = lVar16;
                  puVar35 = (undefined8 *)(lVar17 + 8 + lVar28);
                  *puVar35 = CONCAT44(uStack_114,local_118);
                  puVar35[1] = CONCAT44(uStack_10c,uStack_110);
                  *(ulonglong *)(lVar17 + 0x18 + lVar28) = CONCAT44(uStack_104,uStack_108);
                  *(double *)(lVar17 + 0x20 + lVar28) = dVar11;
                  *(double *)(lVar17 + 0x28 + lVar28) = dVar12;
                  *(double *)(lVar17 + 0x30 + lVar28) = dVar10;
                  uVar33 = local_1f0;
                  uVar36 = local_200;
                }
                else {
                  if (local_1f3 == 0) {
                    cVar14 = '\x01';
                    if ((char)uVar38 == '\0') {
                      if (bVar37 != 0) {
                        LOCK();
                        UNLOCK();
                        bVar42 = 0xdf2 < DAT_14ca475f0;
                        uVar15 = DAT_14ca475f0;
                        DAT_14ca475f0 = DAT_14ca475f0 + 1;
                        if (bVar42) {
                          LOCK();
                          DAT_14ca475f0 = 0;
                          UNLOCK();
                          uVar15 = 0;
                        }
                        if (DAT_14ca84e14 == '\x01') {
                          fVar44 = *(float *)(lVar16 + 0x4c) / *(float *)(DAT_14cb0d2b0 + 0xd90);
                          if (fVar44 <= 1.0) {
                            fVar44 = 1.0;
                          }
                          if ((float)(&DAT_14ca475f4)[uVar15] * fVar44 <
                              *(float *)(DAT_14cb0d2b0 + 0xd90)) goto LAB_14302c7ae;
                        }
                        else if ((float)(&DAT_14ca475f4)[uVar15] * 0.125 *
                                 *(float *)((longlong)plVar6 + 0x6c) <
                                 *(float *)(plVar6 + 0xe) - *(float *)(lVar16 + 0x44)) {
                          cVar14 = '\0';
                          goto LAB_14302c7bf;
                        }
                        goto LAB_14302cbfe;
                      }
                      goto LAB_14302c7ae;
                    }
                  }
                  else {
LAB_14302c7ae:
                    cVar14 = '\0';
                  }
LAB_14302c7bf:
                  lVar17 = plVar6[1];
                  dVar9 = *(double *)(lVar17 + 0x1040);
                  dVar2 = *(double *)(lVar17 + 0x1038);
                  dVar3 = *(double *)(lVar17 + 0x1030);
                  if ((cVar14 != '\0') || (DAT_14ca84e10 == 0x7fffffff)) {
                    iVar34 = (int)plVar6[0x18];
                    *(uint *)(plVar6 + 0x18) = iVar34 + 1U;
                    if (*(uint *)((longlong)plVar6 + 0xc4) < iVar34 + 1U) {
                      local_200 = uVar36;
                      local_1f0 = uVar33;
                      local_1e0 = uVar31;
                      FUN_14472e2f4(local_178,iVar34);
                      uVar33 = local_1f0;
                      uVar31 = local_1e0;
                      uVar36 = local_200;
                    }
                    lVar17 = *local_178;
                    lVar28 = (longlong)iVar34 * 0x40;
                    *(longlong *)(lVar17 + lVar28) = lVar16;
                    *(double *)(lVar17 + 8 + lVar28) = dVar4 + dVar3;
                    *(double *)(lVar17 + 0x10 + lVar28) = dVar13 + dVar2;
                    *(double *)(lVar17 + 0x18 + lVar28) = dVar7 + dVar9;
                    *(double *)(lVar17 + 0x20 + lVar28) = dVar11;
                    *(double *)(lVar17 + 0x28 + lVar28) = dVar12;
                    *(double *)(lVar17 + 0x30 + lVar28) = dVar10;
                    *(char *)(lVar17 + 0x38 + lVar28) = cVar14;
                  }
                }
              }
            }
LAB_14302cbfe:
            lVar17 = plVar6[0xe];
            *(int *)(lVar16 + 0x48) = (int)lVar17;
            uVar40 = (undefined7)((uVar38 & 0xffffffff) >> 8);
            unaff_R14 = CONCAT71(uVar40,(byte)(uVar38 & 0xffffffff) & bVar37);
            bVar22 = (byte)uVar38;
            if ((bVar22 == 0) && ((bVar37 & 1) != 0)) {
              *(int *)(lVar16 + 0x44) = (int)lVar17;
              unaff_R14 = CONCAT71(uVar40,1);
            }
            *(int *)(lVar16 + 0x3c) = (int)plVar6[0xd];
            *(byte *)(lVar16 + 0x54) = bVar37 << 7 | *(byte *)(lVar16 + 0x54) & 0x3f | bVar22 << 6;
            if ((char)uVar31 == '\0') goto LAB_14302d0bd;
            plVar18 = (longlong *)plVar6[7];
            iVar34 = (int)plVar18[1];
            *(uint *)(plVar18 + 1) = iVar34 + 1U;
            if (*(uint *)((longlong)plVar18 + 0xc) < iVar34 + 1U) {
              local_200 = uVar36;
              local_1f0 = uVar33;
              FUN_1401c3474(plVar18,iVar34);
              uVar33 = local_1f0;
              uVar36 = local_200;
            }
            *(byte *)(*plVar18 + (longlong)iVar34) = bVar22;
            bVar41 = local_1f2 & bVar22;
            bVar37 = (bVar22 ^ 1) & (byte)unaff_R14;
            uVar38 = CONCAT71((int7)(uVar38 >> 8),bVar37);
            bVar37 = local_1f1 & bVar37;
            uVar33 = uVar33 + 1;
            if (uVar33 == local_158) {
              plVar27 = (longlong *)plVar6[7];
              lVar17 = plVar6[8];
              goto LAB_14302d164;
            }
          } while( true );
        }
        plVar18 = *(longlong **)(*(longlong *)(lVar17 + 0x3358) + uVar38 * 8);
        if (*(code **)(*plVar18 + 0xb8) == (code *)&LAB_144b390f2) {
          plVar20 = plVar18 + (ulonglong)(*(int *)(DAT_14cb47930 + 4) == 0) * 2 + 0x89;
        }
        else {
          plVar20 = (longlong *)(**(code **)(*plVar18 + 0xb8))(plVar18,plVar6[1]);
        }
        uVar15 = *(uint *)(plVar20 + 1);
        uVar39 = (ulonglong)uVar15;
        if (uVar15 == 0) {
          lVar17 = *(longlong *)(plVar6[1] + 0x3128);
          lVar16 = plVar6[1] + 0x3118;
          if (lVar17 != 0) {
            lVar16 = lVar17;
          }
          uVar15 = (uint)local_1c8;
          uVar23 = uVar15 + 0x1f;
          if (-1 < (int)uVar15) {
            uVar23 = uVar15;
          }
          iVar32 = local_1d4;
          if ((*(uint *)(lVar16 + (longlong)((int)uVar23 >> 5) * 4) >> (uVar15 & 0x1f) & 1) != 0) {
            LOCK();
            puVar19 = (uint *)(lVar16 + (longlong)((int)uVar23 >> 5) * 4);
            *puVar19 = *puVar19 & ~(1 << ((byte)local_1c8 & 0x1f));
            UNLOCK();
          }
        }
        else {
          plVar27 = (longlong *)plVar6[7];
          if ((plVar27 == (longlong *)0x0) ||
             (local_1b8 = (ulonglong)*(uint *)(plVar27 + 1),
             *(int *)((longlong)plVar27 + 0xc) < (int)(*(uint *)(plVar27 + 1) + uVar15))) {
            lVar17 = plVar6[1];
            puVar19 = (uint *)*local_1b0;
            if (puVar19 != (uint *)0x0) goto LAB_14302d37f;
            while( true ) {
              puVar35 = local_1b0;
              FUN_14472e504(local_1b0);
              puVar19 = (uint *)*puVar35;
LAB_14302d37f:
              puVar35 = (undefined8 *)(*(longlong *)(puVar19 + 0x10) + 7U & 0xfffffffffffffff8);
              uVar23 = puVar19[0x12];
              if (puVar35 + 4 <= puVar19 + 0x4000) break;
              while( true ) {
                *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
                LOCK();
                uVar25 = *puVar19;
                *puVar19 = *puVar19 + uVar23 + 1;
                UNLOCK();
                if ((uVar25 ^ uVar23) != 0xffffffff) break;
                puVar19 = (uint *)*local_1b0;
                *puVar19 = 0xffffffff;
                *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
                puVar19[0x12] = 0;
                *local_1b0 = puVar19;
                puVar35 = (undefined8 *)((longlong)puVar19 + 0x5fU & 0xfffffffffffffff8);
                uVar23 = 0;
                if (puVar35 + 4 <= puVar19 + 0x4000) {
                  uVar23 = 1;
                  goto LAB_14302d3fa;
                }
              }
            }
            uVar23 = uVar23 + 1;
LAB_14302d3fa:
            *(undefined8 **)(puVar19 + 0x10) = puVar35 + 5;
            puVar19[0x12] = uVar23;
            uVar23 = ((int)puVar35 + -8) - (int)puVar19;
            *(uint *)(puVar35 + -1) = uVar23;
            *(undefined4 *)((longlong)puVar35 + -4) = 0x20;
            puVar35[1] = 0;
            *puVar35 = &PTR_FUN_14a2f9850;
            lVar16 = *(longlong *)(lVar17 + 0x30f0);
            do {
              puVar35[1] = lVar16;
              plVar18 = (longlong *)(lVar17 + 0x30f0);
              LOCK();
              lVar28 = *plVar18;
              bVar42 = lVar16 == lVar28;
              if (bVar42) {
                *plVar18 = (longlong)puVar35;
                lVar28 = lVar16;
              }
              UNLOCK();
              lVar16 = lVar28;
            } while (!bVar42);
            puVar35[2] = 0;
            puVar35[3] = 0;
            plVar24 = puVar35 + 2;
            plVar6[7] = (longlong)plVar24;
            uVar25 = 0x400;
            if (0x400 < uVar15) {
              uVar25 = uVar15;
            }
            if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(uVar25);
            }
            plVar18 = (longlong *)(ulonglong)uVar23;
            plVar27 = plVar24;
            if (*(int *)((longlong)puVar35 + 0x1c) < (int)uVar25) {
              FUN_14475e67c(plVar24);
              plVar27 = (longlong *)plVar6[7];
              plVar18 = plVar24;
            }
            local_1b8 = (ulonglong)*(uint *)(plVar27 + 1);
            unaff_R14 = uVar38;
          }
          lVar17 = plVar6[8];
          unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),1);
          uVar31 = unaff_R14;
          if (0 < (int)uVar15) goto LAB_14302c2de;
          local_1d0 = (uint)CONCAT71((int7)((ulonglong)plVar18 >> 8),1);
          bVar37 = 1;
          bVar41 = 1;
LAB_14302d164:
          uVar15 = local_1d0;
          iVar32 = local_1d4;
          plVar20 = *(longlong **)(*(longlong *)(lVar17 + 0x3358) + local_140 * 8);
          local_208 = (int)plVar27[1] - (int)local_1b8;
          if (*(code **)(*plVar20 + 0xc0) == FUN_143b3a1f2) {
            FUN_143b3a1f2(plVar20,plVar6[1],plVar27,local_1b8 & 0xffffffff);
          }
          else {
            (**(code **)(*plVar20 + 0xc0))(plVar20,plVar6[1],plVar27,local_1b8 & 0xffffffff);
          }
          uVar23 = (uint)local_1c8;
          if (bVar41 == 0) {
            iVar34 = local_1d4;
            if (bVar37 != 0) {
              lVar17 = *(longlong *)(plVar6[1] + 0x3168);
              lVar16 = plVar6[1] + 0x3158;
              if (lVar17 != 0) {
                lVar16 = lVar17;
              }
              uVar25 = uVar23 + 0x1f;
              if (-1 < (int)uVar23) {
                uVar25 = uVar23;
              }
              if ((*(uint *)(lVar16 + (longlong)((int)uVar25 >> 5) * 4) >> (uVar23 & 0x1f) & 1) == 0
                 ) {
                LOCK();
                puVar19 = (uint *)(lVar16 + (longlong)((int)uVar25 >> 5) * 4);
                *puVar19 = *puVar19 | 1 << ((byte)local_1c8 & 0x1f);
                UNLOCK();
                iVar34 = iVar32;
              }
            }
LAB_14302d215:
            uVar38 = uStack_120;
            iVar32 = iVar34;
            if ((uVar15 & 1) != 0) {
              lVar17 = (longlong)(int)uStack_120;
              uVar15 = (int)uStack_120 + 1;
              uStack_120 = CONCAT44(uStack_120._4_4_,uVar15);
              if (uStack_120._4_4_ < uVar15) {
                FUN_144a78748(&local_128,uVar38 & 0xffffffff);
              }
              *(int *)(local_128 + lVar17 * 4) = (int)local_1c8;
            }
          }
          else {
            lVar17 = *(longlong *)(plVar6[1] + 0x3128);
            lVar16 = plVar6[1] + 0x3118;
            if (lVar17 != 0) {
              lVar16 = lVar17;
            }
            uVar15 = uVar23 + 0x1f;
            if (-1 < (int)uVar23) {
              uVar15 = uVar23;
            }
            if ((*(uint *)(lVar16 + (longlong)((int)uVar15 >> 5) * 4) >> (uVar23 & 0x1f) & 1) != 0)
            {
              LOCK();
              puVar19 = (uint *)(lVar16 + (longlong)((int)uVar15 >> 5) * 4);
              *puVar19 = *puVar19 & ~(1 << ((byte)local_1c8 & 0x1f));
              UNLOCK();
            }
            local_1d8 = local_1d8 + 1;
          }
        }
        uVar15 = iVar32 + 1;
        plVar20 = local_138 + (0xff < uVar15);
        if (0xff < uVar15) {
          uVar15 = 0;
        }
        uVar38 = (ulonglong)uVar15;
        iVar34 = local_1e4 + 1;
      } while (iVar34 != local_1a0);
    }
  }
  lVar17 = *plVar6;
  if ((int)uStack_120 == 0) {
    LOCK();
    piVar1 = (int *)(lVar17 + 0x218);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (pcVar8 = *(code **)(lVar17 + 0x1a0), pcVar8 != (code *)0x0)) {
      plVar20 = (longlong *)(lVar17 + 0x1c0);
      if (*(longlong **)(lVar17 + 0x1b0) != (longlong *)0x0) {
        plVar20 = *(longlong **)(lVar17 + 0x1b0);
      }
      uVar21 = (**(code **)(*plVar20 + 8))();
      (*pcVar8)(uVar21);
    }
  }
  else {
    FUN_14480106c(lVar17 + 0x150,&local_128);
  }
  lVar17 = *(longlong *)(*plVar6 + 8);
  LOCK();
  piVar1 = (int *)(lVar17 + 0x58);
  *piVar1 = *piVar1 + local_1d8;
  UNLOCK();
  LOCK();
  piVar1 = (int *)(lVar17 + 0x5c);
  *piVar1 = *piVar1 + local_1cc;
  UNLOCK();
  FUN_140020148(&local_128);
  if ((local_1a4 == 0x60000000) || (local_1a4 == 0)) {
    *local_150 = local_1a4;
  }
  if ((local_f0 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014302c3f3:
  iVar34 = *(int *)(lVar16 + 0x60);
  if (iVar34 == -1) goto LAB_14302c3fb;
  goto LAB_14302c3d0;
LAB_14302d0bd:
  if (bVar22 == 0) {
    uVar15 = local_1d0;
    if ((byte)unaff_R14 != 0) {
      lVar17 = *(longlong *)(plVar6[1] + 0x3168);
      lVar16 = plVar6[1] + 0x3158;
      if (lVar17 != 0) {
        lVar16 = lVar17;
      }
      if ((*(uint *)(lVar16 + local_160 * 4) & local_1bc) == 0) {
        LOCK();
        puVar19 = (uint *)(lVar16 + local_160 * 4);
        *puVar19 = *puVar19 | local_1bc;
        UNLOCK();
      }
    }
  }
  else {
    lVar17 = *(longlong *)(plVar6[1] + 0x3128);
    lVar16 = plVar6[1] + 0x3118;
    if (lVar17 != 0) {
      lVar16 = lVar17;
    }
    if ((local_1bc & *(uint *)(lVar16 + local_160 * 4)) != 0) {
      LOCK();
      puVar19 = (uint *)(lVar16 + local_160 * 4);
      *puVar19 = *puVar19 & local_19c;
      UNLOCK();
    }
    local_1d8 = local_1d8 + 1;
    uVar15 = 0;
  }
  uVar33 = local_130 + 1;
  iVar34 = local_1d4;
  if (uVar33 == local_158) goto LAB_14302d215;
  goto LAB_14302c371;
}



// FUNCTION 14302d686 FUN_14302d686 body=110 status=ok
// SIG undefined FUN_14302d686(void)

undefined8 * FUN_14302d686(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14302d6f4 FUN_14302d6f4 body=249 status=ok
// SIG undefined FUN_14302d6f4(void)

undefined8 * FUN_14302d6f4(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  bool bVar8;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_14302d72a;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar3 = (uint *)*puVar1;
LAB_14302d72a:
    puVar6 = (undefined8 *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar3[0x12];
    if (puVar6 + 4 <= puVar3 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
      LOCK();
      uVar2 = *puVar3;
      *puVar3 = *puVar3 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar3 = (uint *)*puVar1;
      *puVar3 = 0xffffffff;
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
      puVar3[0x12] = 0;
      *puVar1 = puVar3;
      puVar6 = (undefined8 *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar6 + 4 <= puVar3 + 0x4000) {
        uVar7 = 1;
        goto LAB_14302d7a0;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_14302d7a0:
  *(undefined8 **)(puVar3 + 0x10) = puVar6 + 5;
  puVar3[0x12] = uVar7;
  *(int *)(puVar6 + -1) = ((int)puVar6 + -8) - (int)puVar3;
  *(undefined4 *)((longlong)puVar6 + -4) = 0x20;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a2f9850;
  lVar4 = *param_1;
  do {
    puVar6[1] = lVar4;
    LOCK();
    lVar5 = *param_1;
    bVar8 = lVar4 == lVar5;
    if (bVar8) {
      *param_1 = (longlong)puVar6;
      lVar5 = lVar4;
    }
    UNLOCK();
    lVar4 = lVar5;
  } while (!bVar8);
  return puVar6 + 2;
}



// FUNCTION 14302d7ee FUN_14302d7ee body=449 status=ok
// SIG undefined FUN_14302d7ee(void)

void FUN_14302d7ee(undefined8 *param_1,uint param_2)

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
    FUN_1456bc5fe(uVar3,0x38);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14302d908:
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
LAB_14302d945:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x38;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14302d843;
LAB_14302d838:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14302d843:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x491) goto code_r0x00014302d86f;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0xe + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14302d8c5:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14302d945;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14302d908;
code_r0x00014302d86f:
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
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14302d8c5;
    }
  }
  goto LAB_14302d838;
}



// FUNCTION 14302d9b0 FUN_14302d9b0 body=449 status=ok
// SIG undefined FUN_14302d9b0(void)

void FUN_14302d9b0(undefined8 *param_1,uint param_2)

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
    FUN_1456bc5fe(uVar3,0x38);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14302daca:
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
LAB_14302db07:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x38;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14302da05;
LAB_14302d9fa:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14302da05:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x491) goto code_r0x00014302da31;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0xe + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14302da87:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14302db07;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14302daca;
code_r0x00014302da31:
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
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14302da87;
    }
  }
  goto LAB_14302d9fa;
}



// FUNCTION 14302db72 FUN_14302db72 body=449 status=ok
// SIG undefined FUN_14302db72(void)

void FUN_14302db72(undefined8 *param_1,uint param_2)

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
    FUN_1456bc5fe(uVar3,0x38);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14302dc8c:
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
LAB_14302dcc9:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x38;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14302dbc7;
LAB_14302dbbc:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14302dbc7:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x491) goto code_r0x00014302dbf3;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0xe + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14302dc49:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14302dcc9;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14302dc8c;
code_r0x00014302dbf3:
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
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14302dc49;
    }
  }
  goto LAB_14302dbbc;
}



// FUNCTION 14302dd34 FUN_14302dd34 body=450 status=ok
// SIG undefined FUN_14302dd34(void)

void FUN_14302dd34(undefined8 *param_1,uint param_2)

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
    FUN_1456bc5fe(uVar3,0x40);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14302de4f:
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
LAB_14302de8c:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x40;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14302dd8a;
LAB_14302dd7f:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14302dd8a:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x3ff) goto code_r0x00014302ddb6;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0x10 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14302de0c:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14302de8c;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14302de4f;
code_r0x00014302ddb6:
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
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14302de0c;
    }
  }
  goto LAB_14302dd7f;
}



// FUNCTION 14302def6 FUN_14302def6 body=450 status=ok
// SIG undefined FUN_14302def6(void)

void FUN_14302def6(undefined8 *param_1,uint param_2)

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
    FUN_1456bc5fe(uVar3,4);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14302e011:
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
LAB_14302e04e:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 4;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14302df4c;
LAB_14302df41:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14302df4c:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x3fea) goto code_r0x00014302df78;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14302dfce:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14302e04e;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14302e011;
code_r0x00014302df78:
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
      goto LAB_14302dfce;
    }
  }
  goto LAB_14302df41;
}



// FUNCTION 14302e0b8 FUN_14302e0b8 body=258 status=ok
// SIG undefined FUN_14302e0b8(void)

undefined8 * FUN_14302e0b8(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  bool bVar8;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_14302e0ee;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar3 = (uint *)*puVar1;
LAB_14302e0ee:
    puVar6 = (undefined8 *)(*(longlong *)(puVar3 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar3[0x12];
    if (puVar6 + 0x23 <= puVar3 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
      LOCK();
      uVar2 = *puVar3;
      *puVar3 = *puVar3 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar3 = (uint *)*puVar1;
      *puVar3 = 0xffffffff;
      *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
      puVar3[0x12] = 0;
      *puVar1 = puVar3;
      puVar6 = (undefined8 *)((longlong)puVar3 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar6 + 0x23 <= puVar3 + 0x4000) {
        uVar7 = 1;
        goto LAB_14302e16a;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_14302e16a:
  *(undefined8 **)(puVar3 + 0x10) = puVar6 + 0x24;
  puVar3[0x12] = uVar7;
  *(int *)(puVar6 + -1) = ((int)puVar6 + -8) - (int)puVar3;
  *(undefined4 *)((longlong)puVar6 + -4) = 0x118;
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a2f98f8;
  lVar4 = *param_1;
  do {
    puVar6[1] = lVar4;
    LOCK();
    lVar5 = *param_1;
    bVar8 = lVar4 == lVar5;
    if (bVar8) {
      *param_1 = (longlong)puVar6;
      lVar5 = lVar4;
    }
    UNLOCK();
    lVar4 = lVar5;
  } while (!bVar8);
  return puVar6 + 2;
}



// FUNCTION 14302e1ba FUN_14302e1ba body=78 status=ok
// SIG undefined FUN_14302e1ba(void)

undefined8 FUN_14302e1ba(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    UNLOCK();
    cVar2 = FUN_1456bb142(lVar1 + 0x88,param_1);
    if (cVar2 != '\0') {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      FUN_1456bb1d4(param_1 + 0x28,lVar1);
      return 1;
    }
    LOCK();
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    UNLOCK();
  }
  return 0;
}



// FUNCTION 14302e208 FUN_14302e208 body=1432 status=ok
// SIG undefined FUN_14302e208(void)

void FUN_14302e208(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStack_a8 [40];
  uint local_80;
  int local_7c;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar14 = *param_2;
  lVar22 = *param_1;
  FUN_14301225d(*(undefined8 *)(lVar22 + 0x10),*(undefined8 *)(lVar22 + 0x18),
                *(undefined8 *)(lVar22 + 0x20),uVar14);
  iVar7 = FUN_14301260e(lVar22,uVar14);
  if (*(longlong *)(lVar22 + 0x68) == 0) {
    uVar12 = uVar14 >> 0x20;
    lVar21 = *(longlong *)(lVar22 + 0x18);
    uVar13 = (uint)uVar14;
    uVar8 = (int)uVar13 >> 5;
    bVar6 = (byte)uVar14;
    local_70._0_4_ = (int)(uVar14 >> 0x20);
    local_70 = uVar12;
    local_68 = lVar21;
    if (*(char *)(lVar21 + 0x23f4) == '\x01') {
      lVar18 = lVar21 + 0x3118;
      uVar12 = (ulonglong)(uint)(1 << (bVar6 & 0x1f));
      uVar19 = -1 << (bVar6 & 0x1f);
      uVar14 = (ulonglong)uVar8;
      uVar20 = uVar13 & 0xffffffe0;
      local_58 = 0;
      uStack_50 = 0;
      uVar3 = *(uint *)(lVar21 + 0x3130);
      if (uVar3 != uVar13) {
        lVar16 = *(longlong *)(lVar21 + 0x3128);
        if (*(longlong *)(lVar21 + 0x3128) == 0) {
          lVar16 = lVar18;
        }
        lVar17 = (longlong)(int)uVar8;
        uVar15 = *(uint *)(lVar16 + lVar17 * 4) & uVar19;
        uVar13 = uVar3;
        if (uVar15 == 0) {
          iVar9 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar9 = uVar3 - 1;
          }
          uVar15 = iVar9 >> 5;
          uVar14 = lVar17 + 1;
          uVar20 = uVar20 + 0x20;
          uVar5 = uVar15;
          if ((int)uVar15 < (int)uVar8) {
            uVar5 = uVar8;
          }
          if ((int)uVar8 < (int)uVar15) {
            lVar17 = (int)uVar5 - lVar17;
            do {
              uVar15 = *(uint *)(lVar16 + uVar14 * 4);
              if (uVar15 != 0) {
                uVar19 = 0xffffffff;
                uVar14 = uVar14 & 0xffffffff;
                goto LAB_14302e3ec;
              }
              uVar14 = uVar14 + 1;
              uVar20 = uVar20 + 0x20;
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            uVar19 = 0xffffffff;
            uVar14 = (longlong)(int)uVar5 + 1;
          }
        }
        else {
LAB_14302e3ec:
          uVar12 = (ulonglong)(-uVar15 & uVar15);
          uVar2 = uVar12 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar13 = (uVar20 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if ((int)uVar3 <= (int)uVar13) {
            uVar13 = uVar3;
          }
        }
      }
      bVar4 = (int)uVar13 < (int)local_70;
      local_7c = iVar7;
      local_78 = lVar22;
      if (bVar4) {
        do {
          uVar2 = uStack_50;
          lVar22 = (longlong)(int)uStack_50;
          uVar8 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
          if (uStack_50._4_4_ < uVar8) {
            FUN_144a78748(&local_58,uVar2 & 0xffffffff);
            lVar21 = local_68;
          }
          *(uint *)(local_58 + lVar22 * 4) = uVar13;
          uVar19 = uVar19 & ~(uint)uVar12;
          lVar22 = *(longlong *)(lVar21 + 0x3128);
          if (*(longlong *)(lVar21 + 0x3128) == 0) {
            lVar22 = lVar18;
          }
          uVar8 = *(uint *)(lVar21 + 0x3130);
          iVar7 = (int)uVar14;
          lVar16 = (longlong)iVar7;
          uVar13 = *(uint *)(lVar22 + lVar16 * 4) & uVar19;
          if (uVar13 == 0) {
            iVar9 = uVar8 + 0x1e;
            if (-1 < (int)(uVar8 - 1)) {
              iVar9 = uVar8 - 1;
            }
            iVar9 = iVar9 >> 5;
            uVar20 = uVar20 + 0x20;
            iVar10 = iVar9;
            if (iVar9 < iVar7) {
              iVar10 = iVar7;
            }
            if (iVar7 < iVar9) {
              lVar17 = 0;
              do {
                uVar13 = *(uint *)(lVar22 + lVar16 * 4 + 4 + lVar17 * 4);
                if (uVar13 != 0) {
                  uVar14 = (ulonglong)(iVar7 + (int)lVar17 + 1);
                  uVar19 = 0xffffffff;
                  goto LAB_14302e4df;
                }
                uVar20 = uVar20 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar10 - lVar16 != lVar17);
              uVar19 = 0xffffffff;
              iVar7 = iVar10;
            }
            uVar14 = (ulonglong)(iVar7 + 1);
            uVar13 = uVar8;
          }
          else {
LAB_14302e4df:
            uVar12 = (ulonglong)(-uVar13 & uVar13);
            uVar2 = uVar12 * 2 + 1;
            lVar22 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            uVar13 = (uVar20 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
            if ((int)uVar8 <= (int)uVar13) {
              uVar13 = uVar8;
            }
          }
        } while ((int)uVar13 < (int)local_70);
        if ((int)uStack_50 != 0) {
          LOCK();
          *(int *)(local_78 + 0x218) = *(int *)(local_78 + 0x218) + 1;
          UNLOCK();
          FUN_1472e7c86(local_78 + 0x150,&local_58);
        }
      }
      FUN_140020148(&local_58);
      lVar22 = local_78;
      iVar7 = local_7c;
    }
    else {
      local_60 = lVar21 + 0x3118;
      uVar14 = (ulonglong)uVar8;
      uVar12 = (ulonglong)(uint)(1 << (bVar6 & 0x1f));
      uVar19 = -1 << (bVar6 & 0x1f);
      uVar20 = uVar13 & 0xffffffe0;
      uVar3 = *(uint *)(lVar21 + 0x3130);
      if (uVar3 != uVar13) {
        lVar18 = *(longlong *)(lVar21 + 0x3128);
        if (*(longlong *)(lVar21 + 0x3128) == 0) {
          lVar18 = local_60;
        }
        lVar21 = (longlong)(int)uVar8;
        uVar15 = *(uint *)(lVar18 + lVar21 * 4) & uVar19;
        uVar13 = uVar3;
        if (uVar15 == 0) {
          iVar9 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar9 = uVar3 - 1;
          }
          uVar15 = iVar9 >> 5;
          uVar14 = lVar21 + 1;
          uVar20 = uVar20 + 0x20;
          uVar5 = uVar15;
          if ((int)uVar15 < (int)uVar8) {
            uVar5 = uVar8;
          }
          if ((int)uVar8 < (int)uVar15) {
            lVar21 = (int)uVar5 - lVar21;
            do {
              uVar15 = *(uint *)(lVar18 + uVar14 * 4);
              if (uVar15 != 0) {
                uVar19 = 0xffffffff;
                uVar14 = uVar14 & 0xffffffff;
                goto LAB_14302e549;
              }
              uVar14 = uVar14 + 1;
              uVar20 = uVar20 + 0x20;
              lVar21 = lVar21 + -1;
            } while (lVar21 != 0);
            uVar19 = 0xffffffff;
            uVar14 = (longlong)(int)uVar5 + 1;
          }
        }
        else {
LAB_14302e549:
          uVar12 = (ulonglong)(-uVar15 & uVar15);
          uVar2 = uVar12 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          uVar13 = (uVar20 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if ((int)uVar3 <= (int)uVar13) {
            uVar13 = uVar3;
          }
        }
      }
      bVar4 = (int)uVar13 < (int)local_70;
      iVar9 = iVar7;
      lVar21 = lVar22;
      if (bVar4) {
        do {
          local_78 = lVar21;
          local_7c = iVar9;
          lVar21 = *(longlong *)(lVar22 + 0x140);
          lVar18 = *(longlong *)
                    (*(longlong *)(lVar21 + 0x80) + (longlong)(*(int *)(lVar21 + 0x88) + -1) * 8);
          iVar9 = *(int *)(lVar18 + 0x60);
          if (iVar9 == 0) {
            iVar7 = *(int *)(lVar18 + 0x68);
            if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar7);
            }
            local_80 = uVar19;
            if (*(int *)(lVar18 + 100) < iVar7) {
              FUN_1447a0e40(lVar18 + 0x58);
              iVar9 = *(int *)(lVar18 + 0x60);
              lVar22 = local_78;
              iVar7 = local_7c;
              uVar19 = local_80;
            }
            else {
              iVar9 = 0;
              lVar22 = local_78;
              iVar7 = local_7c;
            }
          }
          *(uint *)(lVar18 + 0x60) = iVar9 + 1U;
          if (*(uint *)(lVar18 + 100) < iVar9 + 1U) {
            local_80 = uVar19;
            FUN_144a78748(lVar18 + 0x58,iVar9);
            lVar22 = local_78;
            uVar19 = local_80;
          }
          *(uint *)(*(longlong *)(lVar18 + 0x58) + (longlong)iVar9 * 4) = uVar13;
          if (*(int *)(lVar18 + 0x68) <= *(int *)(lVar18 + 0x60)) {
            if (*(char *)(lVar21 + 0x98) == '\x01') {
              FUN_14008d6fe(lVar18);
            }
            FUN_14008d3e6(lVar21);
          }
          uVar19 = uVar19 & ~(uint)uVar12;
          lVar21 = *(longlong *)(local_68 + 0x3128);
          if (*(longlong *)(local_68 + 0x3128) == 0) {
            lVar21 = local_60;
          }
          uVar8 = *(uint *)(local_68 + 0x3130);
          iVar9 = (int)uVar14;
          lVar18 = (longlong)iVar9;
          uVar13 = *(uint *)(lVar21 + lVar18 * 4) & uVar19;
          if (uVar13 == 0) {
            iVar10 = uVar8 + 0x1e;
            if (-1 < (int)(uVar8 - 1)) {
              iVar10 = uVar8 - 1;
            }
            iVar10 = iVar10 >> 5;
            uVar20 = uVar20 + 0x20;
            iVar11 = iVar10;
            if (iVar10 < iVar9) {
              iVar11 = iVar9;
            }
            if (iVar9 < iVar10) {
              lVar16 = 0;
              do {
                uVar13 = *(uint *)(lVar21 + lVar18 * 4 + 4 + lVar16 * 4);
                if (uVar13 != 0) {
                  uVar14 = (ulonglong)(iVar9 + (int)lVar16 + 1);
                  uVar19 = 0xffffffff;
                  goto LAB_14302e661;
                }
                uVar20 = uVar20 + 0x20;
                lVar16 = lVar16 + 1;
              } while (iVar11 - lVar18 != lVar16);
              uVar19 = 0xffffffff;
              iVar9 = iVar11;
            }
            uVar14 = (ulonglong)(iVar9 + 1);
            uVar13 = uVar8;
          }
          else {
LAB_14302e661:
            uVar12 = (ulonglong)(-uVar13 & uVar13);
            uVar2 = uVar12 * 2 + 1;
            lVar21 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
              }
            }
            uVar13 = (uVar20 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
            if ((int)uVar8 <= (int)uVar13) {
              uVar13 = uVar8;
            }
          }
          bVar4 = (int)uVar13 < (int)local_70;
          iVar9 = local_7c;
          lVar21 = local_78;
        } while (bVar4);
      }
    }
  }
  else {
    FUN_14480060e(*(longlong *)(lVar22 + 0x68),uVar14);
  }
  LOCK();
  piVar1 = (int *)(*(longlong *)(lVar22 + 8) + 0x58);
  *piVar1 = *piVar1 + iVar7;
  UNLOCK();
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14302e7cc FUN_14302e7cc body=29 status=ok
// SIG undefined FUN_14302e7cc(void)

undefined8 FUN_14302e7cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14302e7ea FUN_14302e7ea body=514 status=ok
// SIG undefined FUN_14302e7ea(void)

undefined8 *
FUN_14302e7ea(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 *param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_1472e7dd0();
  *puVar2 = UE::Tasks::Private::FTaskBase::vftable;
  puVar2[1] = &DAT_100000002;
  puVar2[2] = 0;
  *(undefined4 *)(puVar2 + 3) = 0;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  puVar2[6] = 0;
  puVar2[7] = 0x100000000;
  *(undefined1 *)(puVar2 + 8) = 1;
  puVar2[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0xe800000000000020;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0x100000000;
  *(undefined2 *)(puVar2 + 0x14) = 0;
  LOCK();
  bVar4 = *(char *)(puVar2 + 8) == '\x01';
  if (bVar4) {
    *(char *)(puVar2 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar4) {
    FUN_14008cdb0(puVar2 + 8);
  }
  *puVar2 = &PTR_FUN_14a2f9950;
  if (*(code **)(puVar2[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar2[0xe] + 0x18))(puVar2 + 0xe,puVar2 + 9);
  }
  puVar2[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar2[9] = puVar2;
  puVar2[10] = puVar2;
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
  }
  puVar2[0xf] = uVar3;
  puVar2[0x10] = (param_3 & 0x1fffffffffffff) << 6 | 0xc800000000000000;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
  puVar2[0x15] = *param_4;
  *puVar2 = &PTR_FUN_14a2f9940;
  LOCK();
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
  UNLOCK();
  LOCK();
  *(int *)((longlong)puVar2 + 0xc) = *(int *)((longlong)puVar2 + 0xc) + 1;
  UNLOCK();
  puVar2[2] = param_1;
  FUN_1400e88c2(puVar2,param_5);
  local_31 = 1;
  FUN_1447439e4(puVar2);
  *param_2 = puVar2;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14302e9ee FUN_14302e9ee body=411 status=ok
// SIG undefined FUN_14302e9ee(void)

void FUN_14302e9ee(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_88 [40];
  int *local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar9 = *piVar8;
  if (iVar9 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar9 = *piVar8;
  }
  if ((iVar9 == 0x60000000) || (iVar9 == 0)) {
    *piVar8 = 0x40000010;
  }
  local_58 = 0;
  uStack_50 = 0;
  LOCK();
  bVar13 = *(char *)(lVar3 + 0x90) == '\0';
  if (bVar13) {
    *(char *)(lVar3 + 0x90) = '\x01';
  }
  UNLOCK();
  if (!bVar13) {
    FUN_1447d2058(lVar3 + 0x90);
  }
  FUN_14008ce76(&local_58,lVar3 + 0x98);
  LOCK();
  bVar13 = *(char *)(lVar3 + 0x90) == '\x01';
  if (bVar13) {
    *(char *)(lVar3 + 0x90) = '\0';
  }
  UNLOCK();
  if (!bVar13) {
    FUN_14008cdb0(lVar3 + 0x90);
  }
  iVar5 = (int)uStack_50;
  if ((longlong)(int)uStack_50 != 0) {
    lVar11 = (longlong)(int)uStack_50 << 4;
    iVar12 = 0;
    lVar10 = local_58;
    local_60 = piVar8;
    do {
      pcVar4 = *(code **)(lVar3 + 0x10);
      plVar7 = *(longlong **)(lVar3 + 0x20);
      if (*(longlong **)(lVar3 + 0x20) == (longlong *)0x0) {
        plVar7 = (longlong *)(lVar3 + 0x30);
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar4)(uVar6,lVar10);
      piVar8 = local_60;
      iVar12 = iVar12 + 1;
      lVar10 = lVar10 + 0x10;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
    LOCK();
    piVar1 = (int *)(lVar3 + 200);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 - iVar5;
    UNLOCK();
    if ((iVar2 == iVar12) && (pcVar4 = *(code **)(lVar3 + 0x50), pcVar4 != (code *)0x0)) {
      plVar7 = (longlong *)(lVar3 + 0x70);
      if (*(longlong **)(lVar3 + 0x60) != (longlong *)0x0) {
        plVar7 = *(longlong **)(lVar3 + 0x60);
      }
      uVar6 = (**(code **)(*plVar7 + 8))(plVar7);
      (*pcVar4)(uVar6);
    }
  }
  FUN_1447a0b8a(local_58,uStack_50 & 0xffffffff);
  FUN_14008ce12(&local_58);
  if ((iVar9 == 0x60000000) || (iVar9 == 0)) {
    *piVar8 = iVar9;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14302eb8a FUN_14302eb8a body=1332 status=ok
// SIG undefined FUN_14302eb8a(void)

void FUN_14302eb8a(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *lpTlsValue;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *param_1;
  lVar5 = *(longlong *)(lVar4 + 0x68);
  if (lVar5 == 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 0x218);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (pcVar7 = *(code **)(lVar4 + 0x1a0), pcVar7 != (code *)0x0)) {
      plVar14 = (longlong *)(lVar4 + 0x1c0);
      if (*(longlong **)(lVar4 + 0x1b0) != (longlong *)0x0) {
        plVar14 = *(longlong **)(lVar4 + 0x1b0);
      }
      uVar10 = (**(code **)(*plVar14 + 8))();
      (*pcVar7)(uVar10);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_98);
  }
  *(undefined1 *)(lVar5 + 0x88) = 1;
  FUN_144800c1c(*(undefined8 *)
                 (*(longlong *)(lVar5 + 0x58) + (longlong)(*(int *)(lVar5 + 0x60) + -1) * 8));
  if (*(int *)(lVar5 + 0x70) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(lVar5 + 0x20) + 0x218);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    FUN_14480106c(*(longlong *)(lVar5 + 0x20) + 0x150,lVar5 + 0x68);
    *(undefined4 *)(lVar5 + 0x70) = 0;
    if (*(int *)(lVar5 + 0x74) < 0) {
      FUN_1447a0e40(lVar5 + 0x68,0);
    }
  }
  puVar2 = (undefined8 *)(lVar4 + 0x240);
  iVar9 = *(int *)(lVar5 + 0x60);
  if ((longlong)iVar9 != 0) {
    lVar5 = *(longlong *)(lVar5 + 0x58);
    lVar18 = 0;
    do {
      lVar6 = *(longlong *)(lVar5 + lVar18);
      if (*(char *)(lVar6 + 0x100) == '\x01') {
        FUN_1400e88c2(*puVar2,lVar6 + 0xf8);
      }
      lVar18 = lVar18 + 8;
    } while ((longlong)iVar9 * 8 != lVar18);
  }
  FUN_1400daade(puVar2);
  bVar3 = *(byte *)(*(longlong *)(lVar4 + 8) + 0x39);
  uVar19 = (ulonglong)bVar3;
  lpTlsValue = TlsGetValue(DAT_14c896140);
  if (lpTlsValue == (undefined8 *)0x0) {
    lpTlsValue = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *lpTlsValue = 0;
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
    TlsSetValue(DAT_14c896140,lpTlsValue);
  }
  puVar12 = (undefined8 *)lpTlsValue[1];
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)*lpTlsValue;
    if (puVar12 == (undefined8 *)0x0) {
      uVar16 = (uint)DAT_14c896180;
      uVar8 = DAT_14c896180;
      while (DAT_14c896180 = uVar8, local_68 = uVar8, (uVar8 & 0x3ffffff) != 0) {
        local_70 = (uVar8 & 0xfffffffffc000000) + 0x4000000;
        if (local_70 >> 0x1a < uVar8 >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        uVar15 = (ulonglong)((uVar16 & 0x3ffffff) >> 0xe);
        uVar17 = (ulonglong)((uint)uVar8 & 0x3fff);
        local_70 = local_70 & 0xfffffffffc000000 |
                   (ulonglong)
                   *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar15 * 8) + 0x10 + uVar17 * 0x18);
        LOCK();
        bVar20 = local_68 == DAT_14c896180;
        uVar8 = local_70;
        if (!bVar20) {
          uVar8 = DAT_14c896180;
        }
        DAT_14c896180 = uVar8;
        UNLOCK();
        if (bVar20) {
          *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar15 * 8) + uVar17 * 0x18 + 0x10) = 0;
          puVar12 = *(undefined8 **)
                     (*(longlong *)(&DAT_14c833b00 + uVar15 * 8) + 8 +
                     (ulonglong)(uVar16 & 0x3fff) * 0x18);
          FUN_1447d080c(uVar16 & 0x3ffffff);
          lpTlsValue[1] = puVar12;
          if (puVar12 != (undefined8 *)0x0) goto LAB_14302ee48;
          goto LAB_14302f085;
        }
        uVar16 = (uint)DAT_14c896180;
        uVar8 = DAT_14c896180;
      }
      lpTlsValue[1] = 0;
LAB_14302f085:
      puVar12 = (undefined8 *)FUN_14001cc68(0x10000,0);
      lpTlsValue[1] = puVar12;
      iVar9 = 0xff;
      puVar13 = puVar12;
      do {
        puVar11 = puVar13 + 0x20;
        *puVar13 = puVar11;
        iVar9 = iVar9 + -1;
        puVar13 = puVar11;
      } while (iVar9 != 0);
    }
    else {
      lpTlsValue[1] = puVar12;
      puVar11 = lpTlsValue;
    }
    *puVar11 = 0;
LAB_14302ee48:
    *(undefined4 *)(lpTlsValue + 2) = 0x100;
    iVar9 = 0xff;
  }
  else {
    iVar9 = *(int *)(lpTlsValue + 2) + -1;
  }
  lpTlsValue[1] = *puVar12;
  *(int *)(lpTlsValue + 2) = iVar9;
  *puVar12 = UE::Tasks::Private::FTaskBase::vftable;
  puVar12[1] = &DAT_100000002;
  puVar12[2] = 0;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(undefined4 *)(puVar12 + 4) = 0xffffffff;
  puVar12[6] = 0;
  puVar12[7] = 0x100000000;
  *(undefined1 *)(puVar12 + 8) = 1;
  puVar12[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
  puVar12[0xf] = 0;
  puVar12[0x10] = 0xe800000000000020;
  puVar12[0x12] = 0;
  puVar12[0x13] = 0x100000000;
  *(undefined2 *)(puVar12 + 0x14) = 0;
  LOCK();
  bVar20 = *(char *)(puVar12 + 8) == '\x01';
  if (bVar20) {
    *(char *)(puVar12 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar20) {
    FUN_14008cdb0(puVar12 + 8);
  }
  *puVar12 = &PTR_FUN_14a2f9a00;
  if (*(code **)(puVar12[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar12[0xe] + 0x18))(puVar12 + 0xe,puVar12 + 9);
  }
  puVar12[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar12[9] = puVar12;
  puVar12[10] = puVar12;
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar19 = 1;
    if (bVar3 != 6) {
      uVar19 = (ulonglong)bVar3;
    }
    uVar10 = 0;
  }
  else {
    if (bVar3 == 6) {
      uVar19 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
    }
    uVar10 = *(undefined8 *)(lVar5 + 0x30);
  }
  puVar12[0xf] = uVar10;
  puVar12[0x10] = uVar19 << 0x3b | 0xc00000528be66000;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
  puVar12[0x15] = lVar4;
  *puVar12 = &PTR_FUN_14a2f99f0;
  FUN_14302e1ba(puVar12,puVar2);
  local_68 = CONCAT71(local_68._1_7_,1);
  FUN_1447439e4(puVar12);
  if (puVar12 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar12 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar12)(puVar12,1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14302f106 FUN_14302f106 body=29 status=ok
// SIG undefined FUN_14302f106(void)

undefined8 FUN_14302f106(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14302f124 FUN_14302f124 body=547 status=ok
// SIG undefined FUN_14302f124(void)

longlong * FUN_14302f124(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 14302f348 FUN_14302f348 body=3096 status=ok
// SIG undefined FUN_14302f348(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14302f348(longlong param_1)

{
  longlong *plVar1;
  size_t _Size;
  undefined8 *puVar2;
  undefined1 uVar3;
  code *pcVar4;
  float *pfVar5;
  undefined8 *puVar6;
  void *_Src;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  int *piVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  undefined4 local_140;
  undefined1 local_138;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  int local_104;
  longlong local_100;
  int *local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  undefined8 *local_e0;
  longlong *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar12 = *(longlong *)(param_1 + 0xa8);
  local_f8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
  local_104 = *local_f8;
  if (local_104 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    local_104 = *local_f8;
  }
  if ((local_104 == 0x60000000) || (local_104 == 0)) {
    *local_f8 = 0x40000010;
  }
  LOCK();
  piVar22 = (int *)(lVar12 + 0x218);
  *piVar22 = *piVar22 + -1;
  UNLOCK();
  if ((*piVar22 == 0) && (pcVar4 = *(code **)(lVar12 + 0x1a0), pcVar4 != (code *)0x0)) {
    plVar13 = (longlong *)(lVar12 + 0x1c0);
    if (*(longlong **)(lVar12 + 0x1b0) != (longlong *)0x0) {
      plVar13 = *(longlong **)(lVar12 + 0x1b0);
    }
    uVar9 = (**(code **)(*plVar13 + 8))();
    (*pcVar4)(uVar9);
  }
  lVar12 = *(longlong *)(lVar12 + 0x68);
  *(undefined1 *)(lVar12 + 0x89) = 1;
  local_128 = lVar12;
  if ((longlong)*(int *)(lVar12 + 0x60) != 0) {
    plVar13 = *(longlong **)(lVar12 + 0x58);
    local_d8 = plVar13 + *(int *)(lVar12 + 0x60);
    local_e0 = (undefined8 *)(lVar12 + 8);
    do {
      plVar18 = (longlong *)*plVar13;
      local_c8 = *(undefined8 *)(lVar12 + 0x78);
      local_c0 = local_e0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = plVar18[2] + 0x2158;
      local_110 = plVar13;
      local_d0 = (longlong)plVar18;
      if ((longlong)*(int *)(plVar18 + 0x1a) != 0) {
        lVar12 = plVar18[0x19];
        lVar10 = (longlong)*(int *)(plVar18 + 0x1a) * 0x38 + lVar12;
        do {
          local_148 = local_c0;
          FUN_1472dab7e(*(undefined8 *)(local_d0 + 0x28),lVar12,lVar12 + 8);
          lVar12 = lVar12 + 0x38;
        } while (lVar12 != lVar10);
      }
      puVar6 = local_c0;
      lVar12 = local_d0;
      local_118 = plVar18;
      if ((longlong)*(int *)(plVar18 + 0x18) != 0) {
        plVar16 = (longlong *)plVar18[0x17];
        plVar18 = plVar16 + (longlong)*(int *)(plVar18 + 0x18) * 8;
        plVar13 = local_c0 + 1;
        do {
          lVar10 = 0x136a0;
          if ((char)plVar16[7] != '\0') {
            lVar10 = 0x136c8;
          }
          plVar1 = (longlong *)(*(longlong *)(lVar12 + 8) + lVar10);
          lVar10 = *(longlong *)(*(longlong *)(lVar12 + 8) + 0x10 + lVar10);
          if ((lVar10 == 0) || (*(uint *)(plVar1 + 3) <= *(uint *)((longlong)plVar1 + 0x1c))) {
            iVar17 = (int)plVar1[1];
            *(uint *)(plVar1 + 1) = iVar17 + 1U;
            if (*(uint *)((longlong)plVar1 + 0xc) < iVar17 + 1U) {
              FUN_14480cf46(plVar1,iVar17);
            }
            lVar10 = *plVar1;
            lVar21 = (longlong)iVar17 * 0x20;
            puVar2 = (undefined8 *)(lVar10 + 8 + lVar21);
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined4 *)(lVar10 + 0x18 + lVar21) = 0;
            plVar1[2] = lVar10 + lVar21;
            lVar10 = plVar1[4];
            plVar11 = (longlong *)(lVar10 + (ulonglong)*(uint *)(lVar10 + 0xc0) * 0x18);
            iVar17 = (int)plVar11[1];
            iVar8 = (int)plVar11[2];
            if (iVar8 < iVar17) {
              *(int *)(plVar11 + 2) = iVar8 + 1;
              uVar9 = *(undefined8 *)(*plVar11 + (longlong)iVar8 * 8);
            }
            else {
              uVar19 = 0;
              do {
                if (uVar19 != *(uint *)(lVar10 + 0xc0)) {
                  iVar15 = *(int *)(lVar10 + 8 + uVar19 * 0x18);
                  if (*(int *)(lVar10 + 0x10 + uVar19 * 0x18) < iVar15) {
                    local_120 = (longlong *)(lVar10 + uVar19 * 0x18);
                    local_e8 = uVar19;
                    do {
                      local_f0 = *(undefined8 *)(*local_120 + -8 + (longlong)iVar15 * 8);
                      *(undefined8 *)(*local_120 + -8 + (longlong)iVar15 * 8) = 0;
                      FUN_144b16a2e(local_120,(int)local_120[1] + -1);
                      local_100 = (longlong)(int)plVar11[1];
                      uVar20 = (int)plVar11[1] + 1;
                      *(uint *)(plVar11 + 1) = uVar20;
                      if (*(uint *)((longlong)plVar11 + 0xc) < uVar20) {
                        FUN_1404e2186(plVar11,local_100);
                      }
                      *(undefined8 *)(*plVar11 + local_100 * 8) = local_f0;
                      iVar15 = (int)local_120[1];
                    } while ((int)local_120[2] < iVar15);
                    iVar17 = (int)plVar11[1];
                    iVar8 = (int)plVar11[2];
                    uVar19 = local_e8;
                  }
                  if (iVar8 < iVar17) {
                    *(int *)(plVar11 + 2) = iVar8 + 1;
                    lVar10 = *plVar11;
                    goto LAB_14302f8f1;
                  }
                }
                uVar19 = uVar19 + 1;
              } while (uVar19 != 8);
              (**(code **)(*DAT_14ca83900 + 0x290))(DAT_14ca83900,&local_a0,1);
              if (local_a0 == 0) {
                uVar9 = 0;
              }
              else {
                iVar17 = (int)plVar11[1];
                *(uint *)(plVar11 + 1) = iVar17 + 1U;
                if (*(uint *)((longlong)plVar11 + 0xc) < iVar17 + 1U) {
                  FUN_1404e2186(plVar11,iVar17);
                }
                *(longlong *)(*plVar11 + (longlong)iVar17 * 8) = local_a0;
                local_a0 = 0;
                iVar8 = (int)plVar11[2];
                *(int *)(plVar11 + 2) = iVar8 + 1;
                lVar10 = *plVar11;
LAB_14302f8f1:
                uVar9 = *(undefined8 *)(lVar10 + (longlong)iVar8 * 8);
              }
            }
            *(undefined8 *)plVar1[2] = uVar9;
            iVar17 = (int)plVar1[3] * 0x60;
            if (*(int *)(puVar6 + 2) == 0) {
LAB_14302f770:
              plVar11 = (longlong *)FUN_1400f777c(&DAT_14ca8c130,*puVar6,iVar17,0);
              iVar8 = *(int *)(puVar6 + 2);
              *(uint *)(puVar6 + 2) = iVar8 + 1U;
              if (*(uint *)((longlong)puVar6 + 0x14) < iVar8 + 1U) {
                local_120 = plVar11;
                FUN_1400f7990(plVar13,iVar8);
                plVar11 = local_120;
              }
              *(longlong **)(puVar6[1] + (longlong)iVar8 * 8) = plVar11;
              lVar10 = *(longlong *)(puVar6[1] + (longlong)(*(int *)(puVar6 + 2) + -1) * 8);
              uVar20 = *(uint *)(lVar10 + 0x24);
              uVar14 = iVar17 + uVar20;
            }
            else {
              lVar10 = *(longlong *)(*plVar13 + (longlong)(*(int *)(puVar6 + 2) + -1) * 8);
              uVar20 = *(uint *)(lVar10 + 0x24);
              uVar14 = uVar20 + iVar17;
              if (*(uint *)(lVar10 + 0x20) < uVar14) goto LAB_14302f770;
            }
            *(uint *)(lVar10 + 0x24) = uVar14;
            lVar21 = plVar1[2];
            *(ulonglong *)(lVar21 + 8) = (ulonglong)uVar20 + *(longlong *)(lVar10 + 0x18);
            *(longlong *)(lVar21 + 0x10) = lVar10;
            *(uint *)(lVar21 + 0x18) = uVar20;
            *(undefined4 *)((longlong)plVar1 + 0x1c) = 0;
            lVar10 = plVar1[2];
          }
          fVar24 = (float)((double)plVar16[3] - (double)plVar16[6]);
          fVar28 = (float)((double)plVar16[2] - (double)plVar16[5]);
          fVar29 = (float)((double)plVar16[1] - (double)plVar16[4]);
          fVar25 = (float)((double)plVar16[3] + (double)plVar16[6]);
          fVar26 = (float)((double)plVar16[2] + (double)plVar16[5]);
          fVar27 = (float)((double)plVar16[1] + (double)plVar16[4]);
          pfVar5 = *(float **)(lVar10 + 8);
          *pfVar5 = fVar29;
          pfVar5[1] = fVar28;
          pfVar5[2] = fVar24;
          pfVar5[3] = fVar29;
          pfVar5[4] = fVar28;
          pfVar5[5] = fVar25;
          pfVar5[6] = fVar29;
          pfVar5[7] = fVar26;
          pfVar5[8] = fVar24;
          pfVar5[9] = fVar29;
          pfVar5[10] = fVar26;
          pfVar5[0xb] = fVar25;
          pfVar5[0xc] = fVar27;
          pfVar5[0xd] = fVar28;
          pfVar5[0xe] = fVar24;
          pfVar5[0xf] = fVar27;
          pfVar5[0x10] = fVar28;
          pfVar5[0x11] = fVar25;
          pfVar5[0x12] = fVar27;
          pfVar5[0x13] = fVar26;
          pfVar5[0x14] = fVar24;
          pfVar5[0x15] = fVar27;
          pfVar5[0x16] = fVar26;
          pfVar5[0x17] = fVar25;
          *(float **)(plVar1[2] + 8) = pfVar5 + 0x18;
          *(int *)((longlong)plVar1 + 0x1c) = *(int *)((longlong)plVar1 + 0x1c) + 1;
          uVar9 = *(undefined8 *)plVar1[2];
          lVar10 = *(longlong *)(lVar12 + 0x10);
          lVar21 = lVar10 + 0x21a8;
          if (*(longlong *)(lVar10 + 0x21c8) != 0) {
            lVar21 = *(longlong *)(lVar10 + 0x21c8);
          }
          *(undefined8 *)
           (lVar21 + (longlong)
                     (*(int *)(lVar10 + 0x4c8) % *(int *)(*(longlong *)(lVar12 + 0x48) + 4)) * 8) =
               uVar9;
          piVar22 = (int *)(*(longlong *)(lVar12 + 0x10) + 0x21d8);
          *piVar22 = *piVar22 + 1;
          lVar10 = *plVar16;
          uVar3 = *(undefined1 *)(*(longlong *)(lVar12 + 0x48) + 0xe);
          lVar21 = plVar16[7];
          iVar17 = *(int *)(*(longlong *)(lVar12 + 0x10) + 0x4c8);
          uVar19 = (longlong)iVar17 % (longlong)*(int *)(*(longlong *)(lVar12 + 0x48) + 4) &
                   0xffffffff;
          *(undefined8 *)(lVar10 + 8 + uVar19 * 8) = uVar9;
          *(int *)(lVar10 + 0x28 + uVar19 * 4) = iVar17;
          *(char *)(lVar10 + 0x55 + uVar19) = (char)lVar21;
          *(undefined1 *)(lVar10 + 0x59) = uVar3;
          plVar16 = plVar16 + 8;
        } while (plVar16 != plVar18);
      }
      lVar12 = local_d0;
      plVar13 = local_118;
      if ((longlong)(int)local_118[0x1e] != 0) {
        lVar10 = local_118[0x1d];
        lVar21 = (longlong)(int)local_118[0x1e] * 0x38;
        do {
          local_a0 = CONCAT44(DAT_14c75905c,DAT_14c758d28);
          local_98 = DAT_14c758d28;
          local_94 = 0x3f800000;
          local_140 = 0;
          local_148 = (undefined8 *)((ulonglong)local_148 & 0xffffffff00000000);
          local_138 = 0;
          FUN_147cb7407(*(undefined8 *)(lVar12 + 0x18),lVar10,&local_a0);
          lVar10 = lVar10 + 0x38;
          lVar21 = lVar21 + -0x38;
        } while (lVar21 != 0);
      }
      lVar12 = local_128;
      lVar10 = (longlong)(int)plVar13[0x1c];
      if (lVar10 != 0) {
        lVar10 = lVar10 * 0x38;
        lVar21 = plVar13[0x1b] + 0x20;
        do {
          uVar7 = FUN_1472d9f80(*(undefined8 *)(local_d0 + 0x20),lVar21 + -0x18,lVar21);
          *(undefined4 *)(*(longlong *)(lVar21 + -0x20) + 0x40) = uVar7;
          lVar21 = lVar21 + 0x38;
          lVar10 = lVar10 + -0x38;
        } while (lVar10 != 0);
      }
      FUN_1430227fa(&local_b8);
      plVar13 = local_110 + 1;
    } while (plVar13 != local_d8);
    if ((longlong)*(int *)(lVar12 + 0x60) != 0) {
      plVar13 = *(longlong **)(local_128 + 0x58);
      local_110 = plVar13 + *(int *)(lVar12 + 0x60);
      do {
        lVar10 = local_128;
        lVar12 = *plVar13;
        iVar17 = *(int *)(lVar12 + 0xb0);
        local_118 = plVar13;
        if (iVar17 != 0) {
          plVar13 = *(longlong **)(lVar12 + 0xa0);
          uVar19 = 0;
          do {
            FUN_144a8c452(*(longlong *)(lVar10 + 0x38) + 0x2158,&local_d0,uVar19 * 0x60 + *plVar13);
            uVar20 = (int)uVar19 + 1;
            plVar13 = plVar13 + (9 < uVar20);
            uVar19 = (ulonglong)uVar20;
            if (9 < uVar20) {
              uVar19 = 0;
            }
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        if (lVar12 != 0) {
          puVar6 = *(undefined8 **)(lVar12 + 0xf8);
          if (puVar6 != (undefined8 *)0x0) {
            LOCK();
            piVar22 = (int *)(puVar6 + 1);
            *piVar22 = *piVar22 + -1;
            UNLOCK();
            if (*piVar22 == 0) {
              (**(code **)*puVar6)(puVar6,1);
            }
          }
          lVar10 = *(longlong *)(lVar12 + 0xe8);
          if (lVar10 != 0) {
            piVar22 = (int *)((lVar10 + -8) - (ulonglong)*(uint *)(lVar10 + -8));
            LOCK();
            *piVar22 = *piVar22 + -1;
            UNLOCK();
            if (*piVar22 == 0) {
              if (*(longlong *)(piVar22 + 0x10) - (longlong)piVar22 == 0x10000) {
                lVar10 = DAT_14c872d30;
                if (DAT_14c872d30 == 0) {
                  lVar10 = FUN_145bdc178();
                }
                FUN_140028df4(lVar10,piVar22);
              }
              else {
                FUN_144705e74(piVar22);
              }
            }
          }
          lVar10 = *(longlong *)(lVar12 + 0xd8);
          if (lVar10 != 0) {
            piVar22 = (int *)((lVar10 + -8) - (ulonglong)*(uint *)(lVar10 + -8));
            LOCK();
            *piVar22 = *piVar22 + -1;
            UNLOCK();
            if (*piVar22 == 0) {
              if (*(longlong *)(piVar22 + 0x10) - (longlong)piVar22 == 0x10000) {
                lVar10 = DAT_14c872d30;
                if (DAT_14c872d30 == 0) {
                  lVar10 = FUN_145bdc178();
                }
                FUN_140028df4(lVar10,piVar22);
              }
              else {
                FUN_144705e74(piVar22);
              }
            }
          }
          lVar10 = *(longlong *)(lVar12 + 200);
          if (lVar10 != 0) {
            piVar22 = (int *)((lVar10 + -8) - (ulonglong)*(uint *)(lVar10 + -8));
            LOCK();
            *piVar22 = *piVar22 + -1;
            UNLOCK();
            if (*piVar22 == 0) {
              if (*(longlong *)(piVar22 + 0x10) - (longlong)piVar22 == 0x10000) {
                lVar10 = DAT_14c872d30;
                if (DAT_14c872d30 == 0) {
                  lVar10 = FUN_145bdc178();
                }
                FUN_140028df4(lVar10,piVar22);
              }
              else {
                FUN_144705e74(piVar22);
              }
            }
          }
          lVar10 = *(longlong *)(lVar12 + 0xb8);
          if (lVar10 != 0) {
            piVar22 = (int *)((lVar10 + -8) - (ulonglong)*(uint *)(lVar10 + -8));
            LOCK();
            *piVar22 = *piVar22 + -1;
            UNLOCK();
            if (*piVar22 == 0) {
              if (*(longlong *)(piVar22 + 0x10) - (longlong)piVar22 == 0x10000) {
                lVar10 = DAT_14c872d30;
                if (DAT_14c872d30 == 0) {
                  lVar10 = FUN_145bdc178();
                }
                FUN_140028df4(lVar10,piVar22);
              }
              else {
                FUN_144705e74(piVar22);
              }
            }
          }
          plVar13 = (longlong *)(lVar12 + 0xa0);
          iVar17 = *(int *)(lVar12 + 0xa8);
          if (iVar17 != 0) {
            lVar10 = *plVar13;
            lVar21 = 0;
            do {
              if (*(longlong *)(lVar10 + lVar21 * 8) != 0) {
                FUN_1400020a8();
              }
              lVar21 = lVar21 + 1;
            } while (iVar17 != (int)lVar21);
          }
          *(undefined4 *)(lVar12 + 0xa8) = 0;
          if (*(int *)(lVar12 + 0xac) != 0) {
            FUN_144ab7cb2(plVar13,0);
          }
          FUN_1400461f8(plVar13);
          plVar13 = (longlong *)(lVar12 + 0x88);
          iVar17 = *(int *)(lVar12 + 0x90);
          if (iVar17 != 0) {
            lVar10 = *plVar13;
            lVar21 = 0;
            do {
              if (*(longlong *)(lVar10 + lVar21 * 8) != 0) {
                FUN_1400020a8();
              }
              lVar21 = lVar21 + 1;
            } while (iVar17 != (int)lVar21);
          }
          *(undefined4 *)(lVar12 + 0x90) = 0;
          if (*(int *)(lVar12 + 0x94) != 0) {
            FUN_144ab7cb2(plVar13,0);
          }
          FUN_1400461f8(plVar13);
          piVar22 = (int *)((lVar12 + -8) - (ulonglong)*(uint *)(lVar12 + -8));
          LOCK();
          *piVar22 = *piVar22 + -1;
          UNLOCK();
          if (*piVar22 == 0) {
            if (*(longlong *)(piVar22 + 0x10) - (longlong)piVar22 == 0x10000) {
              lVar12 = DAT_14c872d30;
              if (DAT_14c872d30 == 0) {
                lVar12 = FUN_145bdc178();
              }
              FUN_140028df4(lVar12);
            }
            else {
              FUN_144705e74(piVar22);
            }
          }
        }
        plVar13 = local_118 + 1;
      } while (plVar13 != local_110);
    }
  }
  lVar12 = local_128;
  *(undefined4 *)(local_128 + 0x60) = 0;
  if (*(int *)(local_128 + 100) != 0) {
    FUN_14177ff50(local_128 + 0x58);
  }
  lVar10 = *(longlong *)(lVar12 + 8);
  if (lVar10 != 0) {
    uVar20 = *(uint *)(lVar12 + 0x18);
    if ((longlong)(int)uVar20 != 0) {
      _Src = *(void **)(lVar12 + 0x10);
      _Size = (longlong)(int)uVar20 * 8;
      lVar21 = 0;
      do {
        FUN_140152f5c(*(undefined8 *)((longlong)_Src + lVar21),lVar10);
        lVar21 = lVar21 + 8;
      } while (_Size - lVar21 != 0);
      LOCK();
      bVar23 = DAT_14ca8c140 == '\0';
      if (bVar23) {
        DAT_14ca8c140 = '\x01';
      }
      UNLOCK();
      if (!bVar23) {
        FUN_1447d2058(&DAT_14ca8c140);
      }
      iVar17 = DAT_14ca8c180;
      lVar10 = (longlong)DAT_14ca8c180;
      iVar8 = DAT_14ca8c180 + uVar20;
      uVar14 = DAT_14ca8c184 - DAT_14ca8c180;
      DAT_14ca8c180 = iVar8;
      if (uVar14 < uVar20) {
        FUN_1400f7990(&DAT_14ca8c178,iVar17);
      }
      memcpy((void *)(lVar10 * 8 + _DAT_14ca8c178),_Src,_Size);
      LOCK();
      bVar23 = DAT_14ca8c140 == '\x01';
      if (bVar23) {
        DAT_14ca8c140 = '\0';
      }
      UNLOCK();
      if (!bVar23) {
        FUN_14008cdb0(&DAT_14ca8c140);
      }
    }
    *(undefined4 *)(lVar12 + 0x18) = 0;
    if (*(int *)(lVar12 + 0x1c) < 0) {
      FUN_145ccb7b2(lVar12 + 0x10,0);
    }
  }
  FUN_1447850c6(*(undefined8 *)(lVar12 + 0x78));
  FUN_1400daade(lVar12 + 0x80);
  if ((local_104 == 0x60000000) || (local_104 == 0)) {
    *local_f8 = local_104;
  }
  if ((local_90 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14302ff62 FUN_14302ff62 body=110 status=ok
// SIG undefined FUN_14302ff62(void)

undefined8 * FUN_14302ff62(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14302ffd0 FUN_14302ffd0 body=190 status=ok
// SIG undefined FUN_14302ffd0(void)

void FUN_14302ffd0(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_1;
  LOCK();
  piVar1 = (int *)(*(longlong *)(lVar3 + 0x220) + 200);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  FUN_1472e7c86(*(undefined8 *)(lVar3 + 0x220));
  uVar2 = *(undefined8 *)(lVar3 + 0x140);
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_2c = 0;
  }
  else {
    FUN_14721d452(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar3 << 2);
  }
  FUN_1447a0c00(uVar2,&local_38);
  FUN_140020148(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430300ba FUN_1430300ba body=29 status=ok
// SIG undefined FUN_1430300ba(void)

undefined8 FUN_1430300ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143030112 FUN_143030112 body=29 status=ok
// SIG undefined FUN_143030112(void)

undefined8 FUN_143030112(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143030130 FUN_143030130 body=97 status=ok
// SIG undefined FUN_143030130(void)

void FUN_143030130(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar2 = *param_1;
  FUN_14300b772(*(undefined8 *)(lVar2 + 0x140),lVar2 + 0x248);
  lVar2 = *(longlong *)(lVar2 + 0x220);
  LOCK();
  piVar1 = (int *)(lVar2 + 200);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((*piVar1 == 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x50), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar4 = (longlong *)(lVar2 + 0x70);
    if (*(longlong **)(lVar2 + 0x60) != (longlong *)0x0) {
      plVar4 = *(longlong **)(lVar2 + 0x60);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143030187. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar3);
    return;
  }
  return;
}



// FUNCTION 1430301bc FUN_1430301bc body=29 status=ok
// SIG undefined FUN_1430301bc(void)

undefined8 FUN_1430301bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430301da FUN_1430301da body=102 status=ok
// SIG undefined FUN_1430301da(void)

void FUN_1430301da(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  longlong *plVar4;
  
  param_1 = (longlong *)*param_1;
  FUN_14300b772(param_1[0x28],param_1 + 0x49);
  lVar2 = *(longlong *)(*param_1 + 0x58);
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 200);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x50), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      plVar4 = (longlong *)(lVar2 + 0x70);
      if (*(longlong **)(lVar2 + 0x60) != (longlong *)0x0) {
        plVar4 = *(longlong **)(lVar2 + 0x60);
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000143030236. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 14303026a FUN_14303026a body=29 status=ok
// SIG undefined FUN_14303026a(void)

undefined8 FUN_14303026a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143030288 FUN_143030288 body=547 status=ok
// SIG undefined FUN_143030288(void)

longlong * FUN_143030288(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 1430304ac FUN_1430304ac body=973 status=ok
// SIG undefined FUN_1430304ac(void)

void FUN_1430304ac(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar2 = *(longlong *)(param_1 + 0xa8);
  lVar3 = *(longlong *)(lVar2 + 0x18);
  plVar1 = (longlong *)(lVar3 + 0x3d20);
  iVar7 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x3338);
  iVar4 = *(int *)(lVar3 + 0x3d28);
  if (iVar4 < iVar7) {
    *(int *)(lVar3 + 0x3d28) = iVar7;
    if ((uint)(*(int *)(lVar3 + 0x3d2c) - iVar4) < (uint)(iVar7 - iVar4)) {
      FUN_140322db4(plVar1);
    }
    memset((void *)((longlong)iVar4 * 8 + *plVar1),0,(longlong)(iVar7 - iVar4) << 3);
  }
  else {
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if (iVar7 < iVar4) {
      *(int *)(lVar3 + 0x3d28) = iVar7;
      FUN_1472e7f90(plVar1);
    }
  }
  iVar7 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x3338);
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  lVar3 = *(longlong *)(lVar2 + 0x18);
  plVar1 = (longlong *)(lVar3 + 0x3248);
  *(undefined4 *)(lVar3 + 0x3250) = 0;
  if (*(int *)(lVar3 + 0x3254) != iVar7) {
    FUN_1402d3b42(plVar1);
  }
  for (; iVar7 != 0; iVar7 = iVar7 + -1) {
    iVar4 = *(int *)(lVar3 + 0x3250);
    uVar8 = iVar4 + 1;
    *(uint *)(lVar3 + 0x3250) = uVar8;
    if (*(uint *)(lVar3 + 0x3254) < uVar8) {
      FUN_1472e7fdc(plVar1);
    }
    *(undefined2 *)(*plVar1 + (longlong)iVar4 * 2) = 0;
  }
  lVar3 = *(longlong *)(lVar2 + 0x18);
  iVar7 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x4ce0);
  *(int *)(lVar3 + 0x3200) = iVar7;
  uVar8 = iVar7 + 0x1f;
  if (0x1f < uVar8) {
    uVar9 = uVar8 >> 5;
    if (*(int *)(&DAT_00003204 + lVar3) + 0x1fU >> 5 < uVar9) {
      uVar10 = uVar9;
      if ((0x9f < uVar8) || (uVar10 = 0, *(longlong *)(lVar3 + 0x31f8) != 0)) {
        FUN_140064110((longlong *)(lVar3 + 0x31f8),0,uVar10,4);
      }
      *(uint *)(&DAT_00003204 + lVar3) = uVar8 & 0xffffffe0;
    }
    pvVar6 = *(void **)(lVar3 + 0x31f8);
    if (*(void **)(lVar3 + 0x31f8) == (void *)0x0) {
      pvVar6 = (void *)(lVar3 + 0x31e8);
    }
    if (uVar8 < 0x120) {
      uVar9 = uVar8 >> 3 & 0x3c;
    }
    else {
      uVar9 = uVar9 << 2;
    }
    memset(pvVar6,0,(ulonglong)uVar9);
    iVar7 = *(int *)(lVar3 + 0x3200);
    iVar4 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar4 = iVar7;
    }
    if (iVar7 % 0x20 != 0) {
      pvVar6 = (void *)(lVar3 + 0x31e8);
      if (*(void **)(lVar3 + 0x31f8) != (void *)0x0) {
        pvVar6 = *(void **)(lVar3 + 0x31f8);
      }
      bVar5 = -(char)(iVar7 % 0x20);
      *(uint *)((longlong)pvVar6 + (longlong)(iVar4 >> 5) * 4) =
           (uint)(*(int *)((longlong)pvVar6 + (longlong)(iVar4 >> 5) * 4) << (bVar5 & 0x1f)) >>
           (bVar5 & 0x1f);
    }
  }
  lVar3 = *(longlong *)(lVar2 + 0x18);
  iVar7 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x4ce0);
  *(int *)(lVar3 + 0x3220) = iVar7;
  uVar8 = iVar7 + 0x1f;
  if (0x1f < uVar8) {
    uVar9 = uVar8 >> 5;
    if (*(int *)(&DAT_00003224 + lVar3) + 0x1fU >> 5 < uVar9) {
      uVar10 = uVar9;
      if ((0x9f < uVar8) || (uVar10 = 0, *(longlong *)(lVar3 + 0x3218) != 0)) {
        FUN_140064110((longlong *)(lVar3 + 0x3218),0,uVar10,4);
      }
      *(uint *)(&DAT_00003224 + lVar3) = uVar8 & 0xffffffe0;
    }
    pvVar6 = *(void **)(lVar3 + 0x3218);
    if (*(void **)(lVar3 + 0x3218) == (void *)0x0) {
      pvVar6 = (void *)(lVar3 + 0x3208);
    }
    if (uVar8 < 0x120) {
      uVar9 = uVar8 >> 3 & 0x3c;
    }
    else {
      uVar9 = uVar9 << 2;
    }
    memset(pvVar6,0,(ulonglong)uVar9);
    iVar7 = *(int *)(lVar3 + 0x3220);
    iVar4 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar4 = iVar7;
    }
    if (iVar7 % 0x20 != 0) {
      pvVar6 = (void *)(lVar3 + 0x3208);
      if (*(void **)(lVar3 + 0x3218) != (void *)0x0) {
        pvVar6 = *(void **)(lVar3 + 0x3218);
      }
      bVar5 = -(char)(iVar7 % 0x20);
      *(uint *)((longlong)pvVar6 + (longlong)(iVar4 >> 5) * 4) =
           (uint)(*(int *)((longlong)pvVar6 + (longlong)(iVar4 >> 5) * 4) << (bVar5 & 0x1f)) >>
           (bVar5 & 0x1f);
    }
  }
  lVar3 = *(longlong *)(lVar2 + 0x18);
  iVar7 = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x4ce0);
  *(int *)(lVar3 + 0x3240) = iVar7;
  uVar8 = iVar7 + 0x1f;
  if (0x1f < uVar8) {
    uVar9 = uVar8 >> 5;
    if (*(int *)(lVar3 + 0x3244) + 0x1fU >> 5 < uVar9) {
      uVar10 = uVar9;
      if ((0x9f < uVar8) || (uVar10 = 0, *(longlong *)(lVar3 + 0x3238) != 0)) {
        FUN_140064110((longlong *)(lVar3 + 0x3238),0,uVar10,4);
      }
      *(uint *)(lVar3 + 0x3244) = uVar8 & 0xffffffe0;
    }
    pvVar6 = *(void **)(lVar3 + 0x3238);
    if (*(void **)(lVar3 + 0x3238) == (void *)0x0) {
      pvVar6 = (void *)(lVar3 + 0x3228);
    }
    if (uVar8 < 0x120) {
      uVar9 = uVar8 >> 3 & 0x3c;
    }
    else {
      uVar9 = uVar9 << 2;
    }
    memset(pvVar6,0,(ulonglong)uVar9);
    iVar7 = *(int *)(lVar3 + 0x3240);
    iVar4 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar4 = iVar7;
    }
    if (iVar7 % 0x20 != 0) {
      pvVar6 = (void *)(lVar3 + 0x3228);
      if (*(void **)(lVar3 + 0x3238) != (void *)0x0) {
        pvVar6 = *(void **)(lVar3 + 0x3238);
      }
      bVar5 = -(char)(iVar7 % 0x20);
      *(uint *)((longlong)pvVar6 + (longlong)(iVar4 >> 5) * 4) =
           (uint)(*(int *)((longlong)pvVar6 + (longlong)(iVar4 >> 5) * 4) << (bVar5 & 0x1f)) >>
           (bVar5 & 0x1f);
    }
  }
  return;
}



// FUNCTION 14303087a FUN_14303087a body=110 status=ok
// SIG undefined FUN_14303087a(void)

undefined8 * FUN_14303087a(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430308e8 FUN_1430308e8 body=547 status=ok
// SIG undefined FUN_1430308e8(void)

longlong * FUN_1430308e8(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 143030b0c FUN_143030b0c body=204 status=ok
// SIG undefined FUN_143030b0c(void)

void FUN_143030b0c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined3 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0xa8);
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar3 = *piVar1;
  if (iVar3 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar3 = *piVar1;
  }
  if ((iVar3 == 0x60000000) || (iVar3 == 0)) {
    *piVar1 = 0x40000010;
  }
  local_38 = *(undefined4 *)(param_1 + 0xb8);
  local_30 = *(undefined4 *)(param_1 + 0xb0);
  uStack_2c = (undefined3)((uint)*(undefined4 *)(param_1 + 0xb3) >> 8);
  FUN_143030c48(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18),&local_30,
                *(undefined8 *)(lVar2 + 8));
  if ((iVar3 == 0x60000000) || (iVar3 == 0)) {
    *piVar1 = iVar3;
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143030bda FUN_143030bda body=110 status=ok
// SIG undefined FUN_143030bda(void)

undefined8 * FUN_143030bda(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143030c48 FUN_143030c48 body=757 status=ok
// SIG undefined FUN_143030c48(void)

void FUN_143030c48(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5)

{
  int iVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  
  iVar1 = *(int *)(param_1 + 0x3328);
  iVar13 = iVar1 + 0x1f;
  if (-1 < iVar1) {
    iVar13 = iVar1;
  }
  param_5 = *(int *)(param_4 + 0x18) * param_5;
  lVar10 = param_2 + 0x3118;
  if (*(longlong *)(param_2 + 0x3128) != 0) {
    lVar10 = *(longlong *)(param_2 + 0x3128);
  }
  lVar5 = param_2 + 0x3138;
  if (*(longlong *)(param_2 + 0x3148) != 0) {
    lVar5 = *(longlong *)(param_2 + 0x3148);
  }
  iVar1 = *(int *)(param_4 + 8);
  cVar2 = FUN_144785782(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2));
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else if (*(char *)(param_2 + 0x3098) == '\x01') {
    cVar2 = '\x01';
    if (*(char *)(param_2 + 0x23e8) == '\x01') {
      cVar2 = *(char *)(param_2 + 0x23ea);
    }
  }
  else {
    cVar2 = '\0';
  }
  uVar6 = (ulonglong)(uint)(param_5 * 0x20);
  if (param_5 * 0x20 < iVar1 && 0 < *(int *)(param_4 + 0x18)) {
    lVar15 = (longlong)param_5;
    do {
      lVar7 = (iVar13 >> 5) + lVar15;
      uVar17 = 1;
      uVar11 = 0;
      uVar14 = 0;
      uVar12 = 0;
      do {
        if (cVar2 != '\0') {
          lVar8 = uVar11 + lVar7 * 0x20;
          if (((*(byte *)(param_3 + 5) & 1) != 0) &&
             (*(int *)(param_2 + 0x1ea0) != *(int *)(param_2 + 0x1ecc))) {
            uVar4 = *(uint *)(*(longlong *)(param_1 + 0x33d8) + lVar8 * 4);
            lVar16 = *(longlong *)(param_2 + 0x1ed8);
            if (*(longlong *)(param_2 + 0x1ed8) == 0) {
              lVar16 = param_2 + 0x1ed0;
            }
            iVar9 = *(int *)(lVar16 + (ulonglong)(*(int *)(param_2 + 0x1ee0) - 1U & uVar4) * 4);
            if (iVar9 != -1) {
              do {
                if (*(uint *)(*(longlong *)(param_2 + 0x1e98) + (longlong)iVar9 * 0xc) == uVar4)
                goto LAB_143030dcd;
                iVar9 = *(int *)(*(longlong *)(param_2 + 0x1e98) + (longlong)iVar9 * 0xc + 4);
              } while (iVar9 != -1);
            }
          }
          if ((*(byte *)(param_3 + 6) & 1) == 0) {
LAB_143030daf:
            cVar3 = FUN_1472e598d(param_1,param_2);
            uVar4 = uVar17;
            if (cVar3 != '\0') {
              uVar4 = 0;
            }
            uVar14 = uVar14 | uVar4;
          }
          else if (*(int *)(param_2 + 0x1ef0) != *(int *)(param_2 + 0x1f1c)) {
            uVar4 = *(uint *)(*(longlong *)(param_1 + 0x33d8) + lVar8 * 4);
            lVar8 = *(longlong *)(param_2 + 0x1f28);
            if (*(longlong *)(param_2 + 0x1f28) == 0) {
              lVar8 = param_2 + 0x1f20;
            }
            iVar9 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_2 + 0x1f30) - 1U & uVar4) * 4);
            if (iVar9 != -1) {
              do {
                if (*(uint *)(*(longlong *)(param_2 + 0x1ee8) + (longlong)iVar9 * 0xc) == uVar4)
                goto LAB_143030daf;
                iVar9 = *(int *)(*(longlong *)(param_2 + 0x1ee8) + (longlong)iVar9 * 0xc + 4);
              } while (iVar9 != -1);
            }
          }
        }
LAB_143030dcd:
        uVar12 = uVar12 | uVar17;
        if (0x1e < uVar11) break;
        uVar17 = uVar17 * 2;
        lVar8 = uVar11 + (longlong)(int)uVar6;
        uVar11 = uVar11 + 1;
      } while (lVar8 + 1 < (longlong)iVar1);
      *(uint *)(lVar10 + lVar7 * 4) = uVar12;
      if (uVar14 != 0) {
        *(uint *)(lVar5 + lVar7 * 4) = uVar14;
      }
      lVar15 = lVar15 + 1;
    } while ((lVar15 < (longlong)param_5 + (longlong)*(int *)(param_4 + 0x18)) &&
            (uVar6 = lVar15 * 0x20, (longlong)uVar6 < (longlong)iVar1));
  }
  return;
}



// FUNCTION 143030f3e FUN_143030f3e body=547 status=ok
// SIG undefined FUN_143030f3e(void)

longlong * FUN_143030f3e(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 143031162 FUN_143031162 body=2043 status=ok
// SIG undefined FUN_143031162(void)

void FUN_143031162(longlong param_1)

{
  int *piVar1;
  char *pcVar2;
  uint *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  undefined8 *lpTlsValue;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  ulonglong uVar29;
  uint uVar30;
  uint uVar31;
  bool bVar32;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  ulonglong local_88;
  int local_7c;
  int *local_78;
  undefined4 local_70;
  undefined3 uStack_6c;
  ulonglong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = *(longlong *)(param_1 + 0xa8);
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_7c = *piVar1;
  if (local_7c == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    local_7c = *piVar1;
  }
  if ((local_7c == 0x60000000) || (local_7c == 0)) {
    *piVar1 = 0x40000010;
  }
  local_90 = *(undefined4 *)(param_1 + 0xd0);
  local_98 = *(undefined8 *)(lVar5 + 8);
  local_a8 = *(undefined4 *)(param_1 + 0xc0);
  uStack_a4 = *(undefined4 *)(param_1 + 0xc4);
  uStack_a0 = *(undefined4 *)(param_1 + 200);
  uStack_9c = *(undefined4 *)(param_1 + 0xcc);
  local_70._0_3_ = (undefined3)*(undefined4 *)(param_1 + 0xb0);
  local_70._3_1_ = (undefined1)*(undefined4 *)(param_1 + 0xb3);
  uStack_6c = (undefined3)((uint)*(undefined4 *)(param_1 + 0xb3) >> 8);
  iVar8 = FUN_1430319cc(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(lVar5 + 0x18),&local_70,
                        *(undefined4 *)(param_1 + 0xb8));
  lVar6 = *(longlong *)(lVar5 + 0x18);
  iVar9 = *(int *)(*(longlong *)(lVar5 + 8) + 0xc);
  iVar27 = *(int *)(*(longlong *)(lVar5 + 8) + 0x2c);
  uVar20 = *(int *)(param_1 + 0xd0) * iVar27;
  iVar27 = iVar27 + uVar20;
  if (iVar9 <= iVar27) {
    iVar27 = iVar9;
  }
  if (*(char *)(lVar6 + 0x23f1) == '\x01') {
    uVar22 = (int)uVar20 >> 5;
    uVar24 = (ulonglong)uVar22;
    uVar25 = (ulonglong)(uint)(1 << ((byte)uVar20 & 0x1f));
    uVar26 = -1 << ((byte)uVar20 & 0x1f);
    uVar14 = uVar20 & 0xffffffe0;
    uVar21 = *(uint *)(lVar6 + 0x3130);
    uVar31 = uVar20;
    if (uVar21 != uVar20) {
      lVar28 = *(longlong *)(lVar6 + 0x3128);
      if (*(longlong *)(lVar6 + 0x3128) == 0) {
        lVar28 = lVar6 + 0x3118;
      }
      lVar19 = (longlong)(int)uVar22;
      uVar30 = *(uint *)(lVar28 + lVar19 * 4) & uVar26;
      uVar31 = uVar21;
      if (uVar30 == 0) {
        iVar9 = uVar21 + 0x1e;
        if (-1 < (int)(uVar21 - 1)) {
          iVar9 = uVar21 - 1;
        }
        uVar30 = iVar9 >> 5;
        uVar24 = lVar19 + 1;
        uVar14 = uVar14 + 0x20;
        uVar23 = uVar30;
        if ((int)uVar30 < (int)uVar22) {
          uVar23 = uVar22;
        }
        if ((int)uVar22 < (int)uVar30) {
          lVar19 = (int)uVar23 - lVar19;
          do {
            uVar30 = *(uint *)(lVar28 + uVar24 * 4);
            if (uVar30 != 0) {
              uVar26 = 0xffffffff;
              uVar24 = uVar24 & 0xffffffff;
              goto LAB_1430312ff;
            }
            uVar24 = uVar24 + 1;
            uVar14 = uVar14 + 0x20;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          uVar26 = 0xffffffff;
          uVar24 = (longlong)(int)uVar23 + 1;
        }
      }
      else {
LAB_1430312ff:
        uVar25 = (ulonglong)(-uVar30 & uVar30);
        uVar16 = uVar25 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        uVar31 = (uVar14 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if ((int)uVar21 <= (int)uVar31) {
          uVar31 = uVar21;
        }
      }
    }
    while ((int)uVar31 < iVar27) {
      iVar9 = (int)uVar24;
      if ((*(byte *)(*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x3358) +
                      (longlong)(int)uVar31 * 8) + 0x6d) & 0x40) == 0) {
        lVar28 = *(longlong *)(*(longlong *)(lVar5 + 0x18) + 0x3128);
        lVar19 = *(longlong *)(lVar5 + 0x18) + 0x3118;
        if (lVar28 != 0) {
          lVar19 = lVar28;
        }
        puVar3 = (uint *)(lVar19 + (longlong)iVar9 * 4);
        *puVar3 = *puVar3 & ~(uint)uVar25;
        iVar8 = iVar8 + 1;
        uVar21 = *(uint *)(lVar6 + 0x3130);
      }
      lVar28 = (longlong)iVar9;
      uVar26 = ~(uint)uVar25 & uVar26;
      lVar19 = *(longlong *)(lVar6 + 0x3128);
      if (*(longlong *)(lVar6 + 0x3128) == 0) {
        lVar19 = lVar6 + 0x3118;
      }
      uVar31 = *(uint *)(lVar19 + lVar28 * 4) & uVar26;
      if (uVar31 == 0) {
        iVar17 = uVar21 + 0x1e;
        if (-1 < (int)(uVar21 - 1)) {
          iVar17 = uVar21 - 1;
        }
        iVar17 = iVar17 >> 5;
        uVar14 = uVar14 + 0x20;
        iVar18 = iVar17;
        if (iVar17 < iVar9) {
          iVar18 = iVar9;
        }
        if (iVar9 < iVar17) {
          do {
            uVar31 = *(uint *)(lVar19 + 4 + lVar28 * 4);
            if (uVar31 != 0) {
              uVar26 = 0xffffffff;
              uVar24 = (ulonglong)((int)lVar28 + 1);
              goto LAB_1430313ea;
            }
            uVar14 = uVar14 + 0x20;
            lVar28 = lVar28 + 1;
          } while (iVar18 != lVar28);
          uVar26 = 0xffffffff;
          lVar28 = (longlong)iVar18;
        }
        uVar24 = lVar28 + 1;
        uVar31 = uVar21;
      }
      else {
LAB_1430313ea:
        uVar25 = (ulonglong)(-uVar31 & uVar31);
        uVar16 = uVar25 * 2 + 1;
        lVar28 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar28 == 0; lVar28 = lVar28 + -1) {
          }
        }
        uVar31 = (uVar14 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
        if ((int)uVar21 <= (int)uVar31) {
          uVar31 = uVar21;
        }
      }
    }
  }
  local_78 = piVar1;
  if ((iVar27 == iVar8 + uVar20) && (*(int *)(*(longlong *)(lVar5 + 0x18) + 0x1dd0) != 1)) {
    LOCK();
    piVar1 = (int *)(lVar5 + 0x138);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (pcVar7 = *(code **)(lVar5 + 0xc0), pcVar7 != (code *)0x0)) {
      plVar15 = (longlong *)(lVar5 + 0xe0);
      if (*(longlong **)(lVar5 + 0xd0) != (longlong *)0x0) {
        plVar15 = *(longlong **)(lVar5 + 0xd0);
      }
      uVar10 = (**(code **)(*plVar15 + 8))();
      (*pcVar7)(uVar10);
    }
  }
  else {
    pcVar2 = (char *)(lVar5 + 0x100);
    LOCK();
    bVar32 = *(char *)(lVar5 + 0x100) == '\0';
    if (bVar32) {
      *(char *)(lVar5 + 0x100) = '\x01';
    }
    UNLOCK();
    if (!bVar32) {
      FUN_1447d2058(pcVar2);
    }
    iVar9 = *(int *)(lVar5 + 0x110);
    *(uint *)(lVar5 + 0x110) = iVar9 + 1U;
    if (*(uint *)(lVar5 + 0x114) < iVar9 + 1U) {
      FUN_144ab87ba((longlong *)(lVar5 + 0x108),iVar9);
    }
    *(ulonglong *)(*(longlong *)(lVar5 + 0x108) + (longlong)iVar9 * 8) = CONCAT44(iVar27,uVar20);
    LOCK();
    cVar4 = *pcVar2;
    if (cVar4 == '\x01') {
      *pcVar2 = '\0';
    }
    UNLOCK();
    if (cVar4 != '\x01') {
      FUN_14008cdb0(pcVar2);
    }
    if (iVar9 == 0) {
      uVar24 = FUN_14480154e(lVar5 + 0x118);
      lpTlsValue = TlsGetValue(DAT_14c896140);
      if (lpTlsValue == (undefined8 *)0x0) {
        lpTlsValue = (undefined8 *)FUN_14001cc68(0x18,0x10);
        *lpTlsValue = 0;
        lpTlsValue[1] = 0;
        *(undefined4 *)(lpTlsValue + 2) = 0;
        TlsSetValue(DAT_14c896140,lpTlsValue);
      }
      puVar12 = (undefined8 *)lpTlsValue[1];
      if (puVar12 == (undefined8 *)0x0) {
        puVar12 = (undefined8 *)*lpTlsValue;
        if (puVar12 == (undefined8 *)0x0) {
          uVar20 = (uint)DAT_14c896180;
          uVar25 = DAT_14c896180;
          while (DAT_14c896180 = uVar25, local_68 = uVar25, (uVar25 & 0x3ffffff) != 0) {
            local_88 = (uVar25 & 0xfffffffffc000000) + 0x4000000;
            if (local_88 >> 0x1a < uVar25 >> 0x1a) {
              FUN_14000f986(0x3a83126f);
            }
            uVar16 = (ulonglong)((uVar20 & 0x3ffffff) >> 0xe);
            uVar29 = (ulonglong)((uint)uVar25 & 0x3fff);
            local_88 = local_88 & 0xfffffffffc000000 |
                       (ulonglong)
                       *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar16 * 8) + 0x10 + uVar29 * 0x18);
            LOCK();
            bVar32 = local_68 == DAT_14c896180;
            uVar25 = local_88;
            if (!bVar32) {
              uVar25 = DAT_14c896180;
            }
            DAT_14c896180 = uVar25;
            UNLOCK();
            if (bVar32) {
              *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar16 * 8) + uVar29 * 0x18 + 0x10) = 0
              ;
              puVar12 = *(undefined8 **)
                         (*(longlong *)(&DAT_14c833b00 + uVar16 * 8) + 8 +
                         (ulonglong)(uVar20 & 0x3fff) * 0x18);
              FUN_1447d080c(uVar20 & 0x3ffffff);
              lpTlsValue[1] = puVar12;
              if (puVar12 != (undefined8 *)0x0) goto LAB_143031757;
              goto LAB_143031914;
            }
            uVar20 = (uint)DAT_14c896180;
            uVar25 = DAT_14c896180;
          }
          lpTlsValue[1] = 0;
LAB_143031914:
          puVar12 = (undefined8 *)FUN_14001cc68(0x10000,0);
          lpTlsValue[1] = puVar12;
          iVar9 = 0xff;
          puVar13 = puVar12;
          do {
            puVar11 = puVar13 + 0x20;
            *puVar13 = puVar11;
            iVar9 = iVar9 + -1;
            puVar13 = puVar11;
          } while (iVar9 != 0);
        }
        else {
          lpTlsValue[1] = puVar12;
          puVar11 = lpTlsValue;
        }
        *puVar11 = 0;
LAB_143031757:
        *(undefined4 *)(lpTlsValue + 2) = 0x100;
        iVar9 = 0xff;
      }
      else {
        iVar9 = *(int *)(lpTlsValue + 2) + -1;
      }
      lpTlsValue[1] = *puVar12;
      *(int *)(lpTlsValue + 2) = iVar9;
      *puVar12 = UE::Tasks::Private::FTaskBase::vftable;
      puVar12[1] = &DAT_100000002;
      puVar12[2] = 0;
      *(undefined4 *)(puVar12 + 3) = 0;
      *(undefined4 *)(puVar12 + 4) = 0xffffffff;
      puVar12[6] = 0;
      puVar12[7] = 0x100000000;
      *(undefined1 *)(puVar12 + 8) = 1;
      puVar12[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
      puVar12[0xf] = 0;
      puVar12[0x10] = 0xe800000000000020;
      puVar12[0x12] = 0;
      puVar12[0x13] = 0x100000000;
      *(undefined2 *)(puVar12 + 0x14) = 0;
      LOCK();
      bVar32 = *(char *)(puVar12 + 8) == '\x01';
      if (bVar32) {
        *(char *)(puVar12 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar32) {
        FUN_14008cdb0(puVar12 + 8);
      }
      *puVar12 = &PTR_FUN_14a2f9b10;
      if (*(code **)(puVar12[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar12[0xe] + 0x18))(puVar12 + 0xe,puVar12 + 9);
      }
      puVar12[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar12[9] = puVar12;
      puVar12[10] = puVar12;
      lVar6 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar6 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined8 *)(lVar6 + 0x30);
      }
      puVar12[0xf] = uVar10;
      puVar12[0x10] = (uVar24 & 0x1fffffffffffff) << 6 | 0xc800000000000000;
      *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
      puVar12[0x15] = lVar5 + 0x70;
      *puVar12 = &PTR_FUN_14a2f9b00;
      LOCK();
      *(longlong *)(lVar5 + 0x120) = *(longlong *)(lVar5 + 0x120) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)puVar12 + 0xc) = *(int *)((longlong)puVar12 + 0xc) + 1;
      UNLOCK();
      puVar12[2] = lVar5 + 0x118;
      FUN_1400e88c2(puVar12);
      local_68 = CONCAT71(local_68._1_7_,1);
      FUN_1447439e4(puVar12);
      if (puVar12 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar12 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar12)(puVar12,1);
        }
      }
    }
  }
  LOCK();
  piVar1 = (int *)(*(longlong *)(lVar5 + 8) + 0x30);
  *piVar1 = *piVar1 + iVar8;
  UNLOCK();
  if ((local_7c == 0x60000000) || (local_7c == 0)) {
    *local_78 = local_7c;
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14303195e FUN_14303195e body=110 status=ok
// SIG undefined FUN_14303195e(void)

undefined8 * FUN_14303195e(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430319cc FUN_1430319cc body=3449 status=ok
// SIG undefined FUN_1430319cc(void)

int FUN_1430319cc(longlong param_1,longlong param_2,byte *param_3,float param_4,longlong param_5,
                 longlong param_6,longlong param_7,int param_8)

{
  double *pdVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  undefined8 uVar13;
  undefined7 uVar15;
  ulonglong uVar14;
  byte bVar16;
  double *pdVar17;
  double *pdVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  int iVar26;
  undefined4 uVar27;
  int iVar28;
  longlong lVar29;
  uint uVar30;
  byte *pbVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  uint uVar35;
  byte bVar36;
  byte bVar37;
  bool bVar38;
  bool bVar39;
  float fVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auStack_248 [40];
  uint local_220;
  int local_21c;
  longlong local_218;
  undefined4 local_20c;
  longlong local_208;
  byte *local_200;
  int local_1f4;
  float local_1f0;
  uint local_1ec;
  int local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  int local_1cc;
  int local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  double *local_1b0;
  longlong local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  longlong local_188;
  longlong local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168;
  longlong local_160;
  double *local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  ulonglong local_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  double dVar6;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_1b0 = (double *)(param_2 + 0x2020);
  local_158 = *(double **)(param_2 + 0x2120);
  if (*(double **)(param_2 + 0x2120) == (double *)0x0) {
    local_158 = local_1b0;
  }
  local_1f0 = 0.0;
  fVar40 = 0.0;
  if ((*(byte *)(param_2 + 0x23fe) & 1) == 0) {
    fVar40 = DAT_14c7609ec;
  }
  if (DAT_14ca4b530 == 0) {
    local_1f0 = fVar40;
  }
  local_190 = *(double *)(param_2 + 0x1048);
  local_198 = *(double *)(param_2 + 0x1050);
  local_1f4 = *(int *)(param_7 + 0x28) * param_8;
  local_1a0 = *(double *)(param_2 + 0x1058);
  local_1a8 = param_2 + 0x3118;
  if (*(longlong *)(param_2 + 0x3128) != 0) {
    local_1a8 = *(longlong *)(param_2 + 0x3128);
  }
  local_150 = param_2 + 0x3178;
  if (*(longlong *)(param_2 + 0x3188) != 0) {
    local_150 = *(longlong *)(param_2 + 0x3188);
  }
  local_148 = param_2 + 0x3138;
  if (*(longlong *)(param_2 + 0x3148) != 0) {
    local_148 = *(longlong *)(param_2 + 0x3148);
  }
  iVar28 = *(int *)(param_7 + 0xc);
  lVar25 = (longlong)iVar28;
  local_218 = param_1;
  local_208 = param_2;
  local_200 = param_3;
  uVar13 = FUN_144785782(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_2 + 0x3090) * 2))
  ;
  iVar23 = 0;
  local_20c = 0;
  if ((char)uVar13 != '\0') {
    if (*(char *)(local_208 + 0x3098) == '\x01') {
      uVar15 = (undefined7)((ulonglong)uVar13 >> 8);
      local_20c = (undefined4)CONCAT71(uVar15,1);
      if (*(char *)(local_208 + 0x23e8) == '\x01') {
        local_20c = (undefined4)CONCAT71(uVar15,*(undefined1 *)(local_208 + 0x23ea));
      }
    }
    else {
      local_20c = 0;
    }
  }
  uVar33 = (ulonglong)(uint)(local_1f4 * 0x20);
  if (local_1f4 * 0x20 < iVar28 && 0 < *(int *)(param_7 + 0x28)) {
    local_160 = local_208 + 0x1ed0;
    local_168 = local_208 + 0x1f20;
    local_138 = param_5 + 0x40;
    local_140 = param_5 + 0x60;
    lVar21 = (longlong)local_1f4;
    iVar23 = 0;
    pbVar31 = local_200;
    lVar32 = local_208;
    local_180 = lVar25;
    do {
      uVar22 = 0;
      if (*pbVar31 == 0) {
        uVar22 = *(uint *)(local_1a8 + lVar21 * 4);
      }
      local_130 = (ulonglong)(int)uVar33;
      uVar33 = 0;
      uVar24 = 1;
      local_1ec = 0;
      uVar35 = 0;
      local_188 = lVar21;
      do {
        uVar34 = uVar33 | local_130;
        if (lVar25 <= (longlong)uVar34) break;
        uVar30 = (uint)uVar34;
        if (((pbVar31[5] & 1) != 0) && (*(int *)(lVar32 + 0x1ea0) != *(int *)(lVar32 + 0x1ecc))) {
          uVar19 = *(uint *)(*(longlong *)(local_218 + 0x33d8) + uVar34 * 4);
          lVar21 = *(longlong *)(lVar32 + 0x1ed8);
          if (*(longlong *)(lVar32 + 0x1ed8) == 0) {
            lVar21 = local_160;
          }
          iVar28 = *(int *)(lVar21 + (ulonglong)(*(int *)(lVar32 + 0x1ee0) - 1U & uVar19) * 4);
          if (iVar28 != -1) {
            do {
              if (*(uint *)(*(longlong *)(lVar32 + 0x1e98) + (longlong)iVar28 * 0xc) == uVar19)
              goto LAB_1430323dc;
              iVar28 = *(int *)(*(longlong *)(lVar32 + 0x1e98) + (longlong)iVar28 * 0xc + 4);
            } while (iVar28 != -1);
          }
        }
        if ((pbVar31[6] & 1) == 0) {
LAB_143031ca6:
          bVar16 = *pbVar31;
          bVar36 = (uVar24 & ~uVar22) == 0 | bVar16;
          bVar37 = 1;
          if ((char)local_20c == '\0') goto LAB_143031cc3;
          local_220 = FUN_1472e598d(local_218,lVar32,uVar34 & 0xffffffff);
          local_220 = local_220 ^ 1;
          bVar16 = *local_200;
          bVar37 = 1;
          pbVar31 = local_200;
          lVar32 = local_208;
        }
        else {
          if (*(int *)(lVar32 + 0x1ef0) != *(int *)(lVar32 + 0x1f1c)) {
            uVar19 = *(uint *)(*(longlong *)(local_218 + 0x33d8) + uVar34 * 4);
            lVar21 = *(longlong *)(lVar32 + 0x1f28);
            if (*(longlong *)(lVar32 + 0x1f28) == 0) {
              lVar21 = local_168;
            }
            iVar28 = *(int *)(lVar21 + (ulonglong)(*(int *)(lVar32 + 0x1f30) - 1U & uVar19) * 4);
            if (iVar28 != -1) {
              do {
                if (*(uint *)(*(longlong *)(lVar32 + 0x1ee8) + (longlong)iVar28 * 0xc) == uVar19)
                goto LAB_143031ca6;
                iVar28 = *(int *)(*(longlong *)(lVar32 + 0x1ee8) + (longlong)iVar28 * 0xc + 4);
              } while (iVar28 != -1);
            }
          }
LAB_1430323dc:
          bVar16 = *pbVar31;
          bVar36 = (uVar24 & ~uVar22) == 0 | bVar16;
          bVar37 = 0;
LAB_143031cc3:
          local_220 = 0;
        }
        uVar19 = uVar30 + 0x3ff;
        if (-1 < (int)uVar30) {
          uVar19 = uVar30;
        }
        lVar21 = **(longlong **)
                   (*(longlong *)(local_218 + 0x3368) + (longlong)((int)uVar19 >> 10) * 8);
        lVar29 = (longlong)(int)(uVar30 - (uVar19 & 0xfffffc00));
        dVar42 = *(double *)(lVar21 + 0x30 + lVar29 * 0x48);
        bVar37 = bVar36 & bVar37 & 0.0 < dVar42;
        if (((bVar16 & 1) == 0) || ((bool)bVar37 == false)) {
LAB_14303224d:
          bVar16 = (byte)local_220;
        }
        else {
          bVar16 = 1;
          if (param_5 != 0) {
            lVar25 = *(longlong *)(param_5 + 0x50);
            if (*(longlong *)(param_5 + 0x50) == 0) {
              lVar25 = local_138;
            }
            uVar19 = uVar30 + 0x1f;
            if (-1 < (int)uVar30) {
              uVar19 = uVar30;
            }
            if ((*(uint *)(lVar25 + (longlong)((int)uVar19 >> 5) * 4) >> ((uint)uVar33 & 0x1f) & 1)
                == 0) {
              lVar25 = *(longlong *)(param_5 + 0x70);
              if (*(longlong *)(param_5 + 0x70) == 0) {
                lVar25 = local_140;
              }
              if ((*(uint *)(lVar25 + (longlong)((int)uVar19 >> 5) * 4) & 1 << ((byte)uVar33 & 0x1f)
                  ) != 0) {
                bVar37 = false;
              }
            }
            else {
              bVar16 = 0;
            }
          }
          pdVar2 = (double *)(lVar21 + lVar29 * 0x48);
          bVar36 = *(byte *)(*(longlong *)
                              (*(longlong *)(*(longlong *)(local_218 + 0x3330) + uVar34 * 8) + 8) +
                            0x77);
          uVar14 = CONCAT71((int7)((ulonglong)(lVar29 * 9) >> 8),(bVar36 & 0x40) == 0);
          local_21c = iVar23;
          if (((bVar36 & 0x40) == 0) && ((bool)bVar37 != false)) {
            bVar38 = true;
            if (pbVar31[4] == 1) {
              iVar28 = *(int *)(*(longlong *)(local_218 + 0x33a0) + uVar34 * 4);
              uVar30 = iVar28 * 2;
              uVar14 = uVar14 & 0xffffffff;
              lVar25 = *(longlong *)(param_6 + 0x10);
              if (*(longlong *)(param_6 + 0x10) == 0) {
                lVar25 = param_6;
              }
              uVar19 = iVar28 * 2 + 0x1f;
              if (-1 < (int)uVar30) {
                uVar19 = uVar30;
              }
              bVar37 = (*(uint *)(lVar25 + (longlong)((int)uVar19 >> 5) * 4) >> (uVar30 & 0x1f) & 1)
                       != 0;
              uVar30 = iVar28 * 2 + 1;
              uVar19 = iVar28 * 2 + 0x20;
              if (-1 < (int)uVar30) {
                uVar19 = uVar30;
              }
              bVar38 = (*(uint *)(lVar25 + (longlong)((int)uVar19 >> 5) * 4) >> (uVar30 & 0x1f) & 1)
                       != 0;
            }
            bVar39 = (bool)bVar37 != false;
            bVar37 = 0;
            if (bVar39) {
              if (pbVar31[1] == 1) {
                uVar27 = 0xffffffff;
                if ((~*(byte *)(*(longlong *)(local_218 + 0x33b0) + uVar34) & 9) == 0) {
                  uVar27 = *(undefined4 *)
                            (*(longlong *)(*(longlong *)(local_218 + 0x3358) + uVar34 * 8) + 0x248);
                }
                bVar37 = 1;
                if (bVar38) {
                  local_1c8 = CONCAT31(local_1c8._1_3_,pbVar31[2]);
                  local_178 = CONCAT31(local_178._1_3_,pbVar31[3]);
                  local_118 = pdVar2[2];
                  local_128 = *pdVar2;
                  dStack_120 = pdVar2[1];
                  local_100 = pdVar2[5];
                  local_1e8 = CONCAT31(local_1e8._1_3_,(char)uVar14);
                  local_110 = *(undefined4 *)(pdVar2 + 3);
                  uStack_10c = *(undefined4 *)((longlong)pdVar2 + 0x1c);
                  uStack_108 = *(undefined4 *)(pdVar2 + 4);
                  uStack_104 = *(undefined4 *)((longlong)pdVar2 + 0x24);
                  pdVar18 = &local_128;
                  local_f8 = dVar42;
                  cVar12 = (**(code **)(**(longlong **)(lVar32 + 0x13828) + 0x28))
                                     (*(longlong **)(lVar32 + 0x13828),uVar27,pdVar18);
                  uVar14 = CONCAT71((int7)((ulonglong)pdVar18 >> 8),(byte)local_1e8);
                  pbVar31 = local_200;
                  lVar32 = local_208;
                  bVar37 = (byte)local_1c8;
                  bVar36 = (byte)local_178;
                  if (cVar12 != '\0') goto LAB_143031f63;
                  bVar37 = 0;
                }
              }
              else {
                bVar37 = 1;
                if (bVar38) {
                  bVar37 = pbVar31[2];
                  bVar36 = pbVar31[3];
LAB_143031f63:
                  if (((bVar37 & 1) != 0) && (local_1c8 = *(int *)(lVar32 + 0x2130), 0 < local_1c8))
                  {
                    dVar5 = (double)(float)pdVar2[6];
                    dVar41 = (double)(float)pdVar2[6];
                    dVar42 = pdVar2[1];
                    dVar7 = pdVar2[1];
                    dVar6 = pdVar2[2];
                    dVar4 = pdVar2[2];
                    pdVar18 = *(double **)(lVar32 + 0x2120);
                    if (*(double **)(lVar32 + 0x2120) == (double *)0x0) {
                      pdVar18 = local_1b0;
                    }
                    local_1e8 = 0;
                    do {
                      uVar27 = (undefined4)uVar14;
                      uVar14 = uVar14 & 0xffffffff;
                      lVar25 = -(ulonglong)
                                (dVar41 < (pdVar18[9] * dVar4 +
                                          pdVar18[5] * dVar7 + pdVar18[1] * *pdVar2) - pdVar18[0xd])
                      ;
                      auVar8._8_4_ = (int)lVar25;
                      auVar8._0_8_ = -(ulonglong)
                                      (dVar5 < (pdVar18[8] * dVar6 +
                                               pdVar18[4] * dVar42 + *pdVar18 * *pdVar2) -
                                               pdVar18[0xc]);
                      auVar8._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
                      iVar28 = movmskpd(uVar27,auVar8);
                      lVar25 = -(ulonglong)
                                (dVar41 < (pdVar18[0xb] * dVar4 +
                                          pdVar18[7] * dVar7 + pdVar18[3] * *pdVar2) - pdVar18[0xf])
                      ;
                      auVar9._8_4_ = (int)lVar25;
                      auVar9._0_8_ = -(ulonglong)
                                      (dVar5 < (pdVar18[10] * dVar6 +
                                               pdVar18[6] * dVar42 + pdVar18[2] * *pdVar2) -
                                               pdVar18[0xe]);
                      auVar9._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
                      uVar30 = movmskpd((int)pdVar2,auVar9);
                      pbVar31 = local_200;
                      lVar32 = local_208;
                      iVar23 = local_21c;
                      if ((uVar30 & 0x3fffffff) != 0 || iVar28 != 0) {
                        bVar37 = 0;
                        goto LAB_14303212b;
                      }
                      pdVar18 = pdVar18 + 0x10;
                      local_1e8 = local_1e8 + 4;
                    } while (local_1e8 < local_1c8);
                  }
                  if ((bVar36 & 1) == 0) {
                    iVar28 = *(int *)(lVar32 + 0x2130);
                    if (iVar28 < 1) {
                      bVar37 = 1;
                    }
                    else {
                      local_1e8 = *(int *)pdVar2;
                      uStack_1e4 = *(undefined4 *)((longlong)pdVar2 + 4);
                      dVar42 = *pdVar2;
                      uStack_1e0 = SUB84(dVar42,0);
                      uStack_1dc = (undefined4)((ulonglong)dVar42 >> 0x20);
                      pdVar18 = pdVar2 + 1;
                      local_1c8 = *(int *)pdVar18;
                      uStack_1c4 = *(undefined4 *)((longlong)pdVar2 + 0xc);
                      dVar7 = *pdVar18;
                      uStack_1c0 = SUB84(dVar7,0);
                      uStack_1bc = (undefined4)((ulonglong)dVar7 >> 0x20);
                      pdVar1 = pdVar2 + 2;
                      local_178 = *(undefined4 *)pdVar1;
                      uStack_174 = *(undefined4 *)((longlong)pdVar2 + 0x14);
                      dVar4 = *pdVar1;
                      uStack_170 = SUB84(dVar4,0);
                      uStack_16c = (undefined4)((ulonglong)dVar4 >> 0x20);
                      dVar41 = ABS(pdVar2[3]);
                      dVar43 = ABS(pdVar2[4]);
                      dVar5 = pdVar2[5];
                      dVar6 = pdVar2[5];
                      pdVar17 = *(double **)(lVar32 + 0x2120);
                      if (*(double **)(lVar32 + 0x2120) == (double *)0x0) {
                        pdVar17 = local_1b0;
                      }
                      iVar20 = 4;
                      do {
                        lVar25 = -(ulonglong)
                                  (ABS(pdVar17[9] * dVar6) +
                                   ABS(pdVar17[5]) * dVar43 + ABS(pdVar17[1]) * dVar41 <
                                  (dVar4 * pdVar17[9] + dVar7 * pdVar17[5] + dVar42 * pdVar17[1]) -
                                  pdVar17[0xd]);
                        lVar21 = -(ulonglong)
                                  (ABS(pdVar17[0xb] * dVar6) +
                                   ABS(pdVar17[7]) * dVar43 + ABS(pdVar17[3]) * dVar41 <
                                  (dVar4 * pdVar17[0xb] + dVar7 * pdVar17[7] + dVar42 * pdVar17[3])
                                  - pdVar17[0xf]);
                        auVar10._8_4_ = (int)lVar25;
                        auVar10._0_8_ =
                             -(ulonglong)
                              (ABS(pdVar17[8] * dVar5) +
                               ABS(pdVar17[4]) * dVar43 + ABS(*pdVar17) * dVar41 <
                              (*pdVar1 * pdVar17[8] + *pdVar18 * pdVar17[4] + *pdVar2 * *pdVar17) -
                              pdVar17[0xc]);
                        auVar10._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
                        iVar26 = movmskpd((int)uVar14,auVar10);
                        auVar11._8_4_ = (int)lVar21;
                        auVar11._0_8_ =
                             -(ulonglong)
                              (ABS(pdVar17[10] * dVar5) +
                               ABS(pdVar17[6]) * dVar43 + ABS(pdVar17[2]) * dVar41 <
                              (*pdVar1 * pdVar17[10] + *pdVar18 * pdVar17[6] + *pdVar2 * pdVar17[2])
                              - pdVar17[0xe]);
                        auVar11._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
                        uVar30 = movmskpd((int)pdVar2,auVar11);
                        bVar37 = (uVar30 & 0x3fffffff) == 0 && iVar26 == 0;
                        pdVar17 = pdVar17 + 0x10;
                        bVar38 = iVar20 < iVar28;
                        iVar20 = iVar20 + 4;
                        uVar14 = uVar14 & 0xffffffff;
                        local_1cc = iVar28;
                      } while ((bool)bVar37 && bVar38);
                    }
                  }
                  else {
                    local_1e8 = CONCAT31(local_1e8._1_3_,(char)uVar14);
                    bVar37 = FUN_1472e4db2(pdVar2,pdVar2 + 3,local_158);
                    uVar14 = (ulonglong)(byte)local_1e8;
                    pbVar31 = local_200;
                    lVar32 = local_208;
                  }
                }
              }
            }
          }
LAB_14303212b:
          lVar25 = local_180;
          if (((bVar16 & (byte)uVar14 & bVar37) != 1) ||
             (((*(byte *)(*(longlong *)(lVar32 + 8) + 0x5b) & 4) != 0 &&
              (cVar12 = (**(code **)(**(longlong **)(*(longlong *)(local_218 + 0x3358) + uVar34 * 8)
                                    + 0x180))(), pbVar31 = local_200, lVar32 = local_208,
              iVar23 = local_21c, cVar12 == '\0')))) goto LAB_14303224d;
          fVar40 = *(float *)(pdVar2 + 7);
          fVar3 = *(float *)(pdVar2 + 8);
          if ((3.4028235e+38 <= fVar3) && (fVar40 <= 0.0)) goto LAB_14303224d;
          if (DAT_14c7609c8 == '\x01') {
            dVar42 = pdVar2[1] - local_198;
            dVar7 = (double)(float)SQRT((pdVar2[2] - local_1a0) * (pdVar2[2] - local_1a0) +
                                        (*pdVar2 - local_190) * (*pdVar2 - local_190) +
                                        dVar42 * dVar42);
            dVar42 = pdVar2[6];
            fVar45 = 0.0;
            if (dVar42 <= dVar7) {
              fVar45 = (float)(dVar7 - dVar42) * (float)(dVar7 - dVar42);
            }
            fVar44 = (float)(dVar42 + dVar7) * (float)(dVar42 + dVar7);
          }
          else {
            dVar42 = local_198 - pdVar2[1];
            fVar44 = (float)((local_1a0 - pdVar2[2]) * (local_1a0 - pdVar2[2]) +
                            dVar42 * dVar42 + (local_190 - *pdVar2) * (local_190 - *pdVar2));
            fVar45 = fVar44;
          }
          fVar46 = fVar3 * param_4;
          if (((fVar3 < 3.4028235e+38) && (fVar45 < (local_1f0 + fVar46) * (local_1f0 + fVar46))) &&
             ((fVar46 - local_1f0) * (fVar46 - local_1f0) < fVar45)) {
            cVar12 = (**(code **)(**(longlong **)(*(longlong *)(local_218 + 0x3358) + uVar34 * 8) +
                                 0x150))();
            uVar30 = 0;
            if (cVar12 != '\0') {
              uVar30 = uVar24;
            }
            local_1ec = local_1ec | uVar30;
            pbVar31 = local_200;
            lVar32 = local_208;
          }
          bVar16 = -(fVar46 * fVar46 < fVar45) & -(fVar3 < 3.4028235e+38);
          if ((bVar16 & 1) != 0) {
            bVar37 = 0;
          }
          if (fVar44 < fVar40 * param_4 * fVar40 * param_4 && 0.0 < fVar40) {
            bVar37 = 0;
          }
          bVar16 = (byte)local_220 & (bVar16 ^ 1);
        }
        uVar30 = 0;
        if (bVar37 != 0) {
          uVar30 = uVar24;
        }
        uVar22 = uVar22 | uVar30;
        iVar23 = iVar23 + (uint)(bVar37 ^ 1);
        uVar30 = 0;
        if (bVar16 != 0) {
          uVar30 = uVar24;
        }
        uVar35 = uVar35 | uVar30;
        uVar33 = uVar33 + 1;
        uVar24 = uVar24 * 2;
      } while (uVar33 != 0x20);
      bVar16 = *pbVar31;
      if ((bVar16 == 1) && (local_1ec != 0)) {
        *(uint *)(local_150 + local_188 * 4) = local_1ec;
        bVar16 = *pbVar31;
      }
      if (((bVar16 & 1) != 0) && (uVar22 != 0)) {
        *(uint *)(local_1a8 + local_188 * 4) = uVar22;
      }
      if (uVar35 != 0) {
        *(uint *)(local_148 + local_188 * 4) = uVar35;
      }
      lVar21 = local_188 + 1;
    } while ((lVar21 < (longlong)local_1f4 + (longlong)*(int *)(param_7 + 0x28)) &&
            (uVar33 = lVar21 * 0x20, (longlong)uVar33 < lVar25));
  }
  if ((local_f0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar23;
}



// FUNCTION 143032746 FUN_143032746 body=189 status=ok
// SIG undefined FUN_143032746(void)

void FUN_143032746(longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_38;
  undefined3 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_2;
  lVar3 = *param_1;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar4 = *piVar1;
  if (iVar4 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar4 = *piVar1;
  }
  if ((iVar4 == 0x60000000) || (iVar4 == 0)) {
    *piVar1 = 0x40000010;
  }
  local_38 = (undefined4)param_1[1];
  uStack_34 = (undefined3)((uint)*(undefined4 *)((longlong)param_1 + 0xb) >> 8);
  local_48 = uVar2;
  FUN_143030c48(*(undefined8 *)(lVar3 + 0x10),*(undefined8 *)(lVar3 + 0x18),&local_38,
                *(undefined8 *)(lVar3 + 8));
  if ((iVar4 == 0x60000000) || (iVar4 == 0)) {
    *piVar1 = iVar4;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143032804 FUN_143032804 body=225 status=ok
// SIG undefined FUN_143032804(void)

void FUN_143032804(longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined3 local_38;
  undefined1 uStack_35;
  undefined3 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *param_2;
  lVar4 = *param_1;
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar6 = *piVar2;
  if (iVar6 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar6 = *piVar2;
  }
  if ((iVar6 == 0x60000000) || (iVar6 == 0)) {
    *piVar2 = 0x40000010;
  }
  local_48 = *(undefined8 *)(lVar4 + 8);
  local_58 = (undefined4)param_1[3];
  uStack_54 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_50 = (undefined4)param_1[4];
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0x24);
  local_38 = (undefined3)(int)param_1[1];
  uStack_35 = (undefined1)*(undefined4 *)((longlong)param_1 + 0xb);
  uStack_34 = (undefined3)((uint)*(undefined4 *)((longlong)param_1 + 0xb) >> 8);
  local_40 = uVar3;
  iVar5 = FUN_1430319cc(*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x18),&local_38,
                        (int)param_1[2]);
  LOCK();
  piVar1 = (int *)(*(longlong *)(lVar4 + 8) + 0x30);
  *piVar1 = *piVar1 + iVar5;
  UNLOCK();
  if ((iVar6 == 0x60000000) || (iVar6 == 0)) {
    *piVar2 = iVar6;
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1430328e6 FUN_1430328e6 body=327 status=ok
// SIG undefined FUN_1430328e6(void)

void FUN_1430328e6(undefined8 *param_1,int param_2)

{
  uint uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[2] = &PTR_FUN_14aa71430;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[10] = &PTR_FUN_14a7fec80;
    *(undefined1 *)(param_1 + 0xd) = 1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *(int *)(param_1 + 0x12) = DAT_14ca84e80 >> 2;
    uVar1 = DAT_14ca84e7c >> 6;
    if (0xfffe < uVar1) {
      uVar1 = 0xffff;
    }
    *(uint *)((longlong)param_1 + 0x94) = uVar1;
    param_1[0x31] = 0;
    param_1[0x32] = 0x200000000;
    param_1[0x54] = 0;
    param_1[0x56] = 0x400000000;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x5e] = &PTR_FUN_14a7fec80;
    *(undefined1 *)(param_1 + 0x61) = 1;
    param_1[0x62] = 0;
    param_1[99] = 0;
    param_1[100] = 0;
    param_1[0x65] = 0;
    *(int *)(param_1 + 0x66) = DAT_14ca84e80 >> 2;
    uVar1 = DAT_14ca84e7c >> 6;
    if (0xfffe < uVar1) {
      uVar1 = 0xffff;
    }
    *(uint *)((longlong)param_1 + 0x334) = uVar1;
    param_1[0x85] = 0;
    param_1[0x86] = 0x200000000;
    param_1[0xa8] = 0;
    param_1[0xaa] = 0x400000000;
    *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
    param_1[0xad] = 0;
    param_1[0xae] = 0;
    param_1 = param_1 + 0xb0;
  }
  return;
}



// FUNCTION 143032a2e FUN_143032a2e body=83 status=ok
// SIG undefined FUN_143032a2e(void)

void FUN_143032a2e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[2];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar2 = param_1[1];
    lVar4 = 0;
    do {
      FUN_143010b18(lVar1,*(undefined8 *)
                           (*(longlong *)(lVar1 + 0x18) +
                           (ulonglong)(*(uint *)(lVar2 + lVar4) & 0xffffff) * 8),
                    *(uint *)(lVar2 + lVar4) >> 0x18);
      lVar4 = lVar4 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar4);
  }
  return;
}



// FUNCTION 143032a98 FUN_143032a98 body=52 status=ok
// SIG undefined FUN_143032a98(void)

undefined8 * FUN_143032a98(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a2f9b20;
  FUN_14008dfdc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143032acc FUN_143032acc body=547 status=ok
// SIG undefined FUN_143032acc(void)

longlong * FUN_143032acc(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 143032cf0 FUN_143032cf0 body=172 status=ok
// SIG undefined FUN_143032cf0(void)

void FUN_143032cf0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  lVar4 = *(longlong *)(param_1 + 0xa8);
  piVar2 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar7 = *piVar2;
  if (iVar7 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar7 = *piVar2;
  }
  if ((iVar7 == 0x60000000) || (iVar7 == 0)) {
    *piVar2 = 0x40000010;
  }
  while( true ) {
    plVar5 = *(longlong **)(param_1 + 0xb0);
    LOCK();
    plVar1 = plVar5 + 2;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    UNLOCK();
    if ((int)plVar5[1] <= (int)lVar6) break;
    uVar3 = *(uint *)(*plVar5 + (longlong)(int)lVar6 * 4);
    FUN_143010b18(lVar4,*(undefined8 *)
                         (*(longlong *)(lVar4 + 0x18) + (ulonglong)(uVar3 & 0xffffff) * 8),
                  uVar3 >> 0x18);
  }
  if ((iVar7 == 0x60000000) || (iVar7 == 0)) {
    *piVar2 = iVar7;
  }
  return;
}



// FUNCTION 143032d9c FUN_143032d9c body=110 status=ok
// SIG undefined FUN_143032d9c(void)

undefined8 * FUN_143032d9c(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143032e0a FUN_143032e0a body=22 status=ok
// SIG undefined FUN_143032e0a(void)

void FUN_143032e0a(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x48);
    return;
  }
  return;
}



// FUNCTION 143032e20 FUN_143032e20 body=429 status=ok
// SIG undefined FUN_143032e20(void)

void FUN_143032e20(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = *(uint *)(param_1 + 0x98);
  uVar6 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  if (uVar3 < 3) {
    *(undefined4 *)(param_1 + 0x9c) = 2;
    if (*(longlong *)(param_1 + 0x90) == 0) {
      return;
    }
    uVar6 = 0;
  }
  else {
    if (*(uint *)(param_1 + 0x9c) < 3) {
      uVar6 = 4;
      if (4 < uVar3) {
        uVar6 = (ulonglong)uVar3;
      }
    }
    else {
      uVar6 = uVar6 + (uVar6 * 3 >> 3) + 0x10;
    }
    uVar5 = uVar6 * 0x48;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar5 + 0xf;
        if (uVar6 < 0x1c7) {
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
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_143032ef1;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
LAB_143032ef1:
    uVar6 = 0x7fffffff;
    if ((int)uVar3 <= (int)(uVar5 / 0x48)) {
      uVar6 = uVar5 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0x9c) = (int)uVar6;
  }
  FUN_1446efa72(param_1 + 0x90,0,uVar6,0x48);
  return;
}



// FUNCTION 143032fce FUN_143032fce body=92 status=ok
// SIG undefined FUN_143032fce(void)

void FUN_143032fce(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0xb14) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xb14) = 0;
    if (*(void **)((longlong)param_1 + 0xb00) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0xb00),
              (longlong)*(int *)((longlong)param_1 + 0xb10) * 0x580);
      FUN_1446efa72((longlong)param_1 + 0xb00,0,0,0x580);
      return;
    }
  }
  return;
}



// FUNCTION 14303302a FUN_14303302a body=547 status=ok
// SIG undefined FUN_14303302a(void)

longlong * FUN_14303302a(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 14303325a FUN_14303325a body=110 status=ok
// SIG undefined FUN_14303325a(void)

undefined8 * FUN_14303325a(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430332fa FUN_1430332fa body=29 status=ok
// SIG undefined FUN_1430332fa(void)

undefined8 FUN_1430332fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143033318 FUN_143033318 body=147 status=ok
// SIG undefined FUN_143033318(void)

void FUN_143033318(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar2 = *param_1;
  LOCK();
  piVar1 = (int *)(*(longlong *)(lVar2 + 0x3000) + 8);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  local_11 = 1;
  FUN_1447439e4();
  FUN_1400daade(lVar2 + 0x3040);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1430333d6 FUN_1430333d6 body=29 status=ok
// SIG undefined FUN_1430333d6(void)

undefined8 FUN_1430333d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1430333f4 FUN_1430333f4 body=99 status=ok
// SIG undefined FUN_1430333f4(void)

void FUN_1430333f4(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 143033458 FUN_143033458 body=448 status=ok
// SIG undefined FUN_143033458(void)

void FUN_143033458(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  uint *puVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  size_t _Size;
  int *piVar7;
  void *_Dst;
  
  _Size = (size_t)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(_Size,1);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14303356f:
      piVar7 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (*piVar7 == 0) {
        if (*(longlong *)(piVar7 + 0x10) - (longlong)piVar7 == 0x10000) {
          lVar4 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar4 = FUN_145bdc178();
          }
          FUN_140028df4(lVar4,piVar7);
        }
        else {
          FUN_144705e74(piVar7);
        }
      }
    }
LAB_1430335ac:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar3 = (uint *)*puVar1;
  if (puVar3 != (uint *)0x0) goto LAB_1430334ab;
LAB_1430334a0:
  FUN_14472e504(puVar1);
  puVar3 = (uint *)*puVar1;
LAB_1430334ab:
  _Dst = (void *)(*(longlong *)(puVar3 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar5 = (uint *)((longlong)_Dst + _Size);
  if (puVar3 + 0x4000 < puVar5) {
    if (param_2 < 0xffa5) goto code_r0x0001430334d7;
    puVar3 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar3 = 0xffffffff;
    puVar3[0x12] = 0;
    _Dst = (void *)((longlong)puVar3 + 0x5bU & 0xfffffffffffffffc);
    *(size_t *)(puVar3 + 0x10) = (longlong)puVar3 + _Size + 0x5c;
    *puVar3 = 1;
  }
  else {
    uVar6 = puVar3[0x12] + 1;
LAB_14303352d:
    *(uint **)(puVar3 + 0x10) = puVar5 + 2;
    puVar3[0x12] = uVar6;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar3;
  *(uint *)((longlong)_Dst + -4) = param_2;
  if (_Src == (void *)0x0) goto LAB_1430335ac;
  uVar6 = *(uint *)((longlong)_Src + -4);
  if (uVar6 != 0) {
    if (uVar6 < param_2) {
      _Size = (size_t)uVar6;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14303356f;
code_r0x0001430334d7:
  uVar6 = puVar3[0x12];
  while( true ) {
    *(uint **)(puVar3 + 0x10) = puVar3 + 0x4000;
    LOCK();
    uVar2 = *puVar3;
    *puVar3 = *puVar3 + uVar6 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar6) != 0xffffffff) break;
    puVar3 = (uint *)*puVar1;
    *puVar3 = 0xffffffff;
    *(uint **)(puVar3 + 0x10) = puVar3 + 0x16;
    puVar3[0x12] = 0;
    *puVar1 = puVar3;
    _Dst = (void *)((longlong)puVar3 + 0x5bU & 0xfffffffffffffffc);
    puVar5 = (uint *)((longlong)_Dst + _Size);
    uVar6 = 0;
    if (puVar5 <= puVar3 + 0x4000) {
      uVar6 = 1;
      goto LAB_14303352d;
    }
  }
  goto LAB_1430334a0;
}



// FUNCTION 143033618 FUN_143033618 body=21 status=ok
// SIG undefined FUN_143033618(void)

void FUN_143033618(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0xbc8);
    return;
  }
  return;
}



// FUNCTION 14303362e FUN_14303362e body=547 status=ok
// SIG undefined FUN_14303362e(void)

longlong * FUN_14303362e(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 143033852 FUN_143033852 body=116 status=ok
// SIG undefined FUN_143033852(void)

void FUN_143033852(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xa8);
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar3 = *piVar1;
  if (iVar3 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar3 = *piVar1;
  }
  if ((iVar3 == 0x60000000) || (iVar3 == 0)) {
    *piVar1 = 0x40000010;
  }
  (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x70))();
  if ((iVar3 == 0x60000000) || (iVar3 == 0)) {
    *piVar1 = iVar3;
  }
  return;
}



// FUNCTION 1430338c6 FUN_1430338c6 body=110 status=ok
// SIG undefined FUN_1430338c6(void)

undefined8 * FUN_1430338c6(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143033934 FUN_143033934 body=547 status=ok
// SIG undefined FUN_143033934(void)

longlong * FUN_143033934(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 143033b58 FUN_143033b58 body=114 status=ok
// SIG undefined FUN_143033b58(void)

void FUN_143033b58(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar2 = *piVar1;
  if (iVar2 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar2 = *piVar1;
  }
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = 0x40000010;
  }
  FUN_14300d356(*(undefined8 *)(param_1 + 0xa8));
  if ((iVar2 == 0x60000000) || (iVar2 == 0)) {
    *piVar1 = iVar2;
  }
  return;
}



// FUNCTION 143033bca FUN_143033bca body=110 status=ok
// SIG undefined FUN_143033bca(void)

undefined8 * FUN_143033bca(undefined8 *param_1,int param_2)

{
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143033c38 FUN_143033c38 body=547 status=ok
// SIG undefined FUN_143033c38(void)

longlong * FUN_143033c38(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}


