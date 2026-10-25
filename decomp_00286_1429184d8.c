// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1429184d8 FUN_1429184d8 body=182 status=ok
// SIG undefined FUN_1429184d8(void)

void FUN_1429184d8(LPCRITICAL_SECTION param_1,undefined8 *param_2,undefined8 param_3,
                  undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection(param_1);
  if ((param_1[1].LockCount != 0) &&
     (p_Var4 = param_1[1].DebugInfo, p_Var4 != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
    local_38 = *param_2;
    local_30 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (**(code **)(*(longlong *)p_Var4 + 0x60))(p_Var4,&local_38,param_3,param_4);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  plVar3 = (longlong *)param_2[1];
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



// FUNCTION 142918590 FUN_142918590 body=3270 status=ok
// SIG undefined FUN_142918590(void)

longlong FUN_142918590(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  int iVar4;
  int iVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  longlong *plVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined2 *puVar19;
  ushort uVar20;
  ushort uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  bool bVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  longlong *local_98;
  longlong *local_90;
  undefined2 *local_88;
  int local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  longlong *plStack_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_1 + 400))();
  FUN_14123f8ae(param_1);
  plVar10 = (longlong *)param_1[0x39];
  plVar16 = (longlong *)param_1[0x3a];
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  if ((plVar10 != (longlong *)0x0 & *(byte *)(param_1 + 0x55)) == 1) {
    *(uint *)((longlong)plVar10 + 0xb4) = (uint)((int)param_1[0x56] == 0);
    lVar15 = DAT_14c990b58;
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar4 = *(int *)(lVar14 + 0xc60);
    if (iVar4 == 0x40000002) {
      uVar9 = 0;
    }
    else {
      bVar27 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
        if (iVar4 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          bVar27 = DVar7 == DVar8;
        }
        else {
          bVar27 = false;
        }
      }
      uVar9 = (ulonglong)(bVar27 ^ 1);
    }
    if (*(char *)(lVar15 + uVar9) == '\0') {
      local_58 = (longlong *)((ulonglong)local_58 & 0xffffffff00000000);
      iVar4 = FUN_144b46310(param_1[0x4f]);
      if (iVar4 == 0) {
        *(undefined4 *)(plVar10 + 6) = local_58._0_4_;
      }
    }
    lVar15 = DAT_14c990b70;
    if (plVar10[0x15] == 0) {
      local_58 = (longlong *)0x0;
      iVar4 = *(int *)(lVar14 + 0xc60);
      if (iVar4 == 0x40000002) {
        uVar9 = 0;
      }
      else {
        bVar27 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
          if (iVar4 == 1) {
            DVar7 = FUN_140ad26c0();
            DVar8 = GetCurrentThreadId();
            bVar27 = DVar7 == DVar8;
          }
          else {
            bVar27 = false;
          }
        }
        uVar9 = (ulonglong)(bVar27 ^ 1);
      }
      if (((*(char *)(lVar15 + uVar9) != '\x01') ||
          (iVar4 = FUN_144b46310(param_1[0x4f],0x30000f,&local_58), iVar4 != 0)) ||
         ((double)local_58 <= 0.0)) {
        uVar9 = param_1[0x68];
      }
      else {
        uVar9 = (longlong)((double)local_58 - 9.223372036854776e+18) &
                (longlong)(double)local_58 >> 0x3f | (longlong)(double)local_58;
      }
      plVar10[0x15] = uVar9;
    }
    iVar4 = (**(code **)(*plVar10 + 0x58))(plVar10);
    if (iVar4 < 1) {
      if ((int)param_1[0x52] == 0) {
        puVar19 = &DAT_149dfb77a;
      }
      else {
        puVar19 = (undefined2 *)param_1[0x51];
      }
      lVar14 = 4;
      lVar15 = 0;
      while( true ) {
        uVar20 = *(ushort *)((longlong)puVar19 + lVar15);
        uVar9 = (ulonglong)uVar20;
        uVar21 = *(ushort *)((longlong)&DAT_149f281fa + lVar15);
        if (uVar20 != uVar21) break;
        if (uVar20 == 0) goto LAB_1429187c9;
LAB_142918799:
        lVar14 = lVar14 + -1;
        if (lVar14 == 0) goto LAB_1429187c9;
        lVar15 = lVar15 + 2;
      }
      if ((uVar21 | uVar20) < 0x80) {
        uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar23 = (ulonglong)uVar21;
        uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar23]) goto LAB_142918799;
      }
      if (uVar20 != uVar21) goto LAB_1429187d4;
LAB_1429187c9:
      *(undefined4 *)((longlong)plVar10 + 0xb4) = 0;
    }
LAB_1429187d4:
    if (*(char *)((longlong)param_1 + 0x135) == '\0') {
      FUN_14123fa3e(param_1);
    }
    *(undefined4 *)(plVar10 + 0x16) = 1;
    if (*(int *)((longlong)plVar10 + 0xb4) == 0) goto LAB_1429188ee;
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 0x26) = 4;
    if (param_1[0x39] != 0) {
      *(undefined4 *)(param_1[0x39] + 0x28) = 4;
    }
    local_b8 = plVar10;
    local_b0 = plVar16;
    lVar14 = FUN_141054386();
    lVar14 = *(longlong *)(lVar14 + 0x20);
    (**(code **)*param_1)(param_1,&local_78);
    iVar4 = local_70;
    lVar15 = local_78;
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar14 + 0x340));
    bVar27 = false;
    if ((longlong)*(int *)(lVar14 + 0x338) != 0) {
      puVar25 = *(undefined8 **)(lVar14 + 0x330);
      puVar18 = puVar25 + (longlong)*(int *)(lVar14 + 0x338) * 2;
      iVar5 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      iVar4 = 0;
      if (0 < iVar5) {
        iVar4 = iVar5;
      }
      do {
        local_58 = (longlong *)*puVar25;
        iVar6 = *(int *)(puVar25 + 1) + -1;
        if (*(int *)(puVar25 + 1) == 0) {
          iVar6 = 0;
        }
        local_50 = (longlong *)CONCAT44(local_50._4_4_,iVar6);
        plStack_60 = (longlong *)CONCAT44(plStack_60._4_4_,iVar4);
        local_68 = (lVar15 + (longlong)iVar5 * 2) - (ulonglong)(uint)(iVar4 * 2);
        iVar6 = FUN_144a08910(&local_68,&local_58,0);
        bVar27 = iVar6 != -1;
      } while ((!bVar27) && (puVar25 = puVar25 + 2, puVar25 != puVar18));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar14 + 0x340));
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    (**(code **)(*local_b8 + 0x30))(local_b8,&local_78);
    if ((bVar27) &&
       (lVar15 = (**(code **)(*local_b8 + 0x40))(), lVar14 = DAT_14c990c20, lVar15 != 0)) {
      iVar4 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if ((iVar4 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar4 == 2)))) {
        uVar9 = 0;
      }
      else if (iVar4 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        uVar9 = (ulonglong)(DVar7 != DVar8);
      }
      else {
        uVar9 = 1;
      }
      if (*(char *)(lVar14 + uVar9) == '\x01') {
        FUN_140056680(&local_68,L"Content-Type");
        (**(code **)(*local_b8 + 0x28))(local_b8,&local_58,&local_68);
        FUN_140056680(&local_88,L"application/json");
        puVar19 = local_88;
        if (local_80 == 0) {
          puVar19 = &DAT_149dfb77a;
        }
        plVar10 = (longlong *)&DAT_149dfb77a;
        if ((int)local_50 != 0) {
          plVar10 = local_58;
        }
        lVar14 = 0;
        while( true ) {
          uVar20 = *(ushort *)((longlong)plVar10 + lVar14);
          uVar17 = (uint)uVar20;
          uVar21 = *(ushort *)((longlong)puVar19 + lVar14);
          uVar22 = (uint)uVar21;
          if (uVar20 != uVar21) {
            if ((uVar21 | uVar20) < 0x80) {
              uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar20];
              uVar22 = (uint)(byte)(&DAT_149e05da0)[uVar21];
              if ((&DAT_149e05da0)[uVar20] == (&DAT_149e05da0)[uVar21]) goto LAB_142918b3b;
            }
            iVar4 = uVar17 - uVar22;
            goto LAB_142918b64;
          }
          if (uVar20 == 0) break;
LAB_142918b3b:
          lVar14 = lVar14 + 2;
        }
        iVar4 = 0;
LAB_142918b64:
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8(local_88);
        }
        if (local_58 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (iVar4 != 0) goto LAB_142918c1f;
      }
      plVar10 = (longlong *)(**(code **)(*local_b8 + 0x48))();
      uVar17 = *(uint *)(plVar10 + 1);
      if (0 < (longlong)(int)uVar17) {
        lVar14 = *plVar10;
        iVar4 = 0;
        do {
          local_58 = (longlong *)&DAT_149dfc0af;
          uVar22 = uVar17 - iVar4;
          if ((int)uVar17 <= (int)(uVar17 - iVar4)) {
            uVar22 = uVar17;
          }
          local_50 = (longlong *)CONCAT44(local_50._4_4_,1);
          uVar9 = (ulonglong)uVar22;
          if ((int)uVar22 < 1) {
            uVar9 = 0;
          }
          local_68 = (lVar14 + (int)uVar17) - uVar9;
          plStack_60 = (longlong *)CONCAT44(plStack_60._4_4_,(int)uVar9);
          iVar5 = FUN_140186866(&local_68,&local_58,0);
        } while (((iVar5 != -1) && (iVar5 + iVar4 != -1)) &&
                (iVar4 = iVar4 + iVar5 + 1, iVar4 < (int)uVar17));
      }
    }
LAB_142918c1f:
    FUN_1447a1747(local_78,local_70);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*param_1 + 0xf0))(param_1);
    plVar16 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    plVar10 = (longlong *)param_1[2];
    bVar27 = true;
    if (plVar10 == (longlong *)0x0) {
LAB_14291913a:
      lVar14 = 0;
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar4 = (int)plVar10[1];
      do {
        if (iVar4 == 0) goto LAB_14291913a;
        LOCK();
        iVar5 = (int)plVar10[1];
        bVar26 = iVar4 == iVar5;
        if (bVar26) {
          *(int *)(plVar10 + 1) = iVar4 + 1;
          iVar5 = iVar4;
        }
        iVar4 = iVar5;
        UNLOCK();
      } while (!bVar26);
      lVar14 = param_1[1];
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = plVar10 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      bVar27 = false;
    }
    EnterCriticalSection(lpCriticalSection);
    plVar11 = plVar16;
    plVar24 = plVar10;
    if ((lpCriticalSection[1].LockCount != 0) &&
       (p_Var3 = lpCriticalSection[1].DebugInfo, p_Var3 != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      local_58 = local_b8;
      local_50 = plVar16;
      local_68 = lVar14;
      plStack_60 = plVar10;
      (**(code **)(*(longlong *)p_Var3 + 0x60))(p_Var3,&local_68,&local_58,1);
      plVar11 = (longlong *)0x0;
      plVar24 = (longlong *)0x0;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar24 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar24)(plVar24);
        LOCK();
        piVar1 = (int *)((longlong)plVar24 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar24 = plVar11 + 1;
      *(int *)plVar24 = (int)*plVar24 + -1;
      UNLOCK();
      if ((int)*plVar24 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (!bVar27) {
      LOCK();
      plVar11 = plVar10 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    lVar14 = FUN_141054386();
    lVar14 = *(longlong *)(lVar14 + 0x20);
    fVar28 = (float)(double)param_1[0x36];
    if ((float)(double)param_1[0x36] <= *(float *)(lVar14 + 400)) {
      fVar28 = *(float *)(lVar14 + 400);
    }
    LOCK();
    *(float *)(lVar14 + 400) = fVar28;
    UNLOCK();
    if (plVar16 == (longlong *)0x0) goto LAB_142919079;
    LOCK();
    plVar10 = plVar16 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      lVar14 = (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  else {
    if (plVar10 != (longlong *)0x0) goto LAB_1429187d4;
LAB_1429188ee:
    if ((((*(byte *)((longlong)param_1 + 0x14a) & 1) == 0) && ((*(byte *)(param_1 + 0x29) & 1) == 0)
        ) && ((*(byte *)((longlong)param_1 + 0x149) & 1) == 0)) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6c));
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x6c));
    }
    lVar15 = DAT_14c990be0;
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar4 = *(int *)(lVar14 + 0xc60);
    if (iVar4 == 0x40000002) {
      uVar9 = 0;
    }
    else {
      bVar27 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
        if (iVar4 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          bVar27 = DVar7 == DVar8;
        }
        else {
          bVar27 = false;
        }
      }
      uVar9 = (ulonglong)(bVar27 ^ 1);
    }
    if (*(char *)(lVar15 + uVar9) == '\x01') {
      if ((((*(byte *)(param_1 + 0x55) & 1) != 0) && ((ulonglong)*(uint *)(param_1 + 0x56) < 0x24))
         && ((0x8100000e0U >> ((ulonglong)*(uint *)(param_1 + 0x56) & 0x3f) & 1) != 0)) {
        *(undefined1 *)((longlong)param_1 + 0x134) = 1;
        if (param_1[0x39] != 0) {
          *(undefined1 *)(param_1[0x39] + 0x2c) = 1;
        }
      }
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
      }
      lVar15 = DAT_14c990be0;
      iVar4 = *(int *)(lVar14 + 0xc60);
      if (iVar4 == 0x40000002) {
        uVar9 = 0;
      }
      else {
        bVar27 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
          if (iVar4 == 1) {
            DVar7 = FUN_140ad26c0();
            DVar8 = GetCurrentThreadId();
            bVar27 = DVar7 == DVar8;
          }
          else {
            bVar27 = false;
          }
        }
        uVar9 = (ulonglong)(bVar27 ^ 1);
      }
      if (*(char *)(lVar15 + uVar9) == '\x01') {
        if (*(char *)((longlong)param_1 + 0x134) == '\0') {
          if ((*(byte *)((longlong)param_1 + 0x14a) & 1) == 0) {
            if ((*(byte *)(param_1 + 0x29) & 1) == 0) {
              if ((*(char *)((longlong)param_1 + 0x14b) == '\0') &&
                 ((*(byte *)((longlong)param_1 + 0x149) & 1) != 0)) {
                *(undefined1 *)((longlong)param_1 + 0x134) = 1;
                lVar14 = param_1[0x39];
                uVar13 = 1;
              }
              else {
                *(undefined1 *)((longlong)param_1 + 0x134) = 4;
                lVar14 = param_1[0x39];
                uVar13 = 4;
              }
            }
            else {
              *(undefined1 *)((longlong)param_1 + 0x134) = 3;
              lVar14 = param_1[0x39];
              uVar13 = 3;
            }
          }
          else {
            *(undefined1 *)((longlong)param_1 + 0x134) = 2;
            lVar14 = param_1[0x39];
            uVar13 = 2;
          }
          if (lVar14 != 0) {
            *(undefined1 *)(lVar14 + 0x2c) = uVar13;
            goto LAB_142918f3d;
          }
          plVar11 = param_1 + 0x26;
        }
        else {
LAB_142918f3d:
          *(undefined4 *)(param_1 + 0x26) = 2;
          if (param_1[0x39] == 0) goto LAB_142918f66;
          plVar11 = (longlong *)(param_1[0x39] + 0x28);
        }
        *(undefined4 *)plVar11 = 2;
      }
LAB_142918f66:
      uVar12 = (**(code **)(*param_1 + 0xf0))(param_1);
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
      }
      plVar11 = (longlong *)param_1[2];
      local_58 = plVar10;
      local_50 = plVar16;
      if (plVar11 == (longlong *)0x0) {
LAB_142919012:
        local_68 = 0;
        plStack_60 = (longlong *)0x0;
        lVar14 = FUN_146b1b560(uVar12,&local_68,&local_58,0);
      }
      else {
        iVar4 = (int)plVar11[1];
        do {
          if (iVar4 == 0) goto LAB_142919012;
          LOCK();
          iVar5 = (int)plVar11[1];
          bVar27 = iVar4 == iVar5;
          if (bVar27) {
            *(int *)(plVar11 + 1) = iVar4 + 1;
            iVar5 = iVar4;
          }
          iVar4 = iVar5;
          UNLOCK();
        } while (!bVar27);
        lVar14 = param_1[1];
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        plVar10 = plVar11 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        local_68 = lVar14;
        plStack_60 = plVar11;
        lVar14 = FUN_146b1b560(uVar12,&local_68,&local_58,0);
        LOCK();
        plVar10 = plVar11 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          lVar14 = (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            lVar14 = (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar16 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          lVar14 = (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x26) = 2;
      if (param_1[0x39] != 0) {
        *(undefined4 *)(param_1[0x39] + 0x28) = 2;
      }
      if ((*(byte *)((longlong)param_1 + 0x14a) & 1) == 0) {
        if ((*(byte *)(param_1 + 0x29) & 1) == 0) {
          if (((*(byte *)((longlong)param_1 + 0x149) & 1) == 0) &&
             ((((*(byte *)(param_1 + 0x55) & 1) == 0 ||
               (0x23 < (ulonglong)*(uint *)(param_1 + 0x56))) ||
              ((0x8100000e0U >> ((ulonglong)*(uint *)(param_1 + 0x56) & 0x3f) & 1) == 0)))) {
            *(undefined1 *)((longlong)param_1 + 0x134) = 4;
            lVar14 = param_1[0x39];
            uVar13 = 4;
          }
          else {
            *(undefined1 *)((longlong)param_1 + 0x134) = 1;
            lVar14 = param_1[0x39];
            uVar13 = 1;
          }
        }
        else {
          *(undefined1 *)((longlong)param_1 + 0x134) = 3;
          lVar14 = param_1[0x39];
          uVar13 = 3;
        }
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x134) = 2;
        lVar14 = param_1[0x39];
        uVar13 = 2;
      }
      if (lVar14 != 0) {
        *(undefined1 *)(lVar14 + 0x2c) = uVar13;
      }
      uVar12 = (**(code **)(*param_1 + 0xf0))(param_1);
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
      }
      plVar11 = (longlong *)param_1[2];
      local_98 = plVar10;
      local_90 = plVar16;
      if (plVar11 == (longlong *)0x0) {
LAB_142918e94:
        local_a8 = 0;
        plStack_a0 = (longlong *)0x0;
        FUN_146b1b560(uVar12,&local_a8,&local_98,0);
      }
      else {
        iVar4 = (int)plVar11[1];
        do {
          if (iVar4 == 0) goto LAB_142918e94;
          LOCK();
          iVar5 = (int)plVar11[1];
          bVar27 = iVar4 == iVar5;
          if (bVar27) {
            *(int *)(plVar11 + 1) = iVar4 + 1;
            iVar5 = iVar4;
          }
          iVar4 = iVar5;
          UNLOCK();
        } while (!bVar27);
        lVar14 = param_1[1];
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        plVar10 = plVar11 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        local_a8 = lVar14;
        plStack_a0 = plVar11;
        FUN_146b1b560(uVar12,&local_a8,&local_98,0);
        LOCK();
        plVar10 = plVar11 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      param_1[0x39] = 0;
      plVar10 = (longlong *)param_1[0x3a];
      if (plVar10 != (longlong *)0x0) {
        param_1[0x3a] = 0;
        LOCK();
        plVar11 = plVar10 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
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
      LOCK();
      lVar14 = param_1[0x68];
      param_1[0x68] = 0;
      UNLOCK();
    }
    if (plVar16 == (longlong *)0x0) goto LAB_142919079;
  }
  LOCK();
  plVar10 = plVar16 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    lVar14 = (**(code **)*plVar16)(plVar16);
    LOCK();
    piVar1 = (int *)((longlong)plVar16 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
LAB_142919079:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar14;
}



// FUNCTION 142919258 FUN_142919258 body=290 status=ok
// SIG undefined FUN_142919258(void)

undefined8 * FUN_142919258(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0xb0) != 0) {
    iVar3 = *(int *)(param_3 + 8) + -1;
    if (*(int *)(param_3 + 8) == 0) {
      iVar3 = 0;
    }
    if (0 < iVar3) {
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
      } while (iVar3 != iVar4);
    }
    iVar3 = FUN_1457511aa((longlong *)(param_1 + 0x58));
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x58);
      lVar1 = lVar2 + (longlong)iVar3 * 0x28;
      if (((lVar1 != 0) && (lVar2 = lVar2 + (longlong)iVar3 * 0x28, lVar2 != -0x10)) &&
         ((undefined8 *)(lVar2 + 0x10) != param_2)) {
        iVar3 = *(int *)(lVar1 + 0x18);
        _Src = *(void **)(lVar1 + 0x10);
        *(int *)(param_2 + 1) = iVar3;
        if (iVar3 == 0 && *(int *)((longlong)param_2 + 0xc) == 0) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(param_2,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*param_2,_Src,(longlong)iVar3 * 2);
          }
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 14291937a FUN_14291937a body=633 status=ok
// SIG undefined FUN_14291937a(void)

/* WARNING: Removing unreachable block (ram,0x000142919511) */

longlong * FUN_14291937a(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_88 [44];
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0xb0) != 0) {
    iVar8 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x8c);
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    if (*(int *)((longlong)param_2 + 0xc) < iVar8) {
      FUN_1408be2c4(param_2);
    }
    iVar8 = *(int *)(param_1 + 0x80);
    if (iVar8 == 0) {
      uVar9 = 1;
      uVar12 = 0;
      local_5c = 0;
      iVar3 = 0;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0x78);
      if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x68);
      }
      uVar11 = *puVar5;
      if (uVar11 == 0) {
        iVar3 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar3 = iVar8 + -1;
        }
        uVar12 = 0;
        uVar9 = (ulonglong)(uint)(iVar3 >> 5);
        if (iVar3 >> 5 < 1) {
          uVar9 = uVar12;
        }
        local_5c = 0;
        do {
          if (uVar9 == uVar12) goto LAB_142919463;
          local_5c = local_5c + 0x20;
          uVar11 = puVar5[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar11 == 0);
      }
      else {
        uVar12 = 0;
        local_5c = 0;
      }
      uVar9 = (ulonglong)(-uVar11 & uVar11);
      uVar1 = uVar9 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar3 = (local_5c - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar8 <= iVar3) {
        iVar3 = iVar8;
      }
    }
    if (iVar3 != iVar8) {
      uVar11 = 0xffffffff;
      do {
        FUN_1410ee246(&local_58,*(longlong *)(param_1 + 0x58) + (longlong)iVar3 * 0x28,
                      *(longlong *)(param_1 + 0x58) + (longlong)iVar3 * 0x28 + 0x10);
        lVar13 = param_2[1];
        uVar4 = (int)lVar13 + 1;
        *(uint *)(param_2 + 1) = uVar4;
        if (*(uint *)((longlong)param_2 + 0xc) < uVar4) {
          FUN_1447a1bd6(param_2);
        }
        lVar10 = *param_2;
        lVar13 = (longlong)(int)lVar13 * 0x10;
        *(undefined8 *)(lVar10 + lVar13) = 0;
        *(undefined8 *)(lVar10 + lVar13) = local_58;
        local_58 = 0;
        *(undefined4 *)(lVar10 + 8 + lVar13) = (undefined4)local_50;
        *(undefined4 *)(lVar10 + 0xc + lVar13) = local_50._4_4_;
        local_50 = 0;
        uVar11 = uVar11 & ~(uint)uVar9;
        puVar5 = *(uint **)(param_1 + 0x78);
        if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
          puVar5 = (uint *)(param_1 + 0x68);
        }
        iVar2 = *(int *)(param_1 + 0x80);
        iVar3 = (int)uVar12;
        lVar13 = (longlong)iVar3;
        uVar4 = puVar5[lVar13] & uVar11;
        if (uVar4 == 0) {
          iVar6 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar6 = iVar2 + -1;
          }
          iVar6 = iVar6 >> 5;
          local_5c = local_5c + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar3) {
            iVar7 = iVar3;
          }
          if (iVar3 < iVar6) {
            lVar10 = 0;
            do {
              uVar4 = puVar5[lVar13 + lVar10 + 1];
              if (uVar4 != 0) {
                uVar12 = (ulonglong)(iVar3 + (int)lVar10 + 1);
                uVar11 = 0xffffffff;
                goto LAB_14291959a;
              }
              local_5c = local_5c + 0x20;
              lVar10 = lVar10 + 1;
            } while (iVar7 - lVar13 != lVar10);
            uVar11 = 0xffffffff;
            iVar3 = iVar7;
          }
          uVar12 = (ulonglong)(iVar3 + 1);
          iVar3 = iVar2;
        }
        else {
LAB_14291959a:
          uVar9 = (ulonglong)(-uVar4 & uVar4);
          uVar1 = uVar9 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar3 = (local_5c - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar3) {
            iVar3 = iVar2;
          }
        }
      } while (iVar3 != iVar8);
    }
  }
LAB_142919463:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142919612 FUN_142919612 body=1493 status=ok
// SIG undefined FUN_142919612(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142919612(void)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  char *_Str;
  size_t sVar8;
  longlong *plVar9;
  undefined1 auStack_288 [32];
  code *local_268;
  code *local_260;
  longlong local_250 [2];
  int local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  int local_230;
  undefined1 local_22b;
  undefined1 local_22a;
  undefined1 local_229;
  undefined *local_228;
  undefined4 local_220;
  undefined1 local_21c;
  longlong local_128;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (DAT_14c990be8 != 0) goto LAB_142919b40;
  local_228 = &DAT_149f27af2;
  local_220 = 3;
  local_21c = 0;
  uVar5 = FUN_14001a6c0(&local_228,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  lVar7 = FUN_1402c9134(&DAT_14c874628,uVar5,&local_228,1);
  bVar3 = (**(code **)(**(longlong **)(lVar7 + 0x10) + 8))();
  DAT_14c990bf0 = 1;
  local_260 = FUN_142919be8;
  local_268 = FUN_142919c22;
  iVar6 = FUN_144bb6980(bVar3 ^ 3,&LAB_142919c73,&LAB_142919c6e,&LAB_142919c5e);
  if (iVar6 == 0) {
    FUN_144bbef20(10);
    DAT_14c990be8 = FUN_144bb9cf0();
    if (DAT_14c990be8 == 0) {
      FUN_140033559(".\\Runtime/Online/HTTP/Private/Curl/CurlHttpManager.cpp",0xc0,
                    L"Could not initialize create libcurl multi handle! HTTP transfers will not function properly."
                   );
    }
    local_228 = (undefined *)((ulonglong)local_228 & 0xffffffff00000000);
    local_268 = (code *)&DAT_14c872ce8;
    bVar3 = FUN_1414d73b6(DAT_14c872ce0,L"HTTP.Curl",L"MaxTotalConnections",&local_228);
    if ((0 < (int)local_228 & bVar3) == 1) {
      FUN_144bba660(DAT_14c990be8,0xd);
    }
    local_240 = 0;
    local_268 = (code *)&DAT_14c872ce8;
    bVar3 = FUN_1414d73b6(DAT_14c872ce0,L"HTTP.Curl",L"MaxConnects",&local_240);
    if ((-1 < local_240 & bVar3) == 1) {
      FUN_144bba660(DAT_14c990be8,6);
    }
    DAT_14c990bc8 = FUN_144bbe860();
    if (DAT_14c990bc8 == 0) {
      FUN_140033559(".\\Runtime/Online/HTTP/Private/Curl/CurlHttpManager.cpp",0xe3,
                    L"Could not initialize libcurl share handle!");
    }
    else {
      FUN_144bbe8b0(DAT_14c990bc8,1,2);
      FUN_144bbe8b0(DAT_14c990bc8,1,3);
      FUN_144bbe8b0(DAT_14c990bc8,1,4);
    }
  }
  else {
    FUN_140033559(".\\Runtime/Online/HTTP/Private/Curl/CurlHttpManager.cpp",0xe9,
                  L"Could not initialize libcurl (result=%d), HTTP transfers will not function properly."
                  ,iVar6);
  }
  local_229 = 0;
  local_268 = (code *)&DAT_14c872ce8;
  cVar4 = FUN_14052bb08(DAT_14c872ce0,L"HTTP.Curl",L"bForbidReuse");
  if (cVar4 != '\0') {
    DAT_14c990b91 = local_229;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar4 = FUN_14054d46e(&DAT_14c846b20,L"noreuseconn");
  if (cVar4 != '\0') {
    DAT_14c990b91 = 1;
  }
  DAT_14c990b90 = (**(code **)(**(longlong **)(lVar7 + 8) + 0x10))();
  local_22a = 1;
  local_268 = (code *)&DAT_14c872ce8;
  cVar4 = FUN_14052bb08(DAT_14c872ce0,L"/Script/Engine.NetworkSettings",L"n.VerifyPeer");
  if (cVar4 != '\0') {
    DAT_14c990b90 = local_22a;
  }
  local_22b = 1;
  local_268 = (code *)&DAT_14c872ce8;
  cVar4 = FUN_14052bb08(DAT_14c872ce0,L"HTTP",L"AcceptCompressedContent");
  if (cVar4 != '\0') {
    DAT_14c990b92 = local_22b;
  }
  local_230 = 0;
  local_268 = (code *)&DAT_14c872ce8;
  bVar3 = FUN_1414d73b6(DAT_14c872ce0,L"HTTP.Curl",L"BufferSize",&local_230);
  if ((0 < local_230 & bVar3) == 1) {
    DAT_14c990ba8 = local_230;
  }
  local_268 = (code *)&DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"HTTP.Curl",L"bAllowSeekFunction",&DAT_14c990bac);
  lVar7 = FUN_141054386();
  _DAT_14c990b94 = *(int *)(lVar7 + 0x48);
  if (_DAT_14c990b94 < 1) {
LAB_142919a21:
    _DAT_14c990b94 = 0;
  }
  else {
    iVar6 = FUN_144bba660(DAT_14c990be8);
    if (iVar6 != 0) {
      _Str = (char *)FUN_144bbdfc0(iVar6);
      local_128 = 0;
      if (_Str == (char *)0x0) goto LAB_142919a21;
      sVar8 = strlen(_Str);
      FUN_1446e6fe8(&local_228,_Str,sVar8 & 0xffffffff,1);
      _DAT_14c990b94 = 0;
      if (local_128 != 0) {
        FUN_1400020a8();
      }
    }
  }
  memset(&local_228,0,0x200);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_260 = (code *)0x0;
  local_268 = (code *)CONCAT71(local_268._1_7_,1);
  cVar4 = FUN_140751ea8(&DAT_14c846b20,L"MULTIHOMEHTTP=",&local_228,0x100);
  if (cVar4 != '\0') {
    FUN_1446f470e(&local_240,L"WINDOWS",1);
    plVar9 = (longlong *)FUN_140272950(&local_240);
    if (plVar9 != (longlong *)0x0) {
      FUN_140056680(local_250,&local_228);
      (**(code **)(*plVar9 + 0x58))(plVar9,&local_240,local_250);
      lVar7 = CONCAT44(uStack_23c,local_240);
      plVar9 = (longlong *)CONCAT44(uStack_234,uStack_238);
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
      if (local_250[0] != 0) {
        FUN_1400020a8();
      }
      if (lVar7 != 0) {
        FUN_140056680(&local_240,&local_228);
        if (CONCAT44(DAT_14c990b98._4_4_,(int)DAT_14c990b98) != 0) {
          FUN_1400020a8();
        }
        DAT_14c990b98._0_4_ = local_240;
        DAT_14c990b98._4_4_ = uStack_23c;
        DAT_14c990ba0 = uStack_238;
        _DAT_14c990ba4 = uStack_234;
      }
    }
  }
  FUN_141054386();
LAB_142919b40:
  if ((local_20 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142919be8 FUN_142919be8 body=58 status=ok
// SIG undefined FUN_142919be8(void)

void * FUN_142919be8(longlong param_1,longlong param_2)

{
  void *pvVar1;
  size_t _Size;
  
  _Size = param_1 * param_2;
  if (_Size != 0) {
    pvVar1 = (void *)FUN_14001cc68(_Size);
    if (pvVar1 != (void *)0x0) {
      pvVar1 = memset(pvVar1,0,_Size);
      return pvVar1;
    }
  }
  return (void *)0x0;
}



// FUNCTION 142919c22 FUN_142919c22 body=60 status=ok
// SIG undefined FUN_142919c22(void)

char * FUN_142919c22(char *param_1)

{
  size_t sVar1;
  char *pcVar2;
  
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    pcVar2 = (char *)FUN_14001cc68((longlong)(int)sVar1 + 1,0);
    if (pcVar2 != (char *)0x0) {
      pcVar2 = strcpy(pcVar2,param_1);
      return pcVar2;
    }
  }
  return (char *)0x0;
}



// FUNCTION 142919c7a FUN_142919c7a body=280 status=ok
// SIG undefined FUN_142919c7a(void)

undefined8 * FUN_142919c7a(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14150576c();
  *param_1 = &PTR_FUN_149f29f80;
  param_1[1] = &PTR_LAB_149f2a010;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x17] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,8);
  *puVar1 = 0;
  param_1[0x17] = puVar1;
  param_1[0x18] = puVar1;
  param_1[0x1b] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_140056680(local_28,L"http-legacy");
  FUN_141505626();
  FUN_145c57f14(local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  lVar2 = FUN_141054386();
  param_1[0x13] = (double)*(float *)(lVar2 + 0x34);
  lVar2 = FUN_141054386();
  param_1[0x14] = (double)*(float *)(lVar2 + 0x38);
  lVar2 = FUN_141054386();
  param_1[0x15] = (double)*(float *)(lVar2 + 0x3c);
  lVar2 = FUN_141054386();
  param_1[0x16] = (double)*(float *)(lVar2 + 0x40);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142919d94 FUN_142919d94 body=426 status=ok
// SIG undefined FUN_142919d94(void)

void FUN_142919d94(longlong param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x68)) {
    local_54 = -1;
    FUN_144bba370(DAT_14c990be8,&local_54);
    if ((local_54 == 0) || (local_54 != *(int *)(param_1 + 0x68))) {
      local_58 = 0;
      piVar4 = (int *)FUN_144bba5d0(DAT_14c990be8);
      if (piVar4 != (int *)0x0) {
        do {
          if (*piVar4 == 1) {
            uVar2 = *(ulonglong *)(piVar4 + 2);
            FUN_144bba090(DAT_14c990be8,uVar2);
            if (*(int *)(param_1 + 0xe8) != *(int *)(param_1 + 0x114)) {
              uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
              uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
              lVar5 = *(longlong *)(param_1 + 0x120);
              if (*(longlong *)(param_1 + 0x120) == 0) {
                lVar5 = param_1 + 0x118;
              }
              iVar6 = *(int *)(lVar5 + (ulonglong)
                                       (*(int *)(param_1 + 0x128) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                                       4);
              if (iVar6 != -1) {
                do {
                  puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar6 * 0x18);
                  if (*puVar1 == uVar2) {
                    if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
                      FUN_14113cca2(puVar1[1],piVar4[4]);
                      FUN_1411e09ac((longlong *)(param_1 + 0xe0),uVar2);
                    }
                    break;
                  }
                  iVar6 = (int)puVar1[2];
                } while (iVar6 != -1);
              }
            }
          }
          local_58 = 0;
          piVar4 = (int *)FUN_144bba5d0(DAT_14c990be8,&local_58);
        } while (piVar4 != (int *)0x0);
      }
    }
  }
  FUN_142746dae(param_1 + 0xb8,param_2);
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142919f40 FUN_142919f40 body=166 status=ok
// SIG undefined FUN_142919f40(void)

undefined8 FUN_142919f40(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_2[0x4f];
  local_48 = lVar1;
  local_40 = param_2;
  FUN_142917248(param_2);
  iVar2 = FUN_144bb9e50(DAT_14c990be8,lVar1);
  *(int *)((longlong)param_2 + 0x2ac) = iVar2;
  if (iVar2 == 0) {
    local_38 = &local_48;
    local_30 = &local_40;
    FUN_14162e014(param_1 + 0xe0,local_24);
    uVar3 = (**(code **)(*local_40 + 0x168))();
  }
  else {
    uVar3 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142919fe8 FUN_142919fe8 body=159 status=ok
// SIG undefined FUN_142919fe8(void)

void FUN_142919fe8(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0xffffffff;
  FUN_144bba370(*(undefined8 *)(param_1 + 0x20));
  pcVar1 = *(code **)(param_1 + 0x30);
  plVar3 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  auVar4._0_8_ = (double)param_2 / 10000.0;
  auVar4._8_8_ = 0;
  auVar4 = roundpd(auVar4,auVar4,2);
  local_38 = 0;
  FUN_144bba340(*(undefined8 *)(param_1 + 0x20),0,0,(longlong)auVar4._0_8_);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14291a088 FUN_14291a088 body=166 status=ok
// SIG undefined FUN_14291a088(void)

undefined8 FUN_14291a088(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_2[0x4f];
  local_48 = lVar1;
  local_40 = param_2;
  FUN_142917248(param_2);
  iVar2 = FUN_144bb9e50(DAT_14c990be8,lVar1);
  *(int *)((longlong)param_2 + 0x2ac) = iVar2;
  if (iVar2 == 0) {
    local_38 = &local_48;
    local_30 = &local_40;
    FUN_14162e014(param_1 + 0x670,local_24);
    uVar3 = (**(code **)(*local_40 + 0x168))();
  }
  else {
    uVar3 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14291a130 FUN_14291a130 body=1632 status=ok
// SIG undefined FUN_14291a130(void)

void FUN_14291a130(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  double dVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  double dVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  DWORD DVar12;
  DWORD DVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  longlong *plVar19;
  int iVar20;
  bool bVar21;
  float fVar22;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  LARGE_INTEGER local_80;
  longlong *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((char)param_1[3] == '\0') && (DAT_14c86a9f8 == '\x01')) &&
     (iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar11 != 2)) {
    if (iVar11 == 1) {
      DVar12 = FUN_140ad26c0();
      DVar13 = GetCurrentThreadId();
      if (DVar12 == DVar13) goto LAB_14291a1c3;
    }
    uVar18 = 4;
    if ((int)DAT_14c75ef74 < 4) {
      uVar18 = DAT_14c75ef74;
    }
    uVar9 = 0;
    if (0 < (int)uVar18) {
      uVar9 = uVar18;
    }
    if ((&DAT_149f29f40)[uVar9] != (int)param_1[5]) {
      *(undefined4 *)(param_1 + 5) = (&DAT_149f29f40)[uVar9];
    }
  }
LAB_14291a1c3:
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_146b2463e(param_2);
  }
  while (lVar14 = *(longlong *)param_1[9], lVar14 != 0) {
    uVar7 = *(undefined8 *)(lVar14 + 8);
    FUN_1400020a8(param_1[9]);
    param_1[9] = lVar14;
    iVar11 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar11 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar11 + 1U) {
      FUN_141267490(param_2,iVar11);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar11 * 8) = uVar7;
  }
  lVar14 = *(longlong *)param_1[7];
  local_98 = param_3;
  if (lVar14 != 0) {
    do {
      lVar5 = *(longlong *)(lVar14 + 8);
      FUN_1400020a8(param_1[7]);
      param_1[7] = lVar14;
      QueryPerformanceCounter(&local_80);
      *(float *)(lVar5 + 0x274) = (float)((double)local_80.QuadPart * DAT_14c83f420 + 16777216.0);
      iVar11 = (int)param_1[0xb];
      *(uint *)(param_1 + 0xb) = iVar11 + 1U;
      if (*(uint *)((longlong)param_1 + 0x5c) < iVar11 + 1U) {
        FUN_141267490(param_1 + 10,iVar11);
      }
      *(longlong *)(param_1[10] + (longlong)iVar11 * 8) = lVar5;
      lVar14 = *(longlong *)param_1[7];
    } while (lVar14 != 0);
  }
  lVar14 = param_2[1];
  if ((longlong)(int)lVar14 != 0) {
    lVar5 = *param_2;
    lVar17 = 0;
    do {
      local_88 = *(longlong **)(lVar5 + lVar17);
      local_80.QuadPart = (LONGLONG)&local_88;
      iVar11 = FUN_146b2466e(param_1 + 0xc,&local_80);
      if ((0 < iVar11) ||
         (local_80.QuadPart = (LONGLONG)&local_88, iVar11 = FUN_146b2466e(param_1 + 10,&local_80),
         0 < iVar11)) {
        FUN_141267424(local_98,&local_88);
      }
      lVar17 = lVar17 + 8;
    } while ((longlong)(int)lVar14 * 8 != lVar17);
  }
  QueryPerformanceCounter(&local_80);
  dVar8 = (double)local_80.QuadPart * DAT_14c83f420 + 16777216.0;
  dVar4 = (double)param_1[4];
  param_1[4] = (longlong)dVar8;
  lVar14 = param_1[0xd];
  fVar22 = (float)(dVar8 - dVar4);
  if ((longlong)(int)lVar14 != 0) {
    lVar5 = param_1[0xc];
    lVar17 = 0;
    do {
      (**(code **)(**(longlong **)(lVar5 + lVar17) + 0x170))(*(longlong **)(lVar5 + lVar17),fVar22);
      lVar17 = lVar17 + 8;
    } while ((longlong)(int)lVar14 * 8 != lVar17);
  }
  plVar1 = param_1 + 0xc;
  (**(code **)(*param_1 + 0x78))(param_1,fVar22);
  plVar19 = local_98;
  if (0 < (int)param_1[0xd]) {
    uVar18 = 0;
    do {
      local_80 = *(LARGE_INTEGER *)(*plVar1 + (longlong)(int)uVar18 * 8);
      cVar10 = (*(code *)(*(longlong **)local_80)[0x2c])();
      if (cVar10 != '\0') {
        FUN_141267424(plVar19,&local_80);
        iVar11 = (int)param_1[0xd];
        iVar20 = ~uVar18 + iVar11;
        if (iVar20 != 0) {
          if (0 < iVar20) {
            iVar20 = 1;
          }
          memmove((void *)(param_1[0xc] + (longlong)(int)uVar18 * 8),
                  (void *)(param_1[0xc] + (longlong)(iVar11 - iVar20) * 8),(longlong)iVar20 << 3);
          iVar11 = (int)param_1[0xd];
        }
        *(int *)(param_1 + 0xd) = iVar11 + -1;
        FUN_141724648(plVar1);
        uVar18 = uVar18 - 1;
      }
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < (int)param_1[0xd]);
  }
  lVar14 = FUN_141054386();
  lVar5 = DAT_14c990e60;
  lVar14 = *(longlong *)(lVar14 + 0x20);
  uVar18 = *(uint *)(param_1 + 0xd);
  iVar11 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (((iVar11 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar11 == 2)) {
    uVar16 = 0;
  }
  else if (iVar11 == 1) {
    DVar12 = FUN_140ad26c0();
    DVar13 = GetCurrentThreadId();
    uVar16 = (ulonglong)(DVar12 != DVar13);
  }
  else {
    uVar16 = 1;
  }
  iVar11 = *(int *)(lVar5 + uVar16 * 4);
  *(int *)((longlong)param_1 + 0x2c) = iVar11;
  if ((int)uVar18 < iVar11) {
    plVar19 = param_1 + 10;
    local_90 = plVar19;
    do {
      if ((int)param_1[0xb] == 0) break;
      plVar6 = (longlong *)*plVar19;
      plVar15 = (longlong *)*plVar6;
      iVar11 = (int)param_1[0xb] + -1;
      local_88 = plVar15;
      if (iVar11 == 0) {
        iVar11 = 0;
      }
      else {
        memmove(plVar6,plVar6 + 1,(longlong)iVar11 << 3);
        iVar11 = (int)param_1[0xb] + -1;
      }
      *(int *)(param_1 + 0xb) = iVar11;
      FUN_141724648(plVar19);
      QueryPerformanceCounter(&local_80);
      fVar22 = (float)(((double)local_80.QuadPart * DAT_14c83f420 + 16777216.0) -
                      (double)*(float *)((longlong)plVar15 + 0x274));
      if (0.01 < fVar22) {
        if (fVar22 <= *(float *)(lVar14 + 0x19c)) {
          fVar22 = *(float *)(lVar14 + 0x19c);
        }
        LOCK();
        *(float *)(lVar14 + 0x19c) = fVar22;
        UNLOCK();
        plVar15 = local_88;
      }
      cVar10 = (**(code **)(*param_1 + 0x80))(param_1,plVar15);
      if (cVar10 == '\0') {
        FUN_141267424(local_98,&local_88);
      }
      else {
        iVar11 = (int)param_1[0xd];
        *(uint *)(param_1 + 0xd) = iVar11 + 1U;
        if (*(uint *)((longlong)param_1 + 0x6c) < iVar11 + 1U) {
          FUN_141267490(plVar1,iVar11);
        }
        uVar18 = uVar18 + 1;
        *(longlong **)(*plVar1 + (longlong)iVar11 * 8) = plVar15;
        (**(code **)(*plVar15 + 0x170))(plVar15,0);
        plVar19 = local_90;
      }
    } while ((int)uVar18 < *(int *)((longlong)param_1 + 0x2c));
  }
  LOCK();
  *(uint *)(lVar14 + 0x18c) = uVar18;
  UNLOCK();
  if (uVar18 < *(uint *)(lVar14 + 0x198)) {
    uVar18 = *(uint *)(lVar14 + 0x198);
  }
  LOCK();
  *(uint *)(lVar14 + 0x198) = uVar18;
  UNLOCK();
  uVar18 = *(uint *)(param_1 + 0xb);
  if (uVar18 != 0) {
    LOCK();
    *(uint *)(lVar14 + 0x188) = uVar18;
    UNLOCK();
    if (uVar18 < *(uint *)(lVar14 + 0x194)) {
      uVar18 = *(uint *)(lVar14 + 0x194);
    }
    LOCK();
    *(uint *)(lVar14 + 0x194) = uVar18;
    UNLOCK();
  }
  if (0 < (longlong)(int)local_98[1]) {
    plVar19 = (longlong *)*local_98;
    plVar1 = plVar19 + (int)local_98[1];
    do {
      plVar6 = (longlong *)*plVar19;
      (**(code **)(*param_1 + 0x88))(param_1,plVar6);
      cVar10 = (**(code **)(*plVar6 + 0x140))(plVar6);
      if (cVar10 == '\x01') {
        (**(code **)(*plVar6 + 0x158))(plVar6);
        lVar14 = FUN_141054386();
        uVar7 = *(undefined8 *)(lVar14 + 0x20);
        local_78 = (longlong *)plVar6[2];
        if (local_78 == (longlong *)0x0) {
LAB_14291a66b:
          local_78 = (longlong *)0x0;
          local_80.QuadPart = 0;
        }
        else {
          iVar11 = (int)local_78[1];
          do {
            if (iVar11 == 0) goto LAB_14291a66b;
            LOCK();
            iVar20 = (int)local_78[1];
            bVar21 = iVar11 == iVar20;
            if (bVar21) {
              *(int *)(local_78 + 1) = iVar11 + 1;
              iVar20 = iVar11;
            }
            iVar11 = iVar20;
            UNLOCK();
          } while (!bVar21);
          local_80 = *(LARGE_INTEGER *)(plVar6 + 1);
        }
        FUN_1410fdd1a(uVar7,&local_80);
        plVar15 = local_78;
        if (local_78 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_78 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_78)(local_78);
            LOCK();
            piVar3 = (int *)((longlong)plVar15 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
      }
      plVar15 = (longlong *)param_1[0x10];
      if (plVar15 == (longlong *)param_1[0x11]) {
        param_1[0x11] = param_1[0xe];
        plVar15 = (longlong *)param_1[0x10];
        if (plVar15 != (longlong *)param_1[0xe]) goto LAB_14291a6e6;
        plVar15 = (longlong *)FUN_14001cc68(0x10,8);
        *plVar15 = 0;
        plVar15[1] = 0;
      }
      else {
LAB_14291a6e6:
        param_1[0x10] = *plVar15;
        *plVar15 = 0;
      }
      plVar15[1] = (longlong)plVar6;
      *(longlong **)param_1[0xf] = plVar15;
      param_1[0xf] = (longlong)plVar15;
      plVar19 = plVar19 + 1;
    } while (plVar19 != plVar1);
    *(undefined4 *)(local_98 + 1) = 0;
    if (*(int *)((longlong)local_98 + 0xc) < 0) {
      FUN_146b2463e();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14291a794 FUN_14291a794 body=47 status=ok
// SIG undefined FUN_14291a794(void)

void FUN_14291a794(undefined8 param_1)

{
  char cVar1;
  
  do {
    cVar1 = FUN_14291f1e0(param_1,0x7fffffffffffffff);
  } while (cVar1 != '\0');
  return;
}



// FUNCTION 14291a7c4 FUN_14291a7c4 body=130 status=ok
// SIG undefined FUN_14291a7c4(void)

undefined4 FUN_14291a7c4(longlong *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0xb0))();
  uVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  if ((char)uVar1 != '\0') {
    QueryPerformanceCounter(&local_28);
    param_1[4] = (longlong)((double)local_28.QuadPart * DAT_14c83f420 + 16777216.0);
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14291a847 FUN_14291a847 body=69 status=ok
// SIG undefined FUN_14291a847(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14291a847(void)

{
  _DAT_14c990bf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014291a889. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c990c00,1);
  return;
}



// FUNCTION 14291a88c FUN_14291a88c body=69 status=ok
// SIG undefined FUN_14291a88c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14291a88c(void)

{
  _DAT_14c990c10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014291a8ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c990c18,1);
  return;
}



// FUNCTION 14291a8d1 FUN_14291a8d1 body=69 status=ok
// SIG undefined FUN_14291a8d1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14291a8d1(void)

{
  _DAT_14c990bd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014291a913. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c990bd8,1);
  return;
}



// FUNCTION 14291a916 FUN_14291a916 body=106 status=ok
// SIG undefined FUN_14291a916(void)

undefined8 FUN_14291a916(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = CONCAT71((int7)(local_8 >> 8),1);
  if (*(int *)(param_1 + 0xf0) != *(int *)(param_1 + 0x11c)) {
    local_18 = *param_2;
    local_10 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_10 = 0;
    }
    uVar1 = FUN_14278d920(param_1 + 0xe8,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14291a982 FUN_14291a982 body=545 status=ok
// SIG undefined FUN_14291a982(void)

void FUN_14291a982(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  undefined ***pppuVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined ***local_88;
  undefined **local_78;
  longlong local_70;
  longlong *local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  (**(code **)(*param_1 + 0xe0))(param_1,&local_98);
  lVar7 = FUN_141054386();
  pfVar8 = (float *)(lVar7 + 0x14);
  if (local_98._4_1_ != '\0') {
    pfVar8 = (float *)&local_98;
  }
  fVar3 = *pfVar8;
  if ((((fVar3 != 0.0) || (NAN(fVar3))) && ((*(byte *)(param_1 + 0x29) & 1) == 0)) &&
     (param_1[0x2c] == 0)) {
    plVar11 = (longlong *)param_1[2];
    if (plVar11 == (longlong *)0x0) {
LAB_14291aa64:
      lVar7 = FUN_141054386();
      lVar9 = *(longlong *)(lVar7 + 0x20);
      bVar12 = true;
      plVar11 = (longlong *)0x0;
      lVar7 = 0;
    }
    else {
      iVar6 = (int)plVar11[1];
      do {
        if (iVar6 == 0) goto LAB_14291aa64;
        LOCK();
        iVar5 = (int)plVar11[1];
        bVar12 = iVar6 == iVar5;
        if (bVar12) {
          *(int *)(plVar11 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar12);
      lVar7 = param_1[1];
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      lVar9 = FUN_141054386();
      lVar9 = *(longlong *)(lVar9 + 0x20);
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      bVar12 = false;
    }
    local_88 = (undefined ***)0x0;
    local_78 = &PTR_LAB_149f2a770;
    local_98 = FUN_14291fd8a;
    local_70 = lVar7;
    local_68 = plVar11;
    (**(code **)(**(longlong **)(lVar9 + 0x28) + 0x60))
              (*(longlong **)(lVar9 + 0x28),&local_a8,&local_98,fVar3);
    plVar1 = local_a0;
    if (param_1 + 0x2c != &local_a8) {
      param_1[0x2c] = local_a8;
      local_a8 = 0;
      plVar4 = (longlong *)param_1[0x2d];
      if (local_a0 != plVar4) {
        local_a0 = (longlong *)0x0;
        param_1[0x2d] = (longlong)plVar1;
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
    }
    plVar1 = local_a0;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (local_98 != (code *)0x0) {
      pppuVar10 = local_88;
      if (local_88 == (undefined ***)0x0) {
        pppuVar10 = &local_78;
      }
      (*(code *)(*pppuVar10)[2])();
    }
    if (!bVar12) {
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14291abcc FUN_14291abcc body=385 status=ok
// SIG undefined FUN_14291abcc(void)

void FUN_14291abcc(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined ***pppuVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  longlong *plStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  LOCK();
  bVar2 = *(byte *)(param_1 + 0x14a);
  *(byte *)(param_1 + 0x14a) = 1;
  UNLOCK();
  if ((bVar2 & 1) == 0) {
    FUN_14113cdca();
    FUN_146b1c93c(param_1);
    lVar7 = FUN_141054386();
    lVar7 = *(longlong *)(lVar7 + 0x20);
    plStack_38 = *(longlong **)(param_1 + 0x10);
    if (plStack_38 == (longlong *)0x0) {
LAB_14291ac74:
      local_40 = 0;
      plStack_38 = (longlong *)0x0;
      bVar9 = true;
    }
    else {
      iVar6 = (int)plStack_38[1];
      do {
        if (iVar6 == 0) goto LAB_14291ac74;
        LOCK();
        iVar5 = (int)plStack_38[1];
        bVar9 = iVar6 == iVar5;
        if (bVar9) {
          *(int *)(plStack_38 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar9);
      local_40 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plStack_38 + 1) = (int)plStack_38[1] + 1;
      UNLOCK();
      bVar9 = false;
      LOCK();
      *(int *)(plStack_38 + 1) = (int)plStack_38[1] + 1;
      UNLOCK();
    }
    plVar4 = plStack_38;
    local_48 = &PTR_LAB_149f2a730;
    local_58 = (undefined ***)0x0;
    local_68[0] = &LAB_14291fadc;
    plVar3 = *(longlong **)(lVar7 + 0x28);
    (**(code **)(*plVar3 + 0x60))(plVar3,local_78,local_68,0);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_70 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar8 = &local_48;
      if (local_58 != (undefined ***)0x0) {
        pppuVar8 = local_58;
      }
      (*(code *)(*pppuVar8)[2])(pppuVar8);
    }
    if (!bVar9) {
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14291ad7c FUN_14291ad7c body=242 status=ok
// SIG undefined FUN_14291ad7c(void)

ulonglong FUN_14291ad7c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined8 unaff_RDI;
  ulonglong uVar8;
  
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (*(longlong *)(param_1 + 0x18) != 0) goto LAB_14291ae62;
  if (*(int *)(param_1 + 0x10) < 2) {
    uVar8 = 0;
    goto LAB_14291ae62;
  }
  plVar4 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_1 + 0x10) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = *(undefined2 **)(param_1 + 8);
  }
  uVar8 = 0;
  lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,puVar7,0);
  if (lVar5 == 0) goto LAB_14291ae62;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149f02130;
  plVar6[2] = lVar5;
  *(longlong *)(param_1 + 0x18) = lVar5;
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar6 == plVar4) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar4 = plVar6;
        goto joined_r0x00014291ae4a;
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x20) = plVar6;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x00014291ae4a:
        if (iVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  uVar8 = CONCAT71((int7)((ulonglong)plVar4 >> 8),*(longlong *)(param_1 + 0x18) != 0);
LAB_14291ae62:
  return uVar8 & 0xffffffff;
}



// FUNCTION 14291ae74 FUN_14291ae74 body=3 status=ok
// SIG undefined FUN_14291ae74(void)

undefined1 FUN_14291ae74(void)

{
  return 1;
}



// FUNCTION 14291ae7c FUN_14291ae7c body=69 status=ok
// SIG undefined FUN_14291ae7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14291ae7c(void)

{
  _DAT_14c990d48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014291aebe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c990d50,1);
  return;
}



// FUNCTION 14291aec1 FUN_14291aec1 body=69 status=ok
// SIG undefined FUN_14291aec1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14291aec1(void)

{
  _DAT_14c990d60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014291af03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c990d68,1);
  return;
}



// FUNCTION 14291af06 FUN_14291af06 body=69 status=ok
// SIG undefined FUN_14291af06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14291af06(void)

{
  _DAT_14c990d78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014291af48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c990d80,1);
  return;
}



// FUNCTION 14291af4c FUN_14291af4c body=989 status=ok
// SIG undefined FUN_14291af4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14291af4c(longlong *param_1,byte param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  double dVar1;
  double dVar2;
  LARGE_INTEGER LVar3;
  undefined4 uVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  longlong *local_110;
  longlong local_108 [2];
  LARGE_INTEGER local_f8;
  undefined8 uStack_f0;
  undefined4 local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *(undefined1 *)(param_1 + 0x18) = 1;
  if ((int)param_1[0x28] != *(int *)((longlong)param_1 + 0x16c)) {
    plVar6 = param_1 + 0x2e;
    if ((longlong *)param_1[0x2f] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x2f];
    }
    iVar11 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[0x30] - 1U & (uint)param_2) * 4);
    if (iVar11 != -1) {
      lVar8 = param_1[0x27];
      iVar10 = iVar11;
      do {
        lVar7 = lVar8 + (longlong)iVar10 * 0x20;
        if (*(byte *)(lVar8 + (longlong)iVar10 * 0x20) == param_2) goto LAB_14291b029;
        iVar10 = *(int *)(lVar7 + 0x18);
      } while (iVar10 != -1);
      lVar7 = 0;
LAB_14291b029:
      uVar13 = (undefined4)*(undefined8 *)(lVar7 + 8);
      uVar14 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 8) >> 0x20);
      do {
        lVar7 = lVar8 + (longlong)iVar11 * 0x20;
        if (*(byte *)(lVar8 + (longlong)iVar11 * 0x20) == param_2) goto LAB_14291b055;
        iVar11 = *(int *)(lVar7 + 0x18);
      } while (iVar11 != -1);
      goto LAB_14291b053;
    }
  }
  uVar13 = (undefined4)_DAT_00000008;
  uVar14 = (undefined4)((ulonglong)_DAT_00000008 >> 0x20);
LAB_14291b053:
  lVar7 = 0;
LAB_14291b055:
  dVar1 = *(double *)(lVar7 + 0x10);
  local_e4 = 0x3f000000;
  local_118 = &DAT_14c872ce8;
  FUN_14153841e(DAT_14c872ce0,L"HTTP",L"RequestCleanupDelaySec");
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x7c);
  EnterCriticalSection(lpCriticalSection);
  lVar8 = param_1[4];
  LeaveCriticalSection(lpCriticalSection);
  QueryPerformanceCounter(&local_f8);
  dVar2 = (double)local_f8.QuadPart * DAT_14c83f420;
  QueryPerformanceCounter(&local_f8);
  uVar4 = local_e4;
  if ((int)lVar8 != 0) {
    plVar6 = param_1 + 3;
    dVar12 = (double)local_f8.QuadPart * DAT_14c83f420;
    pcVar9 = EnterCriticalSection_exref;
    do {
      dVar12 = (dVar12 + 16777216.0) - (dVar2 + 16777216.0);
      if ((0.0 <= dVar1) && (dVar1 <= dVar12)) {
        if ((0.0 < dVar1) &&
           (((dVar1 < dVar12 && (DAT_14c872bf0 == '\0')) && (cVar5 = FUN_140b3f358(), cVar5 == '\0')
            ))) {
          EnterCriticalSection(lpCriticalSection);
          LeaveCriticalSection(lpCriticalSection);
        }
        break;
      }
      if ((0.0 <= (double)CONCAT44(uVar14,uVar13)) && ((double)CONCAT44(uVar14,uVar13) <= dVar12)) {
        local_f8.QuadPart = 0;
        uStack_f0 = 0;
        (*pcVar9)(lpCriticalSection);
        local_110 = plVar6;
        FUN_146b1d21a(&local_f8,plVar6);
        LeaveCriticalSection(lpCriticalSection);
        if (0 < (int)uStack_f0) {
          lVar8 = 0;
          iVar11 = 0;
          do {
            LVar3 = local_f8;
            (**(code **)**(undefined8 **)(local_f8.QuadPart + lVar8))
                      (*(undefined8 **)(local_f8.QuadPart + lVar8),local_108);
            if (local_108[0] != 0) {
              FUN_1400020a8();
            }
            (**(code **)(**(longlong **)(LVar3.QuadPart + lVar8) + 0x118))();
            iVar11 = iVar11 + 1;
            lVar8 = lVar8 + 0x10;
          } while (iVar11 < (int)uStack_f0);
        }
        FUN_141214b54(local_f8.QuadPart);
        pcVar9 = EnterCriticalSection_exref;
        plVar6 = local_110;
        if (local_f8.QuadPart != 0) {
          FUN_1400020a8();
          pcVar9 = EnterCriticalSection_exref;
          plVar6 = local_110;
        }
      }
      (**(code **)(*param_1 + 0x10))(param_1);
      (*pcVar9)(lpCriticalSection);
      lVar8 = param_1[4];
      LeaveCriticalSection(lpCriticalSection);
      if (((int)lVar8 != 0) && (lVar7 = param_1[5], lVar7 != 0)) {
        if (*(char *)(lVar7 + 0x18) == '\x01') {
          (**(code **)(*(longlong *)(lVar7 + 8) + 8))(lVar7 + 8);
        }
        else {
          FUN_14000f986(uVar4);
        }
      }
      QueryPerformanceCounter(&local_f8);
      dVar12 = (double)local_f8.QuadPart * DAT_14c83f420;
    } while ((int)lVar8 != 0);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  if ((local_e0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14291b32a FUN_14291b32a body=496 status=ok
// SIG undefined FUN_14291b32a(void)

undefined8 FUN_14291b32a(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  FUN_142746dae(param_1 + 0x70,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x3e0);
    EnterCriticalSection(lpCriticalSection);
    iVar8 = *(int *)(param_1 + 0x20);
    if ((longlong)iVar8 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x18);
      lVar10 = 0;
      do {
        plVar4 = *(longlong **)(lVar3 + lVar10);
        (**(code **)(*plVar4 + 0x128))(plVar4,param_2);
        lVar10 = lVar10 + 0x10;
      } while ((longlong)iVar8 * 0x10 != lVar10);
    }
    LeaveCriticalSection(lpCriticalSection);
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x408));
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))(*(longlong **)(param_1 + 0x28),&local_78);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x408));
    if ((longlong)(int)uStack_70 != 0) {
      plVar4 = local_78 + (int)uStack_70;
      plVar9 = local_78;
      do {
        plVar5 = (longlong *)*plVar9;
        local_80 = (longlong *)plVar5[2];
        if (local_80 == (longlong *)0x0) {
LAB_14291b442:
          local_80 = (longlong *)0x0;
          local_88 = 0;
        }
        else {
          iVar8 = (int)local_80[1];
          do {
            if (iVar8 == 0) goto LAB_14291b442;
            LOCK();
            iVar6 = (int)local_80[1];
            bVar11 = iVar8 == iVar6;
            if (bVar11) {
              *(int *)(local_80 + 1) = iVar8 + 1;
              iVar6 = iVar8;
            }
            iVar8 = iVar6;
            UNLOCK();
          } while (!bVar11);
          local_88 = plVar5[1];
        }
        EnterCriticalSection(lpCriticalSection);
        local_68 = &local_88;
        FUN_141214a48(param_1 + 0x18,&local_68);
        LeaveCriticalSection(lpCriticalSection);
        cVar7 = (**(code **)(*plVar5 + 0x140))(plVar5);
        if (cVar7 == '\0') {
          (**(code **)(*plVar5 + 0x158))(plVar5);
          FUN_1410fdd1a(param_1,&local_88);
        }
        plVar5 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar4);
    }
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)*(undefined8 *)(param_1 + 0x1a0) >> 8),1);
}



// FUNCTION 14291b51b FUN_14291b51b body=373 status=ok
// SIG undefined FUN_14291b51b(void)

ulonglong FUN_14291b51b(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  undefined7 uVar5;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  cVar1 = FUN_146816ec6(0,&local_48);
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar4 = CONCAT71(uVar5,1);
  if (cVar1 != '\0') {
    puVar3 = &DAT_149dfb77a;
    if ((int)uStack_40 != 0) {
      puVar3 = local_48;
    }
    lVar6 = 0;
    while( true ) {
      uVar7 = *(ushort *)((longlong)puVar3 + lVar6);
      uVar8 = (ulonglong)uVar7;
      uVar9 = *(ushort *)((longlong)&DAT_149e3fc1c + lVar6);
      if (uVar7 != uVar9) break;
      if (uVar7 == 0) goto LAB_14291b5ff;
LAB_14291b58a:
      lVar6 = lVar6 + 2;
    }
    if ((uVar9 | uVar7) < 0x80) {
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      uVar10 = (ulonglong)uVar9;
      uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar10]) goto LAB_14291b58a;
    }
    if (uVar7 != uVar9) {
      lVar6 = 0;
      goto LAB_14291b5bf;
    }
LAB_14291b5ff:
    lVar6 = FUN_141054386();
    lVar6 = *(longlong *)(lVar6 + 0x20);
    FUN_140056680(&local_58,param_1);
    uVar4 = CONCAT71(uVar5,1);
    if (*(int *)(lVar6 + 0xf0) != *(int *)(lVar6 + 0x11c)) {
      local_30 = local_58;
      local_28 = local_50 + -1;
      if (local_50 == 0) {
        local_28 = 0;
      }
      uVar2 = FUN_14278d920(lVar6 + 0xe8);
      uVar4 = (ulonglong)uVar2;
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
LAB_14291b666:
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
LAB_14291b5bf:
  uVar7 = *(ushort *)((longlong)puVar3 + lVar6);
  uVar8 = (ulonglong)uVar7;
  uVar9 = *(ushort *)((longlong)&DAT_149e3fc26 + lVar6);
  if (uVar7 != uVar9) {
    if ((uVar9 | uVar7) < 0x80) {
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      uVar10 = (ulonglong)uVar9;
      uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar10]) goto LAB_14291b5d4;
    }
    if (uVar7 != uVar9) goto LAB_14291b666;
    goto LAB_14291b5ff;
  }
  if (uVar7 == 0) goto LAB_14291b5ff;
LAB_14291b5d4:
  lVar6 = lVar6 + 2;
  goto LAB_14291b5bf;
}



// FUNCTION 14291b692 FUN_14291b692 body=1548 status=ok
// SIG undefined FUN_14291b692(void)

void FUN_14291b692(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  longlong *plVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  _LIST_ENTRY *p_Var13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_e8 [32];
  int local_c8;
  char local_b9;
  longlong local_b8 [2];
  longlong *local_a8;
  longlong *local_a0;
  wchar_t *local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  wchar_t *local_70;
  int local_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = param_2;
  cVar6 = FUN_140988638(&local_78,L"TEST",1);
  if (cVar6 == '\0') {
    cVar6 = FUN_140988638(&local_78,L"DUMPREQ",1);
    if (cVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_e8);
    }
    cVar6 = FUN_140988638(&local_78,L"FLUSH",1);
    if (cVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_e8);
    }
    cVar6 = FUN_140988638(&local_78,L"LAUNCHREQUESTS",1);
    if (cVar6 == '\0') goto LAB_14291b76d;
    FUN_14619c2be(&local_70,&local_78,0);
    FUN_14619c2be(&local_88,&local_78,0);
    FUN_14619c2be(&local_98,&local_78,0);
    pwVar12 = local_98;
    pwVar11 = local_98;
    if ((int)uStack_90 == 0) {
      pwVar11 = L"";
    }
    iVar7 = _wtoi(pwVar11);
    if (pwVar12 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar12);
    }
    iVar14 = 0;
    FUN_14619c2be(&local_98,&local_78,0);
    pwVar12 = local_98;
    if ((int)uStack_90 == 0) {
      pwVar12 = L"";
    }
    cVar6 = FUN_14052c20c(pwVar12);
    if (local_98 != (wchar_t *)0x0) {
      FUN_1400020a8(local_98);
    }
    local_98 = (wchar_t *)0x0;
    uStack_90 = 0;
    if (0 < iVar7) {
      local_b9 = cVar6;
      do {
        plVar10 = (longlong *)FUN_141054386();
        (**(code **)(*plVar10 + 0x40))(plVar10,&local_a8);
        plVar10 = local_a8;
        pwVar12 = L"";
        if ((int)uStack_80 != 0) {
          pwVar12 = local_88;
        }
        FUN_140056680(local_b8,pwVar12);
        (**(code **)(*plVar10 + 0x68))(plVar10,local_b8);
        if (local_b8[0] != 0) {
          FUN_1400020a8();
        }
        plVar10 = local_a8;
        pwVar12 = L"";
        if (local_68 != 0) {
          pwVar12 = local_70;
        }
        FUN_140056680(local_b8,pwVar12);
        (**(code **)(*plVar10 + 0x60))(plVar10,local_b8);
        if (local_b8[0] != 0) {
          FUN_1400020a8();
        }
        lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*local_a8 + 0xf0))();
        EnterCriticalSection(lpCriticalSection);
        if (lpCriticalSection[1].LockCount != 2) {
          FUN_1446efa72(lpCriticalSection + 1,0,2,0x10);
          lpCriticalSection[1].LockCount = 2;
        }
        p_Var3 = lpCriticalSection[1].DebugInfo;
        *(undefined ***)p_Var3 = &PTR_LAB_149f2a800;
        LOCK();
        UNLOCK();
        p_Var13 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
        lVar15 = DAT_14c758608 + 1;
        if (p_Var13 == (_LIST_ENTRY *)0x0) {
          LOCK();
          UNLOCK();
          p_Var13 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
          lVar15 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar15;
        (p_Var3->ProcessLocksList).Flink = p_Var13;
        *(undefined ***)p_Var3 = &PTR_FUN_149f2abd0;
        if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection(lpCriticalSection);
        }
        (**(code **)(*local_a8 + 0xe8))();
        uVar5 = uStack_90;
        lVar15 = (longlong)(int)uStack_90;
        uVar8 = (int)uStack_90 + 1;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
        if (uStack_90._4_4_ < uVar8) {
          FUN_146283e3a(&local_98,uVar5 & 0xffffffff);
        }
        plVar10 = local_a0;
        *(longlong **)(local_98 + lVar15 * 8) = local_a8;
        *(longlong **)(local_98 + lVar15 * 8 + 4) = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
          UNLOCK();
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_a0 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_a0)(local_a0);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      iVar14 = (int)uStack_90;
      if (local_b9 != '\0') {
        if ((int)uStack_90 == 0) {
          iVar14 = 0;
        }
        else {
          pwVar11 = local_98 + (longlong)(int)uStack_90 * 8;
          pwVar12 = local_98;
          do {
            plVar10 = *(longlong **)pwVar12;
            plVar4 = *(longlong **)(pwVar12 + 4);
            if (plVar4 == (longlong *)0x0) {
              (**(code **)(*plVar10 + 0x118))();
            }
            else {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
              (**(code **)(*plVar10 + 0x118))();
              LOCK();
              plVar10 = plVar4 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
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
            pwVar12 = pwVar12 + 8;
          } while (pwVar12 != pwVar11);
          iVar14 = (int)uStack_90;
        }
      }
    }
    FUN_141214b54(local_98,iVar14);
    if (local_98 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_88 = (wchar_t *)0x0;
    uStack_80 = 0;
    FUN_140ffc744(&local_78,&local_88,1,0);
    iVar7 = 1;
    if (1 < (int)uStack_80) {
      iVar7 = _wtoi(local_88);
    }
    local_98 = (wchar_t *)0x0;
    uStack_90 = 0;
    FUN_140ffc744(&local_78,&local_98,1,0);
    if ((int)uStack_90 < 2) {
      FUN_14020fad6(&local_98,L"http://www.google.com");
    }
    lVar15 = FUN_14001cc68(0x38,0x10);
    FUN_140056680(&local_70,&DAT_149dfb77a);
    FUN_140056680(&local_a8,&DAT_149e8e77a);
    local_c8 = iVar7;
    FUN_146b1d56a(lVar15,&local_a8,&local_70,&local_98);
    if (local_a8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (0 < *(int *)(lVar15 + 0x30)) {
      iVar7 = 0;
      do {
        plVar10 = (longlong *)FUN_141054386();
        (**(code **)(*plVar10 + 0x40))(plVar10,&local_70);
        pwVar12 = local_70;
        plVar10 = (longlong *)CONCAT44(uStack_64,local_68);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          plVar4 = (longlong *)CONCAT44(uStack_64,local_68);
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
        uVar9 = (**(code **)(*(longlong *)pwVar12 + 0xf0))(pwVar12);
        FUN_146b20022(uVar9,lVar15);
        (**(code **)(*(longlong *)pwVar12 + 0x68))(pwVar12,lVar15 + 0x20);
        if (*(int *)(lVar15 + 0x18) - 2U < 0x7fffffff) {
          (**(code **)(*(longlong *)pwVar12 + 0x90))(pwVar12,lVar15 + 0x10);
        }
        (**(code **)(*(longlong *)pwVar12 + 0x60))(pwVar12,lVar15);
        (**(code **)(*(longlong *)pwVar12 + 0xe8))(pwVar12);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar10 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar15 + 0x30));
    }
    local_70 = local_88;
    if (local_98 != (wchar_t *)0x0) {
      FUN_1400020a8();
      local_70 = local_88;
    }
  }
  if (local_70 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_14291b76d:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14291bcea FUN_14291bcea body=69 status=ok
// SIG undefined FUN_14291bcea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14291bcea(void)

{
  _DAT_14c990da0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014291bd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c990da8,1);
  return;
}



// FUNCTION 14291bd30 FUN_14291bd30 body=1539 status=ok
// SIG undefined FUN_14291bd30(void)

void FUN_14291bd30(longlong *param_1,longlong param_2,ulonglong *param_3,ulonglong param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar18;
  longlong lVar19;
  bool bVar20;
  undefined4 uVar21;
  undefined1 auStack_118 [39];
  undefined1 local_f1;
  ulonglong local_f0;
  undefined4 local_e4;
  LPCRITICAL_SECTION local_e0;
  longlong local_d8;
  longlong *local_d0;
  ulonglong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0;
  ulonglong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined1 local_78 [16];
  LARGE_INTEGER local_68;
  ulonglong local_60;
  
  lVar14 = DAT_14c990db0;
  param_4 = param_4 & 0xffffffff;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar7 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  lVar17 = param_2;
  if (iVar7 == 0x40000002) {
    uVar10 = 0;
  }
  else {
    bVar20 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar7 != 2)) {
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        bVar20 = DVar8 == DVar9;
      }
      else {
        bVar20 = false;
      }
    }
    uVar10 = (ulonglong)(bVar20 ^ 1);
  }
  if ((*(char *)(lVar14 + uVar10) != '\x01') ||
     (plVar3 = (longlong *)param_1[0x47], plVar3 == (longlong *)0x0)) goto LAB_14291be06;
  iVar7 = (int)plVar3[1];
  do {
    if (iVar7 == 0) goto LAB_14291be06;
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar20 = iVar7 == iVar5;
    if (bVar20) {
      *(int *)(plVar3 + 1) = iVar7 + 1;
      iVar5 = iVar7;
    }
    iVar7 = iVar5;
    UNLOCK();
  } while (!bVar20);
  lVar14 = param_1[0x46];
  if (lVar14 != 0) {
    plVar18 = (longlong *)param_1[2];
    local_e4 = (undefined4)CONCAT71((int7)((ulonglong)lVar17 >> 8),1);
    if (plVar18 == (longlong *)0x0) {
LAB_14291be93:
      local_d8 = 0;
      plVar18 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar18[1];
      do {
        if (iVar7 == 0) goto LAB_14291be93;
        LOCK();
        iVar5 = (int)plVar18[1];
        bVar20 = iVar7 == iVar5;
        if (bVar20) {
          *(int *)(plVar18 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar20);
      local_d8 = param_1[1];
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      LOCK();
      plVar16 = plVar18 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
      local_e4 = 0;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar14 + 0x50);
    EnterCriticalSection(lpCriticalSection);
    local_c0 = (longlong *)(lVar14 + 0x40);
    local_f0 = CONCAT44(local_f0._4_4_,0xffffffff);
    local_b0 = lVar14;
    if ((longlong)*(int *)(lVar14 + 0x48) != 0) {
      local_f1 = (undefined1)param_4;
      lVar17 = *(longlong *)(lVar14 + 0x40);
      lVar14 = (longlong)*(int *)(lVar14 + 0x48) * 0x30 + lVar17;
      local_e0 = lpCriticalSection;
      local_d0 = plVar18;
      local_c8 = param_3;
      local_b8 = lVar17;
      do {
        plVar18 = (longlong *)param_1[2];
        if (plVar18 == (longlong *)0x0) {
LAB_14291bf8e:
          lVar19 = *(longlong *)(lVar17 + 0x20);
          lVar15 = 0;
        }
        else {
          iVar7 = (int)plVar18[1];
          do {
            if (iVar7 == 0) goto LAB_14291bf8e;
            LOCK();
            iVar5 = (int)plVar18[1];
            bVar20 = iVar7 == iVar5;
            if (bVar20) {
              *(int *)(plVar18 + 1) = iVar7 + 1;
              iVar5 = iVar7;
            }
            iVar7 = iVar5;
            UNLOCK();
          } while (!bVar20);
          lVar15 = param_1[1];
          lVar19 = *(longlong *)(lVar17 + 0x20);
          LOCK();
          plVar16 = plVar18 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*plVar18)(plVar18);
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar18 + 0x10))(plVar18);
            }
          }
        }
        if (lVar19 == lVar15) {
          local_f0 = CONCAT44(local_f0._4_4_,
                              (int)((ulonglong)(lVar17 - local_b8) >> 4) * -0x55555555);
          break;
        }
        lVar17 = lVar17 + 0x30;
      } while (lVar17 != lVar14);
      param_4 = CONCAT71((int7)((ulonglong)lVar14 >> 8),local_f1);
      param_3 = local_c8;
      lpCriticalSection = local_e0;
      plVar18 = local_d0;
    }
    uVar21 = (undefined4)param_4;
    lVar14 = (longlong)(int)local_f0 * 0x30 + *local_c0;
    if ((int)param_1[0x28] == 3) {
LAB_14291c146:
      if (*(int *)(lVar14 + 4) != 0) {
        FUN_146b1f7a8();
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c990e18);
        DAT_14c990e10 = DAT_14c990e10 + -1;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c990e18);
      }
      plVar16 = local_c0;
      FUN_146b23da4(local_c0,local_f0 & 0xffffffff);
      FUN_146b23e38(plVar16);
      LeaveCriticalSection(lpCriticalSection);
      uVar10 = *param_3;
      plVar16 = (longlong *)param_3[1];
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
      }
      if (((int)param_1[0x28] == 5) && (local_f0 = param_1[0x48], local_f0 != 0)) {
        plVar4 = (longlong *)param_1[0x49];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar16 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
        param_1[0x48] = 0;
        plVar16 = (longlong *)param_1[0x49];
        if (plVar16 != (longlong *)0x0) {
          param_1[0x49] = 0;
          LOCK();
          plVar2 = plVar16 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
        uVar21 = (undefined4)CONCAT71((int7)(param_4 >> 8),(char)param_1[0x4a]);
        plVar16 = plVar4;
        uVar10 = local_f0;
      }
      uVar11 = (**(code **)(*param_1 + 0xf0))(param_1);
      cVar6 = (char)local_e4;
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
      }
      local_a8 = local_d8;
      if (cVar6 == '\0') {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
      }
      local_a0 = plVar18;
      local_98 = uVar10;
      local_90 = plVar16;
      FUN_146b1b560(uVar11,&local_a8,&local_98,uVar21);
      (**(code **)(*param_1 + 0xd0))(param_1);
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar16 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
    }
    else {
      iVar7 = (**(code **)(*param_1 + 0x10))(param_1);
      uVar12 = 6;
      if (iVar7 == 2) {
        cVar6 = (**(code **)(*param_1 + 0x18))(param_1);
        if ((cVar6 == '\x01') && (lVar17 = param_1[0x41], lVar17 != 0)) {
          iVar5 = (int)param_1[0x43];
          iVar13 = (iVar5 + 1) % *(int *)(lVar17 + 8);
          LOCK();
          iVar7 = *(int *)(lVar17 + 0x10);
          if (iVar5 == iVar7) {
            *(int *)(lVar17 + 0x10) = iVar13;
            iVar7 = iVar5;
          }
          UNLOCK();
          if (iVar7 == (int)param_1[0x43]) {
            iVar7 = iVar13;
          }
          *(int *)(param_1 + 0x43) = iVar7;
          FUN_146b1edea(param_1);
        }
        cVar6 = (**(code **)(*param_1 + 0x18))(param_1);
        uVar12 = 4;
        if (cVar6 == '\x03') {
          *(undefined4 *)(param_1 + 0x28) = 5;
          goto LAB_14291c146;
        }
      }
      *(undefined4 *)(param_1 + 0x28) = uVar12;
      cVar6 = FUN_146b1f02e(lVar14);
      if ((cVar6 == '\0') || (cVar6 = FUN_146b1f3d0(local_b0,lVar14), cVar6 == '\0'))
      goto LAB_14291c146;
      local_e0 = lpCriticalSection;
      QueryPerformanceCounter(&local_68);
      uVar21 = FUN_146b1f450(lVar14);
      *(undefined4 *)(param_1 + 0x28) = 2;
      uVar11 = (**(code **)(*param_1 + 0x100))(param_1);
      (**(code **)(*param_1 + 0x120))(param_1,local_78);
      local_88 = *(undefined8 *)(lVar14 + 0x20);
      local_80 = *(longlong *)(lVar14 + 0x28);
      if (local_80 != 0) {
        LOCK();
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        UNLOCK();
      }
      FUN_146b1f508(uVar11,&local_88,local_78,uVar21);
      FUN_146b1f5fa(lVar14,uVar21,param_4 & 0xffffffff);
      LeaveCriticalSection(local_e0);
      cVar6 = (char)local_e4;
    }
    if (cVar6 == '\0') {
      LOCK();
      plVar16 = plVar18 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
  }
  LOCK();
  plVar18 = plVar3 + 1;
  *(int *)plVar18 = (int)*plVar18 + -1;
  UNLOCK();
  if ((int)*plVar18 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_14291be06:
  plVar3 = *(longlong **)(param_2 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar3 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
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
    plVar18 = plVar3 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14291c334 FUN_14291c334 body=480 status=ok
// SIG undefined FUN_14291c334(void)

void FUN_14291c334(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  DWORD DVar8;
  DWORD DVar9;
  double *pdVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  lVar5 = DAT_14c990db0;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
    uVar12 = 0;
  }
  else if (iVar3 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar12 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar12 = 1;
  }
  if (*(char *)(lVar5 + uVar12) == '\x01') {
    plVar4 = (longlong *)*param_2;
    if ((char)plVar4[0x2c] == '\x01') {
      pdVar10 = (double *)(plVar4 + 0x2b);
    }
    else {
      if (*(char *)(param_1 + 0x38) != '\x01') goto LAB_14291c3d7;
      pdVar10 = (double *)(param_1 + 0x30);
    }
    (**(code **)(*plVar4 + 0xc0))(plVar4,(float)*pdVar10);
  }
LAB_14291c3d7:
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  QueryPerformanceCounter(&local_58);
  dVar7 = (double)CONCAT53(local_58.QuadPart._3_5_,
                           CONCAT12(local_58.s.LowPart._2_1_,local_58.s.LowPart._0_2_)) *
          DAT_14c83f420;
  lVar5 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar3 + 1U) {
    FUN_146b2404a((longlong *)(param_1 + 0x40),iVar3);
  }
  lVar11 = (longlong)iVar3 * 0x30;
  lVar6 = *(longlong *)(param_1 + 0x40);
  *(undefined1 *)(lVar6 + lVar11) = 0;
  *(undefined2 *)(lVar6 + 1 + lVar11) = local_58.s.LowPart._0_2_;
  *(undefined1 *)(lVar6 + 3 + lVar11) = local_58.s.LowPart._2_1_;
  *(undefined8 *)(lVar6 + 4 + lVar11) = 0;
  *(double *)(lVar6 + 0x10 + lVar11) = dVar7 + 16777216.0;
  *(longlong *)(lVar6 + 0x20 + lVar11) = lVar5;
  *(longlong **)(lVar6 + 0x28 + lVar11) = plVar4;
  if (plVar4 != (longlong *)0x0) {
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
  *(undefined4 *)(*param_2 + 0x140) = 1;
  (**(code **)(**(longlong **)(*param_2 + 0x130) + 0xe8))();
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14291c516 FUN_14291c516 body=423 status=ok
// SIG undefined FUN_14291c516(void)

void FUN_14291c516(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  plVar1 = (longlong *)(param_1 + 0x40);
  uVar9 = (ulonglong)*(uint *)(param_1 + 0x48);
  if ((int)*(uint *)(param_1 + 0x48) < 1) {
LAB_14291c5a8:
    QueryPerformanceCounter(&local_58);
    dVar5 = (double)CONCAT53(local_58.QuadPart._3_5_,
                             CONCAT12(local_58.s.LowPart._2_1_,local_58.s.LowPart._0_2_)) *
            DAT_14c83f420;
    lVar6 = *param_2;
    plVar10 = (longlong *)param_2[1];
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    iVar3 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x4c) < iVar3 + 1U) {
      FUN_146b2404a(plVar1,iVar3);
    }
    lVar7 = (longlong)iVar3 * 0x30;
    lVar4 = *plVar1;
    *(undefined1 *)(lVar4 + lVar7) = 1;
    *(undefined2 *)(lVar4 + 1 + lVar7) = local_58.s.LowPart._0_2_;
    *(undefined1 *)(lVar4 + 3 + lVar7) = local_58.s.LowPart._2_1_;
    *(undefined8 *)(lVar4 + 4 + lVar7) = 0;
    *(double *)(lVar4 + 0x10 + lVar7) = dVar5 + 16777216.0;
    *(longlong *)(lVar4 + 0x20 + lVar7) = lVar6;
    *(longlong **)(lVar4 + 0x28 + lVar7) = plVar10;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  else {
    lVar6 = 0;
    bVar8 = false;
    do {
      plVar10 = (longlong *)(*plVar1 + lVar6 * 0x30 + 0x20);
      while (*plVar10 != *param_2) {
        lVar6 = lVar6 + 1;
        plVar10 = plVar10 + 6;
        if ((int)uVar9 <= lVar6) {
          if (bVar8) goto LAB_14291c659;
          goto LAB_14291c5a8;
        }
      }
      *(undefined1 *)(plVar10 + -4) = 1;
      uVar9 = (ulonglong)*(int *)(param_1 + 0x48);
      lVar6 = lVar6 + 1;
      bVar8 = true;
    } while (lVar6 < (longlong)uVar9);
  }
LAB_14291c659:
  (**(code **)(**(longlong **)(*param_2 + 0x130) + 0x118))();
  *(undefined4 *)(*param_2 + 0x140) = 3;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14291c6be FUN_14291c6be body=169 status=ok
// SIG undefined FUN_14291c6be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14291c6be(void)

{
  DAT_14c990e00 = 0;
  if (DAT_14c990df8 != 0) {
    FUN_1400020a8();
  }
  DAT_14c990dc0 = 0;
  if (DAT_14c990dc4 != 0) {
    FUN_14472eb64(&DAT_14c990db8,0);
  }
  _DAT_14c990de8 = 0xffffffff;
  _DAT_14c990de0 = 0;
  if (0x80 < DAT_14c990de4) {
    DAT_14c990de4 = 0x80;
    FUN_1446efbd8(&DAT_14c990dc8,0);
  }
  if (DAT_14c990dd8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c990db8 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14291c768 FUN_14291c768 body=259 status=ok
// SIG undefined FUN_14291c768(void)

void FUN_14291c768(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0) {
    FUN_146b1f7a8();
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c990e18);
    if (DAT_14c990e10 == 0) {
      DAT_14c990e40 = 0;
    }
    DAT_14c990e10 = DAT_14c990e10 + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c990e18);
    iVar4 = *(int *)(param_1 + 4);
  }
  *(int *)(param_1 + 4) = iVar4 + 1;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
  if (cVar3 == '\x01') {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x140) = 1;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x120))(*(longlong **)(param_1 + 0x20),&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x58))();
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
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x20) + 0x130) + 0xe8))();
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14291c86c FUN_14291c86c body=2095 status=ok
// SIG undefined FUN_14291c86c(void)

ulonglong FUN_14291c86c(longlong param_1,undefined4 *param_2,int *param_3,int *param_4,int *param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  byte bVar6;
  double dVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  BOOL BVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  DWORD DVar15;
  DWORD DVar16;
  ulonglong uVar17;
  double *pdVar18;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar19;
  undefined4 extraout_var;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  char *pcVar25;
  longlong lVar26;
  bool bVar27;
  float fVar28;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  uint local_180;
  undefined4 local_17c;
  longlong *local_178;
  longlong *local_170;
  longlong local_168;
  longlong local_160;
  int *local_158;
  LPCRITICAL_SECTION local_150;
  int *local_148;
  double *local_140;
  longlong *local_138;
  longlong *local_130;
  undefined1 local_128 [16];
  longlong *local_118;
  longlong *local_110;
  undefined1 local_108 [16];
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8 [2];
  longlong local_d8 [5];
  longlong local_b0;
  int local_a8;
  LARGE_INTEGER local_a0;
  longlong *local_98;
  ulonglong local_90;
  
  lVar23 = DAT_14c990db0;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar12 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
  uVar17 = (ulonglong)uVar12;
  local_158 = param_4;
  local_148 = param_3;
  if (((uVar12 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar12 == 2)) {
    uVar20 = 0;
  }
  else if (uVar12 == 1) {
    DVar15 = FUN_140ad26c0();
    DVar16 = GetCurrentThreadId();
    uVar17 = CONCAT44(extraout_var,DVar16);
    uVar20 = (ulonglong)(DVar15 != DVar16);
  }
  else {
    uVar20 = 1;
  }
  uVar17 = CONCAT71((int7)(uVar17 >> 8),1);
  if (*(char *)(lVar23 + uVar20) == '\0') {
    local_150 = (LPCRITICAL_SECTION)(param_1 + 0x50);
    EnterCriticalSection(local_150);
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x48);
    }
    BVar11 = QueryPerformanceCounter(&local_a0);
    if (*(int *)(param_1 + 0x48) < 1) {
      local_180 = (uint)CONCAT71((uint7)(uint3)((uint)BVar11 >> 8),1);
    }
    else {
      dVar7 = (double)local_a0.QuadPart * DAT_14c83f420 + 16777216.0;
      local_170 = (longlong *)(param_1 + 0x40);
      local_140 = (double *)(param_1 + 0x30);
      iVar24 = 0;
      local_180 = (uint)CONCAT71((int7)((ulonglong)local_140 >> 8),1);
      local_160 = param_1;
      do {
        lVar23 = *local_170;
        lVar22 = (longlong)iVar24 * 0x30;
        plVar4 = *(longlong **)(lVar23 + 0x20 + lVar22);
        plVar5 = *(longlong **)(lVar23 + 0x28 + lVar22);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        pcVar25 = (char *)(lVar23 + lVar22);
        uVar12 = (**(code **)(*plVar4 + 0x10))(plVar4);
        if (*pcVar25 == '\x01') {
          *(undefined4 *)(plVar4 + 0x28) = 3;
        }
        else if (*(char *)(*(longlong *)(pcVar25 + 0x20) + 0x160) == '\x01') {
          pdVar18 = (double *)(*(longlong *)(pcVar25 + 0x20) + 0x158);
LAB_14291ca08:
          if (dVar7 < *(double *)(pcVar25 + 0x10) + *pdVar18) goto LAB_14291ca12;
          *(undefined4 *)(plVar4 + 0x28) = 5;
          if (local_158 != (int *)0x0) {
            *local_158 = *local_158 + 1;
          }
LAB_14291cb03:
          local_180 = 0;
        }
        else {
          pdVar18 = local_140;
          if (*(char *)(param_1 + 0x38) == '\x01') goto LAB_14291ca08;
LAB_14291ca12:
          if (uVar12 == 0 || (int)plVar4[0x28] != 0) {
            if ((int)plVar4[0x28] == 1) goto LAB_14291ca5a;
          }
          else {
            *(undefined4 *)(plVar4 + 0x28) = 1;
LAB_14291ca5a:
            if ((uVar12 == 4) && (*(char *)(param_1 + 0x1c) == '\x01')) {
              DAT_14c990e0c = DAT_14c990e0c * 0xbb38435 + 0x3619636b;
              bVar27 = (float)(DAT_14c990e0c >> 9 | 0x3f800000) + -1.0 < *(float *)(param_1 + 0x18);
            }
            else {
              bVar27 = false;
            }
            iVar13 = (**(code **)(*plVar4 + 0x10))(plVar4);
            if (((iVar13 == 2) && (cVar10 = (**(code **)(*plVar4 + 0x18))(plVar4), cVar10 == '\x01')
                ) && (lVar23 = plVar4[0x41], lVar23 != 0)) {
              iVar14 = (int)plVar4[0x43];
              iVar21 = (iVar14 + 1) % *(int *)(lVar23 + 8);
              LOCK();
              iVar13 = *(int *)(lVar23 + 0x10);
              if (iVar14 == iVar13) {
                *(int *)(lVar23 + 0x10) = iVar21;
                iVar13 = iVar14;
              }
              UNLOCK();
              lVar23 = plVar4[0x43];
              *(int *)(plVar4 + 0x43) = iVar13;
              if (iVar13 == (int)lVar23) {
                *(int *)(plVar4 + 0x43) = iVar21;
              }
              FUN_146b1edea(plVar4);
            }
            if (uVar12 < 2) {
              bVar9 = 0;
              bVar8 = 0;
LAB_14291cad5:
              if (!bVar27) {
                bVar6 = bVar9 & bVar8;
                bVar8 = 1;
                bVar9 = 1;
                if (bVar6 == 0) {
                  if (uVar12 == 4) {
                    if (param_5 != (int *)0x0) {
                      *param_5 = *param_5 + 1;
                    }
                    *(undefined4 *)(plVar4 + 0x28) = 6;
                    goto LAB_14291cc0d;
                  }
                  goto LAB_14291cbe8;
                }
LAB_14291cae4:
                if ((bVar8 & bVar9) != 1) {
                  if (local_158 != (int *)0x0) {
                    *local_158 = *local_158 + 1;
                  }
                  *(undefined4 *)(plVar4 + 0x28) = 4;
                  goto LAB_14291cb03;
                }
              }
            }
            else {
              bVar8 = FUN_146b1f02e(pcVar25);
              bVar9 = FUN_146b1f3d0(local_160,pcVar25);
              if (uVar12 != 2) goto LAB_14291cad5;
              if (!bVar27) goto LAB_14291cae4;
            }
            fVar28 = (float)FUN_146b1f450(pcVar25);
            *(double *)(pcVar25 + 0x18) = (double)fVar28 + dVar7;
            *(undefined4 *)(plVar4 + 0x28) = 2;
            uVar19 = (**(code **)(*plVar4 + 0x100))(plVar4);
            (**(code **)(*plVar4 + 0x120))(plVar4,local_108);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
            }
            local_118 = plVar4;
            local_110 = plVar5;
            FUN_146b1f508(uVar19,&local_118,local_108,fVar28);
            pcVar25 = (char *)(*local_170 + lVar22);
            local_180 = 0;
          }
LAB_14291cbe8:
          if ((int)plVar4[0x28] == 2) {
            if (*(double *)(pcVar25 + 0x18) <= dVar7) {
              FUN_14291c768(pcVar25);
            }
            if (local_148 != (int *)0x0) {
              *local_148 = *local_148 + 1;
            }
          }
        }
LAB_14291cc0d:
        iVar13 = (int)plVar4[0x28];
        if (iVar13 - 3U < 4) {
          if (iVar13 == 6) {
            lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*plVar4 + 0x108))(plVar4);
            EnterCriticalSection(lpCriticalSection);
            if (lpCriticalSection[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0 ||
                lpCriticalSection[1].LockCount == 0) {
              cVar10 = '\0';
            }
            else {
              cVar10 = (**(code **)(*(longlong *)lpCriticalSection[1].DebugInfo + 0x30))();
            }
            if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
              LeaveCriticalSection(lpCriticalSection);
            }
            if (cVar10 != '\0') {
              uVar19 = (**(code **)(*plVar4 + 0x120))(plVar4,&local_a0);
              if ((longlong *)local_a0.QuadPart != (longlong *)0x0) {
                local_178 = (longlong *)plVar4[2];
                local_17c = (undefined4)CONCAT71((int7)((ulonglong)uVar19 >> 8),1);
                if (local_178 == (longlong *)0x0) {
LAB_14291cce6:
                  local_168 = 0;
                  local_178 = (longlong *)0x0;
                }
                else {
                  iVar14 = (int)local_178[1];
                  do {
                    if (iVar14 == 0) goto LAB_14291cce6;
                    LOCK();
                    iVar21 = (int)local_178[1];
                    bVar27 = iVar14 == iVar21;
                    if (bVar27) {
                      *(int *)(local_178 + 1) = iVar14 + 1;
                      iVar21 = iVar14;
                    }
                    iVar14 = iVar21;
                    UNLOCK();
                  } while (!bVar27);
                  local_168 = plVar4[1];
                  LOCK();
                  *(int *)(local_178 + 1) = (int)local_178[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar2 = local_178 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*local_178)();
                    LOCK();
                    piVar1 = (int *)((longlong)local_178 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*local_178 + 0x10))();
                    }
                  }
                  LOCK();
                  *(int *)(local_178 + 1) = (int)local_178[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar2 = local_178 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*local_178)();
                    LOCK();
                    piVar1 = (int *)((longlong)local_178 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*local_178 + 0x10))();
                    }
                  }
                  local_17c = 0;
                }
                (**(code **)(*(longlong *)local_a0 + 0x30))(local_a0.QuadPart,&local_b0);
                iVar14 = 0;
                if ((longlong)local_a8 != 0) {
                  lVar26 = (longlong)local_a8 << 4;
                  lVar23 = local_b0;
                  do {
                    local_d8[2] = 0;
                    local_d8[3] = 0;
                    local_d8[0] = 0;
                    local_d8[1] = 0;
                    FUN_140056680(local_e8,&DAT_149e31048);
                    local_190 = 0;
                    local_198 = 1;
                    cVar10 = FUN_1407cdbc6(lVar23,local_e8,local_d8 + 2,local_d8);
                    if (local_e8[0] != 0) {
                      FUN_1400020a8();
                    }
                    if (cVar10 != '\0') {
                      FUN_140ded312(local_d8);
                      uVar19 = (**(code **)(*plVar4 + 0x108))(plVar4);
                      local_f8 = local_168;
                      local_f0 = local_178;
                      if ((char)local_17c == '\0') {
                        LOCK();
                        *(int *)(local_178 + 1) = (int)local_178[1] + 1;
                        UNLOCK();
                      }
                      FUN_146b1b0aa(uVar19,&local_f8,local_d8 + 2,local_d8);
                    }
                    if (local_d8[0] != 0) {
                      FUN_1400020a8();
                    }
                    if (local_d8[2] != 0) {
                      FUN_1400020a8();
                    }
                    lVar23 = lVar23 + 0x10;
                    lVar26 = lVar26 + -0x10;
                    iVar14 = local_a8;
                  } while (lVar26 != 0);
                }
                FUN_1447a1747(local_b0,iVar14);
                if (local_b0 != 0) {
                  FUN_1400020a8();
                }
                if ((char)local_17c == '\0') {
                  LOCK();
                  plVar2 = local_178 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*local_178)();
                    LOCK();
                    piVar1 = (int *)((longlong)local_178 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*local_178 + 0x10))();
                    }
                  }
                }
              }
              plVar2 = local_98;
              if (local_98 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_98 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*local_98)(local_98);
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
          uVar19 = (**(code **)(*plVar4 + 0xf0))(plVar4);
          (**(code **)(*plVar4 + 0x120))(plVar4,local_128);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          local_138 = plVar4;
          local_130 = plVar5;
          FUN_146b1b560(uVar19,&local_138,local_128,iVar13 == 6);
          if ((param_5 != (int *)0x0) && (iVar13 == 6)) {
            *param_5 = *param_5 + 1;
          }
          if (*(int *)(*local_170 + 4 + lVar22) != 0) {
            FUN_146b1f7a8();
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c990e18);
            DAT_14c990e10 = DAT_14c990e10 + -1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c990e18);
          }
          plVar4 = local_170;
          FUN_146b23da4(local_170,iVar24);
          FUN_146b23e38(plVar4);
        }
        else {
          iVar24 = iVar24 + 1;
        }
        param_1 = local_160;
        if (plVar5 != (longlong *)0x0) {
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
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      } while (iVar24 < *(int *)(param_1 + 0x48));
    }
    LeaveCriticalSection(local_150);
    uVar17 = (ulonglong)local_180;
  }
  if ((local_90 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffffffffffff01;
}



// FUNCTION 14291d09c FUN_14291d09c body=42 status=ok
// SIG undefined FUN_14291d09c(void)

void FUN_14291d09c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145857cde();
  FUN_14126849c(uVar1,&DAT_14c990e10);
                    /* WARNING: Could not recover jumptable at 0x00014291d0bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14c990e18);
  return;
}



// FUNCTION 14291d0c6 FUN_14291d0c6 body=256 status=ok
// SIG undefined FUN_14291d0c6(void)

void FUN_14291d0c6(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  longlong *plVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  
  iVar3 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar3 + -1;
  if (iVar3 < 2) {
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*(longlong *)*param_2 + 0xf0))();
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
    if (param_1 != 0) {
      FUN_146b200ce(param_1);
      FUN_1400020a8(param_1);
    }
  }
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
  plVar5 = *(longlong **)(param_3 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x00014291d1a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14291d1c6 FUN_14291d1c6 body=69 status=ok
// SIG undefined FUN_14291d1c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14291d1c6(void)

{
  _DAT_14c990e50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014291d208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c990e58,1);
  return;
}



// FUNCTION 14291d20b FUN_14291d20b body=69 status=ok
// SIG undefined FUN_14291d20b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14291d20b(void)

{
  _DAT_14c990e68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014291d24d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c990e70,1);
  return;
}



// FUNCTION 14291d250 FUN_14291d250 body=645 status=ok
// SIG undefined FUN_14291d250(void)

undefined8 FUN_14291d250(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auStack_b8 [39];
  byte local_91;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  LARGE_INTEGER local_28;
  LARGE_INTEGER local_20;
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  local_50 = param_1;
  while ((iVar1 = FUN_146b20572(param_1 + 0x90), iVar1 == 0 &&
         (uVar2 = FUN_146b1b9cc(param_1), (uVar2 & 1) == 0))) {
    QueryPerformanceCounter(&local_28);
    local_58 = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
    local_80 = 0.0;
    local_91 = 1;
    dVar3 = local_80;
    while (local_80 = dVar3, (local_91 & 1) != 0) {
      QueryPerformanceCounter(&local_20);
      local_60 = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
      FUN_14291a130(param_1,&local_38,&local_48);
      if (*(int *)(param_1 + 0x68) == 0) {
        local_91 = 0;
      }
      QueryPerformanceCounter(&local_18);
      local_88 = (double)local_18.QuadPart * DAT_14c83f420 + 16777216.0;
      dVar3 = local_88;
      if ((local_91 & 1) != 0) {
        local_90 = local_88 - local_60;
        if (local_90 < 0.0) {
          local_90 = 0.0;
        }
        dVar3 = *(double *)(param_1 + 0x98) - local_90;
        uVar2 = -(ulonglong)(*(double *)(param_1 + 0xa0) < dVar3);
        local_68 = (double)(~uVar2 & (ulonglong)*(double *)(param_1 + 0xa0) |
                           uVar2 & (ulonglong)dVar3);
        FUN_14279b9b6(CONCAT44((int)((ulonglong)local_68 >> 0x20),(float)local_68));
        dVar3 = local_80;
      }
    }
    local_70 = local_80 - local_58;
    dVar3 = *(double *)(param_1 + 0xa8) - local_70;
    uVar2 = -(ulonglong)(*(double *)(param_1 + 0xb0) < dVar3);
    local_78 = (double)(~uVar2 & (ulonglong)*(double *)(param_1 + 0xb0) | uVar2 & (ulonglong)dVar3);
    FUN_14279b9b6(CONCAT44((int)((ulonglong)local_78 >> 0x20),(float)local_78));
  }
  FUN_146b1b8c8(&local_48);
  FUN_146b1b8c8(&local_38);
  if ((local_10 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 14291d4da FUN_14291d4da body=51 status=ok
// SIG undefined FUN_14291d4da(void)

undefined8 FUN_14291d4da(undefined8 param_1,longlong param_2)

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
  return 0;
}



// FUNCTION 14291d50e FUN_14291d50e body=51 status=ok
// SIG undefined FUN_14291d50e(void)

undefined8 FUN_14291d50e(undefined8 param_1,longlong param_2)

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
  return 0;
}



// FUNCTION 14291d55a FUN_14291d55a body=255 status=ok
// SIG undefined FUN_14291d55a(void)

void FUN_14291d55a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 0x2e) = 2;
  *(undefined1 *)((longlong)param_1 + 0x174) = 4;
  uVar7 = (**(code **)(*param_1 + 0xf0))();
  local_38 = 0;
  uStack_30 = 0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 == (longlong *)0x0) {
LAB_14291d634:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    FUN_146b1b560(uVar7,&local_48,&local_38,0);
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14291d634;
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
    lVar4 = param_1[1];
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_48 = lVar4;
    plStack_40 = plVar3;
    FUN_146b1b560(uVar7,&local_48,&local_38,0);
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14291d66c FUN_14291d66c body=145 status=ok
// SIG undefined FUN_14291d66c(void)

void FUN_14291d66c(longlong *param_1,float param_2)

{
  longlong lVar1;
  float *pfVar2;
  undefined1 auStack_48 [40];
  float local_20;
  char local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[0x2e] == 1) {
    *(float *)(param_1 + 0x43) = param_2 + *(float *)(param_1 + 0x43);
    (**(code **)(*param_1 + 0xe0))(param_1,&local_20);
    lVar1 = FUN_141054386();
    pfVar2 = (float *)(lVar1 + 0x14);
    if (local_1c != '\0') {
      pfVar2 = &local_20;
    }
    if ((0.0 < *pfVar2) && (*pfVar2 <= *(float *)(param_1 + 0x43))) {
      FUN_14291d55a(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14291d6fe FUN_14291d6fe body=1083 status=ok
// SIG undefined FUN_14291d6fe(void)

ulonglong FUN_14291d6fe(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  longlong local_a8 [2];
  wchar_t *local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  undefined8 uStack_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_48[0] = 0;
  local_48[1] = 0;
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  local_68 = (wchar_t *)0x0;
  uStack_60 = 0;
  local_78 = (wchar_t *)0x0;
  uStack_70 = 0;
  local_88 = (wchar_t *)0x0;
  uStack_80 = 0;
  local_98 = (wchar_t *)0x0;
  uStack_90 = 0;
  FUN_140056680(local_a8,&DAT_149e0635c);
  local_b0 = 0;
  local_b8 = 1;
  cVar1 = FUN_1407cdbc6(param_1,local_a8,&local_58,local_48);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    FUN_140056680(local_a8,&DAT_149e0635c);
    local_b0 = 0;
    local_b8 = 1;
    cVar1 = FUN_1407cdbc6(local_48,local_a8,&local_68,local_48);
    if (local_a8[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar1 != '\0') {
      FUN_140056680(local_a8,&DAT_149e0635c);
      local_b0 = 0;
      local_b8 = 1;
      cVar1 = FUN_1407cdbc6(local_48,local_a8,&local_78,local_48);
      if (local_a8[0] != 0) {
        FUN_1400020a8();
      }
      if (cVar1 != '\0') {
        FUN_140056680(local_a8,&DAT_149e31048);
        local_b0 = 0;
        local_b8 = 1;
        cVar1 = FUN_1407cdbc6(local_48,local_a8,&local_88,&local_98);
        if (local_a8[0] != 0) {
          FUN_1400020a8();
        }
        pwVar7 = local_58;
        if (cVar1 != '\0') {
          lVar3 = (longlong)(int)uStack_50;
          if (local_58 + lVar3 + -1 != local_58 && (int)uStack_50 != 0) {
            lVar8 = 0;
            do {
              iVar2 = iswdigit(*(wint_t *)((longlong)pwVar7 + lVar8));
              if (iVar2 == 0) goto LAB_14291daab;
              lVar8 = lVar8 + 2;
            } while (lVar3 * 2 + -2 != lVar8);
          }
          pwVar7 = local_68;
          lVar3 = (longlong)(int)uStack_60;
          if (local_68 + lVar3 + -1 != local_68 && (int)uStack_60 != 0) {
            lVar8 = 0;
            do {
              iVar2 = iswdigit(*(wint_t *)((longlong)pwVar7 + lVar8));
              if (iVar2 == 0) goto LAB_14291daab;
              lVar8 = lVar8 + 2;
            } while (lVar3 * 2 + -2 != lVar8);
          }
          pwVar7 = local_78;
          lVar3 = (longlong)(int)uStack_70;
          if (local_78 + lVar3 + -1 != local_78 && (int)uStack_70 != 0) {
            lVar8 = 0;
            do {
              iVar2 = iswdigit(*(wint_t *)((longlong)pwVar7 + lVar8));
              if (iVar2 == 0) goto LAB_14291daab;
              lVar8 = lVar8 + 2;
            } while (lVar3 * 2 + -2 != lVar8);
          }
          pwVar7 = local_88;
          lVar3 = (longlong)(int)uStack_80;
          if (local_88 + lVar3 + -1 != local_88 && (int)uStack_80 != 0) {
            lVar8 = 0;
            do {
              iVar2 = iswdigit(*(wint_t *)((longlong)pwVar7 + lVar8));
              if (iVar2 == 0) goto LAB_14291daab;
              lVar8 = lVar8 + 2;
            } while (lVar3 * 2 + -2 != lVar8);
          }
          pwVar7 = local_98;
          lVar3 = (longlong)(int)uStack_90;
          if (local_98 + lVar3 + -1 != local_98 && (int)uStack_90 != 0) {
            lVar8 = 0;
            do {
              iVar2 = iswdigit(*(wint_t *)((longlong)pwVar7 + lVar8));
              if (iVar2 == 0) goto LAB_14291daab;
              lVar8 = lVar8 + 2;
            } while (lVar3 * 2 + -2 != lVar8);
          }
          pwVar7 = L"";
          if ((int)uStack_50 != 0) {
            pwVar7 = local_58;
          }
          lVar3 = _wtoi64(pwVar7);
          pwVar7 = L"";
          if ((int)uStack_60 != 0) {
            pwVar7 = local_68;
          }
          lVar8 = _wtoi64(pwVar7);
          pwVar7 = L"";
          if ((int)uStack_70 != 0) {
            pwVar7 = local_78;
          }
          lVar4 = _wtoi64(pwVar7);
          pwVar7 = L"";
          if ((int)uStack_80 != 0) {
            pwVar7 = local_88;
          }
          lVar5 = _wtoi64(pwVar7);
          pwVar7 = L"";
          if ((int)uStack_90 != 0) {
            pwVar7 = local_98;
          }
          uVar6 = _wtoi64(pwVar7);
          uVar6 = CONCAT71((int7)((ulonglong)pwVar7 >> 8),
                           (uVar6 & 0xffff0000) == 0 &&
                           (((uint)lVar5 | (uint)lVar4 | (uint)lVar8 | (uint)lVar3) & 0xffffff00) ==
                           0);
          goto LAB_14291daad;
        }
      }
    }
  }
LAB_14291daab:
  uVar6 = 0;
LAB_14291daad:
  if (local_98 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[2] ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14291db3a FUN_14291db3a body=211 status=ok
// SIG undefined FUN_14291db3a(void)

uint FUN_14291db3a(uint param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  longlong local_40;
  int local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 == 1) {
    uVar1 = FUN_144b9cf00();
    uVar2 = FUN_144bafb30(param_2,uVar1);
    uVar2 = FUN_144b9a8f0(uVar2);
    puVar3 = (undefined8 *)FUN_144b9ab00(uVar2,0);
    (**(code **)*puVar3)(puVar3,&local_50);
    local_40 = local_50;
    local_38 = local_48 + -1;
    if (local_48 == 0) {
      local_38 = 0;
    }
    FUN_141306ffc(local_30);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    lVar4 = FUN_14158df5e();
    param_1 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x40))
                        (*(longlong **)(lVar4 + 8),param_2,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 & 0xff;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
}



// FUNCTION 14291dc0e FUN_14291dc0e body=37 status=ok
// SIG undefined FUN_14291dc0e(void)

void FUN_14291dc0e(void)

{
  if (DAT_14c990ee8 != 0) {
    FUN_1400020a8();
  }
  FUN_146283b14(&DAT_14c990e80);
  return;
}



// FUNCTION 14291dc34 FUN_14291dc34 body=414 status=ok
// SIG undefined FUN_14291dc34(void)

void FUN_14291dc34(longlong *param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  local_68[2] = local_68[2] & 0xffffffff00000000;
  piVar6 = (int *)FUN_144bba5d0(DAT_14c990be8);
  if (piVar6 != (int *)0x0) {
    bVar8 = false;
    do {
      if (*piVar6 == 1) {
        uVar3 = *(ulonglong *)(piVar6 + 2);
        FUN_144bba090(DAT_14c990be8,uVar3);
        if (*(int *)(lVar2 + 0x678) != *(int *)(lVar2 + 0x6a4)) {
          uVar4 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
          uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
          lVar7 = *(longlong *)(lVar2 + 0x6b0);
          if (*(longlong *)(lVar2 + 0x6b0) == 0) {
            lVar7 = lVar2 + 0x6a8;
          }
          iVar5 = *(int *)(lVar7 + (ulonglong)
                                   (*(int *)(lVar2 + 0x6b8) - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
          if (iVar5 != -1) {
            do {
              puVar1 = (ulonglong *)(*(longlong *)(lVar2 + 0x670) + (longlong)iVar5 * 0x18);
              if (*puVar1 == uVar3) {
                if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
                  FUN_14113cca2(puVar1[1],piVar6[4]);
                  FUN_1411e09ac((longlong *)(lVar2 + 0x670),uVar3);
                  bVar8 = true;
                }
                break;
              }
              iVar5 = (int)puVar1[2];
            } while (iVar5 != -1);
          }
        }
      }
      local_68[2] = local_68[2] & 0xffffffff00000000;
      piVar6 = (int *)FUN_144bba5d0(DAT_14c990be8,local_68 + 2);
    } while (piVar6 != (int *)0x0);
    if (bVar8) {
      local_68[2] = 0;
      local_68[3] = 0;
      local_68[0] = 0;
      local_68[1] = 0;
      FUN_14291a130(lVar2,local_68 + 2,local_68);
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      if (local_68[2] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14291ddea FUN_14291ddea body=29 status=ok
// SIG undefined FUN_14291ddea(void)

undefined8 FUN_14291ddea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14291de08 FUN_14291de08 body=865 status=ok
// SIG undefined FUN_14291de08(void)

ulonglong FUN_14291de08(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  LARGE_INTEGER LVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  code *pcVar12;
  longlong *plVar13;
  undefined4 uVar14;
  code *pcVar15;
  ulonglong uVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  LARGE_INTEGER local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1 + 0x5ad) & 1) != 0) {
    uVar16 = 0;
    goto LAB_14291e02b;
  }
  plVar17 = (longlong *)(param_1 + 0x90);
  if (*(int *)(param_1 + 0x358) != 0) {
    plVar13 = (longlong *)(param_1 + 0x150);
    if (*(longlong **)(param_1 + 0x350) != (longlong *)0x0) {
      plVar13 = *(longlong **)(param_1 + 0x350);
    }
    uVar2 = *(uint *)(plVar13 + 1);
    if (((int)uVar2 < 0) || (*(int *)(param_1 + 0xb8) <= (int)uVar2)) {
LAB_14291deb6:
      plVar10 = (longlong *)0x0;
    }
    else {
      lVar7 = param_1 + 0xa0;
      if (*(longlong *)(param_1 + 0xb0) != 0) {
        lVar7 = *(longlong *)(param_1 + 0xb0);
      }
      if ((*(uint *)(lVar7 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
      goto LAB_14291deb6;
      plVar6 = (longlong *)((ulonglong)uVar2 * 0x80 + *plVar17);
      plVar10 = (longlong *)0x0;
      if (*plVar6 == *plVar13) {
        plVar10 = plVar6 + 2;
      }
    }
    lVar7 = plVar10[0xb] - *(longlong *)(param_1 + 0x570);
    if (lVar7 <= param_2) {
      param_2 = lVar7;
    }
  }
  local_78.s.LowPart = 0xffffffff;
  FUN_144bba370(*(undefined8 *)(param_1 + 0x40));
  pcVar15 = *(code **)(param_1 + 0x50);
  plVar13 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar13 = *(longlong **)(param_1 + 0x60);
  }
  uVar8 = (**(code **)(*plVar13 + 8))();
  (*pcVar15)(uVar8);
  auVar19._0_8_ = (double)param_2 / 10000.0;
  auVar19._8_8_ = 0;
  auVar19 = roundpd(auVar19,auVar19,2);
  local_88 = 0;
  FUN_144bba340(*(undefined8 *)(param_1 + 0x40),0,0,(longlong)auVar19._0_8_);
  QueryPerformanceCounter(&local_78);
  lVar9 = (longlong)(((double)local_78.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0);
  lVar7 = lVar9 - *(longlong *)(param_1 + 0x5a0);
  if (lVar7 < 1) {
    lVar7 = 0;
  }
  *(longlong *)(param_1 + 0x5a0) = lVar9;
  FUN_14291e16a(plVar17,lVar7);
  if (*(int *)(param_1 + 0x568) != 0) {
    QueryPerformanceCounter(&local_78);
    lVar9 = (longlong)(((double)local_78.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0);
    lVar11 = lVar9 - *(longlong *)(param_1 + 0x5a0);
    lVar7 = 0;
    if (0 < lVar11) {
      lVar7 = lVar11;
    }
    *(longlong *)(param_1 + 0x5a0) = lVar9;
    FUN_14291e16a(plVar17,lVar7);
  }
  plVar17 = local_58;
  local_78.QuadPart = 0;
  local_68 = (longlong *)0x0;
  cVar5 = FUN_141612a1a(param_1 + 0x580,&local_78);
  if (cVar5 != '\0') {
    do {
      LVar4 = local_78;
      plVar13 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar13 = plVar17;
      }
      uVar8 = (**(code **)(*plVar13 + 8))();
      (*(code *)LVar4)(uVar8);
      cVar5 = FUN_141612a1a(param_1 + 0x580,&local_78);
    } while (cVar5 != '\0');
  }
  if ((code *)local_78.QuadPart != (code *)0x0) {
    if (local_68 != (longlong *)0x0) {
      plVar17 = local_68;
    }
    (**(code **)(*plVar17 + 0x10))(plVar17);
  }
  bVar1 = *(byte *)(param_1 + 0x5ac);
  if ((bVar1 & 1) != 0) {
    local_78.QuadPart = 0;
    uStack_70 = 0;
    LOCK();
    bVar18 = *(char *)(param_1 + 0x5b0) == '\0';
    if (bVar18) {
      *(char *)(param_1 + 0x5b0) = '\x01';
    }
    UNLOCK();
    if (!bVar18) {
      FUN_1447d2058(param_1 + 0x5b0);
    }
    LOCK();
    *(undefined1 *)(param_1 + 0x5ad) = 1;
    UNLOCK();
    FUN_1459049b0(&local_78,param_1 + 0x590);
    LOCK();
    bVar18 = *(char *)(param_1 + 0x5b0) == '\x01';
    if (bVar18) {
      *(char *)(param_1 + 0x5b0) = '\0';
    }
    UNLOCK();
    if (!bVar18) {
      FUN_14008cdb0(param_1 + 0x5b0);
    }
    uVar14 = 0;
    if ((longlong)(int)uStack_70 != 0) {
      lVar7 = (longlong)(int)uStack_70 << 6;
      pcVar15 = (code *)(local_78.QuadPart + 0x20);
      do {
        pcVar3 = *(code **)(pcVar15 + -0x20);
        if (pcVar3 != (code *)0x0) {
          pcVar12 = *(code **)(pcVar15 + -0x10);
          if (*(code **)(pcVar15 + -0x10) == (code *)0x0) {
            pcVar12 = pcVar15;
          }
          uVar8 = (**(code **)(*(longlong *)pcVar12 + 8))();
          (*pcVar3)(uVar8);
        }
        pcVar15 = pcVar15 + 0x40;
        lVar7 = lVar7 + -0x40;
      } while (lVar7 != 0);
      uVar14 = (int)uStack_70;
    }
    FUN_144a80dc3(local_78.QuadPart,uVar14);
    if ((code *)local_78.QuadPart != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar16 = CONCAT71((int7)((ulonglong)plVar17 >> 8),bVar1) ^ 1;
LAB_14291e02b:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffff01;
}



// FUNCTION 14291e16a FUN_14291e16a body=4123 status=ok
// SIG undefined FUN_14291e16a(void)

void FUN_14291e16a(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 uVar18;
  byte bVar19;
  int iVar20;
  longlong lVar21;
  longlong *plVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined8 *puVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  ulonglong uVar32;
  longlong *plVar33;
  undefined1 auStack_568 [40];
  longlong *local_540;
  longlong *local_538;
  longlong *local_530;
  longlong *local_528;
  ulonglong local_520;
  longlong local_518;
  uint local_510;
  undefined4 local_50c;
  longlong *local_508;
  int local_500;
  undefined8 local_4f8;
  int iStack_4f0;
  undefined4 uStack_4ec;
  longlong local_4e8 [64];
  longlong *local_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8 [512];
  undefined1 *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8 [2];
  longlong *local_a8;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_568;
  GetCurrentThreadId();
  *(undefined1 *)(param_1 + 0x9d) = 1;
  param_1[0x9c] = param_1[0x9c] + param_2;
  local_d8 = (undefined1 *)0x0;
  local_d0 = 0x2000000000;
  local_2e8 = (longlong *)0x0;
  local_2e0 = 0x2000000000;
  local_530 = param_1 + 0x12;
  local_c8 = 0;
  local_b8[0] = 0;
  local_a8 = (longlong *)0x0;
  local_70 = '\0';
  local_68 = 0;
  uStack_60 = 0;
  local_58 = (ushort)local_58._1_1_ << 8;
  cVar6 = FUN_141724026();
  if (cVar6 != '\0') {
    plVar15 = param_1 + 2;
    local_528 = param_1 + 7;
    local_540 = param_1 + 9;
    plVar16 = param_1 + 0xe;
    local_538 = plVar15;
    do {
      lVar27 = local_c8;
      if (*(int *)((longlong)param_1 + 0x34) == 0) {
        iVar29 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar29 + 1;
        if (*(int *)((longlong)param_1 + 0xc) == iVar29) {
          FUN_14045f6dc(param_1,iVar29);
        }
        iVar30 = (int)param_1[5];
        if (iVar30 == 0) {
          iVar7 = -1;
        }
        else {
          iVar7 = iVar30 + 0x1e;
          if (-1 < iVar30 + -1) {
            iVar7 = iVar30 + -1;
          }
          iVar7 = iVar7 >> 5;
        }
        iVar8 = iVar30 + 1;
        iVar20 = iVar30 + 0x1f;
        if (-1 < iVar30) {
          iVar20 = iVar30;
        }
        if (iVar20 >> 5 == iVar7) {
          *(int *)(param_1 + 5) = iVar8;
        }
        else {
          if (*(int *)((longlong)param_1 + 0x2c) <= iVar30) {
            iVar7 = iVar30;
            if (iVar30 + 0x20U < 0xa0) {
              iVar8 = 0x80;
            }
            else {
              uVar25 = iVar30 + 0x20U >> 5;
              if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
                uVar31 = 4;
                if (4 < uVar25) {
                  uVar31 = uVar25;
                }
              }
              else {
                uVar31 = uVar25 + (uVar25 * 3 >> 3) + 0x10;
              }
              uVar23 = (ulonglong)(uVar31 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar9 = (uint)(uVar23 + 0xf);
                  if (uVar31 < 0x1ffd) {
                    uVar23 = (ulonglong)
                             (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar9 >> 4]];
                  }
                  else {
                    uVar24 = uVar23 + 0xf & 0xfffffffffffffff0;
                    if (uVar24 < 0x7ff1) {
                      bVar19 = (&DAT_14c841e00)[uVar9 >> 4];
                      uVar26 = 0x32;
                      if (0x32 < bVar19) {
                        uVar26 = (ulonglong)bVar19;
                      }
                      uVar32 = 0x32 - (ulonglong)bVar19;
                      do {
                        uVar23 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar32 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar32 & 0xffffffff] & 0xf) == 0) goto LAB_14291e75e;
                        lVar12 = uVar26 + 1 + uVar32;
                        uVar32 = uVar32 - 1;
                      } while (lVar12 != 0x33);
                    }
                    uVar23 = (ulonglong)DAT_14c841df8;
                    if (DAT_14c841df8 < 0x11) {
                      uVar23 = 0x10;
                    }
                    uVar23 = -uVar23 & (uVar24 + uVar23) - 1;
                  }
                }
                else {
                  uVar23 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar23,0);
                  iVar7 = (int)param_1[5];
                }
              }
LAB_14291e75e:
              iVar10 = (int)(uVar23 >> 2);
              iVar8 = iVar10 << 5;
              if (iVar10 < (int)uVar25) {
                iVar8 = -0x20;
              }
            }
            plVar15 = local_538;
            *(int *)((longlong)param_1 + 0x2c) = iVar8;
            FUN_1446efbd8(local_538,iVar7);
            iVar8 = (int)param_1[5] + 1;
          }
          iVar7 = iVar8 + 0x1f;
          if (-1 < iVar8) {
            iVar7 = iVar8;
          }
          *(int *)(param_1 + 5) = iVar8;
          if (iVar8 % 0x20 != 0) {
            plVar13 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar13 = plVar15;
            }
            bVar19 = -(char)(iVar8 % 0x20);
            *(uint *)((longlong)plVar13 + (longlong)(iVar7 >> 5) * 4) =
                 (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar7 >> 5) * 4) << (bVar19 & 0x1f))
                 >> (bVar19 & 0x1f);
          }
        }
        lVar12 = (longlong)iVar29;
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar15;
        }
        bVar19 = (byte)iVar30 & 0x1f;
        puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar20 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
      }
      else {
        iVar29 = (int)param_1[6];
        lVar12 = (longlong)iVar29;
        iVar30 = *(int *)(*param_1 + 4 + lVar12 * 0x80);
        *(int *)(param_1 + 6) = iVar30;
        iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
        *(int *)((longlong)param_1 + 0x34) = iVar7;
        if (iVar7 != 0) {
          *(undefined4 *)(*param_1 + (longlong)iVar30 * 0x80) = 0xffffffff;
        }
      }
      plVar13 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar13 = plVar15;
      }
      iVar30 = iVar29 + 0x1f;
      if (-1 < iVar29) {
        iVar30 = iVar29;
      }
      puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar30 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar29 & 0x1f);
      lVar21 = *param_1;
      lVar12 = lVar12 * 0x80;
      *(longlong *)(lVar21 + lVar12) = lVar27;
      *(int *)(lVar21 + 8 + lVar12) = iVar29;
      *(longlong *)(lVar21 + 0x10 + lVar12) = local_b8[0];
      *(longlong **)(lVar21 + 0x20 + lVar12) = local_a8;
      local_a8 = (longlong *)0x0;
      puVar2 = (undefined4 *)(lVar21 + 0x40 + lVar12);
      *puVar2 = local_88;
      puVar2[1] = uStack_84;
      puVar2[2] = uStack_80;
      puVar2[3] = uStack_7c;
      plVar13 = (longlong *)(lVar21 + 0x30 + lVar12);
      *plVar13 = local_98;
      plVar13[1] = lStack_90;
      if (*(longlong *)(lVar21 + 0x10 + lVar12) != 0) {
        local_b8[0] = 0;
      }
      lVar21 = lVar21 + lVar12;
      *(char *)(lVar21 + 0x58) = local_70;
      if (local_70 == '\x01') {
        *(undefined8 *)(lVar21 + 0x50) = local_78;
      }
      *(short *)(lVar21 + 0x70) = local_58;
      *(undefined4 *)(lVar21 + 0x60) = (undefined4)local_68;
      *(undefined4 *)(lVar21 + 100) = local_68._4_4_;
      *(undefined4 *)(lVar21 + 0x68) = (undefined4)uStack_60;
      *(undefined4 *)(lVar21 + 0x6c) = uStack_60._4_4_;
      if (*(int *)((longlong)param_1 + 0x6c) == 0) {
        iVar30 = (int)param_1[8];
        *(int *)(param_1 + 8) = iVar30 + 1;
        if (*(int *)((longlong)param_1 + 0x44) == iVar30) {
          FUN_14482b872(local_528,iVar30);
        }
        iVar7 = (int)param_1[0xc];
        if (iVar7 == 0) {
          iVar8 = -1;
        }
        else {
          iVar8 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar8 = iVar7 + -1;
          }
          iVar8 = iVar8 >> 5;
        }
        iVar20 = iVar7 + 1;
        iVar10 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar10 >> 5 == iVar8) {
          *(int *)(param_1 + 0xc) = iVar20;
        }
        else {
          if (*(int *)((longlong)param_1 + 100) <= iVar7) {
            iVar8 = iVar7;
            if (iVar7 + 0x20U < 0xa0) {
              iVar20 = 0x80;
            }
            else {
              uVar25 = iVar7 + 0x20U >> 5;
              if (*(int *)((longlong)param_1 + 100) + 0x1fU < 0xa0) {
                uVar31 = 4;
                if (4 < uVar25) {
                  uVar31 = uVar25;
                }
              }
              else {
                uVar31 = uVar25 + (uVar25 * 3 >> 3) + 0x10;
              }
              uVar23 = (ulonglong)(uVar31 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar9 = (uint)(uVar23 + 0xf);
                  if (uVar31 < 0x1ffd) {
                    uVar23 = (ulonglong)
                             (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar9 >> 4]];
                  }
                  else {
                    uVar24 = uVar23 + 0xf & 0xfffffffffffffff0;
                    if (uVar24 < 0x7ff1) {
                      bVar19 = (&DAT_14c841e00)[uVar9 >> 4];
                      uVar26 = 0x32;
                      if (0x32 < bVar19) {
                        uVar26 = (ulonglong)bVar19;
                      }
                      uVar32 = 0x32 - (ulonglong)bVar19;
                      do {
                        uVar23 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar32 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar32 & 0xffffffff] & 0xf) == 0) goto LAB_14291e804;
                        lVar12 = uVar26 + 1 + uVar32;
                        uVar32 = uVar32 - 1;
                      } while (lVar12 != 0x33);
                    }
                    uVar23 = (ulonglong)DAT_14c841df8;
                    if (DAT_14c841df8 < 0x11) {
                      uVar23 = 0x10;
                    }
                    uVar23 = -uVar23 & (uVar24 + uVar23) - 1;
                  }
                }
                else {
                  local_520 = (ulonglong)uVar25;
                  uVar23 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar23,0);
                  uVar25 = (uint)local_520;
                  iVar8 = (int)param_1[0xc];
                }
              }
LAB_14291e804:
              iVar11 = (int)(uVar23 >> 2);
              iVar20 = iVar11 << 5;
              if (iVar11 < (int)uVar25) {
                iVar20 = -0x20;
              }
            }
            *(int *)((longlong)param_1 + 100) = iVar20;
            FUN_1446efbd8(local_540,iVar8);
            iVar20 = (int)param_1[0xc] + 1;
          }
          iVar8 = iVar20 + 0x1f;
          if (-1 < iVar20) {
            iVar8 = iVar20;
          }
          *(int *)(param_1 + 0xc) = iVar20;
          if (iVar20 % 0x20 != 0) {
            plVar15 = (longlong *)param_1[0xb];
            if ((longlong *)param_1[0xb] == (longlong *)0x0) {
              plVar15 = local_540;
            }
            bVar19 = -(char)(iVar20 % 0x20);
            *(uint *)((longlong)plVar15 + (longlong)(iVar8 >> 5) * 4) =
                 (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar8 >> 5) * 4) << (bVar19 & 0x1f))
                 >> (bVar19 & 0x1f);
          }
        }
        lVar12 = (longlong)iVar30;
        plVar15 = (longlong *)param_1[0xb];
        if ((longlong *)param_1[0xb] == (longlong *)0x0) {
          plVar15 = local_540;
        }
        bVar19 = (byte)iVar7 & 0x1f;
        puVar1 = (uint *)((longlong)plVar15 + (longlong)(iVar10 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
        plVar15 = local_538;
      }
      else {
        iVar30 = (int)param_1[0xd];
        lVar12 = (longlong)iVar30;
        iVar7 = *(int *)(param_1[7] + 4 + lVar12 * 0x18);
        *(int *)(param_1 + 0xd) = iVar7;
        iVar8 = *(int *)((longlong)param_1 + 0x6c) + -1;
        *(int *)((longlong)param_1 + 0x6c) = iVar8;
        if (iVar8 != 0) {
          *(undefined4 *)(param_1[7] + (longlong)iVar7 * 0x18) = 0xffffffff;
        }
      }
      plVar13 = (longlong *)param_1[0xb];
      if ((longlong *)param_1[0xb] == (longlong *)0x0) {
        plVar13 = local_540;
      }
      iVar7 = iVar30 + 0x1f;
      if (-1 < iVar30) {
        iVar7 = iVar30;
      }
      puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar7 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar30 & 0x1f);
      plVar13 = (longlong *)(param_1[7] + lVar12 * 0x18);
      *plVar13 = lVar27;
      *(int *)(plVar13 + 1) = iVar29;
      *(undefined4 *)(plVar13 + 2) = 0xffffffff;
      uVar25 = (int)((ulonglong)lVar27 >> 0x20) * 0x17 + (int)lVar27;
      uVar31 = (int)param_1[8] - *(int *)((longlong)param_1 + 0x6c);
      if ((uVar31 != 0) && (uVar31 != 1)) {
        plVar22 = (longlong *)param_1[0xf];
        if ((longlong *)param_1[0xf] == (longlong *)0x0) {
          plVar22 = plVar16;
        }
        iVar7 = *(int *)((longlong)plVar22 + (ulonglong)((int)param_1[0x10] - 1U & uVar25) * 4);
        if (iVar7 != -1) {
          do {
            plVar22 = (longlong *)(*local_528 + (longlong)iVar7 * 0x18);
            if (*plVar22 == lVar27) {
              uVar3 = *(undefined4 *)((longlong)plVar13 + 4);
              lVar12 = plVar13[1];
              uVar5 = *(undefined4 *)((longlong)plVar13 + 0xc);
              *(int *)plVar22 = (int)*plVar13;
              *(undefined4 *)((longlong)plVar22 + 4) = uVar3;
              *(int *)(plVar22 + 1) = (int)lVar12;
              *(undefined4 *)((longlong)plVar22 + 0xc) = uVar5;
              FUN_1412ddc0a(local_528,iVar30);
              goto LAB_14291e576;
            }
            iVar7 = (int)plVar22[2];
          } while (iVar7 != -1);
        }
      }
      if (uVar31 < 4) {
        iVar7 = 1;
      }
      else {
        uVar23 = (ulonglong)(uVar31 & 0xfffffffe) + 0xf;
        lVar12 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar12 & 0x1f);
      }
      if (((int)uVar31 < 1) || (iVar7 <= (int)param_1[0x10])) {
        uVar25 = (int)param_1[0x10] - 1U & uVar25;
        *(uint *)((longlong)plVar13 + 0x14) = uVar25;
        plVar22 = (longlong *)param_1[0xf];
        if ((longlong *)param_1[0xf] == (longlong *)0x0) {
          plVar22 = plVar16;
        }
        *(undefined4 *)(plVar13 + 2) =
             *(undefined4 *)
              ((longlong)plVar22 + ((longlong)(int)param_1[0x10] - 1U & (longlong)(int)uVar25) * 4);
        plVar13 = (longlong *)param_1[0xf];
        if ((longlong *)param_1[0xf] == (longlong *)0x0) {
          plVar13 = plVar16;
        }
        *(int *)((longlong)plVar13 + ((longlong)(int)param_1[0x10] - 1U & (longlong)(int)uVar25) * 4
                ) = iVar30;
      }
      else {
        *(int *)(param_1 + 0x10) = iVar7;
        FUN_141724442(local_528);
      }
LAB_14291e576:
      uVar23 = local_d0;
      lVar12 = (longlong)(int)local_d0;
      uVar25 = (int)local_d0 + 1;
      local_d0 = CONCAT44(local_d0._4_4_,uVar25);
      if (local_d0._4_4_ < uVar25) {
        FUN_1404e6c38(local_2d8,uVar23 & 0xffffffff);
      }
      puVar14 = local_d8;
      if (local_d8 == (undefined1 *)0x0) {
        puVar14 = local_2d8;
      }
      *(longlong *)(puVar14 + lVar12 * 0x10) = lVar27;
      *(int *)(puVar14 + lVar12 * 0x10 + 8) = iVar29;
      cVar6 = FUN_141724026(local_530,&local_c8);
    } while (cVar6 != '\0');
  }
  if (local_70 == '\x01') {
    local_70 = '\0';
  }
  if (local_b8[0] != 0) {
    plVar15 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar15 = &local_98;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  local_c8 = 0;
  local_b8[0] = 0;
  local_a8 = (longlong *)0x0;
  cVar6 = FUN_141724280(param_1 + 0x14);
  if (cVar6 != '\0') {
    do {
      FUN_1412dda24(param_1,&local_4f8,local_c8,local_b8);
      uVar23 = local_2e0;
      lVar27 = (longlong)(int)local_2e0;
      uVar25 = (int)local_2e0 + 1;
      local_2e0 = CONCAT44(local_2e0._4_4_,uVar25);
      if (local_2e0._4_4_ < uVar25) {
        FUN_1404e6c38(local_4e8,uVar23 & 0xffffffff);
      }
      plVar15 = local_2e8;
      if (local_2e8 == (longlong *)0x0) {
        plVar15 = local_4e8;
      }
      plVar15 = plVar15 + lVar27 * 2;
      *(undefined4 *)plVar15 = (undefined4)local_4f8;
      *(undefined4 *)((longlong)plVar15 + 4) = local_4f8._4_4_;
      *(int *)(plVar15 + 1) = iStack_4f0;
      *(undefined4 *)((longlong)plVar15 + 0xc) = uStack_4ec;
      cVar6 = FUN_141724280(param_1 + 0x14,&local_c8);
    } while (cVar6 != '\0');
  }
  if (local_b8[0] != 0) {
    plVar15 = &local_98;
    if (local_a8 != (longlong *)0x0) {
      plVar15 = local_a8;
    }
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  puVar14 = local_d8;
  if (local_d8 == (undefined1 *)0x0) {
    puVar14 = local_2d8;
  }
  lVar27 = (longlong)(int)local_d0;
  if (lVar27 != 0) {
    lVar12 = 0;
    do {
      plVar15 = (longlong *)(puVar14 + lVar12);
      uVar25 = *(uint *)(plVar15 + 1);
      local_c8 = *plVar15;
      lStack_c0 = plVar15[1];
      if ((-1 < (int)uVar25) && ((int)uVar25 < (int)param_1[5])) {
        plVar16 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar16 = param_1 + 2;
        }
        if (((*(uint *)((longlong)plVar16 + (ulonglong)(uVar25 >> 5) * 4) >> (uVar25 & 0x1f) & 1) !=
             0) && (plVar16 = (longlong *)((ulonglong)uVar25 * 0x80 + *param_1),
                   plVar16 != (longlong *)&DAT_fffffffffffffff0 && *plVar16 == *plVar15)) {
          plVar16[0xd] = param_1[0x9c] +
                         *(longlong *)
                          ((longlong)plVar16 +
                          (ulonglong)((*(byte *)(plVar16 + 0xb) ^ 1) << 4) + 0x50);
          *(undefined1 *)(plVar16 + 0xe) = 1;
          iStack_4f0 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
          local_4f8 = param_1;
          FUN_1410be2cc(param_1 + 0x18,&local_c8,&local_4f8);
        }
      }
      lVar12 = lVar12 + 0x10;
    } while (lVar27 * 0x10 != lVar12);
  }
  plVar15 = local_4e8;
  if (local_2e8 != (longlong *)0x0) {
    plVar15 = local_2e8;
  }
  if ((longlong)(int)local_2e0 != 0) {
    plVar13 = plVar15 + (longlong)(int)local_2e0 * 2;
    plVar16 = param_1 + 0x18;
    local_540 = plVar16;
    local_530 = plVar13;
LAB_14291ec19:
    plVar22 = (longlong *)param_1[0x58];
    plVar17 = plVar22;
    if (plVar22 == (longlong *)0x0) {
      plVar17 = plVar16;
    }
    iVar29 = (int)param_1[0x59];
    if (iVar29 != 0) {
      lVar12 = (longlong)iVar29 << 4;
      uVar23 = 0;
      uVar24 = 0;
      lVar27 = 0;
      do {
        iVar30 = (int)uVar24;
        if (plVar17[uVar23] == *plVar15) {
          if (iVar30 != -1) {
            local_500 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
            iVar7 = (iVar29 + -1) - iVar30;
            local_508 = param_1;
            if (iVar7 != 0) {
              if (0 < iVar7) {
                iVar7 = 1;
              }
              memmove(plVar17 + (lVar27 >> 0x20) * 2,plVar17 + (longlong)(iVar29 - iVar7) * 2,
                      (longlong)iVar7 << 4);
              iVar29 = (int)param_1[0x59];
              plVar22 = (longlong *)param_1[0x58];
              plVar16 = local_540;
            }
            iVar29 = iVar29 + -1;
            *(int *)(param_1 + 0x59) = iVar29;
            plVar13 = plVar22;
            if (plVar22 == (longlong *)0x0) {
              plVar13 = plVar16;
            }
            uVar26 = uVar23 + 1;
            uVar32 = uVar24;
            if ((int)uVar26 < iVar29) goto LAB_14291ecf6;
            goto LAB_14291edf1;
          }
          break;
        }
        lVar27 = lVar27 + 0x100000000;
        uVar24 = (ulonglong)(iVar30 + 1);
        uVar23 = uVar23 + 2;
        lVar12 = lVar12 + -0x10;
      } while (lVar12 != 0);
    }
    goto LAB_14291ee88;
  }
LAB_14291ee95:
  local_540 = param_1 + 0x5a;
  plVar15 = (longlong *)param_1[0x9a];
  if ((longlong *)param_1[0x9a] == (longlong *)0x0) {
    plVar15 = local_540;
  }
  lVar27 = param_1[0x9b];
  if ((longlong)(int)lVar27 != 0) {
    lVar12 = 0;
    do {
      local_c8 = *(longlong *)((longlong)plVar15 + lVar12);
      puVar1 = (uint *)((longlong *)((longlong)plVar15 + lVar12) + 1);
      uVar25 = *puVar1;
      lStack_c0 = *(longlong *)puVar1;
      if ((-1 < (int)uVar25) && ((int)uVar25 < (int)param_1[5])) {
        plVar16 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar16 = param_1 + 2;
        }
        if (((*(uint *)((longlong)plVar16 + (ulonglong)(uVar25 >> 5) * 4) >> (uVar25 & 0x1f) & 1) !=
             0) && (plVar16 = (longlong *)((ulonglong)uVar25 * 0x80 + *param_1),
                   plVar16 != (longlong *)&DAT_fffffffffffffff0 && *plVar16 == local_c8)) {
          plVar16[0xd] = plVar16[0xc] + param_1[0x9c];
          *(undefined1 *)(plVar16 + 0xe) = 1;
          iStack_4f0 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
          local_4f8 = param_1;
          FUN_1410be2cc(param_1 + 0x18,&local_c8,&local_4f8);
        }
      }
      lVar12 = lVar12 + 0x10;
    } while ((longlong)(int)lVar27 * 0x10 != lVar12);
  }
  *(undefined4 *)(param_1 + 0x9b) = 0;
  if (*(int *)((longlong)param_1 + 0x4dc) != 0) {
    FUN_14291f186(local_540);
  }
  if (0 < (int)param_1[0x59]) {
    plVar15 = param_1 + 0x18;
    local_530 = param_1 + 2;
    do {
      plVar16 = (longlong *)param_1[0x58];
      if ((longlong *)param_1[0x58] == (longlong *)0x0) {
        plVar16 = plVar15;
      }
      lVar27 = *plVar16;
      uVar25 = *(uint *)(plVar16 + 1);
      if (((int)uVar25 < 0) || ((int)param_1[5] <= (int)uVar25)) {
LAB_14291f002:
        puVar28 = (undefined8 *)0x0;
      }
      else {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = local_530;
        }
        if ((*(uint *)((longlong)plVar13 + (ulonglong)(uVar25 >> 5) * 4) >> (uVar25 & 0x1f) & 1) ==
            0) goto LAB_14291f002;
        if (*(longlong *)(*param_1 + (ulonglong)uVar25 * 0x80) != lVar27) goto LAB_14291f002;
        puVar28 = (undefined8 *)(*param_1 + (ulonglong)uVar25 * 0x80 + 0x10);
      }
      if (*(char *)(puVar28 + 0xc) == '\x02') {
        iStack_4f0 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
        local_4f8 = param_1;
        FUN_141723e8e(plVar15,&local_c8,&local_4f8);
      }
      else {
        if (param_1[0x9c] < (longlong)puVar28[0xb]) break;
        uVar3 = *(undefined4 *)((longlong)plVar16 + 0xc);
        local_c8 = 0;
        lStack_c0 = CONCAT44(lStack_c0._4_4_,0xffffffff);
        iStack_4f0 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
        local_4f8 = param_1;
        FUN_141723e8e(plVar15,&local_c8,&local_4f8);
        *(undefined1 *)(puVar28 + 0xc) = 4;
        pcVar4 = (code *)*puVar28;
        plVar16 = puVar28 + 4;
        if ((longlong *)puVar28[2] != (longlong *)0x0) {
          plVar16 = (longlong *)puVar28[2];
        }
        uVar18 = (**(code **)(*plVar16 + 8))();
        (*pcVar4)(uVar18);
        if ((*(byte *)((longlong)puVar28 + 0x61) & 1) == 0) {
          local_518 = lVar27;
          local_510 = uVar25;
          local_50c = uVar3;
          FUN_146b2179c(param_1,&local_518);
        }
        else {
          *(undefined1 *)(puVar28 + 0xc) = 3;
          iVar29 = (int)param_1[0x9b];
          *(uint *)(param_1 + 0x9b) = iVar29 + 1U;
          if (*(uint *)((longlong)param_1 + 0x4dc) < iVar29 + 1U) {
            FUN_1404e6c38(local_540,iVar29);
          }
          plVar16 = (longlong *)param_1[0x9a];
          if ((longlong *)param_1[0x9a] == (longlong *)0x0) {
            plVar16 = local_540;
          }
          plVar16[(longlong)iVar29 * 2] = local_c8;
          (plVar16 + (longlong)iVar29 * 2)[1] = lStack_c0;
        }
      }
    } while (0 < (int)param_1[0x59]);
  }
  if (local_2e8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 0x9d) = 0;
  if ((local_48 ^ (ulonglong)auStack_568) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    plVar16 = plVar13 + (longlong)iVar7 * 2;
    plVar22 = plVar13 + (longlong)iVar8 * 2;
    local_c8 = *plVar16;
    lStack_c0 = plVar16[1];
    lVar27 = plVar22[1];
    *plVar16 = *plVar22;
    plVar16[1] = lVar27;
    *plVar22 = local_c8;
    plVar22[1] = lStack_c0;
    uVar23 = (ulonglong)(uint)((int)local_538 * 2);
    uVar25 = (int)local_538 * 2 + 1;
    uVar26 = (ulonglong)uVar25;
    uVar32 = (ulonglong)local_538 & 0xffffffff;
    if (iVar29 <= (int)uVar25) break;
LAB_14291ecf6:
    iVar7 = (int)uVar32;
    uVar25 = (int)uVar23 + 2;
    if ((int)uVar25 < iVar29) {
      local_538 = (longlong *)CONCAT44(local_538._4_4_,iVar7);
      local_c8 = plVar13[(longlong)(int)uVar25 * 2];
      lStack_c0 = (plVar13 + (longlong)(int)uVar25 * 2)[1];
      plVar16 = plVar13 + (longlong)(int)uVar26 * 2;
      local_4f8 = (longlong *)*plVar16;
      iStack_4f0 = (int)plVar16[1];
      uStack_4ec = *(undefined4 *)((longlong)plVar16 + 0xc);
      cVar6 = FUN_1410be3f8(&local_508,&local_4f8,&local_c8);
      iVar7 = (int)local_538;
      local_538 = (longlong *)(uVar26 & 0xffffffff);
      if (cVar6 == '\0') {
        local_538 = (longlong *)(ulonglong)uVar25;
      }
    }
    else {
      local_538 = (longlong *)(uVar26 & 0xffffffff);
    }
    iVar8 = (int)local_538;
    local_c8 = plVar13[(longlong)iVar7 * 2];
    lStack_c0 = (plVar13 + (longlong)iVar7 * 2)[1];
    plVar16 = plVar13 + (longlong)iVar8 * 2;
    local_4f8 = (longlong *)*plVar16;
    iStack_4f0 = (int)plVar16[1];
    uStack_4ec = *(undefined4 *)((longlong)plVar16 + 0xc);
    cVar6 = FUN_1410be3f8(&local_508,&local_4f8,&local_c8);
    if (cVar6 == '\0') break;
  }
  iVar29 = (int)param_1[0x59];
  plVar22 = (longlong *)param_1[0x58];
  plVar16 = local_540;
LAB_14291edf1:
  uVar23 = (ulonglong)(iVar29 - 1U);
  if (iVar30 < (int)(iVar29 - 1U)) {
    uVar23 = uVar24;
  }
  if (plVar22 == (longlong *)0x0) {
    plVar22 = plVar16;
  }
  plVar13 = local_530;
  plVar16 = local_540;
  if (0 < (int)uVar23) {
    do {
      uVar25 = (int)uVar23 - 1;
      uVar24 = (ulonglong)(uVar25 >> 1);
      local_c8 = plVar22[uVar24 * 2];
      lStack_c0 = (plVar22 + uVar24 * 2)[1];
      plVar16 = plVar22 + uVar23 * 2;
      local_4f8 = (longlong *)*plVar16;
      iStack_4f0 = (int)plVar16[1];
      uStack_4ec = *(undefined4 *)((longlong)plVar16 + 0xc);
      cVar6 = FUN_1410be3f8(&local_508,&local_4f8,&local_c8);
      plVar13 = local_530;
      plVar16 = local_540;
      if (cVar6 == '\0') break;
      plVar33 = plVar22 + uVar24 * 2;
      plVar17 = plVar22 + uVar23 * 2;
      local_c8 = *plVar17;
      lStack_c0 = plVar17[1];
      lVar27 = plVar33[1];
      *plVar17 = *plVar33;
      plVar17[1] = lVar27;
      *plVar33 = local_c8;
      plVar33[1] = lStack_c0;
      uVar23 = uVar24;
    } while (1 < uVar25);
  }
LAB_14291ee88:
  plVar15 = plVar15 + 2;
  if (plVar15 == plVar13) goto LAB_14291ee95;
  goto LAB_14291ec19;
}



// FUNCTION 14291f186 FUN_14291f186 body=89 status=ok
// SIG undefined FUN_14291f186(void)

void FUN_14291f186(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x20c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
    if (*(void **)((longlong)param_1 + 0x200) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x200),
              (longlong)*(int *)((longlong)param_1 + 0x208) << 4);
      FUN_1446efa72((longlong)param_1 + 0x200,0,0,0x10);
      return;
    }
  }
  return;
}



// FUNCTION 14291f1e0 FUN_14291f1e0 body=988 status=ok
// SIG undefined FUN_14291f1e0(void)

ulonglong FUN_14291f1e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  code *pcVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_f8 [32];
  double local_d8;
  undefined1 local_c8 [16];
  byte *local_b8;
  undefined1 local_a9;
  undefined1 *local_a8;
  byte **local_a0;
  LARGE_INTEGER local_98;
  undefined1 *puStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(byte *)(param_1 + 0x54d) & 1) != 0) {
    uVar16 = 0;
    goto LAB_14291f230;
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x2f8) != 0) {
    plVar15 = (longlong *)(param_1 + 0xf0);
    if (*(longlong **)(param_1 + 0x2f0) != (longlong *)0x0) {
      plVar15 = *(longlong **)(param_1 + 0x2f0);
    }
    uVar5 = *(uint *)(plVar15 + 1);
    if (((int)uVar5 < 0) || (*(int *)(param_1 + 0x58) <= (int)uVar5)) {
LAB_14291f2cf:
      plVar13 = (longlong *)0x0;
    }
    else {
      lVar8 = param_1 + 0x40;
      if (*(longlong *)(param_1 + 0x50) != 0) {
        lVar8 = *(longlong *)(param_1 + 0x50);
      }
      if ((*(uint *)(lVar8 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) == 0)
      goto LAB_14291f2cf;
      plVar10 = (longlong *)((ulonglong)uVar5 * 0x80 + *plVar1);
      plVar13 = (longlong *)0x0;
      if (*plVar10 == *plVar15) {
        plVar13 = plVar10 + 2;
      }
    }
    lVar8 = plVar13[0xb] - *(longlong *)(param_1 + 0x510);
    if (lVar8 <= param_2) {
      param_2 = lVar8;
    }
  }
  dVar7 = (double)param_2 / 10000000.0;
  pbVar2 = (byte *)(param_1 + 0x21);
  if ((dVar7 != 0.0) || (NAN(dVar7))) {
    QueryPerformanceCounter(&local_98);
    bVar4 = *pbVar2;
    if ((bVar4 & 1) == 0) {
      dVar7 = dVar7 + (double)local_98.QuadPart * DAT_14c83f420 + 16777216.0;
      do {
        if ((dVar7 < INFINITY) &&
           (QueryPerformanceCounter(&local_98),
           dVar7 <= (double)local_98.QuadPart * DAT_14c83f420 + 16777216.0)) break;
        if ((bVar4 & 2) == 0) {
          LOCK();
          bVar3 = *pbVar2;
          if (bVar4 == bVar3) {
            *pbVar2 = 2;
          }
          UNLOCK();
          if (bVar4 == bVar3) goto LAB_14291f55d;
        }
        else {
LAB_14291f55d:
          puStack_90 = &local_a9;
          local_98.QuadPart = (LONGLONG)&DAT_142743e10;
          local_a0 = &local_b8;
          local_a8 = &LAB_142743e12;
          local_d8 = dVar7;
          local_b8 = pbVar2;
          FUN_1456d3e9c(local_c8,pbVar2,&local_a8,&local_98);
        }
        bVar4 = *pbVar2;
      } while ((bVar4 & 1) == 0);
    }
  }
  LOCK();
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xfe;
  UNLOCK();
  QueryPerformanceCounter(&local_98);
  lVar9 = (longlong)(((double)local_98.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0);
  lVar12 = lVar9 - *(longlong *)(param_1 + 0x540);
  lVar8 = 0;
  if (0 < lVar12) {
    lVar8 = lVar12;
  }
  *(longlong *)(param_1 + 0x540) = lVar9;
  FUN_14291e16a(plVar1,lVar8);
  if (*(int *)(param_1 + 0x508) != 0) {
    QueryPerformanceCounter(&local_98);
    lVar9 = (longlong)(((double)local_98.QuadPart * DAT_14c83f420 + 16777216.0) * 10000000.0);
    lVar12 = lVar9 - *(longlong *)(param_1 + 0x540);
    lVar8 = 0;
    if (0 < lVar12) {
      lVar8 = lVar12;
    }
    *(longlong *)(param_1 + 0x540) = lVar9;
    FUN_14291e16a(plVar1,lVar8);
  }
  FUN_1461a7422(param_1);
  bVar4 = *(byte *)(param_1 + 0x54c);
  if ((bVar4 & 1) != 0) {
    local_98.QuadPart = 0;
    puStack_90 = (undefined1 *)0x0;
    LOCK();
    bVar17 = *(char *)(param_1 + 0x550) == '\0';
    if (bVar17) {
      *(char *)(param_1 + 0x550) = '\x01';
    }
    UNLOCK();
    if (!bVar17) {
      FUN_1447d2058(param_1 + 0x550);
    }
    LOCK();
    *(undefined1 *)(param_1 + 0x54d) = 1;
    UNLOCK();
    FUN_1459049b0(&local_98,param_1 + 0x530);
    LOCK();
    bVar17 = *(char *)(param_1 + 0x550) == '\x01';
    if (bVar17) {
      *(char *)(param_1 + 0x550) = '\0';
    }
    UNLOCK();
    if (!bVar17) {
      FUN_14008cdb0(param_1 + 0x550);
    }
    uVar14 = 0;
    if ((longlong)(int)puStack_90 != 0) {
      lVar8 = (longlong)(int)puStack_90 << 6;
      plVar15 = (longlong *)(local_98.QuadPart + 0x20);
      do {
        pcVar6 = (code *)plVar15[-4];
        if (pcVar6 != (code *)0x0) {
          plVar13 = (longlong *)plVar15[-2];
          if ((longlong *)plVar15[-2] == (longlong *)0x0) {
            plVar13 = plVar15;
          }
          uVar11 = (**(code **)(*plVar13 + 8))();
          (*pcVar6)(uVar11);
        }
        plVar15 = plVar15 + 8;
        lVar8 = lVar8 + -0x40;
      } while (lVar8 != 0);
      uVar14 = (int)puStack_90;
    }
    FUN_144a80dc3(local_98.QuadPart,uVar14);
    if ((undefined *)local_98.QuadPart != (undefined *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar16 = CONCAT71((int7)((ulonglong)plVar1 >> 8),bVar4) ^ 1;
LAB_14291f230:
  if ((local_80 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffff01;
}



// FUNCTION 14291f5be FUN_14291f5be body=102 status=ok
// SIG undefined FUN_14291f5be(void)

void FUN_14291f5be(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong *local_48;
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_48 = (longlong *)0x0;
  FUN_146283c7a(*param_1,local_58);
  if (local_58[0] != 0) {
    plVar1 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar1 = local_38;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14291f630 FUN_14291f630 body=12 status=ok
// SIG undefined FUN_14291f630(void)

void FUN_14291f630(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014291f639. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14291f63c FUN_14291f63c body=29 status=ok
// SIG undefined FUN_14291f63c(void)

undefined8 FUN_14291f63c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14291f666 FUN_14291f666 body=12 status=ok
// SIG undefined FUN_14291f666(void)

void FUN_14291f666(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014291f66f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14291f672 FUN_14291f672 body=29 status=ok
// SIG undefined FUN_14291f672(void)

undefined8 FUN_14291f672(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14291f6aa FUN_14291f6aa body=12 status=ok
// SIG undefined FUN_14291f6aa(void)

void FUN_14291f6aa(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014291f6b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14291f6b6 FUN_14291f6b6 body=29 status=ok
// SIG undefined FUN_14291f6b6(void)

undefined8 FUN_14291f6b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14291f6d4 FUN_14291f6d4 body=106 status=ok
// SIG undefined FUN_14291f6d4(void)

void FUN_14291f6d4(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38 [5];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_14291a130(*param_1,local_38 + 2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14291f74a FUN_14291f74a body=12 status=ok
// SIG undefined FUN_14291f74a(void)

void FUN_14291f74a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014291f753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14291f756 FUN_14291f756 body=29 status=ok
// SIG undefined FUN_14291f756(void)

undefined8 FUN_14291f756(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14291f774 FUN_14291f774 body=106 status=ok
// SIG undefined FUN_14291f774(void)

void FUN_14291f774(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38 [5];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_14291a130(*param_1,local_38 + 2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14291f7ea FUN_14291f7ea body=12 status=ok
// SIG undefined FUN_14291f7ea(void)

void FUN_14291f7ea(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014291f7f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14291f7f6 FUN_14291f7f6 body=29 status=ok
// SIG undefined FUN_14291f7f6(void)

undefined8 FUN_14291f7f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14291f814 FUN_14291f814 body=106 status=ok
// SIG undefined FUN_14291f814(void)

void FUN_14291f814(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  longlong local_38 [5];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_14291a130(*param_1,local_38 + 2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14291f88a FUN_14291f88a body=12 status=ok
// SIG undefined FUN_14291f88a(void)

void FUN_14291f88a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014291f893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14291f896 FUN_14291f896 body=29 status=ok
// SIG undefined FUN_14291f896(void)

undefined8 FUN_14291f896(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14291f8b4 FUN_14291f8b4 body=111 status=ok
// SIG undefined FUN_14291f8b4(void)

void FUN_14291f8b4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar4 = *param_1;
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x134) = 1;
      if (*(longlong *)(lVar4 + 0x1c8) != 0) {
        *(undefined1 *)(*(longlong *)(lVar4 + 0x1c8) + 0x2c) = 1;
      }
      FUN_146b1b324();
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
                    /* WARNING: Could not recover jumptable at 0x00014291f8fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14291f954 FUN_14291f954 body=12 status=ok
// SIG undefined FUN_14291f954(void)

void FUN_14291f954(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014291f95d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14291f960 FUN_14291f960 body=64 status=ok
// SIG undefined FUN_14291f960(void)

undefined8 * FUN_14291f960(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_149f2a6d0;
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14291f9de FUN_14291f9de body=12 status=ok
// SIG undefined FUN_14291f9de(void)

void FUN_14291f9de(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014291f9e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14291f9ea FUN_14291f9ea body=83 status=ok
// SIG undefined FUN_14291f9ea(void)

undefined8 * FUN_14291f9ea(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149f2a6f0;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14291fa88 FUN_14291fa88 body=83 status=ok
// SIG undefined FUN_14291fa88(void)

undefined8 * FUN_14291fa88(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149f2a710;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14291fb1a FUN_14291fb1a body=12 status=ok
// SIG undefined FUN_14291fb1a(void)

void FUN_14291fb1a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014291fb23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14291fb26 FUN_14291fb26 body=83 status=ok
// SIG undefined FUN_14291fb26(void)

undefined8 * FUN_14291fb26(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149f2a730;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14291fb7a FUN_14291fb7a body=378 status=ok
// SIG undefined FUN_14291fb7a(void)

void FUN_14291fb7a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  double dVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 != (undefined8 *)0x0) {
    iVar7 = *(int *)(puVar5 + 1);
    do {
      if (iVar7 == 0) goto LAB_14291fce7;
      LOCK();
      iVar3 = *(int *)(puVar5 + 1);
      bVar9 = iVar7 == iVar3;
      if (bVar9) {
        *(int *)(puVar5 + 1) = iVar7 + 1;
        iVar3 = iVar7;
      }
      iVar7 = iVar3;
      UNLOCK();
    } while (!bVar9);
    param_1 = (longlong *)*param_1;
    if (param_1 != (longlong *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
      param_1[0x2e] = 0;
      plVar6 = (longlong *)param_1[0x2f];
      if (plVar6 != (longlong *)0x0) {
        param_1[0x2f] = 0;
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
      uVar8 = (**(code **)(*param_1 + 0x10))(param_1);
      if (uVar8 < 2) {
        QueryPerformanceCounter(&local_48);
        dVar4 = (double)param_1[0x2b];
        if (dVar4 <= (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0) {
          LOCK();
          *(undefined1 *)((longlong)param_1 + 0x149) = 1;
          UNLOCK();
          (**(code **)(*param_1 + 0x188))(param_1);
        }
        else {
          QueryPerformanceCounter(&local_48);
          FUN_140c72f52(param_1,dVar4 - ((double)local_48.QuadPart * DAT_14c83f420 + 16777216.0));
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    }
    LOCK();
    piVar2 = (int *)(puVar5 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar2 = (int *)((longlong)puVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
      }
    }
  }
LAB_14291fce7:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14291fd3e FUN_14291fd3e body=12 status=ok
// SIG undefined FUN_14291fd3e(void)

void FUN_14291fd3e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014291fd47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14291fd4a FUN_14291fd4a body=64 status=ok
// SIG undefined FUN_14291fd4a(void)

undefined8 * FUN_14291fd4a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_149f2a750;
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14291fd8a FUN_14291fd8a body=195 status=ok
// SIG undefined FUN_14291fd8a(void)

void FUN_14291fd8a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
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
    param_1 = (longlong *)*param_1;
    if (param_1 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
      LOCK();
      *(undefined1 *)(param_1 + 0x29) = 1;
      UNLOCK();
      uVar6 = (**(code **)(*param_1 + 0x10))(param_1);
      if (uVar6 < 2) {
        FUN_14113cdca(param_1);
        (**(code **)(*param_1 + 0x188))(param_1);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
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
                    /* WARNING: Could not recover jumptable at 0x00014291fe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14291fe7e FUN_14291fe7e body=12 status=ok
// SIG undefined FUN_14291fe7e(void)

void FUN_14291fe7e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014291fe87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14291fe8a FUN_14291fe8a body=64 status=ok
// SIG undefined FUN_14291fe8a(void)

undefined8 * FUN_14291fe8a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_149f2a770;
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14291feca FUN_14291feca body=29 status=ok
// SIG undefined FUN_14291feca(void)

undefined8 FUN_14291feca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14291fefc FUN_14291fefc body=93 status=ok
// SIG undefined FUN_14291fefc(void)

void FUN_14291fefc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2a790;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14291ff5a FUN_14291ff5a body=93 status=ok
// SIG undefined FUN_14291ff5a(void)

void FUN_14291ff5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2a790;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14291ffb8 FUN_14291ffb8 body=126 status=ok
// SIG undefined FUN_14291ffb8(void)

void FUN_14291ffb8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f2a800;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f2a790;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142920027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142920036 FUN_142920036 body=112 status=ok
// SIG undefined FUN_142920036(void)

void FUN_142920036(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_142920110(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x00014292009a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1429200a6 FUN_1429200a6 body=106 status=ok
// SIG undefined FUN_1429200a6(void)

undefined8 FUN_1429200a6(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_142920110(param_1 + 0x18);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return 1;
}



// FUNCTION 142920110 FUN_142920110 body=116 status=ok
// SIG undefined FUN_142920110(void)

void FUN_142920110(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  plVar4 = (longlong *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (**(code **)(*(longlong *)*param_1 + 0x10))();
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
                    /* WARNING: Could not recover jumptable at 0x000142920178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142920184 FUN_142920184 body=106 status=ok
// SIG undefined FUN_142920184(void)

void FUN_142920184(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = (**(code **)(*(longlong *)*param_1 + 0x110))();
  uVar1 = *(undefined4 *)(param_1 + 2);
  local_20 = *param_1;
  local_18 = param_1[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_146b1cc4c(uVar2,&local_20,uVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142920226 FUN_142920226 body=12 status=ok
// SIG undefined FUN_142920226(void)

void FUN_142920226(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014292022f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142920232 FUN_142920232 body=83 status=ok
// SIG undefined FUN_142920232(void)

undefined8 * FUN_142920232(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149f2a870;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142920286 FUN_142920286 body=103 status=ok
// SIG undefined FUN_142920286(void)

undefined8 * FUN_142920286(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1407c869a(&local_48,param_1,0);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429202ee FUN_1429202ee body=71 status=ok
// SIG undefined FUN_1429202ee(void)

undefined8 * FUN_1429202ee(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149f2a920;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14292034a FUN_14292034a body=144 status=ok
// SIG undefined FUN_14292034a(void)

void FUN_14292034a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2a920;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x0001429203cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 1429203da FUN_1429203da body=144 status=ok
// SIG undefined FUN_1429203da(void)

void FUN_1429203da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2a920;
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  puVar1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
                    /* WARNING: Could not recover jumptable at 0x00014292045f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 6);
    return;
  }
  return;
}



// FUNCTION 14292046a FUN_14292046a body=171 status=ok
// SIG undefined FUN_14292046a(void)

void FUN_14292046a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 *puVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f2a920;
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  p_Var1[1].Type = 0;
  p_Var1[1].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[1].field_0x4 = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,p_Var1 + 1);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142920505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142920516 FUN_142920516 body=43 status=ok
// SIG undefined FUN_142920516(void)

undefined8 FUN_142920516(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  return 0;
}



// FUNCTION 142920542 FUN_142920542 body=43 status=ok
// SIG undefined FUN_142920542(void)

undefined8 FUN_142920542(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  return 1;
}



// FUNCTION 14292056e FUN_14292056e body=29 status=ok
// SIG undefined FUN_14292056e(void)

undefined8 FUN_14292056e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429205a0 FUN_1429205a0 body=85 status=ok
// SIG undefined FUN_1429205a0(void)

void FUN_1429205a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2abd0;
  return;
}



// FUNCTION 1429205f6 FUN_1429205f6 body=85 status=ok
// SIG undefined FUN_1429205f6(void)

void FUN_1429205f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2abd0;
  return;
}



// FUNCTION 14292064c FUN_14292064c body=118 status=ok
// SIG undefined FUN_14292064c(void)

void FUN_14292064c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f2a800;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f2abd0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001429206b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1429206c2 FUN_1429206c2 body=114 status=ok
// SIG undefined FUN_1429206c2(void)

void FUN_1429206c2(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1429207a0(param_2,param_3);
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
                    /* WARNING: Could not recover jumptable at 0x000142920728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142920734 FUN_142920734 body=108 status=ok
// SIG undefined FUN_142920734(void)

undefined8 FUN_142920734(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1429207a0(param_2,param_3);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return 1;
}



// FUNCTION 1429207a0 FUN_1429207a0 body=106 status=ok
// SIG undefined FUN_1429207a0(void)

void FUN_1429207a0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = (longlong *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  plVar4 = (longlong *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001429207fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14292080a FUN_14292080a body=542 status=ok
// SIG undefined FUN_14292080a(void)

void FUN_14292080a(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 != (longlong *)0x0) {
    iVar11 = (int)plVar3[1];
    do {
      if (iVar11 == 0) goto LAB_142920a01;
      LOCK();
      iVar9 = (int)plVar3[1];
      bVar13 = iVar11 == iVar9;
      if (bVar13) {
        *(int *)(plVar3 + 1) = iVar11 + 1;
        iVar9 = iVar11;
      }
      iVar11 = iVar9;
      UNLOCK();
    } while (!bVar13);
    lVar4 = *param_1;
    if ((lVar4 != 0) && (plVar5 = *(longlong **)(lVar4 + 0x238), plVar5 != (longlong *)0x0)) {
      iVar11 = (int)plVar5[1];
      do {
        if (iVar11 == 0) goto LAB_1429209e4;
        LOCK();
        iVar9 = (int)plVar5[1];
        bVar13 = iVar11 == iVar9;
        if (bVar13) {
          *(int *)(plVar5 + 1) = iVar11 + 1;
          iVar9 = iVar11;
        }
        iVar11 = iVar9;
        UNLOCK();
      } while (!bVar13);
      lVar6 = *(longlong *)(lVar4 + 0x230);
      if (lVar6 != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x50));
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        iVar11 = -1;
        if ((longlong)*(int *)(lVar6 + 0x48) != 0) {
          uVar10 = 0;
          do {
            if (lVar4 == *(longlong *)(*(longlong *)(lVar6 + 0x40) + 0x20 + uVar10)) {
              iVar11 = (int)(uVar10 >> 4) * -0x55555555;
              break;
            }
            uVar10 = uVar10 + 0x30;
          } while ((longlong)*(int *)(lVar6 + 0x48) * 0x30 != uVar10);
        }
        LOCK();
        plVar7 = plVar3 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        if (iVar11 != -1) {
          lVar4 = *(longlong *)(lVar6 + 0x40);
          lVar12 = (longlong)iVar11 * 0x30;
          plVar7 = *(longlong **)(lVar4 + 0x20 + lVar12);
          (**(code **)(*plVar7 + 0x120))(plVar7,&local_58);
          lVar8 = *(longlong *)(lVar4 + 0x20 + lVar12);
          if (local_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
          }
          plVar7 = *(longlong **)(lVar8 + 0x248);
          *(undefined8 *)(lVar8 + 0x240) = local_58;
          *(longlong **)(lVar8 + 0x248) = local_50;
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar7 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar7)(plVar7);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar7 = local_50 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar1 = (int *)((longlong)local_50 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_50 + 0x10))(local_50);
              }
            }
          }
          *(char *)(*(longlong *)(lVar4 + lVar12 + 0x20) + 0x250) = (char)param_1[2];
          FUN_14291c768(lVar4 + lVar12);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x50));
      }
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
LAB_1429209e4:
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
LAB_142920a01:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142920a60 FUN_142920a60 body=12 status=ok
// SIG undefined FUN_142920a60(void)

void FUN_142920a60(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142920a69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142920a6c FUN_142920a6c body=64 status=ok
// SIG undefined FUN_142920a6c(void)

undefined8 * FUN_142920a6c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_149f2afb0;
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142920aac FUN_142920aac body=507 status=ok
// SIG undefined FUN_142920aac(void)

void FUN_142920aac(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0) {
    iVar9 = (int)plVar2[1];
    do {
      if (iVar9 == 0) goto LAB_142920c2b;
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar11 = iVar9 == iVar6;
      if (bVar11) {
        *(int *)(plVar2 + 1) = iVar9 + 1;
        iVar6 = iVar9;
      }
      iVar9 = iVar6;
      UNLOCK();
    } while (!bVar11);
    plVar3 = (longlong *)*param_1;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)plVar3[0x47];
      if (plVar4 != (longlong *)0x0) {
        iVar9 = (int)plVar4[1];
        do {
          if (iVar9 == 0) goto LAB_142920bc9;
          LOCK();
          iVar6 = (int)plVar4[1];
          bVar11 = iVar9 == iVar6;
          if (bVar11) {
            *(int *)(plVar4 + 1) = iVar9 + 1;
            iVar6 = iVar9;
          }
          iVar9 = iVar6;
          UNLOCK();
        } while (!bVar11);
        lVar5 = plVar3[0x46];
        if (lVar5 != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x50));
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          iVar9 = -1;
          if ((longlong)*(int *)(lVar5 + 0x48) != 0) {
            uVar7 = 0;
            do {
              if (plVar3 == *(longlong **)(*(longlong *)(lVar5 + 0x40) + 0x20 + uVar7)) {
                iVar9 = (int)(uVar7 >> 4) * -0x55555555;
                break;
              }
              uVar7 = uVar7 + 0x30;
            } while ((longlong)*(int *)(lVar5 + 0x48) * 0x30 != uVar7);
          }
          LOCK();
          plVar10 = plVar2 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
          if (iVar9 != -1) {
            plVar10 = (longlong *)(lVar5 + 0x40);
            if (*(int *)(*plVar10 + 4 + (longlong)iVar9 * 0x30) != 0) {
              FUN_146b1f7a8();
              EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c990e18);
              DAT_14c990e10 = DAT_14c990e10 + -1;
              LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c990e18);
            }
            FUN_146b23da4(plVar10,iVar9);
            FUN_146b23e38(plVar10);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x50));
        }
        LOCK();
        plVar10 = plVar4 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
LAB_142920bc9:
      uVar8 = (**(code **)(*plVar3 + 0xf0))(plVar3);
      lVar5 = param_1[2];
      (**(code **)(*plVar3 + 0x120))(plVar3,local_58);
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      local_68 = plVar3;
      local_60 = plVar2;
      FUN_146b1b560(uVar8,&local_68,local_58,
                    CONCAT71((int7)((ulonglong)param_1 >> 8),(char)lVar5) & 0xffffffff);
    }
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
LAB_142920c2b:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142920cde FUN_142920cde body=12 status=ok
// SIG undefined FUN_142920cde(void)

void FUN_142920cde(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142920ce7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142920cea FUN_142920cea body=64 status=ok
// SIG undefined FUN_142920cea(void)

undefined8 * FUN_142920cea(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_149f2afd0;
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142920d2a FUN_142920d2a body=71 status=ok
// SIG undefined FUN_142920d2a(void)

undefined8 * FUN_142920d2a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_149f2b0d0;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142920d86 FUN_142920d86 body=152 status=ok
// SIG undefined FUN_142920d86(void)

void FUN_142920d86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2b0d0;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  puVar1[8] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x40);
    }
                    /* WARNING: Could not recover jumptable at 0x000142920e13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 8);
    return;
  }
  return;
}



// FUNCTION 142920e1e FUN_142920e1e body=152 status=ok
// SIG undefined FUN_142920e1e(void)

void FUN_142920e1e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2b0d0;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x30);
  puVar1[6] = lVar2;
  puVar1[8] = 0;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x40);
    }
                    /* WARNING: Could not recover jumptable at 0x000142920eab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,puVar1 + 8);
    return;
  }
  return;
}



// FUNCTION 142920eb6 FUN_142920eb6 body=179 status=ok
// SIG undefined FUN_142920eb6(void)

void FUN_142920eb6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f2b0d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x30);
  p_Var1[1].Type = (short)lVar3;
  p_Var1[1].CreatorBackTraceIndex = (short)((ulonglong)lVar3 >> 0x10);
  *(int *)&p_Var1[1].field_0x4 = (int)((ulonglong)lVar3 >> 0x20);
  p_Var1[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x40);
    }
    (**(code **)*puVar4)(puVar4,&p_Var1[1].ProcessLocksList);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142920f59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142920f6a FUN_142920f6a body=43 status=ok
// SIG undefined FUN_142920f6a(void)

undefined8 FUN_142920f6a(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(param_1 + 0x30);
  plVar3 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  return 0;
}



// FUNCTION 142920f96 FUN_142920f96 body=43 status=ok
// SIG undefined FUN_142920f96(void)

undefined8 FUN_142920f96(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(param_1 + 0x30);
  plVar3 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  return 1;
}



// FUNCTION 142920ffa FUN_142920ffa body=12 status=ok
// SIG undefined FUN_142920ffa(void)

void FUN_142920ffa(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142921003. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142921006 FUN_142921006 body=83 status=ok
// SIG undefined FUN_142921006(void)

undefined8 * FUN_142921006(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_149f2b170;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142921059 FUN_142921059 body=928 status=ok
// SIG undefined FUN_142921059(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142921059(void)

{
  uint uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = "UnixSocketPath";
  local_38 = 0xe;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  DAT_14c990b40 = (ulonglong)uVar1;
  local_40._0_1_ = 1;
  local_48 = 0x2000;
  FUN_140bd5914(&DAT_14c990b48,L"http.CurlSetResponseCodeWhenMarkAsCompleted",&local_40,
                L"Set response code in when mark as completed, instead of setting it in FinishRequest."
               );
  atexit(FUN_1429159e0);
  local_40._0_1_ = 0;
  local_48 = 0x2000;
  FUN_140bd5914(&DAT_14c990b60,L"http.CurlReadContentLengthWhenFinish",&local_40,
                L"Whether to read content length from curl handle when finish request");
  atexit(FUN_142915a25);
  local_40._0_1_ = 0;
  local_48 = 0;
  FUN_140bd5914(&DAT_14c990b78,L"http.CurlAllowHTTP2",&local_40,
                L"Whether to allow HTTP/2 for curl requests");
  atexit(FUN_142915a6a);
  _DAT_14c990b90 = 1;
  DAT_14c990b92 = 1;
  _DAT_14c990b94 = 0;
  ram0x00014c990b9c = 0;
  _DAT_14c990ba4 = 0x1000000000000;
  DAT_14c990bac = 0;
  atexit((_func_5014 *)&LAB_142919601);
  local_40._0_1_ = 1;
  local_48 = 0x2000;
  FUN_140bd5914(&DAT_14c990bf8,L"http.DefaultUserAgentCommentsEnabled",&local_40,
                L"Whether comments are supported in the defualt user agent string");
  atexit(FUN_14291a847);
  local_40._0_1_ = 1;
  local_48 = 0x2000;
  FUN_140bd5914(&DAT_14c990c10,L"http.LogJsonResponseOnly",&local_40,
                L"When log response payload, log json content only");
  atexit(FUN_14291a88c);
  local_40 = (char *)CONCAT71(local_40._1_7_,1);
  local_48 = 0x2000;
  FUN_140bd5914(&DAT_14c990bd0,L"http.SetGeneralFailureReasonFromCommonCode",&local_40,
                L"Temporary hotfixable cvar: when enabled, set general failure reason from common code instead."
               );
  atexit(FUN_14291a8d1);
  local_40 = (char *)CONCAT44(local_40._4_4_,100);
  local_48 = 0x2000;
  FUN_14078dbce(&DAT_14c990d48,L"http.CurlEventLoopEnableChance",&local_40,
                L"Enable chance of event loop, from 0 to 100");
  atexit(FUN_14291ae7c);
  FUN_140056680(&local_40,&DAT_149dfb77a);
  local_48 = 0x2000;
  FUN_140f510cc(&DAT_14c990d60,L"http.UrlPatternsToLogResponse",&local_40,
                L"List of url patterns to log headers and json content: \"epicgames.com unrealengine.com ...\""
               );
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_14291aec1);
  FUN_140056680(&local_40,&DAT_149dfb77a);
  local_48 = 0x2000;
  FUN_140f510cc(&DAT_14c990d78,L"http.UrlPatternsToMockFailure",&local_40,
                L"List of url patterns to mock failure with response code, 0 indicates ConnectionError: \"epicgames.com->0 unrealengine.com->503 ...\""
               );
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_14291af06);
  local_40 = (char *)0x8000000149f2855e;
  local_2c = 4;
  local_38 = FUN_14577453c();
  local_34 = 1;
  FUN_146283a2c(&local_40);
  local_40 = (char *)CONCAT71(local_40._1_7_,1);
  local_48 = 0;
  FUN_140bd5914(&DAT_14c990da0,L"Http.RetrySystemNonGameThreadSupportEnabled",&local_40,
                L"Enable retry system non-game thread support");
  atexit(FUN_14291bcea);
  DAT_14c990e0c = 0x43ad3d;
  local_40 = (char *)CONCAT44(local_40._4_4_,0x7fffffff);
  local_48 = 0x2000;
  FUN_14078dbce(&DAT_14c990e50,L"http.MaxConcurrentRequests",&local_40,
                L"The max number of http requests to run in parallel");
  atexit(FUN_14291d1c6);
  local_48 = 0;
  FUN_141471170(&DAT_14c990e68,L"http.ThreadPriority",&DAT_14c75ef74,
                L"Thread priority of the Http Manager thread: 0=Lowest, 1=BelowNormal, 2=SlightlyBelowNormal, 3=Normal, 4=AboveNormal\nNote that this is switchable at runtime"
               );
  atexit(FUN_14291d20b);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429213fe FUN_1429213fe body=1275 status=ok
// SIG undefined FUN_1429213fe(void)

undefined8 * FUN_1429213fe(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_108 [32];
  longlong local_e8 [2];
  undefined2 *local_d8;
  undefined8 uStack_d0;
  undefined2 *local_c8;
  undefined8 uStack_c0;
  undefined2 *local_b8;
  undefined8 uStack_b0;
  undefined2 *local_a8;
  undefined8 uStack_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  undefined2 *local_60;
  undefined8 uStack_58;
  undefined2 *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) &&
     (cVar1 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar1 != '\0')) {
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = (undefined2 *)0x0;
    uStack_90 = 0;
    local_a8 = (undefined2 *)0x0;
    uStack_a0 = 0;
    local_b8 = (undefined2 *)0x0;
    uStack_b0 = 0;
    local_c8 = (undefined2 *)0x0;
    uStack_c0 = 0;
    local_68 = 0x100;
    local_60 = (undefined2 *)0x0;
    uStack_58 = 0;
    local_50 = (undefined2 *)0x0;
    uStack_48 = 0;
    local_40 = 0;
    local_3c = 0xffffffffbf800000;
    local_34 = 0xffffffff;
    FUN_140056680(local_e8,L"APIKeyET");
    if ((int)param_3[1] == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)*param_3;
    }
    (**(code **)(*plVar3 + 0x58))(plVar3,&local_d8,local_e8,1);
    if (local_c8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_c8 = local_d8;
    uStack_c0 = uStack_d0;
    local_d8 = (undefined2 *)0x0;
    uStack_d0 = 0;
    if (local_e8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(local_e8,L"APIServerET");
    if ((int)param_3[1] == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)*param_3;
    }
    (**(code **)(*plVar3 + 0x58))(plVar3,&local_d8,local_e8,1);
    if (local_b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_b8 = local_d8;
    uStack_b0 = uStack_d0;
    local_d8 = (undefined2 *)0x0;
    uStack_d0 = 0;
    if (local_e8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(local_e8,L"APIEndpointET");
    if ((int)param_3[1] == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)*param_3;
    }
    (**(code **)(*plVar3 + 0x58))(plVar3,&local_d8,local_e8,1);
    if (local_a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_a8 = local_d8;
    uStack_a0 = uStack_d0;
    local_d8 = (undefined2 *)0x0;
    uStack_d0 = 0;
    if (local_e8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(local_e8,L"AppVersionET");
    if ((int)param_3[1] == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)*param_3;
    }
    (**(code **)(*plVar3 + 0x58))(plVar3,&local_d8,local_e8,0);
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_78 = local_d8;
    uStack_70 = uStack_d0;
    local_d8 = (undefined2 *)0x0;
    uStack_d0 = 0;
    if (local_e8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(local_e8,L"UseLegacyProtocol");
    if ((int)param_3[1] == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)*param_3;
    }
    (**(code **)(*plVar3 + 0x58))(plVar3,&local_d8,local_e8,0);
    puVar4 = local_d8;
    if ((int)uStack_d0 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    uVar2 = FUN_14052c20c(puVar4);
    local_68 = CONCAT11(local_68._1_1_,uVar2);
    if (local_d8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_e8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(local_e8,L"APIUnixSocketPathET");
    if ((int)param_3[1] == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = (longlong *)*param_3;
    }
    (**(code **)(*plVar3 + 0x58))(plVar3,&local_d8,local_e8,0);
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_98 = local_d8;
    uStack_90 = uStack_d0;
    local_d8 = (undefined2 *)0x0;
    uStack_d0 = 0;
    if (local_e8[0] != 0) {
      FUN_1400020a8();
    }
    if ((int)uStack_70 < 2) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c868710) && (FUN_144b3d300(&DAT_14c868710), DAT_14c868710 == -1))
      {
        FUN_145c3c252(&DAT_14c8686c8);
        DAT_14c868708 = &DAT_14c8686c8;
        atexit(thunk_FUN_14626bbac);
        _Init_thread_footer(&DAT_14c868710);
      }
      FUN_14626b538(DAT_14c868708,&local_d8,4);
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_78 = local_d8;
      uStack_70 = uStack_d0;
    }
    if ((char)local_68 == '\0') {
      FUN_140056680(local_e8,L"AppEnvironment");
      if ((int)param_3[1] == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)*param_3;
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,&local_d8,local_e8,1);
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_60 = local_d8;
      uStack_58 = uStack_d0;
      local_d8 = (undefined2 *)0x0;
      uStack_d0 = 0;
      if (local_e8[0] != 0) {
        FUN_1400020a8();
      }
      FUN_140056680(local_e8,L"UploadType");
      if ((int)param_3[1] == 0) {
        param_3 = (longlong *)0x0;
      }
      else {
        param_3 = (longlong *)*param_3;
      }
      (**(code **)(*param_3 + 0x58))(param_3,&local_d8,local_e8,1);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_50 = local_d8;
      uStack_48 = uStack_d0;
      local_d8 = (undefined2 *)0x0;
      uStack_d0 = 0;
      if (local_e8[0] != 0) {
        FUN_1400020a8();
      }
    }
    (**(code **)(*param_1 + 0x48))(param_1,param_2,&local_c8);
    FUN_146b24b04(&local_c8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_108);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1429218ff FUN_1429218ff body=69 status=ok
// SIG undefined FUN_1429218ff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429218ff(void)

{
  _DAT_14c991020 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142921941. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c991028,1);
  return;
}



// FUNCTION 142921944 FUN_142921944 body=69 status=ok
// SIG undefined FUN_142921944(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142921944(void)

{
  _DAT_14c991030 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142921986. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c991038,1);
  return;
}



// FUNCTION 14292198a FUN_14292198a body=626 status=ok
// SIG undefined FUN_14292198a(void)

void FUN_14292198a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  int iVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a0;
  uint local_98;
  LPCRITICAL_SECTION local_90;
  longlong local_88;
  LARGE_INTEGER local_80;
  undefined5 uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  QueryPerformanceCounter(&local_80);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x58);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x10) != 0) {
    local_90 = lpCriticalSection;
    FUN_140212f8e(&local_88);
    iVar1 = *(int *)(param_1 + 0x10);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 8);
      lVar9 = 0;
      do {
        uVar8 = local_88 - *(longlong *)(lVar2 + 0x10 + lVar9);
        if ((longlong)uVar8 < 0) {
          uVar8 = 0;
        }
        else if (1.0 < (double)(longlong)uVar8 / 864000000000.0) {
          uVar8 = 0xc929d12980;
        }
        iVar7 = (int)(uVar8 / 10000000);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar8 / 10000000;
        local_a0 = iVar7 + SUB164(auVar4 * ZEXT816(0x444444444444445),8) * -0x3c;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar8 / 600000000;
        local_a8 = (int)(uVar8 / 600000000) + SUB164(auVar5 * ZEXT816(0x444444444444445),8) * -0x3c;
        local_98 = (uint)((int)uVar8 + iVar7 * -10000000) / 10000;
        FUN_1407bf796(&local_80,0xe,"+%02i:%02i:%02i.%03i",
                      (int)(uVar8 / 36000000000) + (int)((uVar8 / 36000000000) / 0x18) * -0x18);
        lVar6 = (longlong)*(int *)(lVar2 + 0x18 + lVar9);
        lVar3 = *(longlong *)(param_1 + 0x18);
        *(ulonglong *)(lVar3 + 5 + lVar6) = CONCAT53(uStack_78,local_80.s.HighPart._1_3_);
        *(ulonglong *)(lVar3 + lVar6) = CONCAT35(local_80.s.HighPart._1_3_,local_80.QuadPart._0_5_);
        lVar9 = lVar9 + 0x20;
      } while ((longlong)iVar1 * 0x20 != lVar9);
    }
    QueryPerformanceCounter(&local_80);
    iVar1 = *(int *)(param_1 + 0x14);
    FUN_146b27938(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x14) != 0)) {
      FUN_146b27f7e(param_1 + 8,0);
    }
    lpCriticalSection = local_90;
    iVar1 = *(int *)(param_1 + 0x50);
    *(uint *)(param_1 + 0x50) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x54) < iVar1 + 1U) {
      FUN_146b28064(param_1 + 0x48,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar9 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined8 *)(lVar2 + lVar9) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(lVar2 + 0xc + lVar9) = *(undefined4 *)(param_1 + 0x24);
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_146b24cac(param_1 + 0x18,*(undefined4 *)(param_1 + 4));
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142921cb8 FUN_142921cb8 body=47 status=ok
// SIG undefined FUN_142921cb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142921cb8(void)

{
  _DAT_14c991138 = 0;
  if (DAT_14c991130 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&DAT_14c9910f0);
  return;
}



// FUNCTION 142921d2b FUN_142921d2b body=69 status=ok
// SIG undefined FUN_142921d2b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142921d2b(void)

{
  _DAT_14c991190 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142921d6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c991198,1);
  return;
}



// FUNCTION 142921d70 FUN_142921d70 body=69 status=ok
// SIG undefined FUN_142921d70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142921d70(void)

{
  _DAT_14c9911a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142921db2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9911a8,1);
  return;
}



// FUNCTION 142921db6 FUN_142921db6 body=2246 status=ok
// SIG undefined FUN_142921db6(void)

LARGE_INTEGER * FUN_142921db6(undefined8 param_1,LARGE_INTEGER *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  LARGE_INTEGER LVar10;
  ushort uVar11;
  undefined4 uVar12;
  undefined2 *puVar13;
  ushort uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  LARGE_INTEGER local_a0;
  undefined8 local_98;
  undefined8 local_90;
  int local_88;
  void *local_80;
  uint local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_3 + 8) < 2) {
    param_2->QuadPart = 0;
    param_2[1].QuadPart = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_c8);
  }
  plVar7 = (longlong *)FUN_14001cc68(0x290,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149f2c390;
  plVar7[2] = (longlong)&PTR_FUN_149f2c050;
  plVar7[3] = 0;
  plVar7[4] = 0;
  uVar8 = FUN_1401cb356();
  FUN_145aa41ca(plVar7 + 5,L"FAnalyticsProviderET",0,uVar8);
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[2] = (longlong)&PTR_FUN_149f2bb40;
  plVar7[5] = (longlong)&PTR_FUN_149f2bc80;
  *(undefined1 *)(plVar7 + 10) = 0;
  FUN_146b2513a(plVar7 + 0xb,param_3);
  plVar7[0x1e] = 0;
  plVar7[0x1f] = 0;
  plVar7[0x20] = 0;
  plVar7[0x21] = 0;
  *(undefined4 *)(plVar7 + 0x22) = 0x42700000;
  uVar19 = -(uint)(*(float *)(param_3 + 0x8c) < 0.0);
  *(uint *)((longlong)plVar7 + 0x114) =
       ~uVar19 & (uint)*(float *)(param_3 + 0x8c) | uVar19 & 0x42700000;
  *(undefined1 *)(plVar7 + 0x23) = 1;
  QueryPerformanceCounter(&local_a0);
  plVar7[0x24] = (longlong)
                 ((double)*(float *)((longlong)plVar7 + 0x114) +
                 (double)local_a0.QuadPart * DAT_14c83f420 + 16777216.0);
  *(undefined1 *)(plVar7 + 0x25) = 0;
  uVar12 = 0;
  if (*(char *)(param_3 + 0x60) == '\0') {
    uVar12 = *(undefined4 *)(param_3 + 0x94);
  }
  FUN_146b24bf2(plVar7 + 0x26,*(undefined4 *)(param_3 + 0x90),uVar12);
  plVar7[0x3a] = 0;
  plVar7[0x48] = 0;
  *(undefined4 *)(plVar7 + 0x49) = 0;
  plVar7[0x36] = 0;
  plVar7[0x37] = 0;
  plVar7[0x38] = 0;
  plVar7[0x40] = 0;
  plVar7[0x41] = 0;
  plVar7[0x42] = 0;
  plVar7[0x43] = 0;
  plVar7[0x44] = 0;
  plVar7[0x45] = 0;
  *(undefined8 *)((longlong)plVar7 + 0x24c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar7 + 0x254) = 0;
  plVar7[0x4c] = 0;
  *(undefined4 *)(plVar7 + 0x4d) = 0;
  plVar7[0x4e] = 0;
  plVar7[0x4f] = 0;
  *(undefined4 *)(plVar7 + 0x50) = 0;
  if ((int)plVar7[0xc] < 2) {
    if ((int)plVar7[0xc] == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    else {
      puVar13 = (undefined2 *)plVar7[0xb];
    }
    FUN_140033559(".\\Runtime/Analytics/AnalyticsET/Private/IAnalyticsProviderET.cpp",0xf4,
                  L"AnalyticsET: APIKey (%s) cannot be empty!",puVar13);
  }
  iVar4 = *(int *)(param_3 + 0x48);
  local_78 = local_78 & 0xffffff00;
  local_90._0_5_ = CONCAT14(1,iVar4);
  plVar9 = (longlong *)FUN_146b28305();
  LVar10.QuadPart = (LONGLONG)(plVar9 + 2);
  local_a0.QuadPart = LVar10.QuadPart;
  local_98 = plVar9;
  FUN_146b283b2(&local_a0,LVar10.QuadPart);
  if (plVar9 == (longlong *)0x0) {
    plVar7[0x40] = 0x10;
    plVar16 = (longlong *)plVar7[0x41];
    if (plVar16 != (longlong *)0x0) {
      plVar7[0x41] = 0;
LAB_14292209a:
      LOCK();
      plVar9 = plVar16 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar16)();
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x00014292208a:
        if (iVar3 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    ((LARGE_INTEGER *)(plVar7 + 0x40))->QuadPart = (LONGLONG)LVar10;
    plVar16 = (longlong *)plVar7[0x41];
    if (plVar9 == plVar16) {
      LOCK();
      plVar16 = plVar9 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar9)();
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar16 = plVar9;
        goto joined_r0x00014292208a;
      }
    }
    else {
      plVar7[0x41] = (longlong)plVar9;
      if (plVar16 != (longlong *)0x0) goto LAB_14292209a;
    }
  }
  plVar9 = local_98;
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_98 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_98)();
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
    }
  }
  if (iVar4 == 0) goto LAB_14292233e;
  local_a0.QuadPart = 0;
  iVar4 = *(int *)(param_3 + 0x48);
  uVar8 = *(undefined8 *)(param_3 + 0x40);
  local_98 = (longlong *)CONCAT44(local_98._4_4_,iVar4);
  if (iVar4 == 0) {
    local_98 = (longlong *)0x0;
  }
  else {
    FUN_140b856de(&local_a0,iVar4,0);
    FUN_140b8566a(local_a0.QuadPart,uVar8,iVar4);
  }
  local_90 = plVar7[0xd];
  local_88 = (int)plVar7[0xe] + -1;
  if ((int)plVar7[0xe] == 0) {
    local_88 = 0;
  }
  FUN_141306ffc(&local_80);
  if ((longlong)(int)local_98 != 0) {
    LVar10 = local_a0;
LAB_14292220d:
    if (*(uint *)(LVar10.QuadPart + 8) == local_78) {
      if (1 < (int)local_78) {
        lVar17 = 0;
        do {
          uVar14 = *(ushort *)(*(longlong *)LVar10 + lVar17);
          uVar15 = (ulonglong)uVar14;
          uVar11 = *(ushort *)((longlong)local_80 + lVar17);
          if (uVar14 == uVar11) {
            if (uVar14 == 0) break;
          }
          else {
            if (0x7f < (uVar11 | uVar14)) goto LAB_142922262;
            uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
            uVar18 = (ulonglong)uVar11;
            uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
            if ((&DAT_149e05da0)[uVar15] != (&DAT_149e05da0)[uVar18]) goto LAB_142922262;
          }
          lVar17 = lVar17 + 2;
        } while( true );
      }
    }
    else if (*(uint *)(LVar10.QuadPart + 8) + local_78 != 1) goto LAB_14292227c;
    goto LAB_142922170;
  }
LAB_14292215e:
  FUN_14127e8fc(&local_a0,&local_80,0);
LAB_142922170:
  plVar9 = (longlong *)FUN_14001cc68(0x28,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_149f2c3d0;
  ((LARGE_INTEGER *)(plVar9 + 2))->QuadPart = (LONGLONG)local_a0;
  local_a0.QuadPart = 0;
  *(int *)(plVar9 + 3) = (int)local_98;
  *(undefined4 *)((longlong)plVar9 + 0x1c) = local_98._4_4_;
  local_98 = (longlong *)0x0;
  *(undefined4 *)(plVar9 + 4) = 0;
  if (plVar9 == (longlong *)0x0) {
    plVar7[0x42] = 0x10;
    plVar16 = (longlong *)plVar7[0x43];
    if (plVar16 != (longlong *)0x0) {
      plVar7[0x43] = 0;
LAB_1429222cf:
      LOCK();
      plVar2 = plVar16 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      if (plVar9 != (longlong *)0x0) goto LAB_1429222f3;
    }
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    plVar7[0x42] = (longlong)(plVar9 + 2);
    plVar16 = (longlong *)plVar7[0x43];
    if (plVar9 == plVar16) {
      LOCK();
      plVar16 = plVar9 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
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
    else {
      plVar7[0x43] = (longlong)plVar9;
      if (plVar16 != (longlong *)0x0) goto LAB_1429222cf;
    }
LAB_1429222f3:
    LOCK();
    plVar16 = plVar9 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
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
  if (local_80 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_a0.QuadPart,(ulonglong)local_98 & 0xffffffff);
  if ((longlong *)local_a0.QuadPart != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14292233e:
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar6 = FUN_14054d46e(&DAT_14c846b20,L"TELEMETRYTESTING");
  if (cVar6 != '\0') {
    *(undefined1 *)(plVar7 + 0x23) = 0;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar6 = FUN_14054d46e(&DAT_14c846b20,L"ANALYTICSDISABLECACHING");
  if (cVar6 != '\0') {
    *(undefined1 *)(plVar7 + 0x23) = 0;
  }
  local_a0.QuadPart = 0;
  uVar19 = *(uint *)(param_3 + 0x58);
  pvVar5 = *(void **)(param_3 + 0x50);
  local_98 = (longlong *)CONCAT44(local_98._4_4_,uVar19);
  if ((longlong)(int)uVar19 == 0) {
    local_98 = (longlong *)(ulonglong)uVar19;
  }
  else {
    FUN_1446dd670(&local_a0,uVar19,0);
    memcpy((void *)local_a0,pvVar5,(longlong)(int)uVar19 * 2);
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_a8 = 0;
  FUN_14063337c(&DAT_14c846b20,L"ANALYTICSAPPVERSION=",&local_a0,0);
  iVar4 = (int)local_98;
  uVar8 = FUN_145c581c1();
  if (iVar4 < 2) {
    FUN_140056680(&local_80,uVar8);
  }
  else {
    local_a8 = local_a8 & 0xffffffff00000000;
    FUN_140807d8e(&local_a0,&local_80,L"%VERSION%",uVar8);
  }
  if (plVar7[0x15] != 0) {
    FUN_1400020a8();
  }
  plVar7[0x15] = (longlong)local_80;
  local_80 = (void *)0x0;
  *(uint *)(plVar7 + 0x16) = local_78;
  *(undefined4 *)((longlong)plVar7 + 0xb4) = local_74;
  if ((int)plVar7[0x10] < 2) {
    FUN_14020fad6(plVar7 + 0xf,L"datarouter/api/v1/public/data");
  }
  if ((char)plVar7[0x17] == '\0') {
    uVar19 = *(uint *)(param_3 + 0x70);
    if ((int)uVar19 < 2) {
      FUN_140056680(&local_80,L"datacollector-binary");
    }
    else {
      local_80 = (void *)0x0;
      pvVar5 = *(void **)(param_3 + 0x68);
      local_78 = uVar19;
      FUN_1446dd670(&local_80,(ulonglong)uVar19,0);
      memcpy(local_80,pvVar5,(ulonglong)uVar19 * 2);
    }
    iVar4 = local_78 - 1;
    if (local_78 == 0) {
      iVar4 = 0;
    }
    FUN_1402980a2(plVar7 + 0x18,local_80,iVar4);
    if (local_80 != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar19 = *(uint *)(param_3 + 0x80);
    if ((int)uVar19 < 2) {
      FUN_140056680(&local_80,L"eteventstream");
    }
    else {
      local_80 = (void *)0x0;
      pvVar5 = *(void **)(param_3 + 0x78);
      local_78 = uVar19;
      FUN_1446dd670(&local_80,(ulonglong)uVar19,0);
      memcpy(local_80,pvVar5,(ulonglong)uVar19 * 2);
    }
    iVar4 = local_78 - 1;
    if (local_78 == 0) {
      iVar4 = 0;
    }
    FUN_1402980a2(plVar7 + 0x1a,local_80,iVar4);
    if (local_80 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  LVar10.QuadPart = (LONGLONG)(plVar7 + 2);
  if ((void *)local_a0.QuadPart != (void *)0x0) {
    FUN_1400020a8();
  }
  local_a0.QuadPart = LVar10.QuadPart;
  local_98 = plVar7;
  FUN_146b28224(&local_a0,LVar10.QuadPart);
  plVar9 = local_98;
  param_2->QuadPart = (LONGLONG)LVar10;
  param_2[1].QuadPart = (LONGLONG)plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_98 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_98)(local_98);
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
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
LAB_142922262:
  if (uVar14 == uVar11) goto LAB_142922170;
LAB_14292227c:
  LVar10.QuadPart = LVar10.QuadPart + 0x10;
  if ((longlong *)LVar10.QuadPart ==
      (longlong *)((longlong)(int)local_98 * 0x10 + local_a0.QuadPart)) goto LAB_14292215e;
  goto LAB_14292220d;
}



// FUNCTION 14292267e FUN_14292267e body=345 status=ok
// SIG undefined FUN_14292267e(void)

undefined8 FUN_14292267e(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  double dVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_78 [32];
  undefined8 local_58;
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14291c86c(*(undefined8 *)(param_1 + 0x1d8),0,0,0);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x160);
  EnterCriticalSection(lpCriticalSection);
  QueryPerformanceCounter(&local_48);
  dVar4 = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
  iVar2 = *(int *)(param_1 + 0x158);
  if (iVar2 < 1) {
    EnterCriticalSection(lpCriticalSection);
    if (*(int *)(param_1 + 0x118) < 1) {
      iVar3 = *(int *)(param_1 + 0x158);
      LeaveCriticalSection(lpCriticalSection);
      if (iVar3 < 1) goto LAB_1429227a8;
    }
    else {
      LeaveCriticalSection(lpCriticalSection);
    }
    if (dVar4 < *(double *)(param_1 + 0xf8)) goto LAB_1429227a8;
  }
  if ((DAT_14c872be0 != DAT_14c9911b8) || (DAT_14c75ef88 == '\0')) {
    FUN_1429227d8(param_1 + -0x18);
    DAT_14c9911b8 = DAT_14c872be0;
    if ((iVar2 < 1) && (dVar1 = *(double *)(param_1 + 0xf8), dVar1 <= dVar4)) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (dVar4 - dVar1) / (double)*(float *)(param_1 + 0xec);
      auVar5 = roundpd(auVar5,auVar5,1);
      *(double *)(param_1 + 0xf8) =
           (auVar5._0_8_ + 1.0) * (double)*(float *)(param_1 + 0xec) + dVar1;
    }
  }
LAB_1429227a8:
  LeaveCriticalSection(lpCriticalSection);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429227d8 FUN_1429227d8 body=1855 status=ok
// SIG undefined FUN_1429227d8(void)

void FUN_1429227d8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_108 [32];
  longlong local_e8 [2];
  undefined8 local_d8;
  int local_d0;
  undefined8 local_c8;
  int local_c0;
  undefined8 local_b8;
  int local_b0;
  undefined8 local_a8;
  int local_a0;
  undefined8 local_98;
  int local_90;
  undefined8 local_88;
  int local_80;
  code *local_78;
  int local_70;
  undefined4 local_6c;
  longlong *local_68;
  int local_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x178);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x130) < 1) {
    iVar10 = *(int *)(param_1 + 0x170);
    LeaveCriticalSection(lpCriticalSection);
    if (iVar10 < 1) goto LAB_142922891;
  }
  else {
    LeaveCriticalSection(lpCriticalSection);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  local_48 = &DAT_149f297c8;
  local_40 = 4;
  local_3c = 0;
  uVar7 = FUN_14001a6c0(&local_48,1);
  cVar6 = FUN_14011feae(&DAT_14c874628,uVar7);
  if (cVar6 != '\0') {
    FUN_146b25080(param_1 + 0x120,&local_48);
    local_58 = (void *)0x0;
    local_50 = *(int *)(param_1 + 0x70);
    lVar11 = (longlong)local_50;
    pvVar4 = *(void **)(param_1 + 0x68);
    if (lVar11 == 0) {
      local_4c = 0;
    }
    else {
      FUN_1446dd670(&local_58,local_50,0);
      memcpy(local_58,pvVar4,lVar11 * 2);
    }
    local_88 = *(undefined8 *)(param_1 + 0xf0);
    local_80 = *(int *)(param_1 + 0xf8) + -1;
    if (*(int *)(param_1 + 0xf8) == 0) {
      local_80 = 0;
    }
    FUN_141639c3a(&local_78);
    FUN_140ba7826(&local_68,L"?SessionID=",&local_78);
    iVar10 = local_60 + -1;
    if (local_60 == 0) {
      iVar10 = 0;
    }
    FUN_1400020e8(&local_58,local_68,iVar10);
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
    local_98 = *(undefined8 *)(param_1 + 0x48);
    local_90 = *(int *)(param_1 + 0x50) + -1;
    if (*(int *)(param_1 + 0x50) == 0) {
      local_90 = 0;
    }
    FUN_141639c3a(&local_78);
    FUN_140ba7826(&local_68,L"&AppID=",&local_78);
    iVar10 = local_60 + -1;
    if (local_60 == 0) {
      iVar10 = 0;
    }
    FUN_1400020e8(&local_58,local_68,iVar10);
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
    local_a8 = *(undefined8 *)(param_1 + 0x98);
    local_a0 = *(int *)(param_1 + 0xa0) + -1;
    if (*(int *)(param_1 + 0xa0) == 0) {
      local_a0 = 0;
    }
    FUN_141639c3a(&local_78);
    FUN_140ba7826(&local_68,L"&AppVersion=",&local_78);
    iVar10 = local_60 + -1;
    if (local_60 == 0) {
      iVar10 = 0;
    }
    FUN_1400020e8(&local_58,local_68,iVar10);
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
    local_b8 = *(undefined8 *)(param_1 + 0xe0);
    local_b0 = *(int *)(param_1 + 0xe8) + -1;
    if (*(int *)(param_1 + 0xe8) == 0) {
      local_b0 = 0;
    }
    FUN_141639c3a(&local_78);
    FUN_140ba7826(&local_68,L"&UserID=",&local_78);
    iVar10 = local_60 + -1;
    if (local_60 == 0) {
      iVar10 = 0;
    }
    FUN_1400020e8(&local_58,local_68,iVar10);
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
    local_c8 = *(undefined8 *)(param_1 + 0xb0);
    local_c0 = *(int *)(param_1 + 0xb8) + -1;
    if (*(int *)(param_1 + 0xb8) == 0) {
      local_c0 = 0;
    }
    FUN_141639c3a(&local_78);
    FUN_140ba7826(&local_68,L"&AppEnvironment=",&local_78);
    iVar10 = local_60 + -1;
    if (local_60 == 0) {
      iVar10 = 0;
    }
    FUN_1400020e8(&local_58,local_68,iVar10);
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
    local_d8 = *(undefined8 *)(param_1 + 0xc0);
    local_d0 = *(int *)(param_1 + 200) + -1;
    if (*(int *)(param_1 + 200) == 0) {
      local_d0 = 0;
    }
    FUN_141639c3a(&local_78);
    FUN_140ba7826(&local_68,L"&UploadType=",&local_78);
    iVar10 = local_60 + -1;
    if (local_60 == 0) {
      iVar10 = 0;
    }
    FUN_1400020e8(&local_58,local_68,iVar10);
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_142923372(param_1,&local_68);
    FUN_140056680(&local_78,L"application/json; charset=utf-8");
    FUN_140056680(local_e8,L"Content-Type");
    (**(code **)(*local_68 + 0xb0))(local_68,local_e8,&local_78);
    if (local_e8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_146b25444(param_1 + 0x260,&local_78);
    FUN_140056680(local_e8,L"User-Agent");
    (**(code **)(*local_68 + 0xb0))(local_68,local_e8,&local_78);
    if (local_e8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
    iVar10 = local_50 + -1;
    if (local_50 == 0) {
      iVar10 = 0;
    }
    iVar3 = *(int *)(param_1 + 0x60);
    iVar8 = iVar10 + 1 + (uint)((longlong)iVar3 == 0);
    local_78 = (code *)0x0;
    pvVar4 = *(void **)(param_1 + 0x58);
    local_70 = iVar3;
    if (iVar8 == 0 && iVar3 == 0) {
      local_6c = 0;
    }
    else {
      if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar8 + iVar3);
      }
      FUN_1446dd670(&local_78,iVar8 + iVar3,0);
      if (iVar3 != 0) {
        memcpy(local_78,pvVar4,(longlong)iVar3 * 2);
      }
    }
    FUN_1401aebe8(&local_78,local_58,iVar10);
    (**(code **)(*local_68 + 0x68))(local_68,&local_78);
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_78,&DAT_149f280e2);
    (**(code **)(*local_68 + 0x60))(local_68,&local_78);
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*local_68 + 0x80))(local_68,&local_48);
    if (1 < *(int *)(param_1 + 0x80)) {
      (**(code **)(*local_68 + 0x78))(local_68,DAT_14c991010,param_1 + 0x78);
    }
    if (*(char *)(param_1 + 0x118) == '\0') {
      uVar9 = (**(code **)(*local_68 + 0xf0))(local_68);
      local_78 = FUN_142924722;
      local_70 = 0;
      FUN_146b254b6(uVar9,param_1);
    }
    (**(code **)(*local_68 + 0xe8))(local_68);
    plVar5 = (longlong *)CONCAT44(uStack_5c,local_60);
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
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_142922891:
  if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142922f1a FUN_142922f1a body=393 status=ok
// SIG undefined FUN_142922f1a(void)

void FUN_142922f1a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f2bb40;
  param_1[3] = &PTR_FUN_149f2bc80;
  *(undefined1 *)(param_1 + 0x23) = 1;
  FUN_142923298();
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0x42);
  plVar3 = (longlong *)param_1[0x41];
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
  plVar3 = (longlong *)param_1[0x3f];
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
  if (param_1[0x36] != 0) {
    plVar3 = param_1 + 0x3a;
    if ((longlong *)param_1[0x38] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x38];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FUN_146b282cb(param_1[0x34],*(undefined4 *)(param_1 + 0x35));
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_146b253bc(param_1 + 0x24);
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_146b24b04(param_1 + 9);
  plVar3 = (longlong *)param_1[7];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_145bfbed6(param_1 + 3);
  *param_1 = &PTR_FUN_149f2c050;
  FUN_146b17e4e(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1429230a4 FUN_1429230a4 body=499 status=ok
// SIG undefined FUN_1429230a4(void)

/* WARNING: Removing unreachable block (ram,0x00014292320a) */

undefined8 FUN_1429230a4(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  uint local_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((char)param_1[8] == '\x01') {
    (**(code **)(*param_1 + 8))(param_1);
  }
  if (param_1 + 0x1e != param_2) {
    if (param_1[0x1e] != 0) {
      FUN_1400020a8();
    }
    param_1[0x1e] = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 0x1f) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xfc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  local_58 = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  local_50 = iVar1;
  if (iVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_146b17e8e(&local_58,iVar1,0);
    FUN_146b17f01(local_58,uVar2,iVar1);
  }
  FUN_1400b22c2(&local_68,"Windows");
  uVar4 = local_50;
  lVar5 = (longlong)(int)local_50;
  local_50 = local_50 + 1;
  if (local_4c < local_50) {
    FUN_146b17dba(&local_58,uVar4);
  }
  lVar3 = local_58;
  lVar5 = lVar5 * 0x30;
  FUN_140056680(&local_48,L"Platform");
  *(longlong *)(lVar3 + lVar5) = local_48;
  *(undefined4 *)(lVar3 + 8 + lVar5) = local_40;
  *(undefined4 *)(lVar3 + 0xc + lVar5) = local_3c;
  *(undefined8 *)(lVar3 + 0x10 + lVar5) = local_68;
  *(undefined4 *)(lVar3 + 0x18 + lVar5) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x1c + lVar5) = local_60._4_4_;
  *(undefined8 *)(lVar3 + 0x20 + lVar5) = 0;
  *(undefined1 *)(lVar3 + 0x28 + lVar5) = 0;
  *(undefined4 *)(lVar3 + 0x2c + lVar5) = 0;
  local_48 = 0;
  local_60 = 0;
  local_68 = 0;
  FUN_140056680(&local_48,L"SessionStart");
  (**(code **)(*param_1 + 0xf0))(param_1,&local_48,&local_58);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_146b17e4e(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 142923298 FUN_142923298 body=216 status=ok
// SIG undefined FUN_142923298(void)

void FUN_142923298(longlong *param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[8] == '\x01') {
    local_38 = 0;
    uStack_30 = 0;
    FUN_140056680(local_48,L"SessionEnd");
    (**(code **)(*param_1 + 0xf0))(param_1,local_48,&local_38);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    FUN_146b17e4e(local_38,uStack_30 & 0xffffffff);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (*(int *)((longlong)param_1 + 0xfc) != 0) {
    FUN_1446f8c06(param_1 + 0x1e,0);
  }
  *(undefined1 *)(param_1 + 8) = 0;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142923372 FUN_142923372 body=1293 status=ok
// SIG undefined FUN_142923372(void)

undefined8 * FUN_142923372(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined8 **local_160;
  longlong local_158;
  undefined1 *local_150;
  undefined8 *local_148;
  undefined8 *local_138;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined8 local_118;
  longlong *local_110;
  undefined1 local_104;
  undefined1 local_100 [4];
  undefined1 local_fc;
  undefined1 local_f0;
  longlong local_e8;
  ulonglong uStack_e0;
  undefined1 local_d8 [16];
  longlong local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 *local_98;
  ulonglong uStack_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  local_98 = &DAT_149f297c8;
  uStack_90 = CONCAT35(uStack_90._5_3_,4);
  uVar6 = FUN_14001a6c0(&local_98,1);
  FUN_14011feae(&DAT_14c874628,uVar6);
  local_148 = &local_12c;
  local_12c = 0x3f80000040000000;
  uStack_124 = 0x3f8000003f000000;
  local_11c = 0x42700000;
  local_150 = local_100;
  local_fc = 0;
  local_158 = param_1 + 0x200;
  local_78 = 0;
  local_70 = 0;
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_168 = &local_e8;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0x80;
  uStack_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_f0 = 0;
  local_104 = 0;
  local_160 = &local_98;
  FUN_146b1f99e(*(undefined8 *)(param_1 + 0x1f0),&local_118);
  *param_2 = local_118;
  param_2[1] = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_110 + 1) = (int)local_110[1] + 1;
    UNLOCK();
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_110 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar1 = (int *)((longlong)local_110 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_110 + 0x10))(local_110);
        }
      }
    }
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  uVar16 = uStack_e0 >> 0x20;
  uStack_e0 = uStack_e0 & 0xffffffff00000000;
  if ((int)uVar16 != 0) {
    FUN_1447a08a2(&local_e8,0);
  }
  uStack_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    FUN_1446efbd8(local_d8,0);
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar16 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar16 != 0) {
    FUN_14472eb64(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  local_138 = param_2;
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar3 = *(int *)(param_1 + 0x238);
  if (iVar3 == 0) {
    uVar17 = 1;
    uVar16 = 0;
    iVar12 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x230);
    if (*(uint **)(param_1 + 0x230) == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 0x220);
    }
    uVar9 = *puVar8;
    if (uVar9 == 0) {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      uVar16 = 0;
      uVar17 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar17 = uVar16;
      }
      iVar12 = 0;
      do {
        if (uVar17 == uVar16) goto LAB_1429236a2;
        iVar12 = iVar12 + 0x20;
        uVar9 = puVar8[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar16 = 0;
      iVar12 = 0;
    }
    uVar17 = (ulonglong)(-uVar9 & uVar9);
    uVar2 = uVar17 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
  }
  if (iVar7 != iVar3) {
    plVar5 = (longlong *)*local_138;
    uVar9 = 0xffffffff;
    do {
      (**(code **)(*plVar5 + 0xb0))
                (plVar5,*(longlong *)(param_1 + 0x210) + (longlong)iVar7 * 0x28,
                 *(longlong *)(param_1 + 0x210) + (longlong)iVar7 * 0x28 + 0x10);
      uVar9 = ~(uint)uVar17 & uVar9;
      puVar8 = *(uint **)(param_1 + 0x230);
      if (*(uint **)(param_1 + 0x230) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0x220);
      }
      iVar4 = *(int *)(param_1 + 0x238);
      iVar7 = (int)uVar16;
      lVar14 = (longlong)iVar7;
      uVar13 = puVar8[lVar14] & uVar9;
      if (uVar13 == 0) {
        iVar10 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar10 = iVar4 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar7) {
          iVar11 = iVar7;
        }
        if (iVar7 < iVar10) {
          lVar15 = 0;
          do {
            uVar13 = puVar8[lVar14 + lVar15 + 1];
            if (uVar13 != 0) {
              uVar16 = (ulonglong)(iVar7 + (int)lVar15 + 1);
              uVar9 = 0xffffffff;
              goto LAB_142923786;
            }
            iVar12 = iVar12 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar11 - lVar14 != lVar15);
          uVar9 = 0xffffffff;
          iVar7 = iVar11;
        }
        uVar16 = (ulonglong)(iVar7 + 1);
        iVar7 = iVar4;
      }
      else {
LAB_142923786:
        uVar17 = (ulonglong)(-uVar13 & uVar13);
        uVar2 = uVar17 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar7) {
          iVar7 = iVar4;
        }
      }
    } while (iVar7 != iVar3);
  }
LAB_1429236a2:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_138;
}



// FUNCTION 142923880 FUN_142923880 body=93 status=ok
// SIG undefined FUN_142923880(void)

void FUN_142923880(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x178);
  do {
    EnterCriticalSection(lpCriticalSection);
    if (*(int *)(param_1 + 0x130) < 1) {
      iVar1 = *(int *)(param_1 + 0x170);
      LeaveCriticalSection(lpCriticalSection);
      if (iVar1 < 1) {
        return;
      }
    }
    else {
      LeaveCriticalSection(lpCriticalSection);
    }
    FUN_1429227d8(param_1);
  } while( true );
}



// FUNCTION 1429238de FUN_1429238de body=374 status=ok
// SIG undefined FUN_1429238de(void)

void FUN_1429238de(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = param_2[1];
  uVar2 = FUN_145c581c1();
  if ((int)lVar3 < 2) {
    FUN_140056680(&local_30);
  }
  else {
    local_38 = 0;
    FUN_140807d8e(param_2,&local_30,L"%VERSION%",uVar2);
  }
  if (&local_30 == param_2) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_30;
    local_30 = 0;
    *(undefined4 *)(param_2 + 1) = local_28;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
  }
  iVar1 = (int)param_1[0x14];
  if (iVar1 == (int)param_2[1]) {
    if (1 < iVar1) {
      lVar3 = 0;
      while( true ) {
        uVar4 = *(ushort *)(param_1[0x13] + lVar3);
        uVar5 = (ulonglong)uVar4;
        uVar6 = *(ushort *)(*param_2 + lVar3);
        if (uVar4 != uVar6) break;
        if (uVar4 == 0) goto LAB_142923a36;
LAB_1429239bd:
        lVar3 = lVar3 + 2;
      }
      if ((uVar6 | uVar4) < 0x80) {
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        uVar7 = (ulonglong)uVar6;
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_1429239bd;
      }
      if (uVar4 != uVar6) goto LAB_1429239f2;
    }
  }
  else if ((int)param_2[1] + iVar1 != 1) {
LAB_1429239f2:
    (**(code **)(*param_1 + 0x20))(param_1);
    if (param_1 + 0x13 != param_2) {
      if (param_1[0x13] != 0) {
        FUN_1400020a8();
      }
      param_1[0x13] = *param_2;
      *param_2 = 0;
      *(int *)(param_1 + 0x14) = (int)param_2[1];
      *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xc);
      param_2[1] = 0;
    }
  }
LAB_142923a36:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142923a56 FUN_142923a56 body=207 status=ok
// SIG undefined FUN_142923a56(void)

void FUN_142923a56(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  char cVar3;
  
  plVar1 = param_1 + 0x1c;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar3 = FUN_14063337c(&DAT_14c846b20,L"ANALYTICSUSERID=",plVar1,0,0);
  if (cVar3 == '\0') {
    (**(code **)(*param_1 + 0x20))(param_1);
    if (plVar1 != param_2) {
      iVar2 = (int)param_2[1];
      _Src = (void *)*param_2;
      *(int *)(param_1 + 0x1d) = iVar2;
      if (iVar2 == 0 && *(int *)((longlong)param_1 + 0xec) == 0) {
        *(undefined4 *)((longlong)param_1 + 0xec) = 0;
      }
      else {
        FUN_1446dd670(plVar1,iVar2);
        if (iVar2 != 0) {
          memcpy((void *)*plVar1,_Src,(longlong)iVar2 * 2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142923b26 FUN_142923b26 body=237 status=ok
// SIG undefined FUN_142923b26(void)

undefined8 FUN_142923b26(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  plVar1 = param_1 + 0x1e;
  iVar2 = (int)param_1[0x1f];
  if (iVar2 == (int)param_2[1]) {
    if (iVar2 < 2) {
      return 1;
    }
    lVar3 = 0;
    while( true ) {
      uVar4 = *(ushort *)(*plVar1 + lVar3);
      uVar5 = (ulonglong)uVar4;
      uVar6 = *(ushort *)(*param_2 + lVar3);
      if (uVar4 != uVar6) break;
      if (uVar4 == 0) {
        return 1;
      }
LAB_142923b7a:
      lVar3 = lVar3 + 2;
    }
    if ((uVar6 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
      uVar7 = (ulonglong)uVar6;
      uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
      if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_142923b7a;
    }
    if (uVar4 == uVar6) {
      return 1;
    }
  }
  else if ((int)param_2[1] + iVar2 == 1) {
    return 1;
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  if (plVar1 != param_2) {
    iVar2 = (int)param_2[1];
    _Src = (void *)*param_2;
    *(int *)(param_1 + 0x1f) = iVar2;
    if (iVar2 == 0 && *(int *)((longlong)param_1 + 0xfc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)*plVar1,_Src,(longlong)iVar2 * 2);
      }
    }
  }
  return 1;
}



// FUNCTION 142923c14 FUN_142923c14 body=2828 status=ok
// SIG undefined FUN_142923c14(void)

/* WARNING: Removing unreachable block (ram,0x000142924641) */

void FUN_142923c14(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined1 auStack_548 [32];
  int local_528;
  undefined4 local_524;
  longlong local_520;
  longlong local_518;
  int local_510;
  undefined4 local_50c;
  longlong local_508;
  undefined8 uStack_500;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  int iStack_4f0;
  int iStack_4ec;
  longlong local_4e8;
  int local_4e0;
  longlong local_4d8;
  int local_4d0;
  longlong local_4c8;
  int local_4c0;
  longlong local_4b8;
  int local_4b0;
  longlong local_4a8;
  int local_4a0;
  longlong local_498 [2];
  code *local_488;
  int local_480;
  longlong local_478 [2];
  longlong *local_468;
  longlong *local_460;
  ulonglong *local_458;
  char local_450;
  longlong local_448 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_548;
  cVar5 = (**(code **)(*param_1 + 0x108))();
  if (cVar5 != '\0') {
    if ((longlong)(int)param_1[0x35] != 0) {
      puVar14 = (undefined8 *)param_1[0x34];
      puVar20 = puVar14 + (longlong)(int)param_1[0x35] * 8;
      do {
        local_468 = (longlong *)((ulonglong)local_468 & 0xffffffffffffff00);
        pcVar4 = (code *)*puVar14;
        plVar9 = puVar14 + 4;
        if ((longlong *)puVar14[2] != (longlong *)0x0) {
          plVar9 = (longlong *)puVar14[2];
        }
        uVar7 = (**(code **)(*plVar9 + 8))();
        (*pcVar4)(uVar7,param_2,param_3);
        puVar14 = puVar14 + 8;
      } while (puVar14 != puVar20);
    }
    if ((char)param_1[0x15] == '\0') {
      lVar15 = *param_2;
      *param_2 = 0;
      iVar16 = (int)param_2[1];
      local_524 = *(undefined4 *)((longlong)param_2 + 0xc);
      param_2[1] = 0;
      local_518 = lVar15;
      local_510 = iVar16;
      local_50c = local_524;
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f));
      iVar11 = 0;
      if ((longlong)(int)param_3[1] != 0) {
        lVar17 = *param_3;
        lVar12 = 0;
        iVar11 = 0;
        do {
          iVar10 = *(int *)(lVar17 + 8 + lVar12);
          iVar19 = *(int *)(lVar17 + 0x18 + lVar12);
          iVar13 = iVar10 + -1;
          if (iVar10 == 0) {
            iVar13 = 0;
          }
          iVar10 = iVar19 + -1;
          if (iVar19 == 0) {
            iVar10 = 0;
          }
          iVar11 = iVar13 + iVar11 + iVar10 + (uint)(*(int *)(lVar17 + 0x2c + lVar12) != 4) * 2 + 4;
          lVar12 = lVar12 + 0x30;
        } while ((longlong)(int)param_3[1] * 0x30 != lVar12);
      }
      iVar10 = iVar16 + -1;
      if (iVar16 == 0) {
        iVar10 = 0;
      }
      iVar10 = iVar10 + (int)param_1[0x2c];
      iVar13 = iVar11 + iVar10 + 0x2e;
      iVar19 = (int)param_1[0x28];
      if ((int)param_1[0x24] < (iVar10 + iVar11 + iVar13 * 10 + 0x2e) / 10 + iVar19) {
        FUN_14292198a(param_1 + 0x24);
        iVar19 = (int)param_1[0x28];
      }
      iVar11 = iVar19 + iVar13 + 10;
      if (iVar19 + iVar13 < -10) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar11);
      }
      plVar9 = param_1 + 0x27;
      iVar10 = iVar19;
      if (*(int *)((longlong)param_1 + 0x144) < iVar11) {
        FUN_144893a1c(plVar9);
        iVar10 = (int)param_1[0x28];
      }
      local_468 = local_448;
      local_450 = '\0';
      local_458 = &local_48;
      uVar18 = iVar10 - 2;
      local_460 = local_468;
      if (iVar10 < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar18);
      }
      uVar8 = *(uint *)((longlong)param_1 + 0x144);
      if (0 < (int)param_1[0x26]) {
        *(uint *)(param_1 + 0x28) = iVar10 - 1U;
        if (uVar8 < iVar10 - 1U) {
          FUN_1447403be(plVar9,uVar18);
        }
        *(undefined1 *)(param_1[0x27] + (ulonglong)uVar18) = 0x2c;
        uVar18 = *(uint *)(param_1 + 0x28);
        uVar8 = *(uint *)((longlong)param_1 + 0x144);
      }
      *(uint *)(param_1 + 0x28) = uVar18 + 0xd;
      if (uVar8 - uVar18 < 0xd) {
        FUN_1447403be(plVar9,uVar18);
      }
      lVar17 = param_1[0x27];
      *(undefined8 *)(lVar17 + 5 + (longlong)(int)uVar18) = 0x3a22656d614e746e;
      *(undefined8 *)(lVar17 + (int)uVar18) = 0x4e746e657645227b;
      local_460 = local_468;
      local_528 = iVar16;
      local_520 = lVar15;
      FUN_146b275a2(&local_468,&local_518);
      FUN_146b27818(plVar9,local_468,(ulonglong)((longlong)local_460 - (longlong)local_468) >> 1);
      iVar16 = (int)param_1[0x28];
      *(int *)(param_1 + 0x28) = iVar16 + 0xf;
      if ((uint)(*(int *)((longlong)param_1 + 0x144) - iVar16) < 0xf) {
        FUN_1447403be(plVar9,iVar16);
      }
      lVar15 = param_1[0x27];
      *(undefined8 *)(lVar15 + 7 + (longlong)iVar16) = 0x223a227465736666;
      *(undefined8 *)(lVar15 + iVar16) = 0x664f65746144222c;
      iVar16 = (int)param_1[0x28];
      *(int *)(param_1 + 0x28) = iVar16 + 0xe;
      if ((uint)(*(int *)((longlong)param_1 + 0x144) - iVar16) < 0xe) {
        FUN_1447403be(plVar9,iVar16);
      }
      lVar15 = param_1[0x27];
      *(undefined8 *)(lVar15 + 6 + (longlong)iVar16) = 0x223030302e30303a;
      *(undefined8 *)(lVar15 + iVar16) = 0x303a30303a30302b;
      uVar18 = *(uint *)(param_1 + 0x2c);
      if ((longlong)(int)uVar18 != 0) {
        iVar11 = (int)param_1[0x28];
        *(uint *)(param_1 + 0x28) = iVar11 + uVar18;
        if ((uint)(*(int *)((longlong)param_1 + 0x144) - iVar11) < uVar18) {
          FUN_1447403be(plVar9,iVar11);
        }
        memcpy((void *)((longlong)iVar11 + param_1[0x27]),(void *)param_1[0x2b],
               (longlong)(int)uVar18);
      }
      if ((longlong)(int)param_3[1] != 0) {
        lVar15 = *param_3;
        lVar17 = (longlong)(int)param_3[1] * 0x30;
        do {
          FUN_146b24d89(plVar9,&local_468,lVar15);
          lVar15 = lVar15 + 0x30;
          lVar17 = lVar17 + -0x30;
        } while (lVar17 != 0);
      }
      iVar11 = (int)param_1[0x28];
      *(uint *)(param_1 + 0x28) = iVar11 + 1U;
      if (*(uint *)((longlong)param_1 + 0x144) < iVar11 + 1U) {
        FUN_1447403be(plVar9,iVar11);
      }
      *(undefined1 *)(param_1[0x27] + (longlong)iVar11) = 0x7d;
      iVar11 = (int)param_1[0x28];
      *(int *)(param_1 + 0x28) = iVar11 + 2;
      if ((uint)(*(int *)((longlong)param_1 + 0x144) - iVar11) < 2) {
        FUN_1447403be(plVar9,iVar11);
      }
      *(undefined2 *)(param_1[0x27] + (longlong)iVar11) = 0x7d5d;
      iVar19 = (int)param_1[0x28] - iVar19;
      local_508 = local_520;
      uStack_500 = CONCAT44(local_524,local_528);
      FUN_140212f8e();
      iVar11 = (int)param_1[0x26];
      *(uint *)(param_1 + 0x26) = iVar11 + 1U;
      iStack_4f0 = iVar16;
      iStack_4ec = iVar19;
      if (*(uint *)((longlong)param_1 + 0x134) < iVar11 + 1U) {
        FUN_146b27fde(param_1 + 0x25,iVar11);
      }
      lVar15 = param_1[0x25];
      lVar17 = (longlong)iVar11 * 0x20;
      *(undefined8 *)(lVar15 + lVar17) = 0;
      *(longlong *)(lVar15 + lVar17) = local_508;
      *(int *)(lVar15 + 8 + lVar17) = (int)uStack_500;
      *(undefined4 *)(lVar15 + 0xc + lVar17) = uStack_500._4_4_;
      puVar3 = (undefined4 *)(lVar15 + 0x10 + lVar17);
      *puVar3 = local_4f8;
      puVar3[1] = uStack_4f4;
      puVar3[2] = iStack_4f0;
      puVar3[3] = iStack_4ec;
      uStack_500 = 0;
      local_508 = 0;
      if (local_450 == '\x01') {
        FUN_1400020a8(local_468);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f));
      if ((char)param_1[0x21] == '\0') {
        (**(code **)(*param_1 + 0x20))(param_1);
      }
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
      {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
      local_468 = &DAT_149f297c8;
      local_460 = (longlong *)CONCAT35(local_460._5_3_,4);
      uVar6 = FUN_14001a6c0(&local_468,1);
      cVar5 = FUN_14011feae(&DAT_14c874628,uVar6);
      if (cVar5 != '\0') {
        local_508 = 0;
        uStack_500 = 0;
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f));
        iVar16 = (int)param_1[0x2a];
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f));
        if (iVar16 < 1) {
          iVar16 = 0;
        }
        else {
          iVar11 = 0;
          do {
            FUN_146b25034(param_1 + 0x24,&local_468,iVar11);
            FUN_142924c21(&local_508,iVar11,&local_468);
            if (local_458 != (ulonglong *)0x0) {
              FUN_1400020a8();
            }
            if (local_468 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            iVar11 = iVar11 + 1;
          } while (iVar16 != iVar11);
        }
        if (0 < (int)param_3[1]) {
          lVar15 = 0;
          lVar17 = 0;
          do {
            FUN_142924c21(&local_508,iVar16 + (int)lVar17,*param_3 + lVar15);
            lVar17 = lVar17 + 1;
            lVar15 = lVar15 + 0x30;
          } while (lVar17 < (int)param_3[1]);
        }
        FUN_142923372(param_1,&local_468);
        plVar9 = local_468;
        FUN_140056680(local_478,L"text/plain");
        FUN_140056680(&local_488,L"Content-Type");
        (**(code **)(*plVar9 + 0xb0))(plVar9,&local_488,local_478);
        if (local_488 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_478[0] != 0) {
          FUN_1400020a8();
        }
        FUN_140474144(local_478,param_1 + 0xb,param_1 + 0xd);
        local_4a8 = param_1[0x1e];
        local_4a0 = (int)param_1[0x1f] + -1;
        if ((int)param_1[0x1f] == 0) {
          local_4a0 = 0;
        }
        FUN_141639c3a(local_498);
        FUN_140ba7826(&local_488,L"SendEvent.1?SessionID=",local_498);
        iVar16 = local_480 + -1;
        if (local_480 == 0) {
          iVar16 = 0;
        }
        FUN_1400020e8(local_478,local_488,iVar16);
        if (local_488 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_498[0] != 0) {
          FUN_1400020a8();
        }
        local_4b8 = param_1[9];
        local_4b0 = (int)param_1[10] + -1;
        if ((int)param_1[10] == 0) {
          local_4b0 = 0;
        }
        FUN_141639c3a(local_498);
        FUN_140ba7826(&local_488,L"&AppID=",local_498);
        iVar16 = local_480 + -1;
        if (local_480 == 0) {
          iVar16 = 0;
        }
        FUN_1400020e8(local_478,local_488,iVar16);
        if (local_488 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_498[0] != 0) {
          FUN_1400020a8();
        }
        local_4c8 = param_1[0x13];
        local_4c0 = (int)param_1[0x14] + -1;
        if ((int)param_1[0x14] == 0) {
          local_4c0 = 0;
        }
        FUN_141639c3a(local_498);
        FUN_140ba7826(&local_488,L"&AppVersion=",local_498);
        iVar16 = local_480 + -1;
        if (local_480 == 0) {
          iVar16 = 0;
        }
        FUN_1400020e8(local_478,local_488,iVar16);
        if (local_488 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_498[0] != 0) {
          FUN_1400020a8();
        }
        local_4d8 = param_1[0x1c];
        local_4d0 = (int)param_1[0x1d] + -1;
        if ((int)param_1[0x1d] == 0) {
          local_4d0 = 0;
        }
        FUN_141639c3a(local_498);
        FUN_140ba7826(&local_488,L"&UserID=",local_498);
        iVar16 = local_480 + -1;
        if (local_480 == 0) {
          iVar16 = 0;
        }
        FUN_1400020e8(local_478,local_488,iVar16);
        if (local_488 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_498[0] != 0) {
          FUN_1400020a8();
        }
        local_4e8 = *param_2;
        local_4e0 = (int)param_2[1] + -1;
        if ((int)param_2[1] == 0) {
          local_4e0 = 0;
        }
        FUN_141639c3a(local_498);
        FUN_140ba7826(&local_488,L"&EventName=",local_498);
        iVar16 = local_480 + -1;
        if (local_480 == 0) {
          iVar16 = 0;
        }
        FUN_1400020e8(local_478,local_488,iVar16);
        if (local_488 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_498[0] != 0) {
          FUN_1400020a8();
        }
        iVar16 = (int)uStack_500 + -1;
        if ((int)uStack_500 == 0) {
          iVar16 = 0;
        }
        FUN_1400020e8(local_478,local_508,iVar16);
        (**(code **)(*plVar9 + 0x68))(plVar9,local_478);
        FUN_140056680(&local_488,&DAT_149e8e77a);
        (**(code **)(*plVar9 + 0x60))(plVar9,&local_488);
        if (local_488 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (1 < (int)param_1[0x10]) {
          (**(code **)(*plVar9 + 0x78))(plVar9,DAT_14c991010,param_1 + 0xf);
        }
        if ((char)param_1[0x23] == '\0') {
          uVar7 = (**(code **)(*plVar9 + 0xf0))(plVar9);
          local_488 = FUN_142924722;
          local_480 = 0;
          FUN_146b254b6(uVar7,param_1);
        }
        (**(code **)(*plVar9 + 0xe8))(plVar9);
        if (local_478[0] != 0) {
          FUN_1400020a8();
        }
        plVar9 = local_460;
        if (local_460 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_460 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_460)(local_460);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        if (local_508 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_548) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142924722 FUN_142924722 body=117 status=ok
// SIG undefined FUN_142924722(void)

void FUN_142924722(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((longlong *)*param_3 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_3 + 0x58))();
  }
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
  plVar3 = (longlong *)param_3[1];
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
                    /* WARNING: Could not recover jumptable at 0x00014292478b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142924798 FUN_142924798 body=981 status=ok
// SIG undefined FUN_142924798(void)

void FUN_142924798(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *_Src;
  undefined8 uVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ushort uVar11;
  ulonglong uVar12;
  ushort uVar13;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  int local_50;
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar7 = param_1 + 0xb;
  iVar3 = (int)param_1[0xc];
  if (iVar3 == (int)param_2[1]) {
    if (1 < iVar3) {
      lVar8 = 0;
      while( true ) {
        uVar11 = *(ushort *)(*plVar7 + lVar8);
        uVar12 = (ulonglong)uVar11;
        uVar13 = *(ushort *)(*param_2 + lVar8);
        if (uVar11 != uVar13) break;
        if (uVar11 == 0) goto LAB_142924828;
LAB_1429247f3:
        lVar8 = lVar8 + 2;
      }
      if ((uVar13 | uVar11) < 0x80) {
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        uVar9 = (ulonglong)uVar13;
        uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar9]) goto LAB_1429247f3;
      }
      if (uVar11 != uVar13) goto LAB_14292484c;
    }
LAB_142924828:
    if (((int)param_1[0x12] == *(int *)(param_3 + 1)) &&
       (cVar6 = FUN_1405d12b4(param_1[0x11],*param_3), cVar6 != '\0')) goto LAB_142924b4a;
  }
  else if ((int)param_2[1] + iVar3 == 1) goto LAB_142924828;
LAB_14292484c:
  (**(code **)(*param_1 + 0x20))(param_1);
  if (plVar7 != param_2) {
    iVar3 = (int)param_2[1];
    _Src = (void *)*param_2;
    *(int *)(param_1 + 0xc) = iVar3;
    if (iVar3 == 0 && *(int *)((longlong)param_1 + 100) == 0) {
      *(undefined4 *)((longlong)param_1 + 100) = 0;
    }
    else {
      FUN_1446dd670(plVar7,iVar3);
      if (iVar3 != 0) {
        memcpy((void *)*plVar7,_Src,(longlong)iVar3 * 2);
      }
    }
  }
  FUN_140bee9ec(param_1 + 0x11,param_3);
  iVar3 = *(int *)(param_3 + 1);
  lVar8 = param_1[0x3e];
  *(int *)(lVar8 + 0x20) = iVar3;
  *(undefined1 *)(lVar8 + 0x24) = 1;
  local_48 = (longlong *)0x0;
  iVar4 = *(int *)(param_3 + 1);
  uVar5 = *param_3;
  local_40 = CONCAT44(local_40._4_4_,iVar4);
  if (iVar4 == 0) {
    local_40 = 0;
  }
  else {
    FUN_140b856de(&local_48,iVar4,0);
    FUN_140b8566a(local_48,uVar5,iVar4);
  }
  if (iVar3 == 0) {
    param_1[0x40] = 0;
    plVar7 = (longlong *)param_1[0x41];
    if (plVar7 != (longlong *)0x0) {
      param_1[0x41] = 0;
      LOCK();
      plVar10 = plVar7 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
  }
  else {
    local_68 = param_1[0xb];
    local_60 = (int)param_1[0xc] + -1;
    if ((int)param_1[0xc] == 0) {
      local_60 = 0;
    }
    FUN_141306ffc(&local_58);
    if ((longlong)(int)local_40 != 0) {
      plVar7 = local_48;
LAB_142924952:
      if ((int)plVar7[1] == local_50) {
        if (1 < local_50) {
          lVar8 = 0;
          do {
            uVar11 = *(ushort *)(*plVar7 + lVar8);
            uVar12 = (ulonglong)uVar11;
            uVar13 = *(ushort *)(local_58 + lVar8);
            if (uVar11 == uVar13) {
              if (uVar11 == 0) break;
            }
            else {
              if (0x7f < (uVar13 | uVar11)) goto LAB_14292499b;
              uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
              uVar9 = (ulonglong)uVar13;
              uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar12] != (&DAT_149e05da0)[uVar9]) goto LAB_14292499b;
            }
            lVar8 = lVar8 + 2;
          } while( true );
        }
      }
      else if ((int)plVar7[1] + local_50 != 1) goto LAB_1429249ae;
      goto LAB_1429249c9;
    }
LAB_1429249b7:
    FUN_14127e8fc(&local_48,&local_58,0);
LAB_1429249c9:
    plVar7 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_149f2c3d0;
    plVar7[2] = (longlong)local_48;
    local_48 = (longlong *)0x0;
    *(int *)(plVar7 + 3) = (int)local_40;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = local_40._4_4_;
    local_40 = 0;
    *(undefined4 *)(plVar7 + 4) = 0;
    if (plVar7 == (longlong *)0x0) {
      param_1[0x40] = 0x10;
      plVar10 = (longlong *)param_1[0x41];
      if (plVar10 != (longlong *)0x0) {
        param_1[0x41] = 0;
LAB_142924ac0:
        LOCK();
        plVar1 = plVar10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        if (plVar7 != (longlong *)0x0) goto LAB_142924b01;
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      param_1[0x40] = (longlong)(plVar7 + 2);
      plVar10 = (longlong *)param_1[0x41];
      if (plVar7 == plVar10) {
        LOCK();
        plVar10 = plVar7 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      else {
        param_1[0x41] = (longlong)plVar7;
        if (plVar10 != (longlong *)0x0) goto LAB_142924ac0;
      }
LAB_142924b01:
      LOCK();
      plVar10 = plVar7 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1447a1747(local_48,local_40 & 0xffffffff);
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_142924b4a:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14292499b:
  if (uVar11 == uVar13) goto LAB_1429249c9;
LAB_1429249ae:
  plVar7 = plVar7 + 2;
  if (plVar7 == local_48 + (longlong)(int)local_40 * 2) goto LAB_1429249b7;
  goto LAB_142924952;
}



// FUNCTION 142924b6e FUN_142924b6e body=114 status=ok
// SIG undefined FUN_142924b6e(void)

void FUN_142924b6e(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_3 + 8) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  local_30 = param_2;
  local_28 = param_3;
  FUN_140ac5c08(param_1 + 0x210,local_1c,&local_30,0);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142924bf2 FUN_142924bf2 body=47 status=ok
// SIG undefined FUN_142924bf2(void)

void FUN_142924bf2(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x20))();
  FUN_146b1fcf4(param_1[0x3e],param_2);
  return;
}



// FUNCTION 142924c21 FUN_142924c21 body=297 status=ok
// SIG undefined FUN_142924c21(void)

void FUN_142924c21(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined2 *local_a0;
  undefined8 local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  undefined8 local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_70 = param_3[2];
  local_68 = *(int *)(param_3 + 3) + -1;
  if (*(int *)(param_3 + 3) == 0) {
    local_68 = 0;
  }
  FUN_141639c3a(&local_60);
  local_a0 = &DAT_149dfb77a;
  if (local_58 != 0) {
    local_a0 = local_60;
  }
  local_90 = *param_3;
  local_88 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    local_88 = 0;
  }
  FUN_141639c3a(&local_80);
  puVar1 = &DAT_149dfb77a;
  if (local_78 != 0) {
    puVar1 = local_80;
  }
  local_a8 = param_2;
  FUN_140002266(&local_50,L"&AttributeName%d=%s&AttributeValue%d=%s",param_2,puVar1);
  iVar2 = local_48 + -1;
  if (local_48 == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(param_1,local_50,iVar2);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142924d4b FUN_142924d4b body=47 status=ok
// SIG undefined FUN_142924d4b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142924d4b(void)

{
  _DAT_14c991208 = 0;
  if (DAT_14c991200 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&DAT_14c9911c0);
  return;
}



// FUNCTION 142924d7a FUN_142924d7a body=47 status=ok
// SIG undefined FUN_142924d7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142924d7a(void)

{
  _DAT_14c991260 = 0;
  if (DAT_14c991258 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&DAT_14c991218);
  return;
}



// FUNCTION 142924da9 FUN_142924da9 body=1331 status=ok
// SIG undefined FUN_142924da9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142924da9(void)

{
  void *pvVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  char **local_78;
  ulonglong *local_70;
  char *local_68;
  int local_60;
  uint local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = "UnixSocketPath";
  local_60 = 0xe;
  local_5c = local_5c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_68,1);
  DAT_14c991010 = (ulonglong)uVar2;
  local_68 = (char *)0x8000000149f2b240;
  local_78 = (char **)CONCAT44(local_78._4_4_,0xb);
  local_60 = FUN_14577453c();
  local_5c = CONCAT31(local_5c._1_3_,1);
  FUN_146283f1e(&local_68);
  local_88 = 0;
  FUN_1415c789c(&DAT_14c991020,L"AnalyticsET.PayloadPercentageOfMaxForWarning",&DAT_14c75ef80,
                L"Percentage of the maximum payload for an EventCache that will trigger a warning message, listing the events in the payload. This is intended to be used to investigate spammy or slow telemetry."
               );
  atexit(FUN_1429218ff);
  local_88 = 0;
  FUN_1415c789c(&DAT_14c991030,L"AnalyticsET.PayloadFlushTimeSecForWarning",&DAT_14c75ef84,
                L"Time in seconds that flushing an EventCache payload can take before it will trigger a warning message, listing the events in the payload. This is intended to be used to investigate spammy or slow telemetry."
               );
  atexit(FUN_142921944);
  FUN_140056680(&DAT_14c991040,L"Internal.");
  atexit((_func_5014 *)&LAB_142921bfd);
  FUN_140056680(&DAT_14c991050,L"Internal.UserId");
  atexit((_func_5014 *)&LAB_142921c0e);
  FUN_140056680(&DAT_14c991060,L"Internal.AppId");
  atexit((_func_5014 *)&LAB_142921c1f);
  FUN_140056680(&DAT_14c991070,L"Internal.AppVersion");
  atexit((_func_5014 *)&LAB_142921c30);
  FUN_140056680(&DAT_14c991080,L"Internal.SessionId");
  atexit((_func_5014 *)&LAB_142921c41);
  FUN_140056680(&DAT_14c991090,L"Internal.WasProcessed");
  atexit((_func_5014 *)&LAB_142921c52);
  FUN_140056680(&DAT_14c9910a0,L"SessionId");
  atexit((_func_5014 *)&LAB_142921c63);
  FUN_140056680(&DAT_14c9910b0,L"ShutdownType");
  atexit((_func_5014 *)&LAB_142921c74);
  FUN_140056680(&DAT_14c9910c0,L"DelayedSend");
  atexit((_func_5014 *)&LAB_142921c85);
  FUN_140056680(&DAT_14c9910d0,L"SentFrom");
  atexit((_func_5014 *)&LAB_142921c96);
  FUN_140056680(&DAT_14c9910e0);
  atexit((_func_5014 *)&LAB_142921ca7);
  pvVar1 = DAT_14c9910b0;
  local_68 = (char *)0x0;
  lVar3 = (longlong)DAT_14c9910b8;
  local_60 = DAT_14c9910b8;
  if (lVar3 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,DAT_14c9910b8,0);
    memcpy(local_68,pvVar1,lVar3 * 2);
  }
  pvVar1 = DAT_14c9910c0;
  local_58 = (void *)0x0;
  lVar3 = (longlong)DAT_14c9910c8;
  local_50 = DAT_14c9910c8;
  if (lVar3 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,DAT_14c9910c8,0);
    memcpy(local_58,pvVar1,lVar3 * 2);
  }
  pvVar1 = DAT_14c9910d0;
  local_48 = (void *)0x0;
  lVar3 = (longlong)DAT_14c9910d8;
  local_40 = DAT_14c9910d8;
  if (lVar3 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,DAT_14c9910d8,0);
    memcpy(local_48,pvVar1,lVar3 * 2);
  }
  pvVar1 = DAT_14c9910e0;
  local_38 = (void *)0x0;
  lVar3 = (longlong)DAT_14c9910e8;
  local_30 = DAT_14c9910e8;
  if (lVar3 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,DAT_14c9910e8,0);
    memcpy(local_38,pvVar1,lVar3 * 2);
  }
  local_70 = &local_28;
  _DAT_14c991110 = 0;
  _DAT_14c991118 = 0;
  _DAT_14c9910f0 = 0;
  uRam000000014c9910f8 = 0;
  _DAT_14c99111c = 0xffffffff00000080;
  _DAT_14c991124 = 0;
  DAT_14c991130 = 0;
  _DAT_14c991138 = 0;
  local_78 = &local_68;
  FUN_1415d42fa(&DAT_14c9910f0);
  lVar3 = 0x40;
  do {
    if (*(longlong *)((longlong)&local_78 + lVar3) != 0) {
      FUN_1400020a8();
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0);
  atexit(FUN_142921cb8);
  auVar4 = roundpd(ZEXT816(0x41e65a0bc0100000),ZEXT816(0x41e65a0bc0100000),1);
  _DAT_14c991140 = (longlong)auVar4._0_8_;
  auVar4 = roundpd(ZEXT816(0x4220c388d0010000),ZEXT816(0x4220c388d0010000),1);
  _DAT_14c991148 = (longlong)auVar4._0_8_;
  FUN_140056680(&DAT_14c991150,L"UE_AnalyticsSessionSummaryManager_OrphanOwner");
  atexit((_func_5014 *)&LAB_142921ce7);
  FUN_140056680(&DAT_14c991160,L"8E1D46DBC38F4A789939D781E1B91520");
  atexit((_func_5014 *)&LAB_142921cf8);
  FUN_140056680(&DAT_14c991170,L"ShutdownTypeCode");
  atexit((_func_5014 *)&LAB_142921d09);
  FUN_140056680(&DAT_14c991180,L"IsUserLoggingOut");
  atexit((_func_5014 *)&LAB_142921d1a);
  local_88 = 0;
  FUN_14153156c(&DAT_14c991190,L"AnalyticsET.PreventMultipleFlushesInOneFrame",&DAT_14c75ef88,
                L"When true, prevents more than one AnalyticsProviderET instance from flushing in the same frame, allowing the flush and HTTP cost to be amortized."
               );
  atexit(FUN_142921d2b);
  local_68 = (char *)CONCAT71(local_68._1_7_,1);
  local_88 = 0x2000;
  FUN_140bd5914(&DAT_14c9911a0,L"AnalyticsET.UserAgentCommentsEnabled",&local_68,
                L"Whether comments are supported in the analytics user agent string");
  atexit(FUN_142921d70);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429252fa FUN_1429252fa body=646 status=ok
// SIG undefined FUN_1429252fa(void)

void FUN_1429252fa(longlong param_1)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  longlong lVar2;
  void **ppvVar3;
  void *pvVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  undefined1 auStack_88 [32];
  longlong *local_68;
  PSRWLOCK local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  SRWLock = (PSRWLOCK)(param_1 + 200);
  plVar1 = (longlong *)(param_1 + 0xd0);
  AcquireSRWLockShared(SRWLock);
  cVar5 = (**(code **)(*(longlong *)(param_1 + 0xd0) + 8))(plVar1);
  ReleaseSRWLockShared(SRWLock);
  if (cVar5 == '\0') {
    if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_146b2b196(param_1);
    return;
  }
  local_60 = SRWLock;
  AcquireSRWLockExclusive(SRWLock);
  dVar13 = (double)(**(code **)(*plVar1 + 0x30))(plVar1);
  local_68 = plVar1;
  if (dVar13 <= 4.0) {
    if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
      lVar10 = *(longlong *)(param_1 + 0xe8);
      lVar11 = (longlong)*(int *)(param_1 + 0xf0) * 0x50 + lVar10;
      do {
        local_58 = (void *)0x0;
        local_50 = *(int *)(lVar10 + 0x18);
        lVar12 = (longlong)local_50;
        pvVar4 = *(void **)(lVar10 + 0x10);
        if (lVar12 == 0) {
          local_4c = 0;
          iVar7 = 0;
        }
        else {
          FUN_146b2dcf0(&local_58,local_50,0);
          memcpy(local_58,pvVar4,lVar12 << 3);
          iVar7 = local_50;
        }
        FUN_146b2d997(local_58,iVar7);
        if (1 < local_50) {
          ppvVar3 = (void **)(lVar10 + 0x10);
          lVar12 = 1;
          bVar6 = false;
          do {
            uVar9 = (uint)lVar12;
            lVar12 = (longlong)(int)uVar9;
            lVar8 = 0;
            while (iVar7 = *(int *)((longlong)local_58 + lVar8 * 8 + lVar12 * 8 + -4),
                  *(int *)((longlong)local_58 + lVar8 * 8 + lVar12 * 8 + -8) + iVar7 !=
                  *(int *)((longlong)local_58 + lVar8 * 8 + lVar12 * 8)) {
              lVar2 = lVar12 + lVar8;
              lVar8 = lVar8 + 1;
              if ((longlong)local_50 <= lVar2 + 1) {
                if (!bVar6) goto LAB_142925548;
                goto LAB_1429254f3;
              }
            }
            *(int *)((longlong)local_58 + lVar8 * 8 + lVar12 * 8 + -4) =
                 iVar7 + *(int *)((longlong)local_58 + lVar8 * 8 + lVar12 * 8 + 4);
            iVar7 = (int)lVar8;
            if (~uVar9 + local_50 != iVar7) {
              memmove((void *)((longlong)local_58 + lVar8 * 8 + lVar12 * 8),
                      (void *)((longlong)local_58 + lVar8 * 8 + lVar12 * 8 + 8),
                      (longlong)(int)((~uVar9 + local_50) - iVar7) << 3);
            }
            lVar12 = lVar12 + lVar8;
            local_50 = local_50 + -1;
            FUN_146b2cdfe(&local_58);
            bVar6 = true;
          } while ((int)(uVar9 + iVar7) < local_50);
LAB_1429254f3:
          iVar7 = local_50;
          pvVar4 = local_58;
          if (ppvVar3 != &local_58) {
            *(int *)(lVar10 + 0x18) = local_50;
            if (*(int *)(lVar10 + 0x1c) == 0 && local_50 == 0) {
              *(undefined4 *)(lVar10 + 0x1c) = 0;
            }
            else {
              FUN_146b2dcf0(ppvVar3,local_50);
              if (iVar7 != 0) {
                memcpy(*ppvVar3,pvVar4,(longlong)iVar7 << 3);
              }
            }
          }
          FUN_146b2dd52(*(undefined8 *)(lVar10 + 0x10));
        }
LAB_142925548:
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
        lVar10 = lVar10 + 0x50;
      } while (lVar10 != lVar11);
    }
  }
  else {
    FUN_146b29e6e(plVar1);
  }
  FUN_146b2b0ba(local_68);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 14292559e FUN_14292559e body=2507 status=ok
// SIG undefined FUN_14292559e(void)

int * FUN_14292559e(longlong *param_1,int *param_2,int *param_3,longlong param_4,longlong param_5)

{
  void *_Dst;
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int **ppiVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  undefined8 *puVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  int *piVar27;
  int iVar28;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  undefined4 local_240;
  undefined4 local_238;
  undefined4 local_230;
  longlong *local_228;
  int *local_220;
  uint *local_218;
  longlong *local_210;
  longlong local_208;
  longlong local_200;
  int *local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  longlong local_1e0;
  int local_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int local_1c8;
  int *local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  int *local_198;
  int **ppiStack_190;
  undefined4 local_188;
  int *local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  longlong local_160;
  undefined8 local_74;
  int local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_200 = param_4;
  cVar8 = (**(code **)(*param_1 + 0x28))(param_1,param_3);
  if (cVar8 != '\0') {
    local_1c8 = param_3[4];
    local_1d8 = *param_3;
    iStack_1d4 = param_3[1];
    iStack_1d0 = param_3[2];
    iStack_1cc = param_3[3];
    FUN_142925f6a(param_1);
  }
  lVar26 = param_5 - (param_1[0xf] - param_1[0x10]);
  local_228 = param_1;
  local_220 = param_2;
  local_1f8 = param_3;
  if (param_1[0xf] - param_1[0x10] < param_5) {
    plVar11 = param_1 + 5;
    local_218 = (uint *)(param_1 + 7);
    lVar25 = 0;
    while (lVar25 < lVar26) {
      local_198 = (int *)0x0;
      ppiStack_190 = (int **)0x0;
      local_188 = 0;
      iVar9 = (int)param_1[10];
      uVar14 = 1;
      uVar13 = 0;
      uVar12 = 0;
      iVar28 = 0;
      iVar18 = 0;
      if (iVar9 != 0) {
        puVar21 = (uint *)local_228[9];
        if ((uint *)local_228[9] == (uint *)0x0) {
          puVar21 = local_218;
        }
        uVar15 = *puVar21;
        if (uVar15 == 0) {
          iVar18 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar18 = iVar9 + -1;
          }
          uVar12 = 0;
          uVar14 = (ulonglong)(uint)(iVar18 >> 5);
          if (iVar18 >> 5 < 1) {
            uVar14 = uVar12;
          }
          iVar28 = 0;
          do {
            if (uVar14 == uVar12) {
              uVar13 = 0;
              goto LAB_142925819;
            }
            iVar28 = iVar28 + 0x20;
            uVar15 = puVar21[uVar12 + 1];
            uVar12 = uVar12 + 1;
          } while (uVar15 == 0);
        }
        else {
          uVar12 = 0;
        }
        uVar14 = (ulonglong)(-uVar15 & uVar15);
        uVar1 = uVar14 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        iVar18 = (iVar28 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
        if (iVar9 <= iVar18) {
          iVar18 = iVar9;
        }
      }
      if (iVar18 != iVar9) {
        puVar21 = (uint *)local_228[9];
        if ((uint *)local_228[9] == (uint *)0x0) {
          puVar21 = local_218;
        }
        iVar23 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar23 = iVar9 + -1;
        }
        iVar23 = iVar23 >> 5;
        uVar15 = 0xffffffff;
        lVar24 = 0x7fffffffffffffff;
        do {
          lVar16 = *(longlong *)(local_228[5] + 0x30 + (longlong)iVar18 * 0x40);
          if (lVar16 < lVar24 && -1 < lVar16) {
            puVar22 = (undefined8 *)((longlong)iVar18 * 0x40 + local_228[5]);
            local_188 = *(undefined4 *)(puVar22 + 2);
            local_198 = (int *)*puVar22;
            ppiStack_190 = (int **)puVar22[1];
            lVar24 = lVar16;
          }
          uVar15 = uVar15 & ~(uint)uVar14;
          iVar18 = (int)uVar12;
          lVar16 = (longlong)iVar18;
          uVar19 = puVar21[lVar16] & uVar15;
          if (uVar19 == 0) {
            iVar20 = iVar23;
            if (iVar23 < iVar18) {
              iVar20 = iVar18;
            }
            if (iVar23 <= iVar18) break;
            lVar17 = 0;
            while( true ) {
              iVar28 = iVar28 + 0x20;
              uVar19 = puVar21[lVar16 + lVar17 + 1];
              if (uVar19 != 0) break;
              lVar17 = lVar17 + 1;
              if (iVar20 - lVar16 == lVar17) goto LAB_142925803;
            }
            uVar12 = (ulonglong)(iVar18 + (int)lVar17 + 1);
            uVar15 = 0xffffffff;
          }
          uVar14 = (ulonglong)(-uVar19 & uVar19);
          uVar13 = uVar14 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar18 = (iVar28 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        } while (iVar18 < iVar9);
LAB_142925803:
        uVar13 = (ulonglong)local_198 & 0xffffffff;
        param_2 = local_220;
        local_210 = plVar11;
        local_208 = lVar25;
      }
LAB_142925819:
      iVar9 = FUN_146b2d230(plVar11,uVar13,&local_198);
      param_1 = local_228;
      if ((iVar9 == -1) ||
         (lVar24 = (longlong)iVar9 * 0x40 + *plVar11, lVar24 == -0x18 || lVar24 == 0)) break;
      if ((longlong)*(int *)(lVar24 + 0x20) == 0) {
        lVar24 = 0;
      }
      else {
        piVar10 = *(int **)(lVar24 + 0x18);
        piVar27 = piVar10 + (longlong)*(int *)(lVar24 + 0x20) * 3;
        lVar24 = 0;
        do {
          if ((int)local_228[4] != 0) {
            lVar16 = (longlong)(int)local_228[4] * 0x50;
            lVar17 = local_228[3];
            do {
              if (*(int *)(lVar17 + 4) == *piVar10) {
                if (lVar17 != 0) {
                  lVar24 = lVar24 + (longlong)piVar10[2] * (longlong)*(int *)(lVar17 + 8);
                }
                break;
              }
              lVar17 = lVar17 + 0x50;
              lVar16 = lVar16 + -0x50;
            } while (lVar16 != 0);
          }
          piVar10 = piVar10 + 3;
        } while (piVar10 != piVar27);
      }
      local_168 = local_188;
      local_178 = local_198;
      uStack_170 = ppiStack_190;
      FUN_146b2d5be(local_228[1] + 8,&local_178);
      local_1b8 = local_198;
      uStack_1b0 = ppiStack_190;
      local_1a8 = local_188;
      FUN_142925f6a(param_1);
      lVar25 = lVar25 + lVar24;
      if (lVar24 == 0) break;
    }
    if (lVar25 < lVar26) {
      *param_2 = 8;
      *(undefined2 *)(param_2 + 1) = 0;
      goto LAB_142925c53;
    }
  }
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  local_1b8 = (int *)0x0;
  uStack_1b0 = (int **)0x0;
  lVar26 = (longlong)(int)param_1[4];
  if (lVar26 != 0) {
    lVar25 = param_1[3];
    lVar24 = lVar26 * 0x50 + lVar25;
    piVar27 = (int *)(lVar25 + 4);
    lVar16 = 0;
    do {
      if ((char)piVar27[0xf] == '\0') {
        uVar15 = piVar27[5];
        if ((ulonglong)uVar15 != 0) {
          uVar12 = (ulonglong)piVar27[1];
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar12;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = -uVar12 & param_5 + -1 + uVar12;
          lVar17 = *(longlong *)(piVar27 + 3);
          iVar9 = *(int *)(lVar17 + 4);
          iVar18 = SUB164(auVar5 / auVar4,0);
          if (iVar18 <= iVar9) {
            uVar19 = 0;
            if ((int)uVar15 < 2) goto LAB_142925b8b;
            uVar19 = 0;
            if (*(int *)(lVar17 + 0xc) < iVar18) goto LAB_142925b84;
            uVar19 = uVar15 - 1;
            lVar26 = 0;
            goto LAB_142925b6e;
          }
        }
      }
      piVar27 = piVar27 + 0x14;
      lVar16 = lVar16 + -0x50;
    } while (-lVar16 != lVar26 * 0x50);
    param_2 = local_220;
    if (0 < param_5) {
      lVar26 = param_5;
      do {
        if (*(char *)(lVar25 + 0x40) == '\0') {
          for (; 0 < lVar26; lVar26 = lVar26 - iVar18 * lVar16) {
            FUN_146b2b7c4(&local_178,lVar25,lVar26);
            iVar9 = local_6c;
            uVar7 = local_74;
            ppiVar6 = uStack_1b0;
            if ((int)local_178 != 0) break;
            lVar16 = (longlong)local_6c;
            iVar18 = *(int *)(lVar25 + 8);
            lVar17 = (longlong)(int)uStack_1b0;
            uVar15 = (int)uStack_1b0 + 1;
            uStack_1b0 = (int **)CONCAT44(uStack_1b0._4_4_,uVar15);
            if (uStack_1b0._4_4_ < uVar15) {
              FUN_146b2ce9a(&local_1b8,(ulonglong)ppiVar6 & 0xffffffff);
            }
            *(undefined8 *)(local_1b8 + lVar17 * 3) = uVar7;
            local_1b8[lVar17 * 3 + 2] = iVar9;
          }
        }
        piVar27 = local_1b8;
        param_2 = local_220;
        lVar25 = lVar25 + 0x50;
      } while (lVar25 != lVar24);
      if (0 < lVar26) {
        lVar26 = (longlong)(int)uStack_1b0;
        if (lVar26 != 0) {
          lVar25 = 0;
          do {
            ppiStack_190 = (int **)CONCAT44(ppiStack_190._4_4_,
                                            *(undefined4 *)((longlong)piVar27 + lVar25 + 8));
            local_198 = *(int **)((longlong)piVar27 + lVar25);
            FUN_146b2b248(local_228,&local_198);
            lVar25 = lVar25 + 0xc;
          } while (lVar26 * 0xc != lVar25);
        }
        goto LAB_142925b1f;
      }
    }
    goto LAB_142925c21;
  }
  if (param_5 < 1) goto LAB_142925c21;
LAB_142925b1f:
  uVar12 = (ulonglong)uStack_1b0 >> 0x20;
  uStack_1b0 = (int **)((ulonglong)uStack_1b0 & 0xffffffff00000000);
  if ((int)uVar12 != 0) {
    FUN_146b2d69c(&local_1b8,0);
    goto LAB_142925c21;
  }
LAB_142925c2e:
  *param_2 = 8;
  *(undefined2 *)(param_2 + 1) = 0;
  goto LAB_142925c46;
  while (lVar24 = lVar26 + 1, lVar2 = lVar26 * 8, lVar26 = lVar24,
        iVar18 <= *(int *)(lVar17 + 0x14 + lVar2)) {
LAB_142925b6e:
    if ((ulonglong)uVar15 - 2 == lVar26) goto LAB_142925b84;
  }
  uVar19 = (uint)lVar24;
LAB_142925b84:
  iVar9 = *(int *)(lVar17 + 4 + (ulonglong)uVar19 * 8);
LAB_142925b8b:
  lVar26 = (lVar25 - lVar16) + 0x10;
  uVar3 = *(uint *)(lVar17 + (ulonglong)uVar19 * 8);
  if (~uVar19 + uVar15 != 0) {
    _Dst = (void *)(lVar17 + (ulonglong)uVar19 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~uVar19 + uVar15) << 3);
    uVar15 = piVar27[5];
  }
  piVar27[5] = uVar15 - 1;
  FUN_146b2cdfe(lVar26);
  FUN_1429262bc((lVar25 - lVar16) + 0x20,SUB168(auVar5 / auVar4,0) << 0x20 | (ulonglong)uVar3);
  if (0 < iVar9 - iVar18) {
    FUN_1429262bc(lVar26,CONCAT44(iVar9 - iVar18,uVar3 + iVar18));
  }
  iVar9 = *piVar27;
  uStack_1b0 = (int **)CONCAT44(uStack_1b0._4_4_,1);
  FUN_146b2ce9a(&local_1b8,0);
  *local_1b8 = iVar9;
  local_1b8[1] = uVar3;
  local_1b8[2] = iVar18;
  param_2 = local_220;
LAB_142925c21:
  if ((longlong)(int)uStack_1b0 == 0) goto LAB_142925c2e;
  local_160 = 0;
  local_178 = (int *)0x0;
  uStack_170 = (int **)0x0;
  local_168 = 0;
  piVar27 = local_1b8 + (longlong)(int)uStack_1b0 * 3;
  lVar26 = 0;
  lVar25 = 0;
  piVar10 = local_1b8;
  do {
    if ((longlong)(int)local_228[4] == 0) {
LAB_142925e1d:
      *local_220 = 8;
      *(undefined2 *)(local_220 + 1) = 0;
      break;
    }
    lVar24 = local_228[3];
    lVar16 = (longlong)(int)local_228[4] * 0x50;
    while (*(int *)(lVar24 + 4) != *piVar10) {
      lVar24 = lVar24 + 0x50;
      lVar16 = lVar16 + -0x50;
      if (lVar16 == 0) goto LAB_142925e1d;
    }
    if ((lVar24 == 0) ||
       (plVar11 = (longlong *)FUN_146b2b320(local_228,lVar24), plVar11 == (longlong *)0x0))
    goto LAB_142925e1d;
    if ((longlong)(int)local_228[4] != 0) {
      iVar9 = piVar10[1];
      lVar16 = local_228[3];
      lVar17 = (longlong)(int)local_228[4] * 0x50;
      do {
        if (*(int *)(lVar16 + 4) == *piVar10) {
          if (((lVar16 != 0) && (-1 < iVar9)) && (piVar10[2] + iVar9 <= *(int *)(lVar16 + 0xc))) {
            lVar17 = (longlong)(piVar10[2] * *(int *)(lVar24 + 8));
            lVar16 = param_5 - lVar25;
            if (lVar17 <= param_5 - lVar25) {
              lVar16 = lVar17;
            }
            (**(code **)(*plVar11 + 0x10))(plVar11,(longlong)(iVar9 * *(int *)(lVar24 + 8)));
            (**(code **)(*plVar11 + 0x30))(plVar11,local_200 + lVar25,lVar16);
            ppiVar6 = uStack_170;
            lVar24 = (longlong)(int)uStack_170;
            uVar15 = (int)uStack_170 + 1;
            uStack_170 = (int **)CONCAT44(uStack_170._4_4_,uVar15);
            if (uStack_170._4_4_ < uVar15) {
              FUN_146b2ce9a(&local_178,(ulonglong)ppiVar6 & 0xffffffff);
            }
            lVar25 = lVar25 + lVar16;
            lVar26 = lVar26 + lVar17;
            local_178[lVar24 * 3 + 2] = piVar10[2];
            *(undefined8 *)(local_178 + lVar24 * 3) = *(undefined8 *)piVar10;
          }
          break;
        }
        lVar16 = lVar16 + 0x50;
        lVar17 = lVar17 + -0x50;
      } while (lVar17 != 0);
    }
    piVar10 = piVar10 + 3;
  } while (piVar10 != piVar27);
  local_168 = (undefined4)param_5;
  FUN_140212f8e(&local_1e0);
  local_230 = 0;
  local_238 = 0;
  local_240 = 0;
  local_248 = 0;
  FUN_14021300e(&local_198,0x7b2,1,1);
  local_160 = (local_1e0 - (longlong)local_198) / 10000000;
  local_198 = local_1f8;
  ppiStack_190 = &local_178;
  FUN_146b2cf2e(local_228 + 5,&local_1e0,&local_198);
  if (local_178 != (int *)0x0) {
    FUN_1400020a8();
  }
  piVar27 = local_1b8;
  param_2 = local_220;
  plVar11 = local_228;
  if (*local_220 == 0) {
    local_228[0x10] = local_228[0x10] + lVar26;
    FUN_146b2b0ba();
  }
  else {
    lVar26 = (longlong)(int)uStack_1b0;
    if (lVar26 != 0) {
      lVar25 = 0;
      do {
        local_1e8 = *(undefined4 *)((longlong)piVar27 + lVar25 + 8);
        local_1f0 = *(undefined8 *)((longlong)piVar27 + lVar25);
        FUN_146b2b248(plVar11,&local_1f0);
        lVar25 = lVar25 + 0xc;
      } while (lVar26 * 0xc != lVar25);
    }
  }
LAB_142925c46:
  if (local_1b8 != (int *)0x0) {
    FUN_1400020a8(local_1b8);
  }
LAB_142925c53:
  if ((local_60 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142925f6a FUN_142925f6a body=217 status=ok
// SIG undefined FUN_142925f6a(void)

void FUN_142925f6a(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 0x28);
  iVar2 = FUN_146b2d230(plVar1,*param_2,param_2);
  if (iVar2 == -1) {
    lVar3 = 0;
  }
  else {
    lVar3 = (longlong)iVar2 * 0x40 + *plVar1;
  }
  if (lVar3 == -0x18 || lVar3 == 0) {
    if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  iVar2 = *(int *)(lVar3 + 0x20);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x18);
    lVar4 = 0;
    do {
      local_48 = *(undefined4 *)(lVar3 + 8 + lVar4);
      local_50 = *(undefined8 *)(lVar3 + lVar4);
      FUN_146b2b248(param_1,&local_50);
      lVar4 = lVar4 + 0xc;
    } while ((longlong)iVar2 * 0xc != lVar4);
  }
  FUN_146b2d4bc(plVar1,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 14292605c FUN_14292605c body=607 status=ok
// SIG undefined FUN_14292605c(void)

void FUN_14292605c(PSRWLOCK param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  PSRWLOCK pRVar2;
  PVOID pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined4 *local_60;
  longlong **local_58;
  undefined1 local_4c [4];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)param_1[0xe].Ptr < 1) goto LAB_142926080;
  AcquireSRWLockExclusive(param_1);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = param_2[4];
  pRVar2 = param_1 + 1;
  iVar10 = FUN_146b2e0be(pRVar2,local_48);
  if (iVar10 == -1) {
LAB_1429261c9:
    lVar12 = (longlong)*(int *)(*param_3 + 8);
    if (lVar12 <= (longlong)param_1[0xe].Ptr) {
      if ((longlong)param_1[0xe].Ptr < (longlong)param_1[0xd].Ptr + lVar12) {
        do {
          FUN_142926e76(param_1);
        } while ((longlong)param_1[0xe].Ptr < (longlong)param_1[0xd].Ptr + lVar12);
      }
      local_68 = (longlong *)FUN_14001cc68(0x40,0x10);
      local_68[4] = 0;
      local_68[5] = 0;
      local_68[6] = 0;
      local_68[7] = 0;
      *local_68 = (longlong)local_68;
      local_68[1] = (longlong)local_68;
      local_68[5] = 0;
      local_68[6] = 0;
      *(undefined4 *)(local_68 + 4) = param_2[4];
      uVar7 = param_2[1];
      uVar8 = param_2[2];
      uVar9 = param_2[3];
      *(undefined4 *)(local_68 + 2) = *param_2;
      *(undefined4 *)((longlong)local_68 + 0x14) = uVar7;
      *(undefined4 *)(local_68 + 3) = uVar8;
      *(undefined4 *)((longlong)local_68 + 0x1c) = uVar9;
      if (local_68 + 5 == param_3) {
        lVar12 = 0;
      }
      else {
        lVar12 = *param_3;
        local_68[5] = lVar12;
        *param_3 = 0;
        lVar6 = param_3[1];
        if (lVar6 != 0) {
          param_3[1] = 0;
          local_68[6] = lVar6;
        }
      }
      iVar10 = *(int *)(lVar12 + 8);
      local_68[7] = (longlong)iVar10;
      param_1[0xd].Ptr = (PVOID)((longlong)param_1[0xd].Ptr + (longlong)iVar10);
      pvVar3 = param_1[0xb].Ptr;
      *local_68 = (longlong)pvVar3;
      local_68[1] = (longlong)(param_1 + 0xb);
      *(longlong **)((longlong)pvVar3 + 8) = local_68;
      param_1[0xb].Ptr = local_68;
      local_58 = &local_68;
      local_60 = param_2;
      FUN_146b2e2e8(pRVar2,local_4c);
      FUN_146b2e29e(local_68);
    }
  }
  else {
    pvVar3 = (PVOID)((longlong)pRVar2->Ptr + (longlong)iVar10 * 0x28);
    plVar11 = (longlong *)((longlong)pvVar3 + 0x18);
    if ((plVar11 == (longlong *)0x0 || pvVar3 == (PVOID)0x0) ||
       (plVar11 = (longlong *)*plVar11, plVar11 == (longlong *)0x0)) goto LAB_1429261c9;
    param_1[0xd].Ptr = (PVOID)((longlong)param_1[0xd].Ptr - (longlong)*(int *)(plVar11[5] + 8));
    if (plVar11 + 5 != param_3) {
      plVar11[5] = *param_3;
      *param_3 = 0;
      plVar4 = (longlong *)param_3[1];
      plVar5 = (longlong *)plVar11[6];
      if (plVar4 != plVar5) {
        param_3[1] = 0;
        plVar11[6] = (longlong)plVar4;
        if (plVar5 != (longlong *)0x0) {
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
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
    }
    param_1[0xd].Ptr = (PVOID)((longlong)param_1[0xd].Ptr + (longlong)*(int *)(plVar11[5] + 8));
    plVar4 = (longlong *)plVar11[1];
    *(longlong **)(*plVar11 + 8) = plVar4;
    *plVar4 = *plVar11;
    plVar11[1] = (longlong)plVar11;
    *plVar11 = (longlong)plVar11;
    pvVar3 = param_1[0xb].Ptr;
    *plVar11 = (longlong)pvVar3;
    plVar11[1] = (longlong)(param_1 + 0xb);
    *(longlong **)((longlong)pvVar3 + 8) = plVar11;
    param_1[0xb].Ptr = plVar11;
  }
  ReleaseSRWLockExclusive(param_1);
LAB_142926080:
  plVar11 = (longlong *)param_3[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar11 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429262bc FUN_1429262bc body=135 status=ok
// SIG undefined FUN_1429262bc(void)

void FUN_1429262bc(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)uVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    do {
      if (*(int *)(*param_1 + 4 + uVar2 * 8) < (int)((ulonglong)param_2 >> 0x20))
      goto LAB_1429262f8;
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
    uVar2 = (ulonglong)uVar1;
  }
LAB_1429262f8:
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_146b2c17a(param_1,uVar1);
  }
  uVar3 = uVar2 & 0xffffffff;
  memmove((void *)(*param_1 + uVar3 * 8 + 8),(void *)(*param_1 + uVar3 * 8),
          (ulonglong)(uVar1 - (int)uVar2) << 3);
  *(undefined8 *)(*param_1 + uVar3 * 8) = param_2;
  return;
}



// FUNCTION 142926344 FUN_142926344 body=754 status=ok
// SIG undefined FUN_142926344(void)

undefined4 *
FUN_142926344(longlong param_1,undefined4 *param_2,undefined4 *param_3,size_t param_4,size_t param_5
             )

{
  int *piVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  size_t _Size;
  longlong lVar8;
  int *piVar9;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined8 *local_180;
  undefined8 local_178;
  int local_170;
  undefined8 local_168;
  int local_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 *local_148 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  iVar3 = FUN_146b2d230((longlong *)(param_1 + 0x28),*param_3);
  if ((iVar3 == -1) ||
     (lVar7 = (longlong)iVar3 * 0x40 + *(longlong *)(param_1 + 0x28), lVar7 == -0x18 || lVar7 == 0))
  {
    *param_2 = 8;
    *(undefined2 *)(param_2 + 1) = 0;
  }
  else {
    if ((longlong)param_5 < 1) {
      param_5 = *(uint *)(lVar7 + 0x28) - param_4;
    }
    FUN_140212f8e(&local_158);
    local_190 = 0;
    local_198 = 0;
    local_1a0 = 0;
    local_1a8 = 0;
    FUN_14021300e(local_148,0x7b2,1,1);
    *(longlong *)(lVar7 + 0x30) = (local_158 - (longlong)local_148[0]) / 10000000;
    local_158 = 0;
    uStack_150 = 0;
    FUN_140393c76(&local_158,param_5 & 0xffffffff,1);
    if ((longlong)*(int *)(lVar7 + 0x20) != 0) {
      piVar9 = *(int **)(lVar7 + 0x18);
      piVar1 = piVar9 + (longlong)*(int *)(lVar7 + 0x20) * 3;
      lVar7 = 0;
      do {
        uVar6 = 8;
        if ((longlong)piVar9[2] == 0) {
LAB_1429265bd:
          *(undefined2 *)(param_2 + 1) = 0;
          memcpy((void *)((longlong)param_2 + 6),local_148,0xfe);
          *param_2 = uVar6;
          if (local_158 != 0) {
            FUN_1400020a8();
          }
          goto LAB_1429263ad;
        }
        if (param_5 == 0) break;
        if ((longlong)*(int *)(param_1 + 0x20) == 0) goto LAB_1429265bd;
        lVar5 = *(longlong *)(param_1 + 0x18);
        lVar8 = (longlong)*(int *)(param_1 + 0x20) * 0x50;
        while (*(int *)(lVar5 + 4) != *piVar9) {
          lVar5 = lVar5 + 0x50;
          lVar8 = lVar8 + -0x50;
          if (lVar8 == 0) goto LAB_1429265bd;
        }
        if (lVar5 == 0) goto LAB_1429265bd;
        _Size = (longlong)*(int *)(lVar5 + 8) * (longlong)piVar9[2];
        if (0 < (longlong)param_4) {
          sVar4 = _Size;
          if ((longlong)param_4 < (longlong)_Size) {
            sVar4 = param_4;
          }
          param_4 = param_4 - sVar4;
          _Size = _Size - sVar4;
        }
        if (0 < (longlong)_Size) {
          if ((longlong)param_5 < (longlong)_Size) {
            _Size = param_5;
          }
          local_168 = *(undefined8 *)piVar9;
          local_160 = piVar9[2];
          FUN_146b2b6b0(param_1,local_148,&local_168);
          if (local_148[0] == (undefined8 *)0x0) {
            local_178 = *(undefined8 *)piVar9;
            local_170 = piVar9[2];
            cVar2 = FUN_146b2b3fc(param_1,&local_178,(int)lVar7 + local_158,_Size);
            if (cVar2 == '\0') {
              uVar6 = 6;
              goto LAB_1429265bd;
            }
          }
          else {
            local_180 = local_148[0];
            memcpy((void *)((int)lVar7 + local_158),(void *)local_148[0][1],_Size);
            (**(code **)*local_180)(local_180,1);
          }
          lVar7 = lVar7 + _Size;
          param_5 = param_5 - _Size;
        }
        piVar9 = piVar9 + 3;
      } while (piVar9 != piVar1);
    }
    *param_2 = DAT_14c845dc8;
    memcpy(param_2 + 1,&DAT_14c845dcc,0x100);
    *(longlong *)(param_2 + 0x42) = local_158;
    param_2[0x44] = (undefined4)uStack_150;
    param_2[0x45] = uStack_150._4_4_;
  }
LAB_1429263ad:
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142926638 FUN_142926638 body=599 status=ok
// SIG undefined FUN_142926638(void)

int FUN_142926638(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  PSRWLOCK SRWLock;
  longlong *plVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_c8 [39];
  undefined1 local_a1;
  undefined2 *local_a0;
  int local_98;
  undefined4 local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  PSRWLOCK local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar7 = *(int *)(param_1 + 0x88) + 1;
  *(int *)(param_1 + 0x88) = iVar7;
  local_90 = 1;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  local_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  SRWLock = (PSRWLOCK)FUN_14001cc68(8,0x10);
  InitializeSRWLock(SRWLock);
  iStack_8c = iVar7;
  iStack_88 = param_3;
  local_48 = SRWLock;
  FUN_146b2b56e(param_1,&local_a0,&local_90);
  plVar4 = (longlong *)FUN_140e92164();
  puVar6 = local_a0;
  if (local_98 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x100))(plVar4,puVar6,0,0);
  iVar8 = 0;
  if (plVar4 != (longlong *)0x0) {
    param_2 = param_2 / (longlong)param_3;
    uStack_78 = 1;
    FUN_146b2c17a(&uStack_80,0);
    *(longlong *)CONCAT44(uStack_7c,uStack_80) = param_2 << 0x20;
    uStack_84 = (undefined4)param_2;
    (**(code **)(*plVar4 + 0x10))(plVar4,param_3 * param_2 + -1);
    local_a1 = 0x21;
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_a1,1);
    iVar8 = *(int *)(param_1 + 0x20);
    uVar3 = iVar8 + 1;
    *(uint *)(param_1 + 0x20) = uVar3;
    if (*(uint *)(param_1 + 0x24) < uVar3) {
      FUN_146b2d70c((longlong *)(param_1 + 0x18));
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar5 = (longlong)iVar8 * 0x50;
    puVar1 = (undefined4 *)(lVar2 + lVar5);
    *puVar1 = local_90;
    puVar1[1] = iStack_8c;
    puVar1[2] = iStack_88;
    puVar1[3] = uStack_84;
    *(undefined8 *)(lVar2 + 0x10 + lVar5) = 0;
    *(ulonglong *)(lVar2 + 0x10 + lVar5) = CONCAT44(uStack_7c,uStack_80);
    uStack_80 = 0;
    uStack_7c = 0;
    *(undefined4 *)(lVar2 + 0x18 + lVar5) = uStack_78;
    *(undefined4 *)(lVar2 + 0x1c + lVar5) = uStack_74;
    uStack_78 = 0;
    uStack_74 = 0;
    *(undefined8 *)(lVar2 + 0x20 + lVar5) = 0;
    *(ulonglong *)(lVar2 + 0x20 + lVar5) = CONCAT44(uStack_6c,uStack_70);
    uStack_70 = 0;
    uStack_6c = 0;
    *(undefined4 *)(lVar2 + 0x28 + lVar5) = uStack_68;
    *(undefined4 *)(lVar2 + 0x2c + lVar5) = local_64;
    uStack_68 = 0;
    local_64 = 0;
    *(ulonglong *)(lVar2 + 0x30 + lVar5) = CONCAT44(uStack_5c,uStack_60);
    uStack_60 = 0;
    uStack_5c = 0;
    *(ulonglong *)(lVar2 + 0x38 + lVar5) = CONCAT44(uStack_54,uStack_58);
    uStack_58 = 0;
    uStack_54 = 0;
    *(undefined1 *)(lVar2 + 0x40 + lVar5) = uStack_50;
    *(PSRWLOCK *)(lVar2 + 0x48 + lVar5) = local_48;
    local_48 = (PSRWLOCK)0x0;
    (**(code **)*plVar4)(plVar4,1);
    iVar8 = iVar7;
  }
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146b2bb42(&local_90);
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar8;
}



// FUNCTION 142926890 FUN_142926890 body=342 status=ok
// SIG undefined FUN_142926890(void)

void FUN_142926890(longlong *param_1)

{
  void *_Src;
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(int *)(*(longlong *)(param_1[1] + 0x28) + 0x198);
  lVar5 = (longlong)local_28;
  local_30 = (undefined2 *)0x0;
  _Src = *(void **)(*(longlong *)(param_1[1] + 0x28) + 400);
  FUN_1446dd670(&local_30,(uint)(lVar5 == 0) + local_28 + 9,0);
  if (lVar5 != 0) {
    memcpy(local_30,_Src,lVar5 * 2);
  }
  FUN_1401aebe8(&local_30,L"vfc.meta",8);
  plVar2 = (longlong *)FUN_14054d1d4();
  puVar4 = local_30;
  if (local_28 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x18))(plVar2,puVar4,0);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_146b2bba6(puVar3,param_1);
    if (((*(byte *)((longlong)puVar3 + 0x29) & 2) == 0) &&
       (cVar1 = (**(code **)(*param_1 + 8))(param_1), cVar1 != '\0')) {
      (**(code **)*puVar3)(puVar3,1);
    }
    else {
      FUN_146b2bc4a(param_1);
      (**(code **)*puVar3)(puVar3,1);
      plVar2 = (longlong *)FUN_14054d1d4();
      puVar4 = local_30;
      if (local_28 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      local_38 = 0;
      (**(code **)(*plVar2 + 0x30))(plVar2,puVar4,0,0);
    }
  }
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429269e8 FUN_1429269e8 body=1164 status=ok
// SIG undefined FUN_1429269e8(void)

ulonglong FUN_1429269e8(ulonglong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  int *piVar13;
  byte bVar14;
  undefined8 unaff_RDI;
  undefined7 uVar16;
  ulonglong uVar15;
  int *piVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  int local_bc;
  uint *local_b8;
  ulonglong local_b0;
  uint local_a4;
  int *local_a0;
  undefined8 local_98;
  int local_90;
  undefined8 local_88;
  int local_80;
  int *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar16 = (undefined7)((ulonglong)unaff_RDI >> 8);
  local_c8 = param_1;
  if ((longlong)*(int *)(param_1 + 0x20) == 0) {
    uVar15 = CONCAT71(uVar16,1);
    uVar23 = 0;
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x18);
    lVar21 = (longlong)*(int *)(param_1 + 0x20) * 0x50 + lVar9;
    uVar15 = CONCAT71(uVar16,1);
    do {
      local_78 = (int *)0x0;
      uStack_70 = 0;
      uVar2 = *(uint *)(lVar9 + 0x28);
      uVar23 = 0;
      if ((longlong)(int)uVar2 != 0) {
        uStack_70 = (ulonglong)uVar2;
        FUN_146b2c17a(&local_78,0);
        memcpy(local_78,*(void **)(lVar9 + 0x20),(longlong)(int)uVar2 << 3);
        uVar23 = uStack_70 & 0xffffffff;
      }
      uVar2 = *(uint *)(lVar9 + 0x18);
      if ((longlong)(int)uVar2 != 0) {
        iVar11 = (int)uVar23;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar2 + iVar11);
        if ((uint)(uStack_70._4_4_ - iVar11) < uVar2) {
          FUN_146b2c17a(&local_78,uVar23);
        }
        memcpy(local_78 + (longlong)iVar11 * 2,*(void **)(lVar9 + 0x10),(longlong)(int)uVar2 << 3);
      }
      FUN_146b2d997(local_78);
      if ((longlong)(int)uStack_70 == 0) {
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
        piVar13 = local_78;
        do {
          if (*piVar13 != (int)uVar23) goto LAB_142926b12;
          uVar23 = (ulonglong)(uint)((int)uVar23 + piVar13[1]);
          piVar13 = piVar13 + 2;
        } while (piVar13 != local_78 + (longlong)(int)uStack_70 * 2);
      }
      if ((uVar15 & 1) != 0) {
        iVar11 = (int)uVar23;
        uVar23 = local_c8;
        if (iVar11 == *(int *)(lVar9 + 0xc)) {
          uVar23 = FUN_146b2be14(local_c8);
          uVar15 = uVar23 & 0xffffffff;
        }
        else {
LAB_142926b12:
          uVar15 = 0;
        }
      }
      if (local_78 != (int *)0x0) {
        uVar23 = FUN_1400020a8();
      }
      lVar9 = lVar9 + 0x50;
      bVar25 = lVar9 != lVar21;
      uVar23 = CONCAT71((int7)(uVar23 >> 8),bVar25);
    } while (((byte)uVar15 & bVar25) != 0);
    if ((uVar15 & 1) == 0) {
LAB_142926b52:
      uVar23 = 0;
      goto LAB_142926e31;
    }
  }
  puVar22 = (uint *)(local_c8 + 0x38);
  uVar2 = *(uint *)(local_c8 + 0x50);
  if (uVar2 == 0) {
    uVar10 = 1;
    uVar20 = 0;
    iVar11 = 0;
    uVar4 = 0;
  }
  else {
    puVar7 = *(uint **)(local_c8 + 0x48);
    if (*(uint **)(local_c8 + 0x48) == (uint *)0x0) {
      puVar7 = puVar22;
    }
    uVar4 = *puVar7;
    if (uVar4 == 0) {
      iVar11 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar11 = uVar2 - 1;
      }
      uVar20 = 0;
      uVar23 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar23 = uVar20;
      }
      iVar11 = 0;
      do {
        if (uVar23 == uVar20) {
          uVar23 = CONCAT71((int7)((ulonglong)puVar7 >> 8),1);
          goto LAB_142926e31;
        }
        iVar11 = iVar11 + 0x20;
        uVar4 = puVar7[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar20 = 0;
      iVar11 = 0;
    }
    uVar10 = (ulonglong)(-uVar4 & uVar4);
    uVar23 = uVar10 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar4 = (uint)lVar9 ^ 0x3f;
    uVar23 = (ulonglong)uVar4;
    uVar4 = (iVar11 - uVar4) + 0x3e;
    if ((int)uVar2 <= (int)uVar4) {
      uVar4 = uVar2;
    }
  }
  uVar23 = CONCAT71((int7)(uVar23 >> 8),1);
  if (uVar4 != uVar2) {
    uVar18 = 0xffffffff;
    uVar23 = local_c8;
    local_b8 = puVar22;
    local_b0 = (ulonglong)uVar2;
    do {
      lVar9 = *(longlong *)(uVar23 + 0x28);
      lVar12 = (longlong)(int)uVar4 * 0x40;
      lVar21 = (longlong)*(int *)(lVar9 + 0x20 + lVar12);
      local_bc = iVar11;
      if (lVar21 == 0) {
        lVar24 = 0;
      }
      else {
        piVar13 = *(int **)(lVar9 + 0x18 + lVar12);
        lVar24 = 0;
        piVar17 = piVar13 + lVar21 * 3;
        do {
          if ((longlong)*(int *)(uVar23 + 0x20) == 0) {
            uVar15 = 0;
            break;
          }
          lVar21 = *(longlong *)(uVar23 + 0x18);
          lVar8 = (longlong)*(int *)(uVar23 + 0x20) * 0x50;
          while (*(int *)(lVar21 + 4) != *piVar13) {
            lVar21 = lVar21 + 0x50;
            lVar8 = lVar8 + -0x50;
            if (lVar8 == 0) goto LAB_142926d24;
          }
          if (lVar21 == 0) {
LAB_142926d24:
            uVar15 = 0;
            puVar22 = local_b8;
            break;
          }
          local_88 = *(undefined8 *)piVar13;
          local_80 = piVar13[2];
          local_a4 = uVar18;
          local_a0 = piVar17;
          FUN_146b2b6b0(uVar23,&local_78,&local_88);
          if (local_78 == (int *)0x0) {
            local_90 = piVar13[2];
            local_98 = *(undefined8 *)piVar13;
            cVar3 = FUN_146b2b3fc(local_c8,&local_98,0,0x7fffffffffffffff);
            if (cVar3 != '\0') goto LAB_142926c97;
            bVar14 = 1;
            uVar15 = 0;
          }
          else {
LAB_142926c97:
            lVar24 = lVar24 + (longlong)*(int *)(lVar21 + 8) * (longlong)piVar13[2];
            bVar14 = 0;
          }
          if (local_78 != (int *)0x0) {
            (*(code *)**(undefined8 **)local_78)(local_78,1);
          }
          piVar13 = piVar13 + 3;
          uVar23 = local_c8;
          piVar17 = local_a0;
          puVar22 = local_b8;
          uVar18 = local_a4;
        } while (!(bool)(bVar14 | piVar13 == local_a0));
      }
      bVar14 = (longlong)(ulonglong)*(uint *)(lVar9 + 0x28 + lVar12) <= lVar24 & (byte)uVar15;
      uVar15 = CONCAT71((int7)(uVar15 >> 8),bVar14);
      if (bVar14 != 1) goto LAB_142926b52;
      uVar18 = uVar18 & ~(uint)uVar10;
      puVar7 = *(uint **)(uVar23 + 0x48);
      if (*(uint **)(uVar23 + 0x48) == (uint *)0x0) {
        puVar7 = puVar22;
      }
      uVar2 = *(uint *)(uVar23 + 0x50);
      iVar19 = (int)uVar20;
      lVar9 = (longlong)iVar19;
      uVar4 = puVar7[lVar9] & uVar18;
      iVar11 = local_bc;
      if (uVar4 == 0) {
        iVar5 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar5 = uVar2 - 1;
        }
        iVar5 = iVar5 >> 5;
        iVar11 = local_bc + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar19) {
          iVar6 = iVar19;
        }
        if (iVar19 < iVar5) {
          lVar21 = 0;
          do {
            uVar4 = puVar7[lVar9 + lVar21 + 1];
            if (uVar4 != 0) {
              uVar20 = (ulonglong)(iVar19 + (int)lVar21 + 1);
              uVar18 = 0xffffffff;
              goto LAB_142926dd2;
            }
            iVar11 = iVar11 + 0x20;
            lVar21 = lVar21 + 1;
          } while (iVar6 - lVar9 != lVar21);
          uVar18 = 0xffffffff;
          iVar19 = iVar6;
        }
        uVar20 = (ulonglong)(iVar19 + 1);
        uVar23 = local_c8;
        puVar22 = local_b8;
        uVar4 = uVar2;
      }
      else {
LAB_142926dd2:
        uVar10 = (ulonglong)(-uVar4 & uVar4);
        uVar1 = uVar10 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar4 = (iVar11 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if ((int)uVar2 <= (int)uVar4) {
          uVar4 = uVar2;
        }
      }
    } while (uVar4 != (uint)local_b0);
    uVar23 = uVar15 & 0xffffffff;
  }
LAB_142926e31:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23;
}



// FUNCTION 142926e76 FUN_142926e76 body=65 status=ok
// SIG undefined FUN_142926e76(void)

void FUN_142926e76(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(longlong *)(param_1 + 0x58) != param_1 + 0x58) &&
     (plVar1 = *(longlong **)(param_1 + 0x60), plVar1 != (longlong *)0x0)) {
    *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) - plVar1[7];
    plVar2 = (longlong *)plVar1[1];
    *(longlong **)(*plVar1 + 8) = plVar2;
    *plVar2 = *plVar1;
    plVar1[1] = (longlong)plVar1;
    *plVar1 = (longlong)plVar1;
    FUN_146b2e130(param_1 + 8,plVar1 + 2);
    return;
  }
  return;
}



// FUNCTION 142926eb7 FUN_142926eb7 body=229 status=ok
// SIG undefined FUN_142926eb7(void)

longlong * FUN_142926eb7(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *param_2;
    puVar2 = (ulonglong *)param_1[1];
    if (puVar2[1] < *puVar2 + 4) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
      }
      else {
        FUN_14572512c(param_1,&local_1c);
      }
    }
    else {
      *puVar2 = *puVar2 + 4;
    }
  }
  else {
    local_1c = 0;
    puVar2 = (ulonglong *)param_1[1];
    puVar1 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
      }
      else {
        FUN_14572512c(param_1,&local_1c);
      }
    }
    else {
      local_1c = *(undefined4 *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    *param_2 = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142926f9e FUN_142926f9e body=29 status=ok
// SIG undefined FUN_142926f9e(void)

undefined8 FUN_142926f9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142926fbc FUN_142926fbc body=526 status=ok
// SIG undefined FUN_142926fbc(void)

undefined8 FUN_142926fbc(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  undefined2 *puVar2;
  size_t sVar3;
  longlong *plVar4;
  ulonglong uVar5;
  wchar_t *_Str;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  longlong local_78;
  uint local_70;
  wchar_t *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 != '\0') goto LAB_1429271a4;
  FUN_140056680(&local_48);
  lVar10 = 0;
  FUN_144a06df0(&local_58,&local_48,0);
  puVar2 = local_58;
  if (local_50 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  while( true ) {
    uVar6 = *(ushort *)((longlong)puVar2 + lVar10);
    uVar5 = (ulonglong)uVar6;
    uVar7 = *(ushort *)((longlong)&DAT_149f2c70a + lVar10);
    if (uVar6 != uVar7) break;
    if (uVar6 == 0) goto LAB_14292706f;
LAB_14292703f:
    lVar10 = lVar10 + 2;
  }
  if ((uVar7 | uVar6) < 0x80) {
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
    uVar8 = (ulonglong)uVar7;
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar8]) goto LAB_14292703f;
  }
  if (uVar6 != uVar7) goto LAB_14292718b;
LAB_14292706f:
  FUN_144a06ecc(&local_68,&local_48);
  FUN_140e83cb0(*(undefined8 *)(param_1 + 0x10),&local_78);
  uVar5 = (ulonglong)local_70;
  if ((int)local_70 < 1) {
LAB_142927139:
    plVar4 = (longlong *)FUN_140e92164();
    puVar2 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar2 = local_48;
    }
    (**(code **)(*plVar4 + 0x88))(plVar4,puVar2);
    uVar5 = (ulonglong)local_70;
  }
  else {
    lVar10 = 0;
    bVar11 = false;
    do {
      _Str = L"";
      if (local_60 != 0) {
        _Str = local_68;
      }
      lVar9 = lVar10;
      while( true ) {
        while (bVar11) {
          lVar10 = lVar10 + 1;
          bVar11 = true;
          lVar9 = lVar10;
          if ((int)uVar5 <= lVar10) goto LAB_14292715e;
        }
        if (_Str != (wchar_t *)0x0) break;
        lVar10 = lVar10 + 1;
        bVar11 = false;
        if ((int)uVar5 <= lVar10) goto LAB_142927139;
      }
      lVar10 = lVar9 * 0x10 + local_78;
      sVar3 = wcslen(_Str);
      local_80 = 0xffffffff;
      local_88 = 0;
      iVar1 = FUN_1447ee042(lVar10,_Str,sVar3 & 0xffffffff,1);
      bVar11 = iVar1 != -1;
      uVar5 = (ulonglong)(int)local_70;
      lVar10 = lVar9 + 1;
    } while (lVar10 < (longlong)uVar5);
    if (iVar1 == -1) goto LAB_142927139;
  }
LAB_14292715e:
  FUN_1447a1747(local_78,uVar5);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_14292718b:
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1429271a4:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1429271cb FUN_1429271cb body=293 status=ok
// SIG undefined FUN_1429271cb(void)

longlong * FUN_1429271cb(longlong *param_1,int *param_2)

{
  int *piVar1;
  
  FUN_142926eb7();
  if (((*(byte *)(param_1 + 5) & 1) == 0) || (*param_2 == 1)) {
    piVar1 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      param_2[1] = *piVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    piVar1 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      param_2[2] = *piVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    piVar1 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + 3,4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      param_2[3] = *piVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    FUN_146b2e990(param_1,param_2 + 4);
    FUN_146b2e990(param_1,param_2 + 8);
  }
  else {
    FUN_14572541c(param_1);
    FUN_146b2e8c8(param_2);
  }
  return param_1;
}



// FUNCTION 1429272f0 FUN_1429272f0 body=168 status=ok
// SIG undefined FUN_1429272f0(void)

longlong * FUN_1429272f0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 1;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 142927398 FUN_142927398 body=104 status=ok
// SIG undefined FUN_142927398(void)

void FUN_142927398(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1429272f0(param_1,param_2 + 1);
  return;
}



// FUNCTION 142927400 FUN_142927400 body=69 status=ok
// SIG undefined FUN_142927400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142927400(void)

{
  _DAT_14c9912a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142927442. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9912b0,1);
  return;
}



// FUNCTION 142927445 FUN_142927445 body=69 status=ok
// SIG undefined FUN_142927445(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142927445(void)

{
  _DAT_14c9912b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142927487. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9912c0,1);
  return;
}



// FUNCTION 14292748a FUN_14292748a body=536 status=ok
// SIG undefined FUN_14292748a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14292748a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 **unaff_RBX;
  undefined7 uVar6;
  bool bVar7;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *param_1;
  if (DAT_14c9912c8 == '\x01') {
    plVar3 = *(longlong **)(lVar2 + 0xb0);
    (**(code **)(*param_2 + 0x18))(param_2,&local_50);
    puVar5 = local_50;
    if (local_48 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    unaff_RBX = (undefined2 **)(**(code **)(*plVar3 + 0xa0))(plVar3,puVar5);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((longlong)unaff_RBX <
        (longlong)*(int *)(lVar2 + 0x130 + (longlong)*(int *)(lVar2 + 0x148) * 0x10)) {
      unaff_RBX = &local_50;
      do {
        FUN_14000f986((float)_DAT_14c75ef8c);
        plVar3 = *(longlong **)(lVar2 + 0xb0);
        (**(code **)(*param_2 + 0x18))(param_2,unaff_RBX);
        puVar5 = &DAT_149dfb77a;
        if (local_48 != 0) {
          puVar5 = local_50;
        }
        lVar4 = (**(code **)(*plVar3 + 0xa0))(plVar3,puVar5);
        if (local_50 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      } while (lVar4 < *(int *)(lVar2 + 0x130 + (longlong)*(int *)(lVar2 + 0x148) * 0x10));
    }
  }
  if (*(char *)(lVar2 + 0x171) == '\x01') {
    unaff_RBX = (undefined2 **)0x0;
    (**(code **)(**(longlong **)(lVar2 + 0x150) + 0x20))(*(longlong **)(lVar2 + 0x150),0xffffffff,0)
    ;
    *(undefined1 *)(lVar2 + 0x171) = 0;
    if ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0) goto LAB_14292767a;
  }
  *(longlong *)(lVar2 + 0x160) = (longlong)*(int *)(lVar2 + 0x148) * 0x10 + lVar2 + 0x128;
  *(longlong **)(lVar2 + 0x168) = param_2;
  *(undefined1 *)(lVar2 + 0x171) = 1;
  (**(code **)(**(longlong **)(lVar2 + 0x158) + 0x10))();
  lVar4 = (longlong)*(int *)(lVar2 + 0x148) * 0x10;
  FUN_140c54e34(param_3,*(undefined8 *)(lVar2 + 0x128 + lVar4),
                (longlong)*(int *)(lVar2 + 0x130 + lVar4));
  bVar7 = *(int *)(lVar2 + 0x148) == 0;
  *(uint *)(lVar2 + 0x148) = (uint)bVar7;
  lVar2 = lVar2 + (ulonglong)bVar7 * 0x10;
  iVar1 = *(int *)(lVar2 + 0x130);
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (iVar1 < 0) {
    *(undefined4 *)(lVar2 + 0x130) = 0;
    unaff_RBX = (undefined2 **)CONCAT71(uVar6,1);
    if ((uint)(*(int *)(lVar2 + 0x134) - iVar1) < (uint)-iVar1) {
      FUN_1447403be();
    }
  }
  else {
    unaff_RBX = (undefined2 **)CONCAT71(uVar6,1);
    if (iVar1 != 0) {
      *(undefined4 *)(lVar2 + 0x130) = 0;
    }
  }
LAB_14292767a:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)unaff_RBX & 0xffffffff;
}



// FUNCTION 1429276a4 FUN_1429276a4 body=17730 status=ok
// SIG undefined FUN_1429276a4(void)

ulonglong FUN_1429276a4(DWORD *param_1)

{
  undefined8 **ppuVar1;
  int *piVar2;
  ulonglong *puVar3;
  DWORD *pDVar4;
  LARGE_INTEGER *pLVar5;
  ushort uVar6;
  ushort uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  char cVar11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  DWORD DVar17;
  DWORD DVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  longlong *plVar22;
  undefined8 uVar23;
  ulonglong *puVar24;
  uint *puVar25;
  undefined7 uVar29;
  longlong *plVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int iVar30;
  undefined1 *puVar31;
  uint *puVar32;
  ulonglong uVar33;
  int iVar34;
  undefined2 *puVar35;
  ulonglong uVar36;
  int iVar37;
  ulonglong uVar38;
  undefined2 *puVar39;
  longlong lVar40;
  undefined8 *puVar41;
  DWORD *pDVar42;
  longlong lVar43;
  ulonglong uVar44;
  LARGE_INTEGER LVar45;
  LARGE_INTEGER *pLVar46;
  undefined8 *puVar47;
  size_t _Size;
  uint *puVar48;
  uint uVar49;
  uint uVar50;
  longlong lVar51;
  longlong lVar52;
  ulonglong *puVar53;
  LARGE_INTEGER LVar54;
  uint *puVar55;
  longlong *plVar56;
  bool bVar57;
  bool bVar58;
  undefined1 auVar59 [16];
  float fVar60;
  undefined1 auStack_c68 [32];
  LARGE_INTEGER *local_c48;
  undefined8 **local_c40;
  LARGE_INTEGER *local_c38;
  uint **local_c30;
  longlong *local_c28;
  longlong *local_c20;
  DWORD *local_c18;
  uint *local_c10;
  longlong *local_c08;
  ulonglong local_c00;
  longlong *local_bf8;
  longlong *local_bf0;
  longlong *local_be8;
  longlong local_be0;
  longlong *local_bd8;
  undefined4 local_bcc;
  longlong *local_bc8;
  ulonglong local_bc0;
  undefined8 *local_bb8;
  LARGE_INTEGER *local_bb0;
  longlong *local_ba8;
  undefined4 local_b9c;
  longlong *local_b98;
  uint *local_b90;
  longlong local_b88;
  longlong *local_b80;
  longlong local_b78;
  uint *local_b70;
  longlong *local_b68;
  ulonglong local_b60;
  undefined8 *local_b58;
  longlong *local_b50;
  longlong *local_b48;
  longlong *local_b40;
  undefined8 *local_b38;
  longlong *local_b30;
  undefined8 *local_b28;
  undefined8 uStack_b20;
  undefined8 *local_b18;
  int local_b10;
  undefined4 local_b0c;
  LARGE_INTEGER local_b08;
  undefined8 local_b00;
  undefined8 *local_af8;
  undefined8 uStack_af0;
  LARGE_INTEGER local_ae8;
  undefined8 uStack_ae0;
  undefined8 *local_ad0;
  undefined8 uStack_ac8;
  ulonglong local_ac0;
  undefined8 local_ab8;
  undefined8 uStack_ab0;
  uint local_a9c;
  undefined8 *local_a98;
  undefined8 uStack_a90;
  undefined8 *local_a88;
  undefined8 uStack_a80;
  undefined8 *local_a78;
  ulonglong uStack_a70;
  undefined8 *local_a68;
  undefined8 uStack_a60;
  longlong *local_a58;
  undefined8 uStack_a50;
  void *local_a48;
  undefined8 uStack_a40;
  longlong local_a38;
  undefined8 uStack_a30;
  longlong local_a28;
  undefined8 uStack_a20;
  longlong *local_a10;
  longlong *local_a08;
  undefined1 local_9f9;
  uint *local_9f8;
  undefined8 uStack_9f0;
  longlong *local_9e8;
  int local_9e0;
  undefined1 local_9d8 [48];
  longlong *local_9a8;
  undefined8 *local_9a0;
  void *local_998;
  DWORD local_990;
  undefined4 local_98c;
  void *local_988;
  DWORD local_980;
  undefined4 local_97c;
  void *local_978;
  DWORD local_970;
  undefined4 local_96c;
  longlong local_968;
  undefined8 local_960;
  undefined8 uStack_958;
  void *local_950;
  DWORD local_948;
  undefined4 local_944;
  DWORD local_940;
  float local_934;
  float local_930;
  undefined1 local_92c [4];
  undefined8 *local_928;
  undefined8 uStack_920;
  longlong local_8e8;
  undefined4 local_8e0;
  undefined8 *local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8b8;
  undefined4 local_8b0;
  undefined8 local_8ac;
  undefined4 local_8a4;
  longlong local_898;
  undefined4 local_890;
  undefined8 *local_888;
  undefined8 uStack_880;
  undefined8 local_868;
  undefined4 local_860;
  undefined8 local_85c;
  undefined4 local_854;
  longlong local_848;
  undefined4 local_840;
  LARGE_INTEGER local_838;
  LARGE_INTEGER LStack_830;
  undefined8 local_818;
  undefined4 local_810;
  undefined8 local_80c;
  undefined4 local_804;
  longlong local_7f8;
  undefined4 local_7f0;
  LARGE_INTEGER local_7e8;
  undefined8 **ppuStack_7e0;
  ulonglong local_7d8;
  int local_7d0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6c8;
  undefined4 local_6c0;
  undefined8 local_6bc;
  undefined4 local_6b4;
  longlong local_6a8;
  undefined4 local_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 local_678;
  undefined4 local_670;
  undefined8 local_66c;
  undefined4 local_664;
  longlong local_658;
  undefined4 local_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 local_628;
  undefined4 local_620;
  undefined8 local_61c;
  undefined4 local_614;
  longlong local_608;
  undefined4 local_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5d8;
  undefined4 local_5d0;
  undefined8 local_5cc;
  undefined4 local_5c4;
  longlong local_5b8;
  undefined4 local_5b0;
  longlong local_5a8;
  undefined8 uStack_5a0;
  uint local_598 [4];
  uint *local_588;
  int local_580;
  undefined8 local_57c;
  undefined4 local_574;
  longlong local_568;
  undefined4 local_560;
  longlong local_558;
  undefined8 uStack_550;
  undefined8 local_538;
  undefined4 local_530;
  undefined8 local_52c;
  undefined4 local_524;
  longlong local_518;
  undefined4 local_510;
  longlong local_508;
  undefined8 uStack_500;
  uint local_4f8 [4];
  uint *local_4e8;
  int local_4e0;
  undefined8 local_4dc;
  undefined4 local_4d4;
  longlong local_4c8;
  undefined4 local_4c0;
  longlong local_4b8;
  undefined8 uStack_4b0;
  uint local_4a8 [4];
  uint *local_498;
  int local_490;
  undefined8 local_48c;
  undefined4 local_484;
  longlong local_478;
  undefined4 local_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_448;
  undefined4 local_440;
  undefined8 local_43c;
  undefined4 local_434;
  longlong local_428;
  undefined4 local_420;
  longlong local_418;
  undefined8 uStack_410;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined8 local_3ec;
  int local_3e4;
  undefined1 local_3e0 [8];
  undefined1 *local_3d8;
  int local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined8 local_39c;
  undefined4 local_394;
  longlong local_388;
  undefined4 local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_358;
  undefined4 local_350;
  undefined8 local_34c;
  undefined4 local_344;
  longlong local_338;
  undefined4 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2fc;
  undefined4 local_2f4;
  longlong local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2ac;
  undefined4 local_2a4;
  longlong local_298;
  undefined4 local_290;
  longlong local_288;
  undefined8 uStack_280;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_25c;
  undefined4 local_254;
  longlong local_248;
  undefined4 local_240;
  longlong local_238;
  undefined8 uStack_230;
  uint local_228 [4];
  uint *local_218;
  uint local_210;
  undefined8 local_20c;
  undefined4 local_204;
  longlong local_1f8;
  undefined4 local_1f0;
  LARGE_INTEGER local_1e8;
  void *local_1e0;
  ulonglong uStack_1d8;
  void *local_1d0;
  undefined8 uStack_1c8;
  void *local_1c0;
  undefined8 uStack_1b8;
  void *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_174;
  undefined4 local_16c;
  undefined8 local_160;
  undefined4 local_158;
  void *local_150;
  undefined8 uStack_148;
  void *local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c68;
  QueryPerformanceCounter(&local_1e8);
  local_b78 = CONCAT44(local_1e8.s.HighPart,local_1e8.s.LowPart);
  local_bcc = (undefined4)CONCAT71((int7)((ulonglong)local_b78 >> 8),1);
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar30 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar30 != 2)) {
    if (iVar30 == 1) {
      DVar17 = FUN_140ad26c0();
      DVar18 = GetCurrentThreadId();
      local_bcc = CONCAT31((int3)(DVar18 >> 8),DVar17 == DVar18);
    }
    else {
      local_bcc = 0;
    }
  }
  if (1 < (int)param_1[0x62]) {
    plVar19 = (longlong *)FUN_14054d1d4();
    puVar39 = &DAT_149dfb77a;
    puVar35 = &DAT_149dfb77a;
    if (param_1[0x5e] != 0) {
      puVar35 = *(undefined2 **)(param_1 + 0x5c);
    }
    (**(code **)(*plVar19 + 0x58))(plVar19,puVar35,1);
    plVar19 = (longlong *)FUN_14054d1d4();
    if (param_1[0x5e] != 0) {
      puVar39 = *(undefined2 **)(param_1 + 0x5c);
    }
    cVar11 = (**(code **)(*plVar19 + 0x50))(plVar19,puVar39);
    if (cVar11 != '\0') {
      local_c18 = param_1;
      QueryPerformanceCounter(&local_1e8);
      local_930 = 32.5;
      local_934 = 10.0;
      local_c48 = (LARGE_INTEGER *)&DAT_14c872ce8;
      FUN_14153841e(DAT_14c872ce0,L"BuildPatchServices",L"GenerationScannerSizeMegabytes",&local_930
                   );
      local_c48 = (LARGE_INTEGER *)&DAT_14c872ce8;
      FUN_14153841e(DAT_14c872ce0,L"BuildPatchServices",L"StatsLoggerTimeSeconds",&local_934);
      fVar60 = local_930;
      if (500.0 <= local_930) {
        fVar60 = 500.0;
      }
      if (fVar60 <= 10.0) {
        fVar60 = 10.0;
      }
      if (60.0 <= local_934) {
        local_934 = 60.0;
      }
      if (local_934 <= 1.0) {
        local_934 = 1.0;
      }
      local_930 = fVar60;
      plVar19 = (longlong *)FUN_14001cc68(0x148,0x10);
      FUN_146b45a7a(plVar19);
      FUN_140056680(&local_1e8,L"Generation: Total Time");
      local_b80 = (longlong *)(**(code **)(*plVar19 + 8))(plVar19,&local_1e8,0,0);
      if (CONCAT44(local_1e8.s.HighPart,local_1e8.s.LowPart) != 0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1e8,L"Generation: Layers");
      local_b30 = (longlong *)(**(code **)(*plVar19 + 8))(plVar19,&local_1e8,4,0);
      if (CONCAT44(local_1e8.s.HighPart,local_1e8.s.LowPart) != 0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1e8,L"Generation: Scanner Backlog");
      local_b40 = (longlong *)(**(code **)(*plVar19 + 8))(plVar19,&local_1e8,4,0);
      pDVar42 = local_c18;
      if (CONCAT44(local_1e8.s.HighPart,local_1e8.s.LowPart) != 0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1e8,L"Generation: Unmatched Buffers Allocation");
      local_b48 = (longlong *)(**(code **)(*plVar19 + 8))(plVar19,&local_1e8,1,0);
      if (CONCAT44(local_1e8.s.HighPart,local_1e8.s.LowPart) != 0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1e8,L"Generation: Unmatched Buffers Use");
      local_b50 = (longlong *)(**(code **)(*plVar19 + 8))(plVar19,&local_1e8,1,0);
      if (CONCAT44(local_1e8.s.HighPart,local_1e8.s.LowPart) != 0) {
        FUN_1400020a8();
      }
      puVar20 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar20 = &PTR_FUN_149f2e800;
      uVar21 = FUN_14054d1d4();
      puVar20[1] = uVar21;
      uVar21 = FUN_140e92164();
      puVar20[2] = uVar21;
      DVar17 = *pDVar42;
      local_b58 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *local_b58 = &PTR_FUN_149f2ed90;
      local_b58[1] = puVar20;
      *(DWORD *)(local_b58 + 2) = DVar17;
      local_960 = 0x40a0000000000005;
      uStack_958 = 0x800000032;
      local_950 = (void *)0x0;
      local_948 = pDVar42[0x5e];
      lVar40 = (longlong)(int)local_948;
      pvVar8 = *(void **)(pDVar42 + 0x5c);
      local_bb8 = puVar20;
      if (lVar40 == 0) {
        local_944 = 0;
      }
      else {
        FUN_1446dd670(&local_950,local_948,0);
        memcpy(local_950,pvVar8,lVar40 * 2);
        DVar17 = *pDVar42;
      }
      local_940 = DVar17;
      plVar22 = (longlong *)FUN_146b63baa(&local_960,local_bb8,local_b58,plVar19);
      local_180 = 0;
      local_178 = 0;
      local_1e0 = (void *)0x0;
      uStack_1d8 = 0;
      local_1d0 = (void *)0x0;
      uStack_1c8 = 0;
      local_1c0 = (void *)0x0;
      uStack_1b8 = 0;
      local_1b0 = (void *)0x0;
      uStack_1a8 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      local_174 = 0xffffffff00000080;
      local_16c = 0;
      local_160 = 0;
      local_158 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_150 = (void *)0x0;
      uStack_148 = 0;
      local_140 = (void *)0x0;
      uStack_138 = 0;
      local_130 = (void *)0x0;
      uStack_128 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_f4 = 0xffffffff00000080;
      local_ec = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_a4 = 0xffffffff00000080;
      local_9c = 0;
      local_90 = 0;
      local_88 = 0;
      local_1e8.s.LowPart = *pDVar42;
      local_1e8.s.HighPart = pDVar42[6];
      if (&local_1e0 != (void **)(pDVar42 + 8)) {
        uVar14 = pDVar42[10];
        pvVar8 = *(void **)(pDVar42 + 8);
        uStack_1d8 = (ulonglong)uVar14;
        if ((longlong)(int)uVar14 == 0) {
          uStack_1d8 = (ulonglong)uVar14;
          pDVar42 = local_c18;
        }
        else {
          FUN_1446dd670(&local_1e0,uVar14,0);
          memcpy(local_1e0,pvVar8,(longlong)(int)uVar14 * 2);
          pDVar42 = local_c18;
        }
      }
      local_bf8 = plVar19;
      if (&local_1d0 != (void **)(pDVar42 + 0xc)) {
        uVar14 = local_c18[0xe];
        pvVar8 = *(void **)(local_c18 + 0xc);
        uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uVar14);
        if (uVar14 == 0 && uStack_1c8._4_4_ == 0) {
          uStack_1c8 = (ulonglong)uVar14;
        }
        else {
          FUN_1446dd670(&local_1d0,uVar14);
          if (uVar14 != 0) {
            memcpy(local_1d0,pvVar8,(longlong)(int)uVar14 * 2);
          }
        }
      }
      if (&local_1c0 != (void **)(local_c18 + 0x10)) {
        uVar14 = local_c18[0x12];
        pvVar8 = *(void **)(local_c18 + 0x10);
        uStack_1b8 = CONCAT44(uStack_1b8._4_4_,uVar14);
        if (uVar14 == 0 && uStack_1b8._4_4_ == 0) {
          uStack_1b8 = (ulonglong)uVar14;
        }
        else {
          FUN_1446dd670(&local_1c0,uVar14);
          if (uVar14 != 0) {
            memcpy(local_1c0,pvVar8,(longlong)(int)uVar14 * 2);
          }
        }
      }
      if (&local_1b0 != (void **)(local_c18 + 0x14)) {
        uVar14 = local_c18[0x16];
        pvVar8 = *(void **)(local_c18 + 0x14);
        uStack_1a8 = CONCAT44(uStack_1a8._4_4_,uVar14);
        if (uVar14 == 0 && uStack_1a8._4_4_ == 0) {
          uStack_1a8 = (ulonglong)uVar14;
        }
        else {
          FUN_1446dd670(&local_1b0,uVar14);
          if (uVar14 != 0) {
            memcpy(local_1b0,pvVar8,(longlong)(int)uVar14 * 2);
          }
        }
      }
      pDVar42 = local_c18;
      FUN_1410b2022(&local_1a0,local_c18 + 0x24);
      if (&local_150 != (void **)(pDVar42 + 0x38)) {
        uVar14 = local_c18[0x3a];
        pvVar8 = *(void **)(local_c18 + 0x38);
        uStack_148 = CONCAT44(uStack_148._4_4_,uVar14);
        if (uVar14 == 0 && uStack_148._4_4_ == 0) {
          uStack_148 = (ulonglong)uVar14;
        }
        else {
          FUN_1446dd670(&local_150,uVar14);
          if (uVar14 != 0) {
            memcpy(local_150,pvVar8,(longlong)(int)uVar14 * 2);
          }
        }
      }
      if (&local_140 != (void **)(local_c18 + 0x3c)) {
        uVar14 = local_c18[0x3e];
        pvVar8 = *(void **)(local_c18 + 0x3c);
        uStack_138 = CONCAT44(uStack_138._4_4_,uVar14);
        if (uVar14 == 0 && uStack_138._4_4_ == 0) {
          uStack_138 = (ulonglong)uVar14;
        }
        else {
          FUN_1446dd670(&local_140,uVar14);
          if (uVar14 != 0) {
            memcpy(local_140,pvVar8,(longlong)(int)uVar14 * 2);
          }
        }
      }
      if (&local_130 != (void **)(local_c18 + 0x40)) {
        uVar14 = local_c18[0x42];
        pvVar8 = *(void **)(local_c18 + 0x40);
        uStack_128 = CONCAT44(uStack_128._4_4_,uVar14);
        if (uVar14 == 0 && uStack_128._4_4_ == 0) {
          uStack_128 = (ulonglong)uVar14;
        }
        else {
          FUN_1446dd670(&local_130,uVar14);
          if (uVar14 != 0) {
            memcpy(local_130,pvVar8,(longlong)(int)uVar14 * 2);
          }
        }
      }
      pDVar42 = local_c18;
      FUN_146b479aa(&local_120,local_c18 + 0x48);
      if ((int)pDVar42[0x22] < 2) {
LAB_142927f4f:
        plVar19 = local_bf8;
        pDVar4 = pDVar42 + 0x5c;
        if ((char)pDVar42[0x45] == '\x01') {
          FUN_140212f8e(&local_7e8);
          auVar59._0_8_ = (double)(float)local_c18[0x44] * 864000000000.0 + 0.5;
          auVar59._8_8_ = 0;
          auVar59 = roundpd(auVar59,auVar59,1);
          local_968 = local_7e8.QuadPart - (longlong)auVar59._0_8_;
          pDVar42 = local_c18;
        }
        else {
          local_968 = 0;
        }
        local_be8 = (longlong *)FUN_146b6618a(pDVar4,&local_968,pDVar42,plVar19);
        local_998 = (void *)0x0;
        local_990 = pDVar42[4];
        lVar40 = (longlong)(int)local_990;
        pvVar8 = *(void **)(pDVar42 + 2);
        if (lVar40 == 0) {
          local_98c = 0;
        }
        else {
          FUN_1446dd670(&local_998,local_990,0);
          memcpy(local_998,pvVar8,lVar40 * 2);
        }
        local_988 = (void *)0x0;
        local_980 = local_c18[0x1a];
        lVar40 = (longlong)(int)local_980;
        pvVar8 = *(void **)(local_c18 + 0x18);
        if (lVar40 == 0) {
          local_97c = 0;
        }
        else {
          FUN_1446dd670(&local_988,local_980,0);
          memcpy(local_988,pvVar8,lVar40 * 2);
        }
        local_978 = (void *)0x0;
        local_970 = local_c18[0x1e];
        lVar40 = (longlong)(int)local_970;
        pvVar8 = *(void **)(local_c18 + 0x1c);
        if (lVar40 == 0) {
          local_96c = 0;
        }
        else {
          FUN_1446dd670(&local_978,local_970,0);
          memcpy(local_978,pvVar8,lVar40 * 2);
        }
        local_9a8 = plVar19;
        local_9a0 = local_bb8;
        FUN_146b308be(local_9d8,&local_998);
        local_c08 = (longlong *)FUN_146b6ac70(local_9d8,&local_9a8);
        (**(code **)(*local_c08 + 0x28))(local_c08,&local_9e8);
        local_bd8 = plVar22;
        if ((int)local_c18[0x12] < 2) {
LAB_142928257:
          if (1 < (int)local_c18[0x3e]) {
            local_7e8 = *(LARGE_INTEGER *)(local_c18 + 2);
            iVar30 = local_c18[4] - 1;
            if (local_c18[4] == 0) {
              iVar30 = 0;
            }
            ppuStack_7e0 = (undefined8 **)CONCAT44(ppuStack_7e0._4_4_,iVar30);
            local_7d8 = *(ulonglong *)(local_c18 + 0x3c);
            local_7d0 = local_c18[0x3e] - 1;
            FUN_140bee87a(&local_238,&local_7e8,2);
            bVar58 = true;
            if ((longlong)local_9e0 != 0) {
              plVar26 = local_9e8;
LAB_1429282e2:
              if ((int)plVar26[1] != (int)uStack_230) {
                if ((int)plVar26[1] + (int)uStack_230 == 1) goto LAB_14292835e;
                goto LAB_142928346;
              }
              if (1 < (int)uStack_230) {
                lVar40 = 0;
                do {
                  uVar6 = *(ushort *)(*plVar26 + lVar40);
                  uVar7 = *(ushort *)(local_238 + lVar40);
                  if (uVar6 == uVar7) {
                    if (uVar6 == 0) break;
                  }
                  else {
                    plVar22 = local_bd8;
                    if (0x7f < (uVar7 | uVar6)) {
                      iVar30 = (uint)uVar6 - (uint)uVar7;
                      goto LAB_142928336;
                    }
                    if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[(uint)uVar7])
                    goto code_r0x000142928333;
                  }
                  lVar40 = lVar40 + 2;
                } while( true );
              }
              goto LAB_14292835e;
            }
LAB_142928360:
            if (local_238 != 0) {
              FUN_1400020a8();
            }
            if (bVar58) goto LAB_14292836f;
          }
          cVar11 = (**(code **)(*local_be8 + 8))();
          if (cVar11 == '\0') {
            do {
              if ((char)local_bcc != '\0') {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c872ef8) &&
                   (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
                  FUN_1459825b0(&DAT_14c872ee0);
                  atexit(FUN_1427868a5);
                  _Init_thread_footer(&DAT_14c872ef8);
                }
                FUN_1400e4168(&DAT_14c872ee0,0);
              }
              QueryPerformanceCounter(&local_7e8);
              LOCK();
              *local_b80 = local_7e8.QuadPart - local_b78;
              UNLOCK();
              (**(code **)(*local_bf8 + 0x10))(local_bf8,local_934);
              FUN_14000f986(0x3c23d70a);
              cVar11 = (**(code **)(*local_be8 + 8))();
            } while (cVar11 == '\0');
          }
          pDVar42 = local_c18;
          local_9f8 = (uint *)0x0;
          uStack_9f0 = 0;
          if ((char)local_c18[0x47] == '\x01') {
            uVar21 = (**(code **)(*local_be8 + 0x10))();
            FUN_146b309a8(uVar21,&local_7e8);
            uVar44 = uStack_9f0;
            plVar19 = local_c08;
            lVar40 = (longlong)(int)(uint)ppuStack_7e0;
            if (lVar40 != 0) {
              iVar30 = (int)uStack_9f0;
              lVar43 = (longlong)(int)uStack_9f0;
              uStack_9f0 = CONCAT44(uStack_9f0._4_4_,(int)uStack_9f0 + (uint)ppuStack_7e0);
              if ((uint)(uStack_9f0._4_4_ - iVar30) < (uint)ppuStack_7e0) {
                FUN_1447808da(&local_9f8,uVar44 & 0xffffffff);
              }
              memmove(local_9f8 + lVar43,(void *)local_7e8,lVar40 << 2);
              ppuStack_7e0 = (undefined8 **)((ulonglong)ppuStack_7e0 & 0xffffffff00000000);
            }
            if ((ulonglong *)local_7e8.QuadPart != (ulonglong *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            uStack_9f0 = 1;
            FUN_1447808da(&local_9f8,0);
            *local_9f8 = pDVar42[0x46];
            plVar19 = local_c08;
          }
          FUN_146b4e08f(local_9f8,uStack_9f0 & 0xffffffff);
          pDVar42 = local_c18;
          uVar14 = 0;
          if (0 < (int)uStack_9f0) {
            uVar14 = *local_9f8;
          }
          local_b70 = local_c18 + 0x46;
          uVar50 = local_c18[0x46];
          if (local_c18[0x46] < uVar14) {
            uVar50 = uVar14;
          }
          local_b98 = (longlong *)FUN_146b6396a();
          local_218 = (uint *)0x0;
          local_210 = 0;
          local_238 = 0;
          uStack_230 = 0;
          local_20c = 0xffffffff00000080;
          local_204 = 0;
          local_1f8 = 0;
          local_1f0 = 0;
          local_268 = 0;
          local_260 = 0;
          local_288 = 0;
          uStack_280 = 0;
          local_25c = 0xffffffff00000080;
          local_254 = 0;
          local_248 = 0;
          local_240 = 0;
          local_2b8 = 0;
          local_2b0 = 0;
          local_2d8 = 0;
          uStack_2d0 = 0;
          local_2ac = 0xffffffff00000080;
          local_2a4 = 0;
          local_298 = 0;
          local_290 = 0;
          local_308 = 0;
          local_300 = 0;
          local_328 = 0;
          uStack_320 = 0;
          local_2fc = 0xffffffff00000080;
          local_2f4 = 0;
          local_2e8 = 0;
          local_2e0 = 0;
          local_358 = 0;
          local_350 = 0;
          local_378 = 0;
          uStack_370 = 0;
          local_34c = 0xffffffff00000080;
          local_344 = 0;
          local_338 = 0;
          local_330 = 0;
          local_3a8 = 0;
          local_3a0 = 0;
          local_3c8 = 0;
          uStack_3c0 = 0;
          local_39c = 0xffffffff00000080;
          local_394 = 0;
          local_388 = 0;
          local_380 = 0;
          local_3f8 = 0;
          local_3f0 = 0;
          local_418 = 0;
          uStack_410 = 0;
          local_3ec = 0xffffffff00000080;
          local_3e4 = 0;
          local_3d8 = (undefined1 *)0x0;
          local_3d0 = 0;
          local_448 = 0;
          local_440 = 0;
          local_468 = 0;
          uStack_460 = 0;
          local_43c = 0xffffffff00000080;
          local_434 = 0;
          local_428 = 0;
          local_420 = 0;
          local_498 = (uint *)0x0;
          local_490 = 0;
          local_4b8 = 0;
          uStack_4b0 = 0;
          local_48c = 0xffffffff00000080;
          local_484 = 0;
          local_478 = 0;
          local_470 = 0;
          local_4e8 = (uint *)0x0;
          local_4e0 = 0;
          local_508 = 0;
          uStack_500 = 0;
          local_4dc = 0xffffffff00000080;
          local_4d4 = 0;
          local_4c8 = 0;
          local_4c0 = 0;
          local_538 = 0;
          local_530 = 0;
          local_558 = 0;
          uStack_550 = 0;
          local_52c = 0xffffffff00000080;
          local_524 = 0;
          local_518 = 0;
          local_510 = 0;
          local_9f9 = (undefined1)pDVar42[100];
          FUN_146b6bd9a(&local_a10,local_bb8,&local_9f9,&local_1e8);
          local_a28 = 0;
          uStack_a20 = 0;
          local_a38 = 0;
          uStack_a30 = 0;
          local_588 = (uint *)0x0;
          local_580 = 0;
          local_5a8 = 0;
          uStack_5a0 = 0;
          local_57c = 0xffffffff00000080;
          local_574 = 0;
          local_568 = 0;
          local_560 = 0;
          local_5d8 = 0;
          local_5d0 = 0;
          local_5f8 = 0;
          uStack_5f0 = 0;
          local_5cc = 0xffffffff00000080;
          local_5c4 = 0;
          local_5b8 = 0;
          local_5b0 = 0;
          local_628 = 0;
          local_620 = 0;
          local_648 = 0;
          uStack_640 = 0;
          local_61c = 0xffffffff00000080;
          local_614 = 0;
          local_608 = 0;
          local_600 = 0;
          local_678 = 0;
          local_670 = 0;
          local_698 = 0;
          uStack_690 = 0;
          local_66c = 0xffffffff00000080;
          local_664 = 0;
          local_658 = 0;
          local_650 = 0;
          local_6c8 = 0;
          local_6c0 = 0;
          local_6e8 = 0;
          uStack_6e0 = 0;
          local_6bc = 0xffffffff00000080;
          local_6b4 = 0;
          local_6a8 = 0;
          local_6a0 = 0;
          local_a48 = (void *)0x0;
          uStack_a40 = 0;
          local_a58 = (longlong *)0x0;
          uStack_a50 = 0;
          cVar11 = (**(code **)(*plVar19 + 0x40))(plVar19);
          if (cVar11 == '\0') {
            uVar44 = (ulonglong)(fVar60 * 1048576.0);
            local_bf0 = (longlong *)
                        ((longlong)(fVar60 * 1048576.0 - 9.223372e+18) & (longlong)uVar44 >> 0x3f |
                        uVar44);
            local_bb0 = (LARGE_INTEGER *)(ulonglong)(uVar50 - 1);
            local_ba8 = (longlong *)((longlong)(ulonglong)uVar50 + (longlong)local_bf0);
            local_b68 = (longlong *)((longlong)local_bf0 - (longlong)local_bb0);
            local_b60 = ~(ulonglong)local_bb0;
            bVar58 = true;
            local_be0 = 0;
            local_b88 = 0;
            local_b90 = (uint *)(ulonglong)uVar50;
LAB_142928c16:
            bVar12 = (**(code **)(*local_c08 + 0x10))();
            if (((int)uStack_a50 < 1 & bVar12) == 1) {
              if (!bVar58) goto LAB_142928979;
            }
            else if ((0 < (int)uStack_a50) &&
                    (cVar11 = (**(code **)(**(longlong **)(*local_a58 + 0x40) + 8))(),
                    cVar11 != '\0')) {
              LVar54.QuadPart = *local_a58;
              (**(code **)(**(longlong **)(LVar54.QuadPart + 0x40) + 0x10))
                        (*(longlong **)(LVar54.QuadPart + 0x40),&local_838);
              if ((longlong)(int)LStack_830._0_4_ != 0) {
                lVar40 = (longlong)(int)LStack_830._0_4_ << 5;
                LVar45 = local_838;
                do {
                  local_888 = (undefined8 *)0x0;
                  uStack_880 = 0;
                  uVar44 = FUN_146b30ae2((undefined4 *)(LVar54.QuadPart + 0x30),*(longlong *)LVar45,
                                         *(undefined4 *)(LVar45.QuadPart + 0x18),&local_888);
                  if ((*(char *)(LVar54.QuadPart + 0x10) == '\0') &&
                     (plVar19 = local_bf8, plVar22 = local_bd8, puVar20 = local_888,
                     uVar44 != *(uint *)(LVar45.QuadPart + 0x18))) goto joined_r0x00014292aaf9;
                  *(longlong *)LVar45 = *(longlong *)LVar45 + *(longlong *)(LVar54.QuadPart + 8);
                  if (uVar44 != *(uint *)(LVar45.QuadPart + 0x18)) {
                    ppuStack_7e0 = (undefined8 **)(LVar45.QuadPart + 0x18);
                    local_7e8.QuadPart = LVar45.QuadPart + 8;
                    FUN_146b4e46a(&local_558,&local_8d8,&local_7e8,0);
                  }
                  *(int *)(LVar45.QuadPart + 0x18) = (int)uVar44;
                  local_a68 = local_888;
                  uStack_a60 = uStack_880;
                  (**(code **)(*local_b98 + 8))
                            (local_b98,*(undefined4 *)LVar54,LVar45.QuadPart,&local_a68);
                  LVar45.QuadPart = LVar45.QuadPart + 0x20;
                  lVar40 = lVar40 + -0x20;
                } while (lVar40 != 0);
              }
              uVar21 = FUN_146b4ea06(&local_328,*(undefined4 *)LVar54,LVar54.QuadPart);
              FUN_146b30bb8(uVar21,&local_888,(undefined4 *)(LVar54.QuadPart + 0x30));
              uVar21 = FUN_146b4ea06(&local_328,*(undefined4 *)LVar54,LVar54.QuadPart);
              for (puVar20 = *(undefined8 **)(LVar54.QuadPart + 0x30); puVar20 != (undefined8 *)0x0;
                  puVar20 = (undefined8 *)puVar20[3]) {
                FUN_146b31154(uVar21,*puVar20,puVar20[1],0);
              }
              pLVar46 = (LARGE_INTEGER *)0x0;
              if (*(longlong *)(LVar54.QuadPart + 8) != 0) {
                pLVar46 = local_bb0;
              }
              uVar44 = (longlong)*(int *)(LVar54.QuadPart + 0x28) - (longlong)pLVar46;
              uVar21 = FUN_146b4ef82(&local_508,*(undefined4 *)LVar54,LVar54.QuadPart);
              lVar40 = *(longlong *)(LVar54.QuadPart + 0x20);
              local_7e8.QuadPart = 0;
              ppuStack_7e0 = (undefined8 **)0x0;
              FUN_146b31154(&local_7e8,(longlong)pLVar46 + *(longlong *)(LVar54.QuadPart + 8),uVar44
                            ,0);
              FUN_146b30c9a(uVar21,&local_7e8,lVar40 + (longlong)pLVar46,uVar44 & 0xffffffff);
              LVar45 = local_7e8;
              while ((undefined4 *)LVar45.QuadPart != (undefined4 *)0x0) {
                LVar45 = (LARGE_INTEGER)((LARGE_INTEGER *)(LVar45.QuadPart + 0x18))->QuadPart;
                FUN_1400020a8();
              }
              uVar44 = local_b60;
              if (*(char *)(LVar54.QuadPart + 0x10) != '\0') {
                uVar44 = 0;
              }
              local_8d8 = (undefined8 *)
                          (uVar44 + ((longlong)*(int *)(LVar54.QuadPart + 0x28) -
                                    *(longlong *)(LVar54.QuadPart + 0x18)) +
                                    *(longlong *)(LVar54.QuadPart + 8));
              (**(code **)(*local_b98 + 0x10))(local_b98,*(undefined4 *)LVar54);
              if (*(char *)(LVar54.QuadPart + 0x10) == '\x01') {
                ppuStack_7e0 = &local_8d8;
                local_7e8.QuadPart = LVar54.QuadPart;
                FUN_146b4fb4a(&local_418,&local_928,&local_7e8,0);
              }
              plVar19 = (longlong *)FUN_146b50026(&local_2d8,*(undefined4 *)LVar54,LVar54.QuadPart);
              *plVar19 = *plVar19 + -1;
              FUN_146b501f2(&local_a58);
              FUN_146b50248(&local_a58);
              puVar20 = local_888;
              while (puVar20 != (undefined8 *)0x0) {
                puVar20 = (undefined8 *)puVar20[3];
                FUN_1400020a8();
              }
              if ((longlong *)local_838.QuadPart != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
            local_ab8 = local_ab8 & 0xffffffff00000000;
            lVar40 = 0;
            do {
              local_7e8.QuadPart = 0;
              ppuStack_7e0 = (undefined8 **)0x0;
              uVar21 = FUN_146b4ea06(&local_328,lVar40,&local_ab8);
              puVar48 = (uint *)FUN_146b50026(&local_3c8,local_ab8 & 0xffffffff,&local_ab8);
              (**(code **)(*local_b98 + 0x18))(local_b98,&local_838,local_ab8 & 0xffffffff);
              if ((longlong *)LStack_830.QuadPart != (longlong *)0x0) {
                local_c10 = puVar48;
                uVar23 = FUN_146b4ef82(&local_508,local_ab8 & 0xffffffff,&local_ab8);
                local_888 = (undefined8 *)0x0;
                uStack_880 = 0;
                local_8d8 = (undefined8 *)0x0;
                uStack_8d0 = 0;
                FUN_146b31154(&local_8d8,local_838.QuadPart,LStack_830.QuadPart,0);
                local_928 = (undefined8 *)0x0;
                uStack_920 = 0;
                FUN_146b30ae2(uVar21,local_838.QuadPart,LStack_830.QuadPart);
                if ((longlong)(int)(uint)ppuStack_7e0 != 0) {
                  puVar53 = (ulonglong *)
                            ((longlong)(int)(uint)ppuStack_7e0 * 0x30 + local_7e8.QuadPart);
                  LVar54 = local_7e8;
                  do {
                    local_a78 = (undefined8 *)0x0;
                    uStack_a70 = 0;
                    FUN_146b31154(&local_a78,*(ulonglong *)LVar54,
                                  *(undefined4 *)(LVar54.QuadPart + 0x18),0);
                    puVar20 = *(undefined8 **)(LVar54.QuadPart + 0x20);
                    if (puVar20 != (undefined8 *)0x0) {
                      do {
                        FUN_146b31154(&local_a28,*puVar20,puVar20[1],0);
                        puVar20 = (undefined8 *)puVar20[3];
                      } while (puVar20 != (undefined8 *)0x0);
                      for (puVar20 = *(undefined8 **)(LVar54.QuadPart + 0x20);
                          puVar20 != (undefined8 *)0x0; puVar20 = (undefined8 *)puVar20[3]) {
                        FUN_146b46d18(&local_928,*puVar20,puVar20[1]);
                      }
                    }
                    puVar3 = (ulonglong *)(LVar54.QuadPart + 8);
                    (**(code **)(*local_a10 + 8))
                              (local_a10,puVar3,(ulonglong *)(LVar54.QuadPart + 0x20));
                    cVar11 = (**(code **)(*local_be8 + 0x38))(local_be8,puVar3);
                    if (cVar11 == '\0') {
                      local_a88 = (undefined8 *)0x0;
                      uStack_a80 = 0;
                      FUN_146b30f82(uVar23,&local_a88,&local_a78);
                      uVar44 = *(ulonglong *)(LVar54.QuadPart + 0x10);
                      uVar38 = *(ulonglong *)(LVar54.QuadPart + 8) + 0x9ae16a3b2f90404f;
                      uVar38 = ((uVar38 << 0x27 | uVar38 >> 0x19) + uVar44) * -0x651e95c4d06fbf91;
                      uVar44 = ((uVar44 << 0x1b | uVar44 >> 0x25) * -0x651e95c4d06fbf91 +
                                *(ulonglong *)(LVar54.QuadPart + 8) + 0x9ae16a3b2f90404f ^ uVar38) *
                               -0x651e95c4d06fbf91;
                      lVar40 = (uVar44 >> 0x2f ^ uVar38 ^ uVar44) * -0x651e95c4d06fbf91;
                      iVar30 = FUN_146b4e728(&local_558,
                                             ((uint)((ulonglong)lVar40 >> 0x2f) ^ (uint)lVar40) *
                                             0x2f90406f,puVar3);
                      if (iVar30 == -1) {
                        puVar24 = (ulonglong *)(LVar54.QuadPart + 0x18);
                      }
                      else {
                        uVar44 = *(ulonglong *)(LVar54.QuadPart + 0x10);
                        uVar38 = *(ulonglong *)(LVar54.QuadPart + 8) + 0x9ae16a3b2f90404f;
                        uVar38 = ((uVar38 << 0x27 | uVar38 >> 0x19) + uVar44) * -0x651e95c4d06fbf91;
                        uVar44 = ((uVar44 << 0x1b | uVar44 >> 0x25) * -0x651e95c4d06fbf91 +
                                  *(ulonglong *)(LVar54.QuadPart + 8) + 0x9ae16a3b2f90404f ^ uVar38)
                                 * -0x651e95c4d06fbf91;
                        lVar40 = (uVar44 >> 0x2f ^ uVar38 ^ uVar44) * -0x651e95c4d06fbf91;
                        iVar30 = FUN_146b4e728(&local_558,
                                               ((uint)((ulonglong)lVar40 >> 0x2f) ^ (uint)lVar40) *
                                               0x2f90406f,puVar3);
                        lVar40 = 0;
                        if (iVar30 != -1) {
                          lVar40 = (longlong)iVar30 * 0x1c + local_558;
                        }
                        puVar24 = (ulonglong *)(lVar40 + 0x10);
                      }
                      FUN_1401211f6(&local_a88,(int)*puVar24,1);
                      plVar19 = local_be8;
                      (**(code **)(*local_be8 + 0x40))(local_be8,puVar3);
                      local_c48 = (LARGE_INTEGER *)(**(code **)(*plVar19 + 0x48))(plVar19,puVar3);
                      local_a98 = local_a88;
                      uStack_a90 = uStack_a80;
                      local_a88 = (undefined8 *)0x0;
                      uStack_a80 = 0;
                      (**(code **)(*local_bd8 + 8))(local_bd8,&local_a98,puVar3);
                      if (local_a88 != (undefined8 *)0x0) {
                        FUN_1400020a8();
                      }
                    }
                    puVar20 = local_a78;
                    puVar41 = local_a78;
                    if (local_a78 != (undefined8 *)0x0) {
                      do {
                        FUN_146b46d18(&local_8d8,*puVar41,puVar41[1]);
                        puVar47 = puVar41 + 3;
                        puVar41 = (undefined8 *)*puVar47;
                      } while ((undefined8 *)*puVar47 != (undefined8 *)0x0);
                      puVar41 = puVar20;
                      do {
                        FUN_146b31154(&local_888,*puVar41,puVar41[1],0);
                        puVar41 = (undefined8 *)puVar41[3];
                      } while (puVar41 != (undefined8 *)0x0);
                      do {
                        puVar41 = (undefined8 *)puVar20[3];
                        FUN_1400020a8(puVar20);
                        puVar20 = puVar41;
                      } while (puVar41 != (undefined8 *)0x0);
                    }
                    LVar54.QuadPart = LVar54.QuadPart + 0x30;
                  } while ((ulonglong *)LVar54.QuadPart != puVar53);
                }
                FUN_146b3104e(uVar23,&local_888);
                uVar21 = FUN_146b4ea06(&local_468,local_ab8 & 0xffffffff,&local_ab8);
                uVar23 = FUN_146b4ea06(&local_4b8,local_ab8 & 0xffffffff,&local_ab8);
                puVar41 = local_8d8;
                puVar47 = local_928;
                for (puVar20 = local_8d8; local_928 = puVar47, puVar20 != (undefined8 *)0x0;
                    puVar20 = (undefined8 *)puVar20[3]) {
                  FUN_146b31154(uVar21,*puVar20,puVar20[1],0);
                  puVar47 = local_928;
                }
                puVar20 = puVar47;
                if (puVar47 == (undefined8 *)0x0) {
                  *(LONGLONG *)local_c10 = LStack_830.QuadPart + local_838.QuadPart;
                }
                else {
                  do {
                    FUN_146b31154(uVar23,*puVar20,puVar20[1],0);
                    puVar20 = (undefined8 *)puVar20[3];
                  } while (puVar20 != (undefined8 *)0x0);
                  *(LONGLONG *)local_c10 = LStack_830.QuadPart + local_838.QuadPart;
                  do {
                    puVar20 = (undefined8 *)puVar47[3];
                    FUN_1400020a8(puVar47);
                    puVar47 = puVar20;
                  } while (puVar20 != (undefined8 *)0x0);
                }
                while (puVar20 = local_888, puVar41 != (undefined8 *)0x0) {
                  puVar20 = (undefined8 *)puVar41[3];
                  FUN_1400020a8(puVar41);
                  puVar41 = puVar20;
                }
                while (puVar20 != (undefined8 *)0x0) {
                  puVar20 = (undefined8 *)puVar20[3];
                  FUN_1400020a8();
                }
              }
              FUN_146b502e3(local_7e8.QuadPart,(ulonglong)ppuStack_7e0 & 0xffffffff);
              if ((ulonglong *)local_7e8.QuadPart != (ulonglong *)0x0) {
                FUN_1400020a8();
              }
              lVar40 = (longlong)(int)(uint)local_ab8 + 1;
              local_ab8 = CONCAT44(local_ab8._4_4_,(int)lVar40);
            } while (lVar40 <= local_be0);
            local_a9c = 0;
            lVar40 = 0;
            plVar19 = local_ba8;
LAB_14292949c:
            puVar20 = (undefined8 *)FUN_146b4ea06(&local_468,lVar40,&local_a9c);
            uVar44 = FUN_146b4ea06(&local_4b8,local_a9c,&local_a9c);
            puVar53 = (ulonglong *)FUN_146b50026(&local_3c8,local_a9c,&local_a9c);
            if ((int)uStack_410 != local_3e4) {
              puVar31 = local_3d8;
              if (local_3d8 == (undefined1 *)0x0) {
                puVar31 = local_3e0;
              }
              uVar14 = *(uint *)(puVar31 + (ulonglong)(local_3d0 - 1U & local_a9c) * 4);
              for (uVar50 = uVar14; uVar50 != 0xffffffff;
                  uVar50 = *(uint *)(local_418 + (longlong)(int)uVar50 * 0x18 + 0x10)) {
                if (*(uint *)(local_418 + (longlong)(int)uVar50 * 0x18) == local_a9c) {
                  goto LAB_142929a8f;
                }
              }
            }
            bVar58 = false;
            uVar29 = 0;
            goto LAB_142929555;
          }
LAB_142928979:
          cVar11 = (**(code **)(*local_c08 + 0x40))();
          plVar19 = local_bf8;
          uVar44 = 0;
          plVar22 = local_bd8;
          if (cVar11 == '\0') {
            (**(code **)(*local_bd8 + 0x10))(local_bd8,&local_7e8);
            QueryPerformanceCounter(&local_838);
            LOCK();
            *local_b80 = local_838.QuadPart - local_b78;
            UNLOCK();
            (**(code **)(*plVar19 + 0x10))(plVar19,0);
            plVar19 = local_be8;
            local_818 = 0;
            local_810 = 0;
            local_838.QuadPart = 0;
            LStack_830.QuadPart = 0;
            local_80c = 0xffffffff00000080;
            local_804 = 0;
            local_7f8 = 0;
            local_7f0 = 0;
            uVar21 = (**(code **)(*local_be8 + 0x20))(local_be8);
            local_868 = 0;
            local_860 = 0;
            local_888 = (undefined8 *)0x0;
            uStack_880 = 0;
            local_85c = 0xffffffff00000080;
            local_854 = 0;
            local_848 = 0;
            local_840 = 0;
            FUN_146b47d1c(&local_888,uVar21);
            uVar21 = (**(code **)(*plVar19 + 0x30))(plVar19);
            local_8b8 = 0;
            local_8b0 = 0;
            local_8d8 = (undefined8 *)0x0;
            uStack_8d0 = 0;
            local_8ac = 0xffffffff00000080;
            local_8a4 = 0;
            local_898 = 0;
            local_890 = 0;
            FUN_146b47e8e(&local_8d8,uVar21);
            FUN_146b31414(&local_888,&ppuStack_7e0);
            plVar19 = (longlong *)(**(code **)(*plVar19 + 0x18))(plVar19);
            uVar14 = *(uint *)(plVar19 + 5);
            local_c10 = (uint *)(plVar19 + 2);
            uVar38 = 1;
            iVar30 = 0;
            uVar50 = 0;
            if (uVar14 != 0) {
              puVar48 = (uint *)plVar19[4];
              if ((uint *)plVar19[4] == (uint *)0x0) {
                puVar48 = local_c10;
              }
              uVar50 = *puVar48;
              if (uVar50 == 0) {
                iVar30 = uVar14 + 0x1e;
                if (-1 < (int)(uVar14 - 1)) {
                  iVar30 = uVar14 - 1;
                }
                uVar44 = 0;
                uVar38 = (ulonglong)(uint)(iVar30 >> 5);
                if (iVar30 >> 5 < 1) {
                  uVar38 = uVar44;
                }
                iVar30 = 0;
                do {
                  if (uVar38 == uVar44) goto LAB_142928b2b;
                  iVar30 = iVar30 + 0x20;
                  uVar50 = puVar48[uVar44 + 1];
                  uVar44 = uVar44 + 1;
                } while (uVar50 == 0);
              }
              else {
                uVar44 = 0;
              }
              uVar38 = (ulonglong)(-uVar50 & uVar50);
              uVar33 = uVar38 * 2 + 1;
              lVar40 = 0x3f;
              if (uVar33 != 0) {
                for (; uVar33 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                }
              }
              uVar50 = (iVar30 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
              if ((int)uVar14 <= (int)uVar50) {
                uVar50 = uVar14;
              }
            }
            if (uVar50 != uVar14) {
              uVar49 = 0xffffffff;
              local_c00 = (ulonglong)uVar14;
              do {
                puVar20 = (undefined8 *)(*plVar19 + (longlong)(int)uVar50 * 0x60);
                uVar21 = *puVar20;
                uVar21 = FUN_146b50890(&local_238,
                                       (int)((ulonglong)uVar21 >> 0x20) * 0x17 + (int)uVar21,
                                       *plVar19 + (longlong)(int)uVar50 * 0x60);
                FUN_146b31596(uVar21,&local_928,puVar20 + 1);
                FUN_14681b5ea(uVar21,&local_928);
                local_8e0 = 0;
                if (local_8e8 != 0) {
                  FUN_1400020a8();
                }
                FUN_140149fc2(&local_928);
                uVar49 = uVar49 & ~(uint)uVar38;
                puVar48 = (uint *)plVar19[4];
                if ((uint *)plVar19[4] == (uint *)0x0) {
                  puVar48 = local_c10;
                }
                uVar14 = *(uint *)(plVar19 + 5);
                iVar13 = (int)uVar44;
                lVar40 = (longlong)iVar13;
                uVar50 = puVar48[lVar40] & uVar49;
                if (uVar50 == 0) {
                  iVar37 = uVar14 + 0x1e;
                  if (-1 < (int)(uVar14 - 1)) {
                    iVar37 = uVar14 - 1;
                  }
                  iVar37 = iVar37 >> 5;
                  iVar30 = iVar30 + 0x20;
                  iVar34 = iVar37;
                  if (iVar37 < iVar13) {
                    iVar34 = iVar13;
                  }
                  if (iVar13 < iVar37) {
                    lVar43 = 0;
                    do {
                      uVar50 = puVar48[lVar40 + lVar43 + 1];
                      if (uVar50 != 0) {
                        uVar44 = (ulonglong)(iVar13 + (int)lVar43 + 1);
                        uVar49 = 0xffffffff;
                        goto LAB_14292b364;
                      }
                      iVar30 = iVar30 + 0x20;
                      lVar43 = lVar43 + 1;
                    } while (iVar34 - lVar40 != lVar43);
                    uVar49 = 0xffffffff;
                    iVar13 = iVar34;
                  }
                  uVar44 = (ulonglong)(iVar13 + 1);
                  uVar50 = uVar14;
                }
                else {
LAB_14292b364:
                  uVar38 = (ulonglong)(-uVar50 & uVar50);
                  uVar33 = uVar38 * 2 + 1;
                  lVar40 = 0x3f;
                  if (uVar33 != 0) {
                    for (; uVar33 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                    }
                  }
                  uVar50 = (iVar30 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                  if ((int)uVar14 <= (int)uVar50) {
                    uVar50 = uVar14;
                  }
                }
              } while (uVar50 != (uint)local_c00);
            }
LAB_142928b2b:
            uVar21 = (**(code **)(*local_be8 + 0x28))();
            FUN_146b317e8(&local_288,uVar21);
            uVar44 = (ulonglong)local_210;
            if (local_210 == 0) {
              uVar36 = 1;
              uVar38 = 0;
              iVar30 = 0;
              uVar14 = 0;
            }
            else {
              puVar48 = local_218;
              if (local_218 == (uint *)0x0) {
                puVar48 = local_228;
              }
              uVar14 = *puVar48;
              if (uVar14 == 0) {
                iVar30 = local_210 + 0x1e;
                if (-1 < (int)(local_210 - 1)) {
                  iVar30 = local_210 - 1;
                }
                uVar38 = 0;
                uVar33 = (ulonglong)(uint)(iVar30 >> 5);
                if (iVar30 >> 5 < 1) {
                  uVar33 = uVar38;
                }
                iVar30 = 0;
                do {
                  if (uVar33 == uVar38) goto LAB_14292aba3;
                  iVar30 = iVar30 + 0x20;
                  uVar14 = puVar48[uVar38 + 1];
                  uVar38 = uVar38 + 1;
                } while (uVar14 == 0);
              }
              else {
                uVar38 = 0;
                iVar30 = 0;
              }
              uVar36 = (ulonglong)(-uVar14 & uVar14);
              uVar33 = uVar36 * 2 + 1;
              lVar40 = 0x3f;
              if (uVar33 != 0) {
                for (; uVar33 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                }
              }
              uVar14 = (iVar30 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
              if ((int)local_210 <= (int)uVar14) {
                uVar14 = local_210;
              }
            }
            if (uVar14 != local_210) {
              uVar49 = 0xffffffff;
              uVar50 = local_210;
              local_bc0 = uVar44;
              do {
                plVar19 = (longlong *)(local_238 + (longlong)(int)uVar14 * 0x60);
                lVar40 = local_238 + (longlong)(int)uVar14 * 0x60;
                puVar48 = (uint *)(lVar40 + 0x18);
                iVar13 = *(int *)(lVar40 + 0x30);
                local_c10 = (uint *)CONCAT44(local_c10._4_4_,iVar30);
                local_c00 = uVar38;
                if (iVar13 == 0) {
                  uVar33 = 1;
                  uVar38 = 0;
                  iVar37 = 0;
                  iVar30 = 0;
                }
                else {
                  puVar32 = (uint *)plVar19[5];
                  if ((uint *)plVar19[5] == (uint *)0x0) {
                    puVar32 = puVar48;
                  }
                  uVar14 = *puVar32;
                  if (uVar14 == 0) {
                    iVar30 = iVar13 + 0x1e;
                    if (-1 < iVar13 + -1) {
                      iVar30 = iVar13 + -1;
                    }
                    uVar38 = 0;
                    uVar33 = (ulonglong)(uint)(iVar30 >> 5);
                    if (iVar30 >> 5 < 1) {
                      uVar33 = uVar38;
                    }
                    iVar37 = 0;
                    do {
                      if (uVar33 == uVar38) goto LAB_14292b95b;
                      iVar37 = iVar37 + 0x20;
                      uVar14 = puVar32[uVar38 + 1];
                      uVar38 = uVar38 + 1;
                    } while (uVar14 == 0);
                  }
                  else {
                    uVar38 = 0;
                    iVar37 = 0;
                  }
                  uVar33 = (ulonglong)(-uVar14 & uVar14);
                  uVar27 = uVar33 * 2 + 1;
                  lVar40 = 0x3f;
                  if (uVar27 != 0) {
                    for (; uVar27 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                    }
                  }
                  iVar30 = (iVar37 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                  if (iVar13 <= iVar30) {
                    iVar30 = iVar13;
                  }
                }
                if (iVar30 != iVar13) {
                  local_bc8 = (longlong *)CONCAT44(local_bc8._4_4_,uVar49);
                  uVar14 = 0xffffffff;
                  local_b90 = puVar48;
                  do {
                    plVar22 = (longlong *)(plVar19[1] + (longlong)iVar30 * 0x18);
                    uVar44 = plVar22[1];
                    uVar27 = *plVar22 + 0x9ae16a3b2f90404f;
                    uVar27 = ((uVar27 << 0x27 | uVar27 >> 0x19) + uVar44) * -0x651e95c4d06fbf91;
                    uVar44 = ((uVar44 << 0x1b | uVar44 >> 0x25) * -0x651e95c4d06fbf91 + *plVar22 +
                              0x9ae16a3b2f90404f ^ uVar27) * -0x651e95c4d06fbf91;
                    lVar40 = (uVar44 >> 0x2f ^ uVar27 ^ uVar44) * -0x651e95c4d06fbf91;
                    iVar30 = FUN_146b505d2(&local_288,
                                           ((uint)((ulonglong)lVar40 >> 0x2f) ^ (uint)lVar40) *
                                           0x2f90406f,plVar22);
                    if (iVar30 != -1) {
                      uVar44 = plVar22[1];
                      uVar27 = *plVar22 + 0x9ae16a3b2f90404f;
                      uVar27 = ((uVar27 << 0x27 | uVar27 >> 0x19) + uVar44) * -0x651e95c4d06fbf91;
                      uVar44 = ((uVar44 << 0x1b | uVar44 >> 0x25) * -0x651e95c4d06fbf91 + *plVar22 +
                                0x9ae16a3b2f90404f ^ uVar27) * -0x651e95c4d06fbf91;
                      lVar40 = (uVar44 >> 0x2f ^ uVar27 ^ uVar44) * -0x651e95c4d06fbf91;
                      iVar30 = FUN_146b51d36(&local_888,
                                             ((uint)((ulonglong)lVar40 >> 0x2f) ^ (uint)lVar40) *
                                             0x2f90406f,plVar22);
                      if (iVar30 != -1) {
                        local_be0 = -0x651e95c4d06fbfb1;
                        uVar27 = *plVar22 + 0x9ae16a3b2f90404f;
                        uVar44 = plVar22[1];
                        uVar28 = ((uVar27 << 0x27 | uVar27 >> 0x19) + uVar44) * -0x651e95c4d06fbf91;
                        uVar44 = ((uVar44 << 0x1b | uVar44 >> 0x25) * -0x651e95c4d06fbf91 + uVar27 ^
                                 uVar28) * -0x651e95c4d06fbf91;
                        lVar40 = (uVar44 >> 0x2f ^ uVar28 ^ uVar44) * -0x651e95c4d06fbf91;
                        local_bf0 = (longlong *)
                                    FUN_146b51fe0(&local_838,
                                                  ((uint)((ulonglong)lVar40 >> 0x2f) ^ (uint)lVar40)
                                                  * 0x2f90406f,plVar22);
                        lVar40 = plVar22[1];
                        *local_bf0 = *plVar22;
                        local_bf0[1] = lVar40;
                        local_bf0[2] = *plVar19;
                        uVar27 = *plVar22 + local_be0;
                        uVar44 = plVar22[1];
                        uVar28 = ((uVar27 << 0x27 | uVar27 >> 0x19) + uVar44) * -0x651e95c4d06fbf91;
                        uVar44 = ((uVar44 << 0x1b | uVar44 >> 0x25) * -0x651e95c4d06fbf91 + uVar27 ^
                                 uVar28) * -0x651e95c4d06fbf91;
                        lVar40 = (uVar44 >> 0x2f ^ uVar28 ^ uVar44) * -0x651e95c4d06fbf91;
                        iVar30 = FUN_146b505d2(&local_288,
                                               ((uint)((ulonglong)lVar40 >> 0x2f) ^ (uint)lVar40) *
                                               0x2f90406f,plVar22);
                        lVar40 = (longlong)iVar30 * 0x2c + local_288;
                        if (iVar30 == -1) {
                          lVar40 = 0;
                        }
                        lVar43 = *(longlong *)(lVar40 + 0x18);
                        local_bf0[3] = *(longlong *)(lVar40 + 0x10);
                        local_bf0[4] = lVar43;
                        *(undefined4 *)(local_bf0 + 5) = *(undefined4 *)(lVar40 + 0x20);
                        uVar27 = *plVar22 + local_be0;
                        uVar44 = plVar22[1];
                        uVar28 = ((uVar27 << 0x27 | uVar27 >> 0x19) + uVar44) * -0x651e95c4d06fbf91;
                        uVar44 = ((uVar44 << 0x1b | uVar44 >> 0x25) * -0x651e95c4d06fbf91 + uVar27 ^
                                 uVar28) * -0x651e95c4d06fbf91;
                        lVar40 = (uVar44 >> 0x2f ^ uVar28 ^ uVar44) * -0x651e95c4d06fbf91;
                        iVar30 = FUN_146b51d36(&local_888,
                                               ((uint)((ulonglong)lVar40 >> 0x2f) ^ (uint)lVar40) *
                                               0x2f90406f,plVar22);
                        puVar20 = local_888 + (longlong)iVar30 * 4;
                        if (iVar30 == -1) {
                          puVar20 = (undefined8 *)0x0;
                        }
                        local_bf0[7] = puVar20[2];
                        uVar50 = (*(code *)PTR_FUN_14c75b148)(plVar22,0x10,0);
                        *(char *)((longlong)local_bf0 + 0x2c) =
                             (char)uVar50 + (char)(uVar50 / 100) * -100;
                        uVar27 = local_be0 + *plVar22;
                        uVar44 = plVar22[1];
                        uVar28 = ((uVar27 << 0x27 | uVar27 >> 0x19) + uVar44) * -0x651e95c4d06fbf91;
                        uVar44 = ((uVar44 << 0x1b | uVar44 >> 0x25) * -0x651e95c4d06fbf91 + uVar27 ^
                                 uVar28) * -0x651e95c4d06fbf91;
                        lVar40 = (uVar44 >> 0x2f ^ uVar28 ^ uVar44) * -0x651e95c4d06fbf91;
                        iVar30 = FUN_146b4e728(&local_8d8,
                                               ((uint)((ulonglong)lVar40 >> 0x2f) ^ (uint)lVar40) *
                                               0x2f90406f,plVar22);
                        puVar48 = local_b70;
                        if (iVar30 != -1) {
                          uVar44 = plVar22[1];
                          uVar27 = *plVar22 + 0x9ae16a3b2f90404f;
                          uVar27 = ((uVar27 << 0x27 | uVar27 >> 0x19) + uVar44) *
                                   -0x651e95c4d06fbf91;
                          uVar44 = ((uVar44 << 0x1b | uVar44 >> 0x25) * -0x651e95c4d06fbf91 +
                                    *plVar22 + 0x9ae16a3b2f90404f ^ uVar27) * -0x651e95c4d06fbf91;
                          lVar40 = (uVar44 >> 0x2f ^ uVar27 ^ uVar44) * -0x651e95c4d06fbf91;
                          iVar30 = FUN_146b4e728(&local_8d8,
                                                 ((uint)((ulonglong)lVar40 >> 0x2f) ^ (uint)lVar40)
                                                 * 0x2f90406f,plVar22);
                          lVar40 = 0;
                          if (iVar30 != -1) {
                            lVar40 = (longlong)iVar30 * 0x1c + (longlong)local_8d8;
                          }
                          puVar48 = (uint *)(lVar40 + 0x10);
                        }
                        *(uint *)(local_bf0 + 6) = *puVar48;
                      }
                    }
                    uVar14 = uVar14 & ~(uint)uVar33;
                    puVar48 = (uint *)plVar19[5];
                    if ((uint *)plVar19[5] == (uint *)0x0) {
                      puVar48 = local_b90;
                    }
                    iVar34 = (int)plVar19[6];
                    iVar30 = (int)uVar38;
                    lVar40 = (longlong)iVar30;
                    uVar50 = puVar48[lVar40] & uVar14;
                    if (uVar50 == 0) {
                      iVar15 = iVar34 + 0x1e;
                      if (-1 < iVar34 + -1) {
                        iVar15 = iVar34 + -1;
                      }
                      iVar15 = iVar15 >> 5;
                      iVar37 = iVar37 + 0x20;
                      iVar16 = iVar15;
                      if (iVar15 < iVar30) {
                        iVar16 = iVar30;
                      }
                      if (iVar30 < iVar15) {
                        lVar43 = 0;
                        do {
                          uVar50 = puVar48[lVar40 + lVar43 + 1];
                          if (uVar50 != 0) {
                            uVar38 = (ulonglong)(iVar30 + (int)lVar43 + 1);
                            uVar14 = 0xffffffff;
                            goto LAB_14292b595;
                          }
                          iVar37 = iVar37 + 0x20;
                          lVar43 = lVar43 + 1;
                        } while (iVar16 - lVar40 != lVar43);
                        uVar14 = 0xffffffff;
                        iVar30 = iVar16;
                      }
                      uVar38 = (ulonglong)(iVar30 + 1);
                      iVar30 = iVar34;
                    }
                    else {
LAB_14292b595:
                      uVar33 = (ulonglong)(-uVar50 & uVar50);
                      uVar44 = uVar33 * 2 + 1;
                      lVar40 = 0x3f;
                      if (uVar44 != 0) {
                        for (; uVar44 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                        }
                      }
                      iVar30 = (iVar37 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                      if (iVar34 <= iVar30) {
                        iVar30 = iVar34;
                      }
                    }
                  } while (iVar30 != iVar13);
                  uVar44 = local_bc0;
                  uVar50 = local_210;
                  uVar49 = (uint)local_bc8;
                }
LAB_14292b95b:
                uVar49 = uVar49 & ~(uint)uVar36;
                puVar48 = local_218;
                if (local_218 == (uint *)0x0) {
                  puVar48 = local_228;
                }
                iVar13 = (int)local_c00;
                lVar40 = (longlong)iVar13;
                uVar14 = puVar48[lVar40] & uVar49;
                uVar38 = local_c00;
                iVar30 = (int)local_c10;
                if (uVar14 == 0) {
                  iVar37 = uVar50 + 0x1e;
                  if (-1 < (int)(uVar50 - 1)) {
                    iVar37 = uVar50 - 1;
                  }
                  iVar37 = iVar37 >> 5;
                  iVar30 = (int)local_c10 + 0x20;
                  iVar34 = iVar37;
                  if (iVar37 < iVar13) {
                    iVar34 = iVar13;
                  }
                  if (iVar13 < iVar37) {
                    lVar43 = 0;
                    do {
                      uVar14 = puVar48[lVar40 + lVar43 + 1];
                      if (uVar14 != 0) {
                        uVar49 = 0xffffffff;
                        uVar38 = (ulonglong)(iVar13 + (int)lVar43 + 1);
                        goto LAB_14292b9dd;
                      }
                      iVar30 = iVar30 + 0x20;
                      lVar43 = lVar43 + 1;
                    } while (iVar34 - lVar40 != lVar43);
                    uVar49 = 0xffffffff;
                    iVar13 = iVar34;
                  }
                  uVar38 = (ulonglong)(iVar13 + 1);
                  uVar44 = local_bc0;
                  uVar14 = uVar50;
                }
                else {
LAB_14292b9dd:
                  uVar36 = (ulonglong)(-uVar14 & uVar14);
                  uVar33 = uVar36 * 2 + 1;
                  lVar40 = 0x3f;
                  if (uVar33 != 0) {
                    for (; uVar33 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                    }
                  }
                  uVar14 = (iVar30 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                  if ((int)uVar50 <= (int)uVar14) {
                    uVar14 = uVar50;
                  }
                }
              } while (uVar14 != (uint)uVar44);
            }
LAB_14292aba3:
            local_928 = (undefined8 *)0x0;
            uStack_920 = 0;
            FUN_146b3196a(&local_838,&local_928);
            local_b28 = local_928;
            uStack_b20 = uStack_920;
            local_928 = (undefined8 *)0x0;
            uStack_920 = 0;
            (**(code **)(*local_c08 + 0x38))(local_c08,&local_a78);
            cVar11 = (**(code **)(*local_a10 + 0x10))(local_a10,&local_a78,&local_b28);
            FUN_146b525d8(local_a78,uStack_a70 & 0xffffffff);
            if (local_a78 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            iVar30 = local_580;
            uVar44 = 0;
            if (cVar11 != '\0') {
              uVar38 = 1;
              iVar37 = 0;
              iVar13 = 0;
              if (local_580 != 0) {
                puVar48 = local_588;
                if (local_588 == (uint *)0x0) {
                  puVar48 = local_598;
                }
                uVar14 = *puVar48;
                if (uVar14 == 0) {
                  iVar13 = local_580 + 0x1e;
                  if (-1 < local_580 + -1) {
                    iVar13 = local_580 + -1;
                  }
                  uVar44 = 0;
                  uVar38 = (ulonglong)(uint)(iVar13 >> 5);
                  if (iVar13 >> 5 < 1) {
                    uVar38 = uVar44;
                  }
                  iVar37 = 0;
                  do {
                    if (uVar38 == uVar44) goto LAB_14292acc4;
                    iVar37 = iVar37 + 0x20;
                    uVar14 = puVar48[uVar44 + 1];
                    uVar44 = uVar44 + 1;
                  } while (uVar14 == 0);
                }
                else {
                  uVar44 = 0;
                }
                uVar38 = (ulonglong)(-uVar14 & uVar14);
                uVar33 = uVar38 * 2 + 1;
                lVar40 = 0x3f;
                if (uVar33 != 0) {
                  for (; uVar33 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                  }
                }
                iVar13 = (iVar37 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                if (local_580 <= iVar13) {
                  iVar13 = local_580;
                }
              }
              if (iVar13 != local_580) {
                uVar14 = 0xffffffff;
                do {
                  plVar19 = (longlong *)(local_5a8 + (longlong)iVar13 * 0x18);
                  lVar40 = *plVar19;
                  uVar33 = plVar19[1];
                  uVar36 = lVar40 + 0x9ae16a3b2f90404f;
                  uVar36 = ((uVar36 << 0x27 | uVar36 >> 0x19) + uVar33) * -0x651e95c4d06fbf91;
                  uVar33 = ((uVar33 << 0x1b | uVar33 >> 0x25) * -0x651e95c4d06fbf91 + lVar40 +
                            0x9ae16a3b2f90404f ^ uVar36) * -0x651e95c4d06fbf91;
                  lVar40 = (uVar33 >> 0x2f ^ uVar36 ^ uVar33) * -0x651e95c4d06fbf91;
                  FUN_146b51d36(&ppuStack_7e0,
                                ((uint)((ulonglong)lVar40 >> 0x2f) ^ (uint)lVar40) * 0x2f90406f);
                  uVar14 = ~(uint)uVar38 & uVar14;
                  puVar48 = local_588;
                  if (local_588 == (uint *)0x0) {
                    puVar48 = local_598;
                  }
                  iVar13 = (int)uVar44;
                  lVar40 = (longlong)iVar13;
                  uVar50 = puVar48[lVar40] & uVar14;
                  if (uVar50 == 0) {
                    iVar34 = local_580 + 0x1e;
                    if (-1 < local_580 + -1) {
                      iVar34 = local_580 + -1;
                    }
                    iVar34 = iVar34 >> 5;
                    iVar37 = iVar37 + 0x20;
                    iVar15 = iVar34;
                    if (iVar34 < iVar13) {
                      iVar15 = iVar13;
                    }
                    if (iVar13 < iVar34) {
                      lVar43 = 0;
                      do {
                        uVar50 = puVar48[lVar40 + lVar43 + 1];
                        if (uVar50 != 0) {
                          uVar44 = (ulonglong)(iVar13 + (int)lVar43 + 1);
                          uVar14 = 0xffffffff;
                          goto LAB_14292bb2d;
                        }
                        iVar37 = iVar37 + 0x20;
                        lVar43 = lVar43 + 1;
                      } while (iVar15 - lVar40 != lVar43);
                      uVar14 = 0xffffffff;
                      iVar13 = iVar15;
                    }
                    uVar44 = (ulonglong)(iVar13 + 1);
                    iVar13 = local_580;
                  }
                  else {
LAB_14292bb2d:
                    uVar38 = (ulonglong)(-uVar50 & uVar50);
                    uVar33 = uVar38 * 2 + 1;
                    lVar40 = 0x3f;
                    if (uVar33 != 0) {
                      for (; uVar33 >> lVar40 == 0; lVar40 = lVar40 + -1) {
                      }
                    }
                    iVar13 = (iVar37 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
                    if (local_580 <= iVar13) {
                      iVar13 = local_580;
                    }
                  }
                } while (iVar13 != iVar30);
              }
LAB_14292acc4:
              iVar30 = local_c18[0x62] - 1;
              if (local_c18[0x62] == 0) {
                iVar30 = 0;
              }
              uVar14 = local_c18[0x5e];
              iVar13 = iVar30 + 1 + (uint)((longlong)(int)uVar14 == 0);
              local_a78 = (undefined8 *)0x0;
              pvVar8 = *(void **)(local_c18 + 0x5c);
              uStack_a70 = CONCAT44(uStack_a70._4_4_,uVar14);
              if (iVar13 == 0 && uVar14 == 0) {
                uStack_a70 = (ulonglong)uVar14;
              }
              else {
                if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(iVar13 + uVar14);
                }
                FUN_1446dd670(&local_a78,iVar13 + uVar14,0);
                if (uVar14 != 0) {
                  memcpy(local_a78,pvVar8,(longlong)(int)uVar14 * 2);
                }
              }
              FUN_1401aebe8(&local_a78,*(undefined8 *)(local_c18 + 0x60),iVar30);
              uVar14 = (**(code **)(*local_a10 + 0x18))(local_a10,&local_a78);
              uVar44 = (ulonglong)uVar14;
              if (local_a78 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            plVar19 = local_bf8;
            if (local_928 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            plVar22 = local_bd8;
            local_890 = 0;
            if (local_898 != 0) {
              FUN_1400020a8();
            }
            FUN_146b48006(&local_8d8);
            local_840 = 0;
            if (local_848 != 0) {
              FUN_1400020a8();
            }
            FUN_146b4803c(&local_888);
            local_7f0 = 0;
            if (local_7f8 != 0) {
              FUN_1400020a8();
            }
            FUN_146b48072(&local_838);
            FUN_146b31adc(&local_7e8);
          }
          goto LAB_14292ae24;
        }
        local_7e8 = *(LARGE_INTEGER *)(local_c18 + 2);
        iVar30 = local_c18[4] - 1;
        if (local_c18[4] == 0) {
          iVar30 = 0;
        }
        ppuStack_7e0 = (undefined8 **)CONCAT44(ppuStack_7e0._4_4_,iVar30);
        local_7d8 = *(ulonglong *)(local_c18 + 0x10);
        local_7d0 = local_c18[0x12] - 1;
        FUN_140bee87a(&local_238);
        bVar58 = true;
        if ((longlong)local_9e0 != 0) {
          plVar26 = local_9e8;
LAB_1429281b5:
          if ((int)plVar26[1] != (int)uStack_230) {
            if ((int)plVar26[1] + (int)uStack_230 == 1) goto LAB_14292823d;
            goto LAB_142928219;
          }
          if (1 < (int)uStack_230) {
            lVar40 = 0;
            do {
              uVar6 = *(ushort *)(*plVar26 + lVar40);
              uVar7 = *(ushort *)(local_238 + lVar40);
              if (uVar6 == uVar7) {
                if (uVar6 == 0) break;
              }
              else {
                plVar22 = local_bd8;
                if (0x7f < (uVar7 | uVar6)) {
                  iVar30 = (uint)uVar6 - (uint)uVar7;
                  goto LAB_142928209;
                }
                if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[(uint)uVar7])
                goto code_r0x000142928206;
              }
              lVar40 = lVar40 + 2;
            } while( true );
          }
          goto LAB_14292823d;
        }
LAB_14292823f:
        if (local_238 != 0) {
          FUN_1400020a8();
        }
        if (!bVar58) goto LAB_142928257;
LAB_14292836f:
        uVar44 = 0;
        goto LAB_14292b18b;
      }
      plVar19 = (longlong *)FUN_1400dbadc();
      lVar40 = *plVar19;
      if (lVar40 == 0) {
        lVar40 = FUN_140e92164();
        *plVar19 = lVar40;
      }
      FUN_146b6ae82(&local_7e8,lVar40);
      cVar11 = (*(code *)**(undefined8 **)local_7e8)(local_7e8.QuadPart,pDVar42 + 0x20,&local_d0);
      ppuVar10 = ppuStack_7e0;
      if (ppuStack_7e0 != (undefined8 **)0x0) {
        LOCK();
        ppuVar1 = ppuStack_7e0 + 1;
        *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
        UNLOCK();
        if (*(int *)ppuVar1 == 0) {
          (*(code *)**ppuStack_7e0)(ppuStack_7e0);
          LOCK();
          piVar2 = (int *)((longlong)ppuVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*ppuVar10)[2])(ppuVar10);
          }
        }
      }
      pDVar42 = local_c18;
      if (cVar11 != '\0') goto LAB_142927f4f;
      uVar44 = 0;
      plVar19 = local_bf8;
      goto LAB_14292b1e9;
    }
  }
  uVar44 = 0;
  goto LAB_1429277a3;
code_r0x000142928206:
  iVar30 = (uint)(byte)(&DAT_149e05da0)[uVar6] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar7];
LAB_142928209:
  if (iVar30 == 0) {
LAB_14292823d:
    bVar58 = false;
    goto LAB_14292823f;
  }
LAB_142928219:
  plVar26 = plVar26 + 2;
  if (plVar26 == local_9e8 + (longlong)local_9e0 * 2) goto LAB_14292823f;
  goto LAB_1429281b5;
code_r0x000142928333:
  iVar30 = (uint)(byte)(&DAT_149e05da0)[uVar6] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar7];
LAB_142928336:
  if (iVar30 == 0) {
LAB_14292835e:
    bVar58 = false;
    goto LAB_142928360;
  }
LAB_142928346:
  plVar26 = plVar26 + 2;
  if (plVar26 == local_9e8 + (longlong)local_9e0 * 2) goto LAB_142928360;
  goto LAB_1429282e2;
  while (uVar14 = puVar48[4], uVar14 != 0xffffffff) {
LAB_142929a8f:
    puVar48 = (uint *)(local_418 + (longlong)(int)uVar14 * 0x18);
    if (*puVar48 == local_a9c) goto LAB_142929aac;
  }
  puVar48 = (uint *)0x0;
LAB_142929aac:
  bVar58 = *(ulonglong *)(puVar48 + 2) <= *puVar53;
  uVar29 = (undefined7)(*puVar53 >> 8);
LAB_142929555:
  local_888 = (undefined8 *)0x0;
  uStack_880 = 0;
  local_8d8 = (undefined8 *)0x0;
  uStack_8d0 = 0;
  puVar41 = (undefined8 *)*puVar20;
  uVar38 = local_c00 >> 0x20;
  local_c00 = local_c00 & 0xffffffff00000000;
  if ((bVar58) && (puVar41 != (undefined8 *)0x0)) {
    local_c00 = CONCAT44((int)uVar38,(int)CONCAT71(uVar29,puVar41 == (undefined8 *)puVar20[1]));
  }
  local_bc8 = (longlong *)FUN_146b4ef82(&local_508,local_a9c,&local_a9c);
  local_928 = (undefined8 *)0x0;
  uStack_920 = 0;
  local_b9c = (undefined4)CONCAT71((int7)((ulonglong)local_bc8 >> 8),1);
  if (puVar41 == (undefined8 *)0x0) {
    puVar47 = (undefined8 *)0x0;
    puVar20 = local_8d8;
    puVar41 = local_8d8;
  }
  else {
    lVar40 = 0;
    local_bc0 = uVar44;
    local_b38 = puVar20;
    do {
      puVar48 = (uint *)puVar41[1];
      puVar32 = local_c10;
      if ((~(byte)local_c00 & puVar48 < local_b90) == 0) {
        local_c10 = (uint *)*puVar41;
        puVar55 = puVar48;
        do {
          puVar48 = local_b70;
          puVar32 = (uint *)(ulonglong)*local_b70;
          if (puVar55 <= (uint *)(ulonglong)*local_b70) {
            puVar32 = puVar55;
          }
          local_a78 = (undefined8 *)0x0;
          uStack_a70 = 0;
          FUN_146b31154(&local_a78,local_c10,puVar32,0);
          local_a88 = (undefined8 *)0x0;
          uStack_a80 = 0;
          FUN_146b30f82(local_bc8,&local_a88,&local_a78);
          FUN_1401211f6(&local_a88,*puVar48);
          local_ab8 = 0;
          uStack_ab0 = 0;
          CoCreateGuid((GUID *)&local_ab8);
          uVar44 = (ulonglong)*puVar48;
          if (uVar44 == 0) {
            uVar44 = 0;
            local_ac0 = 0;
          }
          else {
            uVar38 = 0;
            local_ac0 = 0;
            do {
              local_ac0 = (local_ac0 << 1 | (ulonglong)((longlong)local_ac0 < 0)) ^
                          (&DAT_14c9912e0)[*(byte *)((longlong)local_a88 + uVar38)];
              uVar38 = uVar38 + 1;
            } while (uVar44 != uVar38);
          }
          local_7e8.QuadPart = 0;
          ppuStack_7e0 = (undefined8 **)0x0;
          local_7d8 = local_7d8 & 0xffffffff00000000;
          FUN_140f0be04(local_a88,uVar44,&local_7e8);
          local_ad0 = local_a88;
          uStack_ac8 = uStack_a80;
          local_a88 = (undefined8 *)0x0;
          uStack_a80 = 0;
          local_c48 = &local_7e8;
          (**(code **)(*local_bd8 + 8))(local_bd8,&local_ad0,&local_ab8,&local_ac0);
          local_838.QuadPart = (LONGLONG)&local_ab8;
          LStack_830 = (LARGE_INTEGER)&local_7e8;
          FUN_146b50322(&local_288,local_92c,&local_838,0);
          uVar21 = FUN_146b50890(&local_238,(int)(local_ac0 >> 0x20) * 0x17 + (int)local_ac0,
                                 &local_ac0);
          FUN_1457adc9c(uVar21,&local_838,&local_ab8,0);
          for (puVar20 = local_a78; puVar20 != (undefined8 *)0x0; puVar20 = (undefined8 *)puVar20[3]
              ) {
            FUN_146b31154(&local_928,*puVar20,puVar20[1],0);
          }
          local_838.QuadPart = 0;
          LStack_830.QuadPart = 0;
          puVar25 = (uint *)FUN_146b30ae2(local_bc0,lVar40,*local_b70);
          for (LVar54 = local_838; (longlong *)LVar54.QuadPart != (longlong *)0x0;
              LVar54 = (LARGE_INTEGER)((LARGE_INTEGER *)(LVar54.QuadPart + 0x18))->QuadPart) {
            FUN_146b31154(&local_a38,*(longlong *)LVar54,*(longlong *)(LVar54.QuadPart + 8),0);
          }
          FUN_1457adc9c(&local_5a8,local_92c,&local_ab8);
          uVar21 = FUN_146b4ea06(&local_698,local_a9c,&local_a9c);
          for (LVar54 = local_838; (longlong *)LVar54.QuadPart != (longlong *)0x0;
              LVar54 = (LARGE_INTEGER)((LARGE_INTEGER *)(LVar54.QuadPart + 0x18))->QuadPart) {
            FUN_146b31154(uVar21,*(longlong *)LVar54,*(longlong *)(LVar54.QuadPart + 8),0);
          }
          (**(code **)(*local_a10 + 8))(local_a10,&local_ab8,&local_838);
          FUN_146b31154(&local_888,local_c10,puVar25,0);
          if ((longlong *)local_838.QuadPart != (longlong *)0x0) {
            LVar54 = local_838;
            do {
              FUN_146b31154(&local_8d8,*(longlong *)LVar54,*(longlong *)(LVar54.QuadPart + 8),0);
              LVar54 = (LARGE_INTEGER)((LARGE_INTEGER *)(LVar54.QuadPart + 0x18))->QuadPart;
            } while ((longlong *)LVar54.QuadPart != (longlong *)0x0);
            while ((longlong *)local_838.QuadPart != (longlong *)0x0) {
              LStack_830 = (LARGE_INTEGER)((LARGE_INTEGER *)(local_838.QuadPart + 0x18))->QuadPart;
              FUN_1400020a8();
              local_838 = LStack_830;
            }
          }
          puVar32 = local_c10;
          puVar20 = local_a78;
          if (local_a88 != (undefined8 *)0x0) {
            FUN_1400020a8();
            puVar32 = local_c10;
            puVar20 = local_a78;
          }
          while (puVar20 != (undefined8 *)0x0) {
            puVar20 = (undefined8 *)puVar20[3];
            local_c10 = puVar32;
            FUN_1400020a8();
            puVar32 = local_c10;
          }
          local_c10 = (uint *)((longlong)puVar32 + (longlong)puVar25);
          puVar48 = (uint *)((longlong)puVar55 - (longlong)puVar25);
          lVar40 = lVar40 + (longlong)puVar25;
          bVar58 = puVar55 != puVar25;
          puVar55 = puVar48;
        } while ((((byte)local_c00 & bVar58) != 0) || (local_b90 <= puVar48));
      }
      local_c10 = puVar32;
      puVar47 = local_888;
      puVar20 = local_b38;
      lVar40 = lVar40 + (longlong)puVar48;
      puVar41 = (undefined8 *)puVar41[3];
    } while (puVar41 != (undefined8 *)0x0);
    puVar41 = local_888;
    if (local_888 == (undefined8 *)0x0) {
      puVar47 = (undefined8 *)0x0;
      puVar20 = local_8d8;
      puVar41 = local_8d8;
      plVar19 = local_ba8;
      uVar44 = local_bc0;
    }
    else {
      do {
        FUN_146b46d18(puVar20,*puVar41,puVar41[1]);
        puVar41 = (undefined8 *)puVar41[3];
      } while (puVar41 != (undefined8 *)0x0);
      local_b9c = 0;
      puVar20 = local_8d8;
      puVar41 = local_8d8;
      plVar19 = local_ba8;
      uVar44 = local_bc0;
    }
  }
  for (; puVar9 = local_8d8, local_8d8 = puVar41, puVar20 != (undefined8 *)0x0;
      puVar20 = (undefined8 *)puVar20[3]) {
    FUN_146b46d18(uVar44,*puVar20,puVar20[1]);
    puVar41 = local_8d8;
    local_8d8 = puVar9;
  }
  FUN_146b3104e(local_bc8,&local_928);
  puVar20 = local_928;
  while (puVar20 != (undefined8 *)0x0) {
    puVar20 = (undefined8 *)puVar20[3];
    FUN_1400020a8();
  }
  while (puVar9 != (undefined8 *)0x0) {
    puVar20 = (undefined8 *)puVar9[3];
    FUN_1400020a8(puVar9);
    puVar9 = puVar20;
  }
  if ((char)local_b9c == '\0') {
    do {
      puVar20 = (undefined8 *)puVar47[3];
      FUN_1400020a8(puVar47);
      puVar47 = puVar20;
    } while (puVar20 != (undefined8 *)0x0);
  }
  lVar40 = (longlong)(int)local_a9c + 1;
  local_a9c = (uint)lVar40;
  if (local_be0 < lVar40) goto LAB_142929ab8;
  goto LAB_14292949c;
LAB_142929ab8:
  cVar11 = FUN_146b30774(&local_a58);
  if (cVar11 == '\0') {
    local_ab8 = local_ab8 & 0xffffffff00000000;
    bVar58 = false;
    lVar40 = 0;
LAB_142929adc:
    iVar30 = (int)lVar40 + 1;
    local_ac0 = CONCAT44(local_ac0._4_4_,iVar30);
    lVar40 = FUN_146b4ef82(&local_508,iVar30,&local_ac0);
    if (*(uint *)(lVar40 + 0x18) < 0x40000001) {
      local_c10 = (uint *)FUN_146b4ea06(&local_468,local_ab8 & 0xffffffff,&local_ab8);
      plVar22 = (longlong *)FUN_146b4ea06(&local_4b8,local_ab8 & 0xffffffff,&local_ab8);
      local_c00 = FUN_146b4ef82(&local_508,local_ab8 & 0xffffffff,&local_ab8);
      puVar53 = (ulonglong *)FUN_146b50026(&local_3c8,local_ab8 & 0xffffffff,&local_ab8);
      if ((int)uStack_410 != local_3e4) {
        puVar31 = local_3d8;
        if (local_3d8 == (undefined1 *)0x0) {
          puVar31 = local_3e0;
        }
        uVar14 = *(uint *)(puVar31 + (ulonglong)(local_3d0 - 1U & (uint)local_ab8) * 4);
        for (uVar50 = uVar14; uVar50 != 0xffffffff;
            uVar50 = *(uint *)(local_418 + (longlong)(int)uVar50 * 0x18 + 0x10)) {
          if (*(uint *)(local_418 + (longlong)(int)uVar50 * 0x18) == (uint)local_ab8) {
            goto LAB_142929fff;
          }
        }
      }
      bVar57 = false;
      uVar29 = 0;
      goto LAB_142929bdb;
    }
    goto LAB_14292a197;
  }
  goto LAB_14292a1a0;
  while (uVar14 = puVar48[4], uVar14 != 0xffffffff) {
LAB_142929fff:
    puVar48 = (uint *)(local_418 + (longlong)(int)uVar14 * 0x18);
    if (*puVar48 == (uint)local_ab8) goto LAB_14292a01c;
  }
  puVar48 = (uint *)0x0;
LAB_14292a01c:
  bVar57 = *(ulonglong *)(puVar48 + 2) <= *puVar53;
  uVar29 = (undefined7)((ulonglong)&local_ab8 >> 8);
LAB_142929bdb:
  local_838.QuadPart = 0;
  LStack_830.QuadPart = 0;
  local_888 = (undefined8 *)0x0;
  uStack_880 = 0;
  plVar26 = (longlong *)FUN_146b30ae2(plVar22,0,local_bf0);
  lVar40 = *plVar22;
  plVar56 = (longlong *)0x0;
  if (lVar40 != 0) {
    plVar56 = (longlong *)0x0;
    do {
      plVar56 = (longlong *)((longlong)plVar56 + *(longlong *)(lVar40 + 8));
      lVar40 = *(longlong *)(lVar40 + 0x18);
    } while (lVar40 != 0);
  }
  LVar54 = local_838;
  if (((plVar19 < plVar56 | bVar57) == 1) &&
     ((plVar26 == local_bf0 || ((plVar26 != (longlong *)0x0 & bVar57) != 0)))) {
    FUN_146b30ae2(local_c10,0,local_bf0,&local_888);
    plVar19 = (longlong *)FUN_146b50026(&local_2d8,local_ac0 & 0xffffffff,&local_ac0);
    *plVar19 = *plVar19 + 1;
    if (local_be0 < (int)local_ac0) {
      local_be0 = (longlong)(int)local_ac0;
    }
    LOCK();
    *local_b30 = local_be0;
    UNLOCK();
    local_bc8 = (longlong *)FUN_146b50026(&local_378,local_ac0 & 0xffffffff,&local_ac0);
    local_8d8 = (undefined8 *)0x0;
    uStack_8d0 = 0;
    FUN_146b30f82(local_c00,&local_8d8,&local_888);
    bVar12 = bVar57 & plVar56 <= plVar26;
    pLVar46 = (LARGE_INTEGER *)0x0;
    if (bVar12 != 0) {
      pLVar46 = local_bb0;
    }
    iVar30 = (int)uStack_8d0;
    lVar40 = (longlong)(int)uStack_8d0;
    uVar14 = (uint)pLVar46;
    uStack_8d0 = CONCAT44(uStack_8d0._4_4_,(int)uStack_8d0 + uVar14);
    if ((uint)(uStack_8d0._4_4_ - iVar30) < uVar14) {
      FUN_1447403be(&local_8d8);
    }
    memset((void *)(lVar40 + (longlong)local_8d8),0,(longlong)(int)uVar14);
    uVar21 = FUN_146b4ea06(&local_5f8,local_ac0 & 0xffffffff,&local_ac0);
    FUN_146b30bb8(uVar21,&local_928,&local_838);
    uVar21 = FUN_146b4ea06(&local_648,local_ac0 & 0xffffffff,&local_ac0);
    FUN_146b30bb8(uVar21,&local_a78,&local_888);
    uVar21 = FUN_146b4ea06(&local_5f8,local_ac0 & 0xffffffff,&local_ac0);
    LVar45 = local_838;
    for (LVar54 = local_838; (longlong *)LVar54.QuadPart != (longlong *)0x0;
        LVar54 = (LARGE_INTEGER)((LARGE_INTEGER *)(LVar54.QuadPart + 0x18))->QuadPart) {
      FUN_146b31154(uVar21,*(longlong *)LVar54,*(longlong *)(LVar54.QuadPart + 8),0);
    }
    uVar21 = FUN_146b4ea06(&local_648,local_ac0 & 0xffffffff,&local_ac0);
    for (puVar20 = local_888; puVar20 != (undefined8 *)0x0; puVar20 = (undefined8 *)puVar20[3]) {
      FUN_146b31154(uVar21,*puVar20,puVar20[1],0);
    }
    if (bVar12 != 0) {
      local_92c[0] = 1;
      local_7e8.QuadPart = (LONGLONG)&local_ac0;
      ppuStack_7e0 = (undefined8 **)local_92c;
      FUN_146b50f38(&local_6e8,&local_a88,&local_7e8,0);
      LVar45 = local_838;
    }
    lVar40 = FUN_14001cc68(0x48,0x10);
    local_ae8.QuadPart = 0;
    uStack_ae0 = 0;
    puVar20 = local_8d8;
    uVar21 = uStack_8d0;
    for (LVar54 = LVar45; (longlong *)LVar54.QuadPart != (longlong *)0x0;
        LVar54 = (LARGE_INTEGER)((LARGE_INTEGER *)(LVar54.QuadPart + 0x18))->QuadPart) {
      local_8d8 = puVar20;
      uStack_8d0 = uVar21;
      FUN_146b31154(&local_ae8,*(longlong *)LVar54,*(longlong *)(LVar54.QuadPart + 8),1);
      puVar20 = local_8d8;
      uVar21 = uStack_8d0;
    }
    local_8d8 = (undefined8 *)0x0;
    uStack_8d0 = 0;
    local_c30 = &local_9f8;
    local_c40 = &local_af8;
    local_c48 = pLVar46;
    local_c38 = &local_ae8;
    local_c28 = local_be8;
    local_c20 = local_bf8;
    local_af8 = puVar20;
    uStack_af0 = uVar21;
    FUN_146b31354(lVar40,local_ac0 & 0xffffffff,*local_bc8,CONCAT71(uVar29,bVar12) & 0xffffffff);
    uVar44 = uStack_a50;
    lVar43 = (longlong)(int)uStack_a50;
    uVar14 = (int)uStack_a50 + 1;
    uStack_a50 = CONCAT44(uStack_a50._4_4_,uVar14);
    if (uStack_a50._4_4_ < uVar14) {
      FUN_146b51064(&local_a58,uVar44 & 0xffffffff);
    }
    plVar19 = local_ba8;
    local_a58[lVar43] = lVar40;
    *local_bc8 = *local_bc8 + (longlong)local_b68;
    if ((longlong *)LVar45.QuadPart != (longlong *)0x0) {
      do {
        LVar54 = (LARGE_INTEGER)((LARGE_INTEGER *)(LVar45.QuadPart + 0x18))->QuadPart;
        FUN_1400020a8(LVar45.QuadPart);
        LVar45 = LVar54;
      } while ((longlong *)LVar54.QuadPart != (longlong *)0x0);
      LStack_830.QuadPart = 0;
    }
    local_838.QuadPart = 0;
    puVar20 = local_888;
    if (local_888 != (undefined8 *)0x0) {
      do {
        puVar20 = (undefined8 *)puVar20[3];
        FUN_1400020a8();
      } while (puVar20 != (undefined8 *)0x0);
      local_888 = (undefined8 *)0x0;
      uStack_880 = 0;
    }
    plVar26 = local_b68;
    if (bVar12 != 0) {
      plVar26 = local_bf0;
    }
    FUN_146b30ae2(plVar22,0,plVar26,&local_838);
    FUN_146b30ae2(local_c10,0,plVar26);
    for (LVar54 = local_838; puVar41 = local_888, puVar48 = local_c10, puVar20 = local_888,
        (longlong *)LVar54.QuadPart != (longlong *)0x0;
        LVar54 = (LARGE_INTEGER)((LARGE_INTEGER *)(LVar54.QuadPart + 0x18))->QuadPart) {
      FUN_146b46d18(plVar22,*(longlong *)LVar54,*(longlong *)(LVar54.QuadPart + 8));
    }
    for (; puVar20 != (undefined8 *)0x0; puVar20 = (undefined8 *)puVar20[3]) {
      FUN_146b46d18(puVar48,*puVar20,puVar20[1]);
    }
    FUN_146b3104e(local_c00,&local_888);
    puVar20 = local_a78;
    while (puVar47 = local_928, puVar20 != (undefined8 *)0x0) {
      puVar20 = (undefined8 *)puVar20[3];
      FUN_1400020a8();
    }
    while (puVar47 != (undefined8 *)0x0) {
      puVar47 = (undefined8 *)puVar47[3];
      FUN_1400020a8();
    }
    if (local_8d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    bVar58 = true;
    while (LVar54 = local_838, puVar41 != (undefined8 *)0x0) {
      puVar20 = (undefined8 *)puVar41[3];
      FUN_1400020a8(puVar41);
      puVar41 = puVar20;
    }
  }
  while ((longlong *)LVar54.QuadPart != (longlong *)0x0) {
    LVar54 = (LARGE_INTEGER)((LARGE_INTEGER *)(LVar54.QuadPart + 0x18))->QuadPart;
    FUN_1400020a8();
  }
  lVar40 = (longlong)(int)(uint)local_ab8 + 1;
  local_ab8._4_4_ = (undefined4)(local_ab8 >> 0x20);
  local_ab8 = CONCAT44(local_ab8._4_4_,(int)lVar40);
  if (local_be0 < lVar40) goto LAB_14292a197;
  goto LAB_142929adc;
LAB_14292a197:
  if (!bVar58) goto LAB_14292a1a0;
  goto LAB_142929ab8;
LAB_14292a1a0:
  cVar11 = FUN_146b30774();
  if (cVar11 == '\0') {
    local_7e8.QuadPart = local_7e8.QuadPart & 0xffffffff00000000;
    lVar40 = FUN_146b510ea();
    if ((*(uint *)(lVar40 + 0x18) < 0x40000001) &&
       (cVar11 = (**(code **)(*local_c08 + 0x10))(), pLVar46 = local_bb0, cVar11 == '\0')) {
      iVar30 = (int)uStack_a40;
      if (0 < (longlong)(int)uStack_a40) {
        lVar40 = (longlong)(int)uStack_a40 - (longlong)local_bb0;
        memcpy(local_a48,(void *)((longlong)local_a48 + lVar40),(size_t)local_bb0);
        iVar30 = (int)uStack_a40;
        iVar13 = (int)pLVar46;
        uVar14 = iVar13 - (int)uStack_a40;
        if (uVar14 == 0 || iVar13 < (int)uStack_a40) {
          if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4();
          }
          if (iVar13 < (int)uStack_a40) {
            iVar30 = (int)local_bb0;
            uStack_a40 = CONCAT44(uStack_a40._4_4_,iVar30);
          }
        }
        else {
          uStack_a40 = CONCAT44(uStack_a40._4_4_,iVar13);
          if ((uint)(uStack_a40._4_4_ - iVar30) < uVar14) {
            FUN_1447403be(&local_a48);
          }
          memset((void *)((longlong)iVar30 + (longlong)local_a48),0,(longlong)(int)uVar14);
          iVar30 = (int)uStack_a40;
        }
        local_b88 = local_b88 + lVar40;
      }
      iVar13 = (int)local_bf0;
      FUN_140393c76(&local_a48,(ulonglong)local_bf0 & 0xffffffff,1);
      iVar37 = (**(code **)(*local_c08 + 8))
                         (local_c08,(longlong)iVar30 + (longlong)local_a48,iVar13 - iVar30);
      iVar30 = iVar37 + iVar30;
      iVar13 = (int)uStack_a40;
      lVar40 = (longlong)(int)uStack_a40;
      if ((int)uStack_a40 < iVar30) {
        uStack_a40 = CONCAT44(uStack_a40._4_4_,iVar30);
        uVar14 = iVar30 - iVar13;
        if ((uint)(uStack_a40._4_4_ - iVar13) < uVar14) {
          FUN_1447403be(&local_a48);
        }
        memset((void *)(lVar40 + (longlong)local_a48),0,(longlong)(int)uVar14);
      }
      else {
        if (iVar30 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar30);
        }
        if (iVar30 < (int)uStack_a40) {
          uStack_a40 = CONCAT44(uStack_a40._4_4_,iVar30);
        }
      }
      if (iVar37 != 0) {
        cVar11 = (**(code **)(*local_c08 + 0x10))();
        pLVar46 = (LARGE_INTEGER *)0x0;
        if (cVar11 != '\0') {
          pLVar46 = local_bb0;
        }
        iVar30 = (int)uStack_a40;
        lVar40 = (longlong)(int)uStack_a40;
        uVar14 = (uint)pLVar46;
        uStack_a40 = CONCAT44(uStack_a40._4_4_,(int)uStack_a40 + uVar14);
        if ((uint)(uStack_a40._4_4_ - iVar30) < uVar14) {
          FUN_1447403be(&local_a48);
        }
        memset((void *)(lVar40 + (longlong)local_a48),0,(longlong)(int)uVar14);
        cVar11 = (**(code **)(*local_c08 + 0x10))();
        local_838.QuadPart = 0;
        LStack_830 = (LARGE_INTEGER)0x0;
        FUN_146b31154(&local_838,local_b88,(longlong)(int)uStack_a40 - (longlong)pLVar46,0);
        local_7e8.QuadPart = local_7e8.QuadPart & 0xffffffff00000000;
        uVar21 = FUN_146b512e6(&local_5f8,&local_7e8);
        FUN_146b30bb8(uVar21,&local_888,&local_838);
        local_7e8.QuadPart = local_7e8.QuadPart & 0xffffffff00000000;
        uVar21 = FUN_146b512e6(&local_648,&local_7e8);
        FUN_146b30bb8(uVar21,&local_8d8,&local_838);
        local_7e8.QuadPart = local_7e8.QuadPart & 0xffffffff00000000;
        uVar21 = FUN_146b512e6(&local_5f8,&local_7e8);
        LVar54 = local_838;
        LVar45 = local_838;
        if ((undefined8 *)local_838.QuadPart == (undefined8 *)0x0) {
          local_7e8.QuadPart = local_7e8.QuadPart & 0xffffffff00000000;
          FUN_146b512e6(&local_648,&local_7e8);
        }
        else {
          do {
            FUN_146b31154(uVar21,*(undefined8 *)LVar45,*(undefined8 *)(LVar45.QuadPart + 8),0);
            pLVar5 = (LARGE_INTEGER *)(LVar45.QuadPart + 0x18);
            LVar45.QuadPart = pLVar5->QuadPart;
          } while ((undefined8 *)pLVar5->QuadPart != (undefined8 *)0x0);
          local_7e8.QuadPart = local_7e8.QuadPart & 0xffffffff00000000;
          uVar21 = FUN_146b512e6(&local_648,&local_7e8);
          LVar45 = LVar54;
          do {
            FUN_146b31154(uVar21,*(undefined8 *)LVar45,*(undefined8 *)(LVar45.QuadPart + 8),0);
            LVar45 = (LARGE_INTEGER)((LARGE_INTEGER *)(LVar45.QuadPart + 0x18))->QuadPart;
          } while ((undefined8 *)LVar45.QuadPart != (undefined8 *)0x0);
        }
        if (cVar11 != '\0') {
          local_a88 = (undefined8 *)CONCAT71(local_a88._1_7_,1);
          local_a78 = (undefined8 *)((ulonglong)local_a78 & 0xffffffff00000000);
          local_7e8.QuadPart = (LONGLONG)&local_a78;
          ppuStack_7e0 = &local_a88;
          FUN_146b51478(&local_6e8,&local_928,&local_7e8);
        }
        lVar40 = FUN_14001cc68(0x48,0x10);
        pvVar8 = local_a48;
        local_b08.s = LVar54.s;
        local_b00 = LStack_830;
        local_838.QuadPart = 0;
        LStack_830.QuadPart = 0;
        local_b18 = (undefined8 *)0x0;
        _Size = (size_t)(int)uStack_a40;
        local_b10 = (int)uStack_a40;
        if (_Size == 0) {
          local_b0c = 0;
        }
        else {
          FUN_1447a127e(&local_b18,uStack_a40 & 0xffffffff,0);
          memcpy(local_b18,pvVar8,_Size);
        }
        (**(code **)(*local_c08 + 0x10))();
        local_c20 = local_bf8;
        local_c28 = local_be8;
        local_c30 = &local_9f8;
        local_c38 = &local_b08;
        local_c48 = pLVar46;
        local_c40 = &local_b18;
        FUN_146b31354(lVar40,0,local_b88);
        uVar44 = uStack_a50;
        lVar43 = (longlong)(int)uStack_a50;
        uVar14 = (int)uStack_a50 + 1;
        uStack_a50 = CONCAT44(uStack_a50._4_4_,uVar14);
        if (uStack_a50._4_4_ < uVar14) {
          FUN_146b51064(&local_a58,uVar44 & 0xffffffff);
        }
        local_a58[lVar43] = lVar40;
        local_7e8.QuadPart = local_7e8.QuadPart & 0xffffffff00000000;
        plVar19 = (longlong *)FUN_146b5159e(&local_2d8);
        *plVar19 = *plVar19 + 1;
        puVar20 = local_8d8;
        while (puVar41 = local_888, puVar20 != (undefined8 *)0x0) {
          puVar20 = (undefined8 *)puVar20[3];
          FUN_1400020a8();
        }
        while (puVar41 != (undefined8 *)0x0) {
          puVar41 = (undefined8 *)puVar41[3];
          FUN_1400020a8();
        }
      }
    }
  }
  if (local_490 == 0) {
    uVar33 = 1;
    iVar30 = 0;
    uVar44 = 0;
    iVar13 = 0;
  }
  else {
    puVar48 = local_498;
    if (local_498 == (uint *)0x0) {
      puVar48 = local_4a8;
    }
    uVar14 = *puVar48;
    if (uVar14 == 0) {
      iVar30 = local_490 + 0x1e;
      if (-1 < local_490 + -1) {
        iVar30 = local_490 + -1;
      }
      uVar44 = 0;
      uVar38 = (ulonglong)(uint)(iVar30 >> 5);
      if (iVar30 >> 5 < 1) {
        uVar38 = uVar44;
      }
      iVar30 = 0;
      do {
        if (uVar38 == uVar44) goto LAB_14292a735;
        iVar30 = iVar30 + 0x20;
        uVar14 = puVar48[uVar44 + 1];
        uVar44 = uVar44 + 1;
      } while (uVar14 == 0);
    }
    else {
      iVar30 = 0;
      uVar44 = 0;
    }
    uVar33 = (ulonglong)(-uVar14 & uVar14);
    uVar38 = uVar33 * 2 + 1;
    lVar40 = 0x3f;
    if (uVar38 != 0) {
      for (; uVar38 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    iVar13 = (iVar30 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
    if (local_490 <= iVar13) {
      iVar13 = local_490;
    }
  }
  if (iVar13 == local_490) {
LAB_14292a735:
    bVar58 = false;
  }
  else {
    puVar48 = local_498;
    if (local_498 == (uint *)0x0) {
      puVar48 = local_4a8;
    }
    iVar37 = local_490 + 0x1e;
    if (-1 < local_490 + -1) {
      iVar37 = local_490 + -1;
    }
    iVar37 = iVar37 >> 5;
    uVar14 = 0xffffffff;
    do {
      bVar58 = false;
      if (*(longlong *)(local_4b8 + 8 + (longlong)iVar13 * 0x20) != 0) {
        bVar58 = true;
        break;
      }
      uVar14 = uVar14 & ~(uint)uVar33;
      iVar13 = (int)uVar44;
      lVar40 = (longlong)iVar13;
      uVar50 = puVar48[lVar40] & uVar14;
      if (uVar50 == 0) {
        iVar34 = iVar37;
        if (iVar37 < iVar13) {
          iVar34 = iVar13;
        }
        if (iVar37 <= iVar13) break;
        lVar43 = 0;
        while( true ) {
          iVar30 = iVar30 + 0x20;
          uVar50 = puVar48[lVar40 + lVar43 + 1];
          if (uVar50 != 0) break;
          lVar43 = lVar43 + 1;
          if (iVar34 - lVar40 == lVar43) {
            bVar58 = false;
            goto LAB_14292a815;
          }
        }
        uVar44 = (ulonglong)(iVar13 + (int)lVar43 + 1);
        uVar14 = 0xffffffff;
      }
      uVar33 = (ulonglong)(-uVar50 & uVar50);
      uVar38 = uVar33 * 2 + 1;
      lVar40 = 0x3f;
      if (uVar38 != 0) {
        for (; uVar38 >> lVar40 == 0; lVar40 = lVar40 + -1) {
        }
      }
      iVar13 = (iVar30 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
      bVar58 = false;
    } while (iVar13 < local_490);
  }
LAB_14292a815:
  if (local_4e0 == 0) {
    uVar33 = 1;
    uVar44 = 0;
    iVar30 = 0;
    iVar13 = 0;
  }
  else {
    puVar48 = local_4e8;
    if (local_4e8 == (uint *)0x0) {
      puVar48 = local_4f8;
    }
    uVar14 = *puVar48;
    if (uVar14 == 0) {
      iVar30 = local_4e0 + 0x1e;
      if (-1 < local_4e0 + -1) {
        iVar30 = local_4e0 + -1;
      }
      uVar44 = 0;
      uVar38 = (ulonglong)(uint)(iVar30 >> 5);
      if (iVar30 >> 5 < 1) {
        uVar38 = uVar44;
      }
      iVar30 = 0;
      do {
        if (uVar38 == uVar44) goto LAB_14292a8ac;
        iVar30 = iVar30 + 0x20;
        uVar14 = puVar48[uVar44 + 1];
        uVar44 = uVar44 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar44 = 0;
      iVar30 = 0;
    }
    uVar33 = (ulonglong)(-uVar14 & uVar14);
    uVar38 = uVar33 * 2 + 1;
    lVar40 = 0x3f;
    if (uVar38 != 0) {
      for (; uVar38 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    iVar13 = (iVar30 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
    if (local_4e0 <= iVar13) {
      iVar13 = local_4e0;
    }
  }
  if (iVar13 == local_4e0) {
LAB_14292a8ac:
    lVar40 = 0;
    lVar43 = 0;
  }
  else {
    puVar48 = local_4e8;
    if (local_4e8 == (uint *)0x0) {
      puVar48 = local_4f8;
    }
    iVar37 = local_4e0 + 0x1e;
    if (-1 < local_4e0 + -1) {
      iVar37 = local_4e0 + -1;
    }
    iVar37 = iVar37 >> 5;
    uVar14 = 0xffffffff;
    lVar43 = 0;
    lVar40 = 0;
    do {
      lVar43 = *(int *)(local_508 + 0x20 + (longlong)iVar13 * 0x30) + lVar43;
      lVar40 = (ulonglong)*(uint *)(local_508 + 0x24 + (longlong)iVar13 * 0x30) + lVar40;
      uVar14 = ~(uint)uVar33 & uVar14;
      iVar13 = (int)uVar44;
      lVar51 = (longlong)iVar13;
      uVar50 = puVar48[lVar51] & uVar14;
      if (uVar50 == 0) {
        iVar34 = iVar37;
        if (iVar37 < iVar13) {
          iVar34 = iVar13;
        }
        if (iVar37 <= iVar13) break;
        lVar52 = 0;
        while( true ) {
          iVar30 = iVar30 + 0x20;
          uVar50 = puVar48[lVar51 + lVar52 + 1];
          if (uVar50 != 0) break;
          lVar52 = lVar52 + 1;
          if (iVar34 - lVar51 == lVar52) goto LAB_14292a993;
        }
        uVar44 = (ulonglong)(iVar13 + (int)lVar52 + 1);
        uVar14 = 0xffffffff;
      }
      uVar33 = (ulonglong)(-uVar50 & uVar50);
      uVar38 = uVar33 * 2 + 1;
      lVar51 = 0x3f;
      if (uVar38 != 0) {
        for (; uVar38 >> lVar51 == 0; lVar51 = lVar51 + -1) {
        }
      }
      iVar13 = (iVar30 - ((uint)lVar51 ^ 0x3f)) + 0x3e;
    } while (iVar13 < local_4e0);
  }
LAB_14292a993:
  LOCK();
  *local_b48 = lVar40;
  UNLOCK();
  LOCK();
  *local_b50 = lVar43;
  UNLOCK();
  LOCK();
  *local_b40 = (longlong)(int)uStack_a50;
  UNLOCK();
  if ((char)local_bcc != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
      FUN_1459825b0(&DAT_14c872ee0);
      atexit(FUN_1427868a5);
      _Init_thread_footer(&DAT_14c872ef8);
    }
    FUN_1400e4168(&DAT_14c872ee0,0);
  }
  QueryPerformanceCounter(&local_7e8);
  LOCK();
  *local_b80 = local_7e8.QuadPart - local_b78;
  UNLOCK();
  (**(code **)(*local_bf8 + 0x10))(local_bf8,local_934);
  FUN_14000f986(0x3c23d70a);
  cVar11 = (**(code **)(*local_c08 + 0x40))();
  if (cVar11 != '\0') goto LAB_142928979;
  goto LAB_142928c16;
joined_r0x00014292aaf9:
  while (local_bf8 = plVar19, local_bd8 = plVar22, puVar20 != (undefined8 *)0x0) {
    puVar20 = (undefined8 *)puVar20[3];
    FUN_1400020a8();
    plVar19 = local_bf8;
    plVar22 = local_bd8;
  }
  if ((longlong *)local_838.QuadPart != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar44 = 0;
LAB_14292ae24:
  FUN_146b4e3d0(local_a58,uStack_a50 & 0xffffffff);
  if (local_a58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_a48 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_6a0 = 0;
  if (local_6a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1456c3d4c(&local_6e8);
  local_650 = 0;
  if (local_658 != 0) {
    FUN_1400020a8();
  }
  FUN_146b481b8(&local_698);
  local_600 = 0;
  if (local_608 != 0) {
    FUN_1400020a8();
  }
  FUN_146b481b8(&local_648);
  local_5b0 = 0;
  if (local_5b8 != 0) {
    FUN_1400020a8();
  }
  FUN_146b481b8(&local_5f8);
  local_560 = 0;
  if (local_568 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_5a8);
  lVar40 = local_a38;
  while (lVar43 = local_a28, lVar40 != 0) {
    lVar40 = *(longlong *)(lVar40 + 0x18);
    FUN_1400020a8();
  }
  while (lVar43 != 0) {
    lVar43 = *(longlong *)(lVar43 + 0x18);
    FUN_1400020a8();
  }
  if (local_a08 != (longlong *)0x0) {
    LOCK();
    plVar26 = local_a08 + 1;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)*plVar26 == 0) {
      (**(code **)*local_a08)(local_a08);
      LOCK();
      piVar2 = (int *)((longlong)local_a08 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a08 + 0x10))(local_a08);
      }
    }
  }
  local_510 = 0;
  if (local_518 != 0) {
    FUN_1400020a8();
  }
  FUN_146b48006(&local_558);
  local_4c0 = 0;
  if (local_4c8 != 0) {
    FUN_1400020a8();
  }
  FUN_146b48342(&local_508);
  local_470 = 0;
  if (local_478 != 0) {
    FUN_1400020a8();
  }
  FUN_146b481b8(&local_4b8);
  local_420 = 0;
  if (local_428 != 0) {
    FUN_1400020a8();
  }
  FUN_146b481b8(&local_468);
  local_3d0 = 0;
  if (local_3d8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146b484ec(&local_418);
  local_380 = 0;
  if (local_388 != 0) {
    FUN_1400020a8();
  }
  FUN_146b484ec(&local_3c8);
  local_330 = 0;
  if (local_338 != 0) {
    FUN_1400020a8();
  }
  FUN_146b484ec(&local_378);
  local_2e0 = 0;
  if (local_2e8 != 0) {
    FUN_1400020a8();
  }
  FUN_146b481b8(&local_328);
  local_290 = 0;
  if (local_298 != 0) {
    FUN_1400020a8();
  }
  FUN_146b484ec(&local_2d8);
  local_240 = 0;
  if (local_248 != 0) {
    FUN_1400020a8();
  }
  FUN_146b485a4(&local_288);
  local_1f0 = 0;
  if (local_1f8 != 0) {
    FUN_1400020a8();
  }
  FUN_146b4865e(&local_238);
  if (local_b98 != (longlong *)0x0) {
    (**(code **)*local_b98)(local_b98,1);
  }
  if (local_9f8 != (uint *)0x0) {
    FUN_1400020a8();
  }
LAB_14292b18b:
  FUN_1447a1747(local_9e8,local_9e0);
  if (local_9e8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_c08 != (longlong *)0x0) {
    (**(code **)*local_c08)(local_c08,1);
  }
  FUN_146b31b5e(&local_998);
  if (local_be8 != (longlong *)0x0) {
    (**(code **)*local_be8)(local_be8,1);
  }
LAB_14292b1e9:
  FUN_146b31b9c(&local_1e8);
  if (plVar22 != (longlong *)0x0) {
    (**(code **)*plVar22)(plVar22,1);
  }
  if (local_b58 != (undefined8 *)0x0) {
    (**(code **)*local_b58)(local_b58,1);
  }
  if (local_bb8 != (undefined8 *)0x0) {
    (**(code **)*local_bb8)(local_bb8,1);
  }
  if (plVar19 != (longlong *)0x0) {
    (**(code **)*plVar19)(plVar19,1);
  }
LAB_1429277a3:
  if ((local_80 ^ (ulonglong)auStack_c68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar44;
}



// FUNCTION 14292bbe8 FUN_14292bbe8 body=146 status=ok
// SIG undefined FUN_14292bbe8(void)

void FUN_14292bbe8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c991b20) {
    FUN_144b3d300(&DAT_14c991b20);
    if (DAT_14c991b20 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c991af8);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c991af8,4000);
      atexit((_func_5014 *)&LAB_14292bc7a);
      _Init_thread_footer(&DAT_14c991b20);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c991af8);
                    /* WARNING: Could not recover jumptable at 0x00014292bc26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c991af8);
  return;
}



// FUNCTION 14292bc88 FUN_14292bc88 body=15770 status=ok
// SIG undefined FUN_14292bc88(void)

/* WARNING: Removing unreachable block (ram,0x00014292ef53) */
/* WARNING: Type propagation algorithm not settling */

bool FUN_14292bc88(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  wchar_t *pwVar5;
  double dVar6;
  LPCRITICAL_SECTION p_Var7;
  char cVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  DWORD DVar15;
  DWORD DVar16;
  longlong *plVar17;
  wchar_t ***pppwVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  undefined8 uVar22;
  longlong **pplVar23;
  byte bVar24;
  uint uVar25;
  int iVar26;
  undefined7 uVar28;
  uint *puVar27;
  int iVar29;
  undefined2 *puVar30;
  wchar_t ****ppppwVar31;
  wchar_t ****ppppwVar32;
  ulonglong uVar33;
  ushort uVar34;
  longlong lVar35;
  wchar_t **ppwVar36;
  ushort uVar37;
  ulonglong uVar38;
  longlong lVar39;
  undefined2 *puVar40;
  undefined *puVar41;
  wchar_t *pwVar42;
  wchar_t ***pppwVar43;
  ulonglong uVar44;
  uint uVar45;
  ulonglong uVar46;
  longlong lVar47;
  wchar_t ***pppwVar48;
  bool bVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  undefined1 auStack_428 [32];
  wchar_t *****local_408;
  void **local_400;
  void **local_3f8;
  ulonglong local_3f0;
  char local_3e1;
  ulonglong local_3e0;
  int local_3d8;
  uint local_3d4;
  longlong local_3d0;
  LPCRITICAL_SECTION local_3c8;
  undefined8 *local_3c0;
  ulonglong local_3b8;
  int local_3ac;
  longlong *local_3a8;
  ulonglong local_3a0;
  undefined8 *local_398;
  longlong local_390;
  undefined4 local_384;
  longlong *local_380;
  longlong local_378;
  longlong local_370;
  longlong local_368;
  longlong local_360;
  longlong local_358;
  longlong local_350;
  longlong *local_348;
  longlong *local_340;
  longlong local_338;
  longlong local_330;
  wchar_t ***local_328;
  longlong local_320;
  LPCRITICAL_SECTION local_318;
  longlong local_310;
  wchar_t ****local_308;
  undefined4 local_300;
  undefined2 *local_2f8;
  int local_2f0;
  undefined2 *local_2e8;
  int local_2e0;
  undefined4 local_2dc;
  wchar_t **local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  longlong local_2c0;
  void *local_2b8;
  int local_2b0;
  undefined4 local_2ac;
  void *local_2a8;
  ulonglong uStack_2a0;
  longlong *local_298;
  int local_290;
  undefined4 local_28c;
  undefined4 local_288 [2];
  longlong *local_280;
  longlong *local_278;
  ulonglong uStack_270;
  wchar_t ****local_268;
  undefined4 local_260;
  float local_258;
  undefined4 uStack_254;
  int local_250;
  undefined4 uStack_24c;
  wchar_t ****local_248;
  undefined8 uStack_240;
  int local_238;
  undefined4 local_234;
  wchar_t ****local_228;
  undefined8 uStack_220;
  wchar_t ****local_218;
  ulonglong uStack_210;
  wchar_t ****local_208;
  undefined8 uStack_200;
  wchar_t ****local_1f8;
  int local_1f0;
  undefined4 local_1ec;
  undefined1 local_1e8 [80];
  wchar_t ****local_198;
  longlong ***ppplStack_190;
  int local_188;
  undefined4 local_184;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  longlong local_158;
  undefined4 local_150;
  undefined8 local_148;
  ulonglong uStack_140;
  uint local_138 [4];
  uint *local_128;
  int local_120;
  undefined8 local_11c;
  int local_114;
  longlong local_108;
  undefined4 local_100;
  wchar_t ***local_f8;
  undefined8 uStack_f0;
  longlong *local_e8 [2];
  longlong **local_d8;
  uint local_d0;
  undefined1 local_cc [8];
  int local_c4;
  longlong local_b8;
  undefined4 local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c991b50) && (FUN_144b3d300(&DAT_14c991b50), DAT_14c991b50 == -1)) {
    InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c991b28);
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c991b28,4000);
    atexit((_func_5014 *)&LAB_14292fa23);
    _Init_thread_footer(&DAT_14c991b50);
  }
  cVar8 = *(char *)(param_1 + 0xd5);
  if (cVar8 == '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c991b28);
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x154) = 1;
  UNLOCK();
  local_368 = param_1 + 0x850;
  local_3e1 = cVar8;
  FUN_146b341de();
  local_370 = param_1 + 0x810;
  FUN_146b341de();
  local_3d0 = param_1 + 0x2d8;
  local_f8 = (wchar_t ***)CONCAT44(local_f8._4_4_,0x3f800000);
  local_148 = (wchar_t *)((ulonglong)local_148._4_4_ << 0x20);
  FUN_146b34248();
  if ((longlong)*(int *)(param_1 + 0xe0) == 0) {
    bVar49 = false;
    uVar28 = 0;
  }
  else {
    lVar35 = (longlong)*(int *)(param_1 + 0xe0) * 0x158;
    plVar17 = (longlong *)(*(longlong *)(param_1 + 0xd8) + 0xa8);
    do {
      lVar35 = lVar35 + -0x158;
      plVar21 = plVar17 + -2;
      if (*plVar17 != 0) {
        plVar21 = plVar17;
      }
      plVar21 = (longlong *)*plVar21;
      lVar39 = (**(code **)(*plVar21 + 0x40))();
      bVar49 = 1 < *(int *)(lVar39 + 8);
      uVar28 = (undefined7)((ulonglong)plVar21 >> 8);
    } while ((*(int *)(lVar39 + 8) < 2) && (plVar17 = plVar17 + 0x2b, lVar35 != 0));
  }
  uVar50 = 0;
  bVar24 = bVar49 & *(byte *)(param_1 + 0xd4);
  local_384 = (undefined4)CONCAT71(uVar28,bVar24);
  if (bVar24 == 0) {
    uVar50 = 0x3f800000;
  }
  local_f8 = (wchar_t ***)CONCAT44(local_f8._4_4_,uVar50);
  local_148 = (wchar_t *)CONCAT44(local_148._4_4_,9);
  FUN_146b34248(local_3d0);
  lVar35 = param_1 + 0x610;
  local_360 = lVar35;
  FUN_146b341de();
  iVar10 = *(int *)(param_1 + 0xe0);
  local_3e0 = CONCAT44(local_3e0._4_4_,(int)CONCAT71((int7)((ulonglong)lVar35 >> 8),1));
  if ((longlong)iVar10 != 0) {
    lVar39 = (longlong)iVar10 * 0x158;
    lVar35 = *(longlong *)(param_1 + 0xd8) + 0xb8;
    local_3e0 = CONCAT44(local_3e0._4_4_,(int)CONCAT71((int7)(int3)((uint)iVar10 >> 8),1));
    do {
      lVar39 = lVar39 + -0x158;
      local_d8 = (longlong **)0x0;
      local_d0 = 0;
      local_f8 = (wchar_t ***)0x0;
      uStack_f0 = (longlong *)0x0;
      local_cc = (undefined1  [8])0xffffffff00000080;
      local_c4 = 0;
      local_b8 = 0;
      local_b0 = 0;
      FUN_140056680(&local_148,&DAT_149dfb77a);
      FUN_140e830ae(&local_f8,&local_198,&local_148,0);
      if ((wchar_t ****)local_148 != (wchar_t ****)0x0) {
        FUN_1400020a8();
      }
      plVar17 = *(longlong **)
                 (lVar35 + ((ulonglong)(*(longlong *)(lVar35 + -0x10) != 0) << 4 |
                           0xffffffffffffffe0));
      (**(code **)(*plVar17 + 0xc0))(plVar17,&local_f8);
      FUN_140056680(&local_148,&DAT_149dfb77a);
      FUN_140e830ae(&local_f8,&local_198,&local_148,0);
      if ((wchar_t ****)local_148 != (wchar_t ****)0x0) {
        FUN_1400020a8();
      }
      FUN_145d1d460(lVar35,&local_148,&local_f8);
      iVar13 = local_114;
      iVar10 = (int)uStack_140;
      local_100 = 0;
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      FUN_1408910a4(&local_148);
      if (iVar13 < iVar10) {
        plVar17 = *(longlong **)(param_1 + 0x550);
        local_148 = L"InvalidInstallTags";
        uStack_140._0_4_ = 0x12;
        FUN_1446e940c(&local_198,&local_148);
        local_148 = L"BuildPatchInstallError";
        uStack_140._0_4_ = 0x16;
        FUN_1446e940c(&local_248,&local_148);
        local_148 = 
        L"This installation could not continue due to a configuration issue. Please contact support."
        ;
        uStack_140 = CONCAT44(uStack_140._4_4_,0x5a);
        FUN_140208c1e(&local_1f8,&local_248,&local_198);
        local_408 = &local_1f8;
        local_3e0 = local_3e0 & 0xffffffff00000000;
        (**(code **)(*plVar17 + 0x38))(plVar17,9,&DAT_149f2f976);
      }
      local_b0 = 0;
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      FUN_1408910a4(&local_f8);
    } while ((iVar10 <= iVar13) && (lVar35 = lVar35 + 0x158, lVar39 != 0));
  }
  uVar50 = (undefined4)local_3e0;
  if ((*(int *)(param_1 + 0x48) == 0) ||
     ((*(longlong **)(param_1 + 0x40) == (longlong *)0x0 ||
      (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))(), cVar8 == '\0')))) {
    plVar17 = *(longlong **)(param_1 + 0x550);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (wchar_t ****)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = (wchar_t ***)0x0;
      *DAT_14c844840 = (wchar_t ***)&PTR_FUN_149e19310;
      DAT_14c844840[2] = (wchar_t ***)0xffffffffffffffff;
      DAT_14c844840[3] = (wchar_t ***)0x0;
      DAT_14c844840[4] = (wchar_t ***)0x0;
      DAT_14c844840[5] = (wchar_t ***)0x0;
      if (DAT_14c844840 != (wchar_t ****)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    local_208 = DAT_14c844840;
    if (DAT_14c844840 != (wchar_t ****)0x0) {
      (*(code *)(*DAT_14c844840)[1])();
    }
    local_408 = &local_208;
    uStack_200 = CONCAT44(uStack_200._4_4_,DAT_14c844848);
    uVar50 = 0;
    (**(code **)(*plVar17 + 0x38))(plVar17,9,&DAT_149f2f970,0);
  }
  plVar17 = (longlong *)FUN_14054d1d4();
  local_3c0 = (undefined8 *)(param_1 + 0x70);
  puVar40 = &DAT_149dfb77a;
  puVar30 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 0x78) != 0) {
    puVar30 = (undefined2 *)*local_3c0;
  }
  (**(code **)(*plVar17 + 0x58))(plVar17,puVar30,1);
  plVar17 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_1 + 0x78) != 0) {
    puVar40 = (undefined2 *)*local_3c0;
  }
  cVar8 = (**(code **)(*plVar17 + 0x50))(plVar17,puVar40);
  if (cVar8 == '\0') {
    plVar17 = *(longlong **)(param_1 + 0x550);
    FUN_140009b9a(&local_228,local_3c0);
    local_f8 = (wchar_t ***)0x149f2d246;
    uStack_f0._0_4_ = 0x17;
    FUN_1446e940c(&local_278,&local_f8);
    local_f8 = (wchar_t ***)0x149f2f892;
    uStack_f0._0_4_ = 0x16;
    FUN_1446e940c(local_288,&local_f8);
    local_f8 = (wchar_t ***)0x149f2d1dc;
    uStack_f0 = (longlong *)CONCAT44(uStack_f0._4_4_,0x34);
    FUN_140208c1e(&local_268,local_288,&local_278,&local_f8);
    FUN_14023409e(&local_258,&local_268,1);
    local_f8 = (wchar_t ***)CONCAT44(local_f8._4_4_,4);
    FUN_14023423e(local_e8,&local_228);
    ppplStack_190 = &local_d8;
    local_198 = &local_f8;
    FUN_14010d304(&local_148);
    uStack_240 = (longlong *)CONCAT44(uStack_24c,local_250);
    if (uStack_240 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_240 + 1) = (int)uStack_240[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_218,&local_248,&local_148);
    FUN_14007f2db(local_148,uStack_140 & 0xffffffff);
    if ((wchar_t ****)local_148 != (wchar_t ****)0x0) {
      FUN_1400020a8();
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    plVar21 = (longlong *)CONCAT44(uStack_24c,local_250);
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar21 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar2 = (int *)((longlong)plVar21 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
    if (local_228 != (wchar_t ****)0x0) {
      (*(code *)(*local_228)[2])();
    }
    local_408 = &local_218;
    (**(code **)(*plVar17 + 0x38))(plVar17,9,&DAT_149f2f9b8,0);
    if (local_268 != (wchar_t ****)0x0) {
      (*(code *)(*local_268)[2])();
    }
    uVar50 = 0;
  }
  plVar17 = (longlong *)FUN_14054d1d4();
  local_398 = (undefined8 *)(param_1 + 0x80);
  puVar40 = &DAT_149dfb77a;
  puVar30 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 0x88) != 0) {
    puVar30 = (undefined2 *)*local_398;
  }
  (**(code **)(*plVar17 + 0x58))(plVar17,puVar30,1);
  plVar17 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_1 + 0x88) != 0) {
    puVar40 = (undefined2 *)*local_398;
  }
  cVar8 = (**(code **)(*plVar17 + 0x50))(plVar17,puVar40);
  if (cVar8 == '\0') {
    plVar17 = *(longlong **)(param_1 + 0x550);
    FUN_140009b9a(&local_278,local_398);
    local_f8 = (wchar_t ***)0x149f2d2da;
    uStack_f0._0_4_ = 0x15;
    FUN_1446e940c(&local_2a8,&local_f8);
    local_f8 = (wchar_t ***)0x149f2f892;
    uStack_f0._0_4_ = 0x16;
    FUN_1446e940c(&local_2b8,&local_f8);
    local_f8 = (wchar_t ***)0x149f2d276;
    uStack_f0 = (longlong *)CONCAT44(uStack_f0._4_4_,0x31);
    FUN_140208c1e(&local_298,&local_2b8,&local_2a8,&local_f8);
    FUN_14023409e(local_288,&local_298,1);
    local_f8 = (wchar_t ***)CONCAT44(local_f8._4_4_,4);
    FUN_14023423e(local_e8,&local_278);
    ppplStack_190 = &local_d8;
    local_198 = &local_f8;
    FUN_14010d304(&local_148);
    uStack_240 = local_280;
    if (local_280 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_280 + 1) = (int)local_280[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_268,&local_248,&local_148);
    FUN_14007f2db(local_148,uStack_140 & 0xffffffff);
    if ((wchar_t ****)local_148 != (wchar_t ****)0x0) {
      FUN_1400020a8();
    }
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_280 != (longlong *)0x0) {
      LOCK();
      plVar21 = local_280 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*local_280)(local_280);
        LOCK();
        piVar2 = (int *)((longlong)local_280 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_280 + 0x10))(local_280);
        }
      }
    }
    if (local_278 != (longlong *)0x0) {
      (**(code **)(*local_278 + 0x10))();
    }
    local_408 = &local_268;
    (**(code **)(*plVar17 + 0x38))(plVar17,9,&DAT_149f2f964,0);
    if (local_298 != (longlong *)0x0) {
      (**(code **)(*local_298 + 0x10))();
    }
    uVar50 = 0;
  }
  if (*(int *)(param_1 + 200) == 3) {
    if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
      lVar35 = (longlong)*(int *)(param_1 + 0xe0) * 0x158;
      plVar17 = (longlong *)(*(longlong *)(param_1 + 0xd8) + 0xa8);
      do {
        plVar21 = plVar17 + -2;
        if (*plVar17 != 0) {
          plVar21 = plVar17;
        }
        lVar39 = (**(code **)(*(longlong *)*plVar21 + 0x40))();
        if (1 < *(int *)(lVar39 + 8)) goto LAB_14292c6e1;
        plVar17 = plVar17 + 0x2b;
        lVar35 = lVar35 + -0x158;
      } while (lVar35 != 0);
    }
    plVar17 = *(longlong **)(param_1 + 0x550);
    local_f8 = (wchar_t ***)0x149f2d3d6;
    uStack_f0._0_4_ = 0x21;
    FUN_1446e940c(&local_148,&local_f8);
    local_f8 = (wchar_t ***)0x149f2f892;
    uStack_f0._0_4_ = 0x16;
    FUN_1446e940c(&local_248,&local_f8);
    local_f8 = (wchar_t ***)0x149f2d306;
    uStack_f0 = (longlong *)CONCAT44(uStack_f0._4_4_,0x67);
    FUN_140208c1e(&local_198,&local_248,&local_148,&local_f8);
    uVar50 = 0;
    local_408 = &local_198;
    (**(code **)(*plVar17 + 0x38))(plVar17,9,&DAT_149f2f700,0);
  }
LAB_14292c6e1:
  local_248 = (wchar_t ****)0x0;
  uStack_240 = (longlong *)0x0;
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    local_3e0 = CONCAT44(local_3e0._4_4_,uVar50);
    local_3f0 = param_1 + 0x50;
    pppwVar43 = *(wchar_t ****)(param_1 + 0xd8);
    lVar35 = (longlong)*(int *)(param_1 + 0xe0) * 0x158;
    pppwVar48 = pppwVar43;
    do {
      if (*(int *)(pppwVar43 + 0x12) == 1) {
        local_e8[0] = (longlong *)0x0;
        local_d8 = (longlong **)0x0;
        local_f8 = *(wchar_t ****)(param_1 + 0x5e0);
        FUN_146b320ab(&local_148,local_3f0,pppwVar43);
        pppwVar18 = (wchar_t ***)FUN_146b90188(&local_148,&local_f8);
        FUN_146b32214(&local_148);
        if (local_e8[0] != (longlong *)0x0) {
          pplVar23 = local_d8;
          if (local_d8 == (longlong **)0x0) {
            pplVar23 = (longlong **)(local_cc + 4);
          }
          (*(code *)(*pplVar23)[2])();
        }
        uVar44 = (ulonglong)uStack_240;
        lVar39 = (longlong)(int)uStack_240;
        uVar11 = (int)uStack_240 + 1;
        uStack_240 = (longlong *)CONCAT44(uStack_240._4_4_,uVar11);
        if (uStack_240._4_4_ < uVar11) {
          FUN_146b52fbe(&local_248,uVar44 & 0xffffffff);
        }
        local_248[lVar39 * 2] = pppwVar48;
        local_248[lVar39 * 2 + 1] = pppwVar18;
      }
      pppwVar43 = pppwVar43 + 0x2b;
      pppwVar48 = pppwVar48 + 0x2b;
      lVar35 = lVar35 + -0x158;
    } while (lVar35 != 0);
    if ((longlong)(int)uStack_240 != 0) {
      ppppwVar31 = local_248 + (longlong)(int)uStack_240 * 2;
      ppppwVar32 = local_248;
      do {
        pppwVar43 = *ppppwVar32;
        puVar19 = (undefined8 *)(*(code *)(*ppppwVar32[1])[1])();
        iVar10 = (*(code *)(*ppppwVar32[1])[2])();
        LOCK();
        *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + (longlong)iVar10;
        UNLOCK();
        if ((&DAT_149f2f800)[*(byte *)(puVar19 + 2)] == '\0') {
          plVar17 = *(longlong **)(param_1 + 0x550);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
            DAT_14c844840 = (wchar_t ****)FUN_14001cc68(0x30,0x10);
            DAT_14c844840[1] = (wchar_t ***)0x0;
            *DAT_14c844840 = (wchar_t ***)&PTR_FUN_149e19310;
            DAT_14c844840[2] = (wchar_t ***)0xffffffffffffffff;
            DAT_14c844840[3] = (wchar_t ***)0x0;
            DAT_14c844840[4] = (wchar_t ***)0x0;
            DAT_14c844840[5] = (wchar_t ***)0x0;
            if (DAT_14c844840 != (wchar_t ****)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
              UNLOCK();
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
          }
          local_148 = (wchar_t *)DAT_14c844840;
          if (DAT_14c844840 != (wchar_t ****)0x0) {
            (*(code *)(*DAT_14c844840)[1])();
          }
          uStack_140 = CONCAT44(uStack_140._4_4_,DAT_14c844848);
          if (*(int *)(puVar19 + 1) == 0) {
            puVar30 = &DAT_149dfb77a;
          }
          else {
            puVar30 = (undefined2 *)*puVar19;
          }
          local_408 = (wchar_t *****)&local_148;
          uVar50 = 0;
          (**(code **)(*plVar17 + 0x38))(plVar17,1,puVar30,0);
          goto LAB_14292c95a;
        }
        local_f8 = (wchar_t ***)*puVar19;
        plVar17 = (longlong *)puVar19[1];
        uStack_f0 = plVar17;
        if (plVar17 == (longlong *)0x0) {
          FUN_146b340f2(pppwVar43,&local_f8);
        }
        else {
          LOCK();
          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
          UNLOCK();
          FUN_146b340f2(pppwVar43,&local_f8);
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            plVar21 = plVar17 + 1;
            *(int *)plVar21 = (int)*plVar21 + -1;
            UNLOCK();
            if ((int)*plVar21 == 0) {
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar2 = (int *)((longlong)plVar17 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
          }
        }
        ppppwVar32 = ppppwVar32 + 2;
      } while (ppppwVar32 != ppppwVar31);
    }
    uVar50 = (undefined4)local_3e0;
  }
LAB_14292c95a:
  FUN_146b52f89(local_248,(ulonglong)uStack_240 & 0xffffffff);
  uVar44 = (ulonglong)uStack_240 >> 0x20;
  uStack_240 = (longlong *)((ulonglong)uStack_240 & 0xffffffff00000000);
  if ((int)uVar44 != 0) {
    FUN_146b53044(&local_248);
  }
  local_298 = (longlong *)0x0;
  iVar10 = *(int *)(param_1 + 0xe0);
  uVar22 = *(undefined8 *)(param_1 + 0xd8);
  local_290 = iVar10;
  if (iVar10 == 0) {
    local_28c = 0;
  }
  else {
    FUN_146b53074(&local_298,iVar10,0);
    FUN_146b530e6(local_298,uVar22,iVar10);
  }
  puVar20 = (undefined8 *)FUN_146b34196(&local_298);
  puVar19 = *(undefined8 **)(param_1 + 0x5f0);
  if ((puVar19 != puVar20) &&
     (*(undefined8 **)(param_1 + 0x5f0) = puVar20, puVar19 != (undefined8 *)0x0)) {
    (**(code **)*puVar19)(puVar19,1);
  }
  if (*(int *)(param_1 + 200) == 0) {
    local_2a8 = (void *)0x0;
    uVar11 = *(uint *)(param_1 + 0x100);
    pvVar4 = *(void **)(param_1 + 0xf8);
    uStack_2a0 = CONCAT44(uStack_2a0._4_4_,uVar11);
    if ((longlong)(int)uVar11 == 0) {
      uStack_2a0 = (ulonglong)uVar11;
    }
    else {
      FUN_1446dd670(&local_2a8,uVar11,0);
      memcpy(local_2a8,pvVar4,(longlong)(int)uVar11 * 2);
    }
  }
  else {
    local_2a8 = (void *)0x0;
    uStack_2a0 = 0;
  }
  local_2b8 = (void *)0x0;
  local_2b0 = *(int *)(param_1 + 0x78);
  lVar35 = (longlong)local_2b0;
  pvVar4 = *(void **)(param_1 + 0x70);
  if (lVar35 == 0) {
    local_2ac = 0;
  }
  else {
    FUN_1446dd670(&local_2b8,local_2b0,0);
    memcpy(local_2b8,pvVar4,lVar35 * 2);
  }
  local_408 = *(wchar_t ******)(param_1 + 0x5f0);
  local_2c8 = *(undefined8 *)(param_1 + 0x60);
  local_2c0 = *(longlong *)(param_1 + 0x68);
  if (local_2c0 != 0) {
    LOCK();
    *(int *)(local_2c0 + 8) = *(int *)(local_2c0 + 8) + 1;
    UNLOCK();
  }
  local_3f8 = &local_2a8;
  local_400 = &local_2b8;
  puVar20 = (undefined8 *)
            FUN_146b94136(*(undefined8 *)(param_1 + 0x540),*(undefined8 *)(param_1 + 0x5d8),
                          *(undefined4 *)(param_1 + 0xcc));
  puVar19 = *(undefined8 **)(param_1 + 0x5f8);
  if ((puVar19 != puVar20) &&
     (*(undefined8 **)(param_1 + 0x5f8) = puVar20, puVar19 != (undefined8 *)0x0)) {
    (**(code **)*puVar19)(puVar19,1);
  }
  local_3c8 = (LPCRITICAL_SECTION)(param_1 + 0x128);
  EnterCriticalSection(local_3c8);
  uVar22 = *(undefined8 *)(param_1 + 0x5f8);
  iVar10 = *(int *)(param_1 + 0x608);
  *(uint *)(param_1 + 0x608) = iVar10 + 1U;
  if (*(uint *)(param_1 + 0x60c) < iVar10 + 1U) {
    FUN_146b48fbe(param_1 + 0x600,iVar10);
  }
  local_3e0 = CONCAT44(local_3e0._4_4_,uVar50);
  *(undefined8 *)(*(longlong *)(param_1 + 0x600) + (longlong)iVar10 * 8) = uVar22;
  LeaveCriticalSection(local_3c8);
  local_f8 = (wchar_t ***)0x0;
  uStack_f0 = (longlong *)0x0;
  iVar10 = *(int *)(param_1 + 0xe0);
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  if (iVar10 != 0) {
    FUN_146b52740(&local_f8);
    iVar10 = *(int *)(param_1 + 0xe0);
    if ((longlong)iVar10 != 0) {
      lVar35 = *(longlong *)(param_1 + 0xd8);
      lVar39 = 0;
      do {
        uVar44 = (ulonglong)uStack_f0;
        pwVar42 = *(wchar_t **)(lVar35 + 0xa8 + lVar39);
        pwVar5 = *(wchar_t **)(lVar35 + 0xb0 + lVar39);
        if (pwVar5 != (wchar_t *)0x0) {
          LOCK();
          *(int *)(pwVar5 + 4) = *(int *)(pwVar5 + 4) + 1;
          UNLOCK();
        }
        lVar47 = (longlong)(int)uStack_f0;
        uVar11 = (int)uStack_f0 + 1;
        uStack_f0 = (longlong *)CONCAT44(uStack_f0._4_4_,uVar11);
        if (uStack_f0._4_4_ < uVar11) {
          FUN_146b52f04(&local_f8,uVar44 & 0xffffffff);
        }
        local_f8[lVar47 * 2] = (wchar_t **)pwVar42;
        local_f8[lVar47 * 2 + 1] = (wchar_t **)pwVar5;
        if (pwVar5 != (wchar_t *)0x0) {
          LOCK();
          *(int *)(pwVar5 + 4) = *(int *)(pwVar5 + 4) + 1;
          UNLOCK();
          LOCK();
          pwVar42 = pwVar5 + 4;
          *(int *)pwVar42 = *(int *)pwVar42 + -1;
          UNLOCK();
          if (*(int *)pwVar42 == 0) {
            (*(code *)**(undefined8 **)pwVar5)(pwVar5);
            LOCK();
            pwVar42 = pwVar5 + 6;
            *(int *)pwVar42 = *(int *)pwVar42 + -1;
            UNLOCK();
            if (*(int *)pwVar42 == 0) {
              (**(code **)(*(longlong *)pwVar5 + 0x10))(pwVar5);
            }
          }
        }
        lVar39 = lVar39 + 0x158;
      } while ((longlong)iVar10 * 0x158 - lVar39 != 0);
    }
  }
  local_2d8 = (wchar_t **)local_f8;
  local_2d0 = (int)uStack_f0;
  (**(code **)(**(longlong **)(param_1 + 0x5a8) + 0x18))();
  FUN_146b526f7(local_f8,(ulonglong)uStack_f0 & 0xffffffff);
  if (local_f8 != (wchar_t ***)0x0) {
    FUN_1400020a8();
  }
  EnterCriticalSection(local_3c8);
  uVar50 = (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x40))();
  *(undefined4 *)(param_1 + 0x168) = uVar50;
  *(byte *)(param_1 + 0x248) = (byte)local_3e0 & 1;
  (**(code **)(**(longlong **)(param_1 + 0x550) + 0x28))(*(longlong **)(param_1 + 0x550),&local_f8);
  local_328 = (wchar_t ***)(param_1 + 0x268);
  if ((wchar_t ****)local_328 == &local_f8) {
    if (local_f8 != (wchar_t ***)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x268) != 0) {
      FUN_1400020a8();
    }
    *(wchar_t ****)(param_1 + 0x268) = local_f8;
    local_f8 = (wchar_t ***)0x0;
    *(int *)(param_1 + 0x270) = (int)uStack_f0;
    *(uint *)(param_1 + 0x274) = uStack_f0._4_4_;
  }
  (**(code **)(**(longlong **)(param_1 + 0x550) + 0x30))(*(longlong **)(param_1 + 0x550),&local_f8);
  lVar35 = param_1 + 0x288;
  FUN_140008f88(lVar35,&local_f8);
  if (local_f8 != (wchar_t ***)0x0) {
    (**(code **)((longlong)*local_f8 + 0x10))();
  }
  uVar50 = (**(code **)(**(longlong **)(param_1 + 0x550) + 0x20))();
  *(undefined4 *)(param_1 + 0x250) = uVar50;
  LeaveCriticalSection(local_3c8);
  local_2e8 = (undefined2 *)0x0;
  local_2e0 = *(int *)(param_1 + 0x78);
  lVar39 = (longlong)local_2e0;
  pvVar4 = *(void **)(param_1 + 0x70);
  local_378 = lVar35;
  if (lVar39 == 0) {
    local_2dc = 0;
  }
  else {
    FUN_1446dd670(&local_2e8,local_2e0,0);
    memcpy(local_2e8,pvVar4,lVar39 * 2);
  }
  FUN_140e4328c(&local_2e8);
  FUN_1448b5552(&local_2e8);
  uVar46 = 1;
  FUN_1401aebe8(&local_2e8,&DAT_149e065c6,1);
  uVar38 = 0;
  local_d8 = (longlong **)0x0;
  local_d0 = 0;
  local_f8 = (wchar_t ***)0x0;
  uStack_f0 = (longlong *)0x0;
  local_cc = (undefined1  [8])0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x48))();
  uVar44 = (ulonglong)local_d0;
  iVar10 = 0;
  uVar11 = 0;
  if (local_d0 != 0) {
    pplVar23 = local_d8;
    if (local_d8 == (longlong **)0x0) {
      pplVar23 = local_e8;
    }
    uVar11 = *(uint *)pplVar23;
    if (uVar11 == 0) {
      iVar10 = local_d0 + 0x1e;
      if (-1 < (int)(local_d0 - 1)) {
        iVar10 = local_d0 - 1;
      }
      uVar38 = 0;
      uVar46 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar46 = uVar38;
      }
      iVar10 = 0;
      do {
        if (uVar46 == uVar38) goto LAB_14292ceab;
        iVar10 = iVar10 + 0x20;
        uVar11 = *(uint *)((longlong)pplVar23 + (uVar38 + 1) * 4);
        uVar38 = uVar38 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar38 = 0;
    }
    uVar46 = (ulonglong)(-uVar11 & uVar11);
    uVar33 = uVar46 * 2 + 1;
    lVar35 = 0x3f;
    if (uVar33 != 0) {
      for (; uVar33 >> lVar35 == 0; lVar35 = lVar35 + -1) {
      }
    }
    uVar11 = (iVar10 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
    if ((int)local_d0 <= (int)uVar11) {
      uVar11 = local_d0;
    }
  }
  if (uVar11 != local_d0) {
    uVar25 = 0xffffffff;
    local_3f0 = uVar44;
    do {
      FUN_146818870(&local_2f8,local_3c0,local_f8 + (longlong)(int)uVar11 * 3);
      uVar11 = local_2e0 - 1;
      if (local_2e0 == 0) {
        uVar11 = 0;
      }
      if ((int)uVar11 < 1) {
LAB_14292f571:
        plVar17 = *(longlong **)(param_1 + 0x550);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (wchar_t ****)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = (wchar_t ***)0x0;
          *DAT_14c844840 = (wchar_t ***)&PTR_FUN_149e19310;
          DAT_14c844840[2] = (wchar_t ***)0xffffffffffffffff;
          DAT_14c844840[3] = (wchar_t ***)0x0;
          DAT_14c844840[4] = (wchar_t ***)0x0;
          DAT_14c844840[5] = (wchar_t ***)0x0;
          if (DAT_14c844840 != (wchar_t ****)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
          uVar44 = local_3f0;
        }
        local_308 = DAT_14c844840;
        if (DAT_14c844840 != (wchar_t ****)0x0) {
          (*(code *)(*DAT_14c844840)[1])();
        }
        local_300 = DAT_14c844848;
        local_408 = &local_308;
        local_3e0 = local_3e0 & 0xffffffff00000000;
        (**(code **)(*plVar17 + 0x38))(plVar17,9,&DAT_149f2f96a,0);
      }
      else {
        puVar30 = &DAT_149dfb77a;
        if (local_2e0 != 0) {
          puVar30 = local_2e8;
        }
        uVar33 = (ulonglong)uVar11;
        puVar40 = local_2f8;
        if (local_2f0 == 0) {
          puVar40 = &DAT_149dfb77a;
        }
        lVar35 = 0;
        while( true ) {
          uVar34 = *(ushort *)((longlong)puVar40 + lVar35);
          uVar37 = *(ushort *)((longlong)puVar30 + lVar35);
          if (uVar34 != uVar37) break;
          if ((uVar34 == 0) || (uVar33 == 1)) goto LAB_14292f496;
LAB_14292f459:
          uVar33 = uVar33 - 1;
          lVar35 = lVar35 + 2;
        }
        uVar44 = local_3f0;
        if ((uVar37 | uVar34) < 0x80) {
          if ((&DAT_149e05da0)[uVar34] == (&DAT_149e05da0)[(uint)uVar37]) {
            if (uVar33 != 1) goto LAB_14292f459;
            goto LAB_14292f496;
          }
          iVar13 = (uint)(byte)(&DAT_149e05da0)[uVar34] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar37]
          ;
        }
        else {
          iVar13 = (uint)uVar34 - (uint)uVar37;
        }
        if (iVar13 != 0) goto LAB_14292f571;
      }
LAB_14292f496:
      if (local_2f8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar25 = uVar25 & ~(uint)uVar46;
      pplVar23 = local_d8;
      if (local_d8 == (longlong **)0x0) {
        pplVar23 = local_e8;
      }
      iVar13 = (int)uVar38;
      lVar35 = (longlong)iVar13;
      uVar11 = *(uint *)((longlong)pplVar23 + lVar35 * 4) & uVar25;
      if (uVar11 == 0) {
        iVar26 = local_d0 + 0x1e;
        if (-1 < (int)(local_d0 - 1)) {
          iVar26 = local_d0 - 1;
        }
        iVar26 = iVar26 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar29 = iVar26;
        if (iVar26 < iVar13) {
          iVar29 = iVar13;
        }
        if (iVar13 < iVar26) {
          lVar39 = 0;
          do {
            uVar11 = *(uint *)((longlong)pplVar23 + (lVar35 + lVar39 + 1) * 4);
            if (uVar11 != 0) {
              uVar38 = (ulonglong)(iVar13 + (int)lVar39 + 1);
              uVar25 = 0xffffffff;
              goto LAB_14292f52c;
            }
            iVar10 = iVar10 + 0x20;
            lVar39 = lVar39 + 1;
          } while (iVar29 - lVar35 != lVar39);
          uVar25 = 0xffffffff;
          iVar13 = iVar29;
        }
        uVar38 = (ulonglong)(iVar13 + 1);
        uVar44 = local_3f0;
        uVar11 = local_d0;
      }
      else {
LAB_14292f52c:
        uVar46 = (ulonglong)(-uVar11 & uVar11);
        uVar33 = uVar46 * 2 + 1;
        lVar35 = 0x3f;
        if (uVar33 != 0) {
          for (; uVar33 >> lVar35 == 0; lVar35 = lVar35 + -1) {
          }
        }
        uVar11 = (iVar10 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
        if ((int)local_d0 <= (int)uVar11) {
          uVar11 = local_d0;
        }
      }
    } while (uVar11 != (uint)uVar44);
  }
LAB_14292ceab:
  LOCK();
  *(undefined4 *)(param_1 + 0x158) = 1;
  UNLOCK();
  local_b0 = 0;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_f8);
  uVar44 = local_3e0;
  if (local_2e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146b52f89(local_248,(ulonglong)uStack_240 & 0xffffffff);
  if (local_248 != (wchar_t ****)0x0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0xb1) == '\x01') {
    if ((uVar44 & 1) != 0) {
      iVar10 = *(int *)(param_1 + 200);
      local_228 = (wchar_t ****)0x0;
      uStack_220 = 0;
      local_3f0 = *(undefined8 *)(param_1 + 0x540);
      plVar17 = *(longlong **)(param_1 + 0x5f0);
      local_3a8 = (longlong *)(param_1 + 0xa0);
      local_d8 = (longlong **)0x0;
      local_d0 = 0;
      local_f8 = (wchar_t ***)0x0;
      uStack_f0 = (longlong *)0x0;
      local_cc = (undefined1  [8])0xffffffff00000080;
      local_c4 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_128 = (uint *)0x0;
      local_120 = 0;
      local_148 = (wchar_t *)0x0;
      uStack_140 = 0;
      local_11c = 0xffffffff00000080;
      local_114 = 0;
      local_108 = 0;
      local_100 = 0;
      (**(code **)(*plVar17 + 0x48))(plVar17,&local_148);
      local_178 = 0;
      local_170 = 0;
      local_198 = (wchar_t ****)0x0;
      ppplStack_190 = (longlong ***)0x0;
      local_16c = 0xffffffff00000080;
      local_164 = 0;
      local_158 = 0;
      local_150 = 0;
      (**(code **)(*plVar17 + 0x50))(plVar17,local_3c0,&local_198);
      local_400 = (void **)CONCAT71(local_400._1_7_,iVar10 == 3);
      local_408 = &local_198;
      FUN_1429343c8(&local_f8,plVar17,&local_228,&local_148);
      plVar21 = (longlong *)FUN_146b6f84a(plVar17,&local_f8);
      local_248 = (wchar_t ****)0x0;
      uStack_240 = (void *)0x0;
      (**(code **)(*plVar21 + 0x40))(plVar21);
      FUN_140e83cb0(&local_f8,&local_1f8);
      local_208 = (wchar_t ****)0x0;
      uStack_200 = 0;
      if ((longlong)local_1f0 != 0) {
        lVar35 = (longlong)local_1f0 << 4;
        iVar10 = 0;
        ppppwVar32 = local_1f8;
        do {
          lVar39 = (**(code **)(*plVar17 + 0x68))(plVar17,ppppwVar32);
          uVar44 = uStack_200;
          if (lVar39 != 0) {
            iVar10 = iVar10 + *(int *)(lVar39 + 0x50);
            lVar39 = (longlong)(int)uStack_200;
            uVar11 = (int)uStack_200 + 1;
            uStack_200 = CONCAT44(uStack_200._4_4_,uVar11);
            if (uStack_200._4_4_ < uVar11) {
              FUN_1446f48e2(&local_208,uVar44 & 0xffffffff);
            }
            *(int *)((longlong)local_208 + lVar39 * 4) = iVar10;
          }
          ppppwVar32 = ppppwVar32 + 2;
          lVar35 = lVar35 + -0x10;
        } while (lVar35 != 0);
      }
      local_218 = (wchar_t ****)0x0;
      uStack_210 = 0;
      local_408 = &local_218;
      local_408 = (wchar_t *****)FUN_146b70bf6(local_3a8,local_3f0,&local_248,&local_208);
      uVar22 = FUN_146b3068e(&local_1f8,0,plVar17,&local_218);
      if (local_218 != (wchar_t ****)0x0) {
        FUN_1400020a8();
      }
      if (local_208 != (wchar_t ****)0x0) {
        FUN_1400020a8();
      }
      FUN_1447a1747(local_1f8,local_1f0);
      if (local_1f8 != (wchar_t ****)0x0) {
        FUN_1400020a8();
      }
      if (local_248 != (wchar_t ****)0x0) {
        FUN_1400020a8();
      }
      if (plVar21 != (longlong *)0x0) {
        (**(code **)*plVar21)(plVar21,1);
      }
      local_150 = 0;
      if (local_158 != 0) {
        FUN_1400020a8();
      }
      FUN_1408910a4(&local_198);
      local_100 = 0;
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      FUN_1408910a4(&local_148);
      local_b0 = 0;
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      local_3f0 = uVar22;
      FUN_1408910a4(&local_f8);
      FUN_1447a1747(0,0);
      bVar24 = (byte)local_3e0;
      goto LAB_14292f1a3;
    }
  }
  else if ((uVar44 & 1) != 0) {
    local_3f0 = param_1 + -8;
    local_278 = (longlong *)0x0;
    uStack_270 = 0;
    local_3ac = FUN_146b31fdb();
    local_358 = param_1 + 0x750;
    local_318 = (LPCRITICAL_SECTION)(param_1 + 0x358);
    local_320 = param_1 + 600;
    local_348 = (longlong *)(param_1 + 0x278);
    local_390 = param_1 + 0x690;
    local_330 = param_1 + 0xf8;
    local_380 = (longlong *)(param_1 + 0x388);
    local_340 = (longlong *)(param_1 + 0x488);
    local_338 = param_1 + 0x4c0;
    local_350 = param_1 + 0x710;
    local_3a8 = (longlong *)(param_1 + 0x890);
    local_3e0 = param_1 + 0x8c8;
    do {
      lVar35 = local_390;
      (**(code **)(**(longlong **)(param_1 + 0x570) + 0x10))
                (*(longlong **)(param_1 + 0x570),*(undefined8 *)(param_1 + 0x5f0));
      plVar17 = *(longlong **)(param_1 + 0x578);
      FUN_146b32292(local_1e8,*(undefined8 *)(param_1 + 0x5f0));
      (**(code **)(*plVar17 + 0x70))(plVar17,local_1e8);
      cVar8 = FUN_14292fa32(local_3f0,&local_278);
      if (cVar8 == '\0') {
LAB_14292ed35:
        FUN_1447a1747(local_278,uStack_270 & 0xffffffff);
        uVar44 = uStack_270 >> 0x20;
        uStack_270 = uStack_270 & 0xffffffff00000000;
        bVar24 = false;
        bVar49 = false;
        if ((int)uVar44 != 0) {
          bVar24 = false;
          FUN_1408be2c4(&local_278,0);
          bVar49 = false;
        }
      }
      else {
        local_f8 = (wchar_t ***)((ulonglong)local_f8 & 0xffffffff00000000);
        local_148 = (wchar_t *)CONCAT44(local_148._4_4_,5);
        FUN_146b34248(local_3d0,&local_148,&local_f8);
        if ((*(int *)(param_1 + 200) != 0) &&
           ((*(int *)(param_1 + 0x15c) == 0 || (*(int *)(param_1 + 200) != 3)))) {
          FUN_146b341de(lVar35);
          uVar11 = (**(code **)(**(longlong **)(param_1 + 0x550) + 8))();
          if ((char)uVar11 == '\x01') {
            FUN_146b3441a(lVar35);
          }
          else {
            local_d8 = (longlong **)0x0;
            local_d0 = 0;
            local_f8 = (wchar_t ***)0x0;
            uStack_f0 = (longlong *)0x0;
            local_cc = (undefined1  [8])0xffffffff00000080;
            local_c4 = 0;
            local_b8 = 0;
            local_b0 = 0;
            local_3d4 = uVar11 ^ 1;
            (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x48))
                      (*(longlong **)(param_1 + 0x5f0),&local_f8);
            uVar44 = local_3f0;
            FUN_146b355be(local_3f0,local_330,&local_f8);
            local_148 = (wchar_t *)&local_1f8;
            FUN_146b4d79c(&local_f8,&local_148);
            FUN_14482b9e8(&local_f8);
            local_128 = (uint *)0x0;
            local_120 = 0;
            local_148 = (wchar_t *)0x0;
            uStack_140 = 0;
            local_11c = 0xffffffff00000080;
            local_114 = 0;
            local_108 = 0;
            local_100 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x5f0) + 0x58))
                      (*(longlong **)(param_1 + 0x5f0),&local_148);
            FUN_146b355be(uVar44,local_3c0,&local_148);
            local_1f8 = (wchar_t ****)&local_218;
            FUN_146b4d79c(&local_148,&local_1f8);
            FUN_14482b9e8(&local_148);
            p_Var7 = local_3c8;
            iVar10 = ((int)uStack_140 - local_114) + ((int)uStack_f0 - local_c4);
            EnterCriticalSection(local_3c8);
            *(int *)(param_1 + 0x170) = (int)uStack_140 - local_114;
            LeaveCriticalSection(p_Var7);
            if (0 < iVar10) {
              puVar30 = &DAT_149dfb77a;
              if (*(int *)(param_1 + 0x120) != 0) {
                puVar30 = *(undefined2 **)(param_1 + 0x118);
              }
              (**(code **)(**(longlong **)(param_1 + 0x540) + 0x50))
                        (*(longlong **)(param_1 + 0x540),&local_1f8,puVar30);
              if (local_1f8 != (wchar_t ****)0x0) {
                (*(code *)**local_1f8)(local_1f8,1);
              }
            }
            fVar51 = (float)iVar10;
            if (local_120 == 0) {
              uVar46 = 1;
              uVar44 = 0;
              iVar10 = 0;
              iVar13 = 0;
            }
            else {
              puVar27 = local_128;
              if (local_128 == (uint *)0x0) {
                puVar27 = local_138;
              }
              uVar11 = *puVar27;
              if (uVar11 == 0) {
                iVar10 = local_120 + 0x1e;
                if (-1 < local_120 + -1) {
                  iVar10 = local_120 + -1;
                }
                uVar44 = 0;
                uVar38 = (ulonglong)(uint)(iVar10 >> 5);
                if (iVar10 >> 5 < 1) {
                  uVar38 = uVar44;
                }
                iVar10 = 0;
                do {
                  if (uVar38 == uVar44) {
                    fVar52 = 0.0;
                    goto LAB_14292e281;
                  }
                  iVar10 = iVar10 + 0x20;
                  uVar11 = puVar27[uVar44 + 1];
                  uVar44 = uVar44 + 1;
                } while (uVar11 == 0);
              }
              else {
                uVar44 = 0;
                iVar10 = 0;
              }
              uVar46 = (ulonglong)(-uVar11 & uVar11);
              uVar38 = uVar46 * 2 + 1;
              lVar35 = 0x3f;
              if (uVar38 != 0) {
                for (; uVar38 >> lVar35 == 0; lVar35 = lVar35 + -1) {
                }
              }
              iVar13 = (iVar10 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
              if (local_120 <= iVar13) {
                iVar13 = local_120;
              }
            }
            fVar52 = 0.0;
            if (iVar13 < local_120) {
              uVar11 = 0xffffffff;
              do {
                cVar8 = (**(code **)(**(longlong **)(param_1 + 0x550) + 8))();
                if (cVar8 != '\0') break;
                local_3b8 = CONCAT44(local_3b8._4_4_,uVar11);
                lVar35 = (longlong)iVar13;
                local_3d8 = iVar10;
                local_3a0 = uVar44;
                FUN_142934616(local_3f0,(wchar_t ****)((longlong)local_148 + lVar35 * 3 * 8),0);
                ppppwVar32 = (wchar_t ****)local_148;
                iVar10 = *(int *)((longlong)local_148 + (lVar35 * 3 + 1) * 8) + -1;
                if (*(int *)((longlong)local_148 + (lVar35 * 3 + 1) * 8) == 0) {
                  iVar10 = 0;
                }
                iVar13 = *(int *)(param_1 + 0x78);
                iVar26 = iVar10 + 1 + (uint)((longlong)iVar13 == 0);
                local_1f8 = (wchar_t ****)0x0;
                pvVar4 = *(void **)(param_1 + 0x70);
                local_1f0 = iVar13;
                if (iVar26 == 0 && iVar13 == 0) {
                  local_1ec = 0;
                }
                else {
                  iVar29 = iVar26 + iVar13;
                  if (iVar26 < 0) goto LAB_14292f918;
                  FUN_1446dd670(&local_1f8,iVar29,0);
                  if (iVar13 != 0) {
                    memcpy(local_1f8,pvVar4,(longlong)iVar13 * 2);
                  }
                }
                FUN_1401aebe8(&local_1f8,ppppwVar32[lVar35 * 3],iVar10);
                local_218 = (wchar_t ****)((ulonglong)local_218 & 0xffffffff00000000);
                cVar8 = FUN_142934552(local_3f0,&local_1f8,&local_218);
                if (cVar8 == '\0') {
                  plVar17 = *(longlong **)(param_1 + 0x550);
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c844850) &&
                     (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
                    DAT_14c844840 = (wchar_t ****)FUN_14001cc68(0x30,0x10);
                    DAT_14c844840[1] = (wchar_t ***)0x0;
                    *DAT_14c844840 = (wchar_t ***)&PTR_FUN_149e19310;
                    DAT_14c844840[2] = (wchar_t ***)0xffffffffffffffff;
                    DAT_14c844840[3] = (wchar_t ***)0x0;
                    DAT_14c844840[4] = (wchar_t ***)0x0;
                    DAT_14c844840[5] = (wchar_t ***)0x0;
                    if (DAT_14c844840 != (wchar_t ****)0x0) {
                      LOCK();
                      *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
                      UNLOCK();
                    }
                    DAT_14c844848 = 0;
                    atexit(FUN_142760bef);
                    _Init_thread_footer(&DAT_14c844850);
                  }
                  local_208 = DAT_14c844840;
                  if (DAT_14c844840 != (wchar_t ****)0x0) {
                    (*(code *)(*DAT_14c844840)[1])();
                  }
                  uStack_200 = CONCAT44(uStack_200._4_4_,DAT_14c844848);
                  local_408 = &local_208;
                  (**(code **)(*plVar17 + 0x38))(plVar17,3);
                  local_3d4 = 0;
                }
                else {
                  plVar17 = *(longlong **)(param_1 + 0x5e8);
                  local_198 = (wchar_t ****)((ulonglong)local_198 & 0xffffffff00000000);
                  ppplStack_190 = (longlong ***)0x0;
                  local_188 = *(int *)((longlong)local_148 + (lVar35 * 3 + 1) * 8);
                  lVar39 = (longlong)local_188;
                  pppwVar43 = *(wchar_t ****)((longlong)local_148 + lVar35 * 3 * 8);
                  if (lVar39 == 0) {
                    local_184 = 0;
                  }
                  else {
                    FUN_1446dd670(&ppplStack_190,local_188,0);
                    memcpy(ppplStack_190,pppwVar43,lVar39 * 2);
                  }
                  (**(code **)(*plVar17 + 8))(plVar17,&local_198);
                  local_258 = fVar52 / fVar51;
                  local_288[0] = 5;
                  FUN_146b34248(local_3d0,local_288);
                  fVar52 = fVar52 + 1.0;
                }
                if (local_1f8 != (wchar_t ****)0x0) {
                  FUN_1400020a8();
                }
                if (cVar8 == '\0') break;
                uVar11 = (uint)local_3b8 & ~(uint)uVar46;
                puVar27 = local_128;
                if (local_128 == (uint *)0x0) {
                  puVar27 = local_138;
                }
                iVar13 = (int)local_3a0;
                lVar35 = (longlong)iVar13;
                uVar25 = puVar27[lVar35] & uVar11;
                uVar44 = local_3a0;
                iVar10 = local_3d8;
                if (uVar25 == 0) {
                  iVar26 = local_120 + 0x1e;
                  if (-1 < local_120 + -1) {
                    iVar26 = local_120 + -1;
                  }
                  iVar26 = iVar26 >> 5;
                  iVar29 = iVar26;
                  if (iVar26 < iVar13) {
                    iVar29 = iVar13;
                  }
                  if (iVar26 <= iVar13) break;
                  lVar39 = 0;
                  while( true ) {
                    iVar10 = iVar10 + 0x20;
                    uVar25 = puVar27[lVar35 + lVar39 + 1];
                    if (uVar25 != 0) break;
                    lVar39 = lVar39 + 1;
                    if (iVar29 - lVar35 == lVar39) goto LAB_14292e281;
                  }
                  uVar11 = 0xffffffff;
                  uVar44 = (ulonglong)(iVar13 + (int)lVar39 + 1);
                }
                uVar46 = (ulonglong)(-uVar25 & uVar25);
                uVar38 = uVar46 * 2 + 1;
                lVar35 = 0x3f;
                if (uVar38 != 0) {
                  for (; uVar38 >> lVar35 == 0; lVar35 = lVar35 + -1) {
                  }
                }
                iVar13 = (iVar10 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
              } while (iVar13 < local_120);
            }
LAB_14292e281:
            if (local_d0 == 0) {
              uVar46 = 1;
              uVar44 = 0;
              iVar10 = 0;
              uVar11 = 0;
            }
            else {
              pplVar23 = local_d8;
              if (local_d8 == (longlong **)0x0) {
                pplVar23 = local_e8;
              }
              uVar11 = *(uint *)pplVar23;
              if (uVar11 == 0) {
                iVar10 = local_d0 + 0x1e;
                if (-1 < (int)(local_d0 - 1)) {
                  iVar10 = local_d0 - 1;
                }
                uVar44 = 0;
                uVar38 = (ulonglong)(uint)(iVar10 >> 5);
                if (iVar10 >> 5 < 1) {
                  uVar38 = uVar44;
                }
                iVar10 = 0;
                do {
                  if (uVar38 == uVar44) goto LAB_14292ec7c;
                  iVar10 = iVar10 + 0x20;
                  uVar11 = *(uint *)((longlong)pplVar23 + (uVar44 + 1) * 4);
                  uVar44 = uVar44 + 1;
                } while (uVar11 == 0);
              }
              else {
                uVar44 = 0;
                iVar10 = 0;
              }
              uVar46 = (ulonglong)(-uVar11 & uVar11);
              uVar38 = uVar46 * 2 + 1;
              lVar35 = 0x3f;
              if (uVar38 != 0) {
                for (; uVar38 >> lVar35 == 0; lVar35 = lVar35 + -1) {
                }
              }
              uVar11 = (iVar10 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
              if ((int)local_d0 <= (int)uVar11) {
                uVar11 = local_d0;
              }
            }
            if ((int)uVar11 < (int)local_d0) {
              uVar25 = 0xffffffff;
LAB_14292e331:
              local_3a0 = CONCAT44(local_3a0._4_4_,uVar25);
              cVar8 = (**(code **)(**(longlong **)(param_1 + 0x550) + 8))();
              pppwVar43 = local_f8;
              if (cVar8 == '\0') {
                lVar35 = (longlong)(int)uVar11;
                iVar13 = *(int *)(local_f8 + lVar35 * 3 + 1) + -1;
                if (*(int *)(local_f8 + lVar35 * 3 + 1) == 0) {
                  iVar13 = 0;
                }
                iVar26 = *(int *)(param_1 + 0x100);
                iVar14 = iVar13 + 1 + (uint)((longlong)iVar26 == 0);
                local_1f8 = (wchar_t ****)0x0;
                pvVar4 = *(void **)(param_1 + 0xf8);
                local_3d8 = iVar10;
                local_3b8 = uVar44;
                local_310 = lVar35;
                local_1f0 = iVar26;
                if (iVar14 == 0 && iVar26 == 0) {
                  local_1ec = 0;
                }
                else {
                  iVar29 = iVar14 + iVar26;
                  if (iVar14 < 0) goto LAB_14292f918;
                  FUN_1446dd670(&local_1f8,iVar29,0);
                  if (iVar26 != 0) {
                    memcpy(local_1f8,pvVar4,(longlong)iVar26 * 2);
                  }
                }
                FUN_1401aebe8(&local_1f8,pppwVar43[lVar35 * 3],iVar13);
                pppwVar43 = local_f8;
                iVar10 = *(int *)(local_f8 + lVar35 * 3 + 1) + -1;
                if (*(int *)(local_f8 + lVar35 * 3 + 1) == 0) {
                  iVar10 = 0;
                }
                uVar11 = *(uint *)(param_1 + 0x78);
                iVar13 = iVar10 + 1 + (uint)((longlong)(int)uVar11 == 0);
                local_218 = (wchar_t ****)0x0;
                pvVar4 = *(void **)(param_1 + 0x70);
                uStack_210 = CONCAT44(uStack_210._4_4_,uVar11);
                if (iVar13 == 0 && uVar11 == 0) {
                  uStack_210 = (ulonglong)uVar11;
                }
                else {
                  iVar29 = iVar13 + uVar11;
                  if (iVar13 < 0) goto LAB_14292f918;
                  FUN_1446dd670(&local_218,iVar29,0);
                  if (uVar11 != 0) {
                    memcpy(local_218,pvVar4,(longlong)(int)uVar11 * 2);
                  }
                }
                FUN_1401aebe8(&local_218,pppwVar43[lVar35 * 3],iVar10);
                ppppwVar32 = (wchar_t ****)&DAT_149dfb77a;
                if ((int)uStack_210 != 0) {
                  ppppwVar32 = local_218;
                }
                bVar24 = (**(code **)(**(longlong **)(param_1 + 0x540) + 0x80))
                                   (*(longlong **)(param_1 + 0x540),ppppwVar32);
                uVar44 = local_3f0;
                if (bVar24 == 0) {
LAB_14292e69a:
                  iVar10 = FUN_146b31f0b();
                  while( true ) {
                    ppppwVar32 = (wchar_t ****)&DAT_149dfb77a;
                    if (local_1f0 != 0) {
                      ppppwVar32 = local_1f8;
                    }
                    ppppwVar31 = (wchar_t ****)&DAT_149dfb77a;
                    if ((int)uStack_210 != 0) {
                      ppppwVar31 = local_218;
                    }
                    cVar8 = (**(code **)(**(longlong **)(param_1 + 0x540) + 0x70))
                                      (*(longlong **)(param_1 + 0x540),ppppwVar31,ppppwVar32);
                    DVar15 = GetLastError();
                    if (cVar8 != '\0') break;
                    ppppwVar32 = (wchar_t ****)&DAT_149dfb77a;
                    if (local_1f0 != 0) {
                      ppppwVar32 = local_1f8;
                    }
                    ppppwVar31 = (wchar_t ****)&DAT_149dfb77a;
                    if ((int)uStack_210 != 0) {
                      ppppwVar31 = local_218;
                    }
                    cVar8 = (**(code **)(**(longlong **)(param_1 + 0x540) + 0x78))
                                      (*(longlong **)(param_1 + 0x540),ppppwVar31,ppppwVar32);
                    DVar16 = GetLastError();
                    if (cVar8 != '\0') {
                      ppppwVar32 = (wchar_t ****)&DAT_149dfb77a;
                      if (local_1f0 != 0) {
                        ppppwVar32 = local_1f8;
                      }
                      (**(code **)(**(longlong **)(param_1 + 0x540) + 0x68))
                                (*(longlong **)(param_1 + 0x540),ppppwVar32);
                      break;
                    }
                    bVar49 = iVar10 == 0;
                    iVar10 = iVar10 + -1;
                    if (bVar49) goto LAB_14292e75e;
                    FUN_14000f986(0x3f000000);
                  }
                  ppwVar36 = (wchar_t **)(local_f8 + lVar35 * 3);
                  iVar10 = *(int *)(param_1 + 0x390);
                  *(uint *)(param_1 + 0x390) = iVar10 + 1U;
                  if (*(uint *)(param_1 + 0x394) < iVar10 + 1U) {
                    FUN_1447a1bd6(local_380,iVar10);
                  }
                  lVar35 = *local_380;
                  lVar39 = (longlong)iVar10 * 0x10;
                  puVar19 = (undefined8 *)(lVar35 + lVar39);
                  *(undefined8 *)(lVar35 + lVar39) = 0;
                  iVar10 = *(int *)(ppwVar36 + 1);
                  pwVar42 = *ppwVar36;
                  *(int *)(lVar35 + 8 + lVar39) = iVar10;
                  if ((longlong)iVar10 == 0) {
                    *(undefined4 *)((longlong)puVar19 + 0xc) = 0;
                  }
                  else {
                    FUN_1446dd670(puVar19,iVar10,0);
                    memcpy((void *)*puVar19,pwVar42,(longlong)iVar10 * 2);
                  }
                  lVar35 = local_310;
                  (**(code **)(**(longlong **)(param_1 + 0x570) + 0x40))
                            (*(longlong **)(param_1 + 0x570),local_f8 + local_310 * 3,0xb);
                  ppwVar36 = (wchar_t **)(local_f8 + lVar35 * 3);
                  iVar10 = *(int *)(local_f8 + lVar35 * 3 + 1);
                  uVar11 = 0;
                  iVar13 = iVar10 + -1;
                  if (iVar10 == 0) {
                    iVar13 = 0;
                  }
                  if (0 < iVar13) {
                    pwVar42 = L"";
                    if (iVar10 != 0) {
                      pwVar42 = *ppwVar36;
                    }
                    lVar35 = 0;
                    do {
                      uVar25 = ((uint)(0x19 < (ushort)pwVar42[lVar35] - 0x61) * 0x20 +
                               (uint)(ushort)pwVar42[lVar35]) - 0x20;
                      uVar11 = uVar11 >> 8 ^
                               *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar11 ^ uVar25) & 0xff) * 4)
                      ;
                      uVar11 = uVar11 >> 8 ^
                               *(uint *)(&DAT_14c75d150 +
                                        (ulonglong)(uVar11 & 0xff ^ uVar25 >> 8 & 0xff) * 4);
                      lVar35 = lVar35 + 1;
                    } while (iVar13 != (int)lVar35);
                  }
                  if (*(int *)(param_1 + 0x490) == *(int *)(param_1 + 0x4bc)) goto LAB_14292ea86;
                  lVar35 = *(longlong *)(param_1 + 0x4c8);
                  if (*(longlong *)(param_1 + 0x4c8) == 0) {
                    lVar35 = local_338;
                  }
                  iVar13 = *(int *)(lVar35 + (ulonglong)(*(int *)(param_1 + 0x4d0) - 1U & uVar11) *
                                             4);
                  if (iVar13 == -1) goto LAB_14292ea86;
                  lVar35 = *local_340;
LAB_14292e9fb:
                  lVar39 = (longlong)iVar13;
                  iVar26 = *(int *)(lVar35 + 8 + lVar39 * 0x18);
                  if (iVar26 != iVar10) {
                    if (iVar26 + iVar10 == 1) goto LAB_14292ea8b;
                    goto LAB_14292ea15;
                  }
                  if (1 < iVar10) {
                    lVar47 = 0;
                    do {
                      uVar34 = *(ushort *)(*(longlong *)(lVar35 + lVar39 * 0x18) + lVar47);
                      uVar44 = (ulonglong)uVar34;
                      uVar37 = *(ushort *)((longlong)*ppwVar36 + lVar47);
                      if (uVar34 == uVar37) {
                        if (uVar34 == 0) break;
                      }
                      else {
                        if (0x7f < (uVar37 | uVar34)) goto LAB_14292ea79;
                        uVar34 = (ushort)(byte)(&DAT_149e05da0)[uVar44];
                        uVar38 = (ulonglong)uVar37;
                        uVar37 = (ushort)(byte)(&DAT_149e05da0)[uVar38];
                        if ((&DAT_149e05da0)[uVar44] != (&DAT_149e05da0)[uVar38])
                        goto LAB_14292ea79;
                      }
                      lVar47 = lVar47 + 2;
                    } while( true );
                  }
                  goto LAB_14292ea8b;
                }
                FUN_142934616(local_3f0,local_f8 + lVar35 * 3,0);
                local_258 = 0.0;
                cVar8 = FUN_142934552(uVar44,&local_218,&local_258);
                if (cVar8 != '\0') goto LAB_14292e69a;
                plVar17 = *(longlong **)(param_1 + 0x550);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c844850) &&
                   (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
                  DAT_14c844840 = (wchar_t ****)FUN_14001cc68(0x30,0x10);
                  DAT_14c844840[1] = (wchar_t ***)0x0;
                  *DAT_14c844840 = (wchar_t ***)&PTR_FUN_149e19310;
                  DAT_14c844840[2] = (wchar_t ***)0xffffffffffffffff;
                  DAT_14c844840[3] = (wchar_t ***)0x0;
                  DAT_14c844840[4] = (wchar_t ***)0x0;
                  DAT_14c844840[5] = (wchar_t ***)0x0;
                  if (DAT_14c844840 != (wchar_t ****)0x0) {
                    LOCK();
                    *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
                    UNLOCK();
                  }
                  DAT_14c844848 = 0;
                  atexit(FUN_142760bef);
                  _Init_thread_footer(&DAT_14c844850);
                }
                iVar10 = local_3d8;
                local_228 = DAT_14c844840;
                if (DAT_14c844840 != (wchar_t ****)0x0) {
                  (*(code *)(*DAT_14c844840)[1])();
                }
                uStack_220 = CONCAT44(uStack_220._4_4_,DAT_14c844848);
                local_408 = &local_228;
                (**(code **)(*plVar17 + 0x38))(plVar17,3,&DAT_149f2f9b8);
                goto LAB_14292e5a4;
              }
            }
LAB_14292ec7c:
            if (((local_3d4 & 1) == 0) ||
               (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x550) + 8))(), cVar8 != '\0')) {
              bVar49 = false;
            }
            else {
              local_1f8 = (wchar_t ****)CONCAT44(local_1f8._4_4_,0x3f800000);
              local_218 = (wchar_t ****)CONCAT44(local_218._4_4_,5);
              FUN_146b34248(local_3d0,&local_218,&local_1f8);
              bVar49 = true;
            }
            local_100 = 0;
            if (local_108 != 0) {
              FUN_1400020a8();
            }
            FUN_1408910a4(&local_148);
            local_b0 = 0;
            if (local_b8 != 0) {
              FUN_1400020a8();
            }
            FUN_1408910a4(&local_f8);
            FUN_146b3441a(local_390);
            if (bVar49) goto LAB_14292d3d0;
          }
          goto LAB_14292ed35;
        }
        local_f8 = (wchar_t ***)CONCAT44(local_f8._4_4_,0x3f800000);
        local_148 = (wchar_t *)CONCAT44(local_148._4_4_,5);
        FUN_146b34248(local_3d0,&local_148,&local_f8);
LAB_14292d3d0:
        FUN_146b342a2(local_3f0);
        FUN_1447a1747(local_278,uStack_270 & 0xffffffff);
        uVar44 = uStack_270 >> 0x20;
        uStack_270 = uStack_270 & 0xffffffff00000000;
        if ((int)uVar44 != 0) {
          FUN_1408be2c4(&local_278,0);
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c991b80) &&
           (FUN_144b3d300(&DAT_14c991b80), DAT_14c991b80 == -1)) {
          InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c991b58);
          SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c991b58,4000);
          atexit((_func_5014 *)&LAB_142934b5a);
          _Init_thread_footer(&DAT_14c991b80);
        }
        local_3a0 = CONCAT71(local_3a0._1_7_,*(char *)(param_1 + 0xd5));
        if (*(char *)(param_1 + 0xd5) == '\0') {
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c991b58);
        }
        FUN_146b341de(local_350);
        local_f8 = (wchar_t ***)((ulonglong)local_f8 & 0xffffffff00000000);
        local_148 = (wchar_t *)CONCAT44(local_148._4_4_,7);
        FUN_146b34248(local_3d0,&local_148,&local_f8);
        FUN_1447a1747(local_278,uStack_270 & 0xffffffff);
        uVar44 = uStack_270 >> 0x20;
        uStack_270 = uStack_270 & 0xffffffff00000000;
        if ((int)uVar44 != 0) {
          FUN_1408be2c4(&local_278,0);
        }
        uVar11 = (**(code **)(**(longlong **)(param_1 + 0x5f8) + 0x18))
                           (*(longlong **)(param_1 + 0x5f8),&local_278);
        uVar44 = (ulonglong)uVar11;
        bVar49 = uVar11 == 0;
        if (!bVar49) {
          plVar17 = *(longlong **)(param_1 + 0x550);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
            DAT_14c844840 = (wchar_t ****)FUN_14001cc68(0x30,0x10);
            DAT_14c844840[1] = (wchar_t ***)0x0;
            *DAT_14c844840 = (wchar_t ***)&PTR_FUN_149e19310;
            DAT_14c844840[2] = (wchar_t ***)0xffffffffffffffff;
            DAT_14c844840[3] = (wchar_t ***)0x0;
            DAT_14c844840[4] = (wchar_t ***)0x0;
            DAT_14c844840[5] = (wchar_t ***)0x0;
            if (DAT_14c844840 != (wchar_t ****)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
              UNLOCK();
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
          }
          local_248 = DAT_14c844840;
          if (DAT_14c844840 != (wchar_t ****)0x0) {
            (*(code *)(*DAT_14c844840)[1])();
          }
          uStack_240 = (longlong *)CONCAT44(uStack_240._4_4_,DAT_14c844848);
          puVar41 = &DAT_149f2ebb8;
          if (uVar11 - 2 < 4) {
            puVar41 = (&PTR_DAT_149f2f9d0)[uVar11 - 2];
          }
          local_408 = &local_248;
          (**(code **)(*plVar17 + 0x38))(plVar17,4,puVar41);
        }
        (**(code **)(**(longlong **)(param_1 + 0x5d8) + 0x50))
                  (*(longlong **)(param_1 + 0x5d8),&local_f8);
        uVar11 = local_d0;
        local_3b8 = uVar44;
        if (local_d0 == 0) {
          uVar46 = 1;
          uVar44 = 0;
          iVar10 = 0;
          uVar25 = 0;
        }
        else {
          pplVar23 = local_d8;
          if (local_d8 == (longlong **)0x0) {
            pplVar23 = local_e8;
          }
          uVar25 = *(uint *)pplVar23;
          if (uVar25 == 0) {
            iVar10 = local_d0 + 0x1e;
            if (-1 < (int)(local_d0 - 1)) {
              iVar10 = local_d0 - 1;
            }
            uVar44 = 0;
            uVar38 = (ulonglong)(uint)(iVar10 >> 5);
            if (iVar10 >> 5 < 1) {
              uVar38 = uVar44;
            }
            iVar10 = 0;
            do {
              if (uVar38 == uVar44) goto LAB_14292d66a;
              iVar10 = iVar10 + 0x20;
              uVar25 = *(uint *)((longlong)pplVar23 + (uVar44 + 1) * 4);
              uVar44 = uVar44 + 1;
            } while (uVar25 == 0);
          }
          else {
            uVar44 = 0;
            iVar10 = 0;
          }
          uVar46 = (ulonglong)(-uVar25 & uVar25);
          uVar38 = uVar46 * 2 + 1;
          lVar35 = 0x3f;
          if (uVar38 != 0) {
            for (; uVar38 >> lVar35 == 0; lVar35 = lVar35 + -1) {
            }
          }
          uVar25 = (iVar10 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
          if ((int)local_d0 <= (int)uVar25) {
            uVar25 = local_d0;
          }
        }
        if (uVar25 != local_d0) {
          uVar45 = 0xffffffff;
          uVar12 = local_d0;
          do {
            uVar3 = *(uint *)(local_f8 + (longlong)(int)uVar25 * 2);
            iVar13 = 0;
            if (*(int *)(param_1 + 0x898) != *(int *)(param_1 + 0x8c4)) {
              uVar38 = *(ulonglong *)(param_1 + 0x8d0);
              if (*(ulonglong *)(param_1 + 0x8d0) == 0) {
                uVar38 = local_3e0;
              }
              iVar26 = *(int *)(uVar38 + (ulonglong)(*(int *)(param_1 + 0x8d8) - 1U & uVar3) * 4);
              if (iVar26 != -1) {
                do {
                  lVar35 = *local_3a8 + (longlong)iVar26 * 0x10;
                  if (*(uint *)(*local_3a8 + (longlong)iVar26 * 0x10) == uVar3) {
                    iVar13 = 0;
                    if (lVar35 != 0) {
                      iVar13 = *(int *)(lVar35 + 4);
                    }
                    break;
                  }
                  iVar26 = *(int *)(lVar35 + 8);
                } while (iVar26 != -1);
              }
            }
            if (iVar13 < *(int *)((longlong)local_f8 + ((longlong)(int)uVar25 * 8 + 2) * 2)) {
              switch(uVar3) {
              case 0:
                FUN_140056680(&local_148,&DAT_149f2f95e);
                puVar41 = &DAT_149f2f9b8;
                break;
              case 1:
                FUN_140056680(&local_148,&DAT_149f2f95e);
                puVar41 = &DAT_149f2f970;
                break;
              case 2:
                FUN_140056680(&local_148,&DAT_149f2f95e);
                puVar41 = &DAT_149f2f976;
                break;
              case 3:
                FUN_140056680(&local_148,&DAT_149f2f95e);
                puVar41 = &DAT_149f2f706;
                break;
              default:
                goto switchD_14292d86a_default;
              }
              FUN_140056680(&local_198,puVar41);
              if (local_198 != (wchar_t ****)0x0) {
                FUN_1400020a8();
              }
              uVar12 = local_d0;
              if ((wchar_t ****)local_148 != (wchar_t ****)0x0) {
                FUN_1400020a8();
                uVar12 = local_d0;
              }
            }
switchD_14292d86a_default:
            uVar45 = uVar45 & ~(uint)uVar46;
            pplVar23 = local_d8;
            if (local_d8 == (longlong **)0x0) {
              pplVar23 = local_e8;
            }
            iVar13 = (int)uVar44;
            lVar35 = (longlong)iVar13;
            uVar25 = *(uint *)((longlong)pplVar23 + lVar35 * 4) & uVar45;
            if (uVar25 == 0) {
              iVar26 = uVar12 + 0x1e;
              if (-1 < (int)(uVar12 - 1)) {
                iVar26 = uVar12 - 1;
              }
              iVar26 = iVar26 >> 5;
              iVar10 = iVar10 + 0x20;
              iVar29 = iVar26;
              if (iVar26 < iVar13) {
                iVar29 = iVar13;
              }
              if (iVar13 < iVar26) {
                lVar39 = 0;
                do {
                  uVar25 = *(uint *)((longlong)pplVar23 + (lVar35 + lVar39 + 1) * 4);
                  if (uVar25 != 0) {
                    uVar44 = (ulonglong)(iVar13 + (int)lVar39 + 1);
                    uVar45 = 0xffffffff;
                    goto LAB_14292d998;
                  }
                  iVar10 = iVar10 + 0x20;
                  lVar39 = lVar39 + 1;
                } while (iVar29 - lVar35 != lVar39);
                uVar45 = 0xffffffff;
                iVar13 = iVar29;
              }
              uVar44 = (ulonglong)(iVar13 + 1);
              uVar25 = uVar12;
            }
            else {
LAB_14292d998:
              uVar46 = (ulonglong)(-uVar25 & uVar25);
              uVar38 = uVar46 * 2 + 1;
              lVar35 = 0x3f;
              if (uVar38 != 0) {
                for (; uVar38 >> lVar35 == 0; lVar35 = lVar35 + -1) {
                }
              }
              uVar25 = (iVar10 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
              if ((int)uVar12 <= (int)uVar25) {
                uVar25 = uVar12;
              }
            }
          } while (uVar25 != uVar11);
        }
LAB_14292d66a:
        FUN_146b4910e(local_3a8,&local_f8);
        local_148 = (wchar_t *)CONCAT44(local_148._4_4_,0x3f800000);
        local_198 = (wchar_t ****)CONCAT44(local_198._4_4_,7);
        FUN_146b34248(local_3d0,&local_198,&local_148);
        cVar8 = (**(code **)(**(longlong **)(param_1 + 0x550) + 0x10))();
        if (cVar8 == '\0') {
          if ((longlong)(int)uStack_270 != 0) {
            lVar35 = (longlong)(int)uStack_270 << 4;
            plVar17 = local_278;
            do {
              FUN_142934616(local_3f0,plVar17,1);
              iVar10 = (int)plVar17[1] + -1;
              if ((int)plVar17[1] == 0) {
                iVar10 = 0;
              }
              uVar11 = *(uint *)(param_1 + 0x100);
              iVar13 = iVar10 + 1 + (uint)((longlong)(int)uVar11 == 0);
              local_148 = (wchar_t *)0x0;
              pvVar4 = *(void **)(param_1 + 0xf8);
              uStack_140 = CONCAT44(uStack_140._4_4_,uVar11);
              if (iVar13 == 0 && uVar11 == 0) {
                uStack_140 = (ulonglong)uVar11;
              }
              else {
                iVar29 = iVar13 + uVar11;
                if (iVar13 < 0) goto LAB_14292f918;
                FUN_1446dd670(&local_148,iVar29,0);
                if (uVar11 != 0) {
                  memcpy(local_148,pvVar4,(longlong)(int)uVar11 * 2);
                }
              }
              FUN_1401aebe8(&local_148,*plVar17,iVar10);
              ppppwVar32 = (wchar_t ****)&DAT_149dfb77a;
              if ((int)uStack_140 != 0) {
                ppppwVar32 = (wchar_t ****)local_148;
              }
              cVar8 = (**(code **)(**(longlong **)(param_1 + 0x540) + 0x80))
                                (*(longlong **)(param_1 + 0x540),ppppwVar32);
              if (cVar8 != '\0') {
                ppppwVar32 = (wchar_t ****)&DAT_149dfb77a;
                if ((int)uStack_140 != 0) {
                  ppppwVar32 = (wchar_t ****)local_148;
                }
                (**(code **)(**(longlong **)(param_1 + 0x540) + 0x68))
                          (*(longlong **)(param_1 + 0x540),ppppwVar32);
              }
              if (*(int *)(param_1 + 200) != 0) {
                iVar10 = (int)plVar17[1] + -1;
                if ((int)plVar17[1] == 0) {
                  iVar10 = 0;
                }
                uVar11 = *(uint *)(param_1 + 0x78);
                iVar13 = iVar10 + 1 + (uint)((longlong)(int)uVar11 == 0);
                local_198 = (wchar_t ****)0x0;
                pvVar4 = *(void **)(param_1 + 0x70);
                ppplStack_190 = (longlong ***)CONCAT44(ppplStack_190._4_4_,uVar11);
                if (iVar13 == 0 && uVar11 == 0) {
                  ppplStack_190 = (longlong ***)(ulonglong)uVar11;
                }
                else {
                  iVar29 = iVar13 + uVar11;
                  if (iVar13 < 0) {
LAB_14292f918:
                    /* WARNING: Subroutine does not return */
                    FUN_1456afac4(iVar29);
                  }
                  FUN_1446dd670(&local_198,iVar29,0);
                  if (uVar11 != 0) {
                    memcpy(local_198,pvVar4,(longlong)(int)uVar11 * 2);
                  }
                }
                FUN_1401aebe8(&local_198,*plVar17,iVar10);
                ppppwVar32 = (wchar_t ****)&DAT_149dfb77a;
                if ((int)ppplStack_190 != 0) {
                  ppppwVar32 = local_198;
                }
                cVar8 = (**(code **)(**(longlong **)(param_1 + 0x540) + 0x80))
                                  (*(longlong **)(param_1 + 0x540),ppppwVar32);
                if (cVar8 != '\0') {
                  ppppwVar32 = (wchar_t ****)&DAT_149dfb77a;
                  if ((int)ppplStack_190 != 0) {
                    ppppwVar32 = local_198;
                  }
                  (**(code **)(**(longlong **)(param_1 + 0x540) + 0x68))
                            (*(longlong **)(param_1 + 0x540),ppppwVar32);
                  FUN_14482b35e(local_340,&local_1f8,plVar17,0);
                }
                if (local_198 != (wchar_t ****)0x0) {
                  FUN_1400020a8();
                }
              }
              if ((wchar_t ****)local_148 != (wchar_t ****)0x0) {
                FUN_1400020a8();
              }
              plVar17 = plVar17 + 2;
              lVar35 = lVar35 + -0x10;
            } while (lVar35 != 0);
          }
        }
        FUN_146b3441a(local_350);
        if ((char)local_3a0 == '\0') {
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c991b58);
        }
        uVar44 = local_3b8;
        local_b0 = 0;
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        bVar24 = (int)uVar44 == 0;
        FUN_146b48cac(&local_f8);
        FUN_146b341de(local_358);
        iVar10 = *(int *)(param_1 + 200);
        plVar17 = (longlong *)FUN_14054d1d4();
        if (iVar10 == 0) {
          puVar30 = &DAT_149dfb77a;
          if (*(int *)(param_1 + 0xf0) != 0) {
            puVar30 = *(undefined2 **)(param_1 + 0xe8);
          }
          (**(code **)(*plVar17 + 0x60))(plVar17,puVar30,0);
        }
        else {
          puVar30 = &DAT_149dfb77a;
          if (*(int *)(param_1 + 0x88) != 0) {
            puVar30 = (undefined2 *)*local_398;
          }
          (**(code **)(*plVar17 + 0x60))(plVar17,puVar30,0);
          FUN_1429340be(local_3c0);
        }
        FUN_146b3441a(local_358);
      }
      local_f8 = (wchar_t ***)CONCAT44(local_f8._4_4_,0x3f800000);
      local_148 = (wchar_t *)CONCAT44(local_148._4_4_,8);
      FUN_146b34248(local_3d0,&local_148,&local_f8);
      if ((local_3ac < 2) ||
         (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x550) + 0x10))(), cVar8 != '\0')) {
        bVar9 = 0;
      }
      else {
        bVar9 = (**(code **)(**(longlong **)(param_1 + 0x550) + 0x18))();
      }
      if ((bVar49 | bVar9) == 1) {
        plVar17 = (longlong *)FUN_14054d1d4();
        puVar30 = &DAT_149dfb77a;
        if (*(int *)(param_1 + 0x120) != 0) {
          puVar30 = *(undefined2 **)(param_1 + 0x118);
        }
        local_408 = (wchar_t *****)((ulonglong)local_408 & 0xffffffffffffff00);
        (**(code **)(*plVar17 + 0x30))(plVar17,puVar30,0);
      }
      p_Var7 = local_318;
      LOCK();
      *(undefined4 *)(param_1 + 0x15c) = 0;
      UNLOCK();
      EnterCriticalSection(local_318);
      uVar50 = *(undefined4 *)(param_1 + 0x34c);
      LeaveCriticalSection(p_Var7);
      p_Var7 = local_3c8;
      EnterCriticalSection(local_3c8);
      iVar10 = FUN_146b31fdb();
      *(int *)(param_1 + 0x24c) = iVar10 - local_3ac;
      *(undefined4 *)(param_1 + 0x298) = uVar50;
      if (((bVar49 ^ 1U) & bVar9) == 0) {
        LeaveCriticalSection(p_Var7);
      }
      else {
        uVar50 = (**(code **)(**(longlong **)(param_1 + 0x550) + 0x20))();
        iVar10 = *(int *)(param_1 + 0x260);
        *(uint *)(param_1 + 0x260) = iVar10 + 1U;
        if (*(uint *)(param_1 + 0x264) < iVar10 + 1U) {
          FUN_146b53228(local_320,iVar10);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 600) + (longlong)iVar10 * 4) = uVar50;
        (**(code **)(**(longlong **)(param_1 + 0x550) + 0x28))
                  (*(longlong **)(param_1 + 0x550),&local_f8);
        p_Var7 = local_3c8;
        iVar10 = *(int *)(param_1 + 0x280);
        *(uint *)(param_1 + 0x280) = iVar10 + 1U;
        if (*(uint *)(param_1 + 0x284) < iVar10 + 1U) {
          FUN_1447a1bd6(local_348,iVar10);
        }
        lVar35 = *local_348;
        lVar39 = (longlong)iVar10 * 0x10;
        *(undefined8 *)(lVar35 + lVar39) = 0;
        *(wchar_t ****)(lVar35 + lVar39) = local_f8;
        *(int *)(lVar35 + 8 + lVar39) = (int)uStack_f0;
        *(uint *)(lVar35 + 0xc + lVar39) = uStack_f0._4_4_;
        uStack_f0 = (longlong *)0x0;
        local_f8 = (wchar_t ***)0x0;
        *(undefined1 *)(param_1 + 0x381) = 0;
        LeaveCriticalSection(p_Var7);
        FUN_146b341de(local_360);
        lVar35 = local_3d0;
        LOCK();
        *(undefined4 *)(param_1 + 0x350) = 0;
        UNLOCK();
        local_f8 = (wchar_t ***)((ulonglong)local_f8 & 0xffffffff00000000);
        local_148._0_4_ = 1;
        FUN_146b34248(local_3d0,&local_148,&local_f8);
        local_f8 = (wchar_t ***)((ulonglong)local_f8 & 0xffffffff00000000);
        local_148._0_4_ = 2;
        FUN_146b34248(lVar35,&local_148,&local_f8);
        local_f8 = (wchar_t ***)((ulonglong)local_f8 & 0xffffffff00000000);
        local_148._0_4_ = 3;
        FUN_146b34248(lVar35,&local_148,&local_f8);
        local_f8 = (wchar_t ***)((ulonglong)local_f8 & 0xffffffff00000000);
        local_148._0_4_ = 4;
        FUN_146b34248(lVar35,&local_148,&local_f8);
        local_f8 = (wchar_t ***)((ulonglong)local_f8 & 0xffffffff00000000);
        local_148._0_4_ = 5;
        FUN_146b34248(lVar35,&local_148,&local_f8);
        local_f8 = (wchar_t ***)((ulonglong)local_f8 & 0xffffffff00000000);
        local_148._0_4_ = 6;
        FUN_146b34248(lVar35,&local_148,&local_f8);
        local_f8 = (wchar_t ***)((ulonglong)local_f8 & 0xffffffff00000000);
        local_148._0_4_ = 7;
        FUN_146b34248(lVar35,&local_148,&local_f8);
        local_f8 = (wchar_t ***)((ulonglong)local_f8 & 0xffffffff00000000);
        local_148 = (wchar_t *)CONCAT44(local_148._4_4_,8);
        FUN_146b34248(lVar35,&local_148,&local_f8);
      }
      local_3ac = local_3ac + -1;
    } while ((bVar9 & (bVar24 ^ 1)) != 0);
    FUN_1447a1747(local_278,uStack_270 & 0xffffffff);
    if (local_278 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (((byte)local_384 & bVar24) == 1) {
      FUN_146b341de(param_1 + 0x790);
      bVar24 = FUN_146b344ca(local_3f0);
      FUN_146b3441a(param_1 + 0x790);
      local_3f0 = 0;
    }
    else {
      local_3f0 = 0;
    }
    goto LAB_14292f1a3;
  }
  local_3f0 = 0;
  bVar24 = 0;
LAB_14292f1a3:
  lVar35 = local_360;
  FUN_146b3441a(local_360);
  FUN_146b3441a(param_1 + 0x650);
  FUN_146b3441a(param_1 + 0x690);
  FUN_146b3441a(param_1 + 0x6d0);
  FUN_146b3441a(param_1 + 0x710);
  FUN_146b3441a(param_1 + 0x750);
  local_3a8 = (longlong *)(param_1 + 0x790);
  FUN_146b3441a();
  local_3e0 = param_1 + 2000;
  FUN_146b3441a();
  FUN_146b3441a(local_370);
  FUN_146b3441a(local_368);
  LOCK();
  *(uint *)(param_1 + 0x150) = (uint)(bVar24 & 1);
  UNLOCK();
  EnterCriticalSection(local_3c8);
  dVar6 = (double)FUN_146b34570(lVar35);
  *(float *)(param_1 + 0x220) = (float)dVar6;
  dVar6 = (double)FUN_146b34570(param_1 + 0x650);
  *(float *)(param_1 + 0x224) = (float)dVar6;
  dVar6 = (double)FUN_146b34570(param_1 + 0x690);
  *(float *)(param_1 + 0x228) = (float)dVar6;
  dVar6 = (double)FUN_146b34570(param_1 + 0x6d0);
  *(float *)(param_1 + 0x22c) = (float)dVar6;
  dVar6 = (double)FUN_146b34570(param_1 + 0x710);
  *(float *)(param_1 + 0x230) = (float)dVar6;
  dVar6 = (double)FUN_146b34570(param_1 + 0x750);
  *(float *)(param_1 + 0x234) = (float)dVar6;
  dVar6 = (double)FUN_146b34570(local_3a8);
  *(float *)(param_1 + 0x238) = (float)dVar6;
  dVar6 = (double)FUN_146b34570(local_3e0);
  *(float *)(param_1 + 0x23c) = (float)dVar6;
  dVar6 = (double)FUN_146b34570(local_370);
  *(float *)(param_1 + 0x240) = (float)dVar6;
  dVar6 = (double)FUN_146b34570(local_368);
  *(float *)(param_1 + 0x244) = (float)dVar6;
  *(byte *)(param_1 + 0x248) = bVar24 & 1;
  (**(code **)(**(longlong **)(param_1 + 0x550) + 0x28))(*(longlong **)(param_1 + 0x550),&local_f8);
  lVar35 = local_378;
  cVar8 = local_3e1;
  uVar44 = local_3f0;
  if ((wchar_t ****)local_328 == &local_f8) {
    if (local_f8 != (wchar_t ***)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x268) != 0) {
      FUN_1400020a8();
    }
    *(wchar_t ****)(param_1 + 0x268) = local_f8;
    local_f8 = (wchar_t ***)0x0;
    *(int *)(param_1 + 0x270) = (int)uStack_f0;
    *(uint *)(param_1 + 0x274) = uStack_f0._4_4_;
    uVar44 = local_3f0;
  }
  (**(code **)(**(longlong **)(param_1 + 0x550) + 0x30))(*(longlong **)(param_1 + 0x550),&local_f8);
  FUN_140008f88(lVar35,&local_f8);
  if (local_f8 != (wchar_t ***)0x0) {
    (**(code **)((longlong)*local_f8 + 0x10))();
  }
  uVar50 = (**(code **)(**(longlong **)(param_1 + 0x550) + 0x20))();
  *(undefined4 *)(param_1 + 0x250) = uVar50;
  *(ulonglong *)(param_1 + 0x218) = uVar44;
  LeaveCriticalSection(local_3c8);
  LOCK();
  *(undefined4 *)(param_1 + 0x154) = 0;
  UNLOCK();
  if (cVar8 == '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c991b28);
  }
  if ((local_a0 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return *(int *)(param_1 + 0x150) == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14292ea79:
  if (uVar34 == uVar37) goto LAB_14292ea8b;
LAB_14292ea15:
  iVar13 = *(int *)(lVar35 + 0x10 + lVar39 * 0x18);
  if (iVar13 == -1) goto LAB_14292ea86;
  goto LAB_14292e9fb;
LAB_14292ea86:
  iVar13 = -1;
LAB_14292ea8b:
  plVar17 = *(longlong **)(param_1 + 0x5e8);
  local_248 = (wchar_t ****)CONCAT44(local_248._4_4_,(bVar24 | iVar13 != -1) + 1);
  uStack_240 = (void *)0x0;
  local_238 = *(int *)(ppwVar36 + 1);
  lVar35 = (longlong)local_238;
  pwVar42 = *ppwVar36;
  if (lVar35 == 0) {
    local_234 = 0;
  }
  else {
    FUN_1446dd670(&uStack_240,local_238,0);
    memcpy(uStack_240,pwVar42,lVar35 * 2);
  }
  iVar10 = local_3d8;
  (**(code **)(*plVar17 + 8))(plVar17,&local_248);
  local_258 = fVar52 / fVar51;
  local_288[0] = 5;
  FUN_146b34248(local_3d0,local_288,&local_258);
  fVar52 = fVar52 + 1.0;
  bVar49 = true;
  goto LAB_14292e5ae;
LAB_14292e75e:
  local_408 = (wchar_t *****)CONCAT44(local_408._4_4_,DVar16);
  FUN_140002266(&local_258,L"%s-%u-%u",&DAT_149f2f964);
  plVar17 = *(longlong **)(param_1 + 0x550);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (wchar_t ****)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = (wchar_t ***)0x0;
    *DAT_14c844840 = (wchar_t ***)&PTR_FUN_149e19310;
    DAT_14c844840[2] = (wchar_t ***)0xffffffffffffffff;
    DAT_14c844840[3] = (wchar_t ***)0x0;
    DAT_14c844840[4] = (wchar_t ***)0x0;
    DAT_14c844840[5] = (wchar_t ***)0x0;
    if (DAT_14c844840 != (wchar_t ****)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  iVar10 = local_3d8;
  local_268 = DAT_14c844840;
  if (DAT_14c844840 != (wchar_t ****)0x0) {
    (*(code *)(*DAT_14c844840)[1])();
  }
  local_260 = DAT_14c844848;
  puVar30 = &DAT_149dfb77a;
  if (local_250 != 0) {
    puVar30 = (undefined2 *)CONCAT44(uStack_254,local_258);
  }
  if (DVar16 == 0 && DVar15 == 0) {
    puVar30 = (undefined2 *)&DAT_149f2f964;
  }
  local_408 = &local_268;
  (**(code **)(*plVar17 + 0x38))(plVar17,3,puVar30);
  if (CONCAT44(uStack_254,local_258) != 0) {
    FUN_1400020a8();
  }
LAB_14292e5a4:
  bVar49 = false;
  local_3d4 = 0;
LAB_14292e5ae:
  uVar44 = local_3b8;
  if (local_218 != (wchar_t ****)0x0) {
    FUN_1400020a8();
  }
  if (local_1f8 != (wchar_t ****)0x0) {
    FUN_1400020a8();
  }
  if (!bVar49) goto LAB_14292ec7c;
  uVar25 = (uint)local_3a0 & ~(uint)uVar46;
  pplVar23 = local_d8;
  if (local_d8 == (longlong **)0x0) {
    pplVar23 = local_e8;
  }
  iVar13 = (int)uVar44;
  lVar35 = (longlong)iVar13;
  uVar11 = *(uint *)((longlong)pplVar23 + lVar35 * 4) & uVar25;
  if (uVar11 == 0) {
    iVar26 = local_d0 + 0x1e;
    if (-1 < (int)(local_d0 - 1)) {
      iVar26 = local_d0 - 1;
    }
    iVar26 = iVar26 >> 5;
    iVar29 = iVar26;
    if (iVar26 < iVar13) {
      iVar29 = iVar13;
    }
    if (iVar26 <= iVar13) goto LAB_14292ec7c;
    lVar39 = 0;
    while( true ) {
      iVar10 = iVar10 + 0x20;
      uVar11 = *(uint *)((longlong)pplVar23 + (lVar35 + lVar39 + 1) * 4);
      if (uVar11 != 0) break;
      lVar39 = lVar39 + 1;
      if (iVar29 - lVar35 == lVar39) goto LAB_14292ec7c;
    }
    uVar44 = (ulonglong)(iVar13 + (int)lVar39 + 1);
    uVar25 = 0xffffffff;
  }
  uVar46 = (ulonglong)(-uVar11 & uVar11);
  uVar38 = uVar46 * 2 + 1;
  lVar35 = 0x3f;
  if (uVar38 != 0) {
    for (; uVar38 >> lVar35 == 0; lVar35 = lVar35 + -1) {
    }
  }
  uVar11 = (iVar10 - ((uint)lVar35 ^ 0x3f)) + 0x3e;
  if ((int)local_d0 <= (int)uVar11) goto LAB_14292ec7c;
  goto LAB_14292e331;
}



// FUNCTION 14292fa32 FUN_14292fa32 body=18059 status=ok
// SIG undefined FUN_14292fa32(void)

ulonglong FUN_14292fa32(longlong param_1,longlong param_2)

{
  DWORD DVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar13;
  char cVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  DWORD DVar18;
  undefined4 uVar19;
  longlong *plVar20;
  longlong *plVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  LARGE_INTEGER LVar28;
  LARGE_INTEGER *pLVar29;
  LARGE_INTEGER LVar30;
  LARGE_INTEGER *pLVar31;
  undefined1 *puVar32;
  int iVar33;
  undefined ***pppuVar34;
  undefined1 auVar35 [8];
  int iVar36;
  uint uVar37;
  undefined2 *puVar38;
  undefined2 *puVar39;
  longlong lVar40;
  LARGE_INTEGER *pLVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  ulonglong uVar45;
  ushort uVar46;
  longlong lVar47;
  longlong lVar48;
  longlong lVar49;
  ulonglong uVar50;
  undefined *puVar51;
  ushort uVar52;
  ulonglong uVar53;
  uint *puVar54;
  uint uVar55;
  uint uVar56;
  void *pvVar57;
  bool bVar58;
  undefined1 auStack_9b8 [32];
  LARGE_INTEGER *local_998;
  longlong *local_990;
  longlong local_988;
  longlong *local_980;
  longlong *local_978;
  undefined8 local_970;
  undefined8 local_968;
  undefined1 *local_960;
  longlong local_958;
  LARGE_INTEGER *local_950;
  longlong *local_948;
  uint *local_940;
  longlong *local_938;
  longlong *local_930;
  longlong *local_928;
  DWORD local_91c;
  longlong *local_918;
  longlong *local_910;
  longlong *local_908;
  undefined2 *local_900;
  undefined8 *local_8f8;
  LPCRITICAL_SECTION local_8f0;
  longlong *local_8e8;
  undefined8 *local_8e0;
  longlong local_8d8;
  longlong local_8d0;
  longlong *local_8c8;
  undefined8 *local_8c0;
  undefined4 local_8b8;
  undefined4 local_8b4;
  LPCRITICAL_SECTION local_8b0;
  longlong local_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  longlong local_890;
  longlong local_888;
  undefined1 local_880 [96];
  undefined8 local_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined4 local_7d8;
  undefined8 local_7d0;
  undefined1 local_7c8;
  void *local_7c0;
  int local_7b8;
  undefined4 local_7b4;
  undefined8 *local_7b0;
  undefined8 *local_7a8;
  undefined8 uStack_7a0;
  undefined1 local_790 [96];
  undefined8 local_730;
  undefined8 uStack_728;
  uint local_720 [2];
  double local_718;
  double local_710;
  undefined1 local_708;
  undefined8 local_704;
  longlong *local_6f8;
  undefined1 local_6f0 [48];
  void *local_6c0;
  int local_6b8;
  undefined4 local_6b4;
  undefined4 local_6b0;
  undefined8 local_6a8;
  undefined8 local_6a0;
  void *local_698;
  undefined8 uStack_690;
  char local_681;
  uint local_680;
  uint local_67c;
  undefined1 local_678 [16];
  LARGE_INTEGER local_668;
  undefined4 local_660;
  LARGE_INTEGER local_658;
  undefined4 local_650;
  LARGE_INTEGER local_648;
  undefined4 local_640;
  LARGE_INTEGER local_638;
  undefined4 local_630;
  undefined2 *local_628;
  undefined8 uStack_620;
  LARGE_INTEGER local_618;
  int local_610;
  undefined2 *local_608;
  int local_600;
  ulonglong local_5f8;
  longlong *local_5f0;
  LARGE_INTEGER local_5e8;
  LARGE_INTEGER LStack_5e0;
  ulonglong local_5d8;
  LARGE_INTEGER local_5c8;
  undefined8 uStack_5c0;
  undefined2 *local_5b0;
  int local_5a8;
  undefined4 local_5a4;
  LARGE_INTEGER local_5a0;
  undefined1 *local_598 [2];
  undefined8 local_588 [6];
  undefined1 *local_558;
  undefined8 local_548;
  undefined **local_538;
  undefined8 **local_530;
  undefined1 *local_518;
  undefined ***local_508;
  undefined **local_4f8;
  undefined8 **local_4f0;
  undefined1 local_4d8 [80];
  undefined1 local_488 [8];
  int local_480;
  int local_454;
  longlong local_448;
  undefined4 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_418;
  undefined4 local_410;
  undefined8 local_40c;
  undefined4 local_404;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined1 local_3e0 [88];
  undefined1 local_388 [8];
  int local_380;
  int local_354;
  longlong local_348;
  undefined4 local_340;
  undefined1 *local_338;
  undefined8 local_328;
  undefined **local_318;
  longlong local_310;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2cc;
  undefined4 local_2c4;
  longlong local_2b8;
  undefined4 local_2b0;
  undefined1 local_2a8 [8];
  undefined8 uStack_2a0;
  int local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_27c;
  int local_274;
  longlong local_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  longlong local_228;
  int local_220;
  int local_1f4;
  undefined1 local_1f0 [8];
  undefined1 *local_1e8;
  int local_1e0;
  longlong local_1d8;
  int local_1d0;
  int local_1a4;
  undefined1 local_1a0 [8];
  undefined1 *local_198;
  int local_190;
  longlong local_188;
  int local_180;
  int local_154;
  undefined1 local_150 [8];
  undefined1 *local_148;
  int local_140;
  char local_138;
  undefined1 local_128 [16];
  DWORD local_118;
  undefined2 *local_108;
  ulonglong uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_a4 [16];
  DWORD local_94;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_9b8;
  FUN_140e4328c((undefined8 *)(param_1 + 0xf0));
  FUN_140e4328c((undefined8 *)(param_1 + 0x100));
  FUN_140e4328c((undefined8 *)(param_1 + 0x110));
  plVar20 = (longlong *)FUN_14054d1d4();
  puVar39 = &DAT_149dfb77a;
  puVar38 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 0xf8) != 0) {
    puVar38 = *(undefined2 **)(param_1 + 0xf0);
  }
  local_958 = param_1;
  (**(code **)(*plVar20 + 0x58))(plVar20,puVar38,1);
  plVar20 = (longlong *)FUN_14054d1d4();
  lVar47 = local_958;
  puVar38 = &DAT_149dfb77a;
  if (*(int *)(local_958 + 0x108) != 0) {
    puVar38 = *(undefined2 **)(param_1 + 0x100);
  }
  (**(code **)(*plVar20 + 0x58))(plVar20,puVar38,1);
  plVar20 = (longlong *)FUN_14054d1d4();
  if (*(int *)(lVar47 + 0x118) != 0) {
    puVar39 = *(undefined2 **)(param_1 + 0x110);
  }
  (**(code **)(*plVar20 + 0x58))(plVar20,puVar39,1);
  plVar21 = (longlong *)FUN_146b8d88c();
  plVar20 = *(longlong **)(lVar47 + 0x558);
  plVar25 = plVar20;
  if ((plVar20 != plVar21) &&
     (*(longlong **)(lVar47 + 0x558) = plVar21, plVar25 = plVar21, plVar20 != (longlong *)0x0)) {
    (**(code **)*plVar20)(plVar20,1);
    plVar25 = *(longlong **)(lVar47 + 0x558);
  }
  local_328 = 0;
  local_318 = &PTR_LAB_149f2ee40;
  local_310 = lVar47;
  local_338 = &LAB_142939056;
  (**(code **)(*plVar25 + 0x40))(plVar25);
  plVar20 = (longlong *)(lVar47 + 0x3a0);
  iVar42 = 0;
  FUN_145d323a0(plVar20,0);
  (**(code **)(**(longlong **)(lVar47 + 0x5f8) + 0x48))(*(longlong **)(lVar47 + 0x5f8),plVar20);
  pLVar41 = (LARGE_INTEGER *)(lVar47 + 0x3f0);
  FUN_145d323a0(pLVar41,0);
  (**(code **)(**(longlong **)(lVar47 + 0x5f8) + 0x50))
            (*(longlong **)(lVar47 + 0x5f8),lVar47 + 0x78,pLVar41);
  iVar44 = *(int *)(lVar47 + 0xd0);
  iVar16 = *(int *)(param_2 + 8);
  local_918 = (longlong *)(lVar47 + 0x440);
  local_990 = (longlong *)CONCAT71(local_990._1_7_,iVar44 == 3);
  local_998 = pLVar41;
  local_928 = plVar20;
  FUN_1429343c8(local_918,*(undefined8 *)(lVar47 + 0x5f8),param_2,plVar20);
  if (iVar16 < 1) {
    if ((iVar44 == 3) || (cVar13 = FUN_146b3462a(lVar47), cVar13 != '\0')) {
      (**(code **)(**(longlong **)(lVar47 + 0x600) + 0x20))
                (*(longlong **)(lVar47 + 0x600),local_918);
      lVar48 = lVar47 + 0x2e0;
      auVar6._12_4_ = 0;
      auVar6._0_12_ = stack0xfffffffffffffd5c;
      _local_2a8 = auVar6 << 0x20;
      local_108._0_4_ = 3;
      FUN_146b350be(lVar48,&local_108,local_2a8);
      auVar7._12_4_ = 0;
      auVar7._0_12_ = stack0xfffffffffffffd5c;
      _local_2a8 = auVar7 << 0x20;
      local_108._0_4_ = 4;
      FUN_146b350be(lVar48,&local_108,local_2a8);
      auVar8._12_4_ = 0;
      auVar8._0_12_ = stack0xfffffffffffffd5c;
      _local_2a8 = auVar8 << 0x20;
      local_108._0_4_ = 5;
      FUN_146b350be(lVar48,&local_108,local_2a8);
      local_2a8._0_4_ = 0x3e4ccccd;
      local_108._0_4_ = 6;
      FUN_146b350be(lVar48,&local_108,local_2a8);
      local_2a8._0_4_ = 0x3f800000;
      local_108._0_4_ = 7;
      FUN_146b350be(lVar48,&local_108,local_2a8);
      local_2a8._0_4_ = 0x3f800000;
      local_108._0_4_ = 1;
      FUN_146b34248(lVar48,&local_108,local_2a8);
      local_2a8._0_4_ = 0x3f800000;
      local_108._0_4_ = 2;
      FUN_146b34248(lVar48,&local_108,local_2a8);
      local_2a8._0_4_ = 0x3f800000;
      local_108._0_4_ = 3;
      FUN_146b34248(lVar48,&local_108,local_2a8);
      local_2a8._0_4_ = 0x3f800000;
      local_108 = (undefined2 *)CONCAT44(local_108._4_4_,4);
      FUN_146b34248(lVar48,&local_108,local_2a8);
      FUN_146b3441a(lVar47 + 0x618);
      uVar45 = CONCAT71((int7)((ulonglong)lVar48 >> 8),1);
      goto LAB_14293005f;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar47 + 0x130));
    *(int *)(lVar47 + 0x174) = *(int *)(lVar47 + 0x448) - *(int *)(lVar47 + 0x474);
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar47 + 0x130));
  }
  iVar44 = *(int *)(lVar47 + 0x468);
  local_938 = (longlong *)CONCAT44(local_938._4_4_,iVar16);
  if (iVar44 == 0) {
    plVar20 = (longlong *)&DAT_00000001;
    uVar45 = 0;
    iVar16 = 0;
  }
  else {
    puVar54 = *(uint **)(lVar47 + 0x460);
    if (*(uint **)(lVar47 + 0x460) == (uint *)0x0) {
      puVar54 = (uint *)(lVar47 + 0x450);
    }
    uVar55 = *puVar54;
    if (uVar55 == 0) {
      iVar16 = iVar44 + 0x1e;
      if (-1 < iVar44 + -1) {
        iVar16 = iVar44 + -1;
      }
      uVar45 = 0;
      uVar53 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar53 = uVar45;
      }
      iVar42 = 0;
      do {
        if (uVar53 == uVar45) goto LAB_1429300a8;
        iVar42 = iVar42 + 0x20;
        uVar55 = puVar54[uVar45 + 1];
        uVar45 = uVar45 + 1;
      } while (uVar55 == 0);
    }
    else {
      iVar42 = 0;
      uVar45 = 0;
    }
    plVar20 = (longlong *)(ulonglong)(-uVar55 & uVar55);
    uVar53 = (longlong)plVar20 * 2 + 1;
    lVar48 = 0x3f;
    if (uVar53 != 0) {
      for (; uVar53 >> lVar48 == 0; lVar48 = lVar48 + -1) {
      }
    }
    iVar16 = (iVar42 - ((uint)lVar48 ^ 0x3f)) + 0x3e;
    if (iVar44 <= iVar16) {
      iVar16 = iVar44;
    }
  }
  if (iVar16 != iVar44) {
    uVar55 = 0xffffffff;
    local_940 = (uint *)(lVar47 + 0x450);
    do {
      local_950 = (LARGE_INTEGER *)CONCAT44(local_950._4_4_,iVar42);
      lVar48 = *(longlong *)(lVar47 + 0x440);
      iVar42 = *(int *)(lVar48 + 8 + (longlong)iVar16 * 0x18);
      iVar43 = iVar42 + -1;
      if (iVar42 == 0) {
        iVar43 = 0;
      }
      uVar37 = *(uint *)(lVar47 + 0x80);
      iVar42 = iVar43 + 1 + (uint)((longlong)(int)uVar37 == 0);
      pvVar57 = *(void **)(lVar47 + 0x78);
      auVar12._4_4_ = uStack_2a0._4_4_;
      auVar12._0_4_ = uVar37;
      auVar12._8_8_ = 0;
      _local_2a8 = auVar12 << 0x40;
      local_948 = plVar20;
      if (iVar42 == 0 && uVar37 == 0) {
        _local_2a8 = ZEXT416(uVar37) << 0x40;
      }
      else {
        iVar36 = iVar42 + uVar37;
        if (iVar42 < 0) goto LAB_142933ff3;
        FUN_1446dd670(local_2a8,iVar36,0);
        if (uVar37 != 0) {
          memcpy((void *)local_2a8,pvVar57,(longlong)(int)uVar37 * 2);
        }
      }
      puVar23 = (undefined8 *)(lVar48 + (longlong)iVar16 * 0x18);
      FUN_1401aebe8(local_2a8,*puVar23,iVar43);
      iVar16 = *(int *)(puVar23 + 1) + -1;
      if (*(int *)(puVar23 + 1) == 0) {
        iVar16 = 0;
      }
      uVar37 = *(uint *)(local_958 + 0x108);
      iVar42 = iVar16 + 1 + (uint)((longlong)(int)uVar37 == 0);
      local_108 = (undefined2 *)0x0;
      pvVar57 = *(void **)(local_958 + 0x100);
      uStack_100 = CONCAT44(uStack_100._4_4_,uVar37);
      if (iVar42 == 0 && uVar37 == 0) {
        uStack_100 = (ulonglong)uVar37;
      }
      else {
        iVar36 = iVar42 + uVar37;
        if (iVar42 < 0) goto LAB_142933ff3;
        FUN_1446dd670(&local_108,iVar36,0);
        if (uVar37 != 0) {
          memcpy(local_108,pvVar57,(longlong)(int)uVar37 * 2);
        }
      }
      FUN_1401aebe8(&local_108,*puVar23,iVar16);
      iVar16 = (int)uStack_2a0 + -1;
      if ((int)uStack_2a0 == 0) {
        iVar16 = 0;
      }
      iVar42 = FUN_1457a17a0();
      if (iVar42 <= iVar16) {
        plVar20 = *(longlong **)(local_958 + 0x558);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = 0;
          *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
          DAT_14c844840[2] = -1;
          DAT_14c844840[3] = 0;
          DAT_14c844840[4] = 0;
          DAT_14c844840[5] = 0;
          if (DAT_14c844840 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
        local_658.QuadPart = (LONGLONG)DAT_14c844840;
        if (DAT_14c844840 != (longlong *)0x0) {
          (**(code **)(*DAT_14c844840 + 8))();
        }
        local_998 = &local_658;
        local_650 = DAT_14c844848;
        lVar47 = *plVar20;
        puVar51 = &DAT_149f2f9b8;
LAB_14293002b:
        (**(code **)(lVar47 + 0x38))(plVar20,10,puVar51,0);
        if (local_108 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_2a8 != (undefined1  [8])0x0) {
          FUN_1400020a8();
        }
        uVar45 = 0;
        goto LAB_14293005f;
      }
      iVar16 = (int)uStack_100 + -1;
      if ((int)uStack_100 == 0) {
        iVar16 = 0;
      }
      iVar42 = FUN_1457a17a0();
      lVar47 = local_958;
      if (iVar42 <= iVar16) {
        plVar20 = *(longlong **)(local_958 + 0x558);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = 0;
          *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
          DAT_14c844840[2] = -1;
          DAT_14c844840[3] = 0;
          DAT_14c844840[4] = 0;
          DAT_14c844840[5] = 0;
          if (DAT_14c844840 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
        local_668.QuadPart = (LONGLONG)DAT_14c844840;
        if (DAT_14c844840 != (longlong *)0x0) {
          (**(code **)(*DAT_14c844840 + 8))();
        }
        local_998 = &local_668;
        local_660 = DAT_14c844848;
        lVar47 = *plVar20;
        puVar51 = &DAT_149f2f964;
        goto LAB_14293002b;
      }
      if (local_108 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      plVar20 = local_948;
      iVar42 = (int)local_950;
      if (local_2a8 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
      uVar55 = uVar55 & ~(uint)plVar20;
      puVar54 = *(uint **)(lVar47 + 0x460);
      if (*(uint **)(lVar47 + 0x460) == (uint *)0x0) {
        puVar54 = local_940;
      }
      iVar43 = *(int *)(lVar47 + 0x468);
      iVar16 = (int)uVar45;
      lVar48 = (longlong)iVar16;
      uVar37 = puVar54[lVar48] & uVar55;
      if (uVar37 == 0) {
        iVar36 = iVar43 + 0x1e;
        if (-1 < iVar43 + -1) {
          iVar36 = iVar43 + -1;
        }
        iVar36 = iVar36 >> 5;
        iVar42 = iVar42 + 0x20;
        iVar33 = iVar36;
        if (iVar36 < iVar16) {
          iVar33 = iVar16;
        }
        if (iVar16 < iVar36) {
          lVar49 = 0;
          do {
            uVar37 = puVar54[lVar48 + lVar49 + 1];
            if (uVar37 != 0) {
              uVar45 = (ulonglong)(iVar16 + (int)lVar49 + 1);
              uVar55 = 0xffffffff;
              goto LAB_14292feef;
            }
            iVar42 = iVar42 + 0x20;
            lVar49 = lVar49 + 1;
          } while (iVar33 - lVar48 != lVar49);
          uVar55 = 0xffffffff;
          lVar48 = (longlong)iVar33;
        }
        uVar45 = lVar48 + 1U & 0xffffffff;
        plVar20 = local_948;
        lVar47 = local_958;
        iVar16 = iVar43;
      }
      else {
LAB_14292feef:
        plVar20 = (longlong *)(ulonglong)(-uVar37 & uVar37);
        uVar53 = (longlong)plVar20 * 2 + 1;
        lVar48 = 0x3f;
        if (uVar53 != 0) {
          for (; uVar53 >> lVar48 == 0; lVar48 = lVar48 + -1) {
          }
        }
        iVar16 = (iVar42 - ((uint)lVar48 ^ 0x3f)) + 0x3e;
        if (iVar43 <= iVar16) {
          iVar16 = iVar43;
        }
      }
    } while (iVar16 != iVar44);
  }
LAB_1429300a8:
  uVar55 = *(uint *)(lVar47 + 0x3c8);
  if (uVar55 == 0) {
    uVar53 = 1;
    plVar20 = (longlong *)0x0;
    iVar44 = 0;
    uVar37 = 0;
  }
  else {
    puVar54 = *(uint **)(lVar47 + 0x3c0);
    if (*(uint **)(lVar47 + 0x3c0) == (uint *)0x0) {
      puVar54 = (uint *)(lVar47 + 0x3b0);
    }
    uVar37 = *puVar54;
    if (uVar37 == 0) {
      iVar44 = uVar55 + 0x1e;
      if (-1 < (int)(uVar55 - 1)) {
        iVar44 = uVar55 - 1;
      }
      plVar20 = (longlong *)0x0;
      plVar25 = (longlong *)(ulonglong)(uint)(iVar44 >> 5);
      if (iVar44 >> 5 < 1) {
        plVar25 = plVar20;
      }
      iVar44 = 0;
      do {
        if (plVar25 == plVar20) goto LAB_142930162;
        iVar44 = iVar44 + 0x20;
        uVar37 = puVar54[(longlong)((longlong)plVar20 + 1)];
        plVar20 = (longlong *)((longlong)plVar20 + 1);
      } while (uVar37 == 0);
    }
    else {
      plVar20 = (longlong *)0x0;
      iVar44 = 0;
    }
    uVar53 = (ulonglong)(-uVar37 & uVar37);
    uVar45 = uVar53 * 2 + 1;
    lVar48 = 0x3f;
    if (uVar45 != 0) {
      for (; uVar45 >> lVar48 == 0; lVar48 = lVar48 + -1) {
      }
    }
    uVar37 = (iVar44 - ((uint)lVar48 ^ 0x3f)) + 0x3e;
    if ((int)uVar55 <= (int)uVar37) {
      uVar37 = uVar55;
    }
  }
  if (uVar37 != uVar55) {
    local_8f8 = (undefined8 *)
                CONCAT44(local_8f8._4_4_,
                         (uint)((*(uint *)(lVar47 + 0xd4) & 0xfffffffd) != 0) * 3 + 0xb);
    local_908 = (longlong *)(lVar47 + 0x478);
    uVar17 = 0xffffffff;
    local_940 = (uint *)(lVar47 + 0x3b0);
    local_930 = (longlong *)(ulonglong)uVar55;
    do {
      local_950 = (LARGE_INTEGER *)CONCAT44(local_950._4_4_,iVar44);
      plVar25 = (longlong *)(*local_928 + (longlong)(int)uVar37 * 0x18);
      iVar16 = (int)plVar25[1];
      iVar42 = iVar16 + -1;
      if (iVar16 == 0) {
        iVar42 = 0;
      }
      uVar37 = 0;
      if (0 < iVar42) {
        puVar38 = &DAT_149dfb77a;
        if (iVar16 != 0) {
          puVar38 = (undefined2 *)*plVar25;
        }
        lVar48 = 0;
        uVar45 = 0;
        do {
          uVar37 = ((uint)(ushort)puVar38[lVar48] +
                   (uint)(0x19 < (ushort)puVar38[lVar48] - 0x61) * 0x20) - 0x20;
          uVar56 = (uint)(uVar45 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar45 ^ uVar37) & 0xff) * 4);
          uVar37 = uVar56 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar56 & 0xff ^ uVar37 >> 8 & 0xff) * 4);
          uVar45 = (ulonglong)uVar37;
          lVar48 = lVar48 + 1;
        } while (iVar42 != (int)lVar48);
      }
      local_948 = plVar20;
      if (*(int *)(lVar47 + 0x448) != *(int *)(lVar47 + 0x474)) {
        plVar21 = *(longlong **)(lVar47 + 0x480);
        if (*(longlong **)(lVar47 + 0x480) == (longlong *)0x0) {
          plVar21 = local_908;
        }
        iVar42 = *(int *)((longlong)plVar21 +
                         (ulonglong)(*(int *)(lVar47 + 0x488) - 1U & uVar37) * 4);
        if (iVar42 != -1) {
          lVar48 = *local_918;
LAB_142930647:
          lVar49 = (longlong)iVar42;
          iVar42 = *(int *)(lVar48 + 8 + lVar49 * 0x18);
          if (iVar42 == iVar16) {
            lVar47 = local_958;
            if (1 < iVar16) {
              lVar40 = 0;
              do {
                uVar52 = *(ushort *)(*(longlong *)(lVar48 + lVar49 * 0x18) + lVar40);
                uVar46 = *(ushort *)(*plVar25 + lVar40);
                if (uVar52 == uVar46) {
                  if (uVar52 == 0) break;
                }
                else {
                  if (0x7f < (uVar46 | uVar52)) {
                    iVar42 = (uint)uVar52 - (uint)uVar46;
                    goto LAB_1429306d9;
                  }
                  if ((&DAT_149e05da0)[uVar52] != (&DAT_149e05da0)[(uint)uVar46])
                  goto code_r0x0001429306d6;
                }
                lVar40 = lVar40 + 2;
              } while( true );
            }
          }
          else if (iVar42 + iVar16 != 1) goto LAB_142930665;
          goto LAB_142930714;
        }
      }
LAB_1429306f6:
      (**(code **)(**(longlong **)(lVar47 + 0x578) + 0x40))
                (*(longlong **)(lVar47 + 0x578),plVar25,(ulonglong)local_8f8 & 0xffffffff);
      uVar55 = *(uint *)(lVar47 + 0x3c8);
LAB_142930714:
      uVar17 = uVar17 & ~(uint)uVar53;
      puVar54 = *(uint **)(lVar47 + 0x3c0);
      if (*(uint **)(lVar47 + 0x3c0) == (uint *)0x0) {
        puVar54 = local_940;
      }
      iVar16 = (int)plVar20;
      lVar48 = (longlong)iVar16;
      uVar37 = puVar54[lVar48] & uVar17;
      if (uVar37 == 0) {
        iVar42 = uVar55 + 0x1e;
        if (-1 < (int)(uVar55 - 1)) {
          iVar42 = uVar55 - 1;
        }
        iVar42 = iVar42 >> 5;
        iVar44 = iVar44 + 0x20;
        iVar43 = iVar42;
        if (iVar42 < iVar16) {
          iVar43 = iVar16;
        }
        if (iVar16 < iVar42) {
          lVar49 = 0;
          do {
            uVar37 = puVar54[lVar48 + lVar49 + 1];
            if (uVar37 != 0) {
              plVar20 = (longlong *)(ulonglong)(iVar16 + (int)lVar49 + 1);
              uVar17 = 0xffffffff;
              goto LAB_14293079e;
            }
            iVar44 = iVar44 + 0x20;
            lVar49 = lVar49 + 1;
          } while (iVar43 - lVar48 != lVar49);
          uVar17 = 0xffffffff;
          lVar48 = (longlong)iVar43;
        }
        plVar20 = (longlong *)(lVar48 + 1U & 0xffffffff);
        lVar47 = local_958;
        uVar37 = uVar55;
      }
      else {
LAB_14293079e:
        uVar53 = (ulonglong)(-uVar37 & uVar37);
        uVar45 = uVar53 * 2 + 1;
        lVar48 = 0x3f;
        if (uVar45 != 0) {
          for (; uVar45 >> lVar48 == 0; lVar48 = lVar48 + -1) {
          }
        }
        uVar37 = (iVar44 - ((uint)lVar48 ^ 0x3f)) + 0x3e;
        if ((int)uVar55 <= (int)uVar37) {
          uVar37 = uVar55;
        }
      }
    } while (uVar37 != (uint)local_930);
  }
LAB_142930162:
  FUN_1447a1747(0,0);
  FUN_1447a1747(0,0);
  local_288 = 0;
  local_280 = 0;
  _local_2a8 = (undefined1  [16])0x0;
  local_27c = 0xffffffff00000080;
  local_274 = 0;
  local_268 = 0;
  local_258 = 0x280000000a;
  local_260 = 0;
  FUN_140149fc2();
  local_678 = (undefined1  [16])0x0;
  FUN_146b34f2e(local_2a8);
  FUN_146b35076(local_2a8);
  local_67c = ((local_290 - (local_290 + 0x50 >> 0x1f)) + 0x50 >> 1) + local_290 + 0x50;
  local_998 = (LARGE_INTEGER *)&DAT_14c872ce8;
  cVar13 = FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"ChunkStoreMemorySize");
  if (cVar13 == '\0') {
    local_2a8._0_4_ = local_290 + 0x28;
    local_108 = (undefined2 *)CONCAT44(local_108._4_4_,0x28);
    local_998 = (LARGE_INTEGER *)&DAT_14c872ce8;
    cVar13 = FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"CloudChunkStoreMemorySize");
    local_998 = (LARGE_INTEGER *)&DAT_14c872ce8;
    cVar14 = FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"InstallChunkStoreMemorySize",
                           &local_108);
    if ((cVar13 != '\0') || (cVar14 != '\0')) {
      local_67c = (int)local_108 + local_2a8._0_4_;
    }
  }
  uVar55 = 0x800;
  if ((int)local_67c < 0x800) {
    uVar55 = local_67c;
  }
  uVar37 = 0x40;
  if (0x40 < (int)uVar55) {
    uVar37 = uVar55;
  }
  local_680 = 2000;
  local_998 = (LARGE_INTEGER *)&DAT_14c872ce8;
  local_67c = uVar37;
  bVar15 = FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"ChunkStoreMemoryHeadRoomMB",&local_680
                        );
  bVar15 = 500 < (int)local_680 & bVar15;
  uVar45 = (ulonglong)bVar15;
  if (bVar15 == 1) {
    uVar22 = (ulonglong)local_680;
    local_108 = (undefined2 *)CONCAT44(local_108._4_4_,0x100000);
    local_998 = (LARGE_INTEGER *)&DAT_14c872ce8;
    FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"ChunkStoreMemoryChunkSizeBytes",&local_108);
    FUN_1405d5a96(local_2a8);
    uVar53 = CONCAT44(uStack_25c,local_260);
    uVar50 = (ulonglong)(int)local_108;
    uVar45 = uVar53 + uVar22 * -0x100000;
    if (uVar53 < uVar22 * 0x100000 || uVar45 == 0) {
      uVar22 = uVar53 / uVar50;
      uVar45 = uVar53 % uVar50;
      if (uVar37 <= uVar22) goto LAB_14293080f;
    }
    else {
      uVar22 = uVar45 / uVar50;
      uVar45 = uVar45 % uVar50;
    }
    local_67c = (uint)uVar22;
  }
LAB_14293080f:
  lVar48 = (**(code **)(**(longlong **)(lVar47 + 0x5d0) + 0x60))
                     (*(longlong **)(lVar47 + 0x5d0),uVar45);
  LOCK();
  *(longlong *)(lVar47 + 0x168) = *(longlong *)(lVar47 + 0x168) + lVar48;
  UNLOCK();
  (**(code **)(**(longlong **)(lVar47 + 0x5d0) + 0x38))(*(longlong **)(lVar47 + 0x5d0),0);
  (**(code **)(**(longlong **)(lVar47 + 0x5d0) + 0x30))(*(longlong **)(lVar47 + 0x5d0),0);
  uVar27 = *(undefined8 *)(lVar47 + 0x548);
  puVar23 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar23 = &PTR_FUN_149f2ed90;
  puVar23[1] = uVar27;
  *(undefined4 *)(puVar23 + 2) = 0x12;
  plVar20 = (longlong *)FUN_146b6f84a(*(undefined8 *)(lVar47 + 0x5f8),local_918);
  (**(code **)(*plVar20 + 8))(plVar20,local_388);
  puVar24 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar24 = &PTR_FUN_149f323e8;
  puVar24[1] = plVar20;
  local_681 = '\x01';
  local_998 = (LARGE_INTEGER *)&DAT_14c872ce8;
  local_928 = plVar20;
  FUN_14052bb08(DAT_14c872ce0,L"BuildPatchServices",L"bEnableDiskOverflowStore",&local_681);
  local_910 = (longlong *)0x0;
  if (local_681 == '\x01') {
    local_698 = (void *)0x0;
    iVar44 = *(int *)(lVar47 + 0xf8);
    pvVar57 = *(void **)(lVar47 + 0xf0);
    if ((longlong)iVar44 == 0) {
      local_6c0 = (void *)0x0;
      local_6b8 = 0;
      local_6b4 = 0;
    }
    else {
      uStack_690._0_4_ = iVar44;
      FUN_1446dd670(&local_698,iVar44,0);
      memcpy(local_698,pvVar57,(longlong)iVar44 * 2);
      local_6c0 = local_698;
      local_6b8 = (int)uStack_690;
      local_6b4 = uStack_690._4_4_;
    }
    local_698 = (void *)0x0;
    uStack_690 = 0;
    local_6a0 = *(undefined8 *)(lVar47 + 0x68);
    local_6b0 = 0x32;
    local_6a8 = 0x4000000000000000;
    local_910 = (longlong *)
                FUN_146b883f2(*(undefined8 *)(lVar47 + 0x548),puVar23,
                              *(undefined8 *)(lVar47 + 0x588));
  }
  plVar20 = local_928;
  local_998 = (LARGE_INTEGER *)local_928;
  local_8c0 = puVar24;
  plVar25 = (longlong *)FUN_146b8f298(local_67c,puVar24,local_910,*(undefined8 *)(lVar47 + 0x580));
  uVar27 = *(undefined8 *)(lVar47 + 0x5c0);
  uVar2 = *(undefined8 *)(lVar47 + 0x558);
  uVar26 = *(undefined8 *)(lVar47 + 0x5f0);
  local_950 = *(LARGE_INTEGER **)(lVar47 + 0x548);
  uVar3 = *(undefined8 *)(lVar47 + 0x550);
  FUN_146b3484a(lVar47,local_6f0);
  local_998 = (LARGE_INTEGER *)plVar20;
  local_990 = puVar23;
  local_988 = uVar26;
  local_980 = (longlong *)uVar2;
  local_978 = (longlong *)uVar27;
  local_8f8 = puVar23;
  plVar20 = (longlong *)FUN_142948480(local_6f0,uVar3,local_950,plVar25);
  local_948 = *(longlong **)(lVar47 + 0x5f8);
  uVar27 = *(undefined8 *)(lVar47 + 0x5c8);
  local_950 = *(LARGE_INTEGER **)(lVar47 + 0x548);
  uVar2 = *(undefined8 *)(lVar47 + 0x558);
  uVar26 = (**(code **)(*plVar20 + 0x30))(plVar20);
  local_418 = 0;
  local_410 = 0;
  local_438 = 0;
  uStack_430 = 0;
  local_40c = 0xffffffff00000080;
  local_404 = 0;
  local_3f8 = 0;
  local_3f0 = 0;
  FUN_145ff0016(&local_438,uVar26);
  FUN_146b34a14(local_3e0,&local_438);
  local_980 = local_948;
  local_998 = (LARGE_INTEGER *)uVar2;
  local_990 = (longlong *)uVar27;
  local_988 = lVar47 + 0x4e0;
  local_908 = plVar25;
  local_6f8 = (longlong *)FUN_146b89f56(local_3e0,local_950,plVar25,local_928);
  uVar27 = (**(code **)(*local_6f8 + 0x30))(local_6f8);
  FUN_1461c8dd4(local_388,local_2a8,uVar27);
  uVar27 = (**(code **)(*plVar20 + 0x30))(plVar20);
  FUN_1461c8dd4(local_2a8,local_488,uVar27);
  local_260 = 0;
  if (local_268 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(local_2a8);
  lVar47 = local_958;
  plVar25 = *(longlong **)(local_958 + 0x578);
  uVar27 = (**(code **)(*plVar20 + 0x30))(plVar20);
  FUN_146b35124(local_388,local_2a8,uVar27);
  (**(code **)(*plVar25 + 0x20))(plVar25,local_2a8,1);
  local_260 = 0;
  if (local_268 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(local_2a8);
  plVar25 = *(longlong **)(lVar47 + 0x578);
  uVar27 = (**(code **)(*local_6f8 + 0x30))();
  FUN_146b35124(local_388,&local_108,uVar27);
  uVar27 = (**(code **)(*plVar20 + 0x30))(plVar20);
  FUN_1461c8dd4(&local_108,local_2a8,uVar27);
  (**(code **)(*plVar25 + 0x20))(plVar25,local_2a8,3);
  local_260 = 0;
  if (local_268 != 0) {
    FUN_1400020a8();
  }
  local_930 = plVar20;
  FUN_140149fc2(local_2a8);
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_108);
  lVar47 = local_958;
  (**(code **)(**(longlong **)(local_958 + 0x578) + 0x20))
            (*(longlong **)(local_958 + 0x578),local_488,5);
  local_950 = *(LARGE_INTEGER **)(lVar47 + 0x5b8);
  local_730 = 0x800000064;
  uStack_728 = 0x800000008;
  local_720[0] = 4;
  local_718 = 0.85;
  local_710 = 0.65;
  local_708 = 0;
  local_704 = 0x800000010;
  local_998 = (LARGE_INTEGER *)&DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"ChunkDownloads");
  uVar55 = 100;
  if ((uint)local_704 < 100) {
    uVar55 = (uint)local_704;
  }
  local_108 = (undefined2 *)((ulonglong)local_108 & 0xffffffffffffff00);
  local_998 = (LARGE_INTEGER *)&DAT_14c872ce8;
  local_704._0_4_ = uVar55 + (uVar55 == 0);
  cVar13 = FUN_14052bb08(DAT_14c872ce0,L"Portal.BuildPatch",
                         L"ChunkDownloadsDisableConnectionScaling",&local_108);
  if ((cVar13 != '\0') && ((char)local_108 == '\x01')) {
    local_708 = 1;
  }
  auVar9._12_4_ = 0;
  auVar9._0_12_ = stack0xfffffffffffffd5c;
  _local_2a8 = auVar9 << 0x20;
  uVar55 = (uint)local_730;
  local_998 = (LARGE_INTEGER *)&DAT_14c872ce8;
  cVar13 = FUN_1414d73b6(DAT_14c872ce0,L"HTTP",L"HttpMaxConnectionsPerServer",local_2a8);
  if (local_2a8._0_4_ != 0) {
    uVar55 = local_2a8._0_4_;
  }
  uVar37 = 0x10;
  if (cVar13 != '\0') {
    uVar37 = uVar55;
  }
  uVar55 = local_730._4_4_;
  local_998 = (LARGE_INTEGER *)&DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"ChunkDownloadsLowerLimit",
                (longlong)&local_730 + 4);
  uVar17 = uVar37 - 2;
  if (uVar17 <= uVar55) {
    uVar55 = uVar17;
  }
  uVar56 = local_730._4_4_;
  if (uVar17 < local_730._4_4_) {
    uVar56 = uVar17;
  }
  if (0x1f < uVar56) {
    uVar56 = 0x20;
  }
  if (uVar56 < uVar55) {
    uVar56 = uVar55;
  }
  local_998 = (LARGE_INTEGER *)&DAT_14c872ce8;
  local_730._4_4_ = uVar56;
  FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"ChunkDownloadsUpperLimit",&local_730);
  if ((uint)local_730 < uVar37) {
    uVar37 = (uint)local_730;
  }
  if (uVar37 < local_730._4_4_ + 2) {
    uVar37 = local_730._4_4_ + 2;
  }
  local_730 = CONCAT44(local_730._4_4_,uVar37);
  local_998 = (LARGE_INTEGER *)&DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"ChunkDownloadsSlowdownHysteresis",&uStack_728);
  uVar55 = (uint)uStack_728;
  if (0xff < (uint)uStack_728) {
    uVar55 = 0x100;
  }
  local_998 = (LARGE_INTEGER *)&DAT_14c872ce8;
  uStack_728._0_4_ = uVar55 + (uVar55 == 0);
  FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"ChunkDownloadsSpeedupHysteresis",local_720);
  if (0xff < local_720[0]) {
    local_720[0] = 0x100;
  }
  local_720[0] = local_720[0] + (local_720[0] == 0);
  local_998 = (LARGE_INTEGER *)&DAT_14c872ce8;
  FUN_14612afb8(DAT_14c872ce0,L"Portal.BuildPatch",L"ChunkDownloadsLowBandwidthFactor",&local_710);
  if (0.8 <= local_710) {
    local_710 = 0.8;
  }
  if (local_710 <= 0.2) {
    local_710 = 0.2;
  }
  local_998 = (LARGE_INTEGER *)&DAT_14c872ce8;
  FUN_14612afb8(DAT_14c872ce0,L"Portal.BuildPatch",L"ChunkDownloadsHighBandwidthFactor",&local_718);
  if (1.0 <= local_718) {
    local_718 = 1.0;
  }
  if (local_718 <= local_710 + 0.1) {
    local_718 = local_710 + 0.1;
  }
  local_998 = (LARGE_INTEGER *)&DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"ChunkDownloadsAverageMinCount",
                (longlong)&uStack_728 + 4);
  uVar55 = 0x20;
  if (uStack_728._4_4_ < 0x20) {
    uVar55 = uStack_728._4_4_;
  }
  uStack_728 = CONCAT44(uVar55 + (uVar55 == 0),(uint)uStack_728);
  local_998 = (LARGE_INTEGER *)&DAT_14c872ce8;
  FUN_1414d73b6(DAT_14c872ce0,L"Portal.BuildPatch",L"ChunkDownloadsHealthHysteresis",
                (longlong)&local_704 + 4);
  uVar55 = 0x100;
  if (local_704._4_4_ < 0x100) {
    uVar55 = local_704._4_4_;
  }
  local_704 = CONCAT44(uVar55 + (uVar55 == 0),(uint)local_704);
  plVar20 = (longlong *)FUN_146b884a4(&local_730,local_950);
  FUN_1409e67a4(local_4d8,local_488);
  uVar27 = *(undefined8 *)(local_958 + 0x5f8);
  uVar2 = *(undefined8 *)(local_958 + 0x5d0);
  uVar26 = *(undefined8 *)(local_958 + 0x550);
  uVar3 = *(undefined8 *)(local_958 + 0x558);
  uVar4 = *(undefined8 *)(local_958 + 0x5f0);
  uVar5 = *(undefined8 *)(local_958 + 0x5e8);
  FUN_146b34b12(local_958,local_790);
  local_960 = local_4d8;
  local_990 = local_8f8;
  local_998 = (LARGE_INTEGER *)local_928;
  local_988 = uVar4;
  local_980 = (longlong *)uVar3;
  local_978 = plVar20;
  local_970 = uVar2;
  local_968 = uVar27;
  local_8c8 = plVar20;
  puVar23 = (undefined8 *)FUN_14294767a(local_790,uVar26,local_908,uVar5);
  local_7a8 = (undefined8 *)0x0;
  uStack_7a0._0_4_ = 1;
  uStack_7a0._4_4_ = 0;
  FUN_146b532ae(&local_7a8,0);
  plVar20 = local_6f8;
  iVar44 = (uint)uStack_7a0;
  *local_7a8 = local_930;
  lVar47 = (longlong)(int)(uint)uStack_7a0;
  uStack_7a0._0_4_ = (uint)uStack_7a0 + 1;
  if (uStack_7a0._4_4_ < (uint)uStack_7a0) {
    FUN_146b532ae(&local_7a8,iVar44);
  }
  uVar55 = (uint)uStack_7a0;
  local_7a8[lVar47] = plVar20;
  lVar47 = (longlong)(int)(uint)uStack_7a0;
  uStack_7a0._0_4_ = (uint)uStack_7a0 + 1;
  if (uStack_7a0._4_4_ < (uint)uStack_7a0) {
    FUN_146b532ae(&local_7a8,uVar55);
  }
  puVar24 = local_7a8;
  local_7a8[lVar47] = puVar23;
  local_7c0 = (void *)0x0;
  lVar47 = (longlong)(int)(uint)uStack_7a0;
  local_7b8 = (uint)uStack_7a0;
  local_8e0 = puVar23;
  if (lVar47 == 0) {
    local_7b4 = 0;
  }
  else {
    FUN_146b53334(&local_7c0,uStack_7a0 & 0xffffffff);
    memcpy(local_7c0,puVar24,lVar47 << 3);
  }
  local_7b0 = (undefined8 *)FUN_146b70580(&local_7c0);
  local_7c8 = 0;
  local_818 = 0;
  uStack_810 = 0;
  local_808 = 0;
  uStack_800 = 0;
  local_7f8 = 0;
  uStack_7f0 = 0;
  local_7e8 = 0;
  uStack_7e0 = 0;
  FUN_140e83cb0(local_918,local_2a8);
  FUN_1410e5bda(&local_7e8,local_2a8);
  FUN_1447a1747(local_2a8,(int)uStack_2a0);
  if (local_2a8 != (undefined1  [8])0x0) {
    FUN_1400020a8();
  }
  lVar47 = local_958;
  iVar44 = *(int *)(local_958 + 0x80) + -1;
  if (*(int *)(local_958 + 0x80) == 0) {
    iVar44 = 0;
  }
  FUN_1402980a2(&local_818,*(undefined8 *)(local_958 + 0x78),iVar44);
  local_7d8 = *(undefined4 *)(lVar47 + 0xd0);
  local_820 = *(undefined8 *)(lVar47 + 0x5f8);
  iVar44 = *(int *)(lVar47 + 0x118) + -1;
  if (*(int *)(lVar47 + 0x118) == 0) {
    iVar44 = 0;
  }
  FUN_1402980a2(&local_7f8,*(undefined8 *)(lVar47 + 0x110),iVar44);
  local_7d0 = *(undefined8 *)(lVar47 + 0x68);
  iVar44 = *(int *)(lVar47 + 0x108) + -1;
  if (*(int *)(lVar47 + 0x108) == 0) {
    iVar44 = 0;
  }
  FUN_1402980a2(&local_808,*(undefined8 *)(lVar47 + 0x100),iVar44);
  LVar28.QuadPart = FUN_14001cc68(0x188,0x10);
  puVar23 = local_7b0;
  uVar27 = *(undefined8 *)(lVar47 + 0x5d8);
  uVar2 = *(undefined8 *)(lVar47 + 0x570);
  uVar26 = *(undefined8 *)(lVar47 + 0x548);
  uVar3 = *(undefined8 *)(lVar47 + 0x558);
  FUN_146b35306(local_880,&local_820);
  local_990 = local_928;
  local_998 = (LARGE_INTEGER *)local_930;
  local_988 = uVar3;
  local_980 = (longlong *)uVar2;
  local_978 = (longlong *)uVar27;
  FUN_146b2f7ba(LVar28.QuadPart,local_880,uVar26,puVar23);
  _local_2a8 = ZEXT812(0);
  FUN_1446efa72(local_2a8,0,3,0x10);
  uStack_2a0._0_4_ = 3;
  auVar6 = _local_2a8;
  *(undefined ***)local_2a8 = &PTR_LAB_149e063e0;
  LOCK();
  UNLOCK();
  lVar49 = DAT_14c758608 + 1;
  lVar48 = DAT_14c758608 + 1;
  if (lVar49 == 0) {
    LOCK();
    UNLOCK();
    lVar49 = DAT_14c758608 + 2;
    lVar48 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar48;
  puVar54 = (uint *)(LVar28.QuadPart + 0x108);
  *(longlong *)((longlong)local_2a8 + 0x10) = lVar49;
  *(undefined ***)local_2a8 = &PTR_FUN_149f2ee60;
  *(longlong *)((longlong)local_2a8 + 0x18) = lVar47;
  *(longlong ***)((longlong)local_2a8 + 0x20) = &local_6f8;
  uStack_2a0._0_4_ = 3;
  iVar44 = (int)local_938;
  auVar35 = (undefined1  [8])(undefined8 *)0x0;
  iVar16 = (int)uStack_2a0;
  local_940 = puVar54;
  _local_2a8 = auVar6;
  if (local_2a8 == (undefined1  [8])0x0) {
LAB_14293401d:
    puVar54 = local_940;
    iVar44 = (int)local_938;
    if (iVar16 == 0) {
      local_900 = (undefined2 *)0x0;
      goto LAB_142931569;
    }
    if (auVar35 != (undefined1  [8])0x0) {
      local_900 = (undefined2 *)0x0;
      (*(code *)**(undefined8 **)auVar35)(auVar35,0);
      FUN_1446efa72(local_2a8,0,0,0x10);
      puVar54 = local_940;
      iVar44 = (int)local_938;
      goto LAB_14293154e;
    }
    local_900 = (undefined2 *)0x0;
  }
  else {
    cVar13 = (**(code **)(*(longlong *)local_2a8 + 0x30))();
    if (cVar13 == '\0') {
      auVar35 = local_2a8;
      iVar16 = (int)uStack_2a0;
      goto LAB_14293401d;
    }
    if (*(int *)(LVar28.QuadPart + 0x11c) < 1) {
      iVar16 = *(int *)(LVar28.QuadPart + 0x110);
      iVar42 = *(int *)(LVar28.QuadPart + 0x118) + -1;
      *(int *)(LVar28.QuadPart + 0x118) = iVar42;
      if (iVar42 <= iVar16) {
        iVar42 = iVar16;
        if (0 < iVar16) {
          iVar43 = 0;
          do {
            if (((*(int *)(*(longlong *)puVar54 + 8 + (longlong)iVar43 * 0x10) == 0) ||
                (plVar20 = *(longlong **)(*(longlong *)puVar54 + (longlong)iVar43 * 0x10),
                plVar20 == (longlong *)0x0)) ||
               (cVar13 = (**(code **)(*plVar20 + 0x28))(), cVar13 != '\0')) {
              FUN_14005b288(puVar54,iVar43);
              FUN_14005b248(puVar54);
            }
            else {
              iVar43 = iVar43 + 1;
            }
            iVar42 = *(int *)(LVar28.QuadPart + 0x110);
          } while (iVar43 < iVar42);
        }
        iVar43 = 2;
        if (2 < iVar42 * 2) {
          iVar43 = iVar42 * 2;
        }
        *(int *)(LVar28.QuadPart + 0x118) = iVar43;
        if ((iVar43 < iVar16) && (*(int *)(LVar28.QuadPart + 0x114) != iVar42)) {
          FUN_14045812c();
        }
      }
    }
    local_900 = (undefined2 *)0x0;
    if (((int)uStack_2a0 != 0) && (local_2a8 != (undefined1  [8])0x0)) {
      (**(code **)(*(longlong *)local_2a8 + 0x38))(local_2a8,&local_108);
      local_900 = local_108;
    }
    iVar16 = *(int *)(LVar28.QuadPart + 0x110);
    *(uint *)(LVar28.QuadPart + 0x110) = iVar16 + 1U;
    if (*(uint *)(LVar28.QuadPart + 0x114) < iVar16 + 1U) {
      FUN_1447a71f6(puVar54,iVar16);
    }
    auVar6 = _local_2a8;
    lVar47 = *(longlong *)puVar54;
    lVar48 = (longlong)iVar16 * 0x10;
    *(undefined8 *)(lVar47 + lVar48) = 0;
    *(undefined4 *)(lVar47 + 8 + lVar48) = 0;
    *(undefined1 (*) [8])(lVar47 + lVar48) = local_2a8;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uStack_2a0;
    _local_2a8 = auVar10 << 0x40;
    auVar7 = _local_2a8;
    uStack_2a0._0_4_ = auVar6._8_4_;
    *(int *)(lVar47 + 8 + lVar48) = (int)uStack_2a0;
    _local_2a8 = auVar7;
LAB_14293154e:
    uStack_2a0._0_4_ = 0;
    auVar35 = local_2a8;
LAB_142931569:
    if (auVar35 != (undefined1  [8])0x0) {
      FUN_1400020a8();
    }
  }
  local_508 = (undefined ***)0x0;
  local_4f8 = &PTR_FUN_149f2eed0;
  local_4f0 = &local_7b0;
  local_518 = &LAB_142939352;
  if (local_910 == (longlong *)0x0) {
LAB_14293160e:
    local_588[0] = 0;
    pppuVar34 = local_508;
    if (local_508 == (undefined ***)0x0) {
      pppuVar34 = &local_4f8;
    }
    local_598[0] = local_518;
    (*(code *)**pppuVar34)(pppuVar34,local_588);
  }
  else {
    local_558 = &LAB_142939352;
    local_548 = 0;
    local_538 = &PTR_FUN_149f2eed0;
    local_530 = &local_7b0;
    (**(code **)(*local_910 + 0x28))(local_910);
    local_598[0] = local_518;
    local_588[0] = 0;
    if (local_518 != (undefined1 *)0x0) goto LAB_14293160e;
  }
  (**(code **)(*local_908 + 0x28))(local_908,local_598);
  lVar47 = local_958;
  local_888 = local_958 + 0x389;
  local_890 = local_958 + 0x388;
  local_8a8 = local_958 + 0x608;
  local_8f0 = (LPCRITICAL_SECTION)(local_958 + 0x130);
  local_8a0 = 0;
  uStack_898 = 0;
  plVar20 = local_6f8;
  if (local_6f8 != (longlong *)0x0) {
    plVar20 = local_6f8 + 1;
  }
  local_8b0 = local_8f0;
  FUN_146b35454(&local_8b0,plVar20);
  puVar23 = local_8e0 + 1;
  if (local_8e0 == (undefined8 *)0x0) {
    puVar23 = (undefined8 *)0x0;
  }
  FUN_146b35454(&local_8b0,puVar23);
  FUN_146b35454(&local_8b0,LVar28.QuadPart);
  if (iVar44 < 1) {
    EnterCriticalSection(local_8f0);
    *(int *)(lVar47 + 0x17c) = local_380 - local_354;
    *(int *)(lVar47 + 0x180) = local_480 - local_454;
    uVar27 = (**(code **)(*local_6f8 + 0x30))();
    FUN_146b35124(local_388,local_2a8,uVar27);
    *(int *)(lVar47 + 0x184) = (int)uStack_2a0 - local_274;
    local_260 = 0;
    if (local_268 != 0) {
      FUN_1400020a8();
    }
    FUN_140149fc2(local_2a8);
    uVar27 = (**(code **)(*local_930 + 0x30))();
    FUN_146b35124(local_388,local_2a8,uVar27);
    *(int *)(local_958 + 0x188) = (int)uStack_2a0 - local_274;
    local_260 = 0;
    if (local_268 != 0) {
      FUN_1400020a8();
    }
    FUN_140149fc2(local_2a8);
    LeaveCriticalSection(local_8f0);
    lVar47 = local_958;
  }
  cVar13 = (**(code **)(**(longlong **)(lVar47 + 0x5f8) + 0xa0))();
  if (cVar13 == '\0') {
    bVar58 = false;
  }
  else {
    bVar58 = *(int *)(lVar47 + 0x448) == *(int *)(lVar47 + 0x474);
  }
  cVar13 = (**(code **)(**(longlong **)(lVar47 + 0x5f8) + 0xa8))();
  lVar47 = local_958;
  if (bVar58) {
    local_8b4 = 0x3ca3d70a;
  }
  else {
    local_8b4 = 0x3d4ccccd;
  }
  uVar19 = 0;
  if (cVar13 == '\0') {
    local_8b4 = 0;
  }
  local_8b8 = *(undefined4 *)(&DAT_149f2c8c0 + (ulonglong)(*(uint *)(local_958 + 0xd4) < 2) * 4);
  lVar48 = local_958 + 0x2e0;
  auVar11._12_4_ = 0;
  auVar11._0_12_ = stack0xfffffffffffffd5c;
  _local_2a8 = auVar11 << 0x20;
  local_108._0_4_ = 3;
  FUN_146b350be(lVar48,&local_108,local_2a8);
  local_2a8._0_4_ = 0x3d4ccccd;
  local_108._0_4_ = 5;
  FUN_146b350be(lVar48,&local_108,local_2a8);
  if (*(int *)(lVar47 + 0x474) < *(int *)(lVar47 + 0x448)) {
    uVar19 = 0x3f800000;
  }
  local_108 = (undefined2 *)CONCAT44(local_108._4_4_,4);
  local_2a8._0_4_ = uVar19;
  FUN_146b350be(lVar48,&local_108,local_2a8);
  local_2a8._0_4_ = 6;
  FUN_146b350be(lVar48,local_2a8,&local_8b4);
  local_2a8._0_4_ = 7;
  FUN_146b350be(lVar48,local_2a8,&local_8b8);
  if (bVar58) {
    local_2a8._0_4_ = 0x3f800000;
    local_108._0_4_ = 3;
    FUN_146b34248(lVar48,&local_108,local_2a8);
    local_2a8._0_4_ = 0x3f800000;
    local_108._0_4_ = 4;
    FUN_146b34248(lVar48,&local_108,local_2a8);
    local_2a8._0_4_ = 0x3f800000;
    local_108 = (undefined2 *)CONCAT44(local_108._4_4_,5);
    FUN_146b34248(lVar48,&local_108,local_2a8);
  }
  lVar47 = local_958;
  if (*(int *)(local_958 + 0x474) < *(int *)(local_958 + 0x448)) {
    local_2a8._0_4_ = 0x3f800000;
    local_108 = (undefined2 *)CONCAT44(local_108._4_4_,1);
    FUN_146b34248(lVar48);
    FUN_146b3441a(lVar47 + 0x618);
  }
  local_8d8 = lVar47 + 0x658;
  FUN_146b341de();
  (**(code **)(**(longlong **)(LVar28.QuadPart + 0xe0) + 0x48))
            (*(longlong **)(LVar28.QuadPart + 0xe0),*(longlong *)(LVar28.QuadPart + 0xe8));
  local_600 = *(int *)(LVar28.QuadPart + 0x28);
  lVar47 = (longlong)local_600;
  local_608 = (undefined2 *)0x0;
  pvVar57 = *(void **)(LVar28.QuadPart + 0x20);
  FUN_1446dd670(&local_608,local_600 + (uint)(lVar47 == 0) + 0xc,0);
  if (lVar47 != 0) {
    memcpy(local_608,pvVar57,lVar47 * 2);
  }
  FUN_1401aebe8(&local_608,L"$resumeData",0xb);
  local_610 = *(int *)(LVar28.QuadPart + 0x38);
  lVar47 = (longlong)local_610;
  local_618.QuadPart = 0;
  pvVar57 = *(void **)(LVar28.QuadPart + 0x30);
  FUN_1446dd670(&local_618,local_610 + (uint)(lVar47 == 0) + 0xc,0);
  if (lVar47 != 0) {
    memcpy((void *)local_618,pvVar57,lVar47 * 2);
  }
  pLVar41 = &local_618;
  FUN_1401aebe8(pLVar41,L"$resumeData",0xb);
  puVar38 = local_608;
  if (local_600 == 0) {
    puVar38 = &DAT_149dfb77a;
  }
  cVar13 = (**(code **)(**(longlong **)(LVar28.QuadPart + 0xb0) + 0x80))
                     (*(longlong **)(LVar28.QuadPart + 0xb0),puVar38);
  if (cVar13 != '\0') {
    puVar38 = &DAT_149dfb77a;
    if (local_600 != 0) {
      puVar38 = local_608;
    }
    LVar30.QuadPart = (LONGLONG)&DAT_149dfb77a;
    if (local_610 != 0) {
      LVar30 = local_618;
    }
    (**(code **)(**(longlong **)(LVar28.QuadPart + 0xb0) + 0x70))
              (*(longlong **)(LVar28.QuadPart + 0xb0),LVar30.QuadPart,puVar38);
  }
  local_998 = pLVar41;
  local_8d0 = lVar48;
  FUN_146b2fd12(local_2a8,*(longlong *)(LVar28.QuadPart + 0xb0),*(longlong *)(LVar28.QuadPart + 8));
  if ((local_138 == '\x01') && ((longlong)*(int *)(LVar28.QuadPart + 0x48) != 0)) {
    pLVar41 = *(LARGE_INTEGER **)(LVar28.QuadPart + 0x40);
    pLVar29 = pLVar41 + (longlong)*(int *)(LVar28.QuadPart + 0x48) * 2;
    local_950 = pLVar29;
    do {
      FUN_146b3010a(local_2a8,pLVar41);
      DVar18 = pLVar41[1].s.LowPart;
      iVar44 = DVar18 - 1;
      if (DVar18 == 0) {
        iVar44 = 0;
      }
      uVar55 = 0;
      if (0 < iVar44) {
        puVar38 = &DAT_149dfb77a;
        if (DVar18 != 0) {
          puVar38 = (undefined2 *)pLVar41->QuadPart;
        }
        lVar47 = 0;
        uVar55 = 0;
        do {
          uVar37 = ((uint)(ushort)puVar38[lVar47] +
                   (uint)(0x19 < (ushort)puVar38[lVar47] - 0x61) * 0x20) - 0x20;
          uVar55 = uVar55 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar55 ^ uVar37) & 0xff) * 4);
          uVar55 = uVar55 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar55 & 0xff ^ uVar37 >> 8 & 0xff) * 4);
          lVar47 = lVar47 + 1;
        } while (iVar44 != (int)lVar47);
      }
      if (local_180 != local_154) {
        puVar32 = local_148;
        if (local_148 == (undefined1 *)0x0) {
          puVar32 = local_150;
        }
        iVar44 = *(int *)(puVar32 + (ulonglong)(local_140 - 1U & uVar55) * 4);
        if (iVar44 != -1) {
LAB_142933bc6:
          lVar47 = (longlong)iVar44;
          DVar1 = *(DWORD *)(local_188 + 8 + lVar47 * 0x18);
          if (DVar1 == DVar18) {
            if (1 < (int)DVar18) {
              lVar48 = 0;
              do {
                uVar52 = *(ushort *)(*(longlong *)(local_188 + lVar47 * 0x18) + lVar48);
                uVar46 = *(ushort *)(pLVar41->QuadPart + lVar48);
                if (uVar52 == uVar46) {
                  if (uVar52 == 0) break;
                }
                else {
                  if (0x7f < (uVar46 | uVar52)) {
                    iVar44 = (uint)uVar52 - (uint)uVar46;
                    goto LAB_142933c43;
                  }
                  if ((&DAT_149e05da0)[uVar52] != (&DAT_149e05da0)[(uint)uVar46])
                  goto code_r0x000142933c40;
                }
                lVar48 = lVar48 + 2;
              } while( true );
            }
            goto LAB_142933c4f;
          }
          if (DVar1 + DVar18 == 1) goto LAB_142933c4f;
          goto LAB_142933bdc;
        }
      }
LAB_142933d68:
      pLVar41 = pLVar41 + 2;
    } while (pLVar41 != pLVar29);
  }
  local_2d8 = 0;
  local_2d0 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_2cc = 0xffffffff00000080;
  local_2c4 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  (**(code **)(**(longlong **)(LVar28.QuadPart + 8) + 8))
            (*(longlong **)(LVar28.QuadPart + 8),&local_2f8,0);
  FUN_146b30320(local_2a8,&local_2f8);
  (**(code **)(**(longlong **)(LVar28.QuadPart + 0xe0) + 8))();
  local_628 = (undefined2 *)0x0;
  uStack_620 = 0;
  cVar13 = FUN_146b3039c(LVar28.QuadPart);
  if (cVar13 != '\0') {
    local_938 = (longlong *)(LVar28.QuadPart + 0x10);
    local_8e8 = (longlong *)(LVar28.QuadPart + 0xa0);
    local_948 = (longlong *)(LVar28.QuadPart + 0x128);
    do {
      if (*(int *)(LVar28.QuadPart + 0x70) != 0) break;
      pLVar29 = (LARGE_INTEGER *)
                (**(code **)(**(longlong **)(LVar28.QuadPart + 8) + 0x68))
                          (*(longlong **)(LVar28.QuadPart + 8),&local_628);
      if (pLVar29 == (LARGE_INTEGER *)0x0) {
        cVar13 = (**(code **)(**(longlong **)(LVar28.QuadPart + 0xd0) + 8))();
        if (cVar13 == '\0') {
          plVar20 = *(longlong **)(LVar28.QuadPart + 0xd8);
          FUN_140056680(&local_108,L"Missing File Manifest");
          (**(code **)(*plVar20 + 0x20))(plVar20,&local_628,0xffffffff);
          if (local_108 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        plVar20 = *(longlong **)(LVar28.QuadPart + 0xd0);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = 0;
          *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
          DAT_14c844840[2] = -1;
          DAT_14c844840[3] = 0;
          DAT_14c844840[4] = 0;
          DAT_14c844840[5] = 0;
          if (DAT_14c844840 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
          puVar54 = local_940;
        }
        local_638.QuadPart = (LONGLONG)DAT_14c844840;
        if (DAT_14c844840 != (longlong *)0x0) {
          (**(code **)(*DAT_14c844840 + 8))();
        }
        local_630 = DAT_14c844848;
        local_998 = &local_638;
        (**(code **)(*plVar20 + 0x38))(plVar20,2,&DAT_149f2f976);
        goto LAB_142931d35;
      }
      lVar47 = pLVar29[0xb].QuadPart;
      (**(code **)(**(longlong **)(LVar28.QuadPart + 0xe0) + 0x20))
                (*(longlong **)(LVar28.QuadPart + 0xe0),&local_628,lVar47);
      uVar55 = 0;
      iVar44 = (int)uStack_620 + -1;
      if ((int)uStack_620 == 0) {
        iVar44 = 0;
      }
      if (0 < iVar44) {
        puVar38 = local_628;
        if ((int)uStack_620 == 0) {
          puVar38 = &DAT_149dfb77a;
        }
        lVar48 = 0;
        uVar55 = 0;
        do {
          uVar37 = ((uint)(0x19 < (ushort)puVar38[lVar48] - 0x61) * 0x20 +
                   (uint)(ushort)puVar38[lVar48]) - 0x20;
          pLVar41 = (LARGE_INTEGER *)(ulonglong)uVar37;
          uVar55 = uVar55 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar55 ^ uVar37) & 0xff) * 4);
          uVar55 = uVar55 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar55 & 0xff ^ uVar37 >> 8 & 0xff) * 4);
          lVar48 = lVar48 + 1;
        } while (iVar44 != (int)lVar48);
      }
      if (local_1d0 != local_1a4) {
        puVar32 = local_198;
        if (local_198 == (undefined1 *)0x0) {
          puVar32 = local_1a0;
        }
        iVar16 = *(int *)(puVar32 + (ulonglong)(local_190 - 1U & uVar55) * 4);
        if (iVar16 != -1) {
LAB_142931efc:
          lVar48 = (longlong)iVar16;
          iVar42 = *(int *)(local_1d8 + 8 + lVar48 * 0x18);
          if (iVar42 == (int)uStack_620) {
            if (1 < (int)uStack_620) {
              lVar49 = 0;
              do {
                uVar52 = *(ushort *)(*(longlong *)(local_1d8 + lVar48 * 0x18) + lVar49);
                uVar45 = (ulonglong)uVar52;
                uVar46 = *(ushort *)((longlong)local_628 + lVar49);
                if (uVar52 == uVar46) {
                  if (uVar52 == 0) break;
                }
                else {
                  pLVar41 = (LARGE_INTEGER *)(ulonglong)(uint)(uVar46 | uVar52);
                  if (0x7f < (uVar46 | uVar52)) goto LAB_142931f6b;
                  pLVar41 = (LARGE_INTEGER *)&DAT_149e05da0;
                  uVar52 = (ushort)(byte)(&DAT_149e05da0)[uVar45];
                  uVar53 = (ulonglong)uVar46;
                  uVar46 = (ushort)(byte)(&DAT_149e05da0)[uVar53];
                  if ((&DAT_149e05da0)[uVar45] != (&DAT_149e05da0)[uVar53]) goto LAB_142931f6b;
                }
                lVar49 = lVar49 + 2;
              } while( true );
            }
          }
          else if (iVar42 + (int)uStack_620 != 1) goto LAB_142931f16;
          goto LAB_142931f7a;
        }
      }
LAB_142931f75:
      iVar16 = -1;
LAB_142931f7a:
      if (iVar44 < 1) {
        uVar55 = 0;
      }
      else {
        puVar38 = local_628;
        if ((int)uStack_620 == 0) {
          puVar38 = &DAT_149dfb77a;
        }
        lVar48 = 0;
        uVar45 = 0;
        do {
          uVar55 = ((uint)(0x19 < (ushort)puVar38[lVar48] - 0x61) * 0x20 +
                   (uint)(ushort)puVar38[lVar48]) - 0x20;
          pLVar41 = (LARGE_INTEGER *)(ulonglong)uVar55;
          uVar37 = (uint)(uVar45 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar45 ^ uVar55) & 0xff) * 4);
          uVar55 = uVar37 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar37 & 0xff ^ uVar55 >> 8 & 0xff) * 4);
          uVar45 = (ulonglong)uVar55;
          lVar48 = lVar48 + 1;
        } while (iVar44 != (int)lVar48);
      }
      if (local_220 != local_1f4) {
        puVar32 = local_1e8;
        if (local_1e8 == (undefined1 *)0x0) {
          puVar32 = local_1f0;
        }
        DVar18 = *(DWORD *)(puVar32 + (ulonglong)(local_1e0 - 1U & uVar55) * 4);
        if (DVar18 != 0xffffffff) {
LAB_142932032:
          lVar48 = (longlong)(int)DVar18;
          iVar42 = *(int *)(local_228 + 8 + lVar48 * 0x18);
          if (iVar42 == (int)uStack_620) {
            if (1 < (int)uStack_620) {
              lVar49 = 0;
              do {
                uVar52 = *(ushort *)(*(longlong *)(local_228 + lVar48 * 0x18) + lVar49);
                uVar45 = (ulonglong)uVar52;
                uVar46 = *(ushort *)((longlong)local_628 + lVar49);
                if (uVar52 == uVar46) {
                  if (uVar52 == 0) break;
                }
                else {
                  pLVar41 = (LARGE_INTEGER *)(ulonglong)(uint)(uVar46 | uVar52);
                  if (0x7f < (uVar46 | uVar52)) goto LAB_1429320ab;
                  pLVar41 = (LARGE_INTEGER *)&DAT_149e05da0;
                  uVar52 = (ushort)(byte)(&DAT_149e05da0)[uVar45];
                  uVar53 = (ulonglong)uVar46;
                  uVar46 = (ushort)(byte)(&DAT_149e05da0)[uVar53];
                  if ((&DAT_149e05da0)[uVar45] != (&DAT_149e05da0)[uVar53]) goto LAB_1429320ab;
                }
                lVar49 = lVar49 + 2;
              } while( true );
            }
          }
          else if (iVar42 + (int)uStack_620 != 1) goto LAB_14293204c;
          goto LAB_1429320bc;
        }
      }
LAB_1429320b7:
      DVar18 = 0xffffffff;
LAB_1429320bc:
      local_950 = pLVar29;
      if (iVar16 != -1) {
        lVar47 = lVar47 + *(longlong *)(LVar28.QuadPart + 0xf0);
        *(longlong *)(LVar28.QuadPart + 0xf0) = lVar47;
        (**(code **)(**(longlong **)(LVar28.QuadPart + 0xe0) + 0x40))
                  (*(longlong **)(LVar28.QuadPart + 0xe0),lVar47);
        pLVar29 = local_950;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c872ef8) &&
           (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
          FUN_1459825b0(&DAT_14c872ee0);
          atexit(FUN_1427868a5);
          _Init_thread_footer(&DAT_14c872ef8);
        }
        puVar54 = local_940;
        puVar38 = &DAT_149dfb77a;
        if ((int)uStack_620 != 0) {
          puVar38 = local_628;
        }
        FUN_140047918(&DAT_14c872ee0,L"FBuildPatchFileConstructor: Skipping completed file %s",
                      puVar38);
        lVar47 = (longlong)(int)pLVar29[10].s.LowPart;
        if (lVar47 != 0) {
          lVar48 = pLVar29[9].QuadPart;
          lVar47 = lVar47 * 0x18;
          pLVar41 = (LARGE_INTEGER *)CONCAT71((int7)((ulonglong)pLVar41 >> 8),1);
          do {
            bVar15 = (**(code **)(**(longlong **)(LVar28.QuadPart + 200) + 0x30))
                               (*(longlong **)(LVar28.QuadPart + 200),lVar48);
            bVar15 = (byte)pLVar41 & bVar15;
            pLVar41 = (LARGE_INTEGER *)CONCAT71((int7)((ulonglong)pLVar41 >> 8),bVar15);
            lVar48 = lVar48 + 0x18;
            lVar47 = lVar47 + -0x18;
          } while (lVar47 != 0);
          if (bVar15 == 0) goto LAB_142931d35;
        }
        goto LAB_142932f9f;
      }
      iVar16 = *(int *)(LVar28.QuadPart + 0x28);
      pLVar41 = (LARGE_INTEGER *)(longlong)iVar16;
      iVar42 = iVar44 + 1 + (uint)(pLVar41 == (LARGE_INTEGER *)0x0);
      local_5b0 = (undefined2 *)0x0;
      pvVar57 = *(void **)(LVar28.QuadPart + 0x20);
      local_5a8 = iVar16;
      if (iVar42 == 0 && iVar16 == 0) {
        local_5a4 = 0;
      }
      else {
        iVar36 = iVar42 + iVar16;
        if (iVar42 < 0) {
LAB_142933ff3:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar36);
        }
        FUN_1446dd670(&local_5b0,iVar36,0);
        if (iVar16 != 0) {
          pLVar41 = (LARGE_INTEGER *)((longlong)pLVar41 * 2);
          memcpy(local_5b0,pvVar57,(size_t)pLVar41);
        }
      }
      FUN_1401aebe8(&local_5b0,local_628,iVar44);
      pLVar29 = local_950;
      local_108 = (undefined2 *)0xefcdab8967452301;
      uStack_100 = 0x1032547698badcfe;
      local_f8 = 0xc3d2e1f0;
      local_f0 = 0;
      local_128 = ZEXT816(0);
      local_118 = 0;
      bVar58 = false;
      if (1 < (int)local_950[3].s.LowPart) goto LAB_142932f77;
      if (DVar18 == 0xffffffff) {
LAB_1429321c4:
        uVar45 = 0;
        pLVar41 = (LARGE_INTEGER *)0x0;
      }
      else {
        plVar20 = (longlong *)FUN_14054d1d4();
        puVar38 = &DAT_149dfb77a;
        if (local_5a8 != 0) {
          puVar38 = local_5b0;
        }
        plVar20 = (longlong *)(**(code **)(*plVar20 + 0x18))(plVar20,puVar38,0);
        if (plVar20 == (longlong *)0x0) goto LAB_1429321c4;
        local_5c8.QuadPart = 0;
        uStack_5c0 = 0;
        local_91c = DVar18;
        FUN_144893a1c(&local_5c8,0x400000);
        FUN_140393c76(&local_5c8,0x400000,1);
        lVar47 = (**(code **)(*plVar20 + 0x30))(plVar20);
        if ((int)pLVar29[10].s.LowPart < 1) {
          uVar45 = 0;
          pLVar41 = (LARGE_INTEGER *)0x0;
        }
        else {
          uVar45 = 0;
          pLVar41 = (LARGE_INTEGER *)0x0;
          do {
            if (*(int *)(LVar28.QuadPart + 0x70) != 0) break;
            uVar53 = (ulonglong)*(uint *)(pLVar29[9].QuadPart + uVar45 * 0x18 + 0x14);
            pLVar31 = (LARGE_INTEGER *)((longlong)pLVar41 + uVar53);
            if (lVar47 < (longlong)pLVar31) break;
            lVar48 = pLVar29[9].QuadPart + uVar45 * 0x18;
            FUN_140393c76(&local_5c8,uVar53,0);
            local_5e8.QuadPart = 0;
            LStack_5e0 = (LARGE_INTEGER)0x0;
            local_5d8 = 0;
            (**(code **)(**(longlong **)(LVar28.QuadPart + 0xe0) + 0x60))();
            QueryPerformanceCounter(&local_5a0);
            local_5e8 = local_5a0;
            (**(code **)(*plVar20 + 0x170))
                      (plVar20,local_5c8.QuadPart,*(undefined4 *)(lVar48 + 0x14));
            QueryPerformanceCounter(&local_5a0);
            LStack_5e0 = local_5a0;
            local_5d8 = (ulonglong)*(uint *)(lVar48 + 0x14);
            FUN_140c54e34(&local_108,local_5c8.QuadPart,*(undefined4 *)(lVar48 + 0x14));
            (**(code **)(**(longlong **)(LVar28.QuadPart + 0xe0) + 0x68))
                      (*(longlong **)(LVar28.QuadPart + 0xe0),&local_5e8);
            (**(code **)(**(longlong **)(LVar28.QuadPart + 200) + 0x30))
                      (*(longlong **)(LVar28.QuadPart + 200),lVar48);
            *(ulonglong *)(LVar28.QuadPart + 0xf0) =
                 (ulonglong)*(uint *)(lVar48 + 0x14) + *(longlong *)(LVar28.QuadPart + 0xf0);
            (**(code **)(**(longlong **)(LVar28.QuadPart + 0xe0) + 0x40))();
            plVar25 = *(longlong **)(LVar28.QuadPart + 0xe0);
            (**(code **)(*plVar20 + 0x28))(plVar20);
            (**(code **)(*plVar25 + 0x28))(plVar25,&local_628);
            while ((*(int *)(LVar28.QuadPart + 0x6c) != 0 && (*(int *)(LVar28.QuadPart + 0x70) == 0)
                   )) {
              FUN_14000f986(0x3f000000);
            }
            uVar45 = uVar45 + 1;
            pLVar41 = pLVar31;
            pLVar29 = local_950;
          } while ((longlong)uVar45 < (longlong)(int)local_950[10].s.LowPart);
        }
        (**(code **)(*plVar20 + 0x1f8))(plVar20);
        if ((longlong *)local_5c8.QuadPart != (longlong *)0x0) {
          FUN_1400020a8();
        }
        (**(code **)*plVar20)(plVar20,1);
      }
      if (*(char *)(LVar28.QuadPart + 0x69) == '\0') {
        *(undefined1 *)(LVar28.QuadPart + 0x69) = 1;
        LVar30.QuadPart = FUN_146b30510(LVar28.QuadPart,pLVar29,pLVar41);
        if (*(char *)(LVar28.QuadPart + 0x60) == '\x01') {
          LVar30.QuadPart = FUN_146b305ea(LVar28.QuadPart,local_8e8);
        }
        local_5c8.QuadPart = 0;
        local_5e8.QuadPart = 0;
        local_5a0.QuadPart = 0;
        cVar13 = FUN_145b0052c(local_938,&local_5e8,&local_5a0);
        if (cVar13 != '\0') {
          local_5c8 = local_5a0;
        }
        ((LARGE_INTEGER *)(LVar28.QuadPart + 0x100))->QuadPart = (LONGLONG)local_5c8;
        ((LARGE_INTEGER *)(LVar28.QuadPart + 0xf8))->QuadPart = (LONGLONG)LVar30;
        local_5e8.QuadPart = 0;
        local_5c8.QuadPart = 0;
        cVar13 = FUN_145b0052c(local_938,&local_5e8,&local_5c8);
        if ((cVar13 == '\0') || ((ulonglong)local_5c8 < (ulonglong)LVar30)) {
          plVar20 = *(longlong **)(LVar28.QuadPart + 0xd0);
          local_998 = (LARGE_INTEGER *)0x0;
          FUN_146b8ca07(&local_5e8,local_938,LVar30.QuadPart);
          bVar58 = false;
          local_998 = &local_5e8;
          (**(code **)(*plVar20 + 0x38))(plVar20,0xb,&DAT_149f2f964);
          goto LAB_142932f77;
        }
      }
      if (*(char *)(LVar28.QuadPart + 0x68) == '\0') {
        *(undefined1 *)(LVar28.QuadPart + 0x68) = 1;
        (**(code **)(**(longlong **)(LVar28.QuadPart + 0xe0) + 0x10))();
      }
      local_5d8 = 0;
      local_5e8.QuadPart = 0;
      LStack_5e0 = (LARGE_INTEGER)0x0;
      local_5a0.QuadPart = LVar28.QuadPart;
      (**(code **)(**(longlong **)(LVar28.QuadPart + 0xe0) + 0x50))();
      QueryPerformanceCounter(&local_5c8);
      local_5e8 = local_5c8;
      puVar38 = &DAT_149dfb77a;
      if (local_5a8 != 0) {
        puVar38 = local_5b0;
      }
      (**(code **)(**(longlong **)(LVar28.QuadPart + 0xb0) + 0x50))
                (*(longlong **)(LVar28.QuadPart + 0xb0),&local_5f0,puVar38);
      DVar18 = GetLastError();
      QueryPerformanceCounter(&local_5c8);
      LStack_5e0 = local_5c8;
      local_5d8 = 0;
      (**(code **)(**(longlong **)(LVar28.QuadPart + 0xe0) + 0x58))
                (*(longlong **)(LVar28.QuadPart + 0xe0),&local_5e8);
      if (local_5f0 == (longlong *)0x0) {
        cVar13 = (**(code **)(**(longlong **)(LVar28.QuadPart + 0xd0) + 8))();
joined_r0x00014293269e:
        if (cVar13 == '\0') {
          plVar20 = *(longlong **)(LVar28.QuadPart + 0xd8);
          FUN_140056680(&local_5c8,L"Could Not Create File");
          (**(code **)(*plVar20 + 0x20))(plVar20,&local_628,DVar18,&local_5c8);
          if ((longlong *)local_5c8.QuadPart != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        pLVar41 = *(LARGE_INTEGER **)(LVar28.QuadPart + 0xd0);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = 0;
          *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
          DAT_14c844840[2] = -1;
          DAT_14c844840[3] = 0;
          DAT_14c844840[4] = 0;
          DAT_14c844840[5] = 0;
          if (DAT_14c844840 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
        local_5c8.QuadPart = (LONGLONG)DAT_14c844840;
        if (DAT_14c844840 != (longlong *)0x0) {
          (**(code **)(*DAT_14c844840 + 8))();
        }
        uStack_5c0 = CONCAT44(uStack_5c0._4_4_,DAT_14c844848);
        lVar47 = pLVar41->QuadPart;
        puVar51 = &DAT_149f2f9b8;
        goto LAB_142932f33;
      }
      pLVar31 = (LARGE_INTEGER *)(**(code **)(*local_5f0 + 0x28))();
      if (pLVar31 != pLVar41) {
        (**(code **)(**(longlong **)(LVar28.QuadPart + 0xe0) + 0x50))();
        QueryPerformanceCounter(&local_5c8);
        local_5e8 = local_5c8;
        (**(code **)(*local_5f0 + 0x1a0))(local_5f0,pLVar41);
        pLVar29 = local_950;
        QueryPerformanceCounter(&local_5c8);
        LStack_5e0 = local_5c8;
        local_5d8 = 0;
        (**(code **)(**(longlong **)(LVar28.QuadPart + 0xe0) + 0x58))
                  (*(longlong **)(LVar28.QuadPart + 0xe0),&local_5e8);
      }
      plVar20 = local_948;
      local_91c = DVar18;
      if (((int)uVar45 < (int)pLVar29[10].s.LowPart) && (*(int *)(LVar28.QuadPart + 0x70) == 0)) {
        uVar45 = uVar45 & 0xffffffff;
        do {
          lVar47 = pLVar29[9].QuadPart;
          lVar48 = (longlong)*(int *)(LVar28.QuadPart + 0x148);
          if ((uint)(*(int *)(LVar28.QuadPart + 0x14c) - (int)plVar20[lVar48 * 2 + 1]) <
              *(uint *)(lVar47 + uVar45 * 0x18 + 0x14)) {
            cVar13 = FUN_14292748a(&local_5a0,local_5f0,&local_108);
            if (cVar13 == '\0') {
              plVar25 = *(longlong **)(LVar28.QuadPart + 0xd8);
              FUN_140056680(&local_5c8,L"Serialization Error");
              (**(code **)(*plVar25 + 0x20))(plVar25,&local_628,0xffffffff);
              if ((longlong *)local_5c8.QuadPart != (longlong *)0x0) {
                FUN_1400020a8();
              }
              cVar14 = '\x04';
              goto LAB_1429329e4;
            }
            lVar48 = (longlong)*(int *)(LVar28.QuadPart + 0x148);
          }
          lVar47 = lVar47 + uVar45 * 0x18;
          (**(code **)(**(longlong **)(LVar28.QuadPart + 0xe0) + 0x18))
                    (*(longlong **)(LVar28.QuadPart + 0xe0),lVar47);
          plVar25 = (longlong *)
                    (**(code **)(**(longlong **)(LVar28.QuadPart + 0xb8) + 8))
                              (*(longlong **)(LVar28.QuadPart + 0xb8),lVar47);
          if (plVar25 == (longlong *)0x0) {
            cVar14 = '\x03';
            cVar13 = '\0';
          }
          else {
            plVar20 = plVar20 + lVar48 * 2;
            (**(code **)(*plVar25 + 8))(plVar25,&local_5c8,0);
            pvVar57 = (void *)((ulonglong)*(uint *)(lVar47 + 0x10) + local_5c8.QuadPart);
            uVar55 = *(uint *)(lVar47 + 0x14);
            iVar44 = (int)plVar20[1];
            *(uint *)(plVar20 + 1) = uVar55 + iVar44;
            if ((uint)(*(int *)((longlong)plVar20 + 0xc) - iVar44) < uVar55) {
              FUN_1447403be(plVar20,iVar44);
LAB_1429328f4:
              memcpy((void *)((longlong)iVar44 + *plVar20),pvVar57,(longlong)(int)uVar55);
            }
            else if (uVar55 != 0) goto LAB_1429328f4;
            (**(code **)(*plVar25 + 0x18))(plVar25);
            cVar13 = (**(code **)(**(longlong **)(LVar28.QuadPart + 200) + 0x30))
                               (*(longlong **)(LVar28.QuadPart + 200),lVar47);
            cVar14 = (cVar13 == '\0') * '\x05';
            plVar20 = local_948;
          }
          plVar25 = *(longlong **)(LVar28.QuadPart + 0xe0);
          (**(code **)(*local_5f0 + 0x28))();
          (**(code **)(*plVar25 + 0x28))(plVar25,&local_628);
          if (cVar13 == '\0') {
            cVar13 = (**(code **)(**(longlong **)(LVar28.QuadPart + 0xd0) + 8))();
            if (cVar13 == '\0') {
              if (cVar14 == '\x05') {
                plVar25 = *(longlong **)(LVar28.QuadPart + 0xd8);
                FUN_140056680(&local_5c8,L"Tracking Error");
                (**(code **)(*plVar25 + 0x20))(plVar25,&local_628,0xffffffff);
                if ((longlong *)local_5c8.QuadPart != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                cVar14 = '\x05';
              }
              else if (cVar14 == '\x03') {
                plVar25 = *(longlong **)(LVar28.QuadPart + 0xd8);
                FUN_140056680(&local_5c8,L"Missing Chunk");
                (**(code **)(*plVar25 + 0x20))(plVar25,&local_628,0xffffffff);
                if ((longlong *)local_5c8.QuadPart != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                cVar14 = '\x03';
              }
            }
            goto LAB_1429329e4;
          }
          *(ulonglong *)(LVar28.QuadPart + 0xf0) =
               (ulonglong)*(uint *)(lVar47 + 0x14) + *(longlong *)(LVar28.QuadPart + 0xf0);
          (**(code **)(**(longlong **)(LVar28.QuadPart + 0xe0) + 0x40))();
          pLVar29 = local_950;
          iVar44 = *(int *)(LVar28.QuadPart + 0x6c);
          while ((iVar44 != 0 && (*(int *)(LVar28.QuadPart + 0x70) == 0))) {
            FUN_14000f986(0x3f000000);
            iVar44 = *(int *)(LVar28.QuadPart + 0x6c);
          }
          uVar45 = uVar45 + 1;
          if (((longlong)(int)pLVar29[10].s.LowPart <= (longlong)uVar45) ||
             (*(int *)(LVar28.QuadPart + 0x70) != 0)) goto LAB_1429329e4;
        } while( true );
      }
      cVar14 = '\0';
LAB_1429329e4:
      if ((int)plVar20[(longlong)*(int *)(LVar28.QuadPart + 0x148) * 2 + 1] != 0) {
        cVar13 = FUN_14292748a(&local_5a0,local_5f0,&local_108);
        if (cVar13 == '\0') {
          plVar20 = *(longlong **)(LVar28.QuadPart + 0xd8);
          FUN_140056680(&local_5c8,L"Serialization Error");
          (**(code **)(*plVar20 + 0x20))(plVar20,&local_628,0xffffffff);
          if ((longlong *)local_5c8.QuadPart != (longlong *)0x0) {
            FUN_1400020a8();
          }
          cVar14 = '\x04';
        }
      }
      if (*(char *)(LVar28.QuadPart + 0x171) == '\x01') {
        (**(code **)(**(longlong **)(LVar28.QuadPart + 0x150) + 0x20))
                  (*(longlong **)(LVar28.QuadPart + 0x150),0xffffffff,0);
        *(undefined1 *)(LVar28.QuadPart + 0x171) = 0;
      }
      bVar15 = *(byte *)((longlong)local_5f0 + 0x29);
      pLVar41 = (LARGE_INTEGER *)(**(code **)(*local_5f0 + 0x28))();
      (**(code **)(**(longlong **)(LVar28.QuadPart + 0xe0) + 0x50))();
      QueryPerformanceCounter(&local_5c8);
      local_5e8 = local_5c8;
      cVar13 = (**(code **)(*local_5f0 + 0x1f8))();
      plVar20 = local_5f0;
      if (local_5f0 != (longlong *)0x0) {
        local_5f0 = (longlong *)0x0;
        (**(code **)*plVar20)(plVar20,1);
      }
      QueryPerformanceCounter(&local_5c8);
      LStack_5e0 = local_5c8;
      local_5d8 = 0;
      (**(code **)(**(longlong **)(LVar28.QuadPart + 0xe0) + 0x58))
                (*(longlong **)(LVar28.QuadPart + 0xe0),&local_5e8);
      pLVar29 = local_950;
      if (cVar14 != '\0' || cVar13 != '\0') {
        if ((bVar15 & 2) != 0) {
          if (cVar14 == '\x04') goto LAB_142932c31;
          goto LAB_142932cbc;
        }
        FUN_140c54d7a(&local_108);
        local_128 = local_a4;
        local_118 = local_94;
        if (*(undefined1 (*) [16])(pLVar29 + 4) != local_a4 || pLVar29[6].s.LowPart != local_94) {
          cVar13 = (**(code **)(**(longlong **)(LVar28.QuadPart + 0xd0) + 8))();
          if (cVar13 == '\0') {
            plVar20 = *(longlong **)(LVar28.QuadPart + 0xd8);
            FUN_140056680(&local_5c8,L"Serialised Verify Fail");
            (**(code **)(*plVar20 + 0x20))(plVar20,&local_628,0xffffffff);
            if ((longlong *)local_5c8.QuadPart != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          pLVar41 = *(LARGE_INTEGER **)(LVar28.QuadPart + 0xd0);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
            DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
            DAT_14c844840[1] = 0;
            *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
            DAT_14c844840[2] = -1;
            DAT_14c844840[3] = 0;
            DAT_14c844840[4] = 0;
            DAT_14c844840[5] = 0;
            if (DAT_14c844840 != (longlong *)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
              UNLOCK();
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
          }
          local_5c8.QuadPart = (LONGLONG)DAT_14c844840;
          if (DAT_14c844840 != (longlong *)0x0) {
            (**(code **)(*DAT_14c844840 + 8))();
          }
          uStack_5c0 = CONCAT44(uStack_5c0._4_4_,DAT_14c844848);
          lVar47 = pLVar41->QuadPart;
          puVar51 = &DAT_149f2f706;
          goto LAB_142932f33;
        }
        (**(code **)(**(longlong **)(LVar28.QuadPart + 0xb8) + 0x28))();
        bVar58 = true;
        goto LAB_142932f60;
      }
LAB_142932c31:
      local_5c8.QuadPart = 0;
      local_5f8 = 0;
      cVar13 = FUN_145b0052c(local_938,&local_5c8,&local_5f8);
      cVar14 = '\x04';
      if ((cVar13 != '\0') && (local_5f8 < (uint)(*(int *)(LVar28.QuadPart + 0x14c) * 2))) {
        lVar47 = FUN_146b30510(LVar28.QuadPart,pLVar29,pLVar41);
        if (*(char *)(LVar28.QuadPart + 0x60) == '\x01') {
          lVar47 = FUN_146b305ea(LVar28.QuadPart,local_8e8);
        }
        *(ulonglong *)(LVar28.QuadPart + 0x100) = local_5f8;
        *(longlong *)(LVar28.QuadPart + 0xf8) = lVar47;
        cVar14 = '\x02';
      }
LAB_142932cbc:
      cVar13 = (**(code **)(**(longlong **)(LVar28.QuadPart + 0xd0) + 8))();
      switch(cVar14) {
      case '\x01':
        DVar18 = local_91c;
        goto joined_r0x00014293269e;
      case '\x02':
        pLVar29 = *(LARGE_INTEGER **)(LVar28.QuadPart + 0xd0);
        local_998 = (LARGE_INTEGER *)0x0;
        FUN_146b8ca07(&local_5c8,local_938,*(longlong *)(LVar28.QuadPart + 0xf8));
        lVar47 = pLVar29->QuadPart;
        uVar27 = 0xb;
        puVar51 = &DAT_149f2f9b8;
        goto LAB_142933143;
      case '\x03':
        pLVar29 = *(LARGE_INTEGER **)(LVar28.QuadPart + 0xd0);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = 0;
          *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
          DAT_14c844840[2] = -1;
          DAT_14c844840[3] = 0;
          DAT_14c844840[4] = 0;
          DAT_14c844840[5] = 0;
          if (DAT_14c844840 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
        local_5c8.QuadPart = (LONGLONG)DAT_14c844840;
        if (DAT_14c844840 != (longlong *)0x0) {
          (**(code **)(*DAT_14c844840 + 8))();
        }
        uStack_5c0 = CONCAT44(uStack_5c0._4_4_,DAT_14c844848);
        lVar47 = pLVar29->QuadPart;
        uVar27 = 2;
        puVar51 = &DAT_149f2f970;
        pLVar41 = pLVar29;
LAB_142933143:
        local_998 = &local_5c8;
        bVar58 = false;
        (**(code **)(lVar47 + 0x38))(pLVar29,uVar27,puVar51);
        goto LAB_142932f60;
      case '\x04':
        pLVar41 = *(LARGE_INTEGER **)(LVar28.QuadPart + 0xd0);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = 0;
          *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
          DAT_14c844840[2] = -1;
          DAT_14c844840[3] = 0;
          DAT_14c844840[4] = 0;
          DAT_14c844840[5] = 0;
          if (DAT_14c844840 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
        local_5c8.QuadPart = (LONGLONG)DAT_14c844840;
        if (DAT_14c844840 != (longlong *)0x0) {
          (**(code **)(*DAT_14c844840 + 8))();
        }
        uStack_5c0 = CONCAT44(uStack_5c0._4_4_,DAT_14c844848);
        lVar47 = pLVar41->QuadPart;
        puVar51 = &DAT_149f2f700;
        break;
      case '\x05':
        pLVar41 = *(LARGE_INTEGER **)(LVar28.QuadPart + 0xd0);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = 0;
          *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
          DAT_14c844840[2] = -1;
          DAT_14c844840[3] = 0;
          DAT_14c844840[4] = 0;
          DAT_14c844840[5] = 0;
          if (DAT_14c844840 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
        local_5c8.QuadPart = (LONGLONG)DAT_14c844840;
        if (DAT_14c844840 != (longlong *)0x0) {
          (**(code **)(*DAT_14c844840 + 8))();
        }
        uStack_5c0 = CONCAT44(uStack_5c0._4_4_,DAT_14c844848);
        lVar47 = pLVar41->QuadPart;
        puVar51 = &DAT_149f2f96a;
        break;
      default:
        goto switchD_142932ce7_default;
      }
LAB_142932f33:
      local_998 = &local_5c8;
      (**(code **)(lVar47 + 0x38))(pLVar41,2,puVar51);
      puVar38 = &DAT_149dfb77a;
      if (local_5a8 != 0) {
        puVar38 = local_5b0;
      }
      (**(code **)(**(longlong **)(LVar28.QuadPart + 0xb0) + 0x68))
                (*(longlong **)(LVar28.QuadPart + 0xb0),puVar38);
switchD_142932ce7_default:
      bVar58 = false;
LAB_142932f60:
      if (local_5f0 != (longlong *)0x0) {
        (**(code **)*local_5f0)(local_5f0,1);
      }
LAB_142932f77:
      if (local_5b0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      puVar54 = local_940;
      if (bVar58) {
LAB_142932f9f:
        pLVar41 = (LARGE_INTEGER *)CONCAT71((int7)((ulonglong)pLVar41 >> 8),1);
        if (*(int *)(LVar28.QuadPart + 0x50) == 1) {
          iVar44 = (int)uStack_620 + -1;
          if ((int)uStack_620 == 0) {
            iVar44 = 0;
          }
          uVar55 = *(uint *)(LVar28.QuadPart + 0x18);
          iVar16 = iVar44 + 1 + (uint)((longlong)(int)uVar55 == 0);
          local_108 = (undefined2 *)0x0;
          pvVar57 = *(void **)(LVar28.QuadPart + 0x10);
          uStack_100 = CONCAT44(uStack_100._4_4_,uVar55);
          if (iVar16 == 0 && uVar55 == 0) {
            uStack_100 = (ulonglong)uVar55;
          }
          else {
            iVar36 = iVar16 + uVar55;
            if (iVar16 < 0) goto LAB_142933ff3;
            FUN_1446dd670(&local_108,iVar36,0);
            if (uVar55 != 0) {
              memcpy(local_108,pvVar57,(longlong)(int)uVar55 * 2);
            }
          }
          FUN_1401aebe8(&local_108,local_628,iVar44);
          FUN_1448097c4(&local_108,&DAT_149e01f64,&DAT_149e065c6);
          FUN_1448b5552(&local_108);
          puVar38 = &DAT_149dfb77a;
          if ((int)uStack_100 != 0) {
            puVar38 = local_108;
          }
          cVar13 = (**(code **)(**(longlong **)(LVar28.QuadPart + 0xb0) + 0x80))
                             (*(longlong **)(LVar28.QuadPart + 0xb0),puVar38);
          if (cVar13 != '\0') {
            FUN_1411f311e(puVar54,&local_108);
            plVar20 = (longlong *)FUN_14054d1d4();
            puVar38 = &DAT_149dfb77a;
            if ((int)uStack_100 != 0) {
              puVar38 = local_108;
            }
            local_998 = (LARGE_INTEGER *)((ulonglong)local_998 & 0xffffffffffffff00);
            (**(code **)(*plVar20 + 0x30))(plVar20,puVar38,0);
          }
          if (local_108 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      else {
LAB_142931d35:
        LOCK();
        *(undefined4 *)(LVar28.QuadPart + 0x70) = 1;
        UNLOCK();
        plVar20 = *(longlong **)(LVar28.QuadPart + 0xd0);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
          DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = 0;
          *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
          DAT_14c844840[2] = -1;
          DAT_14c844840[3] = 0;
          DAT_14c844840[4] = 0;
          DAT_14c844840[5] = 0;
          if (DAT_14c844840 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
          puVar54 = local_940;
        }
        local_648.QuadPart = (LONGLONG)DAT_14c844840;
        if (DAT_14c844840 != (longlong *)0x0) {
          (**(code **)(*DAT_14c844840 + 8))();
        }
        local_640 = DAT_14c844848;
        local_998 = &local_648;
        pLVar41 = (LARGE_INTEGER *)0x0;
        (**(code **)(*plVar20 + 0x38))(plVar20,2,&DAT_149f2f964);
      }
      (**(code **)(**(longlong **)(LVar28.QuadPart + 0xe0) + 0x30))
                (*(longlong **)(LVar28.QuadPart + 0xe0),&local_628,(ulonglong)pLVar41 & 0xffffffff);
      while ((*(int *)(LVar28.QuadPart + 0x6c) != 0 && (*(int *)(LVar28.QuadPart + 0x70) == 0))) {
        FUN_14000f986(0x3f000000);
      }
      cVar13 = FUN_146b3039c(LVar28.QuadPart,&local_628);
    } while (cVar13 != '\0');
  }
  if (*(char *)(LVar28.QuadPart + 0x68) == '\0') {
    (**(code **)(**(longlong **)(LVar28.QuadPart + 0xe0) + 0x10))();
  }
  (**(code **)(**(longlong **)(LVar28.QuadPart + 0xe0) + 0x38))();
  if (local_628 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar47 = local_8d0;
  local_2b0 = 0;
  if (local_2b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_2f8);
  FUN_146b3043e(local_2a8);
  if ((undefined2 *)local_618.QuadPart != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_608 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_146b3441a(local_8d8);
  if (local_900 != (undefined2 *)0x0) {
    FUN_14480f766(puVar54);
  }
  lpCriticalSection = local_8f0;
  EnterCriticalSection(local_8f0);
  lVar48 = local_958;
  *(longlong *)(local_958 + 0x2d0) = *(longlong *)(LVar28.QuadPart + 0xf8);
  *(longlong *)(local_958 + 0x2d8) = *(longlong *)(LVar28.QuadPart + 0x100);
  LeaveCriticalSection(lpCriticalSection);
  (**(code **)(**(longlong **)(lVar48 + 0x600) + 0x20))(*(longlong **)(lVar48 + 0x600),local_918);
  FUN_146b3550c(&local_8b0);
  if (local_518 != (undefined1 *)0x0) {
    pppuVar34 = &local_4f8;
    if (local_508 != (undefined ***)0x0) {
      pppuVar34 = local_508;
    }
    (*(code *)(*pppuVar34)[2])();
  }
  puVar23 = local_8f8;
  if ((longlong *)LVar28.QuadPart != (longlong *)0x0) {
    (*(code *)**(undefined8 **)LVar28)(LVar28.QuadPart,1);
  }
  FUN_146b2fb92(&local_820);
  if (local_7b0 != (undefined8 *)0x0) {
    (**(code **)*local_7b0)(local_7b0,1);
  }
  puVar24 = local_8e0;
  plVar20 = local_930;
  lVar48 = local_958;
  if (local_7a8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (puVar24 != (undefined8 *)0x0) {
    (**(code **)*puVar24)(puVar24,1);
  }
  if (local_8c8 != (longlong *)0x0) {
    (**(code **)(*local_8c8 + 8))(local_8c8,1);
  }
  local_440 = 0;
  if (local_448 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(local_488);
  if (local_6f8 != (longlong *)0x0) {
    (**(code **)*local_6f8)(local_6f8,1);
  }
  if (plVar20 != (longlong *)0x0) {
    (**(code **)*plVar20)(plVar20,1);
  }
  if (local_908 != (longlong *)0x0) {
    (**(code **)*local_908)(local_908,1);
  }
  if (local_910 != (longlong *)0x0) {
    (**(code **)*local_910)(local_910,1);
  }
  if (local_8c0 != (undefined8 *)0x0) {
    (**(code **)*local_8c0)(local_8c0,1);
  }
  local_340 = 0;
  if (local_348 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(local_388);
  if (local_928 != (longlong *)0x0) {
    (**(code **)*local_928)(local_928,1);
  }
  if (puVar23 != (undefined8 *)0x0) {
    (**(code **)*puVar23)(puVar23,1);
  }
  EnterCriticalSection(lpCriticalSection);
  uVar19 = (**(code **)(**(longlong **)(lVar48 + 0x5b8) + 0x28))();
  *(undefined4 *)(lVar48 + 0x18c) = uVar19;
  uVar19 = (**(code **)(**(longlong **)(lVar48 + 0x5b8) + 0x30))();
  *(undefined4 *)(lVar48 + 0x198) = uVar19;
  uVar19 = (**(code **)(**(longlong **)(lVar48 + 0x5d0) + 0x68))();
  *(undefined4 *)(lVar48 + 0x19c) = uVar19;
  uVar19 = (**(code **)(**(longlong **)(lVar48 + 0x5d0) + 0x70))();
  *(undefined4 *)(lVar48 + 0x1a0) = uVar19;
  uVar19 = (**(code **)(**(longlong **)(lVar48 + 0x5d0) + 0x78))();
  *(undefined4 *)(lVar48 + 0x2a4) = uVar19;
  uVar19 = (**(code **)(**(longlong **)(lVar48 + 0x5c8) + 0x30))();
  *(undefined4 *)(lVar48 + 400) = uVar19;
  uVar19 = (**(code **)(**(longlong **)(lVar48 + 0x5c0) + 0x20))();
  *(undefined4 *)(lVar48 + 0x194) = uVar19;
  uVar19 = (**(code **)(**(longlong **)(lVar48 + 0x5c8) + 0x38))();
  *(undefined4 *)(lVar48 + 0x1a4) = uVar19;
  uVar19 = (**(code **)(**(longlong **)(lVar48 + 0x580) + 0x40))();
  *(undefined4 *)(lVar48 + 0x1a8) = uVar19;
  uVar19 = (**(code **)(**(longlong **)(lVar48 + 0x588) + 0x28))();
  *(undefined4 *)(lVar48 + 0x1ac) = uVar19;
  uVar19 = (**(code **)(**(longlong **)(lVar48 + 0x588) + 0x30))();
  *(undefined4 *)(lVar48 + 0x1b0) = uVar19;
  uVar19 = (**(code **)(**(longlong **)(lVar48 + 0x5c0) + 0x28))();
  *(undefined4 *)(lVar48 + 0x1b4) = uVar19;
  (**(code **)(**(longlong **)(lVar48 + 0x5d0) + 0x88))(*(longlong **)(lVar48 + 0x5d0),local_2a8);
  *(undefined4 *)(lVar48 + 0x2a8) = *(undefined4 *)((longlong)local_2a8 + 0x10);
  *(undefined4 *)(lVar48 + 0x2ac) = *(undefined4 *)((longlong)local_2a8 + 0xc);
  *(undefined4 *)(lVar48 + 0x2b0) = *(undefined4 *)((longlong)local_2a8 + 8);
  *(undefined4 *)(lVar48 + 0x2b4) = *(undefined4 *)((longlong)local_2a8 + 4);
  *(undefined4 *)(lVar48 + 0x2b8) = *(undefined4 *)local_2a8;
  uVar19 = (**(code **)(**(longlong **)(lVar48 + 0x5d0) + 0x98))();
  *(undefined4 *)(lVar48 + 0x1c0) = uVar19;
  if (local_2a8 != (undefined1  [8])0x0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection(lpCriticalSection);
  uVar55 = (**(code **)(**(longlong **)(lVar48 + 0x558) + 8))();
  if ((char)uVar55 == '\0') {
    local_2a8._0_4_ = 0x3f800000;
    local_108._0_4_ = 1;
    FUN_146b34248(lVar47,&local_108,local_2a8);
    local_2a8._0_4_ = 0x3f800000;
    local_108._0_4_ = 2;
    FUN_146b34248(lVar47,&local_108,local_2a8);
    local_2a8._0_4_ = 0x3f800000;
    local_108._0_4_ = 3;
    FUN_146b34248(lVar47,&local_108,local_2a8);
    local_2a8._0_4_ = 0x3f800000;
    local_108 = (undefined2 *)CONCAT44(local_108._4_4_,4);
    FUN_146b34248(lVar47,&local_108,local_2a8);
    FUN_146b3441a(lVar48 + 0x618);
  }
  uVar45 = (ulonglong)uVar55 ^ 1;
LAB_14293005f:
  if ((local_80 ^ (ulonglong)auStack_9b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar45 & 0xffffffff;
code_r0x0001429306d6:
  iVar42 = (uint)(byte)(&DAT_149e05da0)[uVar52] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar46];
LAB_1429306d9:
  if (iVar42 == 0) goto LAB_142930714;
LAB_142930665:
  iVar42 = *(int *)(lVar48 + 0x10 + lVar49 * 0x18);
  if (iVar42 == -1) goto LAB_1429306f6;
  goto LAB_142930647;
code_r0x000142933c40:
  iVar44 = (uint)(byte)(&DAT_149e05da0)[uVar52] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar46];
LAB_142933c43:
  if (iVar44 == 0) {
LAB_142933c4f:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
      FUN_1459825b0(&DAT_14c872ee0);
      atexit(FUN_1427868a5);
      _Init_thread_footer(&DAT_14c872ef8);
    }
    puVar38 = &DAT_149dfb77a;
    if (pLVar41[1].s.LowPart != 0) {
      puVar38 = (undefined2 *)pLVar41->QuadPart;
    }
    FUN_140047918(&DAT_14c872ee0,L"FBuildPatchFileConstructor: Deleting incompatible stage file %s",
                  puVar38);
    plVar20 = *(longlong **)(LVar28.QuadPart + 0xb0);
    iVar44 = pLVar41[1].s.LowPart - 1;
    if (pLVar41[1].s.LowPart == 0) {
      iVar44 = 0;
    }
    uVar55 = *(uint *)(LVar28.QuadPart + 0x28);
    iVar16 = iVar44 + 1 + (uint)((longlong)(int)uVar55 == 0);
    local_108 = (undefined2 *)0x0;
    pvVar57 = *(void **)(LVar28.QuadPart + 0x20);
    uStack_100 = CONCAT44(uStack_100._4_4_,uVar55);
    if (iVar16 == 0 && uVar55 == 0) {
      uStack_100 = (ulonglong)uVar55;
    }
    else {
      iVar36 = iVar16 + uVar55;
      if (iVar16 < 0) goto LAB_142933ff3;
      FUN_1446dd670(&local_108,iVar36,0);
      if (uVar55 != 0) {
        memcpy(local_108,pvVar57,(longlong)(int)uVar55 * 2);
      }
    }
    FUN_1401aebe8(&local_108,pLVar41->QuadPart,iVar44);
    puVar38 = &DAT_149dfb77a;
    if ((int)uStack_100 != 0) {
      puVar38 = local_108;
    }
    (**(code **)(*plVar20 + 0x68))(plVar20,puVar38);
    pLVar29 = local_950;
    puVar54 = local_940;
    if (local_108 != (undefined2 *)0x0) {
      FUN_1400020a8();
      puVar54 = local_940;
    }
    goto LAB_142933d68;
  }
LAB_142933bdc:
  iVar44 = *(int *)(local_188 + 0x10 + lVar47 * 0x18);
  if (iVar44 == -1) goto LAB_142933d68;
  goto LAB_142933bc6;
LAB_142931f6b:
  if (uVar52 == uVar46) goto LAB_142931f7a;
LAB_142931f16:
  iVar16 = *(int *)(local_1d8 + 0x10 + lVar48 * 0x18);
  if (iVar16 == -1) goto LAB_142931f75;
  goto LAB_142931efc;
LAB_1429320ab:
  if (uVar52 == uVar46) goto LAB_1429320bc;
LAB_14293204c:
  DVar18 = *(DWORD *)(local_228 + 0x10 + lVar48 * 0x18);
  if (DVar18 == 0xffffffff) goto LAB_1429320b7;
  goto LAB_142932032;
}



// FUNCTION 1429340be FUN_1429340be body=776 status=ok
// SIG undefined FUN_1429340be(void)

void FUN_1429340be(undefined8 *param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined2 *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78 [2];
  undefined2 *local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = 0;
  uStack_50 = 0;
  plVar4 = (longlong *)FUN_14054d1d4();
  iVar7 = *(int *)(param_1 + 1);
  lVar6 = (longlong)iVar7;
  local_68 = (undefined2 *)0x0;
  pvVar2 = (void *)*param_1;
  uStack_60 = CONCAT44(uStack_60._4_4_,iVar7);
  FUN_1446dd670(&local_68,iVar7 + (uint)(lVar6 == 0) + 2,0);
  if (lVar6 != 0) {
    memcpy(local_68,pvVar2,lVar6 * 2);
  }
  FUN_1401aebe8(&local_68,&DAT_149e060b2,1);
  puVar5 = local_68;
  if ((int)uStack_60 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  local_a8 = 1;
  (**(code **)(*plVar4 + 0x78))(plVar4,&local_58,puVar5,0);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar6 = local_58;
  lVar9 = (longlong)(int)uStack_50;
  if (lVar9 != 0) {
    lVar8 = 0;
    do {
      local_68 = (undefined2 *)0x0;
      uVar1 = *(uint *)(lVar6 + 8 + lVar8);
      pvVar2 = *(void **)(lVar6 + lVar8);
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        uStack_60 = (ulonglong)uVar1;
        iVar7 = 0;
      }
      else {
        FUN_1446dd670(&local_68,uVar1,0);
        memcpy(local_68,pvVar2,(longlong)(int)uVar1 * 2);
        iVar7 = (int)uStack_60;
      }
      iVar3 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar3 = 0;
      }
      iVar7 = *(int *)(param_1 + 1);
      iVar3 = iVar3 + 1 + (uint)((longlong)iVar7 == 0);
      local_88 = (undefined2 *)0x0;
      pvVar2 = (void *)*param_1;
      local_80 = iVar7;
      if (iVar3 == 0 && iVar7 == 0) {
        local_7c = 0;
      }
      else {
        if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar3 + iVar7);
        }
        FUN_1446dd670(&local_88,iVar3 + iVar7,0);
        if (iVar7 != 0) {
          memcpy(local_88,pvVar2,(longlong)iVar7 * 2);
        }
      }
      FUN_1401aebe8(&local_88,local_68);
      puVar5 = &DAT_149dfb77a;
      if (local_80 != 0) {
        puVar5 = local_88;
      }
      FUN_140056680(local_78,puVar5);
      FUN_1429340be(local_78);
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar8 = lVar8 + 0x10;
    } while (lVar9 * 0x10 != lVar8);
  }
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  plVar4 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_1 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_1;
  }
  local_98 = 1;
  local_a8 = 1;
  local_a0 = 0;
  (**(code **)(*plVar4 + 0x80))(plVar4,&local_68,puVar5,&DAT_149e14148);
  if ((int)uStack_60 == 0) {
    plVar4 = (longlong *)FUN_14054d1d4();
    if (*(int *)(param_1 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_1;
    }
    (**(code **)(*plVar4 + 0x60))(plVar4,puVar5,0,1);
    GetLastError();
  }
  FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429343c8 FUN_1429343c8 body=392 status=ok
// SIG undefined FUN_1429343c8(void)

void FUN_1429343c8(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,char param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_138 [44];
  undefined1 local_10c [4];
  longlong local_108;
  ulonglong uStack_100;
  undefined8 local_f0;
  int local_e8;
  longlong *local_e0 [8];
  longlong local_a0;
  undefined4 local_98;
  undefined1 local_80 [72];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_145d323a0(param_1,0);
  if (*(int *)(param_3 + 1) == 0) {
    if (param_6 == '\0') {
      FUN_146b3de84(param_5,local_e0,param_4);
      FUN_146b3e088(param_1,local_e0);
      local_98 = 0;
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
      FUN_1408910a4(local_e0);
    }
    else {
      local_108 = 0;
      uStack_100 = 0;
      (**(code **)(*param_2 + 0x80))(param_2,&local_108);
      uVar1 = 0;
      if ((longlong)(int)uStack_100 != 0) {
        lVar3 = (longlong)(int)uStack_100 * 0xa8;
        lVar2 = local_108;
        do {
          FUN_146b48d3a(local_e0,lVar2);
          FUN_14482b35e(param_1,local_10c,local_80,0);
          FUN_146b48f1e(local_e0);
          lVar2 = lVar2 + 0xa8;
          lVar3 = lVar3 + -0xa8;
        } while (lVar3 != 0);
        uVar1 = uStack_100 & 0xffffffff;
      }
      FUN_146b48f94(local_108,uVar1);
      if (local_108 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    local_f0 = *param_3;
    local_e8 = *(int *)(param_3 + 1);
    FUN_14282d1cc(param_1);
  }
  local_e0[0] = &local_108;
  FUN_146b4d79c(param_1);
  FUN_14482b9e8(param_1);
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142934552 FUN_142934552 body=196 status=ok
// SIG undefined FUN_142934552(void)

undefined4 FUN_142934552(longlong param_1,undefined8 *param_2,DWORD *param_3)

{
  int iVar1;
  undefined4 uVar2;
  DWORD DVar3;
  undefined2 *puVar4;
  
  iVar1 = FUN_146b31f0b();
  *param_3 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x548) + 0x68))
                    (*(longlong **)(param_1 + 0x548),puVar4);
  DVar3 = GetLastError();
  *param_3 = DVar3;
  if (iVar1 != 0 && (char)uVar2 == '\0') {
    do {
      iVar1 = iVar1 + -1;
      FUN_14000f986(0x3f000000);
      puVar4 = &DAT_149dfb77a;
      if (*(int *)(param_2 + 1) != 0) {
        puVar4 = (undefined2 *)*param_2;
      }
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x548) + 0x68))
                        (*(longlong **)(param_1 + 0x548),puVar4);
      DVar3 = GetLastError();
      *param_3 = DVar3;
    } while (((char)uVar2 == '\0') && (iVar1 != 0));
  }
  return uVar2;
}



// FUNCTION 142934616 FUN_142934616 body=1347 status=ok
// SIG undefined FUN_142934616(void)

void FUN_142934616(longlong param_1,longlong *param_2,char param_3)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  ushort uVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined2 *local_78;
  int local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar12 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar12 = 0;
  }
  iVar16 = *(int *)(param_1 + 0x80);
  iVar3 = iVar12 + 1 + (uint)((longlong)iVar16 == 0);
  local_68 = (undefined2 *)0x0;
  pvVar1 = *(void **)(param_1 + 0x78);
  local_60 = iVar16;
  if (iVar3 == 0 && iVar16 == 0) {
    local_5c = 0;
  }
  else {
    iVar8 = iVar3 + iVar16;
    if (iVar3 < 0) goto LAB_142934b39;
    FUN_1446dd670(&local_68,iVar8,0);
    if (iVar16 != 0) {
      memcpy(local_68,pvVar1,(longlong)iVar16 * 2);
    }
  }
  FUN_1401aebe8(&local_68,*param_2,iVar12);
  iVar12 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar12 = 0;
  }
  iVar16 = *(int *)(param_1 + 0xa0);
  iVar3 = iVar12 + 1 + (uint)((longlong)iVar16 == 0);
  local_78 = (undefined2 *)0x0;
  pvVar1 = *(void **)(param_1 + 0x98);
  local_70 = iVar16;
  if (iVar3 == 0 && iVar16 == 0) {
    local_6c = 0;
  }
  else {
    iVar8 = iVar3 + iVar16;
    if (iVar3 < 0) {
LAB_142934b39:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    FUN_1446dd670(&local_78,iVar8,0);
    if (iVar16 != 0) {
      memcpy(local_78,pvVar1,(longlong)iVar16 * 2);
    }
  }
  FUN_1401aebe8(&local_78,*param_2,iVar12);
  if (1 < *(int *)(param_1 + 0xa0)) {
    plVar4 = (longlong *)FUN_1400dbadc();
    plVar6 = (longlong *)*plVar4;
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)FUN_140e92164();
      *plVar4 = (longlong)plVar6;
    }
    puVar10 = local_68;
    if (local_60 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    cVar2 = (**(code **)(*plVar6 + 0x78))(plVar6,puVar10);
    if (cVar2 != '\0') {
      plVar4 = (longlong *)FUN_1400dbadc();
      plVar6 = (longlong *)*plVar4;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)FUN_140e92164();
        *plVar4 = (longlong)plVar6;
      }
      puVar10 = local_78;
      if (local_70 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      cVar2 = (**(code **)(*plVar6 + 0x78))(plVar6,puVar10);
      if (cVar2 == '\0') {
        if ((longlong)*(int *)(param_1 + 0x398) != 0) {
          plVar6 = *(longlong **)(param_1 + 0x390);
          plVar4 = plVar6 + (longlong)*(int *)(param_1 + 0x398) * 2;
          iVar12 = (int)param_2[1];
LAB_14293483e:
          if ((int)plVar6[1] == iVar12) {
            if (1 < iVar12) {
              lVar18 = 0;
              do {
                uVar21 = *(ushort *)(*plVar6 + lVar18);
                uVar22 = (ulonglong)uVar21;
                uVar14 = *(ushort *)(*param_2 + lVar18);
                if (uVar21 == uVar14) {
                  if (uVar21 == 0) break;
                }
                else {
                  if (0x7f < (uVar14 | uVar21)) goto LAB_1429348af;
                  uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
                  uVar15 = (ulonglong)uVar14;
                  uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                  if ((&DAT_149e05da0)[uVar22] != (&DAT_149e05da0)[uVar15]) goto LAB_1429348af;
                }
                lVar18 = lVar18 + 2;
              } while( true );
            }
          }
          else if ((int)plVar6[1] + iVar12 != 1) goto LAB_142934854;
          goto LAB_142934955;
        }
LAB_1429347b6:
        if (param_3 == '\0') {
          lVar18 = (**(code **)(**(longlong **)(param_1 + 0x5f8) + 0x60))
                             (*(longlong **)(param_1 + 0x5f8),param_2);
          lVar19 = (**(code **)(**(longlong **)(param_1 + 0x5f8) + 0x68))
                             (*(longlong **)(param_1 + 0x5f8),param_2);
          plVar6 = (longlong *)FUN_14054d1d4();
          puVar10 = local_68;
          if (local_60 == 0) {
            puVar10 = &DAT_149dfb77a;
          }
          lVar5 = (**(code **)(*plVar6 + 0x108))(plVar6,puVar10);
          lVar7 = -1;
          lVar13 = -1;
          if (lVar18 != 0) {
            lVar13 = *(longlong *)(lVar18 + 0x58);
          }
          if (lVar19 != 0) {
            lVar7 = *(longlong *)(lVar19 + 0x58);
          }
          local_58 = 0;
          uStack_50 = 0;
          local_48 = 0;
          if ((lVar13 == lVar5) || (lVar7 == lVar5)) {
            puVar20 = (undefined8 *)(lVar19 + 0x20);
            if (lVar19 == 0) {
              puVar20 = &local_58;
            }
            puVar17 = (undefined8 *)(lVar18 + 0x20);
            if (lVar18 == 0) {
              puVar17 = &local_58;
            }
            cVar2 = FUN_146b3576c(*(undefined8 *)(param_1 + 0x548),&local_68,puVar17,puVar20);
            if (cVar2 != '\0') goto LAB_142934955;
          }
        }
        else {
          iVar12 = (int)param_2[1];
          uVar23 = 0;
          iVar16 = iVar12 + -1;
          if (iVar12 == 0) {
            iVar16 = 0;
          }
          if (0 < iVar16) {
            if (iVar12 == 0) {
              puVar10 = &DAT_149dfb77a;
            }
            else {
              puVar10 = (undefined2 *)*param_2;
            }
            lVar18 = 0;
            do {
              uVar11 = ((uint)(ushort)puVar10[lVar18] +
                       (uint)(0x19 < (ushort)puVar10[lVar18] - 0x61) * 0x20) - 0x20;
              uVar23 = uVar23 >> 8 ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar23 ^ uVar11) & 0xff) * 4);
              uVar23 = uVar23 >> 8 ^
                       *(uint *)(&DAT_14c75d150 +
                                (ulonglong)(uVar23 & 0xff ^ uVar11 >> 8 & 0xff) * 4);
              lVar18 = lVar18 + 1;
            } while (iVar16 != (int)lVar18);
          }
          if (*(int *)(param_1 + 0x3f8) != *(int *)(param_1 + 0x424)) {
            lVar18 = param_1 + 0x428;
            if (*(longlong *)(param_1 + 0x430) != 0) {
              lVar18 = *(longlong *)(param_1 + 0x430);
            }
            iVar16 = *(int *)(lVar18 + (ulonglong)(*(int *)(param_1 + 0x438) - 1U & uVar23) * 4);
            if (iVar16 != -1) {
              lVar18 = *(longlong *)(param_1 + 0x3f0);
LAB_142934a53:
              lVar19 = (longlong)iVar16;
              iVar16 = *(int *)(lVar18 + 8 + lVar19 * 0x18);
              if (iVar16 == iVar12) {
                if (1 < iVar12) {
                  lVar13 = 0;
                  do {
                    uVar21 = *(ushort *)(*(longlong *)(lVar18 + lVar19 * 0x18) + lVar13);
                    uVar22 = (ulonglong)uVar21;
                    uVar14 = *(ushort *)(*param_2 + lVar13);
                    if (uVar21 == uVar14) {
                      if (uVar21 == 0) break;
                    }
                    else {
                      if (0x7f < (uVar14 | uVar21)) goto LAB_142934acd;
                      uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar22];
                      uVar15 = (ulonglong)uVar14;
                      uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                      if ((&DAT_149e05da0)[uVar22] != (&DAT_149e05da0)[uVar15]) goto LAB_142934acd;
                    }
                    lVar13 = lVar13 + 2;
                  } while( true );
                }
              }
              else if (iVar16 + iVar12 != 1) goto LAB_142934a71;
            }
          }
        }
LAB_142934912:
        plVar6 = (longlong *)FUN_14054d1d4();
        puVar10 = &DAT_149dfb77a;
        if (local_60 != 0) {
          puVar10 = local_68;
        }
        puVar9 = &DAT_149dfb77a;
        if (local_70 != 0) {
          puVar9 = local_78;
        }
        local_90 = 1;
        local_98 = 1;
        local_88 = 0;
        (**(code **)(*plVar6 + 0x40))(plVar6,puVar9,puVar10,1);
      }
    }
  }
LAB_142934955:
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1429348af:
  if (uVar21 == uVar14) goto LAB_142934955;
LAB_142934854:
  plVar6 = plVar6 + 2;
  if (plVar6 == plVar4) goto LAB_1429347b6;
  goto LAB_14293483e;
LAB_142934acd:
  if (uVar21 == uVar14) goto LAB_142934912;
LAB_142934a71:
  iVar16 = *(int *)(lVar18 + 0x10 + lVar19 * 0x18);
  if (iVar16 == -1) goto LAB_142934912;
  goto LAB_142934a53;
}



// FUNCTION 142934b90 FUN_142934b90 body=573 status=ok
// SIG undefined FUN_142934b90(void)

ulonglong FUN_142934b90(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 unaff_RBP;
  undefined7 uVar10;
  ulonglong uVar9;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  
  iVar2 = (int)param_1[5];
  uVar10 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar11 = 0;
    iVar16 = 0;
    iVar15 = 0;
  }
  else {
    puVar4 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar4;
    if (uVar14 == 0) {
      iVar15 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar15 = iVar2 + -1;
      }
      uVar11 = 0;
      uVar13 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar13 = uVar11;
      }
      iVar16 = 0;
      do {
        if (uVar13 == uVar11) {
          uVar9 = CONCAT71(uVar10,1);
          goto LAB_142934c43;
        }
        iVar16 = iVar16 + 0x20;
        uVar14 = puVar4[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar11 = 0;
      iVar16 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar9 = uVar13 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar15 = (iVar16 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar15) {
      iVar15 = iVar2;
    }
  }
  uVar9 = CONCAT71(uVar10,1);
  if (iVar15 != iVar2) {
    uVar14 = 0xffffffff;
    uVar9 = CONCAT71(uVar10,1);
    do {
      lVar5 = (**(code **)(*(longlong *)*param_2 + 0x1f8))
                        ((longlong *)*param_2,(longlong)iVar15 * 0x18 + *param_1);
      if (lVar5 == 0) {
        uVar9 = 0;
      }
      else {
        lVar12 = param_3[1];
        uVar8 = (int)lVar12 + 1;
        *(uint *)(param_3 + 1) = uVar8;
        if (*(uint *)((longlong)param_3 + 0xc) < uVar8) {
          FUN_146b55270(param_3);
        }
        FUN_146b49358((longlong)(int)lVar12 * 0x60 + *param_3,lVar5);
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar4 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar15 = (int)uVar11;
      lVar5 = (longlong)iVar15;
      uVar8 = puVar4[lVar5] & uVar14;
      if (uVar8 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar15) {
          iVar7 = iVar15;
        }
        if (iVar15 < iVar6) {
          lVar12 = 0;
          do {
            uVar8 = puVar4[lVar5 + lVar12 + 1];
            if (uVar8 != 0) {
              uVar11 = (ulonglong)(iVar15 + (int)lVar12 + 1);
              uVar14 = 0xffffffff;
              goto LAB_142934d1c;
            }
            iVar16 = iVar16 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar7 - lVar5 != lVar12);
          uVar14 = 0xffffffff;
          iVar15 = iVar7;
        }
        uVar11 = (ulonglong)(iVar15 + 1);
        iVar15 = iVar3;
      }
      else {
LAB_142934d1c:
        uVar13 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar13 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar15 = (iVar16 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar15) {
          iVar15 = iVar3;
        }
      }
    } while (iVar15 != iVar2);
  }
LAB_142934c43:
  return uVar9 & 0xffffffff;
}



// FUNCTION 142934dcd FUN_142934dcd body=509 status=ok
// SIG undefined FUN_142934dcd(void)

ulonglong FUN_142934dcd(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  undefined8 unaff_RBX;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 *local_a8;
  undefined1 local_a0 [7];
  char local_99;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined4 *)(param_4 + 1) = 0;
  local_b0 = param_2;
  local_a8 = param_3;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_146b52578(param_4,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar15 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if ((longlong)(int)param_1[1] != 0) {
    lVar16 = *param_1;
    lVar20 = (longlong)(int)param_1[1] * 0x60 + lVar16;
    do {
      if ((longlong)*(int *)(lVar16 + 0x50) != 0) {
        lVar17 = *(longlong *)(lVar16 + 0x48);
        lVar18 = (longlong)*(int *)(lVar16 + 0x50) * 0x18;
        do {
          local_99 = '\0';
          FUN_1457adc9c(&local_98,local_a0,lVar17,&local_99);
          if (local_99 == '\0') {
            puVar14 = (undefined4 *)
                      (**(code **)(*(longlong *)*local_a8 + 0x218))((longlong *)*local_a8,lVar17);
            if ((puVar14 == (undefined4 *)0x0) &&
               ((plVar3 = (longlong *)*local_b0, plVar3 == (longlong *)0x0 ||
                (puVar14 = (undefined4 *)(**(code **)(*plVar3 + 0x218))(plVar3,lVar17),
                puVar14 == (undefined4 *)0x0)))) {
              uVar15 = 0;
              goto LAB_142934f65;
            }
            iVar2 = (int)param_4[1];
            *(uint *)(param_4 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
              FUN_146b55398(param_4,iVar2);
            }
            lVar4 = *param_4;
            lVar19 = (longlong)iVar2 * 0x40;
            uVar5 = *puVar14;
            uVar6 = puVar14[1];
            uVar7 = puVar14[2];
            uVar8 = puVar14[3];
            uVar9 = *(undefined8 *)(puVar14 + 4);
            uVar10 = *(undefined8 *)(puVar14 + 6);
            uVar11 = *(undefined8 *)(puVar14 + 8);
            uVar12 = *(undefined8 *)(puVar14 + 10);
            uVar13 = *(undefined8 *)(puVar14 + 0xe);
            puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar19);
            *puVar1 = *(undefined8 *)(puVar14 + 0xc);
            puVar1[1] = uVar13;
            puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar19);
            *puVar1 = uVar11;
            puVar1[1] = uVar12;
            puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar19);
            *puVar1 = uVar9;
            puVar1[1] = uVar10;
            puVar14 = (undefined4 *)(lVar4 + lVar19);
            *puVar14 = uVar5;
            puVar14[1] = uVar6;
            puVar14[2] = uVar7;
            puVar14[3] = uVar8;
          }
          lVar17 = lVar17 + 0x18;
          lVar18 = lVar18 + -0x18;
        } while (lVar18 != 0);
      }
      lVar16 = lVar16 + 0x60;
    } while (lVar16 != lVar20);
    uVar15 = CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
  }
LAB_142934f65:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_98);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffff;
}



// FUNCTION 142934fcc FUN_142934fcc body=2574 status=ok
// SIG undefined FUN_142934fcc(void)

undefined8
FUN_142934fcc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined ***pppuVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined1 auStack_618 [32];
  undefined8 *local_5f8;
  longlong *local_5f0;
  longlong *local_5e8;
  longlong *local_5e0;
  longlong *local_5d8;
  longlong local_5d0;
  longlong *local_5c8;
  longlong local_5c0;
  longlong *local_5b8;
  int local_5ac;
  code *local_5a8;
  ulonglong uStack_5a0;
  undefined ***local_598;
  undefined **local_588;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  int iStack_578;
  int iStack_574;
  undefined4 uStack_570;
  undefined4 uStack_56c;
  longlong local_568;
  undefined4 local_560;
  longlong local_4d0;
  undefined8 local_4c8;
  undefined1 local_4c0 [16];
  undefined1 local_4b0 [16];
  undefined1 auStack_4a0 [440];
  undefined2 *local_2e8;
  int local_2e0;
  longlong local_2a8;
  undefined4 local_2a0;
  longlong local_298;
  longlong *plStack_290;
  undefined1 local_288;
  int local_264;
  undefined1 local_248 [8];
  int local_240;
  int local_214;
  longlong local_1f8;
  longlong *local_1e8;
  longlong local_1d8 [4];
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 local_178;
  undefined8 local_168;
  longlong local_138;
  undefined ***local_128;
  undefined **local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  code *local_f8 [2];
  undefined ***local_e8;
  undefined **local_d8;
  LPCRITICAL_SECTION local_d0;
  undefined8 local_c8;
  code *local_b8;
  undefined ***local_a8;
  undefined **local_98;
  LPCRITICAL_SECTION local_90;
  undefined8 local_88;
  _RTL_CRITICAL_SECTION local_70;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_618;
  local_5f8 = param_3;
  InitializeCriticalSection(&local_70);
  SetCriticalSectionSpinCount(&local_70,4000);
  local_a8 = (undefined ***)0x0;
  local_98 = &PTR_LAB_149f2ef50;
  local_b8 = FUN_14293984a;
  local_e8 = (undefined ***)0x0;
  local_d8 = &PTR_LAB_149f2ef70;
  local_f8[0] = FUN_1429398b0;
  local_108 = &local_5ac;
  local_5ac = 0;
  local_118 = &PTR_LAB_149f2ef90;
  uStack_110 = param_5;
  local_178 = 0;
  local_168 = 0;
  local_d0 = &local_70;
  local_c8 = param_2;
  local_90 = &local_70;
  local_88 = param_1;
  FUN_1429359db(&local_5c0);
  local_1b8 = 0;
  local_1a8 = 0;
  FUN_1429359db(&local_5d0,local_f8);
  local_1f8 = 0;
  local_1e8 = (longlong *)0x0;
  local_5a8 = FUN_142939916;
  local_598 = (undefined ***)0x0;
  local_128 = (undefined ***)0x0;
  local_588 = local_118;
  uStack_580 = (undefined4)uStack_110;
  uStack_57c = uStack_110._4_4_;
  iStack_578 = (int)local_108;
  iStack_574 = local_108._4_4_;
  uStack_570 = uStack_100;
  uStack_56c = uStack_fc;
  local_138 = 0;
  FUN_146b56c98(&local_298);
  plVar1 = plStack_290;
  lVar12 = local_298;
  local_288 = 1;
  if (plStack_290 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_290 + 1) = (int)plStack_290[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar13 = FUN_14118da1c();
      bVar9 = FUN_14054d46e(uVar13,L"nothreading");
      DAT_14c83f0f8 = bVar9 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 == 1) goto LAB_142935194;
    FUN_146b56bfc(&local_298,&local_5a8);
  }
  else {
LAB_142935194:
    plVar11 = DAT_14c8442c0;
    puVar10 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar10[1] = 0;
    *puVar10 = &PTR_FUN_149f2efd0;
    puVar10[2] = local_5a8;
    puVar10[4] = local_598;
    local_598 = (undefined ***)0x0;
    *(int *)(puVar10 + 8) = iStack_578;
    *(int *)((longlong)puVar10 + 0x44) = iStack_574;
    *(undefined4 *)(puVar10 + 9) = uStack_570;
    *(undefined4 *)((longlong)puVar10 + 0x4c) = uStack_56c;
    puVar10[6] = local_588;
    puVar10[7] = CONCAT44(uStack_57c,uStack_580);
    if (local_5a8 != (code *)0x0) {
      local_5a8 = (code *)0x0;
    }
    puVar10[10] = local_298;
    puVar10[0xb] = plStack_290;
    local_298 = 0;
    plStack_290 = (longlong *)0x0;
    *(undefined1 *)(puVar10 + 0xc) = local_288;
    (**(code **)(*plVar11 + 0x18))(plVar11,puVar10,3);
  }
  plVar11 = plStack_290;
  if (plStack_290 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_290 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_290)(plStack_290);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_5a8 != (code *)0x0) {
    pppuVar14 = &local_588;
    if (local_598 != (undefined ***)0x0) {
      pppuVar14 = local_598;
    }
    (*(code *)(*pppuVar14)[2])(pppuVar14);
  }
  if (local_1f8 != 0) {
    plVar11 = local_1e8;
    if (local_1e8 == (longlong *)0x0) {
      plVar11 = local_1d8;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  while ((*(byte *)(local_5c0 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(local_5c0 + 0x70) + 0x20))
              (*(longlong **)(local_5c0 + 0x70),0xffffffff);
  }
  local_5e0 = *(longlong **)(local_5c0 + 0x80);
  local_5d8 = *(longlong **)(local_5c0 + 0x88);
  if (local_5d8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5d8 + 1) = (int)local_5d8[1] + 1;
    UNLOCK();
  }
  while ((*(byte *)(local_5d0 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(local_5d0 + 0x70) + 0x20))
              (*(longlong **)(local_5d0 + 0x70),0xffffffff);
  }
  local_5f0 = *(longlong **)(local_5d0 + 0x80);
  local_5e8 = *(longlong **)(local_5d0 + 0x88);
  if (local_5e8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_5e8 + 1) = (int)local_5e8[1] + 1;
    UNLOCK();
  }
  while ((*(byte *)(lVar12 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar12 + 0x70) + 0x20))(*(longlong **)(lVar12 + 0x70),0xffffffff,0)
    ;
  }
  FUN_146b4c0e4(&local_298,lVar12 + 0x80);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
    FUN_1459825b0(&DAT_14c872ee0);
    atexit(FUN_1427868a5);
    _Init_thread_footer(&DAT_14c872ef8);
  }
  uVar13 = 0;
  FUN_1400e4168(&DAT_14c872ee0,0);
  if ((local_5e0 == (longlong *)0x0) || (local_5f0 == (longlong *)0x0)) goto LAB_1429357de;
  if (local_5ac == 0) {
    uVar13 = 0;
    goto LAB_1429357de;
  }
  if (((int)plStack_290 == local_264) && (local_240 == local_214)) {
    (**(code **)(*local_5e0 + 0x88))(local_5e0,&local_2e8);
    local_588 = (undefined **)0x0;
    uStack_580 = 0;
    local_5a8 = (code *)0x0;
    uStack_5a0 = 0;
    uStack_57c = 0x80;
    iStack_578 = -1;
    iStack_574 = 0;
    local_568 = 0;
    local_560 = 0;
    FUN_140e82fa0(&local_5a8,&local_2e8);
    FUN_1447a1747(local_2e8,local_2e0);
    if (local_2e8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    plVar11 = local_5f0;
    (**(code **)(*local_5f0 + 0x88))(local_5f0,&local_2e8);
    FUN_140e82fa0(local_248,&local_2e8);
    FUN_1447a1747(local_2e8,local_2e0);
    if (local_2e8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_145d1d460(&local_5a8,&local_2e8,local_248);
    FUN_146b3e088(&local_298,&local_2e8);
    local_2a0 = 0;
    if (local_2a8 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(&local_2e8);
    local_560 = 0;
    if (local_568 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(&local_5a8);
  }
  else {
    FUN_145d1d460(&local_298,&local_5a8,local_248);
    FUN_146b3e088(&local_298,&local_5a8);
    local_560 = 0;
    if (local_568 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(&local_5a8);
    plVar11 = local_5f0;
  }
  FUN_146b37170(&local_5a8);
  local_4d0 = 0;
  local_4c8 = 0;
  FUN_146b41976(&uStack_5a0,plVar11 + 1);
  FUN_14058acb2(auStack_4a0,plVar11 + 0x21);
  if (local_4d0 != 0) {
    FUN_1400020a8();
  }
  if ((undefined8 *)&uStack_580 != param_4) {
    iVar4 = *(int *)(param_4 + 1);
    pvVar5 = (void *)*param_4;
    iStack_578 = iVar4;
    if (iVar4 == 0 && iStack_574 == 0) {
      iStack_574 = 0;
    }
    else {
      FUN_1446dd670(&uStack_580,iVar4);
      if (iVar4 != 0) {
        memcpy((void *)CONCAT44(uStack_57c,uStack_580),pvVar5,(longlong)iVar4 * 2);
      }
    }
  }
  cVar6 = FUN_142934b90(&local_298,&local_5e0,local_4b0);
  cVar7 = FUN_142934b90(local_248,&local_5f0,local_4b0);
  FUN_146b5b6ce(local_4b0);
  cVar8 = FUN_142934dcd(local_4b0,&local_5e0,&local_5f0,local_4c0);
  uVar13 = 0;
  if (((cVar6 != '\0') && (cVar7 != '\0')) && (cVar8 != '\0')) {
    plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
    *plVar11 = (longlong)&PTR_FUN_149f2e800;
    lVar12 = FUN_14054d1d4();
    plVar11[1] = lVar12;
    lVar12 = FUN_140e92164();
    plVar11[2] = lVar12;
    FUN_146b377ca(&local_5a8);
    puVar10 = local_5f8;
    local_2e0 = *(int *)(local_5f8 + 1);
    lVar12 = (longlong)local_2e0;
    local_2e8 = (undefined2 *)0x0;
    pvVar5 = (void *)*local_5f8;
    FUN_1446dd670(&local_2e8,(uint)(lVar12 == 0) + local_2e0 + 3,0);
    if (lVar12 != 0) {
      memcpy(local_2e8,pvVar5,lVar12 * 2);
    }
    FUN_1400020e8(&local_2e8,&DAT_149f2f624,3);
    cVar6 = FUN_146b37e38(&local_5a8,&local_2e8,uStack_5a0 & 0xffffffff);
    if (cVar6 == '\0') {
LAB_1429357ae:
      uVar13 = 0;
    }
    else {
      puVar15 = &DAT_149dfb77a;
      puVar16 = &DAT_149dfb77a;
      if (local_2e0 != 0) {
        puVar16 = local_2e8;
      }
      if (*(int *)(puVar10 + 1) != 0) {
        puVar15 = (undefined2 *)*puVar10;
      }
      cVar6 = (**(code **)(*plVar11 + 0x70))(plVar11,puVar15,puVar16);
      uVar13 = 1;
      if (cVar6 == '\0') goto LAB_1429357ae;
    }
    if (local_2e8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)*plVar11)(plVar11,1);
    }
  }
  FUN_146b37ad4(&local_5a8);
LAB_1429357de:
  FUN_146b41a20(&local_298);
  plVar11 = local_5e8;
  if (local_5e8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_5e8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_5e8)(local_5e8);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  plVar11 = local_5d8;
  if (local_5d8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_5d8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_5d8)(local_5d8);
      LOCK();
      piVar3 = (int *)((longlong)plVar11 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar1 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if (local_5c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5c8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5c8)(local_5c8);
      LOCK();
      piVar3 = (int *)((longlong)local_5c8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_5c8 + 0x10))(local_5c8);
      }
    }
  }
  if (local_5b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_5b8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_5b8)(local_5b8);
      LOCK();
      piVar3 = (int *)((longlong)local_5b8 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_5b8 + 0x10))(local_5b8);
      }
    }
  }
  if (local_138 != 0) {
    pppuVar14 = local_128;
    if (local_128 == (undefined ***)0x0) {
      pppuVar14 = &local_118;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  if (local_f8[0] != (code *)0x0) {
    pppuVar14 = local_e8;
    if (local_e8 == (undefined ***)0x0) {
      pppuVar14 = &local_d8;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  if (local_b8 != (code *)0x0) {
    pppuVar14 = local_a8;
    if (local_a8 == (undefined ***)0x0) {
      pppuVar14 = &local_98;
    }
    (*(code *)(*pppuVar14)[2])();
  }
  DeleteCriticalSection(&local_70);
  if ((local_48 ^ (ulonglong)auStack_618) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 1429359db FUN_1429359db body=578 status=ok
// SIG undefined FUN_1429359db(void)

undefined8 * FUN_1429359db(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88;
  longlong local_78 [2];
  longlong *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78[0] = *param_2;
  local_68 = (longlong *)param_2[2];
  param_2[2] = 0;
  local_58 = (undefined4)param_2[4];
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_50 = (undefined4)param_2[5];
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_48 = (undefined4)param_2[6];
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_40 = (undefined4)param_2[7];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x3c);
  if (local_78[0] != 0) {
    *param_2 = 0;
  }
  FUN_146b56a20(&local_98,param_3);
  plVar7 = plStack_90;
  uVar3 = local_98;
  local_88 = 1;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        uVar6 = FUN_14118da1c();
        bVar4 = FUN_14054d46e(uVar6,L"nothreading");
        DAT_14c83f0f8 = bVar4 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    if (DAT_14c83f0f8 != 1) {
      FUN_146b5697a(&local_98,local_78);
      goto LAB_142935b2b;
    }
  }
  plVar2 = DAT_14c8442c0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar5[1] = 0;
  *puVar5 = &PTR_FUN_149f2f7d0;
  puVar5[2] = local_78[0];
  puVar5[4] = local_68;
  local_68 = (longlong *)0x0;
  *(undefined4 *)(puVar5 + 8) = local_48;
  *(undefined4 *)((longlong)puVar5 + 0x44) = uStack_44;
  *(undefined4 *)(puVar5 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar5 + 0x4c) = uStack_3c;
  puVar5[6] = CONCAT44(uStack_54,local_58);
  puVar5[7] = CONCAT44(uStack_4c,uStack_50);
  if (local_78[0] != 0) {
    local_78[0] = 0;
  }
  puVar5[10] = local_98;
  puVar5[0xb] = plStack_90;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  *(undefined1 *)(puVar5 + 0xc) = local_88;
  (**(code **)(*plVar2 + 0x18))(plVar2,puVar5,3);
LAB_142935b2b:
  plVar2 = plStack_90;
  *param_1 = uVar3;
  param_1[1] = plVar7;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_90 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_78[0] != 0) {
    plVar7 = (longlong *)&local_58;
    if (local_68 != (longlong *)0x0) {
      plVar7 = local_68;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if (*param_3 != 0) {
    plVar7 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142935c1e FUN_142935c1e body=427 status=ok
// SIG undefined FUN_142935c1e(void)

undefined8 FUN_142935c1e(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  bool bVar16;
  
  iVar8 = *(int *)(param_1 + 0x28);
  if (0 < iVar8) {
    plVar1 = (longlong *)(param_1 + 0x20);
    uVar12 = 0;
    do {
      iVar9 = (int)uVar12;
      cVar7 = FUN_146b33c70(*(undefined8 *)(*plVar1 + uVar12 * 0x10));
      if (cVar7 == '\0') {
        FUN_146b57bdc(plVar1,uVar12);
        FUN_146b57c52(plVar1);
        iVar9 = iVar9 + -1;
      }
      uVar12 = (ulonglong)(iVar9 + 1U);
      iVar8 = *(int *)(param_1 + 0x28);
    } while ((int)(iVar9 + 1U) < iVar8);
  }
  if (iVar8 != *(int *)(param_1 + 0x38)) {
    plVar1 = (longlong *)(param_1 + 0x30);
    FUN_146b4301a(plVar1);
    if ((longlong)*(int *)(param_1 + 0x28) != 0) {
      puVar13 = *(undefined8 **)(param_1 + 0x20);
      puVar15 = puVar13 + (longlong)*(int *)(param_1 + 0x28) * 2;
      do {
        uVar5 = *puVar13;
        plVar14 = (longlong *)puVar13[1];
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        iVar8 = *(int *)(param_1 + 0x38);
        *(uint *)(param_1 + 0x38) = iVar8 + 1U;
        if (*(uint *)(param_1 + 0x3c) < iVar8 + 1U) {
          FUN_146b575c4(plVar1,iVar8);
        }
        lVar4 = *plVar1;
        *(undefined8 *)(lVar4 + (longlong)iVar8 * 0x10) = uVar5;
        *(longlong **)(lVar4 + 8 + (longlong)iVar8 * 0x10) = plVar14;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar14 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar3 = (int *)((longlong)plVar14 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
        puVar13 = puVar13 + 2;
      } while (puVar13 != puVar15);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x90);
  uVar10 = 0;
  do {
    if (*(int *)(param_1 + 0x98) <= (int)uVar10) {
      return 1;
    }
    lVar4 = *plVar1;
    plVar14 = *(longlong **)(lVar4 + 8 + (ulonglong)uVar10 * 0x10);
    bVar6 = true;
    if (plVar14 == (longlong *)0x0) {
LAB_142935cf1:
      plVar14 = (longlong *)0x0;
LAB_142935cf8:
      FUN_146b57d4e(plVar1,uVar10);
      FUN_146b57dae(plVar1);
      uVar10 = uVar10 - 1;
      uVar11 = uVar10;
      if (!bVar6) goto LAB_142935cd0;
    }
    else {
      iVar8 = (int)plVar14[1];
      do {
        if (iVar8 == 0) goto LAB_142935cf1;
        LOCK();
        iVar9 = (int)plVar14[1];
        bVar16 = iVar8 == iVar9;
        if (bVar16) {
          *(int *)(plVar14 + 1) = iVar8 + 1;
          iVar9 = iVar8;
        }
        iVar8 = iVar9;
        UNLOCK();
      } while (!bVar16);
      if ((*(longlong *)(lVar4 + (ulonglong)uVar10 * 0x10) == 0) ||
         (cVar7 = FUN_142947c80(), cVar7 == '\0')) {
        bVar6 = false;
        goto LAB_142935cf8;
      }
LAB_142935cd0:
      LOCK();
      plVar2 = plVar14 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      uVar11 = uVar10;
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar3 = (int *)((longlong)plVar14 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    uVar10 = uVar11 + 1;
    if ((int)uVar11 < -1) {
      return 1;
    }
  } while( true );
}



// FUNCTION 142935dca FUN_142935dca body=5355 status=ok
// SIG undefined FUN_142935dca(void)

undefined4 FUN_142935dca(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  code *pcVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined ***pppuVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  undefined2 *puVar17;
  longlong lVar18;
  undefined4 uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 *puVar23;
  bool bVar24;
  undefined8 *puVar25;
  bool bVar26;
  undefined1 auStack_3d8 [32];
  undefined4 local_3b8;
  undefined1 local_3b0;
  undefined1 local_3a8;
  longlong *local_398;
  undefined8 *local_390;
  undefined8 *local_388;
  undefined8 *local_380;
  longlong local_378;
  int local_370;
  longlong *local_368 [2];
  void *local_358;
  int local_350;
  longlong *local_348;
  undefined8 uStack_340;
  longlong *local_338;
  undefined8 uStack_330;
  longlong *local_320;
  undefined8 *local_318;
  undefined8 uStack_310;
  undefined8 *local_308;
  undefined8 uStack_300;
  undefined8 *local_2f8;
  undefined8 uStack_2f0;
  undefined8 *local_2e8;
  ulonglong uStack_2e0;
  longlong local_2d8;
  undefined8 uStack_2d0;
  undefined1 local_2c8 [64];
  longlong local_288;
  undefined4 local_280;
  undefined8 *local_278;
  longlong *plStack_270;
  undefined1 local_268;
  int local_244;
  longlong local_238;
  undefined4 local_230;
  code *local_228;
  int local_220;
  undefined ***local_218;
  undefined **local_208;
  void *local_200;
  int local_1f8;
  int local_1f4;
  longlong local_1e8;
  undefined4 local_1e0;
  code *local_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined8 uStack_1ac;
  undefined4 local_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong local_198;
  undefined4 local_190;
  longlong local_188 [2];
  longlong *local_178;
  longlong local_168 [4];
  longlong local_148 [2];
  longlong *local_138;
  longlong local_128 [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  undefined7 uVar22;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2e8 = (undefined8 *)0x0;
  uStack_2e0 = 0;
  local_388 = param_2;
  plVar9 = (longlong *)FUN_14054d1d4();
  iVar3 = *(int *)(param_1 + 1);
  lVar20 = (longlong)iVar3;
  local_b8 = (undefined8 *)0x0;
  pvVar4 = (void *)*param_1;
  uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar3);
  local_390 = param_1;
  FUN_1446dd670(&local_b8,(uint)(lVar20 == 0) + iVar3 + 1,0);
  if (lVar20 != 0) {
    memcpy(local_b8,pvVar4,lVar20 * 2);
  }
  FUN_1401aebe8(&local_b8,&DAT_149dfb77a,0);
  puVar13 = (undefined8 *)&DAT_149dfb77a;
  if ((int)uStack_b0 != 0) {
    puVar13 = local_b8;
  }
  local_3a8 = 1;
  local_3b8 = CONCAT31(local_3b8._1_3_,1);
  local_3b0 = 0;
  (**(code **)(*plVar9 + 0x80))(plVar9,&local_2e8,puVar13);
  if (local_b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_98 = 0;
  local_90 = 0;
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  local_308 = (undefined8 *)0x0;
  uStack_300 = 0;
  local_318 = (undefined8 *)0x0;
  uStack_310 = 0;
  if ((longlong)(int)uStack_2e0 != 0) {
    lVar20 = (longlong)(int)uStack_2e0 << 4;
    puVar13 = local_2e8;
    do {
      cVar6 = FUN_144a38768(puVar13,L".chunk",6);
      uVar21 = uStack_2f0;
      if (cVar6 == '\0') {
        cVar6 = FUN_144a38768(puVar13,L".chunkdb",8);
        uVar21 = uStack_300;
        if (cVar6 != '\0') {
          lVar18 = (longlong)(int)uStack_300;
          uVar8 = (int)uStack_300 + 1;
          uStack_300 = CONCAT44(uStack_300._4_4_,uVar8);
          puVar10 = local_308;
          if (uStack_300._4_4_ < uVar8) {
            FUN_1447a1bd6(&local_308,uVar21 & 0xffffffff);
            puVar10 = local_308;
          }
          goto LAB_14293609f;
        }
        cVar6 = FUN_144a38768(puVar13,L".manifest",9);
        if ((cVar6 != '\0') || (cVar6 = FUN_144a38768(puVar13,L".delta",6), cVar6 != '\0')) {
          uVar21 = uStack_310;
          lVar18 = (longlong)(int)uStack_310;
          uVar8 = (int)uStack_310 + 1;
          uStack_310 = CONCAT44(uStack_310._4_4_,uVar8);
          puVar10 = local_318;
          if (uStack_310._4_4_ < uVar8) {
            FUN_1447a1bd6(&local_318,uVar21 & 0xffffffff);
            puVar10 = local_318;
          }
          goto LAB_14293609f;
        }
      }
      else {
        lVar18 = (longlong)(int)uStack_2f0;
        uVar8 = (int)uStack_2f0 + 1;
        uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar8);
        puVar10 = local_2f8;
        if (uStack_2f0._4_4_ < uVar8) {
          FUN_1447a1bd6(&local_2f8,uVar21 & 0xffffffff);
          puVar10 = local_2f8;
        }
LAB_14293609f:
        puVar25 = puVar10 + lVar18 * 2;
        puVar10[lVar18 * 2] = 0;
        iVar3 = *(int *)(puVar13 + 1);
        pvVar4 = (void *)*puVar13;
        *(int *)(puVar10 + lVar18 * 2 + 1) = iVar3;
        if ((longlong)iVar3 == 0) {
          *(undefined4 *)((longlong)puVar25 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar25,iVar3,0);
          memcpy((void *)*puVar25,pvVar4,(longlong)iVar3 * 2);
        }
      }
      puVar13 = puVar13 + 2;
      lVar20 = lVar20 + -0x10;
    } while (lVar20 != 0);
  }
  plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
  *plVar9 = (longlong)&PTR_FUN_149f2e800;
  lVar20 = FUN_14054d1d4();
  plVar9[1] = lVar20;
  lVar20 = FUN_140e92164();
  plVar9[2] = lVar20;
  local_320 = (longlong *)FUN_14001cc68(0x18,0x10);
  puVar10 = local_2f8;
  *local_320 = (longlong)&PTR_FUN_149f2ed90;
  local_320[1] = (longlong)plVar9;
  *(undefined4 *)(local_320 + 2) = 0x12;
  local_338 = (longlong *)0x0;
  uStack_330 = 0;
  lVar20 = (longlong)(int)uStack_2f0;
  local_398 = plVar9;
  if (lVar20 != 0) {
    lVar18 = 0;
    do {
      local_1d8 = (code *)0x0;
      uVar8 = *(uint *)((longlong)puVar10 + lVar18 + 8);
      pvVar4 = *(void **)((longlong)puVar10 + lVar18);
      uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar8);
      if ((longlong)(int)uVar8 == 0) {
        uStack_1d0 = (ulonglong)uVar8;
      }
      else {
        FUN_1446dd670(&local_1d8,uVar8,0);
        memcpy(local_1d8,pvVar4,(longlong)(int)uVar8 * 2);
      }
      local_1c8 = &local_320;
      uStack_1c0 = local_390;
      local_228 = (code *)0x0;
      local_218 = (undefined ***)0x0;
      pppuVar12 = (undefined ***)FUN_14001cc68(0x28,8);
      pcVar5 = local_1d8;
      *pppuVar12 = &PTR_FUN_149f2f420;
      pppuVar16 = pppuVar12 + 1;
      pppuVar12[1] = (undefined **)0x0;
      lVar14 = (longlong)(int)uStack_1d0;
      *(int *)(pppuVar12 + 2) = (int)uStack_1d0;
      local_218 = pppuVar12;
      if (lVar14 == 0) {
        *(undefined4 *)((longlong)pppuVar12 + 0x14) = 0;
      }
      else {
        FUN_1446dd670(pppuVar16,uStack_1d0 & 0xffffffff,0);
        memcpy(*pppuVar16,pcVar5,lVar14 * 2);
      }
      *(undefined4 *)(pppuVar12 + 3) = (undefined4)local_1c8;
      *(undefined4 *)((longlong)pppuVar12 + 0x1c) = local_1c8._4_4_;
      *(int *)(pppuVar12 + 4) = (int)uStack_1c0;
      *(undefined4 *)((longlong)pppuVar12 + 0x24) = uStack_1c0._4_4_;
      if (pppuVar16 != (undefined ***)0x0) {
        local_228 = FUN_14293a38c;
      }
      if (local_1d8 != (code *)0x0) {
        FUN_1400020a8();
      }
      local_148[0] = 0;
      local_138 = (longlong *)0x0;
      local_1d8 = local_228;
      local_1c8 = (longlong **)0x0;
      if (local_228 != (code *)0x0) {
        pppuVar16 = local_218;
        if (local_218 == (undefined ***)0x0) {
          pppuVar16 = &local_208;
        }
        (*(code *)**pppuVar16)(pppuVar16,&local_1c8);
      }
      FUN_146b582a4(&local_278,local_148);
      plVar9 = plStack_270;
      puVar13 = local_278;
      local_268 = 1;
      if (plStack_270 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_270 + 1) = (int)plStack_270[1] + 1;
        UNLOCK();
      }
      if (DAT_14c846b14 == '\x01') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c83f0fc) &&
           (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
          uVar11 = FUN_14118da1c();
          bVar7 = FUN_14054d46e(uVar11,L"nothreading");
          DAT_14c83f0f8 = bVar7 ^ 1;
          _Init_thread_footer(&DAT_14c83f0fc);
        }
        if (DAT_14c83f0f8 == 1) goto LAB_142936837;
        FUN_146b581f9(&local_278,&local_1d8);
      }
      else {
LAB_142936837:
        plVar15 = DAT_14c8442c0;
        puVar25 = (undefined8 *)FUN_14001cc68(0x70,0x10);
        puVar25[1] = 0;
        *puVar25 = &PTR_FUN_149f2f460;
        puVar25[2] = local_1d8;
        puVar25[4] = local_1c8;
        local_1c8 = (longlong **)0x0;
        *(undefined4 *)(puVar25 + 8) = uStack_1ac._4_4_;
        *(undefined4 *)((longlong)puVar25 + 0x44) = local_1a4;
        *(undefined4 *)(puVar25 + 9) = uStack_1a0;
        *(undefined4 *)((longlong)puVar25 + 0x4c) = uStack_19c;
        *(undefined4 *)(puVar25 + 6) = (undefined4)uStack_1b8;
        *(undefined4 *)((longlong)puVar25 + 0x34) = uStack_1b8._4_4_;
        *(undefined4 *)(puVar25 + 7) = uStack_1b0;
        *(undefined4 *)((longlong)puVar25 + 0x3c) = (undefined4)uStack_1ac;
        if (local_1d8 != (code *)0x0) {
          local_1d8 = (code *)0x0;
        }
        puVar25[10] = local_278;
        puVar25[0xb] = plStack_270;
        local_278 = (undefined8 *)0x0;
        plStack_270 = (longlong *)0x0;
        *(undefined1 *)(puVar25 + 0xc) = local_268;
        (**(code **)(*plVar15 + 0x18))(plVar15,puVar25);
      }
      plVar15 = plStack_270;
      if (plStack_270 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_270 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_270)(plStack_270);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
      if (local_1d8 != (code *)0x0) {
        plVar15 = (longlong *)local_1c8;
        if (local_1c8 == (longlong **)0x0) {
          plVar15 = &uStack_1b8;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
      if (local_148[0] != 0) {
        plVar15 = local_138;
        if (local_138 == (longlong *)0x0) {
          plVar15 = local_128;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
      uVar21 = uStack_330;
      lVar14 = (longlong)(int)uStack_330;
      uVar8 = (int)uStack_330 + 1;
      uStack_330 = CONCAT44(uStack_330._4_4_,uVar8);
      if (uStack_330._4_4_ < uVar8) {
        FUN_146b58462(&local_338,uVar21 & 0xffffffff);
      }
      local_338[lVar14 * 2] = (longlong)puVar13;
      local_338[lVar14 * 2 + 1] = (longlong)plVar9;
      if (local_228 != (code *)0x0) {
        pppuVar16 = local_218;
        if (local_218 == (undefined ***)0x0) {
          pppuVar16 = &local_208;
        }
        (*(code *)(*pppuVar16)[2])();
      }
      lVar18 = lVar18 + 0x10;
    } while (lVar20 * 0x10 != lVar18);
  }
  puVar10 = local_318;
  local_348 = (longlong *)0x0;
  uStack_340 = 0;
  lVar20 = (longlong)(int)uStack_310;
  if (lVar20 != 0) {
    lVar18 = 0;
    do {
      local_1d8 = (code *)0x0;
      uVar8 = *(uint *)((longlong)puVar10 + lVar18 + 8);
      pvVar4 = *(void **)((longlong)puVar10 + lVar18);
      uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar8);
      if ((longlong)(int)uVar8 == 0) {
        uStack_1d0 = (ulonglong)uVar8;
        local_208 = &PTR_FUN_149f2f490;
        local_200 = (void *)0x0;
        local_1f8 = 0;
LAB_142936b0e:
        local_200 = (void *)0x0;
        local_208 = &PTR_FUN_149f2f490;
        local_218 = (undefined ***)0x0;
        local_1f4 = 0;
      }
      else {
        FUN_1446dd670(&local_1d8,uVar8,0);
        memcpy(local_1d8,pvVar4,(longlong)(int)uVar8 * 2);
        pcVar5 = local_1d8;
        lVar14 = (longlong)(int)uStack_1d0;
        local_228 = (code *)0x0;
        local_218 = (undefined ***)0x0;
        local_208 = &PTR_FUN_149f2f490;
        local_200 = (void *)0x0;
        local_1f8 = (int)uStack_1d0;
        if (lVar14 == 0) goto LAB_142936b0e;
        FUN_1446dd670(&local_200,uStack_1d0 & 0xffffffff,0);
        memcpy(local_200,pcVar5,lVar14 * 2);
      }
      local_228 = FUN_14293a5b6;
      if (local_1d8 == (code *)0x0) {
        local_188[0] = 0;
        local_178 = (longlong *)0x0;
        local_1d8 = FUN_14293a5b6;
        local_1c8 = (longlong **)0x0;
LAB_142936baf:
        local_178 = (longlong *)0x0;
        local_188[0] = 0;
        local_1c8 = (longlong **)0x0;
        pppuVar16 = local_218;
        if (local_218 == (undefined ***)0x0) {
          pppuVar16 = &local_208;
        }
        local_228 = local_1d8;
        (*(code *)**pppuVar16)(pppuVar16,&local_1c8);
      }
      else {
        FUN_1400020a8(local_1d8);
        local_188[0] = 0;
        local_178 = (longlong *)0x0;
        local_1d8 = local_228;
        local_1c8 = (longlong **)0x0;
        if (local_228 != (code *)0x0) goto LAB_142936baf;
      }
      FUN_146b585e0(&local_278,local_188);
      plVar9 = plStack_270;
      puVar13 = local_278;
      local_268 = 1;
      if (plStack_270 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_270 + 1) = (int)plStack_270[1] + 1;
        UNLOCK();
      }
      if (DAT_14c846b14 == '\x01') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c83f0fc) &&
           (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
          uVar11 = FUN_14118da1c();
          bVar7 = FUN_14054d46e(uVar11,L"nothreading");
          DAT_14c83f0f8 = bVar7 ^ 1;
          _Init_thread_footer(&DAT_14c83f0fc);
        }
        if (DAT_14c83f0f8 == 1) goto LAB_142936c40;
        FUN_146b58530(&local_278,&local_1d8);
      }
      else {
LAB_142936c40:
        plVar15 = DAT_14c8442c0;
        puVar25 = (undefined8 *)FUN_14001cc68(0x70,0x10);
        puVar25[1] = 0;
        *puVar25 = &PTR_FUN_149f2f4d0;
        puVar25[2] = local_1d8;
        puVar25[4] = local_1c8;
        local_1c8 = (longlong **)0x0;
        *(undefined4 *)(puVar25 + 8) = uStack_1ac._4_4_;
        *(undefined4 *)((longlong)puVar25 + 0x44) = local_1a4;
        *(undefined4 *)(puVar25 + 9) = uStack_1a0;
        *(undefined4 *)((longlong)puVar25 + 0x4c) = uStack_19c;
        *(undefined4 *)(puVar25 + 6) = (undefined4)uStack_1b8;
        *(undefined4 *)((longlong)puVar25 + 0x34) = uStack_1b8._4_4_;
        *(undefined4 *)(puVar25 + 7) = uStack_1b0;
        *(undefined4 *)((longlong)puVar25 + 0x3c) = (undefined4)uStack_1ac;
        if (local_1d8 != (code *)0x0) {
          local_1d8 = (code *)0x0;
        }
        puVar25[10] = local_278;
        puVar25[0xb] = plStack_270;
        local_278 = (undefined8 *)0x0;
        plStack_270 = (longlong *)0x0;
        *(undefined1 *)(puVar25 + 0xc) = local_268;
        (**(code **)(*plVar15 + 0x18))(plVar15,puVar25);
      }
      plVar15 = plStack_270;
      if (plStack_270 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_270 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_270)(plStack_270);
          LOCK();
          piVar2 = (int *)((longlong)plVar15 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
      if (local_1d8 != (code *)0x0) {
        plVar15 = (longlong *)local_1c8;
        if (local_1c8 == (longlong **)0x0) {
          plVar15 = &uStack_1b8;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
      if (local_188[0] != 0) {
        plVar15 = local_178;
        if (local_178 == (longlong *)0x0) {
          plVar15 = local_168;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
      uVar21 = uStack_340;
      lVar14 = (longlong)(int)uStack_340;
      uVar8 = (int)uStack_340 + 1;
      uStack_340 = CONCAT44(uStack_340._4_4_,uVar8);
      if (uStack_340._4_4_ < uVar8) {
        FUN_146b5879c(&local_348,uVar21 & 0xffffffff);
      }
      local_348[lVar14 * 2] = (longlong)puVar13;
      local_348[lVar14 * 2 + 1] = (longlong)plVar9;
      if (local_228 != (code *)0x0) {
        pppuVar16 = local_218;
        if (local_218 == (undefined ***)0x0) {
          pppuVar16 = &local_208;
        }
        (*(code *)(*pppuVar16)[2])();
      }
      lVar18 = lVar18 + 0x10;
    } while (lVar20 * 0x10 != lVar18);
  }
  uVar22 = (undefined7)((ulonglong)puVar13 >> 8);
  uVar21 = CONCAT71(uVar22,1);
  if ((longlong)(int)uStack_330 != 0) {
    plVar15 = local_338 + (longlong)(int)uStack_330 * 2;
    uVar21 = CONCAT71(uVar22,1);
    plVar9 = local_338;
    do {
      uVar21 = uVar21 & 0xffffffff;
      lVar20 = *plVar9;
      while ((*(byte *)(lVar20 + 0x78) & 1) == 0) {
        (**(code **)(**(longlong **)(lVar20 + 0x70) + 0x20))
                  (*(longlong **)(lVar20 + 0x70),0xffffffff);
      }
      local_1d8 = (code *)0x0;
      uVar8 = *(uint *)(lVar20 + 0x88);
      pvVar4 = *(void **)(lVar20 + 0x80);
      uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar8);
      if ((longlong)(int)uVar8 == 0) {
        uStack_1d0 = (ulonglong)uVar8;
      }
      else {
        FUN_1446dd670(&local_1d8,uVar8,0);
        memcpy(local_1d8,pvVar4,(longlong)(int)uVar8 * 2);
      }
      local_1c8 = (longlong **)CONCAT71(local_1c8._1_7_,*(byte *)(lVar20 + 0x90));
      uStack_1c0 = *(undefined8 **)(lVar20 + 0x98);
      local_1c8 = (longlong **)CONCAT44(*(undefined4 *)(lVar20 + 0x94),(undefined4)local_1c8);
      uStack_1b8 = CONCAT44(uStack_1b8._4_4_,*(undefined4 *)(lVar20 + 0xa0));
      if ((*(byte *)(lVar20 + 0x90) & 1) == 0) {
        FUN_1457adc9c(&local_b8,&local_228,(longlong)&local_1c8 + 4);
        pcVar5 = local_1d8;
        lVar20 = (longlong)(int)uStack_1d0;
        local_228 = (code *)0x0;
        local_220 = (int)uStack_1d0;
        FUN_1446dd670(&local_228,(int)uStack_1d0 + (uint)(lVar20 == 0) + 2,0);
        if (lVar20 != 0) {
          memcpy(local_228,pcVar5,lVar20 * 2);
        }
        FUN_1400020e8(&local_228,&DAT_149e02010,2);
        FUN_1400020e8(&local_2d8,local_228);
        if (local_228 != (code *)0x0) {
          FUN_1400020a8();
        }
        uVar21 = 0;
      }
      else {
        FUN_1457adc9c(&local_108,&local_228);
      }
      if (local_1d8 != (code *)0x0) {
        FUN_1400020a8();
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar15);
  }
  uVar19 = (undefined4)uVar21;
  if ((longlong)(int)uStack_300 != 0) {
    puVar13 = local_308 + (longlong)(int)uStack_300 * 2;
    puVar10 = local_308;
    plVar9 = local_398;
    local_380 = puVar13;
    do {
      puVar17 = &DAT_149dfb77a;
      if (*(int *)(puVar10 + 1) != 0) {
        puVar17 = (undefined2 *)*puVar10;
      }
      (**(code **)(*plVar9 + 0x48))(plVar9,&local_228,puVar17);
      if (local_228 == (code *)0x0) {
LAB_142936e93:
        iVar3 = *(int *)(puVar10 + 1);
        lVar20 = (longlong)iVar3;
        local_1d8 = (code *)0x0;
        pvVar4 = (void *)*puVar10;
        uStack_1d0 = CONCAT44(uStack_1d0._4_4_,iVar3);
        FUN_1446dd670(&local_1d8,iVar3 + (uint)(lVar20 == 0) + 2,0);
        if (lVar20 != 0) {
          memcpy(local_1d8,pvVar4,lVar20 * 2);
        }
        FUN_1400020e8(&local_1d8,&DAT_149e02010,2);
        iVar3 = (int)uStack_1d0 + -1;
        if ((int)uStack_1d0 == 0) {
          iVar3 = 0;
        }
        FUN_1400020e8(&local_2d8,local_1d8,iVar3);
        if (local_1d8 != (code *)0x0) {
          FUN_1400020a8();
        }
        uVar21 = 0;
      }
      else {
        local_1d8 = (code *)0x1800000001;
        local_1c8 = (longlong **)0x0;
        uStack_1c0 = (undefined8 *)0x0;
        FUN_146b447fa(local_228,&local_1d8);
        if (((byte)local_228[0x29] & 2) == 0) {
          lVar20 = (**(code **)(*(longlong *)local_228 + 0x30))();
          plVar15 = (longlong *)local_1c8;
          if ((longlong)(int)uStack_1c0 == 0) {
            bVar24 = true;
          }
          else {
            puVar25 = (undefined8 *)((longlong)(int)uStack_1c0 << 5);
            bVar24 = true;
            puVar23 = (undefined8 *)0x0;
            local_390 = puVar25;
            do {
              lVar18 = (ulonglong)*(uint *)((longlong)(plVar15 + 3) + (longlong)puVar23) +
                       *(longlong *)((longlong)(plVar15 + 2) + (longlong)puVar23);
              if (lVar20 < lVar18) {
                bVar24 = false;
                uVar21 = 0;
              }
              else {
                (**(code **)(*(longlong *)local_228 + 0x1a0))();
                puVar13 = (undefined8 *)
                          (**(code **)(*local_320 + 0x18))(local_320,local_228,&local_278);
                lVar14 = (**(code **)(*(longlong *)local_228 + 0x28))();
                bVar26 = (char)local_278 == '\0' &&
                         (lVar14 == lVar18 && puVar13 != (undefined8 *)0x0);
                if (puVar13 != (undefined8 *)0x0) {
                  (**(code **)*puVar13)(puVar13,1);
                }
                bVar24 = (bool)(bVar24 & bVar26);
                uVar21 = CONCAT71((int7)((uVar21 & 0xffffffff) >> 8),
                                  (byte)(uVar21 & 0xffffffff) & bVar26);
                puVar25 = local_390;
              }
              puVar23 = puVar23 + 4;
              puVar13 = local_380;
              plVar9 = local_398;
            } while (puVar25 != puVar23);
          }
        }
        else {
          bVar24 = false;
          puVar13 = local_380;
          plVar9 = local_398;
        }
        if (local_1c8 != (longlong **)0x0) {
          FUN_1400020a8(local_1c8);
        }
        if (!bVar24) goto LAB_142936e93;
      }
      uVar19 = (undefined4)uVar21;
      if (local_228 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_228)(local_228,1);
      }
      puVar10 = puVar10 + 2;
    } while (puVar10 != puVar13);
  }
  if ((longlong)(int)uStack_340 != 0) {
    plVar15 = local_348 + (longlong)(int)uStack_340 * 2;
    plVar9 = local_348;
    do {
      lVar20 = *plVar9;
      while ((*(byte *)(lVar20 + 0x78) & 1) == 0) {
        (**(code **)(**(longlong **)(lVar20 + 0x70) + 0x20))
                  (*(longlong **)(lVar20 + 0x70),0xffffffff);
      }
      FUN_146b4c168(local_368,lVar20 + 0x80);
      if (local_368[0] == (longlong *)0x0) {
LAB_1429363d7:
        pvVar4 = local_358;
        lVar20 = (longlong)local_350;
        local_1d8 = (code *)0x0;
        uStack_1d0 = CONCAT44(uStack_1d0._4_4_,local_350);
        FUN_1446dd670(&local_1d8,local_350 + (uint)(lVar20 == 0) + 2,0);
        if (lVar20 != 0) {
          memcpy(local_1d8,pvVar4,lVar20 * 2);
        }
        FUN_1400020e8(&local_1d8,&DAT_149e02010,2);
        FUN_1400020e8(&local_2d8,local_1d8);
        if (local_1d8 != (code *)0x0) {
          FUN_1400020a8();
        }
        uVar19 = 0;
      }
      else {
        cVar6 = (**(code **)(*local_368[0] + 0x200))();
        if (cVar6 == '\0') {
          uStack_1b8 = 0;
          uStack_1b0 = 0;
          local_1d8 = (code *)0x0;
          uStack_1d0 = 0;
          uStack_1ac = 0xffffffff00000080;
          local_1a4 = 0;
          local_198 = 0;
          local_190 = 0;
          (**(code **)(*local_368[0] + 0x1e8))(local_368[0],&local_1d8);
          FUN_146b35124(&local_1d8,&local_228,&local_b8);
          FUN_1461c8dd4(&local_1d8,local_2c8,&local_b8);
          FUN_1461c8dd4(local_2c8,&local_278,&local_108);
          local_280 = 0;
          if (local_288 != 0) {
            FUN_1400020a8();
          }
          FUN_140149fc2(local_2c8);
          bVar24 = local_1f4 < local_220;
          bVar26 = local_244 < (int)plStack_270;
          local_230 = 0;
          if (local_238 != 0) {
            FUN_1400020a8();
          }
          FUN_140149fc2(&local_278);
          local_1e0 = 0;
          if (local_1e8 != 0) {
            FUN_1400020a8();
          }
          FUN_140149fc2(&local_228);
          local_190 = 0;
          if (local_198 != 0) {
            FUN_1400020a8();
          }
          FUN_140149fc2(&local_1d8);
          if (bVar26 || bVar24) goto LAB_1429363d7;
        }
      }
      FUN_146b44bac(local_368);
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar15);
  }
  puVar13 = local_388;
  plVar9 = local_398;
  if (1 < *(int *)(local_388 + 1)) {
    uVar11 = FUN_14054d1d4();
    if (*(int *)(puVar13 + 1) == 0) {
      puVar17 = &DAT_149dfb77a;
    }
    else {
      puVar17 = (undefined2 *)*puVar13;
    }
    local_378 = local_2d8;
    local_370 = (int)uStack_2d0 + -1;
    if ((int)uStack_2d0 == 0) {
      local_370 = 0;
    }
    local_3b8 = 0;
    FUN_1415d54ec(&local_378,puVar17,0,uVar11);
  }
  FUN_146b584e7(local_348,uStack_340 & 0xffffffff);
  if (local_348 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_146b581b0(local_338,uStack_330 & 0xffffffff);
  if (local_338 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_320 != (longlong *)0x0) {
    (**(code **)*local_320)(local_320,1);
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)*plVar9)(plVar9,1);
  }
  FUN_1447a1747(local_318,uStack_310 & 0xffffffff);
  if (local_318 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_308,uStack_300 & 0xffffffff);
  if (local_308 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_2f8,uStack_2f0 & 0xffffffff);
  if (local_2f8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_108);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140149fc2(&local_b8);
  FUN_1447a1747(local_2e8,uStack_2e0 & 0xffffffff);
  if (local_2e8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_2d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429372b6 FUN_1429372b6 body=59 status=ok
// SIG undefined FUN_1429372b6(void)

void FUN_1429372b6(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c991bc0;
  if (DAT_14c991bc0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c991bc0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001429372e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1429372f1 FUN_1429372f1 body=49 status=ok
// SIG undefined FUN_1429372f1(void)

void FUN_1429372f1(void)

{
  FUN_1447a1747(DAT_14c991bd8,DAT_14c991be0);
  if (DAT_14c991bd8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142937434 FUN_142937434 body=177 status=ok
// SIG undefined FUN_142937434(void)

undefined8 FUN_142937434(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  
  iVar2 = *(int *)(param_1 + 0x40);
  iVar9 = iVar2;
  while( true ) {
    uVar8 = iVar9 + 1;
    *(uint *)(param_1 + 0x40) = uVar8;
    if (*(uint *)(param_1 + 0x44) < uVar8) {
      FUN_146b58822(param_1 + 0x38);
      uVar8 = *(uint *)(param_1 + 0x40);
    }
    lVar3 = *(longlong *)(param_1 + 0x38);
    lVar4 = **(longlong **)(param_1 + 0x30);
    if (lVar4 == 0) break;
    *(undefined8 *)(lVar3 + 0x10 + (longlong)(int)(uVar8 - 1) * 0x18) =
         *(undefined8 *)(lVar4 + 0x18);
    uVar5 = *(undefined4 *)(lVar4 + 0xc);
    uVar6 = *(undefined4 *)(lVar4 + 0x10);
    uVar7 = *(undefined4 *)(lVar4 + 0x14);
    puVar1 = (undefined4 *)(lVar3 + (longlong)(int)(uVar8 - 1) * 0x18);
    *puVar1 = *(undefined4 *)(lVar4 + 8);
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    lVar3 = *(longlong *)(param_1 + 0x30);
    *(longlong *)(param_1 + 0x30) = lVar4;
    *(undefined8 *)(lVar4 + 8) = 0;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    if (lVar3 != 0) {
      FUN_1400020a8();
    }
    iVar9 = *(int *)(param_1 + 0x40);
  }
  iVar9 = *(int *)(param_1 + 0x40) + -1;
  *(int *)(param_1 + 0x40) = iVar9;
  if (iVar2 < iVar9) {
    FUN_146b588b6(*(undefined8 *)(param_1 + 0x38));
    FUN_146b4522e(param_1 + 0x58);
  }
  return 1;
}



// FUNCTION 1429374e6 FUN_1429374e6 body=3057 status=ok
// SIG undefined FUN_1429374e6(void)

ulonglong FUN_1429374e6(undefined **param_1)

{
  int *piVar1;
  void *_Src;
  undefined *puVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  size_t sVar10;
  longlong *plVar11;
  undefined ***pppuVar12;
  code **ppcVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined **ppuVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined2 *puVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  bool bVar23;
  int iVar24;
  longlong lVar25;
  wchar_t *pwVar26;
  undefined8 *puVar27;
  undefined8 *puVar29;
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  code *local_298;
  undefined **local_290;
  longlong *local_288;
  undefined8 uStack_280;
  longlong *local_278;
  undefined8 uStack_270;
  undefined8 *local_268;
  ulonglong uStack_260;
  code *local_250;
  wchar_t *local_248;
  longlong *plStack_240;
  undefined1 local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  code *local_218;
  undefined8 uStack_210;
  undefined ***local_208;
  undefined8 uStack_200;
  undefined **local_1f8;
  undefined **ppuStack_1f0;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1dc;
  undefined4 local_1d4;
  longlong local_1c8;
  undefined4 local_1c0;
  code **local_198;
  code **local_190;
  int local_188;
  longlong local_178 [2];
  longlong *local_168;
  longlong local_158 [4];
  undefined *local_138;
  longlong *plStack_130;
  undefined1 local_128;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  longlong local_e8 [2];
  longlong *local_d8;
  longlong local_c8 [5];
  _RTL_CRITICAL_SECTION local_a0;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  ulonglong local_60;
  undefined8 *puVar28;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if (*(int *)(param_1 + 5) < 2) {
    pcVar7 = (code *)0x0;
  }
  else {
    uVar14 = 0;
    (**(code **)(*(longlong *)param_1[10] + 0x50))(param_1[10],&local_218,param_1[4],0);
    pcVar7 = local_218;
    if (local_218 == (code *)0x0) goto LAB_142937545;
  }
  local_298 = pcVar7;
  FUN_140212f8e(&local_218);
  auVar31._0_8_ = (double)*(float *)(param_1 + 3) * 864000000000.0 + 0.5;
  auVar31._8_8_ = 0;
  auVar31 = roundpd(auVar31,auVar31,1);
  local_250 = local_218 + -(longlong)auVar31._0_8_;
  local_268 = (undefined8 *)0x0;
  uStack_260 = 0;
  InitializeCriticalSection(&local_a0);
  SetCriticalSectionSpinCount(&local_a0,4000);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_146b341de(&local_a0);
  if (*(int *)(param_1 + 2) == 0) {
    puVar20 = &DAT_149dfb77a;
  }
  else {
    puVar20 = (undefined2 *)param_1[1];
  }
  local_2a8 = 2;
  iVar24 = 0;
  (**(code **)(*(longlong *)param_1[10] + 0x98))(param_1[10],&local_268,puVar20,0);
  FUN_146b3441a(&local_a0);
  puVar8 = local_268;
  puVar29 = local_268;
  if ((longlong)(int)uStack_260 != 0) {
    puVar21 = local_268;
    puVar29 = local_268 + (longlong)(int)uStack_260 * 2;
    do {
      while( true ) {
        cVar3 = FUN_144a38768(puVar21,L".manifest",9,1);
        if (cVar3 != '\0') break;
        do {
          puVar28 = puVar29;
          puVar27 = puVar28 + -2;
          puVar29 = puVar21;
          if (puVar27 == puVar21) goto LAB_1429376e8;
          cVar3 = FUN_144a38768(puVar27,L".manifest",9,1);
          puVar29 = puVar27;
        } while (cVar3 == '\0');
        local_218 = (code *)*puVar21;
        uStack_210 = puVar21[1];
        uVar9 = puVar28[-1];
        *puVar21 = *puVar27;
        puVar21[1] = uVar9;
        *puVar27 = local_218;
        puVar28[-1] = uStack_210;
        puVar21 = puVar21 + 2;
        if (puVar27 == puVar21) goto LAB_1429376e8;
      }
      puVar21 = puVar21 + 2;
    } while (puVar21 != puVar29);
  }
LAB_1429376e8:
  local_278 = (longlong *)0x0;
  uStack_270 = 0;
  uVar6 = (uint)((ulonglong)((longlong)puVar29 - (longlong)puVar8) >> 4);
  if (0 < (int)uVar6) {
    uVar14 = (ulonglong)(uVar6 & 0x7fffffff);
    lVar25 = 0;
    do {
      local_1e8 = (longlong)local_268 + lVar25;
      local_e8[0] = 0;
      local_d8 = (longlong *)0x0;
      local_208 = (undefined ***)0x0;
      local_1f8 = &PTR_LAB_149f2f500;
      local_218 = FUN_14293a724;
      ppuStack_1f0 = param_1;
      FUN_146b5a404(&local_138,local_e8);
      plVar19 = plStack_130;
      puVar2 = local_138;
      local_128 = 1;
      if (plStack_130 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_130 + 1) = (int)plStack_130[1] + 1;
        UNLOCK();
      }
      if (DAT_14c846b14 == '\x01') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c83f0fc) &&
           (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
          uVar9 = FUN_14118da1c();
          bVar4 = FUN_14054d46e(uVar9,L"nothreading");
          DAT_14c83f0f8 = bVar4 ^ 1;
          _Init_thread_footer(&DAT_14c83f0fc);
        }
        if (DAT_14c83f0f8 == 1) goto LAB_1429377cf;
        FUN_146b5a355(&local_138);
      }
      else {
LAB_1429377cf:
        plVar11 = DAT_14c8442c0;
        puVar8 = (undefined8 *)FUN_14001cc68(0x70,0x10);
        puVar8[1] = 0;
        *puVar8 = &PTR_FUN_149f2f540;
        puVar8[2] = local_218;
        puVar8[4] = local_208;
        local_208 = (undefined ***)0x0;
        *(undefined4 *)(puVar8 + 8) = (undefined4)local_1e8;
        *(undefined4 *)((longlong)puVar8 + 0x44) = local_1e8._4_4_;
        *(undefined4 *)(puVar8 + 9) = uStack_1e0;
        *(undefined4 *)((longlong)puVar8 + 0x4c) = (undefined4)uStack_1dc;
        puVar8[6] = local_1f8;
        puVar8[7] = ppuStack_1f0;
        if (local_218 != (code *)0x0) {
          local_218 = (code *)0x0;
        }
        puVar8[10] = local_138;
        puVar8[0xb] = plStack_130;
        local_138 = (undefined *)0x0;
        plStack_130 = (longlong *)0x0;
        *(undefined1 *)(puVar8 + 0xc) = local_128;
        (**(code **)(*plVar11 + 0x18))(plVar11,puVar8,3);
      }
      plVar11 = plStack_130;
      if (plStack_130 != (longlong *)0x0) {
        LOCK();
        plVar22 = plStack_130 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*plStack_130)(plStack_130);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      if (local_218 != (code *)0x0) {
        pppuVar12 = local_208;
        if (local_208 == (undefined ***)0x0) {
          pppuVar12 = &local_1f8;
        }
        (*(code *)(*pppuVar12)[2])();
      }
      if (local_e8[0] != 0) {
        plVar11 = local_d8;
        if (local_d8 == (longlong *)0x0) {
          plVar11 = local_c8;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      lVar17 = (longlong)(int)uStack_270;
      uVar5 = (int)uStack_270 + 1;
      uStack_270 = CONCAT44(uStack_270._4_4_,uVar5);
      if (uStack_270._4_4_ < uVar5) {
        FUN_146b5a5dc(&local_278);
      }
      local_278[lVar17 * 2] = (longlong)puVar2;
      local_278[lVar17 * 2 + 1] = (longlong)plVar19;
      lVar25 = lVar25 + 0x10;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
    iVar24 = (int)uStack_270;
  }
  local_118 = 0;
  local_110 = 0;
  local_138 = (undefined *)0x0;
  plStack_130 = (longlong *)0x0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  plVar19 = local_278;
  if (iVar24 == 0) {
LAB_142937ae1:
    local_288 = (longlong *)0x0;
    uStack_280 = 0;
    if ((int)uVar6 < (int)uStack_260) {
      lVar30 = (longlong)(int)uVar6;
      lVar17 = lVar30 << 4;
      lVar25 = lVar30;
      local_290 = param_1;
      do {
        ppuVar16 = (undefined **)((longlong)local_268 + lVar17);
        local_178[0] = 0;
        local_168 = (longlong *)0x0;
        local_218 = (code *)0x0;
        local_208 = (undefined ***)0x0;
        local_208 = (undefined ***)FUN_14001cc68(0x28,8);
        *local_208 = &PTR_LAB_149f2f570;
        local_208[1] = local_290;
        local_208[2] = ppuVar16;
        local_208[3] = &local_138;
        local_208[4] = &local_250;
        if (local_208 + 1 != (undefined ***)0x0) {
          local_218 = FUN_14293aa9a;
        }
        FUN_146b5a6aa(&local_248,local_178);
        plVar11 = plStack_240;
        pwVar26 = local_248;
        local_238 = 1;
        if (plStack_240 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_240 + 1) = (int)plStack_240[1] + 1;
          UNLOCK();
        }
        if (DAT_14c846b14 == '\x01') {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
            uVar9 = FUN_14118da1c();
            bVar4 = FUN_14054d46e(uVar9,L"nothreading");
            DAT_14c83f0f8 = bVar4 ^ 1;
            _Init_thread_footer(&DAT_14c83f0fc);
          }
          pcVar7 = local_218;
          if (DAT_14c83f0f8 == 1) goto LAB_142937bfc;
          pppuVar12 = local_208;
          if (local_208 == (undefined ***)0x0) {
            pppuVar12 = &local_1f8;
          }
          uVar9 = (*(code *)(*pppuVar12)[1])();
          (*pcVar7)(&local_228,uVar9);
          *(undefined8 *)(local_248 + 0x40) = local_228;
          *(undefined8 *)(local_248 + 0x44) = uStack_220;
          FUN_140b576f0();
        }
        else {
LAB_142937bfc:
          plVar19 = DAT_14c8442c0;
          puVar8 = (undefined8 *)FUN_14001cc68(0x70,0x10);
          puVar8[1] = 0;
          *puVar8 = &PTR_FUN_149f2f5b0;
          puVar8[2] = local_218;
          puVar8[4] = local_208;
          local_208 = (undefined ***)0x0;
          *(undefined4 *)(puVar8 + 8) = (undefined4)local_1e8;
          *(undefined4 *)((longlong)puVar8 + 0x44) = local_1e8._4_4_;
          *(undefined4 *)(puVar8 + 9) = uStack_1e0;
          *(undefined4 *)((longlong)puVar8 + 0x4c) = (undefined4)uStack_1dc;
          puVar8[6] = local_1f8;
          puVar8[7] = ppuStack_1f0;
          if (local_218 != (code *)0x0) {
            local_218 = (code *)0x0;
          }
          puVar8[10] = local_248;
          puVar8[0xb] = plStack_240;
          local_248 = (wchar_t *)0x0;
          plStack_240 = (longlong *)0x0;
          *(undefined1 *)(puVar8 + 0xc) = local_238;
          (**(code **)(*plVar19 + 0x18))(plVar19,puVar8,3);
        }
        plVar19 = plStack_240;
        if (plStack_240 != (longlong *)0x0) {
          LOCK();
          plVar22 = plStack_240 + 1;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)*plVar22 == 0) {
            (**(code **)*plStack_240)(plStack_240);
            LOCK();
            piVar1 = (int *)((longlong)plVar19 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
            }
          }
        }
        if (local_218 != (code *)0x0) {
          pppuVar12 = local_208;
          if (local_208 == (undefined ***)0x0) {
            pppuVar12 = &local_1f8;
          }
          (*(code *)(*pppuVar12)[2])();
        }
        if (local_178[0] != 0) {
          plVar19 = local_168;
          if (local_168 == (longlong *)0x0) {
            plVar19 = local_158;
          }
          (**(code **)(*plVar19 + 0x10))();
        }
        uVar14 = uStack_280;
        lVar18 = (longlong)(int)uStack_280;
        uVar6 = (int)uStack_280 + 1;
        uStack_280 = CONCAT44(uStack_280._4_4_,uVar6);
        if (uStack_280._4_4_ < uVar6) {
          FUN_146b5a890(&local_288,uVar14 & 0xffffffff);
        }
        plVar19 = (longlong *)(lVar18 * 0x10);
        local_288[lVar18 * 2] = (longlong)pwVar26;
        (local_288 + 1)[lVar18 * 2] = (longlong)plVar11;
        lVar25 = lVar25 + 1;
        lVar17 = lVar17 + 0x10;
      } while (lVar25 < (int)uStack_260);
      if ((longlong)(int)uStack_280 == 0) goto LAB_142937e12;
      plVar22 = local_288 + (longlong)(int)uStack_280 * 2;
      plVar11 = local_288;
      pcVar7 = local_298;
      do {
        lVar25 = *plVar11;
        while ((*(byte *)(lVar25 + 0x78) & 1) == 0) {
          (**(code **)(**(longlong **)(lVar25 + 0x70) + 0x20))
                    (*(longlong **)(lVar25 + 0x70),0xffffffff);
        }
        if (((((*(byte *)(lVar25 + 0x80) & 1) == 0) && ((*(byte *)(lVar25 + 0x81) & 1) != 0)) &&
            ((*(byte *)(lVar25 + 0x82) & 1) != 0)) &&
           ((pcVar7 != (code *)0x0 && ((*(byte *)(lVar25 + 0x83) & 1) != 0)))) {
          iVar24 = *(int *)(local_268 + lVar30 * 2 + 1);
          lVar25 = (longlong)iVar24;
          local_248 = (wchar_t *)0x0;
          _Src = (void *)local_268[lVar30 * 2];
          plStack_240 = (longlong *)CONCAT44(plStack_240._4_4_,iVar24);
          FUN_1446dd670(&local_248,iVar24 + (uint)(lVar25 == 0) + 2,0);
          plVar19 = (longlong *)0x0;
          if (lVar25 != 0) {
            plVar19 = (longlong *)(lVar25 * 2);
            memcpy(local_248,_Src,(size_t)plVar19);
          }
          FUN_1400020e8(&local_248,&DAT_149e02010,2);
          pwVar26 = L"";
          if ((int)plStack_240 != 0) {
            pwVar26 = local_248;
          }
          local_198 = (code **)0x0;
          if (pwVar26 == (wchar_t *)0x0) {
            local_190 = (code **)0x0;
            local_188 = 0;
          }
          else {
            sVar10 = wcslen(pwVar26);
            local_188 = FUN_14475aa65(0,pwVar26,sVar10 & 0xffffffff);
            uVar6 = local_188 + 1;
            plVar19 = (longlong *)(ulonglong)uVar6;
            ppcVar13 = (code **)0x0;
            if (0x80 < uVar6) {
              FUN_1446efa72(&local_198,0,uVar6,1);
              ppcVar13 = local_198;
            }
            local_190 = ppcVar13;
            if (ppcVar13 == (code **)0x0) {
              local_190 = &local_218;
            }
            FUN_14475a98a(local_190,plVar19,pwVar26,(int)sVar10 + 1);
          }
          pcVar7 = local_298;
          (**(code **)(*(longlong *)local_298 + 0x170))(local_298,local_190);
          if (local_198 != (code **)0x0) {
            FUN_1400020a8();
          }
          if (local_248 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        lVar30 = lVar30 + 1;
        plVar11 = plVar11 + 2;
      } while (plVar11 != plVar22);
      uVar14 = uStack_280 & 0xffffffff;
    }
    else {
LAB_142937e12:
      uVar14 = 0;
      pcVar7 = local_298;
    }
    FUN_146b5a661(local_288,uVar14);
    if (local_288 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uVar14 = CONCAT71((int7)((ulonglong)plVar19 >> 8),1);
  }
  else {
    plVar11 = local_278 + (longlong)iVar24 * 2;
    local_290 = param_1;
    bVar23 = true;
    do {
      lVar25 = *plVar19;
      while ((*(byte *)(lVar25 + 0x78) & 1) == 0) {
        (**(code **)(**(longlong **)(lVar25 + 0x70) + 0x20))
                  (*(longlong **)(lVar25 + 0x70),0xffffffff);
      }
      local_218 = *(code **)(lVar25 + 0x80);
      uStack_210 = *(undefined8 *)(lVar25 + 0x88);
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_208 = (undefined ***)0x0;
      uStack_200 = 0;
      uStack_1dc = 0xffffffff00000080;
      local_1d4 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      FUN_1410b2022(&local_208,lVar25 + 0x90);
      bVar15 = false;
      if ((char)local_218 == '\x01') {
        FUN_146b40bac(&local_138,&local_208);
        bVar15 = bVar23;
      }
      local_1c0 = 0;
      if (local_1c8 != 0) {
        FUN_1400020a8();
      }
      FUN_1408910a4(&local_208);
      plVar19 = plVar19 + 2;
      bVar23 = bVar15;
    } while (plVar19 != plVar11);
    param_1 = local_290;
    if (bVar15) goto LAB_142937ae1;
    uVar14 = 0;
    pcVar7 = local_298;
  }
  local_f0 = 0;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_138);
  FUN_146b5a30c(local_278,uStack_270 & 0xffffffff);
  if (local_278 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection(&local_a0);
  FUN_1447a1747(local_268,uStack_260 & 0xffffffff);
  if (local_268 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (pcVar7 != (code *)0x0) {
    (*(code *)**(undefined8 **)pcVar7)(pcVar7,1);
  }
LAB_142937545:
  if ((local_60 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 1429380d8 FUN_1429380d8 body=2473 status=ok
// SIG undefined FUN_1429380d8(void)

longlong * FUN_1429380d8(longlong *param_1,int param_2,undefined8 *param_3,longlong *param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  ulonglong local_d8;
  undefined2 *local_d0;
  int local_c8;
  undefined1 local_c0;
  undefined7 uStack_bf;
  longlong *local_b8;
  undefined1 local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined1 local_98;
  code *local_88;
  undefined ***local_78;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149f2ed30;
  uStack_60 = *param_3;
  local_58 = param_3[1];
  param_3[1] = 0;
  uStack_50 = *(undefined4 *)(param_3 + 2);
  uStack_4c = *(undefined4 *)((longlong)param_3 + 0x14);
  param_3[2] = 0;
  local_88 = FUN_146b4c9a8;
  FUN_14170b918(&local_a8,param_4);
  plVar17 = plStack_a0;
  lVar5 = local_a8;
  local_98 = 1;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
    UNLOCK();
  }
  switch(param_2) {
  case 0:
  case 1:
    uVar8 = 1;
    if (param_2 == 0) {
      uVar8 = 0xff;
    }
    local_d8 = CONCAT44(local_d8._4_4_,uVar8);
    puVar9 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar12 = (uint *)*puVar9;
    if (puVar12 != (uint *)0x0) goto LAB_142938637;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_142938a82);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar11 = *(undefined4 **)(lVar4 + 0x310);
      *(undefined8 *)(lVar4 + 0x310) = 0;
      if (puVar11 == (undefined4 *)0x0) {
        puVar11 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar11 = 0xffffffff;
      *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
      puVar11[0x12] = 0;
      *puVar9 = puVar11;
      FUN_140217a48(puVar9);
      puVar12 = (uint *)*puVar9;
LAB_142938637:
      puVar19 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 0xfU & 0xfffffffffffffff0);
      puVar15 = (uint *)(puVar19 + 0x22);
      uVar13 = puVar12[0x12];
      if (puVar15 <= puVar12 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
        LOCK();
        uVar3 = *puVar12;
        *puVar12 = *puVar12 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar12 = (uint *)*puVar9;
        *puVar12 = 0xffffffff;
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar9 = puVar12;
        puVar19 = (undefined8 *)((longlong)puVar12 + 0x67U & 0xfffffffffffffff0);
        puVar15 = (uint *)(puVar19 + 0x22);
        uVar13 = 0;
        if (puVar15 <= puVar12 + 0x4000) {
          uVar13 = 1;
          goto LAB_1429386b7;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_1429386b7:
    *(uint **)(puVar12 + 0x10) = puVar15;
    puVar12[0x12] = uVar13;
    FUN_1447247dc(puVar19,0);
    *puVar19 = TGraphTask<TAsyncGraphTask<void>_>::vftable;
    puVar19[0x16] = local_88;
    puVar19[0x18] = local_78;
    local_78 = (undefined ***)0x0;
    *(undefined4 *)(puVar19 + 0x1c) = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar19 + 0xe4) = local_58._4_4_;
    *(undefined4 *)(puVar19 + 0x1d) = uStack_50;
    *(undefined4 *)((longlong)puVar19 + 0xec) = uStack_4c;
    puVar19[0x1a] = local_68;
    puVar19[0x1b] = uStack_60;
    if (local_88 != (code *)0x0) {
      local_88 = (code *)0x0;
    }
    puVar19[0x1e] = local_a8;
    puVar19[0x1f] = plStack_a0;
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    *(undefined1 *)(puVar19 + 0x20) = 0;
    *(undefined4 *)(puVar19 + 0x21) = (undefined4)local_d8;
    uVar18 = 0x2800000000000000;
    if (param_2 == 0) {
      uVar18 = 0x800000000000000;
    }
    if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
      local_d8 = uVar18;
      (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
      uVar18 = local_d8;
    }
    puVar19[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar19[9] = puVar19;
    puVar19[10] = puVar19;
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(lVar4 + 0x30);
    }
    puVar19[0xf] = uVar10;
    puVar19[0x10] = uVar18 | 0xc00000527800b400;
    *(uint *)((longlong)puVar19 + 0x1c) = (uint)(param_2 != 0) * 3;
    if (puVar19 == (undefined8 *)0x0) {
      local_c0 = 1;
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
      UNLOCK();
      local_c0 = 1;
      FUN_1447439e4(puVar19);
      LOCK();
      piVar1 = (int *)(puVar19 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar19)(puVar19,1);
      }
    }
    break;
  case 2:
    if (DAT_14c846b14 == '\x01') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1))
      {
        uVar10 = FUN_14118da1c();
        bVar7 = FUN_14054d46e(uVar10,L"nothreading");
        DAT_14c83f0f8 = bVar7 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
      if (DAT_14c83f0f8 != 1) {
LAB_1429384ab:
        pcVar6 = local_88;
        pppuVar14 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar14 = &local_68;
        }
        uVar10 = (*(code *)(*pppuVar14)[1])();
        (*pcVar6)(uVar10);
        *(undefined4 *)(local_a8 + 0x80) = 0;
        FUN_140b576f0();
        break;
      }
    }
    FUN_145c3b830(&local_c0);
    puVar9 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    local_b0 = 1;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
    }
    *puVar9 = TAsyncRunnable<void>::vftable;
    puVar9[2] = local_88;
    puVar9[4] = local_78;
    local_78 = (undefined ***)0x0;
    *(undefined4 *)(puVar9 + 8) = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar9 + 0x44) = local_58._4_4_;
    *(undefined4 *)(puVar9 + 9) = uStack_50;
    *(undefined4 *)((longlong)puVar9 + 0x4c) = uStack_4c;
    puVar9[6] = local_68;
    puVar9[7] = uStack_60;
    if (local_88 != (code *)0x0) {
      local_88 = (code *)0x0;
    }
    puVar9[10] = local_a8;
    puVar9[0xb] = plStack_a0;
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    *(undefined1 *)(puVar9 + 0xc) = 0;
    puVar9[0xd] = CONCAT71(uStack_bf,local_c0);
    puVar9[0xe] = local_b8;
    uVar8 = FUN_146268020();
    FUN_140002266(&local_d0,L"TAsync %d",uVar8);
    puVar16 = local_d0;
    if (local_c8 == 0) {
      puVar16 = &DAT_149dfb77a;
    }
    local_f0 = 0;
    local_f8 = 0xffffffffffffffff;
    uVar10 = FUN_1411b1052(puVar9,puVar16,0,0);
    goto LAB_1429388ff;
  case 3:
    if (DAT_14c846b14 == '\x01') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1))
      {
        uVar10 = FUN_14118da1c();
        bVar7 = FUN_14054d46e(uVar10,L"nothreading");
        DAT_14c83f0f8 = bVar7 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
      if (DAT_14c83f0f8 != 1) goto LAB_1429384ab;
    }
    FUN_145c3b830(&local_c0);
    puVar9 = (undefined8 *)FUN_14001cc68(0x80,0x10);
    local_b0 = 1;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
    }
    *puVar9 = TAsyncRunnable<void>::vftable;
    puVar9[2] = local_88;
    puVar9[4] = local_78;
    local_78 = (undefined ***)0x0;
    *(undefined4 *)(puVar9 + 8) = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar9 + 0x44) = local_58._4_4_;
    *(undefined4 *)(puVar9 + 9) = uStack_50;
    *(undefined4 *)((longlong)puVar9 + 0x4c) = uStack_4c;
    puVar9[6] = local_68;
    puVar9[7] = uStack_60;
    if (local_88 != (code *)0x0) {
      local_88 = (code *)0x0;
    }
    puVar9[10] = local_a8;
    puVar9[0xb] = plStack_a0;
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    *(undefined1 *)(puVar9 + 0xc) = 0;
    puVar9[0xd] = CONCAT71(uStack_bf,local_c0);
    puVar9[0xe] = local_b8;
    uVar8 = FUN_146268020();
    FUN_140002266(&local_d0,L"TAsync %d",uVar8);
    puVar16 = local_d0;
    if (local_c8 == 0) {
      puVar16 = &DAT_149dfb77a;
    }
    local_e8 = 0;
    local_f0 = 0;
    local_f8 = 0xffffffffffffffff;
    uVar10 = FUN_14275bfaa(puVar9,puVar16,0,0);
LAB_1429388ff:
    *(undefined8 *)(CONCAT71(uStack_bf,local_c0) + 0x80) = uVar10;
    FUN_140b576f0();
    if (local_d0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_b8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar1 = (int *)((longlong)local_b8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_b8 + 0x10))(local_b8);
        }
      }
    }
    break;
  case 4:
    if (DAT_14c846b14 == '\x01') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1))
      {
        uVar10 = FUN_14118da1c();
        bVar7 = FUN_14054d46e(uVar10,L"nothreading");
        DAT_14c83f0f8 = bVar7 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
      if (DAT_14c83f0f8 != 1) goto LAB_1429384ab;
    }
    plVar2 = DAT_14c8442c0;
    puVar9 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar9[1] = 0;
    *puVar9 = TAsyncQueuedWork<void>::vftable;
    puVar9[2] = local_88;
    puVar9[4] = local_78;
    local_78 = (undefined ***)0x0;
    *(undefined4 *)(puVar9 + 8) = (undefined4)local_58;
    *(undefined4 *)((longlong)puVar9 + 0x44) = local_58._4_4_;
    *(undefined4 *)(puVar9 + 9) = uStack_50;
    *(undefined4 *)((longlong)puVar9 + 0x4c) = uStack_4c;
    puVar9[6] = local_68;
    puVar9[7] = uStack_60;
    if (local_88 != (code *)0x0) {
      local_88 = (code *)0x0;
    }
    puVar9[10] = local_a8;
    puVar9[0xb] = plStack_a0;
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    *(undefined1 *)(puVar9 + 0xc) = 0;
    (**(code **)(*plVar2 + 0x18))(plVar2,puVar9,3);
  }
  plVar2 = plStack_a0;
  *param_1 = lVar5;
  param_1[1] = (longlong)plVar17;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_a0 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_88 != (code *)0x0) {
    pppuVar14 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar14 = local_78;
    }
    (*(code *)(*pppuVar14)[2])(pppuVar14);
  }
  if (*param_4 != 0) {
    plVar17 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar17 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar17 + 0x10))(plVar17);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142938aaa FUN_142938aaa body=24 status=ok
// SIG undefined FUN_142938aaa(void)

undefined8 FUN_142938aaa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    *param_3 = 2;
    return 0;
  }
  uVar1 = FUN_142938ac2(param_2,param_3);
  return uVar1;
}



// FUNCTION 142938ac2 FUN_142938ac2 body=911 status=ok
// SIG undefined FUN_142938ac2(void)

longlong * FUN_142938ac2(longlong *param_1,char *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  undefined1 local_a8 [16];
  int local_98;
  undefined8 local_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_60 [12];
  undefined4 uStack_54;
  undefined1 auStack_50 [12];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar4 = (**(code **)(*param_1 + 0x28))();
  lVar5 = (**(code **)(*param_1 + 0x30))(param_1);
  local_88 = 0x4200000003;
  local_80 = (undefined1  [16])0x0;
  local_70 = 0x10000000000000;
  local_68 = 0x100;
  local_60 = SUB1612((undefined1  [16])0x0,0);
  uStack_54 = 0;
  auStack_50 = SUB1612((undefined1  [16])0x0,4);
  FUN_146b46ec3(param_1,&local_88);
  if (((local_80._4_4_ == 0 && local_80._0_4_ == 0) && local_80._8_4_ == 0) && local_80._12_4_ == 0)
  {
    *param_2 = '\x03';
  }
  else if (local_68._1_1_ == '\0') {
    *param_2 = '\x06';
  }
  else {
    uVar10 = (int)local_70 + local_88._4_4_;
    if (lVar5 - lVar4 < (longlong)(ulonglong)uVar10) {
      *param_2 = '\x04';
    }
    else if ((local_68 & 2) == 0) {
      plVar6 = (longlong *)FUN_14001cc68(0x88,0x10);
      FUN_146b475ae(plVar6,uVar10);
      (**(code **)(*plVar6 + 8))(plVar6,&local_b8,&local_b0);
      puVar9 = &local_88;
      puVar11 = local_b0;
      for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      (**(code **)(*param_1 + 0x170))(param_1,local_b8,*(undefined4 *)(local_b0 + 3));
      if ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0) {
        *param_2 = '\0';
        if ((*(byte *)(local_b0 + 4) & 1) == 0) {
          cVar3 = '\0';
        }
        else {
          uVar2 = *(undefined4 *)((longlong)local_b0 + 0x1c);
          plVar7 = (longlong *)FUN_14001cc68(0x88,0x10);
          FUN_146b475ae(plVar7,uVar2);
          (**(code **)(*plVar7 + 8))(plVar7,&local_c0,local_a8);
          lVar5 = local_b8;
          lVar4 = local_c0;
          local_d8 = (ulonglong)*(uint *)(local_b0 + 3);
          uVar2 = *(undefined4 *)((longlong)local_b0 + 0x1c);
          if (DAT_14c87ead8 == '\0') {
            FUN_140024d3a(&DAT_14c87eb00);
            DAT_14c87ead8 = '\x01';
          }
          local_c8 = 0;
          local_d0 = 0;
          cVar3 = FUN_140aa9920(DAT_14c892f44,lVar4,uVar2,lVar5);
          if (cVar3 == '\0') {
            *param_2 = '\b';
            (**(code **)(*plVar7 + 0x18))(plVar7);
            if (plVar7 != (longlong *)0x0) {
              (**(code **)*plVar7)(plVar7,1);
            }
          }
          else {
            puVar9 = local_b0;
            puVar11 = (undefined8 *)local_a8._0_8_;
            for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
              *puVar11 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar11 = puVar11 + 1;
            }
            *(undefined1 *)(local_a8._0_8_ + 0x20) = 0;
            *(undefined4 *)(local_a8._0_8_ + 0x18) = *(undefined4 *)((longlong)local_b0 + 0x1c);
            (**(code **)(*plVar6 + 0x18))(plVar6);
            if (plVar6 != (longlong *)0x0) {
              (**(code **)*plVar6)(plVar6,1);
            }
            local_b0 = (undefined8 *)local_a8._0_8_;
            local_b8 = local_c0;
            plVar6 = plVar7;
          }
          cVar3 = *param_2;
        }
        bVar1 = *(byte *)((longlong)local_b0 + 0x21);
        if (((bVar1 & 2) == 0 && cVar3 == '\0') && (bVar1 & 1) != 0) {
          uVar10 = *(uint *)(local_b0 + 3);
          if (uVar10 == *(uint *)((longlong)local_b0 + 0x1c)) {
            if ((ulonglong)uVar10 == 0) {
              uVar12 = 0;
            }
            else {
              uVar8 = 0;
              uVar12 = 0;
              do {
                uVar12 = (uVar12 << 1 | (ulonglong)((longlong)uVar12 < 0)) ^
                         (&DAT_14c9912e0)[*(byte *)(local_b8 + uVar8)];
                uVar8 = uVar8 + 1;
              } while (uVar10 != uVar8);
            }
            if (local_b0[5] == uVar12) goto LAB_142938c60;
          }
        }
        else {
LAB_142938c60:
          local_a8 = (undefined1  [16])0x0;
          local_98 = 0;
          if (((cVar3 != '\0') || ((bVar1 & 2) == 0)) ||
             (FUN_140f0be04(local_b8,*(undefined4 *)((longlong)local_b0 + 0x1c),local_a8),
             *(undefined1 (*) [16])(local_b0 + 6) == local_a8 && *(int *)(local_b0 + 8) == local_98)
             ) goto LAB_142938d0e;
        }
        *param_2 = '\t';
      }
      else {
        *param_2 = '\a';
      }
LAB_142938d0e:
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
        if (*param_2 == '\0') goto LAB_142938b99;
        (**(code **)*plVar6)(plVar6,1);
      }
    }
    else {
      *param_2 = '\x05';
    }
  }
  plVar6 = (longlong *)0x0;
LAB_142938b99:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar6;
}



// FUNCTION 142938e52 FUN_142938e52 body=308 status=ok
// SIG undefined FUN_142938e52(void)

void FUN_142938e52(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_88 [32];
  LARGE_INTEGER local_68;
  LARGE_INTEGER LStack_60;
  longlong local_58;
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  do {
    while( true ) {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x158) + 0x20))
                        (*(longlong **)(lVar1 + 0x158),100,0);
      if (cVar2 == '\0') break;
      LOCK();
      *(undefined1 *)(lVar1 + 0x170) = 0;
      UNLOCK();
      if (*(int *)(lVar1 + 0x70) != 0) goto LAB_142938f54;
      (**(code **)(**(longlong **)(lVar1 + 0xe0) + 0x70))();
      local_68.QuadPart = 0;
      LStack_60 = (LARGE_INTEGER)0x0;
      local_58 = 0;
      QueryPerformanceCounter(&local_48);
      local_68 = local_48;
      (**(code **)(**(longlong **)(lVar1 + 0x168) + 0x170))
                (*(longlong **)(lVar1 + 0x168),**(undefined8 **)(lVar1 + 0x160));
      local_58 = (longlong)*(int *)(*(longlong *)(lVar1 + 0x160) + 8);
      QueryPerformanceCounter(&local_48);
      LStack_60 = local_48;
      (**(code **)(**(longlong **)(lVar1 + 0xe0) + 0x78))(*(longlong **)(lVar1 + 0xe0),&local_68);
      LOCK();
      *(undefined1 *)(lVar1 + 0x170) = 1;
      UNLOCK();
      (**(code **)(**(longlong **)(lVar1 + 0x150) + 0x10))();
    }
  } while (*(int *)(lVar1 + 0x70) == 0);
LAB_142938f54:
  (**(code **)(**(longlong **)(lVar1 + 0x150) + 0x10))();
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142938f9e FUN_142938f9e body=29 status=ok
// SIG undefined FUN_142938f9e(void)

undefined8 FUN_142938f9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142938ff4 FUN_142938ff4 body=29 status=ok
// SIG undefined FUN_142938ff4(void)

undefined8 FUN_142938ff4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142939038 FUN_142939038 body=29 status=ok
// SIG undefined FUN_142939038(void)

undefined8 FUN_142939038(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14293908e FUN_14293908e body=29 status=ok
// SIG undefined FUN_14293908e(void)

undefined8 FUN_14293908e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429390ac FUN_1429390ac body=29 status=ok
// SIG undefined FUN_1429390ac(void)

undefined8 FUN_1429390ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429390de FUN_1429390de body=93 status=ok
// SIG undefined FUN_1429390de(void)

void FUN_1429390de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2ee60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14293913c FUN_14293913c body=93 status=ok
// SIG undefined FUN_14293913c(void)

void FUN_14293913c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e063e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2ee60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14293919a FUN_14293919a body=126 status=ok
// SIG undefined FUN_14293919a(void)

void FUN_14293919a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e063e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f2ee60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142939209. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142939222 FUN_142939222 body=20 status=ok
// SIG undefined FUN_142939222(void)

undefined1 FUN_142939222(longlong param_1)

{
  FUN_142939236(param_1 + 0x18);
  return 1;
}



// FUNCTION 142939236 FUN_142939236 body=283 status=ok
// SIG undefined FUN_142939236(void)

void FUN_142939236(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *_Src;
  int iVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  local_48 = (void *)0x0;
  local_40 = *(int *)(param_2 + 1);
  lVar4 = (longlong)local_40;
  _Src = (void *)*param_2;
  if (lVar4 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar4 * 2);
  }
  iVar2 = 0;
  if (*(int *)(lVar1 + 0x80) == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = *(undefined2 **)(lVar1 + 0x78);
    iVar2 = *(int *)(lVar1 + 0x80) + -1;
  }
  FUN_140c540b4(&local_48,puVar3,iVar2,1);
  FUN_140c540b4(&local_48,&DAT_149e065c6,1,1);
  FUN_14482b35e(lVar1 + 0x490,local_4c,&local_48,0);
  (**(code **)(**(longlong **)param_1[1] + 0x38))(*(longlong **)param_1[1],param_2);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142939362 FUN_142939362 body=24 status=ok
// SIG undefined FUN_142939362(void)

longlong FUN_142939362(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_149f2eed0;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 142939380 FUN_142939380 body=12 status=ok
// SIG undefined FUN_142939380(void)

void FUN_142939380(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142939389. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14293938c FUN_14293938c body=29 status=ok
// SIG undefined FUN_14293938c(void)

undefined8 FUN_14293938c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429393aa FUN_1429393aa body=676 status=ok
// SIG undefined FUN_1429393aa(void)

undefined8 FUN_1429393aa(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar3 = (int)param_2[1];
  uVar7 = 0;
  iVar10 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar10 = 0;
  }
  if (0 < iVar10) {
    if (iVar3 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    lVar11 = 0;
    uVar7 = 0;
    do {
      uVar9 = ((uint)(ushort)puVar6[lVar11] + (uint)(0x19 < (ushort)puVar6[lVar11] - 0x61) * 0x20) -
              0x20;
      uVar12 = (uint)(uVar7 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar7 ^ uVar9) & 0xff) * 4);
      uVar7 = (ulonglong)
              (uVar12 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar12 & 0xff ^ uVar9 >> 8 & 0xff) * 4));
      lVar11 = lVar11 + 1;
    } while (iVar10 != (int)lVar11);
  }
  plVar1 = (longlong *)param_1[2];
  iVar3 = FUN_145ad97ca(*param_1,uVar7,param_2);
  if (iVar3 == -1) {
    uVar2 = *param_1;
    plVar5 = (longlong *)FUN_14054d1d4();
    iVar3 = (int)param_2[1] + -1;
    if ((int)param_2[1] == 0) {
      iVar3 = 0;
    }
    iVar10 = *(int *)((undefined8 *)param_1[1] + 1);
    iVar4 = iVar3 + 1 + (uint)((longlong)iVar10 == 0);
    local_78 = (undefined2 *)0x0;
    _Src = *(void **)param_1[1];
    local_70 = iVar10;
    if (iVar4 == 0 && iVar10 == 0) {
      local_6c = 0;
    }
    else {
      if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar4 + iVar10);
      }
      FUN_1446dd670(&local_78,iVar4 + iVar10,0);
      if (iVar10 != 0) {
        memcpy(local_78,_Src,(longlong)iVar10 * 2);
      }
    }
    FUN_1401aebe8(&local_78,*param_2,iVar3);
    puVar6 = local_78;
    if (local_70 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    local_68 = (**(code **)(*plVar5 + 0x108))(plVar5,puVar6);
    local_58 = &local_68;
    local_60 = param_2;
    FUN_146b55f3e(uVar2,local_4c,&local_60,0);
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  local_60 = (longlong *)*param_2;
  uVar9 = 0;
  iVar3 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar3 = 0;
  }
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,iVar3);
  lVar11 = (**(code **)(*plVar1 + 0xb0))(plVar1);
  plVar1 = (longlong *)*param_1;
  iVar3 = (int)param_2[1];
  iVar10 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar10 = 0;
  }
  if (0 < iVar10) {
    if (iVar3 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    lVar8 = 0;
    uVar9 = 0;
    do {
      uVar12 = ((uint)(0x19 < (ushort)puVar6[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar6[lVar8]) -
               0x20;
      uVar9 = uVar9 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar9 ^ uVar12) & 0xff) * 4);
      uVar9 = uVar9 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar12 >> 8 & 0xff) * 4);
      lVar8 = lVar8 + 1;
    } while (iVar10 != (int)lVar8);
  }
  iVar3 = FUN_145ad97ca(plVar1,uVar9,param_2);
  if (iVar3 == -1) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)iVar3 * 0x20 + *plVar1;
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)lVar8 >> 8),lVar11 == *(longlong *)(lVar8 + 0x10));
}



// FUNCTION 142939676 FUN_142939676 body=12 status=ok
// SIG undefined FUN_142939676(void)

void FUN_142939676(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014293967f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142939682 FUN_142939682 body=29 status=ok
// SIG undefined FUN_142939682(void)

undefined8 FUN_142939682(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429396a0 FUN_1429396a0 body=354 status=ok
// SIG undefined FUN_1429396a0(void)

undefined4 FUN_1429396a0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  ushort uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_2[1];
  uVar15 = 0;
  iVar10 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar10 = 0;
  }
  if (0 < iVar10) {
    if (iVar1 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = (undefined2 *)*param_2;
    }
    lVar13 = 0;
    do {
      uVar4 = ((uint)(ushort)puVar8[lVar13] + (uint)(0x19 < (ushort)puVar8[lVar13] - 0x61) * 0x20) -
              0x20;
      uVar15 = uVar15 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar15 ^ uVar4) & 0xff) * 4);
      uVar15 = uVar15 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar15 & 0xff ^ uVar4 >> 8 & 0xff) * 4);
      lVar13 = lVar13 + 1;
    } while (iVar10 != (int)lVar13);
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar15) * 4);
    if (iVar10 != -1) {
      lVar13 = *param_1;
LAB_14293976f:
      lVar11 = (longlong)iVar10;
      iVar2 = *(int *)(lVar13 + 8 + lVar11 * 0x18);
      iVar6 = iVar10;
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar7 = 0;
          do {
            uVar12 = *(ushort *)(*(longlong *)(lVar13 + lVar11 * 0x18) + lVar7);
            uVar14 = (ulonglong)uVar12;
            uVar3 = *(ushort *)(*param_2 + lVar7);
            if (uVar12 == uVar3) {
              if (uVar12 == 0) break;
            }
            else {
              if (0x7f < (uVar3 | uVar12)) goto LAB_1429397e1;
              uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
              uVar5 = (ulonglong)uVar3;
              uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
              if ((&DAT_149e05da0)[uVar14] != (&DAT_149e05da0)[uVar5]) goto LAB_1429397e1;
            }
            lVar7 = lVar7 + 2;
          } while( true );
        }
      }
      else if (iVar2 + iVar1 != 1) goto LAB_14293978c;
      goto LAB_1429397f1;
    }
  }
  return 0;
LAB_1429397e1:
  if (uVar12 == uVar3) goto LAB_1429397f1;
LAB_14293978c:
  iVar10 = *(int *)(lVar13 + 0x10 + lVar11 * 0x18);
  iVar6 = -1;
  if (iVar10 == -1) {
LAB_1429397f1:
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar6 != -1);
  }
  goto LAB_14293976f;
}



// FUNCTION 142939820 FUN_142939820 body=12 status=ok
// SIG undefined FUN_142939820(void)

void FUN_142939820(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142939829. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14293982c FUN_14293982c body=29 status=ok
// SIG undefined FUN_14293982c(void)

undefined8 FUN_14293982c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14293984a FUN_14293984a body=29 status=ok
// SIG undefined FUN_14293984a(void)

undefined8 FUN_14293984a(undefined8 param_1,undefined8 *param_2)

{
  FUN_146b418b4(param_1,param_2[1],*param_2);
  return param_1;
}



// FUNCTION 142939886 FUN_142939886 body=12 status=ok
// SIG undefined FUN_142939886(void)

void FUN_142939886(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014293988f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142939892 FUN_142939892 body=29 status=ok
// SIG undefined FUN_142939892(void)

undefined8 FUN_142939892(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429398b0 FUN_1429398b0 body=29 status=ok
// SIG undefined FUN_1429398b0(void)

undefined8 FUN_1429398b0(undefined8 param_1,undefined8 *param_2)

{
  FUN_146b418b4(param_1,param_2[1],*param_2);
  return param_1;
}



// FUNCTION 1429398ec FUN_1429398ec body=12 status=ok
// SIG undefined FUN_1429398ec(void)

void FUN_1429398ec(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001429398f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1429398f8 FUN_1429398f8 body=29 status=ok
// SIG undefined FUN_1429398f8(void)

undefined8 FUN_1429398f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142939916 FUN_142939916 body=1017 status=ok
// SIG undefined FUN_142939916(void)

longlong FUN_142939916(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  longlong *local_168;
  longlong local_160;
  undefined2 *local_158;
  undefined8 local_150;
  undefined2 *local_148;
  undefined8 uStack_140;
  undefined2 *local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118 [6];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8 [4];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  LOCK();
  *(undefined4 *)param_2[1] = 1;
  UNLOCK();
  local_e8 = 0;
  local_e0 = 0;
  local_118[2] = 0;
  local_118[3] = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  if (1 < *(int *)((undefined8 *)*param_2 + 1)) {
    local_118[0] = 0;
    local_118[1] = 0;
    bVar2 = FUN_140f7cb10(local_118,*(undefined8 *)*param_2,0,0);
    LOCK();
    *(uint *)param_2[1] = (uint)bVar2;
    UNLOCK();
    if (*(int *)param_2[1] != 0) {
      local_128 = 0;
      uStack_120 = 0;
      local_178 = CONCAT31(local_178._1_3_,1);
      FUN_144a38a52(local_118,&local_128,&PTR_DAT_14c7585f0,3);
      if (0 < (int)uStack_120) {
        lVar10 = 0;
        local_168 = param_2;
        local_160 = param_1;
LAB_142939a32:
        local_138 = (undefined2 *)0x0;
        uStack_130 = 0;
        local_148 = (undefined2 *)0x0;
        uStack_140 = 0;
        lVar8 = lVar10 * 0x10 + local_128;
        FUN_140056680(&local_158,&DAT_149e01e02);
        local_170 = 0;
        local_178 = 0;
        FUN_1407cdbc6(lVar8,&local_158,&local_138,&local_148);
        if (local_158 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_140ded208(&local_138,&local_158);
        FUN_140db34f4(&local_158,0x22,0);
        uVar1 = local_150;
        puVar9 = local_158;
        local_158 = (undefined2 *)0x0;
        local_150 = 0;
        if (local_138 == (undefined2 *)0x0) {
          local_138 = puVar9;
          uStack_130 = uVar1;
        }
        else {
          FUN_1400020a8();
          local_138 = puVar9;
          uStack_130 = uVar1;
          if (local_158 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        FUN_140e4328c(&local_138);
        FUN_140ded208(&local_148,&local_158);
        FUN_140db34f4(&local_158,0x22,0);
        uVar1 = local_150;
        puVar9 = local_158;
        local_158 = (undefined2 *)0x0;
        iVar11 = (int)local_150;
        local_150 = 0;
        if (local_148 == (undefined2 *)0x0) {
          local_148 = puVar9;
          uStack_140 = uVar1;
        }
        else {
          FUN_1400020a8();
          local_148 = puVar9;
          uStack_140 = uVar1;
          if (local_158 != (undefined2 *)0x0) {
            FUN_1400020a8();
            iVar11 = (int)uStack_140;
          }
        }
        puVar9 = local_148;
        if (iVar11 == 0) {
          puVar9 = &DAT_149dfb77a;
        }
        lVar8 = 0;
        while( true ) {
          uVar3 = *(ushort *)((longlong)puVar9 + lVar8);
          uVar4 = (ulonglong)uVar3;
          uVar6 = *(ushort *)((longlong)&DAT_149e71d50 + lVar8);
          if (uVar3 != uVar6) break;
          if (uVar3 == 0) goto LAB_142939c24;
LAB_142939b99:
          lVar8 = lVar8 + 2;
        }
        if ((uVar6 | uVar3) < 0x80) {
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          uVar7 = (ulonglong)uVar6;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_142939b99;
        }
        if (uVar3 != uVar6) {
          lVar8 = 0;
          goto LAB_142939bca;
        }
LAB_142939c24:
        plVar5 = local_118 + 2;
        goto LAB_142939c2c;
      }
LAB_142939c82:
      FUN_1447a1747(local_128);
      if (local_128 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_118[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_145aeb3d6(param_1,local_118 + 2);
  FUN_145aeb3d6(param_1 + 0x50,local_b8);
  FUN_146b41a20(local_118 + 2);
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_142939bca:
  uVar3 = *(ushort *)((longlong)puVar9 + lVar8);
  uVar4 = (ulonglong)uVar3;
  uVar6 = *(ushort *)((longlong)&DAT_149e060e8 + lVar8);
  if (uVar3 == uVar6) {
    if (uVar3 == 0) goto LAB_142939c6b;
LAB_142939be6:
    lVar8 = lVar8 + 2;
    goto LAB_142939bca;
  }
  if ((uVar6 | uVar3) < 0x80) {
    uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_142939be6;
  }
  if (uVar3 != uVar6) {
    LOCK();
    *(undefined4 *)local_168[1] = 0;
    UNLOCK();
    goto LAB_142939c3a;
  }
LAB_142939c6b:
  plVar5 = local_b8;
LAB_142939c2c:
  FUN_14482b35e(plVar5,&local_158,&local_138,0);
LAB_142939c3a:
  if (local_148 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_138 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar10 = lVar10 + 1;
  param_1 = local_160;
  if ((int)uStack_120 <= lVar10) goto LAB_142939c82;
  goto LAB_142939a32;
}



// FUNCTION 142939d2e FUN_142939d2e body=12 status=ok
// SIG undefined FUN_142939d2e(void)

void FUN_142939d2e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142939d37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142939d3a FUN_142939d3a body=29 status=ok
// SIG undefined FUN_142939d3a(void)

undefined8 FUN_142939d3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142939d58 FUN_142939d58 body=29 status=ok
// SIG undefined FUN_142939d58(void)

undefined8 FUN_142939d58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142939d8a FUN_142939d8a body=93 status=ok
// SIG undefined FUN_142939d8a(void)

void FUN_142939d8a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2f2f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2f280;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142939de8 FUN_142939de8 body=93 status=ok
// SIG undefined FUN_142939de8(void)

void FUN_142939de8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f2f2f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f2f280;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142939e46 FUN_142939e46 body=126 status=ok
// SIG undefined FUN_142939e46(void)

void FUN_142939e46(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f2f2f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f2f280;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142939eb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142939ece FUN_142939ece body=20 status=ok
// SIG undefined FUN_142939ece(void)

undefined1 FUN_142939ece(longlong param_1)

{
  FUN_142939ee2(param_1 + 0x18);
  return 1;
}



// FUNCTION 142939ee2 FUN_142939ee2 body=530 status=ok
// SIG undefined FUN_142939ee2(void)

void FUN_142939ee2(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  int iVar14;
  ulonglong uVar15;
  
  lVar2 = *param_1;
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  iVar9 = *(int *)(lVar2 + 0x28);
  *(uint *)(lVar2 + 0x28) = iVar9 + 1U;
  if (*(uint *)(lVar2 + 0x2c) < iVar9 + 1U) {
    FUN_146b5753e((longlong *)(lVar2 + 0x20),iVar9);
  }
  lVar12 = *(longlong *)(lVar2 + 0x20);
  *(undefined8 *)(lVar12 + (longlong)iVar9 * 0x10) = uVar3;
  *(longlong **)(lVar12 + 8 + (longlong)iVar9 * 0x10) = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  iVar9 = *(int *)(lVar2 + 0x38);
  *(uint *)(lVar2 + 0x38) = iVar9 + 1U;
  if (*(uint *)(lVar2 + 0x3c) < iVar9 + 1U) {
    FUN_146b575c4((longlong *)(lVar2 + 0x30),iVar9);
  }
  lVar12 = *(longlong *)(lVar2 + 0x30);
  *(undefined8 *)(lVar12 + (longlong)iVar9 * 0x10) = *param_2;
  lVar5 = param_2[1];
  *(longlong *)(lVar12 + 8 + (longlong)iVar9 * 0x10) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  iVar9 = *(int *)(lVar2 + 0xd4);
  *(int *)(lVar2 + 0xd4) = iVar9 + 1;
  uVar10 = (ulonglong)*(int *)(lVar2 + 200);
  if ((longlong)uVar10 < 1) {
    *(int *)(lVar2 + 0xd4) = iVar9;
  }
  else {
    plVar4 = (longlong *)(lVar2 + 0xc0);
    bVar13 = false;
    do {
      lVar12 = uVar10 * 0x10 + -8;
      uVar15 = uVar10;
      while (((*(int *)(*plVar4 + lVar12) != 0 &&
              (plVar6 = *(longlong **)(*plVar4 + -8 + lVar12), plVar6 != (longlong *)0x0)) &&
             (cVar8 = (**(code **)(*plVar6 + 0x60))(), cVar8 != '\0'))) {
        lVar12 = lVar12 + -0x10;
        bVar7 = uVar15 < 2;
        uVar15 = uVar15 - 1;
        if (bVar7) {
          iVar9 = *(int *)(lVar2 + 0xd4) + -1;
          *(int *)(lVar2 + 0xd4) = iVar9;
          if (!bVar13) {
            return;
          }
          goto LAB_14293a012;
        }
      }
      uVar10 = uVar15 - 1;
      bVar13 = true;
    } while (1 < uVar15);
    iVar9 = *(int *)(lVar2 + 0xd4) + -1;
    *(int *)(lVar2 + 0xd4) = iVar9;
LAB_14293a012:
    if (iVar9 < 1) {
      iVar9 = *(int *)(lVar2 + 200);
      iVar11 = iVar9;
      if (0 < iVar9) {
        iVar14 = 0;
        do {
          if (((*(int *)(*plVar4 + 8 + (longlong)iVar14 * 0x10) == 0) ||
              (plVar6 = *(longlong **)(*plVar4 + (longlong)iVar14 * 0x10), plVar6 == (longlong *)0x0
              )) || (cVar8 = (**(code **)(*plVar6 + 0x28))(), cVar8 != '\0')) {
            FUN_14005b288(plVar4,iVar14);
            FUN_14005b248(plVar4);
          }
          else {
            iVar14 = iVar14 + 1;
          }
          iVar11 = *(int *)(lVar2 + 200);
        } while (iVar14 < iVar11);
      }
      iVar14 = 2;
      if (2 < iVar11 * 2) {
        iVar14 = iVar11 * 2;
      }
      *(int *)(lVar2 + 0xd0) = iVar14;
      if ((iVar14 < iVar9) && (*(int *)(lVar2 + 0xcc) != iVar11)) {
        FUN_14045812c(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14293a0f4 FUN_14293a0f4 body=87 status=ok
// SIG undefined FUN_14293a0f4(void)

void FUN_14293a0f4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar3 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
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
                    /* WARNING: Could not recover jumptable at 0x00014293a140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14293a14c FUN_14293a14c body=66 status=ok
// SIG undefined FUN_14293a14c(void)

void FUN_14293a14c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = (code *)param_1[2];
  plVar3 = param_1 + 6;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[4];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2);
  *(undefined4 *)(*(longlong *)*param_1 + 0x80) = 0;
  FUN_140b576f0();
  return;
}



// FUNCTION 14293a18e FUN_14293a18e body=131 status=ok
// SIG undefined FUN_14293a18e(void)

undefined8 * FUN_14293a18e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_149f2f380;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  puVar2[4] = lVar1;
  puVar2[6] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x40);
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x30);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 6);
  }
  return puVar2 + 2;
}



// FUNCTION 14293a212 FUN_14293a212 body=5 status=ok
// SIG undefined FUN_14293a212(void)

longlong FUN_14293a212(longlong param_1)

{
  return param_1 + 0x10;
}



// FUNCTION 14293a218 FUN_14293a218 body=29 status=ok
// SIG undefined FUN_14293a218(void)

void FUN_14293a218(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14293a236 FUN_14293a236 body=111 status=ok
// SIG undefined FUN_14293a236(void)

undefined8 * FUN_14293a236(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f2f380;
  if (param_1[4] != 0) {
    plVar3 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14293a2a6 FUN_14293a2a6 body=97 status=ok
// SIG undefined FUN_14293a2a6(void)

void FUN_14293a2a6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x98);
  *(uint *)(lVar2 + 0x98) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x9c) < iVar1 + 1U) {
    FUN_146b576f6((longlong *)(lVar2 + 0x90),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x90);
  *(longlong *)(lVar2 + (longlong)iVar1 * 0x10) = param_1[1];
  lVar3 = param_1[2];
  *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14293a308 FUN_14293a308 body=49 status=ok
// SIG undefined FUN_14293a308(void)

longlong FUN_14293a308(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_149f2f3a0;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(longlong *)(param_2 + 0x28) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_2 + 0x18;
}



// FUNCTION 14293a340 FUN_14293a340 body=12 status=ok
// SIG undefined FUN_14293a340(void)

void FUN_14293a340(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014293a349. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14293a34c FUN_14293a34c body=64 status=ok
// SIG undefined FUN_14293a34c(void)

undefined8 * FUN_14293a34c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f2f3a0;
  plVar2 = (longlong *)param_1[3];
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



// FUNCTION 14293a38c FUN_14293a38c body=319 status=ok
// SIG undefined FUN_14293a38c(void)

undefined8 * FUN_14293a38c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_146b44046(param_2);
  plVar2 = (longlong *)
           (**(code **)(**(longlong **)param_2[2] + 8))(*(longlong **)param_2[2],param_2,&local_31);
  if (param_1 != param_2) {
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
  }
  *(bool *)(param_1 + 2) = plVar2 != (longlong *)0x0 && local_31 == '\0';
  *(int *)((longlong)param_1 + 0x14) = (int)local_48;
  *(int *)(param_1 + 3) = local_48._4_4_;
  *(int *)((longlong)param_1 + 0x1c) = (int)uStack_40;
  *(int *)(param_1 + 4) = uStack_40._4_4_;
  if (plVar2 != (longlong *)0x0 && local_31 == '\0') {
    local_60 = plVar2;
    (**(code **)(*plVar2 + 8))(plVar2,local_50);
    if (((((int)local_48 != *(int *)(local_58 + 8)) || (local_48._4_4_ != *(int *)(local_58 + 0xc)))
        || ((int)uStack_40 != *(int *)(local_58 + 0x10))) ||
       (uStack_40._4_4_ != *(int *)(local_58 + 0x14))) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    (**(code **)(*local_60 + 0x18))();
  }
  else if (plVar2 == (longlong *)0x0) goto LAB_14293a4a6;
  (**(code **)*plVar2)(plVar2,1);
LAB_14293a4a6:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14293a4cc FUN_14293a4cc body=140 status=ok
// SIG undefined FUN_14293a4cc(void)

undefined8 * FUN_14293a4cc(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_149f2f420;
  puVar1 = puVar4 + 1;
  puVar4[1] = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(puVar4 + 2) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  return puVar1;
}



// FUNCTION 14293a55e FUN_14293a55e body=29 status=ok
// SIG undefined FUN_14293a55e(void)

void FUN_14293a55e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14293a57c FUN_14293a57c body=57 status=ok
// SIG undefined FUN_14293a57c(void)

undefined8 * FUN_14293a57c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f2f420;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14293a5b6 FUN_14293a5b6 body=191 status=ok
// SIG undefined FUN_14293a5b6(void)

undefined8 * FUN_14293a5b6(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = param_1 + 2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_146b446bc(&local_38);
  *param_1 = local_38;
  if (local_30 != 0) {
    param_1[1] = local_30;
  }
  if (puVar1 != param_2) {
    iVar2 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 3) = iVar2;
    if ((longlong)iVar2 != 0) {
      FUN_1446dd670(puVar1,iVar2,0);
      memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14293a678 FUN_14293a678 body=96 status=ok
// SIG undefined FUN_14293a678(void)

undefined8 * FUN_14293a678(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_149f2f490;
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_2 + 0x20) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  return puVar1;
}



// FUNCTION 14293a6de FUN_14293a6de body=12 status=ok
// SIG undefined FUN_14293a6de(void)

void FUN_14293a6de(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014293a6e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14293a6ea FUN_14293a6ea body=57 status=ok
// SIG undefined FUN_14293a6ea(void)

undefined8 * FUN_14293a6ea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f2f490;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14293a724 FUN_14293a724 body=831 status=ok
// SIG undefined FUN_14293a724(void)

char * FUN_14293a724(char *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void **ppvVar4;
  void *pvVar5;
  int iVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  undefined2 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_158 [47];
  char local_129;
  longlong *local_128;
  char *local_120;
  longlong local_118;
  ulonglong uStack_110;
  void *local_108;
  ulonglong uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined8 local_d8;
  undefined1 local_cc [4];
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar3 = *param_2;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_d8 = 0;
  puVar13 = &DAT_149dfb77a;
  puVar11 = &DAT_149dfb77a;
  if (*(int *)((undefined8 *)param_2[1] + 1) != 0) {
    puVar11 = *(undefined2 **)param_2[1];
  }
  cVar8 = (**(code **)(**(longlong **)(lVar3 + 0x50) + 0x18))
                    (*(longlong **)(lVar3 + 0x50),puVar11,&local_d8);
  if (*(int *)((undefined8 *)param_2[1] + 1) != 0) {
    puVar13 = *(undefined2 **)param_2[1];
  }
  (**(code **)(**(longlong **)(lVar3 + 0x50) + 0x80))(*(longlong **)(lVar3 + 0x50),puVar13);
  if (cVar8 == '\0') {
    local_d8 = 0;
    cVar8 = '\x01';
  }
  else {
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = (void *)0x0;
    uStack_100 = 0;
    local_e8 = 0;
    ppvVar4 = (void **)param_2[1];
    if (&local_108 != ppvVar4) {
      uVar1 = *(uint *)(ppvVar4 + 1);
      pvVar5 = *ppvVar4;
      uStack_100 = (ulonglong)uVar1;
      if ((longlong)(int)uVar1 != 0) {
        FUN_1446dd670(&local_108,uVar1,0);
        memcpy(local_108,pvVar5,(longlong)(int)uVar1 * 2);
      }
    }
    plVar10 = (longlong *)FUN_146b61e38(&local_108);
    local_118 = 0;
    uStack_110 = 0;
    cVar8 = (**(code **)(*plVar10 + 8))(plVar10,&local_118);
    lVar7 = local_118;
    uVar12 = uStack_110 & 0xffffffff;
    if (cVar8 != '\0') {
      if ((int)uStack_110 == 0) {
        uVar12 = 0;
      }
      else {
        lVar14 = (longlong)(int)uStack_110;
        lVar15 = 0;
        local_129 = cVar8;
        local_128 = plVar10;
        local_120 = param_1;
        do {
          iVar2 = *(int *)(lVar7 + 8 + lVar15);
          iVar6 = iVar2 + -1;
          if (iVar2 == 0) {
            iVar6 = 0;
          }
          iVar2 = *(int *)(lVar3 + 0x10);
          iVar9 = iVar6 + 1 + (uint)((longlong)iVar2 == 0);
          local_c8 = (void *)0x0;
          pvVar5 = *(void **)(lVar3 + 8);
          local_c0 = iVar2;
          if (iVar9 == 0 && iVar2 == 0) {
            local_bc = 0;
          }
          else {
            if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar9 + iVar2);
            }
            FUN_1446dd670(&local_c8,iVar9 + iVar2,0);
            if (iVar2 != 0) {
              memcpy(local_c8,pvVar5,(longlong)iVar2 * 2);
            }
          }
          FUN_1401aebe8(&local_c8,*(undefined8 *)(lVar7 + lVar15),iVar6);
          FUN_140e830ae(&local_b8,local_cc,&local_c8,0);
          if (local_c8 != (void *)0x0) {
            FUN_1400020a8();
          }
          lVar15 = lVar15 + 0x10;
        } while (lVar14 * 0x10 != lVar15);
        uVar12 = uStack_110 & 0xffffffff;
        plVar10 = local_128;
        param_1 = local_120;
        cVar8 = local_129;
      }
    }
    FUN_1447a1747(local_118,uVar12);
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)*plVar10)(plVar10,1);
    }
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    if (local_108 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  *param_1 = cVar8;
  *(undefined8 *)(param_1 + 8) = local_d8;
  FUN_145aeb3d6(param_1 + 0x10,&local_b8);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14293aa6a FUN_14293aa6a body=5 status=ok
// SIG undefined FUN_14293aa6a(void)

longlong FUN_14293aa6a(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14293aa70 FUN_14293aa70 body=12 status=ok
// SIG undefined FUN_14293aa70(void)

void FUN_14293aa70(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014293aa79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14293aa7c FUN_14293aa7c body=29 status=ok
// SIG undefined FUN_14293aa7c(void)

undefined8 FUN_14293aa7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14293aa9a FUN_14293aa9a body=705 status=ok
// SIG undefined FUN_14293aa9a(void)

undefined1 * FUN_14293aa9a(undefined1 *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined2 *puVar14;
  bool bVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *param_2;
  local_50 = 0;
  puVar14 = &DAT_149dfb77a;
  if (*(int *)((undefined8 *)param_2[1] + 1) != 0) {
    puVar14 = *(undefined2 **)param_2[1];
  }
  cVar7 = (**(code **)(**(longlong **)(lVar4 + 0x50) + 0x18))(*(longlong **)(lVar4 + 0x50),puVar14);
  (**(code **)(**(longlong **)(lVar4 + 0x50) + 0x80))();
  if (cVar7 == '\0') {
    local_50 = 0;
    bVar8 = 0;
  }
  else {
    plVar5 = (longlong *)param_2[1];
    plVar6 = (longlong *)param_2[2];
    iVar3 = (int)plVar5[1];
    uVar18 = 0;
    iVar16 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar16 = 0;
    }
    if (0 < iVar16) {
      if (iVar3 == 0) {
        puVar14 = &DAT_149dfb77a;
      }
      else {
        puVar14 = (undefined2 *)*plVar5;
      }
      lVar17 = 0;
      do {
        uVar9 = ((uint)(ushort)puVar14[lVar17] +
                (uint)(0x19 < (ushort)puVar14[lVar17] - 0x61) * 0x20) - 0x20;
        uVar18 = uVar18 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar18 ^ uVar9) & 0xff) * 4);
        uVar18 = uVar18 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar18 & 0xff ^ uVar9 >> 8 & 0xff) * 4);
        lVar17 = lVar17 + 1;
      } while (iVar16 != (int)lVar17);
    }
    if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
      plVar10 = plVar6 + 7;
      if ((longlong *)plVar6[8] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar6[8];
      }
      iVar16 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar6[9] - 1U & uVar18) * 4);
      if (iVar16 != -1) {
        lVar17 = *plVar6;
LAB_14293abf0:
        lVar11 = (longlong)iVar16;
        iVar16 = *(int *)(lVar17 + 8 + lVar11 * 0x18);
        if (iVar16 == iVar3) {
          if (1 < iVar3) {
            lVar19 = 0;
            do {
              uVar1 = *(ushort *)(*(longlong *)(lVar17 + lVar11 * 0x18) + lVar19);
              uVar2 = *(ushort *)(*plVar5 + lVar19);
              if (uVar1 == uVar2) {
                if (uVar1 == 0) break;
              }
              else {
                if (0x7f < (uVar2 | uVar1)) {
                  iVar16 = (uint)uVar1 - (uint)uVar2;
                  goto LAB_14293ac6e;
                }
                if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
                goto code_r0x00014293ac6b;
              }
              lVar19 = lVar19 + 2;
            } while( true );
          }
          goto LAB_14293ad54;
        }
        if (iVar16 + iVar3 == 1) goto LAB_14293ad54;
        goto LAB_14293ac0b;
      }
    }
LAB_14293ac7d:
    local_58 = 0;
    if (iVar3 == 0) {
      puVar14 = &DAT_149dfb77a;
    }
    else {
      puVar14 = (undefined2 *)*plVar5;
    }
    cVar7 = (**(code **)(**(longlong **)(lVar4 + 0x50) + 0x28))
                      (*(longlong **)(lVar4 + 0x50),puVar14,&local_58);
    if (cVar7 != '\0') {
      bVar15 = local_58 < *(longlong *)param_2[3];
      bVar8 = FUN_146b46a6a(param_2[1]);
      if ((bVar15 & bVar8) == 1) {
        uVar13 = 1;
        bVar8 = 1;
        bVar15 = true;
        if (*(char *)(lVar4 + 0x30) == '\0') {
          if (*(int *)((undefined8 *)param_2[1] + 1) == 0) {
            puVar14 = &DAT_149dfb77a;
          }
          else {
            puVar14 = *(undefined2 **)param_2[1];
          }
          (**(code **)(**(longlong **)(lVar4 + 0x50) + 0x68))(*(longlong **)(lVar4 + 0x50),puVar14);
          uVar13 = 1;
          bVar8 = 1;
          bVar15 = true;
        }
      }
      else {
        uVar13 = 0;
      }
      goto LAB_14293acf8;
    }
    bVar8 = FUN_146b46a6a();
  }
  uVar13 = 0;
  bVar15 = false;
LAB_14293acf8:
  uVar12 = 0;
LAB_14293acfa:
  *param_1 = uVar12;
  param_1[1] = bVar15;
  param_1[2] = bVar8;
  param_1[3] = uVar13;
  *(undefined8 *)(param_1 + 8) = local_50;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014293ac6b:
  iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_14293ac6e:
  if (iVar16 == 0) {
LAB_14293ad54:
    uVar12 = 1;
    bVar8 = 0;
    uVar13 = 0;
    bVar15 = false;
    goto LAB_14293acfa;
  }
LAB_14293ac0b:
  iVar16 = *(int *)(lVar17 + 0x10 + lVar11 * 0x18);
  if (iVar16 == -1) goto LAB_14293ac7d;
  goto LAB_14293abf0;
}



// FUNCTION 14293ad60 FUN_14293ad60 body=5 status=ok
// SIG undefined FUN_14293ad60(void)

longlong FUN_14293ad60(longlong param_1)

{
  return param_1 + 8;
}


